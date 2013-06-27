#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
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

Void ZPP_PartitionVertex_obj::__construct()
{
HX_STACK_PUSH("ZPP_PartitionVertex::new","zpp_nape/geom/PartitionedPoly.hx",174);
{
	HX_STACK_LINE(517)
	this->node = null();
	HX_STACK_LINE(210)
	this->prev = null();
	HX_STACK_LINE(209)
	this->next = null();
	HX_STACK_LINE(184)
	this->rightchain = false;
	HX_STACK_LINE(183)
	this->helper = null();
	HX_STACK_LINE(182)
	this->type = (int)0;
	HX_STACK_LINE(181)
	this->diagonals = null();
	HX_STACK_LINE(180)
	this->forced = false;
	HX_STACK_LINE(179)
	this->y = 0.0;
	HX_STACK_LINE(178)
	this->x = 0.0;
	HX_STACK_LINE(177)
	this->mag = (int)0;
	HX_STACK_LINE(175)
	this->id = (int)0;
	HX_STACK_LINE(212)
	this->id = (::zpp_nape::geom::ZPP_PartitionVertex_obj::nextId)++;
	HX_STACK_LINE(213)
	this->diagonals = ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__new();
}
;
	return null();
}

ZPP_PartitionVertex_obj::~ZPP_PartitionVertex_obj() { }

Dynamic ZPP_PartitionVertex_obj::__CreateEmpty() { return  new ZPP_PartitionVertex_obj; }
hx::ObjectPtr< ZPP_PartitionVertex_obj > ZPP_PartitionVertex_obj::__new()
{  hx::ObjectPtr< ZPP_PartitionVertex_obj > result = new ZPP_PartitionVertex_obj();
	result->__construct();
	return result;}

Dynamic ZPP_PartitionVertex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PartitionVertex_obj > result = new ZPP_PartitionVertex_obj();
	result->__construct();
	return result;}

