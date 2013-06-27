#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_MotorJoint
#include <nape/constraint/MotorJoint.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_MotorJoint
#include <zpp_nape/constraint/ZPP_MotorJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_MotorJoint_obj::__construct()
{
HX_STACK_PUSH("ZPP_MotorJoint::new","zpp_nape/constraint/MotorJoint.hx",174);
{
	HX_STACK_LINE(206)
	this->stepped = false;
	HX_STACK_LINE(205)
	this->jMax = 0.0;
	HX_STACK_LINE(204)
	this->jAcc = 0.0;
	HX_STACK_LINE(203)
	this->kMass = 0.0;
	HX_STACK_LINE(202)
	this->b2 = null();
	HX_STACK_LINE(201)
	this->b1 = null();
	HX_STACK_LINE(177)
	this->rate = 0.0;
	HX_STACK_LINE(176)
	this->ratio = 0.0;
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(255)
	super::__construct();
	HX_STACK_LINE(256)
	this->jAcc = (int)0;
	HX_STACK_LINE(257)
	this->stepped = false;
	HX_STACK_LINE(258)
	this->__velocity = true;
}
;
	return null();
}

ZPP_MotorJoint_obj::~ZPP_MotorJoint_obj() { }

Dynamic ZPP_MotorJoint_obj::__CreateEmpty() { return  new ZPP_MotorJoint_obj; }
hx::ObjectPtr< ZPP_MotorJoint_obj > ZPP_MotorJoint_obj::__new()
{  hx::ObjectPtr< ZPP_MotorJoint_obj > result = new ZPP_MotorJoint_obj();
	result->__construct();
	return result;}

Dynamic ZPP_MotorJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MotorJoint_obj > result = new ZPP_MotorJoint_obj();
	result->__construct();
	return result;}

bool ZPP_MotorJoint_obj::applyImpulsePos( ){
	HX_STACK_PUSH("ZPP_MotorJoint::applyImpulsePos","zpp_nape/constraint/MotorJoint.hx",435);
	HX_STACK_THIS(this);
	HX_STACK_LINE(435)
	return false;
}


bool ZPP_MotorJoint_obj::applyImpulseVel( ){
	HX_STACK_PUSH("ZPP_MotorJoint::applyImpulseVel","zpp_nape/constraint/MotorJoint.hx",402);
	HX_STACK_THIS(this);
	HX_STACK_LINE(403)
	Float E = ((((this->ratio * ((this->b2->angvel + this->b2->kinangvel))) - this->b1->angvel) - this->b1->kinangvel) - this->rate);		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(406)
	Float j = (-(this->kMass) * E);		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(407)
	{
		HX_STACK_LINE(416)
		Float jOld = this->jAcc;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(417)
		hx::AddEq(this->jAcc,j);
		HX_STACK_LINE(418)
		if ((this->breakUnderForce)){
			HX_STACK_LINE(419)
			if (((bool((this->jAcc > this->jMax)) || bool((this->jAcc < -(this->jMax)))))){
				HX_STACK_LINE(420)
				return true;
			}
		}
		else{
			HX_STACK_LINE(422)
			if (((this->jAcc < -(this->jMax)))){
				HX_STACK_LINE(423)
				this->jAcc = -(this->jMax);
			}
			else{
				HX_STACK_LINE(424)
				if (((this->jAcc > this->jMax))){
					HX_STACK_LINE(424)
					this->jAcc = this->jMax;
				}
			}
		}
		HX_STACK_LINE(427)
		j = (this->jAcc - jOld);
	}
	HX_STACK_LINE(429)
	{
		HX_STACK_LINE(430)
		hx::SubEq(this->b1->angvel,(this->b1->iinertia * j));
		HX_STACK_LINE(431)
		hx::AddEq(this->b2->angvel,((this->ratio * this->b2->iinertia) * j));
	}
	HX_STACK_LINE(433)
	return false;
}


Void ZPP_MotorJoint_obj::warmStart( ){
{
		HX_STACK_PUSH("ZPP_MotorJoint::warmStart","zpp_nape/constraint/MotorJoint.hx",396);
		HX_STACK_THIS(this);
		HX_STACK_LINE(398)
		hx::SubEq(this->b1->angvel,(this->b1->iinertia * this->jAcc));
		HX_STACK_LINE(399)
		hx::AddEq(this->b2->angvel,((this->ratio * this->b2->iinertia) * this->jAcc));
	}
return null();
}


