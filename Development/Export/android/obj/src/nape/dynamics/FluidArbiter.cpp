#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace dynamics{

Void FluidArbiter_obj::__construct()
{
HX_STACK_PUSH("FluidArbiter::new","nape/dynamics/FluidArbiter.hx",316);
{
	HX_STACK_LINE(318)
	if ((!(::zpp_nape::dynamics::ZPP_Arbiter_obj::internal))){
		HX_STACK_LINE(318)
		hx::Throw (HX_CSTRING("Error: Cannot instantiate FluidArbiter derp!"));
	}
	HX_STACK_LINE(320)
	super::__construct();
}
;
	return null();
}

FluidArbiter_obj::~FluidArbiter_obj() { }

Dynamic FluidArbiter_obj::__CreateEmpty() { return  new FluidArbiter_obj; }
hx::ObjectPtr< FluidArbiter_obj > FluidArbiter_obj::__new()
{  hx::ObjectPtr< FluidArbiter_obj > result = new FluidArbiter_obj();
	result->__construct();
	return result;}

Dynamic FluidArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FluidArbiter_obj > result = new FluidArbiter_obj();
	result->__construct();
	return result;}

::nape::geom::Vec3 FluidArbiter_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("FluidArbiter::totalImpulse","nape/dynamics/FluidArbiter.hx",298);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(300)
		if ((!(this->zpp_inner->active))){
			HX_STACK_LINE(300)
			hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
		}
		struct _Function_1_1{
			inline static ::nape::phys::Body Block( ::nape::dynamics::FluidArbiter_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",303);
				{
					HX_STACK_LINE(303)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(303)
						hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(303)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b2->outer) : ::nape::phys::Body(__this->zpp_inner->b1->outer) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::nape::phys::Body Block( ::nape::dynamics::FluidArbiter_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",303);
				{
					HX_STACK_LINE(303)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(303)
						hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(303)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b1->outer) : ::nape::phys::Body(__this->zpp_inner->b2->outer) );
				}
				return null();
			}
		};
		HX_STACK_LINE(303)
		if (((bool((bool((body != null())) && bool((body != _Function_1_1::Block(this))))) && bool((body != _Function_1_2::Block(this)))))){
			HX_STACK_LINE(303)
			hx::Throw (HX_CSTRING("Error: Arbiter does not relate to body"));
		}
		HX_STACK_LINE(305)
		::nape::geom::Vec3 tmp = this->buoyancyImpulse(body);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		::nape::geom::Vec3 ret = this->dragImpulse(body);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(307)
		{
			HX_STACK_LINE(307)
			::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					if (((bool((_g != null())) && bool(_g->zpp_disp)))){
						HX_STACK_LINE(307)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(307)
					if ((_g->zpp_inner->immutable)){
						HX_STACK_LINE(307)
						hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec3 &_g){
							HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",307);
							{
								HX_STACK_LINE(307)
								if (((bool((_g != null())) && bool(_g->zpp_disp)))){
									HX_STACK_LINE(307)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(307)
								{
									HX_STACK_LINE(307)
									::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(307)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(307)
										_this->_validate();
									}
								}
								HX_STACK_LINE(307)
								return _g->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec3 &tmp){
							HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",307);
							{
								HX_STACK_LINE(307)
								if (((bool((tmp != null())) && bool(tmp->zpp_disp)))){
									HX_STACK_LINE(307)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(307)
								{
									HX_STACK_LINE(307)
									::zpp_nape::geom::ZPP_Vec3 _this = tmp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(307)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(307)
										_this->_validate();
									}
								}
								HX_STACK_LINE(307)
								return tmp->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(307)
					_g->zpp_inner->x = (_Function_4_1::Block(_g) + _Function_4_2::Block(tmp));
				}
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					if (((bool((_g != null())) && bool(_g->zpp_disp)))){
						HX_STACK_LINE(307)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(307)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(307)
							_this->_validate();
						}
					}
					HX_STACK_LINE(307)
					_g->zpp_inner->x;
				}
			}
		}
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(308)
			{
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					if (((bool((_g != null())) && bool(_g->zpp_disp)))){
						HX_STACK_LINE(308)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(308)
					if ((_g->zpp_inner->immutable)){
						HX_STACK_LINE(308)
						hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec3 &_g){
							HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",308);
							{
								HX_STACK_LINE(308)
								if (((bool((_g != null())) && bool(_g->zpp_disp)))){
									HX_STACK_LINE(308)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(308)
								{
									HX_STACK_LINE(308)
									::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(308)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(308)
										_this->_validate();
									}
								}
								HX_STACK_LINE(308)
								return _g->zpp_inner->y;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec3 &tmp){
							HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",308);
							{
								HX_STACK_LINE(308)
								if (((bool((tmp != null())) && bool(tmp->zpp_disp)))){
									HX_STACK_LINE(308)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(308)
								{
									HX_STACK_LINE(308)
									::zpp_nape::geom::ZPP_Vec3 _this = tmp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(308)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(308)
										_this->_validate();
									}
								}
								HX_STACK_LINE(308)
								return tmp->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(308)
					_g->zpp_inner->y = (_Function_4_1::Block(_g) + _Function_4_2::Block(tmp));
				}
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					if (((bool((_g != null())) && bool(_g->zpp_disp)))){
						HX_STACK_LINE(308)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(308)
					{
						HX_STACK_LINE(308)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(308)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(308)
							_this->_validate();
						}
					}
					HX_STACK_LINE(308)
					_g->zpp_inner->y;
				}
			}
		}
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					if (((bool((_g != null())) && bool(_g->zpp_disp)))){
						HX_STACK_LINE(309)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(309)
					if ((_g->zpp_inner->immutable)){
						HX_STACK_LINE(309)
						hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec3 &_g){
							HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",309);
							{
								HX_STACK_LINE(309)
								if (((bool((_g != null())) && bool(_g->zpp_disp)))){
									HX_STACK_LINE(309)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(309)
								{
									HX_STACK_LINE(309)
									::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(309)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(309)
										_this->_validate();
									}
								}
								HX_STACK_LINE(309)
								return _g->zpp_inner->z;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec3 &tmp){
							HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",309);
							{
								HX_STACK_LINE(309)
								if (((bool((tmp != null())) && bool(tmp->zpp_disp)))){
									HX_STACK_LINE(309)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(309)
								{
									HX_STACK_LINE(309)
									::zpp_nape::geom::ZPP_Vec3 _this = tmp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(309)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(309)
										_this->_validate();
									}
								}
								HX_STACK_LINE(309)
								return tmp->zpp_inner->z;
							}
							return null();
						}
					};
					HX_STACK_LINE(309)
					_g->zpp_inner->z = (_Function_4_1::Block(_g) + _Function_4_2::Block(tmp));
				}
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					if (((bool((_g != null())) && bool(_g->zpp_disp)))){
						HX_STACK_LINE(309)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(309)
							_this->_validate();
						}
					}
					HX_STACK_LINE(309)
					_g->zpp_inner->z;
				}
			}
		}
		HX_STACK_LINE(310)
		tmp->dispose();
		HX_STACK_LINE(311)
		return ret;
	}
}


