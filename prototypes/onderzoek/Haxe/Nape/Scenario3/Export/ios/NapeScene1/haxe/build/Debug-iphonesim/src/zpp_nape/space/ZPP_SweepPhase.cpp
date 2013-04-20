#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultList
#include <nape/geom/RayResultList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Collide
#include <zpp_nape/geom/ZPP_Collide.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Ray
#include <zpp_nape/geom/ZPP_Ray.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepData
#include <zpp_nape/space/ZPP_SweepData.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepPhase
#include <zpp_nape/space/ZPP_SweepPhase.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_SweepPhase_obj::__construct(::zpp_nape::space::ZPP_Space space)
{
HX_STACK_PUSH("ZPP_SweepPhase::new","zpp_nape/space/SweepPhase.hx",221);
{
	HX_STACK_LINE(498)
	this->failed = null();
	HX_STACK_LINE(222)
	this->list = null();
	HX_STACK_LINE(224)
	this->space = space;
	HX_STACK_LINE(225)
	this->is_sweep = true;
	HX_STACK_LINE(226)
	this->sweep = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

ZPP_SweepPhase_obj::~ZPP_SweepPhase_obj() { }

Dynamic ZPP_SweepPhase_obj::__CreateEmpty() { return  new ZPP_SweepPhase_obj; }
hx::ObjectPtr< ZPP_SweepPhase_obj > ZPP_SweepPhase_obj::__new(::zpp_nape::space::ZPP_Space space)
{  hx::ObjectPtr< ZPP_SweepPhase_obj > result = new ZPP_SweepPhase_obj();
	result->__construct(space);
	return result;}

Dynamic ZPP_SweepPhase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SweepPhase_obj > result = new ZPP_SweepPhase_obj();
	result->__construct(inArgs[0]);
	return result;}

::nape::geom::RayResultList ZPP_SweepPhase_obj::rayMultiCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::geom::RayResultList output){
	HX_STACK_PUSH("ZPP_SweepPhase::rayMultiCast","zpp_nape/space/SweepPhase.hx",745);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ray,"ray");
	HX_STACK_ARG(inner,"inner");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(746)
	this->sync_broadphase();
	HX_STACK_LINE(747)
	ray->validate_dir();
	HX_STACK_LINE(748)
	::zpp_nape::geom::ZPP_AABB rayab = ray->rayAABB();		HX_STACK_VAR(rayab,"rayab");
	HX_STACK_LINE(749)
	::nape::geom::RayResultList ret = (  (((output == null()))) ? ::nape::geom::RayResultList(::nape::geom::RayResultList_obj::__new()) : ::nape::geom::RayResultList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(750)
	if (((ray->dirx == (int)0))){
		HX_STACK_LINE(751)
		::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(752)
		while(((bool((a != null())) && bool((a->aabb->minx <= rayab->minx))))){
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &rayab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",753);
					{
						HX_STACK_LINE(753)
						::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(753)
						return (bool((bool((bool((rayab->miny <= _this->maxy)) && bool((_this->miny <= rayab->maxy)))) && bool((rayab->minx <= _this->maxx)))) && bool((_this->minx <= rayab->maxx)));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
					HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",753);
					{
						HX_STACK_LINE(753)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = a->shape->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(753)
						return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(753)
			if (((bool(_Function_3_1::Block(a,rayab)) && bool(((bool((filter == null())) || bool(_Function_3_2::Block(a,filter)))))))){
				HX_STACK_LINE(754)
				Float t = ray->aabbsect(a->aabb);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(755)
				if (((t >= (int)0))){
					HX_STACK_LINE(755)
					if (((a->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
						HX_STACK_LINE(756)
						ray->circlesect2(a->shape->circle,inner,ret);
					}
					else{
						HX_STACK_LINE(757)
						ray->polysect2(a->shape->polygon,inner,ret);
					}
				}
			}
			HX_STACK_LINE(760)
			a = a->next;
		}
	}
	else{
		HX_STACK_LINE(763)
		if (((ray->dirx < (int)0))){
			HX_STACK_LINE(764)
			::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(765)
			::zpp_nape::space::ZPP_SweepData b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(766)
			while(((bool((a != null())) && bool((a->aabb->minx <= rayab->maxx))))){
				HX_STACK_LINE(767)
				b = a;
				HX_STACK_LINE(768)
				a = a->next;
			}
			HX_STACK_LINE(770)
			a = b;
			HX_STACK_LINE(771)
			while(((a != null()))){
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &rayab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",772);
						{
							HX_STACK_LINE(772)
							::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(772)
							return (bool((bool((bool((rayab->miny <= _this->maxy)) && bool((_this->miny <= rayab->maxy)))) && bool((rayab->minx <= _this->maxx)))) && bool((_this->minx <= rayab->maxx)));
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
						HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",772);
						{
							HX_STACK_LINE(772)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = a->shape->filter;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(772)
							return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
						}
						return null();
					}
				};
				HX_STACK_LINE(772)
				if (((bool(_Function_4_1::Block(a,rayab)) && bool(((bool((filter == null())) || bool(_Function_4_2::Block(a,filter)))))))){
					HX_STACK_LINE(773)
					Float t = ray->aabbsect(a->aabb);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(774)
					if (((t >= (int)0))){
						HX_STACK_LINE(774)
						if (((a->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
							HX_STACK_LINE(775)
							ray->circlesect2(a->shape->circle,inner,ret);
						}
						else{
							HX_STACK_LINE(776)
							ray->polysect2(a->shape->polygon,inner,ret);
						}
					}
				}
				HX_STACK_LINE(779)
				a = a->prev;
			}
		}
		else{
			HX_STACK_LINE(783)
			::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(784)
			while(((bool((a != null())) && bool((a->aabb->minx <= rayab->maxx))))){
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &rayab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",785);
						{
							HX_STACK_LINE(785)
							::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(785)
							return (bool((bool((bool((rayab->miny <= _this->maxy)) && bool((_this->miny <= rayab->maxy)))) && bool((rayab->minx <= _this->maxx)))) && bool((_this->minx <= rayab->maxx)));
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
						HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",785);
						{
							HX_STACK_LINE(785)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = a->shape->filter;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(785)
							return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
						}
						return null();
					}
				};
				HX_STACK_LINE(785)
				if (((bool(_Function_4_1::Block(a,rayab)) && bool(((bool((filter == null())) || bool(_Function_4_2::Block(a,filter)))))))){
					HX_STACK_LINE(786)
					Float t = ray->aabbsect(a->aabb);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(787)
					if (((t >= (int)0))){
						HX_STACK_LINE(787)
						if (((a->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
							HX_STACK_LINE(788)
							ray->circlesect2(a->shape->circle,inner,ret);
						}
						else{
							HX_STACK_LINE(789)
							ray->polysect2(a->shape->polygon,inner,ret);
						}
					}
				}
				HX_STACK_LINE(792)
				a = a->next;
			}
		}
	}
	HX_STACK_LINE(795)
	{
		HX_STACK_LINE(796)
		::zpp_nape::geom::ZPP_AABB o = rayab;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(797)
		{
		}
		HX_STACK_LINE(805)
		{
			HX_STACK_LINE(805)
			if (((o->outer != null()))){
				HX_STACK_LINE(805)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(805)
				o->outer = null();
			}
			HX_STACK_LINE(805)
			o->wrap_min = o->wrap_max = null();
			HX_STACK_LINE(805)
			o->_invalidate = null();
			HX_STACK_LINE(805)
			o->_validate = null();
		}
		HX_STACK_LINE(806)
		o->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
		HX_STACK_LINE(807)
		::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o;
	}
	HX_STACK_LINE(812)
	return ret;
}


::nape::geom::RayResult ZPP_SweepPhase_obj::rayCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter){
	HX_STACK_PUSH("ZPP_SweepPhase::rayCast","zpp_nape/space/SweepPhase.hx",657);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ray,"ray");
	HX_STACK_ARG(inner,"inner");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_LINE(658)
	this->sync_broadphase();
	HX_STACK_LINE(659)
	ray->validate_dir();
	HX_STACK_LINE(660)
	::zpp_nape::geom::ZPP_AABB rayab = ray->rayAABB();		HX_STACK_VAR(rayab,"rayab");
	HX_STACK_LINE(661)
	Float mint = ray->maxdist;		HX_STACK_VAR(mint,"mint");
	HX_STACK_LINE(662)
	::nape::geom::RayResult minres = null();		HX_STACK_VAR(minres,"minres");
	HX_STACK_LINE(663)
	if (((ray->dirx == (int)0))){
		HX_STACK_LINE(664)
		::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(665)
		while(((bool((a != null())) && bool((a->aabb->minx <= rayab->minx))))){
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &rayab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",666);
					{
						HX_STACK_LINE(666)
						::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(666)
						return (bool((bool((bool((rayab->miny <= _this->maxy)) && bool((_this->miny <= rayab->maxy)))) && bool((rayab->minx <= _this->maxx)))) && bool((_this->minx <= rayab->maxx)));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
					HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",666);
					{
						HX_STACK_LINE(666)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = a->shape->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(666)
						return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(666)
			if (((bool(_Function_3_1::Block(a,rayab)) && bool(((bool((filter == null())) || bool(_Function_3_2::Block(a,filter)))))))){
				HX_STACK_LINE(667)
				Float t = ray->aabbsect(a->aabb);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(668)
				if (((bool((t >= (int)0)) && bool((t < mint))))){
					HX_STACK_LINE(669)
					::nape::geom::RayResult result = (  (((a->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))) ? ::nape::geom::RayResult(ray->circlesect(a->shape->circle,inner,mint)) : ::nape::geom::RayResult(ray->polysect(a->shape->polygon,inner,mint)) );		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(670)
					if (((result != null()))){
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::RayResult &result){
								HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",671);
								{
									HX_STACK_LINE(671)
									if (((result->zpp_inner->next != null()))){
										HX_STACK_LINE(671)
										hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
									}
									HX_STACK_LINE(671)
									return result->zpp_inner->toiDistance;
								}
								return null();
							}
						};
						HX_STACK_LINE(671)
						mint = _Function_6_1::Block(result);
						HX_STACK_LINE(672)
						if (((minres != null()))){
							HX_STACK_LINE(673)
							if (((minres->zpp_inner->next != null()))){
								HX_STACK_LINE(673)
								hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
							}
							HX_STACK_LINE(673)
							minres->zpp_inner->free();
						}
						HX_STACK_LINE(675)
						minres = result;
					}
				}
			}
			HX_STACK_LINE(679)
			a = a->next;
		}
	}
	else{
		HX_STACK_LINE(682)
		if (((ray->dirx < (int)0))){
			HX_STACK_LINE(683)
			::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(684)
			::zpp_nape::space::ZPP_SweepData b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(685)
			while(((bool((a != null())) && bool((a->aabb->minx <= rayab->maxx))))){
				HX_STACK_LINE(686)
				b = a;
				HX_STACK_LINE(687)
				a = a->next;
			}
			HX_STACK_LINE(689)
			a = b;
			HX_STACK_LINE(690)
			while(((a != null()))){
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &rayab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",691);
						{
							HX_STACK_LINE(691)
							::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(691)
							return (bool((bool((bool((rayab->miny <= _this->maxy)) && bool((_this->miny <= rayab->maxy)))) && bool((rayab->minx <= _this->maxx)))) && bool((_this->minx <= rayab->maxx)));
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
						HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",691);
						{
							HX_STACK_LINE(691)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = a->shape->filter;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(691)
							return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
						}
						return null();
					}
				};
				HX_STACK_LINE(691)
				if (((bool(_Function_4_1::Block(a,rayab)) && bool(((bool((filter == null())) || bool(_Function_4_2::Block(a,filter)))))))){
					HX_STACK_LINE(692)
					Float t = ray->aabbsect(a->aabb);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(693)
					if (((bool((t >= (int)0)) && bool((t < mint))))){
						HX_STACK_LINE(694)
						::nape::geom::RayResult result = (  (((a->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))) ? ::nape::geom::RayResult(ray->circlesect(a->shape->circle,inner,mint)) : ::nape::geom::RayResult(ray->polysect(a->shape->polygon,inner,mint)) );		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(695)
						if (((result != null()))){
							struct _Function_7_1{
								inline static Float Block( ::nape::geom::RayResult &result){
									HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",696);
									{
										HX_STACK_LINE(696)
										if (((result->zpp_inner->next != null()))){
											HX_STACK_LINE(696)
											hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
										}
										HX_STACK_LINE(696)
										return result->zpp_inner->toiDistance;
									}
									return null();
								}
							};
							HX_STACK_LINE(696)
							mint = _Function_7_1::Block(result);
							HX_STACK_LINE(697)
							if (((minres != null()))){
								HX_STACK_LINE(698)
								if (((minres->zpp_inner->next != null()))){
									HX_STACK_LINE(698)
									hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
								}
								HX_STACK_LINE(698)
								minres->zpp_inner->free();
							}
							HX_STACK_LINE(700)
							minres = result;
						}
					}
				}
				HX_STACK_LINE(704)
				a = a->prev;
			}
		}
		else{
			HX_STACK_LINE(708)
			::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(709)
			while(((bool((bool((a != null())) && bool((a->aabb->minx <= rayab->maxx)))) && bool((a->aabb->minx < (ray->originx + (ray->dirx * mint))))))){
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &rayab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",710);
						{
							HX_STACK_LINE(710)
							::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(710)
							return (bool((bool((bool((rayab->miny <= _this->maxy)) && bool((_this->miny <= rayab->maxy)))) && bool((rayab->minx <= _this->maxx)))) && bool((_this->minx <= rayab->maxx)));
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
						HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",710);
						{
							HX_STACK_LINE(710)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = a->shape->filter;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(710)
							return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
						}
						return null();
					}
				};
				HX_STACK_LINE(710)
				if (((bool(_Function_4_1::Block(a,rayab)) && bool(((bool((filter == null())) || bool(_Function_4_2::Block(a,filter)))))))){
					HX_STACK_LINE(711)
					Float t = ray->aabbsect(a->aabb);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(712)
					if (((bool((t >= (int)0)) && bool((t < mint))))){
						HX_STACK_LINE(713)
						::nape::geom::RayResult result = (  (((a->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))) ? ::nape::geom::RayResult(ray->circlesect(a->shape->circle,inner,mint)) : ::nape::geom::RayResult(ray->polysect(a->shape->polygon,inner,mint)) );		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(714)
						if (((result != null()))){
							struct _Function_7_1{
								inline static Float Block( ::nape::geom::RayResult &result){
									HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",715);
									{
										HX_STACK_LINE(715)
										if (((result->zpp_inner->next != null()))){
											HX_STACK_LINE(715)
											hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
										}
										HX_STACK_LINE(715)
										return result->zpp_inner->toiDistance;
									}
									return null();
								}
							};
							HX_STACK_LINE(715)
							mint = _Function_7_1::Block(result);
							HX_STACK_LINE(716)
							if (((minres != null()))){
								HX_STACK_LINE(717)
								if (((minres->zpp_inner->next != null()))){
									HX_STACK_LINE(717)
									hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
								}
								HX_STACK_LINE(717)
								minres->zpp_inner->free();
							}
							HX_STACK_LINE(719)
							minres = result;
						}
					}
				}
				HX_STACK_LINE(723)
				a = a->next;
			}
		}
	}
	HX_STACK_LINE(726)
	{
		HX_STACK_LINE(727)
		::zpp_nape::geom::ZPP_AABB o = rayab;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(728)
		{
		}
		HX_STACK_LINE(736)
		{
			HX_STACK_LINE(736)
			if (((o->outer != null()))){
				HX_STACK_LINE(736)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(736)
				o->outer = null();
			}
			HX_STACK_LINE(736)
			o->wrap_min = o->wrap_max = null();
			HX_STACK_LINE(736)
			o->_invalidate = null();
			HX_STACK_LINE(736)
			o->_validate = null();
		}
		HX_STACK_LINE(737)
		o->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
		HX_STACK_LINE(738)
		::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o;
	}
	HX_STACK_LINE(743)
	return minres;
}


::nape::phys::BodyList ZPP_SweepPhase_obj::bodiesInShape( ::zpp_nape::shape::ZPP_Shape shape,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_SweepPhase::bodiesInShape","zpp_nape/space/SweepPhase.hx",624);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(625)
	this->sync_broadphase();
	HX_STACK_LINE(626)
	this->validateShape(shape);
	HX_STACK_LINE(627)
	::zpp_nape::geom::ZPP_AABB ab = shape->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(628)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(629)
	if (((this->failed == null()))){
		HX_STACK_LINE(629)
		this->failed = ::nape::phys::BodyList_obj::__new();
	}
	HX_STACK_LINE(630)
	::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(631)
	while(((bool((a != null())) && bool((a->aabb->maxx < ab->minx))))){
		HX_STACK_LINE(631)
		a = a->next;
	}
	HX_STACK_LINE(632)
	while(((bool((a != null())) && bool((a->aabb->minx <= ab->maxx))))){
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &ab){
				HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",633);
				{
					HX_STACK_LINE(633)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(633)
					return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
				}
				return null();
			}
		};
		HX_STACK_LINE(633)
		if ((_Function_2_1::Block(a,ab))){
			HX_STACK_LINE(634)
			::zpp_nape::shape::ZPP_Shape shape2 = a->shape;		HX_STACK_VAR(shape2,"shape2");
			HX_STACK_LINE(635)
			::nape::phys::Body body = shape2->body->outer;		HX_STACK_VAR(body,"body");
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape2,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
					HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",636);
					{
						HX_STACK_LINE(636)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape2->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(636)
						return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(636)
			if (((bool((filter == null())) || bool(_Function_3_1::Block(shape2,filter))))){
				HX_STACK_LINE(636)
				if ((containment)){
					HX_STACK_LINE(637)
					if ((!(this->failed->has(body)))){
						HX_STACK_LINE(639)
						bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(shape,shape2);		HX_STACK_VAR(col,"col");
						HX_STACK_LINE(640)
						if (((bool(!(ret->has(body))) && bool(col)))){
							HX_STACK_LINE(640)
							ret->push(body);
						}
						else{
							HX_STACK_LINE(641)
							if ((!(col))){
								HX_STACK_LINE(642)
								ret->remove(body);
								HX_STACK_LINE(643)
								this->failed->push(body);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(647)
					if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(shape,shape2))))){
						HX_STACK_LINE(647)
						ret->push(body);
					}
				}
			}
		}
		HX_STACK_LINE(652)
		a = a->next;
	}
	HX_STACK_LINE(654)
	this->failed->clear();
	HX_STACK_LINE(655)
	return ret;
}


