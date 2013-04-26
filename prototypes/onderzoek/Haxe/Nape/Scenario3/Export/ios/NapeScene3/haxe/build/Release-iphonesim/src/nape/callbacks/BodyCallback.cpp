#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyCallback
#include <nape/callbacks/BodyCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void BodyCallback_obj::__construct()
{
HX_STACK_PUSH("BodyCallback::new","nape/callbacks/BodyCallback.hx",184);
{
	HX_STACK_LINE(184)
	super::__construct();
}
;
	return null();
}

BodyCallback_obj::~BodyCallback_obj() { }

Dynamic BodyCallback_obj::__CreateEmpty() { return  new BodyCallback_obj; }
hx::ObjectPtr< BodyCallback_obj > BodyCallback_obj::__new()
{  hx::ObjectPtr< BodyCallback_obj > result = new BodyCallback_obj();
	result->__construct();
	return result;}

Dynamic BodyCallback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BodyCallback_obj > result = new BodyCallback_obj();
	result->__construct();
	return result;}

::String BodyCallback_obj::toString( ){
	HX_STACK_PUSH("BodyCallback::toString","nape/callbacks/BodyCallback.hx",198);
	HX_STACK_THIS(this);
	HX_STACK_LINE(199)
	::String ret = HX_CSTRING("Cb:");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(200)
	hx::AddEq(ret,Array_obj< ::String >::__new().Add(HX_CSTRING("WAKE")).Add(HX_CSTRING("SLEEP"))->__get((this->zpp_inner->event - ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_WAKE)));
	HX_STACK_LINE(201)
	hx::AddEq(ret,(HX_CSTRING(":") + this->zpp_inner->body->outer->toString()));
	HX_STACK_LINE(202)
	hx::AddEq(ret,(HX_CSTRING(" : listener: ") + ::Std_obj::string(this->zpp_inner->listener->outer)));
	HX_STACK_LINE(203)
	return ret;
}


::nape::phys::Body BodyCallback_obj::get_body( ){
	HX_STACK_PUSH("BodyCallback::get_body","nape/callbacks/BodyCallback.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_LINE(192)
	return this->zpp_inner->body->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(BodyCallback_obj,get_body,return )


BodyCallback_obj::BodyCallback_obj()
{
}

void BodyCallback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BodyCallback);
	HX_MARK_MEMBER_NAME(body,"body");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BodyCallback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(body,"body");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BodyCallback_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return inCallProp ? get_body() : body; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body") ) { return get_body_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BodyCallback_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BodyCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("body"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("get_body"),
	HX_CSTRING("body"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BodyCallback_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BodyCallback_obj::__mClass,"__mClass");
};

Class BodyCallback_obj::__mClass;

void BodyCallback_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.BodyCallback"), hx::TCanCast< BodyCallback_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BodyCallback_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
