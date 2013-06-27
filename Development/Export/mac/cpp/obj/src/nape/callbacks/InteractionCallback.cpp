#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
namespace nape{
namespace callbacks{

Void InteractionCallback_obj::__construct()
{
HX_STACK_PUSH("InteractionCallback::new","nape/callbacks/InteractionCallback.hx",184);
{
	HX_STACK_LINE(184)
	super::__construct();
}
;
	return null();
}

InteractionCallback_obj::~InteractionCallback_obj() { }

Dynamic InteractionCallback_obj::__CreateEmpty() { return  new InteractionCallback_obj; }
hx::ObjectPtr< InteractionCallback_obj > InteractionCallback_obj::__new()
{  hx::ObjectPtr< InteractionCallback_obj > result = new InteractionCallback_obj();
	result->__construct();
	return result;}

Dynamic InteractionCallback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionCallback_obj > result = new InteractionCallback_obj();
	result->__construct();
	return result;}

::String InteractionCallback_obj::toString( ){
	HX_STACK_PUSH("InteractionCallback::toString","nape/callbacks/InteractionCallback.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_LINE(224)
	::String ret = HX_CSTRING("Cb:");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(225)
	hx::AddEq(ret,Array_obj< ::String >::__new().Add(HX_CSTRING("BEGIN")).Add(HX_CSTRING("END")).Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("ONGOING"))->__get(this->zpp_inner->event));
	HX_STACK_LINE(226)
	hx::AddEq(ret,(((HX_CSTRING(":") + this->zpp_inner->int1->outer_i->toString()) + HX_CSTRING("/")) + this->zpp_inner->int2->outer_i->toString()));
	HX_STACK_LINE(227)
	hx::AddEq(ret,(HX_CSTRING(" : ") + this->zpp_inner->wrap_arbiters->toString()));
	HX_STACK_LINE(228)
	hx::AddEq(ret,(HX_CSTRING(" : listener: ") + ::Std_obj::string(this->zpp_inner->listener->outer)));
	HX_STACK_LINE(229)
	return ret;
}


::nape::dynamics::ArbiterList InteractionCallback_obj::get_arbiters( ){
	HX_STACK_PUSH("InteractionCallback::get_arbiters","nape/callbacks/InteractionCallback.hx",217);
	HX_STACK_THIS(this);
	HX_STACK_LINE(217)
	return this->zpp_inner->wrap_arbiters;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionCallback_obj,get_arbiters,return )

::nape::phys::Interactor InteractionCallback_obj::get_int2( ){
	HX_STACK_PUSH("InteractionCallback::get_int2","nape/callbacks/InteractionCallback.hx",206);
	HX_STACK_THIS(this);
	HX_STACK_LINE(206)
	return this->zpp_inner->int2->outer_i;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionCallback_obj,get_int2,return )

::nape::phys::Interactor InteractionCallback_obj::get_int1( ){
	HX_STACK_PUSH("InteractionCallback::get_int1","nape/callbacks/InteractionCallback.hx",195);
	HX_STACK_THIS(this);
	HX_STACK_LINE(195)
	return this->zpp_inner->int1->outer_i;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionCallback_obj,get_int1,return )


InteractionCallback_obj::InteractionCallback_obj()
{
}

void InteractionCallback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractionCallback);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InteractionCallback_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic InteractionCallback_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"int2") ) { return get_int2(); }
		if (HX_FIELD_EQ(inName,"int1") ) { return get_int1(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return get_arbiters(); }
		if (HX_FIELD_EQ(inName,"get_int2") ) { return get_int2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_int1") ) { return get_int1_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_arbiters") ) { return get_arbiters_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractionCallback_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractionCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("arbiters"));
	outFields->push(HX_CSTRING("int2"));
	outFields->push(HX_CSTRING("int1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("get_arbiters"),
	HX_CSTRING("get_int2"),
	HX_CSTRING("get_int1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionCallback_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionCallback_obj::__mClass,"__mClass");
};

Class InteractionCallback_obj::__mClass;

void InteractionCallback_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.InteractionCallback"), hx::TCanCast< InteractionCallback_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void InteractionCallback_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
