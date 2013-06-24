typedef ARGB =
  {
    var a:Int;
    var r:Int;
    var g:Int;
    var b:Int;
  }

class ARGBUtil
{
  public static var kTransparentAlpha:Int = 0;
  public static var kOpaqueAlpha:Int = 255;

  public static function alphaMultiplier( argb:ARGB, times:Float ):ARGB
  {
    return
      { a: cast (argb.a * times),
	  r: argb.r,
	  g: argb.g,
	  b: argb.b };
  }

  public static function randomARGB():ARGB
  {
    return
      { a: kOpaqueAlpha,
	  r: cast Math.random() * 255,
	  g: cast Math.random() * 255,
	  b: cast Math.random() * 255 };
  }

  public static function rgbToInt( argb:ARGB )
  {
    var i =
      ((argb.r & 255) << 16) |
      ((argb.g & 255) << 8) |
      (argb.b & 255);
    return i;
  }

  public static function argbToInt( argb:ARGB )
  {
    var i =
    	((argb.a & 255) << 24) |
      ((argb.r & 255) << 16) |
      ((argb.g & 255) << 8) |
      (argb.b & 255);
    return i;
  }
  
  public static function rgbToCSSString( argb:ARGB )
  {
    var h =
      "#" +
      StringTools.hex( argb.r, 2 ) +
      StringTools.hex( argb.g, 2 ) +
      StringTools.hex( argb.b, 2 );
    return h;
  }
}