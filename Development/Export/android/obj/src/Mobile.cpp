#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Mobile
#include <Mobile.h>
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
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_system_Capabilities
#include <flash/system/Capabilities.h>
#endif

Void Mobile_obj::__construct()
{
	return null();
}

Mobile_obj::~Mobile_obj() { }

Dynamic Mobile_obj::__CreateEmpty() { return  new Mobile_obj; }
hx::ObjectPtr< Mobile_obj > Mobile_obj::__new()
{  hx::ObjectPtr< Mobile_obj > result = new Mobile_obj();
	result->__construct();
	return result;}

Dynamic Mobile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mobile_obj > result = new Mobile_obj();
	result->__construct();
	return result;}

::String Mobile_obj::asset;

::String Mobile_obj::xml;

Float Mobile_obj::screenDensity;

Float Mobile_obj::screenWidth;

Float Mobile_obj::screenHeight;

Void Mobile_obj::setSizes( ){
{
		HX_STACK_PUSH("Mobile::setSizes","Mobile.hx",11);
		HX_STACK_LINE(14)
		::Mobile_obj::xml = HX_CSTRING("assets/xml/");
		HX_STACK_LINE(15)
		Float dpi = ::flash::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(dpi,"dpi");
		HX_STACK_LINE(17)
		if (((dpi < (int)200))){
			HX_STACK_LINE(18)
			::Mobile_obj::screenDensity = (int)1;
			HX_STACK_LINE(19)
			::Mobile_obj::asset = HX_CSTRING("assets/mobile-1x/");
		}
		else{
			HX_STACK_LINE(20)
			if (((dpi < (int)300))){
				HX_STACK_LINE(21)
				::Mobile_obj::screenDensity = 1.5;
				HX_STACK_LINE(22)
				::Mobile_obj::asset = HX_CSTRING("assets/mobile-1x/");
			}
			else{
				HX_STACK_LINE(24)
				::Mobile_obj::screenDensity = (int)2;
				HX_STACK_LINE(25)
				::Mobile_obj::asset = HX_CSTRING("assets/mobile-2x/");
			}
		}
		HX_STACK_LINE(29)
		::Mobile_obj::screenHeight = ::Main_obj::stage->get_stageHeight();
		HX_STACK_LINE(30)
		::Mobile_obj::screenWidth = ::Main_obj::stage->get_stageWidth();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mobile_obj,setSizes,(void))

Float Mobile_obj::sizeAdjustment( ){
	HX_STACK_PUSH("Mobile::sizeAdjustment","Mobile.hx",35);
	HX_STACK_LINE(35)
	return ::Mobile_obj::screenDensity;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mobile_obj,sizeAdjustment,return )

Float Mobile_obj::getY( Dynamic object){
	HX_STACK_PUSH("Mobile::getY","Mobile.hx",39);
	HX_STACK_ARG(object,"object");
	HX_STACK_LINE(39)
	return (::Mobile_obj::screenHeight - object->__Field(HX_CSTRING("height"),true));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mobile_obj,getY,return )

Float Mobile_obj::inView( Dynamic object){
	HX_STACK_PUSH("Mobile::inView","Mobile.hx",43);
	HX_STACK_ARG(object,"object");
	HX_STACK_LINE(43)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mobile_obj,inView,return )


Mobile_obj::Mobile_obj()
{
}

void Mobile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mobile);
	HX_MARK_END_CLASS();
}

void Mobile_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Mobile_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return xml; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"getY") ) { return getY_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inView") ) { return inView_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setSizes") ) { return setSizes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return screenWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return screenHeight; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"screenDensity") ) { return screenDensity; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sizeAdjustment") ) { return sizeAdjustment_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mobile_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { xml=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"screenDensity") ) { screenDensity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mobile_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("asset"),
	HX_CSTRING("xml"),
	HX_CSTRING("screenDensity"),
	HX_CSTRING("screenWidth"),
	HX_CSTRING("screenHeight"),
	HX_CSTRING("setSizes"),
	HX_CSTRING("sizeAdjustment"),
	HX_CSTRING("getY"),
	HX_CSTRING("inView"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mobile_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mobile_obj::asset,"asset");
	HX_MARK_MEMBER_NAME(Mobile_obj::xml,"xml");
	HX_MARK_MEMBER_NAME(Mobile_obj::screenDensity,"screenDensity");
	HX_MARK_MEMBER_NAME(Mobile_obj::screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(Mobile_obj::screenHeight,"screenHeight");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mobile_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mobile_obj::asset,"asset");
	HX_VISIT_MEMBER_NAME(Mobile_obj::xml,"xml");
	HX_VISIT_MEMBER_NAME(Mobile_obj::screenDensity,"screenDensity");
	HX_VISIT_MEMBER_NAME(Mobile_obj::screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(Mobile_obj::screenHeight,"screenHeight");
};

Class Mobile_obj::__mClass;

void Mobile_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Mobile"), hx::TCanCast< Mobile_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Mobile_obj::__boot()
{
}

