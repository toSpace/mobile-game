#include <hxcpp.h>

#ifndef INCLUDED_aze_display_DrawList
#include <aze/display/DrawList.h>
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
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Tilesheet
#include <native/display/Tilesheet.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
namespace aze{
namespace display{

Void TileLayer_obj::__construct(::aze::display::TilesheetEx tilesheet,hx::Null< bool >  __o_smooth,hx::Null< bool >  __o_additive)
{
HX_STACK_PUSH("TileLayer::new","aze/display/TileLayer.hx",35);
bool smooth = __o_smooth.Default(true);
bool additive = __o_additive.Default(false);
{
	HX_STACK_LINE(36)
	super::__construct();
	HX_STACK_LINE(38)
	this->view = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(39)
	this->view->set_mouseEnabled(false);
	HX_STACK_LINE(40)
	this->view->set_mouseChildren(false);
	HX_STACK_LINE(42)
	this->tilesheet = tilesheet;
	HX_STACK_LINE(43)
	this->useSmoothing = smooth;
	HX_STACK_LINE(44)
	this->useAdditive = additive;
	HX_STACK_LINE(45)
	this->useAlpha = true;
	HX_STACK_LINE(46)
	this->useTransforms = true;
	HX_STACK_LINE(48)
	this->init(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(49)
	this->drawList = ::aze::display::DrawList_obj::__new();
}
;
	return null();
}

TileLayer_obj::~TileLayer_obj() { }

Dynamic TileLayer_obj::__CreateEmpty() { return  new TileLayer_obj; }
hx::ObjectPtr< TileLayer_obj > TileLayer_obj::__new(::aze::display::TilesheetEx tilesheet,hx::Null< bool >  __o_smooth,hx::Null< bool >  __o_additive)
{  hx::ObjectPtr< TileLayer_obj > result = new TileLayer_obj();
	result->__construct(tilesheet,__o_smooth,__o_additive);
	return result;}

Dynamic TileLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileLayer_obj > result = new TileLayer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int TileLayer_obj::renderGroup( ::aze::display::TileGroup group,int index,Float gx,Float gy){
	HX_STACK_PUSH("TileLayer::renderGroup","aze/display/TileLayer.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_ARG(group,"group");
	HX_STACK_ARG(index,"index");
	HX_STACK_ARG(gx,"gx");
	HX_STACK_ARG(gy,"gy");
	HX_STACK_LINE(68)
	Array< Float > list = this->drawList->list;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(69)
	int fields = this->drawList->fields;		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(70)
	int offsetTransform = this->drawList->offsetTransform;		HX_STACK_VAR(offsetTransform,"offsetTransform");
	HX_STACK_LINE(71)
	int offsetRGB = this->drawList->offsetRGB;		HX_STACK_VAR(offsetRGB,"offsetRGB");
	HX_STACK_LINE(72)
	int offsetAlpha = this->drawList->offsetAlpha;		HX_STACK_VAR(offsetAlpha,"offsetAlpha");
	HX_STACK_LINE(73)
	int elapsed = this->drawList->elapsed;		HX_STACK_VAR(elapsed,"elapsed");
	HX_STACK_LINE(80)
	hx::AddEq(gx,group->x);
	HX_STACK_LINE(81)
	hx::AddEq(gy,group->y);
	HX_STACK_LINE(84)
	int n = (  (((group->children != null()))) ? int(group->children->length) : int((int)0) );		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		while(((_g < n))){
			HX_STACK_LINE(85)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(87)
			::aze::display::TileBase child = group->children->__get(i);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(88)
			if ((child->animated)){
				HX_STACK_LINE(88)
				child->step(elapsed);
			}
			HX_STACK_LINE(93)
			if ((!(child->visible))){
				HX_STACK_LINE(94)
				continue;
			}
			HX_STACK_LINE(95)
			::aze::display::TileGroup group1 = child;		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(98)
			if (((group1 != null()))){
				HX_STACK_LINE(99)
				index = this->renderGroup(group1,index,gx,gy);
			}
			else{
				HX_STACK_LINE(104)
				::aze::display::TileSprite sprite = child;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(122)
				if (((sprite->alpha <= 0.0))){
					HX_STACK_LINE(122)
					continue;
				}
				HX_STACK_LINE(123)
				list[index] = (sprite->x + gx);
				HX_STACK_LINE(124)
				list[(index + (int)1)] = (sprite->y + gy);
				HX_STACK_LINE(125)
				list[(index + (int)2)] = sprite->_indice;
				HX_STACK_LINE(126)
				if (((offsetTransform > (int)0))){
					HX_STACK_LINE(127)
					Array< Float > t = sprite->get_transform();		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(128)
					list[(index + offsetTransform)] = t->__get((int)0);
					HX_STACK_LINE(129)
					list[((index + offsetTransform) + (int)1)] = t->__get((int)1);
					HX_STACK_LINE(130)
					list[((index + offsetTransform) + (int)2)] = t->__get((int)2);
					HX_STACK_LINE(131)
					list[((index + offsetTransform) + (int)3)] = t->__get((int)3);
				}
				HX_STACK_LINE(133)
				if (((offsetRGB > (int)0))){
					HX_STACK_LINE(134)
					list[(index + offsetRGB)] = sprite->r;
					HX_STACK_LINE(135)
					list[((index + offsetRGB) + (int)1)] = sprite->g;
					HX_STACK_LINE(136)
					list[((index + offsetRGB) + (int)2)] = sprite->b;
				}
				HX_STACK_LINE(138)
				if (((offsetAlpha > (int)0))){
					HX_STACK_LINE(138)
					list[(index + offsetAlpha)] = sprite->alpha;
				}
				HX_STACK_LINE(139)
				hx::AddEq(index,fields);
			}
		}
	}
	HX_STACK_LINE(143)
	this->drawList->index = index;
	HX_STACK_LINE(144)
	return index;
}


HX_DEFINE_DYNAMIC_FUNC4(TileLayer_obj,renderGroup,return )

int TileLayer_obj::render( Dynamic elapsed){
	HX_STACK_PUSH("TileLayer::render","aze/display/TileLayer.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(elapsed,"elapsed");
	HX_STACK_LINE(54)
	this->drawList->begin((  (((elapsed == null()))) ? Dynamic((int)0) : Dynamic(elapsed) ),this->useTransforms,this->useAlpha,this->useTint,this->useAdditive);
	HX_STACK_LINE(55)
	this->renderGroup(hx::ObjectPtr<OBJ_>(this),(int)0,(int)0,(int)0);
	HX_STACK_LINE(56)
	this->drawList->end();
	HX_STACK_LINE(60)
	this->view->get_graphics()->clear();
	HX_STACK_LINE(61)
	this->tilesheet->drawTiles(this->view->get_graphics(),this->drawList->list,this->useSmoothing,this->drawList->flags);
	HX_STACK_LINE(63)
	return this->drawList->elapsed;
}


HX_DEFINE_DYNAMIC_FUNC1(TileLayer_obj,render,return )

Float TileLayer_obj::synchronizedElapsed;


TileLayer_obj::TileLayer_obj()
{
}

void TileLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileLayer);
	HX_MARK_MEMBER_NAME(drawList,"drawList");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_MEMBER_NAME(useTint,"useTint");
	HX_MARK_MEMBER_NAME(useTransforms,"useTransforms");
	HX_MARK_MEMBER_NAME(useAlpha,"useAlpha");
	HX_MARK_MEMBER_NAME(useAdditive,"useAdditive");
	HX_MARK_MEMBER_NAME(useSmoothing,"useSmoothing");
	HX_MARK_MEMBER_NAME(view,"view");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(drawList,"drawList");
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
	HX_VISIT_MEMBER_NAME(useTint,"useTint");
	HX_VISIT_MEMBER_NAME(useTransforms,"useTransforms");
	HX_VISIT_MEMBER_NAME(useAlpha,"useAlpha");
	HX_VISIT_MEMBER_NAME(useAdditive,"useAdditive");
	HX_VISIT_MEMBER_NAME(useSmoothing,"useSmoothing");
	HX_VISIT_MEMBER_NAME(view,"view");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TileLayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"useTint") ) { return useTint; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawList") ) { return drawList; }
		if (HX_FIELD_EQ(inName,"useAlpha") ) { return useAlpha; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return tilesheet; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderGroup") ) { return renderGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"useAdditive") ) { return useAdditive; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useSmoothing") ) { return useSmoothing; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useTransforms") ) { return useTransforms; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"synchronizedElapsed") ) { return synchronizedElapsed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"useTint") ) { useTint=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawList") ) { drawList=inValue.Cast< ::aze::display::DrawList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useAlpha") ) { useAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::aze::display::TilesheetEx >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useAdditive") ) { useAdditive=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useSmoothing") ) { useSmoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useTransforms") ) { useTransforms=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"synchronizedElapsed") ) { synchronizedElapsed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("drawList"));
	outFields->push(HX_CSTRING("tilesheet"));
	outFields->push(HX_CSTRING("useTint"));
	outFields->push(HX_CSTRING("useTransforms"));
	outFields->push(HX_CSTRING("useAlpha"));
	outFields->push(HX_CSTRING("useAdditive"));
	outFields->push(HX_CSTRING("useSmoothing"));
	outFields->push(HX_CSTRING("view"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("synchronizedElapsed"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("renderGroup"),
	HX_CSTRING("render"),
	HX_CSTRING("drawList"),
	HX_CSTRING("tilesheet"),
	HX_CSTRING("useTint"),
	HX_CSTRING("useTransforms"),
	HX_CSTRING("useAlpha"),
	HX_CSTRING("useAdditive"),
	HX_CSTRING("useSmoothing"),
	HX_CSTRING("view"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileLayer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TileLayer_obj::synchronizedElapsed,"synchronizedElapsed");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileLayer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileLayer_obj::synchronizedElapsed,"synchronizedElapsed");
};

Class TileLayer_obj::__mClass;

void TileLayer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("aze.display.TileLayer"), hx::TCanCast< TileLayer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileLayer_obj::__boot()
{
}

} // end namespace aze
} // end namespace display
