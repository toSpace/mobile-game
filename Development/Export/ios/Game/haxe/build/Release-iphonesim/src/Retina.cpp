#include <hxcpp.h>

#ifndef INCLUDED_Retina
#include <Retina.h>
#endif
#ifndef INCLUDED_native_system_Capabilities
#include <native/system/Capabilities.h>
#endif

Void Retina_obj::__construct()
{
	return null();
}

Retina_obj::~Retina_obj() { }

Dynamic Retina_obj::__CreateEmpty() { return  new Retina_obj; }
hx::ObjectPtr< Retina_obj > Retina_obj::__new()
{  hx::ObjectPtr< Retina_obj > result = new Retina_obj();
	result->__construct();
	return result;}

Dynamic Retina_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Retina_obj > result = new Retina_obj();
	result->__construct();
	return result;}

::String Retina_obj::asset;

::String Retina_obj::xml;

Float Retina_obj::screenDensity;

Void Retina_obj::setSizes( ){
{
		HX_STACK_PUSH("Retina::setSizes","Retina.hx",9);
		HX_STACK_LINE(11)
		::Retina_obj::xml = HX_CSTRING("assets/source/");
		HX_STACK_LINE(12)
		Float dpi = ::native::system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(dpi,"dpi");
		HX_STACK_LINE(14)
		if (((dpi < (int)200))){
			HX_STACK_LINE(15)
			::Retina_obj::screenDensity = (int)1;
			HX_STACK_LINE(16)
			::Retina_obj::asset = HX_CSTRING("assets/mobile-1x/");
		}
		else{
			HX_STACK_LINE(17)
			if (((dpi < (int)300))){
				HX_STACK_LINE(18)
				::Retina_obj::screenDensity = 1.5;
				HX_STACK_LINE(19)
				::Retina_obj::asset = HX_CSTRING("assets/mobile-1x/");
			}
			else{
				HX_STACK_LINE(21)
				::Retina_obj::screenDensity = (int)2;
				HX_STACK_LINE(22)
				::Retina_obj::asset = HX_CSTRING("assets/mobile-2x/");
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Retina_obj,setSizes,(void))

Float Retina_obj::sizeAdjustment( ){
	HX_STACK_PUSH("Retina::sizeAdjustment","Retina.hx",26);
	HX_STACK_LINE(26)
	return ::Retina_obj::screenDensity;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Retina_obj,sizeAdjustment,return )


Retina_obj::Retina_obj()
{
}

void Retina_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Retina);
	HX_MARK_END_CLASS();
}

void Retina_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Retina_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return xml; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setSizes") ) { return setSizes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"screenDensity") ) { return screenDensity; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sizeAdjustment") ) { return sizeAdjustment_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Retina_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { xml=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"screenDensity") ) { screenDensity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Retina_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("asset"),
	HX_CSTRING("xml"),
	HX_CSTRING("screenDensity"),
	HX_CSTRING("setSizes"),
	HX_CSTRING("sizeAdjustment"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Retina_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Retina_obj::asset,"asset");
	HX_MARK_MEMBER_NAME(Retina_obj::xml,"xml");
	HX_MARK_MEMBER_NAME(Retina_obj::screenDensity,"screenDensity");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Retina_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Retina_obj::asset,"asset");
	HX_VISIT_MEMBER_NAME(Retina_obj::xml,"xml");
	HX_VISIT_MEMBER_NAME(Retina_obj::screenDensity,"screenDensity");
};

Class Retina_obj::__mClass;

void Retina_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Retina"), hx::TCanCast< Retina_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Retina_obj::__boot()
{
}

