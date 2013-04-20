#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_InteractionGroup
#include <nape/dynamics/InteractionGroup.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionGroupList
#include <nape/dynamics/InteractionGroupList.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorList
#include <nape/phys/InteractorList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPList_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_InteractionGroupList
#include <zpp_nape/util/ZPP_InteractionGroupList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_InteractorList
#include <zpp_nape/util/ZPP_InteractorList.h>
#endif
namespace nape{
namespace dynamics{

Void InteractionGroup_obj::__construct(hx::Null< bool >  __o_ignore)
{
HX_STACK_PUSH("InteractionGroup::new","nape/dynamics/InteractionGroup.hx",218);
bool ignore = __o_ignore.Default(false);
{
	HX_STACK_LINE(222)
	this->zpp_inner = null();
	HX_STACK_LINE(292)
	this->zpp_inner = ::zpp_nape::dynamics::ZPP_InteractionGroup_obj::__new();
	HX_STACK_LINE(293)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(294)
	{
		HX_STACK_LINE(294)
		if (((this->zpp_inner->ignore != ignore))){
			HX_STACK_LINE(294)
			this->zpp_inner->invalidate(true);
			HX_STACK_LINE(294)
			this->zpp_inner->ignore = ignore;
		}
		HX_STACK_LINE(294)
		this->zpp_inner->ignore;
	}
}
;
	return null();
}

InteractionGroup_obj::~InteractionGroup_obj() { }

Dynamic InteractionGroup_obj::__CreateEmpty() { return  new InteractionGroup_obj; }
hx::ObjectPtr< InteractionGroup_obj > InteractionGroup_obj::__new(hx::Null< bool >  __o_ignore)
{  hx::ObjectPtr< InteractionGroup_obj > result = new InteractionGroup_obj();
	result->__construct(__o_ignore);
	return result;}

Dynamic InteractionGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionGroup_obj > result = new InteractionGroup_obj();
	result->__construct(inArgs[0]);
	return result;}

::String InteractionGroup_obj::toString( ){
	HX_STACK_PUSH("InteractionGroup::toString","nape/dynamics/InteractionGroup.hx",299);
	HX_STACK_THIS(this);
	HX_STACK_LINE(300)
	::String ret = HX_CSTRING("InteractionGroup");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(301)
	if ((this->zpp_inner->ignore)){
		HX_STACK_LINE(301)
		hx::AddEq(ret,HX_CSTRING(":ignore"));
	}
	HX_STACK_LINE(302)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionGroup_obj,toString,return )

::nape::dynamics::InteractionGroupList InteractionGroup_obj::get_groups( ){
	HX_STACK_PUSH("InteractionGroup::get_groups","nape/dynamics/InteractionGroup.hx",282);
	HX_STACK_THIS(this);
	HX_STACK_LINE(283)
	if (((this->zpp_inner->wrap_groups == null()))){
		HX_STACK_LINE(283)
		this->zpp_inner->wrap_groups = ::zpp_nape::util::ZPP_InteractionGroupList_obj::get(this->zpp_inner->groups,true);
	}
	HX_STACK_LINE(284)
	return this->zpp_inner->wrap_groups;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionGroup_obj,get_groups,return )

::nape::phys::InteractorList InteractionGroup_obj::get_interactors( ){
	HX_STACK_PUSH("InteractionGroup::get_interactors","nape/dynamics/InteractionGroup.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_LINE(269)
	if (((this->zpp_inner->wrap_interactors == null()))){
		HX_STACK_LINE(269)
		this->zpp_inner->wrap_interactors = ::zpp_nape::util::ZPP_InteractorList_obj::get(this->zpp_inner->interactors,true);
	}
	HX_STACK_LINE(270)
	return this->zpp_inner->wrap_interactors;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionGroup_obj,get_interactors,return )

bool InteractionGroup_obj::set_ignore( bool ignore){
	HX_STACK_PUSH("InteractionGroup::set_ignore","nape/dynamics/InteractionGroup.hx",250);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ignore,"ignore");
	HX_STACK_LINE(251)
	if (((this->zpp_inner->ignore != ignore))){
		HX_STACK_LINE(253)
		this->zpp_inner->invalidate(true);
		HX_STACK_LINE(254)
		this->zpp_inner->ignore = ignore;
	}
	HX_STACK_LINE(257)
	return this->zpp_inner->ignore;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionGroup_obj,set_ignore,return )

bool InteractionGroup_obj::get_ignore( ){
	HX_STACK_PUSH("InteractionGroup::get_ignore","nape/dynamics/InteractionGroup.hx",247);
	HX_STACK_THIS(this);
	HX_STACK_LINE(247)
	return this->zpp_inner->ignore;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionGroup_obj,get_ignore,return )

::nape::dynamics::InteractionGroup InteractionGroup_obj::set_group( ::nape::dynamics::InteractionGroup group){
	HX_STACK_PUSH("InteractionGroup::set_group","nape/dynamics/InteractionGroup.hx",232);
	HX_STACK_THIS(this);
	HX_STACK_ARG(group,"group");
	HX_STACK_LINE(233)
	{
		HX_STACK_LINE(235)
		if (((group == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(235)
			hx::Throw (HX_CSTRING("Error: Cannot assign InteractionGroup to itself"));
		}
		HX_STACK_LINE(237)
		this->zpp_inner->setGroup((  (((group == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionGroup(null()) : ::zpp_nape::dynamics::ZPP_InteractionGroup(group->zpp_inner) ));
	}
	HX_STACK_LINE(239)
	return (  (((this->zpp_inner->group == null()))) ? ::nape::dynamics::InteractionGroup(null()) : ::nape::dynamics::InteractionGroup(this->zpp_inner->group->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionGroup_obj,set_group,return )

::nape::dynamics::InteractionGroup InteractionGroup_obj::get_group( ){
	HX_STACK_PUSH("InteractionGroup::get_group","nape/dynamics/InteractionGroup.hx",229);
	HX_STACK_THIS(this);
	HX_STACK_LINE(229)
	return (  (((this->zpp_inner->group == null()))) ? ::nape::dynamics::InteractionGroup(null()) : ::nape::dynamics::InteractionGroup(this->zpp_inner->group->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionGroup_obj,get_group,return )


InteractionGroup_obj::InteractionGroup_obj()
{
}

void InteractionGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractionGroup);
	HX_MARK_MEMBER_NAME(groups,"groups");
	HX_MARK_MEMBER_NAME(interactors,"interactors");
	HX_MARK_MEMBER_NAME(ignore,"ignore");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void InteractionGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(groups,"groups");
	HX_VISIT_MEMBER_NAME(interactors,"interactors");
	HX_VISIT_MEMBER_NAME(ignore,"ignore");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic InteractionGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return inCallProp ? get_group() : group; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"groups") ) { return inCallProp ? get_groups() : groups; }
		if (HX_FIELD_EQ(inName,"ignore") ) { return inCallProp ? get_ignore() : ignore; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		if (HX_FIELD_EQ(inName,"get_group") ) { return get_group_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_groups") ) { return get_groups_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ignore") ) { return set_ignore_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ignore") ) { return get_ignore_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { return inCallProp ? get_interactors() : interactors; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_interactors") ) { return get_interactors_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractionGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp) return set_group(inValue);group=inValue.Cast< ::nape::dynamics::InteractionGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"groups") ) { groups=inValue.Cast< ::nape::dynamics::InteractionGroupList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignore") ) { if (inCallProp) return set_ignore(inValue);ignore=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { interactors=inValue.Cast< ::nape::phys::InteractorList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractionGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("groups"));
	outFields->push(HX_CSTRING("interactors"));
	outFields->push(HX_CSTRING("ignore"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("get_groups"),
	HX_CSTRING("groups"),
	HX_CSTRING("get_interactors"),
	HX_CSTRING("interactors"),
	HX_CSTRING("set_ignore"),
	HX_CSTRING("get_ignore"),
	HX_CSTRING("ignore"),
	HX_CSTRING("set_group"),
	HX_CSTRING("get_group"),
	HX_CSTRING("group"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionGroup_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionGroup_obj::__mClass,"__mClass");
};

Class InteractionGroup_obj::__mClass;

void InteractionGroup_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.InteractionGroup"), hx::TCanCast< InteractionGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void InteractionGroup_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
