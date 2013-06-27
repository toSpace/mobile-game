#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_constraint_AngleJoint
#include <nape/constraint/AngleJoint.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
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
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_AngleJoint
#include <zpp_nape/constraint/ZPP_AngleJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
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

Void ZPP_AngleJoint_obj::__construct()
{
HX_STACK_PUSH("ZPP_AngleJoint::new","zpp_nape/constraint/AngleJoint.hx",174);
{
	HX_STACK_LINE(244)
	this->stepped = false;
	HX_STACK_LINE(243)
	this->bias = 0.0;
	HX_STACK_LINE(242)
	this->gamma = 0.0;
	HX_STACK_LINE(241)
	this->jMax = 0.0;
	HX_STACK_LINE(240)
	this->jAcc = 0.0;
	HX_STACK_LINE(239)
	this->kMass = 0.0;
	HX_STACK_LINE(238)
	this->b2 = null();
	HX_STACK_LINE(237)
	this->b1 = null();
	HX_STACK_LINE(181)
	this->scale = 0.0;
	HX_STACK_LINE(180)
	this->equal = false;
	HX_STACK_LINE(179)
	this->slack = false;
	HX_STACK_LINE(178)
	this->jointMax = 0.0;
	HX_STACK_LINE(177)
	this->jointMin = 0.0;
	HX_STACK_LINE(176)
	this->ratio = 0.0;
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(293)
	super::__construct();
	HX_STACK_LINE(294)
	this->ratio = (int)1;
	HX_STACK_LINE(295)
	this->jAcc = (int)0;
	HX_STACK_LINE(296)
	this->slack = false;
	HX_STACK_LINE(297)
	this->jMax = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(298)
	this->stepped = false;
}
;
	return null();
}

ZPP_AngleJoint_obj::~ZPP_AngleJoint_obj() { }

Dynamic ZPP_AngleJoint_obj::__CreateEmpty() { return  new ZPP_AngleJoint_obj; }
hx::ObjectPtr< ZPP_AngleJoint_obj > ZPP_AngleJoint_obj::__new()
{  hx::ObjectPtr< ZPP_AngleJoint_obj > result = new ZPP_AngleJoint_obj();
	result->__construct();
	return result;}

Dynamic ZPP_AngleJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AngleJoint_obj > result = new ZPP_AngleJoint_obj();
	result->__construct();
	return result;}

Void ZPP_AngleJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_PUSH("ZPP_AngleJoint::draw","zpp_nape/constraint/AngleJoint.hx",579);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
	}
return null();
}


