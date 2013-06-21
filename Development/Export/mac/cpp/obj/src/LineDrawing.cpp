#include <hxcpp.h>

#ifndef INCLUDED_DrawObject
#include <DrawObject.h>
#endif
#ifndef INCLUDED_Drawing
#include <Drawing.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_LineDrawing
#include <LineDrawing.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_RenderManager
#include <RenderManager.h>
#endif
#ifndef INCLUDED_Settings
#include <Settings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_BlendMode
#include <native/display/BlendMode.h>
#endif
#ifndef INCLUDED_native_display_CapsStyle
#include <native/display/CapsStyle.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_JointStyle
#include <native/display/JointStyle.h>
#endif
#ifndef INCLUDED_native_display_LineScaleMode
#include <native/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
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
#ifndef INCLUDED_native_geom_ColorTransform
#include <native/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif

Void LineDrawing_obj::__construct(Float x,Float y)
{
HX_STACK_PUSH("LineDrawing::new","LineDrawing.hx",12);
{
	HX_STACK_LINE(15)
	this->stopped = false;
	HX_STACK_LINE(19)
	this->stopped = false;
	HX_STACK_LINE(22)
	this->drawing = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(25)
	this->drawing->get_graphics()->lineStyle(::Settings_obj::brushSize,(int)0,(int)1,true,null(),null(),null(),null());
	HX_STACK_LINE(26)
	this->drawing->get_graphics()->moveTo(x,y);
	HX_STACK_LINE(28)
	::Main_obj::canvas->addChild(this->drawing);
	HX_STACK_LINE(30)
	::RenderManager_obj::add(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

LineDrawing_obj::~LineDrawing_obj() { }

Dynamic LineDrawing_obj::__CreateEmpty() { return  new LineDrawing_obj; }
hx::ObjectPtr< LineDrawing_obj > LineDrawing_obj::__new(Float x,Float y)
{  hx::ObjectPtr< LineDrawing_obj > result = new LineDrawing_obj();
	result->__construct(x,y);
	return result;}

Dynamic LineDrawing_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineDrawing_obj > result = new LineDrawing_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void LineDrawing_obj::end( ){
{
		HX_STACK_PUSH("LineDrawing::end","LineDrawing.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_LINE(53)
		this->stopped = true;
		HX_STACK_LINE(55)
		::native::geom::Rectangle bounds = this->drawing->getBounds(::Main_obj::canvas);		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(58)
		::native::geom::Matrix matrix = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(59)
		matrix->tx = ((int)0 - bounds->x);
		HX_STACK_LINE(60)
		matrix->ty = ((int)0 - bounds->y);
		HX_STACK_LINE(61)
		::native::display::Bitmap bitmap = ::native::display::Bitmap_obj::__new(::native::display::BitmapData_obj::__new(::Std_obj::_int((bounds->width + bounds->x)),::Std_obj::_int((bounds->height + bounds->height)),true,(int)0,null()),null(),null());		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(62)
		bitmap->set_x(bounds->x);
		HX_STACK_LINE(63)
		bitmap->set_y(bounds->y);
		HX_STACK_LINE(65)
		bitmap->bitmapData->draw(this->drawing,matrix,null(),null(),null(),null());
		HX_STACK_LINE(68)
		::Main_obj::canvas->removeChild(this->drawing);
		HX_STACK_LINE(69)
		::DrawObject object = ::DrawObject_obj::__new(bitmap);		HX_STACK_VAR(object,"object");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LineDrawing_obj,end,(void))

Void LineDrawing_obj::render( ){
{
		HX_STACK_PUSH("LineDrawing::render","LineDrawing.hx",33);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		if ((!(::Drawing_obj::erasing))){
			HX_STACK_LINE(36)
			if ((::Drawing_obj::drawing)){
				HX_STACK_LINE(39)
				::native::geom::Point point = ::Main_obj::canvas->globalToLocal(::native::geom::Point_obj::__new(::Drawing_obj::x,::Drawing_obj::y));		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(40)
				this->drawing->get_graphics()->lineTo(point->x,point->y);
			}
			else{
				HX_STACK_LINE(43)
				if ((!(this->stopped))){
					HX_STACK_LINE(44)
					this->end();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LineDrawing_obj,render,(void))


LineDrawing_obj::LineDrawing_obj()
{
}

void LineDrawing_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineDrawing);
	HX_MARK_MEMBER_NAME(stopped,"stopped");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_END_CLASS();
}

void LineDrawing_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stopped,"stopped");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
}

Dynamic LineDrawing_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stopped") ) { return stopped; }
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LineDrawing_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"stopped") ) { stopped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< ::native::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LineDrawing_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stopped"));
	outFields->push(HX_CSTRING("drawing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("end"),
	HX_CSTRING("render"),
	HX_CSTRING("stopped"),
	HX_CSTRING("drawing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineDrawing_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineDrawing_obj::__mClass,"__mClass");
};

Class LineDrawing_obj::__mClass;

void LineDrawing_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("LineDrawing"), hx::TCanCast< LineDrawing_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LineDrawing_obj::__boot()
{
}

