import nme.display.Bitmap;
import nme.display.BitmapData;
import nme.display.GradientType;
import nme.display.Sprite;
import nme.geom.Matrix;
import nme.Lib;
import nme.Assets;

import nme.events.Event;

import nme.display.Sprite;
import aze.display.SparrowTilesheet;
import aze.display.TileGroup;
import aze.display.TileLayer;
import aze.display.TileSprite;
import aze.display.TileClip;


class Person extends Sprite {

	var layer:TileLayer;
	var tLast:Float;
	var clip:TileClip;
	
	public function new () {
		super();

		// sprite sheet
		var tilesheet = new SparrowTilesheet(Assets.getBitmapData("assets/sprites/TP-file.png"), Assets.getText("assets/sprites/TP-file.xml"));

		// tile-layer
		layer = new TileLayer(tilesheet); // optional flags: smoothing, additive blendmode

		clip = new TileClip("walk",24);

		//properties
		clip.loop = true;
		clip.x = 300;
		clip.y = 300;
		clip.play();

		//add to stage
		layer.addChild(clip);

		tLast = Lib.getTimer();
		addEventListener(Event.ENTER_FRAME, onEnterFrame);

	}

	private function onEnterFrame( event:Event ):Void
	{
		var tDelta:Float = Lib.getTimer() - tLast;
		tLast = Lib.getTimer();
		layer.step(Std.int(tDelta));
		layer.render();
	}

	public function view():Sprite{
		return layer.view;
	}


}