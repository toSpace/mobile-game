#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
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
#ifndef INCLUDED_haxe_Public
#include <haxe/Public.h>
#endif
#ifndef INCLUDED_native_display_Tilesheet
#include <native/display/Tilesheet.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
namespace aze{
namespace display{

Void TileSprite_obj::__construct(::String tile)
{
HX_STACK_PUSH("TileSprite::new","aze/display/TileSprite.hx",38);
{
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(40)
	this->_rotation = (int)0;
	HX_STACK_LINE(41)
	this->alpha = this->_scaleX = this->_scaleY = (int)1;
	HX_STACK_LINE(42)
	this->_mirror = (int)0;
	HX_STACK_LINE(43)
	this->dirty = true;
	HX_STACK_LINE(44)
	this->set_tile(tile);
	HX_STACK_LINE(45)
	this->_indice = (int)-1;
	HX_STACK_LINE(51)
	this->_transform = Array_obj< Float >::__new();
}
;
	return null();
}

TileSprite_obj::~TileSprite_obj() { }

Dynamic TileSprite_obj::__CreateEmpty() { return  new TileSprite_obj; }
hx::ObjectPtr< TileSprite_obj > TileSprite_obj::__new(::String tile)
{  hx::ObjectPtr< TileSprite_obj > result = new TileSprite_obj();
	result->__construct(tile);
	return result;}

Dynamic TileSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSprite_obj > result = new TileSprite_obj();
	result->__construct(inArgs[0]);
	return result;}

Float TileSprite_obj::get_width( ){
	HX_STACK_PUSH("TileSprite::get_width","aze/display/TileSprite.hx",226);
	HX_STACK_THIS(this);
	HX_STACK_LINE(226)
	return (this->size->width * this->_scaleX);
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_width,return )

Float TileSprite_obj::get_height( ){
	HX_STACK_PUSH("TileSprite::get_height","aze/display/TileSprite.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_LINE(221)
	return (this->size->height * this->_scaleY);
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_height,return )

Array< Float > TileSprite_obj::get_transform( ){
	HX_STACK_PUSH("TileSprite::get_transform","aze/display/TileSprite.hx",167);
	HX_STACK_THIS(this);
	HX_STACK_LINE(168)
	if (((this->dirty == true))){
		HX_STACK_LINE(170)
		this->dirty = false;
		HX_STACK_LINE(171)
		int dirX = (  (((this->_mirror == (int)1))) ? int((int)-1) : int((int)1) );		HX_STACK_VAR(dirX,"dirX");
		HX_STACK_LINE(172)
		int dirY = (  (((this->_mirror == (int)2))) ? int((int)-1) : int((int)1) );		HX_STACK_VAR(dirY,"dirY");
		HX_STACK_LINE(173)
		if (((this->_rotation != (int)0))){
			HX_STACK_LINE(174)
			Float cos = ::Math_obj::cos(-(this->_rotation));		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(175)
			Float sin = ::Math_obj::sin(-(this->_rotation));		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(176)
			this->_transform[(int)0] = ((dirX * cos) * this->_scaleX);
			HX_STACK_LINE(177)
			this->_transform[(int)1] = ((dirY * sin) * this->_scaleY);
			HX_STACK_LINE(178)
			this->_transform[(int)2] = ((-(dirX) * sin) * this->_scaleX);
			HX_STACK_LINE(179)
			this->_transform[(int)3] = ((dirY * cos) * this->_scaleY);
		}
		else{
			HX_STACK_LINE(182)
			this->_transform[(int)0] = (dirX * this->_scaleX);
			HX_STACK_LINE(183)
			this->_transform[(int)1] = (int)0;
			HX_STACK_LINE(184)
			this->_transform[(int)2] = (int)0;
			HX_STACK_LINE(185)
			this->_transform[(int)3] = (dirY * this->_scaleY);
		}
	}
	HX_STACK_LINE(188)
	return this->_transform;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_transform,return )

int TileSprite_obj::set_color( int value){
	HX_STACK_PUSH("TileSprite::set_color","aze/display/TileSprite.hx",157);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(158)
	this->r = (Float(((int(value) >> int((int)16)))) / Float(255.0));
	HX_STACK_LINE(159)
	this->g = (Float(((int((int(value) >> int((int)8))) & int((int)255)))) / Float(255.0));
	HX_STACK_LINE(160)
	this->b = (Float(((int(value) & int((int)255)))) / Float(255.0));
	HX_STACK_LINE(161)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_color,return )

int TileSprite_obj::get_color( ){
	HX_STACK_PUSH("TileSprite::get_color","aze/display/TileSprite.hx",151);
	HX_STACK_THIS(this);
	HX_STACK_LINE(151)
	return (int((int(::Std_obj::_int((this->r * 256.0))) << int(((int)16 + ::Std_obj::_int((this->g * 256.0)))))) << int(((int)8 + ::Std_obj::_int((this->b * 256.0)))));
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_color,return )

Float TileSprite_obj::set_scaleY( Float value){
	HX_STACK_PUSH("TileSprite::set_scaleY","aze/display/TileSprite.hx",141);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(142)
	if (((this->_scaleY != value))){
		HX_STACK_LINE(143)
		this->_scaleY = value;
		HX_STACK_LINE(144)
		this->dirty = true;
	}
	HX_STACK_LINE(146)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_scaleY,return )

Float TileSprite_obj::get_scaleY( ){
	HX_STACK_PUSH("TileSprite::get_scaleY","aze/display/TileSprite.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_LINE(139)
	return this->_scaleY;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_scaleY,return )

Float TileSprite_obj::set_scaleX( Float value){
	HX_STACK_PUSH("TileSprite::set_scaleX","aze/display/TileSprite.hx",130);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(131)
	if (((this->_scaleX != value))){
		HX_STACK_LINE(132)
		this->_scaleX = value;
		HX_STACK_LINE(133)
		this->dirty = true;
	}
	HX_STACK_LINE(135)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_scaleX,return )

Float TileSprite_obj::get_scaleX( ){
	HX_STACK_PUSH("TileSprite::get_scaleX","aze/display/TileSprite.hx",128);
	HX_STACK_THIS(this);
	HX_STACK_LINE(128)
	return this->_scaleX;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_scaleX,return )

Float TileSprite_obj::set_scale( Float value){
	HX_STACK_PUSH("TileSprite::set_scale","aze/display/TileSprite.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(119)
	if (((this->_scaleX != value))){
		HX_STACK_LINE(120)
		this->_scaleX = value;
		HX_STACK_LINE(121)
		this->_scaleY = value;
		HX_STACK_LINE(122)
		this->dirty = true;
	}
	HX_STACK_LINE(124)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_scale,return )

Float TileSprite_obj::get_scale( ){
	HX_STACK_PUSH("TileSprite::get_scale","aze/display/TileSprite.hx",116);
	HX_STACK_THIS(this);
	HX_STACK_LINE(116)
	return this->_scaleX;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_scale,return )

Float TileSprite_obj::set_rotation( Float value){
	HX_STACK_PUSH("TileSprite::set_rotation","aze/display/TileSprite.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(108)
	if (((this->_rotation != value))){
		HX_STACK_LINE(109)
		this->_rotation = value;
		HX_STACK_LINE(110)
		this->dirty = true;
	}
	HX_STACK_LINE(112)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_rotation,return )

Float TileSprite_obj::get_rotation( ){
	HX_STACK_PUSH("TileSprite::get_rotation","aze/display/TileSprite.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_LINE(105)
	return this->_rotation;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_rotation,return )

int TileSprite_obj::set_mirror( int value){
	HX_STACK_PUSH("TileSprite::set_mirror","aze/display/TileSprite.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(97)
	if (((this->_mirror != value))){
		HX_STACK_LINE(98)
		this->_mirror = value;
		HX_STACK_LINE(99)
		this->dirty = true;
	}
	HX_STACK_LINE(101)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_mirror,return )

int TileSprite_obj::get_mirror( ){
	HX_STACK_PUSH("TileSprite::get_mirror","aze/display/TileSprite.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_LINE(94)
	return this->_mirror;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_mirror,return )

int TileSprite_obj::set_indice( int value){
	HX_STACK_PUSH("TileSprite::set_indice","aze/display/TileSprite.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(82)
	if (((this->_indice != value))){
		HX_STACK_LINE(83)
		this->_indice = value;
	}
	HX_STACK_LINE(90)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_indice,return )

int TileSprite_obj::get_indice( ){
	HX_STACK_PUSH("TileSprite::get_indice","aze/display/TileSprite.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_LINE(79)
	return this->_indice;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_indice,return )

::String TileSprite_obj::set_tile( ::String value){
	HX_STACK_PUSH("TileSprite::set_tile","aze/display/TileSprite.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(71)
	if (((this->_tile != value))){
		HX_STACK_LINE(72)
		this->_tile = value;
		HX_STACK_LINE(73)
		if (((this->layer != null()))){
			HX_STACK_LINE(73)
			this->init(this->layer);
		}
	}
	HX_STACK_LINE(75)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSprite_obj,set_tile,return )

::String TileSprite_obj::get_tile( ){
	HX_STACK_PUSH("TileSprite::get_tile","aze/display/TileSprite.hx",68);
	HX_STACK_THIS(this);
	HX_STACK_LINE(68)
	return this->_tile;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSprite_obj,get_tile,return )

Void TileSprite_obj::init( ::aze::display::TileLayer layer){
{
		HX_STACK_PUSH("TileSprite::init","aze/display/TileSprite.hx",56);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer,"layer");
		HX_STACK_LINE(57)
		this->layer = layer;
		HX_STACK_LINE(58)
		Array< int > indices = layer->tilesheet->getAnim(this->_tile);		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(59)
		this->set_indice(indices->__get((int)0));
		struct _Function_1_1{
			inline static ::native::geom::Rectangle Block( ::aze::display::TileLayer &layer,::aze::display::TileSprite_obj *__this){
				HX_STACK_PUSH("*::closure","aze/display/TileSprite.hx",60);
				{
					HX_STACK_LINE(60)
					::aze::display::TilesheetEx _this = layer->tilesheet;		HX_STACK_VAR(_this,"_this");
					int indice = __this->_indice;		HX_STACK_VAR(indice,"indice");
					HX_STACK_LINE(60)
					return (  (((indice < _this->sizes->length))) ? ::native::geom::Rectangle(_this->sizes->__get(indice)) : ::native::geom::Rectangle(::native::geom::Rectangle_obj::__new(null(),null(),null(),null())) );
				}
				return null();
			}
		};
		HX_STACK_LINE(60)
		this->size = _Function_1_1::Block(layer,this);
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
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(mirror,"mirror");
	HX_MARK_MEMBER_NAME(indice,"indice");
	HX_MARK_MEMBER_NAME(tile,"tile");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
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
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(mirror,"mirror");
	HX_VISIT_MEMBER_NAME(indice,"indice");
	HX_VISIT_MEMBER_NAME(tile,"tile");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
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
		if (HX_FIELD_EQ(inName,"tile") ) { return inCallProp ? get_tile() : tile; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"color") ) { return inCallProp ? get_color() : color; }
		if (HX_FIELD_EQ(inName,"scale") ) { return inCallProp ? get_scale() : scale; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return inCallProp ? get_scaleY() : scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return inCallProp ? get_scaleX() : scaleX; }
		if (HX_FIELD_EQ(inName,"mirror") ) { return inCallProp ? get_mirror() : mirror; }
		if (HX_FIELD_EQ(inName,"indice") ) { return inCallProp ? get_indice() : indice; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_mirror") ) { return _mirror; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { return _scaleY; }
		if (HX_FIELD_EQ(inName,"_scaleX") ) { return _scaleX; }
		if (HX_FIELD_EQ(inName,"_indice") ) { return _indice; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return inCallProp ? get_rotation() : rotation; }
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
		if (HX_FIELD_EQ(inName,"tile") ) { if (inCallProp) return set_tile(inValue);tile=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< ::native::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp) return set_scale(inValue);scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp) return set_scaleY(inValue);scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp) return set_scaleX(inValue);scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mirror") ) { if (inCallProp) return set_mirror(inValue);mirror=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indice") ) { if (inCallProp) return set_indice(inValue);indice=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_mirror") ) { _mirror=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleY") ) { _scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleX") ) { _scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_indice") ) { _indice=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp) return set_rotation(inValue);rotation=inValue.Cast< Float >(); return inValue; }
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
	HX_CSTRING("get_width"),
	HX_CSTRING("width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("height"),
	HX_CSTRING("get_transform"),
	HX_CSTRING("transform"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("color"),
	HX_CSTRING("set_scaleY"),
	HX_CSTRING("get_scaleY"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("set_scaleX"),
	HX_CSTRING("get_scaleX"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("get_scale"),
	HX_CSTRING("scale"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("rotation"),
	HX_CSTRING("set_mirror"),
	HX_CSTRING("get_mirror"),
	HX_CSTRING("mirror"),
	HX_CSTRING("set_indice"),
	HX_CSTRING("get_indice"),
	HX_CSTRING("indice"),
	HX_CSTRING("set_tile"),
	HX_CSTRING("get_tile"),
	HX_CSTRING("tile"),
	HX_CSTRING("init"),
	HX_CSTRING("b"),
	HX_CSTRING("g"),
	HX_CSTRING("r"),
	HX_CSTRING("alpha"),
	HX_CSTRING("_transform"),
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
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("aze.display.TileSprite"), hx::TCanCast< TileSprite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileSprite_obj::__boot()
{
}

} // end namespace aze
} // end namespace display
