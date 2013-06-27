#ifndef INCLUDED_LineDrawing
#define INCLUDED_LineDrawing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(LineDrawing)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  LineDrawing_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LineDrawing_obj OBJ_;
		LineDrawing_obj();
		Void __construct(Float x,Float y);

	public:
		static hx::ObjectPtr< LineDrawing_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LineDrawing_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LineDrawing"); }

		virtual Void erase( ::flash::display::Bitmap bitmap);
		Dynamic erase_dyn();

		virtual Void draw( bool erasing);
		Dynamic draw_dyn();

		virtual Void end( );
		Dynamic end_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		bool stopped;
		::flash::display::Sprite drawing;
};


#endif /* INCLUDED_LineDrawing */ 
