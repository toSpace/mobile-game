#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#define INCLUDED_zpp_nape_geom_ZPP_SimpleVert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimpleVert)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Set_ZPP_SimpleVert)
namespace zpp_nape{
namespace geom{


class ZPP_SimpleVert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_SimpleVert_obj OBJ_;
		ZPP_SimpleVert_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_SimpleVert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_SimpleVert_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_SimpleVert"); }

		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node; /* REM */ 
		::zpp_nape::geom::ZPP_SimpleVert next; /* REM */ 
		int id; /* REM */ 
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert links; /* REM */ 
		Float y; /* REM */ 
		Float x; /* REM */ 
		bool forced; /* REM */ 
		static ::zpp_nape::geom::ZPP_SimpleVert zpp_pool; /* REM */ 
		static bool less_xy( ::zpp_nape::geom::ZPP_SimpleVert p,::zpp_nape::geom::ZPP_SimpleVert q);
		static Dynamic less_xy_dyn();

		static Void swap_nodes( ::zpp_nape::geom::ZPP_SimpleVert p,::zpp_nape::geom::ZPP_SimpleVert q);
		static Dynamic swap_nodes_dyn();

		static ::zpp_nape::geom::ZPP_SimpleVert get( Float x,Float y);
		static Dynamic get_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_SimpleVert */ 
