#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreCallback
#include <nape/callbacks/PreCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreFlag
#include <nape/callbacks/PreFlag.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreListener
#include <nape/callbacks/PreListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Interactor
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_InteractionListener_obj::__construct(::nape::callbacks::OptionType options1,::nape::callbacks::OptionType options2,int event,int type)
{
HX_STACK_PUSH("ZPP_InteractionListener::new","zpp_nape/callbacks/Listener.hx",336);
{
	HX_STACK_LINE(345)
	this->handlerp = null();
	HX_STACK_LINE(344)
	this->pure = false;
	HX_STACK_LINE(343)
	this->allowSleepingCallbacks = false;
	HX_STACK_LINE(342)
	this->handleri = null();
	HX_STACK_LINE(341)
	this->options2 = null();
	HX_STACK_LINE(340)
	this->options1 = null();
	HX_STACK_LINE(339)
	this->itype = (int)0;
	HX_STACK_LINE(338)
	this->outer_znp = null();
	HX_STACK_LINE(337)
	this->outer_zni = null();
	HX_STACK_LINE(352)
	super::__construct();
	HX_STACK_LINE(353)
	this->type = type;
	HX_STACK_LINE(354)
	this->interaction = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(355)
	this->event = event;
	HX_STACK_LINE(356)
	this->options1 = options1->zpp_inner;
	HX_STACK_LINE(357)
	this->options2 = options2->zpp_inner;
	HX_STACK_LINE(358)
	this->allowSleepingCallbacks = false;
}
;
	return null();
}

ZPP_InteractionListener_obj::~ZPP_InteractionListener_obj() { }

Dynamic ZPP_InteractionListener_obj::__CreateEmpty() { return  new ZPP_InteractionListener_obj; }
hx::ObjectPtr< ZPP_InteractionListener_obj > ZPP_InteractionListener_obj::__new(::nape::callbacks::OptionType options1,::nape::callbacks::OptionType options2,int event,int type)
{  hx::ObjectPtr< ZPP_InteractionListener_obj > result = new ZPP_InteractionListener_obj();
	result->__construct(options1,options2,event,type);
	return result;}

Dynamic ZPP_InteractionListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_InteractionListener_obj > result = new ZPP_InteractionListener_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void ZPP_InteractionListener_obj::swapEvent( int newev){
{
		HX_STACK_PUSH("ZPP_InteractionListener::swapEvent","zpp_nape/callbacks/Listener.hx",710);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newev,"newev");
		HX_STACK_LINE(712)
		if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE))){
			HX_STACK_LINE(712)
			hx::Throw (HX_CSTRING("Error: PreListener event can only be PRE"));
		}
		else{
			HX_STACK_LINE(715)
			if (((bool((bool((newev != ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_BEGIN)) && bool((newev != ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_END)))) && bool((newev != ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_ONGOING))))){
				HX_STACK_LINE(715)
				hx::Throw (HX_CSTRING("Error: InteractionListener event must be either BEGIN, END, ONGOING"));
			}
		}
		HX_STACK_LINE(719)
		this->removedFromSpace();
		HX_STACK_LINE(720)
		this->event = newev;
		HX_STACK_LINE(721)
		this->addedToSpace();
	}
return null();
}


