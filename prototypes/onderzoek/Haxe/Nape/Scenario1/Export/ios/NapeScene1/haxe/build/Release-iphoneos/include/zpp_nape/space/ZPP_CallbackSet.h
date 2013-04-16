#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#define INCLUDED_zpp_nape_space_ZPP_CallbackSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_CallbackSet)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Arbiter)
namespace zpp_nape{
namespace space{


class ZPP_CallbackSet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_CallbackSet_obj OBJ_;
		ZPP_CallbackSet_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_CallbackSet_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_CallbackSet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_CallbackSet"); }

		virtual bool sleeping( );
		Dynamic sleeping_dyn();

		virtual bool really_empty( );
		Dynamic really_empty_dyn();

		virtual bool empty_arb( int type);
		Dynamic empty_arb_dyn();

		virtual Void remove_arb( ::zpp_nape::dynamics::ZPP_Arbiter x);
		Dynamic remove_arb_dyn();

		virtual bool try_remove_arb( ::zpp_nape::dynamics::ZPP_Arbiter x);
		Dynamic try_remove_arb_dyn();

		virtual bool add_arb( ::zpp_nape::dynamics::ZPP_Arbiter x);
		Dynamic add_arb_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		bool lazydel; /* REM */ 
		bool freed; /* REM */ 
		virtual ::zpp_nape::space::ZPP_CallbackSet at( int ind);
		Dynamic at_dyn();

		virtual ::zpp_nape::space::ZPP_CallbackSet iterator_at( int ind);
		Dynamic iterator_at_dyn();

		virtual ::zpp_nape::space::ZPP_CallbackSet back( );
		Dynamic back_dyn();

		virtual ::zpp_nape::space::ZPP_CallbackSet front( );
		Dynamic front_dyn();

		virtual bool inlined_has( ::zpp_nape::space::ZPP_CallbackSet obj);
		Dynamic inlined_has_dyn();

		virtual bool has( ::zpp_nape::space::ZPP_CallbackSet obj);
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

		virtual ::zpp_nape::space::ZPP_CallbackSet splice( ::zpp_nape::space::ZPP_CallbackSet pre,int n);
		Dynamic splice_dyn();

		virtual ::zpp_nape::space::ZPP_CallbackSet inlined_erase( ::zpp_nape::space::ZPP_CallbackSet pre);
		Dynamic inlined_erase_dyn();

		virtual ::zpp_nape::space::ZPP_CallbackSet erase( ::zpp_nape::space::ZPP_CallbackSet pre);
		Dynamic erase_dyn();

		virtual bool inlined_try_remove( ::zpp_nape::space::ZPP_CallbackSet obj);
		Dynamic inlined_try_remove_dyn();

		virtual Void inlined_remove( ::zpp_nape::space::ZPP_CallbackSet obj);
		Dynamic inlined_remove_dyn();

		virtual bool try_remove( ::zpp_nape::space::ZPP_CallbackSet obj);
		Dynamic try_remove_dyn();

		virtual Void remove( ::zpp_nape::space::ZPP_CallbackSet obj);
		Dynamic remove_dyn();

		virtual ::zpp_nape::space::ZPP_CallbackSet inlined_pop_unsafe( );
		Dynamic inlined_pop_unsafe_dyn();

		virtual ::zpp_nape::space::ZPP_CallbackSet pop_unsafe( );
		Dynamic pop_unsafe_dyn();

		virtual Void inlined_pop( );
		Dynamic inlined_pop_dyn();

		virtual Void pop( );
		Dynamic pop_dyn();

		virtual ::zpp_nape::space::ZPP_CallbackSet inlined_insert( ::zpp_nape::space::ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o);
		Dynamic inlined_insert_dyn();

		virtual ::zpp_nape::space::ZPP_CallbackSet insert( ::zpp_nape::space::ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o);
		Dynamic insert_dyn();

		virtual Void addAll( ::zpp_nape::space::ZPP_CallbackSet x);
		Dynamic addAll_dyn();

		virtual ::zpp_nape::space::ZPP_CallbackSet inlined_add( ::zpp_nape::space::ZPP_CallbackSet o);
		Dynamic inlined_add_dyn();

		virtual ::zpp_nape::space::ZPP_CallbackSet add( ::zpp_nape::space::ZPP_CallbackSet o);
		Dynamic add_dyn();

		virtual Void setbegin( ::zpp_nape::space::ZPP_CallbackSet i);
		Dynamic setbegin_dyn();

		int length; /* REM */ 
		bool pushmod; /* REM */ 
		bool modified; /* REM */ 
		bool _inuse; /* REM */ 
		virtual ::zpp_nape::space::ZPP_CallbackSet begin( );
		Dynamic begin_dyn();

		virtual ::zpp_nape::space::ZPP_CallbackSet elem( );
		Dynamic elem_dyn();

		::zpp_nape::space::ZPP_CallbackSet next; /* REM */ 
		int FLUIDstamp; /* REM */ 
		int FLUIDstate; /* REM */ 
		int SENSORstamp; /* REM */ 
		int SENSORstate; /* REM */ 
		int COLLISIONstamp; /* REM */ 
		int COLLISIONstate; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbiters; /* REM */ 
		::zpp_nape::phys::ZPP_Interactor int2; /* REM */ 
		::zpp_nape::phys::ZPP_Interactor int1; /* REM */ 
		int di; /* REM */ 
		int id; /* REM */ 
		static ::zpp_nape::space::ZPP_CallbackSet get( ::zpp_nape::phys::ZPP_Interactor i1,::zpp_nape::phys::ZPP_Interactor i2);
		static Dynamic get_dyn();

		static ::zpp_nape::space::ZPP_CallbackSet zpp_pool; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace space

#endif /* INCLUDED_zpp_nape_space_ZPP_CallbackSet */ 
