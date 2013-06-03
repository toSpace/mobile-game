#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#define INCLUDED_zpp_nape_space_ZPP_Space

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(nape,callbacks,ListenerList)
HX_DECLARE_CLASS2(nape,callbacks,PreCallback)
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
HX_DECLARE_CLASS2(nape,dynamics,ArbiterList)
HX_DECLARE_CLASS2(nape,dynamics,InteractionFilter)
HX_DECLARE_CLASS2(nape,geom,AABB)
HX_DECLARE_CLASS2(nape,geom,ConvexResult)
HX_DECLARE_CLASS2(nape,geom,ConvexResultList)
HX_DECLARE_CLASS2(nape,geom,Ray)
HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(nape,geom,RayResultList)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,BodyList)
HX_DECLARE_CLASS2(nape,phys,Compound)
HX_DECLARE_CLASS2(nape,phys,CompoundList)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,ShapeList)
HX_DECLARE_CLASS2(nape,space,Broadphase)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Callback)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbSet)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_InteractionListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_InteractionFilter)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Compound)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Broadphase)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_CallbackSet)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_CbSetManager)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Island)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_ColArbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Compound)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_FluidArbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_InteractionListener)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Listener)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_SensorArbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_ToiEvent)
namespace zpp_nape{
namespace space{


class ZPP_Space_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Space_obj OBJ_;
		ZPP_Space_obj();
		Void __construct(::zpp_nape::geom::ZPP_Vec2 gravity,::nape::space::Broadphase broadphase);

	public:
		static hx::ObjectPtr< ZPP_Space_obj > __new(::zpp_nape::geom::ZPP_Vec2 gravity,::nape::space::Broadphase broadphase);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Space_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Space"); }

		virtual Void inlined_MRCA_chains( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2);
		Dynamic inlined_MRCA_chains_dyn();

		virtual Void MRCA_chains( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2);
		Dynamic MRCA_chains_dyn();

		::zpp_nape::util::ZNPList_ZPP_Interactor mrca2; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Interactor mrca1; /* REM */ 
		virtual ::zpp_nape::dynamics::ZPP_Arbiter narrowPhase( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,bool stat,::zpp_nape::dynamics::ZPP_Arbiter in_arb,bool continuous);
		Dynamic narrowPhase_dyn();

		::zpp_nape::util::ZNPList_ZPP_InteractionListener prelisteners; /* REM */ 
		::nape::callbacks::PreCallback precb; /* REM */ 
		virtual int interactionType( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,::zpp_nape::phys::ZPP_Body b1,::zpp_nape::phys::ZPP_Body b2);
		Dynamic interactionType_dyn();

		virtual bool group_ignore( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2);
		Dynamic group_ignore_dyn();

		virtual Void iteratePos( int times);
		Dynamic iteratePos_dyn();

		virtual Void iterateVel( int times);
		Dynamic iterateVel_dyn();

		virtual Void warmStart( );
		Dynamic warmStart_dyn();

		virtual Void prestep( Float dt);
		Dynamic prestep_dyn();

		virtual bool presteparb( ::zpp_nape::dynamics::ZPP_Arbiter arb,Float dt,Dynamic cont);
		Dynamic presteparb_dyn();

		bool continuous; /* REM */ 
		virtual Void updatePos( Float dt);
		Dynamic updatePos_dyn();

		virtual Void updateVel( Float dt);
		Dynamic updateVel_dyn();

		virtual Void validation( );
		Dynamic validation_dyn();

		virtual Void static_validation( ::zpp_nape::phys::ZPP_Body body);
		Dynamic static_validation_dyn();

		virtual Void sleepArbiters( );
		Dynamic sleepArbiters_dyn();

		virtual Void doForests( Float dt);
		Dynamic doForests_dyn();

		virtual bool wake_constraint( ::zpp_nape::constraint::ZPP_Constraint con,hx::Null< bool >  fst);
		Dynamic wake_constraint_dyn();

		virtual Void really_wake( ::zpp_nape::phys::ZPP_Body o,hx::Null< bool >  fst);
		Dynamic really_wake_dyn();

		virtual Void non_inlined_wake( ::zpp_nape::phys::ZPP_Body o,hx::Null< bool >  fst);
		Dynamic non_inlined_wake_dyn();

		virtual Void wakeIsland( ::zpp_nape::space::ZPP_Island i);
		Dynamic wakeIsland_dyn();

		virtual Void wakeCompound( ::zpp_nape::phys::ZPP_Compound x);
		Dynamic wakeCompound_dyn();

		virtual Void freshInteractorType( ::zpp_nape::phys::ZPP_Interactor intx,::zpp_nape::phys::ZPP_Interactor me);
		Dynamic freshInteractorType_dyn();

		virtual Void freshListenerType( ::zpp_nape::callbacks::ZPP_CbSet cb1,::zpp_nape::callbacks::ZPP_CbSet cb2);
		Dynamic freshListenerType_dyn();

