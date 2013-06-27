#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void InteractionListener_obj::__construct(::nape::callbacks::CbEvent event,::nape::callbacks::InteractionType interactionType,Dynamic options1,Dynamic options2,Dynamic handler,hx::Null< int >  __o_precedence)
{
HX_STACK_PUSH("InteractionListener::new","nape/callbacks/InteractionListener.hx",207);
int precedence = __o_precedence.Default(0);
{
	HX_STACK_LINE(211)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(340)
	::zpp_nape::callbacks::ZPP_Listener_obj::internal = true;
	HX_STACK_LINE(342)
	super::__construct();
	HX_STACK_LINE(344)
	::zpp_nape::callbacks::ZPP_Listener_obj::internal = false;
	HX_STACK_LINE(347)
	if (((handler == null()))){
		HX_STACK_LINE(347)
		hx::Throw (HX_CSTRING("Error: InteractionListener::handler cannot be null"));
	}
	HX_STACK_LINE(350)
	if (((event == null()))){
		HX_STACK_LINE(350)
		hx::Throw (HX_CSTRING("Error: CbEvent cannot be null for InteractionListener"));
	}
	HX_STACK_LINE(354)
	int xevent = (int)-1;		HX_STACK_VAR(xevent,"xevent");
	struct _Function_1_1{
		inline static ::nape::callbacks::CbEvent Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",355);
			{
				HX_STACK_LINE(355)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
					HX_STACK_LINE(355)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(355)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = ::nape::callbacks::CbEvent_obj::__new();
					HX_STACK_LINE(355)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(355)
				return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
			}
			return null();
		}
	};
	HX_STACK_LINE(355)
	if (((event == _Function_1_1::Block()))){
		HX_STACK_LINE(355)
		xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_BEGIN;
	}
	else{
		struct _Function_2_1{
			inline static ::nape::callbacks::CbEvent Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",356);
				{
					HX_STACK_LINE(356)
					if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_END == null()))){
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = ::nape::callbacks::CbEvent_obj::__new();
						HX_STACK_LINE(356)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(356)
					return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
				}
				return null();
			}
		};
		HX_STACK_LINE(356)
		if (((event == _Function_2_1::Block()))){
			HX_STACK_LINE(356)
			xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_END;
		}
		else{
			struct _Function_3_1{
				inline static ::nape::callbacks::CbEvent Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",357);
					{
						HX_STACK_LINE(357)
						if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING == null()))){
							HX_STACK_LINE(357)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(357)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = ::nape::callbacks::CbEvent_obj::__new();
							HX_STACK_LINE(357)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(357)
						return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
					}
					return null();
				}
			};
			HX_STACK_LINE(357)
			if (((event == _Function_3_1::Block()))){
				HX_STACK_LINE(357)
				xevent = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_ONGOING;
			}
			else{
				HX_STACK_LINE(358)
				hx::Throw (((HX_CSTRING("Error: CbEvent '") + event->toString()) + HX_CSTRING("' is not a valid event type for InteractionListener")));
			}
		}
	}
	HX_STACK_LINE(363)
	this->zpp_inner_zn = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::__new(::zpp_nape::callbacks::ZPP_OptionType_obj::argument(options1),::zpp_nape::callbacks::ZPP_OptionType_obj::argument(options2),xevent,::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_INTERACTION);
	HX_STACK_LINE(364)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(365)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(366)
	this->zpp_inner_zn->outer_zni = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(367)
	this->zpp_inner->precedence = precedence;
	HX_STACK_LINE(368)
	this->zpp_inner_zn->handleri = handler;
	HX_STACK_LINE(369)
	{
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			if (((interactionType == null()))){
				HX_STACK_LINE(369)
				hx::Throw (HX_CSTRING("Error: Cannot set listener interaction type to null"));
			}
			struct _Function_3_1{
				inline static ::nape::callbacks::InteractionType Block( ::nape::callbacks::InteractionListener_obj *__this){
					HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",369);
					{
						HX_STACK_LINE(369)
						int ret = __this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
						struct _Function_4_1{
							inline static ::nape::callbacks::InteractionType Block( ){
								HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",369);
								{
									HX_STACK_LINE(369)
									if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
										HX_STACK_LINE(369)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(369)
										::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
										HX_STACK_LINE(369)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(369)
									return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static ::nape::callbacks::InteractionType Block( ){
								HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",369);
								{
									HX_STACK_LINE(369)
									if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
										HX_STACK_LINE(369)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(369)
										::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
										HX_STACK_LINE(369)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(369)
									return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
								}
								return null();
							}
						};
						struct _Function_4_3{
							inline static ::nape::callbacks::InteractionType Block( ){
								HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",369);
								{
									HX_STACK_LINE(369)
									if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
										HX_STACK_LINE(369)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(369)
										::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
										HX_STACK_LINE(369)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(369)
									return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static ::nape::callbacks::InteractionType Block( ){
								HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",369);
								{
									HX_STACK_LINE(369)
									if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
										HX_STACK_LINE(369)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(369)
										::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = ::nape::callbacks::InteractionType_obj::__new();
										HX_STACK_LINE(369)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(369)
									return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
								}
								return null();
							}
						};
						HX_STACK_LINE(369)
						return (  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))) ? ::nape::callbacks::InteractionType(_Function_4_1::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))) ? ::nape::callbacks::InteractionType(_Function_4_2::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))) ? ::nape::callbacks::InteractionType(_Function_4_3::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))) ? ::nape::callbacks::InteractionType(_Function_4_4::Block()) : ::nape::callbacks::InteractionType(null()) )) )) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(369)
			if (((_Function_3_1::Block(this) != interactionType))){
				struct _Function_4_1{
					inline static ::nape::callbacks::InteractionType Block( ){
						HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",369);
						{
							HX_STACK_LINE(369)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(369)
							return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static ::nape::callbacks::InteractionType Block( ){
						HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",369);
						{
							HX_STACK_LINE(369)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(369)
							return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
						}
						return null();
					}
				};
				struct _Function_4_3{
					inline static ::nape::callbacks::InteractionType Block( ){
						HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",369);
						{
							HX_STACK_LINE(369)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(369)
							return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
						}
						return null();
					}
				};
				HX_STACK_LINE(369)
				int xtype = (  (((interactionType == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION) : int((  (((interactionType == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR) : int((  (((interactionType == _Function_4_3::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID) : int(::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY) )) )) );		HX_STACK_VAR(xtype,"xtype");
				HX_STACK_LINE(369)
				this->zpp_inner_zn->itype = xtype;
			}
		}
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			int ret = this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(369)
			if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))){
				HX_STACK_LINE(369)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
					HX_STACK_LINE(369)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(369)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
					HX_STACK_LINE(369)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(369)
				::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			else{
				HX_STACK_LINE(369)
				if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))){
					HX_STACK_LINE(369)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(369)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				else{
					HX_STACK_LINE(369)
					if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))){
						HX_STACK_LINE(369)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(369)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					else{
						HX_STACK_LINE(369)
						if (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))){
							HX_STACK_LINE(369)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = ::nape::callbacks::InteractionType_obj::__new();
								HX_STACK_LINE(369)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(369)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
						}
						else{
							HX_STACK_LINE(369)
							Dynamic();
						}
					}
				}
			}
		}
	}
}
;
	return null();
}

