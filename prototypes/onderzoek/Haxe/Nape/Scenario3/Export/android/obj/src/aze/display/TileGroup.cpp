#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Public
#include <haxe/Public.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
namespace aze{
namespace display{

Void TileGroup_obj::__construct()
{
HX_STACK_PUSH("TileGroup::new","aze/display/TileGroup.hx",23);
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->children = Array_obj< ::aze::display::TileBase >::__new();
}
;
	return null();
}

TileGroup_obj::~TileGroup_obj() { }

Dynamic TileGroup_obj::__CreateEmpty() { return  new TileGroup_obj; }
hx::ObjectPtr< TileGroup_obj > TileGroup_obj::__new()
{  hx::ObjectPtr< TileGroup_obj > result = new TileGroup_obj();
	result->__construct();
	return result;}

Dynamic TileGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileGroup_obj > result = new TileGroup_obj();
	result->__construct();
	return result;}

Float TileGroup_obj::get_width( ){
	HX_STACK_PUSH("TileGroup::get_width","aze/display/TileGroup.hx",148);
	HX_STACK_THIS(this);
	HX_STACK_LINE(149)
	if (((((  (((this->children != null()))) ? int(this->children->length) : int((int)0) )) == (int)0))){
		HX_STACK_LINE(149)
		return (int)0;
	}
	HX_STACK_LINE(150)
	Float xmin = 9999.0;		HX_STACK_VAR(xmin,"xmin");
	Float xmax = -9999.0;		HX_STACK_VAR(xmax,"xmax");
	HX_STACK_LINE(151)
	{
		HX_STACK_LINE(151)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::aze::display::TileBase > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(151)
		while(((_g < _g1->length))){
			HX_STACK_LINE(151)
			::aze::display::TileBase child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(151)
			++(_g);
			HX_STACK_LINE(152)
			if ((::Std_obj::is(child,hx::ClassOf< ::aze::display::TileSprite >()))){
				HX_STACK_LINE(153)
				::aze::display::TileSprite sprite = child;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(154)
				Float w = (sprite->size->width * sprite->_scaleX);		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(155)
				Float left = (sprite->x - (Float(w) / Float((int)2)));		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(156)
				Float right = (left + w);		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(157)
				if (((left < xmin))){
					HX_STACK_LINE(157)
					xmin = left;
				}
				HX_STACK_LINE(158)
				if (((right > xmax))){
					HX_STACK_LINE(158)
					xmax = right;
				}
			}
		}
	}
	HX_STACK_LINE(160)
	return (xmax - xmin);
}


HX_DEFINE_DYNAMIC_FUNC0(TileGroup_obj,get_width,return )

