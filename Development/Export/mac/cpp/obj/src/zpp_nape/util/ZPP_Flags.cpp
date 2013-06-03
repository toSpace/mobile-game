#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerType
#include <nape/callbacks/ListenerType.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterType
#include <nape/dynamics/ArbiterType.h>
#endif
#ifndef INCLUDED_nape_geom_Winding
#include <nape/geom/Winding.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_GravMassMode
#include <nape/phys/GravMassMode.h>
#endif
#ifndef INCLUDED_nape_phys_InertiaMode
#include <nape/phys/InertiaMode.h>
#endif
#ifndef INCLUDED_nape_phys_MassMode
#include <nape/phys/MassMode.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeType
#include <nape/shape/ShapeType.h>
#endif
#ifndef INCLUDED_nape_shape_ValidationResult
#include <nape/shape/ValidationResult.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Flags_obj::__construct()
{
	return null();
}

ZPP_Flags_obj::~ZPP_Flags_obj() { }

Dynamic ZPP_Flags_obj::__CreateEmpty() { return  new ZPP_Flags_obj; }
hx::ObjectPtr< ZPP_Flags_obj > ZPP_Flags_obj::__new()
{  hx::ObjectPtr< ZPP_Flags_obj > result = new ZPP_Flags_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Flags_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Flags_obj > result = new ZPP_Flags_obj();
	result->__construct();
	return result;}

bool ZPP_Flags_obj::internal;

int ZPP_Flags_obj::id_ImmState_ACCEPT;

int ZPP_Flags_obj::id_ImmState_IGNORE;

int ZPP_Flags_obj::id_ImmState_ALWAYS;

int ZPP_Flags_obj::id_GravMassMode_DEFAULT;

int ZPP_Flags_obj::id_GravMassMode_FIXED;

int ZPP_Flags_obj::id_GravMassMode_SCALED;

int ZPP_Flags_obj::id_InertiaMode_DEFAULT;

int ZPP_Flags_obj::id_InertiaMode_FIXED;

int ZPP_Flags_obj::id_MassMode_DEFAULT;

int ZPP_Flags_obj::id_MassMode_FIXED;

int ZPP_Flags_obj::id_BodyType_STATIC;

int ZPP_Flags_obj::id_BodyType_DYNAMIC;

int ZPP_Flags_obj::id_BodyType_KINEMATIC;

int ZPP_Flags_obj::id_ListenerType_BODY;

int ZPP_Flags_obj::id_ListenerType_CONSTRAINT;

int ZPP_Flags_obj::id_ListenerType_INTERACTION;

int ZPP_Flags_obj::id_ListenerType_PRE;

int ZPP_Flags_obj::id_PreFlag_ACCEPT;

int ZPP_Flags_obj::id_PreFlag_IGNORE;

int ZPP_Flags_obj::id_PreFlag_ACCEPT_ONCE;

int ZPP_Flags_obj::id_PreFlag_IGNORE_ONCE;

int ZPP_Flags_obj::id_CbEvent_BEGIN;

int ZPP_Flags_obj::id_CbEvent_ONGOING;

int ZPP_Flags_obj::id_CbEvent_END;

int ZPP_Flags_obj::id_CbEvent_WAKE;

int ZPP_Flags_obj::id_CbEvent_SLEEP;

int ZPP_Flags_obj::id_CbEvent_BREAK;

int ZPP_Flags_obj::id_CbEvent_PRE;

int ZPP_Flags_obj::id_InteractionType_COLLISION;

int ZPP_Flags_obj::id_InteractionType_SENSOR;

int ZPP_Flags_obj::id_InteractionType_FLUID;

int ZPP_Flags_obj::id_InteractionType_ANY;

int ZPP_Flags_obj::id_Winding_UNDEFINED;

int ZPP_Flags_obj::id_Winding_CLOCKWISE;

int ZPP_Flags_obj::id_Winding_ANTICLOCKWISE;

int ZPP_Flags_obj::id_ValidationResult_VALID;

int ZPP_Flags_obj::id_ValidationResult_DEGENERATE;

int ZPP_Flags_obj::id_ValidationResult_CONCAVE;

int ZPP_Flags_obj::id_ValidationResult_SELF_INTERSECTING;

int ZPP_Flags_obj::id_ShapeType_CIRCLE;

int ZPP_Flags_obj::id_ShapeType_POLYGON;

int ZPP_Flags_obj::id_Broadphase_DYNAMIC_AABB_TREE;

int ZPP_Flags_obj::id_Broadphase_SWEEP_AND_PRUNE;

int ZPP_Flags_obj::id_ArbiterType_COLLISION;

int ZPP_Flags_obj::id_ArbiterType_SENSOR;

int ZPP_Flags_obj::id_ArbiterType_FLUID;

::nape::phys::GravMassMode ZPP_Flags_obj::GravMassMode_DEFAULT;

::nape::phys::GravMassMode ZPP_Flags_obj::GravMassMode_FIXED;

::nape::phys::GravMassMode ZPP_Flags_obj::GravMassMode_SCALED;

::nape::phys::InertiaMode ZPP_Flags_obj::InertiaMode_DEFAULT;

::nape::phys::InertiaMode ZPP_Flags_obj::InertiaMode_FIXED;

::nape::phys::MassMode ZPP_Flags_obj::MassMode_DEFAULT;

::nape::phys::MassMode ZPP_Flags_obj::MassMode_FIXED;

::nape::phys::BodyType ZPP_Flags_obj::BodyType_STATIC;

::nape::phys::BodyType ZPP_Flags_obj::BodyType_DYNAMIC;

::nape::phys::BodyType ZPP_Flags_obj::BodyType_KINEMATIC;

::nape::callbacks::ListenerType ZPP_Flags_obj::ListenerType_BODY;

::nape::callbacks::ListenerType ZPP_Flags_obj::ListenerType_CONSTRAINT;

::nape::callbacks::ListenerType ZPP_Flags_obj::ListenerType_INTERACTION;

::nape::callbacks::ListenerType ZPP_Flags_obj::ListenerType_PRE;

::nape::callbacks::PreFlag ZPP_Flags_obj::PreFlag_ACCEPT;

