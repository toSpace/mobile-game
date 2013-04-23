#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
HX_DECLARE_CLASS0(FPS)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,text,TextField)


class Main_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
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

		virtual Void updateGraphics( ::nape::phys::Body b);
		Dynamic updateGraphics_dyn();

		virtual Void enterFrameHandler( ::native::events::Event ev);
		Dynamic enterFrameHandler_dyn();

		virtual Dynamic getParticleType( );
		Dynamic getParticleType_dyn();

		virtual Void addParticle( );
		Dynamic addParticle_dyn();

		virtual Void addPerson( );
		Dynamic addPerson_dyn();

		virtual Void createFloors( Float x,Float y,Float width,Float height);
		Dynamic createFloors_dyn();

		virtual Void setUp( );
		Dynamic setUp_dyn();

		virtual Void initialise( ::native::events::Event ev);
		Dynamic initialise_dyn();

		int particleIteration; /* REM */ 
		::FPS counter; /* REM */ 
		::nape::space::Space space; /* REM */ 
};


#endif /* INCLUDED_Main */ 
