#ifndef INCLUDED_nape_dynamics_Arbiter
#define INCLUDED_nape_dynamics_Arbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,PreFlag)
HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,ArbiterType)
HX_DECLARE_CLASS2(nape,dynamics,CollisionArbiter)
HX_DECLARE_CLASS2(nape,dynamics,FluidArbiter)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
namespace nape{
namespace dynamics{


class Arbiter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Arbiter_obj OBJ_;
		Arbiter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Arbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Arbiter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Arbiter"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::nape::geom::Vec3 totalImpulse( ::nape::phys::Body body,hx::Null< bool >  freshOnly);
		Dynamic totalImpulse_dyn();

		virtual ::nape::callbacks::PreFlag get_state( );
		Dynamic get_state_dyn();

		::nape::callbacks::PreFlag state; /* REM */ 
		virtual ::nape::phys::Body get_body2( );
		Dynamic get_body2_dyn();

		::nape::phys::Body body2; /* REM */ 
		virtual ::nape::phys::Body get_body1( );
		Dynamic get_body1_dyn();

		::nape::phys::Body body1; /* REM */ 
		virtual ::nape::shape::Shape get_shape2( );
		Dynamic get_shape2_dyn();

		::nape::shape::Shape shape2; /* REM */ 
		virtual ::nape::shape::Shape get_shape1( );
		Dynamic get_shape1_dyn();

		::nape::shape::Shape shape1; /* REM */ 
		virtual ::nape::dynamics::FluidArbiter get_fluidArbiter( );
		Dynamic get_fluidArbiter_dyn();

		::nape::dynamics::FluidArbiter fluidArbiter; /* REM */ 
		virtual ::nape::dynamics::CollisionArbiter get_collisionArbiter( );
		Dynamic get_collisionArbiter_dyn();

		::nape::dynamics::CollisionArbiter collisionArbiter; /* REM */ 
		virtual bool isSensorArbiter( );
		Dynamic isSensorArbiter_dyn();

		virtual bool isFluidArbiter( );
		Dynamic isFluidArbiter_dyn();

		virtual bool isCollisionArbiter( );
		Dynamic isCollisionArbiter_dyn();

		virtual ::nape::dynamics::ArbiterType get_type( );
		Dynamic get_type_dyn();

		::nape::dynamics::ArbiterType type; /* REM */ 
		virtual bool get_isSleeping( );
		Dynamic get_isSleeping_dyn();

		bool isSleeping; /* REM */ 
		::zpp_nape::dynamics::ZPP_Arbiter zpp_inner; /* REM */ 
};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_Arbiter */ 
