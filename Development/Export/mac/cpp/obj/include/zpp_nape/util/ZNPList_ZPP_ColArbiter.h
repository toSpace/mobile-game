#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ColArbiter
#define INCLUDED_zpp_nape_util_ZNPList_ZPP_ColArbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_ColArbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_ColArbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_ColArbiter)
namespace zpp_nape{
namespace util{


class ZNPList_ZPP_ColArbiter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPList_ZPP_ColArbiter_obj OBJ_;
		ZNPList_ZPP_ColArbiter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZNPList_ZPP_ColArbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZNPList_ZPP_ColArbiter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZNPList_ZPP_ColArbiter"); }

		virtual ::zpp_nape::dynamics::ZPP_ColArbiter at( int ind);
		Dynamic at_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_ColArbiter iterator_at( int ind);
		Dynamic iterator_at_dyn();

		virtual ::zpp_nape::dynamics::ZPP_ColArbiter back( );
		Dynamic back_dyn();

		virtual ::zpp_nape::dynamics::ZPP_ColArbiter front( );
		Dynamic front_dyn();

		virtual bool inlined_has( ::zpp_nape::dynamics::ZPP_ColArbiter obj);
		Dynamic inlined_has_dyn();

		virtual bool has( ::zpp_nape::dynamics::ZPP_ColArbiter obj);
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

		virtual ::zpp_nape::util::ZNPNode_ZPP_ColArbiter splice( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre,int n);
		Dynamic splice_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_ColArbiter inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre);
		Dynamic inlined_erase_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_ColArbiter erase( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre);
		Dynamic erase_dyn();

		virtual bool inlined_try_remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj);
		Dynamic inlined_try_remove_dyn();

		virtual Void inlined_remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj);
		Dynamic inlined_remove_dyn();

		virtual bool try_remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj);
		Dynamic try_remove_dyn();

		virtual Void remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj);
		Dynamic remove_dyn();

		virtual ::zpp_nape::dynamics::ZPP_ColArbiter inlined_pop_unsafe( );
		Dynamic inlined_pop_unsafe_dyn();

		virtual ::zpp_nape::dynamics::ZPP_ColArbiter pop_unsafe( );
		Dynamic pop_unsafe_dyn();

		virtual Void inlined_pop( );
		Dynamic inlined_pop_dyn();

		virtual Void pop( );
		Dynamic pop_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_ColArbiter inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur,::zpp_nape::dynamics::ZPP_ColArbiter o);
		Dynamic inlined_insert_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_ColArbiter insert( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur,::zpp_nape::dynamics::ZPP_ColArbiter o);
		Dynamic insert_dyn();

		virtual Void addAll( ::zpp_nape::util::ZNPList_ZPP_ColArbiter x);
		Dynamic addAll_dyn();

		virtual ::zpp_nape::dynamics::ZPP_ColArbiter inlined_add( ::zpp_nape::dynamics::ZPP_ColArbiter o);
		Dynamic inlined_add_dyn();

		virtual ::zpp_nape::dynamics::ZPP_ColArbiter add( ::zpp_nape::dynamics::ZPP_ColArbiter o);
		Dynamic add_dyn();

		virtual Void setbegin( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter i);
		Dynamic setbegin_dyn();

		int length; /* REM */ 
		bool pushmod; /* REM */ 
		bool modified; /* REM */ 
		virtual ::zpp_nape::util::ZNPNode_ZPP_ColArbiter begin( );
		Dynamic begin_dyn();

		::zpp_nape::util::ZNPNode_ZPP_ColArbiter head; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_ZPP_ColArbiter */ 