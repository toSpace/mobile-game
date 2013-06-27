#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Geom
#include <zpp_nape/geom/ZPP_Geom.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Geom_obj::__construct()
{
	return null();
}

ZPP_Geom_obj::~ZPP_Geom_obj() { }

Dynamic ZPP_Geom_obj::__CreateEmpty() { return  new ZPP_Geom_obj; }
hx::ObjectPtr< ZPP_Geom_obj > ZPP_Geom_obj::__new()
{  hx::ObjectPtr< ZPP_Geom_obj > result = new ZPP_Geom_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Geom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Geom_obj > result = new ZPP_Geom_obj();
	result->__construct();
	return result;}

Void ZPP_Geom_obj::validateShape( ::zpp_nape::shape::ZPP_Shape s){
{
		HX_STACK_PUSH("ZPP_Geom::validateShape","zpp_nape/geom/Geom.hx",175);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(176)
		if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
			HX_STACK_LINE(176)
			::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(176)
			if ((_this->zip_gaxi)){
				HX_STACK_LINE(176)
				if (((_this->body != null()))){
					HX_STACK_LINE(176)
					_this->zip_gaxi = false;
					HX_STACK_LINE(176)
					_this->validate_laxi();
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(176)
						if ((_this1->zip_axis)){
							HX_STACK_LINE(176)
							_this1->zip_axis = false;
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								_this1->axisx = ::Math_obj::sin(_this1->rot);
								HX_STACK_LINE(176)
								_this1->axisy = ::Math_obj::cos(_this1->rot);
								HX_STACK_LINE(176)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(176)
					if ((_this->zip_gverts)){
						HX_STACK_LINE(176)
						if (((_this->body != null()))){
							HX_STACK_LINE(176)
							_this->zip_gverts = false;
							HX_STACK_LINE(176)
							_this->validate_lverts();
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(176)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(176)
									_this1->zip_axis = false;
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										_this1->axisx = ::Math_obj::sin(_this1->rot);
										HX_STACK_LINE(176)
										_this1->axisy = ::Math_obj::cos(_this1->rot);
										HX_STACK_LINE(176)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(176)
							::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(176)
								while(((cx_ite != null()))){
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(176)
										li = li->next;
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
											HX_STACK_LINE(176)
											g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
										}
									}
									HX_STACK_LINE(176)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(176)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = _this->edges->head;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(176)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(176)
						while(((cx_ite != null()))){
							HX_STACK_LINE(176)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(176)
								ite = ite->next;
								HX_STACK_LINE(176)
								e->gp0 = u;
								HX_STACK_LINE(176)
								e->gp1 = v;
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
									HX_STACK_LINE(176)
									e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
								}
								HX_STACK_LINE(176)
								e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
								HX_STACK_LINE(176)
								if (((e->wrap_gnorm != null()))){
									HX_STACK_LINE(176)
									e->wrap_gnorm->zpp_inner->x = e->gnormx;
									HX_STACK_LINE(176)
									e->wrap_gnorm->zpp_inner->y = e->gnormy;
									HX_STACK_LINE(176)
									{
									}
								}
								HX_STACK_LINE(176)
								e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
								HX_STACK_LINE(176)
								e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
							}
							HX_STACK_LINE(176)
							u = v;
							HX_STACK_LINE(176)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 v = _this->gverts->next;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(176)
							ite = ite->next;
							HX_STACK_LINE(176)
							e->gp0 = u;
							HX_STACK_LINE(176)
							e->gp1 = v;
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								e->gnormx = ((_this->body->axisy * e->lnormx) - (_this->body->axisx * e->lnormy));
								HX_STACK_LINE(176)
								e->gnormy = ((e->lnormx * _this->body->axisx) + (e->lnormy * _this->body->axisy));
							}
							HX_STACK_LINE(176)
							e->gprojection = (((_this->body->posx * e->gnormx) + (_this->body->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(176)
							if (((e->wrap_gnorm != null()))){
								HX_STACK_LINE(176)
								e->wrap_gnorm->zpp_inner->x = e->gnormx;
								HX_STACK_LINE(176)
								e->wrap_gnorm->zpp_inner->y = e->gnormy;
								HX_STACK_LINE(176)
								{
								}
							}
							HX_STACK_LINE(176)
							e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
							HX_STACK_LINE(176)
							e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
						}
					}
				}
			}
		}
		HX_STACK_LINE(177)
		if ((s->zip_aabb)){
			HX_STACK_LINE(177)
			if (((s->body != null()))){
				HX_STACK_LINE(177)
				s->zip_aabb = false;
				HX_STACK_LINE(177)
				if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(177)
					::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(177)
					if ((_this->zip_worldCOM)){
						HX_STACK_LINE(177)
						if (((_this->body != null()))){
							HX_STACK_LINE(177)
							_this->zip_worldCOM = false;
							HX_STACK_LINE(177)
							if ((_this->zip_localCOM)){
								HX_STACK_LINE(177)
								_this->zip_localCOM = false;
								HX_STACK_LINE(177)
								if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
									HX_STACK_LINE(177)
									::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(177)
									if (((_this1->lverts->next == null()))){
										HX_STACK_LINE(177)
										hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
									}
									HX_STACK_LINE(177)
									if (((_this1->lverts->next->next == null()))){
										HX_STACK_LINE(177)
										_this1->localCOMx = _this1->lverts->next->x;
										HX_STACK_LINE(177)
										_this1->localCOMy = _this1->lverts->next->y;
										HX_STACK_LINE(177)
										Dynamic();
									}
									else{
										HX_STACK_LINE(177)
										if (((_this1->lverts->next->next->next == null()))){
											HX_STACK_LINE(177)
											{
												HX_STACK_LINE(177)
												_this1->localCOMx = _this1->lverts->next->x;
												HX_STACK_LINE(177)
												_this1->localCOMy = _this1->lverts->next->y;
												HX_STACK_LINE(177)
												{
												}
											}
											HX_STACK_LINE(177)
											{
												HX_STACK_LINE(177)
												Float t = 1.0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(177)
												hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
												HX_STACK_LINE(177)
												hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
											}
											HX_STACK_LINE(177)
											{
												HX_STACK_LINE(177)
												Float t = 0.5;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(177)
												hx::MultEq(_this1->localCOMx,t);
												HX_STACK_LINE(177)
												hx::MultEq(_this1->localCOMy,t);
											}
										}
										else{
											HX_STACK_LINE(177)
											{
												HX_STACK_LINE(177)
												_this1->localCOMx = (int)0;
												HX_STACK_LINE(177)
												_this1->localCOMy = (int)0;
												HX_STACK_LINE(177)
												{
												}
											}
											HX_STACK_LINE(177)
											Float area = 0.0;		HX_STACK_VAR(area,"area");
											HX_STACK_LINE(177)
											{
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
												HX_STACK_LINE(177)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(177)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(177)
												while(((cx_ite != null()))){
													HX_STACK_LINE(177)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(177)
													{
														HX_STACK_LINE(177)
														hx::AddEq(area,(v->x * ((w->y - u->y))));
														HX_STACK_LINE(177)
														Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(177)
														hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
														HX_STACK_LINE(177)
														hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
													}
													HX_STACK_LINE(177)
													u = v;
													HX_STACK_LINE(177)
													v = w;
													HX_STACK_LINE(177)
													cx_ite = cx_ite->next;
												}
												HX_STACK_LINE(177)
												cx_ite = _this1->lverts->next;
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(177)
												{
													HX_STACK_LINE(177)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(177)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(177)
													hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(177)
													hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(177)
												u = v;
												HX_STACK_LINE(177)
												v = w;
												HX_STACK_LINE(177)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
												HX_STACK_LINE(177)
												{
													HX_STACK_LINE(177)
													hx::AddEq(area,(v->x * ((w1->y - u->y))));
													HX_STACK_LINE(177)
													Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(177)
													hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
													HX_STACK_LINE(177)
													hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
												}
											}
											HX_STACK_LINE(177)
											area = (Float((int)1) / Float((((int)3 * area))));
											HX_STACK_LINE(177)
											{
												HX_STACK_LINE(177)
												Float t = area;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(177)
												hx::MultEq(_this1->localCOMx,t);
												HX_STACK_LINE(177)
												hx::MultEq(_this1->localCOMy,t);
											}
										}
									}
								}
							}
							HX_STACK_LINE(177)
							{
								HX_STACK_LINE(177)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(177)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(177)
									_this1->zip_axis = false;
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										_this1->axisx = ::Math_obj::sin(_this1->rot);
										HX_STACK_LINE(177)
										_this1->axisy = ::Math_obj::cos(_this1->rot);
										HX_STACK_LINE(177)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(177)
							{
								HX_STACK_LINE(177)
								_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
								HX_STACK_LINE(177)
								_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
							}
						}
					}
					HX_STACK_LINE(177)
					Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
					HX_STACK_LINE(177)
					Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
					HX_STACK_LINE(177)
					{
						HX_STACK_LINE(177)
						_this->aabb->minx = (_this->worldCOMx - rx);
						HX_STACK_LINE(177)
						_this->aabb->miny = (_this->worldCOMy - ry);
					}
					HX_STACK_LINE(177)
					{
						HX_STACK_LINE(177)
						_this->aabb->maxx = (_this->worldCOMx + rx);
						HX_STACK_LINE(177)
						_this->aabb->maxy = (_this->worldCOMy + ry);
					}
				}
				else{
					HX_STACK_LINE(177)
					::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(177)
					if ((_this->zip_gverts)){
						HX_STACK_LINE(177)
						if (((_this->body != null()))){
							HX_STACK_LINE(177)
							_this->zip_gverts = false;
							HX_STACK_LINE(177)
							_this->validate_lverts();
							HX_STACK_LINE(177)
							{
								HX_STACK_LINE(177)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(177)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(177)
									_this1->zip_axis = false;
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										_this1->axisx = ::Math_obj::sin(_this1->rot);
										HX_STACK_LINE(177)
										_this1->axisy = ::Math_obj::cos(_this1->rot);
										HX_STACK_LINE(177)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(177)
							::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(177)
							{
								HX_STACK_LINE(177)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(177)
								while(((cx_ite != null()))){
									HX_STACK_LINE(177)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(177)
										li = li->next;
										HX_STACK_LINE(177)
										{
											HX_STACK_LINE(177)
											g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
											HX_STACK_LINE(177)
											g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
										}
									}
									HX_STACK_LINE(177)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(177)
					if (((_this->lverts->next == null()))){
						HX_STACK_LINE(177)
						hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
					}
					HX_STACK_LINE(177)
					::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
					HX_STACK_LINE(177)
					{
						HX_STACK_LINE(177)
						_this->aabb->minx = p0->x;
						HX_STACK_LINE(177)
						_this->aabb->miny = p0->y;
						HX_STACK_LINE(177)
						{
						}
					}
					HX_STACK_LINE(177)
					{
						HX_STACK_LINE(177)
						_this->aabb->maxx = p0->x;
						HX_STACK_LINE(177)
						_this->aabb->maxy = p0->y;
						HX_STACK_LINE(177)
						{
						}
					}
					HX_STACK_LINE(177)
					{
						HX_STACK_LINE(177)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(177)
						while(((cx_ite != null()))){
							HX_STACK_LINE(177)
							::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(177)
							{
								HX_STACK_LINE(177)
								if (((p->x < _this->aabb->minx))){
									HX_STACK_LINE(177)
									_this->aabb->minx = p->x;
								}
								HX_STACK_LINE(177)
								if (((p->x > _this->aabb->maxx))){
									HX_STACK_LINE(177)
									_this->aabb->maxx = p->x;
								}
								HX_STACK_LINE(177)
								if (((p->y < _this->aabb->miny))){
									HX_STACK_LINE(177)
									_this->aabb->miny = p->y;
								}
								HX_STACK_LINE(177)
								if (((p->y > _this->aabb->maxy))){
									HX_STACK_LINE(177)
									_this->aabb->maxy = p->y;
								}
							}
							HX_STACK_LINE(177)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
		HX_STACK_LINE(178)
		if ((s->zip_worldCOM)){
			HX_STACK_LINE(178)
			if (((s->body != null()))){
				HX_STACK_LINE(178)
				s->zip_worldCOM = false;
				HX_STACK_LINE(178)
				if ((s->zip_localCOM)){
					HX_STACK_LINE(178)
					s->zip_localCOM = false;
					HX_STACK_LINE(178)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(178)
						::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(178)
						if (((_this->lverts->next == null()))){
							HX_STACK_LINE(178)
							hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
						}
						HX_STACK_LINE(178)
						if (((_this->lverts->next->next == null()))){
							HX_STACK_LINE(178)
							_this->localCOMx = _this->lverts->next->x;
							HX_STACK_LINE(178)
							_this->localCOMy = _this->lverts->next->y;
							HX_STACK_LINE(178)
							Dynamic();
						}
						else{
							HX_STACK_LINE(178)
							if (((_this->lverts->next->next->next == null()))){
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(178)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(178)
									{
									}
								}
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									Float t = 1.0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(178)
									hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
									HX_STACK_LINE(178)
									hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
								}
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									Float t = 0.5;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(178)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(178)
									hx::MultEq(_this->localCOMy,t);
								}
							}
							else{
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									_this->localCOMx = (int)0;
									HX_STACK_LINE(178)
									_this->localCOMy = (int)0;
									HX_STACK_LINE(178)
									{
									}
								}
								HX_STACK_LINE(178)
								Float area = 0.0;		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
									HX_STACK_LINE(178)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(178)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(178)
									while(((cx_ite != null()))){
										HX_STACK_LINE(178)
										::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											hx::AddEq(area,(v->x * ((w->y - u->y))));
											HX_STACK_LINE(178)
											Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(178)
											hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
											HX_STACK_LINE(178)
											hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
										}
										HX_STACK_LINE(178)
										u = v;
										HX_STACK_LINE(178)
										v = w;
										HX_STACK_LINE(178)
										cx_ite = cx_ite->next;
									}
									HX_STACK_LINE(178)
									cx_ite = _this->lverts->next;
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										hx::AddEq(area,(v->x * ((w->y - u->y))));
										HX_STACK_LINE(178)
										Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(178)
										hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
										HX_STACK_LINE(178)
										hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
									}
									HX_STACK_LINE(178)
									u = v;
									HX_STACK_LINE(178)
									v = w;
									HX_STACK_LINE(178)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
									HX_STACK_LINE(178)
									{
										HX_STACK_LINE(178)
										hx::AddEq(area,(v->x * ((w1->y - u->y))));
										HX_STACK_LINE(178)
										Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(178)
										hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
										HX_STACK_LINE(178)
										hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
									}
								}
								HX_STACK_LINE(178)
								area = (Float((int)1) / Float((((int)3 * area))));
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									Float t = area;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(178)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(178)
									hx::MultEq(_this->localCOMy,t);
								}
							}
						}
					}
				}
				HX_STACK_LINE(178)
				{
					HX_STACK_LINE(178)
					::zpp_nape::phys::ZPP_Body _this = s->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(178)
					if ((_this->zip_axis)){
						HX_STACK_LINE(178)
						_this->zip_axis = false;
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							_this->axisx = ::Math_obj::sin(_this->rot);
							HX_STACK_LINE(178)
							_this->axisy = ::Math_obj::cos(_this->rot);
							HX_STACK_LINE(178)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(178)
				{
					HX_STACK_LINE(178)
					s->worldCOMx = (s->body->posx + (((s->body->axisy * s->localCOMx) - (s->body->axisx * s->localCOMy))));
					HX_STACK_LINE(178)
					s->worldCOMy = (s->body->posy + (((s->localCOMx * s->body->axisx) + (s->localCOMy * s->body->axisy))));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Geom_obj,validateShape,(void))


ZPP_Geom_obj::ZPP_Geom_obj()
{
}

void ZPP_Geom_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Geom);
	HX_MARK_END_CLASS();
}

void ZPP_Geom_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_Geom_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"validateShape") ) { return validateShape_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Geom_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Geom_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("validateShape"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Geom_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Geom_obj::__mClass,"__mClass");
};

Class ZPP_Geom_obj::__mClass;

void ZPP_Geom_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Geom"), hx::TCanCast< ZPP_Geom_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Geom_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace geom
