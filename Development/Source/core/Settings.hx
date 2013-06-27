//nme
import openfl.Assets;

class Settings{

	public static var brushSize:Float;
	public static var flockSpeed:Float;
	public static var flockVelocity:Float;
	public static var cameraOverflow:Float;
	public static var paralaxDepth:Float;
	
	static public function load():Void{
		//load from xml
		var xmlFile = Assets.getText(Mobile.xml + 'settings.xml');
		var read = new haxe.xml.Fast( Xml.parse(xmlFile) );

		var settings = read.node.settings;

		brushSize = Std.parseFloat(settings.node.brushsize.innerData);
		cameraOverflow = Std.parseFloat(settings.node.cameraoverflow.innerData);
		flockSpeed = Std.parseFloat(settings.node.flockspeed.innerData);
		flockVelocity = Std.parseFloat(settings.node.flockvelocity.innerData);
		paralaxDepth = Std.parseFloat(settings.node.paralaxDepth.innerData);

	}

}