#ifndef INCLUDED_BitmapDataIso
#define INCLUDED_BitmapDataIso

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BitmapDataIso)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(nape,geom,AABB)


class HXCPP_CLASS_ATTRIBUTES  BitmapDataIso_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapDataIso_obj OBJ_;
		BitmapDataIso_obj();
		Void __construct(::flash::display::BitmapData bitmap,hx::Null< Float >  __o_alphaThreshold);

	public:
		static hx::ObjectPtr< BitmapDataIso_obj > __new(::flash::display::BitmapData bitmap,hx::Null< Float >  __o_alphaThreshold);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BitmapDataIso_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitmapDataIso"); }

		virtual Float iso( Float x,Float y);
		Dynamic iso_dyn();

		virtual ::flash::display::Bitmap graphic( );
		Dynamic graphic_dyn();

		::nape::geom::AABB bounds;
		Float alphaThreshold;
		::flash::display::BitmapData bitmap;
};


#endif /* INCLUDED_BitmapDataIso */ 
