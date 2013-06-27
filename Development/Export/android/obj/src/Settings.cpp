#include <hxcpp.h>

#ifndef INCLUDED_Mobile
#include <Mobile.h>
#endif
#ifndef INCLUDED_Settings
#include <Settings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif

Void Settings_obj::__construct()
{
	return null();
}

Settings_obj::~Settings_obj() { }

Dynamic Settings_obj::__CreateEmpty() { return  new Settings_obj; }
hx::ObjectPtr< Settings_obj > Settings_obj::__new()
{  hx::ObjectPtr< Settings_obj > result = new Settings_obj();
	result->__construct();
	return result;}

Dynamic Settings_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Settings_obj > result = new Settings_obj();
	result->__construct();
	return result;}

Float Settings_obj::brushSize;

Float Settings_obj::flockSpeed;

Float Settings_obj::flockVelocity;

Float Settings_obj::cameraOverflow;

Float Settings_obj::paralaxDepth;

Void Settings_obj::load( ){
{
		HX_STACK_PUSH("Settings::load","Settings.hx",12);
		HX_STACK_LINE(14)
		::String xmlFile = ::openfl::Assets_obj::getText((::Mobile_obj::xml + HX_CSTRING("settings.xml")));		HX_STACK_VAR(xmlFile,"xmlFile");
		HX_STACK_LINE(15)
		::haxe::xml::Fast read = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(xmlFile));		HX_STACK_VAR(read,"read");
		HX_STACK_LINE(17)
		::haxe::xml::Fast settings = read->node->resolve(HX_CSTRING("settings"));		HX_STACK_VAR(settings,"settings");
		HX_STACK_LINE(19)
		::Settings_obj::brushSize = ::Std_obj::parseFloat(settings->node->resolve(HX_CSTRING("brushsize"))->get_innerData());
		HX_STACK_LINE(20)
		::Settings_obj::cameraOverflow = ::Std_obj::parseFloat(settings->node->resolve(HX_CSTRING("cameraoverflow"))->get_innerData());
		HX_STACK_LINE(21)
		::Settings_obj::flockSpeed = ::Std_obj::parseFloat(settings->node->resolve(HX_CSTRING("flockspeed"))->get_innerData());
		HX_STACK_LINE(22)
		::Settings_obj::flockVelocity = ::Std_obj::parseFloat(settings->node->resolve(HX_CSTRING("flockvelocity"))->get_innerData());
		HX_STACK_LINE(23)
		::Settings_obj::paralaxDepth = ::Std_obj::parseFloat(settings->node->resolve(HX_CSTRING("paralaxDepth"))->get_innerData());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Settings_obj,load,(void))


Settings_obj::Settings_obj()
{
}

void Settings_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Settings);
	HX_MARK_END_CLASS();
}

void Settings_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Settings_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"brushSize") ) { return brushSize; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flockSpeed") ) { return flockSpeed; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paralaxDepth") ) { return paralaxDepth; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"flockVelocity") ) { return flockVelocity; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cameraOverflow") ) { return cameraOverflow; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Settings_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"brushSize") ) { brushSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flockSpeed") ) { flockSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paralaxDepth") ) { paralaxDepth=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"flockVelocity") ) { flockVelocity=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cameraOverflow") ) { cameraOverflow=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Settings_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("brushSize"),
	HX_CSTRING("flockSpeed"),
	HX_CSTRING("flockVelocity"),
	HX_CSTRING("cameraOverflow"),
	HX_CSTRING("paralaxDepth"),
	HX_CSTRING("load"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Settings_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Settings_obj::brushSize,"brushSize");
	HX_MARK_MEMBER_NAME(Settings_obj::flockSpeed,"flockSpeed");
	HX_MARK_MEMBER_NAME(Settings_obj::flockVelocity,"flockVelocity");
	HX_MARK_MEMBER_NAME(Settings_obj::cameraOverflow,"cameraOverflow");
	HX_MARK_MEMBER_NAME(Settings_obj::paralaxDepth,"paralaxDepth");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Settings_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Settings_obj::brushSize,"brushSize");
	HX_VISIT_MEMBER_NAME(Settings_obj::flockSpeed,"flockSpeed");
	HX_VISIT_MEMBER_NAME(Settings_obj::flockVelocity,"flockVelocity");
	HX_VISIT_MEMBER_NAME(Settings_obj::cameraOverflow,"cameraOverflow");
	HX_VISIT_MEMBER_NAME(Settings_obj::paralaxDepth,"paralaxDepth");
};

Class Settings_obj::__mClass;

void Settings_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Settings"), hx::TCanCast< Settings_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Settings_obj::__boot()
{
}

