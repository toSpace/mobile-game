#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void CbEvent_obj::__construct()
{
HX_STACK_PUSH("CbEvent::new","nape/callbacks/CbEvent.hx",181);
{
	HX_STACK_LINE(181)
	if ((!(::zpp_nape::util::ZPP_Flags_obj::internal))){
		HX_STACK_LINE(183)
		hx::Throw (((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("CbEvent")) + HX_CSTRING(" derp!")));
	}
}
;
	return null();
}

CbEvent_obj::~CbEvent_obj() { }

Dynamic CbEvent_obj::__CreateEmpty() { return  new CbEvent_obj; }
hx::ObjectPtr< CbEvent_obj > CbEvent_obj::__new()
{  hx::ObjectPtr< CbEvent_obj > result = new CbEvent_obj();
	result->__construct();
	return result;}

Dynamic CbEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CbEvent_obj > result = new CbEvent_obj();
	result->__construct();
	return result;}

::String CbEvent_obj::toString( ){
	HX_STACK_PUSH("CbEvent::toString","nape/callbacks/CbEvent.hx",189);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/CbEvent.hx",192);
			{
				HX_STACK_LINE(192)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE == null()))){
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(192)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
			}
			return null();
		}
	};
	HX_STACK_LINE(189)
	if (((hx::ObjectPtr<OBJ_>(this) == _Function_1_1::Block()))){
		HX_STACK_LINE(192)
		return HX_CSTRING("PRE");
	}
	else{
		struct _Function_2_1{
			inline static ::nape::callbacks::CbEvent Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/CbEvent.hx",193);
				{
					HX_STACK_LINE(193)
					if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = ::nape::callbacks::CbEvent_obj::__new();
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(193)
					return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
				}
				return null();
			}
		};
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _Function_2_1::Block()))){
			HX_STACK_LINE(193)
			return HX_CSTRING("BEGIN");
		}
		else{
			struct _Function_3_1{
				inline static ::nape::callbacks::CbEvent Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/CbEvent.hx",194);
					{
						HX_STACK_LINE(194)
						if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = ::nape::callbacks::CbEvent_obj::__new();
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(194)
						return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
					}
					return null();
				}
			};
			HX_STACK_LINE(194)
			if (((hx::ObjectPtr<OBJ_>(this) == _Function_3_1::Block()))){
				HX_STACK_LINE(194)
				return HX_CSTRING("ONGOING");
			}
			else{
				struct _Function_4_1{
					inline static ::nape::callbacks::CbEvent Block( ){
						HX_STACK_PUSH("*::closure","nape/callbacks/CbEvent.hx",195);
						{
							HX_STACK_LINE(195)
							if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
								HX_STACK_LINE(195)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(195)
								::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = ::nape::callbacks::CbEvent_obj::__new();
								HX_STACK_LINE(195)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(195)
							return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
						}
						return null();
					}
				};
				HX_STACK_LINE(195)
				if (((hx::ObjectPtr<OBJ_>(this) == _Function_4_1::Block()))){
					HX_STACK_LINE(195)
					return HX_CSTRING("END");
				}
				else{
					struct _Function_5_1{
						inline static ::nape::callbacks::CbEvent Block( ){
							HX_STACK_PUSH("*::closure","nape/callbacks/CbEvent.hx",196);
							{
								HX_STACK_LINE(196)
								if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE == null()))){
									HX_STACK_LINE(196)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(196)
									::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = ::nape::callbacks::CbEvent_obj::__new();
									HX_STACK_LINE(196)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(196)
								return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
							}
							return null();
						}
					};
					HX_STACK_LINE(196)
					if (((hx::ObjectPtr<OBJ_>(this) == _Function_5_1::Block()))){
						HX_STACK_LINE(196)
						return HX_CSTRING("WAKE");
					}
					else{
						struct _Function_6_1{
							inline static ::nape::callbacks::CbEvent Block( ){
								HX_STACK_PUSH("*::closure","nape/callbacks/CbEvent.hx",197);
								{
									HX_STACK_LINE(197)
									if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP == null()))){
										HX_STACK_LINE(197)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(197)
										::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = ::nape::callbacks::CbEvent_obj::__new();
										HX_STACK_LINE(197)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(197)
									return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
								}
								return null();
							}
						};
						HX_STACK_LINE(197)
						if (((hx::ObjectPtr<OBJ_>(this) == _Function_6_1::Block()))){
							HX_STACK_LINE(197)
							return HX_CSTRING("SLEEP");
						}
						else{
							struct _Function_7_1{
								inline static ::nape::callbacks::CbEvent Block( ){
									HX_STACK_PUSH("*::closure","nape/callbacks/CbEvent.hx",198);
									{
										HX_STACK_LINE(198)
										if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK == null()))){
											HX_STACK_LINE(198)
											::zpp_nape::util::ZPP_Flags_obj::internal = true;
											HX_STACK_LINE(198)
											::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK = ::nape::callbacks::CbEvent_obj::__new();
											HX_STACK_LINE(198)
											::zpp_nape::util::ZPP_Flags_obj::internal = false;
										}
										HX_STACK_LINE(198)
										return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;
									}
									return null();
								}
							};
							HX_STACK_LINE(198)
							if (((hx::ObjectPtr<OBJ_>(this) == _Function_7_1::Block()))){
								HX_STACK_LINE(198)
								return HX_CSTRING("BREAK");
							}
							else{
								HX_STACK_LINE(199)
								return HX_CSTRING("");
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(189)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,toString,return )

