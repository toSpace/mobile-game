package;

/**
 *
 * Sample: Body From Graphic
 * Author: Luca Deltodesco
 *
 * Using MarchingSquares to generate Nape bodies
 * from both a BitmapData and a standard DisplayObject.
 * https://github.com/deltaluca/nape/blob/master/cx-src/nape/geom/IsoFunction.cx
 *
 */

import nape.geom.AABB;
import nape.geom.GeomPoly;
import nape.geom.IsoFunction;
import nape.geom.MarchingSquares;
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;

import nme.display.Bitmap;
import nme.display.BitmapData;
import nme.display.DisplayObject;
import nme.display.Sprite;
import nme.display.StageQuality;

class IsoBody {
    public static function run(iso:IsoFunctionDef, bounds:AABB, granularity:Vec2=null, quality:Int=2, simplification:Float=1.5) {
        var body = new Body();

        if (granularity==null) granularity = Vec2.weak(8, 8);
        var polys = MarchingSquares.run(iso, bounds, granularity, quality);
        for (p in polys) {
            var qolys = p.convexDecomposition(true);
            //no simplification no errors...
            //var qolys = p.simplify(simplification).convexDecomposition(true);
            for (q in qolys) {
                body.shapes.add(new Polygon(q));

                // Recycle GeomPoly and its vertices
                q.dispose();
            }
            // Recycle list nodes
            qolys.clear();

            // Recycle GeomPoly and its vertices
            p.dispose();
        }
        // Recycle list nodes
        polys.clear();

        // Align body with its centre of mass.
        // Keeping track of our required graphic offset.
        var pivot:Vec2 = body.localCOM.mul(-1);
        body.translateShapes(pivot);

        body.userData.graphicOffset = pivot;
        return body;
    }
}