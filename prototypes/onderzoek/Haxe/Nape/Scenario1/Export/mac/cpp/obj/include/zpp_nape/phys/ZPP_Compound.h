#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#define INCLUDED_zpp_nape_phys_ZPP_Compound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/phys/ZPP_Interactor.h>
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,BodyList)
HX_DECLARE_CLASS2(nape,phys,Compound)
HX_DECLARE_CLASS2(nape,phys,CompoundList)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Compound)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Compound)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Constraint)
namespace zpp_nape{
namespace phys{


class ZPP_Compound_obj : public ::zpp_nape::phys::ZPP_Interactor_obj{
	public:
		typedef ::zpp_nape::phys::ZPP_Interactor_obj super;
		typedef ZPP_Compound_obj OBJ_;
		ZPP_Compound_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_Compound_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Compound_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Compound"); }

		virtual ::nape::phys::Compound copy( Array< ::zpp_nape::constraint::ZPP_CopyHelper > dict,Array< ::zpp_nape::constraint::ZPP_CopyHelper > todo);
		Dynamic copy_dyn();

		virtual Void compounds_modifiable( );
		Dynamic compounds_modifiable_dyn();

		virtual Void compounds_subber( ::nape::phys::Compound x);
		Dynamic compounds_subber_dyn();

		virtual bool compounds_adder( ::nape::phys::Compound x);
		Dynamic compounds_adder_dyn();

		virtual Void constraints_modifiable( );
		Dynamic constraints_modifiable_dyn();

		virtual Void constraints_subber( ::nape::constraint::Constraint x);
		Dynamic constraints_subber_dyn();

		virtual bool constraints_adder( ::nape::constraint::Constraint x);
		Dynamic constraints_adder_dyn();

		virtual Void bodies_modifiable( );
		Dynamic bodies_modifiable_dyn();

		virtual Void bodies_subber( ::nape::phys::Body x);
		Dynamic bodies_subber_dyn();

		virtual bool bodies_adder( ::nape::phys::Body x);
		Dynamic bodies_adder_dyn();

		virtual Void breakApart( );
		Dynamic breakApart_dyn();

		virtual Void removedFromSpace( );
		Dynamic removedFromSpace_dyn();

		virtual Void addedToSpace( );
		Dynamic addedToSpace_dyn();

		virtual Void __imutable_midstep( ::String name);
		Dynamic __imutable_midstep_dyn();

		::zpp_nape::space::ZPP_Space space; /* REM */ 
		::zpp_nape::phys::ZPP_Compound compound; /* REM */ 
		int depth; /* REM */ 
		::nape::phys::CompoundList wrap_compounds; /* REM */ 
		::nape::constraint::ConstraintList wrap_constraints; /* REM */ 
		::nape::phys::BodyList wrap_bodies; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Compound compounds; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Constraint constraints; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Body bodies; /* REM */ 
		::nape::phys::Compound outer; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace phys

#endif /* INCLUDED_zpp_nape_phys_ZPP_Compound */ 
