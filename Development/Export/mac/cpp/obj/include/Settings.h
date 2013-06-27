#ifndef INCLUDED_Settings
#define INCLUDED_Settings

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Settings)


class HXCPP_CLASS_ATTRIBUTES  Settings_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Settings_obj OBJ_;
		Settings_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Settings_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Settings_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Settings"); }

		static Float brushSize;
		static Float flockSpeed;
		static Float flockVelocity;
		static Float cameraOverflow;
		static Float paralaxDepth;
		static Void load( );
		static Dynamic load_dyn();

};


#endif /* INCLUDED_Settings */ 
