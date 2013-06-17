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
			
			resourceClasses.set ("assets/mobile-1x/General/bg/empty.md", NME_assets_mobile_1x_general_bg_empty_md);
			resourceTypes.set ("assets/mobile-1x/General/bg/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/General/characters/walking-sparrow.xml", NME_assets_mobile_1x_general_characters_walking_sparrow_xml);
			resourceTypes.set ("assets/mobile-1x/General/characters/walking-sparrow.xml", "text");
			resourceClasses.set ("assets/mobile-1x/General/characters/walking.png", NME_assets_mobile_1x_general_characters_walking_png);
			resourceTypes.set ("assets/mobile-1x/General/characters/walking.png", "image");
			resourceClasses.set ("assets/mobile-1x/General/fg/empty.md", NME_assets_mobile_1x_general_fg_empty_md);
			resourceTypes.set ("assets/mobile-1x/General/fg/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/General/gui/button.png", NME_assets_mobile_1x_general_gui_button_png);
			resourceTypes.set ("assets/mobile-1x/General/gui/button.png", "image");
			resourceClasses.set ("assets/mobile-1x/General/gui/button2.png", NME_assets_mobile_1x_general_gui_button2_png);
			resourceTypes.set ("assets/mobile-1x/General/gui/button2.png", "image");
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
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/bg/l1/empty.md", NME_assets_mobile_1x_world1_lvl1_bg_l1_empty_md);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/l1/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/bg/l2/empty.md", NME_assets_mobile_1x_world1_lvl1_bg_l2_empty_md);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/l2/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/bg/l3/empty.md", NME_assets_mobile_1x_world1_lvl1_bg_l3_empty_md);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/l3/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/bg/l4/empty.md", NME_assets_mobile_1x_world1_lvl1_bg_l4_empty_md);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/l4/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/bg/l5/empty.md", NME_assets_mobile_1x_world1_lvl1_bg_l5_empty_md);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/l5/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/bg/l6/empty.md", NME_assets_mobile_1x_world1_lvl1_bg_l6_empty_md);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/bg/l6/empty.md", "text");
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l1/FG1.psd", NME_assets_mobile_1x_world1_lvl1_fg_l1_fg1_psd);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l1/FG1.psd", "binary");
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
			resourceClasses.set ("assets/mobile-1x/world1/lvl1/fg/l2/empty.md", NME_assets_mobile_1x_world1_lvl1_fg_l2_empty_md);
			resourceTypes.set ("assets/mobile-1x/world1/lvl1/fg/l2/empty.md", "text");
			resourceClasses.set ("assets/source/button.png", NME_assets_source_button_png);
			resourceTypes.set ("assets/source/button.png", "image");
			resourceClasses.set ("assets/source/button2.png", NME_assets_source_button2_png);
			resourceTypes.set ("assets/source/button2.png", "image");
			resourceClasses.set ("assets/source/General/bg/empty.md", NME_assets_source_general_bg_empty_md);
			resourceTypes.set ("assets/source/General/bg/empty.md", "text");
			resourceClasses.set ("assets/source/General/characters/walking-sparrow.xml", NME_assets_source_general_characters_walking_sparrow_xml);
			resourceTypes.set ("assets/source/General/characters/walking-sparrow.xml", "text");
			resourceClasses.set ("assets/source/General/characters/walking.png", NME_assets_source_general_characters_walking_png);
			resourceTypes.set ("assets/source/General/characters/walking.png", "image");
			resourceClasses.set ("assets/source/General/fg/empty.md", NME_assets_source_general_fg_empty_md);
			resourceTypes.set ("assets/source/General/fg/empty.md", "text");
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
			resourceClasses.set ("assets/source/world1/lvl1/bg/l1/empty.md", NME_assets_source_world1_lvl1_bg_l1_empty_md);
			resourceTypes.set ("assets/source/world1/lvl1/bg/l1/empty.md", "text");
			resourceClasses.set ("assets/source/world1/lvl1/bg/l2/empty.md", NME_assets_source_world1_lvl1_bg_l2_empty_md);
			resourceTypes.set ("assets/source/world1/lvl1/bg/l2/empty.md", "text");
			resourceClasses.set ("assets/source/world1/lvl1/bg/l3/empty.md", NME_assets_source_world1_lvl1_bg_l3_empty_md);
			resourceTypes.set ("assets/source/world1/lvl1/bg/l3/empty.md", "text");
			resourceClasses.set ("assets/source/world1/lvl1/bg/l4/empty.md", NME_assets_source_world1_lvl1_bg_l4_empty_md);
			resourceTypes.set ("assets/source/world1/lvl1/bg/l4/empty.md", "text");
			resourceClasses.set ("assets/source/world1/lvl1/bg/l5/empty.md", NME_assets_source_world1_lvl1_bg_l5_empty_md);
			resourceTypes.set ("assets/source/world1/lvl1/bg/l5/empty.md", "text");
			resourceClasses.set ("assets/source/world1/lvl1/bg/l6/empty.md", NME_assets_source_world1_lvl1_bg_l6_empty_md);
			resourceTypes.set ("assets/source/world1/lvl1/bg/l6/empty.md", "text");
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
			resourceClasses.set ("assets/source/world1/lvl1/fg/l2/empty.md", NME_assets_source_world1_lvl1_fg_l2_empty_md);
			resourceTypes.set ("assets/source/world1/lvl1/fg/l2/empty.md", "text");
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