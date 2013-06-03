#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Edge
#include <nape/shape/Edge.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace dynamics{

Void CollisionArbiter_obj::__construct()
{
HX_STACK_PUSH("CollisionArbiter::new","nape/dynamics/CollisionArbiter.hx",728);
{
	HX_STACK_LINE(730)
	if ((!(::zpp_nape::dynamics::ZPP_Arbiter_obj::internal))){
		HX_STACK_LINE(730)
		hx::Throw (HX_CSTRING("Error: Cannot instantiate CollisionArbiter derp!"));
	}
	HX_STACK_LINE(732)
	super::__construct();
}
;
	return null();
}

CollisionArbiter_obj::~CollisionArbiter_obj() { }

Dynamic CollisionArbiter_obj::__CreateEmpty() { return  new CollisionArbiter_obj; }
hx::ObjectPtr< CollisionArbiter_obj > CollisionArbiter_obj::__new()
{  hx::ObjectPtr< CollisionArbiter_obj > result = new CollisionArbiter_obj();
	result->__construct();
	return result;}

Dynamic CollisionArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollisionArbiter_obj > result = new CollisionArbiter_obj();
	result->__construct();
	return result;}

Float CollisionArbiter_obj::set_rollingFriction( Float rollingFriction){
	HX_STACK_PUSH("CollisionArbiter::set_rollingFriction","nape/dynamics/CollisionArbiter.hx",709);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rollingFriction,"rollingFriction");
	HX_STACK_LINE(710)
	{
		HX_STACK_LINE(712)
		if ((!(this->zpp_inner->colarb->_mutable))){
			HX_STACK_LINE(712)
			hx::Throw (((HX_CSTRING("Error: CollisionArbiter::") + HX_CSTRING("rollingFriction")) + HX_CSTRING(" is only mutable during a pre-handler")));
		}
		HX_STACK_LINE(715)
		if (((rollingFriction != rollingFriction))){
			HX_STACK_LINE(715)
			hx::Throw (((HX_CSTRING("Error: CollisionArbiter::") + HX_CSTRING("rollingFriction")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(716)
		if (((rollingFriction < (int)0))){
			HX_STACK_LINE(716)
			hx::Throw (((HX_CSTRING("Error: CollisionArbiter::") + HX_CSTRING("rollingFriction")) + HX_CSTRING(" cannot be negative")));
		}
		HX_STACK_LINE(717)
		{
		}
		HX_STACK_LINE(719)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(720)
		colarb->rfric = rollingFriction;
		HX_STACK_LINE(721)
		colarb->userdef_rfric = true;
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::dynamics::CollisionArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",723);
			{
				HX_STACK_LINE(723)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(723)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(723)
				::zpp_nape::dynamics::ZPP_ColArbiter colarb = __this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
				HX_STACK_LINE(723)
				if ((colarb->invalidated)){
					HX_STACK_LINE(723)
					colarb->invalidated = false;
					HX_STACK_LINE(723)
					{
						HX_STACK_LINE(723)
						if ((!(colarb->userdef_restitution))){
							HX_STACK_LINE(723)
							if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
								HX_STACK_LINE(723)
								colarb->restitution = (int)0;
							}
							else{
								HX_STACK_LINE(723)
								if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
									HX_STACK_LINE(723)
									colarb->restitution = (int)1;
								}
								else{
									HX_STACK_LINE(723)
									colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
								}
							}
							HX_STACK_LINE(723)
							if (((colarb->restitution < (int)0))){
								HX_STACK_LINE(723)
								colarb->restitution = (int)0;
							}
							HX_STACK_LINE(723)
							if (((colarb->restitution > (int)1))){
								HX_STACK_LINE(723)
								colarb->restitution = (int)1;
							}
						}
						HX_STACK_LINE(723)
						if ((!(colarb->userdef_dyn_fric))){
							struct _Function_5_1{
								inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
									HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",723);
									{
										HX_STACK_LINE(723)
										{
										}
										HX_STACK_LINE(723)
										return ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));
									}
									return null();
								}
							};
							HX_STACK_LINE(723)
							colarb->dyn_fric = _Function_5_1::Block(colarb);
						}
						HX_STACK_LINE(723)
						if ((!(colarb->userdef_stat_fric))){
							struct _Function_5_1{
								inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
									HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",723);
									{
										HX_STACK_LINE(723)
										{
										}
										HX_STACK_LINE(723)
										return ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));
									}
									return null();
								}
							};
							HX_STACK_LINE(723)
							colarb->stat_fric = _Function_5_1::Block(colarb);
						}
						HX_STACK_LINE(723)
						if ((!(colarb->userdef_rfric))){
							struct _Function_5_1{
								inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
									HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",723);
									{
										HX_STACK_LINE(723)
										{
										}
										HX_STACK_LINE(723)
										return ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));
									}
									return null();
								}
							};
							HX_STACK_LINE(723)
							colarb->rfric = _Function_5_1::Block(colarb);
						}
					}
				}
				HX_STACK_LINE(723)
				return colarb->rfric;
			}
			return null();
		}
	};
	HX_STACK_LINE(723)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_rollingFriction,return )

Float CollisionArbiter_obj::get_rollingFriction( ){
	HX_STACK_PUSH("CollisionArbiter::get_rollingFriction","nape/dynamics/CollisionArbiter.hx",701);
	HX_STACK_THIS(this);
	HX_STACK_LINE(703)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(703)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(705)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(706)
	if ((colarb->invalidated)){
		HX_STACK_LINE(706)
		colarb->invalidated = false;
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			if ((!(colarb->userdef_restitution))){
				HX_STACK_LINE(706)
				if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(706)
					colarb->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(706)
					if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(706)
						colarb->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(706)
						colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(706)
				if (((colarb->restitution < (int)0))){
					HX_STACK_LINE(706)
					colarb->restitution = (int)0;
				}
				HX_STACK_LINE(706)
				if (((colarb->restitution > (int)1))){
					HX_STACK_LINE(706)
					colarb->restitution = (int)1;
				}
			}
			HX_STACK_LINE(706)
			if ((!(colarb->userdef_dyn_fric))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",706);
						{
							HX_STACK_LINE(706)
							{
							}
							HX_STACK_LINE(706)
							return ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));
						}
						return null();
					}
				};
				HX_STACK_LINE(706)
				colarb->dyn_fric = _Function_4_1::Block(colarb);
			}
			HX_STACK_LINE(706)
			if ((!(colarb->userdef_stat_fric))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",706);
						{
							HX_STACK_LINE(706)
							{
							}
							HX_STACK_LINE(706)
							return ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));
						}
						return null();
					}
				};
				HX_STACK_LINE(706)
				colarb->stat_fric = _Function_4_1::Block(colarb);
			}
			HX_STACK_LINE(706)
			if ((!(colarb->userdef_rfric))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",706);
						{
							HX_STACK_LINE(706)
							{
							}
							HX_STACK_LINE(706)
							return ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));
						}
						return null();
					}
				};
				HX_STACK_LINE(706)
				colarb->rfric = _Function_4_1::Block(colarb);
			}
		}
	}
	HX_STACK_LINE(707)
	return colarb->rfric;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_rollingFriction,return )

