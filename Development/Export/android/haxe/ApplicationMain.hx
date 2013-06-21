class ApplicationMain
{

	#if waxe
	static public var frame : wx.Frame;
	static public var autoShowFrame : Bool = true;
	#if nme
	static public var nmeStage : wx.NMEStage;
	#end
	#end
	
	public static function main()
	{
		#if nme
		nme.Lib.setPackage("toSpace", "Game", "com.tospace.game", "1.0.0");
		
		#end
		
		#if waxe
		wx.App.boot(function()
		{
			
			frame = wx.Frame.create(null, null, "Heuvels", null, { width: 640, height: 480 });
			
			#if nme
			var stage = wx.NMEStage.create(frame, null, null, { width: 640, height: 480 });
			#end
			
			Main.main();
			
			if (autoShowFrame)
			{
				wx.App.setTopWindow(frame);
				frame.shown = true;
			}
		});
		#else
		
		nme.Lib.create(function()
			{ 
				//if ((640 == 0 && 480 == 0) || true)
				//{
					nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
					nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
				//}
				
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
					#if nme
					if (Std.is (instance, nme.display.DisplayObject)) {
						nme.Lib.current.addChild(cast instance);
					}
					#end
				}
			},
			640, 480, 
			30, 
			16777215,
			(true ? nme.Lib.HARDWARE : 0) |
			(false ? nme.Lib.ALLOW_SHADERS : 0) |
			(false ? nme.Lib.REQUIRE_SHADERS : 0) |
			(false ? nme.Lib.DEPTH_BUFFER : 0) |
			(false ? nme.Lib.STENCIL_BUFFER : 0) |
			(true ? nme.Lib.RESIZABLE : 0) |
			(false ? nme.Lib.BORDERLESS : 0) |
			(false ? nme.Lib.VSYNC : 0) |
			(true ? nme.Lib.FULLSCREEN : 0) |
			(0 == 4 ? nme.Lib.HW_AA_HIRES : 0) |
			(0 == 2 ? nme.Lib.HW_AA : 0),
			"Heuvels"
			
		);
		#end
		
	}
	
	
	#if neko
	public static function __init__ () {
		
		untyped $loader.path = $array ("@executable_path/", $loader.path);
		
	}
	#end
	
	
	public static function getAsset(inName:String):Dynamic
	{
		#if nme
		
		if (inName == "assets/mobile-1x/general/bg/fog_large.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/bg/fog_large.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/bg/fog_medium.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/bg/fog_medium.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/bg/fog_small.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/bg/fog_small.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/bg/star.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/bg/star.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/characters/walking-sparrow.xml")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/general/characters/walking-sparrow.xml");
			
		}
		
		if (inName == "assets/mobile-1x/general/characters/walking.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/characters/walking.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/fg/grass1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/fg/grass1.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/fg/grass2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/fg/grass2.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/fg/grass3.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/fg/grass3.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/fg/grass4.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/fg/grass4.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/fg/grass5.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/fg/grass5.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/fg/grass6.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/fg/grass6.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/fg/grass7.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/fg/grass7.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/gui/button.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/gui/button.png");
			
		}
		
		if (inName == "assets/mobile-1x/general/gui/button2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/general/gui/button2.png");
			
		}
		
		if (inName == "assets/mobile-1x/test1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/test1.png");
			
		}
		
		if (inName == "assets/mobile-1x/test2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/test2.png");
			
		}
		
		if (inName == "assets/mobile-1x/test3bg.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/test3bg.png");
			
		}
		
		if (inName == "assets/mobile-1x/walking-sparrow.xml")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/walking-sparrow.xml");
			
		}
		
		if (inName == "assets/mobile-1x/walking.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/walking.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/hill1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill1.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/hill2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill2.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/hill3.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill3.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/hill4.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill4.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/hill5.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill5.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/hill6.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill6.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/hill7.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/hill7.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree1.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree10.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree10.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree11.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree11.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree12.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree12.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree13.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree13.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree14.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree14.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree15.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree15.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree16.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree16.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree17.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree17.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree18.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree18.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree19.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree19.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree2.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree20.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree20.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree21.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree21.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree22.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree22.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree23.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree23.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree24.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree24.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree25.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree25.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree3.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree3.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree4.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree4.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree5.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree5.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree6.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree6.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree7.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree7.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree8.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree8.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/bg/tree9.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/general/bg/tree9.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/general/fg/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/world1/general/fg/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/bg/background.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/bg/background.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/bg/background02.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/bg/background02.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/bg/sun.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/bg/sun.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l2/tree1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l2/tree2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l2/tree3.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l2/tree4.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png");
			
		}
		
		if (inName == "assets/source/general/bg/fog_large.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/bg/fog_large.png");
			
		}
		
		if (inName == "assets/source/general/bg/fog_large.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/general/bg/fog_large.psd");
			
		}
		
		if (inName == "assets/source/general/bg/fog_medium.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/bg/fog_medium.png");
			
		}
		
		if (inName == "assets/source/general/bg/fog_medium.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/general/bg/fog_medium.psd");
			
		}
		
		if (inName == "assets/source/general/bg/fog_small.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/bg/fog_small.png");
			
		}
		
		if (inName == "assets/source/general/bg/fog_small.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/general/bg/fog_small.psd");
			
		}
		
		if (inName == "assets/source/general/bg/star.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/bg/star.png");
			
		}
		
		if (inName == "assets/source/general/bg/star.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/general/bg/star.psd");
			
		}
		
		if (inName == "assets/source/general/characters/walking-sparrow.xml")
		{
			
			return nme.Assets.getText ("assets/source/general/characters/walking-sparrow.xml");
			
		}
		
		if (inName == "assets/source/general/characters/walking.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/characters/walking.png");
			
		}
		
		if (inName == "assets/source/general/fg/grass1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/fg/grass1.png");
			
		}
		
		if (inName == "assets/source/general/fg/grass1.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/general/fg/grass1.psd");
			
		}
		
		if (inName == "assets/source/general/fg/grass2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/fg/grass2.png");
			
		}
		
		if (inName == "assets/source/general/fg/grass2.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/general/fg/grass2.psd");
			
		}
		
		if (inName == "assets/source/general/fg/grass3.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/fg/grass3.png");
			
		}
		
		if (inName == "assets/source/general/fg/grass3.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/general/fg/grass3.psd");
			
		}
		
		if (inName == "assets/source/general/fg/grass4.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/fg/grass4.png");
			
		}
		
		if (inName == "assets/source/general/fg/grass4.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/general/fg/grass4.psd");
			
		}
		
		if (inName == "assets/source/general/fg/grass5.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/fg/grass5.png");
			
		}
		
		if (inName == "assets/source/general/fg/grass5.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/general/fg/grass5.psd");
			
		}
		
		if (inName == "assets/source/general/fg/grass6.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/fg/grass6.png");
			
		}
		
		if (inName == "assets/source/general/fg/grass6.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/general/fg/grass6.psd");
			
		}
		
		if (inName == "assets/source/general/fg/grass7.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/fg/grass7.png");
			
		}
		
		if (inName == "assets/source/general/fg/grass7.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/general/fg/grass7.psd");
			
		}
		
		if (inName == "assets/source/general/gui/button.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/gui/button.png");
			
		}
		
		if (inName == "assets/source/general/gui/button2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/general/gui/button2.png");
			
		}
		
		if (inName == "assets/source/level_1-forrest-jesse.ai")
		{
			
			return nme.Assets.getText ("assets/source/level_1-forrest-jesse.ai");
			
		}
		
		if (inName == "assets/source/level_1-forrest-jesse.pdf")
		{
			
			return nme.Assets.getText ("assets/source/level_1-forrest-jesse.pdf");
			
		}
		
		if (inName == "assets/source/test1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/test1.png");
			
		}
		
		if (inName == "assets/source/test2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/test2.png");
			
		}
		
		if (inName == "assets/source/test3bg.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/test3bg.png");
			
		}
		
		if (inName == "assets/source/walking-sparrow.xml")
		{
			
			return nme.Assets.getText ("assets/source/walking-sparrow.xml");
			
		}
		
		if (inName == "assets/source/walking.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/walking.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/hill1.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill1.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/hill1.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/hill2.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill2.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/hill2.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill3.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/hill3.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill3.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/hill3.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill4.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/hill4.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill4.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/hill4.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill5.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/hill5.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill5.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/hill5.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill6.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/hill6.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill6.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/hill6.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill7.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/hill7.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/hill7.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/hill7.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree1.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree1.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree1.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree10.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree10.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree10.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree10.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree11.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree11.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree11.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree11.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree12.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree12.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree12.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree12.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree13.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree13.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree13.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree13.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree14.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree14.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree14.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree14.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree15.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree15.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree15.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree15.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree16.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree16.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree16.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree16.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree17.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree17.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree17.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree17.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree18.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree18.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree18.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree18.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree19.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree19.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree19.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree19.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree2.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree2.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree2.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree20.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree20.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree20.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree20.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree21.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree21.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree21.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree21.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree22.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree22.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree22.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree22.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree23.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree23.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree23.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree23.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree24.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree24.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree24.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree24.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree25.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree25.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree25.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree25.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree3.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree3.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree3.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree3.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree4.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree4.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree4.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree4.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree5.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree5.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree5.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree5.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree6.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree6.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree6.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree6.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree7.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree7.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree7.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree7.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree8.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree8.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree8.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree8.psd");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree9.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/general/bg/tree9.png");
			
		}
		
		if (inName == "assets/source/world1/general/bg/tree9.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/general/bg/tree9.psd");
			
		}
		
		if (inName == "assets/source/world1/general/fg/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/world1/general/fg/empty.md");
			
		}
		
		if (inName == "assets/source/world1/lvl1/bg/background.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/bg/background.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/bg/background.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/lvl1/bg/background.psd");
			
		}
		
		if (inName == "assets/source/world1/lvl1/bg/background02.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/bg/background02.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/bg/sun.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/bg/sun.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/bg/sun.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/lvl1/bg/sun.psd");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l1/FG1.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/lvl1/fg/l1/FG1.psd");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l2/tree1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/fg/l2/tree1.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l2/tree1.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/lvl1/fg/l2/tree1.psd");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l2/tree2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/fg/l2/tree2.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l2/tree2.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/lvl1/fg/l2/tree2.psd");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l2/tree3.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/fg/l2/tree3.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l2/tree3.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/lvl1/fg/l2/tree3.psd");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l2/tree4.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/world1/lvl1/fg/l2/tree4.png");
			
		}
		
		if (inName == "assets/source/world1/lvl1/fg/l2/tree4.psd")
		{
			
			return nme.Assets.getBytes ("assets/source/world1/lvl1/fg/l2/tree4.psd");
			
		}
		
		if (inName == "assets/xml/bg.xml")
		{
			
			return nme.Assets.getText ("assets/xml/bg.xml");
			
		}
		
		if (inName == "assets/xml/bg2.xml")
		{
			
			return nme.Assets.getText ("assets/xml/bg2.xml");
			
		}
		
		if (inName == "assets/xml/general/bg/empty.md")
		{
			
			return nme.Assets.getText ("assets/xml/general/bg/empty.md");
			
		}
		
		if (inName == "assets/xml/general/characters/empty.md")
		{
			
			return nme.Assets.getText ("assets/xml/general/characters/empty.md");
			
		}
		
		if (inName == "assets/xml/general/fg/empty.md")
		{
			
			return nme.Assets.getText ("assets/xml/general/fg/empty.md");
			
		}
		
		if (inName == "assets/xml/settings.xml")
		{
			
			return nme.Assets.getText ("assets/xml/settings.xml");
			
		}
		
		if (inName == "assets/xml/test.xml")
		{
			
			return nme.Assets.getText ("assets/xml/test.xml");
			
		}
		
		if (inName == "assets/xml/test2.xml")
		{
			
			return nme.Assets.getText ("assets/xml/test2.xml");
			
		}
		
		if (inName == "assets/xml/walking.xml")
		{
			
			return nme.Assets.getText ("assets/xml/walking.xml");
			
		}
		
		if (inName == "assets/xml/world1/general/empty.md")
		{
			
			return nme.Assets.getText ("assets/xml/world1/general/empty.md");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_background.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_background.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml");
			
		}
		
		if (inName == "assets/xml/world1/lvl2/bg.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl2/bg.xml");
			
		}
		
		#end
		return null;
	}
	
	
}
