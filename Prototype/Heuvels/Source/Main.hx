

//nme
import nme.display.Sprite;
import nme.display.StageScaleMode;
import nme.display.StageAlign;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.display.DisplayObject;
import nme.display.Bitmap;
import nme.display.BitmapData;
import nme.display.PixelSnapping;
import nme.Assets;

//nape
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Circle;
import nape.shape.Polygon;
import nape.space.Space;

class Main extends Sprite {

	//example:
	//https://github.com/deltaluca/www.napephys.com/blob/gh-pages/samples/BasicSimulation/BasicSimulation.hx
	//http://cote.cc/blog/using-the-nape-v2-physics-engine-in-actionscript-3

	//world
    var space:Space;

    //debug
    #if debug
	   var debug:Debug;
    #end

    //Make class
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

        stage.frameRate = 60;
        stage.scaleMode = StageScaleMode.NO_SCALE;
        stage.align = StageAlign.TOP_LEFT; 

        if (ev != null) {
            removeEventListener(Event.ADDED_TO_STAGE, initialise);
        }

        // Create a new simulation Space.
        //   Weak Vec2 will be automatically sent to object pool.
        //   when used as argument to Space constructor.
        var gravity = Vec2.weak(0, 600);
        space = new Space(gravity);

        setUp();

        stage.addEventListener(Event.ENTER_FRAME, enterFrameHandler);
    }

    function setUp():Void{

        //wanden aanmaken
        createFloors(0, stage.stageHeight, stage.stageWidth, 1);
        createFloors(0, 0, 1, stage.stageHeight);
    	createFloors(stage.stageWidth, 0, 1, stage.stageHeight);


    }

    function createFloors(x,y,width,height):Void{

    	//new body
    	var floorPhysicsBody:Body = new Body(BodyType.STATIC);

    	//shape
    	var p:Polygon = new Polygon (
		    Polygon.rect(
		        x,        // x position
		        y,        // y position
		        width,    // width
		        height    // height
		    )
		);

		//add to space
		floorPhysicsBody.shapes.add(p);
		floorPhysicsBody.space = space;

    }

    //the loop
    function enterFrameHandler(ev:Event):Void {

        space.step(1 / stage.frameRate);

        //move particles
        space.liveBodies.foreach(updateGraphics);

    }

    //make particles move
    function updateGraphics(b:Body):Void {
        /*
        var graphic:DisplayObject = b.userData.graphic;
        var pos = PhysicsData.graphicsPosition(b);
        graphic.rotation = (b.rotation * 180 / Math.PI) % 360;  
        graphic.x = pos.x;
        graphic.y = pos.y;
        */
    }
	
	
}