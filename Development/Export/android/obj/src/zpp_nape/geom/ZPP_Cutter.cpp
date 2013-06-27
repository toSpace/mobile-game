#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Cutter
#include <zpp_nape/geom/ZPP_Cutter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutInt
#include <zpp_nape/util/ZNPList_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutVert
#include <zpp_nape/util/ZNPList_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutVert
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Cutter_obj::__construct()
{
	return null();
}

ZPP_Cutter_obj::~ZPP_Cutter_obj() { }

Dynamic ZPP_Cutter_obj::__CreateEmpty() { return  new ZPP_Cutter_obj; }
hx::ObjectPtr< ZPP_Cutter_obj > ZPP_Cutter_obj::__new()
{  hx::ObjectPtr< ZPP_Cutter_obj > result = new ZPP_Cutter_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Cutter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Cutter_obj > result = new ZPP_Cutter_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPList_ZPP_CutInt ZPP_Cutter_obj::ints;

::zpp_nape::util::ZNPList_ZPP_CutVert ZPP_Cutter_obj::paths;

::nape::geom::GeomPolyList ZPP_Cutter_obj::run( ::zpp_nape::geom::ZPP_GeomVert P,::nape::geom::Vec2 _start,::nape::geom::Vec2 _end,bool bstart,bool bend,::nape::geom::GeomPolyList output){
	HX_STACK_PUSH("ZPP_Cutter::run","zpp_nape/geom/Cutter.hx",324);
	HX_STACK_ARG(P,"P");
	HX_STACK_ARG(_start,"_start");
	HX_STACK_ARG(_end,"_end");
	HX_STACK_ARG(bstart,"bstart");
	HX_STACK_ARG(bend,"bend");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(325)
	Float px = 0.0;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(326)
	Float py = 0.0;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(327)
	{
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2 &_start){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",328);
				{
					HX_STACK_LINE(328)
					if (((bool((_start != null())) && bool(_start->zpp_disp)))){
						HX_STACK_LINE(328)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						::zpp_nape::geom::ZPP_Vec2 _this = _start->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(328)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(328)
							_this->_validate();
						}
					}
					HX_STACK_LINE(328)
					return _start->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(328)
		px = _Function_2_1::Block(_start);
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2 &_start){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",329);
				{
					HX_STACK_LINE(329)
					if (((bool((_start != null())) && bool(_start->zpp_disp)))){
						HX_STACK_LINE(329)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(329)
					{
						HX_STACK_LINE(329)
						::zpp_nape::geom::ZPP_Vec2 _this = _start->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(329)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(329)
							_this->_validate();
						}
					}
					HX_STACK_LINE(329)
					return _start->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(329)
		py = _Function_2_2::Block(_start);
		HX_STACK_LINE(338)
		{
		}
	}
	HX_STACK_LINE(347)
	Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(348)
	Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(349)
	{
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2 &_end){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",350);
				{
					HX_STACK_LINE(350)
					if (((bool((_end != null())) && bool(_end->zpp_disp)))){
						HX_STACK_LINE(350)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2 _this = _end->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(350)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(350)
							_this->_validate();
						}
					}
					HX_STACK_LINE(350)
					return _end->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(350)
		dx = (_Function_2_1::Block(_end) - px);
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2 &_end){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",351);
				{
					HX_STACK_LINE(351)
					if (((bool((_end != null())) && bool(_end->zpp_disp)))){
						HX_STACK_LINE(351)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(351)
					{
						HX_STACK_LINE(351)
						::zpp_nape::geom::ZPP_Vec2 _this = _end->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(351)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(351)
							_this->_validate();
						}
					}
					HX_STACK_LINE(351)
					return _end->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(351)
		dy = (_Function_2_2::Block(_end) - py);
	}
	HX_STACK_LINE(353)
	Float min = (  ((bstart)) ? Float((int)0) : Float(::Math_obj::NEGATIVE_INFINITY) );		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(354)
	Float max = (  ((bend)) ? Float((int)1) : Float(::Math_obj::POSITIVE_INFINITY) );		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(355)
	Float crx = -((((py * dx) - (px * dy))));		HX_STACK_VAR(crx,"crx");
	HX_STACK_LINE(356)
	::zpp_nape::geom::ZPP_CutVert verts = null();		HX_STACK_VAR(verts,"verts");
	HX_STACK_LINE(357)
	bool clashes = false;		HX_STACK_VAR(clashes,"clashes");
	HX_STACK_LINE(358)
	::zpp_nape::geom::ZPP_GeomVert p = P;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(359)
	do{
		HX_STACK_LINE(360)
		::zpp_nape::geom::ZPP_CutVert c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(362)
			if (((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(362)
				c = ::zpp_nape::geom::ZPP_CutVert_obj::__new();
			}
			else{
				HX_STACK_LINE(369)
				c = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
				HX_STACK_LINE(370)
				::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = c->next;
				HX_STACK_LINE(371)
				c->next = null();
			}
			HX_STACK_LINE(376)
			Dynamic();
		}
		HX_STACK_LINE(378)
		c->vert = p;
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(380)
			c->posx = c->vert->x;
			HX_STACK_LINE(381)
			c->posy = c->vert->y;
			HX_STACK_LINE(390)
			{
			}
		}
		HX_STACK_LINE(399)
		c->value = (((c->posy * dx) - (c->posx * dy)) + crx);
		HX_STACK_LINE(400)
		c->positive = (c->value > (int)0);
		HX_STACK_LINE(401)
		if (((c->value == (int)0))){
			HX_STACK_LINE(401)
			clashes = true;
		}
		struct _Function_2_1{
			inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &verts,::zpp_nape::geom::ZPP_CutVert &c){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",402);
				{
					HX_STACK_LINE(403)
					::zpp_nape::geom::ZPP_CutVert obj = c;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(404)
					if (((verts == null()))){
						HX_STACK_LINE(404)
						verts = obj->prev = obj->next = obj;
					}
					else{
						HX_STACK_LINE(406)
						obj->prev = verts;
						HX_STACK_LINE(407)
						obj->next = verts->next;
						HX_STACK_LINE(408)
						verts->next->prev = obj;
						HX_STACK_LINE(409)
						verts->next = obj;
					}
					HX_STACK_LINE(411)
					return obj;
				}
				return null();
			}
		};
		HX_STACK_LINE(402)
		verts = _Function_2_1::Block(verts,c);
		HX_STACK_LINE(413)
		p = p->next;
	}
while(((p != P)));
	HX_STACK_LINE(416)
	if ((clashes)){
		HX_STACK_LINE(417)
		::zpp_nape::geom::ZPP_CutVert start = null();		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(419)
			::zpp_nape::geom::ZPP_CutVert F = verts;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(420)
			::zpp_nape::geom::ZPP_CutVert L = verts;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(421)
			if (((F != null()))){
				HX_STACK_LINE(422)
				::zpp_nape::geom::ZPP_CutVert nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(423)
				do{
					HX_STACK_LINE(424)
					::zpp_nape::geom::ZPP_CutVert p1 = nite;		HX_STACK_VAR(p1,"p1");
					HX_STACK_LINE(425)
					if (((p1->value != 0.0))){
						HX_STACK_LINE(428)
						start = p1;
						HX_STACK_LINE(429)
						break;
					}
					HX_STACK_LINE(433)
					nite = nite->next;
				}
while(((nite != L)));
			}
		}
		HX_STACK_LINE(446)
		Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
		HX_STACK_LINE(447)
		Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(449)
			nx = dx;
			HX_STACK_LINE(450)
			ny = dy;
			HX_STACK_LINE(459)
			{
			}
		}
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(470)
				Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(479)
				Float imag = (Float(1.0) / Float(::Math_obj::sqrt(d)));		HX_STACK_VAR(imag,"imag");
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(481)
					Float t = imag;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(490)
					hx::MultEq(nx,t);
					HX_STACK_LINE(491)
					hx::MultEq(ny,t);
				}
			}
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(495)
				Float t = nx;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(496)
				nx = -(ny);
				HX_STACK_LINE(497)
				ny = t;
			}
		}
		HX_STACK_LINE(500)
		::zpp_nape::geom::ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(501)
		::zpp_nape::geom::ZPP_CutVert p1 = start;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(502)
		do{
			HX_STACK_LINE(503)
			if (((bool((p1->value != 0.0)) && bool(((bool((pre == null())) || bool((p1 == pre->next)))))))){
				HX_STACK_LINE(504)
				pre = p1;
				HX_STACK_LINE(505)
				p1 = p1->next;
				HX_STACK_LINE(506)
				continue;
			}
			HX_STACK_LINE(508)
			Float prod = (pre->value * p1->value);		HX_STACK_VAR(prod,"prod");
			HX_STACK_LINE(509)
			if (((prod == (int)0))){
				HX_STACK_LINE(510)
				p1 = p1->next;
				HX_STACK_LINE(511)
				continue;
			}
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_CutVert a = pre->next;		HX_STACK_VAR(a,"a");
			struct _Function_3_1{
				inline static bool Block( Float &ny,Float &nx,::zpp_nape::geom::ZPP_CutVert &a,::zpp_nape::geom::ZPP_GeomVert &P){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",515);
					{
						HX_STACK_LINE(516)
						::zpp_nape::geom::ZPP_CutVert b = a->next;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(517)
						Float midx = 0.0;		HX_STACK_VAR(midx,"midx");
						HX_STACK_LINE(518)
						Float midy = 0.0;		HX_STACK_VAR(midy,"midy");
						HX_STACK_LINE(519)
						{
							HX_STACK_LINE(520)
							midx = (a->posx + b->posx);
							HX_STACK_LINE(521)
							midy = (a->posy + b->posy);
						}
						HX_STACK_LINE(523)
						{
							HX_STACK_LINE(524)
							Float t = 0.5;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(533)
							hx::MultEq(midx,t);
							HX_STACK_LINE(534)
							hx::MultEq(midy,t);
						}
						struct _Function_4_1{
							inline static bool Block( Float &midy,Float &ny,Float &nx,Float &midx,::zpp_nape::geom::ZPP_GeomVert &P){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",536);
								{
									HX_STACK_LINE(537)
									Float x = (midx + (nx * 1e-8));		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(538)
									Float y = (midy + (ny * 1e-8));		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(539)
									bool ret = false;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(540)
									{
										HX_STACK_LINE(541)
										::zpp_nape::geom::ZPP_GeomVert F = P;		HX_STACK_VAR(F,"F");
										HX_STACK_LINE(542)
										::zpp_nape::geom::ZPP_GeomVert L = P;		HX_STACK_VAR(L,"L");
										HX_STACK_LINE(543)
										if (((F != null()))){
											HX_STACK_LINE(544)
											::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
											HX_STACK_LINE(545)
											do{
												HX_STACK_LINE(546)
												::zpp_nape::geom::ZPP_GeomVert p2 = nite;		HX_STACK_VAR(p2,"p2");
												HX_STACK_LINE(547)
												{
													HX_STACK_LINE(549)
													::zpp_nape::geom::ZPP_GeomVert q = p2->prev;		HX_STACK_VAR(q,"q");
													HX_STACK_LINE(550)
													if (((bool(((bool((bool((p2->y < y)) && bool((q->y >= y)))) || bool((bool((q->y < y)) && bool((p2->y >= y))))))) && bool(((bool((p2->x <= x)) || bool((q->x <= x)))))))){
														HX_STACK_LINE(550)
														if ((((p2->x + ((Float(((y - p2->y))) / Float(((q->y - p2->y)))) * ((q->x - p2->x)))) < x))){
															HX_STACK_LINE(551)
															ret = !(ret);
														}
													}
												}
												HX_STACK_LINE(557)
												nite = nite->next;
											}
while(((nite != L)));
										}
									}
									HX_STACK_LINE(562)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(536)
						return _Function_4_1::Block(midy,ny,nx,midx,P);
					}
					return null();
				}
			};
			HX_STACK_LINE(514)
			bool positive = (  (((prod > (int)0))) ? bool(pre->positive) : bool(_Function_3_1::Block(ny,nx,a,P)) );		HX_STACK_VAR(positive,"positive");
			HX_STACK_LINE(565)
			{
				HX_STACK_LINE(566)
				::zpp_nape::geom::ZPP_CutVert F = a;		HX_STACK_VAR(F,"F");
				HX_STACK_LINE(567)
				::zpp_nape::geom::ZPP_CutVert L = p1;		HX_STACK_VAR(L,"L");
				HX_STACK_LINE(568)
				if (((F != null()))){
					HX_STACK_LINE(569)
					::zpp_nape::geom::ZPP_CutVert nite = F;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(570)
					do{
						HX_STACK_LINE(571)
						::zpp_nape::geom::ZPP_CutVert q = nite;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(572)
						q->positive = positive;
						HX_STACK_LINE(575)
						nite = nite->next;
					}
while(((nite != L)));
				}
			}
			HX_STACK_LINE(580)
			pre = p1;
			HX_STACK_LINE(581)
			p1 = p1->next;
		}
while(((p1 != start)));
		HX_STACK_LINE(584)
		do{
			HX_STACK_LINE(585)
			if (((bool((p1->value != 0.0)) && bool(((bool((pre == null())) || bool((p1 == pre->next)))))))){
				HX_STACK_LINE(586)
				pre = p1;
				HX_STACK_LINE(587)
				p1 = p1->next;
				HX_STACK_LINE(588)
				continue;
			}
			HX_STACK_LINE(590)
			Float prod = (pre->value * p1->value);		HX_STACK_VAR(prod,"prod");
			HX_STACK_LINE(591)
			if (((prod == (int)0))){
				HX_STACK_LINE(592)
				p1 = p1->next;
				HX_STACK_LINE(593)
				continue;
			}
			HX_STACK_LINE(595)
			::zpp_nape::geom::ZPP_CutVert a = pre->next;		HX_STACK_VAR(a,"a");
			struct _Function_3_1{
				inline static bool Block( Float &ny,Float &nx,::zpp_nape::geom::ZPP_CutVert &a,::zpp_nape::geom::ZPP_GeomVert &P){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",597);
					{
						HX_STACK_LINE(598)
						::zpp_nape::geom::ZPP_CutVert b = a->next;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(599)
						Float midx = 0.0;		HX_STACK_VAR(midx,"midx");
						HX_STACK_LINE(600)
						Float midy = 0.0;		HX_STACK_VAR(midy,"midy");
						HX_STACK_LINE(601)
						{
							HX_STACK_LINE(602)
							midx = (a->posx + b->posx);
							HX_STACK_LINE(603)
							midy = (a->posy + b->posy);
						}
						HX_STACK_LINE(605)
						{
							HX_STACK_LINE(606)
							Float t = 0.5;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(615)
							hx::MultEq(midx,t);
							HX_STACK_LINE(616)
							hx::MultEq(midy,t);
						}
						struct _Function_4_1{
							inline static bool Block( Float &midy,Float &ny,Float &nx,Float &midx,::zpp_nape::geom::ZPP_GeomVert &P){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",618);
								{
									HX_STACK_LINE(619)
									Float x = (midx + (nx * 1e-8));		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(620)
									Float y = (midy + (ny * 1e-8));		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(621)
									bool ret = false;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(622)
									{
										HX_STACK_LINE(623)
										::zpp_nape::geom::ZPP_GeomVert F = P;		HX_STACK_VAR(F,"F");
										HX_STACK_LINE(624)
										::zpp_nape::geom::ZPP_GeomVert L = P;		HX_STACK_VAR(L,"L");
										HX_STACK_LINE(625)
										if (((F != null()))){
											HX_STACK_LINE(626)
											::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
											HX_STACK_LINE(627)
											do{
												HX_STACK_LINE(628)
												::zpp_nape::geom::ZPP_GeomVert p2 = nite;		HX_STACK_VAR(p2,"p2");
												HX_STACK_LINE(629)
												{
													HX_STACK_LINE(631)
													::zpp_nape::geom::ZPP_GeomVert q = p2->prev;		HX_STACK_VAR(q,"q");
													HX_STACK_LINE(632)
													if (((bool(((bool((bool((p2->y < y)) && bool((q->y >= y)))) || bool((bool((q->y < y)) && bool((p2->y >= y))))))) && bool(((bool((p2->x <= x)) || bool((q->x <= x)))))))){
														HX_STACK_LINE(632)
														if ((((p2->x + ((Float(((y - p2->y))) / Float(((q->y - p2->y)))) * ((q->x - p2->x)))) < x))){
															HX_STACK_LINE(633)
															ret = !(ret);
														}
													}
												}
												HX_STACK_LINE(639)
												nite = nite->next;
											}
while(((nite != L)));
										}
									}
									HX_STACK_LINE(644)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(618)
						return _Function_4_1::Block(midy,ny,nx,midx,P);
					}
					return null();
				}
			};
			HX_STACK_LINE(596)
			bool positive = (  (((prod > (int)0))) ? bool(pre->positive) : bool(_Function_3_1::Block(ny,nx,a,P)) );		HX_STACK_VAR(positive,"positive");
			HX_STACK_LINE(647)
			{
				HX_STACK_LINE(648)
				::zpp_nape::geom::ZPP_CutVert F = a;		HX_STACK_VAR(F,"F");
				HX_STACK_LINE(649)
				::zpp_nape::geom::ZPP_CutVert L = p1;		HX_STACK_VAR(L,"L");
				HX_STACK_LINE(650)
				if (((F != null()))){
					HX_STACK_LINE(651)
					::zpp_nape::geom::ZPP_CutVert nite = F;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(652)
					do{
						HX_STACK_LINE(653)
						::zpp_nape::geom::ZPP_CutVert q = nite;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(654)
						q->positive = positive;
						HX_STACK_LINE(657)
						nite = nite->next;
					}
while(((nite != L)));
				}
			}
			HX_STACK_LINE(662)
			pre = p1;
			HX_STACK_LINE(663)
			p1 = p1->next;
		}
while((false));
	}
	HX_STACK_LINE(667)
	if (((::zpp_nape::geom::ZPP_Cutter_obj::ints == null()))){
		HX_STACK_LINE(667)
		::zpp_nape::geom::ZPP_Cutter_obj::ints = ::zpp_nape::util::ZNPList_ZPP_CutInt_obj::__new();
	}
	HX_STACK_LINE(670)
	if (((::zpp_nape::geom::ZPP_Cutter_obj::paths == null()))){
		HX_STACK_LINE(670)
		::zpp_nape::geom::ZPP_Cutter_obj::paths = ::zpp_nape::util::ZNPList_ZPP_CutVert_obj::__new();
	}
	HX_STACK_LINE(673)
	::zpp_nape::geom::ZPP_GeomVert start = null();		HX_STACK_VAR(start,"start");
	HX_STACK_LINE(674)
	{
		struct _Function_2_1{
			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_CutVert &verts){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",675);
				{
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(675)
					{
						HX_STACK_LINE(675)
						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
							HX_STACK_LINE(675)
							ret = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
						}
						else{
							HX_STACK_LINE(675)
							ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
							HX_STACK_LINE(675)
							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
							HX_STACK_LINE(675)
							ret->next = null();
						}
						HX_STACK_LINE(675)
						ret->forced = false;
					}
					HX_STACK_LINE(675)
					{
						HX_STACK_LINE(675)
						ret->x = verts->posx;
						HX_STACK_LINE(675)
						ret->y = verts->posy;
						HX_STACK_LINE(675)
						{
						}
					}
					HX_STACK_LINE(675)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(675)
		::zpp_nape::geom::ZPP_GeomVert obj = _Function_2_1::Block(verts);		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(676)
		if (((start == null()))){
			HX_STACK_LINE(676)
			start = obj->prev = obj->next = obj;
		}
		else{
			HX_STACK_LINE(678)
			obj->next = start;
			HX_STACK_LINE(679)
			obj->prev = start->prev;
			HX_STACK_LINE(680)
			start->prev->next = obj;
			HX_STACK_LINE(681)
			start->prev = obj;
		}
		HX_STACK_LINE(683)
		obj;
	}
	HX_STACK_LINE(685)
	::zpp_nape::geom::ZPP_GeomVert origin = start;		HX_STACK_VAR(origin,"origin");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_GeomVert &start){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",686);
			{
				HX_STACK_LINE(686)
				::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(686)
				{
					HX_STACK_LINE(686)
					if (((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(686)
						ret = ::zpp_nape::geom::ZPP_CutVert_obj::__new();
					}
					else{
						HX_STACK_LINE(686)
						ret = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
						HX_STACK_LINE(686)
						::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
						HX_STACK_LINE(686)
						ret->next = null();
					}
					HX_STACK_LINE(686)
					Dynamic();
				}
				HX_STACK_LINE(686)
				ret->vert = start;
				HX_STACK_LINE(686)
				ret->parent = ret;
				HX_STACK_LINE(686)
				ret->rank = (int)0;
				HX_STACK_LINE(686)
				ret->used = false;
				HX_STACK_LINE(686)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(686)
	::zpp_nape::geom::ZPP_CutVert firstpath = _Function_1_1::Block(start);		HX_STACK_VAR(firstpath,"firstpath");
	HX_STACK_LINE(687)
	::zpp_nape::geom::ZPP_Cutter_obj::paths->add(firstpath);
	HX_STACK_LINE(688)
	::zpp_nape::geom::ZPP_CutVert i = verts;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(689)
	do{
		HX_STACK_LINE(690)
		::zpp_nape::geom::ZPP_CutVert j = i->next;		HX_STACK_VAR(j,"j");
		struct _Function_2_1{
			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_CutVert &j){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",691);
				{
					HX_STACK_LINE(691)
					::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(691)
					{
						HX_STACK_LINE(691)
						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
							HX_STACK_LINE(691)
							ret = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
						}
						else{
							HX_STACK_LINE(691)
							ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
							HX_STACK_LINE(691)
							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
							HX_STACK_LINE(691)
							ret->next = null();
						}
						HX_STACK_LINE(691)
						ret->forced = false;
					}
					HX_STACK_LINE(691)
					{
						HX_STACK_LINE(691)
						ret->x = j->posx;
						HX_STACK_LINE(691)
						ret->y = j->posy;
						HX_STACK_LINE(691)
						{
						}
					}
					HX_STACK_LINE(691)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(691)
		::zpp_nape::geom::ZPP_GeomVert pj = _Function_2_1::Block(j);		HX_STACK_VAR(pj,"pj");
		HX_STACK_LINE(692)
		if (((i->positive == j->positive))){
			HX_STACK_LINE(694)
			::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(695)
			if (((start == null()))){
				HX_STACK_LINE(695)
				start = obj->prev = obj->next = obj;
			}
			else{
				HX_STACK_LINE(697)
				obj->next = start;
				HX_STACK_LINE(698)
				obj->prev = start->prev;
				HX_STACK_LINE(699)
				start->prev->next = obj;
				HX_STACK_LINE(700)
				start->prev = obj;
			}
			HX_STACK_LINE(702)
			obj;
		}
		else{
			HX_STACK_LINE(706)
			Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
			HX_STACK_LINE(707)
			Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
			HX_STACK_LINE(708)
			{
				HX_STACK_LINE(709)
				ux = (j->posx - i->posx);
				HX_STACK_LINE(710)
				uy = (j->posy - i->posy);
			}
			HX_STACK_LINE(712)
			Float denom = ((dy * ux) - (dx * uy));		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(721)
			denom = (Float((int)1) / Float(denom));
			HX_STACK_LINE(722)
			Float pax = 0.0;		HX_STACK_VAR(pax,"pax");
			HX_STACK_LINE(723)
			Float pay = 0.0;		HX_STACK_VAR(pay,"pay");
			HX_STACK_LINE(724)
			{
				HX_STACK_LINE(725)
				pax = (px - i->posx);
				HX_STACK_LINE(726)
				pay = (py - i->posy);
			}
			HX_STACK_LINE(728)
			Float s = ((((uy * pax) - (ux * pay))) * denom);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(729)
			if (((bool((s < min)) || bool((s > max))))){
				struct _Function_4_1{
					inline static ::zpp_nape::geom::ZPP_CutInt Block( Float &s){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",730);
						{
							HX_STACK_LINE(730)
							bool vertex = false;		HX_STACK_VAR(vertex,"vertex");
							HX_STACK_LINE(730)
							::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								if (((::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool == null()))){
									HX_STACK_LINE(730)
									ret = ::zpp_nape::geom::ZPP_CutInt_obj::__new();
								}
								else{
									HX_STACK_LINE(730)
									ret = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
									HX_STACK_LINE(730)
									::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
									HX_STACK_LINE(730)
									ret->next = null();
								}
								HX_STACK_LINE(730)
								Dynamic();
							}
							HX_STACK_LINE(730)
							ret->virtualint = true;
							HX_STACK_LINE(730)
							ret->end = null();
							HX_STACK_LINE(730)
							ret->start = null();
							HX_STACK_LINE(730)
							ret->path0 = null();
							HX_STACK_LINE(730)
							ret->path1 = null();
							HX_STACK_LINE(730)
							ret->time = s;
							HX_STACK_LINE(730)
							ret->vertex = vertex;
							HX_STACK_LINE(730)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_Cutter_obj::ints->add(_Function_4_1::Block(s));
				HX_STACK_LINE(731)
				{
					HX_STACK_LINE(732)
					::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(733)
					if (((start == null()))){
						HX_STACK_LINE(733)
						start = obj->prev = obj->next = obj;
					}
					else{
						HX_STACK_LINE(735)
						obj->next = start;
						HX_STACK_LINE(736)
						obj->prev = start->prev;
						HX_STACK_LINE(737)
						start->prev->next = obj;
						HX_STACK_LINE(738)
						start->prev = obj;
					}
					HX_STACK_LINE(740)
					obj;
				}
			}
			else{
				HX_STACK_LINE(743)
				if (((i->value == (int)0))){
					HX_STACK_LINE(745)
					::zpp_nape::geom::ZPP_GeomVert endof = start->prev;		HX_STACK_VAR(endof,"endof");
					HX_STACK_LINE(746)
					start = null();
					HX_STACK_LINE(747)
					{
						struct _Function_6_1{
							inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &endof){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",748);
								{
									HX_STACK_LINE(748)
									::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(748)
									{
										HX_STACK_LINE(748)
										if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
											HX_STACK_LINE(748)
											ret = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
										}
										else{
											HX_STACK_LINE(748)
											ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
											HX_STACK_LINE(748)
											::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
											HX_STACK_LINE(748)
											ret->next = null();
										}
										HX_STACK_LINE(748)
										ret->forced = false;
									}
									HX_STACK_LINE(748)
									{
										HX_STACK_LINE(748)
										ret->x = endof->x;
										HX_STACK_LINE(748)
										ret->y = endof->y;
										HX_STACK_LINE(748)
										{
										}
									}
									HX_STACK_LINE(748)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(748)
						::zpp_nape::geom::ZPP_GeomVert obj = _Function_6_1::Block(endof);		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(749)
						if (((start == null()))){
							HX_STACK_LINE(749)
							start = obj->prev = obj->next = obj;
						}
						else{
							HX_STACK_LINE(751)
							obj->next = start;
							HX_STACK_LINE(752)
							obj->prev = start->prev;
							HX_STACK_LINE(753)
							start->prev->next = obj;
							HX_STACK_LINE(754)
							start->prev = obj;
						}
						HX_STACK_LINE(756)
						obj;
					}
					HX_STACK_LINE(758)
					{
						HX_STACK_LINE(759)
						::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(760)
						if (((start == null()))){
							HX_STACK_LINE(760)
							start = obj->prev = obj->next = obj;
						}
						else{
							HX_STACK_LINE(762)
							obj->next = start;
							HX_STACK_LINE(763)
							obj->prev = start->prev;
							HX_STACK_LINE(764)
							start->prev->next = obj;
							HX_STACK_LINE(765)
							start->prev = obj;
						}
						HX_STACK_LINE(767)
						obj;
					}
					HX_STACK_LINE(769)
					::zpp_nape::geom::ZPP_CutVert prepath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(prepath,"prepath");
					struct _Function_5_1{
						inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_GeomVert &start){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",770);
							{
								HX_STACK_LINE(770)
								::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(770)
								{
									HX_STACK_LINE(770)
									if (((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool == null()))){
										HX_STACK_LINE(770)
										ret = ::zpp_nape::geom::ZPP_CutVert_obj::__new();
									}
									else{
										HX_STACK_LINE(770)
										ret = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
										HX_STACK_LINE(770)
										::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
										HX_STACK_LINE(770)
										ret->next = null();
									}
									HX_STACK_LINE(770)
									Dynamic();
								}
								HX_STACK_LINE(770)
								ret->vert = start;
								HX_STACK_LINE(770)
								ret->parent = ret;
								HX_STACK_LINE(770)
								ret->rank = (int)0;
								HX_STACK_LINE(770)
								ret->used = false;
								HX_STACK_LINE(770)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(770)
					::zpp_nape::geom::ZPP_Cutter_obj::paths->add(_Function_5_1::Block(start));
					HX_STACK_LINE(771)
					::zpp_nape::geom::ZPP_CutVert postpath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(postpath,"postpath");
					struct _Function_5_2{
						inline static ::zpp_nape::geom::ZPP_CutInt Block( ::zpp_nape::geom::ZPP_GeomVert &endof,::zpp_nape::geom::ZPP_CutVert &postpath,::zpp_nape::geom::ZPP_CutVert &prepath,Float &s,::zpp_nape::geom::ZPP_GeomVert &start){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",772);
							{
								HX_STACK_LINE(772)
								bool vertex = false;		HX_STACK_VAR(vertex,"vertex");
								HX_STACK_LINE(772)
								::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									if (((::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool == null()))){
										HX_STACK_LINE(772)
										ret = ::zpp_nape::geom::ZPP_CutInt_obj::__new();
									}
									else{
										HX_STACK_LINE(772)
										ret = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
										HX_STACK_LINE(772)
										::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
										HX_STACK_LINE(772)
										ret->next = null();
									}
									HX_STACK_LINE(772)
									Dynamic();
								}
								HX_STACK_LINE(772)
								ret->virtualint = true;
								HX_STACK_LINE(772)
								ret->end = endof;
								HX_STACK_LINE(772)
								ret->start = start;
								HX_STACK_LINE(772)
								ret->path0 = prepath;
								HX_STACK_LINE(772)
								ret->path1 = postpath;
								HX_STACK_LINE(772)
								ret->time = s;
								HX_STACK_LINE(772)
								ret->vertex = vertex;
								HX_STACK_LINE(772)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(772)
					::zpp_nape::geom::ZPP_Cutter_obj::ints->add(_Function_5_2::Block(endof,postpath,prepath,s,start));
				}
				else{
					HX_STACK_LINE(774)
					if (((j->value == (int)0))){
						HX_STACK_LINE(775)
						{
							HX_STACK_LINE(776)
							::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(777)
							if (((start == null()))){
								HX_STACK_LINE(777)
								start = obj->prev = obj->next = obj;
							}
							else{
								HX_STACK_LINE(779)
								obj->next = start;
								HX_STACK_LINE(780)
								obj->prev = start->prev;
								HX_STACK_LINE(781)
								start->prev->next = obj;
								HX_STACK_LINE(782)
								start->prev = obj;
							}
							HX_STACK_LINE(784)
							obj;
						}
						HX_STACK_LINE(786)
						::zpp_nape::geom::ZPP_GeomVert endof = start->prev;		HX_STACK_VAR(endof,"endof");
						HX_STACK_LINE(787)
						start = null();
						HX_STACK_LINE(788)
						{
							struct _Function_7_1{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_CutVert &j){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",789);
									{
										HX_STACK_LINE(789)
										::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(789)
										{
											HX_STACK_LINE(789)
											if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
												HX_STACK_LINE(789)
												ret = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
											}
											else{
												HX_STACK_LINE(789)
												ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
												HX_STACK_LINE(789)
												::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
												HX_STACK_LINE(789)
												ret->next = null();
											}
											HX_STACK_LINE(789)
											ret->forced = false;
										}
										HX_STACK_LINE(789)
										{
											HX_STACK_LINE(789)
											ret->x = j->posx;
											HX_STACK_LINE(789)
											ret->y = j->posy;
											HX_STACK_LINE(789)
											{
											}
										}
										HX_STACK_LINE(789)
										return ret;
									}
									return null();
								}
							};
							HX_STACK_LINE(789)
							::zpp_nape::geom::ZPP_GeomVert obj = _Function_7_1::Block(j);		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(790)
							if (((start == null()))){
								HX_STACK_LINE(790)
								start = obj->prev = obj->next = obj;
							}
							else{
								HX_STACK_LINE(792)
								obj->next = start;
								HX_STACK_LINE(793)
								obj->prev = start->prev;
								HX_STACK_LINE(794)
								start->prev->next = obj;
								HX_STACK_LINE(795)
								start->prev = obj;
							}
							HX_STACK_LINE(797)
							obj;
						}
						HX_STACK_LINE(799)
						::zpp_nape::geom::ZPP_CutVert prepath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(prepath,"prepath");
						struct _Function_6_1{
							inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_GeomVert &start){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",800);
								{
									HX_STACK_LINE(800)
									::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(800)
									{
										HX_STACK_LINE(800)
										if (((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool == null()))){
											HX_STACK_LINE(800)
											ret = ::zpp_nape::geom::ZPP_CutVert_obj::__new();
										}
										else{
											HX_STACK_LINE(800)
											ret = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
											HX_STACK_LINE(800)
											::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
											HX_STACK_LINE(800)
											ret->next = null();
										}
										HX_STACK_LINE(800)
										Dynamic();
									}
									HX_STACK_LINE(800)
									ret->vert = start;
									HX_STACK_LINE(800)
									ret->parent = ret;
									HX_STACK_LINE(800)
									ret->rank = (int)0;
									HX_STACK_LINE(800)
									ret->used = false;
									HX_STACK_LINE(800)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(800)
						::zpp_nape::geom::ZPP_Cutter_obj::paths->add(_Function_6_1::Block(start));
						HX_STACK_LINE(801)
						::zpp_nape::geom::ZPP_CutVert postpath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(postpath,"postpath");
						struct _Function_6_2{
							inline static ::zpp_nape::geom::ZPP_CutInt Block( ::zpp_nape::geom::ZPP_GeomVert &endof,::zpp_nape::geom::ZPP_CutVert &postpath,::zpp_nape::geom::ZPP_CutVert &prepath,Float &s,::zpp_nape::geom::ZPP_GeomVert &start){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",802);
								{
									HX_STACK_LINE(802)
									bool vertex = false;		HX_STACK_VAR(vertex,"vertex");
									HX_STACK_LINE(802)
									::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(802)
									{
										HX_STACK_LINE(802)
										if (((::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool == null()))){
											HX_STACK_LINE(802)
											ret = ::zpp_nape::geom::ZPP_CutInt_obj::__new();
										}
										else{
											HX_STACK_LINE(802)
											ret = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
											HX_STACK_LINE(802)
											::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
											HX_STACK_LINE(802)
											ret->next = null();
										}
										HX_STACK_LINE(802)
										Dynamic();
									}
									HX_STACK_LINE(802)
									ret->virtualint = true;
									HX_STACK_LINE(802)
									ret->end = endof;
									HX_STACK_LINE(802)
									ret->start = start;
									HX_STACK_LINE(802)
									ret->path0 = prepath;
									HX_STACK_LINE(802)
									ret->path1 = postpath;
									HX_STACK_LINE(802)
									ret->time = s;
									HX_STACK_LINE(802)
									ret->vertex = vertex;
									HX_STACK_LINE(802)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(802)
						::zpp_nape::geom::ZPP_Cutter_obj::ints->add(_Function_6_2::Block(endof,postpath,prepath,s,start));
					}
					else{
						HX_STACK_LINE(805)
						Float t = ((((dy * pax) - (dx * pay))) * denom);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(806)
						Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
						HX_STACK_LINE(807)
						Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
						HX_STACK_LINE(808)
						{
							HX_STACK_LINE(809)
							qx = i->posx;
							HX_STACK_LINE(810)
							qy = i->posy;
							HX_STACK_LINE(819)
							{
							}
						}
						HX_STACK_LINE(828)
						{
							HX_STACK_LINE(829)
							Float t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(838)
							hx::AddEq(qx,(ux * t1));
							HX_STACK_LINE(839)
							hx::AddEq(qy,(uy * t1));
						}
						HX_STACK_LINE(841)
						{
							struct _Function_7_1{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &qx,Float &qy){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",842);
									{
										HX_STACK_LINE(842)
										::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(842)
										{
											HX_STACK_LINE(842)
											if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
												HX_STACK_LINE(842)
												ret = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
											}
											else{
												HX_STACK_LINE(842)
												ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
												HX_STACK_LINE(842)
												::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
												HX_STACK_LINE(842)
												ret->next = null();
											}
											HX_STACK_LINE(842)
											ret->forced = false;
										}
										HX_STACK_LINE(842)
										{
											HX_STACK_LINE(842)
											ret->x = qx;
											HX_STACK_LINE(842)
											ret->y = qy;
											HX_STACK_LINE(842)
											{
											}
										}
										HX_STACK_LINE(842)
										return ret;
									}
									return null();
								}
							};
							HX_STACK_LINE(842)
							::zpp_nape::geom::ZPP_GeomVert obj = _Function_7_1::Block(qx,qy);		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(843)
							if (((start == null()))){
								HX_STACK_LINE(843)
								start = obj->prev = obj->next = obj;
							}
							else{
								HX_STACK_LINE(845)
								obj->next = start;
								HX_STACK_LINE(846)
								obj->prev = start->prev;
								HX_STACK_LINE(847)
								start->prev->next = obj;
								HX_STACK_LINE(848)
								start->prev = obj;
							}
							HX_STACK_LINE(850)
							obj;
						}
						HX_STACK_LINE(852)
						::zpp_nape::geom::ZPP_GeomVert endof = start->prev;		HX_STACK_VAR(endof,"endof");
						HX_STACK_LINE(853)
						start = null();
						HX_STACK_LINE(854)
						{
							struct _Function_7_1{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &qx,Float &qy){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",855);
									{
										HX_STACK_LINE(855)
										::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(855)
										{
											HX_STACK_LINE(855)
											if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
												HX_STACK_LINE(855)
												ret = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
											}
											else{
												HX_STACK_LINE(855)
												ret = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
												HX_STACK_LINE(855)
												::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
												HX_STACK_LINE(855)
												ret->next = null();
											}
											HX_STACK_LINE(855)
											ret->forced = false;
										}
										HX_STACK_LINE(855)
										{
											HX_STACK_LINE(855)
											ret->x = qx;
											HX_STACK_LINE(855)
											ret->y = qy;
											HX_STACK_LINE(855)
											{
											}
										}
										HX_STACK_LINE(855)
										return ret;
									}
									return null();
								}
							};
							HX_STACK_LINE(855)
							::zpp_nape::geom::ZPP_GeomVert obj = _Function_7_1::Block(qx,qy);		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(856)
							if (((start == null()))){
								HX_STACK_LINE(856)
								start = obj->prev = obj->next = obj;
							}
							else{
								HX_STACK_LINE(858)
								obj->next = start;
								HX_STACK_LINE(859)
								obj->prev = start->prev;
								HX_STACK_LINE(860)
								start->prev->next = obj;
								HX_STACK_LINE(861)
								start->prev = obj;
							}
							HX_STACK_LINE(863)
							obj;
						}
						HX_STACK_LINE(865)
						{
							HX_STACK_LINE(866)
							::zpp_nape::geom::ZPP_GeomVert obj = pj;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(867)
							if (((start == null()))){
								HX_STACK_LINE(867)
								start = obj->prev = obj->next = obj;
							}
							else{
								HX_STACK_LINE(869)
								obj->next = start;
								HX_STACK_LINE(870)
								obj->prev = start->prev;
								HX_STACK_LINE(871)
								start->prev->next = obj;
								HX_STACK_LINE(872)
								start->prev = obj;
							}
							HX_STACK_LINE(874)
							obj;
						}
						HX_STACK_LINE(876)
						::zpp_nape::geom::ZPP_CutVert prepath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(prepath,"prepath");
						struct _Function_6_1{
							inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_GeomVert &start){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",877);
								{
									HX_STACK_LINE(877)
									::zpp_nape::geom::ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(877)
									{
										HX_STACK_LINE(877)
										if (((::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool == null()))){
											HX_STACK_LINE(877)
											ret = ::zpp_nape::geom::ZPP_CutVert_obj::__new();
										}
										else{
											HX_STACK_LINE(877)
											ret = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
											HX_STACK_LINE(877)
											::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = ret->next;
											HX_STACK_LINE(877)
											ret->next = null();
										}
										HX_STACK_LINE(877)
										Dynamic();
									}
									HX_STACK_LINE(877)
									ret->vert = start;
									HX_STACK_LINE(877)
									ret->parent = ret;
									HX_STACK_LINE(877)
									ret->rank = (int)0;
									HX_STACK_LINE(877)
									ret->used = false;
									HX_STACK_LINE(877)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(877)
						::zpp_nape::geom::ZPP_Cutter_obj::paths->add(_Function_6_1::Block(start));
						HX_STACK_LINE(878)
						::zpp_nape::geom::ZPP_CutVert postpath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(postpath,"postpath");
						struct _Function_6_2{
							inline static ::zpp_nape::geom::ZPP_CutInt Block( ::zpp_nape::geom::ZPP_GeomVert &endof,::zpp_nape::geom::ZPP_CutVert &postpath,::zpp_nape::geom::ZPP_CutVert &prepath,Float &s,::zpp_nape::geom::ZPP_GeomVert &start){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",879);
								{
									HX_STACK_LINE(879)
									bool vertex = false;		HX_STACK_VAR(vertex,"vertex");
									HX_STACK_LINE(879)
									::zpp_nape::geom::ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(879)
									{
										HX_STACK_LINE(879)
										if (((::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool == null()))){
											HX_STACK_LINE(879)
											ret = ::zpp_nape::geom::ZPP_CutInt_obj::__new();
										}
										else{
											HX_STACK_LINE(879)
											ret = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
											HX_STACK_LINE(879)
											::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = ret->next;
											HX_STACK_LINE(879)
											ret->next = null();
										}
										HX_STACK_LINE(879)
										Dynamic();
									}
									HX_STACK_LINE(879)
									ret->virtualint = false;
									HX_STACK_LINE(879)
									ret->end = endof;
									HX_STACK_LINE(879)
									ret->start = start;
									HX_STACK_LINE(879)
									ret->path0 = prepath;
									HX_STACK_LINE(879)
									ret->path1 = postpath;
									HX_STACK_LINE(879)
									ret->time = s;
									HX_STACK_LINE(879)
									ret->vertex = vertex;
									HX_STACK_LINE(879)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(879)
						::zpp_nape::geom::ZPP_Cutter_obj::ints->add(_Function_6_2::Block(endof,postpath,prepath,s,start));
					}
				}
			}
		}
		HX_STACK_LINE(883)
		i = i->next;
	}
while(((i != verts)));
	HX_STACK_LINE(886)
	::zpp_nape::geom::ZPP_GeomVert endof = start->prev;		HX_STACK_VAR(endof,"endof");
	HX_STACK_LINE(887)
	{
		HX_STACK_LINE(888)
		endof->next->prev = origin->prev;
		HX_STACK_LINE(889)
		origin->prev->next = endof->next;
		HX_STACK_LINE(890)
		endof->next = origin;
		HX_STACK_LINE(891)
		origin->prev = endof;
	}
	HX_STACK_LINE(893)
	::zpp_nape::geom::ZPP_CutVert lastpath = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head->elt;		HX_STACK_VAR(lastpath,"lastpath");
	HX_STACK_LINE(894)
	{
		struct _Function_2_1{
			inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &firstpath){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",897);
				{
					HX_STACK_LINE(898)
					::zpp_nape::geom::ZPP_CutVert obj = firstpath;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(899)
					::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(900)
					while(((obj != obj->parent))){
						HX_STACK_LINE(901)
						::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(902)
						obj->parent = stack;
						HX_STACK_LINE(903)
						stack = obj;
						HX_STACK_LINE(904)
						obj = nxt;
					}
					HX_STACK_LINE(906)
					while(((stack != null()))){
						HX_STACK_LINE(907)
						::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(908)
						stack->parent = obj;
						HX_STACK_LINE(909)
						stack = nxt;
					}
					HX_STACK_LINE(911)
					return obj;
				}
				return null();
			}
		};
		HX_STACK_LINE(895)
		::zpp_nape::geom::ZPP_CutVert xr = (  (((firstpath == firstpath->parent))) ? ::zpp_nape::geom::ZPP_CutVert(firstpath) : ::zpp_nape::geom::ZPP_CutVert(_Function_2_1::Block(firstpath)) );		HX_STACK_VAR(xr,"xr");
		struct _Function_2_2{
			inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &lastpath){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",916);
				{
					HX_STACK_LINE(917)
					::zpp_nape::geom::ZPP_CutVert obj = lastpath;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(918)
					::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(919)
					while(((obj != obj->parent))){
						HX_STACK_LINE(920)
						::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(921)
						obj->parent = stack;
						HX_STACK_LINE(922)
						stack = obj;
						HX_STACK_LINE(923)
						obj = nxt;
					}
					HX_STACK_LINE(925)
					while(((stack != null()))){
						HX_STACK_LINE(926)
						::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(927)
						stack->parent = obj;
						HX_STACK_LINE(928)
						stack = nxt;
					}
					HX_STACK_LINE(930)
					return obj;
				}
				return null();
			}
		};
		HX_STACK_LINE(914)
		::zpp_nape::geom::ZPP_CutVert yr = (  (((lastpath == lastpath->parent))) ? ::zpp_nape::geom::ZPP_CutVert(lastpath) : ::zpp_nape::geom::ZPP_CutVert(_Function_2_2::Block(lastpath)) );		HX_STACK_VAR(yr,"yr");
		HX_STACK_LINE(933)
		if (((xr != yr))){
			HX_STACK_LINE(933)
			if (((xr->rank < yr->rank))){
				HX_STACK_LINE(934)
				xr->parent = yr;
			}
			else{
				HX_STACK_LINE(935)
				if (((xr->rank > yr->rank))){
					HX_STACK_LINE(935)
					yr->parent = xr;
				}
				else{
					HX_STACK_LINE(937)
					yr->parent = xr;
					HX_STACK_LINE(938)
					(xr->rank)++;
				}
			}
		}
	}
	HX_STACK_LINE(950)
	{
		HX_STACK_LINE(951)
		::zpp_nape::util::ZNPList_ZPP_CutInt xxlist = ::zpp_nape::geom::ZPP_Cutter_obj::ints;		HX_STACK_VAR(xxlist,"xxlist");
		HX_STACK_LINE(952)
		if (((bool(!(((xxlist->head == null())))) && bool((xxlist->head->next != null()))))){
			HX_STACK_LINE(953)
			::zpp_nape::util::ZNPNode_ZPP_CutInt head = xxlist->head;		HX_STACK_VAR(head,"head");
			HX_STACK_LINE(954)
			::zpp_nape::util::ZNPNode_ZPP_CutInt tail = null();		HX_STACK_VAR(tail,"tail");
			HX_STACK_LINE(955)
			::zpp_nape::util::ZNPNode_ZPP_CutInt left = null();		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(956)
			::zpp_nape::util::ZNPNode_ZPP_CutInt right = null();		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(957)
			::zpp_nape::util::ZNPNode_ZPP_CutInt nxt = null();		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(958)
			int listSize = (int)1;		HX_STACK_VAR(listSize,"listSize");
			HX_STACK_LINE(959)
			int numMerges;		HX_STACK_VAR(numMerges,"numMerges");
			int leftSize;		HX_STACK_VAR(leftSize,"leftSize");
			int rightSize;		HX_STACK_VAR(rightSize,"rightSize");
			HX_STACK_LINE(960)
			do{
				HX_STACK_LINE(961)
				numMerges = (int)0;
				HX_STACK_LINE(962)
				left = head;
				HX_STACK_LINE(963)
				tail = head = null();
				HX_STACK_LINE(964)
				while(((left != null()))){
					HX_STACK_LINE(965)
					(numMerges)++;
					HX_STACK_LINE(966)
					right = left;
					HX_STACK_LINE(967)
					leftSize = (int)0;
					HX_STACK_LINE(968)
					rightSize = listSize;
					HX_STACK_LINE(969)
					while(((bool((right != null())) && bool((leftSize < listSize))))){
						HX_STACK_LINE(970)
						(leftSize)++;
						HX_STACK_LINE(971)
						right = right->next;
					}
					HX_STACK_LINE(973)
					while(((bool((leftSize > (int)0)) || bool((bool((rightSize > (int)0)) && bool((right != null()))))))){
						HX_STACK_LINE(974)
						if (((leftSize == (int)0))){
							HX_STACK_LINE(975)
							nxt = right;
							HX_STACK_LINE(976)
							right = right->next;
							HX_STACK_LINE(977)
							(rightSize)--;
						}
						else{
							HX_STACK_LINE(979)
							if (((bool((rightSize == (int)0)) || bool((right == null()))))){
								HX_STACK_LINE(980)
								nxt = left;
								HX_STACK_LINE(981)
								left = left->next;
								HX_STACK_LINE(982)
								(leftSize)--;
							}
							else{
								HX_STACK_LINE(984)
								if (((left->elt->time < right->elt->time))){
									HX_STACK_LINE(985)
									nxt = left;
									HX_STACK_LINE(986)
									left = left->next;
									HX_STACK_LINE(987)
									(leftSize)--;
								}
								else{
									HX_STACK_LINE(990)
									nxt = right;
									HX_STACK_LINE(991)
									right = right->next;
									HX_STACK_LINE(992)
									(rightSize)--;
								}
							}
						}
						HX_STACK_LINE(994)
						if (((tail != null()))){
							HX_STACK_LINE(994)
							tail->next = nxt;
						}
						else{
							HX_STACK_LINE(995)
							head = nxt;
						}
						HX_STACK_LINE(996)
						tail = nxt;
					}
					HX_STACK_LINE(998)
					left = right;
				}
				HX_STACK_LINE(1000)
				tail->next = null();
				HX_STACK_LINE(1001)
				hx::ShlEq(listSize,(int)1);
			}
while(((numMerges > (int)1)));
			HX_STACK_LINE(1004)
			{
				HX_STACK_LINE(1004)
				xxlist->head = head;
				HX_STACK_LINE(1004)
				xxlist->modified = true;
				HX_STACK_LINE(1004)
				xxlist->pushmod = true;
			}
		}
	}
	HX_STACK_LINE(1007)
	while((!(((::zpp_nape::geom::ZPP_Cutter_obj::ints->head == null()))))){
		HX_STACK_LINE(1008)
		::zpp_nape::geom::ZPP_CutInt i1 = ::zpp_nape::geom::ZPP_Cutter_obj::ints->pop_unsafe();		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(1009)
		::zpp_nape::geom::ZPP_CutInt j = ::zpp_nape::geom::ZPP_Cutter_obj::ints->pop_unsafe();		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1010)
		if (((bool(!(i1->virtualint)) && bool(!(j->virtualint))))){
			HX_STACK_LINE(1011)
			{
				HX_STACK_LINE(1012)
				i1->end->next->prev = j->start->prev;
				HX_STACK_LINE(1013)
				j->start->prev->next = i1->end->next;
				HX_STACK_LINE(1014)
				i1->end->next = j->start;
				HX_STACK_LINE(1015)
				j->start->prev = i1->end;
			}
			HX_STACK_LINE(1017)
			{
				HX_STACK_LINE(1018)
				j->end->next->prev = i1->start->prev;
				HX_STACK_LINE(1019)
				i1->start->prev->next = j->end->next;
				HX_STACK_LINE(1020)
				j->end->next = i1->start;
				HX_STACK_LINE(1021)
				i1->start->prev = j->end;
			}
			HX_STACK_LINE(1023)
			{
				struct _Function_4_1{
					inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutInt &i1){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1026);
						{
							HX_STACK_LINE(1027)
							::zpp_nape::geom::ZPP_CutVert obj = i1->path0;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(1028)
							::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(1029)
							while(((obj != obj->parent))){
								HX_STACK_LINE(1030)
								::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1031)
								obj->parent = stack;
								HX_STACK_LINE(1032)
								stack = obj;
								HX_STACK_LINE(1033)
								obj = nxt;
							}
							HX_STACK_LINE(1035)
							while(((stack != null()))){
								HX_STACK_LINE(1036)
								::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1037)
								stack->parent = obj;
								HX_STACK_LINE(1038)
								stack = nxt;
							}
							HX_STACK_LINE(1040)
							return obj;
						}
						return null();
					}
				};
				HX_STACK_LINE(1024)
				::zpp_nape::geom::ZPP_CutVert xr = (  (((i1->path0 == i1->path0->parent))) ? ::zpp_nape::geom::ZPP_CutVert(i1->path0) : ::zpp_nape::geom::ZPP_CutVert(_Function_4_1::Block(i1)) );		HX_STACK_VAR(xr,"xr");
				struct _Function_4_2{
					inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutInt &j){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1045);
						{
							HX_STACK_LINE(1046)
							::zpp_nape::geom::ZPP_CutVert obj = j->path1;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(1047)
							::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(1048)
							while(((obj != obj->parent))){
								HX_STACK_LINE(1049)
								::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1050)
								obj->parent = stack;
								HX_STACK_LINE(1051)
								stack = obj;
								HX_STACK_LINE(1052)
								obj = nxt;
							}
							HX_STACK_LINE(1054)
							while(((stack != null()))){
								HX_STACK_LINE(1055)
								::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1056)
								stack->parent = obj;
								HX_STACK_LINE(1057)
								stack = nxt;
							}
							HX_STACK_LINE(1059)
							return obj;
						}
						return null();
					}
				};
				HX_STACK_LINE(1043)
				::zpp_nape::geom::ZPP_CutVert yr = (  (((j->path1 == j->path1->parent))) ? ::zpp_nape::geom::ZPP_CutVert(j->path1) : ::zpp_nape::geom::ZPP_CutVert(_Function_4_2::Block(j)) );		HX_STACK_VAR(yr,"yr");
				HX_STACK_LINE(1062)
				if (((xr != yr))){
					HX_STACK_LINE(1062)
					if (((xr->rank < yr->rank))){
						HX_STACK_LINE(1063)
						xr->parent = yr;
					}
					else{
						HX_STACK_LINE(1064)
						if (((xr->rank > yr->rank))){
							HX_STACK_LINE(1064)
							yr->parent = xr;
						}
						else{
							HX_STACK_LINE(1066)
							yr->parent = xr;
							HX_STACK_LINE(1067)
							(xr->rank)++;
						}
					}
				}
			}
			HX_STACK_LINE(1071)
			{
				struct _Function_4_1{
					inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutInt &i1){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1074);
						{
							HX_STACK_LINE(1075)
							::zpp_nape::geom::ZPP_CutVert obj = i1->path1;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(1076)
							::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(1077)
							while(((obj != obj->parent))){
								HX_STACK_LINE(1078)
								::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1079)
								obj->parent = stack;
								HX_STACK_LINE(1080)
								stack = obj;
								HX_STACK_LINE(1081)
								obj = nxt;
							}
							HX_STACK_LINE(1083)
							while(((stack != null()))){
								HX_STACK_LINE(1084)
								::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1085)
								stack->parent = obj;
								HX_STACK_LINE(1086)
								stack = nxt;
							}
							HX_STACK_LINE(1088)
							return obj;
						}
						return null();
					}
				};
				HX_STACK_LINE(1072)
				::zpp_nape::geom::ZPP_CutVert xr = (  (((i1->path1 == i1->path1->parent))) ? ::zpp_nape::geom::ZPP_CutVert(i1->path1) : ::zpp_nape::geom::ZPP_CutVert(_Function_4_1::Block(i1)) );		HX_STACK_VAR(xr,"xr");
				struct _Function_4_2{
					inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutInt &j){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1093);
						{
							HX_STACK_LINE(1094)
							::zpp_nape::geom::ZPP_CutVert obj = j->path0;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(1095)
							::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(1096)
							while(((obj != obj->parent))){
								HX_STACK_LINE(1097)
								::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1098)
								obj->parent = stack;
								HX_STACK_LINE(1099)
								stack = obj;
								HX_STACK_LINE(1100)
								obj = nxt;
							}
							HX_STACK_LINE(1102)
							while(((stack != null()))){
								HX_STACK_LINE(1103)
								::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1104)
								stack->parent = obj;
								HX_STACK_LINE(1105)
								stack = nxt;
							}
							HX_STACK_LINE(1107)
							return obj;
						}
						return null();
					}
				};
				HX_STACK_LINE(1091)
				::zpp_nape::geom::ZPP_CutVert yr = (  (((j->path0 == j->path0->parent))) ? ::zpp_nape::geom::ZPP_CutVert(j->path0) : ::zpp_nape::geom::ZPP_CutVert(_Function_4_2::Block(j)) );		HX_STACK_VAR(yr,"yr");
				HX_STACK_LINE(1110)
				if (((xr != yr))){
					HX_STACK_LINE(1110)
					if (((xr->rank < yr->rank))){
						HX_STACK_LINE(1111)
						xr->parent = yr;
					}
					else{
						HX_STACK_LINE(1112)
						if (((xr->rank > yr->rank))){
							HX_STACK_LINE(1112)
							yr->parent = xr;
						}
						else{
							HX_STACK_LINE(1114)
							yr->parent = xr;
							HX_STACK_LINE(1115)
							(xr->rank)++;
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1120)
			if (((bool(i1->virtualint) && bool(!(j->virtualint))))){
				struct _Function_4_1{
					inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_CutInt &j){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1130);
						{
							HX_STACK_LINE(1131)
							j->end->next = j->end->prev = null();
							HX_STACK_LINE(1132)
							{
								HX_STACK_LINE(1133)
								::zpp_nape::geom::ZPP_GeomVert o = j->end;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1142)
								{
									HX_STACK_LINE(1142)
									if (((o->wrap != null()))){
										HX_STACK_LINE(1142)
										o->wrap->zpp_inner->_inuse = false;
										HX_STACK_LINE(1142)
										{
											HX_STACK_LINE(1142)
											::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1142)
											if (((bool((_this != null())) && bool(_this->zpp_disp)))){
												HX_STACK_LINE(1142)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1142)
											{
												HX_STACK_LINE(1142)
												::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1142)
												if ((_this1->_immutable)){
													HX_STACK_LINE(1142)
													hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
												}
												HX_STACK_LINE(1142)
												if (((_this1->_isimmutable != null()))){
													HX_STACK_LINE(1142)
													_this1->_isimmutable();
												}
											}
											HX_STACK_LINE(1142)
											if ((_this->zpp_inner->_inuse)){
												HX_STACK_LINE(1142)
												hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
											}
											HX_STACK_LINE(1142)
											::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(1142)
											_this->zpp_inner->outer = null();
											HX_STACK_LINE(1142)
											_this->zpp_inner = null();
											HX_STACK_LINE(1142)
											{
												HX_STACK_LINE(1142)
												::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1142)
												o1->zpp_pool = null();
												HX_STACK_LINE(1142)
												if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
													HX_STACK_LINE(1142)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
												}
												else{
													HX_STACK_LINE(1142)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
												}
												HX_STACK_LINE(1142)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
												HX_STACK_LINE(1142)
												o1->zpp_disp = true;
											}
											HX_STACK_LINE(1142)
											{
												HX_STACK_LINE(1142)
												::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1142)
												{
													HX_STACK_LINE(1142)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1142)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1142)
														o1->outer = null();
													}
													HX_STACK_LINE(1142)
													o1->_isimmutable = null();
													HX_STACK_LINE(1142)
													o1->_validate = null();
													HX_STACK_LINE(1142)
													o1->_invalidate = null();
												}
												HX_STACK_LINE(1142)
												o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1142)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
											}
										}
										HX_STACK_LINE(1142)
										o->wrap = null();
									}
									HX_STACK_LINE(1142)
									o->prev = o->next = null();
								}
								HX_STACK_LINE(1143)
								o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
								HX_STACK_LINE(1144)
								::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1149)
							return null();
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_CutInt &j){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1151);
						{
							HX_STACK_LINE(1152)
							::zpp_nape::geom::ZPP_GeomVert retnodes = j->end->prev;		HX_STACK_VAR(retnodes,"retnodes");
							HX_STACK_LINE(1153)
							j->end->prev->next = j->end->next;
							HX_STACK_LINE(1154)
							j->end->next->prev = j->end->prev;
							HX_STACK_LINE(1155)
							j->end->next = j->end->prev = null();
							HX_STACK_LINE(1156)
							{
								HX_STACK_LINE(1157)
								::zpp_nape::geom::ZPP_GeomVert o = j->end;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1166)
								{
									HX_STACK_LINE(1166)
									if (((o->wrap != null()))){
										HX_STACK_LINE(1166)
										o->wrap->zpp_inner->_inuse = false;
										HX_STACK_LINE(1166)
										{
											HX_STACK_LINE(1166)
											::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1166)
											if (((bool((_this != null())) && bool(_this->zpp_disp)))){
												HX_STACK_LINE(1166)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1166)
											{
												HX_STACK_LINE(1166)
												::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1166)
												if ((_this1->_immutable)){
													HX_STACK_LINE(1166)
													hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
												}
												HX_STACK_LINE(1166)
												if (((_this1->_isimmutable != null()))){
													HX_STACK_LINE(1166)
													_this1->_isimmutable();
												}
											}
											HX_STACK_LINE(1166)
											if ((_this->zpp_inner->_inuse)){
												HX_STACK_LINE(1166)
												hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
											}
											HX_STACK_LINE(1166)
											::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(1166)
											_this->zpp_inner->outer = null();
											HX_STACK_LINE(1166)
											_this->zpp_inner = null();
											HX_STACK_LINE(1166)
											{
												HX_STACK_LINE(1166)
												::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1166)
												o1->zpp_pool = null();
												HX_STACK_LINE(1166)
												if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
													HX_STACK_LINE(1166)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
												}
												else{
													HX_STACK_LINE(1166)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
												}
												HX_STACK_LINE(1166)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
												HX_STACK_LINE(1166)
												o1->zpp_disp = true;
											}
											HX_STACK_LINE(1166)
											{
												HX_STACK_LINE(1166)
												::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1166)
												{
													HX_STACK_LINE(1166)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1166)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1166)
														o1->outer = null();
													}
													HX_STACK_LINE(1166)
													o1->_isimmutable = null();
													HX_STACK_LINE(1166)
													o1->_validate = null();
													HX_STACK_LINE(1166)
													o1->_invalidate = null();
												}
												HX_STACK_LINE(1166)
												o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1166)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
											}
										}
										HX_STACK_LINE(1166)
										o->wrap = null();
									}
									HX_STACK_LINE(1166)
									o->prev = o->next = null();
								}
								HX_STACK_LINE(1167)
								o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
								HX_STACK_LINE(1168)
								::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1173)
							j->end = null();
							HX_STACK_LINE(1174)
							return retnodes;
						}
						return null();
					}
				};
				HX_STACK_LINE(1121)
				j->end = (  (((bool((j->end != null())) && bool((j->end->prev == j->end))))) ? ::zpp_nape::geom::ZPP_GeomVert(_Function_4_1::Block(j)) : ::zpp_nape::geom::ZPP_GeomVert(_Function_4_2::Block(j)) );
				HX_STACK_LINE(1177)
				if ((!(j->vertex))){
					HX_STACK_LINE(1177)
					if (((j->end != j->path0->vert))){
						HX_STACK_LINE(1179)
						j->start->x = j->end->x;
						HX_STACK_LINE(1180)
						j->start->y = j->end->y;
						struct _Function_6_1{
							inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_CutInt &j){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1190);
								{
									HX_STACK_LINE(1191)
									j->end->next = j->end->prev = null();
									HX_STACK_LINE(1192)
									{
										HX_STACK_LINE(1193)
										::zpp_nape::geom::ZPP_GeomVert o = j->end;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1202)
										{
											HX_STACK_LINE(1202)
											if (((o->wrap != null()))){
												HX_STACK_LINE(1202)
												o->wrap->zpp_inner->_inuse = false;
												HX_STACK_LINE(1202)
												{
													HX_STACK_LINE(1202)
													::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1202)
													if (((bool((_this != null())) && bool(_this->zpp_disp)))){
														HX_STACK_LINE(1202)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1202)
													{
														HX_STACK_LINE(1202)
														::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1202)
														if ((_this1->_immutable)){
															HX_STACK_LINE(1202)
															hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
														}
														HX_STACK_LINE(1202)
														if (((_this1->_isimmutable != null()))){
															HX_STACK_LINE(1202)
															_this1->_isimmutable();
														}
													}
													HX_STACK_LINE(1202)
													if ((_this->zpp_inner->_inuse)){
														HX_STACK_LINE(1202)
														hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
													}
													HX_STACK_LINE(1202)
													::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
													HX_STACK_LINE(1202)
													_this->zpp_inner->outer = null();
													HX_STACK_LINE(1202)
													_this->zpp_inner = null();
													HX_STACK_LINE(1202)
													{
														HX_STACK_LINE(1202)
														::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
														HX_STACK_LINE(1202)
														o1->zpp_pool = null();
														HX_STACK_LINE(1202)
														if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
															HX_STACK_LINE(1202)
															::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
														}
														else{
															HX_STACK_LINE(1202)
															::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
														}
														HX_STACK_LINE(1202)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
														HX_STACK_LINE(1202)
														o1->zpp_disp = true;
													}
													HX_STACK_LINE(1202)
													{
														HX_STACK_LINE(1202)
														::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
														HX_STACK_LINE(1202)
														{
															HX_STACK_LINE(1202)
															if (((o1->outer != null()))){
																HX_STACK_LINE(1202)
																o1->outer->zpp_inner = null();
																HX_STACK_LINE(1202)
																o1->outer = null();
															}
															HX_STACK_LINE(1202)
															o1->_isimmutable = null();
															HX_STACK_LINE(1202)
															o1->_validate = null();
															HX_STACK_LINE(1202)
															o1->_invalidate = null();
														}
														HX_STACK_LINE(1202)
														o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
														HX_STACK_LINE(1202)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
													}
												}
												HX_STACK_LINE(1202)
												o->wrap = null();
											}
											HX_STACK_LINE(1202)
											o->prev = o->next = null();
										}
										HX_STACK_LINE(1203)
										o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
										HX_STACK_LINE(1204)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1209)
									return null();
								}
								return null();
							}
						};
						struct _Function_6_2{
							inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_CutInt &j){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1211);
								{
									HX_STACK_LINE(1212)
									::zpp_nape::geom::ZPP_GeomVert retnodes = j->end->prev;		HX_STACK_VAR(retnodes,"retnodes");
									HX_STACK_LINE(1213)
									j->end->prev->next = j->end->next;
									HX_STACK_LINE(1214)
									j->end->next->prev = j->end->prev;
									HX_STACK_LINE(1215)
									j->end->next = j->end->prev = null();
									HX_STACK_LINE(1216)
									{
										HX_STACK_LINE(1217)
										::zpp_nape::geom::ZPP_GeomVert o = j->end;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1226)
										{
											HX_STACK_LINE(1226)
											if (((o->wrap != null()))){
												HX_STACK_LINE(1226)
												o->wrap->zpp_inner->_inuse = false;
												HX_STACK_LINE(1226)
												{
													HX_STACK_LINE(1226)
													::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1226)
													if (((bool((_this != null())) && bool(_this->zpp_disp)))){
														HX_STACK_LINE(1226)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1226)
													{
														HX_STACK_LINE(1226)
														::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1226)
														if ((_this1->_immutable)){
															HX_STACK_LINE(1226)
															hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
														}
														HX_STACK_LINE(1226)
														if (((_this1->_isimmutable != null()))){
															HX_STACK_LINE(1226)
															_this1->_isimmutable();
														}
													}
													HX_STACK_LINE(1226)
													if ((_this->zpp_inner->_inuse)){
														HX_STACK_LINE(1226)
														hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
													}
													HX_STACK_LINE(1226)
													::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
													HX_STACK_LINE(1226)
													_this->zpp_inner->outer = null();
													HX_STACK_LINE(1226)
													_this->zpp_inner = null();
													HX_STACK_LINE(1226)
													{
														HX_STACK_LINE(1226)
														::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
														HX_STACK_LINE(1226)
														o1->zpp_pool = null();
														HX_STACK_LINE(1226)
														if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
															HX_STACK_LINE(1226)
															::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
														}
														else{
															HX_STACK_LINE(1226)
															::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
														}
														HX_STACK_LINE(1226)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
														HX_STACK_LINE(1226)
														o1->zpp_disp = true;
													}
													HX_STACK_LINE(1226)
													{
														HX_STACK_LINE(1226)
														::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
														HX_STACK_LINE(1226)
														{
															HX_STACK_LINE(1226)
															if (((o1->outer != null()))){
																HX_STACK_LINE(1226)
																o1->outer->zpp_inner = null();
																HX_STACK_LINE(1226)
																o1->outer = null();
															}
															HX_STACK_LINE(1226)
															o1->_isimmutable = null();
															HX_STACK_LINE(1226)
															o1->_validate = null();
															HX_STACK_LINE(1226)
															o1->_invalidate = null();
														}
														HX_STACK_LINE(1226)
														o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
														HX_STACK_LINE(1226)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
													}
												}
												HX_STACK_LINE(1226)
												o->wrap = null();
											}
											HX_STACK_LINE(1226)
											o->prev = o->next = null();
										}
										HX_STACK_LINE(1227)
										o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
										HX_STACK_LINE(1228)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1233)
									j->end = null();
									HX_STACK_LINE(1234)
									return retnodes;
								}
								return null();
							}
						};
						HX_STACK_LINE(1181)
						j->end = (  (((bool((j->end != null())) && bool((j->end->prev == j->end))))) ? ::zpp_nape::geom::ZPP_GeomVert(_Function_6_1::Block(j)) : ::zpp_nape::geom::ZPP_GeomVert(_Function_6_2::Block(j)) );
					}
					else{
						HX_STACK_LINE(1239)
						::zpp_nape::geom::ZPP_GeomVert n = j->start->next;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(1240)
						j->start->x = n->x;
						HX_STACK_LINE(1241)
						j->start->y = n->y;
						HX_STACK_LINE(1242)
						if (((bool((n != null())) && bool((n->prev == n))))){
							HX_STACK_LINE(1252)
							n->next = n->prev = null();
							HX_STACK_LINE(1253)
							{
								HX_STACK_LINE(1254)
								::zpp_nape::geom::ZPP_GeomVert o = n;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1263)
								{
									HX_STACK_LINE(1263)
									if (((o->wrap != null()))){
										HX_STACK_LINE(1263)
										o->wrap->zpp_inner->_inuse = false;
										HX_STACK_LINE(1263)
										{
											HX_STACK_LINE(1263)
											::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1263)
											if (((bool((_this != null())) && bool(_this->zpp_disp)))){
												HX_STACK_LINE(1263)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1263)
											{
												HX_STACK_LINE(1263)
												::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1263)
												if ((_this1->_immutable)){
													HX_STACK_LINE(1263)
													hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
												}
												HX_STACK_LINE(1263)
												if (((_this1->_isimmutable != null()))){
													HX_STACK_LINE(1263)
													_this1->_isimmutable();
												}
											}
											HX_STACK_LINE(1263)
											if ((_this->zpp_inner->_inuse)){
												HX_STACK_LINE(1263)
												hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
											}
											HX_STACK_LINE(1263)
											::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(1263)
											_this->zpp_inner->outer = null();
											HX_STACK_LINE(1263)
											_this->zpp_inner = null();
											HX_STACK_LINE(1263)
											{
												HX_STACK_LINE(1263)
												::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1263)
												o1->zpp_pool = null();
												HX_STACK_LINE(1263)
												if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
													HX_STACK_LINE(1263)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
												}
												else{
													HX_STACK_LINE(1263)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
												}
												HX_STACK_LINE(1263)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
												HX_STACK_LINE(1263)
												o1->zpp_disp = true;
											}
											HX_STACK_LINE(1263)
											{
												HX_STACK_LINE(1263)
												::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1263)
												{
													HX_STACK_LINE(1263)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1263)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1263)
														o1->outer = null();
													}
													HX_STACK_LINE(1263)
													o1->_isimmutable = null();
													HX_STACK_LINE(1263)
													o1->_validate = null();
													HX_STACK_LINE(1263)
													o1->_invalidate = null();
												}
												HX_STACK_LINE(1263)
												o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1263)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
											}
										}
										HX_STACK_LINE(1263)
										o->wrap = null();
									}
									HX_STACK_LINE(1263)
									o->prev = o->next = null();
								}
								HX_STACK_LINE(1264)
								o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
								HX_STACK_LINE(1265)
								::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1270)
							n = null();
						}
						else{
							HX_STACK_LINE(1273)
							n->prev->next = n->next;
							HX_STACK_LINE(1274)
							n->next->prev = n->prev;
							HX_STACK_LINE(1275)
							n->next = n->prev = null();
							HX_STACK_LINE(1276)
							{
								HX_STACK_LINE(1277)
								::zpp_nape::geom::ZPP_GeomVert o = n;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1286)
								{
									HX_STACK_LINE(1286)
									if (((o->wrap != null()))){
										HX_STACK_LINE(1286)
										o->wrap->zpp_inner->_inuse = false;
										HX_STACK_LINE(1286)
										{
											HX_STACK_LINE(1286)
											::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1286)
											if (((bool((_this != null())) && bool(_this->zpp_disp)))){
												HX_STACK_LINE(1286)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1286)
											{
												HX_STACK_LINE(1286)
												::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1286)
												if ((_this1->_immutable)){
													HX_STACK_LINE(1286)
													hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
												}
												HX_STACK_LINE(1286)
												if (((_this1->_isimmutable != null()))){
													HX_STACK_LINE(1286)
													_this1->_isimmutable();
												}
											}
											HX_STACK_LINE(1286)
											if ((_this->zpp_inner->_inuse)){
												HX_STACK_LINE(1286)
												hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
											}
											HX_STACK_LINE(1286)
											::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
											HX_STACK_LINE(1286)
											_this->zpp_inner->outer = null();
											HX_STACK_LINE(1286)
											_this->zpp_inner = null();
											HX_STACK_LINE(1286)
											{
												HX_STACK_LINE(1286)
												::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1286)
												o1->zpp_pool = null();
												HX_STACK_LINE(1286)
												if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
													HX_STACK_LINE(1286)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
												}
												else{
													HX_STACK_LINE(1286)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
												}
												HX_STACK_LINE(1286)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
												HX_STACK_LINE(1286)
												o1->zpp_disp = true;
											}
											HX_STACK_LINE(1286)
											{
												HX_STACK_LINE(1286)
												::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1286)
												{
													HX_STACK_LINE(1286)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1286)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1286)
														o1->outer = null();
													}
													HX_STACK_LINE(1286)
													o1->_isimmutable = null();
													HX_STACK_LINE(1286)
													o1->_validate = null();
													HX_STACK_LINE(1286)
													o1->_invalidate = null();
												}
												HX_STACK_LINE(1286)
												o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1286)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
											}
										}
										HX_STACK_LINE(1286)
										o->wrap = null();
									}
									HX_STACK_LINE(1286)
									o->prev = o->next = null();
								}
								HX_STACK_LINE(1287)
								o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
								HX_STACK_LINE(1288)
								::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
							}
						}
					}
				}
				HX_STACK_LINE(1297)
				{
					HX_STACK_LINE(1298)
					j->end->next->prev = j->start->prev;
					HX_STACK_LINE(1299)
					j->start->prev->next = j->end->next;
					HX_STACK_LINE(1300)
					j->end->next = j->start;
					HX_STACK_LINE(1301)
					j->start->prev = j->end;
				}
				HX_STACK_LINE(1303)
				{
					struct _Function_5_1{
						inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutInt &j){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1306);
							{
								HX_STACK_LINE(1307)
								::zpp_nape::geom::ZPP_CutVert obj = j->path0;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(1308)
								::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
								HX_STACK_LINE(1309)
								while(((obj != obj->parent))){
									HX_STACK_LINE(1310)
									::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(1311)
									obj->parent = stack;
									HX_STACK_LINE(1312)
									stack = obj;
									HX_STACK_LINE(1313)
									obj = nxt;
								}
								HX_STACK_LINE(1315)
								while(((stack != null()))){
									HX_STACK_LINE(1316)
									::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(1317)
									stack->parent = obj;
									HX_STACK_LINE(1318)
									stack = nxt;
								}
								HX_STACK_LINE(1320)
								return obj;
							}
							return null();
						}
					};
					HX_STACK_LINE(1304)
					::zpp_nape::geom::ZPP_CutVert xr = (  (((j->path0 == j->path0->parent))) ? ::zpp_nape::geom::ZPP_CutVert(j->path0) : ::zpp_nape::geom::ZPP_CutVert(_Function_5_1::Block(j)) );		HX_STACK_VAR(xr,"xr");
					struct _Function_5_2{
						inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutInt &j){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1325);
							{
								HX_STACK_LINE(1326)
								::zpp_nape::geom::ZPP_CutVert obj = j->path1;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(1327)
								::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
								HX_STACK_LINE(1328)
								while(((obj != obj->parent))){
									HX_STACK_LINE(1329)
									::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(1330)
									obj->parent = stack;
									HX_STACK_LINE(1331)
									stack = obj;
									HX_STACK_LINE(1332)
									obj = nxt;
								}
								HX_STACK_LINE(1334)
								while(((stack != null()))){
									HX_STACK_LINE(1335)
									::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
									HX_STACK_LINE(1336)
									stack->parent = obj;
									HX_STACK_LINE(1337)
									stack = nxt;
								}
								HX_STACK_LINE(1339)
								return obj;
							}
							return null();
						}
					};
					HX_STACK_LINE(1323)
					::zpp_nape::geom::ZPP_CutVert yr = (  (((j->path1 == j->path1->parent))) ? ::zpp_nape::geom::ZPP_CutVert(j->path1) : ::zpp_nape::geom::ZPP_CutVert(_Function_5_2::Block(j)) );		HX_STACK_VAR(yr,"yr");
					HX_STACK_LINE(1342)
					if (((xr != yr))){
						HX_STACK_LINE(1342)
						if (((xr->rank < yr->rank))){
							HX_STACK_LINE(1343)
							xr->parent = yr;
						}
						else{
							HX_STACK_LINE(1344)
							if (((xr->rank > yr->rank))){
								HX_STACK_LINE(1344)
								yr->parent = xr;
							}
							else{
								HX_STACK_LINE(1346)
								yr->parent = xr;
								HX_STACK_LINE(1347)
								(xr->rank)++;
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1352)
				if (((bool(j->virtualint) && bool(!(i1->virtualint))))){
					struct _Function_5_1{
						inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_CutInt &i1){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1362);
							{
								HX_STACK_LINE(1363)
								i1->end->next = i1->end->prev = null();
								HX_STACK_LINE(1364)
								{
									HX_STACK_LINE(1365)
									::zpp_nape::geom::ZPP_GeomVert o = i1->end;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1374)
									{
										HX_STACK_LINE(1374)
										if (((o->wrap != null()))){
											HX_STACK_LINE(1374)
											o->wrap->zpp_inner->_inuse = false;
											HX_STACK_LINE(1374)
											{
												HX_STACK_LINE(1374)
												::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1374)
												if (((bool((_this != null())) && bool(_this->zpp_disp)))){
													HX_STACK_LINE(1374)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1374)
												{
													HX_STACK_LINE(1374)
													::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1374)
													if ((_this1->_immutable)){
														HX_STACK_LINE(1374)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(1374)
													if (((_this1->_isimmutable != null()))){
														HX_STACK_LINE(1374)
														_this1->_isimmutable();
													}
												}
												HX_STACK_LINE(1374)
												if ((_this->zpp_inner->_inuse)){
													HX_STACK_LINE(1374)
													hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
												}
												HX_STACK_LINE(1374)
												::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
												HX_STACK_LINE(1374)
												_this->zpp_inner->outer = null();
												HX_STACK_LINE(1374)
												_this->zpp_inner = null();
												HX_STACK_LINE(1374)
												{
													HX_STACK_LINE(1374)
													::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1374)
													o1->zpp_pool = null();
													HX_STACK_LINE(1374)
													if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
														HX_STACK_LINE(1374)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
													}
													else{
														HX_STACK_LINE(1374)
														::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
													}
													HX_STACK_LINE(1374)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
													HX_STACK_LINE(1374)
													o1->zpp_disp = true;
												}
												HX_STACK_LINE(1374)
												{
													HX_STACK_LINE(1374)
													::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1374)
													{
														HX_STACK_LINE(1374)
														if (((o1->outer != null()))){
															HX_STACK_LINE(1374)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1374)
															o1->outer = null();
														}
														HX_STACK_LINE(1374)
														o1->_isimmutable = null();
														HX_STACK_LINE(1374)
														o1->_validate = null();
														HX_STACK_LINE(1374)
														o1->_invalidate = null();
													}
													HX_STACK_LINE(1374)
													o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1374)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
												}
											}
											HX_STACK_LINE(1374)
											o->wrap = null();
										}
										HX_STACK_LINE(1374)
										o->prev = o->next = null();
									}
									HX_STACK_LINE(1375)
									o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(1376)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1381)
								return null();
							}
							return null();
						}
					};
					struct _Function_5_2{
						inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_CutInt &i1){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1383);
							{
								HX_STACK_LINE(1384)
								::zpp_nape::geom::ZPP_GeomVert retnodes = i1->end->prev;		HX_STACK_VAR(retnodes,"retnodes");
								HX_STACK_LINE(1385)
								i1->end->prev->next = i1->end->next;
								HX_STACK_LINE(1386)
								i1->end->next->prev = i1->end->prev;
								HX_STACK_LINE(1387)
								i1->end->next = i1->end->prev = null();
								HX_STACK_LINE(1388)
								{
									HX_STACK_LINE(1389)
									::zpp_nape::geom::ZPP_GeomVert o = i1->end;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1398)
									{
										HX_STACK_LINE(1398)
										if (((o->wrap != null()))){
											HX_STACK_LINE(1398)
											o->wrap->zpp_inner->_inuse = false;
											HX_STACK_LINE(1398)
											{
												HX_STACK_LINE(1398)
												::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1398)
												if (((bool((_this != null())) && bool(_this->zpp_disp)))){
													HX_STACK_LINE(1398)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1398)
												{
													HX_STACK_LINE(1398)
													::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1398)
													if ((_this1->_immutable)){
														HX_STACK_LINE(1398)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(1398)
													if (((_this1->_isimmutable != null()))){
														HX_STACK_LINE(1398)
														_this1->_isimmutable();
													}
												}
												HX_STACK_LINE(1398)
												if ((_this->zpp_inner->_inuse)){
													HX_STACK_LINE(1398)
													hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
												}
												HX_STACK_LINE(1398)
												::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
												HX_STACK_LINE(1398)
												_this->zpp_inner->outer = null();
												HX_STACK_LINE(1398)
												_this->zpp_inner = null();
												HX_STACK_LINE(1398)
												{
													HX_STACK_LINE(1398)
													::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1398)
													o1->zpp_pool = null();
													HX_STACK_LINE(1398)
													if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
														HX_STACK_LINE(1398)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
													}
													else{
														HX_STACK_LINE(1398)
														::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
													}
													HX_STACK_LINE(1398)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
													HX_STACK_LINE(1398)
													o1->zpp_disp = true;
												}
												HX_STACK_LINE(1398)
												{
													HX_STACK_LINE(1398)
													::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1398)
													{
														HX_STACK_LINE(1398)
														if (((o1->outer != null()))){
															HX_STACK_LINE(1398)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1398)
															o1->outer = null();
														}
														HX_STACK_LINE(1398)
														o1->_isimmutable = null();
														HX_STACK_LINE(1398)
														o1->_validate = null();
														HX_STACK_LINE(1398)
														o1->_invalidate = null();
													}
													HX_STACK_LINE(1398)
													o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1398)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
												}
											}
											HX_STACK_LINE(1398)
											o->wrap = null();
										}
										HX_STACK_LINE(1398)
										o->prev = o->next = null();
									}
									HX_STACK_LINE(1399)
									o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(1400)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1405)
								i1->end = null();
								HX_STACK_LINE(1406)
								return retnodes;
							}
							return null();
						}
					};
					HX_STACK_LINE(1353)
					i1->end = (  (((bool((i1->end != null())) && bool((i1->end->prev == i1->end))))) ? ::zpp_nape::geom::ZPP_GeomVert(_Function_5_1::Block(i1)) : ::zpp_nape::geom::ZPP_GeomVert(_Function_5_2::Block(i1)) );
					HX_STACK_LINE(1409)
					if ((!(i1->vertex))){
						HX_STACK_LINE(1409)
						if (((i1->end != i1->path0->vert))){
							HX_STACK_LINE(1411)
							i1->start->x = i1->end->x;
							HX_STACK_LINE(1412)
							i1->start->y = i1->end->y;
							struct _Function_7_1{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_CutInt &i1){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1422);
									{
										HX_STACK_LINE(1423)
										i1->end->next = i1->end->prev = null();
										HX_STACK_LINE(1424)
										{
											HX_STACK_LINE(1425)
											::zpp_nape::geom::ZPP_GeomVert o = i1->end;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1434)
											{
												HX_STACK_LINE(1434)
												if (((o->wrap != null()))){
													HX_STACK_LINE(1434)
													o->wrap->zpp_inner->_inuse = false;
													HX_STACK_LINE(1434)
													{
														HX_STACK_LINE(1434)
														::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1434)
														if (((bool((_this != null())) && bool(_this->zpp_disp)))){
															HX_STACK_LINE(1434)
															hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
														}
														HX_STACK_LINE(1434)
														{
															HX_STACK_LINE(1434)
															::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
															HX_STACK_LINE(1434)
															if ((_this1->_immutable)){
																HX_STACK_LINE(1434)
																hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
															}
															HX_STACK_LINE(1434)
															if (((_this1->_isimmutable != null()))){
																HX_STACK_LINE(1434)
																_this1->_isimmutable();
															}
														}
														HX_STACK_LINE(1434)
														if ((_this->zpp_inner->_inuse)){
															HX_STACK_LINE(1434)
															hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
														}
														HX_STACK_LINE(1434)
														::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
														HX_STACK_LINE(1434)
														_this->zpp_inner->outer = null();
														HX_STACK_LINE(1434)
														_this->zpp_inner = null();
														HX_STACK_LINE(1434)
														{
															HX_STACK_LINE(1434)
															::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
															HX_STACK_LINE(1434)
															o1->zpp_pool = null();
															HX_STACK_LINE(1434)
															if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
																HX_STACK_LINE(1434)
																::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
															}
															else{
																HX_STACK_LINE(1434)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
															}
															HX_STACK_LINE(1434)
															::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
															HX_STACK_LINE(1434)
															o1->zpp_disp = true;
														}
														HX_STACK_LINE(1434)
														{
															HX_STACK_LINE(1434)
															::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
															HX_STACK_LINE(1434)
															{
																HX_STACK_LINE(1434)
																if (((o1->outer != null()))){
																	HX_STACK_LINE(1434)
																	o1->outer->zpp_inner = null();
																	HX_STACK_LINE(1434)
																	o1->outer = null();
																}
																HX_STACK_LINE(1434)
																o1->_isimmutable = null();
																HX_STACK_LINE(1434)
																o1->_validate = null();
																HX_STACK_LINE(1434)
																o1->_invalidate = null();
															}
															HX_STACK_LINE(1434)
															o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
															HX_STACK_LINE(1434)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
														}
													}
													HX_STACK_LINE(1434)
													o->wrap = null();
												}
												HX_STACK_LINE(1434)
												o->prev = o->next = null();
											}
											HX_STACK_LINE(1435)
											o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
											HX_STACK_LINE(1436)
											::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
										}
										HX_STACK_LINE(1441)
										return null();
									}
									return null();
								}
							};
							struct _Function_7_2{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_CutInt &i1){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1443);
									{
										HX_STACK_LINE(1444)
										::zpp_nape::geom::ZPP_GeomVert retnodes = i1->end->prev;		HX_STACK_VAR(retnodes,"retnodes");
										HX_STACK_LINE(1445)
										i1->end->prev->next = i1->end->next;
										HX_STACK_LINE(1446)
										i1->end->next->prev = i1->end->prev;
										HX_STACK_LINE(1447)
										i1->end->next = i1->end->prev = null();
										HX_STACK_LINE(1448)
										{
											HX_STACK_LINE(1449)
											::zpp_nape::geom::ZPP_GeomVert o = i1->end;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1458)
											{
												HX_STACK_LINE(1458)
												if (((o->wrap != null()))){
													HX_STACK_LINE(1458)
													o->wrap->zpp_inner->_inuse = false;
													HX_STACK_LINE(1458)
													{
														HX_STACK_LINE(1458)
														::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1458)
														if (((bool((_this != null())) && bool(_this->zpp_disp)))){
															HX_STACK_LINE(1458)
															hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
														}
														HX_STACK_LINE(1458)
														{
															HX_STACK_LINE(1458)
															::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
															HX_STACK_LINE(1458)
															if ((_this1->_immutable)){
																HX_STACK_LINE(1458)
																hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
															}
															HX_STACK_LINE(1458)
															if (((_this1->_isimmutable != null()))){
																HX_STACK_LINE(1458)
																_this1->_isimmutable();
															}
														}
														HX_STACK_LINE(1458)
														if ((_this->zpp_inner->_inuse)){
															HX_STACK_LINE(1458)
															hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
														}
														HX_STACK_LINE(1458)
														::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
														HX_STACK_LINE(1458)
														_this->zpp_inner->outer = null();
														HX_STACK_LINE(1458)
														_this->zpp_inner = null();
														HX_STACK_LINE(1458)
														{
															HX_STACK_LINE(1458)
															::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
															HX_STACK_LINE(1458)
															o1->zpp_pool = null();
															HX_STACK_LINE(1458)
															if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
																HX_STACK_LINE(1458)
																::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
															}
															else{
																HX_STACK_LINE(1458)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
															}
															HX_STACK_LINE(1458)
															::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
															HX_STACK_LINE(1458)
															o1->zpp_disp = true;
														}
														HX_STACK_LINE(1458)
														{
															HX_STACK_LINE(1458)
															::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
															HX_STACK_LINE(1458)
															{
																HX_STACK_LINE(1458)
																if (((o1->outer != null()))){
																	HX_STACK_LINE(1458)
																	o1->outer->zpp_inner = null();
																	HX_STACK_LINE(1458)
																	o1->outer = null();
																}
																HX_STACK_LINE(1458)
																o1->_isimmutable = null();
																HX_STACK_LINE(1458)
																o1->_validate = null();
																HX_STACK_LINE(1458)
																o1->_invalidate = null();
															}
															HX_STACK_LINE(1458)
															o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
															HX_STACK_LINE(1458)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
														}
													}
													HX_STACK_LINE(1458)
													o->wrap = null();
												}
												HX_STACK_LINE(1458)
												o->prev = o->next = null();
											}
											HX_STACK_LINE(1459)
											o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
											HX_STACK_LINE(1460)
											::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
										}
										HX_STACK_LINE(1465)
										i1->end = null();
										HX_STACK_LINE(1466)
										return retnodes;
									}
									return null();
								}
							};
							HX_STACK_LINE(1413)
							i1->end = (  (((bool((i1->end != null())) && bool((i1->end->prev == i1->end))))) ? ::zpp_nape::geom::ZPP_GeomVert(_Function_7_1::Block(i1)) : ::zpp_nape::geom::ZPP_GeomVert(_Function_7_2::Block(i1)) );
						}
						else{
							HX_STACK_LINE(1471)
							::zpp_nape::geom::ZPP_GeomVert n = i1->start->next;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(1472)
							i1->start->x = n->x;
							HX_STACK_LINE(1473)
							i1->start->y = n->y;
							HX_STACK_LINE(1474)
							if (((bool((n != null())) && bool((n->prev == n))))){
								HX_STACK_LINE(1484)
								n->next = n->prev = null();
								HX_STACK_LINE(1485)
								{
									HX_STACK_LINE(1486)
									::zpp_nape::geom::ZPP_GeomVert o = n;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1495)
									{
										HX_STACK_LINE(1495)
										if (((o->wrap != null()))){
											HX_STACK_LINE(1495)
											o->wrap->zpp_inner->_inuse = false;
											HX_STACK_LINE(1495)
											{
												HX_STACK_LINE(1495)
												::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1495)
												if (((bool((_this != null())) && bool(_this->zpp_disp)))){
													HX_STACK_LINE(1495)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1495)
												{
													HX_STACK_LINE(1495)
													::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1495)
													if ((_this1->_immutable)){
														HX_STACK_LINE(1495)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(1495)
													if (((_this1->_isimmutable != null()))){
														HX_STACK_LINE(1495)
														_this1->_isimmutable();
													}
												}
												HX_STACK_LINE(1495)
												if ((_this->zpp_inner->_inuse)){
													HX_STACK_LINE(1495)
													hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
												}
												HX_STACK_LINE(1495)
												::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
												HX_STACK_LINE(1495)
												_this->zpp_inner->outer = null();
												HX_STACK_LINE(1495)
												_this->zpp_inner = null();
												HX_STACK_LINE(1495)
												{
													HX_STACK_LINE(1495)
													::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1495)
													o1->zpp_pool = null();
													HX_STACK_LINE(1495)
													if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
														HX_STACK_LINE(1495)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
													}
													else{
														HX_STACK_LINE(1495)
														::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
													}
													HX_STACK_LINE(1495)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
													HX_STACK_LINE(1495)
													o1->zpp_disp = true;
												}
												HX_STACK_LINE(1495)
												{
													HX_STACK_LINE(1495)
													::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1495)
													{
														HX_STACK_LINE(1495)
														if (((o1->outer != null()))){
															HX_STACK_LINE(1495)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1495)
															o1->outer = null();
														}
														HX_STACK_LINE(1495)
														o1->_isimmutable = null();
														HX_STACK_LINE(1495)
														o1->_validate = null();
														HX_STACK_LINE(1495)
														o1->_invalidate = null();
													}
													HX_STACK_LINE(1495)
													o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1495)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
												}
											}
											HX_STACK_LINE(1495)
											o->wrap = null();
										}
										HX_STACK_LINE(1495)
										o->prev = o->next = null();
									}
									HX_STACK_LINE(1496)
									o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(1497)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1502)
								n = null();
							}
							else{
								HX_STACK_LINE(1505)
								n->prev->next = n->next;
								HX_STACK_LINE(1506)
								n->next->prev = n->prev;
								HX_STACK_LINE(1507)
								n->next = n->prev = null();
								HX_STACK_LINE(1508)
								{
									HX_STACK_LINE(1509)
									::zpp_nape::geom::ZPP_GeomVert o = n;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1518)
									{
										HX_STACK_LINE(1518)
										if (((o->wrap != null()))){
											HX_STACK_LINE(1518)
											o->wrap->zpp_inner->_inuse = false;
											HX_STACK_LINE(1518)
											{
												HX_STACK_LINE(1518)
												::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1518)
												if (((bool((_this != null())) && bool(_this->zpp_disp)))){
													HX_STACK_LINE(1518)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1518)
												{
													HX_STACK_LINE(1518)
													::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1518)
													if ((_this1->_immutable)){
														HX_STACK_LINE(1518)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(1518)
													if (((_this1->_isimmutable != null()))){
														HX_STACK_LINE(1518)
														_this1->_isimmutable();
													}
												}
												HX_STACK_LINE(1518)
												if ((_this->zpp_inner->_inuse)){
													HX_STACK_LINE(1518)
													hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
												}
												HX_STACK_LINE(1518)
												::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
												HX_STACK_LINE(1518)
												_this->zpp_inner->outer = null();
												HX_STACK_LINE(1518)
												_this->zpp_inner = null();
												HX_STACK_LINE(1518)
												{
													HX_STACK_LINE(1518)
													::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1518)
													o1->zpp_pool = null();
													HX_STACK_LINE(1518)
													if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
														HX_STACK_LINE(1518)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
													}
													else{
														HX_STACK_LINE(1518)
														::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
													}
													HX_STACK_LINE(1518)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
													HX_STACK_LINE(1518)
													o1->zpp_disp = true;
												}
												HX_STACK_LINE(1518)
												{
													HX_STACK_LINE(1518)
													::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
													HX_STACK_LINE(1518)
													{
														HX_STACK_LINE(1518)
														if (((o1->outer != null()))){
															HX_STACK_LINE(1518)
															o1->outer->zpp_inner = null();
															HX_STACK_LINE(1518)
															o1->outer = null();
														}
														HX_STACK_LINE(1518)
														o1->_isimmutable = null();
														HX_STACK_LINE(1518)
														o1->_validate = null();
														HX_STACK_LINE(1518)
														o1->_invalidate = null();
													}
													HX_STACK_LINE(1518)
													o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(1518)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
												}
											}
											HX_STACK_LINE(1518)
											o->wrap = null();
										}
										HX_STACK_LINE(1518)
										o->prev = o->next = null();
									}
									HX_STACK_LINE(1519)
									o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(1520)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
								}
							}
						}
					}
					HX_STACK_LINE(1529)
					{
						HX_STACK_LINE(1530)
						i1->end->next->prev = i1->start->prev;
						HX_STACK_LINE(1531)
						i1->start->prev->next = i1->end->next;
						HX_STACK_LINE(1532)
						i1->end->next = i1->start;
						HX_STACK_LINE(1533)
						i1->start->prev = i1->end;
					}
					HX_STACK_LINE(1535)
					{
						struct _Function_6_1{
							inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutInt &i1){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1538);
								{
									HX_STACK_LINE(1539)
									::zpp_nape::geom::ZPP_CutVert obj = i1->path0;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(1540)
									::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
									HX_STACK_LINE(1541)
									while(((obj != obj->parent))){
										HX_STACK_LINE(1542)
										::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(1543)
										obj->parent = stack;
										HX_STACK_LINE(1544)
										stack = obj;
										HX_STACK_LINE(1545)
										obj = nxt;
									}
									HX_STACK_LINE(1547)
									while(((stack != null()))){
										HX_STACK_LINE(1548)
										::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(1549)
										stack->parent = obj;
										HX_STACK_LINE(1550)
										stack = nxt;
									}
									HX_STACK_LINE(1552)
									return obj;
								}
								return null();
							}
						};
						HX_STACK_LINE(1536)
						::zpp_nape::geom::ZPP_CutVert xr = (  (((i1->path0 == i1->path0->parent))) ? ::zpp_nape::geom::ZPP_CutVert(i1->path0) : ::zpp_nape::geom::ZPP_CutVert(_Function_6_1::Block(i1)) );		HX_STACK_VAR(xr,"xr");
						struct _Function_6_2{
							inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutInt &i1){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1557);
								{
									HX_STACK_LINE(1558)
									::zpp_nape::geom::ZPP_CutVert obj = i1->path1;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(1559)
									::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
									HX_STACK_LINE(1560)
									while(((obj != obj->parent))){
										HX_STACK_LINE(1561)
										::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(1562)
										obj->parent = stack;
										HX_STACK_LINE(1563)
										stack = obj;
										HX_STACK_LINE(1564)
										obj = nxt;
									}
									HX_STACK_LINE(1566)
									while(((stack != null()))){
										HX_STACK_LINE(1567)
										::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(1568)
										stack->parent = obj;
										HX_STACK_LINE(1569)
										stack = nxt;
									}
									HX_STACK_LINE(1571)
									return obj;
								}
								return null();
							}
						};
						HX_STACK_LINE(1555)
						::zpp_nape::geom::ZPP_CutVert yr = (  (((i1->path1 == i1->path1->parent))) ? ::zpp_nape::geom::ZPP_CutVert(i1->path1) : ::zpp_nape::geom::ZPP_CutVert(_Function_6_2::Block(i1)) );		HX_STACK_VAR(yr,"yr");
						HX_STACK_LINE(1574)
						if (((xr != yr))){
							HX_STACK_LINE(1574)
							if (((xr->rank < yr->rank))){
								HX_STACK_LINE(1575)
								xr->parent = yr;
							}
							else{
								HX_STACK_LINE(1576)
								if (((xr->rank > yr->rank))){
									HX_STACK_LINE(1576)
									yr->parent = xr;
								}
								else{
									HX_STACK_LINE(1578)
									yr->parent = xr;
									HX_STACK_LINE(1579)
									(xr->rank)++;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1584)
		{
			HX_STACK_LINE(1585)
			::zpp_nape::geom::ZPP_CutInt o = i1;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1594)
			{
				HX_STACK_LINE(1594)
				o->end = o->start = null();
				HX_STACK_LINE(1594)
				o->path0 = o->path1 = null();
			}
			HX_STACK_LINE(1595)
			o->next = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
			HX_STACK_LINE(1596)
			::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1601)
		{
			HX_STACK_LINE(1602)
			::zpp_nape::geom::ZPP_CutInt o = j;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1611)
			{
				HX_STACK_LINE(1611)
				o->end = o->start = null();
				HX_STACK_LINE(1611)
				o->path0 = o->path1 = null();
			}
			HX_STACK_LINE(1612)
			o->next = ::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool;
			HX_STACK_LINE(1613)
			::zpp_nape::geom::ZPP_CutInt_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1619)
	::nape::geom::GeomPolyList ret = (  (((output == null()))) ? ::nape::geom::GeomPolyList(::nape::geom::GeomPolyList_obj::__new()) : ::nape::geom::GeomPolyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1620)
	{
		HX_STACK_LINE(1621)
		::zpp_nape::util::ZNPNode_ZPP_CutVert cx_ite = ::zpp_nape::geom::ZPP_Cutter_obj::paths->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1622)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1623)
			::zpp_nape::geom::ZPP_CutVert p1 = cx_ite->elt;		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(1624)
			{
				struct _Function_4_1{
					inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &p1){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1627);
						{
							HX_STACK_LINE(1628)
							::zpp_nape::geom::ZPP_CutVert obj = p1;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(1629)
							::zpp_nape::geom::ZPP_CutVert stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(1630)
							while(((obj != obj->parent))){
								HX_STACK_LINE(1631)
								::zpp_nape::geom::ZPP_CutVert nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1632)
								obj->parent = stack;
								HX_STACK_LINE(1633)
								stack = obj;
								HX_STACK_LINE(1634)
								obj = nxt;
							}
							HX_STACK_LINE(1636)
							while(((stack != null()))){
								HX_STACK_LINE(1637)
								::zpp_nape::geom::ZPP_CutVert nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(1638)
								stack->parent = obj;
								HX_STACK_LINE(1639)
								stack = nxt;
							}
							HX_STACK_LINE(1641)
							return obj;
						}
						return null();
					}
				};
				HX_STACK_LINE(1625)
				::zpp_nape::geom::ZPP_CutVert poly = (  (((p1 == p1->parent))) ? ::zpp_nape::geom::ZPP_CutVert(p1) : ::zpp_nape::geom::ZPP_CutVert(_Function_4_1::Block(p1)) );		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(1644)
				if ((poly->used)){
					HX_STACK_LINE(1645)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1646)
					continue;
				}
				HX_STACK_LINE(1648)
				poly->used = true;
				HX_STACK_LINE(1649)
				{
					HX_STACK_LINE(1650)
					::zpp_nape::geom::ZPP_GeomVert p2 = poly->vert;		HX_STACK_VAR(p2,"p2");
					HX_STACK_LINE(1651)
					bool skip = true;		HX_STACK_VAR(skip,"skip");
					HX_STACK_LINE(1652)
					while(((bool((poly->vert != null())) && bool(((bool(skip) || bool((p2 != poly->vert)))))))){
						HX_STACK_LINE(1653)
						skip = false;
						HX_STACK_LINE(1654)
						if (((bool((p2->x == p2->next->x)) && bool((p2->y == p2->next->y))))){
							HX_STACK_LINE(1655)
							if (((p2 == poly->vert))){
								HX_STACK_LINE(1656)
								poly->vert = (  (((p2->next == p2))) ? ::zpp_nape::geom::ZPP_GeomVert(null()) : ::zpp_nape::geom::ZPP_GeomVert(p2->next) );
								HX_STACK_LINE(1657)
								skip = true;
							}
							struct _Function_7_1{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p2){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1668);
									{
										HX_STACK_LINE(1669)
										p2->next = p2->prev = null();
										HX_STACK_LINE(1671)
										return p2 = null();
									}
									return null();
								}
							};
							struct _Function_7_2{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p2){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1673);
									{
										HX_STACK_LINE(1674)
										::zpp_nape::geom::ZPP_GeomVert retnodes = p2->next;		HX_STACK_VAR(retnodes,"retnodes");
										HX_STACK_LINE(1675)
										p2->prev->next = p2->next;
										HX_STACK_LINE(1676)
										p2->next->prev = p2->prev;
										HX_STACK_LINE(1677)
										p2->next = p2->prev = null();
										HX_STACK_LINE(1679)
										p2 = null();
										HX_STACK_LINE(1680)
										return retnodes;
									}
									return null();
								}
							};
							HX_STACK_LINE(1659)
							p2 = (  (((bool((p2 != null())) && bool((p2->prev == p2))))) ? ::zpp_nape::geom::ZPP_GeomVert(_Function_7_1::Block(p2)) : ::zpp_nape::geom::ZPP_GeomVert(_Function_7_2::Block(p2)) );
						}
						else{
							HX_STACK_LINE(1684)
							p2 = p2->next;
						}
					}
				}
				HX_STACK_LINE(1687)
				if (((poly->vert != null()))){
					HX_STACK_LINE(1688)
					::nape::geom::GeomPoly gp = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(gp,"gp");
					HX_STACK_LINE(1689)
					gp->zpp_inner->vertices = poly->vert;
					HX_STACK_LINE(1690)
					if ((ret->zpp_inner->reverse_flag)){
						HX_STACK_LINE(1690)
						ret->push(gp);
					}
					else{
						HX_STACK_LINE(1690)
						ret->unshift(gp);
					}
				}
			}
			HX_STACK_LINE(1693)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1696)
	while((!(((::zpp_nape::geom::ZPP_Cutter_obj::paths->head == null()))))){
		HX_STACK_LINE(1698)
		::zpp_nape::geom::ZPP_CutVert p1 = ::zpp_nape::geom::ZPP_Cutter_obj::paths->pop_unsafe();		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(1699)
		{
			HX_STACK_LINE(1700)
			::zpp_nape::geom::ZPP_CutVert o = p1;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1709)
			{
				HX_STACK_LINE(1709)
				o->vert = null();
				HX_STACK_LINE(1709)
				o->parent = null();
			}
			HX_STACK_LINE(1710)
			o->next = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
			HX_STACK_LINE(1711)
			::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1718)
	while((!(((verts == null()))))){
		struct _Function_2_1{
			inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &verts){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1728);
				{
					HX_STACK_LINE(1729)
					verts->next = verts->prev = null();
					HX_STACK_LINE(1730)
					{
						HX_STACK_LINE(1731)
						::zpp_nape::geom::ZPP_CutVert o = verts;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1740)
						{
							HX_STACK_LINE(1740)
							o->vert = null();
							HX_STACK_LINE(1740)
							o->parent = null();
						}
						HX_STACK_LINE(1741)
						o->next = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
						HX_STACK_LINE(1742)
						::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1747)
					return verts = null();
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &verts){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/Cutter.hx",1749);
				{
					HX_STACK_LINE(1750)
					::zpp_nape::geom::ZPP_CutVert retnodes = verts->next;		HX_STACK_VAR(retnodes,"retnodes");
					HX_STACK_LINE(1751)
					verts->prev->next = verts->next;
					HX_STACK_LINE(1752)
					verts->next->prev = verts->prev;
					HX_STACK_LINE(1753)
					verts->next = verts->prev = null();
					HX_STACK_LINE(1754)
					{
						HX_STACK_LINE(1755)
						::zpp_nape::geom::ZPP_CutVert o = verts;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1764)
						{
							HX_STACK_LINE(1764)
							o->vert = null();
							HX_STACK_LINE(1764)
							o->parent = null();
						}
						HX_STACK_LINE(1765)
						o->next = ::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool;
						HX_STACK_LINE(1766)
						::zpp_nape::geom::ZPP_CutVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1771)
					verts = null();
					HX_STACK_LINE(1772)
					return retnodes;
				}
				return null();
			}
		};
		HX_STACK_LINE(1719)
		verts = (  (((bool((verts != null())) && bool((verts->prev == verts))))) ? ::zpp_nape::geom::ZPP_CutVert(_Function_2_1::Block(verts)) : ::zpp_nape::geom::ZPP_CutVert(_Function_2_2::Block(verts)) );
	}
	HX_STACK_LINE(1776)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ZPP_Cutter_obj,run,return )


ZPP_Cutter_obj::ZPP_Cutter_obj()
{
}

void ZPP_Cutter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Cutter);
	HX_MARK_END_CLASS();
}

void ZPP_Cutter_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_Cutter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { return ints; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paths") ) { return paths; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Cutter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { ints=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CutInt >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paths") ) { paths=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CutVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Cutter_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ints"),
	HX_CSTRING("paths"),
	HX_CSTRING("run"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Cutter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Cutter_obj::ints,"ints");
	HX_MARK_MEMBER_NAME(ZPP_Cutter_obj::paths,"paths");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Cutter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Cutter_obj::ints,"ints");
	HX_VISIT_MEMBER_NAME(ZPP_Cutter_obj::paths,"paths");
};

Class ZPP_Cutter_obj::__mClass;

void ZPP_Cutter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Cutter"), hx::TCanCast< ZPP_Cutter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Cutter_obj::__boot()
{
	ints= null();
	paths= null();
}

} // end namespace zpp_nape
} // end namespace geom
