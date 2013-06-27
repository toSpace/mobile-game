#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_ColArbiter_obj::__construct()
{
HX_STACK_PUSH("ZPP_ColArbiter::new","zpp_nape/dynamics/Arbiter.hx",1390);
{
	HX_STACK_LINE(1872)
	this->pre_dt = 0.0;
	HX_STACK_LINE(1716)
	this->_mutable = false;
	HX_STACK_LINE(1548)
	this->stat = false;
	HX_STACK_LINE(1478)
	this->next = null();
	HX_STACK_LINE(1477)
	this->hpc2 = false;
	HX_STACK_LINE(1476)
	this->hc2 = false;
	HX_STACK_LINE(1475)
	this->oc2 = null();
	HX_STACK_LINE(1474)
	this->c2 = null();
	HX_STACK_LINE(1473)
	this->oc1 = null();
	HX_STACK_LINE(1472)
	this->c1 = null();
	HX_STACK_LINE(1471)
	this->__ref_vertex = (int)0;
	HX_STACK_LINE(1470)
	this->__ref_edge2 = null();
	HX_STACK_LINE(1469)
	this->__ref_edge1 = null();
	HX_STACK_LINE(1468)
	this->biasCoef = 0.0;
	HX_STACK_LINE(1467)
	this->rev = false;
	HX_STACK_LINE(1466)
	this->radius = 0.0;
	HX_STACK_LINE(1465)
	this->lproj = 0.0;
	HX_STACK_LINE(1464)
	this->lnormy = 0.0;
	HX_STACK_LINE(1463)
	this->lnormx = 0.0;
	HX_STACK_LINE(1458)
	this->surfacey = 0.0;
	HX_STACK_LINE(1457)
	this->surfacex = 0.0;
	HX_STACK_LINE(1456)
	this->k2y = 0.0;
	HX_STACK_LINE(1455)
	this->k2x = 0.0;
	HX_STACK_LINE(1454)
	this->k1y = 0.0;
	HX_STACK_LINE(1453)
	this->k1x = 0.0;
	HX_STACK_LINE(1452)
	this->rt2b = 0.0;
	HX_STACK_LINE(1451)
	this->rn2b = 0.0;
	HX_STACK_LINE(1450)
	this->rt2a = 0.0;
	HX_STACK_LINE(1449)
	this->rn2a = 0.0;
	HX_STACK_LINE(1448)
	this->rt1b = 0.0;
	HX_STACK_LINE(1447)
	this->rn1b = 0.0;
	HX_STACK_LINE(1446)
	this->rt1a = 0.0;
	HX_STACK_LINE(1445)
	this->rn1a = 0.0;
	HX_STACK_LINE(1444)
	this->jrAcc = 0.0;
	HX_STACK_LINE(1443)
	this->rMass = 0.0;
	HX_STACK_LINE(1442)
	this->Kc = 0.0;
	HX_STACK_LINE(1441)
	this->Kb = 0.0;
	HX_STACK_LINE(1440)
	this->Ka = 0.0;
	HX_STACK_LINE(1439)
	this->kMassc = 0.0;
	HX_STACK_LINE(1438)
	this->kMassb = 0.0;
	HX_STACK_LINE(1437)
	this->kMassa = 0.0;
	HX_STACK_LINE(1430)
	this->wrap_normal = null();
	HX_STACK_LINE(1406)
	this->ny = 0.0;
	HX_STACK_LINE(1405)
	this->nx = 0.0;
	HX_STACK_LINE(1404)
	this->innards = null();
	HX_STACK_LINE(1403)
	this->wrap_contacts = null();
	HX_STACK_LINE(1402)
	this->contacts = null();
	HX_STACK_LINE(1401)
	this->s2 = null();
	HX_STACK_LINE(1400)
	this->s1 = null();
	HX_STACK_LINE(1399)
	this->userdef_rfric = false;
	HX_STACK_LINE(1398)
	this->userdef_restitution = false;
	HX_STACK_LINE(1397)
	this->userdef_stat_fric = false;
	HX_STACK_LINE(1396)
	this->userdef_dyn_fric = false;
	HX_STACK_LINE(1395)
	this->rfric = 0.0;
	HX_STACK_LINE(1394)
	this->restitution = 0.0;
	HX_STACK_LINE(1393)
	this->stat_fric = 0.0;
	HX_STACK_LINE(1392)
	this->dyn_fric = 0.0;
	HX_STACK_LINE(1391)
	this->outer_zn = null();
	HX_STACK_LINE(1504)
	super::__construct();
	HX_STACK_LINE(1505)
	this->pre_dt = -1.0;
	HX_STACK_LINE(1506)
	this->contacts = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
	HX_STACK_LINE(1507)
	this->innards = ::zpp_nape::dynamics::ZPP_IContact_obj::__new();
	HX_STACK_LINE(1508)
	this->type = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;
	HX_STACK_LINE(1509)
	this->colarb = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

ZPP_ColArbiter_obj::~ZPP_ColArbiter_obj() { }

Dynamic ZPP_ColArbiter_obj::__CreateEmpty() { return  new ZPP_ColArbiter_obj; }
hx::ObjectPtr< ZPP_ColArbiter_obj > ZPP_ColArbiter_obj::__new()
{  hx::ObjectPtr< ZPP_ColArbiter_obj > result = new ZPP_ColArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZPP_ColArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ColArbiter_obj > result = new ZPP_ColArbiter_obj();
	result->__construct();
	return result;}

Void ZPP_ColArbiter_obj::applyImpulsePos( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::applyImpulsePos","zpp_nape/dynamics/Arbiter.hx",2335);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2335)
		if (((this->ptype == (int)2))){
			HX_STACK_LINE(2337)
			::zpp_nape::dynamics::ZPP_IContact c = this->c1;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(2338)
			Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(2339)
			Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(2340)
			Float r2x = 0.0;		HX_STACK_VAR(r2x,"r2x");
			HX_STACK_LINE(2341)
			Float r2y = 0.0;		HX_STACK_VAR(r2y,"r2y");
			HX_STACK_LINE(2342)
			{
				HX_STACK_LINE(2343)
				r2x = ((this->b2->axisy * c->lr2x) - (this->b2->axisx * c->lr2y));
				HX_STACK_LINE(2344)
				r2y = ((c->lr2x * this->b2->axisx) + (c->lr2y * this->b2->axisy));
			}
			HX_STACK_LINE(2346)
			{
				HX_STACK_LINE(2347)
				Float t = 1.0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2356)
				hx::AddEq(r2x,(this->b2->posx * t));
				HX_STACK_LINE(2357)
				hx::AddEq(r2y,(this->b2->posy * t));
			}
			HX_STACK_LINE(2359)
			Float r1x = 0.0;		HX_STACK_VAR(r1x,"r1x");
			HX_STACK_LINE(2360)
			Float r1y = 0.0;		HX_STACK_VAR(r1y,"r1y");
			HX_STACK_LINE(2361)
			{
				HX_STACK_LINE(2362)
				r1x = ((this->b1->axisy * c->lr1x) - (this->b1->axisx * c->lr1y));
				HX_STACK_LINE(2363)
				r1y = ((c->lr1x * this->b1->axisx) + (c->lr1y * this->b1->axisy));
			}
			HX_STACK_LINE(2365)
			{
				HX_STACK_LINE(2366)
				Float t = 1.0;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2375)
				hx::AddEq(r1x,(this->b1->posx * t));
				HX_STACK_LINE(2376)
				hx::AddEq(r1y,(this->b1->posy * t));
			}
			HX_STACK_LINE(2378)
			Float dx1 = 0.0;		HX_STACK_VAR(dx1,"dx1");
			HX_STACK_LINE(2379)
			Float dy1 = 0.0;		HX_STACK_VAR(dy1,"dy1");
			HX_STACK_LINE(2380)
			{
				HX_STACK_LINE(2381)
				dx1 = (r2x - r1x);
				HX_STACK_LINE(2382)
				dy1 = (r2y - r1y);
			}
			HX_STACK_LINE(2384)
			Float dl = ::Math_obj::sqrt(((dx1 * dx1) + (dy1 * dy1)));		HX_STACK_VAR(dl,"dl");
			HX_STACK_LINE(2385)
			Float r = (this->radius - ::nape::Config_obj::collisionSlop);		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2386)
			Float err = (dl - r);		HX_STACK_VAR(err,"err");
			HX_STACK_LINE(2387)
			if (((((dx1 * this->nx) + (dy1 * this->ny)) < (int)0))){
				HX_STACK_LINE(2388)
				{
					HX_STACK_LINE(2389)
					dx1 = -(dx1);
					HX_STACK_LINE(2390)
					dy1 = -(dy1);
				}
				HX_STACK_LINE(2392)
				hx::SubEq(err,this->radius);
			}
			HX_STACK_LINE(2394)
			if (((err < (int)0))){
				HX_STACK_LINE(2394)
				if (((dl < ::nape::Config_obj::epsilon))){
					HX_STACK_LINE(2395)
					if (((this->b1->smass != 0.0))){
						HX_STACK_LINE(2396)
						hx::AddEq(this->b1->posx,(::nape::Config_obj::epsilon * (int)10));
					}
					else{
						HX_STACK_LINE(2397)
						hx::AddEq(this->b2->posx,(::nape::Config_obj::epsilon * (int)10));
					}
				}
				else{
					HX_STACK_LINE(2400)
					{
						HX_STACK_LINE(2401)
						Float t = (Float(1.0) / Float(dl));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2410)
						hx::MultEq(dx1,t);
						HX_STACK_LINE(2411)
						hx::MultEq(dy1,t);
					}
					HX_STACK_LINE(2413)
					Float px = (0.5 * ((r1x + r2x)));		HX_STACK_VAR(px,"px");
					HX_STACK_LINE(2414)
					Float py = (0.5 * ((r1y + r2y)));		HX_STACK_VAR(py,"py");
					HX_STACK_LINE(2431)
					Float pen = (dl - r);		HX_STACK_VAR(pen,"pen");
					HX_STACK_LINE(2432)
					{
						HX_STACK_LINE(2433)
						r1x = (px - this->b1->posx);
						HX_STACK_LINE(2434)
						r1y = (py - this->b1->posy);
					}
					HX_STACK_LINE(2436)
					{
						HX_STACK_LINE(2437)
						r2x = (px - this->b2->posx);
						HX_STACK_LINE(2438)
						r2y = (py - this->b2->posy);
					}
					HX_STACK_LINE(2440)
					Float rn1 = ((dy1 * r1x) - (dx1 * r1y));		HX_STACK_VAR(rn1,"rn1");
					HX_STACK_LINE(2441)
					Float rn2 = ((dy1 * r2x) - (dx1 * r2y));		HX_STACK_VAR(rn2,"rn2");
					HX_STACK_LINE(2442)
					Float K = (((this->b2->smass + ((rn2 * rn2) * this->b2->sinertia)) + this->b1->smass) + ((rn1 * rn1) * this->b1->sinertia));		HX_STACK_VAR(K,"K");
					HX_STACK_LINE(2443)
					if (((K != (int)0))){
						HX_STACK_LINE(2444)
						Float jn = (Float((-(this->biasCoef) * pen)) / Float(K));		HX_STACK_VAR(jn,"jn");
						HX_STACK_LINE(2445)
						Float Jx = 0.0;		HX_STACK_VAR(Jx,"Jx");
						HX_STACK_LINE(2446)
						Float Jy = 0.0;		HX_STACK_VAR(Jy,"Jy");
						HX_STACK_LINE(2447)
						{
							HX_STACK_LINE(2448)
							Float t = jn;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2457)
							Jx = (dx1 * t);
							HX_STACK_LINE(2458)
							Jy = (dy1 * t);
						}
						HX_STACK_LINE(2460)
						{
							HX_STACK_LINE(2461)
							Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2470)
							hx::SubEq(this->b1->posx,(Jx * t));
							HX_STACK_LINE(2471)
							hx::SubEq(this->b1->posy,(Jy * t));
						}
						HX_STACK_LINE(2473)
						{
							HX_STACK_LINE(2473)
							::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
							Float dr = ((-(rn1) * this->b1->iinertia) * jn);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(2473)
							hx::AddEq(_this->rot,dr);
							HX_STACK_LINE(2473)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(2473)
								_this->axisx = ::Math_obj::sin(_this->rot);
								HX_STACK_LINE(2473)
								_this->axisy = ::Math_obj::cos(_this->rot);
								HX_STACK_LINE(2473)
								Dynamic();
							}
							else{
								HX_STACK_LINE(2473)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(2473)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2473)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(2473)
								Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(2473)
								_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
								HX_STACK_LINE(2473)
								_this->axisx = nx;
							}
						}
						HX_STACK_LINE(2474)
						{
							HX_STACK_LINE(2475)
							Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2484)
							hx::AddEq(this->b2->posx,(Jx * t));
							HX_STACK_LINE(2485)
							hx::AddEq(this->b2->posy,(Jy * t));
						}
						HX_STACK_LINE(2487)
						{
							HX_STACK_LINE(2487)
							::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
							Float dr = ((rn2 * this->b2->iinertia) * jn);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(2487)
							hx::AddEq(_this->rot,dr);
							HX_STACK_LINE(2487)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(2487)
								_this->axisx = ::Math_obj::sin(_this->rot);
								HX_STACK_LINE(2487)
								_this->axisy = ::Math_obj::cos(_this->rot);
								HX_STACK_LINE(2487)
								Dynamic();
							}
							else{
								HX_STACK_LINE(2487)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(2487)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2487)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(2487)
								Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(2487)
								_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
								HX_STACK_LINE(2487)
								_this->axisx = nx;
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(2493)
			Float gnormx = 0.0;		HX_STACK_VAR(gnormx,"gnormx");
			HX_STACK_LINE(2494)
			Float gnormy = 0.0;		HX_STACK_VAR(gnormy,"gnormy");
			HX_STACK_LINE(2495)
			Float gproj;		HX_STACK_VAR(gproj,"gproj");
			HX_STACK_LINE(2496)
			Float clip1x = 0.0;		HX_STACK_VAR(clip1x,"clip1x");
			HX_STACK_LINE(2497)
			Float clip1y = 0.0;		HX_STACK_VAR(clip1y,"clip1y");
			HX_STACK_LINE(2498)
			Float clip2x = (int)0;		HX_STACK_VAR(clip2x,"clip2x");
			HX_STACK_LINE(2499)
			Float clip2y = (int)0;		HX_STACK_VAR(clip2y,"clip2y");
			HX_STACK_LINE(2516)
			if (((this->ptype == (int)0))){
				HX_STACK_LINE(2517)
				{
					HX_STACK_LINE(2518)
					gnormx = ((this->b1->axisy * this->lnormx) - (this->b1->axisx * this->lnormy));
					HX_STACK_LINE(2519)
					gnormy = ((this->lnormx * this->b1->axisx) + (this->lnormy * this->b1->axisy));
				}
				HX_STACK_LINE(2521)
				gproj = (this->lproj + (((gnormx * this->b1->posx) + (gnormy * this->b1->posy))));
				HX_STACK_LINE(2522)
				{
					HX_STACK_LINE(2523)
					clip1x = ((this->b2->axisy * this->c1->lr1x) - (this->b2->axisx * this->c1->lr1y));
					HX_STACK_LINE(2524)
					clip1y = ((this->c1->lr1x * this->b2->axisx) + (this->c1->lr1y * this->b2->axisy));
				}
				HX_STACK_LINE(2526)
				{
					HX_STACK_LINE(2527)
					Float t = 1.0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2536)
					hx::AddEq(clip1x,(this->b2->posx * t));
					HX_STACK_LINE(2537)
					hx::AddEq(clip1y,(this->b2->posy * t));
				}
				HX_STACK_LINE(2539)
				if ((this->hpc2)){
					HX_STACK_LINE(2540)
					{
						HX_STACK_LINE(2541)
						clip2x = ((this->b2->axisy * this->c2->lr1x) - (this->b2->axisx * this->c2->lr1y));
						HX_STACK_LINE(2542)
						clip2y = ((this->c2->lr1x * this->b2->axisx) + (this->c2->lr1y * this->b2->axisy));
					}
					HX_STACK_LINE(2544)
					{
						HX_STACK_LINE(2545)
						Float t = 1.0;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2554)
						hx::AddEq(clip2x,(this->b2->posx * t));
						HX_STACK_LINE(2555)
						hx::AddEq(clip2y,(this->b2->posy * t));
					}
				}
			}
			else{
				HX_STACK_LINE(2560)
				{
					HX_STACK_LINE(2561)
					gnormx = ((this->b2->axisy * this->lnormx) - (this->b2->axisx * this->lnormy));
					HX_STACK_LINE(2562)
					gnormy = ((this->lnormx * this->b2->axisx) + (this->lnormy * this->b2->axisy));
				}
				HX_STACK_LINE(2564)
				gproj = (this->lproj + (((gnormx * this->b2->posx) + (gnormy * this->b2->posy))));
				HX_STACK_LINE(2565)
				{
					HX_STACK_LINE(2566)
					clip1x = ((this->b1->axisy * this->c1->lr1x) - (this->b1->axisx * this->c1->lr1y));
					HX_STACK_LINE(2567)
					clip1y = ((this->c1->lr1x * this->b1->axisx) + (this->c1->lr1y * this->b1->axisy));
				}
				HX_STACK_LINE(2569)
				{
					HX_STACK_LINE(2570)
					Float t = 1.0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2579)
					hx::AddEq(clip1x,(this->b1->posx * t));
					HX_STACK_LINE(2580)
					hx::AddEq(clip1y,(this->b1->posy * t));
				}
				HX_STACK_LINE(2582)
				if ((this->hpc2)){
					HX_STACK_LINE(2583)
					{
						HX_STACK_LINE(2584)
						clip2x = ((this->b1->axisy * this->c2->lr1x) - (this->b1->axisx * this->c2->lr1y));
						HX_STACK_LINE(2585)
						clip2y = ((this->c2->lr1x * this->b1->axisx) + (this->c2->lr1y * this->b1->axisy));
					}
					HX_STACK_LINE(2587)
					{
						HX_STACK_LINE(2588)
						Float t = 1.0;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2597)
						hx::AddEq(clip2x,(this->b1->posx * t));
						HX_STACK_LINE(2598)
						hx::AddEq(clip2y,(this->b1->posy * t));
					}
				}
			}
			HX_STACK_LINE(2602)
			Float err1 = ((((clip1x * gnormx) + (clip1y * gnormy)) - gproj) - this->radius);		HX_STACK_VAR(err1,"err1");
			HX_STACK_LINE(2603)
			hx::AddEq(err1,::nape::Config_obj::collisionSlop);
			HX_STACK_LINE(2604)
			Float err2 = 0.0;		HX_STACK_VAR(err2,"err2");
			HX_STACK_LINE(2605)
			if ((this->hpc2)){
				HX_STACK_LINE(2606)
				err2 = ((((clip2x * gnormx) + (clip2y * gnormy)) - gproj) - this->radius);
				HX_STACK_LINE(2607)
				hx::AddEq(err2,::nape::Config_obj::collisionSlop);
			}
			HX_STACK_LINE(2609)
			if (((bool((err1 < (int)0)) || bool((err2 < (int)0))))){
				HX_STACK_LINE(2610)
				if ((this->rev)){
					HX_STACK_LINE(2611)
					gnormx = -(gnormx);
					HX_STACK_LINE(2612)
					gnormy = -(gnormy);
				}
				HX_STACK_LINE(2614)
				Float c1r1x = 0.0;		HX_STACK_VAR(c1r1x,"c1r1x");
				HX_STACK_LINE(2615)
				Float c1r1y = 0.0;		HX_STACK_VAR(c1r1y,"c1r1y");
				HX_STACK_LINE(2616)
				{
					HX_STACK_LINE(2617)
					c1r1x = (clip1x - this->b1->posx);
					HX_STACK_LINE(2618)
					c1r1y = (clip1y - this->b1->posy);
				}
				HX_STACK_LINE(2620)
				Float c1r2x = 0.0;		HX_STACK_VAR(c1r2x,"c1r2x");
				HX_STACK_LINE(2621)
				Float c1r2y = 0.0;		HX_STACK_VAR(c1r2y,"c1r2y");
				HX_STACK_LINE(2622)
				{
					HX_STACK_LINE(2623)
					c1r2x = (clip1x - this->b2->posx);
					HX_STACK_LINE(2624)
					c1r2y = (clip1y - this->b2->posy);
				}
				HX_STACK_LINE(2626)
				Float c2r1x = (int)0;		HX_STACK_VAR(c2r1x,"c2r1x");
				HX_STACK_LINE(2627)
				Float c2r1y = (int)0;		HX_STACK_VAR(c2r1y,"c2r1y");
				HX_STACK_LINE(2644)
				Float c2r2x = (int)0;		HX_STACK_VAR(c2r2x,"c2r2x");
				HX_STACK_LINE(2645)
				Float c2r2y = (int)0;		HX_STACK_VAR(c2r2y,"c2r2y");
				HX_STACK_LINE(2662)
				if ((this->hpc2)){
					HX_STACK_LINE(2663)
					{
						HX_STACK_LINE(2664)
						c2r1x = (clip2x - this->b1->posx);
						HX_STACK_LINE(2665)
						c2r1y = (clip2y - this->b1->posy);
					}
					HX_STACK_LINE(2667)
					{
						HX_STACK_LINE(2668)
						c2r2x = (clip2x - this->b2->posx);
						HX_STACK_LINE(2669)
						c2r2y = (clip2y - this->b2->posy);
					}
					HX_STACK_LINE(2671)
					Float rn1a = ((gnormy * c1r1x) - (gnormx * c1r1y));		HX_STACK_VAR(rn1a,"rn1a");
					HX_STACK_LINE(2672)
					Float rn1b = ((gnormy * c1r2x) - (gnormx * c1r2y));		HX_STACK_VAR(rn1b,"rn1b");
					HX_STACK_LINE(2673)
					Float rn2a = ((gnormy * c2r1x) - (gnormx * c2r1y));		HX_STACK_VAR(rn2a,"rn2a");
					HX_STACK_LINE(2674)
					Float rn2b = ((gnormy * c2r2x) - (gnormx * c2r2y));		HX_STACK_VAR(rn2b,"rn2b");
					HX_STACK_LINE(2675)
					Float mass_sum = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(mass_sum,"mass_sum");
					HX_STACK_LINE(2676)
					{
						HX_STACK_LINE(2677)
						this->kMassa = ((mass_sum + ((this->b1->sinertia * rn1a) * rn1a)) + ((this->b2->sinertia * rn1b) * rn1b));
						HX_STACK_LINE(2678)
						this->kMassb = ((mass_sum + ((this->b1->sinertia * rn1a) * rn2a)) + ((this->b2->sinertia * rn1b) * rn2b));
						HX_STACK_LINE(2679)
						this->kMassc = ((mass_sum + ((this->b1->sinertia * rn2a) * rn2a)) + ((this->b2->sinertia * rn2b) * rn2b));
					}
					HX_STACK_LINE(2681)
					Float Ka = 0.0;		HX_STACK_VAR(Ka,"Ka");
					HX_STACK_LINE(2682)
					Float Kb = 0.0;		HX_STACK_VAR(Kb,"Kb");
					HX_STACK_LINE(2683)
					Float Kc = 0.0;		HX_STACK_VAR(Kc,"Kc");
					HX_STACK_LINE(2684)
					{
						HX_STACK_LINE(2685)
						Ka = this->kMassa;
						HX_STACK_LINE(2686)
						Kb = this->kMassb;
						HX_STACK_LINE(2687)
						Kc = this->kMassc;
					}
					HX_STACK_LINE(2689)
					Float bx = (err1 * this->biasCoef);		HX_STACK_VAR(bx,"bx");
					HX_STACK_LINE(2690)
					Float by = (err2 * this->biasCoef);		HX_STACK_VAR(by,"by");
					HX_STACK_LINE(2707)
					do{
						HX_STACK_LINE(2708)
						Float xx = 0.0;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(2709)
						Float xy = 0.0;		HX_STACK_VAR(xy,"xy");
						HX_STACK_LINE(2710)
						{
							HX_STACK_LINE(2711)
							xx = bx;
							HX_STACK_LINE(2712)
							xy = by;
							HX_STACK_LINE(2721)
							{
							}
						}
						HX_STACK_LINE(2730)
						{
							HX_STACK_LINE(2731)
							xx = -(xx);
							HX_STACK_LINE(2732)
							xy = -(xy);
						}
						HX_STACK_LINE(2734)
						{
							HX_STACK_LINE(2735)
							Float det = ((this->kMassa * this->kMassc) - (this->kMassb * this->kMassb));		HX_STACK_VAR(det,"det");
							HX_STACK_LINE(2736)
							if (((det != det))){
								HX_STACK_LINE(2736)
								xx = xy = (int)0;
							}
							else{
								HX_STACK_LINE(2737)
								if (((det == (int)0))){
									HX_STACK_LINE(2738)
									if (((this->kMassa != (int)0))){
										HX_STACK_LINE(2738)
										hx::DivEq(xx,this->kMassa);
									}
									else{
										HX_STACK_LINE(2739)
										xx = (int)0;
									}
									HX_STACK_LINE(2740)
									if (((this->kMassc != (int)0))){
										HX_STACK_LINE(2740)
										hx::DivEq(xy,this->kMassc);
									}
									else{
										HX_STACK_LINE(2741)
										xy = (int)0;
									}
								}
								else{
									HX_STACK_LINE(2744)
									det = (Float((int)1) / Float(det));
									HX_STACK_LINE(2745)
									Float t = (det * (((this->kMassc * xx) - (this->kMassb * xy))));		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(2746)
									xy = (det * (((this->kMassa * xy) - (this->kMassb * xx))));
									HX_STACK_LINE(2747)
									xx = t;
								}
							}
						}
						HX_STACK_LINE(2750)
						if (((bool((xx >= (int)0)) && bool((xy >= (int)0))))){
							HX_STACK_LINE(2751)
							{
								HX_STACK_LINE(2752)
								Float t = (((xx + xy)) * this->b1->imass);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2761)
								hx::SubEq(this->b1->posx,(gnormx * t));
								HX_STACK_LINE(2762)
								hx::SubEq(this->b1->posy,(gnormy * t));
							}
							HX_STACK_LINE(2764)
							{
								HX_STACK_LINE(2764)
								::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
								Float dr = (-(this->b1->iinertia) * (((rn1a * xx) + (rn2a * xy))));		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2764)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2764)
								if ((((dr * dr) > 0.0001))){
									HX_STACK_LINE(2764)
									_this->axisx = ::Math_obj::sin(_this->rot);
									HX_STACK_LINE(2764)
									_this->axisy = ::Math_obj::cos(_this->rot);
									HX_STACK_LINE(2764)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2764)
									Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2764)
									Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2764)
									Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2764)
									Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2764)
									_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
									HX_STACK_LINE(2764)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2765)
							{
								HX_STACK_LINE(2766)
								Float t = (((xx + xy)) * this->b2->imass);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2775)
								hx::AddEq(this->b2->posx,(gnormx * t));
								HX_STACK_LINE(2776)
								hx::AddEq(this->b2->posy,(gnormy * t));
							}
							HX_STACK_LINE(2778)
							{
								HX_STACK_LINE(2778)
								::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
								Float dr = (this->b2->iinertia * (((rn1b * xx) + (rn2b * xy))));		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2778)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2778)
								if ((((dr * dr) > 0.0001))){
									HX_STACK_LINE(2778)
									_this->axisx = ::Math_obj::sin(_this->rot);
									HX_STACK_LINE(2778)
									_this->axisy = ::Math_obj::cos(_this->rot);
									HX_STACK_LINE(2778)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2778)
									Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2778)
									Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2778)
									Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2778)
									Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2778)
									_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
									HX_STACK_LINE(2778)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2779)
							break;
						}
						HX_STACK_LINE(2781)
						{
							HX_STACK_LINE(2782)
							xx = (Float(-(bx)) / Float(Ka));
							HX_STACK_LINE(2783)
							xy = (int)0;
							HX_STACK_LINE(2792)
							{
							}
						}
						HX_STACK_LINE(2801)
						Float vn2 = ((Kb * xx) + by);		HX_STACK_VAR(vn2,"vn2");
						HX_STACK_LINE(2802)
						if (((bool((xx >= (int)0)) && bool((vn2 >= (int)0))))){
							HX_STACK_LINE(2803)
							{
								HX_STACK_LINE(2804)
								Float t = (((xx + xy)) * this->b1->imass);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2813)
								hx::SubEq(this->b1->posx,(gnormx * t));
								HX_STACK_LINE(2814)
								hx::SubEq(this->b1->posy,(gnormy * t));
							}
							HX_STACK_LINE(2816)
							{
								HX_STACK_LINE(2816)
								::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
								Float dr = (-(this->b1->iinertia) * (((rn1a * xx) + (rn2a * xy))));		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2816)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2816)
								if ((((dr * dr) > 0.0001))){
									HX_STACK_LINE(2816)
									_this->axisx = ::Math_obj::sin(_this->rot);
									HX_STACK_LINE(2816)
									_this->axisy = ::Math_obj::cos(_this->rot);
									HX_STACK_LINE(2816)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2816)
									Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2816)
									Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2816)
									Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2816)
									Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2816)
									_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
									HX_STACK_LINE(2816)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2817)
							{
								HX_STACK_LINE(2818)
								Float t = (((xx + xy)) * this->b2->imass);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2827)
								hx::AddEq(this->b2->posx,(gnormx * t));
								HX_STACK_LINE(2828)
								hx::AddEq(this->b2->posy,(gnormy * t));
							}
							HX_STACK_LINE(2830)
							{
								HX_STACK_LINE(2830)
								::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
								Float dr = (this->b2->iinertia * (((rn1b * xx) + (rn2b * xy))));		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2830)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2830)
								if ((((dr * dr) > 0.0001))){
									HX_STACK_LINE(2830)
									_this->axisx = ::Math_obj::sin(_this->rot);
									HX_STACK_LINE(2830)
									_this->axisy = ::Math_obj::cos(_this->rot);
									HX_STACK_LINE(2830)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2830)
									Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2830)
									Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2830)
									Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2830)
									Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2830)
									_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
									HX_STACK_LINE(2830)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2831)
							break;
						}
						HX_STACK_LINE(2833)
						{
							HX_STACK_LINE(2834)
							xx = (int)0;
							HX_STACK_LINE(2835)
							xy = (Float(-(by)) / Float(Kc));
							HX_STACK_LINE(2844)
							{
							}
						}
						HX_STACK_LINE(2853)
						Float vn1 = ((Kb * xy) + bx);		HX_STACK_VAR(vn1,"vn1");
						HX_STACK_LINE(2854)
						if (((bool((xy >= (int)0)) && bool((vn1 >= (int)0))))){
							HX_STACK_LINE(2855)
							{
								HX_STACK_LINE(2856)
								Float t = (((xx + xy)) * this->b1->imass);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2865)
								hx::SubEq(this->b1->posx,(gnormx * t));
								HX_STACK_LINE(2866)
								hx::SubEq(this->b1->posy,(gnormy * t));
							}
							HX_STACK_LINE(2868)
							{
								HX_STACK_LINE(2868)
								::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
								Float dr = (-(this->b1->iinertia) * (((rn1a * xx) + (rn2a * xy))));		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2868)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2868)
								if ((((dr * dr) > 0.0001))){
									HX_STACK_LINE(2868)
									_this->axisx = ::Math_obj::sin(_this->rot);
									HX_STACK_LINE(2868)
									_this->axisy = ::Math_obj::cos(_this->rot);
									HX_STACK_LINE(2868)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2868)
									Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2868)
									Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2868)
									Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2868)
									Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2868)
									_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
									HX_STACK_LINE(2868)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2869)
							{
								HX_STACK_LINE(2870)
								Float t = (((xx + xy)) * this->b2->imass);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2879)
								hx::AddEq(this->b2->posx,(gnormx * t));
								HX_STACK_LINE(2880)
								hx::AddEq(this->b2->posy,(gnormy * t));
							}
							HX_STACK_LINE(2882)
							{
								HX_STACK_LINE(2882)
								::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
								Float dr = (this->b2->iinertia * (((rn1b * xx) + (rn2b * xy))));		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(2882)
								hx::AddEq(_this->rot,dr);
								HX_STACK_LINE(2882)
								if ((((dr * dr) > 0.0001))){
									HX_STACK_LINE(2882)
									_this->axisx = ::Math_obj::sin(_this->rot);
									HX_STACK_LINE(2882)
									_this->axisy = ::Math_obj::cos(_this->rot);
									HX_STACK_LINE(2882)
									Dynamic();
								}
								else{
									HX_STACK_LINE(2882)
									Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(2882)
									Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(2882)
									Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
									HX_STACK_LINE(2882)
									Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(2882)
									_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
									HX_STACK_LINE(2882)
									_this->axisx = nx;
								}
							}
							HX_STACK_LINE(2883)
							break;
						}
					}
