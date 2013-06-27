#include <hxcpp.h>

#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_DrawButton
#include <DrawButton.h>
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
#ifndef INCLUDED_UIobject
#include <UIobject.h>
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

Void Level_obj::__construct()
{
HX_STACK_PUSH("Level::new","Level.hx",7);
{
	HX_STACK_LINE(10)
	this->nightmareTolerance = (int)100;
	HX_STACK_LINE(9)
	this->nightmare = (int)0;
	HX_STACK_LINE(19)
	::RenderManager_obj::clear();
	HX_STACK_LINE(20)
	::RenderManager_obj::pause();
	HX_STACK_LINE(21)
	::Garbage_obj::clean();
	HX_STACK_LINE(22)
	this->clear();
	HX_STACK_LINE(25)
	this->loadLevel();
	HX_STACK_LINE(28)
	::RenderManager_obj::add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(31)
	::Camera_obj::reload();
	HX_STACK_LINE(34)
	::DrawButton drawingButton = ::DrawButton_obj::__new();		HX_STACK_VAR(drawingButton,"drawingButton");
	HX_STACK_LINE(36)
	::Main_obj::activeLevel = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(39)
	this->resetNightmare();
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
		HX_STACK_PUSH("Level::render","Level.hx",75);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,render,(void))

Void Level_obj::loadLevel( ){
{
		HX_STACK_PUSH("Level::loadLevel","Level.hx",74);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,loadLevel,(void))

Void Level_obj::snort( ){
{
		HX_STACK_PUSH("Level::snort","Level.hx",70);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,snort,(void))

Void Level_obj::resetNightmare( ){
{
		HX_STACK_PUSH("Level::resetNightmare","Level.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_LINE(66)
		this->nightmare = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,resetNightmare,(void))

Float Level_obj::getNightmare( ){
	HX_STACK_PUSH("Level::getNightmare","Level.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	return (Float(this->nightmare) / Float(this->nightmareTolerance));
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,getNightmare,return )

Void Level_obj::addToNightmare( Float point){
{
		HX_STACK_PUSH("Level::addToNightmare","Level.hx",56);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(56)
		hx::AddEq(this->nightmare,point);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Level_obj,addToNightmare,(void))

Void Level_obj::start( ){
{
		HX_STACK_PUSH("Level::start","Level.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		::RenderManager_obj::start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,start,(void))

Void Level_obj::clear( ){
{
		HX_STACK_PUSH("Level::clear","Level.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_LINE(45)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (::Main_obj::canvas->get_numChildren() - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		while(((_g1 < _g))){
			HX_STACK_LINE(45)
			int nr = (_g1)++;		HX_STACK_VAR(nr,"nr");
			HX_STACK_LINE(46)
			::Main_obj::canvas->removeChildAt(nr);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,clear,(void))

Dynamic Level_obj::load( ::String level){
	HX_STACK_PUSH("Level::load","Level.hx",12);
	HX_STACK_ARG(level,"level");
	HX_STACK_LINE(12)
	return ::Type_obj::createInstance(::Type_obj::resolveClass(level),Dynamic( Array_obj<Dynamic>::__new()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Level_obj,load,return )


Level_obj::Level_obj()
{
}

void Level_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Level);
	HX_MARK_MEMBER_NAME(nightmareTolerance,"nightmareTolerance");
	HX_MARK_MEMBER_NAME(nightmare,"nightmare");
	HX_MARK_END_CLASS();
}

void Level_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nightmareTolerance,"nightmareTolerance");
	HX_VISIT_MEMBER_NAME(nightmare,"nightmare");
}

Dynamic Level_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"snort") ) { return snort_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadLevel") ) { return loadLevel_dyn(); }
		if (HX_FIELD_EQ(inName,"nightmare") ) { return nightmare; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getNightmare") ) { return getNightmare_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetNightmare") ) { return resetNightmare_dyn(); }
		if (HX_FIELD_EQ(inName,"addToNightmare") ) { return addToNightmare_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nightmareTolerance") ) { return nightmareTolerance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Level_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nightmare") ) { nightmare=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nightmareTolerance") ) { nightmareTolerance=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Level_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nightmareTolerance"));
	outFields->push(HX_CSTRING("nightmare"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("load"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("render"),
	HX_CSTRING("loadLevel"),
	HX_CSTRING("snort"),
	HX_CSTRING("resetNightmare"),
	HX_CSTRING("getNightmare"),
	HX_CSTRING("addToNightmare"),
	HX_CSTRING("start"),
	HX_CSTRING("clear"),
	HX_CSTRING("nightmareTolerance"),
	HX_CSTRING("nightmare"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Level"), hx::TCanCast< Level_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Level_obj::__boot()
{
}

