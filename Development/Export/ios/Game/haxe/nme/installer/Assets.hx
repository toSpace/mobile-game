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
			
			resourceNames.set ("assets/mobile-1x/button.png", "assets_mobile_1x_button_png");
			resourceTypes.set ("assets/mobile-1x/button.png", "image");
			resourceNames.set ("assets/mobile-1x/button2.png", "assets_mobile_1x_button2_png");
			resourceTypes.set ("assets/mobile-1x/button2.png", "image");
			resourceNames.set ("assets/mobile-1x/General/Enemies/walking-sparrow.xml", "assets_mobile_1x_general_enemies_walking_sparrow_xml");
			resourceTypes.set ("assets/mobile-1x/General/Enemies/walking-sparrow.xml", "text");
			resourceNames.set ("assets/mobile-1x/General/Enemies/walking.png", "assets_mobile_1x_general_enemies_walking_png");
			resourceTypes.set ("assets/mobile-1x/General/Enemies/walking.png", "image");
			resourceNames.set ("assets/mobile-1x/General/Environment/Background/empty.md", "assets_mobile_1x_general_environment_background_empty_md");
			resourceTypes.set ("assets/mobile-1x/General/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/General/Environment/Foreground/empty.md", "assets_mobile_1x_general_environment_foreground_empty_md");
			resourceTypes.set ("assets/mobile-1x/General/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/General/Worldmap/empty.md", "assets_mobile_1x_general_worldmap_empty_md");
			resourceTypes.set ("assets/mobile-1x/General/Worldmap/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/Specific/Level1/Enemies/empty.md", "assets_mobile_1x_specific_level1_enemies_empty_md");
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Enemies/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/Specific/Level1/Environment/Background/empty.md", "assets_mobile_1x_specific_level1_environment_background_empty_md");
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/empty.md", "assets_mobile_1x_specific_level1_environment_foreground_empty_md");
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/Specific/Level2/Enemies/empty.md", "assets_mobile_1x_specific_level2_enemies_empty_md");
			resourceTypes.set ("assets/mobile-1x/Specific/Level2/Enemies/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/Specific/Level2/Environment/Background/empty.md", "assets_mobile_1x_specific_level2_environment_background_empty_md");
			resourceTypes.set ("assets/mobile-1x/Specific/Level2/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md", "assets_mobile_1x_specific_level2_environment_foreground_empty_md");
			resourceTypes.set ("assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/Specific/Level3/Enemies/empty.md", "assets_mobile_1x_specific_level3_enemies_empty_md");
			resourceTypes.set ("assets/mobile-1x/Specific/Level3/Enemies/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/Specific/Level3/Environment/Background/empty.md", "assets_mobile_1x_specific_level3_environment_background_empty_md");
			resourceTypes.set ("assets/mobile-1x/Specific/Level3/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md", "assets_mobile_1x_specific_level3_environment_foreground_empty_md");
			resourceTypes.set ("assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md", "text");
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
			resourceNames.set ("assets/mobile-2x/button.png", "assets_mobile_2x_button_png");
			resourceTypes.set ("assets/mobile-2x/button.png", "image");
			resourceNames.set ("assets/mobile-2x/button2.png", "assets_mobile_2x_button2_png");
			resourceTypes.set ("assets/mobile-2x/button2.png", "image");
			resourceNames.set ("assets/mobile-2x/General/Enemies/empty.md", "assets_mobile_2x_general_enemies_empty_md");
			resourceTypes.set ("assets/mobile-2x/General/Enemies/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/General/Environment/Background/empty.md", "assets_mobile_2x_general_environment_background_empty_md");
			resourceTypes.set ("assets/mobile-2x/General/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/General/Environment/Foreground/empty.md", "assets_mobile_2x_general_environment_foreground_empty_md");
			resourceTypes.set ("assets/mobile-2x/General/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/General/Worldmap/empty.md", "assets_mobile_2x_general_worldmap_empty_md");
			resourceTypes.set ("assets/mobile-2x/General/Worldmap/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/Specific/Level1/Enemies/empty.md", "assets_mobile_2x_specific_level1_enemies_empty_md");
			resourceTypes.set ("assets/mobile-2x/Specific/Level1/Enemies/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/Specific/Level1/Environment/Background/empty.md", "assets_mobile_2x_specific_level1_environment_background_empty_md");
			resourceTypes.set ("assets/mobile-2x/Specific/Level1/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md", "assets_mobile_2x_specific_level1_environment_foreground_empty_md");
			resourceTypes.set ("assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/Specific/Level2/Enemies/empty.md", "assets_mobile_2x_specific_level2_enemies_empty_md");
			resourceTypes.set ("assets/mobile-2x/Specific/Level2/Enemies/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/Specific/Level2/Environment/Background/empty.md", "assets_mobile_2x_specific_level2_environment_background_empty_md");
			resourceTypes.set ("assets/mobile-2x/Specific/Level2/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md", "assets_mobile_2x_specific_level2_environment_foreground_empty_md");
			resourceTypes.set ("assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/Specific/Level3/Enemies/empty.md", "assets_mobile_2x_specific_level3_enemies_empty_md");
			resourceTypes.set ("assets/mobile-2x/Specific/Level3/Enemies/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/Specific/Level3/Environment/Background/empty.md", "assets_mobile_2x_specific_level3_environment_background_empty_md");
			resourceTypes.set ("assets/mobile-2x/Specific/Level3/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md", "assets_mobile_2x_specific_level3_environment_foreground_empty_md");
			resourceTypes.set ("assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/mobile-2x/test1.png", "assets_mobile_2x_test1_png");
			resourceTypes.set ("assets/mobile-2x/test1.png", "image");
			resourceNames.set ("assets/mobile-2x/test2.png", "assets_mobile_2x_test2_png");
			resourceTypes.set ("assets/mobile-2x/test2.png", "image");
			resourceNames.set ("assets/mobile-2x/test3bg.png", "assets_mobile_2x_test3bg_png");
			resourceTypes.set ("assets/mobile-2x/test3bg.png", "image");
			resourceNames.set ("assets/mobile-2x/walking-sparrow.xml", "assets_mobile_2x_walking_sparrow_xml");
			resourceTypes.set ("assets/mobile-2x/walking-sparrow.xml", "text");
			resourceNames.set ("assets/mobile-2x/walking.png", "assets_mobile_2x_walking_png");
			resourceTypes.set ("assets/mobile-2x/walking.png", "image");
			resourceNames.set ("assets/source/General/Enemies/walking.xml", "assets_source_general_enemies_walking_xml");
			resourceTypes.set ("assets/source/General/Enemies/walking.xml", "text");
			resourceNames.set ("assets/source/General/Environment/Background/empty.md", "assets_source_general_environment_background_empty_md");
			resourceTypes.set ("assets/source/General/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/source/General/Environment/Foreground/empty.md", "assets_source_general_environment_foreground_empty_md");
			resourceTypes.set ("assets/source/General/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/source/General/Sound/Effects/empty.md", "assets_source_general_sound_effects_empty_md");
			resourceTypes.set ("assets/source/General/Sound/Effects/empty.md", "text");
			resourceNames.set ("assets/source/General/Sound/Music/empty.md", "assets_source_general_sound_music_empty_md");
			resourceTypes.set ("assets/source/General/Sound/Music/empty.md", "text");
			resourceNames.set ("assets/source/General/Worldmap/empty.md", "assets_source_general_worldmap_empty_md");
			resourceTypes.set ("assets/source/General/Worldmap/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level1/Enemies/empty.md", "assets_source_specific_level1_enemies_empty_md");
			resourceTypes.set ("assets/source/Specific/Level1/Enemies/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level1/Environment/Background/empty.md", "assets_source_specific_level1_environment_background_empty_md");
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level1/Environment/Foreground/empty.md", "assets_source_specific_level1_environment_foreground_empty_md");
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level1/Sound/Effects/empty.md", "assets_source_specific_level1_sound_effects_empty_md");
			resourceTypes.set ("assets/source/Specific/Level1/Sound/Effects/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level1/Sound/Music/empty.md", "assets_source_specific_level1_sound_music_empty_md");
			resourceTypes.set ("assets/source/Specific/Level1/Sound/Music/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level2/Enemies/empty.md", "assets_source_specific_level2_enemies_empty_md");
			resourceTypes.set ("assets/source/Specific/Level2/Enemies/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level2/Environment/Background/empty.md", "assets_source_specific_level2_environment_background_empty_md");
			resourceTypes.set ("assets/source/Specific/Level2/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level2/Environment/Foreground/empty.md", "assets_source_specific_level2_environment_foreground_empty_md");
			resourceTypes.set ("assets/source/Specific/Level2/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level2/Sound/Effects/empty.md", "assets_source_specific_level2_sound_effects_empty_md");
			resourceTypes.set ("assets/source/Specific/Level2/Sound/Effects/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level2/Sound/Music/empty.md", "assets_source_specific_level2_sound_music_empty_md");
			resourceTypes.set ("assets/source/Specific/Level2/Sound/Music/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level3/Enemies/empty.md", "assets_source_specific_level3_enemies_empty_md");
			resourceTypes.set ("assets/source/Specific/Level3/Enemies/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level3/Environment/Background/empty.md", "assets_source_specific_level3_environment_background_empty_md");
			resourceTypes.set ("assets/source/Specific/Level3/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level3/Environment/Foreground/empty.md", "assets_source_specific_level3_environment_foreground_empty_md");
			resourceTypes.set ("assets/source/Specific/Level3/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level3/Sound/Effects/empty.md", "assets_source_specific_level3_sound_effects_empty_md");
			resourceTypes.set ("assets/source/Specific/Level3/Sound/Effects/empty.md", "text");
			resourceNames.set ("assets/source/Specific/Level3/Sound/Music/empty.md", "assets_source_specific_level3_sound_music_empty_md");
			resourceTypes.set ("assets/source/Specific/Level3/Sound/Music/empty.md", "text");
			resourceNames.set ("assets/source/walking.xml", "assets_source_walking_xml");
			resourceTypes.set ("assets/source/walking.xml", "text");
			resourceNames.set ("assets/tablet-1x/General/Enemies/empty.md", "assets_tablet_1x_general_enemies_empty_md");
			resourceTypes.set ("assets/tablet-1x/General/Enemies/empty.md", "text");
			resourceNames.set ("assets/tablet-1x/General/Environment/Background/empty.md", "assets_tablet_1x_general_environment_background_empty_md");
			resourceTypes.set ("assets/tablet-1x/General/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/tablet-1x/General/Environment/Foreground/empty.md", "assets_tablet_1x_general_environment_foreground_empty_md");
			resourceTypes.set ("assets/tablet-1x/General/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/tablet-1x/General/Worldmap/empty.md", "assets_tablet_1x_general_worldmap_empty_md");
			resourceTypes.set ("assets/tablet-1x/General/Worldmap/empty.md", "text");
			resourceNames.set ("assets/tablet-1x/Specific/Level1/Enemies/empty.md", "assets_tablet_1x_specific_level1_enemies_empty_md");
			resourceTypes.set ("assets/tablet-1x/Specific/Level1/Enemies/empty.md", "text");
			resourceNames.set ("assets/tablet-1x/Specific/Level1/Environment/Background/empty.md", "assets_tablet_1x_specific_level1_environment_background_empty_md");
			resourceTypes.set ("assets/tablet-1x/Specific/Level1/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/tablet-1x/Specific/Level1/Environment/Foreground/empty.md", "assets_tablet_1x_specific_level1_environment_foreground_empty_md");
			resourceTypes.set ("assets/tablet-1x/Specific/Level1/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/tablet-1x/Specific/Level2/Enemies/empty.md", "assets_tablet_1x_specific_level2_enemies_empty_md");
			resourceTypes.set ("assets/tablet-1x/Specific/Level2/Enemies/empty.md", "text");
			resourceNames.set ("assets/tablet-1x/Specific/Level2/Environment/Background/empty.md", "assets_tablet_1x_specific_level2_environment_background_empty_md");
			resourceTypes.set ("assets/tablet-1x/Specific/Level2/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/tablet-1x/Specific/Level2/Environment/Foreground/empty.md", "assets_tablet_1x_specific_level2_environment_foreground_empty_md");
			resourceTypes.set ("assets/tablet-1x/Specific/Level2/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/tablet-1x/Specific/Level3/Enemies/empty.md", "assets_tablet_1x_specific_level3_enemies_empty_md");
			resourceTypes.set ("assets/tablet-1x/Specific/Level3/Enemies/empty.md", "text");
			resourceNames.set ("assets/tablet-1x/Specific/Level3/Environment/Background/empty.md", "assets_tablet_1x_specific_level3_environment_background_empty_md");
			resourceTypes.set ("assets/tablet-1x/Specific/Level3/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/tablet-1x/Specific/Level3/Environment/Foreground/empty.md", "assets_tablet_1x_specific_level3_environment_foreground_empty_md");
			resourceTypes.set ("assets/tablet-1x/Specific/Level3/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/General/Enemies/empty.md", "assets_tablet_2x_general_enemies_empty_md");
			resourceTypes.set ("assets/tablet-2x/General/Enemies/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/General/Environment/Background/empty.md", "assets_tablet_2x_general_environment_background_empty_md");
			resourceTypes.set ("assets/tablet-2x/General/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/General/Environment/Foreground/empty.md", "assets_tablet_2x_general_environment_foreground_empty_md");
			resourceTypes.set ("assets/tablet-2x/General/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/General/Worldmap/empty.md", "assets_tablet_2x_general_worldmap_empty_md");
			resourceTypes.set ("assets/tablet-2x/General/Worldmap/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/Specific/Level1/Enemies/empty.md", "assets_tablet_2x_specific_level1_enemies_empty_md");
			resourceTypes.set ("assets/tablet-2x/Specific/Level1/Enemies/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/Specific/Level1/Environment/Background/empty.md", "assets_tablet_2x_specific_level1_environment_background_empty_md");
			resourceTypes.set ("assets/tablet-2x/Specific/Level1/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md", "assets_tablet_2x_specific_level1_environment_foreground_empty_md");
			resourceTypes.set ("assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/Specific/Level2/Enemies/empty.md", "assets_tablet_2x_specific_level2_enemies_empty_md");
			resourceTypes.set ("assets/tablet-2x/Specific/Level2/Enemies/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/Specific/Level2/Environment/Background/empty.md", "assets_tablet_2x_specific_level2_environment_background_empty_md");
			resourceTypes.set ("assets/tablet-2x/Specific/Level2/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md", "assets_tablet_2x_specific_level2_environment_foreground_empty_md");
			resourceTypes.set ("assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/Specific/Level3/Enemies/empty.md", "assets_tablet_2x_specific_level3_enemies_empty_md");
			resourceTypes.set ("assets/tablet-2x/Specific/Level3/Enemies/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/Specific/Level3/Environment/Background/empty.md", "assets_tablet_2x_specific_level3_environment_background_empty_md");
			resourceTypes.set ("assets/tablet-2x/Specific/Level3/Environment/Background/empty.md", "text");
			resourceNames.set ("assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md", "assets_tablet_2x_specific_level3_environment_foreground_empty_md");
			resourceTypes.set ("assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md", "text");
			resourceNames.set ("assets/xml/bg.xml", "assets_xml_bg_xml");
			resourceTypes.set ("assets/xml/bg.xml", "text");
			resourceNames.set ("assets/xml/settings.xml", "assets_xml_settings_xml");
			resourceTypes.set ("assets/xml/settings.xml", "text");
			resourceNames.set ("assets/xml/test.xml", "assets_xml_test_xml");
			resourceTypes.set ("assets/xml/test.xml", "text");
			resourceNames.set ("assets/xml/test2.xml", "assets_xml_test2_xml");
			resourceTypes.set ("assets/xml/test2.xml", "text");
			resourceNames.set ("assets/xml/walking.xml", "assets_xml_walking_xml");
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
