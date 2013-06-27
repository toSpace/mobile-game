#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_Arbiter_obj::__construct()
{
HX_STACK_PUSH("ZPP_Arbiter::new","zpp_nape/dynamics/Arbiter.hx",174);
{
	HX_STACK_LINE(266)
	this->sensorarb = null();
	HX_STACK_LINE(265)
	this->fluidarb = null();
	HX_STACK_LINE(264)
	this->colarb = null();
	HX_STACK_LINE(260)
	this->type = (int)0;
	HX_STACK_LINE(232)
	this->pair = null();
	HX_STACK_LINE(231)
	this->ws2 = null();
	HX_STACK_LINE(230)
	this->ws1 = null();
	HX_STACK_LINE(229)
	this->b2 = null();
	HX_STACK_LINE(228)
	this->b1 = null();
	HX_STACK_LINE(227)
	this->invalidated = false;
	HX_STACK_LINE(221)
	this->immState = (int)0;
	HX_STACK_LINE(220)
	this->fresh = false;
	HX_STACK_LINE(219)
	this->continuous = false;
	HX_STACK_LINE(218)
	this->presentable = false;
	HX_STACK_LINE(217)
	this->intchange = false;
	HX_STACK_LINE(216)
	this->present = (int)0;
	HX_STACK_LINE(215)
	this->sleeping = false;
	HX_STACK_LINE(214)
	this->cleared = false;
	HX_STACK_LINE(213)
	this->active = false;
	HX_STACK_LINE(212)
	this->endGenerated = (int)0;
	HX_STACK_LINE(211)
	this->sleep_stamp = (int)0;
	HX_STACK_LINE(210)
	this->up_stamp = (int)0;
	HX_STACK_LINE(209)
	this->stamp = (int)0;
	HX_STACK_LINE(208)
	this->di = (int)0;
	HX_STACK_LINE(207)
	this->id = (int)0;
	HX_STACK_LINE(202)
	this->hnext = null();
	HX_STACK_LINE(175)
	this->outer = null();
}
;
	return null();
}

ZPP_Arbiter_obj::~ZPP_Arbiter_obj() { }

Dynamic ZPP_Arbiter_obj::__CreateEmpty() { return  new ZPP_Arbiter_obj; }
hx::ObjectPtr< ZPP_Arbiter_obj > ZPP_Arbiter_obj::__new()
{  hx::ObjectPtr< ZPP_Arbiter_obj > result = new ZPP_Arbiter_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Arbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Arbiter_obj > result = new ZPP_Arbiter_obj();
	result->__construct();
	return result;}

