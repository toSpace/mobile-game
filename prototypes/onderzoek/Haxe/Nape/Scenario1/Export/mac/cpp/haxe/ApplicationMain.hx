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
		nme.Lib.setPackage("toSpace", "NapeScene1", "com.gameproject.napescene1", "1.0.0");
		
		#end
		
		#if waxe
		wx.App.boot(function()
		{
			
			frame = wx.Frame.create(null, null, "NapeScene1", null, { width: 800, height: 600 });
			
			#if nme
			var stage = wx.NMEStage.create(frame, null, null, { width: 800, height: 600 });
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
				//if ((800 == 0 && 600 == 0) || false)
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
			800, 600, 
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
			(false ? nme.Lib.FULLSCREEN : 0) |
			(0 == 4 ? nme.Lib.HW_AA_HIRES : 0) |
			(0 == 2 ? nme.Lib.HW_AA : 0),
			"NapeScene1"
			
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
		
		#end
		return null;
	}
	
	
}
