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
		
		
		if (inName=="assets/mobile-1x/General/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/General/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-1x/General/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/General/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-1x/General/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/General/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-1x/General/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/General/Sound/Effects/empty.md");
         
		
		if (inName=="assets/mobile-1x/General/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/General/Sound/Music/empty.md");
         
		
		if (inName=="assets/mobile-1x/General/Worldmap/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/General/Worldmap/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level1/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level1/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level1/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level1/Sound/Effects/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level1/Sound/Music/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level2/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level2/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level2/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level2/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level2/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level2/Sound/Effects/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level2/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level2/Sound/Music/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level3/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level3/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level3/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level3/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level3/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level3/Sound/Effects/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level3/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level3/Sound/Music/empty.md");
         
		
		if (inName=="assets/mobile-1x/test1.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/test1.png");
         
		
		if (inName=="assets/mobile-2x/General/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/General/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-2x/General/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/General/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-2x/General/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/General/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-2x/General/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/General/Sound/Effects/empty.md");
         
		
		if (inName=="assets/mobile-2x/General/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/General/Sound/Music/empty.md");
         
		
		if (inName=="assets/mobile-2x/General/Worldmap/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/General/Worldmap/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level1/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level1/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level1/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level1/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level1/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level1/Sound/Effects/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level1/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level1/Sound/Music/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level2/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level2/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level2/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level2/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level2/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level2/Sound/Effects/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level2/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level2/Sound/Music/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level3/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level3/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level3/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level3/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level3/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level3/Sound/Effects/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level3/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level3/Sound/Music/empty.md");
         
		
		if (inName=="assets/source/General/Enemies/empty.md")
			 
			 return Assets.getText ("assets/source/General/Enemies/empty.md");
         
		
		if (inName=="assets/source/General/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/source/General/Environment/Background/empty.md");
         
		
		if (inName=="assets/source/General/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/source/General/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/source/General/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/source/General/Sound/Effects/empty.md");
         
		
		if (inName=="assets/source/General/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/source/General/Sound/Music/empty.md");
         
		
		if (inName=="assets/source/General/Worldmap/empty.md")
			 
			 return Assets.getText ("assets/source/General/Worldmap/empty.md");
         
		
		if (inName=="assets/source/Specific/Level1/Enemies/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level1/Enemies/empty.md");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level1/Environment/Background/empty.md");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level1/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/source/Specific/Level1/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level1/Sound/Effects/empty.md");
         
		
		if (inName=="assets/source/Specific/Level1/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level1/Sound/Music/empty.md");
         
		
		if (inName=="assets/source/Specific/Level2/Enemies/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level2/Enemies/empty.md");
         
		
		if (inName=="assets/source/Specific/Level2/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level2/Environment/Background/empty.md");
         
		
		if (inName=="assets/source/Specific/Level2/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level2/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/source/Specific/Level2/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level2/Sound/Effects/empty.md");
         
		
		if (inName=="assets/source/Specific/Level2/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level2/Sound/Music/empty.md");
         
		
		if (inName=="assets/source/Specific/Level3/Enemies/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level3/Enemies/empty.md");
         
		
		if (inName=="assets/source/Specific/Level3/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level3/Environment/Background/empty.md");
         
		
		if (inName=="assets/source/Specific/Level3/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level3/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/source/Specific/Level3/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level3/Sound/Effects/empty.md");
         
		
		if (inName=="assets/source/Specific/Level3/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level3/Sound/Music/empty.md");
         
		
		if (inName=="assets/source/test.xml")
			 
			 return Assets.getText ("assets/source/test.xml");
         
		
		if (inName=="assets/tablet-2x/General/Enemies/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/General/Enemies/empty.md");
         
		
		if (inName=="assets/tablet-2x/General/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/General/Environment/Background/empty.md");
         
		
		if (inName=="assets/tablet-2x/General/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/General/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/tablet-2x/General/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/General/Sound/Effects/empty.md");
         
		
		if (inName=="assets/tablet-2x/General/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/General/Sound/Music/empty.md");
         
		
		if (inName=="assets/tablet-2x/General/Worldmap/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/General/Worldmap/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level1/Enemies/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level1/Enemies/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level1/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level1/Environment/Background/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level1/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level1/Sound/Effects/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level1/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level1/Sound/Music/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level2/Enemies/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level2/Enemies/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level2/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level2/Environment/Background/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level2/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level2/Sound/Effects/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level2/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level2/Sound/Music/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level3/Enemies/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level3/Enemies/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level3/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level3/Environment/Background/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level3/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level3/Sound/Effects/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level3/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level3/Sound/Music/empty.md");
         
		
		
		return null;
		
	}
	
	
	private static function preloader_onComplete (event:Event):Void {
		
		mPreloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		
		nme.Lib.current.removeChild(mPreloader);
		mPreloader = null;
		
		begin ();
		
	}
	
}

class NME_assets_mobile_1x_general_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_general_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_general_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_general_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_general_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_general_worldmap_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level1_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level1_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level1_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level1_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level1_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level2_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level2_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level2_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level2_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level2_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level3_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level3_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level3_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level3_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level3_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_test1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_2x_general_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_general_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_general_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_general_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_general_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_general_worldmap_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level1_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level1_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level1_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level1_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level1_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level2_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level2_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level2_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level2_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level2_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level3_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level3_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level3_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level3_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level3_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_general_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_general_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_general_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_general_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_general_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_general_worldmap_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level2_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level2_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level2_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level2_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level2_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level3_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level3_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level3_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level3_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level3_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_test_xml extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_general_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_general_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_general_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_general_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_general_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_general_worldmap_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level1_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level1_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level1_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level1_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level1_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level2_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level2_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level2_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level2_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level2_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level3_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level3_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level3_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level3_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level3_sound_music_empty_md extends nme.utils.ByteArray { }


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
