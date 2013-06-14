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
		
		
		if (inName=="assets/mobile-1x/button.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/button.png");
         
		
		if (inName=="assets/mobile-1x/button2.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/button2.png");
         
		
		if (inName=="assets/mobile-1x/General/Enemies/walking-sparrow.xml")
			 
			 return Assets.getText ("assets/mobile-1x/General/Enemies/walking-sparrow.xml");
         
		
		if (inName=="assets/mobile-1x/General/Enemies/walking.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/General/Enemies/walking.png");
         
		
		if (inName=="assets/mobile-1x/General/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/General/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-1x/General/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/General/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-1x/General/Worldmap/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/General/Worldmap/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level1/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level1/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/FG1.psd")
			 
            return Assets.getBytes ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/FG1.psd");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_1.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_1.png");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_2.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_2.png");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_3.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_3.png");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_4.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_4.png");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_5.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_5.png");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_6.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_6.png");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_7.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_7.png");
         
		
		if (inName=="assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_8.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_8.png");
         
		
		if (inName=="assets/mobile-1x/Specific/Level2/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level2/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level2/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level2/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level3/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level3/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level3/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level3/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-1x/test1.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/test1.png");
         
		
		if (inName=="assets/mobile-1x/test2.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/test2.png");
         
		
		if (inName=="assets/mobile-1x/test3bg.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/test3bg.png");
         
		
		if (inName=="assets/mobile-1x/walking-sparrow.xml")
			 
			 return Assets.getText ("assets/mobile-1x/walking-sparrow.xml");
         
		
		if (inName=="assets/mobile-1x/walking.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/walking.png");
         
		
		if (inName=="assets/mobile-2x/button.png")
			 
            return Assets.getBitmapData ("assets/mobile-2x/button.png");
         
		
		if (inName=="assets/mobile-2x/button2.png")
			 
            return Assets.getBitmapData ("assets/mobile-2x/button2.png");
         
		
		if (inName=="assets/mobile-2x/General/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/General/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-2x/General/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/General/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-2x/General/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/General/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-2x/General/Worldmap/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/General/Worldmap/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level1/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level1/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level1/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level1/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level2/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level2/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level2/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level2/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level3/Enemies/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level3/Enemies/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level3/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level3/Environment/Background/empty.md");
         
		
		if (inName=="assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/mobile-2x/test1.png")
			 
            return Assets.getBitmapData ("assets/mobile-2x/test1.png");
         
		
		if (inName=="assets/mobile-2x/test2.png")
			 
            return Assets.getBitmapData ("assets/mobile-2x/test2.png");
         
		
		if (inName=="assets/mobile-2x/test3bg.png")
			 
            return Assets.getBitmapData ("assets/mobile-2x/test3bg.png");
         
		
		if (inName=="assets/mobile-2x/walking-sparrow.xml")
			 
			 return Assets.getText ("assets/mobile-2x/walking-sparrow.xml");
         
		
		if (inName=="assets/mobile-2x/walking.png")
			 
            return Assets.getBitmapData ("assets/mobile-2x/walking.png");
         
		
		if (inName=="assets/source/General/Enemies/walking.xml")
			 
			 return Assets.getText ("assets/source/General/Enemies/walking.xml");
         
		
		if (inName=="assets/source/General/Environment/Background/fog_large.png")
			 
            return Assets.getBitmapData ("assets/source/General/Environment/Background/fog_large.png");
         
		
		if (inName=="assets/source/General/Environment/Background/fog_large.psd")
			 
            return Assets.getBytes ("assets/source/General/Environment/Background/fog_large.psd");
         
		
		if (inName=="assets/source/General/Environment/Background/fog_medium.png")
			 
            return Assets.getBitmapData ("assets/source/General/Environment/Background/fog_medium.png");
         
		
		if (inName=="assets/source/General/Environment/Background/fog_medium.psd")
			 
            return Assets.getBytes ("assets/source/General/Environment/Background/fog_medium.psd");
         
		
		if (inName=="assets/source/General/Environment/Background/fog_small.png")
			 
            return Assets.getBitmapData ("assets/source/General/Environment/Background/fog_small.png");
         
		
		if (inName=="assets/source/General/Environment/Background/fog_small.psd")
			 
            return Assets.getBytes ("assets/source/General/Environment/Background/fog_small.psd");
         
		
		if (inName=="assets/source/General/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/source/General/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/source/General/Sound/Effects/empty.md")
			 
			 return Assets.getText ("assets/source/General/Sound/Effects/empty.md");
         
		
		if (inName=="assets/source/General/Sound/Music/empty.md")
			 
			 return Assets.getText ("assets/source/General/Sound/Music/empty.md");
         
		
		if (inName=="assets/source/General/Worldmap/empty.md")
			 
			 return Assets.getText ("assets/source/General/Worldmap/empty.md");
         
		
		if (inName=="assets/source/Specific/Level1/Characters/Enemies/empty.md")
			 
			 return Assets.getText ("assets/source/Specific/Level1/Characters/Enemies/empty.md");
         
		
		if (inName=="assets/source/Specific/Level1/Characters/Player/Kutje.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Characters/Player/Kutje.png");
         
		
		if (inName=="assets/source/Specific/Level1/Characters/Player/Kutje.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Characters/Player/Kutje.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG1/hills/hill1.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill1.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG1/hills/hill1.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill1.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG1/hills/hill2.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill2.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG1/hills/hill2.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill2.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG1/hills/hill3.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill3.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG1/hills/hill3.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill3.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG1/hills/hill4.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill4.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG1/hills/hill4.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill4.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG2/trees/tree1.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree1.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG2/trees/tree1.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree1.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG2/trees/tree2.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree2.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG2/trees/tree2.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree2.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG2/trees/tree3.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree3.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG2/trees/tree3.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree3.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG2/trees/tree4.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree4.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG2/trees/tree4.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree4.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree1.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree1.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree1.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree1.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree10.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree10.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree10.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree10.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree2.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree2.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree2.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree2.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree3.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree3.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree3.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree3.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree4.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree4.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree4.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree4.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree5.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree5.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree5.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree5.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree6.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree6.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree6.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree6.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree7.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree7.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree7.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree7.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree8.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree8.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree8.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree8.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree9.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree9.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG3/trees/tree9.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree9.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/hills/hill1.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill1.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/hills/hill1.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill1.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/hills/hill2.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill2.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/hills/hill2.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill2.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/hills/hill3.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill3.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/hills/hill3.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill3.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/trees/tree1.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree1.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/trees/tree1.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree1.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/trees/tree2.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree2.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/trees/tree2.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree2.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/trees/tree3.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree3.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/trees/tree3.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree3.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/trees/tree4.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree4.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/trees/tree4.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree4.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/trees/tree5.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree5.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/trees/tree5.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree5.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/trees/tree6.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree6.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG4/trees/tree6.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree6.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG5/trees/tree1.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree1.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG5/trees/tree1.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree1.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG5/trees/tree2.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree2.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG5/trees/tree2.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree2.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG5/trees/tree3.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree3.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG5/trees/tree3.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree3.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG5/trees/tree4.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree4.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG5/trees/tree4.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree4.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG5/trees/tree5.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree5.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG5/trees/tree5.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree5.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG6/background.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG6/background.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG6/background.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG6/background.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG6/background02.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG6/background02.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG6/star.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG6/star.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG6/star.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG6/star.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG6/sun.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Background/BG6/sun.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Background/BG6/sun.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Background/BG6/sun.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG1/FG1.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_01.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_01.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_02.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_02.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_03.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_03.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_04.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_04.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_05.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_05.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_06.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_06.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_07.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_07.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_08.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_08.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree1.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree1.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree1.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree1.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree2.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree2.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree2.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree2.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree3.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree3.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree3.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree3.psd");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree4.png")
			 
            return Assets.getBitmapData ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree4.png");
         
		
		if (inName=="assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree4.psd")
			 
            return Assets.getBytes ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree4.psd");
         
		
		if (inName=="assets/source/Specific/Level1/level_1-forrest-jesse.ai")
			 
			 return Assets.getText ("assets/source/Specific/Level1/level_1-forrest-jesse.ai");
         
		
		if (inName=="assets/source/Specific/Level1/level_1-forrest-jesse.pdf")
			 
			 return Assets.getText ("assets/source/Specific/Level1/level_1-forrest-jesse.pdf");
         
		
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
         
		
		if (inName=="assets/source/walking.xml")
			 
			 return Assets.getText ("assets/source/walking.xml");
         
		
		if (inName=="assets/tablet-1x/General/Enemies/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/General/Enemies/empty.md");
         
		
		if (inName=="assets/tablet-1x/General/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/General/Environment/Background/empty.md");
         
		
		if (inName=="assets/tablet-1x/General/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/General/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/tablet-1x/General/Worldmap/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/General/Worldmap/empty.md");
         
		
		if (inName=="assets/tablet-1x/Specific/Level1/Enemies/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/Specific/Level1/Enemies/empty.md");
         
		
		if (inName=="assets/tablet-1x/Specific/Level1/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/Specific/Level1/Environment/Background/empty.md");
         
		
		if (inName=="assets/tablet-1x/Specific/Level1/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/Specific/Level1/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/tablet-1x/Specific/Level2/Enemies/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/Specific/Level2/Enemies/empty.md");
         
		
		if (inName=="assets/tablet-1x/Specific/Level2/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/Specific/Level2/Environment/Background/empty.md");
         
		
		if (inName=="assets/tablet-1x/Specific/Level2/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/Specific/Level2/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/tablet-1x/Specific/Level3/Enemies/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/Specific/Level3/Enemies/empty.md");
         
		
		if (inName=="assets/tablet-1x/Specific/Level3/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/Specific/Level3/Environment/Background/empty.md");
         
		
		if (inName=="assets/tablet-1x/Specific/Level3/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/tablet-1x/Specific/Level3/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/tablet-2x/General/Enemies/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/General/Enemies/empty.md");
         
		
		if (inName=="assets/tablet-2x/General/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/General/Environment/Background/empty.md");
         
		
		if (inName=="assets/tablet-2x/General/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/General/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/tablet-2x/General/Worldmap/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/General/Worldmap/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level1/Enemies/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level1/Enemies/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level1/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level1/Environment/Background/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level2/Enemies/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level2/Enemies/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level2/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level2/Environment/Background/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level3/Enemies/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level3/Enemies/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level3/Environment/Background/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level3/Environment/Background/empty.md");
         
		
		if (inName=="assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md")
			 
			 return Assets.getText ("assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md");
         
		
		if (inName=="assets/xml/bg.xml")
			 
			 return Assets.getText ("assets/xml/bg.xml");
         
		
		if (inName=="assets/xml/bg2.xml")
			 
			 return Assets.getText ("assets/xml/bg2.xml");
         
		
		if (inName=="assets/xml/settings.xml")
			 
			 return Assets.getText ("assets/xml/settings.xml");
         
		
		if (inName=="assets/xml/Specific/Level1/bg.xml")
			 
			 return Assets.getText ("assets/xml/Specific/Level1/bg.xml");
         
		
		if (inName=="assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_1.xml")
			 
			 return Assets.getText ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_1.xml");
         
		
		if (inName=="assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_2.xml")
			 
			 return Assets.getText ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_2.xml");
         
		
		if (inName=="assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_3.xml")
			 
			 return Assets.getText ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_3.xml");
         
		
		if (inName=="assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_4.xml")
			 
			 return Assets.getText ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_4.xml");
         
		
		if (inName=="assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_5.xml")
			 
			 return Assets.getText ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_5.xml");
         
		
		if (inName=="assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_6.xml")
			 
			 return Assets.getText ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_6.xml");
         
		
		if (inName=="assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_7.xml")
			 
			 return Assets.getText ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_7.xml");
         
		
		if (inName=="assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_8.xml")
			 
			 return Assets.getText ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_8.xml");
         
		
		if (inName=="assets/xml/test.xml")
			 
			 return Assets.getText ("assets/xml/test.xml");
         
		
		if (inName=="assets/xml/test2.xml")
			 
			 return Assets.getText ("assets/xml/test2.xml");
         
		
		if (inName=="assets/xml/walking.xml")
			 
			 return Assets.getText ("assets/xml/walking.xml");
         
		
		
		return null;
		
	}
	
	
	private static function preloader_onComplete (event:Event):Void {
		
		mPreloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		
		nme.Lib.current.removeChild(mPreloader);
		mPreloader = null;
		
		begin ();
		
	}
	
}

