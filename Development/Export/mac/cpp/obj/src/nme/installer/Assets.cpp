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
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/General/Enemies/empty.md"),HX_CSTRING("assets/mobile-1x/General/Enemies/empty.md"));
			HX_STACK_LINE(44)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/General/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(45)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/General/Environment/Background/empty.md"),HX_CSTRING("assets/mobile-1x/General/Environment/Background/empty.md"));
			HX_STACK_LINE(46)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/General/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(47)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/General/Environment/Foreground/empty.md"),HX_CSTRING("assets/mobile-1x/General/Environment/Foreground/empty.md"));
			HX_STACK_LINE(48)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/General/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(49)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/General/Worldmap/empty.md"),HX_CSTRING("assets/mobile-1x/General/Worldmap/empty.md"));
			HX_STACK_LINE(50)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/General/Worldmap/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(51)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/Specific/Level1/Enemies/empty.md"),HX_CSTRING("assets/mobile-1x/Specific/Level1/Enemies/empty.md"));
			HX_STACK_LINE(52)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/Specific/Level1/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(53)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/Specific/Level1/Environment/Background/empty.md"),HX_CSTRING("assets/mobile-1x/Specific/Level1/Environment/Background/empty.md"));
			HX_STACK_LINE(54)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/Specific/Level1/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(55)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/Specific/Level1/Environment/Foreground/empty.md"),HX_CSTRING("assets/mobile-1x/Specific/Level1/Environment/Foreground/empty.md"));
			HX_STACK_LINE(56)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/Specific/Level1/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(57)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/Specific/Level2/Enemies/empty.md"),HX_CSTRING("assets/mobile-1x/Specific/Level2/Enemies/empty.md"));
			HX_STACK_LINE(58)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/Specific/Level2/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(59)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/Specific/Level2/Environment/Background/empty.md"),HX_CSTRING("assets/mobile-1x/Specific/Level2/Environment/Background/empty.md"));
			HX_STACK_LINE(60)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/Specific/Level2/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(61)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md"),HX_CSTRING("assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md"));
			HX_STACK_LINE(62)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/Specific/Level2/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(63)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/Specific/Level3/Enemies/empty.md"),HX_CSTRING("assets/mobile-1x/Specific/Level3/Enemies/empty.md"));
			HX_STACK_LINE(64)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/Specific/Level3/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(65)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/Specific/Level3/Environment/Background/empty.md"),HX_CSTRING("assets/mobile-1x/Specific/Level3/Environment/Background/empty.md"));
			HX_STACK_LINE(66)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/Specific/Level3/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(67)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md"),HX_CSTRING("assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md"));
			HX_STACK_LINE(68)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/Specific/Level3/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(69)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/test1.png"),HX_CSTRING("assets/mobile-1x/test1.png"));
			HX_STACK_LINE(70)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/test1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(71)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/test2.png"),HX_CSTRING("assets/mobile-1x/test2.png"));
			HX_STACK_LINE(72)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/test2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(73)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/General/Enemies/empty.md"),HX_CSTRING("assets/mobile-2x/General/Enemies/empty.md"));
			HX_STACK_LINE(74)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/General/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(75)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/General/Environment/Background/empty.md"),HX_CSTRING("assets/mobile-2x/General/Environment/Background/empty.md"));
			HX_STACK_LINE(76)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/General/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(77)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/General/Environment/Foreground/empty.md"),HX_CSTRING("assets/mobile-2x/General/Environment/Foreground/empty.md"));
			HX_STACK_LINE(78)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/General/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(79)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/General/Worldmap/empty.md"),HX_CSTRING("assets/mobile-2x/General/Worldmap/empty.md"));
			HX_STACK_LINE(80)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/General/Worldmap/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(81)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/Specific/Level1/Enemies/empty.md"),HX_CSTRING("assets/mobile-2x/Specific/Level1/Enemies/empty.md"));
			HX_STACK_LINE(82)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/Specific/Level1/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(83)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/Specific/Level1/Environment/Background/empty.md"),HX_CSTRING("assets/mobile-2x/Specific/Level1/Environment/Background/empty.md"));
			HX_STACK_LINE(84)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/Specific/Level1/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(85)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md"),HX_CSTRING("assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md"));
			HX_STACK_LINE(86)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/Specific/Level1/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(87)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/Specific/Level2/Enemies/empty.md"),HX_CSTRING("assets/mobile-2x/Specific/Level2/Enemies/empty.md"));
			HX_STACK_LINE(88)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/Specific/Level2/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(89)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/Specific/Level2/Environment/Background/empty.md"),HX_CSTRING("assets/mobile-2x/Specific/Level2/Environment/Background/empty.md"));
			HX_STACK_LINE(90)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/Specific/Level2/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(91)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md"),HX_CSTRING("assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md"));
			HX_STACK_LINE(92)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/Specific/Level2/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(93)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/Specific/Level3/Enemies/empty.md"),HX_CSTRING("assets/mobile-2x/Specific/Level3/Enemies/empty.md"));
			HX_STACK_LINE(94)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/Specific/Level3/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(95)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/Specific/Level3/Environment/Background/empty.md"),HX_CSTRING("assets/mobile-2x/Specific/Level3/Environment/Background/empty.md"));
			HX_STACK_LINE(96)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/Specific/Level3/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(97)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md"),HX_CSTRING("assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md"));
			HX_STACK_LINE(98)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-2x/Specific/Level3/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(99)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/bg.xml"),HX_CSTRING("assets/source/bg.xml"));
			HX_STACK_LINE(100)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/bg.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(101)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/General/Enemies/empty.md"),HX_CSTRING("assets/source/General/Enemies/empty.md"));
			HX_STACK_LINE(102)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/General/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(103)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/General/Environment/Background/empty.md"),HX_CSTRING("assets/source/General/Environment/Background/empty.md"));
			HX_STACK_LINE(104)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/General/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(105)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/General/Environment/Foreground/empty.md"),HX_CSTRING("assets/source/General/Environment/Foreground/empty.md"));
			HX_STACK_LINE(106)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/General/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(107)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/General/Sound/Effects/empty.md"),HX_CSTRING("assets/source/General/Sound/Effects/empty.md"));
			HX_STACK_LINE(108)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/General/Sound/Effects/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(109)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/General/Sound/Music/empty.md"),HX_CSTRING("assets/source/General/Sound/Music/empty.md"));
			HX_STACK_LINE(110)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/General/Sound/Music/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(111)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/General/Worldmap/empty.md"),HX_CSTRING("assets/source/General/Worldmap/empty.md"));
			HX_STACK_LINE(112)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/General/Worldmap/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(113)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level1/Enemies/empty.md"),HX_CSTRING("assets/source/Specific/Level1/Enemies/empty.md"));
			HX_STACK_LINE(114)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level1/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(115)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level1/Environment/Background/empty.md"),HX_CSTRING("assets/source/Specific/Level1/Environment/Background/empty.md"));
			HX_STACK_LINE(116)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level1/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(117)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level1/Environment/Foreground/empty.md"),HX_CSTRING("assets/source/Specific/Level1/Environment/Foreground/empty.md"));
			HX_STACK_LINE(118)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level1/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(119)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level1/Sound/Effects/empty.md"),HX_CSTRING("assets/source/Specific/Level1/Sound/Effects/empty.md"));
			HX_STACK_LINE(120)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level1/Sound/Effects/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(121)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level1/Sound/Music/empty.md"),HX_CSTRING("assets/source/Specific/Level1/Sound/Music/empty.md"));
			HX_STACK_LINE(122)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level1/Sound/Music/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(123)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level2/Enemies/empty.md"),HX_CSTRING("assets/source/Specific/Level2/Enemies/empty.md"));
			HX_STACK_LINE(124)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level2/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(125)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level2/Environment/Background/empty.md"),HX_CSTRING("assets/source/Specific/Level2/Environment/Background/empty.md"));
			HX_STACK_LINE(126)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level2/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(127)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level2/Environment/Foreground/empty.md"),HX_CSTRING("assets/source/Specific/Level2/Environment/Foreground/empty.md"));
			HX_STACK_LINE(128)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level2/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(129)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level2/Sound/Effects/empty.md"),HX_CSTRING("assets/source/Specific/Level2/Sound/Effects/empty.md"));
			HX_STACK_LINE(130)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level2/Sound/Effects/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(131)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level2/Sound/Music/empty.md"),HX_CSTRING("assets/source/Specific/Level2/Sound/Music/empty.md"));
			HX_STACK_LINE(132)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level2/Sound/Music/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(133)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level3/Enemies/empty.md"),HX_CSTRING("assets/source/Specific/Level3/Enemies/empty.md"));
			HX_STACK_LINE(134)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level3/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(135)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level3/Environment/Background/empty.md"),HX_CSTRING("assets/source/Specific/Level3/Environment/Background/empty.md"));
			HX_STACK_LINE(136)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level3/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(137)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level3/Environment/Foreground/empty.md"),HX_CSTRING("assets/source/Specific/Level3/Environment/Foreground/empty.md"));
			HX_STACK_LINE(138)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level3/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(139)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level3/Sound/Effects/empty.md"),HX_CSTRING("assets/source/Specific/Level3/Sound/Effects/empty.md"));
			HX_STACK_LINE(140)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level3/Sound/Effects/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(141)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/Specific/Level3/Sound/Music/empty.md"),HX_CSTRING("assets/source/Specific/Level3/Sound/Music/empty.md"));
			HX_STACK_LINE(142)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/Specific/Level3/Sound/Music/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(143)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/test.xml"),HX_CSTRING("assets/source/test.xml"));
			HX_STACK_LINE(144)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/test.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(145)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/test2.xml"),HX_CSTRING("assets/source/test2.xml"));
			HX_STACK_LINE(146)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/test2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(147)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/General/Enemies/empty.md"),HX_CSTRING("assets/tablet-1x/General/Enemies/empty.md"));
			HX_STACK_LINE(148)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/General/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(149)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/General/Environment/Background/empty.md"),HX_CSTRING("assets/tablet-1x/General/Environment/Background/empty.md"));
			HX_STACK_LINE(150)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/General/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(151)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/General/Environment/Foreground/empty.md"),HX_CSTRING("assets/tablet-1x/General/Environment/Foreground/empty.md"));
			HX_STACK_LINE(152)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/General/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(153)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/General/Worldmap/empty.md"),HX_CSTRING("assets/tablet-1x/General/Worldmap/empty.md"));
			HX_STACK_LINE(154)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/General/Worldmap/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(155)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/Specific/Level1/Enemies/empty.md"),HX_CSTRING("assets/tablet-1x/Specific/Level1/Enemies/empty.md"));
			HX_STACK_LINE(156)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/Specific/Level1/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(157)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/Specific/Level1/Environment/Background/empty.md"),HX_CSTRING("assets/tablet-1x/Specific/Level1/Environment/Background/empty.md"));
			HX_STACK_LINE(158)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/Specific/Level1/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(159)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/Specific/Level1/Environment/Foreground/empty.md"),HX_CSTRING("assets/tablet-1x/Specific/Level1/Environment/Foreground/empty.md"));
			HX_STACK_LINE(160)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/Specific/Level1/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(161)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/Specific/Level2/Enemies/empty.md"),HX_CSTRING("assets/tablet-1x/Specific/Level2/Enemies/empty.md"));
			HX_STACK_LINE(162)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/Specific/Level2/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(163)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/Specific/Level2/Environment/Background/empty.md"),HX_CSTRING("assets/tablet-1x/Specific/Level2/Environment/Background/empty.md"));
			HX_STACK_LINE(164)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/Specific/Level2/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(165)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/Specific/Level2/Environment/Foreground/empty.md"),HX_CSTRING("assets/tablet-1x/Specific/Level2/Environment/Foreground/empty.md"));
			HX_STACK_LINE(166)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/Specific/Level2/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(167)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/Specific/Level3/Enemies/empty.md"),HX_CSTRING("assets/tablet-1x/Specific/Level3/Enemies/empty.md"));
			HX_STACK_LINE(168)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/Specific/Level3/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(169)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/Specific/Level3/Environment/Background/empty.md"),HX_CSTRING("assets/tablet-1x/Specific/Level3/Environment/Background/empty.md"));
			HX_STACK_LINE(170)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/Specific/Level3/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(171)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-1x/Specific/Level3/Environment/Foreground/empty.md"),HX_CSTRING("assets/tablet-1x/Specific/Level3/Environment/Foreground/empty.md"));
			HX_STACK_LINE(172)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-1x/Specific/Level3/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(173)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/General/Enemies/empty.md"),HX_CSTRING("assets/tablet-2x/General/Enemies/empty.md"));
			HX_STACK_LINE(174)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/General/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(175)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/General/Environment/Background/empty.md"),HX_CSTRING("assets/tablet-2x/General/Environment/Background/empty.md"));
			HX_STACK_LINE(176)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/General/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(177)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/General/Environment/Foreground/empty.md"),HX_CSTRING("assets/tablet-2x/General/Environment/Foreground/empty.md"));
			HX_STACK_LINE(178)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/General/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(179)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/General/Worldmap/empty.md"),HX_CSTRING("assets/tablet-2x/General/Worldmap/empty.md"));
			HX_STACK_LINE(180)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/General/Worldmap/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(181)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/Specific/Level1/Enemies/empty.md"),HX_CSTRING("assets/tablet-2x/Specific/Level1/Enemies/empty.md"));
			HX_STACK_LINE(182)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/Specific/Level1/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(183)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/Specific/Level1/Environment/Background/empty.md"),HX_CSTRING("assets/tablet-2x/Specific/Level1/Environment/Background/empty.md"));
			HX_STACK_LINE(184)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/Specific/Level1/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(185)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md"),HX_CSTRING("assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md"));
			HX_STACK_LINE(186)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/Specific/Level1/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(187)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/Specific/Level2/Enemies/empty.md"),HX_CSTRING("assets/tablet-2x/Specific/Level2/Enemies/empty.md"));
			HX_STACK_LINE(188)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/Specific/Level2/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(189)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/Specific/Level2/Environment/Background/empty.md"),HX_CSTRING("assets/tablet-2x/Specific/Level2/Environment/Background/empty.md"));
			HX_STACK_LINE(190)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/Specific/Level2/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(191)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md"),HX_CSTRING("assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md"));
			HX_STACK_LINE(192)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/Specific/Level2/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(193)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/Specific/Level3/Enemies/empty.md"),HX_CSTRING("assets/tablet-2x/Specific/Level3/Enemies/empty.md"));
			HX_STACK_LINE(194)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/Specific/Level3/Enemies/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(195)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/Specific/Level3/Environment/Background/empty.md"),HX_CSTRING("assets/tablet-2x/Specific/Level3/Environment/Background/empty.md"));
			HX_STACK_LINE(196)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/Specific/Level3/Environment/Background/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(197)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md"),HX_CSTRING("assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md"));
			HX_STACK_LINE(198)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/tablet-2x/Specific/Level3/Environment/Foreground/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(201)
			::nme::installer::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

