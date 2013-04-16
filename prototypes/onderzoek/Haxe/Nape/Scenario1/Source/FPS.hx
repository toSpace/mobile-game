import nme.Lib;
import nme.text.TextField;
import nme.text.TextFormat;
import nme.events.Event;


class FPS extends TextField
{
   var times:Array<Float>;
   public var nrParticles:Int = 0;

   public function new(inX:Float=10.0, inY:Float=10.0, inCol:Int = 0xFFFFFF)
   {
      super();
      x = inX;
      y = inY;
      selectable = false;
      defaultTextFormat = new TextFormat("_sans", 12, 0, true);
      text = "FPS:";
      textColor = inCol;
      background = true;
      backgroundColor = 0x000000;
      width = 80;
      height = 40;
      times = [];
      addEventListener(Event.ENTER_FRAME, onEnter);
   }

   public function onEnter(_)
   {
	  var now = Lib.getTimer () / 1000;
      times.push(now);
      while(times[0]<now-1)
         times.shift();
      if (visible)
      {
         //trace(times.length);
         text = "FPS: " + times.length + "/" + Lib.current.stage.frameRate + "\nParticles: " + nrParticles;
      }
   }

   public function add():Bool
   {
      nrParticles++;

      return true;
   }

}
