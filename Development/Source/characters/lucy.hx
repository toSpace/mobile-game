//nape
import nape.geom.Vec2;

class Lucy extends Character {

	var lucy:SpriteObject;
	
	public function new():Void{
		super();

		lucy = new SpriteObject('walking.xml', 'walking-sparrow.xml');
	}

	override public function render():Void{

		//stop when drawing
		if(!Drawing.drawing){
			walk(lucy.body, Settings.flockSpeed, Settings.flockVelocity);
		}

		// if(lucy.body.velocity.x < 1){
		// 	//lucy.clip.stop();
		// }

		Camera.follow(lucy.body);
	}

	//todo collisions

}