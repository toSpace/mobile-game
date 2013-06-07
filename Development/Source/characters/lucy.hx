//nape
import nape.geom.Vec2;

class Lucy extends Character {

	var lucy:SpriteObject;
	
	public function new():Void{
		super();

		lucy = new SpriteObject('walking.xml', 'walking-sparrow.xml');
	}

	override public function render():Void{
		walk(lucy.body, Settings.flockSpeed, Settings.flockVelocity);
	}

	//todo collisions

}