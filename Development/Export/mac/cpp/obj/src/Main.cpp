#include <hxcpp.h>

#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_Drawing
#include <Drawing.h>
#endif
#ifndef INCLUDED_Level
#include <Level.h>
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
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
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
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_PUSH("Main::new","Main.hx",36);
{
	HX_STACK_LINE(37)
	::Main_obj::stage = ::flash::Lib_obj::get_current()->get_stage();
	HX_STACK_LINE(38)
	::Main_obj::stage->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
	HX_STACK_LINE(39)
	::Main_obj::stage->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
	HX_STACK_LINE(40)
	::Main_obj::stage->addEventListener(::flash::events::Event_obj::RESIZE,this->onResize_dyn(),null(),null(),null());
	HX_STACK_LINE(43)
	this->startPhysics(::Main_obj::stage);
	HX_STACK_LINE(46)
	::Main_obj::canvas = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(47)
	::Main_obj::stage->addChild(::Main_obj::canvas);
	HX_STACK_LINE(50)
	::Mobile_obj::setSizes();
	HX_STACK_LINE(51)
	::Drawing_obj::init();
	HX_STACK_LINE(52)
	::Settings_obj::load();
	HX_STACK_LINE(55)
	::Main_obj::stage->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->enterFrameHandler_dyn(),null(),null(),null());
	HX_STACK_LINE(56)
	::Main_obj::stage->addEventListener(::flash::events::Event_obj::ACTIVATE,this->activate_dyn(),null(),null(),null());
	HX_STACK_LINE(57)
	::Main_obj::stage->addEventListener(::flash::events::Event_obj::DEACTIVATE,this->deactivate_dyn(),null(),null(),null());
	HX_STACK_LINE(62)
	::Main_obj::stage->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,::Camera_obj::keyboard_dyn(),null(),null(),null());
	HX_STACK_LINE(66)
	::Level_obj::load(HX_CSTRING("World1Level1"));
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

Void Main_obj::activate( ::flash::events::Event ev){
{
		HX_STACK_PUSH("Main::activate","Main.hx",102);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ev,"ev");
		HX_STACK_LINE(102)
		::RenderManager_obj::start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,activate,(void))

Void Main_obj::deactivate( ::flash::events::Event ev){
{
		HX_STACK_PUSH("Main::deactivate","Main.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ev,"ev");
		HX_STACK_LINE(98)
		::RenderManager_obj::pause();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,deactivate,(void))

Void Main_obj::onResize( ::flash::events::Event ev){
{
		HX_STACK_PUSH("Main::onResize","Main.hx",93);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ev,"ev");
		HX_STACK_LINE(93)
		::Mobile_obj::setSizes();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onResize,(void))

Void Main_obj::enterFrameHandler( ::flash::events::Event ev){
{
		HX_STACK_PUSH("Main::enterFrameHandler","Main.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ev,"ev");
		HX_STACK_LINE(87)
		::RenderManager_obj::render();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,enterFrameHandler,(void))

Void Main_obj::startPhysics( ::flash::display::Stage stage){
{
		HX_STACK_PUSH("Main::startPhysics","Main.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_ARG(stage,"stage");
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ){
				HX_STACK_PUSH("*::closure","Main.hx",78);
				{
					HX_STACK_LINE(78)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(78)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(78)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(78)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(78)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(78)
						ret->zpp_pool = null();
						HX_STACK_LINE(78)
						ret->zpp_disp = false;
						HX_STACK_LINE(78)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(78)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(78)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( ){
								HX_STACK_PUSH("*::closure","Main.hx",78);
								{
									HX_STACK_LINE(78)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(78)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(78)
									{
										HX_STACK_LINE(78)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(78)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(78)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(78)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(78)
											ret1->next = null();
										}
										HX_STACK_LINE(78)
										ret1->weak = false;
									}
									HX_STACK_LINE(78)
									ret1->_immutable = immutable;
									HX_STACK_LINE(78)
									{
										HX_STACK_LINE(78)
										ret1->x = (int)0;
										HX_STACK_LINE(78)
										ret1->y = (int)600;
										HX_STACK_LINE(78)
										{
										}
									}
									HX_STACK_LINE(78)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(78)
						ret->zpp_inner = _Function_3_1::Block();
						HX_STACK_LINE(78)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(78)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(78)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(78)
						{
							HX_STACK_LINE(78)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(78)
							if ((_this->_immutable)){
								HX_STACK_LINE(78)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(78)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(78)
								_this->_isimmutable();
							}
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","Main.hx",78);
								{
									HX_STACK_LINE(78)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(78)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(78)
									{
										HX_STACK_LINE(78)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(78)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(78)
											_this->_validate();
										}
									}
									HX_STACK_LINE(78)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","Main.hx",78);
								{
									HX_STACK_LINE(78)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(78)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(78)
									{
										HX_STACK_LINE(78)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(78)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(78)
											_this->_validate();
										}
									}
									HX_STACK_LINE(78)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(78)
						if ((!(((bool((_Function_3_1::Block(ret) == (int)0)) && bool((_Function_3_2::Block(ret) == (int)600))))))){
							HX_STACK_LINE(78)
							{
								HX_STACK_LINE(78)
								ret->zpp_inner->x = (int)0;
								HX_STACK_LINE(78)
								ret->zpp_inner->y = (int)600;
								HX_STACK_LINE(78)
								{
								}
							}
							HX_STACK_LINE(78)
							{
								HX_STACK_LINE(78)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(78)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(78)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(78)
						ret;
					}
					HX_STACK_LINE(78)
					ret->zpp_inner->weak = true;
					HX_STACK_LINE(78)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(78)
		::nape::geom::Vec2 gravity = _Function_1_1::Block();		HX_STACK_VAR(gravity,"gravity");
		HX_STACK_LINE(79)
		::Main_obj::space = ::nape::space::Space_obj::__new(gravity,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,startPhysics,(void))

::flash::display::Stage Main_obj::stage;

::flash::display::Sprite Main_obj::canvas;

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
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
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
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
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
	HX_CSTRING("stage"),
	HX_CSTRING("canvas"),
	HX_CSTRING("space"),
	HX_CSTRING("activeLevel"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("activate"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("onResize"),
	HX_CSTRING("enterFrameHandler"),
	HX_CSTRING("startPhysics"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(Main_obj::canvas,"canvas");
	HX_MARK_MEMBER_NAME(Main_obj::space,"space");
	HX_MARK_MEMBER_NAME(Main_obj::activeLevel,"activeLevel");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(Main_obj::canvas,"canvas");
	HX_VISIT_MEMBER_NAME(Main_obj::space,"space");
	HX_VISIT_MEMBER_NAME(Main_obj::activeLevel,"activeLevel");
};

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Main_obj::__boot()
{
}

