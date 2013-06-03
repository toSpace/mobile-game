import nme.events.MouseEvent;

class DrawButton extends UIobject{

	public function new(){
		super('button.png', Mobile.screenWidth - 44 - 10, 10, true);
	}
	
	public override function click(ev:MouseEvent){
		trace('click');
	}

}