while((false));
				}
				else{
					HX_STACK_LINE(2889)
					Float rn1 = ((gnormy * c1r1x) - (gnormx * c1r1y));		HX_STACK_VAR(rn1,"rn1");
					HX_STACK_LINE(2890)
					Float rn2 = ((gnormy * c1r2x) - (gnormx * c1r2y));		HX_STACK_VAR(rn2,"rn2");
					HX_STACK_LINE(2891)
					Float K = (((this->b2->smass + ((rn2 * rn2) * this->b2->sinertia)) + this->b1->smass) + ((rn1 * rn1) * this->b1->sinertia));		HX_STACK_VAR(K,"K");
					HX_STACK_LINE(2892)
					if (((K != (int)0))){
						HX_STACK_LINE(2893)
						Float jn = (Float((-(this->biasCoef) * err1)) / Float(K));		HX_STACK_VAR(jn,"jn");
						HX_STACK_LINE(2894)
						Float Jx = 0.0;		HX_STACK_VAR(Jx,"Jx");
						HX_STACK_LINE(2895)
						Float Jy = 0.0;		HX_STACK_VAR(Jy,"Jy");
						HX_STACK_LINE(2896)
						{
							HX_STACK_LINE(2897)
							Float t = jn;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2906)
							Jx = (gnormx * t);
							HX_STACK_LINE(2907)
							Jy = (gnormy * t);
						}
						HX_STACK_LINE(2909)
						{
							HX_STACK_LINE(2910)
							Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2919)
							hx::SubEq(this->b1->posx,(Jx * t));
							HX_STACK_LINE(2920)
							hx::SubEq(this->b1->posy,(Jy * t));
						}
						HX_STACK_LINE(2922)
						{
							HX_STACK_LINE(2922)
							::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
							Float dr = ((-(rn1) * this->b1->iinertia) * jn);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(2922)
							hx::AddEq(_this->rot,dr);
							HX_STACK_LINE(2922)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(2922)
								_this->axisx = ::Math_obj::sin(_this->rot);
								HX_STACK_LINE(2922)
								_this->axisy = ::Math_obj::cos(_this->rot);
								HX_STACK_LINE(2922)
								Dynamic();
							}
							else{
								HX_STACK_LINE(2922)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(2922)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2922)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(2922)
								Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(2922)
								_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
								HX_STACK_LINE(2922)
								_this->axisx = nx;
							}
						}
						HX_STACK_LINE(2923)
						{
							HX_STACK_LINE(2924)
							Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2933)
							hx::AddEq(this->b2->posx,(Jx * t));
							HX_STACK_LINE(2934)
							hx::AddEq(this->b2->posy,(Jy * t));
						}
						HX_STACK_LINE(2936)
						{
							HX_STACK_LINE(2936)
							::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
							Float dr = ((rn2 * this->b2->iinertia) * jn);		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(2936)
							hx::AddEq(_this->rot,dr);
							HX_STACK_LINE(2936)
							if ((((dr * dr) > 0.0001))){
								HX_STACK_LINE(2936)
								_this->axisx = ::Math_obj::sin(_this->rot);
								HX_STACK_LINE(2936)
								_this->axisy = ::Math_obj::cos(_this->rot);
								HX_STACK_LINE(2936)
								Dynamic();
							}
							else{
								HX_STACK_LINE(2936)
								Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(2936)
								Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(2936)
								Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(2936)
								Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(2936)
								_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
								HX_STACK_LINE(2936)
								_this->axisx = nx;
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,applyImpulsePos,(void))

Void ZPP_ColArbiter_obj::applyImpulseVel( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::applyImpulseVel","zpp_nape/dynamics/Arbiter.hx",2190);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2191)
		Float jx;		HX_STACK_VAR(jx,"jx");
		HX_STACK_LINE(2192)
		Float jy;		HX_STACK_VAR(jy,"jy");
		HX_STACK_LINE(2193)
		Float j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(2194)
		Float jMax;		HX_STACK_VAR(jMax,"jMax");
		HX_STACK_LINE(2195)
		Float jOld;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(2196)
		Float cjAcc;		HX_STACK_VAR(cjAcc,"cjAcc");
		HX_STACK_LINE(2197)
		Float v1x = (((this->k1x + this->b2->velx) - (this->c1->r2y * this->b2->angvel)) - ((this->b1->velx - (this->c1->r1y * this->b1->angvel))));		HX_STACK_VAR(v1x,"v1x");
		HX_STACK_LINE(2198)
		Float v1y = (((this->k1y + this->b2->vely) + (this->c1->r2x * this->b2->angvel)) - ((this->b1->vely + (this->c1->r1x * this->b1->angvel))));		HX_STACK_VAR(v1y,"v1y");
		HX_STACK_LINE(2199)
		j = (((((v1y * this->nx) - (v1x * this->ny)) + this->surfacex)) * this->c1->tMass);
		HX_STACK_LINE(2200)
		jMax = (this->c1->friction * this->c1->jnAcc);
		HX_STACK_LINE(2201)
		jOld = this->c1->jtAcc;
		HX_STACK_LINE(2202)
		cjAcc = (jOld - j);
		HX_STACK_LINE(2203)
		if (((cjAcc > jMax))){
			HX_STACK_LINE(2203)
			cjAcc = jMax;
		}
		else{
			HX_STACK_LINE(2203)
			if (((cjAcc < -(jMax)))){
				HX_STACK_LINE(2203)
				cjAcc = -(jMax);
			}
		}
		HX_STACK_LINE(2204)
		j = (cjAcc - jOld);
		HX_STACK_LINE(2205)
		this->c1->jtAcc = cjAcc;
		HX_STACK_LINE(2206)
		jx = (-(this->ny) * j);
		HX_STACK_LINE(2207)
		jy = (this->nx * j);
		HX_STACK_LINE(2208)
		hx::AddEq(this->b2->velx,(jx * this->b2->imass));
		HX_STACK_LINE(2209)
		hx::AddEq(this->b2->vely,(jy * this->b2->imass));
		HX_STACK_LINE(2210)
		hx::SubEq(this->b1->velx,(jx * this->b1->imass));
		HX_STACK_LINE(2211)
		hx::SubEq(this->b1->vely,(jy * this->b1->imass));
		HX_STACK_LINE(2212)
		hx::AddEq(this->b2->angvel,((this->rt1b * j) * this->b2->iinertia));
		HX_STACK_LINE(2213)
		hx::SubEq(this->b1->angvel,((this->rt1a * j) * this->b1->iinertia));
		HX_STACK_LINE(2214)
		if ((this->hc2)){
			HX_STACK_LINE(2215)
			Float v2x = (((this->k2x + this->b2->velx) - (this->c2->r2y * this->b2->angvel)) - ((this->b1->velx - (this->c2->r1y * this->b1->angvel))));		HX_STACK_VAR(v2x,"v2x");
			HX_STACK_LINE(2216)
			Float v2y = (((this->k2y + this->b2->vely) + (this->c2->r2x * this->b2->angvel)) - ((this->b1->vely + (this->c2->r1x * this->b1->angvel))));		HX_STACK_VAR(v2y,"v2y");
			HX_STACK_LINE(2217)
			j = (((((v2y * this->nx) - (v2x * this->ny)) + this->surfacex)) * this->c2->tMass);
			HX_STACK_LINE(2218)
			jMax = (this->c2->friction * this->c2->jnAcc);
			HX_STACK_LINE(2219)
			jOld = this->c2->jtAcc;
			HX_STACK_LINE(2220)
			cjAcc = (jOld - j);
			HX_STACK_LINE(2221)
			if (((cjAcc > jMax))){
				HX_STACK_LINE(2221)
				cjAcc = jMax;
			}
			else{
				HX_STACK_LINE(2221)
				if (((cjAcc < -(jMax)))){
					HX_STACK_LINE(2221)
					cjAcc = -(jMax);
				}
			}
			HX_STACK_LINE(2222)
			j = (cjAcc - jOld);
			HX_STACK_LINE(2223)
			this->c2->jtAcc = cjAcc;
			HX_STACK_LINE(2224)
			jx = (-(this->ny) * j);
			HX_STACK_LINE(2225)
			jy = (this->nx * j);
			HX_STACK_LINE(2226)
			hx::AddEq(this->b2->velx,(jx * this->b2->imass));
			HX_STACK_LINE(2227)
			hx::AddEq(this->b2->vely,(jy * this->b2->imass));
			HX_STACK_LINE(2228)
			hx::SubEq(this->b1->velx,(jx * this->b1->imass));
			HX_STACK_LINE(2229)
			hx::SubEq(this->b1->vely,(jy * this->b1->imass));
			HX_STACK_LINE(2230)
			hx::AddEq(this->b2->angvel,((this->rt2b * j) * this->b2->iinertia));
			HX_STACK_LINE(2231)
			hx::SubEq(this->b1->angvel,((this->rt2a * j) * this->b1->iinertia));
			HX_STACK_LINE(2232)
			v1x = (((this->k1x + this->b2->velx) - (this->c1->r2y * this->b2->angvel)) - ((this->b1->velx - (this->c1->r1y * this->b1->angvel))));
			HX_STACK_LINE(2233)
			v1y = (((this->k1y + this->b2->vely) + (this->c1->r2x * this->b2->angvel)) - ((this->b1->vely + (this->c1->r1x * this->b1->angvel))));
			HX_STACK_LINE(2234)
			v2x = (((this->k2x + this->b2->velx) - (this->c2->r2y * this->b2->angvel)) - ((this->b1->velx - (this->c2->r1y * this->b1->angvel))));
			HX_STACK_LINE(2235)
			v2y = (((this->k2y + this->b2->vely) + (this->c2->r2x * this->b2->angvel)) - ((this->b1->vely + (this->c2->r1x * this->b1->angvel))));
			HX_STACK_LINE(2236)
			Float ax = this->c1->jnAcc;		HX_STACK_VAR(ax,"ax");
			HX_STACK_LINE(2237)
			Float ay = this->c2->jnAcc;		HX_STACK_VAR(ay,"ay");
			HX_STACK_LINE(2254)
			Float jnx = (((((v1x * this->nx) + (v1y * this->ny)) + this->surfacey) + this->c1->bounce) - (((this->Ka * ax) + (this->Kb * ay))));		HX_STACK_VAR(jnx,"jnx");
			HX_STACK_LINE(2255)
			Float jny = (((((v2x * this->nx) + (v2y * this->ny)) + this->surfacey) + this->c2->bounce) - (((this->Kb * ax) + (this->Kc * ay))));		HX_STACK_VAR(jny,"jny");
			HX_STACK_LINE(2256)
			Float xx = -((((this->kMassa * jnx) + (this->kMassb * jny))));		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(2257)
			Float xy = -((((this->kMassb * jnx) + (this->kMassc * jny))));		HX_STACK_VAR(xy,"xy");
			HX_STACK_LINE(2258)
			if (((bool((xx >= (int)0)) && bool((xy >= (int)0))))){
				HX_STACK_LINE(2259)
				{
					HX_STACK_LINE(2260)
					jnx = (xx - ax);
					HX_STACK_LINE(2261)
					jny = (xy - ay);
				}
				HX_STACK_LINE(2263)
				this->c1->jnAcc = xx;
				HX_STACK_LINE(2264)
				this->c2->jnAcc = xy;
			}
			else{
				HX_STACK_LINE(2267)
				xx = (-(this->c1->nMass) * jnx);
				HX_STACK_LINE(2268)
				if (((bool((xx >= (int)0)) && bool((((this->Kb * xx) + jny) >= (int)0))))){
					HX_STACK_LINE(2269)
					jnx = (xx - ax);
					HX_STACK_LINE(2270)
					jny = -(ay);
					HX_STACK_LINE(2271)
					this->c1->jnAcc = xx;
					HX_STACK_LINE(2272)
					this->c2->jnAcc = (int)0;
				}
				else{
					HX_STACK_LINE(2275)
					xy = (-(this->c2->nMass) * jny);
					HX_STACK_LINE(2276)
					if (((bool((xy >= (int)0)) && bool((((this->Kb * xy) + jnx) >= (int)0))))){
						HX_STACK_LINE(2277)
						jnx = -(ax);
						HX_STACK_LINE(2278)
						jny = (xy - ay);
						HX_STACK_LINE(2279)
						this->c1->jnAcc = (int)0;
						HX_STACK_LINE(2280)
						this->c2->jnAcc = xy;
					}
					else{
						HX_STACK_LINE(2282)
						if (((bool((jnx >= (int)0)) && bool((jny >= (int)0))))){
							HX_STACK_LINE(2283)
							jnx = -(ax);
							HX_STACK_LINE(2284)
							jny = -(ay);
							HX_STACK_LINE(2285)
							this->c1->jnAcc = this->c2->jnAcc = (int)0;
						}
						else{
							HX_STACK_LINE(2288)
							jnx = (int)0;
							HX_STACK_LINE(2289)
							jny = (int)0;
						}
					}
				}
			}
			HX_STACK_LINE(2293)
			j = (jnx + jny);
			HX_STACK_LINE(2294)
			jx = (this->nx * j);
			HX_STACK_LINE(2295)
			jy = (this->ny * j);
			HX_STACK_LINE(2296)
			hx::AddEq(this->b2->velx,(jx * this->b2->imass));
			HX_STACK_LINE(2297)
			hx::AddEq(this->b2->vely,(jy * this->b2->imass));
			HX_STACK_LINE(2298)
			hx::SubEq(this->b1->velx,(jx * this->b1->imass));
			HX_STACK_LINE(2299)
			hx::SubEq(this->b1->vely,(jy * this->b1->imass));
			HX_STACK_LINE(2300)
			hx::AddEq(this->b2->angvel,((((this->rn1b * jnx) + (this->rn2b * jny))) * this->b2->iinertia));
			HX_STACK_LINE(2301)
			hx::SubEq(this->b1->angvel,((((this->rn1a * jnx) + (this->rn2a * jny))) * this->b1->iinertia));
		}
		else{
			HX_STACK_LINE(2304)
			if (((this->radius != 0.0))){
				HX_STACK_LINE(2305)
				Float dw = (this->b2->angvel - this->b1->angvel);		HX_STACK_VAR(dw,"dw");
				HX_STACK_LINE(2306)
				j = (dw * this->rMass);
				HX_STACK_LINE(2307)
				jMax = (this->rfric * this->c1->jnAcc);
				HX_STACK_LINE(2308)
				jOld = this->jrAcc;
				HX_STACK_LINE(2309)
				hx::SubEq(this->jrAcc,j);
				HX_STACK_LINE(2310)
				if (((this->jrAcc > jMax))){
					HX_STACK_LINE(2310)
					this->jrAcc = jMax;
				}
				else{
					HX_STACK_LINE(2310)
					if (((this->jrAcc < -(jMax)))){
						HX_STACK_LINE(2310)
						this->jrAcc = -(jMax);
					}
				}
				HX_STACK_LINE(2311)
				j = (this->jrAcc - jOld);
				HX_STACK_LINE(2312)
				hx::AddEq(this->b2->angvel,(j * this->b2->iinertia));
				HX_STACK_LINE(2313)
				hx::SubEq(this->b1->angvel,(j * this->b1->iinertia));
			}
			HX_STACK_LINE(2315)
			v1x = (((this->k1x + this->b2->velx) - (this->c1->r2y * this->b2->angvel)) - ((this->b1->velx - (this->c1->r1y * this->b1->angvel))));
			HX_STACK_LINE(2316)
			v1y = (((this->k1y + this->b2->vely) + (this->c1->r2x * this->b2->angvel)) - ((this->b1->vely + (this->c1->r1x * this->b1->angvel))));
			HX_STACK_LINE(2317)
			j = ((((this->c1->bounce + (((this->nx * v1x) + (this->ny * v1y)))) + this->surfacey)) * this->c1->nMass);
			HX_STACK_LINE(2318)
			jOld = this->c1->jnAcc;
			HX_STACK_LINE(2319)
			cjAcc = (jOld - j);
			HX_STACK_LINE(2320)
			if (((cjAcc < 0.0))){
				HX_STACK_LINE(2320)
				cjAcc = 0.0;
			}
			HX_STACK_LINE(2321)
			j = (cjAcc - jOld);
			HX_STACK_LINE(2322)
			this->c1->jnAcc = cjAcc;
			HX_STACK_LINE(2323)
			jx = (this->nx * j);
			HX_STACK_LINE(2324)
			jy = (this->ny * j);
			HX_STACK_LINE(2325)
			hx::AddEq(this->b2->velx,(jx * this->b2->imass));
			HX_STACK_LINE(2326)
			hx::AddEq(this->b2->vely,(jy * this->b2->imass));
			HX_STACK_LINE(2327)
			hx::SubEq(this->b1->velx,(jx * this->b1->imass));
			HX_STACK_LINE(2328)
			hx::SubEq(this->b1->vely,(jy * this->b1->imass));
			HX_STACK_LINE(2329)
			hx::AddEq(this->b2->angvel,((this->rn1b * j) * this->b2->iinertia));
			HX_STACK_LINE(2330)
			hx::SubEq(this->b1->angvel,((this->rn1a * j) * this->b1->iinertia));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,applyImpulseVel,(void))

Void ZPP_ColArbiter_obj::warmStart( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::warmStart","zpp_nape/dynamics/Arbiter.hx",2120);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2121)
		{
			HX_STACK_LINE(2122)
			Float jx = ((this->nx * this->c1->jnAcc) - (this->ny * this->c1->jtAcc));		HX_STACK_VAR(jx,"jx");
			HX_STACK_LINE(2123)
			Float jy = ((this->ny * this->c1->jnAcc) + (this->nx * this->c1->jtAcc));		HX_STACK_VAR(jy,"jy");
			HX_STACK_LINE(2124)
			{
				HX_STACK_LINE(2125)
				Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2134)
				hx::SubEq(this->b1->velx,(jx * t));
				HX_STACK_LINE(2135)
				hx::SubEq(this->b1->vely,(jy * t));
			}
			HX_STACK_LINE(2137)
			hx::SubEq(this->b1->angvel,(this->b1->iinertia * (((jy * this->c1->r1x) - (jx * this->c1->r1y)))));
			HX_STACK_LINE(2138)
			{
				HX_STACK_LINE(2139)
				Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2148)
				hx::AddEq(this->b2->velx,(jx * t));
				HX_STACK_LINE(2149)
				hx::AddEq(this->b2->vely,(jy * t));
			}
			HX_STACK_LINE(2151)
			hx::AddEq(this->b2->angvel,(this->b2->iinertia * (((jy * this->c1->r2x) - (jx * this->c1->r2y)))));
		}
		HX_STACK_LINE(2153)
		if ((this->hc2)){
			HX_STACK_LINE(2154)
			Float jx = ((this->nx * this->c2->jnAcc) - (this->ny * this->c2->jtAcc));		HX_STACK_VAR(jx,"jx");
			HX_STACK_LINE(2155)
			Float jy = ((this->ny * this->c2->jnAcc) + (this->nx * this->c2->jtAcc));		HX_STACK_VAR(jy,"jy");
			HX_STACK_LINE(2156)
			{
				HX_STACK_LINE(2157)
				Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2166)
				hx::SubEq(this->b1->velx,(jx * t));
				HX_STACK_LINE(2167)
				hx::SubEq(this->b1->vely,(jy * t));
			}
			HX_STACK_LINE(2169)
			hx::SubEq(this->b1->angvel,(this->b1->iinertia * (((jy * this->c2->r1x) - (jx * this->c2->r1y)))));
			HX_STACK_LINE(2170)
			{
				HX_STACK_LINE(2171)
				Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2180)
				hx::AddEq(this->b2->velx,(jx * t));
				HX_STACK_LINE(2181)
				hx::AddEq(this->b2->vely,(jy * t));
			}
			HX_STACK_LINE(2183)
			hx::AddEq(this->b2->angvel,(this->b2->iinertia * (((jy * this->c2->r2x) - (jx * this->c2->r2y)))));
		}
		HX_STACK_LINE(2185)
		hx::AddEq(this->b2->angvel,(this->jrAcc * this->b2->iinertia));
		HX_STACK_LINE(2186)
		hx::SubEq(this->b1->angvel,(this->jrAcc * this->b1->iinertia));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,warmStart,(void))

