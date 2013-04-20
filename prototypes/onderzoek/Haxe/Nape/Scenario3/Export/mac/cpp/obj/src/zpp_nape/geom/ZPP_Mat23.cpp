#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Mat23_obj::__construct()
{
HX_STACK_PUSH("ZPP_Mat23::new","zpp_nape/geom/Mat23.hx",174);
{
	HX_STACK_LINE(247)
	this->next = null();
	HX_STACK_LINE(206)
	this->_invalidate = null();
	HX_STACK_LINE(205)
	this->ty = 0.0;
	HX_STACK_LINE(204)
	this->tx = 0.0;
	HX_STACK_LINE(203)
	this->d = 0.0;
	HX_STACK_LINE(202)
	this->c = 0.0;
	HX_STACK_LINE(201)
	this->b = 0.0;
	HX_STACK_LINE(200)
	this->a = 0.0;
	HX_STACK_LINE(175)
	this->outer = null();
}
;
	return null();
}

ZPP_Mat23_obj::~ZPP_Mat23_obj() { }

Dynamic ZPP_Mat23_obj::__CreateEmpty() { return  new ZPP_Mat23_obj; }
hx::ObjectPtr< ZPP_Mat23_obj > ZPP_Mat23_obj::__new()
{  hx::ObjectPtr< ZPP_Mat23_obj > result = new ZPP_Mat23_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Mat23_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Mat23_obj > result = new ZPP_Mat23_obj();
	result->__construct();
	return result;}

Void ZPP_Mat23_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Mat23::alloc","zpp_nape/geom/Mat23.hx",277);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,alloc,(void))

Void ZPP_Mat23_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Mat23::free","zpp_nape/geom/Mat23.hx",274);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,free,(void))

Void ZPP_Mat23_obj::setas( Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		HX_STACK_PUSH("ZPP_Mat23::setas","zpp_nape/geom/Mat23.hx",219);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_ARG(c,"c");
		HX_STACK_ARG(d,"d");
		HX_STACK_ARG(tx,"tx");
		HX_STACK_ARG(ty,"ty");
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(221)
			this->tx = tx;
			HX_STACK_LINE(222)
			this->ty = ty;
			HX_STACK_LINE(223)
			{
			}
			HX_STACK_LINE(231)
			{
			}
		}
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(241)
			this->a = a;
			HX_STACK_LINE(242)
			this->b = b;
			HX_STACK_LINE(243)
			this->c = c;
			HX_STACK_LINE(244)
			this->d = d;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(ZPP_Mat23_obj,setas,(void))

Void ZPP_Mat23_obj::set( ::zpp_nape::geom::ZPP_Mat23 m){
{
		HX_STACK_PUSH("ZPP_Mat23::set","zpp_nape/geom/Mat23.hx",216);
		HX_STACK_THIS(this);
		HX_STACK_ARG(m,"m");
		HX_STACK_LINE(216)
		this->setas(m->a,m->b,m->c,m->d,m->tx,m->ty);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Mat23_obj,set,(void))

Void ZPP_Mat23_obj::invalidate( ){
{
		HX_STACK_PUSH("ZPP_Mat23::invalidate","zpp_nape/geom/Mat23.hx",209);
		HX_STACK_THIS(this);
		HX_STACK_LINE(209)
		if (((this->_invalidate_dyn() != null()))){
			HX_STACK_LINE(210)
			this->_invalidate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,invalidate,(void))

::nape::geom::Mat23 ZPP_Mat23_obj::wrapper( ){
	HX_STACK_PUSH("ZPP_Mat23::wrapper","zpp_nape/geom/Mat23.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_LINE(177)
	if (((this->outer == null()))){
		HX_STACK_LINE(178)
		this->outer = ::nape::geom::Mat23_obj::__new(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(180)
			::zpp_nape::geom::ZPP_Mat23 o = this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(181)
			{
			}
			HX_STACK_LINE(190)
			o->next = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;
			HX_STACK_LINE(191)
			::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool = o;
		}
		HX_STACK_LINE(196)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(198)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,wrapper,return )

::zpp_nape::geom::ZPP_Mat23 ZPP_Mat23_obj::zpp_pool;

::zpp_nape::geom::ZPP_Mat23 ZPP_Mat23_obj::get( ){
	HX_STACK_PUSH("ZPP_Mat23::get","zpp_nape/geom/Mat23.hx",279);
	HX_STACK_LINE(280)
	::zpp_nape::geom::ZPP_Mat23 ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(281)
	{
		HX_STACK_LINE(282)
		if (((::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool == null()))){
			HX_STACK_LINE(282)
			ret = ::zpp_nape::geom::ZPP_Mat23_obj::__new();
		}
		else{
			HX_STACK_LINE(289)
			ret = ::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool;
			HX_STACK_LINE(290)
			::zpp_nape::geom::ZPP_Mat23_obj::zpp_pool = ret->next;
			HX_STACK_LINE(291)
			ret->next = null();
		}
		HX_STACK_LINE(296)
		Dynamic();
	}
	HX_STACK_LINE(298)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,get,return )

::zpp_nape::geom::ZPP_Mat23 ZPP_Mat23_obj::identity( ){
	HX_STACK_PUSH("ZPP_Mat23::identity","zpp_nape/geom/Mat23.hx",300);
	HX_STACK_LINE(301)
	::zpp_nape::geom::ZPP_Mat23 ret = ::zpp_nape::geom::ZPP_Mat23_obj::get();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(302)
	ret->setas((int)1,(int)0,(int)0,(int)1,(int)0,(int)0);
	HX_STACK_LINE(303)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Mat23_obj,identity,return )


ZPP_Mat23_obj::ZPP_Mat23_obj()
{
}

void ZPP_Mat23_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Mat23);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_END_CLASS();
}

void ZPP_Mat23_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(outer,"outer");
}

Dynamic ZPP_Mat23_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"setas") ) { return setas_dyn(); }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return _invalidate; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Mat23_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_Mat23 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::Mat23 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_Mat23 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Mat23_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("ty"));
	outFields->push(HX_CSTRING("tx"));
	outFields->push(HX_CSTRING("d"));
	outFields->push(HX_CSTRING("c"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	HX_CSTRING("identity"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("next"),
	HX_CSTRING("setas"),
	HX_CSTRING("set"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("_invalidate"),
	HX_CSTRING("ty"),
	HX_CSTRING("tx"),
	HX_CSTRING("d"),
	HX_CSTRING("c"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Mat23_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Mat23_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Mat23_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Mat23_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Mat23_obj::__mClass;

void ZPP_Mat23_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Mat23"), hx::TCanCast< ZPP_Mat23_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Mat23_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
