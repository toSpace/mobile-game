package
{
	
	import citrus.core.starling.StarlingCitrusEngine;
	import citrus.core.starling.StarlingState;
	import citrus.objects.Box2DPhysicsObject;
	import citrus.objects.platformer.box2d.Platform;
	import citrus.physics.box2d.Box2D;
	
	import flash.display.Sprite;
	import flash.events.TimerEvent;
	import flash.sensors.Accelerometer;
	import flash.events.AccelerometerEvent;
	import flash.utils.Timer;
	
	public class TestScenario extends StarlingState
	{
		
		public var stepTimer:Timer;
		public var particleIteration:int;
		public var currentStage:int = 0; 
		public var numParticles:int = 0;
		
		public function TestScenario()
		{
			super();
		}
		
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
			
			//add timer
			particleIteration = 0;
			stepTimer = new Timer(100);
			stepTimer.addEventListener(TimerEvent.TIMER, onTick);
			stepTimer.start();
			
			//add accelerometer support
			var sensor:Accelerometer = new Accelerometer();
			var isSupported:Boolean = Accelerometer.isSupported;
			
			if(isSupported){
				sensor.addEventListener(AccelerometerEvent.UPDATE, sensorHandler);
			}

		}
		
		private function onTick(a_event:TimerEvent):void
		{
			//stage 0
			if(currentStage == 0 && numParticles < 10){
				addParticle();
				numParticles++;
			}
		}
		
		private function addParticle():void
		{
			//lists
			var particles:Array = ['rugby','8ball','greenleaf','banaan','pikachu','bier','redleaf','tennisbal'];
			var startPoints:Array = [0.75, 0.25, 0.5, 0.25, 0.5, 0.75, 0.5];
			
			//reloop
			if(particleIteration == particles.length){ particleIteration = 0; }
			
			//select
			var selected:String = particles[particleIteration];
			var startSelected:int = Number(startPoints[particleIteration]) * stage.stageWidth;
			
			//iterate
			particleIteration ++;
			
			var particle:PhysicsEditorObjects = new PhysicsEditorObjects("particle" + stepTimer.currentCount , {peObject: selected, x: startSelected, y: 0, view:"assets/"+selected+".png", registration:"center"});
			add(particle);	
		}
		
		private function sensorHandler(evt:AccelerometerEvent):void {
			trace('x:' + evt.accelerationX);
			trace('y:' + evt.accelerationY);
			trace('z:' + evt.accelerationZ);
		}
		
	}
}