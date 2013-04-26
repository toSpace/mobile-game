#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
namespace nape{
namespace dynamics{

Void Contact_obj::__construct()
{
HX_STACK_PUSH("Contact::new","nape/dynamics/Contact.hx",179);
{
	HX_STACK_LINE(183)
	this->zpp_inner = null();
	HX_STACK_LINE(395)
	if ((!(::zpp_nape::dynamics::ZPP_Contact_obj::internal))){
		HX_STACK_LINE(397)
		hx::Throw (HX_CSTRING("Error: Cannot instantiate Contact derp!"));
	}
}
;
	return null();
}

Contact_obj::~Contact_obj() { }

Dynamic Contact_obj::__CreateEmpty() { return  new Contact_obj; }
hx::ObjectPtr< Contact_obj > Contact_obj::__new()
{  hx::ObjectPtr< Contact_obj > result = new Contact_obj();
	result->__construct();
	return result;}

Dynamic Contact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Contact_obj > result = new Contact_obj();
	result->__construct();
	return result;}

::String Contact_obj::toString( ){
	HX_STACK_PUSH("Contact::toString","nape/dynamics/Contact.hx",403);
	HX_STACK_THIS(this);
	HX_STACK_LINE(403)
	if (((bool((this->zpp_inner->arbiter == null())) || bool(this->zpp_inner->arbiter->cleared)))){
		HX_STACK_LINE(404)
		return HX_CSTRING("{object-pooled}");
	}
	else{
		HX_STACK_LINE(405)
		return HX_CSTRING("{Contact}");
	}
	HX_STACK_LINE(403)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,toString,return )

Float Contact_obj::get_friction( ){
	HX_STACK_PUSH("Contact::get_friction","nape/dynamics/Contact.hx",386);
	HX_STACK_THIS(this);
	HX_STACK_LINE(388)
	if ((this->zpp_inner->inactiveme())){
		HX_STACK_LINE(388)
		hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
	}
	HX_STACK_LINE(390)
	return this->zpp_inner->inner->friction;
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_friction,return )

::nape::geom::Vec3 Contact_obj::totalImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("Contact::totalImpulse","nape/dynamics/Contact.hx",337);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(339)
	if ((this->zpp_inner->inactiveme())){
		HX_STACK_LINE(339)
		hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
	}
	HX_STACK_LINE(341)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->arbiter->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(342)
	::zpp_nape::dynamics::ZPP_IContact cin = this->zpp_inner->inner;		HX_STACK_VAR(cin,"cin");
	HX_STACK_LINE(343)
	Float jnAcc = cin->jnAcc;		HX_STACK_VAR(jnAcc,"jnAcc");
	HX_STACK_LINE(344)
	Float jtAcc = cin->jtAcc;		HX_STACK_VAR(jtAcc,"jtAcc");
	HX_STACK_LINE(345)
	Float jrAcc = colarb->jrAcc;		HX_STACK_VAR(jrAcc,"jrAcc");
	HX_STACK_LINE(346)
	if (((body == null()))){
		HX_STACK_LINE(346)
		return ::nape::geom::Vec3_obj::get(((colarb->nx * jnAcc) - (colarb->ny * jtAcc)),((colarb->ny * jnAcc) + (colarb->nx * jtAcc)),jrAcc);
	}
	else{
		HX_STACK_LINE(351)
		if (((bool((body != colarb->b1->outer)) && bool((body != colarb->b2->outer))))){
			HX_STACK_LINE(351)
			hx::Throw (HX_CSTRING("Error: Contact does not relate to the given body"));
		}
		HX_STACK_LINE(353)
		Float jx = ((colarb->nx * jnAcc) - (colarb->ny * jtAcc));		HX_STACK_VAR(jx,"jx");
		HX_STACK_LINE(354)
		Float jy = ((colarb->ny * jnAcc) + (colarb->nx * jtAcc));		HX_STACK_VAR(jy,"jy");
		HX_STACK_LINE(355)
		{
		}
		HX_STACK_LINE(363)
		{
		}
		HX_STACK_LINE(371)
		if (((body == colarb->b1->outer))){
			HX_STACK_LINE(371)
			return ::nape::geom::Vec3_obj::get(-(jx),-(jy),(-((((jy * cin->r1x) - (jx * cin->r1y)))) - jrAcc));
		}
		else{
			HX_STACK_LINE(372)
			return ::nape::geom::Vec3_obj::get(jx,jy,(((jy * cin->r2x) - (jx * cin->r2y)) + jrAcc));
		}
	}
	HX_STACK_LINE(346)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Contact_obj,totalImpulse,return )

