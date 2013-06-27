#ifndef INCLUDED_IsoBody
#define INCLUDED_IsoBody

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IsoBody)
HX_DECLARE_CLASS2(nape,geom,AABB)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)


class HXCPP_CLASS_ATTRIBUTES  IsoBody_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IsoBody_obj OBJ_;
		IsoBody_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< IsoBody_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IsoBody_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("IsoBody"); }

		static ::nape::phys::Body run( Dynamic iso,::nape::geom::AABB bounds,::nape::geom::Vec2 granularity,hx::Null< int >  quality,hx::Null< Float >  simplification);
		static Dynamic run_dyn();

};


#endif /* INCLUDED_IsoBody */ 
