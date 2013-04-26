#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#define INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/dynamics/ZPP_Arbiter.h>
HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,CollisionArbiter)
HX_DECLARE_CLASS2(nape,dynamics,Contact)
HX_DECLARE_CLASS2(nape,dynamics,ContactList)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_ColArbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Contact)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_IContact)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Edge)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
namespace zpp_nape{
namespace dynamics{


class ZPP_ColArbiter_obj : public ::zpp_nape::dynamics::ZPP_Arbiter_obj{
	public:
		typedef ::zpp_nape::dynamics::ZPP_Arbiter_obj super;
		typedef ZPP_ColArbiter_obj OBJ_;
		ZPP_ColArbiter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_ColArbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_ColArbiter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_ColArbiter"); }

		virtual Void applyImpulsePos( );
		Dynamic applyImpulsePos_dyn();

		virtual Void applyImpulseVel( );
		Dynamic applyImpulseVel_dyn();

		virtual Void warmStart( );
		Dynamic warmStart_dyn();

		virtual bool preStep( Float dt);
		Dynamic preStep_dyn();

		Float pre_dt; /* REM */ 
		virtual bool cleanupContacts( );
		Dynamic cleanupContacts_dyn();

		virtual Void setupcontacts( );
		Dynamic setupcontacts_dyn();

		virtual Void contacts_subber( ::nape::dynamics::Contact x);
		Dynamic contacts_subber_dyn();

		virtual bool contacts_adder( ::nape::dynamics::Contact x);
		Dynamic contacts_adder_dyn();

		virtual Void makeimmutable( );
		Dynamic makeimmutable_dyn();

		virtual Void makemutable( );
		Dynamic makemutable_dyn();

		bool _mutable; /* REM */ 
		virtual Void retire( );
		Dynamic retire_dyn();

		virtual Void validate_props( );
		Dynamic validate_props_dyn();

		virtual Void calcProperties( );
		Dynamic calcProperties_dyn();

		virtual Void assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di);
		Dynamic assign_dyn();

		virtual ::zpp_nape::dynamics::ZPP_Contact injectContact( Float px,Float py,Float nx,Float ny,Float dist,int hash,hx::Null< bool >  posOnly);
		Dynamic injectContact_dyn();

		bool stat; /* REM */ 
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::dynamics::ZPP_ColArbiter next; /* REM */ 
		bool hpc2; /* REM */ 
		bool hc2; /* REM */ 
		::zpp_nape::dynamics::ZPP_Contact oc2; /* REM */ 
		::zpp_nape::dynamics::ZPP_IContact c2; /* REM */ 
		::zpp_nape::dynamics::ZPP_Contact oc1; /* REM */ 
		::zpp_nape::dynamics::ZPP_IContact c1; /* REM */ 
		int __ref_vertex; /* REM */ 
		::zpp_nape::shape::ZPP_Edge __ref_edge2; /* REM */ 
		::zpp_nape::shape::ZPP_Edge __ref_edge1; /* REM */ 
		Float biasCoef; /* REM */ 
		bool rev; /* REM */ 
		Float radius; /* REM */ 
		Float lproj; /* REM */ 
		Float lnormy; /* REM */ 
		Float lnormx; /* REM */ 
		int ptype; /* REM */ 
		Float surfacey; /* REM */ 
		Float surfacex; /* REM */ 
		Float k2y; /* REM */ 
		Float k2x; /* REM */ 
		Float k1y; /* REM */ 
		Float k1x; /* REM */ 
		Float rt2b; /* REM */ 
		Float rn2b; /* REM */ 
		Float rt2a; /* REM */ 
		Float rn2a; /* REM */ 
		Float rt1b; /* REM */ 
		Float rn1b; /* REM */ 
		Float rt1a; /* REM */ 
		Float rn1a; /* REM */ 
		Float jrAcc; /* REM */ 
		Float rMass; /* REM */ 
		Float Kc; /* REM */ 
		Float Kb; /* REM */ 
		Float Ka; /* REM */ 
		Float kMassc; /* REM */ 
		Float kMassb; /* REM */ 
		Float kMassa; /* REM */ 
		virtual Void getnormal( );
		Dynamic getnormal_dyn();

		::nape::geom::Vec2 wrap_normal; /* REM */ 
		virtual Void normal_validate( );
		Dynamic normal_validate_dyn();

		Float ny; /* REM */ 
		Float nx; /* REM */ 
		::zpp_nape::dynamics::ZPP_IContact innards; /* REM */ 
		::nape::dynamics::ContactList wrap_contacts; /* REM */ 
		::zpp_nape::dynamics::ZPP_Contact contacts; /* REM */ 
		::zpp_nape::shape::ZPP_Shape s2; /* REM */ 
		::zpp_nape::shape::ZPP_Shape s1; /* REM */ 
		bool userdef_rfric; /* REM */ 
		bool userdef_restitution; /* REM */ 
		bool userdef_stat_fric; /* REM */ 
		bool userdef_dyn_fric; /* REM */ 
		Float rfric; /* REM */ 
		Float restitution; /* REM */ 
		Float stat_fric; /* REM */ 
		Float dyn_fric; /* REM */ 
		::nape::dynamics::CollisionArbiter outer_zn; /* REM */ 
		static int FACE1; /* REM */ 
		static int FACE2; /* REM */ 
		static int CIRCLE; /* REM */ 
		static ::zpp_nape::dynamics::ZPP_ColArbiter zpp_pool; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace dynamics

#endif /* INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter */ 
