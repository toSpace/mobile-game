#ifndef INCLUDED_nape_phys_BodyIterator
#define INCLUDED_nape_phys_BodyIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,BodyIterator)
HX_DECLARE_CLASS2(nape,phys,BodyList)
HX_DECLARE_CLASS2(nape,phys,Interactor)
namespace nape{
namespace phys{


class BodyIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BodyIterator_obj OBJ_;
		BodyIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BodyIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BodyIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BodyIterator"); }

		virtual ::nape::phys::Body next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::phys::BodyIterator zpp_next; /* REM */ 
		bool zpp_critical; /* REM */ 
		int zpp_i; /* REM */ 
		::nape::phys::BodyList zpp_inner; /* REM */ 
		static ::nape::phys::BodyIterator zpp_pool; /* REM */ 
		static ::nape::phys::BodyIterator get( ::nape::phys::BodyList list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_BodyIterator */ 
