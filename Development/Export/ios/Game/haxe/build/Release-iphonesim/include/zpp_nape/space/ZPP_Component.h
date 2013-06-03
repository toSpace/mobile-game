#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#define INCLUDED_zpp_nape_space_ZPP_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Component)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_Island)
namespace zpp_nape{
namespace space{


class ZPP_Component_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Component_obj OBJ_;
		ZPP_Component_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_Component_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Component_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Component"); }

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		bool woken; /* REM */ 
		int waket; /* REM */ 
		bool sleeping; /* REM */ 
		::zpp_nape::space::ZPP_Island island; /* REM */ 
		::zpp_nape::constraint::ZPP_Constraint constraint; /* REM */ 
		::zpp_nape::phys::ZPP_Body body; /* REM */ 
		bool isBody; /* REM */ 
		int rank; /* REM */ 
		::zpp_nape::space::ZPP_Component parent; /* REM */ 
		::zpp_nape::space::ZPP_Component next; /* REM */ 
		static ::zpp_nape::space::ZPP_Component zpp_pool; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace space

#endif /* INCLUDED_zpp_nape_space_ZPP_Component */ 
