#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Monotone
#include <zpp_nape/geom/ZPP_Monotone.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionVertex
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionVertex.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Monotone_obj::__construct()
{
	return null();
}

ZPP_Monotone_obj::~ZPP_Monotone_obj() { }

Dynamic ZPP_Monotone_obj::__CreateEmpty() { return  new ZPP_Monotone_obj; }
hx::ObjectPtr< ZPP_Monotone_obj > ZPP_Monotone_obj::__new()
{  hx::ObjectPtr< ZPP_Monotone_obj > result = new ZPP_Monotone_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Monotone_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Monotone_obj > result = new ZPP_Monotone_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_Vec2 ZPP_Monotone_obj::bisector( ::zpp_nape::geom::ZPP_PartitionVertex b){
	HX_STACK_PUSH("ZPP_Monotone::bisector","zpp_nape/geom/Monotone.hx",175);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(176)
	::zpp_nape::geom::ZPP_PartitionVertex a = b->prev;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(177)
	::zpp_nape::geom::ZPP_PartitionVertex c = b->next;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(178)
	Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(179)
	Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(181)
		ux = (b->x - a->x);
		HX_STACK_LINE(182)
		uy = (b->y - a->y);
	}
	HX_STACK_LINE(184)
	Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(185)
	Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(187)
		vx = (c->x - b->x);
		HX_STACK_LINE(188)
		vy = (c->y - b->y);
	}
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &vx,Float &uy,Float &ux,Float &vy){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Monotone.hx",190);
			{
				HX_STACK_LINE(190)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(190)
				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(190)
				{
					HX_STACK_LINE(190)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(190)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(190)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(190)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
						HX_STACK_LINE(190)
						ret->next = null();
					}
					HX_STACK_LINE(190)
					ret->weak = false;
				}
				HX_STACK_LINE(190)
				ret->_immutable = immutable;
				HX_STACK_LINE(190)
				{
					HX_STACK_LINE(190)
					ret->x = (-(uy) - vy);
					HX_STACK_LINE(190)
					ret->y = (ux + vx);
					HX_STACK_LINE(190)
					{
					}
				}
				HX_STACK_LINE(190)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(190)
	::zpp_nape::geom::ZPP_Vec2 ret = _Function_1_1::Block(vx,uy,ux,vy);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(191)
	{
		HX_STACK_LINE(192)
		Float d = ((ret->x * ret->x) + (ret->y * ret->y));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(201)
		Float imag = (Float(1.0) / Float(::Math_obj::sqrt(d)));		HX_STACK_VAR(imag,"imag");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(203)
			Float t = imag;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(212)
			hx::MultEq(ret->x,t);
			HX_STACK_LINE(213)
			hx::MultEq(ret->y,t);
		}
	}
	HX_STACK_LINE(216)
	if (((((vy * ux) - (vx * uy)) < (int)0))){
		HX_STACK_LINE(217)
		ret->x = -(ret->x);
		HX_STACK_LINE(218)
		ret->y = -(ret->y);
	}
	HX_STACK_LINE(220)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Monotone_obj,bisector,return )

