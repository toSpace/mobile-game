#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_UserConstraint
#include <nape/constraint/UserConstraint.h>
#endif
#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
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
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserBody
#include <zpp_nape/constraint/ZPP_UserBody.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserConstraint
#include <zpp_nape/constraint/ZPP_UserConstraint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
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
namespace nape{
namespace constraint{

Void UserConstraint_obj::__construct(int dimensions,hx::Null< bool >  __o_velocityOnly)
{
HX_STACK_PUSH("UserConstraint::new","nape/constraint/UserConstraint.hx",192);
bool velocityOnly = __o_velocityOnly.Default(false);
{
	HX_STACK_LINE(196)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(378)
	if (((dimensions < (int)1))){
		HX_STACK_LINE(378)
		hx::Throw (HX_CSTRING("Error: Constraint dimension must be at least 1"));
	}
	HX_STACK_LINE(382)
	this->zpp_inner_zn = ::zpp_nape::constraint::ZPP_UserConstraint_obj::__new(dimensions,velocityOnly);
	HX_STACK_LINE(383)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(384)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(385)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(387)
	try{
		HX_STACK_LINE(387)
		super::__construct();
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
}
;
	return null();
}

UserConstraint_obj::~UserConstraint_obj() { }

Dynamic UserConstraint_obj::__CreateEmpty() { return  new UserConstraint_obj; }
hx::ObjectPtr< UserConstraint_obj > UserConstraint_obj::__new(int dimensions,hx::Null< bool >  __o_velocityOnly)
{  hx::ObjectPtr< UserConstraint_obj > result = new UserConstraint_obj();
	result->__construct(dimensions,__o_velocityOnly);
	return result;}

Dynamic UserConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UserConstraint_obj > result = new UserConstraint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::nape::phys::Body UserConstraint_obj::__registerBody( ::nape::phys::Body oldBody,::nape::phys::Body newBody){
	HX_STACK_PUSH("UserConstraint::__registerBody","nape/constraint/UserConstraint.hx",504);
	HX_STACK_THIS(this);
	HX_STACK_ARG(oldBody,"oldBody");
	HX_STACK_ARG(newBody,"newBody");
	HX_STACK_LINE(505)
	this->zpp_inner->immutable_midstep(HX_CSTRING("UserConstraint::registerBody(..)"));
	HX_STACK_LINE(506)
	if (((oldBody != newBody))){
		HX_STACK_LINE(507)
		if (((oldBody != null()))){
			HX_STACK_LINE(508)
			if ((!(this->zpp_inner_zn->remBody(oldBody->zpp_inner)))){
				HX_STACK_LINE(508)
				hx::Throw (HX_CSTRING("Error: oldBody is not registered to the cosntraint"));
			}
			HX_STACK_LINE(513)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(513)
				oldBody->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(517)
		if (((newBody != null()))){
			HX_STACK_LINE(517)
			this->zpp_inner_zn->addBody(newBody->zpp_inner);
		}
		HX_STACK_LINE(520)
		this->zpp_inner->wake();
		HX_STACK_LINE(521)
		if (((newBody != null()))){
			HX_STACK_LINE(521)
			newBody->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(525)
	return newBody;
}


HX_DEFINE_DYNAMIC_FUNC2(UserConstraint_obj,__registerBody,return )

Void UserConstraint_obj::__invalidate( ){
{
		HX_STACK_PUSH("UserConstraint::__invalidate","nape/constraint/UserConstraint.hx",469);
		HX_STACK_THIS(this);
		HX_STACK_LINE(470)
		this->zpp_inner->immutable_midstep(HX_CSTRING("UserConstraint::invalidate()"));
		HX_STACK_LINE(471)
		if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
			HX_STACK_LINE(471)
			this->zpp_inner->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__invalidate,(void))

Void UserConstraint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_PUSH("UserConstraint::visitBodies","nape/constraint/UserConstraint.hx",437);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(438)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(439)
		int nbodies = this->zpp_inner_zn->bodies->length;		HX_STACK_VAR(nbodies,"nbodies");
		HX_STACK_LINE(440)
		while(((i < nbodies))){
			HX_STACK_LINE(441)
			::zpp_nape::constraint::ZPP_UserBody b = this->zpp_inner_zn->bodies->__get(i).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(442)
			if (((b->body != null()))){
				HX_STACK_LINE(443)
				bool found = false;		HX_STACK_VAR(found,"found");
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					int _g = (i + (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(444)
					while(((_g < nbodies))){
						HX_STACK_LINE(444)
						int j = (_g)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(445)
						::zpp_nape::constraint::ZPP_UserBody c = this->zpp_inner_zn->bodies->__get(j).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(446)
						if (((c->body == b->body))){
							HX_STACK_LINE(447)
							found = true;
							HX_STACK_LINE(448)
							break;
						}
					}
				}
				HX_STACK_LINE(451)
				if ((!(found))){
					HX_STACK_LINE(451)
					lambda(b->body->outer).Cast< Void >();
				}
			}
			HX_STACK_LINE(455)
			(i)++;
		}
	}
return null();
}


::nape::geom::Vec3 UserConstraint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("UserConstraint::bodyImpulse","nape/constraint/UserConstraint.hx",411);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(413)
	if (((body == null()))){
		HX_STACK_LINE(413)
		hx::Throw (HX_CSTRING("Error: Cannot evaluate impulse on null body"));
	}
	HX_STACK_LINE(416)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(417)
	{
		HX_STACK_LINE(417)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->zpp_inner_zn->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(417)
		while(((_g < _g1->length))){
			HX_STACK_LINE(417)
			::zpp_nape::constraint::ZPP_UserBody b = _g1->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_UserBody >();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(417)
			++(_g);
			HX_STACK_LINE(418)
			if (((b->body == body->zpp_inner))){
				HX_STACK_LINE(419)
				found = true;
				HX_STACK_LINE(420)
				break;
			}
		}
	}
	HX_STACK_LINE(423)
	if ((!(found))){
		HX_STACK_LINE(423)
		hx::Throw (HX_CSTRING("Error: Body is not linked to this constraint"));
	}
	HX_STACK_LINE(427)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(427)
		return ::nape::geom::Vec3_obj::get(null(),null(),null());
	}
	else{
		HX_STACK_LINE(430)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(427)
	return null();
}


::nape::geom::MatMN UserConstraint_obj::impulse( ){
	HX_STACK_PUSH("UserConstraint::impulse","nape/constraint/UserConstraint.hx",401);
	HX_STACK_THIS(this);
	HX_STACK_LINE(402)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new(this->zpp_inner_zn->dim,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(403)
	{
		HX_STACK_LINE(403)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->zpp_inner_zn->dim;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(403)
		while(((_g1 < _g))){
			HX_STACK_LINE(403)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(404)
			{
				HX_STACK_LINE(404)
				if (((bool((bool((i < (int)0)) || bool((i >= ret->zpp_inner->m)))) || bool(((int)0 >= ret->zpp_inner->n))))){
					HX_STACK_LINE(404)
					hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
				}
				HX_STACK_LINE(404)
				ret->zpp_inner->x[(i * ret->zpp_inner->n)] = this->zpp_inner_zn->jAcc->__get(i);
			}
		}
	}
	HX_STACK_LINE(406)
	return ret;
}


Void UserConstraint_obj::__impulse( Array< Float > imp,::nape::phys::Body body,::nape::geom::Vec3 out){
{
		HX_STACK_PUSH("UserConstraint::__impulse","nape/constraint/UserConstraint.hx",358);
		HX_STACK_THIS(this);
		HX_STACK_ARG(imp,"imp");
		HX_STACK_ARG(body,"body");
		HX_STACK_ARG(out,"out");
		HX_STACK_LINE(358)
		hx::Throw (HX_CSTRING("Error: UserConstraint::__impulse must be overriden"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(UserConstraint_obj,__impulse,(void))

Void UserConstraint_obj::__clamp( Array< Float > jAcc){
{
		HX_STACK_PUSH("UserConstraint::__clamp","nape/constraint/UserConstraint.hx",347);
		HX_STACK_THIS(this);
		HX_STACK_ARG(jAcc,"jAcc");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__clamp,(void))

Void UserConstraint_obj::__eff_mass( Array< Float > eff){
{
		HX_STACK_PUSH("UserConstraint::__eff_mass","nape/constraint/UserConstraint.hx",335);
		HX_STACK_THIS(this);
		HX_STACK_ARG(eff,"eff");
		HX_STACK_LINE(335)
		hx::Throw (HX_CSTRING("Error: UserConstraint::__eff_mass must be overriden"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__eff_mass,(void))

Void UserConstraint_obj::__velocity( Array< Float > err){
{
		HX_STACK_PUSH("UserConstraint::__velocity","nape/constraint/UserConstraint.hx",313);
		HX_STACK_THIS(this);
		HX_STACK_ARG(err,"err");
		HX_STACK_LINE(313)
		hx::Throw (HX_CSTRING("Error: Userconstraint::__velocity must be overriden"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__velocity,(void))

Void UserConstraint_obj::__position( Array< Float > err){
{
		HX_STACK_PUSH("UserConstraint::__position","nape/constraint/UserConstraint.hx",300);
		HX_STACK_THIS(this);
		HX_STACK_ARG(err,"err");
		HX_STACK_LINE(300)
		hx::Throw (HX_CSTRING("Error: UserConstraint::__position must be overriden"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__position,(void))

Void UserConstraint_obj::__prepare( ){
{
		HX_STACK_PUSH("UserConstraint::__prepare","nape/constraint/UserConstraint.hx",291);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__prepare,(void))

Void UserConstraint_obj::__draw( ::nape::util::Debug debug){
{
		HX_STACK_PUSH("UserConstraint::__draw","nape/constraint/UserConstraint.hx",282);
		HX_STACK_THIS(this);
		HX_STACK_ARG(debug,"debug");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UserConstraint_obj,__draw,(void))

Void UserConstraint_obj::__validate( ){
{
		HX_STACK_PUSH("UserConstraint::__validate","nape/constraint/UserConstraint.hx",271);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__validate,(void))

Void UserConstraint_obj::__broken( ){
{
		HX_STACK_PUSH("UserConstraint::__broken","nape/constraint/UserConstraint.hx",256);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__broken,(void))

::nape::constraint::UserConstraint UserConstraint_obj::__copy( ){
	HX_STACK_PUSH("UserConstraint::__copy","nape/constraint/UserConstraint.hx",241);
	HX_STACK_THIS(this);
	HX_STACK_LINE(243)
	hx::Throw (HX_CSTRING("Error: UserConstraint::__copy must be overriden"));
	HX_STACK_LINE(245)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__copy,return )

::nape::geom::Vec2 UserConstraint_obj::__bindVec2( ){
	HX_STACK_PUSH("UserConstraint::__bindVec2","nape/constraint/UserConstraint.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_LINE(224)
	::nape::geom::Vec2 ret = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(225)
	ret->zpp_inner->_inuse = true;
	HX_STACK_LINE(226)
	ret->zpp_inner->_invalidate = this->zpp_inner_zn->bindVec2_invalidate_dyn();
	HX_STACK_LINE(227)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(UserConstraint_obj,__bindVec2,return )


UserConstraint_obj::UserConstraint_obj()
{
}

void UserConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UserConstraint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UserConstraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic UserConstraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__draw") ) { return __draw_dyn(); }
		if (HX_FIELD_EQ(inName,"__copy") ) { return __copy_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		if (HX_FIELD_EQ(inName,"__clamp") ) { return __clamp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__broken") ) { return __broken_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__impulse") ) { return __impulse_dyn(); }
		if (HX_FIELD_EQ(inName,"__prepare") ) { return __prepare_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eff_mass") ) { return __eff_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"__velocity") ) { return __velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"__position") ) { return __position_dyn(); }
		if (HX_FIELD_EQ(inName,"__validate") ) { return __validate_dyn(); }
		if (HX_FIELD_EQ(inName,"__bindVec2") ) { return __bindVec2_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__invalidate") ) { return __invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__registerBody") ) { return __registerBody_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UserConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_UserConstraint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UserConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__registerBody"),
	HX_CSTRING("__invalidate"),
	HX_CSTRING("visitBodies"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("impulse"),
	HX_CSTRING("__impulse"),
	HX_CSTRING("__clamp"),
	HX_CSTRING("__eff_mass"),
	HX_CSTRING("__velocity"),
	HX_CSTRING("__position"),
	HX_CSTRING("__prepare"),
	HX_CSTRING("__draw"),
	HX_CSTRING("__validate"),
	HX_CSTRING("__broken"),
	HX_CSTRING("__copy"),
	HX_CSTRING("__bindVec2"),
	HX_CSTRING("zpp_inner_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UserConstraint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UserConstraint_obj::__mClass,"__mClass");
};

Class UserConstraint_obj::__mClass;

void UserConstraint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.UserConstraint"), hx::TCanCast< UserConstraint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void UserConstraint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
