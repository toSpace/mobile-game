#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#define INCLUDED_zpp_nape_constraint_ZPP_Constraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbType)
HX_DECLARE_CLASS2(nape,callbacks,CbTypeList)
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbSet)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbType)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Compound)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Component)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_CbType)
namespace zpp_nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES  ZPP_Constraint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Constraint_obj OBJ_;
		ZPP_Constraint_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_Constraint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Constraint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Constraint"); }

		virtual Void copyto( ::nape::constraint::Constraint ret);
		Dynamic copyto_dyn();

		virtual ::nape::constraint::Constraint copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo);
		Dynamic copy_dyn();

		virtual Void draw( ::nape::util::Debug g);
		Dynamic draw_dyn();

		virtual Void wake( );
		Dynamic wake_dyn();

		virtual bool applyImpulsePos( );
		Dynamic applyImpulsePos_dyn();

		virtual bool applyImpulseVel( );
		Dynamic applyImpulseVel_dyn();

		virtual bool preStep( Float dt);
		Dynamic preStep_dyn();

		Float pre_dt;
		virtual Void warmStart( );
		Dynamic warmStart_dyn();

		virtual Void broken( );
		Dynamic broken_dyn();

		virtual bool pair_exists( int id,int di);
		Dynamic pair_exists_dyn();

		virtual Void forest( );
		Dynamic forest_dyn();

		virtual Void wake_connected( );
		Dynamic wake_connected_dyn();

		virtual Void validate( );
		Dynamic validate_dyn();

		virtual Void clearcache( );
		Dynamic clearcache_dyn();

		virtual Void inactiveBodies( );
		Dynamic inactiveBodies_dyn();

		virtual Void activeBodies( );
		Dynamic activeBodies_dyn();

		virtual Void inactiveOrOutSpace( );
		Dynamic inactiveOrOutSpace_dyn();

		virtual Void activeInSpace( );
		Dynamic activeInSpace_dyn();

		virtual Void removedFromSpace( );
		Dynamic removedFromSpace_dyn();

		virtual Void addedToSpace( );
		Dynamic addedToSpace_dyn();

		virtual Void deactivate( );
		Dynamic deactivate_dyn();

		virtual Void activate( );
		Dynamic activate_dyn();

		virtual Void dealloc_cbSet( );
		Dynamic dealloc_cbSet_dyn();

		virtual Void alloc_cbSet( );
		Dynamic alloc_cbSet_dyn();

		virtual Void insert_cbtype( ::zpp_nape::callbacks::ZPP_CbType cb);
		Dynamic insert_cbtype_dyn();

		virtual bool wrap_cbTypes_adder( ::nape::callbacks::CbType cb);
		Dynamic wrap_cbTypes_adder_dyn();

		virtual Void wrap_cbTypes_subber( ::nape::callbacks::CbType pcb);
		Dynamic wrap_cbTypes_subber_dyn();

		virtual Void immutable_cbTypes( );
		Dynamic immutable_cbTypes_dyn();

		virtual Void setupcbTypes( );
		Dynamic setupcbTypes_dyn();

		::nape::callbacks::CbTypeList wrap_cbTypes;
		::zpp_nape::callbacks::ZPP_CbSet cbSet;
		::zpp_nape::util::ZNPList_ZPP_CbType cbTypes;
		virtual Void immutable_midstep( ::String name);
		Dynamic immutable_midstep_dyn();

		bool __velocity;
		bool ignore;
		::zpp_nape::space::ZPP_Component component;
		bool removeOnBreak;
		bool breakUnderError;
		bool breakUnderForce;
		Float maxError;
		Float maxForce;
		Float damping;
		Float frequency;
		bool stiff;
		bool active;
		::zpp_nape::space::ZPP_Space space;
		::zpp_nape::phys::ZPP_Compound compound;
		Dynamic userData;
		int id;
		virtual Void clear( );
		Dynamic clear_dyn();

		::nape::constraint::Constraint outer;
};

} // end namespace zpp_nape
} // end namespace constraint

#endif /* INCLUDED_zpp_nape_constraint_ZPP_Constraint */ 
