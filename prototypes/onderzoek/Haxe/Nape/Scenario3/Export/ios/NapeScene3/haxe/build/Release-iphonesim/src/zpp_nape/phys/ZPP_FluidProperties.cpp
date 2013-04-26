#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_FluidProperties
#include <nape/phys/FluidProperties.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_FluidProperties_obj::__construct()
{
HX_STACK_PUSH("ZPP_FluidProperties::new","zpp_nape/phys/FluidProperties.hx",174);
{
	HX_STACK_LINE(303)
	this->wrap_gravity = null();
	HX_STACK_LINE(302)
	this->gravityy = 0.0;
	HX_STACK_LINE(301)
	this->gravityx = 0.0;
	HX_STACK_LINE(300)
	this->density = 0.0;
	HX_STACK_LINE(299)
	this->viscosity = 0.0;
	HX_STACK_LINE(235)
	this->wrap_shapes = null();
	HX_STACK_LINE(234)
	this->shapes = null();
	HX_STACK_LINE(201)
	this->outer = null();
	HX_STACK_LINE(200)
	this->userData = null();
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(275)
	this->shapes = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();
	HX_STACK_LINE(276)
	this->density = this->viscosity = (int)1;
	HX_STACK_LINE(277)
	this->wrap_gravity = null();
	HX_STACK_LINE(278)
	{
		HX_STACK_LINE(279)
		this->gravityx = (int)0;
		HX_STACK_LINE(280)
		this->gravityy = (int)0;
		HX_STACK_LINE(281)
		{
		}
		HX_STACK_LINE(289)
		{
		}
	}
}
;
	return null();
}

ZPP_FluidProperties_obj::~ZPP_FluidProperties_obj() { }

Dynamic ZPP_FluidProperties_obj::__CreateEmpty() { return  new ZPP_FluidProperties_obj; }
hx::ObjectPtr< ZPP_FluidProperties_obj > ZPP_FluidProperties_obj::__new()
{  hx::ObjectPtr< ZPP_FluidProperties_obj > result = new ZPP_FluidProperties_obj();
	result->__construct();
	return result;}

Dynamic ZPP_FluidProperties_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_FluidProperties_obj > result = new ZPP_FluidProperties_obj();
	result->__construct();
	return result;}

