#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void PreFlag_obj::__construct()
{
HX_STACK_PUSH("PreFlag::new","nape/callbacks/PreFlag.hx",182);
{
	HX_STACK_LINE(182)
	if ((!(::zpp_nape::util::ZPP_Flags_obj::internal))){
		HX_STACK_LINE(184)
		hx::Throw (((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("PreFlag")) + HX_CSTRING(" derp!")));
	}
}
;
	return null();
}

PreFlag_obj::~PreFlag_obj() { }

Dynamic PreFlag_obj::__CreateEmpty() { return  new PreFlag_obj; }
hx::ObjectPtr< PreFlag_obj > PreFlag_obj::__new()
{  hx::ObjectPtr< PreFlag_obj > result = new PreFlag_obj();
	result->__construct();
	return result;}

Dynamic PreFlag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PreFlag_obj > result = new PreFlag_obj();
	result->__construct();
	return result;}

::String PreFlag_obj::toString( ){
	HX_STACK_PUSH("PreFlag::toString","nape/callbacks/PreFlag.hx",190);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::callbacks::PreFlag Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/PreFlag.hx",193);
			{
				HX_STACK_LINE(193)
				if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT == null()))){
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT = ::nape::callbacks::PreFlag_obj::__new();
					HX_STACK_LINE(193)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(193)
				return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
			}
			return null();
		}
	};
	HX_STACK_LINE(190)
	if (((hx::ObjectPtr<OBJ_>(this) == _Function_1_1::Block()))){
		HX_STACK_LINE(193)
		return HX_CSTRING("ACCEPT");
	}
	else{
		struct _Function_2_1{
			inline static ::nape::callbacks::PreFlag Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/PreFlag.hx",194);
				{
					HX_STACK_LINE(194)
					if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE == null()))){
						HX_STACK_LINE(194)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(194)
						::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE = ::nape::callbacks::PreFlag_obj::__new();
						HX_STACK_LINE(194)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(194)
					return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
				}
				return null();
			}
		};
		HX_STACK_LINE(194)
		if (((hx::ObjectPtr<OBJ_>(this) == _Function_2_1::Block()))){
			HX_STACK_LINE(194)
			return HX_CSTRING("IGNORE");
		}
		else{
			struct _Function_3_1{
				inline static ::nape::callbacks::PreFlag Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/PreFlag.hx",195);
					{
						HX_STACK_LINE(195)
						if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE == null()))){
							HX_STACK_LINE(195)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(195)
							::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE = ::nape::callbacks::PreFlag_obj::__new();
							HX_STACK_LINE(195)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(195)
						return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
					}
					return null();
				}
			};
			HX_STACK_LINE(195)
			if (((hx::ObjectPtr<OBJ_>(this) == _Function_3_1::Block()))){
				HX_STACK_LINE(195)
				return HX_CSTRING("ACCEPT_ONCE");
			}
			else{
				struct _Function_4_1{
					inline static ::nape::callbacks::PreFlag Block( ){
						HX_STACK_PUSH("*::closure","nape/callbacks/PreFlag.hx",196);
						{
							HX_STACK_LINE(196)
							if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE == null()))){
								HX_STACK_LINE(196)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(196)
								::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE = ::nape::callbacks::PreFlag_obj::__new();
								HX_STACK_LINE(196)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(196)
							return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
						}
						return null();
					}
				};
				HX_STACK_LINE(196)
				if (((hx::ObjectPtr<OBJ_>(this) == _Function_4_1::Block()))){
					HX_STACK_LINE(196)
					return HX_CSTRING("IGNORE_ONCE");
				}
				else{
					HX_STACK_LINE(197)
					return HX_CSTRING("");
				}
			}
		}
	}
	HX_STACK_LINE(190)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,toString,return )

::nape::callbacks::PreFlag PreFlag_obj::get_ACCEPT( ){
	HX_STACK_PUSH("PreFlag::get_ACCEPT","nape/callbacks/PreFlag.hx",204);
	HX_STACK_LINE(205)
	if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT == null()))){
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT = ::nape::callbacks::PreFlag_obj::__new();
		HX_STACK_LINE(208)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(210)
	return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_ACCEPT,return )

::nape::callbacks::PreFlag PreFlag_obj::get_IGNORE( ){
	HX_STACK_PUSH("PreFlag::get_IGNORE","nape/callbacks/PreFlag.hx",217);
	HX_STACK_LINE(218)
	if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE == null()))){
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE = ::nape::callbacks::PreFlag_obj::__new();
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(223)
	return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_IGNORE,return )

::nape::callbacks::PreFlag PreFlag_obj::get_ACCEPT_ONCE( ){
	HX_STACK_PUSH("PreFlag::get_ACCEPT_ONCE","nape/callbacks/PreFlag.hx",231);
	HX_STACK_LINE(232)
	if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE == null()))){
		HX_STACK_LINE(233)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(234)
		::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE = ::nape::callbacks::PreFlag_obj::__new();
		HX_STACK_LINE(235)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(237)
	return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_ACCEPT_ONCE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_ACCEPT_ONCE,return )

::nape::callbacks::PreFlag PreFlag_obj::get_IGNORE_ONCE( ){
	HX_STACK_PUSH("PreFlag::get_IGNORE_ONCE","nape/callbacks/PreFlag.hx",245);
	HX_STACK_LINE(246)
	if (((::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE == null()))){
		HX_STACK_LINE(247)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(248)
		::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE = ::nape::callbacks::PreFlag_obj::__new();
		HX_STACK_LINE(249)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(251)
	return ::zpp_nape::util::ZPP_Flags_obj::PreFlag_IGNORE_ONCE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PreFlag_obj,get_IGNORE_ONCE,return )


PreFlag_obj::PreFlag_obj()
{
}

void PreFlag_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PreFlag);
	HX_MARK_END_CLASS();
}

void PreFlag_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic PreFlag_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ACCEPT") ) { return get_ACCEPT(); }
		if (HX_FIELD_EQ(inName,"IGNORE") ) { return get_IGNORE(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_ACCEPT") ) { return get_ACCEPT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_IGNORE") ) { return get_IGNORE_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ACCEPT_ONCE") ) { return get_ACCEPT_ONCE(); }
		if (HX_FIELD_EQ(inName,"IGNORE_ONCE") ) { return get_IGNORE_ONCE(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_ACCEPT_ONCE") ) { return get_ACCEPT_ONCE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_IGNORE_ONCE") ) { return get_IGNORE_ONCE_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PreFlag_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PreFlag_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_ACCEPT"),
	HX_CSTRING("get_IGNORE"),
	HX_CSTRING("get_ACCEPT_ONCE"),
	HX_CSTRING("get_IGNORE_ONCE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PreFlag_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PreFlag_obj::__mClass,"__mClass");
};

Class PreFlag_obj::__mClass;

void PreFlag_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.PreFlag"), hx::TCanCast< PreFlag_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PreFlag_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
