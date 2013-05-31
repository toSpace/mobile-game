class BackgroundObject{

	public var canvas:Sprite;
	public var asset:Bitmap;
	public var xml:Hash<Dynamic>;
	
	function new(xmlUrl:String){
		//setting correct stages
		canvas = Main.canvas;

		//read xml
		xml = readXml(xmlUrl);

		//get image
		asset = new Bitmap( Assets.getBitmapData(xml.get('img')) );
		asset.x = xml.get('x');
		asset.y = xml.get('y');
		canvas.addChild(asset);

		//add to render manager
		RenderManager.add(this);

		return this;
	}

	private function readXml(url:String):Hash<Dynamic>{
		var p = new Hash<Dynamic>();
		var xmlFile = Assets.getText(Retina.xml + url);
		var read = new haxe.xml.Fast( Xml.parse(xmlFile) );

		var asset = read.node.asset;
		p.set('img', Retina.asset + asset.node.img.innerData);
		p.set('x', asset.node.pos.att.x);
		p.set('y', asset.node.pos.att.y);
		p.set('blendmode', asset.node.blendmode.innerData);
		p.set('speed', asset.node.paralax.innerData);
		p.set('startX', asset.node.paralax.attr.startX);
		p.set('endX', asset.node.paralax.attr.endX);

		return p;
	}

	public function render(){
		//paralax effect
	}

}