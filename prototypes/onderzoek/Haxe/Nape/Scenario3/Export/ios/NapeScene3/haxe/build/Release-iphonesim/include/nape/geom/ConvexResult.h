#ifndef INCLUDED_nape_geom_ConvexResult
#define INCLUDED_nape_geom_ConvexResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,ConvexResult)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_ConvexRayResult)
namespace nape{
namespace geom{


class ConvexResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConvexResult_obj OBJ_;
		ConvexResult_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ConvexResult_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ConvexResult_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ConvexResult"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::nape::shape::Shape get_shape( );
		Dynamic get_shape_dyn();

		::nape::shape::Shape shape; /* REM */ 
		virtual Float get_toi( );
		Dynamic get_toi_dyn();

		Float toi; /* REM */ 
		virtual ::nape::geom::Vec2 get_position( );
		Dynamic get_position_dyn();

		::nape::geom::Vec2 position; /* REM */ 
		virtual ::nape::geom::Vec2 get_normal( );
		Dynamic get_normal_dyn();

		::nape::geom::Vec2 normal; /* REM */ 
		::zpp_nape::geom::ZPP_ConvexRayResult zpp_inner; /* REM */ 
};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_ConvexResult */ 
