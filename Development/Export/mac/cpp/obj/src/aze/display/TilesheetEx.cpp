#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_aze_display_TilesheetEx
#include <aze/display/TilesheetEx.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_Tilesheet
#include <native/display/Tilesheet.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
namespace aze{
namespace display{

Void TilesheetEx_obj::__construct(::native::display::BitmapData img)
{
HX_STACK_PUSH("TilesheetEx::new","aze/display/TilesheetEx.hx",30);
{
	HX_STACK_LINE(31)
	super::__construct(img);
	HX_STACK_LINE(33)
	this->defs = Array_obj< ::String >::__new();
	HX_STACK_LINE(34)
	this->anims = ::Hash_obj::__new();
	HX_STACK_LINE(35)
	this->sizes = Array_obj< ::native::geom::Rectangle >::__new();
}
;
	return null();
}

TilesheetEx_obj::~TilesheetEx_obj() { }

Dynamic TilesheetEx_obj::__CreateEmpty() { return  new TilesheetEx_obj; }
hx::ObjectPtr< TilesheetEx_obj > TilesheetEx_obj::__new(::native::display::BitmapData img)
{  hx::ObjectPtr< TilesheetEx_obj > result = new TilesheetEx_obj();
	result->__construct(img);
	return result;}

Dynamic TilesheetEx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TilesheetEx_obj > result = new TilesheetEx_obj();
	result->__construct(inArgs[0]);
	return result;}

::native::geom::Rectangle TilesheetEx_obj::getSize( int indice){
	HX_STACK_PUSH("TilesheetEx::getSize","aze/display/TilesheetEx.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_ARG(indice,"indice");
	HX_STACK_LINE(72)
	if (((indice < this->sizes->length))){
		HX_STACK_LINE(73)
		return this->sizes->__get(indice);
	}
	else{
		HX_STACK_LINE(74)
		return ::native::geom::Rectangle_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(72)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TilesheetEx_obj,getSize,return )

Array< int > TilesheetEx_obj::getAnim( ::String name){
	HX_STACK_PUSH("TilesheetEx::getAnim","aze/display/TilesheetEx.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(59)
	if ((this->anims->exists(name))){
		HX_STACK_LINE(60)
		return this->anims->get(name);
	}
	HX_STACK_LINE(61)
	Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->defs->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		while(((_g1 < _g))){
			HX_STACK_LINE(62)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(64)
			if ((::StringTools_obj::startsWith(this->defs->__get(i),name))){
				HX_STACK_LINE(65)
				indices->push(i);
			}
		}
	}
	HX_STACK_LINE(67)
	this->anims->set(name,indices);
	HX_STACK_LINE(68)
	return indices;
}


HX_DEFINE_DYNAMIC_FUNC1(TilesheetEx_obj,getAnim,return )

Void TilesheetEx_obj::addDefinition( ::String name,::native::geom::Rectangle size,::native::geom::Rectangle rect,::native::geom::Point center){
{
		HX_STACK_PUSH("TilesheetEx::addDefinition","aze/display/TilesheetEx.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(size,"size");
		HX_STACK_ARG(rect,"rect");
		HX_STACK_ARG(center,"center");
		HX_STACK_LINE(51)
		this->defs->push(name);
		HX_STACK_LINE(52)
		this->sizes->push(size);
		HX_STACK_LINE(53)
		this->addTileRect(rect,center);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TilesheetEx_obj,addDefinition,(void))

::aze::display::TilesheetEx TilesheetEx_obj::createFromAssets( Array< ::String > fileNames,hx::Null< int >  __o_padding,hx::Null< int >  __o_spacing){
int padding = __o_padding.Default(0);
int spacing = __o_spacing.Default(0);
	HX_STACK_PUSH("TilesheetEx::createFromAssets","aze/display/TilesheetEx.hx",85);
	HX_STACK_ARG(fileNames,"fileNames");
	HX_STACK_ARG(padding,"padding");
	HX_STACK_ARG(spacing,"spacing");
{
		HX_STACK_LINE(86)
		Array< ::String > names = Array_obj< ::String >::__new();		HX_STACK_VAR(names,"names");
		HX_STACK_LINE(87)
		Array< ::native::display::BitmapData > images = Array_obj< ::native::display::BitmapData >::__new();		HX_STACK_VAR(images,"images");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			while(((_g < fileNames->length))){
				HX_STACK_LINE(88)
				::String fileName = fileNames->__get(_g);		HX_STACK_VAR(fileName,"fileName");
				HX_STACK_LINE(88)
				++(_g);
				HX_STACK_LINE(90)
				::String name = fileName.split(HX_CSTRING("/"))->pop();		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(91)
				::native::display::BitmapData image = ::nme::installer::Assets_obj::getBitmapData(fileName,null());		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(92)
				names->push(name);
				HX_STACK_LINE(93)
				images->push(image);
			}
		}
		HX_STACK_LINE(95)
		return ::aze::display::TilesheetEx_obj::createFromImages(names,images,padding,spacing);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TilesheetEx_obj,createFromAssets,return )

::aze::display::TilesheetEx TilesheetEx_obj::createFromImages( Array< ::String > names,Array< ::native::display::BitmapData > images,hx::Null< int >  __o_padding,hx::Null< int >  __o_spacing){
int padding = __o_padding.Default(0);
int spacing = __o_spacing.Default(0);
	HX_STACK_PUSH("TilesheetEx::createFromImages","aze/display/TilesheetEx.hx",99);
	HX_STACK_ARG(names,"names");
	HX_STACK_ARG(images,"images");
	HX_STACK_ARG(padding,"padding");
	HX_STACK_ARG(spacing,"spacing");
{
		HX_STACK_LINE(100)
		int width = (int)0;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(101)
		int height = padding;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			while(((_g < images->length))){
				HX_STACK_LINE(102)
				::native::display::BitmapData image = images->__get(_g);		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(102)
				++(_g);
				HX_STACK_LINE(104)
				if ((((image->get_width() + (padding * (int)2)) > width))){
					HX_STACK_LINE(104)
					width = (image->get_width() + (padding * (int)2));
				}
				HX_STACK_LINE(105)
				hx::AddEq(height,(image->get_height() + spacing));
			}
		}
		HX_STACK_LINE(107)
		hx::SubEq(height,spacing);
		HX_STACK_LINE(108)
		hx::AddEq(height,padding);
		HX_STACK_LINE(110)
		::native::display::BitmapData img = ::native::display::BitmapData_obj::__new(::aze::display::TilesheetEx_obj::closestPow2(width),::aze::display::TilesheetEx_obj::closestPow2(height),true,(int)0,null());		HX_STACK_VAR(img,"img");
		HX_STACK_LINE(111)
		::aze::display::TilesheetEx sheet = ::aze::display::TilesheetEx_obj::__new(img);		HX_STACK_VAR(sheet,"sheet");
		HX_STACK_LINE(113)
		::native::geom::Point pos = ::native::geom::Point_obj::__new(padding,padding);		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = images->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(114)
			while(((_g1 < _g))){
				HX_STACK_LINE(114)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(116)
				::native::display::BitmapData image = images->__get(i);		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(117)
				img->copyPixels(image,image->get_rect(),pos,null(),null(),true);
				HX_STACK_LINE(121)
				::native::geom::Rectangle rect = ::native::geom::Rectangle_obj::__new(padding,pos->y,image->get_width(),image->get_height());		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(122)
				::native::geom::Point center = ::native::geom::Point_obj::__new((Float(image->get_width()) / Float((int)2)),(Float(image->get_height()) / Float((int)2)));		HX_STACK_VAR(center,"center");
				HX_STACK_LINE(123)
				sheet->addDefinition(names->__get(i),image->get_rect(),rect,center);
				HX_STACK_LINE(125)
				hx::AddEq(pos->y,(image->get_height() + spacing));
			}
		}
		HX_STACK_LINE(127)
		return sheet;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TilesheetEx_obj,createFromImages,return )

int TilesheetEx_obj::closestPow2( int v){
	HX_STACK_PUSH("TilesheetEx::closestPow2","aze/display/TilesheetEx.hx",131);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(132)
	int p = (int)2;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(133)
	while(((p < v))){
		HX_STACK_LINE(133)
		p = (int(p) << int((int)1));
	}
	HX_STACK_LINE(134)
	return p;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TilesheetEx_obj,closestPow2,return )


TilesheetEx_obj::TilesheetEx_obj()
{
}

void TilesheetEx_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TilesheetEx);
	HX_MARK_MEMBER_NAME(anims,"anims");
	HX_MARK_MEMBER_NAME(sizes,"sizes");
	HX_MARK_MEMBER_NAME(defs,"defs");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TilesheetEx_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(anims,"anims");
	HX_VISIT_MEMBER_NAME(sizes,"sizes");
	HX_VISIT_MEMBER_NAME(defs,"defs");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TilesheetEx_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"defs") ) { return defs; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"anims") ) { return anims; }
		if (HX_FIELD_EQ(inName,"sizes") ) { return sizes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getSize") ) { return getSize_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnim") ) { return getAnim_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closestPow2") ) { return closestPow2_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addDefinition") ) { return addDefinition_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createFromAssets") ) { return createFromAssets_dyn(); }
		if (HX_FIELD_EQ(inName,"createFromImages") ) { return createFromImages_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TilesheetEx_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"defs") ) { defs=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"anims") ) { anims=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizes") ) { sizes=inValue.Cast< Array< ::native::geom::Rectangle > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TilesheetEx_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("anims"));
	outFields->push(HX_CSTRING("sizes"));
	outFields->push(HX_CSTRING("defs"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createFromAssets"),
	HX_CSTRING("createFromImages"),
	HX_CSTRING("closestPow2"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getSize"),
	HX_CSTRING("getAnim"),
	HX_CSTRING("addDefinition"),
	HX_CSTRING("anims"),
	HX_CSTRING("sizes"),
	HX_CSTRING("defs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TilesheetEx_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TilesheetEx_obj::__mClass,"__mClass");
};

Class TilesheetEx_obj::__mClass;

void TilesheetEx_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("aze.display.TilesheetEx"), hx::TCanCast< TilesheetEx_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TilesheetEx_obj::__boot()
{
}

} // end namespace aze
} // end namespace display
