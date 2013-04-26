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
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_text_Font
#include <native/text/Font.h>
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
		HX_STACK_PUSH("ApplicationMain::main","ApplicationMain.hx",5);
		HX_STACK_LINE(6)
		::nme::Lib_obj::setPackage(HX_CSTRING("toSpace"),HX_CSTRING("NapeScene3"),HX_CSTRING("com.gameproject.napescene3"),HX_CSTRING("1.0.0"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		bool run(int orientation){
			HX_STACK_PUSH("*::_Function_1_1","ApplicationMain.hx",10);
			HX_STACK_ARG(orientation,"orientation");
			{
				HX_STACK_LINE(10)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(9)
		::native::display::Stage_obj::shouldRotateInterface =  Dynamic(new _Function_1_1());

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		Void run(){
			HX_STACK_PUSH("*::_Function_1_2","ApplicationMain.hx",17);
			{
				HX_STACK_LINE(18)
				{
				}
				HX_STACK_LINE(25)
				::ApplicationMain_obj::initialize();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(16)
		::nme::Lib_obj::create( Dynamic(new _Function_1_2()),(int)640,(int)480,(int)30,(int)16777215,(int((int((int((int((int((int((int(::nme::Lib_obj::HARDWARE) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int(::nme::Lib_obj::RESIZABLE))) | int((int)0))) | int((int)0)),HX_CSTRING("NapeScene3"),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Void ApplicationMain_obj::initialize( ){
{
		HX_STACK_PUSH("ApplicationMain::initialize","ApplicationMain.hx",45);
		HX_STACK_LINE(48)
		bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = ::Type_obj::getClassFields(hx::ClassOf< ::Main >());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(50)
			while(((_g < _g1->length))){
				HX_STACK_LINE(50)
				::String methodName = _g1->__get(_g);		HX_STACK_VAR(methodName,"methodName");
				HX_STACK_LINE(50)
				++(_g);
				HX_STACK_LINE(52)
				if (((methodName == HX_CSTRING("main")))){
					HX_STACK_LINE(54)
					hasMain = true;
					HX_STACK_LINE(55)
					break;
				}
			}
		}
		HX_STACK_LINE(59)
		if ((hasMain)){
			HX_STACK_LINE(60)
			::Reflect_obj::callMethod(hx::ClassOf< ::Main >(),::Reflect_obj::field(hx::ClassOf< ::Main >(),HX_CSTRING("main")),Dynamic( Array_obj<Dynamic>::__new()));
		}
		else{
			HX_STACK_LINE(64)
			::nme::Lib_obj::get_current()->addChild(hx::TCast< native::display::DisplayObject >::cast(::Type_obj::createInstance(hx::ClassOf< ::Main >(),Dynamic( Array_obj<Dynamic>::__new()))));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,initialize,(void))

Dynamic ApplicationMain_obj::getAsset( ::String inName){
	HX_STACK_PUSH("ApplicationMain::getAsset","ApplicationMain.hx",71);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_LINE(73)
	if (((inName == HX_CSTRING("assets/8ball.png")))){
		HX_STACK_LINE(74)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/8ball.png"),null());
	}
	HX_STACK_LINE(80)
	if (((inName == HX_CSTRING("assets/banaan.png")))){
		HX_STACK_LINE(81)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/banaan.png"),null());
	}
	HX_STACK_LINE(87)
	if (((inName == HX_CSTRING("assets/bier.png")))){
		HX_STACK_LINE(88)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/bier.png"),null());
	}
	HX_STACK_LINE(94)
	if (((inName == HX_CSTRING("assets/font.ttf")))){
		HX_STACK_LINE(95)
		return ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/font.ttf"));
	}
	HX_STACK_LINE(101)
	if (((inName == HX_CSTRING("assets/greenleaf.png")))){
		HX_STACK_LINE(102)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/greenleaf.png"),null());
	}
	HX_STACK_LINE(108)
	if (((inName == HX_CSTRING("assets/physicsassets.pes")))){
		HX_STACK_LINE(109)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/physicsassets.pes"));
	}
	HX_STACK_LINE(115)
	if (((inName == HX_CSTRING("assets/pikachu.png")))){
		HX_STACK_LINE(116)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/pikachu.png"),null());
	}
	HX_STACK_LINE(122)
	if (((inName == HX_CSTRING("assets/redleaf.png")))){
		HX_STACK_LINE(123)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/redleaf.png"),null());
	}
	HX_STACK_LINE(129)
	if (((inName == HX_CSTRING("assets/rugby.png")))){
		HX_STACK_LINE(130)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/rugby.png"),null());
	}
	HX_STACK_LINE(136)
	if (((inName == HX_CSTRING("assets/sprites/lopen_klein.png")))){
		HX_STACK_LINE(137)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/lopen_klein.png"),null());
	}
	HX_STACK_LINE(143)
	if (((inName == HX_CSTRING("assets/sprites/los/idle.png")))){
		HX_STACK_LINE(144)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/idle.png"),null());
	}
	HX_STACK_LINE(150)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00000.png")))){
		HX_STACK_LINE(151)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00000.png"),null());
	}
	HX_STACK_LINE(157)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00001.png")))){
		HX_STACK_LINE(158)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00001.png"),null());
	}
	HX_STACK_LINE(164)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00002.png")))){
		HX_STACK_LINE(165)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00002.png"),null());
	}
	HX_STACK_LINE(171)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00003.png")))){
		HX_STACK_LINE(172)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00003.png"),null());
	}
	HX_STACK_LINE(178)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00004.png")))){
		HX_STACK_LINE(179)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00004.png"),null());
	}
	HX_STACK_LINE(185)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00005.png")))){
		HX_STACK_LINE(186)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00005.png"),null());
	}
	HX_STACK_LINE(192)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00006.png")))){
		HX_STACK_LINE(193)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00006.png"),null());
	}
	HX_STACK_LINE(199)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00007.png")))){
		HX_STACK_LINE(200)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00007.png"),null());
	}
	HX_STACK_LINE(206)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00008.png")))){
		HX_STACK_LINE(207)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00008.png"),null());
	}
	HX_STACK_LINE(213)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00009.png")))){
		HX_STACK_LINE(214)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00009.png"),null());
	}
	HX_STACK_LINE(220)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00010.png")))){
		HX_STACK_LINE(221)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00010.png"),null());
	}
	HX_STACK_LINE(227)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00011.png")))){
		HX_STACK_LINE(228)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00011.png"),null());
	}
	HX_STACK_LINE(234)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00012.png")))){
		HX_STACK_LINE(235)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00012.png"),null());
	}
	HX_STACK_LINE(241)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00013.png")))){
		HX_STACK_LINE(242)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00013.png"),null());
	}
	HX_STACK_LINE(248)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00014.png")))){
		HX_STACK_LINE(249)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00014.png"),null());
	}
	HX_STACK_LINE(255)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00015.png")))){
		HX_STACK_LINE(256)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00015.png"),null());
	}
	HX_STACK_LINE(262)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00016.png")))){
		HX_STACK_LINE(263)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00016.png"),null());
	}
	HX_STACK_LINE(269)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00017.png")))){
		HX_STACK_LINE(270)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00017.png"),null());
	}
	HX_STACK_LINE(276)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00018.png")))){
		HX_STACK_LINE(277)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00018.png"),null());
	}
	HX_STACK_LINE(283)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00019.png")))){
		HX_STACK_LINE(284)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00019.png"),null());
	}
	HX_STACK_LINE(290)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00020.png")))){
		HX_STACK_LINE(291)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00020.png"),null());
	}
	HX_STACK_LINE(297)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00021.png")))){
		HX_STACK_LINE(298)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00021.png"),null());
	}
	HX_STACK_LINE(304)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00022.png")))){
		HX_STACK_LINE(305)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00022.png"),null());
	}
	HX_STACK_LINE(311)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00023.png")))){
		HX_STACK_LINE(312)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00023.png"),null());
	}
	HX_STACK_LINE(318)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00024.png")))){
		HX_STACK_LINE(319)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00024.png"),null());
	}
	HX_STACK_LINE(325)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00025.png")))){
		HX_STACK_LINE(326)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00025.png"),null());
	}
	HX_STACK_LINE(332)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00026.png")))){
		HX_STACK_LINE(333)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00026.png"),null());
	}
	HX_STACK_LINE(339)
	if (((inName == HX_CSTRING("assets/sprites/los/jump/jump00027.png")))){
		HX_STACK_LINE(340)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/jump/jump00027.png"),null());
	}
	HX_STACK_LINE(346)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00010.png")))){
		HX_STACK_LINE(347)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00010.png"),null());
	}
	HX_STACK_LINE(353)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00011.png")))){
		HX_STACK_LINE(354)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00011.png"),null());
	}
	HX_STACK_LINE(360)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00012.png")))){
		HX_STACK_LINE(361)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00012.png"),null());
	}
	HX_STACK_LINE(367)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00013.png")))){
		HX_STACK_LINE(368)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00013.png"),null());
	}
	HX_STACK_LINE(374)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00014.png")))){
		HX_STACK_LINE(375)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00014.png"),null());
	}
	HX_STACK_LINE(381)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00015.png")))){
		HX_STACK_LINE(382)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00015.png"),null());
	}
	HX_STACK_LINE(388)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00016.png")))){
		HX_STACK_LINE(389)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00016.png"),null());
	}
	HX_STACK_LINE(395)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00017.png")))){
		HX_STACK_LINE(396)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00017.png"),null());
	}
	HX_STACK_LINE(402)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00018.png")))){
		HX_STACK_LINE(403)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00018.png"),null());
	}
	HX_STACK_LINE(409)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00019.png")))){
		HX_STACK_LINE(410)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00019.png"),null());
	}
	HX_STACK_LINE(416)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00020.png")))){
		HX_STACK_LINE(417)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00020.png"),null());
	}
	HX_STACK_LINE(423)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00021.png")))){
		HX_STACK_LINE(424)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00021.png"),null());
	}
	HX_STACK_LINE(430)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00022.png")))){
		HX_STACK_LINE(431)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00022.png"),null());
	}
	HX_STACK_LINE(437)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00023.png")))){
		HX_STACK_LINE(438)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00023.png"),null());
	}
	HX_STACK_LINE(444)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00024.png")))){
		HX_STACK_LINE(445)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00024.png"),null());
	}
	HX_STACK_LINE(451)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00025.png")))){
		HX_STACK_LINE(452)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00025.png"),null());
	}
	HX_STACK_LINE(458)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00026.png")))){
		HX_STACK_LINE(459)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00026.png"),null());
	}
	HX_STACK_LINE(465)
	if (((inName == HX_CSTRING("assets/sprites/los/walk/walk00027.png")))){
		HX_STACK_LINE(466)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/los/walk/walk00027.png"),null());
	}
	HX_STACK_LINE(472)
	if (((inName == HX_CSTRING("assets/sprites/SPRITE.png")))){
		HX_STACK_LINE(473)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/SPRITE.png"),null());
	}
	HX_STACK_LINE(479)
	if (((inName == HX_CSTRING("assets/sprites/SPRITE.xml")))){
		HX_STACK_LINE(480)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/sprites/SPRITE.xml"));
	}
	HX_STACK_LINE(486)
	if (((inName == HX_CSTRING("assets/sprites/TP-file.png")))){
		HX_STACK_LINE(487)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/TP-file.png"),null());
	}
	HX_STACK_LINE(493)
	if (((inName == HX_CSTRING("assets/sprites/TP-file.tps")))){
		HX_STACK_LINE(494)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/sprites/TP-file.tps"));
	}
	HX_STACK_LINE(500)
	if (((inName == HX_CSTRING("assets/sprites/TP-file.xml")))){
		HX_STACK_LINE(501)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/sprites/TP-file.xml"));
	}
	HX_STACK_LINE(507)
	if (((inName == HX_CSTRING("assets/sprites/TP-file2.png")))){
		HX_STACK_LINE(508)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/sprites/TP-file2.png"),null());
	}
	HX_STACK_LINE(514)
	if (((inName == HX_CSTRING("assets/sprites/TP-file2.tps")))){
		HX_STACK_LINE(515)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/sprites/TP-file2.tps"));
	}
	HX_STACK_LINE(521)
	if (((inName == HX_CSTRING("assets/sprites/TP-file2.xml")))){
		HX_STACK_LINE(522)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/sprites/TP-file2.xml"));
	}
	HX_STACK_LINE(528)
	if (((inName == HX_CSTRING("assets/tennisbal.png")))){
		HX_STACK_LINE(529)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/tennisbal.png"),null());
	}
	HX_STACK_LINE(535)
	if (((inName == HX_CSTRING("assets/walking.png")))){
		HX_STACK_LINE(536)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/walking.png"),null());
	}
	HX_STACK_LINE(542)
	if (((inName == HX_CSTRING("assets/walking.xml")))){
		HX_STACK_LINE(543)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/walking.xml"));
	}
	HX_STACK_LINE(549)
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
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
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
	HX_CSTRING("initialize"),
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

