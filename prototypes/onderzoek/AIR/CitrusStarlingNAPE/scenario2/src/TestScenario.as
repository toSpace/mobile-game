package
{

	
	import citrus.core.starling.StarlingCitrusEngine;
	import citrus.core.starling.StarlingState;
	import citrus.objects.NapePhysicsObject;
	import citrus.objects.platformer.nape.Platform;
	import citrus.physics.nape.Nape;
	
	import flash.display.Sprite;
	import flash.events.AccelerometerEvent;
	import flash.events.ActivityEvent;
	import flash.events.TimerEvent;
	import flash.media.Microphone;
	import flash.sensors.Accelerometer;
	import flash.utils.Timer;
	
	import nape.geom.Vec2;
	
	public class TestScenario extends StarlingState
	{
		
		public var stepTimer:Timer;
		public var particleIteration:int;
		public var numParticles:int = 0;
		
		public var NAPE:Nape;
		
		public var mic:Microphone;
		
		public function TestScenario()
		{
			super();
		}
		
		override public function initialize():void
		{
			super.initialize();
			
			//make box2d
			NAPE = new Nape("NAPE");
			NAPE.visible = false;
			add(NAPE);
			
			//floor
			var floor:Platform = new Platform("bottom", {x:stage.stageWidth / 2, y:stage.stageHeight, width:stage.stageWidth});
			add(floor);
			
			//roof
			var roof:Platform = new Platform("bottom", {x:stage.stageWidth / 2, y:0, width:stage.stageWidth});
			add(roof);
			
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
			
			//microphone
			mic = Microphone.getMicrophone();
			mic.gain = 60;
			mic.rate = 11;
			mic.setUseEchoSuppression(true);
			mic.setLoopBack(true);
			mic.setSilenceLevel(5, 1000);
			
			mic.addEventListener(ActivityEvent.ACTIVITY, soundEvent);

		}
		
		private function onTick(a_event:TimerEvent):void
		{
			//stage 1
			if(numParticles < 10){
				addParticle();
				numParticles++;
			} 
			
			if(mic.activityLevel){
				createForce(10 - (mic.activityLevel*0.6));
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
			
			var particle:PhysicsEditorObjects = new PhysicsEditorObjects("particle" + stepTimer.currentCount , {peObject: selected, x: startSelected, y: stage.stageHeight/2, view:"assets/"+selected+".png", registration:"center"});
			add(particle);	
		}
		
		private function sensorHandler(evt:AccelerometerEvent):void {
			trace('x:' + evt.accelerationX);
			trace('y:' + evt.accelerationY);
			trace('z:' + evt.accelerationZ);
		}
		
		private function soundEvent(evt:ActivityEvent):void {
			var newGravity:Vec2;
			if(!evt.activating){
				newGravity = new Vec2(0, 10);
				NAPE.gravity = newGravity;
			}
		}
		
		private function createForce(force:int):void{
			var newGravity:Vec2 = new Vec2(0, force ); 
			NAPE.gravity = newGravity;
		}

		
	}
}