#ifndef INCLUDED_nape_callbacks_PreCallback
#define INCLUDED_nape_callbacks_PreCallback

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nape/callbacks/Callback.h>
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,PreCallback)
HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,phys,Interactor)
namespace nape{
namespace callbacks{


class PreCallback_obj : public ::nape::callbacks::Callback_obj{
	public:
		typedef ::nape::callbacks::Callback_obj super;
		typedef PreCallback_obj OBJ_;
		PreCallback_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PreCallback_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PreCallback_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PreCallback"); }

		virtual ::String toString( );

		virtual bool get_swapped( );
		Dynamic get_swapped_dyn();

		bool swapped; /* REM */ 
		virtual ::nape::phys::Interactor get_int2( );
		Dynamic get_int2_dyn();

		::nape::phys::Interactor int2; /* REM */ 
		virtual ::nape::phys::Interactor get_int1( );
		Dynamic get_int1_dyn();

		::nape::phys::Interactor int1; /* REM */ 
		virtual ::nape::dynamics::Arbiter get_arbiter( );
		Dynamic get_arbiter_dyn();

		::nape::dynamics::Arbiter arbiter; /* REM */ 
};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_PreCallback */ 
