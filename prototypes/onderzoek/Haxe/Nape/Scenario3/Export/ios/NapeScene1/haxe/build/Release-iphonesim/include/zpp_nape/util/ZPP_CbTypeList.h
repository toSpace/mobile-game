#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#define INCLUDED_zpp_nape_util_ZPP_CbTypeList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbType)
HX_DECLARE_CLASS2(nape,callbacks,CbTypeList)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_CbType)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_CbType)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_CbTypeList)
namespace zpp_nape{
namespace util{


class ZPP_CbTypeList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_CbTypeList_obj OBJ_;
		ZPP_CbTypeList_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_CbTypeList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_CbTypeList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_CbTypeList"); }

		int user_length; /* REM */ 
		bool zip_length; /* REM */ 
		::zpp_nape::util::ZNPNode_ZPP_CbType push_ite; /* REM */ 
		::zpp_nape::util::ZNPNode_ZPP_CbType at_ite; /* REM */ 
		int at_index; /* REM */ 
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

		bool reverse_flag; /* REM */ 
		bool dontremove; /* REM */ 
		Dynamic subber; /* REM */ 
		Dynamic &subber_dyn() { return subber;}
		Dynamic post_adder; /* REM */ 
		Dynamic &post_adder_dyn() { return post_adder;}
		Dynamic adder; /* REM */ 
		Dynamic &adder_dyn() { return adder;}
		Dynamic _modifiable; /* REM */ 
		Dynamic &_modifiable_dyn() { return _modifiable;}
		Dynamic _validate; /* REM */ 
		Dynamic &_validate_dyn() { return _validate;}
		Dynamic _invalidate; /* REM */ 
		Dynamic &_invalidate_dyn() { return _invalidate;}
		bool _invalidated; /* REM */ 
		bool immutable; /* REM */ 
		::zpp_nape::util::ZNPList_ZPP_CbType inner; /* REM */ 
		::nape::callbacks::CbTypeList outer; /* REM */ 
		static bool internal; /* REM */ 
		static ::nape::callbacks::CbTypeList get( ::zpp_nape::util::ZNPList_ZPP_CbType list,hx::Null< bool >  imm);
		static Dynamic get_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_CbTypeList */ 
