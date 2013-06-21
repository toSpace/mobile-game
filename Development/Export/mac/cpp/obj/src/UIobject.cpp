#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Mobile
#include <Mobile.h>
#endif
#ifndef INCLUDED_UIobject
#include <UIobject.h>
#endif
#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_MouseEvent
#include <native/events/MouseEvent.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif

Void UIobject_obj::__construct(::String url,Float x,Float y,Dynamic __o_fixed)
{
HX_STACK_PUSH("UIobject::new","UIobject.hx",16);
Dynamic fixed = __o_fixed.Default(false);
{
	HX_STACK_LINE(18)
	if ((fixed)){
		HX_STACK_LINE(18)
		this->canvas = ::Main_obj::stage;
	}
	else{
		HX_STACK_LINE(20)
		this->canvas = ::Main_obj::canvas;
	}
	HX_STACK_LINE(24)
	this->asset = ::native::display::Bitmap_obj::__new(::nme::installer::Assets_obj::getBitmapData((::Mobile_obj::asset + url),null()),null(),null());
	HX_STACK_LINE(25)
	this->parent = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(27)
	this->parent->addChild(this->asset);
	HX_STACK_LINE(28)
	this->canvas->__Field(HX_CSTRING("addChild"),true)(this->parent);
	HX_STACK_LINE(31)
	this->parent->addEventListener(::native::events::Event_obj::ADDED_TO_STAGE,this->onAdded_dyn(),null(),null(),null());
	HX_STACK_LINE(32)
	this->parent->addEventListener(::native::events::MouseEvent_obj::CLICK,this->mouseClick_dyn(),null(),null(),null());
	HX_STACK_LINE(33)
	this->parent->addEventListener(::native::events::MouseEvent_obj::MOUSE_OVER,this->mouseOver_dyn(),null(),null(),null());
	HX_STACK_LINE(34)
	this->parent->addEventListener(::native::events::MouseEvent_obj::MOUSE_OUT,this->mouseOut_dyn(),null(),null(),null());
	HX_STACK_LINE(37)
	this->parent->set_x(x);
	HX_STACK_LINE(38)
	this->parent->set_y((::Mobile_obj::getY(this->asset) - y));
}
;
	return null();
}

UIobject_obj::~UIobject_obj() { }

Dynamic UIobject_obj::__CreateEmpty() { return  new UIobject_obj; }
hx::ObjectPtr< UIobject_obj > UIobject_obj::__new(::String url,Float x,Float y,Dynamic __o_fixed)
{  hx::ObjectPtr< UIobject_obj > result = new UIobject_obj();
	result->__construct(url,x,y,__o_fixed);
	return result;}

Dynamic UIobject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIobject_obj > result = new UIobject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void UIobject_obj::render( ){
{
		HX_STACK_PUSH("UIobject::render","UIobject.hx",47);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIobject_obj,render,(void))

Void UIobject_obj::mouseOut( ::native::events::MouseEvent ev){
{
		HX_STACK_PUSH("UIobject::mouseOut","UIobject.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ev,"ev");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIobject_obj,mouseOut,(void))

Void UIobject_obj::mouseOver( ::native::events::MouseEvent ev){
{
		HX_STACK_PUSH("UIobject::mouseOver","UIobject.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ev,"ev");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIobject_obj,mouseOver,(void))

Void UIobject_obj::mouseClick( ::native::events::MouseEvent ev){
{
		HX_STACK_PUSH("UIobject::mouseClick","UIobject.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ev,"ev");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIobject_obj,mouseClick,(void))

Void UIobject_obj::onAdded( ::native::events::Event ev){
{
		HX_STACK_PUSH("UIobject::onAdded","UIobject.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ev,"ev");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIobject_obj,onAdded,(void))


UIobject_obj::UIobject_obj()
{
}

void UIobject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIobject);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_END_CLASS();
}

void UIobject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(asset,"asset");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
}

Dynamic UIobject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onAdded") ) { return onAdded_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mouseOut") ) { return mouseOut_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseOver") ) { return mouseOver_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseClick") ) { return mouseClick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIobject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::native::display::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIobject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("asset"));
	outFields->push(HX_CSTRING("canvas"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("render"),
	HX_CSTRING("mouseOut"),
	HX_CSTRING("mouseOver"),
	HX_CSTRING("mouseClick"),
	HX_CSTRING("onAdded"),
	HX_CSTRING("parent"),
	HX_CSTRING("asset"),
	HX_CSTRING("canvas"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIobject_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIobject_obj::__mClass,"__mClass");
};

Class UIobject_obj::__mClass;

void UIobject_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("UIobject"), hx::TCanCast< UIobject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void UIobject_obj::__boot()
{
}