bool ZPP_Monotone_obj::below( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
	HX_STACK_PUSH("ZPP_Monotone::below","zpp_nape/geom/Monotone.hx",222);
	HX_STACK_ARG(p,"p");
	HX_STACK_ARG(q,"q");
	HX_STACK_LINE(222)
	if (((p->y < q->y))){
		HX_STACK_LINE(223)
		return true;
	}
	else{
		HX_STACK_LINE(224)
		if (((p->y > q->y))){
			HX_STACK_LINE(224)
			return false;
		}
		else{
			HX_STACK_LINE(225)
			if (((p->x < q->x))){
				HX_STACK_LINE(226)
				return true;
			}
			else{
				HX_STACK_LINE(227)
				if (((p->x > q->x))){
					HX_STACK_LINE(227)
					return false;
				}
				else{
					HX_STACK_LINE(229)
					::zpp_nape::geom::ZPP_Vec2 po = ::zpp_nape::geom::ZPP_Monotone_obj::bisector(p);		HX_STACK_VAR(po,"po");
					HX_STACK_LINE(230)
					::zpp_nape::geom::ZPP_Vec2 qo = ::zpp_nape::geom::ZPP_Monotone_obj::bisector(q);		HX_STACK_VAR(qo,"qo");
					HX_STACK_LINE(231)
					{
						HX_STACK_LINE(232)
						Float t = 1.0;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(241)
						hx::AddEq(po->x,(p->x * t));
						HX_STACK_LINE(242)
						hx::AddEq(po->y,(p->y * t));
					}
					HX_STACK_LINE(244)
					{
						HX_STACK_LINE(245)
						Float t = 1.0;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(254)
						hx::AddEq(qo->x,(q->x * t));
						HX_STACK_LINE(255)
						hx::AddEq(qo->y,(q->y * t));
					}
					HX_STACK_LINE(257)
					bool ret = (bool((po->x < qo->x)) || bool((bool((po->x == qo->x)) && bool((po->y < qo->y)))));		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(259)
						::zpp_nape::geom::ZPP_Vec2 o = po;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(268)
						{
							HX_STACK_LINE(268)
							if (((o->outer != null()))){
								HX_STACK_LINE(268)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(268)
								o->outer = null();
							}
							HX_STACK_LINE(268)
							o->_isimmutable = null();
							HX_STACK_LINE(268)
							o->_validate = null();
							HX_STACK_LINE(268)
							o->_invalidate = null();
						}
						HX_STACK_LINE(269)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(270)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(276)
						::zpp_nape::geom::ZPP_Vec2 o = qo;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(285)
						{
							HX_STACK_LINE(285)
							if (((o->outer != null()))){
								HX_STACK_LINE(285)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(285)
								o->outer = null();
							}
							HX_STACK_LINE(285)
							o->_isimmutable = null();
							HX_STACK_LINE(285)
							o->_validate = null();
							HX_STACK_LINE(285)
							o->_invalidate = null();
						}
						HX_STACK_LINE(286)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(287)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(292)
					return ret;
				}
			}
		}
	}
	HX_STACK_LINE(222)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Monotone_obj,below,return )

bool ZPP_Monotone_obj::above( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
	HX_STACK_PUSH("ZPP_Monotone::above","zpp_nape/geom/Monotone.hx",296);
	HX_STACK_ARG(p,"p");
	HX_STACK_ARG(q,"q");
	HX_STACK_LINE(296)
	return ::zpp_nape::geom::ZPP_Monotone_obj::below(q,p);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Monotone_obj,above,return )

