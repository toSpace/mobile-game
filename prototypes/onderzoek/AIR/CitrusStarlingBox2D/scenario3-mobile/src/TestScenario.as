package
{
	
	import citrus.core.starling.StarlingCitrusEngine;
	import citrus.core.starling.StarlingState;
	import citrus.objects.Box2DPhysicsObject;
	import citrus.objects.platformer.box2d.Enemy;
	import citrus.objects.platformer.box2d.Hero;
	import citrus.objects.platformer.box2d.Platform;
	import citrus.physics.box2d.Box2D;
	import citrus.view.starlingview.AnimationSequence;
	
	import flash.events.TimerEvent;
	import flash.utils.Timer;
	
	import starling.text.TextField;
	import starling.textures.Texture;
	import starling.textures.TextureAtlas;
	
	public class TestScenario extends StarlingState
	{
		
		public var stepTimer:Timer
		
		public function TestScenario()
		{
			super();
		}
		
		//load animations
		[Embed(source="sprites/TP-file.png")]
		private var heroAnimBitmap:Class;
		[Embed(source="sprites/TP-file.xml",mimeType="application/octet-stream")]
		private var heroAnimXML:Class;
		
		private var ta:TextureAtlas;
		private var animationSeq:AnimationSequence;
		private var numSprites:TextField;
		private var numSpritesCTR:int;
		
		override public function initialize():void
		{
			super.initialize();
			
			//make box2d
			var box2d:Box2D = new Box2D("Box2D");
			box2d.visible = false;
			add(box2d);
			
			//floor
			var floor:Platform = new Platform("bottom", {x:stage.stageWidth / 2, y:stage.stageHeight, width:stage.stageWidth});
			add(floor);
			
			//sides
			var sideL:Platform = new Platform("sideL", {x:0, y: stage.stageHeight/2, height:stage.stageHeight});
			add(sideL);
			var sideR:Platform = new Platform("sideR", {x:stage.stageWidth, y: stage.stageHeight/2, height:stage.stageHeight});
			add(sideR);
			
			//add texture
			ta = new TextureAtlas(Texture.fromBitmap(new heroAnimBitmap()),XML(new heroAnimXML()));
			animationSeq = new AnimationSequence(ta,["walk","jump","idle"],"walk",24);
			
			//player
			//var hero:Hero = new Hero("Davey", {x:100, y:350, width:60, height:135, view: animationSeq});
			//add(hero);
	
			//hero.view = animationSeq;
			
			//add timer
			stepTimer = new Timer(3000);
			stepTimer.addEventListener(TimerEvent.TIMER, onTick);
			stepTimer.start();
			
			numSprites = new TextField(40,20,'0');
			numSprites.y = 25;
			numSprites.autoScale = true;
			addChild(numSprites);
			numSpritesCTR = 0;
		}
		
		
		private function onTick(a_event:TimerEvent):void
		{
			addPlayer();
		}
		
		private function addPlayer():void{
			
			var animationSeq2:AnimationSequence = new AnimationSequence(ta,["walk","jump","idle"],"walk",24);
			
			//player
			var enemy:Enemy = new Enemy("enemy", {x:500, y:0, width:60, height:135, view: animationSeq2});
			enemy.enemyKillVelocity = 0;
			add(enemy);
			numSpritesCTR++;
			numSprites.text = String(numSpritesCTR);
		}
		
	}
}