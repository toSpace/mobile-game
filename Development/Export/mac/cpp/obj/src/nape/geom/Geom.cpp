#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_Geom
#include <nape/geom/Geom.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Collide
#include <zpp_nape/geom/ZPP_Collide.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Geom
#include <zpp_nape/geom/ZPP_Geom.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SweepDistance
#include <zpp_nape/geom/ZPP_SweepDistance.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace geom{

Void Geom_obj::__construct()
{
	return null();
}

Geom_obj::~Geom_obj() { }

Dynamic Geom_obj::__CreateEmpty() { return  new Geom_obj; }
hx::ObjectPtr< Geom_obj > Geom_obj::__new()
{  hx::ObjectPtr< Geom_obj > result = new Geom_obj();
	result->__construct();
	return result;}

Dynamic Geom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Geom_obj > result = new Geom_obj();
	result->__construct();
	return result;}

Float Geom_obj::distanceBody( ::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 out1,::nape::geom::Vec2 out2){
	HX_STACK_PUSH("Geom::distanceBody","nape/geom/Geom.hx",223);
	HX_STACK_ARG(body1,"body1");
	HX_STACK_ARG(body2,"body2");
	HX_STACK_ARG(out1,"out1");
	HX_STACK_ARG(out2,"out2");
	HX_STACK_LINE(224)
	if (((bool((out1 != null())) && bool(out1->zpp_disp)))){
		HX_STACK_LINE(226)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(229)
	if (((bool((out2 != null())) && bool(out2->zpp_disp)))){
		HX_STACK_LINE(231)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(234)
	{
		HX_STACK_LINE(234)
		::zpp_nape::geom::ZPP_Vec2 _this = out1->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(234)
		if ((_this->_immutable)){
			HX_STACK_LINE(234)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(234)
		if (((_this->_isimmutable != null()))){
			HX_STACK_LINE(234)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(235)
		::zpp_nape::geom::ZPP_Vec2 _this = out2->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(235)
		if ((_this->_immutable)){
			HX_STACK_LINE(235)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(235)
		if (((_this->_isimmutable != null()))){
			HX_STACK_LINE(235)
			_this->_isimmutable();
		}
	}
	struct _Function_1_1{
		inline static bool Block( ::nape::phys::Body &body1){
			HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",237);
			{
				HX_STACK_LINE(237)
				::nape::shape::ShapeList _this = body1->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(237)
				return (_this->zpp_inner->inner->head == null());
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::nape::phys::Body &body2){
			HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",237);
			{
				HX_STACK_LINE(237)
				::nape::shape::ShapeList _this = body2->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(237)
				return (_this->zpp_inner->inner->head == null());
			}
			return null();
		}
	};
	HX_STACK_LINE(237)
	if (((bool(_Function_1_1::Block(body1)) || bool(_Function_1_2::Block(body2))))){
		HX_STACK_LINE(237)
		hx::Throw (HX_CSTRING("Error: Bodies cannot be empty in calculating distances"));
	}
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(240)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = body1->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(241)
		while(((cx_ite != null()))){
			HX_STACK_LINE(242)
			::zpp_nape::shape::ZPP_Shape i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(243)
			::zpp_nape::geom::ZPP_Geom_obj::validateShape(i);
			HX_STACK_LINE(244)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(248)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = body2->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(249)
		while(((cx_ite != null()))){
			HX_STACK_LINE(250)
			::zpp_nape::shape::ZPP_Shape i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(251)
			::zpp_nape::geom::ZPP_Geom_obj::validateShape(i);
			HX_STACK_LINE(252)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(255)
	return ::zpp_nape::geom::ZPP_SweepDistance_obj::distanceBody(body1->zpp_inner,body2->zpp_inner,out1->zpp_inner,out2->zpp_inner);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Geom_obj,distanceBody,return )

Float Geom_obj::distance( ::nape::shape::Shape shape1,::nape::shape::Shape shape2,::nape::geom::Vec2 out1,::nape::geom::Vec2 out2){
	HX_STACK_PUSH("Geom::distance","nape/geom/Geom.hx",301);
	HX_STACK_ARG(shape1,"shape1");
	HX_STACK_ARG(shape2,"shape2");
	HX_STACK_ARG(out1,"out1");
	HX_STACK_ARG(out2,"out2");
	HX_STACK_LINE(302)
	if (((bool((out1 != null())) && bool(out1->zpp_disp)))){
		HX_STACK_LINE(304)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(307)
	if (((bool((out2 != null())) && bool(out2->zpp_disp)))){
		HX_STACK_LINE(309)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(312)
	{
		HX_STACK_LINE(312)
		::zpp_nape::geom::ZPP_Vec2 _this = out1->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(312)
		if ((_this->_immutable)){
			HX_STACK_LINE(312)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(312)
		if (((_this->_isimmutable != null()))){
			HX_STACK_LINE(312)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(313)
		::zpp_nape::geom::ZPP_Vec2 _this = out2->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(313)
		if ((_this->_immutable)){
			HX_STACK_LINE(313)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(313)
		if (((_this->_isimmutable != null()))){
			HX_STACK_LINE(313)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(315)
	if (((bool((((  (((shape1->zpp_inner->body != null()))) ? ::nape::phys::Body(shape1->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null())) || bool((((  (((shape2->zpp_inner->body != null()))) ? ::nape::phys::Body(shape2->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null()))))){
		HX_STACK_LINE(315)
		hx::Throw (HX_CSTRING("Error: Shape must be part of a Body to calculate distances"));
	}
	HX_STACK_LINE(317)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(shape1->zpp_inner);
	HX_STACK_LINE(318)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(shape2->zpp_inner);
	HX_STACK_LINE(319)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	{
		HX_STACK_LINE(321)
		if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
			HX_STACK_LINE(321)
			tmp = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
		}
		else{
			HX_STACK_LINE(328)
			tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(329)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = tmp->next;
			HX_STACK_LINE(330)
			tmp->next = null();
		}
		HX_STACK_LINE(335)
		tmp->weak = false;
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::shape::Shape &shape1,::zpp_nape::geom::ZPP_Vec2 &tmp,::nape::geom::Vec2 &out1,::nape::shape::Shape &shape2,::nape::geom::Vec2 &out2){
			HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
			{
				HX_STACK_LINE(337)
				::zpp_nape::shape::ZPP_Shape s1 = shape1->zpp_inner;		HX_STACK_VAR(s1,"s1");
				::zpp_nape::shape::ZPP_Shape s2 = shape2->zpp_inner;		HX_STACK_VAR(s2,"s2");
				::zpp_nape::geom::ZPP_Vec2 w1 = out1->zpp_inner;		HX_STACK_VAR(w1,"w1");
				::zpp_nape::geom::ZPP_Vec2 w2 = out2->zpp_inner;		HX_STACK_VAR(w2,"w2");
				struct _Function_2_1{
					inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::geom::ZPP_Vec2 &tmp,::zpp_nape::shape::ZPP_Shape &s1){
						HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
						{
							HX_STACK_LINE(337)
							::zpp_nape::shape::ZPP_Circle c1 = s1->circle;		HX_STACK_VAR(c1,"c1");
							HX_STACK_LINE(337)
							::zpp_nape::shape::ZPP_Circle c2 = s2->circle;		HX_STACK_VAR(c2,"c2");
							HX_STACK_LINE(337)
							Float dist;		HX_STACK_VAR(dist,"dist");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(337)
								Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									nx = (c2->worldCOMx - c1->worldCOMx);
									HX_STACK_LINE(337)
									ny = (c2->worldCOMy - c1->worldCOMy);
								}
								HX_STACK_LINE(337)
								Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(337)
								dist = (len - ((c1->radius + c2->radius)));
								HX_STACK_LINE(337)
								if (((dist < 1e100))){
									HX_STACK_LINE(337)
									if (((len == (int)0))){
										HX_STACK_LINE(337)
										nx = (int)1;
										HX_STACK_LINE(337)
										ny = (int)0;
										HX_STACK_LINE(337)
										{
										}
									}
									else{
										HX_STACK_LINE(337)
										Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(337)
										hx::MultEq(nx,t);
										HX_STACK_LINE(337)
										hx::MultEq(ny,t);
									}
									HX_STACK_LINE(337)
									{
										HX_STACK_LINE(337)
										Float t = c1->radius;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(337)
										w1->x = (c1->worldCOMx + (nx * t));
										HX_STACK_LINE(337)
										w1->y = (c1->worldCOMy + (ny * t));
									}
									HX_STACK_LINE(337)
									{
										HX_STACK_LINE(337)
										Float t = -(c2->radius);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(337)
										w2->x = (c2->worldCOMx + (nx * t));
										HX_STACK_LINE(337)
										w2->y = (c2->worldCOMy + (ny * t));
									}
									HX_STACK_LINE(337)
									{
										HX_STACK_LINE(337)
										tmp->x = nx;
										HX_STACK_LINE(337)
										tmp->y = ny;
										HX_STACK_LINE(337)
										{
										}
									}
								}
							}
							HX_STACK_LINE(337)
							return dist;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::geom::ZPP_Vec2 &tmp,::zpp_nape::shape::ZPP_Shape &s1){
						HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
						{
							HX_STACK_LINE(337)
							bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
							HX_STACK_LINE(337)
							if (((bool((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))))){
								HX_STACK_LINE(337)
								::zpp_nape::shape::ZPP_Shape tmp1 = s1;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(337)
								s1 = s2;
								HX_STACK_LINE(337)
								s2 = tmp1;
								HX_STACK_LINE(337)
								::zpp_nape::geom::ZPP_Vec2 tmp2 = w1;		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(337)
								w1 = w2;
								HX_STACK_LINE(337)
								w2 = tmp2;
								HX_STACK_LINE(337)
								swapped = true;
							}
							struct _Function_3_1{
								inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w2,bool &swapped,::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::geom::ZPP_Vec2 &tmp,::zpp_nape::shape::ZPP_Shape &s1){
									HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
									{
										HX_STACK_LINE(337)
										::zpp_nape::shape::ZPP_Polygon poly = s1->polygon;		HX_STACK_VAR(poly,"poly");
										HX_STACK_LINE(337)
										::zpp_nape::shape::ZPP_Circle circle = s2->circle;		HX_STACK_VAR(circle,"circle");
										HX_STACK_LINE(337)
										Float best = -1e+100;		HX_STACK_VAR(best,"best");
										HX_STACK_LINE(337)
										::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = poly->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(337)
											while(((cx_ite != null()))){
												HX_STACK_LINE(337)
												::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(337)
												{
													HX_STACK_LINE(337)
													Float dist = ((((a->gnormx * circle->worldCOMx) + (a->gnormy * circle->worldCOMy)) - a->gprojection) - circle->radius);		HX_STACK_VAR(dist,"dist");
													HX_STACK_LINE(337)
													if (((dist > 1e100))){
														HX_STACK_LINE(337)
														best = dist;
														HX_STACK_LINE(337)
														break;
													}
													HX_STACK_LINE(337)
													if (((dist > (int)0))){
														HX_STACK_LINE(337)
														if (((dist > best))){
															HX_STACK_LINE(337)
															best = dist;
															HX_STACK_LINE(337)
															a0 = a;
														}
													}
													else{
														HX_STACK_LINE(337)
														if (((bool((best < (int)0)) && bool((dist > best))))){
															HX_STACK_LINE(337)
															best = dist;
															HX_STACK_LINE(337)
															a0 = a;
														}
													}
												}
												HX_STACK_LINE(337)
												cx_ite = cx_ite->next;
											}
										}
										HX_STACK_LINE(337)
										if (((best < 1e100))){
											HX_STACK_LINE(337)
											::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
											HX_STACK_LINE(337)
											::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
											HX_STACK_LINE(337)
											Float dt = ((circle->worldCOMy * a0->gnormx) - (circle->worldCOMx * a0->gnormy));		HX_STACK_VAR(dt,"dt");
											HX_STACK_LINE(337)
											if (((dt <= ((v0->y * a0->gnormx) - (v0->x * a0->gnormy))))){
												HX_STACK_LINE(337)
												Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
												HX_STACK_LINE(337)
												Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
												HX_STACK_LINE(337)
												{
													HX_STACK_LINE(337)
													nx = (circle->worldCOMx - v0->x);
													HX_STACK_LINE(337)
													ny = (circle->worldCOMy - v0->y);
												}
												HX_STACK_LINE(337)
												Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(337)
												best = (len - circle->radius);
												HX_STACK_LINE(337)
												if (((best < 1e100))){
													HX_STACK_LINE(337)
													if (((len == (int)0))){
														HX_STACK_LINE(337)
														nx = (int)1;
														HX_STACK_LINE(337)
														ny = (int)0;
														HX_STACK_LINE(337)
														{
														}
													}
													else{
														HX_STACK_LINE(337)
														Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(337)
														hx::MultEq(nx,t);
														HX_STACK_LINE(337)
														hx::MultEq(ny,t);
													}
													HX_STACK_LINE(337)
													{
														HX_STACK_LINE(337)
														int t = (int)0;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(337)
														w1->x = (v0->x + (nx * t));
														HX_STACK_LINE(337)
														w1->y = (v0->y + (ny * t));
													}
													HX_STACK_LINE(337)
													{
														HX_STACK_LINE(337)
														Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(337)
														w2->x = (circle->worldCOMx + (nx * t));
														HX_STACK_LINE(337)
														w2->y = (circle->worldCOMy + (ny * t));
													}
													HX_STACK_LINE(337)
													{
														HX_STACK_LINE(337)
														tmp->x = nx;
														HX_STACK_LINE(337)
														tmp->y = ny;
														HX_STACK_LINE(337)
														{
														}
													}
												}
											}
											else{
												HX_STACK_LINE(337)
												if (((dt >= ((v1->y * a0->gnormx) - (v1->x * a0->gnormy))))){
													HX_STACK_LINE(337)
													Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
													HX_STACK_LINE(337)
													Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
													HX_STACK_LINE(337)
													{
														HX_STACK_LINE(337)
														nx = (circle->worldCOMx - v1->x);
														HX_STACK_LINE(337)
														ny = (circle->worldCOMy - v1->y);
													}
													HX_STACK_LINE(337)
													Float len = ::Math_obj::sqrt(((nx * nx) + (ny * ny)));		HX_STACK_VAR(len,"len");
													HX_STACK_LINE(337)
													best = (len - circle->radius);
													HX_STACK_LINE(337)
													if (((best < 1e100))){
														HX_STACK_LINE(337)
														if (((len == (int)0))){
															HX_STACK_LINE(337)
															nx = (int)1;
															HX_STACK_LINE(337)
															ny = (int)0;
															HX_STACK_LINE(337)
															{
															}
														}
														else{
															HX_STACK_LINE(337)
															Float t = (Float(1.0) / Float(len));		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(337)
															hx::MultEq(nx,t);
															HX_STACK_LINE(337)
															hx::MultEq(ny,t);
														}
														HX_STACK_LINE(337)
														{
															HX_STACK_LINE(337)
															int t = (int)0;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(337)
															w1->x = (v1->x + (nx * t));
															HX_STACK_LINE(337)
															w1->y = (v1->y + (ny * t));
														}
														HX_STACK_LINE(337)
														{
															HX_STACK_LINE(337)
															Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(337)
															w2->x = (circle->worldCOMx + (nx * t));
															HX_STACK_LINE(337)
															w2->y = (circle->worldCOMy + (ny * t));
														}
														HX_STACK_LINE(337)
														{
															HX_STACK_LINE(337)
															tmp->x = nx;
															HX_STACK_LINE(337)
															tmp->y = ny;
															HX_STACK_LINE(337)
															{
															}
														}
													}
												}
												else{
													HX_STACK_LINE(337)
													{
														HX_STACK_LINE(337)
														Float t = -(circle->radius);		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(337)
														w2->x = (circle->worldCOMx + (a0->gnormx * t));
														HX_STACK_LINE(337)
														w2->y = (circle->worldCOMy + (a0->gnormy * t));
													}
													HX_STACK_LINE(337)
													{
														HX_STACK_LINE(337)
														Float t = -(best);		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(337)
														w1->x = (w2->x + (a0->gnormx * t));
														HX_STACK_LINE(337)
														w1->y = (w2->y + (a0->gnormy * t));
													}
													HX_STACK_LINE(337)
													{
														HX_STACK_LINE(337)
														tmp->x = a0->gnormx;
														HX_STACK_LINE(337)
														tmp->y = a0->gnormy;
														HX_STACK_LINE(337)
														{
														}
													}
												}
											}
										}
										HX_STACK_LINE(337)
										if ((swapped)){
											HX_STACK_LINE(337)
											tmp->x = -(tmp->x);
											HX_STACK_LINE(337)
											tmp->y = -(tmp->y);
										}
										HX_STACK_LINE(337)
										return best;
									}
									return null();
								}
							};
							struct _Function_3_2{
								inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w2,bool &swapped,::zpp_nape::shape::ZPP_Shape &s2,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::geom::ZPP_Vec2 &tmp,::zpp_nape::shape::ZPP_Shape &s1){
									HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
									{
										HX_STACK_LINE(337)
										::zpp_nape::shape::ZPP_Polygon p1 = s1->polygon;		HX_STACK_VAR(p1,"p1");
										HX_STACK_LINE(337)
										::zpp_nape::shape::ZPP_Polygon p2 = s2->polygon;		HX_STACK_VAR(p2,"p2");
										HX_STACK_LINE(337)
										Float best = -1e+100;		HX_STACK_VAR(best,"best");
										HX_STACK_LINE(337)
										::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(337)
										::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
										HX_STACK_LINE(337)
										int besti = (int)0;		HX_STACK_VAR(besti,"besti");
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p1->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(337)
											while(((cx_ite != null()))){
												HX_STACK_LINE(337)
												::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(337)
												{
													HX_STACK_LINE(337)
													Float min = 1e100;		HX_STACK_VAR(min,"min");
													HX_STACK_LINE(337)
													{
														HX_STACK_LINE(337)
														::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p2->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
														HX_STACK_LINE(337)
														while(((cx_ite1 != null()))){
															HX_STACK_LINE(337)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(337)
															{
																HX_STACK_LINE(337)
																Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																HX_STACK_LINE(337)
																if (((k < min))){
																	HX_STACK_LINE(337)
																	min = k;
																}
															}
															HX_STACK_LINE(337)
															cx_ite1 = cx_ite1->next;
														}
													}
													HX_STACK_LINE(337)
													hx::SubEq(min,a->gprojection);
													HX_STACK_LINE(337)
													if (((min > 1e100))){
														HX_STACK_LINE(337)
														best = min;
														HX_STACK_LINE(337)
														break;
													}
													HX_STACK_LINE(337)
													if (((min > (int)0))){
														HX_STACK_LINE(337)
														if (((min > best))){
															HX_STACK_LINE(337)
															best = min;
															HX_STACK_LINE(337)
															a1 = a;
															HX_STACK_LINE(337)
															besti = (int)1;
														}
													}
													else{
														HX_STACK_LINE(337)
														if (((bool((best < (int)0)) && bool((min > best))))){
															HX_STACK_LINE(337)
															best = min;
															HX_STACK_LINE(337)
															a1 = a;
															HX_STACK_LINE(337)
															besti = (int)1;
														}
													}
												}
												HX_STACK_LINE(337)
												cx_ite = cx_ite->next;
											}
										}
										struct _Function_4_1{
											inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w2,bool &swapped,::zpp_nape::shape::ZPP_Polygon &p1,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::geom::ZPP_Vec2 &tmp,Float &best,::zpp_nape::shape::ZPP_Edge &a1,::zpp_nape::shape::ZPP_Polygon &p2,int &besti,::zpp_nape::shape::ZPP_Edge &a2){
												HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
												{
													HX_STACK_LINE(337)
													{
														HX_STACK_LINE(337)
														::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = p2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(337)
														while(((cx_ite != null()))){
															HX_STACK_LINE(337)
															::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
															HX_STACK_LINE(337)
															{
																HX_STACK_LINE(337)
																Float min = 1e100;		HX_STACK_VAR(min,"min");
																HX_STACK_LINE(337)
																{
																	HX_STACK_LINE(337)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite1 = p1->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																	HX_STACK_LINE(337)
																	while(((cx_ite1 != null()))){
																		HX_STACK_LINE(337)
																		::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																		HX_STACK_LINE(337)
																		{
																			HX_STACK_LINE(337)
																			Float k = ((a->gnormx * v->x) + (a->gnormy * v->y));		HX_STACK_VAR(k,"k");
																			HX_STACK_LINE(337)
																			if (((k < min))){
																				HX_STACK_LINE(337)
																				min = k;
																			}
																		}
																		HX_STACK_LINE(337)
																		cx_ite1 = cx_ite1->next;
																	}
																}
																HX_STACK_LINE(337)
																hx::SubEq(min,a->gprojection);
																HX_STACK_LINE(337)
																if (((min > 1e100))){
																	HX_STACK_LINE(337)
																	best = min;
																	HX_STACK_LINE(337)
																	break;
																}
																HX_STACK_LINE(337)
																if (((min > (int)0))){
																	HX_STACK_LINE(337)
																	if (((min > best))){
																		HX_STACK_LINE(337)
																		best = min;
																		HX_STACK_LINE(337)
																		a2 = a;
																		HX_STACK_LINE(337)
																		besti = (int)2;
																	}
																}
																else{
																	HX_STACK_LINE(337)
																	if (((bool((best < (int)0)) && bool((min > best))))){
																		HX_STACK_LINE(337)
																		best = min;
																		HX_STACK_LINE(337)
																		a2 = a;
																		HX_STACK_LINE(337)
																		besti = (int)2;
																	}
																}
															}
															HX_STACK_LINE(337)
															cx_ite = cx_ite->next;
														}
													}
													struct _Function_5_1{
														inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w2,bool &swapped,::zpp_nape::shape::ZPP_Polygon &p1,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::geom::ZPP_Vec2 &tmp,Float &best,::zpp_nape::shape::ZPP_Edge &a1,int &besti,::zpp_nape::shape::ZPP_Polygon &p2,::zpp_nape::shape::ZPP_Edge &a2){
															HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
															{
																HX_STACK_LINE(337)
																::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
																::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
																HX_STACK_LINE(337)
																::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
																HX_STACK_LINE(337)
																if (((besti == (int)1))){
																	HX_STACK_LINE(337)
																	q1 = p1;
																	HX_STACK_LINE(337)
																	q2 = p2;
																	HX_STACK_LINE(337)
																	ax = a1;
																}
																else{
																	HX_STACK_LINE(337)
																	q1 = p2;
																	HX_STACK_LINE(337)
																	q2 = p1;
																	HX_STACK_LINE(337)
																	ax = a2;
																	HX_STACK_LINE(337)
																	::zpp_nape::geom::ZPP_Vec2 tmp1 = w1;		HX_STACK_VAR(tmp1,"tmp1");
																	HX_STACK_LINE(337)
																	w1 = w2;
																	HX_STACK_LINE(337)
																	w2 = tmp1;
																	HX_STACK_LINE(337)
																	swapped = !(swapped);
																}
																HX_STACK_LINE(337)
																::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
																HX_STACK_LINE(337)
																Float min = 1e100;		HX_STACK_VAR(min,"min");
																HX_STACK_LINE(337)
																{
																	HX_STACK_LINE(337)
																	::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = q2->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
																	HX_STACK_LINE(337)
																	while(((cx_ite != null()))){
																		HX_STACK_LINE(337)
																		::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
																		HX_STACK_LINE(337)
																		{
																			HX_STACK_LINE(337)
																			Float k = ((ax->gnormx * a->gnormx) + (ax->gnormy * a->gnormy));		HX_STACK_VAR(k,"k");
																			HX_STACK_LINE(337)
																			if (((k < min))){
																				HX_STACK_LINE(337)
																				min = k;
																				HX_STACK_LINE(337)
																				ay = a;
																			}
																		}
																		HX_STACK_LINE(337)
																		cx_ite = cx_ite->next;
																	}
																}
																HX_STACK_LINE(337)
																if ((swapped)){
																	HX_STACK_LINE(337)
																	tmp->x = -(ax->gnormx);
																	HX_STACK_LINE(337)
																	tmp->y = -(ax->gnormy);
																	HX_STACK_LINE(337)
																	{
																	}
																}
																else{
																	HX_STACK_LINE(337)
																	tmp->x = ax->gnormx;
																	HX_STACK_LINE(337)
																	tmp->y = ax->gnormy;
																	HX_STACK_LINE(337)
																	{
																	}
																}
																struct _Function_6_1{
																	inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w2,bool &swapped,::zpp_nape::shape::ZPP_Edge &ax,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::geom::ZPP_Vec2 &tmp,Float &best,::zpp_nape::shape::ZPP_Edge &ay){
																		HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
																		{
																			HX_STACK_LINE(337)
																			::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
																			HX_STACK_LINE(337)
																			::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
																			HX_STACK_LINE(337)
																			::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
																			HX_STACK_LINE(337)
																			::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
																			HX_STACK_LINE(337)
																			Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
																			HX_STACK_LINE(337)
																			Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
																			HX_STACK_LINE(337)
																			Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
																			HX_STACK_LINE(337)
																			Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
																			HX_STACK_LINE(337)
																			{
																				HX_STACK_LINE(337)
																				vx = (v1->x - v0->x);
																				HX_STACK_LINE(337)
																				vy = (v1->y - v0->y);
																			}
																			HX_STACK_LINE(337)
																			{
																				HX_STACK_LINE(337)
																				qx = (q11->x - q0->x);
																				HX_STACK_LINE(337)
																				qy = (q11->y - q0->y);
																			}
																			HX_STACK_LINE(337)
																			Float vdot = (Float((int)1) / Float((((vx * vx) + (vy * vy)))));		HX_STACK_VAR(vdot,"vdot");
																			HX_STACK_LINE(337)
																			Float qdot = (Float((int)1) / Float((((qx * qx) + (qy * qy)))));		HX_STACK_VAR(qdot,"qdot");
																			HX_STACK_LINE(337)
																			Float t1 = (-((((vx * ((v0->x - q0->x))) + (vy * ((v0->y - q0->y)))))) * vdot);		HX_STACK_VAR(t1,"t1");
																			HX_STACK_LINE(337)
																			Float t2 = (-((((vx * ((v0->x - q11->x))) + (vy * ((v0->y - q11->y)))))) * vdot);		HX_STACK_VAR(t2,"t2");
																			HX_STACK_LINE(337)
																			Float s11 = (-((((qx * ((q0->x - v0->x))) + (qy * ((q0->y - v0->y)))))) * qdot);		HX_STACK_VAR(s11,"s11");
																			HX_STACK_LINE(337)
																			Float s21 = (-((((qx * ((q0->x - v1->x))) + (qy * ((q0->y - v1->y)))))) * qdot);		HX_STACK_VAR(s21,"s21");
																			HX_STACK_LINE(337)
																			if (((t1 < (int)0))){
																				HX_STACK_LINE(337)
																				t1 = (int)0;
																			}
																			else{
																				HX_STACK_LINE(337)
																				if (((t1 > (int)1))){
																					HX_STACK_LINE(337)
																					t1 = (int)1;
																				}
																			}
																			HX_STACK_LINE(337)
																			if (((t2 < (int)0))){
																				HX_STACK_LINE(337)
																				t2 = (int)0;
																			}
																			else{
																				HX_STACK_LINE(337)
																				if (((t2 > (int)1))){
																					HX_STACK_LINE(337)
																					t2 = (int)1;
																				}
																			}
																			HX_STACK_LINE(337)
																			if (((s11 < (int)0))){
																				HX_STACK_LINE(337)
																				s11 = (int)0;
																			}
																			else{
																				HX_STACK_LINE(337)
																				if (((s11 > (int)1))){
																					HX_STACK_LINE(337)
																					s11 = (int)1;
																				}
																			}
																			HX_STACK_LINE(337)
																			if (((s21 < (int)0))){
																				HX_STACK_LINE(337)
																				s21 = (int)0;
																			}
																			else{
																				HX_STACK_LINE(337)
																				if (((s21 > (int)1))){
																					HX_STACK_LINE(337)
																					s21 = (int)1;
																				}
																			}
																			HX_STACK_LINE(337)
																			Float f1x = 0.0;		HX_STACK_VAR(f1x,"f1x");
																			HX_STACK_LINE(337)
																			Float f1y = 0.0;		HX_STACK_VAR(f1y,"f1y");
																			HX_STACK_LINE(337)
																			{
																				HX_STACK_LINE(337)
																				Float t = t1;		HX_STACK_VAR(t,"t");
																				HX_STACK_LINE(337)
																				f1x = (v0->x + (vx * t));
																				HX_STACK_LINE(337)
																				f1y = (v0->y + (vy * t));
																			}
																			HX_STACK_LINE(337)
																			Float f2x = 0.0;		HX_STACK_VAR(f2x,"f2x");
																			HX_STACK_LINE(337)
																			Float f2y = 0.0;		HX_STACK_VAR(f2y,"f2y");
																			HX_STACK_LINE(337)
																			{
																				HX_STACK_LINE(337)
																				Float t = t2;		HX_STACK_VAR(t,"t");
																				HX_STACK_LINE(337)
																				f2x = (v0->x + (vx * t));
																				HX_STACK_LINE(337)
																				f2y = (v0->y + (vy * t));
																			}
																			HX_STACK_LINE(337)
																			Float g1x = 0.0;		HX_STACK_VAR(g1x,"g1x");
																			HX_STACK_LINE(337)
																			Float g1y = 0.0;		HX_STACK_VAR(g1y,"g1y");
																			HX_STACK_LINE(337)
																			{
																				HX_STACK_LINE(337)
																				Float t = s11;		HX_STACK_VAR(t,"t");
																				HX_STACK_LINE(337)
																				g1x = (q0->x + (qx * t));
																				HX_STACK_LINE(337)
																				g1y = (q0->y + (qy * t));
																			}
																			HX_STACK_LINE(337)
																			Float g2x = 0.0;		HX_STACK_VAR(g2x,"g2x");
																			HX_STACK_LINE(337)
																			Float g2y = 0.0;		HX_STACK_VAR(g2y,"g2y");
																			HX_STACK_LINE(337)
																			{
																				HX_STACK_LINE(337)
																				Float t = s21;		HX_STACK_VAR(t,"t");
																				HX_STACK_LINE(337)
																				g2x = (q0->x + (qx * t));
																				HX_STACK_LINE(337)
																				g2y = (q0->y + (qy * t));
																			}
																			struct _Function_7_1{
																				inline static Float Block( Float &f1y,::zpp_nape::geom::ZPP_Vec2 &q0,Float &f1x){
																					HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
																					{
																						HX_STACK_LINE(337)
																						Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																						HX_STACK_LINE(337)
																						Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																						HX_STACK_LINE(337)
																						{
																							HX_STACK_LINE(337)
																							dx = (f1x - q0->x);
																							HX_STACK_LINE(337)
																							dy = (f1y - q0->y);
																						}
																						HX_STACK_LINE(337)
																						return ((dx * dx) + (dy * dy));
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(337)
																			Float d1 = _Function_7_1::Block(f1y,q0,f1x);		HX_STACK_VAR(d1,"d1");
																			struct _Function_7_2{
																				inline static Float Block( Float &f2y,Float &f2x,::zpp_nape::geom::ZPP_Vec2 &q11){
																					HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
																					{
																						HX_STACK_LINE(337)
																						Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																						HX_STACK_LINE(337)
																						Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																						HX_STACK_LINE(337)
																						{
																							HX_STACK_LINE(337)
																							dx = (f2x - q11->x);
																							HX_STACK_LINE(337)
																							dy = (f2y - q11->y);
																						}
																						HX_STACK_LINE(337)
																						return ((dx * dx) + (dy * dy));
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(337)
																			Float d2 = _Function_7_2::Block(f2y,f2x,q11);		HX_STACK_VAR(d2,"d2");
																			struct _Function_7_3{
																				inline static Float Block( Float &g1x,Float &g1y,::zpp_nape::geom::ZPP_Vec2 &v0){
																					HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
																					{
																						HX_STACK_LINE(337)
																						Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																						HX_STACK_LINE(337)
																						Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																						HX_STACK_LINE(337)
																						{
																							HX_STACK_LINE(337)
																							dx = (g1x - v0->x);
																							HX_STACK_LINE(337)
																							dy = (g1y - v0->y);
																						}
																						HX_STACK_LINE(337)
																						return ((dx * dx) + (dy * dy));
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(337)
																			Float e1 = _Function_7_3::Block(g1x,g1y,v0);		HX_STACK_VAR(e1,"e1");
																			struct _Function_7_4{
																				inline static Float Block( Float &g2y,Float &g2x,::zpp_nape::geom::ZPP_Vec2 &v1){
																					HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
																					{
																						HX_STACK_LINE(337)
																						Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
																						HX_STACK_LINE(337)
																						Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
																						HX_STACK_LINE(337)
																						{
																							HX_STACK_LINE(337)
																							dx = (g2x - v1->x);
																							HX_STACK_LINE(337)
																							dy = (g2y - v1->y);
																						}
																						HX_STACK_LINE(337)
																						return ((dx * dx) + (dy * dy));
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(337)
																			Float e2 = _Function_7_4::Block(g2y,g2x,v1);		HX_STACK_VAR(e2,"e2");
																			HX_STACK_LINE(337)
																			Float minfx = 0.0;		HX_STACK_VAR(minfx,"minfx");
																			HX_STACK_LINE(337)
																			Float minfy = 0.0;		HX_STACK_VAR(minfy,"minfy");
																			HX_STACK_LINE(337)
																			::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
																			HX_STACK_LINE(337)
																			if (((d1 < d2))){
																				HX_STACK_LINE(337)
																				{
																					HX_STACK_LINE(337)
																					minfx = f1x;
																					HX_STACK_LINE(337)
																					minfy = f1y;
																					HX_STACK_LINE(337)
																					{
																					}
																				}
																				HX_STACK_LINE(337)
																				minq = q0;
																			}
																			else{
																				HX_STACK_LINE(337)
																				{
																					HX_STACK_LINE(337)
																					minfx = f2x;
																					HX_STACK_LINE(337)
																					minfy = f2y;
																					HX_STACK_LINE(337)
																					{
																					}
																				}
																				HX_STACK_LINE(337)
																				minq = q11;
																				HX_STACK_LINE(337)
																				d1 = d2;
																			}
																			HX_STACK_LINE(337)
																			Float mingx = 0.0;		HX_STACK_VAR(mingx,"mingx");
																			HX_STACK_LINE(337)
																			Float mingy = 0.0;		HX_STACK_VAR(mingy,"mingy");
																			HX_STACK_LINE(337)
																			::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
																			HX_STACK_LINE(337)
																			if (((e1 < e2))){
																				HX_STACK_LINE(337)
																				{
																					HX_STACK_LINE(337)
																					mingx = g1x;
																					HX_STACK_LINE(337)
																					mingy = g1y;
																					HX_STACK_LINE(337)
																					{
																					}
																				}
																				HX_STACK_LINE(337)
																				minv = v0;
																			}
																			else{
																				HX_STACK_LINE(337)
																				{
																					HX_STACK_LINE(337)
																					mingx = g2x;
																					HX_STACK_LINE(337)
																					mingy = g2y;
																					HX_STACK_LINE(337)
																					{
																					}
																				}
																				HX_STACK_LINE(337)
																				minv = v1;
																				HX_STACK_LINE(337)
																				e1 = e2;
																			}
																			HX_STACK_LINE(337)
																			if (((d1 < e1))){
																				HX_STACK_LINE(337)
																				{
																					HX_STACK_LINE(337)
																					w1->x = minfx;
																					HX_STACK_LINE(337)
																					w1->y = minfy;
																					HX_STACK_LINE(337)
																					{
																					}
																				}
																				HX_STACK_LINE(337)
																				{
																					HX_STACK_LINE(337)
																					w2->x = minq->x;
																					HX_STACK_LINE(337)
																					w2->y = minq->y;
																					HX_STACK_LINE(337)
																					{
																					}
																				}
																				HX_STACK_LINE(337)
																				best = ::Math_obj::sqrt(d1);
																			}
																			else{
																				HX_STACK_LINE(337)
																				{
																					HX_STACK_LINE(337)
																					w2->x = mingx;
																					HX_STACK_LINE(337)
																					w2->y = mingy;
																					HX_STACK_LINE(337)
																					{
																					}
																				}
																				HX_STACK_LINE(337)
																				{
																					HX_STACK_LINE(337)
																					w1->x = minv->x;
																					HX_STACK_LINE(337)
																					w1->y = minv->y;
																					HX_STACK_LINE(337)
																					{
																					}
																				}
																				HX_STACK_LINE(337)
																				best = ::Math_obj::sqrt(e1);
																			}
																			HX_STACK_LINE(337)
																			if (((best != (int)0))){
																				HX_STACK_LINE(337)
																				{
																					HX_STACK_LINE(337)
																					tmp->x = (w2->x - w1->x);
																					HX_STACK_LINE(337)
																					tmp->y = (w2->y - w1->y);
																				}
																				HX_STACK_LINE(337)
																				{
																					HX_STACK_LINE(337)
																					Float t = (Float(1.0) / Float(best));		HX_STACK_VAR(t,"t");
																					HX_STACK_LINE(337)
																					hx::MultEq(tmp->x,t);
																					HX_STACK_LINE(337)
																					hx::MultEq(tmp->y,t);
																				}
																				HX_STACK_LINE(337)
																				if ((swapped)){
																					HX_STACK_LINE(337)
																					tmp->x = -(tmp->x);
																					HX_STACK_LINE(337)
																					tmp->y = -(tmp->y);
																				}
																			}
																			HX_STACK_LINE(337)
																			return best;
																		}
																		return null();
																	}
																};
																struct _Function_6_2{
																	inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &w2,::zpp_nape::shape::ZPP_Edge &ax,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::shape::ZPP_Edge &ay){
																		HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
																		{
																			HX_STACK_LINE(337)
																			Float c0x = 0.0;		HX_STACK_VAR(c0x,"c0x");
																			HX_STACK_LINE(337)
																			Float c0y = 0.0;		HX_STACK_VAR(c0y,"c0y");
																			HX_STACK_LINE(337)
																			{
																				HX_STACK_LINE(337)
																				c0x = ay->gp0->x;
																				HX_STACK_LINE(337)
																				c0y = ay->gp0->y;
																				HX_STACK_LINE(337)
																				{
																				}
																			}
																			HX_STACK_LINE(337)
																			Float c1x = 0.0;		HX_STACK_VAR(c1x,"c1x");
																			HX_STACK_LINE(337)
																			Float c1y = 0.0;		HX_STACK_VAR(c1y,"c1y");
																			HX_STACK_LINE(337)
																			{
																				HX_STACK_LINE(337)
																				c1x = ay->gp1->x;
																				HX_STACK_LINE(337)
																				c1y = ay->gp1->y;
																				HX_STACK_LINE(337)
																				{
																				}
																			}
																			HX_STACK_LINE(337)
																			Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
																			HX_STACK_LINE(337)
																			Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
																			HX_STACK_LINE(337)
																			{
																				HX_STACK_LINE(337)
																				dvx = (c1x - c0x);
																				HX_STACK_LINE(337)
																				dvy = (c1y - c0y);
																			}
																			HX_STACK_LINE(337)
																			Float d0 = ((ax->gnormy * c0x) - (ax->gnormx * c0y));		HX_STACK_VAR(d0,"d0");
																			HX_STACK_LINE(337)
																			Float d1 = ((ax->gnormy * c1x) - (ax->gnormx * c1y));		HX_STACK_VAR(d1,"d1");
																			HX_STACK_LINE(337)
																			Float den = (Float((int)1) / Float(((d1 - d0))));		HX_STACK_VAR(den,"den");
																			HX_STACK_LINE(337)
																			Float t = (((-(ax->tp1) - d0)) * den);		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(337)
																			if (((t > ::nape::Config_obj::epsilon))){
																				HX_STACK_LINE(337)
																				Float t1 = t;		HX_STACK_VAR(t1,"t1");
																				HX_STACK_LINE(337)
																				hx::AddEq(c0x,(dvx * t1));
																				HX_STACK_LINE(337)
																				hx::AddEq(c0y,(dvy * t1));
																			}
																			HX_STACK_LINE(337)
																			Float t1 = (((-(ax->tp0) - d1)) * den);		HX_STACK_VAR(t1,"t1");
																			HX_STACK_LINE(337)
																			if (((t1 < -(::nape::Config_obj::epsilon)))){
																				HX_STACK_LINE(337)
																				Float t2 = t1;		HX_STACK_VAR(t2,"t2");
																				HX_STACK_LINE(337)
																				hx::AddEq(c1x,(dvx * t2));
																				HX_STACK_LINE(337)
																				hx::AddEq(c1y,(dvy * t2));
																			}
																			HX_STACK_LINE(337)
																			Float c0d = (((c0x * ax->gnormx) + (c0y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c0d,"c0d");
																			HX_STACK_LINE(337)
																			Float c1d = (((c1x * ax->gnormx) + (c1y * ax->gnormy)) - ax->gprojection);		HX_STACK_VAR(c1d,"c1d");
																			struct _Function_7_1{
																				inline static Float Block( Float &c0y,::zpp_nape::geom::ZPP_Vec2 &w2,Float &c0x,Float &c0d,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::shape::ZPP_Edge &ax){
																					HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
																					{
																						HX_STACK_LINE(337)
																						{
																							HX_STACK_LINE(337)
																							w2->x = c0x;
																							HX_STACK_LINE(337)
																							w2->y = c0y;
																							HX_STACK_LINE(337)
																							{
																							}
																						}
																						HX_STACK_LINE(337)
																						{
																							HX_STACK_LINE(337)
																							Float t2 = -(c0d);		HX_STACK_VAR(t2,"t2");
																							HX_STACK_LINE(337)
																							w1->x = (w2->x + (ax->gnormx * t2));
																							HX_STACK_LINE(337)
																							w1->y = (w2->y + (ax->gnormy * t2));
																						}
																						HX_STACK_LINE(337)
																						return c0d;
																					}
																					return null();
																				}
																			};
																			struct _Function_7_2{
																				inline static Float Block( Float &c1x,::zpp_nape::geom::ZPP_Vec2 &w2,Float &c1d,::zpp_nape::geom::ZPP_Vec2 &w1,::zpp_nape::shape::ZPP_Edge &ax,Float &c1y){
																					HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",337);
																					{
																						HX_STACK_LINE(337)
																						{
																							HX_STACK_LINE(337)
																							w2->x = c1x;
																							HX_STACK_LINE(337)
																							w2->y = c1y;
																							HX_STACK_LINE(337)
																							{
																							}
																						}
																						HX_STACK_LINE(337)
																						{
																							HX_STACK_LINE(337)
																							Float t2 = -(c1d);		HX_STACK_VAR(t2,"t2");
																							HX_STACK_LINE(337)
																							w1->x = (w2->x + (ax->gnormx * t2));
																							HX_STACK_LINE(337)
																							w1->y = (w2->y + (ax->gnormy * t2));
																						}
																						HX_STACK_LINE(337)
																						return c1d;
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(337)
																			return (  (((c0d < c1d))) ? Float(_Function_7_1::Block(c0y,w2,c0x,c0d,w1,ax)) : Float(_Function_7_2::Block(c1x,w2,c1d,w1,ax,c1y)) );
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(337)
																return (  (((best >= (int)0))) ? Float(_Function_6_1::Block(w2,swapped,ax,w1,tmp,best,ay)) : Float(_Function_6_2::Block(w2,ax,w1,ay)) );
															}
															return null();
														}
													};
													HX_STACK_LINE(337)
													return (  (((best < 1e100))) ? Float(_Function_5_1::Block(w2,swapped,p1,w1,tmp,best,a1,besti,p2,a2)) : Float(1e100) );
												}
												return null();
											}
										};
										HX_STACK_LINE(337)
										return (  (((best < 1e100))) ? Float(_Function_4_1::Block(w2,swapped,p1,w1,tmp,best,a1,p2,besti,a2)) : Float(1e100) );
									}
									return null();
								}
							};
							HX_STACK_LINE(337)
							return (  (((bool((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)) && bool((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))) ? Float(_Function_3_1::Block(w2,swapped,s2,w1,tmp,s1)) : Float(_Function_3_2::Block(w2,swapped,s2,w1,tmp,s1)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(337)
				return (  (((bool((s1->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE)) && bool((s2->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))))) ? Float(_Function_2_1::Block(w2,s2,w1,tmp,s1)) : Float(_Function_2_2::Block(w2,s2,w1,tmp,s1)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(337)
	Float ret = _Function_1_1::Block(shape1,tmp,out1,shape2,out2);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(338)
	{
		HX_STACK_LINE(339)
		::zpp_nape::geom::ZPP_Vec2 o = tmp;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(348)
		{
			HX_STACK_LINE(348)
			if (((o->outer != null()))){
				HX_STACK_LINE(348)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(348)
				o->outer = null();
			}
			HX_STACK_LINE(348)
			o->_isimmutable = null();
			HX_STACK_LINE(348)
			o->_validate = null();
			HX_STACK_LINE(348)
			o->_invalidate = null();
		}
		HX_STACK_LINE(349)
		o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(350)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(355)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Geom_obj,distance,return )

bool Geom_obj::intersectsBody( ::nape::phys::Body body1,::nape::phys::Body body2){
	HX_STACK_PUSH("Geom::intersectsBody","nape/geom/Geom.hx",370);
	HX_STACK_ARG(body1,"body1");
	HX_STACK_ARG(body2,"body2");
	struct _Function_1_1{
		inline static bool Block( ::nape::phys::Body &body1){
			HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",372);
			{
				HX_STACK_LINE(372)
				::nape::shape::ShapeList _this = body1->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(372)
				return (_this->zpp_inner->inner->head == null());
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::nape::phys::Body &body2){
			HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",372);
			{
				HX_STACK_LINE(372)
				::nape::shape::ShapeList _this = body2->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(372)
				return (_this->zpp_inner->inner->head == null());
			}
			return null();
		}
	};
	HX_STACK_LINE(372)
	if (((bool(_Function_1_1::Block(body1)) || bool(_Function_1_2::Block(body2))))){
		HX_STACK_LINE(372)
		hx::Throw (HX_CSTRING("Error: Bodies must have shapes to test for intersection."));
	}
	HX_STACK_LINE(374)
	{
		HX_STACK_LINE(375)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = body1->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(376)
		while(((cx_ite != null()))){
			HX_STACK_LINE(377)
			::zpp_nape::shape::ZPP_Shape i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(378)
			::zpp_nape::geom::ZPP_Geom_obj::validateShape(i);
			HX_STACK_LINE(379)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(382)
	{
		HX_STACK_LINE(383)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = body2->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(384)
		while(((cx_ite != null()))){
			HX_STACK_LINE(385)
			::zpp_nape::shape::ZPP_Shape i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(386)
			::zpp_nape::geom::ZPP_Geom_obj::validateShape(i);
			HX_STACK_LINE(387)
			cx_ite = cx_ite->next;
		}
	}
	struct _Function_1_3{
		inline static bool Block( ::nape::phys::Body &body1,::nape::phys::Body &body2){
			HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",390);
			{
				HX_STACK_LINE(390)
				::zpp_nape::geom::ZPP_AABB _this = body1->zpp_inner->aabb;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::geom::ZPP_AABB x = body2->zpp_inner->aabb;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(390)
				return (bool((bool((bool((x->miny <= _this->maxy)) && bool((_this->miny <= x->maxy)))) && bool((x->minx <= _this->maxx)))) && bool((_this->minx <= x->maxx)));
			}
			return null();
		}
	};
	HX_STACK_LINE(390)
	if ((!(_Function_1_3::Block(body1,body2)))){
		HX_STACK_LINE(390)
		return false;
	}
	else{
		HX_STACK_LINE(394)
		{
			HX_STACK_LINE(395)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = body1->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(396)
			while(((cx_ite != null()))){
				HX_STACK_LINE(397)
				::zpp_nape::shape::ZPP_Shape s1 = cx_ite->elt;		HX_STACK_VAR(s1,"s1");
				HX_STACK_LINE(398)
				{
					HX_STACK_LINE(400)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite1 = body2->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
					HX_STACK_LINE(401)
					while(((cx_ite1 != null()))){
						HX_STACK_LINE(402)
						::zpp_nape::shape::ZPP_Shape s2 = cx_ite1->elt;		HX_STACK_VAR(s2,"s2");
						HX_STACK_LINE(403)
						if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(s1,s2))){
							HX_STACK_LINE(404)
							return true;
						}
						HX_STACK_LINE(408)
						cx_ite1 = cx_ite1->next;
					}
				}
				HX_STACK_LINE(412)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(415)
		return false;
	}
	HX_STACK_LINE(390)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Geom_obj,intersectsBody,return )

bool Geom_obj::intersects( ::nape::shape::Shape shape1,::nape::shape::Shape shape2){
	HX_STACK_PUSH("Geom::intersects","nape/geom/Geom.hx",435);
	HX_STACK_ARG(shape1,"shape1");
	HX_STACK_ARG(shape2,"shape2");
	HX_STACK_LINE(437)
	if (((bool((((  (((shape1->zpp_inner->body != null()))) ? ::nape::phys::Body(shape1->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null())) || bool((((  (((shape2->zpp_inner->body != null()))) ? ::nape::phys::Body(shape2->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null()))))){
		HX_STACK_LINE(437)
		hx::Throw (HX_CSTRING("Error: Shape must be part of a Body to calculate intersection"));
	}
	HX_STACK_LINE(439)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(shape1->zpp_inner);
	HX_STACK_LINE(440)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(shape2->zpp_inner);
	struct _Function_1_1{
		inline static bool Block( ::nape::shape::Shape &shape1,::nape::shape::Shape &shape2){
			HX_STACK_PUSH("*::closure","nape/geom/Geom.hx",441);
			{
				HX_STACK_LINE(441)
				::zpp_nape::geom::ZPP_AABB _this = shape1->zpp_inner->aabb;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::geom::ZPP_AABB x = shape2->zpp_inner->aabb;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(441)
				return (bool((bool((bool((x->miny <= _this->maxy)) && bool((_this->miny <= x->maxy)))) && bool((x->minx <= _this->maxx)))) && bool((_this->minx <= x->maxx)));
			}
			return null();
		}
	};
	HX_STACK_LINE(441)
	return (bool(_Function_1_1::Block(shape1,shape2)) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(shape1->zpp_inner,shape2->zpp_inner)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Geom_obj,intersects,return )

bool Geom_obj::contains( ::nape::shape::Shape shape1,::nape::shape::Shape shape2){
	HX_STACK_PUSH("Geom::contains","nape/geom/Geom.hx",456);
	HX_STACK_ARG(shape1,"shape1");
	HX_STACK_ARG(shape2,"shape2");
	HX_STACK_LINE(458)
	if (((bool((((  (((shape1->zpp_inner->body != null()))) ? ::nape::phys::Body(shape1->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null())) || bool((((  (((shape2->zpp_inner->body != null()))) ? ::nape::phys::Body(shape2->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null()))))){
		HX_STACK_LINE(458)
		hx::Throw (HX_CSTRING("Error: Shape must be part of a Body to calculate containment"));
	}
	HX_STACK_LINE(460)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(shape1->zpp_inner);
	HX_STACK_LINE(461)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(shape2->zpp_inner);
	HX_STACK_LINE(462)
	return ::zpp_nape::geom::ZPP_Collide_obj::containTest(shape1->zpp_inner,shape2->zpp_inner);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Geom_obj,contains,return )


Geom_obj::Geom_obj()
{
}

void Geom_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Geom);
	HX_MARK_END_CLASS();
}

void Geom_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Geom_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"distanceBody") ) { return distanceBody_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"intersectsBody") ) { return intersectsBody_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Geom_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Geom_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("distanceBody"),
	HX_CSTRING("distance"),
	HX_CSTRING("intersectsBody"),
	HX_CSTRING("intersects"),
	HX_CSTRING("contains"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Geom_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Geom_obj::__mClass,"__mClass");
};

Class Geom_obj::__mClass;

void Geom_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.Geom"), hx::TCanCast< Geom_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Geom_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
