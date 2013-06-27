#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_MotorJoint
#include <nape/constraint/MotorJoint.h>
#endif
#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
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
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_MotorJoint
#include <zpp_nape/constraint/ZPP_MotorJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
namespace nape{
namespace constraint{

Void MotorJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,hx::Null< Float >  __o_rate,hx::Null< Float >  __o_ratio)
{
HX_STACK_PUSH("MotorJoint::new","nape/constraint/MotorJoint.hx",183);
Float rate = __o_rate.Default(0.0);
Float ratio = __o_ratio.Default(1.0);
{
	HX_STACK_LINE(187)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(326)
	this->zpp_inner_zn = ::zpp_nape::constraint::ZPP_MotorJoint_obj::__new();
	HX_STACK_LINE(327)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(328)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(329)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(331)
	try{
		HX_STACK_LINE(331)
		super::__construct();
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(339)
	{
		HX_STACK_LINE(339)
		{
			HX_STACK_LINE(339)
			this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body1")));
			HX_STACK_LINE(339)
			::zpp_nape::phys::ZPP_Body inbody1 = (  (((body1 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body1->zpp_inner) );		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(339)
			if (((inbody1 != this->zpp_inner_zn->b1))){
				HX_STACK_LINE(339)
				if (((this->zpp_inner_zn->b1 != null()))){
					HX_STACK_LINE(339)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
						HX_STACK_LINE(339)
						if (((this->zpp_inner_zn->b1 != null()))){
							HX_STACK_LINE(339)
							this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(339)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(339)
						this->zpp_inner_zn->b1->wake();
					}
				}
				HX_STACK_LINE(339)
				this->zpp_inner_zn->b1 = inbody1;
				HX_STACK_LINE(339)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
					HX_STACK_LINE(339)
					if (((inbody1 != null()))){
						HX_STACK_LINE(339)
						inbody1->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(339)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(339)
					this->zpp_inner->wake();
					HX_STACK_LINE(339)
					if (((inbody1 != null()))){
						HX_STACK_LINE(339)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(339)
		if (((this->zpp_inner_zn->b1 == null()))){
			HX_STACK_LINE(339)
			Dynamic();
		}
		else{
			HX_STACK_LINE(339)
			this->zpp_inner_zn->b1->outer;
		}
	}
	HX_STACK_LINE(340)
	{
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body2")));
			HX_STACK_LINE(340)
			::zpp_nape::phys::ZPP_Body inbody2 = (  (((body2 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body2->zpp_inner) );		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(340)
			if (((inbody2 != this->zpp_inner_zn->b2))){
				HX_STACK_LINE(340)
				if (((this->zpp_inner_zn->b2 != null()))){
					HX_STACK_LINE(340)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
						HX_STACK_LINE(340)
						if (((this->zpp_inner_zn->b2 != null()))){
							HX_STACK_LINE(340)
							this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(340)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(340)
						this->zpp_inner_zn->b2->wake();
					}
				}
				HX_STACK_LINE(340)
				this->zpp_inner_zn->b2 = inbody2;
				HX_STACK_LINE(340)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
					HX_STACK_LINE(340)
					if (((inbody2 != null()))){
						HX_STACK_LINE(340)
						inbody2->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(340)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(340)
					this->zpp_inner->wake();
					HX_STACK_LINE(340)
					if (((inbody2 != null()))){
						HX_STACK_LINE(340)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(340)
		if (((this->zpp_inner_zn->b2 == null()))){
			HX_STACK_LINE(340)
			Dynamic();
		}
		else{
			HX_STACK_LINE(340)
			this->zpp_inner_zn->b2->outer;
		}
	}
	HX_STACK_LINE(341)
	{
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			this->zpp_inner->immutable_midstep(HX_CSTRING("MotorJoint::rate"));
			HX_STACK_LINE(341)
			if (((rate != rate))){
				HX_STACK_LINE(341)
				hx::Throw (HX_CSTRING("Error: MotorJoint::rate cannot be NaN"));
			}
			HX_STACK_LINE(341)
			if (((this->zpp_inner_zn->rate != rate))){
				HX_STACK_LINE(341)
				this->zpp_inner_zn->rate = rate;
				HX_STACK_LINE(341)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(341)
		this->zpp_inner_zn->rate;
	}
	HX_STACK_LINE(342)
	{
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			this->zpp_inner->immutable_midstep(HX_CSTRING("MotorJoint::ratio"));
			HX_STACK_LINE(342)
			if (((ratio != ratio))){
				HX_STACK_LINE(342)
				hx::Throw (HX_CSTRING("Error: MotorJoint::ratio cannot be NaN"));
			}
			HX_STACK_LINE(342)
			if (((this->zpp_inner_zn->ratio != ratio))){
				HX_STACK_LINE(342)
				this->zpp_inner_zn->ratio = ratio;
				HX_STACK_LINE(342)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(342)
		this->zpp_inner_zn->ratio;
	}
}
;
	return null();
}

MotorJoint_obj::~MotorJoint_obj() { }

Dynamic MotorJoint_obj::__CreateEmpty() { return  new MotorJoint_obj; }
hx::ObjectPtr< MotorJoint_obj > MotorJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,hx::Null< Float >  __o_rate,hx::Null< Float >  __o_ratio)
{  hx::ObjectPtr< MotorJoint_obj > result = new MotorJoint_obj();
	result->__construct(body1,body2,__o_rate,__o_ratio);
	return result;}

Dynamic MotorJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MotorJoint_obj > result = new MotorJoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void MotorJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_PUSH("MotorJoint::visitBodies","nape/constraint/MotorJoint.hx",378);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(379)
		if (((((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )) != null()))){
			HX_STACK_LINE(379)
			lambda((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(382)
		if (((bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) ))))))){
			HX_STACK_LINE(382)
			lambda((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )).Cast< Void >();
		}
	}
return null();
}


::nape::geom::Vec3 MotorJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("MotorJoint::bodyImpulse","nape/constraint/MotorJoint.hx",359);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(361)
	if (((body == null()))){
		HX_STACK_LINE(361)
		hx::Throw (HX_CSTRING("Error: Cannot evaluate impulse on null body"));
	}
	HX_STACK_LINE(364)
	if (((bool((body != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )))) && bool((body != ((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) ))))))){
		HX_STACK_LINE(364)
		hx::Throw (HX_CSTRING("Error: Body is not linked to this constraint"));
	}
	HX_STACK_LINE(368)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(368)
		return ::nape::geom::Vec3_obj::get(null(),null(),null());
	}
	else{
		HX_STACK_LINE(371)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(368)
	return null();
}


::nape::geom::MatMN MotorJoint_obj::impulse( ){
	HX_STACK_PUSH("MotorJoint::impulse","nape/constraint/MotorJoint.hx",349);
	HX_STACK_THIS(this);
	HX_STACK_LINE(350)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)1,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(351)
	{
		HX_STACK_LINE(351)
		if (((bool(((int)0 >= ret->zpp_inner->m)) || bool(((int)0 >= ret->zpp_inner->n))))){
			HX_STACK_LINE(351)
			hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
		}
		HX_STACK_LINE(351)
		ret->zpp_inner->x[((int)0 * ret->zpp_inner->n)] = this->zpp_inner_zn->jAcc;
	}
	HX_STACK_LINE(352)
	return ret;
}


Float MotorJoint_obj::set_rate( Float rate){
	HX_STACK_PUSH("MotorJoint::set_rate","nape/constraint/MotorJoint.hx",299);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rate,"rate");
	HX_STACK_LINE(300)
	{
		HX_STACK_LINE(301)
		this->zpp_inner->immutable_midstep(HX_CSTRING("MotorJoint::rate"));
		HX_STACK_LINE(303)
		if (((rate != rate))){
			HX_STACK_LINE(303)
			hx::Throw (HX_CSTRING("Error: MotorJoint::rate cannot be NaN"));
		}
		HX_STACK_LINE(307)
		if (((this->zpp_inner_zn->rate != rate))){
			HX_STACK_LINE(308)
			this->zpp_inner_zn->rate = rate;
			HX_STACK_LINE(309)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(312)
	return this->zpp_inner_zn->rate;
}


HX_DEFINE_DYNAMIC_FUNC1(MotorJoint_obj,set_rate,return )

Float MotorJoint_obj::get_rate( ){
	HX_STACK_PUSH("MotorJoint::get_rate","nape/constraint/MotorJoint.hx",296);
	HX_STACK_THIS(this);
	HX_STACK_LINE(296)
	return this->zpp_inner_zn->rate;
}


HX_DEFINE_DYNAMIC_FUNC0(MotorJoint_obj,get_rate,return )

Float MotorJoint_obj::set_ratio( Float ratio){
	HX_STACK_PUSH("MotorJoint::set_ratio","nape/constraint/MotorJoint.hx",274);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ratio,"ratio");
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(276)
		this->zpp_inner->immutable_midstep(HX_CSTRING("MotorJoint::ratio"));
		HX_STACK_LINE(278)
		if (((ratio != ratio))){
			HX_STACK_LINE(278)
			hx::Throw (HX_CSTRING("Error: MotorJoint::ratio cannot be NaN"));
		}
		HX_STACK_LINE(282)
		if (((this->zpp_inner_zn->ratio != ratio))){
			HX_STACK_LINE(283)
			this->zpp_inner_zn->ratio = ratio;
			HX_STACK_LINE(284)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(287)
	return this->zpp_inner_zn->ratio;
}


HX_DEFINE_DYNAMIC_FUNC1(MotorJoint_obj,set_ratio,return )

Float MotorJoint_obj::get_ratio( ){
	HX_STACK_PUSH("MotorJoint::get_ratio","nape/constraint/MotorJoint.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_LINE(271)
	return this->zpp_inner_zn->ratio;
}


HX_DEFINE_DYNAMIC_FUNC0(MotorJoint_obj,get_ratio,return )

::nape::phys::Body MotorJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_PUSH("MotorJoint::set_body2","nape/constraint/MotorJoint.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body2,"body2");
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(239)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body2")));
		HX_STACK_LINE(240)
		::zpp_nape::phys::ZPP_Body inbody2 = (  (((body2 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body2->zpp_inner) );		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(241)
		if (((inbody2 != this->zpp_inner_zn->b2))){
			HX_STACK_LINE(242)
			if (((this->zpp_inner_zn->b2 != null()))){
				HX_STACK_LINE(243)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
					HX_STACK_LINE(243)
					if (((this->zpp_inner_zn->b2 != null()))){
						HX_STACK_LINE(245)
						this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(248)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(248)
					this->zpp_inner_zn->b2->wake();
				}
			}
			HX_STACK_LINE(250)
			this->zpp_inner_zn->b2 = inbody2;
			HX_STACK_LINE(251)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
				HX_STACK_LINE(251)
				if (((inbody2 != null()))){
					HX_STACK_LINE(253)
					inbody2->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(256)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(257)
				this->zpp_inner->wake();
				HX_STACK_LINE(258)
				if (((inbody2 != null()))){
					HX_STACK_LINE(258)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(262)
	return (  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(MotorJoint_obj,set_body2,return )

::nape::phys::Body MotorJoint_obj::get_body2( ){
	HX_STACK_PUSH("MotorJoint::get_body2","nape/constraint/MotorJoint.hx",234);
	HX_STACK_THIS(this);
	HX_STACK_LINE(234)
	return (  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(MotorJoint_obj,get_body2,return )

::nape::phys::Body MotorJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_PUSH("MotorJoint::set_body1","nape/constraint/MotorJoint.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body1,"body1");
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(201)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body1")));
		HX_STACK_LINE(202)
		::zpp_nape::phys::ZPP_Body inbody1 = (  (((body1 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body1->zpp_inner) );		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(203)
		if (((inbody1 != this->zpp_inner_zn->b1))){
			HX_STACK_LINE(204)
			if (((this->zpp_inner_zn->b1 != null()))){
				HX_STACK_LINE(205)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
					HX_STACK_LINE(205)
					if (((this->zpp_inner_zn->b1 != null()))){
						HX_STACK_LINE(207)
						this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(210)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(210)
					this->zpp_inner_zn->b1->wake();
				}
			}
			HX_STACK_LINE(212)
			this->zpp_inner_zn->b1 = inbody1;
			HX_STACK_LINE(213)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
				HX_STACK_LINE(213)
				if (((inbody1 != null()))){
					HX_STACK_LINE(215)
					inbody1->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(218)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(219)
				this->zpp_inner->wake();
				HX_STACK_LINE(220)
				if (((inbody1 != null()))){
					HX_STACK_LINE(220)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(224)
	return (  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(MotorJoint_obj,set_body1,return )

::nape::phys::Body MotorJoint_obj::get_body1( ){
	HX_STACK_PUSH("MotorJoint::get_body1","nape/constraint/MotorJoint.hx",196);
	HX_STACK_THIS(this);
	HX_STACK_LINE(196)
	return (  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(MotorJoint_obj,get_body1,return )


MotorJoint_obj::MotorJoint_obj()
{
}

void MotorJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MotorJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MotorJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MotorJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return get_rate(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { return get_ratio(); }
		if (HX_FIELD_EQ(inName,"body2") ) { return get_body2(); }
		if (HX_FIELD_EQ(inName,"body1") ) { return get_body1(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_rate") ) { return set_rate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rate") ) { return get_rate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_ratio") ) { return set_ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ratio") ) { return get_ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body2") ) { return set_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return get_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body1") ) { return set_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body1") ) { return get_body1_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MotorJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return set_rate(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { return set_ratio(inValue); }
		if (HX_FIELD_EQ(inName,"body2") ) { return set_body2(inValue); }
		if (HX_FIELD_EQ(inName,"body1") ) { return set_body1(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_MotorJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MotorJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rate"));
	outFields->push(HX_CSTRING("ratio"));
	outFields->push(HX_CSTRING("body2"));
	outFields->push(HX_CSTRING("body1"));
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("visitBodies"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("impulse"),
	HX_CSTRING("set_rate"),
	HX_CSTRING("get_rate"),
	HX_CSTRING("set_ratio"),
	HX_CSTRING("get_ratio"),
	HX_CSTRING("set_body2"),
	HX_CSTRING("get_body2"),
	HX_CSTRING("set_body1"),
	HX_CSTRING("get_body1"),
	HX_CSTRING("zpp_inner_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MotorJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MotorJoint_obj::__mClass,"__mClass");
};

Class MotorJoint_obj::__mClass;

void MotorJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.MotorJoint"), hx::TCanCast< MotorJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MotorJoint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
