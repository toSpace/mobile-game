#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreCallback
#include <nape/callbacks/PreCallback.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
namespace nape{
namespace callbacks{

Void PreCallback_obj::__construct()
{
HX_STACK_PUSH("PreCallback::new","nape/callbacks/PreCallback.hx",184);
{
	HX_STACK_LINE(184)
	super::__construct();
}
;
	return null();
}

PreCallback_obj::~PreCallback_obj() { }

Dynamic PreCallback_obj::__CreateEmpty() { return  new PreCallback_obj; }
hx::ObjectPtr< PreCallback_obj > PreCallback_obj::__new()
{  hx::ObjectPtr< PreCallback_obj > result = new PreCallback_obj();
	result->__construct();
	return result;}

Dynamic PreCallback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PreCallback_obj > result = new PreCallback_obj();
	result->__construct();
	return result;}

::String PreCallback_obj::toString( ){
	HX_STACK_PUSH("PreCallback::toString","nape/callbacks/PreCallback.hx",238);
	HX_STACK_THIS(this);
	HX_STACK_LINE(239)
	::String ret = HX_CSTRING("Cb:PRE:");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(240)
	hx::AddEq(ret,(((HX_CSTRING(":") + this->zpp_inner->int1->outer_i->toString()) + HX_CSTRING("/")) + this->zpp_inner->int2->outer_i->toString()));
	HX_STACK_LINE(241)
	hx::AddEq(ret,(HX_CSTRING(" : ") + this->zpp_inner->pre_arbiter->wrapper()->toString()));
	HX_STACK_LINE(242)
	hx::AddEq(ret,(HX_CSTRING(" : listnener: ") + ::Std_obj::string(this->zpp_inner->listener->outer)));
	HX_STACK_LINE(243)
	return ret;
}


bool PreCallback_obj::get_swapped( ){
	HX_STACK_PUSH("PreCallback::get_swapped","nape/callbacks/PreCallback.hx",232);
	HX_STACK_THIS(this);
	HX_STACK_LINE(232)
	return this->zpp_inner->pre_swapped;
}


HX_DEFINE_DYNAMIC_FUNC0(PreCallback_obj,get_swapped,return )

::nape::phys::Interactor PreCallback_obj::get_int2( ){
	HX_STACK_PUSH("PreCallback::get_int2","nape/callbacks/PreCallback.hx",218);
	HX_STACK_THIS(this);
	HX_STACK_LINE(218)
	return this->zpp_inner->int2->outer_i;
}


HX_DEFINE_DYNAMIC_FUNC0(PreCallback_obj,get_int2,return )

::nape::phys::Interactor PreCallback_obj::get_int1( ){
	HX_STACK_PUSH("PreCallback::get_int1","nape/callbacks/PreCallback.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_LINE(207)
	return this->zpp_inner->int1->outer_i;
}


HX_DEFINE_DYNAMIC_FUNC0(PreCallback_obj,get_int1,return )

::nape::dynamics::Arbiter PreCallback_obj::get_arbiter( ){
	HX_STACK_PUSH("PreCallback::get_arbiter","nape/callbacks/PreCallback.hx",196);
	HX_STACK_THIS(this);
	HX_STACK_LINE(196)
	return this->zpp_inner->pre_arbiter->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC0(PreCallback_obj,get_arbiter,return )


PreCallback_obj::PreCallback_obj()
{
}

void PreCallback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PreCallback);
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(int2,"int2");
	HX_MARK_MEMBER_NAME(int1,"int1");
	HX_MARK_MEMBER_NAME(arbiter,"arbiter");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PreCallback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(int2,"int2");
	HX_VISIT_MEMBER_NAME(int1,"int1");
	HX_VISIT_MEMBER_NAME(arbiter,"arbiter");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PreCallback_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"int2") ) { return inCallProp ? get_int2() : int2; }
		if (HX_FIELD_EQ(inName,"int1") ) { return inCallProp ? get_int1() : int1; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { return inCallProp ? get_swapped() : swapped; }
		if (HX_FIELD_EQ(inName,"arbiter") ) { return inCallProp ? get_arbiter() : arbiter; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_int2") ) { return get_int2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_int1") ) { return get_int1_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_swapped") ) { return get_swapped_dyn(); }
		if (HX_FIELD_EQ(inName,"get_arbiter") ) { return get_arbiter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PreCallback_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"int2") ) { int2=inValue.Cast< ::nape::phys::Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"int1") ) { int1=inValue.Cast< ::nape::phys::Interactor >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arbiter") ) { arbiter=inValue.Cast< ::nape::dynamics::Arbiter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PreCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("swapped"));
	outFields->push(HX_CSTRING("int2"));
	outFields->push(HX_CSTRING("int1"));
	outFields->push(HX_CSTRING("arbiter"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("get_swapped"),
	HX_CSTRING("swapped"),
	HX_CSTRING("get_int2"),
	HX_CSTRING("int2"),
	HX_CSTRING("get_int1"),
	HX_CSTRING("int1"),
	HX_CSTRING("get_arbiter"),
	HX_CSTRING("arbiter"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PreCallback_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PreCallback_obj::__mClass,"__mClass");
};

Class PreCallback_obj::__mClass;

void PreCallback_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.PreCallback"), hx::TCanCast< PreCallback_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PreCallback_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
