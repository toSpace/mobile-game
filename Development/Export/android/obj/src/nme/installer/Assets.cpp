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
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/General/bg/empty.md"),HX_CSTRING("assets_mobile_1x_general_bg_empty_md"));
			HX_STACK_LINE(44)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/General/bg/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(45)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/General/characters/walking-sparrow.xml"),HX_CSTRING("assets_mobile_1x_general_characters_walking_sparrow_xml"));
			HX_STACK_LINE(46)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/General/characters/walking-sparrow.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(47)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/General/characters/walking.png"),HX_CSTRING("assets_mobile_1x_general_characters_walking_png"));
			HX_STACK_LINE(48)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/General/characters/walking.png"),HX_CSTRING("image"));
			HX_STACK_LINE(49)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/General/fg/empty.md"),HX_CSTRING("assets_mobile_1x_general_fg_empty_md"));
			HX_STACK_LINE(50)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/General/fg/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(51)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/General/gui/button.png"),HX_CSTRING("assets_mobile_1x_general_gui_button_png"));
			HX_STACK_LINE(52)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/General/gui/button.png"),HX_CSTRING("image"));
			HX_STACK_LINE(53)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/General/gui/button2.png"),HX_CSTRING("assets_mobile_1x_general_gui_button2_png"));
			HX_STACK_LINE(54)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/General/gui/button2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(55)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/test1.png"),HX_CSTRING("assets_mobile_1x_test1_png"));
			HX_STACK_LINE(56)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/test1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(57)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/test2.png"),HX_CSTRING("assets_mobile_1x_test2_png"));
			HX_STACK_LINE(58)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/test2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(59)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/test3bg.png"),HX_CSTRING("assets_mobile_1x_test3bg_png"));
			HX_STACK_LINE(60)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/test3bg.png"),HX_CSTRING("image"));
			HX_STACK_LINE(61)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/walking-sparrow.xml"),HX_CSTRING("assets_mobile_1x_walking_sparrow_xml"));
			HX_STACK_LINE(62)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/walking-sparrow.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(63)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/walking.png"),HX_CSTRING("assets_mobile_1x_walking_png"));
			HX_STACK_LINE(64)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/walking.png"),HX_CSTRING("image"));
			HX_STACK_LINE(65)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/l1/empty.md"),HX_CSTRING("assets_mobile_1x_world1_lvl1_bg_l1_empty_md"));
			HX_STACK_LINE(66)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/l1/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(67)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/l2/empty.md"),HX_CSTRING("assets_mobile_1x_world1_lvl1_bg_l2_empty_md"));
			HX_STACK_LINE(68)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/l2/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(69)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/l3/empty.md"),HX_CSTRING("assets_mobile_1x_world1_lvl1_bg_l3_empty_md"));
			HX_STACK_LINE(70)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/l3/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(71)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/l4/empty.md"),HX_CSTRING("assets_mobile_1x_world1_lvl1_bg_l4_empty_md"));
			HX_STACK_LINE(72)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/l4/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(73)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/l5/empty.md"),HX_CSTRING("assets_mobile_1x_world1_lvl1_bg_l5_empty_md"));
			HX_STACK_LINE(74)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/l5/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(75)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/l6/empty.md"),HX_CSTRING("assets_mobile_1x_world1_lvl1_bg_l6_empty_md"));
			HX_STACK_LINE(76)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/bg/l6/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(77)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/FG1.psd"),HX_CSTRING("assets_mobile_1x_world1_lvl1_fg_l1_fg1_psd"));
			HX_STACK_LINE(78)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/FG1.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(79)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png"),HX_CSTRING("assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_1_png"));
			HX_STACK_LINE(80)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(81)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png"),HX_CSTRING("assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_2_png"));
			HX_STACK_LINE(82)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(83)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png"),HX_CSTRING("assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_3_png"));
			HX_STACK_LINE(84)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_3.png"),HX_CSTRING("image"));
			HX_STACK_LINE(85)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png"),HX_CSTRING("assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_4_png"));
			HX_STACK_LINE(86)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_4.png"),HX_CSTRING("image"));
			HX_STACK_LINE(87)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png"),HX_CSTRING("assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_5_png"));
			HX_STACK_LINE(88)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_5.png"),HX_CSTRING("image"));
			HX_STACK_LINE(89)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png"),HX_CSTRING("assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_6_png"));
			HX_STACK_LINE(90)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_6.png"),HX_CSTRING("image"));
			HX_STACK_LINE(91)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png"),HX_CSTRING("assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_7_png"));
			HX_STACK_LINE(92)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_7.png"),HX_CSTRING("image"));
			HX_STACK_LINE(93)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png"),HX_CSTRING("assets_mobile_1x_world1_lvl1_fg_l1_lvl1_fg_l1_8_png"));
			HX_STACK_LINE(94)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l1/lvl1_fg_l1_8.png"),HX_CSTRING("image"));
			HX_STACK_LINE(95)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/empty.md"),HX_CSTRING("assets_mobile_1x_world1_lvl1_fg_l2_empty_md"));
			HX_STACK_LINE(96)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/mobile-1x/world1/lvl1/fg/l2/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(97)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/button.png"),HX_CSTRING("assets_source_button_png"));
			HX_STACK_LINE(98)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/button.png"),HX_CSTRING("image"));
			HX_STACK_LINE(99)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/button2.png"),HX_CSTRING("assets_source_button2_png"));
			HX_STACK_LINE(100)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/button2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(101)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/General/bg/empty.md"),HX_CSTRING("assets_source_general_bg_empty_md"));
			HX_STACK_LINE(102)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/General/bg/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(103)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/General/characters/walking-sparrow.xml"),HX_CSTRING("assets_source_general_characters_walking_sparrow_xml"));
			HX_STACK_LINE(104)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/General/characters/walking-sparrow.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(105)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/General/characters/walking.png"),HX_CSTRING("assets_source_general_characters_walking_png"));
			HX_STACK_LINE(106)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/General/characters/walking.png"),HX_CSTRING("image"));
			HX_STACK_LINE(107)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/General/fg/empty.md"),HX_CSTRING("assets_source_general_fg_empty_md"));
			HX_STACK_LINE(108)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/General/fg/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(109)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/test1.png"),HX_CSTRING("assets_source_test1_png"));
			HX_STACK_LINE(110)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/test1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(111)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/test2.png"),HX_CSTRING("assets_source_test2_png"));
			HX_STACK_LINE(112)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/test2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(113)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/test3bg.png"),HX_CSTRING("assets_source_test3bg_png"));
			HX_STACK_LINE(114)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/test3bg.png"),HX_CSTRING("image"));
			HX_STACK_LINE(115)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/walking-sparrow.xml"),HX_CSTRING("assets_source_walking_sparrow_xml"));
			HX_STACK_LINE(116)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/walking-sparrow.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(117)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/walking.png"),HX_CSTRING("assets_source_walking_png"));
			HX_STACK_LINE(118)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/walking.png"),HX_CSTRING("image"));
			HX_STACK_LINE(119)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/bg/l1/empty.md"),HX_CSTRING("assets_source_world1_lvl1_bg_l1_empty_md"));
			HX_STACK_LINE(120)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/bg/l1/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(121)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/bg/l2/empty.md"),HX_CSTRING("assets_source_world1_lvl1_bg_l2_empty_md"));
			HX_STACK_LINE(122)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/bg/l2/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(123)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/bg/l3/empty.md"),HX_CSTRING("assets_source_world1_lvl1_bg_l3_empty_md"));
			HX_STACK_LINE(124)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/bg/l3/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(125)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/bg/l4/empty.md"),HX_CSTRING("assets_source_world1_lvl1_bg_l4_empty_md"));
			HX_STACK_LINE(126)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/bg/l4/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(127)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/bg/l5/empty.md"),HX_CSTRING("assets_source_world1_lvl1_bg_l5_empty_md"));
			HX_STACK_LINE(128)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/bg/l5/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(129)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/bg/l6/empty.md"),HX_CSTRING("assets_source_world1_lvl1_bg_l6_empty_md"));
			HX_STACK_LINE(130)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/bg/l6/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(131)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/FG1.psd"),HX_CSTRING("assets_source_world1_lvl1_fg_l1_fg1_psd"));
			HX_STACK_LINE(132)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/FG1.psd"),HX_CSTRING("binary"));
			HX_STACK_LINE(133)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png"),HX_CSTRING("assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_1_png"));
			HX_STACK_LINE(134)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_1.png"),HX_CSTRING("image"));
			HX_STACK_LINE(135)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png"),HX_CSTRING("assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_2_png"));
			HX_STACK_LINE(136)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_2.png"),HX_CSTRING("image"));
			HX_STACK_LINE(137)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png"),HX_CSTRING("assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_3_png"));
			HX_STACK_LINE(138)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_3.png"),HX_CSTRING("image"));
			HX_STACK_LINE(139)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png"),HX_CSTRING("assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_4_png"));
			HX_STACK_LINE(140)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_4.png"),HX_CSTRING("image"));
			HX_STACK_LINE(141)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png"),HX_CSTRING("assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_5_png"));
			HX_STACK_LINE(142)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_5.png"),HX_CSTRING("image"));
			HX_STACK_LINE(143)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png"),HX_CSTRING("assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_6_png"));
			HX_STACK_LINE(144)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_6.png"),HX_CSTRING("image"));
			HX_STACK_LINE(145)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png"),HX_CSTRING("assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_7_png"));
			HX_STACK_LINE(146)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_7.png"),HX_CSTRING("image"));
			HX_STACK_LINE(147)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png"),HX_CSTRING("assets_source_world1_lvl1_fg_l1_lvl1_fg1_l1_8_png"));
			HX_STACK_LINE(148)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l1/lvl1_fg1_l1_8.png"),HX_CSTRING("image"));
			HX_STACK_LINE(149)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/empty.md"),HX_CSTRING("assets_source_world1_lvl1_fg_l2_empty_md"));
			HX_STACK_LINE(150)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/source/world1/lvl1/fg/l2/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(151)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/bg.xml"),HX_CSTRING("assets_xml_bg_xml"));
			HX_STACK_LINE(152)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/bg.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(153)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/bg2.xml"),HX_CSTRING("assets_xml_bg2_xml"));
			HX_STACK_LINE(154)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/bg2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(155)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/general/bg/empty.md"),HX_CSTRING("assets_xml_general_bg_empty_md"));
			HX_STACK_LINE(156)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/general/bg/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(157)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/general/characters/empty.md"),HX_CSTRING("assets_xml_general_characters_empty_md"));
			HX_STACK_LINE(158)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/general/characters/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(159)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/general/fg/empty.md"),HX_CSTRING("assets_xml_general_fg_empty_md"));
			HX_STACK_LINE(160)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/general/fg/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(161)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/settings.xml"),HX_CSTRING("assets_xml_settings_xml"));
			HX_STACK_LINE(162)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/settings.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(163)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/test.xml"),HX_CSTRING("assets_xml_test_xml"));
			HX_STACK_LINE(164)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/test.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(165)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/test2.xml"),HX_CSTRING("assets_xml_test2_xml"));
			HX_STACK_LINE(166)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/test2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(167)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/walking.xml"),HX_CSTRING("assets_xml_walking_xml"));
			HX_STACK_LINE(168)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/walking.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(169)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/general/empty.md"),HX_CSTRING("assets_xml_world1_general_empty_md"));
			HX_STACK_LINE(170)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/general/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(171)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/empty.md"),HX_CSTRING("assets_xml_world1_lvl1_bg_l1_empty_md"));
			HX_STACK_LINE(172)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l1/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(173)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/empty.md"),HX_CSTRING("assets_xml_world1_lvl1_bg_l2_empty_md"));
			HX_STACK_LINE(174)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l2/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(175)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/empty.md"),HX_CSTRING("assets_xml_world1_lvl1_bg_l3_empty_md"));
			HX_STACK_LINE(176)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l3/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(177)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/empty.md"),HX_CSTRING("assets_xml_world1_lvl1_bg_l4_empty_md"));
			HX_STACK_LINE(178)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l4/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(179)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/empty.md"),HX_CSTRING("assets_xml_world1_lvl1_bg_l5_empty_md"));
			HX_STACK_LINE(180)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l5/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(181)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l6/empty.md"),HX_CSTRING("assets_xml_world1_lvl1_bg_l6_empty_md"));
			HX_STACK_LINE(182)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg/l6/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(183)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/bg.xml"),HX_CSTRING("assets_xml_world1_lvl1_bg_xml"));
			HX_STACK_LINE(184)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/bg.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(185)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml"),HX_CSTRING("assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_1_xml"));
			HX_STACK_LINE(186)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_1.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(187)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml"),HX_CSTRING("assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_2_xml"));
			HX_STACK_LINE(188)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_2.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(189)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml"),HX_CSTRING("assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_3_xml"));
			HX_STACK_LINE(190)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_3.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(191)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml"),HX_CSTRING("assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_4_xml"));
			HX_STACK_LINE(192)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_4.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(193)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml"),HX_CSTRING("assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_5_xml"));
			HX_STACK_LINE(194)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_5.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(195)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml"),HX_CSTRING("assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_6_xml"));
			HX_STACK_LINE(196)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_6.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(197)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml"),HX_CSTRING("assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_7_xml"));
			HX_STACK_LINE(198)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_7.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(199)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml"),HX_CSTRING("assets_xml_world1_lvl1_fg_l1_lvl1_fg_l1_8_xml"));
			HX_STACK_LINE(200)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l1/lvl1_fg_l1_8.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(201)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/empty.md"),HX_CSTRING("assets_xml_world1_lvl1_fg_l2_empty_md"));
			HX_STACK_LINE(202)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl1/fg/l2/empty.md"),HX_CSTRING("text"));
			HX_STACK_LINE(203)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/xml/world1/lvl2/bg.xml"),HX_CSTRING("assets_xml_world1_lvl2_bg_xml"));
			HX_STACK_LINE(204)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/xml/world1/lvl2/bg.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(207)
			::nme::installer::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