::nape::callbacks::PreFlag ZPP_Flags_obj::PreFlag_IGNORE;

::nape::callbacks::PreFlag ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;

::nape::callbacks::PreFlag ZPP_Flags_obj::PreFlag_IGNORE_ONCE;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_BEGIN;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_ONGOING;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_END;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_WAKE;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_SLEEP;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_BREAK;

::nape::callbacks::CbEvent ZPP_Flags_obj::CbEvent_PRE;

::nape::callbacks::InteractionType ZPP_Flags_obj::InteractionType_COLLISION;

::nape::callbacks::InteractionType ZPP_Flags_obj::InteractionType_SENSOR;

::nape::callbacks::InteractionType ZPP_Flags_obj::InteractionType_FLUID;

::nape::callbacks::InteractionType ZPP_Flags_obj::InteractionType_ANY;

::nape::geom::Winding ZPP_Flags_obj::Winding_UNDEFINED;

::nape::geom::Winding ZPP_Flags_obj::Winding_CLOCKWISE;

::nape::geom::Winding ZPP_Flags_obj::Winding_ANTICLOCKWISE;

::nape::shape::ValidationResult ZPP_Flags_obj::ValidationResult_VALID;

::nape::shape::ValidationResult ZPP_Flags_obj::ValidationResult_DEGENERATE;

::nape::shape::ValidationResult ZPP_Flags_obj::ValidationResult_CONCAVE;

::nape::shape::ValidationResult ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING;

::nape::shape::ShapeType ZPP_Flags_obj::ShapeType_CIRCLE;

::nape::shape::ShapeType ZPP_Flags_obj::ShapeType_POLYGON;

::nape::space::Broadphase ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;

::nape::space::Broadphase ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;

::nape::dynamics::ArbiterType ZPP_Flags_obj::ArbiterType_COLLISION;

::nape::dynamics::ArbiterType ZPP_Flags_obj::ArbiterType_SENSOR;

::nape::dynamics::ArbiterType ZPP_Flags_obj::ArbiterType_FLUID;


ZPP_Flags_obj::ZPP_Flags_obj()
{
}

void ZPP_Flags_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Flags);
	HX_MARK_END_CLASS();
}

