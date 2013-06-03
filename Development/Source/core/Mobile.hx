import nme.system.Capabilities;

class Mobile {

	public static var asset:String;
	public static var xml:String;
	public static var screenDensity:Float;
	public static var screenWidth:Float;
    public static var screenHeight:Float;

	static public function setSizes():Void{
		
		//load right mobile assets
		xml = 'assets/source/';
		var dpi = Capabilities.screenDPI;
		
		if (dpi < 200) {
			screenDensity = 1;
			asset = "assets/mobile-1x/";
		} else if (dpi < 300) {
			screenDensity = 1.5;
			asset = "assets/mobile-1x/";	
		} else {
			screenDensity = 2;
			asset = "assets/mobile-2x/";	
		}

		//load screendimensions
		screenHeight = Main.stage.stageHeight;
		screenWidth = Main.stage.stageWidth;

		//trace(screenWidth);
	}

	static public function sizeAdjustment():Float{
		return screenDensity;
	}

	static public function getY(object:Dynamic):Float{
		return screenHeight - object.height;
	}

	static public function inView(object:Dynamic):Float{
		return 0;
	}

}