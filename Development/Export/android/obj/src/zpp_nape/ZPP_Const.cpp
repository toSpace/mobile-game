#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_Const
#include <zpp_nape/ZPP_Const.h>
#endif
namespace zpp_nape{

Void ZPP_Const_obj::__construct()
{
	return null();
}

ZPP_Const_obj::~ZPP_Const_obj() { }

Dynamic ZPP_Const_obj::__CreateEmpty() { return  new ZPP_Const_obj; }
hx::ObjectPtr< ZPP_Const_obj > ZPP_Const_obj::__new()
{  hx::ObjectPtr< ZPP_Const_obj > result = new ZPP_Const_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Const_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Const_obj > result = new ZPP_Const_obj();
	result->__construct();
	return result;}

Float ZPP_Const_obj::POSINF( ){
	HX_STACK_PUSH("ZPP_Const::POSINF","zpp_nape/Const.hx",184);
	HX_STACK_LINE(184)
	return ::Math_obj::POSITIVE_INFINITY;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Const_obj,POSINF,return )

Float ZPP_Const_obj::NEGINF( ){
	HX_STACK_PUSH("ZPP_Const::NEGINF","zpp_nape/Const.hx",188);
	HX_STACK_LINE(188)
	return ::Math_obj::NEGATIVE_INFINITY;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Const_obj,NEGINF,return )


ZPP_Const_obj::ZPP_Const_obj()
{
}

void ZPP_Const_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Const);
	HX_MARK_END_CLASS();
}

void ZPP_Const_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_Const_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"POSINF") ) { return POSINF_dyn(); }
		if (HX_FIELD_EQ(inName,"NEGINF") ) { return NEGINF_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Const_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Const_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("POSINF"),
	HX_CSTRING("NEGINF"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Const_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Const_obj::__mClass,"__mClass");
};

Class ZPP_Const_obj::__mClass;

void ZPP_Const_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.ZPP_Const"), hx::TCanCast< ZPP_Const_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Const_obj::__boot()
{
}

} // end namespace zpp_nape
