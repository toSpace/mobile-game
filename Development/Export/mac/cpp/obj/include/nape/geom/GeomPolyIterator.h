#ifndef INCLUDED_nape_geom_GeomPolyIterator
#define INCLUDED_nape_geom_GeomPolyIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,GeomPoly)
HX_DECLARE_CLASS2(nape,geom,GeomPolyIterator)
HX_DECLARE_CLASS2(nape,geom,GeomPolyList)
namespace nape{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  GeomPolyIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GeomPolyIterator_obj OBJ_;
		GeomPolyIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GeomPolyIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GeomPolyIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GeomPolyIterator"); }

		virtual ::nape::geom::GeomPoly next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::geom::GeomPolyIterator zpp_next;
		bool zpp_critical;
		int zpp_i;
		::nape::geom::GeomPolyList zpp_inner;
		static ::nape::geom::GeomPolyIterator zpp_pool;
		static ::nape::geom::GeomPolyIterator get( ::nape::geom::GeomPolyList list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_GeomPolyIterator */ 
