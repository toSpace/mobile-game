#ifndef INCLUDED_nape_geom_RayResultIterator
#define INCLUDED_nape_geom_RayResultIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(nape,geom,RayResultIterator)
HX_DECLARE_CLASS2(nape,geom,RayResultList)
namespace nape{
namespace geom{


class RayResultIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RayResultIterator_obj OBJ_;
		RayResultIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< RayResultIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RayResultIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RayResultIterator"); }

		virtual ::nape::geom::RayResult next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::geom::RayResultIterator zpp_next; /* REM */ 
		bool zpp_critical; /* REM */ 
		int zpp_i; /* REM */ 
		::nape::geom::RayResultList zpp_inner; /* REM */ 
		static ::nape::geom::RayResultIterator zpp_pool; /* REM */ 
		static ::nape::geom::RayResultIterator get( ::nape::geom::RayResultList list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_RayResultIterator */ 