::nape::geom::Vec3 FluidArbiter_obj::dragImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("FluidArbiter::dragImpulse","nape/dynamics/FluidArbiter.hx",275);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(277)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(277)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	struct _Function_1_1{
		inline static ::nape::phys::Body Block( ::nape::dynamics::FluidArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",280);
			{
				HX_STACK_LINE(280)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(280)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(280)
				return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b2->outer) : ::nape::phys::Body(__this->zpp_inner->b1->outer) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::Body Block( ::nape::dynamics::FluidArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",280);
			{
				HX_STACK_LINE(280)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(280)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(280)
				return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b1->outer) : ::nape::phys::Body(__this->zpp_inner->b2->outer) );
			}
			return null();
		}
	};
	HX_STACK_LINE(280)
	if (((bool((bool((body != null())) && bool((body != _Function_1_1::Block(this))))) && bool((body != _Function_1_2::Block(this)))))){
		HX_STACK_LINE(280)
		hx::Throw (HX_CSTRING("Error: Arbiter does not relate to body"));
	}
	HX_STACK_LINE(282)
	::zpp_nape::dynamics::ZPP_FluidArbiter farb = this->zpp_inner->fluidarb;		HX_STACK_VAR(farb,"farb");
	HX_STACK_LINE(283)
	int scale = (  (((bool((body == null())) || bool((body->zpp_inner == this->zpp_inner->b2))))) ? int((int)1) : int((int)-1) );		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(284)
	return ::nape::geom::Vec3_obj::get((farb->dampx * scale),(farb->dampy * scale),(farb->adamp * scale));
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,dragImpulse,return )

