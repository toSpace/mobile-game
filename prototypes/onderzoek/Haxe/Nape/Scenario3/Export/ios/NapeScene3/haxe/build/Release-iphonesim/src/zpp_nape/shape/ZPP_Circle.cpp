#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace shape{

Void ZPP_Circle_obj::__construct()
{
HX_STACK_PUSH("ZPP_Circle::new","zpp_nape/shape/Circle.hx",174);
{
	HX_STACK_LINE(176)
	this->radius = 0.0;
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(178)
	super::__construct(::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE);
	HX_STACK_LINE(179)
	this->circle = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(180)
	this->zip_localCOM = false;
}
;
	return null();
}

ZPP_Circle_obj::~ZPP_Circle_obj() { }

Dynamic ZPP_Circle_obj::__CreateEmpty() { return  new ZPP_Circle_obj; }
hx::ObjectPtr< ZPP_Circle_obj > ZPP_Circle_obj::__new()
{  hx::ObjectPtr< ZPP_Circle_obj > result = new ZPP_Circle_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Circle_obj > result = new ZPP_Circle_obj();
	result->__construct();
	return result;}

::zpp_nape::shape::ZPP_Circle ZPP_Circle_obj::__copy( ){
	HX_STACK_PUSH("ZPP_Circle::__copy","zpp_nape/shape/Circle.hx",376);
	HX_STACK_THIS(this);
	HX_STACK_LINE(377)
	::zpp_nape::shape::ZPP_Circle ret = ::nape::shape::Circle_obj::__new(this->radius,null(),null(),null())->zpp_inner_zn;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(378)
	{
		HX_STACK_LINE(379)
		ret->localCOMx = this->localCOMx;
		HX_STACK_LINE(380)
		ret->localCOMy = this->localCOMy;
		HX_STACK_LINE(381)
		{
		}
		HX_STACK_LINE(389)
		{
		}
	}
	HX_STACK_LINE(398)
	ret->zip_localCOM = false;
	HX_STACK_LINE(399)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,__copy,return )

