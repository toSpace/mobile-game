package {

	import citrus.objects.NapePhysicsObject

	import nape.geom.Vec2;
	import nape.phys.Material;
	import nape.shape.Polygon;

	/**
	 * @author Aymeric
	 * <p>This is a class created by the software <a href="http://www.physicseditor.de/">PhysicsEditor</a></p>
	 * <p>Launch PhysicsEditor, select the CitrusEngine template, upload your png picture, set polygons and export.</p>
	 * <p>Be careful, the anchor point is not the localCOM but object's center!</p>
	 * @param peObject the name of the png file
	 */
    public class PhysicsEditorObjects extends NapePhysicsObject {
		
		[Inspectable(defaultValue="")]
		public var peObject:String = "";

		private var _tab:Array;

		public function PhysicsEditorObjects(name:String, params:Object = null) {

			super(name, params);
		}

		override public function destroy():void {

			super.destroy();
		}

		override public function update(timeDelta:Number):void {

			super.update(timeDelta);
		}

		override protected function createShape():void {

			_createVertices();

			for (var i:uint = 0; i < _tab.length; ++i) {

				var polygonShape:Polygon = new Polygon(_tab[i]);
				_shape = polygonShape;
				_body.shapes.add(_shape);
			}

			_body.translateShapes(Vec2.weak(-_body.bounds.width * 0.5, -_body.bounds.height * 0.5));

			_body.position.x += _body.bounds.width * 0.5;
			_body.position.y += _body.bounds.height * 0.5;
		}

		override protected function createMaterial():void {
			
			_material = new Material(_getElasticity(), _getDynamicFriction(), _getStaticFriction(), _getDensity(), _getRollingFriction());
		}
		
        protected function _createVertices():void {
			
			_tab = [];
			var vertices:Array = [];

			switch (peObject) {
				
				case "rugby":
											
			        vertices.push(Vec2.weak(149.5, 46));
					vertices.push(Vec2.weak(140, 28.5));
					vertices.push(Vec2.weak(117, 11.5));
					vertices.push(Vec2.weak(90, 1.5));
					vertices.push(Vec2.weak(28, 71));
					vertices.push(Vec2.weak(67, 84.5));
					vertices.push(Vec2.weak(97, 82.5));
					vertices.push(Vec2.weak(133, 64.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(28, 71));
					vertices.push(Vec2.weak(90, 1.5));
					vertices.push(Vec2.weak(66, 0.5));
					vertices.push(Vec2.weak(65, 0.5));
					vertices.push(Vec2.weak(26.5, 14));
					vertices.push(Vec2.weak(3, 48));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(1, 38));
					vertices.push(Vec2.weak(3, 48));
					vertices.push(Vec2.weak(26.5, 14));
					
					_tab.push(vertices);
											
			        vertices.push(Vec2.weak(149.5, 41));
					vertices.push(Vec2.weak(146, 35.5));
					vertices.push(Vec2.weak(122, 14.5));
					vertices.push(Vec2.weak(90, 1.5));
					vertices.push(Vec2.weak(66, 0.5));
					vertices.push(Vec2.weak(65, 0.5));
					vertices.push(Vec2.weak(49, 3.5));
					vertices.push(Vec2.weak(146.5, 51));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(1.5, 47));
					vertices.push(Vec2.weak(7, 53.5));
					vertices.push(Vec2.weak(30, 72.5));
					vertices.push(Vec2.weak(60, 83.5));
					vertices.push(Vec2.weak(92, 83.5));
					vertices.push(Vec2.weak(49, 3.5));
					vertices.push(Vec2.weak(26.5, 14));
					vertices.push(Vec2.weak(0.5, 39));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(92, 83.5));
					vertices.push(Vec2.weak(120.5, 73));
					vertices.push(Vec2.weak(146.5, 51));
					vertices.push(Vec2.weak(49, 3.5));
					
					_tab.push(vertices);
					
					break;
			
				case "8ball":
											
			        vertices.push(Vec2.weak(1.5, 13));
					vertices.push(Vec2.weak(0.5, 33));
					vertices.push(Vec2.weak(10.5, 46));
					vertices.push(Vec2.weak(48.5, 17));
					vertices.push(Vec2.weak(39.5, 4));
					vertices.push(Vec2.weak(20, -0.5));
					vertices.push(Vec2.weak(19, -0.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(46.5, 37));
					vertices.push(Vec2.weak(48.5, 17));
					vertices.push(Vec2.weak(10.5, 46));
					vertices.push(Vec2.weak(30, 49.5));
					
					_tab.push(vertices);
					
					break;
			
				case "banaan":
											
			        vertices.push(Vec2.weak(137, 126.5));
					vertices.push(Vec2.weak(142, 111.5));
					vertices.push(Vec2.weak(133.5, 84));
					vertices.push(Vec2.weak(118, 63.5));
					vertices.push(Vec2.weak(122.5, 92));
					vertices.push(Vec2.weak(128.5, 122));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(74, 131.5));
					vertices.push(Vec2.weak(78, 112.5));
					vertices.push(Vec2.weak(59, 90.5));
					vertices.push(Vec2.weak(69, 122.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(34.5, 26));
					vertices.push(Vec2.weak(25.5, 38));
					vertices.push(Vec2.weak(62.5, 81));
					vertices.push(Vec2.weak(76.5, 67));
					vertices.push(Vec2.weak(58.5, 36));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(118, 63.5));
					vertices.push(Vec2.weak(102.5, 63));
					vertices.push(Vec2.weak(100.5, 91));
					vertices.push(Vec2.weak(108.5, 119));
					vertices.push(Vec2.weak(122.5, 92));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(88, 135.5));
					vertices.push(Vec2.weak(108.5, 119));
					vertices.push(Vec2.weak(100.5, 91));
					vertices.push(Vec2.weak(84.5, 128));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(10, 94.5));
					vertices.push(Vec2.weak(4, 102.5));
					vertices.push(Vec2.weak(44, 122.5));
					vertices.push(Vec2.weak(35, 100.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(35, 100.5));
					vertices.push(Vec2.weak(44, 122.5));
					vertices.push(Vec2.weak(69, 122.5));
					vertices.push(Vec2.weak(59, 90.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(78, 112.5));
					vertices.push(Vec2.weak(100.5, 91));
					vertices.push(Vec2.weak(76.5, 67));
					vertices.push(Vec2.weak(62.5, 81));
					vertices.push(Vec2.weak(59, 90.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(76.5, 67));
					vertices.push(Vec2.weak(100.5, 91));
					vertices.push(Vec2.weak(102.5, 63));
					vertices.push(Vec2.weak(98.5, 28));
					vertices.push(Vec2.weak(85, 5.5));
					vertices.push(Vec2.weak(84, 5.5));
					vertices.push(Vec2.weak(74.5, 12));
					
					_tab.push(vertices);
					
					break;
			
				case "bier":
											
			        vertices.push(Vec2.weak(2, 146.5));
					vertices.push(Vec2.weak(27, 149.5));
					vertices.push(Vec2.weak(40.5, 138));
					vertices.push(Vec2.weak(40.5, 68));
					vertices.push(Vec2.weak(29.5, 4));
					vertices.push(Vec2.weak(15, -0.5));
					vertices.push(Vec2.weak(-0.5, 66));
					vertices.push(Vec2.weak(-0.5, 136));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(29.5, 4));
					vertices.push(Vec2.weak(16, -0.5));
					vertices.push(Vec2.weak(15, -0.5));
					
					_tab.push(vertices);
					
					break;
			
				case "greenleaf":
											
			        vertices.push(Vec2.weak(96.5, 10));
					vertices.push(Vec2.weak(68, 1.5));
					vertices.push(Vec2.weak(67, 1.5));
					vertices.push(Vec2.weak(40, 44.5));
					vertices.push(Vec2.weak(59, 48.5));
					vertices.push(Vec2.weak(78, 41.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(42.5, 16));
					vertices.push(Vec2.weak(34, 45.5));
					vertices.push(Vec2.weak(40, 44.5));
					vertices.push(Vec2.weak(67, 1.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(3, 60.5));
					vertices.push(Vec2.weak(40, 44.5));
					vertices.push(Vec2.weak(34, 45.5));
					
					_tab.push(vertices);
					
					break;
			
				case "pikachu":
											
			        vertices.push(Vec2.weak(31, 142.5));
					vertices.push(Vec2.weak(44.5, 135));
					vertices.push(Vec2.weak(46, 92.5));
					vertices.push(Vec2.weak(29.5, 123));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(4, 129.5));
					vertices.push(Vec2.weak(29.5, 123));
					vertices.push(Vec2.weak(46, 92.5));
					vertices.push(Vec2.weak(1.5, 94));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(142.5, 55));
					vertices.push(Vec2.weak(135, 60.5));
					vertices.push(Vec2.weak(149.5, 62));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(43.5, 73));
					vertices.push(Vec2.weak(46, 92.5));
					vertices.push(Vec2.weak(57, 74.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(45.5, 150));
					vertices.push(Vec2.weak(53.5, 145));
					vertices.push(Vec2.weak(149.5, 62));
					vertices.push(Vec2.weak(135, 60.5));
					vertices.push(Vec2.weak(57, 74.5));
					vertices.push(Vec2.weak(46, 92.5));
					vertices.push(Vec2.weak(44.5, 135));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(23, 31.5));
					vertices.push(Vec2.weak(58.5, 54));
					vertices.push(Vec2.weak(113, 26.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(74, 158.5));
					vertices.push(Vec2.weak(104, 159.5));
					vertices.push(Vec2.weak(149.5, 62));
					vertices.push(Vec2.weak(53.5, 145));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(58.5, 54));
					vertices.push(Vec2.weak(57, 74.5));
					vertices.push(Vec2.weak(135, 60.5));
					vertices.push(Vec2.weak(126.5, 41));
					vertices.push(Vec2.weak(113, 26.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(118, 181.5));
					vertices.push(Vec2.weak(123, 179.5));
					vertices.push(Vec2.weak(149.5, 62));
					vertices.push(Vec2.weak(104, 159.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(113, 26.5));
					vertices.push(Vec2.weak(126.5, 41));
					vertices.push(Vec2.weak(143, -0.5));
					vertices.push(Vec2.weak(142, -0.5));
					
					_tab.push(vertices);
					
					break;
			
				case "redleaf":
											
			        vertices.push(Vec2.weak(194, 66.5));
					vertices.push(Vec2.weak(134.5, 82));
					vertices.push(Vec2.weak(111.5, 146));
					vertices.push(Vec2.weak(131, 151.5));
					vertices.push(Vec2.weak(154, 128.5));
					vertices.push(Vec2.weak(172.5, 107));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(8, 59.5));
					vertices.push(Vec2.weak(21.5, 67));
					vertices.push(Vec2.weak(55, 58.5));
					vertices.push(Vec2.weak(15, 53.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(166.5, 143));
					vertices.push(Vec2.weak(154, 128.5));
					vertices.push(Vec2.weak(131, 151.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(73.5, 37));
					vertices.push(Vec2.weak(80.5, 67));
					vertices.push(Vec2.weak(89, 36.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(183.5, 117));
					vertices.push(Vec2.weak(172.5, 107));
					vertices.push(Vec2.weak(154, 128.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(36, 145.5));
					vertices.push(Vec2.weak(106.5, 148));
					vertices.push(Vec2.weak(54, 121.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(13.5, 98));
					vertices.push(Vec2.weak(54, 121.5));
					vertices.push(Vec2.weak(28, 86.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(21.5, 67));
					vertices.push(Vec2.weak(28, 86.5));
					vertices.push(Vec2.weak(54, 121.5));
					vertices.push(Vec2.weak(106.5, 148));
					vertices.push(Vec2.weak(75.5, 75));
					vertices.push(Vec2.weak(55, 58.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(138, 36.5));
					vertices.push(Vec2.weak(129, 41.5));
					vertices.push(Vec2.weak(134.5, 82));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(129, 41.5));
					vertices.push(Vec2.weak(111.5, 23));
					vertices.push(Vec2.weak(106.5, 148));
					vertices.push(Vec2.weak(111.5, 146));
					vertices.push(Vec2.weak(134.5, 82));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(89, 36.5));
					vertices.push(Vec2.weak(80.5, 67));
					vertices.push(Vec2.weak(106.5, 148));
					vertices.push(Vec2.weak(112, 3.5));
					vertices.push(Vec2.weak(111, 3.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(127.5, 189));
					vertices.push(Vec2.weak(111.5, 146));
					vertices.push(Vec2.weak(106.5, 148));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(75.5, 75));
					vertices.push(Vec2.weak(106.5, 148));
					vertices.push(Vec2.weak(80.5, 67));
					
					_tab.push(vertices);
					
					break;
			
				case "tennisbal":
											
			        vertices.push(Vec2.weak(1.5, 13));
					vertices.push(Vec2.weak(0.5, 33));
					vertices.push(Vec2.weak(10.5, 46));
					vertices.push(Vec2.weak(48.5, 17));
					vertices.push(Vec2.weak(39.5, 4));
					vertices.push(Vec2.weak(20, -0.5));
					vertices.push(Vec2.weak(19, -0.5));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(Vec2.weak(46.5, 37));
					vertices.push(Vec2.weak(48.5, 17));
					vertices.push(Vec2.weak(10.5, 46));
					vertices.push(Vec2.weak(30, 49.5));
					
					_tab.push(vertices);
					
					break;
			
			}
		}

		protected function _getElasticity():Number {

			switch (peObject) {
				
				case "rugby":
					return 0.2;
			
				case "8ball":
					return 0.2;
			
				case "banaan":
					return 0.2;
			
				case "bier":
					return 0.2;
			
				case "greenleaf":
					return 0.2;
			
				case "pikachu":
					return 0.2;
			
				case "redleaf":
					return 0.2;
			
				case "tennisbal":
					return 0.2;
			
			}

			return 0.2;
		}
		
		protected function _getDynamicFriction():Number {
			
			switch (peObject) {
				
				case "rugby":
					return 1;
			
				case "8ball":
					return 1;
			
				case "banaan":
					return 1;
			
				case "bier":
					return 1;
			
				case "greenleaf":
					return 1;
			
				case "pikachu":
					return 1;
			
				case "redleaf":
					return 1;
			
				case "tennisbal":
					return 1;
			
			}

			return 1;
		}

		protected function _getStaticFriction():Number {
			
			switch (peObject) {
				
				case "rugby":
					return 1;
			
				case "8ball":
					return 1;
			
				case "banaan":
					return 1;
			
				case "bier":
					return 1;
			
				case "greenleaf":
					return 1;
			
				case "pikachu":
					return 1;
			
				case "redleaf":
					return 1;
			
				case "tennisbal":
					return 1;
			
			}

			return 1;
		}
		
		protected function _getDensity():Number {
			
			switch (peObject) {
				
				case "rugby":
					return 1;
			
				case "8ball":
					return 1;
			
				case "banaan":
					return 3.5;
			
				case "bier":
					return 5;
			
				case "greenleaf":
					return 1;
			
				case "pikachu":
					return 10;
			
				case "redleaf":
					return 1;
			
				case "tennisbal":
					return 1;
			
			}

			return 1;
		}

		protected function _getRollingFriction():Number {
			
			switch (peObject) {
				
				case "rugby":
					return 1;
			
				case "8ball":
					return 1;
			
				case "banaan":
					return 1;
			
				case "bier":
					return 1;
			
				case "greenleaf":
					return 1;
			
				case "pikachu":
					return 1;
			
				case "redleaf":
					return 1;
			
				case "tennisbal":
					return 1;
			
			}

			return 0;
		}
	}
}
