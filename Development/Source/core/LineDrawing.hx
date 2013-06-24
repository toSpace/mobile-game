//nme
import nme.display.Sprite;
import nme.geom.Point;
import nme.display.BitmapData;
import nme.display.Bitmap;
import nme.geom.Rectangle;
import nme.geom.Matrix;
import nme.geom.ColorTransform;

//nape


class LineDrawing {

	var drawing:Sprite;
	var stopped:Bool = false;
	
	public function new(x, y){

		stopped = false;
		Drawing.locked = true;

		//make
		drawing = new Sprite();

	    //start drawing
	    if(Drawing.erasing){
	    	drawing.graphics.lineStyle(Settings.brushSize,0xFF0000, 1, true);
	    } else {
	    	drawing.graphics.lineStyle(Settings.brushSize,0x000000, 0.5, true);
	    }
	    drawing.graphics.moveTo(x, y);

		Main.canvas.addChild(drawing);

		RenderManager.add(this);
	}

	public function render():Void{

		//draw
		if(Drawing.drawing){
			//var point:Point = Main.canvas.globalToLocal( new Point(Drawing.x, Drawing.y) );
			drawing.graphics.lineTo(Drawing.x, Drawing.y);
		} 
		//stop draw
		else {
			if (!stopped){
				end();
			}
		}

	}

	public function end():Void{
		stopped = true;

		if(!Drawing.erasing){
			draw(false);
		} else {
			//erase();
			draw(true);
		}

		//remove from render canvas [TODO]
    	Drawing.locked = false;
	}

	private function draw(erasing:Bool):Void{

		var bounds:Rectangle = drawing.getBounds(Main.canvas);

		//make body
		var matrix = new Matrix();
		matrix.tx = 0-bounds.x;
		matrix.ty = 0-bounds.y;
    	var bitmap = new Bitmap( new BitmapData(Std.int(bounds.width + bounds.x), Std.int(bounds.height + bounds.height), true, 0) );
    	bitmap.x = bounds.x;
    	bitmap.y = bounds.y;

    	var color = new ColorTransform();
    	if(!erasing){
			color.alphaOffset = 255;
    	} else {
    		//color.alphaMultiplier = -1;
    	}

    	bitmap.bitmapData.draw(drawing, matrix, color);

    	//Main.canvas.addChild(bitmap);
    	if(!erasing){	
	    	Main.canvas.removeChild(drawing);
	    	var object = new DrawObject(bitmap);
    	} else {
    		erase(bitmap);
    	}

	}

	private function erase(bitmap:Bitmap):Void{

		for(object in Drawing.drawList){
			if(object.inView()) object.erase(drawing, bitmap);
        }

        Main.canvas.removeChild(drawing);
	}	

}