#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorList
#include <nape/phys/InteractorList.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_InteractorList
#include <zpp_nape/util/ZPP_InteractorList.h>
#endif
namespace nape{
namespace callbacks{

Void CbType_obj::__construct()
{
HX_STACK_PUSH("CbType::new","nape/callbacks/CbType.hx",179);
{
	HX_STACK_LINE(183)
	this->zpp_inner = null();
	HX_STACK_LINE(198)
	this->zpp_inner = ::zpp_nape::callbacks::ZPP_CbType_obj::__new();
	HX_STACK_LINE(199)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

CbType_obj::~CbType_obj() { }

Dynamic CbType_obj::__CreateEmpty() { return  new CbType_obj; }
hx::ObjectPtr< CbType_obj > CbType_obj::__new()
{  hx::ObjectPtr< CbType_obj > result = new CbType_obj();
	result->__construct();
	return result;}

Dynamic CbType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CbType_obj > result = new CbType_obj();
	result->__construct();
	return result;}

::String CbType_obj::toString( ){
	HX_STACK_PUSH("CbType::toString","nape/callbacks/CbType.hx",338);
	HX_STACK_THIS(this);
	HX_STACK_LINE(338)
	return (  (((hx::ObjectPtr<OBJ_>(this) == ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_BODY))) ? ::String(HX_CSTRING("ANY_BODY")) : ::String((  (((hx::ObjectPtr<OBJ_>(this) == ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE))) ? ::String(HX_CSTRING("ANY_SHAPE")) : ::String((  (((hx::ObjectPtr<OBJ_>(this) == ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_COMPOUND))) ? ::String(HX_CSTRING("ANY_COMPOUND")) : ::String((  (((hx::ObjectPtr<OBJ_>(this) == ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_CONSTRAINT))) ? ::String(HX_CSTRING("ANY_CONSTRAINT")) : ::String((HX_CSTRING("CbType#") + this->zpp_inner->id)) )) )) )) );
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,toString,return )

::nape::constraint::ConstraintList CbType_obj::get_constraints( ){
	HX_STACK_PUSH("CbType::get_constraints","nape/callbacks/CbType.hx",329);
	HX_STACK_THIS(this);
	HX_STACK_LINE(330)
	if (((this->zpp_inner->wrap_constraints == null()))){
		HX_STACK_LINE(330)
		this->zpp_inner->wrap_constraints = ::zpp_nape::util::ZPP_ConstraintList_obj::get(this->zpp_inner->constraints,true);
	}
	HX_STACK_LINE(333)
	return this->zpp_inner->wrap_constraints;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_constraints,return )

::nape::phys::InteractorList CbType_obj::get_interactors( ){
	HX_STACK_PUSH("CbType::get_interactors","nape/callbacks/CbType.hx",314);
	HX_STACK_THIS(this);
	HX_STACK_LINE(315)
	if (((this->zpp_inner->wrap_interactors == null()))){
		HX_STACK_LINE(315)
		this->zpp_inner->wrap_interactors = ::zpp_nape::util::ZPP_InteractorList_obj::get(this->zpp_inner->interactors,true);
	}
	HX_STACK_LINE(318)
	return this->zpp_inner->wrap_interactors;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_interactors,return )

Dynamic CbType_obj::get_userData( ){
	HX_STACK_PUSH("CbType::get_userData","nape/callbacks/CbType.hx",299);
	HX_STACK_THIS(this);
	HX_STACK_LINE(300)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/CbType.hx",301);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(300)
		this->zpp_inner->userData = _Function_2_1::Block();
	}
	HX_STACK_LINE(303)
	return this->zpp_inner->userData;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_userData,return )

::nape::callbacks::OptionType CbType_obj::excluding( Dynamic excludes){
	HX_STACK_PUSH("CbType::excluding","nape/callbacks/CbType.hx",283);
	HX_STACK_THIS(this);
	HX_STACK_ARG(excludes,"excludes");
	HX_STACK_LINE(283)
	return ::nape::callbacks::OptionType_obj::__new(hx::ObjectPtr<OBJ_>(this),null())->excluding(excludes);
}


HX_DEFINE_DYNAMIC_FUNC1(CbType_obj,excluding,return )

::nape::callbacks::OptionType CbType_obj::including( Dynamic includes){
	HX_STACK_PUSH("CbType::including","nape/callbacks/CbType.hx",267);
	HX_STACK_THIS(this);
	HX_STACK_ARG(includes,"includes");
	HX_STACK_LINE(267)
	return ::nape::callbacks::OptionType_obj::__new(hx::ObjectPtr<OBJ_>(this),null())->including(includes);
}


HX_DEFINE_DYNAMIC_FUNC1(CbType_obj,including,return )

int CbType_obj::get_id( ){
	HX_STACK_PUSH("CbType::get_id","nape/callbacks/CbType.hx",189);
	HX_STACK_THIS(this);
	HX_STACK_LINE(189)
	return this->zpp_inner->id;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_id,return )

::nape::callbacks::CbType CbType_obj::ANY_BODY;

::nape::callbacks::CbType CbType_obj::get_ANY_BODY( ){
	HX_STACK_PUSH("CbType::get_ANY_BODY","nape/callbacks/CbType.hx",212);
	HX_STACK_LINE(212)
	return ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_BODY;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_BODY,return )

::nape::callbacks::CbType CbType_obj::ANY_CONSTRAINT;

::nape::callbacks::CbType CbType_obj::get_ANY_CONSTRAINT( ){
	HX_STACK_PUSH("CbType::get_ANY_CONSTRAINT","nape/callbacks/CbType.hx",225);
	HX_STACK_LINE(225)
	return ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_CONSTRAINT;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_CONSTRAINT,return )

::nape::callbacks::CbType CbType_obj::ANY_SHAPE;

::nape::callbacks::CbType CbType_obj::get_ANY_SHAPE( ){
	HX_STACK_PUSH("CbType::get_ANY_SHAPE","nape/callbacks/CbType.hx",238);
	HX_STACK_LINE(238)
	return ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_SHAPE,return )

::nape::callbacks::CbType CbType_obj::ANY_COMPOUND;

::nape::callbacks::CbType CbType_obj::get_ANY_COMPOUND( ){
	HX_STACK_PUSH("CbType::get_ANY_COMPOUND","nape/callbacks/CbType.hx",251);
	HX_STACK_LINE(251)
	return ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_COMPOUND;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_COMPOUND,return )


CbType_obj::CbType_obj()
{
}

void CbType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CbType);
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(interactors,"interactors");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void CbType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(interactors,"interactors");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic CbType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return inCallProp ? get_id() : id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ANY_BODY") ) { return inCallProp ? get_ANY_BODY() : ANY_BODY; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return inCallProp ? get_userData() : userData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ANY_SHAPE") ) { return inCallProp ? get_ANY_SHAPE() : ANY_SHAPE; }
		if (HX_FIELD_EQ(inName,"excluding") ) { return excluding_dyn(); }
		if (HX_FIELD_EQ(inName,"including") ) { return including_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"constraints") ) { return inCallProp ? get_constraints() : constraints; }
		if (HX_FIELD_EQ(inName,"interactors") ) { return inCallProp ? get_interactors() : interactors; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_ANY_BODY") ) { return get_ANY_BODY_dyn(); }
		if (HX_FIELD_EQ(inName,"ANY_COMPOUND") ) { return inCallProp ? get_ANY_COMPOUND() : ANY_COMPOUND; }
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_ANY_SHAPE") ) { return get_ANY_SHAPE_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ANY_CONSTRAINT") ) { return inCallProp ? get_ANY_CONSTRAINT() : ANY_CONSTRAINT; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return get_constraints_dyn(); }
		if (HX_FIELD_EQ(inName,"get_interactors") ) { return get_interactors_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_ANY_COMPOUND") ) { return get_ANY_COMPOUND_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_ANY_CONSTRAINT") ) { return get_ANY_CONSTRAINT_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CbType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ANY_BODY") ) { ANY_BODY=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ANY_SHAPE") ) { ANY_SHAPE=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbType >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"interactors") ) { interactors=inValue.Cast< ::nape::phys::InteractorList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ANY_COMPOUND") ) { ANY_COMPOUND=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ANY_CONSTRAINT") ) { ANY_CONSTRAINT=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CbType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("interactors"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ANY_BODY"),
	HX_CSTRING("get_ANY_BODY"),
	HX_CSTRING("ANY_CONSTRAINT"),
	HX_CSTRING("get_ANY_CONSTRAINT"),
	HX_CSTRING("ANY_SHAPE"),
	HX_CSTRING("get_ANY_SHAPE"),
	HX_CSTRING("ANY_COMPOUND"),
	HX_CSTRING("get_ANY_COMPOUND"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("get_constraints"),
	HX_CSTRING("constraints"),
	HX_CSTRING("get_interactors"),
	HX_CSTRING("interactors"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("userData"),
	HX_CSTRING("excluding"),
	HX_CSTRING("including"),
	HX_CSTRING("get_id"),
	HX_CSTRING("id"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CbType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CbType_obj::ANY_BODY,"ANY_BODY");
	HX_MARK_MEMBER_NAME(CbType_obj::ANY_CONSTRAINT,"ANY_CONSTRAINT");
	HX_MARK_MEMBER_NAME(CbType_obj::ANY_SHAPE,"ANY_SHAPE");
	HX_MARK_MEMBER_NAME(CbType_obj::ANY_COMPOUND,"ANY_COMPOUND");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CbType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CbType_obj::ANY_BODY,"ANY_BODY");
	HX_VISIT_MEMBER_NAME(CbType_obj::ANY_CONSTRAINT,"ANY_CONSTRAINT");
	HX_VISIT_MEMBER_NAME(CbType_obj::ANY_SHAPE,"ANY_SHAPE");
	HX_VISIT_MEMBER_NAME(CbType_obj::ANY_COMPOUND,"ANY_COMPOUND");
};

Class CbType_obj::__mClass;

void CbType_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.CbType"), hx::TCanCast< CbType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CbType_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
