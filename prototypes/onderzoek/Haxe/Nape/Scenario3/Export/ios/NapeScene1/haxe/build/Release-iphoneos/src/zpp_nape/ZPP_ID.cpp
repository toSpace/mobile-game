#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
namespace zpp_nape{

Void ZPP_ID_obj::__construct()
{
	return null();
}

ZPP_ID_obj::~ZPP_ID_obj() { }

Dynamic ZPP_ID_obj::__CreateEmpty() { return  new ZPP_ID_obj; }
hx::ObjectPtr< ZPP_ID_obj > ZPP_ID_obj::__new()
{  hx::ObjectPtr< ZPP_ID_obj > result = new ZPP_ID_obj();
	result->__construct();
	return result;}

Dynamic ZPP_ID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ID_obj > result = new ZPP_ID_obj();
	result->__construct();
	return result;}

int ZPP_ID_obj::_Constraint;

int ZPP_ID_obj::Constraint( ){
	HX_STACK_PUSH("ZPP_ID::Constraint","zpp_nape/ID.hx",177);
	HX_STACK_LINE(177)
	return (::zpp_nape::ZPP_ID_obj::_Constraint)++;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_ID_obj,Constraint,return )

int ZPP_ID_obj::_Interactor;

int ZPP_ID_obj::Interactor( ){
	HX_STACK_PUSH("ZPP_ID::Interactor","zpp_nape/ID.hx",181);
	HX_STACK_LINE(181)
	return (::zpp_nape::ZPP_ID_obj::_Interactor)++;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_ID_obj,Interactor,return )

int ZPP_ID_obj::_CbType;

int ZPP_ID_obj::CbType( ){
	HX_STACK_PUSH("ZPP_ID::CbType","zpp_nape/ID.hx",185);
	HX_STACK_LINE(185)
	return (::zpp_nape::ZPP_ID_obj::_CbType)++;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_ID_obj,CbType,return )

int ZPP_ID_obj::_CbSet;

int ZPP_ID_obj::CbSet( ){
	HX_STACK_PUSH("ZPP_ID::CbSet","zpp_nape/ID.hx",189);
	HX_STACK_LINE(189)
	return (::zpp_nape::ZPP_ID_obj::_CbSet)++;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_ID_obj,CbSet,return )

int ZPP_ID_obj::_Listener;

int ZPP_ID_obj::Listener( ){
	HX_STACK_PUSH("ZPP_ID::Listener","zpp_nape/ID.hx",193);
	HX_STACK_LINE(193)
	return (::zpp_nape::ZPP_ID_obj::_Listener)++;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_ID_obj,Listener,return )

int ZPP_ID_obj::_ZPP_SimpleVert;

int ZPP_ID_obj::ZPP_SimpleVert( ){
	HX_STACK_PUSH("ZPP_ID::ZPP_SimpleVert","zpp_nape/ID.hx",197);
	HX_STACK_LINE(197)
	return (::zpp_nape::ZPP_ID_obj::_ZPP_SimpleVert)++;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_ID_obj,ZPP_SimpleVert,return )

int ZPP_ID_obj::_ZPP_SimpleSeg;

int ZPP_ID_obj::ZPP_SimpleSeg( ){
	HX_STACK_PUSH("ZPP_ID::ZPP_SimpleSeg","zpp_nape/ID.hx",201);
	HX_STACK_LINE(201)
	return (::zpp_nape::ZPP_ID_obj::_ZPP_SimpleSeg)++;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_ID_obj,ZPP_SimpleSeg,return )

int ZPP_ID_obj::_Space;

int ZPP_ID_obj::Space( ){
	HX_STACK_PUSH("ZPP_ID::Space","zpp_nape/ID.hx",205);
	HX_STACK_LINE(205)
	return (::zpp_nape::ZPP_ID_obj::_Space)++;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_ID_obj,Space,return )

int ZPP_ID_obj::_InteractionGroup;

int ZPP_ID_obj::InteractionGroup( ){
	HX_STACK_PUSH("ZPP_ID::InteractionGroup","zpp_nape/ID.hx",209);
	HX_STACK_LINE(209)
	return (::zpp_nape::ZPP_ID_obj::_InteractionGroup)++;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_ID_obj,InteractionGroup,return )


ZPP_ID_obj::ZPP_ID_obj()
{
}

void ZPP_ID_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ID);
	HX_MARK_END_CLASS();
}