Void ZPP_PartitionVertex_obj::sort( ){
{
		HX_STACK_PUSH("ZPP_PartitionVertex::sort","zpp_nape/geom/PartitionedPoly.hx",314);
		HX_STACK_THIS(this);
		HX_STACK_LINE(315)
		Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
		HX_STACK_LINE(316)
		Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
		HX_STACK_LINE(317)
		Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(318)
		Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
		struct _Function_1_1{
			inline static int Block( Float &vx,::zpp_nape::geom::ZPP_PartitionVertex_obj *__this,Float &uy,Float &ux,Float &vy){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",319);
				{
					HX_STACK_LINE(320)
					{
						HX_STACK_LINE(321)
						ux = (__this->prev->x - __this->x);
						HX_STACK_LINE(322)
						uy = (__this->prev->y - __this->y);
					}
					HX_STACK_LINE(324)
					{
						HX_STACK_LINE(325)
						vx = (__this->next->x - __this->x);
						HX_STACK_LINE(326)
						vy = (__this->next->y - __this->y);
					}
					HX_STACK_LINE(328)
					Float ret = ((vy * ux) - (vx * uy));		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(329)
					return (  (((ret > (int)0))) ? int((int)-1) : int((  (((ret == (int)0))) ? int((int)0) : int((int)1) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(319)
		int vorient = _Function_1_1::Block(vx,this,uy,ux,vy);		HX_STACK_VAR(vorient,"vorient");
		HX_STACK_LINE(339)
		{
			HX_STACK_LINE(340)
			::zpp_nape::util::ZNPList_ZPP_PartitionVertex xxlist = this->diagonals;		HX_STACK_VAR(xxlist,"xxlist");
			HX_STACK_LINE(341)
			if (((bool(!(((xxlist->head == null())))) && bool((xxlist->head->next != null()))))){
				HX_STACK_LINE(342)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex head = xxlist->head;		HX_STACK_VAR(head,"head");
				HX_STACK_LINE(343)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tail = null();		HX_STACK_VAR(tail,"tail");
				HX_STACK_LINE(344)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex left = null();		HX_STACK_VAR(left,"left");
				HX_STACK_LINE(345)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex right = null();		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(346)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex nxt = null();		HX_STACK_VAR(nxt,"nxt");
				HX_STACK_LINE(347)
				int listSize = (int)1;		HX_STACK_VAR(listSize,"listSize");
				HX_STACK_LINE(348)
				int numMerges;		HX_STACK_VAR(numMerges,"numMerges");
				int leftSize;		HX_STACK_VAR(leftSize,"leftSize");
				int rightSize;		HX_STACK_VAR(rightSize,"rightSize");
				HX_STACK_LINE(349)
				do{
					HX_STACK_LINE(350)
					numMerges = (int)0;
					HX_STACK_LINE(351)
					left = head;
					HX_STACK_LINE(352)
					tail = head = null();
					HX_STACK_LINE(353)
					while(((left != null()))){
						HX_STACK_LINE(354)
						(numMerges)++;
						HX_STACK_LINE(355)
						right = left;
						HX_STACK_LINE(356)
						leftSize = (int)0;
						HX_STACK_LINE(357)
						rightSize = listSize;
						HX_STACK_LINE(358)
						while(((bool((right != null())) && bool((leftSize < listSize))))){
							HX_STACK_LINE(359)
							(leftSize)++;
							HX_STACK_LINE(360)
							right = right->next;
						}
						HX_STACK_LINE(362)
						while(((bool((leftSize > (int)0)) || bool((bool((rightSize > (int)0)) && bool((right != null()))))))){
							HX_STACK_LINE(363)
							if (((leftSize == (int)0))){
								HX_STACK_LINE(364)
								nxt = right;
								HX_STACK_LINE(365)
								right = right->next;
								HX_STACK_LINE(366)
								(rightSize)--;
							}
							else{
								HX_STACK_LINE(368)
								if (((bool((rightSize == (int)0)) || bool((right == null()))))){
									HX_STACK_LINE(369)
									nxt = left;
									HX_STACK_LINE(370)
									left = left->next;
									HX_STACK_LINE(371)
									(leftSize)--;
								}
								else{
									struct _Function_8_1{
										inline static int Block( Float &vx,::zpp_nape::geom::ZPP_PartitionVertex_obj *__this,Float &uy,Float &ux,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &left,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &right,Float &vy){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",375);
											{
												HX_STACK_LINE(376)
												{
													HX_STACK_LINE(377)
													ux = (left->elt->x - __this->x);
													HX_STACK_LINE(378)
													uy = (left->elt->y - __this->y);
												}
												HX_STACK_LINE(380)
												{
													HX_STACK_LINE(381)
													vx = (right->elt->x - __this->x);
													HX_STACK_LINE(382)
													vy = (right->elt->y - __this->y);
												}
												HX_STACK_LINE(384)
												Float ret = ((vy * ux) - (vx * uy));		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(385)
												return (  (((ret > (int)0))) ? int((int)-1) : int((  (((ret == (int)0))) ? int((int)0) : int((int)1) )) );
											}
											return null();
										}
									};
									struct _Function_8_2{
										inline static bool Block( Float &vx,::zpp_nape::geom::ZPP_PartitionVertex_obj *__this,Float &uy,Float &ux,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &left,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &right,Float &vy){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",388);
											{
												struct _Function_9_1{
													inline static int Block( Float &vx,::zpp_nape::geom::ZPP_PartitionVertex_obj *__this,Float &uy,Float &ux,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &left,Float &vy){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",389);
														{
															HX_STACK_LINE(390)
															{
																HX_STACK_LINE(391)
																ux = (__this->prev->x - __this->x);
																HX_STACK_LINE(392)
																uy = (__this->prev->y - __this->y);
															}
															HX_STACK_LINE(394)
															{
																HX_STACK_LINE(395)
																vx = (left->elt->x - __this->x);
																HX_STACK_LINE(396)
																vy = (left->elt->y - __this->y);
															}
															HX_STACK_LINE(398)
															Float ret = ((vy * ux) - (vx * uy));		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(399)
															return (  (((ret > (int)0))) ? int((int)-1) : int((  (((ret == (int)0))) ? int((int)0) : int((int)1) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(389)
												int d1 = _Function_9_1::Block(vx,__this,uy,ux,left,vy);		HX_STACK_VAR(d1,"d1");
												struct _Function_9_2{
													inline static int Block( Float &vx,::zpp_nape::geom::ZPP_PartitionVertex_obj *__this,Float &uy,Float &ux,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &right,Float &vy){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",401);
														{
															HX_STACK_LINE(402)
															{
																HX_STACK_LINE(403)
																ux = (__this->prev->x - __this->x);
																HX_STACK_LINE(404)
																uy = (__this->prev->y - __this->y);
															}
															HX_STACK_LINE(406)
															{
																HX_STACK_LINE(407)
																vx = (right->elt->x - __this->x);
																HX_STACK_LINE(408)
																vy = (right->elt->y - __this->y);
															}
															HX_STACK_LINE(410)
															Float ret = ((vy * ux) - (vx * uy));		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(411)
															return (  (((ret > (int)0))) ? int((int)-1) : int((  (((ret == (int)0))) ? int((int)0) : int((int)1) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(401)
												int d2 = _Function_9_2::Block(vx,__this,uy,ux,right,vy);		HX_STACK_VAR(d2,"d2");
												struct _Function_9_3{
													inline static int Block( Float &vx,::zpp_nape::geom::ZPP_PartitionVertex_obj *__this,Float &uy,Float &ux,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &left,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &right,Float &vy){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",414);
														{
															HX_STACK_LINE(415)
															{
																HX_STACK_LINE(416)
																ux = (left->elt->x - __this->x);
																HX_STACK_LINE(417)
																uy = (left->elt->y - __this->y);
															}
															HX_STACK_LINE(419)
															{
																HX_STACK_LINE(420)
																vx = (right->elt->x - __this->x);
																HX_STACK_LINE(421)
																vy = (right->elt->y - __this->y);
															}
															HX_STACK_LINE(423)
															Float ret = ((vy * ux) - (vx * uy));		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(424)
															return (  (((ret > (int)0))) ? int((int)-1) : int((  (((ret == (int)0))) ? int((int)0) : int((int)1) )) );
														}
														return null();
													}
												};
												struct _Function_9_4{
													inline static bool Block( Float &vx,::zpp_nape::geom::ZPP_PartitionVertex_obj *__this,Float &uy,Float &ux,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &left,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &right,Float &vy){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",430);
														{
															HX_STACK_LINE(431)
															{
																HX_STACK_LINE(432)
																ux = (__this->x - __this->prev->x);
																HX_STACK_LINE(433)
																uy = (__this->y - __this->prev->y);
															}
															HX_STACK_LINE(435)
															{
																HX_STACK_LINE(436)
																vx = (left->elt->x - __this->x);
																HX_STACK_LINE(437)
																vy = (left->elt->y - __this->y);
															}
															HX_STACK_LINE(439)
															Float d11 = ((ux * vx) + (uy * vy));		HX_STACK_VAR(d11,"d11");
															HX_STACK_LINE(440)
															{
																HX_STACK_LINE(441)
																vx = (right->elt->x - __this->x);
																HX_STACK_LINE(442)
																vy = (right->elt->y - __this->y);
															}
															HX_STACK_LINE(444)
															Float d21 = ((ux * vx) + (uy * vy));		HX_STACK_VAR(d21,"d21");
															HX_STACK_LINE(445)
															return (  (((bool((d11 < (int)0)) && bool((d21 > (int)0))))) ? bool(true) : bool((  (((bool((d21 < (int)0)) && bool((d11 > (int)0))))) ? bool(false) : bool(true) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(413)
												return (  (((bool(((d1 * d2) == (int)1)) || bool((bool(((d1 * d2) == (int)0)) && bool(((bool((d1 == (int)1)) || bool((d2 == (int)1)))))))))) ? bool((_Function_9_3::Block(vx,__this,uy,ux,left,right,vy) == (int)1)) : bool((  (((bool((d1 == (int)-1)) || bool((d2 == (int)-1))))) ? bool((d2 == (int)-1)) : bool((  (((bool((d1 == (int)0)) && bool((d2 == (int)0))))) ? bool(_Function_9_4::Block(vx,__this,uy,ux,left,right,vy)) : bool(true) )) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(373)
									if (((  (((vorient == (int)1))) ? bool((_Function_8_1::Block(vx,this,uy,ux,left,right,vy) == (int)1)) : bool(_Function_8_2::Block(vx,this,uy,ux,left,right,vy)) ))){
										HX_STACK_LINE(470)
										nxt = left;
										HX_STACK_LINE(471)
										left = left->next;
										HX_STACK_LINE(472)
										(leftSize)--;
									}
									else{
										HX_STACK_LINE(475)
										nxt = right;
										HX_STACK_LINE(476)
										right = right->next;
										HX_STACK_LINE(477)
										(rightSize)--;
									}
								}
							}
							HX_STACK_LINE(479)
							if (((tail != null()))){
								HX_STACK_LINE(479)
								tail->next = nxt;
							}
							else{
								HX_STACK_LINE(480)
								head = nxt;
							}
							HX_STACK_LINE(481)
							tail = nxt;
						}
						HX_STACK_LINE(483)
						left = right;
					}
					HX_STACK_LINE(485)
					tail->next = null();
					HX_STACK_LINE(486)
					hx::ShlEq(listSize,(int)1);
				}
while(((numMerges > (int)1)));
				HX_STACK_LINE(489)
				{
					HX_STACK_LINE(489)
					xxlist->head = head;
					HX_STACK_LINE(489)
					xxlist->modified = true;
					HX_STACK_LINE(489)
					xxlist->pushmod = true;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionVertex_obj,sort,(void))

::zpp_nape::geom::ZPP_PartitionVertex ZPP_PartitionVertex_obj::copy( ){
	HX_STACK_PUSH("ZPP_PartitionVertex::copy","zpp_nape/geom/PartitionedPoly.hx",272);
	HX_STACK_THIS(this);
	HX_STACK_LINE(273)
	::zpp_nape::geom::ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(274)
	{
		HX_STACK_LINE(275)
		if (((::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool == null()))){
			HX_STACK_LINE(275)
			ret = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();
		}
		else{
			HX_STACK_LINE(282)
			ret = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
			HX_STACK_LINE(283)
			::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret->next;
			HX_STACK_LINE(284)
			ret->next = null();
		}
		HX_STACK_LINE(289)
		Dynamic();
	}
	HX_STACK_LINE(291)
	{
		HX_STACK_LINE(292)
		ret->x = this->x;
		HX_STACK_LINE(293)
		ret->y = this->y;
		HX_STACK_LINE(302)
		{
		}
	}
	HX_STACK_LINE(311)
	ret->forced = this->forced;
	HX_STACK_LINE(312)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionVertex_obj,copy,return )

Void ZPP_PartitionVertex_obj::free( ){
{
		HX_STACK_PUSH("ZPP_PartitionVertex::free","zpp_nape/geom/PartitionedPoly.hx",218);
		HX_STACK_THIS(this);
		HX_STACK_LINE(219)
		this->helper = null();
		HX_STACK_LINE(220)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionVertex_obj,free,(void))

Void ZPP_PartitionVertex_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_PartitionVertex::alloc","zpp_nape/geom/PartitionedPoly.hx",216);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionVertex_obj,alloc,(void))

int ZPP_PartitionVertex_obj::nextId;

::zpp_nape::geom::ZPP_PartitionVertex ZPP_PartitionVertex_obj::zpp_pool;

::zpp_nape::geom::ZPP_PartitionVertex ZPP_PartitionVertex_obj::get( ::zpp_nape::geom::ZPP_GeomVert x){
	HX_STACK_PUSH("ZPP_PartitionVertex::get","zpp_nape/geom/PartitionedPoly.hx",230);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(231)
	::zpp_nape::geom::ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(233)
		if (((::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool == null()))){
			HX_STACK_LINE(233)
			ret = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();
		}
		else{
			HX_STACK_LINE(240)
			ret = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
			HX_STACK_LINE(241)
			::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret->next;
			HX_STACK_LINE(242)
			ret->next = null();
		}
		HX_STACK_LINE(247)
		Dynamic();
	}
	HX_STACK_LINE(249)
	{
		HX_STACK_LINE(250)
		ret->x = x->x;
		HX_STACK_LINE(251)
		ret->y = x->y;
		HX_STACK_LINE(260)
		{
		}
	}
	HX_STACK_LINE(269)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionVertex_obj,get,return )

Float ZPP_PartitionVertex_obj::rightdistance( ::zpp_nape::geom::ZPP_PartitionVertex edge,::zpp_nape::geom::ZPP_PartitionVertex vert){
	HX_STACK_PUSH("ZPP_PartitionVertex::rightdistance","zpp_nape/geom/PartitionedPoly.hx",493);
	HX_STACK_ARG(edge,"edge");
	HX_STACK_ARG(vert,"vert");
	HX_STACK_LINE(494)
	bool flip = (edge->next->y > edge->y);		HX_STACK_VAR(flip,"flip");
	HX_STACK_LINE(495)
	Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(496)
	Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(497)
	{
		HX_STACK_LINE(498)
		ux = (edge->next->x - edge->x);
		HX_STACK_LINE(499)
		uy = (edge->next->y - edge->y);
	}
	HX_STACK_LINE(501)
	Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(502)
	Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(503)
	{
		HX_STACK_LINE(504)
		vx = (vert->x - edge->x);
		HX_STACK_LINE(505)
		vy = (vert->y - edge->y);
	}
	HX_STACK_LINE(507)
	return (((  ((flip)) ? Float(-1.0) : Float(1.0) )) * (((vy * ux) - (vx * uy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionVertex_obj,rightdistance,return )

bool ZPP_PartitionVertex_obj::vert_lt( ::zpp_nape::geom::ZPP_PartitionVertex edge,::zpp_nape::geom::ZPP_PartitionVertex vert){
	HX_STACK_PUSH("ZPP_PartitionVertex::vert_lt","zpp_nape/geom/PartitionedPoly.hx",509);
	HX_STACK_ARG(edge,"edge");
	HX_STACK_ARG(vert,"vert");
	struct _Function_1_1{
		inline static Float Block( ::zpp_nape::geom::ZPP_PartitionVertex &edge){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",510);
			{
				HX_STACK_LINE(511)
				Float x = edge->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(512)
				Float y = edge->next->x;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(513)
				return (  (((x < y))) ? Float(x) : Float(y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(509)
	return (  (((bool((vert == edge)) || bool((vert == edge->next))))) ? bool(true) : bool((  (((edge->y == edge->next->y))) ? bool((_Function_1_1::Block(edge) <= vert->x)) : bool((::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(edge,vert) <= 0.0)) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionVertex_obj,vert_lt,return )

Void ZPP_PartitionVertex_obj::edge_swap( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
{
		HX_STACK_PUSH("ZPP_PartitionVertex::edge_swap","zpp_nape/geom/PartitionedPoly.hx",518);
		HX_STACK_ARG(p,"p");
		HX_STACK_ARG(q,"q");
		HX_STACK_LINE(519)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t = p->node;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(520)
		p->node = q->node;
		HX_STACK_LINE(521)
		q->node = t;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionVertex_obj,edge_swap,(void))

bool ZPP_PartitionVertex_obj::edge_lt( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
	HX_STACK_PUSH("ZPP_PartitionVertex::edge_lt","zpp_nape/geom/PartitionedPoly.hx",523);
	HX_STACK_ARG(p,"p");
	HX_STACK_ARG(q,"q");
	HX_STACK_LINE(524)
	if (((bool((p == q)) && bool((p->next == q->next))))){
		HX_STACK_LINE(524)
		return false;
	}
	HX_STACK_LINE(535)
	if (((p == q->next))){
		HX_STACK_LINE(535)
		return !(::zpp_nape::geom::ZPP_PartitionVertex_obj::vert_lt(p,q));
	}
	else{
		HX_STACK_LINE(536)
		if (((q == p->next))){
			HX_STACK_LINE(536)
			return ::zpp_nape::geom::ZPP_PartitionVertex_obj::vert_lt(q,p);
		}
		else{
			HX_STACK_LINE(537)
			if (((p->y == p->next->y))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::geom::ZPP_PartitionVertex &p){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",538);
						{
							HX_STACK_LINE(539)
							Float x = p->x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(540)
							Float y = p->next->x;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(541)
							return (  (((x > y))) ? Float(x) : Float(y) );
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static Float Block( ::zpp_nape::geom::ZPP_PartitionVertex &q){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",542);
						{
							HX_STACK_LINE(543)
							Float x = q->x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(544)
							Float y = q->next->x;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(545)
							return (  (((x > y))) ? Float(x) : Float(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(537)
				return (  (((q->y == q->next->y))) ? bool((_Function_4_1::Block(p) > _Function_4_2::Block(q))) : bool((bool((::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(q,p) > 0.0)) || bool((::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(q,p->next) > 0.0)))) );
			}
			else{
				HX_STACK_LINE(549)
				Float qRight = ::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(p,q);		HX_STACK_VAR(qRight,"qRight");
				HX_STACK_LINE(550)
				Float qNextRight = ::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(p,q->next);		HX_STACK_VAR(qNextRight,"qNextRight");
				HX_STACK_LINE(551)
				if (((bool((qRight == (int)0)) && bool((qNextRight == (int)0))))){
					struct _Function_5_1{
						inline static Float Block( ::zpp_nape::geom::ZPP_PartitionVertex &p){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",552);
							{
								HX_STACK_LINE(553)
								Float x = p->x;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(554)
								Float y = p->next->x;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(555)
								return (  (((x > y))) ? Float(x) : Float(y) );
							}
							return null();
						}
					};
					struct _Function_5_2{
						inline static Float Block( ::zpp_nape::geom::ZPP_PartitionVertex &q){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",556);
							{
								HX_STACK_LINE(557)
								Float x = q->x;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(558)
								Float y = q->next->x;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(559)
								return (  (((x > y))) ? Float(x) : Float(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(551)
					return (_Function_5_1::Block(p) > _Function_5_2::Block(q));
				}
				HX_STACK_LINE(562)
				if ((((qRight * qNextRight) >= (int)0))){
					HX_STACK_LINE(562)
					return (bool((qRight < (int)0)) || bool((qNextRight < (int)0)));
				}
				HX_STACK_LINE(563)
				Float pRight = ::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(q,p);		HX_STACK_VAR(pRight,"pRight");
				HX_STACK_LINE(564)
				Float pNextRight = ::zpp_nape::geom::ZPP_PartitionVertex_obj::rightdistance(q,p->next);		HX_STACK_VAR(pNextRight,"pNextRight");
				HX_STACK_LINE(573)
				if ((((pRight * pNextRight) >= (int)0))){
					HX_STACK_LINE(573)
					return (bool((pRight > (int)0)) || bool((pNextRight > (int)0)));
				}
				HX_STACK_LINE(582)
				return false;
			}
		}
	}
	HX_STACK_LINE(535)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionVertex_obj,edge_lt,return )


ZPP_PartitionVertex_obj::ZPP_PartitionVertex_obj()
{
}

void ZPP_PartitionVertex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PartitionVertex);
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(rightchain,"rightchain");
	HX_MARK_MEMBER_NAME(helper,"helper");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(diagonals,"diagonals");
	HX_MARK_MEMBER_NAME(forced,"forced");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(mag,"mag");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void ZPP_PartitionVertex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(rightchain,"rightchain");
	HX_VISIT_MEMBER_NAME(helper,"helper");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(diagonals,"diagonals");
	HX_VISIT_MEMBER_NAME(forced,"forced");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(mag,"mag");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic ZPP_PartitionVertex_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"mag") ) { return mag; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nextId") ) { return nextId; }
		if (HX_FIELD_EQ(inName,"helper") ) { return helper; }
		if (HX_FIELD_EQ(inName,"forced") ) { return forced; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vert_lt") ) { return vert_lt_dyn(); }
		if (HX_FIELD_EQ(inName,"edge_lt") ) { return edge_lt_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"edge_swap") ) { return edge_swap_dyn(); }
		if (HX_FIELD_EQ(inName,"diagonals") ) { return diagonals; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightchain") ) { return rightchain; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rightdistance") ) { return rightdistance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_PartitionVertex_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mag") ) { mag=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nextId") ) { nextId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"helper") ) { helper=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forced") ) { forced=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"diagonals") ) { diagonals=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_PartitionVertex >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightchain") ) { rightchain=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_PartitionVertex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("node"));
	outFields->push(HX_CSTRING("prev"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("rightchain"));
	outFields->push(HX_CSTRING("helper"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("diagonals"));
	outFields->push(HX_CSTRING("forced"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("mag"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nextId"),
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	HX_CSTRING("rightdistance"),
	HX_CSTRING("vert_lt"),
	HX_CSTRING("edge_swap"),
	HX_CSTRING("edge_lt"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("node"),
	HX_CSTRING("sort"),
	HX_CSTRING("copy"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("prev"),
	HX_CSTRING("next"),
	HX_CSTRING("rightchain"),
	HX_CSTRING("helper"),
	HX_CSTRING("type"),
	HX_CSTRING("diagonals"),
	HX_CSTRING("forced"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("mag"),
	HX_CSTRING("id"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_PartitionVertex_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_PartitionVertex_obj::nextId,"nextId");
	HX_MARK_MEMBER_NAME(ZPP_PartitionVertex_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PartitionVertex_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionVertex_obj::nextId,"nextId");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionVertex_obj::zpp_pool,"zpp_pool");
};

Class ZPP_PartitionVertex_obj::__mClass;

void ZPP_PartitionVertex_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_PartitionVertex"), hx::TCanCast< ZPP_PartitionVertex_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_PartitionVertex_obj::__boot()
{
	nextId= (int)0;
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
