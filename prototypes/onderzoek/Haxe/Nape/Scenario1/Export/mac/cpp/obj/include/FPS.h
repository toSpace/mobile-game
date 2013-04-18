#ifndef INCLUDED_FPS
#define INCLUDED_FPS

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/text/TextField.h>
HX_DECLARE_CLASS0(FPS)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,text,TextField)


class FPS_obj : public ::native::text::TextField_obj{
	public:
		typedef ::native::text::TextField_obj super;
		typedef FPS_obj OBJ_;
		FPS_obj();
		Void __construct(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol);

	public:
		static hx::ObjectPtr< FPS_obj > __new(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FPS_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FPS"); }

		virtual bool add( );
		Dynamic add_dyn();

		virtual Void onEnter( Dynamic _);
		Dynamic onEnter_dyn();

		int nrParticles; /* REM */ 
		Array< Float > times; /* REM */ 
};


#endif /* INCLUDED_FPS */ 
