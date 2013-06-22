#include <hxcpp.h>

#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_Drawing
#include <Drawing.h>
#endif
#ifndef INCLUDED_Garbage
#include <Garbage.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_RenderManager
#include <RenderManager.h>
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
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif

Void RenderManager_obj::__construct()
{
	return null();
}

RenderManager_obj::~RenderManager_obj() { }

Dynamic RenderManager_obj::__CreateEmpty() { return  new RenderManager_obj; }
hx::ObjectPtr< RenderManager_obj > RenderManager_obj::__new()
{  hx::ObjectPtr< RenderManager_obj > result = new RenderManager_obj();
	result->__construct();
	return result;}

Dynamic RenderManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderManager_obj > result = new RenderManager_obj();
	result->__construct();
	return result;}

Dynamic RenderManager_obj::renderList;

bool RenderManager_obj::running;

Void RenderManager_obj::add( Dynamic object){
{
		HX_STACK_PUSH("RenderManager::add","RenderManager.hx",8);
		HX_STACK_ARG(object,"object");
		HX_STACK_LINE(9)
		::RenderManager_obj::renderList->__Field(HX_CSTRING("push"),true)(object);
		HX_STACK_LINE(10)
		::Garbage_obj::add(object);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderManager_obj,add,(void))

Void RenderManager_obj::remove( Dynamic object){
{
		HX_STACK_PUSH("RenderManager::remove","RenderManager.hx",13);
		HX_STACK_ARG(object,"object");
		HX_STACK_LINE(13)
		::RenderManager_obj::renderList->__Field(HX_CSTRING("remove"),true)(object);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderManager_obj,remove,(void))

Void RenderManager_obj::clear( ){
{
		HX_STACK_PUSH("RenderManager::clear","RenderManager.hx",17);
		HX_STACK_LINE(17)
		::RenderManager_obj::renderList = Dynamic( Array_obj<Dynamic>::__new() );
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderManager_obj,clear,(void))

Void RenderManager_obj::render( ){
{
		HX_STACK_PUSH("RenderManager::render","RenderManager.hx",21);
		HX_STACK_LINE(24)
		if ((!(::RenderManager_obj::running))){
			HX_STACK_LINE(24)
			return null();
		}
		HX_STACK_LINE(27)
		if ((!(::Drawing_obj::drawing))){
			HX_STACK_LINE(27)
			::Main_obj::space->step((Float((int)1) / Float(::Main_obj::canvas->get_stage()->frameRate)),null(),null());
		}
		HX_STACK_LINE(39)
		::Camera_obj::render();
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Dynamic _g1 = ::RenderManager_obj::renderList;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(42)
				Dynamic object = _g1->__GetItem(_g);		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(42)
				++(_g);
				HX_STACK_LINE(43)
				object->__Field(HX_CSTRING("render"),true)();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderManager_obj,render,(void))

Void RenderManager_obj::pause( ){
{
		HX_STACK_PUSH("RenderManager::pause","RenderManager.hx",48);
		HX_STACK_LINE(48)
		::RenderManager_obj::running = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderManager_obj,pause,(void))

Void RenderManager_obj::start( ){
{
		HX_STACK_PUSH("RenderManager::start","RenderManager.hx",52);
		HX_STACK_LINE(52)
		::RenderManager_obj::running = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderManager_obj,start,(void))


RenderManager_obj::RenderManager_obj()
{
}

void RenderManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderManager);
	HX_MARK_END_CLASS();
}

void RenderManager_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic RenderManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { return running; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderList") ) { return renderList; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderList") ) { renderList=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("renderList"),
	HX_CSTRING("running"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	HX_CSTRING("render"),
	HX_CSTRING("pause"),
	HX_CSTRING("start"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderManager_obj::renderList,"renderList");
	HX_MARK_MEMBER_NAME(RenderManager_obj::running,"running");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderManager_obj::renderList,"renderList");
	HX_VISIT_MEMBER_NAME(RenderManager_obj::running,"running");
};

Class RenderManager_obj::__mClass;

void RenderManager_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("RenderManager"), hx::TCanCast< RenderManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RenderManager_obj::__boot()
{
	renderList= Dynamic( Array_obj<Dynamic>::__new() );
	running= true;
}

