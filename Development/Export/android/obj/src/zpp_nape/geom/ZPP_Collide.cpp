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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Collide
#include <zpp_nape/geom/ZPP_Collide.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Collide_obj::__construct()
{
	return null();
}

ZPP_Collide_obj::~ZPP_Collide_obj() { }

Dynamic ZPP_Collide_obj::__CreateEmpty() { return  new ZPP_Collide_obj; }
hx::ObjectPtr< ZPP_Collide_obj > ZPP_Collide_obj::__new()
{  hx::ObjectPtr< ZPP_Collide_obj > result = new ZPP_Collide_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Collide_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Collide_obj > result = new ZPP_Collide_obj();
	result->__construct();
	return result;}

bool ZPP_Collide_obj::circleContains( ::zpp_nape::shape::ZPP_Circle c,::zpp_nape::geom::ZPP_Vec2 p){
	HX_STACK_PUSH("ZPP_Collide::circleContains","zpp_nape/geom/Collide.hx",175);
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(176)
	Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(177)
	Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(179)
		dx = (p->x - c->worldCOMx);
		HX_STACK_LINE(180)
		dy = (p->y - c->worldCOMy);
	}
	HX_STACK_LINE(182)
	return (((dx * dx) + (dy * dy)) < (c->radius * c->radius));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,circleContains,return )

