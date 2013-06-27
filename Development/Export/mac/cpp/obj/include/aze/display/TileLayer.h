#ifndef INCLUDED_aze_display_TileLayer
#define INCLUDED_aze_display_TileLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <aze/display/TileGroup.h>
HX_DECLARE_CLASS2(aze,display,DrawList)
HX_DECLARE_CLASS2(aze,display,TileBase)
HX_DECLARE_CLASS2(aze,display,TileGroup)
HX_DECLARE_CLASS2(aze,display,TileLayer)
HX_DECLARE_CLASS2(aze,display,TilesheetEx)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
namespace aze{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  TileLayer_obj : public ::aze::display::TileGroup_obj{
	public:
		typedef ::aze::display::TileGroup_obj super;
		typedef TileLayer_obj OBJ_;
		TileLayer_obj();
		Void __construct(::aze::display::TilesheetEx tilesheet,hx::Null< bool >  __o_smooth,hx::Null< bool >  __o_additive);

	public:
		static hx::ObjectPtr< TileLayer_obj > __new(::aze::display::TilesheetEx tilesheet,hx::Null< bool >  __o_smooth,hx::Null< bool >  __o_additive);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TileLayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileLayer"); }

		virtual int renderGroup( ::aze::display::TileGroup group,int index,Float gx,Float gy);
		Dynamic renderGroup_dyn();

		virtual int render( Dynamic elapsed);
		Dynamic render_dyn();

		::aze::display::DrawList drawList;
		::aze::display::TilesheetEx tilesheet;
		bool useTint;
		bool useTransforms;
		bool useAlpha;
		bool useAdditive;
		bool useSmoothing;
		::flash::display::Sprite view;
		static Float synchronizedElapsed;
};

} // end namespace aze
} // end namespace display

#endif /* INCLUDED_aze_display_TileLayer */ 
