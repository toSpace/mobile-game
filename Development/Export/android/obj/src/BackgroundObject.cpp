#include <hxcpp.h>

#ifndef INCLUDED_BackgroundObject
#include <BackgroundObject.h>
#endif
#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Mobile
#include <Mobile.h>
#endif
#ifndef INCLUDED_RenderManager
#include <RenderManager.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
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
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif

Void BackgroundObject_obj::__construct(::String xmlUrl)
{
HX_STACK_PUSH("BackgroundObject::new","BackgroundObject.hx",20);
{
	HX_STACK_LINE(22)
	this->canvas = ::Main_obj::canvas;
	HX_STACK_LINE(25)
	this->xml = this->readXml(xmlUrl);
	HX_STACK_LINE(28)
	this->asset = ::native::display::Bitmap_obj::__new(::nme::installer::Assets_obj::getBitmapData(this->xml->get(HX_CSTRING("img")),null()),null(),null());
	HX_STACK_LINE(29)
	this->asset->set_x(this->xml->get(HX_CSTRING("x")));
	HX_STACK_LINE(30)
	this->x = this->asset->get_x();
	HX_STACK_LINE(31)
	this->asset->set_y((::Mobile_obj::getY(this->asset) - this->xml->get(HX_CSTRING("y"))));
	HX_STACK_LINE(32)
	this->setBlendmode(this->xml->get(HX_CSTRING("blendmode")));
	HX_STACK_LINE(33)
	this->canvas->addChild(this->asset);
	HX_STACK_LINE(36)
	this->speed = this->xml->get(HX_CSTRING("speed"));
	HX_STACK_LINE(37)
	this->startX = this->xml->get(HX_CSTRING("startX"));
	HX_STACK_LINE(40)
	::RenderManager_obj::add(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

BackgroundObject_obj::~BackgroundObject_obj() { }

Dynamic BackgroundObject_obj::__CreateEmpty() { return  new BackgroundObject_obj; }
hx::ObjectPtr< BackgroundObject_obj > BackgroundObject_obj::__new(::String xmlUrl)
{  hx::ObjectPtr< BackgroundObject_obj > result = new BackgroundObject_obj();
	result->__construct(xmlUrl);
	return result;}

Dynamic BackgroundObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackgroundObject_obj > result = new BackgroundObject_obj();
	result->__construct(inArgs[0]);
	return result;}

Void BackgroundObject_obj::setBlendmode( ::String mode){
{
		HX_STACK_PUSH("BackgroundObject::setBlendmode","BackgroundObject.hx",75);
		HX_STACK_THIS(this);
		HX_STACK_ARG(mode,"mode");
		HX_STACK_LINE(75)
		::String _switch_1 = (mode);
		if (  ( _switch_1==HX_CSTRING("none"))){
		}
		else if (  ( _switch_1==HX_CSTRING("add"))){
			HX_STACK_LINE(80)
			this->asset->set_blendMode(::native::display::BlendMode_obj::ADD_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("alpha"))){
			HX_STACK_LINE(82)
			this->asset->set_blendMode(::native::display::BlendMode_obj::ALPHA_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("darken"))){
			HX_STACK_LINE(84)
			this->asset->set_blendMode(::native::display::BlendMode_obj::DARKEN_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("difference"))){
			HX_STACK_LINE(86)
			this->asset->set_blendMode(::native::display::BlendMode_obj::DIFFERENCE_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("erase"))){
			HX_STACK_LINE(88)
			this->asset->set_blendMode(::native::display::BlendMode_obj::ERASE_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("hardlight"))){
			HX_STACK_LINE(90)
			this->asset->set_blendMode(::native::display::BlendMode_obj::HARDLIGHT_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("invert"))){
			HX_STACK_LINE(92)
			this->asset->set_blendMode(::native::display::BlendMode_obj::INVERT_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("layer"))){
			HX_STACK_LINE(94)
			this->asset->set_blendMode(::native::display::BlendMode_obj::LAYER_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("lighten"))){
			HX_STACK_LINE(96)
			this->asset->set_blendMode(::native::display::BlendMode_obj::LIGHTEN_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("multiply"))){
			HX_STACK_LINE(98)
			this->asset->set_blendMode(::native::display::BlendMode_obj::MULTIPLY_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("normal"))){
			HX_STACK_LINE(100)
			this->asset->set_blendMode(::native::display::BlendMode_obj::NORMAL_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("overlay"))){
			HX_STACK_LINE(102)
			this->asset->set_blendMode(::native::display::BlendMode_obj::OVERLAY_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("screen"))){
			HX_STACK_LINE(104)
			this->asset->set_blendMode(::native::display::BlendMode_obj::SCREEN_dyn());
		}
		else if (  ( _switch_1==HX_CSTRING("shader"))){
		}
		else if (  ( _switch_1==HX_CSTRING("subtract"))){
			HX_STACK_LINE(110)
			this->asset->set_blendMode(::native::display::BlendMode_obj::SUBTRACT_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundObject_obj,setBlendmode,(void))

Void BackgroundObject_obj::paralax( ){
{
		HX_STACK_PUSH("BackgroundObject::paralax","BackgroundObject.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_LINE(66)
		Float cameraPos = ::Camera_obj::getPosition()->x;		HX_STACK_VAR(cameraPos,"cameraPos");
		HX_STACK_LINE(67)
		Float delta;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(69)
		delta = (this->x - cameraPos);
		HX_STACK_LINE(70)
		hx::MultEq(delta,this->speed);
		HX_STACK_LINE(72)
		this->asset->set_x((this->x - delta));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundObject_obj,paralax,(void))

Void BackgroundObject_obj::render( ){
{
		HX_STACK_PUSH("BackgroundObject::render","BackgroundObject.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_LINE(60)
		this->paralax();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundObject_obj,render,(void))

::Hash BackgroundObject_obj::readXml( ::String url){
	HX_STACK_PUSH("BackgroundObject::readXml","BackgroundObject.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_ARG(url,"url");
	HX_STACK_LINE(44)
	::Hash p = ::Hash_obj::__new();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(45)
	::String xmlFile = ::nme::installer::Assets_obj::getText((::Mobile_obj::xml + url));		HX_STACK_VAR(xmlFile,"xmlFile");
	HX_STACK_LINE(46)
	::haxe::xml::Fast read = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(xmlFile));		HX_STACK_VAR(read,"read");
	HX_STACK_LINE(48)
	::haxe::xml::Fast asset = read->node->resolve(HX_CSTRING("asset"));		HX_STACK_VAR(asset,"asset");
	HX_STACK_LINE(49)
	p->set(HX_CSTRING("img"),(::Mobile_obj::asset + asset->node->resolve(HX_CSTRING("img"))->getInnerData()));
	HX_STACK_LINE(50)
	p->set(HX_CSTRING("x"),asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("x")));
	HX_STACK_LINE(51)
	p->set(HX_CSTRING("y"),asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("y")));
	HX_STACK_LINE(52)
	p->set(HX_CSTRING("blendmode"),asset->node->resolve(HX_CSTRING("blendmode"))->getInnerData());
	HX_STACK_LINE(53)
	p->set(HX_CSTRING("speed"),asset->node->resolve(HX_CSTRING("paralax"))->getInnerData());
	HX_STACK_LINE(54)
	p->set(HX_CSTRING("startX"),asset->node->resolve(HX_CSTRING("paralax"))->att->resolve(HX_CSTRING("startX")));
	HX_STACK_LINE(55)
	p->set(HX_CSTRING("endX"),asset->node->resolve(HX_CSTRING("paralax"))->att->resolve(HX_CSTRING("endX")));
	HX_STACK_LINE(57)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundObject_obj,readXml,return )


BackgroundObject_obj::BackgroundObject_obj()
{
}

void BackgroundObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BackgroundObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(startX,"startX");
	HX_MARK_MEMBER_NAME(xml,"xml");
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_END_CLASS();
}

void BackgroundObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(startX,"startX");
	HX_VISIT_MEMBER_NAME(xml,"xml");
	HX_VISIT_MEMBER_NAME(asset,"asset");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
}

Dynamic BackgroundObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return xml; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"startX") ) { return startX; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"paralax") ) { return paralax_dyn(); }
		if (HX_FIELD_EQ(inName,"readXml") ) { return readXml_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setBlendmode") ) { return setBlendmode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BackgroundObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { xml=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::native::display::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"startX") ) { startX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::native::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackgroundObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("startX"));
	outFields->push(HX_CSTRING("xml"));
	outFields->push(HX_CSTRING("asset"));
	outFields->push(HX_CSTRING("canvas"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setBlendmode"),
	HX_CSTRING("paralax"),
	HX_CSTRING("render"),
	HX_CSTRING("readXml"),
	HX_CSTRING("x"),
	HX_CSTRING("speed"),
	HX_CSTRING("startX"),
	HX_CSTRING("xml"),
	HX_CSTRING("asset"),
	HX_CSTRING("canvas"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackgroundObject_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackgroundObject_obj::__mClass,"__mClass");
};

Class BackgroundObject_obj::__mClass;

void BackgroundObject_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("BackgroundObject"), hx::TCanCast< BackgroundObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BackgroundObject_obj::__boot()
{
}