::nape::geom::Vec3 FluidArbiter_obj::buoyancyImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("FluidArbiter::buoyancyImpulse","nape/dynamics/FluidArbiter.hx",246);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(248)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(248)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	struct _Function_1_1{
		inline static ::nape::phys::Body Block( ::nape::dynamics::FluidArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",251);
			{
				HX_STACK_LINE(251)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(251)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(251)
				return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b2->outer) : ::nape::phys::Body(__this->zpp_inner->b1->outer) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::Body Block( ::nape::dynamics::FluidArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",251);
			{
				HX_STACK_LINE(251)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(251)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(251)
				return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b1->outer) : ::nape::phys::Body(__this->zpp_inner->b2->outer) );
			}
			return null();
		}
	};
	HX_STACK_LINE(251)
	if (((bool((bool((body != null())) && bool((body != _Function_1_1::Block(this))))) && bool((body != _Function_1_2::Block(this)))))){
		HX_STACK_LINE(251)
		hx::Throw (HX_CSTRING("Error: Arbiter does not relate to body"));
	}
	HX_STACK_LINE(253)
	::zpp_nape::dynamics::ZPP_FluidArbiter farb = this->zpp_inner->fluidarb;		HX_STACK_VAR(farb,"farb");
	HX_STACK_LINE(254)
	if (((body == null()))){
		HX_STACK_LINE(254)
		return ::nape::geom::Vec3_obj::get(farb->buoyx,farb->buoyy,(int)0);
	}
	else{
		HX_STACK_LINE(257)
		if (((body->zpp_inner == this->zpp_inner->b2))){
			HX_STACK_LINE(257)
			return ::nape::geom::Vec3_obj::get(farb->buoyx,farb->buoyy,((farb->buoyy * farb->r2x) - (farb->buoyx * farb->r2y)));
		}
		else{
			HX_STACK_LINE(260)
			return ::nape::geom::Vec3_obj::get(-(farb->buoyx),-(farb->buoyy),-((((farb->buoyy * farb->r1x) - (farb->buoyx * farb->r1y)))));
		}
	}
	HX_STACK_LINE(254)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,buoyancyImpulse,return )

Float FluidArbiter_obj::set_overlap( Float overlap){
	HX_STACK_PUSH("FluidArbiter::set_overlap","nape/dynamics/FluidArbiter.hx",220);
	HX_STACK_THIS(this);
	HX_STACK_ARG(overlap,"overlap");
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(223)
		if ((!(this->zpp_inner->fluidarb->_mutable))){
			HX_STACK_LINE(223)
			hx::Throw (HX_CSTRING("Error: Arbiter is mutable only within a pre-handler"));
		}
		HX_STACK_LINE(226)
		if (((overlap != overlap))){
			HX_STACK_LINE(226)
			hx::Throw (HX_CSTRING("Error: FluidArbiter::overlap cannot be NaN"));
		}
		HX_STACK_LINE(229)
		if (((bool((overlap <= (int)0)) || bool((overlap == ::Math_obj::POSITIVE_INFINITY))))){
			HX_STACK_LINE(229)
			hx::Throw (HX_CSTRING("Error: FluidArbiter::overlap must be strictly positive and non infinite"));
		}
		HX_STACK_LINE(231)
		this->zpp_inner->fluidarb->overlap = overlap;
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::dynamics::FluidArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",233);
			{
				HX_STACK_LINE(233)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(233)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(233)
				return __this->zpp_inner->fluidarb->overlap;
			}
			return null();
		}
	};
	HX_STACK_LINE(233)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,set_overlap,return )

Float FluidArbiter_obj::get_overlap( ){
	HX_STACK_PUSH("FluidArbiter::get_overlap","nape/dynamics/FluidArbiter.hx",214);
	HX_STACK_THIS(this);
	HX_STACK_LINE(216)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(216)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(218)
	return this->zpp_inner->fluidarb->overlap;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidArbiter_obj,get_overlap,return )

