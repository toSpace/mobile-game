#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SweepDistance
#include <zpp_nape/geom/ZPP_SweepDistance.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SweepDistance_obj::__construct()
{
	return null();
}

ZPP_SweepDistance_obj::~ZPP_SweepDistance_obj() { }

Dynamic ZPP_SweepDistance_obj::__CreateEmpty() { return  new ZPP_SweepDistance_obj; }
hx::ObjectPtr< ZPP_SweepDistance_obj > ZPP_SweepDistance_obj::__new()
{  hx::ObjectPtr< ZPP_SweepDistance_obj > result = new ZPP_SweepDistance_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SweepDistance_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SweepDistance_obj > result = new ZPP_SweepDistance_obj();
	result->__construct();
	return result;}

Void ZPP_SweepDistance_obj::dynamicSweep( ::zpp_nape::geom::ZPP_ToiEvent toi,Float timeStep,Float lowerBound,Float negRadius,hx::Null< bool >  __o_userAPI){
bool userAPI = __o_userAPI.Default(false);
	HX_STACK_PUSH("ZPP_SweepDistance::dynamicSweep","zpp_nape/geom/SweepDistance.hx",230);
	HX_STACK_ARG(toi,"toi");
	HX_STACK_ARG(timeStep,"timeStep");
	HX_STACK_ARG(lowerBound,"lowerBound");
	HX_STACK_ARG(negRadius,"negRadius");
	HX_STACK_ARG(userAPI,"userAPI");
{
		HX_STACK_LINE(231)
		::zpp_nape::shape::ZPP_Shape s1 = toi->s1;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(232)
		::zpp_nape::shape::ZPP_Shape s2 = toi->s2;		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(233)
		::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(234)
		::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(235)
		Float deltax = 0.0;		HX_STACK_VAR(deltax,"deltax");
		HX_STACK_LINE(236)
		Float deltay = 0.0;		HX_STACK_VAR(deltay,"deltay");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(238)
			deltax = (b2->velx - b1->velx);
			HX_STACK_LINE(239)
			deltay = (b2->vely - b1->vely);
		}
		HX_STACK_LINE(241)
		Float ang1 = b1->angvel;		HX_STACK_VAR(ang1,"ang1");
		HX_STACK_LINE(242)
		if (((ang1 < (int)0))){
			HX_STACK_LINE(242)
			ang1 = -(ang1);
		}
		HX_STACK_LINE(243)
		Float ang2 = b2->angvel;		HX_STACK_VAR(ang2,"ang2");
		HX_STACK_LINE(244)
		if (((ang2 < (int)0))){
			HX_STACK_LINE(244)
			ang2 = -(ang2);
		}
		HX_STACK_LINE(245)
		Float angBias = ((s1->sweepCoef * ang1) + (s2->sweepCoef * ang2));		HX_STACK_VAR(angBias,"angBias");
		HX_STACK_LINE(246)
		if (((bool((bool((bool(!(userAPI)) && bool(!(toi->kinematic)))) && bool((((deltax * deltax) + (deltay * deltay)) < (::nape::Config_obj::dynamicSweepLinearThreshold * ::nape::Config_obj::dynamicSweepLinearThreshold))))) && bool((angBias < ::nape::Config_obj::dynamicSweepAngularThreshold))))){
			HX_STACK_LINE(247)
			toi->toi = (int)-1;
			HX_STACK_LINE(248)
			toi->failed = true;
			HX_STACK_LINE(249)
			return null();
		}
		HX_STACK_LINE(251)
		::zpp_nape::geom::ZPP_Vec2 c1 = toi->c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(252)
		::zpp_nape::geom::ZPP_Vec2 c2 = toi->c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(253)
		::zpp_nape::geom::ZPP_Vec2 axis = toi->axis;		HX_STACK_VAR(axis,"axis");
		HX_STACK_LINE(254)
		Float curTOI = lowerBound;		HX_STACK_VAR(curTOI,"curTOI");
		HX_STACK_LINE(255)
		int curIter = (int)0;		HX_STACK_VAR(curIter,"curIter");
		HX_STACK_LINE(256)
		while((true)){
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				Float dt = (curTOI * timeStep);		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(257)
				Float delta = (dt - b1->sweepTime);		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(257)
				if (((delta != (int)0))){
					HX_STACK_LINE(257)
					{
					}
					HX_STACK_LINE(257)
					b1->sweepTime = dt;
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						Float t = delta;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(257)
						{
						}
						HX_STACK_LINE(257)
						hx::AddEq(b1->posx,(b1->velx * t));
						HX_STACK_LINE(257)
						hx::AddEq(b1->posy,(b1->vely * t));
					}
					HX_STACK_LINE(257)
					if (((b1->angvel != (int)0))){
						HX_STACK_LINE(257)
						Float dr = (b1->sweep_angvel * delta);		HX_STACK_VAR(dr,"dr");
						HX_STACK_LINE(257)
						hx::AddEq(b1->rot,dr);
						HX_STACK_LINE(257)
						if ((((dr * dr) > 0.0001))){
							HX_STACK_LINE(257)
							b1->axisx = ::Math_obj::sin(b1->rot);
							HX_STACK_LINE(257)
							b1->axisy = ::Math_obj::cos(b1->rot);
							HX_STACK_LINE(257)
							{
							}
							HX_STACK_LINE(257)
							Dynamic();
						}
						else{
							HX_STACK_LINE(257)
							Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(257)
							Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(257)
							Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(257)
							Float nx = ((((p * b1->axisx) + (dr * b1->axisy))) * m);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(257)
							b1->axisy = ((((p * b1->axisy) - (dr * b1->axisx))) * m);
							HX_STACK_LINE(257)
							b1->axisx = nx;
						}
					}
				}
			}
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				{
				}
				HX_STACK_LINE(258)
				if (((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(258)
					s1->worldCOMx = (b1->posx + (((b1->axisy * s1->localCOMx) - (b1->axisx * s1->localCOMy))));
					HX_STACK_LINE(258)
					s1->worldCOMy = (b1->posy + (((s1->localCOMx * b1->axisx) + (s1->localCOMy * b1->axisy))));
				}
				else{
					HX_STACK_LINE(258)
					::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(258)
						while(((cx_ite != null()))){
							HX_STACK_LINE(258)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(258)
								li = li->next;
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									g->x = (b1->posx + (((b1->axisy * l->x) - (b1->axisx * l->y))));
									HX_STACK_LINE(258)
									g->y = (b1->posy + (((l->x * b1->axisx) + (l->y * b1->axisy))));
								}
							}
							HX_STACK_LINE(258)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(258)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(258)
						while(((cx_ite != null()))){
							HX_STACK_LINE(258)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(258)
								ite = ite->next;
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
									HX_STACK_LINE(258)
									e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
								}
								HX_STACK_LINE(258)
								e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(258)
								e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
								HX_STACK_LINE(258)
								e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
							}
							HX_STACK_LINE(258)
							u = v;
							HX_STACK_LINE(258)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(258)
							ite = ite->next;
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
								HX_STACK_LINE(258)
								e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
							}
							HX_STACK_LINE(258)
							e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(258)
							e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
							HX_STACK_LINE(258)
							e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
						}
					}
				}
			}
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				Float dt = (curTOI * timeStep);		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(259)
				Float delta = (dt - b2->sweepTime);		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(259)
				if (((delta != (int)0))){
					HX_STACK_LINE(259)
					{
					}
					HX_STACK_LINE(259)
					b2->sweepTime = dt;
					HX_STACK_LINE(259)
					{
						HX_STACK_LINE(259)
						Float t = delta;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(259)
						{
						}
						HX_STACK_LINE(259)
						hx::AddEq(b2->posx,(b2->velx * t));
						HX_STACK_LINE(259)
						hx::AddEq(b2->posy,(b2->vely * t));
					}
					HX_STACK_LINE(259)
					if (((b2->angvel != (int)0))){
						HX_STACK_LINE(259)
						Float dr = (b2->sweep_angvel * delta);		HX_STACK_VAR(dr,"dr");
						HX_STACK_LINE(259)
						hx::AddEq(b2->rot,dr);
						HX_STACK_LINE(259)
						if ((((dr * dr) > 0.0001))){
							HX_STACK_LINE(259)
							b2->axisx = ::Math_obj::sin(b2->rot);
							HX_STACK_LINE(259)
							b2->axisy = ::Math_obj::cos(b2->rot);
							HX_STACK_LINE(259)
							{
							}
							HX_STACK_LINE(259)
							Dynamic();
						}
						else{
							HX_STACK_LINE(259)
							Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(259)
							Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(259)
							Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(259)
							Float nx = ((((p * b2->axisx) + (dr * b2->axisy))) * m);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(259)
							b2->axisy = ((((p * b2->axisy) - (dr * b2->axisx))) * m);
							HX_STACK_LINE(259)
							b2->axisx = nx;
						}
					}
				}
			}
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				{
				}
				HX_STACK_LINE(260)
				if (((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(260)
					s2->worldCOMx = (b2->posx + (((b2->axisy * s2->localCOMx) - (b2->axisx * s2->localCOMy))));
					HX_STACK_LINE(260)
					s2->worldCOMy = (b2->posy + (((s2->localCOMx * b2->axisx) + (s2->localCOMy * b2->axisy))));
				}
				else{
					HX_STACK_LINE(260)
					::zpp_nape::shape::ZPP_Polygon p = s2->polygon;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(260)
					::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(260)
						while(((cx_ite != null()))){
							HX_STACK_LINE(260)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(260)
								li = li->next;
								HX_STACK_LINE(260)
								{
									HX_STACK_LINE(260)
									g->x = (b2->posx + (((b2->axisy * l->x) - (b2->axisx * l->y))));
									HX_STACK_LINE(260)
									g->y = (b2->posy + (((l->x * b2->axisx) + (l->y * b2->axisy))));
								}
							}
							HX_STACK_LINE(260)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(260)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(260)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(260)
						while(((cx_ite != null()))){
							HX_STACK_LINE(260)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(260)
								ite = ite->next;
								HX_STACK_LINE(260)
								{
									HX_STACK_LINE(260)
									e->gnormx = ((b2->axisy * e->lnormx) - (b2->axisx * e->lnormy));
									HX_STACK_LINE(260)
									e->gnormy = ((e->lnormx * b2->axisx) + (e->lnormy * b2->axisy));
								}
								HX_STACK_LINE(260)
								e->gprojection = (((b2->posx * e->gnormx) + (b2->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(260)
								e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
								HX_STACK_LINE(260)
								e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
							}
							HX_STACK_LINE(260)
							u = v;
							HX_STACK_LINE(260)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(260)
							ite = ite->next;
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								e->gnormx = ((b2->axisy * e->lnormx) - (b2->axisx * e->lnormy));
								HX_STACK_LINE(260)
								e->gnormy = ((e->lnormx * b2->axisx) + (e->lnormy * b2->axisy));
							}
							HX_STACK_LINE(260)
							e->gprojection = (((b2->posx * e->gnormx) + (b2->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(260)
							e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
							HX_STACK_LINE(260)
							e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
						}
					}
				}
			}
			struct _Function_2_1{
				inline static Float Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::geom::ZPP_Vec2 &c2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &c1,::zpp_nape::shape::ZPP_Shape &s2){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
					{
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
						::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
						::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
						::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
						Float upperBound = 1e100;		HX_STACK_VAR(upperBound,"upperBound");
						struct _Function_3_1{
							inline static Float Block( Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::geom::ZPP_Vec2 &w1){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
								{
									HX_STACK_LINE(261)
									::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
									HX_STACK_LINE(261)
									::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
									HX_STACK_LINE(261)
									Float dist;		HX_STACK_VAR(dist,"dist");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
										HX_STACK_LINE(261)
										Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											nx = (c21->worldCOMx - c11->worldCOMx);
											HX_STACK_LINE(261)
											ny = (c21->worldCOMy - c11->worldCOMy);
										}
										struct _Function_5_1{
											inline static Float Block( Float &nx,Float &ny){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
												{
													HX_STACK_LINE(261)
													{
													}
													HX_STACK_LINE(261)
													return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
												}
												return null();
											}
										};
										HX_STACK_LINE(261)
										Float len = _Function_5_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(261)
										dist = (len - ((c11->radius + c21->radius)));
										HX_STACK_LINE(261)
										if (((dist < upperBound))){
											HX_STACK_LINE(261)
											if (((len == (int)0))){
												HX_STACK_LINE(261)
												nx = (int)1;
												HX_STACK_LINE(261)
												ny = (int)0;
												HX_STACK_LINE(261)
												{
												}
												HX_STACK_LINE(261)
												{
												}
											}
											else{
												HX_STACK_LINE(261)
												Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(261)
												{
												}
												HX_STACK_LINE(261)
												hx::MultEq(nx,t);
												HX_STACK_LINE(261)
												hx::MultEq(ny,t);
											}
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												Float t = c11->radius;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(261)
												{
												}
												HX_STACK_LINE(261)
												w1->x = (c11->worldCOMx + (nx * t));
												HX_STACK_LINE(261)
												w1->y = (c11->worldCOMy + (ny * t));
											}
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												Float t = -(c21->radius);		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(261)
												{
												}
												HX_STACK_LINE(261)
												w2->x = (c21->worldCOMx + (nx * t));
												HX_STACK_LINE(261)
												w2->y = (c21->worldCOMy + (ny * t));
											}
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												axis->x = nx;
												HX_STACK_LINE(261)
												axis->y = ny;
												HX_STACK_LINE(261)
												{
												}
												HX_STACK_LINE(261)
												{
												}
											}
										}
									}
									HX_STACK_LINE(261)
									return dist;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::geom::ZPP_Vec2 &w1){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
								{
									HX_STACK_LINE(261)
									bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
									HX_STACK_LINE(261)
									if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
										HX_STACK_LINE(261)
										::zpp_nape::shape::ZPP_Shape tmp = s11;		HX_STACK_VAR(tmp,"tmp");
										HX_STACK_LINE(261)
										s11 = s21;
										HX_STACK_LINE(261)
										s21 = tmp;
										HX_STACK_LINE(261)
										::zpp_nape::geom::ZPP_Vec2 tmp2 = w1;		HX_STACK_VAR(tmp2,"tmp2");
										HX_STACK_LINE(261)
										w1 = w2;
										HX_STACK_LINE(261)
										w2 = tmp2;
										HX_STACK_LINE(261)
										swapped = true;
									}
									struct _Function_4_1{
										inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
											{
												HX_STACK_LINE(261)
												::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
												HX_STACK_LINE(261)
												::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
												HX_STACK_LINE(261)
												Float best = -1e+100;		HX_STACK_VAR(best,"best");
												HX_STACK_LINE(261)
												::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(261)
													while(((cx_ite != null()))){
														HX_STACK_LINE(261)
														::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(261)
															Float dist = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist,"dist");
															HX_STACK_LINE(261)
															if (((dist > upperBound))){
																HX_STACK_LINE(261)
																best = dist;
																HX_STACK_LINE(261)
																break;
															}
															HX_STACK_LINE(261)
															if (((dist > (int)0))){
																HX_STACK_LINE(261)
																if (((dist > best))){
																	HX_STACK_LINE(261)
																	best = dist;
																	HX_STACK_LINE(261)
																	a0 = a;
																}
															}
															else{
																HX_STACK_LINE(261)
																if (((bool((best < (int)0)) && bool((dist > best))))){
																	HX_STACK_LINE(261)
																	best = dist;
																	HX_STACK_LINE(261)
																	a0 = a;
																}
															}
														}
														HX_STACK_LINE(261)
														cx_ite = cx_ite->next;
													}
												}
												HX_STACK_LINE(261)
												if (((best < upperBound))){
													HX_STACK_LINE(261)
													::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
													HX_STACK_LINE(261)
													::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
													HX_STACK_LINE(261)
													Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
													HX_STACK_LINE(261)
													if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
														HX_STACK_LINE(261)
														Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
														HX_STACK_LINE(261)
														Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(261)
															nx = (circle->worldCOMx - v0->x);
															HX_STACK_LINE(261)
															ny = (circle->worldCOMy - v0->y);
														}
														struct _Function_7_1{
															inline static Float Block( Float &nx,Float &ny){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
																{
																	HX_STACK_LINE(261)
																	{
																	}
																	HX_STACK_LINE(261)
																	return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
																}
																return null();
															}
														};
														HX_STACK_LINE(261)
														Float len = _Function_7_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
														HX_STACK_LINE(261)
														best = (len - circle->radius);
														HX_STACK_LINE(261)
														if (((best < upperBound))){
															HX_STACK_LINE(261)
															if (((len == (int)0))){
																HX_STACK_LINE(261)
																nx = (int)1;
																HX_STACK_LINE(261)
																ny = (int)0;
																HX_STACK_LINE(261)
																{
																}
																HX_STACK_LINE(261)
																{
																}
															}
															else{
																HX_STACK_LINE(261)
																Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(261)
																{
																}
																HX_STACK_LINE(261)
																hx::MultEq(nx,t);
																HX_STACK_LINE(261)
																hx::MultEq(ny,t);
															}
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																int t = (int)0;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(261)
																{
																}
																HX_STACK_LINE(261)
																w1->x = (v0->x + (nx * t));
																HX_STACK_LINE(261)
																w1->y = (v0->y + (ny * t));
															}
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(261)
																{
																}
																HX_STACK_LINE(261)
																w2->x = (circle->worldCOMx + (nx * t));
																HX_STACK_LINE(261)
																w2->y = (circle->worldCOMy + (ny * t));
															}
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																axis->x = nx;
																HX_STACK_LINE(261)
																axis->y = ny;
																HX_STACK_LINE(261)
																{
																}
																HX_STACK_LINE(261)
																{
																}
															}
														}
													}
													else{
														HX_STACK_LINE(261)
														if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
															HX_STACK_LINE(261)
															Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
															HX_STACK_LINE(261)
															Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																nx = (circle->worldCOMx - v1->x);
																HX_STACK_LINE(261)
																ny = (circle->worldCOMy - v1->y);
															}
															struct _Function_8_1{
																inline static Float Block( Float &nx,Float &ny){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
																	{
																		HX_STACK_LINE(261)
																		{
																		}
																		HX_STACK_LINE(261)
																		return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(261)
															Float len = _Function_8_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
															HX_STACK_LINE(261)
															best = (len - circle->radius);
															HX_STACK_LINE(261)
															if (((best < upperBound))){
																HX_STACK_LINE(261)
																if (((len == (int)0))){
																	HX_STACK_LINE(261)
																	nx = (int)1;
																	HX_STACK_LINE(261)
																	ny = (int)0;
																	HX_STACK_LINE(261)
																	{
																	}
																	HX_STACK_LINE(261)
																	{
																	}
																}
																else{
																	HX_STACK_LINE(261)
																	Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(261)
																	{
																	}
																	HX_STACK_LINE(261)
																	hx::MultEq(nx,t);
																	HX_STACK_LINE(261)
																	hx::MultEq(ny,t);
																}
																HX_STACK_LINE(261)
																{
																	HX_STACK_LINE(261)
																	int t = (int)0;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(261)
																	{
																	}
																	HX_STACK_LINE(261)
																	w1->x = (v1->x + (nx * t));
																	HX_STACK_LINE(261)
																	w1->y = (v1->y + (ny * t));
																}
																HX_STACK_LINE(261)
																{
																	HX_STACK_LINE(261)
																	Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(261)
																	{
																	}
																	HX_STACK_LINE(261)
																	w2->x = (circle->worldCOMx + (nx * t));
																	HX_STACK_LINE(261)
																	w2->y = (circle->worldCOMy + (ny * t));
																}
																HX_STACK_LINE(261)
																{
																	HX_STACK_LINE(261)
																	axis->x = nx;
																	HX_STACK_LINE(261)
																	axis->y = ny;
																	HX_STACK_LINE(261)
																	{
																	}
																	HX_STACK_LINE(261)
																	{
																	}
																}
															}
														}
														else{
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(261)
																{
																}
																HX_STACK_LINE(261)
																w2->x = (circle->worldCOMx + (a0->gnormx * t));
																HX_STACK_LINE(261)
																w2->y = (circle->worldCOMy + (a0->gnormy * t));
															}
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																Float t = -(best);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(261)
																{
																}
																HX_STACK_LINE(261)
																w1->x = (w2->x + (a0->gnormx * t));
																HX_STACK_LINE(261)
																w1->y = (w2->y + (a0->gnormy * t));
															}
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																axis->x = a0->gnormx;
																HX_STACK_LINE(261)
																axis->y = a0->gnormy;
																HX_STACK_LINE(261)
																{
																}
																HX_STACK_LINE(261)
																{
																}
															}
														}
													}
												}
												HX_STACK_LINE(261)
												if ((swapped)){
													HX_STACK_LINE(261)
													axis->x = -(axis->x);
													HX_STACK_LINE(261)
													axis->y = -(axis->y);
												}
												HX_STACK_LINE(261)
												return best;
											}
											return null();
										}
									};
									struct _Function_4_2{
										inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
											{
												HX_STACK_LINE(261)
												::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
												HX_STACK_LINE(261)
												::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
												HX_STACK_LINE(261)
												Float best = -1e+100;		HX_STACK_VAR(best,"best");
												HX_STACK_LINE(261)
												::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
												HX_STACK_LINE(261)
												::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
												HX_STACK_LINE(261)
												int besti = (int)0;		HX_STACK_VAR(besti,"besti");
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p1->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(261)
													while(((cx_ite != null()))){
														HX_STACK_LINE(261)
														::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(261)
															Float min = 1e100;		HX_STACK_VAR(min,"min");
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p2->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																HX_STACK_LINE(261)
																while(((cx_ite1 != null()))){
																	HX_STACK_LINE(261)
																	::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																	HX_STACK_LINE(261)
																	{
																		HX_STACK_LINE(261)
																		Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																		HX_STACK_LINE(261)
																		if (((k < min))){
																			HX_STACK_LINE(261)
																			min = k;
																		}
																	}
																	HX_STACK_LINE(261)
																	cx_ite1 = cx_ite1->next;
																}
															}
															HX_STACK_LINE(261)
															hx::SubEq(min,a->gprojection);
															HX_STACK_LINE(261)
															if (((min > upperBound))){
																HX_STACK_LINE(261)
																best = min;
																HX_STACK_LINE(261)
																break;
															}
															HX_STACK_LINE(261)
															if (((min > (int)0))){
																HX_STACK_LINE(261)
																if (((min > best))){
																	HX_STACK_LINE(261)
																	best = min;
																	HX_STACK_LINE(261)
																	a1 = a;
																	HX_STACK_LINE(261)
																	besti = (int)1;
																}
															}
															else{
																HX_STACK_LINE(261)
																if (((bool((best < (int)0)) && bool((min > best))))){
																	HX_STACK_LINE(261)
																	best = min;
																	HX_STACK_LINE(261)
																	a1 = a;
																	HX_STACK_LINE(261)
																	besti = (int)1;
																}
															}
														}
														HX_STACK_LINE(261)
														cx_ite = cx_ite->next;
													}
												}
												struct _Function_5_1{
													inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Edge &a2,Float &best,::zpp_nape::shape::ZPP_Edge &a1,::zpp_nape::shape::ZPP_Polygon &p2,int &besti,Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::shape::ZPP_Polygon &p1,::zpp_nape::geom::ZPP_Vec2 &w1){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
														{
															HX_STACK_LINE(261)
															{
																HX_STACK_LINE(261)
																::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
																HX_STACK_LINE(261)
																while(((cx_ite != null()))){
																	HX_STACK_LINE(261)
																	::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
																	HX_STACK_LINE(261)
																	{
																		HX_STACK_LINE(261)
																		Float min = 1e100;		HX_STACK_VAR(min,"min");
																		HX_STACK_LINE(261)
																		{
																			HX_STACK_LINE(261)
																			::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p1->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																			HX_STACK_LINE(261)
																			while(((cx_ite1 != null()))){
																				HX_STACK_LINE(261)
																				::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																				HX_STACK_LINE(261)
																				{
																					HX_STACK_LINE(261)
																					Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																					HX_STACK_LINE(261)
																					if (((k < min))){
																						HX_STACK_LINE(261)
																						min = k;
																					}
																				}
																				HX_STACK_LINE(261)
																				cx_ite1 = cx_ite1->next;
																			}
																		}
																		HX_STACK_LINE(261)
																		hx::SubEq(min,a->gprojection);
																		HX_STACK_LINE(261)
																		if (((min > upperBound))){
																			HX_STACK_LINE(261)
																			best = min;
																			HX_STACK_LINE(261)
																			break;
																		}
																		HX_STACK_LINE(261)
																		if (((min > (int)0))){
																			HX_STACK_LINE(261)
																			if (((min > best))){
																				HX_STACK_LINE(261)
																				best = min;
																				HX_STACK_LINE(261)
																				a2 = a;
																				HX_STACK_LINE(261)
																				besti = (int)2;
																			}
																		}
																		else{
																			HX_STACK_LINE(261)
																			if (((bool((best < (int)0)) && bool((min > best))))){
																				HX_STACK_LINE(261)
																				best = min;
																				HX_STACK_LINE(261)
																				a2 = a;
																				HX_STACK_LINE(261)
																				besti = (int)2;
																			}
																		}
																	}
																	HX_STACK_LINE(261)
																	cx_ite = cx_ite->next;
																}
															}
															struct _Function_6_1{
																inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Edge &a2,Float &best,::zpp_nape::shape::ZPP_Edge &a1,::zpp_nape::shape::ZPP_Polygon &p2,int &besti,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::shape::ZPP_Polygon &p1){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
																	{
																		HX_STACK_LINE(261)
																		::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
																		::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
																		HX_STACK_LINE(261)
																		::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
																		HX_STACK_LINE(261)
																		if (((besti == (int)1))){
																			HX_STACK_LINE(261)
																			q1 = p1;
																			HX_STACK_LINE(261)
																			q2 = p2;
																			HX_STACK_LINE(261)
																			ax = a1;
																		}
																		else{
																			HX_STACK_LINE(261)
																			q1 = p2;
																			HX_STACK_LINE(261)
																			q2 = p1;
																			HX_STACK_LINE(261)
																			ax = a2;
																			HX_STACK_LINE(261)
																			::zpp_nape::geom::ZPP_Vec2 tmp = w1;		HX_STACK_VAR(tmp,"tmp");
																			HX_STACK_LINE(261)
																			w1 = w2;
																			HX_STACK_LINE(261)
																			w2 = tmp;
																			HX_STACK_LINE(261)
																			swapped = !(swapped);
																		}
																		HX_STACK_LINE(261)
																		::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
																		HX_STACK_LINE(261)
																		Float min = 1e100;		HX_STACK_VAR(min,"min");
																		HX_STACK_LINE(261)
																		{
																			HX_STACK_LINE(261)
																			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = q2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
																			HX_STACK_LINE(261)
																			while(((cx_ite != null()))){
																				HX_STACK_LINE(261)
																				::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
																				HX_STACK_LINE(261)
																				{
																					HX_STACK_LINE(261)
																					Float k = ((ax->gnormx * a->gnormx) + (ax->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
																					HX_STACK_LINE(261)
																					if (((k < min))){
																						HX_STACK_LINE(261)
																						min = k;
																						HX_STACK_LINE(261)
																						ay = a;
																					}
																				}
																				HX_STACK_LINE(261)
																				cx_ite = cx_ite->next;
																			}
																		}
																		HX_STACK_LINE(261)
																		if ((swapped)){
																			HX_STACK_LINE(261)
																			axis->x = -(ax->gnormx);
																			HX_STACK_LINE(261)
																			axis->y = -(ax->gnormy);
																			HX_STACK_LINE(261)
																			{
																			}
																			HX_STACK_LINE(261)
																			{
																			}
																		}
																		else{
																			HX_STACK_LINE(261)
																			axis->x = ax->gnormx;
																			HX_STACK_LINE(261)
																			axis->y = ax->gnormy;
																			HX_STACK_LINE(261)
																			{
																			}
																			HX_STACK_LINE(261)
																			{
																			}
																		}
																		struct _Function_7_1{
																			inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Edge &ay,::zpp_nape::shape::ZPP_Edge &ax,Float &best,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
																				{
																					HX_STACK_LINE(261)
																					::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
																					HX_STACK_LINE(261)
																					::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
																					HX_STACK_LINE(261)
																					::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
																					HX_STACK_LINE(261)
																					::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
																					HX_STACK_LINE(261)
																					Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
																					HX_STACK_LINE(261)
																					Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
																					HX_STACK_LINE(261)
																					Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
																					HX_STACK_LINE(261)
																					Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
																					HX_STACK_LINE(261)
																					{
																						HX_STACK_LINE(261)
																						vx = (v1->x - v0->x);
																						HX_STACK_LINE(261)
																						vy = (v1->y - v0->y);
																					}
																					HX_STACK_LINE(261)
																					{
																						HX_STACK_LINE(261)
																						qx = (q11->x - q0->x);
																						HX_STACK_LINE(261)
																						qy = (q11->y - q0->y);
																					}
																					HX_STACK_LINE(261)
																					Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
																					HX_STACK_LINE(261)
																					Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
																					HX_STACK_LINE(261)
																					Float t1 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t1,"t1");
																					HX_STACK_LINE(261)
																					Float t2 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t2,"t2");
																					HX_STACK_LINE(261)
																					Float s12 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s12,"s12");
																					HX_STACK_LINE(261)
																					Float s22 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s22,"s22");
																					HX_STACK_LINE(261)
																					if (((t1 < (int)0))){
																						HX_STACK_LINE(261)
																						t1 = (int)0;
																					}
																					else{
																						HX_STACK_LINE(261)
																						if (((t1 > (int)1))){
																							HX_STACK_LINE(261)
																							t1 = (int)1;
																						}
																					}
																					HX_STACK_LINE(261)
																					if (((t2 < (int)0))){
																						HX_STACK_LINE(261)
																						t2 = (int)0;
																					}
																					else{
																						HX_STACK_LINE(261)
																						if (((t2 > (int)1))){
																							HX_STACK_LINE(261)
																							t2 = (int)1;
																						}
																					}
																					HX_STACK_LINE(261)
																					if (((s12 < (int)0))){
																						HX_STACK_LINE(261)
																						s12 = (int)0;
																					}
																					else{
																						HX_STACK_LINE(261)
																						if (((s12 > (int)1))){
																							HX_STACK_LINE(261)
																							s12 = (int)1;
																						}
																					}
																					HX_STACK_LINE(261)
																					if (((s22 < (int)0))){
																						HX_STACK_LINE(261)
																						s22 = (int)0;
																					}
																					else{
																						HX_STACK_LINE(261)
																						if (((s22 > (int)1))){
																							HX_STACK_LINE(261)
																							s22 = (int)1;
																						}
																					}
																					HX_STACK_LINE(261)
																					Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
																					HX_STACK_LINE(261)
																					Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
																					HX_STACK_LINE(261)
																					{
																						HX_STACK_LINE(261)
																						Float t = t1;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(261)
																						{
																						}
																						HX_STACK_LINE(261)
																						f1x = (v0->x + (vx * t));
																						HX_STACK_LINE(261)
																						f1y = (v0->y + (vy * t));
																					}
																					HX_STACK_LINE(261)
																					Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
																					HX_STACK_LINE(261)
																					Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
																					HX_STACK_LINE(261)
																					{
																						HX_STACK_LINE(261)
																						Float t = t2;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(261)
																						{
																						}
																						HX_STACK_LINE(261)
																						f2x = (v0->x + (vx * t));
																						HX_STACK_LINE(261)
																						f2y = (v0->y + (vy * t));
																					}
																					HX_STACK_LINE(261)
																					Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
																					HX_STACK_LINE(261)
																					Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
																					HX_STACK_LINE(261)
																					{
																						HX_STACK_LINE(261)
																						Float t = s12;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(261)
																						{
																						}
																						HX_STACK_LINE(261)
																						g1x = (q0->x + (qx * t));
																						HX_STACK_LINE(261)
																						g1y = (q0->y + (qy * t));
																					}
																					HX_STACK_LINE(261)
																					Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
																					HX_STACK_LINE(261)
																					Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
																					HX_STACK_LINE(261)
																					{
																						HX_STACK_LINE(261)
																						Float t = s22;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(261)
																						{
																						}
																						HX_STACK_LINE(261)
																						g2x = (q0->x + (qx * t));
																						HX_STACK_LINE(261)
																						g2y = (q0->y + (qy * t));
																					}
																					struct _Function_8_1{
																						inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &q0,Float &f1y,Float &f1x){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
																							{
																								HX_STACK_LINE(261)
																								Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																								HX_STACK_LINE(261)
																								Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																								HX_STACK_LINE(261)
																								{
																									HX_STACK_LINE(261)
																									dx = (f1x - q0->x);
																									HX_STACK_LINE(261)
																									dy = (f1y - q0->y);
																								}
																								HX_STACK_LINE(261)
																								return ((dx * dx) + (dy * dy));
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(261)
																					Float d1 = _Function_8_1::Block(q0,f1y,f1x);		HX_STACK_VAR(d1,"d1");
																					struct _Function_8_2{
																						inline static Float Block( Float &f2x,::zpp_nape::geom::ZPP_Vec2 &q11,Float &f2y){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
																							{
																								HX_STACK_LINE(261)
																								Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																								HX_STACK_LINE(261)
																								Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																								HX_STACK_LINE(261)
																								{
																									HX_STACK_LINE(261)
																									dx = (f2x - q11->x);
																									HX_STACK_LINE(261)
																									dy = (f2y - q11->y);
																								}
																								HX_STACK_LINE(261)
																								return ((dx * dx) + (dy * dy));
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(261)
																					Float d2 = _Function_8_2::Block(f2x,q11,f2y);		HX_STACK_VAR(d2,"d2");
																					struct _Function_8_3{
																						inline static Float Block( Float &g1x,::zpp_nape::geom::ZPP_Vec2 &v0,Float &g1y){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
																							{
																								HX_STACK_LINE(261)
																								Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																								HX_STACK_LINE(261)
																								Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																								HX_STACK_LINE(261)
																								{
																									HX_STACK_LINE(261)
																									dx = (g1x - v0->x);
																									HX_STACK_LINE(261)
																									dy = (g1y - v0->y);
																								}
																								HX_STACK_LINE(261)
																								return ((dx * dx) + (dy * dy));
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(261)
																					Float e1 = _Function_8_3::Block(g1x,v0,g1y);		HX_STACK_VAR(e1,"e1");
																					struct _Function_8_4{
																						inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &v1,Float &g2y,Float &g2x){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
																							{
																								HX_STACK_LINE(261)
																								Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																								HX_STACK_LINE(261)
																								Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																								HX_STACK_LINE(261)
																								{
																									HX_STACK_LINE(261)
																									dx = (g2x - v1->x);
																									HX_STACK_LINE(261)
																									dy = (g2y - v1->y);
																								}
																								HX_STACK_LINE(261)
																								return ((dx * dx) + (dy * dy));
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(261)
																					Float e2 = _Function_8_4::Block(v1,g2y,g2x);		HX_STACK_VAR(e2,"e2");
																					HX_STACK_LINE(261)
																					Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
																					HX_STACK_LINE(261)
																					Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
																					HX_STACK_LINE(261)
																					::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
																					HX_STACK_LINE(261)
																					if (((d1 < d2))){
																						HX_STACK_LINE(261)
																						{
																							HX_STACK_LINE(261)
																							minfx = f1x;
																							HX_STACK_LINE(261)
																							minfy = f1y;
																							HX_STACK_LINE(261)
																							{
																							}
																							HX_STACK_LINE(261)
																							{
																							}
																						}
																						HX_STACK_LINE(261)
																						minq = q0;
																					}
																					else{
																						HX_STACK_LINE(261)
																						{
																							HX_STACK_LINE(261)
																							minfx = f2x;
																							HX_STACK_LINE(261)
																							minfy = f2y;
																							HX_STACK_LINE(261)
																							{
																							}
																							HX_STACK_LINE(261)
																							{
																							}
																						}
																						HX_STACK_LINE(261)
																						minq = q11;
																						HX_STACK_LINE(261)
																						d1 = d2;
																					}
																					HX_STACK_LINE(261)
																					Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
																					HX_STACK_LINE(261)
																					Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
																					HX_STACK_LINE(261)
																					::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
																					HX_STACK_LINE(261)
																					if (((e1 < e2))){
																						HX_STACK_LINE(261)
																						{
																							HX_STACK_LINE(261)
																							mingx = g1x;
																							HX_STACK_LINE(261)
																							mingy = g1y;
																							HX_STACK_LINE(261)
																							{
																							}
																							HX_STACK_LINE(261)
																							{
																							}
																						}
																						HX_STACK_LINE(261)
																						minv = v0;
																					}
																					else{
																						HX_STACK_LINE(261)
																						{
																							HX_STACK_LINE(261)
																							mingx = g2x;
																							HX_STACK_LINE(261)
																							mingy = g2y;
																							HX_STACK_LINE(261)
																							{
																							}
																							HX_STACK_LINE(261)
																							{
																							}
																						}
																						HX_STACK_LINE(261)
																						minv = v1;
																						HX_STACK_LINE(261)
																						e1 = e2;
																					}
																					HX_STACK_LINE(261)
																					if (((d1 < e1))){
																						HX_STACK_LINE(261)
																						{
																							HX_STACK_LINE(261)
																							w1->x = minfx;
																							HX_STACK_LINE(261)
																							w1->y = minfy;
																							HX_STACK_LINE(261)
																							{
																							}
																							HX_STACK_LINE(261)
																							{
																							}
																						}
																						HX_STACK_LINE(261)
																						{
																							HX_STACK_LINE(261)
																							w2->x = minq->x;
																							HX_STACK_LINE(261)
																							w2->y = minq->y;
																							HX_STACK_LINE(261)
																							{
																							}
																							HX_STACK_LINE(261)
																							{
																							}
																						}
																						HX_STACK_LINE(261)
																						best = ::Math_obj::sqrt(d1);
																					}
																					else{
																						HX_STACK_LINE(261)
																						{
																							HX_STACK_LINE(261)
																							w2->x = mingx;
																							HX_STACK_LINE(261)
																							w2->y = mingy;
																							HX_STACK_LINE(261)
																							{
																							}
																							HX_STACK_LINE(261)
																							{
																							}
																						}
																						HX_STACK_LINE(261)
																						{
																							HX_STACK_LINE(261)
																							w1->x = minv->x;
																							HX_STACK_LINE(261)
																							w1->y = minv->y;
																							HX_STACK_LINE(261)
																							{
																							}
																							HX_STACK_LINE(261)
																							{
																							}
																						}
																						HX_STACK_LINE(261)
																						best = ::Math_obj::sqrt(e1);
																					}
																					HX_STACK_LINE(261)
																					if (((best != (int)0))){
																						HX_STACK_LINE(261)
																						{
																							HX_STACK_LINE(261)
																							axis->x = (w2->x - w1->x);
																							HX_STACK_LINE(261)
																							axis->y = (w2->y - w1->y);
																						}
																						HX_STACK_LINE(261)
																						{
																							HX_STACK_LINE(261)
																							Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(261)
																							{
																							}
																							HX_STACK_LINE(261)
																							hx::MultEq(axis->x,t);
																							HX_STACK_LINE(261)
																							hx::MultEq(axis->y,t);
																						}
																						HX_STACK_LINE(261)
																						if ((swapped)){
																							HX_STACK_LINE(261)
																							axis->x = -(axis->x);
																							HX_STACK_LINE(261)
																							axis->y = -(axis->y);
																						}
																					}
																					HX_STACK_LINE(261)
																					return best;
																				}
																				return null();
																			}
																		};
																		struct _Function_7_2{
																			inline static Float Block( ::zpp_nape::shape::ZPP_Edge &ay,::zpp_nape::shape::ZPP_Edge &ax,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &w1){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
																				{
																					HX_STACK_LINE(261)
																					Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
																					HX_STACK_LINE(261)
																					Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
																					HX_STACK_LINE(261)
																					{
																						HX_STACK_LINE(261)
																						c0x = ay->gp0->x;
																						HX_STACK_LINE(261)
																						c0y = ay->gp0->y;
																						HX_STACK_LINE(261)
																						{
																						}
																						HX_STACK_LINE(261)
																						{
																						}
																					}
																					HX_STACK_LINE(261)
																					Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
																					HX_STACK_LINE(261)
																					Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
																					HX_STACK_LINE(261)
																					{
																						HX_STACK_LINE(261)
																						c1x = ay->gp1->x;
																						HX_STACK_LINE(261)
																						c1y = ay->gp1->y;
																						HX_STACK_LINE(261)
																						{
																						}
																						HX_STACK_LINE(261)
																						{
																						}
																					}
																					HX_STACK_LINE(261)
																					Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
																					HX_STACK_LINE(261)
																					Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
																					HX_STACK_LINE(261)
																					{
																						HX_STACK_LINE(261)
																						dvx = (c1x - c0x);
																						HX_STACK_LINE(261)
																						dvy = (c1y - c0y);
																					}
																					HX_STACK_LINE(261)
																					Float d0 = ((ax->gnormy * c0x) - (ax->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
																					HX_STACK_LINE(261)
																					Float d1 = ((ax->gnormy * c1x) - (ax->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
																					HX_STACK_LINE(261)
																					Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
																					HX_STACK_LINE(261)
																					Float t = (((-(ax->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
																					HX_STACK_LINE(261)
																					if (((t > ::nape::Config_obj::epsilon))){
																						HX_STACK_LINE(261)
																						Float t1 = t;		HX_STACK_VAR(t1,"t1");
																						HX_STACK_LINE(261)
																						{
																						}
																						HX_STACK_LINE(261)
																						hx::AddEq(c0x,(dvx * t1));
																						HX_STACK_LINE(261)
																						hx::AddEq(c0y,(dvy * t1));
																					}
																					HX_STACK_LINE(261)
																					Float t1 = (((-(ax->tp0) - d1)) * den);		HX_STACK_VAR(t1,"t1");
																					HX_STACK_LINE(261)
																					if (((t1 < -(::nape::Config_obj::epsilon)))){
																						HX_STACK_LINE(261)
																						Float t2 = t1;		HX_STACK_VAR(t2,"t2");
																						HX_STACK_LINE(261)
																						{
																						}
																						HX_STACK_LINE(261)
																						hx::AddEq(c1x,(dvx * t2));
																						HX_STACK_LINE(261)
																						hx::AddEq(c1y,(dvy * t2));
																					}
																					HX_STACK_LINE(261)
																					Float c0d = (((c0x * ax->gnormx) + (c0y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c0d,"c0d");
																					HX_STACK_LINE(261)
																					Float c1d = (((c1x * ax->gnormx) + (c1y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c1d,"c1d");
																					struct _Function_8_1{
																						inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w2,Float &c0y,Float &c0d,::zpp_nape::shape::ZPP_Edge &ax,Float &c0x,::zpp_nape::geom::ZPP_Vec2 &w1){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
																							{
																								HX_STACK_LINE(261)
																								{
																									HX_STACK_LINE(261)
																									w2->x = c0x;
																									HX_STACK_LINE(261)
																									w2->y = c0y;
																									HX_STACK_LINE(261)
																									{
																									}
																									HX_STACK_LINE(261)
																									{
																									}
																								}
																								HX_STACK_LINE(261)
																								{
																									HX_STACK_LINE(261)
																									Float t2 = -(c0d);		HX_STACK_VAR(t2,"t2");
																									HX_STACK_LINE(261)
																									{
																									}
																									HX_STACK_LINE(261)
																									w1->x = (w2->x + (ax->gnormx * t2));
																									HX_STACK_LINE(261)
																									w1->y = (w2->y + (ax->gnormy * t2));
																								}
																								HX_STACK_LINE(261)
																								return c0d;
																							}
																							return null();
																						}
																					};
																					struct _Function_8_2{
																						inline static Float Block( Float &c1y,Float &c1d,::zpp_nape::geom::ZPP_Vec2 &w2,Float &c1x,::zpp_nape::shape::ZPP_Edge &ax,::zpp_nape::geom::ZPP_Vec2 &w1){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",261);
																							{
																								HX_STACK_LINE(261)
																								{
																									HX_STACK_LINE(261)
																									w2->x = c1x;
																									HX_STACK_LINE(261)
																									w2->y = c1y;
																									HX_STACK_LINE(261)
																									{
																									}
																									HX_STACK_LINE(261)
																									{
																									}
																								}
																								HX_STACK_LINE(261)
																								{
																									HX_STACK_LINE(261)
																									Float t2 = -(c1d);		HX_STACK_VAR(t2,"t2");
																									HX_STACK_LINE(261)
																									{
																									}
																									HX_STACK_LINE(261)
																									w1->x = (w2->x + (ax->gnormx * t2));
																									HX_STACK_LINE(261)
																									w1->y = (w2->y + (ax->gnormy * t2));
																								}
																								HX_STACK_LINE(261)
																								return c1d;
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(261)
																					return (  (((c0d < c1d))) ? Float(_Function_8_1::Block(w2,c0y,c0d,ax,c0x,w1)) : Float(_Function_8_2::Block(c1y,c1d,w2,c1x,ax,w1)) );
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(261)
																		return (  (((best >= (int)0))) ? Float(_Function_7_1::Block(swapped,ay,ax,best,w2,axis,w1)) : Float(_Function_7_2::Block(ay,ax,w2,w1)) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(261)
															return (  (((best < upperBound))) ? Float(_Function_6_1::Block(swapped,a2,best,a1,p2,besti,w2,axis,w1,p1)) : Float(upperBound) );
														}
														return null();
													}
												};
												HX_STACK_LINE(261)
												return (  (((best < upperBound))) ? Float(_Function_5_1::Block(swapped,a2,best,a1,p2,besti,upperBound,w2,axis,p1,w1)) : Float(upperBound) );
											}
											return null();
										}
									};
									HX_STACK_LINE(261)
									return (  (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))) ? Float(_Function_4_1::Block(swapped,s11,s21,w2,upperBound,axis,w1)) : Float(_Function_4_2::Block(swapped,s11,s21,w2,upperBound,axis,w1)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(261)
						return (  (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))) ? Float(_Function_3_1::Block(upperBound,axis,s21,w2,s11,w1)) : Float(_Function_3_2::Block(upperBound,axis,s21,w2,s11,w1)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(261)
			Float sep = (_Function_2_1::Block(s1,c2,axis,c1,s2) + negRadius);		HX_STACK_VAR(sep,"sep");
			HX_STACK_LINE(262)
			Float dot = ((deltax * axis->x) + (deltay * axis->y));		HX_STACK_VAR(dot,"dot");
			HX_STACK_LINE(263)
			if (((sep < ::nape::Config_obj::distanceThresholdCCD))){
				HX_STACK_LINE(264)
				if ((userAPI)){
					HX_STACK_LINE(264)
					break;
				}
				HX_STACK_LINE(267)
				Float d1x = 0.0;		HX_STACK_VAR(d1x,"d1x");
				HX_STACK_LINE(268)
				Float d1y = 0.0;		HX_STACK_VAR(d1y,"d1y");
				HX_STACK_LINE(269)
				{
					HX_STACK_LINE(270)
					d1x = (c1->x - b1->posx);
					HX_STACK_LINE(271)
					d1y = (c1->y - b1->posy);
				}
				HX_STACK_LINE(273)
				Float d2x = 0.0;		HX_STACK_VAR(d2x,"d2x");
				HX_STACK_LINE(274)
				Float d2y = 0.0;		HX_STACK_VAR(d2y,"d2y");
				HX_STACK_LINE(275)
				{
					HX_STACK_LINE(276)
					d2x = (c2->x - b2->posx);
					HX_STACK_LINE(277)
					d2y = (c2->y - b2->posy);
				}
				HX_STACK_LINE(279)
				Float proj = ((dot - (b1->sweep_angvel * (((axis->y * d1x) - (axis->x * d1y))))) + (b2->sweep_angvel * (((axis->y * d2x) - (axis->x * d2y)))));		HX_STACK_VAR(proj,"proj");
				HX_STACK_LINE(280)
				if (((proj > (int)0))){
					HX_STACK_LINE(280)
					toi->slipped = true;
				}
				HX_STACK_LINE(283)
				if (((bool((proj <= (int)0)) || bool((sep < (::nape::Config_obj::distanceThresholdCCD * 0.5)))))){
					HX_STACK_LINE(283)
					break;
				}
			}
			HX_STACK_LINE(287)
			Float denom = (((angBias - dot)) * timeStep);		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(288)
			if (((denom <= (int)0))){
				HX_STACK_LINE(289)
				curTOI = (int)-1;
				HX_STACK_LINE(290)
				break;
			}
			HX_STACK_LINE(292)
			Float delta = (Float(sep) / Float(denom));		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(293)
			if (((delta < 1e-6))){
				HX_STACK_LINE(293)
				delta = 1e-6;
			}
			HX_STACK_LINE(294)
			hx::AddEq(curTOI,delta);
			HX_STACK_LINE(295)
			if (((curTOI >= (int)1))){
				HX_STACK_LINE(296)
				curTOI = (int)1;
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					Float dt = (curTOI * timeStep);		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(297)
					Float delta1 = (dt - b1->sweepTime);		HX_STACK_VAR(delta1,"delta1");
					HX_STACK_LINE(297)
					if (((delta1 != (int)0))){
						HX_STACK_LINE(297)
						{
						}
						HX_STACK_LINE(297)
						b1->sweepTime = dt;
						HX_STACK_LINE(297)
						{
							HX_STACK_LINE(297)
							Float t = delta1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(297)
							{
							}
							HX_STACK_LINE(297)
							hx::AddEq(b1->posx,(b1->velx * t));
							HX_STACK_LINE(297)
							hx::AddEq(b1->posy,(b1->vely * t));
						}
						HX_STACK_LINE(297)
						if (((b1->angvel != (int)0))){
							HX_STACK_LINE(297)
							Float dr = (b1->sweep_angvel * delta1);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(297)
							hx::AddEq(b1->rot,dr);
							HX_STACK_LINE(297)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(297)
								b1->axisx = ::Math_obj::sin(b1->rot);
								HX_STACK_LINE(297)
								b1->axisy = ::Math_obj::cos(b1->rot);
								HX_STACK_LINE(297)
								{
								}
								HX_STACK_LINE(297)
								Dynamic();
							}
							else{
								HX_STACK_LINE(297)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(297)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(297)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(297)
								Float nx = ((((p * b1->axisx) + (dr * b1->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(297)
								b1->axisy = ((((p * b1->axisy) - (dr * b1->axisx))) * m);
								HX_STACK_LINE(297)
								b1->axisx = nx;
							}
						}
					}
				}
				HX_STACK_LINE(298)
				{
					HX_STACK_LINE(298)
					{
					}
					HX_STACK_LINE(298)
					if (((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
						HX_STACK_LINE(298)
						s1->worldCOMx = (b1->posx + (((b1->axisy * s1->localCOMx) - (b1->axisx * s1->localCOMy))));
						HX_STACK_LINE(298)
						s1->worldCOMy = (b1->posy + (((s1->localCOMx * b1->axisx) + (s1->localCOMy * b1->axisy))));
					}
					else{
						HX_STACK_LINE(298)
						::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(298)
						::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(298)
							while(((cx_ite != null()))){
								HX_STACK_LINE(298)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(298)
								{
									HX_STACK_LINE(298)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(298)
									li = li->next;
									HX_STACK_LINE(298)
									{
										HX_STACK_LINE(298)
										g->x = (b1->posx + (((b1->axisy * l->x) - (b1->axisx * l->y))));
										HX_STACK_LINE(298)
										g->y = (b1->posy + (((l->x * b1->axisx) + (l->y * b1->axisy))));
									}
								}
								HX_STACK_LINE(298)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(298)
						::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(298)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(298)
							while(((cx_ite != null()))){
								HX_STACK_LINE(298)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(298)
								{
									HX_STACK_LINE(298)
									::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(298)
									ite = ite->next;
									HX_STACK_LINE(298)
									{
										HX_STACK_LINE(298)
										e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
										HX_STACK_LINE(298)
										e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
									}
									HX_STACK_LINE(298)
									e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
									HX_STACK_LINE(298)
									e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
									HX_STACK_LINE(298)
									e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
								}
								HX_STACK_LINE(298)
								u = v;
								HX_STACK_LINE(298)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(298)
							{
								HX_STACK_LINE(298)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(298)
								ite = ite->next;
								HX_STACK_LINE(298)
								{
									HX_STACK_LINE(298)
									e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
									HX_STACK_LINE(298)
									e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
								}
								HX_STACK_LINE(298)
								e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(298)
								e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
								HX_STACK_LINE(298)
								e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
							}
						}
					}
				}
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					Float dt = (curTOI * timeStep);		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(299)
					Float delta1 = (dt - b2->sweepTime);		HX_STACK_VAR(delta1,"delta1");
					HX_STACK_LINE(299)
					if (((delta1 != (int)0))){
						HX_STACK_LINE(299)
						{
						}
						HX_STACK_LINE(299)
						b2->sweepTime = dt;
						HX_STACK_LINE(299)
						{
							HX_STACK_LINE(299)
							Float t = delta1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(299)
							{
							}
							HX_STACK_LINE(299)
							hx::AddEq(b2->posx,(b2->velx * t));
							HX_STACK_LINE(299)
							hx::AddEq(b2->posy,(b2->vely * t));
						}
						HX_STACK_LINE(299)
						if (((b2->angvel != (int)0))){
							HX_STACK_LINE(299)
							Float dr = (b2->sweep_angvel * delta1);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(299)
							hx::AddEq(b2->rot,dr);
							HX_STACK_LINE(299)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(299)
								b2->axisx = ::Math_obj::sin(b2->rot);
								HX_STACK_LINE(299)
								b2->axisy = ::Math_obj::cos(b2->rot);
								HX_STACK_LINE(299)
								{
								}
								HX_STACK_LINE(299)
								Dynamic();
							}
							else{
								HX_STACK_LINE(299)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(299)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(299)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(299)
								Float nx = ((((p * b2->axisx) + (dr * b2->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(299)
								b2->axisy = ((((p * b2->axisy) - (dr * b2->axisx))) * m);
								HX_STACK_LINE(299)
								b2->axisx = nx;
							}
						}
					}
				}
				HX_STACK_LINE(300)
				{
					HX_STACK_LINE(300)
					{
					}
					HX_STACK_LINE(300)
					if (((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
						HX_STACK_LINE(300)
						s2->worldCOMx = (b2->posx + (((b2->axisy * s2->localCOMx) - (b2->axisx * s2->localCOMy))));
						HX_STACK_LINE(300)
						s2->worldCOMy = (b2->posy + (((s2->localCOMx * b2->axisx) + (s2->localCOMy * b2->axisy))));
					}
					else{
						HX_STACK_LINE(300)
						::zpp_nape::shape::ZPP_Polygon p = s2->polygon;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(300)
						::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(300)
						{
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(300)
							while(((cx_ite != null()))){
								HX_STACK_LINE(300)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(300)
									li = li->next;
									HX_STACK_LINE(300)
									{
										HX_STACK_LINE(300)
										g->x = (b2->posx + (((b2->axisy * l->x) - (b2->axisx * l->y))));
										HX_STACK_LINE(300)
										g->y = (b2->posy + (((l->x * b2->axisx) + (l->y * b2->axisy))));
									}
								}
								HX_STACK_LINE(300)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(300)
						::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
						HX_STACK_LINE(300)
						{
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(300)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(300)
							while(((cx_ite != null()))){
								HX_STACK_LINE(300)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(300)
									ite = ite->next;
									HX_STACK_LINE(300)
									{
										HX_STACK_LINE(300)
										e->gnormx = ((b2->axisy * e->lnormx) - (b2->axisx * e->lnormy));
										HX_STACK_LINE(300)
										e->gnormy = ((e->lnormx * b2->axisx) + (e->lnormy * b2->axisy));
									}
									HX_STACK_LINE(300)
									e->gprojection = (((b2->posx * e->gnormx) + (b2->posy * e->gnormy)) + e->lprojection);
									HX_STACK_LINE(300)
									e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
									HX_STACK_LINE(300)
									e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
								}
								HX_STACK_LINE(300)
								u = v;
								HX_STACK_LINE(300)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(300)
							{
								HX_STACK_LINE(300)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(300)
								ite = ite->next;
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									e->gnormx = ((b2->axisy * e->lnormx) - (b2->axisx * e->lnormy));
									HX_STACK_LINE(300)
									e->gnormy = ((e->lnormx * b2->axisx) + (e->lnormy * b2->axisy));
								}
								HX_STACK_LINE(300)
								e->gprojection = (((b2->posx * e->gnormx) + (b2->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(300)
								e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
								HX_STACK_LINE(300)
								e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
							}
						}
					}
				}
				struct _Function_3_1{
					inline static Float Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::geom::ZPP_Vec2 &c2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &c1,::zpp_nape::shape::ZPP_Shape &s2){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
						{
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
							::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
							::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
							::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
							Float upperBound = 1e100;		HX_STACK_VAR(upperBound,"upperBound");
							struct _Function_4_1{
								inline static Float Block( Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::geom::ZPP_Vec2 &w1){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
									{
										HX_STACK_LINE(301)
										::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
										HX_STACK_LINE(301)
										::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
										HX_STACK_LINE(301)
										Float dist;		HX_STACK_VAR(dist,"dist");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
											HX_STACK_LINE(301)
											Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												nx = (c21->worldCOMx - c11->worldCOMx);
												HX_STACK_LINE(301)
												ny = (c21->worldCOMy - c11->worldCOMy);
											}
											struct _Function_6_1{
												inline static Float Block( Float &nx,Float &ny){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
													{
														HX_STACK_LINE(301)
														{
														}
														HX_STACK_LINE(301)
														return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
													}
													return null();
												}
											};
											HX_STACK_LINE(301)
											Float len = _Function_6_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(301)
											dist = (len - ((c11->radius + c21->radius)));
											HX_STACK_LINE(301)
											if (((dist < upperBound))){
												HX_STACK_LINE(301)
												if (((len == (int)0))){
													HX_STACK_LINE(301)
													nx = (int)1;
													HX_STACK_LINE(301)
													ny = (int)0;
													HX_STACK_LINE(301)
													{
													}
													HX_STACK_LINE(301)
													{
													}
												}
												else{
													HX_STACK_LINE(301)
													Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(301)
													{
													}
													HX_STACK_LINE(301)
													hx::MultEq(nx,t);
													HX_STACK_LINE(301)
													hx::MultEq(ny,t);
												}
												HX_STACK_LINE(301)
												{
													HX_STACK_LINE(301)
													Float t = c11->radius;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(301)
													{
													}
													HX_STACK_LINE(301)
													w1->x = (c11->worldCOMx + (nx * t));
													HX_STACK_LINE(301)
													w1->y = (c11->worldCOMy + (ny * t));
												}
												HX_STACK_LINE(301)
												{
													HX_STACK_LINE(301)
													Float t = -(c21->radius);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(301)
													{
													}
													HX_STACK_LINE(301)
													w2->x = (c21->worldCOMx + (nx * t));
													HX_STACK_LINE(301)
													w2->y = (c21->worldCOMy + (ny * t));
												}
												HX_STACK_LINE(301)
												{
													HX_STACK_LINE(301)
													axis->x = nx;
													HX_STACK_LINE(301)
													axis->y = ny;
													HX_STACK_LINE(301)
													{
													}
													HX_STACK_LINE(301)
													{
													}
												}
											}
										}
										HX_STACK_LINE(301)
										return dist;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::geom::ZPP_Vec2 &w1){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
									{
										HX_STACK_LINE(301)
										bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
										HX_STACK_LINE(301)
										if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
											HX_STACK_LINE(301)
											::zpp_nape::shape::ZPP_Shape tmp = s11;		HX_STACK_VAR(tmp,"tmp");
											HX_STACK_LINE(301)
											s11 = s21;
											HX_STACK_LINE(301)
											s21 = tmp;
											HX_STACK_LINE(301)
											::zpp_nape::geom::ZPP_Vec2 tmp2 = w1;		HX_STACK_VAR(tmp2,"tmp2");
											HX_STACK_LINE(301)
											w1 = w2;
											HX_STACK_LINE(301)
											w2 = tmp2;
											HX_STACK_LINE(301)
											swapped = true;
										}
										struct _Function_5_1{
											inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
												{
													HX_STACK_LINE(301)
													::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
													HX_STACK_LINE(301)
													::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
													HX_STACK_LINE(301)
													Float best = -1e+100;		HX_STACK_VAR(best,"best");
													HX_STACK_LINE(301)
													::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
													HX_STACK_LINE(301)
													{
														HX_STACK_LINE(301)
														::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(301)
														while(((cx_ite != null()))){
															HX_STACK_LINE(301)
															::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(301)
															{
																HX_STACK_LINE(301)
																Float dist = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist,"dist");
																HX_STACK_LINE(301)
																if (((dist > upperBound))){
																	HX_STACK_LINE(301)
																	best = dist;
																	HX_STACK_LINE(301)
																	break;
																}
																HX_STACK_LINE(301)
																if (((dist > (int)0))){
																	HX_STACK_LINE(301)
																	if (((dist > best))){
																		HX_STACK_LINE(301)
																		best = dist;
																		HX_STACK_LINE(301)
																		a0 = a;
																	}
																}
																else{
																	HX_STACK_LINE(301)
																	if (((bool((best < (int)0)) && bool((dist > best))))){
																		HX_STACK_LINE(301)
																		best = dist;
																		HX_STACK_LINE(301)
																		a0 = a;
																	}
																}
															}
															HX_STACK_LINE(301)
															cx_ite = cx_ite->next;
														}
													}
													HX_STACK_LINE(301)
													if (((best < upperBound))){
														HX_STACK_LINE(301)
														::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
														HX_STACK_LINE(301)
														::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
														HX_STACK_LINE(301)
														Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
														HX_STACK_LINE(301)
														if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
															HX_STACK_LINE(301)
															Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
															HX_STACK_LINE(301)
															Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
															HX_STACK_LINE(301)
															{
																HX_STACK_LINE(301)
																nx = (circle->worldCOMx - v0->x);
																HX_STACK_LINE(301)
																ny = (circle->worldCOMy - v0->y);
															}
															struct _Function_8_1{
																inline static Float Block( Float &nx,Float &ny){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
																	{
																		HX_STACK_LINE(301)
																		{
																		}
																		HX_STACK_LINE(301)
																		return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(301)
															Float len = _Function_8_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
															HX_STACK_LINE(301)
															best = (len - circle->radius);
															HX_STACK_LINE(301)
															if (((best < upperBound))){
																HX_STACK_LINE(301)
																if (((len == (int)0))){
																	HX_STACK_LINE(301)
																	nx = (int)1;
																	HX_STACK_LINE(301)
																	ny = (int)0;
																	HX_STACK_LINE(301)
																	{
																	}
																	HX_STACK_LINE(301)
																	{
																	}
																}
																else{
																	HX_STACK_LINE(301)
																	Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(301)
																	{
																	}
																	HX_STACK_LINE(301)
																	hx::MultEq(nx,t);
																	HX_STACK_LINE(301)
																	hx::MultEq(ny,t);
																}
																HX_STACK_LINE(301)
																{
																	HX_STACK_LINE(301)
																	int t = (int)0;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(301)
																	{
																	}
																	HX_STACK_LINE(301)
																	w1->x = (v0->x + (nx * t));
																	HX_STACK_LINE(301)
																	w1->y = (v0->y + (ny * t));
																}
																HX_STACK_LINE(301)
																{
																	HX_STACK_LINE(301)
																	Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(301)
																	{
																	}
																	HX_STACK_LINE(301)
																	w2->x = (circle->worldCOMx + (nx * t));
																	HX_STACK_LINE(301)
																	w2->y = (circle->worldCOMy + (ny * t));
																}
																HX_STACK_LINE(301)
																{
																	HX_STACK_LINE(301)
																	axis->x = nx;
																	HX_STACK_LINE(301)
																	axis->y = ny;
																	HX_STACK_LINE(301)
																	{
																	}
																	HX_STACK_LINE(301)
																	{
																	}
																}
															}
														}
														else{
															HX_STACK_LINE(301)
															if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
																HX_STACK_LINE(301)
																Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
																HX_STACK_LINE(301)
																Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
																HX_STACK_LINE(301)
																{
																	HX_STACK_LINE(301)
																	nx = (circle->worldCOMx - v1->x);
																	HX_STACK_LINE(301)
																	ny = (circle->worldCOMy - v1->y);
																}
																struct _Function_9_1{
																	inline static Float Block( Float &nx,Float &ny){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
																		{
																			HX_STACK_LINE(301)
																			{
																			}
																			HX_STACK_LINE(301)
																			return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(301)
																Float len = _Function_9_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
																HX_STACK_LINE(301)
																best = (len - circle->radius);
																HX_STACK_LINE(301)
																if (((best < upperBound))){
																	HX_STACK_LINE(301)
																	if (((len == (int)0))){
																		HX_STACK_LINE(301)
																		nx = (int)1;
																		HX_STACK_LINE(301)
																		ny = (int)0;
																		HX_STACK_LINE(301)
																		{
																		}
																		HX_STACK_LINE(301)
																		{
																		}
																	}
																	else{
																		HX_STACK_LINE(301)
																		Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
																		HX_STACK_LINE(301)
																		{
																		}
																		HX_STACK_LINE(301)
																		hx::MultEq(nx,t);
																		HX_STACK_LINE(301)
																		hx::MultEq(ny,t);
																	}
																	HX_STACK_LINE(301)
																	{
																		HX_STACK_LINE(301)
																		int t = (int)0;		HX_STACK_VAR(t,"t");
																		HX_STACK_LINE(301)
																		{
																		}
																		HX_STACK_LINE(301)
																		w1->x = (v1->x + (nx * t));
																		HX_STACK_LINE(301)
																		w1->y = (v1->y + (ny * t));
																	}
																	HX_STACK_LINE(301)
																	{
																		HX_STACK_LINE(301)
																		Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																		HX_STACK_LINE(301)
																		{
																		}
																		HX_STACK_LINE(301)
																		w2->x = (circle->worldCOMx + (nx * t));
																		HX_STACK_LINE(301)
																		w2->y = (circle->worldCOMy + (ny * t));
																	}
																	HX_STACK_LINE(301)
																	{
																		HX_STACK_LINE(301)
																		axis->x = nx;
																		HX_STACK_LINE(301)
																		axis->y = ny;
																		HX_STACK_LINE(301)
																		{
																		}
																		HX_STACK_LINE(301)
																		{
																		}
																	}
																}
															}
															else{
																HX_STACK_LINE(301)
																{
																	HX_STACK_LINE(301)
																	Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(301)
																	{
																	}
																	HX_STACK_LINE(301)
																	w2->x = (circle->worldCOMx + (a0->gnormx * t));
																	HX_STACK_LINE(301)
																	w2->y = (circle->worldCOMy + (a0->gnormy * t));
																}
																HX_STACK_LINE(301)
																{
																	HX_STACK_LINE(301)
																	Float t = -(best);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(301)
																	{
																	}
																	HX_STACK_LINE(301)
																	w1->x = (w2->x + (a0->gnormx * t));
																	HX_STACK_LINE(301)
																	w1->y = (w2->y + (a0->gnormy * t));
																}
																HX_STACK_LINE(301)
																{
																	HX_STACK_LINE(301)
																	axis->x = a0->gnormx;
																	HX_STACK_LINE(301)
																	axis->y = a0->gnormy;
																	HX_STACK_LINE(301)
																	{
																	}
																	HX_STACK_LINE(301)
																	{
																	}
																}
															}
														}
													}
													HX_STACK_LINE(301)
													if ((swapped)){
														HX_STACK_LINE(301)
														axis->x = -(axis->x);
														HX_STACK_LINE(301)
														axis->y = -(axis->y);
													}
													HX_STACK_LINE(301)
													return best;
												}
												return null();
											}
										};
										struct _Function_5_2{
											inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
												{
													HX_STACK_LINE(301)
													::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
													HX_STACK_LINE(301)
													::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
													HX_STACK_LINE(301)
													Float best = -1e+100;		HX_STACK_VAR(best,"best");
													HX_STACK_LINE(301)
													::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
													HX_STACK_LINE(301)
													::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
													HX_STACK_LINE(301)
													int besti = (int)0;		HX_STACK_VAR(besti,"besti");
													HX_STACK_LINE(301)
													{
														HX_STACK_LINE(301)
														::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p1->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(301)
														while(((cx_ite != null()))){
															HX_STACK_LINE(301)
															::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(301)
															{
																HX_STACK_LINE(301)
																Float min = 1e100;		HX_STACK_VAR(min,"min");
																HX_STACK_LINE(301)
																{
																	HX_STACK_LINE(301)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p2->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																	HX_STACK_LINE(301)
																	while(((cx_ite1 != null()))){
																		HX_STACK_LINE(301)
																		::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																		HX_STACK_LINE(301)
																		{
																			HX_STACK_LINE(301)
																			Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																			HX_STACK_LINE(301)
																			if (((k < min))){
																				HX_STACK_LINE(301)
																				min = k;
																			}
																		}
																		HX_STACK_LINE(301)
																		cx_ite1 = cx_ite1->next;
																	}
																}
																HX_STACK_LINE(301)
																hx::SubEq(min,a->gprojection);
																HX_STACK_LINE(301)
																if (((min > upperBound))){
																	HX_STACK_LINE(301)
																	best = min;
																	HX_STACK_LINE(301)
																	break;
																}
																HX_STACK_LINE(301)
																if (((min > (int)0))){
																	HX_STACK_LINE(301)
																	if (((min > best))){
																		HX_STACK_LINE(301)
																		best = min;
																		HX_STACK_LINE(301)
																		a1 = a;
																		HX_STACK_LINE(301)
																		besti = (int)1;
																	}
																}
																else{
																	HX_STACK_LINE(301)
																	if (((bool((best < (int)0)) && bool((min > best))))){
																		HX_STACK_LINE(301)
																		best = min;
																		HX_STACK_LINE(301)
																		a1 = a;
																		HX_STACK_LINE(301)
																		besti = (int)1;
																	}
																}
															}
															HX_STACK_LINE(301)
															cx_ite = cx_ite->next;
														}
													}
													struct _Function_6_1{
														inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Edge &a2,Float &best,::zpp_nape::shape::ZPP_Edge &a1,::zpp_nape::shape::ZPP_Polygon &p2,int &besti,Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::shape::ZPP_Polygon &p1,::zpp_nape::geom::ZPP_Vec2 &w1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
															{
																HX_STACK_LINE(301)
																{
																	HX_STACK_LINE(301)
																	::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
																	HX_STACK_LINE(301)
																	while(((cx_ite != null()))){
																		HX_STACK_LINE(301)
																		::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
																		HX_STACK_LINE(301)
																		{
																			HX_STACK_LINE(301)
																			Float min = 1e100;		HX_STACK_VAR(min,"min");
																			HX_STACK_LINE(301)
																			{
																				HX_STACK_LINE(301)
																				::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p1->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																				HX_STACK_LINE(301)
																				while(((cx_ite1 != null()))){
																					HX_STACK_LINE(301)
																					::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																					HX_STACK_LINE(301)
																					{
																						HX_STACK_LINE(301)
																						Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																						HX_STACK_LINE(301)
																						if (((k < min))){
																							HX_STACK_LINE(301)
																							min = k;
																						}
																					}
																					HX_STACK_LINE(301)
																					cx_ite1 = cx_ite1->next;
																				}
																			}
																			HX_STACK_LINE(301)
																			hx::SubEq(min,a->gprojection);
																			HX_STACK_LINE(301)
																			if (((min > upperBound))){
																				HX_STACK_LINE(301)
																				best = min;
																				HX_STACK_LINE(301)
																				break;
																			}
																			HX_STACK_LINE(301)
																			if (((min > (int)0))){
																				HX_STACK_LINE(301)
																				if (((min > best))){
																					HX_STACK_LINE(301)
																					best = min;
																					HX_STACK_LINE(301)
																					a2 = a;
																					HX_STACK_LINE(301)
																					besti = (int)2;
																				}
																			}
																			else{
																				HX_STACK_LINE(301)
																				if (((bool((best < (int)0)) && bool((min > best))))){
																					HX_STACK_LINE(301)
																					best = min;
																					HX_STACK_LINE(301)
																					a2 = a;
																					HX_STACK_LINE(301)
																					besti = (int)2;
																				}
																			}
																		}
																		HX_STACK_LINE(301)
																		cx_ite = cx_ite->next;
																	}
																}
																struct _Function_7_1{
																	inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Edge &a2,Float &best,::zpp_nape::shape::ZPP_Edge &a1,::zpp_nape::shape::ZPP_Polygon &p2,int &besti,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::shape::ZPP_Polygon &p1){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
																		{
																			HX_STACK_LINE(301)
																			::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
																			::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
																			HX_STACK_LINE(301)
																			::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
																			HX_STACK_LINE(301)
																			if (((besti == (int)1))){
																				HX_STACK_LINE(301)
																				q1 = p1;
																				HX_STACK_LINE(301)
																				q2 = p2;
																				HX_STACK_LINE(301)
																				ax = a1;
																			}
																			else{
																				HX_STACK_LINE(301)
																				q1 = p2;
																				HX_STACK_LINE(301)
																				q2 = p1;
																				HX_STACK_LINE(301)
																				ax = a2;
																				HX_STACK_LINE(301)
																				::zpp_nape::geom::ZPP_Vec2 tmp = w1;		HX_STACK_VAR(tmp,"tmp");
																				HX_STACK_LINE(301)
																				w1 = w2;
																				HX_STACK_LINE(301)
																				w2 = tmp;
																				HX_STACK_LINE(301)
																				swapped = !(swapped);
																			}
																			HX_STACK_LINE(301)
																			::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
																			HX_STACK_LINE(301)
																			Float min = 1e100;		HX_STACK_VAR(min,"min");
																			HX_STACK_LINE(301)
																			{
																				HX_STACK_LINE(301)
																				::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = q2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
																				HX_STACK_LINE(301)
																				while(((cx_ite != null()))){
																					HX_STACK_LINE(301)
																					::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
																					HX_STACK_LINE(301)
																					{
																						HX_STACK_LINE(301)
																						Float k = ((ax->gnormx * a->gnormx) + (ax->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
																						HX_STACK_LINE(301)
																						if (((k < min))){
																							HX_STACK_LINE(301)
																							min = k;
																							HX_STACK_LINE(301)
																							ay = a;
																						}
																					}
																					HX_STACK_LINE(301)
																					cx_ite = cx_ite->next;
																				}
																			}
																			HX_STACK_LINE(301)
																			if ((swapped)){
																				HX_STACK_LINE(301)
																				axis->x = -(ax->gnormx);
																				HX_STACK_LINE(301)
																				axis->y = -(ax->gnormy);
																				HX_STACK_LINE(301)
																				{
																				}
																				HX_STACK_LINE(301)
																				{
																				}
																			}
																			else{
																				HX_STACK_LINE(301)
																				axis->x = ax->gnormx;
																				HX_STACK_LINE(301)
																				axis->y = ax->gnormy;
																				HX_STACK_LINE(301)
																				{
																				}
																				HX_STACK_LINE(301)
																				{
																				}
																			}
																			struct _Function_8_1{
																				inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Edge &ay,::zpp_nape::shape::ZPP_Edge &ax,Float &best,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1){
																					HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
																					{
																						HX_STACK_LINE(301)
																						::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
																						HX_STACK_LINE(301)
																						::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
																						HX_STACK_LINE(301)
																						::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
																						HX_STACK_LINE(301)
																						::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
																						HX_STACK_LINE(301)
																						Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
																						HX_STACK_LINE(301)
																						Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
																						HX_STACK_LINE(301)
																						Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
																						HX_STACK_LINE(301)
																						Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
																						HX_STACK_LINE(301)
																						{
																							HX_STACK_LINE(301)
																							vx = (v1->x - v0->x);
																							HX_STACK_LINE(301)
																							vy = (v1->y - v0->y);
																						}
																						HX_STACK_LINE(301)
																						{
																							HX_STACK_LINE(301)
																							qx = (q11->x - q0->x);
																							HX_STACK_LINE(301)
																							qy = (q11->y - q0->y);
																						}
																						HX_STACK_LINE(301)
																						Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
																						HX_STACK_LINE(301)
																						Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
																						HX_STACK_LINE(301)
																						Float t1 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t1,"t1");
																						HX_STACK_LINE(301)
																						Float t2 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t2,"t2");
																						HX_STACK_LINE(301)
																						Float s12 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s12,"s12");
																						HX_STACK_LINE(301)
																						Float s22 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s22,"s22");
																						HX_STACK_LINE(301)
																						if (((t1 < (int)0))){
																							HX_STACK_LINE(301)
																							t1 = (int)0;
																						}
																						else{
																							HX_STACK_LINE(301)
																							if (((t1 > (int)1))){
																								HX_STACK_LINE(301)
																								t1 = (int)1;
																							}
																						}
																						HX_STACK_LINE(301)
																						if (((t2 < (int)0))){
																							HX_STACK_LINE(301)
																							t2 = (int)0;
																						}
																						else{
																							HX_STACK_LINE(301)
																							if (((t2 > (int)1))){
																								HX_STACK_LINE(301)
																								t2 = (int)1;
																							}
																						}
																						HX_STACK_LINE(301)
																						if (((s12 < (int)0))){
																							HX_STACK_LINE(301)
																							s12 = (int)0;
																						}
																						else{
																							HX_STACK_LINE(301)
																							if (((s12 > (int)1))){
																								HX_STACK_LINE(301)
																								s12 = (int)1;
																							}
																						}
																						HX_STACK_LINE(301)
																						if (((s22 < (int)0))){
																							HX_STACK_LINE(301)
																							s22 = (int)0;
																						}
																						else{
																							HX_STACK_LINE(301)
																							if (((s22 > (int)1))){
																								HX_STACK_LINE(301)
																								s22 = (int)1;
																							}
																						}
																						HX_STACK_LINE(301)
																						Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
																						HX_STACK_LINE(301)
																						Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
																						HX_STACK_LINE(301)
																						{
																							HX_STACK_LINE(301)
																							Float t = t1;		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(301)
																							{
																							}
																							HX_STACK_LINE(301)
																							f1x = (v0->x + (vx * t));
																							HX_STACK_LINE(301)
																							f1y = (v0->y + (vy * t));
																						}
																						HX_STACK_LINE(301)
																						Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
																						HX_STACK_LINE(301)
																						Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
																						HX_STACK_LINE(301)
																						{
																							HX_STACK_LINE(301)
																							Float t = t2;		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(301)
																							{
																							}
																							HX_STACK_LINE(301)
																							f2x = (v0->x + (vx * t));
																							HX_STACK_LINE(301)
																							f2y = (v0->y + (vy * t));
																						}
																						HX_STACK_LINE(301)
																						Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
																						HX_STACK_LINE(301)
																						Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
																						HX_STACK_LINE(301)
																						{
																							HX_STACK_LINE(301)
																							Float t = s12;		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(301)
																							{
																							}
																							HX_STACK_LINE(301)
																							g1x = (q0->x + (qx * t));
																							HX_STACK_LINE(301)
																							g1y = (q0->y + (qy * t));
																						}
																						HX_STACK_LINE(301)
																						Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
																						HX_STACK_LINE(301)
																						Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
																						HX_STACK_LINE(301)
																						{
																							HX_STACK_LINE(301)
																							Float t = s22;		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(301)
																							{
																							}
																							HX_STACK_LINE(301)
																							g2x = (q0->x + (qx * t));
																							HX_STACK_LINE(301)
																							g2y = (q0->y + (qy * t));
																						}
																						struct _Function_9_1{
																							inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &q0,Float &f1y,Float &f1x){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
																								{
																									HX_STACK_LINE(301)
																									Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																									HX_STACK_LINE(301)
																									Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																									HX_STACK_LINE(301)
																									{
																										HX_STACK_LINE(301)
																										dx = (f1x - q0->x);
																										HX_STACK_LINE(301)
																										dy = (f1y - q0->y);
																									}
																									HX_STACK_LINE(301)
																									return ((dx * dx) + (dy * dy));
																								}
																								return null();
																							}
																						};
																						HX_STACK_LINE(301)
																						Float d1 = _Function_9_1::Block(q0,f1y,f1x);		HX_STACK_VAR(d1,"d1");
																						struct _Function_9_2{
																							inline static Float Block( Float &f2x,::zpp_nape::geom::ZPP_Vec2 &q11,Float &f2y){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
																								{
																									HX_STACK_LINE(301)
																									Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																									HX_STACK_LINE(301)
																									Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																									HX_STACK_LINE(301)
																									{
																										HX_STACK_LINE(301)
																										dx = (f2x - q11->x);
																										HX_STACK_LINE(301)
																										dy = (f2y - q11->y);
																									}
																									HX_STACK_LINE(301)
																									return ((dx * dx) + (dy * dy));
																								}
																								return null();
																							}
																						};
																						HX_STACK_LINE(301)
																						Float d2 = _Function_9_2::Block(f2x,q11,f2y);		HX_STACK_VAR(d2,"d2");
																						struct _Function_9_3{
																							inline static Float Block( Float &g1x,::zpp_nape::geom::ZPP_Vec2 &v0,Float &g1y){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
																								{
																									HX_STACK_LINE(301)
																									Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																									HX_STACK_LINE(301)
																									Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																									HX_STACK_LINE(301)
																									{
																										HX_STACK_LINE(301)
																										dx = (g1x - v0->x);
																										HX_STACK_LINE(301)
																										dy = (g1y - v0->y);
																									}
																									HX_STACK_LINE(301)
																									return ((dx * dx) + (dy * dy));
																								}
																								return null();
																							}
																						};
																						HX_STACK_LINE(301)
																						Float e1 = _Function_9_3::Block(g1x,v0,g1y);		HX_STACK_VAR(e1,"e1");
																						struct _Function_9_4{
																							inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &v1,Float &g2y,Float &g2x){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
																								{
																									HX_STACK_LINE(301)
																									Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																									HX_STACK_LINE(301)
																									Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																									HX_STACK_LINE(301)
																									{
																										HX_STACK_LINE(301)
																										dx = (g2x - v1->x);
																										HX_STACK_LINE(301)
																										dy = (g2y - v1->y);
																									}
																									HX_STACK_LINE(301)
																									return ((dx * dx) + (dy * dy));
																								}
																								return null();
																							}
																						};
																						HX_STACK_LINE(301)
																						Float e2 = _Function_9_4::Block(v1,g2y,g2x);		HX_STACK_VAR(e2,"e2");
																						HX_STACK_LINE(301)
																						Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
																						HX_STACK_LINE(301)
																						Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
																						HX_STACK_LINE(301)
																						::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
																						HX_STACK_LINE(301)
																						if (((d1 < d2))){
																							HX_STACK_LINE(301)
																							{
																								HX_STACK_LINE(301)
																								minfx = f1x;
																								HX_STACK_LINE(301)
																								minfy = f1y;
																								HX_STACK_LINE(301)
																								{
																								}
																								HX_STACK_LINE(301)
																								{
																								}
																							}
																							HX_STACK_LINE(301)
																							minq = q0;
																						}
																						else{
																							HX_STACK_LINE(301)
																							{
																								HX_STACK_LINE(301)
																								minfx = f2x;
																								HX_STACK_LINE(301)
																								minfy = f2y;
																								HX_STACK_LINE(301)
																								{
																								}
																								HX_STACK_LINE(301)
																								{
																								}
																							}
																							HX_STACK_LINE(301)
																							minq = q11;
																							HX_STACK_LINE(301)
																							d1 = d2;
																						}
																						HX_STACK_LINE(301)
																						Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
																						HX_STACK_LINE(301)
																						Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
																						HX_STACK_LINE(301)
																						::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
																						HX_STACK_LINE(301)
																						if (((e1 < e2))){
																							HX_STACK_LINE(301)
																							{
																								HX_STACK_LINE(301)
																								mingx = g1x;
																								HX_STACK_LINE(301)
																								mingy = g1y;
																								HX_STACK_LINE(301)
																								{
																								}
																								HX_STACK_LINE(301)
																								{
																								}
																							}
																							HX_STACK_LINE(301)
																							minv = v0;
																						}
																						else{
																							HX_STACK_LINE(301)
																							{
																								HX_STACK_LINE(301)
																								mingx = g2x;
																								HX_STACK_LINE(301)
																								mingy = g2y;
																								HX_STACK_LINE(301)
																								{
																								}
																								HX_STACK_LINE(301)
																								{
																								}
																							}
																							HX_STACK_LINE(301)
																							minv = v1;
																							HX_STACK_LINE(301)
																							e1 = e2;
																						}
																						HX_STACK_LINE(301)
																						if (((d1 < e1))){
																							HX_STACK_LINE(301)
																							{
																								HX_STACK_LINE(301)
																								w1->x = minfx;
																								HX_STACK_LINE(301)
																								w1->y = minfy;
																								HX_STACK_LINE(301)
																								{
																								}
																								HX_STACK_LINE(301)
																								{
																								}
																							}
																							HX_STACK_LINE(301)
																							{
																								HX_STACK_LINE(301)
																								w2->x = minq->x;
																								HX_STACK_LINE(301)
																								w2->y = minq->y;
																								HX_STACK_LINE(301)
																								{
																								}
																								HX_STACK_LINE(301)
																								{
																								}
																							}
																							HX_STACK_LINE(301)
																							best = ::Math_obj::sqrt(d1);
																						}
																						else{
																							HX_STACK_LINE(301)
																							{
																								HX_STACK_LINE(301)
																								w2->x = mingx;
																								HX_STACK_LINE(301)
																								w2->y = mingy;
																								HX_STACK_LINE(301)
																								{
																								}
																								HX_STACK_LINE(301)
																								{
																								}
																							}
																							HX_STACK_LINE(301)
																							{
																								HX_STACK_LINE(301)
																								w1->x = minv->x;
																								HX_STACK_LINE(301)
																								w1->y = minv->y;
																								HX_STACK_LINE(301)
																								{
																								}
																								HX_STACK_LINE(301)
																								{
																								}
																							}
																							HX_STACK_LINE(301)
																							best = ::Math_obj::sqrt(e1);
																						}
																						HX_STACK_LINE(301)
																						if (((best != (int)0))){
																							HX_STACK_LINE(301)
																							{
																								HX_STACK_LINE(301)
																								axis->x = (w2->x - w1->x);
																								HX_STACK_LINE(301)
																								axis->y = (w2->y - w1->y);
																							}
																							HX_STACK_LINE(301)
																							{
																								HX_STACK_LINE(301)
																								Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
																								HX_STACK_LINE(301)
																								{
																								}
																								HX_STACK_LINE(301)
																								hx::MultEq(axis->x,t);
																								HX_STACK_LINE(301)
																								hx::MultEq(axis->y,t);
																							}
																							HX_STACK_LINE(301)
																							if ((swapped)){
																								HX_STACK_LINE(301)
																								axis->x = -(axis->x);
																								HX_STACK_LINE(301)
																								axis->y = -(axis->y);
																							}
																						}
																						HX_STACK_LINE(301)
																						return best;
																					}
																					return null();
																				}
																			};
																			struct _Function_8_2{
																				inline static Float Block( ::zpp_nape::shape::ZPP_Edge &ay,::zpp_nape::shape::ZPP_Edge &ax,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &w1){
																					HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
																					{
																						HX_STACK_LINE(301)
																						Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
																						HX_STACK_LINE(301)
																						Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
																						HX_STACK_LINE(301)
																						{
																							HX_STACK_LINE(301)
																							c0x = ay->gp0->x;
																							HX_STACK_LINE(301)
																							c0y = ay->gp0->y;
																							HX_STACK_LINE(301)
																							{
																							}
																							HX_STACK_LINE(301)
																							{
																							}
																						}
																						HX_STACK_LINE(301)
																						Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
																						HX_STACK_LINE(301)
																						Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
																						HX_STACK_LINE(301)
																						{
																							HX_STACK_LINE(301)
																							c1x = ay->gp1->x;
																							HX_STACK_LINE(301)
																							c1y = ay->gp1->y;
																							HX_STACK_LINE(301)
																							{
																							}
																							HX_STACK_LINE(301)
																							{
																							}
																						}
																						HX_STACK_LINE(301)
																						Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
																						HX_STACK_LINE(301)
																						Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
																						HX_STACK_LINE(301)
																						{
																							HX_STACK_LINE(301)
																							dvx = (c1x - c0x);
																							HX_STACK_LINE(301)
																							dvy = (c1y - c0y);
																						}
																						HX_STACK_LINE(301)
																						Float d0 = ((ax->gnormy * c0x) - (ax->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
																						HX_STACK_LINE(301)
																						Float d1 = ((ax->gnormy * c1x) - (ax->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
																						HX_STACK_LINE(301)
																						Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
																						HX_STACK_LINE(301)
																						Float t = (((-(ax->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(301)
																						if (((t > ::nape::Config_obj::epsilon))){
																							HX_STACK_LINE(301)
																							Float t1 = t;		HX_STACK_VAR(t1,"t1");
																							HX_STACK_LINE(301)
																							{
																							}
																							HX_STACK_LINE(301)
																							hx::AddEq(c0x,(dvx * t1));
																							HX_STACK_LINE(301)
																							hx::AddEq(c0y,(dvy * t1));
																						}
																						HX_STACK_LINE(301)
																						Float t1 = (((-(ax->tp0) - d1)) * den);		HX_STACK_VAR(t1,"t1");
																						HX_STACK_LINE(301)
																						if (((t1 < -(::nape::Config_obj::epsilon)))){
																							HX_STACK_LINE(301)
																							Float t2 = t1;		HX_STACK_VAR(t2,"t2");
																							HX_STACK_LINE(301)
																							{
																							}
																							HX_STACK_LINE(301)
																							hx::AddEq(c1x,(dvx * t2));
																							HX_STACK_LINE(301)
																							hx::AddEq(c1y,(dvy * t2));
																						}
																						HX_STACK_LINE(301)
																						Float c0d = (((c0x * ax->gnormx) + (c0y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c0d,"c0d");
																						HX_STACK_LINE(301)
																						Float c1d = (((c1x * ax->gnormx) + (c1y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c1d,"c1d");
																						struct _Function_9_1{
																							inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w2,Float &c0y,Float &c0d,::zpp_nape::shape::ZPP_Edge &ax,Float &c0x,::zpp_nape::geom::ZPP_Vec2 &w1){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
																								{
																									HX_STACK_LINE(301)
																									{
																										HX_STACK_LINE(301)
																										w2->x = c0x;
																										HX_STACK_LINE(301)
																										w2->y = c0y;
																										HX_STACK_LINE(301)
																										{
																										}
																										HX_STACK_LINE(301)
																										{
																										}
																									}
																									HX_STACK_LINE(301)
																									{
																										HX_STACK_LINE(301)
																										Float t2 = -(c0d);		HX_STACK_VAR(t2,"t2");
																										HX_STACK_LINE(301)
																										{
																										}
																										HX_STACK_LINE(301)
																										w1->x = (w2->x + (ax->gnormx * t2));
																										HX_STACK_LINE(301)
																										w1->y = (w2->y + (ax->gnormy * t2));
																									}
																									HX_STACK_LINE(301)
																									return c0d;
																								}
																								return null();
																							}
																						};
																						struct _Function_9_2{
																							inline static Float Block( Float &c1y,Float &c1d,::zpp_nape::geom::ZPP_Vec2 &w2,Float &c1x,::zpp_nape::shape::ZPP_Edge &ax,::zpp_nape::geom::ZPP_Vec2 &w1){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",301);
																								{
																									HX_STACK_LINE(301)
																									{
																										HX_STACK_LINE(301)
																										w2->x = c1x;
																										HX_STACK_LINE(301)
																										w2->y = c1y;
																										HX_STACK_LINE(301)
																										{
																										}
																										HX_STACK_LINE(301)
																										{
																										}
																									}
																									HX_STACK_LINE(301)
																									{
																										HX_STACK_LINE(301)
																										Float t2 = -(c1d);		HX_STACK_VAR(t2,"t2");
																										HX_STACK_LINE(301)
																										{
																										}
																										HX_STACK_LINE(301)
																										w1->x = (w2->x + (ax->gnormx * t2));
																										HX_STACK_LINE(301)
																										w1->y = (w2->y + (ax->gnormy * t2));
																									}
																									HX_STACK_LINE(301)
																									return c1d;
																								}
																								return null();
																							}
																						};
																						HX_STACK_LINE(301)
																						return (  (((c0d < c1d))) ? Float(_Function_9_1::Block(w2,c0y,c0d,ax,c0x,w1)) : Float(_Function_9_2::Block(c1y,c1d,w2,c1x,ax,w1)) );
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(301)
																			return (  (((best >= (int)0))) ? Float(_Function_8_1::Block(swapped,ay,ax,best,w2,axis,w1)) : Float(_Function_8_2::Block(ay,ax,w2,w1)) );
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(301)
																return (  (((best < upperBound))) ? Float(_Function_7_1::Block(swapped,a2,best,a1,p2,besti,w2,axis,w1,p1)) : Float(upperBound) );
															}
															return null();
														}
													};
													HX_STACK_LINE(301)
													return (  (((best < upperBound))) ? Float(_Function_6_1::Block(swapped,a2,best,a1,p2,besti,upperBound,w2,axis,p1,w1)) : Float(upperBound) );
												}
												return null();
											}
										};
										HX_STACK_LINE(301)
										return (  (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))) ? Float(_Function_5_1::Block(swapped,s11,s21,w2,upperBound,axis,w1)) : Float(_Function_5_2::Block(swapped,s11,s21,w2,upperBound,axis,w1)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(301)
							return (  (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))) ? Float(_Function_4_1::Block(upperBound,axis,s21,w2,s11,w1)) : Float(_Function_4_2::Block(upperBound,axis,s21,w2,s11,w1)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(301)
				Float sep1 = (_Function_3_1::Block(s1,c2,axis,c1,s2) + negRadius);		HX_STACK_VAR(sep1,"sep1");
				HX_STACK_LINE(302)
				Float dot1 = ((deltax * axis->x) + (deltay * axis->y));		HX_STACK_VAR(dot1,"dot1");
				HX_STACK_LINE(303)
				if (((sep1 < ::nape::Config_obj::distanceThresholdCCD))){
					HX_STACK_LINE(304)
					if ((userAPI)){
						HX_STACK_LINE(304)
						break;
					}
					HX_STACK_LINE(307)
					Float d1x = 0.0;		HX_STACK_VAR(d1x,"d1x");
					HX_STACK_LINE(308)
					Float d1y = 0.0;		HX_STACK_VAR(d1y,"d1y");
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(310)
						d1x = (c1->x - b1->posx);
						HX_STACK_LINE(311)
						d1y = (c1->y - b1->posy);
					}
					HX_STACK_LINE(313)
					Float d2x = 0.0;		HX_STACK_VAR(d2x,"d2x");
					HX_STACK_LINE(314)
					Float d2y = 0.0;		HX_STACK_VAR(d2y,"d2y");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(316)
						d2x = (c2->x - b2->posx);
						HX_STACK_LINE(317)
						d2y = (c2->y - b2->posy);
					}
					HX_STACK_LINE(319)
					Float proj = ((dot1 - (b1->sweep_angvel * (((axis->y * d1x) - (axis->x * d1y))))) + (b2->sweep_angvel * (((axis->y * d2x) - (axis->x * d2y)))));		HX_STACK_VAR(proj,"proj");
					HX_STACK_LINE(320)
					if (((proj > (int)0))){
						HX_STACK_LINE(320)
						toi->slipped = true;
					}
					HX_STACK_LINE(323)
					if (((bool((proj <= (int)0)) || bool((sep1 < (::nape::Config_obj::distanceThresholdCCD * 0.5)))))){
						HX_STACK_LINE(323)
						break;
					}
				}
				HX_STACK_LINE(327)
				curTOI = (int)-1;
				HX_STACK_LINE(328)
				break;
			}
			HX_STACK_LINE(330)
			if (((++(curIter) >= (int)40))){
				HX_STACK_LINE(331)
				if (((sep > negRadius))){
					HX_STACK_LINE(331)
					toi->failed = true;
				}
				HX_STACK_LINE(334)
				break;
			}
		}
		HX_STACK_LINE(337)
		toi->toi = curTOI;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ZPP_SweepDistance_obj,dynamicSweep,(void))

Void ZPP_SweepDistance_obj::staticSweep( ::zpp_nape::geom::ZPP_ToiEvent toi,Float timeStep,Float lowerBound,Float negRadius){
{
		HX_STACK_PUSH("ZPP_SweepDistance::staticSweep","zpp_nape/geom/SweepDistance.hx",339);
		HX_STACK_ARG(toi,"toi");
		HX_STACK_ARG(timeStep,"timeStep");
		HX_STACK_ARG(lowerBound,"lowerBound");
		HX_STACK_ARG(negRadius,"negRadius");
		HX_STACK_LINE(340)
		::zpp_nape::shape::ZPP_Shape s1 = toi->s1;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(341)
		::zpp_nape::shape::ZPP_Shape s2 = toi->s2;		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(342)
		::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(343)
		::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(344)
		Float deltax = 0.0;		HX_STACK_VAR(deltax,"deltax");
		HX_STACK_LINE(345)
		Float deltay = 0.0;		HX_STACK_VAR(deltay,"deltay");
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(347)
			deltax = -(b1->velx);
			HX_STACK_LINE(348)
			deltay = -(b1->vely);
			HX_STACK_LINE(349)
			{
			}
			HX_STACK_LINE(357)
			{
			}
		}
		HX_STACK_LINE(366)
		Float ang1 = b1->sweep_angvel;		HX_STACK_VAR(ang1,"ang1");
		HX_STACK_LINE(367)
		if (((ang1 < (int)0))){
			HX_STACK_LINE(367)
			ang1 = -(ang1);
		}
		HX_STACK_LINE(368)
		Float angBias = (s1->sweepCoef * ang1);		HX_STACK_VAR(angBias,"angBias");
		HX_STACK_LINE(369)
		::zpp_nape::geom::ZPP_Vec2 c1 = toi->c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(370)
		::zpp_nape::geom::ZPP_Vec2 c2 = toi->c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(371)
		::zpp_nape::geom::ZPP_Vec2 axis = toi->axis;		HX_STACK_VAR(axis,"axis");
		HX_STACK_LINE(372)
		Float curTOI = lowerBound;		HX_STACK_VAR(curTOI,"curTOI");
		HX_STACK_LINE(373)
		int curIter = (int)0;		HX_STACK_VAR(curIter,"curIter");
		HX_STACK_LINE(374)
		while((true)){
			HX_STACK_LINE(375)
			{
			}
			HX_STACK_LINE(383)
			{
			}
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				Float dt = (curTOI * timeStep);		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(391)
				Float delta = (dt - b1->sweepTime);		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(391)
				if (((delta != (int)0))){
					HX_STACK_LINE(391)
					{
					}
					HX_STACK_LINE(391)
					b1->sweepTime = dt;
					HX_STACK_LINE(391)
					{
						HX_STACK_LINE(391)
						Float t = delta;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(391)
						{
						}
						HX_STACK_LINE(391)
						hx::AddEq(b1->posx,(b1->velx * t));
						HX_STACK_LINE(391)
						hx::AddEq(b1->posy,(b1->vely * t));
					}
					HX_STACK_LINE(391)
					if (((b1->angvel != (int)0))){
						HX_STACK_LINE(391)
						Float dr = (b1->sweep_angvel * delta);		HX_STACK_VAR(dr,"dr");
						HX_STACK_LINE(391)
						hx::AddEq(b1->rot,dr);
						HX_STACK_LINE(391)
						if ((((dr * dr) > 0.0001))){
							HX_STACK_LINE(391)
							b1->axisx = ::Math_obj::sin(b1->rot);
							HX_STACK_LINE(391)
							b1->axisy = ::Math_obj::cos(b1->rot);
							HX_STACK_LINE(391)
							{
							}
							HX_STACK_LINE(391)
							Dynamic();
						}
						else{
							HX_STACK_LINE(391)
							Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(391)
							Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(391)
							Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(391)
							Float nx = ((((p * b1->axisx) + (dr * b1->axisy))) * m);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(391)
							b1->axisy = ((((p * b1->axisy) - (dr * b1->axisx))) * m);
							HX_STACK_LINE(391)
							b1->axisx = nx;
						}
					}
				}
			}
			HX_STACK_LINE(392)
			{
				HX_STACK_LINE(392)
				{
				}
				HX_STACK_LINE(392)
				if (((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(392)
					s1->worldCOMx = (b1->posx + (((b1->axisy * s1->localCOMx) - (b1->axisx * s1->localCOMy))));
					HX_STACK_LINE(392)
					s1->worldCOMy = (b1->posy + (((s1->localCOMx * b1->axisx) + (s1->localCOMy * b1->axisy))));
				}
				else{
					HX_STACK_LINE(392)
					::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(392)
					::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(392)
					{
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(392)
						while(((cx_ite != null()))){
							HX_STACK_LINE(392)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(392)
							{
								HX_STACK_LINE(392)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(392)
								li = li->next;
								HX_STACK_LINE(392)
								{
									HX_STACK_LINE(392)
									g->x = (b1->posx + (((b1->axisy * l->x) - (b1->axisx * l->y))));
									HX_STACK_LINE(392)
									g->y = (b1->posy + (((l->x * b1->axisx) + (l->y * b1->axisy))));
								}
							}
							HX_STACK_LINE(392)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(392)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(392)
					{
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(392)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(392)
						while(((cx_ite != null()))){
							HX_STACK_LINE(392)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(392)
							{
								HX_STACK_LINE(392)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(392)
								ite = ite->next;
								HX_STACK_LINE(392)
								{
									HX_STACK_LINE(392)
									e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
									HX_STACK_LINE(392)
									e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
								}
								HX_STACK_LINE(392)
								e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(392)
								e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
								HX_STACK_LINE(392)
								e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
							}
							HX_STACK_LINE(392)
							u = v;
							HX_STACK_LINE(392)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(392)
						{
							HX_STACK_LINE(392)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(392)
							ite = ite->next;
							HX_STACK_LINE(392)
							{
								HX_STACK_LINE(392)
								e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
								HX_STACK_LINE(392)
								e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
							}
							HX_STACK_LINE(392)
							e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(392)
							e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
							HX_STACK_LINE(392)
							e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
						}
					}
				}
			}
			struct _Function_2_1{
				inline static Float Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::geom::ZPP_Vec2 &c2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &c1,::zpp_nape::shape::ZPP_Shape &s2){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
					{
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
						::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
						::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
						::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
						Float upperBound = 1e100;		HX_STACK_VAR(upperBound,"upperBound");
						struct _Function_3_1{
							inline static Float Block( Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::geom::ZPP_Vec2 &w1){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
								{
									HX_STACK_LINE(393)
									::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
									HX_STACK_LINE(393)
									::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
									HX_STACK_LINE(393)
									Float dist;		HX_STACK_VAR(dist,"dist");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
										HX_STACK_LINE(393)
										Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											nx = (c21->worldCOMx - c11->worldCOMx);
											HX_STACK_LINE(393)
											ny = (c21->worldCOMy - c11->worldCOMy);
										}
										struct _Function_5_1{
											inline static Float Block( Float &nx,Float &ny){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
												{
													HX_STACK_LINE(393)
													{
													}
													HX_STACK_LINE(393)
													return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
												}
												return null();
											}
										};
										HX_STACK_LINE(393)
										Float len = _Function_5_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(393)
										dist = (len - ((c11->radius + c21->radius)));
										HX_STACK_LINE(393)
										if (((dist < upperBound))){
											HX_STACK_LINE(393)
											if (((len == (int)0))){
												HX_STACK_LINE(393)
												nx = (int)1;
												HX_STACK_LINE(393)
												ny = (int)0;
												HX_STACK_LINE(393)
												{
												}
												HX_STACK_LINE(393)
												{
												}
											}
											else{
												HX_STACK_LINE(393)
												Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(393)
												{
												}
												HX_STACK_LINE(393)
												hx::MultEq(nx,t);
												HX_STACK_LINE(393)
												hx::MultEq(ny,t);
											}
											HX_STACK_LINE(393)
											{
												HX_STACK_LINE(393)
												Float t = c11->radius;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(393)
												{
												}
												HX_STACK_LINE(393)
												w1->x = (c11->worldCOMx + (nx * t));
												HX_STACK_LINE(393)
												w1->y = (c11->worldCOMy + (ny * t));
											}
											HX_STACK_LINE(393)
											{
												HX_STACK_LINE(393)
												Float t = -(c21->radius);		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(393)
												{
												}
												HX_STACK_LINE(393)
												w2->x = (c21->worldCOMx + (nx * t));
												HX_STACK_LINE(393)
												w2->y = (c21->worldCOMy + (ny * t));
											}
											HX_STACK_LINE(393)
											{
												HX_STACK_LINE(393)
												axis->x = nx;
												HX_STACK_LINE(393)
												axis->y = ny;
												HX_STACK_LINE(393)
												{
												}
												HX_STACK_LINE(393)
												{
												}
											}
										}
									}
									HX_STACK_LINE(393)
									return dist;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::geom::ZPP_Vec2 &w1){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
								{
									HX_STACK_LINE(393)
									bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
									HX_STACK_LINE(393)
									if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
										HX_STACK_LINE(393)
										::zpp_nape::shape::ZPP_Shape tmp = s11;		HX_STACK_VAR(tmp,"tmp");
										HX_STACK_LINE(393)
										s11 = s21;
										HX_STACK_LINE(393)
										s21 = tmp;
										HX_STACK_LINE(393)
										::zpp_nape::geom::ZPP_Vec2 tmp2 = w1;		HX_STACK_VAR(tmp2,"tmp2");
										HX_STACK_LINE(393)
										w1 = w2;
										HX_STACK_LINE(393)
										w2 = tmp2;
										HX_STACK_LINE(393)
										swapped = true;
									}
									struct _Function_4_1{
										inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
											{
												HX_STACK_LINE(393)
												::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
												HX_STACK_LINE(393)
												::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
												HX_STACK_LINE(393)
												Float best = -1e+100;		HX_STACK_VAR(best,"best");
												HX_STACK_LINE(393)
												::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
												HX_STACK_LINE(393)
												{
													HX_STACK_LINE(393)
													::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(393)
													while(((cx_ite != null()))){
														HX_STACK_LINE(393)
														::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(393)
														{
															HX_STACK_LINE(393)
															Float dist = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist,"dist");
															HX_STACK_LINE(393)
															if (((dist > upperBound))){
																HX_STACK_LINE(393)
																best = dist;
																HX_STACK_LINE(393)
																break;
															}
															HX_STACK_LINE(393)
															if (((dist > (int)0))){
																HX_STACK_LINE(393)
																if (((dist > best))){
																	HX_STACK_LINE(393)
																	best = dist;
																	HX_STACK_LINE(393)
																	a0 = a;
																}
															}
															else{
																HX_STACK_LINE(393)
																if (((bool((best < (int)0)) && bool((dist > best))))){
																	HX_STACK_LINE(393)
																	best = dist;
																	HX_STACK_LINE(393)
																	a0 = a;
																}
															}
														}
														HX_STACK_LINE(393)
														cx_ite = cx_ite->next;
													}
												}
												HX_STACK_LINE(393)
												if (((best < upperBound))){
													HX_STACK_LINE(393)
													::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
													HX_STACK_LINE(393)
													::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
													HX_STACK_LINE(393)
													Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
													HX_STACK_LINE(393)
													if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
														HX_STACK_LINE(393)
														Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
														HX_STACK_LINE(393)
														Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
														HX_STACK_LINE(393)
														{
															HX_STACK_LINE(393)
															nx = (circle->worldCOMx - v0->x);
															HX_STACK_LINE(393)
															ny = (circle->worldCOMy - v0->y);
														}
														struct _Function_7_1{
															inline static Float Block( Float &nx,Float &ny){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
																{
																	HX_STACK_LINE(393)
																	{
																	}
																	HX_STACK_LINE(393)
																	return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
																}
																return null();
															}
														};
														HX_STACK_LINE(393)
														Float len = _Function_7_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
														HX_STACK_LINE(393)
														best = (len - circle->radius);
														HX_STACK_LINE(393)
														if (((best < upperBound))){
															HX_STACK_LINE(393)
															if (((len == (int)0))){
																HX_STACK_LINE(393)
																nx = (int)1;
																HX_STACK_LINE(393)
																ny = (int)0;
																HX_STACK_LINE(393)
																{
																}
																HX_STACK_LINE(393)
																{
																}
															}
															else{
																HX_STACK_LINE(393)
																Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(393)
																{
																}
																HX_STACK_LINE(393)
																hx::MultEq(nx,t);
																HX_STACK_LINE(393)
																hx::MultEq(ny,t);
															}
															HX_STACK_LINE(393)
															{
																HX_STACK_LINE(393)
																int t = (int)0;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(393)
																{
																}
																HX_STACK_LINE(393)
																w1->x = (v0->x + (nx * t));
																HX_STACK_LINE(393)
																w1->y = (v0->y + (ny * t));
															}
															HX_STACK_LINE(393)
															{
																HX_STACK_LINE(393)
																Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(393)
																{
																}
																HX_STACK_LINE(393)
																w2->x = (circle->worldCOMx + (nx * t));
																HX_STACK_LINE(393)
																w2->y = (circle->worldCOMy + (ny * t));
															}
															HX_STACK_LINE(393)
															{
																HX_STACK_LINE(393)
																axis->x = nx;
																HX_STACK_LINE(393)
																axis->y = ny;
																HX_STACK_LINE(393)
																{
																}
																HX_STACK_LINE(393)
																{
																}
															}
														}
													}
													else{
														HX_STACK_LINE(393)
														if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
															HX_STACK_LINE(393)
															Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
															HX_STACK_LINE(393)
															Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
															HX_STACK_LINE(393)
															{
																HX_STACK_LINE(393)
																nx = (circle->worldCOMx - v1->x);
																HX_STACK_LINE(393)
																ny = (circle->worldCOMy - v1->y);
															}
															struct _Function_8_1{
																inline static Float Block( Float &nx,Float &ny){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
																	{
																		HX_STACK_LINE(393)
																		{
																		}
																		HX_STACK_LINE(393)
																		return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(393)
															Float len = _Function_8_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
															HX_STACK_LINE(393)
															best = (len - circle->radius);
															HX_STACK_LINE(393)
															if (((best < upperBound))){
																HX_STACK_LINE(393)
																if (((len == (int)0))){
																	HX_STACK_LINE(393)
																	nx = (int)1;
																	HX_STACK_LINE(393)
																	ny = (int)0;
																	HX_STACK_LINE(393)
																	{
																	}
																	HX_STACK_LINE(393)
																	{
																	}
																}
																else{
																	HX_STACK_LINE(393)
																	Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(393)
																	{
																	}
																	HX_STACK_LINE(393)
																	hx::MultEq(nx,t);
																	HX_STACK_LINE(393)
																	hx::MultEq(ny,t);
																}
																HX_STACK_LINE(393)
																{
																	HX_STACK_LINE(393)
																	int t = (int)0;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(393)
																	{
																	}
																	HX_STACK_LINE(393)
																	w1->x = (v1->x + (nx * t));
																	HX_STACK_LINE(393)
																	w1->y = (v1->y + (ny * t));
																}
																HX_STACK_LINE(393)
																{
																	HX_STACK_LINE(393)
																	Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(393)
																	{
																	}
																	HX_STACK_LINE(393)
																	w2->x = (circle->worldCOMx + (nx * t));
																	HX_STACK_LINE(393)
																	w2->y = (circle->worldCOMy + (ny * t));
																}
																HX_STACK_LINE(393)
																{
																	HX_STACK_LINE(393)
																	axis->x = nx;
																	HX_STACK_LINE(393)
																	axis->y = ny;
																	HX_STACK_LINE(393)
																	{
																	}
																	HX_STACK_LINE(393)
																	{
																	}
																}
															}
														}
														else{
															HX_STACK_LINE(393)
															{
																HX_STACK_LINE(393)
																Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(393)
																{
																}
																HX_STACK_LINE(393)
																w2->x = (circle->worldCOMx + (a0->gnormx * t));
																HX_STACK_LINE(393)
																w2->y = (circle->worldCOMy + (a0->gnormy * t));
															}
															HX_STACK_LINE(393)
															{
																HX_STACK_LINE(393)
																Float t = -(best);		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(393)
																{
																}
																HX_STACK_LINE(393)
																w1->x = (w2->x + (a0->gnormx * t));
																HX_STACK_LINE(393)
																w1->y = (w2->y + (a0->gnormy * t));
															}
															HX_STACK_LINE(393)
															{
																HX_STACK_LINE(393)
																axis->x = a0->gnormx;
																HX_STACK_LINE(393)
																axis->y = a0->gnormy;
																HX_STACK_LINE(393)
																{
																}
																HX_STACK_LINE(393)
																{
																}
															}
														}
													}
												}
												HX_STACK_LINE(393)
												if ((swapped)){
													HX_STACK_LINE(393)
													axis->x = -(axis->x);
													HX_STACK_LINE(393)
													axis->y = -(axis->y);
												}
												HX_STACK_LINE(393)
												return best;
											}
											return null();
										}
									};
									struct _Function_4_2{
										inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
											{
												HX_STACK_LINE(393)
												::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
												HX_STACK_LINE(393)
												::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
												HX_STACK_LINE(393)
												Float best = -1e+100;		HX_STACK_VAR(best,"best");
												HX_STACK_LINE(393)
												::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
												HX_STACK_LINE(393)
												::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
												HX_STACK_LINE(393)
												int besti = (int)0;		HX_STACK_VAR(besti,"besti");
												HX_STACK_LINE(393)
												{
													HX_STACK_LINE(393)
													::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p1->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(393)
													while(((cx_ite != null()))){
														HX_STACK_LINE(393)
														::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(393)
														{
															HX_STACK_LINE(393)
															Float min = 1e100;		HX_STACK_VAR(min,"min");
															HX_STACK_LINE(393)
															{
																HX_STACK_LINE(393)
																::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p2->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																HX_STACK_LINE(393)
																while(((cx_ite1 != null()))){
																	HX_STACK_LINE(393)
																	::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																	HX_STACK_LINE(393)
																	{
																		HX_STACK_LINE(393)
																		Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																		HX_STACK_LINE(393)
																		if (((k < min))){
																			HX_STACK_LINE(393)
																			min = k;
																		}
																	}
																	HX_STACK_LINE(393)
																	cx_ite1 = cx_ite1->next;
																}
															}
															HX_STACK_LINE(393)
															hx::SubEq(min,a->gprojection);
															HX_STACK_LINE(393)
															if (((min > upperBound))){
																HX_STACK_LINE(393)
																best = min;
																HX_STACK_LINE(393)
																break;
															}
															HX_STACK_LINE(393)
															if (((min > (int)0))){
																HX_STACK_LINE(393)
																if (((min > best))){
																	HX_STACK_LINE(393)
																	best = min;
																	HX_STACK_LINE(393)
																	a1 = a;
																	HX_STACK_LINE(393)
																	besti = (int)1;
																}
															}
															else{
																HX_STACK_LINE(393)
																if (((bool((best < (int)0)) && bool((min > best))))){
																	HX_STACK_LINE(393)
																	best = min;
																	HX_STACK_LINE(393)
																	a1 = a;
																	HX_STACK_LINE(393)
																	besti = (int)1;
																}
															}
														}
														HX_STACK_LINE(393)
														cx_ite = cx_ite->next;
													}
												}
												struct _Function_5_1{
													inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Edge &a2,Float &best,::zpp_nape::shape::ZPP_Edge &a1,::zpp_nape::shape::ZPP_Polygon &p2,int &besti,Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::shape::ZPP_Polygon &p1,::zpp_nape::geom::ZPP_Vec2 &w1){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
														{
															HX_STACK_LINE(393)
															{
																HX_STACK_LINE(393)
																::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
																HX_STACK_LINE(393)
																while(((cx_ite != null()))){
																	HX_STACK_LINE(393)
																	::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
																	HX_STACK_LINE(393)
																	{
																		HX_STACK_LINE(393)
																		Float min = 1e100;		HX_STACK_VAR(min,"min");
																		HX_STACK_LINE(393)
																		{
																			HX_STACK_LINE(393)
																			::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p1->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																			HX_STACK_LINE(393)
																			while(((cx_ite1 != null()))){
																				HX_STACK_LINE(393)
																				::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																				HX_STACK_LINE(393)
																				{
																					HX_STACK_LINE(393)
																					Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																					HX_STACK_LINE(393)
																					if (((k < min))){
																						HX_STACK_LINE(393)
																						min = k;
																					}
																				}
																				HX_STACK_LINE(393)
																				cx_ite1 = cx_ite1->next;
																			}
																		}
																		HX_STACK_LINE(393)
																		hx::SubEq(min,a->gprojection);
																		HX_STACK_LINE(393)
																		if (((min > upperBound))){
																			HX_STACK_LINE(393)
																			best = min;
																			HX_STACK_LINE(393)
																			break;
																		}
																		HX_STACK_LINE(393)
																		if (((min > (int)0))){
																			HX_STACK_LINE(393)
																			if (((min > best))){
																				HX_STACK_LINE(393)
																				best = min;
																				HX_STACK_LINE(393)
																				a2 = a;
																				HX_STACK_LINE(393)
																				besti = (int)2;
																			}
																		}
																		else{
																			HX_STACK_LINE(393)
																			if (((bool((best < (int)0)) && bool((min > best))))){
																				HX_STACK_LINE(393)
																				best = min;
																				HX_STACK_LINE(393)
																				a2 = a;
																				HX_STACK_LINE(393)
																				besti = (int)2;
																			}
																		}
																	}
																	HX_STACK_LINE(393)
																	cx_ite = cx_ite->next;
																}
															}
															struct _Function_6_1{
																inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Edge &a2,Float &best,::zpp_nape::shape::ZPP_Edge &a1,::zpp_nape::shape::ZPP_Polygon &p2,int &besti,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::shape::ZPP_Polygon &p1){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
																	{
																		HX_STACK_LINE(393)
																		::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
																		::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
																		HX_STACK_LINE(393)
																		::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
																		HX_STACK_LINE(393)
																		if (((besti == (int)1))){
																			HX_STACK_LINE(393)
																			q1 = p1;
																			HX_STACK_LINE(393)
																			q2 = p2;
																			HX_STACK_LINE(393)
																			ax = a1;
																		}
																		else{
																			HX_STACK_LINE(393)
																			q1 = p2;
																			HX_STACK_LINE(393)
																			q2 = p1;
																			HX_STACK_LINE(393)
																			ax = a2;
																			HX_STACK_LINE(393)
																			::zpp_nape::geom::ZPP_Vec2 tmp = w1;		HX_STACK_VAR(tmp,"tmp");
																			HX_STACK_LINE(393)
																			w1 = w2;
																			HX_STACK_LINE(393)
																			w2 = tmp;
																			HX_STACK_LINE(393)
																			swapped = !(swapped);
																		}
																		HX_STACK_LINE(393)
																		::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
																		HX_STACK_LINE(393)
																		Float min = 1e100;		HX_STACK_VAR(min,"min");
																		HX_STACK_LINE(393)
																		{
																			HX_STACK_LINE(393)
																			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = q2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
																			HX_STACK_LINE(393)
																			while(((cx_ite != null()))){
																				HX_STACK_LINE(393)
																				::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
																				HX_STACK_LINE(393)
																				{
																					HX_STACK_LINE(393)
																					Float k = ((ax->gnormx * a->gnormx) + (ax->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
																					HX_STACK_LINE(393)
																					if (((k < min))){
																						HX_STACK_LINE(393)
																						min = k;
																						HX_STACK_LINE(393)
																						ay = a;
																					}
																				}
																				HX_STACK_LINE(393)
																				cx_ite = cx_ite->next;
																			}
																		}
																		HX_STACK_LINE(393)
																		if ((swapped)){
																			HX_STACK_LINE(393)
																			axis->x = -(ax->gnormx);
																			HX_STACK_LINE(393)
																			axis->y = -(ax->gnormy);
																			HX_STACK_LINE(393)
																			{
																			}
																			HX_STACK_LINE(393)
																			{
																			}
																		}
																		else{
																			HX_STACK_LINE(393)
																			axis->x = ax->gnormx;
																			HX_STACK_LINE(393)
																			axis->y = ax->gnormy;
																			HX_STACK_LINE(393)
																			{
																			}
																			HX_STACK_LINE(393)
																			{
																			}
																		}
																		struct _Function_7_1{
																			inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Edge &ay,::zpp_nape::shape::ZPP_Edge &ax,Float &best,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
																				{
																					HX_STACK_LINE(393)
																					::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
																					HX_STACK_LINE(393)
																					::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
																					HX_STACK_LINE(393)
																					::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
																					HX_STACK_LINE(393)
																					::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
																					HX_STACK_LINE(393)
																					Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
																					HX_STACK_LINE(393)
																					Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
																					HX_STACK_LINE(393)
																					Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
																					HX_STACK_LINE(393)
																					Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
																					HX_STACK_LINE(393)
																					{
																						HX_STACK_LINE(393)
																						vx = (v1->x - v0->x);
																						HX_STACK_LINE(393)
																						vy = (v1->y - v0->y);
																					}
																					HX_STACK_LINE(393)
																					{
																						HX_STACK_LINE(393)
																						qx = (q11->x - q0->x);
																						HX_STACK_LINE(393)
																						qy = (q11->y - q0->y);
																					}
																					HX_STACK_LINE(393)
																					Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
																					HX_STACK_LINE(393)
																					Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
																					HX_STACK_LINE(393)
																					Float t1 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t1,"t1");
																					HX_STACK_LINE(393)
																					Float t2 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t2,"t2");
																					HX_STACK_LINE(393)
																					Float s12 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s12,"s12");
																					HX_STACK_LINE(393)
																					Float s22 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s22,"s22");
																					HX_STACK_LINE(393)
																					if (((t1 < (int)0))){
																						HX_STACK_LINE(393)
																						t1 = (int)0;
																					}
																					else{
																						HX_STACK_LINE(393)
																						if (((t1 > (int)1))){
																							HX_STACK_LINE(393)
																							t1 = (int)1;
																						}
																					}
																					HX_STACK_LINE(393)
																					if (((t2 < (int)0))){
																						HX_STACK_LINE(393)
																						t2 = (int)0;
																					}
																					else{
																						HX_STACK_LINE(393)
																						if (((t2 > (int)1))){
																							HX_STACK_LINE(393)
																							t2 = (int)1;
																						}
																					}
																					HX_STACK_LINE(393)
																					if (((s12 < (int)0))){
																						HX_STACK_LINE(393)
																						s12 = (int)0;
																					}
																					else{
																						HX_STACK_LINE(393)
																						if (((s12 > (int)1))){
																							HX_STACK_LINE(393)
																							s12 = (int)1;
																						}
																					}
																					HX_STACK_LINE(393)
																					if (((s22 < (int)0))){
																						HX_STACK_LINE(393)
																						s22 = (int)0;
																					}
																					else{
																						HX_STACK_LINE(393)
																						if (((s22 > (int)1))){
																							HX_STACK_LINE(393)
																							s22 = (int)1;
																						}
																					}
																					HX_STACK_LINE(393)
																					Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
																					HX_STACK_LINE(393)
																					Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
																					HX_STACK_LINE(393)
																					{
																						HX_STACK_LINE(393)
																						Float t = t1;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(393)
																						{
																						}
																						HX_STACK_LINE(393)
																						f1x = (v0->x + (vx * t));
																						HX_STACK_LINE(393)
																						f1y = (v0->y + (vy * t));
																					}
																					HX_STACK_LINE(393)
																					Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
																					HX_STACK_LINE(393)
																					Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
																					HX_STACK_LINE(393)
																					{
																						HX_STACK_LINE(393)
																						Float t = t2;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(393)
																						{
																						}
																						HX_STACK_LINE(393)
																						f2x = (v0->x + (vx * t));
																						HX_STACK_LINE(393)
																						f2y = (v0->y + (vy * t));
																					}
																					HX_STACK_LINE(393)
																					Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
																					HX_STACK_LINE(393)
																					Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
																					HX_STACK_LINE(393)
																					{
																						HX_STACK_LINE(393)
																						Float t = s12;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(393)
																						{
																						}
																						HX_STACK_LINE(393)
																						g1x = (q0->x + (qx * t));
																						HX_STACK_LINE(393)
																						g1y = (q0->y + (qy * t));
																					}
																					HX_STACK_LINE(393)
																					Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
																					HX_STACK_LINE(393)
																					Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
																					HX_STACK_LINE(393)
																					{
																						HX_STACK_LINE(393)
																						Float t = s22;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(393)
																						{
																						}
																						HX_STACK_LINE(393)
																						g2x = (q0->x + (qx * t));
																						HX_STACK_LINE(393)
																						g2y = (q0->y + (qy * t));
																					}
																					struct _Function_8_1{
																						inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &q0,Float &f1y,Float &f1x){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
																							{
																								HX_STACK_LINE(393)
																								Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																								HX_STACK_LINE(393)
																								Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																								HX_STACK_LINE(393)
																								{
																									HX_STACK_LINE(393)
																									dx = (f1x - q0->x);
																									HX_STACK_LINE(393)
																									dy = (f1y - q0->y);
																								}
																								HX_STACK_LINE(393)
																								return ((dx * dx) + (dy * dy));
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(393)
																					Float d1 = _Function_8_1::Block(q0,f1y,f1x);		HX_STACK_VAR(d1,"d1");
																					struct _Function_8_2{
																						inline static Float Block( Float &f2x,::zpp_nape::geom::ZPP_Vec2 &q11,Float &f2y){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
																							{
																								HX_STACK_LINE(393)
																								Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																								HX_STACK_LINE(393)
																								Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																								HX_STACK_LINE(393)
																								{
																									HX_STACK_LINE(393)
																									dx = (f2x - q11->x);
																									HX_STACK_LINE(393)
																									dy = (f2y - q11->y);
																								}
																								HX_STACK_LINE(393)
																								return ((dx * dx) + (dy * dy));
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(393)
																					Float d2 = _Function_8_2::Block(f2x,q11,f2y);		HX_STACK_VAR(d2,"d2");
																					struct _Function_8_3{
																						inline static Float Block( Float &g1x,::zpp_nape::geom::ZPP_Vec2 &v0,Float &g1y){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
																							{
																								HX_STACK_LINE(393)
																								Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																								HX_STACK_LINE(393)
																								Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																								HX_STACK_LINE(393)
																								{
																									HX_STACK_LINE(393)
																									dx = (g1x - v0->x);
																									HX_STACK_LINE(393)
																									dy = (g1y - v0->y);
																								}
																								HX_STACK_LINE(393)
																								return ((dx * dx) + (dy * dy));
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(393)
																					Float e1 = _Function_8_3::Block(g1x,v0,g1y);		HX_STACK_VAR(e1,"e1");
																					struct _Function_8_4{
																						inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &v1,Float &g2y,Float &g2x){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
																							{
																								HX_STACK_LINE(393)
																								Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																								HX_STACK_LINE(393)
																								Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																								HX_STACK_LINE(393)
																								{
																									HX_STACK_LINE(393)
																									dx = (g2x - v1->x);
																									HX_STACK_LINE(393)
																									dy = (g2y - v1->y);
																								}
																								HX_STACK_LINE(393)
																								return ((dx * dx) + (dy * dy));
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(393)
																					Float e2 = _Function_8_4::Block(v1,g2y,g2x);		HX_STACK_VAR(e2,"e2");
																					HX_STACK_LINE(393)
																					Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
																					HX_STACK_LINE(393)
																					Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
																					HX_STACK_LINE(393)
																					::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
																					HX_STACK_LINE(393)
																					if (((d1 < d2))){
																						HX_STACK_LINE(393)
																						{
																							HX_STACK_LINE(393)
																							minfx = f1x;
																							HX_STACK_LINE(393)
																							minfy = f1y;
																							HX_STACK_LINE(393)
																							{
																							}
																							HX_STACK_LINE(393)
																							{
																							}
																						}
																						HX_STACK_LINE(393)
																						minq = q0;
																					}
																					else{
																						HX_STACK_LINE(393)
																						{
																							HX_STACK_LINE(393)
																							minfx = f2x;
																							HX_STACK_LINE(393)
																							minfy = f2y;
																							HX_STACK_LINE(393)
																							{
																							}
																							HX_STACK_LINE(393)
																							{
																							}
																						}
																						HX_STACK_LINE(393)
																						minq = q11;
																						HX_STACK_LINE(393)
																						d1 = d2;
																					}
																					HX_STACK_LINE(393)
																					Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
																					HX_STACK_LINE(393)
																					Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
																					HX_STACK_LINE(393)
																					::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
																					HX_STACK_LINE(393)
																					if (((e1 < e2))){
																						HX_STACK_LINE(393)
																						{
																							HX_STACK_LINE(393)
																							mingx = g1x;
																							HX_STACK_LINE(393)
																							mingy = g1y;
																							HX_STACK_LINE(393)
																							{
																							}
																							HX_STACK_LINE(393)
																							{
																							}
																						}
																						HX_STACK_LINE(393)
																						minv = v0;
																					}
																					else{
																						HX_STACK_LINE(393)
																						{
																							HX_STACK_LINE(393)
																							mingx = g2x;
																							HX_STACK_LINE(393)
																							mingy = g2y;
																							HX_STACK_LINE(393)
																							{
																							}
																							HX_STACK_LINE(393)
																							{
																							}
																						}
																						HX_STACK_LINE(393)
																						minv = v1;
																						HX_STACK_LINE(393)
																						e1 = e2;
																					}
																					HX_STACK_LINE(393)
																					if (((d1 < e1))){
																						HX_STACK_LINE(393)
																						{
																							HX_STACK_LINE(393)
																							w1->x = minfx;
																							HX_STACK_LINE(393)
																							w1->y = minfy;
																							HX_STACK_LINE(393)
																							{
																							}
																							HX_STACK_LINE(393)
																							{
																							}
																						}
																						HX_STACK_LINE(393)
																						{
																							HX_STACK_LINE(393)
																							w2->x = minq->x;
																							HX_STACK_LINE(393)
																							w2->y = minq->y;
																							HX_STACK_LINE(393)
																							{
																							}
																							HX_STACK_LINE(393)
																							{
																							}
																						}
																						HX_STACK_LINE(393)
																						best = ::Math_obj::sqrt(d1);
																					}
																					else{
																						HX_STACK_LINE(393)
																						{
																							HX_STACK_LINE(393)
																							w2->x = mingx;
																							HX_STACK_LINE(393)
																							w2->y = mingy;
																							HX_STACK_LINE(393)
																							{
																							}
																							HX_STACK_LINE(393)
																							{
																							}
																						}
																						HX_STACK_LINE(393)
																						{
																							HX_STACK_LINE(393)
																							w1->x = minv->x;
																							HX_STACK_LINE(393)
																							w1->y = minv->y;
																							HX_STACK_LINE(393)
																							{
																							}
																							HX_STACK_LINE(393)
																							{
																							}
																						}
																						HX_STACK_LINE(393)
																						best = ::Math_obj::sqrt(e1);
																					}
																					HX_STACK_LINE(393)
																					if (((best != (int)0))){
																						HX_STACK_LINE(393)
																						{
																							HX_STACK_LINE(393)
																							axis->x = (w2->x - w1->x);
																							HX_STACK_LINE(393)
																							axis->y = (w2->y - w1->y);
																						}
																						HX_STACK_LINE(393)
																						{
																							HX_STACK_LINE(393)
																							Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(393)
																							{
																							}
																							HX_STACK_LINE(393)
																							hx::MultEq(axis->x,t);
																							HX_STACK_LINE(393)
																							hx::MultEq(axis->y,t);
																						}
																						HX_STACK_LINE(393)
																						if ((swapped)){
																							HX_STACK_LINE(393)
																							axis->x = -(axis->x);
																							HX_STACK_LINE(393)
																							axis->y = -(axis->y);
																						}
																					}
																					HX_STACK_LINE(393)
																					return best;
																				}
																				return null();
																			}
																		};
																		struct _Function_7_2{
																			inline static Float Block( ::zpp_nape::shape::ZPP_Edge &ay,::zpp_nape::shape::ZPP_Edge &ax,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &w1){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
																				{
																					HX_STACK_LINE(393)
																					Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
																					HX_STACK_LINE(393)
																					Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
																					HX_STACK_LINE(393)
																					{
																						HX_STACK_LINE(393)
																						c0x = ay->gp0->x;
																						HX_STACK_LINE(393)
																						c0y = ay->gp0->y;
																						HX_STACK_LINE(393)
																						{
																						}
																						HX_STACK_LINE(393)
																						{
																						}
																					}
																					HX_STACK_LINE(393)
																					Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
																					HX_STACK_LINE(393)
																					Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
																					HX_STACK_LINE(393)
																					{
																						HX_STACK_LINE(393)
																						c1x = ay->gp1->x;
																						HX_STACK_LINE(393)
																						c1y = ay->gp1->y;
																						HX_STACK_LINE(393)
																						{
																						}
																						HX_STACK_LINE(393)
																						{
																						}
																					}
																					HX_STACK_LINE(393)
																					Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
																					HX_STACK_LINE(393)
																					Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
																					HX_STACK_LINE(393)
																					{
																						HX_STACK_LINE(393)
																						dvx = (c1x - c0x);
																						HX_STACK_LINE(393)
																						dvy = (c1y - c0y);
																					}
																					HX_STACK_LINE(393)
																					Float d0 = ((ax->gnormy * c0x) - (ax->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
																					HX_STACK_LINE(393)
																					Float d1 = ((ax->gnormy * c1x) - (ax->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
																					HX_STACK_LINE(393)
																					Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
																					HX_STACK_LINE(393)
																					Float t = (((-(ax->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
																					HX_STACK_LINE(393)
																					if (((t > ::nape::Config_obj::epsilon))){
																						HX_STACK_LINE(393)
																						Float t1 = t;		HX_STACK_VAR(t1,"t1");
																						HX_STACK_LINE(393)
																						{
																						}
																						HX_STACK_LINE(393)
																						hx::AddEq(c0x,(dvx * t1));
																						HX_STACK_LINE(393)
																						hx::AddEq(c0y,(dvy * t1));
																					}
																					HX_STACK_LINE(393)
																					Float t1 = (((-(ax->tp0) - d1)) * den);		HX_STACK_VAR(t1,"t1");
																					HX_STACK_LINE(393)
																					if (((t1 < -(::nape::Config_obj::epsilon)))){
																						HX_STACK_LINE(393)
																						Float t2 = t1;		HX_STACK_VAR(t2,"t2");
																						HX_STACK_LINE(393)
																						{
																						}
																						HX_STACK_LINE(393)
																						hx::AddEq(c1x,(dvx * t2));
																						HX_STACK_LINE(393)
																						hx::AddEq(c1y,(dvy * t2));
																					}
																					HX_STACK_LINE(393)
																					Float c0d = (((c0x * ax->gnormx) + (c0y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c0d,"c0d");
																					HX_STACK_LINE(393)
																					Float c1d = (((c1x * ax->gnormx) + (c1y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c1d,"c1d");
																					struct _Function_8_1{
																						inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w2,Float &c0y,Float &c0d,::zpp_nape::shape::ZPP_Edge &ax,Float &c0x,::zpp_nape::geom::ZPP_Vec2 &w1){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
																							{
																								HX_STACK_LINE(393)
																								{
																									HX_STACK_LINE(393)
																									w2->x = c0x;
																									HX_STACK_LINE(393)
																									w2->y = c0y;
																									HX_STACK_LINE(393)
																									{
																									}
																									HX_STACK_LINE(393)
																									{
																									}
																								}
																								HX_STACK_LINE(393)
																								{
																									HX_STACK_LINE(393)
																									Float t2 = -(c0d);		HX_STACK_VAR(t2,"t2");
																									HX_STACK_LINE(393)
																									{
																									}
																									HX_STACK_LINE(393)
																									w1->x = (w2->x + (ax->gnormx * t2));
																									HX_STACK_LINE(393)
																									w1->y = (w2->y + (ax->gnormy * t2));
																								}
																								HX_STACK_LINE(393)
																								return c0d;
																							}
																							return null();
																						}
																					};
																					struct _Function_8_2{
																						inline static Float Block( Float &c1y,Float &c1d,::zpp_nape::geom::ZPP_Vec2 &w2,Float &c1x,::zpp_nape::shape::ZPP_Edge &ax,::zpp_nape::geom::ZPP_Vec2 &w1){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",393);
																							{
																								HX_STACK_LINE(393)
																								{
																									HX_STACK_LINE(393)
																									w2->x = c1x;
																									HX_STACK_LINE(393)
																									w2->y = c1y;
																									HX_STACK_LINE(393)
																									{
																									}
																									HX_STACK_LINE(393)
																									{
																									}
																								}
																								HX_STACK_LINE(393)
																								{
																									HX_STACK_LINE(393)
																									Float t2 = -(c1d);		HX_STACK_VAR(t2,"t2");
																									HX_STACK_LINE(393)
																									{
																									}
																									HX_STACK_LINE(393)
																									w1->x = (w2->x + (ax->gnormx * t2));
																									HX_STACK_LINE(393)
																									w1->y = (w2->y + (ax->gnormy * t2));
																								}
																								HX_STACK_LINE(393)
																								return c1d;
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(393)
																					return (  (((c0d < c1d))) ? Float(_Function_8_1::Block(w2,c0y,c0d,ax,c0x,w1)) : Float(_Function_8_2::Block(c1y,c1d,w2,c1x,ax,w1)) );
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(393)
																		return (  (((best >= (int)0))) ? Float(_Function_7_1::Block(swapped,ay,ax,best,w2,axis,w1)) : Float(_Function_7_2::Block(ay,ax,w2,w1)) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(393)
															return (  (((best < upperBound))) ? Float(_Function_6_1::Block(swapped,a2,best,a1,p2,besti,w2,axis,w1,p1)) : Float(upperBound) );
														}
														return null();
													}
												};
												HX_STACK_LINE(393)
												return (  (((best < upperBound))) ? Float(_Function_5_1::Block(swapped,a2,best,a1,p2,besti,upperBound,w2,axis,p1,w1)) : Float(upperBound) );
											}
											return null();
										}
									};
									HX_STACK_LINE(393)
									return (  (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))) ? Float(_Function_4_1::Block(swapped,s11,s21,w2,upperBound,axis,w1)) : Float(_Function_4_2::Block(swapped,s11,s21,w2,upperBound,axis,w1)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(393)
						return (  (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))) ? Float(_Function_3_1::Block(upperBound,axis,s21,w2,s11,w1)) : Float(_Function_3_2::Block(upperBound,axis,s21,w2,s11,w1)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(393)
			Float sep = (_Function_2_1::Block(s1,c2,axis,c1,s2) + negRadius);		HX_STACK_VAR(sep,"sep");
			HX_STACK_LINE(394)
			Float dot = ((deltax * axis->x) + (deltay * axis->y));		HX_STACK_VAR(dot,"dot");
			HX_STACK_LINE(395)
			if (((sep < ::nape::Config_obj::distanceThresholdCCD))){
				HX_STACK_LINE(396)
				Float d1x = 0.0;		HX_STACK_VAR(d1x,"d1x");
				HX_STACK_LINE(397)
				Float d1y = 0.0;		HX_STACK_VAR(d1y,"d1y");
				HX_STACK_LINE(398)
				{
					HX_STACK_LINE(399)
					d1x = (c1->x - b1->posx);
					HX_STACK_LINE(400)
					d1y = (c1->y - b1->posy);
				}
				HX_STACK_LINE(402)
				Float proj = (dot - (b1->sweep_angvel * (((axis->y * d1x) - (axis->x * d1y)))));		HX_STACK_VAR(proj,"proj");
				HX_STACK_LINE(403)
				if (((proj > (int)0))){
					HX_STACK_LINE(403)
					toi->slipped = true;
				}
				HX_STACK_LINE(406)
				if (((bool((proj <= (int)0)) || bool((sep < (::nape::Config_obj::distanceThresholdCCD * 0.5)))))){
					HX_STACK_LINE(406)
					break;
				}
			}
			HX_STACK_LINE(410)
			Float denom = (((angBias - dot)) * timeStep);		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(411)
			if (((denom <= (int)0))){
				HX_STACK_LINE(412)
				curTOI = (int)-1;
				HX_STACK_LINE(413)
				break;
			}
			HX_STACK_LINE(415)
			Float delta = (Float(sep) / Float(denom));		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(416)
			if (((delta < 1e-6))){
				HX_STACK_LINE(416)
				delta = 1e-6;
			}
			HX_STACK_LINE(417)
			{
			}
			HX_STACK_LINE(425)
			hx::AddEq(curTOI,delta);
			HX_STACK_LINE(426)
			if (((curTOI >= (int)1))){
				HX_STACK_LINE(427)
				curTOI = (int)1;
				HX_STACK_LINE(428)
				{
				}
				HX_STACK_LINE(436)
				{
				}
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					Float dt = (curTOI * timeStep);		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(444)
					Float delta1 = (dt - b1->sweepTime);		HX_STACK_VAR(delta1,"delta1");
					HX_STACK_LINE(444)
					if (((delta1 != (int)0))){
						HX_STACK_LINE(444)
						{
						}
						HX_STACK_LINE(444)
						b1->sweepTime = dt;
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							Float t = delta1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(444)
							{
							}
							HX_STACK_LINE(444)
							hx::AddEq(b1->posx,(b1->velx * t));
							HX_STACK_LINE(444)
							hx::AddEq(b1->posy,(b1->vely * t));
						}
						HX_STACK_LINE(444)
						if (((b1->angvel != (int)0))){
							HX_STACK_LINE(444)
							Float dr = (b1->sweep_angvel * delta1);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(444)
							hx::AddEq(b1->rot,dr);
							HX_STACK_LINE(444)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(444)
								b1->axisx = ::Math_obj::sin(b1->rot);
								HX_STACK_LINE(444)
								b1->axisy = ::Math_obj::cos(b1->rot);
								HX_STACK_LINE(444)
								{
								}
								HX_STACK_LINE(444)
								Dynamic();
							}
							else{
								HX_STACK_LINE(444)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(444)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(444)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(444)
								Float nx = ((((p * b1->axisx) + (dr * b1->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(444)
								b1->axisy = ((((p * b1->axisy) - (dr * b1->axisx))) * m);
								HX_STACK_LINE(444)
								b1->axisx = nx;
							}
						}
					}
				}
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					{
					}
					HX_STACK_LINE(445)
					if (((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
						HX_STACK_LINE(445)
						s1->worldCOMx = (b1->posx + (((b1->axisy * s1->localCOMx) - (b1->axisx * s1->localCOMy))));
						HX_STACK_LINE(445)
						s1->worldCOMy = (b1->posy + (((s1->localCOMx * b1->axisx) + (s1->localCOMy * b1->axisy))));
					}
					else{
						HX_STACK_LINE(445)
						::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(445)
							while(((cx_ite != null()))){
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(445)
									li = li->next;
									HX_STACK_LINE(445)
									{
										HX_STACK_LINE(445)
										g->x = (b1->posx + (((b1->axisy * l->x) - (b1->axisx * l->y))));
										HX_STACK_LINE(445)
										g->y = (b1->posy + (((l->x * b1->axisx) + (l->y * b1->axisy))));
									}
								}
								HX_STACK_LINE(445)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(445)
						::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(445)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(445)
							while(((cx_ite != null()))){
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(445)
									ite = ite->next;
									HX_STACK_LINE(445)
									{
										HX_STACK_LINE(445)
										e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
										HX_STACK_LINE(445)
										e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
									}
									HX_STACK_LINE(445)
									e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
									HX_STACK_LINE(445)
									e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
									HX_STACK_LINE(445)
									e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
								}
								HX_STACK_LINE(445)
								u = v;
								HX_STACK_LINE(445)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(445)
								ite = ite->next;
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									e->gnormx = ((b1->axisy * e->lnormx) - (b1->axisx * e->lnormy));
									HX_STACK_LINE(445)
									e->gnormy = ((e->lnormx * b1->axisx) + (e->lnormy * b1->axisy));
								}
								HX_STACK_LINE(445)
								e->gprojection = (((b1->posx * e->gnormx) + (b1->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(445)
								e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
								HX_STACK_LINE(445)
								e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
							}
						}
					}
				}
				struct _Function_3_1{
					inline static Float Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::geom::ZPP_Vec2 &c2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &c1,::zpp_nape::shape::ZPP_Shape &s2){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
						{
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
							::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
							::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
							::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
							Float upperBound = 1e100;		HX_STACK_VAR(upperBound,"upperBound");
							struct _Function_4_1{
								inline static Float Block( Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::geom::ZPP_Vec2 &w1){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
									{
										HX_STACK_LINE(446)
										::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
										HX_STACK_LINE(446)
										::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
										HX_STACK_LINE(446)
										Float dist;		HX_STACK_VAR(dist,"dist");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
											HX_STACK_LINE(446)
											Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												nx = (c21->worldCOMx - c11->worldCOMx);
												HX_STACK_LINE(446)
												ny = (c21->worldCOMy - c11->worldCOMy);
											}
											struct _Function_6_1{
												inline static Float Block( Float &nx,Float &ny){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
													{
														HX_STACK_LINE(446)
														{
														}
														HX_STACK_LINE(446)
														return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
													}
													return null();
												}
											};
											HX_STACK_LINE(446)
											Float len = _Function_6_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(446)
											dist = (len - ((c11->radius + c21->radius)));
											HX_STACK_LINE(446)
											if (((dist < upperBound))){
												HX_STACK_LINE(446)
												if (((len == (int)0))){
													HX_STACK_LINE(446)
													nx = (int)1;
													HX_STACK_LINE(446)
													ny = (int)0;
													HX_STACK_LINE(446)
													{
													}
													HX_STACK_LINE(446)
													{
													}
												}
												else{
													HX_STACK_LINE(446)
													Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(446)
													{
													}
													HX_STACK_LINE(446)
													hx::MultEq(nx,t);
													HX_STACK_LINE(446)
													hx::MultEq(ny,t);
												}
												HX_STACK_LINE(446)
												{
													HX_STACK_LINE(446)
													Float t = c11->radius;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(446)
													{
													}
													HX_STACK_LINE(446)
													w1->x = (c11->worldCOMx + (nx * t));
													HX_STACK_LINE(446)
													w1->y = (c11->worldCOMy + (ny * t));
												}
												HX_STACK_LINE(446)
												{
													HX_STACK_LINE(446)
													Float t = -(c21->radius);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(446)
													{
													}
													HX_STACK_LINE(446)
													w2->x = (c21->worldCOMx + (nx * t));
													HX_STACK_LINE(446)
													w2->y = (c21->worldCOMy + (ny * t));
												}
												HX_STACK_LINE(446)
												{
													HX_STACK_LINE(446)
													axis->x = nx;
													HX_STACK_LINE(446)
													axis->y = ny;
													HX_STACK_LINE(446)
													{
													}
													HX_STACK_LINE(446)
													{
													}
												}
											}
										}
										HX_STACK_LINE(446)
										return dist;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::geom::ZPP_Vec2 &w1){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
									{
										HX_STACK_LINE(446)
										bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
										HX_STACK_LINE(446)
										if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
											HX_STACK_LINE(446)
											::zpp_nape::shape::ZPP_Shape tmp = s11;		HX_STACK_VAR(tmp,"tmp");
											HX_STACK_LINE(446)
											s11 = s21;
											HX_STACK_LINE(446)
											s21 = tmp;
											HX_STACK_LINE(446)
											::zpp_nape::geom::ZPP_Vec2 tmp2 = w1;		HX_STACK_VAR(tmp2,"tmp2");
											HX_STACK_LINE(446)
											w1 = w2;
											HX_STACK_LINE(446)
											w2 = tmp2;
											HX_STACK_LINE(446)
											swapped = true;
										}
										struct _Function_5_1{
											inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
												{
													HX_STACK_LINE(446)
													::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
													HX_STACK_LINE(446)
													::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
													HX_STACK_LINE(446)
													Float best = -1e+100;		HX_STACK_VAR(best,"best");
													HX_STACK_LINE(446)
													::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
													HX_STACK_LINE(446)
													{
														HX_STACK_LINE(446)
														::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(446)
														while(((cx_ite != null()))){
															HX_STACK_LINE(446)
															::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(446)
															{
																HX_STACK_LINE(446)
																Float dist = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist,"dist");
																HX_STACK_LINE(446)
																if (((dist > upperBound))){
																	HX_STACK_LINE(446)
																	best = dist;
																	HX_STACK_LINE(446)
																	break;
																}
																HX_STACK_LINE(446)
																if (((dist > (int)0))){
																	HX_STACK_LINE(446)
																	if (((dist > best))){
																		HX_STACK_LINE(446)
																		best = dist;
																		HX_STACK_LINE(446)
																		a0 = a;
																	}
																}
																else{
																	HX_STACK_LINE(446)
																	if (((bool((best < (int)0)) && bool((dist > best))))){
																		HX_STACK_LINE(446)
																		best = dist;
																		HX_STACK_LINE(446)
																		a0 = a;
																	}
																}
															}
															HX_STACK_LINE(446)
															cx_ite = cx_ite->next;
														}
													}
													HX_STACK_LINE(446)
													if (((best < upperBound))){
														HX_STACK_LINE(446)
														::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
														HX_STACK_LINE(446)
														::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
														HX_STACK_LINE(446)
														Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
														HX_STACK_LINE(446)
														if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
															HX_STACK_LINE(446)
															Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
															HX_STACK_LINE(446)
															Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
															HX_STACK_LINE(446)
															{
																HX_STACK_LINE(446)
																nx = (circle->worldCOMx - v0->x);
																HX_STACK_LINE(446)
																ny = (circle->worldCOMy - v0->y);
															}
															struct _Function_8_1{
																inline static Float Block( Float &nx,Float &ny){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
																	{
																		HX_STACK_LINE(446)
																		{
																		}
																		HX_STACK_LINE(446)
																		return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(446)
															Float len = _Function_8_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
															HX_STACK_LINE(446)
															best = (len - circle->radius);
															HX_STACK_LINE(446)
															if (((best < upperBound))){
																HX_STACK_LINE(446)
																if (((len == (int)0))){
																	HX_STACK_LINE(446)
																	nx = (int)1;
																	HX_STACK_LINE(446)
																	ny = (int)0;
																	HX_STACK_LINE(446)
																	{
																	}
																	HX_STACK_LINE(446)
																	{
																	}
																}
																else{
																	HX_STACK_LINE(446)
																	Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(446)
																	{
																	}
																	HX_STACK_LINE(446)
																	hx::MultEq(nx,t);
																	HX_STACK_LINE(446)
																	hx::MultEq(ny,t);
																}
																HX_STACK_LINE(446)
																{
																	HX_STACK_LINE(446)
																	int t = (int)0;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(446)
																	{
																	}
																	HX_STACK_LINE(446)
																	w1->x = (v0->x + (nx * t));
																	HX_STACK_LINE(446)
																	w1->y = (v0->y + (ny * t));
																}
																HX_STACK_LINE(446)
																{
																	HX_STACK_LINE(446)
																	Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(446)
																	{
																	}
																	HX_STACK_LINE(446)
																	w2->x = (circle->worldCOMx + (nx * t));
																	HX_STACK_LINE(446)
																	w2->y = (circle->worldCOMy + (ny * t));
																}
																HX_STACK_LINE(446)
																{
																	HX_STACK_LINE(446)
																	axis->x = nx;
																	HX_STACK_LINE(446)
																	axis->y = ny;
																	HX_STACK_LINE(446)
																	{
																	}
																	HX_STACK_LINE(446)
																	{
																	}
																}
															}
														}
														else{
															HX_STACK_LINE(446)
															if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
																HX_STACK_LINE(446)
																Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
																HX_STACK_LINE(446)
																Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
																HX_STACK_LINE(446)
																{
																	HX_STACK_LINE(446)
																	nx = (circle->worldCOMx - v1->x);
																	HX_STACK_LINE(446)
																	ny = (circle->worldCOMy - v1->y);
																}
																struct _Function_9_1{
																	inline static Float Block( Float &nx,Float &ny){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
																		{
																			HX_STACK_LINE(446)
																			{
																			}
																			HX_STACK_LINE(446)
																			return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(446)
																Float len = _Function_9_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
																HX_STACK_LINE(446)
																best = (len - circle->radius);
																HX_STACK_LINE(446)
																if (((best < upperBound))){
																	HX_STACK_LINE(446)
																	if (((len == (int)0))){
																		HX_STACK_LINE(446)
																		nx = (int)1;
																		HX_STACK_LINE(446)
																		ny = (int)0;
																		HX_STACK_LINE(446)
																		{
																		}
																		HX_STACK_LINE(446)
																		{
																		}
																	}
																	else{
																		HX_STACK_LINE(446)
																		Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
																		HX_STACK_LINE(446)
																		{
																		}
																		HX_STACK_LINE(446)
																		hx::MultEq(nx,t);
																		HX_STACK_LINE(446)
																		hx::MultEq(ny,t);
																	}
																	HX_STACK_LINE(446)
																	{
																		HX_STACK_LINE(446)
																		int t = (int)0;		HX_STACK_VAR(t,"t");
																		HX_STACK_LINE(446)
																		{
																		}
																		HX_STACK_LINE(446)
																		w1->x = (v1->x + (nx * t));
																		HX_STACK_LINE(446)
																		w1->y = (v1->y + (ny * t));
																	}
																	HX_STACK_LINE(446)
																	{
																		HX_STACK_LINE(446)
																		Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																		HX_STACK_LINE(446)
																		{
																		}
																		HX_STACK_LINE(446)
																		w2->x = (circle->worldCOMx + (nx * t));
																		HX_STACK_LINE(446)
																		w2->y = (circle->worldCOMy + (ny * t));
																	}
																	HX_STACK_LINE(446)
																	{
																		HX_STACK_LINE(446)
																		axis->x = nx;
																		HX_STACK_LINE(446)
																		axis->y = ny;
																		HX_STACK_LINE(446)
																		{
																		}
																		HX_STACK_LINE(446)
																		{
																		}
																	}
																}
															}
															else{
																HX_STACK_LINE(446)
																{
																	HX_STACK_LINE(446)
																	Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(446)
																	{
																	}
																	HX_STACK_LINE(446)
																	w2->x = (circle->worldCOMx + (a0->gnormx * t));
																	HX_STACK_LINE(446)
																	w2->y = (circle->worldCOMy + (a0->gnormy * t));
																}
																HX_STACK_LINE(446)
																{
																	HX_STACK_LINE(446)
																	Float t = -(best);		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(446)
																	{
																	}
																	HX_STACK_LINE(446)
																	w1->x = (w2->x + (a0->gnormx * t));
																	HX_STACK_LINE(446)
																	w1->y = (w2->y + (a0->gnormy * t));
																}
																HX_STACK_LINE(446)
																{
																	HX_STACK_LINE(446)
																	axis->x = a0->gnormx;
																	HX_STACK_LINE(446)
																	axis->y = a0->gnormy;
																	HX_STACK_LINE(446)
																	{
																	}
																	HX_STACK_LINE(446)
																	{
																	}
																}
															}
														}
													}
													HX_STACK_LINE(446)
													if ((swapped)){
														HX_STACK_LINE(446)
														axis->x = -(axis->x);
														HX_STACK_LINE(446)
														axis->y = -(axis->y);
													}
													HX_STACK_LINE(446)
													return best;
												}
												return null();
											}
										};
										struct _Function_5_2{
											inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w2,Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
												{
													HX_STACK_LINE(446)
													::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
													HX_STACK_LINE(446)
													::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
													HX_STACK_LINE(446)
													Float best = -1e+100;		HX_STACK_VAR(best,"best");
													HX_STACK_LINE(446)
													::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
													HX_STACK_LINE(446)
													::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
													HX_STACK_LINE(446)
													int besti = (int)0;		HX_STACK_VAR(besti,"besti");
													HX_STACK_LINE(446)
													{
														HX_STACK_LINE(446)
														::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p1->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(446)
														while(((cx_ite != null()))){
															HX_STACK_LINE(446)
															::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(446)
															{
																HX_STACK_LINE(446)
																Float min = 1e100;		HX_STACK_VAR(min,"min");
																HX_STACK_LINE(446)
																{
																	HX_STACK_LINE(446)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p2->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																	HX_STACK_LINE(446)
																	while(((cx_ite1 != null()))){
																		HX_STACK_LINE(446)
																		::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																		HX_STACK_LINE(446)
																		{
																			HX_STACK_LINE(446)
																			Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																			HX_STACK_LINE(446)
																			if (((k < min))){
																				HX_STACK_LINE(446)
																				min = k;
																			}
																		}
																		HX_STACK_LINE(446)
																		cx_ite1 = cx_ite1->next;
																	}
																}
																HX_STACK_LINE(446)
																hx::SubEq(min,a->gprojection);
																HX_STACK_LINE(446)
																if (((min > upperBound))){
																	HX_STACK_LINE(446)
																	best = min;
																	HX_STACK_LINE(446)
																	break;
																}
																HX_STACK_LINE(446)
																if (((min > (int)0))){
																	HX_STACK_LINE(446)
																	if (((min > best))){
																		HX_STACK_LINE(446)
																		best = min;
																		HX_STACK_LINE(446)
																		a1 = a;
																		HX_STACK_LINE(446)
																		besti = (int)1;
																	}
																}
																else{
																	HX_STACK_LINE(446)
																	if (((bool((best < (int)0)) && bool((min > best))))){
																		HX_STACK_LINE(446)
																		best = min;
																		HX_STACK_LINE(446)
																		a1 = a;
																		HX_STACK_LINE(446)
																		besti = (int)1;
																	}
																}
															}
															HX_STACK_LINE(446)
															cx_ite = cx_ite->next;
														}
													}
													struct _Function_6_1{
														inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Edge &a2,Float &best,::zpp_nape::shape::ZPP_Edge &a1,::zpp_nape::shape::ZPP_Polygon &p2,int &besti,Float &upperBound,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::shape::ZPP_Polygon &p1,::zpp_nape::geom::ZPP_Vec2 &w1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
															{
																HX_STACK_LINE(446)
																{
																	HX_STACK_LINE(446)
																	::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
																	HX_STACK_LINE(446)
																	while(((cx_ite != null()))){
																		HX_STACK_LINE(446)
																		::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
																		HX_STACK_LINE(446)
																		{
																			HX_STACK_LINE(446)
																			Float min = 1e100;		HX_STACK_VAR(min,"min");
																			HX_STACK_LINE(446)
																			{
																				HX_STACK_LINE(446)
																				::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p1->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																				HX_STACK_LINE(446)
																				while(((cx_ite1 != null()))){
																					HX_STACK_LINE(446)
																					::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																					HX_STACK_LINE(446)
																					{
																						HX_STACK_LINE(446)
																						Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																						HX_STACK_LINE(446)
																						if (((k < min))){
																							HX_STACK_LINE(446)
																							min = k;
																						}
																					}
																					HX_STACK_LINE(446)
																					cx_ite1 = cx_ite1->next;
																				}
																			}
																			HX_STACK_LINE(446)
																			hx::SubEq(min,a->gprojection);
																			HX_STACK_LINE(446)
																			if (((min > upperBound))){
																				HX_STACK_LINE(446)
																				best = min;
																				HX_STACK_LINE(446)
																				break;
																			}
																			HX_STACK_LINE(446)
																			if (((min > (int)0))){
																				HX_STACK_LINE(446)
																				if (((min > best))){
																					HX_STACK_LINE(446)
																					best = min;
																					HX_STACK_LINE(446)
																					a2 = a;
																					HX_STACK_LINE(446)
																					besti = (int)2;
																				}
																			}
																			else{
																				HX_STACK_LINE(446)
																				if (((bool((best < (int)0)) && bool((min > best))))){
																					HX_STACK_LINE(446)
																					best = min;
																					HX_STACK_LINE(446)
																					a2 = a;
																					HX_STACK_LINE(446)
																					besti = (int)2;
																				}
																			}
																		}
																		HX_STACK_LINE(446)
																		cx_ite = cx_ite->next;
																	}
																}
																struct _Function_7_1{
																	inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Edge &a2,Float &best,::zpp_nape::shape::ZPP_Edge &a1,::zpp_nape::shape::ZPP_Polygon &p2,int &besti,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::shape::ZPP_Polygon &p1){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
																		{
																			HX_STACK_LINE(446)
																			::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
																			::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
																			HX_STACK_LINE(446)
																			::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
																			HX_STACK_LINE(446)
																			if (((besti == (int)1))){
																				HX_STACK_LINE(446)
																				q1 = p1;
																				HX_STACK_LINE(446)
																				q2 = p2;
																				HX_STACK_LINE(446)
																				ax = a1;
																			}
																			else{
																				HX_STACK_LINE(446)
																				q1 = p2;
																				HX_STACK_LINE(446)
																				q2 = p1;
																				HX_STACK_LINE(446)
																				ax = a2;
																				HX_STACK_LINE(446)
																				::zpp_nape::geom::ZPP_Vec2 tmp = w1;		HX_STACK_VAR(tmp,"tmp");
																				HX_STACK_LINE(446)
																				w1 = w2;
																				HX_STACK_LINE(446)
																				w2 = tmp;
																				HX_STACK_LINE(446)
																				swapped = !(swapped);
																			}
																			HX_STACK_LINE(446)
																			::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
																			HX_STACK_LINE(446)
																			Float min = 1e100;		HX_STACK_VAR(min,"min");
																			HX_STACK_LINE(446)
																			{
																				HX_STACK_LINE(446)
																				::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = q2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
																				HX_STACK_LINE(446)
																				while(((cx_ite != null()))){
																					HX_STACK_LINE(446)
																					::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
																					HX_STACK_LINE(446)
																					{
																						HX_STACK_LINE(446)
																						Float k = ((ax->gnormx * a->gnormx) + (ax->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
																						HX_STACK_LINE(446)
																						if (((k < min))){
																							HX_STACK_LINE(446)
																							min = k;
																							HX_STACK_LINE(446)
																							ay = a;
																						}
																					}
																					HX_STACK_LINE(446)
																					cx_ite = cx_ite->next;
																				}
																			}
																			HX_STACK_LINE(446)
																			if ((swapped)){
																				HX_STACK_LINE(446)
																				axis->x = -(ax->gnormx);
																				HX_STACK_LINE(446)
																				axis->y = -(ax->gnormy);
																				HX_STACK_LINE(446)
																				{
																				}
																				HX_STACK_LINE(446)
																				{
																				}
																			}
																			else{
																				HX_STACK_LINE(446)
																				axis->x = ax->gnormx;
																				HX_STACK_LINE(446)
																				axis->y = ax->gnormy;
																				HX_STACK_LINE(446)
																				{
																				}
																				HX_STACK_LINE(446)
																				{
																				}
																			}
																			struct _Function_8_1{
																				inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Edge &ay,::zpp_nape::shape::ZPP_Edge &ax,Float &best,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &axis,::zpp_nape::geom::ZPP_Vec2 &w1){
																					HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
																					{
																						HX_STACK_LINE(446)
																						::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
																						HX_STACK_LINE(446)
																						::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
																						HX_STACK_LINE(446)
																						::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
																						HX_STACK_LINE(446)
																						::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
																						HX_STACK_LINE(446)
																						Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
																						HX_STACK_LINE(446)
																						Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
																						HX_STACK_LINE(446)
																						Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
																						HX_STACK_LINE(446)
																						Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
																						HX_STACK_LINE(446)
																						{
																							HX_STACK_LINE(446)
																							vx = (v1->x - v0->x);
																							HX_STACK_LINE(446)
																							vy = (v1->y - v0->y);
																						}
																						HX_STACK_LINE(446)
																						{
																							HX_STACK_LINE(446)
																							qx = (q11->x - q0->x);
																							HX_STACK_LINE(446)
																							qy = (q11->y - q0->y);
																						}
																						HX_STACK_LINE(446)
																						Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
																						HX_STACK_LINE(446)
																						Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
																						HX_STACK_LINE(446)
																						Float t1 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t1,"t1");
																						HX_STACK_LINE(446)
																						Float t2 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t2,"t2");
																						HX_STACK_LINE(446)
																						Float s12 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s12,"s12");
																						HX_STACK_LINE(446)
																						Float s22 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s22,"s22");
																						HX_STACK_LINE(446)
																						if (((t1 < (int)0))){
																							HX_STACK_LINE(446)
																							t1 = (int)0;
																						}
																						else{
																							HX_STACK_LINE(446)
																							if (((t1 > (int)1))){
																								HX_STACK_LINE(446)
																								t1 = (int)1;
																							}
																						}
																						HX_STACK_LINE(446)
																						if (((t2 < (int)0))){
																							HX_STACK_LINE(446)
																							t2 = (int)0;
																						}
																						else{
																							HX_STACK_LINE(446)
																							if (((t2 > (int)1))){
																								HX_STACK_LINE(446)
																								t2 = (int)1;
																							}
																						}
																						HX_STACK_LINE(446)
																						if (((s12 < (int)0))){
																							HX_STACK_LINE(446)
																							s12 = (int)0;
																						}
																						else{
																							HX_STACK_LINE(446)
																							if (((s12 > (int)1))){
																								HX_STACK_LINE(446)
																								s12 = (int)1;
																							}
																						}
																						HX_STACK_LINE(446)
																						if (((s22 < (int)0))){
																							HX_STACK_LINE(446)
																							s22 = (int)0;
																						}
																						else{
																							HX_STACK_LINE(446)
																							if (((s22 > (int)1))){
																								HX_STACK_LINE(446)
																								s22 = (int)1;
																							}
																						}
																						HX_STACK_LINE(446)
																						Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
																						HX_STACK_LINE(446)
																						Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
																						HX_STACK_LINE(446)
																						{
																							HX_STACK_LINE(446)
																							Float t = t1;		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(446)
																							{
																							}
																							HX_STACK_LINE(446)
																							f1x = (v0->x + (vx * t));
																							HX_STACK_LINE(446)
																							f1y = (v0->y + (vy * t));
																						}
																						HX_STACK_LINE(446)
																						Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
																						HX_STACK_LINE(446)
																						Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
																						HX_STACK_LINE(446)
																						{
																							HX_STACK_LINE(446)
																							Float t = t2;		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(446)
																							{
																							}
																							HX_STACK_LINE(446)
																							f2x = (v0->x + (vx * t));
																							HX_STACK_LINE(446)
																							f2y = (v0->y + (vy * t));
																						}
																						HX_STACK_LINE(446)
																						Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
																						HX_STACK_LINE(446)
																						Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
																						HX_STACK_LINE(446)
																						{
																							HX_STACK_LINE(446)
																							Float t = s12;		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(446)
																							{
																							}
																							HX_STACK_LINE(446)
																							g1x = (q0->x + (qx * t));
																							HX_STACK_LINE(446)
																							g1y = (q0->y + (qy * t));
																						}
																						HX_STACK_LINE(446)
																						Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
																						HX_STACK_LINE(446)
																						Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
																						HX_STACK_LINE(446)
																						{
																							HX_STACK_LINE(446)
																							Float t = s22;		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(446)
																							{
																							}
																							HX_STACK_LINE(446)
																							g2x = (q0->x + (qx * t));
																							HX_STACK_LINE(446)
																							g2y = (q0->y + (qy * t));
																						}
																						struct _Function_9_1{
																							inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &q0,Float &f1y,Float &f1x){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
																								{
																									HX_STACK_LINE(446)
																									Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																									HX_STACK_LINE(446)
																									Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																									HX_STACK_LINE(446)
																									{
																										HX_STACK_LINE(446)
																										dx = (f1x - q0->x);
																										HX_STACK_LINE(446)
																										dy = (f1y - q0->y);
																									}
																									HX_STACK_LINE(446)
																									return ((dx * dx) + (dy * dy));
																								}
																								return null();
																							}
																						};
																						HX_STACK_LINE(446)
																						Float d1 = _Function_9_1::Block(q0,f1y,f1x);		HX_STACK_VAR(d1,"d1");
																						struct _Function_9_2{
																							inline static Float Block( Float &f2x,::zpp_nape::geom::ZPP_Vec2 &q11,Float &f2y){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
																								{
																									HX_STACK_LINE(446)
																									Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																									HX_STACK_LINE(446)
																									Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																									HX_STACK_LINE(446)
																									{
																										HX_STACK_LINE(446)
																										dx = (f2x - q11->x);
																										HX_STACK_LINE(446)
																										dy = (f2y - q11->y);
																									}
																									HX_STACK_LINE(446)
																									return ((dx * dx) + (dy * dy));
																								}
																								return null();
																							}
																						};
																						HX_STACK_LINE(446)
																						Float d2 = _Function_9_2::Block(f2x,q11,f2y);		HX_STACK_VAR(d2,"d2");
																						struct _Function_9_3{
																							inline static Float Block( Float &g1x,::zpp_nape::geom::ZPP_Vec2 &v0,Float &g1y){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
																								{
																									HX_STACK_LINE(446)
																									Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																									HX_STACK_LINE(446)
																									Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																									HX_STACK_LINE(446)
																									{
																										HX_STACK_LINE(446)
																										dx = (g1x - v0->x);
																										HX_STACK_LINE(446)
																										dy = (g1y - v0->y);
																									}
																									HX_STACK_LINE(446)
																									return ((dx * dx) + (dy * dy));
																								}
																								return null();
																							}
																						};
																						HX_STACK_LINE(446)
																						Float e1 = _Function_9_3::Block(g1x,v0,g1y);		HX_STACK_VAR(e1,"e1");
																						struct _Function_9_4{
																							inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &v1,Float &g2y,Float &g2x){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
																								{
																									HX_STACK_LINE(446)
																									Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																									HX_STACK_LINE(446)
																									Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																									HX_STACK_LINE(446)
																									{
																										HX_STACK_LINE(446)
																										dx = (g2x - v1->x);
																										HX_STACK_LINE(446)
																										dy = (g2y - v1->y);
																									}
																									HX_STACK_LINE(446)
																									return ((dx * dx) + (dy * dy));
																								}
																								return null();
																							}
																						};
																						HX_STACK_LINE(446)
																						Float e2 = _Function_9_4::Block(v1,g2y,g2x);		HX_STACK_VAR(e2,"e2");
																						HX_STACK_LINE(446)
																						Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
																						HX_STACK_LINE(446)
																						Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
																						HX_STACK_LINE(446)
																						::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
																						HX_STACK_LINE(446)
																						if (((d1 < d2))){
																							HX_STACK_LINE(446)
																							{
																								HX_STACK_LINE(446)
																								minfx = f1x;
																								HX_STACK_LINE(446)
																								minfy = f1y;
																								HX_STACK_LINE(446)
																								{
																								}
																								HX_STACK_LINE(446)
																								{
																								}
																							}
																							HX_STACK_LINE(446)
																							minq = q0;
																						}
																						else{
																							HX_STACK_LINE(446)
																							{
																								HX_STACK_LINE(446)
																								minfx = f2x;
																								HX_STACK_LINE(446)
																								minfy = f2y;
																								HX_STACK_LINE(446)
																								{
																								}
																								HX_STACK_LINE(446)
																								{
																								}
																							}
																							HX_STACK_LINE(446)
																							minq = q11;
																							HX_STACK_LINE(446)
																							d1 = d2;
																						}
																						HX_STACK_LINE(446)
																						Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
																						HX_STACK_LINE(446)
																						Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
																						HX_STACK_LINE(446)
																						::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
																						HX_STACK_LINE(446)
																						if (((e1 < e2))){
																							HX_STACK_LINE(446)
																							{
																								HX_STACK_LINE(446)
																								mingx = g1x;
																								HX_STACK_LINE(446)
																								mingy = g1y;
																								HX_STACK_LINE(446)
																								{
																								}
																								HX_STACK_LINE(446)
																								{
																								}
																							}
																							HX_STACK_LINE(446)
																							minv = v0;
																						}
																						else{
																							HX_STACK_LINE(446)
																							{
																								HX_STACK_LINE(446)
																								mingx = g2x;
																								HX_STACK_LINE(446)
																								mingy = g2y;
																								HX_STACK_LINE(446)
																								{
																								}
																								HX_STACK_LINE(446)
																								{
																								}
																							}
																							HX_STACK_LINE(446)
																							minv = v1;
																							HX_STACK_LINE(446)
																							e1 = e2;
																						}
																						HX_STACK_LINE(446)
																						if (((d1 < e1))){
																							HX_STACK_LINE(446)
																							{
																								HX_STACK_LINE(446)
																								w1->x = minfx;
																								HX_STACK_LINE(446)
																								w1->y = minfy;
																								HX_STACK_LINE(446)
																								{
																								}
																								HX_STACK_LINE(446)
																								{
																								}
																							}
																							HX_STACK_LINE(446)
																							{
																								HX_STACK_LINE(446)
																								w2->x = minq->x;
																								HX_STACK_LINE(446)
																								w2->y = minq->y;
																								HX_STACK_LINE(446)
																								{
																								}
																								HX_STACK_LINE(446)
																								{
																								}
																							}
																							HX_STACK_LINE(446)
																							best = ::Math_obj::sqrt(d1);
																						}
																						else{
																							HX_STACK_LINE(446)
																							{
																								HX_STACK_LINE(446)
																								w2->x = mingx;
																								HX_STACK_LINE(446)
																								w2->y = mingy;
																								HX_STACK_LINE(446)
																								{
																								}
																								HX_STACK_LINE(446)
																								{
																								}
																							}
																							HX_STACK_LINE(446)
																							{
																								HX_STACK_LINE(446)
																								w1->x = minv->x;
																								HX_STACK_LINE(446)
																								w1->y = minv->y;
																								HX_STACK_LINE(446)
																								{
																								}
																								HX_STACK_LINE(446)
																								{
																								}
																							}
																							HX_STACK_LINE(446)
																							best = ::Math_obj::sqrt(e1);
																						}
																						HX_STACK_LINE(446)
																						if (((best != (int)0))){
																							HX_STACK_LINE(446)
																							{
																								HX_STACK_LINE(446)
																								axis->x = (w2->x - w1->x);
																								HX_STACK_LINE(446)
																								axis->y = (w2->y - w1->y);
																							}
																							HX_STACK_LINE(446)
																							{
																								HX_STACK_LINE(446)
																								Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
																								HX_STACK_LINE(446)
																								{
																								}
																								HX_STACK_LINE(446)
																								hx::MultEq(axis->x,t);
																								HX_STACK_LINE(446)
																								hx::MultEq(axis->y,t);
																							}
																							HX_STACK_LINE(446)
																							if ((swapped)){
																								HX_STACK_LINE(446)
																								axis->x = -(axis->x);
																								HX_STACK_LINE(446)
																								axis->y = -(axis->y);
																							}
																						}
																						HX_STACK_LINE(446)
																						return best;
																					}
																					return null();
																				}
																			};
																			struct _Function_8_2{
																				inline static Float Block( ::zpp_nape::shape::ZPP_Edge &ay,::zpp_nape::shape::ZPP_Edge &ax,::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::geom::ZPP_Vec2 &w1){
																					HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
																					{
																						HX_STACK_LINE(446)
																						Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
																						HX_STACK_LINE(446)
																						Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
																						HX_STACK_LINE(446)
																						{
																							HX_STACK_LINE(446)
																							c0x = ay->gp0->x;
																							HX_STACK_LINE(446)
																							c0y = ay->gp0->y;
																							HX_STACK_LINE(446)
																							{
																							}
																							HX_STACK_LINE(446)
																							{
																							}
																						}
																						HX_STACK_LINE(446)
																						Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
																						HX_STACK_LINE(446)
																						Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
																						HX_STACK_LINE(446)
																						{
																							HX_STACK_LINE(446)
																							c1x = ay->gp1->x;
																							HX_STACK_LINE(446)
																							c1y = ay->gp1->y;
																							HX_STACK_LINE(446)
																							{
																							}
																							HX_STACK_LINE(446)
																							{
																							}
																						}
																						HX_STACK_LINE(446)
																						Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
																						HX_STACK_LINE(446)
																						Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
																						HX_STACK_LINE(446)
																						{
																							HX_STACK_LINE(446)
																							dvx = (c1x - c0x);
																							HX_STACK_LINE(446)
																							dvy = (c1y - c0y);
																						}
																						HX_STACK_LINE(446)
																						Float d0 = ((ax->gnormy * c0x) - (ax->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
																						HX_STACK_LINE(446)
																						Float d1 = ((ax->gnormy * c1x) - (ax->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
																						HX_STACK_LINE(446)
																						Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
																						HX_STACK_LINE(446)
																						Float t = (((-(ax->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(446)
																						if (((t > ::nape::Config_obj::epsilon))){
																							HX_STACK_LINE(446)
																							Float t1 = t;		HX_STACK_VAR(t1,"t1");
																							HX_STACK_LINE(446)
																							{
																							}
																							HX_STACK_LINE(446)
																							hx::AddEq(c0x,(dvx * t1));
																							HX_STACK_LINE(446)
																							hx::AddEq(c0y,(dvy * t1));
																						}
																						HX_STACK_LINE(446)
																						Float t1 = (((-(ax->tp0) - d1)) * den);		HX_STACK_VAR(t1,"t1");
																						HX_STACK_LINE(446)
																						if (((t1 < -(::nape::Config_obj::epsilon)))){
																							HX_STACK_LINE(446)
																							Float t2 = t1;		HX_STACK_VAR(t2,"t2");
																							HX_STACK_LINE(446)
																							{
																							}
																							HX_STACK_LINE(446)
																							hx::AddEq(c1x,(dvx * t2));
																							HX_STACK_LINE(446)
																							hx::AddEq(c1y,(dvy * t2));
																						}
																						HX_STACK_LINE(446)
																						Float c0d = (((c0x * ax->gnormx) + (c0y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c0d,"c0d");
																						HX_STACK_LINE(446)
																						Float c1d = (((c1x * ax->gnormx) + (c1y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c1d,"c1d");
																						struct _Function_9_1{
																							inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w2,Float &c0y,Float &c0d,::zpp_nape::shape::ZPP_Edge &ax,Float &c0x,::zpp_nape::geom::ZPP_Vec2 &w1){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
																								{
																									HX_STACK_LINE(446)
																									{
																										HX_STACK_LINE(446)
																										w2->x = c0x;
																										HX_STACK_LINE(446)
																										w2->y = c0y;
																										HX_STACK_LINE(446)
																										{
																										}
																										HX_STACK_LINE(446)
																										{
																										}
																									}
																									HX_STACK_LINE(446)
																									{
																										HX_STACK_LINE(446)
																										Float t2 = -(c0d);		HX_STACK_VAR(t2,"t2");
																										HX_STACK_LINE(446)
																										{
																										}
																										HX_STACK_LINE(446)
																										w1->x = (w2->x + (ax->gnormx * t2));
																										HX_STACK_LINE(446)
																										w1->y = (w2->y + (ax->gnormy * t2));
																									}
																									HX_STACK_LINE(446)
																									return c0d;
																								}
																								return null();
																							}
																						};
																						struct _Function_9_2{
																							inline static Float Block( Float &c1y,Float &c1d,::zpp_nape::geom::ZPP_Vec2 &w2,Float &c1x,::zpp_nape::shape::ZPP_Edge &ax,::zpp_nape::geom::ZPP_Vec2 &w1){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",446);
																								{
																									HX_STACK_LINE(446)
																									{
																										HX_STACK_LINE(446)
																										w2->x = c1x;
																										HX_STACK_LINE(446)
																										w2->y = c1y;
																										HX_STACK_LINE(446)
																										{
																										}
																										HX_STACK_LINE(446)
																										{
																										}
																									}
																									HX_STACK_LINE(446)
																									{
																										HX_STACK_LINE(446)
																										Float t2 = -(c1d);		HX_STACK_VAR(t2,"t2");
																										HX_STACK_LINE(446)
																										{
																										}
																										HX_STACK_LINE(446)
																										w1->x = (w2->x + (ax->gnormx * t2));
																										HX_STACK_LINE(446)
																										w1->y = (w2->y + (ax->gnormy * t2));
																									}
																									HX_STACK_LINE(446)
																									return c1d;
																								}
																								return null();
																							}
																						};
																						HX_STACK_LINE(446)
																						return (  (((c0d < c1d))) ? Float(_Function_9_1::Block(w2,c0y,c0d,ax,c0x,w1)) : Float(_Function_9_2::Block(c1y,c1d,w2,c1x,ax,w1)) );
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(446)
																			return (  (((best >= (int)0))) ? Float(_Function_8_1::Block(swapped,ay,ax,best,w2,axis,w1)) : Float(_Function_8_2::Block(ay,ax,w2,w1)) );
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(446)
																return (  (((best < upperBound))) ? Float(_Function_7_1::Block(swapped,a2,best,a1,p2,besti,w2,axis,w1,p1)) : Float(upperBound) );
															}
															return null();
														}
													};
													HX_STACK_LINE(446)
													return (  (((best < upperBound))) ? Float(_Function_6_1::Block(swapped,a2,best,a1,p2,besti,upperBound,w2,axis,p1,w1)) : Float(upperBound) );
												}
												return null();
											}
										};
										HX_STACK_LINE(446)
										return (  (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))) ? Float(_Function_5_1::Block(swapped,s11,s21,w2,upperBound,axis,w1)) : Float(_Function_5_2::Block(swapped,s11,s21,w2,upperBound,axis,w1)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(446)
							return (  (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))) ? Float(_Function_4_1::Block(upperBound,axis,s21,w2,s11,w1)) : Float(_Function_4_2::Block(upperBound,axis,s21,w2,s11,w1)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(446)
				Float sep1 = (_Function_3_1::Block(s1,c2,axis,c1,s2) + negRadius);		HX_STACK_VAR(sep1,"sep1");
				HX_STACK_LINE(447)
				Float dot1 = ((deltax * axis->x) + (deltay * axis->y));		HX_STACK_VAR(dot1,"dot1");
				HX_STACK_LINE(448)
				if (((sep1 < ::nape::Config_obj::distanceThresholdCCD))){
					HX_STACK_LINE(449)
					Float d1x = 0.0;		HX_STACK_VAR(d1x,"d1x");
					HX_STACK_LINE(450)
					Float d1y = 0.0;		HX_STACK_VAR(d1y,"d1y");
					HX_STACK_LINE(451)
					{
						HX_STACK_LINE(452)
						d1x = (c1->x - b1->posx);
						HX_STACK_LINE(453)
						d1y = (c1->y - b1->posy);
					}
					HX_STACK_LINE(455)
					Float proj = (dot1 - (b1->sweep_angvel * (((axis->y * d1x) - (axis->x * d1y)))));		HX_STACK_VAR(proj,"proj");
					HX_STACK_LINE(456)
					if (((proj > (int)0))){
						HX_STACK_LINE(456)
						toi->slipped = true;
					}
					HX_STACK_LINE(459)
					if (((bool((proj <= (int)0)) || bool((sep1 < (::nape::Config_obj::distanceThresholdCCD * 0.5)))))){
						HX_STACK_LINE(459)
						break;
					}
				}
				HX_STACK_LINE(463)
				curTOI = (int)-1;
				HX_STACK_LINE(464)
				break;
			}
			HX_STACK_LINE(466)
			if (((++(curIter) >= (int)40))){
				HX_STACK_LINE(467)
				if (((sep > negRadius))){
					HX_STACK_LINE(467)
					toi->failed = true;
				}
				HX_STACK_LINE(470)
				break;
			}
		}
		HX_STACK_LINE(473)
		toi->toi = curTOI;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_SweepDistance_obj,staticSweep,(void))

Float ZPP_SweepDistance_obj::distanceBody( ::zpp_nape::phys::ZPP_Body b1,::zpp_nape::phys::ZPP_Body b2,::zpp_nape::geom::ZPP_Vec2 w1,::zpp_nape::geom::ZPP_Vec2 w2){
	HX_STACK_PUSH("ZPP_SweepDistance::distanceBody","zpp_nape/geom/SweepDistance.hx",475);
	HX_STACK_ARG(b1,"b1");
	HX_STACK_ARG(b2,"b2");
	HX_STACK_ARG(w1,"w1");
	HX_STACK_ARG(w2,"w2");
	HX_STACK_LINE(476)
	::zpp_nape::geom::ZPP_Vec2 t1;		HX_STACK_VAR(t1,"t1");
	HX_STACK_LINE(477)
	{
		HX_STACK_LINE(478)
		if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
			HX_STACK_LINE(478)
			t1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
		}
		else{
			HX_STACK_LINE(485)
			t1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(486)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = t1->next;
			HX_STACK_LINE(487)
			t1->next = null();
		}
		HX_STACK_LINE(492)
		t1->weak = false;
	}
	HX_STACK_LINE(494)
	::zpp_nape::geom::ZPP_Vec2 t2;		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(495)
	{
		HX_STACK_LINE(496)
		if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
			HX_STACK_LINE(496)
			t2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
		}
		else{
			HX_STACK_LINE(503)
			t2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(504)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = t2->next;
			HX_STACK_LINE(505)
			t2->next = null();
		}
		HX_STACK_LINE(510)
		t2->weak = false;
	}
	HX_STACK_LINE(512)
	::zpp_nape::geom::ZPP_Vec2 ax;		HX_STACK_VAR(ax,"ax");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(514)
		if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
			HX_STACK_LINE(514)
			ax = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
		}
		else{
			HX_STACK_LINE(521)
			ax = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(522)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ax->next;
			HX_STACK_LINE(523)
			ax->next = null();
		}
		HX_STACK_LINE(528)
		ax->weak = false;
	}
	HX_STACK_LINE(530)
	Float min = 1e100;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(531)
	{
		HX_STACK_LINE(532)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = b1->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(533)
		while(((cx_ite != null()))){
			HX_STACK_LINE(534)
			::zpp_nape::shape::ZPP_Shape s1 = cx_ite->elt;		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(535)
			{
				HX_STACK_LINE(537)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite1 = b2->shapes->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
				HX_STACK_LINE(538)
				while(((cx_ite1 != null()))){
					HX_STACK_LINE(539)
					::zpp_nape::shape::ZPP_Shape s2 = cx_ite1->elt;		HX_STACK_VAR(s2,"s2");
					HX_STACK_LINE(540)
					{
						struct _Function_6_1{
							inline static Float Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::geom::ZPP_Vec2 &t2,::zpp_nape::geom::ZPP_Vec2 &ax,::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::geom::ZPP_Vec2 &t1,Float &min){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
								{
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
									::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
									::zpp_nape::geom::ZPP_Vec2 w11 = t1;		HX_STACK_VAR(w11,"w11");
									::zpp_nape::geom::ZPP_Vec2 w21 = t2;		HX_STACK_VAR(w21,"w21");
									struct _Function_7_1{
										inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w21,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w11,::zpp_nape::geom::ZPP_Vec2 &ax,::zpp_nape::shape::ZPP_Shape &s11,Float &min){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
											{
												HX_STACK_LINE(541)
												::zpp_nape::shape::ZPP_Circle c1 = s11->circle;		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(541)
												::zpp_nape::shape::ZPP_Circle c2 = s21->circle;		HX_STACK_VAR(c2,"c2");
												HX_STACK_LINE(541)
												Float dist;		HX_STACK_VAR(dist,"dist");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
													HX_STACK_LINE(541)
													Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														nx = (c2->worldCOMx - c1->worldCOMx);
														HX_STACK_LINE(541)
														ny = (c2->worldCOMy - c1->worldCOMy);
													}
													struct _Function_9_1{
														inline static Float Block( Float &nx,Float &ny){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
															{
																HX_STACK_LINE(541)
																{
																}
																HX_STACK_LINE(541)
																return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
															}
															return null();
														}
													};
													HX_STACK_LINE(541)
													Float len = _Function_9_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
													HX_STACK_LINE(541)
													dist = (len - ((c1->radius + c2->radius)));
													HX_STACK_LINE(541)
													if (((dist < min))){
														HX_STACK_LINE(541)
														if (((len == (int)0))){
															HX_STACK_LINE(541)
															nx = (int)1;
															HX_STACK_LINE(541)
															ny = (int)0;
															HX_STACK_LINE(541)
															{
															}
															HX_STACK_LINE(541)
															{
															}
														}
														else{
															HX_STACK_LINE(541)
															Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(541)
															{
															}
															HX_STACK_LINE(541)
															hx::MultEq(nx,t);
															HX_STACK_LINE(541)
															hx::MultEq(ny,t);
														}
														HX_STACK_LINE(541)
														{
															HX_STACK_LINE(541)
															Float t = c1->radius;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(541)
															{
															}
															HX_STACK_LINE(541)
															w11->x = (c1->worldCOMx + (nx * t));
															HX_STACK_LINE(541)
															w11->y = (c1->worldCOMy + (ny * t));
														}
														HX_STACK_LINE(541)
														{
															HX_STACK_LINE(541)
															Float t = -(c2->radius);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(541)
															{
															}
															HX_STACK_LINE(541)
															w21->x = (c2->worldCOMx + (nx * t));
															HX_STACK_LINE(541)
															w21->y = (c2->worldCOMy + (ny * t));
														}
														HX_STACK_LINE(541)
														{
															HX_STACK_LINE(541)
															ax->x = nx;
															HX_STACK_LINE(541)
															ax->y = ny;
															HX_STACK_LINE(541)
															{
															}
															HX_STACK_LINE(541)
															{
															}
														}
													}
												}
												HX_STACK_LINE(541)
												return dist;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w21,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &w11,::zpp_nape::geom::ZPP_Vec2 &ax,::zpp_nape::shape::ZPP_Shape &s11,Float &min){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
											{
												HX_STACK_LINE(541)
												bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
												HX_STACK_LINE(541)
												if (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
													HX_STACK_LINE(541)
													::zpp_nape::shape::ZPP_Shape tmp = s11;		HX_STACK_VAR(tmp,"tmp");
													HX_STACK_LINE(541)
													s11 = s21;
													HX_STACK_LINE(541)
													s21 = tmp;
													HX_STACK_LINE(541)
													::zpp_nape::geom::ZPP_Vec2 tmp2 = w11;		HX_STACK_VAR(tmp2,"tmp2");
													HX_STACK_LINE(541)
													w11 = w21;
													HX_STACK_LINE(541)
													w21 = tmp2;
													HX_STACK_LINE(541)
													swapped = true;
												}
												struct _Function_8_1{
													inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::geom::ZPP_Vec2 &w21,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &ax,Float &min,::zpp_nape::geom::ZPP_Vec2 &w11){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
														{
															HX_STACK_LINE(541)
															::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
															HX_STACK_LINE(541)
															::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
															HX_STACK_LINE(541)
															Float best = -1e+100;		HX_STACK_VAR(best,"best");
															HX_STACK_LINE(541)
															::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
															HX_STACK_LINE(541)
															{
																HX_STACK_LINE(541)
																::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = poly->edges->head;		HX_STACK_VAR(cx_ite2,"cx_ite2");
																HX_STACK_LINE(541)
																while(((cx_ite2 != null()))){
																	HX_STACK_LINE(541)
																	::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
																	HX_STACK_LINE(541)
																	{
																		HX_STACK_LINE(541)
																		Float dist = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist,"dist");
																		HX_STACK_LINE(541)
																		if (((dist > min))){
																			HX_STACK_LINE(541)
																			best = dist;
																			HX_STACK_LINE(541)
																			break;
																		}
																		HX_STACK_LINE(541)
																		if (((dist > (int)0))){
																			HX_STACK_LINE(541)
																			if (((dist > best))){
																				HX_STACK_LINE(541)
																				best = dist;
																				HX_STACK_LINE(541)
																				a0 = a;
																			}
																		}
																		else{
																			HX_STACK_LINE(541)
																			if (((bool((best < (int)0)) && bool((dist > best))))){
																				HX_STACK_LINE(541)
																				best = dist;
																				HX_STACK_LINE(541)
																				a0 = a;
																			}
																		}
																	}
																	HX_STACK_LINE(541)
																	cx_ite2 = cx_ite2->next;
																}
															}
															HX_STACK_LINE(541)
															if (((best < min))){
																HX_STACK_LINE(541)
																::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
																HX_STACK_LINE(541)
																::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
																HX_STACK_LINE(541)
																Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
																HX_STACK_LINE(541)
																if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
																	HX_STACK_LINE(541)
																	Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
																	HX_STACK_LINE(541)
																	Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
																	HX_STACK_LINE(541)
																	{
																		HX_STACK_LINE(541)
																		nx = (circle->worldCOMx - v0->x);
																		HX_STACK_LINE(541)
																		ny = (circle->worldCOMy - v0->y);
																	}
																	struct _Function_11_1{
																		inline static Float Block( Float &nx,Float &ny){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
																			{
																				HX_STACK_LINE(541)
																				{
																				}
																				HX_STACK_LINE(541)
																				return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(541)
																	Float len = _Function_11_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
																	HX_STACK_LINE(541)
																	best = (len - circle->radius);
																	HX_STACK_LINE(541)
																	if (((best < min))){
																		HX_STACK_LINE(541)
																		if (((len == (int)0))){
																			HX_STACK_LINE(541)
																			nx = (int)1;
																			HX_STACK_LINE(541)
																			ny = (int)0;
																			HX_STACK_LINE(541)
																			{
																			}
																			HX_STACK_LINE(541)
																			{
																			}
																		}
																		else{
																			HX_STACK_LINE(541)
																			Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(541)
																			{
																			}
																			HX_STACK_LINE(541)
																			hx::MultEq(nx,t);
																			HX_STACK_LINE(541)
																			hx::MultEq(ny,t);
																		}
																		HX_STACK_LINE(541)
																		{
																			HX_STACK_LINE(541)
																			int t = (int)0;		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(541)
																			{
																			}
																			HX_STACK_LINE(541)
																			w11->x = (v0->x + (nx * t));
																			HX_STACK_LINE(541)
																			w11->y = (v0->y + (ny * t));
																		}
																		HX_STACK_LINE(541)
																		{
																			HX_STACK_LINE(541)
																			Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(541)
																			{
																			}
																			HX_STACK_LINE(541)
																			w21->x = (circle->worldCOMx + (nx * t));
																			HX_STACK_LINE(541)
																			w21->y = (circle->worldCOMy + (ny * t));
																		}
																		HX_STACK_LINE(541)
																		{
																			HX_STACK_LINE(541)
																			ax->x = nx;
																			HX_STACK_LINE(541)
																			ax->y = ny;
																			HX_STACK_LINE(541)
																			{
																			}
																			HX_STACK_LINE(541)
																			{
																			}
																		}
																	}
																}
																else{
																	HX_STACK_LINE(541)
																	if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
																		HX_STACK_LINE(541)
																		Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
																		HX_STACK_LINE(541)
																		Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
																		HX_STACK_LINE(541)
																		{
																			HX_STACK_LINE(541)
																			nx = (circle->worldCOMx - v1->x);
																			HX_STACK_LINE(541)
																			ny = (circle->worldCOMy - v1->y);
																		}
																		struct _Function_12_1{
																			inline static Float Block( Float &nx,Float &ny){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
																				{
																					HX_STACK_LINE(541)
																					{
																					}
																					HX_STACK_LINE(541)
																					return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(541)
																		Float len = _Function_12_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
																		HX_STACK_LINE(541)
																		best = (len - circle->radius);
																		HX_STACK_LINE(541)
																		if (((best < min))){
																			HX_STACK_LINE(541)
																			if (((len == (int)0))){
																				HX_STACK_LINE(541)
																				nx = (int)1;
																				HX_STACK_LINE(541)
																				ny = (int)0;
																				HX_STACK_LINE(541)
																				{
																				}
																				HX_STACK_LINE(541)
																				{
																				}
																			}
																			else{
																				HX_STACK_LINE(541)
																				Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
																				HX_STACK_LINE(541)
																				{
																				}
																				HX_STACK_LINE(541)
																				hx::MultEq(nx,t);
																				HX_STACK_LINE(541)
																				hx::MultEq(ny,t);
																			}
																			HX_STACK_LINE(541)
																			{
																				HX_STACK_LINE(541)
																				int t = (int)0;		HX_STACK_VAR(t,"t");
																				HX_STACK_LINE(541)
																				{
																				}
																				HX_STACK_LINE(541)
																				w11->x = (v1->x + (nx * t));
																				HX_STACK_LINE(541)
																				w11->y = (v1->y + (ny * t));
																			}
																			HX_STACK_LINE(541)
																			{
																				HX_STACK_LINE(541)
																				Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																				HX_STACK_LINE(541)
																				{
																				}
																				HX_STACK_LINE(541)
																				w21->x = (circle->worldCOMx + (nx * t));
																				HX_STACK_LINE(541)
																				w21->y = (circle->worldCOMy + (ny * t));
																			}
																			HX_STACK_LINE(541)
																			{
																				HX_STACK_LINE(541)
																				ax->x = nx;
																				HX_STACK_LINE(541)
																				ax->y = ny;
																				HX_STACK_LINE(541)
																				{
																				}
																				HX_STACK_LINE(541)
																				{
																				}
																			}
																		}
																	}
																	else{
																		HX_STACK_LINE(541)
																		{
																			HX_STACK_LINE(541)
																			Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(541)
																			{
																			}
																			HX_STACK_LINE(541)
																			w21->x = (circle->worldCOMx + (a0->gnormx * t));
																			HX_STACK_LINE(541)
																			w21->y = (circle->worldCOMy + (a0->gnormy * t));
																		}
																		HX_STACK_LINE(541)
																		{
																			HX_STACK_LINE(541)
																			Float t = -(best);		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(541)
																			{
																			}
																			HX_STACK_LINE(541)
																			w11->x = (w21->x + (a0->gnormx * t));
																			HX_STACK_LINE(541)
																			w11->y = (w21->y + (a0->gnormy * t));
																		}
																		HX_STACK_LINE(541)
																		{
																			HX_STACK_LINE(541)
																			ax->x = a0->gnormx;
																			HX_STACK_LINE(541)
																			ax->y = a0->gnormy;
																			HX_STACK_LINE(541)
																			{
																			}
																			HX_STACK_LINE(541)
																			{
																			}
																		}
																	}
																}
															}
															HX_STACK_LINE(541)
															if ((swapped)){
																HX_STACK_LINE(541)
																ax->x = -(ax->x);
																HX_STACK_LINE(541)
																ax->y = -(ax->y);
															}
															HX_STACK_LINE(541)
															return best;
														}
														return null();
													}
												};
												struct _Function_8_2{
													inline static Float Block( bool &swapped,::zpp_nape::shape::ZPP_Shape &s11,::zpp_nape::geom::ZPP_Vec2 &w21,::zpp_nape::shape::ZPP_Shape &s21,::zpp_nape::geom::ZPP_Vec2 &ax,Float &min,::zpp_nape::geom::ZPP_Vec2 &w11){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
														{
															HX_STACK_LINE(541)
															::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
															HX_STACK_LINE(541)
															::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
															HX_STACK_LINE(541)
															Float best = -1e+100;		HX_STACK_VAR(best,"best");
															HX_STACK_LINE(541)
															::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
															HX_STACK_LINE(541)
															::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
															HX_STACK_LINE(541)
															int besti = (int)0;		HX_STACK_VAR(besti,"besti");
															HX_STACK_LINE(541)
															{
																HX_STACK_LINE(541)
																::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = p1->edges->head;		HX_STACK_VAR(cx_ite2,"cx_ite2");
																HX_STACK_LINE(541)
																while(((cx_ite2 != null()))){
																	HX_STACK_LINE(541)
																	::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
																	HX_STACK_LINE(541)
																	{
																		HX_STACK_LINE(541)
																		Float min1 = 1e100;		HX_STACK_VAR(min1,"min1");
																		HX_STACK_LINE(541)
																		{
																			HX_STACK_LINE(541)
																			::zpp_nape::geom::ZPP_Vec2 cx_ite3 = p2->gverts->next;		HX_STACK_VAR(cx_ite3,"cx_ite3");
																			HX_STACK_LINE(541)
																			while(((cx_ite3 != null()))){
																				HX_STACK_LINE(541)
																				::zpp_nape::geom::ZPP_Vec2 v = cx_ite3;		HX_STACK_VAR(v,"v");
																				HX_STACK_LINE(541)
																				{
																					HX_STACK_LINE(541)
																					Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																					HX_STACK_LINE(541)
																					if (((k < min1))){
																						HX_STACK_LINE(541)
																						min1 = k;
																					}
																				}
																				HX_STACK_LINE(541)
																				cx_ite3 = cx_ite3->next;
																			}
																		}
																		HX_STACK_LINE(541)
																		hx::SubEq(min1,a->gprojection);
																		HX_STACK_LINE(541)
																		if (((min1 > min))){
																			HX_STACK_LINE(541)
																			best = min1;
																			HX_STACK_LINE(541)
																			break;
																		}
																		HX_STACK_LINE(541)
																		if (((min1 > (int)0))){
																			HX_STACK_LINE(541)
																			if (((min1 > best))){
																				HX_STACK_LINE(541)
																				best = min1;
																				HX_STACK_LINE(541)
																				a1 = a;
																				HX_STACK_LINE(541)
																				besti = (int)1;
																			}
																		}
																		else{
																			HX_STACK_LINE(541)
																			if (((bool((best < (int)0)) && bool((min1 > best))))){
																				HX_STACK_LINE(541)
																				best = min1;
																				HX_STACK_LINE(541)
																				a1 = a;
																				HX_STACK_LINE(541)
																				besti = (int)1;
																			}
																		}
																	}
																	HX_STACK_LINE(541)
																	cx_ite2 = cx_ite2->next;
																}
															}
															struct _Function_9_1{
																inline static Float Block( bool &swapped,::zpp_nape::geom::ZPP_Vec2 &w21,::zpp_nape::shape::ZPP_Edge &a2,Float &best,::zpp_nape::geom::ZPP_Vec2 &ax,::zpp_nape::shape::ZPP_Edge &a1,::zpp_nape::shape::ZPP_Polygon &p2,int &besti,Float &min,::zpp_nape::shape::ZPP_Polygon &p1,::zpp_nape::geom::ZPP_Vec2 &w11){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
																	{
																		HX_STACK_LINE(541)
																		{
																			HX_STACK_LINE(541)
																			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = p2->edges->head;		HX_STACK_VAR(cx_ite2,"cx_ite2");
																			HX_STACK_LINE(541)
																			while(((cx_ite2 != null()))){
																				HX_STACK_LINE(541)
																				::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
																				HX_STACK_LINE(541)
																				{
																					HX_STACK_LINE(541)
																					Float min1 = 1e100;		HX_STACK_VAR(min1,"min1");
																					HX_STACK_LINE(541)
																					{
																						HX_STACK_LINE(541)
																						::zpp_nape::geom::ZPP_Vec2 cx_ite3 = p1->gverts->next;		HX_STACK_VAR(cx_ite3,"cx_ite3");
																						HX_STACK_LINE(541)
																						while(((cx_ite3 != null()))){
																							HX_STACK_LINE(541)
																							::zpp_nape::geom::ZPP_Vec2 v = cx_ite3;		HX_STACK_VAR(v,"v");
																							HX_STACK_LINE(541)
																							{
																								HX_STACK_LINE(541)
																								Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																								HX_STACK_LINE(541)
																								if (((k < min1))){
																									HX_STACK_LINE(541)
																									min1 = k;
																								}
																							}
																							HX_STACK_LINE(541)
																							cx_ite3 = cx_ite3->next;
																						}
																					}
																					HX_STACK_LINE(541)
																					hx::SubEq(min1,a->gprojection);
																					HX_STACK_LINE(541)
																					if (((min1 > min))){
																						HX_STACK_LINE(541)
																						best = min1;
																						HX_STACK_LINE(541)
																						break;
																					}
																					HX_STACK_LINE(541)
																					if (((min1 > (int)0))){
																						HX_STACK_LINE(541)
																						if (((min1 > best))){
																							HX_STACK_LINE(541)
																							best = min1;
																							HX_STACK_LINE(541)
																							a2 = a;
																							HX_STACK_LINE(541)
																							besti = (int)2;
																						}
																					}
																					else{
																						HX_STACK_LINE(541)
																						if (((bool((best < (int)0)) && bool((min1 > best))))){
																							HX_STACK_LINE(541)
																							best = min1;
																							HX_STACK_LINE(541)
																							a2 = a;
																							HX_STACK_LINE(541)
																							besti = (int)2;
																						}
																					}
																				}
																				HX_STACK_LINE(541)
																				cx_ite2 = cx_ite2->next;
																			}
																		}
																		struct _Function_10_1{
																			inline static Float Block( bool &swapped,::zpp_nape::geom::ZPP_Vec2 &w21,::zpp_nape::shape::ZPP_Edge &a2,::zpp_nape::geom::ZPP_Vec2 &ax,Float &best,::zpp_nape::shape::ZPP_Edge &a1,::zpp_nape::shape::ZPP_Polygon &p2,int &besti,::zpp_nape::geom::ZPP_Vec2 &w11,::zpp_nape::shape::ZPP_Polygon &p1){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
																				{
																					HX_STACK_LINE(541)
																					::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
																					::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
																					HX_STACK_LINE(541)
																					::zpp_nape::shape::ZPP_Edge ax1;		HX_STACK_VAR(ax1,"ax1");
																					HX_STACK_LINE(541)
																					if (((besti == (int)1))){
																						HX_STACK_LINE(541)
																						q1 = p1;
																						HX_STACK_LINE(541)
																						q2 = p2;
																						HX_STACK_LINE(541)
																						ax1 = a1;
																					}
																					else{
																						HX_STACK_LINE(541)
																						q1 = p2;
																						HX_STACK_LINE(541)
																						q2 = p1;
																						HX_STACK_LINE(541)
																						ax1 = a2;
																						HX_STACK_LINE(541)
																						::zpp_nape::geom::ZPP_Vec2 tmp = w11;		HX_STACK_VAR(tmp,"tmp");
																						HX_STACK_LINE(541)
																						w11 = w21;
																						HX_STACK_LINE(541)
																						w21 = tmp;
																						HX_STACK_LINE(541)
																						swapped = !(swapped);
																					}
																					HX_STACK_LINE(541)
																					::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
																					HX_STACK_LINE(541)
																					Float min1 = 1e100;		HX_STACK_VAR(min1,"min1");
																					HX_STACK_LINE(541)
																					{
																						HX_STACK_LINE(541)
																						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = q2->edges->head;		HX_STACK_VAR(cx_ite2,"cx_ite2");
																						HX_STACK_LINE(541)
																						while(((cx_ite2 != null()))){
																							HX_STACK_LINE(541)
																							::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
																							HX_STACK_LINE(541)
																							{
																								HX_STACK_LINE(541)
																								Float k = ((ax1->gnormx * a->gnormx) + (ax1->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
																								HX_STACK_LINE(541)
																								if (((k < min1))){
																									HX_STACK_LINE(541)
																									min1 = k;
																									HX_STACK_LINE(541)
																									ay = a;
																								}
																							}
																							HX_STACK_LINE(541)
																							cx_ite2 = cx_ite2->next;
																						}
																					}
																					HX_STACK_LINE(541)
																					if ((swapped)){
																						HX_STACK_LINE(541)
																						ax->x = -(ax1->gnormx);
																						HX_STACK_LINE(541)
																						ax->y = -(ax1->gnormy);
																						HX_STACK_LINE(541)
																						{
																						}
																						HX_STACK_LINE(541)
																						{
																						}
																					}
																					else{
																						HX_STACK_LINE(541)
																						ax->x = ax1->gnormx;
																						HX_STACK_LINE(541)
																						ax->y = ax1->gnormy;
																						HX_STACK_LINE(541)
																						{
																						}
																						HX_STACK_LINE(541)
																						{
																						}
																					}
																					struct _Function_11_1{
																						inline static Float Block( bool &swapped,::zpp_nape::geom::ZPP_Vec2 &w21,::zpp_nape::shape::ZPP_Edge &ay,Float &best,::zpp_nape::geom::ZPP_Vec2 &ax,::zpp_nape::shape::ZPP_Edge &ax1,::zpp_nape::geom::ZPP_Vec2 &w11){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
																							{
																								HX_STACK_LINE(541)
																								::zpp_nape::geom::ZPP_Vec2 v0 = ax1->gp0;		HX_STACK_VAR(v0,"v0");
																								HX_STACK_LINE(541)
																								::zpp_nape::geom::ZPP_Vec2 v1 = ax1->gp1;		HX_STACK_VAR(v1,"v1");
																								HX_STACK_LINE(541)
																								::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
																								HX_STACK_LINE(541)
																								::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
																								HX_STACK_LINE(541)
																								Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
																								HX_STACK_LINE(541)
																								Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
																								HX_STACK_LINE(541)
																								Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
																								HX_STACK_LINE(541)
																								Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
																								HX_STACK_LINE(541)
																								{
																									HX_STACK_LINE(541)
																									vx = (v1->x - v0->x);
																									HX_STACK_LINE(541)
																									vy = (v1->y - v0->y);
																								}
																								HX_STACK_LINE(541)
																								{
																									HX_STACK_LINE(541)
																									qx = (q11->x - q0->x);
																									HX_STACK_LINE(541)
																									qy = (q11->y - q0->y);
																								}
																								HX_STACK_LINE(541)
																								Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
																								HX_STACK_LINE(541)
																								Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
																								HX_STACK_LINE(541)
																								Float t11 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t11,"t11");
																								HX_STACK_LINE(541)
																								Float t21 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t21,"t21");
																								HX_STACK_LINE(541)
																								Float s12 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s12,"s12");
																								HX_STACK_LINE(541)
																								Float s22 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s22,"s22");
																								HX_STACK_LINE(541)
																								if (((t11 < (int)0))){
																									HX_STACK_LINE(541)
																									t11 = (int)0;
																								}
																								else{
																									HX_STACK_LINE(541)
																									if (((t11 > (int)1))){
																										HX_STACK_LINE(541)
																										t11 = (int)1;
																									}
																								}
																								HX_STACK_LINE(541)
																								if (((t21 < (int)0))){
																									HX_STACK_LINE(541)
																									t21 = (int)0;
																								}
																								else{
																									HX_STACK_LINE(541)
																									if (((t21 > (int)1))){
																										HX_STACK_LINE(541)
																										t21 = (int)1;
																									}
																								}
																								HX_STACK_LINE(541)
																								if (((s12 < (int)0))){
																									HX_STACK_LINE(541)
																									s12 = (int)0;
																								}
																								else{
																									HX_STACK_LINE(541)
																									if (((s12 > (int)1))){
																										HX_STACK_LINE(541)
																										s12 = (int)1;
																									}
																								}
																								HX_STACK_LINE(541)
																								if (((s22 < (int)0))){
																									HX_STACK_LINE(541)
																									s22 = (int)0;
																								}
																								else{
																									HX_STACK_LINE(541)
																									if (((s22 > (int)1))){
																										HX_STACK_LINE(541)
																										s22 = (int)1;
																									}
																								}
																								HX_STACK_LINE(541)
																								Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
																								HX_STACK_LINE(541)
																								Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
																								HX_STACK_LINE(541)
																								{
																									HX_STACK_LINE(541)
																									Float t = t11;		HX_STACK_VAR(t,"t");
																									HX_STACK_LINE(541)
																									{
																									}
																									HX_STACK_LINE(541)
																									f1x = (v0->x + (vx * t));
																									HX_STACK_LINE(541)
																									f1y = (v0->y + (vy * t));
																								}
																								HX_STACK_LINE(541)
																								Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
																								HX_STACK_LINE(541)
																								Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
																								HX_STACK_LINE(541)
																								{
																									HX_STACK_LINE(541)
																									Float t = t21;		HX_STACK_VAR(t,"t");
																									HX_STACK_LINE(541)
																									{
																									}
																									HX_STACK_LINE(541)
																									f2x = (v0->x + (vx * t));
																									HX_STACK_LINE(541)
																									f2y = (v0->y + (vy * t));
																								}
																								HX_STACK_LINE(541)
																								Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
																								HX_STACK_LINE(541)
																								Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
																								HX_STACK_LINE(541)
																								{
																									HX_STACK_LINE(541)
																									Float t = s12;		HX_STACK_VAR(t,"t");
																									HX_STACK_LINE(541)
																									{
																									}
																									HX_STACK_LINE(541)
																									g1x = (q0->x + (qx * t));
																									HX_STACK_LINE(541)
																									g1y = (q0->y + (qy * t));
																								}
																								HX_STACK_LINE(541)
																								Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
																								HX_STACK_LINE(541)
																								Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
																								HX_STACK_LINE(541)
																								{
																									HX_STACK_LINE(541)
																									Float t = s22;		HX_STACK_VAR(t,"t");
																									HX_STACK_LINE(541)
																									{
																									}
																									HX_STACK_LINE(541)
																									g2x = (q0->x + (qx * t));
																									HX_STACK_LINE(541)
																									g2y = (q0->y + (qy * t));
																								}
																								struct _Function_12_1{
																									inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &q0,Float &f1y,Float &f1x){
																										HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
																										{
																											HX_STACK_LINE(541)
																											Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																											HX_STACK_LINE(541)
																											Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																											HX_STACK_LINE(541)
																											{
																												HX_STACK_LINE(541)
																												dx = (f1x - q0->x);
																												HX_STACK_LINE(541)
																												dy = (f1y - q0->y);
																											}
																											HX_STACK_LINE(541)
																											return ((dx * dx) + (dy * dy));
																										}
																										return null();
																									}
																								};
																								HX_STACK_LINE(541)
																								Float d1 = _Function_12_1::Block(q0,f1y,f1x);		HX_STACK_VAR(d1,"d1");
																								struct _Function_12_2{
																									inline static Float Block( Float &f2x,::zpp_nape::geom::ZPP_Vec2 &q11,Float &f2y){
																										HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
																										{
																											HX_STACK_LINE(541)
																											Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																											HX_STACK_LINE(541)
																											Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																											HX_STACK_LINE(541)
																											{
																												HX_STACK_LINE(541)
																												dx = (f2x - q11->x);
																												HX_STACK_LINE(541)
																												dy = (f2y - q11->y);
																											}
																											HX_STACK_LINE(541)
																											return ((dx * dx) + (dy * dy));
																										}
																										return null();
																									}
																								};
																								HX_STACK_LINE(541)
																								Float d2 = _Function_12_2::Block(f2x,q11,f2y);		HX_STACK_VAR(d2,"d2");
																								struct _Function_12_3{
																									inline static Float Block( Float &g1x,::zpp_nape::geom::ZPP_Vec2 &v0,Float &g1y){
																										HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
																										{
																											HX_STACK_LINE(541)
																											Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																											HX_STACK_LINE(541)
																											Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																											HX_STACK_LINE(541)
																											{
																												HX_STACK_LINE(541)
																												dx = (g1x - v0->x);
																												HX_STACK_LINE(541)
																												dy = (g1y - v0->y);
																											}
																											HX_STACK_LINE(541)
																											return ((dx * dx) + (dy * dy));
																										}
																										return null();
																									}
																								};
																								HX_STACK_LINE(541)
																								Float e1 = _Function_12_3::Block(g1x,v0,g1y);		HX_STACK_VAR(e1,"e1");
																								struct _Function_12_4{
																									inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &v1,Float &g2y,Float &g2x){
																										HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
																										{
																											HX_STACK_LINE(541)
																											Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																											HX_STACK_LINE(541)
																											Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																											HX_STACK_LINE(541)
																											{
																												HX_STACK_LINE(541)
																												dx = (g2x - v1->x);
																												HX_STACK_LINE(541)
																												dy = (g2y - v1->y);
																											}
																											HX_STACK_LINE(541)
																											return ((dx * dx) + (dy * dy));
																										}
																										return null();
																									}
																								};
																								HX_STACK_LINE(541)
																								Float e2 = _Function_12_4::Block(v1,g2y,g2x);		HX_STACK_VAR(e2,"e2");
																								HX_STACK_LINE(541)
																								Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
																								HX_STACK_LINE(541)
																								Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
																								HX_STACK_LINE(541)
																								::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
																								HX_STACK_LINE(541)
																								if (((d1 < d2))){
																									HX_STACK_LINE(541)
																									{
																										HX_STACK_LINE(541)
																										minfx = f1x;
																										HX_STACK_LINE(541)
																										minfy = f1y;
																										HX_STACK_LINE(541)
																										{
																										}
																										HX_STACK_LINE(541)
																										{
																										}
																									}
																									HX_STACK_LINE(541)
																									minq = q0;
																								}
																								else{
																									HX_STACK_LINE(541)
																									{
																										HX_STACK_LINE(541)
																										minfx = f2x;
																										HX_STACK_LINE(541)
																										minfy = f2y;
																										HX_STACK_LINE(541)
																										{
																										}
																										HX_STACK_LINE(541)
																										{
																										}
																									}
																									HX_STACK_LINE(541)
																									minq = q11;
																									HX_STACK_LINE(541)
																									d1 = d2;
																								}
																								HX_STACK_LINE(541)
																								Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
																								HX_STACK_LINE(541)
																								Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
																								HX_STACK_LINE(541)
																								::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
																								HX_STACK_LINE(541)
																								if (((e1 < e2))){
																									HX_STACK_LINE(541)
																									{
																										HX_STACK_LINE(541)
																										mingx = g1x;
																										HX_STACK_LINE(541)
																										mingy = g1y;
																										HX_STACK_LINE(541)
																										{
																										}
																										HX_STACK_LINE(541)
																										{
																										}
																									}
																									HX_STACK_LINE(541)
																									minv = v0;
																								}
																								else{
																									HX_STACK_LINE(541)
																									{
																										HX_STACK_LINE(541)
																										mingx = g2x;
																										HX_STACK_LINE(541)
																										mingy = g2y;
																										HX_STACK_LINE(541)
																										{
																										}
																										HX_STACK_LINE(541)
																										{
																										}
																									}
																									HX_STACK_LINE(541)
																									minv = v1;
																									HX_STACK_LINE(541)
																									e1 = e2;
																								}
																								HX_STACK_LINE(541)
																								if (((d1 < e1))){
																									HX_STACK_LINE(541)
																									{
																										HX_STACK_LINE(541)
																										w11->x = minfx;
																										HX_STACK_LINE(541)
																										w11->y = minfy;
																										HX_STACK_LINE(541)
																										{
																										}
																										HX_STACK_LINE(541)
																										{
																										}
																									}
																									HX_STACK_LINE(541)
																									{
																										HX_STACK_LINE(541)
																										w21->x = minq->x;
																										HX_STACK_LINE(541)
																										w21->y = minq->y;
																										HX_STACK_LINE(541)
																										{
																										}
																										HX_STACK_LINE(541)
																										{
																										}
																									}
																									HX_STACK_LINE(541)
																									best = ::Math_obj::sqrt(d1);
																								}
																								else{
																									HX_STACK_LINE(541)
																									{
																										HX_STACK_LINE(541)
																										w21->x = mingx;
																										HX_STACK_LINE(541)
																										w21->y = mingy;
																										HX_STACK_LINE(541)
																										{
																										}
																										HX_STACK_LINE(541)
																										{
																										}
																									}
																									HX_STACK_LINE(541)
																									{
																										HX_STACK_LINE(541)
																										w11->x = minv->x;
																										HX_STACK_LINE(541)
																										w11->y = minv->y;
																										HX_STACK_LINE(541)
																										{
																										}
																										HX_STACK_LINE(541)
																										{
																										}
																									}
																									HX_STACK_LINE(541)
																									best = ::Math_obj::sqrt(e1);
																								}
																								HX_STACK_LINE(541)
																								if (((best != (int)0))){
																									HX_STACK_LINE(541)
																									{
																										HX_STACK_LINE(541)
																										ax->x = (w21->x - w11->x);
																										HX_STACK_LINE(541)
																										ax->y = (w21->y - w11->y);
																									}
																									HX_STACK_LINE(541)
																									{
																										HX_STACK_LINE(541)
																										Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
																										HX_STACK_LINE(541)
																										{
																										}
																										HX_STACK_LINE(541)
																										hx::MultEq(ax->x,t);
																										HX_STACK_LINE(541)
																										hx::MultEq(ax->y,t);
																									}
																									HX_STACK_LINE(541)
																									if ((swapped)){
																										HX_STACK_LINE(541)
																										ax->x = -(ax->x);
																										HX_STACK_LINE(541)
																										ax->y = -(ax->y);
																									}
																								}
																								HX_STACK_LINE(541)
																								return best;
																							}
																							return null();
																						}
																					};
																					struct _Function_11_2{
																						inline static Float Block( ::zpp_nape::shape::ZPP_Edge &ay,::zpp_nape::shape::ZPP_Edge &ax1,::zpp_nape::geom::ZPP_Vec2 &w21,::zpp_nape::geom::ZPP_Vec2 &w11){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
																							{
																								HX_STACK_LINE(541)
																								Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
																								HX_STACK_LINE(541)
																								Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
																								HX_STACK_LINE(541)
																								{
																									HX_STACK_LINE(541)
																									c0x = ay->gp0->x;
																									HX_STACK_LINE(541)
																									c0y = ay->gp0->y;
																									HX_STACK_LINE(541)
																									{
																									}
																									HX_STACK_LINE(541)
																									{
																									}
																								}
																								HX_STACK_LINE(541)
																								Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
																								HX_STACK_LINE(541)
																								Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
																								HX_STACK_LINE(541)
																								{
																									HX_STACK_LINE(541)
																									c1x = ay->gp1->x;
																									HX_STACK_LINE(541)
																									c1y = ay->gp1->y;
																									HX_STACK_LINE(541)
																									{
																									}
																									HX_STACK_LINE(541)
																									{
																									}
																								}
																								HX_STACK_LINE(541)
																								Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
																								HX_STACK_LINE(541)
																								Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
																								HX_STACK_LINE(541)
																								{
																									HX_STACK_LINE(541)
																									dvx = (c1x - c0x);
																									HX_STACK_LINE(541)
																									dvy = (c1y - c0y);
																								}
																								HX_STACK_LINE(541)
																								Float d0 = ((ax1->gnormy * c0x) - (ax1->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
																								HX_STACK_LINE(541)
																								Float d1 = ((ax1->gnormy * c1x) - (ax1->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
																								HX_STACK_LINE(541)
																								Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
																								HX_STACK_LINE(541)
																								Float t = (((-(ax1->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
																								HX_STACK_LINE(541)
																								if (((t > ::nape::Config_obj::epsilon))){
																									HX_STACK_LINE(541)
																									Float t3 = t;		HX_STACK_VAR(t3,"t3");
																									HX_STACK_LINE(541)
																									{
																									}
																									HX_STACK_LINE(541)
																									hx::AddEq(c0x,(dvx * t3));
																									HX_STACK_LINE(541)
																									hx::AddEq(c0y,(dvy * t3));
																								}
																								HX_STACK_LINE(541)
																								Float t3 = (((-(ax1->tp0) - d1)) * den);		HX_STACK_VAR(t3,"t3");
																								HX_STACK_LINE(541)
																								if (((t3 < -(::nape::Config_obj::epsilon)))){
																									HX_STACK_LINE(541)
																									Float t4 = t3;		HX_STACK_VAR(t4,"t4");
																									HX_STACK_LINE(541)
																									{
																									}
																									HX_STACK_LINE(541)
																									hx::AddEq(c1x,(dvx * t4));
																									HX_STACK_LINE(541)
																									hx::AddEq(c1y,(dvy * t4));
																								}
																								HX_STACK_LINE(541)
																								Float c0d = (((c0x * ax1->gnormx) + (c0y * ax1->gnormy)) - ax1->gprojection);		HX_STACK_VAR(c0d,"c0d");
																								HX_STACK_LINE(541)
																								Float c1d = (((c1x * ax1->gnormx) + (c1y * ax1->gnormy)) - ax1->gprojection);		HX_STACK_VAR(c1d,"c1d");
																								struct _Function_12_1{
																									inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w21,::zpp_nape::shape::ZPP_Edge &ax1,Float &c0y,Float &c0d,::zpp_nape::geom::ZPP_Vec2 &w11,Float &c0x){
																										HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
																										{
																											HX_STACK_LINE(541)
																											{
																												HX_STACK_LINE(541)
																												w21->x = c0x;
																												HX_STACK_LINE(541)
																												w21->y = c0y;
																												HX_STACK_LINE(541)
																												{
																												}
																												HX_STACK_LINE(541)
																												{
																												}
																											}
																											HX_STACK_LINE(541)
																											{
																												HX_STACK_LINE(541)
																												Float t4 = -(c0d);		HX_STACK_VAR(t4,"t4");
																												HX_STACK_LINE(541)
																												{
																												}
																												HX_STACK_LINE(541)
																												w11->x = (w21->x + (ax1->gnormx * t4));
																												HX_STACK_LINE(541)
																												w11->y = (w21->y + (ax1->gnormy * t4));
																											}
																											HX_STACK_LINE(541)
																											return c0d;
																										}
																										return null();
																									}
																								};
																								struct _Function_12_2{
																									inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w21,Float &c1y,Float &c1d,::zpp_nape::shape::ZPP_Edge &ax1,Float &c1x,::zpp_nape::geom::ZPP_Vec2 &w11){
																										HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",541);
																										{
																											HX_STACK_LINE(541)
																											{
																												HX_STACK_LINE(541)
																												w21->x = c1x;
																												HX_STACK_LINE(541)
																												w21->y = c1y;
																												HX_STACK_LINE(541)
																												{
																												}
																												HX_STACK_LINE(541)
																												{
																												}
																											}
																											HX_STACK_LINE(541)
																											{
																												HX_STACK_LINE(541)
																												Float t4 = -(c1d);		HX_STACK_VAR(t4,"t4");
																												HX_STACK_LINE(541)
																												{
																												}
																												HX_STACK_LINE(541)
																												w11->x = (w21->x + (ax1->gnormx * t4));
																												HX_STACK_LINE(541)
																												w11->y = (w21->y + (ax1->gnormy * t4));
																											}
																											HX_STACK_LINE(541)
																											return c1d;
																										}
																										return null();
																									}
																								};
																								HX_STACK_LINE(541)
																								return (  (((c0d < c1d))) ? Float(_Function_12_1::Block(w21,ax1,c0y,c0d,w11,c0x)) : Float(_Function_12_2::Block(w21,c1y,c1d,ax1,c1x,w11)) );
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(541)
																					return (  (((best >= (int)0))) ? Float(_Function_11_1::Block(swapped,w21,ay,best,ax,ax1,w11)) : Float(_Function_11_2::Block(ay,ax1,w21,w11)) );
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(541)
																		return (  (((best < min))) ? Float(_Function_10_1::Block(swapped,w21,a2,ax,best,a1,p2,besti,w11,p1)) : Float(min) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(541)
															return (  (((best < min))) ? Float(_Function_9_1::Block(swapped,w21,a2,best,ax,a1,p2,besti,min,p1,w11)) : Float(min) );
														}
														return null();
													}
												};
												HX_STACK_LINE(541)
												return (  (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))) ? Float(_Function_8_1::Block(swapped,s11,w21,s21,ax,min,w11)) : Float(_Function_8_2::Block(swapped,s11,w21,s21,ax,min,w11)) );
											}
											return null();
										}
									};
									HX_STACK_LINE(541)
									return (  (((bool((s11->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s21->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))) ? Float(_Function_7_1::Block(w21,s21,w11,ax,s11,min)) : Float(_Function_7_2::Block(w21,s21,w11,ax,s11,min)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(541)
						Float dist = _Function_6_1::Block(s1,t2,ax,s2,t1,min);		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(542)
						if (((dist < min))){
							HX_STACK_LINE(543)
							min = dist;
							HX_STACK_LINE(544)
							{
								HX_STACK_LINE(545)
								w1->x = t1->x;
								HX_STACK_LINE(546)
								w1->y = t1->y;
								HX_STACK_LINE(547)
								{
								}
								HX_STACK_LINE(555)
								{
								}
							}
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(565)
								w2->x = t2->x;
								HX_STACK_LINE(566)
								w2->y = t2->y;
								HX_STACK_LINE(567)
								{
								}
								HX_STACK_LINE(575)
								{
								}
							}
						}
					}
					HX_STACK_LINE(586)
					cx_ite1 = cx_ite1->next;
				}
			}
			HX_STACK_LINE(590)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(593)
	{
		HX_STACK_LINE(594)
		::zpp_nape::geom::ZPP_Vec2 o = t1;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(595)
		{
		}
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			if (((o->outer != null()))){
				HX_STACK_LINE(603)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(603)
				o->outer = null();
			}
			HX_STACK_LINE(603)
			o->_isimmutable = null();
			HX_STACK_LINE(603)
			o->_validate = null();
			HX_STACK_LINE(603)
			o->_invalidate = null();
		}
		HX_STACK_LINE(604)
		o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(605)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(610)
	{
		HX_STACK_LINE(611)
		::zpp_nape::geom::ZPP_Vec2 o = t2;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(612)
		{
		}
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			if (((o->outer != null()))){
				HX_STACK_LINE(620)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(620)
				o->outer = null();
			}
			HX_STACK_LINE(620)
			o->_isimmutable = null();
			HX_STACK_LINE(620)
			o->_validate = null();
			HX_STACK_LINE(620)
			o->_invalidate = null();
		}
		HX_STACK_LINE(621)
		o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(622)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(627)
	return min;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_SweepDistance_obj,distanceBody,return )

Float ZPP_SweepDistance_obj::distance( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,::zpp_nape::geom::ZPP_Vec2 w1,::zpp_nape::geom::ZPP_Vec2 w2,::zpp_nape::geom::ZPP_Vec2 axis,hx::Null< Float >  __o_upperBound){
Float upperBound = __o_upperBound.Default(1e100);
	HX_STACK_PUSH("ZPP_SweepDistance::distance","zpp_nape/geom/SweepDistance.hx",630);
	HX_STACK_ARG(s1,"s1");
	HX_STACK_ARG(s2,"s2");
	HX_STACK_ARG(w1,"w1");
	HX_STACK_ARG(w2,"w2");
	HX_STACK_ARG(axis,"axis");
	HX_STACK_ARG(upperBound,"upperBound");
{
		HX_STACK_LINE(630)
		if (((bool((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
			HX_STACK_LINE(632)
			::zpp_nape::shape::ZPP_Circle c1 = s1->circle;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(633)
			::zpp_nape::shape::ZPP_Circle c2 = s2->circle;		HX_STACK_VAR(c2,"c2");
			HX_STACK_LINE(634)
			Float dist;		HX_STACK_VAR(dist,"dist");
			HX_STACK_LINE(635)
			{
				HX_STACK_LINE(636)
				Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(637)
				Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(638)
				{
					HX_STACK_LINE(639)
					nx = (c2->worldCOMx - c1->worldCOMx);
					HX_STACK_LINE(640)
					ny = (c2->worldCOMy - c1->worldCOMy);
				}
				struct _Function_3_1{
					inline static Float Block( Float &nx,Float &ny){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",642);
						{
							HX_STACK_LINE(642)
							{
							}
							HX_STACK_LINE(642)
							return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
						}
						return null();
					}
				};
				HX_STACK_LINE(642)
				Float len = _Function_3_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(643)
				dist = (len - ((c1->radius + c2->radius)));
				HX_STACK_LINE(644)
				if (((dist < upperBound))){
					HX_STACK_LINE(645)
					if (((len == (int)0))){
						HX_STACK_LINE(646)
						nx = (int)1;
						HX_STACK_LINE(647)
						ny = (int)0;
						HX_STACK_LINE(648)
						{
						}
						HX_STACK_LINE(656)
						{
						}
					}
					else{
						HX_STACK_LINE(666)
						Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(667)
						{
						}
						HX_STACK_LINE(675)
						hx::MultEq(nx,t);
						HX_STACK_LINE(676)
						hx::MultEq(ny,t);
					}
					HX_STACK_LINE(678)
					{
						HX_STACK_LINE(679)
						Float t = c1->radius;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(680)
						{
						}
						HX_STACK_LINE(688)
						w1->x = (c1->worldCOMx + (nx * t));
						HX_STACK_LINE(689)
						w1->y = (c1->worldCOMy + (ny * t));
					}
					HX_STACK_LINE(691)
					{
						HX_STACK_LINE(692)
						Float t = -(c2->radius);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(693)
						{
						}
						HX_STACK_LINE(701)
						w2->x = (c2->worldCOMx + (nx * t));
						HX_STACK_LINE(702)
						w2->y = (c2->worldCOMy + (ny * t));
					}
					HX_STACK_LINE(704)
					{
						HX_STACK_LINE(705)
						axis->x = nx;
						HX_STACK_LINE(706)
						axis->y = ny;
						HX_STACK_LINE(707)
						{
						}
						HX_STACK_LINE(715)
						{
						}
					}
				}
			}
			HX_STACK_LINE(726)
			return dist;
		}
		else{
			HX_STACK_LINE(729)
			bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
			HX_STACK_LINE(730)
			if (((bool((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
				HX_STACK_LINE(731)
				::zpp_nape::shape::ZPP_Shape tmp = s1;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(732)
				s1 = s2;
				HX_STACK_LINE(733)
				s2 = tmp;
				HX_STACK_LINE(734)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = w1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(735)
				w1 = w2;
				HX_STACK_LINE(736)
				w2 = tmp2;
				HX_STACK_LINE(737)
				swapped = true;
			}
			HX_STACK_LINE(739)
			if (((bool((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))){
				HX_STACK_LINE(740)
				::zpp_nape::shape::ZPP_Polygon poly = s1->polygon;		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(741)
				::zpp_nape::shape::ZPP_Circle circle = s2->circle;		HX_STACK_VAR(circle,"circle");
				HX_STACK_LINE(742)
				Float best = -1e+100;		HX_STACK_VAR(best,"best");
				HX_STACK_LINE(743)
				::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
				HX_STACK_LINE(744)
				{
					HX_STACK_LINE(745)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(746)
					while(((cx_ite != null()))){
						HX_STACK_LINE(747)
						::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(748)
						{
							HX_STACK_LINE(749)
							Float dist = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist,"dist");
							HX_STACK_LINE(750)
							if (((dist > upperBound))){
								HX_STACK_LINE(751)
								best = dist;
								HX_STACK_LINE(752)
								break;
							}
							HX_STACK_LINE(754)
							if (((dist > (int)0))){
								HX_STACK_LINE(754)
								if (((dist > best))){
									HX_STACK_LINE(756)
									best = dist;
									HX_STACK_LINE(757)
									a0 = a;
								}
							}
							else{
								HX_STACK_LINE(760)
								if (((bool((best < (int)0)) && bool((dist > best))))){
									HX_STACK_LINE(761)
									best = dist;
									HX_STACK_LINE(762)
									a0 = a;
								}
							}
						}
						HX_STACK_LINE(765)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(768)
				if (((best < upperBound))){
					HX_STACK_LINE(769)
					::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
					HX_STACK_LINE(770)
					::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(771)
					Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(772)
					if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
						HX_STACK_LINE(774)
						Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(775)
						Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(776)
						{
							HX_STACK_LINE(777)
							nx = (circle->worldCOMx - v0->x);
							HX_STACK_LINE(778)
							ny = (circle->worldCOMy - v0->y);
						}
						struct _Function_5_1{
							inline static Float Block( Float &nx,Float &ny){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",780);
								{
									HX_STACK_LINE(780)
									{
									}
									HX_STACK_LINE(780)
									return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
								}
								return null();
							}
						};
						HX_STACK_LINE(780)
						Float len = _Function_5_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(781)
						best = (len - circle->radius);
						HX_STACK_LINE(782)
						if (((best < upperBound))){
							HX_STACK_LINE(783)
							if (((len == (int)0))){
								HX_STACK_LINE(784)
								nx = (int)1;
								HX_STACK_LINE(785)
								ny = (int)0;
								HX_STACK_LINE(786)
								{
								}
								HX_STACK_LINE(794)
								{
								}
							}
							else{
								HX_STACK_LINE(804)
								Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(805)
								{
								}
								HX_STACK_LINE(813)
								hx::MultEq(nx,t);
								HX_STACK_LINE(814)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(816)
							{
								HX_STACK_LINE(817)
								int t = (int)0;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(818)
								{
								}
								HX_STACK_LINE(826)
								w1->x = (v0->x + (nx * t));
								HX_STACK_LINE(827)
								w1->y = (v0->y + (ny * t));
							}
							HX_STACK_LINE(829)
							{
								HX_STACK_LINE(830)
								Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(831)
								{
								}
								HX_STACK_LINE(839)
								w2->x = (circle->worldCOMx + (nx * t));
								HX_STACK_LINE(840)
								w2->y = (circle->worldCOMy + (ny * t));
							}
							HX_STACK_LINE(842)
							{
								HX_STACK_LINE(843)
								axis->x = nx;
								HX_STACK_LINE(844)
								axis->y = ny;
								HX_STACK_LINE(845)
								{
								}
								HX_STACK_LINE(853)
								{
								}
							}
						}
					}
					else{
						HX_STACK_LINE(865)
						if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
							HX_STACK_LINE(867)
							Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(868)
							Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
							HX_STACK_LINE(869)
							{
								HX_STACK_LINE(870)
								nx = (circle->worldCOMx - v1->x);
								HX_STACK_LINE(871)
								ny = (circle->worldCOMy - v1->y);
							}
							struct _Function_6_1{
								inline static Float Block( Float &nx,Float &ny){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",873);
									{
										HX_STACK_LINE(873)
										{
										}
										HX_STACK_LINE(873)
										return ::Math_obj::sqrt(((nx * nx) + (ny * ny)));
									}
									return null();
								}
							};
							HX_STACK_LINE(873)
							Float len = _Function_6_1::Block(nx,ny);		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(874)
							best = (len - circle->radius);
							HX_STACK_LINE(875)
							if (((best < upperBound))){
								HX_STACK_LINE(876)
								if (((len == (int)0))){
									HX_STACK_LINE(877)
									nx = (int)1;
									HX_STACK_LINE(878)
									ny = (int)0;
									HX_STACK_LINE(879)
									{
									}
									HX_STACK_LINE(887)
									{
									}
								}
								else{
									HX_STACK_LINE(897)
									Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(898)
									{
									}
									HX_STACK_LINE(906)
									hx::MultEq(nx,t);
									HX_STACK_LINE(907)
									hx::MultEq(ny,t);
								}
								HX_STACK_LINE(909)
								{
									HX_STACK_LINE(910)
									int t = (int)0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(911)
									{
									}
									HX_STACK_LINE(919)
									w1->x = (v1->x + (nx * t));
									HX_STACK_LINE(920)
									w1->y = (v1->y + (ny * t));
								}
								HX_STACK_LINE(922)
								{
									HX_STACK_LINE(923)
									Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(924)
									{
									}
									HX_STACK_LINE(932)
									w2->x = (circle->worldCOMx + (nx * t));
									HX_STACK_LINE(933)
									w2->y = (circle->worldCOMy + (ny * t));
								}
								HX_STACK_LINE(935)
								{
									HX_STACK_LINE(936)
									axis->x = nx;
									HX_STACK_LINE(937)
									axis->y = ny;
									HX_STACK_LINE(938)
									{
									}
									HX_STACK_LINE(946)
									{
									}
								}
							}
						}
						else{
							HX_STACK_LINE(959)
							{
								HX_STACK_LINE(960)
								Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(961)
								{
								}
								HX_STACK_LINE(969)
								w2->x = (circle->worldCOMx + (a0->gnormx * t));
								HX_STACK_LINE(970)
								w2->y = (circle->worldCOMy + (a0->gnormy * t));
							}
							HX_STACK_LINE(972)
							{
								HX_STACK_LINE(973)
								Float t = -(best);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(974)
								{
								}
								HX_STACK_LINE(982)
								w1->x = (w2->x + (a0->gnormx * t));
								HX_STACK_LINE(983)
								w1->y = (w2->y + (a0->gnormy * t));
							}
							HX_STACK_LINE(985)
							{
								HX_STACK_LINE(986)
								axis->x = a0->gnormx;
								HX_STACK_LINE(987)
								axis->y = a0->gnormy;
								HX_STACK_LINE(988)
								{
								}
								HX_STACK_LINE(996)
								{
								}
							}
						}
					}
				}
				HX_STACK_LINE(1007)
				if ((swapped)){
					HX_STACK_LINE(1008)
					axis->x = -(axis->x);
					HX_STACK_LINE(1009)
					axis->y = -(axis->y);
				}
				HX_STACK_LINE(1011)
				return best;
			}
			else{
				HX_STACK_LINE(1014)
				::zpp_nape::shape::ZPP_Polygon p1 = s1->polygon;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(1015)
				::zpp_nape::shape::ZPP_Polygon p2 = s2->polygon;		HX_STACK_VAR(p2,"p2");
				HX_STACK_LINE(1016)
				Float best = -1e+100;		HX_STACK_VAR(best,"best");
				HX_STACK_LINE(1017)
				::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(1018)
				::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
				HX_STACK_LINE(1019)
				int besti = (int)0;		HX_STACK_VAR(besti,"besti");
				HX_STACK_LINE(1020)
				{
					HX_STACK_LINE(1021)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p1->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1022)
					while(((cx_ite != null()))){
						HX_STACK_LINE(1023)
						::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(1024)
						{
							HX_STACK_LINE(1025)
							Float min = 1e100;		HX_STACK_VAR(min,"min");
							HX_STACK_LINE(1026)
							{
								HX_STACK_LINE(1027)
								::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p2->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
								HX_STACK_LINE(1028)
								while(((cx_ite1 != null()))){
									HX_STACK_LINE(1029)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1030)
									{
										HX_STACK_LINE(1031)
										Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
										HX_STACK_LINE(1032)
										if (((k < min))){
											HX_STACK_LINE(1032)
											min = k;
										}
									}
									HX_STACK_LINE(1034)
									cx_ite1 = cx_ite1->next;
								}
							}
							HX_STACK_LINE(1037)
							hx::SubEq(min,a->gprojection);
							HX_STACK_LINE(1038)
							if (((min > upperBound))){
								HX_STACK_LINE(1039)
								best = min;
								HX_STACK_LINE(1040)
								break;
							}
							HX_STACK_LINE(1042)
							if (((min > (int)0))){
								HX_STACK_LINE(1042)
								if (((min > best))){
									HX_STACK_LINE(1044)
									best = min;
									HX_STACK_LINE(1045)
									a1 = a;
									HX_STACK_LINE(1046)
									besti = (int)1;
								}
							}
							else{
								HX_STACK_LINE(1049)
								if (((bool((best < (int)0)) && bool((min > best))))){
									HX_STACK_LINE(1050)
									best = min;
									HX_STACK_LINE(1051)
									a1 = a;
									HX_STACK_LINE(1052)
									besti = (int)1;
								}
							}
						}
						HX_STACK_LINE(1055)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(1058)
				if (((best < upperBound))){
					HX_STACK_LINE(1059)
					{
						HX_STACK_LINE(1060)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1061)
						while(((cx_ite != null()))){
							HX_STACK_LINE(1062)
							::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1063)
							{
								HX_STACK_LINE(1064)
								Float min = 1e100;		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(1065)
								{
									HX_STACK_LINE(1066)
									::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p1->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(1067)
									while(((cx_ite1 != null()))){
										HX_STACK_LINE(1068)
										::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1069)
										{
											HX_STACK_LINE(1070)
											Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(1071)
											if (((k < min))){
												HX_STACK_LINE(1071)
												min = k;
											}
										}
										HX_STACK_LINE(1073)
										cx_ite1 = cx_ite1->next;
									}
								}
								HX_STACK_LINE(1076)
								hx::SubEq(min,a->gprojection);
								HX_STACK_LINE(1077)
								if (((min > upperBound))){
									HX_STACK_LINE(1078)
									best = min;
									HX_STACK_LINE(1079)
									break;
								}
								HX_STACK_LINE(1081)
								if (((min > (int)0))){
									HX_STACK_LINE(1081)
									if (((min > best))){
										HX_STACK_LINE(1083)
										best = min;
										HX_STACK_LINE(1084)
										a2 = a;
										HX_STACK_LINE(1085)
										besti = (int)2;
									}
								}
								else{
									HX_STACK_LINE(1088)
									if (((bool((best < (int)0)) && bool((min > best))))){
										HX_STACK_LINE(1089)
										best = min;
										HX_STACK_LINE(1090)
										a2 = a;
										HX_STACK_LINE(1091)
										besti = (int)2;
									}
								}
							}
							HX_STACK_LINE(1094)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(1097)
					if (((best < upperBound))){
						HX_STACK_LINE(1098)
						::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
						::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
						HX_STACK_LINE(1099)
						::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
						HX_STACK_LINE(1100)
						if (((besti == (int)1))){
							HX_STACK_LINE(1101)
							q1 = p1;
							HX_STACK_LINE(1102)
							q2 = p2;
							HX_STACK_LINE(1103)
							ax = a1;
						}
						else{
							HX_STACK_LINE(1106)
							q1 = p2;
							HX_STACK_LINE(1107)
							q2 = p1;
							HX_STACK_LINE(1108)
							ax = a2;
							HX_STACK_LINE(1109)
							::zpp_nape::geom::ZPP_Vec2 tmp = w1;		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(1110)
							w1 = w2;
							HX_STACK_LINE(1111)
							w2 = tmp;
							HX_STACK_LINE(1112)
							swapped = !(swapped);
						}
						HX_STACK_LINE(1114)
						::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
						HX_STACK_LINE(1115)
						Float min = 1e100;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(1116)
						{
							HX_STACK_LINE(1117)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = q2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(1118)
							while(((cx_ite != null()))){
								HX_STACK_LINE(1119)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1120)
								{
									HX_STACK_LINE(1121)
									Float k = ((ax->gnormx * a->gnormx) + (ax->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(1122)
									if (((k < min))){
										HX_STACK_LINE(1123)
										min = k;
										HX_STACK_LINE(1124)
										ay = a;
									}
								}
								HX_STACK_LINE(1127)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(1130)
						if ((swapped)){
							HX_STACK_LINE(1131)
							axis->x = -(ax->gnormx);
							HX_STACK_LINE(1132)
							axis->y = -(ax->gnormy);
							HX_STACK_LINE(1133)
							{
							}
							HX_STACK_LINE(1141)
							{
							}
						}
						else{
							HX_STACK_LINE(1151)
							axis->x = ax->gnormx;
							HX_STACK_LINE(1152)
							axis->y = ax->gnormy;
							HX_STACK_LINE(1153)
							{
							}
							HX_STACK_LINE(1161)
							{
							}
						}
						HX_STACK_LINE(1170)
						if (((best >= (int)0))){
							HX_STACK_LINE(1171)
							::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
							HX_STACK_LINE(1172)
							::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(1173)
							::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
							HX_STACK_LINE(1174)
							::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
							HX_STACK_LINE(1175)
							Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
							HX_STACK_LINE(1176)
							Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
							HX_STACK_LINE(1177)
							Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
							HX_STACK_LINE(1178)
							Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
							HX_STACK_LINE(1179)
							{
								HX_STACK_LINE(1180)
								vx = (v1->x - v0->x);
								HX_STACK_LINE(1181)
								vy = (v1->y - v0->y);
							}
							HX_STACK_LINE(1183)
							{
								HX_STACK_LINE(1184)
								qx = (q11->x - q0->x);
								HX_STACK_LINE(1185)
								qy = (q11->y - q0->y);
							}
							HX_STACK_LINE(1187)
							Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
							HX_STACK_LINE(1188)
							Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
							HX_STACK_LINE(1189)
							Float t1 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(1190)
							Float t2 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(1191)
							Float s11 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s11,"s11");
							HX_STACK_LINE(1192)
							Float s21 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s21,"s21");
							HX_STACK_LINE(1193)
							if (((t1 < (int)0))){
								HX_STACK_LINE(1193)
								t1 = (int)0;
							}
							else{
								HX_STACK_LINE(1194)
								if (((t1 > (int)1))){
									HX_STACK_LINE(1194)
									t1 = (int)1;
								}
							}
							HX_STACK_LINE(1195)
							if (((t2 < (int)0))){
								HX_STACK_LINE(1195)
								t2 = (int)0;
							}
							else{
								HX_STACK_LINE(1196)
								if (((t2 > (int)1))){
									HX_STACK_LINE(1196)
									t2 = (int)1;
								}
							}
							HX_STACK_LINE(1197)
							if (((s11 < (int)0))){
								HX_STACK_LINE(1197)
								s11 = (int)0;
							}
							else{
								HX_STACK_LINE(1198)
								if (((s11 > (int)1))){
									HX_STACK_LINE(1198)
									s11 = (int)1;
								}
							}
							HX_STACK_LINE(1199)
							if (((s21 < (int)0))){
								HX_STACK_LINE(1199)
								s21 = (int)0;
							}
							else{
								HX_STACK_LINE(1200)
								if (((s21 > (int)1))){
									HX_STACK_LINE(1200)
									s21 = (int)1;
								}
							}
							HX_STACK_LINE(1201)
							Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
							HX_STACK_LINE(1202)
							Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
							HX_STACK_LINE(1203)
							{
								HX_STACK_LINE(1204)
								Float t = t1;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1205)
								{
								}
								HX_STACK_LINE(1213)
								f1x = (v0->x + (vx * t));
								HX_STACK_LINE(1214)
								f1y = (v0->y + (vy * t));
							}
							HX_STACK_LINE(1216)
							Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
							HX_STACK_LINE(1217)
							Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
							HX_STACK_LINE(1218)
							{
								HX_STACK_LINE(1219)
								Float t = t2;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1220)
								{
								}
								HX_STACK_LINE(1228)
								f2x = (v0->x + (vx * t));
								HX_STACK_LINE(1229)
								f2y = (v0->y + (vy * t));
							}
							HX_STACK_LINE(1231)
							Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
							HX_STACK_LINE(1232)
							Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
							HX_STACK_LINE(1233)
							{
								HX_STACK_LINE(1234)
								Float t = s11;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1235)
								{
								}
								HX_STACK_LINE(1243)
								g1x = (q0->x + (qx * t));
								HX_STACK_LINE(1244)
								g1y = (q0->y + (qy * t));
							}
							HX_STACK_LINE(1246)
							Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
							HX_STACK_LINE(1247)
							Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
							HX_STACK_LINE(1248)
							{
								HX_STACK_LINE(1249)
								Float t = s21;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1250)
								{
								}
								HX_STACK_LINE(1258)
								g2x = (q0->x + (qx * t));
								HX_STACK_LINE(1259)
								g2y = (q0->y + (qy * t));
							}
							struct _Function_6_1{
								inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &q0,Float &f1y,Float &f1x){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",1261);
									{
										HX_STACK_LINE(1261)
										Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(1261)
										Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(1261)
										{
											HX_STACK_LINE(1261)
											dx = (f1x - q0->x);
											HX_STACK_LINE(1261)
											dy = (f1y - q0->y);
										}
										HX_STACK_LINE(1261)
										return ((dx * dx) + (dy * dy));
									}
									return null();
								}
							};
							HX_STACK_LINE(1261)
							Float d1 = _Function_6_1::Block(q0,f1y,f1x);		HX_STACK_VAR(d1,"d1");
							struct _Function_6_2{
								inline static Float Block( Float &f2x,::zpp_nape::geom::ZPP_Vec2 &q11,Float &f2y){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",1262);
									{
										HX_STACK_LINE(1262)
										Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(1262)
										Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(1262)
										{
											HX_STACK_LINE(1262)
											dx = (f2x - q11->x);
											HX_STACK_LINE(1262)
											dy = (f2y - q11->y);
										}
										HX_STACK_LINE(1262)
										return ((dx * dx) + (dy * dy));
									}
									return null();
								}
							};
							HX_STACK_LINE(1262)
							Float d2 = _Function_6_2::Block(f2x,q11,f2y);		HX_STACK_VAR(d2,"d2");
							struct _Function_6_3{
								inline static Float Block( Float &g1x,::zpp_nape::geom::ZPP_Vec2 &v0,Float &g1y){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",1263);
									{
										HX_STACK_LINE(1263)
										Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(1263)
										Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(1263)
										{
											HX_STACK_LINE(1263)
											dx = (g1x - v0->x);
											HX_STACK_LINE(1263)
											dy = (g1y - v0->y);
										}
										HX_STACK_LINE(1263)
										return ((dx * dx) + (dy * dy));
									}
									return null();
								}
							};
							HX_STACK_LINE(1263)
							Float e1 = _Function_6_3::Block(g1x,v0,g1y);		HX_STACK_VAR(e1,"e1");
							struct _Function_6_4{
								inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &v1,Float &g2y,Float &g2x){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/SweepDistance.hx",1264);
									{
										HX_STACK_LINE(1264)
										Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(1264)
										Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(1264)
										{
											HX_STACK_LINE(1264)
											dx = (g2x - v1->x);
											HX_STACK_LINE(1264)
											dy = (g2y - v1->y);
										}
										HX_STACK_LINE(1264)
										return ((dx * dx) + (dy * dy));
									}
									return null();
								}
							};
							HX_STACK_LINE(1264)
							Float e2 = _Function_6_4::Block(v1,g2y,g2x);		HX_STACK_VAR(e2,"e2");
							HX_STACK_LINE(1265)
							Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
							HX_STACK_LINE(1266)
							Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
							HX_STACK_LINE(1267)
							::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
							HX_STACK_LINE(1268)
							if (((d1 < d2))){
								HX_STACK_LINE(1269)
								{
									HX_STACK_LINE(1270)
									minfx = f1x;
									HX_STACK_LINE(1271)
									minfy = f1y;
									HX_STACK_LINE(1272)
									{
									}
									HX_STACK_LINE(1280)
									{
									}
								}
								HX_STACK_LINE(1289)
								minq = q0;
							}
							else{
								HX_STACK_LINE(1292)
								{
									HX_STACK_LINE(1293)
									minfx = f2x;
									HX_STACK_LINE(1294)
									minfy = f2y;
									HX_STACK_LINE(1295)
									{
									}
									HX_STACK_LINE(1303)
									{
									}
								}
								HX_STACK_LINE(1312)
								minq = q11;
								HX_STACK_LINE(1313)
								d1 = d2;
							}
							HX_STACK_LINE(1315)
							Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
							HX_STACK_LINE(1316)
							Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
							HX_STACK_LINE(1317)
							::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
							HX_STACK_LINE(1318)
							if (((e1 < e2))){
								HX_STACK_LINE(1319)
								{
									HX_STACK_LINE(1320)
									mingx = g1x;
									HX_STACK_LINE(1321)
									mingy = g1y;
									HX_STACK_LINE(1322)
									{
									}
									HX_STACK_LINE(1330)
									{
									}
								}
								HX_STACK_LINE(1339)
								minv = v0;
							}
							else{
								HX_STACK_LINE(1342)
								{
									HX_STACK_LINE(1343)
									mingx = g2x;
									HX_STACK_LINE(1344)
									mingy = g2y;
									HX_STACK_LINE(1345)
									{
									}
									HX_STACK_LINE(1353)
									{
									}
								}
								HX_STACK_LINE(1362)
								minv = v1;
								HX_STACK_LINE(1363)
								e1 = e2;
							}
							HX_STACK_LINE(1365)
							if (((d1 < e1))){
								HX_STACK_LINE(1366)
								{
									HX_STACK_LINE(1367)
									w1->x = minfx;
									HX_STACK_LINE(1368)
									w1->y = minfy;
									HX_STACK_LINE(1369)
									{
									}
									HX_STACK_LINE(1377)
									{
									}
								}
								HX_STACK_LINE(1386)
								{
									HX_STACK_LINE(1387)
									w2->x = minq->x;
									HX_STACK_LINE(1388)
									w2->y = minq->y;
									HX_STACK_LINE(1389)
									{
									}
									HX_STACK_LINE(1397)
									{
									}
								}
								HX_STACK_LINE(1406)
								best = ::Math_obj::sqrt(d1);
							}
							else{
								HX_STACK_LINE(1409)
								{
									HX_STACK_LINE(1410)
									w2->x = mingx;
									HX_STACK_LINE(1411)
									w2->y = mingy;
									HX_STACK_LINE(1412)
									{
									}
									HX_STACK_LINE(1420)
									{
									}
								}
								HX_STACK_LINE(1429)
								{
									HX_STACK_LINE(1430)
									w1->x = minv->x;
									HX_STACK_LINE(1431)
									w1->y = minv->y;
									HX_STACK_LINE(1432)
									{
									}
									HX_STACK_LINE(1440)
									{
									}
								}
								HX_STACK_LINE(1449)
								best = ::Math_obj::sqrt(e1);
							}
							HX_STACK_LINE(1451)
							if (((best != (int)0))){
								HX_STACK_LINE(1452)
								{
									HX_STACK_LINE(1453)
									axis->x = (w2->x - w1->x);
									HX_STACK_LINE(1454)
									axis->y = (w2->y - w1->y);
								}
								HX_STACK_LINE(1456)
								{
									HX_STACK_LINE(1457)
									Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(1458)
									{
									}
									HX_STACK_LINE(1466)
									hx::MultEq(axis->x,t);
									HX_STACK_LINE(1467)
									hx::MultEq(axis->y,t);
								}
								HX_STACK_LINE(1469)
								if ((swapped)){
									HX_STACK_LINE(1470)
									axis->x = -(axis->x);
									HX_STACK_LINE(1471)
									axis->y = -(axis->y);
								}
							}
							HX_STACK_LINE(1474)
							return best;
						}
						else{
							HX_STACK_LINE(1477)
							Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
							HX_STACK_LINE(1478)
							Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
							HX_STACK_LINE(1479)
							{
								HX_STACK_LINE(1480)
								c0x = ay->gp0->x;
								HX_STACK_LINE(1481)
								c0y = ay->gp0->y;
								HX_STACK_LINE(1482)
								{
								}
								HX_STACK_LINE(1490)
								{
								}
							}
							HX_STACK_LINE(1499)
							Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
							HX_STACK_LINE(1500)
							Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
							HX_STACK_LINE(1501)
							{
								HX_STACK_LINE(1502)
								c1x = ay->gp1->x;
								HX_STACK_LINE(1503)
								c1y = ay->gp1->y;
								HX_STACK_LINE(1504)
								{
								}
								HX_STACK_LINE(1512)
								{
								}
							}
							HX_STACK_LINE(1521)
							Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
							HX_STACK_LINE(1522)
							Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
							HX_STACK_LINE(1523)
							{
								HX_STACK_LINE(1524)
								dvx = (c1x - c0x);
								HX_STACK_LINE(1525)
								dvy = (c1y - c0y);
							}
							HX_STACK_LINE(1527)
							Float d0 = ((ax->gnormy * c0x) - (ax->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
							HX_STACK_LINE(1528)
							Float d1 = ((ax->gnormy * c1x) - (ax->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
							HX_STACK_LINE(1529)
							Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
							HX_STACK_LINE(1530)
							Float t = (((-(ax->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1531)
							if (((t > ::nape::Config_obj::epsilon))){
								HX_STACK_LINE(1532)
								Float t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(1533)
								{
								}
								HX_STACK_LINE(1541)
								hx::AddEq(c0x,(dvx * t1));
								HX_STACK_LINE(1542)
								hx::AddEq(c0y,(dvy * t1));
							}
							HX_STACK_LINE(1544)
							Float t1 = (((-(ax->tp0) - d1)) * den);		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(1545)
							if (((t1 < -(::nape::Config_obj::epsilon)))){
								HX_STACK_LINE(1546)
								Float t2 = t1;		HX_STACK_VAR(t2,"t2");
								HX_STACK_LINE(1547)
								{
								}
								HX_STACK_LINE(1555)
								hx::AddEq(c1x,(dvx * t2));
								HX_STACK_LINE(1556)
								hx::AddEq(c1y,(dvy * t2));
							}
							HX_STACK_LINE(1558)
							Float c0d = (((c0x * ax->gnormx) + (c0y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c0d,"c0d");
							HX_STACK_LINE(1559)
							Float c1d = (((c1x * ax->gnormx) + (c1y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c1d,"c1d");
							HX_STACK_LINE(1560)
							if (((c0d < c1d))){
								HX_STACK_LINE(1561)
								{
									HX_STACK_LINE(1562)
									w2->x = c0x;
									HX_STACK_LINE(1563)
									w2->y = c0y;
									HX_STACK_LINE(1564)
									{
									}
									HX_STACK_LINE(1572)
									{
									}
								}
								HX_STACK_LINE(1581)
								{
									HX_STACK_LINE(1582)
									Float t2 = -(c0d);		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(1583)
									{
									}
									HX_STACK_LINE(1591)
									w1->x = (w2->x + (ax->gnormx * t2));
									HX_STACK_LINE(1592)
									w1->y = (w2->y + (ax->gnormy * t2));
								}
								HX_STACK_LINE(1594)
								return c0d;
							}
							else{
								HX_STACK_LINE(1597)
								{
									HX_STACK_LINE(1598)
									w2->x = c1x;
									HX_STACK_LINE(1599)
									w2->y = c1y;
									HX_STACK_LINE(1600)
									{
									}
									HX_STACK_LINE(1608)
									{
									}
								}
								HX_STACK_LINE(1617)
								{
									HX_STACK_LINE(1618)
									Float t2 = -(c1d);		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(1619)
									{
									}
									HX_STACK_LINE(1627)
									w1->x = (w2->x + (ax->gnormx * t2));
									HX_STACK_LINE(1628)
									w1->y = (w2->y + (ax->gnormy * t2));
								}
								HX_STACK_LINE(1630)
								return c1d;
							}
						}
					}
					else{
						HX_STACK_LINE(1634)
						return upperBound;
					}
				}
				else{
					HX_STACK_LINE(1636)
					return upperBound;
				}
			}
		}
		HX_STACK_LINE(630)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ZPP_SweepDistance_obj,distance,return )


ZPP_SweepDistance_obj::ZPP_SweepDistance_obj()
{
}

void ZPP_SweepDistance_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SweepDistance);
	HX_MARK_END_CLASS();
}

void ZPP_SweepDistance_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_SweepDistance_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"staticSweep") ) { return staticSweep_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dynamicSweep") ) { return dynamicSweep_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceBody") ) { return distanceBody_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SweepDistance_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SweepDistance_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("dynamicSweep"),
	HX_CSTRING("staticSweep"),
	HX_CSTRING("distanceBody"),
	HX_CSTRING("distance"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SweepDistance_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SweepDistance_obj::__mClass,"__mClass");
};

Class ZPP_SweepDistance_obj::__mClass;

void ZPP_SweepDistance_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_SweepDistance"), hx::TCanCast< ZPP_SweepDistance_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_SweepDistance_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace geom
