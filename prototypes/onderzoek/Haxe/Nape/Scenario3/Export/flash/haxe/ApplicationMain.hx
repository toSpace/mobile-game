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
         
		
		if (inName=="assets/sprites/lopen_klein.png")
			 
            return Assets.getBitmapData ("assets/sprites/lopen_klein.png");
         
		
		if (inName=="assets/sprites/los/idle.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/idle.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00000.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00000.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00001.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00001.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00002.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00002.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00003.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00003.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00004.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00004.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00005.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00005.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00006.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00006.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00007.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00007.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00008.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00008.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00009.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00009.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00010.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00010.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00011.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00011.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00012.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00012.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00013.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00013.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00014.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00014.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00015.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00015.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00016.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00016.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00017.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00017.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00018.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00018.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00019.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00019.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00020.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00020.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00021.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00021.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00022.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00022.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00023.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00023.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00024.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00024.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00025.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00025.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00026.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00026.png");
         
		
		if (inName=="assets/sprites/los/jump/jump00027.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/jump/jump00027.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00010.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00010.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00011.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00011.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00012.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00012.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00013.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00013.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00014.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00014.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00015.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00015.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00016.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00016.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00017.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00017.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00018.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00018.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00019.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00019.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00020.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00020.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00021.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00021.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00022.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00022.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00023.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00023.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00024.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00024.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00025.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00025.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00026.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00026.png");
         
		
		if (inName=="assets/sprites/los/walk/walk00027.png")
			 
            return Assets.getBitmapData ("assets/sprites/los/walk/walk00027.png");
         
		
		if (inName=="assets/sprites/SPRITE.png")
			 
            return Assets.getBitmapData ("assets/sprites/SPRITE.png");
         
		
		if (inName=="assets/sprites/SPRITE.xml")
			 
			 return Assets.getText ("assets/sprites/SPRITE.xml");
         
		
		if (inName=="assets/sprites/TP-file.png")
			 
            return Assets.getBitmapData ("assets/sprites/TP-file.png");
         
		
		if (inName=="assets/sprites/TP-file.tps")
			 
			 return Assets.getText ("assets/sprites/TP-file.tps");
         
		
		if (inName=="assets/sprites/TP-file.xml")
			 
			 return Assets.getText ("assets/sprites/TP-file.xml");
         
		
		if (inName=="assets/sprites/TP-file2.png")
			 
            return Assets.getBitmapData ("assets/sprites/TP-file2.png");
         
		
		if (inName=="assets/sprites/TP-file2.tps")
			 
			 return Assets.getText ("assets/sprites/TP-file2.tps");
         
		
		if (inName=="assets/sprites/TP-file2.xml")
			 
			 return Assets.getText ("assets/sprites/TP-file2.xml");
         
		
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
class NME_assets_sprites_lopen_klein_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_idle_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00000_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00001_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00002_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00003_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00004_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00005_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00006_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00007_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00008_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00009_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00010_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00011_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00012_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00013_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00014_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00015_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00016_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00017_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00018_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00019_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00020_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00021_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00022_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00023_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00024_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00025_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00026_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_jump_jump00027_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00010_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00011_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00012_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00013_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00014_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00015_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00016_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00017_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00018_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00019_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00020_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00021_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00022_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00023_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00024_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00025_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00026_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_los_walk_walk00027_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_sprite_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_sprite_xml extends nme.utils.ByteArray { }
class NME_assets_sprites_tp_file_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_tp_file_tps extends nme.utils.ByteArray { }
class NME_assets_sprites_tp_file_xml extends nme.utils.ByteArray { }
class NME_assets_sprites_tp_file2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_sprites_tp_file2_tps extends nme.utils.ByteArray { }
class NME_assets_sprites_tp_file2_xml extends nme.utils.ByteArray { }
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
