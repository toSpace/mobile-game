package;

import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Shape;
import nape.shape.Polygon;
import nape.shape.Circle;
import nape.geom.Vec2;
import nape.dynamics.InteractionFilter;
import nape.phys.Material;
import nape.phys.FluidProperties;
import nape.callbacks.CbType;
import nape.geom.AABB;

import flash.display.DisplayObject;

class PhysicsData {

	public static function createBody(name:String,?graphic:DisplayObject):Body {
		var xret = lookup(name);
		if(graphic==null) return xret.body.copy();

		var ret = xret.body.copy();
		graphic.x = graphic.y = 0;
		graphic.rotation = 0;
		var bounds = graphic.getBounds(graphic);
		var offset = Vec2.get(bounds.x-xret.anchor.x, bounds.y-xret.anchor.y);

		ret.graphic = graphic;
		ret.graphicUpdate = function(b:Body) {
			var gp = b.localToWorld(offset);
			graphic.x = gp.x;
			graphic.y = gp.y;
			graphic.rotation = (b.rotation*180/Math.PI)%360;
		}	

		return ret;
	}

	public static function registerMaterial(name:String,material:Material) {
		if(materials==null) materials = new Hash<Material>();
		materials.set(name,material);	
	}
	public static function registerFilter(name:String,filter:InteractionFilter) {
		if(filters==null) filters = new Hash<InteractionFilter>();
		filters.set(name,filter);
	}
	public static function registerFluidProperties(name:String,properties:FluidProperties) {
		if(fprops==null) fprops = new Hash<FluidProperties>();
		fprops.set(name,properties);
	}
	public static function registerCbType(name:String,cbType:CbType) {
		if(types==null) types = new Hash<CbType>();
		types.set(name,cbType);
	}

	//----------------------------------------------------------------------	

	static var bodies   :Hash<{body:Body,anchor:Vec2}>;
	static var materials:Hash<Material>;
	static var filters  :Hash<InteractionFilter>;
	static var fprops   :Hash<FluidProperties>;
	static var types    :Hash<CbType>;
	static inline function material(name:String):Material {
		if(name=="default") return new Material();
		else {
			if(materials==null || !materials.exists(name))
				throw "Error: Material with name '"+name+"' has not been registered";
			return materials.get(name);
		}
	}
	static inline function filter(name:String):InteractionFilter {
		if(name=="default") return new InteractionFilter();
		else {
			if(filters==null || !filters.exists(name))
				throw "Error: InteractionFilter with name '"+name+"' has not been registered";
			return filters.get(name);
		}
	}
	static inline function fprop(name:String):FluidProperties {
		if(name=="default") return new FluidProperties();
		else {
			if(fprops==null || !fprops.exists(name))
				throw "Error: FluidProperties with name '"+name+"' has not been registered";
			return fprops.get(name);
		}
	}
	static inline function cbtype(name:String):CbType {
		if(name=="null") return null;
		else {
			if(types==null || !types.exists(name))
				throw "Error: CbType with name '"+name+"' has not been registered";
			return types.get(name);
		}	
	}

	static inline function lookup(name:String) {
		if(bodies==null) init();
		if(!bodies.exists(name)) throw "Error: Body with name '"+name+"' does not exist";
		return bodies.get(name);
	}

	//----------------------------------------------------------------------	

