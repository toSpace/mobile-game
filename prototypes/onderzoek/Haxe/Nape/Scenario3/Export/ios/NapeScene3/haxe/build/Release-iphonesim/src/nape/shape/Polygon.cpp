#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
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
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace shape{

Void Polygon_obj::__construct(Dynamic localVerts,::nape::phys::Material material,::nape::dynamics::InteractionFilter filter)
{
HX_STACK_PUSH("Polygon::new","nape/shape/Polygon.hx",179);
{
	HX_STACK_LINE(183)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(333)
	try{
		HX_STACK_LINE(333)
		super::__construct();
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(342)
	if (((localVerts == null()))){
		HX_STACK_LINE(342)
		hx::Throw (HX_CSTRING("Error: localVerts cannot be null"));
	}
	HX_STACK_LINE(344)
	this->zpp_inner_zn = ::zpp_nape::shape::ZPP_Polygon_obj::__new();
	HX_STACK_LINE(345)
	this->zpp_inner_zn->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(346)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(347)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(348)
	this->zpp_inner_i = this->zpp_inner;
	HX_STACK_LINE(349)
	this->zpp_inner_i->outer_i = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(350)
	if ((::Std_obj::is(localVerts,hx::ClassOf< Array<int> >()))){
		HX_STACK_LINE(352)
		Dynamic lv = localVerts;		HX_STACK_VAR(lv,"lv");
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(353)
			while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(353)
				Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
				HX_STACK_LINE(353)
				++(_g);
				HX_STACK_LINE(355)
				if (((vite == null()))){
					HX_STACK_LINE(355)
					hx::Throw (HX_CSTRING("Error: Array<Vec2> contains null objects"));
				}
				HX_STACK_LINE(358)
				if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
					HX_STACK_LINE(358)
					hx::Throw (HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
				}
				HX_STACK_LINE(360)
				::nape::geom::Vec2 x = vite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(361)
				if (((bool((x != null())) && bool(x->zpp_disp)))){
					HX_STACK_LINE(363)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				struct _Function_4_1{
					inline static ::nape::geom::Vec2List Block( ::nape::shape::Polygon_obj *__this){
						HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",366);
						{
							HX_STACK_LINE(366)
							if (((__this->zpp_inner_zn->wrap_lverts == null()))){
								HX_STACK_LINE(366)
								__this->zpp_inner_zn->getlverts();
							}
							HX_STACK_LINE(366)
							return __this->zpp_inner_zn->wrap_lverts;
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &x){
						HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",366);
						{
							HX_STACK_LINE(366)
							bool weak = false;		HX_STACK_VAR(weak,"weak");
							HX_STACK_LINE(366)
							if (((bool((x != null())) && bool(x->zpp_disp)))){
								HX_STACK_LINE(366)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							struct _Function_5_1{
								inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &x,bool &weak){
									HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",366);
									{
										struct _Function_6_1{
											inline static Float Block( ::nape::geom::Vec2 &x){
												HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",366);
												{
													HX_STACK_LINE(366)
													if ((x->zpp_disp)){
														HX_STACK_LINE(366)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(366)
													{
														HX_STACK_LINE(366)
														::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(366)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(366)
															_this->_validate();
														}
													}
													HX_STACK_LINE(366)
													return x->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_6_2{
											inline static Float Block( ::nape::geom::Vec2 &x){
												HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",366);
												{
													HX_STACK_LINE(366)
													if ((x->zpp_disp)){
														HX_STACK_LINE(366)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(366)
													{
														HX_STACK_LINE(366)
														::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(366)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(366)
															_this->_validate();
														}
													}
													HX_STACK_LINE(366)
													return x->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(366)
										Float x1 = _Function_6_1::Block(x);		HX_STACK_VAR(x1,"x1");
										Float y = _Function_6_2::Block(x);		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(366)
										if (((bool((x1 != x1)) || bool((y != y))))){
											HX_STACK_LINE(366)
											hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
										}
										HX_STACK_LINE(366)
										::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(366)
										if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
											HX_STACK_LINE(366)
											ret = ::nape::geom::Vec2_obj::__new(null(),null());
										}
										else{
											HX_STACK_LINE(366)
											ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
											HX_STACK_LINE(366)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(366)
											ret->zpp_pool = null();
											HX_STACK_LINE(366)
											ret->zpp_disp = false;
											HX_STACK_LINE(366)
											if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
												HX_STACK_LINE(366)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
											}
										}
										HX_STACK_LINE(366)
										if (((ret->zpp_inner == null()))){
											struct _Function_7_1{
												inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x1,Float &y){
													HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",366);
													{
														HX_STACK_LINE(366)
														bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
														HX_STACK_LINE(366)
														::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(366)
														{
															HX_STACK_LINE(366)
															if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																HX_STACK_LINE(366)
																ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
															}
															else{
																HX_STACK_LINE(366)
																ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																HX_STACK_LINE(366)
																::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(366)
																ret1->next = null();
															}
															HX_STACK_LINE(366)
															ret1->weak = false;
														}
														HX_STACK_LINE(366)
														ret1->_immutable = immutable;
														HX_STACK_LINE(366)
														{
															HX_STACK_LINE(366)
															ret1->x = x1;
															HX_STACK_LINE(366)
															ret1->y = y;
															HX_STACK_LINE(366)
															{
															}
															HX_STACK_LINE(366)
															{
															}
														}
														HX_STACK_LINE(366)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(366)
											ret->zpp_inner = _Function_7_1::Block(x1,y);
											HX_STACK_LINE(366)
											ret->zpp_inner->outer = ret;
										}
										else{
											HX_STACK_LINE(366)
											if (((bool((ret != null())) && bool(ret->zpp_disp)))){
												HX_STACK_LINE(366)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(366)
											{
												HX_STACK_LINE(366)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(366)
												if ((_this->_immutable)){
													HX_STACK_LINE(366)
													hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
												}
												HX_STACK_LINE(366)
												if (((_this->_isimmutable_dyn() != null()))){
													HX_STACK_LINE(366)
													_this->_isimmutable();
												}
											}
											HX_STACK_LINE(366)
											if (((bool((x1 != x1)) || bool((y != y))))){
												HX_STACK_LINE(366)
												hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											struct _Function_7_1{
												inline static Float Block( ::nape::geom::Vec2 &ret){
													HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",366);
													{
														HX_STACK_LINE(366)
														if (((bool((ret != null())) && bool(ret->zpp_disp)))){
															HX_STACK_LINE(366)
															hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
														}
														HX_STACK_LINE(366)
														{
															HX_STACK_LINE(366)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(366)
															if (((_this->_validate_dyn() != null()))){
																HX_STACK_LINE(366)
																_this->_validate();
															}
														}
														HX_STACK_LINE(366)
														return ret->zpp_inner->x;
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static Float Block( ::nape::geom::Vec2 &ret){
													HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",366);
													{
														HX_STACK_LINE(366)
														if (((bool((ret != null())) && bool(ret->zpp_disp)))){
															HX_STACK_LINE(366)
															hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
														}
														HX_STACK_LINE(366)
														{
															HX_STACK_LINE(366)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(366)
															if (((_this->_validate_dyn() != null()))){
																HX_STACK_LINE(366)
																_this->_validate();
															}
														}
														HX_STACK_LINE(366)
														return ret->zpp_inner->y;
													}
													return null();
												}
											};
											HX_STACK_LINE(366)
											if ((!(((bool((_Function_7_1::Block(ret) == x1)) && bool((_Function_7_2::Block(ret) == y))))))){
												HX_STACK_LINE(366)
												{
													HX_STACK_LINE(366)
													ret->zpp_inner->x = x1;
													HX_STACK_LINE(366)
													ret->zpp_inner->y = y;
													HX_STACK_LINE(366)
													{
													}
													HX_STACK_LINE(366)
													{
													}
												}
												HX_STACK_LINE(366)
												{
													HX_STACK_LINE(366)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(366)
													if (((_this->_invalidate_dyn() != null()))){
														HX_STACK_LINE(366)
														_this->_invalidate(_this);
													}
												}
											}
											HX_STACK_LINE(366)
											ret;
										}
										HX_STACK_LINE(366)
										ret->zpp_inner->weak = weak;
										HX_STACK_LINE(366)
										return ret;
									}
									return null();
								}
							};
							HX_STACK_LINE(366)
							return _Function_5_1::Block(x,weak);
						}
						return null();
					}
				};
				HX_STACK_LINE(366)
				(_Function_4_1::Block(this))->push(_Function_4_2::Block(x));
			}
		}
	}
	else{
		HX_STACK_LINE(385)
		if ((::Std_obj::is(localVerts,hx::ClassOf< ::nape::geom::Vec2List >()))){
			HX_STACK_LINE(386)
			::nape::geom::Vec2List lv = localVerts;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(387)
			for(::cpp::FastIterator_obj< ::nape::geom::Vec2 > *__it = ::cpp::CreateFastIterator< ::nape::geom::Vec2 >(lv->iterator());  __it->hasNext(); ){
				::nape::geom::Vec2 x = __it->next();
				{
					HX_STACK_LINE(389)
					if (((x == null()))){
						HX_STACK_LINE(389)
						hx::Throw (HX_CSTRING("Error: Vec2List contains null objects"));
					}
					HX_STACK_LINE(391)
					if (((bool((x != null())) && bool(x->zpp_disp)))){
						HX_STACK_LINE(393)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					struct _Function_4_1{
						inline static ::nape::geom::Vec2List Block( ::nape::shape::Polygon_obj *__this){
							HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",396);
							{
								HX_STACK_LINE(396)
								if (((__this->zpp_inner_zn->wrap_lverts == null()))){
									HX_STACK_LINE(396)
									__this->zpp_inner_zn->getlverts();
								}
								HX_STACK_LINE(396)
								return __this->zpp_inner_zn->wrap_lverts;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &x){
							HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",396);
							{
								HX_STACK_LINE(396)
								bool weak = false;		HX_STACK_VAR(weak,"weak");
								HX_STACK_LINE(396)
								if (((bool((x != null())) && bool(x->zpp_disp)))){
									HX_STACK_LINE(396)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &x,bool &weak){
										HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",396);
										{
											struct _Function_6_1{
												inline static Float Block( ::nape::geom::Vec2 &x){
													HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",396);
													{
														HX_STACK_LINE(396)
														if ((x->zpp_disp)){
															HX_STACK_LINE(396)
															hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
														}
														HX_STACK_LINE(396)
														{
															HX_STACK_LINE(396)
															::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(396)
															if (((_this->_validate_dyn() != null()))){
																HX_STACK_LINE(396)
																_this->_validate();
															}
														}
														HX_STACK_LINE(396)
														return x->zpp_inner->x;
													}
													return null();
												}
											};
											struct _Function_6_2{
												inline static Float Block( ::nape::geom::Vec2 &x){
													HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",396);
													{
														HX_STACK_LINE(396)
														if ((x->zpp_disp)){
															HX_STACK_LINE(396)
															hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
														}
														HX_STACK_LINE(396)
														{
															HX_STACK_LINE(396)
															::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(396)
															if (((_this->_validate_dyn() != null()))){
																HX_STACK_LINE(396)
																_this->_validate();
															}
														}
														HX_STACK_LINE(396)
														return x->zpp_inner->y;
													}
													return null();
												}
											};
											HX_STACK_LINE(396)
											Float x1 = _Function_6_1::Block(x);		HX_STACK_VAR(x1,"x1");
											Float y = _Function_6_2::Block(x);		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(396)
											if (((bool((x1 != x1)) || bool((y != y))))){
												HX_STACK_LINE(396)
												hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											HX_STACK_LINE(396)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(396)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(396)
												ret = ::nape::geom::Vec2_obj::__new(null(),null());
											}
											else{
												HX_STACK_LINE(396)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(396)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(396)
												ret->zpp_pool = null();
												HX_STACK_LINE(396)
												ret->zpp_disp = false;
												HX_STACK_LINE(396)
												if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
													HX_STACK_LINE(396)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
											HX_STACK_LINE(396)
											if (((ret->zpp_inner == null()))){
												struct _Function_7_1{
													inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x1,Float &y){
														HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",396);
														{
															HX_STACK_LINE(396)
															bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
															HX_STACK_LINE(396)
															::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(396)
															{
																HX_STACK_LINE(396)
																if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																	HX_STACK_LINE(396)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																}
																else{
																	HX_STACK_LINE(396)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																	HX_STACK_LINE(396)
																	::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(396)
																	ret1->next = null();
																}
																HX_STACK_LINE(396)
																ret1->weak = false;
															}
															HX_STACK_LINE(396)
															ret1->_immutable = immutable;
															HX_STACK_LINE(396)
															{
																HX_STACK_LINE(396)
																ret1->x = x1;
																HX_STACK_LINE(396)
																ret1->y = y;
																HX_STACK_LINE(396)
																{
																}
																HX_STACK_LINE(396)
																{
																}
															}
															HX_STACK_LINE(396)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(396)
												ret->zpp_inner = _Function_7_1::Block(x1,y);
												HX_STACK_LINE(396)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(396)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(396)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(396)
												{
													HX_STACK_LINE(396)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(396)
													if ((_this->_immutable)){
														HX_STACK_LINE(396)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(396)
													if (((_this->_isimmutable_dyn() != null()))){
														HX_STACK_LINE(396)
														_this->_isimmutable();
													}
												}
												HX_STACK_LINE(396)
												if (((bool((x1 != x1)) || bool((y != y))))){
													HX_STACK_LINE(396)
													hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												struct _Function_7_1{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",396);
														{
															HX_STACK_LINE(396)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(396)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(396)
															{
																HX_STACK_LINE(396)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(396)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(396)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(396)
															return ret->zpp_inner->x;
														}
														return null();
													}
												};
												struct _Function_7_2{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",396);
														{
															HX_STACK_LINE(396)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(396)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(396)
															{
																HX_STACK_LINE(396)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(396)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(396)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(396)
															return ret->zpp_inner->y;
														}
														return null();
													}
												};
												HX_STACK_LINE(396)
												if ((!(((bool((_Function_7_1::Block(ret) == x1)) && bool((_Function_7_2::Block(ret) == y))))))){
													HX_STACK_LINE(396)
													{
														HX_STACK_LINE(396)
														ret->zpp_inner->x = x1;
														HX_STACK_LINE(396)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(396)
														{
														}
														HX_STACK_LINE(396)
														{
														}
													}
													HX_STACK_LINE(396)
													{
														HX_STACK_LINE(396)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(396)
														if (((_this->_invalidate_dyn() != null()))){
															HX_STACK_LINE(396)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(396)
												ret;
											}
											HX_STACK_LINE(396)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(396)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(396)
								return _Function_5_1::Block(x,weak);
							}
							return null();
						}
					};
					HX_STACK_LINE(396)
					(_Function_4_1::Block(this))->push(_Function_4_2::Block(x));
				}
;
			}
		}
		else{
			HX_STACK_LINE(399)
			if ((::Std_obj::is(localVerts,hx::ClassOf< ::nape::geom::GeomPoly >()))){
				HX_STACK_LINE(400)
				::nape::geom::GeomPoly lv = localVerts;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(401)
				if (((bool((lv != null())) && bool(lv->zpp_disp)))){
					HX_STACK_LINE(403)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("GeomPoly")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(406)
				::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
				HX_STACK_LINE(407)
				if (((verts != null()))){
					HX_STACK_LINE(408)
					::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
					HX_STACK_LINE(409)
					do{
						struct _Function_6_1{
							inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_GeomVert &vite){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",410);
								{
									HX_STACK_LINE(410)
									Float x = vite->x;		HX_STACK_VAR(x,"x");
									Float y = vite->y;		HX_STACK_VAR(y,"y");
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(410)
									if (((bool((x != x)) || bool((y != y))))){
										HX_STACK_LINE(410)
										hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
									}
									HX_STACK_LINE(410)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(410)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(410)
										ret = ::nape::geom::Vec2_obj::__new(null(),null());
									}
									else{
										HX_STACK_LINE(410)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(410)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(410)
										ret->zpp_pool = null();
										HX_STACK_LINE(410)
										ret->zpp_disp = false;
										HX_STACK_LINE(410)
										if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
											HX_STACK_LINE(410)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
										}
									}
									HX_STACK_LINE(410)
									if (((ret->zpp_inner == null()))){
										struct _Function_8_1{
											inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
												HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",410);
												{
													HX_STACK_LINE(410)
													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
													HX_STACK_LINE(410)
													::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(410)
													{
														HX_STACK_LINE(410)
														if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
															HX_STACK_LINE(410)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
														}
														else{
															HX_STACK_LINE(410)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
															HX_STACK_LINE(410)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(410)
															ret1->next = null();
														}
														HX_STACK_LINE(410)
														ret1->weak = false;
													}
													HX_STACK_LINE(410)
													ret1->_immutable = immutable;
													HX_STACK_LINE(410)
													{
														HX_STACK_LINE(410)
														ret1->x = x;
														HX_STACK_LINE(410)
														ret1->y = y;
														HX_STACK_LINE(410)
														{
														}
														HX_STACK_LINE(410)
														{
														}
													}
													HX_STACK_LINE(410)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(410)
										ret->zpp_inner = _Function_8_1::Block(x,y);
										HX_STACK_LINE(410)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(410)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(410)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(410)
										{
											HX_STACK_LINE(410)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(410)
											if ((_this->_immutable)){
												HX_STACK_LINE(410)
												hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(410)
											if (((_this->_isimmutable_dyn() != null()))){
												HX_STACK_LINE(410)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(410)
										if (((bool((x != x)) || bool((y != y))))){
											HX_STACK_LINE(410)
											hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
										}
										struct _Function_8_1{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",410);
												{
													HX_STACK_LINE(410)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(410)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(410)
													{
														HX_STACK_LINE(410)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(410)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(410)
															_this->_validate();
														}
													}
													HX_STACK_LINE(410)
													return ret->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_8_2{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",410);
												{
													HX_STACK_LINE(410)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(410)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(410)
													{
														HX_STACK_LINE(410)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(410)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(410)
															_this->_validate();
														}
													}
													HX_STACK_LINE(410)
													return ret->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(410)
										if ((!(((bool((_Function_8_1::Block(ret) == x)) && bool((_Function_8_2::Block(ret) == y))))))){
											HX_STACK_LINE(410)
											{
												HX_STACK_LINE(410)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(410)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(410)
												{
												}
												HX_STACK_LINE(410)
												{
												}
											}
											HX_STACK_LINE(410)
											{
												HX_STACK_LINE(410)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(410)
												if (((_this->_invalidate_dyn() != null()))){
													HX_STACK_LINE(410)
													_this->_invalidate(_this);
												}
											}
										}
										HX_STACK_LINE(410)
										ret;
									}
									HX_STACK_LINE(410)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(410)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(410)
						::nape::geom::Vec2 x = _Function_6_1::Block(vite);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(411)
						vite = vite->next;
						struct _Function_6_2{
							inline static ::nape::geom::Vec2List Block( ::nape::shape::Polygon_obj *__this){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",412);
								{
									HX_STACK_LINE(412)
									if (((__this->zpp_inner_zn->wrap_lverts == null()))){
										HX_STACK_LINE(412)
										__this->zpp_inner_zn->getlverts();
									}
									HX_STACK_LINE(412)
									return __this->zpp_inner_zn->wrap_lverts;
								}
								return null();
							}
						};
						struct _Function_6_3{
							inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &x){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",412);
								{
									HX_STACK_LINE(412)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(412)
									if (((bool((x != null())) && bool(x->zpp_disp)))){
										HX_STACK_LINE(412)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									struct _Function_7_1{
										inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &x,bool &weak){
											HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",412);
											{
												struct _Function_8_1{
													inline static Float Block( ::nape::geom::Vec2 &x){
														HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",412);
														{
															HX_STACK_LINE(412)
															if ((x->zpp_disp)){
																HX_STACK_LINE(412)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(412)
															{
																HX_STACK_LINE(412)
																::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(412)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(412)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(412)
															return x->zpp_inner->x;
														}
														return null();
													}
												};
												struct _Function_8_2{
													inline static Float Block( ::nape::geom::Vec2 &x){
														HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",412);
														{
															HX_STACK_LINE(412)
															if ((x->zpp_disp)){
																HX_STACK_LINE(412)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(412)
															{
																HX_STACK_LINE(412)
																::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(412)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(412)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(412)
															return x->zpp_inner->y;
														}
														return null();
													}
												};
												HX_STACK_LINE(412)
												Float x1 = _Function_8_1::Block(x);		HX_STACK_VAR(x1,"x1");
												Float y = _Function_8_2::Block(x);		HX_STACK_VAR(y,"y");
												HX_STACK_LINE(412)
												if (((bool((x1 != x1)) || bool((y != y))))){
													HX_STACK_LINE(412)
													hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												HX_STACK_LINE(412)
												::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(412)
												if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
													HX_STACK_LINE(412)
													ret = ::nape::geom::Vec2_obj::__new(null(),null());
												}
												else{
													HX_STACK_LINE(412)
													ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
													HX_STACK_LINE(412)
													::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
													HX_STACK_LINE(412)
													ret->zpp_pool = null();
													HX_STACK_LINE(412)
													ret->zpp_disp = false;
													HX_STACK_LINE(412)
													if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
														HX_STACK_LINE(412)
														::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
													}
												}
												HX_STACK_LINE(412)
												if (((ret->zpp_inner == null()))){
													struct _Function_9_1{
														inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x1,Float &y){
															HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",412);
															{
																HX_STACK_LINE(412)
																bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																HX_STACK_LINE(412)
																::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(412)
																{
																	HX_STACK_LINE(412)
																	if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																		HX_STACK_LINE(412)
																		ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(412)
																		ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																		HX_STACK_LINE(412)
																		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(412)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(412)
																	ret1->weak = false;
																}
																HX_STACK_LINE(412)
																ret1->_immutable = immutable;
																HX_STACK_LINE(412)
																{
																	HX_STACK_LINE(412)
																	ret1->x = x1;
																	HX_STACK_LINE(412)
																	ret1->y = y;
																	HX_STACK_LINE(412)
																	{
																	}
																	HX_STACK_LINE(412)
																	{
																	}
																}
																HX_STACK_LINE(412)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(412)
													ret->zpp_inner = _Function_9_1::Block(x1,y);
													HX_STACK_LINE(412)
													ret->zpp_inner->outer = ret;
												}
												else{
													HX_STACK_LINE(412)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(412)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(412)
													{
														HX_STACK_LINE(412)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(412)
														if ((_this->_immutable)){
															HX_STACK_LINE(412)
															hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
														}
														HX_STACK_LINE(412)
														if (((_this->_isimmutable_dyn() != null()))){
															HX_STACK_LINE(412)
															_this->_isimmutable();
														}
													}
													HX_STACK_LINE(412)
													if (((bool((x1 != x1)) || bool((y != y))))){
														HX_STACK_LINE(412)
														hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
													}
													struct _Function_9_1{
														inline static Float Block( ::nape::geom::Vec2 &ret){
															HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",412);
															{
																HX_STACK_LINE(412)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(412)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(412)
																{
																	HX_STACK_LINE(412)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(412)
																	if (((_this->_validate_dyn() != null()))){
																		HX_STACK_LINE(412)
																		_this->_validate();
																	}
																}
																HX_STACK_LINE(412)
																return ret->zpp_inner->x;
															}
															return null();
														}
													};
													struct _Function_9_2{
														inline static Float Block( ::nape::geom::Vec2 &ret){
															HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",412);
															{
																HX_STACK_LINE(412)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(412)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(412)
																{
																	HX_STACK_LINE(412)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(412)
																	if (((_this->_validate_dyn() != null()))){
																		HX_STACK_LINE(412)
																		_this->_validate();
																	}
																}
																HX_STACK_LINE(412)
																return ret->zpp_inner->y;
															}
															return null();
														}
													};
													HX_STACK_LINE(412)
													if ((!(((bool((_Function_9_1::Block(ret) == x1)) && bool((_Function_9_2::Block(ret) == y))))))){
														HX_STACK_LINE(412)
														{
															HX_STACK_LINE(412)
															ret->zpp_inner->x = x1;
															HX_STACK_LINE(412)
															ret->zpp_inner->y = y;
															HX_STACK_LINE(412)
															{
															}
															HX_STACK_LINE(412)
															{
															}
														}
														HX_STACK_LINE(412)
														{
															HX_STACK_LINE(412)
															::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(412)
															if (((_this->_invalidate_dyn() != null()))){
																HX_STACK_LINE(412)
																_this->_invalidate(_this);
															}
														}
													}
													HX_STACK_LINE(412)
													ret;
												}
												HX_STACK_LINE(412)
												ret->zpp_inner->weak = weak;
												HX_STACK_LINE(412)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(412)
									return _Function_7_1::Block(x,weak);
								}
								return null();
							}
						};
						HX_STACK_LINE(412)
						(_Function_6_2::Block(this))->push(_Function_6_3::Block(x));
						HX_STACK_LINE(413)
						{
							HX_STACK_LINE(413)
							if (((bool((x != null())) && bool(x->zpp_disp)))){
								HX_STACK_LINE(413)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(413)
							{
								HX_STACK_LINE(413)
								::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(413)
								if ((_this->_immutable)){
									HX_STACK_LINE(413)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(413)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(413)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(413)
							if ((x->zpp_inner->_inuse)){
								HX_STACK_LINE(413)
								hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
							}
							HX_STACK_LINE(413)
							::zpp_nape::geom::ZPP_Vec2 inner = x->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(413)
							x->zpp_inner->outer = null();
							HX_STACK_LINE(413)
							x->zpp_inner = null();
							HX_STACK_LINE(413)
							{
								HX_STACK_LINE(413)
								::nape::geom::Vec2 o = x;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(413)
								{
								}
								HX_STACK_LINE(413)
								o->zpp_pool = null();
								HX_STACK_LINE(413)
								if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
									HX_STACK_LINE(413)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(413)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(413)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(413)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(413)
							{
								HX_STACK_LINE(413)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(413)
								{
								}
								HX_STACK_LINE(413)
								{
									HX_STACK_LINE(413)
									if (((o->outer != null()))){
										HX_STACK_LINE(413)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(413)
										o->outer = null();
									}
									HX_STACK_LINE(413)
									o->_isimmutable = null();
									HX_STACK_LINE(413)
									o->_validate = null();
									HX_STACK_LINE(413)
									o->_invalidate = null();
								}
								HX_STACK_LINE(413)
								o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(413)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
					}
while(((vite != verts)));
				}
			}
			else{
				HX_STACK_LINE(418)
				hx::Throw (HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
			}
		}
	}
	HX_STACK_LINE(424)
	if ((::Std_obj::is(localVerts,hx::ClassOf< Array<int> >()))){
		HX_STACK_LINE(426)
		Array< ::nape::geom::Vec2 > lv = localVerts;		HX_STACK_VAR(lv,"lv");
		HX_STACK_LINE(427)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(428)
		while(((i < lv->length))){
			HX_STACK_LINE(429)
			::nape::geom::Vec2 cur = lv->__get(i);		HX_STACK_VAR(cur,"cur");
			struct _Function_3_1{
				inline static bool Block( ::nape::geom::Vec2 &cur){
					HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",433);
					{
						HX_STACK_LINE(434)
						{
							HX_STACK_LINE(434)
							if (((bool((cur != null())) && bool(cur->zpp_disp)))){
								HX_STACK_LINE(434)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(434)
							{
								HX_STACK_LINE(434)
								::zpp_nape::geom::ZPP_Vec2 _this = cur->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(434)
								if ((_this->_immutable)){
									HX_STACK_LINE(434)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(434)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(434)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(434)
							if ((cur->zpp_inner->_inuse)){
								HX_STACK_LINE(434)
								hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
							}
							HX_STACK_LINE(434)
							::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(434)
							cur->zpp_inner->outer = null();
							HX_STACK_LINE(434)
							cur->zpp_inner = null();
							HX_STACK_LINE(434)
							{
								HX_STACK_LINE(434)
								::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(434)
								{
								}
								HX_STACK_LINE(434)
								o->zpp_pool = null();
								HX_STACK_LINE(434)
								if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
									HX_STACK_LINE(434)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(434)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(434)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(434)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(434)
							{
								HX_STACK_LINE(434)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(434)
								{
								}
								HX_STACK_LINE(434)
								{
									HX_STACK_LINE(434)
									if (((o->outer != null()))){
										HX_STACK_LINE(434)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(434)
										o->outer = null();
									}
									HX_STACK_LINE(434)
									o->_isimmutable = null();
									HX_STACK_LINE(434)
									o->_validate = null();
									HX_STACK_LINE(434)
									o->_invalidate = null();
								}
								HX_STACK_LINE(434)
								o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(434)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(435)
						return true;
					}
					return null();
				}
			};
			HX_STACK_LINE(430)
			if (((  ((cur->zpp_inner->weak)) ? bool(_Function_3_1::Block(cur)) : bool(false) ))){
				HX_STACK_LINE(441)
				lv->splice(i,(int)1);
				HX_STACK_LINE(442)
				continue;
			}
			HX_STACK_LINE(444)
			(i)++;
		}
	}
	else{
		HX_STACK_LINE(472)
		if ((::Std_obj::is(localVerts,hx::ClassOf< ::nape::geom::Vec2List >()))){
			HX_STACK_LINE(473)
			::nape::geom::Vec2List lv = localVerts;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(474)
			if (((lv->zpp_inner->_validate_dyn() != null()))){
				HX_STACK_LINE(474)
				lv->zpp_inner->_validate();
			}
			HX_STACK_LINE(475)
			::zpp_nape::util::ZNPList_ZPP_Vec2 ins = lv->zpp_inner->inner;		HX_STACK_VAR(ins,"ins");
			HX_STACK_LINE(476)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(477)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(478)
			while(((cur != null()))){
				HX_STACK_LINE(479)
				::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(480)
				if ((x->outer->zpp_inner->weak)){
					HX_STACK_LINE(483)
					cur = ins->erase(pre);
					HX_STACK_LINE(484)
					if ((x->outer->zpp_inner->weak)){
						HX_STACK_LINE(488)
						{
							HX_STACK_LINE(488)
							::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(488)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(488)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(488)
							{
								HX_STACK_LINE(488)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(488)
								if ((_this1->_immutable)){
									HX_STACK_LINE(488)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(488)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(488)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(488)
							if ((_this->zpp_inner->_inuse)){
								HX_STACK_LINE(488)
								hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
							}
							HX_STACK_LINE(488)
							::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(488)
							_this->zpp_inner->outer = null();
							HX_STACK_LINE(488)
							_this->zpp_inner = null();
							HX_STACK_LINE(488)
							{
								HX_STACK_LINE(488)
								::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(488)
								{
								}
								HX_STACK_LINE(488)
								o->zpp_pool = null();
								HX_STACK_LINE(488)
								if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
									HX_STACK_LINE(488)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(488)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(488)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(488)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(488)
							{
								HX_STACK_LINE(488)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(488)
								{
								}
								HX_STACK_LINE(488)
								{
									HX_STACK_LINE(488)
									if (((o->outer != null()))){
										HX_STACK_LINE(488)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(488)
										o->outer = null();
									}
									HX_STACK_LINE(488)
									o->_isimmutable = null();
									HX_STACK_LINE(488)
									o->_validate = null();
									HX_STACK_LINE(488)
									o->_invalidate = null();
								}
								HX_STACK_LINE(488)
								o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(488)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(489)
						true;
					}
					else{
						HX_STACK_LINE(491)
						false;
					}
				}
				else{
					HX_STACK_LINE(497)
					pre = cur;
					HX_STACK_LINE(498)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(503)
	if (((material == null()))){
		HX_STACK_LINE(504)
		if (((::zpp_nape::phys::ZPP_Material_obj::zpp_pool == null()))){
			HX_STACK_LINE(504)
			this->zpp_inner->material = ::zpp_nape::phys::ZPP_Material_obj::__new();
		}
		else{
			HX_STACK_LINE(511)
			this->zpp_inner->material = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;
			HX_STACK_LINE(512)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = this->zpp_inner->material->next;
			HX_STACK_LINE(513)
			this->zpp_inner->material->next = null();
		}
		HX_STACK_LINE(518)
		Dynamic();
	}
	else{
		HX_STACK_LINE(520)
		{
			HX_STACK_LINE(520)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::material"));
			HX_STACK_LINE(520)
			if (((material == null()))){
				HX_STACK_LINE(520)
				hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape material"));
			}
			HX_STACK_LINE(520)
			this->zpp_inner->setMaterial(material->zpp_inner);
		}
		HX_STACK_LINE(520)
		this->zpp_inner->material->wrapper();
	}
	HX_STACK_LINE(521)
	if (((filter == null()))){
		HX_STACK_LINE(522)
		if (((::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool == null()))){
			HX_STACK_LINE(522)
			this->zpp_inner->filter = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__new();
		}
		else{
			HX_STACK_LINE(529)
			this->zpp_inner->filter = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;
			HX_STACK_LINE(530)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = this->zpp_inner->filter->next;
			HX_STACK_LINE(531)
			this->zpp_inner->filter->next = null();
		}
		HX_STACK_LINE(536)
		Dynamic();
	}
	else{
		HX_STACK_LINE(538)
		{
			HX_STACK_LINE(538)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::filter"));
			HX_STACK_LINE(538)
			if (((filter == null()))){
				HX_STACK_LINE(538)
				hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape filter"));
			}
			HX_STACK_LINE(538)
			this->zpp_inner->setFilter(filter->zpp_inner);
		}
		HX_STACK_LINE(538)
		this->zpp_inner->filter->wrapper();
	}
	HX_STACK_LINE(539)
	this->zpp_inner_i->insert_cbtype(::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE->zpp_inner);
}
;
	return null();
}

Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Dynamic localVerts,::nape::phys::Material material,::nape::dynamics::InteractionFilter filter)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(localVerts,material,filter);
	return result;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::nape::shape::ValidationResult Polygon_obj::validity( ){
	HX_STACK_PUSH("Polygon::validity","nape/shape/Polygon.hx",312);
	HX_STACK_THIS(this);
	HX_STACK_LINE(312)
	return this->zpp_inner_zn->valid();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,validity,return )

::nape::shape::EdgeList Polygon_obj::get_edges( ){
	HX_STACK_PUSH("Polygon::get_edges","nape/shape/Polygon.hx",304);
	HX_STACK_THIS(this);
	HX_STACK_LINE(305)
	if (((this->zpp_inner_zn->wrap_edges == null()))){
		HX_STACK_LINE(305)
		this->zpp_inner_zn->getedges();
	}
	HX_STACK_LINE(306)
	return this->zpp_inner_zn->wrap_edges;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_edges,return )

::nape::geom::Vec2List Polygon_obj::get_worldVerts( ){
	HX_STACK_PUSH("Polygon::get_worldVerts","nape/shape/Polygon.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_LINE(294)
	if (((this->zpp_inner_zn->wrap_gverts == null()))){
		HX_STACK_LINE(294)
		this->zpp_inner_zn->getgverts();
	}
	HX_STACK_LINE(295)
	return this->zpp_inner_zn->wrap_gverts;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_worldVerts,return )

::nape::geom::Vec2List Polygon_obj::get_localVerts( ){
	HX_STACK_PUSH("Polygon::get_localVerts","nape/shape/Polygon.hx",279);
	HX_STACK_THIS(this);
	HX_STACK_LINE(280)
	if (((this->zpp_inner_zn->wrap_lverts == null()))){
		HX_STACK_LINE(280)
		this->zpp_inner_zn->getlverts();
	}
	HX_STACK_LINE(281)
	return this->zpp_inner_zn->wrap_lverts;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_localVerts,return )

Array< ::nape::geom::Vec2 > Polygon_obj::rect( Float x,Float y,Float width,Float height,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Polygon::rect","nape/shape/Polygon.hx",209);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(211)
		if (((bool((bool((bool((x != x)) || bool((y != y)))) || bool((width != width)))) || bool((height != height))))){
			HX_STACK_LINE(211)
			hx::Throw (HX_CSTRING("Error: Polygon.rect cannot accept NaN arguments"));
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( Float &y,bool &weak,Float &x){
				HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
				{
					HX_STACK_LINE(213)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(213)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(213)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(213)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(213)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(213)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(213)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(213)
						ret->zpp_pool = null();
						HX_STACK_LINE(213)
						ret->zpp_disp = false;
						HX_STACK_LINE(213)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(213)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(213)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
								{
									HX_STACK_LINE(213)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(213)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(213)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(213)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(213)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(213)
											ret1->next = null();
										}
										HX_STACK_LINE(213)
										ret1->weak = false;
									}
									HX_STACK_LINE(213)
									ret1->_immutable = immutable;
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										ret1->x = x;
										HX_STACK_LINE(213)
										ret1->y = y;
										HX_STACK_LINE(213)
										{
										}
										HX_STACK_LINE(213)
										{
										}
									}
									HX_STACK_LINE(213)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(213)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(213)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(213)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(213)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(213)
							if ((_this->_immutable)){
								HX_STACK_LINE(213)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(213)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(213)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(213)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(213)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
								{
									HX_STACK_LINE(213)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(213)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(213)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(213)
											_this->_validate();
										}
									}
									HX_STACK_LINE(213)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
								{
									HX_STACK_LINE(213)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(213)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(213)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(213)
											_this->_validate();
										}
									}
									HX_STACK_LINE(213)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(213)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(213)
							{
								HX_STACK_LINE(213)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(213)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(213)
								{
								}
								HX_STACK_LINE(213)
								{
								}
							}
							HX_STACK_LINE(213)
							{
								HX_STACK_LINE(213)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(213)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(213)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(213)
						ret;
					}
					HX_STACK_LINE(213)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(213)
					return ret;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::nape::geom::Vec2 Block( Float &width,Float &y,bool &weak,Float &x){
				HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
				{
					HX_STACK_LINE(213)
					Float x1 = (x + width);		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(213)
					if (((bool((x1 != x1)) || bool((y != y))))){
						HX_STACK_LINE(213)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(213)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(213)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(213)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(213)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(213)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(213)
						ret->zpp_pool = null();
						HX_STACK_LINE(213)
						ret->zpp_disp = false;
						HX_STACK_LINE(213)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(213)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(213)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x1,Float &y){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
								{
									HX_STACK_LINE(213)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(213)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(213)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(213)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(213)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(213)
											ret1->next = null();
										}
										HX_STACK_LINE(213)
										ret1->weak = false;
									}
									HX_STACK_LINE(213)
									ret1->_immutable = immutable;
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										ret1->x = x1;
										HX_STACK_LINE(213)
										ret1->y = y;
										HX_STACK_LINE(213)
										{
										}
										HX_STACK_LINE(213)
										{
										}
									}
									HX_STACK_LINE(213)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(213)
						ret->zpp_inner = _Function_3_1::Block(x1,y);
						HX_STACK_LINE(213)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(213)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(213)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(213)
							if ((_this->_immutable)){
								HX_STACK_LINE(213)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(213)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(213)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(213)
						if (((bool((x1 != x1)) || bool((y != y))))){
							HX_STACK_LINE(213)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
								{
									HX_STACK_LINE(213)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(213)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(213)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(213)
											_this->_validate();
										}
									}
									HX_STACK_LINE(213)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
								{
									HX_STACK_LINE(213)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(213)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(213)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(213)
											_this->_validate();
										}
									}
									HX_STACK_LINE(213)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(213)
						if ((!(((bool((_Function_3_1::Block(ret) == x1)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(213)
							{
								HX_STACK_LINE(213)
								ret->zpp_inner->x = x1;
								HX_STACK_LINE(213)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(213)
								{
								}
								HX_STACK_LINE(213)
								{
								}
							}
							HX_STACK_LINE(213)
							{
								HX_STACK_LINE(213)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(213)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(213)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(213)
						ret;
					}
					HX_STACK_LINE(213)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(213)
					return ret;
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static ::nape::geom::Vec2 Block( Float &width,Float &y,bool &weak,Float &x,Float &height){
				HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
				{
					HX_STACK_LINE(213)
					Float x1 = (x + width);		HX_STACK_VAR(x1,"x1");
					Float y1 = (y + height);		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(213)
					if (((bool((x1 != x1)) || bool((y1 != y1))))){
						HX_STACK_LINE(213)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(213)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(213)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(213)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(213)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(213)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(213)
						ret->zpp_pool = null();
						HX_STACK_LINE(213)
						ret->zpp_disp = false;
						HX_STACK_LINE(213)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(213)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(213)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x1,Float &y1){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
								{
									HX_STACK_LINE(213)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(213)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(213)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(213)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(213)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(213)
											ret1->next = null();
										}
										HX_STACK_LINE(213)
										ret1->weak = false;
									}
									HX_STACK_LINE(213)
									ret1->_immutable = immutable;
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										ret1->x = x1;
										HX_STACK_LINE(213)
										ret1->y = y1;
										HX_STACK_LINE(213)
										{
										}
										HX_STACK_LINE(213)
										{
										}
									}
									HX_STACK_LINE(213)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(213)
						ret->zpp_inner = _Function_3_1::Block(x1,y1);
						HX_STACK_LINE(213)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(213)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(213)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(213)
							if ((_this->_immutable)){
								HX_STACK_LINE(213)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(213)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(213)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(213)
						if (((bool((x1 != x1)) || bool((y1 != y1))))){
							HX_STACK_LINE(213)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
								{
									HX_STACK_LINE(213)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(213)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(213)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(213)
											_this->_validate();
										}
									}
									HX_STACK_LINE(213)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
								{
									HX_STACK_LINE(213)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(213)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(213)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(213)
											_this->_validate();
										}
									}
									HX_STACK_LINE(213)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(213)
						if ((!(((bool((_Function_3_1::Block(ret) == x1)) && bool((_Function_3_2::Block(ret) == y1))))))){
							HX_STACK_LINE(213)
							{
								HX_STACK_LINE(213)
								ret->zpp_inner->x = x1;
								HX_STACK_LINE(213)
								ret->zpp_inner->y = y1;
								HX_STACK_LINE(213)
								{
								}
								HX_STACK_LINE(213)
								{
								}
							}
							HX_STACK_LINE(213)
							{
								HX_STACK_LINE(213)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(213)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(213)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(213)
						ret;
					}
					HX_STACK_LINE(213)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(213)
					return ret;
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static ::nape::geom::Vec2 Block( Float &y,bool &weak,Float &height,Float &x){
				HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
				{
					HX_STACK_LINE(213)
					Float y1 = (y + height);		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(213)
					if (((bool((x != x)) || bool((y1 != y1))))){
						HX_STACK_LINE(213)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(213)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(213)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(213)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(213)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(213)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(213)
						ret->zpp_pool = null();
						HX_STACK_LINE(213)
						ret->zpp_disp = false;
						HX_STACK_LINE(213)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(213)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(213)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y1){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
								{
									HX_STACK_LINE(213)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(213)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(213)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(213)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(213)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(213)
											ret1->next = null();
										}
										HX_STACK_LINE(213)
										ret1->weak = false;
									}
									HX_STACK_LINE(213)
									ret1->_immutable = immutable;
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										ret1->x = x;
										HX_STACK_LINE(213)
										ret1->y = y1;
										HX_STACK_LINE(213)
										{
										}
										HX_STACK_LINE(213)
										{
										}
									}
									HX_STACK_LINE(213)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(213)
						ret->zpp_inner = _Function_3_1::Block(x,y1);
						HX_STACK_LINE(213)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(213)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(213)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(213)
							if ((_this->_immutable)){
								HX_STACK_LINE(213)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(213)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(213)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(213)
						if (((bool((x != x)) || bool((y1 != y1))))){
							HX_STACK_LINE(213)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
								{
									HX_STACK_LINE(213)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(213)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(213)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(213)
											_this->_validate();
										}
									}
									HX_STACK_LINE(213)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",213);
								{
									HX_STACK_LINE(213)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(213)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(213)
									{
										HX_STACK_LINE(213)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(213)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(213)
											_this->_validate();
										}
									}
									HX_STACK_LINE(213)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(213)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y1))))))){
							HX_STACK_LINE(213)
							{
								HX_STACK_LINE(213)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(213)
								ret->zpp_inner->y = y1;
								HX_STACK_LINE(213)
								{
								}
								HX_STACK_LINE(213)
								{
								}
							}
							HX_STACK_LINE(213)
							{
								HX_STACK_LINE(213)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(213)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(213)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(213)
						ret;
					}
					HX_STACK_LINE(213)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(213)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(213)
		return Array_obj< ::nape::geom::Vec2 >::__new().Add(_Function_1_1::Block(y,weak,x)).Add(_Function_1_2::Block(width,y,weak,x)).Add(_Function_1_3::Block(width,y,weak,x,height)).Add(_Function_1_4::Block(y,weak,height,x));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Polygon_obj,rect,return )

Array< ::nape::geom::Vec2 > Polygon_obj::box( Float width,Float height,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Polygon::box","nape/shape/Polygon.hx",231);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(233)
		if (((bool((width != width)) || bool((height != height))))){
			HX_STACK_LINE(233)
			hx::Throw (HX_CSTRING("Error: Polygon.box cannot accept NaN arguments"));
		}
		HX_STACK_LINE(235)
		return ::nape::shape::Polygon_obj::rect((Float(-(width)) / Float((int)2)),(Float(-(height)) / Float((int)2)),width,height,weak);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,box,return )

Array< ::nape::geom::Vec2 > Polygon_obj::regular( Float xRadius,Float yRadius,int edgeCount,hx::Null< Float >  __o_angleOffset,hx::Null< bool >  __o_weak){
Float angleOffset = __o_angleOffset.Default(0.0);
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Polygon::regular","nape/shape/Polygon.hx",257);
	HX_STACK_ARG(xRadius,"xRadius");
	HX_STACK_ARG(yRadius,"yRadius");
	HX_STACK_ARG(edgeCount,"edgeCount");
	HX_STACK_ARG(angleOffset,"angleOffset");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(259)
		if (((bool((bool((xRadius != xRadius)) || bool((yRadius != yRadius)))) || bool((angleOffset != angleOffset))))){
			HX_STACK_LINE(259)
			hx::Throw (HX_CSTRING("Error: Polygon.regular cannot accept NaN arguments"));
		}
		HX_STACK_LINE(261)
		Array< ::nape::geom::Vec2 > ret = Array_obj< ::nape::geom::Vec2 >::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(262)
		Float dangle = (Float((::Math_obj::PI * (int)2)) / Float(edgeCount));		HX_STACK_VAR(dangle,"dangle");
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(263)
			while(((_g < edgeCount))){
				HX_STACK_LINE(263)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(264)
				Float ang = ((i * dangle) + angleOffset);		HX_STACK_VAR(ang,"ang");
				struct _Function_3_1{
					inline static ::nape::geom::Vec2 Block( Float &xRadius,Float &ang,bool &weak,Float &yRadius){
						HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",265);
						{
							HX_STACK_LINE(265)
							Float x = (::Math_obj::cos(ang) * xRadius);		HX_STACK_VAR(x,"x");
							Float y = (::Math_obj::sin(ang) * yRadius);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(265)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(265)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							HX_STACK_LINE(265)
							::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(265)
							if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
								HX_STACK_LINE(265)
								ret1 = ::nape::geom::Vec2_obj::__new(null(),null());
							}
							else{
								HX_STACK_LINE(265)
								ret1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
								HX_STACK_LINE(265)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
								HX_STACK_LINE(265)
								ret1->zpp_pool = null();
								HX_STACK_LINE(265)
								ret1->zpp_disp = false;
								HX_STACK_LINE(265)
								if (((ret1 == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
									HX_STACK_LINE(265)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
								}
							}
							HX_STACK_LINE(265)
							if (((ret1->zpp_inner == null()))){
								struct _Function_5_1{
									inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
										HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",265);
										{
											HX_STACK_LINE(265)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(265)
											::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
											HX_STACK_LINE(265)
											{
												HX_STACK_LINE(265)
												if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
													HX_STACK_LINE(265)
													ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
												}
												else{
													HX_STACK_LINE(265)
													ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
													HX_STACK_LINE(265)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
													HX_STACK_LINE(265)
													ret2->next = null();
												}
												HX_STACK_LINE(265)
												ret2->weak = false;
											}
											HX_STACK_LINE(265)
											ret2->_immutable = immutable;
											HX_STACK_LINE(265)
											{
												HX_STACK_LINE(265)
												ret2->x = x;
												HX_STACK_LINE(265)
												ret2->y = y;
												HX_STACK_LINE(265)
												{
												}
												HX_STACK_LINE(265)
												{
												}
											}
											HX_STACK_LINE(265)
											return ret2;
										}
										return null();
									}
								};
								HX_STACK_LINE(265)
								ret1->zpp_inner = _Function_5_1::Block(x,y);
								HX_STACK_LINE(265)
								ret1->zpp_inner->outer = ret1;
							}
							else{
								HX_STACK_LINE(265)
								if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
									HX_STACK_LINE(265)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(265)
								{
									HX_STACK_LINE(265)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(265)
									if ((_this->_immutable)){
										HX_STACK_LINE(265)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(265)
									if (((_this->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(265)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(265)
								if (((bool((x != x)) || bool((y != y))))){
									HX_STACK_LINE(265)
									hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
								}
								struct _Function_5_1{
									inline static Float Block( ::nape::geom::Vec2 &ret1){
										HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",265);
										{
											HX_STACK_LINE(265)
											if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
												HX_STACK_LINE(265)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(265)
											{
												HX_STACK_LINE(265)
												::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(265)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(265)
													_this->_validate();
												}
											}
											HX_STACK_LINE(265)
											return ret1->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_5_2{
									inline static Float Block( ::nape::geom::Vec2 &ret1){
										HX_STACK_PUSH("*::closure","nape/shape/Polygon.hx",265);
										{
											HX_STACK_LINE(265)
											if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
												HX_STACK_LINE(265)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(265)
											{
												HX_STACK_LINE(265)
												::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(265)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(265)
													_this->_validate();
												}
											}
											HX_STACK_LINE(265)
											return ret1->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(265)
								if ((!(((bool((_Function_5_1::Block(ret1) == x)) && bool((_Function_5_2::Block(ret1) == y))))))){
									HX_STACK_LINE(265)
									{
										HX_STACK_LINE(265)
										ret1->zpp_inner->x = x;
										HX_STACK_LINE(265)
										ret1->zpp_inner->y = y;
										HX_STACK_LINE(265)
										{
										}
										HX_STACK_LINE(265)
										{
										}
									}
									HX_STACK_LINE(265)
									{
										HX_STACK_LINE(265)
										::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(265)
										if (((_this->_invalidate_dyn() != null()))){
											HX_STACK_LINE(265)
											_this->_invalidate(_this);
										}
									}
								}
								HX_STACK_LINE(265)
								ret1;
							}
							HX_STACK_LINE(265)
							ret1->zpp_inner->weak = weak;
							HX_STACK_LINE(265)
							return ret1;
						}
						return null();
					}
				};
				HX_STACK_LINE(265)
				::nape::geom::Vec2 x = _Function_3_1::Block(xRadius,ang,weak,yRadius);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(266)
				ret->push(x);
			}
		}
		HX_STACK_LINE(268)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Polygon_obj,regular,return )


Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(edges,"edges");
	HX_MARK_MEMBER_NAME(worldVerts,"worldVerts");
	HX_MARK_MEMBER_NAME(localVerts,"localVerts");
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(edges,"edges");
	HX_VISIT_MEMBER_NAME(worldVerts,"worldVerts");
	HX_VISIT_MEMBER_NAME(localVerts,"localVerts");
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Polygon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return box_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"edges") ) { return inCallProp ? get_edges() : edges; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regular") ) { return regular_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validity") ) { return validity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_edges") ) { return get_edges_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"worldVerts") ) { return inCallProp ? get_worldVerts() : worldVerts; }
		if (HX_FIELD_EQ(inName,"localVerts") ) { return inCallProp ? get_localVerts() : localVerts; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_worldVerts") ) { return get_worldVerts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_localVerts") ) { return get_localVerts_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"edges") ) { edges=inValue.Cast< ::nape::shape::EdgeList >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"worldVerts") ) { worldVerts=inValue.Cast< ::nape::geom::Vec2List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localVerts") ) { localVerts=inValue.Cast< ::nape::geom::Vec2List >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::shape::ZPP_Polygon >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("edges"));
	outFields->push(HX_CSTRING("worldVerts"));
	outFields->push(HX_CSTRING("localVerts"));
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("rect"),
	HX_CSTRING("box"),
	HX_CSTRING("regular"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("validity"),
	HX_CSTRING("get_edges"),
	HX_CSTRING("edges"),
	HX_CSTRING("get_worldVerts"),
	HX_CSTRING("worldVerts"),
	HX_CSTRING("get_localVerts"),
	HX_CSTRING("localVerts"),
	HX_CSTRING("zpp_inner_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
};

Class Polygon_obj::__mClass;

void Polygon_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.shape.Polygon"), hx::TCanCast< Polygon_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Polygon_obj::__boot()
{
}

} // end namespace nape
} // end namespace shape
