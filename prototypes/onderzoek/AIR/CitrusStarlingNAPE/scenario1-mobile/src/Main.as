package
{
	import citrus.core.starling.StarlingCitrusEngine;
	
	[SWF(width="1136", height="640", frameRate="60", BackgroundColor="#ccccccc")]
	public class Main extends StarlingCitrusEngine
	{
		public function Main()
		{
			setUpStarling(true);
			state = new TestScenario();
		}
	}
}