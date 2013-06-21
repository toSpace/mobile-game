#include <hxcpp.h>

#ifndef INCLUDED_haxe_Public
#include <haxe/Public.h>
#endif
namespace haxe{


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Public_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Public_obj::__mClass,"__mClass");
};

Class Public_obj::__mClass;

void Public_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Public"), hx::TCanCast< Public_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Public_obj::__boot()
{
}

} // end namespace haxe
