package
{
	import citrus.core.starling.StarlingCitrusEngine;
	
	[SWF(width="1136", height="640", BackgroundColor="#ccccccc")]
	public class scenario3 extends StarlingCitrusEngine
	{
		public function scenario3()
		{
			setUpStarling(true);
			state = new TestScenario();
		}
	}
}