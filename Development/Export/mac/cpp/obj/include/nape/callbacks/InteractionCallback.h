#ifndef INCLUDED_nape_callbacks_InteractionCallback
#define INCLUDED_nape_callbacks_InteractionCallback

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nape/callbacks/Callback.h>
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,InteractionCallback)
HX_DECLARE_CLASS2(nape,dynamics,ArbiterList)
HX_DECLARE_CLASS2(nape,phys,Interactor)
namespace nape{
namespace callbacks{


class HXCPP_CLASS_ATTRIBUTES  InteractionCallback_obj : public ::nape::callbacks::Callback_obj{
	public:
		typedef ::nape::callbacks::Callback_obj super;
		typedef InteractionCallback_obj OBJ_;
		InteractionCallback_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< InteractionCallback_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~InteractionCallback_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InteractionCallback"); }

		virtual ::String toString( );

		virtual ::nape::dynamics::ArbiterList get_arbiters( );
		Dynamic get_arbiters_dyn();

		virtual ::nape::phys::Interactor get_int2( );
		Dynamic get_int2_dyn();

		virtual ::nape::phys::Interactor get_int1( );
		Dynamic get_int1_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_InteractionCallback */ 
