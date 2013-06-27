#ifndef INCLUDED_nape_callbacks_Callback
#define INCLUDED_nape_callbacks_Callback

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,CbEvent)
HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Callback)
namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES  Callback_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Callback_obj OBJ_;
		Callback_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Callback_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Callback_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Callback"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::nape::callbacks::Listener get_listener( );
		Dynamic get_listener_dyn();

		virtual ::nape::callbacks::CbEvent get_event( );
		Dynamic get_event_dyn();

		::zpp_nape::callbacks::ZPP_Callback zpp_inner;
};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_Callback */ 