class NME_assets_mobile_1x_button_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_button2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_general_enemies_walking_sparrow_xml extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_general_enemies_walking_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_general_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_general_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_general_worldmap_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level1_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level1_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_psd extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_5_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_6_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_7_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_8_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_specific_level2_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level2_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level2_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level3_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level3_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_specific_level3_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_test1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_test2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_test3bg_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_walking_sparrow_xml extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_walking_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_2x_button_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_2x_button2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_2x_general_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_general_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_general_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_general_worldmap_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level1_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level1_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level1_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level2_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level2_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level2_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level3_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level3_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_specific_level3_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_test1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_2x_test2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_2x_test3bg_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_2x_walking_sparrow_xml extends nme.utils.ByteArray { }
class NME_assets_mobile_2x_walking_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_general_enemies_walking_xml extends nme.utils.ByteArray { }
class NME_assets_source_general_environment_background_fog_large_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_general_environment_background_fog_large_psd extends nme.utils.ByteArray { }
class NME_assets_source_general_environment_background_fog_medium_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_general_environment_background_fog_medium_psd extends nme.utils.ByteArray { }
class NME_assets_source_general_environment_background_fog_small_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_general_environment_background_fog_small_psd extends nme.utils.ByteArray { }
class NME_assets_source_general_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_general_sound_effects_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_general_sound_music_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_general_worldmap_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_characters_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_characters_player_kutje_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_characters_player_kutje_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg1_hills_hill1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg1_hills_hill1_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg1_hills_hill2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg1_hills_hill2_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg1_hills_hill3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg1_hills_hill3_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg1_hills_hill4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg1_hills_hill4_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg2_trees_tree1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg2_trees_tree1_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg2_trees_tree2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg2_trees_tree2_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg2_trees_tree3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg2_trees_tree3_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg2_trees_tree4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg2_trees_tree4_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree1_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree10_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree10_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree2_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree3_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree4_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree5_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree5_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree6_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree6_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree7_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree7_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree8_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree8_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree9_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg3_trees_tree9_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg4_hills_hill1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg4_hills_hill1_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg4_hills_hill2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg4_hills_hill2_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg4_hills_hill3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg4_hills_hill3_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg4_trees_tree1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg4_trees_tree1_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg4_trees_tree2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg4_trees_tree2_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg4_trees_tree3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg4_trees_tree3_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg4_trees_tree4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg4_trees_tree4_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg4_trees_tree5_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg4_trees_tree5_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg4_trees_tree6_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg4_trees_tree6_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg5_trees_tree1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg5_trees_tree1_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg5_trees_tree2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg5_trees_tree2_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg5_trees_tree3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg5_trees_tree3_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg5_trees_tree4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg5_trees_tree4_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg5_trees_tree5_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg5_trees_tree5_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg6_background_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg6_background_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg6_background02_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg6_star_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg6_star_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_background_bg6_sun_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_background_bg6_sun_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_foreground_fg1_fg1_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_foreground_fg1_fg1_01_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_foreground_fg1_fg1_02_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_foreground_fg1_fg1_03_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_foreground_fg1_fg1_04_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_foreground_fg1_fg1_05_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_foreground_fg1_fg1_06_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_foreground_fg1_fg1_07_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_foreground_fg1_fg1_08_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree1_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree2_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree3_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree4_psd extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_level_1_forrest_jesse_ai extends nme.utils.ByteArray { }
class NME_assets_source_specific_level1_level_1_forrest_jesse_pdf extends nme.utils.ByteArray { }
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
class NME_assets_source_walking_xml extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_general_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_general_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_general_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_general_worldmap_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_specific_level1_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_specific_level1_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_specific_level1_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_specific_level2_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_specific_level2_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_specific_level2_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_specific_level3_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_specific_level3_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_1x_specific_level3_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_general_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_general_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_general_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_general_worldmap_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level1_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level1_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level1_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level2_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level2_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level2_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level3_enemies_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level3_environment_background_empty_md extends nme.utils.ByteArray { }
class NME_assets_tablet_2x_specific_level3_environment_foreground_empty_md extends nme.utils.ByteArray { }
class NME_assets_xml_bg_xml extends nme.utils.ByteArray { }
class NME_assets_xml_bg2_xml extends nme.utils.ByteArray { }
class NME_assets_xml_settings_xml extends nme.utils.ByteArray { }
class NME_assets_xml_specific_level1_bg_xml extends nme.utils.ByteArray { }
class NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_1_xml extends nme.utils.ByteArray { }
class NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_2_xml extends nme.utils.ByteArray { }
class NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_3_xml extends nme.utils.ByteArray { }
class NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_4_xml extends nme.utils.ByteArray { }
class NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_5_xml extends nme.utils.ByteArray { }
class NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_6_xml extends nme.utils.ByteArray { }
class NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_7_xml extends nme.utils.ByteArray { }
class NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_8_xml extends nme.utils.ByteArray { }
class NME_assets_xml_test_xml extends nme.utils.ByteArray { }
class NME_assets_xml_test2_xml extends nme.utils.ByteArray { }
class NME_assets_xml_walking_xml extends nme.utils.ByteArray { }


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
