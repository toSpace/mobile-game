#ifndef INCLUDED_zpp_nape_util_ZNPNode_ConvexResult
#define INCLUDED_zpp_nape_util_ZNPNode_ConvexResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,ConvexResult)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ConvexResult)
namespace zpp_nape{
namespace util{


class ZNPNode_ConvexResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPNode_ConvexResult_obj OBJ_;
		ZNPNode_ConvexResult_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZNPNode_ConvexResult_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZNPNode_ConvexResult_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZNPNode_ConvexResult"); }

		virtual ::nape::geom::ConvexResult elem( );
		Dynamic elem_dyn();

		::nape::geom::ConvexResult elt; /* REM */ 
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::util::ZNPNode_ConvexResult next; /* REM */ 
		static ::zpp_nape::util::ZNPNode_ConvexResult zpp_pool; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPNode_ConvexResult */ 
