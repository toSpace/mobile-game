#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#include <nape/callbacks/CbTypeIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_OptionType_obj::__construct()
{
HX_STACK_PUSH("ZPP_OptionType::new","zpp_nape/callbacks/OptionType.hx",174);
{
	HX_STACK_LINE(184)
	this->wrap_excludes = null();
	HX_STACK_LINE(183)
	this->wrap_includes = null();
	HX_STACK_LINE(178)
	this->excludes = null();
	HX_STACK_LINE(177)
	this->includes = null();
	HX_STACK_LINE(176)
	this->handler = null();
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(180)
	this->includes = ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
	HX_STACK_LINE(181)
	this->excludes = ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
}
;
	return null();
}

ZPP_OptionType_obj::~ZPP_OptionType_obj() { }

Dynamic ZPP_OptionType_obj::__CreateEmpty() { return  new ZPP_OptionType_obj; }
hx::ObjectPtr< ZPP_OptionType_obj > ZPP_OptionType_obj::__new()
{  hx::ObjectPtr< ZPP_OptionType_obj > result = new ZPP_OptionType_obj();
	result->__construct();
	return result;}

Dynamic ZPP_OptionType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_OptionType_obj > result = new ZPP_OptionType_obj();
	result->__construct();
	return result;}

Void ZPP_OptionType_obj::append( ::zpp_nape::util::ZNPList_ZPP_CbType list,Dynamic val){
{
		HX_STACK_PUSH("ZPP_OptionType::append","zpp_nape/callbacks/OptionType.hx",312);
		HX_STACK_THIS(this);
		HX_STACK_ARG(list,"list");
		HX_STACK_ARG(val,"val");
		HX_STACK_LINE(314)
		if (((val == null()))){
			HX_STACK_LINE(314)
			hx::Throw (HX_CSTRING("Error: Cannot append null, only CbType and CbType list values"));
		}
		HX_STACK_LINE(318)
		if ((::Std_obj::is(val,hx::ClassOf< ::nape::callbacks::CbType >()))){
			HX_STACK_LINE(319)
			::nape::callbacks::CbType cb = val;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(320)
			this->append_type(list,cb->zpp_inner);
		}
		else{
			HX_STACK_LINE(322)
			if ((::Std_obj::is(val,hx::ClassOf< ::nape::callbacks::CbTypeList >()))){
				HX_STACK_LINE(323)
				::nape::callbacks::CbTypeList cbs = val;		HX_STACK_VAR(cbs,"cbs");
				struct _Function_3_1{
					inline static ::nape::callbacks::CbTypeIterator Block( ::nape::callbacks::CbTypeList &cbs){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/OptionType.hx",324);
						{
							HX_STACK_LINE(324)
							cbs->zpp_inner->valmod();
							HX_STACK_LINE(324)
							return ::nape::callbacks::CbTypeIterator_obj::get(cbs);
						}
						return null();
					}
				};
				HX_STACK_LINE(324)
				for(::cpp::FastIterator_obj< ::nape::callbacks::CbType > *__it = ::cpp::CreateFastIterator< ::nape::callbacks::CbType >(_Function_3_1::Block(cbs));  __it->hasNext(); ){
					::nape::callbacks::CbType cb = __it->next();
					this->append_type(list,cb->zpp_inner);
				}
			}
			else{
				HX_STACK_LINE(332)
				if ((::Std_obj::is(val,hx::ClassOf< Array<int> >()))){
					HX_STACK_LINE(333)
					Dynamic cbs = val;		HX_STACK_VAR(cbs,"cbs");
					HX_STACK_LINE(334)
					{
						HX_STACK_LINE(334)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(334)
						while(((_g < cbs->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(334)
							Dynamic cb = cbs->__GetItem(_g);		HX_STACK_VAR(cb,"cb");
							HX_STACK_LINE(334)
							++(_g);
							HX_STACK_LINE(336)
							if ((!(::Std_obj::is(cb,hx::ClassOf< ::nape::callbacks::CbType >())))){
								HX_STACK_LINE(336)
								hx::Throw (HX_CSTRING("Error: Cannot append non-CbType or CbType list value"));
							}
							HX_STACK_LINE(340)
							::nape::callbacks::CbType cbx = cb;		HX_STACK_VAR(cbx,"cbx");
							HX_STACK_LINE(341)
							this->append_type(list,cbx->zpp_inner);
						}
					}
				}
				else{
					HX_STACK_LINE(344)
					hx::Throw (HX_CSTRING("Error: Cannot append non-CbType or CbType list value"));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_OptionType_obj,append,(void))

::zpp_nape::callbacks::ZPP_OptionType ZPP_OptionType_obj::set( ::zpp_nape::callbacks::ZPP_OptionType options){
	HX_STACK_PUSH("ZPP_OptionType::set","zpp_nape/callbacks/OptionType.hx",289);
	HX_STACK_THIS(this);
	HX_STACK_ARG(options,"options");
	HX_STACK_LINE(290)
	if (((options != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(291)
		while((!(((this->includes->head == null()))))){
			HX_STACK_LINE(291)
			this->append_type(this->excludes,this->includes->head->elt);
		}
		HX_STACK_LINE(292)
		while((!(((this->excludes->head == null()))))){
			HX_STACK_LINE(292)
			this->append_type(this->includes,this->excludes->head->elt);
		}
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(294)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = options->excludes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(295)
			while(((cx_ite != null()))){
				HX_STACK_LINE(296)
				::zpp_nape::callbacks::ZPP_CbType i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(297)
				this->append_type(this->excludes,i);
				HX_STACK_LINE(298)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(301)
		{
			HX_STACK_LINE(302)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = options->includes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(303)
			while(((cx_ite != null()))){
				HX_STACK_LINE(304)
				::zpp_nape::callbacks::ZPP_CbType i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(305)
				this->append_type(this->includes,i);
				HX_STACK_LINE(306)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(310)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,set,return )

Void ZPP_OptionType_obj::append_type( ::zpp_nape::util::ZNPList_ZPP_CbType list,::zpp_nape::callbacks::ZPP_CbType val){
{
		HX_STACK_PUSH("ZPP_OptionType::append_type","zpp_nape/callbacks/OptionType.hx",263);
		HX_STACK_THIS(this);
		HX_STACK_ARG(list,"list");
		HX_STACK_ARG(val,"val");
		HX_STACK_LINE(263)
		if (((list == this->includes))){
			HX_STACK_LINE(264)
			if ((!(this->includes->has(val)))){
				HX_STACK_LINE(265)
				if ((!(this->excludes->has(val)))){
					HX_STACK_LINE(266)
					if (((this->handler_dyn() != null()))){
						HX_STACK_LINE(267)
						this->handler(val,true,true);
					}
					else{
						HX_STACK_LINE(268)
						::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(268)
						{
							HX_STACK_LINE(268)
							::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->includes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(268)
							while(((cx_ite != null()))){
								HX_STACK_LINE(268)
								::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(268)
								{
									HX_STACK_LINE(268)
									if (((val->id < j->id))){
										HX_STACK_LINE(268)
										break;
									}
									HX_STACK_LINE(268)
									pre = cx_ite;
								}
								HX_STACK_LINE(268)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(268)
						{
							HX_STACK_LINE(268)
							::zpp_nape::util::ZNPList_ZPP_CbType _this = this->includes;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(268)
							{
							}
							struct _Function_6_1{
								inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &val){
									HX_STACK_PUSH("*::closure","zpp_nape/callbacks/OptionType.hx",268);
									{
										HX_STACK_LINE(268)
										::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(268)
										{
											HX_STACK_LINE(268)
											if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
												HX_STACK_LINE(268)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
											}
											else{
												HX_STACK_LINE(268)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
												HX_STACK_LINE(268)
												::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
												HX_STACK_LINE(268)
												ret->next = null();
											}
											HX_STACK_LINE(268)
											Dynamic();
										}
										HX_STACK_LINE(268)
										ret->elt = val;
										HX_STACK_LINE(268)
										return ret;
									}
									return null();
								}
							};
							HX_STACK_LINE(268)
							::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_6_1::Block(val);		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(268)
							if (((pre == null()))){
								HX_STACK_LINE(268)
								temp->next = _this->head;
								HX_STACK_LINE(268)
								_this->head = temp;
							}
							else{
								HX_STACK_LINE(268)
								temp->next = pre->next;
								HX_STACK_LINE(268)
								pre->next = temp;
							}
							HX_STACK_LINE(268)
							_this->pushmod = _this->modified = true;
							HX_STACK_LINE(268)
							(_this->length)++;
							HX_STACK_LINE(268)
							temp;
						}
					}
				}
				else{
					HX_STACK_LINE(270)
					if (((this->handler_dyn() != null()))){
						HX_STACK_LINE(271)
						this->handler(val,false,false);
					}
					else{
						HX_STACK_LINE(272)
						this->excludes->remove(val);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(276)
			if ((!(this->excludes->has(val)))){
				HX_STACK_LINE(277)
				if ((!(this->includes->has(val)))){
					HX_STACK_LINE(278)
					if (((this->handler_dyn() != null()))){
						HX_STACK_LINE(279)
						this->handler(val,false,true);
					}
					else{
						HX_STACK_LINE(280)
						::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(280)
						{
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->excludes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(280)
							while(((cx_ite != null()))){
								HX_STACK_LINE(280)
								::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(280)
								{
									HX_STACK_LINE(280)
									if (((val->id < j->id))){
										HX_STACK_LINE(280)
										break;
									}
									HX_STACK_LINE(280)
									pre = cx_ite;
								}
								HX_STACK_LINE(280)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(280)
						{
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPList_ZPP_CbType _this = this->excludes;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(280)
							{
							}
							struct _Function_6_1{
								inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &val){
									HX_STACK_PUSH("*::closure","zpp_nape/callbacks/OptionType.hx",280);
									{
										HX_STACK_LINE(280)
										::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(280)
										{
											HX_STACK_LINE(280)
											if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
												HX_STACK_LINE(280)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
											}
											else{
												HX_STACK_LINE(280)
												ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
												HX_STACK_LINE(280)
												::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
												HX_STACK_LINE(280)
												ret->next = null();
											}
											HX_STACK_LINE(280)
											Dynamic();
										}
										HX_STACK_LINE(280)
										ret->elt = val;
										HX_STACK_LINE(280)
										return ret;
									}
									return null();
								}
							};
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_6_1::Block(val);		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(280)
							if (((pre == null()))){
								HX_STACK_LINE(280)
								temp->next = _this->head;
								HX_STACK_LINE(280)
								_this->head = temp;
							}
							else{
								HX_STACK_LINE(280)
								temp->next = pre->next;
								HX_STACK_LINE(280)
								pre->next = temp;
							}
							HX_STACK_LINE(280)
							_this->pushmod = _this->modified = true;
							HX_STACK_LINE(280)
							(_this->length)++;
							HX_STACK_LINE(280)
							temp;
						}
					}
				}
				else{
					HX_STACK_LINE(282)
					if (((this->handler_dyn() != null()))){
						HX_STACK_LINE(283)
						this->handler(val,true,false);
					}
					else{
						HX_STACK_LINE(284)
						this->includes->remove(val);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_OptionType_obj,append_type,(void))

Void ZPP_OptionType_obj::effect_change( ::zpp_nape::callbacks::ZPP_CbType val,bool included,bool added){
{
		HX_STACK_PUSH("ZPP_OptionType::effect_change","zpp_nape/callbacks/OptionType.hx",225);
		HX_STACK_THIS(this);
		HX_STACK_ARG(val,"val");
		HX_STACK_ARG(included,"included");
		HX_STACK_ARG(added,"added");
		HX_STACK_LINE(225)
		if ((included)){
			HX_STACK_LINE(226)
			if ((added)){
				HX_STACK_LINE(228)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(230)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->includes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(231)
					while(((cx_ite != null()))){
						HX_STACK_LINE(232)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(234)
							if (((val->id < j->id))){
								HX_STACK_LINE(234)
								break;
							}
							HX_STACK_LINE(235)
							pre = cx_ite;
						}
						HX_STACK_LINE(237)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = this->includes;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(240)
					{
					}
					struct _Function_4_1{
						inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &val){
							HX_STACK_PUSH("*::closure","zpp_nape/callbacks/OptionType.hx",240);
							{
								HX_STACK_LINE(240)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(240)
								{
									HX_STACK_LINE(240)
									if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
										HX_STACK_LINE(240)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
									}
									else{
										HX_STACK_LINE(240)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
										HX_STACK_LINE(240)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(240)
										ret->next = null();
									}
									HX_STACK_LINE(240)
									Dynamic();
								}
								HX_STACK_LINE(240)
								ret->elt = val;
								HX_STACK_LINE(240)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(240)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_4_1::Block(val);		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(240)
					if (((pre == null()))){
						HX_STACK_LINE(240)
						temp->next = _this->head;
						HX_STACK_LINE(240)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(240)
						temp->next = pre->next;
						HX_STACK_LINE(240)
						pre->next = temp;
					}
					HX_STACK_LINE(240)
					_this->pushmod = _this->modified = true;
					HX_STACK_LINE(240)
					(_this->length)++;
					HX_STACK_LINE(240)
					temp;
				}
			}
			else{
				HX_STACK_LINE(242)
				this->includes->remove(val);
			}
		}
		else{
			HX_STACK_LINE(244)
			if ((added)){
				HX_STACK_LINE(246)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(248)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->excludes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(249)
					while(((cx_ite != null()))){
						HX_STACK_LINE(250)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(251)
						{
							HX_STACK_LINE(252)
							if (((val->id < j->id))){
								HX_STACK_LINE(252)
								break;
							}
							HX_STACK_LINE(253)
							pre = cx_ite;
						}
						HX_STACK_LINE(255)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = this->excludes;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(258)
					{
					}
					struct _Function_4_1{
						inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &val){
							HX_STACK_PUSH("*::closure","zpp_nape/callbacks/OptionType.hx",258);
							{
								HX_STACK_LINE(258)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
										HX_STACK_LINE(258)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
									}
									else{
										HX_STACK_LINE(258)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
										HX_STACK_LINE(258)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(258)
										ret->next = null();
									}
									HX_STACK_LINE(258)
									Dynamic();
								}
								HX_STACK_LINE(258)
								ret->elt = val;
								HX_STACK_LINE(258)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_4_1::Block(val);		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(258)
					if (((pre == null()))){
						HX_STACK_LINE(258)
						temp->next = _this->head;
						HX_STACK_LINE(258)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(258)
						temp->next = pre->next;
						HX_STACK_LINE(258)
						pre->next = temp;
					}
					HX_STACK_LINE(258)
					_this->pushmod = _this->modified = true;
					HX_STACK_LINE(258)
					(_this->length)++;
					HX_STACK_LINE(258)
					temp;
				}
			}
			else{
				HX_STACK_LINE(260)
				this->excludes->remove(val);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_OptionType_obj,effect_change,(void))

bool ZPP_OptionType_obj::nonemptyintersection( ::zpp_nape::util::ZNPList_ZPP_CbType xs,::zpp_nape::util::ZNPList_ZPP_CbType ys){
	HX_STACK_PUSH("ZPP_OptionType::nonemptyintersection","zpp_nape/callbacks/OptionType.hx",203);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xs,"xs");
	HX_STACK_ARG(ys,"ys");
	HX_STACK_LINE(204)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(205)
	::zpp_nape::util::ZNPNode_ZPP_CbType xite = xs->head;		HX_STACK_VAR(xite,"xite");
	HX_STACK_LINE(206)
	::zpp_nape::util::ZNPNode_ZPP_CbType eite = ys->head;		HX_STACK_VAR(eite,"eite");
	HX_STACK_LINE(207)
	while(((bool((eite != null())) && bool((xite != null()))))){
		HX_STACK_LINE(208)
		::zpp_nape::callbacks::ZPP_CbType ex = eite->elt;		HX_STACK_VAR(ex,"ex");
		HX_STACK_LINE(209)
		::zpp_nape::callbacks::ZPP_CbType xi = xite->elt;		HX_STACK_VAR(xi,"xi");
		HX_STACK_LINE(210)
		if (((ex == xi))){
			HX_STACK_LINE(211)
			ret = true;
			HX_STACK_LINE(212)
			break;
		}
		else{
			HX_STACK_LINE(214)
			if (((ex->id < xi->id))){
				HX_STACK_LINE(214)
				eite = eite->next;
			}
			else{
				HX_STACK_LINE(217)
				xite = xite->next;
			}
		}
	}
	HX_STACK_LINE(221)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_OptionType_obj,nonemptyintersection,return )

bool ZPP_OptionType_obj::compatible( ::zpp_nape::util::ZNPList_ZPP_CbType xs){
	HX_STACK_PUSH("ZPP_OptionType::compatible","zpp_nape/callbacks/OptionType.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xs,"xs");
	HX_STACK_LINE(200)
	return (bool(this->nonemptyintersection(xs,this->includes)) && bool(!(this->nonemptyintersection(xs,this->excludes))));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,compatible,return )

bool ZPP_OptionType_obj::included( ::zpp_nape::util::ZNPList_ZPP_CbType xs){
	HX_STACK_PUSH("ZPP_OptionType::included","zpp_nape/callbacks/OptionType.hx",196);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xs,"xs");
	HX_STACK_LINE(196)
	return this->nonemptyintersection(xs,this->includes);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,included,return )

bool ZPP_OptionType_obj::excluded( ::zpp_nape::util::ZNPList_ZPP_CbType xs){
	HX_STACK_PUSH("ZPP_OptionType::excluded","zpp_nape/callbacks/OptionType.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xs,"xs");
	HX_STACK_LINE(192)
	return this->nonemptyintersection(xs,this->excludes);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,excluded,return )

Void ZPP_OptionType_obj::setup_excludes( ){
{
		HX_STACK_PUSH("ZPP_OptionType::setup_excludes","zpp_nape/callbacks/OptionType.hx",188);
		HX_STACK_THIS(this);
		HX_STACK_LINE(188)
		this->wrap_excludes = ::zpp_nape::util::ZPP_CbTypeList_obj::get(this->excludes,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_OptionType_obj,setup_excludes,(void))

Void ZPP_OptionType_obj::setup_includes( ){
{
		HX_STACK_PUSH("ZPP_OptionType::setup_includes","zpp_nape/callbacks/OptionType.hx",185);
		HX_STACK_THIS(this);
		HX_STACK_LINE(185)
		this->wrap_includes = ::zpp_nape::util::ZPP_CbTypeList_obj::get(this->includes,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_OptionType_obj,setup_includes,(void))

::nape::callbacks::OptionType ZPP_OptionType_obj::argument( Dynamic val){
	HX_STACK_PUSH("ZPP_OptionType::argument","zpp_nape/callbacks/OptionType.hx",350);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(350)
	return (  (((val == null()))) ? ::nape::callbacks::OptionType(::nape::callbacks::OptionType_obj::__new(null(),null())) : ::nape::callbacks::OptionType((  ((::Std_obj::is(val,hx::ClassOf< ::nape::callbacks::OptionType >()))) ? ::nape::callbacks::OptionType(val) : ::nape::callbacks::OptionType(::nape::callbacks::OptionType_obj::__new(null(),null())->including(val)) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_OptionType_obj,argument,return )


ZPP_OptionType_obj::ZPP_OptionType_obj()
{
}

void ZPP_OptionType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_OptionType);
	HX_MARK_MEMBER_NAME(wrap_excludes,"wrap_excludes");
	HX_MARK_MEMBER_NAME(wrap_includes,"wrap_includes");
	HX_MARK_MEMBER_NAME(excludes,"excludes");
	HX_MARK_MEMBER_NAME(includes,"includes");
	HX_MARK_MEMBER_NAME(handler,"handler");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_END_CLASS();
}

void ZPP_OptionType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wrap_excludes,"wrap_excludes");
	HX_VISIT_MEMBER_NAME(wrap_includes,"wrap_includes");
	HX_VISIT_MEMBER_NAME(excludes,"excludes");
	HX_VISIT_MEMBER_NAME(includes,"includes");
	HX_VISIT_MEMBER_NAME(handler,"handler");
	HX_VISIT_MEMBER_NAME(outer,"outer");
}

Dynamic ZPP_OptionType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return handler; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"argument") ) { return argument_dyn(); }
		if (HX_FIELD_EQ(inName,"included") ) { return included_dyn(); }
		if (HX_FIELD_EQ(inName,"excluded") ) { return excluded_dyn(); }
		if (HX_FIELD_EQ(inName,"excludes") ) { return excludes; }
		if (HX_FIELD_EQ(inName,"includes") ) { return includes; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compatible") ) { return compatible_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"append_type") ) { return append_type_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"effect_change") ) { return effect_change_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_excludes") ) { return wrap_excludes; }
		if (HX_FIELD_EQ(inName,"wrap_includes") ) { return wrap_includes; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setup_excludes") ) { return setup_excludes_dyn(); }
		if (HX_FIELD_EQ(inName,"setup_includes") ) { return setup_includes_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nonemptyintersection") ) { return nonemptyintersection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_OptionType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::callbacks::OptionType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"excludes") ) { excludes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"includes") ) { includes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_excludes") ) { wrap_excludes=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_includes") ) { wrap_includes=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_OptionType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("wrap_excludes"));
	outFields->push(HX_CSTRING("wrap_includes"));
	outFields->push(HX_CSTRING("excludes"));
	outFields->push(HX_CSTRING("includes"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("argument"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("append"),
	HX_CSTRING("set"),
	HX_CSTRING("append_type"),
	HX_CSTRING("effect_change"),
	HX_CSTRING("nonemptyintersection"),
	HX_CSTRING("compatible"),
	HX_CSTRING("included"),
	HX_CSTRING("excluded"),
	HX_CSTRING("setup_excludes"),
	HX_CSTRING("setup_includes"),
	HX_CSTRING("wrap_excludes"),
	HX_CSTRING("wrap_includes"),
	HX_CSTRING("excludes"),
	HX_CSTRING("includes"),
	HX_CSTRING("handler"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_OptionType_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_OptionType_obj::__mClass,"__mClass");
};

Class ZPP_OptionType_obj::__mClass;

void ZPP_OptionType_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.callbacks.ZPP_OptionType"), hx::TCanCast< ZPP_OptionType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_OptionType_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace callbacks