void ZPP_Flags_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_Flags_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { return internal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"CbEvent_END") ) { return CbEvent_END; }
		if (HX_FIELD_EQ(inName,"CbEvent_PRE") ) { return CbEvent_PRE; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CbEvent_WAKE") ) { return CbEvent_WAKE; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"CbEvent_BEGIN") ) { return CbEvent_BEGIN; }
		if (HX_FIELD_EQ(inName,"CbEvent_SLEEP") ) { return CbEvent_SLEEP; }
		if (HX_FIELD_EQ(inName,"CbEvent_BREAK") ) { return CbEvent_BREAK; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"id_CbEvent_END") ) { return id_CbEvent_END; }
		if (HX_FIELD_EQ(inName,"id_CbEvent_PRE") ) { return id_CbEvent_PRE; }
		if (HX_FIELD_EQ(inName,"MassMode_FIXED") ) { return MassMode_FIXED; }
		if (HX_FIELD_EQ(inName,"PreFlag_ACCEPT") ) { return PreFlag_ACCEPT; }
		if (HX_FIELD_EQ(inName,"PreFlag_IGNORE") ) { return PreFlag_IGNORE; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"id_CbEvent_WAKE") ) { return id_CbEvent_WAKE; }
		if (HX_FIELD_EQ(inName,"BodyType_STATIC") ) { return BodyType_STATIC; }
		if (HX_FIELD_EQ(inName,"CbEvent_ONGOING") ) { return CbEvent_ONGOING; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"id_CbEvent_BEGIN") ) { return id_CbEvent_BEGIN; }
		if (HX_FIELD_EQ(inName,"id_CbEvent_SLEEP") ) { return id_CbEvent_SLEEP; }
		if (HX_FIELD_EQ(inName,"id_CbEvent_BREAK") ) { return id_CbEvent_BREAK; }
		if (HX_FIELD_EQ(inName,"MassMode_DEFAULT") ) { return MassMode_DEFAULT; }
		if (HX_FIELD_EQ(inName,"BodyType_DYNAMIC") ) { return BodyType_DYNAMIC; }
		if (HX_FIELD_EQ(inName,"ListenerType_PRE") ) { return ListenerType_PRE; }
		if (HX_FIELD_EQ(inName,"ShapeType_CIRCLE") ) { return ShapeType_CIRCLE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"id_MassMode_FIXED") ) { return id_MassMode_FIXED; }
		if (HX_FIELD_EQ(inName,"id_PreFlag_ACCEPT") ) { return id_PreFlag_ACCEPT; }
		if (HX_FIELD_EQ(inName,"id_PreFlag_IGNORE") ) { return id_PreFlag_IGNORE; }
		if (HX_FIELD_EQ(inName,"InertiaMode_FIXED") ) { return InertiaMode_FIXED; }
		if (HX_FIELD_EQ(inName,"ListenerType_BODY") ) { return ListenerType_BODY; }
		if (HX_FIELD_EQ(inName,"Winding_UNDEFINED") ) { return Winding_UNDEFINED; }
		if (HX_FIELD_EQ(inName,"Winding_CLOCKWISE") ) { return Winding_CLOCKWISE; }
		if (HX_FIELD_EQ(inName,"ShapeType_POLYGON") ) { return ShapeType_POLYGON; }
		if (HX_FIELD_EQ(inName,"ArbiterType_FLUID") ) { return ArbiterType_FLUID; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"id_ImmState_ACCEPT") ) { return id_ImmState_ACCEPT; }
		if (HX_FIELD_EQ(inName,"id_ImmState_IGNORE") ) { return id_ImmState_IGNORE; }
		if (HX_FIELD_EQ(inName,"id_ImmState_ALWAYS") ) { return id_ImmState_ALWAYS; }
		if (HX_FIELD_EQ(inName,"id_BodyType_STATIC") ) { return id_BodyType_STATIC; }
		if (HX_FIELD_EQ(inName,"id_CbEvent_ONGOING") ) { return id_CbEvent_ONGOING; }
		if (HX_FIELD_EQ(inName,"GravMassMode_FIXED") ) { return GravMassMode_FIXED; }
		if (HX_FIELD_EQ(inName,"BodyType_KINEMATIC") ) { return BodyType_KINEMATIC; }
		if (HX_FIELD_EQ(inName,"ArbiterType_SENSOR") ) { return ArbiterType_SENSOR; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"id_MassMode_DEFAULT") ) { return id_MassMode_DEFAULT; }
		if (HX_FIELD_EQ(inName,"id_BodyType_DYNAMIC") ) { return id_BodyType_DYNAMIC; }
		if (HX_FIELD_EQ(inName,"id_ListenerType_PRE") ) { return id_ListenerType_PRE; }
		if (HX_FIELD_EQ(inName,"id_ShapeType_CIRCLE") ) { return id_ShapeType_CIRCLE; }
		if (HX_FIELD_EQ(inName,"GravMassMode_SCALED") ) { return GravMassMode_SCALED; }
		if (HX_FIELD_EQ(inName,"InertiaMode_DEFAULT") ) { return InertiaMode_DEFAULT; }
		if (HX_FIELD_EQ(inName,"PreFlag_ACCEPT_ONCE") ) { return PreFlag_ACCEPT_ONCE; }
		if (HX_FIELD_EQ(inName,"PreFlag_IGNORE_ONCE") ) { return PreFlag_IGNORE_ONCE; }
		if (HX_FIELD_EQ(inName,"InteractionType_ANY") ) { return InteractionType_ANY; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"id_InertiaMode_FIXED") ) { return id_InertiaMode_FIXED; }
		if (HX_FIELD_EQ(inName,"id_ListenerType_BODY") ) { return id_ListenerType_BODY; }
		if (HX_FIELD_EQ(inName,"id_Winding_UNDEFINED") ) { return id_Winding_UNDEFINED; }
		if (HX_FIELD_EQ(inName,"id_Winding_CLOCKWISE") ) { return id_Winding_CLOCKWISE; }
		if (HX_FIELD_EQ(inName,"id_ShapeType_POLYGON") ) { return id_ShapeType_POLYGON; }
		if (HX_FIELD_EQ(inName,"id_ArbiterType_FLUID") ) { return id_ArbiterType_FLUID; }
		if (HX_FIELD_EQ(inName,"GravMassMode_DEFAULT") ) { return GravMassMode_DEFAULT; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"id_GravMassMode_FIXED") ) { return id_GravMassMode_FIXED; }
		if (HX_FIELD_EQ(inName,"id_BodyType_KINEMATIC") ) { return id_BodyType_KINEMATIC; }
		if (HX_FIELD_EQ(inName,"id_ArbiterType_SENSOR") ) { return id_ArbiterType_SENSOR; }
		if (HX_FIELD_EQ(inName,"InteractionType_FLUID") ) { return InteractionType_FLUID; }
		if (HX_FIELD_EQ(inName,"Winding_ANTICLOCKWISE") ) { return Winding_ANTICLOCKWISE; }
		if (HX_FIELD_EQ(inName,"ArbiterType_COLLISION") ) { return ArbiterType_COLLISION; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"id_GravMassMode_SCALED") ) { return id_GravMassMode_SCALED; }
		if (HX_FIELD_EQ(inName,"id_InertiaMode_DEFAULT") ) { return id_InertiaMode_DEFAULT; }
		if (HX_FIELD_EQ(inName,"id_PreFlag_ACCEPT_ONCE") ) { return id_PreFlag_ACCEPT_ONCE; }
		if (HX_FIELD_EQ(inName,"id_PreFlag_IGNORE_ONCE") ) { return id_PreFlag_IGNORE_ONCE; }
		if (HX_FIELD_EQ(inName,"id_InteractionType_ANY") ) { return id_InteractionType_ANY; }
		if (HX_FIELD_EQ(inName,"InteractionType_SENSOR") ) { return InteractionType_SENSOR; }
		if (HX_FIELD_EQ(inName,"ValidationResult_VALID") ) { return ValidationResult_VALID; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"id_GravMassMode_DEFAULT") ) { return id_GravMassMode_DEFAULT; }
		if (HX_FIELD_EQ(inName,"ListenerType_CONSTRAINT") ) { return ListenerType_CONSTRAINT; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"id_InteractionType_FLUID") ) { return id_InteractionType_FLUID; }
		if (HX_FIELD_EQ(inName,"id_Winding_ANTICLOCKWISE") ) { return id_Winding_ANTICLOCKWISE; }
		if (HX_FIELD_EQ(inName,"id_ArbiterType_COLLISION") ) { return id_ArbiterType_COLLISION; }
		if (HX_FIELD_EQ(inName,"ListenerType_INTERACTION") ) { return ListenerType_INTERACTION; }
		if (HX_FIELD_EQ(inName,"ValidationResult_CONCAVE") ) { return ValidationResult_CONCAVE; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"id_InteractionType_SENSOR") ) { return id_InteractionType_SENSOR; }
		if (HX_FIELD_EQ(inName,"id_ValidationResult_VALID") ) { return id_ValidationResult_VALID; }
		if (HX_FIELD_EQ(inName,"InteractionType_COLLISION") ) { return InteractionType_COLLISION; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"id_ListenerType_CONSTRAINT") ) { return id_ListenerType_CONSTRAINT; }
		if (HX_FIELD_EQ(inName,"Broadphase_SWEEP_AND_PRUNE") ) { return Broadphase_SWEEP_AND_PRUNE; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"id_ListenerType_INTERACTION") ) { return id_ListenerType_INTERACTION; }
		if (HX_FIELD_EQ(inName,"id_ValidationResult_CONCAVE") ) { return id_ValidationResult_CONCAVE; }
		if (HX_FIELD_EQ(inName,"ValidationResult_DEGENERATE") ) { return ValidationResult_DEGENERATE; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"id_InteractionType_COLLISION") ) { return id_InteractionType_COLLISION; }
		if (HX_FIELD_EQ(inName,"Broadphase_DYNAMIC_AABB_TREE") ) { return Broadphase_DYNAMIC_AABB_TREE; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"id_Broadphase_SWEEP_AND_PRUNE") ) { return id_Broadphase_SWEEP_AND_PRUNE; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"id_ValidationResult_DEGENERATE") ) { return id_ValidationResult_DEGENERATE; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"id_Broadphase_DYNAMIC_AABB_TREE") ) { return id_Broadphase_DYNAMIC_AABB_TREE; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"ValidationResult_SELF_INTERSECTING") ) { return ValidationResult_SELF_INTERSECTING; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"id_ValidationResult_SELF_INTERSECTING") ) { return id_ValidationResult_SELF_INTERSECTING; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Flags_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"CbEvent_END") ) { CbEvent_END=inValue.Cast< ::nape::callbacks::CbEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CbEvent_PRE") ) { CbEvent_PRE=inValue.Cast< ::nape::callbacks::CbEvent >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CbEvent_WAKE") ) { CbEvent_WAKE=inValue.Cast< ::nape::callbacks::CbEvent >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"CbEvent_BEGIN") ) { CbEvent_BEGIN=inValue.Cast< ::nape::callbacks::CbEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CbEvent_SLEEP") ) { CbEvent_SLEEP=inValue.Cast< ::nape::callbacks::CbEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CbEvent_BREAK") ) { CbEvent_BREAK=inValue.Cast< ::nape::callbacks::CbEvent >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"id_CbEvent_END") ) { id_CbEvent_END=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_CbEvent_PRE") ) { id_CbEvent_PRE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MassMode_FIXED") ) { MassMode_FIXED=inValue.Cast< ::nape::phys::MassMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PreFlag_ACCEPT") ) { PreFlag_ACCEPT=inValue.Cast< ::nape::callbacks::PreFlag >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PreFlag_IGNORE") ) { PreFlag_IGNORE=inValue.Cast< ::nape::callbacks::PreFlag >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"id_CbEvent_WAKE") ) { id_CbEvent_WAKE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BodyType_STATIC") ) { BodyType_STATIC=inValue.Cast< ::nape::phys::BodyType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CbEvent_ONGOING") ) { CbEvent_ONGOING=inValue.Cast< ::nape::callbacks::CbEvent >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"id_CbEvent_BEGIN") ) { id_CbEvent_BEGIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_CbEvent_SLEEP") ) { id_CbEvent_SLEEP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_CbEvent_BREAK") ) { id_CbEvent_BREAK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MassMode_DEFAULT") ) { MassMode_DEFAULT=inValue.Cast< ::nape::phys::MassMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BodyType_DYNAMIC") ) { BodyType_DYNAMIC=inValue.Cast< ::nape::phys::BodyType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ListenerType_PRE") ) { ListenerType_PRE=inValue.Cast< ::nape::callbacks::ListenerType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ShapeType_CIRCLE") ) { ShapeType_CIRCLE=inValue.Cast< ::nape::shape::ShapeType >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"id_MassMode_FIXED") ) { id_MassMode_FIXED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_PreFlag_ACCEPT") ) { id_PreFlag_ACCEPT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_PreFlag_IGNORE") ) { id_PreFlag_IGNORE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"InertiaMode_FIXED") ) { InertiaMode_FIXED=inValue.Cast< ::nape::phys::InertiaMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ListenerType_BODY") ) { ListenerType_BODY=inValue.Cast< ::nape::callbacks::ListenerType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Winding_UNDEFINED") ) { Winding_UNDEFINED=inValue.Cast< ::nape::geom::Winding >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Winding_CLOCKWISE") ) { Winding_CLOCKWISE=inValue.Cast< ::nape::geom::Winding >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ShapeType_POLYGON") ) { ShapeType_POLYGON=inValue.Cast< ::nape::shape::ShapeType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ArbiterType_FLUID") ) { ArbiterType_FLUID=inValue.Cast< ::nape::dynamics::ArbiterType >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"id_ImmState_ACCEPT") ) { id_ImmState_ACCEPT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_ImmState_IGNORE") ) { id_ImmState_IGNORE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_ImmState_ALWAYS") ) { id_ImmState_ALWAYS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_BodyType_STATIC") ) { id_BodyType_STATIC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_CbEvent_ONGOING") ) { id_CbEvent_ONGOING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GravMassMode_FIXED") ) { GravMassMode_FIXED=inValue.Cast< ::nape::phys::GravMassMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BodyType_KINEMATIC") ) { BodyType_KINEMATIC=inValue.Cast< ::nape::phys::BodyType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ArbiterType_SENSOR") ) { ArbiterType_SENSOR=inValue.Cast< ::nape::dynamics::ArbiterType >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"id_MassMode_DEFAULT") ) { id_MassMode_DEFAULT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_BodyType_DYNAMIC") ) { id_BodyType_DYNAMIC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_ListenerType_PRE") ) { id_ListenerType_PRE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_ShapeType_CIRCLE") ) { id_ShapeType_CIRCLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GravMassMode_SCALED") ) { GravMassMode_SCALED=inValue.Cast< ::nape::phys::GravMassMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"InertiaMode_DEFAULT") ) { InertiaMode_DEFAULT=inValue.Cast< ::nape::phys::InertiaMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PreFlag_ACCEPT_ONCE") ) { PreFlag_ACCEPT_ONCE=inValue.Cast< ::nape::callbacks::PreFlag >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PreFlag_IGNORE_ONCE") ) { PreFlag_IGNORE_ONCE=inValue.Cast< ::nape::callbacks::PreFlag >(); return inValue; }
		if (HX_FIELD_EQ(inName,"InteractionType_ANY") ) { InteractionType_ANY=inValue.Cast< ::nape::callbacks::InteractionType >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"id_InertiaMode_FIXED") ) { id_InertiaMode_FIXED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_ListenerType_BODY") ) { id_ListenerType_BODY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_Winding_UNDEFINED") ) { id_Winding_UNDEFINED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_Winding_CLOCKWISE") ) { id_Winding_CLOCKWISE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_ShapeType_POLYGON") ) { id_ShapeType_POLYGON=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_ArbiterType_FLUID") ) { id_ArbiterType_FLUID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GravMassMode_DEFAULT") ) { GravMassMode_DEFAULT=inValue.Cast< ::nape::phys::GravMassMode >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"id_GravMassMode_FIXED") ) { id_GravMassMode_FIXED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_BodyType_KINEMATIC") ) { id_BodyType_KINEMATIC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_ArbiterType_SENSOR") ) { id_ArbiterType_SENSOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"InteractionType_FLUID") ) { InteractionType_FLUID=inValue.Cast< ::nape::callbacks::InteractionType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Winding_ANTICLOCKWISE") ) { Winding_ANTICLOCKWISE=inValue.Cast< ::nape::geom::Winding >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ArbiterType_COLLISION") ) { ArbiterType_COLLISION=inValue.Cast< ::nape::dynamics::ArbiterType >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"id_GravMassMode_SCALED") ) { id_GravMassMode_SCALED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_InertiaMode_DEFAULT") ) { id_InertiaMode_DEFAULT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_PreFlag_ACCEPT_ONCE") ) { id_PreFlag_ACCEPT_ONCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_PreFlag_IGNORE_ONCE") ) { id_PreFlag_IGNORE_ONCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_InteractionType_ANY") ) { id_InteractionType_ANY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"InteractionType_SENSOR") ) { InteractionType_SENSOR=inValue.Cast< ::nape::callbacks::InteractionType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ValidationResult_VALID") ) { ValidationResult_VALID=inValue.Cast< ::nape::shape::ValidationResult >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"id_GravMassMode_DEFAULT") ) { id_GravMassMode_DEFAULT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ListenerType_CONSTRAINT") ) { ListenerType_CONSTRAINT=inValue.Cast< ::nape::callbacks::ListenerType >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"id_InteractionType_FLUID") ) { id_InteractionType_FLUID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_Winding_ANTICLOCKWISE") ) { id_Winding_ANTICLOCKWISE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_ArbiterType_COLLISION") ) { id_ArbiterType_COLLISION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ListenerType_INTERACTION") ) { ListenerType_INTERACTION=inValue.Cast< ::nape::callbacks::ListenerType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ValidationResult_CONCAVE") ) { ValidationResult_CONCAVE=inValue.Cast< ::nape::shape::ValidationResult >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"id_InteractionType_SENSOR") ) { id_InteractionType_SENSOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_ValidationResult_VALID") ) { id_ValidationResult_VALID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"InteractionType_COLLISION") ) { InteractionType_COLLISION=inValue.Cast< ::nape::callbacks::InteractionType >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"id_ListenerType_CONSTRAINT") ) { id_ListenerType_CONSTRAINT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Broadphase_SWEEP_AND_PRUNE") ) { Broadphase_SWEEP_AND_PRUNE=inValue.Cast< ::nape::space::Broadphase >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"id_ListenerType_INTERACTION") ) { id_ListenerType_INTERACTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id_ValidationResult_CONCAVE") ) { id_ValidationResult_CONCAVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ValidationResult_DEGENERATE") ) { ValidationResult_DEGENERATE=inValue.Cast< ::nape::shape::ValidationResult >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"id_InteractionType_COLLISION") ) { id_InteractionType_COLLISION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Broadphase_DYNAMIC_AABB_TREE") ) { Broadphase_DYNAMIC_AABB_TREE=inValue.Cast< ::nape::space::Broadphase >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"id_Broadphase_SWEEP_AND_PRUNE") ) { id_Broadphase_SWEEP_AND_PRUNE=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"id_ValidationResult_DEGENERATE") ) { id_ValidationResult_DEGENERATE=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"id_Broadphase_DYNAMIC_AABB_TREE") ) { id_Broadphase_DYNAMIC_AABB_TREE=inValue.Cast< int >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"ValidationResult_SELF_INTERSECTING") ) { ValidationResult_SELF_INTERSECTING=inValue.Cast< ::nape::shape::ValidationResult >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"id_ValidationResult_SELF_INTERSECTING") ) { id_ValidationResult_SELF_INTERSECTING=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Flags_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("internal"),
	HX_CSTRING("id_ImmState_ACCEPT"),
	HX_CSTRING("id_ImmState_IGNORE"),
	HX_CSTRING("id_ImmState_ALWAYS"),
	HX_CSTRING("id_GravMassMode_DEFAULT"),
	HX_CSTRING("id_GravMassMode_FIXED"),
	HX_CSTRING("id_GravMassMode_SCALED"),
	HX_CSTRING("id_InertiaMode_DEFAULT"),
	HX_CSTRING("id_InertiaMode_FIXED"),
	HX_CSTRING("id_MassMode_DEFAULT"),
	HX_CSTRING("id_MassMode_FIXED"),
	HX_CSTRING("id_BodyType_STATIC"),
	HX_CSTRING("id_BodyType_DYNAMIC"),
	HX_CSTRING("id_BodyType_KINEMATIC"),
	HX_CSTRING("id_ListenerType_BODY"),
	HX_CSTRING("id_ListenerType_CONSTRAINT"),
	HX_CSTRING("id_ListenerType_INTERACTION"),
	HX_CSTRING("id_ListenerType_PRE"),
	HX_CSTRING("id_PreFlag_ACCEPT"),
	HX_CSTRING("id_PreFlag_IGNORE"),
	HX_CSTRING("id_PreFlag_ACCEPT_ONCE"),
	HX_CSTRING("id_PreFlag_IGNORE_ONCE"),
	HX_CSTRING("id_CbEvent_BEGIN"),
	HX_CSTRING("id_CbEvent_ONGOING"),
	HX_CSTRING("id_CbEvent_END"),
	HX_CSTRING("id_CbEvent_WAKE"),
	HX_CSTRING("id_CbEvent_SLEEP"),
	HX_CSTRING("id_CbEvent_BREAK"),
	HX_CSTRING("id_CbEvent_PRE"),
	HX_CSTRING("id_InteractionType_COLLISION"),
	HX_CSTRING("id_InteractionType_SENSOR"),
	HX_CSTRING("id_InteractionType_FLUID"),
	HX_CSTRING("id_InteractionType_ANY"),
	HX_CSTRING("id_Winding_UNDEFINED"),
	HX_CSTRING("id_Winding_CLOCKWISE"),
	HX_CSTRING("id_Winding_ANTICLOCKWISE"),
	HX_CSTRING("id_ValidationResult_VALID"),
	HX_CSTRING("id_ValidationResult_DEGENERATE"),
	HX_CSTRING("id_ValidationResult_CONCAVE"),
	HX_CSTRING("id_ValidationResult_SELF_INTERSECTING"),
	HX_CSTRING("id_ShapeType_CIRCLE"),
	HX_CSTRING("id_ShapeType_POLYGON"),
	HX_CSTRING("id_Broadphase_DYNAMIC_AABB_TREE"),
	HX_CSTRING("id_Broadphase_SWEEP_AND_PRUNE"),
	HX_CSTRING("id_ArbiterType_COLLISION"),
	HX_CSTRING("id_ArbiterType_SENSOR"),
	HX_CSTRING("id_ArbiterType_FLUID"),
	HX_CSTRING("GravMassMode_DEFAULT"),
	HX_CSTRING("GravMassMode_FIXED"),
	HX_CSTRING("GravMassMode_SCALED"),
	HX_CSTRING("InertiaMode_DEFAULT"),
	HX_CSTRING("InertiaMode_FIXED"),
	HX_CSTRING("MassMode_DEFAULT"),
	HX_CSTRING("MassMode_FIXED"),
	HX_CSTRING("BodyType_STATIC"),
	HX_CSTRING("BodyType_DYNAMIC"),
	HX_CSTRING("BodyType_KINEMATIC"),
	HX_CSTRING("ListenerType_BODY"),
	HX_CSTRING("ListenerType_CONSTRAINT"),
	HX_CSTRING("ListenerType_INTERACTION"),
	HX_CSTRING("ListenerType_PRE"),
	HX_CSTRING("PreFlag_ACCEPT"),
	HX_CSTRING("PreFlag_IGNORE"),
	HX_CSTRING("PreFlag_ACCEPT_ONCE"),
	HX_CSTRING("PreFlag_IGNORE_ONCE"),
	HX_CSTRING("CbEvent_BEGIN"),
	HX_CSTRING("CbEvent_ONGOING"),
	HX_CSTRING("CbEvent_END"),
	HX_CSTRING("CbEvent_WAKE"),
	HX_CSTRING("CbEvent_SLEEP"),
	HX_CSTRING("CbEvent_BREAK"),
	HX_CSTRING("CbEvent_PRE"),
	HX_CSTRING("InteractionType_COLLISION"),
	HX_CSTRING("InteractionType_SENSOR"),
	HX_CSTRING("InteractionType_FLUID"),
	HX_CSTRING("InteractionType_ANY"),
	HX_CSTRING("Winding_UNDEFINED"),
	HX_CSTRING("Winding_CLOCKWISE"),
	HX_CSTRING("Winding_ANTICLOCKWISE"),
	HX_CSTRING("ValidationResult_VALID"),
	HX_CSTRING("ValidationResult_DEGENERATE"),
	HX_CSTRING("ValidationResult_CONCAVE"),
	HX_CSTRING("ValidationResult_SELF_INTERSECTING"),
	HX_CSTRING("ShapeType_CIRCLE"),
	HX_CSTRING("ShapeType_POLYGON"),
	HX_CSTRING("Broadphase_DYNAMIC_AABB_TREE"),
	HX_CSTRING("Broadphase_SWEEP_AND_PRUNE"),
	HX_CSTRING("ArbiterType_COLLISION"),
	HX_CSTRING("ArbiterType_SENSOR"),
	HX_CSTRING("ArbiterType_FLUID"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::internal,"internal");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ImmState_ACCEPT,"id_ImmState_ACCEPT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ImmState_IGNORE,"id_ImmState_IGNORE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ImmState_ALWAYS,"id_ImmState_ALWAYS");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_GravMassMode_DEFAULT,"id_GravMassMode_DEFAULT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_GravMassMode_FIXED,"id_GravMassMode_FIXED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_GravMassMode_SCALED,"id_GravMassMode_SCALED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_InertiaMode_DEFAULT,"id_InertiaMode_DEFAULT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_InertiaMode_FIXED,"id_InertiaMode_FIXED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_MassMode_DEFAULT,"id_MassMode_DEFAULT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_MassMode_FIXED,"id_MassMode_FIXED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_BodyType_STATIC,"id_BodyType_STATIC");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_BodyType_DYNAMIC,"id_BodyType_DYNAMIC");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_BodyType_KINEMATIC,"id_BodyType_KINEMATIC");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_BODY,"id_ListenerType_BODY");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_CONSTRAINT,"id_ListenerType_CONSTRAINT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_INTERACTION,"id_ListenerType_INTERACTION");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_PRE,"id_ListenerType_PRE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_ACCEPT,"id_PreFlag_ACCEPT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_IGNORE,"id_PreFlag_IGNORE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_ACCEPT_ONCE,"id_PreFlag_ACCEPT_ONCE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_IGNORE_ONCE,"id_PreFlag_IGNORE_ONCE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_BEGIN,"id_CbEvent_BEGIN");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_ONGOING,"id_CbEvent_ONGOING");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_END,"id_CbEvent_END");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_WAKE,"id_CbEvent_WAKE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_SLEEP,"id_CbEvent_SLEEP");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_BREAK,"id_CbEvent_BREAK");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_PRE,"id_CbEvent_PRE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_COLLISION,"id_InteractionType_COLLISION");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_SENSOR,"id_InteractionType_SENSOR");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_FLUID,"id_InteractionType_FLUID");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_ANY,"id_InteractionType_ANY");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_Winding_UNDEFINED,"id_Winding_UNDEFINED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_Winding_CLOCKWISE,"id_Winding_CLOCKWISE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_Winding_ANTICLOCKWISE,"id_Winding_ANTICLOCKWISE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_VALID,"id_ValidationResult_VALID");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_DEGENERATE,"id_ValidationResult_DEGENERATE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_CONCAVE,"id_ValidationResult_CONCAVE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_SELF_INTERSECTING,"id_ValidationResult_SELF_INTERSECTING");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ShapeType_CIRCLE,"id_ShapeType_CIRCLE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ShapeType_POLYGON,"id_ShapeType_POLYGON");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_Broadphase_DYNAMIC_AABB_TREE,"id_Broadphase_DYNAMIC_AABB_TREE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_Broadphase_SWEEP_AND_PRUNE,"id_Broadphase_SWEEP_AND_PRUNE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ArbiterType_COLLISION,"id_ArbiterType_COLLISION");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ArbiterType_SENSOR,"id_ArbiterType_SENSOR");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::id_ArbiterType_FLUID,"id_ArbiterType_FLUID");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::GravMassMode_DEFAULT,"GravMassMode_DEFAULT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::GravMassMode_FIXED,"GravMassMode_FIXED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::GravMassMode_SCALED,"GravMassMode_SCALED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::InertiaMode_DEFAULT,"InertiaMode_DEFAULT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::InertiaMode_FIXED,"InertiaMode_FIXED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::MassMode_DEFAULT,"MassMode_DEFAULT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::MassMode_FIXED,"MassMode_FIXED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::BodyType_STATIC,"BodyType_STATIC");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::BodyType_DYNAMIC,"BodyType_DYNAMIC");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::BodyType_KINEMATIC,"BodyType_KINEMATIC");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ListenerType_BODY,"ListenerType_BODY");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ListenerType_CONSTRAINT,"ListenerType_CONSTRAINT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ListenerType_INTERACTION,"ListenerType_INTERACTION");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ListenerType_PRE,"ListenerType_PRE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::PreFlag_ACCEPT,"PreFlag_ACCEPT");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::PreFlag_IGNORE,"PreFlag_IGNORE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::PreFlag_ACCEPT_ONCE,"PreFlag_ACCEPT_ONCE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::PreFlag_IGNORE_ONCE,"PreFlag_IGNORE_ONCE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_BEGIN,"CbEvent_BEGIN");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_ONGOING,"CbEvent_ONGOING");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_END,"CbEvent_END");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_WAKE,"CbEvent_WAKE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_SLEEP,"CbEvent_SLEEP");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_BREAK,"CbEvent_BREAK");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::CbEvent_PRE,"CbEvent_PRE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::InteractionType_COLLISION,"InteractionType_COLLISION");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::InteractionType_SENSOR,"InteractionType_SENSOR");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::InteractionType_FLUID,"InteractionType_FLUID");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::InteractionType_ANY,"InteractionType_ANY");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::Winding_UNDEFINED,"Winding_UNDEFINED");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::Winding_CLOCKWISE,"Winding_CLOCKWISE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::Winding_ANTICLOCKWISE,"Winding_ANTICLOCKWISE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_VALID,"ValidationResult_VALID");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_DEGENERATE,"ValidationResult_DEGENERATE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_CONCAVE,"ValidationResult_CONCAVE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING,"ValidationResult_SELF_INTERSECTING");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ShapeType_CIRCLE,"ShapeType_CIRCLE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ShapeType_POLYGON,"ShapeType_POLYGON");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE,"Broadphase_DYNAMIC_AABB_TREE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE,"Broadphase_SWEEP_AND_PRUNE");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ArbiterType_COLLISION,"ArbiterType_COLLISION");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ArbiterType_SENSOR,"ArbiterType_SENSOR");
	HX_MARK_MEMBER_NAME(ZPP_Flags_obj::ArbiterType_FLUID,"ArbiterType_FLUID");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::internal,"internal");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ImmState_ACCEPT,"id_ImmState_ACCEPT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ImmState_IGNORE,"id_ImmState_IGNORE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ImmState_ALWAYS,"id_ImmState_ALWAYS");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_GravMassMode_DEFAULT,"id_GravMassMode_DEFAULT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_GravMassMode_FIXED,"id_GravMassMode_FIXED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_GravMassMode_SCALED,"id_GravMassMode_SCALED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_InertiaMode_DEFAULT,"id_InertiaMode_DEFAULT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_InertiaMode_FIXED,"id_InertiaMode_FIXED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_MassMode_DEFAULT,"id_MassMode_DEFAULT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_MassMode_FIXED,"id_MassMode_FIXED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_BodyType_STATIC,"id_BodyType_STATIC");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_BodyType_DYNAMIC,"id_BodyType_DYNAMIC");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_BodyType_KINEMATIC,"id_BodyType_KINEMATIC");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_BODY,"id_ListenerType_BODY");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_CONSTRAINT,"id_ListenerType_CONSTRAINT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_INTERACTION,"id_ListenerType_INTERACTION");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ListenerType_PRE,"id_ListenerType_PRE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_ACCEPT,"id_PreFlag_ACCEPT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_IGNORE,"id_PreFlag_IGNORE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_ACCEPT_ONCE,"id_PreFlag_ACCEPT_ONCE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_PreFlag_IGNORE_ONCE,"id_PreFlag_IGNORE_ONCE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_BEGIN,"id_CbEvent_BEGIN");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_ONGOING,"id_CbEvent_ONGOING");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_END,"id_CbEvent_END");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_WAKE,"id_CbEvent_WAKE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_SLEEP,"id_CbEvent_SLEEP");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_BREAK,"id_CbEvent_BREAK");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_CbEvent_PRE,"id_CbEvent_PRE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_COLLISION,"id_InteractionType_COLLISION");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_SENSOR,"id_InteractionType_SENSOR");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_FLUID,"id_InteractionType_FLUID");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_InteractionType_ANY,"id_InteractionType_ANY");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_Winding_UNDEFINED,"id_Winding_UNDEFINED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_Winding_CLOCKWISE,"id_Winding_CLOCKWISE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_Winding_ANTICLOCKWISE,"id_Winding_ANTICLOCKWISE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_VALID,"id_ValidationResult_VALID");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_DEGENERATE,"id_ValidationResult_DEGENERATE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_CONCAVE,"id_ValidationResult_CONCAVE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ValidationResult_SELF_INTERSECTING,"id_ValidationResult_SELF_INTERSECTING");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ShapeType_CIRCLE,"id_ShapeType_CIRCLE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ShapeType_POLYGON,"id_ShapeType_POLYGON");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_Broadphase_DYNAMIC_AABB_TREE,"id_Broadphase_DYNAMIC_AABB_TREE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_Broadphase_SWEEP_AND_PRUNE,"id_Broadphase_SWEEP_AND_PRUNE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ArbiterType_COLLISION,"id_ArbiterType_COLLISION");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ArbiterType_SENSOR,"id_ArbiterType_SENSOR");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::id_ArbiterType_FLUID,"id_ArbiterType_FLUID");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::GravMassMode_DEFAULT,"GravMassMode_DEFAULT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::GravMassMode_FIXED,"GravMassMode_FIXED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::GravMassMode_SCALED,"GravMassMode_SCALED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::InertiaMode_DEFAULT,"InertiaMode_DEFAULT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::InertiaMode_FIXED,"InertiaMode_FIXED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::MassMode_DEFAULT,"MassMode_DEFAULT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::MassMode_FIXED,"MassMode_FIXED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::BodyType_STATIC,"BodyType_STATIC");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::BodyType_DYNAMIC,"BodyType_DYNAMIC");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::BodyType_KINEMATIC,"BodyType_KINEMATIC");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ListenerType_BODY,"ListenerType_BODY");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ListenerType_CONSTRAINT,"ListenerType_CONSTRAINT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ListenerType_INTERACTION,"ListenerType_INTERACTION");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ListenerType_PRE,"ListenerType_PRE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::PreFlag_ACCEPT,"PreFlag_ACCEPT");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::PreFlag_IGNORE,"PreFlag_IGNORE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::PreFlag_ACCEPT_ONCE,"PreFlag_ACCEPT_ONCE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::PreFlag_IGNORE_ONCE,"PreFlag_IGNORE_ONCE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_BEGIN,"CbEvent_BEGIN");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_ONGOING,"CbEvent_ONGOING");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_END,"CbEvent_END");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_WAKE,"CbEvent_WAKE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_SLEEP,"CbEvent_SLEEP");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_BREAK,"CbEvent_BREAK");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::CbEvent_PRE,"CbEvent_PRE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::InteractionType_COLLISION,"InteractionType_COLLISION");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::InteractionType_SENSOR,"InteractionType_SENSOR");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::InteractionType_FLUID,"InteractionType_FLUID");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::InteractionType_ANY,"InteractionType_ANY");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::Winding_UNDEFINED,"Winding_UNDEFINED");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::Winding_CLOCKWISE,"Winding_CLOCKWISE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::Winding_ANTICLOCKWISE,"Winding_ANTICLOCKWISE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_VALID,"ValidationResult_VALID");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_DEGENERATE,"ValidationResult_DEGENERATE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_CONCAVE,"ValidationResult_CONCAVE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING,"ValidationResult_SELF_INTERSECTING");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ShapeType_CIRCLE,"ShapeType_CIRCLE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ShapeType_POLYGON,"ShapeType_POLYGON");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE,"Broadphase_DYNAMIC_AABB_TREE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE,"Broadphase_SWEEP_AND_PRUNE");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ArbiterType_COLLISION,"ArbiterType_COLLISION");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ArbiterType_SENSOR,"ArbiterType_SENSOR");
	HX_VISIT_MEMBER_NAME(ZPP_Flags_obj::ArbiterType_FLUID,"ArbiterType_FLUID");
};

