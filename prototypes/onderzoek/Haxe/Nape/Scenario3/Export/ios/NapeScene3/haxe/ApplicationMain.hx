class ApplicationMain
{
	
	public static function main()
	{
		nme.Lib.setPackage("toSpace", "NapeScene3", "com.gameproject.napescene3", "1.0.0");
		
		
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
			"NapeScene3"
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
		
		if (inName == "assets/sprites/lopen_klein.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/lopen_klein.png");
			
		}
		
		if (inName == "assets/sprites/los/idle.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/idle.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00000.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00000.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00001.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00001.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00002.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00002.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00003.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00003.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00004.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00004.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00005.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00005.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00006.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00006.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00007.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00007.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00008.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00008.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00009.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00009.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00010.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00010.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00011.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00011.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00012.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00012.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00013.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00013.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00014.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00014.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00015.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00015.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00016.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00016.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00017.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00017.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00018.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00018.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00019.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00019.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00020.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00020.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00021.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00021.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00022.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00022.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00023.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00023.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00024.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00024.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00025.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00025.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00026.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00026.png");
			
		}
		
		if (inName == "assets/sprites/los/jump/jump00027.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/jump/jump00027.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00010.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00010.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00011.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00011.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00012.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00012.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00013.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00013.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00014.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00014.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00015.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00015.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00016.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00016.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00017.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00017.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00018.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00018.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00019.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00019.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00020.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00020.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00021.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00021.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00022.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00022.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00023.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00023.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00024.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00024.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00025.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00025.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00026.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00026.png");
			
		}
		
		if (inName == "assets/sprites/los/walk/walk00027.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/los/walk/walk00027.png");
			
		}
		
		if (inName == "assets/sprites/SPRITE.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/SPRITE.png");
			
		}
		
		if (inName == "assets/sprites/SPRITE.xml")
		{
			
			return nme.Assets.getText ("assets/sprites/SPRITE.xml");
			
		}
		
		if (inName == "assets/sprites/TP-file.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/TP-file.png");
			
		}
		
		if (inName == "assets/sprites/TP-file.tps")
		{
			
			return nme.Assets.getText ("assets/sprites/TP-file.tps");
			
		}
		
		if (inName == "assets/sprites/TP-file.xml")
		{
			
			return nme.Assets.getText ("assets/sprites/TP-file.xml");
			
		}
		
		if (inName == "assets/sprites/TP-file2.png")
		{
			
			return nme.Assets.getBitmapData ("assets/sprites/TP-file2.png");
			
		}
		
		if (inName == "assets/sprites/TP-file2.tps")
		{
			
			return nme.Assets.getText ("assets/sprites/TP-file2.tps");
			
		}
		
		if (inName == "assets/sprites/TP-file2.xml")
		{
			
			return nme.Assets.getText ("assets/sprites/TP-file2.xml");
			
		}
		
		if (inName == "assets/tennisbal.png")
		{
			
			return nme.Assets.getBitmapData ("assets/tennisbal.png");
			
		}
		
		if (inName == "assets/walking.png")
		{
			
			return nme.Assets.getBitmapData ("assets/walking.png");
			
		}
		
		if (inName == "assets/walking.xml")
		{
			
			return nme.Assets.getText ("assets/walking.xml");
			
		}
		
		return null;
	}
	
}
