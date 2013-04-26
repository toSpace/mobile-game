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
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBTree
#include <zpp_nape/space/ZPP_AABBTree.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_DynAABBPhase
#include <zpp_nape/space/ZPP_DynAABBPhase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBNode
#include <zpp_nape/util/ZNPList_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBPair
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_DynAABBPhase_obj::__construct(::zpp_nape::space::ZPP_Space space)
{
HX_STACK_PUSH("ZPP_DynAABBPhase::new","zpp_nape/space/DynAABBPhase.hx",694);
{
	HX_STACK_LINE(2820)
	this->openlist = null();
	HX_STACK_LINE(2276)
	this->failed = null();
	HX_STACK_LINE(2132)
	this->treeStack2 = null();
	HX_STACK_LINE(1931)
	this->treeStack = null();
	HX_STACK_LINE(703)
	this->moves = null();
	HX_STACK_LINE(702)
	this->syncs = null();
	HX_STACK_LINE(701)
	this->pairs = null();
	HX_STACK_LINE(700)
	this->dtree = null();
	HX_STACK_LINE(699)
	this->stree = null();
	HX_STACK_LINE(705)
	this->space = space;
	HX_STACK_LINE(706)
	this->is_sweep = false;
	HX_STACK_LINE(707)
	this->dynab = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(708)
	this->stree = ::zpp_nape::space::ZPP_AABBTree_obj::__new();
	HX_STACK_LINE(709)
	this->dtree = ::zpp_nape::space::ZPP_AABBTree_obj::__new();
}
;
	return null();
}

ZPP_DynAABBPhase_obj::~ZPP_DynAABBPhase_obj() { }

Dynamic ZPP_DynAABBPhase_obj::__CreateEmpty() { return  new ZPP_DynAABBPhase_obj; }
hx::ObjectPtr< ZPP_DynAABBPhase_obj > ZPP_DynAABBPhase_obj::__new(::zpp_nape::space::ZPP_Space space)
{  hx::ObjectPtr< ZPP_DynAABBPhase_obj > result = new ZPP_DynAABBPhase_obj();
	result->__construct(space);
	return result;}

Dynamic ZPP_DynAABBPhase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_DynAABBPhase_obj > result = new ZPP_DynAABBPhase_obj();
	result->__construct(inArgs[0]);
	return result;}

::nape::geom::RayResultList ZPP_DynAABBPhase_obj::rayMultiCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::geom::RayResultList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::rayMultiCast","zpp_nape/space/DynAABBPhase.hx",2950);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ray,"ray");
	HX_STACK_ARG(inner,"inner");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2951)
	if (((this->openlist == null()))){
		HX_STACK_LINE(2951)
		this->openlist = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
	}
	HX_STACK_LINE(2952)
	this->sync_broadphase();
	HX_STACK_LINE(2953)
	ray->validate_dir();
	HX_STACK_LINE(2954)
	bool inf = (ray->maxdist >= ::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(inf,"inf");
	HX_STACK_LINE(2955)
	::nape::geom::RayResultList ret = (  (((output == null()))) ? ::nape::geom::RayResultList(::nape::geom::RayResultList_obj::__new()) : ::nape::geom::RayResultList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2956)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2957)
		if ((ray->aabbtest(this->dtree->root->aabb))){
			HX_STACK_LINE(2958)
			if ((inf)){
				HX_STACK_LINE(2959)
				this->openlist->add(this->dtree->root);
			}
			else{
				HX_STACK_LINE(2961)
				Float t = ray->aabbsect(this->dtree->root->aabb);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2962)
				if (((bool((t >= (int)0)) && bool((t < ray->maxdist))))){
					HX_STACK_LINE(2962)
					this->openlist->add(this->dtree->root);
				}
			}
		}
	}
	HX_STACK_LINE(2967)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2968)
		if ((ray->aabbtest(this->stree->root->aabb))){
			HX_STACK_LINE(2969)
			if ((inf)){
				HX_STACK_LINE(2970)
				this->openlist->add(this->stree->root);
			}
			else{
				HX_STACK_LINE(2972)
				Float t = ray->aabbsect(this->stree->root->aabb);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2973)
				if (((bool((t >= (int)0)) && bool((t < ray->maxdist))))){
					HX_STACK_LINE(2973)
					this->openlist->add(this->stree->root);
				}
			}
		}
	}
	HX_STACK_LINE(2978)
	while((!(((this->openlist->head == null()))))){
		HX_STACK_LINE(2979)
		::zpp_nape::space::ZPP_AABBNode cnode = this->openlist->pop_unsafe();		HX_STACK_VAR(cnode,"cnode");
		HX_STACK_LINE(2980)
		if (((cnode->child1 == null()))){
			HX_STACK_LINE(2981)
			::zpp_nape::shape::ZPP_Shape shape = cnode->shape;		HX_STACK_VAR(shape,"shape");
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2982);
					{
						HX_STACK_LINE(2982)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2982)
						return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2982)
			if (((bool((filter == null())) || bool(_Function_3_1::Block(shape,filter))))){
				HX_STACK_LINE(2982)
				if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(2983)
					ray->circlesect2(shape->circle,inner,ret);
				}
				else{
					HX_STACK_LINE(2984)
					if ((ray->aabbtest(shape->aabb))){
						HX_STACK_LINE(2984)
						ray->polysect2(shape->polygon,inner,ret);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(2988)
			if (((cnode->child1 != null()))){
				HX_STACK_LINE(2989)
				if ((ray->aabbtest(cnode->child1->aabb))){
					HX_STACK_LINE(2990)
					if ((inf)){
						HX_STACK_LINE(2991)
						this->openlist->add(cnode->child1);
					}
					else{
						HX_STACK_LINE(2993)
						Float t = ray->aabbsect(cnode->child1->aabb);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2994)
						if (((bool((t >= (int)0)) && bool((t < ray->maxdist))))){
							HX_STACK_LINE(2994)
							this->openlist->add(cnode->child1);
						}
					}
				}
			}
			HX_STACK_LINE(2999)
			if (((cnode->child2 != null()))){
				HX_STACK_LINE(3000)
				if ((ray->aabbtest(cnode->child2->aabb))){
					HX_STACK_LINE(3001)
					if ((inf)){
						HX_STACK_LINE(3002)
						this->openlist->add(cnode->child2);
					}
					else{
						HX_STACK_LINE(3004)
						Float t = ray->aabbsect(cnode->child2->aabb);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(3005)
						if (((bool((t >= (int)0)) && bool((t < ray->maxdist))))){
							HX_STACK_LINE(3005)
							this->openlist->add(cnode->child2);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(3012)
	this->openlist->clear();
	HX_STACK_LINE(3013)
	return ret;
}


::nape::geom::RayResult ZPP_DynAABBPhase_obj::rayCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter){
	HX_STACK_PUSH("ZPP_DynAABBPhase::rayCast","zpp_nape/space/DynAABBPhase.hx",2821);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ray,"ray");
	HX_STACK_ARG(inner,"inner");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_LINE(2822)
	if (((this->openlist == null()))){
		HX_STACK_LINE(2822)
		this->openlist = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
	}
	HX_STACK_LINE(2823)
	this->sync_broadphase();
	HX_STACK_LINE(2824)
	ray->validate_dir();
	HX_STACK_LINE(2825)
	Float mint = ray->maxdist;		HX_STACK_VAR(mint,"mint");
	HX_STACK_LINE(2826)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2827)
		if ((ray->aabbtest(this->dtree->root->aabb))){
			HX_STACK_LINE(2829)
			Float t = ray->aabbsect(this->dtree->root->aabb);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(2830)
			if (((bool((t >= (int)0)) && bool((t < mint))))){
				HX_STACK_LINE(2831)
				this->dtree->root->rayt = t;
				HX_STACK_LINE(2832)
				{
					HX_STACK_LINE(2833)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(2834)
					{
						HX_STACK_LINE(2835)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->openlist->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(2836)
						while(((cx_ite != null()))){
							HX_STACK_LINE(2837)
							::zpp_nape::space::ZPP_AABBNode j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(2838)
							{
								HX_STACK_LINE(2839)
								if (((this->dtree->root->rayt < j->rayt))){
									HX_STACK_LINE(2839)
									break;
								}
								HX_STACK_LINE(2840)
								pre = cx_ite;
							}
							HX_STACK_LINE(2842)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(2845)
					{
						HX_STACK_LINE(2845)
						::zpp_nape::util::ZNPList_ZPP_AABBNode _this = this->openlist;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2845)
						{
						}
						struct _Function_6_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::space::ZPP_DynAABBPhase_obj *__this){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2845);
								{
									HX_STACK_LINE(2845)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(2845)
									{
										HX_STACK_LINE(2845)
										if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
											HX_STACK_LINE(2845)
											ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
										}
										else{
											HX_STACK_LINE(2845)
											ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
											HX_STACK_LINE(2845)
											::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
											HX_STACK_LINE(2845)
											ret->next = null();
										}
										HX_STACK_LINE(2845)
										Dynamic();
									}
									HX_STACK_LINE(2845)
									ret->elt = __this->dtree->root;
									HX_STACK_LINE(2845)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(2845)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = _Function_6_1::Block(this);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(2845)
						if (((pre == null()))){
							HX_STACK_LINE(2845)
							temp->next = _this->head;
							HX_STACK_LINE(2845)
							_this->head = temp;
						}
						else{
							HX_STACK_LINE(2845)
							temp->next = pre->next;
							HX_STACK_LINE(2845)
							pre->next = temp;
						}
						HX_STACK_LINE(2845)
						_this->pushmod = _this->modified = true;
						HX_STACK_LINE(2845)
						(_this->length)++;
						HX_STACK_LINE(2845)
						temp;
					}
				}
			}
		}
	}
	HX_STACK_LINE(2851)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2852)
		if ((ray->aabbtest(this->stree->root->aabb))){
			HX_STACK_LINE(2854)
			Float t = ray->aabbsect(this->stree->root->aabb);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(2855)
			if (((bool((t >= (int)0)) && bool((t < mint))))){
				HX_STACK_LINE(2856)
				this->stree->root->rayt = t;
				HX_STACK_LINE(2857)
				{
					HX_STACK_LINE(2858)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(2859)
					{
						HX_STACK_LINE(2860)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->openlist->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(2861)
						while(((cx_ite != null()))){
							HX_STACK_LINE(2862)
							::zpp_nape::space::ZPP_AABBNode j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(2863)
							{
								HX_STACK_LINE(2864)
								if (((this->stree->root->rayt < j->rayt))){
									HX_STACK_LINE(2864)
									break;
								}
								HX_STACK_LINE(2865)
								pre = cx_ite;
							}
							HX_STACK_LINE(2867)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(2870)
					{
						HX_STACK_LINE(2870)
						::zpp_nape::util::ZNPList_ZPP_AABBNode _this = this->openlist;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2870)
						{
						}
						struct _Function_6_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::space::ZPP_DynAABBPhase_obj *__this){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2870);
								{
									HX_STACK_LINE(2870)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(2870)
									{
										HX_STACK_LINE(2870)
										if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
											HX_STACK_LINE(2870)
											ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
										}
										else{
											HX_STACK_LINE(2870)
											ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
											HX_STACK_LINE(2870)
											::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
											HX_STACK_LINE(2870)
											ret->next = null();
										}
										HX_STACK_LINE(2870)
										Dynamic();
									}
									HX_STACK_LINE(2870)
									ret->elt = __this->stree->root;
									HX_STACK_LINE(2870)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(2870)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = _Function_6_1::Block(this);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(2870)
						if (((pre == null()))){
							HX_STACK_LINE(2870)
							temp->next = _this->head;
							HX_STACK_LINE(2870)
							_this->head = temp;
						}
						else{
							HX_STACK_LINE(2870)
							temp->next = pre->next;
							HX_STACK_LINE(2870)
							pre->next = temp;
						}
						HX_STACK_LINE(2870)
						_this->pushmod = _this->modified = true;
						HX_STACK_LINE(2870)
						(_this->length)++;
						HX_STACK_LINE(2870)
						temp;
					}
				}
			}
		}
	}
	HX_STACK_LINE(2876)
	::nape::geom::RayResult minres = null();		HX_STACK_VAR(minres,"minres");
	HX_STACK_LINE(2877)
	while((!(((this->openlist->head == null()))))){
		HX_STACK_LINE(2878)
		::zpp_nape::space::ZPP_AABBNode cnode = this->openlist->pop_unsafe();		HX_STACK_VAR(cnode,"cnode");
		HX_STACK_LINE(2879)
		if (((cnode->rayt >= mint))){
			HX_STACK_LINE(2879)
			break;
		}
		HX_STACK_LINE(2880)
		if (((cnode->child1 == null()))){
			HX_STACK_LINE(2881)
			::zpp_nape::shape::ZPP_Shape shape = cnode->shape;		HX_STACK_VAR(shape,"shape");
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2882);
					{
						HX_STACK_LINE(2882)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2882)
						return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2882)
			if (((bool((filter == null())) || bool(_Function_3_1::Block(shape,filter))))){
				HX_STACK_LINE(2883)
				::nape::geom::RayResult result = (  (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))) ? ::nape::geom::RayResult(ray->circlesect(shape->circle,inner,mint)) : ::nape::geom::RayResult((  ((ray->aabbtest(shape->aabb))) ? ::nape::geom::RayResult(ray->polysect(shape->polygon,inner,mint)) : ::nape::geom::RayResult(null()) )) );		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(2885)
				if (((result != null()))){
					struct _Function_5_1{
						inline static Float Block( ::nape::geom::RayResult &result){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2886);
							{
								HX_STACK_LINE(2886)
								if (((result->zpp_inner->next != null()))){
									HX_STACK_LINE(2886)
									hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
								}
								HX_STACK_LINE(2886)
								return result->zpp_inner->toiDistance;
							}
							return null();
						}
					};
					HX_STACK_LINE(2886)
					mint = _Function_5_1::Block(result);
					HX_STACK_LINE(2887)
					if (((minres != null()))){
						HX_STACK_LINE(2888)
						if (((minres->zpp_inner->next != null()))){
							HX_STACK_LINE(2888)
							hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
						}
						HX_STACK_LINE(2888)
						minres->zpp_inner->free();
					}
					HX_STACK_LINE(2890)
					minres = result;
				}
			}
		}
		else{
			HX_STACK_LINE(2895)
			if (((cnode->child1 != null()))){
				HX_STACK_LINE(2896)
				if ((ray->aabbtest(cnode->child1->aabb))){
					HX_STACK_LINE(2898)
					Float t = ray->aabbsect(cnode->child1->aabb);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2899)
					if (((bool((t >= (int)0)) && bool((t < mint))))){
						HX_STACK_LINE(2900)
						cnode->child1->rayt = t;
						HX_STACK_LINE(2901)
						{
							HX_STACK_LINE(2902)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
							HX_STACK_LINE(2903)
							{
								HX_STACK_LINE(2904)
								::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->openlist->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(2905)
								while(((cx_ite != null()))){
									HX_STACK_LINE(2906)
									::zpp_nape::space::ZPP_AABBNode j = cx_ite->elt;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(2907)
									{
										HX_STACK_LINE(2908)
										if (((cnode->child1->rayt < j->rayt))){
											HX_STACK_LINE(2908)
											break;
										}
										HX_STACK_LINE(2909)
										pre = cx_ite;
									}
									HX_STACK_LINE(2911)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(2914)
							{
								HX_STACK_LINE(2914)
								::zpp_nape::util::ZNPList_ZPP_AABBNode _this = this->openlist;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2914)
								{
								}
								struct _Function_8_1{
									inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &cnode){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2914);
										{
											HX_STACK_LINE(2914)
											::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(2914)
											{
												HX_STACK_LINE(2914)
												if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
													HX_STACK_LINE(2914)
													ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
												}
												else{
													HX_STACK_LINE(2914)
													ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
													HX_STACK_LINE(2914)
													::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
													HX_STACK_LINE(2914)
													ret->next = null();
												}
												HX_STACK_LINE(2914)
												Dynamic();
											}
											HX_STACK_LINE(2914)
											ret->elt = cnode->child1;
											HX_STACK_LINE(2914)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(2914)
								::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = _Function_8_1::Block(cnode);		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(2914)
								if (((pre == null()))){
									HX_STACK_LINE(2914)
									temp->next = _this->head;
									HX_STACK_LINE(2914)
									_this->head = temp;
								}
								else{
									HX_STACK_LINE(2914)
									temp->next = pre->next;
									HX_STACK_LINE(2914)
									pre->next = temp;
								}
								HX_STACK_LINE(2914)
								_this->pushmod = _this->modified = true;
								HX_STACK_LINE(2914)
								(_this->length)++;
								HX_STACK_LINE(2914)
								temp;
							}
						}
					}
				}
			}
			HX_STACK_LINE(2920)
			if (((cnode->child2 != null()))){
				HX_STACK_LINE(2921)
				if ((ray->aabbtest(cnode->child2->aabb))){
					HX_STACK_LINE(2923)
					Float t = ray->aabbsect(cnode->child2->aabb);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2924)
					if (((bool((t >= (int)0)) && bool((t < mint))))){
						HX_STACK_LINE(2925)
						cnode->child2->rayt = t;
						HX_STACK_LINE(2926)
						{
							HX_STACK_LINE(2927)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
							HX_STACK_LINE(2928)
							{
								HX_STACK_LINE(2929)
								::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->openlist->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(2930)
								while(((cx_ite != null()))){
									HX_STACK_LINE(2931)
									::zpp_nape::space::ZPP_AABBNode j = cx_ite->elt;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(2932)
									{
										HX_STACK_LINE(2933)
										if (((cnode->child2->rayt < j->rayt))){
											HX_STACK_LINE(2933)
											break;
										}
										HX_STACK_LINE(2934)
										pre = cx_ite;
									}
									HX_STACK_LINE(2936)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(2939)
							{
								HX_STACK_LINE(2939)
								::zpp_nape::util::ZNPList_ZPP_AABBNode _this = this->openlist;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2939)
								{
								}
								struct _Function_8_1{
									inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &cnode){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2939);
										{
											HX_STACK_LINE(2939)
											::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(2939)
											{
												HX_STACK_LINE(2939)
												if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
													HX_STACK_LINE(2939)
													ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
												}
												else{
													HX_STACK_LINE(2939)
													ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
													HX_STACK_LINE(2939)
													::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
													HX_STACK_LINE(2939)
													ret->next = null();
												}
												HX_STACK_LINE(2939)
												Dynamic();
											}
											HX_STACK_LINE(2939)
											ret->elt = cnode->child2;
											HX_STACK_LINE(2939)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(2939)
								::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = _Function_8_1::Block(cnode);		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(2939)
								if (((pre == null()))){
									HX_STACK_LINE(2939)
									temp->next = _this->head;
									HX_STACK_LINE(2939)
									_this->head = temp;
								}
								else{
									HX_STACK_LINE(2939)
									temp->next = pre->next;
									HX_STACK_LINE(2939)
									pre->next = temp;
								}
								HX_STACK_LINE(2939)
								_this->pushmod = _this->modified = true;
								HX_STACK_LINE(2939)
								(_this->length)++;
								HX_STACK_LINE(2939)
								temp;
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2947)
	this->openlist->clear();
	HX_STACK_LINE(2948)
	return minres;
}


::nape::phys::BodyList ZPP_DynAABBPhase_obj::bodiesInShape( ::zpp_nape::shape::ZPP_Shape shp,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::bodiesInShape","zpp_nape/space/DynAABBPhase.hx",2721);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shp,"shp");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2722)
	this->sync_broadphase();
	HX_STACK_LINE(2723)
	this->validateShape(shp);
	HX_STACK_LINE(2724)
	::zpp_nape::geom::ZPP_AABB ab = shp->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2725)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2726)
	if (((this->failed == null()))){
		HX_STACK_LINE(2726)
		this->failed = ::nape::phys::BodyList_obj::__new();
	}
	HX_STACK_LINE(2727)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2730)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2730)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2731)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2732)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2733)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2734)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2742);
					{
						HX_STACK_LINE(2742)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2742)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2742)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2742)
				if (((node->child1 == null()))){
					HX_STACK_LINE(2745)
					::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2746);
							{
								HX_STACK_LINE(2746)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2746)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2746)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2746)
						if ((containment)){
							HX_STACK_LINE(2747)
							if ((!(this->failed->has(body)))){
								HX_STACK_LINE(2749)
								bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(shp,node->shape);		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(2750)
								if (((bool(!(ret->has(body))) && bool(col)))){
									HX_STACK_LINE(2750)
									ret->push(body);
								}
								else{
									HX_STACK_LINE(2751)
									if ((!(col))){
										HX_STACK_LINE(2752)
										ret->remove(body);
										HX_STACK_LINE(2753)
										this->failed->push(body);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(2757)
							if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,shp))))){
								HX_STACK_LINE(2757)
								ret->push(body);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2764)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2764)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2765)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2765)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2772)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2775)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2775)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2776)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2777)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2778)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2779)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2787);
					{
						HX_STACK_LINE(2787)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2787)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2787)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2787)
				if (((node->child1 == null()))){
					HX_STACK_LINE(2790)
					::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2791);
							{
								HX_STACK_LINE(2791)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2791)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2791)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2791)
						if ((containment)){
							HX_STACK_LINE(2792)
							if ((!(this->failed->has(body)))){
								HX_STACK_LINE(2794)
								bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(shp,node->shape);		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(2795)
								if (((bool(!(ret->has(body))) && bool(col)))){
									HX_STACK_LINE(2795)
									ret->push(body);
								}
								else{
									HX_STACK_LINE(2796)
									if ((!(col))){
										HX_STACK_LINE(2797)
										ret->remove(body);
										HX_STACK_LINE(2798)
										this->failed->push(body);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(2802)
							if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,shp))))){
								HX_STACK_LINE(2802)
								ret->push(body);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2809)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2809)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2810)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2810)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2817)
	this->failed->clear();
	HX_STACK_LINE(2818)
	return ret;
}


::nape::shape::ShapeList ZPP_DynAABBPhase_obj::shapesInShape( ::zpp_nape::shape::ZPP_Shape shp,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::shapesInShape","zpp_nape/space/DynAABBPhase.hx",2644);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shp,"shp");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2645)
	this->sync_broadphase();
	HX_STACK_LINE(2646)
	this->validateShape(shp);
	HX_STACK_LINE(2647)
	::zpp_nape::geom::ZPP_AABB ab = shp->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2648)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2649)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2652)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2652)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2653)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2654)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2655)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2656)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2664);
					{
						HX_STACK_LINE(2664)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2664)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2664)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2664)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2667);
							{
								HX_STACK_LINE(2667)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2667)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2665)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2667)
						if ((containment)){
							HX_STACK_LINE(2668)
							if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(shp,node->shape))){
								HX_STACK_LINE(2669)
								ret->push(node->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(2671)
							if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,shp))){
								HX_STACK_LINE(2671)
								ret->push(node->shape->outer);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2676)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2676)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2677)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2677)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2684)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2687)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2687)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2688)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2689)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2690)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2691)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2699);
					{
						HX_STACK_LINE(2699)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2699)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2699)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2699)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2702);
							{
								HX_STACK_LINE(2702)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2702)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2700)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2702)
						if ((containment)){
							HX_STACK_LINE(2703)
							if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(shp,node->shape))){
								HX_STACK_LINE(2704)
								ret->push(node->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(2706)
							if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,shp))){
								HX_STACK_LINE(2706)
								ret->push(node->shape->outer);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2711)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2711)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2712)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2712)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2719)
	return ret;
}


::nape::phys::BodyList ZPP_DynAABBPhase_obj::bodiesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::bodiesInCircle","zpp_nape/space/DynAABBPhase.hx",2545);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2546)
	this->sync_broadphase();
	HX_STACK_LINE(2547)
	this->updateCircShape(x,y,r);
	HX_STACK_LINE(2548)
	::zpp_nape::geom::ZPP_AABB ab = this->circShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2549)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2550)
	if (((this->failed == null()))){
		HX_STACK_LINE(2550)
		this->failed = ::nape::phys::BodyList_obj::__new();
	}
	HX_STACK_LINE(2551)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2554)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2554)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2555)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2556)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2557)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2558)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2566);
					{
						HX_STACK_LINE(2566)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2566)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2566)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2566)
				if (((node->child1 == null()))){
					HX_STACK_LINE(2569)
					::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2570);
							{
								HX_STACK_LINE(2570)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2570)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2570)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2570)
						if ((containment)){
							HX_STACK_LINE(2571)
							if ((!(this->failed->has(body)))){
								HX_STACK_LINE(2573)
								bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(this->circShape->zpp_inner,node->shape);		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(2574)
								if (((bool(!(ret->has(body))) && bool(col)))){
									HX_STACK_LINE(2574)
									ret->push(body);
								}
								else{
									HX_STACK_LINE(2575)
									if ((!(col))){
										HX_STACK_LINE(2576)
										ret->remove(body);
										HX_STACK_LINE(2577)
										this->failed->push(body);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(2581)
							if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->circShape->zpp_inner))))){
								HX_STACK_LINE(2581)
								ret->push(body);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2588)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2588)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2589)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2589)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2596)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2599)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2599)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2600)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2601)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2602)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2603)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2611);
					{
						HX_STACK_LINE(2611)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2611)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2611)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2611)
				if (((node->child1 == null()))){
					HX_STACK_LINE(2614)
					::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2615);
							{
								HX_STACK_LINE(2615)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2615)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2615)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2615)
						if ((containment)){
							HX_STACK_LINE(2616)
							if ((!(this->failed->has(body)))){
								HX_STACK_LINE(2618)
								bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(this->circShape->zpp_inner,node->shape);		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(2619)
								if (((bool(!(ret->has(body))) && bool(col)))){
									HX_STACK_LINE(2619)
									ret->push(body);
								}
								else{
									HX_STACK_LINE(2620)
									if ((!(col))){
										HX_STACK_LINE(2621)
										ret->remove(body);
										HX_STACK_LINE(2622)
										this->failed->push(body);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(2626)
							if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->circShape->zpp_inner))))){
								HX_STACK_LINE(2626)
								ret->push(body);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2633)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2633)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2634)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2634)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2641)
	this->failed->clear();
	HX_STACK_LINE(2642)
	return ret;
}


::nape::shape::ShapeList ZPP_DynAABBPhase_obj::shapesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::shapesInCircle","zpp_nape/space/DynAABBPhase.hx",2468);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2469)
	this->sync_broadphase();
	HX_STACK_LINE(2470)
	this->updateCircShape(x,y,r);
	HX_STACK_LINE(2471)
	::zpp_nape::geom::ZPP_AABB ab = this->circShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2472)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2473)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2476)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2476)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2477)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2478)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2479)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2480)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2488);
					{
						HX_STACK_LINE(2488)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2488)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2488)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2488)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2491);
							{
								HX_STACK_LINE(2491)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2491)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2489)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2491)
						if ((containment)){
							HX_STACK_LINE(2492)
							if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(this->circShape->zpp_inner,node->shape))){
								HX_STACK_LINE(2493)
								ret->push(node->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(2495)
							if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->circShape->zpp_inner))){
								HX_STACK_LINE(2495)
								ret->push(node->shape->outer);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2500)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2500)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2501)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2501)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2508)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2511)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2511)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2512)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2513)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2514)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2515)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2523);
					{
						HX_STACK_LINE(2523)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2523)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2523)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2523)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2526);
							{
								HX_STACK_LINE(2526)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2526)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2524)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2526)
						if ((containment)){
							HX_STACK_LINE(2527)
							if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(this->circShape->zpp_inner,node->shape))){
								HX_STACK_LINE(2528)
								ret->push(node->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(2530)
							if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->circShape->zpp_inner))){
								HX_STACK_LINE(2530)
								ret->push(node->shape->outer);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2535)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2535)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2536)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2536)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2543)
	return ret;
}


