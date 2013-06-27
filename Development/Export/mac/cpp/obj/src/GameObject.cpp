#include <hxcpp.h>

#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Mobile
#include <Mobile.h>
#endif
#ifndef INCLUDED_RenderManager
#include <RenderManager.h>
#endif
#ifndef INCLUDED_Settings
#include <Settings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif

Void GameObject_obj::__construct(::String xmlUrl)
{
HX_STACK_PUSH("GameObject::new","GameObject.hx",37);
{
	HX_STACK_LINE(40)
	this->space = ::Main_obj::space;
	HX_STACK_LINE(41)
	this->canvas = ::Main_obj::canvas;
	HX_STACK_LINE(44)
	if (((bool((xmlUrl != null())) || bool((xmlUrl != HX_CSTRING("")))))){
		HX_STACK_LINE(45)
		this->readXml(xmlUrl);
		HX_STACK_LINE(46)
		this->init();
	}
}
;
	return null();
}

GameObject_obj::~GameObject_obj() { }

Dynamic GameObject_obj::__CreateEmpty() { return  new GameObject_obj; }
hx::ObjectPtr< GameObject_obj > GameObject_obj::__new(::String xmlUrl)
{  hx::ObjectPtr< GameObject_obj > result = new GameObject_obj();
	result->__construct(xmlUrl);
	return result;}

