#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#define INCLUDED_zpp_nape_util_ZPP_Flags

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbEvent)
HX_DECLARE_CLASS2(nape,callbacks,InteractionType)
HX_DECLARE_CLASS2(nape,callbacks,ListenerType)
HX_DECLARE_CLASS2(nape,callbacks,PreFlag)
HX_DECLARE_CLASS2(nape,dynamics,ArbiterType)
HX_DECLARE_CLASS2(nape,geom,Winding)
HX_DECLARE_CLASS2(nape,phys,BodyType)
HX_DECLARE_CLASS2(nape,phys,GravMassMode)
HX_DECLARE_CLASS2(nape,phys,InertiaMode)
HX_DECLARE_CLASS2(nape,phys,MassMode)
HX_DECLARE_CLASS2(nape,shape,ShapeType)
HX_DECLARE_CLASS2(nape,shape,ValidationResult)
HX_DECLARE_CLASS2(nape,space,Broadphase)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Flags)
namespace zpp_nape{
namespace util{


class ZPP_Flags_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Flags_obj OBJ_;
		ZPP_Flags_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_Flags_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Flags_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Flags"); }

		static bool internal; /* REM */ 
		static int id_ImmState_ACCEPT; /* REM */ 
		static int id_ImmState_IGNORE; /* REM */ 
		static int id_ImmState_ALWAYS; /* REM */ 
		static int id_GravMassMode_DEFAULT; /* REM */ 
		static int id_GravMassMode_FIXED; /* REM */ 
		static int id_GravMassMode_SCALED; /* REM */ 
		static int id_InertiaMode_DEFAULT; /* REM */ 
		static int id_InertiaMode_FIXED; /* REM */ 
		static int id_MassMode_DEFAULT; /* REM */ 
		static int id_MassMode_FIXED; /* REM */ 
		static int id_BodyType_STATIC; /* REM */ 
		static int id_BodyType_DYNAMIC; /* REM */ 
		static int id_BodyType_KINEMATIC; /* REM */ 
		static int id_ListenerType_BODY; /* REM */ 
		static int id_ListenerType_CONSTRAINT; /* REM */ 
		static int id_ListenerType_INTERACTION; /* REM */ 
		static int id_ListenerType_PRE; /* REM */ 
		static int id_PreFlag_ACCEPT; /* REM */ 
		static int id_PreFlag_IGNORE; /* REM */ 
		static int id_PreFlag_ACCEPT_ONCE; /* REM */ 
		static int id_PreFlag_IGNORE_ONCE; /* REM */ 
		static int id_CbEvent_BEGIN; /* REM */ 
		static int id_CbEvent_ONGOING; /* REM */ 
		static int id_CbEvent_END; /* REM */ 
		static int id_CbEvent_WAKE; /* REM */ 
		static int id_CbEvent_SLEEP; /* REM */ 
		static int id_CbEvent_BREAK; /* REM */ 
		static int id_CbEvent_PRE; /* REM */ 
		static int id_InteractionType_COLLISION; /* REM */ 
		static int id_InteractionType_SENSOR; /* REM */ 
		static int id_InteractionType_FLUID; /* REM */ 
		static int id_InteractionType_ANY; /* REM */ 
		static int id_Winding_UNDEFINED; /* REM */ 
		static int id_Winding_CLOCKWISE; /* REM */ 
		static int id_Winding_ANTICLOCKWISE; /* REM */ 
		static int id_ValidationResult_VALID; /* REM */ 
		static int id_ValidationResult_DEGENERATE; /* REM */ 
		static int id_ValidationResult_CONCAVE; /* REM */ 
		static int id_ValidationResult_SELF_INTERSECTING; /* REM */ 
		static int id_ShapeType_CIRCLE; /* REM */ 
		static int id_ShapeType_POLYGON; /* REM */ 
		static int id_Broadphase_DYNAMIC_AABB_TREE; /* REM */ 
		static int id_Broadphase_SWEEP_AND_PRUNE; /* REM */ 
		static int id_ArbiterType_COLLISION; /* REM */ 
		static int id_ArbiterType_SENSOR; /* REM */ 
		static int id_ArbiterType_FLUID; /* REM */ 
		static ::nape::phys::GravMassMode GravMassMode_DEFAULT; /* REM */ 
		static ::nape::phys::GravMassMode GravMassMode_FIXED; /* REM */ 
		static ::nape::phys::GravMassMode GravMassMode_SCALED; /* REM */ 
		static ::nape::phys::InertiaMode InertiaMode_DEFAULT; /* REM */ 
		static ::nape::phys::InertiaMode InertiaMode_FIXED; /* REM */ 
		static ::nape::phys::MassMode MassMode_DEFAULT; /* REM */ 
		static ::nape::phys::MassMode MassMode_FIXED; /* REM */ 
		static ::nape::phys::BodyType BodyType_STATIC; /* REM */ 
		static ::nape::phys::BodyType BodyType_DYNAMIC; /* REM */ 
		static ::nape::phys::BodyType BodyType_KINEMATIC; /* REM */ 
		static ::nape::callbacks::ListenerType ListenerType_BODY; /* REM */ 
		static ::nape::callbacks::ListenerType ListenerType_CONSTRAINT; /* REM */ 
		static ::nape::callbacks::ListenerType ListenerType_INTERACTION; /* REM */ 
		static ::nape::callbacks::ListenerType ListenerType_PRE; /* REM */ 
		static ::nape::callbacks::PreFlag PreFlag_ACCEPT; /* REM */ 
		static ::nape::callbacks::PreFlag PreFlag_IGNORE; /* REM */ 
		static ::nape::callbacks::PreFlag PreFlag_ACCEPT_ONCE; /* REM */ 
		static ::nape::callbacks::PreFlag PreFlag_IGNORE_ONCE; /* REM */ 
		static ::nape::callbacks::CbEvent CbEvent_BEGIN; /* REM */ 
		static ::nape::callbacks::CbEvent CbEvent_ONGOING; /* REM */ 
		static ::nape::callbacks::CbEvent CbEvent_END; /* REM */ 
		static ::nape::callbacks::CbEvent CbEvent_WAKE; /* REM */ 
		static ::nape::callbacks::CbEvent CbEvent_SLEEP; /* REM */ 
		static ::nape::callbacks::CbEvent CbEvent_BREAK; /* REM */ 
		static ::nape::callbacks::CbEvent CbEvent_PRE; /* REM */ 
		static ::nape::callbacks::InteractionType InteractionType_COLLISION; /* REM */ 
		static ::nape::callbacks::InteractionType InteractionType_SENSOR; /* REM */ 
		static ::nape::callbacks::InteractionType InteractionType_FLUID; /* REM */ 
		static ::nape::callbacks::InteractionType InteractionType_ANY; /* REM */ 
		static ::nape::geom::Winding Winding_UNDEFINED; /* REM */ 
		static ::nape::geom::Winding Winding_CLOCKWISE; /* REM */ 
		static ::nape::geom::Winding Winding_ANTICLOCKWISE; /* REM */ 
		static ::nape::shape::ValidationResult ValidationResult_VALID; /* REM */ 
		static ::nape::shape::ValidationResult ValidationResult_DEGENERATE; /* REM */ 
		static ::nape::shape::ValidationResult ValidationResult_CONCAVE; /* REM */ 
		static ::nape::shape::ValidationResult ValidationResult_SELF_INTERSECTING; /* REM */ 
		static ::nape::shape::ShapeType ShapeType_CIRCLE; /* REM */ 
		static ::nape::shape::ShapeType ShapeType_POLYGON; /* REM */ 
		static ::nape::space::Broadphase Broadphase_DYNAMIC_AABB_TREE; /* REM */ 
		static ::nape::space::Broadphase Broadphase_SWEEP_AND_PRUNE; /* REM */ 
		static ::nape::dynamics::ArbiterType ArbiterType_COLLISION; /* REM */ 
		static ::nape::dynamics::ArbiterType ArbiterType_SENSOR; /* REM */ 
		static ::nape::dynamics::ArbiterType ArbiterType_FLUID; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_Flags */ 
