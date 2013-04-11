package
{
	import citrus.core.starling.StarlingCitrusEngine;
	
	[SWF(width="1136", height="640", frameRate="60", BackgroundColor="#ccccccc")]
	public class scenario2 extends StarlingCitrusEngine
	{
		public function scenario2()
		{
			setUpStarling(true);
			state = new TestScenario();
		}
	}
}