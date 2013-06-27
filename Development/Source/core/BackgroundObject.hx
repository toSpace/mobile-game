//nme
import flash.display.Sprite;
import openfl.Assets;
import flash.events.Event;
import flash.events.EventDispatcher;
import flash.display.DisplayObject;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.BlendMode;

class BackgroundObject{

	public var canvas:Sprite;
	public var asset:Bitmap;
	//public var xml:Map<String, Dynamic>;
	public var startX:Float;
	public var speed:Float;
	private var x:Float;

	//xml vars
	public var _imgPath:String;
	public var _x:Float;
	public var _y:Float;
	public var _blendmode:String;
	public var _speed:Float;
	public var _startX:Float;
	public var _endX:Float;
	
	public function new(xmlUrl:String):Void{
		//setting correct stages
		canvas = Main.canvas;

		//read xml
		if(xmlUrl != null || xmlUrl != ''){
			readXml(xmlUrl);
			init();
		}

	}

	public function init(){
		//get image
		asset = new Bitmap( Assets.getBitmapData(_imgPath) );
		asset.x = _x;
		x = asset.x;
		asset.y = Mobile.getY(asset) - _y ;
		setBlendmode( _blendmode );
		canvas.addChild(asset);

		//paralax properties
		speed = _speed;
		startX = _startX;

		//add to render manager
		RenderManager.add(this);	
	}

	public function readXml(url:String):Void{
		//var p = new Map<String>();
		var xmlFile = Assets.getText(Mobile.xml + url);
		var read = new haxe.xml.Fast( Xml.parse(xmlFile) );

		var asset = read.node.asset;
		_imgPath =  Mobile.asset + asset.node.img.innerData;
		_x = Std.parseFloat(asset.node.pos.att.x);
		_y = Std.parseFloat(asset.node.pos.att.y);
		_blendmode =  asset.node.blendmode.innerData;
		_speed = Std.parseFloat(asset.node.paralax.innerData);
		_startX = Std.parseFloat(asset.node.paralax.att.startX);
		_endX = Std.parseFloat(asset.node.paralax.att.endX);

		//return p;
	}

	public function render():Void{
		//paralax effect
		paralax();
	}

	public function paralax():Void{
		var cameraPos:Float = Camera.getPosition().x;
		var delta:Float;

		delta = x - cameraPos;
		delta *= speed;

		asset.x = Math.ceil(x - delta);
	}

	public function setBlendmode(mode:String):Void{
		//http://www.nme.io/api/types/nme/display/BlendMode.html
		switch(mode){
			case 'none':
			//do nothing
			case 'add':
			asset.blendMode = BlendMode.ADD;
			case 'alpha':
			asset.blendMode = BlendMode.ALPHA;
			case 'darken':
			asset.blendMode = BlendMode.DARKEN;
			case 'difference':
			asset.blendMode = BlendMode.DIFFERENCE;
			case 'erase':
			asset.blendMode = BlendMode.ERASE;
			case 'hardlight':
			asset.blendMode = BlendMode.HARDLIGHT;
			case 'invert':
			asset.blendMode = BlendMode.INVERT;
			case 'layer':
			asset.blendMode = BlendMode.LAYER;
			case 'lighten':
			asset.blendMode = BlendMode.LIGHTEN;
			case 'multiply':
			asset.blendMode = BlendMode.MULTIPLY;
			case 'normal':
			asset.blendMode = BlendMode.NORMAL;
			case 'overlay':
			asset.blendMode = BlendMode.OVERLAY;
			case 'screen':
			asset.blendMode = BlendMode.SCREEN;
			case 'shader':
			#if (flash)
			asset.blendMode = BlendMode.SHADER;
			#end
			case 'subtract':
			asset.blendMode = BlendMode.SUBTRACT;
		}
	}

}