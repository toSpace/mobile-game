//nme
import nme.display.Sprite;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.events.MouseEvent;
import nme.geom.Point;

//nape
import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyList;
import nape.geom.Vec2;

class Drawing{

	public static var drawing:Bool = false;
	public static var erasing:Bool = true;
	public static var locked:Bool = false;
	public static var x:Float;
	public static var y:Float;
	public static var drawList = new Array<Dynamic>();

	public static function init():Void{
		Main.canvas.addEventListener(MouseEvent.MOUSE_DOWN,startDraw);
        Main.canvas.addEventListener(MouseEvent.MOUSE_MOVE,checkDraw);
        Main.canvas.addEventListener(MouseEvent.MOUSE_UP,stopDraw);
	}

	static private function startDraw(e:MouseEvent):Void{
		drawing = true;

		x = e.localX;
		y = e.localY;

		//draw
		if(!Drawing.locked){
			var newDrawing = new LineDrawing(x, y);
		}
	}

	static private function stopDraw(e:MouseEvent):Void{
		drawing = false;
	}

	static private function checkDraw(e:MouseEvent):Void{
		// convert to global
		// var point:Point = Main.canvas.localToGlobal( new Point(e.localX, e.localY) );
		// x = point.x;
		// y = point.y;

		x = e.localX;
		y = e.localY;
	}

	static public function checkActive(b:Body):Bool{
		var active:Bool = false;
		var mp = new Vec2(x, y); //not sure?
		var bodies:BodyList = Main.space.bodiesUnderPoint(mp);

		if (bodies.length>0) {
            for( i in 0...bodies.length ){
                // getting the body
                var body:Body=bodies.at(i);
                if (body == b) {
                    active = true;
                }
            }
        }

		return active;
	}

	static public function mouseOver(asset:Dynamic):Bool{
		return asset.hitTestPoint(x, y);
	}

	static public function addDrawObject(asset:Dynamic):Void{
		drawList.push(asset);
	}

}