#ifndef INCLUDED_nape_callbacks_BodyCallback
#define INCLUDED_nape_callbacks_BodyCallback

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nape/callbacks/Callback.h>
HX_DECLARE_CLASS2(nape,callbacks,BodyCallback)
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
namespace nape{
namespace callbacks{


class BodyCallback_obj : public ::nape::callbacks::Callback_obj{
	public:
		typedef ::nape::callbacks::Callback_obj super;
		typedef BodyCallback_obj OBJ_;
		BodyCallback_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BodyCallback_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BodyCallback_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BodyCallback"); }

		virtual ::String toString( );

		virtual ::nape::phys::Body get_body( );
		Dynamic get_body_dyn();

		::nape::phys::Body body; /* REM */ 
};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_BodyCallback */ 
