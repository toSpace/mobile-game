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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif

Void DrawObject_obj::__construct(Dynamic xmlUrl)
{
HX_STACK_PUSH("DrawObject::new","DrawObject.hx",23);
{
	HX_STACK_LINE(28)
	this->mass = (int)-1;
	HX_STACK_LINE(25)
	this->drawing = false;
	HX_STACK_LINE(31)
	if ((::Std_obj::is(xmlUrl,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(31)
		super::__construct(xmlUrl);
	}
	else{
		HX_STACK_LINE(33)
		this->loadBitmap(xmlUrl,null());
	}
	HX_STACK_LINE(38)
	::Drawing_obj::addDrawObject(hx::ObjectPtr<OBJ_>(this));
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

::native::display::BitmapData DrawObject_obj::invert( ::native::display::BitmapData image){
	HX_STACK_PUSH("DrawObject::invert","DrawObject.hx",212);
	HX_STACK_THIS(this);
	HX_STACK_ARG(image,"image");
	HX_STACK_LINE(213)
	Array< int > pixels = Array_obj< int >::__new();		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = image->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(214)
		while(((_g1 < _g))){
			HX_STACK_LINE(214)
			int y = (_g1)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = image->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(215)
				while(((_g3 < _g2))){
					HX_STACK_LINE(215)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(220)
					int pixel = image->getPixel32(x,y);		HX_STACK_VAR(pixel,"pixel");
					HX_STACK_LINE(221)
					int a = hx::UShr(((int)255 - image->getPixel32(x,y)),(int)24);		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(222)
					int r = hx::UShr(pixel,(int)16);		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(223)
					int g = (int(hx::UShr(pixel,(int)8)) & int((int)255));		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(224)
					int b = (int(pixel) & int((int)255));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(226)
					int i = (int((int((int((int(((int(a) & int((int)255)))) << int((int)24))) | int((int(((int(r) & int((int)255)))) << int((int)16))))) | int((int(((int(g) & int((int)255)))) << int((int)8))))) | int((int(b) & int((int)255))));		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(232)
					pixels->push(i);
				}
			}
		}
	}
	HX_STACK_LINE(238)
	image->setVector(::native::geom::Rectangle_obj::__new((int)0,(int)0,image->get_width(),image->get_height()),pixels);
	HX_STACK_LINE(240)
	return image;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawObject_obj,invert,return )

Void DrawObject_obj::draw( ){
{
		HX_STACK_PUSH("DrawObject::draw","DrawObject.hx",205);
		HX_STACK_THIS(this);
		HX_STACK_LINE(205)
		this->drawingCanvas->get_graphics()->lineTo(::Drawing_obj::x,::Drawing_obj::y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawObject_obj,draw,(void))

Void DrawObject_obj::erase( ::native::display::Sprite erase){
{
		HX_STACK_PUSH("DrawObject::erase","DrawObject.hx",172);
		HX_STACK_THIS(this);
		HX_STACK_ARG(erase,"erase");
		HX_STACK_LINE(174)
		::Main_obj::space->zpp_inner->wrap_bodies->remove(this->body);
		HX_STACK_LINE(177)
		::native::geom::Rectangle bounds = erase->getBounds(::Main_obj::canvas);		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(178)
		::native::geom::Matrix matrix = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(182)
		matrix->tx = ((int)0 - this->asset->get_x());
		HX_STACK_LINE(183)
		matrix->ty = ((int)0 - this->asset->get_y());
		HX_STACK_LINE(186)
		::native::geom::ColorTransform color = ::native::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(187)
		color->alphaMultiplier = (int)1;
		HX_STACK_LINE(193)
		this->asset->set_blendMode(::native::display::BlendMode_obj::LAYER_dyn());
		HX_STACK_LINE(194)
		this->asset->bitmapData->draw(erase,matrix,color,::native::display::BlendMode_obj::ERASE_dyn(),null(),null());
		HX_STACK_LINE(202)
		this->updateBody();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawObject_obj,erase,(void))

Void DrawObject_obj::stopDrawing( ){
{
		HX_STACK_PUSH("DrawObject::stopDrawing","DrawObject.hx",164);
		HX_STACK_THIS(this);
		HX_STACK_LINE(165)
		this->drawing = false;
		HX_STACK_LINE(167)
		this->erase(this->drawingCanvas);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawObject_obj,stopDrawing,(void))

Void DrawObject_obj::startDrawing( ){
{
		HX_STACK_PUSH("DrawObject::startDrawing","DrawObject.hx",142);
		HX_STACK_THIS(this);
		HX_STACK_LINE(143)
		this->drawing = true;
		HX_STACK_LINE(146)
		this->drawingCanvas = ::native::display::Sprite_obj::__new();
		HX_STACK_LINE(154)
		this->drawingCanvas->get_graphics()->lineStyle(::Settings_obj::brushSize,(int)16711680,(int)1,true,null(),null(),null(),null());
		HX_STACK_LINE(158)
		this->drawingCanvas->get_graphics()->moveTo(::Drawing_obj::x,::Drawing_obj::y);
		HX_STACK_LINE(160)
		::Main_obj::canvas->addChild(this->drawingCanvas);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawObject_obj,startDrawing,(void))

Void DrawObject_obj::render( ){
{
		HX_STACK_PUSH("DrawObject::render","DrawObject.hx",113);
		HX_STACK_THIS(this);
		HX_STACK_LINE(113)
		if ((this->inView())){
			HX_STACK_LINE(118)
			this->renderPhysics();
			HX_STACK_LINE(121)
			if (((bool(::Drawing_obj::drawing) && bool(::Drawing_obj::erasing)))){
				HX_STACK_LINE(124)
				bool checkActive = ::Drawing_obj::mouseOver(this->asset);		HX_STACK_VAR(checkActive,"checkActive");
				HX_STACK_LINE(126)
				if (((bool(checkActive) && bool(!(this->drawing))))){
				}
				else{
					HX_STACK_LINE(129)
					if ((this->drawing)){
					}
				}
			}
			else{
				HX_STACK_LINE(133)
				if (((this->drawing == true))){
				}
			}
		}
	}
return null();
}


Void DrawObject_obj::updateBody( ){
{
		HX_STACK_PUSH("DrawObject::updateBody","DrawObject.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_LINE(108)
		this->convert(this->physicType,this->asset->get_x(),this->asset->get_y(),this->xml->get(HX_CSTRING("rotation")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawObject_obj,updateBody,(void))

Void DrawObject_obj::convert( ::String bodyT,Float x,Float y,Float rotation){
{
		HX_STACK_PUSH("DrawObject::convert","DrawObject.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bodyT,"bodyT");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(rotation,"rotation");
		HX_STACK_LINE(74)
		if (((this->body != null()))){
			struct _Function_2_1{
				inline static Float Block( ::DrawObject_obj *__this){
					HX_STACK_PUSH("*::closure","DrawObject.hx",74);
					{
						HX_STACK_LINE(74)
						::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(74)
						if ((_this->zpp_inner->world)){
							HX_STACK_LINE(74)
							hx::Throw (HX_CSTRING("Error: Space::world has no mass"));
						}
						HX_STACK_LINE(74)
						_this->zpp_inner->validate_mass();
						HX_STACK_LINE(74)
						if (((bool((_this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((_this->zpp_inner->shapes->head == null()))))){
							HX_STACK_LINE(74)
							hx::Throw (HX_CSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes"));
						}
						HX_STACK_LINE(74)
						return _this->zpp_inner->cmass;
					}
					return null();
				}
			};
			HX_STACK_LINE(74)
			this->mass = _Function_2_1::Block(this);
		}
		HX_STACK_LINE(77)
		::BitmapDataIso objIso = ::BitmapDataIso_obj::__new(this->asset->bitmapData,null());		HX_STACK_VAR(objIso,"objIso");
		HX_STACK_LINE(80)
		this->body = ::IsoBody_obj::run(objIso->iso_dyn(),objIso->bounds,null(),null(),null());
		struct _Function_1_1{
			inline static Dynamic Block( ::DrawObject_obj *__this){
				HX_STACK_PUSH("*::closure","DrawObject.hx",81);
				{
					HX_STACK_LINE(81)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(81)
					if (((_this->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","DrawObject.hx",81);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(81)
						_this->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(81)
					return _this->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(81)
		(_Function_1_1::Block(this))->__FieldRef(HX_CSTRING("graphic")) = this->asset;
		HX_STACK_LINE(84)
		this->setXY(x,y,true);
		HX_STACK_LINE(87)
		::String _switch_1 = (bodyT);
		if (  ( _switch_1==HX_CSTRING("static"))){
			struct _Function_2_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",89);
					{
						HX_STACK_LINE(89)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(89)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(89)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(89)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(89)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(89)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::phys::BodyType type = _Function_2_1::Block();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
				HX_STACK_LINE(89)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(89)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",89);
						{
							HX_STACK_LINE(89)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
								HX_STACK_LINE(89)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(89)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(89)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(89)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",89);
						{
							HX_STACK_LINE(89)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(89)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(89)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(89)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(89)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",89);
						{
							HX_STACK_LINE(89)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(89)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(89)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(89)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(89)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(89)
				if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(_this->zpp_inner->type) != type))){
					HX_STACK_LINE(89)
					if (((type == null()))){
						HX_STACK_LINE(89)
						hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
					}
					struct _Function_4_1{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",89);
							{
								HX_STACK_LINE(89)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
									HX_STACK_LINE(89)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(89)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(89)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(89)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",89);
							{
								HX_STACK_LINE(89)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
									HX_STACK_LINE(89)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(89)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(89)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(89)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
							}
							return null();
						}
					};
					HX_STACK_LINE(89)
					int ntype = (  (((type == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
					HX_STACK_LINE(89)
					if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_this->zpp_inner->space != null()))))){
						HX_STACK_LINE(89)
						{
							HX_STACK_LINE(89)
							_this->zpp_inner->velx = (int)0;
							HX_STACK_LINE(89)
							_this->zpp_inner->vely = (int)0;
							HX_STACK_LINE(89)
							{
							}
							HX_STACK_LINE(89)
							{
							}
						}
						HX_STACK_LINE(89)
						_this->zpp_inner->angvel = (int)0;
					}
					HX_STACK_LINE(89)
					_this->zpp_inner->invalidate_type();
					HX_STACK_LINE(89)
					if (((_this->zpp_inner->space != null()))){
						HX_STACK_LINE(89)
						_this->zpp_inner->space->transmitType(_this->zpp_inner,ntype);
					}
					else{
						HX_STACK_LINE(89)
						_this->zpp_inner->type = ntype;
					}
				}
			}
			struct _Function_2_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",89);
					{
						HX_STACK_LINE(89)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(89)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(89)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(89)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(89)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",89);
					{
						HX_STACK_LINE(89)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(89)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(89)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(89)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(89)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",89);
					{
						HX_STACK_LINE(89)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(89)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(89)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(89)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(89)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(89)
			Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(_this->zpp_inner->type);
		}
		else if (  ( _switch_1==HX_CSTRING("dynamic"))){
			struct _Function_2_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",91);
					{
						HX_STACK_LINE(91)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(91)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(91)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(91)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(91)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(91)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::phys::BodyType type = _Function_2_1::Block();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
				HX_STACK_LINE(91)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(91)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",91);
						{
							HX_STACK_LINE(91)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
								HX_STACK_LINE(91)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(91)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(91)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(91)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",91);
						{
							HX_STACK_LINE(91)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(91)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(91)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(91)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(91)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",91);
						{
							HX_STACK_LINE(91)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(91)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(91)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(91)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(91)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(91)
				if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(_this->zpp_inner->type) != type))){
					HX_STACK_LINE(91)
					if (((type == null()))){
						HX_STACK_LINE(91)
						hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
					}
					struct _Function_4_1{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",91);
							{
								HX_STACK_LINE(91)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
									HX_STACK_LINE(91)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(91)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(91)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(91)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",91);
							{
								HX_STACK_LINE(91)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
									HX_STACK_LINE(91)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(91)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(91)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(91)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
							}
							return null();
						}
					};
					HX_STACK_LINE(91)
					int ntype = (  (((type == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
					HX_STACK_LINE(91)
					if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_this->zpp_inner->space != null()))))){
						HX_STACK_LINE(91)
						{
							HX_STACK_LINE(91)
							_this->zpp_inner->velx = (int)0;
							HX_STACK_LINE(91)
							_this->zpp_inner->vely = (int)0;
							HX_STACK_LINE(91)
							{
							}
							HX_STACK_LINE(91)
							{
							}
						}
						HX_STACK_LINE(91)
						_this->zpp_inner->angvel = (int)0;
					}
					HX_STACK_LINE(91)
					_this->zpp_inner->invalidate_type();
					HX_STACK_LINE(91)
					if (((_this->zpp_inner->space != null()))){
						HX_STACK_LINE(91)
						_this->zpp_inner->space->transmitType(_this->zpp_inner,ntype);
					}
					else{
						HX_STACK_LINE(91)
						_this->zpp_inner->type = ntype;
					}
				}
			}
			struct _Function_2_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",91);
					{
						HX_STACK_LINE(91)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(91)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(91)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(91)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(91)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",91);
					{
						HX_STACK_LINE(91)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(91)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(91)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(91)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(91)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",91);
					{
						HX_STACK_LINE(91)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(91)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(91)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(91)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(91)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(91)
			Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(_this->zpp_inner->type);
		}
		else if (  ( _switch_1==HX_CSTRING("kinematic"))){
			struct _Function_2_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",93);
					{
						HX_STACK_LINE(93)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(93)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(93)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(93)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(93)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(93)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::phys::BodyType type = _Function_2_1::Block();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
				HX_STACK_LINE(93)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(93)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",93);
						{
							HX_STACK_LINE(93)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
								HX_STACK_LINE(93)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(93)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(93)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(93)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",93);
						{
							HX_STACK_LINE(93)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(93)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(93)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(93)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(93)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",93);
						{
							HX_STACK_LINE(93)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(93)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(93)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(93)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(93)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(93)
				if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(_this->zpp_inner->type) != type))){
					HX_STACK_LINE(93)
					if (((type == null()))){
						HX_STACK_LINE(93)
						hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
					}
					struct _Function_4_1{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",93);
							{
								HX_STACK_LINE(93)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
									HX_STACK_LINE(93)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(93)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(93)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(93)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",93);
							{
								HX_STACK_LINE(93)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
									HX_STACK_LINE(93)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(93)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(93)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(93)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
							}
							return null();
						}
					};
					HX_STACK_LINE(93)
					int ntype = (  (((type == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
					HX_STACK_LINE(93)
					if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_this->zpp_inner->space != null()))))){
						HX_STACK_LINE(93)
						{
							HX_STACK_LINE(93)
							_this->zpp_inner->velx = (int)0;
							HX_STACK_LINE(93)
							_this->zpp_inner->vely = (int)0;
							HX_STACK_LINE(93)
							{
							}
							HX_STACK_LINE(93)
							{
							}
						}
						HX_STACK_LINE(93)
						_this->zpp_inner->angvel = (int)0;
					}
					HX_STACK_LINE(93)
					_this->zpp_inner->invalidate_type();
					HX_STACK_LINE(93)
					if (((_this->zpp_inner->space != null()))){
						HX_STACK_LINE(93)
						_this->zpp_inner->space->transmitType(_this->zpp_inner,ntype);
					}
					else{
						HX_STACK_LINE(93)
						_this->zpp_inner->type = ntype;
					}
				}
			}
			struct _Function_2_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",93);
					{
						HX_STACK_LINE(93)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(93)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(93)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(93)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(93)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",93);
					{
						HX_STACK_LINE(93)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(93)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(93)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(93)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(93)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",93);
					{
						HX_STACK_LINE(93)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(93)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(93)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(93)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(93)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(93)
			Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(_this->zpp_inner->type);
		}
		else  {
			struct _Function_2_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",95);
					{
						HX_STACK_LINE(95)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(95)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(95)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(95)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(95)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(95)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::phys::BodyType type = _Function_2_1::Block();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
				HX_STACK_LINE(95)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(95)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",95);
						{
							HX_STACK_LINE(95)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
								HX_STACK_LINE(95)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(95)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(95)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(95)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",95);
						{
							HX_STACK_LINE(95)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(95)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(95)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(95)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(95)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","DrawObject.hx",95);
						{
							HX_STACK_LINE(95)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(95)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(95)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(95)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(95)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(95)
				if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(_this->zpp_inner->type) != type))){
					HX_STACK_LINE(95)
					if (((type == null()))){
						HX_STACK_LINE(95)
						hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
					}
					struct _Function_4_1{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",95);
							{
								HX_STACK_LINE(95)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
									HX_STACK_LINE(95)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(95)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(95)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(95)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::phys::BodyType Block( ){
							HX_STACK_PUSH("*::closure","DrawObject.hx",95);
							{
								HX_STACK_LINE(95)
								if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
									HX_STACK_LINE(95)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(95)
									::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
									HX_STACK_LINE(95)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(95)
								return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
							}
							return null();
						}
					};
					HX_STACK_LINE(95)
					int ntype = (  (((type == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
					HX_STACK_LINE(95)
					if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_this->zpp_inner->space != null()))))){
						HX_STACK_LINE(95)
						{
							HX_STACK_LINE(95)
							_this->zpp_inner->velx = (int)0;
							HX_STACK_LINE(95)
							_this->zpp_inner->vely = (int)0;
							HX_STACK_LINE(95)
							{
							}
							HX_STACK_LINE(95)
							{
							}
						}
						HX_STACK_LINE(95)
						_this->zpp_inner->angvel = (int)0;
					}
					HX_STACK_LINE(95)
					_this->zpp_inner->invalidate_type();
					HX_STACK_LINE(95)
					if (((_this->zpp_inner->space != null()))){
						HX_STACK_LINE(95)
						_this->zpp_inner->space->transmitType(_this->zpp_inner,ntype);
					}
					else{
						HX_STACK_LINE(95)
						_this->zpp_inner->type = ntype;
					}
				}
			}
			struct _Function_2_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",95);
					{
						HX_STACK_LINE(95)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(95)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(95)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(95)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(95)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",95);
					{
						HX_STACK_LINE(95)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(95)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(95)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(95)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(95)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","DrawObject.hx",95);
					{
						HX_STACK_LINE(95)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(95)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(95)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(95)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(95)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(95)
			Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(_this->zpp_inner->type);
		}
;
;
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				if (((_this->zpp_inner->compound != null()))){
					HX_STACK_LINE(99)
					hx::Throw (HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
				}
				HX_STACK_LINE(99)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(99)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(99)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				HX_STACK_LINE(99)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(99)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(99)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(99)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(99)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(99)
					if (((space != null()))){
						HX_STACK_LINE(99)
						::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(99)
						if ((_this1->zpp_inner->reverse_flag)){
							HX_STACK_LINE(99)
							_this1->push(_this);
						}
						else{
							HX_STACK_LINE(99)
							_this1->unshift(_this);
						}
					}
				}
			}
			HX_STACK_LINE(99)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(99)
				Dynamic();
			}
			else{
				HX_STACK_LINE(99)
				_this->zpp_inner->space->outer;
			}
		}
		HX_STACK_LINE(102)
		if (((this->mass >= (int)0))){
			struct _Function_2_1{
				inline static Float Block( ::DrawObject_obj *__this){
					HX_STACK_PUSH("*::closure","DrawObject.hx",103);
					{
						HX_STACK_LINE(103)
						::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(103)
						if ((_this->zpp_inner->world)){
							HX_STACK_LINE(103)
							hx::Throw (HX_CSTRING("Error: Space::world has no mass"));
						}
						HX_STACK_LINE(103)
						_this->zpp_inner->validate_mass();
						HX_STACK_LINE(103)
						if (((bool((_this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((_this->zpp_inner->shapes->head == null()))))){
							HX_STACK_LINE(103)
							hx::Throw (HX_CSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes"));
						}
						HX_STACK_LINE(103)
						return _this->zpp_inner->cmass;
					}
					return null();
				}
			};
			HX_STACK_LINE(102)
			::Main_obj::activeLevel->__Field(HX_CSTRING("addToNightmare"),true)(::Math_obj::abs((_Function_2_1::Block(this) - this->mass)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawObject_obj,convert,(void))

Void DrawObject_obj::physicsObject( ::String physic){
{
		HX_STACK_PUSH("DrawObject::physicsObject","DrawObject.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_ARG(physic,"physic");
		HX_STACK_LINE(67)
		this->physicType = physic;
		HX_STACK_LINE(68)
		this->convert(physic,this->xml->get(HX_CSTRING("x")),this->xml->get(HX_CSTRING("y")),this->xml->get(HX_CSTRING("rotation")));
	}
return null();
}


Void DrawObject_obj::loadBitmap( ::native::display::Bitmap bitmap,::String __o_physics){
::String physics = __o_physics.Default(HX_CSTRING("static"));
	HX_STACK_PUSH("DrawObject::loadBitmap","DrawObject.hx",41);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bitmap,"bitmap");
	HX_STACK_ARG(physics,"physics");
{
		HX_STACK_LINE(44)
		this->space = ::Main_obj::space;
		HX_STACK_LINE(45)
		this->canvas = ::Main_obj::canvas;
		HX_STACK_LINE(46)
		this->asset = bitmap;
		HX_STACK_LINE(49)
		this->canvas->addChild(bitmap);
		HX_STACK_LINE(50)
		::Hash p = ::Hash_obj::__new();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(51)
		p->set(HX_CSTRING("x"),bitmap->get_x());
		HX_STACK_LINE(52)
		p->set(HX_CSTRING("y"),bitmap->get_y());
		HX_STACK_LINE(53)
		p->set(HX_CSTRING("rotation"),bitmap->get_rotation());
		HX_STACK_LINE(54)
		p->set(HX_CSTRING("physics"),physics);
		HX_STACK_LINE(55)
		this->xml = p;
		HX_STACK_LINE(58)
		this->mass = (int)0;
		HX_STACK_LINE(59)
		this->physicsObject(physics);
		HX_STACK_LINE(62)
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
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(physicType,"physicType");
	HX_MARK_MEMBER_NAME(drawingCanvas,"drawingCanvas");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DrawObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mass,"mass");
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
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
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
	case 4:
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		break;
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
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("physicType"));
	outFields->push(HX_CSTRING("drawingCanvas"));
	outFields->push(HX_CSTRING("drawing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("invert"),
	HX_CSTRING("draw"),
	HX_CSTRING("erase"),
	HX_CSTRING("stopDrawing"),
	HX_CSTRING("startDrawing"),
	HX_CSTRING("render"),
	HX_CSTRING("updateBody"),
	HX_CSTRING("convert"),
	HX_CSTRING("physicsObject"),
	HX_CSTRING("loadBitmap"),
	HX_CSTRING("mass"),
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