bool ZPP_AngleJoint_obj::applyImpulsePos( ){
	HX_STACK_PUSH("ZPP_AngleJoint::applyImpulsePos","zpp_nape/constraint/AngleJoint.hx",532);
	HX_STACK_THIS(this);
	HX_STACK_LINE(533)
	Float E;		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(534)
	Float j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(535)
	bool slack;		HX_STACK_VAR(slack,"slack");
	struct _Function_1_1{
		inline static Float Block( ::zpp_nape::constraint::ZPP_AngleJoint_obj *__this,bool &slack){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/AngleJoint.hx",536);
			{
				HX_STACK_LINE(537)
				Float C = ((__this->ratio * __this->b2->rot) - __this->b1->rot);		HX_STACK_VAR(C,"C");
				HX_STACK_LINE(538)
				if ((__this->equal)){
					HX_STACK_LINE(539)
					hx::SubEq(C,__this->jointMax);
					HX_STACK_LINE(540)
					slack = false;
					HX_STACK_LINE(541)
					__this->scale = 1.0;
				}
				else{
					HX_STACK_LINE(543)
					if (((C < __this->jointMin))){
						HX_STACK_LINE(545)
						C = (__this->jointMin - C);
						HX_STACK_LINE(546)
						__this->scale = -1.0;
						HX_STACK_LINE(547)
						slack = false;
					}
					else{
						HX_STACK_LINE(549)
						if (((C > __this->jointMax))){
							HX_STACK_LINE(550)
							hx::SubEq(C,__this->jointMax);
							HX_STACK_LINE(551)
							__this->scale = 1.0;
							HX_STACK_LINE(552)
							slack = false;
						}
						else{
							HX_STACK_LINE(555)
							__this->scale = 0.0;
							HX_STACK_LINE(556)
							C = (int)0;
							HX_STACK_LINE(557)
							slack = true;
						}
					}
				}
				HX_STACK_LINE(560)
				return C;
			}
			return null();
		}
	};
	HX_STACK_LINE(536)
	E = _Function_1_1::Block(this,slack);
	HX_STACK_LINE(562)
	if ((!(slack))){
		HX_STACK_LINE(563)
		if (((bool(this->breakUnderError) && bool(((E * E) > (this->maxError * this->maxError)))))){
			HX_STACK_LINE(563)
			return true;
		}
		HX_STACK_LINE(564)
		hx::MultEq(E,0.5);
		HX_STACK_LINE(565)
		j = (-(E) * this->kMass);
		HX_STACK_LINE(566)
		if (((bool(this->equal) || bool((j < (int)0))))){
			HX_STACK_LINE(568)
			{
				HX_STACK_LINE(568)
				::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
				Float dr = ((-(this->scale) * j) * this->b1->iinertia);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(568)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(568)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(568)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(568)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(568)
					Dynamic();
				}
				else{
					HX_STACK_LINE(568)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(568)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(568)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(568)
					Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(568)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(568)
					_this->axisx = nx;
				}
			}
			HX_STACK_LINE(569)
			{
				HX_STACK_LINE(569)
				::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
				Float dr = (((this->ratio * this->scale) * j) * this->b2->iinertia);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(569)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(569)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(569)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(569)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(569)
					Dynamic();
				}
				else{
					HX_STACK_LINE(569)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(569)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(569)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(569)
					Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(569)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(569)
					_this->axisx = nx;
				}
			}
		}
	}
	HX_STACK_LINE(577)
	return false;
}


bool ZPP_AngleJoint_obj::applyImpulseVel( ){
	HX_STACK_PUSH("ZPP_AngleJoint::applyImpulseVel","zpp_nape/constraint/AngleJoint.hx",493);
	HX_STACK_THIS(this);
	HX_STACK_LINE(494)
	if ((this->slack)){
		HX_STACK_LINE(494)
		return false;
	}
	HX_STACK_LINE(495)
	Float E = (this->scale * ((((this->ratio * ((this->b2->angvel + this->b2->kinangvel))) - this->b1->angvel) - this->b1->kinangvel)));		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(498)
	Float j = ((this->kMass * ((this->bias - E))) - (this->jAcc * this->gamma));		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(499)
	{
		HX_STACK_LINE(508)
		Float jOld = this->jAcc;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(509)
		hx::AddEq(this->jAcc,j);
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(511)
			if (((bool(!(this->equal)) && bool((this->jAcc > (int)0))))){
				HX_STACK_LINE(511)
				this->jAcc = (int)0;
			}
			HX_STACK_LINE(512)
			if (((bool(this->breakUnderForce) && bool(((bool((this->jAcc > this->jMax)) || bool((this->jAcc < -(this->jMax))))))))){
				HX_STACK_LINE(512)
				return true;
			}
			HX_STACK_LINE(513)
			if ((!(this->stiff))){
				HX_STACK_LINE(513)
				if (((this->jAcc > this->jMax))){
					HX_STACK_LINE(514)
					this->jAcc = this->jMax;
				}
				else{
					HX_STACK_LINE(515)
					if (((this->jAcc < -(this->jMax)))){
						HX_STACK_LINE(515)
						this->jAcc = -(this->jMax);
					}
				}
			}
		}
		HX_STACK_LINE(518)
		j = (this->jAcc - jOld);
	}
	HX_STACK_LINE(520)
	{
		HX_STACK_LINE(526)
		hx::SubEq(this->b1->angvel,((this->scale * this->b1->iinertia) * j));
		HX_STACK_LINE(527)
		hx::AddEq(this->b2->angvel,(((this->ratio * this->scale) * this->b2->iinertia) * j));
	}
	HX_STACK_LINE(530)
	return false;
}