Dynamic GameObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameObject_obj > result = new GameObject_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GameObject_obj::setXY( Float x,Float y,hx::Null< bool >  __o_offset){
bool offset = __o_offset.Default(false);
	HX_STACK_PUSH("GameObject::setXY","GameObject.hx",151);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(offset,"offset");
{
		struct _Function_1_1{
			inline static Dynamic Block( ::GameObject_obj *__this){
				HX_STACK_PUSH("*::closure","GameObject.hx",152);
				{
					HX_STACK_LINE(152)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(152)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","GameObject.hx",152);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(152)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(152)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(152)
		::nape::geom::Vec2 bodyOffset = (_Function_1_1::Block(this))->__Field(HX_CSTRING("graphicOffset"),true);		HX_STACK_VAR(bodyOffset,"bodyOffset");
		HX_STACK_LINE(153)
		if ((offset)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &bodyOffset){
					HX_STACK_PUSH("*::closure","GameObject.hx",154);
					{
						HX_STACK_LINE(154)
						if (((bool((bodyOffset != null())) && bool(bodyOffset->zpp_disp)))){
							HX_STACK_LINE(154)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							::zpp_nape::geom::ZPP_Vec2 _this = bodyOffset->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(154)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(154)
								_this->_validate();
							}
						}
						HX_STACK_LINE(154)
						return bodyOffset->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(154)
			hx::SubEq(x,_Function_2_1::Block(bodyOffset));
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &bodyOffset){
					HX_STACK_PUSH("*::closure","GameObject.hx",155);
					{
						HX_STACK_LINE(155)
						if (((bool((bodyOffset != null())) && bool(bodyOffset->zpp_disp)))){
							HX_STACK_LINE(155)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							::zpp_nape::geom::ZPP_Vec2 _this = bodyOffset->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(155)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(155)
								_this->_validate();
							}
						}
						HX_STACK_LINE(155)
						return bodyOffset->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(155)
			hx::SubEq(y,_Function_2_2::Block(bodyOffset));
		}
		HX_STACK_LINE(157)
		{
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ::GameObject_obj *__this){
					HX_STACK_PUSH("*::closure","GameObject.hx",157);
					{
						HX_STACK_LINE(157)
						::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(157)
						if (((_this->zpp_inner->wrap_pos == null()))){
							HX_STACK_LINE(157)
							_this->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(157)
						return _this->zpp_inner->wrap_pos;
					}
					return null();
				}
			};
			HX_STACK_LINE(157)
			::nape::geom::Vec2 _this = _Function_2_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(157)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(157)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(157)
			{
				HX_STACK_LINE(157)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(157)
				if ((_this1->_immutable)){
					HX_STACK_LINE(157)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(157)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(157)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(157)
			if (((bool((x != x)) || bool((y != y))))){
				HX_STACK_LINE(157)
				hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 _this){
					HX_STACK_PUSH("*::closure","GameObject.hx",157);
					{
						HX_STACK_LINE(157)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(157)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(157)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(157)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(157)
						return _this->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 _this){
					HX_STACK_PUSH("*::closure","GameObject.hx",157);
					{
						HX_STACK_LINE(157)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(157)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(157)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(157)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(157)
						return _this->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(157)
			if ((!(((bool((_Function_2_2::Block(_this) == x)) && bool((_Function_2_3::Block(_this) == y))))))){
				HX_STACK_LINE(157)
				{
					HX_STACK_LINE(157)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(157)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(157)
					{
					}
				}
				HX_STACK_LINE(157)
				{
					HX_STACK_LINE(157)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(157)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(157)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(157)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GameObject_obj,setXY,(void))

Void GameObject_obj::hide( ){
{
		HX_STACK_PUSH("GameObject::hide","GameObject.hx",147);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,hide,(void))

bool GameObject_obj::inView( ){
	HX_STACK_PUSH("GameObject::inView","GameObject.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_LINE(130)
	bool toReturn = false;		HX_STACK_VAR(toReturn,"toReturn");
	HX_STACK_LINE(131)
	::flash::geom::Point camera = ::Camera_obj::getPosition();		HX_STACK_VAR(camera,"camera");
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::GameObject_obj *__this){
			HX_STACK_PUSH("*::closure","GameObject.hx",132);
			{
				HX_STACK_LINE(132)
				::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(132)
				if (((_this->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(132)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(132)
				return _this->zpp_inner->wrap_pos;
			}
			return null();
		}
	};
	HX_STACK_LINE(132)
	::nape::geom::Vec2 bodyPos = _Function_1_1::Block(this);		HX_STACK_VAR(bodyPos,"bodyPos");
	struct _Function_1_2{
		inline static ::nape::geom::AABB Block( ::GameObject_obj *__this){
			HX_STACK_PUSH("*::closure","GameObject.hx",133);
			{
				HX_STACK_LINE(133)
				::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(133)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(133)
					hx::Throw (HX_CSTRING("Error: Space::world has no bounds"));
				}
				HX_STACK_LINE(133)
				return _this->zpp_inner->aabb->wrapper();
			}
			return null();
		}
	};
	HX_STACK_LINE(133)
	::nape::geom::AABB bodyBounds = _Function_1_2::Block(this);		HX_STACK_VAR(bodyBounds,"bodyBounds");
	struct _Function_1_3{
		inline static Float Block( ::nape::geom::Vec2 &bodyPos){
			HX_STACK_PUSH("*::closure","GameObject.hx",136);
			{
				HX_STACK_LINE(136)
				if (((bool((bodyPos != null())) && bool(bodyPos->zpp_disp)))){
					HX_STACK_LINE(136)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(136)
				{
					HX_STACK_LINE(136)
					::zpp_nape::geom::ZPP_Vec2 _this = bodyPos->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(136)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(136)
						_this->_validate();
					}
				}
				HX_STACK_LINE(136)
				return bodyPos->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::nape::geom::AABB &bodyBounds){
			HX_STACK_PUSH("*::closure","GameObject.hx",136);
			{
				HX_STACK_LINE(136)
				{
					HX_STACK_LINE(136)
					::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(136)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(136)
						_this->_validate();
					}
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::AABB &bodyBounds){
						HX_STACK_PUSH("*::closure","GameObject.hx",136);
						{
							HX_STACK_LINE(136)
							::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(136)
							return (_this->maxx - _this->minx);
						}
						return null();
					}
				};
				HX_STACK_LINE(136)
				return _Function_2_1::Block(bodyBounds);
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static Float Block( ::nape::geom::Vec2 &bodyPos){
			HX_STACK_PUSH("*::closure","GameObject.hx",136);
			{
				HX_STACK_LINE(136)
				if (((bool((bodyPos != null())) && bool(bodyPos->zpp_disp)))){
					HX_STACK_LINE(136)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(136)
				{
					HX_STACK_LINE(136)
					::zpp_nape::geom::ZPP_Vec2 _this = bodyPos->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(136)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(136)
						_this->_validate();
					}
				}
				HX_STACK_LINE(136)
				return bodyPos->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static Float Block( ::nape::geom::AABB &bodyBounds){
			HX_STACK_PUSH("*::closure","GameObject.hx",136);
			{
				HX_STACK_LINE(136)
				{
					HX_STACK_LINE(136)
					::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(136)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(136)
						_this->_validate();
					}
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::AABB &bodyBounds){
						HX_STACK_PUSH("*::closure","GameObject.hx",136);
						{
							HX_STACK_LINE(136)
							::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(136)
							return (_this->maxx - _this->minx);
						}
						return null();
					}
				};
				HX_STACK_LINE(136)
				return _Function_2_1::Block(bodyBounds);
			}
			return null();
		}
	};
	struct _Function_1_7{
		inline static Float Block( ::nape::geom::Vec2 &bodyPos){
			HX_STACK_PUSH("*::closure","GameObject.hx",138);
			{
				HX_STACK_LINE(138)
				if (((bool((bodyPos != null())) && bool(bodyPos->zpp_disp)))){
					HX_STACK_LINE(138)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(138)
				{
					HX_STACK_LINE(138)
					::zpp_nape::geom::ZPP_Vec2 _this = bodyPos->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(138)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(138)
						_this->_validate();
					}
				}
				HX_STACK_LINE(138)
				return bodyPos->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_8{
		inline static Float Block( ::nape::geom::AABB &bodyBounds){
			HX_STACK_PUSH("*::closure","GameObject.hx",138);
			{
				HX_STACK_LINE(138)
				{
					HX_STACK_LINE(138)
					::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(138)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(138)
						_this->_validate();
					}
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::AABB &bodyBounds){
						HX_STACK_PUSH("*::closure","GameObject.hx",138);
						{
							HX_STACK_LINE(138)
							::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(138)
							return (_this->maxx - _this->minx);
						}
						return null();
					}
				};
				HX_STACK_LINE(138)
				return _Function_2_1::Block(bodyBounds);
			}
			return null();
		}
	};
	struct _Function_1_9{
		inline static Float Block( ::nape::geom::Vec2 &bodyPos){
			HX_STACK_PUSH("*::closure","GameObject.hx",138);
			{
				HX_STACK_LINE(138)
				if (((bool((bodyPos != null())) && bool(bodyPos->zpp_disp)))){
					HX_STACK_LINE(138)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(138)
				{
					HX_STACK_LINE(138)
					::zpp_nape::geom::ZPP_Vec2 _this = bodyPos->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(138)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(138)
						_this->_validate();
					}
				}
				HX_STACK_LINE(138)
				return bodyPos->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_10{
		inline static Float Block( ::nape::geom::AABB &bodyBounds){
			HX_STACK_PUSH("*::closure","GameObject.hx",138);
			{
				HX_STACK_LINE(138)
				{
					HX_STACK_LINE(138)
					::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(138)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(138)
						_this->_validate();
					}
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::AABB &bodyBounds){
						HX_STACK_PUSH("*::closure","GameObject.hx",138);
						{
							HX_STACK_LINE(138)
							::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(138)
							return (_this->maxx - _this->minx);
						}
						return null();
					}
				};
				HX_STACK_LINE(138)
				return _Function_2_1::Block(bodyBounds);
			}
			return null();
		}
	};
	HX_STACK_LINE(135)
	if (((bool((bool(((_Function_1_3::Block(bodyPos) - _Function_1_4::Block(bodyBounds)) > (camera->x - ::Settings_obj::cameraOverflow))) && bool(((_Function_1_5::Block(bodyPos) - _Function_1_6::Block(bodyBounds)) < ((camera->x + ::Mobile_obj::screenWidth) + ::Settings_obj::cameraOverflow))))) || bool((bool(((_Function_1_7::Block(bodyPos) + _Function_1_8::Block(bodyBounds)) > (camera->x - ::Settings_obj::cameraOverflow))) && bool(((_Function_1_9::Block(bodyPos) + _Function_1_10::Block(bodyBounds)) < ((camera->x + ::Mobile_obj::screenWidth) + ::Settings_obj::cameraOverflow)))))))){
		HX_STACK_LINE(139)
		toReturn = true;
	}
	HX_STACK_LINE(144)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,inView,return )

Void GameObject_obj::remove( ){
{
		HX_STACK_PUSH("GameObject::remove","GameObject.hx",118);
		HX_STACK_THIS(this);
		HX_STACK_LINE(120)
		this->hide();
		HX_STACK_LINE(123)
		this->canvas->removeChild(this->asset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,remove,(void))

Void GameObject_obj::renderPhysics( ){
{
		HX_STACK_PUSH("GameObject::renderPhysics","GameObject.hx",107);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::GameObject_obj *__this){
				HX_STACK_PUSH("*::closure","GameObject.hx",109);
				{
					HX_STACK_LINE(109)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(109)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","GameObject.hx",109);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(109)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(109)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(109)
		::flash::display::DisplayObject graphic = (_Function_1_1::Block(this))->__Field(HX_CSTRING("graphic"),true);		HX_STACK_VAR(graphic,"graphic");
		struct _Function_1_2{
			inline static Dynamic Block( ::GameObject_obj *__this){
				HX_STACK_PUSH("*::closure","GameObject.hx",110);
				{
					HX_STACK_LINE(110)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(110)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","GameObject.hx",110);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(110)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(110)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(110)
		::nape::geom::Vec2 graphicOffset = (_Function_1_2::Block(this))->__Field(HX_CSTRING("graphicOffset"),true);		HX_STACK_VAR(graphicOffset,"graphicOffset");
		HX_STACK_LINE(111)
		::nape::geom::Vec2 position = this->body->localPointToWorld(graphicOffset,null());		HX_STACK_VAR(position,"position");
		struct _Function_1_3{
			inline static Float Block( ::nape::geom::Vec2 &position){
				HX_STACK_PUSH("*::closure","GameObject.hx",112);
				{
					HX_STACK_LINE(112)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(112)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(112)
					{
						HX_STACK_LINE(112)
						::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(112)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(112)
							_this->_validate();
						}
					}
					HX_STACK_LINE(112)
					return position->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(112)
		graphic->set_x(_Function_1_3::Block(position));
		struct _Function_1_4{
			inline static Float Block( ::nape::geom::Vec2 &position){
				HX_STACK_PUSH("*::closure","GameObject.hx",113);
				{
					HX_STACK_LINE(113)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(113)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(113)
					{
						HX_STACK_LINE(113)
						::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(113)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(113)
							_this->_validate();
						}
					}
					HX_STACK_LINE(113)
					return position->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(113)
		graphic->set_y(_Function_1_4::Block(position));
		HX_STACK_LINE(114)
		graphic->set_rotation(hx::Mod((Float((this->body->zpp_inner->rot * (int)180)) / Float(::Math_obj::PI)),(int)360));
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			if (((bool((position != null())) && bool(position->zpp_disp)))){
				HX_STACK_LINE(115)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(115)
			{
				HX_STACK_LINE(115)
				::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(115)
				if ((_this->_immutable)){
					HX_STACK_LINE(115)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(115)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(115)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(115)
			if ((position->zpp_inner->_inuse)){
				HX_STACK_LINE(115)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(115)
			::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(115)
			position->zpp_inner->outer = null();
			HX_STACK_LINE(115)
			position->zpp_inner = null();
			HX_STACK_LINE(115)
			{
				HX_STACK_LINE(115)
				::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(115)
				o->zpp_pool = null();
				HX_STACK_LINE(115)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(115)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(115)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(115)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(115)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(115)
			{
				HX_STACK_LINE(115)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(115)
				{
					HX_STACK_LINE(115)
					if (((o->outer != null()))){
						HX_STACK_LINE(115)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(115)
						o->outer = null();
					}
					HX_STACK_LINE(115)
					o->_isimmutable = null();
					HX_STACK_LINE(115)
					o->_validate = null();
					HX_STACK_LINE(115)
					o->_invalidate = null();
				}
				HX_STACK_LINE(115)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(115)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,renderPhysics,(void))

Void GameObject_obj::render( ){
{
		HX_STACK_PUSH("GameObject::render","GameObject.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_LINE(103)
		if ((this->inView())){
			HX_STACK_LINE(104)
			this->renderPhysics();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,render,(void))

::nape::phys::Material GameObject_obj::makeMaterial( ){
	HX_STACK_PUSH("GameObject::makeMaterial","GameObject.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_LINE(93)
	return ::nape::phys::Material_obj::__new(this->_elasticity,this->_dynamicFriction,this->_staticFriction,this->_density,this->_rollingFriction);
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,makeMaterial,return )

Void GameObject_obj::physicsObject( ::String physic){
{
		HX_STACK_PUSH("GameObject::physicsObject","GameObject.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_ARG(physic,"physic");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameObject_obj,physicsObject,(void))

Void GameObject_obj::readXml( ::String url){
{
		HX_STACK_PUSH("GameObject::readXml","GameObject.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_ARG(url,"url");
		HX_STACK_LINE(66)
		::String xmlFile = ::openfl::Assets_obj::getText((::Mobile_obj::xml + url));		HX_STACK_VAR(xmlFile,"xmlFile");
		HX_STACK_LINE(67)
		::haxe::xml::Fast read = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(xmlFile));		HX_STACK_VAR(read,"read");
		HX_STACK_LINE(69)
		::haxe::xml::Fast asset = read->node->resolve(HX_CSTRING("asset"));		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(70)
		this->_imgPath = (::Mobile_obj::asset + asset->node->resolve(HX_CSTRING("img"))->get_innerData());
		HX_STACK_LINE(73)
		this->_x = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("x")));
		HX_STACK_LINE(74)
		this->_y = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("y")));
		HX_STACK_LINE(75)
		this->_rotation = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("rotation")));
		HX_STACK_LINE(78)
		this->_physics = asset->node->resolve(HX_CSTRING("physics"))->get_innerData();
		HX_STACK_LINE(79)
		this->_elasticity = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("material"))->att->resolve(HX_CSTRING("elasticity")));
		HX_STACK_LINE(80)
		this->_dynamicFriction = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("material"))->att->resolve(HX_CSTRING("dynamicFriction")));
		HX_STACK_LINE(81)
		this->_staticFriction = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("material"))->att->resolve(HX_CSTRING("staticFriction")));
		HX_STACK_LINE(82)
		this->_density = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("material"))->att->resolve(HX_CSTRING("density")));
		HX_STACK_LINE(83)
		this->_rollingFriction = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("material"))->att->resolve(HX_CSTRING("rollingFriction")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameObject_obj,readXml,(void))

Void GameObject_obj::init( ){
{
		HX_STACK_PUSH("GameObject::init","GameObject.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_LINE(51)
		this->asset = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(this->_imgPath,null()),null(),null());
		HX_STACK_LINE(52)
		this->_y = (::Mobile_obj::getY(this->asset) - this->_y);
		HX_STACK_LINE(55)
		this->physicsObject(this->_physics);
		HX_STACK_LINE(56)
		this->body->setShapeMaterials(this->makeMaterial());
		HX_STACK_LINE(59)
		::RenderManager_obj::add(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(61)
		this->canvas->addChild(this->asset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,init,(void))


GameObject_obj::GameObject_obj()
{
}

void GameObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameObject);
	HX_MARK_MEMBER_NAME(_rollingFriction,"_rollingFriction");
	HX_MARK_MEMBER_NAME(_staticFriction,"_staticFriction");
	HX_MARK_MEMBER_NAME(_dynamicFriction,"_dynamicFriction");
	HX_MARK_MEMBER_NAME(_density,"_density");
	HX_MARK_MEMBER_NAME(_elasticity,"_elasticity");
	HX_MARK_MEMBER_NAME(_physics,"_physics");
	HX_MARK_MEMBER_NAME(_rotation,"_rotation");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_imgPath,"_imgPath");
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_END_CLASS();
}

void GameObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rollingFriction,"_rollingFriction");
	HX_VISIT_MEMBER_NAME(_staticFriction,"_staticFriction");
	HX_VISIT_MEMBER_NAME(_dynamicFriction,"_dynamicFriction");
	HX_VISIT_MEMBER_NAME(_density,"_density");
	HX_VISIT_MEMBER_NAME(_elasticity,"_elasticity");
	HX_VISIT_MEMBER_NAME(_physics,"_physics");
	HX_VISIT_MEMBER_NAME(_rotation,"_rotation");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_imgPath,"_imgPath");
	HX_VISIT_MEMBER_NAME(asset,"asset");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(body,"body");
}

Dynamic GameObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setXY") ) { return setXY_dyn(); }
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inView") ) { return inView_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readXml") ) { return readXml_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_density") ) { return _density; }
		if (HX_FIELD_EQ(inName,"_physics") ) { return _physics; }
		if (HX_FIELD_EQ(inName,"_imgPath") ) { return _imgPath; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rotation") ) { return _rotation; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_elasticity") ) { return _elasticity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"makeMaterial") ) { return makeMaterial_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderPhysics") ) { return renderPhysics_dyn(); }
		if (HX_FIELD_EQ(inName,"physicsObject") ) { return physicsObject_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_staticFriction") ) { return _staticFriction; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rollingFriction") ) { return _rollingFriction; }
		if (HX_FIELD_EQ(inName,"_dynamicFriction") ) { return _dynamicFriction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_density") ) { _density=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_physics") ) { _physics=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_imgPath") ) { _imgPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rotation") ) { _rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_elasticity") ) { _elasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_staticFriction") ) { _staticFriction=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_rollingFriction") ) { _rollingFriction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dynamicFriction") ) { _dynamicFriction=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_rollingFriction"));
	outFields->push(HX_CSTRING("_staticFriction"));
	outFields->push(HX_CSTRING("_dynamicFriction"));
	outFields->push(HX_CSTRING("_density"));
	outFields->push(HX_CSTRING("_elasticity"));
	outFields->push(HX_CSTRING("_physics"));
	outFields->push(HX_CSTRING("_rotation"));
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_imgPath"));
	outFields->push(HX_CSTRING("asset"));
	outFields->push(HX_CSTRING("canvas"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("body"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setXY"),
	HX_CSTRING("hide"),
	HX_CSTRING("inView"),
	HX_CSTRING("remove"),
	HX_CSTRING("renderPhysics"),
	HX_CSTRING("render"),
	HX_CSTRING("makeMaterial"),
	HX_CSTRING("physicsObject"),
	HX_CSTRING("readXml"),
	HX_CSTRING("init"),
	HX_CSTRING("_rollingFriction"),
	HX_CSTRING("_staticFriction"),
	HX_CSTRING("_dynamicFriction"),
	HX_CSTRING("_density"),
	HX_CSTRING("_elasticity"),
	HX_CSTRING("_physics"),
	HX_CSTRING("_rotation"),
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	HX_CSTRING("_imgPath"),
	HX_CSTRING("asset"),
	HX_CSTRING("canvas"),
	HX_CSTRING("space"),
	HX_CSTRING("body"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameObject_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameObject_obj::__mClass,"__mClass");
};

Class GameObject_obj::__mClass;

void GameObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameObject"), hx::TCanCast< GameObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GameObject_obj::__boot()
{
}

