#include <hxcpp.h>

#ifndef INCLUDED_BackgroundObject
#include <BackgroundObject.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_DrawObject
#include <DrawObject.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_Level
#include <Level.h>
#endif
#ifndef INCLUDED_Lucy
#include <Lucy.h>
#endif
#ifndef INCLUDED_World1Level1
#include <World1Level1.h>
#endif

Void World1Level1_obj::__construct()
{
HX_STACK_PUSH("World1Level1::new","World1Level1.hx",1);
{
	HX_STACK_LINE(1)
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
		HX_STACK_PUSH("World1Level1::loadLevel","World1Level1.hx",3);
		HX_STACK_THIS(this);
		HX_STACK_LINE(14)
		::BackgroundObject lvl1_bg_l6_background = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l6/lvl1_bg_l6_background.xml"));		HX_STACK_VAR(lvl1_bg_l6_background,"lvl1_bg_l6_background");
		HX_STACK_LINE(15)
		::BackgroundObject lvl1_bg_l6_sun = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml"));		HX_STACK_VAR(lvl1_bg_l6_sun,"lvl1_bg_l6_sun");
		HX_STACK_LINE(20)
		::BackgroundObject lvl1_bg_l5_tree1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml"));		HX_STACK_VAR(lvl1_bg_l5_tree1,"lvl1_bg_l5_tree1");
		HX_STACK_LINE(21)
		::BackgroundObject lvl1_bg_l5_tree2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml"));		HX_STACK_VAR(lvl1_bg_l5_tree2,"lvl1_bg_l5_tree2");
		HX_STACK_LINE(22)
		::BackgroundObject lvl1_bg_l5_tree3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml"));		HX_STACK_VAR(lvl1_bg_l5_tree3,"lvl1_bg_l5_tree3");
		HX_STACK_LINE(23)
		::BackgroundObject lvl1_bg_l5_tree4 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml"));		HX_STACK_VAR(lvl1_bg_l5_tree4,"lvl1_bg_l5_tree4");
		HX_STACK_LINE(24)
		::BackgroundObject lvl1_bg_l5_tree5 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml"));		HX_STACK_VAR(lvl1_bg_l5_tree5,"lvl1_bg_l5_tree5");
		HX_STACK_LINE(25)
		::BackgroundObject lvl1_bg_l5_tree6 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml"));		HX_STACK_VAR(lvl1_bg_l5_tree6,"lvl1_bg_l5_tree6");
		HX_STACK_LINE(28)
		::BackgroundObject lvl1_bg_l4_hill1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml"));		HX_STACK_VAR(lvl1_bg_l4_hill1,"lvl1_bg_l4_hill1");
		HX_STACK_LINE(29)
		::BackgroundObject lvl1_bg_l4_hill2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml"));		HX_STACK_VAR(lvl1_bg_l4_hill2,"lvl1_bg_l4_hill2");
		HX_STACK_LINE(30)
		::BackgroundObject lvl1_bg_l4_hill3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml"));		HX_STACK_VAR(lvl1_bg_l4_hill3,"lvl1_bg_l4_hill3");
		HX_STACK_LINE(32)
		::BackgroundObject lvl1_bg_l4_tree2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml"));		HX_STACK_VAR(lvl1_bg_l4_tree2,"lvl1_bg_l4_tree2");
		HX_STACK_LINE(33)
		::BackgroundObject lvl1_bg_l4_tree3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml"));		HX_STACK_VAR(lvl1_bg_l4_tree3,"lvl1_bg_l4_tree3");
		HX_STACK_LINE(34)
		::BackgroundObject lvl1_bg_l4_tree4 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml"));		HX_STACK_VAR(lvl1_bg_l4_tree4,"lvl1_bg_l4_tree4");
		HX_STACK_LINE(35)
		::BackgroundObject lvl1_bg_l4_tree5 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml"));		HX_STACK_VAR(lvl1_bg_l4_tree5,"lvl1_bg_l4_tree5");
		HX_STACK_LINE(36)
		::BackgroundObject lvl1_bg_l4_tree6 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml"));		HX_STACK_VAR(lvl1_bg_l4_tree6,"lvl1_bg_l4_tree6");
		HX_STACK_LINE(37)
		::BackgroundObject lvl1_bg_l4_tree7 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml"));		HX_STACK_VAR(lvl1_bg_l4_tree7,"lvl1_bg_l4_tree7");
		HX_STACK_LINE(38)
		::BackgroundObject lvl1_bg_l4_fog1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml"));		HX_STACK_VAR(lvl1_bg_l4_fog1,"lvl1_bg_l4_fog1");
		HX_STACK_LINE(41)
		::BackgroundObject lvl1_bg_l3_tree1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree1,"lvl1_bg_l3_tree1");
		HX_STACK_LINE(42)
		::BackgroundObject lvl1_bg_l3_tree2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree2,"lvl1_bg_l3_tree2");
		HX_STACK_LINE(43)
		::BackgroundObject lvl1_bg_l3_tree3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree3,"lvl1_bg_l3_tree3");
		HX_STACK_LINE(44)
		::BackgroundObject lvl1_bg_l3_tree4 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree4,"lvl1_bg_l3_tree4");
		HX_STACK_LINE(45)
		::BackgroundObject lvl1_bg_l3_tree5 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree5,"lvl1_bg_l3_tree5");
		HX_STACK_LINE(46)
		::BackgroundObject lvl1_bg_l3_tree6 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree6,"lvl1_bg_l3_tree6");
		HX_STACK_LINE(47)
		::BackgroundObject lvl1_bg_l3_tree7 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree7,"lvl1_bg_l3_tree7");
		HX_STACK_LINE(48)
		::BackgroundObject lvl1_bg_l3_tree8 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree8,"lvl1_bg_l3_tree8");
		HX_STACK_LINE(49)
		::BackgroundObject lvl1_bg_l3_tree9 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree9,"lvl1_bg_l3_tree9");
		HX_STACK_LINE(50)
		::BackgroundObject lvl1_bg_l3_tree10 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree10,"lvl1_bg_l3_tree10");
		HX_STACK_LINE(51)
		::BackgroundObject lvl1_bg_l3_tree11 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml"));		HX_STACK_VAR(lvl1_bg_l3_tree11,"lvl1_bg_l3_tree11");
		HX_STACK_LINE(54)
		::BackgroundObject lvl1_bg_l2_tree1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml"));		HX_STACK_VAR(lvl1_bg_l2_tree1,"lvl1_bg_l2_tree1");
		HX_STACK_LINE(55)
		::BackgroundObject lvl1_bg_l2_tree2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml"));		HX_STACK_VAR(lvl1_bg_l2_tree2,"lvl1_bg_l2_tree2");
		HX_STACK_LINE(56)
		::BackgroundObject lvl1_bg_l2_tree3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml"));		HX_STACK_VAR(lvl1_bg_l2_tree3,"lvl1_bg_l2_tree3");
		HX_STACK_LINE(57)
		::BackgroundObject lvl1_bg_l2_tree4 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml"));		HX_STACK_VAR(lvl1_bg_l2_tree4,"lvl1_bg_l2_tree4");
		HX_STACK_LINE(58)
		::BackgroundObject lvl1_bg_l2_tree5 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml"));		HX_STACK_VAR(lvl1_bg_l2_tree5,"lvl1_bg_l2_tree5");
		HX_STACK_LINE(59)
		::BackgroundObject lvl1_bg_l2_fog1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml"));		HX_STACK_VAR(lvl1_bg_l2_fog1,"lvl1_bg_l2_fog1");
		HX_STACK_LINE(64)
		::BackgroundObject lvl1_bg_l1_hill1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml"));		HX_STACK_VAR(lvl1_bg_l1_hill1,"lvl1_bg_l1_hill1");
		HX_STACK_LINE(65)
		::BackgroundObject lvl1_bg_l1_hill2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml"));		HX_STACK_VAR(lvl1_bg_l1_hill2,"lvl1_bg_l1_hill2");
		HX_STACK_LINE(66)
		::BackgroundObject lvl1_bg_l1_hill3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml"));		HX_STACK_VAR(lvl1_bg_l1_hill3,"lvl1_bg_l1_hill3");
		HX_STACK_LINE(67)
		::BackgroundObject lvl1_bg_l1_hill4 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml"));		HX_STACK_VAR(lvl1_bg_l1_hill4,"lvl1_bg_l1_hill4");
		HX_STACK_LINE(68)
		::BackgroundObject lvl1_bg_l1_fog1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml"));		HX_STACK_VAR(lvl1_bg_l1_fog1,"lvl1_bg_l1_fog1");
		HX_STACK_LINE(71)
		::DrawObject lvl1_fg_l1_1 = ::DrawObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l1/lvl1_fg_l1_1.xml"));		HX_STACK_VAR(lvl1_fg_l1_1,"lvl1_fg_l1_1");
		HX_STACK_LINE(72)
		::DrawObject lvl1_fg_l1_2 = ::DrawObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l1/lvl1_fg_l1_2.xml"));		HX_STACK_VAR(lvl1_fg_l1_2,"lvl1_fg_l1_2");
		HX_STACK_LINE(73)
		::DrawObject lvl1_fg_l1_3 = ::DrawObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l1/lvl1_fg_l1_3.xml"));		HX_STACK_VAR(lvl1_fg_l1_3,"lvl1_fg_l1_3");
		HX_STACK_LINE(74)
		::DrawObject lvl1_fg_l1_4 = ::DrawObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l1/lvl1_fg_l1_4.xml"));		HX_STACK_VAR(lvl1_fg_l1_4,"lvl1_fg_l1_4");
		HX_STACK_LINE(75)
		::DrawObject lvl1_fg_l1_5 = ::DrawObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l1/lvl1_fg_l1_5.xml"));		HX_STACK_VAR(lvl1_fg_l1_5,"lvl1_fg_l1_5");
		HX_STACK_LINE(76)
		::DrawObject lvl1_fg_l1_6 = ::DrawObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l1/lvl1_fg_l1_6.xml"));		HX_STACK_VAR(lvl1_fg_l1_6,"lvl1_fg_l1_6");
		HX_STACK_LINE(77)
		::DrawObject lvl1_fg_l1_7 = ::DrawObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l1/lvl1_fg_l1_7.xml"));		HX_STACK_VAR(lvl1_fg_l1_7,"lvl1_fg_l1_7");
		HX_STACK_LINE(78)
		::DrawObject lvl1_fg_l1_8 = ::DrawObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l1/lvl1_fg_l1_8.xml"));		HX_STACK_VAR(lvl1_fg_l1_8,"lvl1_fg_l1_8");
		HX_STACK_LINE(81)
		::BackgroundObject lvl1_fg_l2_grass1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml"));		HX_STACK_VAR(lvl1_fg_l2_grass1,"lvl1_fg_l2_grass1");
		HX_STACK_LINE(82)
		::BackgroundObject lvl1_fg_l2_grass2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml"));		HX_STACK_VAR(lvl1_fg_l2_grass2,"lvl1_fg_l2_grass2");
		HX_STACK_LINE(83)
		::BackgroundObject lvl1_fg_l2_grass3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml"));		HX_STACK_VAR(lvl1_fg_l2_grass3,"lvl1_fg_l2_grass3");
		HX_STACK_LINE(84)
		::BackgroundObject lvl1_fg_l2_grass4 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml"));		HX_STACK_VAR(lvl1_fg_l2_grass4,"lvl1_fg_l2_grass4");
		HX_STACK_LINE(85)
		::BackgroundObject lvl1_fg_l2_grass5 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml"));		HX_STACK_VAR(lvl1_fg_l2_grass5,"lvl1_fg_l2_grass5");
		HX_STACK_LINE(86)
		::BackgroundObject lvl1_fg_l2_grass6 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml"));		HX_STACK_VAR(lvl1_fg_l2_grass6,"lvl1_fg_l2_grass6");
		HX_STACK_LINE(87)
		::BackgroundObject lvl1_fg_l2_grass7 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml"));		HX_STACK_VAR(lvl1_fg_l2_grass7,"lvl1_fg_l2_grass7");
		HX_STACK_LINE(88)
		::BackgroundObject lvl1_fg_l2_tree1 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml"));		HX_STACK_VAR(lvl1_fg_l2_tree1,"lvl1_fg_l2_tree1");
		HX_STACK_LINE(89)
		::BackgroundObject lvl1_fg_l2_tree2 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml"));		HX_STACK_VAR(lvl1_fg_l2_tree2,"lvl1_fg_l2_tree2");
		HX_STACK_LINE(90)
		::BackgroundObject lvl1_fg_l2_tree3 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml"));		HX_STACK_VAR(lvl1_fg_l2_tree3,"lvl1_fg_l2_tree3");
		HX_STACK_LINE(91)
		::BackgroundObject lvl1_fg_l2_tree4 = ::BackgroundObject_obj::__new(HX_CSTRING("world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml"));		HX_STACK_VAR(lvl1_fg_l2_tree4,"lvl1_fg_l2_tree4");
		HX_STACK_LINE(93)
		::Lucy lucy = ::Lucy_obj::__new();		HX_STACK_VAR(lucy,"lucy");
		HX_STACK_LINE(96)
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
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("World1Level1"), hx::TCanCast< World1Level1_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void World1Level1_obj::__boot()
{
}

