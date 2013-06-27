#ifndef INCLUDED_nape_constraint_ConstraintIterator
#define INCLUDED_nape_constraint_ConstraintIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,ConstraintIterator)
HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
namespace nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES  ConstraintIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConstraintIterator_obj OBJ_;
		ConstraintIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ConstraintIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ConstraintIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ConstraintIterator"); }

		virtual ::nape::constraint::Constraint next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		::nape::constraint::ConstraintIterator zpp_next;
		bool zpp_critical;
		int zpp_i;
		::nape::constraint::ConstraintList zpp_inner;
		static ::nape::constraint::ConstraintIterator zpp_pool;
		static ::nape::constraint::ConstraintIterator get( ::nape::constraint::ConstraintList list);
		static Dynamic get_dyn();

};

} // end namespace nape
} // end namespace constraint

#endif /* INCLUDED_nape_constraint_ConstraintIterator */ 
