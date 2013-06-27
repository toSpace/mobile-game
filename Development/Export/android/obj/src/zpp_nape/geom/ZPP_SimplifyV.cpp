#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimplifyV_obj::__construct()
{
HX_STACK_PUSH("ZPP_SimplifyV::new","zpp_nape/geom/Simplify.hx",174);
{
	HX_STACK_LINE(204)
	this->forced = false;
	HX_STACK_LINE(203)
	this->flag = false;
	HX_STACK_LINE(202)
	this->prev = null();
	HX_STACK_LINE(177)
	this->next = null();
	HX_STACK_LINE(176)
	this->y = 0.0;
	HX_STACK_LINE(175)
	this->x = 0.0;
}
;
	return null();
}

ZPP_SimplifyV_obj::~ZPP_SimplifyV_obj() { }

Dynamic ZPP_SimplifyV_obj::__CreateEmpty() { return  new ZPP_SimplifyV_obj; }
hx::ObjectPtr< ZPP_SimplifyV_obj > ZPP_SimplifyV_obj::__new()
{  hx::ObjectPtr< ZPP_SimplifyV_obj > result = new ZPP_SimplifyV_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SimplifyV_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimplifyV_obj > result = new ZPP_SimplifyV_obj();
	result->__construct();
	return result;}

Void ZPP_SimplifyV_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_SimplifyV::alloc","zpp_nape/geom/Simplify.hx",210);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimplifyV_obj,alloc,(void))

Void ZPP_SimplifyV_obj::free( ){
{
		HX_STACK_PUSH("ZPP_SimplifyV::free","zpp_nape/geom/Simplify.hx",207);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimplifyV_obj,free,(void))

::zpp_nape::geom::ZPP_SimplifyV ZPP_SimplifyV_obj::zpp_pool;

::zpp_nape::geom::ZPP_SimplifyV ZPP_SimplifyV_obj::get( ::zpp_nape::geom::ZPP_GeomVert v){
	HX_STACK_PUSH("ZPP_SimplifyV::get","zpp_nape/geom/Simplify.hx",213);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(214)
	::zpp_nape::geom::ZPP_SimplifyV ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(216)
		if (((::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool == null()))){
			HX_STACK_LINE(216)
			ret = ::zpp_nape::geom::ZPP_SimplifyV_obj::__new();
		}
		else{
			HX_STACK_LINE(223)
			ret = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool;
			HX_STACK_LINE(224)
			::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = ret->next;
			HX_STACK_LINE(225)
			ret->next = null();
		}
		HX_STACK_LINE(230)
		Dynamic();
	}
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(233)
		ret->x = v->x;
		HX_STACK_LINE(234)
		ret->y = v->y;
		HX_STACK_LINE(243)
		{
		}
	}
	HX_STACK_LINE(252)
	ret->flag = false;
	HX_STACK_LINE(253)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimplifyV_obj,get,return )


ZPP_SimplifyV_obj::ZPP_SimplifyV_obj()
{
}

void ZPP_SimplifyV_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimplifyV);
	HX_MARK_MEMBER_NAME(forced,"forced");
	HX_MARK_MEMBER_NAME(flag,"flag");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void ZPP_SimplifyV_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(forced,"forced");
	HX_VISIT_MEMBER_NAME(flag,"flag");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic ZPP_SimplifyV_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"flag") ) { return flag; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { return forced; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SimplifyV_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { flag=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { forced=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_SimplifyV >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SimplifyV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("forced"));
	outFields->push(HX_CSTRING("flag"));
	outFields->push(HX_CSTRING("prev"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("forced"),
	HX_CSTRING("flag"),
	HX_CSTRING("prev"),
	HX_CSTRING("next"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimplifyV_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SimplifyV_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimplifyV_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SimplifyV_obj::zpp_pool,"zpp_pool");
};

Class ZPP_SimplifyV_obj::__mClass;

void ZPP_SimplifyV_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_SimplifyV"), hx::TCanCast< ZPP_SimplifyV_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_SimplifyV_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
