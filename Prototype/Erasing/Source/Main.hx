
//nme
import nme.display.Sprite;
import nme.display.StageScaleMode;
import nme.display.StageAlign;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.events.MouseEvent;
import nme.display.DisplayObject;
import nme.display.Bitmap;
import nme.display.BitmapData;
import nme.display.PixelSnapping;
import nme.Assets;
import nme.geom.Matrix;
import nme.display.BlendMode;

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

    var drawing=false;
    var asset:Bitmap;
    var canvas:Sprite;

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

        asset = new Bitmap(Assets.getBitmapData ("assets/hill.png"));
        var objIso:BitmapDataIso = new BitmapDataIso(asset.bitmapData);
        addChild(asset);
        var objBody:Body = IsoBody.run(objIso, objIso.bounds);
        objBody.userData.graphic = asset;
        //removeChild(asset);
        objBody.position.setxy(300, 0);
        objBody.space = space;
        //removeChild(asset);

        //bitmap.bitmapData.setPixel32(x,y,0x00);

        stage.addEventListener(MouseEvent.MOUSE_DOWN,mouse_pressed);
        stage.addEventListener(MouseEvent.MOUSE_MOVE,mouse_moved);
        stage.addEventListener(MouseEvent.MOUSE_UP,mouse_released);

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

    public function mouse_pressed(e:MouseEvent):Void {
        drawing=true;
        canvas = new Sprite();
        canvas.x = asset.x;
        canvas.y = asset.y;
        canvas.width = asset.width;
        canvas.height = asset.height;
        canvas.graphics.lineStyle(10,0xFF0000,1);
        canvas.graphics.moveTo(e.stageX,e.stageY);
        addChild(canvas);
        //trace(e.localX, e.localY);
    }
    public function mouse_moved(e:MouseEvent):Void {
        if (drawing) {
            canvas.graphics.lineTo(e.stageX,e.stageY);
            canvas.x = asset.x;
            canvas.y = asset.y;
            //trace(e.localX, e.localY);
            //asset.bitmapData.setPixel32(Std.int(e.localX),Std.int(e.localY),0x00);
        }
    }
    public function mouse_released(e:MouseEvent):Void {
        drawing=false;

        var matrix = new Matrix();
        asset.bitmapData.draw(canvas,matrix,BlendMode.ERASE);

        removeChild(canvas);
    }
	
	
}

