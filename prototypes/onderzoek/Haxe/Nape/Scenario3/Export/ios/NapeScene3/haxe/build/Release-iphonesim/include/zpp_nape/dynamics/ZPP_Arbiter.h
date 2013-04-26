#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#define INCLUDED_zpp_nape_dynamics_ZPP_Arbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_ColArbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_FluidArbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_SensorArbiter)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_AABBPair)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
namespace zpp_nape{
namespace dynamics{


class ZPP_Arbiter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Arbiter_obj OBJ_;
		ZPP_Arbiter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_Arbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Arbiter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Arbiter"); }

		virtual Void sup_retire( );
		Dynamic sup_retire_dyn();

		virtual Void sup_assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di);
		Dynamic sup_assign_dyn();

		virtual Void lazyRetire( ::zpp_nape::space::ZPP_Space s,::zpp_nape::phys::ZPP_Body b);
		Dynamic lazyRetire_dyn();

		::zpp_nape::dynamics::ZPP_SensorArbiter sensorarb; /* REM */ 
		::zpp_nape::dynamics::ZPP_FluidArbiter fluidarb; /* REM */ 
		::zpp_nape::dynamics::ZPP_ColArbiter colarb; /* REM */ 
		int type; /* REM */ 
		virtual Void swap_features( );
		Dynamic swap_features_dyn();

		::zpp_nape::space::ZPP_AABBPair pair; /* REM */ 
		::zpp_nape::shape::ZPP_Shape ws2; /* REM */ 
		::zpp_nape::shape::ZPP_Shape ws1; /* REM */ 
		::zpp_nape::phys::ZPP_Body b2; /* REM */ 
		::zpp_nape::phys::ZPP_Body b1; /* REM */ 
		bool invalidated; /* REM */ 
		virtual bool acting( );
		Dynamic acting_dyn();

		int immState; /* REM */ 
		bool fresh; /* REM */ 
		bool continuous; /* REM */ 
		bool presentable; /* REM */ 
		bool intchange; /* REM */ 
		int present; /* REM */ 
		bool sleeping; /* REM */ 
		bool cleared; /* REM */ 
		bool active; /* REM */ 
		int endGenerated; /* REM */ 
		int sleep_stamp; /* REM */ 
		int up_stamp; /* REM */ 
		int stamp; /* REM */ 
		int di; /* REM */ 
		int id; /* REM */ 
		::zpp_nape::dynamics::ZPP_Arbiter hnext; /* REM */ 
		virtual bool inactiveme( );
		Dynamic inactiveme_dyn();

		virtual ::nape::dynamics::Arbiter wrapper( );
		Dynamic wrapper_dyn();

		::nape::dynamics::Arbiter outer; /* REM */ 
		static bool internal; /* REM */ 
		static int COL; /* REM */ 
		static int FLUID; /* REM */ 
		static int SENSOR; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace dynamics

#endif /* INCLUDED_zpp_nape_dynamics_ZPP_Arbiter */ 
