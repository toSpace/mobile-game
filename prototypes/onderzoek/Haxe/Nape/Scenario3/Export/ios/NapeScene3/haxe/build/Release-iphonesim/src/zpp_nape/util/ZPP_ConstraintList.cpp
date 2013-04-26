#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_ConstraintList_obj::__construct()
{
HX_STACK_PUSH("ZPP_ConstraintList::new","zpp_nape/util/Lists.hx",16495);
{
	HX_STACK_LINE(16550)
	this->user_length = (int)0;
	HX_STACK_LINE(16549)
	this->zip_length = false;
	HX_STACK_LINE(16548)
	this->push_ite = null();
	HX_STACK_LINE(16547)
	this->at_ite = null();
	HX_STACK_LINE(16546)
	this->at_index = (int)0;
	HX_STACK_LINE(16508)
	this->reverse_flag = false;
	HX_STACK_LINE(16507)
	this->dontremove = false;
	HX_STACK_LINE(16506)
	this->subber = null();
	HX_STACK_LINE(16505)
	this->post_adder = null();
	HX_STACK_LINE(16504)
	this->adder = null();
	HX_STACK_LINE(16502)
	this->_modifiable = null();
	HX_STACK_LINE(16501)
	this->_validate = null();
	HX_STACK_LINE(16500)
	this->_invalidate = null();
	HX_STACK_LINE(16499)
	this->_invalidated = false;
	HX_STACK_LINE(16498)
	this->immutable = false;
	HX_STACK_LINE(16497)
	this->inner = null();
	HX_STACK_LINE(16496)
	this->outer = null();
	HX_STACK_LINE(16552)
	this->inner = ::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__new();
	HX_STACK_LINE(16553)
	this->_invalidated = true;
}
;
	return null();
}

ZPP_ConstraintList_obj::~ZPP_ConstraintList_obj() { }

Dynamic ZPP_ConstraintList_obj::__CreateEmpty() { return  new ZPP_ConstraintList_obj; }
hx::ObjectPtr< ZPP_ConstraintList_obj > ZPP_ConstraintList_obj::__new()
{  hx::ObjectPtr< ZPP_ConstraintList_obj > result = new ZPP_ConstraintList_obj();
	result->__construct();
	return result;}

Dynamic ZPP_ConstraintList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ConstraintList_obj > result = new ZPP_ConstraintList_obj();
	result->__construct();
	return result;}

