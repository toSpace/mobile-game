#ifndef INCLUDED_Drawing
#define INCLUDED_Drawing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Drawing)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)


class HXCPP_CLASS_ATTRIBUTES  Drawing_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Drawing_obj OBJ_;
		Drawing_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Drawing_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Drawing_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Drawing"); }

		static bool drawing;
		static bool erasing;
		static bool locked;
		static Float x;
		static Float y;
		static Dynamic drawList;
		static Void init( );
		static Dynamic init_dyn();

		static Void startDraw( ::flash::events::MouseEvent e);
		static Dynamic startDraw_dyn();

		static Void stopDraw( ::flash::events::MouseEvent e);
		static Dynamic stopDraw_dyn();

		static Void checkDraw( ::flash::events::MouseEvent e);
		static Dynamic checkDraw_dyn();

		static bool checkActive( ::nape::phys::Body b);
		static Dynamic checkActive_dyn();

		static bool mouseOver( Dynamic asset);
		static Dynamic mouseOver_dyn();

		static Void addDrawObject( Dynamic asset);
		static Dynamic addDrawObject_dyn();

};


#endif /* INCLUDED_Drawing */ 