Void ZPP_Circle_obj::__transform( ::nape::geom::Mat23 m){
{
		HX_STACK_PUSH("ZPP_Circle::__transform","zpp_nape/shape/Circle.hx",364);
		HX_STACK_THIS(this);
		HX_STACK_ARG(m,"m");
		HX_STACK_LINE(365)
		Float det = ((m->zpp_inner->a * m->zpp_inner->d) - (m->zpp_inner->b * m->zpp_inner->c));		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(366)
		if (((det < (int)0))){
			HX_STACK_LINE(366)
			det = -(det);
		}
		HX_STACK_LINE(367)
		hx::MultEq(this->radius,::Math_obj::sqrt(det));
		HX_STACK_LINE(368)
		{
			HX_STACK_LINE(369)
			Float t = (((m->zpp_inner->a * this->localCOMx) + (m->zpp_inner->b * this->localCOMy)) + m->zpp_inner->tx);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(370)
			this->localCOMy = (((m->zpp_inner->c * this->localCOMx) + (m->zpp_inner->d * this->localCOMy)) + m->zpp_inner->ty);
			HX_STACK_LINE(371)
			this->localCOMx = t;
		}
		HX_STACK_LINE(373)
		this->invalidate_radius();
		HX_STACK_LINE(374)
		this->invalidate_localCOM();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Circle_obj,__transform,(void))

Void ZPP_Circle_obj::__rotate( Float x,Float y){
{
		HX_STACK_PUSH("ZPP_Circle::__rotate","zpp_nape/shape/Circle.hx",333);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(333)
		if (((((this->localCOMx * this->localCOMx) + (this->localCOMy * this->localCOMy)) > (int)0))){
			HX_STACK_LINE(335)
			Float tx = 0.0;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(336)
			Float ty = 0.0;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(338)
				tx = ((y * this->localCOMx) - (x * this->localCOMy));
				HX_STACK_LINE(339)
				ty = ((this->localCOMx * x) + (this->localCOMy * y));
			}
			HX_STACK_LINE(341)
			{
				HX_STACK_LINE(342)
				this->localCOMx = tx;
				HX_STACK_LINE(343)
				this->localCOMy = ty;
				HX_STACK_LINE(344)
				{
				}
				HX_STACK_LINE(352)
				{
				}
			}
			HX_STACK_LINE(361)
			this->invalidate_localCOM();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Circle_obj,__rotate,(void))

Void ZPP_Circle_obj::__translate( Float x,Float y){
{
		HX_STACK_PUSH("ZPP_Circle::__translate","zpp_nape/shape/Circle.hx",317);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(318)
		{
			HX_STACK_LINE(319)
			Float t = 1.0;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(320)
			{
			}
			HX_STACK_LINE(328)
			hx::AddEq(this->localCOMx,(x * t));
			HX_STACK_LINE(329)
			hx::AddEq(this->localCOMy,(y * t));
		}
		HX_STACK_LINE(331)
		this->invalidate_localCOM();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Circle_obj,__translate,(void))

Void ZPP_Circle_obj::__scale( Float sx,Float sy){
{
		HX_STACK_PUSH("ZPP_Circle::__scale","zpp_nape/shape/Circle.hx",307);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sx,"sx");
		HX_STACK_ARG(sy,"sy");
		HX_STACK_LINE(308)
		Float factor = (Float(((((  (((sx < (int)0))) ? Float(-(sx)) : Float(sx) )) + ((  (((sy < (int)0))) ? Float(-(sy)) : Float(sy) ))))) / Float((int)2));		HX_STACK_VAR(factor,"factor");
		HX_STACK_LINE(309)
		hx::MultEq(this->radius,(  (((factor < (int)0))) ? Float(-(factor)) : Float(factor) ));
		HX_STACK_LINE(310)
		this->invalidate_radius();
		HX_STACK_LINE(311)
		if (((((this->localCOMx * this->localCOMx) + (this->localCOMy * this->localCOMy)) > (int)0))){
			HX_STACK_LINE(312)
			hx::MultEq(this->localCOMx,sx);
			HX_STACK_LINE(313)
			hx::MultEq(this->localCOMy,sy);
			HX_STACK_LINE(314)
			this->invalidate_localCOM();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Circle_obj,__scale,(void))

Void ZPP_Circle_obj::__validate_angDrag( ){
{
		HX_STACK_PUSH("ZPP_Circle::__validate_angDrag","zpp_nape/shape/Circle.hx",300);
		HX_STACK_THIS(this);
		HX_STACK_LINE(301)
		Float lc = ((this->localCOMx * this->localCOMx) + (this->localCOMy * this->localCOMy));		HX_STACK_VAR(lc,"lc");
		HX_STACK_LINE(302)
		Float r2 = (this->radius * this->radius);		HX_STACK_VAR(r2,"r2");
		HX_STACK_LINE(303)
		Float skin = (this->material->dynamicFriction * ::nape::Config_obj::fluidAngularDragFriction);		HX_STACK_VAR(skin,"skin");
		HX_STACK_LINE(304)
		this->angDrag = ((((lc + ((int)2 * r2))) * skin) + (((0.5 * ::nape::Config_obj::fluidAngularDrag) * (((int)1 + ::nape::Config_obj::fluidVacuumDrag))) * lc));
		HX_STACK_LINE(305)
		hx::DivEq(this->angDrag,((int)2 * ((lc + (0.5 * r2)))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,__validate_angDrag,(void))

Void ZPP_Circle_obj::__validate_area_inertia( ){
{
		HX_STACK_PUSH("ZPP_Circle::__validate_area_inertia","zpp_nape/shape/Circle.hx",295);
		HX_STACK_THIS(this);
		HX_STACK_LINE(296)
		Float r2 = (this->radius * this->radius);		HX_STACK_VAR(r2,"r2");
		HX_STACK_LINE(297)
		this->area = (r2 * ::Math_obj::PI);
		HX_STACK_LINE(298)
		this->inertia = ((r2 * 0.5) + (((this->localCOMx * this->localCOMx) + (this->localCOMy * this->localCOMy))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,__validate_area_inertia,(void))

Void ZPP_Circle_obj::__validate_sweepRadius( ){
{
		HX_STACK_PUSH("ZPP_Circle::__validate_sweepRadius","zpp_nape/shape/Circle.hx",291);
		HX_STACK_THIS(this);
		HX_STACK_LINE(292)
		this->sweepCoef = ::Math_obj::sqrt(((this->localCOMx * this->localCOMx) + (this->localCOMy * this->localCOMy)));
		HX_STACK_LINE(293)
		this->sweepRadius = (this->sweepCoef + this->radius);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,__validate_sweepRadius,(void))

Void ZPP_Circle_obj::_force_validate_aabb( ){
{
		HX_STACK_PUSH("ZPP_Circle::_force_validate_aabb","zpp_nape/shape/Circle.hx",281);
		HX_STACK_THIS(this);
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(283)
			this->worldCOMx = (this->body->posx + (((this->body->axisy * this->localCOMx) - (this->body->axisx * this->localCOMy))));
			HX_STACK_LINE(284)
			this->worldCOMy = (this->body->posy + (((this->localCOMx * this->body->axisx) + (this->localCOMy * this->body->axisy))));
		}
		HX_STACK_LINE(286)
		this->aabb->minx = (this->worldCOMx - this->radius);
		HX_STACK_LINE(287)
		this->aabb->miny = (this->worldCOMy - this->radius);
		HX_STACK_LINE(288)
		this->aabb->maxx = (this->worldCOMx + this->radius);
		HX_STACK_LINE(289)
		this->aabb->maxy = (this->worldCOMy + this->radius);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,_force_validate_aabb,(void))

Void ZPP_Circle_obj::__validate_aabb( ){
{
		HX_STACK_PUSH("ZPP_Circle::__validate_aabb","zpp_nape/shape/Circle.hx",250);
		HX_STACK_THIS(this);
		HX_STACK_LINE(251)
		if ((this->zip_worldCOM)){
			HX_STACK_LINE(251)
			if (((this->body != null()))){
				HX_STACK_LINE(251)
				this->zip_worldCOM = false;
				HX_STACK_LINE(251)
				if ((this->zip_localCOM)){
					HX_STACK_LINE(251)
					this->zip_localCOM = false;
					HX_STACK_LINE(251)
					if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(251)
						::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(251)
						if (((_this->lverts->next == null()))){
							HX_STACK_LINE(251)
							hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
						}
						HX_STACK_LINE(251)
						if (((_this->lverts->next->next == null()))){
							HX_STACK_LINE(251)
							_this->localCOMx = _this->lverts->next->x;
							HX_STACK_LINE(251)
							_this->localCOMy = _this->lverts->next->y;
							HX_STACK_LINE(251)
							{
							}
							HX_STACK_LINE(251)
							Dynamic();
						}
						else{
							HX_STACK_LINE(251)
							if (((_this->lverts->next->next->next == null()))){
								HX_STACK_LINE(251)
								{
									HX_STACK_LINE(251)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(251)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(251)
									{
									}
									HX_STACK_LINE(251)
									{
									}
								}
								HX_STACK_LINE(251)
								{
									HX_STACK_LINE(251)
									Float t = 1.0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(251)
									{
									}
									HX_STACK_LINE(251)
									hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
									HX_STACK_LINE(251)
									hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
								}
								HX_STACK_LINE(251)
								{
									HX_STACK_LINE(251)
									Float t = 0.5;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(251)
									{
									}
									HX_STACK_LINE(251)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(251)
									hx::MultEq(_this->localCOMy,t);
								}
							}
							else{
								HX_STACK_LINE(251)
								{
									HX_STACK_LINE(251)
									_this->localCOMx = (int)0;
									HX_STACK_LINE(251)
									_this->localCOMy = (int)0;
									HX_STACK_LINE(251)
									{
									}
									HX_STACK_LINE(251)
									{
									}
								}
								HX_STACK_LINE(251)
								Float area = 0.0;		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(251)
								{
									HX_STACK_LINE(251)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(251)
									::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
									HX_STACK_LINE(251)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(251)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(251)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(251)
									while(((cx_ite != null()))){
										HX_STACK_LINE(251)
										::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
										HX_STACK_LINE(251)
										{
											HX_STACK_LINE(251)
											hx::AddEq(area,(v->x * ((w->y - u->y))));
											HX_STACK_LINE(251)
											Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(251)
											hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
											HX_STACK_LINE(251)
											hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
										}
										HX_STACK_LINE(251)
										u = v;
										HX_STACK_LINE(251)
										v = w;
										HX_STACK_LINE(251)
										cx_ite = cx_ite->next;
									}
									HX_STACK_LINE(251)
									cx_ite = _this->lverts->next;
									HX_STACK_LINE(251)
									::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(251)
									{
										HX_STACK_LINE(251)
										hx::AddEq(area,(v->x * ((w->y - u->y))));
										HX_STACK_LINE(251)
										Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(251)
										hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
										HX_STACK_LINE(251)
										hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
									}
									HX_STACK_LINE(251)
									u = v;
									HX_STACK_LINE(251)
									v = w;
									HX_STACK_LINE(251)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(251)
									::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
									HX_STACK_LINE(251)
									{
										HX_STACK_LINE(251)
										hx::AddEq(area,(v->x * ((w1->y - u->y))));
										HX_STACK_LINE(251)
										Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(251)
										hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
										HX_STACK_LINE(251)
										hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
									}
								}
								HX_STACK_LINE(251)
								area = (Float((int)1) / Float((((int)3 * area))));
								HX_STACK_LINE(251)
								{
									HX_STACK_LINE(251)
									Float t = area;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(251)
									{
									}
									HX_STACK_LINE(251)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(251)
									hx::MultEq(_this->localCOMy,t);
								}
							}
						}
					}
				}
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(251)
					if ((_this->zip_axis)){
						HX_STACK_LINE(251)
						_this->zip_axis = false;
						HX_STACK_LINE(251)
						{
							HX_STACK_LINE(251)
							_this->axisx = ::Math_obj::sin(_this->rot);
							HX_STACK_LINE(251)
							_this->axisy = ::Math_obj::cos(_this->rot);
							HX_STACK_LINE(251)
							{
							}
							HX_STACK_LINE(251)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					this->worldCOMx = (this->body->posx + (((this->body->axisy * this->localCOMx) - (this->body->axisx * this->localCOMy))));
					HX_STACK_LINE(251)
					this->worldCOMy = (this->body->posy + (((this->localCOMx * this->body->axisx) + (this->localCOMy * this->body->axisy))));
				}
			}
		}
		HX_STACK_LINE(252)
		Float rx = this->radius;		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(253)
		Float ry = this->radius;		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(254)
		{
		}
		HX_STACK_LINE(262)
		{
		}
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(271)
			this->aabb->minx = (this->worldCOMx - rx);
			HX_STACK_LINE(272)
			this->aabb->miny = (this->worldCOMy - ry);
		}
		HX_STACK_LINE(274)
		{
			HX_STACK_LINE(275)
			this->aabb->maxx = (this->worldCOMx + rx);
			HX_STACK_LINE(276)
			this->aabb->maxy = (this->worldCOMy + ry);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,__validate_aabb,(void))

Void ZPP_Circle_obj::setupLocalCOM( ){
{
		HX_STACK_PUSH("ZPP_Circle::setupLocalCOM","zpp_nape/shape/Circle.hx",238);
		HX_STACK_THIS(this);
		HX_STACK_LINE(239)
		::zpp_nape::shape::ZPP_Circle me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::shape::ZPP_Circle_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/shape/Circle.hx",240);
				{
					HX_STACK_LINE(240)
					Float x = __this->localCOMx;		HX_STACK_VAR(x,"x");
					Float y = __this->localCOMy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(240)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(240)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(240)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(240)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(240)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(240)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(240)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(240)
						ret->zpp_pool = null();
						HX_STACK_LINE(240)
						ret->zpp_disp = false;
						HX_STACK_LINE(240)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(240)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(240)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/shape/Circle.hx",240);
								{
									HX_STACK_LINE(240)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(240)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(240)
									{
										HX_STACK_LINE(240)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(240)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(240)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(240)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(240)
											ret1->next = null();
										}
										HX_STACK_LINE(240)
										ret1->weak = false;
									}
									HX_STACK_LINE(240)
									ret1->_immutable = immutable;
									HX_STACK_LINE(240)
									{
										HX_STACK_LINE(240)
										ret1->x = x;
										HX_STACK_LINE(240)
										ret1->y = y;
										HX_STACK_LINE(240)
										{
										}
										HX_STACK_LINE(240)
										{
										}
									}
									HX_STACK_LINE(240)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(240)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(240)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(240)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(240)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(240)
							if ((_this->_immutable)){
								HX_STACK_LINE(240)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(240)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(240)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(240)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(240)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/shape/Circle.hx",240);
								{
									HX_STACK_LINE(240)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(240)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(240)
									{
										HX_STACK_LINE(240)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(240)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(240)
											_this->_validate();
										}
									}
									HX_STACK_LINE(240)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/shape/Circle.hx",240);
								{
									HX_STACK_LINE(240)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(240)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(240)
									{
										HX_STACK_LINE(240)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(240)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(240)
											_this->_validate();
										}
									}
									HX_STACK_LINE(240)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(240)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(240)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(240)
								{
								}
								HX_STACK_LINE(240)
								{
								}
							}
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(240)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(240)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(240)
						ret;
					}
					HX_STACK_LINE(240)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(240)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(240)
		this->wrap_localCOM = _Function_1_1::Block(this);
		HX_STACK_LINE(241)
		this->wrap_localCOM->zpp_inner->_inuse = true;
		HX_STACK_LINE(242)
		this->wrap_localCOM->zpp_inner->_validate = this->localCOM_validate_dyn();
		HX_STACK_LINE(243)
		this->wrap_localCOM->zpp_inner->_invalidate = this->localCOM_invalidate_dyn();
		HX_STACK_LINE(245)
		this->wrap_localCOM->zpp_inner->_isimmutable = this->localCOM_immutable_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,setupLocalCOM,(void))

Void ZPP_Circle_obj::localCOM_immutable( ){
{
		HX_STACK_PUSH("ZPP_Circle::localCOM_immutable","zpp_nape/shape/Circle.hx",234);
		HX_STACK_THIS(this);
		HX_STACK_LINE(234)
		if (((bool((bool((this->body != null())) && bool((this->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)))) && bool((this->body->space != null()))))){
			HX_STACK_LINE(235)
			hx::Throw (HX_CSTRING("Error: Cannot modify localCOM of Circle added to a static Body whilst within a Space"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,localCOM_immutable,(void))

Void ZPP_Circle_obj::localCOM_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_Circle::localCOM_invalidate","zpp_nape/shape/Circle.hx",209);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(211)
			this->localCOMx = x->x;
			HX_STACK_LINE(212)
			this->localCOMy = x->y;
			HX_STACK_LINE(213)
			{
			}
			HX_STACK_LINE(221)
			{
			}
		}
		HX_STACK_LINE(230)
		this->invalidate_localCOM();
		HX_STACK_LINE(231)
		if (((this->body != null()))){
			HX_STACK_LINE(231)
			this->body->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Circle_obj,localCOM_invalidate,(void))

Void ZPP_Circle_obj::localCOM_validate( ){
{
		HX_STACK_PUSH("ZPP_Circle::localCOM_validate","zpp_nape/shape/Circle.hx",189);
		HX_STACK_THIS(this);
		HX_STACK_LINE(190)
		this->wrap_localCOM->zpp_inner->x = this->localCOMx;
		HX_STACK_LINE(191)
		this->wrap_localCOM->zpp_inner->y = this->localCOMy;
		HX_STACK_LINE(192)
		{
		}
		HX_STACK_LINE(200)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,localCOM_validate,(void))

Void ZPP_Circle_obj::invalidate_radius( ){
{
		HX_STACK_PUSH("ZPP_Circle::invalidate_radius","zpp_nape/shape/Circle.hx",183);
		HX_STACK_THIS(this);
		HX_STACK_LINE(184)
		this->invalidate_area_inertia();
		HX_STACK_LINE(185)
		this->invalidate_angDrag();
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			this->zip_aabb = true;
			HX_STACK_LINE(186)
			if (((this->body != null()))){
				HX_STACK_LINE(186)
				this->body->zip_aabb = true;
			}
		}
		HX_STACK_LINE(187)
		if (((this->body != null()))){
			HX_STACK_LINE(187)
			this->body->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,invalidate_radius,(void))

Void ZPP_Circle_obj::__clear( ){
{
		HX_STACK_PUSH("ZPP_Circle::__clear","zpp_nape/shape/Circle.hx",182);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,__clear,(void))


ZPP_Circle_obj::ZPP_Circle_obj()
{
}

void ZPP_Circle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Circle);
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Circle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Circle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__copy") ) { return __copy_dyn(); }
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__scale") ) { return __scale_dyn(); }
		if (HX_FIELD_EQ(inName,"__clear") ) { return __clear_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__rotate") ) { return __rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform_dyn(); }
		if (HX_FIELD_EQ(inName,"__translate") ) { return __translate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setupLocalCOM") ) { return setupLocalCOM_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__validate_aabb") ) { return __validate_aabb_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"localCOM_validate") ) { return localCOM_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_radius") ) { return invalidate_radius_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__validate_angDrag") ) { return __validate_angDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"localCOM_immutable") ) { return localCOM_immutable_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"localCOM_invalidate") ) { return localCOM_invalidate_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_force_validate_aabb") ) { return _force_validate_aabb_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__validate_sweepRadius") ) { return __validate_sweepRadius_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__validate_area_inertia") ) { return __validate_area_inertia_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::shape::Circle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("outer_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__copy"),
	HX_CSTRING("__transform"),
	HX_CSTRING("__rotate"),
	HX_CSTRING("__translate"),
	HX_CSTRING("__scale"),
	HX_CSTRING("__validate_angDrag"),
	HX_CSTRING("__validate_area_inertia"),
	HX_CSTRING("__validate_sweepRadius"),
	HX_CSTRING("_force_validate_aabb"),
	HX_CSTRING("__validate_aabb"),
	HX_CSTRING("setupLocalCOM"),
	HX_CSTRING("localCOM_immutable"),
	HX_CSTRING("localCOM_invalidate"),
	HX_CSTRING("localCOM_validate"),
	HX_CSTRING("invalidate_radius"),
	HX_CSTRING("__clear"),
	HX_CSTRING("radius"),
	HX_CSTRING("outer_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Circle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Circle_obj::__mClass,"__mClass");
};

Class ZPP_Circle_obj::__mClass;

void ZPP_Circle_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.shape.ZPP_Circle"), hx::TCanCast< ZPP_Circle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Circle_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace shape
