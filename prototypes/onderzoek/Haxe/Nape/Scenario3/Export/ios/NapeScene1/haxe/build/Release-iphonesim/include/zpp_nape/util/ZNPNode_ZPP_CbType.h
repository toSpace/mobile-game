#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#define INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbType)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_CbType)
namespace zpp_nape{
namespace util{


class ZNPNode_ZPP_CbType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPNode_ZPP_CbType_obj OBJ_;
		ZNPNode_ZPP_CbType_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZNPNode_ZPP_CbType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZNPNode_ZPP_CbType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZNPNode_ZPP_CbType"); }

		virtual ::zpp_nape::callbacks::ZPP_CbType elem( );
		Dynamic elem_dyn();

		::zpp_nape::callbacks::ZPP_CbType elt; /* REM */ 
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::util::ZNPNode_ZPP_CbType next; /* REM */ 
		static ::zpp_nape::util::ZNPNode_ZPP_CbType zpp_pool; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType */ 
