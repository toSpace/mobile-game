//nape
import nape.geom.Vec2;
import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.phys.Material;
import nape.shape.Circle;
import nape.shape.Polygon;
import nape.constraint.PivotJoint;

class Lucy extends Character {

	var lucy:SpriteObject;
	var prevX:Float;
	var stopped:Bool = false;
	
	public function new():Void{
		super();

		lucy = new SpriteObject('walking.xml', 'walking-sparrow.xml');
		lucy.body = generateBody( lucy.xml.get('x'), lucy.xml.get('y') );
		prevX = lucy.body.position.x;
		//lucy.body.allowRotation = false;
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

	private function generateBody(x: Float, y:Float):Body{
		var body = new Body();
		var _body = lucy.body;
		var circle = new Circle(lucy.clip.width/5);
		var box = new Polygon( Polygon.box(lucy.clip.width/2.5, lucy.clip.height - (lucy.clip.width/4) ) ); 

		body.shapes.add(circle);
		body.shapes.add(box);
		body.space = Main.space;
		body.position.setxy(x, y);
		circle.localCOM = new Vec2(0, circle.bounds.height/3);

		lucy.body = body;
		body.space = Main.space;

		body.userData.graphic = lucy.layer.view;
        var pivot:Vec2 = new Vec2(0,0);
        body.userData.graphicOffset = pivot;

        body.allowRotation = false;
        body.setShapeMaterials(new Material(0.1, 1.0, 2.0, 5.0, 0.001));

        _body.space = null;

        return body;
	}

	//todo collisions

	//walking
	//http://deltaluca.me.uk/forum/index.php/m/655/969b52bea8a80fa8d8d6b52ed8d8f6be/
	//return new Vec2(acceleration, 0).rotate(_combinedGroundAngle);

}