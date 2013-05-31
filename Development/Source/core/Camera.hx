import nme.geom.Point;

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

		trace(Main.canvas.x + ' | ' + targetX);

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
		else if(targetX > Main.canvas.y){
			newY += cameraSpeed;
		} else {
			newY -= cameraSpeed;
		}

		currentX = newX;
		currentY = newY;
		Main.canvas.x = smooth(newX, currentX);
		Main.canvas.y = smooth(newX, currentY);
	}

	private static function smooth(data:Float, previous:Float):Float{
		return (data * (1 - smoothing)) + (previous  *  smoothing);
	}

}