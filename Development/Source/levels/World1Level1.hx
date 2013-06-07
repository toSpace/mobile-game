class World1Level1 extends Level {
	
	public override function loadLevel(){

		//load background
		#if !debug
		var bg1 = new BackgroundObject('bg.xml');
		#end

		//add items
        var pika = new DrawObject('test2.xml');
        var useless = new DrawObject('test.xml');
        var lucy = new SpriteObject('walking.xml', 'walking-sparrow.xml');

        //start again
        start();

	}

}