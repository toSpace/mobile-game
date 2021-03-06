//nape
import nape.geom.Vec2;
import nape.phys.Body;

class Character{
	
	public function new():Void{
		RenderManager.add(this);
	}

	public function render():Void{}

	public function walk(body:Body, speed:Float, velocity:Float){
		var impulse = new Vec2(speed, 0);
		body.applyImpulse(impulse);
        
        if (body.velocity.x < velocity) {
               body.velocity.x = velocity;
        }
	}

}