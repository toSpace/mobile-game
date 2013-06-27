#ifndef INCLUDED_aze_display_TilesheetEx
#define INCLUDED_aze_display_TilesheetEx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Tilesheet.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(aze,display,TilesheetEx)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
namespace aze{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  TilesheetEx_obj : public ::openfl::display::Tilesheet_obj{
	public:
		typedef ::openfl::display::Tilesheet_obj super;
		typedef TilesheetEx_obj OBJ_;
		TilesheetEx_obj();
		Void __construct(::flash::display::BitmapData img,hx::Null< Float >  __o_textureScale);

	public:
		static hx::ObjectPtr< TilesheetEx_obj > __new(::flash::display::BitmapData img,hx::Null< Float >  __o_textureScale);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TilesheetEx_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TilesheetEx"); }

		virtual ::flash::geom::Rectangle getSize( int indice);
		Dynamic getSize_dyn();

		virtual Array< int > getAnim( ::String name);
		Dynamic getAnim_dyn();

		virtual Void addDefinition( ::String name,::flash::geom::Rectangle size,::flash::geom::Rectangle rect,::flash::geom::Point center);
		Dynamic addDefinition_dyn();

		::haxe::ds::StringMap anims;
		Array< ::Dynamic > sizes;
		Array< ::String > defs;
		Float scale;
		static ::aze::display::TilesheetEx createFromAssets( Array< ::String > fileNames,hx::Null< int >  padding,hx::Null< int >  spacing);
		static Dynamic createFromAssets_dyn();

		static ::aze::display::TilesheetEx createFromImages( Array< ::String > names,Array< ::Dynamic > images,hx::Null< int >  padding,hx::Null< int >  spacing);
		static Dynamic createFromImages_dyn();

		static int closestPow2( int v);
		static Dynamic closestPow2_dyn();

};

} // end namespace aze
} // end namespace display

#endif /* INCLUDED_aze_display_TilesheetEx */ 
