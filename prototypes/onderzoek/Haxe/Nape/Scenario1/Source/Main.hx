

//nme
import nme.display.Sprite;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.events.TimerEvent;
import nme.display.DisplayObject;
import nme.display.Bitmap;
import nme.display.BitmapData;
import nme.display.PixelSnapping;
import nme.Assets;
import nme.utils.Timer;
import nme.text.TextField;

//nape
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Circle;
import nape.shape.Polygon;
import nape.space.Space;

#if debug
import nape.util.BitmapDebug;
import nape.util.Debug;
#end

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

    //FPS
    public var counter:FPS;
    var particleIteration:Int = 0;

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

        if (ev != null) {
            removeEventListener(Event.ADDED_TO_STAGE, initialise);
        }

        // Create a new simulation Space.
        //   Weak Vec2 will be automatically sent to object pool.
        //   when used as argument to Space constructor.
        var gravity = Vec2.weak(0, 600);
        space = new Space(gravity);

        #if debug
            // Create a new BitmapDebug screen matching stage dimensions and
            // background colour.
            //   The Debug object itself is not a DisplayObject, we add its
            //   display property to the display list.
            debug = new BitmapDebug(stage.stageWidth, stage.stageHeight, stage.color);
            addChild(debug.display);
        #end

        setUp();

        stage.addEventListener(Event.ENTER_FRAME, enterFrameHandler);
    }

    function setUp():Void{

        //wanden aanmaken
        createFloors(0, stage.stageHeight, stage.stageWidth, 1);
        createFloors(0, 0, 1, stage.stageHeight);
    	createFloors(stage.stageWidth, 0, 1, stage.stageHeight);

    	addParticle();

        var t = new haxe.Timer(3000); //run every 100ms
        t.run = function(){ addParticle(); };

        // FPStext = new TextField();
        // FPStext.textColor = 0xFFFFFF;
        // FPStext.backgroundColor = 0x000000;
        // FPStext.background = true;
        // FPStext.x = 0;
        // FPStext.y = 0;
        // FPStext.width = 65;
        // FPStext.height = 30;
        // addChild(FPStext);

        counter = new FPS();
        addChild(counter);
        counter.add();

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

    function addParticle():Void{

    	var w = stage.stageWidth;
        var h = stage.stageHeight;
        
        //get asset
        var name:Array<Dynamic> = getParticleType();

        //add to world
        var asset = new Bitmap (Assets.getBitmapData ("assets/"+ name[0] +".png"));
        var Particle = PhysicsData.createBody(name[0], asset);
        Particle.position.setxy(name[1], 0);
        Particle.space = space;

        addChild (asset);
        updateGraphics(Particle);

        if(counter != null){
            counter.add();
        }
    }

    function getParticleType():Array<Dynamic>{

        //lists
        var particles:Array<String> = ['rugby','8ball','greenleaf','banaan','pikachu','bier','redleaf','tennisbal'];
        var startPoints:Array<Float> = [0.75, 0.25, 0.5, 0.25, 0.5, 0.75, 0.5, 0.25];
        
        //reloop
        if(particleIteration == particles.length){ particleIteration = 0; }
        
        //select
        var selected:String = particles[particleIteration];
        var startSelected:Float = startPoints[particleIteration] * Std.parseFloat(Std.string(stage.stageWidth));
        
        //iterate
        particleIteration ++;

        return [selected,startSelected];
    }

    function enterFrameHandler(ev:Event):Void {

        space.step(1 / stage.frameRate);

        #if debug            
            // Render Space to the debug draw.
            //   We first clear the debug screen,
            //   then draw the entire Space,
            //   and finally flush the draw calls to the screen.
            debug.clear();
            debug.draw(space);
            debug.flush();
        #end

        //move particles
        space.liveBodies.foreach(updateGraphics);

        //change framerate display
        //FPStext.text = 'FPS: ' + Std.string(stage.frameRate) + '\nParticles: ' + Std.string(numObjs);

    }

    //make particles move
    function updateGraphics(b:Body):Void {
        var graphic:DisplayObject = b.userData.graphic;
        var pos = PhysicsData.graphicsPosition(b);
        graphic.rotation = (b.rotation * 180 / Math.PI) % 360;  
        graphic.x = pos.x;
        graphic.y = pos.y;
    }
	
	
}