//nme
import nme.display.FPS;
import nme.display.Stage;
import nme.display.StageAlign;
import nme.display.StageScaleMode;
import nme.display.DisplayObject;
import nme.display.Sprite;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.events.MouseEvent;
import nme.Lib;

//nape
import nape.space.Space;
import nape.geom.Vec2;
import nape.util.Debug;
import nape.util.BitmapDebug;

class Main 
{

	public static var canvas:Sprite;
	public static var space:Space;
	public static var debug:Debug;

    public function new() 
    {

        var stage = Lib.current.stage;
        stage.scaleMode = StageScaleMode.NO_SCALE;
        stage.align = StageAlign.TOP_LEFT;

        //Lib.current.addChild(new SamePhysics());

        //start nape
        startPhysics(stage);

        //make canvas
        canvas = new Sprite();
        Lib.current.addChild( canvas );

        //add debugtools
        canvas.addChild( debug.display );

        //Initialize toold
        Path.setSizes();
        Drawing.init();

        //add items
        var pika = new DrawObject('test2.xml');
        var useless = new DrawObject('test.xml');
        
        //start rendering
        stage.addEventListener(Event.ENTER_FRAME, enterFrameHandler);

        //FPS
        //canvas.addChild( new FPS(0,0) );
    }

    public function startPhysics(stage:Stage){
    	// Create a new simulation Space.
        var gravity = Vec2.weak(0, 600);
        space = new Space(gravity);

        //nape debug graphics
        debug = new BitmapDebug(stage.stageWidth, stage.stageHeight, stage.color);
    }

    function enterFrameHandler(ev:Event):Void {

        RenderManager.render();

    }

}

//mouseover
//var mp = new Vec2(mouseX, mouseY);
//var b:Body = space.bodiesUnderPoint(mp).at(0);