#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeList
#include <nape/shape/EdgeList.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ValidationResult
#include <nape/shape/ValidationResult.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_EdgeList
#include <zpp_nape/util/ZPP_EdgeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_MixVec2List
#include <zpp_nape/util/ZPP_MixVec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace zpp_nape{
namespace shape{

Void ZPP_Polygon_obj::__construct()
{
HX_STACK_PUSH("ZPP_Polygon::new","zpp_nape/shape/Polygon.hx",174);
{
	HX_STACK_LINE(812)
	this->zip_sanitation = false;
	HX_STACK_LINE(367)
	this->zip_valid = false;
	HX_STACK_LINE(363)
	this->zip_gaxi = false;
	HX_STACK_LINE(358)
	this->zip_gverts = false;
	HX_STACK_LINE(352)
	this->zip_laxi = false;
	HX_STACK_LINE(340)
	this->zip_lverts = false;
	HX_STACK_LINE(183)
	this->reverse_flag = false;
	HX_STACK_LINE(182)
	this->edgeCnt = (int)0;
	HX_STACK_LINE(181)
	this->wrap_edges = null();
	HX_STACK_LINE(180)
	this->edges = null();
	HX_STACK_LINE(179)
	this->wrap_gverts = null();
	HX_STACK_LINE(178)
	this->gverts = null();
	HX_STACK_LINE(177)
	this->wrap_lverts = null();
	HX_STACK_LINE(176)
	this->lverts = null();
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(1827)
	super::__construct(::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON);
	HX_STACK_LINE(1828)
	this->polygon = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(1829)
	this->lverts = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
	HX_STACK_LINE(1830)
	this->gverts = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
	HX_STACK_LINE(1831)
	this->edges = ::zpp_nape::util::ZNPList_ZPP_Edge_obj::__new();
	HX_STACK_LINE(1832)
	this->edgeCnt = (int)0;
}
;
	return null();
}

ZPP_Polygon_obj::~ZPP_Polygon_obj() { }

Dynamic ZPP_Polygon_obj::__CreateEmpty() { return  new ZPP_Polygon_obj; }
hx::ObjectPtr< ZPP_Polygon_obj > ZPP_Polygon_obj::__new()
{  hx::ObjectPtr< ZPP_Polygon_obj > result = new ZPP_Polygon_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Polygon_obj > result = new ZPP_Polygon_obj();
	result->__construct();
	return result;}

::zpp_nape::shape::ZPP_Polygon ZPP_Polygon_obj::__copy( ){
	HX_STACK_PUSH("ZPP_Polygon::__copy","zpp_nape/shape/Polygon.hx",1926);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::geom::Vec2List Block( ::zpp_nape::shape::ZPP_Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/shape/Polygon.hx",1927);
			{
				HX_STACK_LINE(1927)
				::nape::shape::Polygon _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1927)
				if (((_this->zpp_inner_zn->wrap_lverts == null()))){
					HX_STACK_LINE(1927)
					_this->zpp_inner_zn->getlverts();
				}
				HX_STACK_LINE(1927)
				return _this->zpp_inner_zn->wrap_lverts;
			}
			return null();
		}
	};
	HX_STACK_LINE(1927)
	::zpp_nape::shape::ZPP_Polygon ret = ::nape::shape::Polygon_obj::__new(_Function_1_1::Block(this),null(),null())->zpp_inner_zn;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1928)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__copy,return )

Void ZPP_Polygon_obj::__transform( ::nape::geom::Mat23 mat){
{
		HX_STACK_PUSH("ZPP_Polygon::__transform","zpp_nape/shape/Polygon.hx",1909);
		HX_STACK_THIS(this);
		HX_STACK_ARG(mat,"mat");
		HX_STACK_LINE(1910)
		{
			HX_STACK_LINE(1911)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1912)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1913)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1914)
				{
					HX_STACK_LINE(1916)
					Float t = (((mat->zpp_inner->a * p->x) + (mat->zpp_inner->b * p->y)) + mat->zpp_inner->tx);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1917)
					p->y = (((mat->zpp_inner->c * p->x) + (mat->zpp_inner->d * p->y)) + mat->zpp_inner->ty);
					HX_STACK_LINE(1918)
					p->x = t;
				}
				HX_STACK_LINE(1921)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1924)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,__transform,(void))

Void ZPP_Polygon_obj::__rotate( Float ax,Float ay){
{
		HX_STACK_PUSH("ZPP_Polygon::__rotate","zpp_nape/shape/Polygon.hx",1871);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ax,"ax");
		HX_STACK_ARG(ay,"ay");
		HX_STACK_LINE(1872)
		{
			HX_STACK_LINE(1873)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1874)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1875)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1876)
				{
					HX_STACK_LINE(1877)
					Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
					HX_STACK_LINE(1878)
					Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
					HX_STACK_LINE(1879)
					{
						HX_STACK_LINE(1880)
						tempx = ((ay * p->x) - (ax * p->y));
						HX_STACK_LINE(1881)
						tempy = ((p->x * ax) + (p->y * ay));
					}
					HX_STACK_LINE(1883)
					{
						HX_STACK_LINE(1884)
						p->x = tempx;
						HX_STACK_LINE(1885)
						p->y = tempy;
						HX_STACK_LINE(1886)
						{
						}
						HX_STACK_LINE(1894)
						{
						}
					}
				}
				HX_STACK_LINE(1904)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1907)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Polygon_obj,__rotate,(void))

Void ZPP_Polygon_obj::__scale( Float sx,Float sy){
{
		HX_STACK_PUSH("ZPP_Polygon::__scale","zpp_nape/shape/Polygon.hx",1857);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sx,"sx");
		HX_STACK_ARG(sy,"sy");
		HX_STACK_LINE(1858)
		{
			HX_STACK_LINE(1859)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1860)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1861)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1862)
				{
					HX_STACK_LINE(1863)
					hx::MultEq(p->x,sx);
					HX_STACK_LINE(1864)
					hx::MultEq(p->y,sy);
				}
				HX_STACK_LINE(1866)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1869)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Polygon_obj,__scale,(void))

Void ZPP_Polygon_obj::__translate( Float dx,Float dy){
{
		HX_STACK_PUSH("ZPP_Polygon::__translate","zpp_nape/shape/Polygon.hx",1834);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_ARG(dy,"dy");
		HX_STACK_LINE(1835)
		{
			HX_STACK_LINE(1836)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1837)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1838)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1839)
				{
					HX_STACK_LINE(1840)
					Float t = 1.0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1841)
					{
					}
					HX_STACK_LINE(1849)
					hx::AddEq(p->x,(dx * t));
					HX_STACK_LINE(1850)
					hx::AddEq(p->y,(dy * t));
				}
				HX_STACK_LINE(1852)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1855)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Polygon_obj,__translate,(void))

Void ZPP_Polygon_obj::setupLocalCOM( ){
{
		HX_STACK_PUSH("ZPP_Polygon::setupLocalCOM","zpp_nape/shape/Polygon.hx",1820);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::shape::ZPP_Polygon_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/shape/Polygon.hx",1821);
				{
					HX_STACK_LINE(1821)
					Float x = __this->localCOMx;		HX_STACK_VAR(x,"x");
					Float y = __this->localCOMy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(1821)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1821)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1821)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1821)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1821)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1821)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1821)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1821)
						ret->zpp_pool = null();
						HX_STACK_LINE(1821)
						ret->zpp_disp = false;
						HX_STACK_LINE(1821)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1821)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1821)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/shape/Polygon.hx",1821);
								{
									HX_STACK_LINE(1821)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1821)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1821)
									{
										HX_STACK_LINE(1821)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1821)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1821)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1821)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1821)
											ret1->next = null();
										}
										HX_STACK_LINE(1821)
										ret1->weak = false;
									}
									HX_STACK_LINE(1821)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1821)
									{
										HX_STACK_LINE(1821)
										ret1->x = x;
										HX_STACK_LINE(1821)
										ret1->y = y;
										HX_STACK_LINE(1821)
										{
										}
										HX_STACK_LINE(1821)
										{
										}
									}
									HX_STACK_LINE(1821)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1821)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(1821)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1821)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1821)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1821)
						{
							HX_STACK_LINE(1821)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1821)
							if ((_this->_immutable)){
								HX_STACK_LINE(1821)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1821)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(1821)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1821)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1821)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/shape/Polygon.hx",1821);
								{
									HX_STACK_LINE(1821)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1821)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1821)
									{
										HX_STACK_LINE(1821)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1821)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1821)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1821)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/shape/Polygon.hx",1821);
								{
									HX_STACK_LINE(1821)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1821)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1821)
									{
										HX_STACK_LINE(1821)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1821)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1821)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1821)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1821)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(1821)
							{
								HX_STACK_LINE(1821)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1821)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1821)
								{
								}
								HX_STACK_LINE(1821)
								{
								}
							}
							HX_STACK_LINE(1821)
							{
								HX_STACK_LINE(1821)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1821)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(1821)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1821)
						ret;
					}
					HX_STACK_LINE(1821)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1821)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1821)
		this->wrap_localCOM = _Function_1_1::Block(this);
		HX_STACK_LINE(1822)
		this->wrap_localCOM->zpp_inner->_inuse = true;
		HX_STACK_LINE(1823)
		this->wrap_localCOM->zpp_inner->_validate = this->localCOM_validate_dyn();
		HX_STACK_LINE(1824)
		this->wrap_localCOM->zpp_inner->_invalidate = this->localCOM_invalidate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,setupLocalCOM,(void))

Void ZPP_Polygon_obj::localCOM_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_Polygon::localCOM_invalidate","zpp_nape/shape/Polygon.hx",1774);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1775)
		if ((this->zip_localCOM)){
			HX_STACK_LINE(1775)
			this->zip_localCOM = false;
			HX_STACK_LINE(1775)
			if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
				HX_STACK_LINE(1775)
				::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1775)
				if (((_this->lverts->next == null()))){
					HX_STACK_LINE(1775)
					hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
				}
				HX_STACK_LINE(1775)
				if (((_this->lverts->next->next == null()))){
					HX_STACK_LINE(1775)
					_this->localCOMx = _this->lverts->next->x;
					HX_STACK_LINE(1775)
					_this->localCOMy = _this->lverts->next->y;
					HX_STACK_LINE(1775)
					{
					}
					HX_STACK_LINE(1775)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1775)
					if (((_this->lverts->next->next->next == null()))){
						HX_STACK_LINE(1775)
						{
							HX_STACK_LINE(1775)
							_this->localCOMx = _this->lverts->next->x;
							HX_STACK_LINE(1775)
							_this->localCOMy = _this->lverts->next->y;
							HX_STACK_LINE(1775)
							{
							}
							HX_STACK_LINE(1775)
							{
							}
						}
						HX_STACK_LINE(1775)
						{
							HX_STACK_LINE(1775)
							Float t = 1.0;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1775)
							{
							}
							HX_STACK_LINE(1775)
							hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
							HX_STACK_LINE(1775)
							hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
						}
						HX_STACK_LINE(1775)
						{
							HX_STACK_LINE(1775)
							Float t = 0.5;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1775)
							{
							}
							HX_STACK_LINE(1775)
							hx::MultEq(_this->localCOMx,t);
							HX_STACK_LINE(1775)
							hx::MultEq(_this->localCOMy,t);
						}
					}
					else{
						HX_STACK_LINE(1775)
						{
							HX_STACK_LINE(1775)
							_this->localCOMx = (int)0;
							HX_STACK_LINE(1775)
							_this->localCOMy = (int)0;
							HX_STACK_LINE(1775)
							{
							}
							HX_STACK_LINE(1775)
							{
							}
						}
						HX_STACK_LINE(1775)
						Float area = 0.0;		HX_STACK_VAR(area,"area");
						HX_STACK_LINE(1775)
						{
							HX_STACK_LINE(1775)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(1775)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(1775)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(1775)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(1775)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(1775)
							while(((cx_ite != null()))){
								HX_STACK_LINE(1775)
								::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
								HX_STACK_LINE(1775)
								{
									HX_STACK_LINE(1775)
									hx::AddEq(area,(v->x * ((w->y - u->y))));
									HX_STACK_LINE(1775)
									Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
									HX_STACK_LINE(1775)
									hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
									HX_STACK_LINE(1775)
									hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
								}
								HX_STACK_LINE(1775)
								u = v;
								HX_STACK_LINE(1775)
								v = w;
								HX_STACK_LINE(1775)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(1775)
							cx_ite = _this->lverts->next;
							HX_STACK_LINE(1775)
							::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
							HX_STACK_LINE(1775)
							{
								HX_STACK_LINE(1775)
								hx::AddEq(area,(v->x * ((w->y - u->y))));
								HX_STACK_LINE(1775)
								Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
								HX_STACK_LINE(1775)
								hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
								HX_STACK_LINE(1775)
								hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
							}
							HX_STACK_LINE(1775)
							u = v;
							HX_STACK_LINE(1775)
							v = w;
							HX_STACK_LINE(1775)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(1775)
							::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
							HX_STACK_LINE(1775)
							{
								HX_STACK_LINE(1775)
								hx::AddEq(area,(v->x * ((w1->y - u->y))));
								HX_STACK_LINE(1775)
								Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
								HX_STACK_LINE(1775)
								hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
								HX_STACK_LINE(1775)
								hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
							}
						}
						HX_STACK_LINE(1775)
						area = (Float((int)1) / Float((((int)3 * area))));
						HX_STACK_LINE(1775)
						{
							HX_STACK_LINE(1775)
							Float t = area;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1775)
							{
							}
							HX_STACK_LINE(1775)
							hx::MultEq(_this->localCOMx,t);
							HX_STACK_LINE(1775)
							hx::MultEq(_this->localCOMy,t);
						}
					}
				}
			}
		}
		HX_STACK_LINE(1776)
		Float delx = (int)0;		HX_STACK_VAR(delx,"delx");
		HX_STACK_LINE(1777)
		Float dely = (int)0;		HX_STACK_VAR(dely,"dely");
		HX_STACK_LINE(1778)
		{
		}
		HX_STACK_LINE(1786)
		{
		}
		HX_STACK_LINE(1794)
		{
			HX_STACK_LINE(1795)
			delx = (x->x - this->localCOMx);
			HX_STACK_LINE(1796)
			dely = (x->y - this->localCOMy);
		}
		HX_STACK_LINE(1798)
		{
			HX_STACK_LINE(1799)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1800)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1801)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1802)
				{
					HX_STACK_LINE(1803)
					Float t = 1.0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1804)
					{
					}
					HX_STACK_LINE(1812)
					hx::AddEq(p->x,(delx * t));
					HX_STACK_LINE(1813)
					hx::AddEq(p->y,(dely * t));
				}
				HX_STACK_LINE(1815)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1818)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,localCOM_invalidate,(void))

