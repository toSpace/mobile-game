#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_CopyHelper_obj::__construct()
{
HX_STACK_PUSH("ZPP_CopyHelper::new","zpp_nape/constraint/Constraint.hx",555);
{
	HX_STACK_LINE(558)
	this->cb = null();
	HX_STACK_LINE(557)
	this->bc = null();
	HX_STACK_LINE(556)
	this->id = (int)0;
}
;
	return null();
}

ZPP_CopyHelper_obj::~ZPP_CopyHelper_obj() { }

Dynamic ZPP_CopyHelper_obj::__CreateEmpty() { return  new ZPP_CopyHelper_obj; }
hx::ObjectPtr< ZPP_CopyHelper_obj > ZPP_CopyHelper_obj::__new()
{  hx::ObjectPtr< ZPP_CopyHelper_obj > result = new ZPP_CopyHelper_obj();
	result->__construct();
	return result;}

Dynamic ZPP_CopyHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CopyHelper_obj > result = new ZPP_CopyHelper_obj();
	result->__construct();
	return result;}

::zpp_nape::constraint::ZPP_CopyHelper ZPP_CopyHelper_obj::dict( int id,::nape::phys::Body bc){
	HX_STACK_PUSH("ZPP_CopyHelper::dict","zpp_nape/constraint/Constraint.hx",560);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(bc,"bc");
	HX_STACK_LINE(561)
	::zpp_nape::constraint::ZPP_CopyHelper ret = ::zpp_nape::constraint::ZPP_CopyHelper_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(562)
	ret->id = id;
	HX_STACK_LINE(563)
	ret->bc = bc;
	HX_STACK_LINE(564)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CopyHelper_obj,dict,return )

::zpp_nape::constraint::ZPP_CopyHelper ZPP_CopyHelper_obj::todo( int id,Dynamic cb){
	HX_STACK_PUSH("ZPP_CopyHelper::todo","zpp_nape/constraint/Constraint.hx",566);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(cb,"cb");
	HX_STACK_LINE(567)
	::zpp_nape::constraint::ZPP_CopyHelper ret = ::zpp_nape::constraint::ZPP_CopyHelper_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(568)
	ret->id = id;
	HX_STACK_LINE(569)
	ret->cb = cb;
	HX_STACK_LINE(570)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CopyHelper_obj,todo,return )


ZPP_CopyHelper_obj::ZPP_CopyHelper_obj()
{
}

void ZPP_CopyHelper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CopyHelper);
	HX_MARK_MEMBER_NAME(cb,"cb");
	HX_MARK_MEMBER_NAME(bc,"bc");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void ZPP_CopyHelper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cb,"cb");
	HX_VISIT_MEMBER_NAME(bc,"bc");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic ZPP_CopyHelper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"cb") ) { return cb; }
		if (HX_FIELD_EQ(inName,"bc") ) { return bc; }
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dict") ) { return dict_dyn(); }
		if (HX_FIELD_EQ(inName,"todo") ) { return todo_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CopyHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"cb") ) { cb=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bc") ) { bc=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_CopyHelper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bc"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("dict"),
	HX_CSTRING("todo"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cb"),
	HX_CSTRING("bc"),
	HX_CSTRING("id"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CopyHelper_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CopyHelper_obj::__mClass,"__mClass");
};

Class ZPP_CopyHelper_obj::__mClass;

void ZPP_CopyHelper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_CopyHelper"), hx::TCanCast< ZPP_CopyHelper_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_CopyHelper_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
