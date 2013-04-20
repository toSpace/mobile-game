class ApplicationMain
{
	
	public static function main()
	{
		nme.Lib.setPackage("toSpace", "NapeScene1", "com.gameproject.napescene1", "1.0.0");
		
		
		nme.display.Stage.shouldRotateInterface = function(orientation:Int):Bool
		{
			
			return true;
			
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
			"NapeScene1"
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
		
		if (inName == "assets/8ball.png")
		{
			
			return nme.Assets.getBitmapData ("assets/8ball.png");
			
		}
		
		if (inName == "assets/banaan.png")
		{
			
			return nme.Assets.getBitmapData ("assets/banaan.png");
			
		}
		
		if (inName == "assets/bier.png")
		{
			
			return nme.Assets.getBitmapData ("assets/bier.png");
			
		}
		
		if (inName == "assets/font.ttf")
		{
			
			return nme.Assets.getFont ("assets/font.ttf");
			
		}
		
		if (inName == "assets/greenleaf.png")
		{
			
			return nme.Assets.getBitmapData ("assets/greenleaf.png");
			
		}
		
		if (inName == "assets/physicsassets.pes")
		{
			
			return nme.Assets.getBytes ("assets/physicsassets.pes");
			
		}
		
		if (inName == "assets/pikachu.png")
		{
			
			return nme.Assets.getBitmapData ("assets/pikachu.png");
			
		}
		
		if (inName == "assets/redleaf.png")
		{
			
			return nme.Assets.getBitmapData ("assets/redleaf.png");
			
		}
		
		if (inName == "assets/rugby.png")
		{
			
			return nme.Assets.getBitmapData ("assets/rugby.png");
			
		}
		
		if (inName == "assets/tennisbal.png")
		{
			
			return nme.Assets.getBitmapData ("assets/tennisbal.png");
			
		}
		
		return null;
	}
	
}
