#include <hxcpp.h>

#ifndef INCLUDED_BitmapDataIso
#include <BitmapDataIso.h>
#endif
#ifndef INCLUDED_DrawObject
#include <DrawObject.h>
#endif
#ifndef INCLUDED_Drawing
#include <Drawing.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_IsoBody
#include <IsoBody.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
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
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_BlendMode
#include <native/display/BlendMode.h>
#endif
#ifndef INCLUDED_native_display_CapsStyle
#include <native/display/CapsStyle.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_JointStyle
#include <native/display/JointStyle.h>
#endif
#ifndef INCLUDED_native_display_LineScaleMode
#include <native/display/LineScaleMode.h>
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
#ifndef INCLUDED_native_geom_ColorTransform
#include <native/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
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

Void DrawObject_obj::__construct(Dynamic xmlUrl)
{
HX_STACK_PUSH("DrawObject::new","DrawObject.hx",20);
{
	HX_STACK_LINE(22)
	this->drawing = false;
	HX_STACK_LINE(26)
	if ((::Std_obj::is(xmlUrl,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(27)
		super::__construct(xmlUrl);
	}
	else{
		HX_STACK_LINE(29)
		this->loadBitmap(xmlUrl,null());
	}
}
;
	return null();
}

DrawObject_obj::~DrawObject_obj() { }

Dynamic DrawObject_obj::__CreateEmpty() { return  new DrawObject_obj; }
hx::ObjectPtr< DrawObject_obj > DrawObject_obj::__new(Dynamic xmlUrl)
{  hx::ObjectPtr< DrawObject_obj > result = new DrawObject_obj();
	result->__construct(xmlUrl);
	return result;}

Dynamic DrawObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawObject_obj > result = new DrawObject_obj();
	result->__construct(inArgs[0]);
	return result;}

Void DrawObject_obj::draw( ){
{
		HX_STACK_PUSH("DrawObject::draw","DrawObject.hx",161);
		HX_STACK_THIS(this);
		HX_STACK_LINE(162)
		::native::geom::Point point = this->asset->globalToLocal(::native::geom::Point_obj::__new(::Drawing_obj::x,::Drawing_obj::y));		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(163)
		this->drawingCanvas->get_graphics()->lineTo(point->x,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawObject_obj,draw,(void))

Void DrawObject_obj::stopDrawing( ){
{
		HX_STACK_PUSH("DrawObject::stopDrawing","DrawObject.hx",146);
		HX_STACK_THIS(this);
		HX_STACK_LINE(147)
		this->drawing = false;
		HX_STACK_LINE(150)
		::Main_obj::space->zpp_inner->wrap_bodies->remove(this->body);
		HX_STACK_LINE(153)
		this->asset->bitmapData->draw(this->drawingCanvas,::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null()),null(),::native::display::BlendMode_obj::ERASE_dyn(),null(),null());
		HX_STACK_LINE(157)
		this->updateBody();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawObject_obj,stopDrawing,(void))

Void DrawObject_obj::startDrawing( ){
{
		HX_STACK_PUSH("DrawObject::startDrawing","DrawObject.hx",125);
		HX_STACK_THIS(this);
		HX_STACK_LINE(126)
		this->drawing = true;
		HX_STACK_LINE(129)
		this->drawingCanvas = ::native::display::Sprite_obj::__new();
		HX_STACK_LINE(133)
		this->drawingCanvas->set_width(this->asset->get_width());
		HX_STACK_LINE(134)
		this->drawingCanvas->set_height(this->asset->get_height());
		HX_STACK_LINE(137)
		this->drawingCanvas->get_graphics()->lineStyle(::Settings_obj::brushSize,(int)16711680,(int)1,true,null(),null(),null(),null());
		HX_STACK_LINE(140)
		::native::geom::Point point = this->asset->globalToLocal(::native::geom::Point_obj::__new(::Drawing_obj::x,::Drawing_obj::y));		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(141)
		this->drawingCanvas->get_graphics()->moveTo(point->x,point->y);
		HX_STACK_LINE(143)
		::Main_obj::canvas->addChild(this->drawingCanvas);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawObject_obj,startDrawing,(void))

Void DrawObject_obj::render( ){
{
		HX_STACK_PUSH("DrawObject::render","DrawObject.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_LINE(97)
		if ((this->inView())){
			HX_STACK_LINE(102)
			this->renderPhysics();
			HX_STACK_LINE(105)
			if (((bool(::Drawing_obj::drawing) && bool(::Drawing_obj::erasing)))){
				HX_STACK_LINE(107)
				bool checkActive = ::Drawing_obj::mouseOver(this->asset);		HX_STACK_VAR(checkActive,"checkActive");
				HX_STACK_LINE(109)
				if (((bool(checkActive) && bool(!(this->drawing))))){
					HX_STACK_LINE(109)
					this->startDrawing();
				}
				else{
					HX_STACK_LINE(112)
					if (((bool(checkActive) && bool(this->drawing)))){
						HX_STACK_LINE(112)
						this->draw();
					}
				}
			}
			else{
				HX_STACK_LINE(116)
				if (((this->drawing == true))){
					HX_STACK_LINE(117)
					this->stopDrawing();
				}
			}
		}
	}
return null();
}


Void DrawObject_obj::updateBody( ){
{
		HX_STACK_PUSH("DrawObject::updateBody","DrawObject.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_LINE(92)
		this->convert(this->physicType,this->asset->get_x(),this->asset->get_y(),this->xml->get(HX_CSTRING("rotation")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawObject_obj,updateBody,(void))

Void DrawObject_obj::convert( ::String bodyT,Float x,Float y,Float rotation){
{
		HX_STACK_PUSH("DrawObject::convert","DrawObject.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bodyT,"bodyT");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(rotation,"rotation");
		HX_STACK_LINE(66)
		::BitmapDataIso objIso = ::BitmapDataIso_obj::__new(this->asset->bitmapData,null());		HX_STACK_VAR(objIso,"objIso");
		HX_STACK_LINE(69)
		this->body = ::IsoBody_obj::run(objIso->iso_dyn(),objIso->bounds,null(),null(),null());
		struct _Function_1_1{
			inline static Dynamic Block( ::DrawObject_obj *__this){
				HX_STACK_PUSH("*::closure","DrawObject.hx",70);
				{
					HX_STACK_LINE(70)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(70)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","DrawObject.hx",70);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(70)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(70)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(70)
		(_Function_1_1::Block(this))->__FieldRef(HX_CSTRING("graphic")) = this->asset;
		HX_STACK_LINE(73)
		this->setXY(x,y,true);
		HX_STACK_LINE(76)
		::String _switch_1 = (bodyT);
		if (  ( _switch_1==HX_CSTRING("static"))){
			struct _Function_2_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",78);
					{
						HX_STACK_LINE(78)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(78)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(78)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::phys::BodyType type = _Function_2_1::Block();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
				HX_STACK_LINE(78)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(78)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",78);
						{
							HX_STACK_LINE(78)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
								HX_STACK_LINE(78)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(78)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(78)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(78)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",78);
						{
							HX_STACK_LINE(78)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(78)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(78)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(78)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(78)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",78);
						{
							HX_STACK_LINE(78)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(78)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(78)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(78)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(78)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(78)
				if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(_this->zpp_inner->type) != type))){
					HX_STACK_LINE(78)
					if (((type == null()))){
						HX_STACK_LINE(78)
						hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
					}
					struct _Function_4_1{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",78);
							{
								HX_STACK_LINE(78)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
									HX_STACK_LINE(78)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(78)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(78)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(78)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",78);
							{
								HX_STACK_LINE(78)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
									HX_STACK_LINE(78)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(78)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(78)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(78)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
							}
							return null();
						}
					};
					HX_STACK_LINE(78)
					int ntype = (  (((type == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
					HX_STACK_LINE(78)
					if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_this->zpp_inner->space != null()))))){
						HX_STACK_LINE(78)
						{
							HX_STACK_LINE(78)
							_this->zpp_inner->velx = (int)0;
							HX_STACK_LINE(78)
							_this->zpp_inner->vely = (int)0;
							HX_STACK_LINE(78)
							{
							}
							HX_STACK_LINE(78)
							{
							}
						}
						HX_STACK_LINE(78)
						_this->zpp_inner->angvel = (int)0;
					}
					HX_STACK_LINE(78)
					_this->zpp_inner->invalidate_type();
					HX_STACK_LINE(78)
					if (((_this->zpp_inner->space != null()))){
						HX_STACK_LINE(78)
						_this->zpp_inner->space->transmitType(_this->zpp_inner,ntype);
					}
					else{
						HX_STACK_LINE(78)
						_this->zpp_inner->type = ntype;
					}
				}
			}
			struct _Function_2_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",78);
					{
						HX_STACK_LINE(78)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(78)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",78);
					{
						HX_STACK_LINE(78)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(78)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",78);
					{
						HX_STACK_LINE(78)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(78)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(78)
			Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(_this->zpp_inner->type);
		}
		else if (  ( _switch_1==HX_CSTRING("dynamic"))){
			struct _Function_2_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",80);
					{
						HX_STACK_LINE(80)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(80)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(80)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(80)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(80)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(80)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::phys::BodyType type = _Function_2_1::Block();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
				HX_STACK_LINE(80)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(80)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",80);
						{
							HX_STACK_LINE(80)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
								HX_STACK_LINE(80)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(80)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(80)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(80)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",80);
						{
							HX_STACK_LINE(80)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(80)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(80)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(80)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(80)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",80);
						{
							HX_STACK_LINE(80)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(80)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(80)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(80)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(80)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(80)
				if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(_this->zpp_inner->type) != type))){
					HX_STACK_LINE(80)
					if (((type == null()))){
						HX_STACK_LINE(80)
						hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
					}
					struct _Function_4_1{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",80);
							{
								HX_STACK_LINE(80)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
									HX_STACK_LINE(80)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(80)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(80)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(80)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",80);
							{
								HX_STACK_LINE(80)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
									HX_STACK_LINE(80)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(80)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(80)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(80)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
							}
							return null();
						}
					};
					HX_STACK_LINE(80)
					int ntype = (  (((type == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
					HX_STACK_LINE(80)
					if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_this->zpp_inner->space != null()))))){
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(80)
							_this->zpp_inner->velx = (int)0;
							HX_STACK_LINE(80)
							_this->zpp_inner->vely = (int)0;
							HX_STACK_LINE(80)
							{
							}
							HX_STACK_LINE(80)
							{
							}
						}
						HX_STACK_LINE(80)
						_this->zpp_inner->angvel = (int)0;
					}
					HX_STACK_LINE(80)
					_this->zpp_inner->invalidate_type();
					HX_STACK_LINE(80)
					if (((_this->zpp_inner->space != null()))){
						HX_STACK_LINE(80)
						_this->zpp_inner->space->transmitType(_this->zpp_inner,ntype);
					}
					else{
						HX_STACK_LINE(80)
						_this->zpp_inner->type = ntype;
					}
				}
			}
			struct _Function_2_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",80);
					{
						HX_STACK_LINE(80)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(80)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(80)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(80)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(80)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",80);
					{
						HX_STACK_LINE(80)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(80)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(80)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(80)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(80)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",80);
					{
						HX_STACK_LINE(80)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(80)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(80)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(80)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(80)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(80)
			Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(_this->zpp_inner->type);
		}
		else if (  ( _switch_1==HX_CSTRING("kinematic"))){
			struct _Function_2_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",82);
					{
						HX_STACK_LINE(82)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(82)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(82)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(82)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(82)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(82)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::phys::BodyType type = _Function_2_1::Block();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
				HX_STACK_LINE(82)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(82)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",82);
						{
							HX_STACK_LINE(82)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
								HX_STACK_LINE(82)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(82)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(82)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(82)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",82);
						{
							HX_STACK_LINE(82)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(82)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(82)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(82)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(82)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",82);
						{
							HX_STACK_LINE(82)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(82)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(82)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(82)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(82)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(82)
				if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(_this->zpp_inner->type) != type))){
					HX_STACK_LINE(82)
					if (((type == null()))){
						HX_STACK_LINE(82)
						hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
					}
					struct _Function_4_1{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",82);
							{
								HX_STACK_LINE(82)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
									HX_STACK_LINE(82)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(82)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(82)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(82)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",82);
							{
								HX_STACK_LINE(82)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
									HX_STACK_LINE(82)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(82)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(82)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(82)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
							}
							return null();
						}
					};
					HX_STACK_LINE(82)
					int ntype = (  (((type == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
					HX_STACK_LINE(82)
					if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_this->zpp_inner->space != null()))))){
						HX_STACK_LINE(82)
						{
							HX_STACK_LINE(82)
							_this->zpp_inner->velx = (int)0;
							HX_STACK_LINE(82)
							_this->zpp_inner->vely = (int)0;
							HX_STACK_LINE(82)
							{
							}
							HX_STACK_LINE(82)
							{
							}
						}
						HX_STACK_LINE(82)
						_this->zpp_inner->angvel = (int)0;
					}
					HX_STACK_LINE(82)
					_this->zpp_inner->invalidate_type();
					HX_STACK_LINE(82)
					if (((_this->zpp_inner->space != null()))){
						HX_STACK_LINE(82)
						_this->zpp_inner->space->transmitType(_this->zpp_inner,ntype);
					}
					else{
						HX_STACK_LINE(82)
						_this->zpp_inner->type = ntype;
					}
				}
			}
			struct _Function_2_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",82);
					{
						HX_STACK_LINE(82)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(82)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(82)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(82)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(82)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",82);
					{
						HX_STACK_LINE(82)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(82)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(82)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(82)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(82)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",82);
					{
						HX_STACK_LINE(82)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(82)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(82)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(82)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(82)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(82)
			Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(_this->zpp_inner->type);
		}
		else  {
			struct _Function_2_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",84);
					{
						HX_STACK_LINE(84)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(84)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(84)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(84)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(84)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(84)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::phys::BodyType type = _Function_2_1::Block();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
				HX_STACK_LINE(84)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(84)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",84);
						{
							HX_STACK_LINE(84)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
								HX_STACK_LINE(84)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(84)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(84)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(84)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",84);
						{
							HX_STACK_LINE(84)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(84)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(84)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(84)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(84)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",84);
						{
							HX_STACK_LINE(84)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(84)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(84)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(84)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(84)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(84)
				if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(_this->zpp_inner->type) != type))){
					HX_STACK_LINE(84)
					if (((type == null()))){
						HX_STACK_LINE(84)
						hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
					}
					struct _Function_4_1{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",84);
							{
								HX_STACK_LINE(84)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
									HX_STACK_LINE(84)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(84)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(84)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(84)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",84);
							{
								HX_STACK_LINE(84)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
									HX_STACK_LINE(84)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(84)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(84)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(84)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
							}
							return null();
						}
					};
					HX_STACK_LINE(84)
					int ntype = (  (((type == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
					HX_STACK_LINE(84)
					if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_this->zpp_inner->space != null()))))){
						HX_STACK_LINE(84)
						{
							HX_STACK_LINE(84)
							_this->zpp_inner->velx = (int)0;
							HX_STACK_LINE(84)
							_this->zpp_inner->vely = (int)0;
							HX_STACK_LINE(84)
							{
							}
							HX_STACK_LINE(84)
							{
							}
						}
						HX_STACK_LINE(84)
						_this->zpp_inner->angvel = (int)0;
					}
					HX_STACK_LINE(84)
					_this->zpp_inner->invalidate_type();
					HX_STACK_LINE(84)
					if (((_this->zpp_inner->space != null()))){
						HX_STACK_LINE(84)
						_this->zpp_inner->space->transmitType(_this->zpp_inner,ntype);
					}
					else{
						HX_STACK_LINE(84)
						_this->zpp_inner->type = ntype;
					}
				}
			}
			struct _Function_2_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",84);
					{
						HX_STACK_LINE(84)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(84)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(84)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(84)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(84)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",84);
					{
						HX_STACK_LINE(84)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(84)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(84)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(84)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(84)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",84);
					{
						HX_STACK_LINE(84)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(84)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(84)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(84)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(84)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(84)
			Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(_this->zpp_inner->type);
		}
;
;
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				if (((_this->zpp_inner->compound != null()))){
					HX_STACK_LINE(88)
					hx::Throw (HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
				}
				HX_STACK_LINE(88)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(88)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(88)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				HX_STACK_LINE(88)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(88)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(88)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(88)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(88)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(88)
					if (((space != null()))){
						HX_STACK_LINE(88)
						::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(88)
						if ((_this1->zpp_inner->reverse_flag)){
							HX_STACK_LINE(88)
							_this1->push(_this);
						}
						else{
							HX_STACK_LINE(88)
							_this1->unshift(_this);
						}
					}
				}
			}
			HX_STACK_LINE(88)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(88)
				Dynamic();
			}
			else{
				HX_STACK_LINE(88)
				_this->zpp_inner->space->outer;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawObject_obj,convert,(void))

Void DrawObject_obj::physicsObject( ::String physic){
{
		HX_STACK_PUSH("DrawObject::physicsObject","DrawObject.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_ARG(physic,"physic");
		HX_STACK_LINE(59)
		this->physicType = physic;
		HX_STACK_LINE(60)
		this->convert(physic,this->xml->get(HX_CSTRING("x")),this->xml->get(HX_CSTRING("y")),this->xml->get(HX_CSTRING("rotation")));
	}
return null();
}


Void DrawObject_obj::loadBitmap( ::native::display::Bitmap bitmap,::String __o_physics){
::String physics = __o_physics.Default(HX_CSTRING("static"));
	HX_STACK_PUSH("DrawObject::loadBitmap","DrawObject.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bitmap,"bitmap");
	HX_STACK_ARG(physics,"physics");
{
		HX_STACK_LINE(37)
		this->space = ::Main_obj::space;
		HX_STACK_LINE(38)
		this->canvas = ::Main_obj::canvas;
		HX_STACK_LINE(39)
		this->asset = bitmap;
		HX_STACK_LINE(42)
		this->canvas->addChild(bitmap);
		HX_STACK_LINE(43)
		::Hash p = ::Hash_obj::__new();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(44)
		p->set(HX_CSTRING("x"),bitmap->get_x());
		HX_STACK_LINE(45)
		p->set(HX_CSTRING("y"),bitmap->get_y());
		HX_STACK_LINE(46)
		p->set(HX_CSTRING("rotation"),bitmap->get_rotation());
		HX_STACK_LINE(47)
		p->set(HX_CSTRING("physics"),physics);
		HX_STACK_LINE(48)
		this->xml = p;
		HX_STACK_LINE(51)
		this->physicsObject(physics);
		HX_STACK_LINE(54)
		::RenderManager_obj::add(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawObject_obj,loadBitmap,(void))


DrawObject_obj::DrawObject_obj()
{
}

void DrawObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawObject);
	HX_MARK_MEMBER_NAME(physicType,"physicType");
	HX_MARK_MEMBER_NAME(drawingCanvas,"drawingCanvas");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DrawObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(physicType,"physicType");
	HX_VISIT_MEMBER_NAME(drawingCanvas,"drawingCanvas");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DrawObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"convert") ) { return convert_dyn(); }
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateBody") ) { return updateBody_dyn(); }
		if (HX_FIELD_EQ(inName,"loadBitmap") ) { return loadBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"physicType") ) { return physicType; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stopDrawing") ) { return stopDrawing_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"startDrawing") ) { return startDrawing_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"physicsObject") ) { return physicsObject_dyn(); }
		if (HX_FIELD_EQ(inName,"drawingCanvas") ) { return drawingCanvas; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"physicType") ) { physicType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawingCanvas") ) { drawingCanvas=inValue.Cast< ::native::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("physicType"));
	outFields->push(HX_CSTRING("drawingCanvas"));
	outFields->push(HX_CSTRING("drawing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("stopDrawing"),
	HX_CSTRING("startDrawing"),
	HX_CSTRING("render"),
	HX_CSTRING("updateBody"),
	HX_CSTRING("convert"),
	HX_CSTRING("physicsObject"),
	HX_CSTRING("loadBitmap"),
	HX_CSTRING("physicType"),
	HX_CSTRING("drawingCanvas"),
	HX_CSTRING("drawing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawObject_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawObject_obj::__mClass,"__mClass");
};

Class DrawObject_obj::__mClass;

void DrawObject_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("DrawObject"), hx::TCanCast< DrawObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DrawObject_obj::__boot()
{
}

