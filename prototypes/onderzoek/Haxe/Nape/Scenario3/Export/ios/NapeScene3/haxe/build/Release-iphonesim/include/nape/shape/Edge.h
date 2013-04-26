#ifndef INCLUDED_nape_shape_Edge
#define INCLUDED_nape_shape_Edge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Edge)
HX_DECLARE_CLASS2(nape,shape,Polygon)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Edge)
namespace nape{
namespace shape{


class Edge_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Edge_obj OBJ_;
		Edge_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Edge_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Edge_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Edge"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::nape::geom::Vec2 get_worldVertex2( );
		Dynamic get_worldVertex2_dyn();

		::nape::geom::Vec2 worldVertex2; /* REM */ 
		virtual ::nape::geom::Vec2 get_worldVertex1( );
		Dynamic get_worldVertex1_dyn();

		::nape::geom::Vec2 worldVertex1; /* REM */ 
		virtual ::nape::geom::Vec2 get_localVertex2( );
		Dynamic get_localVertex2_dyn();

		::nape::geom::Vec2 localVertex2; /* REM */ 
		virtual ::nape::geom::Vec2 get_localVertex1( );
		Dynamic get_localVertex1_dyn();

		::nape::geom::Vec2 localVertex1; /* REM */ 
		virtual Float get_worldProjection( );
		Dynamic get_worldProjection_dyn();

		Float worldProjection; /* REM */ 
		virtual Float get_localProjection( );
		Dynamic get_localProjection_dyn();

		Float localProjection; /* REM */ 
		virtual Float get_length( );
		Dynamic get_length_dyn();

		Float length; /* REM */ 
		virtual ::nape::geom::Vec2 get_worldNormal( );
		Dynamic get_worldNormal_dyn();

		::nape::geom::Vec2 worldNormal; /* REM */ 
		virtual ::nape::geom::Vec2 get_localNormal( );
		Dynamic get_localNormal_dyn();

		::nape::geom::Vec2 localNormal; /* REM */ 
		virtual ::nape::shape::Polygon get_polygon( );
		Dynamic get_polygon_dyn();

		::nape::shape::Polygon polygon; /* REM */ 
		::zpp_nape::shape::ZPP_Edge zpp_inner; /* REM */ 
};

} // end namespace nape
} // end namespace shape

#endif /* INCLUDED_nape_shape_Edge */ 
