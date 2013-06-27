#include <hxcpp.h>

#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lucy
#include <Lucy.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Settings
#include <Settings.h>
#endif
#ifndef INCLUDED_SpriteObject
#include <SpriteObject.h>
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
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
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
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
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
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
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

Void Lucy_obj::__construct()
{
HX_STACK_PUSH("Lucy::new","Lucy.hx",11);
{
	HX_STACK_LINE(15)
	this->stopped = false;
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(20)
	this->lucy = ::SpriteObject_obj::__new(HX_CSTRING("walking.xml"),HX_CSTRING("walking-sparrow.xml"));
	HX_STACK_LINE(21)
	this->lucy->body = this->generateBody(this->lucy->xml->get(HX_CSTRING("x")),this->lucy->xml->get(HX_CSTRING("y")));
	struct _Function_1_1{
		inline static Float Block( ::Lucy_obj *__this){
			HX_STACK_PUSH("*::closure","Lucy.hx",22);
			{
				struct _Function_2_1{
					inline static ::nape::geom::Vec2 Block( ::Lucy_obj *__this){
						HX_STACK_PUSH("*::closure","Lucy.hx",22);
						{
							HX_STACK_LINE(22)
							::nape::phys::Body _this = __this->lucy->body;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(22)
							if (((_this->zpp_inner->wrap_pos == null()))){
								HX_STACK_LINE(22)
								_this->zpp_inner->setupPosition();
							}
							HX_STACK_LINE(22)
							return _this->zpp_inner->wrap_pos;
						}
						return null();
					}
				};
				HX_STACK_LINE(22)
				::nape::geom::Vec2 _this = _Function_2_1::Block(__this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(22)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(22)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(22)
				{
					HX_STACK_LINE(22)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(22)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(22)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(22)
				return _this->zpp_inner->x;
			}
			return null();
		}
	};
	HX_STACK_LINE(22)
	this->prevX = _Function_1_1::Block(this);
}
;
	return null();
}

Lucy_obj::~Lucy_obj() { }

Dynamic Lucy_obj::__CreateEmpty() { return  new Lucy_obj; }
hx::ObjectPtr< Lucy_obj > Lucy_obj::__new()
{  hx::ObjectPtr< Lucy_obj > result = new Lucy_obj();
	result->__construct();
	return result;}

Dynamic Lucy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lucy_obj > result = new Lucy_obj();
	result->__construct();
	return result;}

::nape::phys::Body Lucy_obj::generateBody( Float x,Float y){
	HX_STACK_PUSH("Lucy::generateBody","Lucy.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(46)
	::nape::phys::Body body = ::nape::phys::Body_obj::__new(null(),null());		HX_STACK_VAR(body,"body");
	HX_STACK_LINE(47)
	::nape::phys::Body _body = this->lucy->body;		HX_STACK_VAR(_body,"_body");
	struct _Function_1_1{
		inline static Float Block( ::Lucy_obj *__this){
			HX_STACK_PUSH("*::closure","Lucy.hx",48);
			{
				HX_STACK_LINE(48)
				::aze::display::TileClip _this = __this->lucy->clip;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(48)
				return (_this->size->width * _this->_scaleX);
			}
			return null();
		}
	};
	HX_STACK_LINE(48)
	::nape::shape::Circle circle = ::nape::shape::Circle_obj::__new((Float(_Function_1_1::Block(this)) / Float((int)5)),null(),null(),null());		HX_STACK_VAR(circle,"circle");
	struct _Function_1_2{
		inline static Float Block( ::Lucy_obj *__this){
			HX_STACK_PUSH("*::closure","Lucy.hx",49);
			{
				HX_STACK_LINE(49)
				::aze::display::TileClip _this = __this->lucy->clip;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(49)
				return (_this->size->width * _this->_scaleX);
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::Lucy_obj *__this){
			HX_STACK_PUSH("*::closure","Lucy.hx",49);
			{
				HX_STACK_LINE(49)
				::aze::display::TileClip _this = __this->lucy->clip;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(49)
				return (_this->size->height * _this->_scaleY);
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::Lucy_obj *__this){
			HX_STACK_PUSH("*::closure","Lucy.hx",49);
			{
				HX_STACK_LINE(49)
				::aze::display::TileClip _this = __this->lucy->clip;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(49)
				return (_this->size->width * _this->_scaleX);
			}
			return null();
		}
	};
	HX_STACK_LINE(49)
	::nape::shape::Polygon box = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::box((Float(_Function_1_2::Block(this)) / Float(2.5)),(_Function_1_3::Block(this) - (Float(_Function_1_4::Block(this)) / Float((int)4))),null()),null(),null());		HX_STACK_VAR(box,"box");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::nape::shape::ShapeList _this = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(51)
		if ((_this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(51)
			_this->push(circle);
		}
		else{
			HX_STACK_LINE(51)
			_this->unshift(circle);
		}
	}
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::nape::shape::ShapeList _this = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(52)
		if ((_this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(52)
			_this->push(box);
		}
		else{
			HX_STACK_LINE(52)
			_this->unshift(box);
		}
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::nape::space::Space space = ::Main_obj::space;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			if (((body->zpp_inner->compound != null()))){
				HX_STACK_LINE(53)
				hx::Throw (HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
			}
			HX_STACK_LINE(53)
			body->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
			HX_STACK_LINE(53)
			if ((body->zpp_inner->world)){
				HX_STACK_LINE(53)
				hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
			}
			HX_STACK_LINE(53)
			if (((((  (((body->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(body->zpp_inner->space->outer) )) != space))){
				HX_STACK_LINE(53)
				if (((((  (((body->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(body->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(53)
					body->zpp_inner->component->woken = false;
				}
				HX_STACK_LINE(53)
				if (((((  (((body->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(body->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(53)
					((  (((body->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(body->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(body);
				}
				HX_STACK_LINE(53)
				if (((space != null()))){
					HX_STACK_LINE(53)
					::nape::phys::BodyList _this = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(53)
					if ((_this->zpp_inner->reverse_flag)){
						HX_STACK_LINE(53)
						_this->push(body);
					}
					else{
						HX_STACK_LINE(53)
						_this->unshift(body);
					}
				}
			}
		}
		HX_STACK_LINE(53)
		if (((body->zpp_inner->space == null()))){
			HX_STACK_LINE(53)
			Dynamic();
		}
		else{
			HX_STACK_LINE(53)
			body->zpp_inner->space->outer;
		}
	}
	HX_STACK_LINE(54)
	{
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::nape::phys::Body &body){
				HX_STACK_PUSH("*::closure","Lucy.hx",54);
				{
					HX_STACK_LINE(54)
					if (((body->zpp_inner->wrap_pos == null()))){
						HX_STACK_LINE(54)
						body->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(54)
					return body->zpp_inner->wrap_pos;
				}
				return null();
			}
		};
		HX_STACK_LINE(54)
		::nape::geom::Vec2 _this = _Function_2_1::Block(body);		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(54)
		if (((bool((_this != null())) && bool(_this->zpp_disp)))){
			HX_STACK_LINE(54)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(54)
			if ((_this1->_immutable)){
				HX_STACK_LINE(54)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(54)
			if (((_this1->_isimmutable != null()))){
				HX_STACK_LINE(54)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(54)
		if (((bool((x != x)) || bool((y != y))))){
			HX_STACK_LINE(54)
			hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
		}
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2 _this){
				HX_STACK_PUSH("*::closure","Lucy.hx",54);
				{
					HX_STACK_LINE(54)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(54)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(54)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(54)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(54)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static Float Block( ::nape::geom::Vec2 _this){
				HX_STACK_PUSH("*::closure","Lucy.hx",54);
				{
					HX_STACK_LINE(54)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(54)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(54)
					{
						HX_STACK_LINE(54)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(54)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(54)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(54)
					return _this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(54)
		if ((!(((bool((_Function_2_2::Block(_this) == x)) && bool((_Function_2_3::Block(_this) == y))))))){
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				_this->zpp_inner->x = x;
				HX_STACK_LINE(54)
				_this->zpp_inner->y = y;
				HX_STACK_LINE(54)
				{
				}
			}
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(54)
				if (((_this1->_invalidate != null()))){
					HX_STACK_LINE(54)
					_this1->_invalidate(_this1);
				}
			}
		}
		HX_STACK_LINE(54)
		_this;
	}
	HX_STACK_LINE(55)
	{
		struct _Function_2_1{
			inline static Float Block( ::nape::shape::Circle &circle){
				HX_STACK_PUSH("*::closure","Lucy.hx",55);
				{
					HX_STACK_LINE(55)
					::nape::geom::AABB _this = circle->zpp_inner->aabb->wrapper();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(55)
					{
						HX_STACK_LINE(55)
						::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(55)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(55)
							_this1->_validate();
						}
					}
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::AABB _this){
							HX_STACK_PUSH("*::closure","Lucy.hx",55);
							{
								HX_STACK_LINE(55)
								::zpp_nape::geom::ZPP_AABB _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(55)
								return (_this1->maxy - _this1->miny);
							}
							return null();
						}
					};
					HX_STACK_LINE(55)
					return _Function_3_1::Block(_this);
				}
				return null();
			}
		};
		HX_STACK_LINE(55)
		::nape::geom::Vec2 localCOM = ::nape::geom::Vec2_obj::__new((int)0,(Float(_Function_2_1::Block(circle)) / Float((int)3)));		HX_STACK_VAR(localCOM,"localCOM");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			circle->zpp_inner->immutable_midstep(HX_CSTRING("Body::localCOM"));
			HX_STACK_LINE(55)
			if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
				HX_STACK_LINE(55)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(55)
			if (((bool((bool((circle->zpp_inner->body != null())) && bool((circle->zpp_inner->body->space != null())))) && bool((circle->zpp_inner->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))){
				HX_STACK_LINE(55)
				hx::Throw (HX_CSTRING("Error: Cannot modify Shape belonging to a static Object once inside a Space"));
			}
			HX_STACK_LINE(55)
			if (((localCOM == null()))){
				HX_STACK_LINE(55)
				hx::Throw (HX_CSTRING("Error: Shape::localCOM cannot be null"));
			}
			HX_STACK_LINE(55)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::shape::Circle &circle){
						HX_STACK_PUSH("*::closure","Lucy.hx",55);
						{
							HX_STACK_LINE(55)
							if (((circle->zpp_inner->wrap_localCOM == null()))){
								HX_STACK_LINE(55)
								if (((circle->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
									HX_STACK_LINE(55)
									circle->zpp_inner->circle->setupLocalCOM();
								}
								else{
									HX_STACK_LINE(55)
									circle->zpp_inner->polygon->setupLocalCOM();
								}
							}
							HX_STACK_LINE(55)
							return circle->zpp_inner->wrap_localCOM;
						}
						return null();
					}
				};
				HX_STACK_LINE(55)
				::nape::geom::Vec2 _this = _Function_4_1::Block(circle);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(55)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(55)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(55)
				if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
					HX_STACK_LINE(55)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(55)
					if ((_this1->_immutable)){
						HX_STACK_LINE(55)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(55)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(55)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(55)
				if (((localCOM == null()))){
					HX_STACK_LINE(55)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &localCOM,::nape::geom::Vec2 _this){
						HX_STACK_PUSH("*::closure","Lucy.hx",55);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &localCOM){
									HX_STACK_PUSH("*::closure","Lucy.hx",55);
									{
										HX_STACK_LINE(55)
										if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
											HX_STACK_LINE(55)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(55)
										{
											HX_STACK_LINE(55)
											::zpp_nape::geom::ZPP_Vec2 _this1 = localCOM->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(55)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(55)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(55)
										return localCOM->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &localCOM){
									HX_STACK_PUSH("*::closure","Lucy.hx",55);
									{
										HX_STACK_LINE(55)
										if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
											HX_STACK_LINE(55)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(55)
										{
											HX_STACK_LINE(55)
											::zpp_nape::geom::ZPP_Vec2 _this1 = localCOM->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(55)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(55)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(55)
										return localCOM->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(55)
							Float x1 = _Function_5_1::Block(localCOM);		HX_STACK_VAR(x1,"x1");
							Float y1 = _Function_5_2::Block(localCOM);		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(55)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(55)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(55)
							{
								HX_STACK_LINE(55)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(55)
								if ((_this1->_immutable)){
									HX_STACK_LINE(55)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(55)
								if (((_this1->_isimmutable != null()))){
									HX_STACK_LINE(55)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(55)
							if (((bool((x1 != x1)) || bool((y1 != y1))))){
								HX_STACK_LINE(55)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 _this){
									HX_STACK_PUSH("*::closure","Lucy.hx",55);
									{
										HX_STACK_LINE(55)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(55)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(55)
										{
											HX_STACK_LINE(55)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(55)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(55)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(55)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 _this){
									HX_STACK_PUSH("*::closure","Lucy.hx",55);
									{
										HX_STACK_LINE(55)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(55)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(55)
										{
											HX_STACK_LINE(55)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(55)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(55)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(55)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(55)
							if ((!(((bool((_Function_5_3::Block(_this) == x1)) && bool((_Function_5_4::Block(_this) == y1))))))){
								HX_STACK_LINE(55)
								{
									HX_STACK_LINE(55)
									_this->zpp_inner->x = x1;
									HX_STACK_LINE(55)
									_this->zpp_inner->y = y1;
									HX_STACK_LINE(55)
									{
									}
								}
								HX_STACK_LINE(55)
								{
									HX_STACK_LINE(55)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(55)
									if (((_this1->_invalidate != null()))){
										HX_STACK_LINE(55)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(55)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(55)
				::nape::geom::Vec2 ret = _Function_4_2::Block(localCOM,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(55)
				if ((localCOM->zpp_inner->weak)){
					HX_STACK_LINE(55)
					{
						HX_STACK_LINE(55)
						if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
							HX_STACK_LINE(55)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(55)
						{
							HX_STACK_LINE(55)
							::zpp_nape::geom::ZPP_Vec2 _this1 = localCOM->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(55)
							if ((_this1->_immutable)){
								HX_STACK_LINE(55)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(55)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(55)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(55)
						if ((localCOM->zpp_inner->_inuse)){
							HX_STACK_LINE(55)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(55)
						::zpp_nape::geom::ZPP_Vec2 inner = localCOM->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(55)
						localCOM->zpp_inner->outer = null();
						HX_STACK_LINE(55)
						localCOM->zpp_inner = null();
						HX_STACK_LINE(55)
						{
							HX_STACK_LINE(55)
							::nape::geom::Vec2 o = localCOM;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(55)
							o->zpp_pool = null();
							HX_STACK_LINE(55)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(55)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(55)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(55)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(55)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(55)
						{
							HX_STACK_LINE(55)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(55)
							{
								HX_STACK_LINE(55)
								if (((o->outer != null()))){
									HX_STACK_LINE(55)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(55)
									o->outer = null();
								}
								HX_STACK_LINE(55)
								o->_isimmutable = null();
								HX_STACK_LINE(55)
								o->_validate = null();
								HX_STACK_LINE(55)
								o->_invalidate = null();
							}
							HX_STACK_LINE(55)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(55)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(55)
					true;
				}
				else{
					HX_STACK_LINE(55)
					false;
				}
				HX_STACK_LINE(55)
				ret;
			}
		}
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			if (((circle->zpp_inner->wrap_localCOM == null()))){
				HX_STACK_LINE(55)
				if (((circle->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(55)
					circle->zpp_inner->circle->setupLocalCOM();
				}
				else{
					HX_STACK_LINE(55)
					circle->zpp_inner->polygon->setupLocalCOM();
				}
			}
			HX_STACK_LINE(55)
			circle->zpp_inner->wrap_localCOM;
		}
	}
	HX_STACK_LINE(57)
	this->lucy->body = body;
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::nape::space::Space space = ::Main_obj::space;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			if (((body->zpp_inner->compound != null()))){
				HX_STACK_LINE(58)
				hx::Throw (HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
			}
			HX_STACK_LINE(58)
			body->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
			HX_STACK_LINE(58)
			if ((body->zpp_inner->world)){
				HX_STACK_LINE(58)
				hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
			}
			HX_STACK_LINE(58)
			if (((((  (((body->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(body->zpp_inner->space->outer) )) != space))){
				HX_STACK_LINE(58)
				if (((((  (((body->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(body->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(58)
					body->zpp_inner->component->woken = false;
				}
				HX_STACK_LINE(58)
				if (((((  (((body->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(body->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(58)
					((  (((body->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(body->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(body);
				}
				HX_STACK_LINE(58)
				if (((space != null()))){
					HX_STACK_LINE(58)
					::nape::phys::BodyList _this = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(58)
					if ((_this->zpp_inner->reverse_flag)){
						HX_STACK_LINE(58)
						_this->push(body);
					}
					else{
						HX_STACK_LINE(58)
						_this->unshift(body);
					}
				}
			}
		}
		HX_STACK_LINE(58)
		if (((body->zpp_inner->space == null()))){
			HX_STACK_LINE(58)
			Dynamic();
		}
		else{
			HX_STACK_LINE(58)
			body->zpp_inner->space->outer;
		}
	}
	struct _Function_1_5{
		inline static Dynamic Block( ::nape::phys::Body &body){
			HX_STACK_PUSH("*::closure","Lucy.hx",60);
			{
				HX_STACK_LINE(60)
				if (((body->zpp_inner_i->userData == null()))){
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_PUSH("*::closure","Lucy.hx",60);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(60)
					body->zpp_inner_i->userData = _Function_3_1::Block();
				}
				HX_STACK_LINE(60)
				return body->zpp_inner_i->userData;
			}
			return null();
		}
	};
	HX_STACK_LINE(60)
	(_Function_1_5::Block(body))->__FieldRef(HX_CSTRING("graphic")) = this->lucy->layer->view;
	HX_STACK_LINE(61)
	::nape::geom::Vec2 pivot = ::nape::geom::Vec2_obj::__new((int)0,(int)0);		HX_STACK_VAR(pivot,"pivot");
	struct _Function_1_6{
		inline static Dynamic Block( ::nape::phys::Body &body){
			HX_STACK_PUSH("*::closure","Lucy.hx",62);
			{
				HX_STACK_LINE(62)
				if (((body->zpp_inner_i->userData == null()))){
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_PUSH("*::closure","Lucy.hx",62);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(62)
					body->zpp_inner_i->userData = _Function_3_1::Block();
				}
				HX_STACK_LINE(62)
				return body->zpp_inner_i->userData;
			}
			return null();
		}
	};
	HX_STACK_LINE(62)
	(_Function_1_6::Block(body))->__FieldRef(HX_CSTRING("graphicOffset")) = pivot;
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			body->zpp_inner->immutable_midstep((HX_CSTRING("Body::") + HX_CSTRING("false")));
			HX_STACK_LINE(64)
			if (((!(body->zpp_inner->norotate) != false))){
				HX_STACK_LINE(64)
				body->zpp_inner->norotate = true;
				HX_STACK_LINE(64)
				body->zpp_inner->invalidate_inertia();
			}
		}
		HX_STACK_LINE(64)
		!(body->zpp_inner->norotate);
	}
	HX_STACK_LINE(65)
	body->setShapeMaterials(::nape::phys::Material_obj::__new(0.1,1.0,2.0,5.0,0.001));
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			if (((_body->zpp_inner->compound != null()))){
				HX_STACK_LINE(67)
				hx::Throw (HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
			}
			HX_STACK_LINE(67)
			_body->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
			HX_STACK_LINE(67)
			if ((_body->zpp_inner->world)){
				HX_STACK_LINE(67)
				hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
			}
			HX_STACK_LINE(67)
			if (((((  (((_body->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_body->zpp_inner->space->outer) )) != null()))){
				HX_STACK_LINE(67)
				if (((((  (((_body->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_body->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(67)
					_body->zpp_inner->component->woken = false;
				}
				HX_STACK_LINE(67)
				if (((((  (((_body->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_body->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(67)
					((  (((_body->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_body->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_body);
				}
				HX_STACK_LINE(67)
				{
				}
			}
		}
		HX_STACK_LINE(67)
		if (((_body->zpp_inner->space == null()))){
			HX_STACK_LINE(67)
			Dynamic();
		}
		else{
			HX_STACK_LINE(67)
			_body->zpp_inner->space->outer;
		}
	}
	HX_STACK_LINE(69)
	return body;
}


HX_DEFINE_DYNAMIC_FUNC2(Lucy_obj,generateBody,return )

Void Lucy_obj::render( ){
{
		HX_STACK_PUSH("Lucy::render","Lucy.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_LINE(28)
		this->walk(this->lucy->body,::Settings_obj::flockSpeed,::Settings_obj::flockVelocity);
		struct _Function_1_1{
			inline static Float Block( ::Lucy_obj *__this){
				HX_STACK_PUSH("*::closure","Lucy.hx",31);
				{
					struct _Function_2_1{
						inline static ::nape::geom::Vec2 Block( ::Lucy_obj *__this){
							HX_STACK_PUSH("*::closure","Lucy.hx",31);
							{
								HX_STACK_LINE(31)
								::nape::phys::Body _this = __this->lucy->body;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(31)
								if (((_this->zpp_inner->wrap_pos == null()))){
									HX_STACK_LINE(31)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(31)
								return _this->zpp_inner->wrap_pos;
							}
							return null();
						}
					};
					HX_STACK_LINE(31)
					::nape::geom::Vec2 _this = _Function_2_1::Block(__this);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(31)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(31)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(31)
					{
						HX_STACK_LINE(31)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(31)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(31)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(31)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(31)
		if (((this->prevX == _Function_1_1::Block(this)))){
			HX_STACK_LINE(32)
			this->lucy->clip->stop();
			HX_STACK_LINE(33)
			this->stopped = true;
		}
		struct _Function_1_2{
			inline static Float Block( ::Lucy_obj *__this){
				HX_STACK_PUSH("*::closure","Lucy.hx",36);
				{
					struct _Function_2_1{
						inline static ::nape::geom::Vec2 Block( ::Lucy_obj *__this){
							HX_STACK_PUSH("*::closure","Lucy.hx",36);
							{
								HX_STACK_LINE(36)
								::nape::phys::Body _this = __this->lucy->body;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(36)
								if (((_this->zpp_inner->wrap_pos == null()))){
									HX_STACK_LINE(36)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(36)
								return _this->zpp_inner->wrap_pos;
							}
							return null();
						}
					};
					HX_STACK_LINE(36)
					::nape::geom::Vec2 _this = _Function_2_1::Block(__this);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(36)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(36)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(36)
					{
						HX_STACK_LINE(36)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(36)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(36)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(36)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		if (((bool((this->prevX != _Function_1_2::Block(this))) && bool((this->stopped == true))))){
			HX_STACK_LINE(36)
			this->lucy->clip->play();
		}
		struct _Function_1_3{
			inline static Float Block( ::Lucy_obj *__this){
				HX_STACK_PUSH("*::closure","Lucy.hx",40);
				{
					struct _Function_2_1{
						inline static ::nape::geom::Vec2 Block( ::Lucy_obj *__this){
							HX_STACK_PUSH("*::closure","Lucy.hx",40);
							{
								HX_STACK_LINE(40)
								::nape::phys::Body _this = __this->lucy->body;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(40)
								if (((_this->zpp_inner->wrap_pos == null()))){
									HX_STACK_LINE(40)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(40)
								return _this->zpp_inner->wrap_pos;
							}
							return null();
						}
					};
					HX_STACK_LINE(40)
					::nape::geom::Vec2 _this = _Function_2_1::Block(__this);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(40)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(40)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(40)
					{
						HX_STACK_LINE(40)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(40)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(40)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(40)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(40)
		this->prevX = _Function_1_3::Block(this);
		HX_STACK_LINE(42)
		::Camera_obj::follow(this->lucy->body);
	}
return null();
}



Lucy_obj::Lucy_obj()
{
}

void Lucy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lucy);
	HX_MARK_MEMBER_NAME(stopped,"stopped");
	HX_MARK_MEMBER_NAME(prevX,"prevX");
	HX_MARK_MEMBER_NAME(lucy,"lucy");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Lucy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stopped,"stopped");
	HX_VISIT_MEMBER_NAME(prevX,"prevX");
	HX_VISIT_MEMBER_NAME(lucy,"lucy");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Lucy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lucy") ) { return lucy; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"prevX") ) { return prevX; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stopped") ) { return stopped; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"generateBody") ) { return generateBody_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lucy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lucy") ) { lucy=inValue.Cast< ::SpriteObject >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"prevX") ) { prevX=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stopped") ) { stopped=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Lucy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stopped"));
	outFields->push(HX_CSTRING("prevX"));
	outFields->push(HX_CSTRING("lucy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("generateBody"),
	HX_CSTRING("render"),
	HX_CSTRING("stopped"),
	HX_CSTRING("prevX"),
	HX_CSTRING("lucy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lucy_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lucy_obj::__mClass,"__mClass");
};

Class Lucy_obj::__mClass;

void Lucy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Lucy"), hx::TCanCast< Lucy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Lucy_obj::__boot()
{
}

