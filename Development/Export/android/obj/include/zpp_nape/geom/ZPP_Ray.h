#ifndef INCLUDED_zpp_nape_geom_ZPP_Ray
#define INCLUDED_zpp_nape_geom_ZPP_Ray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(nape,geom,RayResultList)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_AABB)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Ray)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Circle)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Polygon)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_Ray_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Ray_obj OBJ_;
		ZPP_Ray_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_Ray_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Ray_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Ray"); }

		virtual Void polysect2( ::zpp_nape::shape::ZPP_Polygon p,bool inner,::nape::geom::RayResultList list);
		Dynamic polysect2_dyn();

		virtual ::nape::geom::RayResult polysect( ::zpp_nape::shape::ZPP_Polygon p,bool inner,Float mint);
		Dynamic polysect_dyn();

		virtual Void circlesect2( ::zpp_nape::shape::ZPP_Circle c,bool inner,::nape::geom::RayResultList list);
		Dynamic circlesect2_dyn();

		virtual ::nape::geom::RayResult circlesect( ::zpp_nape::shape::ZPP_Circle c,bool inner,Float mint);
		Dynamic circlesect_dyn();

		virtual Float aabbsect( ::zpp_nape::geom::ZPP_AABB a);
		Dynamic aabbsect_dyn();

		virtual bool aabbtest( ::zpp_nape::geom::ZPP_AABB a);
		Dynamic aabbtest_dyn();

		virtual ::zpp_nape::geom::ZPP_AABB rayAABB( );
		Dynamic rayAABB_dyn();

		virtual Void validate_dir( );
		Dynamic validate_dir_dyn();

		virtual Void invalidate_dir( );
		Dynamic invalidate_dir_dyn();

		bool zip_dir;
		virtual Void direction_invalidate( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic direction_invalidate_dyn();

		virtual Void origin_invalidate( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic origin_invalidate_dyn();

		Float absnormaly;
		Float absnormalx;
		Float normaly;
		Float normalx;
		Float idiry;
		Float idirx;
		Float diry;
		Float dirx;
		Float originy;
		Float originx;
		Dynamic userData;
		Float maxdist;
		::nape::geom::Vec2 direction;
		::nape::geom::Vec2 origin;
		static bool internal;
};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_Ray */ 
