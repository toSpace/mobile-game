//nape
import nape.geom.Vec2;

class Lucy extends Character {

	var lucy:SpriteObject;
	var impulse:Vec2;
	
	public function new():Void{
		super();

		lucy = new SpriteObject('walking.xml', 'walking-sparrow.xml');
	}

	override public function render():Void{
		walk(lucy.body, 30, 350);
	}

	//todo collisions

}