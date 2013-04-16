#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#define INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimpleVert)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_SimpleVert)
namespace zpp_nape{
namespace util{


class ZNPNode_ZPP_SimpleVert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPNode_ZPP_SimpleVert_obj OBJ_;
		ZNPNode_ZPP_SimpleVert_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZNPNode_ZPP_SimpleVert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZNPNode_ZPP_SimpleVert_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZNPNode_ZPP_SimpleVert"); }

		virtual ::zpp_nape::geom::ZPP_SimpleVert elem( );
		Dynamic elem_dyn();

		::zpp_nape::geom::ZPP_SimpleVert elt; /* REM */ 
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::util::ZNPNode_ZPP_SimpleVert next; /* REM */ 
		static ::zpp_nape::util::ZNPNode_ZPP_SimpleVert zpp_pool; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert */ 
