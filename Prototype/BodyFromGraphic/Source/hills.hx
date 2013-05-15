import nme.display.Sprite;
import nme.Assets;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.display.DisplayObject;
import nme.display.Bitmap;
import nme.display.BitmapData;
import nme.geom.Point;

class Hills extends Sprite {

	public function new(){
		super();
		drawHills(3, 10);
	}

	// this is the core function: drawHills
	// arguments: the number of hills to generate, and the horizontal step, in pixels, between two hill points
	private function drawHills(numberOfHills:Int, pixelStep:Int):Void{
		
		// setting a starting y coordinate, around the vertical center of the stage
		var hillStartY:Float=140+Math.random()*200;
		// defining hill width, in pixels, that is the stage width divided by the number of hills
		var hillWidth:Float=640/numberOfHills;
		// defining the number of slices of the hill. This number is determined by the width of the hill in pixels divided by the amount of pixels between two points
		var hillSlices:Int = Std.int(hillWidth/pixelStep);
		// drawing stuff
		graphics.lineStyle(0,0x000000);
		graphics.moveTo(0,480);
		// looping through the hills
		//for (var i:Int=0; i<numberOfHills; i++) {
		for (i in 0...numberOfHills) {
			// setting a random hill height in pixels
			var randomHeight:Float=Math.random()*100;
			// this is necessary to make all hills (execept the first one) begin where the previous hill ended
			if(i!=0){
				hillStartY-=randomHeight;
			}
			
			// looping through hill slices
			//for (var j:int=0; j<=hillSlices; j++) {
			for (j in 0...hillSlices) {
				// defining the point of the hill
				var hillPoint:Point=new Point(j*pixelStep+hillWidth*i, hillStartY+randomHeight*Math.cos(2*Math.PI/hillSlices*j));
				// drawing stuff
				graphics.lineTo(hillPoint.x,hillPoint.y);
				graphics.lineTo(hillPoint.x,480);
				graphics.moveTo(hillPoint.x,hillPoint.y);
			}
				
			// this is also necessary to make all hills (execept the first one) begin where the previous hill ended
			hillStartY = hillStartY+randomHeight;
		
		}
		
		graphics.lineTo(640,480);
	}

}