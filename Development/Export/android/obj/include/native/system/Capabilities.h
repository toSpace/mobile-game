#ifndef INCLUDED_native_system_Capabilities
#define INCLUDED_native_system_Capabilities

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,system,Capabilities)
namespace native{
namespace system{


class Capabilities_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Capabilities_obj OBJ_;
		Capabilities_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Capabilities_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Capabilities_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Capabilities"); }

		static Float pixelAspectRatio; /* REM */ 
		static Float screenDPI; /* REM */ 
		static Float screenResolutionX; /* REM */ 
		static Float screenResolutionY; /* REM */ 
		static Array< Array< int > > screenResolutions; /* REM */ 
		static ::String language; /* REM */ 
		static Float get_pixelAspectRatio( );
		static Dynamic get_pixelAspectRatio_dyn();

		static Float get_screenDPI( );
		static Dynamic get_screenDPI_dyn();

		static Float get_screenResolutionX( );
		static Dynamic get_screenResolutionX_dyn();

		static Float get_screenResolutionY( );
		static Dynamic get_screenResolutionY_dyn();

		static ::String get_language( );
		static Dynamic get_language_dyn();

		static Array< Array< int > > get_screenResolutions( );
		static Dynamic get_screenResolutions_dyn();

		static Dynamic nme_capabilities_get_pixel_aspect_ratio; /* REM */ 
		static Dynamic &nme_capabilities_get_pixel_aspect_ratio_dyn() { return nme_capabilities_get_pixel_aspect_ratio;}
		static Dynamic nme_capabilities_get_screen_dpi; /* REM */ 
		static Dynamic &nme_capabilities_get_screen_dpi_dyn() { return nme_capabilities_get_screen_dpi;}
		static Dynamic nme_capabilities_get_screen_resolution_x; /* REM */ 
		static Dynamic &nme_capabilities_get_screen_resolution_x_dyn() { return nme_capabilities_get_screen_resolution_x;}
		static Dynamic nme_capabilities_get_screen_resolution_y; /* REM */ 
		static Dynamic &nme_capabilities_get_screen_resolution_y_dyn() { return nme_capabilities_get_screen_resolution_y;}
		static Dynamic nme_capabilities_get_screen_resolutions; /* REM */ 
		static Dynamic &nme_capabilities_get_screen_resolutions_dyn() { return nme_capabilities_get_screen_resolutions;}
		static Dynamic nme_capabilities_get_language; /* REM */ 
		static Dynamic &nme_capabilities_get_language_dyn() { return nme_capabilities_get_language;}
};

} // end namespace native
} // end namespace system

#endif /* INCLUDED_native_system_Capabilities */ 
