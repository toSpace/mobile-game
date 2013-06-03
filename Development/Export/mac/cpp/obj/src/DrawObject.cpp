#include <hxcpp.h>

#ifndef INCLUDED_BitmapDataIso
#include <BitmapDataIso.h>
#endif
#ifndef INCLUDED_Camera
#include <Camera.h>
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

Void DrawObject_obj::__construct(::String xmlUrl)
{
HX_STACK_PUSH("DrawObject::new","DrawObject.hx",20);
{
	HX_STACK_LINE(22)
	this->drawing = false;
	HX_STACK_LINE(26)
	super::__construct(xmlUrl);
}
;
	return null();
}

DrawObject_obj::~DrawObject_obj() { }

Dynamic DrawObject_obj::__CreateEmpty() { return  new DrawObject_obj; }
hx::ObjectPtr< DrawObject_obj > DrawObject_obj::__new(::String xmlUrl)
{  hx::ObjectPtr< DrawObject_obj > result = new DrawObject_obj();
	result->__construct(xmlUrl);
	return result;}

Dynamic DrawObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawObject_obj > result = new DrawObject_obj();
	result->__construct(inArgs[0]);
	return result;}

Void DrawObject_obj::draw( ){
{
		HX_STACK_PUSH("DrawObject::draw","DrawObject.hx",129);
		HX_STACK_THIS(this);
		HX_STACK_LINE(130)
		::native::geom::Point point = this->asset->globalToLocal(::native::geom::Point_obj::__new(::Drawing_obj::x,::Drawing_obj::y));		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(131)
		this->drawingCanvas->get_graphics()->lineTo(point->x,point->y);
		HX_STACK_LINE(132)
		this->drawingCanvas->set_x(this->asset->get_x());
		HX_STACK_LINE(133)
		this->drawingCanvas->set_y(this->asset->get_y());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawObject_obj,draw,(void))

Void DrawObject_obj::stopDrawing( ){
{
		HX_STACK_PUSH("DrawObject::stopDrawing","DrawObject.hx",112);
		HX_STACK_THIS(this);
		HX_STACK_LINE(113)
		this->drawing = false;
		HX_STACK_LINE(116)
		::Main_obj::space->zpp_inner->wrap_bodies->remove(this->body);
		HX_STACK_LINE(119)
		this->asset->bitmapData->draw(this->drawingCanvas,::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null()),null(),::native::display::BlendMode_obj::ERASE_dyn(),null(),null());
		HX_STACK_LINE(123)
		this->updateBody();
		HX_STACK_LINE(126)
		::Camera_obj::move((int)200,(int)200,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawObject_obj,stopDrawing,(void))

Void DrawObject_obj::startDrawing( ){
{
		HX_STACK_PUSH("DrawObject::startDrawing","DrawObject.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_LINE(92)
		this->drawing = true;
		HX_STACK_LINE(95)
		this->drawingCanvas = ::native::display::Sprite_obj::__new();
		HX_STACK_LINE(96)
		::Main_obj::canvas->addChild(this->drawingCanvas);
		HX_STACK_LINE(98)
		this->drawingCanvas->set_x(this->asset->get_x());
		HX_STACK_LINE(99)
		this->drawingCanvas->set_y(this->asset->get_y());
		HX_STACK_LINE(100)
		this->drawingCanvas->set_width(this->asset->get_width());
		HX_STACK_LINE(101)
		this->drawingCanvas->set_height(this->asset->get_height());
		HX_STACK_LINE(104)
		this->drawingCanvas->get_graphics()->lineStyle((int)30,(int)16711680,(int)1,true,null(),null(),null(),null());
		HX_STACK_LINE(107)
		::native::geom::Point point = this->asset->globalToLocal(::native::geom::Point_obj::__new(::Drawing_obj::x,::Drawing_obj::y));		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(108)
		this->drawingCanvas->get_graphics()->moveTo(point->x,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawObject_obj,startDrawing,(void))

Void DrawObject_obj::render( ){
{
		HX_STACK_PUSH("DrawObject::render","DrawObject.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_LINE(70)
		this->renderPhysics();
		HX_STACK_LINE(73)
		if (((bool(::Drawing_obj::drawing) && bool(::Drawing_obj::ereasing)))){
			HX_STACK_LINE(75)
			bool checkActive = ::Drawing_obj::mouseOver(this->asset);		HX_STACK_VAR(checkActive,"checkActive");
			HX_STACK_LINE(77)
			if (((bool(checkActive) && bool(!(this->drawing))))){
				HX_STACK_LINE(77)
				this->startDrawing();
			}
			else{
				HX_STACK_LINE(80)
				if (((bool(checkActive) && bool(this->drawing)))){
					HX_STACK_LINE(80)
					this->draw();
				}
			}
		}
		else{
			HX_STACK_LINE(84)
			if (((this->drawing == true))){
				HX_STACK_LINE(85)
				this->stopDrawing();
			}
		}
	}
return null();
}


Void DrawObject_obj::updateBody( ){
{
		HX_STACK_PUSH("DrawObject::updateBody","DrawObject.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_LINE(64)
		this->convert(this->physicType,this->asset->get_x(),this->asset->get_y(),this->xml->get(HX_CSTRING("rotation")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawObject_obj,updateBody,(void))

Void DrawObject_obj::convert( ::String bodyT,Float x,Float y,Float rotation){
{
		HX_STACK_PUSH("DrawObject::convert","DrawObject.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bodyT,"bodyT");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(rotation,"rotation");
		HX_STACK_LINE(38)
		::BitmapDataIso objIso = ::BitmapDataIso_obj::__new(this->asset->bitmapData,null());		HX_STACK_VAR(objIso,"objIso");
		HX_STACK_LINE(41)
		this->body = ::IsoBody_obj::run(objIso->iso_dyn(),objIso->bounds,null(),null(),null());
		struct _Function_1_1{
			inline static Dynamic Block( ::DrawObject_obj *__this){
				HX_STACK_PUSH("*::closure","DrawObject.hx",42);
				{
					HX_STACK_LINE(42)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(42)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","DrawObject.hx",42);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(42)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(42)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(42)
		(_Function_1_1::Block(this))->__FieldRef(HX_CSTRING("graphic")) = this->asset;
		HX_STACK_LINE(45)
		this->setXY(x,y,true);
		HX_STACK_LINE(48)
		::String _switch_1 = (bodyT);
		if (  ( _switch_1==HX_CSTRING("static"))){
			struct _Function_2_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",50);
					{
						HX_STACK_LINE(50)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(50)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(50)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::phys::BodyType type = _Function_2_1::Block();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
				HX_STACK_LINE(50)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(50)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",50);
						{
							HX_STACK_LINE(50)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
								HX_STACK_LINE(50)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(50)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(50)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(50)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",50);
						{
							HX_STACK_LINE(50)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(50)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(50)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(50)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(50)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",50);
						{
							HX_STACK_LINE(50)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(50)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(50)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(50)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(50)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(50)
				if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(_this->zpp_inner->type) != type))){
					HX_STACK_LINE(50)
					if (((type == null()))){
						HX_STACK_LINE(50)
						hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
					}
					struct _Function_4_1{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",50);
							{
								HX_STACK_LINE(50)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
									HX_STACK_LINE(50)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(50)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(50)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(50)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",50);
							{
								HX_STACK_LINE(50)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
									HX_STACK_LINE(50)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(50)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(50)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(50)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
							}
							return null();
						}
					};
					HX_STACK_LINE(50)
					int ntype = (  (((type == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
					HX_STACK_LINE(50)
					if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_this->zpp_inner->space != null()))))){
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(50)
							_this->zpp_inner->velx = (int)0;
							HX_STACK_LINE(50)
							_this->zpp_inner->vely = (int)0;
							HX_STACK_LINE(50)
							{
							}
							HX_STACK_LINE(50)
							{
							}
						}
						HX_STACK_LINE(50)
						_this->zpp_inner->angvel = (int)0;
					}
					HX_STACK_LINE(50)
					_this->zpp_inner->invalidate_type();
					HX_STACK_LINE(50)
					if (((_this->zpp_inner->space != null()))){
						HX_STACK_LINE(50)
						_this->zpp_inner->space->transmitType(_this->zpp_inner,ntype);
					}
					else{
						HX_STACK_LINE(50)
						_this->zpp_inner->type = ntype;
					}
				}
			}
			struct _Function_2_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",50);
					{
						HX_STACK_LINE(50)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(50)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",50);
					{
						HX_STACK_LINE(50)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(50)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",50);
					{
						HX_STACK_LINE(50)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(50)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(50)
			Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(_this->zpp_inner->type);
		}
		else if (  ( _switch_1==HX_CSTRING("dynamic"))){
			struct _Function_2_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",52);
					{
						HX_STACK_LINE(52)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(52)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(52)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(52)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(52)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(52)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::phys::BodyType type = _Function_2_1::Block();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
				HX_STACK_LINE(52)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(52)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",52);
						{
							HX_STACK_LINE(52)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
								HX_STACK_LINE(52)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(52)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(52)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(52)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",52);
						{
							HX_STACK_LINE(52)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(52)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(52)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(52)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(52)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",52);
						{
							HX_STACK_LINE(52)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(52)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(52)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(52)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(52)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(52)
				if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(_this->zpp_inner->type) != type))){
					HX_STACK_LINE(52)
					if (((type == null()))){
						HX_STACK_LINE(52)
						hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
					}
					struct _Function_4_1{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",52);
							{
								HX_STACK_LINE(52)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
									HX_STACK_LINE(52)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(52)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(52)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(52)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",52);
							{
								HX_STACK_LINE(52)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
									HX_STACK_LINE(52)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(52)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(52)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(52)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
							}
							return null();
						}
					};
					HX_STACK_LINE(52)
					int ntype = (  (((type == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
					HX_STACK_LINE(52)
					if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_this->zpp_inner->space != null()))))){
						HX_STACK_LINE(52)
						{
							HX_STACK_LINE(52)
							_this->zpp_inner->velx = (int)0;
							HX_STACK_LINE(52)
							_this->zpp_inner->vely = (int)0;
							HX_STACK_LINE(52)
							{
							}
							HX_STACK_LINE(52)
							{
							}
						}
						HX_STACK_LINE(52)
						_this->zpp_inner->angvel = (int)0;
					}
					HX_STACK_LINE(52)
					_this->zpp_inner->invalidate_type();
					HX_STACK_LINE(52)
					if (((_this->zpp_inner->space != null()))){
						HX_STACK_LINE(52)
						_this->zpp_inner->space->transmitType(_this->zpp_inner,ntype);
					}
					else{
						HX_STACK_LINE(52)
						_this->zpp_inner->type = ntype;
					}
				}
			}
			struct _Function_2_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",52);
					{
						HX_STACK_LINE(52)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(52)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(52)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(52)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(52)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",52);
					{
						HX_STACK_LINE(52)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(52)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(52)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(52)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(52)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",52);
					{
						HX_STACK_LINE(52)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(52)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(52)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(52)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(52)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(52)
			Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(_this->zpp_inner->type);
		}
		else if (  ( _switch_1==HX_CSTRING("KINEMATIC"))){
			struct _Function_2_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",54);
					{
						HX_STACK_LINE(54)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(54)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(54)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(54)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(54)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(54)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::phys::BodyType type = _Function_2_1::Block();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
				HX_STACK_LINE(54)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(54)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",54);
						{
							HX_STACK_LINE(54)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
								HX_STACK_LINE(54)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(54)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(54)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(54)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",54);
						{
							HX_STACK_LINE(54)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(54)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(54)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(54)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(54)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",54);
						{
							HX_STACK_LINE(54)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(54)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(54)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(54)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(54)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(54)
				if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(_this->zpp_inner->type) != type))){
					HX_STACK_LINE(54)
					if (((type == null()))){
						HX_STACK_LINE(54)
						hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
					}
					struct _Function_4_1{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",54);
							{
								HX_STACK_LINE(54)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
									HX_STACK_LINE(54)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(54)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(54)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(54)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",54);
							{
								HX_STACK_LINE(54)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
									HX_STACK_LINE(54)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(54)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(54)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(54)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
							}
							return null();
						}
					};
					HX_STACK_LINE(54)
					int ntype = (  (((type == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
					HX_STACK_LINE(54)
					if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_this->zpp_inner->space != null()))))){
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							_this->zpp_inner->velx = (int)0;
							HX_STACK_LINE(54)
							_this->zpp_inner->vely = (int)0;
							HX_STACK_LINE(54)
							{
							}
							HX_STACK_LINE(54)
							{
							}
						}
						HX_STACK_LINE(54)
						_this->zpp_inner->angvel = (int)0;
					}
					HX_STACK_LINE(54)
					_this->zpp_inner->invalidate_type();
					HX_STACK_LINE(54)
					if (((_this->zpp_inner->space != null()))){
						HX_STACK_LINE(54)
						_this->zpp_inner->space->transmitType(_this->zpp_inner,ntype);
					}
					else{
						HX_STACK_LINE(54)
						_this->zpp_inner->type = ntype;
					}
				}
			}
			struct _Function_2_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",54);
					{
						HX_STACK_LINE(54)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(54)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(54)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(54)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(54)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",54);
					{
						HX_STACK_LINE(54)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(54)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(54)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(54)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(54)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",54);
					{
						HX_STACK_LINE(54)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(54)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(54)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(54)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(54)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(54)
			Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(_this->zpp_inner->type);
		}
		else  {
			struct _Function_2_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",56);
					{
						HX_STACK_LINE(56)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(56)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(56)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(56)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(56)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(56)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::phys::BodyType type = _Function_2_1::Block();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
				HX_STACK_LINE(56)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(56)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",56);
						{
							HX_STACK_LINE(56)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
								HX_STACK_LINE(56)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(56)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(56)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(56)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",56);
						{
							HX_STACK_LINE(56)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(56)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(56)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(56)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(56)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",56);
						{
							HX_STACK_LINE(56)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(56)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(56)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(56)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(56)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(56)
				if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(_this->zpp_inner->type) != type))){
					HX_STACK_LINE(56)
					if (((type == null()))){
						HX_STACK_LINE(56)
						hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
					}
					struct _Function_4_1{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",56);
							{
								HX_STACK_LINE(56)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
									HX_STACK_LINE(56)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(56)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(56)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(56)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",56);
							{
								HX_STACK_LINE(56)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
									HX_STACK_LINE(56)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(56)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(56)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(56)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
							}
							return null();
						}
					};
					HX_STACK_LINE(56)
					int ntype = (  (((type == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
					HX_STACK_LINE(56)
					if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_this->zpp_inner->space != null()))))){
						HX_STACK_LINE(56)
						{
							HX_STACK_LINE(56)
							_this->zpp_inner->velx = (int)0;
							HX_STACK_LINE(56)
							_this->zpp_inner->vely = (int)0;
							HX_STACK_LINE(56)
							{
							}
							HX_STACK_LINE(56)
							{
							}
						}
						HX_STACK_LINE(56)
						_this->zpp_inner->angvel = (int)0;
					}
					HX_STACK_LINE(56)
					_this->zpp_inner->invalidate_type();
					HX_STACK_LINE(56)
					if (((_this->zpp_inner->space != null()))){
						HX_STACK_LINE(56)
						_this->zpp_inner->space->transmitType(_this->zpp_inner,ntype);
					}
					else{
						HX_STACK_LINE(56)
						_this->zpp_inner->type = ntype;
					}
				}
			}
			struct _Function_2_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",56);
					{
						HX_STACK_LINE(56)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(56)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(56)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(56)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(56)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",56);
					{
						HX_STACK_LINE(56)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(56)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(56)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(56)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(56)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",56);
					{
						HX_STACK_LINE(56)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(56)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(56)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(56)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(56)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(56)
			Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(_this->zpp_inner->type);
		}
;
;
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				if (((_this->zpp_inner->compound != null()))){
					HX_STACK_LINE(60)
					hx::Throw (HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
				}
				HX_STACK_LINE(60)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(60)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(60)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				HX_STACK_LINE(60)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(60)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(60)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(60)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(60)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(60)
					if (((space != null()))){
						HX_STACK_LINE(60)
						::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(60)
						if ((_this1->zpp_inner->reverse_flag)){
							HX_STACK_LINE(60)
							_this1->push(_this);
						}
						else{
							HX_STACK_LINE(60)
							_this1->unshift(_this);
						}
					}
				}
			}
			HX_STACK_LINE(60)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(60)
				Dynamic();
			}
			else{
				HX_STACK_LINE(60)
				_this->zpp_inner->space->outer;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawObject_obj,convert,(void))

Void DrawObject_obj::physicsObject( ::String physic){
{
		HX_STACK_PUSH("DrawObject::physicsObject","DrawObject.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_ARG(physic,"physic");
		HX_STACK_LINE(31)
		this->physicType = physic;
		HX_STACK_LINE(32)
		this->convert(physic,this->xml->get(HX_CSTRING("x")),this->xml->get(HX_CSTRING("y")),this->xml->get(HX_CSTRING("rotation")));
	}
return null();
}



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

