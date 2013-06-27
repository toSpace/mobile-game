#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimplifyP_obj::__construct()
{
HX_STACK_PUSH("ZPP_SimplifyP::new","zpp_nape/geom/Simplify.hx",257);
{
	HX_STACK_LINE(284)
	this->max = null();
	HX_STACK_LINE(283)
	this->min = null();
	HX_STACK_LINE(258)
	this->next = null();
}
;
	return null();
}

ZPP_SimplifyP_obj::~ZPP_SimplifyP_obj() { }

Dynamic ZPP_SimplifyP_obj::__CreateEmpty() { return  new ZPP_SimplifyP_obj; }
hx::ObjectPtr< ZPP_SimplifyP_obj > ZPP_SimplifyP_obj::__new()
{  hx::ObjectPtr< ZPP_SimplifyP_obj > result = new ZPP_SimplifyP_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SimplifyP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimplifyP_obj > result = new ZPP_SimplifyP_obj();
	result->__construct();
	return result;}

Void ZPP_SimplifyP_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_SimplifyP::alloc","zpp_nape/geom/Simplify.hx",293);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimplifyP_obj,alloc,(void))

Void ZPP_SimplifyP_obj::free( ){
{
		HX_STACK_PUSH("ZPP_SimplifyP::free","zpp_nape/geom/Simplify.hx",288);
		HX_STACK_THIS(this);
		HX_STACK_LINE(288)
		this->min = this->max = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimplifyP_obj,free,(void))

::zpp_nape::geom::ZPP_SimplifyP ZPP_SimplifyP_obj::zpp_pool;

::zpp_nape::geom::ZPP_SimplifyP ZPP_SimplifyP_obj::get( ::zpp_nape::geom::ZPP_SimplifyV min,::zpp_nape::geom::ZPP_SimplifyV max){
	HX_STACK_PUSH("ZPP_SimplifyP::get","zpp_nape/geom/Simplify.hx",295);
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(296)
	::zpp_nape::geom::ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(298)
		if (((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool == null()))){
			HX_STACK_LINE(298)
			ret = ::zpp_nape::geom::ZPP_SimplifyP_obj::__new();
		}
		else{
			HX_STACK_LINE(305)
			ret = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool;
			HX_STACK_LINE(306)
			::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = ret->next;
			HX_STACK_LINE(307)
			ret->next = null();
		}
		HX_STACK_LINE(312)
		Dynamic();
	}
	HX_STACK_LINE(314)
	ret->min = min;
	HX_STACK_LINE(315)
	ret->max = max;
	HX_STACK_LINE(316)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimplifyP_obj,get,return )


ZPP_SimplifyP_obj::ZPP_SimplifyP_obj()
{
}

void ZPP_SimplifyP_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimplifyP);
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_SimplifyP_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_SimplifyP_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SimplifyP_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyP >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyP >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SimplifyP_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("max"),
	HX_CSTRING("min"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimplifyP_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SimplifyP_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimplifyP_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SimplifyP_obj::zpp_pool,"zpp_pool");
};

Class ZPP_SimplifyP_obj::__mClass;

void ZPP_SimplifyP_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_SimplifyP"), hx::TCanCast< ZPP_SimplifyP_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_SimplifyP_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
