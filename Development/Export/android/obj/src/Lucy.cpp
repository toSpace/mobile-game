#include <hxcpp.h>

#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Lucy
#include <Lucy.h>
#endif
#ifndef INCLUDED_Settings
#include <Settings.h>
#endif
#ifndef INCLUDED_SpriteObject
#include <SpriteObject.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif

Void Lucy_obj::__construct()
{
HX_STACK_PUSH("Lucy::new","Lucy.hx",8);
{
	HX_STACK_LINE(9)
	super::__construct();
	HX_STACK_LINE(11)
	this->lucy = ::SpriteObject_obj::__new(HX_CSTRING("walking.xml"),HX_CSTRING("walking-sparrow.xml"));
}
;
	return null();
}

Lucy_obj::~Lucy_obj() { }

Dynamic Lucy_obj::__CreateEmpty() { return  new Lucy_obj; }
hx::ObjectPtr< Lucy_obj > Lucy_obj::__new()
{  hx::ObjectPtr< Lucy_obj > result = new Lucy_obj();
	result->__construct();
	return result;}

Dynamic Lucy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lucy_obj > result = new Lucy_obj();
	result->__construct();
	return result;}

Void Lucy_obj::render( ){
{
		HX_STACK_PUSH("Lucy::render","Lucy.hx",14);
		HX_STACK_THIS(this);
		HX_STACK_LINE(15)
		this->walk(this->lucy->body,::Settings_obj::flockSpeed,::Settings_obj::flockVelocity);
		HX_STACK_LINE(16)
		::Camera_obj::follow(this->lucy->body);
	}
return null();
}



Lucy_obj::Lucy_obj()
{
}

void Lucy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lucy);
	HX_MARK_MEMBER_NAME(lucy,"lucy");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Lucy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lucy,"lucy");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Lucy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lucy") ) { return lucy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lucy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lucy") ) { lucy=inValue.Cast< ::SpriteObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Lucy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lucy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("render"),
	HX_CSTRING("lucy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lucy_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lucy_obj::__mClass,"__mClass");
};

Class Lucy_obj::__mClass;

void Lucy_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Lucy"), hx::TCanCast< Lucy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Lucy_obj::__boot()
{
}

