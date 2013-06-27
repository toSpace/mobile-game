#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_ConvexResult
#include <nape/geom/ConvexResult.h>
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
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_ConvexRayResult_obj::__construct()
{
HX_STACK_PUSH("ZPP_ConvexRayResult::new","zpp_nape/geom/ConvexRayResult.hx",174);
{
	HX_STACK_LINE(184)
	this->toiDistance = 0.0;
	HX_STACK_LINE(183)
	this->next = null();
	HX_STACK_LINE(182)
	this->inner = false;
	HX_STACK_LINE(181)
	this->ray = null();
	HX_STACK_LINE(179)
	this->position = null();
	HX_STACK_LINE(178)
	this->convex = null();
	HX_STACK_LINE(176)
	this->shape = null();
	HX_STACK_LINE(175)
	this->normal = null();
}
;
	return null();
}

ZPP_ConvexRayResult_obj::~ZPP_ConvexRayResult_obj() { }

Dynamic ZPP_ConvexRayResult_obj::__CreateEmpty() { return  new ZPP_ConvexRayResult_obj; }
hx::ObjectPtr< ZPP_ConvexRayResult_obj > ZPP_ConvexRayResult_obj::__new()
{  hx::ObjectPtr< ZPP_ConvexRayResult_obj > result = new ZPP_ConvexRayResult_obj();
	result->__construct();
	return result;}

Dynamic ZPP_ConvexRayResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ConvexRayResult_obj > result = new ZPP_ConvexRayResult_obj();
	result->__construct();
	return result;}

