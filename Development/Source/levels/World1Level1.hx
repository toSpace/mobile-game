class World1Level1 extends Level {
	
	public override function loadLevel(){

		//load background
		#if !debug

		// var bg1 = new BackgroundObject('bg.xml');
		#end

		//bg layer 3
		var lvl1_bg_l3_tree1 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml');
		var lvl1_bg_l3_tree2 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml');
		var lvl1_bg_l3_tree2 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml');
		var lvl1_bg_l3_tree2 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml');
		var lvl1_bg_l3_tree2 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml');

		//bg layer 2
		var lvl1_bg_l2_tree1 = new BackgroundObject('world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml');
		var lvl1_bg_l2_tree2 = new BackgroundObject('world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml');
		var lvl1_bg_l2_tree3 = new BackgroundObject('world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml');
		var lvl1_bg_l2_tree4 = new BackgroundObject('world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml');

		//bg layer 1
		var lvl1_bg_l1_hill1 = new BackgroundObject('world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml');
		var lvl1_bg_l1_hill2 = new BackgroundObject('world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml');
		var lvl1_bg_l1_hill3 = new BackgroundObject('world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml');
		var lvl1_bg_l1_hill4 = new BackgroundObject('world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml');

		
		//fg layer 1 (erasable)
		var lvl1_fg_l1_1 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_1.xml');
		var lvl1_fg_l1_2 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_2.xml');
		var lvl1_fg_l1_3 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_3.xml');
		var lvl1_fg_l1_4 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_4.xml');
		var lvl1_fg_l1_5 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_5.xml');
		var lvl1_fg_l1_6 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_6.xml');
		var lvl1_fg_l1_7 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_7.xml');
		var lvl1_fg_l1_8 = new DrawObject('world1/lvl1/fg/l1/lvl1_fg_l1_8.xml');

		//fg layer 2
		//var lvl1_fg_l2_1 = new BackgroundObject('world1/lvl1/fg/l2/lvl1_fg_l1_2.xml');

    	//var lucy = new Lucy();

        //start again
        start();

	}

}