Void ZPP_FluidProperties_obj::invalidate( ){
{
		HX_STACK_PUSH("ZPP_FluidProperties::invalidate","zpp_nape/phys/FluidProperties.hx",355);
		HX_STACK_THIS(this);
		HX_STACK_LINE(357)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(358)
		while(((cx_ite != null()))){
			HX_STACK_LINE(359)
			::zpp_nape::shape::ZPP_Shape shape = cx_ite->elt;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(360)
			shape->invalidate_fluidprops();
			HX_STACK_LINE(361)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,invalidate,(void))

Void ZPP_FluidProperties_obj::getgravity( ){
{
		HX_STACK_PUSH("ZPP_FluidProperties::getgravity","zpp_nape/phys/FluidProperties.hx",349);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::phys::ZPP_FluidProperties_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/FluidProperties.hx",350);
				{
					HX_STACK_LINE(350)
					Float x = __this->gravityx;		HX_STACK_VAR(x,"x");
					Float y = __this->gravityy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(350)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(350)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(350)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(350)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(350)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(350)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(350)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(350)
						ret->zpp_pool = null();
						HX_STACK_LINE(350)
						ret->zpp_disp = false;
						HX_STACK_LINE(350)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(350)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(350)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/FluidProperties.hx",350);
								{
									HX_STACK_LINE(350)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(350)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(350)
									{
										HX_STACK_LINE(350)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(350)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(350)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(350)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(350)
											ret1->next = null();
										}
										HX_STACK_LINE(350)
										ret1->weak = false;
									}
									HX_STACK_LINE(350)
									ret1->_immutable = immutable;
									HX_STACK_LINE(350)
									{
										HX_STACK_LINE(350)
										ret1->x = x;
										HX_STACK_LINE(350)
										ret1->y = y;
										HX_STACK_LINE(350)
										{
										}
										HX_STACK_LINE(350)
										{
										}
									}
									HX_STACK_LINE(350)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(350)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(350)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(350)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(350)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(350)
							if ((_this->_immutable)){
								HX_STACK_LINE(350)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(350)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(350)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(350)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(350)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/FluidProperties.hx",350);
								{
									HX_STACK_LINE(350)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(350)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(350)
									{
										HX_STACK_LINE(350)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(350)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(350)
											_this->_validate();
										}
									}
									HX_STACK_LINE(350)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/FluidProperties.hx",350);
								{
									HX_STACK_LINE(350)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(350)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(350)
									{
										HX_STACK_LINE(350)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(350)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(350)
											_this->_validate();
										}
									}
									HX_STACK_LINE(350)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(350)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(350)
							{
								HX_STACK_LINE(350)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(350)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(350)
								{
								}
								HX_STACK_LINE(350)
								{
								}
							}
							HX_STACK_LINE(350)
							{
								HX_STACK_LINE(350)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(350)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(350)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(350)
						ret;
					}
					HX_STACK_LINE(350)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(350)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(350)
		this->wrap_gravity = _Function_1_1::Block(this);
		HX_STACK_LINE(351)
		this->wrap_gravity->zpp_inner->_inuse = true;
		HX_STACK_LINE(352)
		this->wrap_gravity->zpp_inner->_invalidate = this->gravity_invalidate_dyn();
		HX_STACK_LINE(353)
		this->wrap_gravity->zpp_inner->_validate = this->gravity_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,getgravity,(void))

Void ZPP_FluidProperties_obj::gravity_validate( ){
{
		HX_STACK_PUSH("ZPP_FluidProperties::gravity_validate","zpp_nape/phys/FluidProperties.hx",327);
		HX_STACK_THIS(this);
		HX_STACK_LINE(329)
		this->wrap_gravity->zpp_inner->x = this->gravityx;
		HX_STACK_LINE(330)
		this->wrap_gravity->zpp_inner->y = this->gravityy;
		HX_STACK_LINE(331)
		{
		}
		HX_STACK_LINE(339)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,gravity_validate,(void))

Void ZPP_FluidProperties_obj::gravity_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_FluidProperties::gravity_invalidate","zpp_nape/phys/FluidProperties.hx",304);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(306)
			this->gravityx = x->x;
			HX_STACK_LINE(307)
			this->gravityy = x->y;
			HX_STACK_LINE(308)
			{
			}
			HX_STACK_LINE(316)
			{
			}
		}
		HX_STACK_LINE(325)
		this->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_FluidProperties_obj,gravity_invalidate,(void))

::zpp_nape::phys::ZPP_FluidProperties ZPP_FluidProperties_obj::copy( ){
	HX_STACK_PUSH("ZPP_FluidProperties::copy","zpp_nape/phys/FluidProperties.hx",251);
	HX_STACK_THIS(this);
	HX_STACK_LINE(252)
	::zpp_nape::phys::ZPP_FluidProperties ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(254)
		if (((::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool == null()))){
			HX_STACK_LINE(254)
			ret = ::zpp_nape::phys::ZPP_FluidProperties_obj::__new();
		}
		else{
			HX_STACK_LINE(261)
			ret = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;
			HX_STACK_LINE(262)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = ret->next;
			HX_STACK_LINE(263)
			ret->next = null();
		}
		HX_STACK_LINE(268)
		Dynamic();
	}
	HX_STACK_LINE(270)
	ret->viscosity = this->viscosity;
	HX_STACK_LINE(271)
	ret->density = this->density;
	HX_STACK_LINE(272)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,copy,return )

Void ZPP_FluidProperties_obj::remShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_PUSH("ZPP_FluidProperties::remShape","zpp_nape/phys/FluidProperties.hx",248);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(248)
		this->shapes->remove(shape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_FluidProperties_obj,remShape,(void))

Void ZPP_FluidProperties_obj::addShape( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_PUSH("ZPP_FluidProperties::addShape","zpp_nape/phys/FluidProperties.hx",243);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(243)
		this->shapes->add(shape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_FluidProperties_obj,addShape,(void))

Void ZPP_FluidProperties_obj::feature_cons( ){
{
		HX_STACK_PUSH("ZPP_FluidProperties::feature_cons","zpp_nape/phys/FluidProperties.hx",238);
		HX_STACK_THIS(this);
		HX_STACK_LINE(238)
		this->shapes = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,feature_cons,(void))

Void ZPP_FluidProperties_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_FluidProperties::alloc","zpp_nape/phys/FluidProperties.hx",233);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,alloc,(void))

Void ZPP_FluidProperties_obj::free( ){
{
		HX_STACK_PUSH("ZPP_FluidProperties::free","zpp_nape/phys/FluidProperties.hx",228);
		HX_STACK_THIS(this);
		HX_STACK_LINE(228)
		this->outer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,free,(void))

::nape::phys::FluidProperties ZPP_FluidProperties_obj::wrapper( ){
	HX_STACK_PUSH("ZPP_FluidProperties::wrapper","zpp_nape/phys/FluidProperties.hx",202);
	HX_STACK_THIS(this);
	HX_STACK_LINE(203)
	if (((this->outer == null()))){
		HX_STACK_LINE(204)
		this->outer = ::nape::phys::FluidProperties_obj::__new(null(),null());
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(206)
			::zpp_nape::phys::ZPP_FluidProperties o = this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(207)
			{
			}
			HX_STACK_LINE(215)
			o->outer = null();
			HX_STACK_LINE(216)
			o->next = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;
			HX_STACK_LINE(217)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = o;
		}
		HX_STACK_LINE(222)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(224)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidProperties_obj,wrapper,return )

::zpp_nape::phys::ZPP_FluidProperties ZPP_FluidProperties_obj::zpp_pool;


ZPP_FluidProperties_obj::ZPP_FluidProperties_obj()
{
}

void ZPP_FluidProperties_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_FluidProperties);
	HX_MARK_MEMBER_NAME(wrap_gravity,"wrap_gravity");
	HX_MARK_MEMBER_NAME(gravityy,"gravityy");
	HX_MARK_MEMBER_NAME(gravityx,"gravityx");
	HX_MARK_MEMBER_NAME(density,"density");
	HX_MARK_MEMBER_NAME(viscosity,"viscosity");
	HX_MARK_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_FluidProperties_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wrap_gravity,"wrap_gravity");
	HX_VISIT_MEMBER_NAME(gravityy,"gravityy");
	HX_VISIT_MEMBER_NAME(gravityx,"gravityx");
	HX_VISIT_MEMBER_NAME(density,"density");
	HX_VISIT_MEMBER_NAME(viscosity,"viscosity");
	HX_VISIT_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_FluidProperties_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return shapes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { return density; }
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"gravityy") ) { return gravityy; }
		if (HX_FIELD_EQ(inName,"gravityx") ) { return gravityx; }
		if (HX_FIELD_EQ(inName,"remShape") ) { return remShape_dyn(); }
		if (HX_FIELD_EQ(inName,"addShape") ) { return addShape_dyn(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viscosity") ) { return viscosity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"getgravity") ) { return getgravity_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { return wrap_shapes; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrap_gravity") ) { return wrap_gravity; }
		if (HX_FIELD_EQ(inName,"feature_cons") ) { return feature_cons_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gravity_validate") ) { return gravity_validate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"gravity_invalidate") ) { return gravity_invalidate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_FluidProperties_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::phys::ZPP_FluidProperties >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::phys::FluidProperties >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { density=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::phys::ZPP_FluidProperties >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityy") ) { gravityy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityx") ) { gravityx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viscosity") ) { viscosity=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { wrap_shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrap_gravity") ) { wrap_gravity=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_FluidProperties_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("wrap_gravity"));
	outFields->push(HX_CSTRING("gravityy"));
	outFields->push(HX_CSTRING("gravityx"));
	outFields->push(HX_CSTRING("density"));
	outFields->push(HX_CSTRING("viscosity"));
	outFields->push(HX_CSTRING("wrap_shapes"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("invalidate"),
	HX_CSTRING("getgravity"),
	HX_CSTRING("gravity_validate"),
	HX_CSTRING("gravity_invalidate"),
	HX_CSTRING("wrap_gravity"),
	HX_CSTRING("gravityy"),
	HX_CSTRING("gravityx"),
	HX_CSTRING("density"),
	HX_CSTRING("viscosity"),
	HX_CSTRING("copy"),
	HX_CSTRING("remShape"),
	HX_CSTRING("addShape"),
	HX_CSTRING("feature_cons"),
	HX_CSTRING("wrap_shapes"),
	HX_CSTRING("shapes"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("outer"),
	HX_CSTRING("userData"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_FluidProperties_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_FluidProperties_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_FluidProperties_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_FluidProperties_obj::zpp_pool,"zpp_pool");
};

Class ZPP_FluidProperties_obj::__mClass;

void ZPP_FluidProperties_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.phys.ZPP_FluidProperties"), hx::TCanCast< ZPP_FluidProperties_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_FluidProperties_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace phys
