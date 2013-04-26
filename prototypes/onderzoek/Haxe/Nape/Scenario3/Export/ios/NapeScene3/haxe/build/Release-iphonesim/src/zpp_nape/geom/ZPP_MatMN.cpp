#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_MatMN_obj::__construct(int m,int n)
{
HX_STACK_PUSH("ZPP_MatMN::new","zpp_nape/geom/MatMN.hx",174);
{
	HX_STACK_LINE(178)
	this->x = null();
	HX_STACK_LINE(177)
	this->n = (int)0;
	HX_STACK_LINE(176)
	this->m = (int)0;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(180)
	this->m = m;
	HX_STACK_LINE(181)
	this->n = n;
	HX_STACK_LINE(183)
	this->x = Array_obj< Float >::__new();
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (m * n);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		while(((_g1 < _g))){
			HX_STACK_LINE(184)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(185)
			this->x->push(0.0);
		}
	}
}
;
	return null();
}

ZPP_MatMN_obj::~ZPP_MatMN_obj() { }

Dynamic ZPP_MatMN_obj::__CreateEmpty() { return  new ZPP_MatMN_obj; }
hx::ObjectPtr< ZPP_MatMN_obj > ZPP_MatMN_obj::__new(int m,int n)
{  hx::ObjectPtr< ZPP_MatMN_obj > result = new ZPP_MatMN_obj();
	result->__construct(m,n);
	return result;}

Dynamic ZPP_MatMN_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MatMN_obj > result = new ZPP_MatMN_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


ZPP_MatMN_obj::ZPP_MatMN_obj()
{
}

void ZPP_MatMN_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MatMN);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_END_CLASS();
}

void ZPP_MatMN_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(outer,"outer");
}

Dynamic ZPP_MatMN_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_MatMN_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::MatMN >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_MatMN_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("n"));
	outFields->push(HX_CSTRING("m"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("n"),
	HX_CSTRING("m"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MatMN_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MatMN_obj::__mClass,"__mClass");
};

Class ZPP_MatMN_obj::__mClass;

void ZPP_MatMN_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_MatMN"), hx::TCanCast< ZPP_MatMN_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_MatMN_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace geom
