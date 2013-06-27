#include <hxcpp.h>

#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomVert
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPList_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_PartitionedPoly_obj::__construct(::zpp_nape::geom::ZPP_GeomVert P)
{
HX_STACK_PUSH("ZPP_PartitionedPoly::new","zpp_nape/geom/PartitionedPoly.hx",587);
{
	HX_STACK_LINE(595)
	this->next = null();
	HX_STACK_LINE(588)
	this->vertices = null();
	HX_STACK_LINE(592)
	this->init(P);
}
;
	return null();
}

ZPP_PartitionedPoly_obj::~ZPP_PartitionedPoly_obj() { }

Dynamic ZPP_PartitionedPoly_obj::__CreateEmpty() { return  new ZPP_PartitionedPoly_obj; }
hx::ObjectPtr< ZPP_PartitionedPoly_obj > ZPP_PartitionedPoly_obj::__new(::zpp_nape::geom::ZPP_GeomVert P)
{  hx::ObjectPtr< ZPP_PartitionedPoly_obj > result = new ZPP_PartitionedPoly_obj();
	result->__construct(P);
	return result;}

Dynamic ZPP_PartitionedPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PartitionedPoly_obj > result = new ZPP_PartitionedPoly_obj();
	result->__construct(inArgs[0]);
	return result;}

::zpp_nape::geom::ZPP_PartitionVertex ZPP_PartitionedPoly_obj::pull( ::zpp_nape::geom::ZPP_PartitionVertex start,::zpp_nape::util::ZNPList_ZPP_GeomVert ret){
	HX_STACK_PUSH("ZPP_PartitionedPoly::pull","zpp_nape/geom/PartitionedPoly.hx",1218);
	HX_STACK_THIS(this);
	HX_STACK_ARG(start,"start");
	HX_STACK_ARG(ret,"ret");
	HX_STACK_LINE(1219)
	::zpp_nape::geom::ZPP_GeomVert poly = null();		HX_STACK_VAR(poly,"poly");
	HX_STACK_LINE(1220)
	::zpp_nape::geom::ZPP_PartitionVertex next = start;		HX_STACK_VAR(next,"next");
	HX_STACK_LINE(1221)
	do{
		struct _Function_2_1{
			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &poly,::zpp_nape::geom::ZPP_PartitionVertex &next){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1222);
				{
					struct _Function_3_1{
						inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_PartitionVertex &next){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1223);
							{
								HX_STACK_LINE(1223)
								::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1223)
								{
									HX_STACK_LINE(1223)
									if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
										HX_STACK_LINE(1223)
										ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
									}
									else{
										HX_STACK_LINE(1223)
										ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
										HX_STACK_LINE(1223)
										::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
										HX_STACK_LINE(1223)
										ret1->next = null();
									}
									HX_STACK_LINE(1223)
									ret1->forced = false;
								}
								HX_STACK_LINE(1223)
								{
									HX_STACK_LINE(1223)
									ret1->x = next->x;
									HX_STACK_LINE(1223)
									ret1->y = next->y;
									HX_STACK_LINE(1223)
									{
									}
								}
								HX_STACK_LINE(1223)
								return ret1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1223)
					::zpp_nape::geom::ZPP_GeomVert obj = _Function_3_1::Block(next);		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1224)
					if (((poly == null()))){
						HX_STACK_LINE(1224)
						poly = obj->prev = obj->next = obj;
					}
					else{
						HX_STACK_LINE(1226)
						obj->prev = poly;
						HX_STACK_LINE(1227)
						obj->next = poly->next;
						HX_STACK_LINE(1228)
						poly->next->prev = obj;
						HX_STACK_LINE(1229)
						poly->next = obj;
					}
					HX_STACK_LINE(1231)
					return obj;
				}
				return null();
			}
		};
		HX_STACK_LINE(1222)
		poly = _Function_2_1::Block(poly,next);
		HX_STACK_LINE(1233)
		poly->forced = next->forced;
		HX_STACK_LINE(1234)
		if ((!(((next->diagonals->head == null()))))){
			struct _Function_3_1{
				inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &next){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1235);
					{
						HX_STACK_LINE(1235)
						::zpp_nape::util::ZNPList_ZPP_PartitionVertex _this = next->diagonals;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1235)
						::zpp_nape::geom::ZPP_PartitionVertex ret1 = _this->head->elt;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1235)
						_this->pop();
						HX_STACK_LINE(1235)
						return ret1;
					}
					return null();
				}
			};
			HX_STACK_LINE(1235)
			::zpp_nape::geom::ZPP_PartitionVertex diag = _Function_3_1::Block(next);		HX_STACK_VAR(diag,"diag");
			HX_STACK_LINE(1236)
			if (((diag == start))){
				HX_STACK_LINE(1236)
				break;
			}
			else{
				HX_STACK_LINE(1239)
				next = this->pull(next,ret);
			}
		}
		else{
			HX_STACK_LINE(1241)
			next = next->next;
		}
	}
