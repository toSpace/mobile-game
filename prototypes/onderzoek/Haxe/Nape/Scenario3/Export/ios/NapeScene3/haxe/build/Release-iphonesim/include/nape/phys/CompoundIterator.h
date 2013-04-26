#ifndef INCLUDED_nape_phys_CompoundIterator
#define INCLUDED_nape_phys_CompoundIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,Compound)
HX_DECLARE_CLASS2(nape,phys,CompoundIterator)
HX_DECLARE_CLASS2(nape,phys,CompoundList)
HX_DECLARE_CLASS2(nape,phys,Interactor)
namespace nape{
namespace phys{


class CompoundIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CompoundIterator_obj OBJ_;
		CompoundIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CompoundIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CompoundIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CompoundIterator"); }

		virtual ::nape::phys::Compound next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::phys::CompoundIterator zpp_next; /* REM */ 
		bool zpp_critical; /* REM */ 
		int zpp_i; /* REM */ 
		::nape::phys::CompoundList zpp_inner; /* REM */ 
		static ::nape::phys::CompoundIterator zpp_pool; /* REM */ 
		static ::nape::phys::CompoundIterator get( ::nape::phys::CompoundList list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_CompoundIterator */ 
