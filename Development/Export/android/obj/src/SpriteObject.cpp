#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Mobile
#include <Mobile.h>
#endif
#ifndef INCLUDED_RenderManager
#include <RenderManager.h>
#endif
#ifndef INCLUDED_SpriteObject
#include <SpriteObject.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_aze_display_SparrowTilesheet
#include <aze/display/SparrowTilesheet.h>
#endif
#ifndef INCLUDED_aze_display_TileBase
#include <aze/display/TileBase.h>
#endif
#ifndef INCLUDED_aze_display_TileClip
#include <aze/display/TileClip.h>
#endif
#ifndef INCLUDED_aze_display_TileGroup
#include <aze/display/TileGroup.h>
#endif
#ifndef INCLUDED_aze_display_TileLayer
#include <aze/display/TileLayer.h>
#endif
#ifndef INCLUDED_aze_display_TileSprite
#include <aze/display/TileSprite.h>
#endif
#ifndef INCLUDED_aze_display_TilesheetEx
#include <aze/display/TilesheetEx.h>
#endif
#ifndef INCLUDED_haxe_Public
#include <haxe/Public.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_native_Lib
#include <native/Lib.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Tilesheet
#include <native/display/Tilesheet.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif

Void SpriteObject_obj::__construct(::String xmlUrl,::String sparrowXml)
{
HX_STACK_PUSH("SpriteObject::new","SpriteObject.hx",27);
{
	HX_STACK_LINE(30)
	this->xml = this->readXml(xmlUrl);
	HX_STACK_LINE(33)
	this->makeSpritesheet(sparrowXml,this->xml->get(HX_CSTRING("img")));
	HX_STACK_LINE(36)
	::RenderManager_obj::add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(39)
	this->makeClip(this->xml->get(HX_CSTRING("clip")),null(),null());
	HX_STACK_LINE(41)
	this->makePhysics(this->xml->get(HX_CSTRING("x")),this->xml->get(HX_CSTRING("y")));
}
;
	return null();
}

SpriteObject_obj::~SpriteObject_obj() { }

Dynamic SpriteObject_obj::__CreateEmpty() { return  new SpriteObject_obj; }
hx::ObjectPtr< SpriteObject_obj > SpriteObject_obj::__new(::String xmlUrl,::String sparrowXml)
{  hx::ObjectPtr< SpriteObject_obj > result = new SpriteObject_obj();
	result->__construct(xmlUrl,sparrowXml);
	return result;}

