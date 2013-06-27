#include <hxcpp.h>

#ifndef INCLUDED_aze_display_DrawList
#include <aze/display/DrawList.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace aze{
namespace display{

Void DrawList_obj::__construct()
{
HX_STACK_PUSH("DrawList::new","aze/display/TileLayer.hx",229);
{
	HX_STACK_LINE(230)
	this->list = Array_obj< Float >::__new();
	HX_STACK_LINE(231)
	this->elapsed = (int)0;
	HX_STACK_LINE(232)
	this->runs = (int)0;
}
;
	return null();
}

DrawList_obj::~DrawList_obj() { }

Dynamic DrawList_obj::__CreateEmpty() { return  new DrawList_obj; }
hx::ObjectPtr< DrawList_obj > DrawList_obj::__new()
{  hx::ObjectPtr< DrawList_obj > result = new DrawList_obj();
	result->__construct();
	return result;}

Dynamic DrawList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawList_obj > result = new DrawList_obj();
	result->__construct();
	return result;}

Void DrawList_obj::end( ){
{
		HX_STACK_PUSH("DrawList::end","aze/display/TileLayer.hx",279);
		HX_STACK_THIS(this);
		HX_STACK_LINE(279)
		if (((this->list->length > this->index))){
			HX_STACK_LINE(281)
			if (((++(this->runs) > (int)60))){
				HX_STACK_LINE(284)
				this->list->splice(this->index,(this->list->length - this->index));
				HX_STACK_LINE(285)
				this->runs = (int)0;
			}
			else{
				HX_STACK_LINE(288)
				while(((this->index < this->list->length))){
					HX_STACK_LINE(291)
					this->list[(this->index + (int)2)] = -2.0;
					HX_STACK_LINE(292)
					hx::AddEq(this->index,this->fields);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawList_obj,end,(void))

Void DrawList_obj::begin( int elapsed,bool useTransforms,bool useAlpha,bool useTint,bool useAdditive){
{
		HX_STACK_PUSH("DrawList::begin","aze/display/TileLayer.hx",240);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsed,"elapsed");
		HX_STACK_ARG(useTransforms,"useTransforms");
		HX_STACK_ARG(useAlpha,"useAlpha");
		HX_STACK_ARG(useTint,"useTint");
		HX_STACK_ARG(useAdditive,"useAdditive");
		HX_STACK_LINE(242)
		this->flags = (int)0;
		HX_STACK_LINE(243)
		this->fields = (int)3;
		HX_STACK_LINE(244)
		if ((useTransforms)){
			HX_STACK_LINE(245)
			this->offsetTransform = this->fields;
			HX_STACK_LINE(246)
			hx::AddEq(this->fields,(int)4);
			HX_STACK_LINE(247)
			hx::OrEq(this->flags,(int)16);
		}
		else{
			HX_STACK_LINE(249)
			this->offsetTransform = (int)0;
		}
		HX_STACK_LINE(250)
		if ((useTint)){
			HX_STACK_LINE(251)
			this->offsetRGB = this->fields;
			HX_STACK_LINE(252)
			hx::AddEq(this->fields,(int)3);
			HX_STACK_LINE(253)
			hx::OrEq(this->flags,(int)4);
		}
		else{
			HX_STACK_LINE(255)
			this->offsetRGB = (int)0;
		}
		HX_STACK_LINE(256)
		if ((useAlpha)){
			HX_STACK_LINE(257)
			this->offsetAlpha = this->fields;
			HX_STACK_LINE(258)
			(this->fields)++;
			HX_STACK_LINE(259)
			hx::OrEq(this->flags,(int)8);
		}
		else{
			HX_STACK_LINE(261)
			this->offsetAlpha = (int)0;
		}
		HX_STACK_LINE(262)
		if ((useAdditive)){
			HX_STACK_LINE(262)
			hx::OrEq(this->flags,(int)65536);
		}
		HX_STACK_LINE(265)
		if (((elapsed > (int)0))){
			HX_STACK_LINE(265)
			this->elapsed = elapsed;
		}
		else{
			HX_STACK_LINE(268)
			this->index = (int)0;
			HX_STACK_LINE(269)
			if (((this->time > (int)0))){
				HX_STACK_LINE(270)
				int t = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(271)
				this->elapsed = ::Math_obj::min((int)67,(t - this->time));
				HX_STACK_LINE(272)
				this->time = t;
			}
			else{
				HX_STACK_LINE(274)
				this->time = ::flash::Lib_obj::getTimer();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(DrawList_obj,begin,(void))


DrawList_obj::DrawList_obj()
{
}

void DrawList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawList);
	HX_MARK_MEMBER_NAME(runs,"runs");
	HX_MARK_MEMBER_NAME(elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(offsetAlpha,"offsetAlpha");
	HX_MARK_MEMBER_NAME(offsetRGB,"offsetRGB");
	HX_MARK_MEMBER_NAME(offsetTransform,"offsetTransform");
	HX_MARK_MEMBER_NAME(fields,"fields");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void DrawList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(runs,"runs");
	HX_VISIT_MEMBER_NAME(elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(offsetAlpha,"offsetAlpha");
	HX_VISIT_MEMBER_NAME(offsetRGB,"offsetRGB");
	HX_VISIT_MEMBER_NAME(offsetTransform,"offsetTransform");
	HX_VISIT_MEMBER_NAME(fields,"fields");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic DrawList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"runs") ) { return runs; }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"flags") ) { return flags; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { return fields; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetRGB") ) { return offsetRGB; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"offsetAlpha") ) { return offsetAlpha; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"offsetTransform") ) { return offsetTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"runs") ) { runs=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { fields=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetRGB") ) { offsetRGB=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"offsetAlpha") ) { offsetAlpha=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"offsetTransform") ) { offsetTransform=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("runs"));
	outFields->push(HX_CSTRING("elapsed"));
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("flags"));
	outFields->push(HX_CSTRING("offsetAlpha"));
	outFields->push(HX_CSTRING("offsetRGB"));
	outFields->push(HX_CSTRING("offsetTransform"));
	outFields->push(HX_CSTRING("fields"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("end"),
	HX_CSTRING("begin"),
	HX_CSTRING("runs"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("time"),
	HX_CSTRING("flags"),
	HX_CSTRING("offsetAlpha"),
	HX_CSTRING("offsetRGB"),
	HX_CSTRING("offsetTransform"),
	HX_CSTRING("fields"),
	HX_CSTRING("index"),
	HX_CSTRING("list"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawList_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawList_obj::__mClass,"__mClass");
};

Class DrawList_obj::__mClass;

void DrawList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("aze.display.DrawList"), hx::TCanCast< DrawList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DrawList_obj::__boot()
{
}

} // end namespace aze
} // end namespace display