bool ZPP_ColArbiter_obj::preStep( Float dt){
	HX_STACK_PUSH("ZPP_ColArbiter::preStep","zpp_nape/dynamics/Arbiter.hx",1875);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dt,"dt");
	HX_STACK_LINE(1876)
	if ((this->invalidated)){
		HX_STACK_LINE(1876)
		this->invalidated = false;
		HX_STACK_LINE(1876)
		{
			HX_STACK_LINE(1876)
			if ((!(this->userdef_restitution))){
				HX_STACK_LINE(1876)
				if (((bool((this->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((this->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(1876)
					this->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(1876)
					if (((bool((this->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((this->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(1876)
						this->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(1876)
						this->restitution = (Float(((this->s1->material->elasticity + this->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(1876)
				if (((this->restitution < (int)0))){
					HX_STACK_LINE(1876)
					this->restitution = (int)0;
				}
				HX_STACK_LINE(1876)
				if (((this->restitution > (int)1))){
					HX_STACK_LINE(1876)
					this->restitution = (int)1;
				}
			}
			HX_STACK_LINE(1876)
			if ((!(this->userdef_dyn_fric))){
				HX_STACK_LINE(1876)
				this->dyn_fric = ::Math_obj::sqrt((this->s1->material->dynamicFriction * this->s2->material->dynamicFriction));
			}
			HX_STACK_LINE(1876)
			if ((!(this->userdef_stat_fric))){
				HX_STACK_LINE(1876)
				this->stat_fric = ::Math_obj::sqrt((this->s1->material->staticFriction * this->s2->material->staticFriction));
			}
			HX_STACK_LINE(1876)
			if ((!(this->userdef_rfric))){
				HX_STACK_LINE(1876)
				this->rfric = ::Math_obj::sqrt((this->s1->material->rollingFriction * this->s2->material->rollingFriction));
			}
		}
	}
	HX_STACK_LINE(1879)
	if (((this->pre_dt == -1.0))){
		HX_STACK_LINE(1879)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(1880)
	Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(1881)
	this->pre_dt = dt;
	HX_STACK_LINE(1882)
	Float mass_sum = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(mass_sum,"mass_sum");
	HX_STACK_LINE(1883)
	this->hc2 = false;
	HX_STACK_LINE(1884)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(1885)
	bool statType = (bool(!(((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) || bool(!(((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))));		HX_STACK_VAR(statType,"statType");
	struct _Function_1_1{
		inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1886);
			{
				HX_STACK_LINE(1886)
				return (  ((__this->continuous)) ? Float(::nape::Config_obj::contactContinuousStaticBiasCoef) : Float(::nape::Config_obj::contactStaticBiasCoef) );
			}
			return null();
		}
	};
	HX_STACK_LINE(1886)
	Float bias = (  ((statType)) ? Float(_Function_1_1::Block(this)) : Float((  ((this->continuous)) ? Float(::nape::Config_obj::contactContinuousBiasCoef) : Float(::nape::Config_obj::contactBiasCoef) )) );		HX_STACK_VAR(bias,"bias");
	HX_STACK_LINE(1887)
	this->biasCoef = bias;
	HX_STACK_LINE(1888)
	this->continuous = false;
	HX_STACK_LINE(1889)
	::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1890)
	::zpp_nape::dynamics::ZPP_IContact prei = null();		HX_STACK_VAR(prei,"prei");
	HX_STACK_LINE(1891)
	::zpp_nape::dynamics::ZPP_IContact cx_itei = this->innards->next;		HX_STACK_VAR(cx_itei,"cx_itei");
	HX_STACK_LINE(1892)
	{
		HX_STACK_LINE(1893)
		::zpp_nape::dynamics::ZPP_Contact cx_ite = this->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1894)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1895)
			::zpp_nape::dynamics::ZPP_Contact c = cx_ite;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(1896)
			{
				HX_STACK_LINE(1897)
				if ((((c->stamp + ::nape::Config_obj::arbiterExpirationDelay) < this->stamp))){
					struct _Function_5_1{
						inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_ColArbiter_obj *__this,::zpp_nape::dynamics::ZPP_Contact &pre){
							HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1898);
							{
								HX_STACK_LINE(1898)
								::zpp_nape::dynamics::ZPP_Contact _this = __this->contacts;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1898)
								::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(1898)
								::zpp_nape::dynamics::ZPP_Contact ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1898)
								if (((pre == null()))){
									HX_STACK_LINE(1898)
									old = _this->next;
									HX_STACK_LINE(1898)
									ret = old->next;
									HX_STACK_LINE(1898)
									_this->next = ret;
									HX_STACK_LINE(1898)
									if (((_this->next == null()))){
										HX_STACK_LINE(1898)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(1898)
									old = pre->next;
									HX_STACK_LINE(1898)
									ret = old->next;
									HX_STACK_LINE(1898)
									pre->next = ret;
									HX_STACK_LINE(1898)
									if (((ret == null()))){
										HX_STACK_LINE(1898)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(1898)
								old->_inuse = false;
								HX_STACK_LINE(1898)
								_this->modified = true;
								HX_STACK_LINE(1898)
								(_this->length)--;
								HX_STACK_LINE(1898)
								_this->pushmod = true;
								HX_STACK_LINE(1898)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1898)
					cx_ite = _Function_5_1::Block(this,pre);
					struct _Function_5_2{
						inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_ColArbiter_obj *__this,::zpp_nape::dynamics::ZPP_IContact &prei){
							HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1899);
							{
								HX_STACK_LINE(1899)
								::zpp_nape::dynamics::ZPP_IContact _this = __this->innards;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1899)
								::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(1899)
								::zpp_nape::dynamics::ZPP_IContact ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1899)
								if (((prei == null()))){
									HX_STACK_LINE(1899)
									old = _this->next;
									HX_STACK_LINE(1899)
									ret = old->next;
									HX_STACK_LINE(1899)
									_this->next = ret;
									HX_STACK_LINE(1899)
									if (((_this->next == null()))){
										HX_STACK_LINE(1899)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(1899)
									old = prei->next;
									HX_STACK_LINE(1899)
									ret = old->next;
									HX_STACK_LINE(1899)
									prei->next = ret;
									HX_STACK_LINE(1899)
									if (((ret == null()))){
										HX_STACK_LINE(1899)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(1899)
								old->_inuse = false;
								HX_STACK_LINE(1899)
								_this->modified = true;
								HX_STACK_LINE(1899)
								(_this->length)--;
								HX_STACK_LINE(1899)
								_this->pushmod = true;
								HX_STACK_LINE(1899)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1899)
					cx_itei = _Function_5_2::Block(this,prei);
					HX_STACK_LINE(1900)
					{
						HX_STACK_LINE(1901)
						::zpp_nape::dynamics::ZPP_Contact o = c;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1910)
						o->arbiter = null();
						HX_STACK_LINE(1911)
						o->next = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
						HX_STACK_LINE(1912)
						::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1917)
					continue;
				}
				HX_STACK_LINE(1921)
				::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
				HX_STACK_LINE(1922)
				bool pact = c->active;		HX_STACK_VAR(pact,"pact");
				HX_STACK_LINE(1923)
				c->active = (c->stamp == this->stamp);
				HX_STACK_LINE(1924)
				if ((c->active)){
					HX_STACK_LINE(1927)
					if ((fst)){
						HX_STACK_LINE(1928)
						fst = false;
						HX_STACK_LINE(1929)
						this->c1 = ci;
						HX_STACK_LINE(1930)
						this->oc1 = c;
					}
					else{
						HX_STACK_LINE(1933)
						this->hc2 = true;
						HX_STACK_LINE(1934)
						this->c2 = ci;
						HX_STACK_LINE(1935)
						this->oc2 = c;
					}
					HX_STACK_LINE(1937)
					{
						HX_STACK_LINE(1938)
						ci->r2x = (c->px - this->b2->posx);
						HX_STACK_LINE(1939)
						ci->r2y = (c->py - this->b2->posy);
					}
					HX_STACK_LINE(1941)
					{
						HX_STACK_LINE(1942)
						ci->r1x = (c->px - this->b1->posx);
						HX_STACK_LINE(1943)
						ci->r1y = (c->py - this->b1->posy);
					}
					struct _Function_5_1{
						inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter_obj *__this,::zpp_nape::dynamics::ZPP_IContact &ci){
							HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1945);
							{
								HX_STACK_LINE(1945)
								Float x = ((ci->r2x * __this->nx) + (ci->r2y * __this->ny));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1945)
								return (x * x);
							}
							return null();
						}
					};
					HX_STACK_LINE(1945)
					Float kt = (mass_sum + (this->b2->sinertia * _Function_5_1::Block(this,ci)));		HX_STACK_VAR(kt,"kt");
					struct _Function_5_2{
						inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter_obj *__this,::zpp_nape::dynamics::ZPP_IContact &ci){
							HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1946);
							{
								HX_STACK_LINE(1946)
								Float x = ((ci->r1x * __this->nx) + (ci->r1y * __this->ny));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1946)
								return (x * x);
							}
							return null();
						}
					};
					HX_STACK_LINE(1946)
					hx::AddEq(kt,(this->b1->sinertia * _Function_5_2::Block(this,ci)));
					HX_STACK_LINE(1947)
					ci->tMass = (  (((kt < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? Float((int)0) : Float((Float(1.0) / Float(kt))) );
					struct _Function_5_3{
						inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter_obj *__this,::zpp_nape::dynamics::ZPP_IContact &ci){
							HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1948);
							{
								HX_STACK_LINE(1948)
								Float x = ((__this->ny * ci->r2x) - (__this->nx * ci->r2y));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1948)
								return (x * x);
							}
							return null();
						}
					};
					HX_STACK_LINE(1948)
					Float nt = (mass_sum + (this->b2->sinertia * _Function_5_3::Block(this,ci)));		HX_STACK_VAR(nt,"nt");
					struct _Function_5_4{
						inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter_obj *__this,::zpp_nape::dynamics::ZPP_IContact &ci){
							HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1949);
							{
								HX_STACK_LINE(1949)
								Float x = ((__this->ny * ci->r1x) - (__this->nx * ci->r1y));		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1949)
								return (x * x);
							}
							return null();
						}
					};
					HX_STACK_LINE(1949)
					hx::AddEq(nt,(this->b1->sinertia * _Function_5_4::Block(this,ci)));
					HX_STACK_LINE(1950)
					ci->nMass = (  (((nt < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? Float((int)0) : Float((Float(1.0) / Float(nt))) );
					HX_STACK_LINE(1951)
					Float vrx = 0.0;		HX_STACK_VAR(vrx,"vrx");
					HX_STACK_LINE(1952)
					Float vry = 0.0;		HX_STACK_VAR(vry,"vry");
					HX_STACK_LINE(1953)
					{
						HX_STACK_LINE(1954)
						Float ang = (this->b2->angvel + this->b2->kinangvel);		HX_STACK_VAR(ang,"ang");
						HX_STACK_LINE(1955)
						vrx = ((this->b2->velx + this->b2->kinvelx) - (ci->r2y * ang));
						HX_STACK_LINE(1956)
						vry = ((this->b2->vely + this->b2->kinvely) + (ci->r2x * ang));
						HX_STACK_LINE(1957)
						ang = (this->b1->angvel + this->b1->kinangvel);
						HX_STACK_LINE(1958)
						hx::SubEq(vrx,((this->b1->velx + this->b1->kinvelx) - (ci->r1y * ang)));
						HX_STACK_LINE(1959)
						hx::SubEq(vry,((this->b1->vely + this->b1->kinvely) + (ci->r1x * ang)));
					}
					HX_STACK_LINE(1961)
					Float vdot = ((this->nx * vrx) + (this->ny * vry));		HX_STACK_VAR(vdot,"vdot");
					HX_STACK_LINE(1962)
					c->elasticity = this->restitution;
					HX_STACK_LINE(1963)
					ci->bounce = (vdot * c->elasticity);
					HX_STACK_LINE(1964)
					if (((ci->bounce > -(::nape::Config_obj::elasticThreshold)))){
						HX_STACK_LINE(1964)
						ci->bounce = (int)0;
					}
					HX_STACK_LINE(1967)
					vdot = ((vry * this->nx) - (vrx * this->ny));
					HX_STACK_LINE(1968)
					Float thr = ::nape::Config_obj::staticFrictionThreshold;		HX_STACK_VAR(thr,"thr");
					HX_STACK_LINE(1969)
					if ((((vdot * vdot) > (thr * thr)))){
						HX_STACK_LINE(1969)
						ci->friction = this->dyn_fric;
					}
					else{
						HX_STACK_LINE(1972)
						ci->friction = this->stat_fric;
					}
					HX_STACK_LINE(1975)
					hx::MultEq(ci->jnAcc,dtratio);
					HX_STACK_LINE(1976)
					hx::MultEq(ci->jtAcc,dtratio);
				}
				HX_STACK_LINE(1978)
				if (((pact != c->active))){
					HX_STACK_LINE(1978)
					this->contacts->modified = true;
				}
				HX_STACK_LINE(1979)
				pre = cx_ite;
				HX_STACK_LINE(1980)
				prei = cx_itei;
				HX_STACK_LINE(1981)
				cx_itei = cx_itei->next;
			}
			HX_STACK_LINE(1983)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1986)
	if ((this->hc2)){
		HX_STACK_LINE(1987)
		this->hpc2 = true;
		HX_STACK_LINE(1988)
		if ((this->oc1->posOnly)){
			HX_STACK_LINE(1989)
			::zpp_nape::dynamics::ZPP_IContact tmp = this->c1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1990)
			this->c1 = this->c2;
			HX_STACK_LINE(1991)
			this->c2 = tmp;
			HX_STACK_LINE(1992)
			::zpp_nape::dynamics::ZPP_Contact tmp2 = this->oc1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1993)
			this->oc1 = this->oc2;
			HX_STACK_LINE(1994)
			this->oc2 = tmp2;
			HX_STACK_LINE(1995)
			this->hc2 = false;
		}
		else{
			HX_STACK_LINE(1997)
			if ((this->oc2->posOnly)){
				HX_STACK_LINE(1997)
				this->hc2 = false;
			}
		}
		HX_STACK_LINE(2000)
		if ((this->oc1->posOnly)){
			HX_STACK_LINE(2000)
			fst = true;
		}
	}
	else{
		HX_STACK_LINE(2004)
		this->hpc2 = false;
	}
	HX_STACK_LINE(2007)
	hx::MultEq(this->jrAcc,dtratio);
	HX_STACK_LINE(2008)
	if ((!(fst))){
		HX_STACK_LINE(2009)
		this->rn1a = ((this->ny * this->c1->r1x) - (this->nx * this->c1->r1y));
		HX_STACK_LINE(2010)
		this->rt1a = ((this->c1->r1x * this->nx) + (this->c1->r1y * this->ny));
		HX_STACK_LINE(2011)
		this->rn1b = ((this->ny * this->c1->r2x) - (this->nx * this->c1->r2y));
		HX_STACK_LINE(2012)
		this->rt1b = ((this->c1->r2x * this->nx) + (this->c1->r2y * this->ny));
		HX_STACK_LINE(2013)
		this->k1x = ((this->b2->kinvelx - (this->c1->r2y * this->b2->kinangvel)) - ((this->b1->kinvelx - (this->c1->r1y * this->b1->kinangvel))));
		HX_STACK_LINE(2014)
		this->k1y = ((this->b2->kinvely + (this->c1->r2x * this->b2->kinangvel)) - ((this->b1->kinvely + (this->c1->r1x * this->b1->kinangvel))));
	}
	HX_STACK_LINE(2016)
	if ((this->hc2)){
		HX_STACK_LINE(2017)
		this->rn2a = ((this->ny * this->c2->r1x) - (this->nx * this->c2->r1y));
		HX_STACK_LINE(2018)
		this->rt2a = ((this->c2->r1x * this->nx) + (this->c2->r1y * this->ny));
		HX_STACK_LINE(2019)
		this->rn2b = ((this->ny * this->c2->r2x) - (this->nx * this->c2->r2y));
		HX_STACK_LINE(2020)
		this->rt2b = ((this->c2->r2x * this->nx) + (this->c2->r2y * this->ny));
		HX_STACK_LINE(2021)
		this->k2x = ((this->b2->kinvelx - (this->c2->r2y * this->b2->kinangvel)) - ((this->b1->kinvelx - (this->c2->r1y * this->b1->kinangvel))));
		HX_STACK_LINE(2022)
		this->k2y = ((this->b2->kinvely + (this->c2->r2x * this->b2->kinangvel)) - ((this->b1->kinvely + (this->c2->r1x * this->b1->kinangvel))));
		HX_STACK_LINE(2023)
		{
			HX_STACK_LINE(2024)
			this->kMassa = ((mass_sum + ((this->b1->sinertia * this->rn1a) * this->rn1a)) + ((this->b2->sinertia * this->rn1b) * this->rn1b));
			HX_STACK_LINE(2025)
			this->kMassb = ((mass_sum + ((this->b1->sinertia * this->rn1a) * this->rn2a)) + ((this->b2->sinertia * this->rn1b) * this->rn2b));
			HX_STACK_LINE(2026)
			this->kMassc = ((mass_sum + ((this->b1->sinertia * this->rn2a) * this->rn2a)) + ((this->b2->sinertia * this->rn2b) * this->rn2b));
		}
		HX_STACK_LINE(2028)
		Float norm = (((this->kMassa * this->kMassa) + (((int)2 * this->kMassb) * this->kMassb)) + (this->kMassc * this->kMassc));		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(2029)
		if (((norm < (::nape::Config_obj::illConditionedThreshold * (((this->kMassa * this->kMassc) - (this->kMassb * this->kMassb))))))){
			HX_STACK_LINE(2030)
			{
				HX_STACK_LINE(2031)
				this->Ka = this->kMassa;
				HX_STACK_LINE(2032)
				this->Kb = this->kMassb;
				HX_STACK_LINE(2033)
				this->Kc = this->kMassc;
			}
			HX_STACK_LINE(2035)
			{
				HX_STACK_LINE(2036)
				Float det = ((this->kMassa * this->kMassc) - (this->kMassb * this->kMassb));		HX_STACK_VAR(det,"det");
				HX_STACK_LINE(2037)
				if (((det != det))){
					HX_STACK_LINE(2038)
					this->kMassa = this->kMassb = this->kMassc = (int)0;
					HX_STACK_LINE(2039)
					(int)3;
				}
				else{
					HX_STACK_LINE(2041)
					if (((det == (int)0))){
						HX_STACK_LINE(2042)
						int flag = (int)0;		HX_STACK_VAR(flag,"flag");
						HX_STACK_LINE(2043)
						if (((this->kMassa != (int)0))){
							HX_STACK_LINE(2043)
							this->kMassa = (Float((int)1) / Float(this->kMassa));
						}
						else{
							HX_STACK_LINE(2045)
							this->kMassa = (int)0;
							HX_STACK_LINE(2046)
							hx::OrEq(flag,(int)1);
						}
						HX_STACK_LINE(2048)
						if (((this->kMassc != (int)0))){
							HX_STACK_LINE(2048)
							this->kMassc = (Float((int)1) / Float(this->kMassc));
						}
						else{
							HX_STACK_LINE(2050)
							this->kMassc = (int)0;
							HX_STACK_LINE(2051)
							hx::OrEq(flag,(int)2);
						}
						HX_STACK_LINE(2053)
						this->kMassb = (int)0;
						HX_STACK_LINE(2054)
						flag;
					}
					else{
						HX_STACK_LINE(2057)
						det = (Float((int)1) / Float(det));
						HX_STACK_LINE(2058)
						Float t = (this->kMassc * det);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2059)
						this->kMassc = (this->kMassa * det);
						HX_STACK_LINE(2060)
						this->kMassa = t;
						HX_STACK_LINE(2061)
						hx::MultEq(this->kMassb,-(det));
						HX_STACK_LINE(2062)
						(int)0;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(2067)
			this->hc2 = false;
			HX_STACK_LINE(2068)
			if (((this->oc2->dist < this->oc1->dist))){
				HX_STACK_LINE(2069)
				::zpp_nape::dynamics::ZPP_IContact t = this->c1;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2070)
				this->c1 = this->c2;
				HX_STACK_LINE(2071)
				this->c2 = t;
			}
			HX_STACK_LINE(2073)
			this->oc2->active = false;
			HX_STACK_LINE(2074)
			this->contacts->modified = true;
		}
	}
	HX_STACK_LINE(2077)
	{
		HX_STACK_LINE(2078)
		this->surfacex = this->b2->svelx;
		HX_STACK_LINE(2079)
		this->surfacey = this->b2->svely;
		HX_STACK_LINE(2088)
		{
		}
	}
	HX_STACK_LINE(2097)
	{
		HX_STACK_LINE(2098)
		Float t = 1.0;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(2107)
		hx::AddEq(this->surfacex,(this->b1->svelx * t));
		HX_STACK_LINE(2108)
		hx::AddEq(this->surfacey,(this->b1->svely * t));
	}
	HX_STACK_LINE(2110)
	{
		HX_STACK_LINE(2111)
		this->surfacex = -(this->surfacex);
		HX_STACK_LINE(2112)
		this->surfacey = -(this->surfacey);
	}
	HX_STACK_LINE(2114)
	this->rMass = (this->b1->sinertia + this->b2->sinertia);
	HX_STACK_LINE(2115)
	if (((this->rMass != (int)0))){
		HX_STACK_LINE(2115)
		this->rMass = (Float((int)1) / Float(this->rMass));
	}
	HX_STACK_LINE(2116)
	return fst;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_ColArbiter_obj,preStep,return )

bool ZPP_ColArbiter_obj::cleanupContacts( ){
	HX_STACK_PUSH("ZPP_ColArbiter::cleanupContacts","zpp_nape/dynamics/Arbiter.hx",1785);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1786)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(1787)
	::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1788)
	::zpp_nape::dynamics::ZPP_IContact prei = null();		HX_STACK_VAR(prei,"prei");
	HX_STACK_LINE(1789)
	::zpp_nape::dynamics::ZPP_IContact cx_itei = this->innards->next;		HX_STACK_VAR(cx_itei,"cx_itei");
	HX_STACK_LINE(1790)
	this->hc2 = false;
	HX_STACK_LINE(1791)
	{
		HX_STACK_LINE(1792)
		::zpp_nape::dynamics::ZPP_Contact cx_ite = this->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1793)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1794)
			::zpp_nape::dynamics::ZPP_Contact c = cx_ite;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(1795)
			{
				HX_STACK_LINE(1796)
				if ((((c->stamp + ::nape::Config_obj::arbiterExpirationDelay) < this->stamp))){
					struct _Function_5_1{
						inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_ColArbiter_obj *__this,::zpp_nape::dynamics::ZPP_Contact &pre){
							HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1797);
							{
								HX_STACK_LINE(1797)
								::zpp_nape::dynamics::ZPP_Contact _this = __this->contacts;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1797)
								::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(1797)
								::zpp_nape::dynamics::ZPP_Contact ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1797)
								if (((pre == null()))){
									HX_STACK_LINE(1797)
									old = _this->next;
									HX_STACK_LINE(1797)
									ret = old->next;
									HX_STACK_LINE(1797)
									_this->next = ret;
									HX_STACK_LINE(1797)
									if (((_this->next == null()))){
										HX_STACK_LINE(1797)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(1797)
									old = pre->next;
									HX_STACK_LINE(1797)
									ret = old->next;
									HX_STACK_LINE(1797)
									pre->next = ret;
									HX_STACK_LINE(1797)
									if (((ret == null()))){
										HX_STACK_LINE(1797)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(1797)
								old->_inuse = false;
								HX_STACK_LINE(1797)
								_this->modified = true;
								HX_STACK_LINE(1797)
								(_this->length)--;
								HX_STACK_LINE(1797)
								_this->pushmod = true;
								HX_STACK_LINE(1797)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1797)
					cx_ite = _Function_5_1::Block(this,pre);
					struct _Function_5_2{
						inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_ColArbiter_obj *__this,::zpp_nape::dynamics::ZPP_IContact &prei){
							HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1798);
							{
								HX_STACK_LINE(1798)
								::zpp_nape::dynamics::ZPP_IContact _this = __this->innards;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1798)
								::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(1798)
								::zpp_nape::dynamics::ZPP_IContact ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1798)
								if (((prei == null()))){
									HX_STACK_LINE(1798)
									old = _this->next;
									HX_STACK_LINE(1798)
									ret = old->next;
									HX_STACK_LINE(1798)
									_this->next = ret;
									HX_STACK_LINE(1798)
									if (((_this->next == null()))){
										HX_STACK_LINE(1798)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(1798)
									old = prei->next;
									HX_STACK_LINE(1798)
									ret = old->next;
									HX_STACK_LINE(1798)
									prei->next = ret;
									HX_STACK_LINE(1798)
									if (((ret == null()))){
										HX_STACK_LINE(1798)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(1798)
								old->_inuse = false;
								HX_STACK_LINE(1798)
								_this->modified = true;
								HX_STACK_LINE(1798)
								(_this->length)--;
								HX_STACK_LINE(1798)
								_this->pushmod = true;
								HX_STACK_LINE(1798)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1798)
					cx_itei = _Function_5_2::Block(this,prei);
					HX_STACK_LINE(1799)
					{
						HX_STACK_LINE(1800)
						::zpp_nape::dynamics::ZPP_Contact o = c;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1809)
						o->arbiter = null();
						HX_STACK_LINE(1810)
						o->next = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
						HX_STACK_LINE(1811)
						::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1816)
					continue;
				}
				HX_STACK_LINE(1818)
				::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
				HX_STACK_LINE(1819)
				bool pact = c->active;		HX_STACK_VAR(pact,"pact");
				HX_STACK_LINE(1820)
				c->active = (c->stamp == this->stamp);
				HX_STACK_LINE(1821)
				if ((c->active)){
					HX_STACK_LINE(1821)
					if ((fst)){
						HX_STACK_LINE(1823)
						fst = false;
						HX_STACK_LINE(1824)
						this->c1 = ci;
						HX_STACK_LINE(1825)
						this->oc1 = c;
					}
					else{
						HX_STACK_LINE(1836)
						this->hc2 = true;
						HX_STACK_LINE(1837)
						this->c2 = ci;
						HX_STACK_LINE(1838)
						this->oc2 = c;
					}
				}
				HX_STACK_LINE(1841)
				if (((pact != c->active))){
					HX_STACK_LINE(1841)
					this->contacts->modified = true;
				}
				HX_STACK_LINE(1842)
				pre = cx_ite;
				HX_STACK_LINE(1843)
				prei = cx_itei;
				HX_STACK_LINE(1844)
				cx_itei = cx_itei->next;
			}
			HX_STACK_LINE(1846)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1849)
	if ((this->hc2)){
		HX_STACK_LINE(1850)
		this->hpc2 = true;
		HX_STACK_LINE(1851)
		if ((this->oc1->posOnly)){
			HX_STACK_LINE(1852)
			::zpp_nape::dynamics::ZPP_IContact tmp = this->c1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1853)
			this->c1 = this->c2;
			HX_STACK_LINE(1854)
			this->c2 = tmp;
			HX_STACK_LINE(1855)
			::zpp_nape::dynamics::ZPP_Contact tmp2 = this->oc1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1856)
			this->oc1 = this->oc2;
			HX_STACK_LINE(1857)
			this->oc2 = tmp2;
			HX_STACK_LINE(1858)
			this->hc2 = false;
		}
		else{
			HX_STACK_LINE(1860)
			if ((this->oc2->posOnly)){
				HX_STACK_LINE(1860)
				this->hc2 = false;
			}
		}
		HX_STACK_LINE(1863)
		if ((this->oc1->posOnly)){
			HX_STACK_LINE(1863)
			fst = true;
		}
	}
	else{
		HX_STACK_LINE(1867)
		this->hpc2 = false;
	}
	HX_STACK_LINE(1870)
	return fst;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,cleanupContacts,return )

Void ZPP_ColArbiter_obj::setupcontacts( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::setupcontacts","zpp_nape/dynamics/Arbiter.hx",1776);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1777)
		this->wrap_contacts = ::zpp_nape::util::ZPP_ContactList_obj::get(this->contacts,true);
		HX_STACK_LINE(1778)
		this->wrap_contacts->zpp_inner->immutable = !(this->_mutable);
		HX_STACK_LINE(1779)
		this->wrap_contacts->zpp_inner->adder = this->contacts_adder_dyn();
		HX_STACK_LINE(1780)
		this->wrap_contacts->zpp_inner->dontremove = true;
		HX_STACK_LINE(1781)
		this->wrap_contacts->zpp_inner->subber = this->contacts_subber_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,setupcontacts,(void))

Void ZPP_ColArbiter_obj::contacts_subber( ::nape::dynamics::Contact x){
{
		HX_STACK_PUSH("ZPP_ColArbiter::contacts_subber","zpp_nape/dynamics/Arbiter.hx",1737);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1738)
		::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1739)
		::zpp_nape::dynamics::ZPP_IContact prei = null();		HX_STACK_VAR(prei,"prei");
		HX_STACK_LINE(1740)
		::zpp_nape::dynamics::ZPP_IContact cx_itei = this->innards->next;		HX_STACK_VAR(cx_itei,"cx_itei");
		HX_STACK_LINE(1741)
		{
			HX_STACK_LINE(1742)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = this->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1743)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1744)
				::zpp_nape::dynamics::ZPP_Contact c = cx_ite;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(1745)
				{
					HX_STACK_LINE(1746)
					if (((c == x->zpp_inner))){
						HX_STACK_LINE(1747)
						this->contacts->erase(pre);
						HX_STACK_LINE(1748)
						this->innards->erase(prei);
						HX_STACK_LINE(1749)
						{
							HX_STACK_LINE(1750)
							::zpp_nape::dynamics::ZPP_Contact o = c;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1759)
							o->arbiter = null();
							HX_STACK_LINE(1760)
							o->next = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
							HX_STACK_LINE(1761)
							::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1766)
						break;
					}
					HX_STACK_LINE(1768)
					pre = cx_ite;
					HX_STACK_LINE(1769)
					prei = cx_itei;
					HX_STACK_LINE(1770)
					cx_itei = cx_itei->next;
				}
				HX_STACK_LINE(1772)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_ColArbiter_obj,contacts_subber,(void))

bool ZPP_ColArbiter_obj::contacts_adder( ::nape::dynamics::Contact x){
	HX_STACK_PUSH("ZPP_ColArbiter::contacts_adder","zpp_nape/dynamics/Arbiter.hx",1731);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(1733)
	hx::Throw (HX_CSTRING("Error: Cannot add new contacts, information required is far too specific and detailed :)"));
	HX_STACK_LINE(1735)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_ColArbiter_obj,contacts_adder,return )

Void ZPP_ColArbiter_obj::makeimmutable( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::makeimmutable","zpp_nape/dynamics/Arbiter.hx",1726);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1727)
		this->_mutable = false;
		HX_STACK_LINE(1728)
		if (((this->wrap_normal != null()))){
			HX_STACK_LINE(1728)
			this->wrap_normal->zpp_inner->_immutable = true;
		}
		HX_STACK_LINE(1729)
		if (((this->wrap_contacts != null()))){
			HX_STACK_LINE(1729)
			this->wrap_contacts->zpp_inner->immutable = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,makeimmutable,(void))

Void ZPP_ColArbiter_obj::makemutable( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::makemutable","zpp_nape/dynamics/Arbiter.hx",1719);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1720)
		this->_mutable = true;
		HX_STACK_LINE(1721)
		if (((this->wrap_normal != null()))){
			HX_STACK_LINE(1721)
			this->wrap_normal->zpp_inner->_immutable = false;
		}
		HX_STACK_LINE(1722)
		if (((this->wrap_contacts != null()))){
			HX_STACK_LINE(1722)
			this->wrap_contacts->zpp_inner->immutable = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,makemutable,(void))

Void ZPP_ColArbiter_obj::retire( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::retire","zpp_nape/dynamics/Arbiter.hx",1675);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1676)
		{
			HX_STACK_LINE(1676)
			if ((!(this->cleared))){
				HX_STACK_LINE(1676)
				{
					HX_STACK_LINE(1676)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1676)
					{
						HX_STACK_LINE(1676)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1676)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1676)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1676)
						while(((cur != null()))){
							HX_STACK_LINE(1676)
							if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(1676)
								{
									HX_STACK_LINE(1676)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1676)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1676)
									if (((pre == null()))){
										HX_STACK_LINE(1676)
										old = _this->head;
										HX_STACK_LINE(1676)
										ret1 = old->next;
										HX_STACK_LINE(1676)
										_this->head = ret1;
										HX_STACK_LINE(1676)
										if (((_this->head == null()))){
											HX_STACK_LINE(1676)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1676)
										old = pre->next;
										HX_STACK_LINE(1676)
										ret1 = old->next;
										HX_STACK_LINE(1676)
										pre->next = ret1;
										HX_STACK_LINE(1676)
										if (((ret1 == null()))){
											HX_STACK_LINE(1676)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1676)
									{
										HX_STACK_LINE(1676)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1676)
										o->elt = null();
										HX_STACK_LINE(1676)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(1676)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1676)
									_this->modified = true;
									HX_STACK_LINE(1676)
									(_this->length)--;
									HX_STACK_LINE(1676)
									_this->pushmod = true;
									HX_STACK_LINE(1676)
									ret1;
								}
								HX_STACK_LINE(1676)
								ret = true;
								HX_STACK_LINE(1676)
								break;
							}
							HX_STACK_LINE(1676)
							pre = cur;
							HX_STACK_LINE(1676)
							cur = cur->next;
						}
						HX_STACK_LINE(1676)
						ret;
					}
				}
				HX_STACK_LINE(1676)
				{
					HX_STACK_LINE(1676)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1676)
					{
						HX_STACK_LINE(1676)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1676)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1676)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1676)
						while(((cur != null()))){
							HX_STACK_LINE(1676)
							if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(1676)
								{
									HX_STACK_LINE(1676)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1676)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1676)
									if (((pre == null()))){
										HX_STACK_LINE(1676)
										old = _this->head;
										HX_STACK_LINE(1676)
										ret1 = old->next;
										HX_STACK_LINE(1676)
										_this->head = ret1;
										HX_STACK_LINE(1676)
										if (((_this->head == null()))){
											HX_STACK_LINE(1676)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1676)
										old = pre->next;
										HX_STACK_LINE(1676)
										ret1 = old->next;
										HX_STACK_LINE(1676)
										pre->next = ret1;
										HX_STACK_LINE(1676)
										if (((ret1 == null()))){
											HX_STACK_LINE(1676)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1676)
									{
										HX_STACK_LINE(1676)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1676)
										o->elt = null();
										HX_STACK_LINE(1676)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(1676)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1676)
									_this->modified = true;
									HX_STACK_LINE(1676)
									(_this->length)--;
									HX_STACK_LINE(1676)
									_this->pushmod = true;
									HX_STACK_LINE(1676)
									ret1;
								}
								HX_STACK_LINE(1676)
								ret = true;
								HX_STACK_LINE(1676)
								break;
							}
							HX_STACK_LINE(1676)
							pre = cur;
							HX_STACK_LINE(1676)
							cur = cur->next;
						}
						HX_STACK_LINE(1676)
						ret;
					}
				}
				HX_STACK_LINE(1676)
				if (((this->pair != null()))){
					HX_STACK_LINE(1676)
					this->pair->arb = null();
					HX_STACK_LINE(1676)
					this->pair = null();
				}
			}
			HX_STACK_LINE(1676)
			this->b1 = this->b2 = null();
			HX_STACK_LINE(1676)
			this->active = false;
			HX_STACK_LINE(1676)
			this->intchange = false;
		}
		HX_STACK_LINE(1677)
		while((!(((this->contacts->next == null()))))){
			HX_STACK_LINE(1678)
			{
				struct _Function_3_1{
					inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_ColArbiter_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1679);
						{
							HX_STACK_LINE(1679)
							::zpp_nape::dynamics::ZPP_Contact _this = __this->contacts;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1679)
							::zpp_nape::dynamics::ZPP_Contact ret = _this->next;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1679)
							_this->pop();
							HX_STACK_LINE(1679)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1679)
				::zpp_nape::dynamics::ZPP_Contact o = _Function_3_1::Block(this);		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1688)
				o->arbiter = null();
				HX_STACK_LINE(1689)
				o->next = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
				HX_STACK_LINE(1690)
				::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1695)
			{
				HX_STACK_LINE(1695)
				::zpp_nape::dynamics::ZPP_IContact _this = this->innards;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1695)
				::zpp_nape::dynamics::ZPP_IContact ret = _this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1695)
				_this->next = ret->next;
				HX_STACK_LINE(1695)
				ret->_inuse = false;
				HX_STACK_LINE(1695)
				if (((_this->next == null()))){
					HX_STACK_LINE(1695)
					_this->pushmod = true;
				}
				HX_STACK_LINE(1695)
				_this->modified = true;
				HX_STACK_LINE(1695)
				(_this->length)--;
			}
		}
		HX_STACK_LINE(1697)
		{
			HX_STACK_LINE(1698)
			::zpp_nape::dynamics::ZPP_ColArbiter o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1707)
			{
				HX_STACK_LINE(1707)
				o->userdef_dyn_fric = false;
				HX_STACK_LINE(1707)
				o->userdef_stat_fric = false;
				HX_STACK_LINE(1707)
				o->userdef_restitution = false;
				HX_STACK_LINE(1707)
				o->userdef_rfric = false;
				HX_STACK_LINE(1707)
				o->__ref_edge1 = o->__ref_edge2 = null();
			}
			HX_STACK_LINE(1708)
			o->next = ::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool;
			HX_STACK_LINE(1709)
			::zpp_nape::dynamics::ZPP_ColArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1714)
		this->pre_dt = -1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,retire,(void))