void ZPP_ID_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_ID_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CbSet") ) { return CbSet_dyn(); }
		if (HX_FIELD_EQ(inName,"Space") ) { return Space_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CbType") ) { return CbType_dyn(); }
		if (HX_FIELD_EQ(inName,"_CbSet") ) { return _CbSet; }
		if (HX_FIELD_EQ(inName,"_Space") ) { return _Space; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_CbType") ) { return _CbType; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Listener") ) { return Listener_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_Listener") ) { return _Listener; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Constraint") ) { return Constraint_dyn(); }
		if (HX_FIELD_EQ(inName,"Interactor") ) { return Interactor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_Constraint") ) { return _Constraint; }
		if (HX_FIELD_EQ(inName,"_Interactor") ) { return _Interactor; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ZPP_SimpleSeg") ) { return ZPP_SimpleSeg_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ZPP_SimpleVert") ) { return ZPP_SimpleVert_dyn(); }
		if (HX_FIELD_EQ(inName,"_ZPP_SimpleSeg") ) { return _ZPP_SimpleSeg; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ZPP_SimpleVert") ) { return _ZPP_SimpleVert; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"InteractionGroup") ) { return InteractionGroup_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_InteractionGroup") ) { return _InteractionGroup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_ID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_CbSet") ) { _CbSet=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Space") ) { _Space=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_CbType") ) { _CbType=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_Listener") ) { _Listener=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_Constraint") ) { _Constraint=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Interactor") ) { _Interactor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ZPP_SimpleSeg") ) { _ZPP_SimpleSeg=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ZPP_SimpleVert") ) { _ZPP_SimpleVert=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_InteractionGroup") ) { _InteractionGroup=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_ID_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_Constraint"),
	HX_CSTRING("Constraint"),
	HX_CSTRING("_Interactor"),
	HX_CSTRING("Interactor"),
	HX_CSTRING("_CbType"),
	HX_CSTRING("CbType"),
	HX_CSTRING("_CbSet"),
	HX_CSTRING("CbSet"),
	HX_CSTRING("_Listener"),
	HX_CSTRING("Listener"),
	HX_CSTRING("_ZPP_SimpleVert"),
	HX_CSTRING("ZPP_SimpleVert"),
	HX_CSTRING("_ZPP_SimpleSeg"),
	HX_CSTRING("ZPP_SimpleSeg"),
	HX_CSTRING("_Space"),
	HX_CSTRING("Space"),
	HX_CSTRING("_InteractionGroup"),
	HX_CSTRING("InteractionGroup"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_ID_obj::_Constraint,"_Constraint");
	HX_MARK_MEMBER_NAME(ZPP_ID_obj::_Interactor,"_Interactor");
	HX_MARK_MEMBER_NAME(ZPP_ID_obj::_CbType,"_CbType");
	HX_MARK_MEMBER_NAME(ZPP_ID_obj::_CbSet,"_CbSet");
	HX_MARK_MEMBER_NAME(ZPP_ID_obj::_Listener,"_Listener");
	HX_MARK_MEMBER_NAME(ZPP_ID_obj::_ZPP_SimpleVert,"_ZPP_SimpleVert");
	HX_MARK_MEMBER_NAME(ZPP_ID_obj::_ZPP_SimpleSeg,"_ZPP_SimpleSeg");
	HX_MARK_MEMBER_NAME(ZPP_ID_obj::_Space,"_Space");
	HX_MARK_MEMBER_NAME(ZPP_ID_obj::_InteractionGroup,"_InteractionGroup");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_ID_obj::_Constraint,"_Constraint");
	HX_VISIT_MEMBER_NAME(ZPP_ID_obj::_Interactor,"_Interactor");
	HX_VISIT_MEMBER_NAME(ZPP_ID_obj::_CbType,"_CbType");
	HX_VISIT_MEMBER_NAME(ZPP_ID_obj::_CbSet,"_CbSet");
	HX_VISIT_MEMBER_NAME(ZPP_ID_obj::_Listener,"_Listener");
	HX_VISIT_MEMBER_NAME(ZPP_ID_obj::_ZPP_SimpleVert,"_ZPP_SimpleVert");
	HX_VISIT_MEMBER_NAME(ZPP_ID_obj::_ZPP_SimpleSeg,"_ZPP_SimpleSeg");
	HX_VISIT_MEMBER_NAME(ZPP_ID_obj::_Space,"_Space");
	HX_VISIT_MEMBER_NAME(ZPP_ID_obj::_InteractionGroup,"_InteractionGroup");
};

Class ZPP_ID_obj::__mClass;

void ZPP_ID_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.ZPP_ID"), hx::TCanCast< ZPP_ID_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_ID_obj::__boot()
{
	_Constraint= (int)0;
	_Interactor= (int)0;
	_CbType= (int)0;
	_CbSet= (int)0;
	_Listener= (int)0;
	_ZPP_SimpleVert= (int)0;
	_ZPP_SimpleSeg= (int)0;
	_Space= (int)0;
	_InteractionGroup= (int)0;
}

} // end namespace zpp_nape
