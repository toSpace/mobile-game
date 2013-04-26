#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#define INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbSet)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbSetPair)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_InteractionListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_InteractionListener)
namespace zpp_nape{
namespace callbacks{


class ZPP_CbSetPair_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_CbSetPair_obj OBJ_;
		ZPP_CbSetPair_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_CbSetPair_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_CbSetPair_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_CbSetPair"); }

		virtual Void forall( int event,Dynamic cb);
		Dynamic forall_dyn();

		virtual bool single_intersection( ::zpp_nape::callbacks::ZPP_InteractionListener i);
		Dynamic single_intersection_dyn();

		virtual bool empty_intersection( );
		Dynamic empty_intersection_dyn();

		virtual Void __validate( );
		Dynamic __validate_dyn();

		virtual Void validate( );
		Dynamic validate_dyn();

		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		::zpp_nape::util::ZNPList_ZPP_InteractionListener listeners; /* REM */ 
		bool zip_listeners; /* REM */ 
		virtual bool compatible( ::zpp_nape::callbacks::ZPP_InteractionListener i);
		Dynamic compatible_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		::zpp_nape::callbacks::ZPP_CbSetPair next; /* REM */ 
		::zpp_nape::callbacks::ZPP_CbSet b; /* REM */ 
		::zpp_nape::callbacks::ZPP_CbSet a; /* REM */ 
		static ::zpp_nape::callbacks::ZPP_CbSetPair zpp_pool; /* REM */ 
		static ::zpp_nape::callbacks::ZPP_CbSetPair get( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b);
		static Dynamic get_dyn();

		static bool setlt( ::zpp_nape::callbacks::ZPP_CbSetPair x,::zpp_nape::callbacks::ZPP_CbSetPair y);
		static Dynamic setlt_dyn();

};

} // end namespace zpp_nape
} // end namespace callbacks

#endif /* INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair */ 
