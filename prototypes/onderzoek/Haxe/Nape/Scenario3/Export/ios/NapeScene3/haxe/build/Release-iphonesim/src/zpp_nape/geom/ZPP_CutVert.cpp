#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_CutVert_obj::__construct()
{
HX_STACK_PUSH("ZPP_CutVert::new","zpp_nape/geom/Cutter.hx",174);
{
	HX_STACK_LINE(208)
	this->used = false;
	HX_STACK_LINE(207)
	this->rank = (int)0;
	HX_STACK_LINE(206)
	this->parent = null();
	HX_STACK_LINE(205)
	this->positive = false;
	HX_STACK_LINE(204)
	this->value = 0.0;
	HX_STACK_LINE(203)
	this->vert = null();
	HX_STACK_LINE(202)
	this->posy = 0.0;
	HX_STACK_LINE(201)
	this->posx = 0.0;
	HX_STACK_LINE(200)
	this->next = null();
	HX_STACK_LINE(199)
	this->prev = null();
}
;
	return null();
}

ZPP_CutVert_obj::~ZPP_CutVert_obj() { }

Dynamic ZPP_CutVert_obj::__CreateEmpty() { return  new ZPP_CutVert_obj; }
hx::ObjectPtr< ZPP_CutVert_obj > ZPP_CutVert_obj::__new()
{  hx::ObjectPtr< ZPP_CutVert_obj > result = new ZPP_CutVert_obj();
	result->__construct();
	return result;}

Dynamic ZPP_CutVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CutVert_obj > result = new ZPP_CutVert_obj();
	result->__construct();
	return result;}

Void ZPP_CutVert_obj::free( ){
{
		HX_STACK_PUSH("ZPP_CutVert::free","zpp_nape/geom/Cutter.hx",215);
		HX_STACK_THIS(this);
		HX_STACK_LINE(216)
		this->vert = null();
		HX_STACK_LINE(217)
		this->parent = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CutVert_obj,free,(void))

Void ZPP_CutVert_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_CutVert::alloc","zpp_nape/geom/Cutter.hx",212);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CutVert_obj,alloc,(void))

::zpp_nape::geom::ZPP_CutVert ZPP_CutVert_obj::zpp_pool;

::zpp_nape::geom::ZPP_CutVert ZPP_CutVert_obj::path( ::zpp_nape::geom::ZPP_GeomVert poly){
	HX_STACK_PUSH("ZPP_CutVert::path","zpp_nape/geom/Cutter.hx",220);
	HX_STACK_ARG(poly,"poly");
	HX_STACK_LINE(221)
	::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(223)
		if (((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool == null()))){
			HX_STACK_LINE(223)
			ret = ::zpp_nape::geom::ZPP_CutVert_obj::__new();
		}
		else{
			HX_STACK_LINE(230)
			ret = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
			HX_STACK_LINE(231)
			::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
			HX_STACK_LINE(232)
			ret->next = null();
		}
		HX_STACK_LINE(237)
		Dynamic();
	}
	HX_STACK_LINE(239)
	ret->vert = poly;
	HX_STACK_LINE(240)
	ret->parent = ret;
	HX_STACK_LINE(241)
	ret->rank = (int)0;
	HX_STACK_LINE(242)
	ret->used = false;
	HX_STACK_LINE(243)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_CutVert_obj,path,return )


ZPP_CutVert_obj::ZPP_CutVert_obj()
{
}

void ZPP_CutVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CutVert);
	HX_MARK_MEMBER_NAME(used,"used");
	HX_MARK_MEMBER_NAME(rank,"rank");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(positive,"positive");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(vert,"vert");
	HX_MARK_MEMBER_NAME(posy,"posy");
	HX_MARK_MEMBER_NAME(posx,"posx");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_END_CLASS();
}

void ZPP_CutVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(used,"used");
	HX_VISIT_MEMBER_NAME(rank,"rank");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(positive,"positive");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(vert,"vert");
	HX_VISIT_MEMBER_NAME(posy,"posy");
	HX_VISIT_MEMBER_NAME(posx,"posx");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
}

Dynamic ZPP_CutVert_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"used") ) { return used; }
		if (HX_FIELD_EQ(inName,"rank") ) { return rank; }
		if (HX_FIELD_EQ(inName,"vert") ) { return vert; }
		if (HX_FIELD_EQ(inName,"posy") ) { return posy; }
		if (HX_FIELD_EQ(inName,"posx") ) { return posx; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"positive") ) { return positive; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CutVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"used") ) { used=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rank") ) { rank=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vert") ) { vert=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posy") ) { posy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posx") ) { posx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_CutVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::geom::ZPP_CutVert >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::geom::ZPP_CutVert >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_CutVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positive") ) { positive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_CutVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("used"));
	outFields->push(HX_CSTRING("rank"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("positive"));
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("vert"));
	outFields->push(HX_CSTRING("posy"));
	outFields->push(HX_CSTRING("posx"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("prev"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("path"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("used"),
	HX_CSTRING("rank"),
	HX_CSTRING("parent"),
	HX_CSTRING("positive"),
	HX_CSTRING("value"),
	HX_CSTRING("vert"),
	HX_CSTRING("posy"),
	HX_CSTRING("posx"),
	HX_CSTRING("next"),
	HX_CSTRING("prev"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CutVert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CutVert_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CutVert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CutVert_obj::zpp_pool,"zpp_pool");
};

Class ZPP_CutVert_obj::__mClass;

void ZPP_CutVert_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_CutVert"), hx::TCanCast< ZPP_CutVert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_CutVert_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
