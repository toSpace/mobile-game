#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_util_ZNPArray2_Float
#include <zpp_nape/util/ZNPArray2_Float.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPArray2_Float_obj::__construct(int width,int height)
{
HX_STACK_PUSH("ZNPArray2_Float::new","zpp_nape/util/Array2.hx",175);
{
	HX_STACK_LINE(177)
	this->width = (int)0;
	HX_STACK_LINE(176)
	this->list = null();
	HX_STACK_LINE(183)
	this->width = width;
	HX_STACK_LINE(188)
	this->list = Array_obj< Float >::__new();
}
;
	return null();
}

ZNPArray2_Float_obj::~ZNPArray2_Float_obj() { }

Dynamic ZNPArray2_Float_obj::__CreateEmpty() { return  new ZNPArray2_Float_obj; }
hx::ObjectPtr< ZNPArray2_Float_obj > ZNPArray2_Float_obj::__new(int width,int height)
{  hx::ObjectPtr< ZNPArray2_Float_obj > result = new ZNPArray2_Float_obj();
	result->__construct(width,height);
	return result;}

Dynamic ZNPArray2_Float_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPArray2_Float_obj > result = new ZNPArray2_Float_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float ZNPArray2_Float_obj::set( int x,int y,Float obj){
	HX_STACK_PUSH("ZNPArray2_Float::set","zpp_nape/util/Array2.hx",222);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(222)
	return this->list[((y * this->width) + x)] = obj;
}


HX_DEFINE_DYNAMIC_FUNC3(ZNPArray2_Float_obj,set,return )

Float ZNPArray2_Float_obj::get( int x,int y){
	HX_STACK_PUSH("ZNPArray2_Float::get","zpp_nape/util/Array2.hx",209);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(209)
	return this->list->__get(((y * this->width) + x));
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPArray2_Float_obj,get,return )

Void ZNPArray2_Float_obj::resize( int width,int height,Float def){
{
		HX_STACK_PUSH("ZNPArray2_Float::resize","zpp_nape/util/Array2.hx",191);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(def,"def");
		HX_STACK_LINE(200)
		this->width = width;
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (width * height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(203)
			while(((_g1 < _g))){
				HX_STACK_LINE(203)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(204)
				this->list[i] = def;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZNPArray2_Float_obj,resize,(void))


ZNPArray2_Float_obj::ZNPArray2_Float_obj()
{
}

void ZNPArray2_Float_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPArray2_Float);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void ZNPArray2_Float_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic ZNPArray2_Float_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPArray2_Float_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPArray2_Float_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPArray2_Float_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPArray2_Float_obj::__mClass,"__mClass");
};

Class ZNPArray2_Float_obj::__mClass;

void ZNPArray2_Float_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPArray2_Float"), hx::TCanCast< ZNPArray2_Float_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPArray2_Float_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
