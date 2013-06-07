#include <hxcpp.h>

#ifndef INCLUDED_aze_display_TileBase
#include <aze/display/TileBase.h>
#endif
#ifndef INCLUDED_aze_display_TileGroup
#include <aze/display/TileGroup.h>
#endif
#ifndef INCLUDED_aze_display_TileLayer
#include <aze/display/TileLayer.h>
#endif
#ifndef INCLUDED_haxe_Public
#include <haxe/Public.h>
#endif
namespace aze{
namespace display{

Void TileBase_obj::__construct()
{
HX_STACK_PUSH("TileBase::new","aze/display/TileLayer.hx",162);
{
	HX_STACK_LINE(163)
	this->x = this->y = 0.0;
	HX_STACK_LINE(164)
	this->visible = true;
}
;
	return null();
}

TileBase_obj::~TileBase_obj() { }

Dynamic TileBase_obj::__CreateEmpty() { return  new TileBase_obj; }
hx::ObjectPtr< TileBase_obj > TileBase_obj::__new()
{  hx::ObjectPtr< TileBase_obj > result = new TileBase_obj();
	result->__construct();
	return result;}

Dynamic TileBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileBase_obj > result = new TileBase_obj();
	result->__construct();
	return result;}

hx::Object *TileBase_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::Public_obj)) return operator ::haxe::Public_obj *();
	return super::__ToInterface(inType);
}

Void TileBase_obj::step( int elapsed){
{
		HX_STACK_PUSH("TileBase::step","aze/display/TileLayer.hx",173);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsed,"elapsed");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileBase_obj,step,(void))

Void TileBase_obj::init( ::aze::display::TileLayer layer){
{
		HX_STACK_PUSH("TileBase::init","aze/display/TileLayer.hx",168);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer,"layer");
		HX_STACK_LINE(168)
		this->layer = layer;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileBase_obj,init,(void))


TileBase_obj::TileBase_obj()
{
}

void TileBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileBase);
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(animated,"animated");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_END_CLASS();
}

void TileBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(animated,"animated");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(layer,"layer");
}

Dynamic TileBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"animated") ) { return animated; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< ::aze::display::TileLayer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::aze::display::TileGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"animated") ) { animated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("animated"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("layer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("step"),
	HX_CSTRING("init"),
	HX_CSTRING("visible"),
	HX_CSTRING("animated"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("parent"),
	HX_CSTRING("layer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileBase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileBase_obj::__mClass,"__mClass");
};

Class TileBase_obj::__mClass;

void TileBase_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("aze.display.TileBase"), hx::TCanCast< TileBase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileBase_obj::__boot()
{
}

} // end namespace aze
} // end namespace display