Float CollisionArbiter_obj::set_staticFriction( Float staticFriction){
	HX_STACK_PUSH("CollisionArbiter::set_staticFriction","nape/dynamics/CollisionArbiter.hx",674);
	HX_STACK_THIS(this);
	HX_STACK_ARG(staticFriction,"staticFriction");
	HX_STACK_LINE(675)
	{
		HX_STACK_LINE(677)
		if ((!(this->zpp_inner->colarb->_mutable))){
			HX_STACK_LINE(677)
			hx::Throw (((HX_CSTRING("Error: CollisionArbiter::") + HX_CSTRING("staticFriction")) + HX_CSTRING(" is only mutable during a pre-handler")));
		}
		HX_STACK_LINE(680)
		if (((staticFriction != staticFriction))){
			HX_STACK_LINE(680)
			hx::Throw (((HX_CSTRING("Error: CollisionArbiter::") + HX_CSTRING("staticFriction")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(681)
		if (((staticFriction < (int)0))){
			HX_STACK_LINE(681)
			hx::Throw (((HX_CSTRING("Error: CollisionArbiter::") + HX_CSTRING("staticFriction")) + HX_CSTRING(" cannot be negative")));
		}
		HX_STACK_LINE(682)
		{
		}
		HX_STACK_LINE(684)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(685)
		colarb->stat_fric = staticFriction;
		HX_STACK_LINE(686)
		colarb->userdef_stat_fric = true;
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::dynamics::CollisionArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",688);
			{
				HX_STACK_LINE(688)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(688)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(688)
				::zpp_nape::dynamics::ZPP_ColArbiter colarb = __this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
				HX_STACK_LINE(688)
				if ((colarb->invalidated)){
					HX_STACK_LINE(688)
					colarb->invalidated = false;
					HX_STACK_LINE(688)
					{
						HX_STACK_LINE(688)
						if ((!(colarb->userdef_restitution))){
							HX_STACK_LINE(688)
							if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
								HX_STACK_LINE(688)
								colarb->restitution = (int)0;
							}
							else{
								HX_STACK_LINE(688)
								if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
									HX_STACK_LINE(688)
									colarb->restitution = (int)1;
								}
								else{
									HX_STACK_LINE(688)
									colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
								}
							}
							HX_STACK_LINE(688)
							if (((colarb->restitution < (int)0))){
								HX_STACK_LINE(688)
								colarb->restitution = (int)0;
							}
							HX_STACK_LINE(688)
							if (((colarb->restitution > (int)1))){
								HX_STACK_LINE(688)
								colarb->restitution = (int)1;
							}
						}
						HX_STACK_LINE(688)
						if ((!(colarb->userdef_dyn_fric))){
							struct _Function_5_1{
								inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
									HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",688);
									{
										HX_STACK_LINE(688)
										{
										}
										HX_STACK_LINE(688)
										return ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));
									}
									return null();
								}
							};
							HX_STACK_LINE(688)
							colarb->dyn_fric = _Function_5_1::Block(colarb);
						}
						HX_STACK_LINE(688)
						if ((!(colarb->userdef_stat_fric))){
							struct _Function_5_1{
								inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
									HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",688);
									{
										HX_STACK_LINE(688)
										{
										}
										HX_STACK_LINE(688)
										return ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));
									}
									return null();
								}
							};
							HX_STACK_LINE(688)
							colarb->stat_fric = _Function_5_1::Block(colarb);
						}
						HX_STACK_LINE(688)
						if ((!(colarb->userdef_rfric))){
							struct _Function_5_1{
								inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
									HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",688);
									{
										HX_STACK_LINE(688)
										{
										}
										HX_STACK_LINE(688)
										return ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));
									}
									return null();
								}
							};
							HX_STACK_LINE(688)
							colarb->rfric = _Function_5_1::Block(colarb);
						}
					}
				}
				HX_STACK_LINE(688)
				return colarb->stat_fric;
			}
			return null();
		}
	};
	HX_STACK_LINE(688)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_staticFriction,return )

Float CollisionArbiter_obj::get_staticFriction( ){
	HX_STACK_PUSH("CollisionArbiter::get_staticFriction","nape/dynamics/CollisionArbiter.hx",666);
	HX_STACK_THIS(this);
	HX_STACK_LINE(668)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(668)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(670)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(671)
	if ((colarb->invalidated)){
		HX_STACK_LINE(671)
		colarb->invalidated = false;
		HX_STACK_LINE(671)
		{
			HX_STACK_LINE(671)
			if ((!(colarb->userdef_restitution))){
				HX_STACK_LINE(671)
				if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(671)
					colarb->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(671)
					if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(671)
						colarb->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(671)
						colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(671)
				if (((colarb->restitution < (int)0))){
					HX_STACK_LINE(671)
					colarb->restitution = (int)0;
				}
				HX_STACK_LINE(671)
				if (((colarb->restitution > (int)1))){
					HX_STACK_LINE(671)
					colarb->restitution = (int)1;
				}
			}
			HX_STACK_LINE(671)
			if ((!(colarb->userdef_dyn_fric))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",671);
						{
							HX_STACK_LINE(671)
							{
							}
							HX_STACK_LINE(671)
							return ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));
						}
						return null();
					}
				};
				HX_STACK_LINE(671)
				colarb->dyn_fric = _Function_4_1::Block(colarb);
			}
			HX_STACK_LINE(671)
			if ((!(colarb->userdef_stat_fric))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",671);
						{
							HX_STACK_LINE(671)
							{
							}
							HX_STACK_LINE(671)
							return ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));
						}
						return null();
					}
				};
				HX_STACK_LINE(671)
				colarb->stat_fric = _Function_4_1::Block(colarb);
			}
			HX_STACK_LINE(671)
			if ((!(colarb->userdef_rfric))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",671);
						{
							HX_STACK_LINE(671)
							{
							}
							HX_STACK_LINE(671)
							return ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));
						}
						return null();
					}
				};
				HX_STACK_LINE(671)
				colarb->rfric = _Function_4_1::Block(colarb);
			}
		}
	}
	HX_STACK_LINE(672)
	return colarb->stat_fric;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_staticFriction,return )

