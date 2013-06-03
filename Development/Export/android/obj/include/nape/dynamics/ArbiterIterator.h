#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#define INCLUDED_nape_dynamics_ArbiterIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,Arbiter)
HX_DECLARE_CLASS2(nape,dynamics,ArbiterIterator)
HX_DECLARE_CLASS2(nape,dynamics,ArbiterList)
namespace nape{
namespace dynamics{


class ArbiterIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArbiterIterator_obj OBJ_;
		ArbiterIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ArbiterIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArbiterIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArbiterIterator"); }

		virtual ::nape::dynamics::Arbiter next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::dynamics::ArbiterIterator zpp_next; /* REM */ 
		bool zpp_critical; /* REM */ 
		int zpp_i; /* REM */ 
		::nape::dynamics::ArbiterList zpp_inner; /* REM */ 
		static ::nape::dynamics::ArbiterIterator zpp_pool; /* REM */ 
		static ::nape::dynamics::ArbiterIterator get( ::nape::dynamics::ArbiterList list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_ArbiterIterator */ 
