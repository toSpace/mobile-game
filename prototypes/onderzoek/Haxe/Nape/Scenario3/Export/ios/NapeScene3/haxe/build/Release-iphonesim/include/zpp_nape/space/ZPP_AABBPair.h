#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#define INCLUDED_zpp_nape_space_ZPP_AABBPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_AABBNode)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_AABBPair)
namespace zpp_nape{
namespace space{


class ZPP_AABBPair_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_AABBPair_obj OBJ_;
		ZPP_AABBPair_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_AABBPair_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_AABBPair_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_AABBPair"); }

		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::space::ZPP_AABBPair next; /* REM */ 
		::zpp_nape::dynamics::ZPP_Arbiter arb; /* REM */ 
		int di; /* REM */ 
		int id; /* REM */ 
		bool sleeping; /* REM */ 
		bool first; /* REM */ 
		::zpp_nape::space::ZPP_AABBNode n2; /* REM */ 
		::zpp_nape::space::ZPP_AABBNode n1; /* REM */ 
		static ::zpp_nape::space::ZPP_AABBPair zpp_pool; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace space

#endif /* INCLUDED_zpp_nape_space_ZPP_AABBPair */ 