Float CollisionArbiter_obj::set_dynamicFriction( Float dynamicFriction){
	HX_STACK_PUSH("CollisionArbiter::set_dynamicFriction","nape/dynamics/CollisionArbiter.hx",639);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dynamicFriction,"dynamicFriction");
	HX_STACK_LINE(640)
	{
		HX_STACK_LINE(642)
		if ((!(this->zpp_inner->colarb->_mutable))){
			HX_STACK_LINE(642)
			hx::Throw (((HX_CSTRING("Error: CollisionArbiter::") + HX_CSTRING("dynamicFriction")) + HX_CSTRING(" is only mutable during a pre-handler")));
		}
		HX_STACK_LINE(645)
		if (((dynamicFriction != dynamicFriction))){
			HX_STACK_LINE(645)
			hx::Throw (((HX_CSTRING("Error: CollisionArbiter::") + HX_CSTRING("dynamicFriction")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(646)
		if (((dynamicFriction < (int)0))){
			HX_STACK_LINE(646)
			hx::Throw (((HX_CSTRING("Error: CollisionArbiter::") + HX_CSTRING("dynamicFriction")) + HX_CSTRING(" cannot be negative")));
		}
		HX_STACK_LINE(647)
		{
		}
		HX_STACK_LINE(649)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(650)
		colarb->dyn_fric = dynamicFriction;
		HX_STACK_LINE(651)
		colarb->userdef_dyn_fric = true;
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::dynamics::CollisionArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",653);
			{
				HX_STACK_LINE(653)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(653)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(653)
				::zpp_nape::dynamics::ZPP_ColArbiter colarb = __this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
				HX_STACK_LINE(653)
				if ((colarb->invalidated)){
					HX_STACK_LINE(653)
					colarb->invalidated = false;
					HX_STACK_LINE(653)
					{
						HX_STACK_LINE(653)
						if ((!(colarb->userdef_restitution))){
							HX_STACK_LINE(653)
							if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
								HX_STACK_LINE(653)
								colarb->restitution = (int)0;
							}
							else{
								HX_STACK_LINE(653)
								if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
									HX_STACK_LINE(653)
									colarb->restitution = (int)1;
								}
								else{
									HX_STACK_LINE(653)
									colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
								}
							}
							HX_STACK_LINE(653)
							if (((colarb->restitution < (int)0))){
								HX_STACK_LINE(653)
								colarb->restitution = (int)0;
							}
							HX_STACK_LINE(653)
							if (((colarb->restitution > (int)1))){
								HX_STACK_LINE(653)
								colarb->restitution = (int)1;
							}
						}
						HX_STACK_LINE(653)
						if ((!(colarb->userdef_dyn_fric))){
							struct _Function_5_1{
								inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
									HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",653);
									{
										HX_STACK_LINE(653)
										{
										}
										HX_STACK_LINE(653)
										return ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));
									}
									return null();
								}
							};
							HX_STACK_LINE(653)
							colarb->dyn_fric = _Function_5_1::Block(colarb);
						}
						HX_STACK_LINE(653)
						if ((!(colarb->userdef_stat_fric))){
							struct _Function_5_1{
								inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
									HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",653);
									{
										HX_STACK_LINE(653)
										{
										}
										HX_STACK_LINE(653)
										return ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));
									}
									return null();
								}
							};
							HX_STACK_LINE(653)
							colarb->stat_fric = _Function_5_1::Block(colarb);
						}
						HX_STACK_LINE(653)
						if ((!(colarb->userdef_rfric))){
							struct _Function_5_1{
								inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
									HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",653);
									{
										HX_STACK_LINE(653)
										{
										}
										HX_STACK_LINE(653)
										return ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));
									}
									return null();
								}
							};
							HX_STACK_LINE(653)
							colarb->rfric = _Function_5_1::Block(colarb);
						}
					}
				}
				HX_STACK_LINE(653)
				return colarb->dyn_fric;
			}
			return null();
		}
	};
	HX_STACK_LINE(653)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_dynamicFriction,return )

Float CollisionArbiter_obj::get_dynamicFriction( ){
	HX_STACK_PUSH("CollisionArbiter::get_dynamicFriction","nape/dynamics/CollisionArbiter.hx",631);
	HX_STACK_THIS(this);
	HX_STACK_LINE(633)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(633)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(635)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(636)
	if ((colarb->invalidated)){
		HX_STACK_LINE(636)
		colarb->invalidated = false;
		HX_STACK_LINE(636)
		{
			HX_STACK_LINE(636)
			if ((!(colarb->userdef_restitution))){
				HX_STACK_LINE(636)
				if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(636)
					colarb->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(636)
					if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(636)
						colarb->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(636)
						colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(636)
				if (((colarb->restitution < (int)0))){
					HX_STACK_LINE(636)
					colarb->restitution = (int)0;
				}
				HX_STACK_LINE(636)
				if (((colarb->restitution > (int)1))){
					HX_STACK_LINE(636)
					colarb->restitution = (int)1;
				}
			}
			HX_STACK_LINE(636)
			if ((!(colarb->userdef_dyn_fric))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",636);
						{
							HX_STACK_LINE(636)
							{
							}
							HX_STACK_LINE(636)
							return ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));
						}
						return null();
					}
				};
				HX_STACK_LINE(636)
				colarb->dyn_fric = _Function_4_1::Block(colarb);
			}
			HX_STACK_LINE(636)
			if ((!(colarb->userdef_stat_fric))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",636);
						{
							HX_STACK_LINE(636)
							{
							}
							HX_STACK_LINE(636)
							return ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));
						}
						return null();
					}
				};
				HX_STACK_LINE(636)
				colarb->stat_fric = _Function_4_1::Block(colarb);
			}
			HX_STACK_LINE(636)
			if ((!(colarb->userdef_rfric))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",636);
						{
							HX_STACK_LINE(636)
							{
							}
							HX_STACK_LINE(636)
							return ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));
						}
						return null();
					}
				};
				HX_STACK_LINE(636)
				colarb->rfric = _Function_4_1::Block(colarb);
			}
		}
	}
	HX_STACK_LINE(637)
	return colarb->dyn_fric;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_dynamicFriction,return )

