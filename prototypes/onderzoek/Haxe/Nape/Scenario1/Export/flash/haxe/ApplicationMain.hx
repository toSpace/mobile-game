#if nme

import Main;
import nme.Assets;
import nme.events.Event;


class ApplicationMain {
	
	static var mPreloader:NMEPreloader;

	public static function main () {
		
		var call_real = true;
		
		
		var loaded:Int = nme.Lib.current.loaderInfo.bytesLoaded;
		var total:Int = nme.Lib.current.loaderInfo.bytesTotal;
		
		nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
		nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
		
		if (loaded < total || true) /* Always wait for event */ {
			
			call_real = false;
			mPreloader = new NMEPreloader();
			nme.Lib.current.addChild(mPreloader);
			mPreloader.onInit();
			mPreloader.onUpdate(loaded,total);
			nme.Lib.current.addEventListener (nme.events.Event.ENTER_FRAME, onEnter);
			
		}
		
		
		#if !fdb
		haxe.Log.trace = flashTrace;
		#end
		
		if (call_real)
			begin ();
	}

	#if !fdb
	private static function flashTrace( v : Dynamic, ?pos : haxe.PosInfos ) {
		var className = pos.className.substr(pos.className.lastIndexOf('.') + 1);
		var message = className+"::"+pos.methodName+":"+pos.lineNumber+": " + v;
		
        if (flash.external.ExternalInterface.available)
			flash.external.ExternalInterface.call("console.log", message);
		else untyped flash.Boot.__trace(v, pos);
    }
	#end
	
	private static function begin () {
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields(Main))
		{
			if (methodName == "main")
			{
				hasMain = true;
				break;
			}
		}
		
		if (hasMain)
		{
			Reflect.callMethod (Main, Reflect.field (Main, "main"), []);
		}
		else
		{
			var instance = Type.createInstance(Main, []);
			if (Std.is (instance, nme.display.DisplayObject)) {
				nme.Lib.current.addChild(cast instance);
			}	
		}
		
	}

	static function onEnter (_) {
		
		var loaded = nme.Lib.current.loaderInfo.bytesLoaded;
		var total = nme.Lib.current.loaderInfo.bytesTotal;
		mPreloader.onUpdate(loaded,total);
		
		if (loaded >= total) {
			
			nme.Lib.current.removeEventListener(nme.events.Event.ENTER_FRAME, onEnter);
			mPreloader.addEventListener (Event.COMPLETE, preloader_onComplete);
			mPreloader.onLoaded();
			
		}
		
	}

	public static function getAsset (inName:String):Dynamic {
		
		
		if (inName=="assets/8ball.png")
			 
            return Assets.getBitmapData ("assets/8ball.png");
         
		
		if (inName=="assets/banaan.png")
			 
            return Assets.getBitmapData ("assets/banaan.png");
         
		
		if (inName=="assets/bier.png")
			 
            return Assets.getBitmapData ("assets/bier.png");
         
		
		if (inName=="assets/font.ttf")
			 
			 return Assets.getFont ("assets/font.ttf");
		 
		
		if (inName=="assets/greenleaf.png")
			 
            return Assets.getBitmapData ("assets/greenleaf.png");
         
		
		if (inName=="assets/physicsassets.pes")
			 
            return Assets.getBytes ("assets/physicsassets.pes");
         
		
		if (inName=="assets/pikachu.png")
			 
            return Assets.getBitmapData ("assets/pikachu.png");
         
		
		if (inName=="assets/redleaf.png")
			 
            return Assets.getBitmapData ("assets/redleaf.png");
         
		
		if (inName=="assets/rugby.png")
			 
            return Assets.getBitmapData ("assets/rugby.png");
         
		
		if (inName=="assets/tennisbal.png")
			 
            return Assets.getBitmapData ("assets/tennisbal.png");
         
		
		
		return null;
		
	}
	
	
	private static function preloader_onComplete (event:Event):Void {
		
		mPreloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		
		nme.Lib.current.removeChild(mPreloader);
		mPreloader = null;
		
		begin ();
		
	}
	
}

class NME_assets_8ball_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_banaan_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_bier_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_font_ttf extends nme.text.Font { }
class NME_assets_greenleaf_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_physicsassets_pes extends nme.utils.ByteArray { }
class NME_assets_pikachu_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_redleaf_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_rugby_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_tennisbal_png extends nme.display.BitmapData { public function new () { super (0, 0); } }


#else

import Main;

class ApplicationMain {
	
	public static function main () {
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields(Main))
		{
			if (methodName == "main")
			{
				hasMain = true;
				break;
			}
		}
		
		if (hasMain)
		{
			Reflect.callMethod (Main, Reflect.field (Main, "main"), []);
		}
		else
		{
			var instance = Type.createInstance(Main, []);
			if (Std.is (instance, flash.display.DisplayObject)) {
				flash.Lib.current.addChild(cast instance);
			}
		}
		
	}

}

#end
