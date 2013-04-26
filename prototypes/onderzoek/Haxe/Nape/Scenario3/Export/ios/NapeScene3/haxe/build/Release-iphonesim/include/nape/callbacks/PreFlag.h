#ifndef INCLUDED_nape_callbacks_PreFlag
#define INCLUDED_nape_callbacks_PreFlag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,PreFlag)
namespace nape{
namespace callbacks{


class PreFlag_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PreFlag_obj OBJ_;
		PreFlag_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PreFlag_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PreFlag_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PreFlag"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		static ::nape::callbacks::PreFlag ACCEPT; /* REM */ 
		static ::nape::callbacks::PreFlag get_ACCEPT( );
		static Dynamic get_ACCEPT_dyn();

		static ::nape::callbacks::PreFlag IGNORE; /* REM */ 
		static ::nape::callbacks::PreFlag get_IGNORE( );
		static Dynamic get_IGNORE_dyn();

		static ::nape::callbacks::PreFlag ACCEPT_ONCE; /* REM */ 
		static ::nape::callbacks::PreFlag get_ACCEPT_ONCE( );
		static Dynamic get_ACCEPT_ONCE_dyn();

		static ::nape::callbacks::PreFlag IGNORE_ONCE; /* REM */ 
		static ::nape::callbacks::PreFlag get_IGNORE_ONCE( );
		static Dynamic get_IGNORE_ONCE_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_PreFlag */ 
