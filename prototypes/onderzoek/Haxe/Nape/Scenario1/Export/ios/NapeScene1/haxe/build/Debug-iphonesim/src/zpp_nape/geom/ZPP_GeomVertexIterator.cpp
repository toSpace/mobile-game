#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_GeomVertexIterator
#include <nape/geom/GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_GeomVertexIterator_obj::__construct()
{
HX_STACK_PUSH("ZPP_GeomVertexIterator::new","zpp_nape/geom/GeomPoly.hx",327);
{
	HX_STACK_LINE(333)
	this->next = null();
	HX_STACK_LINE(332)
	this->outer = null();
	HX_STACK_LINE(331)
	this->forward = false;
	HX_STACK_LINE(330)
	this->first = false;
	HX_STACK_LINE(329)
	this->start = null();
	HX_STACK_LINE(328)
	this->ptr = null();
	HX_STACK_LINE(372)
	::zpp_nape::geom::ZPP_GeomVertexIterator_obj::internal = true;
	HX_STACK_LINE(374)
	this->outer = ::nape::geom::GeomVertexIterator_obj::__new();
	HX_STACK_LINE(376)
	::zpp_nape::geom::ZPP_GeomVertexIterator_obj::internal = false;
}
;
	return null();
}

ZPP_GeomVertexIterator_obj::~ZPP_GeomVertexIterator_obj() { }

Dynamic ZPP_GeomVertexIterator_obj::__CreateEmpty() { return  new ZPP_GeomVertexIterator_obj; }
hx::ObjectPtr< ZPP_GeomVertexIterator_obj > ZPP_GeomVertexIterator_obj::__new()
{  hx::ObjectPtr< ZPP_GeomVertexIterator_obj > result = new ZPP_GeomVertexIterator_obj();
	result->__construct();
	return result;}

Dynamic ZPP_GeomVertexIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_GeomVertexIterator_obj > result = new ZPP_GeomVertexIterator_obj();
	result->__construct();
	return result;}

Void ZPP_GeomVertexIterator_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_GeomVertexIterator::alloc","zpp_nape/geom/GeomPoly.hx",366);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVertexIterator_obj,alloc,(void))

Void ZPP_GeomVertexIterator_obj::free( ){
{
		HX_STACK_PUSH("ZPP_GeomVertexIterator::free","zpp_nape/geom/GeomPoly.hx",360);
		HX_STACK_THIS(this);
		HX_STACK_LINE(361)
		this->outer->zpp_inner = null();
		HX_STACK_LINE(362)
		this->ptr = this->start = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVertexIterator_obj,free,(void))

::zpp_nape::geom::ZPP_GeomVertexIterator ZPP_GeomVertexIterator_obj::zpp_pool;

bool ZPP_GeomVertexIterator_obj::internal;

::nape::geom::GeomVertexIterator ZPP_GeomVertexIterator_obj::get( ::zpp_nape::geom::ZPP_GeomVert poly,bool forward){
	HX_STACK_PUSH("ZPP_GeomVertexIterator::get","zpp_nape/geom/GeomPoly.hx",379);
	HX_STACK_ARG(poly,"poly");
	HX_STACK_ARG(forward,"forward");
	HX_STACK_LINE(380)
	::zpp_nape::geom::ZPP_GeomVertexIterator ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(382)
		if (((::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool == null()))){
			HX_STACK_LINE(382)
			ret = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::__new();
		}
		else{
			HX_STACK_LINE(389)
			ret = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;
			HX_STACK_LINE(390)
			::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool = ret->next;
			HX_STACK_LINE(391)
			ret->next = null();
		}
		HX_STACK_LINE(396)
		Dynamic();
	}
	HX_STACK_LINE(398)
	ret->outer->zpp_inner = ret;
	HX_STACK_LINE(399)
	ret->ptr = poly;
	HX_STACK_LINE(400)
	ret->forward = forward;
	HX_STACK_LINE(401)
	ret->start = poly;
	HX_STACK_LINE(402)
	ret->first = (poly != null());
	HX_STACK_LINE(403)
	return ret->outer;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_GeomVertexIterator_obj,get,return )


ZPP_GeomVertexIterator_obj::ZPP_GeomVertexIterator_obj()
{
}

void ZPP_GeomVertexIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_GeomVertexIterator);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(forward,"forward");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(ptr,"ptr");
	HX_MARK_END_CLASS();
}

void ZPP_GeomVertexIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(forward,"forward");
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(ptr,"ptr");
}

Dynamic ZPP_GeomVertexIterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"ptr") ) { return ptr; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"first") ) { return first; }
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forward") ) { return forward; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"internal") ) { return internal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_GeomVertexIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ptr") ) { ptr=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVertexIterator >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::GeomVertexIterator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forward") ) { forward=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVertexIterator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_GeomVertexIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("forward"));
	outFields->push(HX_CSTRING("first"));
	outFields->push(HX_CSTRING("start"));
	outFields->push(HX_CSTRING("ptr"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("internal"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("next"),
	HX_CSTRING("outer"),
	HX_CSTRING("forward"),
	HX_CSTRING("first"),
	HX_CSTRING("start"),
	HX_CSTRING("ptr"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_GeomVertexIterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_GeomVertexIterator_obj::zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(ZPP_GeomVertexIterator_obj::internal,"internal");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_GeomVertexIterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_GeomVertexIterator_obj::zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(ZPP_GeomVertexIterator_obj::internal,"internal");
};

Class ZPP_GeomVertexIterator_obj::__mClass;

void ZPP_GeomVertexIterator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_GeomVertexIterator"), hx::TCanCast< ZPP_GeomVertexIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_GeomVertexIterator_obj::__boot()
{
	zpp_pool= null();
	internal= false;
}

} // end namespace zpp_nape
} // end namespace geom
