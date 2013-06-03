#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_InertiaMode
#include <nape/phys/InertiaMode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace phys{

Void InertiaMode_obj::__construct()
{
HX_STACK_PUSH("InertiaMode::new","nape/phys/InertiaMode.hx",181);
{
	HX_STACK_LINE(181)
	if ((!(::zpp_nape::util::ZPP_Flags_obj::internal))){
		HX_STACK_LINE(183)
		hx::Throw (((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("InertiaMode")) + HX_CSTRING(" derp!")));
	}
}
;
	return null();
}

InertiaMode_obj::~InertiaMode_obj() { }

Dynamic InertiaMode_obj::__CreateEmpty() { return  new InertiaMode_obj; }
hx::ObjectPtr< InertiaMode_obj > InertiaMode_obj::__new()
{  hx::ObjectPtr< InertiaMode_obj > result = new InertiaMode_obj();
	result->__construct();
	return result;}

Dynamic InertiaMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InertiaMode_obj > result = new InertiaMode_obj();
	result->__construct();
	return result;}

::String InertiaMode_obj::toString( ){
	HX_STACK_PUSH("InertiaMode::toString","nape/phys/InertiaMode.hx",189);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::phys::InertiaMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/InertiaMode.hx",192);
			{
				HX_STACK_LINE(192)
				if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT == null()))){
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT = ::nape::phys::InertiaMode_obj::__new();
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(192)
				return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;
			}
			return null();
		}
	};
	HX_STACK_LINE(189)
	if (((hx::ObjectPtr<OBJ_>(this) == _Function_1_1::Block()))){
		HX_STACK_LINE(192)
		return HX_CSTRING("DEFAULT");
	}
	else{
		struct _Function_2_1{
			inline static ::nape::phys::InertiaMode Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/InertiaMode.hx",193);
				{
					HX_STACK_LINE(193)
					if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = ::nape::phys::InertiaMode_obj::__new();
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(193)
					return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
				}
				return null();
			}
		};
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _Function_2_1::Block()))){
			HX_STACK_LINE(193)
			return HX_CSTRING("FIXED");
		}
		else{
			HX_STACK_LINE(194)
			return HX_CSTRING("");
		}
	}
	HX_STACK_LINE(189)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InertiaMode_obj,toString,return )

::nape::phys::InertiaMode InertiaMode_obj::DEFAULT;

::nape::phys::InertiaMode InertiaMode_obj::get_DEFAULT( ){
	HX_STACK_PUSH("InertiaMode::get_DEFAULT","nape/phys/InertiaMode.hx",203);
	HX_STACK_LINE(204)
	if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT == null()))){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT = ::nape::phys::InertiaMode_obj::__new();
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InertiaMode_obj,get_DEFAULT,return )

::nape::phys::InertiaMode InertiaMode_obj::FIXED;

::nape::phys::InertiaMode InertiaMode_obj::get_FIXED( ){
	HX_STACK_PUSH("InertiaMode::get_FIXED","nape/phys/InertiaMode.hx",218);
	HX_STACK_LINE(219)
	if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = ::nape::phys::InertiaMode_obj::__new();
		HX_STACK_LINE(222)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(224)
	return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InertiaMode_obj,get_FIXED,return )


InertiaMode_obj::InertiaMode_obj()
{
}

void InertiaMode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InertiaMode);
	HX_MARK_END_CLASS();
}

void InertiaMode_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic InertiaMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FIXED") ) { return inCallProp ? get_FIXED() : FIXED; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { return inCallProp ? get_DEFAULT() : DEFAULT; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_FIXED") ) { return get_FIXED_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_DEFAULT") ) { return get_DEFAULT_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InertiaMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FIXED") ) { FIXED=inValue.Cast< ::nape::phys::InertiaMode >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { DEFAULT=inValue.Cast< ::nape::phys::InertiaMode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InertiaMode_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT"),
	HX_CSTRING("get_DEFAULT"),
	HX_CSTRING("FIXED"),
	HX_CSTRING("get_FIXED"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InertiaMode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InertiaMode_obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(InertiaMode_obj::FIXED,"FIXED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InertiaMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InertiaMode_obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(InertiaMode_obj::FIXED,"FIXED");
};

Class InertiaMode_obj::__mClass;

void InertiaMode_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.InertiaMode"), hx::TCanCast< InertiaMode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void InertiaMode_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
