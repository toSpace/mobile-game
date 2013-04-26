#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_CbTypeList_obj::__construct()
{
HX_STACK_PUSH("ZPP_CbTypeList::new","zpp_nape/util/Lists.hx",16805);
{
	HX_STACK_LINE(16860)
	this->user_length = (int)0;
	HX_STACK_LINE(16859)
	this->zip_length = false;
	HX_STACK_LINE(16858)
	this->push_ite = null();
	HX_STACK_LINE(16857)
	this->at_ite = null();
	HX_STACK_LINE(16856)
	this->at_index = (int)0;
	HX_STACK_LINE(16818)
	this->reverse_flag = false;
	HX_STACK_LINE(16817)
	this->dontremove = false;
	HX_STACK_LINE(16816)
	this->subber = null();
	HX_STACK_LINE(16815)
	this->post_adder = null();
	HX_STACK_LINE(16814)
	this->adder = null();
	HX_STACK_LINE(16812)
	this->_modifiable = null();
	HX_STACK_LINE(16811)
	this->_validate = null();
	HX_STACK_LINE(16810)
	this->_invalidate = null();
	HX_STACK_LINE(16809)
	this->_invalidated = false;
	HX_STACK_LINE(16808)
	this->immutable = false;
	HX_STACK_LINE(16807)
	this->inner = null();
	HX_STACK_LINE(16806)
	this->outer = null();
	HX_STACK_LINE(16862)
	this->inner = ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
	HX_STACK_LINE(16863)
	this->_invalidated = true;
}
;
	return null();
}

ZPP_CbTypeList_obj::~ZPP_CbTypeList_obj() { }

Dynamic ZPP_CbTypeList_obj::__CreateEmpty() { return  new ZPP_CbTypeList_obj; }
hx::ObjectPtr< ZPP_CbTypeList_obj > ZPP_CbTypeList_obj::__new()
{  hx::ObjectPtr< ZPP_CbTypeList_obj > result = new ZPP_CbTypeList_obj();
	result->__construct();
	return result;}

Dynamic ZPP_CbTypeList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CbTypeList_obj > result = new ZPP_CbTypeList_obj();
	result->__construct();
	return result;}

Void ZPP_CbTypeList_obj::invalidate( ){
{
		HX_STACK_PUSH("ZPP_CbTypeList::invalidate","zpp_nape/util/Lists.hx",16852);
		HX_STACK_THIS(this);
		HX_STACK_LINE(16853)
		this->_invalidated = true;
		HX_STACK_LINE(16854)
		if (((this->_invalidate_dyn() != null()))){
			HX_STACK_LINE(16854)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbTypeList_obj,invalidate,(void))

Void ZPP_CbTypeList_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_CbTypeList::validate","zpp_nape/util/Lists.hx",16846);
		HX_STACK_THIS(this);
		HX_STACK_LINE(16846)
		if ((this->_invalidated)){
			HX_STACK_LINE(16848)
			this->_invalidated = false;
			HX_STACK_LINE(16849)
			if (((this->_validate_dyn() != null()))){
				HX_STACK_LINE(16849)
				this->_validate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbTypeList_obj,validate,(void))

Void ZPP_CbTypeList_obj::modify_test( ){
{
		HX_STACK_PUSH("ZPP_CbTypeList::modify_test","zpp_nape/util/Lists.hx",16841);
		HX_STACK_THIS(this);
		HX_STACK_LINE(16841)
		if (((this->_modifiable_dyn() != null()))){
			HX_STACK_LINE(16843)
			this->_modifiable();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbTypeList_obj,modify_test,(void))

Void ZPP_CbTypeList_obj::modified( ){
{
		HX_STACK_PUSH("ZPP_CbTypeList::modified","zpp_nape/util/Lists.hx",16836);
		HX_STACK_THIS(this);
		HX_STACK_LINE(16837)
		this->zip_length = true;
		HX_STACK_LINE(16838)
		this->at_ite = null();
		HX_STACK_LINE(16839)
		this->push_ite = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbTypeList_obj,modified,(void))

Void ZPP_CbTypeList_obj::valmod( ){
{
		HX_STACK_PUSH("ZPP_CbTypeList::valmod","zpp_nape/util/Lists.hx",16826);
		HX_STACK_THIS(this);
		HX_STACK_LINE(16827)
		this->validate();
		HX_STACK_LINE(16828)
		if ((this->inner->modified)){
			HX_STACK_LINE(16829)
			if ((this->inner->pushmod)){
				HX_STACK_LINE(16829)
				this->push_ite = null();
			}
			HX_STACK_LINE(16830)
			this->at_ite = null();
			HX_STACK_LINE(16831)
			this->inner->modified = false;
			HX_STACK_LINE(16832)
			this->inner->pushmod = false;
			HX_STACK_LINE(16833)
			this->zip_length = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbTypeList_obj,valmod,(void))

bool ZPP_CbTypeList_obj::internal;

::nape::callbacks::CbTypeList ZPP_CbTypeList_obj::get( ::zpp_nape::util::ZNPList_ZPP_CbType list,hx::Null< bool >  __o_imm){
bool imm = __o_imm.Default(false);
	HX_STACK_PUSH("ZPP_CbTypeList::get","zpp_nape/util/Lists.hx",16819);
	HX_STACK_ARG(list,"list");
	HX_STACK_ARG(imm,"imm");
{
		HX_STACK_LINE(16820)
		::nape::callbacks::CbTypeList ret = ::nape::callbacks::CbTypeList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(16821)
		ret->zpp_inner->inner = list;
		HX_STACK_LINE(16822)
		if ((imm)){
			HX_STACK_LINE(16822)
			ret->zpp_inner->immutable = true;
		}
		HX_STACK_LINE(16823)
		ret->zpp_inner->zip_length = true;
		HX_STACK_LINE(16824)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbTypeList_obj,get,return )


ZPP_CbTypeList_obj::ZPP_CbTypeList_obj()
{
}

void ZPP_CbTypeList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CbTypeList);
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

void ZPP_CbTypeList_obj::__Visit(HX_VISIT_PARAMS)
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

Dynamic ZPP_CbTypeList_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_CbTypeList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"adder") ) { adder=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"subber") ) { subber=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"push_ite") ) { push_ite=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CbType >(); return inValue; }
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

void ZPP_CbTypeList_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_CbTypeList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CbTypeList_obj::internal,"internal");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CbTypeList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CbTypeList_obj::internal,"internal");
};

Class ZPP_CbTypeList_obj::__mClass;

void ZPP_CbTypeList_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_CbTypeList"), hx::TCanCast< ZPP_CbTypeList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_CbTypeList_obj::__boot()
{
	internal= false;
}

} // end namespace zpp_nape
} // end namespace util
