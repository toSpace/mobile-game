#ifndef INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse
#define INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,util,FastHash2_Hashable2_Boolfalse)
HX_DECLARE_CLASS2(zpp_nape,util,Hashable2_Boolfalse)
namespace zpp_nape{
namespace util{


class FastHash2_Hashable2_Boolfalse_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FastHash2_Hashable2_Boolfalse_obj OBJ_;
		FastHash2_Hashable2_Boolfalse_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FastHash2_Hashable2_Boolfalse_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FastHash2_Hashable2_Boolfalse"); }

		virtual int hash( int id,int di);
		Dynamic hash_dyn();

		virtual Void remove( ::zpp_nape::util::Hashable2_Boolfalse arb);
		Dynamic remove_dyn();

		virtual Void add( ::zpp_nape::util::Hashable2_Boolfalse arb);
		Dynamic add_dyn();

		virtual Void maybeAdd( ::zpp_nape::util::Hashable2_Boolfalse arb);
		Dynamic maybeAdd_dyn();

		virtual bool has( int id,int di);
		Dynamic has_dyn();

		virtual ::zpp_nape::util::Hashable2_Boolfalse ordered_get( int id,int di);
		Dynamic ordered_get_dyn();

		virtual ::zpp_nape::util::Hashable2_Boolfalse get( int id,int di);
		Dynamic get_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		int cnt; /* REM */ 
		Array< ::zpp_nape::util::Hashable2_Boolfalse > table; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse */ 
