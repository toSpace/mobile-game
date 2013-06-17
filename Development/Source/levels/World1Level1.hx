class World1Level1 extends Level {
	
	public override function loadLevel(){

		//load background
		#if !debug
		// var bg1 = new BackgroundObject('bg.xml');
		#end

		//add items
		var lvl1_fg_l1__1 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_1.xml');
		var lvl1_fg_l1__2 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_2.xml');
		var lvl1_fg_l1__3 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_3.xml');
		var lvl1_fg_l1__4 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_4.xml');
		var lvl1_fg_l1__5 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_5.xml');
		var lvl1_fg_l1__6 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_6.xml');
		var lvl1_fg_l1__7 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_7.xml');
		var lvl1_fg_l1__8 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_8.xml');

        //var pika = new DrawObject('test2.xml');
        // var useless = new DrawObject('test.xml');
        #if !debug 
        	var lucy = new Lucy();
        #end

        //start again
        start();

	}

}