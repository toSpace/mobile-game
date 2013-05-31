/**
	@author Andreas Weber, webweber@motiondraw.com
	Version 		1.1   (April 18, 2008) port to AS3 
					1.0	   December 2005, AS2 version
	Disclaimer	 	Yep, everything. 'Who - me? I haven't even heard of Catmull-Rom!'
	License 		Free for whatever. Giving credit would be nice. Sending a link to what you do with it would be nice.
					Want to make a donation?  http://www.icrc.org/
					
	http://www.motiondraw.com/md/as_samples/t/CatmullRomSpline/tween.html
	

	Catmull-Rom is a fast spline algorithm. 
	A spline connects a number of points ('verteces') with one curve
	
	More on Catmull-Rom splines: http://www.mvps.org/directx/articles/catmull/
	
	Alternatives:
	An ActionSpript implementation of a Parametric (Natural) Spline by Jim Armstrong: 
	http://www.2112fx.com/blog/pivot/entry.php?id=37#body
	Produces perfect, beautiful splines which connect the points in a less direct, kind of 'rounder' style than the Catmull-Rom splines
	Downside: much slower than Catmull-Rom, especially when the spline is defined by a large number of verteces

	
	Constructor:
	CatmullRomSpline(vertexPoints:Array)
	
			vertexPoints 		an Array of points (objects with x and y properties). 
								All these points will be connected through the spline
			
			example
					import com.motiondraw.geometry.CatmullRomSpline;
					var points:Array = new Array({x:20, y:50}, {x:200, y:100}, {x:50, y:20}, {x:50, y:100});
					var spline:CatmullRomSpline = new CatmullRomSpline(points);
			
	
	plotAll(canvas:MovieClip [, approxLineLength:Number]):void;
			Easy way to render the spline
			
			canvas				a MovieClip instance to draw on. Make sure to call lineStyle() on the canvas clip before passing it to this function.
			approxLineLength	the spline is rendered by connecting a big number of points with straight lines.
								approxLineLength is the approximate length of one of these lines in pixels.
								Optional, Default is 5 (i.e. a spline with a total length of 500 will be represented by about 100 straight lines)
								The smaller this value (e.g. 1) the less 'jaggy' the spline, but also the slower as more lines are drawn.
			returns				nothing
			
			example
					import com.motiondraw.geometry.CatmullRomSpline;
					var points:Array = new Array({x:20, y:50}, {x:200, y:100}, {x:50, y:20}, {x:50, y:100});
					var spline:CatmullRomSpline = new CatmullRomSpline(points);
					// create a clip to draw on
					this.createEmptyMovieClip('canvas', this.getNextHighestDepth());
					canvas._x = canvas._y = 100;
					// don't forget: first define the lineStyle
					canvas.lineStyle(3, 0);
					// the shorter the lines the nicer - but also the slower
					var approxLineLength:Number = 5;
					spline.plotAll(canvas, approxLineLength);
		
		
	getAllPoints([approxLineLength:Number]):Array
			Get points on the whole spline (from t=0 to t=1).
			Handy to plot the spline in one fell swoop
			
			approxLineLength	see above 'plotAll' for explanation 
			returns				an Array with all the points (objects with x and y properties) on the spline
			
			example:			see the plotAll method 
			
			
	getPointsInRange(fromT:Number, toT:Number, approxLineLength:Number):Array
			Get points on a segment of the spline (from t=fromT to t=toT)
			Handy to plot the spline piece by piece, e.g. to mimic a drawing hand or to apply some easing.
			Typically called in an interval.
			
			fromT				the starting t (range 0 to 1)
			toT					the ending t  (range 0 to 1, must be greater than fromT)
			approxLineLength	see above 'plotAll' for explanation 
			returns				an Array with all the points (objects with x and y properties) in the defined range of the spline
			
			example:
					import com.motiondraw.geometry.CatmullRomSpline;
					var numPoints = 15;
					
					numIntervals = 50;
					tweenIntervals = new Array();
					for(var i=0; i<=numIntervals; i++){
						// a linear tween - use any other fancy tween instead (see Robert Penner functions)
						tweenIntervals[i] = i * (1/50);
					}
					
					var points:Array = new Array({x:20, y:50}, {x:200, y:100}, {x:50, y:20}, {x:50, y:100});
					var spline:CatmullRomSpline = new CatmullRomSpline(points);
					
					this.createEmptyMovieClip('canvas', this.getNextHighestDepth());
					canvas._x = canvas._y = 0;
					canvas.lineStyle(1, 0);
					
					canvas.moveTo(points[0].x, points[0].y);
					
					count = 1;
					this.onEnterFrame = function(){
						if(count > numIntervals){delete this.onEnterFrame;}
						var fromT = tweenIntervals[count-1];
						var toT = tweenIntervals[count];
						var approxLineLength = 5;
						var points = spline.getPointsInRange(fromT, toT, approxLineLength);
						
						for ( var i=0; i<points.length; i++ ){
							canvas.lineTo(points[i].x, points[i].y);
						}
						count++;
					}
					
	getPointAtT(t:Number):Object
			get one point (object with x and y properties) at the specified t of the spline
	
	getTOfVertex(index:Number):Number
			index		index of the vertext as in the vertexPoints Array passed in to the constructor
			returns		t, a number in the range between 0 and 1
			
	getSegmentLengths()
			populates the lengths Array - the sum of spline.lengths is the approximate length of the whole spline
			
*/
	
