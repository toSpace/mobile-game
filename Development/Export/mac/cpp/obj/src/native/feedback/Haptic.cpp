#include <hxcpp.h>

#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_feedback_Haptic
#include <native/feedback/Haptic.h>
#endif
namespace native{
namespace feedback{

Void Haptic_obj::__construct()
{
	return null();
}

Haptic_obj::~Haptic_obj() { }

Dynamic Haptic_obj::__CreateEmpty() { return  new Haptic_obj; }
hx::ObjectPtr< Haptic_obj > Haptic_obj::__new()
{  hx::ObjectPtr< Haptic_obj > result = new Haptic_obj();
	result->__construct();
	return result;}

Dynamic Haptic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Haptic_obj > result = new Haptic_obj();
	result->__construct();
	return result;}

Void Haptic_obj::vibrate( hx::Null< int >  __o_period,hx::Null< int >  __o_duration){
int period = __o_period.Default(0);
int duration = __o_duration.Default(1000);
	HX_STACK_PUSH("Haptic::vibrate","native/feedback/Haptic.hx",11);
	HX_STACK_ARG(period,"period");
	HX_STACK_ARG(duration,"duration");
{
		HX_STACK_LINE(11)
		::native::feedback::Haptic_obj::nme_haptic_vibrate(period,duration);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Haptic_obj,vibrate,(void))

Dynamic Haptic_obj::nme_haptic_vibrate;


Haptic_obj::Haptic_obj()
{
}

void Haptic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Haptic);
	HX_MARK_END_CLASS();
}

void Haptic_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Haptic_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"vibrate") ) { return vibrate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nme_haptic_vibrate") ) { return nme_haptic_vibrate; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Haptic_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"nme_haptic_vibrate") ) { nme_haptic_vibrate=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Haptic_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("vibrate"),
	HX_CSTRING("nme_haptic_vibrate"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Haptic_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Haptic_obj::nme_haptic_vibrate,"nme_haptic_vibrate");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Haptic_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Haptic_obj::nme_haptic_vibrate,"nme_haptic_vibrate");
};

Class Haptic_obj::__mClass;

void Haptic_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.feedback.Haptic"), hx::TCanCast< Haptic_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Haptic_obj::__boot()
{
	nme_haptic_vibrate= ::native::Loader_obj::load(HX_CSTRING("nme_haptic_vibrate"),(int)2);
}

} // end namespace native
} // end namespace feedback
