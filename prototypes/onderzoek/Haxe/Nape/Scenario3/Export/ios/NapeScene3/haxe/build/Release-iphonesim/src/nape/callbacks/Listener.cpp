#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyListener
#include <nape/callbacks/BodyListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_ConstraintListener
#include <nape/callbacks/ConstraintListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerType
#include <nape/callbacks/ListenerType.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreListener
#include <nape/callbacks/PreListener.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ListenerList
#include <zpp_nape/util/ZPP_ListenerList.h>
#endif
namespace nape{
namespace callbacks{

Void Listener_obj::__construct()
{
HX_STACK_PUSH("Listener::new","nape/callbacks/Listener.hx",177);
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(237)
	if ((!(::zpp_nape::callbacks::ZPP_Listener_obj::internal))){
		HX_STACK_LINE(239)
		hx::Throw (HX_CSTRING("Error: Cannot instantiate Listener derp!"));
	}
}
;
	return null();
}

Listener_obj::~Listener_obj() { }

Dynamic Listener_obj::__CreateEmpty() { return  new Listener_obj; }
hx::ObjectPtr< Listener_obj > Listener_obj::__new()
{  hx::ObjectPtr< Listener_obj > result = new Listener_obj();
	result->__construct();
	return result;}

Dynamic Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Listener_obj > result = new Listener_obj();
	result->__construct();
	return result;}

::String Listener_obj::toString( ){
	HX_STACK_PUSH("Listener::toString","nape/callbacks/Listener.hx",276);
	HX_STACK_THIS(this);
	HX_STACK_LINE(277)
	::String event = Array_obj< ::String >::__new().Add(HX_CSTRING("BEGIN")).Add(HX_CSTRING("END")).Add(HX_CSTRING("WAKE")).Add(HX_CSTRING("SLEEP")).Add(HX_CSTRING("BREAK")).Add(HX_CSTRING("PRE")).Add(HX_CSTRING("ONGOING"))->__get(this->zpp_inner->event);		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(278)
	if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_BODY))){
		HX_STACK_LINE(279)
		::zpp_nape::callbacks::ZPP_BodyListener body = this->zpp_inner->body;		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(280)
		return ((((HX_CSTRING("BodyListener{") + event) + HX_CSTRING("::")) + ::Std_obj::string(body->outer_zn->zpp_inner_zn->options->outer)) + HX_CSTRING("}"));
	}
	else{
		HX_STACK_LINE(282)
		if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_CONSTRAINT))){
			HX_STACK_LINE(283)
			::zpp_nape::callbacks::ZPP_ConstraintListener con = this->zpp_inner->constraint;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(284)
			return ((((HX_CSTRING("ConstraintListener{") + event) + HX_CSTRING("::")) + ::Std_obj::string(con->outer_zn->zpp_inner_zn->options->outer)) + HX_CSTRING("}"));
		}
		else{
			HX_STACK_LINE(287)
			::zpp_nape::callbacks::ZPP_InteractionListener con = this->zpp_inner->interaction;		HX_STACK_VAR(con,"con");
			struct _Function_3_1{
				inline static ::String Block( ::zpp_nape::callbacks::ZPP_InteractionListener &con){
					HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",288);
					{
						HX_STACK_LINE(288)
						int _switch_1 = (con->itype);
						if (  ( _switch_1==::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION)){
							HX_STACK_LINE(289)
							return HX_CSTRING("COLLISION");
						}
						else if (  ( _switch_1==::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR)){
							HX_STACK_LINE(290)
							return HX_CSTRING("SENSOR");
						}
						else if (  ( _switch_1==::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID)){
							HX_STACK_LINE(291)
							return HX_CSTRING("FLUID");
						}
						else  {
							HX_STACK_LINE(292)
							return HX_CSTRING("ALL");
						}
;
;
					}
					return null();
				}
			};
			HX_STACK_LINE(288)
			::String itype = _Function_3_1::Block(con);		HX_STACK_VAR(itype,"itype");
			HX_STACK_LINE(294)
			return ((((  (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_INTERACTION))) ? ::String(((((((((HX_CSTRING("InteractionListener{") + event) + HX_CSTRING("#")) + itype) + HX_CSTRING("::")) + ::Std_obj::string(con->outer_zni->zpp_inner_zn->options1->outer)) + HX_CSTRING(":")) + ::Std_obj::string(con->outer_zni->zpp_inner_zn->options2->outer)) + HX_CSTRING("}"))) : ::String(((((((HX_CSTRING("PreListener{") + itype) + HX_CSTRING("::")) + ::Std_obj::string(con->outer_znp->zpp_inner_zn->options1->outer)) + HX_CSTRING(":")) + ::Std_obj::string(con->outer_znp->zpp_inner_zn->options2->outer)) + HX_CSTRING("}"))) )) + HX_CSTRING(" precedence=")) + this->zpp_inner->precedence);
		}
	}
	HX_STACK_LINE(278)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,toString,return )

