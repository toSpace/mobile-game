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
	
	//xml vars
	public var _imgPath:String;
	public var _x:Float;
	public var _y:Float;
	public var _rotation:Float;
	public var _physics:String;
	public var _elasticity:Float;
	public var _density:Float;
	public var _dynamicFriction:Float;
	public var _staticFriction:Float;
	public var _rollingFriction:Float;

	public function new(xmlUrl:String):Void{

		//setting correct stages
		space = Main.space;
		canvas = Main.canvas;

		//read xml
		if(xmlUrl != null || xmlUrl !=''){
			readXml(xmlUrl);
			init();
		}
	}

	public function init():Void{
		asset = new Bitmap( Assets.getBitmapData(_imgPath) );
		_y = Mobile.getY(asset) - _y;

		//make physics object
		physicsObject( _physics );
		body.setShapeMaterials( makeMaterial() );

		//add to render manager
		RenderManager.add(this);

		canvas.addChild(asset);
	}

	public function readXml(url:String):Void{

		var xmlFile = Assets.getText(Mobile.xml + url);
		var read = new haxe.xml.Fast( Xml.parse(xmlFile) );

		var asset = read.node.asset;
		_imgPath = Mobile.asset + asset.node.img.innerData;

		//position
		_x = Std.parseFloat(asset.node.pos.att.x);
		_y = Std.parseFloat(asset.node.pos.att.y);
		_rotation = Std.parseFloat(asset.node.pos.att.rotation);

		//physics
		_physics = asset.node.physics.innerData;
		_elasticity = Std.parseFloat(asset.node.material.att.elasticity);
		_dynamicFriction = Std.parseFloat(asset.node.material.att.dynamicFriction);
		_staticFriction = Std.parseFloat(asset.node.material.att.staticFriction);
		_density = Std.parseFloat(asset.node.material.att.density);
		_rollingFriction = Std.parseFloat(asset.node.material.att.rollingFriction);

	}

	public function physicsObject(physic:String){
		// body = PhysicsData.createBody(physic, asset);
  //       body.position.setxy( xml.get('x') , xml.get('y') );
  //       body.space = space;
	}

	private function makeMaterial():Material{
		return new Material(
			_elasticity, 
			_dynamicFriction, 
			_staticFriction, 
			_density,
			_rollingFriction
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