#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#define INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_Arbiter)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_SensorArbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_SensorArbiter)
namespace zpp_nape{
namespace util{


class ZNPNode_ZPP_SensorArbiter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPNode_ZPP_SensorArbiter_obj OBJ_;
		ZNPNode_ZPP_SensorArbiter_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZNPNode_ZPP_SensorArbiter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZNPNode_ZPP_SensorArbiter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZNPNode_ZPP_SensorArbiter"); }

		virtual ::zpp_nape::dynamics::ZPP_SensorArbiter elem( );
		Dynamic elem_dyn();

		::zpp_nape::dynamics::ZPP_SensorArbiter elt; /* REM */ 
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter next; /* REM */ 
		static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter zpp_pool; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter */ 
