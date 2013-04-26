#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#define INCLUDED_zpp_nape_callbacks_ZPP_CbType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbType)
HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
HX_DECLARE_CLASS2(nape,phys,InteractorList)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_BodyListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbType)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_ConstraintListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_InteractionListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_BodyListener)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_CbSet)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_ConstraintListener)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_InteractionListener)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Interactor)
namespace zpp_nape{
namespace callbacks{


class ZPP_CbType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_CbType_obj OBJ_;
		ZPP_CbType_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_CbType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_CbType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_CbType"); }

		virtual Void invalidateconstraint( );
		Dynamic invalidateconstraint_dyn();

		virtual Void removeconstraint( ::zpp_nape::callbacks::ZPP_ConstraintListener x);
		Dynamic removeconstraint_dyn();

		virtual Void addconstraint( ::zpp_nape::callbacks::ZPP_ConstraintListener x);
		Dynamic addconstraint_dyn();

		::zpp_nape::util::ZNPList_ZPP_ConstraintListener conlisteners; /* REM */ 
		virtual Void invalidatebody( );
		Dynamic invalidatebody_dyn();

		virtual Void removebody( ::zpp_nape::callbacks::ZPP_BodyListener x);
		Dynamic removebody_dyn();

		virtual Void addbody( ::zpp_nape::callbacks::ZPP_BodyListener x);
		Dynamic addbody_dyn();

		::zpp_nape::util::ZNPList_ZPP_BodyListener bodylisteners; /* REM */ 
		virtual Void invalidateint( );
		Dynamic invalidateint_dyn();

		virtual Void removeint( ::zpp_nape::callbacks::ZPP_InteractionListener x);
		Dynamic removeint_dyn();

		virtual Void addint( ::zpp_nape::callbacks::ZPP_InteractionListener x);
		Dynamic addint_dyn();

		::zpp_nape::util::ZNPList_ZPP_InteractionListener listeners; /* REM */ 
		virtual Void remInteractor( ::zpp_nape::phys::ZPP_Interactor intx);
		Dynamic remInteractor_dyn();

		virtual Void remConstraint( ::zpp_nape::constraint::ZPP_Constraint con);
		Dynamic remConstraint_dyn();

		virtual Void addInteractor( ::zpp_nape::phys::ZPP_Interactor intx);
		Dynamic addInteractor_dyn();

		virtual Void addConstraint( ::zpp_nape::constraint::ZPP_Constraint con);
		Dynamic addConstraint_dyn();

		::nape::constraint::ConstraintList wrap_constraints; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Constraint constraints; /* REM */ 
		::nape::phys::InteractorList wrap_interactors; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Interactor interactors; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_CbSet cbsets; /* REM */ 
		int id; /* REM */ 
		Dynamic userData; /* REM */ 
		::nape::callbacks::CbType outer; /* REM */ 
		static bool setlt( ::zpp_nape::callbacks::ZPP_CbType a,::zpp_nape::callbacks::ZPP_CbType b);
		static Dynamic setlt_dyn();

		static ::nape::callbacks::CbType ANY_SHAPE; /* REM */ 
		static ::nape::callbacks::CbType ANY_BODY; /* REM */ 
		static ::nape::callbacks::CbType ANY_COMPOUND; /* REM */ 
		static ::nape::callbacks::CbType ANY_CONSTRAINT; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace callbacks

#endif /* INCLUDED_zpp_nape_callbacks_ZPP_CbType */ 
