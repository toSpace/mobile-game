#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_format_display_MovieClip
#include <format/display/MovieClip.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_media_Sound
#include <native/media/Sound.h>
#endif
#ifndef INCLUDED_native_media_SoundLoaderContext
#include <native/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_native_net_URLRequest
#include <native/net/URLRequest.h>
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
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
namespace nme{
namespace installer{

Void Assets_obj::__construct()
{
	return null();
}

Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::Hash Assets_obj::cachedBitmapData;

bool Assets_obj::initialized;

::Hash Assets_obj::libraryTypes;

::Hash Assets_obj::resourceNames;

::Hash Assets_obj::resourceTypes;

Void Assets_obj::initialize( ){
{
		HX_STACK_PUSH("Assets::initialize","nme/installer/Assets.hx",39);
		HX_STACK_LINE(39)
		if ((!(::nme::installer::Assets_obj::initialized))){
			HX_STACK_LINE(43)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/bg/fog_large.png"),HX_CSTRING("assets/mobile-1x/general/bg/fog_large.png"));
			HX_STACK_LINE(44)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/bg/fog_large.png"),HX_CSTRING("image"));
			HX_STACK_LINE(45)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/bg/fog_medium.png"),HX_CSTRING("assets/mobile-1x/general/bg/fog_medium.png"));
			HX_STACK_LINE(46)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/bg/fog_medium.png"),HX_CSTRING("image"));
			HX_STACK_LINE(47)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/bg/fog_small.png"),HX_CSTRING("assets/mobile-1x/general/bg/fog_small.png"));
			HX_STACK_LINE(48)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/bg/fog_small.png"),HX_CSTRING("image"));
			HX_STACK_LINE(49)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/bg/star.png"),HX_CSTRING("assets/mobile-1x/general/bg/star.png"));
			HX_STACK_LINE(50)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/bg/star.png"),HX_CSTRING("image"));
			HX_STACK_LINE(51)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/characters/walking-sparrow.xml"),HX_CSTRING("assets/mobile-1x/general/characters/walking-sparrow.xml"));
			HX_STACK_LINE(52)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/characters/walking-sparrow.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(53)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/characters/walking.png"),HX_CSTRING("assets/mobile-1x/general/characters/walking.png"));
			HX_STACK_LINE(54)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/characters/walking.png"),HX_CSTRING("image"));
			HX_STACK_LINE(55)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/fg/grass1.png"),HX_CSTRING("assets/mobile-1x/general/fg/grass1.png"));
			HX_STACK_LINE(56)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/fg/grass1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(57)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/fg/grass2.png"),HX_CSTRING("assets/mobile-1x/general/fg/grass2.png"));
			HX_STACK_LINE(58)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/fg/grass2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(59)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/fg/grass3.png"),HX_CSTRING("assets/mobile-1x/general/fg/grass3.png"));
			HX_STACK_LINE(60)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/fg/grass3.png"),HX_CSTRING("image"));
			HX_STACK_LINE(61)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/fg/grass4.png"),HX_CSTRING("assets/mobile-1x/general/fg/grass4.png"));
			HX_STACK_LINE(62)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/fg/grass4.png"),HX_CSTRING("image"));
			HX_STACK_LINE(63)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/fg/grass5.png"),HX_CSTRING("assets/mobile-1x/general/fg/grass5.png"));
			HX_STACK_LINE(64)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/fg/grass5.png"),HX_CSTRING("image"));
			HX_STACK_LINE(65)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/fg/grass6.png"),HX_CSTRING("assets/mobile-1x/general/fg/grass6.png"));
			HX_STACK_LINE(66)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/fg/grass6.png"),HX_CSTRING("image"));
			HX_STACK_LINE(67)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/fg/grass7.png"),HX_CSTRING("assets/mobile-1x/general/fg/grass7.png"));
			HX_STACK_LINE(68)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/fg/grass7.png"),HX_CSTRING("image"));
			HX_STACK_LINE(69)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/gui/button.png"),HX_CSTRING("assets/mobile-1x/general/gui/button.png"));
			HX_STACK_LINE(70)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/gui/button.png"),HX_CSTRING("image"));
			HX_STACK_LINE(71)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/general/gui/button2.png"),HX_CSTRING("assets/mobile-1x/general/gui/button2.png"));
			HX_STACK_LINE(72)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/general/gui/button2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(73)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/test1.png"),HX_CSTRING("assets/mobile-1x/test1.png"));
			HX_STACK_LINE(74)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/test1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(75)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/test2.png"),HX_CSTRING("assets/mobile-1x/test2.png"));
			HX_STACK_LINE(76)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/test2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(77)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/test3bg.png"),HX_CSTRING("assets/mobile-1x/test3bg.png"));
			HX_STACK_LINE(78)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/test3bg.png"),HX_CSTRING("image"));
			HX_STACK_LINE(79)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/walking-sparrow.xml"),HX_CSTRING("assets/mobile-1x/walking-sparrow.xml"));
			HX_STACK_LINE(80)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/walking-sparrow.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(81)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/walking.png"),HX_CSTRING("assets/mobile-1x/walking.png"));
			HX_STACK_LINE(82)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/walking.png"),HX_CSTRING("image"));
			HX_STACK_LINE(83)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill1.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/hill1.png"));
			HX_STACK_LINE(84)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(85)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill2.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/hill2.png"));
			HX_STACK_LINE(86)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(87)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill3.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/hill3.png"));
			HX_STACK_LINE(88)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill3.png"),HX_CSTRING("image"));
			HX_STACK_LINE(89)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill4.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/hill4.png"));
			HX_STACK_LINE(90)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill4.png"),HX_CSTRING("image"));
			HX_STACK_LINE(91)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill5.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/hill5.png"));
			HX_STACK_LINE(92)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill5.png"),HX_CSTRING("image"));
			HX_STACK_LINE(93)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill6.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/hill6.png"));
			HX_STACK_LINE(94)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill6.png"),HX_CSTRING("image"));
			HX_STACK_LINE(95)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill7.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/hill7.png"));
			HX_STACK_LINE(96)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/hill7.png"),HX_CSTRING("image"));
			HX_STACK_LINE(97)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree1.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree1.png"));
			HX_STACK_LINE(98)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(99)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree10.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree10.png"));
			HX_STACK_LINE(100)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree10.png"),HX_CSTRING("image"));
			HX_STACK_LINE(101)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree11.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree11.png"));
			HX_STACK_LINE(102)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree11.png"),HX_CSTRING("image"));
			HX_STACK_LINE(103)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree12.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree12.png"));
			HX_STACK_LINE(104)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree12.png"),HX_CSTRING("image"));
			HX_STACK_LINE(105)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree13.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree13.png"));
			HX_STACK_LINE(106)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree13.png"),HX_CSTRING("image"));
			HX_STACK_LINE(107)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree14.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree14.png"));
			HX_STACK_LINE(108)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree14.png"),HX_CSTRING("image"));
			HX_STACK_LINE(109)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree15.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree15.png"));
			HX_STACK_LINE(110)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree15.png"),HX_CSTRING("image"));
			HX_STACK_LINE(111)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree16.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree16.png"));
			HX_STACK_LINE(112)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree16.png"),HX_CSTRING("image"));
			HX_STACK_LINE(113)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree17.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree17.png"));
			HX_STACK_LINE(114)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree17.png"),HX_CSTRING("image"));
			HX_STACK_LINE(115)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree18.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree18.png"));
			HX_STACK_LINE(116)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree18.png"),HX_CSTRING("image"));
			HX_STACK_LINE(117)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree19.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree19.png"));
			HX_STACK_LINE(118)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree19.png"),HX_CSTRING("image"));
			HX_STACK_LINE(119)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree2.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree2.png"));
			HX_STACK_LINE(120)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(121)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree20.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree20.png"));
			HX_STACK_LINE(122)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree20.png"),HX_CSTRING("image"));
			HX_STACK_LINE(123)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree21.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree21.png"));
			HX_STACK_LINE(124)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree21.png"),HX_CSTRING("image"));
			HX_STACK_LINE(125)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree22.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree22.png"));
			HX_STACK_LINE(126)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree22.png"),HX_CSTRING("image"));
			HX_STACK_LINE(127)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree23.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree23.png"));
			HX_STACK_LINE(128)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree23.png"),HX_CSTRING("image"));
			HX_STACK_LINE(129)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree24.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree24.png"));
			HX_STACK_LINE(130)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree24.png"),HX_CSTRING("image"));
			HX_STACK_LINE(131)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree25.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree25.png"));
			HX_STACK_LINE(132)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree25.png"),HX_CSTRING("image"));
			HX_STACK_LINE(133)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree3.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree3.png"));
			HX_STACK_LINE(134)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree3.png"),HX_CSTRING("image"));
			HX_STACK_LINE(135)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree4.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree4.png"));
			HX_STACK_LINE(136)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree4.png"),HX_CSTRING("image"));
			HX_STACK_LINE(137)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree5.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree5.png"));
			HX_STACK_LINE(138)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree5.png"),HX_CSTRING("image"));
			HX_STACK_LINE(139)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree6.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree6.png"));
			HX_STACK_LINE(140)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree6.png"),HX_CSTRING("image"));
			HX_STACK_LINE(141)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree7.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree7.png"));
			HX_STACK_LINE(142)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree7.png"),HX_CSTRING("image"));
			HX_STACK_LINE(143)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree8.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree8.png"));
			HX_STACK_LINE(144)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree8.png"),HX_CSTRING("image"));
			HX_STACK_LINE(145)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree9.png"),HX_CSTRING("assets/mobile-1x/world1/general/bg/tree9.png"));
			HX_STACK_LINE(146)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/bg/tree9.png"),HX_CSTRING("image"));
			HX_STACK_LINE(147)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/general/fg/empty.md"),HX_CSTRING("assets/mobile-1x/world1/general/fg/empty.md"));
			HX_STACK_LINE(148)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/general/fg/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(149)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/background.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/background.png"));
			HX_STACK_LINE(150)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/background.png"),HX_CSTRING("image"));
			HX_STACK_LINE(151)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/background02.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/background02.png"));
			HX_STACK_LINE(152)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/background02.png"),HX_CSTRING("image"));
			HX_STACK_LINE(153)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/sun.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/sun.png"));
			HX_STACK_LINE(154)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/sun.png"),HX_CSTRING("image"));
			HX_STACK_LINE(155)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png"));
			HX_STACK_LINE(156)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(157)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png"));
			HX_STACK_LINE(158)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(159)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png"));
			HX_STACK_LINE(160)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png"),HX_CSTRING("image"));
			HX_STACK_LINE(161)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png"));
			HX_STACK_LINE(162)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png"),HX_CSTRING("image"));
			HX_STACK_LINE(163)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png"));
			HX_STACK_LINE(164)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png"),HX_CSTRING("image"));
			HX_STACK_LINE(165)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png"));
			HX_STACK_LINE(166)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png"),HX_CSTRING("image"));
			HX_STACK_LINE(167)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png"));
			HX_STACK_LINE(168)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png"),HX_CSTRING("image"));
			HX_STACK_LINE(169)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png"));
			HX_STACK_LINE(170)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png"),HX_CSTRING("image"));
			HX_STACK_LINE(171)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png"));
			HX_STACK_LINE(172)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(173)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png"));
			HX_STACK_LINE(174)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(175)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png"));
			HX_STACK_LINE(176)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree3.png"),HX_CSTRING("image"));
			HX_STACK_LINE(177)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png"),HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png"));
			HX_STACK_LINE(178)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/tree4.png"),HX_CSTRING("image"));
			HX_STACK_LINE(179)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/bg/fog_large.png"),HX_CSTRING("assets/source/general/bg/fog_large.png"));
			HX_STACK_LINE(180)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/bg/fog_large.png"),HX_CSTRING("image"));
			HX_STACK_LINE(181)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/bg/fog_large.psd"),HX_CSTRING("assets/source/general/bg/fog_large.psd"));
			HX_STACK_LINE(182)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/bg/fog_large.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(183)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/bg/fog_medium.png"),HX_CSTRING("assets/source/general/bg/fog_medium.png"));
			HX_STACK_LINE(184)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/bg/fog_medium.png"),HX_CSTRING("image"));
			HX_STACK_LINE(185)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/bg/fog_medium.psd"),HX_CSTRING("assets/source/general/bg/fog_medium.psd"));
			HX_STACK_LINE(186)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/bg/fog_medium.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(187)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/bg/fog_small.png"),HX_CSTRING("assets/source/general/bg/fog_small.png"));
			HX_STACK_LINE(188)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/bg/fog_small.png"),HX_CSTRING("image"));
			HX_STACK_LINE(189)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/bg/fog_small.psd"),HX_CSTRING("assets/source/general/bg/fog_small.psd"));
			HX_STACK_LINE(190)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/bg/fog_small.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(191)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/bg/star.png"),HX_CSTRING("assets/source/general/bg/star.png"));
			HX_STACK_LINE(192)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/bg/star.png"),HX_CSTRING("image"));
			HX_STACK_LINE(193)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/bg/star.psd"),HX_CSTRING("assets/source/general/bg/star.psd"));
			HX_STACK_LINE(194)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/bg/star.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(195)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/characters/walking-sparrow.xml"),HX_CSTRING("assets/source/general/characters/walking-sparrow.xml"));
			HX_STACK_LINE(196)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/characters/walking-sparrow.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(197)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/characters/walking.png"),HX_CSTRING("assets/source/general/characters/walking.png"));
			HX_STACK_LINE(198)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/characters/walking.png"),HX_CSTRING("image"));
			HX_STACK_LINE(199)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass1.png"),HX_CSTRING("assets/source/general/fg/grass1.png"));
			HX_STACK_LINE(200)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(201)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass1.psd"),HX_CSTRING("assets/source/general/fg/grass1.psd"));
			HX_STACK_LINE(202)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass1.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(203)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass2.png"),HX_CSTRING("assets/source/general/fg/grass2.png"));
			HX_STACK_LINE(204)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(205)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass2.psd"),HX_CSTRING("assets/source/general/fg/grass2.psd"));
			HX_STACK_LINE(206)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass2.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(207)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass3.png"),HX_CSTRING("assets/source/general/fg/grass3.png"));
			HX_STACK_LINE(208)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass3.png"),HX_CSTRING("image"));
			HX_STACK_LINE(209)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass3.psd"),HX_CSTRING("assets/source/general/fg/grass3.psd"));
			HX_STACK_LINE(210)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass3.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(211)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass4.png"),HX_CSTRING("assets/source/general/fg/grass4.png"));
			HX_STACK_LINE(212)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass4.png"),HX_CSTRING("image"));
			HX_STACK_LINE(213)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass4.psd"),HX_CSTRING("assets/source/general/fg/grass4.psd"));
			HX_STACK_LINE(214)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass4.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(215)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass5.png"),HX_CSTRING("assets/source/general/fg/grass5.png"));
			HX_STACK_LINE(216)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass5.png"),HX_CSTRING("image"));
			HX_STACK_LINE(217)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass5.psd"),HX_CSTRING("assets/source/general/fg/grass5.psd"));
			HX_STACK_LINE(218)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass5.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(219)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass6.png"),HX_CSTRING("assets/source/general/fg/grass6.png"));
			HX_STACK_LINE(220)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass6.png"),HX_CSTRING("image"));
			HX_STACK_LINE(221)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass6.psd"),HX_CSTRING("assets/source/general/fg/grass6.psd"));
			HX_STACK_LINE(222)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass6.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(223)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass7.png"),HX_CSTRING("assets/source/general/fg/grass7.png"));
			HX_STACK_LINE(224)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass7.png"),HX_CSTRING("image"));
			HX_STACK_LINE(225)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/fg/grass7.psd"),HX_CSTRING("assets/source/general/fg/grass7.psd"));
			HX_STACK_LINE(226)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/fg/grass7.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(227)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/gui/button.png"),HX_CSTRING("assets/source/general/gui/button.png"));
			HX_STACK_LINE(228)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/gui/button.png"),HX_CSTRING("image"));
			HX_STACK_LINE(229)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/general/gui/button2.png"),HX_CSTRING("assets/source/general/gui/button2.png"));
			HX_STACK_LINE(230)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/general/gui/button2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(231)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/level_1-forrest-jesse.ai"),HX_CSTRING("assets/source/level_1-forrest-jesse.ai"));
			HX_STACK_LINE(232)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/level_1-forrest-jesse.ai"),HX_CSTRING("text"));
			HX_STACK_LINE(233)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/level_1-forrest-jesse.pdf"),HX_CSTRING("assets/source/level_1-forrest-jesse.pdf"));
			HX_STACK_LINE(234)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/level_1-forrest-jesse.pdf"),HX_CSTRING("text"));
			HX_STACK_LINE(235)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/test1.png"),HX_CSTRING("assets/source/test1.png"));
			HX_STACK_LINE(236)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/test1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(237)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/test2.png"),HX_CSTRING("assets/source/test2.png"));
			HX_STACK_LINE(238)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/test2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(239)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/test3bg.png"),HX_CSTRING("assets/source/test3bg.png"));
			HX_STACK_LINE(240)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/test3bg.png"),HX_CSTRING("image"));
			HX_STACK_LINE(241)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/walking-sparrow.xml"),HX_CSTRING("assets/source/walking-sparrow.xml"));
			HX_STACK_LINE(242)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/walking-sparrow.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(243)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/walking.png"),HX_CSTRING("assets/source/walking.png"));
			HX_STACK_LINE(244)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/walking.png"),HX_CSTRING("image"));
			HX_STACK_LINE(245)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill1.png"),HX_CSTRING("assets/source/world1/general/bg/hill1.png"));
			HX_STACK_LINE(246)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(247)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill1.psd"),HX_CSTRING("assets/source/world1/general/bg/hill1.psd"));
			HX_STACK_LINE(248)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill1.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(249)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill2.png"),HX_CSTRING("assets/source/world1/general/bg/hill2.png"));
			HX_STACK_LINE(250)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(251)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill2.psd"),HX_CSTRING("assets/source/world1/general/bg/hill2.psd"));
			HX_STACK_LINE(252)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill2.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(253)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill3.png"),HX_CSTRING("assets/source/world1/general/bg/hill3.png"));
			HX_STACK_LINE(254)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill3.png"),HX_CSTRING("image"));
			HX_STACK_LINE(255)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill3.psd"),HX_CSTRING("assets/source/world1/general/bg/hill3.psd"));
			HX_STACK_LINE(256)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill3.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(257)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill4.png"),HX_CSTRING("assets/source/world1/general/bg/hill4.png"));
			HX_STACK_LINE(258)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill4.png"),HX_CSTRING("image"));
			HX_STACK_LINE(259)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill4.psd"),HX_CSTRING("assets/source/world1/general/bg/hill4.psd"));
			HX_STACK_LINE(260)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill4.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(261)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill5.png"),HX_CSTRING("assets/source/world1/general/bg/hill5.png"));
			HX_STACK_LINE(262)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill5.png"),HX_CSTRING("image"));
			HX_STACK_LINE(263)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill5.psd"),HX_CSTRING("assets/source/world1/general/bg/hill5.psd"));
			HX_STACK_LINE(264)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill5.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(265)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill6.png"),HX_CSTRING("assets/source/world1/general/bg/hill6.png"));
			HX_STACK_LINE(266)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill6.png"),HX_CSTRING("image"));
			HX_STACK_LINE(267)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill6.psd"),HX_CSTRING("assets/source/world1/general/bg/hill6.psd"));
			HX_STACK_LINE(268)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill6.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(269)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill7.png"),HX_CSTRING("assets/source/world1/general/bg/hill7.png"));
			HX_STACK_LINE(270)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill7.png"),HX_CSTRING("image"));
			HX_STACK_LINE(271)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/hill7.psd"),HX_CSTRING("assets/source/world1/general/bg/hill7.psd"));
			HX_STACK_LINE(272)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/hill7.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(273)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree1.png"),HX_CSTRING("assets/source/world1/general/bg/tree1.png"));
			HX_STACK_LINE(274)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(275)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree1.psd"),HX_CSTRING("assets/source/world1/general/bg/tree1.psd"));
			HX_STACK_LINE(276)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree1.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(277)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree10.png"),HX_CSTRING("assets/source/world1/general/bg/tree10.png"));
			HX_STACK_LINE(278)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree10.png"),HX_CSTRING("image"));
			HX_STACK_LINE(279)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree10.psd"),HX_CSTRING("assets/source/world1/general/bg/tree10.psd"));
			HX_STACK_LINE(280)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree10.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(281)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree11.png"),HX_CSTRING("assets/source/world1/general/bg/tree11.png"));
			HX_STACK_LINE(282)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree11.png"),HX_CSTRING("image"));
			HX_STACK_LINE(283)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree11.psd"),HX_CSTRING("assets/source/world1/general/bg/tree11.psd"));
			HX_STACK_LINE(284)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree11.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(285)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree12.png"),HX_CSTRING("assets/source/world1/general/bg/tree12.png"));
			HX_STACK_LINE(286)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree12.png"),HX_CSTRING("image"));
			HX_STACK_LINE(287)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree12.psd"),HX_CSTRING("assets/source/world1/general/bg/tree12.psd"));
			HX_STACK_LINE(288)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree12.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(289)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree13.png"),HX_CSTRING("assets/source/world1/general/bg/tree13.png"));
			HX_STACK_LINE(290)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree13.png"),HX_CSTRING("image"));
			HX_STACK_LINE(291)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree13.psd"),HX_CSTRING("assets/source/world1/general/bg/tree13.psd"));
			HX_STACK_LINE(292)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree13.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(293)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree14.png"),HX_CSTRING("assets/source/world1/general/bg/tree14.png"));
			HX_STACK_LINE(294)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree14.png"),HX_CSTRING("image"));
			HX_STACK_LINE(295)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree14.psd"),HX_CSTRING("assets/source/world1/general/bg/tree14.psd"));
			HX_STACK_LINE(296)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree14.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(297)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree15.png"),HX_CSTRING("assets/source/world1/general/bg/tree15.png"));
			HX_STACK_LINE(298)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree15.png"),HX_CSTRING("image"));
			HX_STACK_LINE(299)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree15.psd"),HX_CSTRING("assets/source/world1/general/bg/tree15.psd"));
			HX_STACK_LINE(300)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree15.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(301)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree16.png"),HX_CSTRING("assets/source/world1/general/bg/tree16.png"));
			HX_STACK_LINE(302)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree16.png"),HX_CSTRING("image"));
			HX_STACK_LINE(303)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree16.psd"),HX_CSTRING("assets/source/world1/general/bg/tree16.psd"));
			HX_STACK_LINE(304)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree16.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(305)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree17.png"),HX_CSTRING("assets/source/world1/general/bg/tree17.png"));
			HX_STACK_LINE(306)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree17.png"),HX_CSTRING("image"));
			HX_STACK_LINE(307)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree17.psd"),HX_CSTRING("assets/source/world1/general/bg/tree17.psd"));
			HX_STACK_LINE(308)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree17.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(309)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree18.png"),HX_CSTRING("assets/source/world1/general/bg/tree18.png"));
			HX_STACK_LINE(310)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree18.png"),HX_CSTRING("image"));
			HX_STACK_LINE(311)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree18.psd"),HX_CSTRING("assets/source/world1/general/bg/tree18.psd"));
			HX_STACK_LINE(312)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree18.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(313)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree19.png"),HX_CSTRING("assets/source/world1/general/bg/tree19.png"));
			HX_STACK_LINE(314)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree19.png"),HX_CSTRING("image"));
			HX_STACK_LINE(315)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree19.psd"),HX_CSTRING("assets/source/world1/general/bg/tree19.psd"));
			HX_STACK_LINE(316)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree19.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(317)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree2.png"),HX_CSTRING("assets/source/world1/general/bg/tree2.png"));
			HX_STACK_LINE(318)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(319)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree2.psd"),HX_CSTRING("assets/source/world1/general/bg/tree2.psd"));
			HX_STACK_LINE(320)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree2.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(321)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree20.png"),HX_CSTRING("assets/source/world1/general/bg/tree20.png"));
			HX_STACK_LINE(322)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree20.png"),HX_CSTRING("image"));
			HX_STACK_LINE(323)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree20.psd"),HX_CSTRING("assets/source/world1/general/bg/tree20.psd"));
			HX_STACK_LINE(324)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree20.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(325)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree21.png"),HX_CSTRING("assets/source/world1/general/bg/tree21.png"));
			HX_STACK_LINE(326)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree21.png"),HX_CSTRING("image"));
			HX_STACK_LINE(327)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree21.psd"),HX_CSTRING("assets/source/world1/general/bg/tree21.psd"));
			HX_STACK_LINE(328)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree21.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(329)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree22.png"),HX_CSTRING("assets/source/world1/general/bg/tree22.png"));
			HX_STACK_LINE(330)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree22.png"),HX_CSTRING("image"));
			HX_STACK_LINE(331)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree22.psd"),HX_CSTRING("assets/source/world1/general/bg/tree22.psd"));
			HX_STACK_LINE(332)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree22.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(333)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree23.png"),HX_CSTRING("assets/source/world1/general/bg/tree23.png"));
			HX_STACK_LINE(334)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree23.png"),HX_CSTRING("image"));
			HX_STACK_LINE(335)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree23.psd"),HX_CSTRING("assets/source/world1/general/bg/tree23.psd"));
			HX_STACK_LINE(336)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree23.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(337)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree24.png"),HX_CSTRING("assets/source/world1/general/bg/tree24.png"));
			HX_STACK_LINE(338)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree24.png"),HX_CSTRING("image"));
			HX_STACK_LINE(339)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree24.psd"),HX_CSTRING("assets/source/world1/general/bg/tree24.psd"));
			HX_STACK_LINE(340)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree24.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(341)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree25.png"),HX_CSTRING("assets/source/world1/general/bg/tree25.png"));
			HX_STACK_LINE(342)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree25.png"),HX_CSTRING("image"));
			HX_STACK_LINE(343)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree25.psd"),HX_CSTRING("assets/source/world1/general/bg/tree25.psd"));
			HX_STACK_LINE(344)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree25.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(345)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree3.png"),HX_CSTRING("assets/source/world1/general/bg/tree3.png"));
			HX_STACK_LINE(346)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree3.png"),HX_CSTRING("image"));
			HX_STACK_LINE(347)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree3.psd"),HX_CSTRING("assets/source/world1/general/bg/tree3.psd"));
			HX_STACK_LINE(348)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree3.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(349)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree4.png"),HX_CSTRING("assets/source/world1/general/bg/tree4.png"));
			HX_STACK_LINE(350)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree4.png"),HX_CSTRING("image"));
			HX_STACK_LINE(351)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree4.psd"),HX_CSTRING("assets/source/world1/general/bg/tree4.psd"));
			HX_STACK_LINE(352)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree4.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(353)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree5.png"),HX_CSTRING("assets/source/world1/general/bg/tree5.png"));
			HX_STACK_LINE(354)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree5.png"),HX_CSTRING("image"));
			HX_STACK_LINE(355)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree5.psd"),HX_CSTRING("assets/source/world1/general/bg/tree5.psd"));
			HX_STACK_LINE(356)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree5.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(357)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree6.png"),HX_CSTRING("assets/source/world1/general/bg/tree6.png"));
			HX_STACK_LINE(358)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree6.png"),HX_CSTRING("image"));
			HX_STACK_LINE(359)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree6.psd"),HX_CSTRING("assets/source/world1/general/bg/tree6.psd"));
			HX_STACK_LINE(360)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree6.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(361)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree7.png"),HX_CSTRING("assets/source/world1/general/bg/tree7.png"));
			HX_STACK_LINE(362)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree7.png"),HX_CSTRING("image"));
			HX_STACK_LINE(363)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree7.psd"),HX_CSTRING("assets/source/world1/general/bg/tree7.psd"));
			HX_STACK_LINE(364)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree7.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(365)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree8.png"),HX_CSTRING("assets/source/world1/general/bg/tree8.png"));
			HX_STACK_LINE(366)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree8.png"),HX_CSTRING("image"));
			HX_STACK_LINE(367)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree8.psd"),HX_CSTRING("assets/source/world1/general/bg/tree8.psd"));
			HX_STACK_LINE(368)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree8.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(369)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree9.png"),HX_CSTRING("assets/source/world1/general/bg/tree9.png"));
			HX_STACK_LINE(370)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree9.png"),HX_CSTRING("image"));
			HX_STACK_LINE(371)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/bg/tree9.psd"),HX_CSTRING("assets/source/world1/general/bg/tree9.psd"));
			HX_STACK_LINE(372)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/bg/tree9.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(373)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/general/fg/empty.md"),HX_CSTRING("assets/source/world1/general/fg/empty.md"));
			HX_STACK_LINE(374)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/general/fg/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(375)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/bg/background.png"),HX_CSTRING("assets/source/world1/lvl1/bg/background.png"));
			HX_STACK_LINE(376)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/bg/background.png"),HX_CSTRING("image"));
			HX_STACK_LINE(377)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/bg/background.psd"),HX_CSTRING("assets/source/world1/lvl1/bg/background.psd"));
			HX_STACK_LINE(378)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/bg/background.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(379)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/bg/background02.png"),HX_CSTRING("assets/source/world1/lvl1/bg/background02.png"));
			HX_STACK_LINE(380)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/bg/background02.png"),HX_CSTRING("image"));
			HX_STACK_LINE(381)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/bg/sun.png"),HX_CSTRING("assets/source/world1/lvl1/bg/sun.png"));
			HX_STACK_LINE(382)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/bg/sun.png"),HX_CSTRING("image"));
			HX_STACK_LINE(383)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/bg/sun.psd"),HX_CSTRING("assets/source/world1/lvl1/bg/sun.psd"));
			HX_STACK_LINE(384)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/bg/sun.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(385)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/FG1.psd"),HX_CSTRING("assets/source/world1/lvl1/fg/l1/FG1.psd"));
			HX_STACK_LINE(386)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/FG1.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(387)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png"),HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png"));
			HX_STACK_LINE(388)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(389)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png"),HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png"));
			HX_STACK_LINE(390)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(391)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png"),HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png"));
			HX_STACK_LINE(392)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png"),HX_CSTRING("image"));
			HX_STACK_LINE(393)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png"),HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png"));
			HX_STACK_LINE(394)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png"),HX_CSTRING("image"));
			HX_STACK_LINE(395)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png"),HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png"));
			HX_STACK_LINE(396)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png"),HX_CSTRING("image"));
			HX_STACK_LINE(397)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png"),HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png"));
			HX_STACK_LINE(398)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png"),HX_CSTRING("image"));
			HX_STACK_LINE(399)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png"),HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png"));
			HX_STACK_LINE(400)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png"),HX_CSTRING("image"));
			HX_STACK_LINE(401)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png"),HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png"));
			HX_STACK_LINE(402)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png"),HX_CSTRING("image"));
			HX_STACK_LINE(403)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree1.png"),HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree1.png"));
			HX_STACK_LINE(404)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(405)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree1.psd"),HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree1.psd"));
			HX_STACK_LINE(406)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree1.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(407)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree2.png"),HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree2.png"));
			HX_STACK_LINE(408)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(409)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree2.psd"),HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree2.psd"));
			HX_STACK_LINE(410)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree2.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(411)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree3.png"),HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree3.png"));
			HX_STACK_LINE(412)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree3.png"),HX_CSTRING("image"));
			HX_STACK_LINE(413)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree3.psd"),HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree3.psd"));
			HX_STACK_LINE(414)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree3.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(415)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree4.png"),HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree4.png"));
			HX_STACK_LINE(416)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree4.png"),HX_CSTRING("image"));
			HX_STACK_LINE(417)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree4.psd"),HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree4.psd"));
			HX_STACK_LINE(418)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/tree4.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(419)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/bg.xml"),HX_CSTRING("assets/xml/bg.xml"));
			HX_STACK_LINE(420)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/bg.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(421)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/bg2.xml"),HX_CSTRING("assets/xml/bg2.xml"));
			HX_STACK_LINE(422)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/bg2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(423)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/general/bg/empty.md"),HX_CSTRING("assets/xml/general/bg/empty.md"));
			HX_STACK_LINE(424)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/general/bg/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(425)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/general/characters/empty.md"),HX_CSTRING("assets/xml/general/characters/empty.md"));
			HX_STACK_LINE(426)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/general/characters/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(427)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/general/fg/empty.md"),HX_CSTRING("assets/xml/general/fg/empty.md"));
			HX_STACK_LINE(428)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/general/fg/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(429)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/settings.xml"),HX_CSTRING("assets/xml/settings.xml"));
			HX_STACK_LINE(430)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/settings.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(431)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/test.xml"),HX_CSTRING("assets/xml/test.xml"));
			HX_STACK_LINE(432)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/test.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(433)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/test2.xml"),HX_CSTRING("assets/xml/test2.xml"));
			HX_STACK_LINE(434)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/test2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(435)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/walking.xml"),HX_CSTRING("assets/xml/walking.xml"));
			HX_STACK_LINE(436)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/walking.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(437)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/general/empty.md"),HX_CSTRING("assets/xml/world1/general/empty.md"));
			HX_STACK_LINE(438)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/general/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(439)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml"));
			HX_STACK_LINE(440)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_fog1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(441)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml"));
			HX_STACK_LINE(442)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(443)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml"));
			HX_STACK_LINE(444)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(445)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml"));
			HX_STACK_LINE(446)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill3.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(447)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml"));
			HX_STACK_LINE(448)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/lvl1_bg_l1_hill4.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(449)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml"));
			HX_STACK_LINE(450)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_fog1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(451)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml"));
			HX_STACK_LINE(452)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(453)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml"));
			HX_STACK_LINE(454)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(455)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml"));
			HX_STACK_LINE(456)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree3.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(457)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml"));
			HX_STACK_LINE(458)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree4.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(459)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml"));
			HX_STACK_LINE(460)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/lvl1_bg_l2_tree5.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(461)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml"));
			HX_STACK_LINE(462)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(463)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml"));
			HX_STACK_LINE(464)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree10.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(465)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml"));
			HX_STACK_LINE(466)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree11.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(467)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml"));
			HX_STACK_LINE(468)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(469)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml"));
			HX_STACK_LINE(470)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree3.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(471)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml"));
			HX_STACK_LINE(472)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree4.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(473)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml"));
			HX_STACK_LINE(474)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree5.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(475)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml"));
			HX_STACK_LINE(476)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree6.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(477)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml"));
			HX_STACK_LINE(478)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree7.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(479)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml"));
			HX_STACK_LINE(480)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree8.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(481)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml"));
			HX_STACK_LINE(482)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/lvl1_bg_l3_tree9.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(483)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml"));
			HX_STACK_LINE(484)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_fog1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(485)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml"));
			HX_STACK_LINE(486)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(487)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml"));
			HX_STACK_LINE(488)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(489)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml"));
			HX_STACK_LINE(490)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_hill3.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(491)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml"));
			HX_STACK_LINE(492)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(493)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml"));
			HX_STACK_LINE(494)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(495)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml"));
			HX_STACK_LINE(496)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree3.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(497)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml"));
			HX_STACK_LINE(498)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree4.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(499)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml"));
			HX_STACK_LINE(500)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree5.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(501)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml"));
			HX_STACK_LINE(502)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree6.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(503)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml"));
			HX_STACK_LINE(504)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/lvl1_bg_l4_tree7.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(505)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml"));
			HX_STACK_LINE(506)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(507)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml"));
			HX_STACK_LINE(508)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(509)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml"));
			HX_STACK_LINE(510)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree3.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(511)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml"));
			HX_STACK_LINE(512)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree4.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(513)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml"));
			HX_STACK_LINE(514)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree5.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(515)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml"));
			HX_STACK_LINE(516)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/lvl1_bg_l5_tree6.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(517)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_background.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_background.xml"));
			HX_STACK_LINE(518)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_background.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(519)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml"));
			HX_STACK_LINE(520)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l6/lvl1_bg_l6_sun.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(521)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg.xml"),HX_CSTRING("assets/xml/world1/lvl1/bg.xml"));
			HX_STACK_LINE(522)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(523)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml"));
			HX_STACK_LINE(524)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(525)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml"));
			HX_STACK_LINE(526)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(527)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml"));
			HX_STACK_LINE(528)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(529)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml"));
			HX_STACK_LINE(530)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(531)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml"));
			HX_STACK_LINE(532)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(533)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml"));
			HX_STACK_LINE(534)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(535)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml"));
			HX_STACK_LINE(536)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(537)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml"));
			HX_STACK_LINE(538)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(539)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml"));
			HX_STACK_LINE(540)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(541)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml"));
			HX_STACK_LINE(542)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(543)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml"));
			HX_STACK_LINE(544)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass3.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(545)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml"));
			HX_STACK_LINE(546)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass4.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(547)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml"));
			HX_STACK_LINE(548)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass5.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(549)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml"));
			HX_STACK_LINE(550)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass6.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(551)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml"));
			HX_STACK_LINE(552)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_grass7.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(553)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml"));
			HX_STACK_LINE(554)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(555)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml"));
			HX_STACK_LINE(556)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(557)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml"));
			HX_STACK_LINE(558)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree3.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(559)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml"),HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml"));
			HX_STACK_LINE(560)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/lvl1_fg_l2_tree4.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(561)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl2/bg.xml"),HX_CSTRING("assets/xml/world1/lvl2/bg.xml"));
			HX_STACK_LINE(562)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl2/bg.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(565)
			::nme::installer::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