::nape::phys::BodyList ZPP_DynAABBPhase_obj::bodiesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::bodiesInAABB","zpp_nape/space/DynAABBPhase.hx",2277);
	HX_STACK_THIS(this);
	HX_STACK_ARG(aabb,"aabb");
	HX_STACK_ARG(strict,"strict");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2278)
	this->sync_broadphase();
	HX_STACK_LINE(2279)
	this->updateAABBShape(aabb);
	HX_STACK_LINE(2280)
	::zpp_nape::geom::ZPP_AABB ab = this->aabbShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2281)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2282)
	if (((this->failed == null()))){
		HX_STACK_LINE(2282)
		this->failed = ::nape::phys::BodyList_obj::__new();
	}
	HX_STACK_LINE(2283)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2286)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2286)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2287)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2288)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2289)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2290)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2298);
					{
						HX_STACK_LINE(2298)
						::zpp_nape::geom::ZPP_AABB x = node->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(2298)
						return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2298)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2298)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2301);
							{
								HX_STACK_LINE(2301)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2301)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2299)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2302)
						::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
						HX_STACK_LINE(2303)
						if ((!(ret->has(body)))){
							HX_STACK_LINE(2303)
							ret->push(body);
						}
					}
				}
				else{
					HX_STACK_LINE(2308)
					if (((this->treeStack2 == null()))){
						HX_STACK_LINE(2308)
						this->treeStack2 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
					}
					HX_STACK_LINE(2311)
					this->treeStack2->add(node);
					HX_STACK_LINE(2312)
					while((!(((this->treeStack2->head == null()))))){
						HX_STACK_LINE(2313)
						::zpp_nape::space::ZPP_AABBNode node1 = this->treeStack2->pop_unsafe();		HX_STACK_VAR(node1,"node1");
						HX_STACK_LINE(2314)
						if (((node1->child1 == null()))){
							struct _Function_7_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2315);
									{
										HX_STACK_LINE(2315)
										::zpp_nape::dynamics::ZPP_InteractionFilter _this = node1->shape->filter;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2315)
										return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
									}
									return null();
								}
							};
							HX_STACK_LINE(2314)
							if (((bool((filter == null())) || bool(_Function_7_1::Block(node1,filter))))){
								HX_STACK_LINE(2316)
								::nape::phys::Body body = node1->shape->body->outer;		HX_STACK_VAR(body,"body");
								HX_STACK_LINE(2317)
								if ((!(ret->has(body)))){
									HX_STACK_LINE(2317)
									ret->push(body);
								}
							}
						}
						else{
							HX_STACK_LINE(2321)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(2321)
								this->treeStack2->add(node1->child1);
							}
							HX_STACK_LINE(2322)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(2322)
								this->treeStack2->add(node1->child2);
							}
						}
					}
				}
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2327);
						{
							HX_STACK_LINE(2327)
							::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2327)
							return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
						}
						return null();
					}
				};
				HX_STACK_LINE(2327)
				if ((_Function_4_1::Block(node,ab))){
					HX_STACK_LINE(2327)
					if (((node->child1 == null()))){
						HX_STACK_LINE(2330)
						::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2331);
								{
									HX_STACK_LINE(2331)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2331)
									return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
								}
								return null();
							}
						};
						HX_STACK_LINE(2331)
						if (((bool((filter == null())) || bool(_Function_6_1::Block(node,filter))))){
							HX_STACK_LINE(2331)
							if ((strict)){
								HX_STACK_LINE(2332)
								if ((containment)){
									HX_STACK_LINE(2333)
									if ((!(this->failed->has(body)))){
										HX_STACK_LINE(2335)
										bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(this->aabbShape->zpp_inner,node->shape);		HX_STACK_VAR(col,"col");
										HX_STACK_LINE(2336)
										if (((bool(!(ret->has(body))) && bool(col)))){
											HX_STACK_LINE(2336)
											ret->push(body);
										}
										else{
											HX_STACK_LINE(2337)
											if ((!(col))){
												HX_STACK_LINE(2338)
												ret->remove(body);
												HX_STACK_LINE(2339)
												this->failed->push(body);
											}
										}
									}
								}
								else{
									HX_STACK_LINE(2343)
									if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->aabbShape->zpp_inner))))){
										HX_STACK_LINE(2343)
										ret->push(body);
									}
								}
							}
							else{
								HX_STACK_LINE(2347)
								if ((containment)){
									HX_STACK_LINE(2348)
									if ((!(this->failed->has(body)))){
										struct _Function_10_1{
											inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2350);
												{
													HX_STACK_LINE(2350)
													::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(2350)
													return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
												}
												return null();
											}
										};
										HX_STACK_LINE(2350)
										bool col = _Function_10_1::Block(node,ab);		HX_STACK_VAR(col,"col");
										HX_STACK_LINE(2351)
										if (((bool(!(ret->has(body))) && bool(col)))){
											HX_STACK_LINE(2351)
											ret->push(body);
										}
										else{
											HX_STACK_LINE(2352)
											if ((!(col))){
												HX_STACK_LINE(2353)
												ret->remove(body);
												HX_STACK_LINE(2354)
												this->failed->push(body);
											}
										}
									}
								}
								else{
									struct _Function_9_1{
										inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2358);
											{
												HX_STACK_LINE(2358)
												::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(2358)
												return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
											}
											return null();
										}
									};
									HX_STACK_LINE(2358)
									if (((bool(!(ret->has(body))) && bool(_Function_9_1::Block(node,ab))))){
										HX_STACK_LINE(2358)
										ret->push(body);
									}
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2366)
						if (((node->child1 != null()))){
							HX_STACK_LINE(2366)
							this->treeStack->add(node->child1);
						}
						HX_STACK_LINE(2367)
						if (((node->child2 != null()))){
							HX_STACK_LINE(2367)
							this->treeStack->add(node->child2);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2374)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2377)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2377)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2378)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2379)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2380)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2381)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2389);
					{
						HX_STACK_LINE(2389)
						::zpp_nape::geom::ZPP_AABB x = node->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(2389)
						return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2389)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2389)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2392);
							{
								HX_STACK_LINE(2392)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2392)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2390)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2393)
						::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
						HX_STACK_LINE(2394)
						if ((!(ret->has(body)))){
							HX_STACK_LINE(2394)
							ret->push(body);
						}
					}
				}
				else{
					HX_STACK_LINE(2399)
					if (((this->treeStack2 == null()))){
						HX_STACK_LINE(2399)
						this->treeStack2 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
					}
					HX_STACK_LINE(2402)
					this->treeStack2->add(node);
					HX_STACK_LINE(2403)
					while((!(((this->treeStack2->head == null()))))){
						HX_STACK_LINE(2404)
						::zpp_nape::space::ZPP_AABBNode node1 = this->treeStack2->pop_unsafe();		HX_STACK_VAR(node1,"node1");
						HX_STACK_LINE(2405)
						if (((node1->child1 == null()))){
							struct _Function_7_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2406);
									{
										HX_STACK_LINE(2406)
										::zpp_nape::dynamics::ZPP_InteractionFilter _this = node1->shape->filter;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2406)
										return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
									}
									return null();
								}
							};
							HX_STACK_LINE(2405)
							if (((bool((filter == null())) || bool(_Function_7_1::Block(node1,filter))))){
								HX_STACK_LINE(2407)
								::nape::phys::Body body = node1->shape->body->outer;		HX_STACK_VAR(body,"body");
								HX_STACK_LINE(2408)
								if ((!(ret->has(body)))){
									HX_STACK_LINE(2408)
									ret->push(body);
								}
							}
						}
						else{
							HX_STACK_LINE(2412)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(2412)
								this->treeStack2->add(node1->child1);
							}
							HX_STACK_LINE(2413)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(2413)
								this->treeStack2->add(node1->child2);
							}
						}
					}
				}
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2418);
						{
							HX_STACK_LINE(2418)
							::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2418)
							return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
						}
						return null();
					}
				};
				HX_STACK_LINE(2418)
				if ((_Function_4_1::Block(node,ab))){
					HX_STACK_LINE(2418)
					if (((node->child1 == null()))){
						HX_STACK_LINE(2421)
						::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2422);
								{
									HX_STACK_LINE(2422)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2422)
									return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
								}
								return null();
							}
						};
						HX_STACK_LINE(2422)
						if (((bool((filter == null())) || bool(_Function_6_1::Block(node,filter))))){
							HX_STACK_LINE(2422)
							if ((strict)){
								HX_STACK_LINE(2423)
								if ((containment)){
									HX_STACK_LINE(2424)
									if ((!(this->failed->has(body)))){
										HX_STACK_LINE(2426)
										bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(this->aabbShape->zpp_inner,node->shape);		HX_STACK_VAR(col,"col");
										HX_STACK_LINE(2427)
										if (((bool(!(ret->has(body))) && bool(col)))){
											HX_STACK_LINE(2427)
											ret->push(body);
										}
										else{
											HX_STACK_LINE(2428)
											if ((!(col))){
												HX_STACK_LINE(2429)
												ret->remove(body);
												HX_STACK_LINE(2430)
												this->failed->push(body);
											}
										}
									}
								}
								else{
									HX_STACK_LINE(2434)
									if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->aabbShape->zpp_inner))))){
										HX_STACK_LINE(2434)
										ret->push(body);
									}
								}
							}
							else{
								HX_STACK_LINE(2438)
								if ((containment)){
									HX_STACK_LINE(2439)
									if ((!(this->failed->has(body)))){
										struct _Function_10_1{
											inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2441);
												{
													HX_STACK_LINE(2441)
													::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(2441)
													return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
												}
												return null();
											}
										};
										HX_STACK_LINE(2441)
										bool col = _Function_10_1::Block(node,ab);		HX_STACK_VAR(col,"col");
										HX_STACK_LINE(2442)
										if (((bool(!(ret->has(body))) && bool(col)))){
											HX_STACK_LINE(2442)
											ret->push(body);
										}
										else{
											HX_STACK_LINE(2443)
											if ((!(col))){
												HX_STACK_LINE(2444)
												ret->remove(body);
												HX_STACK_LINE(2445)
												this->failed->push(body);
											}
										}
									}
								}
								else{
									struct _Function_9_1{
										inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2449);
											{
												HX_STACK_LINE(2449)
												::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(2449)
												return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
											}
											return null();
										}
									};
									HX_STACK_LINE(2449)
									if (((bool(!(ret->has(body))) && bool(_Function_9_1::Block(node,ab))))){
										HX_STACK_LINE(2449)
										ret->push(body);
									}
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2457)
						if (((node->child1 != null()))){
							HX_STACK_LINE(2457)
							this->treeStack->add(node->child1);
						}
						HX_STACK_LINE(2458)
						if (((node->child2 != null()))){
							HX_STACK_LINE(2458)
							this->treeStack->add(node->child2);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2465)
	this->failed->clear();
	HX_STACK_LINE(2466)
	return ret;
}


::nape::shape::ShapeList ZPP_DynAABBPhase_obj::shapesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::shapesInAABB","zpp_nape/space/DynAABBPhase.hx",2133);
	HX_STACK_THIS(this);
	HX_STACK_ARG(aabb,"aabb");
	HX_STACK_ARG(strict,"strict");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2134)
	this->sync_broadphase();
	HX_STACK_LINE(2135)
	this->updateAABBShape(aabb);
	HX_STACK_LINE(2136)
	::zpp_nape::geom::ZPP_AABB ab = this->aabbShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2137)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2138)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2141)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2141)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2142)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2143)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2144)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2145)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2153);
					{
						HX_STACK_LINE(2153)
						::zpp_nape::geom::ZPP_AABB x = node->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(2153)
						return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2153)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2153)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2156);
							{
								HX_STACK_LINE(2156)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2156)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2154)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2156)
						ret->push(node->shape->outer);
					}
				}
				else{
					HX_STACK_LINE(2162)
					if (((this->treeStack2 == null()))){
						HX_STACK_LINE(2162)
						this->treeStack2 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
					}
					HX_STACK_LINE(2165)
					this->treeStack2->add(node);
					HX_STACK_LINE(2166)
					while((!(((this->treeStack2->head == null()))))){
						HX_STACK_LINE(2167)
						::zpp_nape::space::ZPP_AABBNode node1 = this->treeStack2->pop_unsafe();		HX_STACK_VAR(node1,"node1");
						HX_STACK_LINE(2168)
						if (((node1->child1 == null()))){
							struct _Function_7_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2169);
									{
										HX_STACK_LINE(2169)
										::zpp_nape::dynamics::ZPP_InteractionFilter _this = node1->shape->filter;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2169)
										return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
									}
									return null();
								}
							};
							HX_STACK_LINE(2168)
							if (((bool((filter == null())) || bool(_Function_7_1::Block(node1,filter))))){
								HX_STACK_LINE(2169)
								ret->push(node1->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(2174)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(2174)
								this->treeStack2->add(node1->child1);
							}
							HX_STACK_LINE(2175)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(2175)
								this->treeStack2->add(node1->child2);
							}
						}
					}
				}
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2180);
						{
							HX_STACK_LINE(2180)
							::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2180)
							return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
						}
						return null();
					}
				};
				HX_STACK_LINE(2180)
				if ((_Function_4_1::Block(node,ab))){
					HX_STACK_LINE(2180)
					if (((node->child1 == null()))){
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2183);
								{
									HX_STACK_LINE(2183)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2183)
									return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
								}
								return null();
							}
						};
						HX_STACK_LINE(2181)
						if (((bool((filter == null())) || bool(_Function_6_1::Block(node,filter))))){
							HX_STACK_LINE(2183)
							if ((strict)){
								HX_STACK_LINE(2184)
								if ((containment)){
									HX_STACK_LINE(2185)
									if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(this->aabbShape->zpp_inner,node->shape))){
										HX_STACK_LINE(2186)
										ret->push(node->shape->outer);
									}
								}
								else{
									struct _Function_9_1{
										inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2189);
											{
												HX_STACK_LINE(2189)
												::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(2189)
												return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
											}
											return null();
										}
									};
									HX_STACK_LINE(2188)
									if ((_Function_9_1::Block(node,ab))){
										HX_STACK_LINE(2189)
										ret->push(node->shape->outer);
									}
									else{
										HX_STACK_LINE(2190)
										if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->aabbShape->zpp_inner))){
											HX_STACK_LINE(2190)
											ret->push(node->shape->outer);
										}
									}
								}
							}
							else{
								struct _Function_8_1{
									inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2193);
										{
											HX_STACK_LINE(2193)
											::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(2193)
											return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
										}
										return null();
									}
								};
								HX_STACK_LINE(2193)
								if (((bool(!(containment)) || bool(_Function_8_1::Block(node,ab))))){
									HX_STACK_LINE(2193)
									ret->push(node->shape->outer);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2198)
						if (((node->child1 != null()))){
							HX_STACK_LINE(2198)
							this->treeStack->add(node->child1);
						}
						HX_STACK_LINE(2199)
						if (((node->child2 != null()))){
							HX_STACK_LINE(2199)
							this->treeStack->add(node->child2);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2206)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2209)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2209)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2210)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2211)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2212)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2213)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2221);
					{
						HX_STACK_LINE(2221)
						::zpp_nape::geom::ZPP_AABB x = node->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(2221)
						return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2221)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2221)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2224);
							{
								HX_STACK_LINE(2224)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2224)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2222)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2224)
						ret->push(node->shape->outer);
					}
				}
				else{
					HX_STACK_LINE(2230)
					if (((this->treeStack2 == null()))){
						HX_STACK_LINE(2230)
						this->treeStack2 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
					}
					HX_STACK_LINE(2233)
					this->treeStack2->add(node);
					HX_STACK_LINE(2234)
					while((!(((this->treeStack2->head == null()))))){
						HX_STACK_LINE(2235)
						::zpp_nape::space::ZPP_AABBNode node1 = this->treeStack2->pop_unsafe();		HX_STACK_VAR(node1,"node1");
						HX_STACK_LINE(2236)
						if (((node1->child1 == null()))){
							struct _Function_7_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2237);
									{
										HX_STACK_LINE(2237)
										::zpp_nape::dynamics::ZPP_InteractionFilter _this = node1->shape->filter;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2237)
										return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
									}
									return null();
								}
							};
							HX_STACK_LINE(2236)
							if (((bool((filter == null())) || bool(_Function_7_1::Block(node1,filter))))){
								HX_STACK_LINE(2237)
								ret->push(node1->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(2242)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(2242)
								this->treeStack2->add(node1->child1);
							}
							HX_STACK_LINE(2243)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(2243)
								this->treeStack2->add(node1->child2);
							}
						}
					}
				}
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2248);
						{
							HX_STACK_LINE(2248)
							::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2248)
							return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
						}
						return null();
					}
				};
				HX_STACK_LINE(2248)
				if ((_Function_4_1::Block(node,ab))){
					HX_STACK_LINE(2248)
					if (((node->child1 == null()))){
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2251);
								{
									HX_STACK_LINE(2251)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2251)
									return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
								}
								return null();
							}
						};
						HX_STACK_LINE(2249)
						if (((bool((filter == null())) || bool(_Function_6_1::Block(node,filter))))){
							HX_STACK_LINE(2251)
							if ((strict)){
								HX_STACK_LINE(2252)
								if ((containment)){
									HX_STACK_LINE(2253)
									if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(this->aabbShape->zpp_inner,node->shape))){
										HX_STACK_LINE(2254)
										ret->push(node->shape->outer);
									}
								}
								else{
									struct _Function_9_1{
										inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2257);
											{
												HX_STACK_LINE(2257)
												::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(2257)
												return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
											}
											return null();
										}
									};
									HX_STACK_LINE(2256)
									if ((_Function_9_1::Block(node,ab))){
										HX_STACK_LINE(2257)
										ret->push(node->shape->outer);
									}
									else{
										HX_STACK_LINE(2258)
										if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->aabbShape->zpp_inner))){
											HX_STACK_LINE(2258)
											ret->push(node->shape->outer);
										}
									}
								}
							}
							else{
								struct _Function_8_1{
									inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2261);
										{
											HX_STACK_LINE(2261)
											::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(2261)
											return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
										}
										return null();
									}
								};
								HX_STACK_LINE(2261)
								if (((bool(!(containment)) || bool(_Function_8_1::Block(node,ab))))){
									HX_STACK_LINE(2261)
									ret->push(node->shape->outer);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2266)
						if (((node->child1 != null()))){
							HX_STACK_LINE(2266)
							this->treeStack->add(node->child1);
						}
						HX_STACK_LINE(2267)
						if (((node->child2 != null()))){
							HX_STACK_LINE(2267)
							this->treeStack->add(node->child2);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2274)
	return ret;
}


::nape::phys::BodyList ZPP_DynAABBPhase_obj::bodiesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::bodiesUnderPoint","zpp_nape/space/DynAABBPhase.hx",2029);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2030)
	this->sync_broadphase();
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2031);
			{
				HX_STACK_LINE(2031)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(2031)
				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2031)
				{
					HX_STACK_LINE(2031)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(2031)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(2031)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(2031)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2031)
						ret->next = null();
					}
					HX_STACK_LINE(2031)
					ret->weak = false;
				}
				HX_STACK_LINE(2031)
				ret->_immutable = immutable;
				HX_STACK_LINE(2031)
				{
					HX_STACK_LINE(2031)
					ret->x = x;
					HX_STACK_LINE(2031)
					ret->y = y;
					HX_STACK_LINE(2031)
					{
					}
					HX_STACK_LINE(2031)
					{
					}
				}
				HX_STACK_LINE(2031)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2031)
	::zpp_nape::geom::ZPP_Vec2 v = _Function_1_1::Block(x,y);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(2032)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2033)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2036)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2036)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2037)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2038)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2039)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2040)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2048);
					{
						HX_STACK_LINE(2048)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2048)
						return (bool((bool((bool((v->x >= _this->minx)) && bool((v->x <= _this->maxx)))) && bool((v->y >= _this->miny)))) && bool((v->y <= _this->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2048)
			if ((_Function_3_1::Block(node,v))){
				HX_STACK_LINE(2048)
				if (((node->child1 == null()))){
					HX_STACK_LINE(2051)
					::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
					HX_STACK_LINE(2052)
					if ((!(ret->has(body)))){
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2053);
								{
									HX_STACK_LINE(2053)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2053)
									return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
								}
								return null();
							}
						};
						HX_STACK_LINE(2052)
						if (((bool((filter == null())) || bool(_Function_6_1::Block(node,filter))))){
							HX_STACK_LINE(2053)
							if (((node->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(2054)
								if ((::zpp_nape::geom::ZPP_Collide_obj::circleContains(node->shape->circle,v))){
									HX_STACK_LINE(2055)
									ret->push(body);
								}
							}
							else{
								HX_STACK_LINE(2057)
								if ((::zpp_nape::geom::ZPP_Collide_obj::polyContains(node->shape->polygon,v))){
									HX_STACK_LINE(2058)
									ret->push(body);
								}
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2065)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2065)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2066)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2066)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2073)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2076)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2076)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2077)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2078)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2079)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2080)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2088);
					{
						HX_STACK_LINE(2088)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2088)
						return (bool((bool((bool((v->x >= _this->minx)) && bool((v->x <= _this->maxx)))) && bool((v->y >= _this->miny)))) && bool((v->y <= _this->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2088)
			if ((_Function_3_1::Block(node,v))){
				HX_STACK_LINE(2088)
				if (((node->child1 == null()))){
					HX_STACK_LINE(2091)
					::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
					HX_STACK_LINE(2092)
					if ((!(ret->has(body)))){
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2093);
								{
									HX_STACK_LINE(2093)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2093)
									return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
								}
								return null();
							}
						};
						HX_STACK_LINE(2092)
						if (((bool((filter == null())) || bool(_Function_6_1::Block(node,filter))))){
							HX_STACK_LINE(2093)
							if (((node->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(2094)
								if ((::zpp_nape::geom::ZPP_Collide_obj::circleContains(node->shape->circle,v))){
									HX_STACK_LINE(2095)
									ret->push(body);
								}
							}
							else{
								HX_STACK_LINE(2097)
								if ((::zpp_nape::geom::ZPP_Collide_obj::polyContains(node->shape->polygon,v))){
									HX_STACK_LINE(2098)
									ret->push(body);
								}
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2105)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2105)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2106)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2106)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2113)
	{
		HX_STACK_LINE(2114)
		::zpp_nape::geom::ZPP_Vec2 o = v;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2115)
		{
		}
		HX_STACK_LINE(2123)
		{
			HX_STACK_LINE(2123)
			if (((o->outer != null()))){
				HX_STACK_LINE(2123)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(2123)
				o->outer = null();
			}
			HX_STACK_LINE(2123)
			o->_isimmutable = null();
			HX_STACK_LINE(2123)
			o->_validate = null();
			HX_STACK_LINE(2123)
			o->_invalidate = null();
		}
		HX_STACK_LINE(2124)
		o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(2125)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2130)
	return ret;
}