bool ZPP_MotorJoint_obj::preStep( Float dt){
	HX_STACK_PUSH("ZPP_MotorJoint::preStep","zpp_nape/constraint/MotorJoint.hx",375);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dt,"dt");
	HX_STACK_LINE(376)
	if (((this->pre_dt == -1.0))){
		HX_STACK_LINE(376)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(377)
	Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(378)
	this->pre_dt = dt;
	HX_STACK_LINE(379)
	this->stepped = true;
	HX_STACK_LINE(380)
	this->kMass = (this->b1->sinertia + ((this->ratio * this->ratio) * this->b2->sinertia));
	HX_STACK_LINE(391)
	this->kMass = (Float(1.0) / Float(this->kMass));
	HX_STACK_LINE(392)
	hx::MultEq(this->jAcc,dtratio);
	HX_STACK_LINE(393)
	this->jMax = (this->maxForce * dt);
	HX_STACK_LINE(394)
	return false;
}


Void ZPP_MotorJoint_obj::clearcache( ){
{
		HX_STACK_PUSH("ZPP_MotorJoint::clearcache","zpp_nape/constraint/MotorJoint.hx",371);
		HX_STACK_THIS(this);
		HX_STACK_LINE(372)
		this->jAcc = (int)0;
		HX_STACK_LINE(373)
		this->pre_dt = -1.0;
	}
return null();
}


bool ZPP_MotorJoint_obj::pair_exists( int id,int di){
	HX_STACK_PUSH("ZPP_MotorJoint::pair_exists","zpp_nape/constraint/MotorJoint.hx",368);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(368)
	return (bool((bool((this->b1->id == id)) && bool((this->b2->id == di)))) || bool((bool((this->b1->id == di)) && bool((this->b2->id == id)))));
}


