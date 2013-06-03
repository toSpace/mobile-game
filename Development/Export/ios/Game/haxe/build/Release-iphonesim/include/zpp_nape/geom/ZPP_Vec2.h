#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#define INCLUDED_zpp_nape_geom_ZPP_Vec2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
namespace zpp_nape{
namespace geom{


class ZPP_Vec2_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Vec2_obj OBJ_;
		ZPP_Vec2_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_Vec2_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Vec2_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Vec2"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 copy( );
		Dynamic copy_dyn();

		Float y; /* REM */ 
		Float x; /* REM */ 
		virtual ::zpp_nape::geom::ZPP_Vec2 at( int ind);
		Dynamic at_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 iterator_at( int ind);
		Dynamic iterator_at_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 back( );
		Dynamic back_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 front( );
		Dynamic front_dyn();

		virtual bool inlined_has( ::zpp_nape::geom::ZPP_Vec2 obj);
		Dynamic inlined_has_dyn();

		virtual bool has( ::zpp_nape::geom::ZPP_Vec2 obj);
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

		virtual ::zpp_nape::geom::ZPP_Vec2 splice( ::zpp_nape::geom::ZPP_Vec2 pre,int n);
		Dynamic splice_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 inlined_erase( ::zpp_nape::geom::ZPP_Vec2 pre);
		Dynamic inlined_erase_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 erase( ::zpp_nape::geom::ZPP_Vec2 pre);
		Dynamic erase_dyn();

		virtual bool inlined_try_remove( ::zpp_nape::geom::ZPP_Vec2 obj);
		Dynamic inlined_try_remove_dyn();

		virtual Void inlined_remove( ::zpp_nape::geom::ZPP_Vec2 obj);
		Dynamic inlined_remove_dyn();

		virtual bool try_remove( ::zpp_nape::geom::ZPP_Vec2 obj);
		Dynamic try_remove_dyn();

		virtual Void remove( ::zpp_nape::geom::ZPP_Vec2 obj);
		Dynamic remove_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 inlined_pop_unsafe( );
		Dynamic inlined_pop_unsafe_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 pop_unsafe( );
		Dynamic pop_unsafe_dyn();

		virtual Void inlined_pop( );
		Dynamic inlined_pop_dyn();

		virtual Void pop( );
		Dynamic pop_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 inlined_insert( ::zpp_nape::geom::ZPP_Vec2 cur,::zpp_nape::geom::ZPP_Vec2 o);
		Dynamic inlined_insert_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 insert( ::zpp_nape::geom::ZPP_Vec2 cur,::zpp_nape::geom::ZPP_Vec2 o);
		Dynamic insert_dyn();

		virtual Void addAll( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic addAll_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 inlined_add( ::zpp_nape::geom::ZPP_Vec2 o);
		Dynamic inlined_add_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 add( ::zpp_nape::geom::ZPP_Vec2 o);
		Dynamic add_dyn();

		virtual Void setbegin( ::zpp_nape::geom::ZPP_Vec2 i);
		Dynamic setbegin_dyn();

		int length; /* REM */ 
		bool pushmod; /* REM */ 
		bool modified; /* REM */ 
		bool _inuse; /* REM */ 
		virtual ::zpp_nape::geom::ZPP_Vec2 begin( );
		Dynamic begin_dyn();

		virtual ::zpp_nape::geom::ZPP_Vec2 elem( );
		Dynamic elem_dyn();

		::zpp_nape::geom::ZPP_Vec2 next; /* REM */ 
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		bool weak; /* REM */ 
		virtual ::nape::geom::Vec2 wrapper( );
		Dynamic wrapper_dyn();

		::nape::geom::Vec2 outer; /* REM */ 
		virtual Void immutable( );
		Dynamic immutable_dyn();

		Dynamic _isimmutable; /* REM */ 
		Dynamic &_isimmutable_dyn() { return _isimmutable;}
		bool _immutable; /* REM */ 
		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		virtual Void validate( );
		Dynamic validate_dyn();

		Dynamic _validate; /* REM */ 
		Dynamic &_validate_dyn() { return _validate;}
		Dynamic _invalidate; /* REM */ 
		Dynamic &_invalidate_dyn() { return _invalidate;}
		static ::zpp_nape::geom::ZPP_Vec2 zpp_pool; /* REM */ 
		static ::zpp_nape::geom::ZPP_Vec2 get( Float x,Float y,hx::Null< bool >  immutable);
		static Dynamic get_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_Vec2 */ 