bool ZPP_Collide_obj::polyContains( ::zpp_nape::shape::ZPP_Polygon s,::zpp_nape::geom::ZPP_Vec2 p){
	HX_STACK_PUSH("ZPP_Collide::polyContains","zpp_nape/geom/Collide.hx",184);
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(185)
	bool retvar;		HX_STACK_VAR(retvar,"retvar");
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(187)
		retvar = true;
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(189)
			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(190)
			while(((cx_ite != null()))){
				HX_STACK_LINE(191)
				::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(192)
				if (((((a->gnormx * p->x) + (a->gnormy * p->y)) <= a->gprojection))){
					HX_STACK_LINE(195)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(196)
					continue;
				}
				else{
					HX_STACK_LINE(200)
					retvar = false;
					HX_STACK_LINE(201)
					break;
				}
				HX_STACK_LINE(204)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(208)
	return retvar;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,polyContains,return )

bool ZPP_Collide_obj::shapeContains( ::zpp_nape::shape::ZPP_Shape s,::zpp_nape::geom::ZPP_Vec2 p){
	HX_STACK_PUSH("ZPP_Collide::shapeContains","zpp_nape/geom/Collide.hx",210);
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(210)
	return (  (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))) ? bool(::zpp_nape::geom::ZPP_Collide_obj::circleContains(s->circle,p)) : bool(::zpp_nape::geom::ZPP_Collide_obj::polyContains(s->polygon,p)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,shapeContains,return )

bool ZPP_Collide_obj::bodyContains( ::zpp_nape::phys::ZPP_Body b,::zpp_nape::geom::ZPP_Vec2 p){
	HX_STACK_PUSH("ZPP_Collide::bodyContains","zpp_nape/geom/Collide.hx",214);
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(215)
	bool retvar;		HX_STACK_VAR(retvar,"retvar");
	HX_STACK_LINE(216)
	{
		HX_STACK_LINE(217)
		retvar = false;
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(219)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = b->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(220)
			while(((cx_ite != null()))){
				HX_STACK_LINE(221)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(222)
				if ((::zpp_nape::geom::ZPP_Collide_obj::shapeContains(s,p))){
					HX_STACK_LINE(224)
					retvar = true;
					HX_STACK_LINE(225)
					break;
				}
				HX_STACK_LINE(228)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(232)
	return retvar;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,bodyContains,return )

bool ZPP_Collide_obj::containTest( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2){
	HX_STACK_PUSH("ZPP_Collide::containTest","zpp_nape/geom/Collide.hx",234);
	HX_STACK_ARG(s1,"s1");
	HX_STACK_ARG(s2,"s2");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",235);
			{
				HX_STACK_LINE(235)
				::zpp_nape::geom::ZPP_AABB _this = s1->aabb;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::geom::ZPP_AABB x = s2->aabb;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(235)
				return (bool((bool((bool((x->minx >= _this->minx)) && bool((x->miny >= _this->miny)))) && bool((x->maxx <= _this->maxx)))) && bool((x->maxy <= _this->maxy)));
			}
			return null();
		}
	};
	HX_STACK_LINE(234)
	if ((_Function_1_1::Block(s2,s1))){
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",236);
				{
					struct _Function_3_1{
						inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",237);
							{
								HX_STACK_LINE(238)
								Float minDist = (s1->circle->radius + -(s2->circle->radius));		HX_STACK_VAR(minDist,"minDist");
								HX_STACK_LINE(239)
								Float px = 0.0;		HX_STACK_VAR(px,"px");
								HX_STACK_LINE(240)
								Float py = 0.0;		HX_STACK_VAR(py,"py");
								HX_STACK_LINE(241)
								{
									HX_STACK_LINE(242)
									px = (s2->circle->worldCOMx - s1->circle->worldCOMx);
									HX_STACK_LINE(243)
									py = (s2->circle->worldCOMy - s1->circle->worldCOMy);
								}
								HX_STACK_LINE(245)
								Float distSqr = ((px * px) + (py * py));		HX_STACK_VAR(distSqr,"distSqr");
								HX_STACK_LINE(246)
								return (distSqr <= (minDist * minDist));
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",248);
							{
								HX_STACK_LINE(249)
								bool retvar;		HX_STACK_VAR(retvar,"retvar");
								HX_STACK_LINE(250)
								{
									HX_STACK_LINE(251)
									retvar = true;
									HX_STACK_LINE(252)
									{
										HX_STACK_LINE(253)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = s2->polygon->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(254)
										while(((cx_ite != null()))){
											HX_STACK_LINE(255)
											::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
											struct _Function_7_1{
												inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &p,::zpp_nape::shape::ZPP_Shape &s1){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",257);
													{
														HX_STACK_LINE(258)
														Float minDist = s1->circle->radius;		HX_STACK_VAR(minDist,"minDist");
														HX_STACK_LINE(259)
														Float px = 0.0;		HX_STACK_VAR(px,"px");
														HX_STACK_LINE(260)
														Float py = 0.0;		HX_STACK_VAR(py,"py");
														HX_STACK_LINE(261)
														{
															HX_STACK_LINE(262)
															px = (p->x - s1->circle->worldCOMx);
															HX_STACK_LINE(263)
															py = (p->y - s1->circle->worldCOMy);
														}
														HX_STACK_LINE(265)
														Float distSqr = ((px * px) + (py * py));		HX_STACK_VAR(distSqr,"distSqr");
														HX_STACK_LINE(266)
														return (distSqr <= (minDist * minDist));
													}
													return null();
												}
											};
											HX_STACK_LINE(256)
											if ((_Function_7_1::Block(p,s1))){
												HX_STACK_LINE(269)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(270)
												continue;
											}
											else{
												HX_STACK_LINE(274)
												retvar = false;
												HX_STACK_LINE(275)
												break;
											}
											HX_STACK_LINE(278)
											cx_ite = cx_ite->next;
										}
									}
								}
								HX_STACK_LINE(282)
								return retvar;
							}
							return null();
						}
					};
					HX_STACK_LINE(236)
					return (  (((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))) ? bool(_Function_3_1::Block(s2,s1)) : bool(_Function_3_2::Block(s2,s1)) );
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",286);
				{
					HX_STACK_LINE(287)
					bool retvar;		HX_STACK_VAR(retvar,"retvar");
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(289)
						retvar = true;
						HX_STACK_LINE(290)
						{
							HX_STACK_LINE(291)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s1->polygon->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(292)
							while(((cx_ite != null()))){
								HX_STACK_LINE(293)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(294)
								if ((((((a->gnormx * s2->circle->worldCOMx) + (a->gnormy * s2->circle->worldCOMy)) + s2->circle->radius) <= a->gprojection))){
									HX_STACK_LINE(297)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(298)
									continue;
								}
								else{
									HX_STACK_LINE(302)
									retvar = false;
									HX_STACK_LINE(303)
									break;
								}
								HX_STACK_LINE(306)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(310)
					return retvar;
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",312);
				{
					HX_STACK_LINE(313)
					bool retvar;		HX_STACK_VAR(retvar,"retvar");
					HX_STACK_LINE(314)
					{
						HX_STACK_LINE(315)
						retvar = true;
						HX_STACK_LINE(316)
						{
							HX_STACK_LINE(317)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s1->polygon->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(318)
							while(((cx_ite != null()))){
								HX_STACK_LINE(319)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								struct _Function_6_1{
									inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Edge &a){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",321);
										{
											HX_STACK_LINE(322)
											Float max = -1e+100;		HX_STACK_VAR(max,"max");
											HX_STACK_LINE(323)
											{
												HX_STACK_LINE(324)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = s2->polygon->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(325)
												while(((cx_ite1 != null()))){
													HX_STACK_LINE(326)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(327)
													{
														HX_STACK_LINE(328)
														Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
														HX_STACK_LINE(329)
														if (((k > max))){
															HX_STACK_LINE(329)
															max = k;
														}
													}
													HX_STACK_LINE(331)
													cx_ite1 = cx_ite1->next;
												}
											}
											HX_STACK_LINE(334)
											return (max <= a->gprojection);
										}
										return null();
									}
								};
								HX_STACK_LINE(320)
								if ((_Function_6_1::Block(s2,a))){
									HX_STACK_LINE(337)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(338)
									continue;
								}
								else{
									HX_STACK_LINE(342)
									retvar = false;
									HX_STACK_LINE(343)
									break;
								}
								HX_STACK_LINE(346)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(350)
					return retvar;
				}
				return null();
			}
		};
		HX_STACK_LINE(235)
		return (  (((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))) ? bool(_Function_2_1::Block(s2,s1)) : bool((  (((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))) ? bool(_Function_2_2::Block(s2,s1)) : bool(_Function_2_3::Block(s2,s1)) )) );
	}
	else{
		HX_STACK_LINE(354)
		return false;
	}
	HX_STACK_LINE(234)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,containTest,return )

bool ZPP_Collide_obj::contactCollide( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,::zpp_nape::dynamics::ZPP_ColArbiter arb,bool rev){
	HX_STACK_PUSH("ZPP_Collide::contactCollide","zpp_nape/geom/Collide.hx",356);
	HX_STACK_ARG(s1,"s1");
	HX_STACK_ARG(s2,"s2");
	HX_STACK_ARG(arb,"arb");
	HX_STACK_ARG(rev,"rev");
	HX_STACK_LINE(356)
	if (((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
		HX_STACK_LINE(357)
		if (((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
			HX_STACK_LINE(359)
			bool cont = true;		HX_STACK_VAR(cont,"cont");
			HX_STACK_LINE(360)
			Float max = -1e+100;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(361)
			Float maxmin = -1e+100;		HX_STACK_VAR(maxmin,"maxmin");
			HX_STACK_LINE(362)
			int maxi = (int)-1;		HX_STACK_VAR(maxi,"maxi");
			HX_STACK_LINE(363)
			::zpp_nape::shape::ZPP_Edge axis1 = null();		HX_STACK_VAR(axis1,"axis1");
			HX_STACK_LINE(364)
			::zpp_nape::shape::ZPP_Edge axis2 = null();		HX_STACK_VAR(axis2,"axis2");
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(366)
				::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s1->polygon->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(367)
				while(((cx_ite != null()))){
					HX_STACK_LINE(368)
					::zpp_nape::shape::ZPP_Edge ax = cx_ite->elt;		HX_STACK_VAR(ax,"ax");
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(370)
						Float min = 1e100;		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(371)
						{
							HX_STACK_LINE(372)
							::zpp_nape::geom::ZPP_Vec2 cx_ite1 = s2->polygon->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
							HX_STACK_LINE(373)
							while(((cx_ite1 != null()))){
								HX_STACK_LINE(374)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(375)
								{
									HX_STACK_LINE(376)
									Float k = ((ax->gnormx * v->x) + (ax->gnormy * v->y));		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(377)
									if (((k < min))){
										HX_STACK_LINE(377)
										min = k;
									}
									HX_STACK_LINE(378)
									if ((((min - ax->gprojection) <= max))){
										HX_STACK_LINE(378)
										break;
									}
								}
								HX_STACK_LINE(380)
								cx_ite1 = cx_ite1->next;
							}
						}
						HX_STACK_LINE(383)
						hx::SubEq(min,ax->gprojection);
						HX_STACK_LINE(384)
						if (((min >= (int)0))){
							HX_STACK_LINE(385)
							cont = false;
							HX_STACK_LINE(386)
							break;
						}
						HX_STACK_LINE(388)
						if (((min > max))){
							HX_STACK_LINE(389)
							max = min;
							HX_STACK_LINE(390)
							axis1 = ax;
							HX_STACK_LINE(391)
							maxi = (int)1;
						}
					}
					HX_STACK_LINE(394)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(397)
			if ((cont)){
				HX_STACK_LINE(398)
				{
					HX_STACK_LINE(399)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s2->polygon->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(400)
					while(((cx_ite != null()))){
						HX_STACK_LINE(401)
						::zpp_nape::shape::ZPP_Edge ax = cx_ite->elt;		HX_STACK_VAR(ax,"ax");
						HX_STACK_LINE(402)
						{
							HX_STACK_LINE(403)
							Float min = 1e100;		HX_STACK_VAR(min,"min");
							HX_STACK_LINE(404)
							{
								HX_STACK_LINE(405)
								::zpp_nape::geom::ZPP_Vec2 cx_ite1 = s1->polygon->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
								HX_STACK_LINE(406)
								while(((cx_ite1 != null()))){
									HX_STACK_LINE(407)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(408)
									{
										HX_STACK_LINE(409)
										Float k = ((ax->gnormx * v->x) + (ax->gnormy * v->y));		HX_STACK_VAR(k,"k");
										HX_STACK_LINE(410)
										if (((k < min))){
											HX_STACK_LINE(410)
											min = k;
										}
										HX_STACK_LINE(411)
										if ((((min - ax->gprojection) <= max))){
											HX_STACK_LINE(411)
											break;
										}
									}
									HX_STACK_LINE(413)
									cx_ite1 = cx_ite1->next;
								}
							}
							HX_STACK_LINE(416)
							hx::SubEq(min,ax->gprojection);
							HX_STACK_LINE(417)
							if (((min >= (int)0))){
								HX_STACK_LINE(418)
								cont = false;
								HX_STACK_LINE(419)
								break;
							}
							HX_STACK_LINE(421)
							if (((min > max))){
								HX_STACK_LINE(422)
								max = min;
								HX_STACK_LINE(423)
								axis2 = ax;
								HX_STACK_LINE(424)
								maxi = (int)2;
							}
						}
						HX_STACK_LINE(427)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(430)
				if ((!(cont))){
					HX_STACK_LINE(430)
					return false;
				}
				else{
					HX_STACK_LINE(432)
					::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
					::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
					::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
					Float scale;		HX_STACK_VAR(scale,"scale");
					HX_STACK_LINE(433)
					if (((maxi == (int)1))){
						HX_STACK_LINE(434)
						q1 = s1->polygon;
						HX_STACK_LINE(435)
						q2 = s2->polygon;
						HX_STACK_LINE(436)
						ax = axis1;
						HX_STACK_LINE(437)
						scale = 1.0;
					}
					else{
						HX_STACK_LINE(440)
						q1 = s2->polygon;
						HX_STACK_LINE(441)
						q2 = s1->polygon;
						HX_STACK_LINE(442)
						ax = axis2;
						HX_STACK_LINE(443)
						scale = -1.0;
					}
					HX_STACK_LINE(445)
					::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
					HX_STACK_LINE(446)
					Float min = 1e100;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(448)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = q2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(449)
						while(((cx_ite != null()))){
							HX_STACK_LINE(450)
							::zpp_nape::shape::ZPP_Edge axis = cx_ite->elt;		HX_STACK_VAR(axis,"axis");
							HX_STACK_LINE(451)
							{
								HX_STACK_LINE(452)
								Float k = ((ax->gnormx * axis->gnormx) + (ax->gnormy * axis->gnormy));		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(453)
								if (((k < min))){
									HX_STACK_LINE(454)
									min = k;
									HX_STACK_LINE(455)
									ay = axis;
								}
							}
							HX_STACK_LINE(458)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(461)
					Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
					HX_STACK_LINE(462)
					Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
					HX_STACK_LINE(463)
					{
						HX_STACK_LINE(464)
						c0x = ay->gp0->x;
						HX_STACK_LINE(465)
						c0y = ay->gp0->y;
						HX_STACK_LINE(474)
						{
						}
					}
					HX_STACK_LINE(483)
					Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
					HX_STACK_LINE(484)
					Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
					HX_STACK_LINE(485)
					{
						HX_STACK_LINE(486)
						c1x = ay->gp1->x;
						HX_STACK_LINE(487)
						c1y = ay->gp1->y;
						HX_STACK_LINE(496)
						{
						}
					}
					HX_STACK_LINE(505)
					Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
					HX_STACK_LINE(506)
					Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
					HX_STACK_LINE(507)
					{
						HX_STACK_LINE(508)
						dvx = (c1x - c0x);
						HX_STACK_LINE(509)
						dvy = (c1y - c0y);
					}
					HX_STACK_LINE(511)
					Float d0 = ((ax->gnormy * c0x) - (ax->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
					HX_STACK_LINE(512)
					Float d1 = ((ax->gnormy * c1x) - (ax->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
					HX_STACK_LINE(513)
					Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
					HX_STACK_LINE(514)
					Float t = (((-(ax->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(515)
					if (((t > ::nape::Config_obj::epsilon))){
						HX_STACK_LINE(516)
						Float t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(525)
						hx::AddEq(c0x,(dvx * t1));
						HX_STACK_LINE(526)
						hx::AddEq(c0y,(dvy * t1));
					}
					HX_STACK_LINE(528)
					Float t1 = (((-(ax->tp0) - d1)) * den);		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(529)
					if (((t1 < -(::nape::Config_obj::epsilon)))){
						HX_STACK_LINE(530)
						Float t2 = t1;		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(539)
						hx::AddEq(c1x,(dvx * t2));
						HX_STACK_LINE(540)
						hx::AddEq(c1y,(dvy * t2));
					}
					HX_STACK_LINE(542)
					Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(543)
					Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
					HX_STACK_LINE(544)
					{
						HX_STACK_LINE(545)
						Float t2 = scale;		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(554)
						nx = (ax->gnormx * t2);
						HX_STACK_LINE(555)
						ny = (ax->gnormy * t2);
					}
					HX_STACK_LINE(557)
					{
						HX_STACK_LINE(558)
						arb->lnormx = ax->lnormx;
						HX_STACK_LINE(559)
						arb->lnormy = ax->lnormy;
						HX_STACK_LINE(568)
						{
						}
					}
					HX_STACK_LINE(577)
					arb->lproj = ax->lprojection;
					HX_STACK_LINE(578)
					arb->radius = (int)0;
					HX_STACK_LINE(579)
					arb->rev = (rev != ((scale == (int)-1)));
					HX_STACK_LINE(580)
					arb->ptype = (  ((arb->rev)) ? int((int)1) : int((int)0) );
					HX_STACK_LINE(581)
					Float c0d = (((c0x * ax->gnormx) + (c0y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c0d,"c0d");
					HX_STACK_LINE(582)
					Float c1d = (((c1x * ax->gnormx) + (c1y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c1d,"c1d");
					HX_STACK_LINE(583)
					if (((bool((c0d > (int)0)) && bool((c1d > (int)0))))){
						HX_STACK_LINE(583)
						return false;
					}
					else{
						HX_STACK_LINE(587)
						if ((rev)){
							HX_STACK_LINE(588)
							nx = -(nx);
							HX_STACK_LINE(589)
							ny = -(ny);
						}
						struct _Function_6_1{
							inline static ::zpp_nape::dynamics::ZPP_Contact Block( Float &c0y,Float &c0x,::zpp_nape::dynamics::ZPP_ColArbiter &arb,Float &c0d,::zpp_nape::shape::ZPP_Edge &ax,Float &ny,Float &nx){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",591);
								{
									HX_STACK_LINE(591)
									int hash = (  ((arb->rev)) ? int((int)1) : int((int)0) );		HX_STACK_VAR(hash,"hash");
									HX_STACK_LINE(591)
									::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(591)
									{
										HX_STACK_LINE(591)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(591)
										while(((cx_ite != null()))){
											HX_STACK_LINE(591)
											::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
											HX_STACK_LINE(591)
											if (((hash == cur->hash))){
												HX_STACK_LINE(591)
												c = cur;
												HX_STACK_LINE(591)
												break;
											}
											HX_STACK_LINE(591)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(591)
									if (((c == null()))){
										HX_STACK_LINE(591)
										{
											HX_STACK_LINE(591)
											if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
												HX_STACK_LINE(591)
												c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
											}
											else{
												HX_STACK_LINE(591)
												c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
												HX_STACK_LINE(591)
												::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
												HX_STACK_LINE(591)
												c->next = null();
											}
											HX_STACK_LINE(591)
											Dynamic();
										}
										HX_STACK_LINE(591)
										::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
										HX_STACK_LINE(591)
										ci->jnAcc = ci->jtAcc = (int)0;
										HX_STACK_LINE(591)
										c->hash = hash;
										HX_STACK_LINE(591)
										c->fresh = true;
										HX_STACK_LINE(591)
										c->arbiter = arb;
										HX_STACK_LINE(591)
										arb->jrAcc = (int)0;
										HX_STACK_LINE(591)
										{
											HX_STACK_LINE(591)
											::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
											struct _Function_9_1{
												inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",591);
													{
														HX_STACK_LINE(591)
														c->_inuse = true;
														HX_STACK_LINE(591)
														return c;
													}
													return null();
												}
											};
											HX_STACK_LINE(591)
											::zpp_nape::dynamics::ZPP_Contact temp = _Function_9_1::Block(c);		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(591)
											temp->next = _this->next;
											HX_STACK_LINE(591)
											_this->next = temp;
											HX_STACK_LINE(591)
											_this->modified = true;
											HX_STACK_LINE(591)
											(_this->length)++;
											HX_STACK_LINE(591)
											c;
										}
										HX_STACK_LINE(591)
										arb->innards->add(ci);
									}
									else{
										HX_STACK_LINE(591)
										c->fresh = false;
									}
									HX_STACK_LINE(591)
									{
										HX_STACK_LINE(591)
										c->px = (c0x - ((ax->gnormx * c0d) * 0.5));
										HX_STACK_LINE(591)
										c->py = (c0y - ((ax->gnormy * c0d) * 0.5));
										HX_STACK_LINE(591)
										{
										}
									}
									HX_STACK_LINE(591)
									{
										HX_STACK_LINE(591)
										arb->nx = nx;
										HX_STACK_LINE(591)
										arb->ny = ny;
										HX_STACK_LINE(591)
										{
										}
									}
									HX_STACK_LINE(591)
									c->dist = c0d;
									HX_STACK_LINE(591)
									c->stamp = arb->stamp;
									HX_STACK_LINE(591)
									c->posOnly = (c0d > (int)0);
									HX_STACK_LINE(591)
									return c;
								}
								return null();
							}
						};
						HX_STACK_LINE(591)
						::zpp_nape::dynamics::ZPP_Contact con = _Function_6_1::Block(c0y,c0x,arb,c0d,ax,ny,nx);		HX_STACK_VAR(con,"con");
						HX_STACK_LINE(592)
						{
							HX_STACK_LINE(593)
							Float t2 = 1.0;		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(602)
							hx::SubEq(c0x,(q2->body->posx * t2));
							HX_STACK_LINE(603)
							hx::SubEq(c0y,(q2->body->posy * t2));
						}
						HX_STACK_LINE(605)
						{
							HX_STACK_LINE(606)
							con->inner->lr1x = ((c0x * q2->body->axisy) + (c0y * q2->body->axisx));
							HX_STACK_LINE(607)
							con->inner->lr1y = ((c0y * q2->body->axisy) - (c0x * q2->body->axisx));
						}
						struct _Function_6_2{
							inline static ::zpp_nape::dynamics::ZPP_Contact Block( Float &c1x,Float &c1d,::zpp_nape::dynamics::ZPP_ColArbiter &arb,::zpp_nape::shape::ZPP_Edge &ax,Float &ny,Float &nx,Float &c1y){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",609);
								{
									HX_STACK_LINE(609)
									int hash = (  ((arb->rev)) ? int((int)0) : int((int)1) );		HX_STACK_VAR(hash,"hash");
									HX_STACK_LINE(609)
									::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(609)
									{
										HX_STACK_LINE(609)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(609)
										while(((cx_ite != null()))){
											HX_STACK_LINE(609)
											::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
											HX_STACK_LINE(609)
											if (((hash == cur->hash))){
												HX_STACK_LINE(609)
												c = cur;
												HX_STACK_LINE(609)
												break;
											}
											HX_STACK_LINE(609)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(609)
									if (((c == null()))){
										HX_STACK_LINE(609)
										{
											HX_STACK_LINE(609)
											if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
												HX_STACK_LINE(609)
												c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
											}
											else{
												HX_STACK_LINE(609)
												c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
												HX_STACK_LINE(609)
												::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
												HX_STACK_LINE(609)
												c->next = null();
											}
											HX_STACK_LINE(609)
											Dynamic();
										}
										HX_STACK_LINE(609)
										::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
										HX_STACK_LINE(609)
										ci->jnAcc = ci->jtAcc = (int)0;
										HX_STACK_LINE(609)
										c->hash = hash;
										HX_STACK_LINE(609)
										c->fresh = true;
										HX_STACK_LINE(609)
										c->arbiter = arb;
										HX_STACK_LINE(609)
										arb->jrAcc = (int)0;
										HX_STACK_LINE(609)
										{
											HX_STACK_LINE(609)
											::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
											struct _Function_9_1{
												inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",609);
													{
														HX_STACK_LINE(609)
														c->_inuse = true;
														HX_STACK_LINE(609)
														return c;
													}
													return null();
												}
											};
											HX_STACK_LINE(609)
											::zpp_nape::dynamics::ZPP_Contact temp = _Function_9_1::Block(c);		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(609)
											temp->next = _this->next;
											HX_STACK_LINE(609)
											_this->next = temp;
											HX_STACK_LINE(609)
											_this->modified = true;
											HX_STACK_LINE(609)
											(_this->length)++;
											HX_STACK_LINE(609)
											c;
										}
										HX_STACK_LINE(609)
										arb->innards->add(ci);
									}
									else{
										HX_STACK_LINE(609)
										c->fresh = false;
									}
									HX_STACK_LINE(609)
									{
										HX_STACK_LINE(609)
										c->px = (c1x - ((ax->gnormx * c1d) * 0.5));
										HX_STACK_LINE(609)
										c->py = (c1y - ((ax->gnormy * c1d) * 0.5));
										HX_STACK_LINE(609)
										{
										}
									}
									HX_STACK_LINE(609)
									{
										HX_STACK_LINE(609)
										arb->nx = nx;
										HX_STACK_LINE(609)
										arb->ny = ny;
										HX_STACK_LINE(609)
										{
										}
									}
									HX_STACK_LINE(609)
									c->dist = c1d;
									HX_STACK_LINE(609)
									c->stamp = arb->stamp;
									HX_STACK_LINE(609)
									c->posOnly = (c1d > (int)0);
									HX_STACK_LINE(609)
									return c;
								}
								return null();
							}
						};
						HX_STACK_LINE(609)
						con = _Function_6_2::Block(c1x,c1d,arb,ax,ny,nx,c1y);
						HX_STACK_LINE(610)
						{
							HX_STACK_LINE(611)
							Float t2 = 1.0;		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(620)
							hx::SubEq(c1x,(q2->body->posx * t2));
							HX_STACK_LINE(621)
							hx::SubEq(c1y,(q2->body->posy * t2));
						}
						HX_STACK_LINE(623)
						{
							HX_STACK_LINE(624)
							con->inner->lr1x = ((c1x * q2->body->axisy) + (c1y * q2->body->axisx));
							HX_STACK_LINE(625)
							con->inner->lr1y = ((c1y * q2->body->axisy) - (c1x * q2->body->axisx));
						}
						HX_STACK_LINE(627)
						if (((maxi == (int)1))){
							HX_STACK_LINE(628)
							arb->__ref_edge1 = ax;
							HX_STACK_LINE(629)
							arb->__ref_edge2 = ay;
						}
						else{
							HX_STACK_LINE(632)
							arb->__ref_edge2 = ax;
							HX_STACK_LINE(633)
							arb->__ref_edge1 = ay;
						}
						HX_STACK_LINE(635)
						return true;
					}
				}
			}
			else{
				HX_STACK_LINE(639)
				return false;
			}
		}
		else{
			HX_STACK_LINE(642)
			Float max = -1e+100;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(643)
			Float minmax = -1e+100;		HX_STACK_VAR(minmax,"minmax");
			HX_STACK_LINE(644)
			bool cont = true;		HX_STACK_VAR(cont,"cont");
			HX_STACK_LINE(645)
			::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
			::zpp_nape::geom::ZPP_Vec2 vi = null();		HX_STACK_VAR(vi,"vi");
			HX_STACK_LINE(646)
			::zpp_nape::geom::ZPP_Vec2 vite = s2->polygon->gverts->next;		HX_STACK_VAR(vite,"vite");
			HX_STACK_LINE(647)
			{
				HX_STACK_LINE(648)
				::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s2->polygon->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(649)
				while(((cx_ite != null()))){
					HX_STACK_LINE(650)
					::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(651)
					{
						HX_STACK_LINE(652)
						Float dist = ((((a->gnormx * s1->circle->worldCOMx) + (a->gnormy * s1->circle->worldCOMy)) - a->gprojection) - s1->circle->radius);		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(653)
						if (((dist > (int)0))){
							HX_STACK_LINE(654)
							cont = false;
							HX_STACK_LINE(655)
							break;
						}
						HX_STACK_LINE(657)
						if (((dist > max))){
							HX_STACK_LINE(658)
							max = dist;
							HX_STACK_LINE(659)
							a0 = a;
							HX_STACK_LINE(660)
							vi = vite;
						}
						HX_STACK_LINE(662)
						vite = vite->next;
					}
					HX_STACK_LINE(664)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(667)
			if ((cont)){
				HX_STACK_LINE(668)
				::zpp_nape::geom::ZPP_Vec2 v0 = vi;		HX_STACK_VAR(v0,"v0");
				HX_STACK_LINE(669)
				::zpp_nape::geom::ZPP_Vec2 v1 = (  (((vi->next == null()))) ? ::zpp_nape::geom::ZPP_Vec2(s2->polygon->gverts->next) : ::zpp_nape::geom::ZPP_Vec2(vi->next) );		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(670)
				Float dt = ((s1->circle->worldCOMy * a0->gnormx) - (s1->circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(671)
				if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
					struct _Function_5_1{
						inline static ::zpp_nape::dynamics::ZPP_Contact Block( bool &rev,::zpp_nape::dynamics::ZPP_ColArbiter &arb,::zpp_nape::geom::ZPP_Vec2 &v0,::zpp_nape::shape::ZPP_Shape &s1){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",672);
							{
								HX_STACK_LINE(673)
								Float minDist = s1->circle->radius;		HX_STACK_VAR(minDist,"minDist");
								HX_STACK_LINE(674)
								Float px = 0.0;		HX_STACK_VAR(px,"px");
								HX_STACK_LINE(675)
								Float py = 0.0;		HX_STACK_VAR(py,"py");
								HX_STACK_LINE(676)
								{
									HX_STACK_LINE(677)
									px = (v0->x - s1->circle->worldCOMx);
									HX_STACK_LINE(678)
									py = (v0->y - s1->circle->worldCOMy);
								}
								HX_STACK_LINE(680)
								Float distSqr = ((px * px) + (py * py));		HX_STACK_VAR(distSqr,"distSqr");
								struct _Function_6_1{
									inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_ColArbiter &arb,::zpp_nape::shape::ZPP_Shape &s1,Float &minDist){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",682);
										{
											HX_STACK_LINE(682)
											bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
											HX_STACK_LINE(682)
											::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(682)
											{
												HX_STACK_LINE(682)
												::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(682)
												while(((cx_ite != null()))){
													HX_STACK_LINE(682)
													::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
													HX_STACK_LINE(682)
													if ((((int)0 == cur->hash))){
														HX_STACK_LINE(682)
														c = cur;
														HX_STACK_LINE(682)
														break;
													}
													HX_STACK_LINE(682)
													cx_ite = cx_ite->next;
												}
											}
											HX_STACK_LINE(682)
											if (((c == null()))){
												HX_STACK_LINE(682)
												{
													HX_STACK_LINE(682)
													if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
														HX_STACK_LINE(682)
														c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
													}
													else{
														HX_STACK_LINE(682)
														c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
														HX_STACK_LINE(682)
														::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
														HX_STACK_LINE(682)
														c->next = null();
													}
													HX_STACK_LINE(682)
													Dynamic();
												}
												HX_STACK_LINE(682)
												::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
												HX_STACK_LINE(682)
												ci->jnAcc = ci->jtAcc = (int)0;
												HX_STACK_LINE(682)
												c->hash = (int)0;
												HX_STACK_LINE(682)
												c->fresh = true;
												HX_STACK_LINE(682)
												c->arbiter = arb;
												HX_STACK_LINE(682)
												arb->jrAcc = (int)0;
												HX_STACK_LINE(682)
												{
													HX_STACK_LINE(682)
													::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
													struct _Function_9_1{
														inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",682);
															{
																HX_STACK_LINE(682)
																c->_inuse = true;
																HX_STACK_LINE(682)
																return c;
															}
															return null();
														}
													};
													HX_STACK_LINE(682)
													::zpp_nape::dynamics::ZPP_Contact temp = _Function_9_1::Block(c);		HX_STACK_VAR(temp,"temp");
													HX_STACK_LINE(682)
													temp->next = _this->next;
													HX_STACK_LINE(682)
													_this->next = temp;
													HX_STACK_LINE(682)
													_this->modified = true;
													HX_STACK_LINE(682)
													(_this->length)++;
													HX_STACK_LINE(682)
													c;
												}
												HX_STACK_LINE(682)
												arb->innards->add(ci);
											}
											else{
												HX_STACK_LINE(682)
												c->fresh = false;
											}
											HX_STACK_LINE(682)
											{
												HX_STACK_LINE(682)
												c->px = s1->circle->worldCOMx;
												HX_STACK_LINE(682)
												c->py = s1->circle->worldCOMy;
												HX_STACK_LINE(682)
												{
												}
											}
											HX_STACK_LINE(682)
											{
												HX_STACK_LINE(682)
												arb->nx = (int)1;
												HX_STACK_LINE(682)
												arb->ny = (int)0;
												HX_STACK_LINE(682)
												{
												}
											}
											HX_STACK_LINE(682)
											c->dist = -(minDist);
											HX_STACK_LINE(682)
											c->stamp = arb->stamp;
											HX_STACK_LINE(682)
											c->posOnly = posOnly;
											HX_STACK_LINE(682)
											return c;
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static ::zpp_nape::dynamics::ZPP_Contact Block( bool &rev,::zpp_nape::dynamics::ZPP_ColArbiter &arb,Float &distSqr,Float &px,::zpp_nape::shape::ZPP_Shape &s1,Float &py,Float &minDist){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",683);
										{
											HX_STACK_LINE(684)
											Float invDist = (Float(1.0) / Float(::Math_obj::sqrt(distSqr)));		HX_STACK_VAR(invDist,"invDist");
											HX_STACK_LINE(685)
											Float dist = (  (((invDist < ::nape::Config_obj::epsilon))) ? Float(1e100) : Float((Float(1.0) / Float(invDist))) );		HX_STACK_VAR(dist,"dist");
											HX_STACK_LINE(686)
											Float df = (0.5 + (((s1->circle->radius - (0.5 * minDist))) * invDist));		HX_STACK_VAR(df,"df");
											struct _Function_7_1{
												inline static ::zpp_nape::dynamics::ZPP_Contact Block( Float &df,Float &dist,Float &invDist,::zpp_nape::dynamics::ZPP_ColArbiter &arb,Float &px,::zpp_nape::shape::ZPP_Shape &s1,Float &py,Float &minDist){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",687);
													{
														HX_STACK_LINE(687)
														bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
														HX_STACK_LINE(687)
														::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
														HX_STACK_LINE(687)
														{
															HX_STACK_LINE(687)
															::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(687)
															while(((cx_ite != null()))){
																HX_STACK_LINE(687)
																::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
																HX_STACK_LINE(687)
																if ((((int)0 == cur->hash))){
																	HX_STACK_LINE(687)
																	c = cur;
																	HX_STACK_LINE(687)
																	break;
																}
																HX_STACK_LINE(687)
																cx_ite = cx_ite->next;
															}
														}
														HX_STACK_LINE(687)
														if (((c == null()))){
															HX_STACK_LINE(687)
															{
																HX_STACK_LINE(687)
																if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
																	HX_STACK_LINE(687)
																	c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
																}
																else{
																	HX_STACK_LINE(687)
																	c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
																	HX_STACK_LINE(687)
																	::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
																	HX_STACK_LINE(687)
																	c->next = null();
																}
																HX_STACK_LINE(687)
																Dynamic();
															}
															HX_STACK_LINE(687)
															::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
															HX_STACK_LINE(687)
															ci->jnAcc = ci->jtAcc = (int)0;
															HX_STACK_LINE(687)
															c->hash = (int)0;
															HX_STACK_LINE(687)
															c->fresh = true;
															HX_STACK_LINE(687)
															c->arbiter = arb;
															HX_STACK_LINE(687)
															arb->jrAcc = (int)0;
															HX_STACK_LINE(687)
															{
																HX_STACK_LINE(687)
																::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
																struct _Function_10_1{
																	inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",687);
																		{
																			HX_STACK_LINE(687)
																			c->_inuse = true;
																			HX_STACK_LINE(687)
																			return c;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(687)
																::zpp_nape::dynamics::ZPP_Contact temp = _Function_10_1::Block(c);		HX_STACK_VAR(temp,"temp");
																HX_STACK_LINE(687)
																temp->next = _this->next;
																HX_STACK_LINE(687)
																_this->next = temp;
																HX_STACK_LINE(687)
																_this->modified = true;
																HX_STACK_LINE(687)
																(_this->length)++;
																HX_STACK_LINE(687)
																c;
															}
															HX_STACK_LINE(687)
															arb->innards->add(ci);
														}
														else{
															HX_STACK_LINE(687)
															c->fresh = false;
														}
														HX_STACK_LINE(687)
														{
															HX_STACK_LINE(687)
															c->px = (s1->circle->worldCOMx + (px * df));
															HX_STACK_LINE(687)
															c->py = (s1->circle->worldCOMy + (py * df));
															HX_STACK_LINE(687)
															{
															}
														}
														HX_STACK_LINE(687)
														{
															HX_STACK_LINE(687)
															arb->nx = (-(px) * invDist);
															HX_STACK_LINE(687)
															arb->ny = (-(py) * invDist);
															HX_STACK_LINE(687)
															{
															}
														}
														HX_STACK_LINE(687)
														c->dist = (dist - minDist);
														HX_STACK_LINE(687)
														c->stamp = arb->stamp;
														HX_STACK_LINE(687)
														c->posOnly = posOnly;
														HX_STACK_LINE(687)
														return c;
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static ::zpp_nape::dynamics::ZPP_Contact Block( Float &df,Float &dist,Float &invDist,::zpp_nape::dynamics::ZPP_ColArbiter &arb,Float &px,::zpp_nape::shape::ZPP_Shape &s1,Float &py,Float &minDist){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",688);
													{
														HX_STACK_LINE(688)
														bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
														HX_STACK_LINE(688)
														::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
														HX_STACK_LINE(688)
														{
															HX_STACK_LINE(688)
															::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(688)
															while(((cx_ite != null()))){
																HX_STACK_LINE(688)
																::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
																HX_STACK_LINE(688)
																if ((((int)0 == cur->hash))){
																	HX_STACK_LINE(688)
																	c = cur;
																	HX_STACK_LINE(688)
																	break;
																}
																HX_STACK_LINE(688)
																cx_ite = cx_ite->next;
															}
														}
														HX_STACK_LINE(688)
														if (((c == null()))){
															HX_STACK_LINE(688)
															{
																HX_STACK_LINE(688)
																if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
																	HX_STACK_LINE(688)
																	c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
																}
																else{
																	HX_STACK_LINE(688)
																	c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
																	HX_STACK_LINE(688)
																	::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
																	HX_STACK_LINE(688)
																	c->next = null();
																}
																HX_STACK_LINE(688)
																Dynamic();
															}
															HX_STACK_LINE(688)
															::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
															HX_STACK_LINE(688)
															ci->jnAcc = ci->jtAcc = (int)0;
															HX_STACK_LINE(688)
															c->hash = (int)0;
															HX_STACK_LINE(688)
															c->fresh = true;
															HX_STACK_LINE(688)
															c->arbiter = arb;
															HX_STACK_LINE(688)
															arb->jrAcc = (int)0;
															HX_STACK_LINE(688)
															{
																HX_STACK_LINE(688)
																::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
																struct _Function_10_1{
																	inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",688);
																		{
																			HX_STACK_LINE(688)
																			c->_inuse = true;
																			HX_STACK_LINE(688)
																			return c;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(688)
																::zpp_nape::dynamics::ZPP_Contact temp = _Function_10_1::Block(c);		HX_STACK_VAR(temp,"temp");
																HX_STACK_LINE(688)
																temp->next = _this->next;
																HX_STACK_LINE(688)
																_this->next = temp;
																HX_STACK_LINE(688)
																_this->modified = true;
																HX_STACK_LINE(688)
																(_this->length)++;
																HX_STACK_LINE(688)
																c;
															}
															HX_STACK_LINE(688)
															arb->innards->add(ci);
														}
														else{
															HX_STACK_LINE(688)
															c->fresh = false;
														}
														HX_STACK_LINE(688)
														{
															HX_STACK_LINE(688)
															c->px = (s1->circle->worldCOMx + (px * df));
															HX_STACK_LINE(688)
															c->py = (s1->circle->worldCOMy + (py * df));
															HX_STACK_LINE(688)
															{
															}
														}
														HX_STACK_LINE(688)
														{
															HX_STACK_LINE(688)
															arb->nx = (px * invDist);
															HX_STACK_LINE(688)
															arb->ny = (py * invDist);
															HX_STACK_LINE(688)
															{
															}
														}
														HX_STACK_LINE(688)
														c->dist = (dist - minDist);
														HX_STACK_LINE(688)
														c->stamp = arb->stamp;
														HX_STACK_LINE(688)
														c->posOnly = posOnly;
														HX_STACK_LINE(688)
														return c;
													}
													return null();
												}
											};
											HX_STACK_LINE(687)
											return (  ((rev)) ? ::zpp_nape::dynamics::ZPP_Contact(_Function_7_1::Block(df,dist,invDist,arb,px,s1,py,minDist)) : ::zpp_nape::dynamics::ZPP_Contact(_Function_7_2::Block(df,dist,invDist,arb,px,s1,py,minDist)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(681)
								return (  (((distSqr > (minDist * minDist)))) ? ::zpp_nape::dynamics::ZPP_Contact(null()) : ::zpp_nape::dynamics::ZPP_Contact((  (((distSqr < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? ::zpp_nape::dynamics::ZPP_Contact(_Function_6_1::Block(arb,s1,minDist)) : ::zpp_nape::dynamics::ZPP_Contact(_Function_6_2::Block(rev,arb,distSqr,px,s1,py,minDist)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(672)
					::zpp_nape::dynamics::ZPP_Contact co = _Function_5_1::Block(rev,arb,v0,s1);		HX_STACK_VAR(co,"co");
					HX_STACK_LINE(691)
					if (((co != null()))){
						HX_STACK_LINE(692)
						::zpp_nape::dynamics::ZPP_IContact con = co->inner;		HX_STACK_VAR(con,"con");
						HX_STACK_LINE(693)
						arb->ptype = (int)2;
						HX_STACK_LINE(694)
						Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
						HX_STACK_LINE(695)
						Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
						HX_STACK_LINE(696)
						{
							HX_STACK_LINE(697)
							vx = (v0->x - s2->polygon->body->posx);
							HX_STACK_LINE(698)
							vy = (v0->y - s2->polygon->body->posy);
						}
						HX_STACK_LINE(700)
						arb->__ref_edge1 = a0;
						HX_STACK_LINE(701)
						arb->__ref_vertex = (int)-1;
						HX_STACK_LINE(702)
						if ((rev)){
							HX_STACK_LINE(703)
							{
								HX_STACK_LINE(704)
								con->lr1x = ((vx * s2->polygon->body->axisy) + (vy * s2->polygon->body->axisx));
								HX_STACK_LINE(705)
								con->lr1y = ((vy * s2->polygon->body->axisy) - (vx * s2->polygon->body->axisx));
							}
							HX_STACK_LINE(707)
							{
								HX_STACK_LINE(708)
								con->lr2x = s1->circle->localCOMx;
								HX_STACK_LINE(709)
								con->lr2y = s1->circle->localCOMy;
								HX_STACK_LINE(718)
								{
								}
							}
						}
						else{
							HX_STACK_LINE(729)
							{
								HX_STACK_LINE(730)
								con->lr2x = ((vx * s2->polygon->body->axisy) + (vy * s2->polygon->body->axisx));
								HX_STACK_LINE(731)
								con->lr2y = ((vy * s2->polygon->body->axisy) - (vx * s2->polygon->body->axisx));
							}
							HX_STACK_LINE(733)
							{
								HX_STACK_LINE(734)
								con->lr1x = s1->circle->localCOMx;
								HX_STACK_LINE(735)
								con->lr1y = s1->circle->localCOMy;
								HX_STACK_LINE(744)
								{
								}
							}
						}
						HX_STACK_LINE(754)
						arb->radius = s1->circle->radius;
					}
					HX_STACK_LINE(756)
					return (co != null());
				}
				else{
					HX_STACK_LINE(758)
					if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
						struct _Function_6_1{
							inline static ::zpp_nape::dynamics::ZPP_Contact Block( bool &rev,::zpp_nape::dynamics::ZPP_ColArbiter &arb,::zpp_nape::geom::ZPP_Vec2 &v1,::zpp_nape::shape::ZPP_Shape &s1){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",759);
								{
									HX_STACK_LINE(760)
									Float minDist = s1->circle->radius;		HX_STACK_VAR(minDist,"minDist");
									HX_STACK_LINE(761)
									Float px = 0.0;		HX_STACK_VAR(px,"px");
									HX_STACK_LINE(762)
									Float py = 0.0;		HX_STACK_VAR(py,"py");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(764)
										px = (v1->x - s1->circle->worldCOMx);
										HX_STACK_LINE(765)
										py = (v1->y - s1->circle->worldCOMy);
									}
									HX_STACK_LINE(767)
									Float distSqr = ((px * px) + (py * py));		HX_STACK_VAR(distSqr,"distSqr");
									struct _Function_7_1{
										inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_ColArbiter &arb,::zpp_nape::shape::ZPP_Shape &s1,Float &minDist){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",769);
											{
												HX_STACK_LINE(769)
												bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
												HX_STACK_LINE(769)
												::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
												HX_STACK_LINE(769)
												{
													HX_STACK_LINE(769)
													::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(769)
													while(((cx_ite != null()))){
														HX_STACK_LINE(769)
														::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
														HX_STACK_LINE(769)
														if ((((int)0 == cur->hash))){
															HX_STACK_LINE(769)
															c = cur;
															HX_STACK_LINE(769)
															break;
														}
														HX_STACK_LINE(769)
														cx_ite = cx_ite->next;
													}
												}
												HX_STACK_LINE(769)
												if (((c == null()))){
													HX_STACK_LINE(769)
													{
														HX_STACK_LINE(769)
														if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
															HX_STACK_LINE(769)
															c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
														}
														else{
															HX_STACK_LINE(769)
															c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
															HX_STACK_LINE(769)
															::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
															HX_STACK_LINE(769)
															c->next = null();
														}
														HX_STACK_LINE(769)
														Dynamic();
													}
													HX_STACK_LINE(769)
													::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
													HX_STACK_LINE(769)
													ci->jnAcc = ci->jtAcc = (int)0;
													HX_STACK_LINE(769)
													c->hash = (int)0;
													HX_STACK_LINE(769)
													c->fresh = true;
													HX_STACK_LINE(769)
													c->arbiter = arb;
													HX_STACK_LINE(769)
													arb->jrAcc = (int)0;
													HX_STACK_LINE(769)
													{
														HX_STACK_LINE(769)
														::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
														struct _Function_10_1{
															inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",769);
																{
																	HX_STACK_LINE(769)
																	c->_inuse = true;
																	HX_STACK_LINE(769)
																	return c;
																}
																return null();
															}
														};
														HX_STACK_LINE(769)
														::zpp_nape::dynamics::ZPP_Contact temp = _Function_10_1::Block(c);		HX_STACK_VAR(temp,"temp");
														HX_STACK_LINE(769)
														temp->next = _this->next;
														HX_STACK_LINE(769)
														_this->next = temp;
														HX_STACK_LINE(769)
														_this->modified = true;
														HX_STACK_LINE(769)
														(_this->length)++;
														HX_STACK_LINE(769)
														c;
													}
													HX_STACK_LINE(769)
													arb->innards->add(ci);
												}
												else{
													HX_STACK_LINE(769)
													c->fresh = false;
												}
												HX_STACK_LINE(769)
												{
													HX_STACK_LINE(769)
													c->px = s1->circle->worldCOMx;
													HX_STACK_LINE(769)
													c->py = s1->circle->worldCOMy;
													HX_STACK_LINE(769)
													{
													}
												}
												HX_STACK_LINE(769)
												{
													HX_STACK_LINE(769)
													arb->nx = (int)1;
													HX_STACK_LINE(769)
													arb->ny = (int)0;
													HX_STACK_LINE(769)
													{
													}
												}
												HX_STACK_LINE(769)
												c->dist = -(minDist);
												HX_STACK_LINE(769)
												c->stamp = arb->stamp;
												HX_STACK_LINE(769)
												c->posOnly = posOnly;
												HX_STACK_LINE(769)
												return c;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static ::zpp_nape::dynamics::ZPP_Contact Block( bool &rev,::zpp_nape::dynamics::ZPP_ColArbiter &arb,Float &distSqr,Float &px,::zpp_nape::shape::ZPP_Shape &s1,Float &py,Float &minDist){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",770);
											{
												HX_STACK_LINE(771)
												Float invDist = (Float(1.0) / Float(::Math_obj::sqrt(distSqr)));		HX_STACK_VAR(invDist,"invDist");
												HX_STACK_LINE(772)
												Float dist = (  (((invDist < ::nape::Config_obj::epsilon))) ? Float(1e100) : Float((Float(1.0) / Float(invDist))) );		HX_STACK_VAR(dist,"dist");
												HX_STACK_LINE(773)
												Float df = (0.5 + (((s1->circle->radius - (0.5 * minDist))) * invDist));		HX_STACK_VAR(df,"df");
												struct _Function_8_1{
													inline static ::zpp_nape::dynamics::ZPP_Contact Block( Float &df,Float &dist,Float &invDist,::zpp_nape::dynamics::ZPP_ColArbiter &arb,Float &px,::zpp_nape::shape::ZPP_Shape &s1,Float &py,Float &minDist){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",774);
														{
															HX_STACK_LINE(774)
															bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
															HX_STACK_LINE(774)
															::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
															HX_STACK_LINE(774)
															{
																HX_STACK_LINE(774)
																::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
																HX_STACK_LINE(774)
																while(((cx_ite != null()))){
																	HX_STACK_LINE(774)
																	::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
																	HX_STACK_LINE(774)
																	if ((((int)0 == cur->hash))){
																		HX_STACK_LINE(774)
																		c = cur;
																		HX_STACK_LINE(774)
																		break;
																	}
																	HX_STACK_LINE(774)
																	cx_ite = cx_ite->next;
																}
															}
															HX_STACK_LINE(774)
															if (((c == null()))){
																HX_STACK_LINE(774)
																{
																	HX_STACK_LINE(774)
																	if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
																		HX_STACK_LINE(774)
																		c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(774)
																		c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
																		HX_STACK_LINE(774)
																		::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
																		HX_STACK_LINE(774)
																		c->next = null();
																	}
																	HX_STACK_LINE(774)
																	Dynamic();
																}
																HX_STACK_LINE(774)
																::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
																HX_STACK_LINE(774)
																ci->jnAcc = ci->jtAcc = (int)0;
																HX_STACK_LINE(774)
																c->hash = (int)0;
																HX_STACK_LINE(774)
																c->fresh = true;
																HX_STACK_LINE(774)
																c->arbiter = arb;
																HX_STACK_LINE(774)
																arb->jrAcc = (int)0;
																HX_STACK_LINE(774)
																{
																	HX_STACK_LINE(774)
																	::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
																	struct _Function_11_1{
																		inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",774);
																			{
																				HX_STACK_LINE(774)
																				c->_inuse = true;
																				HX_STACK_LINE(774)
																				return c;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(774)
																	::zpp_nape::dynamics::ZPP_Contact temp = _Function_11_1::Block(c);		HX_STACK_VAR(temp,"temp");
																	HX_STACK_LINE(774)
																	temp->next = _this->next;
																	HX_STACK_LINE(774)
																	_this->next = temp;
																	HX_STACK_LINE(774)
																	_this->modified = true;
																	HX_STACK_LINE(774)
																	(_this->length)++;
																	HX_STACK_LINE(774)
																	c;
																}
																HX_STACK_LINE(774)
																arb->innards->add(ci);
															}
															else{
																HX_STACK_LINE(774)
																c->fresh = false;
															}
															HX_STACK_LINE(774)
															{
																HX_STACK_LINE(774)
																c->px = (s1->circle->worldCOMx + (px * df));
																HX_STACK_LINE(774)
																c->py = (s1->circle->worldCOMy + (py * df));
																HX_STACK_LINE(774)
																{
																}
															}
															HX_STACK_LINE(774)
															{
																HX_STACK_LINE(774)
																arb->nx = (-(px) * invDist);
																HX_STACK_LINE(774)
																arb->ny = (-(py) * invDist);
																HX_STACK_LINE(774)
																{
																}
															}
															HX_STACK_LINE(774)
															c->dist = (dist - minDist);
															HX_STACK_LINE(774)
															c->stamp = arb->stamp;
															HX_STACK_LINE(774)
															c->posOnly = posOnly;
															HX_STACK_LINE(774)
															return c;
														}
														return null();
													}
												};
												struct _Function_8_2{
													inline static ::zpp_nape::dynamics::ZPP_Contact Block( Float &df,Float &dist,Float &invDist,::zpp_nape::dynamics::ZPP_ColArbiter &arb,Float &px,::zpp_nape::shape::ZPP_Shape &s1,Float &py,Float &minDist){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",775);
														{
															HX_STACK_LINE(775)
															bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
															HX_STACK_LINE(775)
															::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
															HX_STACK_LINE(775)
															{
																HX_STACK_LINE(775)
																::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
																HX_STACK_LINE(775)
																while(((cx_ite != null()))){
																	HX_STACK_LINE(775)
																	::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
																	HX_STACK_LINE(775)
																	if ((((int)0 == cur->hash))){
																		HX_STACK_LINE(775)
																		c = cur;
																		HX_STACK_LINE(775)
																		break;
																	}
																	HX_STACK_LINE(775)
																	cx_ite = cx_ite->next;
																}
															}
															HX_STACK_LINE(775)
															if (((c == null()))){
																HX_STACK_LINE(775)
																{
																	HX_STACK_LINE(775)
																	if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
																		HX_STACK_LINE(775)
																		c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(775)
																		c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
																		HX_STACK_LINE(775)
																		::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
																		HX_STACK_LINE(775)
																		c->next = null();
																	}
																	HX_STACK_LINE(775)
																	Dynamic();
																}
																HX_STACK_LINE(775)
																::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
																HX_STACK_LINE(775)
																ci->jnAcc = ci->jtAcc = (int)0;
																HX_STACK_LINE(775)
																c->hash = (int)0;
																HX_STACK_LINE(775)
																c->fresh = true;
																HX_STACK_LINE(775)
																c->arbiter = arb;
																HX_STACK_LINE(775)
																arb->jrAcc = (int)0;
																HX_STACK_LINE(775)
																{
																	HX_STACK_LINE(775)
																	::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
																	struct _Function_11_1{
																		inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",775);
																			{
																				HX_STACK_LINE(775)
																				c->_inuse = true;
																				HX_STACK_LINE(775)
																				return c;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(775)
																	::zpp_nape::dynamics::ZPP_Contact temp = _Function_11_1::Block(c);		HX_STACK_VAR(temp,"temp");
																	HX_STACK_LINE(775)
																	temp->next = _this->next;
																	HX_STACK_LINE(775)
																	_this->next = temp;
																	HX_STACK_LINE(775)
																	_this->modified = true;
																	HX_STACK_LINE(775)
																	(_this->length)++;
																	HX_STACK_LINE(775)
																	c;
																}
																HX_STACK_LINE(775)
																arb->innards->add(ci);
															}
															else{
																HX_STACK_LINE(775)
																c->fresh = false;
															}
															HX_STACK_LINE(775)
															{
																HX_STACK_LINE(775)
																c->px = (s1->circle->worldCOMx + (px * df));
																HX_STACK_LINE(775)
																c->py = (s1->circle->worldCOMy + (py * df));
																HX_STACK_LINE(775)
																{
																}
															}
															HX_STACK_LINE(775)
															{
																HX_STACK_LINE(775)
																arb->nx = (px * invDist);
																HX_STACK_LINE(775)
																arb->ny = (py * invDist);
																HX_STACK_LINE(775)
																{
																}
															}
															HX_STACK_LINE(775)
															c->dist = (dist - minDist);
															HX_STACK_LINE(775)
															c->stamp = arb->stamp;
															HX_STACK_LINE(775)
															c->posOnly = posOnly;
															HX_STACK_LINE(775)
															return c;
														}
														return null();
													}
												};
												HX_STACK_LINE(774)
												return (  ((rev)) ? ::zpp_nape::dynamics::ZPP_Contact(_Function_8_1::Block(df,dist,invDist,arb,px,s1,py,minDist)) : ::zpp_nape::dynamics::ZPP_Contact(_Function_8_2::Block(df,dist,invDist,arb,px,s1,py,minDist)) );
											}
											return null();
										}
									};
									HX_STACK_LINE(768)
									return (  (((distSqr > (minDist * minDist)))) ? ::zpp_nape::dynamics::ZPP_Contact(null()) : ::zpp_nape::dynamics::ZPP_Contact((  (((distSqr < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? ::zpp_nape::dynamics::ZPP_Contact(_Function_7_1::Block(arb,s1,minDist)) : ::zpp_nape::dynamics::ZPP_Contact(_Function_7_2::Block(rev,arb,distSqr,px,s1,py,minDist)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(759)
						::zpp_nape::dynamics::ZPP_Contact co = _Function_6_1::Block(rev,arb,v1,s1);		HX_STACK_VAR(co,"co");
						HX_STACK_LINE(778)
						if (((co != null()))){
							HX_STACK_LINE(779)
							::zpp_nape::dynamics::ZPP_IContact con = co->inner;		HX_STACK_VAR(con,"con");
							HX_STACK_LINE(780)
							arb->ptype = (int)2;
							HX_STACK_LINE(781)
							Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
							HX_STACK_LINE(782)
							Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
							HX_STACK_LINE(783)
							{
								HX_STACK_LINE(784)
								vx = (v1->x - s2->polygon->body->posx);
								HX_STACK_LINE(785)
								vy = (v1->y - s2->polygon->body->posy);
							}
							HX_STACK_LINE(787)
							arb->__ref_edge1 = a0;
							HX_STACK_LINE(788)
							arb->__ref_vertex = (int)1;
							HX_STACK_LINE(789)
							if ((rev)){
								HX_STACK_LINE(790)
								{
									HX_STACK_LINE(791)
									con->lr1x = ((vx * s2->polygon->body->axisy) + (vy * s2->polygon->body->axisx));
									HX_STACK_LINE(792)
									con->lr1y = ((vy * s2->polygon->body->axisy) - (vx * s2->polygon->body->axisx));
								}
								HX_STACK_LINE(794)
								{
									HX_STACK_LINE(795)
									con->lr2x = s1->circle->localCOMx;
									HX_STACK_LINE(796)
									con->lr2y = s1->circle->localCOMy;
									HX_STACK_LINE(805)
									{
									}
								}
							}
							else{
								HX_STACK_LINE(816)
								{
									HX_STACK_LINE(817)
									con->lr2x = ((vx * s2->polygon->body->axisy) + (vy * s2->polygon->body->axisx));
									HX_STACK_LINE(818)
									con->lr2y = ((vy * s2->polygon->body->axisy) - (vx * s2->polygon->body->axisx));
								}
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(821)
									con->lr1x = s1->circle->localCOMx;
									HX_STACK_LINE(822)
									con->lr1y = s1->circle->localCOMy;
									HX_STACK_LINE(831)
									{
									}
								}
							}
							HX_STACK_LINE(841)
							arb->radius = s1->circle->radius;
						}
						HX_STACK_LINE(843)
						return (co != null());
					}
					else{
						HX_STACK_LINE(846)
						Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(847)
						Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(848)
						{
							HX_STACK_LINE(849)
							Float t = (s1->circle->radius + (max * 0.5));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(858)
							nx = (a0->gnormx * t);
							HX_STACK_LINE(859)
							ny = (a0->gnormy * t);
						}
						HX_STACK_LINE(861)
						Float px = 0.0;		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(862)
						Float py = 0.0;		HX_STACK_VAR(py,"py");
						HX_STACK_LINE(863)
						{
							HX_STACK_LINE(864)
							px = (s1->circle->worldCOMx - nx);
							HX_STACK_LINE(865)
							py = (s1->circle->worldCOMy - ny);
						}
						struct _Function_6_1{
							inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_ColArbiter &arb,::zpp_nape::shape::ZPP_Edge &a0,Float &px,Float &max,Float &py){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",867);
								{
									HX_STACK_LINE(867)
									bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
									HX_STACK_LINE(867)
									::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(867)
									{
										HX_STACK_LINE(867)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(867)
										while(((cx_ite != null()))){
											HX_STACK_LINE(867)
											::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
											HX_STACK_LINE(867)
											if ((((int)0 == cur->hash))){
												HX_STACK_LINE(867)
												c = cur;
												HX_STACK_LINE(867)
												break;
											}
											HX_STACK_LINE(867)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(867)
									if (((c == null()))){
										HX_STACK_LINE(867)
										{
											HX_STACK_LINE(867)
											if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
												HX_STACK_LINE(867)
												c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
											}
											else{
												HX_STACK_LINE(867)
												c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
												HX_STACK_LINE(867)
												::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
												HX_STACK_LINE(867)
												c->next = null();
											}
											HX_STACK_LINE(867)
											Dynamic();
										}
										HX_STACK_LINE(867)
										::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
										HX_STACK_LINE(867)
										ci->jnAcc = ci->jtAcc = (int)0;
										HX_STACK_LINE(867)
										c->hash = (int)0;
										HX_STACK_LINE(867)
										c->fresh = true;
										HX_STACK_LINE(867)
										c->arbiter = arb;
										HX_STACK_LINE(867)
										arb->jrAcc = (int)0;
										HX_STACK_LINE(867)
										{
											HX_STACK_LINE(867)
											::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
											struct _Function_9_1{
												inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",867);
													{
														HX_STACK_LINE(867)
														c->_inuse = true;
														HX_STACK_LINE(867)
														return c;
													}
													return null();
												}
											};
											HX_STACK_LINE(867)
											::zpp_nape::dynamics::ZPP_Contact temp = _Function_9_1::Block(c);		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(867)
											temp->next = _this->next;
											HX_STACK_LINE(867)
											_this->next = temp;
											HX_STACK_LINE(867)
											_this->modified = true;
											HX_STACK_LINE(867)
											(_this->length)++;
											HX_STACK_LINE(867)
											c;
										}
										HX_STACK_LINE(867)
										arb->innards->add(ci);
									}
									else{
										HX_STACK_LINE(867)
										c->fresh = false;
									}
									HX_STACK_LINE(867)
									{
										HX_STACK_LINE(867)
										c->px = px;
										HX_STACK_LINE(867)
										c->py = py;
										HX_STACK_LINE(867)
										{
										}
									}
									HX_STACK_LINE(867)
									{
										HX_STACK_LINE(867)
										arb->nx = a0->gnormx;
										HX_STACK_LINE(867)
										arb->ny = a0->gnormy;
										HX_STACK_LINE(867)
										{
										}
									}
									HX_STACK_LINE(867)
									c->dist = max;
									HX_STACK_LINE(867)
									c->stamp = arb->stamp;
									HX_STACK_LINE(867)
									c->posOnly = posOnly;
									HX_STACK_LINE(867)
									return c;
								}
								return null();
							}
						};
						struct _Function_6_2{
							inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_ColArbiter &arb,::zpp_nape::shape::ZPP_Edge &a0,Float &px,Float &max,Float &py){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",868);
								{
									HX_STACK_LINE(868)
									bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
									HX_STACK_LINE(868)
									::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(868)
									{
										HX_STACK_LINE(868)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(868)
										while(((cx_ite != null()))){
											HX_STACK_LINE(868)
											::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
											HX_STACK_LINE(868)
											if ((((int)0 == cur->hash))){
												HX_STACK_LINE(868)
												c = cur;
												HX_STACK_LINE(868)
												break;
											}
											HX_STACK_LINE(868)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(868)
									if (((c == null()))){
										HX_STACK_LINE(868)
										{
											HX_STACK_LINE(868)
											if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
												HX_STACK_LINE(868)
												c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
											}
											else{
												HX_STACK_LINE(868)
												c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
												HX_STACK_LINE(868)
												::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
												HX_STACK_LINE(868)
												c->next = null();
											}
											HX_STACK_LINE(868)
											Dynamic();
										}
										HX_STACK_LINE(868)
										::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
										HX_STACK_LINE(868)
										ci->jnAcc = ci->jtAcc = (int)0;
										HX_STACK_LINE(868)
										c->hash = (int)0;
										HX_STACK_LINE(868)
										c->fresh = true;
										HX_STACK_LINE(868)
										c->arbiter = arb;
										HX_STACK_LINE(868)
										arb->jrAcc = (int)0;
										HX_STACK_LINE(868)
										{
											HX_STACK_LINE(868)
											::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
											struct _Function_9_1{
												inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",868);
													{
														HX_STACK_LINE(868)
														c->_inuse = true;
														HX_STACK_LINE(868)
														return c;
													}
													return null();
												}
											};
											HX_STACK_LINE(868)
											::zpp_nape::dynamics::ZPP_Contact temp = _Function_9_1::Block(c);		HX_STACK_VAR(temp,"temp");
											HX_STACK_LINE(868)
											temp->next = _this->next;
											HX_STACK_LINE(868)
											_this->next = temp;
											HX_STACK_LINE(868)
											_this->modified = true;
											HX_STACK_LINE(868)
											(_this->length)++;
											HX_STACK_LINE(868)
											c;
										}
										HX_STACK_LINE(868)
										arb->innards->add(ci);
									}
									else{
										HX_STACK_LINE(868)
										c->fresh = false;
									}
									HX_STACK_LINE(868)
									{
										HX_STACK_LINE(868)
										c->px = px;
										HX_STACK_LINE(868)
										c->py = py;
										HX_STACK_LINE(868)
										{
										}
									}
									HX_STACK_LINE(868)
									{
										HX_STACK_LINE(868)
										arb->nx = -(a0->gnormx);
										HX_STACK_LINE(868)
										arb->ny = -(a0->gnormy);
										HX_STACK_LINE(868)
										{
										}
									}
									HX_STACK_LINE(868)
									c->dist = max;
									HX_STACK_LINE(868)
									c->stamp = arb->stamp;
									HX_STACK_LINE(868)
									c->posOnly = posOnly;
									HX_STACK_LINE(868)
									return c;
								}
								return null();
							}
						};
						HX_STACK_LINE(867)
						::zpp_nape::dynamics::ZPP_Contact con = (  ((rev)) ? ::zpp_nape::dynamics::ZPP_Contact(_Function_6_1::Block(arb,a0,px,max,py)) : ::zpp_nape::dynamics::ZPP_Contact(_Function_6_2::Block(arb,a0,px,max,py)) );		HX_STACK_VAR(con,"con");
						HX_STACK_LINE(869)
						arb->ptype = (  ((rev)) ? int((int)0) : int((int)1) );
						HX_STACK_LINE(870)
						{
							HX_STACK_LINE(871)
							arb->lnormx = a0->lnormx;
							HX_STACK_LINE(872)
							arb->lnormy = a0->lnormy;
							HX_STACK_LINE(881)
							{
							}
						}
						HX_STACK_LINE(890)
						arb->rev = !(rev);
						HX_STACK_LINE(891)
						arb->lproj = a0->lprojection;
						HX_STACK_LINE(892)
						arb->radius = s1->circle->radius;
						HX_STACK_LINE(893)
						{
							HX_STACK_LINE(894)
							con->inner->lr1x = s1->circle->localCOMx;
							HX_STACK_LINE(895)
							con->inner->lr1y = s1->circle->localCOMy;
							HX_STACK_LINE(904)
							{
							}
						}
						HX_STACK_LINE(913)
						arb->__ref_edge1 = a0;
						HX_STACK_LINE(914)
						arb->__ref_vertex = (int)0;
						HX_STACK_LINE(915)
						return true;
					}
				}
			}
			else{
				HX_STACK_LINE(918)
				return false;
			}
		}
	}
	else{
		struct _Function_2_1{
			inline static ::zpp_nape::dynamics::ZPP_Contact Block( bool &rev,::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_ColArbiter &arb,::zpp_nape::shape::ZPP_Shape &s1){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",922);
				{
					HX_STACK_LINE(923)
					Float minDist = (s1->circle->radius + s2->circle->radius);		HX_STACK_VAR(minDist,"minDist");
					HX_STACK_LINE(924)
					Float px = 0.0;		HX_STACK_VAR(px,"px");
					HX_STACK_LINE(925)
					Float py = 0.0;		HX_STACK_VAR(py,"py");
					HX_STACK_LINE(926)
					{
						HX_STACK_LINE(927)
						px = (s2->circle->worldCOMx - s1->circle->worldCOMx);
						HX_STACK_LINE(928)
						py = (s2->circle->worldCOMy - s1->circle->worldCOMy);
					}
					HX_STACK_LINE(930)
					Float distSqr = ((px * px) + (py * py));		HX_STACK_VAR(distSqr,"distSqr");
					struct _Function_3_1{
						inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_ColArbiter &arb,::zpp_nape::shape::ZPP_Shape &s1,Float &minDist){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",932);
							{
								HX_STACK_LINE(932)
								bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
								HX_STACK_LINE(932)
								::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(932)
								{
									HX_STACK_LINE(932)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(932)
									while(((cx_ite != null()))){
										HX_STACK_LINE(932)
										::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
										HX_STACK_LINE(932)
										if ((((int)0 == cur->hash))){
											HX_STACK_LINE(932)
											c = cur;
											HX_STACK_LINE(932)
											break;
										}
										HX_STACK_LINE(932)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(932)
								if (((c == null()))){
									HX_STACK_LINE(932)
									{
										HX_STACK_LINE(932)
										if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
											HX_STACK_LINE(932)
											c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
										}
										else{
											HX_STACK_LINE(932)
											c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
											HX_STACK_LINE(932)
											::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
											HX_STACK_LINE(932)
											c->next = null();
										}
										HX_STACK_LINE(932)
										Dynamic();
									}
									HX_STACK_LINE(932)
									::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
									HX_STACK_LINE(932)
									ci->jnAcc = ci->jtAcc = (int)0;
									HX_STACK_LINE(932)
									c->hash = (int)0;
									HX_STACK_LINE(932)
									c->fresh = true;
									HX_STACK_LINE(932)
									c->arbiter = arb;
									HX_STACK_LINE(932)
									arb->jrAcc = (int)0;
									HX_STACK_LINE(932)
									{
										HX_STACK_LINE(932)
										::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
										struct _Function_6_1{
											inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",932);
												{
													HX_STACK_LINE(932)
													c->_inuse = true;
													HX_STACK_LINE(932)
													return c;
												}
												return null();
											}
										};
										HX_STACK_LINE(932)
										::zpp_nape::dynamics::ZPP_Contact temp = _Function_6_1::Block(c);		HX_STACK_VAR(temp,"temp");
										HX_STACK_LINE(932)
										temp->next = _this->next;
										HX_STACK_LINE(932)
										_this->next = temp;
										HX_STACK_LINE(932)
										_this->modified = true;
										HX_STACK_LINE(932)
										(_this->length)++;
										HX_STACK_LINE(932)
										c;
									}
									HX_STACK_LINE(932)
									arb->innards->add(ci);
								}
								else{
									HX_STACK_LINE(932)
									c->fresh = false;
								}
								HX_STACK_LINE(932)
								{
									HX_STACK_LINE(932)
									c->px = s1->circle->worldCOMx;
									HX_STACK_LINE(932)
									c->py = s1->circle->worldCOMy;
									HX_STACK_LINE(932)
									{
									}
								}
								HX_STACK_LINE(932)
								{
									HX_STACK_LINE(932)
									arb->nx = (int)1;
									HX_STACK_LINE(932)
									arb->ny = (int)0;
									HX_STACK_LINE(932)
									{
									}
								}
								HX_STACK_LINE(932)
								c->dist = -(minDist);
								HX_STACK_LINE(932)
								c->stamp = arb->stamp;
								HX_STACK_LINE(932)
								c->posOnly = posOnly;
								HX_STACK_LINE(932)
								return c;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static ::zpp_nape::dynamics::ZPP_Contact Block( bool &rev,::zpp_nape::dynamics::ZPP_ColArbiter &arb,Float &distSqr,Float &px,::zpp_nape::shape::ZPP_Shape &s1,Float &py,Float &minDist){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",933);
							{
								HX_STACK_LINE(934)
								Float invDist = (Float(1.0) / Float(::Math_obj::sqrt(distSqr)));		HX_STACK_VAR(invDist,"invDist");
								HX_STACK_LINE(935)
								Float dist = (  (((invDist < ::nape::Config_obj::epsilon))) ? Float(1e100) : Float((Float(1.0) / Float(invDist))) );		HX_STACK_VAR(dist,"dist");
								HX_STACK_LINE(936)
								Float df = (0.5 + (((s1->circle->radius - (0.5 * minDist))) * invDist));		HX_STACK_VAR(df,"df");
								struct _Function_4_1{
									inline static ::zpp_nape::dynamics::ZPP_Contact Block( Float &df,Float &dist,Float &invDist,::zpp_nape::dynamics::ZPP_ColArbiter &arb,Float &px,::zpp_nape::shape::ZPP_Shape &s1,Float &py,Float &minDist){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",937);
										{
											HX_STACK_LINE(937)
											bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
											HX_STACK_LINE(937)
											::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(937)
											{
												HX_STACK_LINE(937)
												::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(937)
												while(((cx_ite != null()))){
													HX_STACK_LINE(937)
													::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
													HX_STACK_LINE(937)
													if ((((int)0 == cur->hash))){
														HX_STACK_LINE(937)
														c = cur;
														HX_STACK_LINE(937)
														break;
													}
													HX_STACK_LINE(937)
													cx_ite = cx_ite->next;
												}
											}
											HX_STACK_LINE(937)
											if (((c == null()))){
												HX_STACK_LINE(937)
												{
													HX_STACK_LINE(937)
													if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
														HX_STACK_LINE(937)
														c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
													}
													else{
														HX_STACK_LINE(937)
														c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
														HX_STACK_LINE(937)
														::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
														HX_STACK_LINE(937)
														c->next = null();
													}
													HX_STACK_LINE(937)
													Dynamic();
												}
												HX_STACK_LINE(937)
												::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
												HX_STACK_LINE(937)
												ci->jnAcc = ci->jtAcc = (int)0;
												HX_STACK_LINE(937)
												c->hash = (int)0;
												HX_STACK_LINE(937)
												c->fresh = true;
												HX_STACK_LINE(937)
												c->arbiter = arb;
												HX_STACK_LINE(937)
												arb->jrAcc = (int)0;
												HX_STACK_LINE(937)
												{
													HX_STACK_LINE(937)
													::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
													struct _Function_7_1{
														inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",937);
															{
																HX_STACK_LINE(937)
																c->_inuse = true;
																HX_STACK_LINE(937)
																return c;
															}
															return null();
														}
													};
													HX_STACK_LINE(937)
													::zpp_nape::dynamics::ZPP_Contact temp = _Function_7_1::Block(c);		HX_STACK_VAR(temp,"temp");
													HX_STACK_LINE(937)
													temp->next = _this->next;
													HX_STACK_LINE(937)
													_this->next = temp;
													HX_STACK_LINE(937)
													_this->modified = true;
													HX_STACK_LINE(937)
													(_this->length)++;
													HX_STACK_LINE(937)
													c;
												}
												HX_STACK_LINE(937)
												arb->innards->add(ci);
											}
											else{
												HX_STACK_LINE(937)
												c->fresh = false;
											}
											HX_STACK_LINE(937)
											{
												HX_STACK_LINE(937)
												c->px = (s1->circle->worldCOMx + (px * df));
												HX_STACK_LINE(937)
												c->py = (s1->circle->worldCOMy + (py * df));
												HX_STACK_LINE(937)
												{
												}
											}
											HX_STACK_LINE(937)
											{
												HX_STACK_LINE(937)
												arb->nx = (-(px) * invDist);
												HX_STACK_LINE(937)
												arb->ny = (-(py) * invDist);
												HX_STACK_LINE(937)
												{
												}
											}
											HX_STACK_LINE(937)
											c->dist = (dist - minDist);
											HX_STACK_LINE(937)
											c->stamp = arb->stamp;
											HX_STACK_LINE(937)
											c->posOnly = posOnly;
											HX_STACK_LINE(937)
											return c;
										}
										return null();
									}
								};
								struct _Function_4_2{
									inline static ::zpp_nape::dynamics::ZPP_Contact Block( Float &df,Float &dist,Float &invDist,::zpp_nape::dynamics::ZPP_ColArbiter &arb,Float &px,::zpp_nape::shape::ZPP_Shape &s1,Float &py,Float &minDist){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",938);
										{
											HX_STACK_LINE(938)
											bool posOnly = false;		HX_STACK_VAR(posOnly,"posOnly");
											HX_STACK_LINE(938)
											::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(938)
											{
												HX_STACK_LINE(938)
												::zpp_nape::dynamics::ZPP_Contact cx_ite = arb->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(938)
												while(((cx_ite != null()))){
													HX_STACK_LINE(938)
													::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
													HX_STACK_LINE(938)
													if ((((int)0 == cur->hash))){
														HX_STACK_LINE(938)
														c = cur;
														HX_STACK_LINE(938)
														break;
													}
													HX_STACK_LINE(938)
													cx_ite = cx_ite->next;
												}
											}
											HX_STACK_LINE(938)
											if (((c == null()))){
												HX_STACK_LINE(938)
												{
													HX_STACK_LINE(938)
													if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
														HX_STACK_LINE(938)
														c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
													}
													else{
														HX_STACK_LINE(938)
														c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
														HX_STACK_LINE(938)
														::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
														HX_STACK_LINE(938)
														c->next = null();
													}
													HX_STACK_LINE(938)
													Dynamic();
												}
												HX_STACK_LINE(938)
												::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
												HX_STACK_LINE(938)
												ci->jnAcc = ci->jtAcc = (int)0;
												HX_STACK_LINE(938)
												c->hash = (int)0;
												HX_STACK_LINE(938)
												c->fresh = true;
												HX_STACK_LINE(938)
												c->arbiter = arb;
												HX_STACK_LINE(938)
												arb->jrAcc = (int)0;
												HX_STACK_LINE(938)
												{
													HX_STACK_LINE(938)
													::zpp_nape::dynamics::ZPP_Contact _this = arb->contacts;		HX_STACK_VAR(_this,"_this");
													struct _Function_7_1{
														inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",938);
															{
																HX_STACK_LINE(938)
																c->_inuse = true;
																HX_STACK_LINE(938)
																return c;
															}
															return null();
														}
													};
													HX_STACK_LINE(938)
													::zpp_nape::dynamics::ZPP_Contact temp = _Function_7_1::Block(c);		HX_STACK_VAR(temp,"temp");
													HX_STACK_LINE(938)
													temp->next = _this->next;
													HX_STACK_LINE(938)
													_this->next = temp;
													HX_STACK_LINE(938)
													_this->modified = true;
													HX_STACK_LINE(938)
													(_this->length)++;
													HX_STACK_LINE(938)
													c;
												}
												HX_STACK_LINE(938)
												arb->innards->add(ci);
											}
											else{
												HX_STACK_LINE(938)
												c->fresh = false;
											}
											HX_STACK_LINE(938)
											{
												HX_STACK_LINE(938)
												c->px = (s1->circle->worldCOMx + (px * df));
												HX_STACK_LINE(938)
												c->py = (s1->circle->worldCOMy + (py * df));
												HX_STACK_LINE(938)
												{
												}
											}
											HX_STACK_LINE(938)
											{
												HX_STACK_LINE(938)
												arb->nx = (px * invDist);
												HX_STACK_LINE(938)
												arb->ny = (py * invDist);
												HX_STACK_LINE(938)
												{
												}
											}
											HX_STACK_LINE(938)
											c->dist = (dist - minDist);
											HX_STACK_LINE(938)
											c->stamp = arb->stamp;
											HX_STACK_LINE(938)
											c->posOnly = posOnly;
											HX_STACK_LINE(938)
											return c;
										}
										return null();
									}
								};
								HX_STACK_LINE(937)
								return (  ((rev)) ? ::zpp_nape::dynamics::ZPP_Contact(_Function_4_1::Block(df,dist,invDist,arb,px,s1,py,minDist)) : ::zpp_nape::dynamics::ZPP_Contact(_Function_4_2::Block(df,dist,invDist,arb,px,s1,py,minDist)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(931)
					return (  (((distSqr > (minDist * minDist)))) ? ::zpp_nape::dynamics::ZPP_Contact(null()) : ::zpp_nape::dynamics::ZPP_Contact((  (((distSqr < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? ::zpp_nape::dynamics::ZPP_Contact(_Function_3_1::Block(arb,s1,minDist)) : ::zpp_nape::dynamics::ZPP_Contact(_Function_3_2::Block(rev,arb,distSqr,px,s1,py,minDist)) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(922)
		::zpp_nape::dynamics::ZPP_Contact co = _Function_2_1::Block(rev,s2,arb,s1);		HX_STACK_VAR(co,"co");
		HX_STACK_LINE(941)
		if (((co != null()))){
			HX_STACK_LINE(942)
			::zpp_nape::dynamics::ZPP_IContact con = co->inner;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(943)
			if ((rev)){
				HX_STACK_LINE(944)
				{
					HX_STACK_LINE(945)
					con->lr1x = s2->circle->localCOMx;
					HX_STACK_LINE(946)
					con->lr1y = s2->circle->localCOMy;
					HX_STACK_LINE(955)
					{
					}
				}
				HX_STACK_LINE(964)
				{
					HX_STACK_LINE(965)
					con->lr2x = s1->circle->localCOMx;
					HX_STACK_LINE(966)
					con->lr2y = s1->circle->localCOMy;
					HX_STACK_LINE(975)
					{
					}
				}
			}
			else{
				HX_STACK_LINE(986)
				{
					HX_STACK_LINE(987)
					con->lr1x = s1->circle->localCOMx;
					HX_STACK_LINE(988)
					con->lr1y = s1->circle->localCOMy;
					HX_STACK_LINE(997)
					{
					}
				}
				HX_STACK_LINE(1006)
				{
					HX_STACK_LINE(1007)
					con->lr2x = s2->circle->localCOMx;
					HX_STACK_LINE(1008)
					con->lr2y = s2->circle->localCOMy;
					HX_STACK_LINE(1017)
					{
					}
				}
			}
			HX_STACK_LINE(1027)
			arb->radius = (s1->circle->radius + s2->circle->radius);
			HX_STACK_LINE(1028)
			arb->ptype = (int)2;
			HX_STACK_LINE(1029)
			return true;
		}
		else{
			HX_STACK_LINE(1031)
			return false;
		}
	}
	HX_STACK_LINE(356)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_Collide_obj,contactCollide,return )

bool ZPP_Collide_obj::testCollide_safe( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2){
	HX_STACK_PUSH("ZPP_Collide::testCollide_safe","zpp_nape/geom/Collide.hx",1034);
	HX_STACK_ARG(s1,"s1");
	HX_STACK_ARG(s2,"s2");
	HX_STACK_LINE(1035)
	if (((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
		HX_STACK_LINE(1036)
		::zpp_nape::shape::ZPP_Shape t = s1;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1037)
		s1 = s2;
		HX_STACK_LINE(1038)
		s2 = t;
	}
	HX_STACK_LINE(1040)
	return ::zpp_nape::geom::ZPP_Collide_obj::testCollide(s1,s2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,testCollide_safe,return )

bool ZPP_Collide_obj::testCollide( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2){
	HX_STACK_PUSH("ZPP_Collide::testCollide","zpp_nape/geom/Collide.hx",1042);
	HX_STACK_ARG(s1,"s1");
	HX_STACK_ARG(s2,"s2");
	HX_STACK_LINE(1042)
	if (((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1044);
				{
					HX_STACK_LINE(1045)
					bool cont = true;		HX_STACK_VAR(cont,"cont");
					HX_STACK_LINE(1046)
					{
						HX_STACK_LINE(1047)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s1->polygon->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1048)
						while(((cx_ite != null()))){
							HX_STACK_LINE(1049)
							::zpp_nape::shape::ZPP_Edge ax = cx_ite->elt;		HX_STACK_VAR(ax,"ax");
							HX_STACK_LINE(1050)
							{
								HX_STACK_LINE(1051)
								Float min = 1e100;		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(1052)
								{
									HX_STACK_LINE(1053)
									::zpp_nape::geom::ZPP_Vec2 cx_ite1 = s2->polygon->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(1054)
									while(((cx_ite1 != null()))){
										HX_STACK_LINE(1055)
										::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1056)
										{
											HX_STACK_LINE(1057)
											Float k = ((ax->gnormx * v->x) + (ax->gnormy * v->y));		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(1058)
											if (((k < min))){
												HX_STACK_LINE(1058)
												min = k;
											}
										}
										HX_STACK_LINE(1060)
										cx_ite1 = cx_ite1->next;
									}
								}
								HX_STACK_LINE(1063)
								hx::SubEq(min,ax->gprojection);
								HX_STACK_LINE(1064)
								if (((min > (int)0))){
									HX_STACK_LINE(1065)
									cont = false;
									HX_STACK_LINE(1066)
									break;
								}
							}
							HX_STACK_LINE(1069)
							cx_ite = cx_ite->next;
						}
					}
					struct _Function_3_1{
						inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,bool &cont,::zpp_nape::shape::ZPP_Shape &s1){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1072);
							{
								HX_STACK_LINE(1073)
								{
									HX_STACK_LINE(1074)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s2->polygon->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1075)
									while(((cx_ite != null()))){
										HX_STACK_LINE(1076)
										::zpp_nape::shape::ZPP_Edge ax = cx_ite->elt;		HX_STACK_VAR(ax,"ax");
										HX_STACK_LINE(1077)
										{
											HX_STACK_LINE(1078)
											Float min = 1e100;		HX_STACK_VAR(min,"min");
											HX_STACK_LINE(1079)
											{
												HX_STACK_LINE(1080)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = s1->polygon->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(1081)
												while(((cx_ite1 != null()))){
													HX_STACK_LINE(1082)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(1083)
													{
														HX_STACK_LINE(1084)
														Float k = ((ax->gnormx * v->x) + (ax->gnormy * v->y));		HX_STACK_VAR(k,"k");
														HX_STACK_LINE(1085)
														if (((k < min))){
															HX_STACK_LINE(1085)
															min = k;
														}
													}
													HX_STACK_LINE(1087)
													cx_ite1 = cx_ite1->next;
												}
											}
											HX_STACK_LINE(1090)
											hx::SubEq(min,ax->gprojection);
											HX_STACK_LINE(1091)
											if (((min > (int)0))){
												HX_STACK_LINE(1092)
												cont = false;
												HX_STACK_LINE(1093)
												break;
											}
										}
										HX_STACK_LINE(1096)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1099)
								return cont;
							}
							return null();
						}
					};
					HX_STACK_LINE(1072)
					return (  ((cont)) ? bool(_Function_3_1::Block(s2,cont,s1)) : bool(false) );
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1103);
				{
					HX_STACK_LINE(1104)
					::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
					::zpp_nape::geom::ZPP_Vec2 vi = null();		HX_STACK_VAR(vi,"vi");
					HX_STACK_LINE(1105)
					bool cont = true;		HX_STACK_VAR(cont,"cont");
					HX_STACK_LINE(1106)
					Float max = -1e+100;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(1107)
					::zpp_nape::geom::ZPP_Vec2 vite = s2->polygon->gverts->next;		HX_STACK_VAR(vite,"vite");
					HX_STACK_LINE(1108)
					{
						HX_STACK_LINE(1109)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s2->polygon->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1110)
						while(((cx_ite != null()))){
							HX_STACK_LINE(1111)
							::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1112)
							{
								HX_STACK_LINE(1113)
								Float dist = ((((a->gnormx * s1->circle->worldCOMx) + (a->gnormy * s1->circle->worldCOMy)) - a->gprojection) - s1->circle->radius);		HX_STACK_VAR(dist,"dist");
								HX_STACK_LINE(1114)
								if (((dist > (int)0))){
									HX_STACK_LINE(1115)
									cont = false;
									HX_STACK_LINE(1116)
									break;
								}
								HX_STACK_LINE(1118)
								if (((dist > max))){
									HX_STACK_LINE(1119)
									max = dist;
									HX_STACK_LINE(1120)
									a0 = a;
									HX_STACK_LINE(1121)
									vi = vite;
								}
								HX_STACK_LINE(1123)
								vite = vite->next;
							}
							HX_STACK_LINE(1125)
							cx_ite = cx_ite->next;
						}
					}
					struct _Function_3_1{
						inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &vi,::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Edge &a0,::zpp_nape::shape::ZPP_Shape &s1){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1128);
							{
								HX_STACK_LINE(1129)
								::zpp_nape::geom::ZPP_Vec2 v0 = vi;		HX_STACK_VAR(v0,"v0");
								HX_STACK_LINE(1130)
								::zpp_nape::geom::ZPP_Vec2 v1 = (  (((vi->next == null()))) ? ::zpp_nape::geom::ZPP_Vec2(s2->polygon->gverts->next) : ::zpp_nape::geom::ZPP_Vec2(vi->next) );		HX_STACK_VAR(v1,"v1");
								HX_STACK_LINE(1131)
								Float dt = ((s1->circle->worldCOMy * a0->gnormx) - (s1->circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
								struct _Function_4_1{
									inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &v0,::zpp_nape::shape::ZPP_Shape &s1){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1132);
										{
											HX_STACK_LINE(1133)
											Float minDist = s1->circle->radius;		HX_STACK_VAR(minDist,"minDist");
											HX_STACK_LINE(1134)
											Float px = 0.0;		HX_STACK_VAR(px,"px");
											HX_STACK_LINE(1135)
											Float py = 0.0;		HX_STACK_VAR(py,"py");
											HX_STACK_LINE(1136)
											{
												HX_STACK_LINE(1137)
												px = (v0->x - s1->circle->worldCOMx);
												HX_STACK_LINE(1138)
												py = (v0->y - s1->circle->worldCOMy);
											}
											HX_STACK_LINE(1140)
											Float distSqr = ((px * px) + (py * py));		HX_STACK_VAR(distSqr,"distSqr");
											HX_STACK_LINE(1141)
											return (distSqr <= (minDist * minDist));
										}
										return null();
									}
								};
								struct _Function_4_2{
									inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &v1,::zpp_nape::shape::ZPP_Shape &s1){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1143);
										{
											HX_STACK_LINE(1144)
											Float minDist = s1->circle->radius;		HX_STACK_VAR(minDist,"minDist");
											HX_STACK_LINE(1145)
											Float px = 0.0;		HX_STACK_VAR(px,"px");
											HX_STACK_LINE(1146)
											Float py = 0.0;		HX_STACK_VAR(py,"py");
											HX_STACK_LINE(1147)
											{
												HX_STACK_LINE(1148)
												px = (v1->x - s1->circle->worldCOMx);
												HX_STACK_LINE(1149)
												py = (v1->y - s1->circle->worldCOMy);
											}
											HX_STACK_LINE(1151)
											Float distSqr = ((px * px) + (py * py));		HX_STACK_VAR(distSqr,"distSqr");
											HX_STACK_LINE(1152)
											return (distSqr <= (minDist * minDist));
										}
										return null();
									}
								};
								HX_STACK_LINE(1132)
								return (  (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))) ? bool(_Function_4_1::Block(v0,s1)) : bool((  (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))) ? bool(_Function_4_2::Block(v1,s1)) : bool(true) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1128)
					return (  ((cont)) ? bool(_Function_3_1::Block(vi,s2,a0,s1)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1043)
		return (  (((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))) ? bool(_Function_2_1::Block(s2,s1)) : bool(_Function_2_2::Block(s2,s1)) );
	}
	else{
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Shape &s1){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1159);
				{
					HX_STACK_LINE(1160)
					Float minDist = (s1->circle->radius + s2->circle->radius);		HX_STACK_VAR(minDist,"minDist");
					HX_STACK_LINE(1161)
					Float px = 0.0;		HX_STACK_VAR(px,"px");
					HX_STACK_LINE(1162)
					Float py = 0.0;		HX_STACK_VAR(py,"py");
					HX_STACK_LINE(1163)
					{
						HX_STACK_LINE(1164)
						px = (s2->circle->worldCOMx - s1->circle->worldCOMx);
						HX_STACK_LINE(1165)
						py = (s2->circle->worldCOMy - s1->circle->worldCOMy);
					}
					HX_STACK_LINE(1167)
					Float distSqr = ((px * px) + (py * py));		HX_STACK_VAR(distSqr,"distSqr");
					HX_STACK_LINE(1168)
					return (distSqr <= (minDist * minDist));
				}
				return null();
			}
		};
		HX_STACK_LINE(1159)
		return _Function_2_1::Block(s2,s1);
	}
	HX_STACK_LINE(1042)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Collide_obj,testCollide,return )

bool ZPP_Collide_obj::flowCollide( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,::zpp_nape::dynamics::ZPP_FluidArbiter arb){
	HX_STACK_PUSH("ZPP_Collide::flowCollide","zpp_nape/geom/Collide.hx",1171);
	HX_STACK_ARG(s1,"s1");
	HX_STACK_ARG(s2,"s2");
	HX_STACK_ARG(arb,"arb");
	HX_STACK_LINE(1171)
	if (((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb,::zpp_nape::shape::ZPP_Shape &s1){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1173);
				{
					HX_STACK_LINE(1174)
					Array< bool > out1 = Array_obj< bool >::__new();		HX_STACK_VAR(out1,"out1");
					HX_STACK_LINE(1175)
					Array< bool > out2 = Array_obj< bool >::__new();		HX_STACK_VAR(out2,"out2");
					HX_STACK_LINE(1176)
					bool cont = true;		HX_STACK_VAR(cont,"cont");
					HX_STACK_LINE(1177)
					bool total = true;		HX_STACK_VAR(total,"total");
					HX_STACK_LINE(1178)
					{
						HX_STACK_LINE(1179)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s1->polygon->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1180)
						while(((cx_ite != null()))){
							HX_STACK_LINE(1181)
							::zpp_nape::shape::ZPP_Edge ax = cx_ite->elt;		HX_STACK_VAR(ax,"ax");
							HX_STACK_LINE(1182)
							{
								HX_STACK_LINE(1183)
								Float min = 1e100;		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(1184)
								int ind = (int)0;		HX_STACK_VAR(ind,"ind");
								HX_STACK_LINE(1185)
								{
									HX_STACK_LINE(1186)
									::zpp_nape::geom::ZPP_Vec2 cx_ite1 = s2->polygon->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(1187)
									while(((cx_ite1 != null()))){
										HX_STACK_LINE(1188)
										::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1189)
										{
											HX_STACK_LINE(1190)
											Float k = ((ax->gnormx * v->x) + (ax->gnormy * v->y));		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(1191)
											if (((k < min))){
												HX_STACK_LINE(1191)
												min = k;
											}
											HX_STACK_LINE(1192)
											if (((k >= (ax->gprojection + ::nape::Config_obj::epsilon)))){
												HX_STACK_LINE(1193)
												out2[ind] = true;
												HX_STACK_LINE(1194)
												total = false;
											}
											HX_STACK_LINE(1196)
											(ind)++;
										}
										HX_STACK_LINE(1198)
										cx_ite1 = cx_ite1->next;
									}
								}
								HX_STACK_LINE(1201)
								hx::SubEq(min,ax->gprojection);
								HX_STACK_LINE(1202)
								if (((min > (int)0))){
									HX_STACK_LINE(1203)
									cont = false;
									HX_STACK_LINE(1204)
									break;
								}
							}
							HX_STACK_LINE(1207)
							cx_ite = cx_ite->next;
						}
					}
					struct _Function_3_1{
						inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1210);
							{
								HX_STACK_LINE(1211)
								{
									HX_STACK_LINE(1211)
									::zpp_nape::shape::ZPP_Polygon _this = s2->polygon;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1211)
									if ((_this->zip_worldCOM)){
										HX_STACK_LINE(1211)
										if (((_this->body != null()))){
											HX_STACK_LINE(1211)
											_this->zip_worldCOM = false;
											HX_STACK_LINE(1211)
											if ((_this->zip_localCOM)){
												HX_STACK_LINE(1211)
												_this->zip_localCOM = false;
												HX_STACK_LINE(1211)
												if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
													HX_STACK_LINE(1211)
													::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1211)
													if (((_this1->lverts->next == null()))){
														HX_STACK_LINE(1211)
														hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
													}
													HX_STACK_LINE(1211)
													if (((_this1->lverts->next->next == null()))){
														HX_STACK_LINE(1211)
														_this1->localCOMx = _this1->lverts->next->x;
														HX_STACK_LINE(1211)
														_this1->localCOMy = _this1->lverts->next->y;
														HX_STACK_LINE(1211)
														Dynamic();
													}
													else{
														HX_STACK_LINE(1211)
														if (((_this1->lverts->next->next->next == null()))){
															HX_STACK_LINE(1211)
															{
																HX_STACK_LINE(1211)
																_this1->localCOMx = _this1->lverts->next->x;
																HX_STACK_LINE(1211)
																_this1->localCOMy = _this1->lverts->next->y;
																HX_STACK_LINE(1211)
																{
																}
															}
															HX_STACK_LINE(1211)
															{
																HX_STACK_LINE(1211)
																Float t = 1.0;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1211)
																hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																HX_STACK_LINE(1211)
																hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
															}
															HX_STACK_LINE(1211)
															{
																HX_STACK_LINE(1211)
																Float t = 0.5;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1211)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(1211)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
														else{
															HX_STACK_LINE(1211)
															{
																HX_STACK_LINE(1211)
																_this1->localCOMx = (int)0;
																HX_STACK_LINE(1211)
																_this1->localCOMy = (int)0;
																HX_STACK_LINE(1211)
																{
																}
															}
															HX_STACK_LINE(1211)
															Float area = 0.0;		HX_STACK_VAR(area,"area");
															HX_STACK_LINE(1211)
															{
																HX_STACK_LINE(1211)
																::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
																HX_STACK_LINE(1211)
																::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																HX_STACK_LINE(1211)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(1211)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(1211)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(1211)
																while(((cx_ite != null()))){
																	HX_STACK_LINE(1211)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1211)
																	{
																		HX_STACK_LINE(1211)
																		hx::AddEq(area,(v->x * ((w->y - u->y))));
																		HX_STACK_LINE(1211)
																		Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1211)
																		hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																		HX_STACK_LINE(1211)
																		hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																	}
																	HX_STACK_LINE(1211)
																	u = v;
																	HX_STACK_LINE(1211)
																	v = w;
																	HX_STACK_LINE(1211)
																	cx_ite = cx_ite->next;
																}
																HX_STACK_LINE(1211)
																cx_ite = _this1->lverts->next;
																HX_STACK_LINE(1211)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(1211)
																{
																	HX_STACK_LINE(1211)
																	hx::AddEq(area,(v->x * ((w->y - u->y))));
																	HX_STACK_LINE(1211)
																	Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1211)
																	hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																	HX_STACK_LINE(1211)
																	hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																}
																HX_STACK_LINE(1211)
																u = v;
																HX_STACK_LINE(1211)
																v = w;
																HX_STACK_LINE(1211)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(1211)
																::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																HX_STACK_LINE(1211)
																{
																	HX_STACK_LINE(1211)
																	hx::AddEq(area,(v->x * ((w1->y - u->y))));
																	HX_STACK_LINE(1211)
																	Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1211)
																	hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																	HX_STACK_LINE(1211)
																	hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																}
															}
															HX_STACK_LINE(1211)
															area = (Float((int)1) / Float((((int)3 * area))));
															HX_STACK_LINE(1211)
															{
																HX_STACK_LINE(1211)
																Float t = area;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1211)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(1211)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
													}
												}
											}
											HX_STACK_LINE(1211)
											{
												HX_STACK_LINE(1211)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1211)
												if ((_this1->zip_axis)){
													HX_STACK_LINE(1211)
													_this1->zip_axis = false;
													HX_STACK_LINE(1211)
													{
														HX_STACK_LINE(1211)
														_this1->axisx = ::Math_obj::sin(_this1->rot);
														HX_STACK_LINE(1211)
														_this1->axisy = ::Math_obj::cos(_this1->rot);
														HX_STACK_LINE(1211)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(1211)
											{
												HX_STACK_LINE(1211)
												_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
												HX_STACK_LINE(1211)
												_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
											}
										}
									}
								}
								HX_STACK_LINE(1212)
								{
									HX_STACK_LINE(1212)
									arb->overlap = s2->polygon->area;
									HX_STACK_LINE(1212)
									{
										HX_STACK_LINE(1212)
										arb->centroidx = s2->polygon->worldCOMx;
										HX_STACK_LINE(1212)
										arb->centroidy = s2->polygon->worldCOMy;
										HX_STACK_LINE(1212)
										Dynamic();
									}
								}
								HX_STACK_LINE(1213)
								return true;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb,Array< bool > &out1,bool &cont,bool &total,Array< bool > &out2,::zpp_nape::shape::ZPP_Shape &s1){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1215);
							{
								HX_STACK_LINE(1216)
								total = true;
								HX_STACK_LINE(1217)
								{
									HX_STACK_LINE(1218)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s2->polygon->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1219)
									while(((cx_ite != null()))){
										HX_STACK_LINE(1220)
										::zpp_nape::shape::ZPP_Edge ax = cx_ite->elt;		HX_STACK_VAR(ax,"ax");
										HX_STACK_LINE(1221)
										{
											HX_STACK_LINE(1222)
											Float min = 1e100;		HX_STACK_VAR(min,"min");
											HX_STACK_LINE(1223)
											int ind = (int)0;		HX_STACK_VAR(ind,"ind");
											HX_STACK_LINE(1224)
											{
												HX_STACK_LINE(1225)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = s1->polygon->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(1226)
												while(((cx_ite1 != null()))){
													HX_STACK_LINE(1227)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(1228)
													{
														HX_STACK_LINE(1229)
														Float k = ((ax->gnormx * v->x) + (ax->gnormy * v->y));		HX_STACK_VAR(k,"k");
														HX_STACK_LINE(1230)
														if (((k < min))){
															HX_STACK_LINE(1230)
															min = k;
														}
														HX_STACK_LINE(1231)
														if (((k >= (ax->gprojection + ::nape::Config_obj::epsilon)))){
															HX_STACK_LINE(1232)
															out1[ind] = true;
															HX_STACK_LINE(1233)
															total = false;
														}
														HX_STACK_LINE(1235)
														(ind)++;
													}
													HX_STACK_LINE(1237)
													cx_ite1 = cx_ite1->next;
												}
											}
											HX_STACK_LINE(1240)
											hx::SubEq(min,ax->gprojection);
											HX_STACK_LINE(1241)
											if (((min > (int)0))){
												HX_STACK_LINE(1242)
												cont = false;
												HX_STACK_LINE(1243)
												break;
											}
										}
										HX_STACK_LINE(1246)
										cx_ite = cx_ite->next;
									}
								}
								struct _Function_4_1{
									inline static bool Block( ::zpp_nape::dynamics::ZPP_FluidArbiter &arb,::zpp_nape::shape::ZPP_Shape &s1){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1249);
										{
											HX_STACK_LINE(1250)
											{
												HX_STACK_LINE(1250)
												::zpp_nape::shape::ZPP_Polygon _this = s1->polygon;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1250)
												if ((_this->zip_worldCOM)){
													HX_STACK_LINE(1250)
													if (((_this->body != null()))){
														HX_STACK_LINE(1250)
														_this->zip_worldCOM = false;
														HX_STACK_LINE(1250)
														if ((_this->zip_localCOM)){
															HX_STACK_LINE(1250)
															_this->zip_localCOM = false;
															HX_STACK_LINE(1250)
															if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
																HX_STACK_LINE(1250)
																::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
																HX_STACK_LINE(1250)
																if (((_this1->lverts->next == null()))){
																	HX_STACK_LINE(1250)
																	hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
																}
																HX_STACK_LINE(1250)
																if (((_this1->lverts->next->next == null()))){
																	HX_STACK_LINE(1250)
																	_this1->localCOMx = _this1->lverts->next->x;
																	HX_STACK_LINE(1250)
																	_this1->localCOMy = _this1->lverts->next->y;
																	HX_STACK_LINE(1250)
																	Dynamic();
																}
																else{
																	HX_STACK_LINE(1250)
																	if (((_this1->lverts->next->next->next == null()))){
																		HX_STACK_LINE(1250)
																		{
																			HX_STACK_LINE(1250)
																			_this1->localCOMx = _this1->lverts->next->x;
																			HX_STACK_LINE(1250)
																			_this1->localCOMy = _this1->lverts->next->y;
																			HX_STACK_LINE(1250)
																			{
																			}
																		}
																		HX_STACK_LINE(1250)
																		{
																			HX_STACK_LINE(1250)
																			Float t = 1.0;		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(1250)
																			hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																			HX_STACK_LINE(1250)
																			hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
																		}
																		HX_STACK_LINE(1250)
																		{
																			HX_STACK_LINE(1250)
																			Float t = 0.5;		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(1250)
																			hx::MultEq(_this1->localCOMx,t);
																			HX_STACK_LINE(1250)
																			hx::MultEq(_this1->localCOMy,t);
																		}
																	}
																	else{
																		HX_STACK_LINE(1250)
																		{
																			HX_STACK_LINE(1250)
																			_this1->localCOMx = (int)0;
																			HX_STACK_LINE(1250)
																			_this1->localCOMy = (int)0;
																			HX_STACK_LINE(1250)
																			{
																			}
																		}
																		HX_STACK_LINE(1250)
																		Float area = 0.0;		HX_STACK_VAR(area,"area");
																		HX_STACK_LINE(1250)
																		{
																			HX_STACK_LINE(1250)
																			::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
																			HX_STACK_LINE(1250)
																			::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																			HX_STACK_LINE(1250)
																			cx_ite = cx_ite->next;
																			HX_STACK_LINE(1250)
																			::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																			HX_STACK_LINE(1250)
																			cx_ite = cx_ite->next;
																			HX_STACK_LINE(1250)
																			while(((cx_ite != null()))){
																				HX_STACK_LINE(1250)
																				::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																				HX_STACK_LINE(1250)
																				{
																					HX_STACK_LINE(1250)
																					hx::AddEq(area,(v->x * ((w->y - u->y))));
																					HX_STACK_LINE(1250)
																					Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																					HX_STACK_LINE(1250)
																					hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																					HX_STACK_LINE(1250)
																					hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																				}
																				HX_STACK_LINE(1250)
																				u = v;
																				HX_STACK_LINE(1250)
																				v = w;
																				HX_STACK_LINE(1250)
																				cx_ite = cx_ite->next;
																			}
																			HX_STACK_LINE(1250)
																			cx_ite = _this1->lverts->next;
																			HX_STACK_LINE(1250)
																			::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																			HX_STACK_LINE(1250)
																			{
																				HX_STACK_LINE(1250)
																				hx::AddEq(area,(v->x * ((w->y - u->y))));
																				HX_STACK_LINE(1250)
																				Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																				HX_STACK_LINE(1250)
																				hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																				HX_STACK_LINE(1250)
																				hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																			}
																			HX_STACK_LINE(1250)
																			u = v;
																			HX_STACK_LINE(1250)
																			v = w;
																			HX_STACK_LINE(1250)
																			cx_ite = cx_ite->next;
																			HX_STACK_LINE(1250)
																			::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																			HX_STACK_LINE(1250)
																			{
																				HX_STACK_LINE(1250)
																				hx::AddEq(area,(v->x * ((w1->y - u->y))));
																				HX_STACK_LINE(1250)
																				Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																				HX_STACK_LINE(1250)
																				hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																				HX_STACK_LINE(1250)
																				hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																			}
																		}
																		HX_STACK_LINE(1250)
																		area = (Float((int)1) / Float((((int)3 * area))));
																		HX_STACK_LINE(1250)
																		{
																			HX_STACK_LINE(1250)
																			Float t = area;		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(1250)
																			hx::MultEq(_this1->localCOMx,t);
																			HX_STACK_LINE(1250)
																			hx::MultEq(_this1->localCOMy,t);
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(1250)
														{
															HX_STACK_LINE(1250)
															::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
															HX_STACK_LINE(1250)
															if ((_this1->zip_axis)){
																HX_STACK_LINE(1250)
																_this1->zip_axis = false;
																HX_STACK_LINE(1250)
																{
																	HX_STACK_LINE(1250)
																	_this1->axisx = ::Math_obj::sin(_this1->rot);
																	HX_STACK_LINE(1250)
																	_this1->axisy = ::Math_obj::cos(_this1->rot);
																	HX_STACK_LINE(1250)
																	Dynamic();
																}
															}
														}
														HX_STACK_LINE(1250)
														{
															HX_STACK_LINE(1250)
															_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
															HX_STACK_LINE(1250)
															_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
														}
													}
												}
											}
											HX_STACK_LINE(1251)
											{
												HX_STACK_LINE(1251)
												arb->overlap = s1->polygon->area;
												HX_STACK_LINE(1251)
												{
													HX_STACK_LINE(1251)
													arb->centroidx = s1->polygon->worldCOMx;
													HX_STACK_LINE(1251)
													arb->centroidy = s1->polygon->worldCOMy;
													HX_STACK_LINE(1251)
													Dynamic();
												}
											}
											HX_STACK_LINE(1252)
											return true;
										}
										return null();
									}
								};
								struct _Function_4_2{
									inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb,Array< bool > &out1,Array< bool > &out2,::zpp_nape::shape::ZPP_Shape &s1){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1254);
										{
											HX_STACK_LINE(1255)
											while((!(((::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head == null()))))){
												HX_STACK_LINE(1256)
												::zpp_nape::geom::ZPP_Vec2 p = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->pop_unsafe();		HX_STACK_VAR(p,"p");
												HX_STACK_LINE(1257)
												if ((!(p->_inuse))){
													HX_STACK_LINE(1258)
													::zpp_nape::geom::ZPP_Vec2 o = p;		HX_STACK_VAR(o,"o");
													HX_STACK_LINE(1267)
													{
														HX_STACK_LINE(1267)
														if (((o->outer != null()))){
															HX_STACK_LINE(1267)
															o->outer->zpp_inner = null();
															HX_STACK_LINE(1267)
															o->outer = null();
														}
														HX_STACK_LINE(1267)
														o->_isimmutable = null();
														HX_STACK_LINE(1267)
														o->_validate = null();
														HX_STACK_LINE(1267)
														o->_invalidate = null();
													}
													HX_STACK_LINE(1268)
													o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1269)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
												}
											}
											HX_STACK_LINE(1275)
											::zpp_nape::geom::ZPP_Vec2 fst_vert = null();		HX_STACK_VAR(fst_vert,"fst_vert");
											HX_STACK_LINE(1276)
											bool poly1 = false;		HX_STACK_VAR(poly1,"poly1");
											HX_STACK_LINE(1277)
											::zpp_nape::geom::ZPP_Vec2 ite1 = s1->polygon->gverts->next;		HX_STACK_VAR(ite1,"ite1");
											HX_STACK_LINE(1278)
											int ind1 = (int)0;		HX_STACK_VAR(ind1,"ind1");
											HX_STACK_LINE(1279)
											::zpp_nape::geom::ZPP_Vec2 ite2 = s2->polygon->gverts->next;		HX_STACK_VAR(ite2,"ite2");
											HX_STACK_LINE(1280)
											int ind2 = (int)0;		HX_STACK_VAR(ind2,"ind2");
											HX_STACK_LINE(1281)
											{
												HX_STACK_LINE(1281)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												int _g = s2->polygon->edgeCnt;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(1281)
												while(((_g1 < _g))){
													HX_STACK_LINE(1281)
													int i = (_g1)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(1281)
													if ((!(out2->__get(i)))){
														HX_STACK_LINE(1282)
														ind2 = i;
														HX_STACK_LINE(1283)
														break;
													}
													else{
														HX_STACK_LINE(1285)
														ite2 = ite2->next;
													}
												}
											}
											HX_STACK_LINE(1286)
											if (((ite2 == null()))){
												HX_STACK_LINE(1287)
												ite2 = s2->polygon->gverts->next;
												HX_STACK_LINE(1288)
												poly1 = true;
												HX_STACK_LINE(1289)
												{
													HX_STACK_LINE(1289)
													int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
													int _g = s1->polygon->edgeCnt;		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(1289)
													while(((_g1 < _g))){
														HX_STACK_LINE(1289)
														int i = (_g1)++;		HX_STACK_VAR(i,"i");
														HX_STACK_LINE(1289)
														if ((!(out1->__get(i)))){
															HX_STACK_LINE(1290)
															ind1 = i;
															HX_STACK_LINE(1291)
															break;
														}
														else{
															HX_STACK_LINE(1293)
															ite1 = ite1->next;
														}
													}
												}
												HX_STACK_LINE(1294)
												if (((ite1 == null()))){
													HX_STACK_LINE(1294)
													ite1 = s1->polygon->gverts->next;
												}
												else{
													HX_STACK_LINE(1296)
													::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(ite1);
													HX_STACK_LINE(1297)
													fst_vert = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt;
												}
											}
											else{
												HX_STACK_LINE(1301)
												::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(ite2);
												HX_STACK_LINE(1302)
												fst_vert = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt;
											}
											HX_STACK_LINE(1304)
											int cnt = (int)1;		HX_STACK_VAR(cnt,"cnt");
											HX_STACK_LINE(1305)
											if (((::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head == null()))){
												HX_STACK_LINE(1306)
												{
													HX_STACK_LINE(1307)
													bool cx_cont = true;		HX_STACK_VAR(cx_cont,"cx_cont");
													HX_STACK_LINE(1308)
													::zpp_nape::geom::ZPP_Vec2 cx_itei = s1->polygon->gverts->next;		HX_STACK_VAR(cx_itei,"cx_itei");
													HX_STACK_LINE(1309)
													::zpp_nape::geom::ZPP_Vec2 u = cx_itei;		HX_STACK_VAR(u,"u");
													HX_STACK_LINE(1310)
													::zpp_nape::geom::ZPP_Vec2 cx_itej = cx_itei->next;		HX_STACK_VAR(cx_itej,"cx_itej");
													HX_STACK_LINE(1311)
													while(((cx_itej != null()))){
														HX_STACK_LINE(1312)
														::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(1313)
														{
															HX_STACK_LINE(1314)
															Float min = 2.0;		HX_STACK_VAR(min,"min");
															HX_STACK_LINE(1315)
															{
																HX_STACK_LINE(1316)
																bool cx_cont1 = true;		HX_STACK_VAR(cx_cont1,"cx_cont1");
																HX_STACK_LINE(1317)
																::zpp_nape::geom::ZPP_Vec2 cx_itei1 = s2->polygon->gverts->next;		HX_STACK_VAR(cx_itei1,"cx_itei1");
																HX_STACK_LINE(1318)
																::zpp_nape::geom::ZPP_Vec2 a = cx_itei1;		HX_STACK_VAR(a,"a");
																HX_STACK_LINE(1319)
																::zpp_nape::geom::ZPP_Vec2 cx_itej1 = cx_itei1->next;		HX_STACK_VAR(cx_itej1,"cx_itej1");
																HX_STACK_LINE(1320)
																while(((cx_itej1 != null()))){
																	HX_STACK_LINE(1321)
																	::zpp_nape::geom::ZPP_Vec2 b = cx_itej1;		HX_STACK_VAR(b,"b");
																	HX_STACK_LINE(1322)
																	{
																		HX_STACK_LINE(1323)
																		Float t = 0.0;		HX_STACK_VAR(t,"t");
																		struct _Function_12_1{
																			inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &v,::zpp_nape::geom::ZPP_Vec2 &b,Float &t,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::geom::ZPP_Vec2 &a){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1324);
																				{
																					HX_STACK_LINE(1325)
																					Float _sx = 0.0;		HX_STACK_VAR(_sx,"_sx");
																					HX_STACK_LINE(1326)
																					Float _sy = 0.0;		HX_STACK_VAR(_sy,"_sy");
																					HX_STACK_LINE(1327)
																					{
																						HX_STACK_LINE(1328)
																						_sx = (u->x - a->x);
																						HX_STACK_LINE(1329)
																						_sy = (u->y - a->y);
																					}
																					HX_STACK_LINE(1331)
																					Float _vx = 0.0;		HX_STACK_VAR(_vx,"_vx");
																					HX_STACK_LINE(1332)
																					Float _vy = 0.0;		HX_STACK_VAR(_vy,"_vy");
																					HX_STACK_LINE(1333)
																					{
																						HX_STACK_LINE(1334)
																						_vx = (v->x - u->x);
																						HX_STACK_LINE(1335)
																						_vy = (v->y - u->y);
																					}
																					HX_STACK_LINE(1337)
																					Float _qx = 0.0;		HX_STACK_VAR(_qx,"_qx");
																					HX_STACK_LINE(1338)
																					Float _qy = 0.0;		HX_STACK_VAR(_qy,"_qy");
																					HX_STACK_LINE(1339)
																					{
																						HX_STACK_LINE(1340)
																						_qx = (b->x - a->x);
																						HX_STACK_LINE(1341)
																						_qy = (b->y - a->y);
																					}
																					HX_STACK_LINE(1343)
																					Float den = ((_vy * _qx) - (_vx * _qy));		HX_STACK_VAR(den,"den");
																					struct _Function_13_1{
																						inline static bool Block( Float &_sx,Float &_sy,Float &_qy,Float &_vy,Float &_vx,Float &den,Float &t,Float &_qx){
																							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1344);
																							{
																								HX_STACK_LINE(1345)
																								den = (Float((int)1) / Float(den));
																								HX_STACK_LINE(1346)
																								Float txx = ((((_qy * _sx) - (_qx * _sy))) * den);		HX_STACK_VAR(txx,"txx");
																								struct _Function_14_1{
																									inline static bool Block( Float &_sx,Float &_sy,Float &_vy,Float &_vx,Float &txx,Float &den,Float &t){
																										HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1347);
																										{
																											HX_STACK_LINE(1348)
																											Float sxx = ((((_vy * _sx) - (_vx * _sy))) * den);		HX_STACK_VAR(sxx,"sxx");
																											struct _Function_15_1{
																												inline static bool Block( Float &txx,Float &t){
																													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1349);
																													{
																														HX_STACK_LINE(1350)
																														t = txx;
																														HX_STACK_LINE(1351)
																														return true;
																													}
																													return null();
																												}
																											};
																											HX_STACK_LINE(1349)
																											return (  (((bool((sxx > ::nape::Config_obj::epsilon)) && bool((sxx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_15_1::Block(txx,t)) : bool(false) );
																										}
																										return null();
																									}
																								};
																								HX_STACK_LINE(1347)
																								return (  (((bool((txx > ::nape::Config_obj::epsilon)) && bool((txx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_14_1::Block(_sx,_sy,_vy,_vx,txx,den,t)) : bool(false) );
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(1344)
																					return (  ((((den * den) > (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? bool(_Function_13_1::Block(_sx,_sy,_qy,_vy,_vx,den,t,_qx)) : bool(false) );
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1324)
																		if ((_Function_12_1::Block(v,b,t,u,a))){
																			HX_STACK_LINE(1358)
																			if (((t < min))){
																				HX_STACK_LINE(1360)
																				min = t;
																				HX_STACK_LINE(1361)
																				ite2 = cx_itei1;
																			}
																		}
																	}
																	HX_STACK_LINE(1365)
																	{
																		HX_STACK_LINE(1366)
																		cx_itei1 = cx_itej1;
																		HX_STACK_LINE(1367)
																		a = b;
																		HX_STACK_LINE(1368)
																		cx_itej1 = cx_itej1->next;
																	}
																}
																HX_STACK_LINE(1371)
																if ((cx_cont1)){
																	HX_STACK_LINE(1371)
																	do{
																		HX_STACK_LINE(1373)
																		cx_itej1 = s2->polygon->gverts->next;
																		HX_STACK_LINE(1374)
																		::zpp_nape::geom::ZPP_Vec2 b = cx_itej1;		HX_STACK_VAR(b,"b");
																		HX_STACK_LINE(1375)
																		{
																			HX_STACK_LINE(1376)
																			Float t = 0.0;		HX_STACK_VAR(t,"t");
																			struct _Function_13_1{
																				inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &v,::zpp_nape::geom::ZPP_Vec2 &b,Float &t,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::geom::ZPP_Vec2 &a){
																					HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1377);
																					{
																						HX_STACK_LINE(1378)
																						Float _sx = 0.0;		HX_STACK_VAR(_sx,"_sx");
																						HX_STACK_LINE(1379)
																						Float _sy = 0.0;		HX_STACK_VAR(_sy,"_sy");
																						HX_STACK_LINE(1380)
																						{
																							HX_STACK_LINE(1381)
																							_sx = (u->x - a->x);
																							HX_STACK_LINE(1382)
																							_sy = (u->y - a->y);
																						}
																						HX_STACK_LINE(1384)
																						Float _vx = 0.0;		HX_STACK_VAR(_vx,"_vx");
																						HX_STACK_LINE(1385)
																						Float _vy = 0.0;		HX_STACK_VAR(_vy,"_vy");
																						HX_STACK_LINE(1386)
																						{
																							HX_STACK_LINE(1387)
																							_vx = (v->x - u->x);
																							HX_STACK_LINE(1388)
																							_vy = (v->y - u->y);
																						}
																						HX_STACK_LINE(1390)
																						Float _qx = 0.0;		HX_STACK_VAR(_qx,"_qx");
																						HX_STACK_LINE(1391)
																						Float _qy = 0.0;		HX_STACK_VAR(_qy,"_qy");
																						HX_STACK_LINE(1392)
																						{
																							HX_STACK_LINE(1393)
																							_qx = (b->x - a->x);
																							HX_STACK_LINE(1394)
																							_qy = (b->y - a->y);
																						}
																						HX_STACK_LINE(1396)
																						Float den = ((_vy * _qx) - (_vx * _qy));		HX_STACK_VAR(den,"den");
																						struct _Function_14_1{
																							inline static bool Block( Float &_sx,Float &_sy,Float &_qy,Float &_vy,Float &_vx,Float &den,Float &t,Float &_qx){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1397);
																								{
																									HX_STACK_LINE(1398)
																									den = (Float((int)1) / Float(den));
																									HX_STACK_LINE(1399)
																									Float txx = ((((_qy * _sx) - (_qx * _sy))) * den);		HX_STACK_VAR(txx,"txx");
																									struct _Function_15_1{
																										inline static bool Block( Float &_sx,Float &_sy,Float &_vy,Float &_vx,Float &txx,Float &den,Float &t){
																											HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1400);
																											{
																												HX_STACK_LINE(1401)
																												Float sxx = ((((_vy * _sx) - (_vx * _sy))) * den);		HX_STACK_VAR(sxx,"sxx");
																												struct _Function_16_1{
																													inline static bool Block( Float &txx,Float &t){
																														HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1402);
																														{
																															HX_STACK_LINE(1403)
																															t = txx;
																															HX_STACK_LINE(1404)
																															return true;
																														}
																														return null();
																													}
																												};
																												HX_STACK_LINE(1402)
																												return (  (((bool((sxx > ::nape::Config_obj::epsilon)) && bool((sxx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_16_1::Block(txx,t)) : bool(false) );
																											}
																											return null();
																										}
																									};
																									HX_STACK_LINE(1400)
																									return (  (((bool((txx > ::nape::Config_obj::epsilon)) && bool((txx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_15_1::Block(_sx,_sy,_vy,_vx,txx,den,t)) : bool(false) );
																								}
																								return null();
																							}
																						};
																						HX_STACK_LINE(1397)
																						return (  ((((den * den) > (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? bool(_Function_14_1::Block(_sx,_sy,_qy,_vy,_vx,den,t,_qx)) : bool(false) );
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(1377)
																			if ((_Function_13_1::Block(v,b,t,u,a))){
																				HX_STACK_LINE(1411)
																				if (((t < min))){
																					HX_STACK_LINE(1413)
																					min = t;
																					HX_STACK_LINE(1414)
																					ite2 = cx_itei1;
																				}
																			}
																		}
																	}
while((false));
																}
															}
															HX_STACK_LINE(1422)
															if (((min != 2.0))){
																HX_STACK_LINE(1423)
																Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
																HX_STACK_LINE(1424)
																Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
																HX_STACK_LINE(1425)
																{
																	HX_STACK_LINE(1426)
																	Float T = min;		HX_STACK_VAR(T,"T");
																	HX_STACK_LINE(1435)
																	cx = (u->x + (((v->x - u->x)) * T));
																	HX_STACK_LINE(1436)
																	cy = (u->y + (((v->y - u->y)) * T));
																}
																struct _Function_10_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &cx,Float &cy){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1438);
																		{
																			HX_STACK_LINE(1438)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1438)
																			::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																			HX_STACK_LINE(1438)
																			{
																				HX_STACK_LINE(1438)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1438)
																					ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1438)
																					ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1438)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																					HX_STACK_LINE(1438)
																					ret->next = null();
																				}
																				HX_STACK_LINE(1438)
																				ret->weak = false;
																			}
																			HX_STACK_LINE(1438)
																			ret->_immutable = immutable;
																			HX_STACK_LINE(1438)
																			{
																				HX_STACK_LINE(1438)
																				ret->x = cx;
																				HX_STACK_LINE(1438)
																				ret->y = cy;
																				HX_STACK_LINE(1438)
																				{
																				}
																			}
																			HX_STACK_LINE(1438)
																			return ret;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1438)
																fst_vert = _Function_10_1::Block(cx,cy);
																HX_STACK_LINE(1439)
																::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(fst_vert);
																HX_STACK_LINE(1440)
																poly1 = true;
																HX_STACK_LINE(1441)
																ite1 = cx_itei;
																HX_STACK_LINE(1442)
																{
																	HX_STACK_LINE(1443)
																	cx_cont = false;
																	HX_STACK_LINE(1444)
																	break;
																}
															}
														}
														HX_STACK_LINE(1448)
														{
															HX_STACK_LINE(1449)
															cx_itei = cx_itej;
															HX_STACK_LINE(1450)
															u = v;
															HX_STACK_LINE(1451)
															cx_itej = cx_itej->next;
														}
													}
													HX_STACK_LINE(1454)
													if ((cx_cont)){
														HX_STACK_LINE(1454)
														do{
															HX_STACK_LINE(1456)
															cx_itej = s1->polygon->gverts->next;
															HX_STACK_LINE(1457)
															::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(1458)
															{
																HX_STACK_LINE(1459)
																Float min = 2.0;		HX_STACK_VAR(min,"min");
																HX_STACK_LINE(1460)
																{
																	HX_STACK_LINE(1461)
																	bool cx_cont1 = true;		HX_STACK_VAR(cx_cont1,"cx_cont1");
																	HX_STACK_LINE(1462)
																	::zpp_nape::geom::ZPP_Vec2 cx_itei1 = s2->polygon->gverts->next;		HX_STACK_VAR(cx_itei1,"cx_itei1");
																	HX_STACK_LINE(1463)
																	::zpp_nape::geom::ZPP_Vec2 a = cx_itei1;		HX_STACK_VAR(a,"a");
																	HX_STACK_LINE(1464)
																	::zpp_nape::geom::ZPP_Vec2 cx_itej1 = cx_itei1->next;		HX_STACK_VAR(cx_itej1,"cx_itej1");
																	HX_STACK_LINE(1465)
																	while(((cx_itej1 != null()))){
																		HX_STACK_LINE(1466)
																		::zpp_nape::geom::ZPP_Vec2 b = cx_itej1;		HX_STACK_VAR(b,"b");
																		HX_STACK_LINE(1467)
																		{
																			HX_STACK_LINE(1468)
																			Float t = 0.0;		HX_STACK_VAR(t,"t");
																			struct _Function_13_1{
																				inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &v,::zpp_nape::geom::ZPP_Vec2 &b,Float &t,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::geom::ZPP_Vec2 &a){
																					HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1469);
																					{
																						HX_STACK_LINE(1470)
																						Float _sx = 0.0;		HX_STACK_VAR(_sx,"_sx");
																						HX_STACK_LINE(1471)
																						Float _sy = 0.0;		HX_STACK_VAR(_sy,"_sy");
																						HX_STACK_LINE(1472)
																						{
																							HX_STACK_LINE(1473)
																							_sx = (u->x - a->x);
																							HX_STACK_LINE(1474)
																							_sy = (u->y - a->y);
																						}
																						HX_STACK_LINE(1476)
																						Float _vx = 0.0;		HX_STACK_VAR(_vx,"_vx");
																						HX_STACK_LINE(1477)
																						Float _vy = 0.0;		HX_STACK_VAR(_vy,"_vy");
																						HX_STACK_LINE(1478)
																						{
																							HX_STACK_LINE(1479)
																							_vx = (v->x - u->x);
																							HX_STACK_LINE(1480)
																							_vy = (v->y - u->y);
																						}
																						HX_STACK_LINE(1482)
																						Float _qx = 0.0;		HX_STACK_VAR(_qx,"_qx");
																						HX_STACK_LINE(1483)
																						Float _qy = 0.0;		HX_STACK_VAR(_qy,"_qy");
																						HX_STACK_LINE(1484)
																						{
																							HX_STACK_LINE(1485)
																							_qx = (b->x - a->x);
																							HX_STACK_LINE(1486)
																							_qy = (b->y - a->y);
																						}
																						HX_STACK_LINE(1488)
																						Float den = ((_vy * _qx) - (_vx * _qy));		HX_STACK_VAR(den,"den");
																						struct _Function_14_1{
																							inline static bool Block( Float &_sx,Float &_sy,Float &_qy,Float &_vy,Float &_vx,Float &den,Float &t,Float &_qx){
																								HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1489);
																								{
																									HX_STACK_LINE(1490)
																									den = (Float((int)1) / Float(den));
																									HX_STACK_LINE(1491)
																									Float txx = ((((_qy * _sx) - (_qx * _sy))) * den);		HX_STACK_VAR(txx,"txx");
																									struct _Function_15_1{
																										inline static bool Block( Float &_sx,Float &_sy,Float &_vy,Float &_vx,Float &txx,Float &den,Float &t){
																											HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1492);
																											{
																												HX_STACK_LINE(1493)
																												Float sxx = ((((_vy * _sx) - (_vx * _sy))) * den);		HX_STACK_VAR(sxx,"sxx");
																												struct _Function_16_1{
																													inline static bool Block( Float &txx,Float &t){
																														HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1494);
																														{
																															HX_STACK_LINE(1495)
																															t = txx;
																															HX_STACK_LINE(1496)
																															return true;
																														}
																														return null();
																													}
																												};
																												HX_STACK_LINE(1494)
																												return (  (((bool((sxx > ::nape::Config_obj::epsilon)) && bool((sxx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_16_1::Block(txx,t)) : bool(false) );
																											}
																											return null();
																										}
																									};
																									HX_STACK_LINE(1492)
																									return (  (((bool((txx > ::nape::Config_obj::epsilon)) && bool((txx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_15_1::Block(_sx,_sy,_vy,_vx,txx,den,t)) : bool(false) );
																								}
																								return null();
																							}
																						};
																						HX_STACK_LINE(1489)
																						return (  ((((den * den) > (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? bool(_Function_14_1::Block(_sx,_sy,_qy,_vy,_vx,den,t,_qx)) : bool(false) );
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(1469)
																			if ((_Function_13_1::Block(v,b,t,u,a))){
																				HX_STACK_LINE(1503)
																				if (((t < min))){
																					HX_STACK_LINE(1505)
																					min = t;
																					HX_STACK_LINE(1506)
																					ite2 = cx_itei1;
																				}
																			}
																		}
																		HX_STACK_LINE(1510)
																		{
																			HX_STACK_LINE(1511)
																			cx_itei1 = cx_itej1;
																			HX_STACK_LINE(1512)
																			a = b;
																			HX_STACK_LINE(1513)
																			cx_itej1 = cx_itej1->next;
																		}
																	}
																	HX_STACK_LINE(1516)
																	if ((cx_cont1)){
																		HX_STACK_LINE(1516)
																		do{
																			HX_STACK_LINE(1518)
																			cx_itej1 = s2->polygon->gverts->next;
																			HX_STACK_LINE(1519)
																			::zpp_nape::geom::ZPP_Vec2 b = cx_itej1;		HX_STACK_VAR(b,"b");
																			HX_STACK_LINE(1520)
																			{
																				HX_STACK_LINE(1521)
																				Float t = 0.0;		HX_STACK_VAR(t,"t");
																				struct _Function_14_1{
																					inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &v,::zpp_nape::geom::ZPP_Vec2 &b,Float &t,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::geom::ZPP_Vec2 &a){
																						HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1522);
																						{
																							HX_STACK_LINE(1523)
																							Float _sx = 0.0;		HX_STACK_VAR(_sx,"_sx");
																							HX_STACK_LINE(1524)
																							Float _sy = 0.0;		HX_STACK_VAR(_sy,"_sy");
																							HX_STACK_LINE(1525)
																							{
																								HX_STACK_LINE(1526)
																								_sx = (u->x - a->x);
																								HX_STACK_LINE(1527)
																								_sy = (u->y - a->y);
																							}
																							HX_STACK_LINE(1529)
																							Float _vx = 0.0;		HX_STACK_VAR(_vx,"_vx");
																							HX_STACK_LINE(1530)
																							Float _vy = 0.0;		HX_STACK_VAR(_vy,"_vy");
																							HX_STACK_LINE(1531)
																							{
																								HX_STACK_LINE(1532)
																								_vx = (v->x - u->x);
																								HX_STACK_LINE(1533)
																								_vy = (v->y - u->y);
																							}
																							HX_STACK_LINE(1535)
																							Float _qx = 0.0;		HX_STACK_VAR(_qx,"_qx");
																							HX_STACK_LINE(1536)
																							Float _qy = 0.0;		HX_STACK_VAR(_qy,"_qy");
																							HX_STACK_LINE(1537)
																							{
																								HX_STACK_LINE(1538)
																								_qx = (b->x - a->x);
																								HX_STACK_LINE(1539)
																								_qy = (b->y - a->y);
																							}
																							HX_STACK_LINE(1541)
																							Float den = ((_vy * _qx) - (_vx * _qy));		HX_STACK_VAR(den,"den");
																							struct _Function_15_1{
																								inline static bool Block( Float &_sx,Float &_sy,Float &_qy,Float &_vy,Float &_vx,Float &den,Float &t,Float &_qx){
																									HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1542);
																									{
																										HX_STACK_LINE(1543)
																										den = (Float((int)1) / Float(den));
																										HX_STACK_LINE(1544)
																										Float txx = ((((_qy * _sx) - (_qx * _sy))) * den);		HX_STACK_VAR(txx,"txx");
																										struct _Function_16_1{
																											inline static bool Block( Float &_sx,Float &_sy,Float &_vy,Float &_vx,Float &txx,Float &den,Float &t){
																												HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1545);
																												{
																													HX_STACK_LINE(1546)
																													Float sxx = ((((_vy * _sx) - (_vx * _sy))) * den);		HX_STACK_VAR(sxx,"sxx");
																													struct _Function_17_1{
																														inline static bool Block( Float &txx,Float &t){
																															HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1547);
																															{
																																HX_STACK_LINE(1548)
																																t = txx;
																																HX_STACK_LINE(1549)
																																return true;
																															}
																															return null();
																														}
																													};
																													HX_STACK_LINE(1547)
																													return (  (((bool((sxx > ::nape::Config_obj::epsilon)) && bool((sxx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_17_1::Block(txx,t)) : bool(false) );
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(1545)
																										return (  (((bool((txx > ::nape::Config_obj::epsilon)) && bool((txx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_16_1::Block(_sx,_sy,_vy,_vx,txx,den,t)) : bool(false) );
																									}
																									return null();
																								}
																							};
																							HX_STACK_LINE(1542)
																							return (  ((((den * den) > (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? bool(_Function_15_1::Block(_sx,_sy,_qy,_vy,_vx,den,t,_qx)) : bool(false) );
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(1522)
																				if ((_Function_14_1::Block(v,b,t,u,a))){
																					HX_STACK_LINE(1556)
																					if (((t < min))){
																						HX_STACK_LINE(1558)
																						min = t;
																						HX_STACK_LINE(1559)
																						ite2 = cx_itei1;
																					}
																				}
																			}
																		}
while((false));
																	}
																}
																HX_STACK_LINE(1567)
																if (((min != 2.0))){
																	HX_STACK_LINE(1568)
																	Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
																	HX_STACK_LINE(1569)
																	Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
																	HX_STACK_LINE(1570)
																	{
																		HX_STACK_LINE(1571)
																		Float T = min;		HX_STACK_VAR(T,"T");
																		HX_STACK_LINE(1580)
																		cx = (u->x + (((v->x - u->x)) * T));
																		HX_STACK_LINE(1581)
																		cy = (u->y + (((v->y - u->y)) * T));
																	}
																	struct _Function_11_1{
																		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &cx,Float &cy){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1583);
																			{
																				HX_STACK_LINE(1583)
																				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																				HX_STACK_LINE(1583)
																				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																				HX_STACK_LINE(1583)
																				{
																					HX_STACK_LINE(1583)
																					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1583)
																						ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1583)
																						ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																						HX_STACK_LINE(1583)
																						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																						HX_STACK_LINE(1583)
																						ret->next = null();
																					}
																					HX_STACK_LINE(1583)
																					ret->weak = false;
																				}
																				HX_STACK_LINE(1583)
																				ret->_immutable = immutable;
																				HX_STACK_LINE(1583)
																				{
																					HX_STACK_LINE(1583)
																					ret->x = cx;
																					HX_STACK_LINE(1583)
																					ret->y = cy;
																					HX_STACK_LINE(1583)
																					{
																					}
																				}
																				HX_STACK_LINE(1583)
																				return ret;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1583)
																	fst_vert = _Function_11_1::Block(cx,cy);
																	HX_STACK_LINE(1584)
																	::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(fst_vert);
																	HX_STACK_LINE(1585)
																	poly1 = true;
																	HX_STACK_LINE(1586)
																	ite1 = cx_itei;
																	HX_STACK_LINE(1587)
																	break;
																}
															}
														}
while((false));
													}
												}
												HX_STACK_LINE(1594)
												cnt = (int)2;
											}
											HX_STACK_LINE(1596)
											while((true)){
												HX_STACK_LINE(1596)
												if ((poly1)){
													HX_STACK_LINE(1598)
													ite1 = ite1->next;
													HX_STACK_LINE(1599)
													(ind1)++;
													HX_STACK_LINE(1600)
													if (((ite1 == null()))){
														HX_STACK_LINE(1601)
														ite1 = s1->polygon->gverts->next;
														HX_STACK_LINE(1602)
														ind1 = (int)0;
													}
													HX_STACK_LINE(1604)
													if ((!(out1->__get(ind1)))){
														HX_STACK_LINE(1605)
														::zpp_nape::geom::ZPP_Vec2 ex = ite1;		HX_STACK_VAR(ex,"ex");
														struct _Function_8_1{
															inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &ex,::zpp_nape::geom::ZPP_Vec2 &fst_vert){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1606);
																{
																	HX_STACK_LINE(1606)
																	Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																	HX_STACK_LINE(1606)
																	Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																	HX_STACK_LINE(1606)
																	{
																		HX_STACK_LINE(1606)
																		dx = (ex->x - fst_vert->x);
																		HX_STACK_LINE(1606)
																		dy = (ex->y - fst_vert->y);
																	}
																	HX_STACK_LINE(1606)
																	return ((dx * dx) + (dy * dy));
																}
																return null();
															}
														};
														HX_STACK_LINE(1606)
														if (((bool((fst_vert != null())) && bool((_Function_8_1::Block(ex,fst_vert) < ::nape::Config_obj::epsilon))))){
															HX_STACK_LINE(1606)
															break;
														}
														HX_STACK_LINE(1607)
														::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(ex);
														HX_STACK_LINE(1608)
														if (((fst_vert == null()))){
															HX_STACK_LINE(1608)
															fst_vert = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt;
														}
														HX_STACK_LINE(1609)
														cnt = (int)1;
													}
													else{
														HX_STACK_LINE(1612)
														::zpp_nape::geom::ZPP_Vec2 a = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1613)
														::zpp_nape::geom::ZPP_Vec2 b = ite1;		HX_STACK_VAR(b,"b");
														HX_STACK_LINE(1614)
														::zpp_nape::geom::ZPP_Vec2 u = ite2;		HX_STACK_VAR(u,"u");
														HX_STACK_LINE(1615)
														::zpp_nape::geom::ZPP_Vec2 itm = ite2->next;		HX_STACK_VAR(itm,"itm");
														HX_STACK_LINE(1616)
														if (((itm == null()))){
															HX_STACK_LINE(1616)
															itm = s2->polygon->gverts->next;
														}
														HX_STACK_LINE(1617)
														Float max = -1.0;		HX_STACK_VAR(max,"max");
														HX_STACK_LINE(1618)
														::zpp_nape::geom::ZPP_Vec2 itmo = null();		HX_STACK_VAR(itmo,"itmo");
														HX_STACK_LINE(1619)
														int indo = (int)0;		HX_STACK_VAR(indo,"indo");
														HX_STACK_LINE(1620)
														int icnt = (int)0;		HX_STACK_VAR(icnt,"icnt");
														HX_STACK_LINE(1621)
														{
															HX_STACK_LINE(1622)
															::zpp_nape::geom::ZPP_Vec2 beg_ite = itm;		HX_STACK_VAR(beg_ite,"beg_ite");
															HX_STACK_LINE(1623)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = itm;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(1624)
															do{
																HX_STACK_LINE(1625)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(1626)
																{
																	HX_STACK_LINE(1627)
																	Float t = 0.0;		HX_STACK_VAR(t,"t");
																	struct _Function_11_1{
																		inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &v,::zpp_nape::geom::ZPP_Vec2 &b,Float &t,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::geom::ZPP_Vec2 &a){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1628);
																			{
																				HX_STACK_LINE(1629)
																				Float _sx = 0.0;		HX_STACK_VAR(_sx,"_sx");
																				HX_STACK_LINE(1630)
																				Float _sy = 0.0;		HX_STACK_VAR(_sy,"_sy");
																				HX_STACK_LINE(1631)
																				{
																					HX_STACK_LINE(1632)
																					_sx = (u->x - a->x);
																					HX_STACK_LINE(1633)
																					_sy = (u->y - a->y);
																				}
																				HX_STACK_LINE(1635)
																				Float _vx = 0.0;		HX_STACK_VAR(_vx,"_vx");
																				HX_STACK_LINE(1636)
																				Float _vy = 0.0;		HX_STACK_VAR(_vy,"_vy");
																				HX_STACK_LINE(1637)
																				{
																					HX_STACK_LINE(1638)
																					_vx = (v->x - u->x);
																					HX_STACK_LINE(1639)
																					_vy = (v->y - u->y);
																				}
																				HX_STACK_LINE(1641)
																				Float _qx = 0.0;		HX_STACK_VAR(_qx,"_qx");
																				HX_STACK_LINE(1642)
																				Float _qy = 0.0;		HX_STACK_VAR(_qy,"_qy");
																				HX_STACK_LINE(1643)
																				{
																					HX_STACK_LINE(1644)
																					_qx = (b->x - a->x);
																					HX_STACK_LINE(1645)
																					_qy = (b->y - a->y);
																				}
																				HX_STACK_LINE(1647)
																				Float den = ((_vy * _qx) - (_vx * _qy));		HX_STACK_VAR(den,"den");
																				struct _Function_12_1{
																					inline static bool Block( Float &_sx,Float &_sy,Float &_qy,Float &_vy,Float &_vx,Float &den,Float &t,Float &_qx){
																						HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1648);
																						{
																							HX_STACK_LINE(1649)
																							den = (Float((int)1) / Float(den));
																							HX_STACK_LINE(1650)
																							Float txx = ((((_qy * _sx) - (_qx * _sy))) * den);		HX_STACK_VAR(txx,"txx");
																							struct _Function_13_1{
																								inline static bool Block( Float &_sx,Float &_sy,Float &_vy,Float &_vx,Float &txx,Float &den,Float &t){
																									HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1651);
																									{
																										HX_STACK_LINE(1652)
																										Float sxx = ((((_vy * _sx) - (_vx * _sy))) * den);		HX_STACK_VAR(sxx,"sxx");
																										struct _Function_14_1{
																											inline static bool Block( Float &txx,Float &t){
																												HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1653);
																												{
																													HX_STACK_LINE(1654)
																													t = txx;
																													HX_STACK_LINE(1655)
																													return true;
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(1653)
																										return (  (((bool((sxx > ::nape::Config_obj::epsilon)) && bool((sxx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_14_1::Block(txx,t)) : bool(false) );
																									}
																									return null();
																								}
																							};
																							HX_STACK_LINE(1651)
																							return (  (((bool((txx > ::nape::Config_obj::epsilon)) && bool((txx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_13_1::Block(_sx,_sy,_vy,_vx,txx,den,t)) : bool(false) );
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(1648)
																				return (  ((((den * den) > (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? bool(_Function_12_1::Block(_sx,_sy,_qy,_vy,_vx,den,t,_qx)) : bool(false) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1628)
																	if ((_Function_11_1::Block(v,b,t,u,a))){
																		HX_STACK_LINE(1662)
																		if (((t >= max))){
																			HX_STACK_LINE(1664)
																			itmo = ite2;
																			HX_STACK_LINE(1665)
																			indo = ind2;
																			HX_STACK_LINE(1666)
																			if (((++(icnt) == cnt))){
																				HX_STACK_LINE(1667)
																				max = t;
																				HX_STACK_LINE(1668)
																				{
																					HX_STACK_LINE(1669)
																					cx_ite = beg_ite;
																					HX_STACK_LINE(1670)
																					break;
																				}
																			}
																			else{
																				HX_STACK_LINE(1673)
																				max = t;
																			}
																		}
																	}
																	HX_STACK_LINE(1676)
																	u = v;
																	HX_STACK_LINE(1677)
																	ite2 = cx_ite;
																	HX_STACK_LINE(1678)
																	(ind2)++;
																	HX_STACK_LINE(1679)
																	if (((ind2 >= s2->polygon->edgeCnt))){
																		HX_STACK_LINE(1679)
																		ind2 = (int)0;
																	}
																}
																HX_STACK_LINE(1681)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(1682)
																if (((cx_ite == null()))){
																	HX_STACK_LINE(1682)
																	cx_ite = s2->polygon->gverts->next;
																}
															}
while((false));
															HX_STACK_LINE(1685)
															while(((cx_ite != beg_ite))){
																HX_STACK_LINE(1686)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(1687)
																{
																	HX_STACK_LINE(1688)
																	Float t = 0.0;		HX_STACK_VAR(t,"t");
																	struct _Function_11_1{
																		inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &v,::zpp_nape::geom::ZPP_Vec2 &b,Float &t,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::geom::ZPP_Vec2 &a){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1689);
																			{
																				HX_STACK_LINE(1690)
																				Float _sx = 0.0;		HX_STACK_VAR(_sx,"_sx");
																				HX_STACK_LINE(1691)
																				Float _sy = 0.0;		HX_STACK_VAR(_sy,"_sy");
																				HX_STACK_LINE(1692)
																				{
																					HX_STACK_LINE(1693)
																					_sx = (u->x - a->x);
																					HX_STACK_LINE(1694)
																					_sy = (u->y - a->y);
																				}
																				HX_STACK_LINE(1696)
																				Float _vx = 0.0;		HX_STACK_VAR(_vx,"_vx");
																				HX_STACK_LINE(1697)
																				Float _vy = 0.0;		HX_STACK_VAR(_vy,"_vy");
																				HX_STACK_LINE(1698)
																				{
																					HX_STACK_LINE(1699)
																					_vx = (v->x - u->x);
																					HX_STACK_LINE(1700)
																					_vy = (v->y - u->y);
																				}
																				HX_STACK_LINE(1702)
																				Float _qx = 0.0;		HX_STACK_VAR(_qx,"_qx");
																				HX_STACK_LINE(1703)
																				Float _qy = 0.0;		HX_STACK_VAR(_qy,"_qy");
																				HX_STACK_LINE(1704)
																				{
																					HX_STACK_LINE(1705)
																					_qx = (b->x - a->x);
																					HX_STACK_LINE(1706)
																					_qy = (b->y - a->y);
																				}
																				HX_STACK_LINE(1708)
																				Float den = ((_vy * _qx) - (_vx * _qy));		HX_STACK_VAR(den,"den");
																				struct _Function_12_1{
																					inline static bool Block( Float &_sx,Float &_sy,Float &_qy,Float &_vy,Float &_vx,Float &den,Float &t,Float &_qx){
																						HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1709);
																						{
																							HX_STACK_LINE(1710)
																							den = (Float((int)1) / Float(den));
																							HX_STACK_LINE(1711)
																							Float txx = ((((_qy * _sx) - (_qx * _sy))) * den);		HX_STACK_VAR(txx,"txx");
																							struct _Function_13_1{
																								inline static bool Block( Float &_sx,Float &_sy,Float &_vy,Float &_vx,Float &txx,Float &den,Float &t){
																									HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1712);
																									{
																										HX_STACK_LINE(1713)
																										Float sxx = ((((_vy * _sx) - (_vx * _sy))) * den);		HX_STACK_VAR(sxx,"sxx");
																										struct _Function_14_1{
																											inline static bool Block( Float &txx,Float &t){
																												HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1714);
																												{
																													HX_STACK_LINE(1715)
																													t = txx;
																													HX_STACK_LINE(1716)
																													return true;
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(1714)
																										return (  (((bool((sxx > ::nape::Config_obj::epsilon)) && bool((sxx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_14_1::Block(txx,t)) : bool(false) );
																									}
																									return null();
																								}
																							};
																							HX_STACK_LINE(1712)
																							return (  (((bool((txx > ::nape::Config_obj::epsilon)) && bool((txx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_13_1::Block(_sx,_sy,_vy,_vx,txx,den,t)) : bool(false) );
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(1709)
																				return (  ((((den * den) > (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? bool(_Function_12_1::Block(_sx,_sy,_qy,_vy,_vx,den,t,_qx)) : bool(false) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1689)
																	if ((_Function_11_1::Block(v,b,t,u,a))){
																		HX_STACK_LINE(1723)
																		if (((t >= max))){
																			HX_STACK_LINE(1725)
																			itmo = ite2;
																			HX_STACK_LINE(1726)
																			indo = ind2;
																			HX_STACK_LINE(1727)
																			if (((++(icnt) == cnt))){
																				HX_STACK_LINE(1728)
																				max = t;
																				HX_STACK_LINE(1729)
																				{
																					HX_STACK_LINE(1730)
																					cx_ite = beg_ite;
																					HX_STACK_LINE(1731)
																					break;
																				}
																			}
																			else{
																				HX_STACK_LINE(1734)
																				max = t;
																			}
																		}
																	}
																	HX_STACK_LINE(1737)
																	u = v;
																	HX_STACK_LINE(1738)
																	ite2 = cx_ite;
																	HX_STACK_LINE(1739)
																	(ind2)++;
																	HX_STACK_LINE(1740)
																	if (((ind2 >= s2->polygon->edgeCnt))){
																		HX_STACK_LINE(1740)
																		ind2 = (int)0;
																	}
																}
																HX_STACK_LINE(1742)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(1743)
																if (((cx_ite == null()))){
																	HX_STACK_LINE(1743)
																	cx_ite = s2->polygon->gverts->next;
																}
															}
														}
														HX_STACK_LINE(1746)
														if (((itmo == null()))){
															HX_STACK_LINE(1746)
															break;
														}
														HX_STACK_LINE(1747)
														::zpp_nape::geom::ZPP_Vec2 u1 = itmo;		HX_STACK_VAR(u1,"u1");
														HX_STACK_LINE(1748)
														::zpp_nape::geom::ZPP_Vec2 itm2 = itmo->next;		HX_STACK_VAR(itm2,"itm2");
														HX_STACK_LINE(1749)
														if (((itm2 == null()))){
															HX_STACK_LINE(1749)
															itm2 = s2->polygon->gverts->next;
														}
														HX_STACK_LINE(1750)
														::zpp_nape::geom::ZPP_Vec2 v = itm2;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(1751)
														Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
														HX_STACK_LINE(1752)
														Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
														HX_STACK_LINE(1753)
														{
															HX_STACK_LINE(1754)
															Float T = max;		HX_STACK_VAR(T,"T");
															HX_STACK_LINE(1763)
															cx = (u1->x + (((v->x - u1->x)) * T));
															HX_STACK_LINE(1764)
															cy = (u1->y + (((v->y - u1->y)) * T));
														}
														struct _Function_8_1{
															inline static Float Block( Float &cx,Float &cy,::zpp_nape::geom::ZPP_Vec2 &fst_vert){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1766);
																{
																	HX_STACK_LINE(1766)
																	Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																	HX_STACK_LINE(1766)
																	Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																	HX_STACK_LINE(1766)
																	{
																		HX_STACK_LINE(1766)
																		dx = (cx - fst_vert->x);
																		HX_STACK_LINE(1766)
																		dy = (cy - fst_vert->y);
																	}
																	HX_STACK_LINE(1766)
																	return ((dx * dx) + (dy * dy));
																}
																return null();
															}
														};
														HX_STACK_LINE(1766)
														if (((bool((fst_vert != null())) && bool((_Function_8_1::Block(cx,cy,fst_vert) < ::nape::Config_obj::epsilon))))){
															HX_STACK_LINE(1766)
															break;
														}
														struct _Function_8_2{
															inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &cx,Float &cy){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1767);
																{
																	HX_STACK_LINE(1767)
																	bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																	HX_STACK_LINE(1767)
																	::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																	HX_STACK_LINE(1767)
																	{
																		HX_STACK_LINE(1767)
																		if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1767)
																			ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1767)
																			ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																			HX_STACK_LINE(1767)
																			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																			HX_STACK_LINE(1767)
																			ret->next = null();
																		}
																		HX_STACK_LINE(1767)
																		ret->weak = false;
																	}
																	HX_STACK_LINE(1767)
																	ret->_immutable = immutable;
																	HX_STACK_LINE(1767)
																	{
																		HX_STACK_LINE(1767)
																		ret->x = cx;
																		HX_STACK_LINE(1767)
																		ret->y = cy;
																		HX_STACK_LINE(1767)
																		{
																		}
																	}
																	HX_STACK_LINE(1767)
																	return ret;
																}
																return null();
															}
														};
														HX_STACK_LINE(1767)
														::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(_Function_8_2::Block(cx,cy));
														HX_STACK_LINE(1768)
														if (((fst_vert == null()))){
															HX_STACK_LINE(1768)
															fst_vert = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt;
														}
														HX_STACK_LINE(1769)
														ite2 = itmo;
														HX_STACK_LINE(1770)
														ind2 = indo;
														HX_STACK_LINE(1771)
														poly1 = !(poly1);
														HX_STACK_LINE(1772)
														cnt = (int)2;
													}
												}
												else{
													HX_STACK_LINE(1776)
													ite2 = ite2->next;
													HX_STACK_LINE(1777)
													(ind2)++;
													HX_STACK_LINE(1778)
													if (((ite2 == null()))){
														HX_STACK_LINE(1779)
														ite2 = s2->polygon->gverts->next;
														HX_STACK_LINE(1780)
														ind2 = (int)0;
													}
													HX_STACK_LINE(1782)
													if ((!(out2->__get(ind2)))){
														HX_STACK_LINE(1783)
														::zpp_nape::geom::ZPP_Vec2 ex = ite2;		HX_STACK_VAR(ex,"ex");
														struct _Function_8_1{
															inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &ex,::zpp_nape::geom::ZPP_Vec2 &fst_vert){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1784);
																{
																	HX_STACK_LINE(1784)
																	Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																	HX_STACK_LINE(1784)
																	Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																	HX_STACK_LINE(1784)
																	{
																		HX_STACK_LINE(1784)
																		dx = (ex->x - fst_vert->x);
																		HX_STACK_LINE(1784)
																		dy = (ex->y - fst_vert->y);
																	}
																	HX_STACK_LINE(1784)
																	return ((dx * dx) + (dy * dy));
																}
																return null();
															}
														};
														HX_STACK_LINE(1784)
														if (((bool((fst_vert != null())) && bool((_Function_8_1::Block(ex,fst_vert) < ::nape::Config_obj::epsilon))))){
															HX_STACK_LINE(1784)
															break;
														}
														HX_STACK_LINE(1785)
														::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(ex);
														HX_STACK_LINE(1786)
														if (((fst_vert == null()))){
															HX_STACK_LINE(1786)
															fst_vert = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt;
														}
														HX_STACK_LINE(1787)
														cnt = (int)1;
													}
													else{
														HX_STACK_LINE(1790)
														::zpp_nape::geom::ZPP_Vec2 a = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(1791)
														::zpp_nape::geom::ZPP_Vec2 b = ite2;		HX_STACK_VAR(b,"b");
														HX_STACK_LINE(1792)
														::zpp_nape::geom::ZPP_Vec2 u = ite1;		HX_STACK_VAR(u,"u");
														HX_STACK_LINE(1793)
														::zpp_nape::geom::ZPP_Vec2 itm = ite1->next;		HX_STACK_VAR(itm,"itm");
														HX_STACK_LINE(1794)
														if (((itm == null()))){
															HX_STACK_LINE(1794)
															itm = s1->polygon->gverts->next;
														}
														HX_STACK_LINE(1795)
														Float max = -1.0;		HX_STACK_VAR(max,"max");
														HX_STACK_LINE(1796)
														::zpp_nape::geom::ZPP_Vec2 itmo = null();		HX_STACK_VAR(itmo,"itmo");
														HX_STACK_LINE(1797)
														int indo = (int)0;		HX_STACK_VAR(indo,"indo");
														HX_STACK_LINE(1798)
														int icnt = (int)0;		HX_STACK_VAR(icnt,"icnt");
														HX_STACK_LINE(1799)
														{
															HX_STACK_LINE(1800)
															::zpp_nape::geom::ZPP_Vec2 beg_ite = itm;		HX_STACK_VAR(beg_ite,"beg_ite");
															HX_STACK_LINE(1801)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = itm;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(1802)
															do{
																HX_STACK_LINE(1803)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(1804)
																{
																	HX_STACK_LINE(1805)
																	Float t = 0.0;		HX_STACK_VAR(t,"t");
																	struct _Function_11_1{
																		inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &v,::zpp_nape::geom::ZPP_Vec2 &b,Float &t,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::geom::ZPP_Vec2 &a){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1806);
																			{
																				HX_STACK_LINE(1807)
																				Float _sx = 0.0;		HX_STACK_VAR(_sx,"_sx");
																				HX_STACK_LINE(1808)
																				Float _sy = 0.0;		HX_STACK_VAR(_sy,"_sy");
																				HX_STACK_LINE(1809)
																				{
																					HX_STACK_LINE(1810)
																					_sx = (u->x - a->x);
																					HX_STACK_LINE(1811)
																					_sy = (u->y - a->y);
																				}
																				HX_STACK_LINE(1813)
																				Float _vx = 0.0;		HX_STACK_VAR(_vx,"_vx");
																				HX_STACK_LINE(1814)
																				Float _vy = 0.0;		HX_STACK_VAR(_vy,"_vy");
																				HX_STACK_LINE(1815)
																				{
																					HX_STACK_LINE(1816)
																					_vx = (v->x - u->x);
																					HX_STACK_LINE(1817)
																					_vy = (v->y - u->y);
																				}
																				HX_STACK_LINE(1819)
																				Float _qx = 0.0;		HX_STACK_VAR(_qx,"_qx");
																				HX_STACK_LINE(1820)
																				Float _qy = 0.0;		HX_STACK_VAR(_qy,"_qy");
																				HX_STACK_LINE(1821)
																				{
																					HX_STACK_LINE(1822)
																					_qx = (b->x - a->x);
																					HX_STACK_LINE(1823)
																					_qy = (b->y - a->y);
																				}
																				HX_STACK_LINE(1825)
																				Float den = ((_vy * _qx) - (_vx * _qy));		HX_STACK_VAR(den,"den");
																				struct _Function_12_1{
																					inline static bool Block( Float &_sx,Float &_sy,Float &_qy,Float &_vy,Float &_vx,Float &den,Float &t,Float &_qx){
																						HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1826);
																						{
																							HX_STACK_LINE(1827)
																							den = (Float((int)1) / Float(den));
																							HX_STACK_LINE(1828)
																							Float txx = ((((_qy * _sx) - (_qx * _sy))) * den);		HX_STACK_VAR(txx,"txx");
																							struct _Function_13_1{
																								inline static bool Block( Float &_sx,Float &_sy,Float &_vy,Float &_vx,Float &txx,Float &den,Float &t){
																									HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1829);
																									{
																										HX_STACK_LINE(1830)
																										Float sxx = ((((_vy * _sx) - (_vx * _sy))) * den);		HX_STACK_VAR(sxx,"sxx");
																										struct _Function_14_1{
																											inline static bool Block( Float &txx,Float &t){
																												HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1831);
																												{
																													HX_STACK_LINE(1832)
																													t = txx;
																													HX_STACK_LINE(1833)
																													return true;
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(1831)
																										return (  (((bool((sxx > ::nape::Config_obj::epsilon)) && bool((sxx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_14_1::Block(txx,t)) : bool(false) );
																									}
																									return null();
																								}
																							};
																							HX_STACK_LINE(1829)
																							return (  (((bool((txx > ::nape::Config_obj::epsilon)) && bool((txx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_13_1::Block(_sx,_sy,_vy,_vx,txx,den,t)) : bool(false) );
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(1826)
																				return (  ((((den * den) > (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? bool(_Function_12_1::Block(_sx,_sy,_qy,_vy,_vx,den,t,_qx)) : bool(false) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1806)
																	if ((_Function_11_1::Block(v,b,t,u,a))){
																		HX_STACK_LINE(1840)
																		if (((t >= max))){
																			HX_STACK_LINE(1842)
																			itmo = ite1;
																			HX_STACK_LINE(1843)
																			indo = ind1;
																			HX_STACK_LINE(1844)
																			if (((++(icnt) == cnt))){
																				HX_STACK_LINE(1845)
																				max = t;
																				HX_STACK_LINE(1846)
																				{
																					HX_STACK_LINE(1847)
																					cx_ite = beg_ite;
																					HX_STACK_LINE(1848)
																					break;
																				}
																			}
																			else{
																				HX_STACK_LINE(1851)
																				max = t;
																			}
																		}
																	}
																	HX_STACK_LINE(1854)
																	u = v;
																	HX_STACK_LINE(1855)
																	ite1 = cx_ite;
																	HX_STACK_LINE(1856)
																	(ind1)++;
																	HX_STACK_LINE(1857)
																	if (((ind1 >= s1->polygon->edgeCnt))){
																		HX_STACK_LINE(1857)
																		ind1 = (int)0;
																	}
																}
																HX_STACK_LINE(1859)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(1860)
																if (((cx_ite == null()))){
																	HX_STACK_LINE(1860)
																	cx_ite = s1->polygon->gverts->next;
																}
															}
while((false));
															HX_STACK_LINE(1863)
															while(((cx_ite != beg_ite))){
																HX_STACK_LINE(1864)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(1865)
																{
																	HX_STACK_LINE(1866)
																	Float t = 0.0;		HX_STACK_VAR(t,"t");
																	struct _Function_11_1{
																		inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &v,::zpp_nape::geom::ZPP_Vec2 &b,Float &t,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::geom::ZPP_Vec2 &a){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1867);
																			{
																				HX_STACK_LINE(1868)
																				Float _sx = 0.0;		HX_STACK_VAR(_sx,"_sx");
																				HX_STACK_LINE(1869)
																				Float _sy = 0.0;		HX_STACK_VAR(_sy,"_sy");
																				HX_STACK_LINE(1870)
																				{
																					HX_STACK_LINE(1871)
																					_sx = (u->x - a->x);
																					HX_STACK_LINE(1872)
																					_sy = (u->y - a->y);
																				}
																				HX_STACK_LINE(1874)
																				Float _vx = 0.0;		HX_STACK_VAR(_vx,"_vx");
																				HX_STACK_LINE(1875)
																				Float _vy = 0.0;		HX_STACK_VAR(_vy,"_vy");
																				HX_STACK_LINE(1876)
																				{
																					HX_STACK_LINE(1877)
																					_vx = (v->x - u->x);
																					HX_STACK_LINE(1878)
																					_vy = (v->y - u->y);
																				}
																				HX_STACK_LINE(1880)
																				Float _qx = 0.0;		HX_STACK_VAR(_qx,"_qx");
																				HX_STACK_LINE(1881)
																				Float _qy = 0.0;		HX_STACK_VAR(_qy,"_qy");
																				HX_STACK_LINE(1882)
																				{
																					HX_STACK_LINE(1883)
																					_qx = (b->x - a->x);
																					HX_STACK_LINE(1884)
																					_qy = (b->y - a->y);
																				}
																				HX_STACK_LINE(1886)
																				Float den = ((_vy * _qx) - (_vx * _qy));		HX_STACK_VAR(den,"den");
																				struct _Function_12_1{
																					inline static bool Block( Float &_sx,Float &_sy,Float &_qy,Float &_vy,Float &_vx,Float &den,Float &t,Float &_qx){
																						HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1887);
																						{
																							HX_STACK_LINE(1888)
																							den = (Float((int)1) / Float(den));
																							HX_STACK_LINE(1889)
																							Float txx = ((((_qy * _sx) - (_qx * _sy))) * den);		HX_STACK_VAR(txx,"txx");
																							struct _Function_13_1{
																								inline static bool Block( Float &_sx,Float &_sy,Float &_vy,Float &_vx,Float &txx,Float &den,Float &t){
																									HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1890);
																									{
																										HX_STACK_LINE(1891)
																										Float sxx = ((((_vy * _sx) - (_vx * _sy))) * den);		HX_STACK_VAR(sxx,"sxx");
																										struct _Function_14_1{
																											inline static bool Block( Float &txx,Float &t){
																												HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1892);
																												{
																													HX_STACK_LINE(1893)
																													t = txx;
																													HX_STACK_LINE(1894)
																													return true;
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(1892)
																										return (  (((bool((sxx > ::nape::Config_obj::epsilon)) && bool((sxx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_14_1::Block(txx,t)) : bool(false) );
																									}
																									return null();
																								}
																							};
																							HX_STACK_LINE(1890)
																							return (  (((bool((txx > ::nape::Config_obj::epsilon)) && bool((txx < ((int)1 - ::nape::Config_obj::epsilon)))))) ? bool(_Function_13_1::Block(_sx,_sy,_vy,_vx,txx,den,t)) : bool(false) );
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(1887)
																				return (  ((((den * den) > (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? bool(_Function_12_1::Block(_sx,_sy,_qy,_vy,_vx,den,t,_qx)) : bool(false) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1867)
																	if ((_Function_11_1::Block(v,b,t,u,a))){
																		HX_STACK_LINE(1901)
																		if (((t >= max))){
																			HX_STACK_LINE(1903)
																			itmo = ite1;
																			HX_STACK_LINE(1904)
																			indo = ind1;
																			HX_STACK_LINE(1905)
																			if (((++(icnt) == cnt))){
																				HX_STACK_LINE(1906)
																				max = t;
																				HX_STACK_LINE(1907)
																				{
																					HX_STACK_LINE(1908)
																					cx_ite = beg_ite;
																					HX_STACK_LINE(1909)
																					break;
																				}
																			}
																			else{
																				HX_STACK_LINE(1912)
																				max = t;
																			}
																		}
																	}
																	HX_STACK_LINE(1915)
																	u = v;
																	HX_STACK_LINE(1916)
																	ite1 = cx_ite;
																	HX_STACK_LINE(1917)
																	(ind1)++;
																	HX_STACK_LINE(1918)
																	if (((ind1 >= s1->polygon->edgeCnt))){
																		HX_STACK_LINE(1918)
																		ind1 = (int)0;
																	}
																}
																HX_STACK_LINE(1920)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(1921)
																if (((cx_ite == null()))){
																	HX_STACK_LINE(1921)
																	cx_ite = s1->polygon->gverts->next;
																}
															}
														}
														HX_STACK_LINE(1924)
														if (((itmo == null()))){
															HX_STACK_LINE(1924)
															break;
														}
														HX_STACK_LINE(1925)
														::zpp_nape::geom::ZPP_Vec2 u1 = itmo;		HX_STACK_VAR(u1,"u1");
														HX_STACK_LINE(1926)
														::zpp_nape::geom::ZPP_Vec2 itm2 = itmo->next;		HX_STACK_VAR(itm2,"itm2");
														HX_STACK_LINE(1927)
														if (((itm2 == null()))){
															HX_STACK_LINE(1927)
															itm2 = s1->polygon->gverts->next;
														}
														HX_STACK_LINE(1928)
														::zpp_nape::geom::ZPP_Vec2 v = itm2;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(1929)
														Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
														HX_STACK_LINE(1930)
														Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
														HX_STACK_LINE(1931)
														{
															HX_STACK_LINE(1932)
															Float T = max;		HX_STACK_VAR(T,"T");
															HX_STACK_LINE(1941)
															cx = (u1->x + (((v->x - u1->x)) * T));
															HX_STACK_LINE(1942)
															cy = (u1->y + (((v->y - u1->y)) * T));
														}
														struct _Function_8_1{
															inline static Float Block( Float &cx,Float &cy,::zpp_nape::geom::ZPP_Vec2 &fst_vert){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1944);
																{
																	HX_STACK_LINE(1944)
																	Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																	HX_STACK_LINE(1944)
																	Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																	HX_STACK_LINE(1944)
																	{
																		HX_STACK_LINE(1944)
																		dx = (cx - fst_vert->x);
																		HX_STACK_LINE(1944)
																		dy = (cy - fst_vert->y);
																	}
																	HX_STACK_LINE(1944)
																	return ((dx * dx) + (dy * dy));
																}
																return null();
															}
														};
														HX_STACK_LINE(1944)
														if (((bool((fst_vert != null())) && bool((_Function_8_1::Block(cx,cy,fst_vert) < ::nape::Config_obj::epsilon))))){
															HX_STACK_LINE(1944)
															break;
														}
														struct _Function_8_2{
															inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &cx,Float &cy){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1945);
																{
																	HX_STACK_LINE(1945)
																	bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																	HX_STACK_LINE(1945)
																	::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																	HX_STACK_LINE(1945)
																	{
																		HX_STACK_LINE(1945)
																		if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1945)
																			ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1945)
																			ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																			HX_STACK_LINE(1945)
																			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																			HX_STACK_LINE(1945)
																			ret->next = null();
																		}
																		HX_STACK_LINE(1945)
																		ret->weak = false;
																	}
																	HX_STACK_LINE(1945)
																	ret->_immutable = immutable;
																	HX_STACK_LINE(1945)
																	{
																		HX_STACK_LINE(1945)
																		ret->x = cx;
																		HX_STACK_LINE(1945)
																		ret->y = cy;
																		HX_STACK_LINE(1945)
																		{
																		}
																	}
																	HX_STACK_LINE(1945)
																	return ret;
																}
																return null();
															}
														};
														HX_STACK_LINE(1945)
														::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(_Function_8_2::Block(cx,cy));
														HX_STACK_LINE(1946)
														if (((fst_vert == null()))){
															HX_STACK_LINE(1946)
															fst_vert = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt;
														}
														HX_STACK_LINE(1947)
														ite1 = itmo;
														HX_STACK_LINE(1948)
														ind1 = indo;
														HX_STACK_LINE(1949)
														poly1 = !(poly1);
														HX_STACK_LINE(1950)
														cnt = (int)2;
													}
												}
											}
											struct _Function_5_1{
												inline static bool Block( ::zpp_nape::dynamics::ZPP_FluidArbiter &arb){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",1954);
													{
														HX_STACK_LINE(1955)
														Float area = 0.0;		HX_STACK_VAR(area,"area");
														HX_STACK_LINE(1956)
														Float COMx = 0.0;		HX_STACK_VAR(COMx,"COMx");
														HX_STACK_LINE(1957)
														Float COMy = 0.0;		HX_STACK_VAR(COMy,"COMy");
														HX_STACK_LINE(1958)
														{
															HX_STACK_LINE(1959)
															{
																HX_STACK_LINE(1960)
																COMx = (int)0;
																HX_STACK_LINE(1961)
																COMy = (int)0;
																HX_STACK_LINE(1970)
																{
																}
															}
															HX_STACK_LINE(1979)
															area = 0.0;
															HX_STACK_LINE(1980)
															{
																HX_STACK_LINE(1981)
																::zpp_nape::util::ZNPNode_ZPP_Vec2 cx_ite = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head;		HX_STACK_VAR(cx_ite,"cx_ite");
																HX_STACK_LINE(1982)
																::zpp_nape::geom::ZPP_Vec2 u = cx_ite->elt;		HX_STACK_VAR(u,"u");
																HX_STACK_LINE(1983)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(1984)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite->elt;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(1985)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(1986)
																while(((cx_ite != null()))){
																	HX_STACK_LINE(1987)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite->elt;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1988)
																	{
																		HX_STACK_LINE(1989)
																		hx::AddEq(area,(v->x * ((w->y - u->y))));
																		HX_STACK_LINE(1990)
																		Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1991)
																		hx::AddEq(COMx,(((v->x + w->x)) * cf));
																		HX_STACK_LINE(1992)
																		hx::AddEq(COMy,(((v->y + w->y)) * cf));
																	}
																	HX_STACK_LINE(1994)
																	u = v;
																	HX_STACK_LINE(1995)
																	v = w;
																	HX_STACK_LINE(1996)
																	cx_ite = cx_ite->next;
																}
																HX_STACK_LINE(1998)
																cx_ite = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head;
																HX_STACK_LINE(1999)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite->elt;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(2000)
																{
																	HX_STACK_LINE(2001)
																	hx::AddEq(area,(v->x * ((w->y - u->y))));
																	HX_STACK_LINE(2002)
																	Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(2003)
																	hx::AddEq(COMx,(((v->x + w->x)) * cf));
																	HX_STACK_LINE(2004)
																	hx::AddEq(COMy,(((v->y + w->y)) * cf));
																}
																HX_STACK_LINE(2006)
																u = v;
																HX_STACK_LINE(2007)
																v = w;
																HX_STACK_LINE(2008)
																cx_ite = cx_ite->next;
																HX_STACK_LINE(2009)
																::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite->elt;		HX_STACK_VAR(w1,"w1");
																HX_STACK_LINE(2010)
																{
																	HX_STACK_LINE(2011)
																	hx::AddEq(area,(v->x * ((w1->y - u->y))));
																	HX_STACK_LINE(2012)
																	Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(2013)
																	hx::AddEq(COMx,(((v->x + w1->x)) * cf));
																	HX_STACK_LINE(2014)
																	hx::AddEq(COMy,(((v->y + w1->y)) * cf));
																}
															}
															HX_STACK_LINE(2017)
															hx::MultEq(area,0.5);
															HX_STACK_LINE(2018)
															Float ia = (Float((int)1) / Float((((int)6 * area))));		HX_STACK_VAR(ia,"ia");
															HX_STACK_LINE(2019)
															{
																HX_STACK_LINE(2020)
																Float t = ia;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(2029)
																hx::MultEq(COMx,t);
																HX_STACK_LINE(2030)
																hx::MultEq(COMy,t);
															}
														}
														HX_STACK_LINE(2033)
														{
															HX_STACK_LINE(2033)
															arb->overlap = -(area);
															HX_STACK_LINE(2033)
															{
																HX_STACK_LINE(2033)
																arb->centroidx = COMx;
																HX_STACK_LINE(2033)
																arb->centroidy = COMy;
																HX_STACK_LINE(2033)
																Dynamic();
															}
														}
														HX_STACK_LINE(2034)
														return true;
													}
													return null();
												}
											};
											HX_STACK_LINE(1954)
											return (  (((bool((bool((::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head != null())) && bool((::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->next != null())))) && bool((::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->next->next != null()))))) ? bool(_Function_5_1::Block(arb)) : bool(false) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1249)
								return (  ((total)) ? bool(_Function_4_1::Block(arb,s1)) : bool((  ((cont)) ? bool(_Function_4_2::Block(s2,arb,out1,out2,s1)) : bool(false) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1210)
					return (  ((total)) ? bool(_Function_3_1::Block(s2,arb)) : bool((  ((cont)) ? bool(_Function_3_2::Block(s2,arb,out1,cont,total,out2,s1)) : bool(false) )) );
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb,::zpp_nape::shape::ZPP_Shape &s1){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2042);
				{
					HX_STACK_LINE(2043)
					Array< bool > inte = Array_obj< bool >::__new();		HX_STACK_VAR(inte,"inte");
					HX_STACK_LINE(2044)
					bool total = true;		HX_STACK_VAR(total,"total");
					HX_STACK_LINE(2045)
					::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
					::zpp_nape::geom::ZPP_Vec2 vi = null();		HX_STACK_VAR(vi,"vi");
					HX_STACK_LINE(2046)
					Float max = -1e+100;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(2047)
					bool cont = true;		HX_STACK_VAR(cont,"cont");
					HX_STACK_LINE(2048)
					::zpp_nape::geom::ZPP_Vec2 vite = s2->polygon->gverts->next;		HX_STACK_VAR(vite,"vite");
					HX_STACK_LINE(2049)
					int ind = (int)0;		HX_STACK_VAR(ind,"ind");
					HX_STACK_LINE(2050)
					{
						HX_STACK_LINE(2051)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s2->polygon->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(2052)
						while(((cx_ite != null()))){
							HX_STACK_LINE(2053)
							::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(2054)
							{
								HX_STACK_LINE(2055)
								Float dist = ((a->gnormx * s1->circle->worldCOMx) + (a->gnormy * s1->circle->worldCOMy));		HX_STACK_VAR(dist,"dist");
								HX_STACK_LINE(2056)
								if (((dist > (a->gprojection + s1->circle->radius)))){
									HX_STACK_LINE(2057)
									cont = false;
									HX_STACK_LINE(2058)
									break;
								}
								else{
									HX_STACK_LINE(2060)
									if ((((dist + s1->circle->radius) > (a->gprojection + ::nape::Config_obj::epsilon)))){
										HX_STACK_LINE(2061)
										total = false;
										HX_STACK_LINE(2062)
										inte[ind] = true;
									}
								}
								HX_STACK_LINE(2064)
								hx::SubEq(dist,(a->gprojection + s1->circle->radius));
								HX_STACK_LINE(2065)
								if (((dist > max))){
									HX_STACK_LINE(2066)
									max = dist;
									HX_STACK_LINE(2067)
									a0 = a;
									HX_STACK_LINE(2068)
									vi = vite;
								}
								HX_STACK_LINE(2070)
								vite = vite->next;
								HX_STACK_LINE(2071)
								(ind)++;
							}
							HX_STACK_LINE(2073)
							cx_ite = cx_ite->next;
						}
					}
					struct _Function_3_1{
						inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &vi,::zpp_nape::dynamics::ZPP_FluidArbiter &arb,::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::shape::ZPP_Edge &a0,Array< bool > &inte,bool &total,::zpp_nape::shape::ZPP_Shape &s1){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2076);
							{
								struct _Function_4_1{
									inline static bool Block( ::zpp_nape::dynamics::ZPP_FluidArbiter &arb,::zpp_nape::shape::ZPP_Shape &s1){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2077);
										{
											HX_STACK_LINE(2078)
											{
												HX_STACK_LINE(2078)
												arb->overlap = s1->circle->area;
												HX_STACK_LINE(2078)
												{
													HX_STACK_LINE(2078)
													arb->centroidx = s1->circle->worldCOMx;
													HX_STACK_LINE(2078)
													arb->centroidy = s1->circle->worldCOMy;
													HX_STACK_LINE(2078)
													Dynamic();
												}
											}
											HX_STACK_LINE(2079)
											return true;
										}
										return null();
									}
								};
								struct _Function_4_2{
									inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &vi,::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb,::zpp_nape::shape::ZPP_Edge &a0,Array< bool > &inte,::zpp_nape::shape::ZPP_Shape &s1){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2081);
										{
											HX_STACK_LINE(2082)
											::zpp_nape::geom::ZPP_Vec2 v0 = vi;		HX_STACK_VAR(v0,"v0");
											HX_STACK_LINE(2083)
											::zpp_nape::geom::ZPP_Vec2 v1 = (  (((vi->next == null()))) ? ::zpp_nape::geom::ZPP_Vec2(s2->polygon->gverts->next) : ::zpp_nape::geom::ZPP_Vec2(vi->next) );		HX_STACK_VAR(v1,"v1");
											HX_STACK_LINE(2084)
											Float dt = ((s1->circle->worldCOMy * a0->gnormx) - (s1->circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
											struct _Function_5_1{
												inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &v0,::zpp_nape::shape::ZPP_Shape &s1){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2085);
													{
														HX_STACK_LINE(2086)
														Float minDist = s1->circle->radius;		HX_STACK_VAR(minDist,"minDist");
														HX_STACK_LINE(2087)
														Float px = 0.0;		HX_STACK_VAR(px,"px");
														HX_STACK_LINE(2088)
														Float py = 0.0;		HX_STACK_VAR(py,"py");
														HX_STACK_LINE(2089)
														{
															HX_STACK_LINE(2090)
															px = (v0->x - s1->circle->worldCOMx);
															HX_STACK_LINE(2091)
															py = (v0->y - s1->circle->worldCOMy);
														}
														HX_STACK_LINE(2093)
														Float distSqr = ((px * px) + (py * py));		HX_STACK_VAR(distSqr,"distSqr");
														HX_STACK_LINE(2094)
														return (distSqr <= (minDist * minDist));
													}
													return null();
												}
											};
											struct _Function_5_2{
												inline static bool Block( ::zpp_nape::geom::ZPP_Vec2 &v1,::zpp_nape::shape::ZPP_Shape &s1){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2096);
													{
														HX_STACK_LINE(2097)
														Float minDist = s1->circle->radius;		HX_STACK_VAR(minDist,"minDist");
														HX_STACK_LINE(2098)
														Float px = 0.0;		HX_STACK_VAR(px,"px");
														HX_STACK_LINE(2099)
														Float py = 0.0;		HX_STACK_VAR(py,"py");
														HX_STACK_LINE(2100)
														{
															HX_STACK_LINE(2101)
															px = (v1->x - s1->circle->worldCOMx);
															HX_STACK_LINE(2102)
															py = (v1->y - s1->circle->worldCOMy);
														}
														HX_STACK_LINE(2104)
														Float distSqr = ((px * px) + (py * py));		HX_STACK_VAR(distSqr,"distSqr");
														HX_STACK_LINE(2105)
														return (distSqr <= (minDist * minDist));
													}
													return null();
												}
											};
											struct _Function_5_3{
												inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb,Array< bool > &inte,::zpp_nape::shape::ZPP_Shape &s1){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2107);
													{
														HX_STACK_LINE(2108)
														Array< bool > ins = Array_obj< bool >::__new();		HX_STACK_VAR(ins,"ins");
														HX_STACK_LINE(2109)
														int ind1 = (int)0;		HX_STACK_VAR(ind1,"ind1");
														HX_STACK_LINE(2110)
														bool total1 = true;		HX_STACK_VAR(total1,"total1");
														HX_STACK_LINE(2111)
														::zpp_nape::geom::ZPP_Vec2 vi1 = null();		HX_STACK_VAR(vi1,"vi1");
														HX_STACK_LINE(2112)
														int vind = (int)0;		HX_STACK_VAR(vind,"vind");
														HX_STACK_LINE(2113)
														{
															HX_STACK_LINE(2114)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = s2->polygon->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(2115)
															while(((cx_ite != null()))){
																HX_STACK_LINE(2116)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(2117)
																{
																	struct _Function_9_1{
																		inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &v,::zpp_nape::shape::ZPP_Shape &s1){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2118);
																			{
																				HX_STACK_LINE(2118)
																				Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																				HX_STACK_LINE(2118)
																				Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																				HX_STACK_LINE(2118)
																				{
																					HX_STACK_LINE(2118)
																					dx = (v->x - s1->circle->worldCOMx);
																					HX_STACK_LINE(2118)
																					dy = (v->y - s1->circle->worldCOMy);
																				}
																				HX_STACK_LINE(2118)
																				return ((dx * dx) + (dy * dy));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(2118)
																	Float dist = _Function_9_1::Block(v,s1);		HX_STACK_VAR(dist,"dist");
																	HX_STACK_LINE(2119)
																	if ((!((ins[ind1] = (dist <= (s1->circle->radius * s1->circle->radius)))))){
																		HX_STACK_LINE(2119)
																		total1 = false;
																	}
																	else{
																		HX_STACK_LINE(2121)
																		vind = ind1;
																		HX_STACK_LINE(2122)
																		vi1 = cx_ite;
																	}
																	HX_STACK_LINE(2124)
																	(ind1)++;
																}
																HX_STACK_LINE(2126)
																cx_ite = cx_ite->next;
															}
														}
														struct _Function_6_1{
															inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2129);
																{
																	HX_STACK_LINE(2130)
																	{
																		HX_STACK_LINE(2130)
																		::zpp_nape::shape::ZPP_Polygon _this = s2->polygon;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(2130)
																		if ((_this->zip_worldCOM)){
																			HX_STACK_LINE(2130)
																			if (((_this->body != null()))){
																				HX_STACK_LINE(2130)
																				_this->zip_worldCOM = false;
																				HX_STACK_LINE(2130)
																				if ((_this->zip_localCOM)){
																					HX_STACK_LINE(2130)
																					_this->zip_localCOM = false;
																					HX_STACK_LINE(2130)
																					if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
																						HX_STACK_LINE(2130)
																						::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
																						HX_STACK_LINE(2130)
																						if (((_this1->lverts->next == null()))){
																							HX_STACK_LINE(2130)
																							hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
																						}
																						HX_STACK_LINE(2130)
																						if (((_this1->lverts->next->next == null()))){
																							HX_STACK_LINE(2130)
																							_this1->localCOMx = _this1->lverts->next->x;
																							HX_STACK_LINE(2130)
																							_this1->localCOMy = _this1->lverts->next->y;
																							HX_STACK_LINE(2130)
																							Dynamic();
																						}
																						else{
																							HX_STACK_LINE(2130)
																							if (((_this1->lverts->next->next->next == null()))){
																								HX_STACK_LINE(2130)
																								{
																									HX_STACK_LINE(2130)
																									_this1->localCOMx = _this1->lverts->next->x;
																									HX_STACK_LINE(2130)
																									_this1->localCOMy = _this1->lverts->next->y;
																									HX_STACK_LINE(2130)
																									{
																									}
																								}
																								HX_STACK_LINE(2130)
																								{
																									HX_STACK_LINE(2130)
																									Float t = 1.0;		HX_STACK_VAR(t,"t");
																									HX_STACK_LINE(2130)
																									hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																									HX_STACK_LINE(2130)
																									hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
																								}
																								HX_STACK_LINE(2130)
																								{
																									HX_STACK_LINE(2130)
																									Float t = 0.5;		HX_STACK_VAR(t,"t");
																									HX_STACK_LINE(2130)
																									hx::MultEq(_this1->localCOMx,t);
																									HX_STACK_LINE(2130)
																									hx::MultEq(_this1->localCOMy,t);
																								}
																							}
																							else{
																								HX_STACK_LINE(2130)
																								{
																									HX_STACK_LINE(2130)
																									_this1->localCOMx = (int)0;
																									HX_STACK_LINE(2130)
																									_this1->localCOMy = (int)0;
																									HX_STACK_LINE(2130)
																									{
																									}
																								}
																								HX_STACK_LINE(2130)
																								Float area = 0.0;		HX_STACK_VAR(area,"area");
																								HX_STACK_LINE(2130)
																								{
																									HX_STACK_LINE(2130)
																									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
																									HX_STACK_LINE(2130)
																									::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																									HX_STACK_LINE(2130)
																									cx_ite = cx_ite->next;
																									HX_STACK_LINE(2130)
																									::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																									HX_STACK_LINE(2130)
																									cx_ite = cx_ite->next;
																									HX_STACK_LINE(2130)
																									while(((cx_ite != null()))){
																										HX_STACK_LINE(2130)
																										::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																										HX_STACK_LINE(2130)
																										{
																											HX_STACK_LINE(2130)
																											hx::AddEq(area,(v->x * ((w->y - u->y))));
																											HX_STACK_LINE(2130)
																											Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																											HX_STACK_LINE(2130)
																											hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																											HX_STACK_LINE(2130)
																											hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																										}
																										HX_STACK_LINE(2130)
																										u = v;
																										HX_STACK_LINE(2130)
																										v = w;
																										HX_STACK_LINE(2130)
																										cx_ite = cx_ite->next;
																									}
																									HX_STACK_LINE(2130)
																									cx_ite = _this1->lverts->next;
																									HX_STACK_LINE(2130)
																									::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																									HX_STACK_LINE(2130)
																									{
																										HX_STACK_LINE(2130)
																										hx::AddEq(area,(v->x * ((w->y - u->y))));
																										HX_STACK_LINE(2130)
																										Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																										HX_STACK_LINE(2130)
																										hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																										HX_STACK_LINE(2130)
																										hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																									}
																									HX_STACK_LINE(2130)
																									u = v;
																									HX_STACK_LINE(2130)
																									v = w;
																									HX_STACK_LINE(2130)
																									cx_ite = cx_ite->next;
																									HX_STACK_LINE(2130)
																									::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																									HX_STACK_LINE(2130)
																									{
																										HX_STACK_LINE(2130)
																										hx::AddEq(area,(v->x * ((w1->y - u->y))));
																										HX_STACK_LINE(2130)
																										Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																										HX_STACK_LINE(2130)
																										hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																										HX_STACK_LINE(2130)
																										hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																									}
																								}
																								HX_STACK_LINE(2130)
																								area = (Float((int)1) / Float((((int)3 * area))));
																								HX_STACK_LINE(2130)
																								{
																									HX_STACK_LINE(2130)
																									Float t = area;		HX_STACK_VAR(t,"t");
																									HX_STACK_LINE(2130)
																									hx::MultEq(_this1->localCOMx,t);
																									HX_STACK_LINE(2130)
																									hx::MultEq(_this1->localCOMy,t);
																								}
																							}
																						}
																					}
																				}
																				HX_STACK_LINE(2130)
																				{
																					HX_STACK_LINE(2130)
																					::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
																					HX_STACK_LINE(2130)
																					if ((_this1->zip_axis)){
																						HX_STACK_LINE(2130)
																						_this1->zip_axis = false;
																						HX_STACK_LINE(2130)
																						{
																							HX_STACK_LINE(2130)
																							_this1->axisx = ::Math_obj::sin(_this1->rot);
																							HX_STACK_LINE(2130)
																							_this1->axisy = ::Math_obj::cos(_this1->rot);
																							HX_STACK_LINE(2130)
																							Dynamic();
																						}
																					}
																				}
																				HX_STACK_LINE(2130)
																				{
																					HX_STACK_LINE(2130)
																					_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
																					HX_STACK_LINE(2130)
																					_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
																				}
																			}
																		}
																	}
																	HX_STACK_LINE(2131)
																	{
																		HX_STACK_LINE(2131)
																		arb->overlap = s2->polygon->area;
																		HX_STACK_LINE(2131)
																		{
																			HX_STACK_LINE(2131)
																			arb->centroidx = s2->polygon->worldCOMx;
																			HX_STACK_LINE(2131)
																			arb->centroidy = s2->polygon->worldCOMy;
																			HX_STACK_LINE(2131)
																			Dynamic();
																		}
																	}
																	HX_STACK_LINE(2132)
																	return true;
																}
																return null();
															}
														};
														struct _Function_6_2{
															inline static bool Block( int &vind,::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb,::zpp_nape::geom::ZPP_Vec2 &vi1,Array< bool > &inte,Array< bool > &ins,::zpp_nape::shape::ZPP_Shape &s1){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2134);
																{
																	HX_STACK_LINE(2135)
																	while((!(((::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head == null()))))){
																		HX_STACK_LINE(2136)
																		::zpp_nape::geom::ZPP_Vec2 p = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->pop_unsafe();		HX_STACK_VAR(p,"p");
																		HX_STACK_LINE(2137)
																		if ((!(p->_inuse))){
																			HX_STACK_LINE(2138)
																			::zpp_nape::geom::ZPP_Vec2 o = p;		HX_STACK_VAR(o,"o");
																			HX_STACK_LINE(2147)
																			{
																				HX_STACK_LINE(2147)
																				if (((o->outer != null()))){
																					HX_STACK_LINE(2147)
																					o->outer->zpp_inner = null();
																					HX_STACK_LINE(2147)
																					o->outer = null();
																				}
																				HX_STACK_LINE(2147)
																				o->_isimmutable = null();
																				HX_STACK_LINE(2147)
																				o->_validate = null();
																				HX_STACK_LINE(2147)
																				o->_invalidate = null();
																			}
																			HX_STACK_LINE(2148)
																			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																			HX_STACK_LINE(2149)
																			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
																		}
																	}
																	HX_STACK_LINE(2155)
																	::zpp_nape::geom::ZPP_Collide_obj::flowsegs->clear();
																	HX_STACK_LINE(2156)
																	::zpp_nape::geom::ZPP_Vec2 fst_vert = null();		HX_STACK_VAR(fst_vert,"fst_vert");
																	HX_STACK_LINE(2157)
																	int state = (int)1;		HX_STACK_VAR(state,"state");
																	HX_STACK_LINE(2158)
																	if (((vi1 == null()))){
																		HX_STACK_LINE(2159)
																		vi1 = s2->polygon->gverts->next;
																		HX_STACK_LINE(2160)
																		state = (int)2;
																	}
																	else{
																		HX_STACK_LINE(2162)
																		::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(fst_vert = vi1);
																	}
																	HX_STACK_LINE(2163)
																	while(((state != (int)0))){
																		HX_STACK_LINE(2163)
																		if (((state == (int)1))){
																			HX_STACK_LINE(2165)
																			vi1 = vi1->next;
																			HX_STACK_LINE(2166)
																			if (((vi1 == null()))){
																				HX_STACK_LINE(2166)
																				vi1 = s2->polygon->gverts->next;
																			}
																			HX_STACK_LINE(2167)
																			(vind)++;
																			HX_STACK_LINE(2168)
																			if (((vind >= s2->polygon->edgeCnt))){
																				HX_STACK_LINE(2168)
																				vind = (int)0;
																			}
																			HX_STACK_LINE(2169)
																			if ((ins->__get(vind))){
																				struct _Function_10_1{
																					inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &vi1,::zpp_nape::geom::ZPP_Vec2 &fst_vert){
																						HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2170);
																						{
																							HX_STACK_LINE(2170)
																							Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																							HX_STACK_LINE(2170)
																							Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																							HX_STACK_LINE(2170)
																							{
																								HX_STACK_LINE(2170)
																								dx = (fst_vert->x - vi1->x);
																								HX_STACK_LINE(2170)
																								dy = (fst_vert->y - vi1->y);
																							}
																							HX_STACK_LINE(2170)
																							return ((dx * dx) + (dy * dy));
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(2170)
																				if (((_Function_10_1::Block(vi1,fst_vert) < ::nape::Config_obj::epsilon))){
																					HX_STACK_LINE(2170)
																					break;
																				}
																				HX_STACK_LINE(2171)
																				::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(vi1);
																			}
																			else{
																				HX_STACK_LINE(2174)
																				::zpp_nape::geom::ZPP_Vec2 u = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt;		HX_STACK_VAR(u,"u");
																				HX_STACK_LINE(2175)
																				::zpp_nape::geom::ZPP_Vec2 v = vi1;		HX_STACK_VAR(v,"v");
																				struct _Function_10_1{
																					inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &v,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::shape::ZPP_Shape &s1){
																						HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2176);
																						{
																							HX_STACK_LINE(2177)
																							Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
																							HX_STACK_LINE(2178)
																							Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
																							HX_STACK_LINE(2179)
																							{
																								HX_STACK_LINE(2180)
																								vx = (v->x - u->x);
																								HX_STACK_LINE(2181)
																								vy = (v->y - u->y);
																							}
																							HX_STACK_LINE(2183)
																							Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
																							HX_STACK_LINE(2184)
																							Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
																							HX_STACK_LINE(2185)
																							{
																								HX_STACK_LINE(2186)
																								qx = (u->x - s1->circle->worldCOMx);
																								HX_STACK_LINE(2187)
																								qy = (u->y - s1->circle->worldCOMy);
																							}
																							HX_STACK_LINE(2189)
																							Float A = ((vx * vx) + (vy * vy));		HX_STACK_VAR(A,"A");
																							HX_STACK_LINE(2190)
																							Float B = ((int)2 * (((qx * vx) + (qy * vy))));		HX_STACK_VAR(B,"B");
																							HX_STACK_LINE(2191)
																							Float C = (((qx * qx) + (qy * qy)) - (s1->circle->radius * s1->circle->radius));		HX_STACK_VAR(C,"C");
																							HX_STACK_LINE(2192)
																							Float D = ::Math_obj::sqrt(((B * B) - (((int)4 * A) * C)));		HX_STACK_VAR(D,"D");
																							HX_STACK_LINE(2193)
																							A = (Float((int)1) / Float((((int)2 * A))));
																							HX_STACK_LINE(2194)
																							Float t = (((-(B) - D)) * A);		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(2195)
																							return (  (((t < ::nape::Config_obj::epsilon))) ? Float((((-(B) + D)) * A)) : Float(t) );
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(2176)
																				Float tval = _Function_10_1::Block(v,u,s1);		HX_STACK_VAR(tval,"tval");
																				HX_STACK_LINE(2198)
																				Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
																				HX_STACK_LINE(2199)
																				Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
																				HX_STACK_LINE(2200)
																				{
																					HX_STACK_LINE(2201)
																					Float T = tval;		HX_STACK_VAR(T,"T");
																					HX_STACK_LINE(2210)
																					cx = (u->x + (((v->x - u->x)) * T));
																					HX_STACK_LINE(2211)
																					cy = (u->y + (((v->y - u->y)) * T));
																				}
																				struct _Function_10_2{
																					inline static Float Block( Float &cx,Float &cy,::zpp_nape::geom::ZPP_Vec2 &fst_vert){
																						HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2213);
																						{
																							HX_STACK_LINE(2213)
																							Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																							HX_STACK_LINE(2213)
																							Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																							HX_STACK_LINE(2213)
																							{
																								HX_STACK_LINE(2213)
																								dx = (fst_vert->x - cx);
																								HX_STACK_LINE(2213)
																								dy = (fst_vert->y - cy);
																							}
																							HX_STACK_LINE(2213)
																							return ((dx * dx) + (dy * dy));
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(2213)
																				if (((_Function_10_2::Block(cx,cy,fst_vert) < ::nape::Config_obj::epsilon))){
																					HX_STACK_LINE(2213)
																					break;
																				}
																				struct _Function_10_3{
																					inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &cx,Float &cy){
																						HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2214);
																						{
																							HX_STACK_LINE(2214)
																							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																							HX_STACK_LINE(2214)
																							::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																							HX_STACK_LINE(2214)
																							{
																								HX_STACK_LINE(2214)
																								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																									HX_STACK_LINE(2214)
																									ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																								}
																								else{
																									HX_STACK_LINE(2214)
																									ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																									HX_STACK_LINE(2214)
																									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																									HX_STACK_LINE(2214)
																									ret->next = null();
																								}
																								HX_STACK_LINE(2214)
																								ret->weak = false;
																							}
																							HX_STACK_LINE(2214)
																							ret->_immutable = immutable;
																							HX_STACK_LINE(2214)
																							{
																								HX_STACK_LINE(2214)
																								ret->x = cx;
																								HX_STACK_LINE(2214)
																								ret->y = cy;
																								HX_STACK_LINE(2214)
																								{
																								}
																							}
																							HX_STACK_LINE(2214)
																							return ret;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(2214)
																				::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(_Function_10_3::Block(cx,cy));
																				HX_STACK_LINE(2215)
																				state = (int)2;
																			}
																		}
																		else{
																			HX_STACK_LINE(2218)
																			if (((state == (int)2))){
																				HX_STACK_LINE(2219)
																				::zpp_nape::geom::ZPP_Vec2 vi2 = vi1->next;		HX_STACK_VAR(vi2,"vi2");
																				HX_STACK_LINE(2220)
																				if (((vi2 == null()))){
																					HX_STACK_LINE(2220)
																					vi2 = s2->polygon->gverts->next;
																				}
																				HX_STACK_LINE(2221)
																				::zpp_nape::geom::ZPP_Vec2 u = vi1;		HX_STACK_VAR(u,"u");
																				HX_STACK_LINE(2222)
																				state = (int)0;
																				HX_STACK_LINE(2223)
																				{
																					HX_STACK_LINE(2224)
																					::zpp_nape::geom::ZPP_Vec2 beg_ite = vi2;		HX_STACK_VAR(beg_ite,"beg_ite");
																					HX_STACK_LINE(2225)
																					::zpp_nape::geom::ZPP_Vec2 cx_ite = vi2;		HX_STACK_VAR(cx_ite,"cx_ite");
																					HX_STACK_LINE(2226)
																					do{
																						HX_STACK_LINE(2227)
																						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																						HX_STACK_LINE(2228)
																						{
																							HX_STACK_LINE(2229)
																							int vind2 = (vind + (int)1);		HX_STACK_VAR(vind2,"vind2");
																							HX_STACK_LINE(2230)
																							if (((vind2 == s2->polygon->edgeCnt))){
																								HX_STACK_LINE(2230)
																								vind2 = (int)0;
																							}
																							HX_STACK_LINE(2231)
																							if ((inte->__get(vind))){
																								HX_STACK_LINE(2231)
																								if ((ins->__get(vind2))){
																									struct _Function_15_1{
																										inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &v,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::shape::ZPP_Shape &s1){
																											HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2233);
																											{
																												HX_STACK_LINE(2234)
																												Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
																												HX_STACK_LINE(2235)
																												Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
																												HX_STACK_LINE(2236)
																												{
																													HX_STACK_LINE(2237)
																													vx = (v->x - u->x);
																													HX_STACK_LINE(2238)
																													vy = (v->y - u->y);
																												}
																												HX_STACK_LINE(2240)
																												Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
																												HX_STACK_LINE(2241)
																												Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
																												HX_STACK_LINE(2242)
																												{
																													HX_STACK_LINE(2243)
																													qx = (u->x - s1->circle->worldCOMx);
																													HX_STACK_LINE(2244)
																													qy = (u->y - s1->circle->worldCOMy);
																												}
																												HX_STACK_LINE(2246)
																												Float A = ((vx * vx) + (vy * vy));		HX_STACK_VAR(A,"A");
																												HX_STACK_LINE(2247)
																												Float B = ((int)2 * (((qx * vx) + (qy * vy))));		HX_STACK_VAR(B,"B");
																												HX_STACK_LINE(2248)
																												Float C = (((qx * qx) + (qy * qy)) - (s1->circle->radius * s1->circle->radius));		HX_STACK_VAR(C,"C");
																												HX_STACK_LINE(2249)
																												Float D = ::Math_obj::sqrt(((B * B) - (((int)4 * A) * C)));		HX_STACK_VAR(D,"D");
																												HX_STACK_LINE(2250)
																												A = (Float((int)1) / Float((((int)2 * A))));
																												HX_STACK_LINE(2251)
																												Float t = (((-(B) - D)) * A);		HX_STACK_VAR(t,"t");
																												HX_STACK_LINE(2252)
																												return (  (((t < ::nape::Config_obj::epsilon))) ? Float((((-(B) + D)) * A)) : Float(t) );
																											}
																											return null();
																										}
																									};
																									HX_STACK_LINE(2233)
																									Float tval = _Function_15_1::Block(v,u,s1);		HX_STACK_VAR(tval,"tval");
																									HX_STACK_LINE(2255)
																									Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
																									HX_STACK_LINE(2256)
																									Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
																									HX_STACK_LINE(2257)
																									{
																										HX_STACK_LINE(2258)
																										Float T = tval;		HX_STACK_VAR(T,"T");
																										HX_STACK_LINE(2267)
																										cx = (u->x + (((v->x - u->x)) * T));
																										HX_STACK_LINE(2268)
																										cy = (u->y + (((v->y - u->y)) * T));
																									}
																									struct _Function_15_2{
																										inline static Float Block( Float &cx,Float &cy,::zpp_nape::geom::ZPP_Vec2 &fst_vert){
																											HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2270);
																											{
																												HX_STACK_LINE(2270)
																												Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																												HX_STACK_LINE(2270)
																												Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																												HX_STACK_LINE(2270)
																												{
																													HX_STACK_LINE(2270)
																													dx = (fst_vert->x - cx);
																													HX_STACK_LINE(2270)
																													dy = (fst_vert->y - cy);
																												}
																												HX_STACK_LINE(2270)
																												return ((dx * dx) + (dy * dy));
																											}
																											return null();
																										}
																									};
																									HX_STACK_LINE(2270)
																									if (((_Function_15_2::Block(cx,cy,fst_vert) < ::nape::Config_obj::epsilon))){
																										HX_STACK_LINE(2271)
																										state = (int)0;
																										HX_STACK_LINE(2272)
																										{
																											HX_STACK_LINE(2273)
																											cx_ite = beg_ite;
																											HX_STACK_LINE(2274)
																											break;
																										}
																									}
																									struct _Function_15_3{
																										inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &cx,Float &cy){
																											HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2277);
																											{
																												HX_STACK_LINE(2277)
																												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																												HX_STACK_LINE(2277)
																												::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																												HX_STACK_LINE(2277)
																												{
																													HX_STACK_LINE(2277)
																													if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																														HX_STACK_LINE(2277)
																														ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																													}
																													else{
																														HX_STACK_LINE(2277)
																														ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																														HX_STACK_LINE(2277)
																														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																														HX_STACK_LINE(2277)
																														ret->next = null();
																													}
																													HX_STACK_LINE(2277)
																													ret->weak = false;
																												}
																												HX_STACK_LINE(2277)
																												ret->_immutable = immutable;
																												HX_STACK_LINE(2277)
																												{
																													HX_STACK_LINE(2277)
																													ret->x = cx;
																													HX_STACK_LINE(2277)
																													ret->y = cy;
																													HX_STACK_LINE(2277)
																													{
																													}
																												}
																												HX_STACK_LINE(2277)
																												return ret;
																											}
																											return null();
																										}
																									};
																									HX_STACK_LINE(2277)
																									::zpp_nape::geom::ZPP_Vec2 cp = _Function_15_3::Block(cx,cy);		HX_STACK_VAR(cp,"cp");
																									HX_STACK_LINE(2278)
																									::zpp_nape::geom::ZPP_Collide_obj::flowsegs->add(::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt);
																									HX_STACK_LINE(2279)
																									::zpp_nape::geom::ZPP_Collide_obj::flowsegs->add(cp);
																									HX_STACK_LINE(2280)
																									::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(cp);
																									HX_STACK_LINE(2281)
																									state = (int)1;
																									HX_STACK_LINE(2282)
																									{
																										HX_STACK_LINE(2283)
																										cx_ite = beg_ite;
																										HX_STACK_LINE(2284)
																										break;
																									}
																								}
																								else{
																									HX_STACK_LINE(2288)
																									Float t0 = 0.0;		HX_STACK_VAR(t0,"t0");
																									HX_STACK_LINE(2289)
																									Float t1 = 0.0;		HX_STACK_VAR(t1,"t1");
																									struct _Function_15_1{
																										inline static bool Block( Float &t1,::zpp_nape::geom::ZPP_Vec2 &v,Float &t0,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::shape::ZPP_Shape &s1){
																											HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2290);
																											{
																												HX_STACK_LINE(2291)
																												Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
																												HX_STACK_LINE(2292)
																												Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
																												HX_STACK_LINE(2293)
																												{
																													HX_STACK_LINE(2294)
																													vx = (v->x - u->x);
																													HX_STACK_LINE(2295)
																													vy = (v->y - u->y);
																												}
																												HX_STACK_LINE(2297)
																												Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
																												HX_STACK_LINE(2298)
																												Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
																												HX_STACK_LINE(2299)
																												{
																													HX_STACK_LINE(2300)
																													qx = (u->x - s1->circle->worldCOMx);
																													HX_STACK_LINE(2301)
																													qy = (u->y - s1->circle->worldCOMy);
																												}
																												HX_STACK_LINE(2303)
																												Float A = ((vx * vx) + (vy * vy));		HX_STACK_VAR(A,"A");
																												HX_STACK_LINE(2304)
																												Float B = ((int)2 * (((qx * vx) + (qy * vy))));		HX_STACK_VAR(B,"B");
																												HX_STACK_LINE(2305)
																												Float C = (((qx * qx) + (qy * qy)) - (s1->circle->radius * s1->circle->radius));		HX_STACK_VAR(C,"C");
																												HX_STACK_LINE(2306)
																												Float D = ((B * B) - (((int)4 * A) * C));		HX_STACK_VAR(D,"D");
																												struct _Function_16_1{
																													inline static bool Block( Float &t1,Float &B,Float &D,Float &A,Float &t0){
																														HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2307);
																														{
																															HX_STACK_LINE(2308)
																															if (((D < (int)0))){
																																HX_STACK_LINE(2308)
																																t0 = 10.0;
																															}
																															else{
																																HX_STACK_LINE(2309)
																																t0 = t1 = (Float(-(B)) / Float((((int)2 * A))));
																															}
																															HX_STACK_LINE(2310)
																															return false;
																														}
																														return null();
																													}
																												};
																												struct _Function_16_2{
																													inline static bool Block( Float &t1,Float &B,Float &D,Float &A,Float &t0){
																														HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2312);
																														{
																															HX_STACK_LINE(2313)
																															D = ::Math_obj::sqrt(D);
																															HX_STACK_LINE(2314)
																															A = (Float((int)1) / Float((((int)2 * A))));
																															HX_STACK_LINE(2315)
																															t0 = (((-(B) - D)) * A);
																															HX_STACK_LINE(2316)
																															t1 = (((-(B) + D)) * A);
																															HX_STACK_LINE(2317)
																															return true;
																														}
																														return null();
																													}
																												};
																												HX_STACK_LINE(2307)
																												return (  ((((D * D) < ::nape::Config_obj::epsilon))) ? bool(_Function_16_1::Block(t1,B,D,A,t0)) : bool(_Function_16_2::Block(t1,B,D,A,t0)) );
																											}
																											return null();
																										}
																									};
																									HX_STACK_LINE(2290)
																									bool two = _Function_15_1::Block(t1,v,t0,u,s1);		HX_STACK_VAR(two,"two");
																									HX_STACK_LINE(2320)
																									if (((bool((t0 < ((int)1 - ::nape::Config_obj::epsilon))) && bool((t1 > ::nape::Config_obj::epsilon))))){
																										HX_STACK_LINE(2321)
																										Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
																										HX_STACK_LINE(2322)
																										Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
																										HX_STACK_LINE(2323)
																										{
																											HX_STACK_LINE(2324)
																											Float T = t0;		HX_STACK_VAR(T,"T");
																											HX_STACK_LINE(2333)
																											cx = (u->x + (((v->x - u->x)) * T));
																											HX_STACK_LINE(2334)
																											cy = (u->y + (((v->y - u->y)) * T));
																										}
																										struct _Function_16_1{
																											inline static Float Block( Float &cx,Float &cy,::zpp_nape::geom::ZPP_Vec2 &fst_vert){
																												HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2336);
																												{
																													HX_STACK_LINE(2336)
																													Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																													HX_STACK_LINE(2336)
																													Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																													HX_STACK_LINE(2336)
																													{
																														HX_STACK_LINE(2336)
																														dx = (fst_vert->x - cx);
																														HX_STACK_LINE(2336)
																														dy = (fst_vert->y - cy);
																													}
																													HX_STACK_LINE(2336)
																													return ((dx * dx) + (dy * dy));
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(2336)
																										if (((bool((fst_vert != null())) && bool((_Function_16_1::Block(cx,cy,fst_vert) < ::nape::Config_obj::epsilon))))){
																											HX_STACK_LINE(2337)
																											state = (int)0;
																											HX_STACK_LINE(2338)
																											{
																												HX_STACK_LINE(2339)
																												cx_ite = beg_ite;
																												HX_STACK_LINE(2340)
																												break;
																											}
																										}
																										struct _Function_16_2{
																											inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &cx,Float &cy){
																												HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2343);
																												{
																													HX_STACK_LINE(2343)
																													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																													HX_STACK_LINE(2343)
																													::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																													HX_STACK_LINE(2343)
																													{
																														HX_STACK_LINE(2343)
																														if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																															HX_STACK_LINE(2343)
																															ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																														}
																														else{
																															HX_STACK_LINE(2343)
																															ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																															HX_STACK_LINE(2343)
																															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																															HX_STACK_LINE(2343)
																															ret->next = null();
																														}
																														HX_STACK_LINE(2343)
																														ret->weak = false;
																													}
																													HX_STACK_LINE(2343)
																													ret->_immutable = immutable;
																													HX_STACK_LINE(2343)
																													{
																														HX_STACK_LINE(2343)
																														ret->x = cx;
																														HX_STACK_LINE(2343)
																														ret->y = cy;
																														HX_STACK_LINE(2343)
																														{
																														}
																													}
																													HX_STACK_LINE(2343)
																													return ret;
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(2343)
																										::zpp_nape::geom::ZPP_Vec2 cp = _Function_16_2::Block(cx,cy);		HX_STACK_VAR(cp,"cp");
																										HX_STACK_LINE(2344)
																										if ((!(((::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head == null()))))){
																											HX_STACK_LINE(2345)
																											::zpp_nape::geom::ZPP_Collide_obj::flowsegs->add(::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt);
																											HX_STACK_LINE(2346)
																											::zpp_nape::geom::ZPP_Collide_obj::flowsegs->add(cp);
																										}
																										HX_STACK_LINE(2348)
																										::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(cp);
																										HX_STACK_LINE(2349)
																										if (((fst_vert == null()))){
																											HX_STACK_LINE(2349)
																											fst_vert = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt;
																										}
																										HX_STACK_LINE(2350)
																										if ((two)){
																											HX_STACK_LINE(2351)
																											Float cx1 = 0.0;		HX_STACK_VAR(cx1,"cx1");
																											HX_STACK_LINE(2352)
																											Float cy1 = 0.0;		HX_STACK_VAR(cy1,"cy1");
																											HX_STACK_LINE(2353)
																											{
																												HX_STACK_LINE(2354)
																												Float T = t1;		HX_STACK_VAR(T,"T");
																												HX_STACK_LINE(2363)
																												cx1 = (u->x + (((v->x - u->x)) * T));
																												HX_STACK_LINE(2364)
																												cy1 = (u->y + (((v->y - u->y)) * T));
																											}
																											struct _Function_17_1{
																												inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &cy1,Float &cx1){
																													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2366);
																													{
																														HX_STACK_LINE(2366)
																														bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																														HX_STACK_LINE(2366)
																														::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																														HX_STACK_LINE(2366)
																														{
																															HX_STACK_LINE(2366)
																															if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																																HX_STACK_LINE(2366)
																																ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																															}
																															else{
																																HX_STACK_LINE(2366)
																																ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																																HX_STACK_LINE(2366)
																																::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																																HX_STACK_LINE(2366)
																																ret->next = null();
																															}
																															HX_STACK_LINE(2366)
																															ret->weak = false;
																														}
																														HX_STACK_LINE(2366)
																														ret->_immutable = immutable;
																														HX_STACK_LINE(2366)
																														{
																															HX_STACK_LINE(2366)
																															ret->x = cx1;
																															HX_STACK_LINE(2366)
																															ret->y = cy1;
																															HX_STACK_LINE(2366)
																															{
																															}
																														}
																														HX_STACK_LINE(2366)
																														return ret;
																													}
																													return null();
																												}
																											};
																											HX_STACK_LINE(2366)
																											::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(_Function_17_1::Block(cy1,cx1));
																										}
																									}
																								}
																							}
																							HX_STACK_LINE(2371)
																							u = v;
																							HX_STACK_LINE(2372)
																							vi1 = cx_ite;
																							HX_STACK_LINE(2373)
																							vind = vind2;
																						}
																						HX_STACK_LINE(2375)
																						cx_ite = cx_ite->next;
																						HX_STACK_LINE(2376)
																						if (((cx_ite == null()))){
																							HX_STACK_LINE(2376)
																							cx_ite = s2->polygon->gverts->next;
																						}
																					}
while((false));
																					HX_STACK_LINE(2379)
																					while(((cx_ite != beg_ite))){
																						HX_STACK_LINE(2380)
																						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																						HX_STACK_LINE(2381)
																						{
																							HX_STACK_LINE(2382)
																							int vind2 = (vind + (int)1);		HX_STACK_VAR(vind2,"vind2");
																							HX_STACK_LINE(2383)
																							if (((vind2 == s2->polygon->edgeCnt))){
																								HX_STACK_LINE(2383)
																								vind2 = (int)0;
																							}
																							HX_STACK_LINE(2384)
																							if ((inte->__get(vind))){
																								HX_STACK_LINE(2384)
																								if ((ins->__get(vind2))){
																									struct _Function_15_1{
																										inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &v,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::shape::ZPP_Shape &s1){
																											HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2386);
																											{
																												HX_STACK_LINE(2387)
																												Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
																												HX_STACK_LINE(2388)
																												Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
																												HX_STACK_LINE(2389)
																												{
																													HX_STACK_LINE(2390)
																													vx = (v->x - u->x);
																													HX_STACK_LINE(2391)
																													vy = (v->y - u->y);
																												}
																												HX_STACK_LINE(2393)
																												Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
																												HX_STACK_LINE(2394)
																												Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
																												HX_STACK_LINE(2395)
																												{
																													HX_STACK_LINE(2396)
																													qx = (u->x - s1->circle->worldCOMx);
																													HX_STACK_LINE(2397)
																													qy = (u->y - s1->circle->worldCOMy);
																												}
																												HX_STACK_LINE(2399)
																												Float A = ((vx * vx) + (vy * vy));		HX_STACK_VAR(A,"A");
																												HX_STACK_LINE(2400)
																												Float B = ((int)2 * (((qx * vx) + (qy * vy))));		HX_STACK_VAR(B,"B");
																												HX_STACK_LINE(2401)
																												Float C = (((qx * qx) + (qy * qy)) - (s1->circle->radius * s1->circle->radius));		HX_STACK_VAR(C,"C");
																												HX_STACK_LINE(2402)
																												Float D = ::Math_obj::sqrt(((B * B) - (((int)4 * A) * C)));		HX_STACK_VAR(D,"D");
																												HX_STACK_LINE(2403)
																												A = (Float((int)1) / Float((((int)2 * A))));
																												HX_STACK_LINE(2404)
																												Float t = (((-(B) - D)) * A);		HX_STACK_VAR(t,"t");
																												HX_STACK_LINE(2405)
																												return (  (((t < ::nape::Config_obj::epsilon))) ? Float((((-(B) + D)) * A)) : Float(t) );
																											}
																											return null();
																										}
																									};
																									HX_STACK_LINE(2386)
																									Float tval = _Function_15_1::Block(v,u,s1);		HX_STACK_VAR(tval,"tval");
																									HX_STACK_LINE(2408)
																									Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
																									HX_STACK_LINE(2409)
																									Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
																									HX_STACK_LINE(2410)
																									{
																										HX_STACK_LINE(2411)
																										Float T = tval;		HX_STACK_VAR(T,"T");
																										HX_STACK_LINE(2420)
																										cx = (u->x + (((v->x - u->x)) * T));
																										HX_STACK_LINE(2421)
																										cy = (u->y + (((v->y - u->y)) * T));
																									}
																									struct _Function_15_2{
																										inline static Float Block( Float &cx,Float &cy,::zpp_nape::geom::ZPP_Vec2 &fst_vert){
																											HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2423);
																											{
																												HX_STACK_LINE(2423)
																												Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																												HX_STACK_LINE(2423)
																												Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																												HX_STACK_LINE(2423)
																												{
																													HX_STACK_LINE(2423)
																													dx = (fst_vert->x - cx);
																													HX_STACK_LINE(2423)
																													dy = (fst_vert->y - cy);
																												}
																												HX_STACK_LINE(2423)
																												return ((dx * dx) + (dy * dy));
																											}
																											return null();
																										}
																									};
																									HX_STACK_LINE(2423)
																									if (((_Function_15_2::Block(cx,cy,fst_vert) < ::nape::Config_obj::epsilon))){
																										HX_STACK_LINE(2424)
																										state = (int)0;
																										HX_STACK_LINE(2425)
																										{
																											HX_STACK_LINE(2426)
																											cx_ite = beg_ite;
																											HX_STACK_LINE(2427)
																											break;
																										}
																									}
																									struct _Function_15_3{
																										inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &cx,Float &cy){
																											HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2430);
																											{
																												HX_STACK_LINE(2430)
																												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																												HX_STACK_LINE(2430)
																												::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																												HX_STACK_LINE(2430)
																												{
																													HX_STACK_LINE(2430)
																													if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																														HX_STACK_LINE(2430)
																														ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																													}
																													else{
																														HX_STACK_LINE(2430)
																														ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																														HX_STACK_LINE(2430)
																														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																														HX_STACK_LINE(2430)
																														ret->next = null();
																													}
																													HX_STACK_LINE(2430)
																													ret->weak = false;
																												}
																												HX_STACK_LINE(2430)
																												ret->_immutable = immutable;
																												HX_STACK_LINE(2430)
																												{
																													HX_STACK_LINE(2430)
																													ret->x = cx;
																													HX_STACK_LINE(2430)
																													ret->y = cy;
																													HX_STACK_LINE(2430)
																													{
																													}
																												}
																												HX_STACK_LINE(2430)
																												return ret;
																											}
																											return null();
																										}
																									};
																									HX_STACK_LINE(2430)
																									::zpp_nape::geom::ZPP_Vec2 cp = _Function_15_3::Block(cx,cy);		HX_STACK_VAR(cp,"cp");
																									HX_STACK_LINE(2431)
																									::zpp_nape::geom::ZPP_Collide_obj::flowsegs->add(::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt);
																									HX_STACK_LINE(2432)
																									::zpp_nape::geom::ZPP_Collide_obj::flowsegs->add(cp);
																									HX_STACK_LINE(2433)
																									::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(cp);
																									HX_STACK_LINE(2434)
																									state = (int)1;
																									HX_STACK_LINE(2435)
																									{
																										HX_STACK_LINE(2436)
																										cx_ite = beg_ite;
																										HX_STACK_LINE(2437)
																										break;
																									}
																								}
																								else{
																									HX_STACK_LINE(2441)
																									Float t0 = 0.0;		HX_STACK_VAR(t0,"t0");
																									HX_STACK_LINE(2442)
																									Float t1 = 0.0;		HX_STACK_VAR(t1,"t1");
																									struct _Function_15_1{
																										inline static bool Block( Float &t1,::zpp_nape::geom::ZPP_Vec2 &v,Float &t0,::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::shape::ZPP_Shape &s1){
																											HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2443);
																											{
																												HX_STACK_LINE(2444)
																												Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
																												HX_STACK_LINE(2445)
																												Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
																												HX_STACK_LINE(2446)
																												{
																													HX_STACK_LINE(2447)
																													vx = (v->x - u->x);
																													HX_STACK_LINE(2448)
																													vy = (v->y - u->y);
																												}
																												HX_STACK_LINE(2450)
																												Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
																												HX_STACK_LINE(2451)
																												Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
																												HX_STACK_LINE(2452)
																												{
																													HX_STACK_LINE(2453)
																													qx = (u->x - s1->circle->worldCOMx);
																													HX_STACK_LINE(2454)
																													qy = (u->y - s1->circle->worldCOMy);
																												}
																												HX_STACK_LINE(2456)
																												Float A = ((vx * vx) + (vy * vy));		HX_STACK_VAR(A,"A");
																												HX_STACK_LINE(2457)
																												Float B = ((int)2 * (((qx * vx) + (qy * vy))));		HX_STACK_VAR(B,"B");
																												HX_STACK_LINE(2458)
																												Float C = (((qx * qx) + (qy * qy)) - (s1->circle->radius * s1->circle->radius));		HX_STACK_VAR(C,"C");
																												HX_STACK_LINE(2459)
																												Float D = ((B * B) - (((int)4 * A) * C));		HX_STACK_VAR(D,"D");
																												struct _Function_16_1{
																													inline static bool Block( Float &t1,Float &B,Float &D,Float &A,Float &t0){
																														HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2460);
																														{
																															HX_STACK_LINE(2461)
																															if (((D < (int)0))){
																																HX_STACK_LINE(2461)
																																t0 = 10.0;
																															}
																															else{
																																HX_STACK_LINE(2462)
																																t0 = t1 = (Float(-(B)) / Float((((int)2 * A))));
																															}
																															HX_STACK_LINE(2463)
																															return false;
																														}
																														return null();
																													}
																												};
																												struct _Function_16_2{
																													inline static bool Block( Float &t1,Float &B,Float &D,Float &A,Float &t0){
																														HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2465);
																														{
																															HX_STACK_LINE(2466)
																															D = ::Math_obj::sqrt(D);
																															HX_STACK_LINE(2467)
																															A = (Float((int)1) / Float((((int)2 * A))));
																															HX_STACK_LINE(2468)
																															t0 = (((-(B) - D)) * A);
																															HX_STACK_LINE(2469)
																															t1 = (((-(B) + D)) * A);
																															HX_STACK_LINE(2470)
																															return true;
																														}
																														return null();
																													}
																												};
																												HX_STACK_LINE(2460)
																												return (  ((((D * D) < ::nape::Config_obj::epsilon))) ? bool(_Function_16_1::Block(t1,B,D,A,t0)) : bool(_Function_16_2::Block(t1,B,D,A,t0)) );
																											}
																											return null();
																										}
																									};
																									HX_STACK_LINE(2443)
																									bool two = _Function_15_1::Block(t1,v,t0,u,s1);		HX_STACK_VAR(two,"two");
																									HX_STACK_LINE(2473)
																									if (((bool((t0 < ((int)1 - ::nape::Config_obj::epsilon))) && bool((t1 > ::nape::Config_obj::epsilon))))){
																										HX_STACK_LINE(2474)
																										Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
																										HX_STACK_LINE(2475)
																										Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
																										HX_STACK_LINE(2476)
																										{
																											HX_STACK_LINE(2477)
																											Float T = t0;		HX_STACK_VAR(T,"T");
																											HX_STACK_LINE(2486)
																											cx = (u->x + (((v->x - u->x)) * T));
																											HX_STACK_LINE(2487)
																											cy = (u->y + (((v->y - u->y)) * T));
																										}
																										struct _Function_16_1{
																											inline static Float Block( Float &cx,Float &cy,::zpp_nape::geom::ZPP_Vec2 &fst_vert){
																												HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2489);
																												{
																													HX_STACK_LINE(2489)
																													Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																													HX_STACK_LINE(2489)
																													Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																													HX_STACK_LINE(2489)
																													{
																														HX_STACK_LINE(2489)
																														dx = (fst_vert->x - cx);
																														HX_STACK_LINE(2489)
																														dy = (fst_vert->y - cy);
																													}
																													HX_STACK_LINE(2489)
																													return ((dx * dx) + (dy * dy));
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(2489)
																										if (((bool((fst_vert != null())) && bool((_Function_16_1::Block(cx,cy,fst_vert) < ::nape::Config_obj::epsilon))))){
																											HX_STACK_LINE(2490)
																											state = (int)0;
																											HX_STACK_LINE(2491)
																											{
																												HX_STACK_LINE(2492)
																												cx_ite = beg_ite;
																												HX_STACK_LINE(2493)
																												break;
																											}
																										}
																										struct _Function_16_2{
																											inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &cx,Float &cy){
																												HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2496);
																												{
																													HX_STACK_LINE(2496)
																													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																													HX_STACK_LINE(2496)
																													::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																													HX_STACK_LINE(2496)
																													{
																														HX_STACK_LINE(2496)
																														if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																															HX_STACK_LINE(2496)
																															ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																														}
																														else{
																															HX_STACK_LINE(2496)
																															ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																															HX_STACK_LINE(2496)
																															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																															HX_STACK_LINE(2496)
																															ret->next = null();
																														}
																														HX_STACK_LINE(2496)
																														ret->weak = false;
																													}
																													HX_STACK_LINE(2496)
																													ret->_immutable = immutable;
																													HX_STACK_LINE(2496)
																													{
																														HX_STACK_LINE(2496)
																														ret->x = cx;
																														HX_STACK_LINE(2496)
																														ret->y = cy;
																														HX_STACK_LINE(2496)
																														{
																														}
																													}
																													HX_STACK_LINE(2496)
																													return ret;
																												}
																												return null();
																											}
																										};
																										HX_STACK_LINE(2496)
																										::zpp_nape::geom::ZPP_Vec2 cp = _Function_16_2::Block(cx,cy);		HX_STACK_VAR(cp,"cp");
																										HX_STACK_LINE(2497)
																										if ((!(((::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head == null()))))){
																											HX_STACK_LINE(2498)
																											::zpp_nape::geom::ZPP_Collide_obj::flowsegs->add(::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt);
																											HX_STACK_LINE(2499)
																											::zpp_nape::geom::ZPP_Collide_obj::flowsegs->add(cp);
																										}
																										HX_STACK_LINE(2501)
																										::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(cp);
																										HX_STACK_LINE(2502)
																										if (((fst_vert == null()))){
																											HX_STACK_LINE(2502)
																											fst_vert = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt;
																										}
																										HX_STACK_LINE(2503)
																										if ((two)){
																											HX_STACK_LINE(2504)
																											Float cx1 = 0.0;		HX_STACK_VAR(cx1,"cx1");
																											HX_STACK_LINE(2505)
																											Float cy1 = 0.0;		HX_STACK_VAR(cy1,"cy1");
																											HX_STACK_LINE(2506)
																											{
																												HX_STACK_LINE(2507)
																												Float T = t1;		HX_STACK_VAR(T,"T");
																												HX_STACK_LINE(2516)
																												cx1 = (u->x + (((v->x - u->x)) * T));
																												HX_STACK_LINE(2517)
																												cy1 = (u->y + (((v->y - u->y)) * T));
																											}
																											struct _Function_17_1{
																												inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &cy1,Float &cx1){
																													HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2519);
																													{
																														HX_STACK_LINE(2519)
																														bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																														HX_STACK_LINE(2519)
																														::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
																														HX_STACK_LINE(2519)
																														{
																															HX_STACK_LINE(2519)
																															if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																																HX_STACK_LINE(2519)
																																ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																															}
																															else{
																																HX_STACK_LINE(2519)
																																ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																																HX_STACK_LINE(2519)
																																::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
																																HX_STACK_LINE(2519)
																																ret->next = null();
																															}
																															HX_STACK_LINE(2519)
																															ret->weak = false;
																														}
																														HX_STACK_LINE(2519)
																														ret->_immutable = immutable;
																														HX_STACK_LINE(2519)
																														{
																															HX_STACK_LINE(2519)
																															ret->x = cx1;
																															HX_STACK_LINE(2519)
																															ret->y = cy1;
																															HX_STACK_LINE(2519)
																															{
																															}
																														}
																														HX_STACK_LINE(2519)
																														return ret;
																													}
																													return null();
																												}
																											};
																											HX_STACK_LINE(2519)
																											::zpp_nape::geom::ZPP_Collide_obj::flowpoly->add(_Function_17_1::Block(cy1,cx1));
																										}
																									}
																								}
																							}
																							HX_STACK_LINE(2524)
																							u = v;
																							HX_STACK_LINE(2525)
																							vi1 = cx_ite;
																							HX_STACK_LINE(2526)
																							vind = vind2;
																						}
																						HX_STACK_LINE(2528)
																						cx_ite = cx_ite->next;
																						HX_STACK_LINE(2529)
																						if (((cx_ite == null()))){
																							HX_STACK_LINE(2529)
																							cx_ite = s2->polygon->gverts->next;
																						}
																					}
																				}
																			}
																		}
																	}
																	struct _Function_7_1{
																		inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb,::zpp_nape::shape::ZPP_Shape &s1){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2537);
																			{
																				HX_STACK_LINE(2538)
																				bool all = true;		HX_STACK_VAR(all,"all");
																				HX_STACK_LINE(2539)
																				{
																					HX_STACK_LINE(2540)
																					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = s2->polygon->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
																					HX_STACK_LINE(2541)
																					while(((cx_ite != null()))){
																						HX_STACK_LINE(2542)
																						::zpp_nape::shape::ZPP_Edge e = cx_ite->elt;		HX_STACK_VAR(e,"e");
																						HX_STACK_LINE(2543)
																						{
																							HX_STACK_LINE(2544)
																							Float dist = ((e->gnormx * s1->circle->worldCOMx) + (e->gnormy * s1->circle->worldCOMy));		HX_STACK_VAR(dist,"dist");
																							HX_STACK_LINE(2545)
																							if (((dist > e->gprojection))){
																								HX_STACK_LINE(2546)
																								all = false;
																								HX_STACK_LINE(2547)
																								break;
																							}
																						}
																						HX_STACK_LINE(2550)
																						cx_ite = cx_ite->next;
																					}
																				}
																				struct _Function_8_1{
																					inline static bool Block( ::zpp_nape::dynamics::ZPP_FluidArbiter &arb,::zpp_nape::shape::ZPP_Shape &s1){
																						HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2553);
																						{
																							HX_STACK_LINE(2554)
																							{
																								HX_STACK_LINE(2554)
																								arb->overlap = s1->circle->area;
																								HX_STACK_LINE(2554)
																								{
																									HX_STACK_LINE(2554)
																									arb->centroidx = s1->circle->worldCOMx;
																									HX_STACK_LINE(2554)
																									arb->centroidy = s1->circle->worldCOMy;
																									HX_STACK_LINE(2554)
																									Dynamic();
																								}
																							}
																							HX_STACK_LINE(2555)
																							return true;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(2553)
																				return (  ((all)) ? bool(_Function_8_1::Block(arb,s1)) : bool(false) );
																			}
																			return null();
																		}
																	};
																	struct _Function_7_2{
																		inline static bool Block( ::zpp_nape::dynamics::ZPP_FluidArbiter &arb,::zpp_nape::shape::ZPP_Shape &s1){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2559);
																			{
																				HX_STACK_LINE(2560)
																				Float COMx = (int)0;		HX_STACK_VAR(COMx,"COMx");
																				HX_STACK_LINE(2561)
																				Float COMy = (int)0;		HX_STACK_VAR(COMy,"COMy");
																				HX_STACK_LINE(2578)
																				Float area = 0.0;		HX_STACK_VAR(area,"area");
																				HX_STACK_LINE(2579)
																				if (((::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->next->next != null()))){
																					HX_STACK_LINE(2580)
																					Float parea = 0.0;		HX_STACK_VAR(parea,"parea");
																					HX_STACK_LINE(2581)
																					Float pCOMx = 0.0;		HX_STACK_VAR(pCOMx,"pCOMx");
																					HX_STACK_LINE(2582)
																					Float pCOMy = 0.0;		HX_STACK_VAR(pCOMy,"pCOMy");
																					HX_STACK_LINE(2583)
																					{
																						HX_STACK_LINE(2584)
																						{
																							HX_STACK_LINE(2585)
																							pCOMx = (int)0;
																							HX_STACK_LINE(2586)
																							pCOMy = (int)0;
																							HX_STACK_LINE(2595)
																							{
																							}
																						}
																						HX_STACK_LINE(2604)
																						parea = 0.0;
																						HX_STACK_LINE(2605)
																						{
																							HX_STACK_LINE(2606)
																							::zpp_nape::util::ZNPNode_ZPP_Vec2 cx_ite = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head;		HX_STACK_VAR(cx_ite,"cx_ite");
																							HX_STACK_LINE(2607)
																							::zpp_nape::geom::ZPP_Vec2 u = cx_ite->elt;		HX_STACK_VAR(u,"u");
																							HX_STACK_LINE(2608)
																							cx_ite = cx_ite->next;
																							HX_STACK_LINE(2609)
																							::zpp_nape::geom::ZPP_Vec2 v = cx_ite->elt;		HX_STACK_VAR(v,"v");
																							HX_STACK_LINE(2610)
																							cx_ite = cx_ite->next;
																							HX_STACK_LINE(2611)
																							while(((cx_ite != null()))){
																								HX_STACK_LINE(2612)
																								::zpp_nape::geom::ZPP_Vec2 w = cx_ite->elt;		HX_STACK_VAR(w,"w");
																								HX_STACK_LINE(2613)
																								{
																									HX_STACK_LINE(2614)
																									hx::AddEq(parea,(v->x * ((w->y - u->y))));
																									HX_STACK_LINE(2615)
																									Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																									HX_STACK_LINE(2616)
																									hx::AddEq(pCOMx,(((v->x + w->x)) * cf));
																									HX_STACK_LINE(2617)
																									hx::AddEq(pCOMy,(((v->y + w->y)) * cf));
																								}
																								HX_STACK_LINE(2619)
																								u = v;
																								HX_STACK_LINE(2620)
																								v = w;
																								HX_STACK_LINE(2621)
																								cx_ite = cx_ite->next;
																							}
																							HX_STACK_LINE(2623)
																							cx_ite = ::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head;
																							HX_STACK_LINE(2624)
																							::zpp_nape::geom::ZPP_Vec2 w = cx_ite->elt;		HX_STACK_VAR(w,"w");
																							HX_STACK_LINE(2625)
																							{
																								HX_STACK_LINE(2626)
																								hx::AddEq(parea,(v->x * ((w->y - u->y))));
																								HX_STACK_LINE(2627)
																								Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																								HX_STACK_LINE(2628)
																								hx::AddEq(pCOMx,(((v->x + w->x)) * cf));
																								HX_STACK_LINE(2629)
																								hx::AddEq(pCOMy,(((v->y + w->y)) * cf));
																							}
																							HX_STACK_LINE(2631)
																							u = v;
																							HX_STACK_LINE(2632)
																							v = w;
																							HX_STACK_LINE(2633)
																							cx_ite = cx_ite->next;
																							HX_STACK_LINE(2634)
																							::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite->elt;		HX_STACK_VAR(w1,"w1");
																							HX_STACK_LINE(2635)
																							{
																								HX_STACK_LINE(2636)
																								hx::AddEq(parea,(v->x * ((w1->y - u->y))));
																								HX_STACK_LINE(2637)
																								Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																								HX_STACK_LINE(2638)
																								hx::AddEq(pCOMx,(((v->x + w1->x)) * cf));
																								HX_STACK_LINE(2639)
																								hx::AddEq(pCOMy,(((v->y + w1->y)) * cf));
																							}
																						}
																						HX_STACK_LINE(2642)
																						hx::MultEq(parea,0.5);
																						HX_STACK_LINE(2643)
																						Float ia = (Float((int)1) / Float((((int)6 * parea))));		HX_STACK_VAR(ia,"ia");
																						HX_STACK_LINE(2644)
																						{
																							HX_STACK_LINE(2645)
																							Float t = ia;		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(2654)
																							hx::MultEq(pCOMx,t);
																							HX_STACK_LINE(2655)
																							hx::MultEq(pCOMy,t);
																						}
																					}
																					HX_STACK_LINE(2658)
																					{
																						HX_STACK_LINE(2659)
																						Float t = -(parea);		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(2668)
																						hx::AddEq(COMx,(pCOMx * t));
																						HX_STACK_LINE(2669)
																						hx::AddEq(COMy,(pCOMy * t));
																					}
																					HX_STACK_LINE(2671)
																					hx::SubEq(area,parea);
																				}
																				else{
																					HX_STACK_LINE(2674)
																					::zpp_nape::geom::ZPP_Collide_obj::flowsegs->add(::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->elt);
																					HX_STACK_LINE(2675)
																					::zpp_nape::geom::ZPP_Collide_obj::flowsegs->add(::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->next->elt);
																				}
																				HX_STACK_LINE(2677)
																				while((!(((::zpp_nape::geom::ZPP_Collide_obj::flowsegs->head == null()))))){
																					HX_STACK_LINE(2678)
																					::zpp_nape::geom::ZPP_Vec2 u = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs->pop_unsafe();		HX_STACK_VAR(u,"u");
																					HX_STACK_LINE(2679)
																					::zpp_nape::geom::ZPP_Vec2 v = ::zpp_nape::geom::ZPP_Collide_obj::flowsegs->pop_unsafe();		HX_STACK_VAR(v,"v");
																					HX_STACK_LINE(2680)
																					Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																					HX_STACK_LINE(2681)
																					Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																					HX_STACK_LINE(2682)
																					{
																						HX_STACK_LINE(2683)
																						dx = (v->x - u->x);
																						HX_STACK_LINE(2684)
																						dy = (v->y - u->y);
																					}
																					HX_STACK_LINE(2686)
																					Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
																					HX_STACK_LINE(2687)
																					Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
																					HX_STACK_LINE(2688)
																					{
																						HX_STACK_LINE(2689)
																						nx = dx;
																						HX_STACK_LINE(2690)
																						ny = dy;
																						HX_STACK_LINE(2699)
																						{
																						}
																					}
																					HX_STACK_LINE(2708)
																					{
																						HX_STACK_LINE(2709)
																						{
																							HX_STACK_LINE(2710)
																							Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
																							HX_STACK_LINE(2719)
																							Float imag = (Float(1.0) / Float(::Math_obj::sqrt(d)));		HX_STACK_VAR(imag,"imag");
																							HX_STACK_LINE(2720)
																							{
																								HX_STACK_LINE(2721)
																								Float t = imag;		HX_STACK_VAR(t,"t");
																								HX_STACK_LINE(2730)
																								hx::MultEq(nx,t);
																								HX_STACK_LINE(2731)
																								hx::MultEq(ny,t);
																							}
																						}
																						HX_STACK_LINE(2734)
																						{
																							HX_STACK_LINE(2735)
																							Float t = nx;		HX_STACK_VAR(t,"t");
																							HX_STACK_LINE(2736)
																							nx = -(ny);
																							HX_STACK_LINE(2737)
																							ny = t;
																						}
																					}
																					HX_STACK_LINE(2740)
																					Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
																					HX_STACK_LINE(2741)
																					Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
																					HX_STACK_LINE(2742)
																					{
																						HX_STACK_LINE(2743)
																						cx = (u->x + v->x);
																						HX_STACK_LINE(2744)
																						cy = (u->y + v->y);
																					}
																					HX_STACK_LINE(2746)
																					{
																						HX_STACK_LINE(2747)
																						Float t = 0.5;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(2756)
																						hx::MultEq(cx,t);
																						HX_STACK_LINE(2757)
																						hx::MultEq(cy,t);
																					}
																					HX_STACK_LINE(2759)
																					{
																						HX_STACK_LINE(2760)
																						Float t = 1.0;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(2769)
																						hx::SubEq(cx,(s1->circle->worldCOMx * t));
																						HX_STACK_LINE(2770)
																						hx::SubEq(cy,(s1->circle->worldCOMy * t));
																					}
																					HX_STACK_LINE(2772)
																					Float xd = ((nx * cx) + (ny * cy));		HX_STACK_VAR(xd,"xd");
																					HX_STACK_LINE(2773)
																					Float carea = 0.0;		HX_STACK_VAR(carea,"carea");
																					HX_STACK_LINE(2774)
																					Float ccom = 0.0;		HX_STACK_VAR(ccom,"ccom");
																					HX_STACK_LINE(2775)
																					{
																						HX_STACK_LINE(2776)
																						Float X = xd;		HX_STACK_VAR(X,"X");
																						HX_STACK_LINE(2777)
																						Float cos = (Float(X) / Float(s1->circle->radius));		HX_STACK_VAR(cos,"cos");
																						HX_STACK_LINE(2778)
																						Float sin = ::Math_obj::sqrt(((int)1 - (cos * cos)));		HX_STACK_VAR(sin,"sin");
																						HX_STACK_LINE(2779)
																						Float theta = ::Math_obj::acos(cos);		HX_STACK_VAR(theta,"theta");
																						HX_STACK_LINE(2780)
																						carea = (s1->circle->radius * (((s1->circle->radius * theta) - (X * sin))));
																						HX_STACK_LINE(2781)
																						ccom = (Float((((((Float((int)2) / Float((int)3)) * s1->circle->radius) * sin) * sin) * sin)) / Float(((theta - (cos * sin)))));
																					}
																					HX_STACK_LINE(2783)
																					{
																						HX_STACK_LINE(2784)
																						cx = s1->circle->worldCOMx;
																						HX_STACK_LINE(2785)
																						cy = s1->circle->worldCOMy;
																						HX_STACK_LINE(2794)
																						{
																						}
																					}
																					HX_STACK_LINE(2803)
																					{
																						HX_STACK_LINE(2804)
																						Float t = ccom;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(2813)
																						hx::AddEq(cx,(nx * t));
																						HX_STACK_LINE(2814)
																						hx::AddEq(cy,(ny * t));
																					}
																					HX_STACK_LINE(2816)
																					{
																						HX_STACK_LINE(2817)
																						Float t = carea;		HX_STACK_VAR(t,"t");
																						HX_STACK_LINE(2826)
																						hx::AddEq(COMx,(cx * t));
																						HX_STACK_LINE(2827)
																						hx::AddEq(COMy,(cy * t));
																					}
																					HX_STACK_LINE(2829)
																					hx::AddEq(area,carea);
																				}
																				HX_STACK_LINE(2831)
																				{
																					HX_STACK_LINE(2832)
																					Float t = (Float(1.0) / Float(area));		HX_STACK_VAR(t,"t");
																					HX_STACK_LINE(2841)
																					hx::MultEq(COMx,t);
																					HX_STACK_LINE(2842)
																					hx::MultEq(COMy,t);
																				}
																				HX_STACK_LINE(2844)
																				{
																					HX_STACK_LINE(2844)
																					arb->overlap = area;
																					HX_STACK_LINE(2844)
																					{
																						HX_STACK_LINE(2844)
																						arb->centroidx = COMx;
																						HX_STACK_LINE(2844)
																						arb->centroidy = COMy;
																						HX_STACK_LINE(2844)
																						Dynamic();
																					}
																				}
																				HX_STACK_LINE(2845)
																				return true;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(2534)
																	return (  (((::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head == null()))) ? bool(false) : bool((  (((::zpp_nape::geom::ZPP_Collide_obj::flowpoly->head->next == null()))) ? bool(_Function_7_1::Block(s2,arb,s1)) : bool(_Function_7_2::Block(arb,s1)) )) );
																}
																return null();
															}
														};
														HX_STACK_LINE(2129)
														return (  ((total1)) ? bool(_Function_6_1::Block(s2,arb)) : bool(_Function_6_2::Block(vind,s2,arb,vi1,inte,ins,s1)) );
													}
													return null();
												}
											};
											HX_STACK_LINE(2085)
											return (  (((  (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))) ? bool(_Function_5_1::Block(v0,s1)) : bool((  (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))) ? bool(_Function_5_2::Block(v1,s1)) : bool(true) )) ))) ? bool(_Function_5_3::Block(s2,arb,inte,s1)) : bool(false) );
										}
										return null();
									}
								};
								HX_STACK_LINE(2076)
								return (  ((total)) ? bool(_Function_4_1::Block(arb,s1)) : bool(_Function_4_2::Block(vi,s2,arb,a0,inte,s1)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2076)
					return (  ((cont)) ? bool(_Function_3_1::Block(vi,arb,s2,a0,inte,total,s1)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1172)
		return (  (((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))) ? bool(_Function_2_1::Block(s2,arb,s1)) : bool(_Function_2_2::Block(s2,arb,s1)) );
	}
	else{
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb,::zpp_nape::shape::ZPP_Shape &s1){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2855);
				{
					HX_STACK_LINE(2856)
					::zpp_nape::shape::ZPP_Circle c1 = s1->circle;		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(2857)
					::zpp_nape::shape::ZPP_Circle c2 = s2->circle;		HX_STACK_VAR(c2,"c2");
					HX_STACK_LINE(2858)
					Float deltax = 0.0;		HX_STACK_VAR(deltax,"deltax");
					HX_STACK_LINE(2859)
					Float deltay = 0.0;		HX_STACK_VAR(deltay,"deltay");
					HX_STACK_LINE(2860)
					{
						HX_STACK_LINE(2861)
						deltax = (c2->worldCOMx - c1->worldCOMx);
						HX_STACK_LINE(2862)
						deltay = (c2->worldCOMy - c1->worldCOMy);
					}
					HX_STACK_LINE(2864)
					Float cr = (c1->radius + c2->radius);		HX_STACK_VAR(cr,"cr");
					HX_STACK_LINE(2865)
					Float ds = ((deltax * deltax) + (deltay * deltay));		HX_STACK_VAR(ds,"ds");
					struct _Function_3_1{
						inline static bool Block( ::zpp_nape::shape::ZPP_Circle &c1,::zpp_nape::shape::ZPP_Circle &c2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2867);
							{
								HX_STACK_LINE(2868)
								if (((c1->radius < c2->radius))){
									HX_STACK_LINE(2868)
									arb->overlap = c1->area;
									HX_STACK_LINE(2868)
									{
										HX_STACK_LINE(2868)
										arb->centroidx = c1->worldCOMx;
										HX_STACK_LINE(2868)
										arb->centroidy = c1->worldCOMy;
										HX_STACK_LINE(2868)
										Dynamic();
									}
								}
								else{
									HX_STACK_LINE(2869)
									arb->overlap = c2->area;
									HX_STACK_LINE(2869)
									{
										HX_STACK_LINE(2869)
										arb->centroidx = c2->worldCOMx;
										HX_STACK_LINE(2869)
										arb->centroidy = c2->worldCOMy;
										HX_STACK_LINE(2869)
										Dynamic();
									}
								}
								HX_STACK_LINE(2870)
								return true;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static bool Block( ::zpp_nape::shape::ZPP_Circle &c1,::zpp_nape::shape::ZPP_Circle &c2,::zpp_nape::dynamics::ZPP_FluidArbiter &arb,Float &deltay,Float &ds,Float &deltax){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Collide.hx",2872);
							{
								HX_STACK_LINE(2873)
								Float d = ::Math_obj::sqrt(ds);		HX_STACK_VAR(d,"d");
								HX_STACK_LINE(2874)
								Float id = (Float((int)1) / Float(d));		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(2875)
								Float x1 = (0.5 * ((d - ((((c2->radius * c2->radius) - (c1->radius * c1->radius))) * id))));		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(2876)
								if (((x1 <= -(c1->radius)))){
									HX_STACK_LINE(2876)
									arb->overlap = c1->area;
									HX_STACK_LINE(2876)
									{
										HX_STACK_LINE(2876)
										arb->centroidx = c1->worldCOMx;
										HX_STACK_LINE(2876)
										arb->centroidy = c1->worldCOMy;
										HX_STACK_LINE(2876)
										Dynamic();
									}
								}
								else{
									HX_STACK_LINE(2878)
									Float x2 = (d - x1);		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(2879)
									if (((x2 <= -(c2->radius)))){
										HX_STACK_LINE(2879)
										arb->overlap = c2->area;
										HX_STACK_LINE(2879)
										{
											HX_STACK_LINE(2879)
											arb->centroidx = c2->worldCOMx;
											HX_STACK_LINE(2879)
											arb->centroidy = c2->worldCOMy;
											HX_STACK_LINE(2879)
											Dynamic();
										}
									}
									else{
										HX_STACK_LINE(2881)
										Float area1 = 0.0;		HX_STACK_VAR(area1,"area1");
										HX_STACK_LINE(2882)
										Float y1 = 0.0;		HX_STACK_VAR(y1,"y1");
										HX_STACK_LINE(2883)
										Float area2 = 0.0;		HX_STACK_VAR(area2,"area2");
										HX_STACK_LINE(2884)
										Float y2 = 0.0;		HX_STACK_VAR(y2,"y2");
										HX_STACK_LINE(2885)
										{
											HX_STACK_LINE(2886)
											Float X = x1;		HX_STACK_VAR(X,"X");
											HX_STACK_LINE(2887)
											Float cos = (Float(X) / Float(c1->radius));		HX_STACK_VAR(cos,"cos");
											HX_STACK_LINE(2888)
											Float sin = ::Math_obj::sqrt(((int)1 - (cos * cos)));		HX_STACK_VAR(sin,"sin");
											HX_STACK_LINE(2889)
											Float theta = ::Math_obj::acos(cos);		HX_STACK_VAR(theta,"theta");
											HX_STACK_LINE(2890)
											area1 = (c1->radius * (((c1->radius * theta) - (X * sin))));
											HX_STACK_LINE(2891)
											y1 = (Float((((((Float((int)2) / Float((int)3)) * c1->radius) * sin) * sin) * sin)) / Float(((theta - (cos * sin)))));
										}
										HX_STACK_LINE(2893)
										{
											HX_STACK_LINE(2894)
											Float X = x2;		HX_STACK_VAR(X,"X");
											HX_STACK_LINE(2895)
											Float cos = (Float(X) / Float(c2->radius));		HX_STACK_VAR(cos,"cos");
											HX_STACK_LINE(2896)
											Float sin = ::Math_obj::sqrt(((int)1 - (cos * cos)));		HX_STACK_VAR(sin,"sin");
											HX_STACK_LINE(2897)
											Float theta = ::Math_obj::acos(cos);		HX_STACK_VAR(theta,"theta");
											HX_STACK_LINE(2898)
											area2 = (c2->radius * (((c2->radius * theta) - (X * sin))));
											HX_STACK_LINE(2899)
											y2 = (Float((((((Float((int)2) / Float((int)3)) * c2->radius) * sin) * sin) * sin)) / Float(((theta - (cos * sin)))));
										}
										HX_STACK_LINE(2901)
										Float tarea = (area1 + area2);		HX_STACK_VAR(tarea,"tarea");
										HX_STACK_LINE(2902)
										Float ya = ((Float((((y1 * area1) + (((d - y2)) * area2)))) / Float(tarea)) * id);		HX_STACK_VAR(ya,"ya");
										HX_STACK_LINE(2903)
										{
											HX_STACK_LINE(2903)
											arb->overlap = tarea;
											HX_STACK_LINE(2903)
											{
												HX_STACK_LINE(2903)
												arb->centroidx = (c1->worldCOMx + (deltax * ya));
												HX_STACK_LINE(2903)
												arb->centroidy = (c1->worldCOMy + (deltay * ya));
												HX_STACK_LINE(2903)
												Dynamic();
											}
										}
									}
								}
								HX_STACK_LINE(2906)
								return true;
							}
							return null();
						}
					};
					HX_STACK_LINE(2866)
					return (  (((ds > (cr * cr)))) ? bool(false) : bool((  (((ds < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? bool(_Function_3_1::Block(c1,c2,arb)) : bool(_Function_3_2::Block(c1,c2,arb,deltay,ds,deltax)) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(2855)
		return _Function_2_1::Block(s2,arb,s1);
	}
	HX_STACK_LINE(1171)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Collide_obj,flowCollide,return )

::zpp_nape::util::ZNPList_ZPP_Vec2 ZPP_Collide_obj::flowpoly;

::zpp_nape::util::ZNPList_ZPP_Vec2 ZPP_Collide_obj::flowsegs;


ZPP_Collide_obj::ZPP_Collide_obj()
{
}

void ZPP_Collide_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Collide);
	HX_MARK_END_CLASS();
}

void ZPP_Collide_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_Collide_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flowpoly") ) { return flowpoly; }
		if (HX_FIELD_EQ(inName,"flowsegs") ) { return flowsegs; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"containTest") ) { return containTest_dyn(); }
		if (HX_FIELD_EQ(inName,"testCollide") ) { return testCollide_dyn(); }
		if (HX_FIELD_EQ(inName,"flowCollide") ) { return flowCollide_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"polyContains") ) { return polyContains_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyContains") ) { return bodyContains_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shapeContains") ) { return shapeContains_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circleContains") ) { return circleContains_dyn(); }
		if (HX_FIELD_EQ(inName,"contactCollide") ) { return contactCollide_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"testCollide_safe") ) { return testCollide_safe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Collide_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flowpoly") ) { flowpoly=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flowsegs") ) { flowsegs=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Collide_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("circleContains"),
	HX_CSTRING("polyContains"),
	HX_CSTRING("shapeContains"),
	HX_CSTRING("bodyContains"),
	HX_CSTRING("containTest"),
	HX_CSTRING("contactCollide"),
	HX_CSTRING("testCollide_safe"),
	HX_CSTRING("testCollide"),
	HX_CSTRING("flowCollide"),
	HX_CSTRING("flowpoly"),
	HX_CSTRING("flowsegs"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Collide_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Collide_obj::flowpoly,"flowpoly");
	HX_MARK_MEMBER_NAME(ZPP_Collide_obj::flowsegs,"flowsegs");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Collide_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Collide_obj::flowpoly,"flowpoly");
	HX_VISIT_MEMBER_NAME(ZPP_Collide_obj::flowsegs,"flowsegs");
};

Class ZPP_Collide_obj::__mClass;

void ZPP_Collide_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Collide"), hx::TCanCast< ZPP_Collide_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Collide_obj::__boot()
{
	flowpoly= ::zpp_nape::util::ZNPList_ZPP_Vec2_obj::__new();
	flowsegs= ::zpp_nape::util::ZNPList_ZPP_Vec2_obj::__new();
}

} // end namespace zpp_nape
} // end namespace geom
