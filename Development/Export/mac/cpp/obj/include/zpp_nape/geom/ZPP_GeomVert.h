#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#define INCLUDED_zpp_nape_geom_ZPP_GeomVert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_GeomVert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_GeomVert_obj OBJ_;
		ZPP_GeomVert_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_GeomVert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_GeomVert_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_GeomVert"); }

		virtual Void getwrap( );
		Dynamic getwrap_dyn();

		virtual Void modwrap( ::zpp_nape::geom::ZPP_Vec2 n);
		Dynamic modwrap_dyn();

		virtual ::nape::geom::Vec2 wrapper( );
		Dynamic wrapper_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		bool forced;
		::nape::geom::Vec2 wrap;
		::zpp_nape::geom::ZPP_GeomVert next;
		::zpp_nape::geom::ZPP_GeomVert prev;
		Float y;
		Float x;
		static ::zpp_nape::geom::ZPP_GeomVert zpp_pool;
		static ::zpp_nape::geom::ZPP_GeomVert get( Float x,Float y);
		static Dynamic get_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_GeomVert */ 
