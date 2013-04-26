#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#define INCLUDED_zpp_nape_callbacks_ZPP_BodyListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/callbacks/ZPP_Listener.h>
HX_DECLARE_CLASS2(nape,callbacks,BodyCallback)
HX_DECLARE_CLASS2(nape,callbacks,BodyListener)
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(nape,callbacks,OptionType)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_BodyListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbType)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_OptionType)
namespace zpp_nape{
namespace callbacks{


class ZPP_BodyListener_obj : public ::zpp_nape::callbacks::ZPP_Listener_obj{
	public:
		typedef ::zpp_nape::callbacks::ZPP_Listener_obj super;
		typedef ZPP_BodyListener_obj OBJ_;
		ZPP_BodyListener_obj();
		Void __construct(::nape::callbacks::OptionType options,int event,Dynamic handler);

	public:
		static hx::ObjectPtr< ZPP_BodyListener_obj > __new(::nape::callbacks::OptionType options,int event,Dynamic handler);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_BodyListener_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_BodyListener"); }

		virtual Void swapEvent( int newev);

		virtual Void invalidate_precedence( );

		virtual Void cbtype_change( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added);
		Dynamic cbtype_change_dyn();

		virtual Void removedFromSpace( );

		virtual Void addedToSpace( );

		virtual Void immutable_options( );
		Dynamic immutable_options_dyn();

		Dynamic handler; /* REM */ 
		Dynamic &handler_dyn() { return handler;}
		::zpp_nape::callbacks::ZPP_OptionType options; /* REM */ 
		::nape::callbacks::BodyListener outer_zn; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace callbacks

#endif /* INCLUDED_zpp_nape_callbacks_ZPP_BodyListener */ 
