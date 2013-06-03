//importing all levels
import World1Level1;

class Level{

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

	public function addToNightmare(point:Int):Void{}

	public function loadLevel():Void{}
	public function render():Void{}

}