Void ZPP_ColArbiter_obj::validate_props( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::validate_props","zpp_nape/dynamics/Arbiter.hx",1667);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1667)
		if ((this->invalidated)){
			HX_STACK_LINE(1669)
			this->invalidated = false;
			HX_STACK_LINE(1670)
			{
				HX_STACK_LINE(1670)
				if ((!(this->userdef_restitution))){
					HX_STACK_LINE(1670)
					if (((bool((this->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((this->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
						HX_STACK_LINE(1670)
						this->restitution = (int)0;
					}
					else{
						HX_STACK_LINE(1670)
						if (((bool((this->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((this->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
							HX_STACK_LINE(1670)
							this->restitution = (int)1;
						}
						else{
							HX_STACK_LINE(1670)
							this->restitution = (Float(((this->s1->material->elasticity + this->s2->material->elasticity))) / Float((int)2));
						}
					}
					HX_STACK_LINE(1670)
					if (((this->restitution < (int)0))){
						HX_STACK_LINE(1670)
						this->restitution = (int)0;
					}
					HX_STACK_LINE(1670)
					if (((this->restitution > (int)1))){
						HX_STACK_LINE(1670)
						this->restitution = (int)1;
					}
				}
				HX_STACK_LINE(1670)
				if ((!(this->userdef_dyn_fric))){
					HX_STACK_LINE(1670)
					this->dyn_fric = ::Math_obj::sqrt((this->s1->material->dynamicFriction * this->s2->material->dynamicFriction));
				}
				HX_STACK_LINE(1670)
				if ((!(this->userdef_stat_fric))){
					HX_STACK_LINE(1670)
					this->stat_fric = ::Math_obj::sqrt((this->s1->material->staticFriction * this->s2->material->staticFriction));
				}
				HX_STACK_LINE(1670)
				if ((!(this->userdef_rfric))){
					HX_STACK_LINE(1670)
					this->rfric = ::Math_obj::sqrt((this->s1->material->rollingFriction * this->s2->material->rollingFriction));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,validate_props,(void))

Void ZPP_ColArbiter_obj::calcProperties( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::calcProperties","zpp_nape/dynamics/Arbiter.hx",1647);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1648)
		if ((!(this->userdef_restitution))){
			HX_STACK_LINE(1649)
			if (((bool((this->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((this->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
				HX_STACK_LINE(1649)
				this->restitution = (int)0;
			}
			else{
				HX_STACK_LINE(1650)
				if (((bool((this->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((this->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
					HX_STACK_LINE(1650)
					this->restitution = (int)1;
				}
				else{
					HX_STACK_LINE(1651)
					this->restitution = (Float(((this->s1->material->elasticity + this->s2->material->elasticity))) / Float((int)2));
				}
			}
			HX_STACK_LINE(1652)
			if (((this->restitution < (int)0))){
				HX_STACK_LINE(1652)
				this->restitution = (int)0;
			}
			HX_STACK_LINE(1653)
			if (((this->restitution > (int)1))){
				HX_STACK_LINE(1653)
				this->restitution = (int)1;
			}
		}
		HX_STACK_LINE(1655)
		if ((!(this->userdef_dyn_fric))){
			HX_STACK_LINE(1655)
			this->dyn_fric = ::Math_obj::sqrt((this->s1->material->dynamicFriction * this->s2->material->dynamicFriction));
		}
		HX_STACK_LINE(1658)
		if ((!(this->userdef_stat_fric))){
			HX_STACK_LINE(1658)
			this->stat_fric = ::Math_obj::sqrt((this->s1->material->staticFriction * this->s2->material->staticFriction));
		}
		HX_STACK_LINE(1661)
		if ((!(this->userdef_rfric))){
			HX_STACK_LINE(1661)
			this->rfric = ::Math_obj::sqrt((this->s1->material->rollingFriction * this->s2->material->rollingFriction));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,calcProperties,(void))

Void ZPP_ColArbiter_obj::assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di){
{
		HX_STACK_PUSH("ZPP_ColArbiter::assign","zpp_nape/dynamics/Arbiter.hx",1639);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s1,"s1");
		HX_STACK_ARG(s2,"s2");
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(di,"di");
		HX_STACK_LINE(1640)
		{
			HX_STACK_LINE(1640)
			this->b1 = s1->body;
			HX_STACK_LINE(1640)
			this->ws1 = s1;
			HX_STACK_LINE(1640)
			this->b2 = s2->body;
			HX_STACK_LINE(1640)
			this->ws2 = s2;
			HX_STACK_LINE(1640)
			this->id = id;
			HX_STACK_LINE(1640)
			this->di = di;
			HX_STACK_LINE(1640)
			{
				HX_STACK_LINE(1640)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_ColArbiter_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1640);
						{
							HX_STACK_LINE(1640)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1640)
							{
								HX_STACK_LINE(1640)
								if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(1640)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(1640)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
									HX_STACK_LINE(1640)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1640)
									ret->next = null();
								}
								HX_STACK_LINE(1640)
								Dynamic();
							}
							HX_STACK_LINE(1640)
							ret->elt = __this;
							HX_STACK_LINE(1640)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1640)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_3_1::Block(this);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1640)
				temp->next = _this->head;
				HX_STACK_LINE(1640)
				_this->head = temp;
				HX_STACK_LINE(1640)
				_this->modified = true;
				HX_STACK_LINE(1640)
				(_this->length)++;
				HX_STACK_LINE(1640)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(1640)
			{
				HX_STACK_LINE(1640)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_ColArbiter_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1640);
						{
							HX_STACK_LINE(1640)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1640)
							{
								HX_STACK_LINE(1640)
								if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(1640)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(1640)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
									HX_STACK_LINE(1640)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1640)
									ret->next = null();
								}
								HX_STACK_LINE(1640)
								Dynamic();
							}
							HX_STACK_LINE(1640)
							ret->elt = __this;
							HX_STACK_LINE(1640)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1640)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_3_1::Block(this);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1640)
				temp->next = _this->head;
				HX_STACK_LINE(1640)
				_this->head = temp;
				HX_STACK_LINE(1640)
				_this->modified = true;
				HX_STACK_LINE(1640)
				(_this->length)++;
				HX_STACK_LINE(1640)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(1640)
			this->active = true;
			HX_STACK_LINE(1640)
			this->present = (int)0;
			HX_STACK_LINE(1640)
			this->cleared = false;
			HX_STACK_LINE(1640)
			this->sleeping = false;
			HX_STACK_LINE(1640)
			this->fresh = false;
			HX_STACK_LINE(1640)
			this->presentable = false;
		}
		HX_STACK_LINE(1641)
		this->s1 = s1;
		HX_STACK_LINE(1642)
		this->s2 = s2;
		HX_STACK_LINE(1643)
		{
			HX_STACK_LINE(1643)
			if ((!(this->userdef_restitution))){
				HX_STACK_LINE(1643)
				if (((bool((this->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((this->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(1643)
					this->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(1643)
					if (((bool((this->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((this->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(1643)
						this->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(1643)
						this->restitution = (Float(((this->s1->material->elasticity + this->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(1643)
				if (((this->restitution < (int)0))){
					HX_STACK_LINE(1643)
					this->restitution = (int)0;
				}
				HX_STACK_LINE(1643)
				if (((this->restitution > (int)1))){
					HX_STACK_LINE(1643)
					this->restitution = (int)1;
				}
			}
			HX_STACK_LINE(1643)
			if ((!(this->userdef_dyn_fric))){
				HX_STACK_LINE(1643)
				this->dyn_fric = ::Math_obj::sqrt((this->s1->material->dynamicFriction * this->s2->material->dynamicFriction));
			}
			HX_STACK_LINE(1643)
			if ((!(this->userdef_stat_fric))){
				HX_STACK_LINE(1643)
				this->stat_fric = ::Math_obj::sqrt((this->s1->material->staticFriction * this->s2->material->staticFriction));
			}
			HX_STACK_LINE(1643)
			if ((!(this->userdef_rfric))){
				HX_STACK_LINE(1643)
				this->rfric = ::Math_obj::sqrt((this->s1->material->rollingFriction * this->s2->material->rollingFriction));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ColArbiter_obj,assign,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_ColArbiter_obj::injectContact( Float px,Float py,Float nx,Float ny,Float dist,int hash,hx::Null< bool >  __o_posOnly){
bool posOnly = __o_posOnly.Default(false);
	HX_STACK_PUSH("ZPP_ColArbiter::injectContact","zpp_nape/dynamics/Arbiter.hx",1551);
	HX_STACK_THIS(this);
	HX_STACK_ARG(px,"px");
	HX_STACK_ARG(py,"py");
	HX_STACK_ARG(nx,"nx");
	HX_STACK_ARG(ny,"ny");
	HX_STACK_ARG(dist,"dist");
	HX_STACK_ARG(hash,"hash");
	HX_STACK_ARG(posOnly,"posOnly");
{
		HX_STACK_LINE(1552)
		::zpp_nape::dynamics::ZPP_Contact c = null();		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(1553)
		{
			HX_STACK_LINE(1554)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = this->contacts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1555)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1556)
				::zpp_nape::dynamics::ZPP_Contact cur = cx_ite;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(1557)
				if (((hash == cur->hash))){
					HX_STACK_LINE(1558)
					c = cur;
					HX_STACK_LINE(1559)
					break;
				}
				HX_STACK_LINE(1561)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1564)
		if (((c == null()))){
			HX_STACK_LINE(1565)
			{
				HX_STACK_LINE(1566)
				if (((::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool == null()))){
					HX_STACK_LINE(1566)
					c = ::zpp_nape::dynamics::ZPP_Contact_obj::__new();
				}
				else{
					HX_STACK_LINE(1573)
					c = ::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool;
					HX_STACK_LINE(1574)
					::zpp_nape::dynamics::ZPP_Contact_obj::zpp_pool = c->next;
					HX_STACK_LINE(1575)
					c->next = null();
				}
				HX_STACK_LINE(1580)
				Dynamic();
			}
			HX_STACK_LINE(1582)
			::zpp_nape::dynamics::ZPP_IContact ci = c->inner;		HX_STACK_VAR(ci,"ci");
			HX_STACK_LINE(1583)
			ci->jnAcc = ci->jtAcc = (int)0;
			HX_STACK_LINE(1584)
			c->hash = hash;
			HX_STACK_LINE(1585)
			c->fresh = true;
			HX_STACK_LINE(1586)
			c->arbiter = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(1587)
			this->jrAcc = (int)0;
			HX_STACK_LINE(1588)
			{
				HX_STACK_LINE(1588)
				::zpp_nape::dynamics::ZPP_Contact _this = this->contacts;		HX_STACK_VAR(_this,"_this");
				struct _Function_3_1{
					inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &c){
						HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1588);
						{
							HX_STACK_LINE(1588)
							c->_inuse = true;
							HX_STACK_LINE(1588)
							return c;
						}
						return null();
					}
				};
				HX_STACK_LINE(1588)
				::zpp_nape::dynamics::ZPP_Contact temp = _Function_3_1::Block(c);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1588)
				temp->next = _this->next;
				HX_STACK_LINE(1588)
				_this->next = temp;
				HX_STACK_LINE(1588)
				_this->modified = true;
				HX_STACK_LINE(1588)
				(_this->length)++;
				HX_STACK_LINE(1588)
				c;
			}
			HX_STACK_LINE(1589)
			this->innards->add(ci);
		}
		else{
			HX_STACK_LINE(1591)
			c->fresh = false;
		}
		HX_STACK_LINE(1592)
		{
			HX_STACK_LINE(1593)
			c->px = px;
			HX_STACK_LINE(1594)
			c->py = py;
			HX_STACK_LINE(1603)
			{
			}
		}
		HX_STACK_LINE(1612)
		{
			HX_STACK_LINE(1613)
			this->nx = nx;
			HX_STACK_LINE(1614)
			this->ny = ny;
			HX_STACK_LINE(1623)
			{
			}
		}
		HX_STACK_LINE(1632)
		c->dist = dist;
		HX_STACK_LINE(1633)
		c->stamp = this->stamp;
		HX_STACK_LINE(1634)
		c->posOnly = posOnly;
		HX_STACK_LINE(1635)
		return c;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(ZPP_ColArbiter_obj,injectContact,return )

Void ZPP_ColArbiter_obj::free( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::free","zpp_nape/dynamics/Arbiter.hx",1525);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1542)
		this->userdef_dyn_fric = false;
		HX_STACK_LINE(1543)
		this->userdef_stat_fric = false;
		HX_STACK_LINE(1544)
		this->userdef_restitution = false;
		HX_STACK_LINE(1545)
		this->userdef_rfric = false;
		HX_STACK_LINE(1546)
		this->__ref_edge1 = this->__ref_edge2 = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,free,(void))

Void ZPP_ColArbiter_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::alloc","zpp_nape/dynamics/Arbiter.hx",1513);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,alloc,(void))

Void ZPP_ColArbiter_obj::getnormal( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::getnormal","zpp_nape/dynamics/Arbiter.hx",1431);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ){
				HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1432);
				{
					HX_STACK_LINE(1432)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(1432)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1432)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1432)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1432)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1432)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1432)
						ret->zpp_pool = null();
						HX_STACK_LINE(1432)
						ret->zpp_disp = false;
						HX_STACK_LINE(1432)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1432)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1432)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( ){
								HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1432);
								{
									HX_STACK_LINE(1432)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1432)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1432)
									{
										HX_STACK_LINE(1432)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1432)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1432)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1432)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1432)
											ret1->next = null();
										}
										HX_STACK_LINE(1432)
										ret1->weak = false;
									}
									HX_STACK_LINE(1432)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1432)
									{
										HX_STACK_LINE(1432)
										ret1->x = (int)0;
										HX_STACK_LINE(1432)
										ret1->y = (int)0;
										HX_STACK_LINE(1432)
										{
										}
									}
									HX_STACK_LINE(1432)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1432)
						ret->zpp_inner = _Function_3_1::Block();
						HX_STACK_LINE(1432)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1432)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1432)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1432)
						{
							HX_STACK_LINE(1432)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1432)
							if ((_this->_immutable)){
								HX_STACK_LINE(1432)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1432)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1432)
								_this->_isimmutable();
							}
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1432);
								{
									HX_STACK_LINE(1432)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1432)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1432)
									{
										HX_STACK_LINE(1432)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1432)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1432)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1432)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",1432);
								{
									HX_STACK_LINE(1432)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1432)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1432)
									{
										HX_STACK_LINE(1432)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1432)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1432)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1432)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1432)
						if ((!(((bool((_Function_3_1::Block(ret) == (int)0)) && bool((_Function_3_2::Block(ret) == (int)0))))))){
							HX_STACK_LINE(1432)
							{
								HX_STACK_LINE(1432)
								ret->zpp_inner->x = (int)0;
								HX_STACK_LINE(1432)
								ret->zpp_inner->y = (int)0;
								HX_STACK_LINE(1432)
								{
								}
							}
							HX_STACK_LINE(1432)
							{
								HX_STACK_LINE(1432)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1432)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1432)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1432)
						ret;
					}
					HX_STACK_LINE(1432)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1432)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1432)
		this->wrap_normal = _Function_1_1::Block();
		HX_STACK_LINE(1433)
		this->wrap_normal->zpp_inner->_immutable = true;
		HX_STACK_LINE(1434)
		this->wrap_normal->zpp_inner->_inuse = true;
		HX_STACK_LINE(1435)
		this->wrap_normal->zpp_inner->_validate = this->normal_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,getnormal,(void))

Void ZPP_ColArbiter_obj::normal_validate( ){
{
		HX_STACK_PUSH("ZPP_ColArbiter::normal_validate","zpp_nape/dynamics/Arbiter.hx",1407);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1408)
		if ((this->cleared)){
			HX_STACK_LINE(1408)
			hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
		}
		HX_STACK_LINE(1409)
		{
			HX_STACK_LINE(1410)
			this->wrap_normal->zpp_inner->x = this->nx;
			HX_STACK_LINE(1411)
			this->wrap_normal->zpp_inner->y = this->ny;
			HX_STACK_LINE(1420)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_ColArbiter_obj,normal_validate,(void))

::zpp_nape::dynamics::ZPP_ColArbiter ZPP_ColArbiter_obj::zpp_pool;


ZPP_ColArbiter_obj::ZPP_ColArbiter_obj()
{
}

void ZPP_ColArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ColArbiter);
	HX_MARK_MEMBER_NAME(pre_dt,"pre_dt");
	HX_MARK_MEMBER_NAME(_mutable,"mutable");
	HX_MARK_MEMBER_NAME(stat,"stat");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(hpc2,"hpc2");
	HX_MARK_MEMBER_NAME(hc2,"hc2");
	HX_MARK_MEMBER_NAME(oc2,"oc2");
	HX_MARK_MEMBER_NAME(c2,"c2");
	HX_MARK_MEMBER_NAME(oc1,"oc1");
	HX_MARK_MEMBER_NAME(c1,"c1");
	HX_MARK_MEMBER_NAME(__ref_vertex,"__ref_vertex");
	HX_MARK_MEMBER_NAME(__ref_edge2,"__ref_edge2");
	HX_MARK_MEMBER_NAME(__ref_edge1,"__ref_edge1");
	HX_MARK_MEMBER_NAME(biasCoef,"biasCoef");
	HX_MARK_MEMBER_NAME(rev,"rev");
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(lproj,"lproj");
	HX_MARK_MEMBER_NAME(lnormy,"lnormy");
	HX_MARK_MEMBER_NAME(lnormx,"lnormx");
	HX_MARK_MEMBER_NAME(ptype,"ptype");
	HX_MARK_MEMBER_NAME(surfacey,"surfacey");
	HX_MARK_MEMBER_NAME(surfacex,"surfacex");
	HX_MARK_MEMBER_NAME(k2y,"k2y");
	HX_MARK_MEMBER_NAME(k2x,"k2x");
	HX_MARK_MEMBER_NAME(k1y,"k1y");
	HX_MARK_MEMBER_NAME(k1x,"k1x");
	HX_MARK_MEMBER_NAME(rt2b,"rt2b");
	HX_MARK_MEMBER_NAME(rn2b,"rn2b");
	HX_MARK_MEMBER_NAME(rt2a,"rt2a");
	HX_MARK_MEMBER_NAME(rn2a,"rn2a");
	HX_MARK_MEMBER_NAME(rt1b,"rt1b");
	HX_MARK_MEMBER_NAME(rn1b,"rn1b");
	HX_MARK_MEMBER_NAME(rt1a,"rt1a");
	HX_MARK_MEMBER_NAME(rn1a,"rn1a");
	HX_MARK_MEMBER_NAME(jrAcc,"jrAcc");
	HX_MARK_MEMBER_NAME(rMass,"rMass");
	HX_MARK_MEMBER_NAME(Kc,"Kc");
	HX_MARK_MEMBER_NAME(Kb,"Kb");
	HX_MARK_MEMBER_NAME(Ka,"Ka");
	HX_MARK_MEMBER_NAME(kMassc,"kMassc");
	HX_MARK_MEMBER_NAME(kMassb,"kMassb");
	HX_MARK_MEMBER_NAME(kMassa,"kMassa");
	HX_MARK_MEMBER_NAME(wrap_normal,"wrap_normal");
	HX_MARK_MEMBER_NAME(ny,"ny");
	HX_MARK_MEMBER_NAME(nx,"nx");
	HX_MARK_MEMBER_NAME(innards,"innards");
	HX_MARK_MEMBER_NAME(wrap_contacts,"wrap_contacts");
	HX_MARK_MEMBER_NAME(contacts,"contacts");
	HX_MARK_MEMBER_NAME(s2,"s2");
	HX_MARK_MEMBER_NAME(s1,"s1");
	HX_MARK_MEMBER_NAME(userdef_rfric,"userdef_rfric");
	HX_MARK_MEMBER_NAME(userdef_restitution,"userdef_restitution");
	HX_MARK_MEMBER_NAME(userdef_stat_fric,"userdef_stat_fric");
	HX_MARK_MEMBER_NAME(userdef_dyn_fric,"userdef_dyn_fric");
	HX_MARK_MEMBER_NAME(rfric,"rfric");
	HX_MARK_MEMBER_NAME(restitution,"restitution");
	HX_MARK_MEMBER_NAME(stat_fric,"stat_fric");
	HX_MARK_MEMBER_NAME(dyn_fric,"dyn_fric");
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_ColArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pre_dt,"pre_dt");
	HX_VISIT_MEMBER_NAME(_mutable,"mutable");
	HX_VISIT_MEMBER_NAME(stat,"stat");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(hpc2,"hpc2");
	HX_VISIT_MEMBER_NAME(hc2,"hc2");
	HX_VISIT_MEMBER_NAME(oc2,"oc2");
	HX_VISIT_MEMBER_NAME(c2,"c2");
	HX_VISIT_MEMBER_NAME(oc1,"oc1");
	HX_VISIT_MEMBER_NAME(c1,"c1");
	HX_VISIT_MEMBER_NAME(__ref_vertex,"__ref_vertex");
	HX_VISIT_MEMBER_NAME(__ref_edge2,"__ref_edge2");
	HX_VISIT_MEMBER_NAME(__ref_edge1,"__ref_edge1");
	HX_VISIT_MEMBER_NAME(biasCoef,"biasCoef");
	HX_VISIT_MEMBER_NAME(rev,"rev");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(lproj,"lproj");
	HX_VISIT_MEMBER_NAME(lnormy,"lnormy");
	HX_VISIT_MEMBER_NAME(lnormx,"lnormx");
	HX_VISIT_MEMBER_NAME(ptype,"ptype");
	HX_VISIT_MEMBER_NAME(surfacey,"surfacey");
	HX_VISIT_MEMBER_NAME(surfacex,"surfacex");
	HX_VISIT_MEMBER_NAME(k2y,"k2y");
	HX_VISIT_MEMBER_NAME(k2x,"k2x");
	HX_VISIT_MEMBER_NAME(k1y,"k1y");
	HX_VISIT_MEMBER_NAME(k1x,"k1x");
	HX_VISIT_MEMBER_NAME(rt2b,"rt2b");
	HX_VISIT_MEMBER_NAME(rn2b,"rn2b");
	HX_VISIT_MEMBER_NAME(rt2a,"rt2a");
	HX_VISIT_MEMBER_NAME(rn2a,"rn2a");
	HX_VISIT_MEMBER_NAME(rt1b,"rt1b");
	HX_VISIT_MEMBER_NAME(rn1b,"rn1b");
	HX_VISIT_MEMBER_NAME(rt1a,"rt1a");
	HX_VISIT_MEMBER_NAME(rn1a,"rn1a");
	HX_VISIT_MEMBER_NAME(jrAcc,"jrAcc");
	HX_VISIT_MEMBER_NAME(rMass,"rMass");
	HX_VISIT_MEMBER_NAME(Kc,"Kc");
	HX_VISIT_MEMBER_NAME(Kb,"Kb");
	HX_VISIT_MEMBER_NAME(Ka,"Ka");
	HX_VISIT_MEMBER_NAME(kMassc,"kMassc");
	HX_VISIT_MEMBER_NAME(kMassb,"kMassb");
	HX_VISIT_MEMBER_NAME(kMassa,"kMassa");
	HX_VISIT_MEMBER_NAME(wrap_normal,"wrap_normal");
	HX_VISIT_MEMBER_NAME(ny,"ny");
	HX_VISIT_MEMBER_NAME(nx,"nx");
	HX_VISIT_MEMBER_NAME(innards,"innards");
	HX_VISIT_MEMBER_NAME(wrap_contacts,"wrap_contacts");
	HX_VISIT_MEMBER_NAME(contacts,"contacts");
	HX_VISIT_MEMBER_NAME(s2,"s2");
	HX_VISIT_MEMBER_NAME(s1,"s1");
	HX_VISIT_MEMBER_NAME(userdef_rfric,"userdef_rfric");
	HX_VISIT_MEMBER_NAME(userdef_restitution,"userdef_restitution");
	HX_VISIT_MEMBER_NAME(userdef_stat_fric,"userdef_stat_fric");
	HX_VISIT_MEMBER_NAME(userdef_dyn_fric,"userdef_dyn_fric");
	HX_VISIT_MEMBER_NAME(rfric,"rfric");
	HX_VISIT_MEMBER_NAME(restitution,"restitution");
	HX_VISIT_MEMBER_NAME(stat_fric,"stat_fric");
	HX_VISIT_MEMBER_NAME(dyn_fric,"dyn_fric");
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_ColArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"c2") ) { return c2; }
		if (HX_FIELD_EQ(inName,"c1") ) { return c1; }
		if (HX_FIELD_EQ(inName,"Kc") ) { return Kc; }
		if (HX_FIELD_EQ(inName,"Kb") ) { return Kb; }
		if (HX_FIELD_EQ(inName,"Ka") ) { return Ka; }
		if (HX_FIELD_EQ(inName,"ny") ) { return ny; }
		if (HX_FIELD_EQ(inName,"nx") ) { return nx; }
		if (HX_FIELD_EQ(inName,"s2") ) { return s2; }
		if (HX_FIELD_EQ(inName,"s1") ) { return s1; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hc2") ) { return hc2; }
		if (HX_FIELD_EQ(inName,"oc2") ) { return oc2; }
		if (HX_FIELD_EQ(inName,"oc1") ) { return oc1; }
		if (HX_FIELD_EQ(inName,"rev") ) { return rev; }
		if (HX_FIELD_EQ(inName,"k2y") ) { return k2y; }
		if (HX_FIELD_EQ(inName,"k2x") ) { return k2x; }
		if (HX_FIELD_EQ(inName,"k1y") ) { return k1y; }
		if (HX_FIELD_EQ(inName,"k1x") ) { return k1x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stat") ) { return stat; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"hpc2") ) { return hpc2; }
		if (HX_FIELD_EQ(inName,"rt2b") ) { return rt2b; }
		if (HX_FIELD_EQ(inName,"rn2b") ) { return rn2b; }
		if (HX_FIELD_EQ(inName,"rt2a") ) { return rt2a; }
		if (HX_FIELD_EQ(inName,"rn2a") ) { return rn2a; }
		if (HX_FIELD_EQ(inName,"rt1b") ) { return rt1b; }
		if (HX_FIELD_EQ(inName,"rn1b") ) { return rn1b; }
		if (HX_FIELD_EQ(inName,"rt1a") ) { return rt1a; }
		if (HX_FIELD_EQ(inName,"rn1a") ) { return rn1a; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"lproj") ) { return lproj; }
		if (HX_FIELD_EQ(inName,"ptype") ) { return ptype; }
		if (HX_FIELD_EQ(inName,"jrAcc") ) { return jrAcc; }
		if (HX_FIELD_EQ(inName,"rMass") ) { return rMass; }
		if (HX_FIELD_EQ(inName,"rfric") ) { return rfric; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pre_dt") ) { return pre_dt; }
		if (HX_FIELD_EQ(inName,"retire") ) { return retire_dyn(); }
		if (HX_FIELD_EQ(inName,"assign") ) { return assign_dyn(); }
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		if (HX_FIELD_EQ(inName,"lnormy") ) { return lnormy; }
		if (HX_FIELD_EQ(inName,"lnormx") ) { return lnormx; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { return kMassc; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { return kMassb; }
		if (HX_FIELD_EQ(inName,"kMassa") ) { return kMassa; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		if (HX_FIELD_EQ(inName,"mutable") ) { return _mutable; }
		if (HX_FIELD_EQ(inName,"innards") ) { return innards; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"biasCoef") ) { return biasCoef; }
		if (HX_FIELD_EQ(inName,"surfacey") ) { return surfacey; }
		if (HX_FIELD_EQ(inName,"surfacex") ) { return surfacex; }
		if (HX_FIELD_EQ(inName,"contacts") ) { return contacts; }
		if (HX_FIELD_EQ(inName,"dyn_fric") ) { return dyn_fric; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		if (HX_FIELD_EQ(inName,"getnormal") ) { return getnormal_dyn(); }
		if (HX_FIELD_EQ(inName,"stat_fric") ) { return stat_fric; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"makemutable") ) { return makemutable_dyn(); }
		if (HX_FIELD_EQ(inName,"__ref_edge2") ) { return __ref_edge2; }
		if (HX_FIELD_EQ(inName,"__ref_edge1") ) { return __ref_edge1; }
		if (HX_FIELD_EQ(inName,"wrap_normal") ) { return wrap_normal; }
		if (HX_FIELD_EQ(inName,"restitution") ) { return restitution; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__ref_vertex") ) { return __ref_vertex; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setupcontacts") ) { return setupcontacts_dyn(); }
		if (HX_FIELD_EQ(inName,"makeimmutable") ) { return makeimmutable_dyn(); }
		if (HX_FIELD_EQ(inName,"injectContact") ) { return injectContact_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_contacts") ) { return wrap_contacts; }
		if (HX_FIELD_EQ(inName,"userdef_rfric") ) { return userdef_rfric; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"contacts_adder") ) { return contacts_adder_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_props") ) { return validate_props_dyn(); }
		if (HX_FIELD_EQ(inName,"calcProperties") ) { return calcProperties_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanupContacts") ) { return cleanupContacts_dyn(); }
		if (HX_FIELD_EQ(inName,"contacts_subber") ) { return contacts_subber_dyn(); }
		if (HX_FIELD_EQ(inName,"normal_validate") ) { return normal_validate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"userdef_dyn_fric") ) { return userdef_dyn_fric; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"userdef_stat_fric") ) { return userdef_stat_fric; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"userdef_restitution") ) { return userdef_restitution; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_ColArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"c2") ) { c2=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c1") ) { c1=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Kc") ) { Kc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Kb") ) { Kb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Ka") ) { Ka=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ny") ) { ny=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nx") ) { nx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s2") ) { s2=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s1") ) { s1=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hc2") ) { hc2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oc2") ) { oc2=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oc1") ) { oc1=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rev") ) { rev=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k2y") ) { k2y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k2x") ) { k2x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k1y") ) { k1y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k1x") ) { k1x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stat") ) { stat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_ColArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hpc2") ) { hpc2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt2b") ) { rt2b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rn2b") ) { rn2b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt2a") ) { rt2a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rn2a") ) { rn2a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt1b") ) { rt1b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rn1b") ) { rn1b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rt1a") ) { rt1a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rn1a") ) { rn1a=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lproj") ) { lproj=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ptype") ) { ptype=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jrAcc") ) { jrAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rMass") ) { rMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rfric") ) { rfric=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pre_dt") ) { pre_dt=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lnormy") ) { lnormy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lnormx") ) { lnormx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { kMassc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { kMassb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassa") ) { kMassa=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mutable") ) { _mutable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innards") ) { innards=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::dynamics::ZPP_ColArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"biasCoef") ) { biasCoef=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"surfacey") ) { surfacey=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"surfacex") ) { surfacex=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contacts") ) { contacts=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dyn_fric") ) { dyn_fric=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::dynamics::CollisionArbiter >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stat_fric") ) { stat_fric=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__ref_edge2") ) { __ref_edge2=inValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ref_edge1") ) { __ref_edge1=inValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_normal") ) { wrap_normal=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restitution") ) { restitution=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__ref_vertex") ) { __ref_vertex=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_contacts") ) { wrap_contacts=inValue.Cast< ::nape::dynamics::ContactList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userdef_rfric") ) { userdef_rfric=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"userdef_dyn_fric") ) { userdef_dyn_fric=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"userdef_stat_fric") ) { userdef_stat_fric=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"userdef_restitution") ) { userdef_restitution=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_ColArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pre_dt"));
	outFields->push(HX_CSTRING("mutable"));
	outFields->push(HX_CSTRING("stat"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("hpc2"));
	outFields->push(HX_CSTRING("hc2"));
	outFields->push(HX_CSTRING("oc2"));
	outFields->push(HX_CSTRING("c2"));
	outFields->push(HX_CSTRING("oc1"));
	outFields->push(HX_CSTRING("c1"));
	outFields->push(HX_CSTRING("__ref_vertex"));
	outFields->push(HX_CSTRING("__ref_edge2"));
	outFields->push(HX_CSTRING("__ref_edge1"));
	outFields->push(HX_CSTRING("biasCoef"));
	outFields->push(HX_CSTRING("rev"));
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("lproj"));
	outFields->push(HX_CSTRING("lnormy"));
	outFields->push(HX_CSTRING("lnormx"));
	outFields->push(HX_CSTRING("ptype"));
	outFields->push(HX_CSTRING("surfacey"));
	outFields->push(HX_CSTRING("surfacex"));
	outFields->push(HX_CSTRING("k2y"));
	outFields->push(HX_CSTRING("k2x"));
	outFields->push(HX_CSTRING("k1y"));
	outFields->push(HX_CSTRING("k1x"));
	outFields->push(HX_CSTRING("rt2b"));
	outFields->push(HX_CSTRING("rn2b"));
	outFields->push(HX_CSTRING("rt2a"));
	outFields->push(HX_CSTRING("rn2a"));
	outFields->push(HX_CSTRING("rt1b"));
	outFields->push(HX_CSTRING("rn1b"));
	outFields->push(HX_CSTRING("rt1a"));
	outFields->push(HX_CSTRING("rn1a"));
	outFields->push(HX_CSTRING("jrAcc"));
	outFields->push(HX_CSTRING("rMass"));
	outFields->push(HX_CSTRING("Kc"));
	outFields->push(HX_CSTRING("Kb"));
	outFields->push(HX_CSTRING("Ka"));
	outFields->push(HX_CSTRING("kMassc"));
	outFields->push(HX_CSTRING("kMassb"));
	outFields->push(HX_CSTRING("kMassa"));
	outFields->push(HX_CSTRING("wrap_normal"));
	outFields->push(HX_CSTRING("ny"));
	outFields->push(HX_CSTRING("nx"));
	outFields->push(HX_CSTRING("innards"));
	outFields->push(HX_CSTRING("wrap_contacts"));
	outFields->push(HX_CSTRING("contacts"));
	outFields->push(HX_CSTRING("s2"));
	outFields->push(HX_CSTRING("s1"));
	outFields->push(HX_CSTRING("userdef_rfric"));
	outFields->push(HX_CSTRING("userdef_restitution"));
	outFields->push(HX_CSTRING("userdef_stat_fric"));
	outFields->push(HX_CSTRING("userdef_dyn_fric"));
	outFields->push(HX_CSTRING("rfric"));
	outFields->push(HX_CSTRING("restitution"));
	outFields->push(HX_CSTRING("stat_fric"));
	outFields->push(HX_CSTRING("dyn_fric"));
	outFields->push(HX_CSTRING("outer_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("applyImpulsePos"),
	HX_CSTRING("applyImpulseVel"),
	HX_CSTRING("warmStart"),
	HX_CSTRING("preStep"),
	HX_CSTRING("pre_dt"),
	HX_CSTRING("cleanupContacts"),
	HX_CSTRING("setupcontacts"),
	HX_CSTRING("contacts_subber"),
	HX_CSTRING("contacts_adder"),
	HX_CSTRING("makeimmutable"),
	HX_CSTRING("makemutable"),
	HX_CSTRING("mutable"),
	HX_CSTRING("retire"),
	HX_CSTRING("validate_props"),
	HX_CSTRING("calcProperties"),
	HX_CSTRING("assign"),
	HX_CSTRING("injectContact"),
	HX_CSTRING("stat"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("next"),
	HX_CSTRING("hpc2"),
	HX_CSTRING("hc2"),
	HX_CSTRING("oc2"),
	HX_CSTRING("c2"),
	HX_CSTRING("oc1"),
	HX_CSTRING("c1"),
	HX_CSTRING("__ref_vertex"),
	HX_CSTRING("__ref_edge2"),
	HX_CSTRING("__ref_edge1"),
	HX_CSTRING("biasCoef"),
	HX_CSTRING("rev"),
	HX_CSTRING("radius"),
	HX_CSTRING("lproj"),
	HX_CSTRING("lnormy"),
	HX_CSTRING("lnormx"),
	HX_CSTRING("ptype"),
	HX_CSTRING("surfacey"),
	HX_CSTRING("surfacex"),
	HX_CSTRING("k2y"),
	HX_CSTRING("k2x"),
	HX_CSTRING("k1y"),
	HX_CSTRING("k1x"),
	HX_CSTRING("rt2b"),
	HX_CSTRING("rn2b"),
	HX_CSTRING("rt2a"),
	HX_CSTRING("rn2a"),
	HX_CSTRING("rt1b"),
	HX_CSTRING("rn1b"),
	HX_CSTRING("rt1a"),
	HX_CSTRING("rn1a"),
	HX_CSTRING("jrAcc"),
	HX_CSTRING("rMass"),
	HX_CSTRING("Kc"),
	HX_CSTRING("Kb"),
	HX_CSTRING("Ka"),
	HX_CSTRING("kMassc"),
	HX_CSTRING("kMassb"),
	HX_CSTRING("kMassa"),
	HX_CSTRING("getnormal"),
	HX_CSTRING("wrap_normal"),
	HX_CSTRING("normal_validate"),
	HX_CSTRING("ny"),
	HX_CSTRING("nx"),
	HX_CSTRING("innards"),
	HX_CSTRING("wrap_contacts"),
	HX_CSTRING("contacts"),
	HX_CSTRING("s2"),
	HX_CSTRING("s1"),
	HX_CSTRING("userdef_rfric"),
	HX_CSTRING("userdef_restitution"),
	HX_CSTRING("userdef_stat_fric"),
	HX_CSTRING("userdef_dyn_fric"),
	HX_CSTRING("rfric"),
	HX_CSTRING("restitution"),
	HX_CSTRING("stat_fric"),
	HX_CSTRING("dyn_fric"),
	HX_CSTRING("outer_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ColArbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_ColArbiter_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ColArbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_ColArbiter_obj::zpp_pool,"zpp_pool");
};

Class ZPP_ColArbiter_obj::__mClass;

void ZPP_ColArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_ColArbiter"), hx::TCanCast< ZPP_ColArbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_ColArbiter_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace dynamics
