#ifndef INCLUDED_Retina
#define INCLUDED_Retina

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Retina)


class Retina_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Retina_obj OBJ_;
		Retina_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Retina_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Retina_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Retina"); }

		static ::String asset; /* REM */ 
		static ::String xml; /* REM */ 
		static Float screenDensity; /* REM */ 
		static Void setSizes( );
		static Dynamic setSizes_dyn();

		static Float sizeAdjustment( );
		static Dynamic sizeAdjustment_dyn();

};


#endif /* INCLUDED_Retina */ 
