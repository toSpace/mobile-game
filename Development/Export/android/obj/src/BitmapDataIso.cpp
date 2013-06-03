#include <hxcpp.h>

#ifndef INCLUDED_BitmapDataIso
#include <BitmapDataIso.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
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
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif

Void BitmapDataIso_obj::__construct(::native::display::BitmapData bitmap,hx::Null< Float >  __o_alphaThreshold)
{
HX_STACK_PUSH("BitmapDataIso::new","BitmapDataIso.hx",33);
Float alphaThreshold = __o_alphaThreshold.Default(128);
{
	HX_STACK_LINE(34)
	this->bitmap = bitmap;
	HX_STACK_LINE(35)
	this->alphaThreshold = alphaThreshold;
	HX_STACK_LINE(36)
	this->bounds = ::nape::geom::AABB_obj::__new((int)0,(int)0,bitmap->get_width(),bitmap->get_height());
}
;
	return null();
}

BitmapDataIso_obj::~BitmapDataIso_obj() { }

Dynamic BitmapDataIso_obj::__CreateEmpty() { return  new BitmapDataIso_obj; }
hx::ObjectPtr< BitmapDataIso_obj > BitmapDataIso_obj::__new(::native::display::BitmapData bitmap,hx::Null< Float >  __o_alphaThreshold)
{  hx::ObjectPtr< BitmapDataIso_obj > result = new BitmapDataIso_obj();
	result->__construct(bitmap,__o_alphaThreshold);
	return result;}

Dynamic BitmapDataIso_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapDataIso_obj > result = new BitmapDataIso_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float BitmapDataIso_obj::iso( Float x,Float y){
	HX_STACK_PUSH("BitmapDataIso::iso","BitmapDataIso.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(49)
	int ix = ::Std_obj::_int(x);		HX_STACK_VAR(ix,"ix");
	HX_STACK_LINE(49)
	int iy = ::Std_obj::_int(y);		HX_STACK_VAR(iy,"iy");
	HX_STACK_LINE(51)
	if (((ix < (int)0))){
		HX_STACK_LINE(51)
		ix = (int)0;
	}
	HX_STACK_LINE(51)
	if (((iy < (int)0))){
		HX_STACK_LINE(51)
		iy = (int)0;
	}
	HX_STACK_LINE(52)
	if (((ix >= this->bitmap->get_width()))){
		HX_STACK_LINE(52)
		ix = (this->bitmap->get_width() - (int)1);
	}
	HX_STACK_LINE(53)
	if (((iy >= this->bitmap->get_height()))){
		HX_STACK_LINE(53)
		iy = (this->bitmap->get_height() - (int)1);
	}
	HX_STACK_LINE(56)
	Float a11 = (this->alphaThreshold - (hx::UShr(this->bitmap->getPixel32(ix,iy),(int)24)));		HX_STACK_VAR(a11,"a11");
	HX_STACK_LINE(57)
	Float a12 = (this->alphaThreshold - (hx::UShr(this->bitmap->getPixel32((ix + (int)1),iy),(int)24)));		HX_STACK_VAR(a12,"a12");
	HX_STACK_LINE(58)
	Float a21 = (this->alphaThreshold - (hx::UShr(this->bitmap->getPixel32(ix,(iy + (int)1)),(int)24)));		HX_STACK_VAR(a21,"a21");
	HX_STACK_LINE(59)
	Float a22 = (this->alphaThreshold - (hx::UShr(this->bitmap->getPixel32((ix + (int)1),(iy + (int)1)),(int)24)));		HX_STACK_VAR(a22,"a22");
	HX_STACK_LINE(62)
	Float fx = (x - ix);		HX_STACK_VAR(fx,"fx");
	HX_STACK_LINE(62)
	Float fy = (y - iy);		HX_STACK_VAR(fy,"fy");
	HX_STACK_LINE(63)
	return (((((a11 * (((int)1 - fx))) * (((int)1 - fy))) + ((a12 * fx) * (((int)1 - fy)))) + ((a21 * (((int)1 - fx))) * fy)) + ((a22 * fx) * fy));
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapDataIso_obj,iso,return )

::native::display::Bitmap BitmapDataIso_obj::graphic( ){
	HX_STACK_PUSH("BitmapDataIso::graphic","BitmapDataIso.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_LINE(39)
	return ::native::display::Bitmap_obj::__new(this->bitmap,null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapDataIso_obj,graphic,return )


BitmapDataIso_obj::BitmapDataIso_obj()
{
}

void BitmapDataIso_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapDataIso);
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(alphaThreshold,"alphaThreshold");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_END_CLASS();
}

void BitmapDataIso_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(alphaThreshold,"alphaThreshold");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
}

Dynamic BitmapDataIso_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"iso") ) { return iso_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return graphic_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { return alphaThreshold; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapDataIso_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::nape::geom::AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::native::display::BitmapData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alphaThreshold") ) { alphaThreshold=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapDataIso_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("alphaThreshold"));
	outFields->push(HX_CSTRING("bitmap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("iso"),
	HX_CSTRING("graphic"),
	HX_CSTRING("bounds"),
	HX_CSTRING("alphaThreshold"),
	HX_CSTRING("bitmap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapDataIso_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapDataIso_obj::__mClass,"__mClass");
};

Class BitmapDataIso_obj::__mClass;

void BitmapDataIso_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("BitmapDataIso"), hx::TCanCast< BitmapDataIso_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BitmapDataIso_obj::__boot()
{
}

