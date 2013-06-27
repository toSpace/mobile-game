#include <hxcpp.h>

#ifndef INCLUDED_Garbage
#include <Garbage.h>
#endif

Void Garbage_obj::__construct()
{
	return null();
}

Garbage_obj::~Garbage_obj() { }

Dynamic Garbage_obj::__CreateEmpty() { return  new Garbage_obj; }
hx::ObjectPtr< Garbage_obj > Garbage_obj::__new()
{  hx::ObjectPtr< Garbage_obj > result = new Garbage_obj();
	result->__construct();
	return result;}

Dynamic Garbage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Garbage_obj > result = new Garbage_obj();
	result->__construct();
	return result;}

Dynamic Garbage_obj::garbageList;

Void Garbage_obj::add( Dynamic element){
{
		HX_STACK_PUSH("Garbage::add","Garbage.hx",6);
		HX_STACK_ARG(element,"element");
		HX_STACK_LINE(6)
		::Garbage_obj::garbageList->__Field(HX_CSTRING("push"),true)(element);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Garbage_obj,add,(void))

Void Garbage_obj::clean( ){
{
		HX_STACK_PUSH("Garbage::clean","Garbage.hx",10);
		HX_STACK_LINE(12)
		{
			HX_STACK_LINE(12)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Dynamic _g1 = ::Garbage_obj::garbageList;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(12)
			while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(12)
				Dynamic object = _g1->__GetItem(_g);		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(12)
				++(_g);
				HX_STACK_LINE(13)
				object = null();
			}
		}
		HX_STACK_LINE(16)
		::Garbage_obj::clearList();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Garbage_obj,clean,(void))

Void Garbage_obj::clearList( ){
{
		HX_STACK_PUSH("Garbage::clearList","Garbage.hx",19);
		HX_STACK_LINE(19)
		::Garbage_obj::garbageList = Dynamic( Array_obj<Dynamic>::__new() );
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Garbage_obj,clearList,(void))


Garbage_obj::Garbage_obj()
{
}

void Garbage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Garbage);
	HX_MARK_END_CLASS();
}

void Garbage_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Garbage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clean") ) { return clean_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearList") ) { return clearList_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"garbageList") ) { return garbageList; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Garbage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"garbageList") ) { garbageList=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Garbage_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("garbageList"),
	HX_CSTRING("add"),
	HX_CSTRING("clean"),
	HX_CSTRING("clearList"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Garbage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Garbage_obj::garbageList,"garbageList");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Garbage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Garbage_obj::garbageList,"garbageList");
};

Class Garbage_obj::__mClass;

void Garbage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Garbage"), hx::TCanCast< Garbage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Garbage_obj::__boot()
{
	garbageList= Dynamic( Array_obj<Dynamic>::__new() );
}