::nape::shape::ShapeList ZPP_SweepPhase_obj::shapesInShape( ::zpp_nape::shape::ZPP_Shape shape,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("ZPP_SweepPhase::shapesInShape","zpp_nape/space/SweepPhase.hx",603);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(604)
	this->sync_broadphase();
	HX_STACK_LINE(605)
	this->validateShape(shape);
	HX_STACK_LINE(606)
	::zpp_nape::geom::ZPP_AABB ab = shape->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(607)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(608)
	::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(609)
	while(((bool((a != null())) && bool((a->aabb->maxx < ab->minx))))){
		HX_STACK_LINE(609)
		a = a->next;
	}
	HX_STACK_LINE(610)
	while(((bool((a != null())) && bool((a->aabb->minx <= ab->maxx))))){
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &ab){
				HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",611);
				{
					HX_STACK_LINE(611)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(611)
					return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
				}
				return null();
			}
		};
		HX_STACK_LINE(611)
		if ((_Function_2_1::Block(a,ab))){
			HX_STACK_LINE(612)
			::zpp_nape::shape::ZPP_Shape shape2 = a->shape;		HX_STACK_VAR(shape2,"shape2");
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape2,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
					HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",613);
					{
						HX_STACK_LINE(613)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape2->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(613)
						return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(613)
			if (((bool((filter == null())) || bool(_Function_3_1::Block(shape2,filter))))){
				HX_STACK_LINE(613)
				if ((containment)){
					HX_STACK_LINE(614)
					if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(shape,shape2))){
						HX_STACK_LINE(615)
						ret->push(shape2->outer);
					}
				}
				else{
					HX_STACK_LINE(617)
					if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(shape2,shape))){
						HX_STACK_LINE(617)
						ret->push(shape2->outer);
					}
				}
			}
		}
		HX_STACK_LINE(620)
		a = a->next;
	}
	HX_STACK_LINE(622)
	return ret;
}


