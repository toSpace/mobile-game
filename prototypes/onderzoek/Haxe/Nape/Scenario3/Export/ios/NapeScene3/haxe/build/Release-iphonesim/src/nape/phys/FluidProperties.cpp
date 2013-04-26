#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace phys{

Void FluidProperties_obj::__construct(hx::Null< Float >  __o_density,hx::Null< Float >  __o_viscosity)
{
HX_STACK_PUSH("FluidProperties::new","nape/phys/FluidProperties.hx",177);
Float density = __o_density.Default(1);
Float viscosity = __o_viscosity.Default(1);
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(224)
		if (((::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool == null()))){
			HX_STACK_LINE(224)
			this->zpp_inner = ::zpp_nape::phys::ZPP_FluidProperties_obj::__new();
		}
		else{
			HX_STACK_LINE(231)
			this->zpp_inner = ::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool;
			HX_STACK_LINE(232)
			::zpp_nape::phys::ZPP_FluidProperties_obj::zpp_pool = this->zpp_inner->next;
			HX_STACK_LINE(233)
			this->zpp_inner->next = null();
		}
		HX_STACK_LINE(238)
		Dynamic();
	}
	HX_STACK_LINE(240)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(241)
		if (((density != (this->zpp_inner->density * (int)1000)))){
			HX_STACK_LINE(241)
			if (((density != density))){
				HX_STACK_LINE(241)
				hx::Throw (((HX_CSTRING("Error: FluidProperties::") + HX_CSTRING("density")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(241)
			{
			}
			HX_STACK_LINE(241)
			this->zpp_inner->density = (Float(density) / Float((int)1000));
			HX_STACK_LINE(241)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(241)
		(this->zpp_inner->density * (int)1000);
	}
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(242)
		if (((viscosity != this->zpp_inner->viscosity))){
			HX_STACK_LINE(242)
			if (((viscosity != viscosity))){
				HX_STACK_LINE(242)
				hx::Throw (((HX_CSTRING("Error: FluidProperties::") + HX_CSTRING("viscosity")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(242)
			if (((viscosity < (int)0))){
				HX_STACK_LINE(242)
				hx::Throw (((((HX_CSTRING("Error: FluidProperties::") + HX_CSTRING("viscosity")) + HX_CSTRING(" (")) + viscosity) + HX_CSTRING(") must be >= 0")));
			}
			HX_STACK_LINE(242)
			this->zpp_inner->viscosity = (Float(viscosity) / Float((int)1));
			HX_STACK_LINE(242)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(242)
		this->zpp_inner->viscosity;
	}
}
;
	return null();
}

FluidProperties_obj::~FluidProperties_obj() { }

Dynamic FluidProperties_obj::__CreateEmpty() { return  new FluidProperties_obj; }
hx::ObjectPtr< FluidProperties_obj > FluidProperties_obj::__new(hx::Null< Float >  __o_density,hx::Null< Float >  __o_viscosity)
{  hx::ObjectPtr< FluidProperties_obj > result = new FluidProperties_obj();
	result->__construct(__o_density,__o_viscosity);
	return result;}

Dynamic FluidProperties_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FluidProperties_obj > result = new FluidProperties_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String FluidProperties_obj::toString( ){
	HX_STACK_PUSH("FluidProperties::toString","nape/phys/FluidProperties.hx",344);
	HX_STACK_THIS(this);
	HX_STACK_LINE(344)
	return ((((((HX_CSTRING("{ density: ") + (this->zpp_inner->density * (int)1000)) + HX_CSTRING(" viscosity: ")) + this->zpp_inner->viscosity) + HX_CSTRING(" gravity: ")) + ::Std_obj::string(this->zpp_inner->wrap_gravity)) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,toString,return )

::nape::geom::Vec2 FluidProperties_obj::set_gravity( ::nape::geom::Vec2 gravity){
	HX_STACK_PUSH("FluidProperties::set_gravity","nape/phys/FluidProperties.hx",320);
	HX_STACK_THIS(this);
	HX_STACK_ARG(gravity,"gravity");
	HX_STACK_LINE(321)
	if (((gravity == null()))){
		HX_STACK_LINE(322)
		if (((this->zpp_inner->wrap_gravity != null()))){
			HX_STACK_LINE(324)
			this->zpp_inner->wrap_gravity->zpp_inner->_inuse = false;
			HX_STACK_LINE(325)
			{
				HX_STACK_LINE(325)
				::nape::geom::Vec2 _this = this->zpp_inner->wrap_gravity;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(325)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(325)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(325)
					if ((_this1->_immutable)){
						HX_STACK_LINE(325)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(325)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(325)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(325)
				if ((_this->zpp_inner->_inuse)){
					HX_STACK_LINE(325)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(325)
				::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(325)
				_this->zpp_inner->outer = null();
				HX_STACK_LINE(325)
				_this->zpp_inner = null();
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(325)
					{
					}
					HX_STACK_LINE(325)
					o->zpp_pool = null();
					HX_STACK_LINE(325)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(325)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(325)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(325)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(325)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(325)
					{
					}
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						if (((o->outer != null()))){
							HX_STACK_LINE(325)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(325)
							o->outer = null();
						}
						HX_STACK_LINE(325)
						o->_isimmutable = null();
						HX_STACK_LINE(325)
						o->_validate = null();
						HX_STACK_LINE(325)
						o->_invalidate = null();
					}
					HX_STACK_LINE(325)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(326)
			this->zpp_inner->wrap_gravity = null();
		}
	}
	else{
		HX_STACK_LINE(330)
		if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
			HX_STACK_LINE(332)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(335)
		if (((this->zpp_inner->wrap_gravity == null()))){
			HX_STACK_LINE(335)
			this->zpp_inner->getgravity();
		}
		HX_STACK_LINE(336)
		{
			HX_STACK_LINE(336)
			::nape::geom::Vec2 _this = this->zpp_inner->wrap_gravity;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(336)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(336)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(336)
			if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
				HX_STACK_LINE(336)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(336)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(336)
				if ((_this1->_immutable)){
					HX_STACK_LINE(336)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(336)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(336)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(336)
			if (((gravity == null()))){
				HX_STACK_LINE(336)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &gravity,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/phys/FluidProperties.hx",336);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &gravity){
								HX_STACK_PUSH("*::closure","nape/phys/FluidProperties.hx",336);
								{
									HX_STACK_LINE(336)
									if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
										HX_STACK_LINE(336)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(336)
									{
										HX_STACK_LINE(336)
										::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(336)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(336)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(336)
									return gravity->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &gravity){
								HX_STACK_PUSH("*::closure","nape/phys/FluidProperties.hx",336);
								{
									HX_STACK_LINE(336)
									if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
										HX_STACK_LINE(336)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(336)
									{
										HX_STACK_LINE(336)
										::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(336)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(336)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(336)
									return gravity->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(336)
						Float x = _Function_4_1::Block(gravity);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(gravity);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(336)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(336)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(336)
							if ((_this1->_immutable)){
								HX_STACK_LINE(336)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(336)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(336)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(336)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(336)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/phys/FluidProperties.hx",336);
								{
									HX_STACK_LINE(336)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(336)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(336)
									{
										HX_STACK_LINE(336)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(336)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(336)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(336)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/phys/FluidProperties.hx",336);
								{
									HX_STACK_LINE(336)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(336)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(336)
									{
										HX_STACK_LINE(336)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(336)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(336)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(336)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(336)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(336)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(336)
								{
								}
								HX_STACK_LINE(336)
								{
								}
							}
							HX_STACK_LINE(336)
							{
								HX_STACK_LINE(336)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(336)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(336)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(336)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(336)
			::nape::geom::Vec2 ret = _Function_3_1::Block(gravity,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(336)
			if ((gravity->zpp_inner->weak)){
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
						HX_STACK_LINE(336)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(336)
						if ((_this1->_immutable)){
							HX_STACK_LINE(336)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(336)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(336)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(336)
					if ((gravity->zpp_inner->_inuse)){
						HX_STACK_LINE(336)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(336)
					::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(336)
					gravity->zpp_inner->outer = null();
					HX_STACK_LINE(336)
					gravity->zpp_inner = null();
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(336)
						{
						}
						HX_STACK_LINE(336)
						o->zpp_pool = null();
						HX_STACK_LINE(336)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(336)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(336)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(336)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(336)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(336)
						{
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							if (((o->outer != null()))){
								HX_STACK_LINE(336)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(336)
								o->outer = null();
							}
							HX_STACK_LINE(336)
							o->_isimmutable = null();
							HX_STACK_LINE(336)
							o->_validate = null();
							HX_STACK_LINE(336)
							o->_invalidate = null();
						}
						HX_STACK_LINE(336)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(336)
				true;
			}
			else{
				HX_STACK_LINE(336)
				false;
			}
			HX_STACK_LINE(336)
			ret;
		}
	}
	HX_STACK_LINE(339)
	return this->zpp_inner->wrap_gravity;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidProperties_obj,set_gravity,return )

::nape::geom::Vec2 FluidProperties_obj::get_gravity( ){
	HX_STACK_PUSH("FluidProperties::get_gravity","nape/phys/FluidProperties.hx",317);
	HX_STACK_THIS(this);
	HX_STACK_LINE(317)
	return this->zpp_inner->wrap_gravity;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_gravity,return )

Float FluidProperties_obj::set_viscosity( Float viscosity){
	HX_STACK_PUSH("FluidProperties::set_viscosity","nape/phys/FluidProperties.hx",296);
	HX_STACK_THIS(this);
	HX_STACK_ARG(viscosity,"viscosity");
	HX_STACK_LINE(297)
	if (((viscosity != this->zpp_inner->viscosity))){
		HX_STACK_LINE(300)
		if (((viscosity != viscosity))){
			HX_STACK_LINE(300)
			hx::Throw (((HX_CSTRING("Error: FluidProperties::") + HX_CSTRING("viscosity")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(301)
		if (((viscosity < (int)0))){
			HX_STACK_LINE(301)
			hx::Throw (((((HX_CSTRING("Error: FluidProperties::") + HX_CSTRING("viscosity")) + HX_CSTRING(" (")) + viscosity) + HX_CSTRING(") must be >= 0")));
		}
		HX_STACK_LINE(303)
		this->zpp_inner->viscosity = (Float(viscosity) / Float((int)1));
		HX_STACK_LINE(304)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(307)
	return this->zpp_inner->viscosity;
}


HX_DEFINE_DYNAMIC_FUNC1(FluidProperties_obj,set_viscosity,return )

Float FluidProperties_obj::get_viscosity( ){
	HX_STACK_PUSH("FluidProperties::get_viscosity","nape/phys/FluidProperties.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_LINE(293)
	return this->zpp_inner->viscosity;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_viscosity,return )

Float FluidProperties_obj::set_density( Float density){
	HX_STACK_PUSH("FluidProperties::set_density","nape/phys/FluidProperties.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_ARG(density,"density");
	HX_STACK_LINE(272)
	if (((density != (this->zpp_inner->density * (int)1000)))){
		HX_STACK_LINE(275)
		if (((density != density))){
			HX_STACK_LINE(275)
			hx::Throw (((HX_CSTRING("Error: FluidProperties::") + HX_CSTRING("density")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(276)
		{
		}
		HX_STACK_LINE(278)
		this->zpp_inner->density = (Float(density) / Float((int)1000));
		HX_STACK_LINE(279)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(282)
	return (this->zpp_inner->density * (int)1000);
}


HX_DEFINE_DYNAMIC_FUNC1(FluidProperties_obj,set_density,return )

Float FluidProperties_obj::get_density( ){
	HX_STACK_PUSH("FluidProperties::get_density","nape/phys/FluidProperties.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_LINE(268)
	return (this->zpp_inner->density * (int)1000);
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_density,return )

::nape::phys::FluidProperties FluidProperties_obj::copy( ){
	HX_STACK_PUSH("FluidProperties::copy","nape/phys/FluidProperties.hx",254);
	HX_STACK_THIS(this);
	HX_STACK_LINE(255)
	::nape::phys::FluidProperties ret = ::nape::phys::FluidProperties_obj::__new((this->zpp_inner->density * (int)1000),this->zpp_inner->viscosity);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(256)
	if (((this->zpp_inner->userData != null()))){
		HX_STACK_LINE(256)
		ret->zpp_inner->userData = ::Reflect_obj::copy(this->zpp_inner->userData);
	}
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		::nape::geom::Vec2 gravity = this->zpp_inner->wrap_gravity;		HX_STACK_VAR(gravity,"gravity");
		HX_STACK_LINE(257)
		if (((gravity == null()))){
			HX_STACK_LINE(257)
			if (((ret->zpp_inner->wrap_gravity != null()))){
				HX_STACK_LINE(257)
				ret->zpp_inner->wrap_gravity->zpp_inner->_inuse = false;
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					::nape::geom::Vec2 _this = ret->zpp_inner->wrap_gravity;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(257)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(257)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(257)
						if ((_this1->_immutable)){
							HX_STACK_LINE(257)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(257)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(257)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(257)
					if ((_this->zpp_inner->_inuse)){
						HX_STACK_LINE(257)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(257)
					::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(257)
					_this->zpp_inner->outer = null();
					HX_STACK_LINE(257)
					_this->zpp_inner = null();
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(257)
						{
						}
						HX_STACK_LINE(257)
						o->zpp_pool = null();
						HX_STACK_LINE(257)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(257)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(257)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(257)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(257)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(257)
						{
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							if (((o->outer != null()))){
								HX_STACK_LINE(257)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(257)
								o->outer = null();
							}
							HX_STACK_LINE(257)
							o->_isimmutable = null();
							HX_STACK_LINE(257)
							o->_validate = null();
							HX_STACK_LINE(257)
							o->_invalidate = null();
						}
						HX_STACK_LINE(257)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(257)
				ret->zpp_inner->wrap_gravity = null();
			}
		}
		else{
			HX_STACK_LINE(257)
			if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
				HX_STACK_LINE(257)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(257)
			if (((ret->zpp_inner->wrap_gravity == null()))){
				HX_STACK_LINE(257)
				ret->zpp_inner->getgravity();
			}
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				::nape::geom::Vec2 _this = ret->zpp_inner->wrap_gravity;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(257)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(257)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(257)
				if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
					HX_STACK_LINE(257)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(257)
				{
					HX_STACK_LINE(257)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(257)
					if ((_this1->_immutable)){
						HX_STACK_LINE(257)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(257)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(257)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(257)
				if (((gravity == null()))){
					HX_STACK_LINE(257)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &gravity,::nape::geom::Vec2 &_this){
						HX_STACK_PUSH("*::closure","nape/phys/FluidProperties.hx",257);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &gravity){
									HX_STACK_PUSH("*::closure","nape/phys/FluidProperties.hx",257);
									{
										HX_STACK_LINE(257)
										if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
											HX_STACK_LINE(257)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(257)
										{
											HX_STACK_LINE(257)
											::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(257)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(257)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(257)
										return gravity->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &gravity){
									HX_STACK_PUSH("*::closure","nape/phys/FluidProperties.hx",257);
									{
										HX_STACK_LINE(257)
										if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
											HX_STACK_LINE(257)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(257)
										{
											HX_STACK_LINE(257)
											::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(257)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(257)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(257)
										return gravity->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(257)
							Float x = _Function_5_1::Block(gravity);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(gravity);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(257)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(257)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(257)
								if ((_this1->_immutable)){
									HX_STACK_LINE(257)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(257)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(257)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(257)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(257)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/phys/FluidProperties.hx",257);
									{
										HX_STACK_LINE(257)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(257)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(257)
										{
											HX_STACK_LINE(257)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(257)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(257)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(257)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/phys/FluidProperties.hx",257);
									{
										HX_STACK_LINE(257)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(257)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(257)
										{
											HX_STACK_LINE(257)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(257)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(257)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(257)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(257)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(257)
								{
									HX_STACK_LINE(257)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(257)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(257)
									{
									}
									HX_STACK_LINE(257)
									{
									}
								}
								HX_STACK_LINE(257)
								{
									HX_STACK_LINE(257)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(257)
									if (((_this1->_invalidate_dyn() != null()))){
										HX_STACK_LINE(257)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(257)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(257)
				::nape::geom::Vec2 ret1 = _Function_4_1::Block(gravity,_this);		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(257)
				if ((gravity->zpp_inner->weak)){
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						if (((bool((gravity != null())) && bool(gravity->zpp_disp)))){
							HX_STACK_LINE(257)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 _this1 = gravity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(257)
							if ((_this1->_immutable)){
								HX_STACK_LINE(257)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(257)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(257)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(257)
						if ((gravity->zpp_inner->_inuse)){
							HX_STACK_LINE(257)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(257)
						::zpp_nape::geom::ZPP_Vec2 inner = gravity->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(257)
						gravity->zpp_inner->outer = null();
						HX_STACK_LINE(257)
						gravity->zpp_inner = null();
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::nape::geom::Vec2 o = gravity;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(257)
							{
							}
							HX_STACK_LINE(257)
							o->zpp_pool = null();
							HX_STACK_LINE(257)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(257)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(257)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(257)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(257)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(257)
							{
							}
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								if (((o->outer != null()))){
									HX_STACK_LINE(257)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(257)
									o->outer = null();
								}
								HX_STACK_LINE(257)
								o->_isimmutable = null();
								HX_STACK_LINE(257)
								o->_validate = null();
								HX_STACK_LINE(257)
								o->_invalidate = null();
							}
							HX_STACK_LINE(257)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(257)
					true;
				}
				else{
					HX_STACK_LINE(257)
					false;
				}
				HX_STACK_LINE(257)
				ret1;
			}
		}
		HX_STACK_LINE(257)
		ret->zpp_inner->wrap_gravity;
	}
	HX_STACK_LINE(258)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,copy,return )

::nape::shape::ShapeList FluidProperties_obj::get_shapes( ){
	HX_STACK_PUSH("FluidProperties::get_shapes","nape/phys/FluidProperties.hx",210);
	HX_STACK_THIS(this);
	HX_STACK_LINE(211)
	if (((this->zpp_inner->wrap_shapes == null()))){
		HX_STACK_LINE(211)
		this->zpp_inner->wrap_shapes = ::zpp_nape::util::ZPP_ShapeList_obj::get(this->zpp_inner->shapes,true);
	}
	HX_STACK_LINE(212)
	return this->zpp_inner->wrap_shapes;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_shapes,return )

Dynamic FluidProperties_obj::get_userData( ){
	HX_STACK_PUSH("FluidProperties::get_userData","nape/phys/FluidProperties.hx",195);
	HX_STACK_THIS(this);
	HX_STACK_LINE(196)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/FluidProperties.hx",197);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(196)
		this->zpp_inner->userData = _Function_2_1::Block();
	}
	HX_STACK_LINE(199)
	return this->zpp_inner->userData;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidProperties_obj,get_userData,return )


FluidProperties_obj::FluidProperties_obj()
{
}

void FluidProperties_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FluidProperties);
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(viscosity,"viscosity");
	HX_MARK_MEMBER_NAME(density,"density");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void FluidProperties_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(viscosity,"viscosity");
	HX_VISIT_MEMBER_NAME(density,"density");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic FluidProperties_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return inCallProp ? get_shapes() : shapes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return inCallProp ? get_gravity() : gravity; }
		if (HX_FIELD_EQ(inName,"density") ) { return inCallProp ? get_density() : density; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return inCallProp ? get_userData() : userData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viscosity") ) { return inCallProp ? get_viscosity() : viscosity; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_shapes") ) { return get_shapes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravity") ) { return get_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_density") ) { return set_density_dyn(); }
		if (HX_FIELD_EQ(inName,"get_density") ) { return get_density_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_viscosity") ) { return set_viscosity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_viscosity") ) { return get_viscosity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FluidProperties_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { if (inCallProp) return set_gravity(inValue);gravity=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"density") ) { if (inCallProp) return set_density(inValue);density=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viscosity") ) { if (inCallProp) return set_viscosity(inValue);viscosity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::phys::ZPP_FluidProperties >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FluidProperties_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("viscosity"));
	outFields->push(HX_CSTRING("density"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("set_gravity"),
	HX_CSTRING("get_gravity"),
	HX_CSTRING("gravity"),
	HX_CSTRING("set_viscosity"),
	HX_CSTRING("get_viscosity"),
	HX_CSTRING("viscosity"),
	HX_CSTRING("set_density"),
	HX_CSTRING("get_density"),
	HX_CSTRING("density"),
	HX_CSTRING("copy"),
	HX_CSTRING("get_shapes"),
	HX_CSTRING("shapes"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("userData"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FluidProperties_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FluidProperties_obj::__mClass,"__mClass");
};

Class FluidProperties_obj::__mClass;

void FluidProperties_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.FluidProperties"), hx::TCanCast< FluidProperties_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FluidProperties_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
