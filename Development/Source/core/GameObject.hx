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

	public function new(xmlUrl:String, stage:Sprite, napeSpace:Space):Void{
		//setting correct stages
		space = napeSpace;
		canvas = stage;

		var xml = readXml(xmlUrl);
		var asset = new Bitmap( Assets.getBitmapData(xml.get('img')) );
		stage.addChild(asset);
		trace(stage);

	}

	private function readXml(url:String):Hash<Dynamic>{
		var p = new Hash<Dynamic>();
		var xmlFile = Assets.getText(Path.xml + url);
		var read = new haxe.xml.Fast( Xml.parse(xmlFile) );
		//trace(xmlFile);

		var asset = read.node.asset;
		p.set('img', Path.asset + asset.node.img.innerData);
		p.set('x', asset.node.pos.att.x);
		p.set('y', asset.node.pos.att.y);

		return p;
	}

	public function render():Void{
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

	public function setXY(x:Int, y:Int){
		body.position.setxy(x, y);
	}	


}