Void ZPP_MotorJoint_obj::forest( ){
{
		HX_STACK_PUSH("ZPP_MotorJoint::forest","zpp_nape/constraint/MotorJoint.hx",270);
		HX_STACK_THIS(this);
		HX_STACK_LINE(271)
		if (((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_MotorJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/MotorJoint.hx",274);
					{
						HX_STACK_LINE(275)
						::zpp_nape::space::ZPP_Component obj = __this->b1->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(276)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(277)
						while(((obj != obj->parent))){
							HX_STACK_LINE(278)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(279)
							obj->parent = stack;
							HX_STACK_LINE(280)
							stack = obj;
							HX_STACK_LINE(281)
							obj = nxt;
						}
						HX_STACK_LINE(283)
						while(((stack != null()))){
							HX_STACK_LINE(284)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(285)
							stack->parent = obj;
							HX_STACK_LINE(286)
							stack = nxt;
						}
						HX_STACK_LINE(288)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(272)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b1->component == this->b1->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b1->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_MotorJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/MotorJoint.hx",293);
					{
						HX_STACK_LINE(294)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(295)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(296)
						while(((obj != obj->parent))){
							HX_STACK_LINE(297)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(298)
							obj->parent = stack;
							HX_STACK_LINE(299)
							stack = obj;
							HX_STACK_LINE(300)
							obj = nxt;
						}
						HX_STACK_LINE(302)
						while(((stack != null()))){
							HX_STACK_LINE(303)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(304)
							stack->parent = obj;
							HX_STACK_LINE(305)
							stack = nxt;
						}
						HX_STACK_LINE(307)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(291)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(310)
			if (((xr != yr))){
				HX_STACK_LINE(310)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(311)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(312)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(312)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(314)
						yr->parent = xr;
						HX_STACK_LINE(315)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(319)
		if (((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_MotorJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/MotorJoint.hx",322);
					{
						HX_STACK_LINE(323)
						::zpp_nape::space::ZPP_Component obj = __this->b2->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(324)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(325)
						while(((obj != obj->parent))){
							HX_STACK_LINE(326)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(327)
							obj->parent = stack;
							HX_STACK_LINE(328)
							stack = obj;
							HX_STACK_LINE(329)
							obj = nxt;
						}
						HX_STACK_LINE(331)
						while(((stack != null()))){
							HX_STACK_LINE(332)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(333)
							stack->parent = obj;
							HX_STACK_LINE(334)
							stack = nxt;
						}
						HX_STACK_LINE(336)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(320)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b2->component == this->b2->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b2->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_MotorJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/MotorJoint.hx",341);
					{
						HX_STACK_LINE(342)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(343)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(344)
						while(((obj != obj->parent))){
							HX_STACK_LINE(345)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(346)
							obj->parent = stack;
							HX_STACK_LINE(347)
							stack = obj;
							HX_STACK_LINE(348)
							obj = nxt;
						}
						HX_STACK_LINE(350)
						while(((stack != null()))){
							HX_STACK_LINE(351)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(352)
							stack->parent = obj;
							HX_STACK_LINE(353)
							stack = nxt;
						}
						HX_STACK_LINE(355)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(339)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(358)
			if (((xr != yr))){
				HX_STACK_LINE(358)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(359)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(360)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(360)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(362)
						yr->parent = xr;
						HX_STACK_LINE(363)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


Void ZPP_MotorJoint_obj::wake_connected( ){
{
		HX_STACK_PUSH("ZPP_MotorJoint::wake_connected","zpp_nape/constraint/MotorJoint.hx",266);
		HX_STACK_THIS(this);
		HX_STACK_LINE(267)
		if (((bool((this->b1 != null())) && bool((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(267)
			this->b1->wake();
		}
		HX_STACK_LINE(268)
		if (((bool((this->b2 != null())) && bool((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(268)
			this->b2->wake();
		}
	}
return null();
}


Void ZPP_MotorJoint_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_MotorJoint::validate","zpp_nape/constraint/MotorJoint.hx",260);
		HX_STACK_THIS(this);
		HX_STACK_LINE(261)
		if (((bool((this->b1 == null())) || bool((this->b2 == null()))))){
			HX_STACK_LINE(261)
			hx::Throw (HX_CSTRING("Error: AngleJoint cannot be simulated null bodies"));
		}
		HX_STACK_LINE(262)
		if (((this->b1 == this->b2))){
			HX_STACK_LINE(262)
			hx::Throw (HX_CSTRING("Error: MotorJoint cannot be simulated with body1 == body2"));
		}
		HX_STACK_LINE(263)
		if (((bool((this->b1->space != this->space)) || bool((this->b2->space != this->space))))){
			HX_STACK_LINE(263)
			hx::Throw (HX_CSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned"));
		}
		HX_STACK_LINE(264)
		if (((bool(!(((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) && bool(!(((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))))){
			HX_STACK_LINE(264)
			hx::Throw (HX_CSTRING("Error: Constraints cannot have both bodies non-dynamic"));
		}
	}
return null();
}


::nape::constraint::Constraint ZPP_MotorJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_PUSH("ZPP_MotorJoint::copy","zpp_nape/constraint/MotorJoint.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dict,"dict");
	HX_STACK_ARG(todo,"todo");
	HX_STACK_LINE(208)
	Array< ::Dynamic > ret = Array_obj< ::Dynamic >::__new().Add(::nape::constraint::MotorJoint_obj::__new(null(),null(),this->rate,this->ratio));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(209)
	this->copyto(ret->__get((int)0).StaticCast< ::nape::constraint::MotorJoint >());
	HX_STACK_LINE(210)
	if (((bool((dict != null())) && bool((this->b1 != null()))))){
		HX_STACK_LINE(220)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(221)
			while(((_g < dict->length))){
				HX_STACK_LINE(221)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(221)
				++(_g);
				HX_STACK_LINE(222)
				if (((idc->id == this->b1->id))){
					HX_STACK_LINE(223)
					b = idc->bc;
					HX_STACK_LINE(224)
					break;
				}
			}
		}
		HX_STACK_LINE(227)
		if (((b != null()))){
			HX_STACK_LINE(227)
			ret->__get((int)0).StaticCast< ::nape::constraint::MotorJoint >()->zpp_inner_zn->b1 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/MotorJoint.hx",228);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(228)
					ret->__get((int)0).StaticCast< ::nape::constraint::MotorJoint >()->zpp_inner_zn->b1 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(228)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b1->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(231)
	if (((bool((dict != null())) && bool((this->b2 != null()))))){
		HX_STACK_LINE(241)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(242)
			while(((_g < dict->length))){
				HX_STACK_LINE(242)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(242)
				++(_g);
				HX_STACK_LINE(243)
				if (((idc->id == this->b2->id))){
					HX_STACK_LINE(244)
					b = idc->bc;
					HX_STACK_LINE(245)
					break;
				}
			}
		}
		HX_STACK_LINE(248)
		if (((b != null()))){
			HX_STACK_LINE(248)
			ret->__get((int)0).StaticCast< ::nape::constraint::MotorJoint >()->zpp_inner_zn->b2 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/MotorJoint.hx",249);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(249)
					ret->__get((int)0).StaticCast< ::nape::constraint::MotorJoint >()->zpp_inner_zn->b2 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(249)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b2->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(252)
	return ret->__get((int)0).StaticCast< ::nape::constraint::MotorJoint >();
}


Void ZPP_MotorJoint_obj::inactiveBodies( ){
{
		HX_STACK_PUSH("ZPP_MotorJoint::inactiveBodies","zpp_nape/constraint/MotorJoint.hx",193);
		HX_STACK_THIS(this);
		HX_STACK_LINE(194)
		if (((this->b1 != null()))){
			HX_STACK_LINE(195)
			this->b1->constraints->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(197)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(197)
			if (((this->b2 != null()))){
				HX_STACK_LINE(198)
				this->b2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_MotorJoint_obj::activeBodies( ){
{
		HX_STACK_PUSH("ZPP_MotorJoint::activeBodies","zpp_nape/constraint/MotorJoint.hx",185);
		HX_STACK_THIS(this);
		HX_STACK_LINE(186)
		if (((this->b1 != null()))){
			HX_STACK_LINE(187)
			this->b1->constraints->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(189)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(189)
			if (((this->b2 != null()))){
				HX_STACK_LINE(190)
				this->b2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


::nape::geom::Vec3 ZPP_MotorJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_PUSH("ZPP_MotorJoint::bodyImpulse","zpp_nape/constraint/MotorJoint.hx",178);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(178)
	if ((this->stepped)){
		HX_STACK_LINE(179)
		if (((b == this->b1))){
			HX_STACK_LINE(180)
			return ::nape::geom::Vec3_obj::get((int)0,(int)0,-(this->jAcc));
		}
		else{
			HX_STACK_LINE(181)
			return ::nape::geom::Vec3_obj::get((int)0,(int)0,(this->ratio * this->jAcc));
		}
	}
	else{
		HX_STACK_LINE(183)
		return ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	}
	HX_STACK_LINE(178)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MotorJoint_obj,bodyImpulse,return )


ZPP_MotorJoint_obj::ZPP_MotorJoint_obj()
{
}

void ZPP_MotorJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MotorJoint);
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(kMass,"kMass");
	HX_MARK_MEMBER_NAME(b2,"b2");
	HX_MARK_MEMBER_NAME(b1,"b1");
	HX_MARK_MEMBER_NAME(rate,"rate");
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_MotorJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(kMass,"kMass");
	HX_VISIT_MEMBER_NAME(b2,"b2");
	HX_VISIT_MEMBER_NAME(b1,"b1");
	HX_VISIT_MEMBER_NAME(rate,"rate");
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_MotorJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"kMass") ) { return kMass; }
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		if (HX_FIELD_EQ(inName,"stepped") ) { return stepped; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearcache") ) { return clearcache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pair_exists") ) { return pair_exists_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wake_connected") ) { return wake_connected_dyn(); }
		if (HX_FIELD_EQ(inName,"inactiveBodies") ) { return inactiveBodies_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_MotorJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"kMass") ) { kMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::MotorJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_MotorJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stepped"));
	outFields->push(HX_CSTRING("jMax"));
	outFields->push(HX_CSTRING("jAcc"));
	outFields->push(HX_CSTRING("kMass"));
	outFields->push(HX_CSTRING("b2"));
	outFields->push(HX_CSTRING("b1"));
	outFields->push(HX_CSTRING("rate"));
	outFields->push(HX_CSTRING("ratio"));
	outFields->push(HX_CSTRING("outer_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("applyImpulsePos"),
	HX_CSTRING("applyImpulseVel"),
	HX_CSTRING("warmStart"),
	HX_CSTRING("preStep"),
	HX_CSTRING("clearcache"),
	HX_CSTRING("pair_exists"),
	HX_CSTRING("forest"),
	HX_CSTRING("wake_connected"),
	HX_CSTRING("validate"),
	HX_CSTRING("copy"),
	HX_CSTRING("stepped"),
	HX_CSTRING("jMax"),
	HX_CSTRING("jAcc"),
	HX_CSTRING("kMass"),
	HX_CSTRING("b2"),
	HX_CSTRING("b1"),
	HX_CSTRING("inactiveBodies"),
	HX_CSTRING("activeBodies"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("rate"),
	HX_CSTRING("ratio"),
	HX_CSTRING("outer_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MotorJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MotorJoint_obj::__mClass,"__mClass");
};

Class ZPP_MotorJoint_obj::__mClass;

void ZPP_MotorJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_MotorJoint"), hx::TCanCast< ZPP_MotorJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_MotorJoint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
