#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,display,Stage)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)


class Main_obj : public hx::Object{
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

		virtual Void activate( ::native::events::Event ev);
		Dynamic activate_dyn();

		virtual Void deactivate( ::native::events::Event ev);
		Dynamic deactivate_dyn();

		virtual Void onResize( ::native::events::Event ev);
		Dynamic onResize_dyn();

		virtual Void enterFrameHandler( ::native::events::Event ev);
		Dynamic enterFrameHandler_dyn();

		virtual Void startPhysics( ::native::display::Stage stage);
		Dynamic startPhysics_dyn();

		static ::native::display::Stage stage; /* REM */ 
		static ::native::display::Sprite canvas; /* REM */ 
		static ::nape::space::Space space; /* REM */ 
		static Dynamic activeLevel; /* REM */ 
};


#endif /* INCLUDED_Main */ 