Float CollisionArbiter_obj::set_elasticity( Float elasticity){
	HX_STACK_PUSH("CollisionArbiter::set_elasticity","nape/dynamics/CollisionArbiter.hx",604);
	HX_STACK_THIS(this);
	HX_STACK_ARG(elasticity,"elasticity");
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(607)
		if ((!(this->zpp_inner->colarb->_mutable))){
			HX_STACK_LINE(607)
			hx::Throw (((HX_CSTRING("Error: CollisionArbiter::") + HX_CSTRING("elasticity")) + HX_CSTRING(" is only mutable during a pre-handler")));
		}
		HX_STACK_LINE(610)
		if (((elasticity != elasticity))){
			HX_STACK_LINE(610)
			hx::Throw (((HX_CSTRING("Error: CollisionArbiter::") + HX_CSTRING("elasticity")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(611)
		if (((elasticity < (int)0))){
			HX_STACK_LINE(611)
			hx::Throw (((HX_CSTRING("Error: CollisionArbiter::") + HX_CSTRING("elasticity")) + HX_CSTRING(" cannot be negative")));
		}
		HX_STACK_LINE(612)
		{
		}
		HX_STACK_LINE(614)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(615)
		colarb->restitution = elasticity;
		HX_STACK_LINE(616)
		colarb->userdef_restitution = true;
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::dynamics::CollisionArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",618);
			{
				HX_STACK_LINE(618)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(618)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(618)
				::zpp_nape::dynamics::ZPP_ColArbiter colarb = __this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
				HX_STACK_LINE(618)
				if ((colarb->invalidated)){
					HX_STACK_LINE(618)
					colarb->invalidated = false;
					HX_STACK_LINE(618)
					{
						HX_STACK_LINE(618)
						if ((!(colarb->userdef_restitution))){
							HX_STACK_LINE(618)
							if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
								HX_STACK_LINE(618)
								colarb->restitution = (int)0;
							}
							else{
								HX_STACK_LINE(618)
								if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
									HX_STACK_LINE(618)
									colarb->restitution = (int)1;
								}
								else{
									HX_STACK_LINE(618)
									colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
								}
							}
							HX_STACK_LINE(618)
							if (((colarb->restitution < (int)0))){
								HX_STACK_LINE(618)
								colarb->restitution = (int)0;
							}
							HX_STACK_LINE(618)
							if (((colarb->restitution > (int)1))){
								HX_STACK_LINE(618)
								colarb->restitution = (int)1;
							}
						}
						HX_STACK_LINE(618)
						if ((!(colarb->userdef_dyn_fric))){
							struct _Function_5_1{
								inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
									HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",618);
									{
										HX_STACK_LINE(618)
										{
										}
										HX_STACK_LINE(618)
										return ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));
									}
									return null();
								}
							};
							HX_STACK_LINE(618)
							colarb->dyn_fric = _Function_5_1::Block(colarb);
						}
						HX_STACK_LINE(618)
						if ((!(colarb->userdef_stat_fric))){
							struct _Function_5_1{
								inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
									HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",618);
									{
										HX_STACK_LINE(618)
										{
										}
										HX_STACK_LINE(618)
										return ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));
									}
									return null();
								}
							};
							HX_STACK_LINE(618)
							colarb->stat_fric = _Function_5_1::Block(colarb);
						}
						HX_STACK_LINE(618)
						if ((!(colarb->userdef_rfric))){
							struct _Function_5_1{
								inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
									HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",618);
									{
										HX_STACK_LINE(618)
										{
										}
										HX_STACK_LINE(618)
										return ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));
									}
									return null();
								}
							};
							HX_STACK_LINE(618)
							colarb->rfric = _Function_5_1::Block(colarb);
						}
					}
				}
				HX_STACK_LINE(618)
				return colarb->restitution;
			}
			return null();
		}
	};
	HX_STACK_LINE(618)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_elasticity,return )

Float CollisionArbiter_obj::get_elasticity( ){
	HX_STACK_PUSH("CollisionArbiter::get_elasticity","nape/dynamics/CollisionArbiter.hx",596);
	HX_STACK_THIS(this);
	HX_STACK_LINE(598)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(598)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(600)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(601)
	if ((colarb->invalidated)){
		HX_STACK_LINE(601)
		colarb->invalidated = false;
		HX_STACK_LINE(601)
		{
			HX_STACK_LINE(601)
			if ((!(colarb->userdef_restitution))){
				HX_STACK_LINE(601)
				if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(601)
					colarb->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(601)
					if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(601)
						colarb->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(601)
						colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(601)
				if (((colarb->restitution < (int)0))){
					HX_STACK_LINE(601)
					colarb->restitution = (int)0;
				}
				HX_STACK_LINE(601)
				if (((colarb->restitution > (int)1))){
					HX_STACK_LINE(601)
					colarb->restitution = (int)1;
				}
			}
			HX_STACK_LINE(601)
			if ((!(colarb->userdef_dyn_fric))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",601);
						{
							HX_STACK_LINE(601)
							{
							}
							HX_STACK_LINE(601)
							return ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));
						}
						return null();
					}
				};
				HX_STACK_LINE(601)
				colarb->dyn_fric = _Function_4_1::Block(colarb);
			}
			HX_STACK_LINE(601)
			if ((!(colarb->userdef_stat_fric))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",601);
						{
							HX_STACK_LINE(601)
							{
							}
							HX_STACK_LINE(601)
							return ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));
						}
						return null();
					}
				};
				HX_STACK_LINE(601)
				colarb->stat_fric = _Function_4_1::Block(colarb);
			}
			HX_STACK_LINE(601)
			if ((!(colarb->userdef_rfric))){
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::dynamics::ZPP_ColArbiter &colarb){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",601);
						{
							HX_STACK_LINE(601)
							{
							}
							HX_STACK_LINE(601)
							return ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));
						}
						return null();
					}
				};
				HX_STACK_LINE(601)
				colarb->rfric = _Function_4_1::Block(colarb);
			}
		}
	}
	HX_STACK_LINE(602)
	return colarb->restitution;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_elasticity,return )