Void ZPP_InteractionListener_obj::cbtype_change( ::zpp_nape::callbacks::ZPP_OptionType options,::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
{
		HX_STACK_PUSH("ZPP_InteractionListener::cbtype_change","zpp_nape/callbacks/Listener.hx",703);
		HX_STACK_THIS(this);
		HX_STACK_ARG(options,"options");
		HX_STACK_ARG(cb,"cb");
		HX_STACK_ARG(included,"included");
		HX_STACK_ARG(added,"added");
		HX_STACK_LINE(705)
		this->removedFromSpace();
		HX_STACK_LINE(706)
		if ((included)){
			HX_STACK_LINE(706)
			if ((added)){
				HX_STACK_LINE(706)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(706)
				{
					HX_STACK_LINE(706)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = options->includes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(706)
					while(((cx_ite != null()))){
						HX_STACK_LINE(706)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(706)
						{
							HX_STACK_LINE(706)
							if (((cb->id < j->id))){
								HX_STACK_LINE(706)
								break;
							}
							HX_STACK_LINE(706)
							pre = cx_ite;
						}
						HX_STACK_LINE(706)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(706)
				{
					HX_STACK_LINE(706)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = options->includes;		HX_STACK_VAR(_this,"_this");
					struct _Function_4_1{
						inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &cb){
							HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",706);
							{
								HX_STACK_LINE(706)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(706)
								{
									HX_STACK_LINE(706)
									if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
										HX_STACK_LINE(706)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
									}
									else{
										HX_STACK_LINE(706)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
										HX_STACK_LINE(706)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(706)
										ret->next = null();
									}
									HX_STACK_LINE(706)
									Dynamic();
								}
								HX_STACK_LINE(706)
								ret->elt = cb;
								HX_STACK_LINE(706)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(706)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_4_1::Block(cb);		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(706)
					if (((pre == null()))){
						HX_STACK_LINE(706)
						temp->next = _this->head;
						HX_STACK_LINE(706)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(706)
						temp->next = pre->next;
						HX_STACK_LINE(706)
						pre->next = temp;
					}
					HX_STACK_LINE(706)
					_this->pushmod = _this->modified = true;
					HX_STACK_LINE(706)
					(_this->length)++;
					HX_STACK_LINE(706)
					temp;
				}
			}
			else{
				HX_STACK_LINE(706)
				options->includes->remove(cb);
			}
		}
		else{
			HX_STACK_LINE(706)
			if ((added)){
				HX_STACK_LINE(706)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(706)
				{
					HX_STACK_LINE(706)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = options->excludes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(706)
					while(((cx_ite != null()))){
						HX_STACK_LINE(706)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(706)
						{
							HX_STACK_LINE(706)
							if (((cb->id < j->id))){
								HX_STACK_LINE(706)
								break;
							}
							HX_STACK_LINE(706)
							pre = cx_ite;
						}
						HX_STACK_LINE(706)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(706)
				{
					HX_STACK_LINE(706)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = options->excludes;		HX_STACK_VAR(_this,"_this");
					struct _Function_4_1{
						inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &cb){
							HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",706);
							{
								HX_STACK_LINE(706)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(706)
								{
									HX_STACK_LINE(706)
									if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
										HX_STACK_LINE(706)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
									}
									else{
										HX_STACK_LINE(706)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
										HX_STACK_LINE(706)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(706)
										ret->next = null();
									}
									HX_STACK_LINE(706)
									Dynamic();
								}
								HX_STACK_LINE(706)
								ret->elt = cb;
								HX_STACK_LINE(706)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(706)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_4_1::Block(cb);		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(706)
					if (((pre == null()))){
						HX_STACK_LINE(706)
						temp->next = _this->head;
						HX_STACK_LINE(706)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(706)
						temp->next = pre->next;
						HX_STACK_LINE(706)
						pre->next = temp;
					}
					HX_STACK_LINE(706)
					_this->pushmod = _this->modified = true;
					HX_STACK_LINE(706)
					(_this->length)++;
					HX_STACK_LINE(706)
					temp;
				}
			}
			else{
				HX_STACK_LINE(706)
				options->excludes->remove(cb);
			}
		}
		HX_STACK_LINE(707)
		this->addedToSpace();
		HX_STACK_LINE(708)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_InteractionListener_obj,cbtype_change,(void))

Void ZPP_InteractionListener_obj::cbtype_change2( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
{
		HX_STACK_PUSH("ZPP_InteractionListener::cbtype_change2","zpp_nape/callbacks/Listener.hx",700);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cb,"cb");
		HX_STACK_ARG(included,"included");
		HX_STACK_ARG(added,"added");
		HX_STACK_LINE(700)
		this->cbtype_change(this->options2,cb,included,added);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_InteractionListener_obj,cbtype_change2,(void))

Void ZPP_InteractionListener_obj::cbtype_change1( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added){
{
		HX_STACK_PUSH("ZPP_InteractionListener::cbtype_change1","zpp_nape/callbacks/Listener.hx",697);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cb,"cb");
		HX_STACK_ARG(included,"included");
		HX_STACK_ARG(added,"added");
		HX_STACK_LINE(697)
		this->cbtype_change(this->options1,cb,included,added);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_InteractionListener_obj,cbtype_change1,(void))

Void ZPP_InteractionListener_obj::invalidate_precedence( ){
{
		HX_STACK_PUSH("ZPP_InteractionListener::invalidate_precedence","zpp_nape/callbacks/Listener.hx",678);
		HX_STACK_THIS(this);
		HX_STACK_LINE(678)
		::zpp_nape::callbacks::ZPP_InteractionListener _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(679)
		if (((this->space != null()))){
			HX_STACK_LINE(680)
			bool pre = (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE);		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(681)
			{
				HX_STACK_LINE(681)
				::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = this->options1->includes->head;		HX_STACK_VAR(ite1,"ite1");
				HX_STACK_LINE(681)
				::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = this->options2->includes->head;		HX_STACK_VAR(ite2,"ite2");
				HX_STACK_LINE(681)
				while(((bool((ite1 != null())) && bool((ite2 != null()))))){
					HX_STACK_LINE(681)
					::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
					HX_STACK_LINE(681)
					::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
					HX_STACK_LINE(681)
					if (((cb1 == cb2))){
						HX_STACK_LINE(681)
						{
							HX_STACK_LINE(681)
							{
								HX_STACK_LINE(681)
								cb1->listeners->remove(_g);
								HX_STACK_LINE(681)
								{
									HX_STACK_LINE(681)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(681)
									while(((cx_ite != null()))){
										HX_STACK_LINE(681)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(681)
										{
											HX_STACK_LINE(681)
											cb->zip_listeners = true;
											HX_STACK_LINE(681)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(681)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(681)
							{
								HX_STACK_LINE(681)
								{
									HX_STACK_LINE(681)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb1->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(681)
										while(((cx_ite != null()))){
											HX_STACK_LINE(681)
											::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(681)
											{
												HX_STACK_LINE(681)
												if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
													HX_STACK_LINE(681)
													break;
												}
												HX_STACK_LINE(681)
												pre1 = cx_ite;
											}
											HX_STACK_LINE(681)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb1->listeners;		HX_STACK_VAR(_this,"_this");
										struct _Function_9_1{
											inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &_g){
												HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",681);
												{
													HX_STACK_LINE(681)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(681)
													{
														HX_STACK_LINE(681)
														if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
															HX_STACK_LINE(681)
															ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
														}
														else{
															HX_STACK_LINE(681)
															ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
															HX_STACK_LINE(681)
															::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
															HX_STACK_LINE(681)
															ret->next = null();
														}
														HX_STACK_LINE(681)
														Dynamic();
													}
													HX_STACK_LINE(681)
													ret->elt = _g;
													HX_STACK_LINE(681)
													return ret;
												}
												return null();
											}
										};
										HX_STACK_LINE(681)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_9_1::Block(_g);		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(681)
										if (((pre1 == null()))){
											HX_STACK_LINE(681)
											temp->next = _this->head;
											HX_STACK_LINE(681)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(681)
											temp->next = pre1->next;
											HX_STACK_LINE(681)
											pre1->next = temp;
										}
										HX_STACK_LINE(681)
										_this->pushmod = _this->modified = true;
										HX_STACK_LINE(681)
										(_this->length)++;
										HX_STACK_LINE(681)
										temp;
									}
								}
								HX_STACK_LINE(681)
								{
									HX_STACK_LINE(681)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(681)
									while(((cx_ite != null()))){
										HX_STACK_LINE(681)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(681)
										{
											HX_STACK_LINE(681)
											cb->zip_listeners = true;
											HX_STACK_LINE(681)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(681)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(681)
							if ((pre)){
								HX_STACK_LINE(681)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(681)
								while(((cx_ite != null()))){
									HX_STACK_LINE(681)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(681)
									i->wake();
									HX_STACK_LINE(681)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(681)
						ite1 = ite1->next;
						HX_STACK_LINE(681)
						ite2 = ite2->next;
					}
					else{
						HX_STACK_LINE(681)
						if (((cb1->id < cb2->id))){
							HX_STACK_LINE(681)
							{
								HX_STACK_LINE(681)
								{
									HX_STACK_LINE(681)
									cb1->listeners->remove(_g);
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(681)
										while(((cx_ite != null()))){
											HX_STACK_LINE(681)
											::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
											HX_STACK_LINE(681)
											{
												HX_STACK_LINE(681)
												cb->zip_listeners = true;
												HX_STACK_LINE(681)
												cb->invalidate_pairs();
											}
											HX_STACK_LINE(681)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(681)
								{
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
										HX_STACK_LINE(681)
										{
											HX_STACK_LINE(681)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb1->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(681)
											while(((cx_ite != null()))){
												HX_STACK_LINE(681)
												::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(681)
												{
													HX_STACK_LINE(681)
													if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
														HX_STACK_LINE(681)
														break;
													}
													HX_STACK_LINE(681)
													pre1 = cx_ite;
												}
												HX_STACK_LINE(681)
												cx_ite = cx_ite->next;
											}
										}
										HX_STACK_LINE(681)
										{
											HX_STACK_LINE(681)
											::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb1->listeners;		HX_STACK_VAR(_this,"_this");
											struct _Function_10_1{
												inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &_g){
													HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",681);
													{
														HX_STACK_LINE(681)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(681)
														{
															HX_STACK_LINE(681)
															if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
																HX_STACK_LINE(681)
																ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
															}
															else{
																HX_STACK_LINE(681)
																ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
																HX_STACK_LINE(681)
																::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
																HX_STACK_LINE(681)
																ret->next = null();
															}
															HX_STACK_LINE(681)
															Dynamic();
														}
														HX_STACK_LINE(681)
														ret->elt = _g;
														HX_STACK_LINE(681)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(681)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_10_1::Block(_g);		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(681)
											if (((pre1 == null()))){
												HX_STACK_LINE(681)
												temp->next = _this->head;
												HX_STACK_LINE(681)
												_this->head = temp;
											}
											else{
												HX_STACK_LINE(681)
												temp->next = pre1->next;
												HX_STACK_LINE(681)
												pre1->next = temp;
											}
											HX_STACK_LINE(681)
											_this->pushmod = _this->modified = true;
											HX_STACK_LINE(681)
											(_this->length)++;
											HX_STACK_LINE(681)
											temp;
										}
									}
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(681)
										while(((cx_ite != null()))){
											HX_STACK_LINE(681)
											::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
											HX_STACK_LINE(681)
											{
												HX_STACK_LINE(681)
												cb->zip_listeners = true;
												HX_STACK_LINE(681)
												cb->invalidate_pairs();
											}
											HX_STACK_LINE(681)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(681)
								if ((pre)){
									HX_STACK_LINE(681)
									::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(681)
									while(((cx_ite != null()))){
										HX_STACK_LINE(681)
										::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(681)
										i->wake();
										HX_STACK_LINE(681)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(681)
							ite1 = ite1->next;
						}
						else{
							HX_STACK_LINE(681)
							{
								HX_STACK_LINE(681)
								{
									HX_STACK_LINE(681)
									cb2->listeners->remove(_g);
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb2->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(681)
										while(((cx_ite != null()))){
											HX_STACK_LINE(681)
											::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
											HX_STACK_LINE(681)
											{
												HX_STACK_LINE(681)
												cb->zip_listeners = true;
												HX_STACK_LINE(681)
												cb->invalidate_pairs();
											}
											HX_STACK_LINE(681)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(681)
								{
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
										HX_STACK_LINE(681)
										{
											HX_STACK_LINE(681)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb2->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(681)
											while(((cx_ite != null()))){
												HX_STACK_LINE(681)
												::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(681)
												{
													HX_STACK_LINE(681)
													if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
														HX_STACK_LINE(681)
														break;
													}
													HX_STACK_LINE(681)
													pre1 = cx_ite;
												}
												HX_STACK_LINE(681)
												cx_ite = cx_ite->next;
											}
										}
										HX_STACK_LINE(681)
										{
											HX_STACK_LINE(681)
											::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb2->listeners;		HX_STACK_VAR(_this,"_this");
											struct _Function_10_1{
												inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &_g){
													HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",681);
													{
														HX_STACK_LINE(681)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(681)
														{
															HX_STACK_LINE(681)
															if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
																HX_STACK_LINE(681)
																ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
															}
															else{
																HX_STACK_LINE(681)
																ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
																HX_STACK_LINE(681)
																::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
																HX_STACK_LINE(681)
																ret->next = null();
															}
															HX_STACK_LINE(681)
															Dynamic();
														}
														HX_STACK_LINE(681)
														ret->elt = _g;
														HX_STACK_LINE(681)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(681)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_10_1::Block(_g);		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(681)
											if (((pre1 == null()))){
												HX_STACK_LINE(681)
												temp->next = _this->head;
												HX_STACK_LINE(681)
												_this->head = temp;
											}
											else{
												HX_STACK_LINE(681)
												temp->next = pre1->next;
												HX_STACK_LINE(681)
												pre1->next = temp;
											}
											HX_STACK_LINE(681)
											_this->pushmod = _this->modified = true;
											HX_STACK_LINE(681)
											(_this->length)++;
											HX_STACK_LINE(681)
											temp;
										}
									}
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb2->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(681)
										while(((cx_ite != null()))){
											HX_STACK_LINE(681)
											::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
											HX_STACK_LINE(681)
											{
												HX_STACK_LINE(681)
												cb->zip_listeners = true;
												HX_STACK_LINE(681)
												cb->invalidate_pairs();
											}
											HX_STACK_LINE(681)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(681)
								if ((pre)){
									HX_STACK_LINE(681)
									::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb2->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(681)
									while(((cx_ite != null()))){
										HX_STACK_LINE(681)
										::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(681)
										i->wake();
										HX_STACK_LINE(681)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(681)
							ite2 = ite2->next;
						}
					}
				}
				HX_STACK_LINE(681)
				while(((ite1 != null()))){
					HX_STACK_LINE(681)
					{
						HX_STACK_LINE(681)
						::zpp_nape::callbacks::ZPP_CbType cb = ite1->elt;		HX_STACK_VAR(cb,"cb");
						HX_STACK_LINE(681)
						{
							HX_STACK_LINE(681)
							cb->listeners->remove(_g);
							HX_STACK_LINE(681)
							{
								HX_STACK_LINE(681)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(681)
								while(((cx_ite != null()))){
									HX_STACK_LINE(681)
									::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										cb1->zip_listeners = true;
										HX_STACK_LINE(681)
										cb1->invalidate_pairs();
									}
									HX_STACK_LINE(681)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(681)
						{
							HX_STACK_LINE(681)
							{
								HX_STACK_LINE(681)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
								HX_STACK_LINE(681)
								{
									HX_STACK_LINE(681)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(681)
									while(((cx_ite != null()))){
										HX_STACK_LINE(681)
										::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(681)
										{
											HX_STACK_LINE(681)
											if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
												HX_STACK_LINE(681)
												break;
											}
											HX_STACK_LINE(681)
											pre1 = cx_ite;
										}
										HX_STACK_LINE(681)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(681)
								{
									HX_STACK_LINE(681)
									::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb->listeners;		HX_STACK_VAR(_this,"_this");
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &_g){
											HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",681);
											{
												HX_STACK_LINE(681)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(681)
												{
													HX_STACK_LINE(681)
													if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
														HX_STACK_LINE(681)
														ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
													}
													else{
														HX_STACK_LINE(681)
														ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
														HX_STACK_LINE(681)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
														HX_STACK_LINE(681)
														ret->next = null();
													}
													HX_STACK_LINE(681)
													Dynamic();
												}
												HX_STACK_LINE(681)
												ret->elt = _g;
												HX_STACK_LINE(681)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(681)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_8_1::Block(_g);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(681)
									if (((pre1 == null()))){
										HX_STACK_LINE(681)
										temp->next = _this->head;
										HX_STACK_LINE(681)
										_this->head = temp;
									}
									else{
										HX_STACK_LINE(681)
										temp->next = pre1->next;
										HX_STACK_LINE(681)
										pre1->next = temp;
									}
									HX_STACK_LINE(681)
									_this->pushmod = _this->modified = true;
									HX_STACK_LINE(681)
									(_this->length)++;
									HX_STACK_LINE(681)
									temp;
								}
							}
							HX_STACK_LINE(681)
							{
								HX_STACK_LINE(681)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(681)
								while(((cx_ite != null()))){
									HX_STACK_LINE(681)
									::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										cb1->zip_listeners = true;
										HX_STACK_LINE(681)
										cb1->invalidate_pairs();
									}
									HX_STACK_LINE(681)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(681)
						if ((pre)){
							HX_STACK_LINE(681)
							::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(681)
							while(((cx_ite != null()))){
								HX_STACK_LINE(681)
								::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(681)
								i->wake();
								HX_STACK_LINE(681)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(681)
					ite1 = ite1->next;
				}
				HX_STACK_LINE(681)
				while(((ite2 != null()))){
					HX_STACK_LINE(681)
					{
						HX_STACK_LINE(681)
						::zpp_nape::callbacks::ZPP_CbType cb = ite2->elt;		HX_STACK_VAR(cb,"cb");
						HX_STACK_LINE(681)
						{
							HX_STACK_LINE(681)
							cb->listeners->remove(_g);
							HX_STACK_LINE(681)
							{
								HX_STACK_LINE(681)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(681)
								while(((cx_ite != null()))){
									HX_STACK_LINE(681)
									::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										cb1->zip_listeners = true;
										HX_STACK_LINE(681)
										cb1->invalidate_pairs();
									}
									HX_STACK_LINE(681)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(681)
						{
							HX_STACK_LINE(681)
							{
								HX_STACK_LINE(681)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
								HX_STACK_LINE(681)
								{
									HX_STACK_LINE(681)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(681)
									while(((cx_ite != null()))){
										HX_STACK_LINE(681)
										::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(681)
										{
											HX_STACK_LINE(681)
											if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
												HX_STACK_LINE(681)
												break;
											}
											HX_STACK_LINE(681)
											pre1 = cx_ite;
										}
										HX_STACK_LINE(681)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(681)
								{
									HX_STACK_LINE(681)
									::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb->listeners;		HX_STACK_VAR(_this,"_this");
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &_g){
											HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",681);
											{
												HX_STACK_LINE(681)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(681)
												{
													HX_STACK_LINE(681)
													if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
														HX_STACK_LINE(681)
														ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
													}
													else{
														HX_STACK_LINE(681)
														ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
														HX_STACK_LINE(681)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
														HX_STACK_LINE(681)
														ret->next = null();
													}
													HX_STACK_LINE(681)
													Dynamic();
												}
												HX_STACK_LINE(681)
												ret->elt = _g;
												HX_STACK_LINE(681)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(681)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_8_1::Block(_g);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(681)
									if (((pre1 == null()))){
										HX_STACK_LINE(681)
										temp->next = _this->head;
										HX_STACK_LINE(681)
										_this->head = temp;
									}
									else{
										HX_STACK_LINE(681)
										temp->next = pre1->next;
										HX_STACK_LINE(681)
										pre1->next = temp;
									}
									HX_STACK_LINE(681)
									_this->pushmod = _this->modified = true;
									HX_STACK_LINE(681)
									(_this->length)++;
									HX_STACK_LINE(681)
									temp;
								}
							}
							HX_STACK_LINE(681)
							{
								HX_STACK_LINE(681)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(681)
								while(((cx_ite != null()))){
									HX_STACK_LINE(681)
									::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
									HX_STACK_LINE(681)
									{
										HX_STACK_LINE(681)
										cb1->zip_listeners = true;
										HX_STACK_LINE(681)
										cb1->invalidate_pairs();
									}
									HX_STACK_LINE(681)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(681)
						if ((pre)){
							HX_STACK_LINE(681)
							::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(681)
							while(((cx_ite != null()))){
								HX_STACK_LINE(681)
								::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(681)
								i->wake();
								HX_STACK_LINE(681)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(681)
					ite2 = ite2->next;
				}
			}
		}
	}
return null();
}


Void ZPP_InteractionListener_obj::removedFromSpace( ){
{
		HX_STACK_PUSH("ZPP_InteractionListener::removedFromSpace","zpp_nape/callbacks/Listener.hx",659);
		HX_STACK_THIS(this);
		HX_STACK_LINE(659)
		::zpp_nape::callbacks::ZPP_InteractionListener _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(660)
		this->with_uniquesets(false);
		HX_STACK_LINE(661)
		bool pre = (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE);		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(662)
		{
			HX_STACK_LINE(662)
			::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = this->options1->includes->head;		HX_STACK_VAR(ite1,"ite1");
			HX_STACK_LINE(662)
			::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = this->options2->includes->head;		HX_STACK_VAR(ite2,"ite2");
			HX_STACK_LINE(662)
			while(((bool((ite1 != null())) && bool((ite2 != null()))))){
				HX_STACK_LINE(662)
				::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
				HX_STACK_LINE(662)
				::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
				HX_STACK_LINE(662)
				if (((cb1 == cb2))){
					HX_STACK_LINE(662)
					{
						HX_STACK_LINE(662)
						{
							HX_STACK_LINE(662)
							cb1->listeners->remove(_g);
							HX_STACK_LINE(662)
							{
								HX_STACK_LINE(662)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(662)
								while(((cx_ite != null()))){
									HX_STACK_LINE(662)
									::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
									HX_STACK_LINE(662)
									{
										HX_STACK_LINE(662)
										cb->zip_listeners = true;
										HX_STACK_LINE(662)
										cb->invalidate_pairs();
									}
									HX_STACK_LINE(662)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(662)
						if ((pre)){
							HX_STACK_LINE(662)
							::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(662)
							while(((cx_ite != null()))){
								HX_STACK_LINE(662)
								::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(662)
								i->wake();
								HX_STACK_LINE(662)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(662)
					ite1 = ite1->next;
					HX_STACK_LINE(662)
					ite2 = ite2->next;
				}
				else{
					HX_STACK_LINE(662)
					if (((cb1->id < cb2->id))){
						HX_STACK_LINE(662)
						{
							HX_STACK_LINE(662)
							{
								HX_STACK_LINE(662)
								cb1->listeners->remove(_g);
								HX_STACK_LINE(662)
								{
									HX_STACK_LINE(662)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(662)
									while(((cx_ite != null()))){
										HX_STACK_LINE(662)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(662)
										{
											HX_STACK_LINE(662)
											cb->zip_listeners = true;
											HX_STACK_LINE(662)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(662)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(662)
							if ((pre)){
								HX_STACK_LINE(662)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(662)
								while(((cx_ite != null()))){
									HX_STACK_LINE(662)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(662)
									i->wake();
									HX_STACK_LINE(662)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(662)
						ite1 = ite1->next;
					}
					else{
						HX_STACK_LINE(662)
						{
							HX_STACK_LINE(662)
							{
								HX_STACK_LINE(662)
								cb2->listeners->remove(_g);
								HX_STACK_LINE(662)
								{
									HX_STACK_LINE(662)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb2->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(662)
									while(((cx_ite != null()))){
										HX_STACK_LINE(662)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(662)
										{
											HX_STACK_LINE(662)
											cb->zip_listeners = true;
											HX_STACK_LINE(662)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(662)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(662)
							if ((pre)){
								HX_STACK_LINE(662)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb2->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(662)
								while(((cx_ite != null()))){
									HX_STACK_LINE(662)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(662)
									i->wake();
									HX_STACK_LINE(662)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(662)
						ite2 = ite2->next;
					}
				}
			}
			HX_STACK_LINE(662)
			while(((ite1 != null()))){
				HX_STACK_LINE(662)
				{
					HX_STACK_LINE(662)
					::zpp_nape::callbacks::ZPP_CbType cb = ite1->elt;		HX_STACK_VAR(cb,"cb");
					HX_STACK_LINE(662)
					{
						HX_STACK_LINE(662)
						cb->listeners->remove(_g);
						HX_STACK_LINE(662)
						{
							HX_STACK_LINE(662)
							::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(662)
							while(((cx_ite != null()))){
								HX_STACK_LINE(662)
								::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
								HX_STACK_LINE(662)
								{
									HX_STACK_LINE(662)
									cb1->zip_listeners = true;
									HX_STACK_LINE(662)
									cb1->invalidate_pairs();
								}
								HX_STACK_LINE(662)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(662)
					if ((pre)){
						HX_STACK_LINE(662)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(662)
						while(((cx_ite != null()))){
							HX_STACK_LINE(662)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(662)
							i->wake();
							HX_STACK_LINE(662)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(662)
				ite1 = ite1->next;
			}
			HX_STACK_LINE(662)
			while(((ite2 != null()))){
				HX_STACK_LINE(662)
				{
					HX_STACK_LINE(662)
					::zpp_nape::callbacks::ZPP_CbType cb = ite2->elt;		HX_STACK_VAR(cb,"cb");
					HX_STACK_LINE(662)
					{
						HX_STACK_LINE(662)
						cb->listeners->remove(_g);
						HX_STACK_LINE(662)
						{
							HX_STACK_LINE(662)
							::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(662)
							while(((cx_ite != null()))){
								HX_STACK_LINE(662)
								::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
								HX_STACK_LINE(662)
								{
									HX_STACK_LINE(662)
									cb1->zip_listeners = true;
									HX_STACK_LINE(662)
									cb1->invalidate_pairs();
								}
								HX_STACK_LINE(662)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(662)
					if ((pre)){
						HX_STACK_LINE(662)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(662)
						while(((cx_ite != null()))){
							HX_STACK_LINE(662)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(662)
							i->wake();
							HX_STACK_LINE(662)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(662)
				ite2 = ite2->next;
			}
		}
		HX_STACK_LINE(675)
		this->options1->handler = null();
		HX_STACK_LINE(676)
		this->options2->handler = null();
	}
return null();
}


Void ZPP_InteractionListener_obj::addedToSpace( ){
{
		HX_STACK_PUSH("ZPP_InteractionListener::addedToSpace","zpp_nape/callbacks/Listener.hx",640);
		HX_STACK_THIS(this);
		HX_STACK_LINE(640)
		::zpp_nape::callbacks::ZPP_InteractionListener _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(641)
		bool pre = (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ListenerType_PRE);		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(642)
		{
			HX_STACK_LINE(642)
			::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = this->options1->includes->head;		HX_STACK_VAR(ite1,"ite1");
			HX_STACK_LINE(642)
			::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = this->options2->includes->head;		HX_STACK_VAR(ite2,"ite2");
			HX_STACK_LINE(642)
			while(((bool((ite1 != null())) && bool((ite2 != null()))))){
				HX_STACK_LINE(642)
				::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
				HX_STACK_LINE(642)
				::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
				HX_STACK_LINE(642)
				if (((cb1 == cb2))){
					HX_STACK_LINE(642)
					{
						HX_STACK_LINE(642)
						{
							HX_STACK_LINE(642)
							{
								HX_STACK_LINE(642)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
								HX_STACK_LINE(642)
								{
									HX_STACK_LINE(642)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb1->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(642)
									while(((cx_ite != null()))){
										HX_STACK_LINE(642)
										::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(642)
										{
											HX_STACK_LINE(642)
											if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
												HX_STACK_LINE(642)
												break;
											}
											HX_STACK_LINE(642)
											pre1 = cx_ite;
										}
										HX_STACK_LINE(642)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(642)
								{
									HX_STACK_LINE(642)
									::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb1->listeners;		HX_STACK_VAR(_this,"_this");
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &_g){
											HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",642);
											{
												HX_STACK_LINE(642)
												::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(642)
												{
													HX_STACK_LINE(642)
													if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
														HX_STACK_LINE(642)
														ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
													}
													else{
														HX_STACK_LINE(642)
														ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
														HX_STACK_LINE(642)
														::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
														HX_STACK_LINE(642)
														ret->next = null();
													}
													HX_STACK_LINE(642)
													Dynamic();
												}
												HX_STACK_LINE(642)
												ret->elt = _g;
												HX_STACK_LINE(642)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(642)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_8_1::Block(_g);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(642)
									if (((pre1 == null()))){
										HX_STACK_LINE(642)
										temp->next = _this->head;
										HX_STACK_LINE(642)
										_this->head = temp;
									}
									else{
										HX_STACK_LINE(642)
										temp->next = pre1->next;
										HX_STACK_LINE(642)
										pre1->next = temp;
									}
									HX_STACK_LINE(642)
									_this->pushmod = _this->modified = true;
									HX_STACK_LINE(642)
									(_this->length)++;
									HX_STACK_LINE(642)
									temp;
								}
							}
							HX_STACK_LINE(642)
							{
								HX_STACK_LINE(642)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(642)
								while(((cx_ite != null()))){
									HX_STACK_LINE(642)
									::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
									HX_STACK_LINE(642)
									{
										HX_STACK_LINE(642)
										cb->zip_listeners = true;
										HX_STACK_LINE(642)
										cb->invalidate_pairs();
									}
									HX_STACK_LINE(642)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(642)
						if ((pre)){
							HX_STACK_LINE(642)
							::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(642)
							while(((cx_ite != null()))){
								HX_STACK_LINE(642)
								::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(642)
								i->wake();
								HX_STACK_LINE(642)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(642)
					ite1 = ite1->next;
					HX_STACK_LINE(642)
					ite2 = ite2->next;
				}
				else{
					HX_STACK_LINE(642)
					if (((cb1->id < cb2->id))){
						HX_STACK_LINE(642)
						{
							HX_STACK_LINE(642)
							{
								HX_STACK_LINE(642)
								{
									HX_STACK_LINE(642)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
									HX_STACK_LINE(642)
									{
										HX_STACK_LINE(642)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb1->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(642)
										while(((cx_ite != null()))){
											HX_STACK_LINE(642)
											::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(642)
											{
												HX_STACK_LINE(642)
												if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
													HX_STACK_LINE(642)
													break;
												}
												HX_STACK_LINE(642)
												pre1 = cx_ite;
											}
											HX_STACK_LINE(642)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(642)
									{
										HX_STACK_LINE(642)
										::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb1->listeners;		HX_STACK_VAR(_this,"_this");
										struct _Function_9_1{
											inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &_g){
												HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",642);
												{
													HX_STACK_LINE(642)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(642)
													{
														HX_STACK_LINE(642)
														if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
															HX_STACK_LINE(642)
															ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
														}
														else{
															HX_STACK_LINE(642)
															ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
															HX_STACK_LINE(642)
															::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
															HX_STACK_LINE(642)
															ret->next = null();
														}
														HX_STACK_LINE(642)
														Dynamic();
													}
													HX_STACK_LINE(642)
													ret->elt = _g;
													HX_STACK_LINE(642)
													return ret;
												}
												return null();
											}
										};
										HX_STACK_LINE(642)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_9_1::Block(_g);		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(642)
										if (((pre1 == null()))){
											HX_STACK_LINE(642)
											temp->next = _this->head;
											HX_STACK_LINE(642)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(642)
											temp->next = pre1->next;
											HX_STACK_LINE(642)
											pre1->next = temp;
										}
										HX_STACK_LINE(642)
										_this->pushmod = _this->modified = true;
										HX_STACK_LINE(642)
										(_this->length)++;
										HX_STACK_LINE(642)
										temp;
									}
								}
								HX_STACK_LINE(642)
								{
									HX_STACK_LINE(642)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb1->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(642)
									while(((cx_ite != null()))){
										HX_STACK_LINE(642)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(642)
										{
											HX_STACK_LINE(642)
											cb->zip_listeners = true;
											HX_STACK_LINE(642)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(642)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(642)
							if ((pre)){
								HX_STACK_LINE(642)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(642)
								while(((cx_ite != null()))){
									HX_STACK_LINE(642)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(642)
									i->wake();
									HX_STACK_LINE(642)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(642)
						ite1 = ite1->next;
					}
					else{
						HX_STACK_LINE(642)
						{
							HX_STACK_LINE(642)
							{
								HX_STACK_LINE(642)
								{
									HX_STACK_LINE(642)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
									HX_STACK_LINE(642)
									{
										HX_STACK_LINE(642)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb2->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(642)
										while(((cx_ite != null()))){
											HX_STACK_LINE(642)
											::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(642)
											{
												HX_STACK_LINE(642)
												if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
													HX_STACK_LINE(642)
													break;
												}
												HX_STACK_LINE(642)
												pre1 = cx_ite;
											}
											HX_STACK_LINE(642)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(642)
									{
										HX_STACK_LINE(642)
										::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb2->listeners;		HX_STACK_VAR(_this,"_this");
										struct _Function_9_1{
											inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &_g){
												HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",642);
												{
													HX_STACK_LINE(642)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(642)
													{
														HX_STACK_LINE(642)
														if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
															HX_STACK_LINE(642)
															ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
														}
														else{
															HX_STACK_LINE(642)
															ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
															HX_STACK_LINE(642)
															::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
															HX_STACK_LINE(642)
															ret->next = null();
														}
														HX_STACK_LINE(642)
														Dynamic();
													}
													HX_STACK_LINE(642)
													ret->elt = _g;
													HX_STACK_LINE(642)
													return ret;
												}
												return null();
											}
										};
										HX_STACK_LINE(642)
										::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_9_1::Block(_g);		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(642)
										if (((pre1 == null()))){
											HX_STACK_LINE(642)
											temp->next = _this->head;
											HX_STACK_LINE(642)
											_this->head = temp;
										}
										else{
											HX_STACK_LINE(642)
											temp->next = pre1->next;
											HX_STACK_LINE(642)
											pre1->next = temp;
										}
										HX_STACK_LINE(642)
										_this->pushmod = _this->modified = true;
										HX_STACK_LINE(642)
										(_this->length)++;
										HX_STACK_LINE(642)
										temp;
									}
								}
								HX_STACK_LINE(642)
								{
									HX_STACK_LINE(642)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb2->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(642)
									while(((cx_ite != null()))){
										HX_STACK_LINE(642)
										::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
										HX_STACK_LINE(642)
										{
											HX_STACK_LINE(642)
											cb->zip_listeners = true;
											HX_STACK_LINE(642)
											cb->invalidate_pairs();
										}
										HX_STACK_LINE(642)
										cx_ite = cx_ite->next;
									}
								}
							}
							HX_STACK_LINE(642)
							if ((pre)){
								HX_STACK_LINE(642)
								::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb2->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(642)
								while(((cx_ite != null()))){
									HX_STACK_LINE(642)
									::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(642)
									i->wake();
									HX_STACK_LINE(642)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(642)
						ite2 = ite2->next;
					}
				}
			}
			HX_STACK_LINE(642)
			while(((ite1 != null()))){
				HX_STACK_LINE(642)
				{
					HX_STACK_LINE(642)
					::zpp_nape::callbacks::ZPP_CbType cb = ite1->elt;		HX_STACK_VAR(cb,"cb");
					HX_STACK_LINE(642)
					{
						HX_STACK_LINE(642)
						{
							HX_STACK_LINE(642)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
							HX_STACK_LINE(642)
							{
								HX_STACK_LINE(642)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(642)
								while(((cx_ite != null()))){
									HX_STACK_LINE(642)
									::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(642)
									{
										HX_STACK_LINE(642)
										if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
											HX_STACK_LINE(642)
											break;
										}
										HX_STACK_LINE(642)
										pre1 = cx_ite;
									}
									HX_STACK_LINE(642)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(642)
							{
								HX_STACK_LINE(642)
								::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb->listeners;		HX_STACK_VAR(_this,"_this");
								struct _Function_7_1{
									inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &_g){
										HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",642);
										{
											HX_STACK_LINE(642)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(642)
											{
												HX_STACK_LINE(642)
												if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
													HX_STACK_LINE(642)
													ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
												}
												else{
													HX_STACK_LINE(642)
													ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
													HX_STACK_LINE(642)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(642)
													ret->next = null();
												}
												HX_STACK_LINE(642)
												Dynamic();
											}
											HX_STACK_LINE(642)
											ret->elt = _g;
											HX_STACK_LINE(642)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(642)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_7_1::Block(_g);		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(642)
								if (((pre1 == null()))){
									HX_STACK_LINE(642)
									temp->next = _this->head;
									HX_STACK_LINE(642)
									_this->head = temp;
								}
								else{
									HX_STACK_LINE(642)
									temp->next = pre1->next;
									HX_STACK_LINE(642)
									pre1->next = temp;
								}
								HX_STACK_LINE(642)
								_this->pushmod = _this->modified = true;
								HX_STACK_LINE(642)
								(_this->length)++;
								HX_STACK_LINE(642)
								temp;
							}
						}
						HX_STACK_LINE(642)
						{
							HX_STACK_LINE(642)
							::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(642)
							while(((cx_ite != null()))){
								HX_STACK_LINE(642)
								::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
								HX_STACK_LINE(642)
								{
									HX_STACK_LINE(642)
									cb1->zip_listeners = true;
									HX_STACK_LINE(642)
									cb1->invalidate_pairs();
								}
								HX_STACK_LINE(642)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(642)
					if ((pre)){
						HX_STACK_LINE(642)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(642)
						while(((cx_ite != null()))){
							HX_STACK_LINE(642)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(642)
							i->wake();
							HX_STACK_LINE(642)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(642)
				ite1 = ite1->next;
			}
			HX_STACK_LINE(642)
			while(((ite2 != null()))){
				HX_STACK_LINE(642)
				{
					HX_STACK_LINE(642)
					::zpp_nape::callbacks::ZPP_CbType cb = ite2->elt;		HX_STACK_VAR(cb,"cb");
					HX_STACK_LINE(642)
					{
						HX_STACK_LINE(642)
						{
							HX_STACK_LINE(642)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre1 = null();		HX_STACK_VAR(pre1,"pre1");
							HX_STACK_LINE(642)
							{
								HX_STACK_LINE(642)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = cb->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(642)
								while(((cx_ite != null()))){
									HX_STACK_LINE(642)
									::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(642)
									{
										HX_STACK_LINE(642)
										if (((bool((_g->precedence > j->precedence)) || bool((bool((_g->precedence == j->precedence)) && bool((_g->id > j->id))))))){
											HX_STACK_LINE(642)
											break;
										}
										HX_STACK_LINE(642)
										pre1 = cx_ite;
									}
									HX_STACK_LINE(642)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(642)
							{
								HX_STACK_LINE(642)
								::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = cb->listeners;		HX_STACK_VAR(_this,"_this");
								struct _Function_7_1{
									inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &_g){
										HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",642);
										{
											HX_STACK_LINE(642)
											::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(642)
											{
												HX_STACK_LINE(642)
												if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
													HX_STACK_LINE(642)
													ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
												}
												else{
													HX_STACK_LINE(642)
													ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
													HX_STACK_LINE(642)
													::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
													HX_STACK_LINE(642)
													ret->next = null();
												}
												HX_STACK_LINE(642)
												Dynamic();
											}
											HX_STACK_LINE(642)
											ret->elt = _g;
											HX_STACK_LINE(642)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(642)
								::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_7_1::Block(_g);		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(642)
								if (((pre1 == null()))){
									HX_STACK_LINE(642)
									temp->next = _this->head;
									HX_STACK_LINE(642)
									_this->head = temp;
								}
								else{
									HX_STACK_LINE(642)
									temp->next = pre1->next;
									HX_STACK_LINE(642)
									pre1->next = temp;
								}
								HX_STACK_LINE(642)
								_this->pushmod = _this->modified = true;
								HX_STACK_LINE(642)
								(_this->length)++;
								HX_STACK_LINE(642)
								temp;
							}
						}
						HX_STACK_LINE(642)
						{
							HX_STACK_LINE(642)
							::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = cb->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(642)
							while(((cx_ite != null()))){
								HX_STACK_LINE(642)
								::zpp_nape::callbacks::ZPP_CbSet cb1 = cx_ite->elt;		HX_STACK_VAR(cb1,"cb1");
								HX_STACK_LINE(642)
								{
									HX_STACK_LINE(642)
									cb1->zip_listeners = true;
									HX_STACK_LINE(642)
									cb1->invalidate_pairs();
								}
								HX_STACK_LINE(642)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(642)
					if ((pre)){
						HX_STACK_LINE(642)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(642)
						while(((cx_ite != null()))){
							HX_STACK_LINE(642)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(642)
							i->wake();
							HX_STACK_LINE(642)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(642)
				ite2 = ite2->next;
			}
		}
		HX_STACK_LINE(655)
		this->options1->handler = this->cbtype_change1_dyn();
		HX_STACK_LINE(656)
		this->options2->handler = this->cbtype_change2_dyn();
		HX_STACK_LINE(657)
		this->with_uniquesets(true);
	}
return null();
}


Void ZPP_InteractionListener_obj::with_union( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_InteractionListener::with_union","zpp_nape/callbacks/Listener.hx",611);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(612)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = this->options1->includes->head;		HX_STACK_VAR(ite1,"ite1");
		HX_STACK_LINE(613)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = this->options2->includes->head;		HX_STACK_VAR(ite2,"ite2");
		HX_STACK_LINE(614)
		while(((bool((ite1 != null())) && bool((ite2 != null()))))){
			HX_STACK_LINE(615)
			::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
			HX_STACK_LINE(616)
			::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
			HX_STACK_LINE(617)
			if (((cb1 == cb2))){
				HX_STACK_LINE(618)
				lambda(cb1).Cast< Void >();
				HX_STACK_LINE(619)
				ite1 = ite1->next;
				HX_STACK_LINE(620)
				ite2 = ite2->next;
			}
			else{
				HX_STACK_LINE(622)
				if (((cb1->id < cb2->id))){
					HX_STACK_LINE(623)
					lambda(cb1).Cast< Void >();
					HX_STACK_LINE(624)
					ite1 = ite1->next;
				}
				else{
					HX_STACK_LINE(627)
					lambda(cb2).Cast< Void >();
					HX_STACK_LINE(628)
					ite2 = ite2->next;
				}
			}
		}
		HX_STACK_LINE(631)
		while(((ite1 != null()))){
			HX_STACK_LINE(632)
			lambda(ite1->elt).Cast< Void >();
			HX_STACK_LINE(633)
			ite1 = ite1->next;
		}
		HX_STACK_LINE(635)
		while(((ite2 != null()))){
			HX_STACK_LINE(636)
			lambda(ite2->elt).Cast< Void >();
			HX_STACK_LINE(637)
			ite2 = ite2->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionListener_obj,with_union,(void))

Void ZPP_InteractionListener_obj::with_uniquesets( bool fresh){
{
		HX_STACK_PUSH("ZPP_InteractionListener::with_uniquesets","zpp_nape/callbacks/Listener.hx",541);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fresh,"fresh");
		HX_STACK_LINE(541)
		::zpp_nape::callbacks::ZPP_InteractionListener _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(542)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set;		HX_STACK_VAR(set,"set");
		HX_STACK_LINE(543)
		{
			HX_STACK_LINE(544)
			if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(544)
				set = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
			}
			else{
				HX_STACK_LINE(551)
				set = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(552)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = set->next;
				HX_STACK_LINE(553)
				set->next = null();
			}
			HX_STACK_LINE(558)
			Dynamic();
		}
		HX_STACK_LINE(560)
		set->lt = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::setlt_dyn();
		HX_STACK_LINE(561)
		{
			HX_STACK_LINE(561)
			::zpp_nape::util::ZNPList_ZPP_CbType B = this->options2->includes;		HX_STACK_VAR(B,"B");
			HX_STACK_LINE(561)
			::zpp_nape::util::ZNPList_ZPP_CbType U = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbType;		HX_STACK_VAR(U,"U");
			HX_STACK_LINE(561)
			::zpp_nape::util::ZNPList_ZPP_CbType V = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbType;		HX_STACK_VAR(V,"V");
			HX_STACK_LINE(561)
			::zpp_nape::util::ZNPList_ZPP_CbType W = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbType;		HX_STACK_VAR(W,"W");
			HX_STACK_LINE(561)
			::zpp_nape::util::ZNPNode_ZPP_CbType aite = this->options1->includes->head;		HX_STACK_VAR(aite,"aite");
			HX_STACK_LINE(561)
			::zpp_nape::util::ZNPNode_ZPP_CbType bite = B->head;		HX_STACK_VAR(bite,"bite");
			HX_STACK_LINE(561)
			while(((bool((aite != null())) && bool((bite != null()))))){
				HX_STACK_LINE(561)
				::zpp_nape::callbacks::ZPP_CbType a = aite->elt;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(561)
				::zpp_nape::callbacks::ZPP_CbType b = bite->elt;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(561)
				if (((a == b))){
					HX_STACK_LINE(561)
					{
						struct _Function_5_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &a){
								HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
								{
									HX_STACK_LINE(561)
									::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(561)
										if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
											HX_STACK_LINE(561)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
										}
										else{
											HX_STACK_LINE(561)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
											HX_STACK_LINE(561)
											::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
											HX_STACK_LINE(561)
											ret->next = null();
										}
										HX_STACK_LINE(561)
										Dynamic();
									}
									HX_STACK_LINE(561)
									ret->elt = a;
									HX_STACK_LINE(561)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(561)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_5_1::Block(a);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(561)
						temp->next = W->head;
						HX_STACK_LINE(561)
						W->head = temp;
						HX_STACK_LINE(561)
						W->modified = true;
						HX_STACK_LINE(561)
						(W->length)++;
						HX_STACK_LINE(561)
						a;
					}
					HX_STACK_LINE(561)
					aite = aite->next;
					HX_STACK_LINE(561)
					bite = bite->next;
				}
				else{
					HX_STACK_LINE(561)
					if (((a->id < b->id))){
						HX_STACK_LINE(561)
						{
							struct _Function_6_1{
								inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &a){
									HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
									{
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(561)
										{
											HX_STACK_LINE(561)
											if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
												HX_STACK_LINE(561)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
											}
											else{
												HX_STACK_LINE(561)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
												HX_STACK_LINE(561)
												::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
												HX_STACK_LINE(561)
												ret->next = null();
											}
											HX_STACK_LINE(561)
											Dynamic();
										}
										HX_STACK_LINE(561)
										ret->elt = a;
										HX_STACK_LINE(561)
										return ret;
									}
									return null();
								}
							};
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_6_1::Block(a);		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(561)
							temp->next = U->head;
							HX_STACK_LINE(561)
							U->head = temp;
							HX_STACK_LINE(561)
							U->modified = true;
							HX_STACK_LINE(561)
							(U->length)++;
							HX_STACK_LINE(561)
							a;
						}
						HX_STACK_LINE(561)
						aite = aite->next;
					}
					else{
						HX_STACK_LINE(561)
						{
							struct _Function_6_1{
								inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &b){
									HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
									{
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(561)
										{
											HX_STACK_LINE(561)
											if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
												HX_STACK_LINE(561)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
											}
											else{
												HX_STACK_LINE(561)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
												HX_STACK_LINE(561)
												::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
												HX_STACK_LINE(561)
												ret->next = null();
											}
											HX_STACK_LINE(561)
											Dynamic();
										}
										HX_STACK_LINE(561)
										ret->elt = b;
										HX_STACK_LINE(561)
										return ret;
									}
									return null();
								}
							};
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_6_1::Block(b);		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(561)
							temp->next = V->head;
							HX_STACK_LINE(561)
							V->head = temp;
							HX_STACK_LINE(561)
							V->modified = true;
							HX_STACK_LINE(561)
							(V->length)++;
							HX_STACK_LINE(561)
							b;
						}
						HX_STACK_LINE(561)
						bite = bite->next;
					}
				}
			}
			HX_STACK_LINE(561)
			while(((aite != null()))){
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					::zpp_nape::callbacks::ZPP_CbType o = aite->elt;		HX_STACK_VAR(o,"o");
					struct _Function_4_1{
						inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o){
							HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
							{
								HX_STACK_LINE(561)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
										HX_STACK_LINE(561)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
									}
									else{
										HX_STACK_LINE(561)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(561)
										ret->next = null();
									}
									HX_STACK_LINE(561)
									Dynamic();
								}
								HX_STACK_LINE(561)
								ret->elt = o;
								HX_STACK_LINE(561)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(561)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_4_1::Block(o);		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(561)
					temp->next = U->head;
					HX_STACK_LINE(561)
					U->head = temp;
					HX_STACK_LINE(561)
					U->modified = true;
					HX_STACK_LINE(561)
					(U->length)++;
					HX_STACK_LINE(561)
					o;
				}
				HX_STACK_LINE(561)
				aite = aite->next;
			}
			HX_STACK_LINE(561)
			while(((bite != null()))){
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					::zpp_nape::callbacks::ZPP_CbType o = bite->elt;		HX_STACK_VAR(o,"o");
					struct _Function_4_1{
						inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o){
							HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
							{
								HX_STACK_LINE(561)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
										HX_STACK_LINE(561)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
									}
									else{
										HX_STACK_LINE(561)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(561)
										ret->next = null();
									}
									HX_STACK_LINE(561)
									Dynamic();
								}
								HX_STACK_LINE(561)
								ret->elt = o;
								HX_STACK_LINE(561)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(561)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_4_1::Block(o);		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(561)
					temp->next = V->head;
					HX_STACK_LINE(561)
					V->head = temp;
					HX_STACK_LINE(561)
					V->modified = true;
					HX_STACK_LINE(561)
					(V->length)++;
					HX_STACK_LINE(561)
					o;
				}
				HX_STACK_LINE(561)
				bite = bite->next;
			}
			HX_STACK_LINE(561)
			while((!(((U->head == null()))))){
				HX_STACK_LINE(561)
				::zpp_nape::callbacks::ZPP_CbType x = U->pop_unsafe();		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = B->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(561)
					while(((cx_ite != null()))){
						HX_STACK_LINE(561)
						::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(561)
						{
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPList_ZPP_CbSet B1 = y->cbsets;		HX_STACK_VAR(B1,"B1");
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPList_ZPP_CbSet U1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(U1,"U1");
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPList_ZPP_CbSet V1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(V1,"V1");
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPList_ZPP_CbSet W1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(W1,"W1");
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPNode_ZPP_CbSet aite1 = x->cbsets->head;		HX_STACK_VAR(aite1,"aite1");
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPNode_ZPP_CbSet bite1 = B1->head;		HX_STACK_VAR(bite1,"bite1");
							HX_STACK_LINE(561)
							while(((bool((aite1 != null())) && bool((bite1 != null()))))){
								HX_STACK_LINE(561)
								::zpp_nape::callbacks::ZPP_CbSet a = aite1->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(561)
								::zpp_nape::callbacks::ZPP_CbSet b = bite1->elt;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(561)
								if (((a == b))){
									HX_STACK_LINE(561)
									{
										struct _Function_9_1{
											inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &a){
												HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
												{
													HX_STACK_LINE(561)
													::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(561)
													{
														HX_STACK_LINE(561)
														if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
															HX_STACK_LINE(561)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
														}
														else{
															HX_STACK_LINE(561)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
															HX_STACK_LINE(561)
															::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
															HX_STACK_LINE(561)
															ret->next = null();
														}
														HX_STACK_LINE(561)
														Dynamic();
													}
													HX_STACK_LINE(561)
													ret->elt = a;
													HX_STACK_LINE(561)
													return ret;
												}
												return null();
											}
										};
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_9_1::Block(a);		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(561)
										temp->next = W1->head;
										HX_STACK_LINE(561)
										W1->head = temp;
										HX_STACK_LINE(561)
										W1->modified = true;
										HX_STACK_LINE(561)
										(W1->length)++;
										HX_STACK_LINE(561)
										a;
									}
									HX_STACK_LINE(561)
									aite1 = aite1->next;
									HX_STACK_LINE(561)
									bite1 = bite1->next;
								}
								else{
									HX_STACK_LINE(561)
									if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
										HX_STACK_LINE(561)
										{
											struct _Function_10_1{
												inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &a){
													HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
													{
														HX_STACK_LINE(561)
														::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(561)
														{
															HX_STACK_LINE(561)
															if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
																HX_STACK_LINE(561)
																ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
															}
															else{
																HX_STACK_LINE(561)
																ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
																HX_STACK_LINE(561)
																::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
																HX_STACK_LINE(561)
																ret->next = null();
															}
															HX_STACK_LINE(561)
															Dynamic();
														}
														HX_STACK_LINE(561)
														ret->elt = a;
														HX_STACK_LINE(561)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(561)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_10_1::Block(a);		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(561)
											temp->next = U1->head;
											HX_STACK_LINE(561)
											U1->head = temp;
											HX_STACK_LINE(561)
											U1->modified = true;
											HX_STACK_LINE(561)
											(U1->length)++;
											HX_STACK_LINE(561)
											a;
										}
										HX_STACK_LINE(561)
										aite1 = aite1->next;
									}
									else{
										HX_STACK_LINE(561)
										{
											struct _Function_10_1{
												inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &b){
													HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
													{
														HX_STACK_LINE(561)
														::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(561)
														{
															HX_STACK_LINE(561)
															if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
																HX_STACK_LINE(561)
																ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
															}
															else{
																HX_STACK_LINE(561)
																ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
																HX_STACK_LINE(561)
																::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
																HX_STACK_LINE(561)
																ret->next = null();
															}
															HX_STACK_LINE(561)
															Dynamic();
														}
														HX_STACK_LINE(561)
														ret->elt = b;
														HX_STACK_LINE(561)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(561)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_10_1::Block(b);		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(561)
											temp->next = V1->head;
											HX_STACK_LINE(561)
											V1->head = temp;
											HX_STACK_LINE(561)
											V1->modified = true;
											HX_STACK_LINE(561)
											(V1->length)++;
											HX_STACK_LINE(561)
											b;
										}
										HX_STACK_LINE(561)
										bite1 = bite1->next;
									}
								}
							}
							HX_STACK_LINE(561)
							while(((aite1 != null()))){
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									::zpp_nape::callbacks::ZPP_CbSet o = aite1->elt;		HX_STACK_VAR(o,"o");
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
											HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
											{
												HX_STACK_LINE(561)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(561)
												{
													HX_STACK_LINE(561)
													if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
														HX_STACK_LINE(561)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
													}
													else{
														HX_STACK_LINE(561)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
														HX_STACK_LINE(561)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(561)
														ret->next = null();
													}
													HX_STACK_LINE(561)
													Dynamic();
												}
												HX_STACK_LINE(561)
												ret->elt = o;
												HX_STACK_LINE(561)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(561)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_8_1::Block(o);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(561)
									temp->next = U1->head;
									HX_STACK_LINE(561)
									U1->head = temp;
									HX_STACK_LINE(561)
									U1->modified = true;
									HX_STACK_LINE(561)
									(U1->length)++;
									HX_STACK_LINE(561)
									o;
								}
								HX_STACK_LINE(561)
								aite1 = aite1->next;
							}
							HX_STACK_LINE(561)
							while(((bite1 != null()))){
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									::zpp_nape::callbacks::ZPP_CbSet o = bite1->elt;		HX_STACK_VAR(o,"o");
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
											HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
											{
												HX_STACK_LINE(561)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(561)
												{
													HX_STACK_LINE(561)
													if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
														HX_STACK_LINE(561)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
													}
													else{
														HX_STACK_LINE(561)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
														HX_STACK_LINE(561)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(561)
														ret->next = null();
													}
													HX_STACK_LINE(561)
													Dynamic();
												}
												HX_STACK_LINE(561)
												ret->elt = o;
												HX_STACK_LINE(561)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(561)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_8_1::Block(o);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(561)
									temp->next = V1->head;
									HX_STACK_LINE(561)
									V1->head = temp;
									HX_STACK_LINE(561)
									V1->modified = true;
									HX_STACK_LINE(561)
									(V1->length)++;
									HX_STACK_LINE(561)
									o;
								}
								HX_STACK_LINE(561)
								bite1 = bite1->next;
							}
							HX_STACK_LINE(561)
							while((!(((U1->head == null()))))){
								HX_STACK_LINE(561)
								::zpp_nape::callbacks::ZPP_CbSet x1 = U1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = B1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(561)
									while(((cx_ite1 != null()))){
										HX_STACK_LINE(561)
										::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(561)
										{
											HX_STACK_LINE(561)
											x1->validate();
											HX_STACK_LINE(561)
											y1->validate();
											HX_STACK_LINE(561)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
												struct _Function_11_1{
													inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1,::zpp_nape::callbacks::ZPP_CbSet &y1){
														HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
														{
															HX_STACK_LINE(561)
															::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(561)
															{
																HX_STACK_LINE(561)
																if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
																}
																else{
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																	HX_STACK_LINE(561)
																	::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																	HX_STACK_LINE(561)
																	ret->next = null();
																}
																HX_STACK_LINE(561)
																ret->zip_listeners = true;
															}
															HX_STACK_LINE(561)
															if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
																HX_STACK_LINE(561)
																ret->a = x1;
																HX_STACK_LINE(561)
																ret->b = y1;
															}
															else{
																HX_STACK_LINE(561)
																ret->a = y1;
																HX_STACK_LINE(561)
																ret->b = x1;
															}
															HX_STACK_LINE(561)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(561)
												set->try_insert(_Function_11_1::Block(x1,y1));
											}
										}
										HX_STACK_LINE(561)
										cx_ite1 = cx_ite1->next;
									}
								}
							}
							HX_STACK_LINE(561)
							while((!(((V1->head == null()))))){
								HX_STACK_LINE(561)
								::zpp_nape::callbacks::ZPP_CbSet x1 = V1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(561)
									while(((cx_ite1 != null()))){
										HX_STACK_LINE(561)
										::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(561)
										{
											HX_STACK_LINE(561)
											x1->validate();
											HX_STACK_LINE(561)
											y1->validate();
											HX_STACK_LINE(561)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
												struct _Function_11_1{
													inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1,::zpp_nape::callbacks::ZPP_CbSet &y1){
														HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
														{
															HX_STACK_LINE(561)
															::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(561)
															{
																HX_STACK_LINE(561)
																if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
																}
																else{
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																	HX_STACK_LINE(561)
																	::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																	HX_STACK_LINE(561)
																	ret->next = null();
																}
																HX_STACK_LINE(561)
																ret->zip_listeners = true;
															}
															HX_STACK_LINE(561)
															if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
																HX_STACK_LINE(561)
																ret->a = x1;
																HX_STACK_LINE(561)
																ret->b = y1;
															}
															else{
																HX_STACK_LINE(561)
																ret->a = y1;
																HX_STACK_LINE(561)
																ret->b = x1;
															}
															HX_STACK_LINE(561)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(561)
												set->try_insert(_Function_11_1::Block(x1,y1));
											}
										}
										HX_STACK_LINE(561)
										cx_ite1 = cx_ite1->next;
									}
								}
							}
							HX_STACK_LINE(561)
							while((!(((W1->head == null()))))){
								HX_STACK_LINE(561)
								::zpp_nape::callbacks::ZPP_CbSet x1 = W1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(561)
										x1->validate();
										HX_STACK_LINE(561)
										x1->validate();
										HX_STACK_LINE(561)
										if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,x1,_g))){
											struct _Function_10_1{
												inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1){
													HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
													{
														HX_STACK_LINE(561)
														::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(561)
														{
															HX_STACK_LINE(561)
															if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																HX_STACK_LINE(561)
																ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
															}
															else{
																HX_STACK_LINE(561)
																ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																HX_STACK_LINE(561)
																::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																HX_STACK_LINE(561)
																ret->next = null();
															}
															HX_STACK_LINE(561)
															ret->zip_listeners = true;
														}
														HX_STACK_LINE(561)
														if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,x1))){
															HX_STACK_LINE(561)
															ret->a = x1;
															HX_STACK_LINE(561)
															ret->b = x1;
														}
														else{
															HX_STACK_LINE(561)
															ret->a = x1;
															HX_STACK_LINE(561)
															ret->b = x1;
														}
														HX_STACK_LINE(561)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(561)
											set->try_insert(_Function_10_1::Block(x1));
										}
									}
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(561)
										while(((cx_ite1 != null()))){
											HX_STACK_LINE(561)
											::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(561)
											{
												HX_STACK_LINE(561)
												x1->validate();
												HX_STACK_LINE(561)
												y1->validate();
												HX_STACK_LINE(561)
												if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
													struct _Function_12_1{
														inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1,::zpp_nape::callbacks::ZPP_CbSet &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
															{
																HX_STACK_LINE(561)
																::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
																HX_STACK_LINE(561)
																{
																	HX_STACK_LINE(561)
																	if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																		HX_STACK_LINE(561)
																		ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(561)
																		ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																		HX_STACK_LINE(561)
																		::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																		HX_STACK_LINE(561)
																		ret->next = null();
																	}
																	HX_STACK_LINE(561)
																	ret->zip_listeners = true;
																}
																HX_STACK_LINE(561)
																if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
																	HX_STACK_LINE(561)
																	ret->a = x1;
																	HX_STACK_LINE(561)
																	ret->b = y1;
																}
																else{
																	HX_STACK_LINE(561)
																	ret->a = y1;
																	HX_STACK_LINE(561)
																	ret->b = x1;
																}
																HX_STACK_LINE(561)
																return ret;
															}
															return null();
														}
													};
													HX_STACK_LINE(561)
													set->try_insert(_Function_12_1::Block(x1,y1));
												}
											}
											HX_STACK_LINE(561)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(561)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(561)
			while((!(((V->head == null()))))){
				HX_STACK_LINE(561)
				::zpp_nape::callbacks::ZPP_CbType x = V->pop_unsafe();		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(561)
					while(((cx_ite != null()))){
						HX_STACK_LINE(561)
						::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(561)
						{
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPList_ZPP_CbSet B1 = y->cbsets;		HX_STACK_VAR(B1,"B1");
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPList_ZPP_CbSet U1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(U1,"U1");
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPList_ZPP_CbSet V1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(V1,"V1");
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPList_ZPP_CbSet W1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(W1,"W1");
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPNode_ZPP_CbSet aite1 = x->cbsets->head;		HX_STACK_VAR(aite1,"aite1");
							HX_STACK_LINE(561)
							::zpp_nape::util::ZNPNode_ZPP_CbSet bite1 = B1->head;		HX_STACK_VAR(bite1,"bite1");
							HX_STACK_LINE(561)
							while(((bool((aite1 != null())) && bool((bite1 != null()))))){
								HX_STACK_LINE(561)
								::zpp_nape::callbacks::ZPP_CbSet a = aite1->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(561)
								::zpp_nape::callbacks::ZPP_CbSet b = bite1->elt;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(561)
								if (((a == b))){
									HX_STACK_LINE(561)
									{
										struct _Function_9_1{
											inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &a){
												HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
												{
													HX_STACK_LINE(561)
													::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(561)
													{
														HX_STACK_LINE(561)
														if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
															HX_STACK_LINE(561)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
														}
														else{
															HX_STACK_LINE(561)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
															HX_STACK_LINE(561)
															::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
															HX_STACK_LINE(561)
															ret->next = null();
														}
														HX_STACK_LINE(561)
														Dynamic();
													}
													HX_STACK_LINE(561)
													ret->elt = a;
													HX_STACK_LINE(561)
													return ret;
												}
												return null();
											}
										};
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_9_1::Block(a);		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(561)
										temp->next = W1->head;
										HX_STACK_LINE(561)
										W1->head = temp;
										HX_STACK_LINE(561)
										W1->modified = true;
										HX_STACK_LINE(561)
										(W1->length)++;
										HX_STACK_LINE(561)
										a;
									}
									HX_STACK_LINE(561)
									aite1 = aite1->next;
									HX_STACK_LINE(561)
									bite1 = bite1->next;
								}
								else{
									HX_STACK_LINE(561)
									if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
										HX_STACK_LINE(561)
										{
											struct _Function_10_1{
												inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &a){
													HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
													{
														HX_STACK_LINE(561)
														::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(561)
														{
															HX_STACK_LINE(561)
															if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
																HX_STACK_LINE(561)
																ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
															}
															else{
																HX_STACK_LINE(561)
																ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
																HX_STACK_LINE(561)
																::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
																HX_STACK_LINE(561)
																ret->next = null();
															}
															HX_STACK_LINE(561)
															Dynamic();
														}
														HX_STACK_LINE(561)
														ret->elt = a;
														HX_STACK_LINE(561)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(561)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_10_1::Block(a);		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(561)
											temp->next = U1->head;
											HX_STACK_LINE(561)
											U1->head = temp;
											HX_STACK_LINE(561)
											U1->modified = true;
											HX_STACK_LINE(561)
											(U1->length)++;
											HX_STACK_LINE(561)
											a;
										}
										HX_STACK_LINE(561)
										aite1 = aite1->next;
									}
									else{
										HX_STACK_LINE(561)
										{
											struct _Function_10_1{
												inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &b){
													HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
													{
														HX_STACK_LINE(561)
														::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(561)
														{
															HX_STACK_LINE(561)
															if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
																HX_STACK_LINE(561)
																ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
															}
															else{
																HX_STACK_LINE(561)
																ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
																HX_STACK_LINE(561)
																::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
																HX_STACK_LINE(561)
																ret->next = null();
															}
															HX_STACK_LINE(561)
															Dynamic();
														}
														HX_STACK_LINE(561)
														ret->elt = b;
														HX_STACK_LINE(561)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(561)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_10_1::Block(b);		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(561)
											temp->next = V1->head;
											HX_STACK_LINE(561)
											V1->head = temp;
											HX_STACK_LINE(561)
											V1->modified = true;
											HX_STACK_LINE(561)
											(V1->length)++;
											HX_STACK_LINE(561)
											b;
										}
										HX_STACK_LINE(561)
										bite1 = bite1->next;
									}
								}
							}
							HX_STACK_LINE(561)
							while(((aite1 != null()))){
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									::zpp_nape::callbacks::ZPP_CbSet o = aite1->elt;		HX_STACK_VAR(o,"o");
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
											HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
											{
												HX_STACK_LINE(561)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(561)
												{
													HX_STACK_LINE(561)
													if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
														HX_STACK_LINE(561)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
													}
													else{
														HX_STACK_LINE(561)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
														HX_STACK_LINE(561)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(561)
														ret->next = null();
													}
													HX_STACK_LINE(561)
													Dynamic();
												}
												HX_STACK_LINE(561)
												ret->elt = o;
												HX_STACK_LINE(561)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(561)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_8_1::Block(o);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(561)
									temp->next = U1->head;
									HX_STACK_LINE(561)
									U1->head = temp;
									HX_STACK_LINE(561)
									U1->modified = true;
									HX_STACK_LINE(561)
									(U1->length)++;
									HX_STACK_LINE(561)
									o;
								}
								HX_STACK_LINE(561)
								aite1 = aite1->next;
							}
							HX_STACK_LINE(561)
							while(((bite1 != null()))){
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									::zpp_nape::callbacks::ZPP_CbSet o = bite1->elt;		HX_STACK_VAR(o,"o");
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
											HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
											{
												HX_STACK_LINE(561)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(561)
												{
													HX_STACK_LINE(561)
													if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
														HX_STACK_LINE(561)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
													}
													else{
														HX_STACK_LINE(561)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
														HX_STACK_LINE(561)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(561)
														ret->next = null();
													}
													HX_STACK_LINE(561)
													Dynamic();
												}
												HX_STACK_LINE(561)
												ret->elt = o;
												HX_STACK_LINE(561)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(561)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_8_1::Block(o);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(561)
									temp->next = V1->head;
									HX_STACK_LINE(561)
									V1->head = temp;
									HX_STACK_LINE(561)
									V1->modified = true;
									HX_STACK_LINE(561)
									(V1->length)++;
									HX_STACK_LINE(561)
									o;
								}
								HX_STACK_LINE(561)
								bite1 = bite1->next;
							}
							HX_STACK_LINE(561)
							while((!(((U1->head == null()))))){
								HX_STACK_LINE(561)
								::zpp_nape::callbacks::ZPP_CbSet x1 = U1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = B1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(561)
									while(((cx_ite1 != null()))){
										HX_STACK_LINE(561)
										::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(561)
										{
											HX_STACK_LINE(561)
											x1->validate();
											HX_STACK_LINE(561)
											y1->validate();
											HX_STACK_LINE(561)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
												struct _Function_11_1{
													inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1,::zpp_nape::callbacks::ZPP_CbSet &y1){
														HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
														{
															HX_STACK_LINE(561)
															::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(561)
															{
																HX_STACK_LINE(561)
																if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
																}
																else{
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																	HX_STACK_LINE(561)
																	::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																	HX_STACK_LINE(561)
																	ret->next = null();
																}
																HX_STACK_LINE(561)
																ret->zip_listeners = true;
															}
															HX_STACK_LINE(561)
															if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
																HX_STACK_LINE(561)
																ret->a = x1;
																HX_STACK_LINE(561)
																ret->b = y1;
															}
															else{
																HX_STACK_LINE(561)
																ret->a = y1;
																HX_STACK_LINE(561)
																ret->b = x1;
															}
															HX_STACK_LINE(561)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(561)
												set->try_insert(_Function_11_1::Block(x1,y1));
											}
										}
										HX_STACK_LINE(561)
										cx_ite1 = cx_ite1->next;
									}
								}
							}
							HX_STACK_LINE(561)
							while((!(((V1->head == null()))))){
								HX_STACK_LINE(561)
								::zpp_nape::callbacks::ZPP_CbSet x1 = V1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(561)
									while(((cx_ite1 != null()))){
										HX_STACK_LINE(561)
										::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(561)
										{
											HX_STACK_LINE(561)
											x1->validate();
											HX_STACK_LINE(561)
											y1->validate();
											HX_STACK_LINE(561)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
												struct _Function_11_1{
													inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1,::zpp_nape::callbacks::ZPP_CbSet &y1){
														HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
														{
															HX_STACK_LINE(561)
															::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(561)
															{
																HX_STACK_LINE(561)
																if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
																}
																else{
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																	HX_STACK_LINE(561)
																	::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																	HX_STACK_LINE(561)
																	ret->next = null();
																}
																HX_STACK_LINE(561)
																ret->zip_listeners = true;
															}
															HX_STACK_LINE(561)
															if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
																HX_STACK_LINE(561)
																ret->a = x1;
																HX_STACK_LINE(561)
																ret->b = y1;
															}
															else{
																HX_STACK_LINE(561)
																ret->a = y1;
																HX_STACK_LINE(561)
																ret->b = x1;
															}
															HX_STACK_LINE(561)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(561)
												set->try_insert(_Function_11_1::Block(x1,y1));
											}
										}
										HX_STACK_LINE(561)
										cx_ite1 = cx_ite1->next;
									}
								}
							}
							HX_STACK_LINE(561)
							while((!(((W1->head == null()))))){
								HX_STACK_LINE(561)
								::zpp_nape::callbacks::ZPP_CbSet x1 = W1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(561)
										x1->validate();
										HX_STACK_LINE(561)
										x1->validate();
										HX_STACK_LINE(561)
										if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,x1,_g))){
											struct _Function_10_1{
												inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1){
													HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
													{
														HX_STACK_LINE(561)
														::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(561)
														{
															HX_STACK_LINE(561)
															if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																HX_STACK_LINE(561)
																ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
															}
															else{
																HX_STACK_LINE(561)
																ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																HX_STACK_LINE(561)
																::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																HX_STACK_LINE(561)
																ret->next = null();
															}
															HX_STACK_LINE(561)
															ret->zip_listeners = true;
														}
														HX_STACK_LINE(561)
														if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,x1))){
															HX_STACK_LINE(561)
															ret->a = x1;
															HX_STACK_LINE(561)
															ret->b = x1;
														}
														else{
															HX_STACK_LINE(561)
															ret->a = x1;
															HX_STACK_LINE(561)
															ret->b = x1;
														}
														HX_STACK_LINE(561)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(561)
											set->try_insert(_Function_10_1::Block(x1));
										}
									}
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(561)
										while(((cx_ite1 != null()))){
											HX_STACK_LINE(561)
											::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(561)
											{
												HX_STACK_LINE(561)
												x1->validate();
												HX_STACK_LINE(561)
												y1->validate();
												HX_STACK_LINE(561)
												if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
													struct _Function_12_1{
														inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1,::zpp_nape::callbacks::ZPP_CbSet &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
															{
																HX_STACK_LINE(561)
																::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
																HX_STACK_LINE(561)
																{
																	HX_STACK_LINE(561)
																	if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																		HX_STACK_LINE(561)
																		ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(561)
																		ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																		HX_STACK_LINE(561)
																		::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																		HX_STACK_LINE(561)
																		ret->next = null();
																	}
																	HX_STACK_LINE(561)
																	ret->zip_listeners = true;
																}
																HX_STACK_LINE(561)
																if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
																	HX_STACK_LINE(561)
																	ret->a = x1;
																	HX_STACK_LINE(561)
																	ret->b = y1;
																}
																else{
																	HX_STACK_LINE(561)
																	ret->a = y1;
																	HX_STACK_LINE(561)
																	ret->b = x1;
																}
																HX_STACK_LINE(561)
																return ret;
															}
															return null();
														}
													};
													HX_STACK_LINE(561)
													set->try_insert(_Function_12_1::Block(x1,y1));
												}
											}
											HX_STACK_LINE(561)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(561)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(561)
			while((!(((W->head == null()))))){
				HX_STACK_LINE(561)
				::zpp_nape::callbacks::ZPP_CbType x = W->pop_unsafe();		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						::zpp_nape::util::ZNPList_ZPP_CbSet B1 = x->cbsets;		HX_STACK_VAR(B1,"B1");
						HX_STACK_LINE(561)
						::zpp_nape::util::ZNPList_ZPP_CbSet U1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(U1,"U1");
						HX_STACK_LINE(561)
						::zpp_nape::util::ZNPList_ZPP_CbSet V1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(V1,"V1");
						HX_STACK_LINE(561)
						::zpp_nape::util::ZNPList_ZPP_CbSet W1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(W1,"W1");
						HX_STACK_LINE(561)
						::zpp_nape::util::ZNPNode_ZPP_CbSet aite1 = x->cbsets->head;		HX_STACK_VAR(aite1,"aite1");
						HX_STACK_LINE(561)
						::zpp_nape::util::ZNPNode_ZPP_CbSet bite1 = B1->head;		HX_STACK_VAR(bite1,"bite1");
						HX_STACK_LINE(561)
						while(((bool((aite1 != null())) && bool((bite1 != null()))))){
							HX_STACK_LINE(561)
							::zpp_nape::callbacks::ZPP_CbSet a = aite1->elt;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(561)
							::zpp_nape::callbacks::ZPP_CbSet b = bite1->elt;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(561)
							if (((a == b))){
								HX_STACK_LINE(561)
								{
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &a){
											HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
											{
												HX_STACK_LINE(561)
												::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(561)
												{
													HX_STACK_LINE(561)
													if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
														HX_STACK_LINE(561)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
													}
													else{
														HX_STACK_LINE(561)
														ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
														HX_STACK_LINE(561)
														::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
														HX_STACK_LINE(561)
														ret->next = null();
													}
													HX_STACK_LINE(561)
													Dynamic();
												}
												HX_STACK_LINE(561)
												ret->elt = a;
												HX_STACK_LINE(561)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(561)
									::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_8_1::Block(a);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(561)
									temp->next = W1->head;
									HX_STACK_LINE(561)
									W1->head = temp;
									HX_STACK_LINE(561)
									W1->modified = true;
									HX_STACK_LINE(561)
									(W1->length)++;
									HX_STACK_LINE(561)
									a;
								}
								HX_STACK_LINE(561)
								aite1 = aite1->next;
								HX_STACK_LINE(561)
								bite1 = bite1->next;
							}
							else{
								HX_STACK_LINE(561)
								if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
									HX_STACK_LINE(561)
									{
										struct _Function_9_1{
											inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &a){
												HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
												{
													HX_STACK_LINE(561)
													::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(561)
													{
														HX_STACK_LINE(561)
														if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
															HX_STACK_LINE(561)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
														}
														else{
															HX_STACK_LINE(561)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
															HX_STACK_LINE(561)
															::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
															HX_STACK_LINE(561)
															ret->next = null();
														}
														HX_STACK_LINE(561)
														Dynamic();
													}
													HX_STACK_LINE(561)
													ret->elt = a;
													HX_STACK_LINE(561)
													return ret;
												}
												return null();
											}
										};
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_9_1::Block(a);		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(561)
										temp->next = U1->head;
										HX_STACK_LINE(561)
										U1->head = temp;
										HX_STACK_LINE(561)
										U1->modified = true;
										HX_STACK_LINE(561)
										(U1->length)++;
										HX_STACK_LINE(561)
										a;
									}
									HX_STACK_LINE(561)
									aite1 = aite1->next;
								}
								else{
									HX_STACK_LINE(561)
									{
										struct _Function_9_1{
											inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &b){
												HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
												{
													HX_STACK_LINE(561)
													::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(561)
													{
														HX_STACK_LINE(561)
														if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
															HX_STACK_LINE(561)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
														}
														else{
															HX_STACK_LINE(561)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
															HX_STACK_LINE(561)
															::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
															HX_STACK_LINE(561)
															ret->next = null();
														}
														HX_STACK_LINE(561)
														Dynamic();
													}
													HX_STACK_LINE(561)
													ret->elt = b;
													HX_STACK_LINE(561)
													return ret;
												}
												return null();
											}
										};
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_9_1::Block(b);		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(561)
										temp->next = V1->head;
										HX_STACK_LINE(561)
										V1->head = temp;
										HX_STACK_LINE(561)
										V1->modified = true;
										HX_STACK_LINE(561)
										(V1->length)++;
										HX_STACK_LINE(561)
										b;
									}
									HX_STACK_LINE(561)
									bite1 = bite1->next;
								}
							}
						}
						HX_STACK_LINE(561)
						while(((aite1 != null()))){
							HX_STACK_LINE(561)
							{
								HX_STACK_LINE(561)
								::zpp_nape::callbacks::ZPP_CbSet o = aite1->elt;		HX_STACK_VAR(o,"o");
								struct _Function_7_1{
									inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
										HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
										{
											HX_STACK_LINE(561)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(561)
											{
												HX_STACK_LINE(561)
												if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
													HX_STACK_LINE(561)
													ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
												}
												else{
													HX_STACK_LINE(561)
													ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
													HX_STACK_LINE(561)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(561)
													ret->next = null();
												}
												HX_STACK_LINE(561)
												Dynamic();
											}
											HX_STACK_LINE(561)
											ret->elt = o;
											HX_STACK_LINE(561)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(561)
								::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_7_1::Block(o);		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(561)
								temp->next = U1->head;
								HX_STACK_LINE(561)
								U1->head = temp;
								HX_STACK_LINE(561)
								U1->modified = true;
								HX_STACK_LINE(561)
								(U1->length)++;
								HX_STACK_LINE(561)
								o;
							}
							HX_STACK_LINE(561)
							aite1 = aite1->next;
						}
						HX_STACK_LINE(561)
						while(((bite1 != null()))){
							HX_STACK_LINE(561)
							{
								HX_STACK_LINE(561)
								::zpp_nape::callbacks::ZPP_CbSet o = bite1->elt;		HX_STACK_VAR(o,"o");
								struct _Function_7_1{
									inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
										HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
										{
											HX_STACK_LINE(561)
											::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(561)
											{
												HX_STACK_LINE(561)
												if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
													HX_STACK_LINE(561)
													ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
												}
												else{
													HX_STACK_LINE(561)
													ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
													HX_STACK_LINE(561)
													::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
													HX_STACK_LINE(561)
													ret->next = null();
												}
												HX_STACK_LINE(561)
												Dynamic();
											}
											HX_STACK_LINE(561)
											ret->elt = o;
											HX_STACK_LINE(561)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(561)
								::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_7_1::Block(o);		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(561)
								temp->next = V1->head;
								HX_STACK_LINE(561)
								V1->head = temp;
								HX_STACK_LINE(561)
								V1->modified = true;
								HX_STACK_LINE(561)
								(V1->length)++;
								HX_STACK_LINE(561)
								o;
							}
							HX_STACK_LINE(561)
							bite1 = bite1->next;
						}
						HX_STACK_LINE(561)
						while((!(((U1->head == null()))))){
							HX_STACK_LINE(561)
							::zpp_nape::callbacks::ZPP_CbSet x1 = U1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(561)
							{
								HX_STACK_LINE(561)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = B1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(561)
								while(((cx_ite != null()))){
									HX_STACK_LINE(561)
									::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(561)
										x1->validate();
										HX_STACK_LINE(561)
										y->validate();
										HX_STACK_LINE(561)
										if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y,_g))){
											struct _Function_10_1{
												inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1,::zpp_nape::callbacks::ZPP_CbSet &y){
													HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
													{
														HX_STACK_LINE(561)
														::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(561)
														{
															HX_STACK_LINE(561)
															if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																HX_STACK_LINE(561)
																ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
															}
															else{
																HX_STACK_LINE(561)
																ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																HX_STACK_LINE(561)
																::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																HX_STACK_LINE(561)
																ret->next = null();
															}
															HX_STACK_LINE(561)
															ret->zip_listeners = true;
														}
														HX_STACK_LINE(561)
														if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y))){
															HX_STACK_LINE(561)
															ret->a = x1;
															HX_STACK_LINE(561)
															ret->b = y;
														}
														else{
															HX_STACK_LINE(561)
															ret->a = y;
															HX_STACK_LINE(561)
															ret->b = x1;
														}
														HX_STACK_LINE(561)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(561)
											set->try_insert(_Function_10_1::Block(x1,y));
										}
									}
									HX_STACK_LINE(561)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(561)
						while((!(((V1->head == null()))))){
							HX_STACK_LINE(561)
							::zpp_nape::callbacks::ZPP_CbSet x1 = V1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(561)
							{
								HX_STACK_LINE(561)
								::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = W1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(561)
								while(((cx_ite != null()))){
									HX_STACK_LINE(561)
									::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(561)
										x1->validate();
										HX_STACK_LINE(561)
										y->validate();
										HX_STACK_LINE(561)
										if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y,_g))){
											struct _Function_10_1{
												inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1,::zpp_nape::callbacks::ZPP_CbSet &y){
													HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
													{
														HX_STACK_LINE(561)
														::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(561)
														{
															HX_STACK_LINE(561)
															if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																HX_STACK_LINE(561)
																ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
															}
															else{
																HX_STACK_LINE(561)
																ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																HX_STACK_LINE(561)
																::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																HX_STACK_LINE(561)
																ret->next = null();
															}
															HX_STACK_LINE(561)
															ret->zip_listeners = true;
														}
														HX_STACK_LINE(561)
														if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y))){
															HX_STACK_LINE(561)
															ret->a = x1;
															HX_STACK_LINE(561)
															ret->b = y;
														}
														else{
															HX_STACK_LINE(561)
															ret->a = y;
															HX_STACK_LINE(561)
															ret->b = x1;
														}
														HX_STACK_LINE(561)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(561)
											set->try_insert(_Function_10_1::Block(x1,y));
										}
									}
									HX_STACK_LINE(561)
									cx_ite = cx_ite->next;
								}
							}
						}
						HX_STACK_LINE(561)
						while((!(((W1->head == null()))))){
							HX_STACK_LINE(561)
							::zpp_nape::callbacks::ZPP_CbSet x1 = W1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(561)
							{
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									x1->validate();
									HX_STACK_LINE(561)
									x1->validate();
									HX_STACK_LINE(561)
									if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,x1,_g))){
										struct _Function_9_1{
											inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1){
												HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
												{
													HX_STACK_LINE(561)
													::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(561)
													{
														HX_STACK_LINE(561)
														if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
															HX_STACK_LINE(561)
															ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
														}
														else{
															HX_STACK_LINE(561)
															ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
															HX_STACK_LINE(561)
															::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(561)
															ret->next = null();
														}
														HX_STACK_LINE(561)
														ret->zip_listeners = true;
													}
													HX_STACK_LINE(561)
													if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,x1))){
														HX_STACK_LINE(561)
														ret->a = x1;
														HX_STACK_LINE(561)
														ret->b = x1;
													}
													else{
														HX_STACK_LINE(561)
														ret->a = x1;
														HX_STACK_LINE(561)
														ret->b = x1;
													}
													HX_STACK_LINE(561)
													return ret;
												}
												return null();
											}
										};
										HX_STACK_LINE(561)
										set->try_insert(_Function_9_1::Block(x1));
									}
								}
								HX_STACK_LINE(561)
								{
									HX_STACK_LINE(561)
									::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = W1->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(561)
									while(((cx_ite != null()))){
										HX_STACK_LINE(561)
										::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(561)
										{
											HX_STACK_LINE(561)
											x1->validate();
											HX_STACK_LINE(561)
											y->validate();
											HX_STACK_LINE(561)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y,_g))){
												struct _Function_11_1{
													inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1,::zpp_nape::callbacks::ZPP_CbSet &y){
														HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
														{
															HX_STACK_LINE(561)
															::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(561)
															{
																HX_STACK_LINE(561)
																if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
																}
																else{
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																	HX_STACK_LINE(561)
																	::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																	HX_STACK_LINE(561)
																	ret->next = null();
																}
																HX_STACK_LINE(561)
																ret->zip_listeners = true;
															}
															HX_STACK_LINE(561)
															if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y))){
																HX_STACK_LINE(561)
																ret->a = x1;
																HX_STACK_LINE(561)
																ret->b = y;
															}
															else{
																HX_STACK_LINE(561)
																ret->a = y;
																HX_STACK_LINE(561)
																ret->b = x1;
															}
															HX_STACK_LINE(561)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(561)
												set->try_insert(_Function_11_1::Block(x1,y));
											}
										}
										HX_STACK_LINE(561)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(561)
						while(((cx_ite != null()))){
							HX_STACK_LINE(561)
							::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(561)
							{
								HX_STACK_LINE(561)
								::zpp_nape::util::ZNPList_ZPP_CbSet B1 = y->cbsets;		HX_STACK_VAR(B1,"B1");
								HX_STACK_LINE(561)
								::zpp_nape::util::ZNPList_ZPP_CbSet U1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(U1,"U1");
								HX_STACK_LINE(561)
								::zpp_nape::util::ZNPList_ZPP_CbSet V1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(V1,"V1");
								HX_STACK_LINE(561)
								::zpp_nape::util::ZNPList_ZPP_CbSet W1 = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(W1,"W1");
								HX_STACK_LINE(561)
								::zpp_nape::util::ZNPNode_ZPP_CbSet aite1 = x->cbsets->head;		HX_STACK_VAR(aite1,"aite1");
								HX_STACK_LINE(561)
								::zpp_nape::util::ZNPNode_ZPP_CbSet bite1 = B1->head;		HX_STACK_VAR(bite1,"bite1");
								HX_STACK_LINE(561)
								while(((bool((aite1 != null())) && bool((bite1 != null()))))){
									HX_STACK_LINE(561)
									::zpp_nape::callbacks::ZPP_CbSet a = aite1->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(561)
									::zpp_nape::callbacks::ZPP_CbSet b = bite1->elt;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(561)
									if (((a == b))){
										HX_STACK_LINE(561)
										{
											struct _Function_10_1{
												inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &a){
													HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
													{
														HX_STACK_LINE(561)
														::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(561)
														{
															HX_STACK_LINE(561)
															if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
																HX_STACK_LINE(561)
																ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
															}
															else{
																HX_STACK_LINE(561)
																ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
																HX_STACK_LINE(561)
																::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
																HX_STACK_LINE(561)
																ret->next = null();
															}
															HX_STACK_LINE(561)
															Dynamic();
														}
														HX_STACK_LINE(561)
														ret->elt = a;
														HX_STACK_LINE(561)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(561)
											::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_10_1::Block(a);		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(561)
											temp->next = W1->head;
											HX_STACK_LINE(561)
											W1->head = temp;
											HX_STACK_LINE(561)
											W1->modified = true;
											HX_STACK_LINE(561)
											(W1->length)++;
											HX_STACK_LINE(561)
											a;
										}
										HX_STACK_LINE(561)
										aite1 = aite1->next;
										HX_STACK_LINE(561)
										bite1 = bite1->next;
									}
									else{
										HX_STACK_LINE(561)
										if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
											HX_STACK_LINE(561)
											{
												struct _Function_11_1{
													inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &a){
														HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
														{
															HX_STACK_LINE(561)
															::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(561)
															{
																HX_STACK_LINE(561)
																if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
																}
																else{
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
																	HX_STACK_LINE(561)
																	::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
																	HX_STACK_LINE(561)
																	ret->next = null();
																}
																HX_STACK_LINE(561)
																Dynamic();
															}
															HX_STACK_LINE(561)
															ret->elt = a;
															HX_STACK_LINE(561)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(561)
												::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_11_1::Block(a);		HX_STACK_VAR(temp,"temp");
												HX_STACK_LINE(561)
												temp->next = U1->head;
												HX_STACK_LINE(561)
												U1->head = temp;
												HX_STACK_LINE(561)
												U1->modified = true;
												HX_STACK_LINE(561)
												(U1->length)++;
												HX_STACK_LINE(561)
												a;
											}
											HX_STACK_LINE(561)
											aite1 = aite1->next;
										}
										else{
											HX_STACK_LINE(561)
											{
												struct _Function_11_1{
													inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &b){
														HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
														{
															HX_STACK_LINE(561)
															::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(561)
															{
																HX_STACK_LINE(561)
																if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
																}
																else{
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
																	HX_STACK_LINE(561)
																	::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
																	HX_STACK_LINE(561)
																	ret->next = null();
																}
																HX_STACK_LINE(561)
																Dynamic();
															}
															HX_STACK_LINE(561)
															ret->elt = b;
															HX_STACK_LINE(561)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(561)
												::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_11_1::Block(b);		HX_STACK_VAR(temp,"temp");
												HX_STACK_LINE(561)
												temp->next = V1->head;
												HX_STACK_LINE(561)
												V1->head = temp;
												HX_STACK_LINE(561)
												V1->modified = true;
												HX_STACK_LINE(561)
												(V1->length)++;
												HX_STACK_LINE(561)
												b;
											}
											HX_STACK_LINE(561)
											bite1 = bite1->next;
										}
									}
								}
								HX_STACK_LINE(561)
								while(((aite1 != null()))){
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(561)
										::zpp_nape::callbacks::ZPP_CbSet o = aite1->elt;		HX_STACK_VAR(o,"o");
										struct _Function_9_1{
											inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
												HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
												{
													HX_STACK_LINE(561)
													::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(561)
													{
														HX_STACK_LINE(561)
														if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
															HX_STACK_LINE(561)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
														}
														else{
															HX_STACK_LINE(561)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
															HX_STACK_LINE(561)
															::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
															HX_STACK_LINE(561)
															ret->next = null();
														}
														HX_STACK_LINE(561)
														Dynamic();
													}
													HX_STACK_LINE(561)
													ret->elt = o;
													HX_STACK_LINE(561)
													return ret;
												}
												return null();
											}
										};
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_9_1::Block(o);		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(561)
										temp->next = U1->head;
										HX_STACK_LINE(561)
										U1->head = temp;
										HX_STACK_LINE(561)
										U1->modified = true;
										HX_STACK_LINE(561)
										(U1->length)++;
										HX_STACK_LINE(561)
										o;
									}
									HX_STACK_LINE(561)
									aite1 = aite1->next;
								}
								HX_STACK_LINE(561)
								while(((bite1 != null()))){
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(561)
										::zpp_nape::callbacks::ZPP_CbSet o = bite1->elt;		HX_STACK_VAR(o,"o");
										struct _Function_9_1{
											inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
												HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
												{
													HX_STACK_LINE(561)
													::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(561)
													{
														HX_STACK_LINE(561)
														if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
															HX_STACK_LINE(561)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
														}
														else{
															HX_STACK_LINE(561)
															ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
															HX_STACK_LINE(561)
															::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
															HX_STACK_LINE(561)
															ret->next = null();
														}
														HX_STACK_LINE(561)
														Dynamic();
													}
													HX_STACK_LINE(561)
													ret->elt = o;
													HX_STACK_LINE(561)
													return ret;
												}
												return null();
											}
										};
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_9_1::Block(o);		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(561)
										temp->next = V1->head;
										HX_STACK_LINE(561)
										V1->head = temp;
										HX_STACK_LINE(561)
										V1->modified = true;
										HX_STACK_LINE(561)
										(V1->length)++;
										HX_STACK_LINE(561)
										o;
									}
									HX_STACK_LINE(561)
									bite1 = bite1->next;
								}
								HX_STACK_LINE(561)
								while((!(((U1->head == null()))))){
									HX_STACK_LINE(561)
									::zpp_nape::callbacks::ZPP_CbSet x1 = U1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = B1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(561)
										while(((cx_ite1 != null()))){
											HX_STACK_LINE(561)
											::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(561)
											{
												HX_STACK_LINE(561)
												x1->validate();
												HX_STACK_LINE(561)
												y1->validate();
												HX_STACK_LINE(561)
												if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
													struct _Function_12_1{
														inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1,::zpp_nape::callbacks::ZPP_CbSet &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
															{
																HX_STACK_LINE(561)
																::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
																HX_STACK_LINE(561)
																{
																	HX_STACK_LINE(561)
																	if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																		HX_STACK_LINE(561)
																		ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(561)
																		ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																		HX_STACK_LINE(561)
																		::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																		HX_STACK_LINE(561)
																		ret->next = null();
																	}
																	HX_STACK_LINE(561)
																	ret->zip_listeners = true;
																}
																HX_STACK_LINE(561)
																if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
																	HX_STACK_LINE(561)
																	ret->a = x1;
																	HX_STACK_LINE(561)
																	ret->b = y1;
																}
																else{
																	HX_STACK_LINE(561)
																	ret->a = y1;
																	HX_STACK_LINE(561)
																	ret->b = x1;
																}
																HX_STACK_LINE(561)
																return ret;
															}
															return null();
														}
													};
													HX_STACK_LINE(561)
													set->try_insert(_Function_12_1::Block(x1,y1));
												}
											}
											HX_STACK_LINE(561)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
								HX_STACK_LINE(561)
								while((!(((V1->head == null()))))){
									HX_STACK_LINE(561)
									::zpp_nape::callbacks::ZPP_CbSet x1 = V1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(561)
										::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(561)
										while(((cx_ite1 != null()))){
											HX_STACK_LINE(561)
											::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
											HX_STACK_LINE(561)
											{
												HX_STACK_LINE(561)
												x1->validate();
												HX_STACK_LINE(561)
												y1->validate();
												HX_STACK_LINE(561)
												if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
													struct _Function_12_1{
														inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1,::zpp_nape::callbacks::ZPP_CbSet &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
															{
																HX_STACK_LINE(561)
																::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
																HX_STACK_LINE(561)
																{
																	HX_STACK_LINE(561)
																	if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																		HX_STACK_LINE(561)
																		ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(561)
																		ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																		HX_STACK_LINE(561)
																		::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																		HX_STACK_LINE(561)
																		ret->next = null();
																	}
																	HX_STACK_LINE(561)
																	ret->zip_listeners = true;
																}
																HX_STACK_LINE(561)
																if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
																	HX_STACK_LINE(561)
																	ret->a = x1;
																	HX_STACK_LINE(561)
																	ret->b = y1;
																}
																else{
																	HX_STACK_LINE(561)
																	ret->a = y1;
																	HX_STACK_LINE(561)
																	ret->b = x1;
																}
																HX_STACK_LINE(561)
																return ret;
															}
															return null();
														}
													};
													HX_STACK_LINE(561)
													set->try_insert(_Function_12_1::Block(x1,y1));
												}
											}
											HX_STACK_LINE(561)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
								HX_STACK_LINE(561)
								while((!(((W1->head == null()))))){
									HX_STACK_LINE(561)
									::zpp_nape::callbacks::ZPP_CbSet x1 = W1->pop_unsafe();		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(561)
										{
											HX_STACK_LINE(561)
											x1->validate();
											HX_STACK_LINE(561)
											x1->validate();
											HX_STACK_LINE(561)
											if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,x1,_g))){
												struct _Function_11_1{
													inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1){
														HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
														{
															HX_STACK_LINE(561)
															::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(561)
															{
																HX_STACK_LINE(561)
																if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
																}
																else{
																	HX_STACK_LINE(561)
																	ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																	HX_STACK_LINE(561)
																	::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																	HX_STACK_LINE(561)
																	ret->next = null();
																}
																HX_STACK_LINE(561)
																ret->zip_listeners = true;
															}
															HX_STACK_LINE(561)
															if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,x1))){
																HX_STACK_LINE(561)
																ret->a = x1;
																HX_STACK_LINE(561)
																ret->b = x1;
															}
															else{
																HX_STACK_LINE(561)
																ret->a = x1;
																HX_STACK_LINE(561)
																ret->b = x1;
															}
															HX_STACK_LINE(561)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(561)
												set->try_insert(_Function_11_1::Block(x1));
											}
										}
										HX_STACK_LINE(561)
										{
											HX_STACK_LINE(561)
											::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite1 = W1->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(561)
											while(((cx_ite1 != null()))){
												HX_STACK_LINE(561)
												::zpp_nape::callbacks::ZPP_CbSet y1 = cx_ite1->elt;		HX_STACK_VAR(y1,"y1");
												HX_STACK_LINE(561)
												{
													HX_STACK_LINE(561)
													x1->validate();
													HX_STACK_LINE(561)
													y1->validate();
													HX_STACK_LINE(561)
													if ((::zpp_nape::callbacks::ZPP_CbSet_obj::single_intersection(x1,y1,_g))){
														struct _Function_13_1{
															inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &x1,::zpp_nape::callbacks::ZPP_CbSet &y1){
																HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",561);
																{
																	HX_STACK_LINE(561)
																	::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
																	HX_STACK_LINE(561)
																	{
																		HX_STACK_LINE(561)
																		if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
																			HX_STACK_LINE(561)
																			ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(561)
																			ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
																			HX_STACK_LINE(561)
																			::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
																			HX_STACK_LINE(561)
																			ret->next = null();
																		}
																		HX_STACK_LINE(561)
																		ret->zip_listeners = true;
																	}
																	HX_STACK_LINE(561)
																	if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x1,y1))){
																		HX_STACK_LINE(561)
																		ret->a = x1;
																		HX_STACK_LINE(561)
																		ret->b = y1;
																	}
																	else{
																		HX_STACK_LINE(561)
																		ret->a = y1;
																		HX_STACK_LINE(561)
																		ret->b = x1;
																	}
																	HX_STACK_LINE(561)
																	return ret;
																}
																return null();
															}
														};
														HX_STACK_LINE(561)
														set->try_insert(_Function_13_1::Block(x1,y1));
													}
												}
												HX_STACK_LINE(561)
												cx_ite1 = cx_ite1->next;
											}
										}
									}
								}
							}
							HX_STACK_LINE(561)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
		HX_STACK_LINE(570)
		if (((set->parent == null()))){
			HX_STACK_LINE(570)
			Dynamic();
		}
		else{
			HX_STACK_LINE(570)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = set->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(570)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair Block( bool &fresh,::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &cur,::zpp_nape::callbacks::ZPP_InteractionListener &_g){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",570);
						{
							HX_STACK_LINE(570)
							{
								HX_STACK_LINE(570)
								::zpp_nape::callbacks::ZPP_CbSetPair pair = cur->data;		HX_STACK_VAR(pair,"pair");
								HX_STACK_LINE(570)
								if ((fresh)){
									HX_STACK_LINE(570)
									_g->space->freshListenerType(pair->a,pair->b);
								}
								else{
									HX_STACK_LINE(570)
									_g->space->nullListenerType(pair->a,pair->b);
								}
								HX_STACK_LINE(570)
								{
									HX_STACK_LINE(570)
									::zpp_nape::callbacks::ZPP_CbSetPair o = pair;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(570)
									{
										HX_STACK_LINE(570)
										o->a = o->b = null();
										HX_STACK_LINE(570)
										o->listeners->clear();
									}
									HX_STACK_LINE(570)
									o->next = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
									HX_STACK_LINE(570)
									::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(570)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(570)
							if (((ret != null()))){
								HX_STACK_LINE(570)
								if (((cur == ret->prev))){
									HX_STACK_LINE(570)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(570)
									ret->next = null();
								}
								HX_STACK_LINE(570)
								cur->parent = null();
							}
							HX_STACK_LINE(570)
							{
								HX_STACK_LINE(570)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(570)
								{
									HX_STACK_LINE(570)
									o->data = null();
									HX_STACK_LINE(570)
									o->lt = null();
									HX_STACK_LINE(570)
									o->swapped = null();
								}
								HX_STACK_LINE(570)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
								HX_STACK_LINE(570)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
							}
							HX_STACK_LINE(570)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(570)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(_Function_3_1::Block(fresh,cur,_g)) )) );
			}
			HX_STACK_LINE(570)
			set->parent = null();
		}
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(592)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = set;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(601)
			{
				HX_STACK_LINE(601)
				o->data = null();
				HX_STACK_LINE(601)
				o->lt = null();
				HX_STACK_LINE(601)
				o->swapped = null();
			}
			HX_STACK_LINE(602)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
			HX_STACK_LINE(603)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionListener_obj,with_uniquesets,(void))

Void ZPP_InteractionListener_obj::CbTypeset( ::zpp_nape::util::ZNPList_ZPP_CbType A,::zpp_nape::util::ZNPList_ZPP_CbType B,Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_InteractionListener::CbTypeset","zpp_nape/callbacks/Listener.hx",467);
		HX_STACK_THIS(this);
		HX_STACK_ARG(A,"A");
		HX_STACK_ARG(B,"B");
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(468)
		::zpp_nape::util::ZNPList_ZPP_CbType U = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbType;		HX_STACK_VAR(U,"U");
		HX_STACK_LINE(469)
		::zpp_nape::util::ZNPList_ZPP_CbType V = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbType;		HX_STACK_VAR(V,"V");
		HX_STACK_LINE(470)
		::zpp_nape::util::ZNPList_ZPP_CbType W = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbType;		HX_STACK_VAR(W,"W");
		HX_STACK_LINE(471)
		::zpp_nape::util::ZNPNode_ZPP_CbType aite = A->head;		HX_STACK_VAR(aite,"aite");
		HX_STACK_LINE(472)
		::zpp_nape::util::ZNPNode_ZPP_CbType bite = B->head;		HX_STACK_VAR(bite,"bite");
		HX_STACK_LINE(473)
		while(((bool((aite != null())) && bool((bite != null()))))){
			HX_STACK_LINE(474)
			::zpp_nape::callbacks::ZPP_CbType a = aite->elt;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(475)
			::zpp_nape::callbacks::ZPP_CbType b = bite->elt;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(476)
			if (((a == b))){
				HX_STACK_LINE(477)
				{
					struct _Function_4_1{
						inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &a){
							HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",477);
							{
								HX_STACK_LINE(477)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(477)
								{
									HX_STACK_LINE(477)
									if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
										HX_STACK_LINE(477)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
									}
									else{
										HX_STACK_LINE(477)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
										HX_STACK_LINE(477)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(477)
										ret->next = null();
									}
									HX_STACK_LINE(477)
									Dynamic();
								}
								HX_STACK_LINE(477)
								ret->elt = a;
								HX_STACK_LINE(477)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(477)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_4_1::Block(a);		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(477)
					temp->next = W->head;
					HX_STACK_LINE(477)
					W->head = temp;
					HX_STACK_LINE(477)
					W->modified = true;
					HX_STACK_LINE(477)
					(W->length)++;
					HX_STACK_LINE(477)
					a;
				}
				HX_STACK_LINE(478)
				aite = aite->next;
				HX_STACK_LINE(479)
				bite = bite->next;
			}
			else{
				HX_STACK_LINE(481)
				if (((a->id < b->id))){
					HX_STACK_LINE(482)
					{
						struct _Function_5_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &a){
								HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",482);
								{
									HX_STACK_LINE(482)
									::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(482)
									{
										HX_STACK_LINE(482)
										if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
											HX_STACK_LINE(482)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
										}
										else{
											HX_STACK_LINE(482)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
											HX_STACK_LINE(482)
											::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
											HX_STACK_LINE(482)
											ret->next = null();
										}
										HX_STACK_LINE(482)
										Dynamic();
									}
									HX_STACK_LINE(482)
									ret->elt = a;
									HX_STACK_LINE(482)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(482)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_5_1::Block(a);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(482)
						temp->next = U->head;
						HX_STACK_LINE(482)
						U->head = temp;
						HX_STACK_LINE(482)
						U->modified = true;
						HX_STACK_LINE(482)
						(U->length)++;
						HX_STACK_LINE(482)
						a;
					}
					HX_STACK_LINE(483)
					aite = aite->next;
				}
				else{
					HX_STACK_LINE(486)
					{
						struct _Function_5_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &b){
								HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",486);
								{
									HX_STACK_LINE(486)
									::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(486)
									{
										HX_STACK_LINE(486)
										if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
											HX_STACK_LINE(486)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
										}
										else{
											HX_STACK_LINE(486)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
											HX_STACK_LINE(486)
											::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
											HX_STACK_LINE(486)
											ret->next = null();
										}
										HX_STACK_LINE(486)
										Dynamic();
									}
									HX_STACK_LINE(486)
									ret->elt = b;
									HX_STACK_LINE(486)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(486)
						::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_5_1::Block(b);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(486)
						temp->next = V->head;
						HX_STACK_LINE(486)
						V->head = temp;
						HX_STACK_LINE(486)
						V->modified = true;
						HX_STACK_LINE(486)
						(V->length)++;
						HX_STACK_LINE(486)
						b;
					}
					HX_STACK_LINE(487)
					bite = bite->next;
				}
			}
		}
		HX_STACK_LINE(490)
		while(((aite != null()))){
			HX_STACK_LINE(491)
			{
				HX_STACK_LINE(491)
				::zpp_nape::callbacks::ZPP_CbType o = aite->elt;		HX_STACK_VAR(o,"o");
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",491);
						{
							HX_STACK_LINE(491)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(491)
							{
								HX_STACK_LINE(491)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
									HX_STACK_LINE(491)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
								}
								else{
									HX_STACK_LINE(491)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
									HX_STACK_LINE(491)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(491)
									ret->next = null();
								}
								HX_STACK_LINE(491)
								Dynamic();
							}
							HX_STACK_LINE(491)
							ret->elt = o;
							HX_STACK_LINE(491)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(491)
				::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_3_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(491)
				temp->next = U->head;
				HX_STACK_LINE(491)
				U->head = temp;
				HX_STACK_LINE(491)
				U->modified = true;
				HX_STACK_LINE(491)
				(U->length)++;
				HX_STACK_LINE(491)
				o;
			}
			HX_STACK_LINE(492)
			aite = aite->next;
		}
		HX_STACK_LINE(494)
		while(((bite != null()))){
			HX_STACK_LINE(495)
			{
				HX_STACK_LINE(495)
				::zpp_nape::callbacks::ZPP_CbType o = bite->elt;		HX_STACK_VAR(o,"o");
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",495);
						{
							HX_STACK_LINE(495)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(495)
							{
								HX_STACK_LINE(495)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
									HX_STACK_LINE(495)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
								}
								else{
									HX_STACK_LINE(495)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
									HX_STACK_LINE(495)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(495)
									ret->next = null();
								}
								HX_STACK_LINE(495)
								Dynamic();
							}
							HX_STACK_LINE(495)
							ret->elt = o;
							HX_STACK_LINE(495)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(495)
				::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_3_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(495)
				temp->next = V->head;
				HX_STACK_LINE(495)
				V->head = temp;
				HX_STACK_LINE(495)
				V->modified = true;
				HX_STACK_LINE(495)
				(V->length)++;
				HX_STACK_LINE(495)
				o;
			}
			HX_STACK_LINE(496)
			bite = bite->next;
		}
		HX_STACK_LINE(498)
		while((!(((U->head == null()))))){
			HX_STACK_LINE(500)
			::zpp_nape::callbacks::ZPP_CbType x = U->pop_unsafe();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(502)
				::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = B->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(503)
				while(((cx_ite != null()))){
					HX_STACK_LINE(504)
					::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(505)
					lambda(x,y).Cast< Void >();
					HX_STACK_LINE(506)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(511)
		while((!(((V->head == null()))))){
			HX_STACK_LINE(513)
			::zpp_nape::callbacks::ZPP_CbType x = V->pop_unsafe();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(515)
				::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(516)
				while(((cx_ite != null()))){
					HX_STACK_LINE(517)
					::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(518)
					lambda(x,y).Cast< Void >();
					HX_STACK_LINE(519)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(524)
		while((!(((W->head == null()))))){
			HX_STACK_LINE(526)
			::zpp_nape::callbacks::ZPP_CbType x = W->pop_unsafe();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(527)
			{
				HX_STACK_LINE(528)
				lambda(x,x).Cast< Void >();
				HX_STACK_LINE(529)
				{
					HX_STACK_LINE(530)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(531)
					while(((cx_ite != null()))){
						HX_STACK_LINE(532)
						::zpp_nape::callbacks::ZPP_CbType y = cx_ite->elt;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(533)
						lambda(x,y).Cast< Void >();
						HX_STACK_LINE(534)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_InteractionListener_obj,CbTypeset,(void))

Void ZPP_InteractionListener_obj::CbSetset( ::zpp_nape::util::ZNPList_ZPP_CbSet A,::zpp_nape::util::ZNPList_ZPP_CbSet B,Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_InteractionListener::CbSetset","zpp_nape/callbacks/Listener.hx",388);
		HX_STACK_THIS(this);
		HX_STACK_ARG(A,"A");
		HX_STACK_ARG(B,"B");
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(389)
		::zpp_nape::util::ZNPList_ZPP_CbSet U = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::UCbSet;		HX_STACK_VAR(U,"U");
		HX_STACK_LINE(390)
		::zpp_nape::util::ZNPList_ZPP_CbSet V = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::VCbSet;		HX_STACK_VAR(V,"V");
		HX_STACK_LINE(391)
		::zpp_nape::util::ZNPList_ZPP_CbSet W = ::zpp_nape::callbacks::ZPP_InteractionListener_obj::WCbSet;		HX_STACK_VAR(W,"W");
		HX_STACK_LINE(392)
		::zpp_nape::util::ZNPNode_ZPP_CbSet aite = A->head;		HX_STACK_VAR(aite,"aite");
		HX_STACK_LINE(393)
		::zpp_nape::util::ZNPNode_ZPP_CbSet bite = B->head;		HX_STACK_VAR(bite,"bite");
		HX_STACK_LINE(394)
		while(((bool((aite != null())) && bool((bite != null()))))){
			HX_STACK_LINE(395)
			::zpp_nape::callbacks::ZPP_CbSet a = aite->elt;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(396)
			::zpp_nape::callbacks::ZPP_CbSet b = bite->elt;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(397)
			if (((a == b))){
				HX_STACK_LINE(398)
				{
					struct _Function_4_1{
						inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &a){
							HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",398);
							{
								HX_STACK_LINE(398)
								::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(398)
								{
									HX_STACK_LINE(398)
									if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
										HX_STACK_LINE(398)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
									}
									else{
										HX_STACK_LINE(398)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
										HX_STACK_LINE(398)
										::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
										HX_STACK_LINE(398)
										ret->next = null();
									}
									HX_STACK_LINE(398)
									Dynamic();
								}
								HX_STACK_LINE(398)
								ret->elt = a;
								HX_STACK_LINE(398)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(398)
					::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_4_1::Block(a);		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(398)
					temp->next = W->head;
					HX_STACK_LINE(398)
					W->head = temp;
					HX_STACK_LINE(398)
					W->modified = true;
					HX_STACK_LINE(398)
					(W->length)++;
					HX_STACK_LINE(398)
					a;
				}
				HX_STACK_LINE(399)
				aite = aite->next;
				HX_STACK_LINE(400)
				bite = bite->next;
			}
			else{
				HX_STACK_LINE(402)
				if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
					HX_STACK_LINE(403)
					{
						struct _Function_5_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &a){
								HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",403);
								{
									HX_STACK_LINE(403)
									::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(403)
									{
										HX_STACK_LINE(403)
										if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
											HX_STACK_LINE(403)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
										}
										else{
											HX_STACK_LINE(403)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
											HX_STACK_LINE(403)
											::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
											HX_STACK_LINE(403)
											ret->next = null();
										}
										HX_STACK_LINE(403)
										Dynamic();
									}
									HX_STACK_LINE(403)
									ret->elt = a;
									HX_STACK_LINE(403)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(403)
						::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_5_1::Block(a);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(403)
						temp->next = U->head;
						HX_STACK_LINE(403)
						U->head = temp;
						HX_STACK_LINE(403)
						U->modified = true;
						HX_STACK_LINE(403)
						(U->length)++;
						HX_STACK_LINE(403)
						a;
					}
					HX_STACK_LINE(404)
					aite = aite->next;
				}
				else{
					HX_STACK_LINE(407)
					{
						struct _Function_5_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &b){
								HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",407);
								{
									HX_STACK_LINE(407)
									::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(407)
									{
										HX_STACK_LINE(407)
										if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
											HX_STACK_LINE(407)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
										}
										else{
											HX_STACK_LINE(407)
											ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
											HX_STACK_LINE(407)
											::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
											HX_STACK_LINE(407)
											ret->next = null();
										}
										HX_STACK_LINE(407)
										Dynamic();
									}
									HX_STACK_LINE(407)
									ret->elt = b;
									HX_STACK_LINE(407)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(407)
						::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_5_1::Block(b);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(407)
						temp->next = V->head;
						HX_STACK_LINE(407)
						V->head = temp;
						HX_STACK_LINE(407)
						V->modified = true;
						HX_STACK_LINE(407)
						(V->length)++;
						HX_STACK_LINE(407)
						b;
					}
					HX_STACK_LINE(408)
					bite = bite->next;
				}
			}
		}
		HX_STACK_LINE(411)
		while(((aite != null()))){
			HX_STACK_LINE(412)
			{
				HX_STACK_LINE(412)
				::zpp_nape::callbacks::ZPP_CbSet o = aite->elt;		HX_STACK_VAR(o,"o");
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",412);
						{
							HX_STACK_LINE(412)
							::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(412)
							{
								HX_STACK_LINE(412)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
									HX_STACK_LINE(412)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
								}
								else{
									HX_STACK_LINE(412)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
									HX_STACK_LINE(412)
									::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
									HX_STACK_LINE(412)
									ret->next = null();
								}
								HX_STACK_LINE(412)
								Dynamic();
							}
							HX_STACK_LINE(412)
							ret->elt = o;
							HX_STACK_LINE(412)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(412)
				::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_3_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(412)
				temp->next = U->head;
				HX_STACK_LINE(412)
				U->head = temp;
				HX_STACK_LINE(412)
				U->modified = true;
				HX_STACK_LINE(412)
				(U->length)++;
				HX_STACK_LINE(412)
				o;
			}
			HX_STACK_LINE(413)
			aite = aite->next;
		}
		HX_STACK_LINE(415)
		while(((bite != null()))){
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				::zpp_nape::callbacks::ZPP_CbSet o = bite->elt;		HX_STACK_VAR(o,"o");
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/Listener.hx",416);
						{
							HX_STACK_LINE(416)
							::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(416)
							{
								HX_STACK_LINE(416)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
									HX_STACK_LINE(416)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
								}
								else{
									HX_STACK_LINE(416)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
									HX_STACK_LINE(416)
									::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
									HX_STACK_LINE(416)
									ret->next = null();
								}
								HX_STACK_LINE(416)
								Dynamic();
							}
							HX_STACK_LINE(416)
							ret->elt = o;
							HX_STACK_LINE(416)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(416)
				::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_3_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(416)
				temp->next = V->head;
				HX_STACK_LINE(416)
				V->head = temp;
				HX_STACK_LINE(416)
				V->modified = true;
				HX_STACK_LINE(416)
				(V->length)++;
				HX_STACK_LINE(416)
				o;
			}
			HX_STACK_LINE(417)
			bite = bite->next;
		}
		HX_STACK_LINE(419)
		while((!(((U->head == null()))))){
			HX_STACK_LINE(421)
			::zpp_nape::callbacks::ZPP_CbSet x = U->pop_unsafe();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(422)
			{
				HX_STACK_LINE(423)
				::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = B->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(424)
				while(((cx_ite != null()))){
					HX_STACK_LINE(425)
					::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(426)
					lambda(x,y).Cast< Void >();
					HX_STACK_LINE(427)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(432)
		while((!(((V->head == null()))))){
			HX_STACK_LINE(434)
			::zpp_nape::callbacks::ZPP_CbSet x = V->pop_unsafe();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(435)
			{
				HX_STACK_LINE(436)
				::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(437)
				while(((cx_ite != null()))){
					HX_STACK_LINE(438)
					::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(439)
					lambda(x,y).Cast< Void >();
					HX_STACK_LINE(440)
					cx_ite = cx_ite->next;
				}
			}
		}
		HX_STACK_LINE(445)
		while((!(((W->head == null()))))){
			HX_STACK_LINE(447)
			::zpp_nape::callbacks::ZPP_CbSet x = W->pop_unsafe();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(448)
			{
				HX_STACK_LINE(449)
				lambda(x,x).Cast< Void >();
				HX_STACK_LINE(450)
				{
					HX_STACK_LINE(451)
					::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = W->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(452)
					while(((cx_ite != null()))){
						HX_STACK_LINE(453)
						::zpp_nape::callbacks::ZPP_CbSet y = cx_ite->elt;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(454)
						lambda(x,y).Cast< Void >();
						HX_STACK_LINE(455)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_InteractionListener_obj,CbSetset,(void))

Void ZPP_InteractionListener_obj::wake( ){
{
		HX_STACK_PUSH("ZPP_InteractionListener::wake","zpp_nape/callbacks/Listener.hx",360);
		HX_STACK_THIS(this);
		HX_STACK_LINE(369)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite1 = this->options1->includes->head;		HX_STACK_VAR(ite1,"ite1");
		HX_STACK_LINE(369)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite2 = this->options2->includes->head;		HX_STACK_VAR(ite2,"ite2");
		HX_STACK_LINE(369)
		while(((bool((ite1 != null())) && bool((ite2 != null()))))){
			HX_STACK_LINE(369)
			::zpp_nape::callbacks::ZPP_CbType cb1 = ite1->elt;		HX_STACK_VAR(cb1,"cb1");
			HX_STACK_LINE(369)
			::zpp_nape::callbacks::ZPP_CbType cb2 = ite2->elt;		HX_STACK_VAR(cb2,"cb2");
			HX_STACK_LINE(369)
			if (((cb1 == cb2))){
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(369)
					while(((cx_ite != null()))){
						HX_STACK_LINE(369)
						::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(369)
						i->wake();
						HX_STACK_LINE(369)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(369)
				ite1 = ite1->next;
				HX_STACK_LINE(369)
				ite2 = ite2->next;
			}
			else{
				HX_STACK_LINE(369)
				if (((cb1->id < cb2->id))){
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb1->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(369)
						while(((cx_ite != null()))){
							HX_STACK_LINE(369)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(369)
							i->wake();
							HX_STACK_LINE(369)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(369)
					ite1 = ite1->next;
				}
				else{
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = cb2->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(369)
						while(((cx_ite != null()))){
							HX_STACK_LINE(369)
							::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(369)
							i->wake();
							HX_STACK_LINE(369)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(369)
					ite2 = ite2->next;
				}
			}
		}
		HX_STACK_LINE(369)
		while(((ite1 != null()))){
			HX_STACK_LINE(369)
			{
				HX_STACK_LINE(369)
				::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = ite1->elt->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(369)
				while(((cx_ite != null()))){
					HX_STACK_LINE(369)
					::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(369)
					i->wake();
					HX_STACK_LINE(369)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(369)
			ite1 = ite1->next;
		}
		HX_STACK_LINE(369)
		while(((ite2 != null()))){
			HX_STACK_LINE(369)
			{
				HX_STACK_LINE(369)
				::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = ite2->elt->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(369)
				while(((cx_ite != null()))){
					HX_STACK_LINE(369)
					::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(369)
					i->wake();
					HX_STACK_LINE(369)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(369)
			ite2 = ite2->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_InteractionListener_obj,wake,(void))

Void ZPP_InteractionListener_obj::setInteractionType( int itype){
{
		HX_STACK_PUSH("ZPP_InteractionListener::setInteractionType","zpp_nape/callbacks/Listener.hx",348);
		HX_STACK_THIS(this);
		HX_STACK_ARG(itype,"itype");
		HX_STACK_LINE(348)
		this->itype = itype;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionListener_obj,setInteractionType,(void))

::zpp_nape::util::ZNPList_ZPP_CbSet ZPP_InteractionListener_obj::UCbSet;

::zpp_nape::util::ZNPList_ZPP_CbSet ZPP_InteractionListener_obj::VCbSet;

::zpp_nape::util::ZNPList_ZPP_CbSet ZPP_InteractionListener_obj::WCbSet;

::zpp_nape::util::ZNPList_ZPP_CbType ZPP_InteractionListener_obj::UCbType;

::zpp_nape::util::ZNPList_ZPP_CbType ZPP_InteractionListener_obj::VCbType;

::zpp_nape::util::ZNPList_ZPP_CbType ZPP_InteractionListener_obj::WCbType;


ZPP_InteractionListener_obj::ZPP_InteractionListener_obj()
{
}

void ZPP_InteractionListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_InteractionListener);
	HX_MARK_MEMBER_NAME(handlerp,"handlerp");
	HX_MARK_MEMBER_NAME(pure,"pure");
	HX_MARK_MEMBER_NAME(allowSleepingCallbacks,"allowSleepingCallbacks");
	HX_MARK_MEMBER_NAME(handleri,"handleri");
	HX_MARK_MEMBER_NAME(options2,"options2");
	HX_MARK_MEMBER_NAME(options1,"options1");
	HX_MARK_MEMBER_NAME(itype,"itype");
	HX_MARK_MEMBER_NAME(outer_znp,"outer_znp");
	HX_MARK_MEMBER_NAME(outer_zni,"outer_zni");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_InteractionListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handlerp,"handlerp");
	HX_VISIT_MEMBER_NAME(pure,"pure");
	HX_VISIT_MEMBER_NAME(allowSleepingCallbacks,"allowSleepingCallbacks");
	HX_VISIT_MEMBER_NAME(handleri,"handleri");
	HX_VISIT_MEMBER_NAME(options2,"options2");
	HX_VISIT_MEMBER_NAME(options1,"options1");
	HX_VISIT_MEMBER_NAME(itype,"itype");
	HX_VISIT_MEMBER_NAME(outer_znp,"outer_znp");
	HX_VISIT_MEMBER_NAME(outer_zni,"outer_zni");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_InteractionListener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wake") ) { return wake_dyn(); }
		if (HX_FIELD_EQ(inName,"pure") ) { return pure; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { return itype; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UCbSet") ) { return UCbSet; }
		if (HX_FIELD_EQ(inName,"VCbSet") ) { return VCbSet; }
		if (HX_FIELD_EQ(inName,"WCbSet") ) { return WCbSet; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UCbType") ) { return UCbType; }
		if (HX_FIELD_EQ(inName,"VCbType") ) { return VCbType; }
		if (HX_FIELD_EQ(inName,"WCbType") ) { return WCbType; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"CbSetset") ) { return CbSetset_dyn(); }
		if (HX_FIELD_EQ(inName,"handlerp") ) { return handlerp; }
		if (HX_FIELD_EQ(inName,"handleri") ) { return handleri; }
		if (HX_FIELD_EQ(inName,"options2") ) { return options2; }
		if (HX_FIELD_EQ(inName,"options1") ) { return options1; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swapEvent") ) { return swapEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"CbTypeset") ) { return CbTypeset_dyn(); }
		if (HX_FIELD_EQ(inName,"outer_znp") ) { return outer_znp; }
		if (HX_FIELD_EQ(inName,"outer_zni") ) { return outer_zni; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"with_union") ) { return with_union_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cbtype_change") ) { return cbtype_change_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cbtype_change2") ) { return cbtype_change2_dyn(); }
		if (HX_FIELD_EQ(inName,"cbtype_change1") ) { return cbtype_change1_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"with_uniquesets") ) { return with_uniquesets_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setInteractionType") ) { return setInteractionType_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"invalidate_precedence") ) { return invalidate_precedence_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { return allowSleepingCallbacks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_InteractionListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pure") ) { pure=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { itype=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UCbSet") ) { UCbSet=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VCbSet") ) { VCbSet=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WCbSet") ) { WCbSet=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSet >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UCbType") ) { UCbType=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VCbType") ) { VCbType=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WCbType") ) { WCbType=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"handlerp") ) { handlerp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handleri") ) { handleri=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options2") ) { options2=inValue.Cast< ::zpp_nape::callbacks::ZPP_OptionType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"options1") ) { options1=inValue.Cast< ::zpp_nape::callbacks::ZPP_OptionType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"outer_znp") ) { outer_znp=inValue.Cast< ::nape::callbacks::PreListener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_zni") ) { outer_zni=inValue.Cast< ::nape::callbacks::InteractionListener >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowSleepingCallbacks") ) { allowSleepingCallbacks=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_InteractionListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pure"));
	outFields->push(HX_CSTRING("allowSleepingCallbacks"));
	outFields->push(HX_CSTRING("options2"));
	outFields->push(HX_CSTRING("options1"));
	outFields->push(HX_CSTRING("itype"));
	outFields->push(HX_CSTRING("outer_znp"));
	outFields->push(HX_CSTRING("outer_zni"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("UCbSet"),
	HX_CSTRING("VCbSet"),
	HX_CSTRING("WCbSet"),
	HX_CSTRING("UCbType"),
	HX_CSTRING("VCbType"),
	HX_CSTRING("WCbType"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("swapEvent"),
	HX_CSTRING("cbtype_change"),
	HX_CSTRING("cbtype_change2"),
	HX_CSTRING("cbtype_change1"),
	HX_CSTRING("invalidate_precedence"),
	HX_CSTRING("removedFromSpace"),
	HX_CSTRING("addedToSpace"),
	HX_CSTRING("with_union"),
	HX_CSTRING("with_uniquesets"),
	HX_CSTRING("CbTypeset"),
	HX_CSTRING("CbSetset"),
	HX_CSTRING("wake"),
	HX_CSTRING("setInteractionType"),
	HX_CSTRING("handlerp"),
	HX_CSTRING("pure"),
	HX_CSTRING("allowSleepingCallbacks"),
	HX_CSTRING("handleri"),
	HX_CSTRING("options2"),
	HX_CSTRING("options1"),
	HX_CSTRING("itype"),
	HX_CSTRING("outer_znp"),
	HX_CSTRING("outer_zni"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::UCbSet,"UCbSet");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::VCbSet,"VCbSet");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::WCbSet,"WCbSet");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::UCbType,"UCbType");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::VCbType,"VCbType");
	HX_MARK_MEMBER_NAME(ZPP_InteractionListener_obj::WCbType,"WCbType");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::UCbSet,"UCbSet");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::VCbSet,"VCbSet");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::WCbSet,"WCbSet");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::UCbType,"UCbType");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::VCbType,"VCbType");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionListener_obj::WCbType,"WCbType");
};

Class ZPP_InteractionListener_obj::__mClass;

void ZPP_InteractionListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.callbacks.ZPP_InteractionListener"), hx::TCanCast< ZPP_InteractionListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_InteractionListener_obj::__boot()
{
	UCbSet= ::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__new();
	VCbSet= ::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__new();
	WCbSet= ::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__new();
	UCbType= ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
	VCbType= ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
	WCbType= ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
}

} // end namespace zpp_nape
} // end namespace callbacks
