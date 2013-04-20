#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
namespace nape{
namespace callbacks{

Void OptionType_obj::__construct(Dynamic includes,Dynamic excludes)
{
HX_STACK_PUSH("OptionType::new","nape/callbacks/OptionType.hx",199);
{
	HX_STACK_LINE(203)
	this->zpp_inner = null();
	HX_STACK_LINE(248)
	this->zpp_inner = ::zpp_nape::callbacks::ZPP_OptionType_obj::__new();
	HX_STACK_LINE(249)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(250)
	if (((includes != null()))){
		HX_STACK_LINE(250)
		this->including(includes);
	}
	HX_STACK_LINE(251)
	if (((excludes != null()))){
		HX_STACK_LINE(251)
		this->excluding(excludes);
	}
}
;
	return null();
}

OptionType_obj::~OptionType_obj() { }

Dynamic OptionType_obj::__CreateEmpty() { return  new OptionType_obj; }
hx::ObjectPtr< OptionType_obj > OptionType_obj::__new(Dynamic includes,Dynamic excludes)
{  hx::ObjectPtr< OptionType_obj > result = new OptionType_obj();
	result->__construct(includes,excludes);
	return result;}

Dynamic OptionType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptionType_obj > result = new OptionType_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String OptionType_obj::toString( ){
	HX_STACK_PUSH("OptionType::toString","nape/callbacks/OptionType.hx",292);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::callbacks::CbTypeList Block( ::nape::callbacks::OptionType_obj *__this){
			HX_STACK_PUSH("*::closure","nape/callbacks/OptionType.hx",293);
			{
				HX_STACK_LINE(293)
				if (((__this->zpp_inner->wrap_includes == null()))){
					HX_STACK_LINE(293)
					__this->zpp_inner->setup_includes();
				}
				HX_STACK_LINE(293)
				return __this->zpp_inner->wrap_includes;
			}
			return null();
		}
	};
	HX_STACK_LINE(293)
	::String inc = (_Function_1_1::Block(this))->toString();		HX_STACK_VAR(inc,"inc");
	struct _Function_1_2{
		inline static ::nape::callbacks::CbTypeList Block( ::nape::callbacks::OptionType_obj *__this){
			HX_STACK_PUSH("*::closure","nape/callbacks/OptionType.hx",294);
			{
				HX_STACK_LINE(294)
				if (((__this->zpp_inner->wrap_excludes == null()))){
					HX_STACK_LINE(294)
					__this->zpp_inner->setup_excludes();
				}
				HX_STACK_LINE(294)
				return __this->zpp_inner->wrap_excludes;
			}
			return null();
		}
	};
	HX_STACK_LINE(294)
	::String exc = (_Function_1_2::Block(this))->toString();		HX_STACK_VAR(exc,"exc");
	HX_STACK_LINE(295)
	return ((((HX_CSTRING("@{") + inc) + HX_CSTRING(" excluding ")) + exc) + HX_CSTRING("}"));
}


HX_DEFINE_DYNAMIC_FUNC0(OptionType_obj,toString,return )

::nape::callbacks::OptionType OptionType_obj::excluding( Dynamic excludes){
	HX_STACK_PUSH("OptionType::excluding","nape/callbacks/OptionType.hx",285);
	HX_STACK_THIS(this);
	HX_STACK_ARG(excludes,"excludes");
	HX_STACK_LINE(286)
	this->zpp_inner->append(this->zpp_inner->excludes,excludes);
	HX_STACK_LINE(287)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(OptionType_obj,excluding,return )

::nape::callbacks::OptionType OptionType_obj::including( Dynamic includes){
	HX_STACK_PUSH("OptionType::including","nape/callbacks/OptionType.hx",267);
	HX_STACK_THIS(this);
	HX_STACK_ARG(includes,"includes");
	HX_STACK_LINE(268)
	this->zpp_inner->append(this->zpp_inner->includes,includes);
	HX_STACK_LINE(269)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(OptionType_obj,including,return )

::nape::callbacks::CbTypeList OptionType_obj::get_excludes( ){
	HX_STACK_PUSH("OptionType::get_excludes","nape/callbacks/OptionType.hx",228);
	HX_STACK_THIS(this);
	HX_STACK_LINE(229)
	if (((this->zpp_inner->wrap_excludes == null()))){
		HX_STACK_LINE(229)
		this->zpp_inner->setup_excludes();
	}
	HX_STACK_LINE(230)
	return this->zpp_inner->wrap_excludes;
}


HX_DEFINE_DYNAMIC_FUNC0(OptionType_obj,get_excludes,return )

::nape::callbacks::CbTypeList OptionType_obj::get_includes( ){
	HX_STACK_PUSH("OptionType::get_includes","nape/callbacks/OptionType.hx",214);
	HX_STACK_THIS(this);
	HX_STACK_LINE(215)
	if (((this->zpp_inner->wrap_includes == null()))){
		HX_STACK_LINE(215)
		this->zpp_inner->setup_includes();
	}
	HX_STACK_LINE(216)
	return this->zpp_inner->wrap_includes;
}


HX_DEFINE_DYNAMIC_FUNC0(OptionType_obj,get_includes,return )


OptionType_obj::OptionType_obj()
{
}

void OptionType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionType);
	HX_MARK_MEMBER_NAME(excludes,"excludes");
	HX_MARK_MEMBER_NAME(includes,"includes");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void OptionType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(excludes,"excludes");
	HX_VISIT_MEMBER_NAME(includes,"includes");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic OptionType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"excludes") ) { return inCallProp ? get_excludes() : excludes; }
		if (HX_FIELD_EQ(inName,"includes") ) { return inCallProp ? get_includes() : includes; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"excluding") ) { return excluding_dyn(); }
		if (HX_FIELD_EQ(inName,"including") ) { return including_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_excludes") ) { return get_excludes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_includes") ) { return get_includes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OptionType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"excludes") ) { excludes=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"includes") ) { includes=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::callbacks::ZPP_OptionType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("excludes"));
	outFields->push(HX_CSTRING("includes"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("excluding"),
	HX_CSTRING("including"),
	HX_CSTRING("get_excludes"),
	HX_CSTRING("excludes"),
	HX_CSTRING("get_includes"),
	HX_CSTRING("includes"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionType_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionType_obj::__mClass,"__mClass");
};

Class OptionType_obj::__mClass;

void OptionType_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.OptionType"), hx::TCanCast< OptionType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void OptionType_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
