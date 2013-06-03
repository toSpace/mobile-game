#ifndef INCLUDED_zpp_nape_util_ZNPList_RayResult
#define INCLUDED_zpp_nape_util_ZNPList_RayResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,RayResult)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_RayResult)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_RayResult)
namespace zpp_nape{
namespace util{


class ZNPList_RayResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPList_RayResult_obj OBJ_;
		ZNPList_RayResult_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZNPList_RayResult_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZNPList_RayResult_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZNPList_RayResult"); }

		virtual ::nape::geom::RayResult at( int ind);
		Dynamic at_dyn();

		virtual ::zpp_nape::util::ZNPNode_RayResult iterator_at( int ind);
		Dynamic iterator_at_dyn();

		virtual ::nape::geom::RayResult back( );
		Dynamic back_dyn();

		virtual ::nape::geom::RayResult front( );
		Dynamic front_dyn();

		virtual bool inlined_has( ::nape::geom::RayResult obj);
		Dynamic inlined_has_dyn();

		virtual bool has( ::nape::geom::RayResult obj);
		Dynamic has_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		virtual Void reverse( );
		Dynamic reverse_dyn();

		virtual Void inlined_clear( );
		Dynamic inlined_clear_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::zpp_nape::util::ZNPNode_RayResult splice( ::zpp_nape::util::ZNPNode_RayResult pre,int n);
		Dynamic splice_dyn();

		virtual ::zpp_nape::util::ZNPNode_RayResult inlined_erase( ::zpp_nape::util::ZNPNode_RayResult pre);
		Dynamic inlined_erase_dyn();

		virtual ::zpp_nape::util::ZNPNode_RayResult erase( ::zpp_nape::util::ZNPNode_RayResult pre);
		Dynamic erase_dyn();

		virtual bool inlined_try_remove( ::nape::geom::RayResult obj);
		Dynamic inlined_try_remove_dyn();

		virtual Void inlined_remove( ::nape::geom::RayResult obj);
		Dynamic inlined_remove_dyn();

		virtual bool try_remove( ::nape::geom::RayResult obj);
		Dynamic try_remove_dyn();

		virtual Void remove( ::nape::geom::RayResult obj);
		Dynamic remove_dyn();

		virtual ::nape::geom::RayResult inlined_pop_unsafe( );
		Dynamic inlined_pop_unsafe_dyn();

		virtual ::nape::geom::RayResult pop_unsafe( );
		Dynamic pop_unsafe_dyn();

		virtual Void inlined_pop( );
		Dynamic inlined_pop_dyn();

		virtual Void pop( );
		Dynamic pop_dyn();

		virtual ::zpp_nape::util::ZNPNode_RayResult inlined_insert( ::zpp_nape::util::ZNPNode_RayResult cur,::nape::geom::RayResult o);
		Dynamic inlined_insert_dyn();

		virtual ::zpp_nape::util::ZNPNode_RayResult insert( ::zpp_nape::util::ZNPNode_RayResult cur,::nape::geom::RayResult o);
		Dynamic insert_dyn();

		virtual Void addAll( ::zpp_nape::util::ZNPList_RayResult x);
		Dynamic addAll_dyn();

		virtual ::nape::geom::RayResult inlined_add( ::nape::geom::RayResult o);
		Dynamic inlined_add_dyn();

		virtual ::nape::geom::RayResult add( ::nape::geom::RayResult o);
		Dynamic add_dyn();

		virtual Void setbegin( ::zpp_nape::util::ZNPNode_RayResult i);
		Dynamic setbegin_dyn();

		int length; /* REM */ 
		bool pushmod; /* REM */ 
		bool modified; /* REM */ 
		virtual ::zpp_nape::util::ZNPNode_RayResult begin( );
		Dynamic begin_dyn();

		::zpp_nape::util::ZNPNode_RayResult head; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_RayResult */ 
