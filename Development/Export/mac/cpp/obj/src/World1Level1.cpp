#include <hxcpp.h>

#ifndef INCLUDED_Level
#include <Level.h>
#endif
#ifndef INCLUDED_World1Level1
#include <World1Level1.h>
#endif

Void World1Level1_obj::__construct()
{
HX_STACK_PUSH("World1Level1::new","World1Level1.hx",1);
{
	HX_STACK_LINE(1)
	super::__construct();
}
;
	return null();
}

World1Level1_obj::~World1Level1_obj() { }

Dynamic World1Level1_obj::__CreateEmpty() { return  new World1Level1_obj; }
hx::ObjectPtr< World1Level1_obj > World1Level1_obj::__new()
{  hx::ObjectPtr< World1Level1_obj > result = new World1Level1_obj();
	result->__construct();
	return result;}

Dynamic World1Level1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< World1Level1_obj > result = new World1Level1_obj();
	result->__construct();
	return result;}

Void World1Level1_obj::loadLevel( ){
{
		HX_STACK_PUSH("World1Level1::loadLevel","World1Level1.hx",3);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3)
		this->start();
	}
return null();
}



World1Level1_obj::World1Level1_obj()
{
}

void World1Level1_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(World1Level1);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void World1Level1_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic World1Level1_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"loadLevel") ) { return loadLevel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic World1Level1_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void World1Level1_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadLevel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(World1Level1_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(World1Level1_obj::__mClass,"__mClass");
};

Class World1Level1_obj::__mClass;

void World1Level1_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("World1Level1"), hx::TCanCast< World1Level1_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void World1Level1_obj::__boot()
{
}