::nape::callbacks::CbEvent CbEvent_obj::get_BEGIN( ){
	HX_STACK_PUSH("CbEvent::get_BEGIN","nape/callbacks/CbEvent.hx",206);
	HX_STACK_LINE(207)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
		HX_STACK_LINE(208)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(209)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = ::nape::callbacks::CbEvent_obj::__new();
		HX_STACK_LINE(210)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(212)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_BEGIN,return )

::nape::callbacks::CbEvent CbEvent_obj::get_ONGOING( ){
	HX_STACK_PUSH("CbEvent::get_ONGOING","nape/callbacks/CbEvent.hx",220);
	HX_STACK_LINE(221)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
		HX_STACK_LINE(222)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(223)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = ::nape::callbacks::CbEvent_obj::__new();
		HX_STACK_LINE(224)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(226)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_ONGOING,return )

::nape::callbacks::CbEvent CbEvent_obj::get_END( ){
	HX_STACK_PUSH("CbEvent::get_END","nape/callbacks/CbEvent.hx",233);
	HX_STACK_LINE(234)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
		HX_STACK_LINE(235)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(236)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = ::nape::callbacks::CbEvent_obj::__new();
		HX_STACK_LINE(237)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(239)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_END,return )

::nape::callbacks::CbEvent CbEvent_obj::get_WAKE( ){
	HX_STACK_PUSH("CbEvent::get_WAKE","nape/callbacks/CbEvent.hx",246);
	HX_STACK_LINE(247)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE == null()))){
		HX_STACK_LINE(248)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(249)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = ::nape::callbacks::CbEvent_obj::__new();
		HX_STACK_LINE(250)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(252)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_WAKE,return )

::nape::callbacks::CbEvent CbEvent_obj::get_SLEEP( ){
	HX_STACK_PUSH("CbEvent::get_SLEEP","nape/callbacks/CbEvent.hx",259);
	HX_STACK_LINE(260)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP == null()))){
		HX_STACK_LINE(261)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(262)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = ::nape::callbacks::CbEvent_obj::__new();
		HX_STACK_LINE(263)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(265)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_SLEEP,return )

::nape::callbacks::CbEvent CbEvent_obj::get_BREAK( ){
	HX_STACK_PUSH("CbEvent::get_BREAK","nape/callbacks/CbEvent.hx",272);
	HX_STACK_LINE(273)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK == null()))){
		HX_STACK_LINE(274)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(275)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK = ::nape::callbacks::CbEvent_obj::__new();
		HX_STACK_LINE(276)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(278)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_BREAK,return )

::nape::callbacks::CbEvent CbEvent_obj::get_PRE( ){
	HX_STACK_PUSH("CbEvent::get_PRE","nape/callbacks/CbEvent.hx",286);
	HX_STACK_LINE(287)
	if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE == null()))){
		HX_STACK_LINE(288)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(289)
		::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = ::nape::callbacks::CbEvent_obj::__new();
		HX_STACK_LINE(290)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(292)
	return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbEvent_obj,get_PRE,return )


CbEvent_obj::CbEvent_obj()
{
}

void CbEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CbEvent);
	HX_MARK_END_CLASS();
}

void CbEvent_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic CbEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"END") ) { return get_END(); }
		if (HX_FIELD_EQ(inName,"PRE") ) { return get_PRE(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"WAKE") ) { return get_WAKE(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"BEGIN") ) { return get_BEGIN(); }
		if (HX_FIELD_EQ(inName,"SLEEP") ) { return get_SLEEP(); }
		if (HX_FIELD_EQ(inName,"BREAK") ) { return get_BREAK(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ONGOING") ) { return get_ONGOING(); }
		if (HX_FIELD_EQ(inName,"get_END") ) { return get_END_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PRE") ) { return get_PRE_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_WAKE") ) { return get_WAKE_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_BEGIN") ) { return get_BEGIN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SLEEP") ) { return get_SLEEP_dyn(); }
		if (HX_FIELD_EQ(inName,"get_BREAK") ) { return get_BREAK_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_ONGOING") ) { return get_ONGOING_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CbEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CbEvent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_BEGIN"),
	HX_CSTRING("get_ONGOING"),
	HX_CSTRING("get_END"),
	HX_CSTRING("get_WAKE"),
	HX_CSTRING("get_SLEEP"),
	HX_CSTRING("get_BREAK"),
	HX_CSTRING("get_PRE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CbEvent_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CbEvent_obj::__mClass,"__mClass");
};

Class CbEvent_obj::__mClass;

void CbEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.CbEvent"), hx::TCanCast< CbEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CbEvent_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
