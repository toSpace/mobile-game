#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_ContactList_obj::__construct()
{
HX_STACK_PUSH("ZPP_ContactList::new","zpp_nape/util/Lists.hx",17363);
{
	HX_STACK_LINE(17418)
	this->user_length = (int)0;
	HX_STACK_LINE(17417)
	this->zip_length = false;
	HX_STACK_LINE(17416)
	this->push_ite = null();
	HX_STACK_LINE(17415)
	this->at_ite = null();
	HX_STACK_LINE(17414)
	this->at_index = (int)0;
	HX_STACK_LINE(17376)
	this->reverse_flag = false;
	HX_STACK_LINE(17375)
	this->dontremove = false;
	HX_STACK_LINE(17374)
	this->subber = null();
	HX_STACK_LINE(17373)
	this->post_adder = null();
	HX_STACK_LINE(17372)
	this->adder = null();
	HX_STACK_LINE(17370)
	this->_modifiable = null();
	HX_STACK_LINE(17369)
	this->_validate = null();
	HX_STACK_LINE(17368)
	this->_invalidate = null();
	HX_STACK_LINE(17367)
	this->_invalidated = false;
	HX_STACK_LINE(17366)
	this->immutable = false;
	HX_STACK_LINE(17365)
	this->inner = null();
	HX_STACK_LINE(17364)
	this->outer = null();
	HX_STACK_LINE(17420)
	this->inner = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
	HX_STACK_LINE(17421)
	this->_invalidated = true;
}
;
	return null();
}

ZPP_ContactList_obj::~ZPP_ContactList_obj() { }

Dynamic ZPP_ContactList_obj::__CreateEmpty() { return  new ZPP_ContactList_obj; }
hx::ObjectPtr< ZPP_ContactList_obj > ZPP_ContactList_obj::__new()
{  hx::ObjectPtr< ZPP_ContactList_obj > result = new ZPP_ContactList_obj();
	result->__construct();
	return result;}

Dynamic ZPP_ContactList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ContactList_obj > result = new ZPP_ContactList_obj();
	result->__construct();
	return result;}

Void ZPP_ContactList_obj::invalidate( ){
{
		HX_STACK_PUSH("ZPP_ContactList::invalidate","zpp_nape/util/Lists.hx",17410);
		HX_STACK_THIS(this);
		HX_STACK_LINE(17411)
		this->_invalidated = true;
		HX_STACK_LINE(17412)
		if (((this->_invalidate_dyn() != null()))){
			HX_STACK_LINE(17412)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ContactList_obj,invalidate,(void))

Void ZPP_ContactList_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_ContactList::validate","zpp_nape/util/Lists.hx",17404);
		HX_STACK_THIS(this);
		HX_STACK_LINE(17404)
		if ((this->_invalidated)){
			HX_STACK_LINE(17406)
			this->_invalidated = false;
			HX_STACK_LINE(17407)
			if (((this->_validate_dyn() != null()))){
				HX_STACK_LINE(17407)
				this->_validate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ContactList_obj,validate,(void))

Void ZPP_ContactList_obj::modify_test( ){
{
		HX_STACK_PUSH("ZPP_ContactList::modify_test","zpp_nape/util/Lists.hx",17399);
		HX_STACK_THIS(this);
		HX_STACK_LINE(17399)
		if (((this->_modifiable_dyn() != null()))){
			HX_STACK_LINE(17401)
			this->_modifiable();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ContactList_obj,modify_test,(void))

Void ZPP_ContactList_obj::modified( ){
{
		HX_STACK_PUSH("ZPP_ContactList::modified","zpp_nape/util/Lists.hx",17394);
		HX_STACK_THIS(this);
		HX_STACK_LINE(17395)
		this->zip_length = true;
		HX_STACK_LINE(17396)
		this->at_ite = null();
		HX_STACK_LINE(17397)
		this->push_ite = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ContactList_obj,modified,(void))

Void ZPP_ContactList_obj::valmod( ){
{
		HX_STACK_PUSH("ZPP_ContactList::valmod","zpp_nape/util/Lists.hx",17384);
		HX_STACK_THIS(this);
		HX_STACK_LINE(17385)
		this->validate();
		HX_STACK_LINE(17386)
		if ((this->inner->modified)){
			HX_STACK_LINE(17387)
			if ((this->inner->pushmod)){
				HX_STACK_LINE(17387)
				this->push_ite = null();
			}
			HX_STACK_LINE(17388)
			this->at_ite = null();
			HX_STACK_LINE(17389)
			this->inner->modified = false;
			HX_STACK_LINE(17390)
			this->inner->pushmod = false;
			HX_STACK_LINE(17391)
			this->zip_length = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ContactList_obj,valmod,(void))

bool ZPP_ContactList_obj::internal;

::nape::dynamics::ContactList ZPP_ContactList_obj::get( ::zpp_nape::dynamics::ZPP_Contact list,hx::Null< bool >  __o_imm){
bool imm = __o_imm.Default(false);
	HX_STACK_PUSH("ZPP_ContactList::get","zpp_nape/util/Lists.hx",17377);
	HX_STACK_ARG(list,"list");
	HX_STACK_ARG(imm,"imm");
{
		HX_STACK_LINE(17378)
		::nape::dynamics::ContactList ret = ::nape::dynamics::ContactList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(17379)
		ret->zpp_inner->inner = list;
		HX_STACK_LINE(17380)
		if ((imm)){
			HX_STACK_LINE(17380)
			ret->zpp_inner->immutable = true;
		}
		HX_STACK_LINE(17381)
		ret->zpp_inner->zip_length = true;
		HX_STACK_LINE(17382)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_ContactList_obj,get,return )


ZPP_ContactList_obj::ZPP_ContactList_obj()
{
}

void ZPP_ContactList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ContactList);
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

void ZPP_ContactList_obj::__Visit(HX_VISIT_PARAMS)
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

Dynamic ZPP_ContactList_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_ContactList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"adder") ) { adder=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::dynamics::ContactList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"subber") ) { subber=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { push_ite=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
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

void ZPP_ContactList_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_ContactList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_ContactList_obj::internal,"internal");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ContactList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_ContactList_obj::internal,"internal");
};

Class ZPP_ContactList_obj::__mClass;

void ZPP_ContactList_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_ContactList"), hx::TCanCast< ZPP_ContactList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_ContactList_obj::__boot()
{
	internal= false;
}

} // end namespace zpp_nape
} // end namespace util