Void ZPP_Polygon_obj::localCOM_validate( ){
{
		HX_STACK_PUSH("ZPP_Polygon::localCOM_validate","zpp_nape/shape/Polygon.hx",1768);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1770)
		if (((this->lverts->next == null()))){
			HX_STACK_LINE(1770)
			hx::Throw (HX_CSTRING("Error: An empty polygon does not have any meaningful localCOM"));
		}
		HX_STACK_LINE(1772)
		if ((this->zip_localCOM)){
			HX_STACK_LINE(1772)
			this->zip_localCOM = false;
			HX_STACK_LINE(1772)
			if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
				HX_STACK_LINE(1772)
				::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1772)
				if (((_this->lverts->next == null()))){
					HX_STACK_LINE(1772)
					hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
				}
				HX_STACK_LINE(1772)
				if (((_this->lverts->next->next == null()))){
					HX_STACK_LINE(1772)
					_this->localCOMx = _this->lverts->next->x;
					HX_STACK_LINE(1772)
					_this->localCOMy = _this->lverts->next->y;
					HX_STACK_LINE(1772)
					{
					}
					HX_STACK_LINE(1772)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1772)
					if (((_this->lverts->next->next->next == null()))){
						HX_STACK_LINE(1772)
						{
							HX_STACK_LINE(1772)
							_this->localCOMx = _this->lverts->next->x;
							HX_STACK_LINE(1772)
							_this->localCOMy = _this->lverts->next->y;
							HX_STACK_LINE(1772)
							{
							}
							HX_STACK_LINE(1772)
							{
							}
						}
						HX_STACK_LINE(1772)
						{
							HX_STACK_LINE(1772)
							Float t = 1.0;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1772)
							{
							}
							HX_STACK_LINE(1772)
							hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
							HX_STACK_LINE(1772)
							hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
						}
						HX_STACK_LINE(1772)
						{
							HX_STACK_LINE(1772)
							Float t = 0.5;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1772)
							{
							}
							HX_STACK_LINE(1772)
							hx::MultEq(_this->localCOMx,t);
							HX_STACK_LINE(1772)
							hx::MultEq(_this->localCOMy,t);
						}
					}
					else{
						HX_STACK_LINE(1772)
						{
							HX_STACK_LINE(1772)
							_this->localCOMx = (int)0;
							HX_STACK_LINE(1772)
							_this->localCOMy = (int)0;
							HX_STACK_LINE(1772)
							{
							}
							HX_STACK_LINE(1772)
							{
							}
						}
						HX_STACK_LINE(1772)
						Float area = 0.0;		HX_STACK_VAR(area,"area");
						HX_STACK_LINE(1772)
						{
							HX_STACK_LINE(1772)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(1772)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(1772)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(1772)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(1772)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(1772)
							while(((cx_ite != null()))){
								HX_STACK_LINE(1772)
								::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
								HX_STACK_LINE(1772)
								{
									HX_STACK_LINE(1772)
									hx::AddEq(area,(v->x * ((w->y - u->y))));
									HX_STACK_LINE(1772)
									Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
									HX_STACK_LINE(1772)
									hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
									HX_STACK_LINE(1772)
									hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
								}
								HX_STACK_LINE(1772)
								u = v;
								HX_STACK_LINE(1772)
								v = w;
								HX_STACK_LINE(1772)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(1772)
							cx_ite = _this->lverts->next;
							HX_STACK_LINE(1772)
							::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
							HX_STACK_LINE(1772)
							{
								HX_STACK_LINE(1772)
								hx::AddEq(area,(v->x * ((w->y - u->y))));
								HX_STACK_LINE(1772)
								Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
								HX_STACK_LINE(1772)
								hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
								HX_STACK_LINE(1772)
								hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
							}
							HX_STACK_LINE(1772)
							u = v;
							HX_STACK_LINE(1772)
							v = w;
							HX_STACK_LINE(1772)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(1772)
							::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
							HX_STACK_LINE(1772)
							{
								HX_STACK_LINE(1772)
								hx::AddEq(area,(v->x * ((w1->y - u->y))));
								HX_STACK_LINE(1772)
								Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
								HX_STACK_LINE(1772)
								hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
								HX_STACK_LINE(1772)
								hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
							}
						}
						HX_STACK_LINE(1772)
						area = (Float((int)1) / Float((((int)3 * area))));
						HX_STACK_LINE(1772)
						{
							HX_STACK_LINE(1772)
							Float t = area;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1772)
							{
							}
							HX_STACK_LINE(1772)
							hx::MultEq(_this->localCOMx,t);
							HX_STACK_LINE(1772)
							hx::MultEq(_this->localCOMy,t);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,localCOM_validate,(void))

Void ZPP_Polygon_obj::__validate_localCOM( ){
{
		HX_STACK_PUSH("ZPP_Polygon::__validate_localCOM","zpp_nape/shape/Polygon.hx",1621);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1623)
		if (((this->lverts->next == null()))){
			HX_STACK_LINE(1623)
			hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
		}
		HX_STACK_LINE(1625)
		if (((this->lverts->next->next == null()))){
			HX_STACK_LINE(1626)
			this->localCOMx = this->lverts->next->x;
			HX_STACK_LINE(1627)
			this->localCOMy = this->lverts->next->y;
			HX_STACK_LINE(1628)
			{
			}
			HX_STACK_LINE(1636)
			{
			}
		}
		else{
			HX_STACK_LINE(1645)
			if (((this->lverts->next->next->next == null()))){
				HX_STACK_LINE(1646)
				{
					HX_STACK_LINE(1647)
					this->localCOMx = this->lverts->next->x;
					HX_STACK_LINE(1648)
					this->localCOMy = this->lverts->next->y;
					HX_STACK_LINE(1649)
					{
					}
					HX_STACK_LINE(1657)
					{
					}
				}
				HX_STACK_LINE(1666)
				{
					HX_STACK_LINE(1667)
					Float t = 1.0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1668)
					{
					}
					HX_STACK_LINE(1676)
					hx::AddEq(this->localCOMx,(this->lverts->next->next->x * t));
					HX_STACK_LINE(1677)
					hx::AddEq(this->localCOMy,(this->lverts->next->next->y * t));
				}
				HX_STACK_LINE(1679)
				{
					HX_STACK_LINE(1680)
					Float t = 0.5;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1681)
					{
					}
					HX_STACK_LINE(1689)
					hx::MultEq(this->localCOMx,t);
					HX_STACK_LINE(1690)
					hx::MultEq(this->localCOMy,t);
				}
			}
			else{
				HX_STACK_LINE(1694)
				{
					HX_STACK_LINE(1695)
					this->localCOMx = (int)0;
					HX_STACK_LINE(1696)
					this->localCOMy = (int)0;
					HX_STACK_LINE(1697)
					{
					}
					HX_STACK_LINE(1705)
					{
					}
				}
				HX_STACK_LINE(1714)
				Float area = 0.0;		HX_STACK_VAR(area,"area");
				HX_STACK_LINE(1715)
				{
					HX_STACK_LINE(1716)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1717)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(1718)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1719)
					::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1720)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1721)
					while(((cx_ite != null()))){
						HX_STACK_LINE(1722)
						::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(1723)
						{
							HX_STACK_LINE(1724)
							hx::AddEq(area,(v->x * ((w->y - u->y))));
							HX_STACK_LINE(1725)
							Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
							HX_STACK_LINE(1726)
							hx::AddEq(this->localCOMx,(((v->x + w->x)) * cf));
							HX_STACK_LINE(1727)
							hx::AddEq(this->localCOMy,(((v->y + w->y)) * cf));
						}
						HX_STACK_LINE(1729)
						u = v;
						HX_STACK_LINE(1730)
						v = w;
						HX_STACK_LINE(1731)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(1733)
					cx_ite = this->lverts->next;
					HX_STACK_LINE(1734)
					::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(1735)
					{
						HX_STACK_LINE(1736)
						hx::AddEq(area,(v->x * ((w->y - u->y))));
						HX_STACK_LINE(1737)
						Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
						HX_STACK_LINE(1738)
						hx::AddEq(this->localCOMx,(((v->x + w->x)) * cf));
						HX_STACK_LINE(1739)
						hx::AddEq(this->localCOMy,(((v->y + w->y)) * cf));
					}
					HX_STACK_LINE(1741)
					u = v;
					HX_STACK_LINE(1742)
					v = w;
					HX_STACK_LINE(1743)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1744)
					::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(1745)
					{
						HX_STACK_LINE(1746)
						hx::AddEq(area,(v->x * ((w1->y - u->y))));
						HX_STACK_LINE(1747)
						Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
						HX_STACK_LINE(1748)
						hx::AddEq(this->localCOMx,(((v->x + w1->x)) * cf));
						HX_STACK_LINE(1749)
						hx::AddEq(this->localCOMy,(((v->y + w1->y)) * cf));
					}
				}
				HX_STACK_LINE(1752)
				area = (Float((int)1) / Float((((int)3 * area))));
				HX_STACK_LINE(1753)
				{
					HX_STACK_LINE(1754)
					Float t = area;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1755)
					{
					}
					HX_STACK_LINE(1763)
					hx::MultEq(this->localCOMx,t);
					HX_STACK_LINE(1764)
					hx::MultEq(this->localCOMy,t);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__validate_localCOM,(void))

Void ZPP_Polygon_obj::__validate_angDrag( ){
{
		HX_STACK_PUSH("ZPP_Polygon::__validate_angDrag","zpp_nape/shape/Polygon.hx",1393);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1395)
		if (((this->lverts->length < (int)3))){
			HX_STACK_LINE(1395)
			hx::Throw (HX_CSTRING("Error: Polygon's with less than 3 vertices have no meaningful angDrag"));
		}
		HX_STACK_LINE(1397)
		this->validate_area_inertia();
		HX_STACK_LINE(1398)
		this->validate_laxi();
		HX_STACK_LINE(1399)
		Float accum = 0.0;		HX_STACK_VAR(accum,"accum");
		HX_STACK_LINE(1400)
		::zpp_nape::util::ZNPNode_ZPP_Edge ei = this->edges->head;		HX_STACK_VAR(ei,"ei");
		HX_STACK_LINE(1401)
		Float perim = 0.0;		HX_STACK_VAR(perim,"perim");
		HX_STACK_LINE(1402)
		{
			HX_STACK_LINE(1403)
			bool cx_cont = true;		HX_STACK_VAR(cx_cont,"cx_cont");
			HX_STACK_LINE(1404)
			::zpp_nape::geom::ZPP_Vec2 cx_itei = this->lverts->next;		HX_STACK_VAR(cx_itei,"cx_itei");
			HX_STACK_LINE(1405)
			::zpp_nape::geom::ZPP_Vec2 u = cx_itei;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(1406)
			::zpp_nape::geom::ZPP_Vec2 cx_itej = cx_itei->next;		HX_STACK_VAR(cx_itej,"cx_itej");
			HX_STACK_LINE(1407)
			while(((cx_itej != null()))){
				HX_STACK_LINE(1408)
				::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(1409)
				{
					HX_STACK_LINE(1410)
					::zpp_nape::shape::ZPP_Edge edge = ei->elt;		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(1411)
					ei = ei->next;
					HX_STACK_LINE(1412)
					hx::AddEq(perim,edge->length);
					HX_STACK_LINE(1413)
					Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(1414)
					Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(1415)
					{
						HX_STACK_LINE(1416)
						dx = (v->x - u->x);
						HX_STACK_LINE(1417)
						dy = (v->y - u->y);
					}
					HX_STACK_LINE(1419)
					hx::AddEq(accum,((((edge->length * ::nape::Config_obj::fluidAngularDragFriction) * this->material->dynamicFriction) * edge->lprojection) * edge->lprojection));
					HX_STACK_LINE(1420)
					Float t = (Float(-((((u->y * edge->lnormx) - (u->x * edge->lnormy))))) / Float((((dy * edge->lnormx) - (dx * edge->lnormy)))));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1421)
					if (((t > (int)0))){
						HX_STACK_LINE(1422)
						Float ta = (  (((t > (int)1))) ? Float((int)1) : Float(t) );		HX_STACK_VAR(ta,"ta");
						HX_STACK_LINE(1423)
						Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(1424)
						Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(1425)
						{
							HX_STACK_LINE(1426)
							cx = u->x;
							HX_STACK_LINE(1427)
							cy = u->y;
							HX_STACK_LINE(1428)
							{
							}
							HX_STACK_LINE(1436)
							{
							}
						}
						HX_STACK_LINE(1445)
						{
							HX_STACK_LINE(1446)
							Float t1 = ta;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(1447)
							{
							}
							HX_STACK_LINE(1455)
							hx::AddEq(cx,(dx * t1));
							HX_STACK_LINE(1456)
							hx::AddEq(cy,(dy * t1));
						}
						HX_STACK_LINE(1458)
						Float dota = ((edge->lnormy * u->x) - (edge->lnormx * u->y));		HX_STACK_VAR(dota,"dota");
						HX_STACK_LINE(1459)
						Float dotb = ((edge->lnormy * cx) - (edge->lnormx * cy));		HX_STACK_VAR(dotb,"dotb");
						HX_STACK_LINE(1460)
						Float dots = (Float(((((dotb * dotb) * dotb) - ((dota * dota) * dota)))) / Float((((int)3 * ((dotb - dota))))));		HX_STACK_VAR(dots,"dots");
						HX_STACK_LINE(1461)
						hx::AddEq(accum,(((dots * ta) * edge->length) * ::nape::Config_obj::fluidAngularDrag));
					}
					HX_STACK_LINE(1463)
					if (((t < (int)1))){
						HX_STACK_LINE(1464)
						Float tb = (  (((t < (int)0))) ? Float((int)0) : Float(t) );		HX_STACK_VAR(tb,"tb");
						HX_STACK_LINE(1465)
						Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(1466)
						Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(1467)
						{
							HX_STACK_LINE(1468)
							cx = u->x;
							HX_STACK_LINE(1469)
							cy = u->y;
							HX_STACK_LINE(1470)
							{
							}
							HX_STACK_LINE(1478)
							{
							}
						}
						HX_STACK_LINE(1487)
						{
							HX_STACK_LINE(1488)
							Float t1 = tb;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(1489)
							{
							}
							HX_STACK_LINE(1497)
							hx::AddEq(cx,(dx * t1));
							HX_STACK_LINE(1498)
							hx::AddEq(cy,(dy * t1));
						}
						HX_STACK_LINE(1500)
						Float dota = ((edge->lnormy * cx) - (edge->lnormx * cy));		HX_STACK_VAR(dota,"dota");
						HX_STACK_LINE(1501)
						Float dotb = ((edge->lnormy * v->x) - (edge->lnormx * v->y));		HX_STACK_VAR(dotb,"dotb");
						HX_STACK_LINE(1502)
						Float dots = (Float(((((dotb * dotb) * dotb) - ((dota * dota) * dota)))) / Float((((int)3 * ((dotb - dota))))));		HX_STACK_VAR(dots,"dots");
						HX_STACK_LINE(1503)
						hx::AddEq(accum,((((dots * ::nape::Config_obj::fluidVacuumDrag) * (((int)1 - tb))) * edge->length) * ::nape::Config_obj::fluidAngularDrag));
					}
				}
				HX_STACK_LINE(1506)
				{
					HX_STACK_LINE(1507)
					cx_itei = cx_itej;
					HX_STACK_LINE(1508)
					u = v;
					HX_STACK_LINE(1509)
					cx_itej = cx_itej->next;
				}
			}
			HX_STACK_LINE(1512)
			if ((cx_cont)){
				HX_STACK_LINE(1512)
				do{
					HX_STACK_LINE(1514)
					cx_itej = this->lverts->next;
					HX_STACK_LINE(1515)
					::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1516)
					{
						HX_STACK_LINE(1517)
						::zpp_nape::shape::ZPP_Edge edge = ei->elt;		HX_STACK_VAR(edge,"edge");
						HX_STACK_LINE(1518)
						ei = ei->next;
						HX_STACK_LINE(1519)
						hx::AddEq(perim,edge->length);
						HX_STACK_LINE(1520)
						Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(1521)
						Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(1522)
						{
							HX_STACK_LINE(1523)
							dx = (v->x - u->x);
							HX_STACK_LINE(1524)
							dy = (v->y - u->y);
						}
						HX_STACK_LINE(1526)
						hx::AddEq(accum,((((edge->length * ::nape::Config_obj::fluidAngularDragFriction) * this->material->dynamicFriction) * edge->lprojection) * edge->lprojection));
						HX_STACK_LINE(1527)
						Float t = (Float(-((((u->y * edge->lnormx) - (u->x * edge->lnormy))))) / Float((((dy * edge->lnormx) - (dx * edge->lnormy)))));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1528)
						if (((t > (int)0))){
							HX_STACK_LINE(1529)
							Float ta = (  (((t > (int)1))) ? Float((int)1) : Float(t) );		HX_STACK_VAR(ta,"ta");
							HX_STACK_LINE(1530)
							Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(1531)
							Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(1532)
							{
								HX_STACK_LINE(1533)
								cx = u->x;
								HX_STACK_LINE(1534)
								cy = u->y;
								HX_STACK_LINE(1535)
								{
								}
								HX_STACK_LINE(1543)
								{
								}
							}
							HX_STACK_LINE(1552)
							{
								HX_STACK_LINE(1553)
								Float t1 = ta;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(1554)
								{
								}
								HX_STACK_LINE(1562)
								hx::AddEq(cx,(dx * t1));
								HX_STACK_LINE(1563)
								hx::AddEq(cy,(dy * t1));
							}
							HX_STACK_LINE(1565)
							Float dota = ((edge->lnormy * u->x) - (edge->lnormx * u->y));		HX_STACK_VAR(dota,"dota");
							HX_STACK_LINE(1566)
							Float dotb = ((edge->lnormy * cx) - (edge->lnormx * cy));		HX_STACK_VAR(dotb,"dotb");
							HX_STACK_LINE(1567)
							Float dots = (Float(((((dotb * dotb) * dotb) - ((dota * dota) * dota)))) / Float((((int)3 * ((dotb - dota))))));		HX_STACK_VAR(dots,"dots");
							HX_STACK_LINE(1568)
							hx::AddEq(accum,(((dots * ta) * edge->length) * ::nape::Config_obj::fluidAngularDrag));
						}
						HX_STACK_LINE(1570)
						if (((t < (int)1))){
							HX_STACK_LINE(1571)
							Float tb = (  (((t < (int)0))) ? Float((int)0) : Float(t) );		HX_STACK_VAR(tb,"tb");
							HX_STACK_LINE(1572)
							Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(1573)
							Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(1574)
							{
								HX_STACK_LINE(1575)
								cx = u->x;
								HX_STACK_LINE(1576)
								cy = u->y;
								HX_STACK_LINE(1577)
								{
								}
								HX_STACK_LINE(1585)
								{
								}
							}
							HX_STACK_LINE(1594)
							{
								HX_STACK_LINE(1595)
								Float t1 = tb;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(1596)
								{
								}
								HX_STACK_LINE(1604)
								hx::AddEq(cx,(dx * t1));
								HX_STACK_LINE(1605)
								hx::AddEq(cy,(dy * t1));
							}
							HX_STACK_LINE(1607)
							Float dota = ((edge->lnormy * cx) - (edge->lnormx * cy));		HX_STACK_VAR(dota,"dota");
							HX_STACK_LINE(1608)
							Float dotb = ((edge->lnormy * v->x) - (edge->lnormx * v->y));		HX_STACK_VAR(dotb,"dotb");
							HX_STACK_LINE(1609)
							Float dots = (Float(((((dotb * dotb) * dotb) - ((dota * dota) * dota)))) / Float((((int)3 * ((dotb - dota))))));		HX_STACK_VAR(dots,"dots");
							HX_STACK_LINE(1610)
							hx::AddEq(accum,((((dots * ::nape::Config_obj::fluidVacuumDrag) * (((int)1 - tb))) * edge->length) * ::nape::Config_obj::fluidAngularDrag));
						}
					}
				}
