#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_ZPP_GeomVert
#include <zpp_nape/util/ZNPArray2_ZPP_GeomVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPArray2_ZPP_GeomVert_obj::__construct(int width,int height)
{
HX_STACK_PUSH("ZNPArray2_ZPP_GeomVert::new","zpp_nape/util/Array2.hx",235);
{
	HX_STACK_LINE(237)
	this->width = (int)0;
	HX_STACK_LINE(236)
	this->list = null();
	HX_STACK_LINE(243)
	this->width = width;
	HX_STACK_LINE(248)
	this->list = Array_obj< ::zpp_nape::geom::ZPP_GeomVert >::__new();
}
;
	return null();
}

ZNPArray2_ZPP_GeomVert_obj::~ZNPArray2_ZPP_GeomVert_obj() { }

Dynamic ZNPArray2_ZPP_GeomVert_obj::__CreateEmpty() { return  new ZNPArray2_ZPP_GeomVert_obj; }
hx::ObjectPtr< ZNPArray2_ZPP_GeomVert_obj > ZNPArray2_ZPP_GeomVert_obj::__new(int width,int height)
{  hx::ObjectPtr< ZNPArray2_ZPP_GeomVert_obj > result = new ZNPArray2_ZPP_GeomVert_obj();
	result->__construct(width,height);
	return result;}

Dynamic ZNPArray2_ZPP_GeomVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPArray2_ZPP_GeomVert_obj > result = new ZNPArray2_ZPP_GeomVert_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::zpp_nape::geom::ZPP_GeomVert ZNPArray2_ZPP_GeomVert_obj::set( int x,int y,::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_PUSH("ZNPArray2_ZPP_GeomVert::set","zpp_nape/util/Array2.hx",282);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(283)
	{
	}
	HX_STACK_LINE(291)
	return this->list[((y * this->width) + x)] = obj;
}


HX_DEFINE_DYNAMIC_FUNC3(ZNPArray2_ZPP_GeomVert_obj,set,return )

::zpp_nape::geom::ZPP_GeomVert ZNPArray2_ZPP_GeomVert_obj::get( int x,int y){
	HX_STACK_PUSH("ZNPArray2_ZPP_GeomVert::get","zpp_nape/util/Array2.hx",269);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(270)
	{
	}
	HX_STACK_LINE(278)
	return this->list->__get(((y * this->width) + x));
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPArray2_ZPP_GeomVert_obj,get,return )

Void ZNPArray2_ZPP_GeomVert_obj::resize( int width,int height,::zpp_nape::geom::ZPP_GeomVert def){
{
		HX_STACK_PUSH("ZNPArray2_ZPP_GeomVert::resize","zpp_nape/util/Array2.hx",251);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(def,"def");
		HX_STACK_LINE(260)
		this->width = width;
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (width * height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(263)
			while(((_g1 < _g))){
				HX_STACK_LINE(263)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(264)
				this->list[i] = def;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZNPArray2_ZPP_GeomVert_obj,resize,(void))


ZNPArray2_ZPP_GeomVert_obj::ZNPArray2_ZPP_GeomVert_obj()
{
}

void ZNPArray2_ZPP_GeomVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPArray2_ZPP_GeomVert);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void ZNPArray2_ZPP_GeomVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic ZNPArray2_ZPP_GeomVert_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPArray2_ZPP_GeomVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::zpp_nape::geom::ZPP_GeomVert > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPArray2_ZPP_GeomVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set"),
	HX_CSTRING("get"),
	HX_CSTRING("resize"),
	HX_CSTRING("width"),
	HX_CSTRING("list"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPArray2_ZPP_GeomVert_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPArray2_ZPP_GeomVert_obj::__mClass,"__mClass");
};

Class ZNPArray2_ZPP_GeomVert_obj::__mClass;

void ZNPArray2_ZPP_GeomVert_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPArray2_ZPP_GeomVert"), hx::TCanCast< ZNPArray2_ZPP_GeomVert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPArray2_ZPP_GeomVert_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
