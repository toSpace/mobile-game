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
HX_DECLARE_CLASS1(haxe,Public)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,display,Tilesheet)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace aze{
namespace display{


class TileLayer_obj : public ::aze::display::TileGroup_obj{
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

		::aze::display::DrawList drawList; /* REM */ 
		::aze::display::TilesheetEx tilesheet; /* REM */ 
		bool useTint; /* REM */ 
		bool useTransforms; /* REM */ 
		bool useAlpha; /* REM */ 
		bool useAdditive; /* REM */ 
		bool useSmoothing; /* REM */ 
		::native::display::Sprite view; /* REM */ 
		static Float synchronizedElapsed; /* REM */ 
};

} // end namespace aze
} // end namespace display

#endif /* INCLUDED_aze_display_TileLayer */ 
