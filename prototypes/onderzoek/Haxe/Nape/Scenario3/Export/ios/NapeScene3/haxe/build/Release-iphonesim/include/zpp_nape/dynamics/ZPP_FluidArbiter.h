#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#define INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/dynamics/ZPP_Arbiter.h>
HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,FluidArbiter)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_FluidArbiter)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
namespace zpp_nape{
namespace dynamics{


class ZPP_FluidArbiter_obj : public ::zpp_nape::dynamics::ZPP_Arbiter_obj{
	public:
		typedef ::zpp_nape::dynamics::ZPP_Arbiter_obj super;
		typedef ZPP_FluidArbiter_obj OBJ_;
		ZPP_FluidArbiter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_FluidArbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_FluidArbiter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_FluidArbiter"); }

		virtual Void applyImpulseVel( );
		Dynamic applyImpulseVel_dyn();

		virtual Void warmStart( );
		Dynamic warmStart_dyn();

		virtual Void preStep( ::zpp_nape::space::ZPP_Space s,Float dt);
		Dynamic preStep_dyn();

		Float pre_dt; /* REM */ 
		virtual Void inject( Float area,Float cx,Float cy);
		Dynamic inject_dyn();

		virtual Void makeimmutable( );
		Dynamic makeimmutable_dyn();

		virtual Void makemutable( );
		Dynamic makemutable_dyn();

		bool _mutable; /* REM */ 
		virtual Void retire( );
		Dynamic retire_dyn();

		virtual Void assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di);
		Dynamic assign_dyn();

		virtual Void getposition( );
		Dynamic getposition_dyn();

		::nape::geom::Vec2 wrap_position; /* REM */ 
		virtual Void position_invalidate( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic position_invalidate_dyn();

		virtual Void position_validate( );
		Dynamic position_validate_dyn();

		Float buoyy; /* REM */ 
		Float buoyx; /* REM */ 
		Float ny; /* REM */ 
		Float nx; /* REM */ 
		Float lgamma; /* REM */ 
		Float dampy; /* REM */ 
		Float dampx; /* REM */ 
		Float vMassc; /* REM */ 
		Float vMassb; /* REM */ 
		Float vMassa; /* REM */ 
		Float agamma; /* REM */ 
		Float adamp; /* REM */ 
		Float wMass; /* REM */ 
		bool nodrag; /* REM */ 
		Float r2y; /* REM */ 
		Float r2x; /* REM */ 
		Float r1y; /* REM */ 
		Float r1x; /* REM */ 
		Float overlap; /* REM */ 
		Float centroidy; /* REM */ 
		Float centroidx; /* REM */ 
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::dynamics::ZPP_FluidArbiter next; /* REM */ 
		::nape::dynamics::FluidArbiter outer_zn; /* REM */ 
		static ::zpp_nape::dynamics::ZPP_FluidArbiter zpp_pool; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace dynamics

#endif /* INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter */ 
