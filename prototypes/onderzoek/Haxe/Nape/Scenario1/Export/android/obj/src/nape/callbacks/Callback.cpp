#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void Callback_obj::__construct()
{
HX_STACK_PUSH("Callback::new","nape/callbacks/Callback.hx",180);
{
	HX_STACK_LINE(184)
	this->zpp_inner = null();
	HX_STACK_LINE(204)
	if ((!(::zpp_nape::callbacks::ZPP_Callback_obj::internal))){
		HX_STACK_LINE(206)
		hx::Throw (HX_CSTRING("Error: Callback cannot be instantiated derp!"));
	}
}
;
	return null();
}

Callback_obj::~Callback_obj() { }

Dynamic Callback_obj::__CreateEmpty() { return  new Callback_obj; }
hx::ObjectPtr< Callback_obj > Callback_obj::__new()
{  hx::ObjectPtr< Callback_obj > result = new Callback_obj();
	result->__construct();
	return result;}

Dynamic Callback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Callback_obj > result = new Callback_obj();
	result->__construct();
	return result;}

::String Callback_obj::toString( ){
	HX_STACK_PUSH("Callback::toString","nape/callbacks/Callback.hx",214);
	HX_STACK_THIS(this);
	HX_STACK_LINE(214)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(Callback_obj,toString,return )

::nape::callbacks::Listener Callback_obj::get_listener( ){
	HX_STACK_PUSH("Callback::get_listener","nape/callbacks/Callback.hx",198);
	HX_STACK_THIS(this);
	HX_STACK_LINE(198)
	return this->zpp_inner->listener->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(Callback_obj,get_listener,return )

::nape::callbacks::CbEvent Callback_obj::get_event( ){
	HX_STACK_PUSH("Callback::get_event","nape/callbacks/Callback.hx",190);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Callback.hx",191);
			{
				HX_STACK_LINE(191)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(191)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Callback.hx",191);
			{
				HX_STACK_LINE(191)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(191)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Callback.hx",191);
			{
				HX_STACK_LINE(191)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE == null()))){
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(191)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Callback.hx",191);
			{
				HX_STACK_LINE(191)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP == null()))){
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(191)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Callback.hx",191);
			{
				HX_STACK_LINE(191)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK == null()))){
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(191)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Callback.hx",191);
			{
				HX_STACK_LINE(191)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE == null()))){
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(191)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
			}
			return null();
		}
	};
	struct _Function_1_7{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Callback.hx",191);
			{
				HX_STACK_LINE(191)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(191)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(191)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
			}
			return null();
		}
	};
	HX_STACK_LINE(190)
	return Array_obj< ::nape::callbacks::CbEvent >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block()).Add(_Function_1_4::Block()).Add(_Function_1_5::Block()).Add(_Function_1_6::Block()).Add(_Function_1_7::Block())->__get(this->zpp_inner->event);
}


HX_DEFINE_DYNAMIC_FUNC0(Callback_obj,get_event,return )


Callback_obj::Callback_obj()
{
}

void Callback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Callback);
	HX_MARK_MEMBER_NAME(listener,"listener");
	HX_MARK_MEMBER_NAME(event,"event");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Callback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listener,"listener");
	HX_VISIT_MEMBER_NAME(event,"event");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Callback_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { return inCallProp ? get_event() : event; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"listener") ) { return inCallProp ? get_listener() : listener; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_event") ) { return get_event_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_listener") ) { return get_listener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Callback_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { event=inValue.Cast< ::nape::callbacks::CbEvent >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< ::nape::callbacks::Listener >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::callbacks::ZPP_Callback >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Callback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("listener"));
	outFields->push(HX_CSTRING("event"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("get_listener"),
	HX_CSTRING("listener"),
	HX_CSTRING("get_event"),
	HX_CSTRING("event"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Callback_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Callback_obj::__mClass,"__mClass");
};

Class Callback_obj::__mClass;

void Callback_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.Callback"), hx::TCanCast< Callback_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Callback_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
