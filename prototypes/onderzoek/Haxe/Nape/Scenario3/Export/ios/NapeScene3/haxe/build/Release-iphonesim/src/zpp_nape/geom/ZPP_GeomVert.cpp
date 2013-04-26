#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_GeomVert_obj::__construct()
{
HX_STACK_PUSH("ZPP_GeomVert::new","zpp_nape/geom/GeomPoly.hx",174);
{
	HX_STACK_LINE(180)
	this->forced = false;
	HX_STACK_LINE(179)
	this->wrap = null();
	HX_STACK_LINE(178)
	this->next = null();
	HX_STACK_LINE(177)
	this->prev = null();
	HX_STACK_LINE(176)
	this->y = 0.0;
	HX_STACK_LINE(175)
	this->x = 0.0;
}
;
	return null();
}

ZPP_GeomVert_obj::~ZPP_GeomVert_obj() { }

Dynamic ZPP_GeomVert_obj::__CreateEmpty() { return  new ZPP_GeomVert_obj; }
hx::ObjectPtr< ZPP_GeomVert_obj > ZPP_GeomVert_obj::__new()
{  hx::ObjectPtr< ZPP_GeomVert_obj > result = new ZPP_GeomVert_obj();
	result->__construct();
	return result;}

Dynamic ZPP_GeomVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_GeomVert_obj > result = new ZPP_GeomVert_obj();
	result->__construct();
	return result;}

