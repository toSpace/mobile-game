#include <hxcpp.h>

#ifndef INCLUDED_BackgroundObject
#include <BackgroundObject.h>
#endif
#ifndef INCLUDED_Camera
#include <Camera.h>
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
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif

Void BackgroundObject_obj::__construct(::String xmlUrl)
{
HX_STACK_PUSH("BackgroundObject::new","BackgroundObject.hx",29);
{
	HX_STACK_LINE(31)
	this->canvas = ::Main_obj::canvas;
	HX_STACK_LINE(34)
	this->readXml(xmlUrl);
	HX_STACK_LINE(37)
	this->asset = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(this->_imgPath,null()),null(),null());
	HX_STACK_LINE(38)
	this->asset->set_x(this->_x);
	HX_STACK_LINE(39)
	this->x = this->asset->get_x();
	HX_STACK_LINE(40)
	this->asset->set_y((::Mobile_obj::getY(this->asset) - this->_y));
	HX_STACK_LINE(41)
	this->setBlendmode(this->_blendmode);
	HX_STACK_LINE(42)
	this->canvas->addChild(this->asset);
	HX_STACK_LINE(45)
	this->speed = this->_speed;
	HX_STACK_LINE(46)
	this->startX = this->_startX;
	HX_STACK_LINE(49)
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
		HX_STACK_PUSH("BackgroundObject::setBlendmode","BackgroundObject.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_ARG(mode,"mode");
		HX_STACK_LINE(84)
		::String _switch_1 = (mode);
		if (  ( _switch_1==HX_CSTRING("none"))){
		}
		else if (  ( _switch_1==HX_CSTRING("add"))){
			HX_STACK_LINE(89)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::ADD);
		}
		else if (  ( _switch_1==HX_CSTRING("alpha"))){
			HX_STACK_LINE(91)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::ALPHA);
		}
		else if (  ( _switch_1==HX_CSTRING("darken"))){
			HX_STACK_LINE(93)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::DARKEN);
		}
		else if (  ( _switch_1==HX_CSTRING("difference"))){
			HX_STACK_LINE(95)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::DIFFERENCE);
		}
		else if (  ( _switch_1==HX_CSTRING("erase"))){
			HX_STACK_LINE(97)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::ERASE);
		}
		else if (  ( _switch_1==HX_CSTRING("hardlight"))){
			HX_STACK_LINE(99)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::HARDLIGHT);
		}
		else if (  ( _switch_1==HX_CSTRING("invert"))){
			HX_STACK_LINE(101)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::INVERT);
		}
		else if (  ( _switch_1==HX_CSTRING("layer"))){
			HX_STACK_LINE(103)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::LAYER);
		}
		else if (  ( _switch_1==HX_CSTRING("lighten"))){
			HX_STACK_LINE(105)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::LIGHTEN);
		}
		else if (  ( _switch_1==HX_CSTRING("multiply"))){
			HX_STACK_LINE(107)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::MULTIPLY);
		}
		else if (  ( _switch_1==HX_CSTRING("normal"))){
			HX_STACK_LINE(109)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::NORMAL);
		}
		else if (  ( _switch_1==HX_CSTRING("overlay"))){
			HX_STACK_LINE(111)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::OVERLAY);
		}
		else if (  ( _switch_1==HX_CSTRING("screen"))){
			HX_STACK_LINE(113)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::SCREEN);
		}
		else if (  ( _switch_1==HX_CSTRING("shader"))){
		}
		else if (  ( _switch_1==HX_CSTRING("subtract"))){
			HX_STACK_LINE(119)
			this->asset->set_blendMode(::flash::display::BlendMode_obj::SUBTRACT);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundObject_obj,setBlendmode,(void))

