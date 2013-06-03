#include <hxcpp.h>

#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif

Void Camera_obj::__construct()
{
	return null();
}

Camera_obj::~Camera_obj() { }

Dynamic Camera_obj::__CreateEmpty() { return  new Camera_obj; }
hx::ObjectPtr< Camera_obj > Camera_obj::__new()
{  hx::ObjectPtr< Camera_obj > result = new Camera_obj();
	result->__construct();
	return result;}

Dynamic Camera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Camera_obj > result = new Camera_obj();
	result->__construct();
	return result;}

Float Camera_obj::cameraSpeed;

Float Camera_obj::smoothing;

Float Camera_obj::targetX;

Float Camera_obj::targetY;

Float Camera_obj::currentX;

Float Camera_obj::currentY;

Void Camera_obj::reload( ){
{
		HX_STACK_PUSH("Camera::reload","Camera.hx",15);
		HX_STACK_LINE(17)
		::Camera_obj::setSpeed((int)0);
		HX_STACK_LINE(18)
		::Camera_obj::targetX = (int)0;
		HX_STACK_LINE(19)
		::Camera_obj::targetY = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,reload,(void))

Void Camera_obj::move( Float x,Float y,Dynamic __o_direct){
Dynamic direct = __o_direct.Default(false);
	HX_STACK_PUSH("Camera::move","Camera.hx",22);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(direct,"direct");
{
		HX_STACK_LINE(22)
		if ((direct)){
			HX_STACK_LINE(24)
			::Main_obj::canvas->set_x((x * (int)-1));
			HX_STACK_LINE(25)
			::Main_obj::canvas->set_y((y * (int)-1));
		}
		else{
			HX_STACK_LINE(27)
			::Camera_obj::targetX = (x * (int)-1);
			HX_STACK_LINE(28)
			::Camera_obj::targetY = (y * (int)-1);
			HX_STACK_LINE(29)
			::Camera_obj::currentX = ::Main_obj::canvas->get_x();
			HX_STACK_LINE(30)
			::Camera_obj::currentY = ::Main_obj::canvas->get_y();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Camera_obj,move,(void))

::native::geom::Point Camera_obj::getPosition( ){
	HX_STACK_PUSH("Camera::getPosition","Camera.hx",34);
	HX_STACK_LINE(34)
	return ::native::geom::Point_obj::__new(::Math_obj::abs(::Main_obj::canvas->get_x()),::Math_obj::abs(::Main_obj::canvas->get_y()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,getPosition,return )

Void Camera_obj::setSpeed( Float speed){
{
		HX_STACK_PUSH("Camera::setSpeed","Camera.hx",38);
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(39)
		if (((speed == (int)0))){
			HX_STACK_LINE(39)
			speed = (int)5;
		}
		HX_STACK_LINE(41)
		::Camera_obj::cameraSpeed = speed;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,setSpeed,(void))

Void Camera_obj::render( ){
{
		HX_STACK_PUSH("Camera::render","Camera.hx",44);
		HX_STACK_LINE(45)
		Float newX = ::Camera_obj::currentX;		HX_STACK_VAR(newX,"newX");
		HX_STACK_LINE(46)
		Float newY = ::Camera_obj::currentY;		HX_STACK_VAR(newY,"newY");
		HX_STACK_LINE(49)
		if (((::Math_obj::abs((::Camera_obj::targetX - ::Main_obj::canvas->get_x())) < ::Camera_obj::cameraSpeed))){
			HX_STACK_LINE(49)
			newX = ::Camera_obj::targetX;
		}
		else{
			HX_STACK_LINE(52)
			if (((::Camera_obj::targetX > ::Main_obj::canvas->get_x()))){
				HX_STACK_LINE(52)
				hx::AddEq(newX,::Camera_obj::cameraSpeed);
			}
			else{
				HX_STACK_LINE(54)
				hx::SubEq(newX,::Camera_obj::cameraSpeed);
			}
		}
		HX_STACK_LINE(59)
		if (((::Math_obj::abs((::Camera_obj::targetY - ::Main_obj::canvas->get_y())) < ::Camera_obj::cameraSpeed))){
			HX_STACK_LINE(59)
			newY = ::Camera_obj::targetY;
		}
		else{
			HX_STACK_LINE(62)
			if (((::Camera_obj::targetX > ::Main_obj::canvas->get_y()))){
				HX_STACK_LINE(62)
				hx::AddEq(newY,::Camera_obj::cameraSpeed);
			}
			else{
				HX_STACK_LINE(64)
				hx::SubEq(newY,::Camera_obj::cameraSpeed);
			}
		}
		HX_STACK_LINE(68)
		::Camera_obj::currentX = newX;
		HX_STACK_LINE(69)
		::Camera_obj::currentY = newY;
		HX_STACK_LINE(70)
		::Main_obj::canvas->set_x(::Camera_obj::smooth(newX,::Camera_obj::currentX));
		HX_STACK_LINE(71)
		::Main_obj::canvas->set_y(::Camera_obj::smooth(newX,::Camera_obj::currentY));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,render,(void))

Float Camera_obj::smooth( Float data,Float previous){
	HX_STACK_PUSH("Camera::smooth","Camera.hx",75);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(previous,"previous");
	HX_STACK_LINE(75)
	return ((data * (((int)1 - ::Camera_obj::smoothing))) + (previous * ::Camera_obj::smoothing));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Camera_obj,smooth,return )


Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Camera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetX") ) { return targetX; }
		if (HX_FIELD_EQ(inName,"targetY") ) { return targetY; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currentX") ) { return currentX; }
		if (HX_FIELD_EQ(inName,"currentY") ) { return currentY; }
		if (HX_FIELD_EQ(inName,"setSpeed") ) { return setSpeed_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraSpeed") ) { return cameraSpeed; }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Camera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"targetX") ) { targetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currentX") ) { currentX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentY") ) { currentY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraSpeed") ) { cameraSpeed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cameraSpeed"),
	HX_CSTRING("smoothing"),
	HX_CSTRING("targetX"),
	HX_CSTRING("targetY"),
	HX_CSTRING("currentX"),
	HX_CSTRING("currentY"),
	HX_CSTRING("reload"),
	HX_CSTRING("move"),
	HX_CSTRING("getPosition"),
	HX_CSTRING("setSpeed"),
	HX_CSTRING("render"),
	HX_CSTRING("smooth"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Camera_obj::cameraSpeed,"cameraSpeed");
	HX_MARK_MEMBER_NAME(Camera_obj::smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(Camera_obj::targetX,"targetX");
	HX_MARK_MEMBER_NAME(Camera_obj::targetY,"targetY");
	HX_MARK_MEMBER_NAME(Camera_obj::currentX,"currentX");
	HX_MARK_MEMBER_NAME(Camera_obj::currentY,"currentY");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Camera_obj::cameraSpeed,"cameraSpeed");
	HX_VISIT_MEMBER_NAME(Camera_obj::smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(Camera_obj::targetX,"targetX");
	HX_VISIT_MEMBER_NAME(Camera_obj::targetY,"targetY");
	HX_VISIT_MEMBER_NAME(Camera_obj::currentX,"currentX");
	HX_VISIT_MEMBER_NAME(Camera_obj::currentY,"currentY");
};

Class Camera_obj::__mClass;

void Camera_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Camera"), hx::TCanCast< Camera_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Camera_obj::__boot()
{
	smoothing= 0.5;
	targetX= (int)0;
	targetY= (int)0;
	currentX= (int)0;
	currentY= (int)0;
}

