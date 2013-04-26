#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_GeomVertexIterator
#include <nape/geom/GeomVertexIterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void GeomVertexIterator_obj::__construct()
{
HX_STACK_PUSH("GeomVertexIterator::new","nape/geom/GeomVertexIterator.hx",188);
{
	HX_STACK_LINE(188)
	if ((!(::zpp_nape::geom::ZPP_GeomVertexIterator_obj::internal))){
		HX_STACK_LINE(190)
		hx::Throw (HX_CSTRING("Error: Cannot instantiate GeomVertexIterator"));
	}
}
;
	return null();
}

GeomVertexIterator_obj::~GeomVertexIterator_obj() { }

Dynamic GeomVertexIterator_obj::__CreateEmpty() { return  new GeomVertexIterator_obj; }
hx::ObjectPtr< GeomVertexIterator_obj > GeomVertexIterator_obj::__new()
{  hx::ObjectPtr< GeomVertexIterator_obj > result = new GeomVertexIterator_obj();
	result->__construct();
	return result;}

Dynamic GeomVertexIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeomVertexIterator_obj > result = new GeomVertexIterator_obj();
	result->__construct();
	return result;}

::nape::geom::Vec2 GeomVertexIterator_obj::next( ){
	HX_STACK_PUSH("GeomVertexIterator::next","nape/geom/GeomVertexIterator.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_LINE(239)
	if (((this->zpp_inner == null()))){
		HX_STACK_LINE(239)
		hx::Throw (HX_CSTRING("Error: Iterator has been disposed"));
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::geom::GeomVertexIterator_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/GeomVertexIterator.hx",243);
			{
				HX_STACK_LINE(243)
				::zpp_nape::geom::ZPP_GeomVert _this = __this->zpp_inner->ptr;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(243)
				if (((_this->wrap == null()))){
					struct _Function_3_1{
						inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_GeomVert &_this){
							HX_STACK_PUSH("*::closure","nape/geom/GeomVertexIterator.hx",243);
							{
								HX_STACK_LINE(243)
								Float x = _this->x;		HX_STACK_VAR(x,"x");
								Float y = _this->y;		HX_STACK_VAR(y,"y");
								bool weak = false;		HX_STACK_VAR(weak,"weak");
								HX_STACK_LINE(243)
								if (((bool((x != x)) || bool((y != y))))){
									HX_STACK_LINE(243)
									hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
								}
								HX_STACK_LINE(243)
								::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(243)
								if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
									HX_STACK_LINE(243)
									ret = ::nape::geom::Vec2_obj::__new(null(),null());
								}
								else{
									HX_STACK_LINE(243)
									ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(243)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
									HX_STACK_LINE(243)
									ret->zpp_pool = null();
									HX_STACK_LINE(243)
									ret->zpp_disp = false;
									HX_STACK_LINE(243)
									if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
										HX_STACK_LINE(243)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
									}
								}
								HX_STACK_LINE(243)
								if (((ret->zpp_inner == null()))){
									struct _Function_5_1{
										inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
											HX_STACK_PUSH("*::closure","nape/geom/GeomVertexIterator.hx",243);
											{
												HX_STACK_LINE(243)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(243)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(243)
												{
													HX_STACK_LINE(243)
													if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
														HX_STACK_LINE(243)
														ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
													}
													else{
														HX_STACK_LINE(243)
														ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
														HX_STACK_LINE(243)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(243)
														ret1->next = null();
													}
													HX_STACK_LINE(243)
													ret1->weak = false;
												}
												HX_STACK_LINE(243)
												ret1->_immutable = immutable;
												HX_STACK_LINE(243)
												{
													HX_STACK_LINE(243)
													ret1->x = x;
													HX_STACK_LINE(243)
													ret1->y = y;
													HX_STACK_LINE(243)
													{
													}
													HX_STACK_LINE(243)
													{
													}
												}
												HX_STACK_LINE(243)
												return ret1;
											}
											return null();
										}
									};
									HX_STACK_LINE(243)
									ret->zpp_inner = _Function_5_1::Block(x,y);
									HX_STACK_LINE(243)
									ret->zpp_inner->outer = ret;
								}
								else{
									HX_STACK_LINE(243)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(243)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(243)
									{
										HX_STACK_LINE(243)
										::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(243)
										if ((_this1->_immutable)){
											HX_STACK_LINE(243)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(243)
										if (((_this1->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(243)
											_this1->_isimmutable();
										}
									}
									HX_STACK_LINE(243)
									if (((bool((x != x)) || bool((y != y))))){
										HX_STACK_LINE(243)
										hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
									}
									struct _Function_5_1{
										inline static Float Block( ::nape::geom::Vec2 &ret){
											HX_STACK_PUSH("*::closure","nape/geom/GeomVertexIterator.hx",243);
											{
												HX_STACK_LINE(243)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(243)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(243)
												{
													HX_STACK_LINE(243)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(243)
													if (((_this1->_validate_dyn() != null()))){
														HX_STACK_LINE(243)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(243)
												return ret->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static Float Block( ::nape::geom::Vec2 &ret){
											HX_STACK_PUSH("*::closure","nape/geom/GeomVertexIterator.hx",243);
											{
												HX_STACK_LINE(243)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(243)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(243)
												{
													HX_STACK_LINE(243)
													::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(243)
													if (((_this1->_validate_dyn() != null()))){
														HX_STACK_LINE(243)
														_this1->_validate();
													}
												}
												HX_STACK_LINE(243)
												return ret->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(243)
									if ((!(((bool((_Function_5_1::Block(ret) == x)) && bool((_Function_5_2::Block(ret) == y))))))){
										HX_STACK_LINE(243)
										{
											HX_STACK_LINE(243)
											ret->zpp_inner->x = x;
											HX_STACK_LINE(243)
											ret->zpp_inner->y = y;
											HX_STACK_LINE(243)
											{
											}
											HX_STACK_LINE(243)
											{
											}
										}
										HX_STACK_LINE(243)
										{
											HX_STACK_LINE(243)
											::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(243)
											if (((_this1->_invalidate_dyn() != null()))){
												HX_STACK_LINE(243)
												_this1->_invalidate(_this1);
											}
										}
									}
									HX_STACK_LINE(243)
									ret;
								}
								HX_STACK_LINE(243)
								ret->zpp_inner->weak = weak;
								HX_STACK_LINE(243)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(243)
					_this->wrap = _Function_3_1::Block(_this);
					HX_STACK_LINE(243)
					_this->wrap->zpp_inner->_inuse = true;
					HX_STACK_LINE(243)
					_this->wrap->zpp_inner->_invalidate = _this->modwrap_dyn();
					HX_STACK_LINE(243)
					_this->wrap->zpp_inner->_validate = _this->getwrap_dyn();
				}
				HX_STACK_LINE(243)
				return _this->wrap;
			}
			return null();
		}
	};
	HX_STACK_LINE(243)
	::nape::geom::Vec2 ret = _Function_1_1::Block(this);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(244)
	this->zpp_inner->ptr = (  ((this->zpp_inner->forward)) ? ::zpp_nape::geom::ZPP_GeomVert(this->zpp_inner->ptr->next) : ::zpp_nape::geom::ZPP_GeomVert(this->zpp_inner->ptr->prev) );
	HX_STACK_LINE(245)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomVertexIterator_obj,next,return )

bool GeomVertexIterator_obj::hasNext( ){
	HX_STACK_PUSH("GeomVertexIterator::hasNext","nape/geom/GeomVertexIterator.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_LINE(202)
	if (((this->zpp_inner == null()))){
		HX_STACK_LINE(202)
		hx::Throw (HX_CSTRING("Error: Iterator has been disposed"));
	}
	HX_STACK_LINE(206)
	bool ret = (bool((this->zpp_inner->ptr != this->zpp_inner->start)) || bool(this->zpp_inner->first));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(207)
	this->zpp_inner->first = false;
	HX_STACK_LINE(208)
	if ((!(ret))){
		HX_STACK_LINE(210)
		::zpp_nape::geom::ZPP_GeomVertexIterator o = this->zpp_inner;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(211)
		{
		}
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			o->outer->zpp_inner = null();
			HX_STACK_LINE(219)
			o->ptr = o->start = null();
		}
		HX_STACK_LINE(220)
		o->next = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool;
		HX_STACK_LINE(221)
		::zpp_nape::geom::ZPP_GeomVertexIterator_obj::zpp_pool = o;
	}
	HX_STACK_LINE(227)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomVertexIterator_obj,hasNext,return )


GeomVertexIterator_obj::GeomVertexIterator_obj()
{
}

void GeomVertexIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeomVertexIterator);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void GeomVertexIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic GeomVertexIterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GeomVertexIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_GeomVertexIterator >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GeomVertexIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeomVertexIterator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeomVertexIterator_obj::__mClass,"__mClass");
};

Class GeomVertexIterator_obj::__mClass;

void GeomVertexIterator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.GeomVertexIterator"), hx::TCanCast< GeomVertexIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GeomVertexIterator_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
