#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_ConstraintCallback
#include <nape/callbacks/ConstraintCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void ConstraintCallback_obj::__construct()
{
HX_STACK_PUSH("ConstraintCallback::new","nape/callbacks/ConstraintCallback.hx",184);
{
	HX_STACK_LINE(184)
	super::__construct();
}
;
	return null();
}

ConstraintCallback_obj::~ConstraintCallback_obj() { }

Dynamic ConstraintCallback_obj::__CreateEmpty() { return  new ConstraintCallback_obj; }
hx::ObjectPtr< ConstraintCallback_obj > ConstraintCallback_obj::__new()
{  hx::ObjectPtr< ConstraintCallback_obj > result = new ConstraintCallback_obj();
	result->__construct();
	return result;}

Dynamic ConstraintCallback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConstraintCallback_obj > result = new ConstraintCallback_obj();
	result->__construct();
	return result;}

::String ConstraintCallback_obj::toString( ){
	HX_STACK_PUSH("ConstraintCallback::toString","nape/callbacks/ConstraintCallback.hx",198);
	HX_STACK_THIS(this);
	HX_STACK_LINE(199)
	::String ret = HX_CSTRING("Cb:");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(200)
	hx::AddEq(ret,Array_obj< ::String >::__new().Add(HX_CSTRING("WAKE")).Add(HX_CSTRING("SLEEP")).Add(HX_CSTRING("BREAK"))->__get((this->zpp_inner->event - ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_WAKE)));
	HX_STACK_LINE(201)
	hx::AddEq(ret,(HX_CSTRING(":") + this->zpp_inner->constraint->outer->toString()));
	HX_STACK_LINE(202)
	hx::AddEq(ret,(HX_CSTRING(" : listener: ") + ::Std_obj::string(this->zpp_inner->listener->outer)));
	HX_STACK_LINE(203)
	return ret;
}


::nape::constraint::Constraint ConstraintCallback_obj::get_constraint( ){
	HX_STACK_PUSH("ConstraintCallback::get_constraint","nape/callbacks/ConstraintCallback.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_LINE(192)
	return this->zpp_inner->constraint->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ConstraintCallback_obj,get_constraint,return )


ConstraintCallback_obj::ConstraintCallback_obj()
{
}

void ConstraintCallback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConstraintCallback);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ConstraintCallback_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ConstraintCallback_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"constraint") ) { return get_constraint(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_constraint") ) { return get_constraint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConstraintCallback_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ConstraintCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("constraint"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("get_constraint"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConstraintCallback_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConstraintCallback_obj::__mClass,"__mClass");
};

Class ConstraintCallback_obj::__mClass;

void ConstraintCallback_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.ConstraintCallback"), hx::TCanCast< ConstraintCallback_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ConstraintCallback_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
