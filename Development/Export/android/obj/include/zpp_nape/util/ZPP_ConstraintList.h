#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#define INCLUDED_zpp_nape_util_ZPP_ConstraintList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,ConstraintList)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_ConstraintList)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZPP_ConstraintList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_ConstraintList_obj OBJ_;
		ZPP_ConstraintList_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_ConstraintList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_ConstraintList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_ConstraintList"); }

		int user_length;
		bool zip_length;
		::zpp_nape::util::ZNPNode_ZPP_Constraint push_ite;
		::zpp_nape::util::ZNPNode_ZPP_Constraint at_ite;
		int at_index;
		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		virtual Void validate( );
		Dynamic validate_dyn();

		virtual Void modify_test( );
		Dynamic modify_test_dyn();

		virtual Void modified( );
		Dynamic modified_dyn();

		virtual Void valmod( );
		Dynamic valmod_dyn();

		bool reverse_flag;
		bool dontremove;
		Dynamic subber;
		Dynamic &subber_dyn() { return subber;}
		Dynamic post_adder;
		Dynamic &post_adder_dyn() { return post_adder;}
		Dynamic adder;
		Dynamic &adder_dyn() { return adder;}
		Dynamic _modifiable;
		Dynamic &_modifiable_dyn() { return _modifiable;}
		Dynamic _validate;
		Dynamic &_validate_dyn() { return _validate;}
		Dynamic _invalidate;
		Dynamic &_invalidate_dyn() { return _invalidate;}
		bool _invalidated;
		bool immutable;
		::zpp_nape::util::ZNPList_ZPP_Constraint inner;
		::nape::constraint::ConstraintList outer;
		static bool internal;
		static ::nape::constraint::ConstraintList get( ::zpp_nape::util::ZNPList_ZPP_Constraint list,hx::Null< bool >  imm);
		static Dynamic get_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_ConstraintList */ 
