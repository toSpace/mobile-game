#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#define INCLUDED_zpp_nape_callbacks_ZPP_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_BodyListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_ConstraintListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_InteractionListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
namespace zpp_nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES  ZPP_Listener_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Listener_obj OBJ_;
		ZPP_Listener_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_Listener_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Listener_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Listener"); }

		virtual Void removedFromSpace( );
		Dynamic removedFromSpace_dyn();

		virtual Void addedToSpace( );
		Dynamic addedToSpace_dyn();

		virtual Void invalidate_precedence( );
		Dynamic invalidate_precedence_dyn();

		virtual Void swapEvent( int event);
		Dynamic swapEvent_dyn();

		::zpp_nape::space::ZPP_Space space;
		::zpp_nape::callbacks::ZPP_InteractionListener interaction;
		::zpp_nape::callbacks::ZPP_ConstraintListener constraint;
		::zpp_nape::callbacks::ZPP_BodyListener body;
		int precedence;
		int event;
		int type;
		int id;
		::nape::callbacks::Listener outer;
		static bool internal;
		static bool setlt( ::zpp_nape::callbacks::ZPP_Listener a,::zpp_nape::callbacks::ZPP_Listener b);
		static Dynamic setlt_dyn();

};

} // end namespace zpp_nape
} // end namespace callbacks

#endif /* INCLUDED_zpp_nape_callbacks_ZPP_Listener */ 
