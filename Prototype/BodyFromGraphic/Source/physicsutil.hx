package {
	import nme.display.DisplayObject;
	import nme.display.Sprite;
	import nme.display.Stage;
	import nme.geom.Rectangle;
	import nape.geom.AABB;
	import nape.geom.GeomPoly;
	import nape.geom.GeomPolyList;
	import nape.geom.MarchingSquares;
	import nape.geom.Vec2;
	import nape.phys.Body;
	import nape.shape.Polygon;
	
	/**
	 * Various physics utils for Nape physics engine
	 *
	 * @version $Id$
	 */
	public class PhysicsUtil {
		
		//take a graphical object on which hitTestPoint will work
		//and produce a nape body with the exact same positions and shapes
		//with input graphic assigned to the body and display appropriately
		public static function graphicToBody( displayObject : DisplayObject, stage : Stage, granularity : Vec2 = null ) : Body {
			
			var body : Body = new Body();
			body.position.setxy( displayObject.x, displayObject.y );
			body.rotation = displayObject.rotation * Math.PI / 180;
			
			//ensure graphic is at (0,0,0)
			displayObject.x = displayObject.y = displayObject.rotation = 0;
			//need to ensure graphic exists on display list for hitTestPoint to work. stupid flash.
			
			stage.addChild(displayObject);
			
			var bounds : AABB = AABB.fromRect( displayObject.getBounds( displayObject ) );
			
			var iso : Function = function ( x : Number, y : Number ) : Number {
				//canot really do a more complex iso-function
				//with hitTestPoint. return inside iso-surface
				//if we hit at the point, otherwise outside
				return ( displayObject.hitTestPoint( x, y, true ) ) ? -1.0 : 1.0;
			}
			
			//because the iso is not smooth, need to use more iterations for quality extraction
			var grain : Vec2 = ( granularity == null ) ? new Vec2( 8, 8 ) : granularity;
			
			var polys : GeomPolyList = MarchingSquares.run( iso, bounds, grain, 6 );
			
			var poly : GeomPoly;
			var qolys : GeomPolyList;
			
			while ( polys.iterator().hasNext() ) {
				
				poly = polys.iterator().next();
				qolys = poly.convex_decomposition();
				
				while ( qolys.iterator().hasNext() ) {
					body.shapes.add( new Polygon( qolys.iterator().next() ) );
				}
			}
			
			stage.removeChild(displayObject);
			
			//want to align body to it's centre of mass
			//but also have the graphic offset correctly
			//-> easiest way is to wrap the graphic in another.
			var anchor : Vec2 = body.localCOM.mul( -1 );
			body.align();
			
			var wrap : Sprite = new Sprite();
			wrap.addChild( displayObject );
			displayObject.x = anchor.x;
			displayObject.y = anchor.y;
			
			body.graphic = wrap;
			
			return body;
		}
	
	}

}