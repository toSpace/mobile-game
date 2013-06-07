#ifndef INCLUDED_aze_display_TilesheetEx
#define INCLUDED_aze_display_TilesheetEx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Tilesheet.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(aze,display,TilesheetEx)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,Tilesheet)
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(native,geom,Rectangle)
namespace aze{
namespace display{


class TilesheetEx_obj : public ::native::display::Tilesheet_obj{
	public:
		typedef ::native::display::Tilesheet_obj super;
		typedef TilesheetEx_obj OBJ_;
		TilesheetEx_obj();
		Void __construct(::native::display::BitmapData img);

	public:
		static hx::ObjectPtr< TilesheetEx_obj > __new(::native::display::BitmapData img);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TilesheetEx_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TilesheetEx"); }

		virtual ::native::geom::Rectangle getSize( int indice);
		Dynamic getSize_dyn();

		virtual Array< int > getAnim( ::String name);
		Dynamic getAnim_dyn();

		virtual Void addDefinition( ::String name,::native::geom::Rectangle size,::native::geom::Rectangle rect,::native::geom::Point center);
		Dynamic addDefinition_dyn();

		::Hash anims; /* REM */ 
		Array< ::native::geom::Rectangle > sizes; /* REM */ 
		Array< ::String > defs; /* REM */ 
		static ::aze::display::TilesheetEx createFromAssets( Array< ::String > fileNames,hx::Null< int >  padding,hx::Null< int >  spacing);
		static Dynamic createFromAssets_dyn();

		static ::aze::display::TilesheetEx createFromImages( Array< ::String > names,Array< ::native::display::BitmapData > images,hx::Null< int >  padding,hx::Null< int >  spacing);
		static Dynamic createFromImages_dyn();

		static int closestPow2( int v);
		static Dynamic closestPow2_dyn();

};

} // end namespace aze
} // end namespace display

#endif /* INCLUDED_aze_display_TilesheetEx */ 
