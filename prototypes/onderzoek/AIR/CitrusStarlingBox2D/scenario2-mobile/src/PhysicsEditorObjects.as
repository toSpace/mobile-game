package {

	import Box2D.Collision.Shapes.b2PolygonShape;
	import Box2D.Common.Math.b2Vec2;

	import citrus.objects.Box2DPhysicsObject;

	/**
	 * @author Aymeric
	 * <p>This is a class created by the software <a href="http://www.physicseditor.de/">PhysicsEditor</a></p>
	 * <p>Launch PhysicsEditor, select the CitrusEngine template, upload your png picture, set polygons and export.</p>
	 * @param peObject the name of the png file
	 */
    public class PhysicsEditorObjects extends Box2DPhysicsObject {
		
		[Inspectable(defaultValue="")]
		public var peObject:String = "";

		private var _tab:Array;

		public function PhysicsEditorObjects(name:String, params:Object = null) {

			if (params && params.registration == undefined)
				params.registration = "topLeft";
			else if (params == null)
				params = {registration:"topLeft"};

			super(name, params);
		}

		override public function destroy():void {

			super.destroy();
		}

		override public function update(timeDelta:Number):void {

			super.update(timeDelta);
		}

		override protected function defineFixture():void {
			
			super.defineFixture();
			
			_createVertices();

			_fixtureDef.density = _getDensity();
			_fixtureDef.friction = _getFriction();
			_fixtureDef.restitution = _getRestitution();
			
			for (var i:uint = 0; i < _tab.length; ++i) {
				var polygonShape:b2PolygonShape = new b2PolygonShape();
				polygonShape.SetAsArray(_tab[i]);
				_fixtureDef.shape = polygonShape;

				body.CreateFixture(_fixtureDef);
			}
		}
		
        protected function _createVertices():void {
			
			_tab = [];
			var vertices:Array = [];

			switch (peObject) {
				
				case "rugby":
											
			        vertices.push(new b2Vec2(58/_box2D.scale, 21.5/_box2D.scale));
					vertices.push(new b2Vec2(22/_box2D.scale, 39.5/_box2D.scale));
					vertices.push(new b2Vec2(-8/_box2D.scale, 41.5/_box2D.scale));
					vertices.push(new b2Vec2(-47/_box2D.scale, 28/_box2D.scale));
					vertices.push(new b2Vec2(15/_box2D.scale, -41.5/_box2D.scale));
					vertices.push(new b2Vec2(42/_box2D.scale, -31.5/_box2D.scale));
					vertices.push(new b2Vec2(65/_box2D.scale, -14.5/_box2D.scale));
					vertices.push(new b2Vec2(74.5/_box2D.scale, 3/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-72/_box2D.scale, 5/_box2D.scale));
					vertices.push(new b2Vec2(-48.5/_box2D.scale, -29/_box2D.scale));
					vertices.push(new b2Vec2(-10/_box2D.scale, -42.5/_box2D.scale));
					vertices.push(new b2Vec2(-9/_box2D.scale, -42.5/_box2D.scale));
					vertices.push(new b2Vec2(15/_box2D.scale, -41.5/_box2D.scale));
					vertices.push(new b2Vec2(-47/_box2D.scale, 28/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-48.5/_box2D.scale, -29/_box2D.scale));
					vertices.push(new b2Vec2(-72/_box2D.scale, 5/_box2D.scale));
					vertices.push(new b2Vec2(-74/_box2D.scale, -5/_box2D.scale));
					
					_tab.push(vertices);
											
			        vertices.push(new b2Vec2(71.5/_box2D.scale, 8/_box2D.scale));
					vertices.push(new b2Vec2(-26/_box2D.scale, -39.5/_box2D.scale));
					vertices.push(new b2Vec2(-10/_box2D.scale, -42.5/_box2D.scale));
					vertices.push(new b2Vec2(-9/_box2D.scale, -42.5/_box2D.scale));
					vertices.push(new b2Vec2(15/_box2D.scale, -41.5/_box2D.scale));
					vertices.push(new b2Vec2(47/_box2D.scale, -28.5/_box2D.scale));
					vertices.push(new b2Vec2(71/_box2D.scale, -7.5/_box2D.scale));
					vertices.push(new b2Vec2(74.5/_box2D.scale, -2/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-74.5/_box2D.scale, -4/_box2D.scale));
					vertices.push(new b2Vec2(-48.5/_box2D.scale, -29/_box2D.scale));
					vertices.push(new b2Vec2(-26/_box2D.scale, -39.5/_box2D.scale));
					vertices.push(new b2Vec2(17/_box2D.scale, 40.5/_box2D.scale));
					vertices.push(new b2Vec2(-15/_box2D.scale, 40.5/_box2D.scale));
					vertices.push(new b2Vec2(-45/_box2D.scale, 29.5/_box2D.scale));
					vertices.push(new b2Vec2(-68/_box2D.scale, 10.5/_box2D.scale));
					vertices.push(new b2Vec2(-73.5/_box2D.scale, 4/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-26/_box2D.scale, -39.5/_box2D.scale));
					vertices.push(new b2Vec2(71.5/_box2D.scale, 8/_box2D.scale));
					vertices.push(new b2Vec2(45.5/_box2D.scale, 30/_box2D.scale));
					vertices.push(new b2Vec2(17/_box2D.scale, 40.5/_box2D.scale));
					
					_tab.push(vertices);
					
					break;
			
				case "8ball":
											
			        vertices.push(new b2Vec2(-6/_box2D.scale, -25.5/_box2D.scale));
					vertices.push(new b2Vec2(-5/_box2D.scale, -25.5/_box2D.scale));
					vertices.push(new b2Vec2(14.5/_box2D.scale, -21/_box2D.scale));
					vertices.push(new b2Vec2(23.5/_box2D.scale, -8/_box2D.scale));
					vertices.push(new b2Vec2(-14.5/_box2D.scale, 21/_box2D.scale));
					vertices.push(new b2Vec2(-24.5/_box2D.scale, 8/_box2D.scale));
					vertices.push(new b2Vec2(-23.5/_box2D.scale, -12/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(5/_box2D.scale, 24.5/_box2D.scale));
					vertices.push(new b2Vec2(-14.5/_box2D.scale, 21/_box2D.scale));
					vertices.push(new b2Vec2(23.5/_box2D.scale, -8/_box2D.scale));
					vertices.push(new b2Vec2(21.5/_box2D.scale, 12/_box2D.scale));
					
					_tab.push(vertices);
					
					break;
			
				case "banaan":
											
			        vertices.push(new b2Vec2(53.5/_box2D.scale, 51.5/_box2D.scale));
					vertices.push(new b2Vec2(47.5/_box2D.scale, 21.5/_box2D.scale));
					vertices.push(new b2Vec2(43/_box2D.scale, -7/_box2D.scale));
					vertices.push(new b2Vec2(58.5/_box2D.scale, 13.5/_box2D.scale));
					vertices.push(new b2Vec2(67/_box2D.scale, 41/_box2D.scale));
					vertices.push(new b2Vec2(62/_box2D.scale, 56/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-6/_box2D.scale, 52/_box2D.scale));
					vertices.push(new b2Vec2(-16/_box2D.scale, 20/_box2D.scale));
					vertices.push(new b2Vec2(3/_box2D.scale, 42/_box2D.scale));
					vertices.push(new b2Vec2(-1/_box2D.scale, 61/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-16.5/_box2D.scale, -34.5/_box2D.scale));
					vertices.push(new b2Vec2(1.5/_box2D.scale, -3.5/_box2D.scale));
					vertices.push(new b2Vec2(-12.5/_box2D.scale, 10.5/_box2D.scale));
					vertices.push(new b2Vec2(-49.5/_box2D.scale, -32.5/_box2D.scale));
					vertices.push(new b2Vec2(-40.5/_box2D.scale, -44.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(47.5/_box2D.scale, 21.5/_box2D.scale));
					vertices.push(new b2Vec2(33.5/_box2D.scale, 48.5/_box2D.scale));
					vertices.push(new b2Vec2(25.5/_box2D.scale, 20.5/_box2D.scale));
					vertices.push(new b2Vec2(27.5/_box2D.scale, -7.5/_box2D.scale));
					vertices.push(new b2Vec2(43/_box2D.scale, -7/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(9.5/_box2D.scale, 57.5/_box2D.scale));
					vertices.push(new b2Vec2(25.5/_box2D.scale, 20.5/_box2D.scale));
					vertices.push(new b2Vec2(33.5/_box2D.scale, 48.5/_box2D.scale));
					vertices.push(new b2Vec2(13/_box2D.scale, 65/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-40/_box2D.scale, 30/_box2D.scale));
					vertices.push(new b2Vec2(-31/_box2D.scale, 52/_box2D.scale));
					vertices.push(new b2Vec2(-71/_box2D.scale, 32/_box2D.scale));
					vertices.push(new b2Vec2(-65/_box2D.scale, 24/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-16/_box2D.scale, 20/_box2D.scale));
					vertices.push(new b2Vec2(-6/_box2D.scale, 52/_box2D.scale));
					vertices.push(new b2Vec2(-31/_box2D.scale, 52/_box2D.scale));
					vertices.push(new b2Vec2(-40/_box2D.scale, 30/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-16/_box2D.scale, 20/_box2D.scale));
					vertices.push(new b2Vec2(-12.5/_box2D.scale, 10.5/_box2D.scale));
					vertices.push(new b2Vec2(1.5/_box2D.scale, -3.5/_box2D.scale));
					vertices.push(new b2Vec2(25.5/_box2D.scale, 20.5/_box2D.scale));
					vertices.push(new b2Vec2(3/_box2D.scale, 42/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-0.5/_box2D.scale, -58.5/_box2D.scale));
					vertices.push(new b2Vec2(9/_box2D.scale, -65/_box2D.scale));
					vertices.push(new b2Vec2(10/_box2D.scale, -65/_box2D.scale));
					vertices.push(new b2Vec2(23.5/_box2D.scale, -42.5/_box2D.scale));
					vertices.push(new b2Vec2(27.5/_box2D.scale, -7.5/_box2D.scale));
					vertices.push(new b2Vec2(25.5/_box2D.scale, 20.5/_box2D.scale));
					vertices.push(new b2Vec2(1.5/_box2D.scale, -3.5/_box2D.scale));
					
					_tab.push(vertices);
					
					break;
			
				case "bier":
											
			        vertices.push(new b2Vec2(-21/_box2D.scale, 61/_box2D.scale));
					vertices.push(new b2Vec2(-21/_box2D.scale, -9/_box2D.scale));
					vertices.push(new b2Vec2(-5.5/_box2D.scale, -75.5/_box2D.scale));
					vertices.push(new b2Vec2(9/_box2D.scale, -71/_box2D.scale));
					vertices.push(new b2Vec2(20/_box2D.scale, -7/_box2D.scale));
					vertices.push(new b2Vec2(20/_box2D.scale, 63/_box2D.scale));
					vertices.push(new b2Vec2(6.5/_box2D.scale, 74.5/_box2D.scale));
					vertices.push(new b2Vec2(-18.5/_box2D.scale, 71.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-5.5/_box2D.scale, -75.5/_box2D.scale));
					vertices.push(new b2Vec2(-4.5/_box2D.scale, -75.5/_box2D.scale));
					vertices.push(new b2Vec2(9/_box2D.scale, -71/_box2D.scale));
					
					_tab.push(vertices);
					
					break;
			
				case "greenleaf":
											
			        vertices.push(new b2Vec2(28/_box2D.scale, 11/_box2D.scale));
					vertices.push(new b2Vec2(9/_box2D.scale, 18/_box2D.scale));
					vertices.push(new b2Vec2(-10/_box2D.scale, 14/_box2D.scale));
					vertices.push(new b2Vec2(17/_box2D.scale, -29/_box2D.scale));
					vertices.push(new b2Vec2(18/_box2D.scale, -29/_box2D.scale));
					vertices.push(new b2Vec2(46.5/_box2D.scale, -20.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(17/_box2D.scale, -29/_box2D.scale));
					vertices.push(new b2Vec2(-10/_box2D.scale, 14/_box2D.scale));
					vertices.push(new b2Vec2(-16/_box2D.scale, 15/_box2D.scale));
					vertices.push(new b2Vec2(-7.5/_box2D.scale, -14.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-16/_box2D.scale, 15/_box2D.scale));
					vertices.push(new b2Vec2(-10/_box2D.scale, 14/_box2D.scale));
					vertices.push(new b2Vec2(-47/_box2D.scale, 30/_box2D.scale));
					
					_tab.push(vertices);
					
					break;
			
				case "pikachu":
											
			        vertices.push(new b2Vec2(-45.5/_box2D.scale, 32/_box2D.scale));
					vertices.push(new b2Vec2(-29/_box2D.scale, 1.5/_box2D.scale));
					vertices.push(new b2Vec2(-30.5/_box2D.scale, 44/_box2D.scale));
					vertices.push(new b2Vec2(-44/_box2D.scale, 51.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-73.5/_box2D.scale, 3/_box2D.scale));
					vertices.push(new b2Vec2(-29/_box2D.scale, 1.5/_box2D.scale));
					vertices.push(new b2Vec2(-45.5/_box2D.scale, 32/_box2D.scale));
					vertices.push(new b2Vec2(-71/_box2D.scale, 38.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(74.5/_box2D.scale, -29/_box2D.scale));
					vertices.push(new b2Vec2(60/_box2D.scale, -30.5/_box2D.scale));
					vertices.push(new b2Vec2(67.5/_box2D.scale, -36/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-18/_box2D.scale, -16.5/_box2D.scale));
					vertices.push(new b2Vec2(-29/_box2D.scale, 1.5/_box2D.scale));
					vertices.push(new b2Vec2(-31.5/_box2D.scale, -18/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-30.5/_box2D.scale, 44/_box2D.scale));
					vertices.push(new b2Vec2(-29/_box2D.scale, 1.5/_box2D.scale));
					vertices.push(new b2Vec2(-18/_box2D.scale, -16.5/_box2D.scale));
					vertices.push(new b2Vec2(60/_box2D.scale, -30.5/_box2D.scale));
					vertices.push(new b2Vec2(74.5/_box2D.scale, -29/_box2D.scale));
					vertices.push(new b2Vec2(-21.5/_box2D.scale, 54/_box2D.scale));
					vertices.push(new b2Vec2(-29.5/_box2D.scale, 59/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(38/_box2D.scale, -64.5/_box2D.scale));
					vertices.push(new b2Vec2(-16.5/_box2D.scale, -37/_box2D.scale));
					vertices.push(new b2Vec2(-52/_box2D.scale, -59.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-21.5/_box2D.scale, 54/_box2D.scale));
					vertices.push(new b2Vec2(74.5/_box2D.scale, -29/_box2D.scale));
					vertices.push(new b2Vec2(29/_box2D.scale, 68.5/_box2D.scale));
					vertices.push(new b2Vec2(-1/_box2D.scale, 67.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(38/_box2D.scale, -64.5/_box2D.scale));
					vertices.push(new b2Vec2(51.5/_box2D.scale, -50/_box2D.scale));
					vertices.push(new b2Vec2(60/_box2D.scale, -30.5/_box2D.scale));
					vertices.push(new b2Vec2(-18/_box2D.scale, -16.5/_box2D.scale));
					vertices.push(new b2Vec2(-16.5/_box2D.scale, -37/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(29/_box2D.scale, 68.5/_box2D.scale));
					vertices.push(new b2Vec2(74.5/_box2D.scale, -29/_box2D.scale));
					vertices.push(new b2Vec2(48/_box2D.scale, 88.5/_box2D.scale));
					vertices.push(new b2Vec2(43/_box2D.scale, 90.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(67/_box2D.scale, -91.5/_box2D.scale));
					vertices.push(new b2Vec2(68/_box2D.scale, -91.5/_box2D.scale));
					vertices.push(new b2Vec2(51.5/_box2D.scale, -50/_box2D.scale));
					vertices.push(new b2Vec2(38/_box2D.scale, -64.5/_box2D.scale));
					
					_tab.push(vertices);
					
					break;
			
				case "redleaf":
											
			        vertices.push(new b2Vec2(72.5/_box2D.scale, 11.5/_box2D.scale));
					vertices.push(new b2Vec2(54/_box2D.scale, 33/_box2D.scale));
					vertices.push(new b2Vec2(31/_box2D.scale, 56/_box2D.scale));
					vertices.push(new b2Vec2(11.5/_box2D.scale, 50.5/_box2D.scale));
					vertices.push(new b2Vec2(34.5/_box2D.scale, -13.5/_box2D.scale));
					vertices.push(new b2Vec2(94/_box2D.scale, -29/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-85/_box2D.scale, -42/_box2D.scale));
					vertices.push(new b2Vec2(-45/_box2D.scale, -37/_box2D.scale));
					vertices.push(new b2Vec2(-78.5/_box2D.scale, -28.5/_box2D.scale));
					vertices.push(new b2Vec2(-92/_box2D.scale, -36/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(31/_box2D.scale, 56/_box2D.scale));
					vertices.push(new b2Vec2(54/_box2D.scale, 33/_box2D.scale));
					vertices.push(new b2Vec2(66.5/_box2D.scale, 47.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-11/_box2D.scale, -59/_box2D.scale));
					vertices.push(new b2Vec2(-19.5/_box2D.scale, -28.5/_box2D.scale));
					vertices.push(new b2Vec2(-26.5/_box2D.scale, -58.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(54/_box2D.scale, 33/_box2D.scale));
					vertices.push(new b2Vec2(72.5/_box2D.scale, 11.5/_box2D.scale));
					vertices.push(new b2Vec2(83.5/_box2D.scale, 21.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-46/_box2D.scale, 26/_box2D.scale));
					vertices.push(new b2Vec2(6.5/_box2D.scale, 52.5/_box2D.scale));
					vertices.push(new b2Vec2(-64/_box2D.scale, 50/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-72/_box2D.scale, -9/_box2D.scale));
					vertices.push(new b2Vec2(-46/_box2D.scale, 26/_box2D.scale));
					vertices.push(new b2Vec2(-86.5/_box2D.scale, 2.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-45/_box2D.scale, -37/_box2D.scale));
					vertices.push(new b2Vec2(-24.5/_box2D.scale, -20.5/_box2D.scale));
					vertices.push(new b2Vec2(6.5/_box2D.scale, 52.5/_box2D.scale));
					vertices.push(new b2Vec2(-46/_box2D.scale, 26/_box2D.scale));
					vertices.push(new b2Vec2(-72/_box2D.scale, -9/_box2D.scale));
					vertices.push(new b2Vec2(-78.5/_box2D.scale, -28.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(34.5/_box2D.scale, -13.5/_box2D.scale));
					vertices.push(new b2Vec2(29/_box2D.scale, -54/_box2D.scale));
					vertices.push(new b2Vec2(38/_box2D.scale, -59/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(34.5/_box2D.scale, -13.5/_box2D.scale));
					vertices.push(new b2Vec2(11.5/_box2D.scale, 50.5/_box2D.scale));
					vertices.push(new b2Vec2(6.5/_box2D.scale, 52.5/_box2D.scale));
					vertices.push(new b2Vec2(11.5/_box2D.scale, -72.5/_box2D.scale));
					vertices.push(new b2Vec2(29/_box2D.scale, -54/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(11/_box2D.scale, -92/_box2D.scale));
					vertices.push(new b2Vec2(12/_box2D.scale, -92/_box2D.scale));
					vertices.push(new b2Vec2(6.5/_box2D.scale, 52.5/_box2D.scale));
					vertices.push(new b2Vec2(-19.5/_box2D.scale, -28.5/_box2D.scale));
					vertices.push(new b2Vec2(-11/_box2D.scale, -59/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(6.5/_box2D.scale, 52.5/_box2D.scale));
					vertices.push(new b2Vec2(11.5/_box2D.scale, 50.5/_box2D.scale));
					vertices.push(new b2Vec2(27.5/_box2D.scale, 93.5/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(-19.5/_box2D.scale, -28.5/_box2D.scale));
					vertices.push(new b2Vec2(6.5/_box2D.scale, 52.5/_box2D.scale));
					vertices.push(new b2Vec2(-24.5/_box2D.scale, -20.5/_box2D.scale));
					
					_tab.push(vertices);
					
					break;
			
				case "tennisbal":
											
			        vertices.push(new b2Vec2(-6/_box2D.scale, -25.5/_box2D.scale));
					vertices.push(new b2Vec2(-5/_box2D.scale, -25.5/_box2D.scale));
					vertices.push(new b2Vec2(14.5/_box2D.scale, -21/_box2D.scale));
					vertices.push(new b2Vec2(23.5/_box2D.scale, -8/_box2D.scale));
					vertices.push(new b2Vec2(-14.5/_box2D.scale, 21/_box2D.scale));
					vertices.push(new b2Vec2(-24.5/_box2D.scale, 8/_box2D.scale));
					vertices.push(new b2Vec2(-23.5/_box2D.scale, -12/_box2D.scale));
					
					_tab.push(vertices);
					vertices = [];
											
			        vertices.push(new b2Vec2(5/_box2D.scale, 24.5/_box2D.scale));
					vertices.push(new b2Vec2(-14.5/_box2D.scale, 21/_box2D.scale));
					vertices.push(new b2Vec2(23.5/_box2D.scale, -8/_box2D.scale));
					vertices.push(new b2Vec2(21.5/_box2D.scale, 12/_box2D.scale));
					
					_tab.push(vertices);
					
					break;
			
			}
		}

		protected function _getDensity():Number {

			switch (peObject) {
				
				case "rugby":
					return 4;return 1;
			
				case "8ball":
					return 3;return 1;
			
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
					return 1;return 1;
			
			}

			return 1;
		}
		
		protected function _getFriction():Number {
			
			switch (peObject) {
				
				case "rugby":
					return 0.9;return 0.6;
			
				case "8ball":
					return 1;return 0.6;
			
				case "banaan":
					return 0.3;
			
				case "bier":
					return 0.6;
			
				case "greenleaf":
					return 0.1;
			
				case "pikachu":
					return 1;
			
				case "redleaf":
					return 0.1;
			
				case "tennisbal":
					return 0.6;return 0.6;
			
			}

			return 0.6;
		}
		
		protected function _getRestitution():Number {
			
			switch (peObject) {
				
				case "rugby":
					return 1;return 1;
			
				case "8ball":
					return 0.4;return 0.3;
			
				case "banaan":
					return 0.6;
			
				case "bier":
					return 0.3;
			
				case "greenleaf":
					return 0.1;
			
				case "pikachu":
					return 0.6;
			
				case "redleaf":
					return 0.1;
			
				case "tennisbal":
					return 1.1;return 0.3;
			
			}

			return 0.3;
		}
	}
}
