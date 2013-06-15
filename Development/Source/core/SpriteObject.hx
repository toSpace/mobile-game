//tile layer
import aze.display.TileLayer;
import aze.display.TileClip;
import aze.display.SparrowTilesheet;

//nme
import nme.Lib;
import nme.Assets;
import nme.display.DisplayObject;

//nape
import nape.phys.Body;
import nape.space.Space;
import nape.geom.Vec2;
import nape.shape.Polygon;
import nape.phys.Material;
import nape.phys.BodyType;

class SpriteObject{

	var tLast:Float;
	var layer:TileLayer;
	var xml:Hash<Dynamic>;
	public var body:Body;
	var clip:TileClip;
	
	public function new(xmlUrl:String, sparrowXml:String){

		//read xml
		xml = readXml(xmlUrl);

		//make spritesheet
		makeSpritesheet(sparrowXml, xml.get('img'));

		//add to rendermanager
		RenderManager.add(this);

		//make clip
		makeClip( xml.get('clip') );

		makePhysics( xml.get('x') , xml.get('y') );
	}

	private function readXml(url:String){
		var p = new Hash<Dynamic>();
		var xmlFile = Assets.getText(Mobile.xml + url);
		var read = new haxe.xml.Fast( Xml.parse(xmlFile) );

		var asset = read.node.asset;
		p.set('img', Mobile.asset + asset.node.img.innerData);
		p.set('x', asset.node.pos.att.x);
		p.set('y', asset.node.pos.att.y);
		p.set('rotation', asset.node.pos.att.rotation);
		p.set('physics', asset.node.physics.innerData);
		p.set('clip', asset.node.clip.innerData);
		//todo material
		return p;
	}

	public function makeSpritesheet(xmlUrl:String, imgUrl:String){
		var sheetData = Assets.getText(Mobile.asset + xmlUrl);
		var tilesheet = new SparrowTilesheet(Assets.getBitmapData(imgUrl), sheetData);
		layer = new TileLayer(tilesheet);
		Main.canvas.addChild(layer.view);
	}

	public function makeClip(name:String, ?loop:Bool=true, ?play:Bool=true){
		
		clip = new TileClip(name, 24);
		layer.addChild(clip);
		layer.useSmoothing = true;

		//properties
		if(loop) clip.loop = true;
		if(play) clip.play();

		clip.x = 0;
		clip.y = 0;
		
		layer.render();

		//clip->asset

		//https://github.com/elsassph/nme-tilelayer
		//todo make tilelayer class
	}

	public function makePhysics(x: Float, y:Float){

		//create physics body
		y = Mobile.getY(layer.view) - y;
        body = new Body(BodyType.DYNAMIC, new Vec2(x,y) );
        var material:Material = new Material(0.1, 1.0, 2.0, 5.0, 0.001);
        body.shapes.add(new Polygon( Polygon.box(clip.width / 2 , clip.height) , material));
        Main.space.bodies.add(body);

        //add to canvas
        body.userData.graphic = layer.view;
        var pivot:Vec2 = new Vec2(0,0);
        body.userData.graphicOffset = pivot;

	}

	public function render(){
		renderPhysics();

		//animate spritesheet
		var tDelta:Float = Lib.getTimer() - tLast;
		tLast = Lib.getTimer();
		layer.step(Std.int(tDelta));
		layer.render();

	}

	private function renderPhysics():Void{
		//render this object
		var graphic:Null<DisplayObject> = body.userData.graphic;
        var graphicOffset:Vec2 = body.userData.graphicOffset;
        var position:Vec2 = body.localPointToWorld(graphicOffset);
        graphic.x = position.x;
        graphic.y = position.y;
        graphic.rotation = (body.rotation * 180/Math.PI) % 360;
        position.dispose();

	}

	public function setXY(x:Float, y:Float, offset:Bool=false){
		y = Mobile.getY(layer.view) - y;
		var bodyOffset:Vec2 = body.userData.graphicOffset;
		if(offset){
			x -= bodyOffset.x;
			y -= bodyOffset.y;
		}
		body.position.setxy(x, y);
	}

}