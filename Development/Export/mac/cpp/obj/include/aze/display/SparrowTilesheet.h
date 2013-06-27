#ifndef INCLUDED_aze_display_SparrowTilesheet
#define INCLUDED_aze_display_SparrowTilesheet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <aze/display/TilesheetEx.h>
HX_DECLARE_CLASS2(aze,display,SparrowTilesheet)
HX_DECLARE_CLASS2(aze,display,TilesheetEx)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
namespace aze{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  SparrowTilesheet_obj : public ::aze::display::TilesheetEx_obj{
	public:
		typedef ::aze::display::TilesheetEx_obj super;
		typedef SparrowTilesheet_obj OBJ_;
		SparrowTilesheet_obj();
		Void __construct(::flash::display::BitmapData img,::String xml,hx::Null< Float >  __o_textureScale);

	public:
		static hx::ObjectPtr< SparrowTilesheet_obj > __new(::flash::display::BitmapData img,::String xml,hx::Null< Float >  __o_textureScale);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SparrowTilesheet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SparrowTilesheet"); }

};

} // end namespace aze
} // end namespace display

#endif /* INCLUDED_aze_display_SparrowTilesheet */ 
