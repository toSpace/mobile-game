#ifndef INCLUDED_nape_callbacks_BodyListener
#define INCLUDED_nape_callbacks_BodyListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nape/callbacks/Listener.h>
HX_DECLARE_CLASS2(nape,callbacks,BodyCallback)
HX_DECLARE_CLASS2(nape,callbacks,BodyListener)
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,CbEvent)
HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(nape,callbacks,OptionType)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_BodyListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)
namespace nape{
namespace callbacks{


class BodyListener_obj : public ::nape::callbacks::Listener_obj{
	public:
		typedef ::nape::callbacks::Listener_obj super;
		typedef BodyListener_obj OBJ_;
		BodyListener_obj();
		Void __construct(::nape::callbacks::CbEvent event,Dynamic options,Dynamic handler,hx::Null< int >  __o_precedence);

	public:
		static hx::ObjectPtr< BodyListener_obj > __new(::nape::callbacks::CbEvent event,Dynamic options,Dynamic handler,hx::Null< int >  __o_precedence);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BodyListener_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BodyListener"); }

		virtual Dynamic set_handler( Dynamic handler);
		Dynamic set_handler_dyn();

		virtual Dynamic get_handler( );
		Dynamic get_handler_dyn();

		Dynamic handler; /* REM */ 
		Dynamic &handler_dyn() { return handler;}
		virtual ::nape::callbacks::OptionType set_options( ::nape::callbacks::OptionType options);
		Dynamic set_options_dyn();

		virtual ::nape::callbacks::OptionType get_options( );
		Dynamic get_options_dyn();

		::nape::callbacks::OptionType options; /* REM */ 
		::zpp_nape::callbacks::ZPP_BodyListener zpp_inner_zn; /* REM */ 
};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_BodyListener */ 
