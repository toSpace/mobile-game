#ifndef INCLUDED_nape_callbacks_CbType
#define INCLUDED_nape_callbacks_CbType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbType)
HX_DECLARE_CLASS2(nape,callbacks,OptionType)
HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
HX_DECLARE_CLASS2(nape,phys,InteractorList)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbType)
namespace nape{
namespace callbacks{


class CbType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CbType_obj OBJ_;
		CbType_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CbType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CbType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CbType"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::nape::constraint::ConstraintList get_constraints( );
		Dynamic get_constraints_dyn();

		::nape::constraint::ConstraintList constraints; /* REM */ 
		virtual ::nape::phys::InteractorList get_interactors( );
		Dynamic get_interactors_dyn();

		::nape::phys::InteractorList interactors; /* REM */ 
		virtual Dynamic get_userData( );
		Dynamic get_userData_dyn();

		Dynamic userData; /* REM */ 
		virtual ::nape::callbacks::OptionType excluding( Dynamic excludes);
		Dynamic excluding_dyn();

		virtual ::nape::callbacks::OptionType including( Dynamic includes);
		Dynamic including_dyn();

		virtual int get_id( );
		Dynamic get_id_dyn();

		int id; /* REM */ 
		::zpp_nape::callbacks::ZPP_CbType zpp_inner; /* REM */ 
		static ::nape::callbacks::CbType ANY_BODY; /* REM */ 
		static ::nape::callbacks::CbType get_ANY_BODY( );
		static Dynamic get_ANY_BODY_dyn();

		static ::nape::callbacks::CbType ANY_CONSTRAINT; /* REM */ 
		static ::nape::callbacks::CbType get_ANY_CONSTRAINT( );
		static Dynamic get_ANY_CONSTRAINT_dyn();

		static ::nape::callbacks::CbType ANY_SHAPE; /* REM */ 
		static ::nape::callbacks::CbType get_ANY_SHAPE( );
		static Dynamic get_ANY_SHAPE_dyn();

		static ::nape::callbacks::CbType ANY_COMPOUND; /* REM */ 
		static ::nape::callbacks::CbType get_ANY_COMPOUND( );
		static Dynamic get_ANY_COMPOUND_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_CbType */ 
