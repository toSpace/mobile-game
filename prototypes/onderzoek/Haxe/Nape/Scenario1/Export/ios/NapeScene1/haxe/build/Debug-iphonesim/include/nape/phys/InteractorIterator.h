#ifndef INCLUDED_nape_phys_InteractorIterator
#define INCLUDED_nape_phys_InteractorIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,phys,InteractorIterator)
HX_DECLARE_CLASS2(nape,phys,InteractorList)
namespace nape{
namespace phys{


class InteractorIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InteractorIterator_obj OBJ_;
		InteractorIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< InteractorIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~InteractorIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InteractorIterator"); }

		virtual ::nape::phys::Interactor next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::phys::InteractorIterator zpp_next; /* REM */ 
		bool zpp_critical; /* REM */ 
		int zpp_i; /* REM */ 
		::nape::phys::InteractorList zpp_inner; /* REM */ 
		static ::nape::phys::InteractorIterator zpp_pool; /* REM */ 
		static ::nape::phys::InteractorIterator get( ::nape::phys::InteractorList list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_InteractorIterator */ 
