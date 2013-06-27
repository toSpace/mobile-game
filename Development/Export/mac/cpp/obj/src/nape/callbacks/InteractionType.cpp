#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void InteractionType_obj::__construct()
{
HX_STACK_PUSH("InteractionType::new","nape/callbacks/InteractionType.hx",181);
{
	HX_STACK_LINE(181)
	if ((!(::zpp_nape::util::ZPP_Flags_obj::internal))){
		HX_STACK_LINE(183)
		hx::Throw (((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("InteractionType")) + HX_CSTRING(" derp!")));
	}
}
;
	return null();
}

InteractionType_obj::~InteractionType_obj() { }

Dynamic InteractionType_obj::__CreateEmpty() { return  new InteractionType_obj; }
hx::ObjectPtr< InteractionType_obj > InteractionType_obj::__new()
{  hx::ObjectPtr< InteractionType_obj > result = new InteractionType_obj();
	result->__construct();
	return result;}

Dynamic InteractionType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionType_obj > result = new InteractionType_obj();
	result->__construct();
	return result;}

::String InteractionType_obj::toString( ){
	HX_STACK_PUSH("InteractionType::toString","nape/callbacks/InteractionType.hx",189);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::callbacks::InteractionType Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/InteractionType.hx",192);
			{
				HX_STACK_LINE(192)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(192)
				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
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
			inline static ::nape::callbacks::InteractionType Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/InteractionType.hx",193);
				{
					HX_STACK_LINE(193)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(193)
					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
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
				inline static ::nape::callbacks::InteractionType Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/InteractionType.hx",194);
					{
						HX_STACK_LINE(194)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(194)
						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
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
				struct _Function_4_1{
					inline static ::nape::callbacks::InteractionType Block( ){
						HX_STACK_PUSH("*::closure","nape/callbacks/InteractionType.hx",195);
						{
							HX_STACK_LINE(195)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
								HX_STACK_LINE(195)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(195)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = ::nape::callbacks::InteractionType_obj::__new();
								HX_STACK_LINE(195)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(195)
							return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
						}
						return null();
					}
				};
				HX_STACK_LINE(195)
				if (((hx::ObjectPtr<OBJ_>(this) == _Function_4_1::Block()))){
					HX_STACK_LINE(195)
					return HX_CSTRING("ANY");
				}
				else{
					HX_STACK_LINE(196)
					return HX_CSTRING("");
				}
			}
		}
	}
	HX_STACK_LINE(189)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,toString,return )

::nape::callbacks::InteractionType InteractionType_obj::get_COLLISION( ){
	HX_STACK_PUSH("InteractionType::get_COLLISION","nape/callbacks/InteractionType.hx",203);
	HX_STACK_LINE(204)
	if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,get_COLLISION,return )

::nape::callbacks::InteractionType InteractionType_obj::get_SENSOR( ){
	HX_STACK_PUSH("InteractionType::get_SENSOR","nape/callbacks/InteractionType.hx",215);
	HX_STACK_LINE(216)
	if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
		HX_STACK_LINE(217)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(221)
	return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,get_SENSOR,return )

::nape::callbacks::InteractionType InteractionType_obj::get_FLUID( ){
	HX_STACK_PUSH("InteractionType::get_FLUID","nape/callbacks/InteractionType.hx",228);
	HX_STACK_LINE(229)
	if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
		HX_STACK_LINE(230)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(231)
		::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
		HX_STACK_LINE(232)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(234)
	return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,get_FLUID,return )

::nape::callbacks::InteractionType InteractionType_obj::get_ANY( ){
	HX_STACK_PUSH("InteractionType::get_ANY","nape/callbacks/InteractionType.hx",241);
	HX_STACK_LINE(242)
	if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
		HX_STACK_LINE(243)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(244)
		::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = ::nape::callbacks::InteractionType_obj::__new();
		HX_STACK_LINE(245)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(247)
	return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InteractionType_obj,get_ANY,return )


InteractionType_obj::InteractionType_obj()
{
}

void InteractionType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractionType);
	HX_MARK_END_CLASS();
}

void InteractionType_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic InteractionType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { return get_ANY(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FLUID") ) { return get_FLUID(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SENSOR") ) { return get_SENSOR(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_ANY") ) { return get_ANY_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"COLLISION") ) { return get_COLLISION(); }
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

Dynamic InteractionType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractionType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_COLLISION"),
	HX_CSTRING("get_SENSOR"),
	HX_CSTRING("get_FLUID"),
	HX_CSTRING("get_ANY"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionType_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionType_obj::__mClass,"__mClass");
};

Class InteractionType_obj::__mClass;

void InteractionType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.InteractionType"), hx::TCanCast< InteractionType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void InteractionType_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
