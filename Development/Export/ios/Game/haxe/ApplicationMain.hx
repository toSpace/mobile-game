class ApplicationMain
{
	
	public static function main()
	{
		nme.Lib.setPackage("toSpace", "Game", "com.tospace.game", "1.0.0");
		
		
		nme.display.Stage.shouldRotateInterface = function(orientation:Int):Bool
		{
			
			if (orientation == nme.display.Stage.OrientationLandscapeLeft || orientation == nme.display.Stage.OrientationLandscapeRight)
			{
				return true;
			}
			return false;
			
		}
		
		nme.Lib.create(function()
			{
				if (640 == 0 && 480 == 0)
				{
					nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
					nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
				}
				
				//nme.Lib.current.stage.addEventListener (nme.events.Event.RESIZE, initialize);
				initialize ();
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
			(0 == 4 ? nme.Lib.HW_AA_HIRES : 0) |
			(0 == 2 ? nme.Lib.HW_AA : 0),
			"Heuvels"
		);
		
	}
	
	
	private static function initialize ():Void
	{
		//nme.Lib.current.stage.removeEventListener (nme.events.Event.RESIZE, initialize);
		
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
			nme.Lib.current.addChild(cast (Type.createInstance(Main, []), nme.display.DisplayObject));	
		}
	}
	
	
	public static function getAsset(inName:String):Dynamic
	{
		
		if (inName == "assets/mobile-1x/button.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/button.png");
			
		}
		
		if (inName == "assets/mobile-1x/button2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/button2.png");
			
		}
		
		if (inName == "assets/mobile-1x/General/Enemies/walking-sparrow.xml")
		{
			
			return nme.Assets.getText ("assets/mobile-1x/General/Enemies/walking-sparrow.xml");
			
		}
		
		if (inName == "assets/mobile-1x/General/Enemies/walking.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-1x/General/Enemies/walking.png");
			
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
		
		if (inName == "assets/mobile-2x/button.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-2x/button.png");
			
		}
		
		if (inName == "assets/mobile-2x/button2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-2x/button2.png");
			
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
		
		if (inName == "assets/mobile-2x/test1.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-2x/test1.png");
			
		}
		
		if (inName == "assets/mobile-2x/test2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-2x/test2.png");
			
		}
		
		if (inName == "assets/mobile-2x/test3bg.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-2x/test3bg.png");
			
		}
		
		if (inName == "assets/mobile-2x/walking-sparrow.xml")
		{
			
			return nme.Assets.getText ("assets/mobile-2x/walking-sparrow.xml");
			
		}
		
		if (inName == "assets/mobile-2x/walking.png")
		{
			
			return nme.Assets.getBitmapData ("assets/mobile-2x/walking.png");
			
		}
		
		if (inName == "assets/source/General/Enemies/walking.xml")
		{
			
			return nme.Assets.getText ("assets/source/General/Enemies/walking.xml");
			
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
		
		if (inName == "assets/source/walking.xml")
		{
			
			return nme.Assets.getText ("assets/source/walking.xml");
			
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
		
		if (inName == "assets/xml/bg.xml")
		{
			
			return nme.Assets.getText ("assets/xml/bg.xml");
			
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
		
		return null;
	}
	
}