Void BackgroundObject_obj::paralax( ){
{
		HX_STACK_PUSH("BackgroundObject::paralax","BackgroundObject.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_LINE(75)
		Float cameraPos = ::Camera_obj::getPosition()->x;		HX_STACK_VAR(cameraPos,"cameraPos");
		HX_STACK_LINE(76)
		Float delta;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(78)
		delta = (this->x - cameraPos);
		HX_STACK_LINE(79)
		hx::MultEq(delta,this->speed);
		HX_STACK_LINE(81)
		this->asset->set_x(::Math_obj::ceil((this->x - delta)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundObject_obj,paralax,(void))

Void BackgroundObject_obj::render( ){
{
		HX_STACK_PUSH("BackgroundObject::render","BackgroundObject.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_LINE(69)
		this->paralax();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundObject_obj,render,(void))

Void BackgroundObject_obj::readXml( ::String url){
{
		HX_STACK_PUSH("BackgroundObject::readXml","BackgroundObject.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(url,"url");
		HX_STACK_LINE(54)
		::String xmlFile = ::openfl::Assets_obj::getText((::Mobile_obj::xml + url));		HX_STACK_VAR(xmlFile,"xmlFile");
		HX_STACK_LINE(55)
		::haxe::xml::Fast read = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(xmlFile));		HX_STACK_VAR(read,"read");
		HX_STACK_LINE(57)
		::haxe::xml::Fast asset = read->node->resolve(HX_CSTRING("asset"));		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(58)
		this->_imgPath = (::Mobile_obj::asset + asset->node->resolve(HX_CSTRING("img"))->get_innerData());
		HX_STACK_LINE(59)
		this->_x = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("x")));
		HX_STACK_LINE(60)
		this->_y = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("pos"))->att->resolve(HX_CSTRING("y")));
		HX_STACK_LINE(61)
		this->_blendmode = asset->node->resolve(HX_CSTRING("blendmode"))->get_innerData();
		HX_STACK_LINE(62)
		this->_speed = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("paralax"))->get_innerData());
		HX_STACK_LINE(63)
		this->_startX = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("paralax"))->att->resolve(HX_CSTRING("startX")));
		HX_STACK_LINE(64)
		this->_endX = ::Std_obj::parseFloat(asset->node->resolve(HX_CSTRING("paralax"))->att->resolve(HX_CSTRING("endX")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundObject_obj,readXml,(void))


BackgroundObject_obj::BackgroundObject_obj()
{
}

void BackgroundObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BackgroundObject);
	HX_MARK_MEMBER_NAME(_endX,"_endX");
	HX_MARK_MEMBER_NAME(_startX,"_startX");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_blendmode,"_blendmode");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_imgPath,"_imgPath");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(startX,"startX");
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_END_CLASS();
}

void BackgroundObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_endX,"_endX");
	HX_VISIT_MEMBER_NAME(_startX,"_startX");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_blendmode,"_blendmode");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_imgPath,"_imgPath");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(startX,"startX");
	HX_VISIT_MEMBER_NAME(asset,"asset");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
}

Dynamic BackgroundObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_endX") ) { return _endX; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"startX") ) { return startX; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"paralax") ) { return paralax_dyn(); }
		if (HX_FIELD_EQ(inName,"readXml") ) { return readXml_dyn(); }
		if (HX_FIELD_EQ(inName,"_startX") ) { return _startX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_imgPath") ) { return _imgPath; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_blendmode") ) { return _blendmode; }
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
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_endX") ) { _endX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startX") ) { startX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_startX") ) { _startX=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_imgPath") ) { _imgPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_blendmode") ) { _blendmode=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackgroundObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_endX"));
	outFields->push(HX_CSTRING("_startX"));
	outFields->push(HX_CSTRING("_speed"));
	outFields->push(HX_CSTRING("_blendmode"));
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_imgPath"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("startX"));
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
	HX_CSTRING("_endX"),
	HX_CSTRING("_startX"),
	HX_CSTRING("_speed"),
	HX_CSTRING("_blendmode"),
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	HX_CSTRING("_imgPath"),
	HX_CSTRING("x"),
	HX_CSTRING("speed"),
	HX_CSTRING("startX"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("BackgroundObject"), hx::TCanCast< BackgroundObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BackgroundObject_obj::__boot()
{
}