InteractionListener_obj::~InteractionListener_obj() { }

Dynamic InteractionListener_obj::__CreateEmpty() { return  new InteractionListener_obj; }
hx::ObjectPtr< InteractionListener_obj > InteractionListener_obj::__new(::nape::callbacks::CbEvent event,::nape::callbacks::InteractionType interactionType,Dynamic options1,Dynamic options2,Dynamic handler,hx::Null< int >  __o_precedence)
{  hx::ObjectPtr< InteractionListener_obj > result = new InteractionListener_obj();
	result->__construct(event,interactionType,options1,options2,handler,__o_precedence);
	return result;}

Dynamic InteractionListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionListener_obj > result = new InteractionListener_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

bool InteractionListener_obj::set_allowSleepingCallbacks( bool allowSleepingCallbacks){
	HX_STACK_PUSH("InteractionListener::set_allowSleepingCallbacks","nape/callbacks/InteractionListener.hx",303);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowSleepingCallbacks,"allowSleepingCallbacks");
	HX_STACK_LINE(304)
	this->zpp_inner_zn->allowSleepingCallbacks = allowSleepingCallbacks;
	HX_STACK_LINE(307)
	return this->zpp_inner_zn->allowSleepingCallbacks;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_allowSleepingCallbacks,return )

bool InteractionListener_obj::get_allowSleepingCallbacks( ){
	HX_STACK_PUSH("InteractionListener::get_allowSleepingCallbacks","nape/callbacks/InteractionListener.hx",300);
	HX_STACK_THIS(this);
	HX_STACK_LINE(300)
	return this->zpp_inner_zn->allowSleepingCallbacks;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_allowSleepingCallbacks,return )