::native::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","nme/installer/Assets.hx",572);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(574)
		::nme::installer::Assets_obj::initialize();
		HX_STACK_LINE(576)
		if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("image")))))){
			HX_STACK_LINE(576)
			if (((bool(useCache) && bool(::nme::installer::Assets_obj::cachedBitmapData->exists(id))))){
				HX_STACK_LINE(578)
				return ::nme::installer::Assets_obj::cachedBitmapData->get(id);
			}
			else{
				HX_STACK_LINE(584)
				::native::display::BitmapData data = ::native::display::BitmapData_obj::load(::nme::installer::Assets_obj::resourceNames->get(id),null());		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(586)
				if ((useCache)){
					HX_STACK_LINE(586)
					::nme::installer::Assets_obj::cachedBitmapData->set(id,data);
				}
				HX_STACK_LINE(592)
				return data;
			}
		}
		else{
			HX_STACK_LINE(596)
			if (((id.indexOf(HX_CSTRING(":"),null()) > (int)-1))){
				HX_STACK_LINE(598)
				::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
				HX_STACK_LINE(599)
				::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
				HX_STACK_LINE(601)
				if ((::nme::installer::Assets_obj::libraryTypes->exists(libraryName))){
				}
				else{
					HX_STACK_LINE(635)
					::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),637,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
				}
			}
			else{
				HX_STACK_LINE(641)
				::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),643,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
			}
		}
		HX_STACK_LINE(647)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::native::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","nme/installer/Assets.hx",652);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(654)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(656)
	if ((::nme::installer::Assets_obj::resourceNames->exists(id))){
		HX_STACK_LINE(656)
		return ::native::utils::ByteArray_obj::readFile(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(662)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),662,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBytes")));
		HX_STACK_LINE(664)
		return null();
	}
	HX_STACK_LINE(656)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::native::text::Font Assets_obj::getFont( ::String id){
	HX_STACK_PUSH("Assets::getFont","nme/installer/Assets.hx",671);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(673)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(675)
	if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("font")))))){
		HX_STACK_LINE(675)
		return ::native::text::Font_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(681)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),681,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getFont")));
		HX_STACK_LINE(683)
		return null();
	}
	HX_STACK_LINE(675)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::format::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_PUSH("Assets::getMovieClip","nme/installer/Assets.hx",690);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(692)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(694)
	::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(695)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(697)
	if ((::nme::installer::Assets_obj::libraryTypes->exists(libraryName))){
	}
	else{
		HX_STACK_LINE(731)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),733,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getMovieClip")));
	}
	HX_STACK_LINE(737)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::String Assets_obj::getResourceName( ::String id){
	HX_STACK_PUSH("Assets::getResourceName","nme/installer/Assets.hx",742);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(744)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(746)
	return ::nme::installer::Assets_obj::resourceNames->get(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getResourceName,return )

::native::media::Sound Assets_obj::getSound( ::String id){
	HX_STACK_PUSH("Assets::getSound","nme/installer/Assets.hx",751);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(753)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(755)
	if ((::nme::installer::Assets_obj::resourceTypes->exists(id))){
		HX_STACK_LINE(755)
		if (((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("sound")))){
			HX_STACK_LINE(757)
			return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),false);
		}
		else{
			HX_STACK_LINE(761)
			if (((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("music")))){
				HX_STACK_LINE(761)
				return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),true);
			}
		}
	}
	HX_STACK_LINE(769)
	::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),769,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getSound")));
	HX_STACK_LINE(771)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","nme/installer/Assets.hx",776);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(778)
	::native::utils::ByteArray bytes = ::nme::installer::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(780)
	if (((bytes == null()))){
		HX_STACK_LINE(780)
		return null();
	}
	else{
		HX_STACK_LINE(784)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(780)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryTypes") ) { return libraryTypes; }
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return getMovieClip_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resourceNames") ) { return resourceNames; }
		if (HX_FIELD_EQ(inName,"resourceTypes") ) { return resourceTypes; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getResourceName") ) { return getResourceName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { return cachedBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryTypes") ) { libraryTypes=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resourceNames") ) { resourceNames=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resourceTypes") ) { resourceTypes=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { cachedBitmapData=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cachedBitmapData"),
	HX_CSTRING("initialized"),
	HX_CSTRING("libraryTypes"),
	HX_CSTRING("resourceNames"),
	HX_CSTRING("resourceTypes"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getMovieClip"),
	HX_CSTRING("getResourceName"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(Assets_obj::libraryTypes,"libraryTypes");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceNames,"resourceNames");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceTypes,"resourceTypes");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraryTypes,"libraryTypes");
	HX_VISIT_MEMBER_NAME(Assets_obj::resourceNames,"resourceNames");
	HX_VISIT_MEMBER_NAME(Assets_obj::resourceTypes,"resourceTypes");
};

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.installer.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Assets_obj::__boot()
{
	cachedBitmapData= ::Hash_obj::__new();
	initialized= false;
	libraryTypes= ::Hash_obj::__new();
	resourceNames= ::Hash_obj::__new();
	resourceTypes= ::Hash_obj::__new();
}

} // end namespace nme
} // end namespace installer