::nape::shape::ShapeList ZPP_DynAABBPhase_obj::shapesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::shapesUnderPoint","zpp_nape/space/DynAABBPhase.hx",1932);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(1933)
	this->sync_broadphase();
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1934);
			{
				HX_STACK_LINE(1934)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1934)
				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1934)
				{
					HX_STACK_LINE(1934)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(1934)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(1934)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1934)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1934)
						ret->next = null();
					}
					HX_STACK_LINE(1934)
					ret->weak = false;
				}
				HX_STACK_LINE(1934)
				ret->_immutable = immutable;
				HX_STACK_LINE(1934)
				{
					HX_STACK_LINE(1934)
					ret->x = x;
					HX_STACK_LINE(1934)
					ret->y = y;
					HX_STACK_LINE(1934)
					{
					}
					HX_STACK_LINE(1934)
					{
					}
				}
				HX_STACK_LINE(1934)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1934)
	::zpp_nape::geom::ZPP_Vec2 v = _Function_1_1::Block(x,y);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(1935)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1936)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(1939)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(1939)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(1940)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(1941)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(1942)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(1943)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1951);
					{
						HX_STACK_LINE(1951)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1951)
						return (bool((bool((bool((v->x >= _this->minx)) && bool((v->x <= _this->maxx)))) && bool((v->y >= _this->miny)))) && bool((v->y <= _this->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(1951)
			if ((_Function_3_1::Block(node,v))){
				HX_STACK_LINE(1951)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1954);
							{
								HX_STACK_LINE(1954)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1954)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(1952)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(1954)
						if (((node->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
							HX_STACK_LINE(1955)
							if ((::zpp_nape::geom::ZPP_Collide_obj::circleContains(node->shape->circle,v))){
								HX_STACK_LINE(1956)
								ret->push(node->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(1958)
							if ((::zpp_nape::geom::ZPP_Collide_obj::polyContains(node->shape->polygon,v))){
								HX_STACK_LINE(1959)
								ret->push(node->shape->outer);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(1965)
					if (((node->child1 != null()))){
						HX_STACK_LINE(1965)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(1966)
					if (((node->child2 != null()))){
						HX_STACK_LINE(1966)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1973)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(1976)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(1976)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(1977)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(1978)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(1979)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(1980)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1988);
					{
						HX_STACK_LINE(1988)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1988)
						return (bool((bool((bool((v->x >= _this->minx)) && bool((v->x <= _this->maxx)))) && bool((v->y >= _this->miny)))) && bool((v->y <= _this->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(1988)
			if ((_Function_3_1::Block(node,v))){
				HX_STACK_LINE(1988)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1991);
							{
								HX_STACK_LINE(1991)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1991)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(1989)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(1991)
						if (((node->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
							HX_STACK_LINE(1992)
							if ((::zpp_nape::geom::ZPP_Collide_obj::circleContains(node->shape->circle,v))){
								HX_STACK_LINE(1993)
								ret->push(node->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(1995)
							if ((::zpp_nape::geom::ZPP_Collide_obj::polyContains(node->shape->polygon,v))){
								HX_STACK_LINE(1996)
								ret->push(node->shape->outer);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2002)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2002)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2003)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2003)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2010)
	{
		HX_STACK_LINE(2011)
		::zpp_nape::geom::ZPP_Vec2 o = v;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2012)
		{
		}
		HX_STACK_LINE(2020)
		{
			HX_STACK_LINE(2020)
			if (((o->outer != null()))){
				HX_STACK_LINE(2020)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(2020)
				o->outer = null();
			}
			HX_STACK_LINE(2020)
			o->_isimmutable = null();
			HX_STACK_LINE(2020)
			o->_validate = null();
			HX_STACK_LINE(2020)
			o->_invalidate = null();
		}
		HX_STACK_LINE(2021)
		o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(2022)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2027)
	return ret;
}


Void ZPP_DynAABBPhase_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_DynAABBPhase::clear","zpp_nape/space/DynAABBPhase.hx",1882);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1883)
		while(((this->syncs != null()))){
			HX_STACK_LINE(1884)
			::zpp_nape::space::ZPP_AABBNode next = this->syncs->snext;		HX_STACK_VAR(next,"next");
			HX_STACK_LINE(1885)
			this->syncs->snext = null();
			HX_STACK_LINE(1886)
			if ((this->syncs->first_sync)){
				HX_STACK_LINE(1887)
				this->syncs->shape->node = null();
				HX_STACK_LINE(1888)
				this->syncs->shape->removedFromSpace();
				HX_STACK_LINE(1889)
				this->syncs->shape = null();
			}
			HX_STACK_LINE(1891)
			this->syncs = next;
		}
		HX_STACK_LINE(1893)
		while(((this->moves != null()))){
			HX_STACK_LINE(1894)
			::zpp_nape::space::ZPP_AABBNode next = this->moves->mnext;		HX_STACK_VAR(next,"next");
			HX_STACK_LINE(1895)
			this->moves->mnext = null();
			HX_STACK_LINE(1896)
			if ((this->moves->first_sync)){
				HX_STACK_LINE(1897)
				this->moves->shape->node = null();
				HX_STACK_LINE(1898)
				this->moves->shape->removedFromSpace();
				HX_STACK_LINE(1899)
				this->moves->shape = null();
			}
			HX_STACK_LINE(1901)
			this->moves = next;
		}
		HX_STACK_LINE(1903)
		while(((this->pairs != null()))){
			HX_STACK_LINE(1904)
			::zpp_nape::space::ZPP_AABBPair nxt = this->pairs->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1905)
			if (((this->pairs->arb != null()))){
				HX_STACK_LINE(1905)
				this->pairs->arb->pair = null();
			}
			HX_STACK_LINE(1906)
			this->pairs->arb = null();
			HX_STACK_LINE(1907)
			{
				HX_STACK_LINE(1907)
				::zpp_nape::util::ZNPList_ZPP_AABBPair _this = this->pairs->n1->shape->pairs;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::space::ZPP_AABBPair obj = this->pairs;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1907)
				{
				}
				HX_STACK_LINE(1907)
				{
					HX_STACK_LINE(1907)
					{
					}
					HX_STACK_LINE(1907)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(1907)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = _this->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1907)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1907)
					while(((cur != null()))){
						HX_STACK_LINE(1907)
						if (((cur->elt == obj))){
							HX_STACK_LINE(1907)
							{
								HX_STACK_LINE(1907)
								{
								}
								HX_STACK_LINE(1907)
								::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(1907)
								::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1907)
								if (((pre == null()))){
									HX_STACK_LINE(1907)
									old = _this->head;
									HX_STACK_LINE(1907)
									ret1 = old->next;
									HX_STACK_LINE(1907)
									_this->head = ret1;
									HX_STACK_LINE(1907)
									if (((_this->head == null()))){
										HX_STACK_LINE(1907)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(1907)
									old = pre->next;
									HX_STACK_LINE(1907)
									ret1 = old->next;
									HX_STACK_LINE(1907)
									pre->next = ret1;
									HX_STACK_LINE(1907)
									if (((ret1 == null()))){
										HX_STACK_LINE(1907)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(1907)
								{
								}
								HX_STACK_LINE(1907)
								{
									HX_STACK_LINE(1907)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1907)
									{
									}
									HX_STACK_LINE(1907)
									o->elt = null();
									HX_STACK_LINE(1907)
									o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
									HX_STACK_LINE(1907)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1907)
								_this->modified = true;
								HX_STACK_LINE(1907)
								(_this->length)--;
								HX_STACK_LINE(1907)
								_this->pushmod = true;
								HX_STACK_LINE(1907)
								ret1;
							}
							HX_STACK_LINE(1907)
							ret = true;
							HX_STACK_LINE(1907)
							break;
						}
						HX_STACK_LINE(1907)
						pre = cur;
						HX_STACK_LINE(1907)
						cur = cur->next;
					}
					HX_STACK_LINE(1907)
					ret;
				}
			}
			HX_STACK_LINE(1908)
			{
				HX_STACK_LINE(1908)
				::zpp_nape::util::ZNPList_ZPP_AABBPair _this = this->pairs->n2->shape->pairs;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::space::ZPP_AABBPair obj = this->pairs;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1908)
				{
				}
				HX_STACK_LINE(1908)
				{
					HX_STACK_LINE(1908)
					{
					}
					HX_STACK_LINE(1908)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(1908)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = _this->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1908)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1908)
					while(((cur != null()))){
						HX_STACK_LINE(1908)
						if (((cur->elt == obj))){
							HX_STACK_LINE(1908)
							{
								HX_STACK_LINE(1908)
								{
								}
								HX_STACK_LINE(1908)
								::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(1908)
								::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1908)
								if (((pre == null()))){
									HX_STACK_LINE(1908)
									old = _this->head;
									HX_STACK_LINE(1908)
									ret1 = old->next;
									HX_STACK_LINE(1908)
									_this->head = ret1;
									HX_STACK_LINE(1908)
									if (((_this->head == null()))){
										HX_STACK_LINE(1908)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(1908)
									old = pre->next;
									HX_STACK_LINE(1908)
									ret1 = old->next;
									HX_STACK_LINE(1908)
									pre->next = ret1;
									HX_STACK_LINE(1908)
									if (((ret1 == null()))){
										HX_STACK_LINE(1908)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(1908)
								{
								}
								HX_STACK_LINE(1908)
								{
									HX_STACK_LINE(1908)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1908)
									{
									}
									HX_STACK_LINE(1908)
									o->elt = null();
									HX_STACK_LINE(1908)
									o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
									HX_STACK_LINE(1908)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1908)
								_this->modified = true;
								HX_STACK_LINE(1908)
								(_this->length)--;
								HX_STACK_LINE(1908)
								_this->pushmod = true;
								HX_STACK_LINE(1908)
								ret1;
							}
							HX_STACK_LINE(1908)
							ret = true;
							HX_STACK_LINE(1908)
							break;
						}
						HX_STACK_LINE(1908)
						pre = cur;
						HX_STACK_LINE(1908)
						cur = cur->next;
					}
					HX_STACK_LINE(1908)
					ret;
				}
			}
			HX_STACK_LINE(1909)
			{
				HX_STACK_LINE(1910)
				::zpp_nape::space::ZPP_AABBPair o = this->pairs;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1911)
				{
				}
				HX_STACK_LINE(1919)
				{
					HX_STACK_LINE(1919)
					{
					}
					HX_STACK_LINE(1919)
					o->n1 = o->n2 = null();
					HX_STACK_LINE(1919)
					o->sleeping = false;
				}
				HX_STACK_LINE(1920)
				o->next = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(1921)
				::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1926)
			this->pairs = nxt;
		}
		HX_STACK_LINE(1928)
		this->dtree->clear();
		HX_STACK_LINE(1929)
		this->stree->clear();
	}
return null();
}


Void ZPP_DynAABBPhase_obj::broadphase( ::zpp_nape::space::ZPP_Space space,bool discrete){
{
		HX_STACK_PUSH("ZPP_DynAABBPhase::broadphase","zpp_nape/space/DynAABBPhase.hx",1106);
		HX_STACK_THIS(this);
		HX_STACK_ARG(space,"space");
		HX_STACK_ARG(discrete,"discrete");
		HX_STACK_LINE(1107)
		::zpp_nape::space::ZPP_AABBNode node = this->syncs;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1108)
		while(((node != null()))){
			HX_STACK_LINE(1109)
			{
				HX_STACK_LINE(1110)
				::zpp_nape::shape::ZPP_Shape shape = node->shape;		HX_STACK_VAR(shape,"shape");
				HX_STACK_LINE(1111)
				{
				}
				HX_STACK_LINE(1119)
				{
				}
				HX_STACK_LINE(1127)
				if ((!(node->first_sync))){
					HX_STACK_LINE(1128)
					::zpp_nape::space::ZPP_AABBTree tree = (  ((node->dyn)) ? ::zpp_nape::space::ZPP_AABBTree(this->dtree) : ::zpp_nape::space::ZPP_AABBTree(this->stree) );		HX_STACK_VAR(tree,"tree");
					HX_STACK_LINE(1129)
					if (((node == tree->root))){
						HX_STACK_LINE(1129)
						tree->root = null();
						HX_STACK_LINE(1129)
						Dynamic();
					}
					else{
						HX_STACK_LINE(1129)
						::zpp_nape::space::ZPP_AABBNode parent = node->parent;		HX_STACK_VAR(parent,"parent");
						HX_STACK_LINE(1129)
						::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
						HX_STACK_LINE(1129)
						::zpp_nape::space::ZPP_AABBNode sibling = (  (((parent->child1 == node))) ? ::zpp_nape::space::ZPP_AABBNode(parent->child2) : ::zpp_nape::space::ZPP_AABBNode(parent->child1) );		HX_STACK_VAR(sibling,"sibling");
						HX_STACK_LINE(1129)
						if (((gparent != null()))){
							HX_STACK_LINE(1129)
							if (((gparent->child1 == parent))){
								HX_STACK_LINE(1129)
								gparent->child1 = sibling;
							}
							else{
								HX_STACK_LINE(1129)
								gparent->child2 = sibling;
							}
							HX_STACK_LINE(1129)
							sibling->parent = gparent;
							HX_STACK_LINE(1129)
							{
								HX_STACK_LINE(1129)
								::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1129)
								{
								}
								HX_STACK_LINE(1129)
								{
									HX_STACK_LINE(1129)
									o->height = (int)-1;
									HX_STACK_LINE(1129)
									{
										HX_STACK_LINE(1129)
										::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
										HX_STACK_LINE(1129)
										{
										}
										HX_STACK_LINE(1129)
										{
											HX_STACK_LINE(1129)
											if (((o1->outer != null()))){
												HX_STACK_LINE(1129)
												o1->outer->zpp_inner = null();
												HX_STACK_LINE(1129)
												o1->outer = null();
											}
											HX_STACK_LINE(1129)
											o1->wrap_min = o1->wrap_max = null();
											HX_STACK_LINE(1129)
											o1->_invalidate = null();
											HX_STACK_LINE(1129)
											o1->_validate = null();
										}
										HX_STACK_LINE(1129)
										o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
										HX_STACK_LINE(1129)
										::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
									}
									HX_STACK_LINE(1129)
									o->child1 = o->child2 = o->parent = null();
									HX_STACK_LINE(1129)
									o->next = null();
									HX_STACK_LINE(1129)
									o->snext = null();
									HX_STACK_LINE(1129)
									o->mnext = null();
								}
								HX_STACK_LINE(1129)
								o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
								HX_STACK_LINE(1129)
								::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1129)
							::zpp_nape::space::ZPP_AABBNode node1 = gparent;		HX_STACK_VAR(node1,"node1");
							HX_STACK_LINE(1129)
							while(((node1 != null()))){
								struct _Function_7_1{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1129);
										{
											HX_STACK_LINE(1129)
											::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1129)
											::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(1129)
											int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
											struct _Function_8_1{
												inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1129);
													{
														HX_STACK_LINE(1129)
														::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1129)
														::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1129)
														c->child1 = node1;
														HX_STACK_LINE(1129)
														c->parent = node1->parent;
														HX_STACK_LINE(1129)
														node1->parent = c;
														HX_STACK_LINE(1129)
														if (((c->parent != null()))){
															HX_STACK_LINE(1129)
															if (((c->parent->child1 == node1))){
																HX_STACK_LINE(1129)
																c->parent->child1 = c;
															}
															else{
																HX_STACK_LINE(1129)
																c->parent->child2 = c;
															}
														}
														else{
															HX_STACK_LINE(1129)
															tree->root = c;
														}
														HX_STACK_LINE(1129)
														if (((f->height > g->height))){
															HX_STACK_LINE(1129)
															c->child2 = f;
															HX_STACK_LINE(1129)
															node1->child2 = g;
															HX_STACK_LINE(1129)
															g->parent = node1;
															HX_STACK_LINE(1129)
															{
																HX_STACK_LINE(1129)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1129)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1129)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1129)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1129)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1129)
															{
																HX_STACK_LINE(1129)
																::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1129)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1129)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1129)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1129)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1129);
																	{
																		HX_STACK_LINE(1129)
																		int x = b->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1129)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1129)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1129)
															node1->height = ((int)1 + _Function_10_1::Block(b,g));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1129);
																	{
																		HX_STACK_LINE(1129)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1129)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1129)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1129)
															c->height = ((int)1 + _Function_10_2::Block(node1,f));
														}
														else{
															HX_STACK_LINE(1129)
															c->child2 = g;
															HX_STACK_LINE(1129)
															node1->child2 = f;
															HX_STACK_LINE(1129)
															f->parent = node1;
															HX_STACK_LINE(1129)
															{
																HX_STACK_LINE(1129)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1129)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1129)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1129)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1129)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1129)
															{
																HX_STACK_LINE(1129)
																::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1129)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1129)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1129)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1129)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1129);
																	{
																		HX_STACK_LINE(1129)
																		int x = b->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1129)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1129)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1129)
															node1->height = ((int)1 + _Function_10_1::Block(b,f));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1129);
																	{
																		HX_STACK_LINE(1129)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1129)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1129)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1129)
															c->height = ((int)1 + _Function_10_2::Block(node1,g));
														}
														HX_STACK_LINE(1129)
														return c;
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree,::zpp_nape::space::ZPP_AABBNode &c){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1129);
													{
														HX_STACK_LINE(1129)
														::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1129)
														::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1129)
														b->child1 = node1;
														HX_STACK_LINE(1129)
														b->parent = node1->parent;
														HX_STACK_LINE(1129)
														node1->parent = b;
														HX_STACK_LINE(1129)
														if (((b->parent != null()))){
															HX_STACK_LINE(1129)
															if (((b->parent->child1 == node1))){
																HX_STACK_LINE(1129)
																b->parent->child1 = b;
															}
															else{
																HX_STACK_LINE(1129)
																b->parent->child2 = b;
															}
														}
														else{
															HX_STACK_LINE(1129)
															tree->root = b;
														}
														HX_STACK_LINE(1129)
														if (((f->height > g->height))){
															HX_STACK_LINE(1129)
															b->child2 = f;
															HX_STACK_LINE(1129)
															node1->child1 = g;
															HX_STACK_LINE(1129)
															g->parent = node1;
															HX_STACK_LINE(1129)
															{
																HX_STACK_LINE(1129)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1129)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1129)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1129)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1129)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1129)
															{
																HX_STACK_LINE(1129)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1129)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1129)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1129)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1129)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1129);
																	{
																		HX_STACK_LINE(1129)
																		int x = c->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1129)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1129)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1129)
															node1->height = ((int)1 + _Function_10_1::Block(c,g));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1129);
																	{
																		HX_STACK_LINE(1129)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1129)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1129)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1129)
															b->height = ((int)1 + _Function_10_2::Block(node1,f));
														}
														else{
															HX_STACK_LINE(1129)
															b->child2 = g;
															HX_STACK_LINE(1129)
															node1->child1 = f;
															HX_STACK_LINE(1129)
															f->parent = node1;
															HX_STACK_LINE(1129)
															{
																HX_STACK_LINE(1129)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1129)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1129)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1129)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1129)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1129)
															{
																HX_STACK_LINE(1129)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1129)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1129)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1129)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1129)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1129);
																	{
																		HX_STACK_LINE(1129)
																		int x = c->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1129)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1129)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1129)
															node1->height = ((int)1 + _Function_10_1::Block(c,f));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1129);
																	{
																		HX_STACK_LINE(1129)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1129)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1129)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1129)
															b->height = ((int)1 + _Function_10_2::Block(node1,g));
														}
														HX_STACK_LINE(1129)
														return b;
													}
													return null();
												}
											};
											HX_STACK_LINE(1129)
											return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_8_1::Block(b,c,node1,tree)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_8_2::Block(b,node1,tree,c)) : ::zpp_nape::space::ZPP_AABBNode(node1) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1129)
								node1 = (  (((bool((node1->child1 == null())) || bool((node1->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node1) : ::zpp_nape::space::ZPP_AABBNode(_Function_7_1::Block(node1,tree)) );
								HX_STACK_LINE(1129)
								::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
								HX_STACK_LINE(1129)
								::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
								HX_STACK_LINE(1129)
								{
									HX_STACK_LINE(1129)
									::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
									::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
									::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1129)
									_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
									HX_STACK_LINE(1129)
									_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
									HX_STACK_LINE(1129)
									_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
									HX_STACK_LINE(1129)
									_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
								}
								struct _Function_7_2{
									inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1129);
										{
											HX_STACK_LINE(1129)
											int x = child1->height;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(1129)
											int y = child2->height;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(1129)
											return (  (((x > y))) ? int(x) : int(y) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1129)
								node1->height = ((int)1 + _Function_7_2::Block(child1,child2));
								HX_STACK_LINE(1129)
								node1 = node1->parent;
							}
						}
						else{
							HX_STACK_LINE(1129)
							tree->root = sibling;
							HX_STACK_LINE(1129)
							sibling->parent = null();
							HX_STACK_LINE(1129)
							{
								HX_STACK_LINE(1129)
								::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1129)
								{
								}
								HX_STACK_LINE(1129)
								{
									HX_STACK_LINE(1129)
									o->height = (int)-1;
									HX_STACK_LINE(1129)
									{
										HX_STACK_LINE(1129)
										::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
										HX_STACK_LINE(1129)
										{
										}
										HX_STACK_LINE(1129)
										{
											HX_STACK_LINE(1129)
											if (((o1->outer != null()))){
												HX_STACK_LINE(1129)
												o1->outer->zpp_inner = null();
												HX_STACK_LINE(1129)
												o1->outer = null();
											}
											HX_STACK_LINE(1129)
											o1->wrap_min = o1->wrap_max = null();
											HX_STACK_LINE(1129)
											o1->_invalidate = null();
											HX_STACK_LINE(1129)
											o1->_validate = null();
										}
										HX_STACK_LINE(1129)
										o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
										HX_STACK_LINE(1129)
										::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
									}
									HX_STACK_LINE(1129)
									o->child1 = o->child2 = o->parent = null();
									HX_STACK_LINE(1129)
									o->next = null();
									HX_STACK_LINE(1129)
									o->snext = null();
									HX_STACK_LINE(1129)
									o->mnext = null();
								}
								HX_STACK_LINE(1129)
								o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
								HX_STACK_LINE(1129)
								::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(1131)
					node->first_sync = false;
				}
				HX_STACK_LINE(1132)
				::zpp_nape::geom::ZPP_AABB aabb = node->aabb;		HX_STACK_VAR(aabb,"aabb");
				HX_STACK_LINE(1133)
				if ((!(space->continuous))){
					HX_STACK_LINE(1133)
					if ((shape->zip_aabb)){
						HX_STACK_LINE(1133)
						if (((shape->body != null()))){
							HX_STACK_LINE(1133)
							shape->zip_aabb = false;
							HX_STACK_LINE(1133)
							if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(1133)
								::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1133)
								if ((_this->zip_worldCOM)){
									HX_STACK_LINE(1133)
									if (((_this->body != null()))){
										HX_STACK_LINE(1133)
										_this->zip_worldCOM = false;
										HX_STACK_LINE(1133)
										if ((_this->zip_localCOM)){
											HX_STACK_LINE(1133)
											_this->zip_localCOM = false;
											HX_STACK_LINE(1133)
											if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
												HX_STACK_LINE(1133)
												::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1133)
												if (((_this1->lverts->next == null()))){
													HX_STACK_LINE(1133)
													hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
												}
												HX_STACK_LINE(1133)
												if (((_this1->lverts->next->next == null()))){
													HX_STACK_LINE(1133)
													_this1->localCOMx = _this1->lverts->next->x;
													HX_STACK_LINE(1133)
													_this1->localCOMy = _this1->lverts->next->y;
													HX_STACK_LINE(1133)
													{
													}
													HX_STACK_LINE(1133)
													Dynamic();
												}
												else{
													HX_STACK_LINE(1133)
													if (((_this1->lverts->next->next->next == null()))){
														HX_STACK_LINE(1133)
														{
															HX_STACK_LINE(1133)
															_this1->localCOMx = _this1->lverts->next->x;
															HX_STACK_LINE(1133)
															_this1->localCOMy = _this1->lverts->next->y;
															HX_STACK_LINE(1133)
															{
															}
															HX_STACK_LINE(1133)
															{
															}
														}
														HX_STACK_LINE(1133)
														{
															HX_STACK_LINE(1133)
															Float t = 1.0;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(1133)
															{
															}
															HX_STACK_LINE(1133)
															hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
															HX_STACK_LINE(1133)
															hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
														}
														HX_STACK_LINE(1133)
														{
															HX_STACK_LINE(1133)
															Float t = 0.5;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(1133)
															{
															}
															HX_STACK_LINE(1133)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(1133)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
													else{
														HX_STACK_LINE(1133)
														{
															HX_STACK_LINE(1133)
															_this1->localCOMx = (int)0;
															HX_STACK_LINE(1133)
															_this1->localCOMy = (int)0;
															HX_STACK_LINE(1133)
															{
															}
															HX_STACK_LINE(1133)
															{
															}
														}
														HX_STACK_LINE(1133)
														Float area = 0.0;		HX_STACK_VAR(area,"area");
														HX_STACK_LINE(1133)
														{
															HX_STACK_LINE(1133)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(1133)
															::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
															HX_STACK_LINE(1133)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(1133)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(1133)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(1133)
															while(((cx_ite != null()))){
																HX_STACK_LINE(1133)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(1133)
																{
																	HX_STACK_LINE(1133)
																	hx::AddEq(area,(v->x * ((w->y - u->y))));
																	HX_STACK_LINE(1133)
																	Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1133)
																	hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																	HX_STACK_LINE(1133)
																	hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																}
																HX_STACK_LINE(1133)
																u = v;
																HX_STACK_LINE(1133)
																v = w;
																HX_STACK_LINE(1133)
																cx_ite = cx_ite->next;
															}
															HX_STACK_LINE(1133)
															cx_ite = _this1->lverts->next;
															HX_STACK_LINE(1133)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(1133)
															{
																HX_STACK_LINE(1133)
																hx::AddEq(area,(v->x * ((w->y - u->y))));
																HX_STACK_LINE(1133)
																Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(1133)
																hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																HX_STACK_LINE(1133)
																hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
															}
															HX_STACK_LINE(1133)
															u = v;
															HX_STACK_LINE(1133)
															v = w;
															HX_STACK_LINE(1133)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(1133)
															::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
															HX_STACK_LINE(1133)
															{
																HX_STACK_LINE(1133)
																hx::AddEq(area,(v->x * ((w1->y - u->y))));
																HX_STACK_LINE(1133)
																Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(1133)
																hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																HX_STACK_LINE(1133)
																hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
															}
														}
														HX_STACK_LINE(1133)
														area = (Float((int)1) / Float((((int)3 * area))));
														HX_STACK_LINE(1133)
														{
															HX_STACK_LINE(1133)
															Float t = area;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(1133)
															{
															}
															HX_STACK_LINE(1133)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(1133)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
												}
											}
										}
										HX_STACK_LINE(1133)
										{
											HX_STACK_LINE(1133)
											::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1133)
											if ((_this1->zip_axis)){
												HX_STACK_LINE(1133)
												_this1->zip_axis = false;
												HX_STACK_LINE(1133)
												{
													HX_STACK_LINE(1133)
													_this1->axisx = ::Math_obj::sin(_this1->rot);
													HX_STACK_LINE(1133)
													_this1->axisy = ::Math_obj::cos(_this1->rot);
													HX_STACK_LINE(1133)
													{
													}
													HX_STACK_LINE(1133)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(1133)
										{
											HX_STACK_LINE(1133)
											_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
											HX_STACK_LINE(1133)
											_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
										}
									}
								}
								HX_STACK_LINE(1133)
								Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
								HX_STACK_LINE(1133)
								Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
								HX_STACK_LINE(1133)
								{
								}
								HX_STACK_LINE(1133)
								{
								}
								HX_STACK_LINE(1133)
								{
									HX_STACK_LINE(1133)
									_this->aabb->minx = (_this->worldCOMx - rx);
									HX_STACK_LINE(1133)
									_this->aabb->miny = (_this->worldCOMy - ry);
								}
								HX_STACK_LINE(1133)
								{
									HX_STACK_LINE(1133)
									_this->aabb->maxx = (_this->worldCOMx + rx);
									HX_STACK_LINE(1133)
									_this->aabb->maxy = (_this->worldCOMy + ry);
								}
							}
							else{
								HX_STACK_LINE(1133)
								::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1133)
								if ((_this->zip_gverts)){
									HX_STACK_LINE(1133)
									if (((_this->body != null()))){
										HX_STACK_LINE(1133)
										_this->zip_gverts = false;
										HX_STACK_LINE(1133)
										_this->validate_lverts();
										HX_STACK_LINE(1133)
										{
											HX_STACK_LINE(1133)
											::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1133)
											if ((_this1->zip_axis)){
												HX_STACK_LINE(1133)
												_this1->zip_axis = false;
												HX_STACK_LINE(1133)
												{
													HX_STACK_LINE(1133)
													_this1->axisx = ::Math_obj::sin(_this1->rot);
													HX_STACK_LINE(1133)
													_this1->axisy = ::Math_obj::cos(_this1->rot);
													HX_STACK_LINE(1133)
													{
													}
													HX_STACK_LINE(1133)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(1133)
										::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
										HX_STACK_LINE(1133)
										{
											HX_STACK_LINE(1133)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(1133)
											while(((cx_ite != null()))){
												HX_STACK_LINE(1133)
												::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(1133)
												{
													HX_STACK_LINE(1133)
													::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
													HX_STACK_LINE(1133)
													li = li->next;
													HX_STACK_LINE(1133)
													{
														HX_STACK_LINE(1133)
														g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
														HX_STACK_LINE(1133)
														g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
													}
												}
												HX_STACK_LINE(1133)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
								HX_STACK_LINE(1133)
								if (((_this->lverts->next == null()))){
									HX_STACK_LINE(1133)
									hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
								}
								HX_STACK_LINE(1133)
								::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
								HX_STACK_LINE(1133)
								{
									HX_STACK_LINE(1133)
									_this->aabb->minx = p0->x;
									HX_STACK_LINE(1133)
									_this->aabb->miny = p0->y;
									HX_STACK_LINE(1133)
									{
									}
									HX_STACK_LINE(1133)
									{
									}
								}
								HX_STACK_LINE(1133)
								{
									HX_STACK_LINE(1133)
									_this->aabb->maxx = p0->x;
									HX_STACK_LINE(1133)
									_this->aabb->maxy = p0->y;
									HX_STACK_LINE(1133)
									{
									}
									HX_STACK_LINE(1133)
									{
									}
								}
								HX_STACK_LINE(1133)
								{
									HX_STACK_LINE(1133)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1133)
									while(((cx_ite != null()))){
										HX_STACK_LINE(1133)
										::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1133)
										{
											HX_STACK_LINE(1133)
											if (((p->x < _this->aabb->minx))){
												HX_STACK_LINE(1133)
												_this->aabb->minx = p->x;
											}
											HX_STACK_LINE(1133)
											if (((p->x > _this->aabb->maxx))){
												HX_STACK_LINE(1133)
												_this->aabb->maxx = p->x;
											}
											HX_STACK_LINE(1133)
											if (((p->y < _this->aabb->miny))){
												HX_STACK_LINE(1133)
												_this->aabb->miny = p->y;
											}
											HX_STACK_LINE(1133)
											if (((p->y > _this->aabb->maxy))){
												HX_STACK_LINE(1133)
												_this->aabb->maxy = p->y;
											}
										}
										HX_STACK_LINE(1133)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(1134)
				{
					HX_STACK_LINE(1134)
					::zpp_nape::geom::ZPP_AABB a = shape->aabb;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1134)
					aabb->minx = (a->minx - 3.0);
					HX_STACK_LINE(1134)
					aabb->miny = (a->miny - 3.0);
					HX_STACK_LINE(1134)
					aabb->maxx = (a->maxx + 3.0);
					HX_STACK_LINE(1134)
					aabb->maxy = (a->maxy + 3.0);
				}
				HX_STACK_LINE(1135)
				::zpp_nape::space::ZPP_AABBTree tree = (  ((node->dyn = (  (((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))) ? bool(false) : bool(!(shape->body->component->sleeping)) ))) ? ::zpp_nape::space::ZPP_AABBTree(this->dtree) : ::zpp_nape::space::ZPP_AABBTree(this->stree) );		HX_STACK_VAR(tree,"tree");
				HX_STACK_LINE(1136)
				if (((tree->root == null()))){
					HX_STACK_LINE(1136)
					tree->root = node;
					HX_STACK_LINE(1136)
					tree->root->parent = null();
				}
				else{
					HX_STACK_LINE(1136)
					::zpp_nape::geom::ZPP_AABB leafaabb = node->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
					HX_STACK_LINE(1136)
					::zpp_nape::space::ZPP_AABBNode node1 = tree->root;		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1136)
					while((!(((node1->child1 == null()))))){
						HX_STACK_LINE(1136)
						::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
						HX_STACK_LINE(1136)
						::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
						struct _Function_5_1{
							inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &node1){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
								{
									HX_STACK_LINE(1136)
									::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1136)
									return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
								}
								return null();
							}
						};
						HX_STACK_LINE(1136)
						Float area = _Function_5_1::Block(node1);		HX_STACK_VAR(area,"area");
						HX_STACK_LINE(1136)
						{
							HX_STACK_LINE(1136)
							::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
							::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1136)
							_this->minx = (  (((a->minx < leafaabb->minx))) ? Float(a->minx) : Float(leafaabb->minx) );
							HX_STACK_LINE(1136)
							_this->miny = (  (((a->miny < leafaabb->miny))) ? Float(a->miny) : Float(leafaabb->miny) );
							HX_STACK_LINE(1136)
							_this->maxx = (  (((a->maxx > leafaabb->maxx))) ? Float(a->maxx) : Float(leafaabb->maxx) );
							HX_STACK_LINE(1136)
							_this->maxy = (  (((a->maxy > leafaabb->maxy))) ? Float(a->maxy) : Float(leafaabb->maxy) );
						}
						struct _Function_5_2{
							inline static Float Block( ){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
								{
									HX_STACK_LINE(1136)
									::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1136)
									return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
								}
								return null();
							}
						};
						HX_STACK_LINE(1136)
						Float carea = _Function_5_2::Block();		HX_STACK_VAR(carea,"carea");
						HX_STACK_LINE(1136)
						Float cost = ((int)2 * carea);		HX_STACK_VAR(cost,"cost");
						HX_STACK_LINE(1136)
						Float icost = ((int)2 * ((carea - area)));		HX_STACK_VAR(icost,"icost");
						struct _Function_5_3{
							inline static Float Block( ::zpp_nape::geom::ZPP_AABB &leafaabb,::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
								{
									HX_STACK_LINE(1136)
									{
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
										::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1136)
										_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
										HX_STACK_LINE(1136)
										_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
										HX_STACK_LINE(1136)
										_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
										HX_STACK_LINE(1136)
										_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
									}
									struct _Function_6_1{
										inline static Float Block( ){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
											{
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1136)
												return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
											}
											return null();
										}
									};
									struct _Function_6_2{
										inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
											{
												struct _Function_7_1{
													inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
														{
															HX_STACK_LINE(1136)
															::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1136)
															return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
														}
														return null();
													}
												};
												HX_STACK_LINE(1136)
												Float oarea = _Function_7_1::Block(child1);		HX_STACK_VAR(oarea,"oarea");
												struct _Function_7_2{
													inline static Float Block( ){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
														{
															HX_STACK_LINE(1136)
															::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1136)
															return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
														}
														return null();
													}
												};
												HX_STACK_LINE(1136)
												Float narea = _Function_7_2::Block();		HX_STACK_VAR(narea,"narea");
												HX_STACK_LINE(1136)
												return ((narea - oarea) + icost);
											}
											return null();
										}
									};
									HX_STACK_LINE(1136)
									return (  (((child1->child1 == null()))) ? Float((_Function_6_1::Block() + icost)) : Float(_Function_6_2::Block(child1,icost)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1136)
						Float cost1 = _Function_5_3::Block(leafaabb,child1,icost);		HX_STACK_VAR(cost1,"cost1");
						struct _Function_5_4{
							inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,::zpp_nape::geom::ZPP_AABB &leafaabb,Float &icost){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
								{
									HX_STACK_LINE(1136)
									{
										HX_STACK_LINE(1136)
										::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
										::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1136)
										_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
										HX_STACK_LINE(1136)
										_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
										HX_STACK_LINE(1136)
										_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
										HX_STACK_LINE(1136)
										_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
									}
									struct _Function_6_1{
										inline static Float Block( ){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
											{
												HX_STACK_LINE(1136)
												::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1136)
												return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
											}
											return null();
										}
									};
									struct _Function_6_2{
										inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,Float &icost){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
											{
												struct _Function_7_1{
													inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
														{
															HX_STACK_LINE(1136)
															::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1136)
															return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
														}
														return null();
													}
												};
												HX_STACK_LINE(1136)
												Float oarea = _Function_7_1::Block(child2);		HX_STACK_VAR(oarea,"oarea");
												struct _Function_7_2{
													inline static Float Block( ){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
														{
															HX_STACK_LINE(1136)
															::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1136)
															return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
														}
														return null();
													}
												};
												HX_STACK_LINE(1136)
												Float narea = _Function_7_2::Block();		HX_STACK_VAR(narea,"narea");
												HX_STACK_LINE(1136)
												return ((narea - oarea) + icost);
											}
											return null();
										}
									};
									HX_STACK_LINE(1136)
									return (  (((child2->child1 == null()))) ? Float((_Function_6_1::Block() + icost)) : Float(_Function_6_2::Block(child2,icost)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1136)
						Float cost2 = _Function_5_4::Block(child2,leafaabb,icost);		HX_STACK_VAR(cost2,"cost2");
						HX_STACK_LINE(1136)
						if (((bool((cost < cost1)) && bool((cost < cost2))))){
							HX_STACK_LINE(1136)
							break;
						}
						else{
							HX_STACK_LINE(1136)
							node1 = (  (((cost1 < cost2))) ? ::zpp_nape::space::ZPP_AABBNode(child1) : ::zpp_nape::space::ZPP_AABBNode(child2) );
						}
					}
					HX_STACK_LINE(1136)
					::zpp_nape::space::ZPP_AABBNode sibling = node1;		HX_STACK_VAR(sibling,"sibling");
					HX_STACK_LINE(1136)
					::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
					HX_STACK_LINE(1136)
					::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
					HX_STACK_LINE(1136)
					{
						HX_STACK_LINE(1136)
						if (((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool == null()))){
							HX_STACK_LINE(1136)
							nparent = ::zpp_nape::space::ZPP_AABBNode_obj::__new();
						}
						else{
							HX_STACK_LINE(1136)
							nparent = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
							HX_STACK_LINE(1136)
							::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
							HX_STACK_LINE(1136)
							nparent->next = null();
						}
						HX_STACK_LINE(1136)
						{
							HX_STACK_LINE(1136)
							{
								HX_STACK_LINE(1136)
								if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
									HX_STACK_LINE(1136)
									nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
								}
								else{
									HX_STACK_LINE(1136)
									nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
									HX_STACK_LINE(1136)
									::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nparent->aabb->next;
									HX_STACK_LINE(1136)
									nparent->aabb->next = null();
								}
								HX_STACK_LINE(1136)
								Dynamic();
							}
							HX_STACK_LINE(1136)
							nparent->moved = false;
							HX_STACK_LINE(1136)
							nparent->synced = false;
							HX_STACK_LINE(1136)
							nparent->first_sync = false;
						}
					}
					HX_STACK_LINE(1136)
					nparent->parent = oparent;
					HX_STACK_LINE(1136)
					{
						HX_STACK_LINE(1136)
						::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(1136)
						_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
						HX_STACK_LINE(1136)
						_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
						HX_STACK_LINE(1136)
						_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
						HX_STACK_LINE(1136)
						_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
					}
					HX_STACK_LINE(1136)
					nparent->height = (sibling->height + (int)1);
					HX_STACK_LINE(1136)
					if (((oparent != null()))){
						HX_STACK_LINE(1136)
						if (((oparent->child1 == sibling))){
							HX_STACK_LINE(1136)
							oparent->child1 = nparent;
						}
						else{
							HX_STACK_LINE(1136)
							oparent->child2 = nparent;
						}
						HX_STACK_LINE(1136)
						nparent->child1 = sibling;
						HX_STACK_LINE(1136)
						nparent->child2 = node;
						HX_STACK_LINE(1136)
						sibling->parent = nparent;
						HX_STACK_LINE(1136)
						node->parent = nparent;
					}
					else{
						HX_STACK_LINE(1136)
						nparent->child1 = sibling;
						HX_STACK_LINE(1136)
						nparent->child2 = node;
						HX_STACK_LINE(1136)
						sibling->parent = nparent;
						HX_STACK_LINE(1136)
						node->parent = nparent;
						HX_STACK_LINE(1136)
						tree->root = nparent;
					}
					HX_STACK_LINE(1136)
					node1 = node->parent;
					HX_STACK_LINE(1136)
					while(((node1 != null()))){
						struct _Function_5_1{
							inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
								{
									HX_STACK_LINE(1136)
									::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1136)
									::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(1136)
									int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
									struct _Function_6_1{
										inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
											{
												HX_STACK_LINE(1136)
												::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
												HX_STACK_LINE(1136)
												::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(1136)
												c->child1 = node1;
												HX_STACK_LINE(1136)
												c->parent = node1->parent;
												HX_STACK_LINE(1136)
												node1->parent = c;
												HX_STACK_LINE(1136)
												if (((c->parent != null()))){
													HX_STACK_LINE(1136)
													if (((c->parent->child1 == node1))){
														HX_STACK_LINE(1136)
														c->parent->child1 = c;
													}
													else{
														HX_STACK_LINE(1136)
														c->parent->child2 = c;
													}
												}
												else{
													HX_STACK_LINE(1136)
													tree->root = c;
												}
												HX_STACK_LINE(1136)
												if (((f->height > g->height))){
													HX_STACK_LINE(1136)
													c->child2 = f;
													HX_STACK_LINE(1136)
													node1->child2 = g;
													HX_STACK_LINE(1136)
													g->parent = node1;
													HX_STACK_LINE(1136)
													{
														HX_STACK_LINE(1136)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1136)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1136)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1136)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1136)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													HX_STACK_LINE(1136)
													{
														HX_STACK_LINE(1136)
														::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1136)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1136)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1136)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1136)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													struct _Function_8_1{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
															{
																HX_STACK_LINE(1136)
																int x = b->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1136)
																int y = g->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1136)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1136)
													node1->height = ((int)1 + _Function_8_1::Block(b,g));
													struct _Function_8_2{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
															{
																HX_STACK_LINE(1136)
																int x = node1->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1136)
																int y = f->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1136)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1136)
													c->height = ((int)1 + _Function_8_2::Block(node1,f));
												}
												else{
													HX_STACK_LINE(1136)
													c->child2 = g;
													HX_STACK_LINE(1136)
													node1->child2 = f;
													HX_STACK_LINE(1136)
													f->parent = node1;
													HX_STACK_LINE(1136)
													{
														HX_STACK_LINE(1136)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1136)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1136)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1136)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1136)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													HX_STACK_LINE(1136)
													{
														HX_STACK_LINE(1136)
														::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1136)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1136)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1136)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1136)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													struct _Function_8_1{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
															{
																HX_STACK_LINE(1136)
																int x = b->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1136)
																int y = f->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1136)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1136)
													node1->height = ((int)1 + _Function_8_1::Block(b,f));
													struct _Function_8_2{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
															{
																HX_STACK_LINE(1136)
																int x = node1->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1136)
																int y = g->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1136)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1136)
													c->height = ((int)1 + _Function_8_2::Block(node1,g));
												}
												HX_STACK_LINE(1136)
												return c;
											}
											return null();
										}
									};
									struct _Function_6_2{
										inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree,::zpp_nape::space::ZPP_AABBNode &c){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
											{
												HX_STACK_LINE(1136)
												::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
												HX_STACK_LINE(1136)
												::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(1136)
												b->child1 = node1;
												HX_STACK_LINE(1136)
												b->parent = node1->parent;
												HX_STACK_LINE(1136)
												node1->parent = b;
												HX_STACK_LINE(1136)
												if (((b->parent != null()))){
													HX_STACK_LINE(1136)
													if (((b->parent->child1 == node1))){
														HX_STACK_LINE(1136)
														b->parent->child1 = b;
													}
													else{
														HX_STACK_LINE(1136)
														b->parent->child2 = b;
													}
												}
												else{
													HX_STACK_LINE(1136)
													tree->root = b;
												}
												HX_STACK_LINE(1136)
												if (((f->height > g->height))){
													HX_STACK_LINE(1136)
													b->child2 = f;
													HX_STACK_LINE(1136)
													node1->child1 = g;
													HX_STACK_LINE(1136)
													g->parent = node1;
													HX_STACK_LINE(1136)
													{
														HX_STACK_LINE(1136)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1136)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1136)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1136)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1136)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													HX_STACK_LINE(1136)
													{
														HX_STACK_LINE(1136)
														::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1136)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1136)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1136)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1136)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													struct _Function_8_1{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
															{
																HX_STACK_LINE(1136)
																int x = c->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1136)
																int y = g->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1136)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1136)
													node1->height = ((int)1 + _Function_8_1::Block(c,g));
													struct _Function_8_2{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
															{
																HX_STACK_LINE(1136)
																int x = node1->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1136)
																int y = f->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1136)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1136)
													b->height = ((int)1 + _Function_8_2::Block(node1,f));
												}
												else{
													HX_STACK_LINE(1136)
													b->child2 = g;
													HX_STACK_LINE(1136)
													node1->child1 = f;
													HX_STACK_LINE(1136)
													f->parent = node1;
													HX_STACK_LINE(1136)
													{
														HX_STACK_LINE(1136)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1136)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1136)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1136)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1136)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													HX_STACK_LINE(1136)
													{
														HX_STACK_LINE(1136)
														::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1136)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1136)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1136)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1136)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													struct _Function_8_1{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
															{
																HX_STACK_LINE(1136)
																int x = c->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1136)
																int y = f->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1136)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1136)
													node1->height = ((int)1 + _Function_8_1::Block(c,f));
													struct _Function_8_2{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
															{
																HX_STACK_LINE(1136)
																int x = node1->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1136)
																int y = g->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1136)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1136)
													b->height = ((int)1 + _Function_8_2::Block(node1,g));
												}
												HX_STACK_LINE(1136)
												return b;
											}
											return null();
										}
									};
									HX_STACK_LINE(1136)
									return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_6_1::Block(b,c,node1,tree)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_6_2::Block(b,node1,tree,c)) : ::zpp_nape::space::ZPP_AABBNode(node1) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1136)
						node1 = (  (((bool((node1->child1 == null())) || bool((node1->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node1) : ::zpp_nape::space::ZPP_AABBNode(_Function_5_1::Block(node1,tree)) );
						HX_STACK_LINE(1136)
						::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
						HX_STACK_LINE(1136)
						::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
						struct _Function_5_2{
							inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1136);
								{
									HX_STACK_LINE(1136)
									int x = child1->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1136)
									int y = child2->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1136)
									return (  (((x > y))) ? int(x) : int(y) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1136)
						node1->height = ((int)1 + _Function_5_2::Block(child1,child2));
						HX_STACK_LINE(1136)
						{
							HX_STACK_LINE(1136)
							::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
							::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
							::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(1136)
							_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
							HX_STACK_LINE(1136)
							_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
							HX_STACK_LINE(1136)
							_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
							HX_STACK_LINE(1136)
							_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
						}
						HX_STACK_LINE(1136)
						node1 = node1->parent;
					}
				}
				HX_STACK_LINE(1137)
				node->synced = false;
			}
			HX_STACK_LINE(1139)
			node = node->snext;
		}
		HX_STACK_LINE(1141)
		while(((this->syncs != null()))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_DynAABBPhase_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1143);
					{
						HX_STACK_LINE(1144)
						{
						}
						HX_STACK_LINE(1152)
						::zpp_nape::space::ZPP_AABBNode ret = __this->syncs;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1153)
						__this->syncs = ret->snext;
						HX_STACK_LINE(1154)
						ret->snext = null();
						HX_STACK_LINE(1155)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(1143)
			::zpp_nape::space::ZPP_AABBNode leaf = _Function_2_1::Block(this);		HX_STACK_VAR(leaf,"leaf");
			HX_STACK_LINE(1157)
			if ((leaf->moved)){
				HX_STACK_LINE(1157)
				continue;
			}
			HX_STACK_LINE(1158)
			leaf->moved = false;
			HX_STACK_LINE(1159)
			::zpp_nape::shape::ZPP_Shape lshape = leaf->shape;		HX_STACK_VAR(lshape,"lshape");
			HX_STACK_LINE(1160)
			::zpp_nape::phys::ZPP_Body lbody = lshape->body;		HX_STACK_VAR(lbody,"lbody");
			HX_STACK_LINE(1161)
			{
			}
			HX_STACK_LINE(1169)
			if ((lbody->component->sleeping)){
				HX_STACK_LINE(1169)
				continue;
			}
			HX_STACK_LINE(1170)
			::zpp_nape::geom::ZPP_AABB ab = leaf->aabb;		HX_STACK_VAR(ab,"ab");
			HX_STACK_LINE(1171)
			::zpp_nape::space::ZPP_AABBNode stack = null();		HX_STACK_VAR(stack,"stack");
			HX_STACK_LINE(1172)
			{
				HX_STACK_LINE(1173)
				if (((this->dtree->root != null()))){
					HX_STACK_LINE(1174)
					{
					}
					HX_STACK_LINE(1182)
					this->dtree->root->next = stack;
					HX_STACK_LINE(1183)
					stack = this->dtree->root;
				}
				HX_STACK_LINE(1185)
				while(((stack != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &stack){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1186);
							{
								HX_STACK_LINE(1187)
								{
								}
								HX_STACK_LINE(1195)
								::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1196)
								stack = ret->next;
								HX_STACK_LINE(1197)
								ret->next = null();
								HX_STACK_LINE(1198)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1186)
					::zpp_nape::space::ZPP_AABBNode node1 = _Function_4_1::Block(stack);		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1200)
					if (((node1 == leaf))){
						HX_STACK_LINE(1200)
						continue;
					}
					HX_STACK_LINE(1201)
					if (((node1->child1 == null()))){
						HX_STACK_LINE(1202)
						::zpp_nape::shape::ZPP_Shape shape = node1->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1203)
						if (((bool((shape->body != lshape->body)) && bool(!(((bool((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((lshape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))))))){
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1204);
									{
										HX_STACK_LINE(1204)
										::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1204)
										return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
									}
									return null();
								}
							};
							HX_STACK_LINE(1203)
							if ((_Function_6_1::Block(node1,ab))){
								HX_STACK_LINE(1205)
								int id;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(1206)
								int di;		HX_STACK_VAR(di,"di");
								HX_STACK_LINE(1207)
								{
								}
								HX_STACK_LINE(1215)
								if (((lshape->id < shape->id))){
									HX_STACK_LINE(1216)
									id = lshape->id;
									HX_STACK_LINE(1217)
									di = shape->id;
								}
								else{
									HX_STACK_LINE(1220)
									id = shape->id;
									HX_STACK_LINE(1221)
									di = lshape->id;
								}
								HX_STACK_LINE(1223)
								{
								}
								HX_STACK_LINE(1231)
								::zpp_nape::shape::ZPP_Shape s = (  (((lshape->pairs->length < shape->pairs->length))) ? ::zpp_nape::shape::ZPP_Shape(lshape) : ::zpp_nape::shape::ZPP_Shape(shape) );		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1232)
								::zpp_nape::space::ZPP_AABBPair p = null();		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1233)
								{
									HX_STACK_LINE(1234)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = s->pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1235)
									while(((cx_ite != null()))){
										HX_STACK_LINE(1236)
										::zpp_nape::space::ZPP_AABBPair px = cx_ite->elt;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(1237)
										{
											HX_STACK_LINE(1238)
											{
											}
											HX_STACK_LINE(1246)
											if (((bool((px->id == id)) && bool((px->di == di))))){
												HX_STACK_LINE(1247)
												p = px;
												HX_STACK_LINE(1248)
												break;
											}
										}
										HX_STACK_LINE(1251)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1254)
								if (((p != null()))){
									HX_STACK_LINE(1255)
									if ((p->sleeping)){
										HX_STACK_LINE(1256)
										p->sleeping = false;
										HX_STACK_LINE(1257)
										p->next = this->pairs;
										HX_STACK_LINE(1258)
										this->pairs = p;
										HX_STACK_LINE(1259)
										p->first = true;
									}
									HX_STACK_LINE(1261)
									continue;
								}
								HX_STACK_LINE(1263)
								{
									HX_STACK_LINE(1264)
									if (((::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool == null()))){
										HX_STACK_LINE(1264)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::__new();
									}
									else{
										HX_STACK_LINE(1271)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
										HX_STACK_LINE(1272)
										::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = p->next;
										HX_STACK_LINE(1273)
										p->next = null();
									}
									HX_STACK_LINE(1278)
									Dynamic();
								}
								HX_STACK_LINE(1280)
								p->n1 = leaf;
								HX_STACK_LINE(1281)
								p->n2 = node1;
								HX_STACK_LINE(1282)
								p->id = id;
								HX_STACK_LINE(1283)
								p->di = di;
								HX_STACK_LINE(1284)
								p->next = this->pairs;
								HX_STACK_LINE(1285)
								this->pairs = p;
								HX_STACK_LINE(1286)
								p->first = true;
								HX_STACK_LINE(1287)
								{
									HX_STACK_LINE(1287)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = lshape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1287)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1287);
											{
												HX_STACK_LINE(1287)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1287)
												{
													HX_STACK_LINE(1287)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1287)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1287)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1287)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1287)
														ret->next = null();
													}
													HX_STACK_LINE(1287)
													Dynamic();
												}
												HX_STACK_LINE(1287)
												ret->elt = p;
												HX_STACK_LINE(1287)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1287)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1287)
									temp->next = _this->head;
									HX_STACK_LINE(1287)
									_this->head = temp;
									HX_STACK_LINE(1287)
									_this->modified = true;
									HX_STACK_LINE(1287)
									(_this->length)++;
									HX_STACK_LINE(1287)
									p;
								}
								HX_STACK_LINE(1288)
								{
									HX_STACK_LINE(1288)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = shape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1288)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1288);
											{
												HX_STACK_LINE(1288)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1288)
												{
													HX_STACK_LINE(1288)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1288)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1288)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1288)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1288)
														ret->next = null();
													}
													HX_STACK_LINE(1288)
													Dynamic();
												}
												HX_STACK_LINE(1288)
												ret->elt = p;
												HX_STACK_LINE(1288)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1288)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1288)
									temp->next = _this->head;
									HX_STACK_LINE(1288)
									_this->head = temp;
									HX_STACK_LINE(1288)
									_this->modified = true;
									HX_STACK_LINE(1288)
									(_this->length)++;
									HX_STACK_LINE(1288)
									p;
								}
							}
						}
					}
					else{
						struct _Function_5_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1292);
								{
									HX_STACK_LINE(1292)
									::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1292)
									return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
								}
								return null();
							}
						};
						HX_STACK_LINE(1292)
						if ((_Function_5_1::Block(node1,ab))){
							HX_STACK_LINE(1293)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(1294)
								{
								}
								HX_STACK_LINE(1302)
								node1->child1->next = stack;
								HX_STACK_LINE(1303)
								stack = node1->child1;
							}
							HX_STACK_LINE(1305)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(1306)
								{
								}
								HX_STACK_LINE(1314)
								node1->child2->next = stack;
								HX_STACK_LINE(1315)
								stack = node1->child2;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1320)
			{
				HX_STACK_LINE(1321)
				if (((this->stree->root != null()))){
					HX_STACK_LINE(1322)
					{
					}
					HX_STACK_LINE(1330)
					this->stree->root->next = stack;
					HX_STACK_LINE(1331)
					stack = this->stree->root;
				}
				HX_STACK_LINE(1333)
				while(((stack != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &stack){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1334);
							{
								HX_STACK_LINE(1335)
								{
								}
								HX_STACK_LINE(1343)
								::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1344)
								stack = ret->next;
								HX_STACK_LINE(1345)
								ret->next = null();
								HX_STACK_LINE(1346)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1334)
					::zpp_nape::space::ZPP_AABBNode node1 = _Function_4_1::Block(stack);		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1348)
					if (((node1 == leaf))){
						HX_STACK_LINE(1348)
						continue;
					}
					HX_STACK_LINE(1349)
					if (((node1->child1 == null()))){
						HX_STACK_LINE(1350)
						::zpp_nape::shape::ZPP_Shape shape = node1->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1351)
						if (((bool((shape->body != lshape->body)) && bool(!(((bool((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((lshape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))))))){
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1352);
									{
										HX_STACK_LINE(1352)
										::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1352)
										return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
									}
									return null();
								}
							};
							HX_STACK_LINE(1351)
							if ((_Function_6_1::Block(node1,ab))){
								HX_STACK_LINE(1353)
								int id;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(1354)
								int di;		HX_STACK_VAR(di,"di");
								HX_STACK_LINE(1355)
								{
								}
								HX_STACK_LINE(1363)
								if (((lshape->id < shape->id))){
									HX_STACK_LINE(1364)
									id = lshape->id;
									HX_STACK_LINE(1365)
									di = shape->id;
								}
								else{
									HX_STACK_LINE(1368)
									id = shape->id;
									HX_STACK_LINE(1369)
									di = lshape->id;
								}
								HX_STACK_LINE(1371)
								{
								}
								HX_STACK_LINE(1379)
								::zpp_nape::shape::ZPP_Shape s = (  (((lshape->pairs->length < shape->pairs->length))) ? ::zpp_nape::shape::ZPP_Shape(lshape) : ::zpp_nape::shape::ZPP_Shape(shape) );		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1380)
								::zpp_nape::space::ZPP_AABBPair p = null();		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1381)
								{
									HX_STACK_LINE(1382)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = s->pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1383)
									while(((cx_ite != null()))){
										HX_STACK_LINE(1384)
										::zpp_nape::space::ZPP_AABBPair px = cx_ite->elt;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(1385)
										{
											HX_STACK_LINE(1386)
											{
											}
											HX_STACK_LINE(1394)
											if (((bool((px->id == id)) && bool((px->di == di))))){
												HX_STACK_LINE(1395)
												p = px;
												HX_STACK_LINE(1396)
												break;
											}
										}
										HX_STACK_LINE(1399)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1402)
								if (((p != null()))){
									HX_STACK_LINE(1403)
									if ((p->sleeping)){
										HX_STACK_LINE(1404)
										p->sleeping = false;
										HX_STACK_LINE(1405)
										p->next = this->pairs;
										HX_STACK_LINE(1406)
										this->pairs = p;
										HX_STACK_LINE(1407)
										p->first = true;
									}
									HX_STACK_LINE(1409)
									continue;
								}
								HX_STACK_LINE(1411)
								{
									HX_STACK_LINE(1412)
									if (((::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool == null()))){
										HX_STACK_LINE(1412)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::__new();
									}
									else{
										HX_STACK_LINE(1419)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
										HX_STACK_LINE(1420)
										::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = p->next;
										HX_STACK_LINE(1421)
										p->next = null();
									}
									HX_STACK_LINE(1426)
									Dynamic();
								}
								HX_STACK_LINE(1428)
								p->n1 = leaf;
								HX_STACK_LINE(1429)
								p->n2 = node1;
								HX_STACK_LINE(1430)
								p->id = id;
								HX_STACK_LINE(1431)
								p->di = di;
								HX_STACK_LINE(1432)
								p->next = this->pairs;
								HX_STACK_LINE(1433)
								this->pairs = p;
								HX_STACK_LINE(1434)
								p->first = true;
								HX_STACK_LINE(1435)
								{
									HX_STACK_LINE(1435)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = lshape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1435)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1435);
											{
												HX_STACK_LINE(1435)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1435)
												{
													HX_STACK_LINE(1435)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1435)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1435)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1435)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1435)
														ret->next = null();
													}
													HX_STACK_LINE(1435)
													Dynamic();
												}
												HX_STACK_LINE(1435)
												ret->elt = p;
												HX_STACK_LINE(1435)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1435)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1435)
									temp->next = _this->head;
									HX_STACK_LINE(1435)
									_this->head = temp;
									HX_STACK_LINE(1435)
									_this->modified = true;
									HX_STACK_LINE(1435)
									(_this->length)++;
									HX_STACK_LINE(1435)
									p;
								}
								HX_STACK_LINE(1436)
								{
									HX_STACK_LINE(1436)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = shape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1436)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1436);
											{
												HX_STACK_LINE(1436)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1436)
												{
													HX_STACK_LINE(1436)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1436)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1436)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1436)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1436)
														ret->next = null();
													}
													HX_STACK_LINE(1436)
													Dynamic();
												}
												HX_STACK_LINE(1436)
												ret->elt = p;
												HX_STACK_LINE(1436)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1436)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1436)
									temp->next = _this->head;
									HX_STACK_LINE(1436)
									_this->head = temp;
									HX_STACK_LINE(1436)
									_this->modified = true;
									HX_STACK_LINE(1436)
									(_this->length)++;
									HX_STACK_LINE(1436)
									p;
								}
							}
						}
					}
					else{
						struct _Function_5_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1440);
								{
									HX_STACK_LINE(1440)
									::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1440)
									return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
								}
								return null();
							}
						};
						HX_STACK_LINE(1440)
						if ((_Function_5_1::Block(node1,ab))){
							HX_STACK_LINE(1441)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(1442)
								{
								}
								HX_STACK_LINE(1450)
								node1->child1->next = stack;
								HX_STACK_LINE(1451)
								stack = node1->child1;
							}
							HX_STACK_LINE(1453)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(1454)
								{
								}
								HX_STACK_LINE(1462)
								node1->child2->next = stack;
								HX_STACK_LINE(1463)
								stack = node1->child2;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1470)
		while(((this->moves != null()))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_DynAABBPhase_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1472);
					{
						HX_STACK_LINE(1473)
						{
						}
						HX_STACK_LINE(1481)
						::zpp_nape::space::ZPP_AABBNode ret = __this->moves;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1482)
						__this->moves = ret->mnext;
						HX_STACK_LINE(1483)
						ret->mnext = null();
						HX_STACK_LINE(1484)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(1472)
			::zpp_nape::space::ZPP_AABBNode leaf = _Function_2_1::Block(this);		HX_STACK_VAR(leaf,"leaf");
			HX_STACK_LINE(1486)
			{
			}
			HX_STACK_LINE(1487)
			leaf->moved = false;
			HX_STACK_LINE(1488)
			::zpp_nape::shape::ZPP_Shape lshape = leaf->shape;		HX_STACK_VAR(lshape,"lshape");
			HX_STACK_LINE(1489)
			::zpp_nape::phys::ZPP_Body lbody = lshape->body;		HX_STACK_VAR(lbody,"lbody");
			HX_STACK_LINE(1490)
			{
			}
			HX_STACK_LINE(1498)
			if ((lbody->component->sleeping)){
				HX_STACK_LINE(1498)
				continue;
			}
			HX_STACK_LINE(1499)
			::zpp_nape::geom::ZPP_AABB ab = leaf->aabb;		HX_STACK_VAR(ab,"ab");
			HX_STACK_LINE(1500)
			::zpp_nape::space::ZPP_AABBNode stack = null();		HX_STACK_VAR(stack,"stack");
			HX_STACK_LINE(1501)
			{
				HX_STACK_LINE(1502)
				if (((this->dtree->root != null()))){
					HX_STACK_LINE(1503)
					{
					}
					HX_STACK_LINE(1511)
					this->dtree->root->next = stack;
					HX_STACK_LINE(1512)
					stack = this->dtree->root;
				}
				HX_STACK_LINE(1514)
				while(((stack != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &stack){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1515);
							{
								HX_STACK_LINE(1516)
								{
								}
								HX_STACK_LINE(1524)
								::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1525)
								stack = ret->next;
								HX_STACK_LINE(1526)
								ret->next = null();
								HX_STACK_LINE(1527)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1515)
					::zpp_nape::space::ZPP_AABBNode node1 = _Function_4_1::Block(stack);		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1529)
					if (((node1 == leaf))){
						HX_STACK_LINE(1529)
						continue;
					}
					HX_STACK_LINE(1530)
					if (((node1->child1 == null()))){
						HX_STACK_LINE(1531)
						::zpp_nape::shape::ZPP_Shape shape = node1->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1532)
						if (((bool((shape->body != lshape->body)) && bool(!(((bool((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((lshape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))))))){
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1533);
									{
										HX_STACK_LINE(1533)
										::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1533)
										return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
									}
									return null();
								}
							};
							HX_STACK_LINE(1532)
							if ((_Function_6_1::Block(node1,ab))){
								HX_STACK_LINE(1534)
								int id;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(1535)
								int di;		HX_STACK_VAR(di,"di");
								HX_STACK_LINE(1536)
								{
								}
								HX_STACK_LINE(1544)
								if (((lshape->id < shape->id))){
									HX_STACK_LINE(1545)
									id = lshape->id;
									HX_STACK_LINE(1546)
									di = shape->id;
								}
								else{
									HX_STACK_LINE(1549)
									id = shape->id;
									HX_STACK_LINE(1550)
									di = lshape->id;
								}
								HX_STACK_LINE(1552)
								{
								}
								HX_STACK_LINE(1560)
								::zpp_nape::shape::ZPP_Shape s = (  (((lshape->pairs->length < shape->pairs->length))) ? ::zpp_nape::shape::ZPP_Shape(lshape) : ::zpp_nape::shape::ZPP_Shape(shape) );		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1561)
								::zpp_nape::space::ZPP_AABBPair p = null();		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1562)
								{
									HX_STACK_LINE(1563)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = s->pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1564)
									while(((cx_ite != null()))){
										HX_STACK_LINE(1565)
										::zpp_nape::space::ZPP_AABBPair px = cx_ite->elt;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(1566)
										{
											HX_STACK_LINE(1567)
											{
											}
											HX_STACK_LINE(1575)
											if (((bool((px->id == id)) && bool((px->di == di))))){
												HX_STACK_LINE(1576)
												p = px;
												HX_STACK_LINE(1577)
												break;
											}
										}
										HX_STACK_LINE(1580)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1583)
								if (((p != null()))){
									HX_STACK_LINE(1584)
									if ((p->sleeping)){
										HX_STACK_LINE(1585)
										p->sleeping = false;
										HX_STACK_LINE(1586)
										p->next = this->pairs;
										HX_STACK_LINE(1587)
										this->pairs = p;
										HX_STACK_LINE(1588)
										p->first = true;
									}
									HX_STACK_LINE(1590)
									continue;
								}
								HX_STACK_LINE(1592)
								{
									HX_STACK_LINE(1593)
									if (((::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool == null()))){
										HX_STACK_LINE(1593)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::__new();
									}
									else{
										HX_STACK_LINE(1600)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
										HX_STACK_LINE(1601)
										::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = p->next;
										HX_STACK_LINE(1602)
										p->next = null();
									}
									HX_STACK_LINE(1607)
									Dynamic();
								}
								HX_STACK_LINE(1609)
								p->n1 = leaf;
								HX_STACK_LINE(1610)
								p->n2 = node1;
								HX_STACK_LINE(1611)
								p->id = id;
								HX_STACK_LINE(1612)
								p->di = di;
								HX_STACK_LINE(1613)
								p->next = this->pairs;
								HX_STACK_LINE(1614)
								this->pairs = p;
								HX_STACK_LINE(1615)
								p->first = true;
								HX_STACK_LINE(1616)
								{
									HX_STACK_LINE(1616)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = lshape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1616)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1616);
											{
												HX_STACK_LINE(1616)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1616)
												{
													HX_STACK_LINE(1616)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1616)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1616)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1616)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1616)
														ret->next = null();
													}
													HX_STACK_LINE(1616)
													Dynamic();
												}
												HX_STACK_LINE(1616)
												ret->elt = p;
												HX_STACK_LINE(1616)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1616)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1616)
									temp->next = _this->head;
									HX_STACK_LINE(1616)
									_this->head = temp;
									HX_STACK_LINE(1616)
									_this->modified = true;
									HX_STACK_LINE(1616)
									(_this->length)++;
									HX_STACK_LINE(1616)
									p;
								}
								HX_STACK_LINE(1617)
								{
									HX_STACK_LINE(1617)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = shape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1617)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1617);
											{
												HX_STACK_LINE(1617)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1617)
												{
													HX_STACK_LINE(1617)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1617)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1617)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1617)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1617)
														ret->next = null();
													}
													HX_STACK_LINE(1617)
													Dynamic();
												}
												HX_STACK_LINE(1617)
												ret->elt = p;
												HX_STACK_LINE(1617)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1617)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1617)
									temp->next = _this->head;
									HX_STACK_LINE(1617)
									_this->head = temp;
									HX_STACK_LINE(1617)
									_this->modified = true;
									HX_STACK_LINE(1617)
									(_this->length)++;
									HX_STACK_LINE(1617)
									p;
								}
							}
						}
					}
					else{
						struct _Function_5_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1621);
								{
									HX_STACK_LINE(1621)
									::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1621)
									return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
								}
								return null();
							}
						};
						HX_STACK_LINE(1621)
						if ((_Function_5_1::Block(node1,ab))){
							HX_STACK_LINE(1622)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(1623)
								{
								}
								HX_STACK_LINE(1631)
								node1->child1->next = stack;
								HX_STACK_LINE(1632)
								stack = node1->child1;
							}
							HX_STACK_LINE(1634)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(1635)
								{
								}
								HX_STACK_LINE(1643)
								node1->child2->next = stack;
								HX_STACK_LINE(1644)
								stack = node1->child2;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1649)
			{
				HX_STACK_LINE(1650)
				if (((this->stree->root != null()))){
					HX_STACK_LINE(1651)
					{
					}
					HX_STACK_LINE(1659)
					this->stree->root->next = stack;
					HX_STACK_LINE(1660)
					stack = this->stree->root;
				}
				HX_STACK_LINE(1662)
				while(((stack != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &stack){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1663);
							{
								HX_STACK_LINE(1664)
								{
								}
								HX_STACK_LINE(1672)
								::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1673)
								stack = ret->next;
								HX_STACK_LINE(1674)
								ret->next = null();
								HX_STACK_LINE(1675)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1663)
					::zpp_nape::space::ZPP_AABBNode node1 = _Function_4_1::Block(stack);		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1677)
					if (((node1 == leaf))){
						HX_STACK_LINE(1677)
						continue;
					}
					HX_STACK_LINE(1678)
					if (((node1->child1 == null()))){
						HX_STACK_LINE(1679)
						::zpp_nape::shape::ZPP_Shape shape = node1->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1680)
						if (((bool((shape->body != lshape->body)) && bool(!(((bool((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((lshape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))))))){
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1681);
									{
										HX_STACK_LINE(1681)
										::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1681)
										return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
									}
									return null();
								}
							};
							HX_STACK_LINE(1680)
							if ((_Function_6_1::Block(node1,ab))){
								HX_STACK_LINE(1682)
								int id;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(1683)
								int di;		HX_STACK_VAR(di,"di");
								HX_STACK_LINE(1684)
								{
								}
								HX_STACK_LINE(1692)
								if (((lshape->id < shape->id))){
									HX_STACK_LINE(1693)
									id = lshape->id;
									HX_STACK_LINE(1694)
									di = shape->id;
								}
								else{
									HX_STACK_LINE(1697)
									id = shape->id;
									HX_STACK_LINE(1698)
									di = lshape->id;
								}
								HX_STACK_LINE(1700)
								{
								}
								HX_STACK_LINE(1708)
								::zpp_nape::shape::ZPP_Shape s = (  (((lshape->pairs->length < shape->pairs->length))) ? ::zpp_nape::shape::ZPP_Shape(lshape) : ::zpp_nape::shape::ZPP_Shape(shape) );		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1709)
								::zpp_nape::space::ZPP_AABBPair p = null();		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1710)
								{
									HX_STACK_LINE(1711)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = s->pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1712)
									while(((cx_ite != null()))){
										HX_STACK_LINE(1713)
										::zpp_nape::space::ZPP_AABBPair px = cx_ite->elt;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(1714)
										{
											HX_STACK_LINE(1715)
											{
											}
											HX_STACK_LINE(1723)
											if (((bool((px->id == id)) && bool((px->di == di))))){
												HX_STACK_LINE(1724)
												p = px;
												HX_STACK_LINE(1725)
												break;
											}
										}
										HX_STACK_LINE(1728)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1731)
								if (((p != null()))){
									HX_STACK_LINE(1732)
									if ((p->sleeping)){
										HX_STACK_LINE(1733)
										p->sleeping = false;
										HX_STACK_LINE(1734)
										p->next = this->pairs;
										HX_STACK_LINE(1735)
										this->pairs = p;
										HX_STACK_LINE(1736)
										p->first = true;
									}
									HX_STACK_LINE(1738)
									continue;
								}
								HX_STACK_LINE(1740)
								{
									HX_STACK_LINE(1741)
									if (((::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool == null()))){
										HX_STACK_LINE(1741)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::__new();
									}
									else{
										HX_STACK_LINE(1748)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
										HX_STACK_LINE(1749)
										::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = p->next;
										HX_STACK_LINE(1750)
										p->next = null();
									}
									HX_STACK_LINE(1755)
									Dynamic();
								}
								HX_STACK_LINE(1757)
								p->n1 = leaf;
								HX_STACK_LINE(1758)
								p->n2 = node1;
								HX_STACK_LINE(1759)
								p->id = id;
								HX_STACK_LINE(1760)
								p->di = di;
								HX_STACK_LINE(1761)
								p->next = this->pairs;
								HX_STACK_LINE(1762)
								this->pairs = p;
								HX_STACK_LINE(1763)
								p->first = true;
								HX_STACK_LINE(1764)
								{
									HX_STACK_LINE(1764)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = lshape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1764)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1764);
											{
												HX_STACK_LINE(1764)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1764)
												{
													HX_STACK_LINE(1764)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1764)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1764)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1764)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1764)
														ret->next = null();
													}
													HX_STACK_LINE(1764)
													Dynamic();
												}
												HX_STACK_LINE(1764)
												ret->elt = p;
												HX_STACK_LINE(1764)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1764)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1764)
									temp->next = _this->head;
									HX_STACK_LINE(1764)
									_this->head = temp;
									HX_STACK_LINE(1764)
									_this->modified = true;
									HX_STACK_LINE(1764)
									(_this->length)++;
									HX_STACK_LINE(1764)
									p;
								}
								HX_STACK_LINE(1765)
								{
									HX_STACK_LINE(1765)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = shape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1765)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1765);
											{
												HX_STACK_LINE(1765)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1765)
												{
													HX_STACK_LINE(1765)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1765)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1765)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1765)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1765)
														ret->next = null();
													}
													HX_STACK_LINE(1765)
													Dynamic();
												}
												HX_STACK_LINE(1765)
												ret->elt = p;
												HX_STACK_LINE(1765)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1765)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1765)
									temp->next = _this->head;
									HX_STACK_LINE(1765)
									_this->head = temp;
									HX_STACK_LINE(1765)
									_this->modified = true;
									HX_STACK_LINE(1765)
									(_this->length)++;
									HX_STACK_LINE(1765)
									p;
								}
							}
						}
					}
					else{
						struct _Function_5_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1769);
								{
									HX_STACK_LINE(1769)
									::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1769)
									return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
								}
								return null();
							}
						};
						HX_STACK_LINE(1769)
						if ((_Function_5_1::Block(node1,ab))){
							HX_STACK_LINE(1770)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(1771)
								{
								}
								HX_STACK_LINE(1779)
								node1->child1->next = stack;
								HX_STACK_LINE(1780)
								stack = node1->child1;
							}
							HX_STACK_LINE(1782)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(1783)
								{
								}
								HX_STACK_LINE(1791)
								node1->child2->next = stack;
								HX_STACK_LINE(1792)
								stack = node1->child2;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1799)
		::zpp_nape::space::ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1800)
		::zpp_nape::space::ZPP_AABBPair cur = this->pairs;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1801)
		while(((cur != null()))){
			HX_STACK_LINE(1802)
			{
			}
			struct _Function_2_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBPair &cur){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1810);
					{
						HX_STACK_LINE(1810)
						::zpp_nape::geom::ZPP_AABB _this = cur->n1->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB x = cur->n2->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1810)
						return (bool((bool((bool((x->miny <= _this->maxy)) && bool((_this->miny <= x->maxy)))) && bool((x->minx <= _this->maxx)))) && bool((_this->minx <= x->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(1810)
			if (((bool(!(cur->first)) && bool(!(_Function_2_1::Block(cur)))))){
				HX_STACK_LINE(1811)
				if (((pre == null()))){
					HX_STACK_LINE(1811)
					this->pairs = cur->next;
				}
				else{
					HX_STACK_LINE(1812)
					pre->next = cur->next;
				}
				HX_STACK_LINE(1813)
				{
					HX_STACK_LINE(1813)
					::zpp_nape::util::ZNPList_ZPP_AABBPair _this = cur->n1->shape->pairs;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1813)
					{
					}
					HX_STACK_LINE(1813)
					{
						HX_STACK_LINE(1813)
						{
						}
						HX_STACK_LINE(1813)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair pre1 = null();		HX_STACK_VAR(pre1,"pre1");
						HX_STACK_LINE(1813)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair cur1 = _this->head;		HX_STACK_VAR(cur1,"cur1");
						HX_STACK_LINE(1813)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1813)
						while(((cur1 != null()))){
							HX_STACK_LINE(1813)
							if (((cur1->elt == cur))){
								HX_STACK_LINE(1813)
								{
									HX_STACK_LINE(1813)
									{
									}
									HX_STACK_LINE(1813)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1813)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1813)
									if (((pre1 == null()))){
										HX_STACK_LINE(1813)
										old = _this->head;
										HX_STACK_LINE(1813)
										ret1 = old->next;
										HX_STACK_LINE(1813)
										_this->head = ret1;
										HX_STACK_LINE(1813)
										if (((_this->head == null()))){
											HX_STACK_LINE(1813)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1813)
										old = pre1->next;
										HX_STACK_LINE(1813)
										ret1 = old->next;
										HX_STACK_LINE(1813)
										pre1->next = ret1;
										HX_STACK_LINE(1813)
										if (((ret1 == null()))){
											HX_STACK_LINE(1813)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1813)
									{
									}
									HX_STACK_LINE(1813)
									{
										HX_STACK_LINE(1813)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1813)
										{
										}
										HX_STACK_LINE(1813)
										o->elt = null();
										HX_STACK_LINE(1813)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
										HX_STACK_LINE(1813)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1813)
									_this->modified = true;
									HX_STACK_LINE(1813)
									(_this->length)--;
									HX_STACK_LINE(1813)
									_this->pushmod = true;
									HX_STACK_LINE(1813)
									ret1;
								}
								HX_STACK_LINE(1813)
								ret = true;
								HX_STACK_LINE(1813)
								break;
							}
							HX_STACK_LINE(1813)
							pre1 = cur1;
							HX_STACK_LINE(1813)
							cur1 = cur1->next;
						}
						HX_STACK_LINE(1813)
						ret;
					}
				}
				HX_STACK_LINE(1814)
				{
					HX_STACK_LINE(1814)
					::zpp_nape::util::ZNPList_ZPP_AABBPair _this = cur->n2->shape->pairs;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1814)
					{
					}
					HX_STACK_LINE(1814)
					{
						HX_STACK_LINE(1814)
						{
						}
						HX_STACK_LINE(1814)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair pre1 = null();		HX_STACK_VAR(pre1,"pre1");
						HX_STACK_LINE(1814)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair cur1 = _this->head;		HX_STACK_VAR(cur1,"cur1");
						HX_STACK_LINE(1814)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1814)
						while(((cur1 != null()))){
							HX_STACK_LINE(1814)
							if (((cur1->elt == cur))){
								HX_STACK_LINE(1814)
								{
									HX_STACK_LINE(1814)
									{
									}
									HX_STACK_LINE(1814)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1814)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1814)
									if (((pre1 == null()))){
										HX_STACK_LINE(1814)
										old = _this->head;
										HX_STACK_LINE(1814)
										ret1 = old->next;
										HX_STACK_LINE(1814)
										_this->head = ret1;
										HX_STACK_LINE(1814)
										if (((_this->head == null()))){
											HX_STACK_LINE(1814)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1814)
										old = pre1->next;
										HX_STACK_LINE(1814)
										ret1 = old->next;
										HX_STACK_LINE(1814)
										pre1->next = ret1;
										HX_STACK_LINE(1814)
										if (((ret1 == null()))){
											HX_STACK_LINE(1814)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1814)
									{
									}
									HX_STACK_LINE(1814)
									{
										HX_STACK_LINE(1814)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1814)
										{
										}
										HX_STACK_LINE(1814)
										o->elt = null();
										HX_STACK_LINE(1814)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
										HX_STACK_LINE(1814)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1814)
									_this->modified = true;
									HX_STACK_LINE(1814)
									(_this->length)--;
									HX_STACK_LINE(1814)
									_this->pushmod = true;
									HX_STACK_LINE(1814)
									ret1;
								}
								HX_STACK_LINE(1814)
								ret = true;
								HX_STACK_LINE(1814)
								break;
							}
							HX_STACK_LINE(1814)
							pre1 = cur1;
							HX_STACK_LINE(1814)
							cur1 = cur1->next;
						}
						HX_STACK_LINE(1814)
						ret;
					}
				}
				HX_STACK_LINE(1815)
				::zpp_nape::space::ZPP_AABBPair nxt = cur->next;		HX_STACK_VAR(nxt,"nxt");
				HX_STACK_LINE(1816)
				if (((cur->arb != null()))){
					HX_STACK_LINE(1816)
					cur->arb->pair = null();
				}
				HX_STACK_LINE(1817)
				cur->arb = null();
				HX_STACK_LINE(1818)
				{
					HX_STACK_LINE(1819)
					::zpp_nape::space::ZPP_AABBPair o = cur;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1820)
					{
					}
					HX_STACK_LINE(1828)
					{
						HX_STACK_LINE(1828)
						{
						}
						HX_STACK_LINE(1828)
						o->n1 = o->n2 = null();
						HX_STACK_LINE(1828)
						o->sleeping = false;
					}
					HX_STACK_LINE(1829)
					o->next = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
					HX_STACK_LINE(1830)
					::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1835)
				cur = nxt;
				HX_STACK_LINE(1836)
				continue;
			}
			HX_STACK_LINE(1838)
			::zpp_nape::shape::ZPP_Shape s1 = cur->n1->shape;		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(1839)
			::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(1840)
			::zpp_nape::shape::ZPP_Shape s2 = cur->n2->shape;		HX_STACK_VAR(s2,"s2");
			HX_STACK_LINE(1841)
			::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(1842)
			if ((!(cur->first))){
				HX_STACK_LINE(1842)
				if (((bool(((bool(b1->component->sleeping) || bool((b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))) && bool(((bool(b2->component->sleeping) || bool((b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)))))))){
					HX_STACK_LINE(1844)
					cur->sleeping = true;
					HX_STACK_LINE(1845)
					if (((pre == null()))){
						HX_STACK_LINE(1845)
						this->pairs = cur->next;
					}
					else{
						HX_STACK_LINE(1846)
						pre->next = cur->next;
					}
					HX_STACK_LINE(1847)
					cur = cur->next;
					HX_STACK_LINE(1848)
					continue;
				}
			}
			HX_STACK_LINE(1851)
			cur->first = false;
			struct _Function_2_2{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::shape::ZPP_Shape &s2){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1852);
					{
						HX_STACK_LINE(1852)
						::zpp_nape::geom::ZPP_AABB _this = s1->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB x = s2->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1852)
						return (bool((bool((bool((x->miny <= _this->maxy)) && bool((_this->miny <= x->maxy)))) && bool((x->minx <= _this->maxx)))) && bool((_this->minx <= x->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(1852)
			if ((_Function_2_2::Block(s1,s2))){
				HX_STACK_LINE(1853)
				{
				}
				HX_STACK_LINE(1861)
				::zpp_nape::dynamics::ZPP_Arbiter oarb = cur->arb;		HX_STACK_VAR(oarb,"oarb");
				HX_STACK_LINE(1862)
				if ((discrete)){
					HX_STACK_LINE(1862)
					cur->arb = space->narrowPhase(s1,s2,(bool(!(((b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) || bool(!(((b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))),cur->arb,false);
				}
				else{
					HX_STACK_LINE(1863)
					cur->arb = space->continuousEvent(s1,s2,(bool(!(((b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) || bool(!(((b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))),cur->arb,false);
				}
				HX_STACK_LINE(1864)
				if (((cur->arb == null()))){
					HX_STACK_LINE(1864)
					if (((oarb != null()))){
						HX_STACK_LINE(1865)
						oarb->pair = null();
					}
				}
				else{
					HX_STACK_LINE(1867)
					cur->arb->pair = cur;
				}
			}
			HX_STACK_LINE(1878)
			pre = cur;
			HX_STACK_LINE(1879)
			cur = cur->next;
		}
	}
return null();
}


Void ZPP_DynAABBPhase_obj::sync_broadphase( ){
{
		HX_STACK_PUSH("ZPP_DynAABBPhase::sync_broadphase","zpp_nape/space/DynAABBPhase.hx",986);
		HX_STACK_THIS(this);
		HX_STACK_LINE(987)
		this->space->validation();
		HX_STACK_LINE(988)
		if (((this->syncs != null()))){
			HX_STACK_LINE(988)
			if (((this->moves == null()))){
				HX_STACK_LINE(990)
				::zpp_nape::space::ZPP_AABBNode node = this->syncs;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(991)
				while(((node != null()))){
					HX_STACK_LINE(992)
					{
						HX_STACK_LINE(993)
						::zpp_nape::shape::ZPP_Shape shape = node->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(994)
						{
						}
						HX_STACK_LINE(1002)
						{
						}
						HX_STACK_LINE(1010)
						if ((!(node->first_sync))){
							HX_STACK_LINE(1011)
							::zpp_nape::space::ZPP_AABBTree tree = (  ((node->dyn)) ? ::zpp_nape::space::ZPP_AABBTree(this->dtree) : ::zpp_nape::space::ZPP_AABBTree(this->stree) );		HX_STACK_VAR(tree,"tree");
							HX_STACK_LINE(1012)
							if (((node == tree->root))){
								HX_STACK_LINE(1012)
								tree->root = null();
								HX_STACK_LINE(1012)
								Dynamic();
							}
							else{
								HX_STACK_LINE(1012)
								::zpp_nape::space::ZPP_AABBNode parent = node->parent;		HX_STACK_VAR(parent,"parent");
								HX_STACK_LINE(1012)
								::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
								HX_STACK_LINE(1012)
								::zpp_nape::space::ZPP_AABBNode sibling = (  (((parent->child1 == node))) ? ::zpp_nape::space::ZPP_AABBNode(parent->child2) : ::zpp_nape::space::ZPP_AABBNode(parent->child1) );		HX_STACK_VAR(sibling,"sibling");
								HX_STACK_LINE(1012)
								if (((gparent != null()))){
									HX_STACK_LINE(1012)
									if (((gparent->child1 == parent))){
										HX_STACK_LINE(1012)
										gparent->child1 = sibling;
									}
									else{
										HX_STACK_LINE(1012)
										gparent->child2 = sibling;
									}
									HX_STACK_LINE(1012)
									sibling->parent = gparent;
									HX_STACK_LINE(1012)
									{
										HX_STACK_LINE(1012)
										::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1012)
										{
										}
										HX_STACK_LINE(1012)
										{
											HX_STACK_LINE(1012)
											o->height = (int)-1;
											HX_STACK_LINE(1012)
											{
												HX_STACK_LINE(1012)
												::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1012)
												{
												}
												HX_STACK_LINE(1012)
												{
													HX_STACK_LINE(1012)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1012)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1012)
														o1->outer = null();
													}
													HX_STACK_LINE(1012)
													o1->wrap_min = o1->wrap_max = null();
													HX_STACK_LINE(1012)
													o1->_invalidate = null();
													HX_STACK_LINE(1012)
													o1->_validate = null();
												}
												HX_STACK_LINE(1012)
												o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
												HX_STACK_LINE(1012)
												::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
											}
											HX_STACK_LINE(1012)
											o->child1 = o->child2 = o->parent = null();
											HX_STACK_LINE(1012)
											o->next = null();
											HX_STACK_LINE(1012)
											o->snext = null();
											HX_STACK_LINE(1012)
											o->mnext = null();
										}
										HX_STACK_LINE(1012)
										o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
										HX_STACK_LINE(1012)
										::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1012)
									::zpp_nape::space::ZPP_AABBNode node1 = gparent;		HX_STACK_VAR(node1,"node1");
									HX_STACK_LINE(1012)
									while(((node1 != null()))){
										struct _Function_9_1{
											inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1012);
												{
													HX_STACK_LINE(1012)
													::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(1012)
													::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
													HX_STACK_LINE(1012)
													int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
													struct _Function_10_1{
														inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1012);
															{
																HX_STACK_LINE(1012)
																::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
																HX_STACK_LINE(1012)
																::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
																HX_STACK_LINE(1012)
																c->child1 = node1;
																HX_STACK_LINE(1012)
																c->parent = node1->parent;
																HX_STACK_LINE(1012)
																node1->parent = c;
																HX_STACK_LINE(1012)
																if (((c->parent != null()))){
																	HX_STACK_LINE(1012)
																	if (((c->parent->child1 == node1))){
																		HX_STACK_LINE(1012)
																		c->parent->child1 = c;
																	}
																	else{
																		HX_STACK_LINE(1012)
																		c->parent->child2 = c;
																	}
																}
																else{
																	HX_STACK_LINE(1012)
																	tree->root = c;
																}
																HX_STACK_LINE(1012)
																if (((f->height > g->height))){
																	HX_STACK_LINE(1012)
																	c->child2 = f;
																	HX_STACK_LINE(1012)
																	node1->child2 = g;
																	HX_STACK_LINE(1012)
																	g->parent = node1;
																	HX_STACK_LINE(1012)
																	{
																		HX_STACK_LINE(1012)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1012)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1012)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1012)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1012)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1012)
																	{
																		HX_STACK_LINE(1012)
																		::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1012)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1012)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1012)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1012)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1012);
																			{
																				HX_STACK_LINE(1012)
																				int x = b->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1012)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1012)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1012)
																	node1->height = ((int)1 + _Function_12_1::Block(b,g));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1012);
																			{
																				HX_STACK_LINE(1012)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1012)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1012)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1012)
																	c->height = ((int)1 + _Function_12_2::Block(node1,f));
																}
																else{
																	HX_STACK_LINE(1012)
																	c->child2 = g;
																	HX_STACK_LINE(1012)
																	node1->child2 = f;
																	HX_STACK_LINE(1012)
																	f->parent = node1;
																	HX_STACK_LINE(1012)
																	{
																		HX_STACK_LINE(1012)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1012)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1012)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1012)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1012)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1012)
																	{
																		HX_STACK_LINE(1012)
																		::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1012)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1012)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1012)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1012)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1012);
																			{
																				HX_STACK_LINE(1012)
																				int x = b->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1012)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1012)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1012)
																	node1->height = ((int)1 + _Function_12_1::Block(b,f));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1012);
																			{
																				HX_STACK_LINE(1012)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1012)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1012)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1012)
																	c->height = ((int)1 + _Function_12_2::Block(node1,g));
																}
																HX_STACK_LINE(1012)
																return c;
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree,::zpp_nape::space::ZPP_AABBNode &c){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1012);
															{
																HX_STACK_LINE(1012)
																::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
																HX_STACK_LINE(1012)
																::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
																HX_STACK_LINE(1012)
																b->child1 = node1;
																HX_STACK_LINE(1012)
																b->parent = node1->parent;
																HX_STACK_LINE(1012)
																node1->parent = b;
																HX_STACK_LINE(1012)
																if (((b->parent != null()))){
																	HX_STACK_LINE(1012)
																	if (((b->parent->child1 == node1))){
																		HX_STACK_LINE(1012)
																		b->parent->child1 = b;
																	}
																	else{
																		HX_STACK_LINE(1012)
																		b->parent->child2 = b;
																	}
																}
																else{
																	HX_STACK_LINE(1012)
																	tree->root = b;
																}
																HX_STACK_LINE(1012)
																if (((f->height > g->height))){
																	HX_STACK_LINE(1012)
																	b->child2 = f;
																	HX_STACK_LINE(1012)
																	node1->child1 = g;
																	HX_STACK_LINE(1012)
																	g->parent = node1;
																	HX_STACK_LINE(1012)
																	{
																		HX_STACK_LINE(1012)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1012)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1012)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1012)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1012)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1012)
																	{
																		HX_STACK_LINE(1012)
																		::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1012)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1012)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1012)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1012)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1012);
																			{
																				HX_STACK_LINE(1012)
																				int x = c->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1012)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1012)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1012)
																	node1->height = ((int)1 + _Function_12_1::Block(c,g));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1012);
																			{
																				HX_STACK_LINE(1012)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1012)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1012)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1012)
																	b->height = ((int)1 + _Function_12_2::Block(node1,f));
																}
																else{
																	HX_STACK_LINE(1012)
																	b->child2 = g;
																	HX_STACK_LINE(1012)
																	node1->child1 = f;
																	HX_STACK_LINE(1012)
																	f->parent = node1;
																	HX_STACK_LINE(1012)
																	{
																		HX_STACK_LINE(1012)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1012)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1012)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1012)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1012)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1012)
																	{
																		HX_STACK_LINE(1012)
																		::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1012)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1012)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1012)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1012)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1012);
																			{
																				HX_STACK_LINE(1012)
																				int x = c->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1012)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1012)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1012)
																	node1->height = ((int)1 + _Function_12_1::Block(c,f));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1012);
																			{
																				HX_STACK_LINE(1012)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1012)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1012)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1012)
																	b->height = ((int)1 + _Function_12_2::Block(node1,g));
																}
																HX_STACK_LINE(1012)
																return b;
															}
															return null();
														}
													};
													HX_STACK_LINE(1012)
													return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_10_1::Block(b,c,node1,tree)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_10_2::Block(b,node1,tree,c)) : ::zpp_nape::space::ZPP_AABBNode(node1) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1012)
										node1 = (  (((bool((node1->child1 == null())) || bool((node1->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node1) : ::zpp_nape::space::ZPP_AABBNode(_Function_9_1::Block(node1,tree)) );
										HX_STACK_LINE(1012)
										::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
										HX_STACK_LINE(1012)
										::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
										HX_STACK_LINE(1012)
										{
											HX_STACK_LINE(1012)
											::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
											::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
											::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1012)
											_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
											HX_STACK_LINE(1012)
											_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
											HX_STACK_LINE(1012)
											_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
											HX_STACK_LINE(1012)
											_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
										}
										struct _Function_9_2{
											inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1012);
												{
													HX_STACK_LINE(1012)
													int x = child1->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1012)
													int y = child2->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1012)
													return (  (((x > y))) ? int(x) : int(y) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1012)
										node1->height = ((int)1 + _Function_9_2::Block(child1,child2));
										HX_STACK_LINE(1012)
										node1 = node1->parent;
									}
								}
								else{
									HX_STACK_LINE(1012)
									tree->root = sibling;
									HX_STACK_LINE(1012)
									sibling->parent = null();
									HX_STACK_LINE(1012)
									{
										HX_STACK_LINE(1012)
										::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1012)
										{
										}
										HX_STACK_LINE(1012)
										{
											HX_STACK_LINE(1012)
											o->height = (int)-1;
											HX_STACK_LINE(1012)
											{
												HX_STACK_LINE(1012)
												::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1012)
												{
												}
												HX_STACK_LINE(1012)
												{
													HX_STACK_LINE(1012)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1012)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1012)
														o1->outer = null();
													}
													HX_STACK_LINE(1012)
													o1->wrap_min = o1->wrap_max = null();
													HX_STACK_LINE(1012)
													o1->_invalidate = null();
													HX_STACK_LINE(1012)
													o1->_validate = null();
												}
												HX_STACK_LINE(1012)
												o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
												HX_STACK_LINE(1012)
												::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
											}
											HX_STACK_LINE(1012)
											o->child1 = o->child2 = o->parent = null();
											HX_STACK_LINE(1012)
											o->next = null();
											HX_STACK_LINE(1012)
											o->snext = null();
											HX_STACK_LINE(1012)
											o->mnext = null();
										}
										HX_STACK_LINE(1012)
										o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
										HX_STACK_LINE(1012)
										::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
									}
								}
							}
						}
						else{
							HX_STACK_LINE(1014)
							node->first_sync = false;
						}
						HX_STACK_LINE(1015)
						::zpp_nape::geom::ZPP_AABB aabb = node->aabb;		HX_STACK_VAR(aabb,"aabb");
						HX_STACK_LINE(1016)
						if ((!(this->space->continuous))){
							HX_STACK_LINE(1016)
							if ((shape->zip_aabb)){
								HX_STACK_LINE(1016)
								if (((shape->body != null()))){
									HX_STACK_LINE(1016)
									shape->zip_aabb = false;
									HX_STACK_LINE(1016)
									if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
										HX_STACK_LINE(1016)
										::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1016)
										if ((_this->zip_worldCOM)){
											HX_STACK_LINE(1016)
											if (((_this->body != null()))){
												HX_STACK_LINE(1016)
												_this->zip_worldCOM = false;
												HX_STACK_LINE(1016)
												if ((_this->zip_localCOM)){
													HX_STACK_LINE(1016)
													_this->zip_localCOM = false;
													HX_STACK_LINE(1016)
													if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
														HX_STACK_LINE(1016)
														::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1016)
														if (((_this1->lverts->next == null()))){
															HX_STACK_LINE(1016)
															hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
														}
														HX_STACK_LINE(1016)
														if (((_this1->lverts->next->next == null()))){
															HX_STACK_LINE(1016)
															_this1->localCOMx = _this1->lverts->next->x;
															HX_STACK_LINE(1016)
															_this1->localCOMy = _this1->lverts->next->y;
															HX_STACK_LINE(1016)
															{
															}
															HX_STACK_LINE(1016)
															Dynamic();
														}
														else{
															HX_STACK_LINE(1016)
															if (((_this1->lverts->next->next->next == null()))){
																HX_STACK_LINE(1016)
																{
																	HX_STACK_LINE(1016)
																	_this1->localCOMx = _this1->lverts->next->x;
																	HX_STACK_LINE(1016)
																	_this1->localCOMy = _this1->lverts->next->y;
																	HX_STACK_LINE(1016)
																	{
																	}
																	HX_STACK_LINE(1016)
																	{
																	}
																}
																HX_STACK_LINE(1016)
																{
																	HX_STACK_LINE(1016)
																	Float t = 1.0;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1016)
																	{
																	}
																	HX_STACK_LINE(1016)
																	hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																	HX_STACK_LINE(1016)
																	hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
																}
																HX_STACK_LINE(1016)
																{
																	HX_STACK_LINE(1016)
																	Float t = 0.5;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1016)
																	{
																	}
																	HX_STACK_LINE(1016)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1016)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
															else{
																HX_STACK_LINE(1016)
																{
																	HX_STACK_LINE(1016)
																	_this1->localCOMx = (int)0;
																	HX_STACK_LINE(1016)
																	_this1->localCOMy = (int)0;
																	HX_STACK_LINE(1016)
																	{
																	}
																	HX_STACK_LINE(1016)
																	{
																	}
																}
																HX_STACK_LINE(1016)
																Float area = 0.0;		HX_STACK_VAR(area,"area");
																HX_STACK_LINE(1016)
																{
																	HX_STACK_LINE(1016)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
																	HX_STACK_LINE(1016)
																	::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																	HX_STACK_LINE(1016)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1016)
																	::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																	HX_STACK_LINE(1016)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1016)
																	while(((cx_ite != null()))){
																		HX_STACK_LINE(1016)
																		::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																		HX_STACK_LINE(1016)
																		{
																			HX_STACK_LINE(1016)
																			hx::AddEq(area,(v->x * ((w->y - u->y))));
																			HX_STACK_LINE(1016)
																			Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																			HX_STACK_LINE(1016)
																			hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																			HX_STACK_LINE(1016)
																			hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																		}
																		HX_STACK_LINE(1016)
																		u = v;
																		HX_STACK_LINE(1016)
																		v = w;
																		HX_STACK_LINE(1016)
																		cx_ite = cx_ite->next;
																	}
																	HX_STACK_LINE(1016)
																	cx_ite = _this1->lverts->next;
																	HX_STACK_LINE(1016)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1016)
																	{
																		HX_STACK_LINE(1016)
																		hx::AddEq(area,(v->x * ((w->y - u->y))));
																		HX_STACK_LINE(1016)
																		Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1016)
																		hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																		HX_STACK_LINE(1016)
																		hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																	}
																	HX_STACK_LINE(1016)
																	u = v;
																	HX_STACK_LINE(1016)
																	v = w;
																	HX_STACK_LINE(1016)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1016)
																	::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																	HX_STACK_LINE(1016)
																	{
																		HX_STACK_LINE(1016)
																		hx::AddEq(area,(v->x * ((w1->y - u->y))));
																		HX_STACK_LINE(1016)
																		Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1016)
																		hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																		HX_STACK_LINE(1016)
																		hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																	}
																}
																HX_STACK_LINE(1016)
																area = (Float((int)1) / Float((((int)3 * area))));
																HX_STACK_LINE(1016)
																{
																	HX_STACK_LINE(1016)
																	Float t = area;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1016)
																	{
																	}
																	HX_STACK_LINE(1016)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1016)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
														}
													}
												}
												HX_STACK_LINE(1016)
												{
													HX_STACK_LINE(1016)
													::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1016)
													if ((_this1->zip_axis)){
														HX_STACK_LINE(1016)
														_this1->zip_axis = false;
														HX_STACK_LINE(1016)
														{
															HX_STACK_LINE(1016)
															_this1->axisx = ::Math_obj::sin(_this1->rot);
															HX_STACK_LINE(1016)
															_this1->axisy = ::Math_obj::cos(_this1->rot);
															HX_STACK_LINE(1016)
															{
															}
															HX_STACK_LINE(1016)
															Dynamic();
														}
													}
												}
												HX_STACK_LINE(1016)
												{
													HX_STACK_LINE(1016)
													_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
													HX_STACK_LINE(1016)
													_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
												}
											}
										}
										HX_STACK_LINE(1016)
										Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
										HX_STACK_LINE(1016)
										Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
										HX_STACK_LINE(1016)
										{
										}
										HX_STACK_LINE(1016)
										{
										}
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											_this->aabb->minx = (_this->worldCOMx - rx);
											HX_STACK_LINE(1016)
											_this->aabb->miny = (_this->worldCOMy - ry);
										}
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											_this->aabb->maxx = (_this->worldCOMx + rx);
											HX_STACK_LINE(1016)
											_this->aabb->maxy = (_this->worldCOMy + ry);
										}
									}
									else{
										HX_STACK_LINE(1016)
										::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1016)
										if ((_this->zip_gverts)){
											HX_STACK_LINE(1016)
											if (((_this->body != null()))){
												HX_STACK_LINE(1016)
												_this->zip_gverts = false;
												HX_STACK_LINE(1016)
												_this->validate_lverts();
												HX_STACK_LINE(1016)
												{
													HX_STACK_LINE(1016)
													::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1016)
													if ((_this1->zip_axis)){
														HX_STACK_LINE(1016)
														_this1->zip_axis = false;
														HX_STACK_LINE(1016)
														{
															HX_STACK_LINE(1016)
															_this1->axisx = ::Math_obj::sin(_this1->rot);
															HX_STACK_LINE(1016)
															_this1->axisy = ::Math_obj::cos(_this1->rot);
															HX_STACK_LINE(1016)
															{
															}
															HX_STACK_LINE(1016)
															Dynamic();
														}
													}
												}
												HX_STACK_LINE(1016)
												::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
												HX_STACK_LINE(1016)
												{
													HX_STACK_LINE(1016)
													::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(1016)
													while(((cx_ite != null()))){
														HX_STACK_LINE(1016)
														::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1016)
														{
															HX_STACK_LINE(1016)
															::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
															HX_STACK_LINE(1016)
															li = li->next;
															HX_STACK_LINE(1016)
															{
																HX_STACK_LINE(1016)
																g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
																HX_STACK_LINE(1016)
																g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
															}
														}
														HX_STACK_LINE(1016)
														cx_ite = cx_ite->next;
													}
												}
											}
										}
										HX_STACK_LINE(1016)
										if (((_this->lverts->next == null()))){
											HX_STACK_LINE(1016)
											hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
										}
										HX_STACK_LINE(1016)
										::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											_this->aabb->minx = p0->x;
											HX_STACK_LINE(1016)
											_this->aabb->miny = p0->y;
											HX_STACK_LINE(1016)
											{
											}
											HX_STACK_LINE(1016)
											{
											}
										}
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											_this->aabb->maxx = p0->x;
											HX_STACK_LINE(1016)
											_this->aabb->maxy = p0->y;
											HX_STACK_LINE(1016)
											{
											}
											HX_STACK_LINE(1016)
											{
											}
										}
										HX_STACK_LINE(1016)
										{
											HX_STACK_LINE(1016)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(1016)
											while(((cx_ite != null()))){
												HX_STACK_LINE(1016)
												::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
												HX_STACK_LINE(1016)
												{
													HX_STACK_LINE(1016)
													if (((p->x < _this->aabb->minx))){
														HX_STACK_LINE(1016)
														_this->aabb->minx = p->x;
													}
													HX_STACK_LINE(1016)
													if (((p->x > _this->aabb->maxx))){
														HX_STACK_LINE(1016)
														_this->aabb->maxx = p->x;
													}
													HX_STACK_LINE(1016)
													if (((p->y < _this->aabb->miny))){
														HX_STACK_LINE(1016)
														_this->aabb->miny = p->y;
													}
													HX_STACK_LINE(1016)
													if (((p->y > _this->aabb->maxy))){
														HX_STACK_LINE(1016)
														_this->aabb->maxy = p->y;
													}
												}
												HX_STACK_LINE(1016)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							::zpp_nape::geom::ZPP_AABB a = shape->aabb;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1017)
							aabb->minx = (a->minx - 3.0);
							HX_STACK_LINE(1017)
							aabb->miny = (a->miny - 3.0);
							HX_STACK_LINE(1017)
							aabb->maxx = (a->maxx + 3.0);
							HX_STACK_LINE(1017)
							aabb->maxy = (a->maxy + 3.0);
						}
						HX_STACK_LINE(1018)
						::zpp_nape::space::ZPP_AABBTree tree = (  ((node->dyn = (  (((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))) ? bool(false) : bool(!(shape->body->component->sleeping)) ))) ? ::zpp_nape::space::ZPP_AABBTree(this->dtree) : ::zpp_nape::space::ZPP_AABBTree(this->stree) );		HX_STACK_VAR(tree,"tree");
						HX_STACK_LINE(1019)
						if (((tree->root == null()))){
							HX_STACK_LINE(1019)
							tree->root = node;
							HX_STACK_LINE(1019)
							tree->root->parent = null();
						}
						else{
							HX_STACK_LINE(1019)
							::zpp_nape::geom::ZPP_AABB leafaabb = node->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
							HX_STACK_LINE(1019)
							::zpp_nape::space::ZPP_AABBNode node1 = tree->root;		HX_STACK_VAR(node1,"node1");
							HX_STACK_LINE(1019)
							while((!(((node1->child1 == null()))))){
								HX_STACK_LINE(1019)
								::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
								HX_STACK_LINE(1019)
								::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
								struct _Function_7_1{
									inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &node1){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
										{
											HX_STACK_LINE(1019)
											::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1019)
											return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
										}
										return null();
									}
								};
								HX_STACK_LINE(1019)
								Float area = _Function_7_1::Block(node1);		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(1019)
								{
									HX_STACK_LINE(1019)
									::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
									::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1019)
									_this->minx = (  (((a->minx < leafaabb->minx))) ? Float(a->minx) : Float(leafaabb->minx) );
									HX_STACK_LINE(1019)
									_this->miny = (  (((a->miny < leafaabb->miny))) ? Float(a->miny) : Float(leafaabb->miny) );
									HX_STACK_LINE(1019)
									_this->maxx = (  (((a->maxx > leafaabb->maxx))) ? Float(a->maxx) : Float(leafaabb->maxx) );
									HX_STACK_LINE(1019)
									_this->maxy = (  (((a->maxy > leafaabb->maxy))) ? Float(a->maxy) : Float(leafaabb->maxy) );
								}
								struct _Function_7_2{
									inline static Float Block( ){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
										{
											HX_STACK_LINE(1019)
											::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1019)
											return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
										}
										return null();
									}
								};
								HX_STACK_LINE(1019)
								Float carea = _Function_7_2::Block();		HX_STACK_VAR(carea,"carea");
								HX_STACK_LINE(1019)
								Float cost = ((int)2 * carea);		HX_STACK_VAR(cost,"cost");
								HX_STACK_LINE(1019)
								Float icost = ((int)2 * ((carea - area)));		HX_STACK_VAR(icost,"icost");
								struct _Function_7_3{
									inline static Float Block( ::zpp_nape::geom::ZPP_AABB &leafaabb,::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
										{
											HX_STACK_LINE(1019)
											{
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(1019)
												_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
												HX_STACK_LINE(1019)
												_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
												HX_STACK_LINE(1019)
												_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
												HX_STACK_LINE(1019)
												_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
											}
											struct _Function_8_1{
												inline static Float Block( ){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
													{
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1019)
														return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
													{
														struct _Function_9_1{
															inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
																{
																	HX_STACK_LINE(1019)
																	::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1019)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1019)
														Float oarea = _Function_9_1::Block(child1);		HX_STACK_VAR(oarea,"oarea");
														struct _Function_9_2{
															inline static Float Block( ){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
																{
																	HX_STACK_LINE(1019)
																	::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1019)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1019)
														Float narea = _Function_9_2::Block();		HX_STACK_VAR(narea,"narea");
														HX_STACK_LINE(1019)
														return ((narea - oarea) + icost);
													}
													return null();
												}
											};
											HX_STACK_LINE(1019)
											return (  (((child1->child1 == null()))) ? Float((_Function_8_1::Block() + icost)) : Float(_Function_8_2::Block(child1,icost)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1019)
								Float cost1 = _Function_7_3::Block(leafaabb,child1,icost);		HX_STACK_VAR(cost1,"cost1");
								struct _Function_7_4{
									inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,::zpp_nape::geom::ZPP_AABB &leafaabb,Float &icost){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
										{
											HX_STACK_LINE(1019)
											{
												HX_STACK_LINE(1019)
												::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(1019)
												_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
												HX_STACK_LINE(1019)
												_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
												HX_STACK_LINE(1019)
												_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
												HX_STACK_LINE(1019)
												_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
											}
											struct _Function_8_1{
												inline static Float Block( ){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
													{
														HX_STACK_LINE(1019)
														::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1019)
														return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,Float &icost){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
													{
														struct _Function_9_1{
															inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
																{
																	HX_STACK_LINE(1019)
																	::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1019)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1019)
														Float oarea = _Function_9_1::Block(child2);		HX_STACK_VAR(oarea,"oarea");
														struct _Function_9_2{
															inline static Float Block( ){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
																{
																	HX_STACK_LINE(1019)
																	::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1019)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1019)
														Float narea = _Function_9_2::Block();		HX_STACK_VAR(narea,"narea");
														HX_STACK_LINE(1019)
														return ((narea - oarea) + icost);
													}
													return null();
												}
											};
											HX_STACK_LINE(1019)
											return (  (((child2->child1 == null()))) ? Float((_Function_8_1::Block() + icost)) : Float(_Function_8_2::Block(child2,icost)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1019)
								Float cost2 = _Function_7_4::Block(child2,leafaabb,icost);		HX_STACK_VAR(cost2,"cost2");
								HX_STACK_LINE(1019)
								if (((bool((cost < cost1)) && bool((cost < cost2))))){
									HX_STACK_LINE(1019)
									break;
								}
								else{
									HX_STACK_LINE(1019)
									node1 = (  (((cost1 < cost2))) ? ::zpp_nape::space::ZPP_AABBNode(child1) : ::zpp_nape::space::ZPP_AABBNode(child2) );
								}
							}
							HX_STACK_LINE(1019)
							::zpp_nape::space::ZPP_AABBNode sibling = node1;		HX_STACK_VAR(sibling,"sibling");
							HX_STACK_LINE(1019)
							::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
							HX_STACK_LINE(1019)
							::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
							HX_STACK_LINE(1019)
							{
								HX_STACK_LINE(1019)
								if (((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool == null()))){
									HX_STACK_LINE(1019)
									nparent = ::zpp_nape::space::ZPP_AABBNode_obj::__new();
								}
								else{
									HX_STACK_LINE(1019)
									nparent = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
									HX_STACK_LINE(1019)
									::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
									HX_STACK_LINE(1019)
									nparent->next = null();
								}
								HX_STACK_LINE(1019)
								{
									HX_STACK_LINE(1019)
									{
										HX_STACK_LINE(1019)
										if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
											HX_STACK_LINE(1019)
											nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
										}
										else{
											HX_STACK_LINE(1019)
											nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
											HX_STACK_LINE(1019)
											::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nparent->aabb->next;
											HX_STACK_LINE(1019)
											nparent->aabb->next = null();
										}
										HX_STACK_LINE(1019)
										Dynamic();
									}
									HX_STACK_LINE(1019)
									nparent->moved = false;
									HX_STACK_LINE(1019)
									nparent->synced = false;
									HX_STACK_LINE(1019)
									nparent->first_sync = false;
								}
							}
							HX_STACK_LINE(1019)
							nparent->parent = oparent;
							HX_STACK_LINE(1019)
							{
								HX_STACK_LINE(1019)
								::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1019)
								_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
								HX_STACK_LINE(1019)
								_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
								HX_STACK_LINE(1019)
								_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
								HX_STACK_LINE(1019)
								_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
							}
							HX_STACK_LINE(1019)
							nparent->height = (sibling->height + (int)1);
							HX_STACK_LINE(1019)
							if (((oparent != null()))){
								HX_STACK_LINE(1019)
								if (((oparent->child1 == sibling))){
									HX_STACK_LINE(1019)
									oparent->child1 = nparent;
								}
								else{
									HX_STACK_LINE(1019)
									oparent->child2 = nparent;
								}
								HX_STACK_LINE(1019)
								nparent->child1 = sibling;
								HX_STACK_LINE(1019)
								nparent->child2 = node;
								HX_STACK_LINE(1019)
								sibling->parent = nparent;
								HX_STACK_LINE(1019)
								node->parent = nparent;
							}
							else{
								HX_STACK_LINE(1019)
								nparent->child1 = sibling;
								HX_STACK_LINE(1019)
								nparent->child2 = node;
								HX_STACK_LINE(1019)
								sibling->parent = nparent;
								HX_STACK_LINE(1019)
								node->parent = nparent;
								HX_STACK_LINE(1019)
								tree->root = nparent;
							}
							HX_STACK_LINE(1019)
							node1 = node->parent;
							HX_STACK_LINE(1019)
							while(((node1 != null()))){
								struct _Function_7_1{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
										{
											HX_STACK_LINE(1019)
											::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1019)
											::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(1019)
											int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
											struct _Function_8_1{
												inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
													{
														HX_STACK_LINE(1019)
														::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1019)
														::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1019)
														c->child1 = node1;
														HX_STACK_LINE(1019)
														c->parent = node1->parent;
														HX_STACK_LINE(1019)
														node1->parent = c;
														HX_STACK_LINE(1019)
														if (((c->parent != null()))){
															HX_STACK_LINE(1019)
															if (((c->parent->child1 == node1))){
																HX_STACK_LINE(1019)
																c->parent->child1 = c;
															}
															else{
																HX_STACK_LINE(1019)
																c->parent->child2 = c;
															}
														}
														else{
															HX_STACK_LINE(1019)
															tree->root = c;
														}
														HX_STACK_LINE(1019)
														if (((f->height > g->height))){
															HX_STACK_LINE(1019)
															c->child2 = f;
															HX_STACK_LINE(1019)
															node1->child2 = g;
															HX_STACK_LINE(1019)
															g->parent = node1;
															HX_STACK_LINE(1019)
															{
																HX_STACK_LINE(1019)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1019)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1019)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1019)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1019)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1019)
															{
																HX_STACK_LINE(1019)
																::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1019)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1019)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1019)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1019)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
																	{
																		HX_STACK_LINE(1019)
																		int x = b->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1019)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1019)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1019)
															node1->height = ((int)1 + _Function_10_1::Block(b,g));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
																	{
																		HX_STACK_LINE(1019)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1019)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1019)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1019)
															c->height = ((int)1 + _Function_10_2::Block(node1,f));
														}
														else{
															HX_STACK_LINE(1019)
															c->child2 = g;
															HX_STACK_LINE(1019)
															node1->child2 = f;
															HX_STACK_LINE(1019)
															f->parent = node1;
															HX_STACK_LINE(1019)
															{
																HX_STACK_LINE(1019)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1019)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1019)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1019)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1019)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1019)
															{
																HX_STACK_LINE(1019)
																::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1019)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1019)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1019)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1019)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
																	{
																		HX_STACK_LINE(1019)
																		int x = b->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1019)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1019)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1019)
															node1->height = ((int)1 + _Function_10_1::Block(b,f));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
																	{
																		HX_STACK_LINE(1019)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1019)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1019)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1019)
															c->height = ((int)1 + _Function_10_2::Block(node1,g));
														}
														HX_STACK_LINE(1019)
														return c;
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree,::zpp_nape::space::ZPP_AABBNode &c){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
													{
														HX_STACK_LINE(1019)
														::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1019)
														::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1019)
														b->child1 = node1;
														HX_STACK_LINE(1019)
														b->parent = node1->parent;
														HX_STACK_LINE(1019)
														node1->parent = b;
														HX_STACK_LINE(1019)
														if (((b->parent != null()))){
															HX_STACK_LINE(1019)
															if (((b->parent->child1 == node1))){
																HX_STACK_LINE(1019)
																b->parent->child1 = b;
															}
															else{
																HX_STACK_LINE(1019)
																b->parent->child2 = b;
															}
														}
														else{
															HX_STACK_LINE(1019)
															tree->root = b;
														}
														HX_STACK_LINE(1019)
														if (((f->height > g->height))){
															HX_STACK_LINE(1019)
															b->child2 = f;
															HX_STACK_LINE(1019)
															node1->child1 = g;
															HX_STACK_LINE(1019)
															g->parent = node1;
															HX_STACK_LINE(1019)
															{
																HX_STACK_LINE(1019)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1019)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1019)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1019)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1019)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1019)
															{
																HX_STACK_LINE(1019)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1019)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1019)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1019)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1019)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
																	{
																		HX_STACK_LINE(1019)
																		int x = c->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1019)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1019)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1019)
															node1->height = ((int)1 + _Function_10_1::Block(c,g));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
																	{
																		HX_STACK_LINE(1019)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1019)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1019)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1019)
															b->height = ((int)1 + _Function_10_2::Block(node1,f));
														}
														else{
															HX_STACK_LINE(1019)
															b->child2 = g;
															HX_STACK_LINE(1019)
															node1->child1 = f;
															HX_STACK_LINE(1019)
															f->parent = node1;
															HX_STACK_LINE(1019)
															{
																HX_STACK_LINE(1019)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1019)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1019)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1019)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1019)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1019)
															{
																HX_STACK_LINE(1019)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1019)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1019)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1019)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1019)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
																	{
																		HX_STACK_LINE(1019)
																		int x = c->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1019)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1019)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1019)
															node1->height = ((int)1 + _Function_10_1::Block(c,f));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
																	{
																		HX_STACK_LINE(1019)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1019)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1019)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1019)
															b->height = ((int)1 + _Function_10_2::Block(node1,g));
														}
														HX_STACK_LINE(1019)
														return b;
													}
													return null();
												}
											};
											HX_STACK_LINE(1019)
											return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_8_1::Block(b,c,node1,tree)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_8_2::Block(b,node1,tree,c)) : ::zpp_nape::space::ZPP_AABBNode(node1) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1019)
								node1 = (  (((bool((node1->child1 == null())) || bool((node1->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node1) : ::zpp_nape::space::ZPP_AABBNode(_Function_7_1::Block(node1,tree)) );
								HX_STACK_LINE(1019)
								::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
								HX_STACK_LINE(1019)
								::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
								struct _Function_7_2{
									inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1019);
										{
											HX_STACK_LINE(1019)
											int x = child1->height;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(1019)
											int y = child2->height;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(1019)
											return (  (((x > y))) ? int(x) : int(y) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1019)
								node1->height = ((int)1 + _Function_7_2::Block(child1,child2));
								HX_STACK_LINE(1019)
								{
									HX_STACK_LINE(1019)
									::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
									::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
									::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1019)
									_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
									HX_STACK_LINE(1019)
									_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
									HX_STACK_LINE(1019)
									_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
									HX_STACK_LINE(1019)
									_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
								}
								HX_STACK_LINE(1019)
								node1 = node1->parent;
							}
						}
						HX_STACK_LINE(1020)
						node->synced = false;
					}
					HX_STACK_LINE(1022)
					{
					}
					HX_STACK_LINE(1030)
					node->moved = true;
					HX_STACK_LINE(1031)
					node->mnext = node->snext;
					HX_STACK_LINE(1032)
					node->snext = null();
					HX_STACK_LINE(1033)
					node = node->mnext;
				}
				HX_STACK_LINE(1035)
				{
					HX_STACK_LINE(1036)
					::zpp_nape::space::ZPP_AABBNode t = this->syncs;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1037)
					this->syncs = this->moves;
					HX_STACK_LINE(1038)
					this->moves = t;
				}
			}
			else{
				HX_STACK_LINE(1041)
				while(((this->syncs != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_DynAABBPhase_obj *__this){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1043);
							{
								HX_STACK_LINE(1044)
								{
								}
								HX_STACK_LINE(1052)
								::zpp_nape::space::ZPP_AABBNode ret = __this->syncs;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1053)
								__this->syncs = ret->snext;
								HX_STACK_LINE(1054)
								ret->snext = null();
								HX_STACK_LINE(1055)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1043)
					::zpp_nape::space::ZPP_AABBNode node = _Function_4_1::Block(this);		HX_STACK_VAR(node,"node");
					HX_STACK_LINE(1057)
					{
						HX_STACK_LINE(1058)
						::zpp_nape::shape::ZPP_Shape shape = node->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1059)
						{
						}
						HX_STACK_LINE(1067)
						{
						}
						HX_STACK_LINE(1075)
						if ((!(node->first_sync))){
							HX_STACK_LINE(1076)
							::zpp_nape::space::ZPP_AABBTree tree = (  ((node->dyn)) ? ::zpp_nape::space::ZPP_AABBTree(this->dtree) : ::zpp_nape::space::ZPP_AABBTree(this->stree) );		HX_STACK_VAR(tree,"tree");
							HX_STACK_LINE(1077)
							if (((node == tree->root))){
								HX_STACK_LINE(1077)
								tree->root = null();
								HX_STACK_LINE(1077)
								Dynamic();
							}
							else{
								HX_STACK_LINE(1077)
								::zpp_nape::space::ZPP_AABBNode parent = node->parent;		HX_STACK_VAR(parent,"parent");
								HX_STACK_LINE(1077)
								::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
								HX_STACK_LINE(1077)
								::zpp_nape::space::ZPP_AABBNode sibling = (  (((parent->child1 == node))) ? ::zpp_nape::space::ZPP_AABBNode(parent->child2) : ::zpp_nape::space::ZPP_AABBNode(parent->child1) );		HX_STACK_VAR(sibling,"sibling");
								HX_STACK_LINE(1077)
								if (((gparent != null()))){
									HX_STACK_LINE(1077)
									if (((gparent->child1 == parent))){
										HX_STACK_LINE(1077)
										gparent->child1 = sibling;
									}
									else{
										HX_STACK_LINE(1077)
										gparent->child2 = sibling;
									}
									HX_STACK_LINE(1077)
									sibling->parent = gparent;
									HX_STACK_LINE(1077)
									{
										HX_STACK_LINE(1077)
										::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1077)
										{
										}
										HX_STACK_LINE(1077)
										{
											HX_STACK_LINE(1077)
											o->height = (int)-1;
											HX_STACK_LINE(1077)
											{
												HX_STACK_LINE(1077)
												::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1077)
												{
												}
												HX_STACK_LINE(1077)
												{
													HX_STACK_LINE(1077)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1077)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1077)
														o1->outer = null();
													}
													HX_STACK_LINE(1077)
													o1->wrap_min = o1->wrap_max = null();
													HX_STACK_LINE(1077)
													o1->_invalidate = null();
													HX_STACK_LINE(1077)
													o1->_validate = null();
												}
												HX_STACK_LINE(1077)
												o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
												HX_STACK_LINE(1077)
												::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
											}
											HX_STACK_LINE(1077)
											o->child1 = o->child2 = o->parent = null();
											HX_STACK_LINE(1077)
											o->next = null();
											HX_STACK_LINE(1077)
											o->snext = null();
											HX_STACK_LINE(1077)
											o->mnext = null();
										}
										HX_STACK_LINE(1077)
										o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
										HX_STACK_LINE(1077)
										::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1077)
									::zpp_nape::space::ZPP_AABBNode node1 = gparent;		HX_STACK_VAR(node1,"node1");
									HX_STACK_LINE(1077)
									while(((node1 != null()))){
										struct _Function_9_1{
											inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1077);
												{
													HX_STACK_LINE(1077)
													::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(1077)
													::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
													HX_STACK_LINE(1077)
													int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
													struct _Function_10_1{
														inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1077);
															{
																HX_STACK_LINE(1077)
																::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
																HX_STACK_LINE(1077)
																::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
																HX_STACK_LINE(1077)
																c->child1 = node1;
																HX_STACK_LINE(1077)
																c->parent = node1->parent;
																HX_STACK_LINE(1077)
																node1->parent = c;
																HX_STACK_LINE(1077)
																if (((c->parent != null()))){
																	HX_STACK_LINE(1077)
																	if (((c->parent->child1 == node1))){
																		HX_STACK_LINE(1077)
																		c->parent->child1 = c;
																	}
																	else{
																		HX_STACK_LINE(1077)
																		c->parent->child2 = c;
																	}
																}
																else{
																	HX_STACK_LINE(1077)
																	tree->root = c;
																}
																HX_STACK_LINE(1077)
																if (((f->height > g->height))){
																	HX_STACK_LINE(1077)
																	c->child2 = f;
																	HX_STACK_LINE(1077)
																	node1->child2 = g;
																	HX_STACK_LINE(1077)
																	g->parent = node1;
																	HX_STACK_LINE(1077)
																	{
																		HX_STACK_LINE(1077)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1077)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1077)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1077)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1077)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1077)
																	{
																		HX_STACK_LINE(1077)
																		::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1077)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1077)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1077)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1077)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1077);
																			{
																				HX_STACK_LINE(1077)
																				int x = b->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1077)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1077)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1077)
																	node1->height = ((int)1 + _Function_12_1::Block(b,g));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1077);
																			{
																				HX_STACK_LINE(1077)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1077)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1077)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1077)
																	c->height = ((int)1 + _Function_12_2::Block(node1,f));
																}
																else{
																	HX_STACK_LINE(1077)
																	c->child2 = g;
																	HX_STACK_LINE(1077)
																	node1->child2 = f;
																	HX_STACK_LINE(1077)
																	f->parent = node1;
																	HX_STACK_LINE(1077)
																	{
																		HX_STACK_LINE(1077)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1077)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1077)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1077)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1077)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1077)
																	{
																		HX_STACK_LINE(1077)
																		::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1077)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1077)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1077)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1077)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1077);
																			{
																				HX_STACK_LINE(1077)
																				int x = b->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1077)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1077)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1077)
																	node1->height = ((int)1 + _Function_12_1::Block(b,f));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1077);
																			{
																				HX_STACK_LINE(1077)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1077)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1077)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1077)
																	c->height = ((int)1 + _Function_12_2::Block(node1,g));
																}
																HX_STACK_LINE(1077)
																return c;
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree,::zpp_nape::space::ZPP_AABBNode &c){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1077);
															{
																HX_STACK_LINE(1077)
																::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
																HX_STACK_LINE(1077)
																::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
																HX_STACK_LINE(1077)
																b->child1 = node1;
																HX_STACK_LINE(1077)
																b->parent = node1->parent;
																HX_STACK_LINE(1077)
																node1->parent = b;
																HX_STACK_LINE(1077)
																if (((b->parent != null()))){
																	HX_STACK_LINE(1077)
																	if (((b->parent->child1 == node1))){
																		HX_STACK_LINE(1077)
																		b->parent->child1 = b;
																	}
																	else{
																		HX_STACK_LINE(1077)
																		b->parent->child2 = b;
																	}
																}
																else{
																	HX_STACK_LINE(1077)
																	tree->root = b;
																}
																HX_STACK_LINE(1077)
																if (((f->height > g->height))){
																	HX_STACK_LINE(1077)
																	b->child2 = f;
																	HX_STACK_LINE(1077)
																	node1->child1 = g;
																	HX_STACK_LINE(1077)
																	g->parent = node1;
																	HX_STACK_LINE(1077)
																	{
																		HX_STACK_LINE(1077)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1077)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1077)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1077)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1077)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1077)
																	{
																		HX_STACK_LINE(1077)
																		::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1077)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1077)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1077)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1077)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1077);
																			{
																				HX_STACK_LINE(1077)
																				int x = c->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1077)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1077)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1077)
																	node1->height = ((int)1 + _Function_12_1::Block(c,g));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1077);
																			{
																				HX_STACK_LINE(1077)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1077)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1077)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1077)
																	b->height = ((int)1 + _Function_12_2::Block(node1,f));
																}
																else{
																	HX_STACK_LINE(1077)
																	b->child2 = g;
																	HX_STACK_LINE(1077)
																	node1->child1 = f;
																	HX_STACK_LINE(1077)
																	f->parent = node1;
																	HX_STACK_LINE(1077)
																	{
																		HX_STACK_LINE(1077)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1077)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1077)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1077)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1077)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1077)
																	{
																		HX_STACK_LINE(1077)
																		::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1077)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1077)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1077)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1077)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1077);
																			{
																				HX_STACK_LINE(1077)
																				int x = c->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1077)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1077)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1077)
																	node1->height = ((int)1 + _Function_12_1::Block(c,f));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1077);
																			{
																				HX_STACK_LINE(1077)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1077)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1077)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1077)
																	b->height = ((int)1 + _Function_12_2::Block(node1,g));
																}
																HX_STACK_LINE(1077)
																return b;
															}
															return null();
														}
													};
													HX_STACK_LINE(1077)
													return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_10_1::Block(b,c,node1,tree)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_10_2::Block(b,node1,tree,c)) : ::zpp_nape::space::ZPP_AABBNode(node1) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1077)
										node1 = (  (((bool((node1->child1 == null())) || bool((node1->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node1) : ::zpp_nape::space::ZPP_AABBNode(_Function_9_1::Block(node1,tree)) );
										HX_STACK_LINE(1077)
										::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
										HX_STACK_LINE(1077)
										::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
										HX_STACK_LINE(1077)
										{
											HX_STACK_LINE(1077)
											::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
											::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
											::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1077)
											_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
											HX_STACK_LINE(1077)
											_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
											HX_STACK_LINE(1077)
											_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
											HX_STACK_LINE(1077)
											_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
										}
										struct _Function_9_2{
											inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1077);
												{
													HX_STACK_LINE(1077)
													int x = child1->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1077)
													int y = child2->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1077)
													return (  (((x > y))) ? int(x) : int(y) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1077)
										node1->height = ((int)1 + _Function_9_2::Block(child1,child2));
										HX_STACK_LINE(1077)
										node1 = node1->parent;
									}
								}
								else{
									HX_STACK_LINE(1077)
									tree->root = sibling;
									HX_STACK_LINE(1077)
									sibling->parent = null();
									HX_STACK_LINE(1077)
									{
										HX_STACK_LINE(1077)
										::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1077)
										{
										}
										HX_STACK_LINE(1077)
										{
											HX_STACK_LINE(1077)
											o->height = (int)-1;
											HX_STACK_LINE(1077)
											{
												HX_STACK_LINE(1077)
												::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1077)
												{
												}
												HX_STACK_LINE(1077)
												{
													HX_STACK_LINE(1077)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1077)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1077)
														o1->outer = null();
													}
													HX_STACK_LINE(1077)
													o1->wrap_min = o1->wrap_max = null();
													HX_STACK_LINE(1077)
													o1->_invalidate = null();
													HX_STACK_LINE(1077)
													o1->_validate = null();
												}
												HX_STACK_LINE(1077)
												o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
												HX_STACK_LINE(1077)
												::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
											}
											HX_STACK_LINE(1077)
											o->child1 = o->child2 = o->parent = null();
											HX_STACK_LINE(1077)
											o->next = null();
											HX_STACK_LINE(1077)
											o->snext = null();
											HX_STACK_LINE(1077)
											o->mnext = null();
										}
										HX_STACK_LINE(1077)
										o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
										HX_STACK_LINE(1077)
										::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
									}
								}
							}
						}
						else{
							HX_STACK_LINE(1079)
							node->first_sync = false;
						}
						HX_STACK_LINE(1080)
						::zpp_nape::geom::ZPP_AABB aabb = node->aabb;		HX_STACK_VAR(aabb,"aabb");
						HX_STACK_LINE(1081)
						if ((!(this->space->continuous))){
							HX_STACK_LINE(1081)
							if ((shape->zip_aabb)){
								HX_STACK_LINE(1081)
								if (((shape->body != null()))){
									HX_STACK_LINE(1081)
									shape->zip_aabb = false;
									HX_STACK_LINE(1081)
									if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
										HX_STACK_LINE(1081)
										::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1081)
										if ((_this->zip_worldCOM)){
											HX_STACK_LINE(1081)
											if (((_this->body != null()))){
												HX_STACK_LINE(1081)
												_this->zip_worldCOM = false;
												HX_STACK_LINE(1081)
												if ((_this->zip_localCOM)){
													HX_STACK_LINE(1081)
													_this->zip_localCOM = false;
													HX_STACK_LINE(1081)
													if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
														HX_STACK_LINE(1081)
														::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1081)
														if (((_this1->lverts->next == null()))){
															HX_STACK_LINE(1081)
															hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
														}
														HX_STACK_LINE(1081)
														if (((_this1->lverts->next->next == null()))){
															HX_STACK_LINE(1081)
															_this1->localCOMx = _this1->lverts->next->x;
															HX_STACK_LINE(1081)
															_this1->localCOMy = _this1->lverts->next->y;
															HX_STACK_LINE(1081)
															{
															}
															HX_STACK_LINE(1081)
															Dynamic();
														}
														else{
															HX_STACK_LINE(1081)
															if (((_this1->lverts->next->next->next == null()))){
																HX_STACK_LINE(1081)
																{
																	HX_STACK_LINE(1081)
																	_this1->localCOMx = _this1->lverts->next->x;
																	HX_STACK_LINE(1081)
																	_this1->localCOMy = _this1->lverts->next->y;
																	HX_STACK_LINE(1081)
																	{
																	}
																	HX_STACK_LINE(1081)
																	{
																	}
																}
																HX_STACK_LINE(1081)
																{
																	HX_STACK_LINE(1081)
																	Float t = 1.0;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1081)
																	{
																	}
																	HX_STACK_LINE(1081)
																	hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																	HX_STACK_LINE(1081)
																	hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
																}
																HX_STACK_LINE(1081)
																{
																	HX_STACK_LINE(1081)
																	Float t = 0.5;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1081)
																	{
																	}
																	HX_STACK_LINE(1081)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1081)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
															else{
																HX_STACK_LINE(1081)
																{
																	HX_STACK_LINE(1081)
																	_this1->localCOMx = (int)0;
																	HX_STACK_LINE(1081)
																	_this1->localCOMy = (int)0;
																	HX_STACK_LINE(1081)
																	{
																	}
																	HX_STACK_LINE(1081)
																	{
																	}
																}
																HX_STACK_LINE(1081)
																Float area = 0.0;		HX_STACK_VAR(area,"area");
																HX_STACK_LINE(1081)
																{
																	HX_STACK_LINE(1081)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
																	HX_STACK_LINE(1081)
																	::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																	HX_STACK_LINE(1081)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1081)
																	::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																	HX_STACK_LINE(1081)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1081)
																	while(((cx_ite != null()))){
																		HX_STACK_LINE(1081)
																		::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																		HX_STACK_LINE(1081)
																		{
																			HX_STACK_LINE(1081)
																			hx::AddEq(area,(v->x * ((w->y - u->y))));
																			HX_STACK_LINE(1081)
																			Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																			HX_STACK_LINE(1081)
																			hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																			HX_STACK_LINE(1081)
																			hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																		}
																		HX_STACK_LINE(1081)
																		u = v;
																		HX_STACK_LINE(1081)
																		v = w;
																		HX_STACK_LINE(1081)
																		cx_ite = cx_ite->next;
																	}
																	HX_STACK_LINE(1081)
																	cx_ite = _this1->lverts->next;
																	HX_STACK_LINE(1081)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1081)
																	{
																		HX_STACK_LINE(1081)
																		hx::AddEq(area,(v->x * ((w->y - u->y))));
																		HX_STACK_LINE(1081)
																		Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1081)
																		hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																		HX_STACK_LINE(1081)
																		hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																	}
																	HX_STACK_LINE(1081)
																	u = v;
																	HX_STACK_LINE(1081)
																	v = w;
																	HX_STACK_LINE(1081)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1081)
																	::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																	HX_STACK_LINE(1081)
																	{
																		HX_STACK_LINE(1081)
																		hx::AddEq(area,(v->x * ((w1->y - u->y))));
																		HX_STACK_LINE(1081)
																		Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1081)
																		hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																		HX_STACK_LINE(1081)
																		hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																	}
																}
																HX_STACK_LINE(1081)
																area = (Float((int)1) / Float((((int)3 * area))));
																HX_STACK_LINE(1081)
																{
																	HX_STACK_LINE(1081)
																	Float t = area;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1081)
																	{
																	}
																	HX_STACK_LINE(1081)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1081)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
														}
													}
												}
												HX_STACK_LINE(1081)
												{
													HX_STACK_LINE(1081)
													::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1081)
													if ((_this1->zip_axis)){
														HX_STACK_LINE(1081)
														_this1->zip_axis = false;
														HX_STACK_LINE(1081)
														{
															HX_STACK_LINE(1081)
															_this1->axisx = ::Math_obj::sin(_this1->rot);
															HX_STACK_LINE(1081)
															_this1->axisy = ::Math_obj::cos(_this1->rot);
															HX_STACK_LINE(1081)
															{
															}
															HX_STACK_LINE(1081)
															Dynamic();
														}
													}
												}
												HX_STACK_LINE(1081)
												{
													HX_STACK_LINE(1081)
													_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
													HX_STACK_LINE(1081)
													_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
												}
											}
										}
										HX_STACK_LINE(1081)
										Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
										HX_STACK_LINE(1081)
										Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
										HX_STACK_LINE(1081)
										{
										}
										HX_STACK_LINE(1081)
										{
										}
										HX_STACK_LINE(1081)
										{
											HX_STACK_LINE(1081)
											_this->aabb->minx = (_this->worldCOMx - rx);
											HX_STACK_LINE(1081)
											_this->aabb->miny = (_this->worldCOMy - ry);
										}
										HX_STACK_LINE(1081)
										{
											HX_STACK_LINE(1081)
											_this->aabb->maxx = (_this->worldCOMx + rx);
											HX_STACK_LINE(1081)
											_this->aabb->maxy = (_this->worldCOMy + ry);
										}
									}
									else{
										HX_STACK_LINE(1081)
										::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1081)
										if ((_this->zip_gverts)){
											HX_STACK_LINE(1081)
											if (((_this->body != null()))){
												HX_STACK_LINE(1081)
												_this->zip_gverts = false;
												HX_STACK_LINE(1081)
												_this->validate_lverts();
												HX_STACK_LINE(1081)
												{
													HX_STACK_LINE(1081)
													::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1081)
													if ((_this1->zip_axis)){
														HX_STACK_LINE(1081)
														_this1->zip_axis = false;
														HX_STACK_LINE(1081)
														{
															HX_STACK_LINE(1081)
															_this1->axisx = ::Math_obj::sin(_this1->rot);
															HX_STACK_LINE(1081)
															_this1->axisy = ::Math_obj::cos(_this1->rot);
															HX_STACK_LINE(1081)
															{
															}
															HX_STACK_LINE(1081)
															Dynamic();
														}
													}
												}
												HX_STACK_LINE(1081)
												::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
												HX_STACK_LINE(1081)
												{
													HX_STACK_LINE(1081)
													::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(1081)
													while(((cx_ite != null()))){
														HX_STACK_LINE(1081)
														::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1081)
														{
															HX_STACK_LINE(1081)
															::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
															HX_STACK_LINE(1081)
															li = li->next;
															HX_STACK_LINE(1081)
															{
																HX_STACK_LINE(1081)
																g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
																HX_STACK_LINE(1081)
																g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
															}
														}
														HX_STACK_LINE(1081)
														cx_ite = cx_ite->next;
													}
												}
											}
										}
										HX_STACK_LINE(1081)
										if (((_this->lverts->next == null()))){
											HX_STACK_LINE(1081)
											hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
										}
										HX_STACK_LINE(1081)
										::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
										HX_STACK_LINE(1081)
										{
											HX_STACK_LINE(1081)
											_this->aabb->minx = p0->x;
											HX_STACK_LINE(1081)
											_this->aabb->miny = p0->y;
											HX_STACK_LINE(1081)
											{
											}
											HX_STACK_LINE(1081)
											{
											}
										}
										HX_STACK_LINE(1081)
										{
											HX_STACK_LINE(1081)
											_this->aabb->maxx = p0->x;
											HX_STACK_LINE(1081)
											_this->aabb->maxy = p0->y;
											HX_STACK_LINE(1081)
											{
											}
											HX_STACK_LINE(1081)
											{
											}
										}
										HX_STACK_LINE(1081)
										{
											HX_STACK_LINE(1081)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(1081)
											while(((cx_ite != null()))){
												HX_STACK_LINE(1081)
												::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
												HX_STACK_LINE(1081)
												{
													HX_STACK_LINE(1081)
													if (((p->x < _this->aabb->minx))){
														HX_STACK_LINE(1081)
														_this->aabb->minx = p->x;
													}
													HX_STACK_LINE(1081)
													if (((p->x > _this->aabb->maxx))){
														HX_STACK_LINE(1081)
														_this->aabb->maxx = p->x;
													}
													HX_STACK_LINE(1081)
													if (((p->y < _this->aabb->miny))){
														HX_STACK_LINE(1081)
														_this->aabb->miny = p->y;
													}
													HX_STACK_LINE(1081)
													if (((p->y > _this->aabb->maxy))){
														HX_STACK_LINE(1081)
														_this->aabb->maxy = p->y;
													}
												}
												HX_STACK_LINE(1081)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(1082)
						{
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_AABB a = shape->aabb;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1082)
							aabb->minx = (a->minx - 3.0);
							HX_STACK_LINE(1082)
							aabb->miny = (a->miny - 3.0);
							HX_STACK_LINE(1082)
							aabb->maxx = (a->maxx + 3.0);
							HX_STACK_LINE(1082)
							aabb->maxy = (a->maxy + 3.0);
						}
						HX_STACK_LINE(1083)
						::zpp_nape::space::ZPP_AABBTree tree = (  ((node->dyn = (  (((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))) ? bool(false) : bool(!(shape->body->component->sleeping)) ))) ? ::zpp_nape::space::ZPP_AABBTree(this->dtree) : ::zpp_nape::space::ZPP_AABBTree(this->stree) );		HX_STACK_VAR(tree,"tree");
						HX_STACK_LINE(1084)
						if (((tree->root == null()))){
							HX_STACK_LINE(1084)
							tree->root = node;
							HX_STACK_LINE(1084)
							tree->root->parent = null();
						}
						else{
							HX_STACK_LINE(1084)
							::zpp_nape::geom::ZPP_AABB leafaabb = node->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
							HX_STACK_LINE(1084)
							::zpp_nape::space::ZPP_AABBNode node1 = tree->root;		HX_STACK_VAR(node1,"node1");
							HX_STACK_LINE(1084)
							while((!(((node1->child1 == null()))))){
								HX_STACK_LINE(1084)
								::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
								HX_STACK_LINE(1084)
								::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
								struct _Function_7_1{
									inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &node1){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
										{
											HX_STACK_LINE(1084)
											::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1084)
											return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
										}
										return null();
									}
								};
								HX_STACK_LINE(1084)
								Float area = _Function_7_1::Block(node1);		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(1084)
								{
									HX_STACK_LINE(1084)
									::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
									::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1084)
									_this->minx = (  (((a->minx < leafaabb->minx))) ? Float(a->minx) : Float(leafaabb->minx) );
									HX_STACK_LINE(1084)
									_this->miny = (  (((a->miny < leafaabb->miny))) ? Float(a->miny) : Float(leafaabb->miny) );
									HX_STACK_LINE(1084)
									_this->maxx = (  (((a->maxx > leafaabb->maxx))) ? Float(a->maxx) : Float(leafaabb->maxx) );
									HX_STACK_LINE(1084)
									_this->maxy = (  (((a->maxy > leafaabb->maxy))) ? Float(a->maxy) : Float(leafaabb->maxy) );
								}
								struct _Function_7_2{
									inline static Float Block( ){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
										{
											HX_STACK_LINE(1084)
											::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1084)
											return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
										}
										return null();
									}
								};
								HX_STACK_LINE(1084)
								Float carea = _Function_7_2::Block();		HX_STACK_VAR(carea,"carea");
								HX_STACK_LINE(1084)
								Float cost = ((int)2 * carea);		HX_STACK_VAR(cost,"cost");
								HX_STACK_LINE(1084)
								Float icost = ((int)2 * ((carea - area)));		HX_STACK_VAR(icost,"icost");
								struct _Function_7_3{
									inline static Float Block( ::zpp_nape::geom::ZPP_AABB &leafaabb,::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
										{
											HX_STACK_LINE(1084)
											{
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(1084)
												_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
												HX_STACK_LINE(1084)
												_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
												HX_STACK_LINE(1084)
												_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
												HX_STACK_LINE(1084)
												_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
											}
											struct _Function_8_1{
												inline static Float Block( ){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
													{
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1084)
														return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
													{
														struct _Function_9_1{
															inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
																{
																	HX_STACK_LINE(1084)
																	::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1084)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1084)
														Float oarea = _Function_9_1::Block(child1);		HX_STACK_VAR(oarea,"oarea");
														struct _Function_9_2{
															inline static Float Block( ){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
																{
																	HX_STACK_LINE(1084)
																	::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1084)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1084)
														Float narea = _Function_9_2::Block();		HX_STACK_VAR(narea,"narea");
														HX_STACK_LINE(1084)
														return ((narea - oarea) + icost);
													}
													return null();
												}
											};
											HX_STACK_LINE(1084)
											return (  (((child1->child1 == null()))) ? Float((_Function_8_1::Block() + icost)) : Float(_Function_8_2::Block(child1,icost)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1084)
								Float cost1 = _Function_7_3::Block(leafaabb,child1,icost);		HX_STACK_VAR(cost1,"cost1");
								struct _Function_7_4{
									inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,::zpp_nape::geom::ZPP_AABB &leafaabb,Float &icost){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
										{
											HX_STACK_LINE(1084)
											{
												HX_STACK_LINE(1084)
												::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(1084)
												_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
												HX_STACK_LINE(1084)
												_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
												HX_STACK_LINE(1084)
												_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
												HX_STACK_LINE(1084)
												_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
											}
											struct _Function_8_1{
												inline static Float Block( ){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
													{
														HX_STACK_LINE(1084)
														::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1084)
														return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,Float &icost){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
													{
														struct _Function_9_1{
															inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
																{
																	HX_STACK_LINE(1084)
																	::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1084)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1084)
														Float oarea = _Function_9_1::Block(child2);		HX_STACK_VAR(oarea,"oarea");
														struct _Function_9_2{
															inline static Float Block( ){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
																{
																	HX_STACK_LINE(1084)
																	::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1084)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1084)
														Float narea = _Function_9_2::Block();		HX_STACK_VAR(narea,"narea");
														HX_STACK_LINE(1084)
														return ((narea - oarea) + icost);
													}
													return null();
												}
											};
											HX_STACK_LINE(1084)
											return (  (((child2->child1 == null()))) ? Float((_Function_8_1::Block() + icost)) : Float(_Function_8_2::Block(child2,icost)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1084)
								Float cost2 = _Function_7_4::Block(child2,leafaabb,icost);		HX_STACK_VAR(cost2,"cost2");
								HX_STACK_LINE(1084)
								if (((bool((cost < cost1)) && bool((cost < cost2))))){
									HX_STACK_LINE(1084)
									break;
								}
								else{
									HX_STACK_LINE(1084)
									node1 = (  (((cost1 < cost2))) ? ::zpp_nape::space::ZPP_AABBNode(child1) : ::zpp_nape::space::ZPP_AABBNode(child2) );
								}
							}
							HX_STACK_LINE(1084)
							::zpp_nape::space::ZPP_AABBNode sibling = node1;		HX_STACK_VAR(sibling,"sibling");
							HX_STACK_LINE(1084)
							::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
							HX_STACK_LINE(1084)
							::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
							HX_STACK_LINE(1084)
							{
								HX_STACK_LINE(1084)
								if (((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool == null()))){
									HX_STACK_LINE(1084)
									nparent = ::zpp_nape::space::ZPP_AABBNode_obj::__new();
								}
								else{
									HX_STACK_LINE(1084)
									nparent = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
									HX_STACK_LINE(1084)
									::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
									HX_STACK_LINE(1084)
									nparent->next = null();
								}
								HX_STACK_LINE(1084)
								{
									HX_STACK_LINE(1084)
									{
										HX_STACK_LINE(1084)
										if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
											HX_STACK_LINE(1084)
											nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
										}
										else{
											HX_STACK_LINE(1084)
											nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
											HX_STACK_LINE(1084)
											::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nparent->aabb->next;
											HX_STACK_LINE(1084)
											nparent->aabb->next = null();
										}
										HX_STACK_LINE(1084)
										Dynamic();
									}
									HX_STACK_LINE(1084)
									nparent->moved = false;
									HX_STACK_LINE(1084)
									nparent->synced = false;
									HX_STACK_LINE(1084)
									nparent->first_sync = false;
								}
							}
							HX_STACK_LINE(1084)
							nparent->parent = oparent;
							HX_STACK_LINE(1084)
							{
								HX_STACK_LINE(1084)
								::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1084)
								_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
								HX_STACK_LINE(1084)
								_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
								HX_STACK_LINE(1084)
								_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
								HX_STACK_LINE(1084)
								_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
							}
							HX_STACK_LINE(1084)
							nparent->height = (sibling->height + (int)1);
							HX_STACK_LINE(1084)
							if (((oparent != null()))){
								HX_STACK_LINE(1084)
								if (((oparent->child1 == sibling))){
									HX_STACK_LINE(1084)
									oparent->child1 = nparent;
								}
								else{
									HX_STACK_LINE(1084)
									oparent->child2 = nparent;
								}
								HX_STACK_LINE(1084)
								nparent->child1 = sibling;
								HX_STACK_LINE(1084)
								nparent->child2 = node;
								HX_STACK_LINE(1084)
								sibling->parent = nparent;
								HX_STACK_LINE(1084)
								node->parent = nparent;
							}
							else{
								HX_STACK_LINE(1084)
								nparent->child1 = sibling;
								HX_STACK_LINE(1084)
								nparent->child2 = node;
								HX_STACK_LINE(1084)
								sibling->parent = nparent;
								HX_STACK_LINE(1084)
								node->parent = nparent;
								HX_STACK_LINE(1084)
								tree->root = nparent;
							}
							HX_STACK_LINE(1084)
							node1 = node->parent;
							HX_STACK_LINE(1084)
							while(((node1 != null()))){
								struct _Function_7_1{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
										{
											HX_STACK_LINE(1084)
											::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1084)
											::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(1084)
											int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
											struct _Function_8_1{
												inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
													{
														HX_STACK_LINE(1084)
														::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1084)
														::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1084)
														c->child1 = node1;
														HX_STACK_LINE(1084)
														c->parent = node1->parent;
														HX_STACK_LINE(1084)
														node1->parent = c;
														HX_STACK_LINE(1084)
														if (((c->parent != null()))){
															HX_STACK_LINE(1084)
															if (((c->parent->child1 == node1))){
																HX_STACK_LINE(1084)
																c->parent->child1 = c;
															}
															else{
																HX_STACK_LINE(1084)
																c->parent->child2 = c;
															}
														}
														else{
															HX_STACK_LINE(1084)
															tree->root = c;
														}
														HX_STACK_LINE(1084)
														if (((f->height > g->height))){
															HX_STACK_LINE(1084)
															c->child2 = f;
															HX_STACK_LINE(1084)
															node1->child2 = g;
															HX_STACK_LINE(1084)
															g->parent = node1;
															HX_STACK_LINE(1084)
															{
																HX_STACK_LINE(1084)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1084)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1084)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1084)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1084)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1084)
															{
																HX_STACK_LINE(1084)
																::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1084)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1084)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1084)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1084)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
																	{
																		HX_STACK_LINE(1084)
																		int x = b->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1084)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1084)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1084)
															node1->height = ((int)1 + _Function_10_1::Block(b,g));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
																	{
																		HX_STACK_LINE(1084)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1084)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1084)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1084)
															c->height = ((int)1 + _Function_10_2::Block(node1,f));
														}
														else{
															HX_STACK_LINE(1084)
															c->child2 = g;
															HX_STACK_LINE(1084)
															node1->child2 = f;
															HX_STACK_LINE(1084)
															f->parent = node1;
															HX_STACK_LINE(1084)
															{
																HX_STACK_LINE(1084)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1084)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1084)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1084)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1084)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1084)
															{
																HX_STACK_LINE(1084)
																::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1084)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1084)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1084)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1084)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
																	{
																		HX_STACK_LINE(1084)
																		int x = b->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1084)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1084)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1084)
															node1->height = ((int)1 + _Function_10_1::Block(b,f));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
																	{
																		HX_STACK_LINE(1084)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1084)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1084)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1084)
															c->height = ((int)1 + _Function_10_2::Block(node1,g));
														}
														HX_STACK_LINE(1084)
														return c;
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree,::zpp_nape::space::ZPP_AABBNode &c){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
													{
														HX_STACK_LINE(1084)
														::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1084)
														::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1084)
														b->child1 = node1;
														HX_STACK_LINE(1084)
														b->parent = node1->parent;
														HX_STACK_LINE(1084)
														node1->parent = b;
														HX_STACK_LINE(1084)
														if (((b->parent != null()))){
															HX_STACK_LINE(1084)
															if (((b->parent->child1 == node1))){
																HX_STACK_LINE(1084)
																b->parent->child1 = b;
															}
															else{
																HX_STACK_LINE(1084)
																b->parent->child2 = b;
															}
														}
														else{
															HX_STACK_LINE(1084)
															tree->root = b;
														}
														HX_STACK_LINE(1084)
														if (((f->height > g->height))){
															HX_STACK_LINE(1084)
															b->child2 = f;
															HX_STACK_LINE(1084)
															node1->child1 = g;
															HX_STACK_LINE(1084)
															g->parent = node1;
															HX_STACK_LINE(1084)
															{
																HX_STACK_LINE(1084)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1084)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1084)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1084)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1084)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1084)
															{
																HX_STACK_LINE(1084)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1084)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1084)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1084)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1084)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
																	{
																		HX_STACK_LINE(1084)
																		int x = c->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1084)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1084)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1084)
															node1->height = ((int)1 + _Function_10_1::Block(c,g));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
																	{
																		HX_STACK_LINE(1084)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1084)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1084)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1084)
															b->height = ((int)1 + _Function_10_2::Block(node1,f));
														}
														else{
															HX_STACK_LINE(1084)
															b->child2 = g;
															HX_STACK_LINE(1084)
															node1->child1 = f;
															HX_STACK_LINE(1084)
															f->parent = node1;
															HX_STACK_LINE(1084)
															{
																HX_STACK_LINE(1084)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1084)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1084)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1084)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1084)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1084)
															{
																HX_STACK_LINE(1084)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1084)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1084)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1084)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1084)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
																	{
																		HX_STACK_LINE(1084)
																		int x = c->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1084)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1084)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1084)
															node1->height = ((int)1 + _Function_10_1::Block(c,f));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
																	{
																		HX_STACK_LINE(1084)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1084)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1084)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1084)
															b->height = ((int)1 + _Function_10_2::Block(node1,g));
														}
														HX_STACK_LINE(1084)
														return b;
													}
													return null();
												}
											};
											HX_STACK_LINE(1084)
											return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_8_1::Block(b,c,node1,tree)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_8_2::Block(b,node1,tree,c)) : ::zpp_nape::space::ZPP_AABBNode(node1) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1084)
								node1 = (  (((bool((node1->child1 == null())) || bool((node1->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node1) : ::zpp_nape::space::ZPP_AABBNode(_Function_7_1::Block(node1,tree)) );
								HX_STACK_LINE(1084)
								::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
								HX_STACK_LINE(1084)
								::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
								struct _Function_7_2{
									inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1084);
										{
											HX_STACK_LINE(1084)
											int x = child1->height;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(1084)
											int y = child2->height;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(1084)
											return (  (((x > y))) ? int(x) : int(y) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1084)
								node1->height = ((int)1 + _Function_7_2::Block(child1,child2));
								HX_STACK_LINE(1084)
								{
									HX_STACK_LINE(1084)
									::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
									::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
									::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1084)
									_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
									HX_STACK_LINE(1084)
									_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
									HX_STACK_LINE(1084)
									_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
									HX_STACK_LINE(1084)
									_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
								}
								HX_STACK_LINE(1084)
								node1 = node1->parent;
							}
						}
						HX_STACK_LINE(1085)
						node->synced = false;
					}
					HX_STACK_LINE(1087)
					if ((!(node->moved))){
						HX_STACK_LINE(1088)
						node->moved = true;
						HX_STACK_LINE(1089)
						{
							HX_STACK_LINE(1090)
							{
							}
							HX_STACK_LINE(1098)
							node->mnext = this->moves;
							HX_STACK_LINE(1099)
							this->moves = node;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DynAABBPhase_obj,sync_broadphase,(void))

Void ZPP_DynAABBPhase_obj::__sync( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_PUSH("ZPP_DynAABBPhase::__sync","zpp_nape/space/DynAABBPhase.hx",944);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(945)
		{
		}
		HX_STACK_LINE(953)
		::zpp_nape::space::ZPP_AABBNode node = shape->node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(954)
		{
		}
		HX_STACK_LINE(962)
		if ((!(node->synced))){
			HX_STACK_LINE(963)
			if ((!(this->space->continuous))){
				HX_STACK_LINE(963)
				if ((shape->zip_aabb)){
					HX_STACK_LINE(963)
					if (((shape->body != null()))){
						HX_STACK_LINE(963)
						shape->zip_aabb = false;
						HX_STACK_LINE(963)
						if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
							HX_STACK_LINE(963)
							::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(963)
							if ((_this->zip_worldCOM)){
								HX_STACK_LINE(963)
								if (((_this->body != null()))){
									HX_STACK_LINE(963)
									_this->zip_worldCOM = false;
									HX_STACK_LINE(963)
									if ((_this->zip_localCOM)){
										HX_STACK_LINE(963)
										_this->zip_localCOM = false;
										HX_STACK_LINE(963)
										if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
											HX_STACK_LINE(963)
											::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(963)
											if (((_this1->lverts->next == null()))){
												HX_STACK_LINE(963)
												hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
											}
											HX_STACK_LINE(963)
											if (((_this1->lverts->next->next == null()))){
												HX_STACK_LINE(963)
												_this1->localCOMx = _this1->lverts->next->x;
												HX_STACK_LINE(963)
												_this1->localCOMy = _this1->lverts->next->y;
												HX_STACK_LINE(963)
												{
												}
												HX_STACK_LINE(963)
												Dynamic();
											}
											else{
												HX_STACK_LINE(963)
												if (((_this1->lverts->next->next->next == null()))){
													HX_STACK_LINE(963)
													{
														HX_STACK_LINE(963)
														_this1->localCOMx = _this1->lverts->next->x;
														HX_STACK_LINE(963)
														_this1->localCOMy = _this1->lverts->next->y;
														HX_STACK_LINE(963)
														{
														}
														HX_STACK_LINE(963)
														{
														}
													}
													HX_STACK_LINE(963)
													{
														HX_STACK_LINE(963)
														Float t = 1.0;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(963)
														{
														}
														HX_STACK_LINE(963)
														hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
														HX_STACK_LINE(963)
														hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
													}
													HX_STACK_LINE(963)
													{
														HX_STACK_LINE(963)
														Float t = 0.5;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(963)
														{
														}
														HX_STACK_LINE(963)
														hx::MultEq(_this1->localCOMx,t);
														HX_STACK_LINE(963)
														hx::MultEq(_this1->localCOMy,t);
													}
												}
												else{
													HX_STACK_LINE(963)
													{
														HX_STACK_LINE(963)
														_this1->localCOMx = (int)0;
														HX_STACK_LINE(963)
														_this1->localCOMy = (int)0;
														HX_STACK_LINE(963)
														{
														}
														HX_STACK_LINE(963)
														{
														}
													}
													HX_STACK_LINE(963)
													Float area = 0.0;		HX_STACK_VAR(area,"area");
													HX_STACK_LINE(963)
													{
														HX_STACK_LINE(963)
														::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(963)
														::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
														HX_STACK_LINE(963)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(963)
														::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(963)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(963)
														while(((cx_ite != null()))){
															HX_STACK_LINE(963)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(963)
															{
																HX_STACK_LINE(963)
																hx::AddEq(area,(v->x * ((w->y - u->y))));
																HX_STACK_LINE(963)
																Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(963)
																hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																HX_STACK_LINE(963)
																hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
															}
															HX_STACK_LINE(963)
															u = v;
															HX_STACK_LINE(963)
															v = w;
															HX_STACK_LINE(963)
															cx_ite = cx_ite->next;
														}
														HX_STACK_LINE(963)
														cx_ite = _this1->lverts->next;
														HX_STACK_LINE(963)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(963)
														{
															HX_STACK_LINE(963)
															hx::AddEq(area,(v->x * ((w->y - u->y))));
															HX_STACK_LINE(963)
															Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(963)
															hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
															HX_STACK_LINE(963)
															hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
														}
														HX_STACK_LINE(963)
														u = v;
														HX_STACK_LINE(963)
														v = w;
														HX_STACK_LINE(963)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(963)
														::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
														HX_STACK_LINE(963)
														{
															HX_STACK_LINE(963)
															hx::AddEq(area,(v->x * ((w1->y - u->y))));
															HX_STACK_LINE(963)
															Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(963)
															hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
															HX_STACK_LINE(963)
															hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
														}
													}
													HX_STACK_LINE(963)
													area = (Float((int)1) / Float((((int)3 * area))));
													HX_STACK_LINE(963)
													{
														HX_STACK_LINE(963)
														Float t = area;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(963)
														{
														}
														HX_STACK_LINE(963)
														hx::MultEq(_this1->localCOMx,t);
														HX_STACK_LINE(963)
														hx::MultEq(_this1->localCOMy,t);
													}
												}
											}
										}
									}
									HX_STACK_LINE(963)
									{
										HX_STACK_LINE(963)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(963)
										if ((_this1->zip_axis)){
											HX_STACK_LINE(963)
											_this1->zip_axis = false;
											HX_STACK_LINE(963)
											{
												HX_STACK_LINE(963)
												_this1->axisx = ::Math_obj::sin(_this1->rot);
												HX_STACK_LINE(963)
												_this1->axisy = ::Math_obj::cos(_this1->rot);
												HX_STACK_LINE(963)
												{
												}
												HX_STACK_LINE(963)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(963)
									{
										HX_STACK_LINE(963)
										_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
										HX_STACK_LINE(963)
										_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
									}
								}
							}
							HX_STACK_LINE(963)
							Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(963)
							Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(963)
							{
							}
							HX_STACK_LINE(963)
							{
							}
							HX_STACK_LINE(963)
							{
								HX_STACK_LINE(963)
								_this->aabb->minx = (_this->worldCOMx - rx);
								HX_STACK_LINE(963)
								_this->aabb->miny = (_this->worldCOMy - ry);
							}
							HX_STACK_LINE(963)
							{
								HX_STACK_LINE(963)
								_this->aabb->maxx = (_this->worldCOMx + rx);
								HX_STACK_LINE(963)
								_this->aabb->maxy = (_this->worldCOMy + ry);
							}
						}
						else{
							HX_STACK_LINE(963)
							::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(963)
							if ((_this->zip_gverts)){
								HX_STACK_LINE(963)
								if (((_this->body != null()))){
									HX_STACK_LINE(963)
									_this->zip_gverts = false;
									HX_STACK_LINE(963)
									_this->validate_lverts();
									HX_STACK_LINE(963)
									{
										HX_STACK_LINE(963)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(963)
										if ((_this1->zip_axis)){
											HX_STACK_LINE(963)
											_this1->zip_axis = false;
											HX_STACK_LINE(963)
											{
												HX_STACK_LINE(963)
												_this1->axisx = ::Math_obj::sin(_this1->rot);
												HX_STACK_LINE(963)
												_this1->axisy = ::Math_obj::cos(_this1->rot);
												HX_STACK_LINE(963)
												{
												}
												HX_STACK_LINE(963)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(963)
									::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(963)
									{
										HX_STACK_LINE(963)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(963)
										while(((cx_ite != null()))){
											HX_STACK_LINE(963)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(963)
											{
												HX_STACK_LINE(963)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(963)
												li = li->next;
												HX_STACK_LINE(963)
												{
													HX_STACK_LINE(963)
													g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
													HX_STACK_LINE(963)
													g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
												}
											}
											HX_STACK_LINE(963)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(963)
							if (((_this->lverts->next == null()))){
								HX_STACK_LINE(963)
								hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
							}
							HX_STACK_LINE(963)
							::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
							HX_STACK_LINE(963)
							{
								HX_STACK_LINE(963)
								_this->aabb->minx = p0->x;
								HX_STACK_LINE(963)
								_this->aabb->miny = p0->y;
								HX_STACK_LINE(963)
								{
								}
								HX_STACK_LINE(963)
								{
								}
							}
							HX_STACK_LINE(963)
							{
								HX_STACK_LINE(963)
								_this->aabb->maxx = p0->x;
								HX_STACK_LINE(963)
								_this->aabb->maxy = p0->y;
								HX_STACK_LINE(963)
								{
								}
								HX_STACK_LINE(963)
								{
								}
							}
							HX_STACK_LINE(963)
							{
								HX_STACK_LINE(963)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(963)
								while(((cx_ite != null()))){
									HX_STACK_LINE(963)
									::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(963)
									{
										HX_STACK_LINE(963)
										if (((p->x < _this->aabb->minx))){
											HX_STACK_LINE(963)
											_this->aabb->minx = p->x;
										}
										HX_STACK_LINE(963)
										if (((p->x > _this->aabb->maxx))){
											HX_STACK_LINE(963)
											_this->aabb->maxx = p->x;
										}
										HX_STACK_LINE(963)
										if (((p->y < _this->aabb->miny))){
											HX_STACK_LINE(963)
											_this->aabb->miny = p->y;
										}
										HX_STACK_LINE(963)
										if (((p->y > _this->aabb->maxy))){
											HX_STACK_LINE(963)
											_this->aabb->maxy = p->y;
										}
									}
									HX_STACK_LINE(963)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
				}
			}
			struct _Function_2_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::shape::ZPP_Shape &shape){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",964);
					{
						HX_STACK_LINE(964)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB x = shape->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(964)
						return (bool((bool((bool((x->minx >= _this->minx)) && bool((x->miny >= _this->miny)))) && bool((x->maxx <= _this->maxx)))) && bool((x->maxy <= _this->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(964)
			bool sync = (bool((node->dyn != ((  (((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))) ? bool(false) : bool(!(shape->body->component->sleeping)) )))) || bool(!(_Function_2_1::Block(node,shape))));		HX_STACK_VAR(sync,"sync");
			HX_STACK_LINE(965)
			if ((sync)){
				HX_STACK_LINE(968)
				node->synced = true;
				HX_STACK_LINE(969)
				{
					HX_STACK_LINE(970)
					{
					}
					HX_STACK_LINE(978)
					node->snext = this->syncs;
					HX_STACK_LINE(979)
					this->syncs = node;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DynAABBPhase_obj,__sync,(void))

Void ZPP_DynAABBPhase_obj::__remove( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_PUSH("ZPP_DynAABBPhase::__remove","zpp_nape/space/DynAABBPhase.hx",777);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(778)
		{
		}
		HX_STACK_LINE(786)
		{
		}
		HX_STACK_LINE(794)
		::zpp_nape::space::ZPP_AABBNode node = shape->node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(795)
		if ((!(node->first_sync))){
			HX_STACK_LINE(795)
			if ((node->dyn)){
				HX_STACK_LINE(796)
				this->dtree->removeLeaf(node);
			}
			else{
				HX_STACK_LINE(797)
				this->stree->removeLeaf(node);
			}
		}
		HX_STACK_LINE(799)
		shape->node = null();
		HX_STACK_LINE(800)
		if ((node->synced)){
			HX_STACK_LINE(801)
			{
				HX_STACK_LINE(802)
				::zpp_nape::space::ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(803)
				::zpp_nape::space::ZPP_AABBNode cur = this->syncs;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(804)
				while(((cur != null()))){
					HX_STACK_LINE(805)
					if (((cur == node))){
						HX_STACK_LINE(805)
						break;
					}
					HX_STACK_LINE(806)
					pre = cur;
					HX_STACK_LINE(807)
					cur = cur->snext;
				}
				HX_STACK_LINE(809)
				{
					HX_STACK_LINE(810)
					{
					}
					HX_STACK_LINE(818)
					if (((pre == null()))){
						HX_STACK_LINE(818)
						this->syncs = cur->snext;
					}
					else{
						HX_STACK_LINE(819)
						pre->snext = cur->snext;
					}
					HX_STACK_LINE(820)
					cur->snext = null();
				}
			}
			HX_STACK_LINE(823)
			node->synced = false;
		}
		HX_STACK_LINE(825)
		if ((node->moved)){
			HX_STACK_LINE(826)
			{
				HX_STACK_LINE(827)
				::zpp_nape::space::ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(828)
				::zpp_nape::space::ZPP_AABBNode cur = this->moves;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(829)
				while(((cur != null()))){
					HX_STACK_LINE(830)
					if (((cur == node))){
						HX_STACK_LINE(830)
						break;
					}
					HX_STACK_LINE(831)
					pre = cur;
					HX_STACK_LINE(832)
					cur = cur->mnext;
				}
				HX_STACK_LINE(834)
				{
					HX_STACK_LINE(835)
					{
					}
					HX_STACK_LINE(843)
					if (((pre == null()))){
						HX_STACK_LINE(843)
						this->moves = cur->mnext;
					}
					else{
						HX_STACK_LINE(844)
						pre->mnext = cur->mnext;
					}
					HX_STACK_LINE(845)
					cur->mnext = null();
				}
			}
			HX_STACK_LINE(848)
			node->moved = false;
		}
		HX_STACK_LINE(850)
		Dynamic pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(851)
		::zpp_nape::space::ZPP_AABBPair cur = this->pairs;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(852)
		while(((cur != null()))){
			HX_STACK_LINE(853)
			{
			}
			HX_STACK_LINE(861)
			::zpp_nape::space::ZPP_AABBPair nxt = cur->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(862)
			if (((bool((cur->n1 == node)) || bool((cur->n2 == node))))){
				HX_STACK_LINE(863)
				if (((pre == null()))){
					HX_STACK_LINE(863)
					this->pairs = nxt;
				}
				else{
					HX_STACK_LINE(864)
					pre->__FieldRef(HX_CSTRING("next")) = nxt;
				}
				HX_STACK_LINE(865)
				if (((cur->arb != null()))){
					HX_STACK_LINE(865)
					cur->arb->pair = null();
				}
				HX_STACK_LINE(866)
				cur->arb = null();
				HX_STACK_LINE(867)
				cur->n1->shape->pairs->remove(cur);
				HX_STACK_LINE(868)
				cur->n2->shape->pairs->remove(cur);
				HX_STACK_LINE(869)
				{
					HX_STACK_LINE(870)
					::zpp_nape::space::ZPP_AABBPair o = cur;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(871)
					{
					}
					HX_STACK_LINE(879)
					{
						HX_STACK_LINE(879)
						{
						}
						HX_STACK_LINE(879)
						o->n1 = o->n2 = null();
						HX_STACK_LINE(879)
						o->sleeping = false;
					}
					HX_STACK_LINE(880)
					o->next = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
					HX_STACK_LINE(881)
					::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(886)
				cur = nxt;
				HX_STACK_LINE(887)
				continue;
			}
			HX_STACK_LINE(889)
			pre = cur;
			HX_STACK_LINE(890)
			cur = nxt;
		}
		HX_STACK_LINE(892)
		while((!(((shape->pairs->head == null()))))){
			HX_STACK_LINE(893)
			::zpp_nape::space::ZPP_AABBPair cur1 = shape->pairs->pop_unsafe();		HX_STACK_VAR(cur1,"cur1");
			HX_STACK_LINE(894)
			{
			}
			HX_STACK_LINE(902)
			if (((cur1->n1 == node))){
				HX_STACK_LINE(902)
				cur1->n2->shape->pairs->remove(cur1);
			}
			else{
				HX_STACK_LINE(903)
				cur1->n1->shape->pairs->remove(cur1);
			}
			HX_STACK_LINE(904)
			if (((cur1->arb != null()))){
				HX_STACK_LINE(904)
				cur1->arb->pair = null();
			}
			HX_STACK_LINE(905)
			cur1->arb = null();
			HX_STACK_LINE(906)
			{
				HX_STACK_LINE(907)
				::zpp_nape::space::ZPP_AABBPair o = cur1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(908)
				{
				}
				HX_STACK_LINE(916)
				{
					HX_STACK_LINE(916)
					{
					}
					HX_STACK_LINE(916)
					o->n1 = o->n2 = null();
					HX_STACK_LINE(916)
					o->sleeping = false;
				}
				HX_STACK_LINE(917)
				o->next = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(918)
				::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(924)
		{
			HX_STACK_LINE(925)
			::zpp_nape::space::ZPP_AABBNode o = node;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(926)
			{
			}
			HX_STACK_LINE(934)
			{
				HX_STACK_LINE(934)
				o->height = (int)-1;
				HX_STACK_LINE(934)
				{
					HX_STACK_LINE(934)
					::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
					HX_STACK_LINE(934)
					{
					}
					HX_STACK_LINE(934)
					{
						HX_STACK_LINE(934)
						if (((o1->outer != null()))){
							HX_STACK_LINE(934)
							o1->outer->zpp_inner = null();
							HX_STACK_LINE(934)
							o1->outer = null();
						}
						HX_STACK_LINE(934)
						o1->wrap_min = o1->wrap_max = null();
						HX_STACK_LINE(934)
						o1->_invalidate = null();
						HX_STACK_LINE(934)
						o1->_validate = null();
					}
					HX_STACK_LINE(934)
					o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
					HX_STACK_LINE(934)
					::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
				}
				HX_STACK_LINE(934)
				o->child1 = o->child2 = o->parent = null();
				HX_STACK_LINE(934)
				o->next = null();
				HX_STACK_LINE(934)
				o->snext = null();
				HX_STACK_LINE(934)
				o->mnext = null();
			}
			HX_STACK_LINE(935)
			o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
			HX_STACK_LINE(936)
			::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DynAABBPhase_obj,__remove,(void))

Void ZPP_DynAABBPhase_obj::__insert( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_PUSH("ZPP_DynAABBPhase::__insert","zpp_nape/space/DynAABBPhase.hx",717);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(718)
		{
		}
		HX_STACK_LINE(726)
		{
		}
		HX_STACK_LINE(734)
		::zpp_nape::space::ZPP_AABBNode node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(735)
		{
			HX_STACK_LINE(736)
			if (((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool == null()))){
				HX_STACK_LINE(736)
				node = ::zpp_nape::space::ZPP_AABBNode_obj::__new();
			}
			else{
				HX_STACK_LINE(743)
				node = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(744)
				::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = node->next;
				HX_STACK_LINE(745)
				node->next = null();
			}
			HX_STACK_LINE(750)
			{
				HX_STACK_LINE(750)
				{
					HX_STACK_LINE(750)
					if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
						HX_STACK_LINE(750)
						node->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
					}
					else{
						HX_STACK_LINE(750)
						node->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
						HX_STACK_LINE(750)
						::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = node->aabb->next;
						HX_STACK_LINE(750)
						node->aabb->next = null();
					}
					HX_STACK_LINE(750)
					Dynamic();
				}
				HX_STACK_LINE(750)
				node->moved = false;
				HX_STACK_LINE(750)
				node->synced = false;
				HX_STACK_LINE(750)
				node->first_sync = false;
			}
		}
		HX_STACK_LINE(752)
		node->shape = shape;
		HX_STACK_LINE(753)
		shape->node = node;
		HX_STACK_LINE(754)
		{
		}
		HX_STACK_LINE(762)
		node->synced = true;
		HX_STACK_LINE(763)
		node->first_sync = true;
		HX_STACK_LINE(764)
		{
			HX_STACK_LINE(765)
			{
			}
			HX_STACK_LINE(773)
			node->snext = this->syncs;
			HX_STACK_LINE(774)
			this->syncs = node;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DynAABBPhase_obj,__insert,(void))

bool ZPP_DynAABBPhase_obj::dyn( ::zpp_nape::shape::ZPP_Shape shape){
	HX_STACK_PUSH("ZPP_DynAABBPhase::dyn","zpp_nape/space/DynAABBPhase.hx",713);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shape,"shape");
	HX_STACK_LINE(713)
	if (((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))){
		HX_STACK_LINE(714)
		return false;
	}
	else{
		HX_STACK_LINE(715)
		return !(shape->body->component->sleeping);
	}
	HX_STACK_LINE(713)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DynAABBPhase_obj,dyn,return )

Float ZPP_DynAABBPhase_obj::FATTEN;

Float ZPP_DynAABBPhase_obj::VEL_STEPS;


ZPP_DynAABBPhase_obj::ZPP_DynAABBPhase_obj()
{
}

void ZPP_DynAABBPhase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_DynAABBPhase);
	HX_MARK_MEMBER_NAME(openlist,"openlist");
	HX_MARK_MEMBER_NAME(failed,"failed");
	HX_MARK_MEMBER_NAME(treeStack2,"treeStack2");
	HX_MARK_MEMBER_NAME(treeStack,"treeStack");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(syncs,"syncs");
	HX_MARK_MEMBER_NAME(pairs,"pairs");
	HX_MARK_MEMBER_NAME(dtree,"dtree");
	HX_MARK_MEMBER_NAME(stree,"stree");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_DynAABBPhase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(openlist,"openlist");
	HX_VISIT_MEMBER_NAME(failed,"failed");
	HX_VISIT_MEMBER_NAME(treeStack2,"treeStack2");
	HX_VISIT_MEMBER_NAME(treeStack,"treeStack");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(syncs,"syncs");
	HX_VISIT_MEMBER_NAME(pairs,"pairs");
	HX_VISIT_MEMBER_NAME(dtree,"dtree");
	HX_VISIT_MEMBER_NAME(stree,"stree");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_DynAABBPhase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dyn") ) { return dyn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"syncs") ) { return syncs; }
		if (HX_FIELD_EQ(inName,"pairs") ) { return pairs; }
		if (HX_FIELD_EQ(inName,"dtree") ) { return dtree; }
		if (HX_FIELD_EQ(inName,"stree") ) { return stree; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FATTEN") ) { return FATTEN; }
		if (HX_FIELD_EQ(inName,"failed") ) { return failed; }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"openlist") ) { return openlist; }
		if (HX_FIELD_EQ(inName,"__remove") ) { return __remove_dyn(); }
		if (HX_FIELD_EQ(inName,"__insert") ) { return __insert_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"VEL_STEPS") ) { return VEL_STEPS; }
		if (HX_FIELD_EQ(inName,"treeStack") ) { return treeStack; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"treeStack2") ) { return treeStack2; }
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_DynAABBPhase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"moves") ) { moves=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"syncs") ) { syncs=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pairs") ) { pairs=inValue.Cast< ::zpp_nape::space::ZPP_AABBPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dtree") ) { dtree=inValue.Cast< ::zpp_nape::space::ZPP_AABBTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stree") ) { stree=inValue.Cast< ::zpp_nape::space::ZPP_AABBTree >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FATTEN") ) { FATTEN=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"failed") ) { failed=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"openlist") ) { openlist=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_AABBNode >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"VEL_STEPS") ) { VEL_STEPS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"treeStack") ) { treeStack=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_AABBNode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"treeStack2") ) { treeStack2=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_AABBNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_DynAABBPhase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("openlist"));
	outFields->push(HX_CSTRING("failed"));
	outFields->push(HX_CSTRING("treeStack2"));
	outFields->push(HX_CSTRING("treeStack"));
	outFields->push(HX_CSTRING("moves"));
	outFields->push(HX_CSTRING("syncs"));
	outFields->push(HX_CSTRING("pairs"));
	outFields->push(HX_CSTRING("dtree"));
	outFields->push(HX_CSTRING("stree"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FATTEN"),
	HX_CSTRING("VEL_STEPS"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("rayMultiCast"),
	HX_CSTRING("rayCast"),
	HX_CSTRING("openlist"),
	HX_CSTRING("bodiesInShape"),
	HX_CSTRING("shapesInShape"),
	HX_CSTRING("bodiesInCircle"),
	HX_CSTRING("shapesInCircle"),
	HX_CSTRING("bodiesInAABB"),
	HX_CSTRING("failed"),
	HX_CSTRING("shapesInAABB"),
	HX_CSTRING("treeStack2"),
	HX_CSTRING("bodiesUnderPoint"),
	HX_CSTRING("shapesUnderPoint"),
	HX_CSTRING("treeStack"),
	HX_CSTRING("clear"),
	HX_CSTRING("broadphase"),
	HX_CSTRING("sync_broadphase"),
	HX_CSTRING("__sync"),
	HX_CSTRING("__remove"),
	HX_CSTRING("__insert"),
	HX_CSTRING("dyn"),
	HX_CSTRING("moves"),
	HX_CSTRING("syncs"),
	HX_CSTRING("pairs"),
	HX_CSTRING("dtree"),
	HX_CSTRING("stree"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_DynAABBPhase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_DynAABBPhase_obj::FATTEN,"FATTEN");
	HX_MARK_MEMBER_NAME(ZPP_DynAABBPhase_obj::VEL_STEPS,"VEL_STEPS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_DynAABBPhase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_DynAABBPhase_obj::FATTEN,"FATTEN");
	HX_VISIT_MEMBER_NAME(ZPP_DynAABBPhase_obj::VEL_STEPS,"VEL_STEPS");
};

Class ZPP_DynAABBPhase_obj::__mClass;

void ZPP_DynAABBPhase_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_DynAABBPhase"), hx::TCanCast< ZPP_DynAABBPhase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_DynAABBPhase_obj::__boot()
{
	FATTEN= 3.0;
	VEL_STEPS= 2.0;
}

} // end namespace zpp_nape
} // end namespace space