Void ZPP_Arbiter_obj::sup_retire( ){
{
		HX_STACK_PUSH("ZPP_Arbiter::sup_retire","zpp_nape/dynamics/Arbiter.hx",308);
		HX_STACK_THIS(this);
		HX_STACK_LINE(341)
		if ((!(this->cleared))){
			HX_STACK_LINE(342)
			{
				HX_STACK_LINE(342)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(342)
				{
					HX_STACK_LINE(342)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(342)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(342)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(342)
					while(((cur != null()))){
						HX_STACK_LINE(342)
						if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
							HX_STACK_LINE(342)
							{
								HX_STACK_LINE(342)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(342)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(342)
								if (((pre == null()))){
									HX_STACK_LINE(342)
									old = _this->head;
									HX_STACK_LINE(342)
									ret1 = old->next;
									HX_STACK_LINE(342)
									_this->head = ret1;
									HX_STACK_LINE(342)
									if (((_this->head == null()))){
										HX_STACK_LINE(342)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(342)
									old = pre->next;
									HX_STACK_LINE(342)
									ret1 = old->next;
									HX_STACK_LINE(342)
									pre->next = ret1;
									HX_STACK_LINE(342)
									if (((ret1 == null()))){
										HX_STACK_LINE(342)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(342)
								{
									HX_STACK_LINE(342)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(342)
									o->elt = null();
									HX_STACK_LINE(342)
									o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
									HX_STACK_LINE(342)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
								}
								HX_STACK_LINE(342)
								_this->modified = true;
								HX_STACK_LINE(342)
								(_this->length)--;
								HX_STACK_LINE(342)
								_this->pushmod = true;
								HX_STACK_LINE(342)
								ret1;
							}
							HX_STACK_LINE(342)
							ret = true;
							HX_STACK_LINE(342)
							break;
						}
						HX_STACK_LINE(342)
						pre = cur;
						HX_STACK_LINE(342)
						cur = cur->next;
					}
					HX_STACK_LINE(342)
					ret;
				}
			}
			HX_STACK_LINE(343)
			{
				HX_STACK_LINE(343)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(343)
				{
					HX_STACK_LINE(343)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(343)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(343)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(343)
					while(((cur != null()))){
						HX_STACK_LINE(343)
						if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
							HX_STACK_LINE(343)
							{
								HX_STACK_LINE(343)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(343)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(343)
								if (((pre == null()))){
									HX_STACK_LINE(343)
									old = _this->head;
									HX_STACK_LINE(343)
									ret1 = old->next;
									HX_STACK_LINE(343)
									_this->head = ret1;
									HX_STACK_LINE(343)
									if (((_this->head == null()))){
										HX_STACK_LINE(343)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(343)
									old = pre->next;
									HX_STACK_LINE(343)
									ret1 = old->next;
									HX_STACK_LINE(343)
									pre->next = ret1;
									HX_STACK_LINE(343)
									if (((ret1 == null()))){
										HX_STACK_LINE(343)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(343)
								{
									HX_STACK_LINE(343)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(343)
									o->elt = null();
									HX_STACK_LINE(343)
									o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
									HX_STACK_LINE(343)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
								}
								HX_STACK_LINE(343)
								_this->modified = true;
								HX_STACK_LINE(343)
								(_this->length)--;
								HX_STACK_LINE(343)
								_this->pushmod = true;
								HX_STACK_LINE(343)
								ret1;
							}
							HX_STACK_LINE(343)
							ret = true;
							HX_STACK_LINE(343)
							break;
						}
						HX_STACK_LINE(343)
						pre = cur;
						HX_STACK_LINE(343)
						cur = cur->next;
					}
					HX_STACK_LINE(343)
					ret;
				}
			}
			HX_STACK_LINE(344)
			if (((this->pair != null()))){
				HX_STACK_LINE(345)
				this->pair->arb = null();
				HX_STACK_LINE(346)
				this->pair = null();
			}
		}
		HX_STACK_LINE(349)
		this->b1 = this->b2 = null();
		HX_STACK_LINE(350)
		this->active = false;
		HX_STACK_LINE(351)
		this->intchange = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Arbiter_obj,sup_retire,(void))

Void ZPP_Arbiter_obj::sup_assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di){
{
		HX_STACK_PUSH("ZPP_Arbiter::sup_assign","zpp_nape/dynamics/Arbiter.hx",290);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s1,"s1");
		HX_STACK_ARG(s2,"s2");
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(di,"di");
		HX_STACK_LINE(291)
		this->b1 = s1->body;
		HX_STACK_LINE(292)
		this->ws1 = s1;
		HX_STACK_LINE(293)
		this->b2 = s2->body;
		HX_STACK_LINE(294)
		this->ws2 = s2;
		HX_STACK_LINE(295)
		this->id = id;
		HX_STACK_LINE(296)
		this->di = di;
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
			struct _Function_2_1{
				inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",297);
					{
						HX_STACK_LINE(297)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(297)
						{
							HX_STACK_LINE(297)
							if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
								HX_STACK_LINE(297)
								ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
							}
							else{
								HX_STACK_LINE(297)
								ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
								HX_STACK_LINE(297)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
								HX_STACK_LINE(297)
								ret->next = null();
							}
							HX_STACK_LINE(297)
							Dynamic();
						}
						HX_STACK_LINE(297)
						ret->elt = __this;
						HX_STACK_LINE(297)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(297)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_2_1::Block(this);		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(297)
			temp->next = _this->head;
			HX_STACK_LINE(297)
			_this->head = temp;
			HX_STACK_LINE(297)
			_this->modified = true;
			HX_STACK_LINE(297)
			(_this->length)++;
			HX_STACK_LINE(297)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(298)
		{
			HX_STACK_LINE(298)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
			struct _Function_2_1{
				inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",298);
					{
						HX_STACK_LINE(298)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
								HX_STACK_LINE(298)
								ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
							}
							else{
								HX_STACK_LINE(298)
								ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
								HX_STACK_LINE(298)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
								HX_STACK_LINE(298)
								ret->next = null();
							}
							HX_STACK_LINE(298)
							Dynamic();
						}
						HX_STACK_LINE(298)
						ret->elt = __this;
						HX_STACK_LINE(298)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(298)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_2_1::Block(this);		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(298)
			temp->next = _this->head;
			HX_STACK_LINE(298)
			_this->head = temp;
			HX_STACK_LINE(298)
			_this->modified = true;
			HX_STACK_LINE(298)
			(_this->length)++;
			HX_STACK_LINE(298)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(299)
		this->active = true;
		HX_STACK_LINE(300)
		this->present = (int)0;
		HX_STACK_LINE(301)
		this->cleared = false;
		HX_STACK_LINE(302)
		this->sleeping = false;
		HX_STACK_LINE(303)
		this->fresh = false;
		HX_STACK_LINE(304)
		this->presentable = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_Arbiter_obj,sup_assign,(void))

Void ZPP_Arbiter_obj::lazyRetire( ::zpp_nape::space::ZPP_Space s,::zpp_nape::phys::ZPP_Body b){
{
		HX_STACK_PUSH("ZPP_Arbiter::lazyRetire","zpp_nape/dynamics/Arbiter.hx",269);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(278)
		this->cleared = true;
		HX_STACK_LINE(279)
		if (((bool((b == null())) || bool((this->b2 == b))))){
			HX_STACK_LINE(279)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(279)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(279)
				bool ret = false;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(279)
				while(((cur != null()))){
					HX_STACK_LINE(279)
					if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(279)
						{
							HX_STACK_LINE(279)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
							HX_STACK_LINE(279)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(279)
							if (((pre == null()))){
								HX_STACK_LINE(279)
								old = _this->head;
								HX_STACK_LINE(279)
								ret1 = old->next;
								HX_STACK_LINE(279)
								_this->head = ret1;
								HX_STACK_LINE(279)
								if (((_this->head == null()))){
									HX_STACK_LINE(279)
									_this->pushmod = true;
								}
							}
							else{
								HX_STACK_LINE(279)
								old = pre->next;
								HX_STACK_LINE(279)
								ret1 = old->next;
								HX_STACK_LINE(279)
								pre->next = ret1;
								HX_STACK_LINE(279)
								if (((ret1 == null()))){
									HX_STACK_LINE(279)
									_this->pushmod = true;
								}
							}
							HX_STACK_LINE(279)
							{
								HX_STACK_LINE(279)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(279)
								o->elt = null();
								HX_STACK_LINE(279)
								o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
								HX_STACK_LINE(279)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
							}
							HX_STACK_LINE(279)
							_this->modified = true;
							HX_STACK_LINE(279)
							(_this->length)--;
							HX_STACK_LINE(279)
							_this->pushmod = true;
							HX_STACK_LINE(279)
							ret1;
						}
						HX_STACK_LINE(279)
						ret = true;
						HX_STACK_LINE(279)
						break;
					}
					HX_STACK_LINE(279)
					pre = cur;
					HX_STACK_LINE(279)
					cur = cur->next;
				}
				HX_STACK_LINE(279)
				ret;
			}
		}
		HX_STACK_LINE(280)
		if (((bool((b == null())) || bool((this->b1 == b))))){
			HX_STACK_LINE(280)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(280)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(280)
				bool ret = false;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(280)
				while(((cur != null()))){
					HX_STACK_LINE(280)
					if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(280)
						{
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(280)
							if (((pre == null()))){
								HX_STACK_LINE(280)
								old = _this->head;
								HX_STACK_LINE(280)
								ret1 = old->next;
								HX_STACK_LINE(280)
								_this->head = ret1;
								HX_STACK_LINE(280)
								if (((_this->head == null()))){
									HX_STACK_LINE(280)
									_this->pushmod = true;
								}
							}
							else{
								HX_STACK_LINE(280)
								old = pre->next;
								HX_STACK_LINE(280)
								ret1 = old->next;
								HX_STACK_LINE(280)
								pre->next = ret1;
								HX_STACK_LINE(280)
								if (((ret1 == null()))){
									HX_STACK_LINE(280)
									_this->pushmod = true;
								}
							}
							HX_STACK_LINE(280)
							{
								HX_STACK_LINE(280)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(280)
								o->elt = null();
								HX_STACK_LINE(280)
								o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
								HX_STACK_LINE(280)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
							}
							HX_STACK_LINE(280)
							_this->modified = true;
							HX_STACK_LINE(280)
							(_this->length)--;
							HX_STACK_LINE(280)
							_this->pushmod = true;
							HX_STACK_LINE(280)
							ret1;
						}
						HX_STACK_LINE(280)
						ret = true;
						HX_STACK_LINE(280)
						break;
					}
					HX_STACK_LINE(280)
					pre = cur;
					HX_STACK_LINE(280)
					cur = cur->next;
				}
				HX_STACK_LINE(280)
				ret;
			}
		}
		HX_STACK_LINE(281)
		if (((this->pair != null()))){
			HX_STACK_LINE(282)
			this->pair->arb = null();
			HX_STACK_LINE(283)
			this->pair = null();
		}
		HX_STACK_LINE(285)
		this->active = false;
		HX_STACK_LINE(286)
		s->f_arbiters->modified = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Arbiter_obj,lazyRetire,(void))

Void ZPP_Arbiter_obj::swap_features( ){
{
		HX_STACK_PUSH("ZPP_Arbiter::swap_features","zpp_nape/dynamics/Arbiter.hx",235);
		HX_STACK_THIS(this);
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(245)
			::zpp_nape::phys::ZPP_Body t = this->b1;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(246)
			this->b1 = this->b2;
			HX_STACK_LINE(247)
			this->b2 = t;
		}
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(250)
			::zpp_nape::shape::ZPP_Shape t = this->ws1;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(251)
			this->ws1 = this->ws2;
			HX_STACK_LINE(252)
			this->ws2 = t;
		}
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(255)
			::zpp_nape::shape::ZPP_Shape t = this->colarb->s1;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(256)
			this->colarb->s1 = this->colarb->s2;
			HX_STACK_LINE(257)
			this->colarb->s2 = t;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Arbiter_obj,swap_features,(void))

bool ZPP_Arbiter_obj::acting( ){
	HX_STACK_PUSH("ZPP_Arbiter::acting","zpp_nape/dynamics/Arbiter.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_LINE(224)
	return (bool(this->active) && bool((((int(this->immState) & int(::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ACCEPT))) != (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Arbiter_obj,acting,return )

bool ZPP_Arbiter_obj::inactiveme( ){
	HX_STACK_PUSH("ZPP_Arbiter::inactiveme","zpp_nape/dynamics/Arbiter.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_LINE(199)
	return !(this->active);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Arbiter_obj,inactiveme,return )

::nape::dynamics::Arbiter ZPP_Arbiter_obj::wrapper( ){
	HX_STACK_PUSH("ZPP_Arbiter::wrapper","zpp_nape/dynamics/Arbiter.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_LINE(181)
	if (((this->outer == null()))){
		HX_STACK_LINE(182)
		::zpp_nape::dynamics::ZPP_Arbiter_obj::internal = true;
		HX_STACK_LINE(183)
		if (((this->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
			HX_STACK_LINE(184)
			this->colarb->outer_zn = ::nape::dynamics::CollisionArbiter_obj::__new();
			HX_STACK_LINE(185)
			this->outer = this->colarb->outer_zn;
		}
		else{
			HX_STACK_LINE(187)
			if (((this->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
				HX_STACK_LINE(188)
				this->fluidarb->outer_zn = ::nape::dynamics::FluidArbiter_obj::__new();
				HX_STACK_LINE(189)
				this->outer = this->fluidarb->outer_zn;
			}
			else{
				HX_STACK_LINE(191)
				this->outer = ::nape::dynamics::Arbiter_obj::__new();
			}
		}
		HX_STACK_LINE(192)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(193)
		::zpp_nape::dynamics::ZPP_Arbiter_obj::internal = false;
	}
	HX_STACK_LINE(195)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Arbiter_obj,wrapper,return )

bool ZPP_Arbiter_obj::internal;

int ZPP_Arbiter_obj::COL;

int ZPP_Arbiter_obj::FLUID;

int ZPP_Arbiter_obj::SENSOR;


ZPP_Arbiter_obj::ZPP_Arbiter_obj()
{
}

void ZPP_Arbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Arbiter);
	HX_MARK_MEMBER_NAME(sensorarb,"sensorarb");
	HX_MARK_MEMBER_NAME(fluidarb,"fluidarb");
	HX_MARK_MEMBER_NAME(colarb,"colarb");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(pair,"pair");
	HX_MARK_MEMBER_NAME(ws2,"ws2");
	HX_MARK_MEMBER_NAME(ws1,"ws1");
	HX_MARK_MEMBER_NAME(b2,"b2");
	HX_MARK_MEMBER_NAME(b1,"b1");
	HX_MARK_MEMBER_NAME(invalidated,"invalidated");
	HX_MARK_MEMBER_NAME(immState,"immState");
	HX_MARK_MEMBER_NAME(fresh,"fresh");
	HX_MARK_MEMBER_NAME(continuous,"continuous");
	HX_MARK_MEMBER_NAME(presentable,"presentable");
	HX_MARK_MEMBER_NAME(intchange,"intchange");
	HX_MARK_MEMBER_NAME(present,"present");
	HX_MARK_MEMBER_NAME(sleeping,"sleeping");
	HX_MARK_MEMBER_NAME(cleared,"cleared");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(endGenerated,"endGenerated");
	HX_MARK_MEMBER_NAME(sleep_stamp,"sleep_stamp");
	HX_MARK_MEMBER_NAME(up_stamp,"up_stamp");
	HX_MARK_MEMBER_NAME(stamp,"stamp");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(hnext,"hnext");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_END_CLASS();
}

void ZPP_Arbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sensorarb,"sensorarb");
	HX_VISIT_MEMBER_NAME(fluidarb,"fluidarb");
	HX_VISIT_MEMBER_NAME(colarb,"colarb");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(pair,"pair");
	HX_VISIT_MEMBER_NAME(ws2,"ws2");
	HX_VISIT_MEMBER_NAME(ws1,"ws1");
	HX_VISIT_MEMBER_NAME(b2,"b2");
	HX_VISIT_MEMBER_NAME(b1,"b1");
	HX_VISIT_MEMBER_NAME(invalidated,"invalidated");
	HX_VISIT_MEMBER_NAME(immState,"immState");
	HX_VISIT_MEMBER_NAME(fresh,"fresh");
	HX_VISIT_MEMBER_NAME(continuous,"continuous");
	HX_VISIT_MEMBER_NAME(presentable,"presentable");
	HX_VISIT_MEMBER_NAME(intchange,"intchange");
	HX_VISIT_MEMBER_NAME(present,"present");
	HX_VISIT_MEMBER_NAME(sleeping,"sleeping");
	HX_VISIT_MEMBER_NAME(cleared,"cleared");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(endGenerated,"endGenerated");
	HX_VISIT_MEMBER_NAME(sleep_stamp,"sleep_stamp");
	HX_VISIT_MEMBER_NAME(up_stamp,"up_stamp");
	HX_VISIT_MEMBER_NAME(stamp,"stamp");
	HX_VISIT_MEMBER_NAME(di,"di");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(hnext,"hnext");
	HX_VISIT_MEMBER_NAME(outer,"outer");
}

Dynamic ZPP_Arbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		if (HX_FIELD_EQ(inName,"di") ) { return di; }
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"COL") ) { return COL; }
		if (HX_FIELD_EQ(inName,"ws2") ) { return ws2; }
		if (HX_FIELD_EQ(inName,"ws1") ) { return ws1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"pair") ) { return pair; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FLUID") ) { return FLUID; }
		if (HX_FIELD_EQ(inName,"fresh") ) { return fresh; }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp; }
		if (HX_FIELD_EQ(inName,"hnext") ) { return hnext; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SENSOR") ) { return SENSOR; }
		if (HX_FIELD_EQ(inName,"colarb") ) { return colarb; }
		if (HX_FIELD_EQ(inName,"acting") ) { return acting_dyn(); }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"present") ) { return present; }
		if (HX_FIELD_EQ(inName,"cleared") ) { return cleared; }
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { return internal; }
		if (HX_FIELD_EQ(inName,"fluidarb") ) { return fluidarb; }
		if (HX_FIELD_EQ(inName,"immState") ) { return immState; }
		if (HX_FIELD_EQ(inName,"sleeping") ) { return sleeping; }
		if (HX_FIELD_EQ(inName,"up_stamp") ) { return up_stamp; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sensorarb") ) { return sensorarb; }
		if (HX_FIELD_EQ(inName,"intchange") ) { return intchange; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sup_retire") ) { return sup_retire_dyn(); }
		if (HX_FIELD_EQ(inName,"sup_assign") ) { return sup_assign_dyn(); }
		if (HX_FIELD_EQ(inName,"lazyRetire") ) { return lazyRetire_dyn(); }
		if (HX_FIELD_EQ(inName,"continuous") ) { return continuous; }
		if (HX_FIELD_EQ(inName,"inactiveme") ) { return inactiveme_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { return invalidated; }
		if (HX_FIELD_EQ(inName,"presentable") ) { return presentable; }
		if (HX_FIELD_EQ(inName,"sleep_stamp") ) { return sleep_stamp; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endGenerated") ) { return endGenerated; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"swap_features") ) { return swap_features_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Arbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"COL") ) { COL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ws2") ) { ws2=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ws1") ) { ws1=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pair") ) { pair=inValue.Cast< ::zpp_nape::space::ZPP_AABBPair >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FLUID") ) { FLUID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fresh") ) { fresh=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stamp") ) { stamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hnext") ) { hnext=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::dynamics::Arbiter >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SENSOR") ) { SENSOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colarb") ) { colarb=inValue.Cast< ::zpp_nape::dynamics::ZPP_ColArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"present") ) { present=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cleared") ) { cleared=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fluidarb") ) { fluidarb=inValue.Cast< ::zpp_nape::dynamics::ZPP_FluidArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immState") ) { immState=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sleeping") ) { sleeping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"up_stamp") ) { up_stamp=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sensorarb") ) { sensorarb=inValue.Cast< ::zpp_nape::dynamics::ZPP_SensorArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"intchange") ) { intchange=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"continuous") ) { continuous=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidated") ) { invalidated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"presentable") ) { presentable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sleep_stamp") ) { sleep_stamp=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endGenerated") ) { endGenerated=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Arbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sensorarb"));
	outFields->push(HX_CSTRING("fluidarb"));
	outFields->push(HX_CSTRING("colarb"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("pair"));
	outFields->push(HX_CSTRING("ws2"));
	outFields->push(HX_CSTRING("ws1"));
	outFields->push(HX_CSTRING("b2"));
	outFields->push(HX_CSTRING("b1"));
	outFields->push(HX_CSTRING("invalidated"));
	outFields->push(HX_CSTRING("immState"));
	outFields->push(HX_CSTRING("fresh"));
	outFields->push(HX_CSTRING("continuous"));
	outFields->push(HX_CSTRING("presentable"));
	outFields->push(HX_CSTRING("intchange"));
	outFields->push(HX_CSTRING("present"));
	outFields->push(HX_CSTRING("sleeping"));
	outFields->push(HX_CSTRING("cleared"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("endGenerated"));
	outFields->push(HX_CSTRING("sleep_stamp"));
	outFields->push(HX_CSTRING("up_stamp"));
	outFields->push(HX_CSTRING("stamp"));
	outFields->push(HX_CSTRING("di"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("hnext"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("internal"),
	HX_CSTRING("COL"),
	HX_CSTRING("FLUID"),
	HX_CSTRING("SENSOR"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sup_retire"),
	HX_CSTRING("sup_assign"),
	HX_CSTRING("lazyRetire"),
	HX_CSTRING("sensorarb"),
	HX_CSTRING("fluidarb"),
	HX_CSTRING("colarb"),
	HX_CSTRING("type"),
	HX_CSTRING("swap_features"),
	HX_CSTRING("pair"),
	HX_CSTRING("ws2"),
	HX_CSTRING("ws1"),
	HX_CSTRING("b2"),
	HX_CSTRING("b1"),
	HX_CSTRING("invalidated"),
	HX_CSTRING("acting"),
	HX_CSTRING("immState"),
	HX_CSTRING("fresh"),
	HX_CSTRING("continuous"),
	HX_CSTRING("presentable"),
	HX_CSTRING("intchange"),
	HX_CSTRING("present"),
	HX_CSTRING("sleeping"),
	HX_CSTRING("cleared"),
	HX_CSTRING("active"),
	HX_CSTRING("endGenerated"),
	HX_CSTRING("sleep_stamp"),
	HX_CSTRING("up_stamp"),
	HX_CSTRING("stamp"),
	HX_CSTRING("di"),
	HX_CSTRING("id"),
	HX_CSTRING("hnext"),
	HX_CSTRING("inactiveme"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Arbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Arbiter_obj::internal,"internal");
	HX_MARK_MEMBER_NAME(ZPP_Arbiter_obj::COL,"COL");
	HX_MARK_MEMBER_NAME(ZPP_Arbiter_obj::FLUID,"FLUID");
	HX_MARK_MEMBER_NAME(ZPP_Arbiter_obj::SENSOR,"SENSOR");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Arbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Arbiter_obj::internal,"internal");
	HX_VISIT_MEMBER_NAME(ZPP_Arbiter_obj::COL,"COL");
	HX_VISIT_MEMBER_NAME(ZPP_Arbiter_obj::FLUID,"FLUID");
	HX_VISIT_MEMBER_NAME(ZPP_Arbiter_obj::SENSOR,"SENSOR");
};

Class ZPP_Arbiter_obj::__mClass;

void ZPP_Arbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_Arbiter"), hx::TCanCast< ZPP_Arbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Arbiter_obj::__boot()
{
	internal= false;
	COL= (int)1;
	FLUID= (int)4;
	SENSOR= (int)2;
}

} // end namespace zpp_nape
} // end namespace dynamics
