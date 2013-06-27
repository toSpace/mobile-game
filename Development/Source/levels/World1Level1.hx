
class World1Level1 extends Level {
	
	public override function loadLevel(){
		/*
		//load background
		#if !debug

		//layer 6
		//sterren (fixer?)
		//zon (fixex?)
		var lvl1_bg_l6_background = new BackgroundObject('world1/lvl1/bg/l6/lvl1_bg_l6_background.xml'); //Achtergrond repeat-x of iedere mobile/tablet x-1/2 andere afbeelding?
		var lvl1_bg_l6_sun = new BackgroundObject('world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml'); //x-as van de zon wilt zich niet verplaatsen?
		// var lvl1_bg_l6_star = new BackgroundObject('world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml'); //<- bestaat nog niet
		/// Voor iedere ster aparte xml krijg je 20 xml voor 20 sterren? of iets dat random shit doet of wat?

		//bg layer 5
		var lvl1_bg_l5_tree1 = new BackgroundObject('world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml');
		var lvl1_bg_l5_tree2 = new BackgroundObject('world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml');
		var lvl1_bg_l5_tree3 = new BackgroundObject('world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml');
		var lvl1_bg_l5_tree4 = new BackgroundObject('world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml');
		var lvl1_bg_l5_tree5 = new BackgroundObject('world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml');
		var lvl1_bg_l5_tree6 = new BackgroundObject('world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml');

		//bg layer 4
		var lvl1_bg_l4_hill1 = new BackgroundObject('world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml');
		var lvl1_bg_l4_hill2 = new BackgroundObject('world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml');
		var lvl1_bg_l4_hill3 = new BackgroundObject('world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml');
		//var lvl1_bg_l4_tree1 = new BackgroundObject('world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml');
		var lvl1_bg_l4_tree2 = new BackgroundObject('world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml');
		var lvl1_bg_l4_tree3 = new BackgroundObject('world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml');
		var lvl1_bg_l4_tree4 = new BackgroundObject('world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml');
		var lvl1_bg_l4_tree5 = new BackgroundObject('world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml');
		var lvl1_bg_l4_tree6 = new BackgroundObject('world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml');
		var lvl1_bg_l4_tree7 = new BackgroundObject('world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml');
		var lvl1_bg_l4_fog1 = new BackgroundObject('world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml');

		//bg layer 3
		var lvl1_bg_l3_tree1 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml');
		var lvl1_bg_l3_tree2 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml');
		var lvl1_bg_l3_tree3 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml');
		var lvl1_bg_l3_tree4 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml');
		var lvl1_bg_l3_tree5 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml');
		var lvl1_bg_l3_tree6 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml');
		var lvl1_bg_l3_tree7 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml');
		var lvl1_bg_l3_tree8 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml');
		var lvl1_bg_l3_tree9 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml');
		var lvl1_bg_l3_tree10 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml');
		var lvl1_bg_l3_tree11 = new BackgroundObject('world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml');
		
		//bg layer 2
		var lvl1_bg_l2_tree1 = new BackgroundObject('world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml');
		var lvl1_bg_l2_tree2 = new BackgroundObject('world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml');
		var lvl1_bg_l2_tree3 = new BackgroundObject('world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml');
		var lvl1_bg_l2_tree4 = new BackgroundObject('world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml');
		var lvl1_bg_l2_tree5 = new BackgroundObject('world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml');
		var lvl1_bg_l2_fog1 = new BackgroundObject('world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml');
		
		//bg layer 1
		var lvl1_bg_l1_hill1 = new BackgroundObject('world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml');
		var lvl1_bg_l1_hill2 = new BackgroundObject('world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml');
		var lvl1_bg_l1_hill3 = new BackgroundObject('world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml');
		var lvl1_bg_l1_hill4 = new BackgroundObject('world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml');
		var lvl1_bg_l1_fog1 = new BackgroundObject('world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml');

		#end
		
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
		var lvl1_fg_l2_grass1 = new BackgroundObject('world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml'); 
		var lvl1_fg_l2_grass2 = new BackgroundObject('world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml');
		var lvl1_fg_l2_grass3 = new BackgroundObject('world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml'); 
		var lvl1_fg_l2_grass4 = new BackgroundObject('world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml'); 
		var lvl1_fg_l2_grass5 = new BackgroundObject('world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml');  
		var lvl1_fg_l2_grass6 = new BackgroundObject('world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml'); 
		var lvl1_fg_l2_grass7 = new BackgroundObject('world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml'); 
		var lvl1_fg_l2_tree1 = new BackgroundObject('world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml');
		var lvl1_fg_l2_tree2 = new BackgroundObject('world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml');
		var lvl1_fg_l2_tree3 = new BackgroundObject('world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml');
		var lvl1_fg_l2_tree4 = new BackgroundObject('world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml');
		*/

		trace(Main.canvas);

    	//var lucy = new Lucy();

        //start again
        start();

	}

}