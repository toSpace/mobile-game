class World1Level1 extends Level {
	
	public override function loadLevel(){

		//add items
        var pika = new DrawObject('test2.xml');
        var useless = new DrawObject('test.xml');

        //start again
        start();

	}

}