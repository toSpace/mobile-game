//nme
import nme.events.MouseEvent;
import nme.display.Bitmap;
import nme.Assets;

class DrawButton extends UIobject{

	private var asset_over:Bitmap;
	private var asset_out:Bitmap;

	public function new(){
		super('general/gui/button.png', Mobile.screenWidth - 44 - 10, 10, true);

		asset_over = new Bitmap( Assets.getBitmapData( Mobile.asset + 'general/gui/button2.png') );
	}
	
	public override function mouseClick(ev:MouseEvent){
		
		if(Drawing.erasing){
			Drawing.erasing = false;

			parent.removeChild(asset);
			parent.addChild(asset_over);
		} else {
			Drawing.erasing = true;

			parent.removeChild(asset_over);
			parent.addChild(asset);
		}
		
	}

}