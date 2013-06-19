#include <hxcpp.h>

#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
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
#ifndef INCLUDED_Settings
#include <Settings.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
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
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
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
HX_STACK_PUSH("GameObject::new","GameObject.hx",26);
{
	HX_STACK_LINE(29)
	this->space = ::Main_obj::space;
	HX_STACK_LINE(30)
	this->canvas = ::Main_obj::canvas;
	HX_STACK_LINE(33)
	this->xml = this->readXml(xmlUrl);
	HX_STACK_LINE(34)
	this->asset = ::native::display::Bitmap_obj::__new(::nme::installer::Assets_obj::getBitmapData(this->xml->get(HX_CSTRING("img")),null()),null(),null());
	HX_STACK_LINE(35)
	this->xml->set(HX_CSTRING("y"),(::Mobile_obj::getY(this->asset) - this->xml->get(HX_CSTRING("y"))));
	HX_STACK_LINE(38)
	this->physicsObject(this->xml->get(HX_CSTRING("physics")));
	HX_STACK_LINE(39)
	this->body->setShapeMaterials(this->makeMaterial());
	HX_STACK_LINE(42)
	::RenderManager_obj::add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(44)
	this->canvas->addChild(this->asset);
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
	HX_STACK_PUSH("GameObject::setXY","GameObject.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(offset,"offset");
{
		struct _Function_1_1{
			inline static Dynamic Block( ::GameObject_obj *__this){
				HX_STACK_PUSH("*::closure","GameObject.hx",136);
				{
					HX_STACK_LINE(136)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(136)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","GameObject.hx",136);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(136)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(136)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(136)
		::nape::geom::Vec2 bodyOffset = (_Function_1_1::Block(this))->__Field(HX_CSTRING("graphicOffset"),true);		HX_STACK_VAR(bodyOffset,"bodyOffset");
		HX_STACK_LINE(137)
		if ((offset)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &bodyOffset){
					HX_STACK_PUSH("*::closure","GameObject.hx",138);
					{
						HX_STACK_LINE(138)
						if (((bool((bodyOffset != null())) && bool(bodyOffset->zpp_disp)))){
							HX_STACK_LINE(138)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(138)
						{
							HX_STACK_LINE(138)
							::zpp_nape::geom::ZPP_Vec2 _this = bodyOffset->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(138)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(138)
								_this->_validate();
							}
						}
						HX_STACK_LINE(138)
						return bodyOffset->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(138)
			hx::SubEq(x,_Function_2_1::Block(bodyOffset));
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &bodyOffset){
					HX_STACK_PUSH("*::closure","GameObject.hx",139);
					{
						HX_STACK_LINE(139)
						if (((bool((bodyOffset != null())) && bool(bodyOffset->zpp_disp)))){
							HX_STACK_LINE(139)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(139)
						{
							HX_STACK_LINE(139)
							::zpp_nape::geom::ZPP_Vec2 _this = bodyOffset->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(139)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(139)
								_this->_validate();
							}
						}
						HX_STACK_LINE(139)
						return bodyOffset->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(139)
			hx::SubEq(y,_Function_2_2::Block(bodyOffset));
		}
		HX_STACK_LINE(141)
		{
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ::GameObject_obj *__this){
					HX_STACK_PUSH("*::closure","GameObject.hx",141);
					{
						HX_STACK_LINE(141)
						::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(141)
						if (((_this->zpp_inner->wrap_pos == null()))){
							HX_STACK_LINE(141)
							_this->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(141)
						return _this->zpp_inner->wrap_pos;
					}
					return null();
				}
			};
			HX_STACK_LINE(141)
			::nape::geom::Vec2 _this = _Function_2_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(141)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(141)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(141)
				if ((_this1->_immutable)){
					HX_STACK_LINE(141)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(141)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(141)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(141)
			if (((bool((x != x)) || bool((y != y))))){
				HX_STACK_LINE(141)
				hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","GameObject.hx",141);
					{
						HX_STACK_LINE(141)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(141)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(141)
						{
							HX_STACK_LINE(141)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(141)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(141)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(141)
						return _this->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","GameObject.hx",141);
					{
						HX_STACK_LINE(141)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(141)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(141)
						{
							HX_STACK_LINE(141)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(141)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(141)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(141)
						return _this->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(141)
			if ((!(((bool((_Function_2_2::Block(_this) == x)) && bool((_Function_2_3::Block(_this) == y))))))){
				HX_STACK_LINE(141)
				{
					HX_STACK_LINE(141)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(141)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(141)
					{
					}
					HX_STACK_LINE(141)
					{
					}
				}
				HX_STACK_LINE(141)
				{
					HX_STACK_LINE(141)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(141)
					if (((_this1->_invalidate_dyn() != null()))){
						HX_STACK_LINE(141)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(141)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GameObject_obj,setXY,(void))

Void GameObject_obj::hide( ){
{
		HX_STACK_PUSH("GameObject::hide","GameObject.hx",131);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,hide,(void))

bool GameObject_obj::inView( ){
	HX_STACK_PUSH("GameObject::inView","GameObject.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_LINE(114)
	bool toReturn = false;		HX_STACK_VAR(toReturn,"toReturn");
	HX_STACK_LINE(115)
	::native::geom::Point camera = ::Camera_obj::getPosition();		HX_STACK_VAR(camera,"camera");
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::GameObject_obj *__this){
			HX_STACK_PUSH("*::closure","GameObject.hx",116);
			{
				HX_STACK_LINE(116)
				::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(116)
				if (((_this->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(116)
					_this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(116)
				return _this->zpp_inner->wrap_pos;
			}
			return null();
		}
	};
	HX_STACK_LINE(116)
	::nape::geom::Vec2 bodyPos = _Function_1_1::Block(this);		HX_STACK_VAR(bodyPos,"bodyPos");
	struct _Function_1_2{
		inline static ::nape::geom::AABB Block( ::GameObject_obj *__this){
			HX_STACK_PUSH("*::closure","GameObject.hx",117);
			{
				HX_STACK_LINE(117)
				::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(117)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(117)
					hx::Throw (HX_CSTRING("Error: Space::world has no bounds"));
				}
				HX_STACK_LINE(117)
				return _this->zpp_inner->aabb->wrapper();
			}
			return null();
		}
	};
	HX_STACK_LINE(117)
	::nape::geom::AABB bodyBounds = _Function_1_2::Block(this);		HX_STACK_VAR(bodyBounds,"bodyBounds");
	struct _Function_1_3{
		inline static Float Block( ::nape::geom::Vec2 &bodyPos){
			HX_STACK_PUSH("*::closure","GameObject.hx",120);
			{
				HX_STACK_LINE(120)
				if (((bool((bodyPos != null())) && bool(bodyPos->zpp_disp)))){
					HX_STACK_LINE(120)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(120)
					::zpp_nape::geom::ZPP_Vec2 _this = bodyPos->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(120)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(120)
						_this->_validate();
					}
				}
				HX_STACK_LINE(120)
				return bodyPos->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::nape::geom::AABB &bodyBounds){
			HX_STACK_PUSH("*::closure","GameObject.hx",120);
			{
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(120)
					::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(120)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(120)
						_this->_validate();
					}
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::AABB &bodyBounds){
						HX_STACK_PUSH("*::closure","GameObject.hx",120);
						{
							HX_STACK_LINE(120)
							::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(120)
							return (_this->maxx - _this->minx);
						}
						return null();
					}
				};
				HX_STACK_LINE(120)
				return _Function_2_1::Block(bodyBounds);
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static Float Block( ::nape::geom::Vec2 &bodyPos){
			HX_STACK_PUSH("*::closure","GameObject.hx",120);
			{
				HX_STACK_LINE(120)
				if (((bool((bodyPos != null())) && bool(bodyPos->zpp_disp)))){
					HX_STACK_LINE(120)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(120)
					::zpp_nape::geom::ZPP_Vec2 _this = bodyPos->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(120)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(120)
						_this->_validate();
					}
				}
				HX_STACK_LINE(120)
				return bodyPos->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static Float Block( ::nape::geom::AABB &bodyBounds){
			HX_STACK_PUSH("*::closure","GameObject.hx",120);
			{
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(120)
					::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(120)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(120)
						_this->_validate();
					}
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::AABB &bodyBounds){
						HX_STACK_PUSH("*::closure","GameObject.hx",120);
						{
							HX_STACK_LINE(120)
							::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(120)
							return (_this->maxx - _this->minx);
						}
						return null();
					}
				};
				HX_STACK_LINE(120)
				return _Function_2_1::Block(bodyBounds);
			}
			return null();
		}
	};
	struct _Function_1_7{
		inline static Float Block( ::nape::geom::Vec2 &bodyPos){
			HX_STACK_PUSH("*::closure","GameObject.hx",122);
			{
				HX_STACK_LINE(122)
				if (((bool((bodyPos != null())) && bool(bodyPos->zpp_disp)))){
					HX_STACK_LINE(122)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					::zpp_nape::geom::ZPP_Vec2 _this = bodyPos->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(122)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(122)
						_this->_validate();
					}
				}
				HX_STACK_LINE(122)
				return bodyPos->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_8{
		inline static Float Block( ::nape::geom::AABB &bodyBounds){
			HX_STACK_PUSH("*::closure","GameObject.hx",122);
			{
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(122)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(122)
						_this->_validate();
					}
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::AABB &bodyBounds){
						HX_STACK_PUSH("*::closure","GameObject.hx",122);
						{
							HX_STACK_LINE(122)
							::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(122)
							return (_this->maxx - _this->minx);
						}
						return null();
					}
				};
				HX_STACK_LINE(122)
				return _Function_2_1::Block(bodyBounds);
			}
			return null();
		}
	};
	struct _Function_1_9{
		inline static Float Block( ::nape::geom::Vec2 &bodyPos){
			HX_STACK_PUSH("*::closure","GameObject.hx",122);
			{
				HX_STACK_LINE(122)
				if (((bool((bodyPos != null())) && bool(bodyPos->zpp_disp)))){
					HX_STACK_LINE(122)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					::zpp_nape::geom::ZPP_Vec2 _this = bodyPos->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(122)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(122)
						_this->_validate();
					}
				}
				HX_STACK_LINE(122)
				return bodyPos->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_10{
		inline static Float Block( ::nape::geom::AABB &bodyBounds){
			HX_STACK_PUSH("*::closure","GameObject.hx",122);
			{
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(122)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(122)
						_this->_validate();
					}
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::AABB &bodyBounds){
						HX_STACK_PUSH("*::closure","GameObject.hx",122);
						{
							HX_STACK_LINE(122)
							::zpp_nape::geom::ZPP_AABB _this = bodyBounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(122)
							return (_this->maxx - _this->minx);
						}
						return null();
					}
				};
				HX_STACK_LINE(122)
				return _Function_2_1::Block(bodyBounds);
			}
			return null();
		}
	};
	HX_STACK_LINE(119)
	if (((bool((bool(((_Function_1_3::Block(bodyPos) - _Function_1_4::Block(bodyBounds)) > (camera->x - ::Settings_obj::cameraOverflow))) && bool(((_Function_1_5::Block(bodyPos) - _Function_1_6::Block(bodyBounds)) < ((camera->x + ::Mobile_obj::screenWidth) + ::Settings_obj::cameraOverflow))))) || bool((bool(((_Function_1_7::Block(bodyPos) + _Function_1_8::Block(bodyBounds)) > (camera->x - ::Settings_obj::cameraOverflow))) && bool(((_Function_1_9::Block(bodyPos) + _Function_1_10::Block(bodyBounds)) < ((camera->x + ::Mobile_obj::screenWidth) + ::Settings_obj::cameraOverflow)))))))){
		HX_STACK_LINE(123)
		toReturn = true;
	}
	HX_STACK_LINE(128)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,inView,return )

Void GameObject_obj::remove( ){
{
		HX_STACK_PUSH("GameObject::remove","GameObject.hx",102);
		HX_STACK_THIS(this);
		HX_STACK_LINE(104)
		this->hide();
		HX_STACK_LINE(107)
		this->canvas->removeChild(this->asset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,remove,(void))

Void GameObject_obj::renderPhysics( ){
{
		HX_STACK_PUSH("GameObject::renderPhysics","GameObject.hx",91);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::GameObject_obj *__this){
				HX_STACK_PUSH("*::closure","GameObject.hx",93);
				{
					HX_STACK_LINE(93)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(93)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","GameObject.hx",93);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(93)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(93)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(93)
		::native::display::DisplayObject graphic = (_Function_1_1::Block(this))->__Field(HX_CSTRING("graphic"),true);		HX_STACK_VAR(graphic,"graphic");
		struct _Function_1_2{
			inline static Dynamic Block( ::GameObject_obj *__this){
				HX_STACK_PUSH("*::closure","GameObject.hx",94);
				{
					HX_STACK_LINE(94)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(94)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","GameObject.hx",94);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(94)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(94)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(94)
		::nape::geom::Vec2 graphicOffset = (_Function_1_2::Block(this))->__Field(HX_CSTRING("graphicOffset"),true);		HX_STACK_VAR(graphicOffset,"graphicOffset");
		HX_STACK_LINE(95)
		::nape::geom::Vec2 position = this->body->localPointToWorld(graphicOffset,null());		HX_STACK_VAR(position,"position");
		struct _Function_1_3{
			inline static Float Block( ::nape::geom::Vec2 &position){
				HX_STACK_PUSH("*::closure","GameObject.hx",96);
				{
					HX_STACK_LINE(96)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(96)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(96)
					{
						HX_STACK_LINE(96)
						::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(96)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(96)
							_this->_validate();
						}
					}
					HX_STACK_LINE(96)
					return position->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(96)
		graphic->set_x(_Function_1_3::Block(position));
		struct _Function_1_4{
			inline static Float Block( ::nape::geom::Vec2 &position){
				HX_STACK_PUSH("*::closure","GameObject.hx",97);
				{
					HX_STACK_LINE(97)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(97)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(97)
					{
						HX_STACK_LINE(97)
						::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(97)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(97)
							_this->_validate();
						}
					}
					HX_STACK_LINE(97)
					return position->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(97)
		graphic->set_y(_Function_1_4::Block(position));
		HX_STACK_LINE(98)
		graphic->set_rotation(hx::Mod((Float((this->body->zpp_inner->rot * (int)180)) / Float(::Math_obj::PI)),(int)360));
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			if (((bool((position != null())) && bool(position->zpp_disp)))){
				HX_STACK_LINE(99)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(99)
				if ((_this->_immutable)){
					HX_STACK_LINE(99)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(99)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(99)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(99)
			if ((position->zpp_inner->_inuse)){
				HX_STACK_LINE(99)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(99)
			::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(99)
			position->zpp_inner->outer = null();
			HX_STACK_LINE(99)
			position->zpp_inner = null();
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(99)
				{
				}
				HX_STACK_LINE(99)
				o->zpp_pool = null();
				HX_STACK_LINE(99)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(99)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(99)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(99)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(99)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(99)
				{
				}
				HX_STACK_LINE(99)
				{
					HX_STACK_LINE(99)
					if (((o->outer != null()))){
						HX_STACK_LINE(99)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(99)
						o->outer = null();
					}
					HX_STACK_LINE(99)
					o->_isimmutable = null();
					HX_STACK_LINE(99)
					o->_validate = null();
					HX_STACK_LINE(99)
					o->_invalidate = null();
				}
				HX_STACK_LINE(99)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(99)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,renderPhysics,(void))

Void GameObject_obj::render( ){
{
		HX_STACK_PUSH("GameObject::render","GameObject.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_LINE(87)
		if ((this->inView())){
			HX_STACK_LINE(88)
			this->renderPhysics();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,render,(void))

::nape::phys::Material GameObject_obj::makeMaterial( ){
	HX_STACK_PUSH("GameObject::makeMaterial","GameObject.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_LINE(77)
	return ::nape::phys::Material_obj::__new(this->xml->get(HX_CSTRING("elasticity")),this->xml->get(HX_CSTRING("dynamicFriction")),this->xml->get(HX_CSTRING("staticFriction")),this->xml->get(HX_CSTRING("density")),this->xml->get(HX_CSTRING("rollingFriction")));
}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,makeMaterial,return )

Void GameObject_obj::physicsObject( ::String physic){
{
		HX_STACK_PUSH("GameObject::physicsObject","GameObject.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_ARG(physic,"physic");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameObject_obj,physicsObject,(void))

::Hash GameObject_obj::readXml( ::String url){
	HX_STACK_PUSH("GameObject::readXml","GameObject.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_ARG(url,"url");
	HX_STACK_LINE(48)
	::Hash p = ::Hash_obj::__new();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(49)
	::String xmlFile = ::nme::installer::Assets_obj::getText((::Mobile_obj::xml + url));		HX_STACK_VAR(xmlFile,"xmlFile");
	HX_STACK_LINE(50)
	::haxe::xml::Fast read = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(xmlFile));		HX_STACK_VAR(read,"read");
	HX_STACK_LINE(52)
	::haxe::xml::Fast asset = read->node->resolve(HX_CSTRING("asset"));		HX_STACK_VAR(asset,"asset");
	HX_STACK_LINE(53)
	p->set(HX_CSTRING("img"),(::Mobile_obj::asset + asset->node->resolve(HX_CSTRING("img"))->getInnerData()));
	HX_STACK_LINE(56)
	p->set(HX_CSTRING("x"),asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("x")));
	HX_STACK_LINE(57)
	p->set(HX_CSTRING("y"),asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("y")));
	HX_STACK_LINE(58)
	p->set(HX_CSTRING("rotation"),asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("rotation")));
	HX_STACK_LINE(61)
	p->set(HX_CSTRING("physics"),asset->node->resolve(HX_CSTRING("physics"))->getInnerData());
	HX_STACK_LINE(62)
	p->set(HX_CSTRING("elasticity"),asset->node->resolve(HX_CSTRING("material"))->att->resolve(HX_CSTRING("elasticity")));
	HX_STACK_LINE(63)
	p->set(HX_CSTRING("dynamicFriction"),asset->node->resolve(HX_CSTRING("material"))->att->resolve(HX_CSTRING("dynamicFriction")));
	HX_STACK_LINE(64)
	p->set(HX_CSTRING("staticFriction"),asset->node->resolve(HX_CSTRING("material"))->att->resolve(HX_CSTRING("staticFriction")));
	HX_STACK_LINE(65)
	p->set(HX_CSTRING("density"),asset->node->resolve(HX_CSTRING("material"))->att->resolve(HX_CSTRING("density")));
	HX_STACK_LINE(66)
	p->set(HX_CSTRING("rollingFriction"),asset->node->resolve(HX_CSTRING("material"))->att->resolve(HX_CSTRING("rollingFriction")));
	HX_STACK_LINE(68)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC1(GameObject_obj,readXml,return )


GameObject_obj::GameObject_obj()
{
}

void GameObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameObject);
	HX_MARK_MEMBER_NAME(xml,"xml");
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_END_CLASS();
}

void GameObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(xml,"xml");
	HX_VISIT_MEMBER_NAME(asset,"asset");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(body,"body");
}

Dynamic GameObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return xml; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
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
	case 12:
		if (HX_FIELD_EQ(inName,"makeMaterial") ) { return makeMaterial_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderPhysics") ) { return renderPhysics_dyn(); }
		if (HX_FIELD_EQ(inName,"physicsObject") ) { return physicsObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { xml=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::native::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::native::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("xml"));
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
	HX_CSTRING("xml"),
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
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameObject"), hx::TCanCast< GameObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GameObject_obj::__boot()
{
}

