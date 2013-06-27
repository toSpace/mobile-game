#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Math
#include <zpp_nape/util/ZPP_Math.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Math_obj::__construct()
{
	return null();
}

ZPP_Math_obj::~ZPP_Math_obj() { }

Dynamic ZPP_Math_obj::__CreateEmpty() { return  new ZPP_Math_obj; }
hx::ObjectPtr< ZPP_Math_obj > ZPP_Math_obj::__new()
{  hx::ObjectPtr< ZPP_Math_obj > result = new ZPP_Math_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Math_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Math_obj > result = new ZPP_Math_obj();
	result->__construct();
	return result;}

Float ZPP_Math_obj::sqrt( Float x){
	HX_STACK_PUSH("ZPP_Math::sqrt","zpp_nape/util/Math.hx",179);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(179)
	return ::Math_obj::sqrt(x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Math_obj,sqrt,return )

Float ZPP_Math_obj::invsqrt( Float x){
	HX_STACK_PUSH("ZPP_Math::invsqrt","zpp_nape/util/Math.hx",193);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(193)
	return (Float(1.0) / Float(::Math_obj::sqrt(x)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Math_obj,invsqrt,return )

Float ZPP_Math_obj::sqr( Float x){
	HX_STACK_PUSH("ZPP_Math::sqr","zpp_nape/util/Math.hx",210);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(210)
	return (x * x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Math_obj,sqr,return )

Float ZPP_Math_obj::clamp2( Float x,Float a){
	HX_STACK_PUSH("ZPP_Math::clamp2","zpp_nape/util/Math.hx",222);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(a,"a");
	struct _Function_1_1{
		inline static Float Block( Float &x,Float &a){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Math.hx",231);
			{
				HX_STACK_LINE(231)
				Float a1 = -(a);		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(231)
				return (  (((x < a1))) ? Float(a1) : Float((  (((x > a))) ? Float(a) : Float(x) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(222)
	return _Function_1_1::Block(x,a);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Math_obj,clamp2,return )

Float ZPP_Math_obj::clamp( Float x,Float a,Float b){
	HX_STACK_PUSH("ZPP_Math::clamp","zpp_nape/util/Math.hx",234);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(234)
	return (  (((x < a))) ? Float(a) : Float((  (((x > b))) ? Float(b) : Float(x) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Math_obj,clamp,return )


ZPP_Math_obj::ZPP_Math_obj()
{
}

void ZPP_Math_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Math);
	HX_MARK_END_CLASS();
}

void ZPP_Math_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_Math_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sqr") ) { return sqr_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sqrt") ) { return sqrt_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"clamp2") ) { return clamp2_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"invsqrt") ) { return invsqrt_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Math_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Math_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sqrt"),
	HX_CSTRING("invsqrt"),
	HX_CSTRING("sqr"),
	HX_CSTRING("clamp2"),
	HX_CSTRING("clamp"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Math_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Math_obj::__mClass,"__mClass");
};

Class ZPP_Math_obj::__mClass;

void ZPP_Math_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Math"), hx::TCanCast< ZPP_Math_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Math_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