Float CollisionArbiter_obj::rollingImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("CollisionArbiter::rollingImpulse","nape/dynamics/CollisionArbiter.hx",573);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(575)
		if ((!(this->zpp_inner->active))){
			HX_STACK_LINE(575)
			hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
		}
		struct _Function_1_1{
			inline static ::nape::phys::Body Block( ::nape::dynamics::CollisionArbiter_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",578);
				{
					HX_STACK_LINE(578)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(578)
						hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(578)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b2->outer) : ::nape::phys::Body(__this->zpp_inner->b1->outer) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::nape::phys::Body Block( ::nape::dynamics::CollisionArbiter_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",578);
				{
					HX_STACK_LINE(578)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(578)
						hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(578)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b1->outer) : ::nape::phys::Body(__this->zpp_inner->b2->outer) );
				}
				return null();
			}
		};
		HX_STACK_LINE(578)
		if (((bool((bool((body != null())) && bool((body != _Function_1_1::Block(this))))) && bool((body != _Function_1_2::Block(this)))))){
			HX_STACK_LINE(578)
			hx::Throw (HX_CSTRING("Error: Arbiter does not relate to body"));
		}
		HX_STACK_LINE(580)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(581)
		if (((bool(!(freshOnly)) || bool(colarb->oc1->fresh)))){
			HX_STACK_LINE(581)
			return colarb->oc1->wrapper()->rollingImpulse(body);
		}
		else{
			HX_STACK_LINE(582)
			return 0.0;
		}
		HX_STACK_LINE(581)
		return 0.;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionArbiter_obj,rollingImpulse,return )

::nape::geom::Vec3 CollisionArbiter_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("CollisionArbiter::totalImpulse","nape/dynamics/CollisionArbiter.hx",485);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(487)
		if ((!(this->zpp_inner->active))){
			HX_STACK_LINE(487)
			hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
		}
		struct _Function_1_1{
			inline static ::nape::phys::Body Block( ::nape::dynamics::CollisionArbiter_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",490);
				{
					HX_STACK_LINE(490)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(490)
						hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(490)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b2->outer) : ::nape::phys::Body(__this->zpp_inner->b1->outer) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::nape::phys::Body Block( ::nape::dynamics::CollisionArbiter_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",490);
				{
					HX_STACK_LINE(490)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(490)
						hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(490)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b1->outer) : ::nape::phys::Body(__this->zpp_inner->b2->outer) );
				}
				return null();
			}
		};
		HX_STACK_LINE(490)
		if (((bool((bool((body != null())) && bool((body != _Function_1_1::Block(this))))) && bool((body != _Function_1_2::Block(this)))))){
			HX_STACK_LINE(490)
			hx::Throw (HX_CSTRING("Error: Arbiter does not relate to body"));
		}
		HX_STACK_LINE(492)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(494)
		{
		}
		HX_STACK_LINE(502)
		{
		}
		HX_STACK_LINE(510)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(511)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(512)
		if (((bool(!(freshOnly)) || bool(colarb->oc1->fresh)))){
			HX_STACK_LINE(514)
			::nape::geom::Vec3 imp = colarb->oc1->wrapper()->totalImpulse(body);		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(515)
			{
				HX_STACK_LINE(516)
				int t = (int)1;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(517)
				{
					HX_STACK_LINE(518)
					int t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(519)
					{
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",527);
							{
								HX_STACK_LINE(527)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(527)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(527)
								{
									HX_STACK_LINE(527)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(527)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(527)
										_this->_validate();
									}
								}
								HX_STACK_LINE(527)
								return imp->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(527)
					hx::AddEq(retx,(_Function_4_1::Block(imp) * t1));
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",528);
							{
								HX_STACK_LINE(528)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(528)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(528)
								{
									HX_STACK_LINE(528)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(528)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(528)
										_this->_validate();
									}
								}
								HX_STACK_LINE(528)
								return imp->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(528)
					hx::AddEq(rety,(_Function_4_2::Block(imp) * t1));
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec3 &imp){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",530);
						{
							HX_STACK_LINE(530)
							if (((bool((imp != null())) && bool(imp->zpp_disp)))){
								HX_STACK_LINE(530)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(530)
							{
								HX_STACK_LINE(530)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(530)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(530)
									_this->_validate();
								}
							}
							HX_STACK_LINE(530)
							return imp->zpp_inner->z;
						}
						return null();
					}
				};
				HX_STACK_LINE(530)
				hx::AddEq(retz,(_Function_3_1::Block(imp) * t));
			}
			HX_STACK_LINE(532)
			imp->dispose();
		}
		HX_STACK_LINE(535)
		if ((colarb->hc2)){
			HX_STACK_LINE(535)
			if (((bool(!(freshOnly)) || bool(colarb->oc2->fresh)))){
				HX_STACK_LINE(537)
				::nape::geom::Vec3 imp = colarb->oc2->wrapper()->totalImpulse(body);		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(538)
				{
					HX_STACK_LINE(539)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(541)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(542)
						{
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",550);
								{
									HX_STACK_LINE(550)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(550)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(550)
									{
										HX_STACK_LINE(550)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(550)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(550)
											_this->_validate();
										}
									}
									HX_STACK_LINE(550)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(550)
						hx::AddEq(retx,(_Function_5_1::Block(imp) * t1));
						struct _Function_5_2{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",551);
								{
									HX_STACK_LINE(551)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(551)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(551)
									{
										HX_STACK_LINE(551)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(551)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(551)
											_this->_validate();
										}
									}
									HX_STACK_LINE(551)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(551)
						hx::AddEq(rety,(_Function_5_2::Block(imp) * t1));
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",553);
							{
								HX_STACK_LINE(553)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(553)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(553)
								{
									HX_STACK_LINE(553)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(553)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(553)
										_this->_validate();
									}
								}
								HX_STACK_LINE(553)
								return imp->zpp_inner->z;
							}
							return null();
						}
					};
					HX_STACK_LINE(553)
					hx::AddEq(retz,(_Function_4_1::Block(imp) * t));
				}
				HX_STACK_LINE(555)
				imp->dispose();
			}
		}
		HX_STACK_LINE(558)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


