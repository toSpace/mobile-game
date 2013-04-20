#ifndef INCLUDED_nape_geom_Vec2Iterator
#define INCLUDED_nape_geom_Vec2Iterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec2Iterator)
HX_DECLARE_CLASS2(nape,geom,Vec2List)
namespace nape{
namespace geom{


class Vec2Iterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vec2Iterator_obj OBJ_;
		Vec2Iterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Vec2Iterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Vec2Iterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Vec2Iterator"); }

		virtual ::nape::geom::Vec2 next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::geom::Vec2Iterator zpp_next; /* REM */ 
		bool zpp_critical; /* REM */ 
		int zpp_i; /* REM */ 
		::nape::geom::Vec2List zpp_inner; /* REM */ 
		static ::nape::geom::Vec2Iterator zpp_pool; /* REM */ 
		static ::nape::geom::Vec2Iterator get( ::nape::geom::Vec2List list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_Vec2Iterator */ 
