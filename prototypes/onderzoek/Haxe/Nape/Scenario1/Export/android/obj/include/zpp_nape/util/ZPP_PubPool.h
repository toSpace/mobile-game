#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#define INCLUDED_zpp_nape_util_ZPP_PubPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,GeomPoly)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_PubPool)
namespace zpp_nape{
namespace util{


class ZPP_PubPool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_PubPool_obj OBJ_;
		ZPP_PubPool_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_PubPool_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_PubPool_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_PubPool"); }

		static ::nape::geom::GeomPoly poolGeomPoly; /* REM */ 
		static ::nape::geom::GeomPoly nextGeomPoly; /* REM */ 
		static ::nape::geom::Vec2 poolVec2; /* REM */ 
		static ::nape::geom::Vec2 nextVec2; /* REM */ 
		static ::nape::geom::Vec3 poolVec3; /* REM */ 
		static ::nape::geom::Vec3 nextVec3; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_PubPool */ 
