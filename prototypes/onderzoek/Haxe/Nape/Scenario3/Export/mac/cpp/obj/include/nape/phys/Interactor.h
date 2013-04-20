#ifndef INCLUDED_nape_phys_Interactor
#define INCLUDED_nape_phys_Interactor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbTypeList)
HX_DECLARE_CLASS2(nape,dynamics,InteractionGroup)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Compound)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,shape,Shape)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace nape{
namespace phys{


class Interactor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Interactor_obj OBJ_;
		Interactor_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Interactor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Interactor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Interactor"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::nape::callbacks::CbTypeList get_cbTypes( );
		Dynamic get_cbTypes_dyn();

		::nape::callbacks::CbTypeList cbTypes; /* REM */ 
		virtual ::nape::dynamics::InteractionGroup set_group( ::nape::dynamics::InteractionGroup group);
		Dynamic set_group_dyn();

		virtual ::nape::dynamics::InteractionGroup get_group( );
		Dynamic get_group_dyn();

		::nape::dynamics::InteractionGroup group; /* REM */ 
		virtual ::nape::phys::Compound get_castCompound( );
		Dynamic get_castCompound_dyn();

		::nape::phys::Compound castCompound; /* REM */ 
		virtual ::nape::phys::Body get_castBody( );
		Dynamic get_castBody_dyn();

		::nape::phys::Body castBody; /* REM */ 
		virtual ::nape::shape::Shape get_castShape( );
		Dynamic get_castShape_dyn();

		::nape::shape::Shape castShape; /* REM */ 
		virtual bool isCompound( );
		Dynamic isCompound_dyn();

		virtual bool isBody( );
		Dynamic isBody_dyn();

		virtual bool isShape( );
		Dynamic isShape_dyn();

		virtual Dynamic get_userData( );
		Dynamic get_userData_dyn();

		Dynamic userData; /* REM */ 
		virtual int get_id( );
		Dynamic get_id_dyn();

		int id; /* REM */ 
		::zpp_nape::phys::ZPP_Interactor zpp_inner_i; /* REM */ 
};

} // end namespace nape
} // end namespace phys

#endif /* INCLUDED_nape_phys_Interactor */ 
