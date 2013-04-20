#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_ListenerType
#include <nape/callbacks/ListenerType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void ListenerType_obj::__construct()
{
HX_STACK_PUSH("ListenerType::new","nape/callbacks/ListenerType.hx",181);
{
	HX_STACK_LINE(181)
	if ((!(::zpp_nape::util::ZPP_Flags_obj::internal))){
		HX_STACK_LINE(183)
		hx::Throw (((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("ListenerType")) + HX_CSTRING(" derp!")));
	}
}
;
	return null();
}

ListenerType_obj::~ListenerType_obj() { }

Dynamic ListenerType_obj::__CreateEmpty() { return  new ListenerType_obj; }
hx::ObjectPtr< ListenerType_obj > ListenerType_obj::__new()
{  hx::ObjectPtr< ListenerType_obj > result = new ListenerType_obj();
	result->__construct();
	return result;}

Dynamic ListenerType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListenerType_obj > result = new ListenerType_obj();
	result->__construct();
	return result;}

::String ListenerType_obj::toString( ){
	HX_STACK_PUSH("ListenerType::toString","nape/callbacks/ListenerType.hx",189);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::callbacks::ListenerType Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/ListenerType.hx",192);
			{
				HX_STACK_LINE(192)
				if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY == null()))){
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY = ::nape::callbacks::ListenerType_obj::__new();
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(192)
				return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY;
			}
			return null();
		}
	};
	HX_STACK_LINE(189)
	if (((hx::ObjectPtr<OBJ_>(this) == _Function_1_1::Block()))){
		HX_STACK_LINE(192)
		return HX_CSTRING("BODY");
	}
	else{
		struct _Function_2_1{
			inline static ::nape::callbacks::ListenerType Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/ListenerType.hx",193);
				{
					HX_STACK_LINE(193)
					if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT == null()))){
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT = ::nape::callbacks::ListenerType_obj::__new();
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(193)
					return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT;
				}
				return null();
			}
		};
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _Function_2_1::Block()))){
			HX_STACK_LINE(193)
			return HX_CSTRING("CONSTRAINT");
		}
		else{
			struct _Function_3_1{
				inline static ::nape::callbacks::ListenerType Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/ListenerType.hx",194);
					{
						HX_STACK_LINE(194)
						if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION == null()))){
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION = ::nape::callbacks::ListenerType_obj::__new();
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(194)
						return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION;
					}
					return null();
				}
			};
			HX_STACK_LINE(194)
			if (((hx::ObjectPtr<OBJ_>(this) == _Function_3_1::Block()))){
				HX_STACK_LINE(194)
				return HX_CSTRING("INTERACTION");
			}
			else{
				struct _Function_4_1{
					inline static ::nape::callbacks::ListenerType Block( ){
						HX_STACK_PUSH("*::closure","nape/callbacks/ListenerType.hx",195);
						{
							HX_STACK_LINE(195)
							if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE == null()))){
								HX_STACK_LINE(195)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(195)
								::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE = ::nape::callbacks::ListenerType_obj::__new();
								HX_STACK_LINE(195)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(195)
							return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE;
						}
						return null();
					}
				};
				HX_STACK_LINE(195)
				if (((hx::ObjectPtr<OBJ_>(this) == _Function_4_1::Block()))){
					HX_STACK_LINE(195)
					return HX_CSTRING("PRE");
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


HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,toString,return )

::nape::callbacks::ListenerType ListenerType_obj::BODY;

::nape::callbacks::ListenerType ListenerType_obj::get_BODY( ){
	HX_STACK_PUSH("ListenerType::get_BODY","nape/callbacks/ListenerType.hx",203);
	HX_STACK_LINE(204)
	if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY == null()))){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY = ::nape::callbacks::ListenerType_obj::__new();
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,get_BODY,return )

::nape::callbacks::ListenerType ListenerType_obj::CONSTRAINT;

