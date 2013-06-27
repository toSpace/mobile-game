#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#define INCLUDED_zpp_nape_geom_ZPP_CutInt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_CutInt)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_CutVert)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_CutInt_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_CutInt_obj OBJ_;
		ZPP_CutInt_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_CutInt_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_CutInt_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_CutInt"); }

		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::geom::ZPP_CutVert path1;
		::zpp_nape::geom::ZPP_GeomVert start;
		::zpp_nape::geom::ZPP_GeomVert end;
		::zpp_nape::geom::ZPP_CutVert path0;
		bool vertex;
		bool virtualint;
		Float time;
		::zpp_nape::geom::ZPP_CutInt next;
		static ::zpp_nape::geom::ZPP_CutInt zpp_pool;
		static ::zpp_nape::geom::ZPP_CutInt get( Float time,::zpp_nape::geom::ZPP_GeomVert end,::zpp_nape::geom::ZPP_GeomVert start,::zpp_nape::geom::ZPP_CutVert path0,::zpp_nape::geom::ZPP_CutVert path1,hx::Null< bool >  virtualint,hx::Null< bool >  vertex);
		static Dynamic get_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_CutInt */ 
