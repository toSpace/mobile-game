//nape
import nape.geom.Vec2;

class Lucy extends Character {

	var lucy:SpriteObject;
	var prevX:Float;
	var stopped:Bool = false;
	
	public function new():Void{
		super();

		lucy = new SpriteObject('walking.xml', 'walking-sparrow.xml');
		prevX = lucy.body.position.x;
	}

	override public function render():Void{

		walk(lucy.body, Settings.flockSpeed, Settings.flockVelocity);

		//stop walking when not moving
		if(prevX == lucy.body.position.x){
			lucy.clip.stop();
			stopped = true;
		}
		//start walking again
		if(prevX != lucy.body.position.x && stopped == true){
			lucy.clip.play();
		}
		//save position
		prevX = lucy.body.position.x;

		Camera.follow(lucy.body);
	}

	//todo collisions

	//walking
	//http://deltaluca.me.uk/forum/index.php/m/655/969b52bea8a80fa8d8d6b52ed8d8f6be/
	//return new Vec2(acceleration, 0).rotate(_combinedGroundAngle);

}