#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_BodyCallback
#include <nape/callbacks/BodyCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyListener
#include <nape/callbacks/BodyListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_BodyListener_obj::__construct(::nape::callbacks::OptionType options,int event,Dynamic handler)
{
HX_STACK_PUSH("ZPP_BodyListener::new","zpp_nape/callbacks/Listener.hx",200);
{
	HX_STACK_LINE(203)
	this->handler = null();
	HX_STACK_LINE(202)
	this->options = null();
	HX_STACK_LINE(201)
	this->outer_zn = null();
	HX_STACK_LINE(212)
	super::__construct();
	HX_STACK_LINE(213)
	this->event = event;
	HX_STACK_LINE(214)
	this->handler = handler;
	HX_STACK_LINE(215)
	this->body = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(216)
	this->type = ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_BODY;
	HX_STACK_LINE(217)
	this->options = options->zpp_inner;
}
;
	return null();
}

ZPP_BodyListener_obj::~ZPP_BodyListener_obj() { }

Dynamic ZPP_BodyListener_obj::__CreateEmpty() { return  new ZPP_BodyListener_obj; }
hx::ObjectPtr< ZPP_BodyListener_obj > ZPP_BodyListener_obj::__new(::nape::callbacks::OptionType options,int event,Dynamic handler)
{  hx::ObjectPtr< ZPP_BodyListener_obj > result = new ZPP_BodyListener_obj();
	result->__construct(options,event,handler);
	return result;}

Dynamic ZPP_BodyListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_BodyListener_obj > result = new ZPP_BodyListener_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ZPP_BodyListener_obj::swapEvent( int newev){
{
		HX_STACK_PUSH("ZPP_BodyListener::swapEvent","zpp_nape/callbacks/Listener.hx",256);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newev,"newev");
		HX_STACK_LINE(258)
		if (((bool((newev != ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_WAKE)) && bool((newev != ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_SLEEP))))){
			HX_STACK_LINE(258)
			hx::Throw (HX_CSTRING("Error: BodyListener event must be either WAKE or SLEEP only"));
		}
		HX_STACK_LINE(262)
		this->removedFromSpace();
		HX_STACK_LINE(263)
		this->event = newev;
		HX_STACK_LINE(264)
		this->addedToSpace();
	}
return null();
}


Void ZPP_BodyListener_obj::invalidate_precedence( ){
{
		HX_STACK_PUSH("ZPP_BodyListener::invalidate_precedence","zpp_nape/callbacks/Listener.hx",250);
		HX_STACK_THIS(this);
		HX_STACK_LINE(250)
		if (((this->space != null()))){
			HX_STACK_LINE(252)
			this->removedFromSpace();
			HX_STACK_LINE(253)
			this->addedToSpace();
		}
	}
return null();
}