Dynamic InteractionListener_obj::set_handler( Dynamic handler){
	HX_STACK_PUSH("InteractionListener::set_handler","nape/callbacks/InteractionListener.hx",279);
	HX_STACK_THIS(this);
	HX_STACK_ARG(handler,"handler");
	HX_STACK_LINE(280)
	{
		HX_STACK_LINE(282)
		if (((handler == null()))){
			HX_STACK_LINE(282)
			hx::Throw (HX_CSTRING("Error: InteractionListener::handler cannot be null"));
		}
		HX_STACK_LINE(286)
		this->zpp_inner_zn->handleri = handler;
	}
	HX_STACK_LINE(288)
	return this->zpp_inner_zn->handleri;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_handler,return )

Dynamic InteractionListener_obj::get_handler( ){
	HX_STACK_PUSH("InteractionListener::get_handler","nape/callbacks/InteractionListener.hx",276);
	HX_STACK_THIS(this);
	HX_STACK_LINE(276)
	return this->zpp_inner_zn->handleri;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_handler,return )

::nape::callbacks::InteractionType InteractionListener_obj::set_interactionType( ::nape::callbacks::InteractionType interactionType){
	HX_STACK_PUSH("InteractionListener::set_interactionType","nape/callbacks/InteractionListener.hx",257);
	HX_STACK_THIS(this);
	HX_STACK_ARG(interactionType,"interactionType");
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(260)
		if (((interactionType == null()))){
			HX_STACK_LINE(260)
			hx::Throw (HX_CSTRING("Error: Cannot set listener interaction type to null"));
		}
		struct _Function_2_1{
			inline static ::nape::callbacks::InteractionType Block( ::nape::callbacks::InteractionListener_obj *__this){
				HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",264);
				{
					HX_STACK_LINE(264)
					int ret = __this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
					struct _Function_3_1{
						inline static ::nape::callbacks::InteractionType Block( ){
							HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",264);
							{
								HX_STACK_LINE(264)
								if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
									HX_STACK_LINE(264)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(264)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
									HX_STACK_LINE(264)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(264)
								return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static ::nape::callbacks::InteractionType Block( ){
							HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",264);
							{
								HX_STACK_LINE(264)
								if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
									HX_STACK_LINE(264)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(264)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
									HX_STACK_LINE(264)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(264)
								return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
							}
							return null();
						}
					};
					struct _Function_3_3{
						inline static ::nape::callbacks::InteractionType Block( ){
							HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",264);
							{
								HX_STACK_LINE(264)
								if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
									HX_STACK_LINE(264)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(264)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
									HX_STACK_LINE(264)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(264)
								return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
							}
							return null();
						}
					};
					struct _Function_3_4{
						inline static ::nape::callbacks::InteractionType Block( ){
							HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",264);
							{
								HX_STACK_LINE(264)
								if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
									HX_STACK_LINE(264)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(264)
									::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = ::nape::callbacks::InteractionType_obj::__new();
									HX_STACK_LINE(264)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(264)
								return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
							}
							return null();
						}
					};
					HX_STACK_LINE(264)
					return (  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))) ? ::nape::callbacks::InteractionType(_Function_3_1::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))) ? ::nape::callbacks::InteractionType(_Function_3_2::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))) ? ::nape::callbacks::InteractionType(_Function_3_3::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))) ? ::nape::callbacks::InteractionType(_Function_3_4::Block()) : ::nape::callbacks::InteractionType(null()) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(264)
		if (((_Function_2_1::Block(this) != interactionType))){
			struct _Function_3_1{
				inline static ::nape::callbacks::InteractionType Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",265);
					{
						HX_STACK_LINE(265)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(265)
						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static ::nape::callbacks::InteractionType Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",265);
					{
						HX_STACK_LINE(265)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(265)
						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
					}
					return null();
				}
			};
			struct _Function_3_3{
				inline static ::nape::callbacks::InteractionType Block( ){
					HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",265);
					{
						HX_STACK_LINE(265)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(265)
						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
					}
					return null();
				}
			};
			HX_STACK_LINE(265)
			int xtype = (  (((interactionType == _Function_3_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION) : int((  (((interactionType == _Function_3_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR) : int((  (((interactionType == _Function_3_3::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID) : int(::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY) )) )) );		HX_STACK_VAR(xtype,"xtype");
			HX_STACK_LINE(266)
			this->zpp_inner_zn->itype = xtype;
		}
	}
	struct _Function_1_1{
		inline static ::nape::callbacks::InteractionType Block( ::nape::callbacks::InteractionListener_obj *__this){
			HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",269);
			{
				HX_STACK_LINE(269)
				int ret = __this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
				struct _Function_2_1{
					inline static ::nape::callbacks::InteractionType Block( ){
						HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",269);
						{
							HX_STACK_LINE(269)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
								HX_STACK_LINE(269)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(269)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
								HX_STACK_LINE(269)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(269)
							return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::nape::callbacks::InteractionType Block( ){
						HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",269);
						{
							HX_STACK_LINE(269)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
								HX_STACK_LINE(269)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(269)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
								HX_STACK_LINE(269)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(269)
							return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static ::nape::callbacks::InteractionType Block( ){
						HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",269);
						{
							HX_STACK_LINE(269)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
								HX_STACK_LINE(269)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(269)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
								HX_STACK_LINE(269)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(269)
							return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static ::nape::callbacks::InteractionType Block( ){
						HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",269);
						{
							HX_STACK_LINE(269)
							if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
								HX_STACK_LINE(269)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(269)
								::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = ::nape::callbacks::InteractionType_obj::__new();
								HX_STACK_LINE(269)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(269)
							return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
						}
						return null();
					}
				};
				HX_STACK_LINE(269)
				return (  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))) ? ::nape::callbacks::InteractionType(_Function_2_1::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))) ? ::nape::callbacks::InteractionType(_Function_2_2::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))) ? ::nape::callbacks::InteractionType(_Function_2_3::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))) ? ::nape::callbacks::InteractionType(_Function_2_4::Block()) : ::nape::callbacks::InteractionType(null()) )) )) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(269)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_interactionType,return )

::nape::callbacks::InteractionType InteractionListener_obj::get_interactionType( ){
	HX_STACK_PUSH("InteractionListener::get_interactionType","nape/callbacks/InteractionListener.hx",249);
	HX_STACK_THIS(this);
	HX_STACK_LINE(250)
	int ret = this->zpp_inner_zn->itype;		HX_STACK_VAR(ret,"ret");
	struct _Function_1_1{
		inline static ::nape::callbacks::InteractionType Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",251);
			{
				HX_STACK_LINE(251)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
					HX_STACK_LINE(251)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(251)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
					HX_STACK_LINE(251)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(251)
				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::callbacks::InteractionType Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",252);
			{
				HX_STACK_LINE(252)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
					HX_STACK_LINE(252)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(252)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
					HX_STACK_LINE(252)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(252)
				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::callbacks::InteractionType Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",253);
			{
				HX_STACK_LINE(253)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID == null()))){
					HX_STACK_LINE(253)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(253)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID = ::nape::callbacks::InteractionType_obj::__new();
					HX_STACK_LINE(253)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(253)
				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_FLUID;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static ::nape::callbacks::InteractionType Block( ){
			HX_STACK_PUSH("*::closure","nape/callbacks/InteractionListener.hx",254);
			{
				HX_STACK_LINE(254)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
					HX_STACK_LINE(254)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(254)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = ::nape::callbacks::InteractionType_obj::__new();
					HX_STACK_LINE(254)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(254)
				return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
			}
			return null();
		}
	};
	HX_STACK_LINE(251)
	return (  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_COLLISION))) ? ::nape::callbacks::InteractionType(_Function_1_1::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_SENSOR))) ? ::nape::callbacks::InteractionType(_Function_1_2::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_FLUID))) ? ::nape::callbacks::InteractionType(_Function_1_3::Block()) : ::nape::callbacks::InteractionType((  (((ret == ::zpp_nape::util::ZPP_Flags_obj::id_InteractionType_ANY))) ? ::nape::callbacks::InteractionType(_Function_1_4::Block()) : ::nape::callbacks::InteractionType(null()) )) )) )) );
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_interactionType,return )

