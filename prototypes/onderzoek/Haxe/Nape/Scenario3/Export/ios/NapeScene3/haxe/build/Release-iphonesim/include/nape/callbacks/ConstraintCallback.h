#ifndef INCLUDED_nape_callbacks_ConstraintCallback
#define INCLUDED_nape_callbacks_ConstraintCallback

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nape/callbacks/Callback.h>
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,ConstraintCallback)
HX_DECLARE_CLASS2(nape,constraint,Constraint)
namespace nape{
namespace callbacks{


class ConstraintCallback_obj : public ::nape::callbacks::Callback_obj{
	public:
		typedef ::nape::callbacks::Callback_obj super;
		typedef ConstraintCallback_obj OBJ_;
		ConstraintCallback_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ConstraintCallback_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ConstraintCallback_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ConstraintCallback"); }

		virtual ::String toString( );

		virtual ::nape::constraint::Constraint get_constraint( );
		Dynamic get_constraint_dyn();

		::nape::constraint::Constraint constraint; /* REM */ 
};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_ConstraintCallback */ 