::nape::phys::BodyList ZPP_SweepPhase_obj::bodiesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_SweepPhase::bodiesInCircle","zpp_nape/space/SweepPhase.hx",570);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(571)
	this->sync_broadphase();
	HX_STACK_LINE(572)
	this->updateCircShape(x,y,r);
	HX_STACK_LINE(573)
	::zpp_nape::geom::ZPP_AABB ab = this->circShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(574)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(575)
	if (((this->failed == null()))){
		HX_STACK_LINE(575)
		this->failed = ::nape::phys::BodyList_obj::__new();
	}
	HX_STACK_LINE(576)
	::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(577)
	while(((bool((a != null())) && bool((a->aabb->maxx < ab->minx))))){
		HX_STACK_LINE(577)
		a = a->next;
	}
	HX_STACK_LINE(578)
	while(((bool((a != null())) && bool((a->aabb->minx <= ab->maxx))))){
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &ab){
				HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",579);
				{
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(579)
					return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
				}
				return null();
			}
		};
		HX_STACK_LINE(579)
		if ((_Function_2_1::Block(a,ab))){
			HX_STACK_LINE(580)
			::zpp_nape::shape::ZPP_Shape shape = a->shape;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(581)
			::nape::phys::Body body = shape->body->outer;		HX_STACK_VAR(body,"body");
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
					HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",582);
					{
						HX_STACK_LINE(582)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(582)
						return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(582)
			if (((bool((filter == null())) || bool(_Function_3_1::Block(shape,filter))))){
				HX_STACK_LINE(582)
				if ((containment)){
					HX_STACK_LINE(583)
					if ((!(this->failed->has(body)))){
						HX_STACK_LINE(585)
						bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(this->circShape->zpp_inner,shape);		HX_STACK_VAR(col,"col");
						HX_STACK_LINE(586)
						if (((bool(!(ret->has(body))) && bool(col)))){
							HX_STACK_LINE(586)
							ret->push(body);
						}
						else{
							HX_STACK_LINE(587)
							if ((!(col))){
								HX_STACK_LINE(588)
								ret->remove(body);
								HX_STACK_LINE(589)
								this->failed->push(body);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(593)
					if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(shape,this->circShape->zpp_inner))))){
						HX_STACK_LINE(593)
						ret->push(body);
					}
				}
			}
		}
		HX_STACK_LINE(598)
		a = a->next;
	}
	HX_STACK_LINE(600)
	this->failed->clear();
	HX_STACK_LINE(601)
	return ret;
}


