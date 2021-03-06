#ifndef INCLUDED_Mobile
#define INCLUDED_Mobile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Mobile)


class Mobile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mobile_obj OBJ_;
		Mobile_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Mobile_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Mobile_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Mobile"); }

		static ::String asset; /* REM */ 
		static ::String xml; /* REM */ 
		static Float screenDensity; /* REM */ 
		static Float screenWidth; /* REM */ 
		static Float screenHeight; /* REM */ 
		static Void setSizes( );
		static Dynamic setSizes_dyn();

		static Float sizeAdjustment( );
		static Dynamic sizeAdjustment_dyn();

		static Float getY( Dynamic object);
		static Dynamic getY_dyn();

		static Float inView( Dynamic object);
		static Dynamic inView_dyn();

};


#endif /* INCLUDED_Mobile */ 