::nape::geom::Vec2 FluidArbiter_obj::set_position( ::nape::geom::Vec2 position){
	HX_STACK_PUSH("FluidArbiter::set_position","nape/dynamics/FluidArbiter.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(195)
		if ((!(this->zpp_inner->fluidarb->_mutable))){
			HX_STACK_LINE(195)
			hx::Throw (HX_CSTRING("Error: Arbiter is mutable only within a pre-handler"));
		}
		HX_STACK_LINE(198)
		if (((position == null()))){
			HX_STACK_LINE(198)
			hx::Throw (HX_CSTRING("Error: FluidArbiter::position cannot be null"));
		}
		HX_STACK_LINE(200)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::dynamics::FluidArbiter_obj *__this){
					HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",200);
					{
						HX_STACK_LINE(200)
						if ((!(__this->zpp_inner->active))){
							HX_STACK_LINE(200)
							hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
						}
						HX_STACK_LINE(200)
						if (((__this->zpp_inner->fluidarb->wrap_position == null()))){
							HX_STACK_LINE(200)
							__this->zpp_inner->fluidarb->getposition();
						}
						HX_STACK_LINE(200)
						return __this->zpp_inner->fluidarb->wrap_position;
					}
					return null();
				}
			};
			HX_STACK_LINE(200)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(200)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(200)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(200)
			if (((bool((position != null())) && bool(position->zpp_disp)))){
				HX_STACK_LINE(200)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(200)
				if ((_this1->_immutable)){
					HX_STACK_LINE(200)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(200)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(200)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(200)
			if (((position == null()))){
				HX_STACK_LINE(200)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &position,::nape::geom::Vec2 _this){
					HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",200);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &position){
								HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",200);
								{
									HX_STACK_LINE(200)
									if (((bool((position != null())) && bool(position->zpp_disp)))){
										HX_STACK_LINE(200)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(200)
									{
										HX_STACK_LINE(200)
										::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(200)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(200)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(200)
									return position->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &position){
								HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",200);
								{
									HX_STACK_LINE(200)
									if (((bool((position != null())) && bool(position->zpp_disp)))){
										HX_STACK_LINE(200)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(200)
									{
										HX_STACK_LINE(200)
										::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(200)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(200)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(200)
									return position->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(200)
						Float x = _Function_4_1::Block(position);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(position);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(200)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(200)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(200)
							if ((_this1->_immutable)){
								HX_STACK_LINE(200)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(200)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(200)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(200)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(200)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",200);
								{
									HX_STACK_LINE(200)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(200)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(200)
									{
										HX_STACK_LINE(200)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(200)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(200)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(200)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",200);
								{
									HX_STACK_LINE(200)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(200)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(200)
									{
										HX_STACK_LINE(200)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(200)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(200)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(200)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(200)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(200)
							{
								HX_STACK_LINE(200)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(200)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(200)
								{
								}
							}
							HX_STACK_LINE(200)
							{
								HX_STACK_LINE(200)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(200)
								if (((_this1->_invalidate != null()))){
									HX_STACK_LINE(200)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(200)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(200)
			::nape::geom::Vec2 ret = _Function_3_2::Block(position,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(200)
			if ((position->zpp_inner->weak)){
				HX_STACK_LINE(200)
				{
					HX_STACK_LINE(200)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(200)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(200)
						if ((_this1->_immutable)){
							HX_STACK_LINE(200)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(200)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(200)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(200)
					if ((position->zpp_inner->_inuse)){
						HX_STACK_LINE(200)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(200)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(200)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(200)
					position->zpp_inner = null();
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(200)
						o->zpp_pool = null();
						HX_STACK_LINE(200)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(200)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(200)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(200)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(200)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(200)
					{
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							if (((o->outer != null()))){
								HX_STACK_LINE(200)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(200)
								o->outer = null();
							}
							HX_STACK_LINE(200)
							o->_isimmutable = null();
							HX_STACK_LINE(200)
							o->_validate = null();
							HX_STACK_LINE(200)
							o->_invalidate = null();
						}
						HX_STACK_LINE(200)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(200)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(200)
				true;
			}
			else{
				HX_STACK_LINE(200)
				false;
			}
			HX_STACK_LINE(200)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::dynamics::FluidArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/FluidArbiter.hx",202);
			{
				HX_STACK_LINE(202)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(202)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(202)
				if (((__this->zpp_inner->fluidarb->wrap_position == null()))){
					HX_STACK_LINE(202)
					__this->zpp_inner->fluidarb->getposition();
				}
				HX_STACK_LINE(202)
				return __this->zpp_inner->fluidarb->wrap_position;
			}
			return null();
		}
	};
	HX_STACK_LINE(202)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FluidArbiter_obj,set_position,return )

::nape::geom::Vec2 FluidArbiter_obj::get_position( ){
	HX_STACK_PUSH("FluidArbiter::get_position","nape/dynamics/FluidArbiter.hx",185);
	HX_STACK_THIS(this);
	HX_STACK_LINE(187)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(187)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(189)
	if (((this->zpp_inner->fluidarb->wrap_position == null()))){
		HX_STACK_LINE(189)
		this->zpp_inner->fluidarb->getposition();
	}
	HX_STACK_LINE(190)
	return this->zpp_inner->fluidarb->wrap_position;
}


HX_DEFINE_DYNAMIC_FUNC0(FluidArbiter_obj,get_position,return )


FluidArbiter_obj::FluidArbiter_obj()
{
}

void FluidArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FluidArbiter);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FluidArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FluidArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { return get_overlap(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dragImpulse") ) { return dragImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_overlap") ) { return set_overlap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_overlap") ) { return get_overlap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buoyancyImpulse") ) { return buoyancyImpulse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FluidArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { return set_overlap(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return set_position(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FluidArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("overlap"));
	outFields->push(HX_CSTRING("position"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("totalImpulse"),
	HX_CSTRING("dragImpulse"),
	HX_CSTRING("buoyancyImpulse"),
	HX_CSTRING("set_overlap"),
	HX_CSTRING("get_overlap"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get_position"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FluidArbiter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FluidArbiter_obj::__mClass,"__mClass");
};

Class FluidArbiter_obj::__mClass;

void FluidArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.FluidArbiter"), hx::TCanCast< FluidArbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FluidArbiter_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
