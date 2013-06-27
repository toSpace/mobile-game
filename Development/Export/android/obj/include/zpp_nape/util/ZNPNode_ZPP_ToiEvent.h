#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ToiEvent
#define INCLUDED_zpp_nape_util_ZNPNode_ZPP_ToiEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_ToiEvent)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_ToiEvent)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZNPNode_ZPP_ToiEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPNode_ZPP_ToiEvent_obj OBJ_;
		ZNPNode_ZPP_ToiEvent_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZNPNode_ZPP_ToiEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZNPNode_ZPP_ToiEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZNPNode_ZPP_ToiEvent"); }

		virtual ::zpp_nape::geom::ZPP_ToiEvent elem( );
		Dynamic elem_dyn();

		::zpp_nape::geom::ZPP_ToiEvent elt;
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::util::ZNPNode_ZPP_ToiEvent next;
		static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent zpp_pool;
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPNode_ZPP_ToiEvent */ 