		virtual Void nullInteractorType( ::zpp_nape::phys::ZPP_Interactor intx,::zpp_nape::phys::ZPP_Interactor me);
		Dynamic nullInteractorType_dyn();

		virtual Void nullListenerType( ::zpp_nape::callbacks::ZPP_CbSet cb1,::zpp_nape::callbacks::ZPP_CbSet cb2);
		Dynamic nullListenerType_dyn();

		virtual Void constraintCbBreak( ::zpp_nape::constraint::ZPP_Constraint con);
		Dynamic constraintCbBreak_dyn();

		virtual Void constraintCbSleep( ::zpp_nape::constraint::ZPP_Constraint con);
		Dynamic constraintCbSleep_dyn();

		virtual Void constraintCbWake( ::zpp_nape::constraint::ZPP_Constraint con);
		Dynamic constraintCbWake_dyn();

		virtual Void bodyCbSleep( ::zpp_nape::phys::ZPP_Body b);
		Dynamic bodyCbSleep_dyn();

		virtual Void bodyCbWake( ::zpp_nape::phys::ZPP_Body b);
		Dynamic bodyCbWake_dyn();

		virtual ::zpp_nape::dynamics::ZPP_Arbiter continuousEvent( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,bool stat,::zpp_nape::dynamics::ZPP_Arbiter in_arb,bool _);
		Dynamic continuousEvent_dyn();

		virtual Void continuousCollisions( Float deltaTime);
		Dynamic continuousCollisions_dyn();

		::zpp_nape::util::ZNPList_ZPP_ToiEvent toiEvents; /* REM */ 
		virtual Void step( Float deltaTime,int velocityIterations,int positionIterations);
		Dynamic step_dyn();

		Float pre_dt; /* REM */ 
		virtual ::zpp_nape::callbacks::ZPP_Callback push_callback( ::zpp_nape::callbacks::ZPP_Listener i);
		Dynamic push_callback_dyn();

		virtual ::nape::geom::ConvexResultList convexMultiCast( ::zpp_nape::shape::ZPP_Shape shape,Float deltaTime,::nape::dynamics::InteractionFilter filter,bool dynamics,::nape::geom::ConvexResultList output);
		Dynamic convexMultiCast_dyn();

		virtual Void prepareCast( ::zpp_nape::shape::ZPP_Shape s);
		Dynamic prepareCast_dyn();

		virtual ::nape::geom::ConvexResult convexCast( ::zpp_nape::shape::ZPP_Shape shape,Float deltaTime,::nape::dynamics::InteractionFilter filter,bool dynamics);
		Dynamic convexCast_dyn();

		::nape::shape::ShapeList convexShapeList; /* REM */ 
		virtual ::nape::geom::RayResultList rayMultiCast( ::nape::geom::Ray ray,bool inner,::nape::dynamics::InteractionFilter filter,::nape::geom::RayResultList output);
		Dynamic rayMultiCast_dyn();

		virtual ::nape::geom::RayResult rayCast( ::nape::geom::Ray ray,bool inner,::nape::dynamics::InteractionFilter filter);
		Dynamic rayCast_dyn();

		virtual ::nape::phys::BodyList bodiesInShape( ::zpp_nape::shape::ZPP_Shape shape,bool cont,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output);
		Dynamic bodiesInShape_dyn();

		virtual ::nape::shape::ShapeList shapesInShape( ::zpp_nape::shape::ZPP_Shape shape,bool cont,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output);
		Dynamic shapesInShape_dyn();

		virtual ::nape::phys::BodyList bodiesInCircle( ::nape::geom::Vec2 pos,Float rad,bool cont,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output);
		Dynamic bodiesInCircle_dyn();

		virtual ::nape::shape::ShapeList shapesInCircle( ::nape::geom::Vec2 pos,Float rad,bool cont,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output);
		Dynamic shapesInCircle_dyn();

		virtual ::nape::phys::BodyList bodiesInAABB( ::nape::geom::AABB aabb,bool strict,bool cont,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output);
		Dynamic bodiesInAABB_dyn();

		virtual ::nape::shape::ShapeList shapesInAABB( ::nape::geom::AABB aabb,bool strict,bool cont,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output);
		Dynamic shapesInAABB_dyn();

		virtual ::nape::phys::BodyList bodiesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output);
		Dynamic bodiesUnderPoint_dyn();

