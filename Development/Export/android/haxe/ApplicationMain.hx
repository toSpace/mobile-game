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
		
		if (inName == "assets/mobile-1x/General/bg/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/General/bg/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/General/characters/walking-sparrow.xml")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/General/characters/walking-sparrow.xml");
			
		}
		
		if (inName == "assets/mobile-1x/General/characters/walking.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/General/characters/walking.png");
			
		}
		
		if (inName == "assets/mobile-1x/General/fg/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/General/fg/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/General/gui/button.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/General/gui/button.png");
			
		}
		
		if (inName == "assets/mobile-1x/General/gui/button2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/General/gui/button2.png");
			
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
		
		if (inName == "assets/mobile-1x/world1/lvl1/bg/l1/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/world1/lvl1/bg/l1/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/bg/l2/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/world1/lvl1/bg/l2/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/bg/l3/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/world1/lvl1/bg/l3/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/bg/l4/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/world1/lvl1/bg/l4/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/bg/l5/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/world1/lvl1/bg/l5/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/bg/l6/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/world1/lvl1/bg/l6/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l1/FG1.psd")
		{
			
			return nme.Assets.getBytes ("assets/mobile-1x/world1/lvl1/fg/l1/FG1.psd");
			
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
		
		if (inName == "assets/mobile-1x/world1/lvl1/fg/l2/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/world1/lvl1/fg/l2/empty.md");
			
		}
		
		if (inName == "assets/source/button.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/button.png");
			
		}
		
		if (inName == "assets/source/button2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/button2.png");
			
		}
		
		if (inName == "assets/source/General/bg/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/General/bg/empty.md");
			
		}
		
		if (inName == "assets/source/General/characters/walking-sparrow.xml")
		{
			
			return nme.Assets.getText ("assets/source/General/characters/walking-sparrow.xml");
			
		}
		
		if (inName == "assets/source/General/characters/walking.png")
		{
			
			return nme.Assets.getBitmapData ("assets/source/General/characters/walking.png");
			
		}
		
		if (inName == "assets/source/General/fg/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/General/fg/empty.md");
			
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
		
		if (inName == "assets/source/world1/lvl1/bg/l1/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/world1/lvl1/bg/l1/empty.md");
			
		}
		
		if (inName == "assets/source/world1/lvl1/bg/l2/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/world1/lvl1/bg/l2/empty.md");
			
		}
		
		if (inName == "assets/source/world1/lvl1/bg/l3/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/world1/lvl1/bg/l3/empty.md");
			
		}
		
		if (inName == "assets/source/world1/lvl1/bg/l4/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/world1/lvl1/bg/l4/empty.md");
			
		}
		
		if (inName == "assets/source/world1/lvl1/bg/l5/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/world1/lvl1/bg/l5/empty.md");
			
		}
		
		if (inName == "assets/source/world1/lvl1/bg/l6/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/world1/lvl1/bg/l6/empty.md");
			
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
		
		if (inName == "assets/source/world1/lvl1/fg/l2/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/world1/lvl1/fg/l2/empty.md");
			
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
		
		if (inName == "assets/xml/world1/lvl1/bg/l1/empty.md")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l1/empty.md");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l2/empty.md")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l2/empty.md");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l3/empty.md")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l3/empty.md");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l4/empty.md")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l4/empty.md");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l5/empty.md")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l5/empty.md");
			
		}
		
		if (inName == "assets/xml/world1/lvl1/bg/l6/empty.md")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/bg/l6/empty.md");
			
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
		
		if (inName == "assets/xml/world1/lvl1/fg/l2/empty.md")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl1/fg/l2/empty.md");
			
		}
		
		if (inName == "assets/xml/world1/lvl2/bg.xml")
		{
			
			return nme.Assets.getText ("assets/xml/world1/lvl2/bg.xml");
			
		}
		
		#end
		return null;
	}
	
	
}
