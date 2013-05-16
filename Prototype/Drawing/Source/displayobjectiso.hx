package;

/**
 *
 * Sample: Body From Graphic
 * Author: Luca Deltodesco
 *
 * Using MarchingSquares to generate Nape bodies
 * from both a BitmapData and a standard DisplayObject.
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

class DisplayObjectIso implements IsoFunction {
    public var displayObject:DisplayObject;
    public var bounds:AABB;

    public function new(displayObject:DisplayObject) {
        this.displayObject = displayObject;
        this.bounds = AABB.fromRect(displayObject.getBounds(displayObject));
    }

    public function iso(x:Float, y:Float) {
        // Best we can really do with a generic DisplayObject
        // is to return a binary value {-1, 1} depending on
        // if the sample point is in or out side.

        return (displayObject.hitTestPoint(x, y, true) ? -1.0 : 1.0);
    }
}