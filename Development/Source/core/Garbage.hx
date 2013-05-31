//clean memory from past level(s)
class Garbage {

	private static var garbageList = new Array<Dynamic>();
	
	public static function add(element:Dynamic){
		garbageList.push(element);
	}

	public static function clean(){
		//wipe that shit clean
		for(object in garbageList){
			object = null;
		}

		clearList();
	}

	private static function clearList(){
		garbageList = new Array<Dynamic>();
	}

}