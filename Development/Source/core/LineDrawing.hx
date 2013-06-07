//nme
import nme.display.Sprite;
import nme.geom.Point;
import nme.display.BitmapData;
import nme.display.Bitmap;
import nme.geom.Rectangle;
import nme.geom.Matrix;

//nape


class LineDrawing {

	var drawing:Sprite;
	var stopped:Bool = false;
	
	public function new(x, y){

		stopped = false;

		//make
		drawing = new Sprite();

	    //start drawing
	    drawing.graphics.lineStyle(30,0x000000, 1, true);
	    drawing.graphics.moveTo(x, y);

		Main.canvas.addChild(drawing);

		RenderManager.add(this);
	}

	public function render():Void{

		//drawing
		if(!Drawing.erasing){
			//draw
			if(Drawing.drawing){
				var point:Point = Main.canvas.globalToLocal( new Point(Drawing.x, Drawing.y) );
				drawing.graphics.lineTo(point.x, point.y);
			} 
			//stop draw
			else {
				if (!stopped){
					end();
				}
			}
		}

	}

	public function end():Void{
		stopped = true;

		var bounds:Rectangle = drawing.getBounds(Main.canvas);

		trace(bounds.x + bounds.width);
		trace(bounds.y + bounds.height);
		trace(bounds);

		//make body
		var matrix = new Matrix();
		matrix.tx = 0-bounds.x;
		matrix.ty = 0-bounds.y;
    	var bitmap = new Bitmap( new BitmapData(Std.int(bounds.width + bounds.x), Std.int(bounds.height + bounds.height), true, 0) );
    	bitmap.x = bounds.x;
    	bitmap.y = bounds.y;

    	bitmap.bitmapData.draw(drawing, matrix);

    	//Main.canvas.addChild(bitmap);
    	Main.canvas.removeChild(drawing);
    	var object = new DrawObject(bitmap);
	}

}