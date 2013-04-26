#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#define INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_Shape)
namespace zpp_nape{
namespace util{


class ZNPNode_ZPP_Shape_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPNode_ZPP_Shape_obj OBJ_;
		ZNPNode_ZPP_Shape_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZNPNode_ZPP_Shape_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZNPNode_ZPP_Shape_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZNPNode_ZPP_Shape"); }

		virtual ::zpp_nape::shape::ZPP_Shape elem( );
		Dynamic elem_dyn();

		::zpp_nape::shape::ZPP_Shape elt; /* REM */ 
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::util::ZNPNode_ZPP_Shape next; /* REM */ 
		static ::zpp_nape::util::ZNPNode_ZPP_Shape zpp_pool; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape */ 
