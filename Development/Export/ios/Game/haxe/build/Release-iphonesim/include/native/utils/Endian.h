#ifndef INCLUDED_native_utils_Endian
#define INCLUDED_native_utils_Endian

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,utils,Endian)
namespace native{
namespace utils{


class Endian_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Endian_obj OBJ_;
		Endian_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Endian_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Endian_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Endian"); }

		static ::String _BIG_ENDIAN; /* REM */ 
		static ::String _LITTLE_ENDIAN; /* REM */ 
};

} // end namespace native
} // end namespace utils

#endif /* INCLUDED_native_utils_Endian */ 