::nape::geom::Vec3 CollisionArbiter_obj::tangentImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("CollisionArbiter::tangentImpulse","nape/dynamics/CollisionArbiter.hx",394);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(396)
		if ((!(this->zpp_inner->active))){
			HX_STACK_LINE(396)
			hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
		}
		struct _Function_1_1{
			inline static ::nape::phys::Body Block( ::nape::dynamics::CollisionArbiter_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",399);
				{
					HX_STACK_LINE(399)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(399)
						hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(399)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b2->outer) : ::nape::phys::Body(__this->zpp_inner->b1->outer) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::nape::phys::Body Block( ::nape::dynamics::CollisionArbiter_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",399);
				{
					HX_STACK_LINE(399)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(399)
						hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(399)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b1->outer) : ::nape::phys::Body(__this->zpp_inner->b2->outer) );
				}
				return null();
			}
		};
		HX_STACK_LINE(399)
		if (((bool((bool((body != null())) && bool((body != _Function_1_1::Block(this))))) && bool((body != _Function_1_2::Block(this)))))){
			HX_STACK_LINE(399)
			hx::Throw (HX_CSTRING("Error: Arbiter does not relate to body"));
		}
		HX_STACK_LINE(401)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(402)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(403)
		{
		}
		HX_STACK_LINE(411)
		{
		}
		HX_STACK_LINE(419)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(420)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(421)
		if (((bool(!(freshOnly)) || bool(colarb->oc1->fresh)))){
			HX_STACK_LINE(423)
			::nape::geom::Vec3 imp = colarb->oc1->wrapper()->tangentImpulse(body);		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(425)
				int t = (int)1;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(427)
					int t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(428)
					{
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",436);
							{
								HX_STACK_LINE(436)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(436)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(436)
								{
									HX_STACK_LINE(436)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(436)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(436)
										_this->_validate();
									}
								}
								HX_STACK_LINE(436)
								return imp->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(436)
					hx::AddEq(retx,(_Function_4_1::Block(imp) * t1));
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",437);
							{
								HX_STACK_LINE(437)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(437)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(437)
								{
									HX_STACK_LINE(437)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(437)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(437)
										_this->_validate();
									}
								}
								HX_STACK_LINE(437)
								return imp->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(437)
					hx::AddEq(rety,(_Function_4_2::Block(imp) * t1));
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec3 &imp){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",439);
						{
							HX_STACK_LINE(439)
							if (((bool((imp != null())) && bool(imp->zpp_disp)))){
								HX_STACK_LINE(439)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(439)
							{
								HX_STACK_LINE(439)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(439)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(439)
									_this->_validate();
								}
							}
							HX_STACK_LINE(439)
							return imp->zpp_inner->z;
						}
						return null();
					}
				};
				HX_STACK_LINE(439)
				hx::AddEq(retz,(_Function_3_1::Block(imp) * t));
			}
			HX_STACK_LINE(441)
			imp->dispose();
		}
		HX_STACK_LINE(444)
		if ((colarb->hc2)){
			HX_STACK_LINE(444)
			if (((bool(!(freshOnly)) || bool(colarb->oc2->fresh)))){
				HX_STACK_LINE(446)
				::nape::geom::Vec3 imp = colarb->oc2->wrapper()->tangentImpulse(body);		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(448)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(449)
					{
						HX_STACK_LINE(450)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(451)
						{
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",459);
								{
									HX_STACK_LINE(459)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(459)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(459)
									{
										HX_STACK_LINE(459)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(459)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(459)
											_this->_validate();
										}
									}
									HX_STACK_LINE(459)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(459)
						hx::AddEq(retx,(_Function_5_1::Block(imp) * t1));
						struct _Function_5_2{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",460);
								{
									HX_STACK_LINE(460)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(460)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(460)
									{
										HX_STACK_LINE(460)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(460)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(460)
											_this->_validate();
										}
									}
									HX_STACK_LINE(460)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(460)
						hx::AddEq(rety,(_Function_5_2::Block(imp) * t1));
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",462);
							{
								HX_STACK_LINE(462)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(462)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(462)
								{
									HX_STACK_LINE(462)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(462)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(462)
										_this->_validate();
									}
								}
								HX_STACK_LINE(462)
								return imp->zpp_inner->z;
							}
							return null();
						}
					};
					HX_STACK_LINE(462)
					hx::AddEq(retz,(_Function_4_1::Block(imp) * t));
				}
				HX_STACK_LINE(464)
				imp->dispose();
			}
		}
		HX_STACK_LINE(467)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionArbiter_obj,tangentImpulse,return )

::nape::geom::Vec3 CollisionArbiter_obj::normalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("CollisionArbiter::normalImpulse","nape/dynamics/CollisionArbiter.hx",300);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(302)
		if ((!(this->zpp_inner->active))){
			HX_STACK_LINE(302)
			hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
		}
		struct _Function_1_1{
			inline static ::nape::phys::Body Block( ::nape::dynamics::CollisionArbiter_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",305);
				{
					HX_STACK_LINE(305)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(305)
						hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(305)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b2->outer) : ::nape::phys::Body(__this->zpp_inner->b1->outer) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::nape::phys::Body Block( ::nape::dynamics::CollisionArbiter_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",305);
				{
					HX_STACK_LINE(305)
					if ((!(__this->zpp_inner->active))){
						HX_STACK_LINE(305)
						hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
					}
					HX_STACK_LINE(305)
					return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::phys::Body(__this->zpp_inner->b1->outer) : ::nape::phys::Body(__this->zpp_inner->b2->outer) );
				}
				return null();
			}
		};
		HX_STACK_LINE(305)
		if (((bool((bool((body != null())) && bool((body != _Function_1_1::Block(this))))) && bool((body != _Function_1_2::Block(this)))))){
			HX_STACK_LINE(305)
			hx::Throw (HX_CSTRING("Error: Arbiter does not relate to body"));
		}
		HX_STACK_LINE(307)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(308)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(309)
		{
		}
		HX_STACK_LINE(317)
		{
		}
		HX_STACK_LINE(325)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(326)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(327)
		if (((bool(!(freshOnly)) || bool(colarb->oc1->fresh)))){
			HX_STACK_LINE(329)
			::nape::geom::Vec3 imp = colarb->oc1->wrapper()->normalImpulse(body);		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(330)
			{
				HX_STACK_LINE(331)
				int t = (int)1;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(332)
				{
					HX_STACK_LINE(333)
					int t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(334)
					{
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",342);
							{
								HX_STACK_LINE(342)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(342)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(342)
								{
									HX_STACK_LINE(342)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(342)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(342)
										_this->_validate();
									}
								}
								HX_STACK_LINE(342)
								return imp->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(342)
					hx::AddEq(retx,(_Function_4_1::Block(imp) * t1));
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",343);
							{
								HX_STACK_LINE(343)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(343)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(343)
								{
									HX_STACK_LINE(343)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(343)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(343)
										_this->_validate();
									}
								}
								HX_STACK_LINE(343)
								return imp->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(343)
					hx::AddEq(rety,(_Function_4_2::Block(imp) * t1));
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec3 &imp){
						HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",345);
						{
							HX_STACK_LINE(345)
							if (((bool((imp != null())) && bool(imp->zpp_disp)))){
								HX_STACK_LINE(345)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(345)
							{
								HX_STACK_LINE(345)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(345)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(345)
									_this->_validate();
								}
							}
							HX_STACK_LINE(345)
							return imp->zpp_inner->z;
						}
						return null();
					}
				};
				HX_STACK_LINE(345)
				hx::AddEq(retz,(_Function_3_1::Block(imp) * t));
			}
			HX_STACK_LINE(347)
			imp->dispose();
		}
		HX_STACK_LINE(350)
		if ((colarb->hc2)){
			HX_STACK_LINE(350)
			if (((bool(!(freshOnly)) || bool(colarb->oc2->fresh)))){
				HX_STACK_LINE(352)
				::nape::geom::Vec3 imp = colarb->oc2->wrapper()->normalImpulse(body);		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(353)
				{
					HX_STACK_LINE(354)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(355)
					{
						HX_STACK_LINE(356)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(357)
						{
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",365);
								{
									HX_STACK_LINE(365)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(365)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(365)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(365)
											_this->_validate();
										}
									}
									HX_STACK_LINE(365)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(365)
						hx::AddEq(retx,(_Function_5_1::Block(imp) * t1));
						struct _Function_5_2{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",366);
								{
									HX_STACK_LINE(366)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(366)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(366)
									{
										HX_STACK_LINE(366)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(366)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(366)
											_this->_validate();
										}
									}
									HX_STACK_LINE(366)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(366)
						hx::AddEq(rety,(_Function_5_2::Block(imp) * t1));
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",368);
							{
								HX_STACK_LINE(368)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(368)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(368)
								{
									HX_STACK_LINE(368)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(368)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(368)
										_this->_validate();
									}
								}
								HX_STACK_LINE(368)
								return imp->zpp_inner->z;
							}
							return null();
						}
					};
					HX_STACK_LINE(368)
					hx::AddEq(retz,(_Function_4_1::Block(imp) * t));
				}
				HX_STACK_LINE(370)
				imp->dispose();
			}
		}
		HX_STACK_LINE(373)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionArbiter_obj,normalImpulse,return )

