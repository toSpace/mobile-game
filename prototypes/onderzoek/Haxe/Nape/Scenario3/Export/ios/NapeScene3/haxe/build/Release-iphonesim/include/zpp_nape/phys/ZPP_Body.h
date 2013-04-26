#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#define INCLUDED_zpp_nape_phys_ZPP_Body

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/phys/ZPP_Interactor.h>
HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
HX_DECLARE_CLASS2(nape,dynamics,ArbiterList)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,BodyList)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(nape,shape,ShapeList)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_AABB)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Compound)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Component)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Set_ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_ShapeList)
namespace zpp_nape{
namespace phys{


class ZPP_Body_obj : public ::zpp_nape::phys::ZPP_Interactor_obj{
	public:
		typedef ::zpp_nape::phys::ZPP_Interactor_obj super;
		typedef ZPP_Body_obj OBJ_;
		ZPP_Body_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_Body_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Body_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Body"); }

		virtual ::nape::phys::Body copy( );
		Dynamic copy_dyn();

		virtual Void removedFromSpace( );
		Dynamic removedFromSpace_dyn();

		virtual Void addedToSpace( );
		Dynamic addedToSpace_dyn();

		virtual Void shapes_modifiable( );
		Dynamic shapes_modifiable_dyn();

		virtual Void shapes_invalidate( ::zpp_nape::util::ZPP_ShapeList _);
		Dynamic shapes_invalidate_dyn();

		virtual Void shapes_subber( ::nape::shape::Shape s);
		Dynamic shapes_subber_dyn();

		virtual bool shapes_adder( ::nape::shape::Shape s);
		Dynamic shapes_adder_dyn();

		virtual Void aabb_validate( );
		Dynamic aabb_validate_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void __immutable_midstep( ::String name);
		Dynamic __immutable_midstep_dyn();

		virtual Void getworldCOM( );
		Dynamic getworldCOM_dyn();

		virtual Void getlocalCOM( );
		Dynamic getlocalCOM_dyn();

		virtual Void validate_worldCOM( );
		Dynamic validate_worldCOM_dyn();

		virtual Void validate_localCOM( );
		Dynamic validate_localCOM_dyn();

		virtual Void invalidate_worldCOM( );
		Dynamic invalidate_worldCOM_dyn();

		virtual Void invalidate_localCOM( );
		Dynamic invalidate_localCOM_dyn();

		::nape::geom::Vec2 wrap_worldCOM; /* REM */ 
		::nape::geom::Vec2 wrap_localCOM; /* REM */ 
		bool zip_worldCOM; /* REM */ 
		Float worldCOMy; /* REM */ 
		Float worldCOMx; /* REM */ 
		bool zip_localCOM; /* REM */ 
		Float localCOMy; /* REM */ 
		Float localCOMx; /* REM */ 
		virtual Void invalidate_aabb( );
		Dynamic invalidate_aabb_dyn();

		virtual Void validate_aabb( );
		Dynamic validate_aabb_dyn();

		bool zip_aabb; /* REM */ 
		::zpp_nape::geom::ZPP_AABB aabb; /* REM */ 
		virtual Void invalidate_wake( );
		Dynamic invalidate_wake_dyn();

		virtual Void validate_inertia( );
		Dynamic validate_inertia_dyn();

		virtual Void invalidate_inertia( );
		Dynamic invalidate_inertia_dyn();

		bool norotate; /* REM */ 
		Float sinertia; /* REM */ 
		Float iinertia; /* REM */ 
		Float cinertia; /* REM */ 
		bool zip_inertia; /* REM */ 
		Float inertia; /* REM */ 
		int inertiaMode; /* REM */ 
		virtual Void validate_gravMassScale( );
		Dynamic validate_gravMassScale_dyn();

		virtual Void invalidate_gravMassScale( );
		Dynamic invalidate_gravMassScale_dyn();

		virtual Void validate_gravMass( );
		Dynamic validate_gravMass_dyn();

		virtual Void invalidate_gravMass( );
		Dynamic invalidate_gravMass_dyn();

		bool zip_gravMassScale; /* REM */ 
		Float gravMassScale; /* REM */ 
		int gravMassMode; /* REM */ 
		bool zip_gravMass; /* REM */ 
		Float gravMass; /* REM */ 
		virtual Void validate_mass( );
		Dynamic validate_mass_dyn();

		virtual Void invalidate_mass( );
		Dynamic invalidate_mass_dyn();

		bool nomove; /* REM */ 
		Float cmass; /* REM */ 
		Float smass; /* REM */ 
		Float imass; /* REM */ 
		int massMode; /* REM */ 
		bool zip_mass; /* REM */ 
		Float mass; /* REM */ 
		bool kinematicDelaySleep; /* REM */ 
		virtual Void delta_rot( Float dr);
		Dynamic delta_rot_dyn();

		virtual Void quick_validate_axis( );
		Dynamic quick_validate_axis_dyn();

		virtual Void validate_axis( );
		Dynamic validate_axis_dyn();

		bool zip_axis; /* REM */ 
		Float axisy; /* REM */ 
		Float axisx; /* REM */ 
		virtual Void invalidate_rot( );
		Dynamic invalidate_rot_dyn();

		Float rot; /* REM */ 
		Float pre_rot; /* REM */ 
		Float kinangvel; /* REM */ 
		Float torque; /* REM */ 
		Float angvel; /* REM */ 
		virtual Void setup_cvel( );
		Dynamic setup_cvel_dyn();

