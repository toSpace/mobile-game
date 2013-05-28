//nme
import nme.display.Sprite;
import nme.Assets;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.events.MouseEvent;
import nme.display.Sprite;
import nme.display.Bitmap;
import nme.display.BitmapData;
import nme.geom.Matrix;
import nme.display.BlendMode;

//nape
import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyType;

class DrawObject extends GameObject{

    var drawing:Bool = false;
    var drawingCanvas:Sprite;

	public function new(xmlUrl:String):Void{
		super(xmlUrl);
	}

	public override function physicsObject(physic:String){
		convert(physic,xml.get('x'),xml.get('y'), xml.get('rotation'));
	}

	public function convert(bodyT:String, x:Int, y:Int, rotation:Int):Void{

		//create iso
        var objIso:BitmapDataIso = new BitmapDataIso(asset.bitmapData);

        //make body
        body = IsoBody.run(objIso, objIso.bounds);
        body.userData.graphic = asset;

        //position
        setXY(x,y,true);

        //bodytype
        switch bodyT{
        	case 'static':
        		body.type = BodyType.STATIC;		
        	case 'dynamic':
        		body.type = BodyType.DYNAMIC;
    		case 'KINEMATIC':
    			body.type = BodyType.KINEMATIC;
			default:
				body.type = BodyType.STATIC;
        }

        //add to space
        body.space = space;

	}

	public function updateBody():Void{
		//convert();
	}

    public override function render():Void{
        renderPhysics();

        //only if drawing - todo only if on screen
        if(Drawing.drawing){
            var checkActive = Drawing.checkActive(body);

            if( checkActive && !drawing){
                startDrawing();
            } 
            else if (checkActive && drawing){
                draw();
            }

        } else{
            if(drawing == true){
                stopDrawing();
            }
        }
    }

    private function startDrawing():Void{
        drawing = true;

        //make sprite
        drawingCanvas = new Sprite();
        drawingCanvas.x = asset.x;
        drawingCanvas.y = asset.y;
        drawingCanvas.width = asset.width;
        drawingCanvas.height = asset.height;

        //start drawing
        Main.canvas.addChild(drawingCanvas);
        drawingCanvas.graphics.lineStyle(20,0xFF0000,1);
        drawingCanvas.graphics.moveTo(Drawing.x, Drawing.y);
    }

    private function stopDrawing():Void{
        drawing=false;

        //var matrix = new Matrix();
        asset.bitmapData.draw( drawingCanvas, new Matrix(), BlendMode.ERASE );
        Main.canvas.removeChild(drawingCanvas);

    }

    private function draw():Void{
        drawingCanvas.graphics.lineTo(Drawing.x, Drawing.y);
        drawingCanvas.x = asset.x;
        drawingCanvas.y = asset.y;
    }

}