#ifndef INCLUDED_BitmapDataIso
#define INCLUDED_BitmapDataIso

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BitmapDataIso)
HX_DECLARE_CLASS2(nape,geom,AABB)
HX_DECLARE_CLASS2(native,display,Bitmap)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)


class BitmapDataIso_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapDataIso_obj OBJ_;
		BitmapDataIso_obj();
		Void __construct(::native::display::BitmapData bitmap,hx::Null< Float >  __o_alphaThreshold);

	public:
		static hx::ObjectPtr< BitmapDataIso_obj > __new(::native::display::BitmapData bitmap,hx::Null< Float >  __o_alphaThreshold);
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

		virtual ::native::display::Bitmap graphic( );
		Dynamic graphic_dyn();

		::nape::geom::AABB bounds; /* REM */ 
		Float alphaThreshold; /* REM */ 
		::native::display::BitmapData bitmap; /* REM */ 
};


#endif /* INCLUDED_BitmapDataIso */ 
