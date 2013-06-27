#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#define INCLUDED_zpp_nape_geom_ZPP_ToiEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_ColArbiter)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_ToiEvent)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
namespace zpp_nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ZPP_ToiEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_ToiEvent_obj OBJ_;
		ZPP_ToiEvent_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_ToiEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_ToiEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_ToiEvent"); }

		bool kinematic;
		bool failed;
		bool slipped;
		::zpp_nape::geom::ZPP_Vec2 axis;
		::zpp_nape::geom::ZPP_Vec2 c2;
		::zpp_nape::geom::ZPP_Vec2 c1;
		bool frozen2;
		bool frozen1;
		::zpp_nape::dynamics::ZPP_ColArbiter arbiter;
		::zpp_nape::shape::ZPP_Shape s2;
		::zpp_nape::shape::ZPP_Shape s1;
		Float toi;
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::geom::ZPP_ToiEvent next;
		static ::zpp_nape::geom::ZPP_ToiEvent zpp_pool;
};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_ToiEvent */ 
