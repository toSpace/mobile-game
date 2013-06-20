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
		
		
		if (inName=="assets/mobile-1x/general/bg/fog_large.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/general/bg/fog_large.png");
         
		
		if (inName=="assets/mobile-1x/general/bg/fog_medium.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/general/bg/fog_medium.png");
         
		
		if (inName=="assets/mobile-1x/general/bg/fog_small.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/general/bg/fog_small.png");
         
		
		if (inName=="assets/mobile-1x/general/bg/star.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/general/bg/star.png");
         
		
		if (inName=="assets/mobile-1x/general/characters/walking-sparrow.xml")
			 
			 return Assets.getText ("assets/mobile-1x/general/characters/walking-sparrow.xml");
         
		
		if (inName=="assets/mobile-1x/general/characters/walking.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/general/characters/walking.png");
         
		
		if (inName=="assets/mobile-1x/general/fg/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/general/fg/empty.md");
         
		
		if (inName=="assets/mobile-1x/general/gui/button.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/general/gui/button.png");
         
		
		if (inName=="assets/mobile-1x/general/gui/button2.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/general/gui/button2.png");
         
		
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
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/hill1.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill1.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/hill2.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill2.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/hill3.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill3.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/hill4.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill4.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/hill5.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill5.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/hill6.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill6.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/hill7.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill7.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree1.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree1.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree10.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree10.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree11.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree11.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree12.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree12.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree13.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree13.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree14.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree14.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree15.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree15.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree16.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree16.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree17.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree17.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree18.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree18.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree19.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree19.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree2.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree2.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree20.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree20.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree21.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree21.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree22.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree22.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree23.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree23.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree24.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree24.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree25.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree25.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree3.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree3.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree4.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree4.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree5.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree5.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree6.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree6.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree7.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree7.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree8.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree8.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/bg/tree9.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree9.png");
         
		
		if (inName=="assets/mobile-1x/world1/general/fg/empty.md")
			 
			 return Assets.getText ("assets/mobile-1x/world1/general/fg/empty.md");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/bg/background.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/bg/background.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/bg/background02.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/bg/background02.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/bg/sun.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/bg/sun.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/fg/l2/tree1.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/fg/l2/tree2.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/fg/l2/tree3.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png");
         
		
		if (inName=="assets/mobile-1x/world1/lvl1/fg/l2/tree4.png")
			 
            return Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png");
         
		
		if (inName=="assets/source/general/bg/fog_large.png")
			 
            return Assets.getBitmapData ("assets/source/general/bg/fog_large.png");
         
		
		if (inName=="assets/source/general/bg/fog_large.psd")
			 
            return Assets.getBytes ("assets/source/general/bg/fog_large.psd");
         
		
		if (inName=="assets/source/general/bg/fog_medium.png")
			 
            return Assets.getBitmapData ("assets/source/general/bg/fog_medium.png");
         
		
		if (inName=="assets/source/general/bg/fog_medium.psd")
			 
            return Assets.getBytes ("assets/source/general/bg/fog_medium.psd");
         
		
		if (inName=="assets/source/general/bg/fog_small.png")
			 
            return Assets.getBitmapData ("assets/source/general/bg/fog_small.png");
         
		
		if (inName=="assets/source/general/bg/fog_small.psd")
			 
            return Assets.getBytes ("assets/source/general/bg/fog_small.psd");
         
		
		if (inName=="assets/source/general/bg/star.png")
			 
            return Assets.getBitmapData ("assets/source/general/bg/star.png");
         
		
		if (inName=="assets/source/general/bg/star.psd")
			 
            return Assets.getBytes ("assets/source/general/bg/star.psd");
         
		
		if (inName=="assets/source/general/characters/walking-sparrow.xml")
			 
			 return Assets.getText ("assets/source/general/characters/walking-sparrow.xml");
         
		
		if (inName=="assets/source/general/characters/walking.png")
			 
            return Assets.getBitmapData ("assets/source/general/characters/walking.png");
         
		
		if (inName=="assets/source/general/fg/empty.md")
			 
			 return Assets.getText ("assets/source/general/fg/empty.md");
         
		
		if (inName=="assets/source/general/gui/button.png")
			 
            return Assets.getBitmapData ("assets/source/general/gui/button.png");
         
		
		if (inName=="assets/source/general/gui/button2.png")
			 
            return Assets.getBitmapData ("assets/source/general/gui/button2.png");
         
		
		if (inName=="assets/source/level_1-forrest-jesse.ai")
			 
			 return Assets.getText ("assets/source/level_1-forrest-jesse.ai");
         
		
		if (inName=="assets/source/level_1-forrest-jesse.pdf")
			 
			 return Assets.getText ("assets/source/level_1-forrest-jesse.pdf");
         
		
		if (inName=="assets/source/test1.png")
			 
            return Assets.getBitmapData ("assets/source/test1.png");
         
		
		if (inName=="assets/source/test2.png")
			 
            return Assets.getBitmapData ("assets/source/test2.png");
         
		
		if (inName=="assets/source/test3bg.png")
			 
            return Assets.getBitmapData ("assets/source/test3bg.png");
         
		
		if (inName=="assets/source/walking-sparrow.xml")
			 
			 return Assets.getText ("assets/source/walking-sparrow.xml");
         
		
		if (inName=="assets/source/walking.png")
			 
            return Assets.getBitmapData ("assets/source/walking.png");
         
		
		if (inName=="assets/source/world1/general/bg/hill1.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/hill1.png");
         
		
		if (inName=="assets/source/world1/general/bg/hill1.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/hill1.psd");
         
		
		if (inName=="assets/source/world1/general/bg/hill2.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/hill2.png");
         
		
		if (inName=="assets/source/world1/general/bg/hill2.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/hill2.psd");
         
		
		if (inName=="assets/source/world1/general/bg/hill3.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/hill3.png");
         
		
		if (inName=="assets/source/world1/general/bg/hill3.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/hill3.psd");
         
		
		if (inName=="assets/source/world1/general/bg/hill4.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/hill4.png");
         
		
		if (inName=="assets/source/world1/general/bg/hill4.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/hill4.psd");
         
		
		if (inName=="assets/source/world1/general/bg/hill5.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/hill5.png");
         
		
		if (inName=="assets/source/world1/general/bg/hill5.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/hill5.psd");
         
		
		if (inName=="assets/source/world1/general/bg/hill6.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/hill6.png");
         
		
		if (inName=="assets/source/world1/general/bg/hill6.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/hill6.psd");
         
		
		if (inName=="assets/source/world1/general/bg/hill7.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/hill7.png");
         
		
		if (inName=="assets/source/world1/general/bg/hill7.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/hill7.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree1.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree1.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree1.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree1.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree10.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree10.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree10.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree10.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree11.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree11.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree11.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree11.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree12.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree12.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree12.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree12.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree13.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree13.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree13.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree13.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree14.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree14.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree14.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree14.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree15.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree15.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree15.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree15.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree16.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree16.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree16.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree16.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree17.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree17.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree17.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree17.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree18.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree18.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree18.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree18.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree19.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree19.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree19.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree19.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree2.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree2.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree2.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree2.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree20.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree20.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree20.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree20.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree21.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree21.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree21.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree21.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree22.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree22.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree22.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree22.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree23.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree23.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree23.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree23.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree24.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree24.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree24.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree24.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree25.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree25.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree25.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree25.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree3.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree3.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree3.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree3.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree4.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree4.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree4.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree4.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree5.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree5.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree5.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree5.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree6.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree6.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree6.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree6.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree7.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree7.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree7.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree7.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree8.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree8.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree8.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree8.psd");
         
		
		if (inName=="assets/source/world1/general/bg/tree9.png")
			 
            return Assets.getBitmapData ("assets/source/world1/general/bg/tree9.png");
         
		
		if (inName=="assets/source/world1/general/bg/tree9.psd")
			 
            return Assets.getBytes ("assets/source/world1/general/bg/tree9.psd");
         
		
		if (inName=="assets/source/world1/general/fg/empty.md")
			 
			 return Assets.getText ("assets/source/world1/general/fg/empty.md");
         
		
		if (inName=="assets/source/world1/lvl1/bg/background.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/bg/background.png");
         
		
		if (inName=="assets/source/world1/lvl1/bg/background.psd")
			 
            return Assets.getBytes ("assets/source/world1/lvl1/bg/background.psd");
         
		
		if (inName=="assets/source/world1/lvl1/bg/background02.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/bg/background02.png");
         
		
		if (inName=="assets/source/world1/lvl1/bg/sun.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/bg/sun.png");
         
		
		if (inName=="assets/source/world1/lvl1/bg/sun.psd")
			 
            return Assets.getBytes ("assets/source/world1/lvl1/bg/sun.psd");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l1/FG1.psd")
			 
            return Assets.getBytes ("assets/source/world1/lvl1/fg/l1/FG1.psd");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l2/tree1.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/fg/l2/tree1.png");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l2/tree1.psd")
			 
            return Assets.getBytes ("assets/source/world1/lvl1/fg/l2/tree1.psd");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l2/tree2.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/fg/l2/tree2.png");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l2/tree2.psd")
			 
            return Assets.getBytes ("assets/source/world1/lvl1/fg/l2/tree2.psd");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l2/tree3.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/fg/l2/tree3.png");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l2/tree3.psd")
			 
            return Assets.getBytes ("assets/source/world1/lvl1/fg/l2/tree3.psd");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l2/tree4.png")
			 
            return Assets.getBitmapData ("assets/source/world1/lvl1/fg/l2/tree4.png");
         
		
		if (inName=="assets/source/world1/lvl1/fg/l2/tree4.psd")
			 
            return Assets.getBytes ("assets/source/world1/lvl1/fg/l2/tree4.psd");
         
		
		if (inName=="assets/xml/bg.xml")
			 
			 return Assets.getText ("assets/xml/bg.xml");
         
		
		if (inName=="assets/xml/bg2.xml")
			 
			 return Assets.getText ("assets/xml/bg2.xml");
         
		
		if (inName=="assets/xml/general/bg/empty.md")
			 
			 return Assets.getText ("assets/xml/general/bg/empty.md");
         
		
		if (inName=="assets/xml/general/characters/empty.md")
			 
			 return Assets.getText ("assets/xml/general/characters/empty.md");
         
		
		if (inName=="assets/xml/general/fg/empty.md")
			 
			 return Assets.getText ("assets/xml/general/fg/empty.md");
         
		
		if (inName=="assets/xml/settings.xml")
			 
			 return Assets.getText ("assets/xml/settings.xml");
         
		
		if (inName=="assets/xml/test.xml")
			 
			 return Assets.getText ("assets/xml/test.xml");
         
		
		if (inName=="assets/xml/test2.xml")
			 
			 return Assets.getText ("assets/xml/test2.xml");
         
		
		if (inName=="assets/xml/walking.xml")
			 
			 return Assets.getText ("assets/xml/walking.xml");
         
		
		if (inName=="assets/xml/world1/general/empty.md")
			 
			 return Assets.getText ("assets/xml/world1/general/empty.md");
         
		
		if (inName=="assets/xml/world1/lvl1/bg/l1/empty.md")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/bg/l1/empty.md");
         
		
		if (inName=="assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/bg/l2/empty.md")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/bg/l2/empty.md");
         
		
		if (inName=="assets/xml/world1/lvl1/bg/l3/empty.md")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/bg/l3/empty.md");
         
		
		if (inName=="assets/xml/world1/lvl1/bg/l4/empty.md")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/bg/l4/empty.md");
         
		
		if (inName=="assets/xml/world1/lvl1/bg/l5/empty.md")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/bg/l5/empty.md");
         
		
		if (inName=="assets/xml/world1/lvl1/bg/l6/empty.md")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/bg/l6/empty.md");
         
		
		if (inName=="assets/xml/world1/lvl1/bg.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/bg.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml");
         
		
		if (inName=="assets/xml/world1/lvl1/fg/l2/empty.md")
			 
			 return Assets.getText ("assets/xml/world1/lvl1/fg/l2/empty.md");
         
		
		if (inName=="assets/xml/world1/lvl2/bg.xml")
			 
			 return Assets.getText ("assets/xml/world1/lvl2/bg.xml");
         
		
		
		return null;
		
	}
	
	
	private static function preloader_onComplete (event:Event):Void {
		
		mPreloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		
		nme.Lib.current.removeChild(mPreloader);
		mPreloader = null;
		
		begin ();
		
	}
	
}

