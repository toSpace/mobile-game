#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_ConstraintCallback
#include <nape/callbacks/ConstraintCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_ConstraintListener
#include <nape/callbacks/ConstraintListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_ConstraintListener_obj::__construct(::nape::callbacks::OptionType options,int event,Dynamic handler)
{
HX_STACK_PUSH("ZPP_ConstraintListener::new","zpp_nape/callbacks/Listener.hx",268);
{
	HX_STACK_LINE(271)
	this->handler = null();
	HX_STACK_LINE(270)
	this->options = null();
	HX_STACK_LINE(269)
	this->outer_zn = null();
	HX_STACK_LINE(280)
	super::__construct();
	HX_STACK_LINE(281)
	this->event = event;
	HX_STACK_LINE(282)
	this->handler = handler;
	HX_STACK_LINE(283)
	this->constraint = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(284)
	this->type = ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_CONSTRAINT;
	HX_STACK_LINE(285)
	this->options = options->zpp_inner;
}
;
	return null();
}

ZPP_ConstraintListener_obj::~ZPP_ConstraintListener_obj() { }

Dynamic ZPP_ConstraintListener_obj::__CreateEmpty() { return  new ZPP_ConstraintListener_obj; }
hx::ObjectPtr< ZPP_ConstraintListener_obj > ZPP_ConstraintListener_obj::__new(::nape::callbacks::OptionType options,int event,Dynamic handler)
{  hx::ObjectPtr< ZPP_ConstraintListener_obj > result = new ZPP_ConstraintListener_obj();
	result->__construct(options,event,handler);
	return result;}

Dynamic ZPP_ConstraintListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ConstraintListener_obj > result = new ZPP_ConstraintListener_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ZPP_ConstraintListener_obj::swapEvent( int newev){
{
		HX_STACK_PUSH("ZPP_ConstraintListener::swapEvent","zpp_nape/callbacks/Listener.hx",324);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newev,"newev");
		HX_STACK_LINE(326)
		if (((bool((bool((newev != ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_WAKE)) && bool((newev != ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_SLEEP)))) && bool((newev != ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_BREAK))))){
			HX_STACK_LINE(326)
			hx::Throw (HX_CSTRING("Error: ConstraintListener event must be either WAKE or SLEEP only"));
		}
		HX_STACK_LINE(330)
		this->removedFromSpace();
		HX_STACK_LINE(331)
		this->event = newev;
		HX_STACK_LINE(332)
		this->addedToSpace();
	}
return null();
}


Void ZPP_ConstraintListener_obj::invalidate_precedence( ){
{
		HX_STACK_PUSH("ZPP_ConstraintListener::invalidate_precedence","zpp_nape/callbacks/Listener.hx",318);
		HX_STACK_THIS(this);
		HX_STACK_LINE(318)
		if (((this->space != null()))){
			HX_STACK_LINE(320)
			this->removedFromSpace();
			HX_STACK_LINE(321)
			this->addedToSpace();
		}
	}
return null();
}


