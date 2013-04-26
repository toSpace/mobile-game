#ifndef INCLUDED_nape_dynamics_InteractionGroupIterator
#define INCLUDED_nape_dynamics_InteractionGroupIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,InteractionGroup)
HX_DECLARE_CLASS2(nape,dynamics,InteractionGroupIterator)
HX_DECLARE_CLASS2(nape,dynamics,InteractionGroupList)
namespace nape{
namespace dynamics{


class InteractionGroupIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InteractionGroupIterator_obj OBJ_;
		InteractionGroupIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< InteractionGroupIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~InteractionGroupIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InteractionGroupIterator"); }

		virtual ::nape::dynamics::InteractionGroup next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::dynamics::InteractionGroupIterator zpp_next; /* REM */ 
		bool zpp_critical; /* REM */ 
		int zpp_i; /* REM */ 
		::nape::dynamics::InteractionGroupList zpp_inner; /* REM */ 
		static ::nape::dynamics::InteractionGroupIterator zpp_pool; /* REM */ 
		static ::nape::dynamics::InteractionGroupIterator get( ::nape::dynamics::InteractionGroupList list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_InteractionGroupIterator */ 
