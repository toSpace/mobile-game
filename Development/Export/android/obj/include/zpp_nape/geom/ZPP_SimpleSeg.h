#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#define INCLUDED_zpp_nape_geom_ZPP_SimpleSeg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimpleSeg)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimpleVert)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Set_ZPP_SimpleSeg)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Set_ZPP_SimpleVert)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_SimpleSeg_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_SimpleSeg_obj OBJ_;
		ZPP_SimpleSeg_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_SimpleSeg_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_SimpleSeg_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_SimpleSeg"); }

		virtual bool less_xy( ::zpp_nape::geom::ZPP_SimpleVert a,::zpp_nape::geom::ZPP_SimpleVert b);
		Dynamic less_xy_dyn();

		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node;
		::zpp_nape::geom::ZPP_SimpleSeg prev;
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		::zpp_nape::geom::ZPP_SimpleSeg next;
		int id;
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert vertices;
		::zpp_nape::geom::ZPP_SimpleVert right;
		::zpp_nape::geom::ZPP_SimpleVert left;
		static ::zpp_nape::geom::ZPP_SimpleSeg zpp_pool;
		static ::zpp_nape::geom::ZPP_SimpleSeg get( ::zpp_nape::geom::ZPP_SimpleVert left,::zpp_nape::geom::ZPP_SimpleVert right);
		static Dynamic get_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_SimpleSeg */ 
