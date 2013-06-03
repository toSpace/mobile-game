#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleEvent
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimpleEvent_obj::__construct()
{
HX_STACK_PUSH("ZPP_SimpleEvent::new","zpp_nape/geom/Simple.hx",383);
{
	HX_STACK_LINE(403)
	this->next = null();
	HX_STACK_LINE(388)
	this->node = null();
	HX_STACK_LINE(387)
	this->segment2 = null();
	HX_STACK_LINE(386)
	this->segment = null();
	HX_STACK_LINE(385)
	this->vertex = null();
	HX_STACK_LINE(384)
	this->type = (int)0;
}
;
	return null();
}

ZPP_SimpleEvent_obj::~ZPP_SimpleEvent_obj() { }

Dynamic ZPP_SimpleEvent_obj::__CreateEmpty() { return  new ZPP_SimpleEvent_obj; }
hx::ObjectPtr< ZPP_SimpleEvent_obj > ZPP_SimpleEvent_obj::__new()
{  hx::ObjectPtr< ZPP_SimpleEvent_obj > result = new ZPP_SimpleEvent_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SimpleEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimpleEvent_obj > result = new ZPP_SimpleEvent_obj();
	result->__construct();
	return result;}

Void ZPP_SimpleEvent_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_SimpleEvent::alloc","zpp_nape/geom/Simple.hx",437);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleEvent_obj,alloc,(void))

Void ZPP_SimpleEvent_obj::free( ){
{
		HX_STACK_PUSH("ZPP_SimpleEvent::free","zpp_nape/geom/Simple.hx",430);
		HX_STACK_THIS(this);
		HX_STACK_LINE(431)
		this->vertex = null();
		HX_STACK_LINE(432)
		this->segment = this->segment2 = null();
		HX_STACK_LINE(433)
		this->node = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleEvent_obj,free,(void))

Void ZPP_SimpleEvent_obj::swap_nodes( ::zpp_nape::geom::ZPP_SimpleEvent a,::zpp_nape::geom::ZPP_SimpleEvent b){
{
		HX_STACK_PUSH("ZPP_SimpleEvent::swap_nodes","zpp_nape/geom/Simple.hx",389);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(390)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t = a->node;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(391)
		a->node = b->node;
		HX_STACK_LINE(392)
		b->node = t;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleEvent_obj,swap_nodes,(void))

bool ZPP_SimpleEvent_obj::less_xy( ::zpp_nape::geom::ZPP_SimpleEvent a,::zpp_nape::geom::ZPP_SimpleEvent b){
	HX_STACK_PUSH("ZPP_SimpleEvent::less_xy","zpp_nape/geom/Simple.hx",394);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(394)
	if (((a->vertex->x < b->vertex->x))){
		HX_STACK_LINE(395)
		return true;
	}
	else{
		HX_STACK_LINE(396)
		if (((a->vertex->x > b->vertex->x))){
			HX_STACK_LINE(396)
			return false;
		}
		else{
			HX_STACK_LINE(397)
			if (((a->vertex->y < b->vertex->y))){
				HX_STACK_LINE(398)
				return true;
			}
			else{
				HX_STACK_LINE(399)
				if (((a->vertex->y > b->vertex->y))){
					HX_STACK_LINE(399)
					return false;
				}
				else{
					HX_STACK_LINE(400)
					return (a->type < b->type);
				}
			}
		}
	}
	HX_STACK_LINE(394)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleEvent_obj,less_xy,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_SimpleEvent_obj::zpp_pool;

::zpp_nape::geom::ZPP_SimpleEvent ZPP_SimpleEvent_obj::get( ::zpp_nape::geom::ZPP_SimpleVert v){
	HX_STACK_PUSH("ZPP_SimpleEvent::get","zpp_nape/geom/Simple.hx",440);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(441)
	::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(442)
	{
		HX_STACK_LINE(443)
		if (((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool == null()))){
			HX_STACK_LINE(443)
			ret = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();
		}
		else{
			HX_STACK_LINE(450)
			ret = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
			HX_STACK_LINE(451)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
			HX_STACK_LINE(452)
			ret->next = null();
		}
		HX_STACK_LINE(457)
		Dynamic();
	}
	HX_STACK_LINE(459)
	ret->vertex = v;
	HX_STACK_LINE(460)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimpleEvent_obj,get,return )


ZPP_SimpleEvent_obj::ZPP_SimpleEvent_obj()
{
}

void ZPP_SimpleEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimpleEvent);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(segment2,"segment2");
	HX_MARK_MEMBER_NAME(segment,"segment");
	HX_MARK_MEMBER_NAME(vertex,"vertex");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void ZPP_SimpleEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(segment2,"segment2");
	HX_VISIT_MEMBER_NAME(segment,"segment");
	HX_VISIT_MEMBER_NAME(vertex,"vertex");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic ZPP_SimpleEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { return vertex; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"less_xy") ) { return less_xy_dyn(); }
		if (HX_FIELD_EQ(inName,"segment") ) { return segment; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"segment2") ) { return segment2; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"swap_nodes") ) { return swap_nodes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SimpleEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vertex") ) { vertex=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"segment") ) { segment=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"segment2") ) { segment2=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SimpleEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("node"));
	outFields->push(HX_CSTRING("segment2"));
	outFields->push(HX_CSTRING("segment"));
	outFields->push(HX_CSTRING("vertex"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("swap_nodes"),
	HX_CSTRING("less_xy"),
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("next"),
	HX_CSTRING("node"),
	HX_CSTRING("segment2"),
	HX_CSTRING("segment"),
	HX_CSTRING("vertex"),
	HX_CSTRING("type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimpleEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SimpleEvent_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimpleEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SimpleEvent_obj::zpp_pool,"zpp_pool");
};

Class ZPP_SimpleEvent_obj::__mClass;

void ZPP_SimpleEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_SimpleEvent"), hx::TCanCast< ZPP_SimpleEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_SimpleEvent_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