::nape::space::Space Listener_obj::set_space( ::nape::space::Space space){
	HX_STACK_PUSH("Listener::set_space","nape/callbacks/Listener.hx",257);
	HX_STACK_THIS(this);
	HX_STACK_ARG(space,"space");
	HX_STACK_LINE(258)
	if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != space))){
		HX_STACK_LINE(260)
		if (((this->zpp_inner->space != null()))){
			HX_STACK_LINE(260)
			this->zpp_inner->space->outer->zpp_inner->wrap_listeners->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(263)
		if (((space != null()))){
			HX_STACK_LINE(264)
			::nape::callbacks::ListenerList _this = space->zpp_inner->wrap_listeners;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(264)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(264)
				_this->push(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(264)
				_this->unshift(hx::ObjectPtr<OBJ_>(this));
			}
		}
		else{
			HX_STACK_LINE(266)
			this->zpp_inner->space = null();
		}
	}
	HX_STACK_LINE(271)
	return (  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,set_space,return )

::nape::space::Space Listener_obj::get_space( ){
	HX_STACK_PUSH("Listener::get_space","nape/callbacks/Listener.hx",254);
	HX_STACK_THIS(this);
	HX_STACK_LINE(254)
	return (  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_space,return )

int Listener_obj::set_precedence( int precedence){
	HX_STACK_PUSH("Listener::set_precedence","nape/callbacks/Listener.hx",225);
	HX_STACK_THIS(this);
	HX_STACK_ARG(precedence,"precedence");
	HX_STACK_LINE(226)
	if (((this->zpp_inner->precedence != precedence))){
		HX_STACK_LINE(228)
		this->zpp_inner->precedence = precedence;
		HX_STACK_LINE(229)
		this->zpp_inner->invalidate_precedence();
	}
	HX_STACK_LINE(232)
	return this->zpp_inner->precedence;
}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,set_precedence,return )

int Listener_obj::get_precedence( ){
	HX_STACK_PUSH("Listener::get_precedence","nape/callbacks/Listener.hx",222);
	HX_STACK_THIS(this);
	HX_STACK_LINE(222)
	return this->zpp_inner->precedence;
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_precedence,return )

::nape::callbacks::CbEvent Listener_obj::set_event( ::nape::callbacks::CbEvent event){
	HX_STACK_PUSH("Listener::set_event","nape/callbacks/Listener.hx",198);
	HX_STACK_THIS(this);
	HX_STACK_ARG(event,"event");
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(201)
		if (((event == null()))){
			HX_STACK_LINE(201)
			hx::Throw (HX_CSTRING("Error: Cannot set listener event type to null"));
		}
		struct _Function_2_1{
			inline static ::nape::callbacks::CbEvent Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",205);
				{
					HX_STACK_LINE(205)
					if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = ::nape::callbacks::CbEvent_obj::__new();
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(205)
					return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static ::nape::callbacks::CbEvent Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",205);
				{
					HX_STACK_LINE(205)
					if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = ::nape::callbacks::CbEvent_obj::__new();
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(205)
					return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static ::nape::callbacks::CbEvent Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",205);
				{
					HX_STACK_LINE(205)
					if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE == null()))){
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = ::nape::callbacks::CbEvent_obj::__new();
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(205)
					return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static ::nape::callbacks::CbEvent Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",205);
				{
					HX_STACK_LINE(205)
					if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP == null()))){
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = ::nape::callbacks::CbEvent_obj::__new();
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(205)
					return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
				}
				return null();
			}
		};
		struct _Function_2_5{
			inline static ::nape::callbacks::CbEvent Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",205);
				{
					HX_STACK_LINE(205)
					if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK == null()))){
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK = ::nape::callbacks::CbEvent_obj::__new();
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(205)
					return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;
				}
				return null();
			}
		};
		struct _Function_2_6{
			inline static ::nape::callbacks::CbEvent Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",205);
				{
					HX_STACK_LINE(205)
					if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE == null()))){
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = ::nape::callbacks::CbEvent_obj::__new();
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(205)
					return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
				}
				return null();
			}
		};
		struct _Function_2_7{
			inline static ::nape::callbacks::CbEvent Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",205);
				{
					HX_STACK_LINE(205)
					if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = ::nape::callbacks::CbEvent_obj::__new();
						HX_STACK_LINE(205)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(205)
					return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
				}
				return null();
			}
		};
		HX_STACK_LINE(205)
		if (((Array_obj< ::nape::callbacks::CbEvent >::__new().Add(_Function_2_1::Block()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block()).Add(_Function_2_5::Block()).Add(_Function_2_6::Block()).Add(_Function_2_7::Block())->__get(this->zpp_inner->event) != event))){
			struct _Function_3_1{
				inline static ::nape::callbacks::CbEvent Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",206);
					{
						HX_STACK_LINE(206)
						if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = ::nape::callbacks::CbEvent_obj::__new();
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(206)
						return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static ::nape::callbacks::CbEvent Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",206);
					{
						HX_STACK_LINE(206)
						if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = ::nape::callbacks::CbEvent_obj::__new();
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(206)
						return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
					}
					return null();
				}
			};
			struct _Function_3_3{
				inline static ::nape::callbacks::CbEvent Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",206);
					{
						HX_STACK_LINE(206)
						if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = ::nape::callbacks::CbEvent_obj::__new();
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(206)
						return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
					}
					return null();
				}
			};
			struct _Function_3_4{
				inline static ::nape::callbacks::CbEvent Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",206);
					{
						HX_STACK_LINE(206)
						if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP == null()))){
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = ::nape::callbacks::CbEvent_obj::__new();
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(206)
						return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
					}
					return null();
				}
			};
			struct _Function_3_5{
				inline static ::nape::callbacks::CbEvent Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",206);
					{
						HX_STACK_LINE(206)
						if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE == null()))){
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = ::nape::callbacks::CbEvent_obj::__new();
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(206)
						return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
					}
					return null();
				}
			};
			struct _Function_3_6{
				inline static ::nape::callbacks::CbEvent Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",206);
					{
						HX_STACK_LINE(206)
						if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE == null()))){
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = ::nape::callbacks::CbEvent_obj::__new();
							HX_STACK_LINE(206)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(206)
						return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
					}
					return null();
				}
			};
			HX_STACK_LINE(206)
			int xevent = (  (((event == _Function_3_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_BEGIN) : int((  (((event == _Function_3_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_ONGOING) : int((  (((event == _Function_3_3::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_END) : int((  (((event == _Function_3_4::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_SLEEP) : int((  (((event == _Function_3_5::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_WAKE) : int((  (((event == _Function_3_6::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_PRE) : int(::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_BREAK) )) )) )) )) )) );		HX_STACK_VAR(xevent,"xevent");
			HX_STACK_LINE(207)
			this->zpp_inner->swapEvent(xevent);
		}
	}
	struct _Function_1_1{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",210);
			{
				HX_STACK_LINE(210)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(210)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",210);
			{
				HX_STACK_LINE(210)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(210)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",210);
			{
				HX_STACK_LINE(210)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE == null()))){
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(210)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",210);
			{
				HX_STACK_LINE(210)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP == null()))){
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(210)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",210);
			{
				HX_STACK_LINE(210)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK == null()))){
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(210)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",210);
			{
				HX_STACK_LINE(210)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE == null()))){
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(210)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
			}
			return null();
		}
	};
	struct _Function_1_7{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",210);
			{
				HX_STACK_LINE(210)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(210)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(210)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
			}
			return null();
		}
	};
	HX_STACK_LINE(210)
	return Array_obj< ::nape::callbacks::CbEvent >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block()).Add(_Function_1_4::Block()).Add(_Function_1_5::Block()).Add(_Function_1_6::Block()).Add(_Function_1_7::Block())->__get(this->zpp_inner->event);
}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,set_event,return )

::nape::callbacks::CbEvent Listener_obj::get_event( ){
	HX_STACK_PUSH("Listener::get_event","nape/callbacks/Listener.hx",195);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",196);
			{
				HX_STACK_LINE(196)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(196)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",196);
			{
				HX_STACK_LINE(196)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(196)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",196);
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
	struct _Function_1_4{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",196);
			{
				HX_STACK_LINE(196)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP == null()))){
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(196)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",196);
			{
				HX_STACK_LINE(196)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK == null()))){
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(196)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",196);
			{
				HX_STACK_LINE(196)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE == null()))){
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(196)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
			}
			return null();
		}
	};
	struct _Function_1_7{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",196);
			{
				HX_STACK_LINE(196)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(196)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(196)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
			}
			return null();
		}
	};
	HX_STACK_LINE(195)
	return Array_obj< ::nape::callbacks::CbEvent >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block()).Add(_Function_1_4::Block()).Add(_Function_1_5::Block()).Add(_Function_1_6::Block()).Add(_Function_1_7::Block())->__get(this->zpp_inner->event);
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_event,return )