Float Contact_obj::rollingImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("Contact::rollingImpulse","nape/dynamics/Contact.hx",308);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(310)
	if ((this->zpp_inner->inactiveme())){
		HX_STACK_LINE(310)
		hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
	}
	HX_STACK_LINE(312)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->arbiter->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(313)
	Float jrAcc = this->zpp_inner->arbiter->colarb->jrAcc;		HX_STACK_VAR(jrAcc,"jrAcc");
	HX_STACK_LINE(314)
	if (((body == null()))){
		HX_STACK_LINE(314)
		return jrAcc;
	}
	else{
		HX_STACK_LINE(317)
		if (((bool((body != colarb->b1->outer)) && bool((body != colarb->b2->outer))))){
			HX_STACK_LINE(317)
			hx::Throw (HX_CSTRING("Error: Contact does not relate to the given body"));
		}
		HX_STACK_LINE(319)
		if (((body == colarb->b1->outer))){
			HX_STACK_LINE(319)
			return -(jrAcc);
		}
		else{
			HX_STACK_LINE(320)
			return jrAcc;
		}
	}
	HX_STACK_LINE(314)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(Contact_obj,rollingImpulse,return )

::nape::geom::Vec3 Contact_obj::tangentImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("Contact::tangentImpulse","nape/dynamics/Contact.hx",281);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(283)
	if ((this->zpp_inner->inactiveme())){
		HX_STACK_LINE(283)
		hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
	}
	HX_STACK_LINE(285)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->arbiter->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(286)
	::zpp_nape::dynamics::ZPP_IContact cin = this->zpp_inner->inner;		HX_STACK_VAR(cin,"cin");
	HX_STACK_LINE(287)
	Float jtAcc = cin->jtAcc;		HX_STACK_VAR(jtAcc,"jtAcc");
	HX_STACK_LINE(288)
	if (((body == null()))){
		HX_STACK_LINE(288)
		return ::nape::geom::Vec3_obj::get((-(colarb->ny) * jtAcc),(colarb->nx * jtAcc),null());
	}
	else{
		HX_STACK_LINE(291)
		if (((bool((body != colarb->b1->outer)) && bool((body != colarb->b2->outer))))){
			HX_STACK_LINE(291)
			hx::Throw (HX_CSTRING("Error: Contact does not relate to the given body"));
		}
		HX_STACK_LINE(293)
		if (((body == colarb->b1->outer))){
			HX_STACK_LINE(293)
			return ::nape::geom::Vec3_obj::get((colarb->ny * jtAcc),(-(colarb->nx) * jtAcc),(-((((cin->r1x * colarb->nx) + (cin->r1y * colarb->ny)))) * jtAcc));
		}
		else{
			HX_STACK_LINE(294)
			return ::nape::geom::Vec3_obj::get((-(colarb->ny) * jtAcc),(colarb->nx * jtAcc),((((cin->r2x * colarb->nx) + (cin->r2y * colarb->ny))) * jtAcc));
		}
	}
	HX_STACK_LINE(288)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Contact_obj,tangentImpulse,return )

::nape::geom::Vec3 Contact_obj::normalImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("Contact::normalImpulse","nape/dynamics/Contact.hx",248);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(250)
	if ((this->zpp_inner->inactiveme())){
		HX_STACK_LINE(250)
		hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
	}
	HX_STACK_LINE(252)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->arbiter->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(253)
	::zpp_nape::dynamics::ZPP_IContact cin = this->zpp_inner->inner;		HX_STACK_VAR(cin,"cin");
	HX_STACK_LINE(254)
	Float jnAcc = cin->jnAcc;		HX_STACK_VAR(jnAcc,"jnAcc");
	HX_STACK_LINE(255)
	if (((body == null()))){
		HX_STACK_LINE(255)
		return ::nape::geom::Vec3_obj::get((colarb->nx * jnAcc),(colarb->ny * jnAcc),null());
	}
	else{
		HX_STACK_LINE(258)
		if (((bool((body != colarb->b1->outer)) && bool((body != colarb->b2->outer))))){
			HX_STACK_LINE(258)
			hx::Throw (HX_CSTRING("Error: Contact does not relate to the given body"));
		}
		HX_STACK_LINE(260)
		if (((body == colarb->b1->outer))){
			HX_STACK_LINE(260)
			return ::nape::geom::Vec3_obj::get((colarb->nx * -(jnAcc)),(colarb->ny * -(jnAcc)),(-((((colarb->ny * cin->r1x) - (colarb->nx * cin->r1y)))) * jnAcc));
		}
		else{
			HX_STACK_LINE(261)
			return ::nape::geom::Vec3_obj::get((colarb->nx * jnAcc),(colarb->ny * jnAcc),((((colarb->ny * cin->r2x) - (colarb->nx * cin->r2y))) * jnAcc));
		}
	}
	HX_STACK_LINE(255)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Contact_obj,normalImpulse,return )