Void ZPP_AngleJoint_obj::warmStart( ){
{
		HX_STACK_PUSH("ZPP_AngleJoint::warmStart","zpp_nape/constraint/AngleJoint.hx",481);
		HX_STACK_THIS(this);
		HX_STACK_LINE(481)
		if ((!(this->slack))){
			HX_STACK_LINE(488)
			hx::SubEq(this->b1->angvel,((this->scale * this->b1->iinertia) * this->jAcc));
			HX_STACK_LINE(489)
			hx::AddEq(this->b2->angvel,(((this->ratio * this->scale) * this->b2->iinertia) * this->jAcc));
		}
	}
return null();
}


bool ZPP_AngleJoint_obj::preStep( Float dt){
	HX_STACK_PUSH("ZPP_AngleJoint::preStep","zpp_nape/constraint/AngleJoint.hx",417);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dt,"dt");
	HX_STACK_LINE(418)
	if (((this->pre_dt == -1.0))){
		HX_STACK_LINE(418)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(419)
	Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(420)
	this->pre_dt = dt;
	HX_STACK_LINE(421)
	this->stepped = true;
	HX_STACK_LINE(422)
	this->equal = (this->jointMin == this->jointMax);
	struct _Function_1_1{
		inline static Float Block( ::zpp_nape::constraint::ZPP_AngleJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/AngleJoint.hx",423);
			{
				HX_STACK_LINE(424)
				Float C = ((__this->ratio * __this->b2->rot) - __this->b1->rot);		HX_STACK_VAR(C,"C");
				HX_STACK_LINE(425)
				if ((__this->equal)){
					HX_STACK_LINE(426)
					hx::SubEq(C,__this->jointMax);
					HX_STACK_LINE(427)
					__this->slack = false;
					HX_STACK_LINE(428)
					__this->scale = 1.0;
				}
				else{
					HX_STACK_LINE(430)
					if (((C < __this->jointMin))){
						HX_STACK_LINE(432)
						C = (__this->jointMin - C);
						HX_STACK_LINE(433)
						__this->scale = -1.0;
						HX_STACK_LINE(434)
						__this->slack = false;
					}
					else{
						HX_STACK_LINE(436)
						if (((C > __this->jointMax))){
							HX_STACK_LINE(437)
							hx::SubEq(C,__this->jointMax);
							HX_STACK_LINE(438)
							__this->scale = 1.0;
							HX_STACK_LINE(439)
							__this->slack = false;
						}
						else{
							HX_STACK_LINE(442)
							__this->scale = 0.0;
							HX_STACK_LINE(443)
							C = (int)0;
							HX_STACK_LINE(444)
							__this->slack = true;
						}
					}
				}
				HX_STACK_LINE(447)
				return C;
			}
			return null();
		}
	};
	HX_STACK_LINE(423)
	Float C = _Function_1_1::Block(this);		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(449)
	if ((!(this->slack))){
		HX_STACK_LINE(450)
		this->kMass = (this->b1->sinertia + ((this->ratio * this->ratio) * this->b2->sinertia));
		HX_STACK_LINE(453)
		if (((this->kMass != (int)0))){
			HX_STACK_LINE(453)
			this->kMass = (Float((int)1) / Float(this->kMass));
		}
		else{
			HX_STACK_LINE(454)
			this->jAcc = (int)0;
		}
		HX_STACK_LINE(455)
		if ((!(this->stiff))){
			HX_STACK_LINE(456)
			if (((bool(this->breakUnderError) && bool(((C * C) > (this->maxError * this->maxError)))))){
				HX_STACK_LINE(456)
				return true;
			}
			HX_STACK_LINE(457)
			Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
			struct _Function_3_1{
				inline static Float Block( ::zpp_nape::constraint::ZPP_AngleJoint_obj *__this,Float &dt,Float &biasCoef){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/AngleJoint.hx",458);
					{
						HX_STACK_LINE(459)
						Float omega = (((int)2 * ::Math_obj::PI) * __this->frequency);		HX_STACK_VAR(omega,"omega");
						HX_STACK_LINE(460)
						__this->gamma = (Float((int)1) / Float((((dt * omega) * ((((int)2 * __this->damping) + (omega * dt)))))));
						HX_STACK_LINE(461)
						Float ig = (Float((int)1) / Float((((int)1 + __this->gamma))));		HX_STACK_VAR(ig,"ig");
						HX_STACK_LINE(462)
						biasCoef = (((dt * omega) * omega) * __this->gamma);
						HX_STACK_LINE(463)
						hx::MultEq(__this->gamma,ig);
						HX_STACK_LINE(464)
						return ig;
					}
					return null();
				}
			};
			HX_STACK_LINE(458)
			hx::MultEq(this->kMass,_Function_3_1::Block(this,dt,biasCoef));
			HX_STACK_LINE(466)
			this->bias = (-(C) * biasCoef);
			HX_STACK_LINE(467)
			if (((this->bias < -(this->maxError)))){
				HX_STACK_LINE(468)
				this->bias = -(this->maxError);
			}
			else{
				HX_STACK_LINE(469)
				if (((this->bias > this->maxError))){
					HX_STACK_LINE(469)
					this->bias = this->maxError;
				}
			}
		}
		else{
			HX_STACK_LINE(473)
			this->bias = (int)0;
			HX_STACK_LINE(474)
			this->gamma = (int)0;
		}
		HX_STACK_LINE(476)
		hx::MultEq(this->jAcc,dtratio);
		HX_STACK_LINE(477)
		this->jMax = (this->maxForce * dt);
	}
	HX_STACK_LINE(479)
	return false;
}


