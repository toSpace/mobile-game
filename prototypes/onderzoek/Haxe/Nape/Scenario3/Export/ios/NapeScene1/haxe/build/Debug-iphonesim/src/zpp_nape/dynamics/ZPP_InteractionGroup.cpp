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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPList_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPNode_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Interactor
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_InteractionGroup_obj::__construct()
{
HX_STACK_PUSH("ZPP_InteractionGroup::new","zpp_nape/dynamics/InteractionGroup.hx",174);
{
	HX_STACK_LINE(196)
	this->depth = (int)0;
	HX_STACK_LINE(195)
	this->wrap_interactors = null();
	HX_STACK_LINE(194)
	this->interactors = null();
	HX_STACK_LINE(193)
	this->wrap_groups = null();
	HX_STACK_LINE(192)
	this->groups = null();
	HX_STACK_LINE(177)
	this->group = null();
	HX_STACK_LINE(176)
	this->ignore = false;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(223)
	this->depth = (int)0;
	HX_STACK_LINE(224)
	this->groups = ::zpp_nape::util::ZNPList_ZPP_InteractionGroup_obj::__new();
	HX_STACK_LINE(225)
	this->interactors = ::zpp_nape::util::ZNPList_ZPP_Interactor_obj::__new();
}
;
	return null();
}

ZPP_InteractionGroup_obj::~ZPP_InteractionGroup_obj() { }

Dynamic ZPP_InteractionGroup_obj::__CreateEmpty() { return  new ZPP_InteractionGroup_obj; }
hx::ObjectPtr< ZPP_InteractionGroup_obj > ZPP_InteractionGroup_obj::__new()
{  hx::ObjectPtr< ZPP_InteractionGroup_obj > result = new ZPP_InteractionGroup_obj();
	result->__construct();
	return result;}

Dynamic ZPP_InteractionGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_InteractionGroup_obj > result = new ZPP_InteractionGroup_obj();
	result->__construct();
	return result;}

