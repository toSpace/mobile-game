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
		
		if (inName == "assets/mobile-1x/General/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/General/Enemies/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/General/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/General/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/General/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/General/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/General/Worldmap/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/General/Worldmap/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/Specific/Level1/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/Specific/Level1/Enemies/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/Specific/Level1/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/Specific/Level1/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/Specific/Level1/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/Specific/Level1/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/Specific/Level2/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/Specific/Level2/Enemies/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/Specific/Level2/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/Specific/Level2/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/Specific/Level3/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/Specific/Level3/Enemies/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/Specific/Level3/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/Specific/Level3/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/mobile-1x/test1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/test1.png");
			
		}
		
		if (inName == "assets/mobile-1x/test2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/test2.png");
			
		}
		
		if (inName == "assets/mobile-2x/General/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/General/Enemies/empty.md");
			
		}
		
		if (inName == "assets/mobile-2x/General/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/General/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/mobile-2x/General/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/General/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/mobile-2x/General/Worldmap/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/General/Worldmap/empty.md");
			
		}
		
		if (inName == "assets/mobile-2x/Specific/Level1/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/Specific/Level1/Enemies/empty.md");
			
		}
		
		if (inName == "assets/mobile-2x/Specific/Level1/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/Specific/Level1/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/mobile-2x/Specific/Level2/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/Specific/Level2/Enemies/empty.md");
			
		}
		
		if (inName == "assets/mobile-2x/Specific/Level2/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/Specific/Level2/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/mobile-2x/Specific/Level3/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/Specific/Level3/Enemies/empty.md");
			
		}
		
		if (inName == "assets/mobile-2x/Specific/Level3/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/Specific/Level3/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/source/bg.xml")
		{
			
			return nme.Assets.getText ("assets/source/bg.xml");
			
		}
		
		if (inName == "assets/source/General/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/General/Enemies/empty.md");
			
		}
		
		if (inName == "assets/source/General/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/General/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/source/General/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/General/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/source/General/Sound/Effects/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/General/Sound/Effects/empty.md");
			
		}
		
		if (inName == "assets/source/General/Sound/Music/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/General/Sound/Music/empty.md");
			
		}
		
		if (inName == "assets/source/General/Worldmap/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/General/Worldmap/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level1/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level1/Enemies/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level1/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level1/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level1/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level1/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level1/Sound/Effects/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level1/Sound/Effects/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level1/Sound/Music/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level1/Sound/Music/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level2/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level2/Enemies/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level2/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level2/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level2/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level2/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level2/Sound/Effects/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level2/Sound/Effects/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level2/Sound/Music/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level2/Sound/Music/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level3/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level3/Enemies/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level3/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level3/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level3/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level3/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level3/Sound/Effects/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level3/Sound/Effects/empty.md");
			
		}
		
		if (inName == "assets/source/Specific/Level3/Sound/Music/empty.md")
		{
			
			return nme.Assets.getText ("assets/source/Specific/Level3/Sound/Music/empty.md");
			
		}
		
		if (inName == "assets/source/test.xml")
		{
			
			return nme.Assets.getText ("assets/source/test.xml");
			
		}
		
		if (inName == "assets/source/test2.xml")
		{
			
			return nme.Assets.getText ("assets/source/test2.xml");
			
		}
		
		if (inName == "assets/tablet-1x/General/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/General/Enemies/empty.md");
			
		}
		
		if (inName == "assets/tablet-1x/General/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/General/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/tablet-1x/General/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/General/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/tablet-1x/General/Worldmap/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/General/Worldmap/empty.md");
			
		}
		
		if (inName == "assets/tablet-1x/Specific/Level1/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/Specific/Level1/Enemies/empty.md");
			
		}
		
		if (inName == "assets/tablet-1x/Specific/Level1/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/Specific/Level1/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/tablet-1x/Specific/Level1/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/Specific/Level1/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/tablet-1x/Specific/Level2/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/Specific/Level2/Enemies/empty.md");
			
		}
		
		if (inName == "assets/tablet-1x/Specific/Level2/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/Specific/Level2/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/tablet-1x/Specific/Level2/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/Specific/Level2/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/tablet-1x/Specific/Level3/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/Specific/Level3/Enemies/empty.md");
			
		}
		
		if (inName == "assets/tablet-1x/Specific/Level3/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/Specific/Level3/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/tablet-1x/Specific/Level3/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-1x/Specific/Level3/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/General/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/General/Enemies/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/General/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/General/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/General/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/General/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/General/Worldmap/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/General/Worldmap/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/Specific/Level1/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/Specific/Level1/Enemies/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/Specific/Level1/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/Specific/Level1/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/Specific/Level2/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/Specific/Level2/Enemies/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/Specific/Level2/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/Specific/Level2/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/Specific/Level3/Enemies/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/Specific/Level3/Enemies/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/Specific/Level3/Environment/Background/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/Specific/Level3/Environment/Background/empty.md");
			
		}
		
		if (inName == "assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md")
		{
			
			return nme.Assets.getText ("assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md");
			
		}
		
		#end
		return null;
	}
	
	
}