::nape::shape::ShapeList ZPP_SweepPhase_obj::shapesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("ZPP_SweepPhase::shapesInCircle","zpp_nape/space/SweepPhase.hx",549);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(550)
	this->sync_broadphase();
	HX_STACK_LINE(551)
	this->updateCircShape(x,y,r);
	HX_STACK_LINE(552)
	::zpp_nape::geom::ZPP_AABB ab = this->circShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(553)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(554)
	::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(555)
	while(((bool((a != null())) && bool((a->aabb->maxx < ab->minx))))){
		HX_STACK_LINE(555)
		a = a->next;
	}
	HX_STACK_LINE(556)
	while(((bool((a != null())) && bool((a->aabb->minx <= ab->maxx))))){
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &ab){
				HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",557);
				{
					HX_STACK_LINE(557)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(557)
					return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
				}
				return null();
			}
		};
		HX_STACK_LINE(557)
		if ((_Function_2_1::Block(a,ab))){
			HX_STACK_LINE(558)
			::zpp_nape::shape::ZPP_Shape shape = a->shape;		HX_STACK_VAR(shape,"shape");
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
					HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",559);
					{
						HX_STACK_LINE(559)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(559)
						return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(559)
			if (((bool((filter == null())) || bool(_Function_3_1::Block(shape,filter))))){
				HX_STACK_LINE(559)
				if ((containment)){
					HX_STACK_LINE(560)
					if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(this->circShape->zpp_inner,shape))){
						HX_STACK_LINE(561)
						ret->push(shape->outer);
					}
				}
				else{
					HX_STACK_LINE(563)
					if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(shape,this->circShape->zpp_inner))){
						HX_STACK_LINE(563)
						ret->push(shape->outer);
					}
				}
			}
		}
		HX_STACK_LINE(566)
		a = a->next;
	}
	HX_STACK_LINE(568)
	return ret;
}


::nape::phys::BodyList ZPP_SweepPhase_obj::bodiesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_SweepPhase::bodiesInAABB","zpp_nape/space/SweepPhase.hx",499);
	HX_STACK_THIS(this);
	HX_STACK_ARG(aabb,"aabb");
	HX_STACK_ARG(strict,"strict");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(500)
	this->sync_broadphase();
	HX_STACK_LINE(501)
	this->updateAABBShape(aabb);
	HX_STACK_LINE(502)
	::zpp_nape::geom::ZPP_AABB ab = this->aabbShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(503)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(504)
	if (((this->failed == null()))){
		HX_STACK_LINE(504)
		this->failed = ::nape::phys::BodyList_obj::__new();
	}
	HX_STACK_LINE(505)
	::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(506)
	while(((bool((a != null())) && bool((a->aabb->maxx < ab->minx))))){
		HX_STACK_LINE(506)
		a = a->next;
	}
	HX_STACK_LINE(507)
	while(((bool((a != null())) && bool((a->aabb->minx <= ab->maxx))))){
		HX_STACK_LINE(508)
		::zpp_nape::shape::ZPP_Shape shape = a->shape;		HX_STACK_VAR(shape,"shape");
		HX_STACK_LINE(509)
		::nape::phys::Body body = shape->body->outer;		HX_STACK_VAR(body,"body");
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &ab){
				HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",510);
				{
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(510)
					return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
				}
				return null();
			}
		};
		HX_STACK_LINE(510)
		if ((_Function_2_1::Block(a,ab))){
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
					HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",511);
					{
						HX_STACK_LINE(511)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(511)
						return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(510)
			if (((bool((filter == null())) || bool(_Function_3_1::Block(shape,filter))))){
				HX_STACK_LINE(511)
				if ((strict)){
					HX_STACK_LINE(512)
					if ((containment)){
						HX_STACK_LINE(513)
						if ((!(this->failed->has(body)))){
							HX_STACK_LINE(515)
							bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(this->aabbShape->zpp_inner,shape);		HX_STACK_VAR(col,"col");
							HX_STACK_LINE(516)
							if (((bool(!(ret->has(body))) && bool(col)))){
								HX_STACK_LINE(516)
								ret->push(body);
							}
							else{
								HX_STACK_LINE(517)
								if ((!(col))){
									HX_STACK_LINE(518)
									ret->remove(body);
									HX_STACK_LINE(519)
									this->failed->push(body);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(523)
						if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(shape,this->aabbShape->zpp_inner))))){
							HX_STACK_LINE(523)
							ret->push(body);
						}
					}
				}
				else{
					HX_STACK_LINE(527)
					if ((containment)){
						HX_STACK_LINE(528)
						if ((!(this->failed->has(body)))){
							struct _Function_7_1{
								inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::geom::ZPP_AABB &ab){
									HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",530);
									{
										HX_STACK_LINE(530)
										::zpp_nape::geom::ZPP_AABB x = shape->aabb;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(530)
										return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
									}
									return null();
								}
							};
							HX_STACK_LINE(530)
							bool col = _Function_7_1::Block(shape,ab);		HX_STACK_VAR(col,"col");
							HX_STACK_LINE(531)
							if (((bool(!(ret->has(body))) && bool(col)))){
								HX_STACK_LINE(531)
								ret->push(body);
							}
							else{
								HX_STACK_LINE(532)
								if ((!(col))){
									HX_STACK_LINE(533)
									ret->remove(body);
									HX_STACK_LINE(534)
									this->failed->push(body);
								}
							}
						}
					}
					else{
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::geom::ZPP_AABB &ab){
								HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",538);
								{
									HX_STACK_LINE(538)
									::zpp_nape::geom::ZPP_AABB x = shape->aabb;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(538)
									return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
								}
								return null();
							}
						};
						HX_STACK_LINE(538)
						if (((bool(!(ret->has(body))) && bool(_Function_6_1::Block(shape,ab))))){
							HX_STACK_LINE(538)
							ret->push(body);
						}
					}
				}
			}
		}
		HX_STACK_LINE(544)
		a = a->next;
	}
	HX_STACK_LINE(546)
	this->failed->clear();
	HX_STACK_LINE(547)
	return ret;
}


::nape::shape::ShapeList ZPP_SweepPhase_obj::shapesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("ZPP_SweepPhase::shapesInAABB","zpp_nape/space/SweepPhase.hx",471);
	HX_STACK_THIS(this);
	HX_STACK_ARG(aabb,"aabb");
	HX_STACK_ARG(strict,"strict");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(472)
	this->sync_broadphase();
	HX_STACK_LINE(473)
	this->updateAABBShape(aabb);
	HX_STACK_LINE(474)
	::zpp_nape::geom::ZPP_AABB ab = this->aabbShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(475)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(476)
	::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(477)
	while(((bool((a != null())) && bool((a->aabb->maxx < ab->minx))))){
		HX_STACK_LINE(477)
		a = a->next;
	}
	HX_STACK_LINE(478)
	while(((bool((a != null())) && bool((a->aabb->minx <= ab->maxx))))){
		HX_STACK_LINE(479)
		::zpp_nape::shape::ZPP_Shape shape = a->shape;		HX_STACK_VAR(shape,"shape");
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
				HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",480);
				{
					HX_STACK_LINE(480)
					::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(480)
					return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
				}
				return null();
			}
		};
		HX_STACK_LINE(480)
		if (((bool((filter == null())) || bool(_Function_2_1::Block(shape,filter))))){
			HX_STACK_LINE(480)
			if ((strict)){
				HX_STACK_LINE(481)
				if ((containment)){
					HX_STACK_LINE(482)
					if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(this->aabbShape->zpp_inner,shape))){
						HX_STACK_LINE(483)
						ret->push(shape->outer);
					}
				}
				else{
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &ab){
							HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",486);
							{
								HX_STACK_LINE(486)
								::zpp_nape::geom::ZPP_AABB x = a->aabb;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(486)
								return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
							}
							return null();
						}
					};
					HX_STACK_LINE(485)
					if ((_Function_5_1::Block(a,ab))){
						HX_STACK_LINE(486)
						ret->push(shape->outer);
					}
					else{
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &ab){
								HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",487);
								{
									HX_STACK_LINE(487)
									::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(487)
									return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
								}
								return null();
							}
						};
						HX_STACK_LINE(487)
						if ((_Function_6_1::Block(a,ab))){
							HX_STACK_LINE(487)
							if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(shape,this->aabbShape->zpp_inner))){
								HX_STACK_LINE(488)
								ret->push(shape->outer);
							}
						}
					}
				}
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &ab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",492);
						{
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_AABB x = a->aabb;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(492)
							return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static bool Block( ::zpp_nape::space::ZPP_SweepData &a,::zpp_nape::geom::ZPP_AABB &ab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",492);
						{
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(492)
							return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
						}
						return null();
					}
				};
				HX_STACK_LINE(492)
				if (((  ((containment)) ? bool(_Function_4_1::Block(a,ab)) : bool(_Function_4_2::Block(a,ab)) ))){
					HX_STACK_LINE(492)
					ret->push(shape->outer);
				}
			}
		}
		HX_STACK_LINE(494)
		a = a->next;
	}
	HX_STACK_LINE(496)
	return ret;
}


