
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

import nape.geom.AABB;
import nape.geom.GeomPoly;
import nape.geom.IsoFunction;
import nape.geom.MarchingSquares;
import nape.shape.Polygon;
import nape.util.Debug;
import nape.util.BitmapDebug;

class Main extends Sprite {

	//example:
	//https://github.com/deltaluca/www.napephys.com/blob/gh-pages/samples/BasicSimulation/BasicSimulation.hx
	//http://cote.cc/blog/using-the-nape-v2-physics-engine-in-actionscript-3
    //http://dpwoert.dropmark.com/118007/1815185

	//world
    var space:Space;

    //debug
	var debug:Debug;

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
        var gravity = Vec2.weak(0, 600);
        space = new Space(gravity);

        //nape debug graphics
        debug = new BitmapDebug(stage.stageWidth, stage.stageHeight, stage.color);
        addChild(debug.display);

        setUp();

        stage.addEventListener(Event.ENTER_FRAME, enterFrameHandler);
    }

    function setUp():Void{

        //ondergrond aanmaken
        createFloors(0, stage.stageHeight, stage.stageWidth, 1);

        var asset = new Bitmap(Assets.getBitmapData ("assets/hill.png"));
        var objIso:BitmapDataIso = new BitmapDataIso(asset.bitmapData);
        addChild(asset);
        var objBody:Body = IsoBody.run(objIso, objIso.bounds);
        objBody.userData.graphic = asset;
        //removeChild(asset);
        objBody.position.setxy(300, 0);
        objBody.space = space;
        //removeChild(asset);

        //bitmap.bitmapData.setPixel32(x,y,0x00);

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

        //nieuwe nape frame aanroepen
        space.step(1 / stage.frameRate);

        //debug verversen
        debug.clear();
        debug.draw(space);
        debug.flush();

        //move particles
        space.liveBodies.foreach(updateGraphics);

    }

    //make particles move
    function updateGraphics(b:Body):Void {

        var graphic:Null<DisplayObject> = b.userData.graphic;
        //if (graphic == null)

        var graphicOffset:Vec2 = b.userData.graphicOffset;
        var position:Vec2 = b.localPointToWorld(graphicOffset);
        graphic.x = position.x;
        graphic.y = position.y;
        graphic.rotation = (b.rotation * 180/Math.PI) % 360;
        position.dispose();
    }
	
	
}

