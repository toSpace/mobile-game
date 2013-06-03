#include <hxcpp.h>

#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_Garbage
#include <Garbage.h>
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
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif

Void Level_obj::__construct()
{
HX_STACK_PUSH("Level::new","Level.hx",10);
{
	HX_STACK_LINE(13)
	::RenderManager_obj::clear();
	HX_STACK_LINE(14)
	::RenderManager_obj::pause();
	HX_STACK_LINE(15)
	::Garbage_obj::clean();
	HX_STACK_LINE(16)
	this->clear();
	HX_STACK_LINE(19)
	this->loadLevel();
	HX_STACK_LINE(22)
	::RenderManager_obj::add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(25)
	::Camera_obj::reload();
	HX_STACK_LINE(27)
	::Main_obj::activeLevel = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

Level_obj::~Level_obj() { }

Dynamic Level_obj::__CreateEmpty() { return  new Level_obj; }
hx::ObjectPtr< Level_obj > Level_obj::__new()
{  hx::ObjectPtr< Level_obj > result = new Level_obj();
	result->__construct();
	return result;}

Dynamic Level_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level_obj > result = new Level_obj();
	result->__construct();
	return result;}

Void Level_obj::render( ){
{
		HX_STACK_PUSH("Level::render","Level.hx",46);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,render,(void))

Void Level_obj::loadLevel( ){
{
		HX_STACK_PUSH("Level::loadLevel","Level.hx",45);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,loadLevel,(void))

Void Level_obj::addToNightmare( int point){
{
		HX_STACK_PUSH("Level::addToNightmare","Level.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Level_obj,addToNightmare,(void))

Void Level_obj::start( ){
{
		HX_STACK_PUSH("Level::start","Level.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_LINE(38)
		::RenderManager_obj::start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,start,(void))

Void Level_obj::clear( ){
{
		HX_STACK_PUSH("Level::clear","Level.hx",31);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (::Main_obj::canvas->get_numChildren() - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		while(((_g1 < _g))){
			HX_STACK_LINE(33)
			int nr = (_g1)++;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(34)
			::Main_obj::canvas->removeChildAt(nr);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,clear,(void))

Dynamic Level_obj::load( ::String level){
	HX_STACK_PUSH("Level::load","Level.hx",6);
	HX_STACK_ARG(level,"level");
	HX_STACK_LINE(6)
	return ::Type_obj::createInstance(::Type_obj::resolveClass(level),Dynamic( Array_obj<Dynamic>::__new()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Level_obj,load,return )


Level_obj::Level_obj()
{
}

void Level_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Level);
	HX_MARK_END_CLASS();
}

void Level_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Level_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadLevel") ) { return loadLevel_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addToNightmare") ) { return addToNightmare_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Level_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Level_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("load"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("render"),
	HX_CSTRING("loadLevel"),
	HX_CSTRING("addToNightmare"),
	HX_CSTRING("start"),
	HX_CSTRING("clear"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level_obj::__mClass,"__mClass");
};

Class Level_obj::__mClass;

void Level_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Level"), hx::TCanCast< Level_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Level_obj::__boot()
{
}

