#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#define INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,ConvexResult)
HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_ConvexRayResult)
namespace zpp_nape{
namespace geom{


class ZPP_ConvexRayResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_ConvexRayResult_obj OBJ_;
		ZPP_ConvexRayResult_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_ConvexRayResult_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_ConvexRayResult_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_ConvexRayResult"); }

		virtual Void free( );
		Dynamic free_dyn();

		virtual Void disposed( );
		Dynamic disposed_dyn();

		Float toiDistance; /* REM */ 
		::zpp_nape::geom::ZPP_ConvexRayResult next; /* REM */ 
		bool inner; /* REM */ 
		::nape::geom::RayResult ray; /* REM */ 
		::nape::geom::Vec2 position; /* REM */ 
		::nape::geom::ConvexResult convex; /* REM */ 
		::nape::shape::Shape shape; /* REM */ 
		::nape::geom::Vec2 normal; /* REM */ 
		static ::zpp_nape::geom::ZPP_ConvexRayResult convexPool; /* REM */ 
		static ::zpp_nape::geom::ZPP_ConvexRayResult rayPool; /* REM */ 
		static bool internal; /* REM */ 
		static ::nape::geom::RayResult getRay( ::nape::geom::Vec2 normal,Float time,bool inner,::nape::shape::Shape shape);
		static Dynamic getRay_dyn();

		static ::nape::geom::ConvexResult getConvex( ::nape::geom::Vec2 normal,::nape::geom::Vec2 position,Float toiDistance,::nape::shape::Shape shape);
		static Dynamic getConvex_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult */ 
