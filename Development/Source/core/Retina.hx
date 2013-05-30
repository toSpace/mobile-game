import nme.system.Capabilities;

class Retina {

	public static var asset:String;
	public static var xml:String;
	public static var screenDensity:Float;

	static public function setSizes():Void{
		
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
	}

	static public function sizeAdjustment():Float{
		return screenDensity;
	}

}