#ifndef INCLUDED_aze_display_SparrowTilesheet
#define INCLUDED_aze_display_SparrowTilesheet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <aze/display/TilesheetEx.h>
HX_DECLARE_CLASS2(aze,display,SparrowTilesheet)
HX_DECLARE_CLASS2(aze,display,TilesheetEx)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,Tilesheet)
namespace aze{
namespace display{


class SparrowTilesheet_obj : public ::aze::display::TilesheetEx_obj{
	public:
		typedef ::aze::display::TilesheetEx_obj super;
		typedef SparrowTilesheet_obj OBJ_;
		SparrowTilesheet_obj();
		Void __construct(::native::display::BitmapData img,::String xml);

	public:
		static hx::ObjectPtr< SparrowTilesheet_obj > __new(::native::display::BitmapData img,::String xml);
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
