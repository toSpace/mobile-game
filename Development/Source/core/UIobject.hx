//nme
import nme.display.Sprite;
import nme.Assets;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.display.DisplayObject;
import nme.display.Bitmap;
import nme.events.MouseEvent;

class UIobject {

	public var canvas:Dynamic;
	public var asset:Bitmap;
	public var parent:Sprite;
	
	public function new(url:String,x:Float,y:Float,?fixed:Bool=false){

		if(fixed){
			canvas = Main.stage;
		} else {
			canvas = Main.canvas;
		}

		asset = new Bitmap( Assets.getBitmapData( Mobile.asset + url ) );
		parent = new Sprite();

		parent.addChild(asset);
		canvas.addChild(asset);

		//set parent
		parent.x = x;
		parent.y = Mobile.getY(asset) - y;
		parent.width = asset.width;
		parent.height = asset.height;

		//set bitmap
		asset.x = parent.x;
		asset.y = parent.y;

		//add events
		parent.addEventListener(MouseEvent.CLICK, click);
		parent.addEventListener(MouseEvent.MOUSE_OVER, mouseOVER);
		parent.addEventListener(MouseEvent.MOUSE_OUT, mouseOUT);

		RenderManager.add(this);

	}

	public function click(ev:MouseEvent){}
	public function mouseOVER(ev:MouseEvent){}
	public function mouseOUT(ev:MouseEvent){}

	public function render(){}

	//http://fugocode.blogspot.nl/2013/04/animated-sprite-using-bitmap.html


}