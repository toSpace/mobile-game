#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_aze_display_SparrowTilesheet
#include <aze/display/SparrowTilesheet.h>
#endif
#ifndef INCLUDED_aze_display_TilesheetEx
#include <aze/display/TilesheetEx.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace aze{
namespace display{

Void SparrowTilesheet_obj::__construct(::flash::display::BitmapData img,::String xml,hx::Null< Float >  __o_textureScale)
{
HX_STACK_PUSH("SparrowTilesheet::new","aze/display/SparrowTilesheet.hx",19);
Float textureScale = __o_textureScale.Default(1.0);
{
	HX_STACK_LINE(20)
	super::__construct(img,textureScale);
	HX_STACK_LINE(22)
	::flash::geom::Point ins = ::flash::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(ins,"ins");
	HX_STACK_LINE(23)
	::haxe::xml::Fast x = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(xml)->firstElement());		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(25)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(x->nodes->resolve(HX_CSTRING("SubTexture"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast texture = __it->next();
		{
			HX_STACK_LINE(27)
			::String name = texture->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(28)
			::flash::geom::Rectangle rect = ::flash::geom::Rectangle_obj::__new(::Std_obj::parseFloat(texture->att->resolve(HX_CSTRING("x"))),::Std_obj::parseFloat(texture->att->resolve(HX_CSTRING("y"))),::Std_obj::parseFloat(texture->att->resolve(HX_CSTRING("width"))),::Std_obj::parseFloat(texture->att->resolve(HX_CSTRING("height"))));		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(32)
			::flash::geom::Rectangle size = (  ((texture->has->resolve(HX_CSTRING("frameX")))) ? ::flash::geom::Rectangle(::flash::geom::Rectangle_obj::__new(::Std_obj::parseInt(texture->att->resolve(HX_CSTRING("frameX"))),::Std_obj::parseInt(texture->att->resolve(HX_CSTRING("frameY"))),::Std_obj::parseInt(texture->att->resolve(HX_CSTRING("frameWidth"))),::Std_obj::parseInt(texture->att->resolve(HX_CSTRING("frameHeight"))))) : ::flash::geom::Rectangle(::flash::geom::Rectangle_obj::__new((int)0,(int)0,rect->width,rect->height)) );		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(48)
			::flash::geom::Point center = ::flash::geom::Point_obj::__new((size->x + (Float(size->width) / Float((int)2))),(size->y + (Float(size->height) / Float((int)2))));		HX_STACK_VAR(center,"center");
			HX_STACK_LINE(49)
			this->addDefinition(name,size,rect,center);
		}
;
	}
}
;
	return null();
}

SparrowTilesheet_obj::~SparrowTilesheet_obj() { }

Dynamic SparrowTilesheet_obj::__CreateEmpty() { return  new SparrowTilesheet_obj; }
hx::ObjectPtr< SparrowTilesheet_obj > SparrowTilesheet_obj::__new(::flash::display::BitmapData img,::String xml,hx::Null< Float >  __o_textureScale)
{  hx::ObjectPtr< SparrowTilesheet_obj > result = new SparrowTilesheet_obj();
	result->__construct(img,xml,__o_textureScale);
	return result;}

Dynamic SparrowTilesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SparrowTilesheet_obj > result = new SparrowTilesheet_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


SparrowTilesheet_obj::SparrowTilesheet_obj()
{
}

void SparrowTilesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SparrowTilesheet);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SparrowTilesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SparrowTilesheet_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SparrowTilesheet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SparrowTilesheet_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SparrowTilesheet_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SparrowTilesheet_obj::__mClass,"__mClass");
};

Class SparrowTilesheet_obj::__mClass;

void SparrowTilesheet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aze.display.SparrowTilesheet"), hx::TCanCast< SparrowTilesheet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SparrowTilesheet_obj::__boot()
{
}

} // end namespace aze
} // end namespace display
