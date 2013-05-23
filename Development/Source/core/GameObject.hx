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

class GameObject {

	public var body(get,set):Body;
	public var space(get,null):Space;
	public var canvas(get,null):DisplayObject;
	public var asset(get,null):Bitmap;

	public function new(){
		super();
	}

	public function setup(xmlUrl:String, stage:DisplayObject, napeSpace:Space):Void{
		//setting correct stages
		space = napeSpace;
		canvas = stage;

		asset = new Bitmap(Assets.getBitmapData ("assets/hill.png"));
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

	}

	public function hide():Void{
		//remove from render loop
	}

	public function setXY(x:Int, y:Int){
		objBody.position.setxy(x, y);
	}

	//get properties
	private function get_body():Body {
    	return body;
   	}
   	private function get_space():Space {
    	return space;
   	}
   	private function get_canvas():DisplayObject {
    	return canvas;
   	}
   	private function get_asset():DisplayObject {
    	return asset;
   	}

   	//set properties
   	private function set_body( obj : Body ):Body {
    	return body = obj;
	}	


}