#ifndef INCLUDED_nape_dynamics_ContactIterator
#define INCLUDED_nape_dynamics_ContactIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,dynamics,Contact)
HX_DECLARE_CLASS2(nape,dynamics,ContactIterator)
HX_DECLARE_CLASS2(nape,dynamics,ContactList)
namespace nape{
namespace dynamics{


class ContactIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ContactIterator_obj OBJ_;
		ContactIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ContactIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ContactIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ContactIterator"); }

		virtual ::nape::dynamics::Contact next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::dynamics::ContactIterator zpp_next; /* REM */ 
		bool zpp_critical; /* REM */ 
		int zpp_i; /* REM */ 
		::nape::dynamics::ContactList zpp_inner; /* REM */ 
		static ::nape::dynamics::ContactIterator zpp_pool; /* REM */ 
		static ::nape::dynamics::ContactIterator get( ::nape::dynamics::ContactList list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace dynamics

#endif /* INCLUDED_nape_dynamics_ContactIterator */ 
