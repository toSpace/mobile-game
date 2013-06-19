//nape
import nape.geom.Vec2;

class Lucy extends Character {

	var lucy:SpriteObject;
	
	public function new():Void{
		super();

		lucy = new SpriteObject('walking.xml', 'walking-sparrow.xml');
	}

	override public function render():Void{
		if(!Drawing.drawing){
			walk(lucy.body, Settings.flockSpeed, Settings.flockVelocity);
		}

		Camera.follow(lucy.body);
	}

	//todo collisions

}