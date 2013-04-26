#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResult
#include <nape/geom/ConvexResult.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultList
#include <nape/geom/ConvexResultList.h>
#endif
#ifndef INCLUDED_nape_geom_Ray
#include <nape/geom/Ray.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultList
#include <nape/geom/RayResultList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundIterator
#include <nape/phys/CompoundIterator.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundList
#include <nape/phys/CompoundList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeIterator
#include <nape/shape/ShapeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_shape_ValidationResult
#include <nape/shape/ValidationResult.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SpaceArbiterList
#include <zpp_nape/dynamics/ZPP_SpaceArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CompoundList
#include <zpp_nape/util/ZPP_CompoundList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace space{

Void Space_obj::__construct(::nape::geom::Vec2 gravity,::nape::space::Broadphase broadphase)
{
HX_STACK_PUSH("Space::new","nape/space/Space.hx",177);
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(539)
	if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
		HX_STACK_LINE(541)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(544)
	this->zpp_inner = ::zpp_nape::space::ZPP_Space_obj::__new((  (((gravity == null()))) ? ::zpp_nape::geom::ZPP_Vec2(null()) : ::zpp_nape::geom::ZPP_Vec2(gravity->zpp_inner) ),broadphase);
	HX_STACK_LINE(545)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(546)
	if (((gravity != null()))){
		HX_STACK_LINE(546)
		if ((gravity->zpp_inner->weak)){
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
					HX_STACK_LINE(550)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					::zpp_nape::geom::ZPP_Vec2 _this = gravity->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(550)
					if ((_this->_immutable)){
						HX_STACK_LINE(550)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(550)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(550)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(550)
				if ((gravity->zpp_inner->_inuse)){
					HX_STACK_LINE(550)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(550)
				::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(550)
				gravity->zpp_inner->outer = null();
				HX_STACK_LINE(550)
				gravity->zpp_inner = null();
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(550)
					{
					}
					HX_STACK_LINE(550)
					o->zpp_pool = null();
					HX_STACK_LINE(550)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(550)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(550)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(550)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(550)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(550)
					{
					}
					HX_STACK_LINE(550)
					{
						HX_STACK_LINE(550)
						if (((o->outer != null()))){
							HX_STACK_LINE(550)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(550)
							o->outer = null();
						}
						HX_STACK_LINE(550)
						o->_isimmutable = null();
						HX_STACK_LINE(550)
						o->_validate = null();
						HX_STACK_LINE(550)
						o->_invalidate = null();
					}
					HX_STACK_LINE(550)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(550)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(551)
			true;
		}
		else{
			HX_STACK_LINE(553)
			false;
		}
	}
}
;
	return null();
}

Space_obj::~Space_obj() { }

Dynamic Space_obj::__CreateEmpty() { return  new Space_obj; }
hx::ObjectPtr< Space_obj > Space_obj::__new(::nape::geom::Vec2 gravity,::nape::space::Broadphase broadphase)
{  hx::ObjectPtr< Space_obj > result = new Space_obj();
	result->__construct(gravity,broadphase);
	return result;}

Dynamic Space_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Space_obj > result = new Space_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::nape::geom::RayResultList Space_obj::rayMultiCast( ::nape::geom::Ray ray,hx::Null< bool >  __o_inner,::nape::dynamics::InteractionFilter filter,::nape::geom::RayResultList output){
bool inner = __o_inner.Default(false);
	HX_STACK_PUSH("Space::rayMultiCast","nape/space/Space.hx",1048);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ray,"ray");
	HX_STACK_ARG(inner,"inner");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
{
		HX_STACK_LINE(1050)
		if (((ray == null()))){
			HX_STACK_LINE(1050)
			hx::Throw (HX_CSTRING("Error: Cannot cast null ray :)"));
		}
		HX_STACK_LINE(1052)
		return this->zpp_inner->rayMultiCast(ray,inner,filter,output);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Space_obj,rayMultiCast,return )

::nape::geom::RayResult Space_obj::rayCast( ::nape::geom::Ray ray,hx::Null< bool >  __o_inner,::nape::dynamics::InteractionFilter filter){
bool inner = __o_inner.Default(false);
	HX_STACK_PUSH("Space::rayCast","nape/space/Space.hx",1023);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ray,"ray");
	HX_STACK_ARG(inner,"inner");
	HX_STACK_ARG(filter,"filter");
{
		HX_STACK_LINE(1025)
		if (((ray == null()))){
			HX_STACK_LINE(1025)
			hx::Throw (HX_CSTRING("Error: Cannot cast null ray :)"));
		}
		HX_STACK_LINE(1027)
		return this->zpp_inner->rayCast(ray,inner,filter);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,rayCast,return )

::nape::geom::ConvexResultList Space_obj::convexMultiCast( ::nape::shape::Shape shape,Float deltaTime,hx::Null< bool >  __o_liveSweep,::nape::dynamics::InteractionFilter filter,::nape::geom::ConvexResultList output){
bool liveSweep = __o_liveSweep.Default(false);
	HX_STACK_PUSH("Space::convexMultiCast","nape/space/Space.hx",992);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(deltaTime,"deltaTime");
	HX_STACK_ARG(liveSweep,"liveSweep");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
{
		HX_STACK_LINE(994)
		if (((shape == null()))){
			HX_STACK_LINE(994)
			hx::Throw (HX_CSTRING("Error: Cannot cast null shape :)"));
		}
		HX_STACK_LINE(997)
		if (((((  (((shape->zpp_inner->body != null()))) ? ::nape::phys::Body(shape->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null()))){
			HX_STACK_LINE(997)
			hx::Throw (HX_CSTRING("Error: Shape must belong to a body to be cast."));
		}
		HX_STACK_LINE(1000)
		if (((bool((deltaTime < (int)0)) || bool((deltaTime != deltaTime))))){
			HX_STACK_LINE(1000)
			hx::Throw (HX_CSTRING("Error: deltaTime must be positive"));
		}
		HX_STACK_LINE(1002)
		return this->zpp_inner->convexMultiCast(shape->zpp_inner,deltaTime,filter,liveSweep,output);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,convexMultiCast,return )

::nape::geom::ConvexResult Space_obj::convexCast( ::nape::shape::Shape shape,Float deltaTime,hx::Null< bool >  __o_liveSweep,::nape::dynamics::InteractionFilter filter){
bool liveSweep = __o_liveSweep.Default(false);
	HX_STACK_PUSH("Space::convexCast","nape/space/Space.hx",957);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(deltaTime,"deltaTime");
	HX_STACK_ARG(liveSweep,"liveSweep");
	HX_STACK_ARG(filter,"filter");
{
		HX_STACK_LINE(959)
		if (((shape == null()))){
			HX_STACK_LINE(959)
			hx::Throw (HX_CSTRING("Error: Cannot cast null shape :)"));
		}
		HX_STACK_LINE(962)
		if (((((  (((shape->zpp_inner->body != null()))) ? ::nape::phys::Body(shape->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null()))){
			HX_STACK_LINE(962)
			hx::Throw (HX_CSTRING("Error: Shape must belong to a body to be cast."));
		}
		HX_STACK_LINE(965)
		if (((bool((deltaTime < (int)0)) || bool((deltaTime != deltaTime))))){
			HX_STACK_LINE(965)
			hx::Throw (HX_CSTRING("Error: deltaTime must be positive"));
		}
		HX_STACK_LINE(967)
		return this->zpp_inner->convexCast(shape->zpp_inner,deltaTime,filter,liveSweep);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Space_obj,convexCast,return )

::nape::phys::BodyList Space_obj::bodiesInBody( ::nape::phys::Body body,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("Space::bodiesInBody","nape/space/Space.hx",924);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(926)
	if (((body == null()))){
		HX_STACK_LINE(926)
		hx::Throw (HX_CSTRING("Error: Cannot evaluate shapes in null body"));
	}
	HX_STACK_LINE(928)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	struct _Function_1_1{
		inline static Dynamic Block( ::nape::phys::Body &body){
			HX_STACK_PUSH("*::closure","nape/space/Space.hx",929);
			{
				HX_STACK_LINE(929)
				::nape::shape::ShapeList _this = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(929)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(929)
				return ::nape::shape::ShapeIterator_obj::get(_this);
			}
			return null();
		}
	};
	HX_STACK_LINE(929)
	for(::cpp::FastIterator_obj< ::nape::shape::Shape > *__it = ::cpp::CreateFastIterator< ::nape::shape::Shape >(_Function_1_1::Block(body));  __it->hasNext(); ){
		::nape::shape::Shape shape = __it->next();
		{
			HX_STACK_LINE(929)
			::nape::phys::BodyList cur = this->bodiesInShape(shape,false,filter,ret);		HX_STACK_VAR(cur,"cur");
		}
;
	}
	HX_STACK_LINE(932)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,bodiesInBody,return )

::nape::shape::ShapeList Space_obj::shapesInBody( ::nape::phys::Body body,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("Space::shapesInBody","nape/space/Space.hx",898);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(900)
	if (((body == null()))){
		HX_STACK_LINE(900)
		hx::Throw (HX_CSTRING("Error: Cannot evaluate shapes in null body"));
	}
	HX_STACK_LINE(902)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	struct _Function_1_1{
		inline static Dynamic Block( ::nape::phys::Body &body){
			HX_STACK_PUSH("*::closure","nape/space/Space.hx",903);
			{
				HX_STACK_LINE(903)
				::nape::shape::ShapeList _this = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(903)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(903)
				return ::nape::shape::ShapeIterator_obj::get(_this);
			}
			return null();
		}
	};
	HX_STACK_LINE(903)
	for(::cpp::FastIterator_obj< ::nape::shape::Shape > *__it = ::cpp::CreateFastIterator< ::nape::shape::Shape >(_Function_1_1::Block(body));  __it->hasNext(); ){
		::nape::shape::Shape shape = __it->next();
		{
			HX_STACK_LINE(903)
			::nape::shape::ShapeList cur = this->shapesInShape(shape,false,filter,ret);		HX_STACK_VAR(cur,"cur");
		}
;
	}
	HX_STACK_LINE(906)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,shapesInBody,return )

::nape::phys::BodyList Space_obj::bodiesInShape( ::nape::shape::Shape shape,hx::Null< bool >  __o_containment,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
bool containment = __o_containment.Default(false);
	HX_STACK_PUSH("Space::bodiesInShape","nape/space/Space.hx",870);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
{
		HX_STACK_LINE(872)
		if (((shape == null()))){
			HX_STACK_LINE(872)
			hx::Throw (HX_CSTRING("Error: Cannot evaluate bodies in a null shapes :)"));
		}
		HX_STACK_LINE(873)
		if (((((  (((shape->zpp_inner->body != null()))) ? ::nape::phys::Body(shape->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null()))){
			HX_STACK_LINE(873)
			hx::Throw (HX_CSTRING("Error: Query shape needs to be inside a Body to be well defined :)"));
		}
		HX_STACK_LINE(874)
		if (((shape->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
			HX_STACK_LINE(875)
			::nape::shape::ValidationResult res = shape->zpp_inner->polygon->valid();		HX_STACK_VAR(res,"res");
			struct _Function_2_1{
				inline static ::nape::shape::ValidationResult Block( ){
					HX_STACK_PUSH("*::closure","nape/space/Space.hx",876);
					{
						HX_STACK_LINE(876)
						if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID == null()))){
							HX_STACK_LINE(876)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(876)
							::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID = ::nape::shape::ValidationResult_obj::__new();
							HX_STACK_LINE(876)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(876)
						return ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID;
					}
					return null();
				}
			};
			HX_STACK_LINE(876)
			if (((res != _Function_2_1::Block()))){
				HX_STACK_LINE(876)
				hx::Throw ((HX_CSTRING("Error: Polygon query shape is invalid : ") + res->toString()));
			}
		}
		HX_STACK_LINE(879)
		return this->zpp_inner->bodiesInShape(shape->zpp_inner,containment,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Space_obj,bodiesInShape,return )

::nape::shape::ShapeList Space_obj::shapesInShape( ::nape::shape::Shape shape,hx::Null< bool >  __o_containment,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
bool containment = __o_containment.Default(false);
	HX_STACK_PUSH("Space::shapesInShape","nape/space/Space.hx",838);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
{
		HX_STACK_LINE(840)
		if (((shape == null()))){
			HX_STACK_LINE(840)
			hx::Throw (HX_CSTRING("Error: Cannot evaluate shapes in a null shapes :)"));
		}
		HX_STACK_LINE(841)
		if (((((  (((shape->zpp_inner->body != null()))) ? ::nape::phys::Body(shape->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null()))){
			HX_STACK_LINE(841)
			hx::Throw (HX_CSTRING("Error: Query shape needs to be inside a Body to be well defined :)"));
		}
		HX_STACK_LINE(842)
		if (((shape->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
			HX_STACK_LINE(843)
			::nape::shape::ValidationResult res = shape->zpp_inner->polygon->valid();		HX_STACK_VAR(res,"res");
			struct _Function_2_1{
				inline static ::nape::shape::ValidationResult Block( ){
					HX_STACK_PUSH("*::closure","nape/space/Space.hx",844);
					{
						HX_STACK_LINE(844)
						if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID == null()))){
							HX_STACK_LINE(844)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(844)
							::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID = ::nape::shape::ValidationResult_obj::__new();
							HX_STACK_LINE(844)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(844)
						return ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID;
					}
					return null();
				}
			};
			HX_STACK_LINE(844)
			if (((res != _Function_2_1::Block()))){
				HX_STACK_LINE(844)
				hx::Throw ((HX_CSTRING("Error: Polygon query shape is invalid : ") + res->toString()));
			}
		}
		HX_STACK_LINE(847)
		return this->zpp_inner->shapesInShape(shape->zpp_inner,containment,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Space_obj,shapesInShape,return )

::nape::phys::BodyList Space_obj::bodiesInCircle( ::nape::geom::Vec2 position,Float radius,hx::Null< bool >  __o_containment,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
bool containment = __o_containment.Default(false);
	HX_STACK_PUSH("Space::bodiesInCircle","nape/space/Space.hx",791);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_ARG(radius,"radius");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
{
		HX_STACK_LINE(792)
		if (((bool((position != null())) && bool(position->zpp_disp)))){
			HX_STACK_LINE(794)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(798)
		if (((position == null()))){
			HX_STACK_LINE(798)
			hx::Throw (HX_CSTRING("Error: Cannot evaluate objects at null circle :)"));
		}
		HX_STACK_LINE(799)
		if (((radius != radius))){
			HX_STACK_LINE(799)
			hx::Throw (HX_CSTRING("Error: Circle radius cannot be NaN"));
		}
		HX_STACK_LINE(800)
		if (((radius <= (int)0))){
			HX_STACK_LINE(800)
			hx::Throw (HX_CSTRING("Error: Circle radius must be strictly positive"));
		}
		HX_STACK_LINE(802)
		::nape::phys::BodyList ret = this->zpp_inner->bodiesInCircle(position,radius,containment,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(803)
		if ((position->zpp_inner->weak)){
			HX_STACK_LINE(807)
			{
				HX_STACK_LINE(807)
				if (((bool((position != null())) && bool(position->zpp_disp)))){
					HX_STACK_LINE(807)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(807)
				{
					HX_STACK_LINE(807)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(807)
					if ((_this->_immutable)){
						HX_STACK_LINE(807)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(807)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(807)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(807)
				if ((position->zpp_inner->_inuse)){
					HX_STACK_LINE(807)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(807)
				::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(807)
				position->zpp_inner->outer = null();
				HX_STACK_LINE(807)
				position->zpp_inner = null();
				HX_STACK_LINE(807)
				{
					HX_STACK_LINE(807)
					::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(807)
					{
					}
					HX_STACK_LINE(807)
					o->zpp_pool = null();
					HX_STACK_LINE(807)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(807)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(807)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(807)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(807)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(807)
				{
					HX_STACK_LINE(807)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(807)
					{
					}
					HX_STACK_LINE(807)
					{
						HX_STACK_LINE(807)
						if (((o->outer != null()))){
							HX_STACK_LINE(807)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(807)
							o->outer = null();
						}
						HX_STACK_LINE(807)
						o->_isimmutable = null();
						HX_STACK_LINE(807)
						o->_validate = null();
						HX_STACK_LINE(807)
						o->_invalidate = null();
					}
					HX_STACK_LINE(807)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(807)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(808)
			true;
		}
		else{
			HX_STACK_LINE(810)
			false;
		}
		HX_STACK_LINE(814)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,bodiesInCircle,return )

::nape::shape::ShapeList Space_obj::shapesInCircle( ::nape::geom::Vec2 position,Float radius,hx::Null< bool >  __o_containment,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
bool containment = __o_containment.Default(false);
	HX_STACK_PUSH("Space::shapesInCircle","nape/space/Space.hx",744);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_ARG(radius,"radius");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
{
		HX_STACK_LINE(745)
		if (((bool((position != null())) && bool(position->zpp_disp)))){
			HX_STACK_LINE(747)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(751)
		if (((position == null()))){
			HX_STACK_LINE(751)
			hx::Throw (HX_CSTRING("Error: Cannot evaluate shapes at null circle :)"));
		}
		HX_STACK_LINE(752)
		if (((radius != radius))){
			HX_STACK_LINE(752)
			hx::Throw (HX_CSTRING("Error: Circle radius cannot be NaN"));
		}
		HX_STACK_LINE(753)
		if (((radius <= (int)0))){
			HX_STACK_LINE(753)
			hx::Throw (HX_CSTRING("Error: Circle radius must be strictly positive"));
		}
		HX_STACK_LINE(755)
		::nape::shape::ShapeList ret = this->zpp_inner->shapesInCircle(position,radius,containment,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(756)
		if ((position->zpp_inner->weak)){
			HX_STACK_LINE(760)
			{
				HX_STACK_LINE(760)
				if (((bool((position != null())) && bool(position->zpp_disp)))){
					HX_STACK_LINE(760)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(760)
				{
					HX_STACK_LINE(760)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(760)
					if ((_this->_immutable)){
						HX_STACK_LINE(760)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(760)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(760)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(760)
				if ((position->zpp_inner->_inuse)){
					HX_STACK_LINE(760)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(760)
				::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(760)
				position->zpp_inner->outer = null();
				HX_STACK_LINE(760)
				position->zpp_inner = null();
				HX_STACK_LINE(760)
				{
					HX_STACK_LINE(760)
					::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(760)
					{
					}
					HX_STACK_LINE(760)
					o->zpp_pool = null();
					HX_STACK_LINE(760)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(760)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(760)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(760)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(760)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(760)
				{
					HX_STACK_LINE(760)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(760)
					{
					}
					HX_STACK_LINE(760)
					{
						HX_STACK_LINE(760)
						if (((o->outer != null()))){
							HX_STACK_LINE(760)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(760)
							o->outer = null();
						}
						HX_STACK_LINE(760)
						o->_isimmutable = null();
						HX_STACK_LINE(760)
						o->_validate = null();
						HX_STACK_LINE(760)
						o->_invalidate = null();
					}
					HX_STACK_LINE(760)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(760)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(761)
			true;
		}
		else{
			HX_STACK_LINE(763)
			false;
		}
		HX_STACK_LINE(767)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,shapesInCircle,return )

::nape::phys::BodyList Space_obj::bodiesInAABB( ::nape::geom::AABB aabb,hx::Null< bool >  __o_containment,hx::Null< bool >  __o_strict,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
bool containment = __o_containment.Default(false);
bool strict = __o_strict.Default(true);
	HX_STACK_PUSH("Space::bodiesInAABB","nape/space/Space.hx",718);
	HX_STACK_THIS(this);
	HX_STACK_ARG(aabb,"aabb");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(strict,"strict");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
{
		HX_STACK_LINE(720)
		if (((aabb == null()))){
			HX_STACK_LINE(720)
			hx::Throw (HX_CSTRING("Error: Cannot evaluate objects in a null AABB :)"));
		}
		struct _Function_1_1{
			inline static Float Block( ::nape::geom::AABB &aabb){
				HX_STACK_PUSH("*::closure","nape/space/Space.hx",721);
				{
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(721)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(721)
							_this->_validate();
						}
					}
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::AABB &aabb){
							HX_STACK_PUSH("*::closure","nape/space/Space.hx",721);
							{
								HX_STACK_LINE(721)
								::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(721)
								return (_this->maxx - _this->minx);
							}
							return null();
						}
					};
					HX_STACK_LINE(721)
					return _Function_2_1::Block(aabb);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( ::nape::geom::AABB &aabb){
				HX_STACK_PUSH("*::closure","nape/space/Space.hx",721);
				{
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(721)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(721)
							_this->_validate();
						}
					}
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::AABB &aabb){
							HX_STACK_PUSH("*::closure","nape/space/Space.hx",721);
							{
								HX_STACK_LINE(721)
								::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(721)
								return (_this->maxy - _this->miny);
							}
							return null();
						}
					};
					HX_STACK_LINE(721)
					return _Function_2_1::Block(aabb);
				}
				return null();
			}
		};
		HX_STACK_LINE(721)
		if (((bool((_Function_1_1::Block(aabb) == (int)0)) || bool((_Function_1_2::Block(aabb) == (int)0))))){
			HX_STACK_LINE(721)
			hx::Throw (HX_CSTRING("Error: Cannot evaluate objects in degenerate AABB :/"));
		}
		HX_STACK_LINE(723)
		return this->zpp_inner->bodiesInAABB(aabb,strict,containment,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,bodiesInAABB,return )

::nape::shape::ShapeList Space_obj::shapesInAABB( ::nape::geom::AABB aabb,hx::Null< bool >  __o_containment,hx::Null< bool >  __o_strict,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
bool containment = __o_containment.Default(false);
bool strict = __o_strict.Default(true);
	HX_STACK_PUSH("Space::shapesInAABB","nape/space/Space.hx",690);
	HX_STACK_THIS(this);
	HX_STACK_ARG(aabb,"aabb");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(strict,"strict");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
{
		HX_STACK_LINE(692)
		if (((aabb == null()))){
			HX_STACK_LINE(692)
			hx::Throw (HX_CSTRING("Error: Cannot evaluate shapes in a null AABB :)"));
		}
		struct _Function_1_1{
			inline static Float Block( ::nape::geom::AABB &aabb){
				HX_STACK_PUSH("*::closure","nape/space/Space.hx",693);
				{
					HX_STACK_LINE(693)
					{
						HX_STACK_LINE(693)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(693)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(693)
							_this->_validate();
						}
					}
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::AABB &aabb){
							HX_STACK_PUSH("*::closure","nape/space/Space.hx",693);
							{
								HX_STACK_LINE(693)
								::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(693)
								return (_this->maxx - _this->minx);
							}
							return null();
						}
					};
					HX_STACK_LINE(693)
					return _Function_2_1::Block(aabb);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( ::nape::geom::AABB &aabb){
				HX_STACK_PUSH("*::closure","nape/space/Space.hx",693);
				{
					HX_STACK_LINE(693)
					{
						HX_STACK_LINE(693)
						::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(693)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(693)
							_this->_validate();
						}
					}
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::AABB &aabb){
							HX_STACK_PUSH("*::closure","nape/space/Space.hx",693);
							{
								HX_STACK_LINE(693)
								::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(693)
								return (_this->maxy - _this->miny);
							}
							return null();
						}
					};
					HX_STACK_LINE(693)
					return _Function_2_1::Block(aabb);
				}
				return null();
			}
		};
		HX_STACK_LINE(693)
		if (((bool((_Function_1_1::Block(aabb) == (int)0)) || bool((_Function_1_2::Block(aabb) == (int)0))))){
			HX_STACK_LINE(693)
			hx::Throw (HX_CSTRING("Error: Cannot evaluate shapes in degenerate AABB :/"));
		}
		HX_STACK_LINE(695)
		return this->zpp_inner->shapesInAABB(aabb,strict,containment,(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Space_obj,shapesInAABB,return )

::nape::phys::BodyList Space_obj::bodiesUnderPoint( ::nape::geom::Vec2 point,::nape::dynamics::InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("Space::bodiesUnderPoint","nape/space/Space.hx",647);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(648)
	if (((bool((point != null())) && bool(point->zpp_disp)))){
		HX_STACK_LINE(650)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(654)
	if (((point == null()))){
		HX_STACK_LINE(654)
		hx::Throw (HX_CSTRING("Error: Cannot evaluate objects under a null point :)"));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2 &point){
			HX_STACK_PUSH("*::closure","nape/space/Space.hx",656);
			{
				HX_STACK_LINE(656)
				if (((bool((point != null())) && bool(point->zpp_disp)))){
					HX_STACK_LINE(656)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(656)
				{
					HX_STACK_LINE(656)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(656)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(656)
						_this->_validate();
					}
				}
				HX_STACK_LINE(656)
				return point->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec2 &point){
			HX_STACK_PUSH("*::closure","nape/space/Space.hx",656);
			{
				HX_STACK_LINE(656)
				if (((bool((point != null())) && bool(point->zpp_disp)))){
					HX_STACK_LINE(656)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(656)
				{
					HX_STACK_LINE(656)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(656)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(656)
						_this->_validate();
					}
				}
				HX_STACK_LINE(656)
				return point->zpp_inner->y;
			}
			return null();
		}
	};
	HX_STACK_LINE(656)
	::nape::phys::BodyList ret = this->zpp_inner->bodiesUnderPoint(_Function_1_1::Block(point),_Function_1_2::Block(point),(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(657)
	if ((point->zpp_inner->weak)){
		HX_STACK_LINE(661)
		{
			HX_STACK_LINE(661)
			if (((bool((point != null())) && bool(point->zpp_disp)))){
				HX_STACK_LINE(661)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(661)
			{
				HX_STACK_LINE(661)
				::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(661)
				if ((_this->_immutable)){
					HX_STACK_LINE(661)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(661)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(661)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(661)
			if ((point->zpp_inner->_inuse)){
				HX_STACK_LINE(661)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(661)
			::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(661)
			point->zpp_inner->outer = null();
			HX_STACK_LINE(661)
			point->zpp_inner = null();
			HX_STACK_LINE(661)
			{
				HX_STACK_LINE(661)
				::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(661)
				{
				}
				HX_STACK_LINE(661)
				o->zpp_pool = null();
				HX_STACK_LINE(661)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(661)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(661)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(661)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(661)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(661)
			{
				HX_STACK_LINE(661)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(661)
				{
				}
				HX_STACK_LINE(661)
				{
					HX_STACK_LINE(661)
					if (((o->outer != null()))){
						HX_STACK_LINE(661)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(661)
						o->outer = null();
					}
					HX_STACK_LINE(661)
					o->_isimmutable = null();
					HX_STACK_LINE(661)
					o->_validate = null();
					HX_STACK_LINE(661)
					o->_invalidate = null();
				}
				HX_STACK_LINE(661)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(661)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(662)
		true;
	}
	else{
		HX_STACK_LINE(664)
		false;
	}
	HX_STACK_LINE(668)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,bodiesUnderPoint,return )

::nape::shape::ShapeList Space_obj::shapesUnderPoint( ::nape::geom::Vec2 point,::nape::dynamics::InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("Space::shapesUnderPoint","nape/space/Space.hx",610);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(611)
	if (((bool((point != null())) && bool(point->zpp_disp)))){
		HX_STACK_LINE(613)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(617)
	if (((point == null()))){
		HX_STACK_LINE(617)
		hx::Throw (HX_CSTRING("Error: Cannot evaluate shapes under a null point :)"));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2 &point){
			HX_STACK_PUSH("*::closure","nape/space/Space.hx",619);
			{
				HX_STACK_LINE(619)
				if (((bool((point != null())) && bool(point->zpp_disp)))){
					HX_STACK_LINE(619)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(619)
				{
					HX_STACK_LINE(619)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(619)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(619)
						_this->_validate();
					}
				}
				HX_STACK_LINE(619)
				return point->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec2 &point){
			HX_STACK_PUSH("*::closure","nape/space/Space.hx",619);
			{
				HX_STACK_LINE(619)
				if (((bool((point != null())) && bool(point->zpp_disp)))){
					HX_STACK_LINE(619)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(619)
				{
					HX_STACK_LINE(619)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(619)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(619)
						_this->_validate();
					}
				}
				HX_STACK_LINE(619)
				return point->zpp_inner->y;
			}
			return null();
		}
	};
	HX_STACK_LINE(619)
	::nape::shape::ShapeList ret = this->zpp_inner->shapesUnderPoint(_Function_1_1::Block(point),_Function_1_2::Block(point),(  (((filter == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionFilter(null()) : ::zpp_nape::dynamics::ZPP_InteractionFilter(filter->zpp_inner) ),output);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(620)
	if ((point->zpp_inner->weak)){
		HX_STACK_LINE(624)
		{
			HX_STACK_LINE(624)
			if (((bool((point != null())) && bool(point->zpp_disp)))){
				HX_STACK_LINE(624)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(624)
				if ((_this->_immutable)){
					HX_STACK_LINE(624)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(624)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(624)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(624)
			if ((point->zpp_inner->_inuse)){
				HX_STACK_LINE(624)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(624)
			::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(624)
			point->zpp_inner->outer = null();
			HX_STACK_LINE(624)
			point->zpp_inner = null();
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(624)
				{
				}
				HX_STACK_LINE(624)
				o->zpp_pool = null();
				HX_STACK_LINE(624)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(624)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(624)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(624)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(624)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(624)
				{
				}
				HX_STACK_LINE(624)
				{
					HX_STACK_LINE(624)
					if (((o->outer != null()))){
						HX_STACK_LINE(624)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(624)
						o->outer = null();
					}
					HX_STACK_LINE(624)
					o->_isimmutable = null();
					HX_STACK_LINE(624)
					o->_validate = null();
					HX_STACK_LINE(624)
					o->_invalidate = null();
				}
				HX_STACK_LINE(624)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(624)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(625)
		true;
	}
	else{
		HX_STACK_LINE(627)
		false;
	}
	HX_STACK_LINE(631)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,shapesUnderPoint,return )

::nape::callbacks::InteractionType Space_obj::interactionType( ::nape::shape::Shape shape1,::nape::shape::Shape shape2){
	HX_STACK_PUSH("Space::interactionType","nape/space/Space.hx",578);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shape1,"shape1");
	HX_STACK_ARG(shape2,"shape2");
	HX_STACK_LINE(580)
	if (((bool((shape1 == null())) || bool((shape2 == null()))))){
		HX_STACK_LINE(580)
		hx::Throw (HX_CSTRING("Error: Cannot evaluate interaction type for null shapes"));
	}
	HX_STACK_LINE(583)
	if (((bool((((  (((shape1->zpp_inner->body != null()))) ? ::nape::phys::Body(shape1->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null())) || bool((((  (((shape2->zpp_inner->body != null()))) ? ::nape::phys::Body(shape2->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null()))))){
		HX_STACK_LINE(583)
		hx::Throw (HX_CSTRING("Error: Cannot evaluate interaction type for shapes not part of a Body"));
	}
	HX_STACK_LINE(585)
	if (((bool((((  (((shape1->zpp_inner->body != null()))) ? ::nape::phys::Body(shape1->zpp_inner->body->outer) : ::nape::phys::Body(null()) ))->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((((  (((shape2->zpp_inner->body != null()))) ? ::nape::phys::Body(shape2->zpp_inner->body->outer) : ::nape::phys::Body(null()) ))->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))){
		HX_STACK_LINE(585)
		return null();
	}
	HX_STACK_LINE(586)
	if (((((  (((shape1->zpp_inner->body != null()))) ? ::nape::phys::Body(shape1->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == ((  (((shape2->zpp_inner->body != null()))) ? ::nape::phys::Body(shape2->zpp_inner->body->outer) : ::nape::phys::Body(null()) ))))){
		HX_STACK_LINE(586)
		return null();
	}
	HX_STACK_LINE(587)
	::zpp_nape::shape::ZPP_Shape s1 = shape1->zpp_inner;		HX_STACK_VAR(s1,"s1");
	HX_STACK_LINE(588)
	::zpp_nape::shape::ZPP_Shape s2 = shape2->zpp_inner;		HX_STACK_VAR(s2,"s2");
	struct _Function_1_1{
		inline static ::nape::callbacks::InteractionType Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::shape::ZPP_Shape &s2){
			HX_STACK_PUSH("*::closure","nape/space/Space.hx",589);
			{
				struct _Function_2_1{
					inline static int Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::shape::ZPP_Shape &s2){
						HX_STACK_PUSH("*::closure","nape/space/Space.hx",589);
						{
							HX_STACK_LINE(589)
							::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
							::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
							HX_STACK_LINE(589)
							{
							}
							HX_STACK_LINE(589)
							{
							}
							HX_STACK_LINE(589)
							bool con_ignore;		HX_STACK_VAR(con_ignore,"con_ignore");
							HX_STACK_LINE(589)
							{
								HX_STACK_LINE(589)
								con_ignore = false;
								HX_STACK_LINE(589)
								{
									HX_STACK_LINE(589)
									::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = b1->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(589)
									while(((cx_ite != null()))){
										HX_STACK_LINE(589)
										::zpp_nape::constraint::ZPP_Constraint con = cx_ite->elt;		HX_STACK_VAR(con,"con");
										HX_STACK_LINE(589)
										if (((bool(con->ignore) && bool(con->pair_exists(b1->id,b2->id))))){
											HX_STACK_LINE(589)
											con_ignore = true;
											HX_STACK_LINE(589)
											break;
										}
										HX_STACK_LINE(589)
										cx_ite = cx_ite->next;
									}
								}
							}
							struct _Function_3_1{
								inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::shape::ZPP_Shape &s2){
									HX_STACK_PUSH("*::closure","nape/space/Space.hx",589);
									{
										struct _Function_4_1{
											inline static ::zpp_nape::dynamics::ZPP_InteractionGroup Block( ::zpp_nape::shape::ZPP_Shape &s1){
												HX_STACK_PUSH("*::closure","nape/space/Space.hx",589);
												{
													HX_STACK_LINE(589)
													::zpp_nape::phys::ZPP_Interactor cur = s1;		HX_STACK_VAR(cur,"cur");
													HX_STACK_LINE(589)
													while(((bool((cur != null())) && bool((cur->group == null()))))){
														HX_STACK_LINE(589)
														if (((cur->ishape != null()))){
															HX_STACK_LINE(589)
															cur = cur->ishape->body;
														}
														else{
															HX_STACK_LINE(589)
															if (((cur->icompound != null()))){
																HX_STACK_LINE(589)
																cur = cur->icompound->compound;
															}
															else{
																HX_STACK_LINE(589)
																cur = cur->ibody->compound;
															}
														}
													}
													HX_STACK_LINE(589)
													return (  (((cur == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionGroup(null()) : ::zpp_nape::dynamics::ZPP_InteractionGroup(cur->group) );
												}
												return null();
											}
										};
										HX_STACK_LINE(589)
										::zpp_nape::dynamics::ZPP_InteractionGroup g1 = _Function_4_1::Block(s1);		HX_STACK_VAR(g1,"g1");
										struct _Function_4_2{
											inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_InteractionGroup &g1){
												HX_STACK_PUSH("*::closure","nape/space/Space.hx",589);
												{
													struct _Function_5_1{
														inline static ::zpp_nape::dynamics::ZPP_InteractionGroup Block( ::zpp_nape::shape::ZPP_Shape &s2){
															HX_STACK_PUSH("*::closure","nape/space/Space.hx",589);
															{
																HX_STACK_LINE(589)
																::zpp_nape::phys::ZPP_Interactor cur = s2;		HX_STACK_VAR(cur,"cur");
																HX_STACK_LINE(589)
																while(((bool((cur != null())) && bool((cur->group == null()))))){
																	HX_STACK_LINE(589)
																	if (((cur->ishape != null()))){
																		HX_STACK_LINE(589)
																		cur = cur->ishape->body;
																	}
																	else{
																		HX_STACK_LINE(589)
																		if (((cur->icompound != null()))){
																			HX_STACK_LINE(589)
																			cur = cur->icompound->compound;
																		}
																		else{
																			HX_STACK_LINE(589)
																			cur = cur->ibody->compound;
																		}
																	}
																}
																HX_STACK_LINE(589)
																return (  (((cur == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionGroup(null()) : ::zpp_nape::dynamics::ZPP_InteractionGroup(cur->group) );
															}
															return null();
														}
													};
													HX_STACK_LINE(589)
													::zpp_nape::dynamics::ZPP_InteractionGroup g2 = _Function_5_1::Block(s2);		HX_STACK_VAR(g2,"g2");
													struct _Function_5_2{
														inline static bool Block( ::zpp_nape::dynamics::ZPP_InteractionGroup &g1,::zpp_nape::dynamics::ZPP_InteractionGroup &g2){
															HX_STACK_PUSH("*::closure","nape/space/Space.hx",589);
															{
																HX_STACK_LINE(589)
																bool ret = false;		HX_STACK_VAR(ret,"ret");
																HX_STACK_LINE(589)
																while(((bool((g1 != null())) && bool((g2 != null()))))){
																	HX_STACK_LINE(589)
																	if (((g1 == g2))){
																		HX_STACK_LINE(589)
																		ret = g1->ignore;
																		HX_STACK_LINE(589)
																		break;
																	}
																	HX_STACK_LINE(589)
																	if (((g1->depth < g2->depth))){
																		HX_STACK_LINE(589)
																		g2 = g2->group;
																	}
																	else{
																		HX_STACK_LINE(589)
																		g1 = g1->group;
																	}
																}
																HX_STACK_LINE(589)
																return ret;
															}
															return null();
														}
													};
													HX_STACK_LINE(589)
													return (  (((g2 == null()))) ? bool(false) : bool(_Function_5_2::Block(g1,g2)) );
												}
												return null();
											}
										};
										HX_STACK_LINE(589)
										return (  (((g1 == null()))) ? bool(false) : bool(_Function_4_2::Block(s2,g1)) );
									}
									return null();
								}
							};
							struct _Function_3_2{
								inline static int Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::phys::ZPP_Body &b2,::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::phys::ZPP_Body &b1){
									HX_STACK_PUSH("*::closure","nape/space/Space.hx",589);
									{
										struct _Function_4_1{
											inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::shape::ZPP_Shape &s2){
												HX_STACK_PUSH("*::closure","nape/space/Space.hx",589);
												{
													HX_STACK_LINE(589)
													::zpp_nape::dynamics::ZPP_InteractionFilter _this = s1->filter;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::dynamics::ZPP_InteractionFilter x = s2->filter;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(589)
													return (bool((((int(_this->sensorMask) & int(x->sensorGroup))) != (int)0)) && bool((((int(x->sensorMask) & int(_this->sensorGroup))) != (int)0)));
												}
												return null();
											}
										};
										struct _Function_4_2{
											inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::shape::ZPP_Shape &s2){
												HX_STACK_PUSH("*::closure","nape/space/Space.hx",589);
												{
													HX_STACK_LINE(589)
													::zpp_nape::dynamics::ZPP_InteractionFilter _this = s1->filter;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::dynamics::ZPP_InteractionFilter x = s2->filter;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(589)
													return (bool((((int(_this->fluidMask) & int(x->fluidGroup))) != (int)0)) && bool((((int(x->fluidMask) & int(_this->fluidGroup))) != (int)0)));
												}
												return null();
											}
										};
										struct _Function_4_3{
											inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::shape::ZPP_Shape &s2){
												HX_STACK_PUSH("*::closure","nape/space/Space.hx",589);
												{
													HX_STACK_LINE(589)
													::zpp_nape::dynamics::ZPP_InteractionFilter _this = s1->filter;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::dynamics::ZPP_InteractionFilter x = s2->filter;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(589)
													return (bool((((int(_this->collisionMask) & int(x->collisionGroup))) != (int)0)) && bool((((int(x->collisionMask) & int(_this->collisionGroup))) != (int)0)));
												}
												return null();
											}
										};
										HX_STACK_LINE(589)
										return (  (((bool(((bool(s1->sensorEnabled) || bool(s2->sensorEnabled)))) && bool(_Function_4_1::Block(s1,s2))))) ? int((int)2) : int((  (((bool((bool(((bool(s1->fluidEnabled) || bool(s2->fluidEnabled)))) && bool(_Function_4_2::Block(s1,s2)))) && bool(!(((bool((bool((bool((b1->imass == (int)0)) && bool((b2->imass == (int)0)))) && bool((b1->iinertia == (int)0)))) && bool((b2->iinertia == (int)0))))))))) ? int((int)0) : int((  (((bool(_Function_4_3::Block(s1,s2)) && bool(!(((bool((bool((bool((b1->imass == (int)0)) && bool((b2->imass == (int)0)))) && bool((b1->iinertia == (int)0)))) && bool((b2->iinertia == (int)0))))))))) ? int((int)1) : int((int)-1) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(589)
							return (  (((bool(!(con_ignore)) && bool(!(_Function_3_1::Block(s1,s2)))))) ? int(_Function_3_2::Block(s1,b2,s2,b1)) : int((int)-1) );
						}
						return null();
					}
				};
				HX_STACK_LINE(589)
				switch( (int)(_Function_2_1::Block(s1,s2))){
					case (int)0: {
						HX_STACK_LINE(590)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
							HX_STACK_LINE(590)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(590)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
							HX_STACK_LINE(590)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(590)
						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(591)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
							HX_STACK_LINE(591)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(591)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
							HX_STACK_LINE(591)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(591)
						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(592)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
							HX_STACK_LINE(592)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(592)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
							HX_STACK_LINE(592)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(592)
						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
					}
					;break;
					default: {
						HX_STACK_LINE(593)
						return null();
					}
				}
			}
			return null();
		}
	};
	HX_STACK_LINE(589)
	return _Function_1_1::Block(s1,s2);
}


HX_DEFINE_DYNAMIC_FUNC2(Space_obj,interactionType,return )

Float Space_obj::get_elapsedTime( ){
	HX_STACK_PUSH("Space::get_elapsedTime","nape/space/Space.hx",527);
	HX_STACK_THIS(this);
	HX_STACK_LINE(527)
	return this->zpp_inner->time;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_elapsedTime,return )

int Space_obj::get_timeStamp( ){
	HX_STACK_PUSH("Space::get_timeStamp","nape/space/Space.hx",517);
	HX_STACK_THIS(this);
	HX_STACK_LINE(517)
	return this->zpp_inner->stamp;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_timeStamp,return )

Void Space_obj::step( Float deltaTime,hx::Null< int >  __o_velocityIterations,hx::Null< int >  __o_positionIterations){
int velocityIterations = __o_velocityIterations.Default(10);
int positionIterations = __o_positionIterations.Default(10);
	HX_STACK_PUSH("Space::step","nape/space/Space.hx",501);
	HX_STACK_THIS(this);
	HX_STACK_ARG(deltaTime,"deltaTime");
	HX_STACK_ARG(velocityIterations,"velocityIterations");
	HX_STACK_ARG(positionIterations,"positionIterations");
{
		HX_STACK_LINE(503)
		if (((deltaTime != deltaTime))){
			HX_STACK_LINE(503)
			hx::Throw (HX_CSTRING("Error: deltaTime cannot be NaN"));
		}
		HX_STACK_LINE(504)
		if (((deltaTime <= (int)0))){
			HX_STACK_LINE(504)
			hx::Throw (HX_CSTRING("Error: deltaTime must be strictly positive"));
		}
		HX_STACK_LINE(505)
		if (((velocityIterations <= (int)0))){
			HX_STACK_LINE(505)
			hx::Throw (HX_CSTRING("Error: must use atleast one velocity iteration"));
		}
		HX_STACK_LINE(506)
		if (((positionIterations <= (int)0))){
			HX_STACK_LINE(506)
			hx::Throw (HX_CSTRING("Error: must use atleast one position iteration"));
		}
		HX_STACK_LINE(508)
		this->zpp_inner->step(deltaTime,velocityIterations,positionIterations);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Space_obj,step,(void))

Void Space_obj::clear( ){
{
		HX_STACK_PUSH("Space::clear","nape/space/Space.hx",475);
		HX_STACK_THIS(this);
		HX_STACK_LINE(477)
		if ((this->zpp_inner->midstep)){
			HX_STACK_LINE(477)
			hx::Throw (HX_CSTRING("Error: Space::clear() cannot be called during space step()"));
		}
		HX_STACK_LINE(479)
		this->zpp_inner->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,clear,(void))

::nape::callbacks::ListenerList Space_obj::get_listeners( ){
	HX_STACK_PUSH("Space::get_listeners","nape/space/Space.hx",462);
	HX_STACK_THIS(this);
	HX_STACK_LINE(462)
	return this->zpp_inner->wrap_listeners;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_listeners,return )

::nape::dynamics::ArbiterList Space_obj::get_arbiters( ){
	HX_STACK_PUSH("Space::get_arbiters","nape/space/Space.hx",446);
	HX_STACK_THIS(this);
	HX_STACK_LINE(447)
	if (((this->zpp_inner->wrap_arbiters == null()))){
		HX_STACK_LINE(448)
		::zpp_nape::dynamics::ZPP_SpaceArbiterList ret = ::zpp_nape::dynamics::ZPP_SpaceArbiterList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(449)
		ret->space = this->zpp_inner;
		HX_STACK_LINE(450)
		this->zpp_inner->wrap_arbiters = ret;
	}
	HX_STACK_LINE(452)
	return this->zpp_inner->wrap_arbiters;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_arbiters,return )

::nape::phys::Body Space_obj::get_world( ){
	HX_STACK_PUSH("Space::get_world","nape/space/Space.hx",436);
	HX_STACK_THIS(this);
	HX_STACK_LINE(436)
	return this->zpp_inner->__static;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_world,return )

Void Space_obj::visitCompounds( Dynamic lambda){
{
		HX_STACK_PUSH("Space::visitCompounds","nape/space/Space.hx",415);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(417)
		if (((lambda == null()))){
			HX_STACK_LINE(417)
			hx::Throw (HX_CSTRING("Error: lambda cannot be null for Space::visitCompounds"));
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::nape::space::Space_obj *__this){
				HX_STACK_PUSH("*::closure","nape/space/Space.hx",419);
				{
					HX_STACK_LINE(419)
					::nape::phys::CompoundList _this = __this->zpp_inner->wrap_compounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(419)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(419)
					return ::nape::phys::CompoundIterator_obj::get(_this);
				}
				return null();
			}
		};
		HX_STACK_LINE(419)
		for(::cpp::FastIterator_obj< ::nape::phys::Compound > *__it = ::cpp::CreateFastIterator< ::nape::phys::Compound >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::nape::phys::Compound c = __it->next();
			{
				HX_STACK_LINE(420)
				lambda(c).Cast< Void >();
				HX_STACK_LINE(421)
				c->visitCompounds(lambda);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,visitCompounds,(void))

Void Space_obj::visitConstraints( Dynamic lambda){
{
		HX_STACK_PUSH("Space::visitConstraints","nape/space/Space.hx",399);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(401)
		if (((lambda == null()))){
			HX_STACK_LINE(401)
			hx::Throw (HX_CSTRING("Error: lambda cannot be null for Space::visitConstraints"));
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::nape::space::Space_obj *__this){
				HX_STACK_PUSH("*::closure","nape/space/Space.hx",403);
				{
					HX_STACK_LINE(403)
					::nape::constraint::ConstraintList _this = __this->zpp_inner->wrap_constraints;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(403)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(403)
					return ::nape::constraint::ConstraintIterator_obj::get(_this);
				}
				return null();
			}
		};
		HX_STACK_LINE(403)
		for(::cpp::FastIterator_obj< ::nape::constraint::Constraint > *__it = ::cpp::CreateFastIterator< ::nape::constraint::Constraint >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::nape::constraint::Constraint c = __it->next();
			lambda(c).Cast< Void >();
		}
		struct _Function_1_2{
			inline static Dynamic Block( ::nape::space::Space_obj *__this){
				HX_STACK_PUSH("*::closure","nape/space/Space.hx",404);
				{
					HX_STACK_LINE(404)
					::nape::phys::CompoundList _this = __this->zpp_inner->wrap_compounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(404)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(404)
					return ::nape::phys::CompoundIterator_obj::get(_this);
				}
				return null();
			}
		};
		HX_STACK_LINE(404)
		for(::cpp::FastIterator_obj< ::nape::phys::Compound > *__it = ::cpp::CreateFastIterator< ::nape::phys::Compound >(_Function_1_2::Block(this));  __it->hasNext(); ){
			::nape::phys::Compound c = __it->next();
			c->visitConstraints(lambda);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,visitConstraints,(void))

Void Space_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_PUSH("Space::visitBodies","nape/space/Space.hx",383);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(385)
		if (((lambda == null()))){
			HX_STACK_LINE(385)
			hx::Throw (HX_CSTRING("Error: lambda cannot be null for Space::visitBodies"));
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::nape::space::Space_obj *__this){
				HX_STACK_PUSH("*::closure","nape/space/Space.hx",387);
				{
					HX_STACK_LINE(387)
					::nape::phys::BodyList _this = __this->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(387)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(387)
					return ::nape::phys::BodyIterator_obj::get(_this);
				}
				return null();
			}
		};
		HX_STACK_LINE(387)
		for(::cpp::FastIterator_obj< ::nape::phys::Body > *__it = ::cpp::CreateFastIterator< ::nape::phys::Body >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::nape::phys::Body b = __it->next();
			lambda(b).Cast< Void >();
		}
		struct _Function_1_2{
			inline static Dynamic Block( ::nape::space::Space_obj *__this){
				HX_STACK_PUSH("*::closure","nape/space/Space.hx",388);
				{
					HX_STACK_LINE(388)
					::nape::phys::CompoundList _this = __this->zpp_inner->wrap_compounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(388)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(388)
					return ::nape::phys::CompoundIterator_obj::get(_this);
				}
				return null();
			}
		};
		HX_STACK_LINE(388)
		for(::cpp::FastIterator_obj< ::nape::phys::Compound > *__it = ::cpp::CreateFastIterator< ::nape::phys::Compound >(_Function_1_2::Block(this));  __it->hasNext(); ){
			::nape::phys::Compound c = __it->next();
			c->visitBodies(lambda);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,visitBodies,(void))

::nape::constraint::ConstraintList Space_obj::get_liveConstraints( ){
	HX_STACK_PUSH("Space::get_liveConstraints","nape/space/Space.hx",371);
	HX_STACK_THIS(this);
	HX_STACK_LINE(371)
	return this->zpp_inner->wrap_livecon;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_liveConstraints,return )

::nape::constraint::ConstraintList Space_obj::get_constraints( ){
	HX_STACK_PUSH("Space::get_constraints","nape/space/Space.hx",359);
	HX_STACK_THIS(this);
	HX_STACK_LINE(359)
	return this->zpp_inner->wrap_constraints;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_constraints,return )

::nape::phys::BodyList Space_obj::get_liveBodies( ){
	HX_STACK_PUSH("Space::get_liveBodies","nape/space/Space.hx",345);
	HX_STACK_THIS(this);
	HX_STACK_LINE(345)
	return this->zpp_inner->wrap_live;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_liveBodies,return )

::nape::phys::BodyList Space_obj::get_bodies( ){
	HX_STACK_PUSH("Space::get_bodies","nape/space/Space.hx",333);
	HX_STACK_THIS(this);
	HX_STACK_LINE(333)
	return this->zpp_inner->wrap_bodies;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_bodies,return )

::nape::phys::CompoundList Space_obj::get_compounds( ){
	HX_STACK_PUSH("Space::get_compounds","nape/space/Space.hx",319);
	HX_STACK_THIS(this);
	HX_STACK_LINE(319)
	return this->zpp_inner->wrap_compounds;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_compounds,return )

Float Space_obj::set_worldLinearDrag( Float worldLinearDrag){
	HX_STACK_PUSH("Space::set_worldLinearDrag","nape/space/Space.hx",298);
	HX_STACK_THIS(this);
	HX_STACK_ARG(worldLinearDrag,"worldLinearDrag");
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(300)
		Float d = worldLinearDrag;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(302)
		if (((d != d))){
			HX_STACK_LINE(302)
			hx::Throw (HX_CSTRING("Error: Space::worldLinearDrag cannot be NaN"));
		}
		HX_STACK_LINE(304)
		this->zpp_inner->global_lin_drag = d;
	}
	HX_STACK_LINE(306)
	return this->zpp_inner->global_lin_drag;
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,set_worldLinearDrag,return )

Float Space_obj::get_worldLinearDrag( ){
	HX_STACK_PUSH("Space::get_worldLinearDrag","nape/space/Space.hx",295);
	HX_STACK_THIS(this);
	HX_STACK_LINE(295)
	return this->zpp_inner->global_lin_drag;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_worldLinearDrag,return )

Float Space_obj::set_worldAngularDrag( Float worldAngularDrag){
	HX_STACK_PUSH("Space::set_worldAngularDrag","nape/space/Space.hx",275);
	HX_STACK_THIS(this);
	HX_STACK_ARG(worldAngularDrag,"worldAngularDrag");
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(277)
		Float d = worldAngularDrag;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(279)
		if (((d != d))){
			HX_STACK_LINE(279)
			hx::Throw (HX_CSTRING("Error: Space::worldAngularDrag cannot be NaN"));
		}
		HX_STACK_LINE(281)
		this->zpp_inner->global_ang_drag = d;
	}
	HX_STACK_LINE(283)
	return this->zpp_inner->global_ang_drag;
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,set_worldAngularDrag,return )

Float Space_obj::get_worldAngularDrag( ){
	HX_STACK_PUSH("Space::get_worldAngularDrag","nape/space/Space.hx",272);
	HX_STACK_THIS(this);
	HX_STACK_LINE(272)
	return this->zpp_inner->global_ang_drag;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_worldAngularDrag,return )

bool Space_obj::set_sortContacts( bool sortContacts){
	HX_STACK_PUSH("Space::set_sortContacts","nape/space/Space.hx",256);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sortContacts,"sortContacts");
	HX_STACK_LINE(257)
	this->zpp_inner->sortcontacts = sortContacts;
	HX_STACK_LINE(260)
	return this->zpp_inner->sortcontacts;
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,set_sortContacts,return )

bool Space_obj::get_sortContacts( ){
	HX_STACK_PUSH("Space::get_sortContacts","nape/space/Space.hx",253);
	HX_STACK_THIS(this);
	HX_STACK_LINE(253)
	return this->zpp_inner->sortcontacts;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_sortContacts,return )

::nape::space::Broadphase Space_obj::get_broadphase( ){
	HX_STACK_PUSH("Space::get_broadphase","nape/space/Space.hx",232);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::space::Broadphase Block( ){
			HX_STACK_PUSH("*::closure","nape/space/Space.hx",233);
			{
				HX_STACK_LINE(233)
				if (((::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE == null()))){
					HX_STACK_LINE(233)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(233)
					::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE = ::nape::space::Broadphase_obj::__new();
					HX_STACK_LINE(233)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(233)
				return ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::space::Broadphase Block( ){
			HX_STACK_PUSH("*::closure","nape/space/Space.hx",233);
			{
				HX_STACK_LINE(233)
				if (((::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE == null()))){
					HX_STACK_LINE(233)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(233)
					::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE = ::nape::space::Broadphase_obj::__new();
					HX_STACK_LINE(233)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(233)
				return ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;
			}
			return null();
		}
	};
	HX_STACK_LINE(232)
	return (  ((this->zpp_inner->bphase->is_sweep)) ? ::nape::space::Broadphase(_Function_1_1::Block()) : ::nape::space::Broadphase(_Function_1_2::Block()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_broadphase,return )

::nape::geom::Vec2 Space_obj::set_gravity( ::nape::geom::Vec2 gravity){
	HX_STACK_PUSH("Space::set_gravity","nape/space/Space.hx",213);
	HX_STACK_THIS(this);
	HX_STACK_ARG(gravity,"gravity");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(215)
		if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
			HX_STACK_LINE(217)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(221)
		if (((gravity == null()))){
			HX_STACK_LINE(221)
			hx::Throw (HX_CSTRING("Error: Space::gravity cannot be null"));
		}
		HX_STACK_LINE(223)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::space::Space_obj *__this){
					HX_STACK_PUSH("*::closure","nape/space/Space.hx",223);
					{
						HX_STACK_LINE(223)
						if (((__this->zpp_inner->wrap_gravity == null()))){
							HX_STACK_LINE(223)
							__this->zpp_inner->getgravity();
						}
						HX_STACK_LINE(223)
						return __this->zpp_inner->wrap_gravity;
					}
					return null();
				}
			};
			HX_STACK_LINE(223)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(223)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(223)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(223)
			if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
				HX_STACK_LINE(223)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(223)
				if ((_this1->_immutable)){
					HX_STACK_LINE(223)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(223)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(223)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(223)
			if (((gravity == null()))){
				HX_STACK_LINE(223)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &gravity,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/space/Space.hx",223);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &gravity){
								HX_STACK_PUSH("*::closure","nape/space/Space.hx",223);
								{
									HX_STACK_LINE(223)
									if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
										HX_STACK_LINE(223)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(223)
									{
										HX_STACK_LINE(223)
										::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(223)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(223)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(223)
									return gravity->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &gravity){
								HX_STACK_PUSH("*::closure","nape/space/Space.hx",223);
								{
									HX_STACK_LINE(223)
									if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
										HX_STACK_LINE(223)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(223)
									{
										HX_STACK_LINE(223)
										::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(223)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(223)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(223)
									return gravity->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(223)
						Float x = _Function_4_1::Block(gravity);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(gravity);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(223)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(223)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(223)
						{
							HX_STACK_LINE(223)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(223)
							if ((_this1->_immutable)){
								HX_STACK_LINE(223)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(223)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(223)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(223)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(223)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/space/Space.hx",223);
								{
									HX_STACK_LINE(223)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(223)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(223)
									{
										HX_STACK_LINE(223)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(223)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(223)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(223)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/space/Space.hx",223);
								{
									HX_STACK_LINE(223)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(223)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(223)
									{
										HX_STACK_LINE(223)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(223)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(223)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(223)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(223)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(223)
							{
								HX_STACK_LINE(223)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(223)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(223)
								{
								}
								HX_STACK_LINE(223)
								{
								}
							}
							HX_STACK_LINE(223)
							{
								HX_STACK_LINE(223)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(223)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(223)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(223)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(223)
			::nape::geom::Vec2 ret = _Function_3_2::Block(gravity,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(223)
			if ((gravity->zpp_inner->weak)){
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
						HX_STACK_LINE(223)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(223)
						if ((_this1->_immutable)){
							HX_STACK_LINE(223)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(223)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(223)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(223)
					if ((gravity->zpp_inner->_inuse)){
						HX_STACK_LINE(223)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(223)
					::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(223)
					gravity->zpp_inner->outer = null();
					HX_STACK_LINE(223)
					gravity->zpp_inner = null();
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(223)
						{
						}
						HX_STACK_LINE(223)
						o->zpp_pool = null();
						HX_STACK_LINE(223)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(223)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(223)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(223)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(223)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(223)
						{
						}
						HX_STACK_LINE(223)
						{
							HX_STACK_LINE(223)
							if (((o->outer != null()))){
								HX_STACK_LINE(223)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(223)
								o->outer = null();
							}
							HX_STACK_LINE(223)
							o->_isimmutable = null();
							HX_STACK_LINE(223)
							o->_validate = null();
							HX_STACK_LINE(223)
							o->_invalidate = null();
						}
						HX_STACK_LINE(223)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(223)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(223)
				true;
			}
			else{
				HX_STACK_LINE(223)
				false;
			}
			HX_STACK_LINE(223)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::space::Space_obj *__this){
			HX_STACK_PUSH("*::closure","nape/space/Space.hx",225);
			{
				HX_STACK_LINE(225)
				if (((__this->zpp_inner->wrap_gravity == null()))){
					HX_STACK_LINE(225)
					__this->zpp_inner->getgravity();
				}
				HX_STACK_LINE(225)
				return __this->zpp_inner->wrap_gravity;
			}
			return null();
		}
	};
	HX_STACK_LINE(225)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Space_obj,set_gravity,return )

::nape::geom::Vec2 Space_obj::get_gravity( ){
	HX_STACK_PUSH("Space::get_gravity","nape/space/Space.hx",209);
	HX_STACK_THIS(this);
	HX_STACK_LINE(210)
	if (((this->zpp_inner->wrap_gravity == null()))){
		HX_STACK_LINE(210)
		this->zpp_inner->getgravity();
	}
	HX_STACK_LINE(211)
	return this->zpp_inner->wrap_gravity;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_gravity,return )

Dynamic Space_obj::get_userData( ){
	HX_STACK_PUSH("Space::get_userData","nape/space/Space.hx",195);
	HX_STACK_THIS(this);
	HX_STACK_LINE(196)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","nape/space/Space.hx",197);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(196)
		this->zpp_inner->userData = _Function_2_1::Block();
	}
	HX_STACK_LINE(199)
	return this->zpp_inner->userData;
}


HX_DEFINE_DYNAMIC_FUNC0(Space_obj,get_userData,return )


Space_obj::Space_obj()
{
}

void Space_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Space);
	HX_MARK_MEMBER_NAME(elapsedTime,"elapsedTime");
	HX_MARK_MEMBER_NAME(timeStamp,"timeStamp");
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_MEMBER_NAME(arbiters,"arbiters");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(liveConstraints,"liveConstraints");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(liveBodies,"liveBodies");
	HX_MARK_MEMBER_NAME(bodies,"bodies");
	HX_MARK_MEMBER_NAME(compounds,"compounds");
	HX_MARK_MEMBER_NAME(worldLinearDrag,"worldLinearDrag");
	HX_MARK_MEMBER_NAME(worldAngularDrag,"worldAngularDrag");
	HX_MARK_MEMBER_NAME(sortContacts,"sortContacts");
	HX_MARK_MEMBER_NAME(broadphase,"broadphase");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Space_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elapsedTime,"elapsedTime");
	HX_VISIT_MEMBER_NAME(timeStamp,"timeStamp");
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
	HX_VISIT_MEMBER_NAME(arbiters,"arbiters");
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(liveConstraints,"liveConstraints");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(liveBodies,"liveBodies");
	HX_VISIT_MEMBER_NAME(bodies,"bodies");
	HX_VISIT_MEMBER_NAME(compounds,"compounds");
	HX_VISIT_MEMBER_NAME(worldLinearDrag,"worldLinearDrag");
	HX_VISIT_MEMBER_NAME(worldAngularDrag,"worldAngularDrag");
	HX_VISIT_MEMBER_NAME(sortContacts,"sortContacts");
	HX_VISIT_MEMBER_NAME(broadphase,"broadphase");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Space_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"world") ) { return inCallProp ? get_world() : world; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { return inCallProp ? get_bodies() : bodies; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		if (HX_FIELD_EQ(inName,"gravity") ) { return inCallProp ? get_gravity() : gravity; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"arbiters") ) { return inCallProp ? get_arbiters() : arbiters; }
		if (HX_FIELD_EQ(inName,"userData") ) { return inCallProp ? get_userData() : userData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeStamp") ) { return inCallProp ? get_timeStamp() : timeStamp; }
		if (HX_FIELD_EQ(inName,"listeners") ) { return inCallProp ? get_listeners() : listeners; }
		if (HX_FIELD_EQ(inName,"get_world") ) { return get_world_dyn(); }
		if (HX_FIELD_EQ(inName,"compounds") ) { return inCallProp ? get_compounds() : compounds; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"convexCast") ) { return convexCast_dyn(); }
		if (HX_FIELD_EQ(inName,"liveBodies") ) { return inCallProp ? get_liveBodies() : liveBodies; }
		if (HX_FIELD_EQ(inName,"get_bodies") ) { return get_bodies_dyn(); }
		if (HX_FIELD_EQ(inName,"broadphase") ) { return inCallProp ? get_broadphase() : broadphase; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { return inCallProp ? get_elapsedTime() : elapsedTime; }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"constraints") ) { return inCallProp ? get_constraints() : constraints; }
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravity") ) { return get_gravity_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rayMultiCast") ) { return rayMultiCast_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInBody") ) { return bodiesInBody_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInBody") ) { return shapesInBody_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInAABB") ) { return bodiesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInAABB") ) { return shapesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"get_arbiters") ) { return get_arbiters_dyn(); }
		if (HX_FIELD_EQ(inName,"sortContacts") ) { return inCallProp ? get_sortContacts() : sortContacts; }
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bodiesInShape") ) { return bodiesInShape_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInShape") ) { return shapesInShape_dyn(); }
		if (HX_FIELD_EQ(inName,"get_timeStamp") ) { return get_timeStamp_dyn(); }
		if (HX_FIELD_EQ(inName,"get_listeners") ) { return get_listeners_dyn(); }
		if (HX_FIELD_EQ(inName,"get_compounds") ) { return get_compounds_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bodiesInCircle") ) { return bodiesInCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInCircle") ) { return shapesInCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"visitCompounds") ) { return visitCompounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_liveBodies") ) { return get_liveBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"get_broadphase") ) { return get_broadphase_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"convexMultiCast") ) { return convexMultiCast_dyn(); }
		if (HX_FIELD_EQ(inName,"interactionType") ) { return interactionType_dyn(); }
		if (HX_FIELD_EQ(inName,"get_elapsedTime") ) { return get_elapsedTime_dyn(); }
		if (HX_FIELD_EQ(inName,"liveConstraints") ) { return inCallProp ? get_liveConstraints() : liveConstraints; }
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return get_constraints_dyn(); }
		if (HX_FIELD_EQ(inName,"worldLinearDrag") ) { return inCallProp ? get_worldLinearDrag() : worldLinearDrag; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bodiesUnderPoint") ) { return bodiesUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesUnderPoint") ) { return shapesUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"visitConstraints") ) { return visitConstraints_dyn(); }
		if (HX_FIELD_EQ(inName,"worldAngularDrag") ) { return inCallProp ? get_worldAngularDrag() : worldAngularDrag; }
		if (HX_FIELD_EQ(inName,"set_sortContacts") ) { return set_sortContacts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sortContacts") ) { return get_sortContacts_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_liveConstraints") ) { return get_liveConstraints_dyn(); }
		if (HX_FIELD_EQ(inName,"set_worldLinearDrag") ) { return set_worldLinearDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldLinearDrag") ) { return get_worldLinearDrag_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_worldAngularDrag") ) { return set_worldAngularDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldAngularDrag") ) { return get_worldAngularDrag_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Space_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { bodies=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { if (inCallProp) return set_gravity(inValue);gravity=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"arbiters") ) { arbiters=inValue.Cast< ::nape::dynamics::ArbiterList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeStamp") ) { timeStamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast< ::nape::callbacks::ListenerList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"compounds") ) { compounds=inValue.Cast< ::nape::phys::CompoundList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"liveBodies") ) { liveBodies=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"broadphase") ) { broadphase=inValue.Cast< ::nape::space::Broadphase >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { elapsedTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sortContacts") ) { if (inCallProp) return set_sortContacts(inValue);sortContacts=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"liveConstraints") ) { liveConstraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldLinearDrag") ) { if (inCallProp) return set_worldLinearDrag(inValue);worldLinearDrag=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"worldAngularDrag") ) { if (inCallProp) return set_worldAngularDrag(inValue);worldAngularDrag=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Space_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("elapsedTime"));
	outFields->push(HX_CSTRING("timeStamp"));
	outFields->push(HX_CSTRING("listeners"));
	outFields->push(HX_CSTRING("arbiters"));
	outFields->push(HX_CSTRING("world"));
	outFields->push(HX_CSTRING("liveConstraints"));
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("liveBodies"));
	outFields->push(HX_CSTRING("bodies"));
	outFields->push(HX_CSTRING("compounds"));
	outFields->push(HX_CSTRING("worldLinearDrag"));
	outFields->push(HX_CSTRING("worldAngularDrag"));
	outFields->push(HX_CSTRING("sortContacts"));
	outFields->push(HX_CSTRING("broadphase"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("rayMultiCast"),
	HX_CSTRING("rayCast"),
	HX_CSTRING("convexMultiCast"),
	HX_CSTRING("convexCast"),
	HX_CSTRING("bodiesInBody"),
	HX_CSTRING("shapesInBody"),
	HX_CSTRING("bodiesInShape"),
	HX_CSTRING("shapesInShape"),
	HX_CSTRING("bodiesInCircle"),
	HX_CSTRING("shapesInCircle"),
	HX_CSTRING("bodiesInAABB"),
	HX_CSTRING("shapesInAABB"),
	HX_CSTRING("bodiesUnderPoint"),
	HX_CSTRING("shapesUnderPoint"),
	HX_CSTRING("interactionType"),
	HX_CSTRING("get_elapsedTime"),
	HX_CSTRING("elapsedTime"),
	HX_CSTRING("get_timeStamp"),
	HX_CSTRING("timeStamp"),
	HX_CSTRING("step"),
	HX_CSTRING("clear"),
	HX_CSTRING("get_listeners"),
	HX_CSTRING("listeners"),
	HX_CSTRING("get_arbiters"),
	HX_CSTRING("arbiters"),
	HX_CSTRING("get_world"),
	HX_CSTRING("world"),
	HX_CSTRING("visitCompounds"),
	HX_CSTRING("visitConstraints"),
	HX_CSTRING("visitBodies"),
	HX_CSTRING("get_liveConstraints"),
	HX_CSTRING("liveConstraints"),
	HX_CSTRING("get_constraints"),
	HX_CSTRING("constraints"),
	HX_CSTRING("get_liveBodies"),
	HX_CSTRING("liveBodies"),
	HX_CSTRING("get_bodies"),
	HX_CSTRING("bodies"),
	HX_CSTRING("get_compounds"),
	HX_CSTRING("compounds"),
	HX_CSTRING("set_worldLinearDrag"),
	HX_CSTRING("get_worldLinearDrag"),
	HX_CSTRING("worldLinearDrag"),
	HX_CSTRING("set_worldAngularDrag"),
	HX_CSTRING("get_worldAngularDrag"),
	HX_CSTRING("worldAngularDrag"),
	HX_CSTRING("set_sortContacts"),
	HX_CSTRING("get_sortContacts"),
	HX_CSTRING("sortContacts"),
	HX_CSTRING("get_broadphase"),
	HX_CSTRING("broadphase"),
	HX_CSTRING("set_gravity"),
	HX_CSTRING("get_gravity"),
	HX_CSTRING("gravity"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("userData"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Space_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Space_obj::__mClass,"__mClass");
};

Class Space_obj::__mClass;

void Space_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.space.Space"), hx::TCanCast< Space_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Space_obj::__boot()
{
}

} // end namespace nape
} // end namespace space