::nape::callbacks::ListenerType Listener_obj::get_type( ){
	HX_STACK_PUSH("Listener::get_type","nape/callbacks/Listener.hx",187);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::callbacks::ListenerType Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",188);
			{
				HX_STACK_LINE(188)
				if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY == null()))){
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY = ::nape::callbacks::ListenerType_obj::__new();
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(188)
				return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::callbacks::ListenerType Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",188);
			{
				HX_STACK_LINE(188)
				if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT == null()))){
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT = ::nape::callbacks::ListenerType_obj::__new();
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(188)
				return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::callbacks::ListenerType Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",188);
			{
				HX_STACK_LINE(188)
				if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION == null()))){
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION = ::nape::callbacks::ListenerType_obj::__new();
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(188)
				return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static ::nape::callbacks::ListenerType Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/Listener.hx",188);
			{
				HX_STACK_LINE(188)
				if (((::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE == null()))){
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE = ::nape::callbacks::ListenerType_obj::__new();
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(188)
				return ::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE;
			}
			return null();
		}
	};
	HX_STACK_LINE(187)
	return Array_obj< ::nape::callbacks::ListenerType >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block()).Add(_Function_1_4::Block())->__get(this->zpp_inner->type);
}


HX_DEFINE_DYNAMIC_FUNC0(Listener_obj,get_type,return )


