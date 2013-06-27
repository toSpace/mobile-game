#ifndef INCLUDED_DrawObject
#define INCLUDED_DrawObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <GameObject.h>
HX_DECLARE_CLASS0(DrawObject)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  DrawObject_obj : public ::GameObject_obj{
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

		virtual ::flash::display::BitmapData invert( ::flash::display::BitmapData image);
		Dynamic invert_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void erase( ::flash::display::Sprite erase,::flash::display::Bitmap bitmap);
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

		virtual Void loadBitmap( ::flash::display::Bitmap bitmap,::String physics);
		Dynamic loadBitmap_dyn();

		Float mass;
		::String physicType;
		::flash::display::Sprite drawingCanvas;
		bool drawing;
};


#endif /* INCLUDED_DrawObject */ 
