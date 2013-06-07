class World1Level1 extends Level {
	
	public override function loadLevel(){

		//load background
		#if !debug
		var bg1 = new BackgroundObject('bg.xml');
		#end

		//add items
        var pika = new DrawObject('test2.xml');
        var useless = new DrawObject('test.xml');
        var lucy = new Lucy();

        //start again
        start();

	}

}