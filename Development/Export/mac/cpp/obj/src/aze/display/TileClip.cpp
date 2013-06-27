#include <hxcpp.h>

#ifndef INCLUDED_aze_display_TileBase
#include <aze/display/TileBase.h>
#endif
#ifndef INCLUDED_aze_display_TileClip
#include <aze/display/TileClip.h>
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

Void TileClip_obj::__construct(::aze::display::TileLayer layer,::String tile,hx::Null< int >  __o_fps)
{
HX_STACK_PUSH("TileClip::new","aze/display/TileClip.hx",21);
int fps = __o_fps.Default(18);
{
	HX_STACK_LINE(22)
	super::__construct(layer,tile);
	HX_STACK_LINE(23)
	this->fps = fps;
	HX_STACK_LINE(24)
	this->animated = this->loop = true;
}
;
	return null();
}

TileClip_obj::~TileClip_obj() { }

Dynamic TileClip_obj::__CreateEmpty() { return  new TileClip_obj; }
hx::ObjectPtr< TileClip_obj > TileClip_obj::__new(::aze::display::TileLayer layer,::String tile,hx::Null< int >  __o_fps)
{  hx::ObjectPtr< TileClip_obj > result = new TileClip_obj();
	result->__construct(layer,tile,__o_fps);
	return result;}

