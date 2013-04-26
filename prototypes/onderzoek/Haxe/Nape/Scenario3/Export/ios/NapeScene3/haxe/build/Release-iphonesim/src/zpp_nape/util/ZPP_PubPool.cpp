#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_PubPool_obj::__construct()
{
	return null();
}

ZPP_PubPool_obj::~ZPP_PubPool_obj() { }

Dynamic ZPP_PubPool_obj::__CreateEmpty() { return  new ZPP_PubPool_obj; }
hx::ObjectPtr< ZPP_PubPool_obj > ZPP_PubPool_obj::__new()
{  hx::ObjectPtr< ZPP_PubPool_obj > result = new ZPP_PubPool_obj();
	result->__construct();
	return result;}

Dynamic ZPP_PubPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PubPool_obj > result = new ZPP_PubPool_obj();
	result->__construct();
	return result;}

::nape::geom::GeomPoly ZPP_PubPool_obj::poolGeomPoly;

::nape::geom::GeomPoly ZPP_PubPool_obj::nextGeomPoly;

::nape::geom::Vec2 ZPP_PubPool_obj::poolVec2;

::nape::geom::Vec2 ZPP_PubPool_obj::nextVec2;

::nape::geom::Vec3 ZPP_PubPool_obj::poolVec3;

::nape::geom::Vec3 ZPP_PubPool_obj::nextVec3;


ZPP_PubPool_obj::ZPP_PubPool_obj()
{
}

void ZPP_PubPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PubPool);
	HX_MARK_END_CLASS();
}

void ZPP_PubPool_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_PubPool_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"poolVec2") ) { return poolVec2; }
		if (HX_FIELD_EQ(inName,"nextVec2") ) { return nextVec2; }
		if (HX_FIELD_EQ(inName,"poolVec3") ) { return poolVec3; }
		if (HX_FIELD_EQ(inName,"nextVec3") ) { return nextVec3; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"poolGeomPoly") ) { return poolGeomPoly; }
		if (HX_FIELD_EQ(inName,"nextGeomPoly") ) { return nextGeomPoly; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_PubPool_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"poolVec2") ) { poolVec2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextVec2") ) { nextVec2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"poolVec3") ) { poolVec3=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextVec3") ) { nextVec3=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"poolGeomPoly") ) { poolGeomPoly=inValue.Cast< ::nape::geom::GeomPoly >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextGeomPoly") ) { nextGeomPoly=inValue.Cast< ::nape::geom::GeomPoly >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_PubPool_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("poolGeomPoly"),
	HX_CSTRING("nextGeomPoly"),
	HX_CSTRING("poolVec2"),
	HX_CSTRING("nextVec2"),
	HX_CSTRING("poolVec3"),
	HX_CSTRING("nextVec3"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::poolGeomPoly,"poolGeomPoly");
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::nextGeomPoly,"nextGeomPoly");
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::poolVec2,"poolVec2");
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::nextVec2,"nextVec2");
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::poolVec3,"poolVec3");
	HX_MARK_MEMBER_NAME(ZPP_PubPool_obj::nextVec3,"nextVec3");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::poolGeomPoly,"poolGeomPoly");
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::nextGeomPoly,"nextGeomPoly");
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::poolVec2,"poolVec2");
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::nextVec2,"nextVec2");
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::poolVec3,"poolVec3");
	HX_VISIT_MEMBER_NAME(ZPP_PubPool_obj::nextVec3,"nextVec3");
};

Class ZPP_PubPool_obj::__mClass;

void ZPP_PubPool_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_PubPool"), hx::TCanCast< ZPP_PubPool_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_PubPool_obj::__boot()
{
	poolGeomPoly= null();
	nextGeomPoly= null();
	poolVec2= null();
	nextVec2= null();
	poolVec3= null();
	nextVec3= null();
}

} // end namespace zpp_nape
} // end namespace util
