//nme
import openfl.display.FPS;
import flash.display.Stage;
import flash.display.StageAlign;
import flash.display.StageScaleMode;
import flash.display.DisplayObject;
import flash.display.Sprite;
import flash.events.Event;
import flash.events.EventDispatcher;
import flash.events.MouseEvent;
import flash.events.KeyboardEvent;
import flash.Lib;

//nape
import nape.space.Space;
import nape.geom.Vec2;

#if (flash && debug)
//import nape.util.Debug;
//import nape.util.BitmapDebug;
#end

class Main 
{

    public static var stage:Stage;
	public static var canvas:Sprite;
	public static var space:Space;
    public static var activeLevel:Dynamic;

    #if (flash && debug)
	   //public static var debug:Debug;
    #end

    public function new() 
    {
        stage = Lib.current.stage;
        stage.scaleMode = StageScaleMode.NO_SCALE;
        stage.align = StageAlign.TOP_LEFT;
        stage.addEventListener (Event.RESIZE, onResize);

        //start nape
        startPhysics(stage);

        //make canvas
        canvas = new Sprite();
        stage.addChild( canvas );

        //Initialize tools
        Mobile.setSizes();
        Drawing.init();
        Settings.load();
        
        //start rendering
        stage.addEventListener(Event.ENTER_FRAME, enterFrameHandler);
        stage.addEventListener(Event.ACTIVATE, activate);
        stage.addEventListener(Event.DEACTIVATE, deactivate);

        //add debugtools
        #if (debug || tools)
            //canvas.addChild( debug.display );
            stage.addEventListener(KeyboardEvent.KEY_DOWN, Camera.keyboard);
        #end

        //load first level
        Level.load('World1Level1');

        /*
        //FPS
        //stage.addChild( new FPS(0,0) );

        */

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

    function onResize(ev:Event):Void{
        Mobile.setSizes();
    }

    //pause game when lost focus
    function deactivate(ev:Event):Void{
        RenderManager.pause();
    }
    //start game when gained focus
    function activate(ev:Event):Void{
        RenderManager.start();
    }

}