Float TileGroup_obj::get_height( ){
	HX_STACK_PUSH("TileGroup::get_height","aze/display/TileGroup.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_LINE(132)
	if (((((  (((this->children != null()))) ? int(this->children->length) : int((int)0) )) == (int)0))){
		HX_STACK_LINE(132)
		return (int)0;
	}
	HX_STACK_LINE(133)
	Float ymin = 9999.0;		HX_STACK_VAR(ymin,"ymin");
	Float ymax = -9999.0;		HX_STACK_VAR(ymax,"ymax");
	HX_STACK_LINE(134)
	{
		HX_STACK_LINE(134)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::aze::display::TileBase > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(134)
		while(((_g < _g1->length))){
			HX_STACK_LINE(134)
			::aze::display::TileBase child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(134)
			++(_g);
			HX_STACK_LINE(135)
			if ((::Std_obj::is(child,hx::ClassOf< ::aze::display::TileSprite >()))){
				HX_STACK_LINE(136)
				::aze::display::TileSprite sprite = child;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(137)
				Float h = (sprite->size->height * sprite->_scaleY);		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(138)
				Float top = (sprite->y - (Float(h) / Float((int)2)));		HX_STACK_VAR(top,"top");
				HX_STACK_LINE(139)
				Float bottom = (top + h);		HX_STACK_VAR(bottom,"bottom");
				HX_STACK_LINE(140)
				if (((top < ymin))){
					HX_STACK_LINE(140)
					ymin = top;
				}
				HX_STACK_LINE(141)
				if (((bottom > ymax))){
					HX_STACK_LINE(141)
					ymax = bottom;
				}
			}
		}
	}
	HX_STACK_LINE(143)
	return (ymax - ymin);
}


HX_DEFINE_DYNAMIC_FUNC0(TileGroup_obj,get_height,return )

int TileGroup_obj::get_numChildren( ){
	HX_STACK_PUSH("TileGroup::get_numChildren","aze/display/TileGroup.hx",127);
	HX_STACK_THIS(this);
	HX_STACK_LINE(127)
	return (  (((this->children != null()))) ? int(this->children->length) : int((int)0) );
}


HX_DEFINE_DYNAMIC_FUNC0(TileGroup_obj,get_numChildren,return )

Dynamic TileGroup_obj::iterator( ){
	HX_STACK_PUSH("TileGroup::iterator","aze/display/TileGroup.hx",124);
	HX_STACK_THIS(this);
	HX_STACK_LINE(124)
	return this->children->iterator();
}


HX_DEFINE_DYNAMIC_FUNC0(TileGroup_obj,iterator,return )

int TileGroup_obj::getChildIndex( ::aze::display::TileBase item){
	HX_STACK_PUSH("TileGroup::getChildIndex","aze/display/TileGroup.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_ARG(item,"item");
	HX_STACK_LINE(120)
	return ::Lambda_obj::indexOf(this->children,item);
}


HX_DEFINE_DYNAMIC_FUNC1(TileGroup_obj,getChildIndex,return )

Array< ::aze::display::TileBase > TileGroup_obj::removeAllChildren( ){
	HX_STACK_PUSH("TileGroup::removeAllChildren","aze/display/TileGroup.hx",110);
	HX_STACK_THIS(this);
	HX_STACK_LINE(114)
	{
		HX_STACK_LINE(114)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::aze::display::TileBase > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(114)
		while(((_g < _g1->length))){
			HX_STACK_LINE(114)
			::aze::display::TileBase child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(114)
			++(_g);
			HX_STACK_LINE(115)
			child->parent = null();
		}
	}
	HX_STACK_LINE(116)
	return this->children->splice((int)0,this->children->length);
}


HX_DEFINE_DYNAMIC_FUNC0(TileGroup_obj,removeAllChildren,return )

::aze::display::TileBase TileGroup_obj::removeChildAt( int index){
	HX_STACK_PUSH("TileGroup::removeChildAt","aze/display/TileGroup.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(104)
	::aze::display::TileBase child = this->children->splice(index,(int)1)->__get((int)0);		HX_STACK_VAR(child,"child");
	HX_STACK_LINE(105)
	if (((child != null()))){
		HX_STACK_LINE(105)
		child->parent = null();
	}
	HX_STACK_LINE(106)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(TileGroup_obj,removeChildAt,return )

::aze::display::TileBase TileGroup_obj::removeChild( ::aze::display::TileBase item){
	HX_STACK_PUSH("TileGroup::removeChild","aze/display/TileGroup.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_ARG(item,"item");
	HX_STACK_LINE(82)
	if (((item->parent == null()))){
		HX_STACK_LINE(82)
		return item;
	}
	HX_STACK_LINE(83)
	if (((item->parent != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(84)
		::haxe::Log_obj::trace(HX_CSTRING("Invalid parent"),hx::SourceInfo(HX_CSTRING("TileGroup.hx"),84,HX_CSTRING("aze.display.TileGroup"),HX_CSTRING("removeChild")));
		HX_STACK_LINE(85)
		return item;
	}
	HX_STACK_LINE(87)
	int index = ::Lambda_obj::indexOf(this->children,item);		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(88)
	if (((index >= (int)0))){
		HX_STACK_LINE(93)
		this->children->splice(index,(int)1);
		HX_STACK_LINE(94)
		item->parent = null();
	}
	HX_STACK_LINE(96)
	return item;
}


HX_DEFINE_DYNAMIC_FUNC1(TileGroup_obj,removeChild,return )

int TileGroup_obj::addChildAt( ::aze::display::TileBase item,int index){
	HX_STACK_PUSH("TileGroup::addChildAt","aze/display/TileGroup.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_ARG(item,"item");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(71)
	this->removeChild(item);
	HX_STACK_LINE(75)
	this->initChild(item);
	HX_STACK_LINE(76)
	this->children->insert(index,item);
	HX_STACK_LINE(77)
	return index;
}


HX_DEFINE_DYNAMIC_FUNC2(TileGroup_obj,addChildAt,return )

int TileGroup_obj::addChild( ::aze::display::TileBase item){
	HX_STACK_PUSH("TileGroup::addChild","aze/display/TileGroup.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(item,"item");
	HX_STACK_LINE(61)
	this->removeChild(item);
	HX_STACK_LINE(65)
	this->initChild(item);
	HX_STACK_LINE(66)
	return this->children->push(item);
}


HX_DEFINE_DYNAMIC_FUNC1(TileGroup_obj,addChild,return )

int TileGroup_obj::indexOf( ::aze::display::TileBase item){
	HX_STACK_PUSH("TileGroup::indexOf","aze/display/TileGroup.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_ARG(item,"item");
	HX_STACK_LINE(55)
	return ::Lambda_obj::indexOf(this->children,item);
}


HX_DEFINE_DYNAMIC_FUNC1(TileGroup_obj,indexOf,return )

Void TileGroup_obj::initChildren( ){
{
		HX_STACK_PUSH("TileGroup::initChildren","aze/display/TileGroup.hx",49);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::aze::display::TileBase > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		while(((_g < _g1->length))){
			HX_STACK_LINE(50)
			::aze::display::TileBase child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(50)
			++(_g);
			HX_STACK_LINE(51)
			this->initChild(child);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileGroup_obj,initChildren,(void))

Void TileGroup_obj::initChild( ::aze::display::TileBase item){
{
		HX_STACK_PUSH("TileGroup::initChild","aze/display/TileGroup.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_ARG(item,"item");
		HX_STACK_LINE(43)
		item->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(44)
		if (((bool((this->layer != null())) && bool((item->layer == null()))))){
			HX_STACK_LINE(45)
			item->init(this->layer);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileGroup_obj,initChild,(void))

Void TileGroup_obj::init( ::aze::display::TileLayer layer){
{
		HX_STACK_PUSH("TileGroup::init","aze/display/TileGroup.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer,"layer");
		HX_STACK_LINE(33)
		this->layer = layer;
		HX_STACK_LINE(34)
		this->initChildren();
	}
return null();
}



TileGroup_obj::TileGroup_obj()
{
}

void TileGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileGroup);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(children,"children");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(children,"children");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TileGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"initChild") ) { return initChild_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initChildren") ) { return initChildren_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeAllChildren") ) { return removeAllChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::aze::display::TileBase > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("numChildren"));
	outFields->push(HX_CSTRING("children"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_width"),
	HX_CSTRING("width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("height"),
	HX_CSTRING("get_numChildren"),
	HX_CSTRING("numChildren"),
	HX_CSTRING("iterator"),
	HX_CSTRING("getChildIndex"),
	HX_CSTRING("removeAllChildren"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("addChild"),
	HX_CSTRING("indexOf"),
	HX_CSTRING("initChildren"),
	HX_CSTRING("initChild"),
	HX_CSTRING("init"),
	HX_CSTRING("children"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileGroup_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileGroup_obj::__mClass,"__mClass");
};

Class TileGroup_obj::__mClass;

void TileGroup_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("aze.display.TileGroup"), hx::TCanCast< TileGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileGroup_obj::__boot()
{
}

} // end namespace aze
} // end namespace display
