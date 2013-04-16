#ifndef INCLUDED_nape_shape_ValidationResult
#define INCLUDED_nape_shape_ValidationResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,shape,ValidationResult)
namespace nape{
namespace shape{


class ValidationResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ValidationResult_obj OBJ_;
		ValidationResult_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ValidationResult_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ValidationResult_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ValidationResult"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		static ::nape::shape::ValidationResult VALID; /* REM */ 
		static ::nape::shape::ValidationResult get_VALID( );
		static Dynamic get_VALID_dyn();

		static ::nape::shape::ValidationResult DEGENERATE; /* REM */ 
		static ::nape::shape::ValidationResult get_DEGENERATE( );
		static Dynamic get_DEGENERATE_dyn();

		static ::nape::shape::ValidationResult CONCAVE; /* REM */ 
		static ::nape::shape::ValidationResult get_CONCAVE( );
		static Dynamic get_CONCAVE_dyn();

		static ::nape::shape::ValidationResult SELF_INTERSECTING; /* REM */ 
		static ::nape::shape::ValidationResult get_SELF_INTERSECTING( );
		static Dynamic get_SELF_INTERSECTING_dyn();

};

} // end namespace nape
} // end namespace shape

#endif /* INCLUDED_nape_shape_ValidationResult */ 
