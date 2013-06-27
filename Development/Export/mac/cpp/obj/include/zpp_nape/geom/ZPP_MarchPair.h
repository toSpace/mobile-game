#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#define INCLUDED_zpp_nape_geom_ZPP_MarchPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_MarchPair)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_MarchSpan)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_MarchPair_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_MarchPair_obj OBJ_;
		ZPP_MarchPair_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_MarchPair_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_MarchPair_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_MarchPair"); }

		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		::zpp_nape::geom::ZPP_MarchPair next;
		::zpp_nape::geom::ZPP_MarchSpan spanr;
		::zpp_nape::geom::ZPP_MarchSpan span2;
		::zpp_nape::geom::ZPP_MarchSpan span1;
		::zpp_nape::geom::ZPP_GeomVert pd;
		int okeyr;
		int keyr;
		::zpp_nape::geom::ZPP_GeomVert pr;
		int okey2;
		int key2;
		::zpp_nape::geom::ZPP_GeomVert p2;
		int okey1;
		int key1;
		::zpp_nape::geom::ZPP_GeomVert p1;
		static ::zpp_nape::geom::ZPP_MarchPair zpp_pool;
};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_MarchPair */ 
