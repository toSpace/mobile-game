﻿package{		public class Main extends StarlingCitrusEngine { 		public function Main() {	 			setUpStarling(true);						state = new StarlingDemoGameState();		}					public function StarlingDemoGameState() {			super();		}		 		override public function initialize():void {			super.initialize();						var box2D:Box2D = new Box2D("box2D");			box2D.visible = true;			add(box2D);		}	}}