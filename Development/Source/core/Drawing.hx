//nme
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.events.MouseEvent;

//nape
import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyList;
import nape.geom.Vec2;

class Drawing{

	public static var drawing:Bool = false;
	public static var x:Float;
	public static var y:Float;

	public static function init():Void{
		Main.canvas.addEventListener(MouseEvent.MOUSE_DOWN,startDraw);
        Main.canvas.addEventListener(MouseEvent.MOUSE_MOVE,checkDraw);
        Main.canvas.addEventListener(MouseEvent.MOUSE_UP,stopDraw);
	}

	static private function startDraw(e:MouseEvent):Void{
		drawing = true;
	}

	static private function stopDraw(e:MouseEvent):Void{
		drawing = false;
	}

	static private function checkDraw(e:MouseEvent):Void{
		x = e.localX;
		y = e.localY;
	}

	static public function checkActive(b:Body):Bool{
		var active:Bool = false;
		var mp = new Vec2(x, y);
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

}