//nme
import flash.display.Sprite;
import openfl.Assets;
import flash.events.Event;
import flash.events.EventDispatcher;
import flash.events.MouseEvent;
import flash.display.Sprite;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.geom.Matrix;
import flash.geom.Point;
import flash.geom.Rectangle;
import flash.display.BlendMode;
import flash.geom.ColorTransform;
import flash.Vector;
import flash.display.BitmapDataChannel;

//nape
import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.geom.Vec2;

class DrawObject extends GameObject{

    var drawing:Bool = false;
    var drawingCanvas:Sprite;
    var physicType:String;
    var mass:Float = -1;

	public function new(xmlUrl:Dynamic):Void{
        if(Std.is(xmlUrl, String)){
            super(xmlUrl);
        } else {
            loadBitmap(xmlUrl);
        }

        //add to drawlist
        Drawing.addDrawObject(this);
	}

    public function loadBitmap(bitmap:Bitmap, ?physics:String='static'){

        //setting correct stages
        space = Main.space;
        canvas = Main.canvas;
        asset = bitmap;

        //read xml
        canvas.addChild(bitmap);
        _x = bitmap.x;
        _y = bitmap.y;
        _rotation = bitmap.rotation;
        _physics = physics;

        //make physics object
        mass = 0;
        physicsObject(physics);

        //add to render manager
        RenderManager.add(this);

    }

	public override function physicsObject(physic:String){
        physicType = physic;
        convert( physic, _x , _y , _rotation );
	}

	public function convert(bodyT:String, x:Float, y:Float, rotation:Float):Void{

        //save mass
        if(body != null) { mass = body.mass; }

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

        //measure change in mass
        if(mass >= 0) { 
            Main.activeLevel.addToNightmare( Math.abs(body.mass - mass) ); 
        }

	}

	public function updateBody():Void{
        //convert again on asset position
        convert(physicType,asset.x,asset.y, asset.rotation);
	}

    public override function render():Void{
        //only if in view
        if(inView()){

            //do the physics stuff
            renderPhysics();

            //only if drawing - todo only if on screen
            if(Drawing.drawing && Drawing.erasing){
                //var checkActive = Drawing.checkActive(body);
                //TODO make bounds bigger!
                var checkActive = Drawing.mouseOver(asset); 

                if( checkActive && !drawing){
                    //startDrawing();
                } 
                else if (drawing){
                    //draw();
                }

            } else{
                if(drawing == true){
                    //stopDrawing();
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
        //drawingCanvas.width = asset.width;
        //drawingCanvas.height = asset.height;

        //start drawing
        drawingCanvas.graphics.lineStyle(Settings.brushSize,0xFF0000, 1, true);

        //make point
        //var point:Point = asset.globalToLocal( new Point(Drawing.x, Drawing.y) );
        drawingCanvas.graphics.moveTo(Drawing.x, Drawing.y);
        
        Main.canvas.addChild(drawingCanvas);

    }

    private function stopDrawing():Void{
        drawing=false;

        //erase(drawingCanvas);

        
    }

    public function erase(erase:Sprite, bitmap:Bitmap):Void{
        //remove body
        Main.space.bodies.remove(body);

        //make matrix
        var bounds:Rectangle = erase.getBounds(Main.canvas);
        var matrix = new Matrix();
        //var point:Point = asset.localToGlobal( new Point(0,0) );
        //var point2:Point = Main.canvas.globalToLocal(point);

        matrix.tx = 0 - asset.x;
        matrix.ty = 0 - asset.y;

        //color
        var color = new ColorTransform();
        //color.alphaMultiplier = 1;

        //transform drawing to bitmap
        //asset.bitmapData.copyPixels(asset.bitmapData, new Rectangle(0, 0, asset.width, asset.height), new Point(0,0), bitmap.bitmapData,  new Point(-asset.x,-asset.y), true);
        //asset.bitmapData.copyChannel(bitmap.bitmapData, new Rectangle(0, 0, bitmap.width, bitmap.height), new Point(-asset.x,-asset.y), BitmapDataChannel.ALPHA, BitmapDataChannel.ALPHA);

        //erease some bitmap thingies
        asset.blendMode = BlendMode.LAYER;
        asset.bitmapData.draw( erase, matrix, color, BlendMode.ERASE);

        //convert again
        updateBody();
    }

    private function draw():Void{
        //var point:Point = asset.globalToLocal( new Point(Drawing.x, Drawing.y) );
        drawingCanvas.graphics.lineTo(Drawing.x, Drawing.y);
        //drawingCanvas.x = asset.x;
        //drawingCanvas.y = asset.y;
    }

    private function invert(image:BitmapData):BitmapData{
        var pixels = new Vector();
        for(y in 0 ... image.height){
            for(x in 0 ... image.width){

                //(r<<16 | g<<8 | b)
                //image.setPixel32(x, y, (255 - (image.getPixel32(x,y)>>>24) | image.getPixel(x,y));

                var pixel:Int = image.getPixel32(x,y);
                var a:Int = 255 - image.getPixel32(x,y)>>>24;
                var r:Int = pixel >>> 16;
                var g:Int = pixel >>> 8 & 0xFF;
                var b:Int = pixel & 0xFF;

                var i =
                    ((a & 255) << 24) |
                    ((r & 255) << 16) |
                    ((g & 255) << 8) |
                    (b & 255);

                pixels.push(i);
                
            }
        }

        image.setVector(new Rectangle(0,0, image.width, image.height), pixels);

        return image;
    }

}