Void ZPP_InteractionGroup_obj::remInteractor( ::zpp_nape::phys::ZPP_Interactor intx,hx::Null< int >  __o_flag){
int flag = __o_flag.Default(-1);
	HX_STACK_PUSH("ZPP_InteractionGroup::remInteractor","zpp_nape/dynamics/InteractionGroup.hx",246);
	HX_STACK_THIS(this);
	HX_STACK_ARG(intx,"intx");
	HX_STACK_ARG(flag,"flag");
{
		HX_STACK_LINE(246)
		this->interactors->remove(intx);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_InteractionGroup_obj,remInteractor,(void))

Void ZPP_InteractionGroup_obj::addInteractor( ::zpp_nape::phys::ZPP_Interactor intx){
{
		HX_STACK_PUSH("ZPP_InteractionGroup::addInteractor","zpp_nape/dynamics/InteractionGroup.hx",241);
		HX_STACK_THIS(this);
		HX_STACK_ARG(intx,"intx");
		HX_STACK_LINE(241)
		this->interactors->add(intx);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionGroup_obj,addInteractor,(void))

Void ZPP_InteractionGroup_obj::remGroup( ::zpp_nape::dynamics::ZPP_InteractionGroup group){
{
		HX_STACK_PUSH("ZPP_InteractionGroup::remGroup","zpp_nape/dynamics/InteractionGroup.hx",235);
		HX_STACK_THIS(this);
		HX_STACK_ARG(group,"group");
		HX_STACK_LINE(236)
		this->groups->remove(group);
		HX_STACK_LINE(237)
		group->depth = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionGroup_obj,remGroup,(void))

Void ZPP_InteractionGroup_obj::addGroup( ::zpp_nape::dynamics::ZPP_InteractionGroup group){
{
		HX_STACK_PUSH("ZPP_InteractionGroup::addGroup","zpp_nape/dynamics/InteractionGroup.hx",229);
		HX_STACK_THIS(this);
		HX_STACK_ARG(group,"group");
		HX_STACK_LINE(230)
		this->groups->add(group);
		HX_STACK_LINE(231)
		group->depth = (this->depth + (int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionGroup_obj,addGroup,(void))

Void ZPP_InteractionGroup_obj::invalidate( hx::Null< bool >  __o_force){
bool force = __o_force.Default(false);
	HX_STACK_PUSH("ZPP_InteractionGroup::invalidate","zpp_nape/dynamics/InteractionGroup.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_ARG(force,"force");
{
		HX_STACK_LINE(198)
		if ((!(((bool(force) || bool(this->ignore)))))){
			HX_STACK_LINE(198)
			return null();
		}
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(200)
			::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = this->interactors->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(201)
			while(((cx_ite != null()))){
				HX_STACK_LINE(202)
				::zpp_nape::phys::ZPP_Interactor b = cx_ite->elt;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(203)
				if (((b->ibody != null()))){
					HX_STACK_LINE(204)
					b->ibody->wake();
				}
				else{
					HX_STACK_LINE(205)
					if (((b->ishape != null()))){
						HX_STACK_LINE(205)
						b->ishape->body->wake();
					}
					else{
						HX_STACK_LINE(206)
						b->icompound->wake();
					}
				}
				HX_STACK_LINE(208)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(212)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cx_ite = this->groups->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(213)
			while(((cx_ite != null()))){
				HX_STACK_LINE(214)
				::zpp_nape::dynamics::ZPP_InteractionGroup g = cx_ite->elt;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(215)
				g->invalidate(force);
				HX_STACK_LINE(216)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionGroup_obj,invalidate,(void))

Void ZPP_InteractionGroup_obj::setGroup( ::zpp_nape::dynamics::ZPP_InteractionGroup group){
{
		HX_STACK_PUSH("ZPP_InteractionGroup::setGroup","zpp_nape/dynamics/InteractionGroup.hx",178);
		HX_STACK_THIS(this);
		HX_STACK_ARG(group,"group");
		HX_STACK_LINE(178)
		if (((this->group != group))){
			HX_STACK_LINE(180)
			if (((this->group != null()))){
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					this->group->groups->remove(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(181)
					this->depth = (int)0;
				}
				HX_STACK_LINE(182)
				this->group->invalidate(true);
			}
			HX_STACK_LINE(184)
			this->group = group;
			HX_STACK_LINE(185)
			if (((group != null()))){
				HX_STACK_LINE(186)
				{
					HX_STACK_LINE(186)
					group->groups->add(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(186)
					this->depth = (group->depth + (int)1);
				}
				HX_STACK_LINE(187)
				group->invalidate(true);
			}
			else{
				HX_STACK_LINE(189)
				this->invalidate(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionGroup_obj,setGroup,(void))

int ZPP_InteractionGroup_obj::SHAPE;

int ZPP_InteractionGroup_obj::BODY;


ZPP_InteractionGroup_obj::ZPP_InteractionGroup_obj()
{
}

void ZPP_InteractionGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_InteractionGroup);
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(wrap_interactors,"wrap_interactors");
	HX_MARK_MEMBER_NAME(interactors,"interactors");
	HX_MARK_MEMBER_NAME(wrap_groups,"wrap_groups");
	HX_MARK_MEMBER_NAME(groups,"groups");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(ignore,"ignore");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_END_CLASS();
}

void ZPP_InteractionGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(wrap_interactors,"wrap_interactors");
	HX_VISIT_MEMBER_NAME(interactors,"interactors");
	HX_VISIT_MEMBER_NAME(wrap_groups,"wrap_groups");
	HX_VISIT_MEMBER_NAME(groups,"groups");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(ignore,"ignore");
	HX_VISIT_MEMBER_NAME(outer,"outer");
}

Dynamic ZPP_InteractionGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BODY") ) { return BODY; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SHAPE") ) { return SHAPE; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"groups") ) { return groups; }
		if (HX_FIELD_EQ(inName,"ignore") ) { return ignore; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"remGroup") ) { return remGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"addGroup") ) { return addGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"setGroup") ) { return setGroup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { return interactors; }
		if (HX_FIELD_EQ(inName,"wrap_groups") ) { return wrap_groups; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"remInteractor") ) { return remInteractor_dyn(); }
		if (HX_FIELD_EQ(inName,"addInteractor") ) { return addInteractor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_interactors") ) { return wrap_interactors; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_InteractionGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BODY") ) { BODY=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SHAPE") ) { SHAPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::dynamics::InteractionGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"groups") ) { groups=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_InteractionGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignore") ) { ignore=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { interactors=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_groups") ) { wrap_groups=inValue.Cast< ::nape::dynamics::InteractionGroupList >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_interactors") ) { wrap_interactors=inValue.Cast< ::nape::phys::InteractorList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_InteractionGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("wrap_interactors"));
	outFields->push(HX_CSTRING("interactors"));
	outFields->push(HX_CSTRING("wrap_groups"));
	outFields->push(HX_CSTRING("groups"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("ignore"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SHAPE"),
	HX_CSTRING("BODY"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("remInteractor"),
	HX_CSTRING("addInteractor"),
	HX_CSTRING("remGroup"),
	HX_CSTRING("addGroup"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("depth"),
	HX_CSTRING("wrap_interactors"),
	HX_CSTRING("interactors"),
	HX_CSTRING("wrap_groups"),
	HX_CSTRING("groups"),
	HX_CSTRING("setGroup"),
	HX_CSTRING("group"),
	HX_CSTRING("ignore"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_InteractionGroup_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_InteractionGroup_obj::SHAPE,"SHAPE");
	HX_MARK_MEMBER_NAME(ZPP_InteractionGroup_obj::BODY,"BODY");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_InteractionGroup_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionGroup_obj::SHAPE,"SHAPE");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionGroup_obj::BODY,"BODY");
};

Class ZPP_InteractionGroup_obj::__mClass;

void ZPP_InteractionGroup_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_InteractionGroup"), hx::TCanCast< ZPP_InteractionGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_InteractionGroup_obj::__boot()
{
	SHAPE= (int)1;
	BODY= (int)2;
}

} // end namespace zpp_nape
} // end namespace dynamics
