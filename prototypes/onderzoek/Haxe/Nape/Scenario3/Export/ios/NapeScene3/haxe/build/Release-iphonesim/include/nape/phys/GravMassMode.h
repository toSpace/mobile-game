#ifndef INCLUDED_nape_phys_GravMassMode
#define INCLUDED_nape_phys_GravMassMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,GravMassMode)
namespace nape{
namespace phys{


class GravMassMode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GravMassMode_obj OBJ_;
		GravMassMode_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GravMassMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GravMassMode_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GravMassMode"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		static ::nape::phys::GravMassMode DEFAULT; /* REM */ 
		static ::nape::phys::GravMassMode get_DEFAULT( );
		static Dynamic get_DEFAULT_dyn();

		static ::nape::phys::GravMassMode FIXED; /* REM */ 
		static ::nape::phys::GravMassMode get_FIXED( );
		static Dynamic get_FIXED_dyn();

		static ::nape::phys::GravMassMode SCALED; /* REM */ 
		static ::nape::phys::GravMassMode get_SCALED( );
		static Dynamic get_SCALED_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_GravMassMode */ 