import nme.display.*;


public class CatmullRomSpline{
	var verteces:Array;
	var lengths:Array;// the distances between neighboring verteces
	var totalLength:Number;// the total length of the spline
	
	public var numPoints:Number;
	
	private var __APPROXLINELENGTH = 5;// default value
	private var vertecesPlus:Array; // like verteces, but with double start and end points
	
	
	function CatmullRomSpline(vertexPoints:Array){
		lengths = new Array();
		verteces = vertexPoints;
	}
	
	// here's this class' beef
	// calculates a curve between the second (P1) and the third (P2) point.
	// Returns: a point on this curve at the specified t
	// t: ranges between 0 and 1
	// PO, P1, P2, P3: points (objects with x and y properties)
	private function catmullRom(t:Number, P0:Object, P1:Object, P2:Object, P3:Object):Object{
		var t2 = (t*t), t3 = t*t2;
		return {x: 0.5 *((2 * P1.x) + (-P0.x + P2.x) * t +(2*P0.x - 5*P1.x + 4*P2.x - P3.x) * t2 + (-P0.x + 3*P1.x- 3*P2.x + P3.x) * t3),
				y: 0.5 *((2 * P1.y) + (-P0.y + P2.y) * t +(2*P0.y - 5*P1.y + 4*P2.y - P3.y) * t2 + (-P0.y + 3*P1.y- 3*P2.y + P3.y) * t3)};
	}
	
	public function plotAll(graphics, approxLineLength:Number):void{
		var p = getAllPoints(approxLineLength);
		if(p.length){
			graphics.moveTo(p[0].x, p[0].y);
			for ( var i = 1; i < p.length; i++ ){
				graphics.lineTo(p[i].x,p[i].y);
			}
		}
	}
	