bool Contact_obj::get_fresh( ){
	HX_STACK_PUSH("Contact::get_fresh","nape/dynamics/Contact.hx",228);
	HX_STACK_THIS(this);
	HX_STACK_LINE(230)
	if ((this->zpp_inner->inactiveme())){
		HX_STACK_LINE(230)
		hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
	}
	HX_STACK_LINE(232)
	return this->zpp_inner->fresh;
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_fresh,return )

::nape::geom::Vec2 Contact_obj::get_position( ){
	HX_STACK_PUSH("Contact::get_position","nape/dynamics/Contact.hx",216);
	HX_STACK_THIS(this);
	HX_STACK_LINE(218)
	if ((this->zpp_inner->inactiveme())){
		HX_STACK_LINE(218)
		hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
	}
	HX_STACK_LINE(220)
	if (((this->zpp_inner->wrap_position == null()))){
		HX_STACK_LINE(220)
		this->zpp_inner->getposition();
	}
	HX_STACK_LINE(221)
	return this->zpp_inner->wrap_position;
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_position,return )

Float Contact_obj::get_penetration( ){
	HX_STACK_PUSH("Contact::get_penetration","nape/dynamics/Contact.hx",201);
	HX_STACK_THIS(this);
	HX_STACK_LINE(203)
	if ((this->zpp_inner->inactiveme())){
		HX_STACK_LINE(203)
		hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
	}
	HX_STACK_LINE(205)
	return -(this->zpp_inner->dist);
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_penetration,return )

::nape::dynamics::CollisionArbiter Contact_obj::get_arbiter( ){
	HX_STACK_PUSH("Contact::get_arbiter","nape/dynamics/Contact.hx",189);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::dynamics::CollisionArbiter Block( ::nape::dynamics::Contact_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/Contact.hx",190);
			{
				HX_STACK_LINE(190)
				::nape::dynamics::Arbiter _this = __this->zpp_inner->arbiter->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(190)
				return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(189)
	return (  (((this->zpp_inner->arbiter == null()))) ? ::nape::dynamics::CollisionArbiter(null()) : ::nape::dynamics::CollisionArbiter(_Function_1_1::Block(this)) );
}


HX_DEFINE_DYNAMIC_FUNC0(Contact_obj,get_arbiter,return )


Contact_obj::Contact_obj()
{
}

void Contact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Contact);
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(fresh,"fresh");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(penetration,"penetration");
	HX_MARK_MEMBER_NAME(arbiter,"arbiter");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Contact_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(fresh,"fresh");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(penetration,"penetration");
	HX_VISIT_MEMBER_NAME(arbiter,"arbiter");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Contact_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fresh") ) { return inCallProp ? get_fresh() : fresh; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arbiter") ) { return inCallProp ? get_arbiter() : arbiter; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"friction") ) { return inCallProp ? get_friction() : friction; }
		if (HX_FIELD_EQ(inName,"position") ) { return inCallProp ? get_position() : position; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_fresh") ) { return get_fresh_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"penetration") ) { return inCallProp ? get_penetration() : penetration; }
		if (HX_FIELD_EQ(inName,"get_arbiter") ) { return get_arbiter_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_friction") ) { return get_friction_dyn(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { return normalImpulse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rollingImpulse") ) { return rollingImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { return tangentImpulse_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_penetration") ) { return get_penetration_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Contact_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fresh") ) { fresh=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arbiter") ) { arbiter=inValue.Cast< ::nape::dynamics::CollisionArbiter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"penetration") ) { penetration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Contact_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("friction"));
	outFields->push(HX_CSTRING("fresh"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("penetration"));
	outFields->push(HX_CSTRING("arbiter"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("get_friction"),
	HX_CSTRING("friction"),
	HX_CSTRING("totalImpulse"),
	HX_CSTRING("rollingImpulse"),
	HX_CSTRING("tangentImpulse"),
	HX_CSTRING("normalImpulse"),
	HX_CSTRING("get_fresh"),
	HX_CSTRING("fresh"),
	HX_CSTRING("get_position"),
	HX_CSTRING("position"),
	HX_CSTRING("get_penetration"),
	HX_CSTRING("penetration"),
	HX_CSTRING("get_arbiter"),
	HX_CSTRING("arbiter"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Contact_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Contact_obj::__mClass,"__mClass");
};

Class Contact_obj::__mClass;

void Contact_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.Contact"), hx::TCanCast< Contact_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Contact_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
