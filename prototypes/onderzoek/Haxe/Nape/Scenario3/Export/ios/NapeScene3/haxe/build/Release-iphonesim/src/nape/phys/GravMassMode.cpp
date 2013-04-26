#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_GravMassMode
#include <nape/phys/GravMassMode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace phys{

Void GravMassMode_obj::__construct()
{
HX_STACK_PUSH("GravMassMode::new","nape/phys/GravMassMode.hx",181);
{
	HX_STACK_LINE(181)
	if ((!(::zpp_nape::util::ZPP_Flags_obj::internal))){
		HX_STACK_LINE(183)
		hx::Throw (((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("GravMassMode")) + HX_CSTRING(" derp!")));
	}
}
;
	return null();
}

GravMassMode_obj::~GravMassMode_obj() { }

Dynamic GravMassMode_obj::__CreateEmpty() { return  new GravMassMode_obj; }
hx::ObjectPtr< GravMassMode_obj > GravMassMode_obj::__new()
{  hx::ObjectPtr< GravMassMode_obj > result = new GravMassMode_obj();
	result->__construct();
	return result;}

Dynamic GravMassMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GravMassMode_obj > result = new GravMassMode_obj();
	result->__construct();
	return result;}

::String GravMassMode_obj::toString( ){
	HX_STACK_PUSH("GravMassMode::toString","nape/phys/GravMassMode.hx",189);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/GravMassMode.hx",192);
			{
				HX_STACK_LINE(192)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(192)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
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
			inline static ::nape::phys::GravMassMode Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/GravMassMode.hx",193);
				{
					HX_STACK_LINE(193)
					if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED == null()))){
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = ::nape::phys::GravMassMode_obj::__new();
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(193)
					return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
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
			struct _Function_3_1{
				inline static ::nape::phys::GravMassMode Block( ){
					HX_STACK_PUSH("*::closure","nape/phys/GravMassMode.hx",194);
					{
						HX_STACK_LINE(194)
						if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = ::nape::phys::GravMassMode_obj::__new();
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(194)
						return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
					}
					return null();
				}
			};
			HX_STACK_LINE(194)
			if (((hx::ObjectPtr<OBJ_>(this) == _Function_3_1::Block()))){
				HX_STACK_LINE(194)
				return HX_CSTRING("SCALED");
			}
			else{
				HX_STACK_LINE(195)
				return HX_CSTRING("");
			}
		}
	}
	HX_STACK_LINE(189)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GravMassMode_obj,toString,return )

::nape::phys::GravMassMode GravMassMode_obj::DEFAULT;

::nape::phys::GravMassMode GravMassMode_obj::get_DEFAULT( ){
	HX_STACK_PUSH("GravMassMode::get_DEFAULT","nape/phys/GravMassMode.hx",204);
	HX_STACK_LINE(205)
	if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = ::nape::phys::GravMassMode_obj::__new();
		HX_STACK_LINE(208)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(210)
	return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GravMassMode_obj,get_DEFAULT,return )

::nape::phys::GravMassMode GravMassMode_obj::FIXED;

::nape::phys::GravMassMode GravMassMode_obj::get_FIXED( ){
	HX_STACK_PUSH("GravMassMode::get_FIXED","nape/phys/GravMassMode.hx",219);
	HX_STACK_LINE(220)
	if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED == null()))){
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(222)
		::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = ::nape::phys::GravMassMode_obj::__new();
		HX_STACK_LINE(223)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(225)
	return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GravMassMode_obj,get_FIXED,return )

::nape::phys::GravMassMode GravMassMode_obj::SCALED;

::nape::phys::GravMassMode GravMassMode_obj::get_SCALED( ){
	HX_STACK_PUSH("GravMassMode::get_SCALED","nape/phys/GravMassMode.hx",235);
	HX_STACK_LINE(236)
	if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
		HX_STACK_LINE(237)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(238)
		::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = ::nape::phys::GravMassMode_obj::__new();
		HX_STACK_LINE(239)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(241)
	return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GravMassMode_obj,get_SCALED,return )


GravMassMode_obj::GravMassMode_obj()
{
}

void GravMassMode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GravMassMode);
	HX_MARK_END_CLASS();
}

void GravMassMode_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic GravMassMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FIXED") ) { return inCallProp ? get_FIXED() : FIXED; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SCALED") ) { return inCallProp ? get_SCALED() : SCALED; }
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
	case 10:
		if (HX_FIELD_EQ(inName,"get_SCALED") ) { return get_SCALED_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_DEFAULT") ) { return get_DEFAULT_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GravMassMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FIXED") ) { FIXED=inValue.Cast< ::nape::phys::GravMassMode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SCALED") ) { SCALED=inValue.Cast< ::nape::phys::GravMassMode >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { DEFAULT=inValue.Cast< ::nape::phys::GravMassMode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GravMassMode_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT"),
	HX_CSTRING("get_DEFAULT"),
	HX_CSTRING("FIXED"),
	HX_CSTRING("get_FIXED"),
	HX_CSTRING("SCALED"),
	HX_CSTRING("get_SCALED"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GravMassMode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GravMassMode_obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(GravMassMode_obj::FIXED,"FIXED");
	HX_MARK_MEMBER_NAME(GravMassMode_obj::SCALED,"SCALED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GravMassMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GravMassMode_obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(GravMassMode_obj::FIXED,"FIXED");
	HX_VISIT_MEMBER_NAME(GravMassMode_obj::SCALED,"SCALED");
};

Class GravMassMode_obj::__mClass;

void GravMassMode_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.GravMassMode"), hx::TCanCast< GravMassMode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GravMassMode_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