class NME_assets_mobile_1x_general_bg_fog_large_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_general_bg_fog_medium_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_general_bg_fog_small_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_general_bg_star_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_general_characters_walking_sparrow_xml extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_general_characters_walking_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_general_fg_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_general_gui_button_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_general_gui_button2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_test1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_test2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_test3bg_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_walking_sparrow_xml extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_walking_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_hill1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_hill2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_hill3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_hill4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_hill5_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_hill6_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_hill7_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree10_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree11_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree12_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree13_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree14_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree15_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree16_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree17_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree18_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree19_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree20_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree21_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree22_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree23_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree24_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree25_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree5_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree6_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree7_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree8_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_bg_tree9_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_general_fg_empty_md extends nme.utils.ByteArray { }
class NME_assets_mobile_1x_world1_lvl1_bg_background_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_bg_background02_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_bg_sun_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_5_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_6_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_7_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_8_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_fg_l2_tree1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_fg_l2_tree2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_fg_l2_tree3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_mobile_1x_world1_lvl1_fg_l2_tree4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_general_bg_fog_large_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_general_bg_fog_large_psd extends nme.utils.ByteArray { }
class NME_assets_source_general_bg_fog_medium_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_general_bg_fog_medium_psd extends nme.utils.ByteArray { }
class NME_assets_source_general_bg_fog_small_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_general_bg_fog_small_psd extends nme.utils.ByteArray { }
class NME_assets_source_general_bg_star_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_general_bg_star_psd extends nme.utils.ByteArray { }
class NME_assets_source_general_characters_walking_sparrow_xml extends nme.utils.ByteArray { }
class NME_assets_source_general_characters_walking_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_general_fg_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_general_gui_button_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_general_gui_button2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_level_1_forrest_jesse_ai extends nme.utils.ByteArray { }
class NME_assets_source_level_1_forrest_jesse_pdf extends nme.utils.ByteArray { }
class NME_assets_source_test1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_test2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_test3bg_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_walking_sparrow_xml extends nme.utils.ByteArray { }
class NME_assets_source_walking_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_hill1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_hill1_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_hill2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_hill2_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_hill3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_hill3_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_hill4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_hill4_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_hill5_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_hill5_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_hill6_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_hill6_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_hill7_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_hill7_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree1_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree10_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree10_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree11_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree11_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree12_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree12_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree13_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree13_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree14_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree14_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree15_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree15_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree16_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree16_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree17_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree17_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree18_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree18_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree19_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree19_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree2_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree20_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree20_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree21_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree21_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree22_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree22_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree23_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree23_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree24_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree24_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree25_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree25_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree3_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree4_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree5_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree5_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree6_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree6_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree7_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree7_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree8_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree8_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_bg_tree9_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_general_bg_tree9_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_general_fg_empty_md extends nme.utils.ByteArray { }
class NME_assets_source_world1_lvl1_bg_background_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_bg_background_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_lvl1_bg_background02_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_bg_sun_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_bg_sun_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_lvl1_fg_l1_fg1_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_5_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_6_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_7_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_8_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_fg_l2_tree1_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_fg_l2_tree1_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_lvl1_fg_l2_tree2_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_fg_l2_tree2_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_lvl1_fg_l2_tree3_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_fg_l2_tree3_psd extends nme.utils.ByteArray { }
class NME_assets_source_world1_lvl1_fg_l2_tree4_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_source_world1_lvl1_fg_l2_tree4_psd extends nme.utils.ByteArray { }
class NME_assets_xml_bg_xml extends nme.utils.ByteArray { }
class NME_assets_xml_bg2_xml extends nme.utils.ByteArray { }
class NME_assets_xml_general_bg_empty_md extends nme.utils.ByteArray { }
class NME_assets_xml_general_characters_empty_md extends nme.utils.ByteArray { }
class NME_assets_xml_general_fg_empty_md extends nme.utils.ByteArray { }
class NME_assets_xml_settings_xml extends nme.utils.ByteArray { }
class NME_assets_xml_test_xml extends nme.utils.ByteArray { }
class NME_assets_xml_test2_xml extends nme.utils.ByteArray { }
class NME_assets_xml_walking_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_general_empty_md extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_bg_l1_empty_md extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_bg_l1_lvl1_bg_l1_hill1_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_bg_l1_lvl1_bg_l1_hill2_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_bg_l1_lvl1_bg_l1_hill3_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_bg_l1_lvl1_bg_l1_hill4_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_bg_l2_empty_md extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_bg_l3_empty_md extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_bg_l4_empty_md extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_bg_l5_empty_md extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_bg_l6_empty_md extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_bg_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_1_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_2_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_3_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_4_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_5_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_6_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_7_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_8_xml extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl1_fg_l2_empty_md extends nme.utils.ByteArray { }
class NME_assets_xml_world1_lvl2_bg_xml extends nme.utils.ByteArray { }


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
