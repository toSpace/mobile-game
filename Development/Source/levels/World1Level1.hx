class World1Level1 extends Level {
	
	public override function loadLevel(){

		//load background
		#if !debug
		// var bg1 = new BackgroundObject('bg.xml');
		#end

		//add items

		var fg1_1 = new DrawObject('Specific/Level1/Environment/Foreground/FG1/fg1_1.xml');
		var fg1_2 = new DrawObject('Specific/Level1/Environment/Foreground/FG1/fg1_2.xml');
		var fg1_3 = new DrawObject('Specific/Level1/Environment/Foreground/FG1/fg1_3.xml');
		var fg1_4 = new DrawObject('Specific/Level1/Environment/Foreground/FG1/fg1_4.xml');

        var pika = new DrawObject('test2.xml');
        // var useless = new DrawObject('test.xml');
        // var lucy = new Lucy();

        //start again
        start();

	}

}