#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_display_StageAlign
#include <native/display/StageAlign.h>
#endif
#ifndef INCLUDED_native_display_StageScaleMode
#include <native/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Void ApplicationMain_obj::main( ){
{
		HX_STACK_PUSH("ApplicationMain::main","ApplicationMain.hx",13);
		HX_STACK_LINE(15)
		::nme::Lib_obj::setPackage(HX_CSTRING("toSpace"),HX_CSTRING("Game"),HX_CSTRING("com.tospace.game"),HX_CSTRING("1.0.0"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
			HX_STACK_PUSH("*::_Function_1_1","ApplicationMain.hx",40);
			{
				HX_STACK_LINE(43)
				::nme::Lib_obj::get_current()->get_stage()->set_align(::native::display::StageAlign_obj::TOP_LEFT_dyn());
				HX_STACK_LINE(44)
				::nme::Lib_obj::get_current()->get_stage()->set_scaleMode(::native::display::StageScaleMode_obj::NO_SCALE_dyn());
				HX_STACK_LINE(47)
				bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< ::String > _g1 = ::Type_obj::getClassFields(hx::ClassOf< ::Main >());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(49)
					while(((_g < _g1->length))){
						HX_STACK_LINE(49)
						::String methodName = _g1->__get(_g);		HX_STACK_VAR(methodName,"methodName");
						HX_STACK_LINE(49)
						++(_g);
						HX_STACK_LINE(51)
						if (((methodName == HX_CSTRING("main")))){
							HX_STACK_LINE(53)
							hasMain = true;
							HX_STACK_LINE(54)
							break;
						}
					}
				}
				HX_STACK_LINE(58)
				if ((hasMain)){
					HX_STACK_LINE(59)
					::Reflect_obj::callMethod(hx::ClassOf< ::Main >(),::Reflect_obj::field(hx::ClassOf< ::Main >(),HX_CSTRING("main")),Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_STACK_LINE(64)
					::Main instance = ::Type_obj::createInstance(hx::ClassOf< ::Main >(),Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(instance,"instance");
					HX_STACK_LINE(66)
					if ((::Std_obj::is(instance,hx::ClassOf< ::native::display::DisplayObject >()))){
						HX_STACK_LINE(66)
						::nme::Lib_obj::get_current()->addChild(instance);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(39)
		::nme::Lib_obj::create( Dynamic(new _Function_1_1()),(int)640,(int)480,(int)60,(int)16777215,(int((int((int((int((int((int((int((int((int((int(::nme::Lib_obj::HARDWARE) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int(::nme::Lib_obj::RESIZABLE))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0)),HX_CSTRING("Heuvels"),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Dynamic ApplicationMain_obj::getAsset( ::String inName){
	HX_STACK_PUSH("ApplicationMain::getAsset","ApplicationMain.hx",104);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_LINE(107)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/bg/fog_large.png")))){
		HX_STACK_LINE(108)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/bg/fog_large.png"),null());
	}
	HX_STACK_LINE(114)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/bg/fog_medium.png")))){
		HX_STACK_LINE(115)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/bg/fog_medium.png"),null());
	}
	HX_STACK_LINE(121)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/bg/fog_small.png")))){
		HX_STACK_LINE(122)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/bg/fog_small.png"),null());
	}
	HX_STACK_LINE(128)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/bg/star.png")))){
		HX_STACK_LINE(129)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/bg/star.png"),null());
	}
	HX_STACK_LINE(135)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/characters/walking-sparrow.xml")))){
		HX_STACK_LINE(136)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mobile-1x/general/characters/walking-sparrow.xml"));
	}
	HX_STACK_LINE(142)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/characters/walking.png")))){
		HX_STACK_LINE(143)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/characters/walking.png"),null());
	}
	HX_STACK_LINE(149)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/fg/grass1.png")))){
		HX_STACK_LINE(150)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/fg/grass1.png"),null());
	}
	HX_STACK_LINE(156)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/fg/grass2.png")))){
		HX_STACK_LINE(157)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/fg/grass2.png"),null());
	}
	HX_STACK_LINE(163)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/fg/grass3.png")))){
		HX_STACK_LINE(164)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/fg/grass3.png"),null());
	}
	HX_STACK_LINE(170)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/fg/grass4.png")))){
		HX_STACK_LINE(171)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/fg/grass4.png"),null());
	}
	HX_STACK_LINE(177)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/fg/grass5.png")))){
		HX_STACK_LINE(178)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/fg/grass5.png"),null());
	}
	HX_STACK_LINE(184)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/fg/grass6.png")))){
		HX_STACK_LINE(185)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/fg/grass6.png"),null());
	}
	HX_STACK_LINE(191)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/fg/grass7.png")))){
		HX_STACK_LINE(192)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/fg/grass7.png"),null());
	}
	HX_STACK_LINE(198)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/gui/button.png")))){
		HX_STACK_LINE(199)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/gui/button.png"),null());
	}
	HX_STACK_LINE(205)
	if (((inName == HX_CSTRING("assets/mobile-1x/general/gui/button2.png")))){
		HX_STACK_LINE(206)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/general/gui/button2.png"),null());
	}
	HX_STACK_LINE(212)
	if (((inName == HX_CSTRING("assets/mobile-1x/test1.png")))){
		HX_STACK_LINE(213)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/test1.png"),null());
	}
	HX_STACK_LINE(219)
	if (((inName == HX_CSTRING("assets/mobile-1x/test2.png")))){
		HX_STACK_LINE(220)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/test2.png"),null());
	}
	HX_STACK_LINE(226)
	if (((inName == HX_CSTRING("assets/mobile-1x/test3bg.png")))){
		HX_STACK_LINE(227)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/test3bg.png"),null());
	}
	HX_STACK_LINE(233)
	if (((inName == HX_CSTRING("assets/mobile-1x/walking-sparrow.xml")))){
		HX_STACK_LINE(234)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mobile-1x/walking-sparrow.xml"));
	}
	HX_STACK_LINE(240)
	if (((inName == HX_CSTRING("assets/mobile-1x/walking.png")))){
		HX_STACK_LINE(241)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/walking.png"),null());
	}
	HX_STACK_LINE(247)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/hill1.png")))){
		HX_STACK_LINE(248)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill1.png"),null());
	}
	HX_STACK_LINE(254)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/hill2.png")))){
		HX_STACK_LINE(255)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill2.png"),null());
	}
	HX_STACK_LINE(261)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/hill3.png")))){
		HX_STACK_LINE(262)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill3.png"),null());
	}
	HX_STACK_LINE(268)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/hill4.png")))){
		HX_STACK_LINE(269)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill4.png"),null());
	}
	HX_STACK_LINE(275)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/hill5.png")))){
		HX_STACK_LINE(276)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill5.png"),null());
	}
	HX_STACK_LINE(282)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/hill6.png")))){
		HX_STACK_LINE(283)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill6.png"),null());
	}
	HX_STACK_LINE(289)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/hill7.png")))){
		HX_STACK_LINE(290)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill7.png"),null());
	}
	HX_STACK_LINE(296)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree1.png")))){
		HX_STACK_LINE(297)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree1.png"),null());
	}
	HX_STACK_LINE(303)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree10.png")))){
		HX_STACK_LINE(304)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree10.png"),null());
	}
	HX_STACK_LINE(310)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree11.png")))){
		HX_STACK_LINE(311)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree11.png"),null());
	}
	HX_STACK_LINE(317)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree12.png")))){
		HX_STACK_LINE(318)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree12.png"),null());
	}
	HX_STACK_LINE(324)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree13.png")))){
		HX_STACK_LINE(325)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree13.png"),null());
	}
	HX_STACK_LINE(331)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree14.png")))){
		HX_STACK_LINE(332)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree14.png"),null());
	}
	HX_STACK_LINE(338)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree15.png")))){
		HX_STACK_LINE(339)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree15.png"),null());
	}
	HX_STACK_LINE(345)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree16.png")))){
		HX_STACK_LINE(346)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree16.png"),null());
	}
	HX_STACK_LINE(352)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree17.png")))){
		HX_STACK_LINE(353)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree17.png"),null());
	}
	HX_STACK_LINE(359)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree18.png")))){
		HX_STACK_LINE(360)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree18.png"),null());
	}
	HX_STACK_LINE(366)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree19.png")))){
		HX_STACK_LINE(367)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree19.png"),null());
	}
	HX_STACK_LINE(373)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree2.png")))){
		HX_STACK_LINE(374)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree2.png"),null());
	}
	HX_STACK_LINE(380)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree20.png")))){
		HX_STACK_LINE(381)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree20.png"),null());
	}
	HX_STACK_LINE(387)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree21.png")))){
		HX_STACK_LINE(388)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree21.png"),null());
	}
	HX_STACK_LINE(394)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree22.png")))){
		HX_STACK_LINE(395)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree22.png"),null());
	}
	HX_STACK_LINE(401)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree23.png")))){
		HX_STACK_LINE(402)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree23.png"),null());
	}
	HX_STACK_LINE(408)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree24.png")))){
		HX_STACK_LINE(409)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree24.png"),null());
	}
	HX_STACK_LINE(415)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree25.png")))){
		HX_STACK_LINE(416)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree25.png"),null());
	}
	HX_STACK_LINE(422)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree3.png")))){
		HX_STACK_LINE(423)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree3.png"),null());
	}
	HX_STACK_LINE(429)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree4.png")))){
		HX_STACK_LINE(430)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree4.png"),null());
	}
	HX_STACK_LINE(436)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree5.png")))){
		HX_STACK_LINE(437)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree5.png"),null());
	}
	HX_STACK_LINE(443)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree6.png")))){
		HX_STACK_LINE(444)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree6.png"),null());
	}
	HX_STACK_LINE(450)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree7.png")))){
		HX_STACK_LINE(451)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree7.png"),null());
	}
	HX_STACK_LINE(457)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree8.png")))){
		HX_STACK_LINE(458)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree8.png"),null());
	}
	HX_STACK_LINE(464)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/bg/tree9.png")))){
		HX_STACK_LINE(465)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree9.png"),null());
	}
	HX_STACK_LINE(471)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/general/fg/empty.md")))){
		HX_STACK_LINE(472)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mobile-1x/world1/general/fg/empty.md"));
	}
	HX_STACK_LINE(478)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/background.png")))){
		HX_STACK_LINE(479)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/background.png"),null());
	}
	HX_STACK_LINE(485)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/background02.png")))){
		HX_STACK_LINE(486)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/background02.png"),null());
	}
	HX_STACK_LINE(492)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/sun.png")))){
		HX_STACK_LINE(493)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/sun.png"),null());
	}
	HX_STACK_LINE(499)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png")))){
		HX_STACK_LINE(500)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png"),null());
	}
	HX_STACK_LINE(506)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png")))){
		HX_STACK_LINE(507)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png"),null());
	}
	HX_STACK_LINE(513)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png")))){
		HX_STACK_LINE(514)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png"),null());
	}
	HX_STACK_LINE(520)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png")))){
		HX_STACK_LINE(521)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png"),null());
	}
	HX_STACK_LINE(527)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png")))){
		HX_STACK_LINE(528)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png"),null());
	}
	HX_STACK_LINE(534)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png")))){
		HX_STACK_LINE(535)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png"),null());
	}
	HX_STACK_LINE(541)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png")))){
		HX_STACK_LINE(542)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png"),null());
	}
	HX_STACK_LINE(548)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png")))){
		HX_STACK_LINE(549)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png"),null());
	}
	HX_STACK_LINE(555)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png")))){
		HX_STACK_LINE(556)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png"),null());
	}
	HX_STACK_LINE(562)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png")))){
		HX_STACK_LINE(563)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png"),null());
	}
	HX_STACK_LINE(569)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png")))){
		HX_STACK_LINE(570)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png"),null());
	}
	HX_STACK_LINE(576)
	if (((inName == HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png")))){
		HX_STACK_LINE(577)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png"),null());
	}
	HX_STACK_LINE(583)
	if (((inName == HX_CSTRING("assets/source/general/bg/fog_large.png")))){
		HX_STACK_LINE(584)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/bg/fog_large.png"),null());
	}
	HX_STACK_LINE(590)
	if (((inName == HX_CSTRING("assets/source/general/bg/fog_large.psd")))){
		HX_STACK_LINE(591)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/general/bg/fog_large.psd"));
	}
	HX_STACK_LINE(597)
	if (((inName == HX_CSTRING("assets/source/general/bg/fog_medium.png")))){
		HX_STACK_LINE(598)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/bg/fog_medium.png"),null());
	}
	HX_STACK_LINE(604)
	if (((inName == HX_CSTRING("assets/source/general/bg/fog_medium.psd")))){
		HX_STACK_LINE(605)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/general/bg/fog_medium.psd"));
	}
	HX_STACK_LINE(611)
	if (((inName == HX_CSTRING("assets/source/general/bg/fog_small.png")))){
		HX_STACK_LINE(612)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/bg/fog_small.png"),null());
	}
	HX_STACK_LINE(618)
	if (((inName == HX_CSTRING("assets/source/general/bg/fog_small.psd")))){
		HX_STACK_LINE(619)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/general/bg/fog_small.psd"));
	}
	HX_STACK_LINE(625)
	if (((inName == HX_CSTRING("assets/source/general/bg/star.png")))){
		HX_STACK_LINE(626)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/bg/star.png"),null());
	}
	HX_STACK_LINE(632)
	if (((inName == HX_CSTRING("assets/source/general/bg/star.psd")))){
		HX_STACK_LINE(633)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/general/bg/star.psd"));
	}
	HX_STACK_LINE(639)
	if (((inName == HX_CSTRING("assets/source/general/characters/walking-sparrow.xml")))){
		HX_STACK_LINE(640)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/source/general/characters/walking-sparrow.xml"));
	}
	HX_STACK_LINE(646)
	if (((inName == HX_CSTRING("assets/source/general/characters/walking.png")))){
		HX_STACK_LINE(647)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/characters/walking.png"),null());
	}
	HX_STACK_LINE(653)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass1.png")))){
		HX_STACK_LINE(654)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/fg/grass1.png"),null());
	}
	HX_STACK_LINE(660)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass1.psd")))){
		HX_STACK_LINE(661)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/general/fg/grass1.psd"));
	}
	HX_STACK_LINE(667)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass2.png")))){
		HX_STACK_LINE(668)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/fg/grass2.png"),null());
	}
	HX_STACK_LINE(674)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass2.psd")))){
		HX_STACK_LINE(675)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/general/fg/grass2.psd"));
	}
	HX_STACK_LINE(681)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass3.png")))){
		HX_STACK_LINE(682)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/fg/grass3.png"),null());
	}
	HX_STACK_LINE(688)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass3.psd")))){
		HX_STACK_LINE(689)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/general/fg/grass3.psd"));
	}
	HX_STACK_LINE(695)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass4.png")))){
		HX_STACK_LINE(696)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/fg/grass4.png"),null());
	}
	HX_STACK_LINE(702)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass4.psd")))){
		HX_STACK_LINE(703)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/general/fg/grass4.psd"));
	}
	HX_STACK_LINE(709)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass5.png")))){
		HX_STACK_LINE(710)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/fg/grass5.png"),null());
	}
	HX_STACK_LINE(716)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass5.psd")))){
		HX_STACK_LINE(717)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/general/fg/grass5.psd"));
	}
	HX_STACK_LINE(723)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass6.png")))){
		HX_STACK_LINE(724)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/fg/grass6.png"),null());
	}
	HX_STACK_LINE(730)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass6.psd")))){
		HX_STACK_LINE(731)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/general/fg/grass6.psd"));
	}
	HX_STACK_LINE(737)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass7.png")))){
		HX_STACK_LINE(738)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/fg/grass7.png"),null());
	}
	HX_STACK_LINE(744)
	if (((inName == HX_CSTRING("assets/source/general/fg/grass7.psd")))){
		HX_STACK_LINE(745)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/general/fg/grass7.psd"));
	}
	HX_STACK_LINE(751)
	if (((inName == HX_CSTRING("assets/source/general/gui/button.png")))){
		HX_STACK_LINE(752)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/gui/button.png"),null());
	}
	HX_STACK_LINE(758)
	if (((inName == HX_CSTRING("assets/source/general/gui/button2.png")))){
		HX_STACK_LINE(759)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/general/gui/button2.png"),null());
	}
	HX_STACK_LINE(765)
	if (((inName == HX_CSTRING("assets/source/level_1-forrest-jesse.ai")))){
		HX_STACK_LINE(766)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/source/level_1-forrest-jesse.ai"));
	}
	HX_STACK_LINE(772)
	if (((inName == HX_CSTRING("assets/source/level_1-forrest-jesse.pdf")))){
		HX_STACK_LINE(773)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/source/level_1-forrest-jesse.pdf"));
	}
	HX_STACK_LINE(779)
	if (((inName == HX_CSTRING("assets/source/test1.png")))){
		HX_STACK_LINE(780)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/test1.png"),null());
	}
	HX_STACK_LINE(786)
	if (((inName == HX_CSTRING("assets/source/test2.png")))){
		HX_STACK_LINE(787)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/test2.png"),null());
	}
	HX_STACK_LINE(793)
	if (((inName == HX_CSTRING("assets/source/test3bg.png")))){
		HX_STACK_LINE(794)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/test3bg.png"),null());
	}
	HX_STACK_LINE(800)
	if (((inName == HX_CSTRING("assets/source/walking-sparrow.xml")))){
		HX_STACK_LINE(801)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/source/walking-sparrow.xml"));
	}
	HX_STACK_LINE(807)
	if (((inName == HX_CSTRING("assets/source/walking.png")))){
		HX_STACK_LINE(808)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/walking.png"),null());
	}
	HX_STACK_LINE(814)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill1.png")))){
		HX_STACK_LINE(815)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/hill1.png"),null());
	}
	HX_STACK_LINE(821)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill1.psd")))){
		HX_STACK_LINE(822)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/hill1.psd"));
	}
	HX_STACK_LINE(828)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill2.png")))){
		HX_STACK_LINE(829)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/hill2.png"),null());
	}
	HX_STACK_LINE(835)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill2.psd")))){
		HX_STACK_LINE(836)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/hill2.psd"));
	}
	HX_STACK_LINE(842)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill3.png")))){
		HX_STACK_LINE(843)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/hill3.png"),null());
	}
	HX_STACK_LINE(849)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill3.psd")))){
		HX_STACK_LINE(850)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/hill3.psd"));
	}
	HX_STACK_LINE(856)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill4.png")))){
		HX_STACK_LINE(857)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/hill4.png"),null());
	}
	HX_STACK_LINE(863)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill4.psd")))){
		HX_STACK_LINE(864)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/hill4.psd"));
	}
	HX_STACK_LINE(870)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill5.png")))){
		HX_STACK_LINE(871)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/hill5.png"),null());
	}
	HX_STACK_LINE(877)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill5.psd")))){
		HX_STACK_LINE(878)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/hill5.psd"));
	}
	HX_STACK_LINE(884)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill6.png")))){
		HX_STACK_LINE(885)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/hill6.png"),null());
	}
	HX_STACK_LINE(891)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill6.psd")))){
		HX_STACK_LINE(892)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/hill6.psd"));
	}
	HX_STACK_LINE(898)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill7.png")))){
		HX_STACK_LINE(899)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/hill7.png"),null());
	}
	HX_STACK_LINE(905)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/hill7.psd")))){
		HX_STACK_LINE(906)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/hill7.psd"));
	}
	HX_STACK_LINE(912)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree1.png")))){
		HX_STACK_LINE(913)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree1.png"),null());
	}
	HX_STACK_LINE(919)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree1.psd")))){
		HX_STACK_LINE(920)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree1.psd"));
	}
	HX_STACK_LINE(926)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree10.png")))){
		HX_STACK_LINE(927)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree10.png"),null());
	}
	HX_STACK_LINE(933)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree10.psd")))){
		HX_STACK_LINE(934)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree10.psd"));
	}
	HX_STACK_LINE(940)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree11.png")))){
		HX_STACK_LINE(941)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree11.png"),null());
	}
	HX_STACK_LINE(947)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree11.psd")))){
		HX_STACK_LINE(948)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree11.psd"));
	}
	HX_STACK_LINE(954)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree12.png")))){
		HX_STACK_LINE(955)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree12.png"),null());
	}
	HX_STACK_LINE(961)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree12.psd")))){
		HX_STACK_LINE(962)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree12.psd"));
	}
	HX_STACK_LINE(968)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree13.png")))){
		HX_STACK_LINE(969)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree13.png"),null());
	}
	HX_STACK_LINE(975)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree13.psd")))){
		HX_STACK_LINE(976)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree13.psd"));
	}
	HX_STACK_LINE(982)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree14.png")))){
		HX_STACK_LINE(983)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree14.png"),null());
	}
	HX_STACK_LINE(989)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree14.psd")))){
		HX_STACK_LINE(990)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree14.psd"));
	}
	HX_STACK_LINE(996)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree15.png")))){
		HX_STACK_LINE(997)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree15.png"),null());
	}
	HX_STACK_LINE(1003)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree15.psd")))){
		HX_STACK_LINE(1004)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree15.psd"));
	}
	HX_STACK_LINE(1010)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree16.png")))){
		HX_STACK_LINE(1011)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree16.png"),null());
	}
	HX_STACK_LINE(1017)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree16.psd")))){
		HX_STACK_LINE(1018)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree16.psd"));
	}
	HX_STACK_LINE(1024)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree17.png")))){
		HX_STACK_LINE(1025)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree17.png"),null());
	}
	HX_STACK_LINE(1031)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree17.psd")))){
		HX_STACK_LINE(1032)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree17.psd"));
	}
	HX_STACK_LINE(1038)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree18.png")))){
		HX_STACK_LINE(1039)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree18.png"),null());
	}
	HX_STACK_LINE(1045)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree18.psd")))){
		HX_STACK_LINE(1046)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree18.psd"));
	}
	HX_STACK_LINE(1052)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree19.png")))){
		HX_STACK_LINE(1053)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree19.png"),null());
	}
	HX_STACK_LINE(1059)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree19.psd")))){
		HX_STACK_LINE(1060)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree19.psd"));
	}
	HX_STACK_LINE(1066)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree2.png")))){
		HX_STACK_LINE(1067)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree2.png"),null());
	}
	HX_STACK_LINE(1073)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree2.psd")))){
		HX_STACK_LINE(1074)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree2.psd"));
	}
	HX_STACK_LINE(1080)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree20.png")))){
		HX_STACK_LINE(1081)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree20.png"),null());
	}
	HX_STACK_LINE(1087)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree20.psd")))){
		HX_STACK_LINE(1088)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree20.psd"));
	}
	HX_STACK_LINE(1094)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree21.png")))){
		HX_STACK_LINE(1095)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree21.png"),null());
	}
	HX_STACK_LINE(1101)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree21.psd")))){
		HX_STACK_LINE(1102)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree21.psd"));
	}
	HX_STACK_LINE(1108)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree22.png")))){
		HX_STACK_LINE(1109)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree22.png"),null());
	}
	HX_STACK_LINE(1115)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree22.psd")))){
		HX_STACK_LINE(1116)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree22.psd"));
	}
	HX_STACK_LINE(1122)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree23.png")))){
		HX_STACK_LINE(1123)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree23.png"),null());
	}
	HX_STACK_LINE(1129)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree23.psd")))){
		HX_STACK_LINE(1130)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree23.psd"));
	}
	HX_STACK_LINE(1136)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree24.png")))){
		HX_STACK_LINE(1137)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree24.png"),null());
	}
	HX_STACK_LINE(1143)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree24.psd")))){
		HX_STACK_LINE(1144)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree24.psd"));
	}
	HX_STACK_LINE(1150)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree25.png")))){
		HX_STACK_LINE(1151)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree25.png"),null());
	}
	HX_STACK_LINE(1157)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree25.psd")))){
		HX_STACK_LINE(1158)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree25.psd"));
	}
	HX_STACK_LINE(1164)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree3.png")))){
		HX_STACK_LINE(1165)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree3.png"),null());
	}
	HX_STACK_LINE(1171)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree3.psd")))){
		HX_STACK_LINE(1172)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree3.psd"));
	}
	HX_STACK_LINE(1178)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree4.png")))){
		HX_STACK_LINE(1179)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree4.png"),null());
	}
	HX_STACK_LINE(1185)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree4.psd")))){
		HX_STACK_LINE(1186)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree4.psd"));
	}
	HX_STACK_LINE(1192)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree5.png")))){
		HX_STACK_LINE(1193)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree5.png"),null());
	}
	HX_STACK_LINE(1199)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree5.psd")))){
		HX_STACK_LINE(1200)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree5.psd"));
	}
	HX_STACK_LINE(1206)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree6.png")))){
		HX_STACK_LINE(1207)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree6.png"),null());
	}
	HX_STACK_LINE(1213)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree6.psd")))){
		HX_STACK_LINE(1214)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree6.psd"));
	}
	HX_STACK_LINE(1220)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree7.png")))){
		HX_STACK_LINE(1221)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree7.png"),null());
	}
	HX_STACK_LINE(1227)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree7.psd")))){
		HX_STACK_LINE(1228)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree7.psd"));
	}
	HX_STACK_LINE(1234)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree8.png")))){
		HX_STACK_LINE(1235)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree8.png"),null());
	}
	HX_STACK_LINE(1241)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree8.psd")))){
		HX_STACK_LINE(1242)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree8.psd"));
	}
	HX_STACK_LINE(1248)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree9.png")))){
		HX_STACK_LINE(1249)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/general/bg/tree9.png"),null());
	}
	HX_STACK_LINE(1255)
	if (((inName == HX_CSTRING("assets/source/world1/general/bg/tree9.psd")))){
		HX_STACK_LINE(1256)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/general/bg/tree9.psd"));
	}
	HX_STACK_LINE(1262)
	if (((inName == HX_CSTRING("assets/source/world1/general/fg/empty.md")))){
		HX_STACK_LINE(1263)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/source/world1/general/fg/empty.md"));
	}
	HX_STACK_LINE(1269)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/bg/background.png")))){
		HX_STACK_LINE(1270)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/bg/background.png"),null());
	}
	HX_STACK_LINE(1276)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/bg/background.psd")))){
		HX_STACK_LINE(1277)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/lvl1/bg/background.psd"));
	}
	HX_STACK_LINE(1283)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/bg/background02.png")))){
		HX_STACK_LINE(1284)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/bg/background02.png"),null());
	}
	HX_STACK_LINE(1290)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/bg/sun.png")))){
		HX_STACK_LINE(1291)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/bg/sun.png"),null());
	}
	HX_STACK_LINE(1297)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/bg/sun.psd")))){
		HX_STACK_LINE(1298)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/lvl1/bg/sun.psd"));
	}
	HX_STACK_LINE(1304)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l1/FG1.psd")))){
		HX_STACK_LINE(1305)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/lvl1/fg/l1/FG1.psd"));
	}
	HX_STACK_LINE(1311)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png")))){
		HX_STACK_LINE(1312)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png"),null());
	}
	HX_STACK_LINE(1318)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png")))){
		HX_STACK_LINE(1319)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png"),null());
	}
	HX_STACK_LINE(1325)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png")))){
		HX_STACK_LINE(1326)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png"),null());
	}
	HX_STACK_LINE(1332)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png")))){
		HX_STACK_LINE(1333)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png"),null());
	}
	HX_STACK_LINE(1339)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png")))){
		HX_STACK_LINE(1340)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png"),null());
	}
	HX_STACK_LINE(1346)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png")))){
		HX_STACK_LINE(1347)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png"),null());
	}
	HX_STACK_LINE(1353)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png")))){
		HX_STACK_LINE(1354)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png"),null());
	}
	HX_STACK_LINE(1360)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png")))){
		HX_STACK_LINE(1361)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png"),null());
	}
	HX_STACK_LINE(1367)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree1.png")))){
		HX_STACK_LINE(1368)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree1.png"),null());
	}
	HX_STACK_LINE(1374)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree1.psd")))){
		HX_STACK_LINE(1375)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree1.psd"));
	}
	HX_STACK_LINE(1381)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree2.png")))){
		HX_STACK_LINE(1382)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree2.png"),null());
	}
	HX_STACK_LINE(1388)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree2.psd")))){
		HX_STACK_LINE(1389)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree2.psd"));
	}
	HX_STACK_LINE(1395)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree3.png")))){
		HX_STACK_LINE(1396)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree3.png"),null());
	}
	HX_STACK_LINE(1402)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree3.psd")))){
		HX_STACK_LINE(1403)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree3.psd"));
	}
	HX_STACK_LINE(1409)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree4.png")))){
		HX_STACK_LINE(1410)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree4.png"),null());
	}
	HX_STACK_LINE(1416)
	if (((inName == HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree4.psd")))){
		HX_STACK_LINE(1417)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree4.psd"));
	}
	HX_STACK_LINE(1423)
	if (((inName == HX_CSTRING("assets/xml/bg.xml")))){
		HX_STACK_LINE(1424)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/bg.xml"));
	}
	HX_STACK_LINE(1430)
	if (((inName == HX_CSTRING("assets/xml/bg2.xml")))){
		HX_STACK_LINE(1431)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/bg2.xml"));
	}
	HX_STACK_LINE(1437)
	if (((inName == HX_CSTRING("assets/xml/general/bg/empty.md")))){
		HX_STACK_LINE(1438)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/general/bg/empty.md"));
	}
	HX_STACK_LINE(1444)
	if (((inName == HX_CSTRING("assets/xml/general/characters/empty.md")))){
		HX_STACK_LINE(1445)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/general/characters/empty.md"));
	}
	HX_STACK_LINE(1451)
	if (((inName == HX_CSTRING("assets/xml/general/fg/empty.md")))){
		HX_STACK_LINE(1452)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/general/fg/empty.md"));
	}
	HX_STACK_LINE(1458)
	if (((inName == HX_CSTRING("assets/xml/settings.xml")))){
		HX_STACK_LINE(1459)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/settings.xml"));
	}
	HX_STACK_LINE(1465)
	if (((inName == HX_CSTRING("assets/xml/test.xml")))){
		HX_STACK_LINE(1466)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/test.xml"));
	}
	HX_STACK_LINE(1472)
	if (((inName == HX_CSTRING("assets/xml/test2.xml")))){
		HX_STACK_LINE(1473)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/test2.xml"));
	}
	HX_STACK_LINE(1479)
	if (((inName == HX_CSTRING("assets/xml/walking.xml")))){
		HX_STACK_LINE(1480)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/walking.xml"));
	}
	HX_STACK_LINE(1486)
	if (((inName == HX_CSTRING("assets/xml/world1/general/empty.md")))){
		HX_STACK_LINE(1487)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/general/empty.md"));
	}
	HX_STACK_LINE(1493)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml")))){
		HX_STACK_LINE(1494)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml"));
	}
	HX_STACK_LINE(1500)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml")))){
		HX_STACK_LINE(1501)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml"));
	}
	HX_STACK_LINE(1507)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml")))){
		HX_STACK_LINE(1508)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml"));
	}
	HX_STACK_LINE(1514)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml")))){
		HX_STACK_LINE(1515)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml"));
	}
	HX_STACK_LINE(1521)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml")))){
		HX_STACK_LINE(1522)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml"));
	}
	HX_STACK_LINE(1528)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml")))){
		HX_STACK_LINE(1529)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml"));
	}
	HX_STACK_LINE(1535)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml")))){
		HX_STACK_LINE(1536)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml"));
	}
	HX_STACK_LINE(1542)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml")))){
		HX_STACK_LINE(1543)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml"));
	}
	HX_STACK_LINE(1549)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml")))){
		HX_STACK_LINE(1550)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml"));
	}
	HX_STACK_LINE(1556)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml")))){
		HX_STACK_LINE(1557)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml"));
	}
	HX_STACK_LINE(1563)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml")))){
		HX_STACK_LINE(1564)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml"));
	}
	HX_STACK_LINE(1570)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml")))){
		HX_STACK_LINE(1571)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml"));
	}
	HX_STACK_LINE(1577)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml")))){
		HX_STACK_LINE(1578)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml"));
	}
	HX_STACK_LINE(1584)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml")))){
		HX_STACK_LINE(1585)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml"));
	}
	HX_STACK_LINE(1591)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml")))){
		HX_STACK_LINE(1592)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml"));
	}
	HX_STACK_LINE(1598)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml")))){
		HX_STACK_LINE(1599)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml"));
	}
	HX_STACK_LINE(1605)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml")))){
		HX_STACK_LINE(1606)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml"));
	}
	HX_STACK_LINE(1612)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml")))){
		HX_STACK_LINE(1613)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml"));
	}
	HX_STACK_LINE(1619)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml")))){
		HX_STACK_LINE(1620)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml"));
	}
	HX_STACK_LINE(1626)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml")))){
		HX_STACK_LINE(1627)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml"));
	}
	HX_STACK_LINE(1633)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml")))){
		HX_STACK_LINE(1634)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml"));
	}
	HX_STACK_LINE(1640)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml")))){
		HX_STACK_LINE(1641)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml"));
	}
	HX_STACK_LINE(1647)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml")))){
		HX_STACK_LINE(1648)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml"));
	}
	HX_STACK_LINE(1654)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml")))){
		HX_STACK_LINE(1655)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml"));
	}
	HX_STACK_LINE(1661)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml")))){
		HX_STACK_LINE(1662)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml"));
	}
	HX_STACK_LINE(1668)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml")))){
		HX_STACK_LINE(1669)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml"));
	}
	HX_STACK_LINE(1675)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml")))){
		HX_STACK_LINE(1676)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml"));
	}
	HX_STACK_LINE(1682)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml")))){
		HX_STACK_LINE(1683)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml"));
	}
	HX_STACK_LINE(1689)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml")))){
		HX_STACK_LINE(1690)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml"));
	}
	HX_STACK_LINE(1696)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml")))){
		HX_STACK_LINE(1697)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml"));
	}
	HX_STACK_LINE(1703)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml")))){
		HX_STACK_LINE(1704)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml"));
	}
	HX_STACK_LINE(1710)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml")))){
		HX_STACK_LINE(1711)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml"));
	}
	HX_STACK_LINE(1717)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml")))){
		HX_STACK_LINE(1718)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml"));
	}
	HX_STACK_LINE(1724)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml")))){
		HX_STACK_LINE(1725)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml"));
	}
	HX_STACK_LINE(1731)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml")))){
		HX_STACK_LINE(1732)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml"));
	}
	HX_STACK_LINE(1738)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml")))){
		HX_STACK_LINE(1739)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml"));
	}
	HX_STACK_LINE(1745)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml")))){
		HX_STACK_LINE(1746)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml"));
	}
	HX_STACK_LINE(1752)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml")))){
		HX_STACK_LINE(1753)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml"));
	}
	HX_STACK_LINE(1759)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml")))){
		HX_STACK_LINE(1760)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml"));
	}
	HX_STACK_LINE(1766)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_background.xml")))){
		HX_STACK_LINE(1767)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_background.xml"));
	}
	HX_STACK_LINE(1773)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml")))){
		HX_STACK_LINE(1774)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml"));
	}
	HX_STACK_LINE(1780)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/bg.xml")))){
		HX_STACK_LINE(1781)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/bg.xml"));
	}
	HX_STACK_LINE(1787)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml")))){
		HX_STACK_LINE(1788)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml"));
	}
	HX_STACK_LINE(1794)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml")))){
		HX_STACK_LINE(1795)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml"));
	}
	HX_STACK_LINE(1801)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml")))){
		HX_STACK_LINE(1802)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml"));
	}
	HX_STACK_LINE(1808)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml")))){
		HX_STACK_LINE(1809)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml"));
	}
	HX_STACK_LINE(1815)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml")))){
		HX_STACK_LINE(1816)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml"));
	}
	HX_STACK_LINE(1822)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml")))){
		HX_STACK_LINE(1823)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml"));
	}
	HX_STACK_LINE(1829)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml")))){
		HX_STACK_LINE(1830)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml"));
	}
	HX_STACK_LINE(1836)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml")))){
		HX_STACK_LINE(1837)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml"));
	}
	HX_STACK_LINE(1843)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml")))){
		HX_STACK_LINE(1844)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml"));
	}
	HX_STACK_LINE(1850)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml")))){
		HX_STACK_LINE(1851)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml"));
	}
	HX_STACK_LINE(1857)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml")))){
		HX_STACK_LINE(1858)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml"));
	}
	HX_STACK_LINE(1864)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml")))){
		HX_STACK_LINE(1865)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml"));
	}
	HX_STACK_LINE(1871)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml")))){
		HX_STACK_LINE(1872)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml"));
	}
	HX_STACK_LINE(1878)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml")))){
		HX_STACK_LINE(1879)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml"));
	}
	HX_STACK_LINE(1885)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml")))){
		HX_STACK_LINE(1886)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml"));
	}
	HX_STACK_LINE(1892)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml")))){
		HX_STACK_LINE(1893)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml"));
	}
	HX_STACK_LINE(1899)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml")))){
		HX_STACK_LINE(1900)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml"));
	}
	HX_STACK_LINE(1906)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml")))){
		HX_STACK_LINE(1907)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml"));
	}
	HX_STACK_LINE(1913)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml")))){
		HX_STACK_LINE(1914)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml"));
	}
	HX_STACK_LINE(1920)
	if (((inName == HX_CSTRING("assets/xml/world1/lvl2/bg.xml")))){
		HX_STACK_LINE(1921)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/xml/world1/lvl2/bg.xml"));
	}
	HX_STACK_LINE(1928)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,getAsset,return )


ApplicationMain_obj::ApplicationMain_obj()
{
}

void ApplicationMain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationMain);
	HX_MARK_END_CLASS();
}

void ApplicationMain_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	HX_CSTRING("getAsset"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

Class ApplicationMain_obj::__mClass;

void ApplicationMain_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ApplicationMain"), hx::TCanCast< ApplicationMain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ApplicationMain_obj::__boot()
{
}

