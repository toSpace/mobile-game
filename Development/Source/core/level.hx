//nme
import nme.feedback.Haptic;

//importing all levels
import World1Level1;

class Level{

	public var nightmare:Float = 0;
	public var nightmareTolerance = 100;

	static public function load(level:String):Dynamic{
		return Type.createInstance(Type.resolveClass(level),[]);
	}

	public function new(){

		//clear from previous levels
		RenderManager.clear();
		RenderManager.pause();
		Garbage.clean();
		clear();

		//load levelspecifick things
		loadLevel();

		//add to render engine
		RenderManager.add(this);

		//reset camera
		Camera.reload();

		//add drawing button
		var drawingButton = new DrawButton();

		Main.activeLevel = this;

		//reset nightmare after been loaded
		resetNightmare();

	}

	public function clear():Void{
		//clear all assets on canvas
		for(nr in 0...Main.canvas.numChildren-1){
			Main.canvas.removeChildAt(nr);
		}
	}

	public function start():Void{
		//start level again
		RenderManager.start();
	}

	//nightmare
	public function addToNightmare(point:Float):Void{
		nightmare += point;

		trace( getNightmare() );
	}

	public function getNightmare():Float{
		return nightmare / nightmareTolerance;
	}

	public function resetNightmare():Void{
		nightmare = 0;
	}

	public function snort():Void{
		
	}

	public function loadLevel():Void{}
	public function render():Void{}

}