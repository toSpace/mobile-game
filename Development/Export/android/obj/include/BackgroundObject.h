#ifndef INCLUDED_BackgroundObject
#define INCLUDED_BackgroundObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BackgroundObject)
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(native,display,Bitmap)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)


class BackgroundObject_obj : public hx::Object{
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

		virtual ::Hash readXml( ::String url);
		Dynamic readXml_dyn();

		::Hash xml; /* REM */ 
		::native::display::Bitmap asset; /* REM */ 
		::native::display::Sprite canvas; /* REM */ 
		static Float startX; /* REM */ 
		static Float speed; /* REM */ 
		static Float x; /* REM */ 
};


#endif /* INCLUDED_BackgroundObject */ 
