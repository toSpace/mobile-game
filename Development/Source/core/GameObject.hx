//nme
import flash.display.Sprite;
import openfl.Assets;
import flash.events.Event;
import flash.events.EventDispatcher;
import flash.display.DisplayObject;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.geom.Point;

//nape
import nape.phys.Body;
import nape.phys.Material;
import nape.space.Space;
import nape.geom.Vec2;
import nape.geom.AABB;

class GameObject {

	public var body:Body;
	public var space:Space;
	public var canvas:Sprite;
	public var asset:Bitmap;
	public var xml:Map<String, Dynamic>;

	public function new(xmlUrl:String):Void{

		//setting correct stages
		space = Main.space;
		canvas = Main.canvas;

		//read xml
		readXml(xmlUrl);
		asset = new Bitmap( Assets.getBitmapData( xml.get('img') ) );
		xml.set('y', Mobile.getY(asset) - xml.get('y') );

		//make physics object
		physicsObject( xml.get('physics') );
		body.setShapeMaterials( makeMaterial() );

		//add to render manager
		RenderManager.add(this);

		canvas.addChild(asset);
	}

	private function readXml(url:String):Void{

		var xmlFile = Assets.getText(Mobile.xml + url);
		var read = new haxe.xml.Fast( Xml.parse(xmlFile) );

		var asset = read.node.asset;
		xml.set('img', Mobile.asset + asset.node.img.innerData);

		//position
		xml.set('x', asset.node.pos.att.x);
		xml.set('y', asset.node.pos.att.y);
		xml.set('rotation', asset.node.pos.att.rotation);

		//physics
		xml.set('physics', asset.node.physics.innerData);
		xml.set('elasticity', asset.node.material.att.elasticity);
		xml.set('dynamicFriction', asset.node.material.att.dynamicFriction);
		xml.set('staticFriction', asset.node.material.att.staticFriction);
		xml.set('density', asset.node.material.att.density);
		xml.set('rollingFriction', asset.node.material.att.rollingFriction);


	}

	public function physicsObject(physic:String){
		// body = PhysicsData.createBody(physic, asset);
  //       body.position.setxy( xml.get('x') , xml.get('y') );
  //       body.space = space;
	}

	private function makeMaterial():Material{
		return new Material(
			xml.get('elasticity'), 
			xml.get('dynamicFriction'), 
			xml.get('staticFriction'), 
			xml.get('density'),
			xml.get('rollingFriction')
		);
	}

	public function render():Void{
		if(inView()) renderPhysics();
	}

	private function renderPhysics():Void{
		//render this object
		var graphic:Null<DisplayObject> = body.userData.graphic;
        var graphicOffset:Vec2 = body.userData.graphicOffset;
        var position:Vec2 = body.localPointToWorld(graphicOffset);
        graphic.x = position.x;
        graphic.y = position.y;
        graphic.rotation = (body.rotation * 180/Math.PI) % 360;
        position.dispose();
	}

	public function remove():Void{
		//remove from render loop
		hide();

		//remove from stage
		canvas.removeChild(asset);

		//remove from NAPE
		//?
	}

	public function inView():Bool{
		var toReturn:Bool = false;
		var camera:Point = Camera.getPosition();
		var bodyPos:Vec2 = body.position;
		var bodyBounds:AABB = body.bounds;

		if(
			(bodyPos.x - bodyBounds.width > camera.x - Settings.cameraOverflow && bodyPos.x - bodyBounds.width < camera.x + Mobile.screenWidth + Settings.cameraOverflow)
			|| 
			(bodyPos.x + bodyBounds.width > camera.x - Settings.cameraOverflow && bodyPos.x + bodyBounds.width < camera.x + Mobile.screenWidth + Settings.cameraOverflow) 	
		){
			toReturn = true;
		}

		// return toReturn;
		return true;
	}

	public function hide():Void{
		//remove from render loop
	}

	public function setXY(x:Float, y:Float, offset:Bool=false){
		var bodyOffset:Vec2 = body.userData.graphicOffset;
		if(offset){
			x -= bodyOffset.x;
			y -= bodyOffset.y;
		}
		body.position.setxy(x, y);
	}

	//public function rotation(rotation:Int){}	


}