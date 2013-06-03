#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SpaceArbiterList
#define INCLUDED_zpp_nape_dynamics_ZPP_SpaceArbiterList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nape/dynamics/ArbiterList.h>
HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,ArbiterList)
HX_DECLARE_CLASS2(zpp_nape,dynamics,ZPP_SpaceArbiterList)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Space)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_ColArbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_FluidArbiter)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_SensorArbiter)
namespace zpp_nape{
namespace dynamics{


class ZPP_SpaceArbiterList_obj : public ::nape::dynamics::ArbiterList_obj{
	public:
		typedef ::nape::dynamics::ArbiterList_obj super;
		typedef ZPP_SpaceArbiterList_obj OBJ_;
		ZPP_SpaceArbiterList_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_SpaceArbiterList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_SpaceArbiterList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_SpaceArbiterList"); }

		virtual ::nape::dynamics::Arbiter at( int index);

		virtual Void clear( );

		virtual bool remove( ::nape::dynamics::Arbiter obj);

		virtual ::nape::dynamics::Arbiter shift( );

		virtual bool unshift( ::nape::dynamics::Arbiter obj);

		virtual ::nape::dynamics::Arbiter pop( );

		virtual bool push( ::nape::dynamics::Arbiter obj);

		virtual Void zpp_vm( );

		int at_index_3; /* REM */ 
		int at_index_2; /* REM */ 
		int at_index_1; /* REM */ 
		int at_index_0; /* REM */ 
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ite_3; /* REM */ 
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ite_2; /* REM */ 
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ite_1; /* REM */ 
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ite_0; /* REM */ 
		Array< int > lengths; /* REM */ 
		virtual int zpp_gl( );

		bool zip_length; /* REM */ 
		int _length; /* REM */ 
		::zpp_nape::space::ZPP_Space space; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace dynamics

#endif /* INCLUDED_zpp_nape_dynamics_ZPP_SpaceArbiterList */ 
