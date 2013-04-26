#ifndef INCLUDED_PhysicsData
#define INCLUDED_PhysicsData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS0(PhysicsData)
HX_DECLARE_CLASS2(nape,callbacks,CbType)
HX_DECLARE_CLASS2(nape,callbacks,CbTypeList)
HX_DECLARE_CLASS2(nape,dynamics,InteractionFilter)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,FluidProperties)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,phys,Material)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)


class PhysicsData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PhysicsData_obj OBJ_;
		PhysicsData_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PhysicsData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PhysicsData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PhysicsData"); }

		static ::nape::geom::Vec3 graphicsPosition( ::nape::phys::Body body);
		static Dynamic graphicsPosition_dyn();

		static Void flashGraphicsUpdate( ::nape::phys::Body body);
		static Dynamic flashGraphicsUpdate_dyn();

		static ::nape::phys::Body createBody( ::String name,::native::display::DisplayObject graphic);
		static Dynamic createBody_dyn();

		static Void registerMaterial( ::String name,::nape::phys::Material material);
		static Dynamic registerMaterial_dyn();

		static Void registerFilter( ::String name,::nape::dynamics::InteractionFilter filter);
		static Dynamic registerFilter_dyn();

		static Void registerFluidProperties( ::String name,::nape::phys::FluidProperties properties);
		static Dynamic registerFluidProperties_dyn();

		static Void registerCbType( ::String name,::nape::callbacks::CbType cbType);
		static Dynamic registerCbType_dyn();

		static ::Hash bodies; /* REM */ 
		static ::Hash materials; /* REM */ 
		static ::Hash filters; /* REM */ 
		static ::Hash fprops; /* REM */ 
		static ::Hash types; /* REM */ 
		static ::nape::phys::Material material( ::String name);
		static Dynamic material_dyn();

		static ::nape::dynamics::InteractionFilter filter( ::String name);
		static Dynamic filter_dyn();

		static ::nape::phys::FluidProperties fprop( ::String name);
		static Dynamic fprop_dyn();

		static Void cbtype( ::nape::callbacks::CbTypeList outtypes,::String names);
		static Dynamic cbtype_dyn();

		static Dynamic lookup( ::String name);
		static Dynamic lookup_dyn();

		static Void init( );
		static Dynamic init_dyn();

};


#endif /* INCLUDED_PhysicsData */ 