while((false));
			}
		}
		HX_STACK_LINE(1617)
		this->angDrag = (Float(accum) / Float(((this->inertia * perim))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__validate_angDrag,(void))

Void ZPP_Polygon_obj::__validate_area_inertia( ){
{
		HX_STACK_PUSH("ZPP_Polygon::__validate_area_inertia","zpp_nape/shape/Polygon.hx",1336);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1336)
		if (((bool((bool((this->lverts->next == null())) || bool((this->lverts->next->next == null())))) || bool((this->lverts->next->next->next == null()))))){
			HX_STACK_LINE(1338)
			this->area = (int)0;
			HX_STACK_LINE(1339)
			this->inertia = (int)0;
		}
		else{
			HX_STACK_LINE(1342)
			this->area = 0.0;
			HX_STACK_LINE(1343)
			Float s1 = 0.0;		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(1344)
			Float s2 = 0.0;		HX_STACK_VAR(s2,"s2");
			HX_STACK_LINE(1345)
			{
				HX_STACK_LINE(1346)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1347)
				::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(1348)
				cx_ite = cx_ite->next;
				HX_STACK_LINE(1349)
				::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(1350)
				cx_ite = cx_ite->next;
				HX_STACK_LINE(1351)
				while(((cx_ite != null()))){
					HX_STACK_LINE(1352)
					::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(1353)
					{
						HX_STACK_LINE(1354)
						Float a = ((v->y * u->x) - (v->x * u->y));		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(1355)
						Float b = ((((v->x * v->x) + (v->y * v->y)) + (((v->x * u->x) + (v->y * u->y)))) + (((u->x * u->x) + (u->y * u->y))));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(1356)
						hx::AddEq(s1,(a * b));
						HX_STACK_LINE(1357)
						hx::AddEq(s2,a);
						HX_STACK_LINE(1358)
						hx::AddEq(this->area,(v->x * ((w->y - u->y))));
					}
					HX_STACK_LINE(1360)
					u = v;
					HX_STACK_LINE(1361)
					v = w;
					HX_STACK_LINE(1362)
					cx_ite = cx_ite->next;
				}
				HX_STACK_LINE(1364)
				cx_ite = this->lverts->next;
				HX_STACK_LINE(1365)
				::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(1366)
				{
					HX_STACK_LINE(1367)
					Float a = ((v->y * u->x) - (v->x * u->y));		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1368)
					Float b = ((((v->x * v->x) + (v->y * v->y)) + (((v->x * u->x) + (v->y * u->y)))) + (((u->x * u->x) + (u->y * u->y))));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1369)
					hx::AddEq(s1,(a * b));
					HX_STACK_LINE(1370)
					hx::AddEq(s2,a);
					HX_STACK_LINE(1371)
					hx::AddEq(this->area,(v->x * ((w->y - u->y))));
				}
				HX_STACK_LINE(1373)
				u = v;
				HX_STACK_LINE(1374)
				v = w;
				HX_STACK_LINE(1375)
				cx_ite = cx_ite->next;
				HX_STACK_LINE(1376)
				::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(1377)
				{
					HX_STACK_LINE(1378)
					Float a = ((v->y * u->x) - (v->x * u->y));		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1379)
					Float b = ((((v->x * v->x) + (v->y * v->y)) + (((v->x * u->x) + (v->y * u->y)))) + (((u->x * u->x) + (u->y * u->y))));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1380)
					hx::AddEq(s1,(a * b));
					HX_STACK_LINE(1381)
					hx::AddEq(s2,a);
					HX_STACK_LINE(1382)
					hx::AddEq(this->area,(v->x * ((w1->y - u->y))));
				}
			}
			HX_STACK_LINE(1385)
			this->inertia = (Float(s1) / Float((((int)6 * s2))));
			HX_STACK_LINE(1386)
			hx::MultEq(this->area,0.5);
			HX_STACK_LINE(1387)
			if (((this->area < (int)0))){
				HX_STACK_LINE(1388)
				this->area = -(this->area);
				HX_STACK_LINE(1389)
				this->reverse_vertices();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__validate_area_inertia,(void))

Void ZPP_Polygon_obj::__validate_sweepRadius( ){
{
		HX_STACK_PUSH("ZPP_Polygon::__validate_sweepRadius","zpp_nape/shape/Polygon.hx",1302);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1303)
		Float maxRadius = 0.0;		HX_STACK_VAR(maxRadius,"maxRadius");
		HX_STACK_LINE(1304)
		Float minRadius = 0.0;		HX_STACK_VAR(minRadius,"minRadius");
		HX_STACK_LINE(1305)
		this->validate_laxi();
		HX_STACK_LINE(1306)
		{
			HX_STACK_LINE(1307)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1308)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1309)
				::zpp_nape::geom::ZPP_Vec2 x = cx_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1310)
				{
					HX_STACK_LINE(1311)
					Float r = ((x->x * x->x) + (x->y * x->y));		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(1312)
					if (((r > maxRadius))){
						HX_STACK_LINE(1312)
						maxRadius = r;
					}
				}
				HX_STACK_LINE(1316)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1319)
		{
			HX_STACK_LINE(1320)
			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = this->edges->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1321)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1322)
				::zpp_nape::shape::ZPP_Edge e = cx_ite->elt;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(1323)
				if (((e->lprojection < minRadius))){
					HX_STACK_LINE(1325)
					minRadius = e->lprojection;
					HX_STACK_LINE(1326)
					if (((minRadius < (int)0))){
						HX_STACK_LINE(1326)
						break;
					}
				}
				HX_STACK_LINE(1329)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1332)
		if (((minRadius < (int)0))){
			HX_STACK_LINE(1332)
			minRadius = (int)0;
		}
		HX_STACK_LINE(1333)
		this->sweepRadius = ::Math_obj::sqrt(maxRadius);
		HX_STACK_LINE(1334)
		this->sweepCoef = (this->sweepRadius - minRadius);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__validate_sweepRadius,(void))

Void ZPP_Polygon_obj::_force_validate_aabb( ){
{
		HX_STACK_PUSH("ZPP_Polygon::_force_validate_aabb","zpp_nape/shape/Polygon.hx",1233);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1234)
		::zpp_nape::geom::ZPP_Vec2 li = this->lverts->next;		HX_STACK_VAR(li,"li");
		HX_STACK_LINE(1235)
		::zpp_nape::geom::ZPP_Vec2 p0 = this->gverts->next;		HX_STACK_VAR(p0,"p0");
		HX_STACK_LINE(1236)
		::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1237)
		li = li->next;
		HX_STACK_LINE(1238)
		{
			HX_STACK_LINE(1239)
			p0->x = (this->body->posx + (((this->body->axisy * l->x) - (this->body->axisx * l->y))));
			HX_STACK_LINE(1240)
			p0->y = (this->body->posy + (((l->x * this->body->axisx) + (l->y * this->body->axisy))));
		}
		HX_STACK_LINE(1242)
		{
			HX_STACK_LINE(1243)
			this->aabb->minx = p0->x;
			HX_STACK_LINE(1244)
			this->aabb->miny = p0->y;
			HX_STACK_LINE(1245)
			{
			}
			HX_STACK_LINE(1253)
			{
			}
		}
		HX_STACK_LINE(1262)
		{
			HX_STACK_LINE(1263)
			this->aabb->maxx = p0->x;
			HX_STACK_LINE(1264)
			this->aabb->maxy = p0->y;
			HX_STACK_LINE(1265)
			{
			}
			HX_STACK_LINE(1273)
			{
			}
		}
		HX_STACK_LINE(1282)
		{
			HX_STACK_LINE(1283)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1284)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1285)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1286)
				{
					HX_STACK_LINE(1287)
					::zpp_nape::geom::ZPP_Vec2 l1 = li;		HX_STACK_VAR(l1,"l1");
					HX_STACK_LINE(1288)
					li = li->next;
					HX_STACK_LINE(1289)
					{
						HX_STACK_LINE(1290)
						p->x = (this->body->posx + (((this->body->axisy * l1->x) - (this->body->axisx * l1->y))));
						HX_STACK_LINE(1291)
						p->y = (this->body->posy + (((l1->x * this->body->axisx) + (l1->y * this->body->axisy))));
					}
					HX_STACK_LINE(1293)
					if (((p->x < this->aabb->minx))){
						HX_STACK_LINE(1293)
						this->aabb->minx = p->x;
					}
					HX_STACK_LINE(1294)
					if (((p->x > this->aabb->maxx))){
						HX_STACK_LINE(1294)
						this->aabb->maxx = p->x;
					}
					HX_STACK_LINE(1295)
					if (((p->y < this->aabb->miny))){
						HX_STACK_LINE(1295)
						this->aabb->miny = p->y;
					}
					HX_STACK_LINE(1296)
					if (((p->y > this->aabb->maxy))){
						HX_STACK_LINE(1296)
						this->aabb->maxy = p->y;
					}
				}
				HX_STACK_LINE(1298)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,_force_validate_aabb,(void))

