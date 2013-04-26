#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_ArbiterType
#include <nape/dynamics/ArbiterType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace dynamics{

Void ArbiterType_obj::__construct()
{
HX_STACK_PUSH("ArbiterType::new","nape/dynamics/ArbiterType.hx",181);
{
	HX_STACK_LINE(181)
	if ((!(::zpp_nape::util::ZPP_Flags_obj::internal))){
		HX_STACK_LINE(183)
		hx::Throw (((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("ArbiterType")) + HX_CSTRING(" derp!")));
	}
}
;
	return null();
}

ArbiterType_obj::~ArbiterType_obj() { }

Dynamic ArbiterType_obj::__CreateEmpty() { return  new ArbiterType_obj; }
hx::ObjectPtr< ArbiterType_obj > ArbiterType_obj::__new()
{  hx::ObjectPtr< ArbiterType_obj > result = new ArbiterType_obj();
	result->__construct();
	return result;}

Dynamic ArbiterType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArbiterType_obj > result = new ArbiterType_obj();
	result->__construct();
	return result;}

::String ArbiterType_obj::toString( ){
	HX_STACK_PUSH("ArbiterType::toString","nape/dynamics/ArbiterType.hx",189);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::dynamics::ArbiterType Block( ){
			HX_STACK_PUSH("*::closure","nape/dynamics/ArbiterType.hx",192);
			{
				HX_STACK_LINE(192)
				if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION == null()))){
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION = ::nape::dynamics::ArbiterType_obj::__new();
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(192)
				return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION;
			}
			return null();
		}
	};
	HX_STACK_LINE(189)
	if (((hx::ObjectPtr<OBJ_>(this) == _Function_1_1::Block()))){
		HX_STACK_LINE(192)
		return HX_CSTRING("COLLISION");
	}
	else{
		struct _Function_2_1{
			inline static ::nape::dynamics::ArbiterType Block( ){
				HX_STACK_PUSH("*::closure","nape/dynamics/ArbiterType.hx",193);
				{
					HX_STACK_LINE(193)
					if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR == null()))){
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR = ::nape::dynamics::ArbiterType_obj::__new();
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(193)
					return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR;
				}
				return null();
			}
		};
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _Function_2_1::Block()))){
			HX_STACK_LINE(193)
			return HX_CSTRING("SENSOR");
		}
		else{
			struct _Function_3_1{
				inline static ::nape::dynamics::ArbiterType Block( ){
					HX_STACK_PUSH("*::closure","nape/dynamics/ArbiterType.hx",194);
					{
						HX_STACK_LINE(194)
						if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID == null()))){
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID = ::nape::dynamics::ArbiterType_obj::__new();
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(194)
						return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID;
					}
					return null();
				}
			};
			HX_STACK_LINE(194)
			if (((hx::ObjectPtr<OBJ_>(this) == _Function_3_1::Block()))){
				HX_STACK_LINE(194)
				return HX_CSTRING("FLUID");
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


HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,toString,return )

::nape::dynamics::ArbiterType ArbiterType_obj::COLLISION;

::nape::dynamics::ArbiterType ArbiterType_obj::get_COLLISION( ){
	HX_STACK_PUSH("ArbiterType::get_COLLISION","nape/dynamics/ArbiterType.hx",202);
	HX_STACK_LINE(203)
	if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION == null()))){
		HX_STACK_LINE(204)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION = ::nape::dynamics::ArbiterType_obj::__new();
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(208)
	return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,get_COLLISION,return )

::nape::dynamics::ArbiterType ArbiterType_obj::SENSOR;

::nape::dynamics::ArbiterType ArbiterType_obj::get_SENSOR( ){
	HX_STACK_PUSH("ArbiterType::get_SENSOR","nape/dynamics/ArbiterType.hx",215);
	HX_STACK_LINE(216)
	if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR == null()))){
		HX_STACK_LINE(217)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR = ::nape::dynamics::ArbiterType_obj::__new();
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(221)
	return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,get_SENSOR,return )

::nape::dynamics::ArbiterType ArbiterType_obj::FLUID;

::nape::dynamics::ArbiterType ArbiterType_obj::get_FLUID( ){
	HX_STACK_PUSH("ArbiterType::get_FLUID","nape/dynamics/ArbiterType.hx",228);
	HX_STACK_LINE(229)
	if (((::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID == null()))){
		HX_STACK_LINE(230)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(231)
		::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID = ::nape::dynamics::ArbiterType_obj::__new();
		HX_STACK_LINE(232)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(234)
	return ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ArbiterType_obj,get_FLUID,return )


ArbiterType_obj::ArbiterType_obj()
{
}

void ArbiterType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArbiterType);
	HX_MARK_END_CLASS();
}

void ArbiterType_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ArbiterType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FLUID") ) { return inCallProp ? get_FLUID() : FLUID; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SENSOR") ) { return inCallProp ? get_SENSOR() : SENSOR; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"COLLISION") ) { return inCallProp ? get_COLLISION() : COLLISION; }
		if (HX_FIELD_EQ(inName,"get_FLUID") ) { return get_FLUID_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_SENSOR") ) { return get_SENSOR_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_COLLISION") ) { return get_COLLISION_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArbiterType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"FLUID") ) { FLUID=inValue.Cast< ::nape::dynamics::ArbiterType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SENSOR") ) { SENSOR=inValue.Cast< ::nape::dynamics::ArbiterType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"COLLISION") ) { COLLISION=inValue.Cast< ::nape::dynamics::ArbiterType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArbiterType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("COLLISION"),
	HX_CSTRING("get_COLLISION"),
	HX_CSTRING("SENSOR"),
	HX_CSTRING("get_SENSOR"),
	HX_CSTRING("FLUID"),
	HX_CSTRING("get_FLUID"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArbiterType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ArbiterType_obj::COLLISION,"COLLISION");
	HX_MARK_MEMBER_NAME(ArbiterType_obj::SENSOR,"SENSOR");
	HX_MARK_MEMBER_NAME(ArbiterType_obj::FLUID,"FLUID");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArbiterType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ArbiterType_obj::COLLISION,"COLLISION");
	HX_VISIT_MEMBER_NAME(ArbiterType_obj::SENSOR,"SENSOR");
	HX_VISIT_MEMBER_NAME(ArbiterType_obj::FLUID,"FLUID");
};

Class ArbiterType_obj::__mClass;

void ArbiterType_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.ArbiterType"), hx::TCanCast< ArbiterType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ArbiterType_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
