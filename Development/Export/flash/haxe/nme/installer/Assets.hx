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
			
			resourceClasses.set ("assets/mobile-1x/button.png", NME_assets_mobile_1x_button_png);
			resourceTypes.set ("assets/mobile-1x/button.png", "image");
			resourceClasses.set ("assets/mobile-1x/button2.png", NME_assets_mobile_1x_button2_png);
			resourceTypes.set ("assets/mobile-1x/button2.png", "image");
			resourceClasses.set ("assets/mobile-1x/General/Enemies/walking-sparrow.xml", NME_assets_mobile_1x_general_enemies_walking_sparrow_xml);
			resourceTypes.set ("assets/mobile-1x/General/Enemies/walking-sparrow.xml", "text");
			resourceClasses.set ("assets/mobile-1x/General/Enemies/walking.png", NME_assets_mobile_1x_general_enemies_walking_png);
			resourceTypes.set ("assets/mobile-1x/General/Enemies/walking.png", "image");
			resourceClasses.set ("assets/mobile-1x/General/Environment/Background/empty.md", NME_assets_mobile_1x_general_environment_background_empty_md);
			resourceTypes.set ("assets/mobile-1x/General/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/General/Environment/Foreground/empty.md", NME_assets_mobile_1x_general_environment_foreground_empty_md);
			resourceTypes.set ("assets/mobile-1x/General/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/General/Worldmap/empty.md", NME_assets_mobile_1x_general_worldmap_empty_md);
			resourceTypes.set ("assets/mobile-1x/General/Worldmap/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/Specific/Level1/Enemies/empty.md", NME_assets_mobile_1x_specific_level1_enemies_empty_md);
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Enemies/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/Specific/Level1/Environment/Background/empty.md", NME_assets_mobile_1x_specific_level1_environment_background_empty_md);
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/FG1.psd", NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_psd);
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/FG1.psd", "binary");
			resourceClasses.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_1.png", NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_1_png);
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_1.png", "image");
			resourceClasses.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_2.png", NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_2_png);
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_2.png", "image");
			resourceClasses.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_3.png", NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_3_png);
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_3.png", "image");
			resourceClasses.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_4.png", NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_4_png);
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_4.png", "image");
			resourceClasses.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_5.png", NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_5_png);
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_5.png", "image");
			resourceClasses.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_6.png", NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_6_png);
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_6.png", "image");
			resourceClasses.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_7.png", NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_7_png);
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_7.png", "image");
			resourceClasses.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_8.png", NME_assets_mobile_1x_specific_level1_environment_foreground_fg1_fg1_8_png);
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/FG1/fg1_8.png", "image");
			resourceClasses.set ("assets/mobile-1x/Specific/Level2/Enemies/empty.md", NME_assets_mobile_1x_specific_level2_enemies_empty_md);
			resourceTypes.set ("assets/mobile-1x/Specific/Level2/Enemies/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/Specific/Level2/Environment/Background/empty.md", NME_assets_mobile_1x_specific_level2_environment_background_empty_md);
			resourceTypes.set ("assets/mobile-1x/Specific/Level2/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md", NME_assets_mobile_1x_specific_level2_environment_foreground_empty_md);
			resourceTypes.set ("assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/Specific/Level3/Enemies/empty.md", NME_assets_mobile_1x_specific_level3_enemies_empty_md);
			resourceTypes.set ("assets/mobile-1x/Specific/Level3/Enemies/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/Specific/Level3/Environment/Background/empty.md", NME_assets_mobile_1x_specific_level3_environment_background_empty_md);
			resourceTypes.set ("assets/mobile-1x/Specific/Level3/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md", NME_assets_mobile_1x_specific_level3_environment_foreground_empty_md);
			resourceTypes.set ("assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md", "text");
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
			resourceClasses.set ("assets/mobile-2x/button.png", NME_assets_mobile_2x_button_png);
			resourceTypes.set ("assets/mobile-2x/button.png", "image");
			resourceClasses.set ("assets/mobile-2x/button2.png", NME_assets_mobile_2x_button2_png);
			resourceTypes.set ("assets/mobile-2x/button2.png", "image");
			resourceClasses.set ("assets/mobile-2x/General/Enemies/empty.md", NME_assets_mobile_2x_general_enemies_empty_md);
			resourceTypes.set ("assets/mobile-2x/General/Enemies/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/General/Environment/Background/empty.md", NME_assets_mobile_2x_general_environment_background_empty_md);
			resourceTypes.set ("assets/mobile-2x/General/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/General/Environment/Foreground/empty.md", NME_assets_mobile_2x_general_environment_foreground_empty_md);
			resourceTypes.set ("assets/mobile-2x/General/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/General/Worldmap/empty.md", NME_assets_mobile_2x_general_worldmap_empty_md);
			resourceTypes.set ("assets/mobile-2x/General/Worldmap/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/Specific/Level1/Enemies/empty.md", NME_assets_mobile_2x_specific_level1_enemies_empty_md);
			resourceTypes.set ("assets/mobile-2x/Specific/Level1/Enemies/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/Specific/Level1/Environment/Background/empty.md", NME_assets_mobile_2x_specific_level1_environment_background_empty_md);
			resourceTypes.set ("assets/mobile-2x/Specific/Level1/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md", NME_assets_mobile_2x_specific_level1_environment_foreground_empty_md);
			resourceTypes.set ("assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/Specific/Level2/Enemies/empty.md", NME_assets_mobile_2x_specific_level2_enemies_empty_md);
			resourceTypes.set ("assets/mobile-2x/Specific/Level2/Enemies/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/Specific/Level2/Environment/Background/empty.md", NME_assets_mobile_2x_specific_level2_environment_background_empty_md);
			resourceTypes.set ("assets/mobile-2x/Specific/Level2/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md", NME_assets_mobile_2x_specific_level2_environment_foreground_empty_md);
			resourceTypes.set ("assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/Specific/Level3/Enemies/empty.md", NME_assets_mobile_2x_specific_level3_enemies_empty_md);
			resourceTypes.set ("assets/mobile-2x/Specific/Level3/Enemies/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/Specific/Level3/Environment/Background/empty.md", NME_assets_mobile_2x_specific_level3_environment_background_empty_md);
			resourceTypes.set ("assets/mobile-2x/Specific/Level3/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md", NME_assets_mobile_2x_specific_level3_environment_foreground_empty_md);
			resourceTypes.set ("assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/mobile-2x/test1.png", NME_assets_mobile_2x_test1_png);
			resourceTypes.set ("assets/mobile-2x/test1.png", "image");
			resourceClasses.set ("assets/mobile-2x/test2.png", NME_assets_mobile_2x_test2_png);
			resourceTypes.set ("assets/mobile-2x/test2.png", "image");
			resourceClasses.set ("assets/mobile-2x/test3bg.png", NME_assets_mobile_2x_test3bg_png);
			resourceTypes.set ("assets/mobile-2x/test3bg.png", "image");
			resourceClasses.set ("assets/mobile-2x/walking-sparrow.xml", NME_assets_mobile_2x_walking_sparrow_xml);
			resourceTypes.set ("assets/mobile-2x/walking-sparrow.xml", "text");
			resourceClasses.set ("assets/mobile-2x/walking.png", NME_assets_mobile_2x_walking_png);
			resourceTypes.set ("assets/mobile-2x/walking.png", "image");
			resourceClasses.set ("assets/source/General/Enemies/walking.xml", NME_assets_source_general_enemies_walking_xml);
			resourceTypes.set ("assets/source/General/Enemies/walking.xml", "text");
			resourceClasses.set ("assets/source/General/Environment/Background/fog_large.png", NME_assets_source_general_environment_background_fog_large_png);
			resourceTypes.set ("assets/source/General/Environment/Background/fog_large.png", "image");
			resourceClasses.set ("assets/source/General/Environment/Background/fog_large.psd", NME_assets_source_general_environment_background_fog_large_psd);
			resourceTypes.set ("assets/source/General/Environment/Background/fog_large.psd", "binary");
			resourceClasses.set ("assets/source/General/Environment/Background/fog_medium.png", NME_assets_source_general_environment_background_fog_medium_png);
			resourceTypes.set ("assets/source/General/Environment/Background/fog_medium.png", "image");
			resourceClasses.set ("assets/source/General/Environment/Background/fog_medium.psd", NME_assets_source_general_environment_background_fog_medium_psd);
			resourceTypes.set ("assets/source/General/Environment/Background/fog_medium.psd", "binary");
			resourceClasses.set ("assets/source/General/Environment/Background/fog_small.png", NME_assets_source_general_environment_background_fog_small_png);
			resourceTypes.set ("assets/source/General/Environment/Background/fog_small.png", "image");
			resourceClasses.set ("assets/source/General/Environment/Background/fog_small.psd", NME_assets_source_general_environment_background_fog_small_psd);
			resourceTypes.set ("assets/source/General/Environment/Background/fog_small.psd", "binary");
			resourceClasses.set ("assets/source/General/Environment/Foreground/empty.md", NME_assets_source_general_environment_foreground_empty_md);
			resourceTypes.set ("assets/source/General/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/source/General/Sound/Effects/empty.md", NME_assets_source_general_sound_effects_empty_md);
			resourceTypes.set ("assets/source/General/Sound/Effects/empty.md", "text");
			resourceClasses.set ("assets/source/General/Sound/Music/empty.md", NME_assets_source_general_sound_music_empty_md);
			resourceTypes.set ("assets/source/General/Sound/Music/empty.md", "text");
			resourceClasses.set ("assets/source/General/Worldmap/empty.md", NME_assets_source_general_worldmap_empty_md);
			resourceTypes.set ("assets/source/General/Worldmap/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level1/Characters/Enemies/empty.md", NME_assets_source_specific_level1_characters_enemies_empty_md);
			resourceTypes.set ("assets/source/Specific/Level1/Characters/Enemies/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level1/Characters/Player/Kutje.png", NME_assets_source_specific_level1_characters_player_kutje_png);
			resourceTypes.set ("assets/source/Specific/Level1/Characters/Player/Kutje.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Characters/Player/Kutje.psd", NME_assets_source_specific_level1_characters_player_kutje_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Characters/Player/Kutje.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill1.png", NME_assets_source_specific_level1_environment_background_bg1_hills_hill1_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill1.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill1.psd", NME_assets_source_specific_level1_environment_background_bg1_hills_hill1_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill1.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill2.png", NME_assets_source_specific_level1_environment_background_bg1_hills_hill2_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill2.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill2.psd", NME_assets_source_specific_level1_environment_background_bg1_hills_hill2_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill2.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill3.png", NME_assets_source_specific_level1_environment_background_bg1_hills_hill3_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill3.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill3.psd", NME_assets_source_specific_level1_environment_background_bg1_hills_hill3_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill3.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill4.png", NME_assets_source_specific_level1_environment_background_bg1_hills_hill4_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill4.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill4.psd", NME_assets_source_specific_level1_environment_background_bg1_hills_hill4_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG1/hills/hill4.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree1.png", NME_assets_source_specific_level1_environment_background_bg2_trees_tree1_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree1.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree1.psd", NME_assets_source_specific_level1_environment_background_bg2_trees_tree1_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree1.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree2.png", NME_assets_source_specific_level1_environment_background_bg2_trees_tree2_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree2.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree2.psd", NME_assets_source_specific_level1_environment_background_bg2_trees_tree2_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree2.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree3.png", NME_assets_source_specific_level1_environment_background_bg2_trees_tree3_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree3.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree3.psd", NME_assets_source_specific_level1_environment_background_bg2_trees_tree3_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree3.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree4.png", NME_assets_source_specific_level1_environment_background_bg2_trees_tree4_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree4.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree4.psd", NME_assets_source_specific_level1_environment_background_bg2_trees_tree4_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG2/trees/tree4.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree1.png", NME_assets_source_specific_level1_environment_background_bg3_trees_tree1_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree1.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree1.psd", NME_assets_source_specific_level1_environment_background_bg3_trees_tree1_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree1.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree10.png", NME_assets_source_specific_level1_environment_background_bg3_trees_tree10_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree10.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree10.psd", NME_assets_source_specific_level1_environment_background_bg3_trees_tree10_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree10.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree2.png", NME_assets_source_specific_level1_environment_background_bg3_trees_tree2_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree2.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree2.psd", NME_assets_source_specific_level1_environment_background_bg3_trees_tree2_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree2.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree3.png", NME_assets_source_specific_level1_environment_background_bg3_trees_tree3_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree3.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree3.psd", NME_assets_source_specific_level1_environment_background_bg3_trees_tree3_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree3.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree4.png", NME_assets_source_specific_level1_environment_background_bg3_trees_tree4_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree4.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree4.psd", NME_assets_source_specific_level1_environment_background_bg3_trees_tree4_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree4.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree5.png", NME_assets_source_specific_level1_environment_background_bg3_trees_tree5_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree5.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree5.psd", NME_assets_source_specific_level1_environment_background_bg3_trees_tree5_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree5.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree6.png", NME_assets_source_specific_level1_environment_background_bg3_trees_tree6_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree6.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree6.psd", NME_assets_source_specific_level1_environment_background_bg3_trees_tree6_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree6.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree7.png", NME_assets_source_specific_level1_environment_background_bg3_trees_tree7_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree7.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree7.psd", NME_assets_source_specific_level1_environment_background_bg3_trees_tree7_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree7.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree8.png", NME_assets_source_specific_level1_environment_background_bg3_trees_tree8_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree8.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree8.psd", NME_assets_source_specific_level1_environment_background_bg3_trees_tree8_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree8.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree9.png", NME_assets_source_specific_level1_environment_background_bg3_trees_tree9_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree9.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree9.psd", NME_assets_source_specific_level1_environment_background_bg3_trees_tree9_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG3/trees/tree9.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill1.png", NME_assets_source_specific_level1_environment_background_bg4_hills_hill1_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill1.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill1.psd", NME_assets_source_specific_level1_environment_background_bg4_hills_hill1_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill1.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill2.png", NME_assets_source_specific_level1_environment_background_bg4_hills_hill2_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill2.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill2.psd", NME_assets_source_specific_level1_environment_background_bg4_hills_hill2_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill2.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill3.png", NME_assets_source_specific_level1_environment_background_bg4_hills_hill3_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill3.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill3.psd", NME_assets_source_specific_level1_environment_background_bg4_hills_hill3_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/hills/hill3.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree1.png", NME_assets_source_specific_level1_environment_background_bg4_trees_tree1_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree1.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree1.psd", NME_assets_source_specific_level1_environment_background_bg4_trees_tree1_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree1.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree2.png", NME_assets_source_specific_level1_environment_background_bg4_trees_tree2_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree2.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree2.psd", NME_assets_source_specific_level1_environment_background_bg4_trees_tree2_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree2.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree3.png", NME_assets_source_specific_level1_environment_background_bg4_trees_tree3_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree3.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree3.psd", NME_assets_source_specific_level1_environment_background_bg4_trees_tree3_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree3.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree4.png", NME_assets_source_specific_level1_environment_background_bg4_trees_tree4_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree4.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree4.psd", NME_assets_source_specific_level1_environment_background_bg4_trees_tree4_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree4.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree5.png", NME_assets_source_specific_level1_environment_background_bg4_trees_tree5_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree5.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree5.psd", NME_assets_source_specific_level1_environment_background_bg4_trees_tree5_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree5.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree6.png", NME_assets_source_specific_level1_environment_background_bg4_trees_tree6_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree6.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree6.psd", NME_assets_source_specific_level1_environment_background_bg4_trees_tree6_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG4/trees/tree6.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree1.png", NME_assets_source_specific_level1_environment_background_bg5_trees_tree1_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree1.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree1.psd", NME_assets_source_specific_level1_environment_background_bg5_trees_tree1_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree1.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree2.png", NME_assets_source_specific_level1_environment_background_bg5_trees_tree2_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree2.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree2.psd", NME_assets_source_specific_level1_environment_background_bg5_trees_tree2_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree2.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree3.png", NME_assets_source_specific_level1_environment_background_bg5_trees_tree3_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree3.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree3.psd", NME_assets_source_specific_level1_environment_background_bg5_trees_tree3_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree3.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree4.png", NME_assets_source_specific_level1_environment_background_bg5_trees_tree4_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree4.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree4.psd", NME_assets_source_specific_level1_environment_background_bg5_trees_tree4_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree4.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree5.png", NME_assets_source_specific_level1_environment_background_bg5_trees_tree5_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree5.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree5.psd", NME_assets_source_specific_level1_environment_background_bg5_trees_tree5_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG5/trees/tree5.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG6/background.png", NME_assets_source_specific_level1_environment_background_bg6_background_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG6/background.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG6/background.psd", NME_assets_source_specific_level1_environment_background_bg6_background_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG6/background.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG6/background02.png", NME_assets_source_specific_level1_environment_background_bg6_background02_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG6/background02.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG6/star.png", NME_assets_source_specific_level1_environment_background_bg6_star_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG6/star.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG6/star.psd", NME_assets_source_specific_level1_environment_background_bg6_star_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG6/star.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG6/sun.png", NME_assets_source_specific_level1_environment_background_bg6_sun_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG6/sun.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/BG6/sun.psd", NME_assets_source_specific_level1_environment_background_bg6_sun_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/BG6/sun.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1.psd", NME_assets_source_specific_level1_environment_foreground_fg1_fg1_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_01.png", NME_assets_source_specific_level1_environment_foreground_fg1_fg1_01_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_01.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_02.png", NME_assets_source_specific_level1_environment_foreground_fg1_fg1_02_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_02.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_03.png", NME_assets_source_specific_level1_environment_foreground_fg1_fg1_03_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_03.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_04.png", NME_assets_source_specific_level1_environment_foreground_fg1_fg1_04_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_04.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_05.png", NME_assets_source_specific_level1_environment_foreground_fg1_fg1_05_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_05.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_06.png", NME_assets_source_specific_level1_environment_foreground_fg1_fg1_06_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_06.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_07.png", NME_assets_source_specific_level1_environment_foreground_fg1_fg1_07_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_07.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_08.png", NME_assets_source_specific_level1_environment_foreground_fg1_fg1_08_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG1/FG1_08.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree1.png", NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree1_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree1.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree1.psd", NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree1_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree1.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree2.png", NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree2_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree2.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree2.psd", NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree2_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree2.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree3.png", NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree3_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree3.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree3.psd", NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree3_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree3.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree4.png", NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree4_png);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree4.png", "image");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree4.psd", NME_assets_source_specific_level1_environment_foreground_fg2_trees_tree4_psd);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/FG2/trees/tree4.psd", "binary");
			resourceClasses.set ("assets/source/Specific/Level1/level_1-forrest-jesse.ai", NME_assets_source_specific_level1_level_1_forrest_jesse_ai);
			resourceTypes.set ("assets/source/Specific/Level1/level_1-forrest-jesse.ai", "text");
			resourceClasses.set ("assets/source/Specific/Level1/level_1-forrest-jesse.pdf", NME_assets_source_specific_level1_level_1_forrest_jesse_pdf);
			resourceTypes.set ("assets/source/Specific/Level1/level_1-forrest-jesse.pdf", "text");
			resourceClasses.set ("assets/source/Specific/Level1/Sound/Effects/empty.md", NME_assets_source_specific_level1_sound_effects_empty_md);
			resourceTypes.set ("assets/source/Specific/Level1/Sound/Effects/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level1/Sound/Music/empty.md", NME_assets_source_specific_level1_sound_music_empty_md);
			resourceTypes.set ("assets/source/Specific/Level1/Sound/Music/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level2/Enemies/empty.md", NME_assets_source_specific_level2_enemies_empty_md);
			resourceTypes.set ("assets/source/Specific/Level2/Enemies/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level2/Environment/Background/empty.md", NME_assets_source_specific_level2_environment_background_empty_md);
			resourceTypes.set ("assets/source/Specific/Level2/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level2/Environment/Foreground/empty.md", NME_assets_source_specific_level2_environment_foreground_empty_md);
			resourceTypes.set ("assets/source/Specific/Level2/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level2/Sound/Effects/empty.md", NME_assets_source_specific_level2_sound_effects_empty_md);
			resourceTypes.set ("assets/source/Specific/Level2/Sound/Effects/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level2/Sound/Music/empty.md", NME_assets_source_specific_level2_sound_music_empty_md);
			resourceTypes.set ("assets/source/Specific/Level2/Sound/Music/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level3/Enemies/empty.md", NME_assets_source_specific_level3_enemies_empty_md);
			resourceTypes.set ("assets/source/Specific/Level3/Enemies/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level3/Environment/Background/empty.md", NME_assets_source_specific_level3_environment_background_empty_md);
			resourceTypes.set ("assets/source/Specific/Level3/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level3/Environment/Foreground/empty.md", NME_assets_source_specific_level3_environment_foreground_empty_md);
			resourceTypes.set ("assets/source/Specific/Level3/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level3/Sound/Effects/empty.md", NME_assets_source_specific_level3_sound_effects_empty_md);
			resourceTypes.set ("assets/source/Specific/Level3/Sound/Effects/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level3/Sound/Music/empty.md", NME_assets_source_specific_level3_sound_music_empty_md);
			resourceTypes.set ("assets/source/Specific/Level3/Sound/Music/empty.md", "text");
			resourceClasses.set ("assets/source/walking.xml", NME_assets_source_walking_xml);
			resourceTypes.set ("assets/source/walking.xml", "text");
			resourceClasses.set ("assets/tablet-1x/General/Enemies/empty.md", NME_assets_tablet_1x_general_enemies_empty_md);
			resourceTypes.set ("assets/tablet-1x/General/Enemies/empty.md", "text");
			resourceClasses.set ("assets/tablet-1x/General/Environment/Background/empty.md", NME_assets_tablet_1x_general_environment_background_empty_md);
			resourceTypes.set ("assets/tablet-1x/General/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/tablet-1x/General/Environment/Foreground/empty.md", NME_assets_tablet_1x_general_environment_foreground_empty_md);
			resourceTypes.set ("assets/tablet-1x/General/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/tablet-1x/General/Worldmap/empty.md", NME_assets_tablet_1x_general_worldmap_empty_md);
			resourceTypes.set ("assets/tablet-1x/General/Worldmap/empty.md", "text");
			resourceClasses.set ("assets/tablet-1x/Specific/Level1/Enemies/empty.md", NME_assets_tablet_1x_specific_level1_enemies_empty_md);
			resourceTypes.set ("assets/tablet-1x/Specific/Level1/Enemies/empty.md", "text");
			resourceClasses.set ("assets/tablet-1x/Specific/Level1/Environment/Background/empty.md", NME_assets_tablet_1x_specific_level1_environment_background_empty_md);
			resourceTypes.set ("assets/tablet-1x/Specific/Level1/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/tablet-1x/Specific/Level1/Environment/Foreground/empty.md", NME_assets_tablet_1x_specific_level1_environment_foreground_empty_md);
			resourceTypes.set ("assets/tablet-1x/Specific/Level1/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/tablet-1x/Specific/Level2/Enemies/empty.md", NME_assets_tablet_1x_specific_level2_enemies_empty_md);
			resourceTypes.set ("assets/tablet-1x/Specific/Level2/Enemies/empty.md", "text");
			resourceClasses.set ("assets/tablet-1x/Specific/Level2/Environment/Background/empty.md", NME_assets_tablet_1x_specific_level2_environment_background_empty_md);
			resourceTypes.set ("assets/tablet-1x/Specific/Level2/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/tablet-1x/Specific/Level2/Environment/Foreground/empty.md", NME_assets_tablet_1x_specific_level2_environment_foreground_empty_md);
			resourceTypes.set ("assets/tablet-1x/Specific/Level2/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/tablet-1x/Specific/Level3/Enemies/empty.md", NME_assets_tablet_1x_specific_level3_enemies_empty_md);
			resourceTypes.set ("assets/tablet-1x/Specific/Level3/Enemies/empty.md", "text");
			resourceClasses.set ("assets/tablet-1x/Specific/Level3/Environment/Background/empty.md", NME_assets_tablet_1x_specific_level3_environment_background_empty_md);
			resourceTypes.set ("assets/tablet-1x/Specific/Level3/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/tablet-1x/Specific/Level3/Environment/Foreground/empty.md", NME_assets_tablet_1x_specific_level3_environment_foreground_empty_md);
			resourceTypes.set ("assets/tablet-1x/Specific/Level3/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/General/Enemies/empty.md", NME_assets_tablet_2x_general_enemies_empty_md);
			resourceTypes.set ("assets/tablet-2x/General/Enemies/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/General/Environment/Background/empty.md", NME_assets_tablet_2x_general_environment_background_empty_md);
			resourceTypes.set ("assets/tablet-2x/General/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/General/Environment/Foreground/empty.md", NME_assets_tablet_2x_general_environment_foreground_empty_md);
			resourceTypes.set ("assets/tablet-2x/General/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/General/Worldmap/empty.md", NME_assets_tablet_2x_general_worldmap_empty_md);
			resourceTypes.set ("assets/tablet-2x/General/Worldmap/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/Specific/Level1/Enemies/empty.md", NME_assets_tablet_2x_specific_level1_enemies_empty_md);
			resourceTypes.set ("assets/tablet-2x/Specific/Level1/Enemies/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/Specific/Level1/Environment/Background/empty.md", NME_assets_tablet_2x_specific_level1_environment_background_empty_md);
			resourceTypes.set ("assets/tablet-2x/Specific/Level1/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md", NME_assets_tablet_2x_specific_level1_environment_foreground_empty_md);
			resourceTypes.set ("assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/Specific/Level2/Enemies/empty.md", NME_assets_tablet_2x_specific_level2_enemies_empty_md);
			resourceTypes.set ("assets/tablet-2x/Specific/Level2/Enemies/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/Specific/Level2/Environment/Background/empty.md", NME_assets_tablet_2x_specific_level2_environment_background_empty_md);
			resourceTypes.set ("assets/tablet-2x/Specific/Level2/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md", NME_assets_tablet_2x_specific_level2_environment_foreground_empty_md);
			resourceTypes.set ("assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/Specific/Level3/Enemies/empty.md", NME_assets_tablet_2x_specific_level3_enemies_empty_md);
			resourceTypes.set ("assets/tablet-2x/Specific/Level3/Enemies/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/Specific/Level3/Environment/Background/empty.md", NME_assets_tablet_2x_specific_level3_environment_background_empty_md);
			resourceTypes.set ("assets/tablet-2x/Specific/Level3/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md", NME_assets_tablet_2x_specific_level3_environment_foreground_empty_md);
			resourceTypes.set ("assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/xml/bg.xml", NME_assets_xml_bg_xml);
			resourceTypes.set ("assets/xml/bg.xml", "text");
			resourceClasses.set ("assets/xml/bg2.xml", NME_assets_xml_bg2_xml);
			resourceTypes.set ("assets/xml/bg2.xml", "text");
			resourceClasses.set ("assets/xml/settings.xml", NME_assets_xml_settings_xml);
			resourceTypes.set ("assets/xml/settings.xml", "text");
			resourceClasses.set ("assets/xml/Specific/Level1/bg.xml", NME_assets_xml_specific_level1_bg_xml);
			resourceTypes.set ("assets/xml/Specific/Level1/bg.xml", "text");
			resourceClasses.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_1.xml", NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_1_xml);
			resourceTypes.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_1.xml", "text");
			resourceClasses.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_2.xml", NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_2_xml);
			resourceTypes.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_2.xml", "text");
			resourceClasses.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_3.xml", NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_3_xml);
			resourceTypes.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_3.xml", "text");
			resourceClasses.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_4.xml", NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_4_xml);
			resourceTypes.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_4.xml", "text");
			resourceClasses.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_5.xml", NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_5_xml);
			resourceTypes.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_5.xml", "text");
			resourceClasses.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_6.xml", NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_6_xml);
			resourceTypes.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_6.xml", "text");
			resourceClasses.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_7.xml", NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_7_xml);
			resourceTypes.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_7.xml", "text");
			resourceClasses.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_8.xml", NME_assets_xml_specific_level1_environment_foreground_fg1_fg1_8_xml);
			resourceTypes.set ("assets/xml/Specific/Level1/Environment/Foreground/FG1/fg1_8.xml", "text");
			resourceClasses.set ("assets/xml/test.xml", NME_assets_xml_test_xml);
			resourceTypes.set ("assets/xml/test.xml", "text");
			resourceClasses.set ("assets/xml/test2.xml", NME_assets_xml_test2_xml);
			resourceTypes.set ("assets/xml/test2.xml", "text");
			resourceClasses.set ("assets/xml/walking.xml", NME_assets_xml_walking_xml);
			resourceTypes.set ("assets/xml/walking.xml", "text");
			
			
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