#ifndef INCLUDED_nape_shape_ShapeIterator
#define INCLUDED_nape_shape_ShapeIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(nape,shape,ShapeIterator)
HX_DECLARE_CLASS2(nape,shape,ShapeList)
namespace nape{
namespace shape{


class ShapeIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShapeIterator_obj OBJ_;
		ShapeIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ShapeIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ShapeIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ShapeIterator"); }

		virtual ::nape::shape::Shape next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::shape::ShapeIterator zpp_next; /* REM */ 
		bool zpp_critical; /* REM */ 
		int zpp_i; /* REM */ 
		::nape::shape::ShapeList zpp_inner; /* REM */ 
		static ::nape::shape::ShapeIterator zpp_pool; /* REM */ 
		static ::nape::shape::ShapeIterator get( ::nape::shape::ShapeList list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace shape

#endif /* INCLUDED_nape_shape_ShapeIterator */ 
