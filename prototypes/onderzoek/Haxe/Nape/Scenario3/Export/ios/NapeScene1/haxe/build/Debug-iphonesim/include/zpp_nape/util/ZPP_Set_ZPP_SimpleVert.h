#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#define INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_SimpleVert)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Set_ZPP_SimpleVert)
namespace zpp_nape{
namespace util{


class ZPP_Set_ZPP_SimpleVert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Set_ZPP_SimpleVert_obj OBJ_;
		ZPP_Set_ZPP_SimpleVert_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_Set_ZPP_SimpleVert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Set_ZPP_SimpleVert_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Set_ZPP_SimpleVert"); }

		virtual ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert insert( ::zpp_nape::geom::ZPP_SimpleVert obj);
		Dynamic insert_dyn();

		virtual ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert try_insert( ::zpp_nape::geom::ZPP_SimpleVert obj);
		Dynamic try_insert_dyn();

		virtual bool try_insert_bool( ::zpp_nape::geom::ZPP_SimpleVert obj);
		Dynamic try_insert_bool_dyn();

		virtual Void __fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x);
		Dynamic __fix_dbl_red_dyn();

		virtual Void __fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert negred);
		Dynamic __fix_neg_red_dyn();

		virtual ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert clear_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node,Dynamic lambda);
		Dynamic clear_node_dyn();

		virtual Void clear_with( Dynamic lambda);
		Dynamic clear_with_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void remove_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur);
		Dynamic remove_node_dyn();

		virtual ::zpp_nape::geom::ZPP_SimpleVert predecessor( ::zpp_nape::geom::ZPP_SimpleVert obj);
		Dynamic predecessor_dyn();

		virtual ::zpp_nape::geom::ZPP_SimpleVert successor( ::zpp_nape::geom::ZPP_SimpleVert obj);
		Dynamic successor_dyn();

		virtual ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur);
		Dynamic predecessor_node_dyn();

		virtual ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert successor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur);
		Dynamic successor_node_dyn();

		virtual Void remove( ::zpp_nape::geom::ZPP_SimpleVert obj);
		Dynamic remove_dyn();

		virtual ::zpp_nape::geom::ZPP_SimpleVert pop_front( );
		Dynamic pop_front_dyn();

		virtual ::zpp_nape::geom::ZPP_SimpleVert first( );
		Dynamic first_dyn();

		virtual ::zpp_nape::geom::ZPP_SimpleVert lower_bound( ::zpp_nape::geom::ZPP_SimpleVert obj);
		Dynamic lower_bound_dyn();

		virtual ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert find_weak( ::zpp_nape::geom::ZPP_SimpleVert obj);
		Dynamic find_weak_dyn();

		virtual bool has_weak( ::zpp_nape::geom::ZPP_SimpleVert obj);
		Dynamic has_weak_dyn();

		virtual ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert find( ::zpp_nape::geom::ZPP_SimpleVert obj);
		Dynamic find_dyn();

		virtual bool has( ::zpp_nape::geom::ZPP_SimpleVert obj);
		Dynamic has_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual bool singular( );
		Dynamic singular_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		virtual bool verify( );
		Dynamic verify_dyn();

		int colour; /* REM */ 
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert parent; /* REM */ 
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert next; /* REM */ 
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert prev; /* REM */ 
		::zpp_nape::geom::ZPP_SimpleVert data; /* REM */ 
		Dynamic swapped; /* REM */ 
		Dynamic &swapped_dyn() { return swapped;}
		Dynamic lt; /* REM */ 
		Dynamic &lt_dyn() { return lt;}
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		static ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert zpp_pool; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert */ 