::native::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","nme/installer/Assets.hx",214);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(216)
		::nme::installer::Assets_obj::initialize();
		HX_STACK_LINE(218)
		if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("image")))))){
			HX_STACK_LINE(218)
			if (((bool(useCache) && bool(::nme::installer::Assets_obj::cachedBitmapData->exists(id))))){
				HX_STACK_LINE(220)
				return ::nme::installer::Assets_obj::cachedBitmapData->get(id);
			}
			else{
				HX_STACK_LINE(226)
				::native::display::BitmapData data = ::native::display::BitmapData_obj::load(::nme::installer::Assets_obj::resourceNames->get(id),null());		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(228)
				if ((useCache)){
					HX_STACK_LINE(228)
					::nme::installer::Assets_obj::cachedBitmapData->set(id,data);
				}
				HX_STACK_LINE(234)
				return data;
			}
		}
		else{
			HX_STACK_LINE(238)
			if (((id.indexOf(HX_CSTRING(":"),null()) > (int)-1))){
				HX_STACK_LINE(240)
				::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
				HX_STACK_LINE(241)
				::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
				HX_STACK_LINE(243)
				if ((::nme::installer::Assets_obj::libraryTypes->exists(libraryName))){
				}
				else{
					HX_STACK_LINE(277)
					::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),279,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
				}
			}
			else{
				HX_STACK_LINE(283)
				::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),285,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
			}
		}
		HX_STACK_LINE(289)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::native::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","nme/installer/Assets.hx",294);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(296)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(298)
	if ((::nme::installer::Assets_obj::resourceNames->exists(id))){
		HX_STACK_LINE(298)
		return ::native::utils::ByteArray_obj::readFile(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(304)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),304,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBytes")));
		HX_STACK_LINE(306)
		return null();
	}
	HX_STACK_LINE(298)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::native::text::Font Assets_obj::getFont( ::String id){
	HX_STACK_PUSH("Assets::getFont","nme/installer/Assets.hx",313);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(315)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(317)
	if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("font")))))){
		HX_STACK_LINE(317)
		return ::native::text::Font_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(323)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),323,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getFont")));
		HX_STACK_LINE(325)
		return null();
	}
	HX_STACK_LINE(317)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::format::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_PUSH("Assets::getMovieClip","nme/installer/Assets.hx",332);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(334)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(336)
	::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(337)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(339)
	if ((::nme::installer::Assets_obj::libraryTypes->exists(libraryName))){
	}
	else{
		HX_STACK_LINE(373)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),375,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getMovieClip")));
	}
	HX_STACK_LINE(379)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::String Assets_obj::getResourceName( ::String id){
	HX_STACK_PUSH("Assets::getResourceName","nme/installer/Assets.hx",384);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(386)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(388)
	return ::nme::installer::Assets_obj::resourceNames->get(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getResourceName,return )

::native::media::Sound Assets_obj::getSound( ::String id){
	HX_STACK_PUSH("Assets::getSound","nme/installer/Assets.hx",393);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(395)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(397)
	if ((::nme::installer::Assets_obj::resourceTypes->exists(id))){
		HX_STACK_LINE(397)
		if (((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("sound")))){
			HX_STACK_LINE(399)
			return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),false);
		}
		else{
			HX_STACK_LINE(403)
			if (((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("music")))){
				HX_STACK_LINE(403)
				return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),true);
			}
		}
	}
	HX_STACK_LINE(411)
	::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),411,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getSound")));
	HX_STACK_LINE(413)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","nme/installer/Assets.hx",418);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(420)
	::native::utils::ByteArray bytes = ::nme::installer::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(422)
	if (((bytes == null()))){
		HX_STACK_LINE(422)
		return null();
	}
	else{
		HX_STACK_LINE(426)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(422)
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
