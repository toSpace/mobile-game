#ifndef INCLUDED_BackgroundObject
#define INCLUDED_BackgroundObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BackgroundObject)
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(haxe,ds,StringMap)


class HXCPP_CLASS_ATTRIBUTES  BackgroundObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BackgroundObject_obj OBJ_;
		BackgroundObject_obj();
		Void __construct(::String xmlUrl);

	public:
		static hx::ObjectPtr< BackgroundObject_obj > __new(::String xmlUrl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BackgroundObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BackgroundObject"); }

		virtual Void setBlendmode( ::String mode);
		Dynamic setBlendmode_dyn();

		virtual Void paralax( );
		Dynamic paralax_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void readXml( ::String url);
		Dynamic readXml_dyn();

		Float x;
		Float speed;
		Float startX;
		::haxe::ds::StringMap xml;
		::flash::display::Bitmap asset;
		::flash::display::Sprite canvas;
};


#endif /* INCLUDED_BackgroundObject */ 
