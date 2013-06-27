#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepData
#include <zpp_nape/space/ZPP_SweepData.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_SweepData_obj::__construct()
{
HX_STACK_PUSH("ZPP_SweepData::new","zpp_nape/space/SweepPhase.hx",174);
{
	HX_STACK_LINE(202)
	this->aabb = null();
	HX_STACK_LINE(201)
	this->shape = null();
	HX_STACK_LINE(200)
	this->prev = null();
	HX_STACK_LINE(175)
	this->next = null();
}
;
	return null();
}

ZPP_SweepData_obj::~ZPP_SweepData_obj() { }

Dynamic ZPP_SweepData_obj::__CreateEmpty() { return  new ZPP_SweepData_obj; }
hx::ObjectPtr< ZPP_SweepData_obj > ZPP_SweepData_obj::__new()
{  hx::ObjectPtr< ZPP_SweepData_obj > result = new ZPP_SweepData_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SweepData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SweepData_obj > result = new ZPP_SweepData_obj();
	result->__construct();
	return result;}

bool ZPP_SweepData_obj::gt( ::zpp_nape::space::ZPP_SweepData x){
	HX_STACK_PUSH("ZPP_SweepData::gt","zpp_nape/space/SweepPhase.hx",216);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(216)
	return (this->aabb->minx > x->aabb->minx);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SweepData_obj,gt,return )

Void ZPP_SweepData_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_SweepData::alloc","zpp_nape/space/SweepPhase.hx",212);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SweepData_obj,alloc,(void))

Void ZPP_SweepData_obj::free( ){
{
		HX_STACK_PUSH("ZPP_SweepData::free","zpp_nape/space/SweepPhase.hx",205);
		HX_STACK_THIS(this);
		HX_STACK_LINE(206)
		this->prev = null();
		HX_STACK_LINE(207)
		this->shape = null();
		HX_STACK_LINE(208)
		this->aabb = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SweepData_obj,free,(void))

::zpp_nape::space::ZPP_SweepData ZPP_SweepData_obj::zpp_pool;


ZPP_SweepData_obj::ZPP_SweepData_obj()
{
}

void ZPP_SweepData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SweepData);
	HX_MARK_MEMBER_NAME(aabb,"aabb");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_SweepData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(aabb,"aabb");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_SweepData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gt") ) { return gt_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SweepData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"aabb") ) { aabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::space::ZPP_SweepData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_SweepData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::space::ZPP_SweepData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SweepData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("aabb"));
	outFields->push(HX_CSTRING("shape"));
	outFields->push(HX_CSTRING("prev"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("gt"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("aabb"),
	HX_CSTRING("shape"),
	HX_CSTRING("prev"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SweepData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SweepData_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SweepData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SweepData_obj::zpp_pool,"zpp_pool");
};

Class ZPP_SweepData_obj::__mClass;

void ZPP_SweepData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_SweepData"), hx::TCanCast< ZPP_SweepData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_SweepData_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
