import nme.display.Sprite;
import nme.events.Event;

//nme
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Circle;
import nape.shape.Polygon;
import nape.space.Space;
import nape.util.BitmapDebug;
import nape.util.Debug;

class Main extends Sprite {

	//example:
	//https://github.com/deltaluca/www.napephys.com/blob/gh-pages/samples/BasicSimulation/BasicSimulation.hx
	//http://cote.cc/blog/using-the-nape-v2-physics-engine-in-actionscript-3

	var space:Space;
	var debug:Debug;

	public function new () {
		
		super ();

		if (stage != null) {
            initialise(null);
        }
        else {
            addEventListener(Event.ADDED_TO_STAGE, initialise);
        }
		
		
	}

	function initialise(ev:Event):Void {
        if (ev != null) {
            removeEventListener(Event.ADDED_TO_STAGE, initialise);
        }

        // Create a new simulation Space.
        //   Weak Vec2 will be automatically sent to object pool.
        //   when used as argument to Space constructor.
        var gravity = Vec2.weak(0, 600);
        space = new Space(gravity);

        // Create a new BitmapDebug screen matching stage dimensions and
        // background colour.
        //   The Debug object itself is not a DisplayObject, we add its
        //   display property to the display list.
        debug = new BitmapDebug(stage.stageWidth, stage.stageHeight, stage.color);
        addChild(debug.display);

        setUp();

        stage.addEventListener(Event.ENTER_FRAME, enterFrameHandler);
    }

    function setUp():Void{

    	createFloors();
    	addParticle();
    }

    function createFloors():Void{

    	var w = stage.stageWidth;
        var h = stage.stageHeight;

    	//new body
    	var floorPhysicsBody:Body = new Body(BodyType.STATIC);

    	//shape
    	var p:Polygon = new Polygon (
		    Polygon.rect(
		        0, 			// x position
		        stage.stageHeight-20, 	// y position
		        stage.stageWidth, 	// width
		        20			// height
		    )
		);

		//add to space
		floorPhysicsBody.shapes.add(p);
		floorPhysicsBody.space = space;

    }

    function addParticle():Void{

    	var w = stage.stageWidth;
        var h = stage.stageHeight;
        
    	//add ball
		var ball:Body = new Body(BodyType.DYNAMIC);
        ball.shapes.add(new Circle(50));
        ball.position.setxy(50, h / 2);
        ball.space = space;
    }

    function enterFrameHandler(ev:Event):Void {
		// Step forward in simulation by the required number of seconds.
        space.step(1 / stage.frameRate);

        // Render Space to the debug draw.
        //   We first clear the debug screen,
        //   then draw the entire Space,
        //   and finally flush the draw calls to the screen.
        debug.clear();
        debug.draw(space);
        debug.flush();
    }
	
	
}