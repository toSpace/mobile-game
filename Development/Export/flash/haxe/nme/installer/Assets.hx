package nme.installer;


import format.display.MovieClip;
import haxe.Unserializer;
import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;
import ApplicationMain;

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
	private static var resourceClasses:Hash <Dynamic> = new Hash <Dynamic> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			resourceClasses.set ("assets/mobile-1x/general/bg/fog_large.png", NME_assets_mobile_1x_general_bg_fog_large_png);
			resourceTypes.set ("assets/mobile-1x/general/bg/fog_large.png", "image");
			resourceClasses.set ("assets/mobile-1x/general/bg/fog_medium.png", NME_assets_mobile_1x_general_bg_fog_medium_png);
			resourceTypes.set ("assets/mobile-1x/general/bg/fog_medium.png", "image");
			resourceClasses.set ("assets/mobile-1x/general/bg/fog_small.png", NME_assets_mobile_1x_general_bg_fog_small_png);
			resourceTypes.set ("assets/mobile-1x/general/bg/fog_small.png", "image");
			resourceClasses.set ("assets/mobile-1x/general/bg/star.png", NME_assets_mobile_1x_general_bg_star_png);
			resourceTypes.set ("assets/mobile-1x/general/bg/star.png", "image");
			resourceClasses.set ("assets/mobile-1x/general/characters/walking-sparrow.xml", NME_assets_mobile_1x_general_characters_walking_sparrow_xml);
			resourceTypes.set ("assets/mobile-1x/general/characters/walking-sparrow.xml", "text");
			resourceClasses.set ("assets/mobile-1x/general/characters/walking.png", NME_assets_mobile_1x_general_characters_walking_png);
			resourceTypes.set ("assets/mobile-1x/general/characters/walking.png", "image");
			resourceClasses.set ("assets/mobile-1x/general/fg/empty.md", NME_assets_mobile_1x_general_fg_empty_md);
			resourceTypes.set ("assets/mobile-1x/general/fg/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/general/gui/button.png", NME_assets_mobile_1x_general_gui_button_png);
			resourceTypes.set ("assets/mobile-1x/general/gui/button.png", "image");
			resourceClasses.set ("assets/mobile-1x/general/gui/button2.png", NME_assets_mobile_1x_general_gui_button2_png);
			resourceTypes.set ("assets/mobile-1x/general/gui/button2.png", "image");
			resourceClasses.set ("assets/mobile-1x/test1.png", NME_assets_mobile_1x_test1_png);
			resourceTypes.set ("assets/mobile-1x/test1.png", "image");
			resourceClasses.set ("assets/mobile-1x/test2.png", NME_assets_mobile_1x_test2_png);
			resourceTypes.set ("assets/mobile-1x/test2.png", "image");
			resourceClasses.set ("assets/mobile-1x/test3bg.png", NME_assets_mobile_1x_test3bg_png);
			resourceTypes.set ("assets/mobile-1x/test3bg.png", "image");
			resourceClasses.set ("assets/mobile-1x/walking-sparrow.xml", NME_assets_mobile_1x_walking_sparrow_xml);
			resourceTypes.set ("assets/mobile-1x/walking-sparrow.xml", "text");
			resourceClasses.set ("assets/mobile-1x/walking.png", NME_assets_mobile_1x_walking_png);
			resourceTypes.set ("assets/mobile-1x/walking.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/hill1.png", NME_assets_mobile_1x_world1_general_hill1_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/hill1.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/hill2.png", NME_assets_mobile_1x_world1_general_hill2_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/hill2.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/hill3.png", NME_assets_mobile_1x_world1_general_hill3_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/hill3.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/hill4.png", NME_assets_mobile_1x_world1_general_hill4_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/hill4.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/hill5.png", NME_assets_mobile_1x_world1_general_hill5_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/hill5.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/hill6.png", NME_assets_mobile_1x_world1_general_hill6_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/hill6.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/hill7.png", NME_assets_mobile_1x_world1_general_hill7_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/hill7.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree1.png", NME_assets_mobile_1x_world1_general_tree1_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree1.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree10.png", NME_assets_mobile_1x_world1_general_tree10_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree10.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree11.png", NME_assets_mobile_1x_world1_general_tree11_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree11.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree12.png", NME_assets_mobile_1x_world1_general_tree12_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree12.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree13.png", NME_assets_mobile_1x_world1_general_tree13_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree13.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree14.png", NME_assets_mobile_1x_world1_general_tree14_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree14.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree15.png", NME_assets_mobile_1x_world1_general_tree15_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree15.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree16.png", NME_assets_mobile_1x_world1_general_tree16_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree16.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree17.png", NME_assets_mobile_1x_world1_general_tree17_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree17.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree18.png", NME_assets_mobile_1x_world1_general_tree18_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree18.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree19.png", NME_assets_mobile_1x_world1_general_tree19_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree19.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree2.png", NME_assets_mobile_1x_world1_general_tree2_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree2.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree20.png", NME_assets_mobile_1x_world1_general_tree20_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree20.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree21.png", NME_assets_mobile_1x_world1_general_tree21_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree21.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree22.png", NME_assets_mobile_1x_world1_general_tree22_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree22.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree23.png", NME_assets_mobile_1x_world1_general_tree23_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree23.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree24.png", NME_assets_mobile_1x_world1_general_tree24_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree24.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree25.png", NME_assets_mobile_1x_world1_general_tree25_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree25.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree3.png", NME_assets_mobile_1x_world1_general_tree3_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree3.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree4.png", NME_assets_mobile_1x_world1_general_tree4_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree4.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree5.png", NME_assets_mobile_1x_world1_general_tree5_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree5.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree6.png", NME_assets_mobile_1x_world1_general_tree6_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree6.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree7.png", NME_assets_mobile_1x_world1_general_tree7_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree7.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree8.png", NME_assets_mobile_1x_world1_general_tree8_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree8.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/general/tree9.png", NME_assets_mobile_1x_world1_general_tree9_png);
			resourceTypes.set ("assets/mobile-1x/world1/general/tree9.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/bg/background.png", NME_assets_mobile_1x_world1_lvl1_bg_background_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/background.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/bg/background02.png", NME_assets_mobile_1x_world1_lvl1_bg_background02_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/background02.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/bg/sun.png", NME_assets_mobile_1x_world1_lvl1_bg_sun_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/sun.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png", NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_1_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png", NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_2_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png", NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_3_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png", NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_4_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png", NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_5_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png", NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_6_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png", NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_7_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png", NME_assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_8_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png", NME_assets_mobile_1x_world1_lvl1_fg_l2_tree1_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png", NME_assets_mobile_1x_world1_lvl1_fg_l2_tree2_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png", NME_assets_mobile_1x_world1_lvl1_fg_l2_tree3_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png", "image");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png", NME_assets_mobile_1x_world1_lvl1_fg_l2_tree4_png);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png", "image");
			resourceClasses.set ("assets/source/general/bg/fog_large.png", NME_assets_source_general_bg_fog_large_png);
			resourceTypes.set ("assets/source/general/bg/fog_large.png", "image");
			resourceClasses.set ("assets/source/general/bg/fog_large.psd", NME_assets_source_general_bg_fog_large_psd);
			resourceTypes.set ("assets/source/general/bg/fog_large.psd", "binary");
			resourceClasses.set ("assets/source/general/bg/fog_medium.png", NME_assets_source_general_bg_fog_medium_png);
			resourceTypes.set ("assets/source/general/bg/fog_medium.png", "image");
			resourceClasses.set ("assets/source/general/bg/fog_medium.psd", NME_assets_source_general_bg_fog_medium_psd);
			resourceTypes.set ("assets/source/general/bg/fog_medium.psd", "binary");
			resourceClasses.set ("assets/source/general/bg/fog_small.png", NME_assets_source_general_bg_fog_small_png);
			resourceTypes.set ("assets/source/general/bg/fog_small.png", "image");
			resourceClasses.set ("assets/source/general/bg/fog_small.psd", NME_assets_source_general_bg_fog_small_psd);
			resourceTypes.set ("assets/source/general/bg/fog_small.psd", "binary");
			resourceClasses.set ("assets/source/general/bg/star.png", NME_assets_source_general_bg_star_png);
			resourceTypes.set ("assets/source/general/bg/star.png", "image");
			resourceClasses.set ("assets/source/general/bg/star.psd", NME_assets_source_general_bg_star_psd);
			resourceTypes.set ("assets/source/general/bg/star.psd", "binary");
			resourceClasses.set ("assets/source/general/characters/walking-sparrow.xml", NME_assets_source_general_characters_walking_sparrow_xml);
			resourceTypes.set ("assets/source/general/characters/walking-sparrow.xml", "text");
			resourceClasses.set ("assets/source/general/characters/walking.png", NME_assets_source_general_characters_walking_png);
			resourceTypes.set ("assets/source/general/characters/walking.png", "image");
			resourceClasses.set ("assets/source/general/fg/empty.md", NME_assets_source_general_fg_empty_md);
			resourceTypes.set ("assets/source/general/fg/empty.md", "text");
			resourceClasses.set ("assets/source/general/gui/button.png", NME_assets_source_general_gui_button_png);
			resourceTypes.set ("assets/source/general/gui/button.png", "image");
			resourceClasses.set ("assets/source/general/gui/button2.png", NME_assets_source_general_gui_button2_png);
			resourceTypes.set ("assets/source/general/gui/button2.png", "image");
			resourceClasses.set ("assets/source/level_1-forrest-jesse.ai", NME_assets_source_level_1_forrest_jesse_ai);
			resourceTypes.set ("assets/source/level_1-forrest-jesse.ai", "text");
			resourceClasses.set ("assets/source/level_1-forrest-jesse.pdf", NME_assets_source_level_1_forrest_jesse_pdf);
			resourceTypes.set ("assets/source/level_1-forrest-jesse.pdf", "text");
			resourceClasses.set ("assets/source/test1.png", NME_assets_source_test1_png);
			resourceTypes.set ("assets/source/test1.png", "image");
			resourceClasses.set ("assets/source/test2.png", NME_assets_source_test2_png);
			resourceTypes.set ("assets/source/test2.png", "image");
			resourceClasses.set ("assets/source/test3bg.png", NME_assets_source_test3bg_png);
			resourceTypes.set ("assets/source/test3bg.png", "image");
			resourceClasses.set ("assets/source/walking-sparrow.xml", NME_assets_source_walking_sparrow_xml);
			resourceTypes.set ("assets/source/walking-sparrow.xml", "text");
			resourceClasses.set ("assets/source/walking.png", NME_assets_source_walking_png);
			resourceTypes.set ("assets/source/walking.png", "image");
			resourceClasses.set ("assets/source/world1/general/hill1.png", NME_assets_source_world1_general_hill1_png);
			resourceTypes.set ("assets/source/world1/general/hill1.png", "image");
			resourceClasses.set ("assets/source/world1/general/hill1.psd", NME_assets_source_world1_general_hill1_psd);
			resourceTypes.set ("assets/source/world1/general/hill1.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/hill2.png", NME_assets_source_world1_general_hill2_png);
			resourceTypes.set ("assets/source/world1/general/hill2.png", "image");
			resourceClasses.set ("assets/source/world1/general/hill2.psd", NME_assets_source_world1_general_hill2_psd);
			resourceTypes.set ("assets/source/world1/general/hill2.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/hill3.png", NME_assets_source_world1_general_hill3_png);
			resourceTypes.set ("assets/source/world1/general/hill3.png", "image");
			resourceClasses.set ("assets/source/world1/general/hill3.psd", NME_assets_source_world1_general_hill3_psd);
			resourceTypes.set ("assets/source/world1/general/hill3.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/hill4.png", NME_assets_source_world1_general_hill4_png);
			resourceTypes.set ("assets/source/world1/general/hill4.png", "image");
			resourceClasses.set ("assets/source/world1/general/hill4.psd", NME_assets_source_world1_general_hill4_psd);
			resourceTypes.set ("assets/source/world1/general/hill4.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/hill5.png", NME_assets_source_world1_general_hill5_png);
			resourceTypes.set ("assets/source/world1/general/hill5.png", "image");
			resourceClasses.set ("assets/source/world1/general/hill5.psd", NME_assets_source_world1_general_hill5_psd);
			resourceTypes.set ("assets/source/world1/general/hill5.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/hill6.png", NME_assets_source_world1_general_hill6_png);
			resourceTypes.set ("assets/source/world1/general/hill6.png", "image");
			resourceClasses.set ("assets/source/world1/general/hill6.psd", NME_assets_source_world1_general_hill6_psd);
			resourceTypes.set ("assets/source/world1/general/hill6.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/hill7.png", NME_assets_source_world1_general_hill7_png);
			resourceTypes.set ("assets/source/world1/general/hill7.png", "image");
			resourceClasses.set ("assets/source/world1/general/hill7.psd", NME_assets_source_world1_general_hill7_psd);
			resourceTypes.set ("assets/source/world1/general/hill7.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree1.png", NME_assets_source_world1_general_tree1_png);
			resourceTypes.set ("assets/source/world1/general/tree1.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree1.psd", NME_assets_source_world1_general_tree1_psd);
			resourceTypes.set ("assets/source/world1/general/tree1.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree10.png", NME_assets_source_world1_general_tree10_png);
			resourceTypes.set ("assets/source/world1/general/tree10.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree10.psd", NME_assets_source_world1_general_tree10_psd);
			resourceTypes.set ("assets/source/world1/general/tree10.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree11.png", NME_assets_source_world1_general_tree11_png);
			resourceTypes.set ("assets/source/world1/general/tree11.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree11.psd", NME_assets_source_world1_general_tree11_psd);
			resourceTypes.set ("assets/source/world1/general/tree11.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree12.png", NME_assets_source_world1_general_tree12_png);
			resourceTypes.set ("assets/source/world1/general/tree12.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree12.psd", NME_assets_source_world1_general_tree12_psd);
			resourceTypes.set ("assets/source/world1/general/tree12.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree13.png", NME_assets_source_world1_general_tree13_png);
			resourceTypes.set ("assets/source/world1/general/tree13.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree13.psd", NME_assets_source_world1_general_tree13_psd);
			resourceTypes.set ("assets/source/world1/general/tree13.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree14.png", NME_assets_source_world1_general_tree14_png);
			resourceTypes.set ("assets/source/world1/general/tree14.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree14.psd", NME_assets_source_world1_general_tree14_psd);
			resourceTypes.set ("assets/source/world1/general/tree14.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree15.png", NME_assets_source_world1_general_tree15_png);
			resourceTypes.set ("assets/source/world1/general/tree15.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree15.psd", NME_assets_source_world1_general_tree15_psd);
			resourceTypes.set ("assets/source/world1/general/tree15.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree16.png", NME_assets_source_world1_general_tree16_png);
			resourceTypes.set ("assets/source/world1/general/tree16.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree16.psd", NME_assets_source_world1_general_tree16_psd);
			resourceTypes.set ("assets/source/world1/general/tree16.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree17.png", NME_assets_source_world1_general_tree17_png);
			resourceTypes.set ("assets/source/world1/general/tree17.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree17.psd", NME_assets_source_world1_general_tree17_psd);
			resourceTypes.set ("assets/source/world1/general/tree17.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree18.png", NME_assets_source_world1_general_tree18_png);
			resourceTypes.set ("assets/source/world1/general/tree18.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree18.psd", NME_assets_source_world1_general_tree18_psd);
			resourceTypes.set ("assets/source/world1/general/tree18.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree19.png", NME_assets_source_world1_general_tree19_png);
			resourceTypes.set ("assets/source/world1/general/tree19.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree19.psd", NME_assets_source_world1_general_tree19_psd);
			resourceTypes.set ("assets/source/world1/general/tree19.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree2.png", NME_assets_source_world1_general_tree2_png);
			resourceTypes.set ("assets/source/world1/general/tree2.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree2.psd", NME_assets_source_world1_general_tree2_psd);
			resourceTypes.set ("assets/source/world1/general/tree2.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree20.png", NME_assets_source_world1_general_tree20_png);
			resourceTypes.set ("assets/source/world1/general/tree20.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree20.psd", NME_assets_source_world1_general_tree20_psd);
			resourceTypes.set ("assets/source/world1/general/tree20.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree21.png", NME_assets_source_world1_general_tree21_png);
			resourceTypes.set ("assets/source/world1/general/tree21.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree21.psd", NME_assets_source_world1_general_tree21_psd);
			resourceTypes.set ("assets/source/world1/general/tree21.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree22.png", NME_assets_source_world1_general_tree22_png);
			resourceTypes.set ("assets/source/world1/general/tree22.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree22.psd", NME_assets_source_world1_general_tree22_psd);
			resourceTypes.set ("assets/source/world1/general/tree22.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree23.png", NME_assets_source_world1_general_tree23_png);
			resourceTypes.set ("assets/source/world1/general/tree23.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree23.psd", NME_assets_source_world1_general_tree23_psd);
			resourceTypes.set ("assets/source/world1/general/tree23.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree24.png", NME_assets_source_world1_general_tree24_png);
			resourceTypes.set ("assets/source/world1/general/tree24.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree24.psd", NME_assets_source_world1_general_tree24_psd);
			resourceTypes.set ("assets/source/world1/general/tree24.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree25.png", NME_assets_source_world1_general_tree25_png);
			resourceTypes.set ("assets/source/world1/general/tree25.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree25.psd", NME_assets_source_world1_general_tree25_psd);
			resourceTypes.set ("assets/source/world1/general/tree25.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree3.png", NME_assets_source_world1_general_tree3_png);
			resourceTypes.set ("assets/source/world1/general/tree3.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree3.psd", NME_assets_source_world1_general_tree3_psd);
			resourceTypes.set ("assets/source/world1/general/tree3.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree4.png", NME_assets_source_world1_general_tree4_png);
			resourceTypes.set ("assets/source/world1/general/tree4.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree4.psd", NME_assets_source_world1_general_tree4_psd);
			resourceTypes.set ("assets/source/world1/general/tree4.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree5.png", NME_assets_source_world1_general_tree5_png);
			resourceTypes.set ("assets/source/world1/general/tree5.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree5.psd", NME_assets_source_world1_general_tree5_psd);
			resourceTypes.set ("assets/source/world1/general/tree5.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree6.png", NME_assets_source_world1_general_tree6_png);
			resourceTypes.set ("assets/source/world1/general/tree6.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree6.psd", NME_assets_source_world1_general_tree6_psd);
			resourceTypes.set ("assets/source/world1/general/tree6.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree7.png", NME_assets_source_world1_general_tree7_png);
			resourceTypes.set ("assets/source/world1/general/tree7.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree7.psd", NME_assets_source_world1_general_tree7_psd);
			resourceTypes.set ("assets/source/world1/general/tree7.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree8.png", NME_assets_source_world1_general_tree8_png);
			resourceTypes.set ("assets/source/world1/general/tree8.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree8.psd", NME_assets_source_world1_general_tree8_psd);
			resourceTypes.set ("assets/source/world1/general/tree8.psd", "binary");
			resourceClasses.set ("assets/source/world1/general/tree9.png", NME_assets_source_world1_general_tree9_png);
			resourceTypes.set ("assets/source/world1/general/tree9.png", "image");
			resourceClasses.set ("assets/source/world1/general/tree9.psd", NME_assets_source_world1_general_tree9_psd);
			resourceTypes.set ("assets/source/world1/general/tree9.psd", "binary");
			resourceClasses.set ("assets/source/world1/lvl1/bg/background.png", NME_assets_source_world1_lvl1_bg_background_png);
			resourceTypes.set ("assets/source/world1/lvl1/bg/background.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/bg/background.psd", NME_assets_source_world1_lvl1_bg_background_psd);
			resourceTypes.set ("assets/source/world1/lvl1/bg/background.psd", "binary");
			resourceClasses.set ("assets/source/world1/lvl1/bg/background02.png", NME_assets_source_world1_lvl1_bg_background02_png);
			resourceTypes.set ("assets/source/world1/lvl1/bg/background02.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/bg/sun.png", NME_assets_source_world1_lvl1_bg_sun_png);
			resourceTypes.set ("assets/source/world1/lvl1/bg/sun.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/bg/sun.psd", NME_assets_source_world1_lvl1_bg_sun_psd);
			resourceTypes.set ("assets/source/world1/lvl1/bg/sun.psd", "binary");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l1/FG1.psd", NME_assets_source_world1_lvl1_fg_l1_fg1_psd);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/FG1.psd", "binary");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png", NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_1_png);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png", NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_2_png);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png", NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_3_png);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png", NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_4_png);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png", NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_5_png);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png", NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_6_png);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png", NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_7_png);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png", NME_assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_8_png);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l2/tree1.png", NME_assets_source_world1_lvl1_fg_l2_tree1_png);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree1.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l2/tree1.psd", NME_assets_source_world1_lvl1_fg_l2_tree1_psd);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree1.psd", "binary");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l2/tree2.png", NME_assets_source_world1_lvl1_fg_l2_tree2_png);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree2.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l2/tree2.psd", NME_assets_source_world1_lvl1_fg_l2_tree2_psd);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree2.psd", "binary");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l2/tree3.png", NME_assets_source_world1_lvl1_fg_l2_tree3_png);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree3.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l2/tree3.psd", NME_assets_source_world1_lvl1_fg_l2_tree3_psd);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree3.psd", "binary");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l2/tree4.png", NME_assets_source_world1_lvl1_fg_l2_tree4_png);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree4.png", "image");
			resourceClasses.set ("assets/source/world1/lvl1/fg/l2/tree4.psd", NME_assets_source_world1_lvl1_fg_l2_tree4_psd);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/tree4.psd", "binary");
			resourceClasses.set ("assets/xml/bg.xml", NME_assets_xml_bg_xml);
			resourceTypes.set ("assets/xml/bg.xml", "text");
			resourceClasses.set ("assets/xml/bg2.xml", NME_assets_xml_bg2_xml);
			resourceTypes.set ("assets/xml/bg2.xml", "text");
			resourceClasses.set ("assets/xml/general/bg/empty.md", NME_assets_xml_general_bg_empty_md);
			resourceTypes.set ("assets/xml/general/bg/empty.md", "text");
			resourceClasses.set ("assets/xml/general/characters/empty.md", NME_assets_xml_general_characters_empty_md);
			resourceTypes.set ("assets/xml/general/characters/empty.md", "text");
			resourceClasses.set ("assets/xml/general/fg/empty.md", NME_assets_xml_general_fg_empty_md);
			resourceTypes.set ("assets/xml/general/fg/empty.md", "text");
			resourceClasses.set ("assets/xml/settings.xml", NME_assets_xml_settings_xml);
			resourceTypes.set ("assets/xml/settings.xml", "text");
			resourceClasses.set ("assets/xml/test.xml", NME_assets_xml_test_xml);
			resourceTypes.set ("assets/xml/test.xml", "text");
			resourceClasses.set ("assets/xml/test2.xml", NME_assets_xml_test2_xml);
			resourceTypes.set ("assets/xml/test2.xml", "text");
			resourceClasses.set ("assets/xml/walking.xml", NME_assets_xml_walking_xml);
			resourceTypes.set ("assets/xml/walking.xml", "text");
			resourceClasses.set ("assets/xml/world1/general/empty.md", NME_assets_xml_world1_general_empty_md);
			resourceTypes.set ("assets/xml/world1/general/empty.md", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/bg/l1/empty.md", NME_assets_xml_world1_lvl1_bg_l1_empty_md);
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l1/empty.md", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/bg/l2/empty.md", NME_assets_xml_world1_lvl1_bg_l2_empty_md);
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l2/empty.md", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/bg/l3/empty.md", NME_assets_xml_world1_lvl1_bg_l3_empty_md);
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l3/empty.md", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/bg/l4/empty.md", NME_assets_xml_world1_lvl1_bg_l4_empty_md);
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l4/empty.md", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/bg/l5/empty.md", NME_assets_xml_world1_lvl1_bg_l5_empty_md);
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l5/empty.md", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/bg/l6/empty.md", NME_assets_xml_world1_lvl1_bg_l6_empty_md);
			resourceTypes.set ("assets/xml/world1/lvl1/bg/l6/empty.md", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/bg.xml", NME_assets_xml_world1_lvl1_bg_xml);
			resourceTypes.set ("assets/xml/world1/lvl1/bg.xml", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml", NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_1_xml);
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml", NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_2_xml);
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml", NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_3_xml);
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml", NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_4_xml);
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml", NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_5_xml);
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml", NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_6_xml);
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml", NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_7_xml);
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml", NME_assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_8_xml);
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml", "text");
			resourceClasses.set ("assets/xml/world1/lvl1/fg/l2/empty.md", NME_assets_xml_world1_lvl1_fg_l2_empty_md);
			resourceTypes.set ("assets/xml/world1/lvl1/fg/l2/empty.md", "text");
			resourceClasses.set ("assets/xml/world1/lvl2/bg.xml", NME_assets_xml_world1_lvl2_bg_xml);
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
				
				var data = cast (Type.createInstance (resourceClasses.get (id), []), BitmapData);
				
				if (useCache) {
					
					cachedBitmapData.set (id, data);
					
				}
				
				return data;
				
			}
			
		} else if (id.indexOf (":") > -1) {
			
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
		
		if (resourceClasses.exists (id)) {
			
			return Type.createInstance (resourceClasses.get (id), []);
			
		} else {
			
			trace ("[nme.Assets] There is no ByteArray asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id).toLowerCase () == "font") {
			
			return cast (Type.createInstance (resourceClasses.get (id), []), Font);
			
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
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id).toLowerCase () == "sound" || resourceTypes.get (id).toLowerCase () == "music") {
				
				return cast (Type.createInstance (resourceClasses.get (id), []), Sound);
				
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