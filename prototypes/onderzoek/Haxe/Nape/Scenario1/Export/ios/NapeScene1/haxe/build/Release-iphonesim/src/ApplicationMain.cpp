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
		::nme::Lib_obj::setPackage(HX_CSTRING("toSpace"),HX_CSTRING("NapeScene1"),HX_CSTRING("com.gameproject.napescene1"),HX_CSTRING("1.0.0"));

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
		::nme::Lib_obj::create( Dynamic(new _Function_1_2()),(int)640,(int)480,(int)30,(int)16777215,(int((int((int((int((int((int((int(::nme::Lib_obj::HARDWARE) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int(::nme::Lib_obj::RESIZABLE))) | int((int)0))) | int((int)0)),HX_CSTRING("NapeScene1"),null());
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
	if (((inName == HX_CSTRING("assets/tennisbal.png")))){
		HX_STACK_LINE(137)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/tennisbal.png"),null());
	}
	HX_STACK_LINE(143)
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

