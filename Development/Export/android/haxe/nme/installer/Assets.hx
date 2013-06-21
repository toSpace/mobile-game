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
			
			resourceNames.set ("assets/mobile-1x/general/bg/fog_large.png", "assets_mobile_1x_general_bg_fog_large_png");
			resourceTypes.set ("assets/mobile-1x/general/bg/fog_large.png", "image");
			resourceNames.set ("assets/mobile-1x/general/bg/fog_medium.png", "assets_mobile_1x_general_bg_fog_medium_png");
			resourceTypes.set ("assets/mobile-1x/general/bg/fog_medium.png", "image");
			resourceNames.set ("assets/mobile-1x/general/bg/fog_small.png", "assets_mobile_1x_general_bg_fog_small_png");
			resourceTypes.set ("assets/mobile-1x/general/bg/fog_small.png", "image");
			resourceNames.set ("assets/mobile-1x/general/bg/star.png", "assets_mobile_1x_general_bg_star_png");
			resourceTypes.set ("assets/mobile-1x/general/bg/star.png", "image");
			resourceNames.set ("assets/mobile-1x/general/characters/walking-sparrow.xml", "assets_mobile_1x_general_characters_walking_sparrow_xml");
			resourceTypes.set ("assets/mobile-1x/general/characters/walking-sparrow.xml", "text");
			resourceNames.set ("assets/mobile-1x/general/characters/walking.png", "assets_mobile_1x_general_characters_walking_png");
			resourceTypes.set ("assets/mobile-1x/general/characters/walking.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass1.png", "assets_mobile_1x_general_fg_grass1_png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass1.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass2.png", "assets_mobile_1x_general_fg_grass2_png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass2.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass3.png", "assets_mobile_1x_general_fg_grass3_png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass3.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass4.png", "assets_mobile_1x_general_fg_grass4_png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass4.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass5.png", "assets_mobile_1x_general_fg_grass5_png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass5.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass6.png", "assets_mobile_1x_general_fg_grass6_png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass6.png", "image");
			resourceNames.set ("assets/mobile-1x/general/fg/grass7.png", "assets_mobile_1x_general_fg_grass7_png");
			resourceTypes.set ("assets/mobile-1x/general/fg/grass7.png", "image");
			resourceNames.set ("assets/mobile-1x/general/gui/button.png", "assets_mobile_1x_general_gui_button_png");
			resourceTypes.set ("assets/mobile-1x/general/gui/button.png", "image");
			resourceNames.set ("assets/mobile-1x/general/gui/button2.png", "assets_mobile_1x_general_gui_button2_png");
			resourceTypes.set ("assets/mobile-1x/general/gui/button2.png", "image");
			resourceNames.set ("assets/mobile-1x/test1.png", "assets_mobile_1x_test1_png");
			resourceTypes.set ("assets/mobile-1x/test1.png", "image");
			resourceNames.set ("assets/mobile-1x/test2.png", "assets_mobile_1x_test2_png");
			resourceTypes.set ("assets/mobile-1x/test2.png", "image");
			resourceNames.set ("assets/mobile-1x/test3bg.png", "assets_mobile_1x_test3bg_png");
			resourceTypes.set ("assets/mobile-1x/test3bg.png", "image");
			resourceNames.set ("assets/mobile-1x/walking-sparrow.xml", "assets_mobile_1x_walking_sparrow_xml");
			resourceTypes.set ("assets/mobile-1x/walking-sparrow.xml", "text");
			resourceNames.set ("assets/mobile-1x/walking.png", "assets_mobile_1x_walking_png");
			resourceTypes.set ("assets/mobile-1x/walking.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill1.png", "assets_mobile_1x_world1_general_bg_hill1_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill1.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill2.png", "assets_mobile_1x_world1_general_bg_hill2_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill2.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill3.png", "assets_mobile_1x_world1_general_bg_hill3_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill3.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill4.png", "assets_mobile_1x_world1_general_bg_hill4_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill4.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill5.png", "assets_mobile_1x_world1_general_bg_hill5_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill5.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill6.png", "assets_mobile_1x_world1_general_bg_hill6_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill6.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/hill7.png", "assets_mobile_1x_world1_general_bg_hill7_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/hill7.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree1.png", "assets_mobile_1x_world1_general_bg_tree1_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree1.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree10.png", "assets_mobile_1x_world1_general_bg_tree10_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree10.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree11.png", "assets_mobile_1x_world1_general_bg_tree11_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree11.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree12.png", "assets_mobile_1x_world1_general_bg_tree12_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree12.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree13.png", "assets_mobile_1x_world1_general_bg_tree13_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree13.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree14.png", "assets_mobile_1x_world1_general_bg_tree14_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree14.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree15.png", "assets_mobile_1x_world1_general_bg_tree15_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree15.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree16.png", "assets_mobile_1x_world1_general_bg_tree16_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree16.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree17.png", "assets_mobile_1x_world1_general_bg_tree17_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree17.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree18.png", "assets_mobile_1x_world1_general_bg_tree18_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree18.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree19.png", "assets_mobile_1x_world1_general_bg_tree19_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree19.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree2.png", "assets_mobile_1x_world1_general_bg_tree2_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree2.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree20.png", "assets_mobile_1x_world1_general_bg_tree20_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree20.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree21.png", "assets_mobile_1x_world1_general_bg_tree21_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree21.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree22.png", "assets_mobile_1x_world1_general_bg_tree22_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree22.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree23.png", "assets_mobile_1x_world1_general_bg_tree23_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree23.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree24.png", "assets_mobile_1x_world1_general_bg_tree24_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree24.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree25.png", "assets_mobile_1x_world1_general_bg_tree25_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree25.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree3.png", "assets_mobile_1x_world1_general_bg_tree3_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree3.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree4.png", "assets_mobile_1x_world1_general_bg_tree4_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree4.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree5.png", "assets_mobile_1x_world1_general_bg_tree5_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree5.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree6.png", "assets_mobile_1x_world1_general_bg_tree6_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree6.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree7.png", "assets_mobile_1x_world1_general_bg_tree7_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree7.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree8.png", "assets_mobile_1x_world1_general_bg_tree8_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree8.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/bg/tree9.png", "assets_mobile_1x_world1_general_bg_tree9_png");
			resourceTypes.set ("assets/mobile-1x/world1/general/bg/tree9.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/general/fg/empty.md", "assets_mobile_1x_world1_general_fg_empty_md");
			resourceTypes.set ("assets/mobile-1x/world1/general/fg/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/bg/background.png", "assets_mobile_1x_world1_lvl1_bg_background_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/background.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/bg/background02.png", "assets_mobile_1x_world1_lvl1_bg_background02_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/background02.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/bg/sun.png", "assets_mobile_1x_world1_lvl1_bg_sun_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/sun.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png", "assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_1_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png", "assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_2_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png", "assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_3_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png", "assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_4_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png", "assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_5_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png", "assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_6_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png", "assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_7_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png", "assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_8_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png", "assets_mobile_1x_world1_lvl1_fg_l2_tree1_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png", "assets_mobile_1x_world1_lvl1_fg_l2_tree2_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png", "assets_mobile_1x_world1_lvl1_fg_l2_tree3_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png", "image");
			resourceNames.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png", "assets_mobile_1x_world1_lvl1_fg_l2_tree4_png");
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png", "image");
			resourceNames.set ("assets/source/general/bg/fog_large.png", "assets_source_general_bg_fog_large_png");
			resourceTypes.set ("assets/source/general/bg/fog_large.png", "image");
			resourceNames.set ("assets/source/general/bg/fog_large.psd", "assets_source_general_bg_fog_large_psd");
			resourceTypes.set ("assets/source/general/bg/fog_large.psd", "binary");
			resourceNames.set ("assets/source/general/bg/fog_medium.png", "assets_source_general_bg_fog_medium_png");
			resourceTypes.set ("assets/source/general/bg/fog_medium.png", "image");
			resourceNames.set ("assets/source/general/bg/fog_medium.psd", "assets_source_general_bg_fog_medium_psd");
			resourceTypes.set ("assets/source/general/bg/fog_medium.psd", "binary");
			resourceNames.set ("assets/source/general/bg/fog_small.png", "assets_source_general_bg_fog_small_png");
			resourceTypes.set ("assets/source/general/bg/fog_small.png", "image");
			resourceNames.set ("assets/source/general/bg/fog_small.psd", "assets_source_general_bg_fog_small_psd");
			resourceTypes.set ("assets/source/general/bg/fog_small.psd", "binary");
			resourceNames.set ("assets/source/general/bg/star.png", "assets_source_general_bg_star_png");
			resourceTypes.set ("assets/source/general/bg/star.png", "image");
			resourceNames.set ("assets/source/general/bg/star.psd", "assets_source_general_bg_star_psd");
			resourceTypes.set ("assets/source/general/bg/star.psd", "binary");
			resourceNames.set ("assets/source/general/characters/walking-sparrow.xml", "assets_source_general_characters_walking_sparrow_xml");
			resourceTypes.set ("assets/source/general/characters/walking-sparrow.xml", "text");
			resourceNames.set ("assets/source/general/characters/walking.png", "assets_source_general_characters_walking_png");
			resourceTypes.set ("assets/source/general/characters/walking.png", "image");
			resourceNames.set ("assets/source/general/fg/grass1.png", "assets_source_general_fg_grass1_png");
			resourceTypes.set ("assets/source/general/fg/grass1.png", "image");
			resourceNames.set ("assets/source/general/fg/grass1.psd", "assets_source_general_fg_grass1_psd");
			resourceTypes.set ("assets/source/general/fg/grass1.psd", "binary");
			resourceNames.set ("assets/source/general/fg/grass2.png", "assets_source_general_fg_grass2_png");
			resourceTypes.set ("assets/source/general/fg/grass2.png", "image");
			resourceNames.set ("assets/source/general/fg/grass2.psd", "assets_source_general_fg_grass2_psd");
			resourceTypes.set ("assets/source/general/fg/grass2.psd", "binary");
			resourceNames.set ("assets/source/general/fg/grass3.png", "assets_source_general_fg_grass3_png");
			resourceTypes.set ("assets/source/general/fg/grass3.png", "image");
			resourceNames.set ("assets/source/general/fg/grass3.psd", "assets_source_general_fg_grass3_psd");
			resourceTypes.set ("assets/source/general/fg/grass3.psd", "binary");
			resourceNames.set ("assets/source/general/fg/grass4.png", "assets_source_general_fg_grass4_png");
			resourceTypes.set ("assets/source/general/fg/grass4.png", "image");
			resourceNames.set ("assets/source/general/fg/grass4.psd", "assets_source_general_fg_grass4_psd");
			resourceTypes.set ("assets/source/general/fg/grass4.psd", "binary");
			resourceNames.set ("assets/source/general/fg/grass5.png", "assets_source_general_fg_grass5_png");
			resourceTypes.set ("assets/source/general/fg/grass5.png", "image");
			resourceNames.set ("assets/source/general/fg/grass5.psd", "assets_source_general_fg_grass5_psd");
			resourceTypes.set ("assets/source/general/fg/grass5.psd", "binary");
			resourceNames.set ("assets/source/general/fg/grass6.png", "assets_source_general_fg_grass6_png");
			resourceTypes.set ("assets/source/general/fg/grass6.png", "image");
			resourceNames.set ("assets/source/general/fg/grass6.psd", "assets_source_general_fg_grass6_psd");
			resourceTypes.set ("assets/source/general/fg/grass6.psd", "binary");
			resourceNames.set ("assets/source/general/fg/grass7.png", "assets_source_general_fg_grass7_png");
			resourceTypes.set ("assets/source/general/fg/grass7.png", "image");
			resourceNames.set ("assets/source/general/fg/grass7.psd", "assets_source_general_fg_grass7_psd");
			resourceTypes.set ("assets/source/general/fg/grass7.psd", "binary");
			resourceNames.set ("assets/source/general/gui/button.png", "assets_source_general_gui_button_png");
			resourceTypes.set ("assets/source/general/gui/button.png", "image");
			resourceNames.set ("assets/source/general/gui/button2.png", "assets_source_general_gui_button2_png");
			resourceTypes.set ("assets/source/general/gui/button2.png", "image");
			resourceNames.set ("assets/source/level_1-forrest-jesse.ai", "assets_source_level_1_forrest_jesse_ai");
			resourceTypes.set ("assets/source/level_1-forrest-jesse.ai", "text");
			resourceNames.set ("assets/source/level_1-forrest-jesse.pdf", "assets_source_level_1_forrest_jesse_pdf");
			resourceTypes.set ("assets/source/level_1-forrest-jesse.pdf", "text");
			resourceNames.set ("assets/source/test1.png", "assets_source_test1_png");
			resourceTypes.set ("assets/source/test1.png", "image");
			resourceNames.set ("assets/source/test2.png", "assets_source_test2_png");
			resourceTypes.set ("assets/source/test2.png", "image");
			resourceNames.set ("assets/source/test3bg.png", "assets_source_test3bg_png");
			resourceTypes.set ("assets/source/test3bg.png", "image");
			resourceNames.set ("assets/source/walking-sparrow.xml", "assets_source_walking_sparrow_xml");
			resourceTypes.set ("assets/source/walking-sparrow.xml", "text");
			resourceNames.set ("assets/source/walking.png", "assets_source_walking_png");
			resourceTypes.set ("assets/source/walking.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill1.png", "assets_source_world1_general_bg_hill1_png");
			resourceTypes.set ("assets/source/world1/general/bg/hill1.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill1.psd", "assets_source_world1_general_bg_hill1_psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill1.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/hill2.png", "assets_source_world1_general_bg_hill2_png");
			resourceTypes.set ("assets/source/world1/general/bg/hill2.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill2.psd", "assets_source_world1_general_bg_hill2_psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill2.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/hill3.png", "assets_source_world1_general_bg_hill3_png");
			resourceTypes.set ("assets/source/world1/general/bg/hill3.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill3.psd", "assets_source_world1_general_bg_hill3_psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill3.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/hill4.png", "assets_source_world1_general_bg_hill4_png");
			resourceTypes.set ("assets/source/world1/general/bg/hill4.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill4.psd", "assets_source_world1_general_bg_hill4_psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill4.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/hill5.png", "assets_source_world1_general_bg_hill5_png");
			resourceTypes.set ("assets/source/world1/general/bg/hill5.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill5.psd", "assets_source_world1_general_bg_hill5_psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill5.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/hill6.png", "assets_source_world1_general_bg_hill6_png");
			resourceTypes.set ("assets/source/world1/general/bg/hill6.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill6.psd", "assets_source_world1_general_bg_hill6_psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill6.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/hill7.png", "assets_source_world1_general_bg_hill7_png");
			resourceTypes.set ("assets/source/world1/general/bg/hill7.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/hill7.psd", "assets_source_world1_general_bg_hill7_psd");
			resourceTypes.set ("assets/source/world1/general/bg/hill7.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree1.png", "assets_source_world1_general_bg_tree1_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree1.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree1.psd", "assets_source_world1_general_bg_tree1_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree1.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree10.png", "assets_source_world1_general_bg_tree10_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree10.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree10.psd", "assets_source_world1_general_bg_tree10_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree10.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree11.png", "assets_source_world1_general_bg_tree11_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree11.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree11.psd", "assets_source_world1_general_bg_tree11_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree11.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree12.png", "assets_source_world1_general_bg_tree12_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree12.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree12.psd", "assets_source_world1_general_bg_tree12_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree12.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree13.png", "assets_source_world1_general_bg_tree13_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree13.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree13.psd", "assets_source_world1_general_bg_tree13_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree13.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree14.png", "assets_source_world1_general_bg_tree14_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree14.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree14.psd", "assets_source_world1_general_bg_tree14_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree14.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree15.png", "assets_source_world1_general_bg_tree15_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree15.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree15.psd", "assets_source_world1_general_bg_tree15_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree15.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree16.png", "assets_source_world1_general_bg_tree16_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree16.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree16.psd", "assets_source_world1_general_bg_tree16_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree16.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree17.png", "assets_source_world1_general_bg_tree17_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree17.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree17.psd", "assets_source_world1_general_bg_tree17_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree17.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree18.png", "assets_source_world1_general_bg_tree18_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree18.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree18.psd", "assets_source_world1_general_bg_tree18_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree18.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree19.png", "assets_source_world1_general_bg_tree19_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree19.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree19.psd", "assets_source_world1_general_bg_tree19_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree19.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree2.png", "assets_source_world1_general_bg_tree2_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree2.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree2.psd", "assets_source_world1_general_bg_tree2_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree2.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree20.png", "assets_source_world1_general_bg_tree20_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree20.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree20.psd", "assets_source_world1_general_bg_tree20_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree20.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree21.png", "assets_source_world1_general_bg_tree21_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree21.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree21.psd", "assets_source_world1_general_bg_tree21_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree21.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree22.png", "assets_source_world1_general_bg_tree22_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree22.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree22.psd", "assets_source_world1_general_bg_tree22_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree22.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree23.png", "assets_source_world1_general_bg_tree23_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree23.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree23.psd", "assets_source_world1_general_bg_tree23_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree23.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree24.png", "assets_source_world1_general_bg_tree24_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree24.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree24.psd", "assets_source_world1_general_bg_tree24_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree24.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree25.png", "assets_source_world1_general_bg_tree25_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree25.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree25.psd", "assets_source_world1_general_bg_tree25_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree25.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree3.png", "assets_source_world1_general_bg_tree3_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree3.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree3.psd", "assets_source_world1_general_bg_tree3_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree3.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree4.png", "assets_source_world1_general_bg_tree4_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree4.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree4.psd", "assets_source_world1_general_bg_tree4_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree4.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree5.png", "assets_source_world1_general_bg_tree5_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree5.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree5.psd", "assets_source_world1_general_bg_tree5_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree5.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree6.png", "assets_source_world1_general_bg_tree6_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree6.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree6.psd", "assets_source_world1_general_bg_tree6_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree6.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree7.png", "assets_source_world1_general_bg_tree7_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree7.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree7.psd", "assets_source_world1_general_bg_tree7_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree7.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree8.png", "assets_source_world1_general_bg_tree8_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree8.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree8.psd", "assets_source_world1_general_bg_tree8_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree8.psd", "binary");
			resourceNames.set ("assets/source/world1/general/bg/tree9.png", "assets_source_world1_general_bg_tree9_png");
			resourceTypes.set ("assets/source/world1/general/bg/tree9.png", "image");
			resourceNames.set ("assets/source/world1/general/bg/tree9.psd", "assets_source_world1_general_bg_tree9_psd");
			resourceTypes.set ("assets/source/world1/general/bg/tree9.psd", "binary");
			resourceNames.set ("assets/source/world1/general/fg/empty.md", "assets_source_world1_general_fg_empty_md");
			resourceTypes.set ("assets/source/world1/general/fg/empty.md", "text");
			resourceNames.set ("assets/source/world1/lvl1/bg/background.png", "assets_source_world1_lvl1_bg_background_png");
			resourceTypes.set ("assets/source/world1/lvl1/bg/background.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/bg/background.psd", "assets_source_world1_lvl1_bg_background_psd");
			resourceTypes.set ("assets/source/world1/lvl1/bg/background.psd", "binary");
			resourceNames.set ("assets/source/world1/lvl1/bg/background02.png", "assets_source_world1_lvl1_bg_background02_png");
			resourceTypes.set ("assets/source/world1/lvl1/bg/background02.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/bg/sun.png", "assets_source_world1_lvl1_bg_sun_png");
			resourceTypes.set ("assets/source/world1/lvl1/bg/sun.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/bg/sun.psd", "assets_source_world1_lvl1_bg_sun_psd");
			resourceTypes.set ("assets/source/world1/lvl1/bg/sun.psd", "binary");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/FG1.psd", "assets_source_world1_lvl1_fg_l1_fg1_psd");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/FG1.psd", "binary");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png", "assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_1_png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png", "assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_2_png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png", "assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_3_png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png", "assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_4_png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png", "assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_5_png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png", "assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_6_png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png", "assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_7_png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png", "assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_8_png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree1.png", "assets_source_world1_lvl1_fg_l2_tree1_png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree1.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree1.psd", "assets_source_world1_lvl1_fg_l2_tree1_psd");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree1.psd", "binary");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree2.png", "assets_source_world1_lvl1_fg_l2_tree2_png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree2.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree2.psd", "assets_source_world1_lvl1_fg_l2_tree2_psd");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree2.psd", "binary");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree3.png", "assets_source_world1_lvl1_fg_l2_tree3_png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree3.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree3.psd", "assets_source_world1_lvl1_fg_l2_tree3_psd");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree3.psd", "binary");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree4.png", "assets_source_world1_lvl1_fg_l2_tree4_png");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree4.png", "image");
			resourceNames.set ("assets/source/world1/lvl1/fg/l2/tree4.psd", "assets_source_world1_lvl1_fg_l2_tree4_psd");
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree4.psd", "binary");
			resourceNames.set ("assets/xml/bg.xml", "assets_xml_bg_xml");
			resourceTypes.set ("assets/xml/bg.xml", "text");
			resourceNames.set ("assets/xml/bg2.xml", "assets_xml_bg2_xml");
			resourceTypes.set ("assets/xml/bg2.xml", "text");
			resourceNames.set ("assets/xml/general/bg/empty.md", "assets_xml_general_bg_empty_md");
			resourceTypes.set ("assets/xml/general/bg/empty.md", "text");
			resourceNames.set ("assets/xml/general/characters/empty.md", "assets_xml_general_characters_empty_md");
			resourceTypes.set ("assets/xml/general/characters/empty.md", "text");
			resourceNames.set ("assets/xml/general/fg/empty.md", "assets_xml_general_fg_empty_md");
			resourceTypes.set ("assets/xml/general/fg/empty.md", "text");
			resourceNames.set ("assets/xml/settings.xml", "assets_xml_settings_xml");
			resourceTypes.set ("assets/xml/settings.xml", "text");
			resourceNames.set ("assets/xml/test.xml", "assets_xml_test_xml");
			resourceTypes.set ("assets/xml/test.xml", "text");
			resourceNames.set ("assets/xml/test2.xml", "assets_xml_test2_xml");
			resourceTypes.set ("assets/xml/test2.xml", "text");
			resourceNames.set ("assets/xml/walking.xml", "assets_xml_walking_xml");
			resourceTypes.set ("assets/xml/walking.xml", "text");
			resourceNames.set ("assets/xml/world1/general/empty.md", "assets_xml_world1_general_empty_md");
			resourceTypes.set ("assets/xml/world1/general/empty.md", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml", "assets_xml_world1_lvl1_bg_l1_lvl1_bg_l1_fog1_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml", "assets_xml_world1_lvl1_bg_l1_lvl1_bg_l1_hill1_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml", "assets_xml_world1_lvl1_bg_l1_lvl1_bg_l1_hill2_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml", "assets_xml_world1_lvl1_bg_l1_lvl1_bg_l1_hill3_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml", "assets_xml_world1_lvl1_bg_l1_lvl1_bg_l1_hill4_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml", "assets_xml_world1_lvl1_bg_l2_lvl1_bg_l2_fog1_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml", "assets_xml_world1_lvl1_bg_l2_lvl1_bg_l2_tree1_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml", "assets_xml_world1_lvl1_bg_l2_lvl1_bg_l2_tree2_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml", "assets_xml_world1_lvl1_bg_l2_lvl1_bg_l2_tree3_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml", "assets_xml_world1_lvl1_bg_l2_lvl1_bg_l2_tree4_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml", "assets_xml_world1_lvl1_bg_l2_lvl1_bg_l2_tree5_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml", "assets_xml_world1_lvl1_bg_l3_lvl1_bg_l3_tree1_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml", "assets_xml_world1_lvl1_bg_l3_lvl1_bg_l3_tree10_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml", "assets_xml_world1_lvl1_bg_l3_lvl1_bg_l3_tree11_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml", "assets_xml_world1_lvl1_bg_l3_lvl1_bg_l3_tree2_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml", "assets_xml_world1_lvl1_bg_l3_lvl1_bg_l3_tree3_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml", "assets_xml_world1_lvl1_bg_l3_lvl1_bg_l3_tree4_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml", "assets_xml_world1_lvl1_bg_l3_lvl1_bg_l3_tree5_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml", "assets_xml_world1_lvl1_bg_l3_lvl1_bg_l3_tree6_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml", "assets_xml_world1_lvl1_bg_l3_lvl1_bg_l3_tree7_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml", "assets_xml_world1_lvl1_bg_l3_lvl1_bg_l3_tree8_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml", "assets_xml_world1_lvl1_bg_l3_lvl1_bg_l3_tree9_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml", "assets_xml_world1_lvl1_bg_l4_lvl1_bg_l4_fog1_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml", "assets_xml_world1_lvl1_bg_l4_lvl1_bg_l4_hill1_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml", "assets_xml_world1_lvl1_bg_l4_lvl1_bg_l4_hill2_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml", "assets_xml_world1_lvl1_bg_l4_lvl1_bg_l4_hill3_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml", "assets_xml_world1_lvl1_bg_l4_lvl1_bg_l4_tree1_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml", "assets_xml_world1_lvl1_bg_l4_lvl1_bg_l4_tree2_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml", "assets_xml_world1_lvl1_bg_l4_lvl1_bg_l4_tree3_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml", "assets_xml_world1_lvl1_bg_l4_lvl1_bg_l4_tree4_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml", "assets_xml_world1_lvl1_bg_l4_lvl1_bg_l4_tree5_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml", "assets_xml_world1_lvl1_bg_l4_lvl1_bg_l4_tree6_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml", "assets_xml_world1_lvl1_bg_l4_lvl1_bg_l4_tree7_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml", "assets_xml_world1_lvl1_bg_l5_lvl1_bg_l5_tree1_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml", "assets_xml_world1_lvl1_bg_l5_lvl1_bg_l5_tree2_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml", "assets_xml_world1_lvl1_bg_l5_lvl1_bg_l5_tree3_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml", "assets_xml_world1_lvl1_bg_l5_lvl1_bg_l5_tree4_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml", "assets_xml_world1_lvl1_bg_l5_lvl1_bg_l5_tree5_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml", "assets_xml_world1_lvl1_bg_l5_lvl1_bg_l5_tree6_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_background.xml", "assets_xml_world1_lvl1_bg_l6_lvl1_bg_l6_background_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_background.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml", "assets_xml_world1_lvl1_bg_l6_lvl1_bg_l6_sun_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/bg.xml", "assets_xml_world1_lvl1_bg_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/bg.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml", "assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_1_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml", "assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_2_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml", "assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_3_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml", "assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_4_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml", "assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_5_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml", "assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_6_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml", "assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_7_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml", "assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_8_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml", "assets_xml_world1_lvl1_fg_l2_lvl1_fg_l2_grass1_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml", "assets_xml_world1_lvl1_fg_l2_lvl1_fg_l2_grass2_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml", "assets_xml_world1_lvl1_fg_l2_lvl1_fg_l2_grass3_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml", "assets_xml_world1_lvl1_fg_l2_lvl1_fg_l2_grass4_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml", "assets_xml_world1_lvl1_fg_l2_lvl1_fg_l2_grass5_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml", "assets_xml_world1_lvl1_fg_l2_lvl1_fg_l2_grass6_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml", "assets_xml_world1_lvl1_fg_l2_lvl1_fg_l2_grass7_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml", "assets_xml_world1_lvl1_fg_l2_lvl1_fg_l2_tree1_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml", "assets_xml_world1_lvl1_fg_l2_lvl1_fg_l2_tree2_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml", "assets_xml_world1_lvl1_fg_l2_lvl1_fg_l2_tree3_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml", "assets_xml_world1_lvl1_fg_l2_lvl1_fg_l2_tree4_xml");
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml", "text");
			resourceNames.set ("assets/xml/world1/lvl2/bg.xml", "assets_xml_world1_lvl2_bg_xml");
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
