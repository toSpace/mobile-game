#ifndef INCLUDED_UIobject
#define INCLUDED_UIobject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(UIobject)
HX_DECLARE_CLASS2(native,display,Bitmap)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,events,MouseEvent)


class UIobject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UIobject_obj OBJ_;
		UIobject_obj();
		Void __construct(::String url,Float x,Float y,Dynamic __o_fixed);

	public:
		static hx::ObjectPtr< UIobject_obj > __new(::String url,Float x,Float y,Dynamic __o_fixed);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~UIobject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIobject"); }

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void mouseOut( ::native::events::MouseEvent ev);
		Dynamic mouseOut_dyn();

		virtual Void mouseOver( ::native::events::MouseEvent ev);
		Dynamic mouseOver_dyn();

		virtual Void mouseClick( ::native::events::MouseEvent ev);
		Dynamic mouseClick_dyn();

		virtual Void onAdded( ::native::events::Event ev);
		Dynamic onAdded_dyn();

		::native::display::Sprite parent; /* REM */ 
		::native::display::Bitmap asset; /* REM */ 
		Dynamic canvas; /* REM */ 
};


#endif /* INCLUDED_UIobject */ 
