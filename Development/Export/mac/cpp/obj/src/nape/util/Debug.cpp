#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#include <nape/callbacks/CbTypeIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerIterator
#include <nape/callbacks/ListenerIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactIterator
#include <nape/dynamics/ContactIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionGroupIterator
#include <nape/dynamics/InteractionGroupIterator.h>
#endif
#ifndef INCLUDED_nape_geom_ConvexResultIterator
#include <nape/geom/ConvexResultIterator.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyIterator
#include <nape/geom/GeomPolyIterator.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultIterator
#include <nape/geom/RayResultIterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundIterator
#include <nape/phys/CompoundIterator.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorIterator
#include <nape/phys/InteractorIterator.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeIterator
#include <nape/shape/EdgeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeIterator
#include <nape/shape/ShapeIterator.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/geom/ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionPair
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyV
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Island
#include <zpp_nape/space/ZPP_Island.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepData
#include <zpp_nape/space/ZPP_SweepData.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ConvexResult
#include <zpp_nape/util/ZNPNode_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_RayResult
#include <zpp_nape/util/ZNPNode_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CallbackSet
#include <zpp_nape/util/ZNPNode_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ColArbiter
#include <zpp_nape/util/ZNPNode_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Component
#include <zpp_nape/util/ZNPNode_ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutVert
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomPoly
#include <zpp_nape/util/ZNPNode_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomVert
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPNode_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Interactor
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Listener
#include <zpp_nape/util/ZNPNode_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPNode_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimplifyP
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ToiEvent
#include <zpp_nape/util/ZNPNode_ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_Body
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSet
#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionPair
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionVertex
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleEvent
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
namespace nape{
namespace util{

Void Debug_obj::__construct()
{
	return null();
}

Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new()
{  hx::ObjectPtr< Debug_obj > result = new Debug_obj();
	result->__construct();
	return result;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > result = new Debug_obj();
	result->__construct();
	return result;}

::String Debug_obj::version( ){
	HX_STACK_PUSH("Debug::version","nape/util/Debug.hx",183);
	HX_STACK_LINE(183)
	return HX_CSTRING("Nape 2.0.9");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,version,return )

Void Debug_obj::clearObjectPools( ){
{
		HX_STACK_PUSH("Debug::clearObjectPools","nape/util/Debug.hx",189);
		HX_STACK_LINE(191)
		while(((::nape::constraint::ConstraintIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(193)
			::nape::constraint::ConstraintIterator nxt = ::nape::constraint::ConstraintIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(194)
			::nape::constraint::ConstraintIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(195)
			::nape::constraint::ConstraintIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(198)
		while(((::nape::phys::InteractorIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(200)
			::nape::phys::InteractorIterator nxt = ::nape::phys::InteractorIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(201)
			::nape::phys::InteractorIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(202)
			::nape::phys::InteractorIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(205)
		while(((::nape::phys::BodyIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(207)
			::nape::phys::BodyIterator nxt = ::nape::phys::BodyIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(208)
			::nape::phys::BodyIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(209)
			::nape::phys::BodyIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(212)
		while(((::nape::phys::CompoundIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(214)
			::nape::phys::CompoundIterator nxt = ::nape::phys::CompoundIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(215)
			::nape::phys::CompoundIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(216)
			::nape::phys::CompoundIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(219)
		while(((::nape::callbacks::ListenerIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(221)
			::nape::callbacks::ListenerIterator nxt = ::nape::callbacks::ListenerIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(222)
			::nape::callbacks::ListenerIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(223)
			::nape::callbacks::ListenerIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(226)
		while(((::nape::callbacks::CbTypeIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(228)
			::nape::callbacks::CbTypeIterator nxt = ::nape::callbacks::CbTypeIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(229)
			::nape::callbacks::CbTypeIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(230)
			::nape::callbacks::CbTypeIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(233)
		while(((::nape::geom::ConvexResultIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(235)
			::nape::geom::ConvexResultIterator nxt = ::nape::geom::ConvexResultIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(236)
			::nape::geom::ConvexResultIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(237)
			::nape::geom::ConvexResultIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(240)
		while(((::nape::geom::GeomPolyIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(242)
			::nape::geom::GeomPolyIterator nxt = ::nape::geom::GeomPolyIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(243)
			::nape::geom::GeomPolyIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(244)
			::nape::geom::GeomPolyIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(247)
		while(((::nape::geom::Vec2Iterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(249)
			::nape::geom::Vec2Iterator nxt = ::nape::geom::Vec2Iterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(250)
			::nape::geom::Vec2Iterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(251)
			::nape::geom::Vec2Iterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(254)
		while(((::nape::geom::RayResultIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(256)
			::nape::geom::RayResultIterator nxt = ::nape::geom::RayResultIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(257)
			::nape::geom::RayResultIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(258)
			::nape::geom::RayResultIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(261)
		while(((::nape::shape::ShapeIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(263)
			::nape::shape::ShapeIterator nxt = ::nape::shape::ShapeIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(264)
			::nape::shape::ShapeIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(265)
			::nape::shape::ShapeIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(268)
		while(((::nape::shape::EdgeIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(270)
			::nape::shape::EdgeIterator nxt = ::nape::shape::EdgeIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(271)
			::nape::shape::EdgeIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(272)
			::nape::shape::EdgeIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(275)
		while(((::nape::dynamics::ContactIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(277)
			::nape::dynamics::ContactIterator nxt = ::nape::dynamics::ContactIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(278)
			::nape::dynamics::ContactIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(279)
			::nape::dynamics::ContactIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(282)
		while(((::nape::dynamics::ArbiterIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(284)
			::nape::dynamics::ArbiterIterator nxt = ::nape::dynamics::ArbiterIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(285)
			::nape::dynamics::ArbiterIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(286)
			::nape::dynamics::ArbiterIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(289)
		while(((::nape::dynamics::InteractionGroupIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(291)
			::nape::dynamics::InteractionGroupIterator nxt = ::nape::dynamics::InteractionGroupIterator_obj::zpp_pool->zpp_next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(292)
			::nape::dynamics::InteractionGroupIterator_obj::zpp_pool->zpp_next = null();
			HX_STACK_LINE(293)
			::nape::dynamics::InteractionGroupIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(297)
		while(((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool != null()))){
			HX_STACK_LINE(299)
			::zpp_nape::util::ZNPNode_ZPP_CbType nxt = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(300)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool->next = null();
			HX_STACK_LINE(301)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(306)
		while(((::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool != null()))){
			HX_STACK_LINE(308)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet nxt = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(309)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool->next = null();
			HX_STACK_LINE(310)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(315)
		while(((::zpp_nape::phys::ZPP_Material_obj::zpp_pool != null()))){
			HX_STACK_LINE(317)
			::zpp_nape::phys::ZPP_Material nxt = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(318)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool->next = null();
			HX_STACK_LINE(319)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(324)
		while(((::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool != null()))){
			HX_STACK_LINE(326)
			::zpp_nape::util::ZNPNode_ZPP_Shape nxt = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(327)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool->next = null();
			HX_STACK_LINE(328)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(333)
		while(((::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool != null()))){
			HX_STACK_LINE(335)
			::zpp_nape::phys::ZPP_FluidProperties nxt = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(336)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool->next = null();
			HX_STACK_LINE(337)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(342)
		while(((::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool != null()))){
			HX_STACK_LINE(344)
			::zpp_nape::util::ZNPNode_ZPP_Body nxt = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(345)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool->next = null();
			HX_STACK_LINE(346)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(351)
		while(((::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool != null()))){
			HX_STACK_LINE(353)
			::zpp_nape::util::ZNPNode_ZPP_Constraint nxt = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(354)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool->next = null();
			HX_STACK_LINE(355)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(360)
		while(((::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool != null()))){
			HX_STACK_LINE(362)
			::zpp_nape::util::ZNPNode_ZPP_Compound nxt = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(363)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool->next = null();
			HX_STACK_LINE(364)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(369)
		while(((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool != null()))){
			HX_STACK_LINE(371)
			::zpp_nape::callbacks::ZPP_CbSetPair nxt = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(372)
			::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(373)
			::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(378)
		while(((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool != null()))){
			HX_STACK_LINE(380)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener nxt = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(381)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool->next = null();
			HX_STACK_LINE(382)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(387)
		while(((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool != null()))){
			HX_STACK_LINE(389)
			::zpp_nape::util::ZNPNode_ZPP_CbSet nxt = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(390)
			::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool->next = null();
			HX_STACK_LINE(391)
			::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(396)
		while(((::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool != null()))){
			HX_STACK_LINE(398)
			::zpp_nape::util::ZNPNode_ZPP_Interactor nxt = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(399)
			::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool->next = null();
			HX_STACK_LINE(400)
			::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(405)
		while(((::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool != null()))){
			HX_STACK_LINE(407)
			::zpp_nape::callbacks::ZPP_CbSet nxt = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(408)
			::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool->next = null();
			HX_STACK_LINE(409)
			::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(414)
		while(((::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool != null()))){
			HX_STACK_LINE(416)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair nxt = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(417)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(418)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(423)
		while(((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool != null()))){
			HX_STACK_LINE(425)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener nxt = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(426)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool->next = null();
			HX_STACK_LINE(427)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(432)
		while(((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool != null()))){
			HX_STACK_LINE(434)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener nxt = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(435)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool->next = null();
			HX_STACK_LINE(436)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(441)
		while(((::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool != null()))){
			HX_STACK_LINE(443)
			::zpp_nape::callbacks::ZPP_Callback nxt = ::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(444)
			::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool->next = null();
			HX_STACK_LINE(445)
			::zpp_nape::callbacks::ZPP_Callback_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(450)
		while(((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool != null()))){
			HX_STACK_LINE(452)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter nxt = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(453)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(454)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(459)
		while(((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool != null()))){
			HX_STACK_LINE(461)
			::zpp_nape::util::ZPP_Set_ZPP_Body nxt = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(462)
			::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool->next = null();
			HX_STACK_LINE(463)
			::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(468)
		while(((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool != null()))){
			HX_STACK_LINE(470)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nxt = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(471)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(472)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(477)
		while(((::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool != null()))){
			HX_STACK_LINE(479)
			::zpp_nape::geom::ZPP_Mat23 nxt = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(480)
			::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool->next = null();
			HX_STACK_LINE(481)
			::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(486)
		while(((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool != null()))){
			HX_STACK_LINE(488)
			::zpp_nape::geom::ZPP_GeomVert nxt = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(489)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(490)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(495)
		while(((::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool != null()))){
			HX_STACK_LINE(497)
			::zpp_nape::geom::ZPP_GeomVertexIterator nxt = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(498)
			::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool->next = null();
			HX_STACK_LINE(499)
			::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(504)
		while(((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool != null()))){
			HX_STACK_LINE(506)
			::zpp_nape::geom::ZPP_Vec2 nxt = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(507)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool->next = null();
			HX_STACK_LINE(508)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(513)
		while(((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool != null()))){
			HX_STACK_LINE(515)
			::zpp_nape::geom::ZPP_CutVert nxt = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(516)
			::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(517)
			::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(522)
		while(((::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool != null()))){
			HX_STACK_LINE(524)
			::zpp_nape::geom::ZPP_PartitionPair nxt = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(525)
			::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(526)
			::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(531)
		while(((::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool != null()))){
			HX_STACK_LINE(533)
			::zpp_nape::geom::ZPP_CutInt nxt = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(534)
			::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool->next = null();
			HX_STACK_LINE(535)
			::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(540)
		while(((::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool != null()))){
			HX_STACK_LINE(542)
			::zpp_nape::util::ZNPNode_ZPP_CutInt nxt = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(543)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool->next = null();
			HX_STACK_LINE(544)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(549)
		while(((::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool != null()))){
			HX_STACK_LINE(551)
			::zpp_nape::util::ZNPNode_ZPP_CutVert nxt = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(552)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(553)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(558)
		while(((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool != null()))){
			HX_STACK_LINE(560)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nxt = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(561)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(562)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(567)
		while(((::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool != null()))){
			HX_STACK_LINE(569)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex nxt = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(570)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool->next = null();
			HX_STACK_LINE(571)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(576)
		while(((::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool != null()))){
			HX_STACK_LINE(578)
			::zpp_nape::geom::ZPP_PartitionVertex nxt = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(579)
			::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool->next = null();
			HX_STACK_LINE(580)
			::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(585)
		while(((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool != null()))){
			HX_STACK_LINE(587)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nxt = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(588)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool->next = null();
			HX_STACK_LINE(589)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(594)
		while(((::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool != null()))){
			HX_STACK_LINE(596)
			::zpp_nape::geom::ZPP_PartitionedPoly nxt = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(597)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool->next = null();
			HX_STACK_LINE(598)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(603)
		while(((::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool != null()))){
			HX_STACK_LINE(605)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly nxt = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(606)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool->next = null();
			HX_STACK_LINE(607)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(612)
		while(((::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool != null()))){
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_SimplifyV nxt = ::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(615)
			::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool->next = null();
			HX_STACK_LINE(616)
			::zpp_nape::geom::ZPP_SimplifyV_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(621)
		while(((::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool != null()))){
			HX_STACK_LINE(623)
			::zpp_nape::geom::ZPP_SimplifyP nxt = ::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(624)
			::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool->next = null();
			HX_STACK_LINE(625)
			::zpp_nape::geom::ZPP_SimplifyP_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(630)
		while(((::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool != null()))){
			HX_STACK_LINE(632)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP nxt = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(633)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool->next = null();
			HX_STACK_LINE(634)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(639)
		while(((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool != null()))){
			HX_STACK_LINE(641)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert nxt = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(642)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(643)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(648)
		while(((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool != null()))){
			HX_STACK_LINE(650)
			::zpp_nape::geom::ZPP_AABB nxt = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(651)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool->next = null();
			HX_STACK_LINE(652)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(657)
		while(((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool != null()))){
			HX_STACK_LINE(659)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nxt = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(660)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(661)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(666)
		while(((::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool != null()))){
			HX_STACK_LINE(668)
			::zpp_nape::geom::ZPP_SimpleVert nxt = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(669)
			::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(670)
			::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(675)
		while(((::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool != null()))){
			HX_STACK_LINE(677)
			::zpp_nape::geom::ZPP_SimpleSeg nxt = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(678)
			::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool->next = null();
			HX_STACK_LINE(679)
			::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(684)
		while(((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool != null()))){
			HX_STACK_LINE(686)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nxt = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(687)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool->next = null();
			HX_STACK_LINE(688)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(693)
		while(((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool != null()))){
			HX_STACK_LINE(695)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nxt = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(696)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool->next = null();
			HX_STACK_LINE(697)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(702)
		while(((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool != null()))){
			HX_STACK_LINE(704)
			::zpp_nape::geom::ZPP_SimpleEvent nxt = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(705)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool->next = null();
			HX_STACK_LINE(706)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(711)
		while(((::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool != null()))){
			HX_STACK_LINE(713)
			::zpp_nape::util::Hashable2_Boolfalse nxt = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(714)
			::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool->next = null();
			HX_STACK_LINE(715)
			::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(720)
		while(((::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool != null()))){
			HX_STACK_LINE(722)
			::zpp_nape::geom::ZPP_ToiEvent nxt = ::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(723)
			::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool->next = null();
			HX_STACK_LINE(724)
			::zpp_nape::geom::ZPP_ToiEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(729)
		while(((::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool != null()))){
			HX_STACK_LINE(731)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert nxt = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(732)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool->next = null();
			HX_STACK_LINE(733)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(738)
		while(((::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool != null()))){
			HX_STACK_LINE(740)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent nxt = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(741)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool->next = null();
			HX_STACK_LINE(742)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(747)
		while(((::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool != null()))){
			HX_STACK_LINE(749)
			::zpp_nape::geom::ZPP_MarchSpan nxt = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(750)
			::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool->next = null();
			HX_STACK_LINE(751)
			::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(756)
		while(((::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool != null()))){
			HX_STACK_LINE(758)
			::zpp_nape::geom::ZPP_MarchPair nxt = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(759)
			::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(760)
			::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(765)
		while(((::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool != null()))){
			HX_STACK_LINE(767)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 nxt = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(768)
			::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool->next = null();
			HX_STACK_LINE(769)
			::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(774)
		while(((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool != null()))){
			HX_STACK_LINE(776)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair nxt = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(777)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(778)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(783)
		while(((::zpp_nape::shape::ZPP_Edge_obj::zpp_pool != null()))){
			HX_STACK_LINE(785)
			::zpp_nape::shape::ZPP_Edge nxt = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(786)
			::zpp_nape::shape::ZPP_Edge_obj::zpp_pool->next = null();
			HX_STACK_LINE(787)
			::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(792)
		while(((::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool != null()))){
			HX_STACK_LINE(794)
			::zpp_nape::util::ZNPNode_ZPP_Edge nxt = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(795)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool->next = null();
			HX_STACK_LINE(796)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(801)
		while(((::zpp_nape::space::ZPP_SweepData_obj::zpp_pool != null()))){
			HX_STACK_LINE(803)
			::zpp_nape::space::ZPP_SweepData nxt = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(804)
			::zpp_nape::space::ZPP_SweepData_obj::zpp_pool->next = null();
			HX_STACK_LINE(805)
			::zpp_nape::space::ZPP_SweepData_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(810)
		while(((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool != null()))){
			HX_STACK_LINE(812)
			::zpp_nape::space::ZPP_AABBNode nxt = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(813)
			::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool->next = null();
			HX_STACK_LINE(814)
			::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(819)
		while(((::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool != null()))){
			HX_STACK_LINE(821)
			::zpp_nape::space::ZPP_AABBPair nxt = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(822)
			::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool->next = null();
			HX_STACK_LINE(823)
			::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(828)
		while(((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool != null()))){
			HX_STACK_LINE(830)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode nxt = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(831)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool->next = null();
			HX_STACK_LINE(832)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(837)
		while(((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool != null()))){
			HX_STACK_LINE(839)
			::zpp_nape::dynamics::ZPP_Contact nxt = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(840)
			::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool->next = null();
			HX_STACK_LINE(841)
			::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(846)
		while(((::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool != null()))){
			HX_STACK_LINE(848)
			::zpp_nape::util::ZNPNode_ZPP_Component nxt = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(849)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool->next = null();
			HX_STACK_LINE(850)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(855)
		while(((::zpp_nape::space::ZPP_Island_obj::zpp_pool != null()))){
			HX_STACK_LINE(857)
			::zpp_nape::space::ZPP_Island nxt = ::zpp_nape::space::ZPP_Island_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(858)
			::zpp_nape::space::ZPP_Island_obj::zpp_pool->next = null();
			HX_STACK_LINE(859)
			::zpp_nape::space::ZPP_Island_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(864)
		while(((::zpp_nape::space::ZPP_Component_obj::zpp_pool != null()))){
			HX_STACK_LINE(866)
			::zpp_nape::space::ZPP_Component nxt = ::zpp_nape::space::ZPP_Component_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(867)
			::zpp_nape::space::ZPP_Component_obj::zpp_pool->next = null();
			HX_STACK_LINE(868)
			::zpp_nape::space::ZPP_Component_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(873)
		while(((::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool != null()))){
			HX_STACK_LINE(875)
			::zpp_nape::dynamics::ZPP_SensorArbiter nxt = ::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(876)
			::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(877)
			::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(882)
		while(((::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool != null()))){
			HX_STACK_LINE(884)
			::zpp_nape::dynamics::ZPP_FluidArbiter nxt = ::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(885)
			::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(886)
			::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(891)
		while(((::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool != null()))){
			HX_STACK_LINE(893)
			::zpp_nape::space::ZPP_CallbackSet nxt = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(894)
			::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool->next = null();
			HX_STACK_LINE(895)
			::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(900)
		while(((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool != null()))){
			HX_STACK_LINE(902)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet nxt = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(903)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool->next = null();
			HX_STACK_LINE(904)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(909)
		while(((::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool != null()))){
			HX_STACK_LINE(911)
			::zpp_nape::dynamics::ZPP_ColArbiter nxt = ::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(912)
			::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(913)
			::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(918)
		while(((::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool != null()))){
			HX_STACK_LINE(920)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter nxt = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(921)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(922)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(927)
		while(((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool != null()))){
			HX_STACK_LINE(929)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter nxt = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(930)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(931)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(936)
		while(((::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool != null()))){
			HX_STACK_LINE(938)
			::zpp_nape::util::ZNPNode_ZPP_Listener nxt = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(939)
			::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool->next = null();
			HX_STACK_LINE(940)
			::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(945)
		while(((::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool != null()))){
			HX_STACK_LINE(947)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter nxt = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(948)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool->next = null();
			HX_STACK_LINE(949)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(954)
		while(((::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool != null()))){
			HX_STACK_LINE(956)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup nxt = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(957)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool->next = null();
			HX_STACK_LINE(958)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(963)
		while(((::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool != null()))){
			HX_STACK_LINE(965)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent nxt = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(966)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool->next = null();
			HX_STACK_LINE(967)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(972)
		while(((::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool != null()))){
			HX_STACK_LINE(974)
			::zpp_nape::dynamics::ZPP_InteractionFilter nxt = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(975)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool->next = null();
			HX_STACK_LINE(976)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(981)
		while(((::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool != null()))){
			HX_STACK_LINE(983)
			::zpp_nape::util::ZNPNode_ConvexResult nxt = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(984)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool->next = null();
			HX_STACK_LINE(985)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(990)
		while(((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool != null()))){
			HX_STACK_LINE(992)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly nxt = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(993)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool->next = null();
			HX_STACK_LINE(994)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(999)
		while(((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool != null()))){
			HX_STACK_LINE(1001)
			::zpp_nape::util::ZNPNode_RayResult nxt = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1002)
			::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool->next = null();
			HX_STACK_LINE(1003)
			::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = nxt;
		}
		HX_STACK_LINE(1009)
		while(((::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly != null()))){
			HX_STACK_LINE(1011)
			::nape::geom::GeomPoly nxt = ::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly->zpp_pool;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1012)
			::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly->zpp_pool = null();
			HX_STACK_LINE(1013)
			::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly = nxt;
		}
		HX_STACK_LINE(1018)
		while(((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 != null()))){
			HX_STACK_LINE(1020)
			::nape::geom::Vec2 nxt = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2->zpp_pool;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1021)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2->zpp_pool = null();
			HX_STACK_LINE(1022)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = nxt;
		}
		HX_STACK_LINE(1027)
		while(((::zpp_nape::util::ZPP_PubPool_obj::poolVec3 != null()))){
			HX_STACK_LINE(1029)
			::nape::geom::Vec3 nxt = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3->zpp_pool;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1030)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec3->zpp_pool = null();
			HX_STACK_LINE(1031)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec3 = nxt;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,clearObjectPools,(void))


Debug_obj::Debug_obj()
{
}

void Debug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Debug);
	HX_MARK_END_CLASS();
}

void Debug_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Debug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clearObjectPools") ) { return clearObjectPools_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Debug_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("version"),
	HX_CSTRING("clearObjectPools"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
};

Class Debug_obj::__mClass;

void Debug_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.util.Debug"), hx::TCanCast< Debug_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Debug_obj::__boot()
{
}

} // end namespace nape
} // end namespace util