		::nape::geom::Vec3 wrapcvel; /* REM */ 
		virtual Void cvel_validate( );
		Dynamic cvel_validate_dyn();

		virtual Void setupForce( );
		Dynamic setupForce_dyn();

		virtual Void setupsvel( );
		Dynamic setupsvel_dyn();

		virtual Void setupkinvel( );
		Dynamic setupkinvel_dyn();

		virtual Void setupVelocity( );
		Dynamic setupVelocity_dyn();

		virtual Void setupPosition( );
		Dynamic setupPosition_dyn();

		virtual Void force_validate( );
		Dynamic force_validate_dyn();

		virtual Void force_invalidate( ::zpp_nape::geom::ZPP_Vec2 force);
		Dynamic force_invalidate_dyn();

		virtual Void svel_validate( );
		Dynamic svel_validate_dyn();

		virtual Void svel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel);
		Dynamic svel_invalidate_dyn();

		virtual Void kinvel_validate( );
		Dynamic kinvel_validate_dyn();

		virtual Void kinvel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel);
		Dynamic kinvel_invalidate_dyn();

		virtual Void vel_validate( );
		Dynamic vel_validate_dyn();

		virtual Void vel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel);
		Dynamic vel_invalidate_dyn();

		virtual Void pos_validate( );
		Dynamic pos_validate_dyn();

		virtual Void pos_invalidate( ::zpp_nape::geom::ZPP_Vec2 pos);
		Dynamic pos_invalidate_dyn();

		virtual Void invalidate_pos( );
		Dynamic invalidate_pos_dyn();

		::nape::geom::Vec2 wrap_svel; /* REM */ 
		Float svely; /* REM */ 
		Float svelx; /* REM */ 
		::nape::geom::Vec2 wrap_kinvel; /* REM */ 
		Float kinvely; /* REM */ 
		Float kinvelx; /* REM */ 
		::nape::geom::Vec2 wrap_force; /* REM */ 
		Float forcey; /* REM */ 
		Float forcex; /* REM */ 
		::nape::geom::Vec2 wrap_vel; /* REM */ 
		Float vely; /* REM */ 
		Float velx; /* REM */ 
		::nape::geom::Vec2 wrap_pos; /* REM */ 
		Float posy; /* REM */ 
		Float posx; /* REM */ 
		Float pre_posy; /* REM */ 
		Float pre_posx; /* REM */ 
		virtual Void sweepValidate( ::zpp_nape::shape::ZPP_Shape s);
		Dynamic sweepValidate_dyn();

		virtual Void sweepIntegrate( Float dt);
		Dynamic sweepIntegrate_dyn();

		bool disableCCD; /* REM */ 
		bool bulletEnabled; /* REM */ 
		bool bullet; /* REM */ 
		Float sweepRadius; /* REM */ 
		bool sweepFrozen; /* REM */ 
		Float sweep_angvel; /* REM */ 
		Float sweepTime; /* REM */ 
		virtual Void refreshArbiters( );
		Dynamic refreshArbiters_dyn();

		virtual bool atRest( Float dt);
		Dynamic atRest_dyn();

		virtual ::nape::phys::BodyList interactingBodies( int arbiter_type,int depth,::nape::phys::BodyList output);
		Dynamic interactingBodies_dyn();

		virtual ::nape::phys::BodyList connectedBodies( int depth,::nape::phys::BodyList output);
		Dynamic connectedBodies_dyn();

		virtual Void connectedBodies_cont( ::nape::phys::Body b);
		Dynamic connectedBodies_cont_dyn();

		virtual Void init_bodysetlist( );
		Dynamic init_bodysetlist_dyn();

		int graph_depth; /* REM */ 
		::zpp_nape::space::ZPP_Component component; /* REM */ 
		::nape::constraint::ConstraintList wrap_constraints; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Constraint constraints; /* REM */ 
		::nape::dynamics::ArbiterList wrap_arbiters; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbiters; /* REM */ 
		::zpp_nape::space::ZPP_Space space; /* REM */ 
		virtual Void invalidate_shapes( );
		Dynamic invalidate_shapes_dyn();

		::nape::shape::ShapeList wrap_shapes; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Shape shapes; /* REM */ 
		::zpp_nape::phys::ZPP_Compound compound; /* REM */ 
		virtual Void invalidate_type( );
		Dynamic invalidate_type_dyn();

		virtual bool isKinematic( );
		Dynamic isKinematic_dyn();

		virtual bool isDynamic( );
		Dynamic isDynamic_dyn();

		virtual bool isStatic( );
		Dynamic isStatic_dyn();

		int type; /* REM */ 
		bool world; /* REM */ 
		::nape::phys::Body outer; /* REM */ 
		static ::zpp_nape::util::ZNPList_ZPP_Body bodystack; /* REM */ 
		static ::zpp_nape::util::ZPP_Set_ZPP_Body bodyset; /* REM */ 
		static bool bodysetlt( ::zpp_nape::phys::ZPP_Body a,::zpp_nape::phys::ZPP_Body b);
		static Dynamic bodysetlt_dyn();

		static int cur_graph_depth; /* REM */ 
		static ::nape::phys::Body __static( );
		static Dynamic __static_dyn();

};

} // end namespace zpp_nape
} // end namespace phys

#endif /* INCLUDED_zpp_nape_phys_ZPP_Body */ 
