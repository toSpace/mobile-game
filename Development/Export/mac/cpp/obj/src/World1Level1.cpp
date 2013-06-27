#include <hxcpp.h>

#ifndef INCLUDED_BackgroundObject
#include <BackgroundObject.h>
#endif
#ifndef INCLUDED_Level
#include <Level.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_World1Level1
#include <World1Level1.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void World1Level1_obj::__construct()
{
HX_STACK_PUSH("World1Level1::new","World1Level1.hx",2);
{
	HX_STACK_LINE(2)
	super::__construct();
}
;
	return null();
}

World1Level1_obj::~World1Level1_obj() { }

Dynamic World1Level1_obj::__CreateEmpty() { return  new World1Level1_obj; }
hx::ObjectPtr< World1Level1_obj > World1Level1_obj::__new()
{  hx::ObjectPtr< World1Level1_obj > result = new World1Level1_obj();
	result->__construct();
	return result;}

Dynamic World1Level1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< World1Level1_obj > result = new World1Level1_obj();
	result->__construct();
	return result;}

Void World1Level1_obj::loadLevel( ){
{
		HX_STACK_PUSH("World1Level1::loadLevel","World1Level1.hx",4);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12)
		::BackgroundObject lvl1_bg_l6_background = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l6/lvl1_bg_l6_background.xml"));		HX_STACK_VAR(lvl1_bg_l6_background,"lvl1_bg_l6_background");
		HX_STACK_LINE(13)
		::BackgroundObject lvl1_bg_l6_sun = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml"));		HX_STACK_VAR(lvl1_bg_l6_sun,"lvl1_bg_l6_sun");
		HX_STACK_LINE(18)
		::BackgroundObject lvl1_bg_l5_tree1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml"));		HX_STACK_VAR(lvl1_bg_l5_tree1,"lvl1_bg_l5_tree1");
		HX_STACK_LINE(19)
		::BackgroundObject lvl1_bg_l5_tree2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml"));		HX_STACK_VAR(lvl1_bg_l5_tree2,"lvl1_bg_l5_tree2");
		HX_STACK_LINE(20)
		::BackgroundObject lvl1_bg_l5_tree3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml"));		HX_STACK_VAR(lvl1_bg_l5_tree3,"lvl1_bg_l5_tree3");
		HX_STACK_LINE(21)
		::BackgroundObject lvl1_bg_l5_tree4 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml"));		HX_STACK_VAR(lvl1_bg_l5_tree4,"lvl1_bg_l5_tree4");
		HX_STACK_LINE(22)
		::BackgroundObject lvl1_bg_l5_tree5 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml"));		HX_STACK_VAR(lvl1_bg_l5_tree5,"lvl1_bg_l5_tree5");
		HX_STACK_LINE(23)
		::BackgroundObject lvl1_bg_l5_tree6 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml"));		HX_STACK_VAR(lvl1_bg_l5_tree6,"lvl1_bg_l5_tree6");
		HX_STACK_LINE(26)
		::BackgroundObject lvl1_bg_l4_hill1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml"));		HX_STACK_VAR(lvl1_bg_l4_hill1,"lvl1_bg_l4_hill1");
		HX_STACK_LINE(27)
		::BackgroundObject lvl1_bg_l4_hill2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml"));		HX_STACK_VAR(lvl1_bg_l4_hill2,"lvl1_bg_l4_hill2");
		HX_STACK_LINE(28)
		::BackgroundObject lvl1_bg_l4_hill3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml"));		HX_STACK_VAR(lvl1_bg_l4_hill3,"lvl1_bg_l4_hill3");
		HX_STACK_LINE(30)
		::BackgroundObject lvl1_bg_l4_tree2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml"));		HX_STACK_VAR(lvl1_bg_l4_tree2,"lvl1_bg_l4_tree2");
		HX_STACK_LINE(31)
		::BackgroundObject lvl1_bg_l4_tree3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml"));		HX_STACK_VAR(lvl1_bg_l4_tree3,"lvl1_bg_l4_tree3");
		HX_STACK_LINE(32)
		::BackgroundObject lvl1_bg_l4_tree4 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml"));		HX_STACK_VAR(lvl1_bg_l4_tree4,"lvl1_bg_l4_tree4");
		HX_STACK_LINE(33)
		::BackgroundObject lvl1_bg_l4_tree5 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml"));		HX_STACK_VAR(lvl1_bg_l4_tree5,"lvl1_bg_l4_tree5");
		HX_STACK_LINE(34)
		::BackgroundObject lvl1_bg_l4_tree6 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml"));		HX_STACK_VAR(lvl1_bg_l4_tree6,"lvl1_bg_l4_tree6");
		HX_STACK_LINE(35)
		::BackgroundObject lvl1_bg_l4_tree7 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml"));		HX_STACK_VAR(lvl1_bg_l4_tree7,"lvl1_bg_l4_tree7");
		HX_STACK_LINE(36)
		::BackgroundObject lvl1_bg_l4_fog1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml"));		HX_STACK_VAR(lvl1_bg_l4_fog1,"lvl1_bg_l4_fog1");
		HX_STACK_LINE(39)
		::BackgroundObject lvl1_bg_l3_tree1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree1,"lvl1_bg_l3_tree1");
		HX_STACK_LINE(40)
		::BackgroundObject lvl1_bg_l3_tree2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree2,"lvl1_bg_l3_tree2");
		HX_STACK_LINE(41)
		::BackgroundObject lvl1_bg_l3_tree3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree3,"lvl1_bg_l3_tree3");
		HX_STACK_LINE(42)
		::BackgroundObject lvl1_bg_l3_tree4 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree4,"lvl1_bg_l3_tree4");
		HX_STACK_LINE(43)
		::BackgroundObject lvl1_bg_l3_tree5 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree5,"lvl1_bg_l3_tree5");
		HX_STACK_LINE(44)
		::BackgroundObject lvl1_bg_l3_tree6 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree6,"lvl1_bg_l3_tree6");
		HX_STACK_LINE(45)
		::BackgroundObject lvl1_bg_l3_tree7 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree7,"lvl1_bg_l3_tree7");
		HX_STACK_LINE(46)
		::BackgroundObject lvl1_bg_l3_tree8 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree8,"lvl1_bg_l3_tree8");
		HX_STACK_LINE(47)
		::BackgroundObject lvl1_bg_l3_tree9 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree9,"lvl1_bg_l3_tree9");
		HX_STACK_LINE(48)
		::BackgroundObject lvl1_bg_l3_tree10 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree10,"lvl1_bg_l3_tree10");
		HX_STACK_LINE(49)
		::BackgroundObject lvl1_bg_l3_tree11 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree11,"lvl1_bg_l3_tree11");
		HX_STACK_LINE(52)
		::BackgroundObject lvl1_bg_l2_tree1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml"));		HX_STACK_VAR(lvl1_bg_l2_tree1,"lvl1_bg_l2_tree1");
		HX_STACK_LINE(53)
		::BackgroundObject lvl1_bg_l2_tree2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml"));		HX_STACK_VAR(lvl1_bg_l2_tree2,"lvl1_bg_l2_tree2");
		HX_STACK_LINE(54)
		::BackgroundObject lvl1_bg_l2_tree3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml"));		HX_STACK_VAR(lvl1_bg_l2_tree3,"lvl1_bg_l2_tree3");
		HX_STACK_LINE(55)
		::BackgroundObject lvl1_bg_l2_tree4 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml"));		HX_STACK_VAR(lvl1_bg_l2_tree4,"lvl1_bg_l2_tree4");
		HX_STACK_LINE(56)
		::BackgroundObject lvl1_bg_l2_tree5 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml"));		HX_STACK_VAR(lvl1_bg_l2_tree5,"lvl1_bg_l2_tree5");
		HX_STACK_LINE(57)
		::BackgroundObject lvl1_bg_l2_fog1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml"));		HX_STACK_VAR(lvl1_bg_l2_fog1,"lvl1_bg_l2_fog1");
		HX_STACK_LINE(60)
		::BackgroundObject lvl1_bg_l1_hill1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml"));		HX_STACK_VAR(lvl1_bg_l1_hill1,"lvl1_bg_l1_hill1");
		HX_STACK_LINE(61)
		::BackgroundObject lvl1_bg_l1_hill2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml"));		HX_STACK_VAR(lvl1_bg_l1_hill2,"lvl1_bg_l1_hill2");
		HX_STACK_LINE(62)
		::BackgroundObject lvl1_bg_l1_hill3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml"));		HX_STACK_VAR(lvl1_bg_l1_hill3,"lvl1_bg_l1_hill3");
		HX_STACK_LINE(63)
		::BackgroundObject lvl1_bg_l1_hill4 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml"));		HX_STACK_VAR(lvl1_bg_l1_hill4,"lvl1_bg_l1_hill4");
		HX_STACK_LINE(64)
		::BackgroundObject lvl1_bg_l1_fog1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml"));		HX_STACK_VAR(lvl1_bg_l1_fog1,"lvl1_bg_l1_fog1");
		HX_STACK_LINE(94)
		::haxe::Log_obj::trace(::Main_obj::canvas,hx::SourceInfo(HX_CSTRING("World1Level1.hx"),94,HX_CSTRING("World1Level1"),HX_CSTRING("loadLevel")));
		HX_STACK_LINE(99)
		this->start();
	}
return null();
}



World1Level1_obj::World1Level1_obj()
{
}

void World1Level1_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(World1Level1);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void World1Level1_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic World1Level1_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"loadLevel") ) { return loadLevel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic World1Level1_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void World1Level1_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadLevel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(World1Level1_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(World1Level1_obj::__mClass,"__mClass");
};

Class World1Level1_obj::__mClass;

void World1Level1_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("World1Level1"), hx::TCanCast< World1Level1_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void World1Level1_obj::__boot()
{
}

