#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#define INCLUDED_zpp_nape_shape_ZPP_Edge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,shape,Edge)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Edge)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Polygon)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
namespace zpp_nape{
namespace shape{


class ZPP_Edge_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Edge_obj OBJ_;
		ZPP_Edge_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_Edge_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Edge_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Edge"); }

		virtual Void getgnorm( );
		Dynamic getgnorm_dyn();

		virtual Void getlnorm( );
		Dynamic getlnorm_dyn();

		virtual Void gnorm_validate( );
		Dynamic gnorm_validate_dyn();

		virtual Void lnorm_validate( );
		Dynamic lnorm_validate_dyn();

		Float tp1; /* REM */ 
		Float tp0; /* REM */ 
		::zpp_nape::geom::ZPP_Vec2 gp1; /* REM */ 
		::zpp_nape::geom::ZPP_Vec2 lp1; /* REM */ 
		::zpp_nape::geom::ZPP_Vec2 gp0; /* REM */ 
		::zpp_nape::geom::ZPP_Vec2 lp0; /* REM */ 
		Float gprojection; /* REM */ 
		Float lprojection; /* REM */ 
		Float length; /* REM */ 
		::nape::geom::Vec2 wrap_gnorm; /* REM */ 
		Float gnormy; /* REM */ 
		Float gnormx; /* REM */ 
		::nape::geom::Vec2 wrap_lnorm; /* REM */ 
		Float lnormy; /* REM */ 
		Float lnormx; /* REM */ 
		virtual ::nape::shape::Edge wrapper( );
		Dynamic wrapper_dyn();

		::nape::shape::Edge outer; /* REM */ 
		::zpp_nape::shape::ZPP_Polygon polygon; /* REM */ 
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		::zpp_nape::shape::ZPP_Edge next; /* REM */ 
		static ::zpp_nape::shape::ZPP_Edge zpp_pool; /* REM */ 
		static bool internal; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace shape

#endif /* INCLUDED_zpp_nape_shape_ZPP_Edge */ 