		virtual ::nape::shape::ShapeList shapesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output);
		Dynamic shapesUnderPoint_dyn();

		virtual Void remBody( ::zpp_nape::phys::ZPP_Body body,hx::Null< int >  flag);
		Dynamic remBody_dyn();

		virtual Void addBody( ::zpp_nape::phys::ZPP_Body body,hx::Null< int >  flag);
		Dynamic addBody_dyn();

		virtual Void remCompound( ::zpp_nape::phys::ZPP_Compound x);
		Dynamic remCompound_dyn();

		virtual Void addCompound( ::zpp_nape::phys::ZPP_Compound x);
		Dynamic addCompound_dyn();

		virtual Void remConstraint( ::zpp_nape::constraint::ZPP_Constraint con);
		Dynamic remConstraint_dyn();

		virtual Void addConstraint( ::zpp_nape::constraint::ZPP_Constraint con);
		Dynamic addConstraint_dyn();

		virtual Void removed_shape( ::zpp_nape::shape::ZPP_Shape s,hx::Null< bool >  deleting);
		Dynamic removed_shape_dyn();

		virtual Void added_shape( ::zpp_nape::shape::ZPP_Shape s,hx::Null< bool >  dontwake);
		Dynamic added_shape_dyn();

		virtual Void transmitType( ::zpp_nape::phys::ZPP_Body p,int new_type);
		Dynamic transmitType_dyn();

		virtual Void remove_callbackset( ::zpp_nape::space::ZPP_CallbackSet cb);
		Dynamic remove_callbackset_dyn();

		virtual Void add_callbackset( ::zpp_nape::space::ZPP_CallbackSet cb);
		Dynamic add_callbackset_dyn();

		virtual Void remListener( ::zpp_nape::callbacks::ZPP_Listener x);
		Dynamic remListener_dyn();

		virtual Void addListener( ::zpp_nape::callbacks::ZPP_Listener x);
		Dynamic addListener_dyn();

		virtual Void unrevoke_listener( ::zpp_nape::callbacks::ZPP_InteractionListener x);
		Dynamic unrevoke_listener_dyn();

		virtual Void revoke_listener( ::zpp_nape::callbacks::ZPP_InteractionListener x);
		Dynamic revoke_listener_dyn();

		virtual Void listeners_modifiable( );
		Dynamic listeners_modifiable_dyn();

		virtual Void listeners_subber( ::nape::callbacks::Listener x);
		Dynamic listeners_subber_dyn();

		virtual bool listeners_adder( ::nape::callbacks::Listener x);
		Dynamic listeners_adder_dyn();

		virtual Void constraints_modifiable( );
		Dynamic constraints_modifiable_dyn();

		virtual Void constraints_subber( ::nape::constraint::Constraint x);
		Dynamic constraints_subber_dyn();

		virtual bool constraints_adder( ::nape::constraint::Constraint x);
		Dynamic constraints_adder_dyn();

		virtual Void compounds_modifiable( );
		Dynamic compounds_modifiable_dyn();

		virtual Void compounds_subber( ::nape::phys::Compound x);
		Dynamic compounds_subber_dyn();

		virtual bool compounds_adder( ::nape::phys::Compound x);
		Dynamic compounds_adder_dyn();

		virtual Void bodies_modifiable( );
		Dynamic bodies_modifiable_dyn();

		virtual Void bodies_subber( ::nape::phys::Body x);
		Dynamic bodies_subber_dyn();

		virtual bool bodies_adder( ::nape::phys::Body x);
		Dynamic bodies_adder_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		::zpp_nape::space::ZPP_CbSetManager cbsets; /* REM */ 
		::zpp_nape::space::ZPP_CallbackSet callbackset_list; /* REM */ 
		::zpp_nape::callbacks::ZPP_Callback callbacks; /* REM */ 
		::nape::callbacks::ListenerList wrap_listeners; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Listener listeners; /* REM */ 
		::zpp_nape::space::ZPP_Island islands; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Body staticsleep; /* REM */ 
		::nape::constraint::ConstraintList wrap_livecon; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Constraint live_constraints; /* REM */ 
		::nape::phys::BodyList wrap_live; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Body live; /* REM */ 
		::nape::dynamics::ArbiterList wrap_arbiters; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_SensorArbiter s_arbiters; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_FluidArbiter f_arbiters; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_ColArbiter c_arbiters_false; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_ColArbiter c_arbiters_true; /* REM */ 
		bool sortcontacts; /* REM */ 
		Float time; /* REM */ 
		bool midstep; /* REM */ 
		int stamp; /* REM */ 
		Float global_ang_drag; /* REM */ 
		Float global_lin_drag; /* REM */ 
		::nape::phys::Body __static; /* REM */ 
		::zpp_nape::space::ZPP_Broadphase bphase; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Body kinematics; /* REM */ 
		::nape::constraint::ConstraintList wrap_constraints; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Constraint constraints; /* REM */ 
		::nape::phys::CompoundList wrap_compounds; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Compound compounds; /* REM */ 
		::nape::phys::BodyList wrap_bodies; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Body bodies; /* REM */ 
		virtual Void gravity_validate( );
		Dynamic gravity_validate_dyn();

		virtual Void gravity_invalidate( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic gravity_invalidate_dyn();

		virtual Void getgravity( );
		Dynamic getgravity_dyn();

		::nape::geom::Vec2 wrap_gravity; /* REM */ 
		Float gravityy; /* REM */ 
		Float gravityx; /* REM */ 
		Dynamic userData; /* REM */ 
		::nape::space::Space outer; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace space

#endif /* INCLUDED_zpp_nape_space_ZPP_Space */ 
