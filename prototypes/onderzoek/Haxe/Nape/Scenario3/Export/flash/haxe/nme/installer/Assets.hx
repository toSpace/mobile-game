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
			
			resourceClasses.set ("assets/8ball.png", NME_assets_8ball_png);
			resourceTypes.set ("assets/8ball.png", "image");
			resourceClasses.set ("assets/banaan.png", NME_assets_banaan_png);
			resourceTypes.set ("assets/banaan.png", "image");
			resourceClasses.set ("assets/bier.png", NME_assets_bier_png);
			resourceTypes.set ("assets/bier.png", "image");
			resourceClasses.set ("assets/font.ttf", NME_assets_font_ttf);
			resourceTypes.set ("assets/font.ttf", "font");
			resourceClasses.set ("assets/greenleaf.png", NME_assets_greenleaf_png);
			resourceTypes.set ("assets/greenleaf.png", "image");
			resourceClasses.set ("assets/physicsassets.pes", NME_assets_physicsassets_pes);
			resourceTypes.set ("assets/physicsassets.pes", "binary");
			resourceClasses.set ("assets/pikachu.png", NME_assets_pikachu_png);
			resourceTypes.set ("assets/pikachu.png", "image");
			resourceClasses.set ("assets/redleaf.png", NME_assets_redleaf_png);
			resourceTypes.set ("assets/redleaf.png", "image");
			resourceClasses.set ("assets/rugby.png", NME_assets_rugby_png);
			resourceTypes.set ("assets/rugby.png", "image");
			resourceClasses.set ("assets/sprites/lopen_klein.png", NME_assets_sprites_lopen_klein_png);
			resourceTypes.set ("assets/sprites/lopen_klein.png", "image");
			resourceClasses.set ("assets/sprites/los/idle.png", NME_assets_sprites_los_idle_png);
			resourceTypes.set ("assets/sprites/los/idle.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00000.png", NME_assets_sprites_los_jump_jump00000_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00000.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00001.png", NME_assets_sprites_los_jump_jump00001_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00001.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00002.png", NME_assets_sprites_los_jump_jump00002_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00002.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00003.png", NME_assets_sprites_los_jump_jump00003_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00003.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00004.png", NME_assets_sprites_los_jump_jump00004_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00004.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00005.png", NME_assets_sprites_los_jump_jump00005_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00005.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00006.png", NME_assets_sprites_los_jump_jump00006_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00006.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00007.png", NME_assets_sprites_los_jump_jump00007_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00007.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00008.png", NME_assets_sprites_los_jump_jump00008_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00008.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00009.png", NME_assets_sprites_los_jump_jump00009_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00009.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00010.png", NME_assets_sprites_los_jump_jump00010_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00010.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00011.png", NME_assets_sprites_los_jump_jump00011_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00011.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00012.png", NME_assets_sprites_los_jump_jump00012_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00012.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00013.png", NME_assets_sprites_los_jump_jump00013_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00013.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00014.png", NME_assets_sprites_los_jump_jump00014_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00014.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00015.png", NME_assets_sprites_los_jump_jump00015_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00015.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00016.png", NME_assets_sprites_los_jump_jump00016_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00016.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00017.png", NME_assets_sprites_los_jump_jump00017_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00017.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00018.png", NME_assets_sprites_los_jump_jump00018_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00018.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00019.png", NME_assets_sprites_los_jump_jump00019_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00019.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00020.png", NME_assets_sprites_los_jump_jump00020_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00020.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00021.png", NME_assets_sprites_los_jump_jump00021_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00021.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00022.png", NME_assets_sprites_los_jump_jump00022_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00022.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00023.png", NME_assets_sprites_los_jump_jump00023_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00023.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00024.png", NME_assets_sprites_los_jump_jump00024_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00024.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00025.png", NME_assets_sprites_los_jump_jump00025_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00025.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00026.png", NME_assets_sprites_los_jump_jump00026_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00026.png", "image");
			resourceClasses.set ("assets/sprites/los/jump/jump00027.png", NME_assets_sprites_los_jump_jump00027_png);
			resourceTypes.set ("assets/sprites/los/jump/jump00027.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00010.png", NME_assets_sprites_los_walk_walk00010_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00010.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00011.png", NME_assets_sprites_los_walk_walk00011_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00011.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00012.png", NME_assets_sprites_los_walk_walk00012_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00012.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00013.png", NME_assets_sprites_los_walk_walk00013_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00013.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00014.png", NME_assets_sprites_los_walk_walk00014_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00014.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00015.png", NME_assets_sprites_los_walk_walk00015_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00015.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00016.png", NME_assets_sprites_los_walk_walk00016_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00016.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00017.png", NME_assets_sprites_los_walk_walk00017_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00017.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00018.png", NME_assets_sprites_los_walk_walk00018_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00018.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00019.png", NME_assets_sprites_los_walk_walk00019_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00019.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00020.png", NME_assets_sprites_los_walk_walk00020_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00020.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00021.png", NME_assets_sprites_los_walk_walk00021_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00021.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00022.png", NME_assets_sprites_los_walk_walk00022_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00022.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00023.png", NME_assets_sprites_los_walk_walk00023_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00023.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00024.png", NME_assets_sprites_los_walk_walk00024_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00024.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00025.png", NME_assets_sprites_los_walk_walk00025_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00025.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00026.png", NME_assets_sprites_los_walk_walk00026_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00026.png", "image");
			resourceClasses.set ("assets/sprites/los/walk/walk00027.png", NME_assets_sprites_los_walk_walk00027_png);
			resourceTypes.set ("assets/sprites/los/walk/walk00027.png", "image");
			resourceClasses.set ("assets/sprites/SPRITE.png", NME_assets_sprites_sprite_png);
			resourceTypes.set ("assets/sprites/SPRITE.png", "image");
			resourceClasses.set ("assets/sprites/SPRITE.xml", NME_assets_sprites_sprite_xml);
			resourceTypes.set ("assets/sprites/SPRITE.xml", "text");
			resourceClasses.set ("assets/sprites/TP-file.png", NME_assets_sprites_tp_file_png);
			resourceTypes.set ("assets/sprites/TP-file.png", "image");
			resourceClasses.set ("assets/sprites/TP-file.tps", NME_assets_sprites_tp_file_tps);
			resourceTypes.set ("assets/sprites/TP-file.tps", "text");
			resourceClasses.set ("assets/sprites/TP-file.xml", NME_assets_sprites_tp_file_xml);
			resourceTypes.set ("assets/sprites/TP-file.xml", "text");
			resourceClasses.set ("assets/sprites/TP-file2.png", NME_assets_sprites_tp_file2_png);
			resourceTypes.set ("assets/sprites/TP-file2.png", "image");
			resourceClasses.set ("assets/sprites/TP-file2.tps", NME_assets_sprites_tp_file2_tps);
			resourceTypes.set ("assets/sprites/TP-file2.tps", "text");
			resourceClasses.set ("assets/sprites/TP-file2.xml", NME_assets_sprites_tp_file2_xml);
			resourceTypes.set ("assets/sprites/TP-file2.xml", "text");
			resourceClasses.set ("assets/tennisbal.png", NME_assets_tennisbal_png);
			resourceTypes.set ("assets/tennisbal.png", "image");
			resourceClasses.set ("assets/walking.png", NME_assets_walking_png);
			resourceTypes.set ("assets/walking.png", "image");
			resourceClasses.set ("assets/walking.xml", NME_assets_walking_xml);
			resourceTypes.set ("assets/walking.xml", "text");
			
			
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