::native::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","nme/installer/Assets.hx",208);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(210)
		::nme::installer::Assets_obj::initialize();
		HX_STACK_LINE(212)
		if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("image")))))){
			HX_STACK_LINE(212)
			if (((bool(useCache) && bool(::nme::installer::Assets_obj::cachedBitmapData->exists(id))))){
				HX_STACK_LINE(214)
				return ::nme::installer::Assets_obj::cachedBitmapData->get(id);
			}
			else{
				HX_STACK_LINE(220)
				::native::display::BitmapData data = ::native::display::BitmapData_obj::load(::nme::installer::Assets_obj::resourceNames->get(id),null());		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(222)
				if ((useCache)){
					HX_STACK_LINE(222)
					::nme::installer::Assets_obj::cachedBitmapData->set(id,data);
				}
				HX_STACK_LINE(228)
				return data;
			}
		}
		else{
			HX_STACK_LINE(232)
			if (((id.indexOf(HX_CSTRING(":"),null()) > (int)-1))){
				HX_STACK_LINE(234)
				::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
				HX_STACK_LINE(235)
				::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
				HX_STACK_LINE(237)
				if ((::nme::installer::Assets_obj::libraryTypes->exists(libraryName))){
				}
				else{
					HX_STACK_LINE(271)
					::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),273,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
				}
			}
			else{
				HX_STACK_LINE(277)
				::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),279,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
			}
		}
		HX_STACK_LINE(283)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::native::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","nme/installer/Assets.hx",288);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(290)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(292)
	if ((::nme::installer::Assets_obj::resourceNames->exists(id))){
		HX_STACK_LINE(292)
		return ::native::utils::ByteArray_obj::readFile(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(298)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),298,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBytes")));
		HX_STACK_LINE(300)
		return null();
	}
	HX_STACK_LINE(292)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::native::text::Font Assets_obj::getFont( ::String id){
	HX_STACK_PUSH("Assets::getFont","nme/installer/Assets.hx",307);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(309)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(311)
	if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("font")))))){
		HX_STACK_LINE(311)
		return ::native::text::Font_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(317)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),317,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getFont")));
		HX_STACK_LINE(319)
		return null();
	}
	HX_STACK_LINE(311)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::format::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_PUSH("Assets::getMovieClip","nme/installer/Assets.hx",326);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(328)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(330)
	::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(331)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(333)
	if ((::nme::installer::Assets_obj::libraryTypes->exists(libraryName))){
	}
	else{
		HX_STACK_LINE(367)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),369,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getMovieClip")));
	}
	HX_STACK_LINE(373)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::String Assets_obj::getResourceName( ::String id){
	HX_STACK_PUSH("Assets::getResourceName","nme/installer/Assets.hx",378);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(380)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(382)
	return ::nme::installer::Assets_obj::resourceNames->get(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getResourceName,return )

::native::media::Sound Assets_obj::getSound( ::String id){
	HX_STACK_PUSH("Assets::getSound","nme/installer/Assets.hx",387);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(389)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(391)
	if ((::nme::installer::Assets_obj::resourceTypes->exists(id))){
		HX_STACK_LINE(391)
		if (((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("sound")))){
			HX_STACK_LINE(393)
			return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),false);
		}
		else{
			HX_STACK_LINE(397)
			if (((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("music")))){
				HX_STACK_LINE(397)
				return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),true);
			}
		}
	}
	HX_STACK_LINE(405)
	::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),405,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getSound")));
	HX_STACK_LINE(407)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","nme/installer/Assets.hx",412);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(414)
	::native::utils::ByteArray bytes = ::nme::installer::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(416)
	if (((bytes == null()))){
		HX_STACK_LINE(416)
		return null();
	}
	else{
		HX_STACK_LINE(420)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(416)
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
