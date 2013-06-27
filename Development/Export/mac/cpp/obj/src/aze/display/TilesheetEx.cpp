#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace aze{
namespace display{

Void TilesheetEx_obj::__construct(::flash::display::BitmapData img,hx::Null< Float >  __o_textureScale)
{
HX_STACK_PUSH("TilesheetEx::new","aze/display/TilesheetEx.hx",37);
Float textureScale = __o_textureScale.Default(1.0);
{
	HX_STACK_LINE(38)
	super::__construct(img);
	HX_STACK_LINE(40)
	this->scale = (Float((int)1) / Float(textureScale));
	HX_STACK_LINE(42)
	this->defs = Array_obj< ::String >::__new();
	HX_STACK_LINE(45)
	this->anims = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(50)
	this->sizes = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

TilesheetEx_obj::~TilesheetEx_obj() { }

Dynamic TilesheetEx_obj::__CreateEmpty() { return  new TilesheetEx_obj; }
hx::ObjectPtr< TilesheetEx_obj > TilesheetEx_obj::__new(::flash::display::BitmapData img,hx::Null< Float >  __o_textureScale)
{  hx::ObjectPtr< TilesheetEx_obj > result = new TilesheetEx_obj();
	result->__construct(img,__o_textureScale);
	return result;}

Dynamic TilesheetEx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TilesheetEx_obj > result = new TilesheetEx_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flash::geom::Rectangle TilesheetEx_obj::getSize( int indice){
	HX_STACK_PUSH("TilesheetEx::getSize","aze/display/TilesheetEx.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_ARG(indice,"indice");
	HX_STACK_LINE(87)
	if (((indice < this->sizes->length))){
		HX_STACK_LINE(88)
		return this->sizes->__get(indice).StaticCast< ::flash::geom::Rectangle >();
	}
	else{
		HX_STACK_LINE(89)
		return ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(87)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TilesheetEx_obj,getSize,return )

Array< int > TilesheetEx_obj::getAnim( ::String name){
	HX_STACK_PUSH("TilesheetEx::getAnim","aze/display/TilesheetEx.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(74)
	if ((this->anims->exists(name))){
		HX_STACK_LINE(75)
		return this->anims->get(name);
	}
	HX_STACK_LINE(76)
	Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->defs->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		while(((_g1 < _g))){
			HX_STACK_LINE(77)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(79)
			if ((::StringTools_obj::startsWith(this->defs->__get(i),name))){
				HX_STACK_LINE(80)
				indices->push(i);
			}
		}
	}
	HX_STACK_LINE(82)
	this->anims->set(name,indices);
	HX_STACK_LINE(83)
	return indices;
}


HX_DEFINE_DYNAMIC_FUNC1(TilesheetEx_obj,getAnim,return )

Void TilesheetEx_obj::addDefinition( ::String name,::flash::geom::Rectangle size,::flash::geom::Rectangle rect,::flash::geom::Point center){
{
		HX_STACK_PUSH("TilesheetEx::addDefinition","aze/display/TilesheetEx.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(size,"size");
		HX_STACK_ARG(rect,"rect");
		HX_STACK_ARG(center,"center");
		HX_STACK_LINE(66)
		this->defs->push(name);
		HX_STACK_LINE(67)
		this->sizes->push(size);
		HX_STACK_LINE(68)
		this->addTileRect(rect,center);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TilesheetEx_obj,addDefinition,(void))

::aze::display::TilesheetEx TilesheetEx_obj::createFromAssets( Array< ::String > fileNames,hx::Null< int >  __o_padding,hx::Null< int >  __o_spacing){
int padding = __o_padding.Default(0);
int spacing = __o_spacing.Default(0);
	HX_STACK_PUSH("TilesheetEx::createFromAssets","aze/display/TilesheetEx.hx",100);
	HX_STACK_ARG(fileNames,"fileNames");
	HX_STACK_ARG(padding,"padding");
	HX_STACK_ARG(spacing,"spacing");
{
		HX_STACK_LINE(101)
		Array< ::String > names = Array_obj< ::String >::__new();		HX_STACK_VAR(names,"names");
		HX_STACK_LINE(102)
		Array< ::Dynamic > images = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(images,"images");
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			while(((_g < fileNames->length))){
				HX_STACK_LINE(103)
				::String fileName = fileNames->__get(_g);		HX_STACK_VAR(fileName,"fileName");
				HX_STACK_LINE(103)
				++(_g);
				HX_STACK_LINE(105)
				::String name = fileName.split(HX_CSTRING("/"))->pop();		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(106)
				::flash::display::BitmapData image = ::openfl::Assets_obj::getBitmapData(fileName,null());		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(107)
				names->push(name);
				HX_STACK_LINE(108)
				images->push(image);
			}
		}
		HX_STACK_LINE(110)
		return ::aze::display::TilesheetEx_obj::createFromImages(names,images,padding,spacing);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TilesheetEx_obj,createFromAssets,return )

::aze::display::TilesheetEx TilesheetEx_obj::createFromImages( Array< ::String > names,Array< ::Dynamic > images,hx::Null< int >  __o_padding,hx::Null< int >  __o_spacing){
int padding = __o_padding.Default(0);
int spacing = __o_spacing.Default(0);
	HX_STACK_PUSH("TilesheetEx::createFromImages","aze/display/TilesheetEx.hx",114);
	HX_STACK_ARG(names,"names");
	HX_STACK_ARG(images,"images");
	HX_STACK_ARG(padding,"padding");
	HX_STACK_ARG(spacing,"spacing");
{
		HX_STACK_LINE(115)
		int width = (int)0;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(116)
		int height = padding;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(117)
			while(((_g < images->length))){
				HX_STACK_LINE(117)
				::flash::display::BitmapData image = images->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(117)
				++(_g);
				HX_STACK_LINE(119)
				if ((((image->get_width() + (padding * (int)2)) > width))){
					HX_STACK_LINE(119)
					width = (image->get_width() + (padding * (int)2));
				}
				HX_STACK_LINE(120)
				hx::AddEq(height,(image->get_height() + spacing));
			}
		}
		HX_STACK_LINE(122)
		hx::SubEq(height,spacing);
		HX_STACK_LINE(123)
		hx::AddEq(height,padding);
		HX_STACK_LINE(125)
		::flash::display::BitmapData img = ::flash::display::BitmapData_obj::__new(::aze::display::TilesheetEx_obj::closestPow2(width),::aze::display::TilesheetEx_obj::closestPow2(height),true,(int)0,null());		HX_STACK_VAR(img,"img");
		HX_STACK_LINE(126)
		::aze::display::TilesheetEx sheet = ::aze::display::TilesheetEx_obj::__new(img,null());		HX_STACK_VAR(sheet,"sheet");
		HX_STACK_LINE(128)
		::flash::geom::Point pos = ::flash::geom::Point_obj::__new(padding,padding);		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = images->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			while(((_g1 < _g))){
				HX_STACK_LINE(129)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(131)
				::flash::display::BitmapData image = images->__get(i).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(132)
				img->copyPixels(image,image->get_rect(),pos,null(),null(),true);
				HX_STACK_LINE(136)
				::flash::geom::Rectangle rect = ::flash::geom::Rectangle_obj::__new(padding,pos->y,image->get_width(),image->get_height());		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(137)
				::flash::geom::Point center = ::flash::geom::Point_obj::__new((Float(image->get_width()) / Float((int)2)),(Float(image->get_height()) / Float((int)2)));		HX_STACK_VAR(center,"center");
				HX_STACK_LINE(138)
				sheet->addDefinition(names->__get(i),image->get_rect(),rect,center);
				HX_STACK_LINE(140)
				hx::AddEq(pos->y,(image->get_height() + spacing));
			}
		}
		HX_STACK_LINE(142)
		return sheet;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TilesheetEx_obj,createFromImages,return )

int TilesheetEx_obj::closestPow2( int v){
	HX_STACK_PUSH("TilesheetEx::closestPow2","aze/display/TilesheetEx.hx",146);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(147)
	int p = (int)2;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(148)
	while(((p < v))){
		HX_STACK_LINE(148)
		p = (int(p) << int((int)1));
	}
	HX_STACK_LINE(149)
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
	HX_MARK_MEMBER_NAME(scale,"scale");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TilesheetEx_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(anims,"anims");
	HX_VISIT_MEMBER_NAME(sizes,"sizes");
	HX_VISIT_MEMBER_NAME(defs,"defs");
	HX_VISIT_MEMBER_NAME(scale,"scale");
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
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
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
		if (HX_FIELD_EQ(inName,"anims") ) { anims=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizes") ) { sizes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TilesheetEx_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("anims"));
	outFields->push(HX_CSTRING("sizes"));
	outFields->push(HX_CSTRING("defs"));
	outFields->push(HX_CSTRING("scale"));
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
	HX_CSTRING("scale"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aze.display.TilesheetEx"), hx::TCanCast< TilesheetEx_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TilesheetEx_obj::__boot()
{
}

} // end namespace aze
} // end namespace display