Void ZPP_ConstraintList_obj::invalidate( ){
{
		HX_STACK_PUSH("ZPP_ConstraintList::invalidate","zpp_nape/util/Lists.hx",16542);
		HX_STACK_THIS(this);
		HX_STACK_LINE(16543)
		this->_invalidated = true;
		HX_STACK_LINE(16544)
		if (((this->_invalidate_dyn() != null()))){
			HX_STACK_LINE(16544)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConstraintList_obj,invalidate,(void))

Void ZPP_ConstraintList_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_ConstraintList::validate","zpp_nape/util/Lists.hx",16536);
		HX_STACK_THIS(this);
		HX_STACK_LINE(16536)
		if ((this->_invalidated)){
			HX_STACK_LINE(16538)
			this->_invalidated = false;
			HX_STACK_LINE(16539)
			if (((this->_validate_dyn() != null()))){
				HX_STACK_LINE(16539)
				this->_validate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConstraintList_obj,validate,(void))

Void ZPP_ConstraintList_obj::modify_test( ){
{
		HX_STACK_PUSH("ZPP_ConstraintList::modify_test","zpp_nape/util/Lists.hx",16531);
		HX_STACK_THIS(this);
		HX_STACK_LINE(16531)
		if (((this->_modifiable_dyn() != null()))){
			HX_STACK_LINE(16533)
			this->_modifiable();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConstraintList_obj,modify_test,(void))

Void ZPP_ConstraintList_obj::modified( ){
{
		HX_STACK_PUSH("ZPP_ConstraintList::modified","zpp_nape/util/Lists.hx",16526);
		HX_STACK_THIS(this);
		HX_STACK_LINE(16527)
		this->zip_length = true;
		HX_STACK_LINE(16528)
		this->at_ite = null();
		HX_STACK_LINE(16529)
		this->push_ite = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConstraintList_obj,modified,(void))

Void ZPP_ConstraintList_obj::valmod( ){
{
		HX_STACK_PUSH("ZPP_ConstraintList::valmod","zpp_nape/util/Lists.hx",16516);
		HX_STACK_THIS(this);
		HX_STACK_LINE(16517)
		this->validate();
		HX_STACK_LINE(16518)
		if ((this->inner->modified)){
			HX_STACK_LINE(16519)
			if ((this->inner->pushmod)){
				HX_STACK_LINE(16519)
				this->push_ite = null();
			}
			HX_STACK_LINE(16520)
			this->at_ite = null();
			HX_STACK_LINE(16521)
			this->inner->modified = false;
			HX_STACK_LINE(16522)
			this->inner->pushmod = false;
			HX_STACK_LINE(16523)
			this->zip_length = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ConstraintList_obj,valmod,(void))

bool ZPP_ConstraintList_obj::internal;

::nape::constraint::ConstraintList ZPP_ConstraintList_obj::get( ::zpp_nape::util::ZNPList_ZPP_Constraint list,hx::Null< bool >  __o_imm){
bool imm = __o_imm.Default(false);
	HX_STACK_PUSH("ZPP_ConstraintList::get","zpp_nape/util/Lists.hx",16509);
	HX_STACK_ARG(list,"list");
	HX_STACK_ARG(imm,"imm");
{
		HX_STACK_LINE(16510)
		::nape::constraint::ConstraintList ret = ::nape::constraint::ConstraintList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(16511)
		ret->zpp_inner->inner = list;
		HX_STACK_LINE(16512)
		if ((imm)){
			HX_STACK_LINE(16512)
			ret->zpp_inner->immutable = true;
		}
		HX_STACK_LINE(16513)
		ret->zpp_inner->zip_length = true;
		HX_STACK_LINE(16514)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_ConstraintList_obj,get,return )


ZPP_ConstraintList_obj::ZPP_ConstraintList_obj()
{
}

void ZPP_ConstraintList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ConstraintList);
	HX_MARK_MEMBER_NAME(user_length,"user_length");
	HX_MARK_MEMBER_NAME(zip_length,"zip_length");
	HX_MARK_MEMBER_NAME(push_ite,"push_ite");
	HX_MARK_MEMBER_NAME(at_ite,"at_ite");
	HX_MARK_MEMBER_NAME(at_index,"at_index");
	HX_MARK_MEMBER_NAME(reverse_flag,"reverse_flag");
	HX_MARK_MEMBER_NAME(dontremove,"dontremove");
	HX_MARK_MEMBER_NAME(subber,"subber");
	HX_MARK_MEMBER_NAME(post_adder,"post_adder");
	HX_MARK_MEMBER_NAME(adder,"adder");
	HX_MARK_MEMBER_NAME(_modifiable,"_modifiable");
	HX_MARK_MEMBER_NAME(_validate,"_validate");
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_MEMBER_NAME(_invalidated,"_invalidated");
	HX_MARK_MEMBER_NAME(immutable,"immutable");
	HX_MARK_MEMBER_NAME(inner,"inner");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_END_CLASS();
}

void ZPP_ConstraintList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(user_length,"user_length");
	HX_VISIT_MEMBER_NAME(zip_length,"zip_length");
	HX_VISIT_MEMBER_NAME(push_ite,"push_ite");
	HX_VISIT_MEMBER_NAME(at_ite,"at_ite");
	HX_VISIT_MEMBER_NAME(at_index,"at_index");
	HX_VISIT_MEMBER_NAME(reverse_flag,"reverse_flag");
	HX_VISIT_MEMBER_NAME(dontremove,"dontremove");
	HX_VISIT_MEMBER_NAME(subber,"subber");
	HX_VISIT_MEMBER_NAME(post_adder,"post_adder");
	HX_VISIT_MEMBER_NAME(adder,"adder");
	HX_VISIT_MEMBER_NAME(_modifiable,"_modifiable");
	HX_VISIT_MEMBER_NAME(_validate,"_validate");
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
	HX_VISIT_MEMBER_NAME(_invalidated,"_invalidated");
	HX_VISIT_MEMBER_NAME(immutable,"immutable");
	HX_VISIT_MEMBER_NAME(inner,"inner");
	HX_VISIT_MEMBER_NAME(outer,"outer");
}

Dynamic ZPP_ConstraintList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"adder") ) { return adder; }
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"at_ite") ) { return at_ite; }
		if (HX_FIELD_EQ(inName,"valmod") ) { return valmod_dyn(); }
		if (HX_FIELD_EQ(inName,"subber") ) { return subber; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { return internal; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { return push_ite; }
		if (HX_FIELD_EQ(inName,"at_index") ) { return at_index; }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { return _validate; }
		if (HX_FIELD_EQ(inName,"immutable") ) { return immutable; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { return zip_length; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"dontremove") ) { return dontremove; }
		if (HX_FIELD_EQ(inName,"post_adder") ) { return post_adder; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"user_length") ) { return user_length; }
		if (HX_FIELD_EQ(inName,"modify_test") ) { return modify_test_dyn(); }
		if (HX_FIELD_EQ(inName,"_modifiable") ) { return _modifiable; }
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return _invalidate; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reverse_flag") ) { return reverse_flag; }
		if (HX_FIELD_EQ(inName,"_invalidated") ) { return _invalidated; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_ConstraintList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"adder") ) { adder=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"subber") ) { subber=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { push_ite=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_index") ) { at_index=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { _validate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immutable") ) { immutable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { zip_length=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dontremove") ) { dontremove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"post_adder") ) { post_adder=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"user_length") ) { user_length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_modifiable") ) { _modifiable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reverse_flag") ) { reverse_flag=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_invalidated") ) { _invalidated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_ConstraintList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("user_length"));
	outFields->push(HX_CSTRING("zip_length"));
	outFields->push(HX_CSTRING("push_ite"));
	outFields->push(HX_CSTRING("at_ite"));
	outFields->push(HX_CSTRING("at_index"));
	outFields->push(HX_CSTRING("reverse_flag"));
	outFields->push(HX_CSTRING("dontremove"));
	outFields->push(HX_CSTRING("_invalidated"));
	outFields->push(HX_CSTRING("immutable"));
	outFields->push(HX_CSTRING("inner"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("internal"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("user_length"),
	HX_CSTRING("zip_length"),
	HX_CSTRING("push_ite"),
	HX_CSTRING("at_ite"),
	HX_CSTRING("at_index"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("validate"),
	HX_CSTRING("modify_test"),
	HX_CSTRING("modified"),
	HX_CSTRING("valmod"),
	HX_CSTRING("reverse_flag"),
	HX_CSTRING("dontremove"),
	HX_CSTRING("subber"),
	HX_CSTRING("post_adder"),
	HX_CSTRING("adder"),
	HX_CSTRING("_modifiable"),
	HX_CSTRING("_validate"),
	HX_CSTRING("_invalidate"),
	HX_CSTRING("_invalidated"),
	HX_CSTRING("immutable"),
	HX_CSTRING("inner"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ConstraintList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_ConstraintList_obj::internal,"internal");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ConstraintList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_ConstraintList_obj::internal,"internal");
};

Class ZPP_ConstraintList_obj::__mClass;

void ZPP_ConstraintList_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_ConstraintList"), hx::TCanCast< ZPP_ConstraintList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_ConstraintList_obj::__boot()
{
	internal= false;
}

} // end namespace zpp_nape
} // end namespace util
