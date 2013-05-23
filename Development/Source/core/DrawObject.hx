import nme.display.Sprite;
import nme.Assets;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.display.DisplayObject;
import nme.display.Bitmap;
import nme.display.BitmapData;

class DrawObject extends GameObject{

	public function new(){
		super();
	}

	public function convert(bodyType:String, x:Int, y:Int, rotation:Int):Void{

        var objIso:BitmapDataIso = new BitmapDataIso(asset.bitmapData);

		//add to stage in order to do calculations
        canvas.addChild(asset);

        //make body
        body = IsoBody.run(objIso, objIso.bounds);
        body.userData.graphic = asset;
        //objBody.position.setxy(300, 0);
        body.space = space;

	}

	public function updateBody():Void{
		//convert();
	}

	public function startDraw(){

	}

}