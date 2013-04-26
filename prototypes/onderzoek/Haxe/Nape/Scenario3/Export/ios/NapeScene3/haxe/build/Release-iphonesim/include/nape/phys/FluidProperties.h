#ifndef INCLUDED_nape_phys_FluidProperties
#define INCLUDED_nape_phys_FluidProperties

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,FluidProperties)
HX_DECLARE_CLASS2(nape,shape,ShapeList)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_FluidProperties)
namespace nape{
namespace phys{


class FluidProperties_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FluidProperties_obj OBJ_;
		FluidProperties_obj();
		Void __construct(hx::Null< Float >  __o_density,hx::Null< Float >  __o_viscosity);

	public:
		static hx::ObjectPtr< FluidProperties_obj > __new(hx::Null< Float >  __o_density,hx::Null< Float >  __o_viscosity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FluidProperties_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FluidProperties"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::nape::geom::Vec2 set_gravity( ::nape::geom::Vec2 gravity);
		Dynamic set_gravity_dyn();

		virtual ::nape::geom::Vec2 get_gravity( );
		Dynamic get_gravity_dyn();

		::nape::geom::Vec2 gravity; /* REM */ 
		virtual Float set_viscosity( Float viscosity);
		Dynamic set_viscosity_dyn();

		virtual Float get_viscosity( );
		Dynamic get_viscosity_dyn();

		Float viscosity; /* REM */ 
		virtual Float set_density( Float density);
		Dynamic set_density_dyn();

		virtual Float get_density( );
		Dynamic get_density_dyn();

		Float density; /* REM */ 
		virtual ::nape::phys::FluidProperties copy( );
		Dynamic copy_dyn();

		virtual ::nape::shape::ShapeList get_shapes( );
		Dynamic get_shapes_dyn();

		::nape::shape::ShapeList shapes; /* REM */ 
		virtual Dynamic get_userData( );
		Dynamic get_userData_dyn();

		Dynamic userData; /* REM */ 
		::zpp_nape::phys::ZPP_FluidProperties zpp_inner; /* REM */ 
};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_FluidProperties */ 
