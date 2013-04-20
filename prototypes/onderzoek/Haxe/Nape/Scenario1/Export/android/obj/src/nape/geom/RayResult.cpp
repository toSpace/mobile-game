#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#endif
namespace nape{
namespace geom{

Void RayResult_obj::__construct()
{
HX_STACK_PUSH("RayResult::new","nape/geom/RayResult.hx",180);
{
	HX_STACK_LINE(184)
	this->zpp_inner = null();
	HX_STACK_LINE(234)
	if ((!(::zpp_nape::geom::ZPP_ConvexRayResult_obj::internal))){
		HX_STACK_LINE(236)
		hx::Throw (HX_CSTRING("Error: RayResult cannot be instantiated derp!"));
	}
}
;
	return null();
}

RayResult_obj::~RayResult_obj() { }

Dynamic RayResult_obj::__CreateEmpty() { return  new RayResult_obj; }
hx::ObjectPtr< RayResult_obj > RayResult_obj::__new()
{  hx::ObjectPtr< RayResult_obj > result = new RayResult_obj();
	result->__construct();
	return result;}

Dynamic RayResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RayResult_obj > result = new RayResult_obj();
	result->__construct();
	return result;}

::String RayResult_obj::toString( ){
	HX_STACK_PUSH("RayResult::toString","nape/geom/RayResult.hx",252);
	HX_STACK_THIS(this);
	HX_STACK_LINE(254)
	if (((this->zpp_inner->next != null()))){
		HX_STACK_LINE(254)
		hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
	}
	struct _Function_1_1{
		inline static ::nape::shape::Shape Block( ::nape::geom::RayResult_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/RayResult.hx",256);
			{
				HX_STACK_LINE(256)
				if (((__this->zpp_inner->next != null()))){
					HX_STACK_LINE(256)
					hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
				}
				HX_STACK_LINE(256)
				return __this->zpp_inner->shape;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::RayResult_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/RayResult.hx",256);
			{
				HX_STACK_LINE(256)
				if (((__this->zpp_inner->next != null()))){
					HX_STACK_LINE(256)
					hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
				}
				HX_STACK_LINE(256)
				return __this->zpp_inner->toiDistance;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( ::nape::geom::RayResult_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/RayResult.hx",256);
			{
				HX_STACK_LINE(256)
				if (((__this->zpp_inner->next != null()))){
					HX_STACK_LINE(256)
					hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
				}
				HX_STACK_LINE(256)
				return __this->zpp_inner->inner;
			}
			return null();
		}
	};
	HX_STACK_LINE(256)
	return ((((((HX_CSTRING("{ shape: ") + ::Std_obj::string(_Function_1_1::Block(this))) + HX_CSTRING(" distance: ")) + _Function_1_2::Block(this)) + HX_CSTRING(" ?inner: ")) + ::Std_obj::string(_Function_1_3::Block(this))) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,toString,return )

Void RayResult_obj::dispose( ){
{
		HX_STACK_PUSH("RayResult::dispose","nape/geom/RayResult.hx",243);
		HX_STACK_THIS(this);
		HX_STACK_LINE(245)
		if (((this->zpp_inner->next != null()))){
			HX_STACK_LINE(245)
			hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
		}
		HX_STACK_LINE(247)
		this->zpp_inner->free();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,dispose,(void))

::nape::shape::Shape RayResult_obj::get_shape( ){
	HX_STACK_PUSH("RayResult::get_shape","nape/geom/RayResult.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_LINE(225)
	if (((this->zpp_inner->next != null()))){
		HX_STACK_LINE(225)
		hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
	}
	HX_STACK_LINE(227)
	return this->zpp_inner->shape;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,get_shape,return )

bool RayResult_obj::get_inner( ){
	HX_STACK_PUSH("RayResult::get_inner","nape/geom/RayResult.hx",212);
	HX_STACK_THIS(this);
	HX_STACK_LINE(214)
	if (((this->zpp_inner->next != null()))){
		HX_STACK_LINE(214)
		hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
	}
	HX_STACK_LINE(216)
	return this->zpp_inner->inner;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,get_inner,return )

Float RayResult_obj::get_distance( ){
	HX_STACK_PUSH("RayResult::get_distance","nape/geom/RayResult.hx",201);
	HX_STACK_THIS(this);
	HX_STACK_LINE(203)
	if (((this->zpp_inner->next != null()))){
		HX_STACK_LINE(203)
		hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
	}
	HX_STACK_LINE(205)
	return this->zpp_inner->toiDistance;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,get_distance,return )

::nape::geom::Vec2 RayResult_obj::get_normal( ){
	HX_STACK_PUSH("RayResult::get_normal","nape/geom/RayResult.hx",190);
	HX_STACK_THIS(this);
	HX_STACK_LINE(192)
	if (((this->zpp_inner->next != null()))){
		HX_STACK_LINE(192)
		hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
	}
	HX_STACK_LINE(194)
	return this->zpp_inner->normal;
}


HX_DEFINE_DYNAMIC_FUNC0(RayResult_obj,get_normal,return )


RayResult_obj::RayResult_obj()
{
}

void RayResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RayResult);
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(inner,"inner");
	HX_MARK_MEMBER_NAME(distance,"distance");
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void RayResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(inner,"inner");
	HX_VISIT_MEMBER_NAME(distance,"distance");
	HX_VISIT_MEMBER_NAME(normal,"normal");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic RayResult_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return inCallProp ? get_shape() : shape; }
		if (HX_FIELD_EQ(inName,"inner") ) { return inCallProp ? get_inner() : inner; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return inCallProp ? get_normal() : normal; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"distance") ) { return inCallProp ? get_distance() : distance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_shape") ) { return get_shape_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inner") ) { return get_inner_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_normal") ) { return get_normal_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RayResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::nape::shape::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_ConvexRayResult >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RayResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("shape"));
	outFields->push(HX_CSTRING("inner"));
	outFields->push(HX_CSTRING("distance"));
	outFields->push(HX_CSTRING("normal"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("dispose"),
	HX_CSTRING("get_shape"),
	HX_CSTRING("shape"),
	HX_CSTRING("get_inner"),
	HX_CSTRING("inner"),
	HX_CSTRING("get_distance"),
	HX_CSTRING("distance"),
	HX_CSTRING("get_normal"),
	HX_CSTRING("normal"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RayResult_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RayResult_obj::__mClass,"__mClass");
};

Class RayResult_obj::__mClass;

void RayResult_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.RayResult"), hx::TCanCast< RayResult_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RayResult_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
