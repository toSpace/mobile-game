package nme.installer;


import format.display.MovieClip;
import haxe.Unserializer;
import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;

#if swf
import format.SWF;
#end

#if xfl
import format.XFL;
#end


/**
 * ...
 * @author Joshua Granick
 */

class Assets {

	
	public static var cachedBitmapData:Hash<BitmapData> = new Hash<BitmapData>();
	#if swf private static var cachedSWFLibraries:Hash <SWF> = new Hash <SWF> (); #end
	#if xfl private static var cachedXFLLibraries:Hash <XFL> = new Hash <XFL> (); #end
	
	private static var initialized:Bool = false;
	private static var libraryTypes:Hash <String> = new Hash <String> ();
	private static var resourceNames:Hash <String> = new Hash <String> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			resourceNames.set ("assets/mobile-1x/general/bg/fog_large.png", "assets/mobile-1x/general/bg/fog_large.png");
			resourceTypes.set ("assets/mobile-1x/general/bg/fog_large.png", "image");
			resourceNames.set ("assets/mobile-1x/general/bg/fog_medium.png", "assets/mobile-1x/general/bg/fog_medium.png");
			resourceTypes.set ("assets/mobile-1x/general/bg/fog_medium.png", "image");
			resourceNames.set ("assets/mobile-1x/general/bg/fog_small.png", "assets/mobile-1x/general/bg/fog_small.png");
			resourceTypes.set ("assets/mobile-1x/general/bg/fog_small.png", "image");
			resourceNames.set ("assets/mobile-1x/general/bg/star.png", "assets/mobile-1x/general/bg/star.png");
			resourceTypes.set ("assets/mobile-1x/general/bg/star.png", "image");
			resourceNames.set ("assets/mobile-1x/general/characters/walking-sparrow.xml", "assets/mobile-1x/general/characters/walking-sparrow.xml");
			resourceTypes.set ("assets/mobile-1x/general/characters/walking-sparrow.xml", "text");
			resourceNames.set ("assets/mobile-1x/general/characters/walking.png", "assets/mobile-1x/general/characters/walking.png");
			resourceTypes.set ("assets/mobile-1x/general/characters/walking.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass1.png", "assets/mobile-1x/general/fg/grass1.png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass1.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass2.png", "assets/mobile-1x/general/fg/grass2.png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass2.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass3.png", "assets/mobile-1x/general/fg/grass3.png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass3.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass4.png", "assets/mobile-1x/general/fg/grass4.png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass4.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass5.png", "assets/mobile-1x/general/fg/grass5.png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass5.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass6.png", "assets/mobile-1x/general/fg/grass6.png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass6.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass7.png", "assets/mobile-1x/general/fg/grass7.png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass7.png", "image");
			resourceNames.set ("assets/mobile-1x/general/gui/button.png", "assets/mobile-1x/general/gui/button.png");
			resourceTypes.set ("assets/mobile-1x/general/gui/button.png", "image");
			resourceNames.set ("assets/mobile-1x/general/gui/button2.png", "assets/mobile-1x/general/gui/button2.png");
			resourceTypes.set ("assets/mobile-1x/general/gui/button2.png", "image");
			resourceNames.set ("assets/mobile-1x/test1.png", "assets/mobile-1x/test1.png");
			resourceTypes.set ("assets/mobile-1x/test1.png", "image");
			resourceNames.set ("assets/mobile-1x/test2.png", "assets/mobile-1x/test2.png");
			resourceTypes.set ("assets/mobile-1x/test2.png", "image");
			resourceNames.set ("assets/mobile-1x/test3bg.png", "assets/mobile-1x/test3bg.png");
			resourceTypes.set ("assets/mobile-1x/test3bg.png", "image");
			resourceNames.set ("assets/mobile-1x/walking-sparrow.xml", "assets/mobile-1x/walking-sparrow.xml");
			resourceTypes.set ("assets/mobile-1x/walking-sparrow.xml", "text");
			resourceNames.set ("assets/mobile-1x/walking.png", "assets/mobile-1x/walking.png");
			resourceTypes.set ("assets/mobile-1x/walking.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill1.png", "assets/mobile-1x/world1/general/bg/hill1.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill1.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill2.png", "assets/mobile-1x/world1/general/bg/hill2.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill2.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill3.png", "assets/mobile-1x/world1/general/bg/hill3.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill3.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill4.png", "assets/mobile-1x/world1/general/bg/hill4.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill4.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill5.png", "assets/mobile-1x/world1/general/bg/hill5.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill5.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill6.png", "assets/mobile-1x/world1/general/bg/hill6.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill6.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill7.png", "assets/mobile-1x/world1/general/bg/hill7.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill7.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree1.png", "assets/mobile-1x/world1/general/bg/tree1.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree1.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree10.png", "assets/mobile-1x/world1/general/bg/tree10.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree10.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree11.png", "assets/mobile-1x/world1/general/bg/tree11.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree11.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree12.png", "assets/mobile-1x/world1/general/bg/tree12.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree12.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree13.png", "assets/mobile-1x/world1/general/bg/tree13.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree13.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree14.png", "assets/mobile-1x/world1/general/bg/tree14.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree14.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree15.png", "assets/mobile-1x/world1/general/bg/tree15.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree15.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree16.png", "assets/mobile-1x/world1/general/bg/tree16.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree16.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree17.png", "assets/mobile-1x/world1/general/bg/tree17.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree17.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree18.png", "assets/mobile-1x/world1/general/bg/tree18.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree18.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree19.png", "assets/mobile-1x/world1/general/bg/tree19.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree19.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree2.png", "assets/mobile-1x/world1/general/bg/tree2.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree2.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree20.png", "assets/mobile-1x/world1/general/bg/tree20.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree20.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree21.png", "assets/mobile-1x/world1/general/bg/tree21.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree21.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree22.png", "assets/mobile-1x/world1/general/bg/tree22.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree22.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree23.png", "assets/mobile-1x/world1/general/bg/tree23.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree23.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree24.png", "assets/mobile-1x/world1/general/bg/tree24.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree24.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree25.png", "assets/mobile-1x/world1/general/bg/tree25.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree25.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree3.png", "assets/mobile-1x/world1/general/bg/tree3.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree3.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree4.png", "assets/mobile-1x/world1/general/bg/tree4.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree4.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree5.png", "assets/mobile-1x/world1/general/bg/tree5.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree5.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree6.png", "assets/mobile-1x/world1/general/bg/tree6.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree6.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree7.png", "assets/mobile-1x/world1/general/bg/tree7.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree7.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree8.png", "assets/mobile-1x/world1/general/bg/tree8.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree8.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree9.png", "assets/mobile-1x/world1/general/bg/tree9.png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree9.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/fg/empty.md", "assets/mobile-1x/world1/general/fg/empty.md");
			resourceTypes.set ("assets/mobile-1x/world1/general/fg/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/bg/background.png", "assets/mobile-1x/world1/lvl1/bg/background.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/background.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/bg/background02.png", "assets/mobile-1x/world1/lvl1/bg/background02.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/background02.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/bg/sun.png", "assets/mobile-1x/world1/lvl1/bg/sun.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/sun.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png", "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png", "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png", "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png", "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png", "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png", "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png", "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png", "assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png", "assets/mobile-1x/world1/lvl1/fg/l2/tree1.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png", "assets/mobile-1x/world1/lvl1/fg/l2/tree2.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png", "assets/mobile-1x/world1/lvl1/fg/l2/tree3.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png", "assets/mobile-1x/world1/lvl1/fg/l2/tree4.png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png", "image");
			resourceNames.set ("assets/source/general/bg/fog_large.png", "assets/source/general/bg/fog_large.png");
			resourceTypes.set ("assets/source/general/bg/fog_large.png", "image");
			resourceNames.set ("assets/source/general/bg/fog_large.psd", "assets/source/general/bg/fog_large.psd");
			resourceTypes.set ("assets/source/general/bg/fog_large.psd", "binary");
			resourceNames.set ("assets/source/general/bg/fog_medium.png", "assets/source/general/bg/fog_medium.png");
			resourceTypes.set ("assets/source/general/bg/fog_medium.png", "image");
			resourceNames.set ("assets/source/general/bg/fog_medium.psd", "assets/source/general/bg/fog_medium.psd");
			resourceTypes.set ("assets/source/general/bg/fog_medium.psd", "binary");
			resourceNames.set ("assets/source/general/bg/fog_small.png", "assets/source/general/bg/fog_small.png");
			resourceTypes.set ("assets/source/general/bg/fog_small.png", "image");
			resourceNames.set ("assets/source/general/bg/fog_small.psd", "assets/source/general/bg/fog_small.psd");
			resourceTypes.set ("assets/source/general/bg/fog_small.psd", "binary");
			resourceNames.set ("assets/source/general/bg/star.png", "assets/source/general/bg/star.png");
			resourceTypes.set ("assets/source/general/bg/star.png", "image");
			resourceNames.set ("assets/source/general/bg/star.psd", "assets/source/general/bg/star.psd");
			resourceTypes.set ("assets/source/general/bg/star.psd", "binary");
			resourceNames.set ("assets/source/general/characters/walking-sparrow.xml", "assets/source/general/characters/walking-sparrow.xml");
			resourceTypes.set ("assets/source/general/characters/walking-sparrow.xml", "text");
			resourceNames.set ("assets/source/general/characters/walking.png", "assets/source/general/characters/walking.png");
			resourceTypes.set ("assets/source/general/characters/walking.png", "image");
			resourceNames.set ("assets/source/general/fg/grass1.png", "assets/source/general/fg/grass1.png");
			resourceTypes.set ("assets/source/general/fg/grass1.png", "image");
			resourceNames.set ("assets/source/general/fg/grass1.psd", "assets/source/general/fg/grass1.psd");
			resourceTypes.set ("assets/source/general/fg/grass1.psd", "binary");
			resourceNames.set ("assets/source/general/fg/grass2.png", "assets/source/general/fg/grass2.png");
			resourceTypes.set ("assets/source/general/fg/grass2.png", "image");
			resourceNames.set ("assets/source/general/fg/grass2.psd", "assets/source/general/fg/grass2.psd");
			resourceTypes.set ("assets/source/general/fg/grass2.psd", "binary");
			resourceNames.set ("assets/source/general/fg/grass3.png", "assets/source/general/fg/grass3.png");
			resourceTypes.set ("assets/source/general/fg/grass3.png", "image");
			resourceNames.set ("assets/source/general/fg/grass3.psd", "assets/source/general/fg/grass3.psd");
			resourceTypes.set ("assets/source/general/fg/grass3.psd", "binary");
			resourceNames.set ("assets/source/general/fg/grass4.png", "assets/source/general/fg/grass4.png");
			resourceTypes.set ("assets/source/general/fg/grass4.png", "image");
			resourceNames.set ("assets/source/general/fg/grass4.psd", "assets/source/general/fg/grass4.psd");
			resourceTypes.set ("assets/source/general/fg/grass4.psd", "binary");
			resourceNames.set ("assets/source/general/fg/grass5.png", "assets/source/general/fg/grass5.png");
			resourceTypes.set ("assets/source/general/fg/grass5.png", "image");
			resourceNames.set ("assets/source/general/fg/grass5.psd", "assets/source/general/fg/grass5.psd");
			resourceTypes.set ("assets/source/general/fg/grass5.psd", "binary");
			resourceNames.set ("assets/source/general/fg/grass6.png", "assets/source/general/fg/grass6.png");
			resourceTypes.set ("assets/source/general/fg/grass6.png", "image");
			resourceNames.set ("assets/source/general/fg/grass6.psd", "assets/source/general/fg/grass6.psd");
			resourceTypes.set ("assets/source/general/fg/grass6.psd", "binary");
			resourceNames.set ("assets/source/general/fg/grass7.png", "assets/source/general/fg/grass7.png");
			resourceTypes.set ("assets/source/general/fg/grass7.png", "image");
			resourceNames.set ("assets/source/general/fg/grass7.psd", "assets/source/general/fg/grass7.psd");
			resourceTypes.set ("assets/source/general/fg/grass7.psd", "binary");
			resourceNames.set ("assets/source/general/gui/button.png", "assets/source/general/gui/button.png");
			resourceTypes.set ("assets/source/general/gui/button.png", "image");
			resourceNames.set ("assets/source/general/gui/button2.png", "assets/source/general/gui/button2.png");
			resourceTypes.set ("assets/source/general/gui/button2.png", "image");
			resourceNames.set ("assets/source/level_1-forrest-jesse.ai", "assets/source/level_1-forrest-jesse.ai");
			resourceTypes.set ("assets/source/level_1-forrest-jesse.ai", "text");
			resourceNames.set ("assets/source/level_1-forrest-jesse.pdf", "assets/source/level_1-forrest-jesse.pdf");
			resourceTypes.set ("assets/source/level_1-forrest-jesse.pdf", "text");
			resourceNames.set ("assets/source/test1.png", "assets/source/test1.png");
			resourceTypes.set ("assets/source/test1.png", "image");
			resourceNames.set ("assets/source/test2.png", "assets/source/test2.png");
			resourceTypes.set ("assets/source/test2.png", "image");
			resourceNames.set ("assets/source/test3bg.png", "assets/source/test3bg.png");
			resourceTypes.set ("assets/source/test3bg.png", "image");
			resourceNames.set ("assets/source/walking-sparrow.xml", "assets/source/walking-sparrow.xml");
			resourceTypes.set ("assets/source/walking-sparrow.xml", "text");
			resourceNames.set ("assets/source/walking.png", "assets/source/walking.png");
			resourceTypes.set ("assets/source/walking.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill1.png", "assets/source/world1/general/bg/hill1.png");
			resourceTypes.set ("assets/source/world1/general/bg/hill1.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill1.psd", "assets/source/world1/general/bg/hill1.psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill1.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/hill2.png", "assets/source/world1/general/bg/hill2.png");
			resourceTypes.set ("assets/source/world1/general/bg/hill2.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill2.psd", "assets/source/world1/general/bg/hill2.psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill2.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/hill3.png", "assets/source/world1/general/bg/hill3.png");
			resourceTypes.set ("assets/source/world1/general/bg/hill3.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill3.psd", "assets/source/world1/general/bg/hill3.psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill3.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/hill4.png", "assets/source/world1/general/bg/hill4.png");
			resourceTypes.set ("assets/source/world1/general/bg/hill4.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill4.psd", "assets/source/world1/general/bg/hill4.psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill4.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/hill5.png", "assets/source/world1/general/bg/hill5.png");
			resourceTypes.set ("assets/source/world1/general/bg/hill5.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill5.psd", "assets/source/world1/general/bg/hill5.psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill5.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/hill6.png", "assets/source/world1/general/bg/hill6.png");
			resourceTypes.set ("assets/source/world1/general/bg/hill6.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill6.psd", "assets/source/world1/general/bg/hill6.psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill6.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/hill7.png", "assets/source/world1/general/bg/hill7.png");
			resourceTypes.set ("assets/source/world1/general/bg/hill7.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill7.psd", "assets/source/world1/general/bg/hill7.psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill7.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree1.png", "assets/source/world1/general/bg/tree1.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree1.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree1.psd", "assets/source/world1/general/bg/tree1.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree1.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree10.png", "assets/source/world1/general/bg/tree10.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree10.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree10.psd", "assets/source/world1/general/bg/tree10.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree10.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree11.png", "assets/source/world1/general/bg/tree11.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree11.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree11.psd", "assets/source/world1/general/bg/tree11.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree11.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree12.png", "assets/source/world1/general/bg/tree12.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree12.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree12.psd", "assets/source/world1/general/bg/tree12.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree12.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree13.png", "assets/source/world1/general/bg/tree13.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree13.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree13.psd", "assets/source/world1/general/bg/tree13.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree13.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree14.png", "assets/source/world1/general/bg/tree14.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree14.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree14.psd", "assets/source/world1/general/bg/tree14.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree14.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree15.png", "assets/source/world1/general/bg/tree15.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree15.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree15.psd", "assets/source/world1/general/bg/tree15.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree15.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree16.png", "assets/source/world1/general/bg/tree16.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree16.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree16.psd", "assets/source/world1/general/bg/tree16.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree16.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree17.png", "assets/source/world1/general/bg/tree17.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree17.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree17.psd", "assets/source/world1/general/bg/tree17.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree17.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree18.png", "assets/source/world1/general/bg/tree18.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree18.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree18.psd", "assets/source/world1/general/bg/tree18.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree18.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree19.png", "assets/source/world1/general/bg/tree19.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree19.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree19.psd", "assets/source/world1/general/bg/tree19.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree19.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree2.png", "assets/source/world1/general/bg/tree2.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree2.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree2.psd", "assets/source/world1/general/bg/tree2.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree2.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree20.png", "assets/source/world1/general/bg/tree20.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree20.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree20.psd", "assets/source/world1/general/bg/tree20.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree20.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree21.png", "assets/source/world1/general/bg/tree21.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree21.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree21.psd", "assets/source/world1/general/bg/tree21.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree21.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree22.png", "assets/source/world1/general/bg/tree22.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree22.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree22.psd", "assets/source/world1/general/bg/tree22.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree22.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree23.png", "assets/source/world1/general/bg/tree23.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree23.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree23.psd", "assets/source/world1/general/bg/tree23.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree23.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree24.png", "assets/source/world1/general/bg/tree24.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree24.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree24.psd", "assets/source/world1/general/bg/tree24.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree24.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree25.png", "assets/source/world1/general/bg/tree25.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree25.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree25.psd", "assets/source/world1/general/bg/tree25.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree25.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree3.png", "assets/source/world1/general/bg/tree3.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree3.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree3.psd", "assets/source/world1/general/bg/tree3.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree3.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree4.png", "assets/source/world1/general/bg/tree4.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree4.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree4.psd", "assets/source/world1/general/bg/tree4.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree4.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree5.png", "assets/source/world1/general/bg/tree5.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree5.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree5.psd", "assets/source/world1/general/bg/tree5.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree5.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree6.png", "assets/source/world1/general/bg/tree6.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree6.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree6.psd", "assets/source/world1/general/bg/tree6.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree6.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree7.png", "assets/source/world1/general/bg/tree7.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree7.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree7.psd", "assets/source/world1/general/bg/tree7.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree7.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree8.png", "assets/source/world1/general/bg/tree8.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree8.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree8.psd", "assets/source/world1/general/bg/tree8.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree8.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree9.png", "assets/source/world1/general/bg/tree9.png");
			resourceTypes.set ("assets/source/world1/general/bg/tree9.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree9.psd", "assets/source/world1/general/bg/tree9.psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree9.psd", "binary");
			resourceNames.set ("assets/source/world1/general/fg/empty.md", "assets/source/world1/general/fg/empty.md");
			resourceTypes.set ("assets/source/world1/general/fg/empty.md", "text");
			resourceNames.set ("assets/source/world1/lvl1/bg/background.png", "assets/source/world1/lvl1/bg/background.png");
			resourceTypes.set ("assets/source/world1/lvl1/bg/background.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/bg/background.psd", "assets/source/world1/lvl1/bg/background.psd");
			resourceTypes.set ("assets/source/world1/lvl1/bg/background.psd", "binary");
			resourceNames.set ("assets/source/world1/lvl1/bg/background02.png", "assets/source/world1/lvl1/bg/background02.png");
			resourceTypes.set ("assets/source/world1/lvl1/bg/background02.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/bg/sun.png", "assets/source/world1/lvl1/bg/sun.png");
			resourceTypes.set ("assets/source/world1/lvl1/bg/sun.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/bg/sun.psd", "assets/source/world1/lvl1/bg/sun.psd");
			resourceTypes.set ("assets/source/world1/lvl1/bg/sun.psd", "binary");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/FG1.psd", "assets/source/world1/lvl1/fg/l1/FG1.psd");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/FG1.psd", "binary");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png", "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png", "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png", "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png", "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png", "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png", "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png", "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png", "assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree1.png", "assets/source/world1/lvl1/fg/l2/tree1.png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree1.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree1.psd", "assets/source/world1/lvl1/fg/l2/tree1.psd");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree1.psd", "binary");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree2.png", "assets/source/world1/lvl1/fg/l2/tree2.png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree2.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree2.psd", "assets/source/world1/lvl1/fg/l2/tree2.psd");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree2.psd", "binary");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree3.png", "assets/source/world1/lvl1/fg/l2/tree3.png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree3.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree3.psd", "assets/source/world1/lvl1/fg/l2/tree3.psd");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree3.psd", "binary");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree4.png", "assets/source/world1/lvl1/fg/l2/tree4.png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree4.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree4.psd", "assets/source/world1/lvl1/fg/l2/tree4.psd");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree4.psd", "binary");
			resourceNames.set ("assets/xml/bg.xml", "assets/xml/bg.xml");
			resourceTypes.set ("assets/xml/bg.xml", "text");
			resourceNames.set ("assets/xml/bg2.xml", "assets/xml/bg2.xml");
			resourceTypes.set ("assets/xml/bg2.xml", "text");
			resourceNames.set ("assets/xml/general/bg/empty.md", "assets/xml/general/bg/empty.md");
			resourceTypes.set ("assets/xml/general/bg/empty.md", "text");
			resourceNames.set ("assets/xml/general/characters/empty.md", "assets/xml/general/characters/empty.md");
			resourceTypes.set ("assets/xml/general/characters/empty.md", "text");
			resourceNames.set ("assets/xml/general/fg/empty.md", "assets/xml/general/fg/empty.md");
			resourceTypes.set ("assets/xml/general/fg/empty.md", "text");
			resourceNames.set ("assets/xml/settings.xml", "assets/xml/settings.xml");
			resourceTypes.set ("assets/xml/settings.xml", "text");
			resourceNames.set ("assets/xml/test.xml", "assets/xml/test.xml");
			resourceTypes.set ("assets/xml/test.xml", "text");
			resourceNames.set ("assets/xml/test2.xml", "assets/xml/test2.xml");
			resourceTypes.set ("assets/xml/test2.xml", "text");
			resourceNames.set ("assets/xml/walking.xml", "assets/xml/walking.xml");
			resourceTypes.set ("assets/xml/walking.xml", "text");
			resourceNames.set ("assets/xml/world1/general/empty.md", "assets/xml/world1/general/empty.md");
			resourceTypes.set ("assets/xml/world1/general/empty.md", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml", "assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml", "assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml", "assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml", "assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml", "assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml", "assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml", "assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml", "assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml", "assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml", "assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml", "assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml", "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml", "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml", "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml", "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml", "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml", "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml", "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml", "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml", "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml", "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml", "assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml", "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml", "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml", "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml", "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml", "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml", "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml", "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml", "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml", "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml", "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml", "assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml", "assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml", "assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml", "assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml", "assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml", "assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml", "assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_background.xml", "assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_background.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_background.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml", "assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg.xml", "assets/xml/world1/lvl1/bg.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml", "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml", "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml", "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml", "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml", "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml", "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml", "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml", "assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml", "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml", "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml", "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml", "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml", "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml", "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml", "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml", "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml", "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml", "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml", "assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl2/bg.xml", "assets/xml/world1/lvl2/bg.xml");
			resourceTypes.set ("assets/xml/world1/lvl2/bg.xml", "text");
			
			
			initialized = true;
			
		}
		
	}
	
	
	public static function getBitmapData (id:String, useCache:Bool = true):BitmapData {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id).toLowerCase () == "image") {
			
			if (useCache && cachedBitmapData.exists (id)) {
				
				return cachedBitmapData.get (id);
				
			} else {
				
				var data = BitmapData.load (resourceNames.get (id));
				
				if (useCache) {
					
					cachedBitmapData.set (id, data);
					
				}
				
				return data;
				
			}
			
		}  else if (id.indexOf (":") > -1) {
			
			var libraryName = id.substr (0, id.indexOf (":"));
			var symbolName = id.substr (id.indexOf (":") + 1);
			
			if (libraryTypes.exists (libraryName)) {
				
				#if swf
				
				if (libraryTypes.get (libraryName) == "swf") {
					
					if (!cachedSWFLibraries.exists (libraryName)) {
						
						cachedSWFLibraries.set (libraryName, new SWF (getBytes ("libraries/" + libraryName + ".swf")));
						
					}
					
					return cachedSWFLibraries.get (libraryName).getBitmapData (symbolName);
					
				}
				
				#end
				
				#if xfl
				
				if (libraryTypes.get (libraryName) == "xfl") {
					
					if (!cachedXFLLibraries.exists (libraryName)) {
						
						cachedXFLLibraries.set (libraryName, Unserializer.run (getText ("libraries/" + libraryName + "/" + libraryName + ".dat")));
						
					}
					
					return cachedXFLLibraries.get (libraryName).getBitmapData (symbolName);
					
				}
				
				#end
				
			} else {
				
				trace ("[nme.Assets] There is no asset library named \"" + libraryName + "\"");
				
			}
			
		} else {
			
			trace ("[nme.Assets] There is no BitmapData asset with an ID of \"" + id + "\"");
			
		}
		
		return null;
		
	}
	
	
	public static function getBytes (id:String):ByteArray {
		
		initialize ();
		
		if (resourceNames.exists (id)) {
			
			return ByteArray.readFile (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no String or ByteArray asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id).toLowerCase () == "font") {
			
			return new Font (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getMovieClip (id:String):MovieClip {
		
		initialize ();
		
		var libraryName = id.substr (0, id.indexOf (":"));
		var symbolName = id.substr (id.indexOf (":") + 1);
		
		if (libraryTypes.exists (libraryName)) {
			
			#if swf
			
			if (libraryTypes.get (libraryName) == "swf") {
				
				if (!cachedSWFLibraries.exists (libraryName)) {
					
					cachedSWFLibraries.set (libraryName, new SWF (getBytes ("libraries/" + libraryName + ".swf")));
					
				}
				
				return cachedSWFLibraries.get (libraryName).createMovieClip (symbolName);
				
			}
			
			#end
			
			#if xfl
			
			if (libraryTypes.get (libraryName) == "xfl") {
				
				if (!cachedXFLLibraries.exists (libraryName)) {
					
					cachedXFLLibraries.set (libraryName, Unserializer.run (getText ("libraries/" + libraryName + "/" + libraryName + ".dat")));
					
				}
				
				return cachedXFLLibraries.get (libraryName).createMovieClip (symbolName);
				
			}
			
			#end
			
		} else {
			
			trace ("[nme.Assets] There is no asset library named \"" + libraryName + "\"");
			
		}
		
		return null;
		
	}
	
	
	public static function getResourceName (id:String):String {
		
		initialize ();
		
		return resourceNames.get (id);
		
	}
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id).toLowerCase () == "sound") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, false);
				
			} else if (resourceTypes.get (id).toLowerCase () == "music") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, true);
				
			}
			
		}
		
		trace ("[nme.Assets] There is no Sound asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getText (id:String):String {
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
	}
	
	
	//public static function loadBitmapData(id:String, handler:BitmapData -> Void, useCache:Bool = true):BitmapData
	//{
		//return null;
	//}
	//
	//
	//public static function loadBytes(id:String, handler:ByteArray -> Void):ByteArray
	//{	
		//return null;
	//}
	//
	//
	//public static function loadText(id:String, handler:String -> Void):String
	//{
		//return null;
	//}
	
	
}
