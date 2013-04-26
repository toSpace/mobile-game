#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
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
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
namespace nape{
namespace constraint{

Void Constraint_obj::__construct()
{
HX_STACK_PUSH("Constraint::new","nape/constraint/Constraint.hx",177);
{
	HX_STACK_LINE(208)
	this->debugDraw = true;
	HX_STACK_LINE(642)
	this->zpp_inner->insert_cbtype(::zpp_nape::callbacks::ZPP_CbType_obj::ANY_CONSTRAINT->zpp_inner);
	HX_STACK_LINE(644)
	hx::Throw (HX_CSTRING("Error: Constraint cannot be instantiated derp!"));
}
;
	return null();
}

Constraint_obj::~Constraint_obj() { }

Dynamic Constraint_obj::__CreateEmpty() { return  new Constraint_obj; }
hx::ObjectPtr< Constraint_obj > Constraint_obj::__new()
{  hx::ObjectPtr< Constraint_obj > result = new Constraint_obj();
	result->__construct();
	return result;}

Dynamic Constraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Constraint_obj > result = new Constraint_obj();
	result->__construct();
	return result;}

::nape::constraint::Constraint Constraint_obj::copy( ){
	HX_STACK_PUSH("Constraint::copy","nape/constraint/Constraint.hx",661);
	HX_STACK_THIS(this);
	HX_STACK_LINE(661)
	return this->zpp_inner->copy(null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,copy,return )

::String Constraint_obj::toString( ){
	HX_STACK_PUSH("Constraint::toString","nape/constraint/Constraint.hx",650);
	HX_STACK_THIS(this);
	HX_STACK_LINE(650)
	return HX_CSTRING("{Constraint}");
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,toString,return )

::nape::callbacks::CbTypeList Constraint_obj::get_cbTypes( ){
	HX_STACK_PUSH("Constraint::get_cbTypes","nape/constraint/Constraint.hx",632);
	HX_STACK_THIS(this);
	HX_STACK_LINE(633)
	if (((this->zpp_inner->wrap_cbTypes == null()))){
		HX_STACK_LINE(633)
		this->zpp_inner->setupcbTypes();
	}
	HX_STACK_LINE(636)
	return this->zpp_inner->wrap_cbTypes;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_cbTypes,return )

Void Constraint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_PUSH("Constraint::visitBodies","nape/constraint/Constraint.hx",622);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,visitBodies,(void))

::nape::geom::Vec3 Constraint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("Constraint::bodyImpulse","nape/constraint/Constraint.hx",610);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(610)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,bodyImpulse,return )

::nape::geom::MatMN Constraint_obj::impulse( ){
	HX_STACK_PUSH("Constraint::impulse","nape/constraint/Constraint.hx",597);
	HX_STACK_THIS(this);
	HX_STACK_LINE(597)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,impulse,return )

bool Constraint_obj::set_removeOnBreak( bool removeOnBreak){
	HX_STACK_PUSH("Constraint::set_removeOnBreak","nape/constraint/Constraint.hx",586);
	HX_STACK_THIS(this);
	HX_STACK_ARG(removeOnBreak,"removeOnBreak");
	HX_STACK_LINE(587)
	this->zpp_inner->removeOnBreak = removeOnBreak;
	HX_STACK_LINE(590)
	return this->zpp_inner->removeOnBreak;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_removeOnBreak,return )

bool Constraint_obj::get_removeOnBreak( ){
	HX_STACK_PUSH("Constraint::get_removeOnBreak","nape/constraint/Constraint.hx",583);
	HX_STACK_THIS(this);
	HX_STACK_LINE(583)
	return this->zpp_inner->removeOnBreak;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_removeOnBreak,return )