Dynamic SpriteObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteObject_obj > result = new SpriteObject_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void SpriteObject_obj::setXY( Float x,Float y,hx::Null< bool >  __o_offset){
bool offset = __o_offset.Default(false);
	HX_STACK_PUSH("SpriteObject::setXY","SpriteObject.hx",127);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(offset,"offset");
{
		HX_STACK_LINE(128)
		y = (::Mobile_obj::getY(this->layer->view) - y);
		struct _Function_1_1{
			inline static Dynamic Block( ::SpriteObject_obj *__this){
				HX_STACK_PUSH("*::closure","SpriteObject.hx",129);
				{
					HX_STACK_LINE(129)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(129)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","SpriteObject.hx",129);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(129)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(129)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(129)
		::nape::geom::Vec2 bodyOffset = (_Function_1_1::Block(this))->__Field(HX_CSTRING("graphicOffset"),true);		HX_STACK_VAR(bodyOffset,"bodyOffset");
		HX_STACK_LINE(130)
		if ((offset)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &bodyOffset){
					HX_STACK_PUSH("*::closure","SpriteObject.hx",131);
					{
						HX_STACK_LINE(131)
						if (((bool((bodyOffset != null())) && bool(bodyOffset->zpp_disp)))){
							HX_STACK_LINE(131)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(131)
						{
							HX_STACK_LINE(131)
							::zpp_nape::geom::ZPP_Vec2 _this = bodyOffset->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(131)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(131)
								_this->_validate();
							}
						}
						HX_STACK_LINE(131)
						return bodyOffset->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(131)
			hx::SubEq(x,_Function_2_1::Block(bodyOffset));
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &bodyOffset){
					HX_STACK_PUSH("*::closure","SpriteObject.hx",132);
					{
						HX_STACK_LINE(132)
						if (((bool((bodyOffset != null())) && bool(bodyOffset->zpp_disp)))){
							HX_STACK_LINE(132)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(132)
						{
							HX_STACK_LINE(132)
							::zpp_nape::geom::ZPP_Vec2 _this = bodyOffset->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(132)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(132)
								_this->_validate();
							}
						}
						HX_STACK_LINE(132)
						return bodyOffset->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(132)
			hx::SubEq(y,_Function_2_2::Block(bodyOffset));
		}
		HX_STACK_LINE(134)
		{
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ::SpriteObject_obj *__this){
					HX_STACK_PUSH("*::closure","SpriteObject.hx",134);
					{
						HX_STACK_LINE(134)
						::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(134)
						if (((_this->zpp_inner->wrap_pos == null()))){
							HX_STACK_LINE(134)
							_this->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(134)
						return _this->zpp_inner->wrap_pos;
					}
					return null();
				}
			};
			HX_STACK_LINE(134)
			::nape::geom::Vec2 _this = _Function_2_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(134)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(134)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(134)
				if ((_this1->_immutable)){
					HX_STACK_LINE(134)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(134)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(134)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(134)
			if (((bool((x != x)) || bool((y != y))))){
				HX_STACK_LINE(134)
				hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","SpriteObject.hx",134);
					{
						HX_STACK_LINE(134)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(134)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(134)
						{
							HX_STACK_LINE(134)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(134)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(134)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(134)
						return _this->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","SpriteObject.hx",134);
					{
						HX_STACK_LINE(134)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(134)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(134)
						{
							HX_STACK_LINE(134)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(134)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(134)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(134)
						return _this->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(134)
			if ((!(((bool((_Function_2_2::Block(_this) == x)) && bool((_Function_2_3::Block(_this) == y))))))){
				HX_STACK_LINE(134)
				{
					HX_STACK_LINE(134)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(134)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(134)
					{
					}
					HX_STACK_LINE(134)
					{
					}
				}
				HX_STACK_LINE(134)
				{
					HX_STACK_LINE(134)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(134)
					if (((_this1->_invalidate_dyn() != null()))){
						HX_STACK_LINE(134)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(134)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteObject_obj,setXY,(void))

Void SpriteObject_obj::renderPhysics( ){
{
		HX_STACK_PUSH("SpriteObject::renderPhysics","SpriteObject.hx",115);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::SpriteObject_obj *__this){
				HX_STACK_PUSH("*::closure","SpriteObject.hx",117);
				{
					HX_STACK_LINE(117)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(117)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","SpriteObject.hx",117);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(117)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(117)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(117)
		::native::display::DisplayObject graphic = (_Function_1_1::Block(this))->__Field(HX_CSTRING("graphic"),true);		HX_STACK_VAR(graphic,"graphic");
		struct _Function_1_2{
			inline static Dynamic Block( ::SpriteObject_obj *__this){
				HX_STACK_PUSH("*::closure","SpriteObject.hx",118);
				{
					HX_STACK_LINE(118)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(118)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","SpriteObject.hx",118);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(118)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(118)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(118)
		::nape::geom::Vec2 graphicOffset = (_Function_1_2::Block(this))->__Field(HX_CSTRING("graphicOffset"),true);		HX_STACK_VAR(graphicOffset,"graphicOffset");
		HX_STACK_LINE(119)
		::nape::geom::Vec2 position = this->body->localPointToWorld(graphicOffset,null());		HX_STACK_VAR(position,"position");
		struct _Function_1_3{
			inline static Float Block( ::nape::geom::Vec2 &position){
				HX_STACK_PUSH("*::closure","SpriteObject.hx",120);
				{
					HX_STACK_LINE(120)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(120)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(120)
					{
						HX_STACK_LINE(120)
						::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(120)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(120)
							_this->_validate();
						}
					}
					HX_STACK_LINE(120)
					return position->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(120)
		graphic->set_x(_Function_1_3::Block(position));
		struct _Function_1_4{
			inline static Float Block( ::nape::geom::Vec2 &position){
				HX_STACK_PUSH("*::closure","SpriteObject.hx",121);
				{
					HX_STACK_LINE(121)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(121)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(121)
						::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(121)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(121)
							_this->_validate();
						}
					}
					HX_STACK_LINE(121)
					return position->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(121)
		graphic->set_y(_Function_1_4::Block(position));
		HX_STACK_LINE(122)
		graphic->set_rotation(hx::Mod((Float((this->body->zpp_inner->rot * (int)180)) / Float(::Math_obj::PI)),(int)360));
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			if (((bool((position != null())) && bool(position->zpp_disp)))){
				HX_STACK_LINE(123)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(123)
				if ((_this->_immutable)){
					HX_STACK_LINE(123)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(123)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(123)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(123)
			if ((position->zpp_inner->_inuse)){
				HX_STACK_LINE(123)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(123)
			::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(123)
			position->zpp_inner->outer = null();
			HX_STACK_LINE(123)
			position->zpp_inner = null();
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(123)
				{
				}
				HX_STACK_LINE(123)
				o->zpp_pool = null();
				HX_STACK_LINE(123)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(123)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(123)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(123)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(123)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(123)
				{
				}
				HX_STACK_LINE(123)
				{
					HX_STACK_LINE(123)
					if (((o->outer != null()))){
						HX_STACK_LINE(123)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(123)
						o->outer = null();
					}
					HX_STACK_LINE(123)
					o->_isimmutable = null();
					HX_STACK_LINE(123)
					o->_validate = null();
					HX_STACK_LINE(123)
					o->_invalidate = null();
				}
				HX_STACK_LINE(123)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(123)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteObject_obj,renderPhysics,(void))

Void SpriteObject_obj::render( ){
{
		HX_STACK_PUSH("SpriteObject::render","SpriteObject.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_LINE(105)
		this->renderPhysics();
		HX_STACK_LINE(108)
		Float tDelta = (::native::Lib_obj::getTimer() - this->tLast);		HX_STACK_VAR(tDelta,"tDelta");
		HX_STACK_LINE(109)
		this->tLast = ::native::Lib_obj::getTimer();
		HX_STACK_LINE(110)
		this->layer->step(::Std_obj::_int(tDelta));
		HX_STACK_LINE(111)
		this->layer->render(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteObject_obj,render,(void))

Void SpriteObject_obj::makePhysics( Float x,Float y){
{
		HX_STACK_PUSH("SpriteObject::makePhysics","SpriteObject.hx",88);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(91)
		y = (::Mobile_obj::getY(this->layer->view) - y);
		struct _Function_1_1{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","SpriteObject.hx",92);
				{
					HX_STACK_LINE(92)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
						HX_STACK_LINE(92)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(92)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(92)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(92)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
				}
				return null();
			}
		};
		HX_STACK_LINE(92)
		this->body = ::nape::phys::Body_obj::__new(_Function_1_1::Block(),::nape::geom::Vec2_obj::__new(x,y));
		HX_STACK_LINE(93)
		::nape::phys::Material material = ::nape::phys::Material_obj::__new(0.1,1.0,2.0,5.0,0.001);		HX_STACK_VAR(material,"material");
		HX_STACK_LINE(94)
		{
			struct _Function_2_1{
				inline static Float Block( ::SpriteObject_obj *__this){
					HX_STACK_PUSH("*::closure","SpriteObject.hx",94);
					{
						HX_STACK_LINE(94)
						::aze::display::TileClip _this1 = __this->clip;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(94)
						return (_this1->size->width * _this1->_scaleX);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::SpriteObject_obj *__this){
					HX_STACK_PUSH("*::closure","SpriteObject.hx",94);
					{
						HX_STACK_LINE(94)
						::aze::display::TileClip _this1 = __this->clip;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(94)
						return (_this1->size->height * _this1->_scaleY);
					}
					return null();
				}
			};
			HX_STACK_LINE(94)
			::nape::shape::ShapeList _this = this->body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::box((Float(_Function_2_1::Block(this)) / Float((int)2)),_Function_2_2::Block(this),null()),material,null());		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(94)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(94)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(94)
				_this->unshift(obj);
			}
		}
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			::nape::phys::BodyList _this = ::Main_obj::space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
			::nape::phys::Body obj = this->body;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(95)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(95)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(95)
				_this->unshift(obj);
			}
		}
		struct _Function_1_2{
			inline static Dynamic Block( ::SpriteObject_obj *__this){
				HX_STACK_PUSH("*::closure","SpriteObject.hx",98);
				{
					HX_STACK_LINE(98)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(98)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","SpriteObject.hx",98);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(98)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(98)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(98)
		(_Function_1_2::Block(this))->__FieldRef(HX_CSTRING("graphic")) = this->layer->view;
		HX_STACK_LINE(99)
		::nape::geom::Vec2 pivot = ::nape::geom::Vec2_obj::__new((int)0,(int)0);		HX_STACK_VAR(pivot,"pivot");
		struct _Function_1_3{
			inline static Dynamic Block( ::SpriteObject_obj *__this){
				HX_STACK_PUSH("*::closure","SpriteObject.hx",100);
				{
					HX_STACK_LINE(100)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(100)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","SpriteObject.hx",100);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(100)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(100)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(100)
		(_Function_1_3::Block(this))->__FieldRef(HX_CSTRING("graphicOffset")) = pivot;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteObject_obj,makePhysics,(void))

Void SpriteObject_obj::makeClip( ::String name,Dynamic __o_loop,Dynamic __o_play){
Dynamic loop = __o_loop.Default(true);
Dynamic play = __o_play.Default(true);
	HX_STACK_PUSH("SpriteObject::makeClip","SpriteObject.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(loop,"loop");
	HX_STACK_ARG(play,"play");
{
		HX_STACK_LINE(69)
		this->clip = ::aze::display::TileClip_obj::__new(name,(int)24);
		HX_STACK_LINE(70)
		this->layer->addChild(this->clip);
		HX_STACK_LINE(71)
		this->layer->useSmoothing = true;
		HX_STACK_LINE(74)
		if ((loop)){
			HX_STACK_LINE(74)
			this->clip->loop = true;
		}
		HX_STACK_LINE(75)
		if ((play)){
			HX_STACK_LINE(75)
			this->clip->play();
		}
		HX_STACK_LINE(77)
		this->clip->x = (int)0;
		HX_STACK_LINE(78)
		this->clip->y = (int)0;
		HX_STACK_LINE(80)
		this->layer->render(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteObject_obj,makeClip,(void))

Void SpriteObject_obj::makeSpritesheet( ::String xmlUrl,::String imgUrl){
{
		HX_STACK_PUSH("SpriteObject::makeSpritesheet","SpriteObject.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xmlUrl,"xmlUrl");
		HX_STACK_ARG(imgUrl,"imgUrl");
		HX_STACK_LINE(61)
		::String sheetData = ::nme::installer::Assets_obj::getText((::Mobile_obj::asset + xmlUrl));		HX_STACK_VAR(sheetData,"sheetData");
		HX_STACK_LINE(62)
		::aze::display::SparrowTilesheet tilesheet = ::aze::display::SparrowTilesheet_obj::__new(::nme::installer::Assets_obj::getBitmapData(imgUrl,null()),sheetData);		HX_STACK_VAR(tilesheet,"tilesheet");
		HX_STACK_LINE(63)
		this->layer = ::aze::display::TileLayer_obj::__new(tilesheet,null(),null());
		HX_STACK_LINE(64)
		::Main_obj::canvas->addChild(this->layer->view);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteObject_obj,makeSpritesheet,(void))

::Hash SpriteObject_obj::readXml( ::String url){
	HX_STACK_PUSH("SpriteObject::readXml","SpriteObject.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_ARG(url,"url");
	HX_STACK_LINE(45)
	::Hash p = ::Hash_obj::__new();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(46)
	::String xmlFile = ::nme::installer::Assets_obj::getText((::Mobile_obj::xml + url));		HX_STACK_VAR(xmlFile,"xmlFile");
	HX_STACK_LINE(47)
	::haxe::xml::Fast read = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(xmlFile));		HX_STACK_VAR(read,"read");
	HX_STACK_LINE(49)
	::haxe::xml::Fast asset = read->node->resolve(HX_CSTRING("asset"));		HX_STACK_VAR(asset,"asset");
	HX_STACK_LINE(50)
	p->set(HX_CSTRING("img"),(::Mobile_obj::asset + asset->node->resolve(HX_CSTRING("img"))->getInnerData()));
	HX_STACK_LINE(51)
	p->set(HX_CSTRING("x"),asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("x")));
	HX_STACK_LINE(52)
	p->set(HX_CSTRING("y"),asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("y")));
	HX_STACK_LINE(53)
	p->set(HX_CSTRING("rotation"),asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("rotation")));
	HX_STACK_LINE(54)
	p->set(HX_CSTRING("physics"),asset->node->resolve(HX_CSTRING("physics"))->getInnerData());
	HX_STACK_LINE(55)
	p->set(HX_CSTRING("clip"),asset->node->resolve(HX_CSTRING("clip"))->getInnerData());
	HX_STACK_LINE(57)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteObject_obj,readXml,return )


SpriteObject_obj::SpriteObject_obj()
{
}

void SpriteObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteObject);
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(xml,"xml");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(tLast,"tLast");
	HX_MARK_END_CLASS();
}

void SpriteObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clip,"clip");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(xml,"xml");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(tLast,"tLast");
}

Dynamic SpriteObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return xml; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { return clip; }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setXY") ) { return setXY_dyn(); }
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		if (HX_FIELD_EQ(inName,"tLast") ) { return tLast; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readXml") ) { return readXml_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"makeClip") ) { return makeClip_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"makePhysics") ) { return makePhysics_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderPhysics") ) { return renderPhysics_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"makeSpritesheet") ) { return makeSpritesheet_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { xml=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { clip=inValue.Cast< ::aze::display::TileClip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< ::aze::display::TileLayer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tLast") ) { tLast=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("clip"));
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("xml"));
	outFields->push(HX_CSTRING("layer"));
	outFields->push(HX_CSTRING("tLast"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setXY"),
	HX_CSTRING("renderPhysics"),
	HX_CSTRING("render"),
	HX_CSTRING("makePhysics"),
	HX_CSTRING("makeClip"),
	HX_CSTRING("makeSpritesheet"),
	HX_CSTRING("readXml"),
	HX_CSTRING("clip"),
	HX_CSTRING("body"),
	HX_CSTRING("xml"),
	HX_CSTRING("layer"),
	HX_CSTRING("tLast"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteObject_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteObject_obj::__mClass,"__mClass");
};

Class SpriteObject_obj::__mClass;

void SpriteObject_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("SpriteObject"), hx::TCanCast< SpriteObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SpriteObject_obj::__boot()
{
}