while(((next != start)));
	struct _Function_1_1{
		inline static Float Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1298);
			{
				HX_STACK_LINE(1323)
				Float area = 0.0;		HX_STACK_VAR(area,"area");
				HX_STACK_LINE(1324)
				{
					HX_STACK_LINE(1325)
					::zpp_nape::geom::ZPP_GeomVert F = poly;		HX_STACK_VAR(F,"F");
					HX_STACK_LINE(1326)
					::zpp_nape::geom::ZPP_GeomVert L = poly;		HX_STACK_VAR(L,"L");
					HX_STACK_LINE(1327)
					if (((F != null()))){
						HX_STACK_LINE(1328)
						::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
						HX_STACK_LINE(1329)
						do{
							HX_STACK_LINE(1330)
							::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(1331)
							hx::AddEq(area,(v->x * ((v->next->y - v->prev->y))));
							HX_STACK_LINE(1336)
							nite = nite->next;
						}
while(((nite != L)));
					}
				}
				HX_STACK_LINE(1341)
				return (area * 0.5);
			}
			return null();
		}
	};
	HX_STACK_LINE(1298)
	Float area = _Function_1_1::Block(poly);		HX_STACK_VAR(area,"area");
	HX_STACK_LINE(1343)
	if ((((area * area) >= (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1344);
				{
					HX_STACK_LINE(1345)
					::zpp_nape::geom::ZPP_GeomVert p = poly;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1346)
					bool skip = true;		HX_STACK_VAR(skip,"skip");
					HX_STACK_LINE(1347)
					while(((bool(skip) || bool((p != poly))))){
						HX_STACK_LINE(1348)
						skip = false;
						struct _Function_4_1{
							inline static Float Block( ::zpp_nape::geom::ZPP_GeomVert &p){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1349);
								{
									HX_STACK_LINE(1349)
									Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
									HX_STACK_LINE(1349)
									Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
									HX_STACK_LINE(1349)
									{
										HX_STACK_LINE(1349)
										dx = (p->x - p->next->x);
										HX_STACK_LINE(1349)
										dy = (p->y - p->next->y);
									}
									HX_STACK_LINE(1349)
									return ((dx * dx) + (dy * dy));
								}
								return null();
							}
						};
						HX_STACK_LINE(1349)
						if (((_Function_4_1::Block(p) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
							HX_STACK_LINE(1350)
							if (((p == poly))){
								HX_STACK_LINE(1351)
								poly = p->next;
								HX_STACK_LINE(1352)
								skip = true;
							}
							HX_STACK_LINE(1354)
							if ((p->forced)){
								HX_STACK_LINE(1354)
								p->next->forced = true;
							}
							struct _Function_5_1{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1364);
									{
										HX_STACK_LINE(1365)
										p->next = p->prev = null();
										HX_STACK_LINE(1367)
										return p = null();
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1369);
									{
										HX_STACK_LINE(1370)
										::zpp_nape::geom::ZPP_GeomVert retnodes = p->next;		HX_STACK_VAR(retnodes,"retnodes");
										HX_STACK_LINE(1371)
										p->prev->next = p->next;
										HX_STACK_LINE(1372)
										p->next->prev = p->prev;
										HX_STACK_LINE(1373)
										p->next = p->prev = null();
										HX_STACK_LINE(1375)
										p = null();
										HX_STACK_LINE(1376)
										return retnodes;
									}
									return null();
								}
							};
							HX_STACK_LINE(1355)
							p = (  (((bool((p != null())) && bool((p->prev == p))))) ? ::zpp_nape::geom::ZPP_GeomVert(_Function_5_1::Block(p)) : ::zpp_nape::geom::ZPP_GeomVert(_Function_5_2::Block(p)) );
							HX_STACK_LINE(1379)
							if (((p == null()))){
								HX_STACK_LINE(1380)
								poly = null();
								HX_STACK_LINE(1381)
								break;
							}
						}
						else{
							HX_STACK_LINE(1384)
							p = p->next;
						}
					}
					HX_STACK_LINE(1386)
					if (((poly != null()))){
						HX_STACK_LINE(1387)
						bool removed;		HX_STACK_VAR(removed,"removed");
						HX_STACK_LINE(1388)
						do{
							HX_STACK_LINE(1389)
							removed = false;
							HX_STACK_LINE(1390)
							p = poly;
							HX_STACK_LINE(1391)
							skip = true;
							HX_STACK_LINE(1392)
							while(((bool(skip) || bool((p != poly))))){
								HX_STACK_LINE(1393)
								skip = false;
								HX_STACK_LINE(1394)
								::zpp_nape::geom::ZPP_GeomVert pre = p->prev;		HX_STACK_VAR(pre,"pre");
								HX_STACK_LINE(1395)
								Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
								HX_STACK_LINE(1396)
								Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
								HX_STACK_LINE(1397)
								{
									HX_STACK_LINE(1398)
									ux = (p->x - pre->x);
									HX_STACK_LINE(1399)
									uy = (p->y - pre->y);
								}
								HX_STACK_LINE(1401)
								Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
								HX_STACK_LINE(1402)
								Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
								HX_STACK_LINE(1403)
								{
									HX_STACK_LINE(1404)
									vx = (p->next->x - p->x);
									HX_STACK_LINE(1405)
									vy = (p->next->y - p->y);
								}
								HX_STACK_LINE(1407)
								Float crs = ((vy * ux) - (vx * uy));		HX_STACK_VAR(crs,"crs");
								HX_STACK_LINE(1408)
								if ((((crs * crs) >= (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
									HX_STACK_LINE(1408)
									p = p->next;
								}
								else{
									HX_STACK_LINE(1412)
									if (((p == poly))){
										HX_STACK_LINE(1413)
										poly = p->next;
										HX_STACK_LINE(1414)
										skip = true;
									}
									struct _Function_7_1{
										inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1425);
											{
												HX_STACK_LINE(1426)
												p->next = p->prev = null();
												HX_STACK_LINE(1428)
												return p = null();
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1430);
											{
												HX_STACK_LINE(1431)
												::zpp_nape::geom::ZPP_GeomVert retnodes = p->next;		HX_STACK_VAR(retnodes,"retnodes");
												HX_STACK_LINE(1432)
												p->prev->next = p->next;
												HX_STACK_LINE(1433)
												p->next->prev = p->prev;
												HX_STACK_LINE(1434)
												p->next = p->prev = null();
												HX_STACK_LINE(1436)
												p = null();
												HX_STACK_LINE(1437)
												return retnodes;
											}
											return null();
										}
									};
									HX_STACK_LINE(1416)
									p = (  (((bool((p != null())) && bool((p->prev == p))))) ? ::zpp_nape::geom::ZPP_GeomVert(_Function_7_1::Block(p)) : ::zpp_nape::geom::ZPP_GeomVert(_Function_7_2::Block(p)) );
									HX_STACK_LINE(1440)
									removed = true;
									HX_STACK_LINE(1441)
									if (((p == null()))){
										HX_STACK_LINE(1442)
										removed = false;
										HX_STACK_LINE(1443)
										poly = null();
										HX_STACK_LINE(1444)
										break;
									}
								}
							}
						}
while((removed));
					}
					HX_STACK_LINE(1451)
					return (poly == null());
				}
				return null();
			}
		};
		HX_STACK_LINE(1343)
		if ((!(_Function_2_1::Block(poly)))){
			HX_STACK_LINE(1452)
			ret->add(poly);
		}
	}
	HX_STACK_LINE(1456)
	return next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionedPoly_obj,pull,return )

