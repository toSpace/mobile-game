#include <hxcpp.h>

#ifndef INCLUDED_nape_shape_ShapeType
#include <nape/shape/ShapeType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace shape{

Void ShapeType_obj::__construct()
{
HX_STACK_PUSH("ShapeType::new","nape/shape/ShapeType.hx",181);
{
	HX_STACK_LINE(181)
	if ((!(::zpp_nape::util::ZPP_Flags_obj::internal))){
		HX_STACK_LINE(183)
		hx::Throw (((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("ShapeType")) + HX_CSTRING(" derp!")));
	}
}
;
	return null();
}

ShapeType_obj::~ShapeType_obj() { }

Dynamic ShapeType_obj::__CreateEmpty() { return  new ShapeType_obj; }
hx::ObjectPtr< ShapeType_obj > ShapeType_obj::__new()
{  hx::ObjectPtr< ShapeType_obj > result = new ShapeType_obj();
	result->__construct();
	return result;}

Dynamic ShapeType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeType_obj > result = new ShapeType_obj();
	result->__construct();
	return result;}

::String ShapeType_obj::toString( ){
	HX_STACK_PUSH("ShapeType::toString","nape/shape/ShapeType.hx",189);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::shape::ShapeType Block( ){
			HX_STACK_PUSH("*::closure","nape/shape/ShapeType.hx",192);
			{
				HX_STACK_LINE(192)
				if (((::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE == null()))){
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE = ::nape::shape::ShapeType_obj::__new();
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(192)
				return ::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE;
			}
			return null();
		}
	};
	HX_STACK_LINE(189)
	if (((hx::ObjectPtr<OBJ_>(this) == _Function_1_1::Block()))){
		HX_STACK_LINE(192)
		return HX_CSTRING("CIRCLE");
	}
	else{
		struct _Function_2_1{
			inline static ::nape::shape::ShapeType Block( ){
				HX_STACK_PUSH("*::closure","nape/shape/ShapeType.hx",193);
				{
					HX_STACK_LINE(193)
					if (((::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON == null()))){
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON = ::nape::shape::ShapeType_obj::__new();
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(193)
					return ::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON;
				}
				return null();
			}
		};
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _Function_2_1::Block()))){
			HX_STACK_LINE(193)
			return HX_CSTRING("POLYGON");
		}
		else{
			HX_STACK_LINE(194)
			return HX_CSTRING("");
		}
	}
	HX_STACK_LINE(189)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShapeType_obj,toString,return )

::nape::shape::ShapeType ShapeType_obj::CIRCLE;

::nape::shape::ShapeType ShapeType_obj::get_CIRCLE( ){
	HX_STACK_PUSH("ShapeType::get_CIRCLE","nape/shape/ShapeType.hx",201);
	HX_STACK_LINE(202)
	if (((::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE == null()))){
		HX_STACK_LINE(203)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(204)
		::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE = ::nape::shape::ShapeType_obj::__new();
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(207)
	return ::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ShapeType_obj,get_CIRCLE,return )

::nape::shape::ShapeType ShapeType_obj::POLYGON;

::nape::shape::ShapeType ShapeType_obj::get_POLYGON( ){
	HX_STACK_PUSH("ShapeType::get_POLYGON","nape/shape/ShapeType.hx",214);
	HX_STACK_LINE(215)
	if (((::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON == null()))){
		HX_STACK_LINE(216)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(217)
		::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON = ::nape::shape::ShapeType_obj::__new();
		HX_STACK_LINE(218)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(220)
	return ::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ShapeType_obj,get_POLYGON,return )


ShapeType_obj::ShapeType_obj()
{
}

void ShapeType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeType);
	HX_MARK_END_CLASS();
}

void ShapeType_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ShapeType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"CIRCLE") ) { return inCallProp ? get_CIRCLE() : CIRCLE; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"POLYGON") ) { return inCallProp ? get_POLYGON() : POLYGON; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_CIRCLE") ) { return get_CIRCLE_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_POLYGON") ) { return get_POLYGON_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShapeType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"CIRCLE") ) { CIRCLE=inValue.Cast< ::nape::shape::ShapeType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"POLYGON") ) { POLYGON=inValue.Cast< ::nape::shape::ShapeType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CIRCLE"),
	HX_CSTRING("get_CIRCLE"),
	HX_CSTRING("POLYGON"),
	HX_CSTRING("get_POLYGON"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ShapeType_obj::CIRCLE,"CIRCLE");
	HX_MARK_MEMBER_NAME(ShapeType_obj::POLYGON,"POLYGON");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShapeType_obj::CIRCLE,"CIRCLE");
	HX_VISIT_MEMBER_NAME(ShapeType_obj::POLYGON,"POLYGON");
};

Class ShapeType_obj::__mClass;

void ShapeType_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.shape.ShapeType"), hx::TCanCast< ShapeType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShapeType_obj::__boot()
{
}

} // end namespace nape
} // end namespace shape
