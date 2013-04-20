#ifndef INCLUDED_nape_shape_EdgeIterator
#define INCLUDED_nape_shape_EdgeIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,shape,Edge)
HX_DECLARE_CLASS2(nape,shape,EdgeIterator)
HX_DECLARE_CLASS2(nape,shape,EdgeList)
namespace nape{
namespace shape{


class EdgeIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EdgeIterator_obj OBJ_;
		EdgeIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< EdgeIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EdgeIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EdgeIterator"); }

		virtual ::nape::shape::Edge next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::shape::EdgeIterator zpp_next; /* REM */ 
		bool zpp_critical; /* REM */ 
		int zpp_i; /* REM */ 
		::nape::shape::EdgeList zpp_inner; /* REM */ 
		static ::nape::shape::EdgeIterator zpp_pool; /* REM */ 
		static ::nape::shape::EdgeIterator get( ::nape::shape::EdgeList list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace shape

#endif /* INCLUDED_nape_shape_EdgeIterator */ 