	public function getAllPoints(approxLineLength:Number):Array{
		if(!approxLineLength){approxLineLength = __APPROXLINELENGTH ;}
		if(!vertecesPlus){makeVertecesPlus();}
		
		var v:Array = vertecesPlus;
		var p:Array = new Array();
		var c:Number = 0;
		
		var len = len=v.length;
		for(var i=0; i<len-3; i++){
			var p1 = v[i+1];
			var p2 = v[i+2];
			var pMid = catmullRom(0.5, v[i], p1, p2, v[i+3]);
			
			// an approximate mid-point length calculation
			var dist:Number =  Math.sqrt(Math.abs(Math.pow(pMid.x-p1.x ,2)) + Math.abs(Math.pow(pMid.y - p1.y ,2))) + Math.sqrt(Math.abs(Math.pow(pMid.x-p2.x ,2)) + Math.abs(Math.pow(pMid.y - p2.y ,2)));
			
			
			lengths[i] = dist; 
			
			var t:Number = 1/(dist/approxLineLength);
			
			for(var j=0; j<1; j+=t){
				p[c] = catmullRom(j, v[i], p1, p2, v[i+3]);
				p[c++].vertex = i;
			}
		}
		
		// replace the last point the original last point
		var l = p.length;
		p[l-1].x = v[len-1].x;
		p[l-1].y = v[len-1].y;
		
		
		//p[c++] = catmullRom(1, v[i-1], v[i], v[i+1], v[i+2]);
		numPoints = p.length;
		
		return p;
	}
	
	
	function getPointsInRange(fromT:Number, toT:Number, approxLineLength:Number):Array{
		if(!lengths.length){getSegmentLengths();}
		if(!approxLineLength){approxLineLength = __APPROXLINELENGTH ;}
		
		var v:Array = vertecesPlus;
		var p:Array = new Array();
		var c:Number = 0;
		
		for(var i=0, l1=v.length; i<l1-3; i++){
			var p1 = v[i+1];
			var p2 = v[i+2];
			
			if(fromT >= p1.t && fromT < p2.t){
				var dist:Number = lengths[i];
				var t:Number = 1/(dist/approxLineLength);
				var l2 = (toT > p2.t) ? 1 :  (toT-p1.t)/(p2.t-p1.t);
				for(var j=  (fromT - p1.t)/(p2.t-p1.t); j<l2; j+=t){
					p[c] = catmullRom(j, v[i], p1, p2, v[i+3]);
					p[c++].vertex = i;
					
				}

				p[c] = catmullRom(l2, v[i], p1, p2, v[i+3]);
				p[c++].vertex = i;			
				
				if(toT > p2.t){
					fromT = p2.t;
				}else if(l2 <= 1){
					break;
				}
			}
		}
		return p;
	}
	
	function getPointAtT(t:Number):Object{
		if(!lengths.length){getSegmentLengths();}
	
		var v:Array = vertecesPlus;
		var c:Number = 0;
		
		for(var i=0, l1=v.length; i<l1-3; i++){
			var p1 = v[i+1];
			var p2 = v[i+2];
			if(t >= p1.t && t <= p2.t){
				var t2:Number = (t-p1.t)/(p2.t-p1.t);
				var o = catmullRom(t2, v[i], p1, p2, v[i+3]);
				break;
				//return catmullRom(t2, v[i], p1, p2, v[i+3]);
			}
		}
		
		return o;
	}
	
	function getTOfVertex(index:Number):Number{
		if(!lengths.length){getSegmentLengths();}
		return verteces[index].t
	}
	
	function getSegmentLengths():void{
		if(!vertecesPlus){makeVertecesPlus();}
		
		var v:Array = vertecesPlus;
		lengths = new Array();
		totalLength = 0;
		
		for(var i=0, len=v.length; i<len-3; i++){
			var p1 = v[i+1];
			var p2 = v[i+2];
			var pMid = catmullRom(0.5, v[i], p1, p2, v[i+3]);
			
			// an _approximate_ mid-point length calculation
			var dist =  Math.sqrt(Math.abs(Math.pow(pMid.x-p1.x ,2)) + Math.abs(Math.pow(pMid.y - p1.y ,2))) + Math.sqrt(Math.abs(Math.pow(pMid.x-p2.x ,2)) + Math.abs(Math.pow(pMid.y - p2.y ,2)));
			lengths[i] = dist;
			totalLength += dist;
		}
		
		verteces[0].t = 0;
		var sum = 0;
		for(var ii=0, len2=lengths.length; ii<len2; ii++){
			sum +=  lengths[ii];
			verteces[i+1].t = sum /  totalLength;
		}
	}
	
	private function makeVertecesPlus():void{
		vertecesPlus = verteces.slice(0);
		// the assumed 2 extra points at start and finish
		vertecesPlus.splice(0,0,vertecesPlus[0]);
		vertecesPlus.push(vertecesPlus[vertecesPlus.length-1])
	}
}