::zpp_nape::util::ZNPList_ZPP_GeomVert ZPP_PartitionedPoly_obj::extract( ::zpp_nape::util::ZNPList_ZPP_GeomVert ret){
	HX_STACK_PUSH("ZPP_PartitionedPoly::extract","zpp_nape/geom/PartitionedPoly.hx",1138);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ret,"ret");
	HX_STACK_LINE(1139)
	if (((ret == null()))){
		HX_STACK_LINE(1139)
		ret = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();
	}
	HX_STACK_LINE(1140)
	if (((this->vertices != null()))){
		HX_STACK_LINE(1141)
		{
			HX_STACK_LINE(1142)
			::zpp_nape::geom::ZPP_PartitionVertex F = this->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(1143)
			::zpp_nape::geom::ZPP_PartitionVertex L = this->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(1144)
			if (((F != null()))){
				HX_STACK_LINE(1145)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(1146)
				do{
					HX_STACK_LINE(1147)
					::zpp_nape::geom::ZPP_PartitionVertex c = nite;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(1148)
					c->sort();
					HX_STACK_LINE(1151)
					nite = nite->next;
				}
while(((nite != L)));
			}
		}
		HX_STACK_LINE(1156)
		this->pull(this->vertices,ret);
		HX_STACK_LINE(1157)
		while((!(((this->vertices == null()))))){
			struct _Function_3_1{
				inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionedPoly_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1167);
					{
						HX_STACK_LINE(1168)
						__this->vertices->next = __this->vertices->prev = null();
						HX_STACK_LINE(1169)
						{
							HX_STACK_LINE(1170)
							::zpp_nape::geom::ZPP_PartitionVertex o = __this->vertices;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1179)
							{
								HX_STACK_LINE(1179)
								o->helper = null();
								HX_STACK_LINE(1179)
								Dynamic();
							}
							HX_STACK_LINE(1180)
							o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1186)
						return __this->vertices = null();
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionedPoly_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1188);
					{
						HX_STACK_LINE(1189)
						::zpp_nape::geom::ZPP_PartitionVertex retnodes = __this->vertices->next;		HX_STACK_VAR(retnodes,"retnodes");
						HX_STACK_LINE(1190)
						__this->vertices->prev->next = __this->vertices->next;
						HX_STACK_LINE(1191)
						__this->vertices->next->prev = __this->vertices->prev;
						HX_STACK_LINE(1192)
						__this->vertices->next = __this->vertices->prev = null();
						HX_STACK_LINE(1193)
						{
							HX_STACK_LINE(1194)
							::zpp_nape::geom::ZPP_PartitionVertex o = __this->vertices;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1203)
							{
								HX_STACK_LINE(1203)
								o->helper = null();
								HX_STACK_LINE(1203)
								Dynamic();
							}
							HX_STACK_LINE(1204)
							o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(1205)
							::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1210)
						__this->vertices = null();
						HX_STACK_LINE(1211)
						return retnodes;
					}
					return null();
				}
			};
			HX_STACK_LINE(1158)
			this->vertices = (  (((bool((this->vertices != null())) && bool((this->vertices->prev == this->vertices))))) ? ::zpp_nape::geom::ZPP_PartitionVertex(_Function_3_1::Block(this)) : ::zpp_nape::geom::ZPP_PartitionVertex(_Function_3_2::Block(this)) );
		}
	}
	HX_STACK_LINE(1216)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionedPoly_obj,extract,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_PartitionedPoly_obj::pull_partitions( ::zpp_nape::geom::ZPP_PartitionVertex start,::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ret){
	HX_STACK_PUSH("ZPP_PartitionedPoly::pull_partitions","zpp_nape/geom/PartitionedPoly.hx",990);
	HX_STACK_THIS(this);
	HX_STACK_ARG(start,"start");
	HX_STACK_ARG(ret,"ret");
	HX_STACK_LINE(991)
	::zpp_nape::geom::ZPP_PartitionedPoly poly;		HX_STACK_VAR(poly,"poly");
	HX_STACK_LINE(992)
	{
		HX_STACK_LINE(993)
		if (((::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool == null()))){
			HX_STACK_LINE(993)
			poly = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(null());
		}
		else{
			HX_STACK_LINE(1000)
			poly = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;
			HX_STACK_LINE(1001)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool = poly->next;
			HX_STACK_LINE(1002)
			poly->next = null();
		}
		HX_STACK_LINE(1007)
		Dynamic();
	}
	HX_STACK_LINE(1009)
	::zpp_nape::geom::ZPP_PartitionVertex next = start;		HX_STACK_VAR(next,"next");
	HX_STACK_LINE(1010)
	do{
		struct _Function_2_1{
			inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionedPoly &poly,::zpp_nape::geom::ZPP_PartitionVertex &next){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1011);
				{
					struct _Function_3_1{
						inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &next){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1012);
							{
								HX_STACK_LINE(1012)
								::zpp_nape::geom::ZPP_PartitionVertex ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1012)
								{
									HX_STACK_LINE(1012)
									if (((::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool == null()))){
										HX_STACK_LINE(1012)
										ret1 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();
									}
									else{
										HX_STACK_LINE(1012)
										ret1 = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
										HX_STACK_LINE(1012)
										::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret1->next;
										HX_STACK_LINE(1012)
										ret1->next = null();
									}
									HX_STACK_LINE(1012)
									Dynamic();
								}
								HX_STACK_LINE(1012)
								{
									HX_STACK_LINE(1012)
									ret1->x = next->x;
									HX_STACK_LINE(1012)
									ret1->y = next->y;
									HX_STACK_LINE(1012)
									{
									}
								}
								HX_STACK_LINE(1012)
								ret1->forced = next->forced;
								HX_STACK_LINE(1012)
								return ret1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1012)
					::zpp_nape::geom::ZPP_PartitionVertex obj = _Function_3_1::Block(next);		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1013)
					if (((poly->vertices == null()))){
						HX_STACK_LINE(1013)
						poly->vertices = obj->prev = obj->next = obj;
					}
					else{
						HX_STACK_LINE(1015)
						obj->prev = poly->vertices;
						HX_STACK_LINE(1016)
						obj->next = poly->vertices->next;
						HX_STACK_LINE(1017)
						poly->vertices->next->prev = obj;
						HX_STACK_LINE(1018)
						poly->vertices->next = obj;
					}
					HX_STACK_LINE(1020)
					return obj;
				}
				return null();
			}
		};
		HX_STACK_LINE(1011)
		poly->vertices = _Function_2_1::Block(poly,next);
		HX_STACK_LINE(1022)
		poly->vertices->forced = next->forced;
		HX_STACK_LINE(1023)
		if ((!(((next->diagonals->head == null()))))){
			struct _Function_3_1{
				inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &next){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1024);
					{
						HX_STACK_LINE(1024)
						::zpp_nape::util::ZNPList_ZPP_PartitionVertex _this = next->diagonals;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1024)
						::zpp_nape::geom::ZPP_PartitionVertex ret1 = _this->head->elt;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1024)
						_this->pop();
						HX_STACK_LINE(1024)
						return ret1;
					}
					return null();
				}
			};
			HX_STACK_LINE(1024)
			::zpp_nape::geom::ZPP_PartitionVertex diag = _Function_3_1::Block(next);		HX_STACK_VAR(diag,"diag");
			HX_STACK_LINE(1025)
			if (((diag == start))){
				HX_STACK_LINE(1025)
				break;
			}
			else{
				HX_STACK_LINE(1026)
				next = this->pull_partitions(next,ret);
			}
		}
		else{
			HX_STACK_LINE(1028)
			next = next->next;
		}
	}
