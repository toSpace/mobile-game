#ifndef INCLUDED_DrawObject
#define INCLUDED_DrawObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <GameObject.h>
HX_DECLARE_CLASS0(DrawObject)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS2(native,display,Bitmap)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)


class DrawObject_obj : public ::GameObject_obj{
	public:
		typedef ::GameObject_obj super;
		typedef DrawObject_obj OBJ_;
		DrawObject_obj();
		Void __construct(Dynamic xmlUrl);

	public:
		static hx::ObjectPtr< DrawObject_obj > __new(Dynamic xmlUrl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DrawObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DrawObject"); }

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void erase( ::native::display::Sprite erase);
		Dynamic erase_dyn();

		virtual Void stopDrawing( );
		Dynamic stopDrawing_dyn();

		virtual Void startDrawing( );
		Dynamic startDrawing_dyn();

		virtual Void render( );

		virtual Void updateBody( );
		Dynamic updateBody_dyn();

		virtual Void convert( ::String bodyT,Float x,Float y,Float rotation);
		Dynamic convert_dyn();

		virtual Void physicsObject( ::String physic);

		virtual Void loadBitmap( ::native::display::Bitmap bitmap,::String physics);
		Dynamic loadBitmap_dyn();

		Float mass; /* REM */ 
		::String physicType; /* REM */ 
		::native::display::Sprite drawingCanvas; /* REM */ 
		bool drawing; /* REM */ 
};


#endif /* INCLUDED_DrawObject */ 