::nape::callbacks::ListenerType ListenerType_obj::get_CONSTRAINT( ){
	HX_STACK_PUSH("ListenerType::get_CONSTRAINT","nape/callbacks/ListenerType.hx",216);
	HX_STACK_LINE(217)
	if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT == null()))){
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT = ::nape::callbacks::ListenerType_obj::__new();
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(222)
	return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,get_CONSTRAINT,return )

::nape::callbacks::ListenerType ListenerType_obj::INTERACTION;

::nape::callbacks::ListenerType ListenerType_obj::get_INTERACTION( ){
	HX_STACK_PUSH("ListenerType::get_INTERACTION","nape/callbacks/ListenerType.hx",229);
	HX_STACK_LINE(230)
	if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION == null()))){
		HX_STACK_LINE(231)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(232)
		::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION = ::nape::callbacks::ListenerType_obj::__new();
		HX_STACK_LINE(233)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(235)
	return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,get_INTERACTION,return )

::nape::callbacks::ListenerType ListenerType_obj::PRE;

::nape::callbacks::ListenerType ListenerType_obj::get_PRE( ){
	HX_STACK_PUSH("ListenerType::get_PRE","nape/callbacks/ListenerType.hx",242);
	HX_STACK_LINE(243)
	if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE == null()))){
		HX_STACK_LINE(244)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(245)
		::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE = ::nape::callbacks::ListenerType_obj::__new();
		HX_STACK_LINE(246)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(248)
	return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ListenerType_obj,get_PRE,return )


ListenerType_obj::ListenerType_obj()
{
}

void ListenerType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListenerType);
	HX_MARK_END_CLASS();
}

void ListenerType_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ListenerType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"PRE") ) { return inCallProp ? get_PRE() : PRE; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BODY") ) { return inCallProp ? get_BODY() : BODY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_PRE") ) { return get_PRE_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_BODY") ) { return get_BODY_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"CONSTRAINT") ) { return inCallProp ? get_CONSTRAINT() : CONSTRAINT; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"INTERACTION") ) { return inCallProp ? get_INTERACTION() : INTERACTION; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_CONSTRAINT") ) { return get_CONSTRAINT_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_INTERACTION") ) { return get_INTERACTION_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ListenerType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"PRE") ) { PRE=inValue.Cast< ::nape::callbacks::ListenerType >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BODY") ) { BODY=inValue.Cast< ::nape::callbacks::ListenerType >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"CONSTRAINT") ) { CONSTRAINT=inValue.Cast< ::nape::callbacks::ListenerType >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"INTERACTION") ) { INTERACTION=inValue.Cast< ::nape::callbacks::ListenerType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListenerType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BODY"),
	HX_CSTRING("get_BODY"),
	HX_CSTRING("CONSTRAINT"),
	HX_CSTRING("get_CONSTRAINT"),
	HX_CSTRING("INTERACTION"),
	HX_CSTRING("get_INTERACTION"),
	HX_CSTRING("PRE"),
	HX_CSTRING("get_PRE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListenerType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ListenerType_obj::BODY,"BODY");
	HX_MARK_MEMBER_NAME(ListenerType_obj::CONSTRAINT,"CONSTRAINT");
	HX_MARK_MEMBER_NAME(ListenerType_obj::INTERACTION,"INTERACTION");
	HX_MARK_MEMBER_NAME(ListenerType_obj::PRE,"PRE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListenerType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ListenerType_obj::BODY,"BODY");
	HX_VISIT_MEMBER_NAME(ListenerType_obj::CONSTRAINT,"CONSTRAINT");
	HX_VISIT_MEMBER_NAME(ListenerType_obj::INTERACTION,"INTERACTION");
	HX_VISIT_MEMBER_NAME(ListenerType_obj::PRE,"PRE");
};

Class ListenerType_obj::__mClass;

void ListenerType_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.ListenerType"), hx::TCanCast< ListenerType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ListenerType_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
