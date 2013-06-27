#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_aze_display_TileBase
#include <aze/display/TileBase.h>
#endif
#ifndef INCLUDED_aze_display_TileGroup
#include <aze/display/TileGroup.h>
#endif
#ifndef INCLUDED_aze_display_TileLayer
#include <aze/display/TileLayer.h>
#endif
#ifndef INCLUDED_aze_display_TileSprite
#include <aze/display/TileSprite.h>
#endif
#ifndef INCLUDED_aze_display_TilesheetEx
#include <aze/display/TilesheetEx.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace aze{
namespace display{

Void TileSprite_obj::__construct(::aze::display::TileLayer layer,::String tile)
{
HX_STACK_PUSH("TileSprite::new","aze/display/TileSprite.hx",40);
{
	HX_STACK_LINE(41)
	super::__construct(layer);
	HX_STACK_LINE(42)
	this->_rotation = (int)0;
	HX_STACK_LINE(43)
	this->alpha = this->_scaleX = this->_scaleY = (int)1;
	HX_STACK_LINE(44)
	this->_mirror = (int)0;
	HX_STACK_LINE(45)
	this->_indice = (int)-1;
	HX_STACK_LINE(50)
	this->_transform = Array_obj< Float >::__new();
	HX_STACK_LINE(52)
	this->dirty = true;
	HX_STACK_LINE(53)
	this->set_tile(tile);
}
;
	return null();
}

TileSprite_obj::~TileSprite_obj() { }

Dynamic TileSprite_obj::__CreateEmpty() { return  new TileSprite_obj; }
hx::ObjectPtr< TileSprite_obj > TileSprite_obj::__new(::aze::display::TileLayer layer,::String tile)
{  hx::ObjectPtr< TileSprite_obj > result = new TileSprite_obj();
	result->__construct(layer,tile);
	return result;}

Dynamic TileSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSprite_obj > result = new TileSprite_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flash::geom::Point TileSprite_obj::set_offset( ::flash::geom::Point value){
	HX_STACK_PUSH("TileSprite::set_offset","aze/display/TileSprite.hx",236);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(237)
	this->_offset = ::flash::geom::Point_obj::__new((Float(value->x) / Float(this->layer->tilesheet->scale)),(Float(value->y) / Float(this->layer->tilesheet->scale)));
	HX_STACK_LINE(238)
	return this->_offset;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_offset,return )

::flash::geom::Point TileSprite_obj::get_offset( ){
	HX_STACK_PUSH("TileSprite::get_offset","aze/display/TileSprite.hx",234);
	HX_STACK_THIS(this);
	HX_STACK_LINE(234)
	return this->_offset;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_offset,return )

Float TileSprite_obj::get_width( ){
	HX_STACK_PUSH("TileSprite::get_width","aze/display/TileSprite.hx",229);
	HX_STACK_THIS(this);
	HX_STACK_LINE(229)
	return (this->size->width * this->_scaleX);
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_width,return )

Float TileSprite_obj::get_height( ){
	HX_STACK_PUSH("TileSprite::get_height","aze/display/TileSprite.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_LINE(224)
	return (this->size->height * this->_scaleY);
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_height,return )

Array< Float > TileSprite_obj::get_transform( ){
	HX_STACK_PUSH("TileSprite::get_transform","aze/display/TileSprite.hx",168);
	HX_STACK_THIS(this);
	HX_STACK_LINE(169)
	if (((this->dirty == true))){
		HX_STACK_LINE(171)
		this->dirty = false;
		HX_STACK_LINE(172)
		int dirX = (  (((this->_mirror == (int)1))) ? int((int)-1) : int((int)1) );		HX_STACK_VAR(dirX,"dirX");
		HX_STACK_LINE(173)
		int dirY = (  (((this->_mirror == (int)2))) ? int((int)-1) : int((int)1) );		HX_STACK_VAR(dirY,"dirY");
		HX_STACK_LINE(174)
		Float sx = (this->_scaleX * this->layer->tilesheet->scale);		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(175)
		Float sy = (this->_scaleY * this->layer->tilesheet->scale);		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(176)
		if (((this->_rotation != (int)0))){
			HX_STACK_LINE(177)
			Float cos = ::Math_obj::cos(this->_rotation);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(178)
			Float sin = ::Math_obj::sin(this->_rotation);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(179)
			this->_transform[(int)0] = ((dirX * cos) * sx);
			HX_STACK_LINE(180)
			this->_transform[(int)1] = ((dirY * sin) * sy);
			HX_STACK_LINE(181)
			this->_transform[(int)2] = ((-(dirX) * sin) * sx);
			HX_STACK_LINE(182)
			this->_transform[(int)3] = ((dirY * cos) * sy);
		}
		else{
			HX_STACK_LINE(185)
			this->_transform[(int)0] = (dirX * sx);
			HX_STACK_LINE(186)
			this->_transform[(int)1] = (int)0;
			HX_STACK_LINE(187)
			this->_transform[(int)2] = (int)0;
			HX_STACK_LINE(188)
			this->_transform[(int)3] = (dirY * sy);
		}
	}
	HX_STACK_LINE(191)
	return this->_transform;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_transform,return )

int TileSprite_obj::set_color( int value){
	HX_STACK_PUSH("TileSprite::set_color","aze/display/TileSprite.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(159)
	this->r = (Float(((int(value) >> int((int)16)))) / Float(255.0));
	HX_STACK_LINE(160)
	this->g = (Float(((int((int(value) >> int((int)8))) & int((int)255)))) / Float(255.0));
	HX_STACK_LINE(161)
	this->b = (Float(((int(value) & int((int)255)))) / Float(255.0));
	HX_STACK_LINE(162)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_color,return )

int TileSprite_obj::get_color( ){
	HX_STACK_PUSH("TileSprite::get_color","aze/display/TileSprite.hx",152);
	HX_STACK_THIS(this);
	HX_STACK_LINE(152)
	return (int((int(::Std_obj::_int((this->r * 256.0))) << int(((int)16 + ::Std_obj::_int((this->g * 256.0)))))) << int(((int)8 + ::Std_obj::_int((this->b * 256.0)))));
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_color,return )

Float TileSprite_obj::set_scaleY( Float value){
	HX_STACK_PUSH("TileSprite::set_scaleY","aze/display/TileSprite.hx",142);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(143)
	if (((this->_scaleY != value))){
		HX_STACK_LINE(144)
		this->_scaleY = value;
		HX_STACK_LINE(145)
		this->dirty = true;
	}
	HX_STACK_LINE(147)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_scaleY,return )

Float TileSprite_obj::get_scaleY( ){
	HX_STACK_PUSH("TileSprite::get_scaleY","aze/display/TileSprite.hx",140);
	HX_STACK_THIS(this);
	HX_STACK_LINE(140)
	return this->_scaleY;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_scaleY,return )

Float TileSprite_obj::set_scaleX( Float value){
	HX_STACK_PUSH("TileSprite::set_scaleX","aze/display/TileSprite.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(132)
	if (((this->_scaleX != value))){
		HX_STACK_LINE(133)
		this->_scaleX = value;
		HX_STACK_LINE(134)
		this->dirty = true;
	}
	HX_STACK_LINE(136)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_scaleX,return )

Float TileSprite_obj::get_scaleX( ){
	HX_STACK_PUSH("TileSprite::get_scaleX","aze/display/TileSprite.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_LINE(129)
	return this->_scaleX;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_scaleX,return )

Float TileSprite_obj::set_scale( Float value){
	HX_STACK_PUSH("TileSprite::set_scale","aze/display/TileSprite.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(120)
	if (((this->_scaleX != value))){
		HX_STACK_LINE(121)
		this->_scaleX = value;
		HX_STACK_LINE(122)
		this->_scaleY = value;
		HX_STACK_LINE(123)
		this->dirty = true;
	}
	HX_STACK_LINE(125)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_scale,return )

Float TileSprite_obj::get_scale( ){
	HX_STACK_PUSH("TileSprite::get_scale","aze/display/TileSprite.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_LINE(117)
	return this->_scaleX;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_scale,return )

Float TileSprite_obj::set_rotation( Float value){
	HX_STACK_PUSH("TileSprite::set_rotation","aze/display/TileSprite.hx",108);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(109)
	if (((this->_rotation != value))){
		HX_STACK_LINE(110)
		this->_rotation = value;
		HX_STACK_LINE(111)
		this->dirty = true;
	}
	HX_STACK_LINE(113)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_rotation,return )

Float TileSprite_obj::get_rotation( ){
	HX_STACK_PUSH("TileSprite::get_rotation","aze/display/TileSprite.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_LINE(106)
	return this->_rotation;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_rotation,return )

int TileSprite_obj::set_mirror( int value){
	HX_STACK_PUSH("TileSprite::set_mirror","aze/display/TileSprite.hx",97);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(98)
	if (((this->_mirror != value))){
		HX_STACK_LINE(99)
		this->_mirror = value;
		HX_STACK_LINE(100)
		this->dirty = true;
	}
	HX_STACK_LINE(102)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_mirror,return )

int TileSprite_obj::get_mirror( ){
	HX_STACK_PUSH("TileSprite::get_mirror","aze/display/TileSprite.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_LINE(95)
	return this->_mirror;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_mirror,return )

int TileSprite_obj::set_indice( int value){
	HX_STACK_PUSH("TileSprite::set_indice","aze/display/TileSprite.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(83)
	if (((this->_indice != value))){
		HX_STACK_LINE(84)
		this->_indice = value;
	}
	HX_STACK_LINE(91)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_indice,return )

int TileSprite_obj::get_indice( ){
	HX_STACK_PUSH("TileSprite::get_indice","aze/display/TileSprite.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_LINE(80)
	return this->_indice;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_indice,return )

::String TileSprite_obj::set_tile( ::String value){
	HX_STACK_PUSH("TileSprite::set_tile","aze/display/TileSprite.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(72)
	if (((this->_tile != value))){
		HX_STACK_LINE(73)
		this->_tile = value;
		HX_STACK_LINE(74)
		if (((this->layer != null()))){
			HX_STACK_LINE(74)
			this->init(this->layer);
		}
	}
	HX_STACK_LINE(76)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_tile,return )

::String TileSprite_obj::get_tile( ){
	HX_STACK_PUSH("TileSprite::get_tile","aze/display/TileSprite.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_LINE(69)
	return this->_tile;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_tile,return )

Void TileSprite_obj::init( ::aze::display::TileLayer layer){
{
		HX_STACK_PUSH("TileSprite::init","aze/display/TileSprite.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer,"layer");
		HX_STACK_LINE(58)
		this->layer = layer;
		HX_STACK_LINE(59)
		Array< int > indices = layer->tilesheet->getAnim(this->_tile);		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(60)
		this->set_indice(indices->__get((int)0));
		struct _Function_1_1{
			inline static ::flash::geom::Rectangle Block( ::aze::display::TileSprite_obj *__this,::aze::display::TileLayer &layer){
				HX_STACK_PUSH("*::closure","aze/display/TileSprite.hx",61);
				{
					HX_STACK_LINE(61)
					::aze::display::TilesheetEx _this = layer->tilesheet;		HX_STACK_VAR(_this,"_this");
					int indice = __this->_indice;		HX_STACK_VAR(indice,"indice");
					HX_STACK_LINE(61)
					return (  (((indice < _this->sizes->length))) ? ::flash::geom::Rectangle(_this->sizes->__get(indice).StaticCast< ::flash::geom::Rectangle >()) : ::flash::geom::Rectangle(::flash::geom::Rectangle_obj::__new(null(),null(),null(),null())) );
				}
				return null();
			}
		};
		HX_STACK_LINE(61)
		this->size = _Function_1_1::Block(this,layer);
	}
return null();
}



TileSprite_obj::TileSprite_obj()
{
}

void TileSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileSprite);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_offset,"_offset");
	HX_MARK_MEMBER_NAME(_mirror,"_mirror");
	HX_MARK_MEMBER_NAME(_scaleY,"_scaleY");
	HX_MARK_MEMBER_NAME(_scaleX,"_scaleX");
	HX_MARK_MEMBER_NAME(_rotation,"_rotation");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(_indice,"_indice");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_offset,"_offset");
	HX_VISIT_MEMBER_NAME(_mirror,"_mirror");
	HX_VISIT_MEMBER_NAME(_scaleY,"_scaleY");
	HX_VISIT_MEMBER_NAME(_scaleX,"_scaleX");
	HX_VISIT_MEMBER_NAME(_rotation,"_rotation");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(_indice,"_indice");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TileSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { return get_tile(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return get_scale(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return get_offset(); }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return get_scaleY(); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"mirror") ) { return get_mirror(); }
		if (HX_FIELD_EQ(inName,"indice") ) { return get_indice(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_offset") ) { return _offset; }
		if (HX_FIELD_EQ(inName,"_mirror") ) { return _mirror; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { return _scaleY; }
		if (HX_FIELD_EQ(inName,"_scaleX") ) { return _scaleX; }
		if (HX_FIELD_EQ(inName,"_indice") ) { return _indice; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return get_rotation(); }
		if (HX_FIELD_EQ(inName,"set_tile") ) { return set_tile_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tile") ) { return get_tile_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return inCallProp ? get_transform() : transform; }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"_rotation") ) { return _rotation; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_offset") ) { return set_offset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_offset") ) { return get_offset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mirror") ) { return set_mirror_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mirror") ) { return get_mirror_dyn(); }
		if (HX_FIELD_EQ(inName,"set_indice") ) { return set_indice_dyn(); }
		if (HX_FIELD_EQ(inName,"get_indice") ) { return get_indice_dyn(); }
		if (HX_FIELD_EQ(inName,"_transform") ) { return _transform; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { return set_tile(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"scale") ) { return set_scale(inValue); }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return set_offset(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return set_scaleY(inValue); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"mirror") ) { return set_mirror(inValue); }
		if (HX_FIELD_EQ(inName,"indice") ) { return set_indice(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_offset") ) { _offset=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mirror") ) { _mirror=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { _scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleX") ) { _scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_indice") ) { _indice=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotation") ) { _rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("transform"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("mirror"));
	outFields->push(HX_CSTRING("indice"));
	outFields->push(HX_CSTRING("tile"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("r"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("_transform"));
	outFields->push(HX_CSTRING("_offset"));
	outFields->push(HX_CSTRING("_mirror"));
	outFields->push(HX_CSTRING("_scaleY"));
	outFields->push(HX_CSTRING("_scaleX"));
	outFields->push(HX_CSTRING("_rotation"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("_indice"));
	outFields->push(HX_CSTRING("_tile"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_offset"),
	HX_CSTRING("get_offset"),
	HX_CSTRING("get_width"),
	HX_CSTRING("width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("height"),
	HX_CSTRING("get_transform"),
	HX_CSTRING("transform"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_scaleY"),
	HX_CSTRING("get_scaleY"),
	HX_CSTRING("set_scaleX"),
	HX_CSTRING("get_scaleX"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("set_mirror"),
	HX_CSTRING("get_mirror"),
	HX_CSTRING("set_indice"),
	HX_CSTRING("get_indice"),
	HX_CSTRING("set_tile"),
	HX_CSTRING("get_tile"),
	HX_CSTRING("init"),
	HX_CSTRING("b"),
	HX_CSTRING("g"),
	HX_CSTRING("r"),
	HX_CSTRING("alpha"),
	HX_CSTRING("_transform"),
	HX_CSTRING("_offset"),
	HX_CSTRING("_mirror"),
	HX_CSTRING("_scaleY"),
	HX_CSTRING("_scaleX"),
	HX_CSTRING("_rotation"),
	HX_CSTRING("dirty"),
	HX_CSTRING("size"),
	HX_CSTRING("_indice"),
	HX_CSTRING("_tile"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileSprite_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSprite_obj::__mClass,"__mClass");
};

Class TileSprite_obj::__mClass;

void TileSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aze.display.TileSprite"), hx::TCanCast< TileSprite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileSprite_obj::__boot()
{
}

} // end namespace aze
} // end namespace display
