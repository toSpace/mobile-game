//nme
import nme.display.FPS;
import nme.display.StageAlign;
import nme.display.StageScaleMode;
import nme.display.DisplayObject;
import nme.display.Sprite;
import nme.Lib;

//nape
import nape.space.Space;
import nape.geom.Vec2;

class Main 
{

	var canvas:Sprite;
	var space:Space;

    public function new() 
    {
    	//super();

        var stage = Lib.current.stage;
        stage.scaleMode = StageScaleMode.NO_SCALE;
        stage.align = StageAlign.TOP_LEFT;

        //Lib.current.addChild(new SamePhysics());

        //start nape
        startPhysics();

        //make canvas
        canvas = new Sprite();
        Lib.current.addChild( new FPS(0,0) );

        //make useless item
        Path.setSizes();
        var useless = new GameObject('test.xml', canvas, space); 
        Lib.current.add(useless);

    }

    public function startPhysics(){
    	// Create a new simulation Space.
        var gravity = Vec2.weak(0, 600);
        space = new Space(gravity);
    }

}

//mouseover
//var mp = new Vec2(mouseX, mouseY);
//var b:Body = space.bodiesUnderPoint(mp).at(0);