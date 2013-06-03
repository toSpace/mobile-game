#include <hxcpp.h>

#ifndef INCLUDED_Drawing
#include <Drawing.h>
#endif
#ifndef INCLUDED_Level
#include <Level.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_RenderManager
#include <RenderManager.h>
#endif
#ifndef INCLUDED_Retina
#include <Retina.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
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
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_display_StageAlign
#include <native/display/StageAlign.h>
#endif
#ifndef INCLUDED_native_display_StageScaleMode
#include <native/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_text_TextField
#include <native/text/TextField.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_display_FPS
#include <nme/display/FPS.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_PUSH("Main::new","Main.hx",34);
{
	HX_STACK_LINE(36)
	::native::display::Stage stage = ::nme::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(stage,"stage");
	HX_STACK_LINE(37)
	stage->set_scaleMode(::native::display::StageScaleMode_obj::NO_SCALE_dyn());
	HX_STACK_LINE(38)
	stage->set_align(::native::display::StageAlign_obj::TOP_LEFT_dyn());
	HX_STACK_LINE(41)
	this->startPhysics(stage);
	HX_STACK_LINE(44)
	::Main_obj::canvas = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(45)
	::nme::Lib_obj::get_current()->addChild(::Main_obj::canvas);
	HX_STACK_LINE(53)
	::Retina_obj::setSizes();
	HX_STACK_LINE(54)
	::Drawing_obj::init();
	HX_STACK_LINE(57)
	stage->addEventListener(::native::events::Event_obj::ENTER_FRAME,this->enterFrameHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(60)
	::Level_obj::load(HX_CSTRING("World1Level1"));
	HX_STACK_LINE(63)
	stage->addChild(::nme::display::FPS_obj::__new((int)0,(int)0,null()));
}
;
	return null();
}

Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::enterFrameHandler( ::native::events::Event ev){
{
		HX_STACK_PUSH("Main::enterFrameHandler","Main.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ev,"ev");
		HX_STACK_LINE(77)
		::RenderManager_obj::render();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,enterFrameHandler,(void))

Void Main_obj::startPhysics( ::native::display::Stage stage){
{
		HX_STACK_PUSH("Main::startPhysics","Main.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage,"stage");
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ){
				HX_STACK_PUSH("*::closure","Main.hx",68);
				{
					HX_STACK_LINE(68)
					{
					}
					HX_STACK_LINE(68)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(68)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(68)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(68)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(68)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(68)
						ret->zpp_pool = null();
						HX_STACK_LINE(68)
						ret->zpp_disp = false;
						HX_STACK_LINE(68)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(68)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(68)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( ){
								HX_STACK_PUSH("*::closure","Main.hx",68);
								{
									HX_STACK_LINE(68)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(68)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(68)
									{
										HX_STACK_LINE(68)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(68)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(68)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(68)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(68)
											ret1->next = null();
										}
										HX_STACK_LINE(68)
										ret1->weak = false;
									}
									HX_STACK_LINE(68)
									ret1->_immutable = immutable;
									HX_STACK_LINE(68)
									{
										HX_STACK_LINE(68)
										ret1->x = (int)0;
										HX_STACK_LINE(68)
										ret1->y = (int)600;
										HX_STACK_LINE(68)
										{
										}
										HX_STACK_LINE(68)
										{
										}
									}
									HX_STACK_LINE(68)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(68)
						ret->zpp_inner = _Function_3_1::Block();
						HX_STACK_LINE(68)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(68)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(68)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(68)
							if ((_this->_immutable)){
								HX_STACK_LINE(68)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(68)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(68)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(68)
						{
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","Main.hx",68);
								{
									HX_STACK_LINE(68)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(68)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(68)
									{
										HX_STACK_LINE(68)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(68)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(68)
											_this->_validate();
										}
									}
									HX_STACK_LINE(68)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","Main.hx",68);
								{
									HX_STACK_LINE(68)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(68)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(68)
									{
										HX_STACK_LINE(68)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(68)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(68)
											_this->_validate();
										}
									}
									HX_STACK_LINE(68)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(68)
						if ((!(((bool((_Function_3_1::Block(ret) == (int)0)) && bool((_Function_3_2::Block(ret) == (int)600))))))){
							HX_STACK_LINE(68)
							{
								HX_STACK_LINE(68)
								ret->zpp_inner->x = (int)0;
								HX_STACK_LINE(68)
								ret->zpp_inner->y = (int)600;
								HX_STACK_LINE(68)
								{
								}
								HX_STACK_LINE(68)
								{
								}
							}
							HX_STACK_LINE(68)
							{
								HX_STACK_LINE(68)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(68)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(68)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(68)
						ret;
					}
					HX_STACK_LINE(68)
					ret->zpp_inner->weak = true;
					HX_STACK_LINE(68)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(68)
		::nape::geom::Vec2 gravity = _Function_1_1::Block();		HX_STACK_VAR(gravity,"gravity");
		HX_STACK_LINE(69)
		::Main_obj::space = ::nape::space::Space_obj::__new(gravity,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,startPhysics,(void))

::native::display::Sprite Main_obj::canvas;

::nape::space::Space Main_obj::space;

Dynamic Main_obj::activeLevel;


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeLevel") ) { return activeLevel; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"startPhysics") ) { return startPhysics_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"enterFrameHandler") ) { return enterFrameHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeLevel") ) { activeLevel=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("canvas"),
	HX_CSTRING("space"),
	HX_CSTRING("activeLevel"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("enterFrameHandler"),
	HX_CSTRING("startPhysics"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::canvas,"canvas");
	HX_MARK_MEMBER_NAME(Main_obj::space,"space");
	HX_MARK_MEMBER_NAME(Main_obj::activeLevel,"activeLevel");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::canvas,"canvas");
	HX_VISIT_MEMBER_NAME(Main_obj::space,"space");
	HX_VISIT_MEMBER_NAME(Main_obj::activeLevel,"activeLevel");
};

Class Main_obj::__mClass;

void Main_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Main_obj::__boot()
{
}