Void ZPP_ConstraintListener_obj::cbtype_change( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
{
		HX_STACK_PUSH("ZPP_ConstraintListener::cbtype_change","zpp_nape/callbacks/Listener.hx",313);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cb,"cb");
		HX_STACK_ARG(included,"included");
		HX_STACK_ARG(added,"added");
		HX_STACK_LINE(314)
		this->removedFromSpace();
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			::zpp_nape::callbacks::ZPP_OptionType _this = this->options;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(315)
			if ((included)){
				HX_STACK_LINE(315)
				if ((added)){
					HX_STACK_LINE(315)
					::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = _this->includes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(315)
						while(((cx_ite != null()))){
							HX_STACK_LINE(315)
							::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								if (((cb->id < j->id))){
									HX_STACK_LINE(315)
									break;
								}
								HX_STACK_LINE(315)
								pre = cx_ite;
							}
							HX_STACK_LINE(315)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						::zpp_nape::util::ZNPList_ZPP_CbType _this1 = _this->includes;		HX_STACK_VAR(_this1,"_this1");
						struct _Function_5_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &cb){
								HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",315);
								{
									HX_STACK_LINE(315)
									::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(315)
									{
										HX_STACK_LINE(315)
										if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
											HX_STACK_LINE(315)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
										}
										else{
											HX_STACK_LINE(315)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
											HX_STACK_LINE(315)
											::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
											HX_STACK_LINE(315)
											ret->next = null();
										}
										HX_STACK_LINE(315)
										Dynamic();
									}
									HX_STACK_LINE(315)
									ret->elt = cb;
									HX_STACK_LINE(315)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(315)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_5_1::Block(cb);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(315)
						if (((pre == null()))){
							HX_STACK_LINE(315)
							temp->next = _this1->head;
							HX_STACK_LINE(315)
							_this1->head = temp;
						}
						else{
							HX_STACK_LINE(315)
							temp->next = pre->next;
							HX_STACK_LINE(315)
							pre->next = temp;
						}
						HX_STACK_LINE(315)
						_this1->pushmod = _this1->modified = true;
						HX_STACK_LINE(315)
						(_this1->length)++;
						HX_STACK_LINE(315)
						temp;
					}
				}
				else{
					HX_STACK_LINE(315)
					_this->includes->remove(cb);
				}
			}
			else{
				HX_STACK_LINE(315)
				if ((added)){
					HX_STACK_LINE(315)
					::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = _this->excludes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(315)
						while(((cx_ite != null()))){
							HX_STACK_LINE(315)
							::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								if (((cb->id < j->id))){
									HX_STACK_LINE(315)
									break;
								}
								HX_STACK_LINE(315)
								pre = cx_ite;
							}
							HX_STACK_LINE(315)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						::zpp_nape::util::ZNPList_ZPP_CbType _this1 = _this->excludes;		HX_STACK_VAR(_this1,"_this1");
						struct _Function_5_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &cb){
								HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",315);
								{
									HX_STACK_LINE(315)
									::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(315)
									{
										HX_STACK_LINE(315)
										if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
											HX_STACK_LINE(315)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
										}
										else{
											HX_STACK_LINE(315)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
											HX_STACK_LINE(315)
											::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
											HX_STACK_LINE(315)
											ret->next = null();
										}
										HX_STACK_LINE(315)
										Dynamic();
									}
									HX_STACK_LINE(315)
									ret->elt = cb;
									HX_STACK_LINE(315)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(315)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_5_1::Block(cb);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(315)
						if (((pre == null()))){
							HX_STACK_LINE(315)
							temp->next = _this1->head;
							HX_STACK_LINE(315)
							_this1->head = temp;
						}
						else{
							HX_STACK_LINE(315)
							temp->next = pre->next;
							HX_STACK_LINE(315)
							pre->next = temp;
						}
						HX_STACK_LINE(315)
						_this1->pushmod = _this1->modified = true;
						HX_STACK_LINE(315)
						(_this1->length)++;
						HX_STACK_LINE(315)
						temp;
					}
				}
				else{
					HX_STACK_LINE(315)
					_this->excludes->remove(cb);
				}
			}
		}
		HX_STACK_LINE(316)
		this->addedToSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_ConstraintListener_obj,cbtype_change,(void))

