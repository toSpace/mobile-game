import nme.geom.Point;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.events.KeyboardEvent;

class Camera
{

	private static var cameraSpeed:Float;
	public static var smoothing:Float = 0.5;
	private static var targetX:Float = 0;
	private static var targetY:Float = 0;
	private static var currentX:Float = 0;
	private static var currentY:Float = 0;

	//add zoom
	
	public static function reload(){
		//reset speed
		setSpeed(0);
		targetX = 0;
		targetY = 0;
	}

	public static function move(x:Float, y:Float, ?direct:Bool=false){

		//check
		if(x < 0){
			x = 0;
		}
		if(y < 0){
			y = 0;
		}

		if(direct){
			Main.canvas.x = x * -1;
			Main.canvas.y = y * -1;
		} else {
			targetX = x * -1;
			targetY = y * -1;
			currentX = Main.canvas.x;
			currentY = Main.canvas.y;
		}
	}

	public static function getPosition():Point{
		return new Point( Math.abs(Main.canvas.x) , Math.abs(Main.canvas.y) );
	}
	
	public static function setSpeed(speed:Float){
		if(speed == 0) speed = 5;

		cameraSpeed = speed;
	}

	public static function render():Void{
		var newX:Float = currentX;
		var newY:Float = currentY;

		//x
		if( Math.abs(targetX - Main.canvas.x) < cameraSpeed ){
			newX = targetX;
		}
		else if(targetX > Main.canvas.x){
			newX += cameraSpeed;
		} else {
			newX -= cameraSpeed;
		}

		//y
		if( Math.abs(targetY - Main.canvas.y) < cameraSpeed ){
			newY = targetY;
		}
		else if(targetY > Main.canvas.y){
			newY += cameraSpeed;
		} else {
			newY -= cameraSpeed;
		}

		//Main.canvas.x = smooth(newX, currentX);
		//Main.canvas.y = smooth(newX, currentY);
		Main.canvas.x = newX;
		Main.canvas.y = newY;
		
		currentX = newX;
		currentY = newY;
	}

	#if debug

	public static function keyboard(e:KeyboardEvent){

		switch (e.keyCode) {
			case 37:
				move( getPosition().x - 100 , getPosition().y);
			case 39:
				move( getPosition().x + 100 , getPosition().y);
		}

	}

	#end

	private static function smooth(data:Float, previous:Float):Float{
		return (data * (1 - smoothing)) + (previous  *  smoothing);
	}

}