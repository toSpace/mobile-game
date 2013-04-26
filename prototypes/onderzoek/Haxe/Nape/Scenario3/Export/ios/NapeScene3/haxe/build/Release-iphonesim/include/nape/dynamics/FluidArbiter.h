#ifndef INCLUDED_nape_dynamics_FluidArbiter
#define INCLUDED_nape_dynamics_FluidArbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nape/dynamics/Arbiter.h>
HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,FluidArbiter)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
namespace nape{
namespace dynamics{


class FluidArbiter_obj : public ::nape::dynamics::Arbiter_obj{
	public:
		typedef ::nape::dynamics::Arbiter_obj super;
		typedef FluidArbiter_obj OBJ_;
		FluidArbiter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FluidArbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FluidArbiter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FluidArbiter"); }

		virtual ::nape::geom::Vec3 totalImpulse( ::nape::phys::Body body,hx::Null< bool >  freshOnly);

		virtual ::nape::geom::Vec3 dragImpulse( ::nape::phys::Body body);
		Dynamic dragImpulse_dyn();

		virtual ::nape::geom::Vec3 buoyancyImpulse( ::nape::phys::Body body);
		Dynamic buoyancyImpulse_dyn();

		virtual Float set_overlap( Float overlap);
		Dynamic set_overlap_dyn();

		virtual Float get_overlap( );
		Dynamic get_overlap_dyn();

		Float overlap; /* REM */ 
		virtual ::nape::geom::Vec2 set_position( ::nape::geom::Vec2 position);
		Dynamic set_position_dyn();

		virtual ::nape::geom::Vec2 get_position( );
		Dynamic get_position_dyn();

		::nape::geom::Vec2 position; /* REM */ 
};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_FluidArbiter */ 