Void ZPP_GeomVert_obj::getwrap( ){
{
		HX_STACK_PUSH("ZPP_GeomVert::getwrap","zpp_nape/geom/GeomPoly.hx",252);
		HX_STACK_THIS(this);
		HX_STACK_LINE(254)
		this->wrap->zpp_inner->x = this->x;
		HX_STACK_LINE(255)
		this->wrap->zpp_inner->y = this->y;
		HX_STACK_LINE(256)
		{
		}
		HX_STACK_LINE(264)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVert_obj,getwrap,(void))

Void ZPP_GeomVert_obj::modwrap( ::zpp_nape::geom::ZPP_Vec2 n){
{
		HX_STACK_PUSH("ZPP_GeomVert::modwrap","zpp_nape/geom/GeomPoly.hx",229);
		HX_STACK_THIS(this);
		HX_STACK_ARG(n,"n");
		HX_STACK_LINE(231)
		this->x = n->x;
		HX_STACK_LINE(232)
		this->y = n->y;
		HX_STACK_LINE(233)
		{
		}
		HX_STACK_LINE(241)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_GeomVert_obj,modwrap,(void))

::nape::geom::Vec2 ZPP_GeomVert_obj::wrapper( ){
	HX_STACK_PUSH("ZPP_GeomVert::wrapper","zpp_nape/geom/GeomPoly.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_LINE(220)
	if (((this->wrap == null()))){
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_GeomVert_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/GeomPoly.hx",221);
				{
					HX_STACK_LINE(221)
					Float x = __this->x;		HX_STACK_VAR(x,"x");
					Float y = __this->y;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(221)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(221)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(221)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(221)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(221)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(221)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(221)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(221)
						ret->zpp_pool = null();
						HX_STACK_LINE(221)
						ret->zpp_disp = false;
						HX_STACK_LINE(221)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(221)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(221)
					if (((ret->zpp_inner == null()))){
						struct _Function_4_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/GeomPoly.hx",221);
								{
									HX_STACK_LINE(221)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(221)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(221)
									{
										HX_STACK_LINE(221)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(221)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(221)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(221)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(221)
											ret1->next = null();
										}
										HX_STACK_LINE(221)
										ret1->weak = false;
									}
									HX_STACK_LINE(221)
									ret1->_immutable = immutable;
									HX_STACK_LINE(221)
									{
										HX_STACK_LINE(221)
										ret1->x = x;
										HX_STACK_LINE(221)
										ret1->y = y;
										HX_STACK_LINE(221)
										{
										}
										HX_STACK_LINE(221)
										{
										}
									}
									HX_STACK_LINE(221)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(221)
						ret->zpp_inner = _Function_4_1::Block(x,y);
						HX_STACK_LINE(221)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(221)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(221)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(221)
						{
							HX_STACK_LINE(221)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(221)
							if ((_this->_immutable)){
								HX_STACK_LINE(221)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(221)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(221)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(221)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(221)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/GeomPoly.hx",221);
								{
									HX_STACK_LINE(221)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(221)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(221)
									{
										HX_STACK_LINE(221)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(221)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(221)
											_this->_validate();
										}
									}
									HX_STACK_LINE(221)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/GeomPoly.hx",221);
								{
									HX_STACK_LINE(221)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(221)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(221)
									{
										HX_STACK_LINE(221)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(221)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(221)
											_this->_validate();
										}
									}
									HX_STACK_LINE(221)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(221)
						if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
							HX_STACK_LINE(221)
							{
								HX_STACK_LINE(221)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(221)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(221)
								{
								}
								HX_STACK_LINE(221)
								{
								}
							}
							HX_STACK_LINE(221)
							{
								HX_STACK_LINE(221)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(221)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(221)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(221)
						ret;
					}
					HX_STACK_LINE(221)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(221)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(221)
		this->wrap = _Function_2_1::Block(this);
		HX_STACK_LINE(222)
		this->wrap->zpp_inner->_inuse = true;
		HX_STACK_LINE(223)
		this->wrap->zpp_inner->_invalidate = this->modwrap_dyn();
		HX_STACK_LINE(224)
		this->wrap->zpp_inner->_validate = this->getwrap_dyn();
	}
	HX_STACK_LINE(226)
	return this->wrap;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVert_obj,wrapper,return )

Void ZPP_GeomVert_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_GeomVert::alloc","zpp_nape/geom/GeomPoly.hx",215);
		HX_STACK_THIS(this);
		HX_STACK_LINE(215)
		this->forced = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVert_obj,alloc,(void))

Void ZPP_GeomVert_obj::free( ){
{
		HX_STACK_PUSH("ZPP_GeomVert::free","zpp_nape/geom/GeomPoly.hx",206);
		HX_STACK_THIS(this);
		HX_STACK_LINE(207)
		if (((this->wrap != null()))){
			HX_STACK_LINE(208)
			this->wrap->zpp_inner->_inuse = false;
			HX_STACK_LINE(209)
			{
				HX_STACK_LINE(209)
				::nape::geom::Vec2 _this = this->wrap;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(209)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(209)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(209)
					if ((_this1->_immutable)){
						HX_STACK_LINE(209)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(209)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(209)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(209)
				if ((_this->zpp_inner->_inuse)){
					HX_STACK_LINE(209)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(209)
				::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(209)
				_this->zpp_inner->outer = null();
				HX_STACK_LINE(209)
				_this->zpp_inner = null();
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(209)
					{
					}
					HX_STACK_LINE(209)
					o->zpp_pool = null();
					HX_STACK_LINE(209)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(209)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(209)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(209)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(209)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(209)
					{
					}
					HX_STACK_LINE(209)
					{
						HX_STACK_LINE(209)
						if (((o->outer != null()))){
							HX_STACK_LINE(209)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(209)
							o->outer = null();
						}
						HX_STACK_LINE(209)
						o->_isimmutable = null();
						HX_STACK_LINE(209)
						o->_validate = null();
						HX_STACK_LINE(209)
						o->_invalidate = null();
					}
					HX_STACK_LINE(209)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(209)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(210)
			this->wrap = null();
		}
		HX_STACK_LINE(212)
		this->prev = this->next = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_GeomVert_obj,free,(void))

::zpp_nape::geom::ZPP_GeomVert ZPP_GeomVert_obj::zpp_pool;

::zpp_nape::geom::ZPP_GeomVert ZPP_GeomVert_obj::get( Float x,Float y){
	HX_STACK_PUSH("ZPP_GeomVert::get","zpp_nape/geom/GeomPoly.hx",275);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(276)
	::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(278)
		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
			HX_STACK_LINE(278)
			ret = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
		}
		else{
			HX_STACK_LINE(285)
			ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(286)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
			HX_STACK_LINE(287)
			ret->next = null();
		}
		HX_STACK_LINE(292)
		ret->forced = false;
	}
	HX_STACK_LINE(294)
	{
		HX_STACK_LINE(295)
		ret->x = x;
		HX_STACK_LINE(296)
		ret->y = y;
		HX_STACK_LINE(297)
		{
		}
		HX_STACK_LINE(305)
		{
		}
	}
	HX_STACK_LINE(314)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_GeomVert_obj,get,return )


ZPP_GeomVert_obj::ZPP_GeomVert_obj()
{
}

void ZPP_GeomVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_GeomVert);
	HX_MARK_MEMBER_NAME(forced,"forced");
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void ZPP_GeomVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(forced,"forced");
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic ZPP_GeomVert_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap") ) { return wrap; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { return forced; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getwrap") ) { return getwrap_dyn(); }
		if (HX_FIELD_EQ(inName,"modwrap") ) { return modwrap_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_GeomVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { wrap=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forced") ) { forced=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_GeomVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("forced"));
	outFields->push(HX_CSTRING("wrap"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("prev"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getwrap"),
	HX_CSTRING("modwrap"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("forced"),
	HX_CSTRING("wrap"),
	HX_CSTRING("next"),
	HX_CSTRING("prev"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_GeomVert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_GeomVert_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_GeomVert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_GeomVert_obj::zpp_pool,"zpp_pool");
};

Class ZPP_GeomVert_obj::__mClass;

void ZPP_GeomVert_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_GeomVert"), hx::TCanCast< ZPP_GeomVert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_GeomVert_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