Void ZPP_Polygon_obj::__validate_aabb( ){
{
		HX_STACK_PUSH("ZPP_Polygon::__validate_aabb","zpp_nape/shape/Polygon.hx",1171);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1172)
		if ((this->zip_gverts)){
			HX_STACK_LINE(1172)
			if (((this->body != null()))){
				HX_STACK_LINE(1172)
				this->zip_gverts = false;
				HX_STACK_LINE(1172)
				this->validate_lverts();
				HX_STACK_LINE(1172)
				{
					HX_STACK_LINE(1172)
					::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1172)
					if ((_this->zip_axis)){
						HX_STACK_LINE(1172)
						_this->zip_axis = false;
						HX_STACK_LINE(1172)
						{
							HX_STACK_LINE(1172)
							_this->axisx = ::Math_obj::sin(_this->rot);
							HX_STACK_LINE(1172)
							_this->axisy = ::Math_obj::cos(_this->rot);
							HX_STACK_LINE(1172)
							{
							}
							HX_STACK_LINE(1172)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(1172)
				::zpp_nape::geom::ZPP_Vec2 li = this->lverts->next;		HX_STACK_VAR(li,"li");
				HX_STACK_LINE(1172)
				{
					HX_STACK_LINE(1172)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1172)
					while(((cx_ite != null()))){
						HX_STACK_LINE(1172)
						::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(1172)
						{
							HX_STACK_LINE(1172)
							::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(1172)
							li = li->next;
							HX_STACK_LINE(1172)
							{
								HX_STACK_LINE(1172)
								g->x = (this->body->posx + (((this->body->axisy * l->x) - (this->body->axisx * l->y))));
								HX_STACK_LINE(1172)
								g->y = (this->body->posy + (((l->x * this->body->axisx) + (l->y * this->body->axisy))));
							}
						}
						HX_STACK_LINE(1172)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
		HX_STACK_LINE(1174)
		if (((this->lverts->next == null()))){
			HX_STACK_LINE(1174)
			hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
		}
		HX_STACK_LINE(1176)
		::zpp_nape::geom::ZPP_Vec2 p0 = this->gverts->next;		HX_STACK_VAR(p0,"p0");
		HX_STACK_LINE(1177)
		{
			HX_STACK_LINE(1178)
			this->aabb->minx = p0->x;
			HX_STACK_LINE(1179)
			this->aabb->miny = p0->y;
			HX_STACK_LINE(1180)
			{
			}
			HX_STACK_LINE(1188)
			{
			}
		}
		HX_STACK_LINE(1197)
		{
			HX_STACK_LINE(1198)
			this->aabb->maxx = p0->x;
			HX_STACK_LINE(1199)
			this->aabb->maxy = p0->y;
			HX_STACK_LINE(1200)
			{
			}
			HX_STACK_LINE(1208)
			{
			}
		}
		HX_STACK_LINE(1217)
		{
			HX_STACK_LINE(1218)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1219)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1220)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1221)
				{
					HX_STACK_LINE(1222)
					if (((p->x < this->aabb->minx))){
						HX_STACK_LINE(1222)
						this->aabb->minx = p->x;
					}
					HX_STACK_LINE(1223)
					if (((p->x > this->aabb->maxx))){
						HX_STACK_LINE(1223)
						this->aabb->maxx = p->x;
					}
					HX_STACK_LINE(1224)
					if (((p->y < this->aabb->miny))){
						HX_STACK_LINE(1224)
						this->aabb->miny = p->y;
					}
					HX_STACK_LINE(1225)
					if (((p->y > this->aabb->maxy))){
						HX_STACK_LINE(1225)
						this->aabb->maxy = p->y;
					}
				}
				HX_STACK_LINE(1227)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__validate_aabb,(void))

Void ZPP_Polygon_obj::validate_gaxi( ){
{
		HX_STACK_PUSH("ZPP_Polygon::validate_gaxi","zpp_nape/shape/Polygon.hx",1081);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1081)
		if ((this->zip_gaxi)){
			HX_STACK_LINE(1082)
			if (((this->body != null()))){
				HX_STACK_LINE(1084)
				this->zip_gaxi = false;
				HX_STACK_LINE(1085)
				this->validate_laxi();
				HX_STACK_LINE(1086)
				{
					HX_STACK_LINE(1086)
					::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1086)
					if ((_this->zip_axis)){
						HX_STACK_LINE(1086)
						_this->zip_axis = false;
						HX_STACK_LINE(1086)
						{
							HX_STACK_LINE(1086)
							_this->axisx = ::Math_obj::sin(_this->rot);
							HX_STACK_LINE(1086)
							_this->axisy = ::Math_obj::cos(_this->rot);
							HX_STACK_LINE(1086)
							{
							}
							HX_STACK_LINE(1086)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(1087)
				if ((this->zip_gverts)){
					HX_STACK_LINE(1087)
					if (((this->body != null()))){
						HX_STACK_LINE(1087)
						this->zip_gverts = false;
						HX_STACK_LINE(1087)
						this->validate_lverts();
						HX_STACK_LINE(1087)
						{
							HX_STACK_LINE(1087)
							::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1087)
							if ((_this->zip_axis)){
								HX_STACK_LINE(1087)
								_this->zip_axis = false;
								HX_STACK_LINE(1087)
								{
									HX_STACK_LINE(1087)
									_this->axisx = ::Math_obj::sin(_this->rot);
									HX_STACK_LINE(1087)
									_this->axisy = ::Math_obj::cos(_this->rot);
									HX_STACK_LINE(1087)
									{
									}
									HX_STACK_LINE(1087)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(1087)
						::zpp_nape::geom::ZPP_Vec2 li = this->lverts->next;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(1087)
						{
							HX_STACK_LINE(1087)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(1087)
							while(((cx_ite != null()))){
								HX_STACK_LINE(1087)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1087)
								{
									HX_STACK_LINE(1087)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(1087)
									li = li->next;
									HX_STACK_LINE(1087)
									{
										HX_STACK_LINE(1087)
										g->x = (this->body->posx + (((this->body->axisy * l->x) - (this->body->axisx * l->y))));
										HX_STACK_LINE(1087)
										g->y = (this->body->posy + (((l->x * this->body->axisx) + (l->y * this->body->axisy))));
									}
								}
								HX_STACK_LINE(1087)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(1088)
				::zpp_nape::util::ZNPNode_ZPP_Edge ite = this->edges->head;		HX_STACK_VAR(ite,"ite");
				HX_STACK_LINE(1089)
				{
					HX_STACK_LINE(1090)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1091)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(1092)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1093)
					while(((cx_ite != null()))){
						HX_STACK_LINE(1094)
						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1095)
						{
							HX_STACK_LINE(1096)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(1097)
							ite = ite->next;
							HX_STACK_LINE(1098)
							e->gp0 = u;
							HX_STACK_LINE(1099)
							e->gp1 = v;
							HX_STACK_LINE(1100)
							{
								HX_STACK_LINE(1101)
								e->gnormx = ((this->body->axisy * e->lnormx) - (this->body->axisx * e->lnormy));
								HX_STACK_LINE(1102)
								e->gnormy = ((e->lnormx * this->body->axisx) + (e->lnormy * this->body->axisy));
							}
							HX_STACK_LINE(1104)
							e->gprojection = (((this->body->posx * e->gnormx) + (this->body->posy * e->gnormy)) + e->lprojection);
							HX_STACK_LINE(1105)
							if (((e->wrap_gnorm != null()))){
								HX_STACK_LINE(1106)
								e->wrap_gnorm->zpp_inner->x = e->gnormx;
								HX_STACK_LINE(1107)
								e->wrap_gnorm->zpp_inner->y = e->gnormy;
								HX_STACK_LINE(1108)
								{
								}
								HX_STACK_LINE(1116)
								{
								}
							}
							HX_STACK_LINE(1125)
							e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
							HX_STACK_LINE(1126)
							e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
						}
						HX_STACK_LINE(1128)
						u = v;
						HX_STACK_LINE(1129)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(1131)
					::zpp_nape::geom::ZPP_Vec2 v = this->gverts->next;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1132)
					{
						HX_STACK_LINE(1133)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(1134)
						ite = ite->next;
						HX_STACK_LINE(1135)
						e->gp0 = u;
						HX_STACK_LINE(1136)
						e->gp1 = v;
						HX_STACK_LINE(1137)
						{
							HX_STACK_LINE(1138)
							e->gnormx = ((this->body->axisy * e->lnormx) - (this->body->axisx * e->lnormy));
							HX_STACK_LINE(1139)
							e->gnormy = ((e->lnormx * this->body->axisx) + (e->lnormy * this->body->axisy));
						}
						HX_STACK_LINE(1141)
						e->gprojection = (((this->body->posx * e->gnormx) + (this->body->posy * e->gnormy)) + e->lprojection);
						HX_STACK_LINE(1142)
						if (((e->wrap_gnorm != null()))){
							HX_STACK_LINE(1143)
							e->wrap_gnorm->zpp_inner->x = e->gnormx;
							HX_STACK_LINE(1144)
							e->wrap_gnorm->zpp_inner->y = e->gnormy;
							HX_STACK_LINE(1145)
							{
							}
							HX_STACK_LINE(1153)
							{
							}
						}
						HX_STACK_LINE(1162)
						e->tp0 = ((e->gp0->y * e->gnormx) - (e->gp0->x * e->gnormy));
						HX_STACK_LINE(1163)
						e->tp1 = ((e->gp1->y * e->gnormx) - (e->gp1->x * e->gnormy));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,validate_gaxi,(void))

Void ZPP_Polygon_obj::validate_gverts( ){
{
		HX_STACK_PUSH("ZPP_Polygon::validate_gverts","zpp_nape/shape/Polygon.hx",1055);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1055)
		if ((this->zip_gverts)){
			HX_STACK_LINE(1056)
			if (((this->body != null()))){
				HX_STACK_LINE(1058)
				this->zip_gverts = false;
				HX_STACK_LINE(1059)
				this->validate_lverts();
				HX_STACK_LINE(1060)
				{
					HX_STACK_LINE(1060)
					::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1060)
					if ((_this->zip_axis)){
						HX_STACK_LINE(1060)
						_this->zip_axis = false;
						HX_STACK_LINE(1060)
						{
							HX_STACK_LINE(1060)
							_this->axisx = ::Math_obj::sin(_this->rot);
							HX_STACK_LINE(1060)
							_this->axisy = ::Math_obj::cos(_this->rot);
							HX_STACK_LINE(1060)
							{
							}
							HX_STACK_LINE(1060)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(1061)
				::zpp_nape::geom::ZPP_Vec2 li = this->lverts->next;		HX_STACK_VAR(li,"li");
				HX_STACK_LINE(1062)
				{
					HX_STACK_LINE(1063)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1064)
					while(((cx_ite != null()))){
						HX_STACK_LINE(1065)
						::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(1066)
						{
							HX_STACK_LINE(1067)
							::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(1068)
							li = li->next;
							HX_STACK_LINE(1069)
							{
								HX_STACK_LINE(1070)
								g->x = (this->body->posx + (((this->body->axisy * l->x) - (this->body->axisx * l->y))));
								HX_STACK_LINE(1071)
								g->y = (this->body->posy + (((l->x * this->body->axisx) + (l->y * this->body->axisy))));
							}
						}
						HX_STACK_LINE(1074)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,validate_gverts,(void))

Void ZPP_Polygon_obj::validate_laxi( ){
{
		HX_STACK_PUSH("ZPP_Polygon::validate_laxi","zpp_nape/shape/Polygon.hx",889);
		HX_STACK_THIS(this);
		HX_STACK_LINE(889)
		if ((this->zip_laxi)){
			HX_STACK_LINE(891)
			this->zip_laxi = false;
			HX_STACK_LINE(892)
			this->validate_lverts();
			HX_STACK_LINE(893)
			::zpp_nape::util::ZNPNode_ZPP_Edge ite = this->edges->head;		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(894)
			{
				HX_STACK_LINE(895)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(896)
				::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(897)
				cx_ite = cx_ite->next;
				HX_STACK_LINE(898)
				while(((cx_ite != null()))){
					HX_STACK_LINE(899)
					::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(900)
					{
						HX_STACK_LINE(901)
						::zpp_nape::shape::ZPP_Edge edge = ite->elt;		HX_STACK_VAR(edge,"edge");
						HX_STACK_LINE(902)
						ite = ite->next;
						HX_STACK_LINE(903)
						edge->lp0 = u;
						HX_STACK_LINE(904)
						edge->lp1 = v;
						HX_STACK_LINE(905)
						Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(906)
						Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(907)
						{
							HX_STACK_LINE(908)
							dx = (u->x - v->x);
							HX_STACK_LINE(909)
							dy = (u->y - v->y);
						}
						HX_STACK_LINE(911)
						Float l = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(912)
						edge->length = l;
						HX_STACK_LINE(913)
						{
							HX_STACK_LINE(914)
							Float t = (Float(1.0) / Float(l));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(915)
							{
							}
							HX_STACK_LINE(923)
							hx::MultEq(dx,t);
							HX_STACK_LINE(924)
							hx::MultEq(dy,t);
						}
						HX_STACK_LINE(926)
						{
							HX_STACK_LINE(927)
							Float t = dx;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(928)
							dx = -(dy);
							HX_STACK_LINE(929)
							dy = t;
						}
						HX_STACK_LINE(931)
						edge->lprojection = ((dx * u->x) + (dy * u->y));
						HX_STACK_LINE(932)
						{
							HX_STACK_LINE(933)
							edge->lnormx = dx;
							HX_STACK_LINE(934)
							edge->lnormy = dy;
							HX_STACK_LINE(935)
							{
							}
							HX_STACK_LINE(943)
							{
							}
						}
						HX_STACK_LINE(952)
						if (((edge->wrap_lnorm != null()))){
							HX_STACK_LINE(953)
							edge->wrap_lnorm->zpp_inner->x = dx;
							HX_STACK_LINE(954)
							edge->wrap_lnorm->zpp_inner->y = dy;
							HX_STACK_LINE(955)
							{
							}
							HX_STACK_LINE(963)
							{
							}
						}
					}
					HX_STACK_LINE(973)
					u = v;
					HX_STACK_LINE(974)
					cx_ite = cx_ite->next;
				}
				HX_STACK_LINE(976)
				::zpp_nape::geom::ZPP_Vec2 v = this->lverts->next;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(977)
				{
					HX_STACK_LINE(978)
					::zpp_nape::shape::ZPP_Edge edge = ite->elt;		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(979)
					ite = ite->next;
					HX_STACK_LINE(980)
					edge->lp0 = u;
					HX_STACK_LINE(981)
					edge->lp1 = v;
					HX_STACK_LINE(982)
					Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(983)
					Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(985)
						dx = (u->x - v->x);
						HX_STACK_LINE(986)
						dy = (u->y - v->y);
					}
					HX_STACK_LINE(988)
					Float l = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(989)
					edge->length = l;
					HX_STACK_LINE(990)
					{
						HX_STACK_LINE(991)
						Float t = (Float(1.0) / Float(l));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(992)
						{
						}
						HX_STACK_LINE(1000)
						hx::MultEq(dx,t);
						HX_STACK_LINE(1001)
						hx::MultEq(dy,t);
					}
					HX_STACK_LINE(1003)
					{
						HX_STACK_LINE(1004)
						Float t = dx;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1005)
						dx = -(dy);
						HX_STACK_LINE(1006)
						dy = t;
					}
					HX_STACK_LINE(1008)
					edge->lprojection = ((dx * u->x) + (dy * u->y));
					HX_STACK_LINE(1009)
					{
						HX_STACK_LINE(1010)
						edge->lnormx = dx;
						HX_STACK_LINE(1011)
						edge->lnormy = dy;
						HX_STACK_LINE(1012)
						{
						}
						HX_STACK_LINE(1020)
						{
						}
					}
					HX_STACK_LINE(1029)
					if (((edge->wrap_lnorm != null()))){
						HX_STACK_LINE(1030)
						edge->wrap_lnorm->zpp_inner->x = dx;
						HX_STACK_LINE(1031)
						edge->wrap_lnorm->zpp_inner->y = dy;
						HX_STACK_LINE(1032)
						{
						}
						HX_STACK_LINE(1040)
						{
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,validate_laxi,(void))

Void ZPP_Polygon_obj::reverse_vertices( ){
{
		HX_STACK_PUSH("ZPP_Polygon::reverse_vertices","zpp_nape/shape/Polygon.hx",877);
		HX_STACK_THIS(this);
		HX_STACK_LINE(878)
		this->lverts->reverse();
		HX_STACK_LINE(879)
		this->gverts->reverse();
		HX_STACK_LINE(880)
		this->edges->reverse();
		HX_STACK_LINE(881)
		::zpp_nape::util::ZNPNode_ZPP_Edge ite = this->edges->iterator_at((this->edgeCnt - (int)1));		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(882)
		::zpp_nape::shape::ZPP_Edge elem = this->edges->pop_unsafe();		HX_STACK_VAR(elem,"elem");
		HX_STACK_LINE(883)
		this->edges->insert(ite,elem);
		HX_STACK_LINE(884)
		this->reverse_flag = !(this->reverse_flag);
		HX_STACK_LINE(885)
		if (((this->wrap_lverts != null()))){
			HX_STACK_LINE(885)
			this->wrap_lverts->zpp_inner->reverse_flag = this->reverse_flag;
		}
		HX_STACK_LINE(886)
		if (((this->wrap_gverts != null()))){
			HX_STACK_LINE(886)
			this->wrap_gverts->zpp_inner->reverse_flag = this->reverse_flag;
		}
		HX_STACK_LINE(887)
		if (((this->wrap_edges != null()))){
			HX_STACK_LINE(887)
			this->wrap_edges->zpp_inner->reverse_flag = this->reverse_flag;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,reverse_vertices,(void))

Void ZPP_Polygon_obj::splice_collinear_real( ){
{
		HX_STACK_PUSH("ZPP_Polygon::splice_collinear_real","zpp_nape/shape/Polygon.hx",821);
		HX_STACK_THIS(this);
		HX_STACK_LINE(822)
		if (((this->lverts->next == null()))){
			HX_STACK_LINE(822)
			return null();
		}
		HX_STACK_LINE(823)
		if (((this->lverts->next->next == null()))){
			HX_STACK_LINE(823)
			return null();
		}
		HX_STACK_LINE(824)
		if (((this->lverts->next->next->next == null()))){
			HX_STACK_LINE(824)
			return null();
		}
		HX_STACK_LINE(825)
		::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(826)
		::zpp_nape::geom::ZPP_Vec2 cur = this->lverts->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(827)
		while(((cur != null()))){
			HX_STACK_LINE(828)
			::zpp_nape::geom::ZPP_Vec2 nxt = (  (((cur->next == null()))) ? ::zpp_nape::geom::ZPP_Vec2(this->lverts->next) : ::zpp_nape::geom::ZPP_Vec2(cur->next) );		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(829)
			::zpp_nape::geom::ZPP_Vec2 u = cur;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(830)
			::zpp_nape::geom::ZPP_Vec2 v = nxt;		HX_STACK_VAR(v,"v");
			struct _Function_2_1{
				inline static Float Block( ::zpp_nape::geom::ZPP_Vec2 &u,::zpp_nape::geom::ZPP_Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/shape/Polygon.hx",831);
					{
						HX_STACK_LINE(831)
						Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(831)
						Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(831)
						{
							HX_STACK_LINE(831)
							dx = (u->x - v->x);
							HX_STACK_LINE(831)
							dy = (u->y - v->y);
						}
						HX_STACK_LINE(831)
						return ((dx * dx) + (dy * dy));
					}
					return null();
				}
			};
			HX_STACK_LINE(831)
			if (((_Function_2_1::Block(u,v) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
				HX_STACK_LINE(832)
				this->cleanup_lvert(cur);
				HX_STACK_LINE(833)
				cur = this->lverts->erase(pre);
			}
			else{
				HX_STACK_LINE(836)
				pre = cur;
				HX_STACK_LINE(837)
				cur = cur->next;
			}
		}
		HX_STACK_LINE(840)
		if (((this->lverts->next == null()))){
			HX_STACK_LINE(840)
			return null();
		}
		HX_STACK_LINE(841)
		bool removed;		HX_STACK_VAR(removed,"removed");
		HX_STACK_LINE(842)
		do{
			HX_STACK_LINE(843)
			removed = false;
			HX_STACK_LINE(844)
			::zpp_nape::geom::ZPP_Vec2 pre1 = this->lverts->next;		HX_STACK_VAR(pre1,"pre1");
			HX_STACK_LINE(845)
			while(((pre1 != null()))){
				HX_STACK_LINE(846)
				::zpp_nape::geom::ZPP_Vec2 cur1 = (  (((pre1->next == null()))) ? ::zpp_nape::geom::ZPP_Vec2(this->lverts->next) : ::zpp_nape::geom::ZPP_Vec2(pre1->next) );		HX_STACK_VAR(cur1,"cur1");
				HX_STACK_LINE(847)
				::zpp_nape::geom::ZPP_Vec2 nxt = (  (((cur1->next == null()))) ? ::zpp_nape::geom::ZPP_Vec2(this->lverts->next) : ::zpp_nape::geom::ZPP_Vec2(cur1->next) );		HX_STACK_VAR(nxt,"nxt");
				HX_STACK_LINE(848)
				::zpp_nape::geom::ZPP_Vec2 u = pre1;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(849)
				::zpp_nape::geom::ZPP_Vec2 v = cur1;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(850)
				::zpp_nape::geom::ZPP_Vec2 w = nxt;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(851)
				Float ax = 0.0;		HX_STACK_VAR(ax,"ax");
				HX_STACK_LINE(852)
				Float ay = 0.0;		HX_STACK_VAR(ay,"ay");
				HX_STACK_LINE(853)
				{
					HX_STACK_LINE(854)
					ax = (v->x - u->x);
					HX_STACK_LINE(855)
					ay = (v->y - u->y);
				}
				HX_STACK_LINE(857)
				Float bx = 0.0;		HX_STACK_VAR(bx,"bx");
				HX_STACK_LINE(858)
				Float by = 0.0;		HX_STACK_VAR(by,"by");
				HX_STACK_LINE(859)
				{
					HX_STACK_LINE(860)
					bx = (w->x - v->x);
					HX_STACK_LINE(861)
					by = (w->y - v->y);
				}
				HX_STACK_LINE(863)
				Float crs = ((by * ax) - (bx * ay));		HX_STACK_VAR(crs,"crs");
				HX_STACK_LINE(864)
				if ((((crs * crs) >= (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
					HX_STACK_LINE(864)
					pre1 = pre1->next;
				}
				else{
					HX_STACK_LINE(868)
					this->cleanup_lvert(cur1);
					HX_STACK_LINE(869)
					this->lverts->erase((  (((pre1->next == null()))) ? ::zpp_nape::geom::ZPP_Vec2(null()) : ::zpp_nape::geom::ZPP_Vec2(pre1) ));
					HX_STACK_LINE(870)
					removed = true;
					HX_STACK_LINE(871)
					pre1 = pre1->next;
				}
			}
		}
while((removed));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,splice_collinear_real,(void))

Void ZPP_Polygon_obj::splice_collinear( ){
{
		HX_STACK_PUSH("ZPP_Polygon::splice_collinear","zpp_nape/shape/Polygon.hx",815);
		HX_STACK_THIS(this);
		HX_STACK_LINE(815)
		if ((this->zip_sanitation)){
			HX_STACK_LINE(817)
			this->zip_sanitation = false;
			HX_STACK_LINE(818)
			this->splice_collinear_real();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,splice_collinear,(void))

Void ZPP_Polygon_obj::cleanup_lvert( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_Polygon::cleanup_lvert","zpp_nape/shape/Polygon.hx",714);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(715)
		::zpp_nape::geom::ZPP_Vec2 ite = null();		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(716)
		::zpp_nape::util::ZNPNode_ZPP_Edge ite2 = null();		HX_STACK_VAR(ite2,"ite2");
		HX_STACK_LINE(717)
		{
			HX_STACK_LINE(718)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(719)
			while(((cx_ite != null()))){
				HX_STACK_LINE(720)
				::zpp_nape::geom::ZPP_Vec2 i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(721)
				if (((i == x))){
					HX_STACK_LINE(722)
					break;
				}
				else{
					HX_STACK_LINE(724)
					ite = (  (((ite == null()))) ? ::zpp_nape::geom::ZPP_Vec2(this->gverts->next) : ::zpp_nape::geom::ZPP_Vec2(ite->next) );
					HX_STACK_LINE(725)
					ite2 = (  (((ite2 == null()))) ? ::zpp_nape::util::ZNPNode_ZPP_Edge(this->edges->head) : ::zpp_nape::util::ZNPNode_ZPP_Edge(ite2->next) );
				}
				HX_STACK_LINE(728)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(731)
		::zpp_nape::geom::ZPP_Vec2 rem = (  (((ite == null()))) ? ::zpp_nape::geom::ZPP_Vec2(this->gverts->next) : ::zpp_nape::geom::ZPP_Vec2(ite->next) );		HX_STACK_VAR(rem,"rem");
		HX_STACK_LINE(732)
		this->gverts->erase(ite);
		HX_STACK_LINE(733)
		{
			HX_STACK_LINE(734)
			::zpp_nape::geom::ZPP_Vec2 o = rem;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(735)
			{
			}
			HX_STACK_LINE(743)
			{
				HX_STACK_LINE(743)
				if (((o->outer != null()))){
					HX_STACK_LINE(743)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(743)
					o->outer = null();
				}
				HX_STACK_LINE(743)
				o->_isimmutable = null();
				HX_STACK_LINE(743)
				o->_validate = null();
				HX_STACK_LINE(743)
				o->_invalidate = null();
			}
			HX_STACK_LINE(744)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(745)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(750)
		if (((this->edgeCnt == (int)2))){
			HX_STACK_LINE(751)
			::zpp_nape::shape::ZPP_Edge rem1 = this->edges->pop_unsafe();		HX_STACK_VAR(rem1,"rem1");
			HX_STACK_LINE(752)
			{
				HX_STACK_LINE(753)
				::zpp_nape::shape::ZPP_Edge o = rem1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(754)
				{
				}
				HX_STACK_LINE(762)
				o->polygon = null();
				HX_STACK_LINE(763)
				o->next = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;
				HX_STACK_LINE(764)
				::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = o;
			}
			HX_STACK_LINE(769)
			rem1 = this->edges->pop_unsafe();
			HX_STACK_LINE(770)
			{
				HX_STACK_LINE(771)
				::zpp_nape::shape::ZPP_Edge o = rem1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(772)
				{
				}
				HX_STACK_LINE(780)
				o->polygon = null();
				HX_STACK_LINE(781)
				o->next = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;
				HX_STACK_LINE(782)
				::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = o;
			}
			HX_STACK_LINE(787)
			this->edgeCnt = (int)0;
		}
		else{
			HX_STACK_LINE(789)
			if (((this->edgeCnt != (int)0))){
				HX_STACK_LINE(790)
				::zpp_nape::shape::ZPP_Edge rem1 = (  (((ite2 == null()))) ? ::zpp_nape::shape::ZPP_Edge(this->edges->head->elt) : ::zpp_nape::shape::ZPP_Edge(ite2->next->elt) );		HX_STACK_VAR(rem1,"rem1");
				HX_STACK_LINE(791)
				this->edges->erase(ite2);
				HX_STACK_LINE(792)
				{
					HX_STACK_LINE(793)
					::zpp_nape::shape::ZPP_Edge o = rem1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(794)
					{
					}
					HX_STACK_LINE(802)
					o->polygon = null();
					HX_STACK_LINE(803)
					o->next = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;
					HX_STACK_LINE(804)
					::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = o;
				}
				HX_STACK_LINE(809)
				(this->edgeCnt)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,cleanup_lvert,(void))

Void ZPP_Polygon_obj::validate_lverts( ){
{
		HX_STACK_PUSH("ZPP_Polygon::validate_lverts","zpp_nape/shape/Polygon.hx",702);
		HX_STACK_THIS(this);
		HX_STACK_LINE(702)
		if ((this->zip_lverts)){
			HX_STACK_LINE(704)
			this->zip_lverts = false;
			HX_STACK_LINE(705)
			if (((this->lverts->length > (int)2))){
				HX_STACK_LINE(706)
				this->validate_area_inertia();
				HX_STACK_LINE(707)
				if (((this->area < (int)0))){
					HX_STACK_LINE(708)
					this->reverse_vertices();
					HX_STACK_LINE(709)
					this->area = -(this->area);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,validate_lverts,(void))

::nape::shape::ValidationResult ZPP_Polygon_obj::valid( ){
	HX_STACK_PUSH("ZPP_Polygon::valid","zpp_nape/shape/Polygon.hx",369);
	HX_STACK_THIS(this);
	HX_STACK_LINE(369)
	if ((this->zip_valid)){
		HX_STACK_LINE(371)
		this->zip_valid = false;
		HX_STACK_LINE(372)
		if ((this->zip_sanitation)){
			HX_STACK_LINE(372)
			this->zip_sanitation = false;
			HX_STACK_LINE(372)
			this->splice_collinear_real();
		}
		HX_STACK_LINE(373)
		if (((this->lverts->length < (int)3))){
			struct _Function_3_1{
				inline static ::nape::shape::ValidationResult Block( ){
					HX_STACK_PUSH("*::closure","zpp_nape/shape/Polygon.hx",373);
					{
						HX_STACK_LINE(373)
						if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE == null()))){
							HX_STACK_LINE(373)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(373)
							::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE = ::nape::shape::ValidationResult_obj::__new();
							HX_STACK_LINE(373)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(373)
						return ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE;
					}
					return null();
				}
			};
			HX_STACK_LINE(373)
			return this->validation = _Function_3_1::Block();
		}
		else{
			HX_STACK_LINE(375)
			this->validate_lverts();
			HX_STACK_LINE(376)
			this->validate_area_inertia();
			HX_STACK_LINE(377)
			if (((this->area < ::nape::Config_obj::epsilon))){
				struct _Function_4_1{
					inline static ::nape::shape::ValidationResult Block( ){
						HX_STACK_PUSH("*::closure","zpp_nape/shape/Polygon.hx",377);
						{
							HX_STACK_LINE(377)
							if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE == null()))){
								HX_STACK_LINE(377)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(377)
								::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE = ::nape::shape::ValidationResult_obj::__new();
								HX_STACK_LINE(377)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(377)
							return ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE;
						}
						return null();
					}
				};
				HX_STACK_LINE(377)
				return this->validation = _Function_4_1::Block();
			}
			else{
				HX_STACK_LINE(379)
				bool neg = false;		HX_STACK_VAR(neg,"neg");
				HX_STACK_LINE(380)
				bool pos = false;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(381)
				{
					HX_STACK_LINE(382)
					bool cx_cont = true;		HX_STACK_VAR(cx_cont,"cx_cont");
					HX_STACK_LINE(383)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(384)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(385)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(386)
					::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(387)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(388)
					while(((cx_ite != null()))){
						HX_STACK_LINE(389)
						::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(391)
							Float ax = 0.0;		HX_STACK_VAR(ax,"ax");
							HX_STACK_LINE(392)
							Float ay = 0.0;		HX_STACK_VAR(ay,"ay");
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(394)
								ax = (w->x - v->x);
								HX_STACK_LINE(395)
								ay = (w->y - v->y);
							}
							HX_STACK_LINE(397)
							Float bx = 0.0;		HX_STACK_VAR(bx,"bx");
							HX_STACK_LINE(398)
							Float by = 0.0;		HX_STACK_VAR(by,"by");
							HX_STACK_LINE(399)
							{
								HX_STACK_LINE(400)
								bx = (v->x - u->x);
								HX_STACK_LINE(401)
								by = (v->y - u->y);
							}
							HX_STACK_LINE(403)
							Float dot = ((by * ax) - (bx * ay));		HX_STACK_VAR(dot,"dot");
							HX_STACK_LINE(404)
							if (((dot > ::nape::Config_obj::epsilon))){
								HX_STACK_LINE(404)
								pos = true;
							}
							else{
								HX_STACK_LINE(405)
								if (((dot < -(::nape::Config_obj::epsilon)))){
									HX_STACK_LINE(405)
									neg = true;
								}
							}
							HX_STACK_LINE(406)
							if (((bool(pos) && bool(neg)))){
								HX_STACK_LINE(407)
								cx_cont = false;
								HX_STACK_LINE(408)
								break;
							}
						}
						HX_STACK_LINE(411)
						{
							HX_STACK_LINE(412)
							u = v;
							HX_STACK_LINE(413)
							v = w;
							HX_STACK_LINE(414)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(417)
					if ((cx_cont)){
						HX_STACK_LINE(418)
						cx_ite = this->lverts->next;
						HX_STACK_LINE(419)
						::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(420)
						do{
							HX_STACK_LINE(422)
							Float ax = 0.0;		HX_STACK_VAR(ax,"ax");
							HX_STACK_LINE(423)
							Float ay = 0.0;		HX_STACK_VAR(ay,"ay");
							HX_STACK_LINE(424)
							{
								HX_STACK_LINE(425)
								ax = (w->x - v->x);
								HX_STACK_LINE(426)
								ay = (w->y - v->y);
							}
							HX_STACK_LINE(428)
							Float bx = 0.0;		HX_STACK_VAR(bx,"bx");
							HX_STACK_LINE(429)
							Float by = 0.0;		HX_STACK_VAR(by,"by");
							HX_STACK_LINE(430)
							{
								HX_STACK_LINE(431)
								bx = (v->x - u->x);
								HX_STACK_LINE(432)
								by = (v->y - u->y);
							}
							HX_STACK_LINE(434)
							Float dot = ((by * ax) - (bx * ay));		HX_STACK_VAR(dot,"dot");
							HX_STACK_LINE(435)
							if (((dot > ::nape::Config_obj::epsilon))){
								HX_STACK_LINE(435)
								pos = true;
							}
							else{
								HX_STACK_LINE(436)
								if (((dot < -(::nape::Config_obj::epsilon)))){
									HX_STACK_LINE(436)
									neg = true;
								}
							}
							HX_STACK_LINE(437)
							if (((bool(pos) && bool(neg)))){
								HX_STACK_LINE(438)
								cx_cont = false;
								HX_STACK_LINE(439)
								break;
							}
						}
while((false));
						HX_STACK_LINE(444)
						if ((cx_cont)){
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(446)
								u = v;
								HX_STACK_LINE(447)
								v = w;
								HX_STACK_LINE(448)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(450)
							::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
							HX_STACK_LINE(451)
							do{
								HX_STACK_LINE(453)
								Float ax = 0.0;		HX_STACK_VAR(ax,"ax");
								HX_STACK_LINE(454)
								Float ay = 0.0;		HX_STACK_VAR(ay,"ay");
								HX_STACK_LINE(455)
								{
									HX_STACK_LINE(456)
									ax = (w1->x - v->x);
									HX_STACK_LINE(457)
									ay = (w1->y - v->y);
								}
								HX_STACK_LINE(459)
								Float bx = 0.0;		HX_STACK_VAR(bx,"bx");
								HX_STACK_LINE(460)
								Float by = 0.0;		HX_STACK_VAR(by,"by");
								HX_STACK_LINE(461)
								{
									HX_STACK_LINE(462)
									bx = (v->x - u->x);
									HX_STACK_LINE(463)
									by = (v->y - u->y);
								}
								HX_STACK_LINE(465)
								Float dot = ((by * ax) - (bx * ay));		HX_STACK_VAR(dot,"dot");
								HX_STACK_LINE(466)
								if (((dot > ::nape::Config_obj::epsilon))){
									HX_STACK_LINE(466)
									pos = true;
								}
								else{
									HX_STACK_LINE(467)
									if (((dot < -(::nape::Config_obj::epsilon)))){
										HX_STACK_LINE(467)
										neg = true;
									}
								}
								HX_STACK_LINE(468)
								if (((bool(pos) && bool(neg)))){
									HX_STACK_LINE(468)
									break;
								}
							}
while((false));
						}
					}
				}
				HX_STACK_LINE(475)
				if (((bool(pos) && bool(neg)))){
					struct _Function_5_1{
						inline static ::nape::shape::ValidationResult Block( ){
							HX_STACK_PUSH("*::closure","zpp_nape/shape/Polygon.hx",475);
							{
								HX_STACK_LINE(475)
								if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE == null()))){
									HX_STACK_LINE(475)
									::zpp_nape::util::ZPP_Flags_obj::internal = true;
									HX_STACK_LINE(475)
									::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE = ::nape::shape::ValidationResult_obj::__new();
									HX_STACK_LINE(475)
									::zpp_nape::util::ZPP_Flags_obj::internal = false;
								}
								HX_STACK_LINE(475)
								return ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE;
							}
							return null();
						}
					};
					HX_STACK_LINE(475)
					return this->validation = _Function_5_1::Block();
				}
				else{
					HX_STACK_LINE(477)
					bool cont = true;		HX_STACK_VAR(cont,"cont");
					HX_STACK_LINE(478)
					{
						HX_STACK_LINE(479)
						bool cx_cont = true;		HX_STACK_VAR(cx_cont,"cx_cont");
						HX_STACK_LINE(480)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(482)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(483)
						while(((cx_ite != null()))){
							HX_STACK_LINE(484)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(485)
							{
								HX_STACK_LINE(486)
								if ((!(cont))){
									HX_STACK_LINE(487)
									cx_cont = false;
									HX_STACK_LINE(488)
									break;
								}
								HX_STACK_LINE(490)
								{
									HX_STACK_LINE(491)
									bool cx_cont1 = true;		HX_STACK_VAR(cx_cont1,"cx_cont1");
									HX_STACK_LINE(492)
									::zpp_nape::geom::ZPP_Vec2 cx_ite1 = this->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(493)
									::zpp_nape::geom::ZPP_Vec2 a = cx_ite1;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(494)
									cx_ite1 = cx_ite1->next;
									HX_STACK_LINE(495)
									while(((cx_ite1 != null()))){
										HX_STACK_LINE(496)
										::zpp_nape::geom::ZPP_Vec2 b = cx_ite1;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(497)
										{
											HX_STACK_LINE(498)
											if (((bool((bool((bool((u == a)) || bool((u == b)))) || bool((v == a)))) || bool((v == b))))){
												HX_STACK_LINE(499)
												{
													HX_STACK_LINE(500)
													a = b;
													HX_STACK_LINE(501)
													cx_ite1 = cx_ite1->next;
												}
												HX_STACK_LINE(503)
												continue;
											}
											HX_STACK_LINE(505)
											Float sx = 0.0;		HX_STACK_VAR(sx,"sx");
											HX_STACK_LINE(506)
											Float sy = 0.0;		HX_STACK_VAR(sy,"sy");
											HX_STACK_LINE(507)
											{
												HX_STACK_LINE(508)
												sx = (u->x - a->x);
												HX_STACK_LINE(509)
												sy = (u->y - a->y);
											}
											HX_STACK_LINE(511)
											Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
											HX_STACK_LINE(512)
											Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
											HX_STACK_LINE(513)
											{
												HX_STACK_LINE(514)
												vx = (v->x - u->x);
												HX_STACK_LINE(515)
												vy = (v->y - u->y);
											}
											HX_STACK_LINE(517)
											Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
											HX_STACK_LINE(518)
											Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
											HX_STACK_LINE(519)
											{
												HX_STACK_LINE(520)
												qx = (b->x - a->x);
												HX_STACK_LINE(521)
												qy = (b->y - a->y);
											}
											HX_STACK_LINE(523)
											Float den = ((vy * qx) - (vx * qy));		HX_STACK_VAR(den,"den");
											HX_STACK_LINE(524)
											if ((((den * den) > ::nape::Config_obj::epsilon))){
												HX_STACK_LINE(525)
												den = (Float((int)1) / Float(den));
												HX_STACK_LINE(526)
												Float t = ((((qy * sx) - (qx * sy))) * den);		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(527)
												if (((bool((t > ::nape::Config_obj::epsilon)) && bool((t < ((int)1 - ::nape::Config_obj::epsilon)))))){
													HX_STACK_LINE(528)
													Float s = ((((vy * sx) - (vx * sy))) * den);		HX_STACK_VAR(s,"s");
													HX_STACK_LINE(529)
													if (((bool((s > ::nape::Config_obj::epsilon)) && bool((s < ((int)1 - ::nape::Config_obj::epsilon)))))){
														HX_STACK_LINE(530)
														cont = false;
														HX_STACK_LINE(531)
														{
															HX_STACK_LINE(532)
															cx_cont1 = false;
															HX_STACK_LINE(533)
															break;
														}
													}
												}
											}
										}
										HX_STACK_LINE(539)
										{
											HX_STACK_LINE(540)
											a = b;
											HX_STACK_LINE(541)
											cx_ite1 = cx_ite1->next;
										}
									}
									HX_STACK_LINE(544)
									if ((cx_cont1)){
										HX_STACK_LINE(544)
										do{
											HX_STACK_LINE(546)
											::zpp_nape::geom::ZPP_Vec2 b = this->lverts->next;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(547)
											{
												HX_STACK_LINE(548)
												if (((bool((bool((bool((u == a)) || bool((u == b)))) || bool((v == a)))) || bool((v == b))))){
													HX_STACK_LINE(548)
													break;
												}
												HX_STACK_LINE(549)
												Float sx = 0.0;		HX_STACK_VAR(sx,"sx");
												HX_STACK_LINE(550)
												Float sy = 0.0;		HX_STACK_VAR(sy,"sy");
												HX_STACK_LINE(551)
												{
													HX_STACK_LINE(552)
													sx = (u->x - a->x);
													HX_STACK_LINE(553)
													sy = (u->y - a->y);
												}
												HX_STACK_LINE(555)
												Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
												HX_STACK_LINE(556)
												Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
												HX_STACK_LINE(557)
												{
													HX_STACK_LINE(558)
													vx = (v->x - u->x);
													HX_STACK_LINE(559)
													vy = (v->y - u->y);
												}
												HX_STACK_LINE(561)
												Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
												HX_STACK_LINE(562)
												Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
												HX_STACK_LINE(563)
												{
													HX_STACK_LINE(564)
													qx = (b->x - a->x);
													HX_STACK_LINE(565)
													qy = (b->y - a->y);
												}
												HX_STACK_LINE(567)
												Float den = ((vy * qx) - (vx * qy));		HX_STACK_VAR(den,"den");
												HX_STACK_LINE(568)
												if ((((den * den) > ::nape::Config_obj::epsilon))){
													HX_STACK_LINE(569)
													den = (Float((int)1) / Float(den));
													HX_STACK_LINE(570)
													Float t = ((((qy * sx) - (qx * sy))) * den);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(571)
													if (((bool((t > ::nape::Config_obj::epsilon)) && bool((t < ((int)1 - ::nape::Config_obj::epsilon)))))){
														HX_STACK_LINE(572)
														Float s = ((((vy * sx) - (vx * sy))) * den);		HX_STACK_VAR(s,"s");
														HX_STACK_LINE(573)
														if (((bool((s > ::nape::Config_obj::epsilon)) && bool((s < ((int)1 - ::nape::Config_obj::epsilon)))))){
															HX_STACK_LINE(574)
															cont = false;
															HX_STACK_LINE(575)
															break;
														}
													}
												}
											}
										}
while((false));
									}
								}
							}
							HX_STACK_LINE(585)
							{
								HX_STACK_LINE(586)
								u = v;
								HX_STACK_LINE(587)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(590)
						if ((cx_cont)){
							HX_STACK_LINE(590)
							do{
								HX_STACK_LINE(592)
								::zpp_nape::geom::ZPP_Vec2 v = this->lverts->next;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(593)
								{
									HX_STACK_LINE(594)
									if ((!(cont))){
										HX_STACK_LINE(594)
										break;
									}
									HX_STACK_LINE(595)
									{
										HX_STACK_LINE(596)
										bool cx_cont1 = true;		HX_STACK_VAR(cx_cont1,"cx_cont1");
										HX_STACK_LINE(597)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = this->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(598)
										::zpp_nape::geom::ZPP_Vec2 a = cx_ite1;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(599)
										cx_ite1 = cx_ite1->next;
										HX_STACK_LINE(600)
										while(((cx_ite1 != null()))){
											HX_STACK_LINE(601)
											::zpp_nape::geom::ZPP_Vec2 b = cx_ite1;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(602)
											{
												HX_STACK_LINE(603)
												if (((bool((bool((bool((u == a)) || bool((u == b)))) || bool((v == a)))) || bool((v == b))))){
													HX_STACK_LINE(604)
													{
														HX_STACK_LINE(605)
														a = b;
														HX_STACK_LINE(606)
														cx_ite1 = cx_ite1->next;
													}
													HX_STACK_LINE(608)
													continue;
												}
												HX_STACK_LINE(610)
												Float sx = 0.0;		HX_STACK_VAR(sx,"sx");
												HX_STACK_LINE(611)
												Float sy = 0.0;		HX_STACK_VAR(sy,"sy");
												HX_STACK_LINE(612)
												{
													HX_STACK_LINE(613)
													sx = (u->x - a->x);
													HX_STACK_LINE(614)
													sy = (u->y - a->y);
												}
												HX_STACK_LINE(616)
												Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
												HX_STACK_LINE(617)
												Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
												HX_STACK_LINE(618)
												{
													HX_STACK_LINE(619)
													vx = (v->x - u->x);
													HX_STACK_LINE(620)
													vy = (v->y - u->y);
												}
												HX_STACK_LINE(622)
												Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
												HX_STACK_LINE(623)
												Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
												HX_STACK_LINE(624)
												{
													HX_STACK_LINE(625)
													qx = (b->x - a->x);
													HX_STACK_LINE(626)
													qy = (b->y - a->y);
												}
												HX_STACK_LINE(628)
												Float den = ((vy * qx) - (vx * qy));		HX_STACK_VAR(den,"den");
												HX_STACK_LINE(629)
												if ((((den * den) > ::nape::Config_obj::epsilon))){
													HX_STACK_LINE(630)
													den = (Float((int)1) / Float(den));
													HX_STACK_LINE(631)
													Float t = ((((qy * sx) - (qx * sy))) * den);		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(632)
													if (((bool((t > ::nape::Config_obj::epsilon)) && bool((t < ((int)1 - ::nape::Config_obj::epsilon)))))){
														HX_STACK_LINE(633)
														Float s = ((((vy * sx) - (vx * sy))) * den);		HX_STACK_VAR(s,"s");
														HX_STACK_LINE(634)
														if (((bool((s > ::nape::Config_obj::epsilon)) && bool((s < ((int)1 - ::nape::Config_obj::epsilon)))))){
															HX_STACK_LINE(635)
															cont = false;
															HX_STACK_LINE(636)
															{
																HX_STACK_LINE(637)
																cx_cont1 = false;
																HX_STACK_LINE(638)
																break;
															}
														}
													}
												}
											}
											HX_STACK_LINE(644)
											{
												HX_STACK_LINE(645)
												a = b;
												HX_STACK_LINE(646)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(649)
										if ((cx_cont1)){
											HX_STACK_LINE(649)
											do{
												HX_STACK_LINE(651)
												::zpp_nape::geom::ZPP_Vec2 b = this->lverts->next;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(652)
												{
													HX_STACK_LINE(653)
													if (((bool((bool((bool((u == a)) || bool((u == b)))) || bool((v == a)))) || bool((v == b))))){
														HX_STACK_LINE(653)
														break;
													}
													HX_STACK_LINE(654)
													Float sx = 0.0;		HX_STACK_VAR(sx,"sx");
													HX_STACK_LINE(655)
													Float sy = 0.0;		HX_STACK_VAR(sy,"sy");
													HX_STACK_LINE(656)
													{
														HX_STACK_LINE(657)
														sx = (u->x - a->x);
														HX_STACK_LINE(658)
														sy = (u->y - a->y);
													}
													HX_STACK_LINE(660)
													Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
													HX_STACK_LINE(661)
													Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
													HX_STACK_LINE(662)
													{
														HX_STACK_LINE(663)
														vx = (v->x - u->x);
														HX_STACK_LINE(664)
														vy = (v->y - u->y);
													}
													HX_STACK_LINE(666)
													Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
													HX_STACK_LINE(667)
													Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
													HX_STACK_LINE(668)
													{
														HX_STACK_LINE(669)
														qx = (b->x - a->x);
														HX_STACK_LINE(670)
														qy = (b->y - a->y);
													}
													HX_STACK_LINE(672)
													Float den = ((vy * qx) - (vx * qy));		HX_STACK_VAR(den,"den");
													HX_STACK_LINE(673)
													if ((((den * den) > ::nape::Config_obj::epsilon))){
														HX_STACK_LINE(674)
														den = (Float((int)1) / Float(den));
														HX_STACK_LINE(675)
														Float t = ((((qy * sx) - (qx * sy))) * den);		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(676)
														if (((bool((t > ::nape::Config_obj::epsilon)) && bool((t < ((int)1 - ::nape::Config_obj::epsilon)))))){
															HX_STACK_LINE(677)
															Float s = ((((vy * sx) - (vx * sy))) * den);		HX_STACK_VAR(s,"s");
															HX_STACK_LINE(678)
															if (((bool((s > ::nape::Config_obj::epsilon)) && bool((s < ((int)1 - ::nape::Config_obj::epsilon)))))){
																HX_STACK_LINE(679)
																cont = false;
																HX_STACK_LINE(680)
																break;
															}
														}
													}
												}
											}
while((false));
										}
									}
								}
							}
while((false));
						}
					}
					HX_STACK_LINE(694)
					if ((!(cont))){
						struct _Function_6_1{
							inline static ::nape::shape::ValidationResult Block( ){
								HX_STACK_PUSH("*::closure","zpp_nape/shape/Polygon.hx",694);
								{
									HX_STACK_LINE(694)
									if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING == null()))){
										HX_STACK_LINE(694)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(694)
										::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING = ::nape::shape::ValidationResult_obj::__new();
										HX_STACK_LINE(694)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(694)
									return ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING;
								}
								return null();
							}
						};
						HX_STACK_LINE(694)
						return this->validation = _Function_6_1::Block();
					}
					else{
						struct _Function_6_1{
							inline static ::nape::shape::ValidationResult Block( ){
								HX_STACK_PUSH("*::closure","zpp_nape/shape/Polygon.hx",695);
								{
									HX_STACK_LINE(695)
									if (((::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID == null()))){
										HX_STACK_LINE(695)
										::zpp_nape::util::ZPP_Flags_obj::internal = true;
										HX_STACK_LINE(695)
										::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID = ::nape::shape::ValidationResult_obj::__new();
										HX_STACK_LINE(695)
										::zpp_nape::util::ZPP_Flags_obj::internal = false;
									}
									HX_STACK_LINE(695)
									return ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID;
								}
								return null();
							}
						};
						HX_STACK_LINE(695)
						return this->validation = _Function_6_1::Block();
					}
				}
			}
		}
	}
	else{
		HX_STACK_LINE(700)
		return this->validation;
	}
	HX_STACK_LINE(369)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,valid,return )

Void ZPP_Polygon_obj::invalidate_gaxi( ){
{
		HX_STACK_PUSH("ZPP_Polygon::invalidate_gaxi","zpp_nape/shape/Polygon.hx",364);
		HX_STACK_THIS(this);
		HX_STACK_LINE(364)
		this->zip_gaxi = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,invalidate_gaxi,(void))

Void ZPP_Polygon_obj::invalidate_gverts( ){
{
		HX_STACK_PUSH("ZPP_Polygon::invalidate_gverts","zpp_nape/shape/Polygon.hx",359);
		HX_STACK_THIS(this);
		HX_STACK_LINE(360)
		{
			HX_STACK_LINE(360)
			this->zip_aabb = true;
			HX_STACK_LINE(360)
			if (((this->body != null()))){
				HX_STACK_LINE(360)
				this->body->zip_aabb = true;
			}
		}
		HX_STACK_LINE(361)
		this->zip_gverts = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,invalidate_gverts,(void))

Void ZPP_Polygon_obj::invalidate_laxi( ){
{
		HX_STACK_PUSH("ZPP_Polygon::invalidate_laxi","zpp_nape/shape/Polygon.hx",353);
		HX_STACK_THIS(this);
		HX_STACK_LINE(354)
		this->invalidate_gaxi();
		HX_STACK_LINE(355)
		this->zip_sweepRadius = true;
		HX_STACK_LINE(356)
		this->zip_laxi = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,invalidate_laxi,(void))

Void ZPP_Polygon_obj::invalidate_lverts( ){
{
		HX_STACK_PUSH("ZPP_Polygon::invalidate_lverts","zpp_nape/shape/Polygon.hx",341);
		HX_STACK_THIS(this);
		HX_STACK_LINE(342)
		this->invalidate_laxi();
		HX_STACK_LINE(343)
		this->invalidate_area_inertia();
		HX_STACK_LINE(344)
		this->invalidate_angDrag();
		HX_STACK_LINE(345)
		this->invalidate_localCOM();
		HX_STACK_LINE(346)
		this->invalidate_gverts();
		HX_STACK_LINE(347)
		this->zip_lverts = true;
		HX_STACK_LINE(348)
		this->zip_valid = true;
		HX_STACK_LINE(349)
		this->zip_sanitation = true;
		HX_STACK_LINE(350)
		if (((this->body != null()))){
			HX_STACK_LINE(350)
			this->body->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,invalidate_lverts,(void))

Void ZPP_Polygon_obj::getedges( ){
{
		HX_STACK_PUSH("ZPP_Polygon::getedges","zpp_nape/shape/Polygon.hx",334);
		HX_STACK_THIS(this);
		HX_STACK_LINE(335)
		::zpp_nape::shape::ZPP_Polygon me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(336)
		this->wrap_edges = ::zpp_nape::util::ZPP_EdgeList_obj::get(this->edges,true);
		HX_STACK_LINE(337)
		this->wrap_edges->zpp_inner->reverse_flag = this->reverse_flag;
		HX_STACK_LINE(338)
		this->wrap_edges->zpp_inner->_validate = this->edges_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,getedges,(void))

Void ZPP_Polygon_obj::getgverts( ){
{
		HX_STACK_PUSH("ZPP_Polygon::getgverts","zpp_nape/shape/Polygon.hx",328);
		HX_STACK_THIS(this);
		HX_STACK_LINE(329)
		::zpp_nape::shape::ZPP_Polygon me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(330)
		this->wrap_gverts = ::zpp_nape::util::ZPP_MixVec2List_obj::get(this->gverts,true);
		HX_STACK_LINE(331)
		this->wrap_gverts->zpp_inner->reverse_flag = this->reverse_flag;
		HX_STACK_LINE(332)
		this->wrap_gverts->zpp_inner->_validate = this->gverts_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,getgverts,(void))

Void ZPP_Polygon_obj::getlverts( ){
{
		HX_STACK_PUSH("ZPP_Polygon::getlverts","zpp_nape/shape/Polygon.hx",316);
		HX_STACK_THIS(this);
		HX_STACK_LINE(317)
		::zpp_nape::shape::ZPP_Polygon me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(318)
		this->wrap_lverts = ::zpp_nape::util::ZPP_MixVec2List_obj::get(this->lverts,null());
		HX_STACK_LINE(319)
		this->wrap_lverts->zpp_inner->post_adder = this->lverts_post_adder_dyn();
		HX_STACK_LINE(320)
		this->wrap_lverts->zpp_inner->subber = this->lverts_subber_dyn();
		HX_STACK_LINE(321)
		this->wrap_lverts->zpp_inner->_invalidate = this->lverts_invalidate_dyn();
		HX_STACK_LINE(322)
		this->wrap_lverts->zpp_inner->_validate = this->lverts_validate_dyn();
		HX_STACK_LINE(324)
		this->wrap_lverts->zpp_inner->_modifiable = this->lverts_modifiable_dyn();
		HX_STACK_LINE(326)
		this->wrap_lverts->zpp_inner->reverse_flag = this->reverse_flag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,getlverts,(void))

Void ZPP_Polygon_obj::edges_validate( ){
{
		HX_STACK_PUSH("ZPP_Polygon::edges_validate","zpp_nape/shape/Polygon.hx",312);
		HX_STACK_THIS(this);
		HX_STACK_LINE(312)
		this->validate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,edges_validate,(void))

Void ZPP_Polygon_obj::gverts_validate( ){
{
		HX_STACK_PUSH("ZPP_Polygon::gverts_validate","zpp_nape/shape/Polygon.hx",309);
		HX_STACK_THIS(this);
		HX_STACK_LINE(309)
		if ((this->zip_gverts)){
			HX_STACK_LINE(310)
			if (((this->body != null()))){
				HX_STACK_LINE(310)
				this->zip_gverts = false;
				HX_STACK_LINE(310)
				this->validate_lverts();
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(310)
					if ((_this->zip_axis)){
						HX_STACK_LINE(310)
						_this->zip_axis = false;
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							_this->axisx = ::Math_obj::sin(_this->rot);
							HX_STACK_LINE(310)
							_this->axisy = ::Math_obj::cos(_this->rot);
							HX_STACK_LINE(310)
							{
							}
							HX_STACK_LINE(310)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(310)
				::zpp_nape::geom::ZPP_Vec2 li = this->lverts->next;		HX_STACK_VAR(li,"li");
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(310)
					while(((cx_ite != null()))){
						HX_STACK_LINE(310)
						::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(310)
							li = li->next;
							HX_STACK_LINE(310)
							{
								HX_STACK_LINE(310)
								g->x = (this->body->posx + (((this->body->axisy * l->x) - (this->body->axisx * l->y))));
								HX_STACK_LINE(310)
								g->y = (this->body->posy + (((l->x * this->body->axisx) + (l->y * this->body->axisy))));
							}
						}
						HX_STACK_LINE(310)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,gverts_validate,(void))

Void ZPP_Polygon_obj::lverts_modifiable( ){
{
		HX_STACK_PUSH("ZPP_Polygon::lverts_modifiable","zpp_nape/shape/Polygon.hx",302);
		HX_STACK_THIS(this);
		HX_STACK_LINE(303)
		this->immutable_midstep(HX_CSTRING("Polygon::localVerts"));
		HX_STACK_LINE(305)
		if (((bool((bool((this->body != null())) && bool((this->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)))) && bool((this->body->space != null()))))){
			HX_STACK_LINE(305)
			hx::Throw (HX_CSTRING("Error: Cannot modifiy shapes of static object once added to Space"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,lverts_modifiable,(void))

Void ZPP_Polygon_obj::lverts_validate( ){
{
		HX_STACK_PUSH("ZPP_Polygon::lverts_validate","zpp_nape/shape/Polygon.hx",298);
		HX_STACK_THIS(this);
		HX_STACK_LINE(298)
		this->validate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,lverts_validate,(void))

Void ZPP_Polygon_obj::lverts_invalidate( ::zpp_nape::util::ZPP_Vec2List _){
{
		HX_STACK_PUSH("ZPP_Polygon::lverts_invalidate","zpp_nape/shape/Polygon.hx",295);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_,"_");
		HX_STACK_LINE(295)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,lverts_invalidate,(void))

Void ZPP_Polygon_obj::lverts_subber( ::nape::geom::Vec2 x){
{
		HX_STACK_PUSH("ZPP_Polygon::lverts_subber","zpp_nape/shape/Polygon.hx",292);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(292)
		this->cleanup_lvert(x->zpp_inner);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,lverts_subber,(void))

Void ZPP_Polygon_obj::lverts_post_adder( ::nape::geom::Vec2 x){
{
		HX_STACK_PUSH("ZPP_Polygon::lverts_post_adder","zpp_nape/shape/Polygon.hx",199);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(200)
		x->zpp_inner->_invalidate = this->lverts_pa_invalidate_dyn();
		HX_STACK_LINE(202)
		x->zpp_inner->_isimmutable = this->lverts_pa_immutable_dyn();
		HX_STACK_LINE(204)
		::zpp_nape::geom::ZPP_Vec2 ite = null();		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(205)
		::zpp_nape::util::ZNPNode_ZPP_Edge ite2 = null();		HX_STACK_VAR(ite2,"ite2");
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(207)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(208)
			while(((cx_ite != null()))){
				HX_STACK_LINE(209)
				::zpp_nape::geom::ZPP_Vec2 i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(210)
				if (((i == x->zpp_inner))){
					HX_STACK_LINE(211)
					break;
				}
				else{
					HX_STACK_LINE(213)
					ite = (  (((ite == null()))) ? ::zpp_nape::geom::ZPP_Vec2(this->gverts->next) : ::zpp_nape::geom::ZPP_Vec2(ite->next) );
					HX_STACK_LINE(214)
					ite2 = (  (((ite2 == null()))) ? ::zpp_nape::util::ZNPNode_ZPP_Edge(this->edges->head) : ::zpp_nape::util::ZNPNode_ZPP_Edge(ite2->next) );
				}
				HX_STACK_LINE(217)
				cx_ite = cx_ite->next;
			}
		}
		struct _Function_1_1{
			inline static ::zpp_nape::geom::ZPP_Vec2 Block( ){
				HX_STACK_PUSH("*::closure","zpp_nape/shape/Polygon.hx",220);
				{
					HX_STACK_LINE(220)
					::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(220)
					{
						HX_STACK_LINE(220)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(220)
							ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
						}
						else{
							HX_STACK_LINE(220)
							ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(220)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
							HX_STACK_LINE(220)
							ret->next = null();
						}
						HX_STACK_LINE(220)
						ret->weak = false;
					}
					HX_STACK_LINE(220)
					ret->_immutable = true;
					HX_STACK_LINE(220)
					{
						HX_STACK_LINE(220)
						ret->x = (int)0;
						HX_STACK_LINE(220)
						ret->y = (int)0;
						HX_STACK_LINE(220)
						{
						}
						HX_STACK_LINE(220)
						{
						}
					}
					HX_STACK_LINE(220)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(220)
		::zpp_nape::geom::ZPP_Vec2 vec = _Function_1_1::Block();		HX_STACK_VAR(vec,"vec");
		HX_STACK_LINE(221)
		this->gverts->insert(ite,vec);
		HX_STACK_LINE(222)
		if (((this->lverts->next->next != null()))){
			HX_STACK_LINE(222)
			if (((this->lverts->next->next->next == null()))){
				HX_STACK_LINE(224)
				::zpp_nape::shape::ZPP_Edge ed;		HX_STACK_VAR(ed,"ed");
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(226)
					if (((::zpp_nape::shape::ZPP_Edge_obj::zpp_pool == null()))){
						HX_STACK_LINE(226)
						ed = ::zpp_nape::shape::ZPP_Edge_obj::__new();
					}
					else{
						HX_STACK_LINE(233)
						ed = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;
						HX_STACK_LINE(234)
						::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = ed->next;
						HX_STACK_LINE(235)
						ed->next = null();
					}
					HX_STACK_LINE(240)
					Dynamic();
				}
				HX_STACK_LINE(242)
				ed->polygon = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(243)
				this->edges->add(ed);
				HX_STACK_LINE(244)
				::zpp_nape::shape::ZPP_Edge ed1;		HX_STACK_VAR(ed1,"ed1");
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(246)
					if (((::zpp_nape::shape::ZPP_Edge_obj::zpp_pool == null()))){
						HX_STACK_LINE(246)
						ed1 = ::zpp_nape::shape::ZPP_Edge_obj::__new();
					}
					else{
						HX_STACK_LINE(253)
						ed1 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;
						HX_STACK_LINE(254)
						::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = ed1->next;
						HX_STACK_LINE(255)
						ed1->next = null();
					}
					HX_STACK_LINE(260)
					Dynamic();
				}
				HX_STACK_LINE(262)
				ed1->polygon = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(263)
				this->edges->add(ed1);
				HX_STACK_LINE(264)
				hx::AddEq(this->edgeCnt,(int)2);
			}
			else{
				HX_STACK_LINE(267)
				::zpp_nape::shape::ZPP_Edge ed;		HX_STACK_VAR(ed,"ed");
				HX_STACK_LINE(268)
				{
					HX_STACK_LINE(269)
					if (((::zpp_nape::shape::ZPP_Edge_obj::zpp_pool == null()))){
						HX_STACK_LINE(269)
						ed = ::zpp_nape::shape::ZPP_Edge_obj::__new();
					}
					else{
						HX_STACK_LINE(276)
						ed = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;
						HX_STACK_LINE(277)
						::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = ed->next;
						HX_STACK_LINE(278)
						ed->next = null();
					}
					HX_STACK_LINE(283)
					Dynamic();
				}
				HX_STACK_LINE(285)
				ed->polygon = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(286)
				this->edges->insert(ite2,ed);
				HX_STACK_LINE(287)
				(this->edgeCnt)++;
			}
		}
		HX_STACK_LINE(290)
		vec->_validate = this->gverts_pa_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,lverts_post_adder,(void))

Void ZPP_Polygon_obj::gverts_pa_validate( ){
{
		HX_STACK_PUSH("ZPP_Polygon::gverts_pa_validate","zpp_nape/shape/Polygon.hx",193);
		HX_STACK_THIS(this);
		HX_STACK_LINE(195)
		if (((this->body == null()))){
			HX_STACK_LINE(195)
			hx::Throw (HX_CSTRING("Error: World vertex only makes sense when Polygon is contained in a rigid body"));
		}
		HX_STACK_LINE(197)
		if ((this->zip_gverts)){
			HX_STACK_LINE(197)
			if (((this->body != null()))){
				HX_STACK_LINE(197)
				this->zip_gverts = false;
				HX_STACK_LINE(197)
				this->validate_lverts();
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(197)
					if ((_this->zip_axis)){
						HX_STACK_LINE(197)
						_this->zip_axis = false;
						HX_STACK_LINE(197)
						{
							HX_STACK_LINE(197)
							_this->axisx = ::Math_obj::sin(_this->rot);
							HX_STACK_LINE(197)
							_this->axisy = ::Math_obj::cos(_this->rot);
							HX_STACK_LINE(197)
							{
							}
							HX_STACK_LINE(197)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(197)
				::zpp_nape::geom::ZPP_Vec2 li = this->lverts->next;		HX_STACK_VAR(li,"li");
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(197)
					while(((cx_ite != null()))){
						HX_STACK_LINE(197)
						::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(197)
						{
							HX_STACK_LINE(197)
							::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(197)
							li = li->next;
							HX_STACK_LINE(197)
							{
								HX_STACK_LINE(197)
								g->x = (this->body->posx + (((this->body->axisy * l->x) - (this->body->axisx * l->y))));
								HX_STACK_LINE(197)
								g->y = (this->body->posy + (((l->x * this->body->axisx) + (l->y * this->body->axisy))));
							}
						}
						HX_STACK_LINE(197)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,gverts_pa_validate,(void))

Void ZPP_Polygon_obj::lverts_pa_immutable( ){
{
		HX_STACK_PUSH("ZPP_Polygon::lverts_pa_immutable","zpp_nape/shape/Polygon.hx",189);
		HX_STACK_THIS(this);
		HX_STACK_LINE(189)
		if (((bool((bool((this->body != null())) && bool((this->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)))) && bool((this->body->space != null()))))){
			HX_STACK_LINE(190)
			hx::Throw (HX_CSTRING("Error: Cannot modify local vertex of Polygon added to a static body whilst within a Space"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,lverts_pa_immutable,(void))

Void ZPP_Polygon_obj::lverts_pa_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_Polygon::lverts_pa_invalidate","zpp_nape/shape/Polygon.hx",185);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(185)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,lverts_pa_invalidate,(void))

Void ZPP_Polygon_obj::__clear( ){
{
		HX_STACK_PUSH("ZPP_Polygon::__clear","zpp_nape/shape/Polygon.hx",184);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__clear,(void))


ZPP_Polygon_obj::ZPP_Polygon_obj()
{
}

void ZPP_Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Polygon);
	HX_MARK_MEMBER_NAME(zip_sanitation,"zip_sanitation");
	HX_MARK_MEMBER_NAME(validation,"validation");
	HX_MARK_MEMBER_NAME(zip_valid,"zip_valid");
	HX_MARK_MEMBER_NAME(zip_gaxi,"zip_gaxi");
	HX_MARK_MEMBER_NAME(zip_gverts,"zip_gverts");
	HX_MARK_MEMBER_NAME(zip_laxi,"zip_laxi");
	HX_MARK_MEMBER_NAME(zip_lverts,"zip_lverts");
	HX_MARK_MEMBER_NAME(reverse_flag,"reverse_flag");
	HX_MARK_MEMBER_NAME(edgeCnt,"edgeCnt");
	HX_MARK_MEMBER_NAME(wrap_edges,"wrap_edges");
	HX_MARK_MEMBER_NAME(edges,"edges");
	HX_MARK_MEMBER_NAME(wrap_gverts,"wrap_gverts");
	HX_MARK_MEMBER_NAME(gverts,"gverts");
	HX_MARK_MEMBER_NAME(wrap_lverts,"wrap_lverts");
	HX_MARK_MEMBER_NAME(lverts,"lverts");
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zip_sanitation,"zip_sanitation");
	HX_VISIT_MEMBER_NAME(validation,"validation");
	HX_VISIT_MEMBER_NAME(zip_valid,"zip_valid");
	HX_VISIT_MEMBER_NAME(zip_gaxi,"zip_gaxi");
	HX_VISIT_MEMBER_NAME(zip_gverts,"zip_gverts");
	HX_VISIT_MEMBER_NAME(zip_laxi,"zip_laxi");
	HX_VISIT_MEMBER_NAME(zip_lverts,"zip_lverts");
	HX_VISIT_MEMBER_NAME(reverse_flag,"reverse_flag");
	HX_VISIT_MEMBER_NAME(edgeCnt,"edgeCnt");
	HX_VISIT_MEMBER_NAME(wrap_edges,"wrap_edges");
	HX_VISIT_MEMBER_NAME(edges,"edges");
	HX_VISIT_MEMBER_NAME(wrap_gverts,"wrap_gverts");
	HX_VISIT_MEMBER_NAME(gverts,"gverts");
	HX_VISIT_MEMBER_NAME(wrap_lverts,"wrap_lverts");
	HX_VISIT_MEMBER_NAME(lverts,"lverts");
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Polygon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"valid") ) { return valid_dyn(); }
		if (HX_FIELD_EQ(inName,"edges") ) { return edges; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__copy") ) { return __copy_dyn(); }
		if (HX_FIELD_EQ(inName,"gverts") ) { return gverts; }
		if (HX_FIELD_EQ(inName,"lverts") ) { return lverts; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__scale") ) { return __scale_dyn(); }
		if (HX_FIELD_EQ(inName,"__clear") ) { return __clear_dyn(); }
		if (HX_FIELD_EQ(inName,"edgeCnt") ) { return edgeCnt; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__rotate") ) { return __rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_gaxi") ) { return zip_gaxi; }
		if (HX_FIELD_EQ(inName,"zip_laxi") ) { return zip_laxi; }
		if (HX_FIELD_EQ(inName,"getedges") ) { return getedges_dyn(); }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zip_valid") ) { return zip_valid; }
		if (HX_FIELD_EQ(inName,"getgverts") ) { return getgverts_dyn(); }
		if (HX_FIELD_EQ(inName,"getlverts") ) { return getlverts_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"validation") ) { return validation; }
		if (HX_FIELD_EQ(inName,"zip_gverts") ) { return zip_gverts; }
		if (HX_FIELD_EQ(inName,"zip_lverts") ) { return zip_lverts; }
		if (HX_FIELD_EQ(inName,"wrap_edges") ) { return wrap_edges; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform_dyn(); }
		if (HX_FIELD_EQ(inName,"__translate") ) { return __translate_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_gverts") ) { return wrap_gverts; }
		if (HX_FIELD_EQ(inName,"wrap_lverts") ) { return wrap_lverts; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reverse_flag") ) { return reverse_flag; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setupLocalCOM") ) { return setupLocalCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_gaxi") ) { return validate_gaxi_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_laxi") ) { return validate_laxi_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanup_lvert") ) { return cleanup_lvert_dyn(); }
		if (HX_FIELD_EQ(inName,"lverts_subber") ) { return lverts_subber_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"zip_sanitation") ) { return zip_sanitation; }
		if (HX_FIELD_EQ(inName,"edges_validate") ) { return edges_validate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__validate_aabb") ) { return __validate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_gverts") ) { return validate_gverts_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_lverts") ) { return validate_lverts_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_gaxi") ) { return invalidate_gaxi_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_laxi") ) { return invalidate_laxi_dyn(); }
		if (HX_FIELD_EQ(inName,"gverts_validate") ) { return gverts_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"lverts_validate") ) { return lverts_validate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reverse_vertices") ) { return reverse_vertices_dyn(); }
		if (HX_FIELD_EQ(inName,"splice_collinear") ) { return splice_collinear_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"localCOM_validate") ) { return localCOM_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_gverts") ) { return invalidate_gverts_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_lverts") ) { return invalidate_lverts_dyn(); }
		if (HX_FIELD_EQ(inName,"lverts_modifiable") ) { return lverts_modifiable_dyn(); }
		if (HX_FIELD_EQ(inName,"lverts_invalidate") ) { return lverts_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"lverts_post_adder") ) { return lverts_post_adder_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__validate_angDrag") ) { return __validate_angDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"gverts_pa_validate") ) { return gverts_pa_validate_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"localCOM_invalidate") ) { return localCOM_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"__validate_localCOM") ) { return __validate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"lverts_pa_immutable") ) { return lverts_pa_immutable_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_force_validate_aabb") ) { return _force_validate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"lverts_pa_invalidate") ) { return lverts_pa_invalidate_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"splice_collinear_real") ) { return splice_collinear_real_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__validate_sweepRadius") ) { return __validate_sweepRadius_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__validate_area_inertia") ) { return __validate_area_inertia_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"edges") ) { edges=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Edge >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gverts") ) { gverts=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lverts") ) { lverts=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"edgeCnt") ) { edgeCnt=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zip_gaxi") ) { zip_gaxi=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_laxi") ) { zip_laxi=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::shape::Polygon >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zip_valid") ) { zip_valid=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"validation") ) { validation=inValue.Cast< ::nape::shape::ValidationResult >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_gverts") ) { zip_gverts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_lverts") ) { zip_lverts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_edges") ) { wrap_edges=inValue.Cast< ::nape::shape::EdgeList >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_gverts") ) { wrap_gverts=inValue.Cast< ::nape::geom::Vec2List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_lverts") ) { wrap_lverts=inValue.Cast< ::nape::geom::Vec2List >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reverse_flag") ) { reverse_flag=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"zip_sanitation") ) { zip_sanitation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zip_sanitation"));
	outFields->push(HX_CSTRING("validation"));
	outFields->push(HX_CSTRING("zip_valid"));
	outFields->push(HX_CSTRING("zip_gaxi"));
	outFields->push(HX_CSTRING("zip_gverts"));
	outFields->push(HX_CSTRING("zip_laxi"));
	outFields->push(HX_CSTRING("zip_lverts"));
	outFields->push(HX_CSTRING("reverse_flag"));
	outFields->push(HX_CSTRING("edgeCnt"));
	outFields->push(HX_CSTRING("wrap_edges"));
	outFields->push(HX_CSTRING("edges"));
	outFields->push(HX_CSTRING("wrap_gverts"));
	outFields->push(HX_CSTRING("gverts"));
	outFields->push(HX_CSTRING("wrap_lverts"));
	outFields->push(HX_CSTRING("lverts"));
	outFields->push(HX_CSTRING("outer_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__copy"),
	HX_CSTRING("__transform"),
	HX_CSTRING("__rotate"),
	HX_CSTRING("__scale"),
	HX_CSTRING("__translate"),
	HX_CSTRING("setupLocalCOM"),
	HX_CSTRING("localCOM_invalidate"),
	HX_CSTRING("localCOM_validate"),
	HX_CSTRING("__validate_localCOM"),
	HX_CSTRING("__validate_angDrag"),
	HX_CSTRING("__validate_area_inertia"),
	HX_CSTRING("__validate_sweepRadius"),
	HX_CSTRING("_force_validate_aabb"),
	HX_CSTRING("__validate_aabb"),
	HX_CSTRING("validate_gaxi"),
	HX_CSTRING("validate_gverts"),
	HX_CSTRING("validate_laxi"),
	HX_CSTRING("reverse_vertices"),
	HX_CSTRING("splice_collinear_real"),
	HX_CSTRING("splice_collinear"),
	HX_CSTRING("zip_sanitation"),
	HX_CSTRING("cleanup_lvert"),
	HX_CSTRING("validate_lverts"),
	HX_CSTRING("valid"),
	HX_CSTRING("validation"),
	HX_CSTRING("zip_valid"),
	HX_CSTRING("invalidate_gaxi"),
	HX_CSTRING("zip_gaxi"),
	HX_CSTRING("invalidate_gverts"),
	HX_CSTRING("zip_gverts"),
	HX_CSTRING("invalidate_laxi"),
	HX_CSTRING("zip_laxi"),
	HX_CSTRING("invalidate_lverts"),
	HX_CSTRING("zip_lverts"),
	HX_CSTRING("getedges"),
	HX_CSTRING("getgverts"),
	HX_CSTRING("getlverts"),
	HX_CSTRING("edges_validate"),
	HX_CSTRING("gverts_validate"),
	HX_CSTRING("lverts_modifiable"),
	HX_CSTRING("lverts_validate"),
	HX_CSTRING("lverts_invalidate"),
	HX_CSTRING("lverts_subber"),
	HX_CSTRING("lverts_post_adder"),
	HX_CSTRING("gverts_pa_validate"),
	HX_CSTRING("lverts_pa_immutable"),
	HX_CSTRING("lverts_pa_invalidate"),
	HX_CSTRING("__clear"),
	HX_CSTRING("reverse_flag"),
	HX_CSTRING("edgeCnt"),
	HX_CSTRING("wrap_edges"),
	HX_CSTRING("edges"),
	HX_CSTRING("wrap_gverts"),
	HX_CSTRING("gverts"),
	HX_CSTRING("wrap_lverts"),
	HX_CSTRING("lverts"),
	HX_CSTRING("outer_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Polygon_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Polygon_obj::__mClass,"__mClass");
};

Class ZPP_Polygon_obj::__mClass;

void ZPP_Polygon_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.shape.ZPP_Polygon"), hx::TCanCast< ZPP_Polygon_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Polygon_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace shape
