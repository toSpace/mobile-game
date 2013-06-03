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

#if (flash && debug)
import nape.util.Debug;
import nape.util.BitmapDebug;
#end

class Main 
{

	public static var canvas:Sprite;
	public static var space:Space;
    public static var activeLevel:Dynamic;

    #if (flash && debug)
	   public static var debug:Debug;
    #end

    public function new() 
    {

        var stage = Lib.current.stage;
        stage.scaleMode = StageScaleMode.NO_SCALE;
        stage.align = StageAlign.TOP_LEFT;

        //start nape
        startPhysics(stage);

        //make canvas
        canvas = new Sprite();
        Lib.current.addChild( canvas );

        //add debugtools
        #if (flash && debug)
        canvas.addChild( debug.display );
        #end

        //Initialize toold
        Retina.setSizes();
        Drawing.init();
        
        //start rendering
        stage.addEventListener(Event.ENTER_FRAME, enterFrameHandler);

        //load first level
        Level.load('World1Level1');

        //FPS
        stage.addChild( new FPS(0,0) );
    }

    private function startPhysics(stage:Stage){
    	// Create a new simulation Space.
        var gravity = Vec2.weak(0, 600);
        space = new Space(gravity);

        //nape debug graphics
        #if (flash && debug)
        debug = new BitmapDebug(stage.stageWidth, stage.stageHeight, stage.color);
        #end
    }

    function enterFrameHandler(ev:Event):Void {

        RenderManager.render();

    }

}