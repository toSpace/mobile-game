#ifndef INCLUDED_nape_util_Debug
#define INCLUDED_nape_util_Debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,util,Debug)
namespace nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Debug_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Debug_obj OBJ_;
		Debug_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Debug_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Debug_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Debug"); }

		static ::String version( );
		static Dynamic version_dyn();

		static Void clearObjectPools( );
		static Dynamic clearObjectPools_dyn();

};

} // end namespace nape
} // end namespace util

#endif /* INCLUDED_nape_util_Debug */ 
