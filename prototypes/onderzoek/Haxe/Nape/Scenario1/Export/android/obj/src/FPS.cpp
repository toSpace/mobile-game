#include <hxcpp.h>

#ifndef INCLUDED_FPS
#include <FPS.h>
#endif
#ifndef INCLUDED_native_Lib
#include <native/Lib.h>
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
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
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
#ifndef INCLUDED_native_text_Font
#include <native/text/Font.h>
#endif
#ifndef INCLUDED_native_text_TextField
#include <native/text/TextField.h>
#endif
#ifndef INCLUDED_native_text_TextFormat
#include <native/text/TextFormat.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif

Void FPS_obj::__construct(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol)
{
HX_STACK_PUSH("FPS::new","FPS.hx",7);
Float inX = __o_inX.Default(10.0);
Float inY = __o_inY.Default(10.0);
int inCol = __o_inCol.Default(16777215);
{
	HX_STACK_LINE(10)
	this->nrParticles = (int)0;
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	this->set_x(inX);
	HX_STACK_LINE(16)
	this->set_y(inY);
	HX_STACK_LINE(17)
	this->set_selectable(false);
	HX_STACK_LINE(20)
	::native::text::Font font = ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/font.ttf"));		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(23)
	this->set_defaultTextFormat(::native::text::TextFormat_obj::__new(font->fontName,(int)40,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
	HX_STACK_LINE(26)
	this->set_text(HX_CSTRING("FPS:"));
	HX_STACK_LINE(27)
	this->set_textColor(inCol);
	HX_STACK_LINE(28)
	this->set_background(true);
	HX_STACK_LINE(29)
	this->set_backgroundColor((int)0);
	HX_STACK_LINE(30)
	this->set_width((int)240);
	HX_STACK_LINE(31)
	this->set_height((int)120);
	HX_STACK_LINE(32)
	this->times = Array_obj< Float >::__new();
	HX_STACK_LINE(33)
	this->addEventListener(::native::events::Event_obj::ENTER_FRAME,this->onEnter_dyn(),null(),null(),null());
}
;
	return null();
}

FPS_obj::~FPS_obj() { }

Dynamic FPS_obj::__CreateEmpty() { return  new FPS_obj; }
hx::ObjectPtr< FPS_obj > FPS_obj::__new(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol)
{  hx::ObjectPtr< FPS_obj > result = new FPS_obj();
	result->__construct(__o_inX,__o_inY,__o_inCol);
	return result;}

Dynamic FPS_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FPS_obj > result = new FPS_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool FPS_obj::add( ){
	HX_STACK_PUSH("FPS::add","FPS.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	(this->nrParticles)++;
	HX_STACK_LINE(53)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(FPS_obj,add,return )

Void FPS_obj::onEnter( Dynamic _){
{
		HX_STACK_PUSH("FPS::onEnter","FPS.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_,"_");
		HX_STACK_LINE(38)
		Float now = (Float(::native::Lib_obj::getTimer()) / Float((int)1000));		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(39)
		this->times->push(now);
		HX_STACK_LINE(40)
		while(((this->times->__get((int)0) < (now - (int)1)))){
			HX_STACK_LINE(41)
			this->times->shift();
		}
		HX_STACK_LINE(42)
		if ((this->get_visible())){
			HX_STACK_LINE(43)
			this->set_text((((((HX_CSTRING("FPS: ") + this->times->length) + HX_CSTRING("/")) + ::nme::Lib_obj::get_current()->get_stage()->frameRate) + HX_CSTRING("\nParticles: ")) + this->nrParticles));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FPS_obj,onEnter,(void))


FPS_obj::FPS_obj()
{
}

void FPS_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FPS);
	HX_MARK_MEMBER_NAME(nrParticles,"nrParticles");
	HX_MARK_MEMBER_NAME(times,"times");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FPS_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nrParticles,"nrParticles");
	HX_VISIT_MEMBER_NAME(times,"times");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FPS_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return times; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onEnter") ) { return onEnter_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nrParticles") ) { return nrParticles; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FPS_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nrParticles") ) { nrParticles=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FPS_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nrParticles"));
	outFields->push(HX_CSTRING("times"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("add"),
	HX_CSTRING("onEnter"),
	HX_CSTRING("nrParticles"),
	HX_CSTRING("times"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FPS_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FPS_obj::__mClass,"__mClass");
};

Class FPS_obj::__mClass;

void FPS_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("FPS"), hx::TCanCast< FPS_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FPS_obj::__boot()
{
}

