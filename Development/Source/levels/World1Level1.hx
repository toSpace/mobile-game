class World1Level1 extends Level {
	
	public override function loadLevel(){

		//load background
		#if !debug
		// var bg1 = new BackgroundObject('bg.xml');
		#end

		//add items
		var lvl1_fg_l1_1 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_1.xml');
		var lvl1_fg_l1_2 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_2.xml');
		var lvl1_fg_l1_3 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_3.xml');
		var lvl1_fg_l1_4 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_4.xml');
		var lvl1_fg_l1_5 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_5.xml');
		var lvl1_fg_l1_6 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_6.xml');
		var lvl1_fg_l1_7 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_7.xml');
		var lvl1_fg_l1_8 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_8.xml');

    	//var lucy = new Lucy();

        //start again
        start();

	}

}