Class ZPP_Flags_obj::__mClass;

void ZPP_Flags_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Flags"), hx::TCanCast< ZPP_Flags_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Flags_obj::__boot()
{
	internal= false;
	id_ImmState_ACCEPT= (int)1;
	id_ImmState_IGNORE= (int)2;
	id_ImmState_ALWAYS= (int)4;
	id_GravMassMode_DEFAULT= (int)0;
	id_GravMassMode_FIXED= (int)1;
	id_GravMassMode_SCALED= (int)2;
	id_InertiaMode_DEFAULT= (int)0;
	id_InertiaMode_FIXED= (int)1;
	id_MassMode_DEFAULT= (int)0;
	id_MassMode_FIXED= (int)1;
	id_BodyType_STATIC= (int)1;
	id_BodyType_DYNAMIC= (int)2;
	id_BodyType_KINEMATIC= (int)3;
	id_ListenerType_BODY= (int)0;
	id_ListenerType_CONSTRAINT= (int)1;
	id_ListenerType_INTERACTION= (int)2;
	id_ListenerType_PRE= (int)3;
	id_PreFlag_ACCEPT= (int)1;
	id_PreFlag_IGNORE= (int)2;
	id_PreFlag_ACCEPT_ONCE= (int)3;
	id_PreFlag_IGNORE_ONCE= (int)4;
	id_CbEvent_BEGIN= (int)0;
	id_CbEvent_ONGOING= (int)6;
	id_CbEvent_END= (int)1;
	id_CbEvent_WAKE= (int)2;
	id_CbEvent_SLEEP= (int)3;
	id_CbEvent_BREAK= (int)4;
	id_CbEvent_PRE= (int)5;
	id_InteractionType_COLLISION= (int)1;
	id_InteractionType_SENSOR= (int)2;
	id_InteractionType_FLUID= (int)4;
	id_InteractionType_ANY= (int)7;
	id_Winding_UNDEFINED= (int)0;
	id_Winding_CLOCKWISE= (int)1;
	id_Winding_ANTICLOCKWISE= (int)2;
	id_ValidationResult_VALID= (int)0;
	id_ValidationResult_DEGENERATE= (int)1;
	id_ValidationResult_CONCAVE= (int)2;
	id_ValidationResult_SELF_INTERSECTING= (int)3;
	id_ShapeType_CIRCLE= (int)0;
	id_ShapeType_POLYGON= (int)1;
	id_Broadphase_DYNAMIC_AABB_TREE= (int)0;
	id_Broadphase_SWEEP_AND_PRUNE= (int)1;
	id_ArbiterType_COLLISION= (int)1;
	id_ArbiterType_SENSOR= (int)2;
	id_ArbiterType_FLUID= (int)4;
}

} // end namespace zpp_nape
} // end namespace util
