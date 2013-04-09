
package
{
	import citrus.core.starling.StarlingCitrusEngine;
	
	import flash.display.Sprite;
	import flash.display.StageAlign;
	import flash.display.StageScaleMode;
	import flash.geom.Rectangle;
	
	import flash.system.Capabilities;
	
	//[SWF(width="1136", height="640", frameRate="40", BackgroundColor="#ccccccc")]
	//[SWF(frameRate="40", BackgroundColor="#ccccccc")]
	public class Main extends StarlingCitrusEngine
	{
		public function Main()
		{
			stage.align = StageAlign.TOP_LEFT;
			stage.scaleMode = StageScaleMode.NO_SCALE;
			
			var viewPortRectangle:Rectangle = new Rectangle();
			viewPortRectangle.width = Capabilities.screenResolutionX;
			viewPortRectangle.height = Capabilities.screenResolutionY;
			trace(viewPortRectangle);
			
			setUpStarling(true,1,viewPortRectangle);
			state = new TestScenario();
		}
	}
}