::nape::callbacks::OptionType InteractionListener_obj::set_options2( ::nape::callbacks::OptionType options2){
	HX_STACK_PUSH("InteractionListener::set_options2","nape/callbacks/InteractionListener.hx",234);
	HX_STACK_THIS(this);
	HX_STACK_ARG(options2,"options2");
	HX_STACK_LINE(235)
	this->zpp_inner_zn->options2->set(options2->zpp_inner);
	HX_STACK_LINE(238)
	return this->zpp_inner_zn->options2->outer;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_options2,return )

::nape::callbacks::OptionType InteractionListener_obj::get_options2( ){
	HX_STACK_PUSH("InteractionListener::get_options2","nape/callbacks/InteractionListener.hx",231);
	HX_STACK_THIS(this);
	HX_STACK_LINE(231)
	return this->zpp_inner_zn->options2->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_options2,return )

::nape::callbacks::OptionType InteractionListener_obj::set_options1( ::nape::callbacks::OptionType options1){
	HX_STACK_PUSH("InteractionListener::set_options1","nape/callbacks/InteractionListener.hx",220);
	HX_STACK_THIS(this);
	HX_STACK_ARG(options1,"options1");
	HX_STACK_LINE(221)
	this->zpp_inner_zn->options1->set(options1->zpp_inner);
	HX_STACK_LINE(224)
	return this->zpp_inner_zn->options1->outer;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionListener_obj,set_options1,return )

