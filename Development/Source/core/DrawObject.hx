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
import nme.geom.Point;
import nme.display.BlendMode;

//nape
import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.geom.Vec2;

class DrawObject extends GameObject{

    var drawing:Bool = false;
    var drawingCanvas:Sprite;
    var physicType:String;

	public function new(xmlUrl:Dynamic):Void{
        if(Std.is(xmlUrl, String)){
            super(xmlUrl);
        } else {
            loadBitmap(xmlUrl);
        }
	}

    public function loadBitmap(bitmap:Bitmap, ?physics:String='static'){

        //setting correct stages
        space = Main.space;
        canvas = Main.canvas;
        asset = bitmap;

        //read xml
        canvas.addChild(bitmap);
        var p = new Hash<Dynamic>();
        p.set('x', bitmap.x);
        p.set('y', bitmap.y);
        p.set('rotation', bitmap.rotation);
        p.set('physics', physics);
        xml = p;

        //make physics object
        physicsObject(physics);

        //add to render manager
        RenderManager.add(this);

    }

	public override function physicsObject(physic:String){
        physicType = physic;
        convert( physic,xml.get('x') , xml.get('y') , xml.get('rotation') );
	}

	public function convert(bodyT:String, x:Float, y:Float, rotation:Float):Void{

		//create iso
        var objIso:BitmapDataIso = new BitmapDataIso(asset.bitmapData);

        //make body
        body = IsoBody.run(#if flash objIso #else objIso.iso #end, objIso.bounds);
        body.userData.graphic = asset;

        //position
        setXY(x,y,true);

        //bodytype
        switch bodyT{
        	case 'static':
        		body.type = BodyType.STATIC;		
        	case 'dynamic':
        		body.type = BodyType.DYNAMIC;
    		case 'kinematic':
    			body.type = BodyType.KINEMATIC;
			default:
				body.type = BodyType.STATIC;
        }

        //add to space
        body.space = space;

	}

	public function updateBody():Void{
        //convert again on asset position
        convert(physicType,asset.x,asset.y, xml.get('rotation'));
	}

    public override function render():Void{
        //only if in view
        if(inView()){

            //do the physics stuff
            renderPhysics();

            //only if drawing - todo only if on screen
            if(Drawing.drawing && Drawing.erasing){
                //var checkActive = Drawing.checkActive(body);
                var checkActive = Drawing.mouseOver(asset);

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
    }

    private function startDrawing():Void{
        drawing = true;

        //make sprite
        drawingCanvas = new Sprite();

        //drawingCanvas.x = asset.x;
        //drawingCanvas.y = asset.y;
        drawingCanvas.width = asset.width;
        drawingCanvas.height = asset.height;

        //start drawing
        drawingCanvas.graphics.lineStyle(Settings.brushSize,0xFF0000, 1, true);

        //make point
        var point:Point = asset.globalToLocal( new Point(Drawing.x, Drawing.y) );
        drawingCanvas.graphics.moveTo(point.x, point.y);
        
        Main.canvas.addChild(drawingCanvas);
    }

    private function stopDrawing():Void{
        drawing=false;

        //remove body
        Main.space.bodies.remove(body);

        //erease some bitmap thingies
        asset.bitmapData.draw( drawingCanvas, new Matrix(), BlendMode.ERASE );
        //Main.canvas.removeChild(drawingCanvas);

        //convert again
        updateBody();
        
    }

    private function draw():Void{
        var point:Point = asset.globalToLocal( new Point(Drawing.x, Drawing.y) );
        drawingCanvas.graphics.lineTo(point.x, point.y);
        //drawingCanvas.x = asset.x;
        //drawingCanvas.y = asset.y;
    }

}