::nape::phys::BodyList ZPP_SweepPhase_obj::bodiesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_SweepPhase::bodiesUnderPoint","zpp_nape/space/SweepPhase.hx",429);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(430)
	this->sync_broadphase();
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
			HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",431);
			{
				HX_STACK_LINE(431)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(431)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(431)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(431)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
						HX_STACK_LINE(431)
						ret->next = null();
					}
					HX_STACK_LINE(431)
					ret->weak = false;
				}
				HX_STACK_LINE(431)
				ret->_immutable = immutable;
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					ret->x = x;
					HX_STACK_LINE(431)
					ret->y = y;
					HX_STACK_LINE(431)
					{
					}
					HX_STACK_LINE(431)
					{
					}
				}
				HX_STACK_LINE(431)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(431)
	::zpp_nape::geom::ZPP_Vec2 v = _Function_1_1::Block(x,y);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(432)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(433)
	::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(434)
	while(((bool((a != null())) && bool((a->aabb->minx > x))))){
		HX_STACK_LINE(434)
		a = a->next;
	}
	HX_STACK_LINE(435)
	while(((bool((a != null())) && bool((a->aabb->minx <= x))))){
		HX_STACK_LINE(436)
		if (((bool((bool((a->aabb->maxx >= x)) && bool((a->aabb->miny <= y)))) && bool((a->aabb->maxy >= y))))){
			HX_STACK_LINE(437)
			::zpp_nape::shape::ZPP_Shape shape = a->shape;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(438)
			::nape::phys::Body body = shape->body->outer;		HX_STACK_VAR(body,"body");
			HX_STACK_LINE(439)
			if ((!(ret->has(body)))){
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
						HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",440);
						{
							HX_STACK_LINE(440)
							::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(440)
							return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
						}
						return null();
					}
				};
				HX_STACK_LINE(439)
				if (((bool((filter == null())) || bool(_Function_4_1::Block(shape,filter))))){
					HX_STACK_LINE(440)
					if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
						HX_STACK_LINE(441)
						if ((::zpp_nape::geom::ZPP_Collide_obj::circleContains(shape->circle,v))){
							HX_STACK_LINE(442)
							ret->push(body);
						}
					}
					else{
						HX_STACK_LINE(444)
						if ((::zpp_nape::geom::ZPP_Collide_obj::polyContains(shape->polygon,v))){
							HX_STACK_LINE(445)
							ret->push(body);
						}
					}
				}
			}
		}
		HX_STACK_LINE(450)
		a = a->next;
	}
	HX_STACK_LINE(452)
	{
		HX_STACK_LINE(453)
		::zpp_nape::geom::ZPP_Vec2 o = v;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(454)
		{
		}
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(462)
			if (((o->outer != null()))){
				HX_STACK_LINE(462)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(462)
				o->outer = null();
			}
			HX_STACK_LINE(462)
			o->_isimmutable = null();
			HX_STACK_LINE(462)
			o->_validate = null();
			HX_STACK_LINE(462)
			o->_invalidate = null();
		}
		HX_STACK_LINE(463)
		o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(464)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(469)
	return ret;
}


::nape::shape::ShapeList ZPP_SweepPhase_obj::shapesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("ZPP_SweepPhase::shapesUnderPoint","zpp_nape/space/SweepPhase.hx",390);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(391)
	this->sync_broadphase();
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
			HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",392);
			{
				HX_STACK_LINE(392)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(392)
				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(392)
				{
					HX_STACK_LINE(392)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(392)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(392)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
						HX_STACK_LINE(392)
						ret->next = null();
					}
					HX_STACK_LINE(392)
					ret->weak = false;
				}
				HX_STACK_LINE(392)
				ret->_immutable = immutable;
				HX_STACK_LINE(392)
				{
					HX_STACK_LINE(392)
					ret->x = x;
					HX_STACK_LINE(392)
					ret->y = y;
					HX_STACK_LINE(392)
					{
					}
					HX_STACK_LINE(392)
					{
					}
				}
				HX_STACK_LINE(392)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(392)
	::zpp_nape::geom::ZPP_Vec2 v = _Function_1_1::Block(x,y);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(393)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(394)
	::zpp_nape::space::ZPP_SweepData a = this->list;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(395)
	while(((bool((a != null())) && bool((a->aabb->minx > x))))){
		HX_STACK_LINE(395)
		a = a->next;
	}
	HX_STACK_LINE(396)
	while(((bool((a != null())) && bool((a->aabb->minx <= x))))){
		HX_STACK_LINE(397)
		if (((bool((bool((a->aabb->maxx >= x)) && bool((a->aabb->miny <= y)))) && bool((a->aabb->maxy >= y))))){
			HX_STACK_LINE(398)
			::zpp_nape::shape::ZPP_Shape shape = a->shape;		HX_STACK_VAR(shape,"shape");
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
					HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",399);
					{
						HX_STACK_LINE(399)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(399)
						return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(399)
			if (((bool((filter == null())) || bool(_Function_3_1::Block(shape,filter))))){
				HX_STACK_LINE(399)
				if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(400)
					if ((::zpp_nape::geom::ZPP_Collide_obj::circleContains(shape->circle,v))){
						HX_STACK_LINE(401)
						ret->push(shape->outer);
					}
				}
				else{
					HX_STACK_LINE(403)
					if ((::zpp_nape::geom::ZPP_Collide_obj::polyContains(shape->polygon,v))){
						HX_STACK_LINE(404)
						ret->push(shape->outer);
					}
				}
			}
		}
		HX_STACK_LINE(408)
		a = a->next;
	}
	HX_STACK_LINE(410)
	{
		HX_STACK_LINE(411)
		::zpp_nape::geom::ZPP_Vec2 o = v;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(412)
		{
		}
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			if (((o->outer != null()))){
				HX_STACK_LINE(420)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(420)
				o->outer = null();
			}
			HX_STACK_LINE(420)
			o->_isimmutable = null();
			HX_STACK_LINE(420)
			o->_validate = null();
			HX_STACK_LINE(420)
			o->_invalidate = null();
		}
		HX_STACK_LINE(421)
		o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(422)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(427)
	return ret;
}


Void ZPP_SweepPhase_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_SweepPhase::clear","zpp_nape/space/SweepPhase.hx",384);
		HX_STACK_THIS(this);
		HX_STACK_LINE(384)
		while(((this->list != null()))){
			HX_STACK_LINE(386)
			this->list->shape->removedFromSpace();
			HX_STACK_LINE(387)
			this->__remove(this->list->shape);
		}
	}
