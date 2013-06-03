//nme
import nme.display.Sprite;
import nme.Assets;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.display.DisplayObject;
import nme.display.Bitmap;
import nme.display.BitmapData;

//nape
import nape.phys.Body;
import nape.space.Space;
import nape.geom.Vec2;

class GameObject {

	public var body:Body;
	public var space:Space;
	public var canvas:Sprite;
	public var asset:Bitmap;
	public var xml:Hash<Dynamic>;

	public function new(xmlUrl:String):Void{

		//setting correct stages
		space = Main.space;
		canvas = Main.canvas;

		//read xml
		xml = readXml(xmlUrl);
		asset = new Bitmap( Assets.getBitmapData( xml.get('img') ) );
		canvas.addChild(asset);

		//make physics object
		physicsObject( xml.get('physics') );

		//add to render manager
		RenderManager.add(this);

	}

	private function readXml(url:String):Hash<Dynamic>{
		var p = new Hash<Dynamic>();
		var xmlFile = Assets.getText(Retina.xml + url);
		var read = new haxe.xml.Fast( Xml.parse(xmlFile) );

		var asset = read.node.asset;
		p.set('img', Retina.asset + asset.node.img.innerData);
		p.set('x', asset.node.pos.att.x);
		p.set('y', asset.node.pos.att.y);
		p.set('rotation', asset.node.pos.att.rotation);
		p.set('physics', asset.node.physics.innerData);
		//todo material
		return p;
	}

	public function physicsObject(physic:String){

	}

	public function render():Void{
		renderPhysics();
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