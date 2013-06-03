#include <hxcpp.h>

#ifndef INCLUDED_IsoBody
#include <IsoBody.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyIterator
#include <nape/geom/GeomPolyIterator.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_MarchingSquares
#include <nape/geom/MarchingSquares.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif

Void IsoBody_obj::__construct()
{
	return null();
}

IsoBody_obj::~IsoBody_obj() { }

Dynamic IsoBody_obj::__CreateEmpty() { return  new IsoBody_obj; }
hx::ObjectPtr< IsoBody_obj > IsoBody_obj::__new()
{  hx::ObjectPtr< IsoBody_obj > result = new IsoBody_obj();
	result->__construct();
	return result;}

Dynamic IsoBody_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IsoBody_obj > result = new IsoBody_obj();
	result->__construct();
	return result;}

::nape::phys::Body IsoBody_obj::run( Dynamic iso,::nape::geom::AABB bounds,::nape::geom::Vec2 granularity,hx::Null< int >  __o_quality,hx::Null< Float >  __o_simplification){
int quality = __o_quality.Default(2);
Float simplification = __o_simplification.Default(1.5);
	HX_STACK_PUSH("IsoBody::run","IsoBody.hx",30);
	HX_STACK_ARG(iso,"iso");
	HX_STACK_ARG(bounds,"bounds");
	HX_STACK_ARG(granularity,"granularity");
	HX_STACK_ARG(quality,"quality");
	HX_STACK_ARG(simplification,"simplification");
{
		HX_STACK_LINE(31)
		::nape::phys::Body body = ::nape::phys::Body_obj::__new(null(),null());		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(33)
		if (((granularity == null()))){
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ){
					HX_STACK_PUSH("*::closure","IsoBody.hx",33);
					{
						HX_STACK_LINE(33)
						{
						}
						HX_STACK_LINE(33)
						::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(33)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(33)
							ret = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(33)
							ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(33)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(33)
							ret->zpp_pool = null();
							HX_STACK_LINE(33)
							ret->zpp_disp = false;
							HX_STACK_LINE(33)
							if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(33)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(33)
						if (((ret->zpp_inner == null()))){
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_Vec2 Block( ){
									HX_STACK_PUSH("*::closure","IsoBody.hx",33);
									{
										HX_STACK_LINE(33)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(33)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(33)
										{
											HX_STACK_LINE(33)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(33)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
											}
											else{
												HX_STACK_LINE(33)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(33)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(33)
												ret1->next = null();
											}
											HX_STACK_LINE(33)
											ret1->weak = false;
										}
										HX_STACK_LINE(33)
										ret1->_immutable = immutable;
										HX_STACK_LINE(33)
										{
											HX_STACK_LINE(33)
											ret1->x = (int)8;
											HX_STACK_LINE(33)
											ret1->y = (int)8;
											HX_STACK_LINE(33)
											{
											}
											HX_STACK_LINE(33)
											{
											}
										}
										HX_STACK_LINE(33)
										return ret1;
									}
									return null();
								}
							};
							HX_STACK_LINE(33)
							ret->zpp_inner = _Function_4_1::Block();
							HX_STACK_LINE(33)
							ret->zpp_inner->outer = ret;
						}
						else{
							HX_STACK_LINE(33)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(33)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(33)
							{
								HX_STACK_LINE(33)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(33)
								if ((_this->_immutable)){
									HX_STACK_LINE(33)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(33)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(33)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(33)
							{
							}
							struct _Function_4_1{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","IsoBody.hx",33);
									{
										HX_STACK_LINE(33)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(33)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(33)
										{
											HX_STACK_LINE(33)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(33)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(33)
												_this->_validate();
											}
										}
										HX_STACK_LINE(33)
										return ret->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","IsoBody.hx",33);
									{
										HX_STACK_LINE(33)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(33)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(33)
										{
											HX_STACK_LINE(33)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(33)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(33)
												_this->_validate();
											}
										}
										HX_STACK_LINE(33)
										return ret->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(33)
							if ((!(((bool((_Function_4_1::Block(ret) == (int)8)) && bool((_Function_4_2::Block(ret) == (int)8))))))){
								HX_STACK_LINE(33)
								{
									HX_STACK_LINE(33)
									ret->zpp_inner->x = (int)8;
									HX_STACK_LINE(33)
									ret->zpp_inner->y = (int)8;
									HX_STACK_LINE(33)
									{
									}
									HX_STACK_LINE(33)
									{
									}
								}
								HX_STACK_LINE(33)
								{
									HX_STACK_LINE(33)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(33)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(33)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(33)
							ret;
						}
						HX_STACK_LINE(33)
						ret->zpp_inner->weak = true;
						HX_STACK_LINE(33)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(33)
			granularity = _Function_2_1::Block();
		}
		HX_STACK_LINE(34)
		::nape::geom::GeomPolyList polys = ::nape::geom::MarchingSquares_obj::run(iso,bounds,granularity,quality,null(),null(),null());		HX_STACK_VAR(polys,"polys");
		struct _Function_1_1{
			inline static ::nape::geom::GeomPolyIterator Block( ::nape::geom::GeomPolyList &polys){
				HX_STACK_PUSH("*::closure","IsoBody.hx",35);
				{
					HX_STACK_LINE(35)
					polys->zpp_inner->valmod();
					HX_STACK_LINE(35)
					return ::nape::geom::GeomPolyIterator_obj::get(polys);
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		for(::cpp::FastIterator_obj< ::nape::geom::GeomPoly > *__it = ::cpp::CreateFastIterator< ::nape::geom::GeomPoly >(_Function_1_1::Block(polys));  __it->hasNext(); ){
			::nape::geom::GeomPoly p = __it->next();
			{
				HX_STACK_LINE(36)
				::nape::geom::GeomPolyList qolys = p->convexDecomposition(true,null());		HX_STACK_VAR(qolys,"qolys");
				struct _Function_2_1{
					inline static ::nape::geom::GeomPolyIterator Block( ::nape::geom::GeomPolyList &qolys){
						HX_STACK_PUSH("*::closure","IsoBody.hx",39);
						{
							HX_STACK_LINE(39)
							qolys->zpp_inner->valmod();
							HX_STACK_LINE(39)
							return ::nape::geom::GeomPolyIterator_obj::get(qolys);
						}
						return null();
					}
				};
				HX_STACK_LINE(39)
				for(::cpp::FastIterator_obj< ::nape::geom::GeomPoly > *__it = ::cpp::CreateFastIterator< ::nape::geom::GeomPoly >(_Function_2_1::Block(qolys));  __it->hasNext(); ){
					::nape::geom::GeomPoly q = __it->next();
					{
						HX_STACK_LINE(40)
						{
							HX_STACK_LINE(40)
							::nape::shape::ShapeList _this = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
							::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(q,null(),null());		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(40)
							if ((_this->zpp_inner->reverse_flag)){
								HX_STACK_LINE(40)
								_this->push(obj);
							}
							else{
								HX_STACK_LINE(40)
								_this->unshift(obj);
							}
						}
						HX_STACK_LINE(43)
						q->dispose();
					}
;
				}
				HX_STACK_LINE(46)
				qolys->clear();
				HX_STACK_LINE(49)
				p->dispose();
			}
;
		}
		HX_STACK_LINE(52)
		polys->clear();
		struct _Function_1_2{
			inline static ::nape::geom::Vec2 Block( ::nape::phys::Body &body){
				HX_STACK_PUSH("*::closure","IsoBody.hx",56);
				{
					HX_STACK_LINE(56)
					if ((body->zpp_inner->world)){
						HX_STACK_LINE(56)
						hx::Throw ((HX_CSTRING("Error: Space::world has no ") + HX_CSTRING("localCOM")));
					}
					HX_STACK_LINE(56)
					if (((body->zpp_inner->wrap_localCOM == null()))){
						struct _Function_3_1{
							inline static ::nape::geom::Vec2 Block( ::nape::phys::Body &body){
								HX_STACK_PUSH("*::closure","IsoBody.hx",56);
								{
									HX_STACK_LINE(56)
									Float x = body->zpp_inner->localCOMx;		HX_STACK_VAR(x,"x");
									Float y = body->zpp_inner->localCOMy;		HX_STACK_VAR(y,"y");
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(56)
									if (((bool((x != x)) || bool((y != y))))){
										HX_STACK_LINE(56)
										hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
									}
									HX_STACK_LINE(56)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(56)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(56)
										ret = ::nape::geom::Vec2_obj::__new(null(),null());
									}
									else{
										HX_STACK_LINE(56)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(56)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(56)
										ret->zpp_pool = null();
										HX_STACK_LINE(56)
										ret->zpp_disp = false;
										HX_STACK_LINE(56)
										if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
											HX_STACK_LINE(56)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
										}
									}
									HX_STACK_LINE(56)
									if (((ret->zpp_inner == null()))){
										struct _Function_5_1{
											inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
												HX_STACK_PUSH("*::closure","IsoBody.hx",56);
												{
													HX_STACK_LINE(56)
													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
													HX_STACK_LINE(56)
													::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(56)
													{
														HX_STACK_LINE(56)
														if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
															HX_STACK_LINE(56)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
														}
														else{
															HX_STACK_LINE(56)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
															HX_STACK_LINE(56)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(56)
															ret1->next = null();
														}
														HX_STACK_LINE(56)
														ret1->weak = false;
													}
													HX_STACK_LINE(56)
													ret1->_immutable = immutable;
													HX_STACK_LINE(56)
													{
														HX_STACK_LINE(56)
														ret1->x = x;
														HX_STACK_LINE(56)
														ret1->y = y;
														HX_STACK_LINE(56)
														{
														}
														HX_STACK_LINE(56)
														{
														}
													}
													HX_STACK_LINE(56)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(56)
										ret->zpp_inner = _Function_5_1::Block(x,y);
										HX_STACK_LINE(56)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(56)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(56)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(56)
										{
											HX_STACK_LINE(56)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(56)
											if ((_this->_immutable)){
												HX_STACK_LINE(56)
												hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(56)
											if (((_this->_isimmutable_dyn() != null()))){
												HX_STACK_LINE(56)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(56)
										if (((bool((x != x)) || bool((y != y))))){
											HX_STACK_LINE(56)
											hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
										}
										struct _Function_5_1{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_PUSH("*::closure","IsoBody.hx",56);
												{
													HX_STACK_LINE(56)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(56)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(56)
													{
														HX_STACK_LINE(56)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(56)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(56)
															_this->_validate();
														}
													}
													HX_STACK_LINE(56)
													return ret->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_5_2{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_PUSH("*::closure","IsoBody.hx",56);
												{
													HX_STACK_LINE(56)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(56)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(56)
													{
														HX_STACK_LINE(56)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(56)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(56)
															_this->_validate();
														}
													}
													HX_STACK_LINE(56)
													return ret->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(56)
										if ((!(((bool((_Function_5_1::Block(ret) == x)) && bool((_Function_5_2::Block(ret) == y))))))){
											HX_STACK_LINE(56)
											{
												HX_STACK_LINE(56)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(56)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(56)
												{
												}
												HX_STACK_LINE(56)
												{
												}
											}
											HX_STACK_LINE(56)
											{
												HX_STACK_LINE(56)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(56)
												if (((_this->_invalidate_dyn() != null()))){
													HX_STACK_LINE(56)
													_this->_invalidate(_this);
												}
											}
										}
										HX_STACK_LINE(56)
										ret;
									}
									HX_STACK_LINE(56)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(56)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(56)
						body->zpp_inner->wrap_localCOM = _Function_3_1::Block(body);
						HX_STACK_LINE(56)
						body->zpp_inner->wrap_localCOM->zpp_inner->_inuse = true;
						HX_STACK_LINE(56)
						body->zpp_inner->wrap_localCOM->zpp_inner->_immutable = true;
						HX_STACK_LINE(56)
						body->zpp_inner->wrap_localCOM->zpp_inner->_validate = body->zpp_inner->getlocalCOM_dyn();
					}
					HX_STACK_LINE(56)
					return body->zpp_inner->wrap_localCOM;
				}
				return null();
			}
		};
		HX_STACK_LINE(56)
		::nape::geom::Vec2 pivot = (_Function_1_2::Block(body))->mul((int)-1,null());		HX_STACK_VAR(pivot,"pivot");
		HX_STACK_LINE(57)
		body->translateShapes(pivot);
		struct _Function_1_3{
			inline static Dynamic Block( ::nape::phys::Body &body){
				HX_STACK_PUSH("*::closure","IsoBody.hx",59);
				{
					HX_STACK_LINE(59)
					if (((body->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","IsoBody.hx",59);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(59)
						body->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(59)
					return body->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(59)
		(_Function_1_3::Block(body))->__FieldRef(HX_CSTRING("graphicOffset")) = pivot;
		HX_STACK_LINE(60)
		return body;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(IsoBody_obj,run,return )


IsoBody_obj::IsoBody_obj()
{
}

void IsoBody_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IsoBody);
	HX_MARK_END_CLASS();
}

void IsoBody_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic IsoBody_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IsoBody_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void IsoBody_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("run"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IsoBody_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IsoBody_obj::__mClass,"__mClass");
};

Class IsoBody_obj::__mClass;

void IsoBody_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("IsoBody"), hx::TCanCast< IsoBody_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IsoBody_obj::__boot()
{
}

