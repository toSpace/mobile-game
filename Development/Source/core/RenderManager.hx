import nape.phys.Body;

class RenderManager{

	public static var renderList = new Array<Dynamic>();
	public static var running:Bool = true;
	
	static public function add(object:Dynamic){
		renderList.push(object);
		Garbage.add(object);
	}

	static public function remove(object:Dynamic){
		renderList.remove(object);
	}

	static public function clear(){
		renderList = new Array<Dynamic>();
	}

	static public function render(){

		//pause
		if(!running){ return; }

		//nieuwe nape frame aanroepen
        Main.space.step(1 / Main.canvas.stage.frameRate);

        //debug rendering
        Main.debug.clear();
        Main.debug.draw(Main.space);
        Main.debug.flush();

        //camera updaten
        Camera.render();

        //objecten renderen
        for(object in renderList){
        	object.render();
        }

	}

	static public function pause(){
		running = false;
	}

	static public function start(){
		running = true;
	}

}