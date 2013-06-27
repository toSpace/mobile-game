#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#define INCLUDED_zpp_nape_geom_ZPP_Mat23

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Mat23)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Mat23)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_Mat23_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Mat23_obj OBJ_;
		ZPP_Mat23_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_Mat23_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Mat23_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Mat23"); }

		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		::zpp_nape::geom::ZPP_Mat23 next;
		virtual Void setas( Float a,Float b,Float c,Float d,Float tx,Float ty);
		Dynamic setas_dyn();

		virtual Void set( ::zpp_nape::geom::ZPP_Mat23 m);
		Dynamic set_dyn();

		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		Dynamic _invalidate;
		Dynamic &_invalidate_dyn() { return _invalidate;}
		Float ty;
		Float tx;
		Float d;
		Float c;
		Float b;
		Float a;
		virtual ::nape::geom::Mat23 wrapper( );
		Dynamic wrapper_dyn();

		::nape::geom::Mat23 outer;
		static ::zpp_nape::geom::ZPP_Mat23 zpp_pool;
		static ::zpp_nape::geom::ZPP_Mat23 get( );
		static Dynamic get_dyn();

		static ::zpp_nape::geom::ZPP_Mat23 identity( );
		static Dynamic identity_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_Mat23 */ 