bool CollisionArbiter_obj::secondVertex( ){
	HX_STACK_PUSH("CollisionArbiter::secondVertex","nape/dynamics/CollisionArbiter.hx",276);
	HX_STACK_THIS(this);
	HX_STACK_LINE(278)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(278)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(280)
	bool poly2circle = ((this->zpp_inner->colarb->__ref_edge1 != null()) != ((this->zpp_inner->colarb->__ref_edge2 != null())));		HX_STACK_VAR(poly2circle,"poly2circle");
	HX_STACK_LINE(281)
	return (  ((poly2circle)) ? bool((this->zpp_inner->colarb->__ref_vertex == (int)1)) : bool(false) );
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,secondVertex,return )

bool CollisionArbiter_obj::firstVertex( ){
	HX_STACK_PUSH("CollisionArbiter::firstVertex","nape/dynamics/CollisionArbiter.hx",257);
	HX_STACK_THIS(this);
	HX_STACK_LINE(259)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(259)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(261)
	bool poly2circle = ((this->zpp_inner->colarb->__ref_edge1 != null()) != ((this->zpp_inner->colarb->__ref_edge2 != null())));		HX_STACK_VAR(poly2circle,"poly2circle");
	HX_STACK_LINE(262)
	return (  ((poly2circle)) ? bool((this->zpp_inner->colarb->__ref_vertex == (int)-1)) : bool(false) );
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,firstVertex,return )

