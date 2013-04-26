#ifndef INCLUDED_zpp_nape_ZPP_ID
#define INCLUDED_zpp_nape_ZPP_ID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(zpp_nape,ZPP_ID)
namespace zpp_nape{


class ZPP_ID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_ID_obj OBJ_;
		ZPP_ID_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_ID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_ID_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_ID"); }

		static int _Constraint; /* REM */ 
		static int Constraint( );
		static Dynamic Constraint_dyn();

		static int _Interactor; /* REM */ 
		static int Interactor( );
		static Dynamic Interactor_dyn();

		static int _CbType; /* REM */ 
		static int CbType( );
		static Dynamic CbType_dyn();

		static int _CbSet; /* REM */ 
		static int CbSet( );
		static Dynamic CbSet_dyn();

		static int _Listener; /* REM */ 
		static int Listener( );
		static Dynamic Listener_dyn();

		static int _ZPP_SimpleVert; /* REM */ 
		static int ZPP_SimpleVert( );
		static Dynamic ZPP_SimpleVert_dyn();

		static int _ZPP_SimpleSeg; /* REM */ 
		static int ZPP_SimpleSeg( );
		static Dynamic ZPP_SimpleSeg_dyn();

		static int _Space; /* REM */ 
		static int Space( );
		static Dynamic Space_dyn();

		static int _InteractionGroup; /* REM */ 
		static int InteractionGroup( );
		static Dynamic InteractionGroup_dyn();

};

} // end namespace zpp_nape

#endif /* INCLUDED_zpp_nape_ZPP_ID */ 