Void ZPP_ConvexRayResult_obj::free( ){
{
		HX_STACK_PUSH("ZPP_ConvexRayResult::free","zpp_nape/geom/ConvexRayResult.hx",239);
		HX_STACK_THIS(this);
		HX_STACK_LINE(240)
		this->normal->zpp_inner->_immutable = false;
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			::nape::geom::Vec2 _this = this->normal;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(241)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(241)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(241)
				if ((_this1->_immutable)){
					HX_STACK_LINE(241)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(241)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(241)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(241)
			if ((_this->zpp_inner->_inuse)){
				HX_STACK_LINE(241)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(241)
			::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(241)
			_this->zpp_inner->outer = null();
			HX_STACK_LINE(241)
			_this->zpp_inner = null();
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(241)
				o->zpp_pool = null();
				HX_STACK_LINE(241)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(241)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(241)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(241)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(241)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					if (((o->outer != null()))){
						HX_STACK_LINE(241)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(241)
						o->outer = null();
					}
					HX_STACK_LINE(241)
					o->_isimmutable = null();
					HX_STACK_LINE(241)
					o->_validate = null();
					HX_STACK_LINE(241)
					o->_invalidate = null();
				}
				HX_STACK_LINE(241)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(241)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(242)
		if (((this->position != null()))){
			HX_STACK_LINE(243)
			this->position->zpp_inner->_immutable = false;
			HX_STACK_LINE(244)
			{
				HX_STACK_LINE(244)
				::nape::geom::Vec2 _this = this->position;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(244)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(244)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(244)
					if ((_this1->_immutable)){
						HX_STACK_LINE(244)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(244)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(244)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(244)
				if ((_this->zpp_inner->_inuse)){
					HX_STACK_LINE(244)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(244)
				::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(244)
				_this->zpp_inner->outer = null();
				HX_STACK_LINE(244)
				_this->zpp_inner = null();
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(244)
					o->zpp_pool = null();
					HX_STACK_LINE(244)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(244)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(244)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(244)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(244)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(244)
					{
						HX_STACK_LINE(244)
						if (((o->outer != null()))){
							HX_STACK_LINE(244)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(244)
							o->outer = null();
						}
						HX_STACK_LINE(244)
						o->_isimmutable = null();
						HX_STACK_LINE(244)
						o->_validate = null();
						HX_STACK_LINE(244)
						o->_invalidate = null();
					}
					HX_STACK_LINE(244)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(244)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(246)
		this->shape = null();
		HX_STACK_LINE(247)
		this->toiDistance = 0.0;
		HX_STACK_LINE(248)
		if (((this->convex != null()))){
			HX_STACK_LINE(249)
			this->next = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::convexPool;
			HX_STACK_LINE(250)
			::zpp_nape::geom::ZPP_ConvexRayResult_obj::convexPool = hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(253)
			this->next = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::rayPool;
			HX_STACK_LINE(254)
			::zpp_nape::geom::ZPP_ConvexRayResult_obj::rayPool = hx::ObjectPtr<OBJ_>(this);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConvexRayResult_obj,free,(void))

Void ZPP_ConvexRayResult_obj::disposed( ){
{
		HX_STACK_PUSH("ZPP_ConvexRayResult::disposed","zpp_nape/geom/ConvexRayResult.hx",234);
		HX_STACK_THIS(this);
		HX_STACK_LINE(234)
		if (((this->next != null()))){
			HX_STACK_LINE(236)
			hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConvexRayResult_obj,disposed,(void))

::zpp_nape::geom::ZPP_ConvexRayResult ZPP_ConvexRayResult_obj::convexPool;

::zpp_nape::geom::ZPP_ConvexRayResult ZPP_ConvexRayResult_obj::rayPool;

bool ZPP_ConvexRayResult_obj::internal;

::nape::geom::RayResult ZPP_ConvexRayResult_obj::getRay( ::nape::geom::Vec2 normal,Float time,bool inner,::nape::shape::Shape shape){
	HX_STACK_PUSH("ZPP_ConvexRayResult::getRay","zpp_nape/geom/ConvexRayResult.hx",187);
	HX_STACK_ARG(normal,"normal");
	HX_STACK_ARG(time,"time");
	HX_STACK_ARG(inner,"inner");
	HX_STACK_ARG(shape,"shape");
	HX_STACK_LINE(188)
	::nape::geom::RayResult ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(189)
	if (((::zpp_nape::geom::ZPP_ConvexRayResult_obj::rayPool == null()))){
		HX_STACK_LINE(190)
		::zpp_nape::geom::ZPP_ConvexRayResult_obj::internal = true;
		HX_STACK_LINE(191)
		ret = ::nape::geom::RayResult_obj::__new();
		HX_STACK_LINE(192)
		ret->zpp_inner = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::__new();
		HX_STACK_LINE(193)
		ret->zpp_inner->ray = ret;
		HX_STACK_LINE(194)
		::zpp_nape::geom::ZPP_ConvexRayResult_obj::internal = false;
	}
	else{
		HX_STACK_LINE(197)
		ret = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::rayPool->ray;
		HX_STACK_LINE(198)
		::zpp_nape::geom::ZPP_ConvexRayResult_obj::rayPool = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::rayPool->next;
		HX_STACK_LINE(199)
		ret->zpp_inner->next = null();
	}
	HX_STACK_LINE(201)
	::zpp_nape::geom::ZPP_ConvexRayResult zinner = ret->zpp_inner;		HX_STACK_VAR(zinner,"zinner");
	HX_STACK_LINE(202)
	zinner->normal = normal;
	HX_STACK_LINE(203)
	normal->zpp_inner->_immutable = true;
	HX_STACK_LINE(204)
	zinner->toiDistance = time;
	HX_STACK_LINE(205)
	zinner->inner = inner;
	HX_STACK_LINE(206)
	zinner->shape = shape;
	HX_STACK_LINE(207)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_ConvexRayResult_obj,getRay,return )

::nape::geom::ConvexResult ZPP_ConvexRayResult_obj::getConvex( ::nape::geom::Vec2 normal,::nape::geom::Vec2 position,Float toiDistance,::nape::shape::Shape shape){
	HX_STACK_PUSH("ZPP_ConvexRayResult::getConvex","zpp_nape/geom/ConvexRayResult.hx",209);
	HX_STACK_ARG(normal,"normal");
	HX_STACK_ARG(position,"position");
	HX_STACK_ARG(toiDistance,"toiDistance");
	HX_STACK_ARG(shape,"shape");
	HX_STACK_LINE(210)
	::nape::geom::ConvexResult ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(211)
	if (((::zpp_nape::geom::ZPP_ConvexRayResult_obj::convexPool == null()))){
		HX_STACK_LINE(212)
		::zpp_nape::geom::ZPP_ConvexRayResult_obj::internal = true;
		HX_STACK_LINE(213)
		ret = ::nape::geom::ConvexResult_obj::__new();
		HX_STACK_LINE(214)
		ret->zpp_inner = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::__new();
		HX_STACK_LINE(215)
		ret->zpp_inner->convex = ret;
		HX_STACK_LINE(216)
		::zpp_nape::geom::ZPP_ConvexRayResult_obj::internal = false;
	}
	else{
		HX_STACK_LINE(219)
		ret = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::convexPool->convex;
		HX_STACK_LINE(220)
		::zpp_nape::geom::ZPP_ConvexRayResult_obj::convexPool = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::convexPool->next;
		HX_STACK_LINE(221)
		ret->zpp_inner->next = null();
	}
	HX_STACK_LINE(223)
	::zpp_nape::geom::ZPP_ConvexRayResult inner = ret->zpp_inner;		HX_STACK_VAR(inner,"inner");
	HX_STACK_LINE(224)
	inner->normal = normal;
	HX_STACK_LINE(225)
	inner->position = position;
	HX_STACK_LINE(226)
	normal->zpp_inner->_immutable = true;
	HX_STACK_LINE(227)
	position->zpp_inner->_immutable = true;
	HX_STACK_LINE(228)
	inner->toiDistance = toiDistance;
	HX_STACK_LINE(229)
	inner->shape = shape;
	HX_STACK_LINE(230)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_ConvexRayResult_obj,getConvex,return )


ZPP_ConvexRayResult_obj::ZPP_ConvexRayResult_obj()
{
}

void ZPP_ConvexRayResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ConvexRayResult);
	HX_MARK_MEMBER_NAME(toiDistance,"toiDistance");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(inner,"inner");
	HX_MARK_MEMBER_NAME(ray,"ray");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(convex,"convex");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_END_CLASS();
}

void ZPP_ConvexRayResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(toiDistance,"toiDistance");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(inner,"inner");
	HX_VISIT_MEMBER_NAME(ray,"ray");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(convex,"convex");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(normal,"normal");
}

Dynamic ZPP_ConvexRayResult_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getRay") ) { return getRay_dyn(); }
		if (HX_FIELD_EQ(inName,"convex") ) { return convex; }
		if (HX_FIELD_EQ(inName,"normal") ) { return normal; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayPool") ) { return rayPool; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { return internal; }
		if (HX_FIELD_EQ(inName,"disposed") ) { return disposed_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getConvex") ) { return getConvex_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"convexPool") ) { return convexPool; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toiDistance") ) { return toiDistance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_ConvexRayResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { ray=inValue.Cast< ::nape::geom::RayResult >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_ConvexRayResult >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::nape::shape::Shape >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"convex") ) { convex=inValue.Cast< ::nape::geom::ConvexResult >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayPool") ) { rayPool=inValue.Cast< ::zpp_nape::geom::ZPP_ConvexRayResult >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"convexPool") ) { convexPool=inValue.Cast< ::zpp_nape::geom::ZPP_ConvexRayResult >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toiDistance") ) { toiDistance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_ConvexRayResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("toiDistance"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("inner"));
	outFields->push(HX_CSTRING("ray"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("convex"));
	outFields->push(HX_CSTRING("shape"));
	outFields->push(HX_CSTRING("normal"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("convexPool"),
	HX_CSTRING("rayPool"),
	HX_CSTRING("internal"),
	HX_CSTRING("getRay"),
	HX_CSTRING("getConvex"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("free"),
	HX_CSTRING("disposed"),
	HX_CSTRING("toiDistance"),
	HX_CSTRING("next"),
	HX_CSTRING("inner"),
	HX_CSTRING("ray"),
	HX_CSTRING("position"),
	HX_CSTRING("convex"),
	HX_CSTRING("shape"),
	HX_CSTRING("normal"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ConvexRayResult_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_ConvexRayResult_obj::convexPool,"convexPool");
	HX_MARK_MEMBER_NAME(ZPP_ConvexRayResult_obj::rayPool,"rayPool");
	HX_MARK_MEMBER_NAME(ZPP_ConvexRayResult_obj::internal,"internal");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ConvexRayResult_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_ConvexRayResult_obj::convexPool,"convexPool");
	HX_VISIT_MEMBER_NAME(ZPP_ConvexRayResult_obj::rayPool,"rayPool");
	HX_VISIT_MEMBER_NAME(ZPP_ConvexRayResult_obj::internal,"internal");
};

Class ZPP_ConvexRayResult_obj::__mClass;

void ZPP_ConvexRayResult_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_ConvexRayResult"), hx::TCanCast< ZPP_ConvexRayResult_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_ConvexRayResult_obj::__boot()
{
	convexPool= null();
	rayPool= null();
	internal= false;
}

} // end namespace zpp_nape
} // end namespace geom
