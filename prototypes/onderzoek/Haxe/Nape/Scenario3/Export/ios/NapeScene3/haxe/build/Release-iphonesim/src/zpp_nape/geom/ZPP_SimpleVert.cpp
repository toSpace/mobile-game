#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimpleVert_obj::__construct()
{
HX_STACK_PUSH("ZPP_SimpleVert::new","zpp_nape/geom/Simple.hx",174);
{
	HX_STACK_LINE(205)
	this->node = null();
	HX_STACK_LINE(180)
	this->next = null();
	HX_STACK_LINE(179)
	this->id = (int)0;
	HX_STACK_LINE(178)
	this->links = null();
	HX_STACK_LINE(177)
	this->y = 0.0;
	HX_STACK_LINE(176)
	this->x = 0.0;
	HX_STACK_LINE(175)
	this->forced = false;
	HX_STACK_LINE(217)
	this->id = ::zpp_nape::ZPP_ID_obj::ZPP_SimpleVert();
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(219)
		if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
			HX_STACK_LINE(219)
			this->links = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
		}
		else{
			HX_STACK_LINE(226)
			this->links = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(227)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = this->links->next;
			HX_STACK_LINE(228)
			this->links->next = null();
		}
		HX_STACK_LINE(233)
		Dynamic();
	}
	HX_STACK_LINE(235)
	this->links->lt = ::zpp_nape::geom::ZPP_SimpleVert_obj::less_xy_dyn();
}
;
	return null();
}

ZPP_SimpleVert_obj::~ZPP_SimpleVert_obj() { }

Dynamic ZPP_SimpleVert_obj::__CreateEmpty() { return  new ZPP_SimpleVert_obj; }
hx::ObjectPtr< ZPP_SimpleVert_obj > ZPP_SimpleVert_obj::__new()
{  hx::ObjectPtr< ZPP_SimpleVert_obj > result = new ZPP_SimpleVert_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SimpleVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimpleVert_obj > result = new ZPP_SimpleVert_obj();
	result->__construct();
	return result;}

Void ZPP_SimpleVert_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_SimpleVert::alloc","zpp_nape/geom/Simple.hx",215);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleVert_obj,alloc,(void))

Void ZPP_SimpleVert_obj::free( ){
{
		HX_STACK_PUSH("ZPP_SimpleVert::free","zpp_nape/geom/Simple.hx",208);
		HX_STACK_THIS(this);
		HX_STACK_LINE(209)
		this->links->clear();
		HX_STACK_LINE(210)
		this->node = null();
		HX_STACK_LINE(211)
		this->forced = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleVert_obj,free,(void))

::zpp_nape::geom::ZPP_SimpleVert ZPP_SimpleVert_obj::zpp_pool;

bool ZPP_SimpleVert_obj::less_xy( ::zpp_nape::geom::ZPP_SimpleVert p,::zpp_nape::geom::ZPP_SimpleVert q){
	HX_STACK_PUSH("ZPP_SimpleVert::less_xy","zpp_nape/geom/Simple.hx",237);
	HX_STACK_ARG(p,"p");
	HX_STACK_ARG(q,"q");
	HX_STACK_LINE(237)
	return (bool((p->y < q->y)) || bool((bool((p->y == q->y)) && bool((p->x < q->x)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleVert_obj,less_xy,return )

Void ZPP_SimpleVert_obj::swap_nodes( ::zpp_nape::geom::ZPP_SimpleVert p,::zpp_nape::geom::ZPP_SimpleVert q){
{
		HX_STACK_PUSH("ZPP_SimpleVert::swap_nodes","zpp_nape/geom/Simple.hx",240);
		HX_STACK_ARG(p,"p");
		HX_STACK_ARG(q,"q");
		HX_STACK_LINE(241)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t = p->node;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(242)
		p->node = q->node;
		HX_STACK_LINE(243)
		q->node = t;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleVert_obj,swap_nodes,(void))

::zpp_nape::geom::ZPP_SimpleVert ZPP_SimpleVert_obj::get( Float x,Float y){
	HX_STACK_PUSH("ZPP_SimpleVert::get","zpp_nape/geom/Simple.hx",246);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(247)
	::zpp_nape::geom::ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(249)
		if (((::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool == null()))){
			HX_STACK_LINE(249)
			ret = ::zpp_nape::geom::ZPP_SimpleVert_obj::__new();
		}
		else{
			HX_STACK_LINE(256)
			ret = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(257)
			::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = ret->next;
			HX_STACK_LINE(258)
			ret->next = null();
		}
		HX_STACK_LINE(263)
		Dynamic();
	}
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(266)
		ret->x = x;
		HX_STACK_LINE(267)
		ret->y = y;
		HX_STACK_LINE(268)
		{
		}
		HX_STACK_LINE(276)
		{
		}
	}
	HX_STACK_LINE(285)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleVert_obj,get,return )


ZPP_SimpleVert_obj::ZPP_SimpleVert_obj()
{
}

void ZPP_SimpleVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimpleVert);
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(links,"links");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(forced,"forced");
	HX_MARK_END_CLASS();
}

void ZPP_SimpleVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(links,"links");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(forced,"forced");
}

Dynamic ZPP_SimpleVert_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"links") ) { return links; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { return forced; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"less_xy") ) { return less_xy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"swap_nodes") ) { return swap_nodes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SimpleVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"links") ) { links=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { forced=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SimpleVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("node"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("links"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("forced"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("less_xy"),
	HX_CSTRING("swap_nodes"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("node"),
	HX_CSTRING("next"),
	HX_CSTRING("id"),
	HX_CSTRING("links"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("forced"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

Class ZPP_SimpleVert_obj::__mClass;

void ZPP_SimpleVert_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_SimpleVert"), hx::TCanCast< ZPP_SimpleVert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_SimpleVert_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