Listener_obj::Listener_obj()
{
}

void Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Listener);
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(precedence,"precedence");
	HX_MARK_MEMBER_NAME(event,"event");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(precedence,"precedence");
	HX_VISIT_MEMBER_NAME(event,"event");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Listener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return inCallProp ? get_type() : type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return inCallProp ? get_space() : space; }
		if (HX_FIELD_EQ(inName,"event") ) { return inCallProp ? get_event() : event; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"set_event") ) { return set_event_dyn(); }
		if (HX_FIELD_EQ(inName,"get_event") ) { return get_event_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"precedence") ) { return inCallProp ? get_precedence() : precedence; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_precedence") ) { return set_precedence_dyn(); }
		if (HX_FIELD_EQ(inName,"get_precedence") ) { return get_precedence_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::nape::callbacks::ListenerType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp) return set_space(inValue);space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"event") ) { if (inCallProp) return set_event(inValue);event=inValue.Cast< ::nape::callbacks::CbEvent >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::callbacks::ZPP_Listener >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"precedence") ) { if (inCallProp) return set_precedence(inValue);precedence=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("precedence"));
	outFields->push(HX_CSTRING("event"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("set_space"),
	HX_CSTRING("get_space"),
	HX_CSTRING("space"),
	HX_CSTRING("set_precedence"),
	HX_CSTRING("get_precedence"),
	HX_CSTRING("precedence"),
	HX_CSTRING("set_event"),
	HX_CSTRING("get_event"),
	HX_CSTRING("event"),
	HX_CSTRING("get_type"),
	HX_CSTRING("type"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

Class Listener_obj::__mClass;

void Listener_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.Listener"), hx::TCanCast< Listener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Listener_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
