package
{
	import citrus.core.starling.StarlingCitrusEngine;
	
	[SWF(width="1136", height="640", frameRate="60", BackgroundColor="#ccccccc")]
	public class scenario1 extends StarlingCitrusEngine
	{
		public function scenario1()
		{
			setUpStarling(true);
			state = new TestScenario();
		}
	}
}