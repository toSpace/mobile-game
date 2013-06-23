#include <hxcpp.h>

#ifndef INCLUDED_Drawing
#include <Drawing.h>
#endif
#ifndef INCLUDED_LineDrawing
#include <LineDrawing.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif

Void Drawing_obj::__construct()
{
	return null();
}

Drawing_obj::~Drawing_obj() { }

Dynamic Drawing_obj::__CreateEmpty() { return  new Drawing_obj; }
hx::ObjectPtr< Drawing_obj > Drawing_obj::__new()
{  hx::ObjectPtr< Drawing_obj > result = new Drawing_obj();
	result->__construct();
	return result;}

Dynamic Drawing_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Drawing_obj > result = new Drawing_obj();
	result->__construct();
	return result;}

bool Drawing_obj::drawing;

bool Drawing_obj::erasing;

bool Drawing_obj::locked;

Float Drawing_obj::x;

Float Drawing_obj::y;

Dynamic Drawing_obj::drawList;

Void Drawing_obj::init( ){
{
		HX_STACK_PUSH("Drawing::init","Drawing.hx",23);
		HX_STACK_LINE(24)
		::Main_obj::canvas->addEventListener(::native::events::MouseEvent_obj::MOUSE_DOWN,::Drawing_obj::startDraw_dyn(),null(),null(),null());
		HX_STACK_LINE(25)
		::Main_obj::canvas->addEventListener(::native::events::MouseEvent_obj::MOUSE_MOVE,::Drawing_obj::checkDraw_dyn(),null(),null(),null());
		HX_STACK_LINE(26)
		::Main_obj::canvas->addEventListener(::native::events::MouseEvent_obj::MOUSE_UP,::Drawing_obj::stopDraw_dyn(),null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Drawing_obj,init,(void))

Void Drawing_obj::startDraw( ::native::events::MouseEvent e){
{
		HX_STACK_PUSH("Drawing::startDraw","Drawing.hx",29);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(30)
		::Drawing_obj::drawing = true;
		HX_STACK_LINE(32)
		::Drawing_obj::x = e->localX;
		HX_STACK_LINE(33)
		::Drawing_obj::y = e->localY;
		HX_STACK_LINE(36)
		if ((!(::Drawing_obj::locked))){
			HX_STACK_LINE(36)
			::LineDrawing newDrawing = ::LineDrawing_obj::__new(::Drawing_obj::x,::Drawing_obj::y);		HX_STACK_VAR(newDrawing,"newDrawing");
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Drawing_obj,startDraw,(void))

Void Drawing_obj::stopDraw( ::native::events::MouseEvent e){
{
		HX_STACK_PUSH("Drawing::stopDraw","Drawing.hx",41);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(41)
		::Drawing_obj::drawing = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Drawing_obj,stopDraw,(void))

Void Drawing_obj::checkDraw( ::native::events::MouseEvent e){
{
		HX_STACK_PUSH("Drawing::checkDraw","Drawing.hx",45);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(51)
		::Drawing_obj::x = e->localX;
		HX_STACK_LINE(52)
		::Drawing_obj::y = e->localY;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Drawing_obj,checkDraw,(void))

bool Drawing_obj::checkActive( ::nape::phys::Body b){
	HX_STACK_PUSH("Drawing::checkActive","Drawing.hx",55);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(56)
	bool active = false;		HX_STACK_VAR(active,"active");
	HX_STACK_LINE(57)
	::nape::geom::Vec2 mp = ::nape::geom::Vec2_obj::__new(::Drawing_obj::x,::Drawing_obj::y);		HX_STACK_VAR(mp,"mp");
	HX_STACK_LINE(58)
	::nape::phys::BodyList bodies = ::Main_obj::space->bodiesUnderPoint(mp,null(),null());		HX_STACK_VAR(bodies,"bodies");
	struct _Function_1_1{
		inline static int Block( ::nape::phys::BodyList &bodies){
			HX_STACK_PUSH("*::closure","Drawing.hx",60);
			{
				HX_STACK_LINE(60)
				bodies->zpp_inner->valmod();
				HX_STACK_LINE(60)
				if ((bodies->zpp_inner->zip_length)){
					HX_STACK_LINE(60)
					bodies->zpp_inner->zip_length = false;
					HX_STACK_LINE(60)
					bodies->zpp_inner->user_length = bodies->zpp_inner->inner->length;
				}
				HX_STACK_LINE(60)
				return bodies->zpp_inner->user_length;
			}
			return null();
		}
	};
	HX_STACK_LINE(60)
	if (((_Function_1_1::Block(bodies) > (int)0))){
		struct _Function_2_1{
			inline static int Block( ::nape::phys::BodyList &bodies){
				HX_STACK_PUSH("*::closure","Drawing.hx",61);
				{
					HX_STACK_LINE(61)
					bodies->zpp_inner->valmod();
					HX_STACK_LINE(61)
					if ((bodies->zpp_inner->zip_length)){
						HX_STACK_LINE(61)
						bodies->zpp_inner->zip_length = false;
						HX_STACK_LINE(61)
						bodies->zpp_inner->user_length = bodies->zpp_inner->inner->length;
					}
					HX_STACK_LINE(61)
					return bodies->zpp_inner->user_length;
				}
				return null();
			}
		};
		HX_STACK_LINE(61)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = _Function_2_1::Block(bodies);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		while(((_g1 < _g))){
			HX_STACK_LINE(61)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(63)
			::nape::phys::Body body = bodies->at(i);		HX_STACK_VAR(body,"body");
			HX_STACK_LINE(64)
			if (((body == b))){
				HX_STACK_LINE(64)
				active = true;
			}
		}
	}
	HX_STACK_LINE(70)
	return active;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Drawing_obj,checkActive,return )

bool Drawing_obj::mouseOver( Dynamic asset){
	HX_STACK_PUSH("Drawing::mouseOver","Drawing.hx",73);
	HX_STACK_ARG(asset,"asset");
	HX_STACK_LINE(73)
	return asset->__Field(HX_CSTRING("hitTestPoint"),true)(::Drawing_obj::x,::Drawing_obj::y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Drawing_obj,mouseOver,return )

Void Drawing_obj::addDrawObject( Dynamic asset){
{
		HX_STACK_PUSH("Drawing::addDrawObject","Drawing.hx",77);
		HX_STACK_ARG(asset,"asset");
		HX_STACK_LINE(77)
		::Drawing_obj::drawList->__Field(HX_CSTRING("push"),true)(asset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Drawing_obj,addDrawObject,(void))


Drawing_obj::Drawing_obj()
{
}

void Drawing_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Drawing);
	HX_MARK_END_CLASS();
}

void Drawing_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Drawing_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locked") ) { return locked; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		if (HX_FIELD_EQ(inName,"erasing") ) { return erasing; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawList") ) { return drawList; }
		if (HX_FIELD_EQ(inName,"stopDraw") ) { return stopDraw_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startDraw") ) { return startDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"checkDraw") ) { return checkDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseOver") ) { return mouseOver_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkActive") ) { return checkActive_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addDrawObject") ) { return addDrawObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Drawing_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locked") ) { locked=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"erasing") ) { erasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawList") ) { drawList=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Drawing_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("drawing"),
	HX_CSTRING("erasing"),
	HX_CSTRING("locked"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("drawList"),
	HX_CSTRING("init"),
	HX_CSTRING("startDraw"),
	HX_CSTRING("stopDraw"),
	HX_CSTRING("checkDraw"),
	HX_CSTRING("checkActive"),
	HX_CSTRING("mouseOver"),
	HX_CSTRING("addDrawObject"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Drawing_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Drawing_obj::drawing,"drawing");
	HX_MARK_MEMBER_NAME(Drawing_obj::erasing,"erasing");
	HX_MARK_MEMBER_NAME(Drawing_obj::locked,"locked");
	HX_MARK_MEMBER_NAME(Drawing_obj::x,"x");
	HX_MARK_MEMBER_NAME(Drawing_obj::y,"y");
	HX_MARK_MEMBER_NAME(Drawing_obj::drawList,"drawList");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Drawing_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Drawing_obj::drawing,"drawing");
	HX_VISIT_MEMBER_NAME(Drawing_obj::erasing,"erasing");
	HX_VISIT_MEMBER_NAME(Drawing_obj::locked,"locked");
	HX_VISIT_MEMBER_NAME(Drawing_obj::x,"x");
	HX_VISIT_MEMBER_NAME(Drawing_obj::y,"y");
	HX_VISIT_MEMBER_NAME(Drawing_obj::drawList,"drawList");
};

Class Drawing_obj::__mClass;

void Drawing_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Drawing"), hx::TCanCast< Drawing_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Drawing_obj::__boot()
{
	drawing= false;
	erasing= true;
	locked= false;
	drawList= Dynamic( Array_obj<Dynamic>::__new() );
}