Dynamic TileClip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileClip_obj > result = new TileClip_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int TileClip_obj::get_totalFrames( ){
	HX_STACK_PUSH("TileClip::get_totalFrames","aze/display/TileClip.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_LINE(89)
	return this->frames->length;
}


HX_DEFINE_DYNAMIC_FUNC0(TileClip_obj,get_totalFrames,return )

int TileClip_obj::set_currentFrame( int value){
	HX_STACK_PUSH("TileClip::set_currentFrame","aze/display/TileClip.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(80)
	if (((value >= this->frames->length))){
		HX_STACK_LINE(80)
		value = (this->frames->length - (int)1);
	}
	HX_STACK_LINE(81)
	this->time = (::Math_obj::floor((Float(((int)1000 * value)) / Float(this->fps))) + (int)1);
	HX_STACK_LINE(82)
	this->set_indice(this->frames->__get(value));
	HX_STACK_LINE(83)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TileClip_obj,set_currentFrame,return )

int TileClip_obj::get_currentFrame( ){
	HX_STACK_PUSH("TileClip::get_currentFrame","aze/display/TileClip.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_LINE(75)
	int frame = ::Math_obj::floor(((Float(this->time) / Float((int)1000)) * this->fps));		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(76)
	return hx::Mod(frame,this->frames->length);
}


HX_DEFINE_DYNAMIC_FUNC0(TileClip_obj,get_currentFrame,return )

Void TileClip_obj::stop( ){
{
		HX_STACK_PUSH("TileClip::stop","aze/display/TileClip.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_LINE(69)
		this->animated = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileClip_obj,stop,(void))

Void TileClip_obj::play( ){
{
		HX_STACK_PUSH("TileClip::play","aze/display/TileClip.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_LINE(58)
		if ((!(this->animated))){
			HX_STACK_LINE(61)
			this->animated = true;
			HX_STACK_LINE(62)
			if (((this->get_currentFrame() == (this->frames->length - (int)1)))){
				HX_STACK_LINE(64)
				this->set_currentFrame((int)0);
				HX_STACK_LINE(65)
				this->prevFrame = (int)-1;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileClip_obj,play,(void))

Void TileClip_obj::step( int elapsed){
{
		HX_STACK_PUSH("TileClip::step","aze/display/TileClip.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsed,"elapsed");
		HX_STACK_LINE(39)
		hx::AddEq(this->time,elapsed);
		HX_STACK_LINE(40)
		int newFrame = this->get_currentFrame();		HX_STACK_VAR(newFrame,"newFrame");
		HX_STACK_LINE(41)
		if (((newFrame == this->prevFrame))){
			HX_STACK_LINE(41)
			return null();
		}
		HX_STACK_LINE(42)
		bool looping = (newFrame < this->prevFrame);		HX_STACK_VAR(looping,"looping");
		HX_STACK_LINE(43)
		this->prevFrame = newFrame;
		HX_STACK_LINE(44)
		if ((looping)){
			HX_STACK_LINE(46)
			if ((!(this->loop))){
				HX_STACK_LINE(48)
				this->animated = false;
				HX_STACK_LINE(49)
				this->set_currentFrame((this->frames->length - (int)1));
			}
			else{
				HX_STACK_LINE(51)
				this->set_indice(this->frames->__get(newFrame));
			}
			HX_STACK_LINE(52)
			if (((this->onComplete_dyn() != null()))){
				HX_STACK_LINE(52)
				this->onComplete(hx::ObjectPtr<OBJ_>(this));
			}
		}
		else{
			HX_STACK_LINE(54)
			this->set_indice(this->frames->__get(newFrame));
		}
	}
return null();
}


Void TileClip_obj::init( ::aze::display::TileLayer layer){
{
		HX_STACK_PUSH("TileClip::init","aze/display/TileClip.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer,"layer");
		HX_STACK_LINE(29)
		this->layer = layer;
		HX_STACK_LINE(30)
		this->frames = layer->tilesheet->getAnim(this->_tile);
		HX_STACK_LINE(31)
		this->set_indice(this->frames->__get((int)0));
		struct _Function_1_1{
			inline static ::flash::geom::Rectangle Block( ::aze::display::TileClip_obj *__this,::aze::display::TileLayer &layer){
				HX_STACK_PUSH("*::closure","aze/display/TileClip.hx",32);
				{
					HX_STACK_LINE(32)
					::aze::display::TilesheetEx _this = layer->tilesheet;		HX_STACK_VAR(_this,"_this");
					int indice = __this->_indice;		HX_STACK_VAR(indice,"indice");
					HX_STACK_LINE(32)
					return (  (((indice < _this->sizes->length))) ? ::flash::geom::Rectangle(_this->sizes->__get(indice).StaticCast< ::flash::geom::Rectangle >()) : ::flash::geom::Rectangle(::flash::geom::Rectangle_obj::__new(null(),null(),null(),null())) );
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		this->size = _Function_1_1::Block(this,layer);
		HX_STACK_LINE(33)
		this->time = (int)0;
		HX_STACK_LINE(34)
		this->prevFrame = (int)-1;
	}
return null();
}



TileClip_obj::TileClip_obj()
{
}

void TileClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileClip);
	HX_MARK_MEMBER_NAME(totalFrames,"totalFrames");
	HX_MARK_MEMBER_NAME(prevFrame,"prevFrame");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(fps,"fps");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileClip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(totalFrames,"totalFrames");
	HX_VISIT_MEMBER_NAME(prevFrame,"prevFrame");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(fps,"fps");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TileClip_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { return fps; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return prevFrame; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return inCallProp ? get_totalFrames() : totalFrames; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return get_currentFrame(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_totalFrames") ) { return get_totalFrames_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_currentFrame") ) { return set_currentFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentFrame") ) { return get_currentFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileClip_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { fps=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"prevFrame") ) { prevFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return set_currentFrame(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("totalFrames"));
	outFields->push(HX_CSTRING("currentFrame"));
	outFields->push(HX_CSTRING("prevFrame"));
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("loop"));
	outFields->push(HX_CSTRING("fps"));
	outFields->push(HX_CSTRING("frames"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_totalFrames"),
	HX_CSTRING("totalFrames"),
	HX_CSTRING("set_currentFrame"),
	HX_CSTRING("get_currentFrame"),
	HX_CSTRING("stop"),
	HX_CSTRING("play"),
	HX_CSTRING("step"),
	HX_CSTRING("init"),
	HX_CSTRING("prevFrame"),
	HX_CSTRING("time"),
	HX_CSTRING("loop"),
	HX_CSTRING("fps"),
	HX_CSTRING("frames"),
	HX_CSTRING("onComplete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileClip_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileClip_obj::__mClass,"__mClass");
};

Class TileClip_obj::__mClass;

void TileClip_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aze.display.TileClip"), hx::TCanCast< TileClip_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileClip_obj::__boot()
{
}

} // end namespace aze
} // end namespace display
