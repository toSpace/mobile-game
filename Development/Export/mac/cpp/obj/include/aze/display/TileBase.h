#ifndef INCLUDED_aze_display_TileBase
#define INCLUDED_aze_display_TileBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(aze,display,TileBase)
HX_DECLARE_CLASS2(aze,display,TileGroup)
HX_DECLARE_CLASS2(aze,display,TileLayer)
namespace aze{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  TileBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileBase_obj OBJ_;
		TileBase_obj();
		Void __construct(::aze::display::TileLayer layer);

	public:
		static hx::ObjectPtr< TileBase_obj > __new(::aze::display::TileLayer layer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TileBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileBase"); }

		virtual Void step( int elapsed);
		Dynamic step_dyn();

		virtual Void init( ::aze::display::TileLayer layer);
		Dynamic init_dyn();

		bool visible;
		bool animated;
		Float y;
		Float x;
		::aze::display::TileGroup parent;
		::aze::display::TileLayer layer;
};

} // end namespace aze
} // end namespace display

#endif /* INCLUDED_aze_display_TileBase */ 
