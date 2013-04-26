#ifndef INCLUDED_nape_shape_Shape
#define INCLUDED_nape_shape_Shape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nape/phys/Interactor.h>
HX_DECLARE_CLASS2(nape,dynamics,InteractionFilter)
HX_DECLARE_CLASS2(nape,geom,AABB)
HX_DECLARE_CLASS2(nape,geom,Mat23)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,FluidProperties)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,phys,Material)
HX_DECLARE_CLASS2(nape,shape,Circle)
HX_DECLARE_CLASS2(nape,shape,Polygon)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(nape,shape,ShapeType)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
namespace nape{
namespace shape{


class Shape_obj : public ::nape::phys::Interactor_obj{
	public:
		typedef ::nape::phys::Interactor_obj super;
		typedef Shape_obj OBJ_;
		Shape_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Shape_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Shape_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Shape"); }

		virtual ::String toString( );

		virtual ::nape::shape::Shape copy( );
		Dynamic copy_dyn();

		virtual bool contains( ::nape::geom::Vec2 point);
		Dynamic contains_dyn();

		virtual ::nape::shape::Shape transform( ::nape::geom::Mat23 matrix);
		Dynamic transform_dyn();

		virtual ::nape::shape::Shape rotate( Float angle);
		Dynamic rotate_dyn();

		virtual ::nape::shape::Shape scale( Float scalex,Float scaley);
		Dynamic scale_dyn();

		virtual ::nape::shape::Shape translate( ::nape::geom::Vec2 translation);
		Dynamic translate_dyn();

		virtual ::nape::geom::AABB get_bounds( );
		Dynamic get_bounds_dyn();

		::nape::geom::AABB bounds; /* REM */ 
		virtual bool set_sensorEnabled( bool sensorEnabled);
		Dynamic set_sensorEnabled_dyn();

		virtual bool get_sensorEnabled( );
		Dynamic get_sensorEnabled_dyn();

		bool sensorEnabled; /* REM */ 
		virtual bool set_fluidEnabled( bool fluidEnabled);
		Dynamic set_fluidEnabled_dyn();

		virtual bool get_fluidEnabled( );
		Dynamic get_fluidEnabled_dyn();

		bool fluidEnabled; /* REM */ 
		virtual ::nape::phys::FluidProperties set_fluidProperties( ::nape::phys::FluidProperties fluidProperties);
		Dynamic set_fluidProperties_dyn();

		virtual ::nape::phys::FluidProperties get_fluidProperties( );
		Dynamic get_fluidProperties_dyn();

		::nape::phys::FluidProperties fluidProperties; /* REM */ 
		virtual ::nape::dynamics::InteractionFilter set_filter( ::nape::dynamics::InteractionFilter filter);
		Dynamic set_filter_dyn();

		virtual ::nape::dynamics::InteractionFilter get_filter( );
		Dynamic get_filter_dyn();

		::nape::dynamics::InteractionFilter filter; /* REM */ 
		virtual ::nape::phys::Material set_material( ::nape::phys::Material material);
		Dynamic set_material_dyn();

		virtual ::nape::phys::Material get_material( );
		Dynamic get_material_dyn();

		::nape::phys::Material material; /* REM */ 
		virtual Float get_angDrag( );
		Dynamic get_angDrag_dyn();

		Float angDrag; /* REM */ 
		virtual Float get_inertia( );
		Dynamic get_inertia_dyn();

		Float inertia; /* REM */ 
		virtual Float get_area( );
		Dynamic get_area_dyn();

		Float area; /* REM */ 
		virtual ::nape::geom::Vec2 set_localCOM( ::nape::geom::Vec2 localCOM);
		Dynamic set_localCOM_dyn();

		virtual ::nape::geom::Vec2 get_localCOM( );
		Dynamic get_localCOM_dyn();

		::nape::geom::Vec2 localCOM; /* REM */ 
		virtual ::nape::geom::Vec2 get_worldCOM( );
		Dynamic get_worldCOM_dyn();

		::nape::geom::Vec2 worldCOM; /* REM */ 
		virtual ::nape::shape::Polygon get_castPolygon( );
		Dynamic get_castPolygon_dyn();

		::nape::shape::Polygon castPolygon; /* REM */ 
		virtual ::nape::shape::Circle get_castCircle( );
		Dynamic get_castCircle_dyn();

		::nape::shape::Circle castCircle; /* REM */ 
		virtual ::nape::phys::Body set_body( ::nape::phys::Body body);
		Dynamic set_body_dyn();

		virtual ::nape::phys::Body get_body( );
		Dynamic get_body_dyn();

		::nape::phys::Body body; /* REM */ 
		virtual bool isPolygon( );
		Dynamic isPolygon_dyn();

		virtual bool isCircle( );
		Dynamic isCircle_dyn();

		virtual ::nape::shape::ShapeType get_type( );
		Dynamic get_type_dyn();

		::nape::shape::ShapeType type; /* REM */ 
		::zpp_nape::shape::ZPP_Shape zpp_inner; /* REM */ 
};

} // end namespace nape
} // end namespace shape

#endif /* INCLUDED_nape_shape_Shape */ 
