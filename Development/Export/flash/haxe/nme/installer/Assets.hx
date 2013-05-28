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
			
			resourceClasses.set ("assets/mobile-1x/General/Enemies/empty.md", NME_assets_mobile_1x_general_enemies_empty_md);
			resourceTypes.set ("assets/mobile-1x/General/Enemies/empty.md", "text");
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
			resourceClasses.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/empty.md", NME_assets_mobile_1x_specific_level1_environment_foreground_empty_md);
			resourceTypes.set ("assets/mobile-1x/Specific/Level1/Environment/Foreground/empty.md", "text");
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
			resourceClasses.set ("assets/source/General/Enemies/empty.md", NME_assets_source_general_enemies_empty_md);
			resourceTypes.set ("assets/source/General/Enemies/empty.md", "text");
			resourceClasses.set ("assets/source/General/Environment/Background/empty.md", NME_assets_source_general_environment_background_empty_md);
			resourceTypes.set ("assets/source/General/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/source/General/Environment/Foreground/empty.md", NME_assets_source_general_environment_foreground_empty_md);
			resourceTypes.set ("assets/source/General/Environment/Foreground/empty.md", "text");
			resourceClasses.set ("assets/source/General/Sound/Effects/empty.md", NME_assets_source_general_sound_effects_empty_md);
			resourceTypes.set ("assets/source/General/Sound/Effects/empty.md", "text");
			resourceClasses.set ("assets/source/General/Sound/Music/empty.md", NME_assets_source_general_sound_music_empty_md);
			resourceTypes.set ("assets/source/General/Sound/Music/empty.md", "text");
			resourceClasses.set ("assets/source/General/Worldmap/empty.md", NME_assets_source_general_worldmap_empty_md);
			resourceTypes.set ("assets/source/General/Worldmap/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level1/Enemies/empty.md", NME_assets_source_specific_level1_enemies_empty_md);
			resourceTypes.set ("assets/source/Specific/Level1/Enemies/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Background/empty.md", NME_assets_source_specific_level1_environment_background_empty_md);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Background/empty.md", "text");
			resourceClasses.set ("assets/source/Specific/Level1/Environment/Foreground/empty.md", NME_assets_source_specific_level1_environment_foreground_empty_md);
			resourceTypes.set ("assets/source/Specific/Level1/Environment/Foreground/empty.md", "text");
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
			resourceClasses.set ("assets/source/test.xml", NME_assets_source_test_xml);
			resourceTypes.set ("assets/source/test.xml", "text");
			resourceClasses.set ("assets/source/test2.xml", NME_assets_source_test2_xml);
			resourceTypes.set ("assets/source/test2.xml", "text");
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