bool ZPP_Monotone_obj::left_vertex( ::zpp_nape::geom::ZPP_PartitionVertex p){
	HX_STACK_PUSH("ZPP_Monotone::left_vertex","zpp_nape/geom/Monotone.hx",299);
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(300)
	::zpp_nape::geom::ZPP_PartitionVertex pre = p->prev;		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(301)
	return (bool((pre->y > p->y)) || bool((bool((pre->y == p->y)) && bool((p->next->y < p->y)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Monotone_obj,left_vertex,return )

bool ZPP_Monotone_obj::isMonotone( ::zpp_nape::geom::ZPP_GeomVert P){
	HX_STACK_PUSH("ZPP_Monotone::isMonotone","zpp_nape/geom/Monotone.hx",303);
	HX_STACK_ARG(P,"P");
	HX_STACK_LINE(304)
	::zpp_nape::geom::ZPP_GeomVert min = P;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(305)
	::zpp_nape::geom::ZPP_GeomVert max = P;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(306)
	{
		HX_STACK_LINE(307)
		::zpp_nape::geom::ZPP_GeomVert F = P->next;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(308)
		::zpp_nape::geom::ZPP_GeomVert L = P;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(309)
		if (((F != null()))){
			HX_STACK_LINE(310)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(311)
			do{
				HX_STACK_LINE(312)
				::zpp_nape::geom::ZPP_GeomVert p = nite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(315)
					if (((p->y < min->y))){
						HX_STACK_LINE(315)
						min = p;
					}
					HX_STACK_LINE(316)
					if (((p->y > max->y))){
						HX_STACK_LINE(316)
						max = p;
					}
				}
				HX_STACK_LINE(319)
				nite = nite->next;
			}
while(((nite != L)));
		}
	}
	HX_STACK_LINE(324)
	bool ret = true;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(325)
	::zpp_nape::geom::ZPP_GeomVert pre = min;		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(326)
	if (((max != min->next))){
		HX_STACK_LINE(328)
		::zpp_nape::geom::ZPP_GeomVert F = min->next;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(329)
		::zpp_nape::geom::ZPP_GeomVert L = max;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(330)
		if (((F != null()))){
			HX_STACK_LINE(331)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(332)
			do{
				HX_STACK_LINE(333)
				::zpp_nape::geom::ZPP_GeomVert p = nite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(334)
				{
					HX_STACK_LINE(336)
					if (((p->y < pre->y))){
						HX_STACK_LINE(337)
						ret = false;
						HX_STACK_LINE(338)
						break;
					}
					HX_STACK_LINE(340)
					pre = p;
				}
				HX_STACK_LINE(343)
				nite = nite->next;
			}
while(((nite != L)));
		}
	}
	HX_STACK_LINE(349)
	if ((!(ret))){
		HX_STACK_LINE(349)
		return false;
	}
	HX_STACK_LINE(350)
	pre = min;
	HX_STACK_LINE(351)
	if (((max != min->prev))){
		HX_STACK_LINE(353)
		::zpp_nape::geom::ZPP_GeomVert F = min->prev;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(354)
		::zpp_nape::geom::ZPP_GeomVert L = max;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(355)
		if (((F != null()))){
			HX_STACK_LINE(356)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(357)
			do{
				HX_STACK_LINE(358)
				::zpp_nape::geom::ZPP_GeomVert p = nite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(359)
				{
					HX_STACK_LINE(361)
					if (((p->y < pre->y))){
						HX_STACK_LINE(362)
						ret = false;
						HX_STACK_LINE(363)
						break;
					}
					HX_STACK_LINE(365)
					pre = p;
				}
				HX_STACK_LINE(368)
				nite = nite->prev;
			}
while(((nite != L)));
		}
	}
	HX_STACK_LINE(374)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Monotone_obj,isMonotone,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZPP_Monotone_obj::sharedPPoly;

::zpp_nape::geom::ZPP_PartitionedPoly ZPP_Monotone_obj::getShared( ){
	HX_STACK_PUSH("ZPP_Monotone::getShared","zpp_nape/geom/Monotone.hx",378);
	HX_STACK_LINE(379)
	if (((::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly == null()))){
		HX_STACK_LINE(379)
		::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(null());
	}
	HX_STACK_LINE(380)
	return ::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Monotone_obj,getShared,return )

::zpp_nape::util::ZNPList_ZPP_PartitionVertex ZPP_Monotone_obj::queue;

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Monotone_obj::edges;

::zpp_nape::geom::ZPP_PartitionedPoly ZPP_Monotone_obj::decompose( ::zpp_nape::geom::ZPP_GeomVert P,::zpp_nape::geom::ZPP_PartitionedPoly poly){
	HX_STACK_PUSH("ZPP_Monotone::decompose","zpp_nape/geom/Monotone.hx",384);
	HX_STACK_ARG(P,"P");
	HX_STACK_ARG(poly,"poly");
	HX_STACK_LINE(385)
	if (((poly == null()))){
		HX_STACK_LINE(385)
		poly = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(P);
	}
	else{
		HX_STACK_LINE(388)
		poly->init(P);
	}
	HX_STACK_LINE(391)
	if (((poly->vertices == null()))){
		HX_STACK_LINE(391)
		return poly;
	}
	HX_STACK_LINE(392)
	if (((::zpp_nape::geom::ZPP_Monotone_obj::queue == null()))){
		HX_STACK_LINE(392)
		::zpp_nape::geom::ZPP_Monotone_obj::queue = ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__new();
	}
	HX_STACK_LINE(393)
	{
		HX_STACK_LINE(394)
		::zpp_nape::geom::ZPP_PartitionVertex F = poly->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(395)
		::zpp_nape::geom::ZPP_PartitionVertex L = poly->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(396)
		if (((F != null()))){
			HX_STACK_LINE(397)
			::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(398)
			do{
				HX_STACK_LINE(399)
				::zpp_nape::geom::ZPP_PartitionVertex p = nite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(400)
				{
					HX_STACK_LINE(402)
					::zpp_nape::geom::ZPP_Monotone_obj::queue->add(p);
					HX_STACK_LINE(403)
					Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
					HX_STACK_LINE(404)
					Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(406)
						ux = (p->next->x - p->x);
						HX_STACK_LINE(407)
						uy = (p->next->y - p->y);
					}
					HX_STACK_LINE(409)
					Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
					HX_STACK_LINE(410)
					Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
					HX_STACK_LINE(411)
					{
						HX_STACK_LINE(412)
						vx = (p->prev->x - p->x);
						HX_STACK_LINE(413)
						vy = (p->prev->y - p->y);
					}
					HX_STACK_LINE(415)
					bool cx = (((vy * ux) - (vx * uy)) > 0.0);		HX_STACK_VAR(cx,"cx");
					struct _Function_5_1{
						inline static int Block( bool &cx,::zpp_nape::geom::ZPP_PartitionVertex &p){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Monotone.hx",416);
							{
								struct _Function_6_1{
									inline static int Block( bool &cx){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/Monotone.hx",417);
										{
											HX_STACK_LINE(417)
											return (  ((cx)) ? int((int)0) : int((int)3) );
										}
										return null();
									}
								};
								HX_STACK_LINE(416)
								return (  ((::zpp_nape::geom::ZPP_Monotone_obj::below(p->next,p))) ? int(_Function_6_1::Block(cx)) : int((int)4) );
							}
							return null();
						}
					};
					struct _Function_5_2{
						inline static int Block( bool &cx){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Monotone.hx",420);
							{
								HX_STACK_LINE(420)
								return (  ((cx)) ? int((int)1) : int((int)2) );
							}
							return null();
						}
					};
					HX_STACK_LINE(416)
					p->type = (  ((::zpp_nape::geom::ZPP_Monotone_obj::below(p->prev,p))) ? int(_Function_5_1::Block(cx,p)) : int((  ((::zpp_nape::geom::ZPP_Monotone_obj::below(p,p->next))) ? int(_Function_5_2::Block(cx)) : int((int)4) )) );
				}
				HX_STACK_LINE(424)
				nite = nite->next;
			}
while(((nite != L)));
		}
	}
	HX_STACK_LINE(429)
	{
		HX_STACK_LINE(430)
		::zpp_nape::util::ZNPList_ZPP_PartitionVertex xxlist = ::zpp_nape::geom::ZPP_Monotone_obj::queue;		HX_STACK_VAR(xxlist,"xxlist");
		HX_STACK_LINE(431)
		if (((bool(!(((xxlist->head == null())))) && bool((xxlist->head->next != null()))))){
			HX_STACK_LINE(432)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex head = xxlist->head;		HX_STACK_VAR(head,"head");
			HX_STACK_LINE(433)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tail = null();		HX_STACK_VAR(tail,"tail");
			HX_STACK_LINE(434)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex left = null();		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(435)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex right = null();		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(436)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex nxt = null();		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(437)
			int listSize = (int)1;		HX_STACK_VAR(listSize,"listSize");
			HX_STACK_LINE(438)
			int numMerges;		HX_STACK_VAR(numMerges,"numMerges");
			int leftSize;		HX_STACK_VAR(leftSize,"leftSize");
			int rightSize;		HX_STACK_VAR(rightSize,"rightSize");
			HX_STACK_LINE(439)
			do{
				HX_STACK_LINE(440)
				numMerges = (int)0;
				HX_STACK_LINE(441)
				left = head;
				HX_STACK_LINE(442)
				tail = head = null();
				HX_STACK_LINE(443)
				while(((left != null()))){
					HX_STACK_LINE(444)
					(numMerges)++;
					HX_STACK_LINE(445)
					right = left;
					HX_STACK_LINE(446)
					leftSize = (int)0;
					HX_STACK_LINE(447)
					rightSize = listSize;
					HX_STACK_LINE(448)
					while(((bool((right != null())) && bool((leftSize < listSize))))){
						HX_STACK_LINE(449)
						(leftSize)++;
						HX_STACK_LINE(450)
						right = right->next;
					}
					HX_STACK_LINE(452)
					while(((bool((leftSize > (int)0)) || bool((bool((rightSize > (int)0)) && bool((right != null()))))))){
						HX_STACK_LINE(453)
						if (((leftSize == (int)0))){
							HX_STACK_LINE(454)
							nxt = right;
							HX_STACK_LINE(455)
							right = right->next;
							HX_STACK_LINE(456)
							(rightSize)--;
						}
						else{
							HX_STACK_LINE(458)
							if (((bool((rightSize == (int)0)) || bool((right == null()))))){
								HX_STACK_LINE(459)
								nxt = left;
								HX_STACK_LINE(460)
								left = left->next;
								HX_STACK_LINE(461)
								(leftSize)--;
							}
							else{
								HX_STACK_LINE(463)
								if ((::zpp_nape::geom::ZPP_Monotone_obj::above(left->elt,right->elt))){
									HX_STACK_LINE(464)
									nxt = left;
									HX_STACK_LINE(465)
									left = left->next;
									HX_STACK_LINE(466)
									(leftSize)--;
								}
								else{
									HX_STACK_LINE(469)
									nxt = right;
									HX_STACK_LINE(470)
									right = right->next;
									HX_STACK_LINE(471)
									(rightSize)--;
								}
							}
						}
						HX_STACK_LINE(473)
						if (((tail != null()))){
							HX_STACK_LINE(473)
							tail->next = nxt;
						}
						else{
							HX_STACK_LINE(474)
							head = nxt;
						}
						HX_STACK_LINE(475)
						tail = nxt;
					}
					HX_STACK_LINE(477)
					left = right;
				}
				HX_STACK_LINE(479)
				tail->next = null();
				HX_STACK_LINE(480)
				hx::ShlEq(listSize,(int)1);
			}
while(((numMerges > (int)1)));
			HX_STACK_LINE(483)
			{
				HX_STACK_LINE(483)
				xxlist->head = head;
				HX_STACK_LINE(483)
				xxlist->modified = true;
				HX_STACK_LINE(483)
				xxlist->pushmod = true;
			}
		}
	}
	HX_STACK_LINE(486)
	if (((::zpp_nape::geom::ZPP_Monotone_obj::edges == null()))){
		HX_STACK_LINE(487)
		{
			HX_STACK_LINE(488)
			if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
				HX_STACK_LINE(488)
				::zpp_nape::geom::ZPP_Monotone_obj::edges = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();
			}
			else{
				HX_STACK_LINE(495)
				::zpp_nape::geom::ZPP_Monotone_obj::edges = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
				HX_STACK_LINE(496)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = ::zpp_nape::geom::ZPP_Monotone_obj::edges->next;
				HX_STACK_LINE(497)
				::zpp_nape::geom::ZPP_Monotone_obj::edges->next = null();
			}
			HX_STACK_LINE(502)
			Dynamic();
		}
		HX_STACK_LINE(504)
		::zpp_nape::geom::ZPP_Monotone_obj::edges->lt = ::zpp_nape::geom::ZPP_PartitionVertex_obj::edge_lt_dyn();
		HX_STACK_LINE(505)
		::zpp_nape::geom::ZPP_Monotone_obj::edges->swapped = ::zpp_nape::geom::ZPP_PartitionVertex_obj::edge_swap_dyn();
	}
	HX_STACK_LINE(507)
	while((!(((::zpp_nape::geom::ZPP_Monotone_obj::queue->head == null()))))){
		HX_STACK_LINE(508)
		::zpp_nape::geom::ZPP_PartitionVertex v = ::zpp_nape::geom::ZPP_Monotone_obj::queue->pop_unsafe();		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(509)
		switch( (int)(v->type)){
			case (int)0: {
				HX_STACK_LINE(510)
				v->helper = v;
				HX_STACK_LINE(511)
				v->node = ::zpp_nape::geom::ZPP_Monotone_obj::edges->insert(v);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(512)
				::zpp_nape::geom::ZPP_PartitionVertex e = v->prev;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(514)
				if (((e->helper == null()))){
					HX_STACK_LINE(514)
					hx::Throw (HX_CSTRING("Fatal error (1): Polygon is not weakly-simple and clockwise"));
				}
				HX_STACK_LINE(516)
				if (((e->helper->type == (int)2))){
					HX_STACK_LINE(516)
					poly->add_diagonal(v,e->helper);
				}
				HX_STACK_LINE(519)
				::zpp_nape::geom::ZPP_Monotone_obj::edges->remove_node(e->node);
				HX_STACK_LINE(521)
				e->helper = null();
			}
			;break;
			case (int)3: {
				struct _Function_3_1{
					inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &v){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Monotone.hx",523);
						{
							HX_STACK_LINE(524)
							::zpp_nape::geom::ZPP_PartitionVertex ret = null();		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(525)
							if ((!(::zpp_nape::geom::ZPP_Monotone_obj::edges->empty()))){
								HX_STACK_LINE(535)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = ::zpp_nape::geom::ZPP_Monotone_obj::edges->parent;		HX_STACK_VAR(set_ite,"set_ite");
								HX_STACK_LINE(536)
								while(((set_ite->prev != null()))){
									HX_STACK_LINE(536)
									set_ite = set_ite->prev;
								}
								HX_STACK_LINE(537)
								while(((set_ite != null()))){
									HX_STACK_LINE(538)
									::zpp_nape::geom::ZPP_PartitionVertex elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
									HX_STACK_LINE(539)
									if ((!(::zpp_nape::geom::ZPP_PartitionVertex_obj::vert_lt(elt,v)))){
										HX_STACK_LINE(541)
										ret = elt;
										HX_STACK_LINE(542)
										break;
									}
									HX_STACK_LINE(545)
									if (((set_ite->next != null()))){
										HX_STACK_LINE(546)
										set_ite = set_ite->next;
										HX_STACK_LINE(547)
										while(((set_ite->prev != null()))){
											HX_STACK_LINE(547)
											set_ite = set_ite->prev;
										}
									}
									else{
										HX_STACK_LINE(550)
										while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
											HX_STACK_LINE(550)
											set_ite = set_ite->parent;
										}
										HX_STACK_LINE(551)
										set_ite = set_ite->parent;
									}
								}
							}
							HX_STACK_LINE(556)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(523)
				::zpp_nape::geom::ZPP_PartitionVertex e = _Function_3_1::Block(v);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(558)
				if (((e != null()))){
					HX_STACK_LINE(560)
					if (((e->helper == null()))){
						HX_STACK_LINE(560)
						hx::Throw (HX_CSTRING("Fatal error (2): Polygon is not weakly-simple and clockwise"));
					}
					HX_STACK_LINE(562)
					poly->add_diagonal(v,e->helper);
					HX_STACK_LINE(563)
					e->helper = v;
				}
				HX_STACK_LINE(565)
				v->node = ::zpp_nape::geom::ZPP_Monotone_obj::edges->insert(v);
				HX_STACK_LINE(566)
				v->helper = v;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(567)
				::zpp_nape::geom::ZPP_PartitionVertex e = v->prev;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(569)
				if (((e->helper == null()))){
					HX_STACK_LINE(569)
					hx::Throw (HX_CSTRING("Fatal error (3): Polygon is not weakly-simple and clockwise"));
				}
				HX_STACK_LINE(571)
				if (((e->helper->type == (int)2))){
					HX_STACK_LINE(571)
					poly->add_diagonal(v,e->helper);
				}
				HX_STACK_LINE(574)
				::zpp_nape::geom::ZPP_Monotone_obj::edges->remove_node(e->node);
				HX_STACK_LINE(576)
				e->helper = null();
				struct _Function_3_1{
					inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &v){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Monotone.hx",578);
						{
							HX_STACK_LINE(579)
							::zpp_nape::geom::ZPP_PartitionVertex ret = null();		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(580)
							if ((!(::zpp_nape::geom::ZPP_Monotone_obj::edges->empty()))){
								HX_STACK_LINE(590)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = ::zpp_nape::geom::ZPP_Monotone_obj::edges->parent;		HX_STACK_VAR(set_ite,"set_ite");
								HX_STACK_LINE(591)
								while(((set_ite->prev != null()))){
									HX_STACK_LINE(591)
									set_ite = set_ite->prev;
								}
								HX_STACK_LINE(592)
								while(((set_ite != null()))){
									HX_STACK_LINE(593)
									::zpp_nape::geom::ZPP_PartitionVertex elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
									HX_STACK_LINE(594)
									if ((!(::zpp_nape::geom::ZPP_PartitionVertex_obj::vert_lt(elt,v)))){
										HX_STACK_LINE(596)
										ret = elt;
										HX_STACK_LINE(597)
										break;
									}
									HX_STACK_LINE(600)
									if (((set_ite->next != null()))){
										HX_STACK_LINE(601)
										set_ite = set_ite->next;
										HX_STACK_LINE(602)
										while(((set_ite->prev != null()))){
											HX_STACK_LINE(602)
											set_ite = set_ite->prev;
										}
									}
									else{
										HX_STACK_LINE(605)
										while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
											HX_STACK_LINE(605)
											set_ite = set_ite->parent;
										}
										HX_STACK_LINE(606)
										set_ite = set_ite->parent;
									}
								}
							}
							HX_STACK_LINE(611)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(578)
				::zpp_nape::geom::ZPP_PartitionVertex e1 = _Function_3_1::Block(v);		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(613)
				if (((e1 != null()))){
					HX_STACK_LINE(615)
					if (((e1->helper == null()))){
						HX_STACK_LINE(615)
						hx::Throw (HX_CSTRING("Fatal error (4): Polygon is not weakly-simple and clockwise"));
					}
					HX_STACK_LINE(617)
					if (((e1->helper->type == (int)2))){
						HX_STACK_LINE(617)
						poly->add_diagonal(v,e1->helper);
					}
					HX_STACK_LINE(620)
					e1->helper = v;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(622)
				::zpp_nape::geom::ZPP_PartitionVertex pre = v->prev;		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(623)
				if ((::zpp_nape::geom::ZPP_Monotone_obj::left_vertex(v))){
					HX_STACK_LINE(625)
					if (((pre->helper == null()))){
						HX_STACK_LINE(625)
						hx::Throw (HX_CSTRING("Fatal error (5): Polygon is not weakly-simple and clockwise"));
					}
					HX_STACK_LINE(627)
					if (((pre->helper->type == (int)2))){
						HX_STACK_LINE(627)
						poly->add_diagonal(v,pre->helper);
					}
					HX_STACK_LINE(628)
					::zpp_nape::geom::ZPP_Monotone_obj::edges->remove_node(pre->node);
					HX_STACK_LINE(630)
					pre->helper = null();
					HX_STACK_LINE(632)
					v->node = ::zpp_nape::geom::ZPP_Monotone_obj::edges->insert(v);
					HX_STACK_LINE(633)
					v->helper = v;
				}
				else{
					struct _Function_4_1{
						inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &v){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Monotone.hx",636);
							{
								HX_STACK_LINE(637)
								::zpp_nape::geom::ZPP_PartitionVertex ret = null();		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(638)
								if ((!(::zpp_nape::geom::ZPP_Monotone_obj::edges->empty()))){
									HX_STACK_LINE(648)
									::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = ::zpp_nape::geom::ZPP_Monotone_obj::edges->parent;		HX_STACK_VAR(set_ite,"set_ite");
									HX_STACK_LINE(649)
									while(((set_ite->prev != null()))){
										HX_STACK_LINE(649)
										set_ite = set_ite->prev;
									}
									HX_STACK_LINE(650)
									while(((set_ite != null()))){
										HX_STACK_LINE(651)
										::zpp_nape::geom::ZPP_PartitionVertex elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
										HX_STACK_LINE(652)
										if ((!(::zpp_nape::geom::ZPP_PartitionVertex_obj::vert_lt(elt,v)))){
											HX_STACK_LINE(654)
											ret = elt;
											HX_STACK_LINE(655)
											break;
										}
										HX_STACK_LINE(658)
										if (((set_ite->next != null()))){
											HX_STACK_LINE(659)
											set_ite = set_ite->next;
											HX_STACK_LINE(660)
											while(((set_ite->prev != null()))){
												HX_STACK_LINE(660)
												set_ite = set_ite->prev;
											}
										}
										else{
											HX_STACK_LINE(663)
											while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
												HX_STACK_LINE(663)
												set_ite = set_ite->parent;
											}
											HX_STACK_LINE(664)
											set_ite = set_ite->parent;
										}
									}
								}
								HX_STACK_LINE(669)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(636)
					::zpp_nape::geom::ZPP_PartitionVertex e = _Function_4_1::Block(v);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(672)
					if (((bool((e == null())) || bool((e->helper == null()))))){
						HX_STACK_LINE(672)
						hx::Throw (HX_CSTRING("Fatal error (6): Polygon is not weakly-simple and clockwise"));
					}
					HX_STACK_LINE(674)
					if (((e->helper->type == (int)2))){
						HX_STACK_LINE(674)
						poly->add_diagonal(v,e->helper);
					}
					HX_STACK_LINE(677)
					e->helper = v;
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(689)
	return poly;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Monotone_obj,decompose,return )


ZPP_Monotone_obj::ZPP_Monotone_obj()
{
}

void ZPP_Monotone_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Monotone);
	HX_MARK_END_CLASS();
}

void ZPP_Monotone_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_Monotone_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"below") ) { return below_dyn(); }
		if (HX_FIELD_EQ(inName,"above") ) { return above_dyn(); }
		if (HX_FIELD_EQ(inName,"queue") ) { return queue; }
		if (HX_FIELD_EQ(inName,"edges") ) { return edges; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bisector") ) { return bisector_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getShared") ) { return getShared_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMonotone") ) { return isMonotone_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"left_vertex") ) { return left_vertex_dyn(); }
		if (HX_FIELD_EQ(inName,"sharedPPoly") ) { return sharedPPoly; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Monotone_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { queue=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"edges") ) { edges=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sharedPPoly") ) { sharedPPoly=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionedPoly >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Monotone_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("bisector"),
	HX_CSTRING("below"),
	HX_CSTRING("above"),
	HX_CSTRING("left_vertex"),
	HX_CSTRING("isMonotone"),
	HX_CSTRING("sharedPPoly"),
	HX_CSTRING("getShared"),
	HX_CSTRING("queue"),
	HX_CSTRING("edges"),
	HX_CSTRING("decompose"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Monotone_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Monotone_obj::sharedPPoly,"sharedPPoly");
	HX_MARK_MEMBER_NAME(ZPP_Monotone_obj::queue,"queue");
	HX_MARK_MEMBER_NAME(ZPP_Monotone_obj::edges,"edges");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Monotone_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Monotone_obj::sharedPPoly,"sharedPPoly");
	HX_VISIT_MEMBER_NAME(ZPP_Monotone_obj::queue,"queue");
	HX_VISIT_MEMBER_NAME(ZPP_Monotone_obj::edges,"edges");
};

Class ZPP_Monotone_obj::__mClass;

void ZPP_Monotone_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Monotone"), hx::TCanCast< ZPP_Monotone_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Monotone_obj::__boot()
{
	queue= null();
	edges= null();
}

} // end namespace zpp_nape
} // end namespace geom
