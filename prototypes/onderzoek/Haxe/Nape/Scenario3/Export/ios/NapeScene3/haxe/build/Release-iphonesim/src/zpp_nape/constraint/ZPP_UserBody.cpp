#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserBody
#include <zpp_nape/constraint/ZPP_UserBody.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_UserBody_obj::__construct(int cnt,::zpp_nape::phys::ZPP_Body body)
{
HX_STACK_PUSH("ZPP_UserBody::new","zpp_nape/constraint/UserConstraint.hx",569);
{
	HX_STACK_LINE(571)
	this->body = null();
	HX_STACK_LINE(570)
	this->cnt = (int)0;
	HX_STACK_LINE(573)
	this->cnt = cnt;
	HX_STACK_LINE(574)
	this->body = body;
}
;
	return null();
}

ZPP_UserBody_obj::~ZPP_UserBody_obj() { }

Dynamic ZPP_UserBody_obj::__CreateEmpty() { return  new ZPP_UserBody_obj; }
hx::ObjectPtr< ZPP_UserBody_obj > ZPP_UserBody_obj::__new(int cnt,::zpp_nape::phys::ZPP_Body body)
{  hx::ObjectPtr< ZPP_UserBody_obj > result = new ZPP_UserBody_obj();
	result->__construct(cnt,body);
	return result;}

Dynamic ZPP_UserBody_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_UserBody_obj > result = new ZPP_UserBody_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


ZPP_UserBody_obj::ZPP_UserBody_obj()
{
}

void ZPP_UserBody_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_UserBody);
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(cnt,"cnt");
	HX_MARK_END_CLASS();
}

void ZPP_UserBody_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(cnt,"cnt");
}

Dynamic ZPP_UserBody_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { return cnt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_UserBody_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { cnt=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_UserBody_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("cnt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("body"),
	HX_CSTRING("cnt"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_UserBody_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_UserBody_obj::__mClass,"__mClass");
};

Class ZPP_UserBody_obj::__mClass;

void ZPP_UserBody_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_UserBody"), hx::TCanCast< ZPP_UserBody_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_UserBody_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
