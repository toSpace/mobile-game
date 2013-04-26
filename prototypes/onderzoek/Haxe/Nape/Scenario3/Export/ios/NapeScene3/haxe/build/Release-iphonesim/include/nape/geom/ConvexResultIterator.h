#ifndef INCLUDED_nape_geom_ConvexResultIterator
#define INCLUDED_nape_geom_ConvexResultIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,ConvexResult)
HX_DECLARE_CLASS2(nape,geom,ConvexResultIterator)
HX_DECLARE_CLASS2(nape,geom,ConvexResultList)
namespace nape{
namespace geom{


class ConvexResultIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConvexResultIterator_obj OBJ_;
		ConvexResultIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ConvexResultIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ConvexResultIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ConvexResultIterator"); }

		virtual ::nape::geom::ConvexResult next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::geom::ConvexResultIterator zpp_next; /* REM */ 
		bool zpp_critical; /* REM */ 
		int zpp_i; /* REM */ 
		::nape::geom::ConvexResultList zpp_inner; /* REM */ 
		static ::nape::geom::ConvexResultIterator zpp_pool; /* REM */ 
		static ::nape::geom::ConvexResultIterator get( ::nape::geom::ConvexResultList list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_ConvexResultIterator */ 