while(((next != start)));
	struct _Function_1_1{
		inline static Float Block( ::zpp_nape::geom::ZPP_PartitionedPoly &poly){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",1085);
			{
				HX_STACK_LINE(1110)
				Float area = 0.0;		HX_STACK_VAR(area,"area");
				HX_STACK_LINE(1111)
				{
					HX_STACK_LINE(1112)
					::zpp_nape::geom::ZPP_PartitionVertex F = poly->vertices;		HX_STACK_VAR(F,"F");
					HX_STACK_LINE(1113)
					::zpp_nape::geom::ZPP_PartitionVertex L = poly->vertices;		HX_STACK_VAR(L,"L");
					HX_STACK_LINE(1114)
					if (((F != null()))){
						HX_STACK_LINE(1115)
						::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
						HX_STACK_LINE(1116)
						do{
							HX_STACK_LINE(1117)
							::zpp_nape::geom::ZPP_PartitionVertex v = nite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(1118)
							hx::AddEq(area,(v->x * ((v->next->y - v->prev->y))));
							HX_STACK_LINE(1123)
							nite = nite->next;
						}
while(((nite != L)));
					}
				}
				HX_STACK_LINE(1128)
				return (area * 0.5);
			}
			return null();
		}
	};
	HX_STACK_LINE(1085)
	if (((_Function_1_1::Block(poly) != (int)0))){
		HX_STACK_LINE(1129)
		ret->add(poly);
	}
	HX_STACK_LINE(1130)
	return next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionedPoly_obj,pull_partitions,return )

