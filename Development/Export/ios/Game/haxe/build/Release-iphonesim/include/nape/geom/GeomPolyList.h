#ifndef INCLUDED_nape_geom_GeomPolyList
#define INCLUDED_nape_geom_GeomPolyList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,GeomPoly)
HX_DECLARE_CLASS2(nape,geom,GeomPolyIterator)
HX_DECLARE_CLASS2(nape,geom,GeomPolyList)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_GeomPolyList)
namespace nape{
namespace geom{


class GeomPolyList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GeomPolyList_obj OBJ_;
		GeomPolyList_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GeomPolyList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GeomPolyList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GeomPolyList"); }

		virtual ::nape::geom::GeomPolyList filter( Dynamic lambda);
		Dynamic filter_dyn();

		virtual ::nape::geom::GeomPolyList foreach( Dynamic lambda);
		Dynamic foreach_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void merge( ::nape::geom::GeomPolyList xs);
		Dynamic merge_dyn();

		virtual ::nape::geom::GeomPolyList copy( hx::Null< bool >  deep);
		Dynamic copy_dyn();

		virtual ::nape::geom::GeomPolyIterator iterator( );
		Dynamic iterator_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool remove( ::nape::geom::GeomPoly obj);
		Dynamic remove_dyn();

		virtual bool add( ::nape::geom::GeomPoly obj);
		Dynamic add_dyn();

		virtual ::nape::geom::GeomPoly shift( );
		Dynamic shift_dyn();

		virtual ::nape::geom::GeomPoly pop( );
		Dynamic pop_dyn();

		virtual bool unshift( ::nape::geom::GeomPoly obj);
		Dynamic unshift_dyn();

		virtual bool push( ::nape::geom::GeomPoly obj);
		Dynamic push_dyn();

		virtual ::nape::geom::GeomPoly at( int index);
		Dynamic at_dyn();

		virtual bool has( ::nape::geom::GeomPoly obj);
		Dynamic has_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

		int length; /* REM */ 
		::zpp_nape::util::ZPP_GeomPolyList zpp_inner; /* REM */ 
		static ::nape::geom::GeomPolyList fromArray( Array< ::nape::geom::GeomPoly > array);
		static Dynamic fromArray_dyn();

};

} // end namespace nape
} // end namespace geom

#endif /* INCLUDED_nape_geom_GeomPolyList */ 