return null();
}


Void ZPP_SweepPhase_obj::broadphase( ::zpp_nape::space::ZPP_Space space,bool discrete){
{
		HX_STACK_PUSH("ZPP_SweepPhase::broadphase","zpp_nape/space/SweepPhase.hx",345);
		HX_STACK_THIS(this);
		HX_STACK_ARG(space,"space");
		HX_STACK_ARG(discrete,"discrete");
		HX_STACK_LINE(345)
		if (((this->list != null()))){
			HX_STACK_LINE(347)
			{
				HX_STACK_LINE(347)
				::zpp_nape::space::ZPP_SweepData a = this->list->next;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(347)
				while(((a != null()))){
					HX_STACK_LINE(347)
					::zpp_nape::space::ZPP_SweepData n = a->next;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(347)
					::zpp_nape::space::ZPP_SweepData b = a->prev;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(347)
					if (((a->aabb->minx > b->aabb->minx))){
						HX_STACK_LINE(347)
						a = n;
						HX_STACK_LINE(347)
						continue;
					}
					HX_STACK_LINE(347)
					while(((bool((b->prev != null())) && bool((b->prev->aabb->minx > a->aabb->minx))))){
						HX_STACK_LINE(347)
						b = b->prev;
					}
					HX_STACK_LINE(347)
					::zpp_nape::space::ZPP_SweepData prev = a->prev;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(347)
					prev->next = a->next;
					HX_STACK_LINE(347)
					if (((a->next != null()))){
						HX_STACK_LINE(347)
						a->next->prev = prev;
					}
					HX_STACK_LINE(347)
					if (((b->prev == null()))){
						HX_STACK_LINE(347)
						a->prev = null();
						HX_STACK_LINE(347)
						this->list = a;
						HX_STACK_LINE(347)
						a->next = b;
						HX_STACK_LINE(347)
						b->prev = a;
					}
					else{
						HX_STACK_LINE(347)
						a->prev = b->prev;
						HX_STACK_LINE(347)
						b->prev = a;
						HX_STACK_LINE(347)
						a->prev->next = a;
						HX_STACK_LINE(347)
						a->next = b;
					}
					HX_STACK_LINE(347)
					a = n;
				}
			}
			HX_STACK_LINE(348)
			::zpp_nape::space::ZPP_SweepData d1 = this->list;		HX_STACK_VAR(d1,"d1");
			HX_STACK_LINE(349)
			while(((d1 != null()))){
				HX_STACK_LINE(350)
				::zpp_nape::space::ZPP_SweepData d2 = d1->next;		HX_STACK_VAR(d2,"d2");
				HX_STACK_LINE(351)
				::zpp_nape::shape::ZPP_Shape s1 = d1->shape;		HX_STACK_VAR(s1,"s1");
				HX_STACK_LINE(352)
				::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(353)
				Float bottom = d1->aabb->maxx;		HX_STACK_VAR(bottom,"bottom");
				HX_STACK_LINE(354)
				while(((d2 != null()))){
					HX_STACK_LINE(355)
					if (((d2->aabb->minx > bottom))){
						HX_STACK_LINE(355)
						break;
					}
					HX_STACK_LINE(356)
					::zpp_nape::shape::ZPP_Shape s2 = d2->shape;		HX_STACK_VAR(s2,"s2");
					HX_STACK_LINE(357)
					::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
					HX_STACK_LINE(358)
					if (((b2 == b1))){
						HX_STACK_LINE(359)
						d2 = d2->next;
						HX_STACK_LINE(360)
						continue;
					}
					HX_STACK_LINE(362)
					if (((bool((b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))){
						HX_STACK_LINE(363)
						d2 = d2->next;
						HX_STACK_LINE(364)
						continue;
					}
					HX_STACK_LINE(366)
					if (((bool(b1->component->sleeping) && bool(b2->component->sleeping)))){
						HX_STACK_LINE(367)
						d2 = d2->next;
						HX_STACK_LINE(368)
						continue;
					}
					struct _Function_4_1{
						inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::shape::ZPP_Shape &s2){
							HX_STACK_PUSH("*::closure","zpp_nape/space/SweepPhase.hx",370);
							{
								HX_STACK_LINE(370)
								::zpp_nape::geom::ZPP_AABB _this = s1->aabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB x = s2->aabb;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(370)
								return !(((bool((x->miny > _this->maxy)) || bool((_this->miny > x->maxy)))));
							}
							return null();
						}
					};
					HX_STACK_LINE(370)
					if ((_Function_4_1::Block(s1,s2))){
						HX_STACK_LINE(370)
						if ((discrete)){
							HX_STACK_LINE(371)
							space->narrowPhase(s1,s2,(bool(!(((b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) || bool(!(((b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))),null(),false);
						}
						else{
							HX_STACK_LINE(374)
							space->continuousEvent(s1,s2,(bool(!(((b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) || bool(!(((b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))),null(),false);
						}
					}
					HX_STACK_LINE(378)
					d2 = d2->next;
				}
				HX_STACK_LINE(380)
				d1 = d1->next;
			}
		}
	}
return null();
}


Void ZPP_SweepPhase_obj::sync_broadphase_fast( ){
{
		HX_STACK_PUSH("ZPP_SweepPhase::sync_broadphase_fast","zpp_nape/space/SweepPhase.hx",313);
		HX_STACK_THIS(this);
		HX_STACK_LINE(314)
		::zpp_nape::space::ZPP_SweepData a = this->list->next;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(315)
		while(((a != null()))){
			HX_STACK_LINE(318)
			::zpp_nape::space::ZPP_SweepData n = a->next;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(319)
			::zpp_nape::space::ZPP_SweepData b = a->prev;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(320)
			if (((a->aabb->minx > b->aabb->minx))){
				HX_STACK_LINE(321)
				a = n;
				HX_STACK_LINE(322)
				continue;
			}
			HX_STACK_LINE(326)
			while(((bool((b->prev != null())) && bool((b->prev->aabb->minx > a->aabb->minx))))){
				HX_STACK_LINE(326)
				b = b->prev;
			}
			HX_STACK_LINE(327)
			::zpp_nape::space::ZPP_SweepData prev = a->prev;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(328)
			prev->next = a->next;
			HX_STACK_LINE(329)
			if (((a->next != null()))){
				HX_STACK_LINE(329)
				a->next->prev = prev;
			}
			HX_STACK_LINE(330)
			if (((b->prev == null()))){
				HX_STACK_LINE(331)
				a->prev = null();
				HX_STACK_LINE(332)
				this->list = a;
				HX_STACK_LINE(333)
				a->next = b;
				HX_STACK_LINE(334)
				b->prev = a;
			}
			else{
				HX_STACK_LINE(337)
				a->prev = b->prev;
				HX_STACK_LINE(338)
				b->prev = a;
				HX_STACK_LINE(339)
				a->prev->next = a;
				HX_STACK_LINE(340)
				a->next = b;
			}
			HX_STACK_LINE(342)
			a = n;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SweepPhase_obj,sync_broadphase_fast,(void))

Void ZPP_SweepPhase_obj::sync_broadphase( ){
{
		HX_STACK_PUSH("ZPP_SweepPhase::sync_broadphase","zpp_nape/space/SweepPhase.hx",307);
		HX_STACK_THIS(this);
		HX_STACK_LINE(308)
		this->space->validation();
		HX_STACK_LINE(309)
		if (((this->list != null()))){
			HX_STACK_LINE(309)
			::zpp_nape::space::ZPP_SweepData a = this->list->next;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(309)
			while(((a != null()))){
				HX_STACK_LINE(309)
				::zpp_nape::space::ZPP_SweepData n = a->next;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(309)
				::zpp_nape::space::ZPP_SweepData b = a->prev;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(309)
				if (((a->aabb->minx > b->aabb->minx))){
					HX_STACK_LINE(309)
					a = n;
					HX_STACK_LINE(309)
					continue;
				}
				HX_STACK_LINE(309)
				while(((bool((b->prev != null())) && bool((b->prev->aabb->minx > a->aabb->minx))))){
					HX_STACK_LINE(309)
					b = b->prev;
				}
				HX_STACK_LINE(309)
				::zpp_nape::space::ZPP_SweepData prev = a->prev;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(309)
				prev->next = a->next;
				HX_STACK_LINE(309)
				if (((a->next != null()))){
					HX_STACK_LINE(309)
					a->next->prev = prev;
				}
				HX_STACK_LINE(309)
				if (((b->prev == null()))){
					HX_STACK_LINE(309)
					a->prev = null();
					HX_STACK_LINE(309)
					this->list = a;
					HX_STACK_LINE(309)
					a->next = b;
					HX_STACK_LINE(309)
					b->prev = a;
				}
				else{
					HX_STACK_LINE(309)
					a->prev = b->prev;
					HX_STACK_LINE(309)
					b->prev = a;
					HX_STACK_LINE(309)
					a->prev->next = a;
					HX_STACK_LINE(309)
					a->next = b;
				}
				HX_STACK_LINE(309)
				a = n;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SweepPhase_obj,sync_broadphase,(void))

Void ZPP_SweepPhase_obj::__sync( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_PUSH("ZPP_SweepPhase::__sync","zpp_nape/space/SweepPhase.hx",296);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(297)
		{
		}
		HX_STACK_LINE(305)
		if ((!(this->space->continuous))){
			HX_STACK_LINE(305)
			if ((shape->zip_aabb)){
				HX_STACK_LINE(305)
				if (((shape->body != null()))){
					HX_STACK_LINE(305)
					shape->zip_aabb = false;
					HX_STACK_LINE(305)
					if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
						HX_STACK_LINE(305)
						::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(305)
						if ((_this->zip_worldCOM)){
							HX_STACK_LINE(305)
							if (((_this->body != null()))){
								HX_STACK_LINE(305)
								_this->zip_worldCOM = false;
								HX_STACK_LINE(305)
								if ((_this->zip_localCOM)){
									HX_STACK_LINE(305)
									_this->zip_localCOM = false;
									HX_STACK_LINE(305)
									if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
										HX_STACK_LINE(305)
										::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(305)
										if (((_this1->lverts->next == null()))){
											HX_STACK_LINE(305)
											hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
										}
										HX_STACK_LINE(305)
										if (((_this1->lverts->next->next == null()))){
											HX_STACK_LINE(305)
											_this1->localCOMx = _this1->lverts->next->x;
											HX_STACK_LINE(305)
											_this1->localCOMy = _this1->lverts->next->y;
											HX_STACK_LINE(305)
											{
											}
											HX_STACK_LINE(305)
											Dynamic();
										}
										else{
											HX_STACK_LINE(305)
											if (((_this1->lverts->next->next->next == null()))){
												HX_STACK_LINE(305)
												{
													HX_STACK_LINE(305)
													_this1->localCOMx = _this1->lverts->next->x;
													HX_STACK_LINE(305)
													_this1->localCOMy = _this1->lverts->next->y;
													HX_STACK_LINE(305)
													{
													}
													HX_STACK_LINE(305)
													{
													}
												}
												HX_STACK_LINE(305)
												{
													HX_STACK_LINE(305)
													Float t = 1.0;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(305)
													{
													}
													HX_STACK_LINE(305)
													hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
													HX_STACK_LINE(305)
													hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
												}
												HX_STACK_LINE(305)
												{
													HX_STACK_LINE(305)
													Float t = 0.5;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(305)
													{
													}
													HX_STACK_LINE(305)
													hx::MultEq(_this1->localCOMx,t);
													HX_STACK_LINE(305)
													hx::MultEq(_this1->localCOMy,t);
												}
											}
											else{
												HX_STACK_LINE(305)
												{
													HX_STACK_LINE(305)
													_this1->localCOMx = (int)0;
													HX_STACK_LINE(305)
													_this1->localCOMy = (int)0;
													HX_STACK_LINE(305)
													{
													}
													HX_STACK_LINE(305)
													{
													}
												}
												HX_STACK_LINE(305)
												Float area = 0.0;		HX_STACK_VAR(area,"area");
												HX_STACK_LINE(305)
												{
													HX_STACK_LINE(305)
													::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(305)
													::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
													HX_STACK_LINE(305)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(305)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(305)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(305)
													while(((cx_ite != null()))){
														HX_STACK_LINE(305)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(305)
														{
															HX_STACK_LINE(305)
															hx::AddEq(area,(v->x * ((w->y - u->y))));
															HX_STACK_LINE(305)
															Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(305)
															hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
															HX_STACK_LINE(305)
															hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
														}
														HX_STACK_LINE(305)
														u = v;
														HX_STACK_LINE(305)
														v = w;
														HX_STACK_LINE(305)
														cx_ite = cx_ite->next;
													}
													HX_STACK_LINE(305)
													cx_ite = _this1->lverts->next;
													HX_STACK_LINE(305)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(305)
													{
														HX_STACK_LINE(305)
														hx::AddEq(area,(v->x * ((w->y - u->y))));
														HX_STACK_LINE(305)
														Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(305)
														hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
														HX_STACK_LINE(305)
														hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
													}
													HX_STACK_LINE(305)
													u = v;
													HX_STACK_LINE(305)
													v = w;
													HX_STACK_LINE(305)
													cx_ite = cx_ite->next;
													HX_STACK_LINE(305)
													::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
													HX_STACK_LINE(305)
													{
														HX_STACK_LINE(305)
														hx::AddEq(area,(v->x * ((w1->y - u->y))));
														HX_STACK_LINE(305)
														Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(305)
														hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
														HX_STACK_LINE(305)
														hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
													}
												}
												HX_STACK_LINE(305)
												area = (Float((int)1) / Float((((int)3 * area))));
												HX_STACK_LINE(305)
												{
													HX_STACK_LINE(305)
													Float t = area;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(305)
													{
													}
													HX_STACK_LINE(305)
													hx::MultEq(_this1->localCOMx,t);
													HX_STACK_LINE(305)
													hx::MultEq(_this1->localCOMy,t);
												}
											}
										}
									}
								}
								HX_STACK_LINE(305)
								{
									HX_STACK_LINE(305)
									::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(305)
									if ((_this1->zip_axis)){
										HX_STACK_LINE(305)
										_this1->zip_axis = false;
										HX_STACK_LINE(305)
										{
											HX_STACK_LINE(305)
											_this1->axisx = ::Math_obj::sin(_this1->rot);
											HX_STACK_LINE(305)
											_this1->axisy = ::Math_obj::cos(_this1->rot);
											HX_STACK_LINE(305)
											{
											}
											HX_STACK_LINE(305)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(305)
								{
									HX_STACK_LINE(305)
									_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
									HX_STACK_LINE(305)
									_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
								}
							}
						}
						HX_STACK_LINE(305)
						Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(305)
						Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(305)
						{
						}
						HX_STACK_LINE(305)
						{
						}
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							_this->aabb->minx = (_this->worldCOMx - rx);
							HX_STACK_LINE(305)
							_this->aabb->miny = (_this->worldCOMy - ry);
						}
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							_this->aabb->maxx = (_this->worldCOMx + rx);
							HX_STACK_LINE(305)
							_this->aabb->maxy = (_this->worldCOMy + ry);
						}
					}
					else{
						HX_STACK_LINE(305)
						::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(305)
						if ((_this->zip_gverts)){
							HX_STACK_LINE(305)
							if (((_this->body != null()))){
								HX_STACK_LINE(305)
								_this->zip_gverts = false;
								HX_STACK_LINE(305)
								_this->validate_lverts();
								HX_STACK_LINE(305)
								{
									HX_STACK_LINE(305)
									::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(305)
									if ((_this1->zip_axis)){
										HX_STACK_LINE(305)
										_this1->zip_axis = false;
										HX_STACK_LINE(305)
										{
											HX_STACK_LINE(305)
											_this1->axisx = ::Math_obj::sin(_this1->rot);
											HX_STACK_LINE(305)
											_this1->axisy = ::Math_obj::cos(_this1->rot);
											HX_STACK_LINE(305)
											{
											}
											HX_STACK_LINE(305)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(305)
								::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
								HX_STACK_LINE(305)
								{
									HX_STACK_LINE(305)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(305)
									while(((cx_ite != null()))){
										HX_STACK_LINE(305)
										::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(305)
										{
											HX_STACK_LINE(305)
											::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(305)
											li = li->next;
											HX_STACK_LINE(305)
											{
												HX_STACK_LINE(305)
												g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
												HX_STACK_LINE(305)
												g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
											}
										}
										HX_STACK_LINE(305)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(305)
						if (((_this->lverts->next == null()))){
							HX_STACK_LINE(305)
							hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
						}
						HX_STACK_LINE(305)
						::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							_this->aabb->minx = p0->x;
							HX_STACK_LINE(305)
							_this->aabb->miny = p0->y;
							HX_STACK_LINE(305)
							{
							}
							HX_STACK_LINE(305)
							{
							}
						}
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							_this->aabb->maxx = p0->x;
							HX_STACK_LINE(305)
							_this->aabb->maxy = p0->y;
							HX_STACK_LINE(305)
							{
							}
							HX_STACK_LINE(305)
							{
							}
						}
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(305)
							while(((cx_ite != null()))){
								HX_STACK_LINE(305)
								::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(305)
								{
									HX_STACK_LINE(305)
									if (((p->x < _this->aabb->minx))){
										HX_STACK_LINE(305)
										_this->aabb->minx = p->x;
									}
									HX_STACK_LINE(305)
									if (((p->x > _this->aabb->maxx))){
										HX_STACK_LINE(305)
										_this->aabb->maxx = p->x;
									}
									HX_STACK_LINE(305)
									if (((p->y < _this->aabb->miny))){
										HX_STACK_LINE(305)
										_this->aabb->miny = p->y;
									}
									HX_STACK_LINE(305)
									if (((p->y > _this->aabb->maxy))){
										HX_STACK_LINE(305)
										_this->aabb->maxy = p->y;
									}
								}
								HX_STACK_LINE(305)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SweepPhase_obj,__sync,(void))

Void ZPP_SweepPhase_obj::__remove( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_PUSH("ZPP_SweepPhase::__remove","zpp_nape/space/SweepPhase.hx",262);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(263)
		{
		}
		HX_STACK_LINE(271)
		::zpp_nape::space::ZPP_SweepData dat = shape->sweep;		HX_STACK_VAR(dat,"dat");
		HX_STACK_LINE(272)
		if (((dat->prev == null()))){
			HX_STACK_LINE(272)
			this->list = dat->next;
		}
		else{
			HX_STACK_LINE(273)
			dat->prev->next = dat->next;
		}
		HX_STACK_LINE(274)
		if (((dat->next != null()))){
			HX_STACK_LINE(274)
			dat->next->prev = dat->prev;
		}
		HX_STACK_LINE(275)
		shape->sweep = null();
		HX_STACK_LINE(276)
		{
			HX_STACK_LINE(277)
			::zpp_nape::space::ZPP_SweepData o = dat;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(278)
			{
			}
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				o->prev = null();
				HX_STACK_LINE(286)
				o->shape = null();
				HX_STACK_LINE(286)
				o->aabb = null();
			}
			HX_STACK_LINE(287)
			o->next = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool;
			HX_STACK_LINE(288)
			::zpp_nape::space::ZPP_SweepData_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SweepPhase_obj,__remove,(void))

Void ZPP_SweepPhase_obj::__insert( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_PUSH("ZPP_SweepPhase::__insert","zpp_nape/space/SweepPhase.hx",228);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(229)
		{
		}
		HX_STACK_LINE(237)
		::zpp_nape::space::ZPP_SweepData dat;		HX_STACK_VAR(dat,"dat");
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(239)
			if (((::zpp_nape::space::ZPP_SweepData_obj::zpp_pool == null()))){
				HX_STACK_LINE(239)
				dat = ::zpp_nape::space::ZPP_SweepData_obj::__new();
			}
			else{
				HX_STACK_LINE(246)
				dat = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool;
				HX_STACK_LINE(247)
				::zpp_nape::space::ZPP_SweepData_obj::zpp_pool = dat->next;
				HX_STACK_LINE(248)
				dat->next = null();
			}
			HX_STACK_LINE(253)
			Dynamic();
		}
		HX_STACK_LINE(255)
		shape->sweep = dat;
		HX_STACK_LINE(256)
		dat->shape = shape;
		HX_STACK_LINE(257)
		dat->aabb = shape->aabb;
		HX_STACK_LINE(258)
		dat->next = this->list;
		HX_STACK_LINE(259)
		if (((this->list != null()))){
			HX_STACK_LINE(259)
			this->list->prev = dat;
		}
		HX_STACK_LINE(260)
		this->list = dat;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SweepPhase_obj,__insert,(void))


ZPP_SweepPhase_obj::ZPP_SweepPhase_obj()
{
}

void ZPP_SweepPhase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SweepPhase);
	HX_MARK_MEMBER_NAME(failed,"failed");
	HX_MARK_MEMBER_NAME(list,"list");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_SweepPhase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(failed,"failed");
	HX_VISIT_MEMBER_NAME(list,"list");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_SweepPhase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { return failed; }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__remove") ) { return __remove_dyn(); }
		if (HX_FIELD_EQ(inName,"__insert") ) { return __insert_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"broadphase") ) { return broadphase_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rayMultiCast") ) { return rayMultiCast_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInAABB") ) { return bodiesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInAABB") ) { return shapesInAABB_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bodiesInShape") ) { return bodiesInShape_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInShape") ) { return shapesInShape_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bodiesInCircle") ) { return bodiesInCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInCircle") ) { return shapesInCircle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sync_broadphase") ) { return sync_broadphase_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bodiesUnderPoint") ) { return bodiesUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesUnderPoint") ) { return shapesUnderPoint_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sync_broadphase_fast") ) { return sync_broadphase_fast_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SweepPhase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::zpp_nape::space::ZPP_SweepData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { failed=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SweepPhase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("failed"));
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("rayMultiCast"),
	HX_CSTRING("rayCast"),
	HX_CSTRING("bodiesInShape"),
	HX_CSTRING("shapesInShape"),
	HX_CSTRING("bodiesInCircle"),
	HX_CSTRING("shapesInCircle"),
	HX_CSTRING("bodiesInAABB"),
	HX_CSTRING("failed"),
	HX_CSTRING("shapesInAABB"),
	HX_CSTRING("bodiesUnderPoint"),
	HX_CSTRING("shapesUnderPoint"),
	HX_CSTRING("clear"),
	HX_CSTRING("broadphase"),
	HX_CSTRING("sync_broadphase_fast"),
	HX_CSTRING("sync_broadphase"),
	HX_CSTRING("__sync"),
	HX_CSTRING("__remove"),
	HX_CSTRING("__insert"),
	HX_CSTRING("list"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SweepPhase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SweepPhase_obj::__mClass,"__mClass");
};

Class ZPP_SweepPhase_obj::__mClass;

void ZPP_SweepPhase_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_SweepPhase"), hx::TCanCast< ZPP_SweepPhase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_SweepPhase_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace space
