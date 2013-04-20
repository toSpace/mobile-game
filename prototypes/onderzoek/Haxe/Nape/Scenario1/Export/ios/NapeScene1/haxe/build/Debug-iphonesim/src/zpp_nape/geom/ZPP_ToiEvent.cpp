#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_ToiEvent_obj::__construct()
{
HX_STACK_PUSH("ZPP_ToiEvent::new","zpp_nape/geom/SweepDistance.hx",174);
{
	HX_STACK_LINE(221)
	this->kinematic = false;
	HX_STACK_LINE(220)
	this->failed = false;
	HX_STACK_LINE(219)
	this->slipped = false;
	HX_STACK_LINE(218)
	this->axis = null();
	HX_STACK_LINE(217)
	this->c2 = null();
	HX_STACK_LINE(216)
	this->c1 = null();
	HX_STACK_LINE(215)
	this->frozen2 = false;
	HX_STACK_LINE(214)
	this->frozen1 = false;
	HX_STACK_LINE(213)
	this->arbiter = null();
	HX_STACK_LINE(212)
	this->s2 = null();
	HX_STACK_LINE(211)
	this->s1 = null();
	HX_STACK_LINE(210)
	this->toi = 0.0;
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(223)
	this->c1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
	HX_STACK_LINE(224)
	this->c2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
	HX_STACK_LINE(225)
	this->axis = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
}
;
	return null();
}

ZPP_ToiEvent_obj::~ZPP_ToiEvent_obj() { }

Dynamic ZPP_ToiEvent_obj::__CreateEmpty() { return  new ZPP_ToiEvent_obj; }
hx::ObjectPtr< ZPP_ToiEvent_obj > ZPP_ToiEvent_obj::__new()
{  hx::ObjectPtr< ZPP_ToiEvent_obj > result = new ZPP_ToiEvent_obj();
	result->__construct();
	return result;}

Dynamic ZPP_ToiEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ToiEvent_obj > result = new ZPP_ToiEvent_obj();
	result->__construct();
	return result;}

Void ZPP_ToiEvent_obj::free( ){
{
		HX_STACK_PUSH("ZPP_ToiEvent::free","zpp_nape/geom/SweepDistance.hx",209);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ToiEvent_obj,free,(void))

Void ZPP_ToiEvent_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_ToiEvent::alloc","zpp_nape/geom/SweepDistance.hx",202);
		HX_STACK_THIS(this);
		HX_STACK_LINE(203)
		this->failed = false;
		HX_STACK_LINE(204)
		this->s1 = this->s2 = null();
		HX_STACK_LINE(205)
		this->arbiter = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ToiEvent_obj,alloc,(void))

::zpp_nape::geom::ZPP_ToiEvent ZPP_ToiEvent_obj::zpp_pool;


ZPP_ToiEvent_obj::ZPP_ToiEvent_obj()
{
}

void ZPP_ToiEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ToiEvent);
	HX_MARK_MEMBER_NAME(kinematic,"kinematic");
	HX_MARK_MEMBER_NAME(failed,"failed");
	HX_MARK_MEMBER_NAME(slipped,"slipped");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(c2,"c2");
	HX_MARK_MEMBER_NAME(c1,"c1");
	HX_MARK_MEMBER_NAME(frozen2,"frozen2");
	HX_MARK_MEMBER_NAME(frozen1,"frozen1");
	HX_MARK_MEMBER_NAME(arbiter,"arbiter");
	HX_MARK_MEMBER_NAME(s2,"s2");
	HX_MARK_MEMBER_NAME(s1,"s1");
	HX_MARK_MEMBER_NAME(toi,"toi");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_ToiEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(kinematic,"kinematic");
	HX_VISIT_MEMBER_NAME(failed,"failed");
	HX_VISIT_MEMBER_NAME(slipped,"slipped");
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(c2,"c2");
	HX_VISIT_MEMBER_NAME(c1,"c1");
	HX_VISIT_MEMBER_NAME(frozen2,"frozen2");
	HX_VISIT_MEMBER_NAME(frozen1,"frozen1");
	HX_VISIT_MEMBER_NAME(arbiter,"arbiter");
	HX_VISIT_MEMBER_NAME(s2,"s2");
	HX_VISIT_MEMBER_NAME(s1,"s1");
	HX_VISIT_MEMBER_NAME(toi,"toi");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_ToiEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"c2") ) { return c2; }
		if (HX_FIELD_EQ(inName,"c1") ) { return c1; }
		if (HX_FIELD_EQ(inName,"s2") ) { return s2; }
		if (HX_FIELD_EQ(inName,"s1") ) { return s1; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"toi") ) { return toi; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { return failed; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"slipped") ) { return slipped; }
		if (HX_FIELD_EQ(inName,"frozen2") ) { return frozen2; }
		if (HX_FIELD_EQ(inName,"frozen1") ) { return frozen1; }
		if (HX_FIELD_EQ(inName,"arbiter") ) { return arbiter; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinematic") ) { return kinematic; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_ToiEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"c2") ) { c2=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c1") ) { c1=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s2") ) { s2=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s1") ) { s1=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"toi") ) { toi=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_ToiEvent >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { failed=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"slipped") ) { slipped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frozen2") ) { frozen2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frozen1") ) { frozen1=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arbiter") ) { arbiter=inValue.Cast< ::zpp_nape::dynamics::ZPP_ColArbiter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_ToiEvent >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinematic") ) { kinematic=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_ToiEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("kinematic"));
	outFields->push(HX_CSTRING("failed"));
	outFields->push(HX_CSTRING("slipped"));
	outFields->push(HX_CSTRING("axis"));
	outFields->push(HX_CSTRING("c2"));
	outFields->push(HX_CSTRING("c1"));
	outFields->push(HX_CSTRING("frozen2"));
	outFields->push(HX_CSTRING("frozen1"));
	outFields->push(HX_CSTRING("arbiter"));
	outFields->push(HX_CSTRING("s2"));
	outFields->push(HX_CSTRING("s1"));
	outFields->push(HX_CSTRING("toi"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("kinematic"),
	HX_CSTRING("failed"),
	HX_CSTRING("slipped"),
	HX_CSTRING("axis"),
	HX_CSTRING("c2"),
	HX_CSTRING("c1"),
	HX_CSTRING("frozen2"),
	HX_CSTRING("frozen1"),
	HX_CSTRING("arbiter"),
	HX_CSTRING("s2"),
	HX_CSTRING("s1"),
	HX_CSTRING("toi"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ToiEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_ToiEvent_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ToiEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_ToiEvent_obj::zpp_pool,"zpp_pool");
};

Class ZPP_ToiEvent_obj::__mClass;

void ZPP_ToiEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_ToiEvent"), hx::TCanCast< ZPP_ToiEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_ToiEvent_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
