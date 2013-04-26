#include <hxcpp.h>

#ifndef INCLUDED_Person
#include <Person.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_aze_display_SparrowTilesheet
#include <aze/display/SparrowTilesheet.h>
#endif
#ifndef INCLUDED_aze_display_TileBase
#include <aze/display/TileBase.h>
#endif
#ifndef INCLUDED_aze_display_TileClip
#include <aze/display/TileClip.h>
#endif
#ifndef INCLUDED_aze_display_TileGroup
#include <aze/display/TileGroup.h>
#endif
#ifndef INCLUDED_aze_display_TileLayer
#include <aze/display/TileLayer.h>
#endif
#ifndef INCLUDED_aze_display_TileSprite
#include <aze/display/TileSprite.h>
#endif
#ifndef INCLUDED_aze_display_TilesheetEx
#include <aze/display/TilesheetEx.h>
#endif
#ifndef INCLUDED_haxe_Public
#include <haxe/Public.h>
#endif
#ifndef INCLUDED_native_Lib
#include <native/Lib.h>
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
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Tilesheet
#include <native/display/Tilesheet.h>
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
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif

Void Person_obj::__construct()
{
HX_STACK_PUSH("Person::new","Person.hx",25);
{
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(29)
	::aze::display::SparrowTilesheet tilesheet = ::aze::display::SparrowTilesheet_obj::__new(::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/walking.png"),null()),::nme::installer::Assets_obj::getText(HX_CSTRING("assets/walking.xml")));		HX_STACK_VAR(tilesheet,"tilesheet");
	HX_STACK_LINE(32)
	this->layer = ::aze::display::TileLayer_obj::__new(tilesheet,null(),null());
	HX_STACK_LINE(34)
	this->clip = ::aze::display::TileClip_obj::__new(HX_CSTRING("walk"),(int)24);
	HX_STACK_LINE(35)
	this->layer->addChild(this->clip);
	HX_STACK_LINE(36)
	this->layer->useSmoothing = true;
	HX_STACK_LINE(39)
	this->clip->loop = true;
	HX_STACK_LINE(40)
	this->clip->x = (int)0;
	HX_STACK_LINE(41)
	this->clip->y = (int)0;
	HX_STACK_LINE(42)
	this->clip->play();
	HX_STACK_LINE(44)
	this->layer->render(null());
	HX_STACK_LINE(46)
	this->tLast = ::native::Lib_obj::getTimer();
	HX_STACK_LINE(47)
	this->addEventListener(::native::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
}
;
	return null();
}

Person_obj::~Person_obj() { }

Dynamic Person_obj::__CreateEmpty() { return  new Person_obj; }
hx::ObjectPtr< Person_obj > Person_obj::__new()
{  hx::ObjectPtr< Person_obj > result = new Person_obj();
	result->__construct();
	return result;}

Dynamic Person_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Person_obj > result = new Person_obj();
	result->__construct();
	return result;}

Float Person_obj::getHeight( ){
	HX_STACK_PUSH("Person::getHeight","Person.hx",67);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Float Block( ::Person_obj *__this){
			HX_STACK_PUSH("*::closure","Person.hx",68);
			{
				HX_STACK_LINE(68)
				::aze::display::TileClip _this = __this->clip;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(68)
				return (_this->size->height * _this->_scaleY);
			}
			return null();
		}
	};
	HX_STACK_LINE(67)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Person_obj,getHeight,return )

Float Person_obj::getWidth( ){
	HX_STACK_PUSH("Person::getWidth","Person.hx",63);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Float Block( ::Person_obj *__this){
			HX_STACK_PUSH("*::closure","Person.hx",64);
			{
				HX_STACK_LINE(64)
				::aze::display::TileClip _this = __this->clip;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(64)
				return (_this->size->width * _this->_scaleX);
			}
			return null();
		}
	};
	HX_STACK_LINE(63)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Person_obj,getWidth,return )

::native::display::Sprite Person_obj::view( ){
	HX_STACK_PUSH("Person::view","Person.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_LINE(59)
	return this->layer->view;
}


HX_DEFINE_DYNAMIC_FUNC0(Person_obj,view,return )

Void Person_obj::onEnterFrame( ::native::events::Event event){
{
		HX_STACK_PUSH("Person::onEnterFrame","Person.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(53)
		Float tDelta = (::native::Lib_obj::getTimer() - this->tLast);		HX_STACK_VAR(tDelta,"tDelta");
		HX_STACK_LINE(54)
		this->tLast = ::native::Lib_obj::getTimer();
		HX_STACK_LINE(55)
		this->layer->step(::Std_obj::_int(tDelta));
		HX_STACK_LINE(56)
		this->layer->render(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Person_obj,onEnterFrame,(void))


Person_obj::Person_obj()
{
}

void Person_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Person);
	HX_MARK_MEMBER_NAME(clip,"clip");
	HX_MARK_MEMBER_NAME(tLast,"tLast");
	HX_MARK_MEMBER_NAME(layer,"layer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Person_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clip,"clip");
	HX_VISIT_MEMBER_NAME(tLast,"tLast");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Person_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view_dyn(); }
		if (HX_FIELD_EQ(inName,"clip") ) { return clip; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tLast") ) { return tLast; }
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Person_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { clip=inValue.Cast< ::aze::display::TileClip >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tLast") ) { tLast=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< ::aze::display::TileLayer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Person_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("clip"));
	outFields->push(HX_CSTRING("tLast"));
	outFields->push(HX_CSTRING("layer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("view"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("clip"),
	HX_CSTRING("tLast"),
	HX_CSTRING("layer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Person_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Person_obj::__mClass,"__mClass");
};

Class Person_obj::__mClass;

void Person_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Person"), hx::TCanCast< Person_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Person_obj::__boot()
{
}