::nape::callbacks::OptionType InteractionListener_obj::get_options1( ){
	HX_STACK_PUSH("InteractionListener::get_options1","nape/callbacks/InteractionListener.hx",217);
	HX_STACK_THIS(this);
	HX_STACK_LINE(217)
	return this->zpp_inner_zn->options1->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionListener_obj,get_options1,return )


InteractionListener_obj::InteractionListener_obj()
{
}

void InteractionListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractionListener);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InteractionListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic InteractionListener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return get_handler(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options2") ) { return get_options2(); }
		if (HX_FIELD_EQ(inName,"options1") ) { return get_options1(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_handler") ) { return set_handler_dyn(); }
		if (HX_FIELD_EQ(inName,"get_handler") ) { return get_handler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_options2") ) { return set_options2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_options2") ) { return get_options2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_options1") ) { return set_options1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_options1") ) { return get_options1_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interactionType") ) { return get_interactionType(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_interactionType") ) { return set_interactionType_dyn(); }
		if (HX_FIELD_EQ(inName,"get_interactionType") ) { return get_interactionType_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { return get_allowSleepingCallbacks(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"set_allowSleepingCallbacks") ) { return set_allowSleepingCallbacks_dyn(); }
		if (HX_FIELD_EQ(inName,"get_allowSleepingCallbacks") ) { return get_allowSleepingCallbacks_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractionListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return set_handler(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"options2") ) { return set_options2(inValue); }
		if (HX_FIELD_EQ(inName,"options1") ) { return set_options1(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::callbacks::ZPP_InteractionListener >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"interactionType") ) { return set_interactionType(inValue); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { return set_allowSleepingCallbacks(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractionListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("allowSleepingCallbacks"));
	outFields->push(HX_CSTRING("interactionType"));
	outFields->push(HX_CSTRING("options2"));
	outFields->push(HX_CSTRING("options1"));
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_allowSleepingCallbacks"),
	HX_CSTRING("get_allowSleepingCallbacks"),
	HX_CSTRING("set_handler"),
	HX_CSTRING("get_handler"),
	HX_CSTRING("set_interactionType"),
	HX_CSTRING("get_interactionType"),
	HX_CSTRING("set_options2"),
	HX_CSTRING("get_options2"),
	HX_CSTRING("set_options1"),
	HX_CSTRING("get_options1"),
	HX_CSTRING("zpp_inner_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionListener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionListener_obj::__mClass,"__mClass");
};

Class InteractionListener_obj::__mClass;

void InteractionListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.InteractionListener"), hx::TCanCast< InteractionListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void InteractionListener_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