bool Constraint_obj::set_breakUnderError( bool breakUnderError){
	HX_STACK_PUSH("Constraint::set_breakUnderError","nape/constraint/Constraint.hx",564);
	HX_STACK_THIS(this);
	HX_STACK_ARG(breakUnderError,"breakUnderError");
	HX_STACK_LINE(565)
	if (((this->zpp_inner->breakUnderError != breakUnderError))){
		HX_STACK_LINE(567)
		this->zpp_inner->breakUnderError = breakUnderError;
		HX_STACK_LINE(568)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(571)
	return this->zpp_inner->breakUnderError;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_breakUnderError,return )

bool Constraint_obj::get_breakUnderError( ){
	HX_STACK_PUSH("Constraint::get_breakUnderError","nape/constraint/Constraint.hx",561);
	HX_STACK_THIS(this);
	HX_STACK_LINE(561)
	return this->zpp_inner->breakUnderError;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_breakUnderError,return )

bool Constraint_obj::set_breakUnderForce( bool breakUnderForce){
	HX_STACK_PUSH("Constraint::set_breakUnderForce","nape/constraint/Constraint.hx",543);
	HX_STACK_THIS(this);
	HX_STACK_ARG(breakUnderForce,"breakUnderForce");
	HX_STACK_LINE(544)
	if (((this->zpp_inner->breakUnderForce != breakUnderForce))){
		HX_STACK_LINE(546)
		this->zpp_inner->breakUnderForce = breakUnderForce;
		HX_STACK_LINE(547)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(550)
	return this->zpp_inner->breakUnderForce;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_breakUnderForce,return )

bool Constraint_obj::get_breakUnderForce( ){
	HX_STACK_PUSH("Constraint::get_breakUnderForce","nape/constraint/Constraint.hx",540);
	HX_STACK_THIS(this);
	HX_STACK_LINE(540)
	return this->zpp_inner->breakUnderForce;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_breakUnderForce,return )

Float Constraint_obj::set_maxError( Float maxError){
	HX_STACK_PUSH("Constraint::set_maxError","nape/constraint/Constraint.hx",512);
	HX_STACK_THIS(this);
	HX_STACK_ARG(maxError,"maxError");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(515)
		if (((maxError != maxError))){
			HX_STACK_LINE(515)
			hx::Throw (HX_CSTRING("Error: Constraint::maxError cannot be NaN"));
		}
		HX_STACK_LINE(518)
		if (((maxError < (int)0))){
			HX_STACK_LINE(518)
			hx::Throw (HX_CSTRING("Error: Constraint::maxError must be >=0"));
		}
		HX_STACK_LINE(522)
		if (((this->zpp_inner->maxError != maxError))){
			HX_STACK_LINE(523)
			this->zpp_inner->maxError = maxError;
			HX_STACK_LINE(524)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(527)
	return this->zpp_inner->maxError;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_maxError,return )

Float Constraint_obj::get_maxError( ){
	HX_STACK_PUSH("Constraint::get_maxError","nape/constraint/Constraint.hx",509);
	HX_STACK_THIS(this);
	HX_STACK_LINE(509)
	return this->zpp_inner->maxError;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_maxError,return )

Float Constraint_obj::set_maxForce( Float maxForce){
	HX_STACK_PUSH("Constraint::set_maxForce","nape/constraint/Constraint.hx",478);
	HX_STACK_THIS(this);
	HX_STACK_ARG(maxForce,"maxForce");
	HX_STACK_LINE(479)
	{
		HX_STACK_LINE(481)
		if (((maxForce != maxForce))){
			HX_STACK_LINE(481)
			hx::Throw (HX_CSTRING("Error: Constraint::maxForce cannot be NaN"));
		}
		HX_STACK_LINE(484)
		if (((maxForce < (int)0))){
			HX_STACK_LINE(484)
			hx::Throw (HX_CSTRING("Error: Constraint::maxForce must be >=0"));
		}
		HX_STACK_LINE(488)
		if (((this->zpp_inner->maxForce != maxForce))){
			HX_STACK_LINE(489)
			this->zpp_inner->maxForce = maxForce;
			HX_STACK_LINE(490)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(493)
	return this->zpp_inner->maxForce;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_maxForce,return )

Float Constraint_obj::get_maxForce( ){
	HX_STACK_PUSH("Constraint::get_maxForce","nape/constraint/Constraint.hx",475);
	HX_STACK_THIS(this);
	HX_STACK_LINE(475)
	return this->zpp_inner->maxForce;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_maxForce,return )

Float Constraint_obj::set_damping( Float damping){
	HX_STACK_PUSH("Constraint::set_damping","nape/constraint/Constraint.hx",442);
	HX_STACK_THIS(this);
	HX_STACK_ARG(damping,"damping");
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(445)
		if (((damping != damping))){
			HX_STACK_LINE(445)
			hx::Throw (HX_CSTRING("Error: Constraint::Damping cannot be Nan"));
		}
		HX_STACK_LINE(448)
		if (((damping < (int)0))){
			HX_STACK_LINE(448)
			hx::Throw (HX_CSTRING("Error: Constraint::Damping must be >=0"));
		}
		HX_STACK_LINE(452)
		if (((this->zpp_inner->damping != damping))){
			HX_STACK_LINE(453)
			this->zpp_inner->damping = damping;
			HX_STACK_LINE(454)
			if ((!(this->zpp_inner->stiff))){
				HX_STACK_LINE(454)
				this->zpp_inner->wake();
			}
		}
	}
	HX_STACK_LINE(459)
	return this->zpp_inner->damping;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_damping,return )

Float Constraint_obj::get_damping( ){
	HX_STACK_PUSH("Constraint::get_damping","nape/constraint/Constraint.hx",439);
	HX_STACK_THIS(this);
	HX_STACK_LINE(439)
	return this->zpp_inner->damping;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_damping,return )

Float Constraint_obj::set_frequency( Float frequency){
	HX_STACK_PUSH("Constraint::set_frequency","nape/constraint/Constraint.hx",405);
	HX_STACK_THIS(this);
	HX_STACK_ARG(frequency,"frequency");
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(408)
		if (((frequency != frequency))){
			HX_STACK_LINE(408)
			hx::Throw (HX_CSTRING("Error: Constraint::Frequency cannot be NaN"));
		}
		HX_STACK_LINE(411)
		if (((frequency <= (int)0))){
			HX_STACK_LINE(411)
			hx::Throw (HX_CSTRING("Error: Constraint::Frequency must be >0"));
		}
		HX_STACK_LINE(415)
		if (((this->zpp_inner->frequency != frequency))){
			HX_STACK_LINE(416)
			this->zpp_inner->frequency = frequency;
			HX_STACK_LINE(417)
			if ((!(this->zpp_inner->stiff))){
				HX_STACK_LINE(417)
				this->zpp_inner->wake();
			}
		}
	}
	HX_STACK_LINE(422)
	return this->zpp_inner->frequency;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_frequency,return )

Float Constraint_obj::get_frequency( ){
	HX_STACK_PUSH("Constraint::get_frequency","nape/constraint/Constraint.hx",402);
	HX_STACK_THIS(this);
	HX_STACK_LINE(402)
	return this->zpp_inner->frequency;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_frequency,return )

bool Constraint_obj::set_stiff( bool stiff){
	HX_STACK_PUSH("Constraint::set_stiff","nape/constraint/Constraint.hx",379);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stiff,"stiff");
	HX_STACK_LINE(380)
	if (((this->zpp_inner->stiff != stiff))){
		HX_STACK_LINE(382)
		this->zpp_inner->stiff = stiff;
		HX_STACK_LINE(383)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(386)
	return this->zpp_inner->stiff;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_stiff,return )

bool Constraint_obj::get_stiff( ){
	HX_STACK_PUSH("Constraint::get_stiff","nape/constraint/Constraint.hx",376);
	HX_STACK_THIS(this);
	HX_STACK_LINE(376)
	return this->zpp_inner->stiff;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_stiff,return )

bool Constraint_obj::set_ignore( bool ignore){
	HX_STACK_PUSH("Constraint::set_ignore","nape/constraint/Constraint.hx",350);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ignore,"ignore");
	HX_STACK_LINE(351)
	if (((this->zpp_inner->ignore != ignore))){
		HX_STACK_LINE(353)
		this->zpp_inner->ignore = ignore;
		HX_STACK_LINE(354)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(357)
	return this->zpp_inner->ignore;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_ignore,return )

bool Constraint_obj::get_ignore( ){
	HX_STACK_PUSH("Constraint::get_ignore","nape/constraint/Constraint.hx",347);
	HX_STACK_THIS(this);
	HX_STACK_LINE(347)
	return this->zpp_inner->ignore;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_ignore,return )

bool Constraint_obj::set_active( bool active){
	HX_STACK_PUSH("Constraint::set_active","nape/constraint/Constraint.hx",312);
	HX_STACK_THIS(this);
	HX_STACK_ARG(active,"active");
	HX_STACK_LINE(313)
	if (((this->zpp_inner->active != active))){
		HX_STACK_LINE(315)
		if (((this->zpp_inner->component != null()))){
			HX_STACK_LINE(315)
			this->zpp_inner->component->woken = false;
		}
		HX_STACK_LINE(316)
		this->zpp_inner->clearcache();
		HX_STACK_LINE(317)
		if ((active)){
			HX_STACK_LINE(318)
			this->zpp_inner->active = active;
			HX_STACK_LINE(319)
			this->zpp_inner->activate();
			HX_STACK_LINE(320)
			if (((this->zpp_inner->space != null()))){
				HX_STACK_LINE(321)
				if (((this->zpp_inner->component != null()))){
					HX_STACK_LINE(321)
					this->zpp_inner->component->sleeping = true;
				}
				HX_STACK_LINE(322)
				this->zpp_inner->space->wake_constraint(this->zpp_inner,true);
			}
		}
		else{
			HX_STACK_LINE(326)
			if (((this->zpp_inner->space != null()))){
				HX_STACK_LINE(327)
				this->zpp_inner->wake();
				HX_STACK_LINE(328)
				this->zpp_inner->space->live_constraints->remove(this->zpp_inner);
			}
			HX_STACK_LINE(330)
			this->zpp_inner->active = active;
			HX_STACK_LINE(331)
			this->zpp_inner->deactivate();
		}
	}
	HX_STACK_LINE(335)
	return this->zpp_inner->active;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_active,return )

bool Constraint_obj::get_active( ){
	HX_STACK_PUSH("Constraint::get_active","nape/constraint/Constraint.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_LINE(309)
	return this->zpp_inner->active;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_active,return )

bool Constraint_obj::get_isSleeping( ){
	HX_STACK_PUSH("Constraint::get_isSleeping","nape/constraint/Constraint.hx",290);
	HX_STACK_THIS(this);
	HX_STACK_LINE(292)
	if (((bool((this->zpp_inner->space == null())) || bool(!(this->zpp_inner->active))))){
		HX_STACK_LINE(292)
		hx::Throw ((HX_CSTRING("Error: isSleeping only makes sense if constraint is") + HX_CSTRING(" active and inside a space")));
	}
	HX_STACK_LINE(296)
	return this->zpp_inner->component->sleeping;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_isSleeping,return )

::nape::space::Space Constraint_obj::set_space( ::nape::space::Space space){
	HX_STACK_PUSH("Constraint::set_space","nape/constraint/Constraint.hx",251);
	HX_STACK_THIS(this);
	HX_STACK_ARG(space,"space");
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(254)
		if (((this->zpp_inner->compound != null()))){
			HX_STACK_LINE(254)
			hx::Throw ((HX_CSTRING("Error: Cannot set the space of a Constraint belonging to") + HX_CSTRING(" a Compound, only the root Compound space can be set")));
		}
		HX_STACK_LINE(258)
		if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != space))){
			HX_STACK_LINE(259)
			if (((this->zpp_inner->component != null()))){
				HX_STACK_LINE(259)
				this->zpp_inner->component->woken = false;
			}
			HX_STACK_LINE(260)
			this->zpp_inner->clearcache();
			HX_STACK_LINE(261)
			if (((this->zpp_inner->space != null()))){
				HX_STACK_LINE(261)
				this->zpp_inner->space->outer->zpp_inner->wrap_constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(264)
			if (((space != null()))){
				HX_STACK_LINE(265)
				::nape::constraint::ConstraintList _this = space->zpp_inner->wrap_constraints;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(265)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(265)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(265)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
			else{
				HX_STACK_LINE(267)
				this->zpp_inner->space = null();
			}
		}
	}
	HX_STACK_LINE(272)
	return (  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_space,return )

::nape::space::Space Constraint_obj::get_space( ){
	HX_STACK_PUSH("Constraint::get_space","nape/constraint/Constraint.hx",248);
	HX_STACK_THIS(this);
	HX_STACK_LINE(248)
	return (  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_space,return )

::nape::phys::Compound Constraint_obj::set_compound( ::nape::phys::Compound compound){
	HX_STACK_PUSH("Constraint::set_compound","nape/constraint/Constraint.hx",222);
	HX_STACK_THIS(this);
	HX_STACK_ARG(compound,"compound");
	HX_STACK_LINE(223)
	if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != compound))){
		HX_STACK_LINE(225)
		if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != null()))){
			HX_STACK_LINE(225)
			((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) ))->zpp_inner->wrap_constraints->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(228)
		if (((compound != null()))){
			HX_STACK_LINE(229)
			::nape::constraint::ConstraintList _this = compound->zpp_inner->wrap_constraints;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(229)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(229)
				_this->push(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(229)
				_this->unshift(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(233)
	return (  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_compound,return )

::nape::phys::Compound Constraint_obj::get_compound( ){
	HX_STACK_PUSH("Constraint::get_compound","nape/constraint/Constraint.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_LINE(219)
	return (  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_compound,return )

Dynamic Constraint_obj::get_userData( ){
	HX_STACK_PUSH("Constraint::get_userData","nape/constraint/Constraint.hx",195);
	HX_STACK_THIS(this);
	HX_STACK_LINE(196)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","nape/constraint/Constraint.hx",197);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(196)
		this->zpp_inner->userData = _Function_2_1::Block();
	}
	HX_STACK_LINE(199)
	return this->zpp_inner->userData;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_userData,return )


Constraint_obj::Constraint_obj()
{
}

void Constraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Constraint);
	HX_MARK_MEMBER_NAME(cbTypes,"cbTypes");
	HX_MARK_MEMBER_NAME(removeOnBreak,"removeOnBreak");
	HX_MARK_MEMBER_NAME(breakUnderError,"breakUnderError");
	HX_MARK_MEMBER_NAME(breakUnderForce,"breakUnderForce");
	HX_MARK_MEMBER_NAME(maxError,"maxError");
	HX_MARK_MEMBER_NAME(maxForce,"maxForce");
	HX_MARK_MEMBER_NAME(damping,"damping");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_MEMBER_NAME(stiff,"stiff");
	HX_MARK_MEMBER_NAME(ignore,"ignore");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(isSleeping,"isSleeping");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(compound,"compound");
	HX_MARK_MEMBER_NAME(debugDraw,"debugDraw");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Constraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cbTypes,"cbTypes");
	HX_VISIT_MEMBER_NAME(removeOnBreak,"removeOnBreak");
	HX_VISIT_MEMBER_NAME(breakUnderError,"breakUnderError");
	HX_VISIT_MEMBER_NAME(breakUnderForce,"breakUnderForce");
	HX_VISIT_MEMBER_NAME(maxError,"maxError");
	HX_VISIT_MEMBER_NAME(maxForce,"maxForce");
	HX_VISIT_MEMBER_NAME(damping,"damping");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
	HX_VISIT_MEMBER_NAME(stiff,"stiff");
	HX_VISIT_MEMBER_NAME(ignore,"ignore");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(isSleeping,"isSleeping");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(compound,"compound");
	HX_VISIT_MEMBER_NAME(debugDraw,"debugDraw");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Constraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stiff") ) { return inCallProp ? get_stiff() : stiff; }
		if (HX_FIELD_EQ(inName,"space") ) { return inCallProp ? get_space() : space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ignore") ) { return inCallProp ? get_ignore() : ignore; }
		if (HX_FIELD_EQ(inName,"active") ) { return inCallProp ? get_active() : active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cbTypes") ) { return inCallProp ? get_cbTypes() : cbTypes; }
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		if (HX_FIELD_EQ(inName,"damping") ) { return inCallProp ? get_damping() : damping; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"maxError") ) { return inCallProp ? get_maxError() : maxError; }
		if (HX_FIELD_EQ(inName,"maxForce") ) { return inCallProp ? get_maxForce() : maxForce; }
		if (HX_FIELD_EQ(inName,"compound") ) { return inCallProp ? get_compound() : compound; }
		if (HX_FIELD_EQ(inName,"userData") ) { return inCallProp ? get_userData() : userData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return inCallProp ? get_frequency() : frequency; }
		if (HX_FIELD_EQ(inName,"set_stiff") ) { return set_stiff_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stiff") ) { return get_stiff_dyn(); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_ignore") ) { return set_ignore_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ignore") ) { return get_ignore_dyn(); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"get_active") ) { return get_active_dyn(); }
		if (HX_FIELD_EQ(inName,"isSleeping") ) { return inCallProp ? get_isSleeping() : isSleeping; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_cbTypes") ) { return get_cbTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_damping") ) { return set_damping_dyn(); }
		if (HX_FIELD_EQ(inName,"get_damping") ) { return get_damping_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_maxError") ) { return set_maxError_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxError") ) { return get_maxError_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxForce") ) { return set_maxForce_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxForce") ) { return get_maxForce_dyn(); }
		if (HX_FIELD_EQ(inName,"set_compound") ) { return set_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_compound") ) { return get_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeOnBreak") ) { return inCallProp ? get_removeOnBreak() : removeOnBreak; }
		if (HX_FIELD_EQ(inName,"set_frequency") ) { return set_frequency_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frequency") ) { return get_frequency_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isSleeping") ) { return get_isSleeping_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"breakUnderError") ) { return inCallProp ? get_breakUnderError() : breakUnderError; }
		if (HX_FIELD_EQ(inName,"breakUnderForce") ) { return inCallProp ? get_breakUnderForce() : breakUnderForce; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_removeOnBreak") ) { return set_removeOnBreak_dyn(); }
		if (HX_FIELD_EQ(inName,"get_removeOnBreak") ) { return get_removeOnBreak_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_breakUnderError") ) { return set_breakUnderError_dyn(); }
		if (HX_FIELD_EQ(inName,"get_breakUnderError") ) { return get_breakUnderError_dyn(); }
		if (HX_FIELD_EQ(inName,"set_breakUnderForce") ) { return set_breakUnderForce_dyn(); }
		if (HX_FIELD_EQ(inName,"get_breakUnderForce") ) { return get_breakUnderForce_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Constraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stiff") ) { if (inCallProp) return set_stiff(inValue);stiff=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp) return set_space(inValue);space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ignore") ) { if (inCallProp) return set_ignore(inValue);ignore=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp) return set_active(inValue);active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cbTypes") ) { cbTypes=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"damping") ) { if (inCallProp) return set_damping(inValue);damping=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxError") ) { if (inCallProp) return set_maxError(inValue);maxError=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxForce") ) { if (inCallProp) return set_maxForce(inValue);maxForce=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"compound") ) { if (inCallProp) return set_compound(inValue);compound=inValue.Cast< ::nape::phys::Compound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { if (inCallProp) return set_frequency(inValue);frequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::constraint::ZPP_Constraint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isSleeping") ) { isSleeping=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeOnBreak") ) { if (inCallProp) return set_removeOnBreak(inValue);removeOnBreak=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"breakUnderError") ) { if (inCallProp) return set_breakUnderError(inValue);breakUnderError=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"breakUnderForce") ) { if (inCallProp) return set_breakUnderForce(inValue);breakUnderForce=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Constraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cbTypes"));
	outFields->push(HX_CSTRING("removeOnBreak"));
	outFields->push(HX_CSTRING("breakUnderError"));
	outFields->push(HX_CSTRING("breakUnderForce"));
	outFields->push(HX_CSTRING("maxError"));
	outFields->push(HX_CSTRING("maxForce"));
	outFields->push(HX_CSTRING("damping"));
	outFields->push(HX_CSTRING("frequency"));
	outFields->push(HX_CSTRING("stiff"));
	outFields->push(HX_CSTRING("ignore"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("isSleeping"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("compound"));
	outFields->push(HX_CSTRING("debugDraw"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("copy"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_cbTypes"),
	HX_CSTRING("cbTypes"),
	HX_CSTRING("visitBodies"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("impulse"),
	HX_CSTRING("set_removeOnBreak"),
	HX_CSTRING("get_removeOnBreak"),
	HX_CSTRING("removeOnBreak"),
	HX_CSTRING("set_breakUnderError"),
	HX_CSTRING("get_breakUnderError"),
	HX_CSTRING("breakUnderError"),
	HX_CSTRING("set_breakUnderForce"),
	HX_CSTRING("get_breakUnderForce"),
	HX_CSTRING("breakUnderForce"),
	HX_CSTRING("set_maxError"),
	HX_CSTRING("get_maxError"),
	HX_CSTRING("maxError"),
	HX_CSTRING("set_maxForce"),
	HX_CSTRING("get_maxForce"),
	HX_CSTRING("maxForce"),
	HX_CSTRING("set_damping"),
	HX_CSTRING("get_damping"),
	HX_CSTRING("damping"),
	HX_CSTRING("set_frequency"),
	HX_CSTRING("get_frequency"),
	HX_CSTRING("frequency"),
	HX_CSTRING("set_stiff"),
	HX_CSTRING("get_stiff"),
	HX_CSTRING("stiff"),
	HX_CSTRING("set_ignore"),
	HX_CSTRING("get_ignore"),
	HX_CSTRING("ignore"),
	HX_CSTRING("set_active"),
	HX_CSTRING("get_active"),
	HX_CSTRING("active"),
	HX_CSTRING("get_isSleeping"),
	HX_CSTRING("isSleeping"),
	HX_CSTRING("set_space"),
	HX_CSTRING("get_space"),
	HX_CSTRING("space"),
	HX_CSTRING("set_compound"),
	HX_CSTRING("get_compound"),
	HX_CSTRING("compound"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("userData"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Constraint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Constraint_obj::__mClass,"__mClass");
};

Class Constraint_obj::__mClass;

void Constraint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.Constraint"), hx::TCanCast< Constraint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Constraint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
