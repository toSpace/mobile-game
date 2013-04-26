#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_Convex
#include <zpp_nape/geom/ZPP_Convex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Convex_obj::__construct()
{
	return null();
}

ZPP_Convex_obj::~ZPP_Convex_obj() { }

Dynamic ZPP_Convex_obj::__CreateEmpty() { return  new ZPP_Convex_obj; }
hx::ObjectPtr< ZPP_Convex_obj > ZPP_Convex_obj::__new()
{  hx::ObjectPtr< ZPP_Convex_obj > result = new ZPP_Convex_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Convex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Convex_obj > result = new ZPP_Convex_obj();
	result->__construct();
	return result;}

bool ZPP_Convex_obj::isinner( ::zpp_nape::geom::ZPP_PartitionVertex a,::zpp_nape::geom::ZPP_PartitionVertex b,::zpp_nape::geom::ZPP_PartitionVertex c){
	HX_STACK_PUSH("ZPP_Convex::isinner","zpp_nape/geom/Convex.hx",175);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(176)
	Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(177)
	Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(179)
		ux = (a->x - b->x);
		HX_STACK_LINE(180)
		uy = (a->y - b->y);
	}
	HX_STACK_LINE(182)
	Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(183)
	Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(185)
		vx = (c->x - b->x);
		HX_STACK_LINE(186)
		vy = (c->y - b->y);
	}
	HX_STACK_LINE(188)
	return (((vy * ux) - (vx * uy)) >= (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Convex_obj,isinner,return )

Void ZPP_Convex_obj::optimise( ::zpp_nape::geom::ZPP_PartitionedPoly P){
{
		HX_STACK_PUSH("ZPP_Convex::optimise","zpp_nape/geom/Convex.hx",190);
		HX_STACK_ARG(P,"P");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(192)
			::zpp_nape::geom::ZPP_PartitionVertex F = P->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(193)
			::zpp_nape::geom::ZPP_PartitionVertex L = P->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(194)
			if (((F != null()))){
				HX_STACK_LINE(195)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(196)
				do{
					HX_STACK_LINE(197)
					::zpp_nape::geom::ZPP_PartitionVertex p = nite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(198)
					p->sort();
					HX_STACK_LINE(201)
					nite = nite->next;
				}
while(((nite != L)));
			}
		}
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(207)
			::zpp_nape::geom::ZPP_PartitionVertex F = P->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(208)
			::zpp_nape::geom::ZPP_PartitionVertex L = P->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(209)
			if (((F != null()))){
				HX_STACK_LINE(210)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(211)
				do{
					HX_STACK_LINE(212)
					::zpp_nape::geom::ZPP_PartitionVertex p = nite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(215)
						::zpp_nape::geom::ZPP_PartitionVertex pright = p->prev;		HX_STACK_VAR(pright,"pright");
						HX_STACK_LINE(216)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ppre = null();		HX_STACK_VAR(ppre,"ppre");
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(218)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = p->diagonals->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(219)
							while(((cx_ite != null()))){
								HX_STACK_LINE(220)
								::zpp_nape::geom::ZPP_PartitionVertex pdiag = cx_ite->elt;		HX_STACK_VAR(pdiag,"pdiag");
								HX_STACK_LINE(221)
								{
									HX_STACK_LINE(222)
									::zpp_nape::geom::ZPP_PartitionVertex pleft = (  (((cx_ite->next == null()))) ? ::zpp_nape::geom::ZPP_PartitionVertex(p->next) : ::zpp_nape::geom::ZPP_PartitionVertex(cx_ite->next->elt) );		HX_STACK_VAR(pleft,"pleft");
									HX_STACK_LINE(223)
									if ((!(::zpp_nape::geom::ZPP_Convex_obj::isinner(pleft,p,pright)))){
										HX_STACK_LINE(224)
										ppre = cx_ite;
										HX_STACK_LINE(225)
										pright = pdiag;
										HX_STACK_LINE(226)
										{
											HX_STACK_LINE(227)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(228)
											continue;
										}
									}
									HX_STACK_LINE(231)
									bool removable = true;		HX_STACK_VAR(removable,"removable");
									HX_STACK_LINE(232)
									::zpp_nape::geom::ZPP_PartitionVertex q = pdiag;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(233)
									::zpp_nape::geom::ZPP_PartitionVertex qright = q->prev;		HX_STACK_VAR(qright,"qright");
									HX_STACK_LINE(234)
									::zpp_nape::util::ZNPNode_ZPP_PartitionVertex qpre = null();		HX_STACK_VAR(qpre,"qpre");
									HX_STACK_LINE(235)
									{
										HX_STACK_LINE(236)
										::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite1 = q->diagonals->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(237)
										while(((cx_ite1 != null()))){
											HX_STACK_LINE(238)
											::zpp_nape::geom::ZPP_PartitionVertex qdiag = cx_ite1->elt;		HX_STACK_VAR(qdiag,"qdiag");
											HX_STACK_LINE(239)
											{
												HX_STACK_LINE(240)
												if (((qdiag == p))){
													HX_STACK_LINE(241)
													::zpp_nape::geom::ZPP_PartitionVertex qleft = (  (((cx_ite1->next == null()))) ? ::zpp_nape::geom::ZPP_PartitionVertex(q->next) : ::zpp_nape::geom::ZPP_PartitionVertex(cx_ite1->next->elt) );		HX_STACK_VAR(qleft,"qleft");
													HX_STACK_LINE(242)
													removable = ::zpp_nape::geom::ZPP_Convex_obj::isinner(qleft,q,qright);
													HX_STACK_LINE(243)
													break;
												}
												HX_STACK_LINE(245)
												qright = qdiag;
												HX_STACK_LINE(246)
												qpre = cx_ite1;
											}
											HX_STACK_LINE(248)
											cx_ite1 = cx_ite1->next;
										}
									}
									HX_STACK_LINE(251)
									if ((removable)){
										HX_STACK_LINE(252)
										cx_ite = p->diagonals->erase(ppre);
										HX_STACK_LINE(253)
										q->diagonals->erase(qpre);
										HX_STACK_LINE(254)
										continue;
									}
									HX_STACK_LINE(256)
									pright = pdiag;
									HX_STACK_LINE(257)
									ppre = cx_ite;
								}
								HX_STACK_LINE(259)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(264)
					nite = nite->next;
				}
while(((nite != L)));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Convex_obj,optimise,(void))


ZPP_Convex_obj::ZPP_Convex_obj()
{
}

void ZPP_Convex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Convex);
	HX_MARK_END_CLASS();
}

void ZPP_Convex_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_Convex_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isinner") ) { return isinner_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"optimise") ) { return optimise_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Convex_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Convex_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isinner"),
	HX_CSTRING("optimise"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Convex_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Convex_obj::__mClass,"__mClass");
};

Class ZPP_Convex_obj::__mClass;

void ZPP_Convex_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Convex"), hx::TCanCast< ZPP_Convex_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Convex_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace geom
