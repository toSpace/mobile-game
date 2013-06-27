#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,display,Stage)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(nape,space,Space)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		virtual Void activate( ::flash::events::Event ev);
		Dynamic activate_dyn();

		virtual Void deactivate( ::flash::events::Event ev);
		Dynamic deactivate_dyn();

		virtual Void onResize( ::flash::events::Event ev);
		Dynamic onResize_dyn();

		virtual Void enterFrameHandler( ::flash::events::Event ev);
		Dynamic enterFrameHandler_dyn();

		virtual Void startPhysics( ::flash::display::Stage stage);
		Dynamic startPhysics_dyn();

		static ::flash::display::Stage stage;
		static ::flash::display::Sprite canvas;
		static ::nape::space::Space space;
		static Dynamic activeLevel;
};


#endif /* INCLUDED_Main */ 