::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ZPP_PartitionedPoly_obj::extract_partitions( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ret){
	HX_STACK_PUSH("ZPP_PartitionedPoly::extract_partitions","zpp_nape/geom/PartitionedPoly.hx",895);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ret,"ret");
	HX_STACK_LINE(896)
	if (((ret == null()))){
		HX_STACK_LINE(896)
		ret = ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__new();
	}
	HX_STACK_LINE(897)
	if (((this->vertices != null()))){
		HX_STACK_LINE(898)
		{
			HX_STACK_LINE(899)
			::zpp_nape::geom::ZPP_PartitionVertex F = this->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(900)
			::zpp_nape::geom::ZPP_PartitionVertex L = this->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(901)
			if (((F != null()))){
				HX_STACK_LINE(902)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(903)
				do{
					HX_STACK_LINE(904)
					::zpp_nape::geom::ZPP_PartitionVertex c = nite;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(905)
					c->sort();
					HX_STACK_LINE(908)
					nite = nite->next;
				}
while(((nite != L)));
			}
		}
		HX_STACK_LINE(913)
		this->pull_partitions(this->vertices,ret);
		HX_STACK_LINE(914)
		while((!(((this->vertices == null()))))){
			struct _Function_3_1{
				inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionedPoly_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",924);
					{
						HX_STACK_LINE(925)
						__this->vertices->next = __this->vertices->prev = null();
						HX_STACK_LINE(926)
						{
							HX_STACK_LINE(927)
							::zpp_nape::geom::ZPP_PartitionVertex o = __this->vertices;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(936)
							{
								HX_STACK_LINE(936)
								o->helper = null();
								HX_STACK_LINE(936)
								Dynamic();
							}
							HX_STACK_LINE(937)
							o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(938)
							::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(943)
						return __this->vertices = null();
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionedPoly_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",945);
					{
						HX_STACK_LINE(946)
						::zpp_nape::geom::ZPP_PartitionVertex retnodes = __this->vertices->next;		HX_STACK_VAR(retnodes,"retnodes");
						HX_STACK_LINE(947)
						__this->vertices->prev->next = __this->vertices->next;
						HX_STACK_LINE(948)
						__this->vertices->next->prev = __this->vertices->prev;
						HX_STACK_LINE(949)
						__this->vertices->next = __this->vertices->prev = null();
						HX_STACK_LINE(950)
						{
							HX_STACK_LINE(951)
							::zpp_nape::geom::ZPP_PartitionVertex o = __this->vertices;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(960)
							{
								HX_STACK_LINE(960)
								o->helper = null();
								HX_STACK_LINE(960)
								Dynamic();
							}
							HX_STACK_LINE(961)
							o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(962)
							::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(967)
						__this->vertices = null();
						HX_STACK_LINE(968)
						return retnodes;
					}
					return null();
				}
			};
			HX_STACK_LINE(915)
			this->vertices = (  (((bool((this->vertices != null())) && bool((this->vertices->prev == this->vertices))))) ? ::zpp_nape::geom::ZPP_PartitionVertex(_Function_3_1::Block(this)) : ::zpp_nape::geom::ZPP_PartitionVertex(_Function_3_2::Block(this)) );
		}
		HX_STACK_LINE(972)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(973)
		{
			HX_STACK_LINE(974)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cx_ite = ret->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(975)
			while(((cx_ite != null()))){
				HX_STACK_LINE(976)
				::zpp_nape::geom::ZPP_PartitionedPoly p = cx_ite->elt;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(977)
				{
					HX_STACK_LINE(978)
					if ((p->remove_collinear_vertices())){
						HX_STACK_LINE(979)
						ret->erase(pre);
						HX_STACK_LINE(980)
						continue;
					}
					HX_STACK_LINE(982)
					pre = cx_ite;
				}
				HX_STACK_LINE(984)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(988)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionedPoly_obj,extract_partitions,return )

Void ZPP_PartitionedPoly_obj::add_diagonal( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
{
		HX_STACK_PUSH("ZPP_PartitionedPoly::add_diagonal","zpp_nape/geom/PartitionedPoly.hx",884);
		HX_STACK_THIS(this);
		HX_STACK_ARG(p,"p");
		HX_STACK_ARG(q,"q");
		HX_STACK_LINE(885)
		p->diagonals->add(q);
		HX_STACK_LINE(886)
		q->diagonals->add(p);
		HX_STACK_LINE(887)
		p->forced = q->forced = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionedPoly_obj,add_diagonal,(void))

bool ZPP_PartitionedPoly_obj::remove_collinear_vertices( ){
	HX_STACK_PUSH("ZPP_PartitionedPoly::remove_collinear_vertices","zpp_nape/geom/PartitionedPoly.hx",712);
	HX_STACK_THIS(this);
	HX_STACK_LINE(713)
	::zpp_nape::geom::ZPP_PartitionVertex p = this->vertices;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(714)
	bool skip = true;		HX_STACK_VAR(skip,"skip");
	HX_STACK_LINE(715)
	while(((bool(skip) || bool((p != this->vertices))))){
		HX_STACK_LINE(716)
		skip = false;
		HX_STACK_LINE(717)
		if ((this->eq(p,p->next))){
			HX_STACK_LINE(718)
			if (((p == this->vertices))){
				HX_STACK_LINE(719)
				this->vertices = p->next;
				HX_STACK_LINE(720)
				skip = true;
			}
			HX_STACK_LINE(722)
			if ((p->forced)){
				HX_STACK_LINE(722)
				p->next->forced = true;
			}
			struct _Function_3_1{
				inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &p){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",732);
					{
						HX_STACK_LINE(733)
						p->next = p->prev = null();
						HX_STACK_LINE(734)
						{
							HX_STACK_LINE(735)
							::zpp_nape::geom::ZPP_PartitionVertex o = p;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(744)
							{
								HX_STACK_LINE(744)
								o->helper = null();
								HX_STACK_LINE(744)
								Dynamic();
							}
							HX_STACK_LINE(745)
							o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(746)
							::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(751)
						return p = null();
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &p){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",753);
					{
						HX_STACK_LINE(754)
						::zpp_nape::geom::ZPP_PartitionVertex retnodes = p->next;		HX_STACK_VAR(retnodes,"retnodes");
						HX_STACK_LINE(755)
						p->prev->next = p->next;
						HX_STACK_LINE(756)
						p->next->prev = p->prev;
						HX_STACK_LINE(757)
						p->next = p->prev = null();
						HX_STACK_LINE(758)
						{
							HX_STACK_LINE(759)
							::zpp_nape::geom::ZPP_PartitionVertex o = p;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(768)
							{
								HX_STACK_LINE(768)
								o->helper = null();
								HX_STACK_LINE(768)
								Dynamic();
							}
							HX_STACK_LINE(769)
							o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(770)
							::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(775)
						p = null();
						HX_STACK_LINE(776)
						return retnodes;
					}
					return null();
				}
			};
			HX_STACK_LINE(723)
			p = (  (((bool((p != null())) && bool((p->prev == p))))) ? ::zpp_nape::geom::ZPP_PartitionVertex(_Function_3_1::Block(p)) : ::zpp_nape::geom::ZPP_PartitionVertex(_Function_3_2::Block(p)) );
			HX_STACK_LINE(779)
			if (((p == null()))){
				HX_STACK_LINE(780)
				this->vertices = null();
				HX_STACK_LINE(781)
				break;
			}
		}
		else{
			HX_STACK_LINE(784)
			p = p->next;
		}
	}
	HX_STACK_LINE(786)
	if (((this->vertices == null()))){
		HX_STACK_LINE(786)
		return true;
	}
	HX_STACK_LINE(787)
	bool removed;		HX_STACK_VAR(removed,"removed");
	HX_STACK_LINE(788)
	do{
		HX_STACK_LINE(789)
		removed = false;
		HX_STACK_LINE(790)
		p = this->vertices;
		HX_STACK_LINE(791)
		skip = true;
		HX_STACK_LINE(792)
		while(((bool(skip) || bool((p != this->vertices))))){
			HX_STACK_LINE(793)
			skip = false;
			HX_STACK_LINE(794)
			::zpp_nape::geom::ZPP_PartitionVertex pre = p->prev;		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(795)
			Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
			HX_STACK_LINE(796)
			Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
			HX_STACK_LINE(797)
			{
				HX_STACK_LINE(798)
				ux = (p->x - pre->x);
				HX_STACK_LINE(799)
				uy = (p->y - pre->y);
			}
			HX_STACK_LINE(801)
			Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(802)
			Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(803)
			{
				HX_STACK_LINE(804)
				vx = (p->next->x - p->x);
				HX_STACK_LINE(805)
				vy = (p->next->y - p->y);
			}
			HX_STACK_LINE(807)
			Float crs = ((vy * ux) - (vx * uy));		HX_STACK_VAR(crs,"crs");
			HX_STACK_LINE(808)
			if ((((crs * crs) >= (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
				HX_STACK_LINE(808)
				p = p->next;
			}
			else{
				HX_STACK_LINE(812)
				if (((p == this->vertices))){
					HX_STACK_LINE(813)
					this->vertices = p->next;
					HX_STACK_LINE(814)
					skip = true;
				}
				struct _Function_4_1{
					inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &p){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",825);
						{
							HX_STACK_LINE(826)
							p->next = p->prev = null();
							HX_STACK_LINE(827)
							{
								HX_STACK_LINE(828)
								::zpp_nape::geom::ZPP_PartitionVertex o = p;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(837)
								{
									HX_STACK_LINE(837)
									o->helper = null();
									HX_STACK_LINE(837)
									Dynamic();
								}
								HX_STACK_LINE(838)
								o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
								HX_STACK_LINE(839)
								::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
							}
							HX_STACK_LINE(844)
							return p = null();
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &p){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",846);
						{
							HX_STACK_LINE(847)
							::zpp_nape::geom::ZPP_PartitionVertex retnodes = p->next;		HX_STACK_VAR(retnodes,"retnodes");
							HX_STACK_LINE(848)
							p->prev->next = p->next;
							HX_STACK_LINE(849)
							p->next->prev = p->prev;
							HX_STACK_LINE(850)
							p->next = p->prev = null();
							HX_STACK_LINE(851)
							{
								HX_STACK_LINE(852)
								::zpp_nape::geom::ZPP_PartitionVertex o = p;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(861)
								{
									HX_STACK_LINE(861)
									o->helper = null();
									HX_STACK_LINE(861)
									Dynamic();
								}
								HX_STACK_LINE(862)
								o->next = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
								HX_STACK_LINE(863)
								::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = o;
							}
							HX_STACK_LINE(868)
							p = null();
							HX_STACK_LINE(869)
							return retnodes;
						}
						return null();
					}
				};
				HX_STACK_LINE(816)
				p = (  (((bool((p != null())) && bool((p->prev == p))))) ? ::zpp_nape::geom::ZPP_PartitionVertex(_Function_4_1::Block(p)) : ::zpp_nape::geom::ZPP_PartitionVertex(_Function_4_2::Block(p)) );
				HX_STACK_LINE(872)
				removed = true;
				HX_STACK_LINE(873)
				if (((p == null()))){
					HX_STACK_LINE(874)
					removed = false;
					HX_STACK_LINE(875)
					this->vertices = null();
					HX_STACK_LINE(876)
					break;
				}
			}
		}
	}
while((removed));
	HX_STACK_LINE(882)
	return (this->vertices == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,remove_collinear_vertices,return )

Void ZPP_PartitionedPoly_obj::init( ::zpp_nape::geom::ZPP_GeomVert P){
{
		HX_STACK_PUSH("ZPP_PartitionedPoly::init","zpp_nape/geom/PartitionedPoly.hx",633);
		HX_STACK_THIS(this);
		HX_STACK_ARG(P,"P");
		HX_STACK_LINE(634)
		if (((P == null()))){
			HX_STACK_LINE(634)
			return null();
		}
		struct _Function_1_1{
			inline static Float Block( ::zpp_nape::geom::ZPP_GeomVert &P){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",636);
				{
					HX_STACK_LINE(661)
					Float area = 0.0;		HX_STACK_VAR(area,"area");
					HX_STACK_LINE(662)
					{
						HX_STACK_LINE(663)
						::zpp_nape::geom::ZPP_GeomVert F = P;		HX_STACK_VAR(F,"F");
						HX_STACK_LINE(664)
						::zpp_nape::geom::ZPP_GeomVert L = P;		HX_STACK_VAR(L,"L");
						HX_STACK_LINE(665)
						if (((F != null()))){
							HX_STACK_LINE(666)
							::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
							HX_STACK_LINE(667)
							do{
								HX_STACK_LINE(668)
								::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(669)
								hx::AddEq(area,(v->x * ((v->next->y - v->prev->y))));
								HX_STACK_LINE(674)
								nite = nite->next;
							}
while(((nite != L)));
						}
					}
					HX_STACK_LINE(679)
					return (area * 0.5);
				}
				return null();
			}
		};
		HX_STACK_LINE(635)
		bool cw = (_Function_1_1::Block(P) > 0.0);		HX_STACK_VAR(cw,"cw");
		HX_STACK_LINE(682)
		::zpp_nape::geom::ZPP_GeomVert p = P;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(683)
		do{
			struct _Function_2_1{
				inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionedPoly_obj *__this,::zpp_nape::geom::ZPP_GeomVert &p){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",684);
					{
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_GeomVert &p){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",685);
								{
									HX_STACK_LINE(685)
									::zpp_nape::geom::ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										if (((::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool == null()))){
											HX_STACK_LINE(685)
											ret = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();
										}
										else{
											HX_STACK_LINE(685)
											ret = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
											HX_STACK_LINE(685)
											::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret->next;
											HX_STACK_LINE(685)
											ret->next = null();
										}
										HX_STACK_LINE(685)
										Dynamic();
									}
									HX_STACK_LINE(685)
									{
										HX_STACK_LINE(685)
										ret->x = p->x;
										HX_STACK_LINE(685)
										ret->y = p->y;
										HX_STACK_LINE(685)
										{
										}
									}
									HX_STACK_LINE(685)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(685)
						::zpp_nape::geom::ZPP_PartitionVertex obj = _Function_3_1::Block(p);		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(686)
						if (((__this->vertices == null()))){
							HX_STACK_LINE(686)
							__this->vertices = obj->prev = obj->next = obj;
						}
						else{
							HX_STACK_LINE(688)
							obj->prev = __this->vertices;
							HX_STACK_LINE(689)
							obj->next = __this->vertices->next;
							HX_STACK_LINE(690)
							__this->vertices->next->prev = obj;
							HX_STACK_LINE(691)
							__this->vertices->next = obj;
						}
						HX_STACK_LINE(693)
						return obj;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionedPoly_obj *__this,::zpp_nape::geom::ZPP_GeomVert &p){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",695);
					{
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_GeomVert &p){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",696);
								{
									HX_STACK_LINE(696)
									::zpp_nape::geom::ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(696)
									{
										HX_STACK_LINE(696)
										if (((::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool == null()))){
											HX_STACK_LINE(696)
											ret = ::zpp_nape::geom::ZPP_PartitionVertex_obj::__new();
										}
										else{
											HX_STACK_LINE(696)
											ret = ::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool;
											HX_STACK_LINE(696)
											::zpp_nape::geom::ZPP_PartitionVertex_obj::zpp_pool = ret->next;
											HX_STACK_LINE(696)
											ret->next = null();
										}
										HX_STACK_LINE(696)
										Dynamic();
									}
									HX_STACK_LINE(696)
									{
										HX_STACK_LINE(696)
										ret->x = p->x;
										HX_STACK_LINE(696)
										ret->y = p->y;
										HX_STACK_LINE(696)
										{
										}
									}
									HX_STACK_LINE(696)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(696)
						::zpp_nape::geom::ZPP_PartitionVertex obj = _Function_3_1::Block(p);		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(697)
						if (((__this->vertices == null()))){
							HX_STACK_LINE(697)
							__this->vertices = obj->prev = obj->next = obj;
						}
						else{
							HX_STACK_LINE(699)
							obj->next = __this->vertices;
							HX_STACK_LINE(700)
							obj->prev = __this->vertices->prev;
							HX_STACK_LINE(701)
							__this->vertices->prev->next = obj;
							HX_STACK_LINE(702)
							__this->vertices->prev = obj;
						}
						HX_STACK_LINE(704)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(684)
			this->vertices = (  ((cw)) ? ::zpp_nape::geom::ZPP_PartitionVertex(_Function_2_1::Block(this,p)) : ::zpp_nape::geom::ZPP_PartitionVertex(_Function_2_2::Block(this,p)) );
			HX_STACK_LINE(706)
			this->vertices->forced = p->forced;
			HX_STACK_LINE(707)
			p = p->next;
		}
while(((p != P)));
		HX_STACK_LINE(710)
		this->remove_collinear_vertices();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionedPoly_obj,init,(void))

Void ZPP_PartitionedPoly_obj::free( ){
{
		HX_STACK_PUSH("ZPP_PartitionedPoly::free","zpp_nape/geom/PartitionedPoly.hx",623);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,free,(void))

Void ZPP_PartitionedPoly_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_PartitionedPoly::alloc","zpp_nape/geom/PartitionedPoly.hx",621);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,alloc,(void))

bool ZPP_PartitionedPoly_obj::eq( ::zpp_nape::geom::ZPP_PartitionVertex a,::zpp_nape::geom::ZPP_PartitionVertex b){
	HX_STACK_PUSH("ZPP_PartitionedPoly::eq","zpp_nape/geom/PartitionedPoly.hx",589);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	struct _Function_1_1{
		inline static Float Block( ::zpp_nape::geom::ZPP_PartitionVertex &b,::zpp_nape::geom::ZPP_PartitionVertex &a){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/PartitionedPoly.hx",590);
			{
				HX_STACK_LINE(590)
				Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(590)
				Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(590)
				{
					HX_STACK_LINE(590)
					dx = (a->x - b->x);
					HX_STACK_LINE(590)
					dy = (a->y - b->y);
				}
				HX_STACK_LINE(590)
				return ((dx * dx) + (dy * dy));
			}
			return null();
		}
	};
	HX_STACK_LINE(589)
	return (_Function_1_1::Block(b,a) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon));
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionedPoly_obj,eq,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZPP_PartitionedPoly_obj::zpp_pool;

::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ZPP_PartitionedPoly_obj::sharedPPList;

::zpp_nape::util::ZNPList_ZPP_PartitionedPoly ZPP_PartitionedPoly_obj::getSharedPP( ){
	HX_STACK_PUSH("ZPP_PartitionedPoly::getSharedPP","zpp_nape/geom/PartitionedPoly.hx",891);
	HX_STACK_LINE(892)
	if (((::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList == null()))){
		HX_STACK_LINE(892)
		::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList = ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__new();
	}
	HX_STACK_LINE(893)
	return ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,getSharedPP,return )

::zpp_nape::util::ZNPList_ZPP_GeomVert ZPP_PartitionedPoly_obj::sharedGVList;

::zpp_nape::util::ZNPList_ZPP_GeomVert ZPP_PartitionedPoly_obj::getShared( ){
	HX_STACK_PUSH("ZPP_PartitionedPoly::getShared","zpp_nape/geom/PartitionedPoly.hx",1134);
	HX_STACK_LINE(1135)
	if (((::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList == null()))){
		HX_STACK_LINE(1135)
		::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();
	}
	HX_STACK_LINE(1136)
	return ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionedPoly_obj,getShared,return )


ZPP_PartitionedPoly_obj::ZPP_PartitionedPoly_obj()
{
}

void ZPP_PartitionedPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PartitionedPoly);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_END_CLASS();
}

void ZPP_PartitionedPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
}

Dynamic ZPP_PartitionedPoly_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"eq") ) { return eq_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pull") ) { return pull_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getShared") ) { return getShared_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getSharedPP") ) { return getSharedPP_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedPPList") ) { return sharedPPList; }
		if (HX_FIELD_EQ(inName,"sharedGVList") ) { return sharedGVList; }
		if (HX_FIELD_EQ(inName,"add_diagonal") ) { return add_diagonal_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"pull_partitions") ) { return pull_partitions_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"extract_partitions") ) { return extract_partitions_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"remove_collinear_vertices") ) { return remove_collinear_vertices_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_PartitionedPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionedPoly >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionedPoly >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedPPList") ) { sharedPPList=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharedGVList") ) { sharedGVList=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_GeomVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_PartitionedPoly_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("vertices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("sharedPPList"),
	HX_CSTRING("getSharedPP"),
	HX_CSTRING("sharedGVList"),
	HX_CSTRING("getShared"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("pull"),
	HX_CSTRING("extract"),
	HX_CSTRING("pull_partitions"),
	HX_CSTRING("extract_partitions"),
	HX_CSTRING("add_diagonal"),
	HX_CSTRING("remove_collinear_vertices"),
	HX_CSTRING("init"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("next"),
	HX_CSTRING("eq"),
	HX_CSTRING("vertices"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_PartitionedPoly_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_PartitionedPoly_obj::zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(ZPP_PartitionedPoly_obj::sharedPPList,"sharedPPList");
	HX_MARK_MEMBER_NAME(ZPP_PartitionedPoly_obj::sharedGVList,"sharedGVList");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PartitionedPoly_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionedPoly_obj::zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionedPoly_obj::sharedPPList,"sharedPPList");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionedPoly_obj::sharedGVList,"sharedGVList");
};

Class ZPP_PartitionedPoly_obj::__mClass;

void ZPP_PartitionedPoly_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_PartitionedPoly"), hx::TCanCast< ZPP_PartitionedPoly_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_PartitionedPoly_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