	static function init() {
		bodies = new Hash<{body:Body,anchor:Vec2}>();

		
			var body = new Body();
			body.cbType = cbtype("null");

			
				var mat = material("default");
				var filt = filter("default");
				var prop = fprop("default");
				var cbType = cbtype("null");

				
					
						var s = new Polygon(
							[   Vec2.weak(149.5,46)   ,  Vec2.weak(140,28.5)   ,  Vec2.weak(117,11.5)   ,  Vec2.weak(90,1.5)   ,  Vec2.weak(28,71)   ,  Vec2.weak(67,84.5)   ,  Vec2.weak(97,82.5)   ,  Vec2.weak(133,64.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(28,71)   ,  Vec2.weak(90,1.5)   ,  Vec2.weak(66,0.5)   ,  Vec2.weak(65,0.5)   ,  Vec2.weak(26.5,14)   ,  Vec2.weak(3,48)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(1,38)   ,  Vec2.weak(3,48)   ,  Vec2.weak(26.5,14)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
				
			
				var mat = material("default");
				var filt = filter("default");
				var prop = fprop("default");
				var cbType = cbtype("null");

				
					
						var s = new Polygon(
							[   Vec2.weak(149.5,41)   ,  Vec2.weak(146,35.5)   ,  Vec2.weak(122,14.5)   ,  Vec2.weak(90,1.5)   ,  Vec2.weak(66,0.5)   ,  Vec2.weak(65,0.5)   ,  Vec2.weak(49,3.5)   ,  Vec2.weak(146.5,51)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(1.5,47)   ,  Vec2.weak(7,53.5)   ,  Vec2.weak(30,72.5)   ,  Vec2.weak(60,83.5)   ,  Vec2.weak(92,83.5)   ,  Vec2.weak(49,3.5)   ,  Vec2.weak(26.5,14)   ,  Vec2.weak(0.5,39)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(92,83.5)   ,  Vec2.weak(120.5,73)   ,  Vec2.weak(146.5,51)   ,  Vec2.weak(49,3.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
				
			

			var anchor = if(true) body.localCOM.copy() else Vec2.get(0,86);
			body.translateShapes(Vec2.weak(-anchor.x,-anchor.y));
			body.position.setxy(0,0);

			bodies.set("rugby",{body:body,anchor:anchor});
		
			var body = new Body();
			body.cbType = cbtype("null");

			
				var mat = material("default");
				var filt = filter("default");
				var prop = fprop("default");
				var cbType = cbtype("null");

				
					var s = new Circle(
						25,
						Vec2.weak(25.2857142857143,25),
						mat,
						filt
					);
					s.body = body;
					s.fluidEnabled = false;
					s.fluidProperties = prop;
					s.cbType = cbType;
				
			
				var mat = material("default");
				var filt = filter("default");
				var prop = fprop("default");
				var cbType = cbtype("null");

				
					
						var s = new Polygon(
							[   Vec2.weak(1.5,13)   ,  Vec2.weak(0.5,33)   ,  Vec2.weak(10.5,46)   ,  Vec2.weak(48.5,17)   ,  Vec2.weak(39.5,4)   ,  Vec2.weak(20,-0.5)   ,  Vec2.weak(19,-0.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(46.5,37)   ,  Vec2.weak(48.5,17)   ,  Vec2.weak(10.5,46)   ,  Vec2.weak(30,49.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
				
			

			var anchor = if(true) body.localCOM.copy() else Vec2.get(0,50);
			body.translateShapes(Vec2.weak(-anchor.x,-anchor.y));
			body.position.setxy(0,0);

			bodies.set("8ball",{body:body,anchor:anchor});
		
			var body = new Body();
			body.cbType = cbtype("null");

			
				var mat = material("default");
				var filt = filter("default");
				var prop = fprop("default");
				var cbType = cbtype("null");

				
					
						var s = new Polygon(
							[   Vec2.weak(137,126.5)   ,  Vec2.weak(142,111.5)   ,  Vec2.weak(133.5,84)   ,  Vec2.weak(118,63.5)   ,  Vec2.weak(122.5,92)   ,  Vec2.weak(128.5,122)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(74,131.5)   ,  Vec2.weak(78,112.5)   ,  Vec2.weak(59,90.5)   ,  Vec2.weak(69,122.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(34.5,26)   ,  Vec2.weak(25.5,38)   ,  Vec2.weak(62.5,81)   ,  Vec2.weak(76.5,67)   ,  Vec2.weak(58.5,36)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(118,63.5)   ,  Vec2.weak(102.5,63)   ,  Vec2.weak(100.5,91)   ,  Vec2.weak(108.5,119)   ,  Vec2.weak(122.5,92)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(88,135.5)   ,  Vec2.weak(108.5,119)   ,  Vec2.weak(100.5,91)   ,  Vec2.weak(84.5,128)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(10,94.5)   ,  Vec2.weak(4,102.5)   ,  Vec2.weak(44,122.5)   ,  Vec2.weak(35,100.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(35,100.5)   ,  Vec2.weak(44,122.5)   ,  Vec2.weak(69,122.5)   ,  Vec2.weak(59,90.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(78,112.5)   ,  Vec2.weak(100.5,91)   ,  Vec2.weak(76.5,67)   ,  Vec2.weak(62.5,81)   ,  Vec2.weak(59,90.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(76.5,67)   ,  Vec2.weak(100.5,91)   ,  Vec2.weak(102.5,63)   ,  Vec2.weak(98.5,28)   ,  Vec2.weak(85,5.5)   ,  Vec2.weak(84,5.5)   ,  Vec2.weak(74.5,12)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
				
			

			var anchor = if(true) body.localCOM.copy() else Vec2.get(0,141);
			body.translateShapes(Vec2.weak(-anchor.x,-anchor.y));
			body.position.setxy(0,0);

			bodies.set("banaan",{body:body,anchor:anchor});
		
			var body = new Body();
			body.cbType = cbtype("null");

			
				var mat = material("default");
				var filt = filter("default");
				var prop = fprop("default");
				var cbType = cbtype("null");

				
					
						var s = new Polygon(
							[   Vec2.weak(2,146.5)   ,  Vec2.weak(27,149.5)   ,  Vec2.weak(40.5,138)   ,  Vec2.weak(40.5,68)   ,  Vec2.weak(29.5,4)   ,  Vec2.weak(15,-0.5)   ,  Vec2.weak(-0.5,66)   ,  Vec2.weak(-0.5,136)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(29.5,4)   ,  Vec2.weak(16,-0.5)   ,  Vec2.weak(15,-0.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
				
			

			var anchor = if(true) body.localCOM.copy() else Vec2.get(0,150);
			body.translateShapes(Vec2.weak(-anchor.x,-anchor.y));
			body.position.setxy(0,0);

			bodies.set("bier",{body:body,anchor:anchor});
		
			var body = new Body();
			body.cbType = cbtype("null");

			
				var mat = material("default");
				var filt = filter("default");
				var prop = fprop("default");
				var cbType = cbtype("null");

				
					
						var s = new Polygon(
							[   Vec2.weak(96.5,10)   ,  Vec2.weak(68,1.5)   ,  Vec2.weak(67,1.5)   ,  Vec2.weak(40,44.5)   ,  Vec2.weak(59,48.5)   ,  Vec2.weak(78,41.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(42.5,16)   ,  Vec2.weak(34,45.5)   ,  Vec2.weak(40,44.5)   ,  Vec2.weak(67,1.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(3,60.5)   ,  Vec2.weak(40,44.5)   ,  Vec2.weak(34,45.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
				
			

			var anchor = if(true) body.localCOM.copy() else Vec2.get(0,61);
			body.translateShapes(Vec2.weak(-anchor.x,-anchor.y));
			body.position.setxy(0,0);

			bodies.set("greenleaf",{body:body,anchor:anchor});
		
			var body = new Body();
			body.cbType = cbtype("null");

			
				var mat = material("default");
				var filt = filter("default");
				var prop = fprop("default");
				var cbType = cbtype("null");

				
					
						var s = new Polygon(
							[   Vec2.weak(31,142.5)   ,  Vec2.weak(44.5,135)   ,  Vec2.weak(46,92.5)   ,  Vec2.weak(29.5,123)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(4,129.5)   ,  Vec2.weak(29.5,123)   ,  Vec2.weak(46,92.5)   ,  Vec2.weak(1.5,94)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(142.5,55)   ,  Vec2.weak(135,60.5)   ,  Vec2.weak(149.5,62)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(43.5,73)   ,  Vec2.weak(46,92.5)   ,  Vec2.weak(57,74.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(45.5,150)   ,  Vec2.weak(53.5,145)   ,  Vec2.weak(149.5,62)   ,  Vec2.weak(135,60.5)   ,  Vec2.weak(57,74.5)   ,  Vec2.weak(46,92.5)   ,  Vec2.weak(44.5,135)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(23,31.5)   ,  Vec2.weak(58.5,54)   ,  Vec2.weak(113,26.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(74,158.5)   ,  Vec2.weak(104,159.5)   ,  Vec2.weak(149.5,62)   ,  Vec2.weak(53.5,145)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(58.5,54)   ,  Vec2.weak(57,74.5)   ,  Vec2.weak(135,60.5)   ,  Vec2.weak(126.5,41)   ,  Vec2.weak(113,26.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(118,181.5)   ,  Vec2.weak(123,179.5)   ,  Vec2.weak(149.5,62)   ,  Vec2.weak(104,159.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(113,26.5)   ,  Vec2.weak(126.5,41)   ,  Vec2.weak(143,-0.5)   ,  Vec2.weak(142,-0.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
				
			

			var anchor = if(true) body.localCOM.copy() else Vec2.get(0,182);
			body.translateShapes(Vec2.weak(-anchor.x,-anchor.y));
			body.position.setxy(0,0);

			bodies.set("pikachu",{body:body,anchor:anchor});
		
			var body = new Body();
			body.cbType = cbtype("null");

			
				var mat = material("default");
				var filt = filter("default");
				var prop = fprop("default");
				var cbType = cbtype("null");

				
					
						var s = new Polygon(
							[   Vec2.weak(194,66.5)   ,  Vec2.weak(134.5,82)   ,  Vec2.weak(111.5,146)   ,  Vec2.weak(131,151.5)   ,  Vec2.weak(154,128.5)   ,  Vec2.weak(172.5,107)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(8,59.5)   ,  Vec2.weak(21.5,67)   ,  Vec2.weak(55,58.5)   ,  Vec2.weak(15,53.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(166.5,143)   ,  Vec2.weak(154,128.5)   ,  Vec2.weak(131,151.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(73.5,37)   ,  Vec2.weak(80.5,67)   ,  Vec2.weak(89,36.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(183.5,117)   ,  Vec2.weak(172.5,107)   ,  Vec2.weak(154,128.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(36,145.5)   ,  Vec2.weak(106.5,148)   ,  Vec2.weak(54,121.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(13.5,98)   ,  Vec2.weak(54,121.5)   ,  Vec2.weak(28,86.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(21.5,67)   ,  Vec2.weak(28,86.5)   ,  Vec2.weak(54,121.5)   ,  Vec2.weak(106.5,148)   ,  Vec2.weak(75.5,75)   ,  Vec2.weak(55,58.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(138,36.5)   ,  Vec2.weak(129,41.5)   ,  Vec2.weak(134.5,82)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(129,41.5)   ,  Vec2.weak(111.5,23)   ,  Vec2.weak(106.5,148)   ,  Vec2.weak(111.5,146)   ,  Vec2.weak(134.5,82)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(89,36.5)   ,  Vec2.weak(80.5,67)   ,  Vec2.weak(106.5,148)   ,  Vec2.weak(112,3.5)   ,  Vec2.weak(111,3.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(127.5,189)   ,  Vec2.weak(111.5,146)   ,  Vec2.weak(106.5,148)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(75.5,75)   ,  Vec2.weak(106.5,148)   ,  Vec2.weak(80.5,67)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
				
			

			var anchor = if(true) body.localCOM.copy() else Vec2.get(0,191);
			body.translateShapes(Vec2.weak(-anchor.x,-anchor.y));
			body.position.setxy(0,0);

			bodies.set("redleaf",{body:body,anchor:anchor});
		
			var body = new Body();
			body.cbType = cbtype("null");

			
				var mat = material("default");
				var filt = filter("default");
				var prop = fprop("default");
				var cbType = cbtype("null");

				
					var s = new Circle(
						25,
						Vec2.weak(25.1428571428571,24.7142857142857),
						mat,
						filt
					);
					s.body = body;
					s.fluidEnabled = false;
					s.fluidProperties = prop;
					s.cbType = cbType;
				
			
				var mat = material("default");
				var filt = filter("default");
				var prop = fprop("default");
				var cbType = cbtype("null");

				
					
						var s = new Polygon(
							[   Vec2.weak(1.5,13)   ,  Vec2.weak(0.5,33)   ,  Vec2.weak(10.5,46)   ,  Vec2.weak(48.5,17)   ,  Vec2.weak(39.5,4)   ,  Vec2.weak(20,-0.5)   ,  Vec2.weak(19,-0.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
						var s = new Polygon(
							[   Vec2.weak(46.5,37)   ,  Vec2.weak(48.5,17)   ,  Vec2.weak(10.5,46)   ,  Vec2.weak(30,49.5)   ],
							mat,
							filt
						);
						s.body = body;
						s.fluidEnabled = false;
						s.fluidProperties = prop;
						s.cbType = cbType;
					
				
			

			var anchor = if(true) body.localCOM.copy() else Vec2.get(0,50);
			body.translateShapes(Vec2.weak(-anchor.x,-anchor.y));
			body.position.setxy(0,0);

			bodies.set("tennisbal",{body:body,anchor:anchor});
		
	}
}