Void ZPP_ConstraintListener_obj::removedFromSpace( ){
{
		HX_STACK_PUSH("ZPP_ConstraintListener::removedFromSpace","zpp_nape/callbacks/Listener.hx",300);
		HX_STACK_THIS(this);
		HX_STACK_LINE(301)
		{
			HX_STACK_LINE(302)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->options->includes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(303)
			while(((cx_ite != null()))){
				HX_STACK_LINE(304)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(306)
					cb->conlisteners->remove(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(306)
					{
						HX_STACK_LINE(306)
						::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = cb->cbsets->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
						HX_STACK_LINE(306)
						while(((cx_ite1 != null()))){
							HX_STACK_LINE(306)
							::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite1->elt;		HX_STACK_VAR(cb1,"cb1");
							HX_STACK_LINE(306)
							cb1->zip_conlisteners = true;
							HX_STACK_LINE(306)
							cx_ite1 = cx_ite1->next;
						}
					}
				}
				HX_STACK_LINE(308)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(311)
		this->options->handler = null();
	}
return null();
}


Void ZPP_ConstraintListener_obj::addedToSpace( ){
{
		HX_STACK_PUSH("ZPP_ConstraintListener::addedToSpace","zpp_nape/callbacks/Listener.hx",287);
		HX_STACK_THIS(this);
		HX_STACK_LINE(288)
		this->options->handler = this->cbtype_change_dyn();
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(290)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->options->includes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(291)
			while(((cx_ite != null()))){
				HX_STACK_LINE(292)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(293)
				{
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(294)
						{
							HX_STACK_LINE(294)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite1 = cb->conlisteners->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
							HX_STACK_LINE(294)
							while(((cx_ite1 != null()))){
								HX_STACK_LINE(294)
								::zpp_nape::callbacks::ZPP_ConstraintListener j = cx_ite1->elt;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(294)
								{
									HX_STACK_LINE(294)
									if (((bool((this->precedence > j->precedence)) || bool((bool((this->precedence == j->precedence)) && bool((this->id > j->id))))))){
										HX_STACK_LINE(294)
										break;
									}
									HX_STACK_LINE(294)
									pre = cx_ite1;
								}
								HX_STACK_LINE(294)
								cx_ite1 = cx_ite1->next;
							}
						}
						HX_STACK_LINE(294)
						{
							HX_STACK_LINE(294)
							::zpp_nape::util::ZNPList_ZPP_ConstraintListener _this = cb->conlisteners;		HX_STACK_VAR(_this,"_this");
							struct _Function_6_1{
								inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::callbacks::ZPP_ConstraintListener_obj *__this){
									HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",294);
									{
										HX_STACK_LINE(294)
										::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(294)
										{
											HX_STACK_LINE(294)
											if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
												HX_STACK_LINE(294)
												ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();
											}
											else{
												HX_STACK_LINE(294)
												ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
												HX_STACK_LINE(294)
												::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
												HX_STACK_LINE(294)
												ret->next = null();
											}
											HX_STACK_LINE(294)
											Dynamic();
										}
										HX_STACK_LINE(294)
										ret->elt = __this;
										HX_STACK_LINE(294)
										return ret;
									}
									return null();
								}
							};
							HX_STACK_LINE(294)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = _Function_6_1::Block(this);		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(294)
							if (((pre == null()))){
								HX_STACK_LINE(294)
								temp->next = _this->head;
								HX_STACK_LINE(294)
								_this->head = temp;
							}
							else{
								HX_STACK_LINE(294)
								temp->next = pre->next;
								HX_STACK_LINE(294)
								pre->next = temp;
							}
							HX_STACK_LINE(294)
							_this->pushmod = _this->modified = true;
							HX_STACK_LINE(294)
							(_this->length)++;
							HX_STACK_LINE(294)
							temp;
						}
					}
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = cb->cbsets->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
						HX_STACK_LINE(294)
						while(((cx_ite1 != null()))){
							HX_STACK_LINE(294)
							::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite1->elt;		HX_STACK_VAR(cb1,"cb1");
							HX_STACK_LINE(294)
							cb1->zip_conlisteners = true;
							HX_STACK_LINE(294)
							cx_ite1 = cx_ite1->next;
						}
					}
				}
				HX_STACK_LINE(296)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


Void ZPP_ConstraintListener_obj::immutable_options( ){
{
		HX_STACK_PUSH("ZPP_ConstraintListener::immutable_options","zpp_nape/callbacks/Listener.hx",273);
		HX_STACK_THIS(this);
		HX_STACK_LINE(273)
		if (((bool((this->space != null())) && bool(this->space->midstep)))){
			HX_STACK_LINE(274)
			hx::Throw (HX_CSTRING("Error: Cannot change listener type options during space.step()"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConstraintListener_obj,immutable_options,(void))


ZPP_ConstraintListener_obj::ZPP_ConstraintListener_obj()
{
}

void ZPP_ConstraintListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ConstraintListener);
	HX_MARK_MEMBER_NAME(handler,"handler");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_ConstraintListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handler,"handler");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_ConstraintListener_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_ConstraintListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::zpp_nape::callbacks::ZPP_OptionType >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::callbacks::ConstraintListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_ConstraintListener_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_ConstraintListener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ConstraintListener_obj::__mClass,"__mClass");
};

Class ZPP_ConstraintListener_obj::__mClass;

void ZPP_ConstraintListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.callbacks.ZPP_ConstraintListener"), hx::TCanCast< ZPP_ConstraintListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_ConstraintListener_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace callbacks