Void ZPP_AngleJoint_obj::clearcache( ){
{
		HX_STACK_PUSH("ZPP_AngleJoint::clearcache","zpp_nape/constraint/AngleJoint.hx",412);
		HX_STACK_THIS(this);
		HX_STACK_LINE(413)
		this->jAcc = (int)0;
		HX_STACK_LINE(414)
		this->pre_dt = -1.0;
		HX_STACK_LINE(415)
		this->slack = false;
	}
return null();
}


bool ZPP_AngleJoint_obj::pair_exists( int id,int di){
	HX_STACK_PUSH("ZPP_AngleJoint::pair_exists","zpp_nape/constraint/AngleJoint.hx",409);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(409)
	return (bool((bool((this->b1->id == id)) && bool((this->b2->id == di)))) || bool((bool((this->b1->id == di)) && bool((this->b2->id == id)))));
}


Void ZPP_AngleJoint_obj::forest( ){
{
		HX_STACK_PUSH("ZPP_AngleJoint::forest","zpp_nape/constraint/AngleJoint.hx",311);
		HX_STACK_THIS(this);
		HX_STACK_LINE(312)
		if (((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_AngleJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/AngleJoint.hx",315);
					{
						HX_STACK_LINE(316)
						::zpp_nape::space::ZPP_Component obj = __this->b1->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(317)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(318)
						while(((obj != obj->parent))){
							HX_STACK_LINE(319)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(320)
							obj->parent = stack;
							HX_STACK_LINE(321)
							stack = obj;
							HX_STACK_LINE(322)
							obj = nxt;
						}
						HX_STACK_LINE(324)
						while(((stack != null()))){
							HX_STACK_LINE(325)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(326)
							stack->parent = obj;
							HX_STACK_LINE(327)
							stack = nxt;
						}
						HX_STACK_LINE(329)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(313)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b1->component == this->b1->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b1->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_AngleJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/AngleJoint.hx",334);
					{
						HX_STACK_LINE(335)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(336)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(337)
						while(((obj != obj->parent))){
							HX_STACK_LINE(338)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(339)
							obj->parent = stack;
							HX_STACK_LINE(340)
							stack = obj;
							HX_STACK_LINE(341)
							obj = nxt;
						}
						HX_STACK_LINE(343)
						while(((stack != null()))){
							HX_STACK_LINE(344)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(345)
							stack->parent = obj;
							HX_STACK_LINE(346)
							stack = nxt;
						}
						HX_STACK_LINE(348)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(332)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(351)
			if (((xr != yr))){
				HX_STACK_LINE(351)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(352)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(353)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(353)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(355)
						yr->parent = xr;
						HX_STACK_LINE(356)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(360)
		if (((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_AngleJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/AngleJoint.hx",363);
					{
						HX_STACK_LINE(364)
						::zpp_nape::space::ZPP_Component obj = __this->b2->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(365)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(366)
						while(((obj != obj->parent))){
							HX_STACK_LINE(367)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(368)
							obj->parent = stack;
							HX_STACK_LINE(369)
							stack = obj;
							HX_STACK_LINE(370)
							obj = nxt;
						}
						HX_STACK_LINE(372)
						while(((stack != null()))){
							HX_STACK_LINE(373)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(374)
							stack->parent = obj;
							HX_STACK_LINE(375)
							stack = nxt;
						}
						HX_STACK_LINE(377)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(361)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b2->component == this->b2->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b2->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_AngleJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/AngleJoint.hx",382);
					{
						HX_STACK_LINE(383)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(384)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(385)
						while(((obj != obj->parent))){
							HX_STACK_LINE(386)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(387)
							obj->parent = stack;
							HX_STACK_LINE(388)
							stack = obj;
							HX_STACK_LINE(389)
							obj = nxt;
						}
						HX_STACK_LINE(391)
						while(((stack != null()))){
							HX_STACK_LINE(392)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(393)
							stack->parent = obj;
							HX_STACK_LINE(394)
							stack = nxt;
						}
						HX_STACK_LINE(396)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(380)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(399)
			if (((xr != yr))){
				HX_STACK_LINE(399)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(400)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(401)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(401)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(403)
						yr->parent = xr;
						HX_STACK_LINE(404)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


Void ZPP_AngleJoint_obj::wake_connected( ){
{
		HX_STACK_PUSH("ZPP_AngleJoint::wake_connected","zpp_nape/constraint/AngleJoint.hx",307);
		HX_STACK_THIS(this);
		HX_STACK_LINE(308)
		if (((bool((this->b1 != null())) && bool((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(308)
			this->b1->wake();
		}
		HX_STACK_LINE(309)
		if (((bool((this->b2 != null())) && bool((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(309)
			this->b2->wake();
		}
	}
return null();
}


Void ZPP_AngleJoint_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_AngleJoint::validate","zpp_nape/constraint/AngleJoint.hx",300);
		HX_STACK_THIS(this);
		HX_STACK_LINE(301)
		if (((bool((this->b1 == null())) || bool((this->b2 == null()))))){
			HX_STACK_LINE(301)
			hx::Throw (HX_CSTRING("Error: AngleJoint cannot be simulated null bodies"));
		}
		HX_STACK_LINE(302)
		if (((this->b1 == this->b2))){
			HX_STACK_LINE(302)
			hx::Throw (HX_CSTRING("Error: AngleJoint cannot be simulated with body1 == body2"));
		}
		HX_STACK_LINE(303)
		if (((bool((this->b1->space != this->space)) || bool((this->b2->space != this->space))))){
			HX_STACK_LINE(303)
			hx::Throw (HX_CSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned"));
		}
		HX_STACK_LINE(304)
		if (((this->jointMin > this->jointMax))){
			HX_STACK_LINE(304)
			hx::Throw (HX_CSTRING("Error: AngleJoint must have jointMin <= jointMax"));
		}
		HX_STACK_LINE(305)
		if (((bool(!(((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) && bool(!(((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))))){
			HX_STACK_LINE(305)
			hx::Throw (HX_CSTRING("Error: Constraints cannot have both bodies non-dynamic"));
		}
	}
return null();
}


::nape::constraint::Constraint ZPP_AngleJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_PUSH("ZPP_AngleJoint::copy","zpp_nape/constraint/AngleJoint.hx",245);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dict,"dict");
	HX_STACK_ARG(todo,"todo");
	HX_STACK_LINE(246)
	Array< ::Dynamic > ret = Array_obj< ::Dynamic >::__new().Add(::nape::constraint::AngleJoint_obj::__new(null(),null(),this->jointMin,this->jointMax,this->ratio));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(247)
	this->copyto(ret->__get((int)0).StaticCast< ::nape::constraint::AngleJoint >());
	HX_STACK_LINE(248)
	if (((bool((dict != null())) && bool((this->b1 != null()))))){
		HX_STACK_LINE(258)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(259)
			while(((_g < dict->length))){
				HX_STACK_LINE(259)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(259)
				++(_g);
				HX_STACK_LINE(260)
				if (((idc->id == this->b1->id))){
					HX_STACK_LINE(261)
					b = idc->bc;
					HX_STACK_LINE(262)
					break;
				}
			}
		}
		HX_STACK_LINE(265)
		if (((b != null()))){
			HX_STACK_LINE(265)
			ret->__get((int)0).StaticCast< ::nape::constraint::AngleJoint >()->zpp_inner_zn->b1 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/AngleJoint.hx",266);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(266)
					ret->__get((int)0).StaticCast< ::nape::constraint::AngleJoint >()->zpp_inner_zn->b1 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(266)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b1->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(269)
	if (((bool((dict != null())) && bool((this->b2 != null()))))){
		HX_STACK_LINE(279)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(280)
			while(((_g < dict->length))){
				HX_STACK_LINE(280)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(280)
				++(_g);
				HX_STACK_LINE(281)
				if (((idc->id == this->b2->id))){
					HX_STACK_LINE(282)
					b = idc->bc;
					HX_STACK_LINE(283)
					break;
				}
			}
		}
		HX_STACK_LINE(286)
		if (((b != null()))){
			HX_STACK_LINE(286)
			ret->__get((int)0).StaticCast< ::nape::constraint::AngleJoint >()->zpp_inner_zn->b2 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/AngleJoint.hx",287);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(287)
					ret->__get((int)0).StaticCast< ::nape::constraint::AngleJoint >()->zpp_inner_zn->b2 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(287)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b2->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(290)
	return ret->__get((int)0).StaticCast< ::nape::constraint::AngleJoint >();
}


Void ZPP_AngleJoint_obj::inactiveBodies( ){
{
		HX_STACK_PUSH("ZPP_AngleJoint::inactiveBodies","zpp_nape/constraint/AngleJoint.hx",229);
		HX_STACK_THIS(this);
		HX_STACK_LINE(230)
		if (((this->b1 != null()))){
			HX_STACK_LINE(231)
			this->b1->constraints->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(233)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(233)
			if (((this->b2 != null()))){
				HX_STACK_LINE(234)
				this->b2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_AngleJoint_obj::activeBodies( ){
{
		HX_STACK_PUSH("ZPP_AngleJoint::activeBodies","zpp_nape/constraint/AngleJoint.hx",221);
		HX_STACK_THIS(this);
		HX_STACK_LINE(222)
		if (((this->b1 != null()))){
			HX_STACK_LINE(223)
			this->b1->constraints->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(225)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(225)
			if (((this->b2 != null()))){
				HX_STACK_LINE(226)
				this->b2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


::nape::geom::Vec3 ZPP_AngleJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_PUSH("ZPP_AngleJoint::bodyImpulse","zpp_nape/constraint/AngleJoint.hx",214);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(214)
	if ((this->stepped)){
		HX_STACK_LINE(215)
		if (((b == this->b1))){
			HX_STACK_LINE(216)
			return ::nape::geom::Vec3_obj::get((int)0,(int)0,(-(this->scale) * this->jAcc));
		}
		else{
			HX_STACK_LINE(217)
			return ::nape::geom::Vec3_obj::get((int)0,(int)0,((this->ratio * this->scale) * this->jAcc));
		}
	}
	else{
		HX_STACK_LINE(219)
		return ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	}
	HX_STACK_LINE(214)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AngleJoint_obj,bodyImpulse,return )

bool ZPP_AngleJoint_obj::is_slack( ){
	HX_STACK_PUSH("ZPP_AngleJoint::is_slack","zpp_nape/constraint/AngleJoint.hx",184);
	HX_STACK_THIS(this);
	HX_STACK_LINE(185)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(187)
		Float C = ((this->ratio * this->b2->rot) - this->b1->rot);		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(188)
		if ((this->equal)){
			HX_STACK_LINE(189)
			hx::SubEq(C,this->jointMax);
			HX_STACK_LINE(190)
			slack = false;
			HX_STACK_LINE(191)
			this->scale = 1.0;
		}
		else{
			HX_STACK_LINE(193)
			if (((C < this->jointMin))){
				HX_STACK_LINE(195)
				C = (this->jointMin - C);
				HX_STACK_LINE(196)
				this->scale = -1.0;
				HX_STACK_LINE(197)
				slack = false;
			}
			else{
				HX_STACK_LINE(199)
				if (((C > this->jointMax))){
					HX_STACK_LINE(200)
					hx::SubEq(C,this->jointMax);
					HX_STACK_LINE(201)
					this->scale = 1.0;
					HX_STACK_LINE(202)
					slack = false;
				}
				else{
					HX_STACK_LINE(205)
					this->scale = 0.0;
					HX_STACK_LINE(206)
					C = (int)0;
					HX_STACK_LINE(207)
					slack = true;
				}
			}
		}
		HX_STACK_LINE(210)
		C;
	}
	HX_STACK_LINE(212)
	return slack;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AngleJoint_obj,is_slack,return )


ZPP_AngleJoint_obj::ZPP_AngleJoint_obj()
{
}

void ZPP_AngleJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AngleJoint);
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(kMass,"kMass");
	HX_MARK_MEMBER_NAME(b2,"b2");
	HX_MARK_MEMBER_NAME(b1,"b1");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(equal,"equal");
	HX_MARK_MEMBER_NAME(slack,"slack");
	HX_MARK_MEMBER_NAME(jointMax,"jointMax");
	HX_MARK_MEMBER_NAME(jointMin,"jointMin");
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_AngleJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(kMass,"kMass");
	HX_VISIT_MEMBER_NAME(b2,"b2");
	HX_VISIT_MEMBER_NAME(b1,"b1");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(equal,"equal");
	HX_VISIT_MEMBER_NAME(slack,"slack");
	HX_VISIT_MEMBER_NAME(jointMax,"jointMax");
	HX_VISIT_MEMBER_NAME(jointMin,"jointMin");
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_AngleJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"bias") ) { return bias; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		if (HX_FIELD_EQ(inName,"kMass") ) { return kMass; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal; }
		if (HX_FIELD_EQ(inName,"slack") ) { return slack; }
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
		if (HX_FIELD_EQ(inName,"is_slack") ) { return is_slack_dyn(); }
		if (HX_FIELD_EQ(inName,"jointMax") ) { return jointMax; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { return jointMin; }
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

Dynamic ZPP_AngleJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMass") ) { kMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"equal") ) { equal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slack") ) { slack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jointMax") ) { jointMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { jointMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::AngleJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_AngleJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stepped"));
	outFields->push(HX_CSTRING("bias"));
	outFields->push(HX_CSTRING("gamma"));
	outFields->push(HX_CSTRING("jMax"));
	outFields->push(HX_CSTRING("jAcc"));
	outFields->push(HX_CSTRING("kMass"));
	outFields->push(HX_CSTRING("b2"));
	outFields->push(HX_CSTRING("b1"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("equal"));
	outFields->push(HX_CSTRING("slack"));
	outFields->push(HX_CSTRING("jointMax"));
	outFields->push(HX_CSTRING("jointMin"));
	outFields->push(HX_CSTRING("ratio"));
	outFields->push(HX_CSTRING("outer_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
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
	HX_CSTRING("bias"),
	HX_CSTRING("gamma"),
	HX_CSTRING("jMax"),
	HX_CSTRING("jAcc"),
	HX_CSTRING("kMass"),
	HX_CSTRING("b2"),
	HX_CSTRING("b1"),
	HX_CSTRING("inactiveBodies"),
	HX_CSTRING("activeBodies"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("is_slack"),
	HX_CSTRING("scale"),
	HX_CSTRING("equal"),
	HX_CSTRING("slack"),
	HX_CSTRING("jointMax"),
	HX_CSTRING("jointMin"),
	HX_CSTRING("ratio"),
	HX_CSTRING("outer_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AngleJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AngleJoint_obj::__mClass,"__mClass");
};

Class ZPP_AngleJoint_obj::__mClass;

void ZPP_AngleJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_AngleJoint"), hx::TCanCast< ZPP_AngleJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_AngleJoint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