::nape::shape::Edge CollisionArbiter_obj::get_referenceEdge2( ){
	HX_STACK_PUSH("CollisionArbiter::get_referenceEdge2","nape/dynamics/CollisionArbiter.hx",239);
	HX_STACK_THIS(this);
	HX_STACK_LINE(241)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(241)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(243)
	::zpp_nape::shape::ZPP_Edge edge = this->zpp_inner->colarb->__ref_edge1;		HX_STACK_VAR(edge,"edge");
	struct _Function_1_1{
		inline static ::nape::shape::Shape Block( ::nape::dynamics::CollisionArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",244);
			{
				HX_STACK_LINE(244)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(244)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(244)
				return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::shape::Shape(__this->zpp_inner->ws1->outer) : ::nape::shape::Shape(__this->zpp_inner->ws2->outer) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::shape::Shape Block( ::nape::dynamics::CollisionArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",244);
			{
				HX_STACK_LINE(244)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(244)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(244)
				return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::shape::Shape(__this->zpp_inner->ws1->outer) : ::nape::shape::Shape(__this->zpp_inner->ws2->outer) );
			}
			return null();
		}
	};
	HX_STACK_LINE(244)
	if (((bool((edge != null())) && bool(((bool(!((((_Function_1_1::Block(this))->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)))) || bool(((_Function_1_2::Block(this))->zpp_inner != edge->polygon)))))))){
		HX_STACK_LINE(244)
		edge = this->zpp_inner->colarb->__ref_edge2;
	}
	HX_STACK_LINE(245)
	return (  (((edge == null()))) ? ::nape::shape::Edge(null()) : ::nape::shape::Edge(edge->wrapper()) );
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_referenceEdge2,return )

::nape::shape::Edge CollisionArbiter_obj::get_referenceEdge1( ){
	HX_STACK_PUSH("CollisionArbiter::get_referenceEdge1","nape/dynamics/CollisionArbiter.hx",225);
	HX_STACK_THIS(this);
	HX_STACK_LINE(227)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(227)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(229)
	::zpp_nape::shape::ZPP_Edge edge = this->zpp_inner->colarb->__ref_edge1;		HX_STACK_VAR(edge,"edge");
	struct _Function_1_1{
		inline static ::nape::shape::Shape Block( ::nape::dynamics::CollisionArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",230);
			{
				HX_STACK_LINE(230)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(230)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(230)
				return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::shape::Shape(__this->zpp_inner->ws2->outer) : ::nape::shape::Shape(__this->zpp_inner->ws1->outer) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::shape::Shape Block( ::nape::dynamics::CollisionArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/CollisionArbiter.hx",230);
			{
				HX_STACK_LINE(230)
				if ((!(__this->zpp_inner->active))){
					HX_STACK_LINE(230)
					hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
				}
				HX_STACK_LINE(230)
				return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::shape::Shape(__this->zpp_inner->ws2->outer) : ::nape::shape::Shape(__this->zpp_inner->ws1->outer) );
			}
			return null();
		}
	};
	HX_STACK_LINE(230)
	if (((bool((edge != null())) && bool(((bool(!((((_Function_1_1::Block(this))->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON)))) || bool(((_Function_1_2::Block(this))->zpp_inner != edge->polygon)))))))){
		HX_STACK_LINE(230)
		edge = this->zpp_inner->colarb->__ref_edge2;
	}
	HX_STACK_LINE(231)
	return (  (((edge == null()))) ? ::nape::shape::Edge(null()) : ::nape::shape::Edge(edge->wrapper()) );
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_referenceEdge1,return )

Float CollisionArbiter_obj::get_radius( ){
	HX_STACK_PUSH("CollisionArbiter::get_radius","nape/dynamics/CollisionArbiter.hx",213);
	HX_STACK_THIS(this);
	HX_STACK_LINE(215)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(215)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(217)
	return this->zpp_inner->colarb->radius;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_radius,return )

::nape::geom::Vec2 CollisionArbiter_obj::get_normal( ){
	HX_STACK_PUSH("CollisionArbiter::get_normal","nape/dynamics/CollisionArbiter.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_LINE(201)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(201)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(203)
	if (((this->zpp_inner->colarb->wrap_normal == null()))){
		HX_STACK_LINE(203)
		this->zpp_inner->colarb->getnormal();
	}
	HX_STACK_LINE(204)
	return this->zpp_inner->colarb->wrap_normal;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_normal,return )

::nape::dynamics::ContactList CollisionArbiter_obj::get_contacts( ){
	HX_STACK_PUSH("CollisionArbiter::get_contacts","nape/dynamics/CollisionArbiter.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_LINE(185)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(185)
		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(187)
	if (((this->zpp_inner->colarb->wrap_contacts == null()))){
		HX_STACK_LINE(187)
		this->zpp_inner->colarb->setupcontacts();
	}
	HX_STACK_LINE(188)
	return this->zpp_inner->colarb->wrap_contacts;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_contacts,return )


CollisionArbiter_obj::CollisionArbiter_obj()
{
}

void CollisionArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CollisionArbiter);
	HX_MARK_MEMBER_NAME(rollingFriction,"rollingFriction");
	HX_MARK_MEMBER_NAME(staticFriction,"staticFriction");
	HX_MARK_MEMBER_NAME(dynamicFriction,"dynamicFriction");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(referenceEdge2,"referenceEdge2");
	HX_MARK_MEMBER_NAME(referenceEdge1,"referenceEdge1");
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_MEMBER_NAME(contacts,"contacts");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CollisionArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rollingFriction,"rollingFriction");
	HX_VISIT_MEMBER_NAME(staticFriction,"staticFriction");
	HX_VISIT_MEMBER_NAME(dynamicFriction,"dynamicFriction");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(referenceEdge2,"referenceEdge2");
	HX_VISIT_MEMBER_NAME(referenceEdge1,"referenceEdge1");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(normal,"normal");
	HX_VISIT_MEMBER_NAME(contacts,"contacts");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CollisionArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return inCallProp ? get_radius() : radius; }
		if (HX_FIELD_EQ(inName,"normal") ) { return inCallProp ? get_normal() : normal; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contacts") ) { return inCallProp ? get_contacts() : contacts; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return inCallProp ? get_elasticity() : elasticity; }
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"get_normal") ) { return get_normal_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstVertex") ) { return firstVertex_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"secondVertex") ) { return secondVertex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_contacts") ) { return get_contacts_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { return normalImpulse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"staticFriction") ) { return inCallProp ? get_staticFriction() : staticFriction; }
		if (HX_FIELD_EQ(inName,"set_elasticity") ) { return set_elasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_elasticity") ) { return get_elasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"rollingImpulse") ) { return rollingImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { return tangentImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"referenceEdge2") ) { return inCallProp ? get_referenceEdge2() : referenceEdge2; }
		if (HX_FIELD_EQ(inName,"referenceEdge1") ) { return inCallProp ? get_referenceEdge1() : referenceEdge1; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { return inCallProp ? get_rollingFriction() : rollingFriction; }
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { return inCallProp ? get_dynamicFriction() : dynamicFriction; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_staticFriction") ) { return set_staticFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_staticFriction") ) { return get_staticFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_referenceEdge2") ) { return get_referenceEdge2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_referenceEdge1") ) { return get_referenceEdge1_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_rollingFriction") ) { return set_rollingFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rollingFriction") ) { return get_rollingFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dynamicFriction") ) { return set_dynamicFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dynamicFriction") ) { return get_dynamicFriction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollisionArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contacts") ) { contacts=inValue.Cast< ::nape::dynamics::ContactList >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { if (inCallProp) return set_elasticity(inValue);elasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"staticFriction") ) { if (inCallProp) return set_staticFriction(inValue);staticFriction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"referenceEdge2") ) { referenceEdge2=inValue.Cast< ::nape::shape::Edge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"referenceEdge1") ) { referenceEdge1=inValue.Cast< ::nape::shape::Edge >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { if (inCallProp) return set_rollingFriction(inValue);rollingFriction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { if (inCallProp) return set_dynamicFriction(inValue);dynamicFriction=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CollisionArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rollingFriction"));
	outFields->push(HX_CSTRING("staticFriction"));
	outFields->push(HX_CSTRING("dynamicFriction"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("referenceEdge2"));
	outFields->push(HX_CSTRING("referenceEdge1"));
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("normal"));
	outFields->push(HX_CSTRING("contacts"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_rollingFriction"),
	HX_CSTRING("get_rollingFriction"),
	HX_CSTRING("rollingFriction"),
	HX_CSTRING("set_staticFriction"),
	HX_CSTRING("get_staticFriction"),
	HX_CSTRING("staticFriction"),
	HX_CSTRING("set_dynamicFriction"),
	HX_CSTRING("get_dynamicFriction"),
	HX_CSTRING("dynamicFriction"),
	HX_CSTRING("set_elasticity"),
	HX_CSTRING("get_elasticity"),
	HX_CSTRING("elasticity"),
	HX_CSTRING("rollingImpulse"),
	HX_CSTRING("totalImpulse"),
	HX_CSTRING("tangentImpulse"),
	HX_CSTRING("normalImpulse"),
	HX_CSTRING("secondVertex"),
	HX_CSTRING("firstVertex"),
	HX_CSTRING("get_referenceEdge2"),
	HX_CSTRING("referenceEdge2"),
	HX_CSTRING("get_referenceEdge1"),
	HX_CSTRING("referenceEdge1"),
	HX_CSTRING("get_radius"),
	HX_CSTRING("radius"),
	HX_CSTRING("get_normal"),
	HX_CSTRING("normal"),
	HX_CSTRING("get_contacts"),
	HX_CSTRING("contacts"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollisionArbiter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollisionArbiter_obj::__mClass,"__mClass");
};

Class CollisionArbiter_obj::__mClass;

void CollisionArbiter_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.CollisionArbiter"), hx::TCanCast< CollisionArbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CollisionArbiter_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
