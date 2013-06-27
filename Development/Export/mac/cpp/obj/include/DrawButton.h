#ifndef INCLUDED_DrawButton
#define INCLUDED_DrawButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <UIobject.h>
HX_DECLARE_CLASS0(DrawButton)
HX_DECLARE_CLASS0(UIobject)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)


class HXCPP_CLASS_ATTRIBUTES  DrawButton_obj : public ::UIobject_obj{
	public:
		typedef ::UIobject_obj super;
		typedef DrawButton_obj OBJ_;
		DrawButton_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DrawButton_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DrawButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DrawButton"); }

		virtual Void mouseClick( ::flash::events::MouseEvent ev);

		::flash::display::Bitmap asset_out;
		::flash::display::Bitmap asset_over;
};


#endif /* INCLUDED_DrawButton */ 