Void ZPP_BodyListener_obj::cbtype_change( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
{
		HX_STACK_PUSH("ZPP_BodyListener::cbtype_change","zpp_nape/callbacks/Listener.hx",245);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cb,"cb");
		HX_STACK_ARG(included,"included");
		HX_STACK_ARG(added,"added");
		HX_STACK_LINE(246)
		this->removedFromSpace();
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			::zpp_nape::callbacks::ZPP_OptionType _this = this->options;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(247)
			if ((included)){
				HX_STACK_LINE(247)
				if ((added)){
					HX_STACK_LINE(247)
					::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(247)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = _this->includes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(247)
						while(((cx_ite != null()))){
							HX_STACK_LINE(247)
							::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(247)
							{
								HX_STACK_LINE(247)
								if (((cb->id < j->id))){
									HX_STACK_LINE(247)
									break;
								}
								HX_STACK_LINE(247)
								pre = cx_ite;
							}
							HX_STACK_LINE(247)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(247)
						::zpp_nape::util::ZNPList_ZPP_CbType _this1 = _this->includes;		HX_STACK_VAR(_this1,"_this1");
						struct _Function_5_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &cb){
								HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",247);
								{
									HX_STACK_LINE(247)
									::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(247)
									{
										HX_STACK_LINE(247)
										if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
											HX_STACK_LINE(247)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
										}
										else{
											HX_STACK_LINE(247)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
											HX_STACK_LINE(247)
											::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
											HX_STACK_LINE(247)
											ret->next = null();
										}
										HX_STACK_LINE(247)
										Dynamic();
									}
									HX_STACK_LINE(247)
									ret->elt = cb;
									HX_STACK_LINE(247)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(247)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_5_1::Block(cb);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(247)
						if (((pre == null()))){
							HX_STACK_LINE(247)
							temp->next = _this1->head;
							HX_STACK_LINE(247)
							_this1->head = temp;
						}
						else{
							HX_STACK_LINE(247)
							temp->next = pre->next;
							HX_STACK_LINE(247)
							pre->next = temp;
						}
						HX_STACK_LINE(247)
						_this1->pushmod = _this1->modified = true;
						HX_STACK_LINE(247)
						(_this1->length)++;
						HX_STACK_LINE(247)
						temp;
					}
				}
				else{
					HX_STACK_LINE(247)
					_this->includes->remove(cb);
				}
			}
			else{
				HX_STACK_LINE(247)
				if ((added)){
					HX_STACK_LINE(247)
					::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(247)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = _this->excludes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(247)
						while(((cx_ite != null()))){
							HX_STACK_LINE(247)
							::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(247)
							{
								HX_STACK_LINE(247)
								if (((cb->id < j->id))){
									HX_STACK_LINE(247)
									break;
								}
								HX_STACK_LINE(247)
								pre = cx_ite;
							}
							HX_STACK_LINE(247)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(247)
						::zpp_nape::util::ZNPList_ZPP_CbType _this1 = _this->excludes;		HX_STACK_VAR(_this1,"_this1");
						struct _Function_5_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &cb){
								HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",247);
								{
									HX_STACK_LINE(247)
									::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(247)
									{
										HX_STACK_LINE(247)
										if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
											HX_STACK_LINE(247)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
										}
										else{
											HX_STACK_LINE(247)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
											HX_STACK_LINE(247)
											::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
											HX_STACK_LINE(247)
											ret->next = null();
										}
										HX_STACK_LINE(247)
										Dynamic();
									}
									HX_STACK_LINE(247)
									ret->elt = cb;
									HX_STACK_LINE(247)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(247)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_5_1::Block(cb);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(247)
						if (((pre == null()))){
							HX_STACK_LINE(247)
							temp->next = _this1->head;
							HX_STACK_LINE(247)
							_this1->head = temp;
						}
						else{
							HX_STACK_LINE(247)
							temp->next = pre->next;
							HX_STACK_LINE(247)
							pre->next = temp;
						}
						HX_STACK_LINE(247)
						_this1->pushmod = _this1->modified = true;
						HX_STACK_LINE(247)
						(_this1->length)++;
						HX_STACK_LINE(247)
						temp;
					}
				}
				else{
					HX_STACK_LINE(247)
					_this->excludes->remove(cb);
				}
			}
		}
		HX_STACK_LINE(248)
		this->addedToSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_BodyListener_obj,cbtype_change,(void))

Void ZPP_BodyListener_obj::removedFromSpace( ){
{
		HX_STACK_PUSH("ZPP_BodyListener::removedFromSpace","zpp_nape/callbacks/Listener.hx",232);
		HX_STACK_THIS(this);
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(234)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->options->includes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(235)
			while(((cx_ite != null()))){
				HX_STACK_LINE(236)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(238)
					cb->bodylisteners->remove(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = cb->cbsets->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
						HX_STACK_LINE(238)
						while(((cx_ite1 != null()))){
							HX_STACK_LINE(238)
							::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite1->elt;		HX_STACK_VAR(cb1,"cb1");
							HX_STACK_LINE(238)
							cb1->zip_bodylisteners = true;
							HX_STACK_LINE(238)
							cx_ite1 = cx_ite1->next;
						}
					}
				}
				HX_STACK_LINE(240)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(243)
		this->options->handler = null();
	}
return null();
}


