/**
   	 @author 	Andreas Weber, webweber@motiondraw.com
   	 @version 	  1.1   (April 18, 2008) port to AS3 
				[ 1.0   (March 05, 2005) AS2 Version] 
				
   
	 This class provides 2 line gereralization functions:
	 Lang Simplification and McMaster's Slide Averaging Algorithm
	 
	 The purpose and principle of these algorithms are perfectly explained in this tutorial: 
	 http://www.sli.unimelb.edu.au/gisweb/LGmodule/LGSelect.htm (thanks to Jim Cheng for pointing this out)
	 
	
	 simplifyLang	
	 
	 	Parameters
	 	
			 lookAhead:Number
				 Integer between 2 and the number of points in the line minus 1
				 the higher this value:
				 	the better the compression (less points)
				 	the slower (this function is highly recursive)
				 
				 Examples: a lookAhead value of e.g. 5 makes that at least every fifth point of the original line will
				 also be in the resulting, simplified line (a value of 1 would just return the original line)
				 A straight line, consisting of 100 points in a row, is reduced to 2 points if the lookAhead value equals
				 the number of points in the line minus one.
			 
			 tolerance:Number
			 
			 
			 points:Array
			 
		Purpose
			Lang Simplification is a compression algorithm: it reduces the number of points that define a line
			 
			 
	smoothMcMaster
	
		Parameters
			points:Array
	
	
		Purpose
			 Makes the line less edgy  
			 By repeating the smoothing many times, any line will eventually appear as a straight line
			 Does not reduce the number of points (i.e. no compression) 
			 Changes the position of the points (except the first and the last point)   
	 

*/


public class LineGeneralization{
	
	public function smoothMcMaster(points:Array):Array{
		var nL = [];
		var len = points.length;
		if(len < 5){ return points};
		var j, avX, avY;
		var i = len;
		while(i--){
			if(i==len-1 || i==len-2 || i==1 || i==0){
				nL[i] = {x:points[i].x, y:points[i].y};
			}else{
				j=5;
				avX = 0; avY = 0;
				while(j--){
					avX += points[i+2-j].x; avY += points[i+2-j].y;
				}
				avX = avX/5; avY = avY/5;
				nL[i] = nL[i] = {x:(points[i].x+avX)/2, y:(points[i].y+avY)/2};
			}
		}
		return nL;
	}
	
	public function simplifyLang(lookAhead:Number, tolerance:Number, points:Array):Array{
		
		if(lookAhead <= 1 || points.length < 3){return points;};
		var nP:Array = new Array();
		
		var offset:Number;
		var len:Number;
		var count:Number;
		
		len= points.length;
		
		if(lookAhead > len-1){lookAhead = len-1;};
		
		nP[0] =  {x: points[0].x , y: points[0].y};		
		count = 1;
		for(var i=0; i<len; i++){
			if(i+lookAhead > len){lookAhead = len - i -1};
			
			offset = recursiveToleranceBar(points, i, lookAhead, tolerance);
							
			if(offset>0 && points[i+offset]){
					nP[count] = {x: points[i+offset].x , y: points[i+offset].y};
					i += offset-1;// don't loop through the skipped points
					count++;
			}
		}
		
		nP[count - 1] = {x: points[len-1].x , y: points[len-1].y};
		return nP;
	}
	
	
			// this function is called by simplifyLang
	private function recursiveToleranceBar(points, i, lookAhead, tolerance):Number{
		
		var n = lookAhead;
		var cP, cLP, v1, v2, angle, dx, dy;
		
		cP = points[i];// current point
		
		
		if(!points[i+n]){
			return 0;
		}
		
		// the vector through the current point and the max look ahead point
		v1 = {x:points[i+n].x - cP.x, y:points[i+n].y - cP.y};
		// loop through the intermediate points
		
		
		
		for(var j=1; j<=n; j++){
			  // the vector	through the current point and the current intermediate point
			  cLP = points[i+j]; // current look ahead point
			  v2 = {x: cLP.x - cP.x, y:cLP.y - cP.y};
			  angle = Math.acos((v1.x * v2.x + v1.y * v2.y)/(Math.sqrt(v1.y * v1.y + v1.x * v1.x)*Math.sqrt(v2.y * v2.y + v2.x * v2.x)));
			  if(isNaN(angle)){angle = 0;}
			// the hypothenuse is the line between the current point and the current intermediate point
			dx = cP.x - cLP.x; dy = cP.y - cLP.y;
			var lH = Math.sqrt(dx*dx+dy*dy);// lenght of hypothenuse

			
			// length of opposite leg / perpendicular offset 	
			if( Math.sin(angle) * lH >= tolerance){// too long, exceeds tolerance
				n--;
				if(n>0){// back the vector up one point
					//trace('== recursion, new lookAhead '+n);
					return recursiveToleranceBar(points, i, n, tolerance);
				}else{
					//trace('== return 0, all exceed tolerance');
					return 0;// all intermediate points exceed tolerance
				}
				
			}
			
		}
		
		
		return n;
	}
	
	// this function is called by simplifyLang
	private function recursiveToleranceBar_old(points, i, lookAhead, tolerance):Number{
		
		var n = lookAhead;
		
		var cP, cLP, v1, v2, angle, dx, dy;
		var res;
		cP = points[i];// current point
		// the vector through the current point and the max look ahead point
		v1 =  {x:points[i+n].x - cP.x, y:points[i+n].y - cP.y};
		// loop through the intermediate points
		
		for(var j=1; j<=n; j++){
			  // the vector	through the current point and the current intermediate point
			  cLP =  points[i+j]; // current look ahead point
			  v2 = {x: cLP.x - cP.x, y:cLP.y - cP.y};
			  angle = Math.acos((v1.x * v2.x + v1.y * v2.y)/(Math.sqrt(v1.y * v1.y + v1.x * v1.x)*Math.sqrt(v2.y * v2.y + v2.x * v2.x)));
			  if(isNaN(angle)){angle = 0;}
			// the hypothenuse is the line between the current point and the current intermediate point
			dx = cP.x - cLP.x; dy = cP.y - cLP.y;
			var lH = Math.sqrt(dx*dx+dy*dy);// lenght of hypothenuse

			// length of opposite leg / perpendicular offset 	
			if( Math.sin(angle) * lH >= tolerance){// too long, exceeds tolerance
				n--;
				if(n>0){// back the vector up one point
					//trace('== recursion, new lookAhead '+n);
					res = recursiveToleranceBar(points, i, n, tolerance);
					break;
					//return recursiveToleranceBar(points, i, n, tolerance);
				}else{
					res = 0;
					break;
					//trace('== return 0, all exceed tolerance');
					//return 0;// all intermediate points exceed tolerance
				}
				
			}
		}

		return res;
		
		
	}	
}



