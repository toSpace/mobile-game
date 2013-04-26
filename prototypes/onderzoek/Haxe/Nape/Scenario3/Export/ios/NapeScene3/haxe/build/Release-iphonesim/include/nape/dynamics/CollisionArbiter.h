#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#define INCLUDED_nape_dynamics_CollisionArbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nape/dynamics/Arbiter.h>
HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,CollisionArbiter)
HX_DECLARE_CLASS2(nape,dynamics,ContactList)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Edge)
namespace nape{
namespace dynamics{


class CollisionArbiter_obj : public ::nape::dynamics::Arbiter_obj{
	public:
		typedef ::nape::dynamics::Arbiter_obj super;
		typedef CollisionArbiter_obj OBJ_;
		CollisionArbiter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CollisionArbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CollisionArbiter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CollisionArbiter"); }

		virtual Float set_rollingFriction( Float rollingFriction);
		Dynamic set_rollingFriction_dyn();

		virtual Float get_rollingFriction( );
		Dynamic get_rollingFriction_dyn();

		Float rollingFriction; /* REM */ 
		virtual Float set_staticFriction( Float staticFriction);
		Dynamic set_staticFriction_dyn();

		virtual Float get_staticFriction( );
		Dynamic get_staticFriction_dyn();

		Float staticFriction; /* REM */ 
		virtual Float set_dynamicFriction( Float dynamicFriction);
		Dynamic set_dynamicFriction_dyn();

		virtual Float get_dynamicFriction( );
		Dynamic get_dynamicFriction_dyn();

		Float dynamicFriction; /* REM */ 
		virtual Float set_elasticity( Float elasticity);
		Dynamic set_elasticity_dyn();

		virtual Float get_elasticity( );
		Dynamic get_elasticity_dyn();

		Float elasticity; /* REM */ 
		virtual Float rollingImpulse( ::nape::phys::Body body,hx::Null< bool >  freshOnly);
		Dynamic rollingImpulse_dyn();

		virtual ::nape::geom::Vec3 totalImpulse( ::nape::phys::Body body,hx::Null< bool >  freshOnly);

		virtual ::nape::geom::Vec3 tangentImpulse( ::nape::phys::Body body,hx::Null< bool >  freshOnly);
		Dynamic tangentImpulse_dyn();

		virtual ::nape::geom::Vec3 normalImpulse( ::nape::phys::Body body,hx::Null< bool >  freshOnly);
		Dynamic normalImpulse_dyn();

		virtual bool secondVertex( );
		Dynamic secondVertex_dyn();

		virtual bool firstVertex( );
		Dynamic firstVertex_dyn();

		virtual ::nape::shape::Edge get_referenceEdge2( );
		Dynamic get_referenceEdge2_dyn();

		::nape::shape::Edge referenceEdge2; /* REM */ 
		virtual ::nape::shape::Edge get_referenceEdge1( );
		Dynamic get_referenceEdge1_dyn();

		::nape::shape::Edge referenceEdge1; /* REM */ 
		virtual Float get_radius( );
		Dynamic get_radius_dyn();

		Float radius; /* REM */ 
		virtual ::nape::geom::Vec2 get_normal( );
		Dynamic get_normal_dyn();

		::nape::geom::Vec2 normal; /* REM */ 
		virtual ::nape::dynamics::ContactList get_contacts( );
		Dynamic get_contacts_dyn();

		::nape::dynamics::ContactList contacts; /* REM */ 
};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_CollisionArbiter */ 