Void ZPP_BodyListener_obj::addedToSpace( ){
{
		HX_STACK_PUSH("ZPP_BodyListener::addedToSpace","zpp_nape/callbacks/Listener.hx",219);
		HX_STACK_THIS(this);
		HX_STACK_LINE(220)
		this->options->handler = this->cbtype_change_dyn();
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(222)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->options->includes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(223)
			while(((cx_ite != null()))){
				HX_STACK_LINE(224)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(226)
					{
						HX_STACK_LINE(226)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(226)
						{
							HX_STACK_LINE(226)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite1 = cb->bodylisteners->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
							HX_STACK_LINE(226)
							while(((cx_ite1 != null()))){
								HX_STACK_LINE(226)
								::zpp_nape::callbacks::ZPP_BodyListener j = cx_ite1->elt;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(226)
								{
									HX_STACK_LINE(226)
									if (((bool((this->precedence > j->precedence)) || bool((bool((this->precedence == j->precedence)) && bool((this->id > j->id))))))){
										HX_STACK_LINE(226)
										break;
									}
									HX_STACK_LINE(226)
									pre = cx_ite1;
								}
								HX_STACK_LINE(226)
								cx_ite1 = cx_ite1->next;
							}
						}
						HX_STACK_LINE(226)
						{
							HX_STACK_LINE(226)
							::zpp_nape::util::ZNPList_ZPP_BodyListener _this = cb->bodylisteners;		HX_STACK_VAR(_this,"_this");
							struct _Function_6_1{
								inline static ::zpp_nape::util::ZNPNode_ZPP_BodyListener Block( ::zpp_nape::callbacks::ZPP_BodyListener_obj *__this){
									HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",226);
									{
										HX_STACK_LINE(226)
										::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(226)
										{
											HX_STACK_LINE(226)
											if (((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool == null()))){
												HX_STACK_LINE(226)
												ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();
											}
											else{
												HX_STACK_LINE(226)
												ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
												HX_STACK_LINE(226)
												::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
												HX_STACK_LINE(226)
												ret->next = null();
											}
											HX_STACK_LINE(226)
											Dynamic();
										}
										HX_STACK_LINE(226)
										ret->elt = __this;
										HX_STACK_LINE(226)
										return ret;
									}
									return null();
								}
							};
							HX_STACK_LINE(226)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = _Function_6_1::Block(this);		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(226)
							if (((pre == null()))){
								HX_STACK_LINE(226)
								temp->next = _this->head;
								HX_STACK_LINE(226)
								_this->head = temp;
							}
							else{
								HX_STACK_LINE(226)
								temp->next = pre->next;
								HX_STACK_LINE(226)
								pre->next = temp;
							}
							HX_STACK_LINE(226)
							_this->pushmod = _this->modified = true;
							HX_STACK_LINE(226)
							(_this->length)++;
							HX_STACK_LINE(226)
							temp;
						}
					}
					HX_STACK_LINE(226)
					{
						HX_STACK_LINE(226)
						::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = cb->cbsets->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
						HX_STACK_LINE(226)
						while(((cx_ite1 != null()))){
							HX_STACK_LINE(226)
							::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite1->elt;		HX_STACK_VAR(cb1,"cb1");
							HX_STACK_LINE(226)
							cb1->zip_bodylisteners = true;
							HX_STACK_LINE(226)
							cx_ite1 = cx_ite1->next;
						}
					}
				}
				HX_STACK_LINE(228)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


Void ZPP_BodyListener_obj::immutable_options( ){
{
		HX_STACK_PUSH("ZPP_BodyListener::immutable_options","zpp_nape/callbacks/Listener.hx",205);
		HX_STACK_THIS(this);
		HX_STACK_LINE(205)
		if (((bool((this->space != null())) && bool(this->space->midstep)))){
			HX_STACK_LINE(206)
			hx::Throw (HX_CSTRING("Error: Cannot change listener type options during space.step()"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_BodyListener_obj,immutable_options,(void))


ZPP_BodyListener_obj::ZPP_BodyListener_obj()
{
}

void ZPP_BodyListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_BodyListener);
	HX_MARK_MEMBER_NAME(handler,"handler");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_BodyListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handler,"handler");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_BodyListener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return handler; }
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swapEvent") ) { return swapEvent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cbtype_change") ) { return cbtype_change_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"immutable_options") ) { return immutable_options_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"invalidate_precedence") ) { return invalidate_precedence_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_BodyListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::zpp_nape::callbacks::ZPP_OptionType >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::callbacks::BodyListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_BodyListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("options"));
	outFields->push(HX_CSTRING("outer_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("swapEvent"),
	HX_CSTRING("invalidate_precedence"),
	HX_CSTRING("cbtype_change"),
	HX_CSTRING("removedFromSpace"),
	HX_CSTRING("addedToSpace"),
	HX_CSTRING("immutable_options"),
	HX_CSTRING("handler"),
	HX_CSTRING("options"),
	HX_CSTRING("outer_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_BodyListener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_BodyListener_obj::__mClass,"__mClass");
};

Class ZPP_BodyListener_obj::__mClass;

void ZPP_BodyListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.callbacks.ZPP_BodyListener"), hx::TCanCast< ZPP_BodyListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_BodyListener_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace callbacks
