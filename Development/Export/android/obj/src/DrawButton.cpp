#include <hxcpp.h>

#ifndef INCLUDED_DrawButton
#include <DrawButton.h>
#endif
#ifndef INCLUDED_Drawing
#include <Drawing.h>
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

Void DrawButton_obj::__construct()
{
HX_STACK_PUSH("DrawButton::new","DrawButton.hx",11);
{
	HX_STACK_LINE(12)
	super::__construct(HX_CSTRING("General/gui/button.png"),((::Mobile_obj::screenWidth - (int)44) - (int)10),(int)10,true);
	HX_STACK_LINE(14)
	this->asset_over = ::native::display::Bitmap_obj::__new(::nme::installer::Assets_obj::getBitmapData((::Mobile_obj::asset + HX_CSTRING("General/gui/button2.png")),null()),null(),null());
}
;
	return null();
}

DrawButton_obj::~DrawButton_obj() { }

Dynamic DrawButton_obj::__CreateEmpty() { return  new DrawButton_obj; }
hx::ObjectPtr< DrawButton_obj > DrawButton_obj::__new()
{  hx::ObjectPtr< DrawButton_obj > result = new DrawButton_obj();
	result->__construct();
	return result;}

Dynamic DrawButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawButton_obj > result = new DrawButton_obj();
	result->__construct();
	return result;}

Void DrawButton_obj::mouseClick( ::native::events::MouseEvent ev){
{
		HX_STACK_PUSH("DrawButton::mouseClick","DrawButton.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ev,"ev");
		HX_STACK_LINE(17)
		if ((::Drawing_obj::erasing)){
			HX_STACK_LINE(20)
			::Drawing_obj::erasing = false;
			HX_STACK_LINE(22)
			this->parent->removeChild(this->asset);
			HX_STACK_LINE(23)
			this->parent->addChild(this->asset_over);
		}
		else{
			HX_STACK_LINE(25)
			::Drawing_obj::erasing = true;
			HX_STACK_LINE(27)
			this->parent->removeChild(this->asset_over);
			HX_STACK_LINE(28)
			this->parent->addChild(this->asset);
		}
	}
return null();
}



DrawButton_obj::DrawButton_obj()
{
}

void DrawButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawButton);
	HX_MARK_MEMBER_NAME(asset_out,"asset_out");
	HX_MARK_MEMBER_NAME(asset_over,"asset_over");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DrawButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(asset_out,"asset_out");
	HX_VISIT_MEMBER_NAME(asset_over,"asset_over");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DrawButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"asset_out") ) { return asset_out; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseClick") ) { return mouseClick_dyn(); }
		if (HX_FIELD_EQ(inName,"asset_over") ) { return asset_over; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"asset_out") ) { asset_out=inValue.Cast< ::native::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"asset_over") ) { asset_over=inValue.Cast< ::native::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("asset_out"));
	outFields->push(HX_CSTRING("asset_over"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("mouseClick"),
	HX_CSTRING("asset_out"),
	HX_CSTRING("asset_over"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawButton_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawButton_obj::__mClass,"__mClass");
};

Class DrawButton_obj::__mClass;

void DrawButton_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("DrawButton"), hx::TCanCast< DrawButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DrawButton_obj::__boot()
{
}

