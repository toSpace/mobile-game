#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#define INCLUDED_zpp_nape_phys_ZPP_FluidProperties

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,FluidProperties)
HX_DECLARE_CLASS2(nape,shape,ShapeList)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_FluidProperties)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Shape)
namespace zpp_nape{
namespace phys{


class ZPP_FluidProperties_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_FluidProperties_obj OBJ_;
		ZPP_FluidProperties_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_FluidProperties_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_FluidProperties_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_FluidProperties"); }

		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		virtual Void getgravity( );
		Dynamic getgravity_dyn();

		virtual Void gravity_validate( );
		Dynamic gravity_validate_dyn();

		virtual Void gravity_invalidate( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic gravity_invalidate_dyn();

		::nape::geom::Vec2 wrap_gravity; /* REM */ 
		Float gravityy; /* REM */ 
		Float gravityx; /* REM */ 
		Float density; /* REM */ 
		Float viscosity; /* REM */ 
		virtual ::zpp_nape::phys::ZPP_FluidProperties copy( );
		Dynamic copy_dyn();

		virtual Void remShape( ::zpp_nape::shape::ZPP_Shape shape);
		Dynamic remShape_dyn();

		virtual Void addShape( ::zpp_nape::shape::ZPP_Shape shape);
		Dynamic addShape_dyn();

		virtual Void feature_cons( );
		Dynamic feature_cons_dyn();

		::nape::shape::ShapeList wrap_shapes; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Shape shapes; /* REM */ 
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		virtual ::nape::phys::FluidProperties wrapper( );
		Dynamic wrapper_dyn();

		::nape::phys::FluidProperties outer; /* REM */ 
		Dynamic userData; /* REM */ 
		::zpp_nape::phys::ZPP_FluidProperties next; /* REM */ 
		static ::zpp_nape::phys::ZPP_FluidProperties zpp_pool; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace phys

#endif /* INCLUDED_zpp_nape_phys_ZPP_FluidProperties */ 
