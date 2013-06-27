#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Vec3_obj::__construct()
{
HX_STACK_PUSH("ZPP_Vec3::new","zpp_nape/geom/Vec3.hx",174);
{
	HX_STACK_LINE(180)
	this->_validate = null();
	HX_STACK_LINE(179)
	this->immutable = false;
	HX_STACK_LINE(178)
	this->z = 0.0;
	HX_STACK_LINE(177)
	this->y = 0.0;
	HX_STACK_LINE(176)
	this->x = 0.0;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(189)
	this->immutable = false;
	HX_STACK_LINE(190)
	this->_validate = null();
}
;
	return null();
}

ZPP_Vec3_obj::~ZPP_Vec3_obj() { }

Dynamic ZPP_Vec3_obj::__CreateEmpty() { return  new ZPP_Vec3_obj; }
hx::ObjectPtr< ZPP_Vec3_obj > ZPP_Vec3_obj::__new()
{  hx::ObjectPtr< ZPP_Vec3_obj > result = new ZPP_Vec3_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Vec3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Vec3_obj > result = new ZPP_Vec3_obj();
	result->__construct();
	return result;}

Void ZPP_Vec3_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_Vec3::validate","zpp_nape/geom/Vec3.hx",183);
		HX_STACK_THIS(this);
		HX_STACK_LINE(183)
		if (((this->_validate_dyn() != null()))){
			HX_STACK_LINE(184)
			this->_validate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec3_obj,validate,(void))


ZPP_Vec3_obj::ZPP_Vec3_obj()
{
}

void ZPP_Vec3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Vec3);
	HX_MARK_MEMBER_NAME(_validate,"_validate");
	HX_MARK_MEMBER_NAME(immutable,"immutable");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_END_CLASS();
}

void ZPP_Vec3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_validate,"_validate");
	HX_VISIT_MEMBER_NAME(immutable,"immutable");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(outer,"outer");
}

Dynamic ZPP_Vec3_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { return _validate; }
		if (HX_FIELD_EQ(inName,"immutable") ) { return immutable; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Vec3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { _validate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immutable") ) { immutable=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Vec3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("immutable"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("validate"),
	HX_CSTRING("_validate"),
	HX_CSTRING("immutable"),
	HX_CSTRING("z"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Vec3_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Vec3_obj::__mClass,"__mClass");
};

Class ZPP_Vec3_obj::__mClass;

void ZPP_Vec3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Vec3"), hx::TCanCast< ZPP_Vec3_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Vec3_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace geom
