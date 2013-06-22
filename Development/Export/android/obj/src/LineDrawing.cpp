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
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif

Void LineDrawing_obj::__construct(Float x,Float y)
{
HX_STACK_PUSH("LineDrawing::new","LineDrawing.hx",13);
{
	HX_STACK_LINE(16)
	this->stopped = false;
	HX_STACK_LINE(20)
	this->stopped = false;
	HX_STACK_LINE(21)
	::Drawing_obj::locked = true;
	HX_STACK_LINE(24)
	this->drawing = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(27)
	if ((::Drawing_obj::erasing)){
		HX_STACK_LINE(27)
		this->drawing->get_graphics()->lineStyle(::Settings_obj::brushSize,(int)16711680,(int)1,true,null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(29)
		this->drawing->get_graphics()->lineStyle(::Settings_obj::brushSize,(int)0,0.5,true,null(),null(),null(),null());
	}
	HX_STACK_LINE(32)
	this->drawing->get_graphics()->moveTo(x,y);
	HX_STACK_LINE(34)
	::Main_obj::canvas->addChild(this->drawing);
	HX_STACK_LINE(36)
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

Void LineDrawing_obj::erase( ){
{
		HX_STACK_PUSH("LineDrawing::erase","LineDrawing.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Dynamic _g1 = ::Drawing_obj::drawList;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(93)
			while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(93)
				Dynamic object = _g1->__GetItem(_g);		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(93)
				++(_g);
				HX_STACK_LINE(94)
				if ((object->__Field(HX_CSTRING("inView"),true)())){
					HX_STACK_LINE(94)
					object->__Field(HX_CSTRING("erase"),true)(this->drawing);
				}
			}
		}
		HX_STACK_LINE(97)
		::Main_obj::canvas->removeChild(this->drawing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LineDrawing_obj,erase,(void))

Void LineDrawing_obj::draw( ){
{
		HX_STACK_PUSH("LineDrawing::draw","LineDrawing.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_LINE(70)
		::native::geom::Rectangle bounds = this->drawing->getBounds(::Main_obj::canvas);		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(73)
		::native::geom::Matrix matrix = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(74)
		matrix->tx = ((int)0 - bounds->x);
		HX_STACK_LINE(75)
		matrix->ty = ((int)0 - bounds->y);
		HX_STACK_LINE(76)
		::native::display::Bitmap bitmap = ::native::display::Bitmap_obj::__new(::native::display::BitmapData_obj::__new(::Std_obj::_int((bounds->width + bounds->x)),::Std_obj::_int((bounds->height + bounds->height)),true,(int)0,null()),null(),null());		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(77)
		bitmap->set_x(bounds->x);
		HX_STACK_LINE(78)
		bitmap->set_y(bounds->y);
		HX_STACK_LINE(80)
		::native::geom::ColorTransform color = ::native::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(81)
		color->alphaOffset = (int)255;
		HX_STACK_LINE(83)
		bitmap->bitmapData->draw(this->drawing,matrix,color,null(),null(),null());
		HX_STACK_LINE(86)
		::Main_obj::canvas->removeChild(this->drawing);
		HX_STACK_LINE(87)
		::DrawObject object = ::DrawObject_obj::__new(bitmap);		HX_STACK_VAR(object,"object");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LineDrawing_obj,draw,(void))

Void LineDrawing_obj::end( ){
{
		HX_STACK_PUSH("LineDrawing::end","LineDrawing.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_LINE(56)
		this->stopped = true;
		HX_STACK_LINE(58)
		if ((!(::Drawing_obj::erasing))){
			HX_STACK_LINE(58)
			this->draw();
		}
		else{
			HX_STACK_LINE(60)
			this->erase();
		}
		HX_STACK_LINE(65)
		::Drawing_obj::locked = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LineDrawing_obj,end,(void))

Void LineDrawing_obj::render( ){
{
		HX_STACK_PUSH("LineDrawing::render","LineDrawing.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_LINE(39)
		if ((::Drawing_obj::drawing)){
			HX_STACK_LINE(42)
			this->drawing->get_graphics()->lineTo(::Drawing_obj::x,::Drawing_obj::y);
		}
		else{
			HX_STACK_LINE(47)
			if ((!(this->stopped))){
				HX_STACK_LINE(48)
				this->end();
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
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
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
	HX_CSTRING("erase"),
	HX_CSTRING("draw"),
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

