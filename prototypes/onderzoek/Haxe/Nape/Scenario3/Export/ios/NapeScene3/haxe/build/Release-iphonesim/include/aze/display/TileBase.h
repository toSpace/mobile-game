#ifndef INCLUDED_aze_display_TileBase
#define INCLUDED_aze_display_TileBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/Public.h>
HX_DECLARE_CLASS2(aze,display,TileBase)
HX_DECLARE_CLASS2(aze,display,TileGroup)
HX_DECLARE_CLASS2(aze,display,TileLayer)
HX_DECLARE_CLASS1(haxe,Public)
namespace aze{
namespace display{


class TileBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileBase_obj OBJ_;
		TileBase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TileBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TileBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::Public_obj *()
			{ return new ::haxe::Public_delegate_< TileBase_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("TileBase"); }

		virtual Void step( int elapsed);
		Dynamic step_dyn();

		virtual Void init( ::aze::display::TileLayer layer);
		Dynamic init_dyn();

		bool visible; /* REM */ 
		bool animated; /* REM */ 
		Float y; /* REM */ 
		Float x; /* REM */ 
		::aze::display::TileGroup parent; /* REM */ 
		::aze::display::TileLayer layer; /* REM */ 
};

} // end namespace aze
} // end namespace display

#endif /* INCLUDED_aze_display_TileBase */ 
