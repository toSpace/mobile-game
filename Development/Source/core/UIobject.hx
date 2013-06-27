//nme
import flash.display.Sprite;
import openfl.Assets;
import flash.events.Event;
import flash.events.EventDispatcher;
import flash.display.DisplayObject;
import flash.display.Bitmap;
import flash.events.MouseEvent;

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
		canvas.addChild(parent);

		//add events - MAKE THIS WORK
		parent.addEventListener(Event.ADDED_TO_STAGE, onAdded);
		parent.addEventListener(MouseEvent.CLICK, mouseClick);
		parent.addEventListener(MouseEvent.MOUSE_OVER, mouseOver);
		parent.addEventListener(MouseEvent.MOUSE_OUT, mouseOut);

		//set parent
		parent.x = x;
		parent.y = Mobile.getY(asset) - y;

	}

	public function onAdded(ev:Event){}
	public function mouseClick(ev:MouseEvent){}
	public function mouseOver(ev:MouseEvent){}
	public function mouseOut(ev:MouseEvent){}

	public function render(){}

	//http://fugocode.blogspot.nl/2013/04/animated-sprite-using-bitmap.html


}