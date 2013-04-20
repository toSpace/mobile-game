#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_PulleyJoint
#include <nape/constraint/PulleyJoint.h>
#endif
#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
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
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PulleyJoint
#include <zpp_nape/constraint/ZPP_PulleyJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace constraint{

Void PulleyJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::phys::Body body3,::nape::phys::Body body4,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,::nape::geom::Vec2 anchor3,::nape::geom::Vec2 anchor4,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio)
{
HX_STACK_PUSH("PulleyJoint::new","nape/constraint/PulleyJoint.hx",187);
Float ratio = __o_ratio.Default(1.0);
{
	HX_STACK_LINE(191)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(563)
	this->zpp_inner_zn = ::zpp_nape::constraint::ZPP_PulleyJoint_obj::__new();
	HX_STACK_LINE(564)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(565)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(566)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(568)
	try{
		HX_STACK_LINE(568)
		super::__construct();
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(576)
	{
		HX_STACK_LINE(576)
		{
			HX_STACK_LINE(576)
			this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body1")));
			HX_STACK_LINE(576)
			::zpp_nape::phys::ZPP_Body inbody1 = (  (((body1 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body1->zpp_inner) );		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(576)
			if (((inbody1 != this->zpp_inner_zn->b1))){
				HX_STACK_LINE(576)
				if (((this->zpp_inner_zn->b1 != null()))){
					HX_STACK_LINE(576)
					if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1)))) && bool((this->zpp_inner_zn->b3 != this->zpp_inner_zn->b1)))) && bool((this->zpp_inner_zn->b4 != this->zpp_inner_zn->b1))))){
						HX_STACK_LINE(576)
						if (((this->zpp_inner_zn->b1 != null()))){
							HX_STACK_LINE(576)
							this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(576)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(576)
						this->zpp_inner_zn->b1->wake();
					}
				}
				HX_STACK_LINE(576)
				this->zpp_inner_zn->b1 = inbody1;
				HX_STACK_LINE(576)
				if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1)))) && bool((this->zpp_inner_zn->b3 != inbody1)))) && bool((this->zpp_inner_zn->b4 != inbody1))))){
					HX_STACK_LINE(576)
					if (((inbody1 != null()))){
						HX_STACK_LINE(576)
						inbody1->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(576)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(576)
					this->zpp_inner->wake();
					HX_STACK_LINE(576)
					if (((inbody1 != null()))){
						HX_STACK_LINE(576)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(576)
		if (((this->zpp_inner_zn->b1 == null()))){
			HX_STACK_LINE(576)
			Dynamic();
		}
		else{
			HX_STACK_LINE(576)
			this->zpp_inner_zn->b1->outer;
		}
	}
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body2")));
			HX_STACK_LINE(577)
			::zpp_nape::phys::ZPP_Body inbody2 = (  (((body2 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body2->zpp_inner) );		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(577)
			if (((inbody2 != this->zpp_inner_zn->b2))){
				HX_STACK_LINE(577)
				if (((this->zpp_inner_zn->b2 != null()))){
					HX_STACK_LINE(577)
					if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2)))) && bool((this->zpp_inner_zn->b3 != this->zpp_inner_zn->b2)))) && bool((this->zpp_inner_zn->b4 != this->zpp_inner_zn->b2))))){
						HX_STACK_LINE(577)
						if (((this->zpp_inner_zn->b2 != null()))){
							HX_STACK_LINE(577)
							this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(577)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(577)
						this->zpp_inner_zn->b2->wake();
					}
				}
				HX_STACK_LINE(577)
				this->zpp_inner_zn->b2 = inbody2;
				HX_STACK_LINE(577)
				if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2)))) && bool((this->zpp_inner_zn->b3 != inbody2)))) && bool((this->zpp_inner_zn->b4 != inbody2))))){
					HX_STACK_LINE(577)
					if (((inbody2 != null()))){
						HX_STACK_LINE(577)
						inbody2->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(577)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(577)
					this->zpp_inner->wake();
					HX_STACK_LINE(577)
					if (((inbody2 != null()))){
						HX_STACK_LINE(577)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(577)
		if (((this->zpp_inner_zn->b2 == null()))){
			HX_STACK_LINE(577)
			Dynamic();
		}
		else{
			HX_STACK_LINE(577)
			this->zpp_inner_zn->b2->outer;
		}
	}
	HX_STACK_LINE(578)
	{
		HX_STACK_LINE(578)
		{
			HX_STACK_LINE(578)
			this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body3")));
			HX_STACK_LINE(578)
			::zpp_nape::phys::ZPP_Body inbody3 = (  (((body3 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body3->zpp_inner) );		HX_STACK_VAR(inbody3,"inbody3");
			HX_STACK_LINE(578)
			if (((inbody3 != this->zpp_inner_zn->b3))){
				HX_STACK_LINE(578)
				if (((this->zpp_inner_zn->b3 != null()))){
					HX_STACK_LINE(578)
					if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b3)))) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b3)))) && bool((this->zpp_inner_zn->b4 != this->zpp_inner_zn->b3))))){
						HX_STACK_LINE(578)
						if (((this->zpp_inner_zn->b3 != null()))){
							HX_STACK_LINE(578)
							this->zpp_inner_zn->b3->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(578)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(578)
						this->zpp_inner_zn->b3->wake();
					}
				}
				HX_STACK_LINE(578)
				this->zpp_inner_zn->b3 = inbody3;
				HX_STACK_LINE(578)
				if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody3 != null())))) && bool((this->zpp_inner_zn->b1 != inbody3)))) && bool((this->zpp_inner_zn->b2 != inbody3)))) && bool((this->zpp_inner_zn->b4 != inbody3))))){
					HX_STACK_LINE(578)
					if (((inbody3 != null()))){
						HX_STACK_LINE(578)
						inbody3->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(578)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(578)
					this->zpp_inner->wake();
					HX_STACK_LINE(578)
					if (((inbody3 != null()))){
						HX_STACK_LINE(578)
						inbody3->wake();
					}
				}
			}
		}
		HX_STACK_LINE(578)
		if (((this->zpp_inner_zn->b3 == null()))){
			HX_STACK_LINE(578)
			Dynamic();
		}
		else{
			HX_STACK_LINE(578)
			this->zpp_inner_zn->b3->outer;
		}
	}
	HX_STACK_LINE(579)
	{
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body4")));
			HX_STACK_LINE(579)
			::zpp_nape::phys::ZPP_Body inbody4 = (  (((body4 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body4->zpp_inner) );		HX_STACK_VAR(inbody4,"inbody4");
			HX_STACK_LINE(579)
			if (((inbody4 != this->zpp_inner_zn->b4))){
				HX_STACK_LINE(579)
				if (((this->zpp_inner_zn->b4 != null()))){
					HX_STACK_LINE(579)
					if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b4)))) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b4)))) && bool((this->zpp_inner_zn->b3 != this->zpp_inner_zn->b4))))){
						HX_STACK_LINE(579)
						if (((this->zpp_inner_zn->b4 != null()))){
							HX_STACK_LINE(579)
							this->zpp_inner_zn->b4->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(579)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(579)
						this->zpp_inner_zn->b4->wake();
					}
				}
				HX_STACK_LINE(579)
				this->zpp_inner_zn->b4 = inbody4;
				HX_STACK_LINE(579)
				if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody4 != null())))) && bool((this->zpp_inner_zn->b1 != inbody4)))) && bool((this->zpp_inner_zn->b2 != inbody4)))) && bool((this->zpp_inner_zn->b3 != inbody4))))){
					HX_STACK_LINE(579)
					if (((inbody4 != null()))){
						HX_STACK_LINE(579)
						inbody4->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(579)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(579)
					this->zpp_inner->wake();
					HX_STACK_LINE(579)
					if (((inbody4 != null()))){
						HX_STACK_LINE(579)
						inbody4->wake();
					}
				}
			}
		}
		HX_STACK_LINE(579)
		if (((this->zpp_inner_zn->b4 == null()))){
			HX_STACK_LINE(579)
			Dynamic();
		}
		else{
			HX_STACK_LINE(579)
			this->zpp_inner_zn->b4->outer;
		}
	}
	HX_STACK_LINE(580)
	{
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
				HX_STACK_LINE(580)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(580)
			if (((anchor1 == null()))){
				HX_STACK_LINE(580)
				hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor1")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(580)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::constraint::PulleyJoint_obj *__this){
						HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",580);
						{
							HX_STACK_LINE(580)
							if (((__this->zpp_inner_zn->wrap_a1 == null()))){
								HX_STACK_LINE(580)
								__this->zpp_inner_zn->setup_a1();
							}
							HX_STACK_LINE(580)
							return __this->zpp_inner_zn->wrap_a1;
						}
						return null();
					}
				};
				HX_STACK_LINE(580)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(580)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(580)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(580)
				if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
					HX_STACK_LINE(580)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(580)
					if ((_this1->_immutable)){
						HX_STACK_LINE(580)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(580)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(580)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(580)
				if (((anchor1 == null()))){
					HX_STACK_LINE(580)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor1,::nape::geom::Vec2 &_this){
						HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",580);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &anchor1){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",580);
									{
										HX_STACK_LINE(580)
										if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
											HX_STACK_LINE(580)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(580)
										{
											HX_STACK_LINE(580)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(580)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(580)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(580)
										return anchor1->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &anchor1){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",580);
									{
										HX_STACK_LINE(580)
										if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
											HX_STACK_LINE(580)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(580)
										{
											HX_STACK_LINE(580)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(580)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(580)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(580)
										return anchor1->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(580)
							Float x = _Function_5_1::Block(anchor1);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(anchor1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(580)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(580)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(580)
							{
								HX_STACK_LINE(580)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(580)
								if ((_this1->_immutable)){
									HX_STACK_LINE(580)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(580)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(580)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(580)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(580)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",580);
									{
										HX_STACK_LINE(580)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(580)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(580)
										{
											HX_STACK_LINE(580)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(580)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(580)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(580)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",580);
									{
										HX_STACK_LINE(580)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(580)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(580)
										{
											HX_STACK_LINE(580)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(580)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(580)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(580)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(580)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(580)
								{
									HX_STACK_LINE(580)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(580)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(580)
									{
									}
									HX_STACK_LINE(580)
									{
									}
								}
								HX_STACK_LINE(580)
								{
									HX_STACK_LINE(580)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(580)
									if (((_this1->_invalidate_dyn() != null()))){
										HX_STACK_LINE(580)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(580)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(580)
				::nape::geom::Vec2 ret = _Function_4_2::Block(anchor1,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(580)
				if ((anchor1->zpp_inner->weak)){
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
							HX_STACK_LINE(580)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(580)
							if ((_this1->_immutable)){
								HX_STACK_LINE(580)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(580)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(580)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(580)
						if ((anchor1->zpp_inner->_inuse)){
							HX_STACK_LINE(580)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(580)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(580)
						anchor1->zpp_inner->outer = null();
						HX_STACK_LINE(580)
						anchor1->zpp_inner = null();
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(580)
							{
							}
							HX_STACK_LINE(580)
							o->zpp_pool = null();
							HX_STACK_LINE(580)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(580)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(580)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(580)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(580)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(580)
							{
							}
							HX_STACK_LINE(580)
							{
								HX_STACK_LINE(580)
								if (((o->outer != null()))){
									HX_STACK_LINE(580)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(580)
									o->outer = null();
								}
								HX_STACK_LINE(580)
								o->_isimmutable = null();
								HX_STACK_LINE(580)
								o->_validate = null();
								HX_STACK_LINE(580)
								o->_invalidate = null();
							}
							HX_STACK_LINE(580)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(580)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(580)
					true;
				}
				else{
					HX_STACK_LINE(580)
					false;
				}
				HX_STACK_LINE(580)
				ret;
			}
		}
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(580)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(580)
			this->zpp_inner_zn->wrap_a1;
		}
	}
	HX_STACK_LINE(581)
	{
		HX_STACK_LINE(581)
		{
			HX_STACK_LINE(581)
			if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
				HX_STACK_LINE(581)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(581)
			if (((anchor2 == null()))){
				HX_STACK_LINE(581)
				hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor2")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(581)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::constraint::PulleyJoint_obj *__this){
						HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",581);
						{
							HX_STACK_LINE(581)
							if (((__this->zpp_inner_zn->wrap_a2 == null()))){
								HX_STACK_LINE(581)
								__this->zpp_inner_zn->setup_a2();
							}
							HX_STACK_LINE(581)
							return __this->zpp_inner_zn->wrap_a2;
						}
						return null();
					}
				};
				HX_STACK_LINE(581)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(581)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(581)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(581)
				if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
					HX_STACK_LINE(581)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(581)
					if ((_this1->_immutable)){
						HX_STACK_LINE(581)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(581)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(581)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(581)
				if (((anchor2 == null()))){
					HX_STACK_LINE(581)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor2,::nape::geom::Vec2 &_this){
						HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",581);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &anchor2){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",581);
									{
										HX_STACK_LINE(581)
										if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
											HX_STACK_LINE(581)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(581)
										{
											HX_STACK_LINE(581)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(581)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(581)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(581)
										return anchor2->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &anchor2){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",581);
									{
										HX_STACK_LINE(581)
										if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
											HX_STACK_LINE(581)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(581)
										{
											HX_STACK_LINE(581)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(581)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(581)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(581)
										return anchor2->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(581)
							Float x = _Function_5_1::Block(anchor2);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(anchor2);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(581)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(581)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(581)
							{
								HX_STACK_LINE(581)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(581)
								if ((_this1->_immutable)){
									HX_STACK_LINE(581)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(581)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(581)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(581)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(581)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",581);
									{
										HX_STACK_LINE(581)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(581)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(581)
										{
											HX_STACK_LINE(581)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(581)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(581)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(581)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",581);
									{
										HX_STACK_LINE(581)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(581)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(581)
										{
											HX_STACK_LINE(581)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(581)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(581)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(581)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(581)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(581)
								{
									HX_STACK_LINE(581)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(581)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(581)
									{
									}
									HX_STACK_LINE(581)
									{
									}
								}
								HX_STACK_LINE(581)
								{
									HX_STACK_LINE(581)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(581)
									if (((_this1->_invalidate_dyn() != null()))){
										HX_STACK_LINE(581)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(581)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(581)
				::nape::geom::Vec2 ret = _Function_4_2::Block(anchor2,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(581)
				if ((anchor2->zpp_inner->weak)){
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
							HX_STACK_LINE(581)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(581)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(581)
							if ((_this1->_immutable)){
								HX_STACK_LINE(581)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(581)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(581)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(581)
						if ((anchor2->zpp_inner->_inuse)){
							HX_STACK_LINE(581)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(581)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(581)
						anchor2->zpp_inner->outer = null();
						HX_STACK_LINE(581)
						anchor2->zpp_inner = null();
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(581)
							::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(581)
							{
							}
							HX_STACK_LINE(581)
							o->zpp_pool = null();
							HX_STACK_LINE(581)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(581)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(581)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(581)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(581)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(581)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(581)
							{
							}
							HX_STACK_LINE(581)
							{
								HX_STACK_LINE(581)
								if (((o->outer != null()))){
									HX_STACK_LINE(581)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(581)
									o->outer = null();
								}
								HX_STACK_LINE(581)
								o->_isimmutable = null();
								HX_STACK_LINE(581)
								o->_validate = null();
								HX_STACK_LINE(581)
								o->_invalidate = null();
							}
							HX_STACK_LINE(581)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(581)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(581)
					true;
				}
				else{
					HX_STACK_LINE(581)
					false;
				}
				HX_STACK_LINE(581)
				ret;
			}
		}
		HX_STACK_LINE(581)
		{
			HX_STACK_LINE(581)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(581)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(581)
			this->zpp_inner_zn->wrap_a2;
		}
	}
	HX_STACK_LINE(582)
	{
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			if (((bool((anchor3 != null())) && bool(anchor3->zpp_disp)))){
				HX_STACK_LINE(582)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(582)
			if (((anchor3 == null()))){
				HX_STACK_LINE(582)
				hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor3")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(582)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::constraint::PulleyJoint_obj *__this){
						HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",582);
						{
							HX_STACK_LINE(582)
							if (((__this->zpp_inner_zn->wrap_a3 == null()))){
								HX_STACK_LINE(582)
								__this->zpp_inner_zn->setup_a3();
							}
							HX_STACK_LINE(582)
							return __this->zpp_inner_zn->wrap_a3;
						}
						return null();
					}
				};
				HX_STACK_LINE(582)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(582)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(582)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(582)
				if (((bool((anchor3 != null())) && bool(anchor3->zpp_disp)))){
					HX_STACK_LINE(582)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(582)
					if ((_this1->_immutable)){
						HX_STACK_LINE(582)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(582)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(582)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(582)
				if (((anchor3 == null()))){
					HX_STACK_LINE(582)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor3,::nape::geom::Vec2 &_this){
						HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",582);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &anchor3){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",582);
									{
										HX_STACK_LINE(582)
										if (((bool((anchor3 != null())) && bool(anchor3->zpp_disp)))){
											HX_STACK_LINE(582)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(582)
										{
											HX_STACK_LINE(582)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(582)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(582)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(582)
										return anchor3->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &anchor3){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",582);
									{
										HX_STACK_LINE(582)
										if (((bool((anchor3 != null())) && bool(anchor3->zpp_disp)))){
											HX_STACK_LINE(582)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(582)
										{
											HX_STACK_LINE(582)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(582)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(582)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(582)
										return anchor3->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(582)
							Float x = _Function_5_1::Block(anchor3);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(anchor3);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(582)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(582)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(582)
							{
								HX_STACK_LINE(582)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(582)
								if ((_this1->_immutable)){
									HX_STACK_LINE(582)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(582)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(582)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(582)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(582)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",582);
									{
										HX_STACK_LINE(582)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(582)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(582)
										{
											HX_STACK_LINE(582)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(582)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(582)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(582)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",582);
									{
										HX_STACK_LINE(582)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(582)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(582)
										{
											HX_STACK_LINE(582)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(582)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(582)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(582)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(582)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(582)
								{
									HX_STACK_LINE(582)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(582)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(582)
									{
									}
									HX_STACK_LINE(582)
									{
									}
								}
								HX_STACK_LINE(582)
								{
									HX_STACK_LINE(582)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(582)
									if (((_this1->_invalidate_dyn() != null()))){
										HX_STACK_LINE(582)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(582)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(582)
				::nape::geom::Vec2 ret = _Function_4_2::Block(anchor3,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(582)
				if ((anchor3->zpp_inner->weak)){
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						if (((bool((anchor3 != null())) && bool(anchor3->zpp_disp)))){
							HX_STACK_LINE(582)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(582)
						{
							HX_STACK_LINE(582)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(582)
							if ((_this1->_immutable)){
								HX_STACK_LINE(582)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(582)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(582)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(582)
						if ((anchor3->zpp_inner->_inuse)){
							HX_STACK_LINE(582)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(582)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor3->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(582)
						anchor3->zpp_inner->outer = null();
						HX_STACK_LINE(582)
						anchor3->zpp_inner = null();
						HX_STACK_LINE(582)
						{
							HX_STACK_LINE(582)
							::nape::geom::Vec2 o = anchor3;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(582)
							{
							}
							HX_STACK_LINE(582)
							o->zpp_pool = null();
							HX_STACK_LINE(582)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(582)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(582)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(582)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(582)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(582)
						{
							HX_STACK_LINE(582)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(582)
							{
							}
							HX_STACK_LINE(582)
							{
								HX_STACK_LINE(582)
								if (((o->outer != null()))){
									HX_STACK_LINE(582)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(582)
									o->outer = null();
								}
								HX_STACK_LINE(582)
								o->_isimmutable = null();
								HX_STACK_LINE(582)
								o->_validate = null();
								HX_STACK_LINE(582)
								o->_invalidate = null();
							}
							HX_STACK_LINE(582)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(582)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(582)
					true;
				}
				else{
					HX_STACK_LINE(582)
					false;
				}
				HX_STACK_LINE(582)
				ret;
			}
		}
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			if (((this->zpp_inner_zn->wrap_a3 == null()))){
				HX_STACK_LINE(582)
				this->zpp_inner_zn->setup_a3();
			}
			HX_STACK_LINE(582)
			this->zpp_inner_zn->wrap_a3;
		}
	}
	HX_STACK_LINE(583)
	{
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			if (((bool((anchor4 != null())) && bool(anchor4->zpp_disp)))){
				HX_STACK_LINE(583)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(583)
			if (((anchor4 == null()))){
				HX_STACK_LINE(583)
				hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor4")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(583)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::constraint::PulleyJoint_obj *__this){
						HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",583);
						{
							HX_STACK_LINE(583)
							if (((__this->zpp_inner_zn->wrap_a4 == null()))){
								HX_STACK_LINE(583)
								__this->zpp_inner_zn->setup_a4();
							}
							HX_STACK_LINE(583)
							return __this->zpp_inner_zn->wrap_a4;
						}
						return null();
					}
				};
				HX_STACK_LINE(583)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(583)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(583)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(583)
				if (((bool((anchor4 != null())) && bool(anchor4->zpp_disp)))){
					HX_STACK_LINE(583)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(583)
				{
					HX_STACK_LINE(583)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(583)
					if ((_this1->_immutable)){
						HX_STACK_LINE(583)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(583)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(583)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(583)
				if (((anchor4 == null()))){
					HX_STACK_LINE(583)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor4,::nape::geom::Vec2 &_this){
						HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",583);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &anchor4){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",583);
									{
										HX_STACK_LINE(583)
										if (((bool((anchor4 != null())) && bool(anchor4->zpp_disp)))){
											HX_STACK_LINE(583)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(583)
										{
											HX_STACK_LINE(583)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(583)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(583)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(583)
										return anchor4->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &anchor4){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",583);
									{
										HX_STACK_LINE(583)
										if (((bool((anchor4 != null())) && bool(anchor4->zpp_disp)))){
											HX_STACK_LINE(583)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(583)
										{
											HX_STACK_LINE(583)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(583)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(583)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(583)
										return anchor4->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(583)
							Float x = _Function_5_1::Block(anchor4);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(anchor4);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(583)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(583)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(583)
							{
								HX_STACK_LINE(583)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(583)
								if ((_this1->_immutable)){
									HX_STACK_LINE(583)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(583)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(583)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(583)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(583)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",583);
									{
										HX_STACK_LINE(583)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(583)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(583)
										{
											HX_STACK_LINE(583)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(583)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(583)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(583)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",583);
									{
										HX_STACK_LINE(583)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(583)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(583)
										{
											HX_STACK_LINE(583)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(583)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(583)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(583)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(583)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(583)
								{
									HX_STACK_LINE(583)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(583)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(583)
									{
									}
									HX_STACK_LINE(583)
									{
									}
								}
								HX_STACK_LINE(583)
								{
									HX_STACK_LINE(583)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(583)
									if (((_this1->_invalidate_dyn() != null()))){
										HX_STACK_LINE(583)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(583)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(583)
				::nape::geom::Vec2 ret = _Function_4_2::Block(anchor4,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(583)
				if ((anchor4->zpp_inner->weak)){
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						if (((bool((anchor4 != null())) && bool(anchor4->zpp_disp)))){
							HX_STACK_LINE(583)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(583)
							if ((_this1->_immutable)){
								HX_STACK_LINE(583)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(583)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(583)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(583)
						if ((anchor4->zpp_inner->_inuse)){
							HX_STACK_LINE(583)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(583)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor4->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(583)
						anchor4->zpp_inner->outer = null();
						HX_STACK_LINE(583)
						anchor4->zpp_inner = null();
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							::nape::geom::Vec2 o = anchor4;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(583)
							{
							}
							HX_STACK_LINE(583)
							o->zpp_pool = null();
							HX_STACK_LINE(583)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(583)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(583)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(583)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(583)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(583)
							{
							}
							HX_STACK_LINE(583)
							{
								HX_STACK_LINE(583)
								if (((o->outer != null()))){
									HX_STACK_LINE(583)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(583)
									o->outer = null();
								}
								HX_STACK_LINE(583)
								o->_isimmutable = null();
								HX_STACK_LINE(583)
								o->_validate = null();
								HX_STACK_LINE(583)
								o->_invalidate = null();
							}
							HX_STACK_LINE(583)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(583)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(583)
					true;
				}
				else{
					HX_STACK_LINE(583)
					false;
				}
				HX_STACK_LINE(583)
				ret;
			}
		}
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			if (((this->zpp_inner_zn->wrap_a4 == null()))){
				HX_STACK_LINE(583)
				this->zpp_inner_zn->setup_a4();
			}
			HX_STACK_LINE(583)
			this->zpp_inner_zn->wrap_a4;
		}
	}
	HX_STACK_LINE(584)
	{
		HX_STACK_LINE(584)
		{
			HX_STACK_LINE(584)
			this->zpp_inner->immutable_midstep(HX_CSTRING("PulleyJoint::ratio"));
			HX_STACK_LINE(584)
			if (((ratio != ratio))){
				HX_STACK_LINE(584)
				hx::Throw (HX_CSTRING("Error: PulleyJoint::ratio cannot be NaN"));
			}
			HX_STACK_LINE(584)
			if (((this->zpp_inner_zn->ratio != ratio))){
				HX_STACK_LINE(584)
				this->zpp_inner_zn->ratio = ratio;
				HX_STACK_LINE(584)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(584)
		this->zpp_inner_zn->ratio;
	}
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(585)
		{
			HX_STACK_LINE(585)
			this->zpp_inner->immutable_midstep(HX_CSTRING("PulleyJoint::jointMin"));
			HX_STACK_LINE(585)
			if (((jointMin != jointMin))){
				HX_STACK_LINE(585)
				hx::Throw (HX_CSTRING("Error: PulleyJoint::jointMin cannot be NaN"));
			}
			HX_STACK_LINE(585)
			if (((jointMin < (int)0))){
				HX_STACK_LINE(585)
				hx::Throw (HX_CSTRING("Error: PulleyJoint::jointMin must be >= 0"));
			}
			HX_STACK_LINE(585)
			if (((this->zpp_inner_zn->jointMin != jointMin))){
				HX_STACK_LINE(585)
				this->zpp_inner_zn->jointMin = jointMin;
				HX_STACK_LINE(585)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(585)
		this->zpp_inner_zn->jointMin;
	}
	HX_STACK_LINE(586)
	{
		HX_STACK_LINE(586)
		{
			HX_STACK_LINE(586)
			this->zpp_inner->immutable_midstep(HX_CSTRING("PulleyJoint::jointMax"));
			HX_STACK_LINE(586)
			if (((jointMax != jointMax))){
				HX_STACK_LINE(586)
				hx::Throw (HX_CSTRING("Error: PulleyJoint::jointMax cannot be NaN"));
			}
			HX_STACK_LINE(586)
			if (((jointMax < (int)0))){
				HX_STACK_LINE(586)
				hx::Throw (HX_CSTRING("Error: PulleyJoint::jointMax must be >= 0"));
			}
			HX_STACK_LINE(586)
			if (((this->zpp_inner_zn->jointMax != jointMax))){
				HX_STACK_LINE(586)
				this->zpp_inner_zn->jointMax = jointMax;
				HX_STACK_LINE(586)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(586)
		this->zpp_inner_zn->jointMax;
	}
}
;
	return null();
}

PulleyJoint_obj::~PulleyJoint_obj() { }

Dynamic PulleyJoint_obj::__CreateEmpty() { return  new PulleyJoint_obj; }
hx::ObjectPtr< PulleyJoint_obj > PulleyJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::phys::Body body3,::nape::phys::Body body4,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,::nape::geom::Vec2 anchor3,::nape::geom::Vec2 anchor4,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio)
{  hx::ObjectPtr< PulleyJoint_obj > result = new PulleyJoint_obj();
	result->__construct(body1,body2,body3,body4,anchor1,anchor2,anchor3,anchor4,jointMin,jointMax,__o_ratio);
	return result;}

Dynamic PulleyJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PulleyJoint_obj > result = new PulleyJoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return result;}

Void PulleyJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_PUSH("PulleyJoint::visitBodies","nape/constraint/PulleyJoint.hx",620);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(621)
		if (((((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )) != null()))){
			HX_STACK_LINE(621)
			lambda((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(624)
		if (((bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) ))))))){
			HX_STACK_LINE(624)
			lambda((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(627)
		if (((bool((bool((((  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )))))) && bool((((  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) )) != ((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) ))))))){
			HX_STACK_LINE(627)
			lambda((  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(630)
		if (((bool((bool((bool((((  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )))))) && bool((((  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) )) != ((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )))))) && bool((((  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) )) != ((  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) ))))))){
			HX_STACK_LINE(630)
			lambda((  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) )).Cast< Void >();
		}
	}
return null();
}


::nape::geom::Vec3 PulleyJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("PulleyJoint::bodyImpulse","nape/constraint/PulleyJoint.hx",601);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(603)
	if (((body == null()))){
		HX_STACK_LINE(603)
		hx::Throw (HX_CSTRING("Error: Cannot evaluate impulse on null body"));
	}
	HX_STACK_LINE(606)
	if (((bool((bool((bool((body != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )))) && bool((body != ((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )))))) && bool((body != ((  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) )))))) && bool((body != ((  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) ))))))){
		HX_STACK_LINE(606)
		hx::Throw (HX_CSTRING("Error: Body is not linked to this constraint"));
	}
	HX_STACK_LINE(610)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(610)
		return ::nape::geom::Vec3_obj::get(null(),null(),null());
	}
	else{
		HX_STACK_LINE(613)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(610)
	return null();
}


::nape::geom::MatMN PulleyJoint_obj::impulse( ){
	HX_STACK_PUSH("PulleyJoint::impulse","nape/constraint/PulleyJoint.hx",593);
	HX_STACK_THIS(this);
	HX_STACK_LINE(594)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)1,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(595)
	{
		HX_STACK_LINE(595)
		if (((bool(((int)0 >= ret->zpp_inner->m)) || bool(((int)0 >= ret->zpp_inner->n))))){
			HX_STACK_LINE(595)
			hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
		}
		HX_STACK_LINE(595)
		ret->zpp_inner->x[((int)0 * ret->zpp_inner->n)] = this->zpp_inner_zn->jAcc;
	}
	HX_STACK_LINE(596)
	return ret;
}


bool PulleyJoint_obj::isSlack( ){
	HX_STACK_PUSH("PulleyJoint::isSlack","nape/constraint/PulleyJoint.hx",536);
	HX_STACK_THIS(this);
	HX_STACK_LINE(538)
	if (((bool((bool((bool((((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )) == null())) || bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) == null())))) || bool((((  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) )) == null())))) || bool((((  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) )) == null()))))){
		HX_STACK_LINE(538)
		hx::Throw (HX_CSTRING("Error: Cannot compute slack for PulleyJoint if either body is null."));
	}
	HX_STACK_LINE(542)
	return this->zpp_inner_zn->slack;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,isSlack,return )

Float PulleyJoint_obj::set_ratio( Float ratio){
	HX_STACK_PUSH("PulleyJoint::set_ratio","nape/constraint/PulleyJoint.hx",510);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ratio,"ratio");
	HX_STACK_LINE(511)
	{
		HX_STACK_LINE(512)
		this->zpp_inner->immutable_midstep(HX_CSTRING("PulleyJoint::ratio"));
		HX_STACK_LINE(514)
		if (((ratio != ratio))){
			HX_STACK_LINE(514)
			hx::Throw (HX_CSTRING("Error: PulleyJoint::ratio cannot be NaN"));
		}
		HX_STACK_LINE(518)
		if (((this->zpp_inner_zn->ratio != ratio))){
			HX_STACK_LINE(519)
			this->zpp_inner_zn->ratio = ratio;
			HX_STACK_LINE(520)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(523)
	return this->zpp_inner_zn->ratio;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_ratio,return )

Float PulleyJoint_obj::get_ratio( ){
	HX_STACK_PUSH("PulleyJoint::get_ratio","nape/constraint/PulleyJoint.hx",507);
	HX_STACK_THIS(this);
	HX_STACK_LINE(507)
	return this->zpp_inner_zn->ratio;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_ratio,return )

Float PulleyJoint_obj::set_jointMax( Float jointMax){
	HX_STACK_PUSH("PulleyJoint::set_jointMax","nape/constraint/PulleyJoint.hx",482);
	HX_STACK_THIS(this);
	HX_STACK_ARG(jointMax,"jointMax");
	HX_STACK_LINE(483)
	{
		HX_STACK_LINE(484)
		this->zpp_inner->immutable_midstep(HX_CSTRING("PulleyJoint::jointMax"));
		HX_STACK_LINE(486)
		if (((jointMax != jointMax))){
			HX_STACK_LINE(486)
			hx::Throw (HX_CSTRING("Error: PulleyJoint::jointMax cannot be NaN"));
		}
		HX_STACK_LINE(489)
		if (((jointMax < (int)0))){
			HX_STACK_LINE(489)
			hx::Throw (HX_CSTRING("Error: PulleyJoint::jointMax must be >= 0"));
		}
		HX_STACK_LINE(493)
		if (((this->zpp_inner_zn->jointMax != jointMax))){
			HX_STACK_LINE(494)
			this->zpp_inner_zn->jointMax = jointMax;
			HX_STACK_LINE(495)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(498)
	return this->zpp_inner_zn->jointMax;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_jointMax,return )

Float PulleyJoint_obj::get_jointMax( ){
	HX_STACK_PUSH("PulleyJoint::get_jointMax","nape/constraint/PulleyJoint.hx",479);
	HX_STACK_THIS(this);
	HX_STACK_LINE(479)
	return this->zpp_inner_zn->jointMax;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_jointMax,return )

Float PulleyJoint_obj::set_jointMin( Float jointMin){
	HX_STACK_PUSH("PulleyJoint::set_jointMin","nape/constraint/PulleyJoint.hx",454);
	HX_STACK_THIS(this);
	HX_STACK_ARG(jointMin,"jointMin");
	HX_STACK_LINE(455)
	{
		HX_STACK_LINE(456)
		this->zpp_inner->immutable_midstep(HX_CSTRING("PulleyJoint::jointMin"));
		HX_STACK_LINE(458)
		if (((jointMin != jointMin))){
			HX_STACK_LINE(458)
			hx::Throw (HX_CSTRING("Error: PulleyJoint::jointMin cannot be NaN"));
		}
		HX_STACK_LINE(461)
		if (((jointMin < (int)0))){
			HX_STACK_LINE(461)
			hx::Throw (HX_CSTRING("Error: PulleyJoint::jointMin must be >= 0"));
		}
		HX_STACK_LINE(465)
		if (((this->zpp_inner_zn->jointMin != jointMin))){
			HX_STACK_LINE(466)
			this->zpp_inner_zn->jointMin = jointMin;
			HX_STACK_LINE(467)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(470)
	return this->zpp_inner_zn->jointMin;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_jointMin,return )

Float PulleyJoint_obj::get_jointMin( ){
	HX_STACK_PUSH("PulleyJoint::get_jointMin","nape/constraint/PulleyJoint.hx",451);
	HX_STACK_THIS(this);
	HX_STACK_LINE(451)
	return this->zpp_inner_zn->jointMin;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_jointMin,return )

::nape::geom::Vec2 PulleyJoint_obj::set_anchor4( ::nape::geom::Vec2 anchor4){
	HX_STACK_PUSH("PulleyJoint::set_anchor4","nape/constraint/PulleyJoint.hx",430);
	HX_STACK_THIS(this);
	HX_STACK_ARG(anchor4,"anchor4");
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(432)
		if (((bool((anchor4 != null())) && bool(anchor4->zpp_disp)))){
			HX_STACK_LINE(434)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(438)
		if (((anchor4 == null()))){
			HX_STACK_LINE(438)
			hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor4")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(440)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::constraint::PulleyJoint_obj *__this){
					HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",440);
					{
						HX_STACK_LINE(440)
						if (((__this->zpp_inner_zn->wrap_a4 == null()))){
							HX_STACK_LINE(440)
							__this->zpp_inner_zn->setup_a4();
						}
						HX_STACK_LINE(440)
						return __this->zpp_inner_zn->wrap_a4;
					}
					return null();
				}
			};
			HX_STACK_LINE(440)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(440)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(440)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(440)
			if (((bool((anchor4 != null())) && bool(anchor4->zpp_disp)))){
				HX_STACK_LINE(440)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(440)
				if ((_this1->_immutable)){
					HX_STACK_LINE(440)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(440)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(440)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(440)
			if (((anchor4 == null()))){
				HX_STACK_LINE(440)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor4,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",440);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &anchor4){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",440);
								{
									HX_STACK_LINE(440)
									if (((bool((anchor4 != null())) && bool(anchor4->zpp_disp)))){
										HX_STACK_LINE(440)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(440)
									{
										HX_STACK_LINE(440)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(440)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(440)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(440)
									return anchor4->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &anchor4){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",440);
								{
									HX_STACK_LINE(440)
									if (((bool((anchor4 != null())) && bool(anchor4->zpp_disp)))){
										HX_STACK_LINE(440)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(440)
									{
										HX_STACK_LINE(440)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(440)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(440)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(440)
									return anchor4->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(440)
						Float x = _Function_4_1::Block(anchor4);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(anchor4);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(440)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(440)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(440)
						{
							HX_STACK_LINE(440)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(440)
							if ((_this1->_immutable)){
								HX_STACK_LINE(440)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(440)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(440)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(440)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(440)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",440);
								{
									HX_STACK_LINE(440)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(440)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(440)
									{
										HX_STACK_LINE(440)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(440)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(440)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(440)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",440);
								{
									HX_STACK_LINE(440)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(440)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(440)
									{
										HX_STACK_LINE(440)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(440)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(440)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(440)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(440)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(440)
							{
								HX_STACK_LINE(440)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(440)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(440)
								{
								}
								HX_STACK_LINE(440)
								{
								}
							}
							HX_STACK_LINE(440)
							{
								HX_STACK_LINE(440)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(440)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(440)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(440)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(440)
			::nape::geom::Vec2 ret = _Function_3_2::Block(anchor4,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(440)
			if ((anchor4->zpp_inner->weak)){
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					if (((bool((anchor4 != null())) && bool(anchor4->zpp_disp)))){
						HX_STACK_LINE(440)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(440)
						if ((_this1->_immutable)){
							HX_STACK_LINE(440)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(440)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(440)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(440)
					if ((anchor4->zpp_inner->_inuse)){
						HX_STACK_LINE(440)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(440)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor4->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(440)
					anchor4->zpp_inner->outer = null();
					HX_STACK_LINE(440)
					anchor4->zpp_inner = null();
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						::nape::geom::Vec2 o = anchor4;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(440)
						{
						}
						HX_STACK_LINE(440)
						o->zpp_pool = null();
						HX_STACK_LINE(440)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(440)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(440)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(440)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(440)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(440)
						{
						}
						HX_STACK_LINE(440)
						{
							HX_STACK_LINE(440)
							if (((o->outer != null()))){
								HX_STACK_LINE(440)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(440)
								o->outer = null();
							}
							HX_STACK_LINE(440)
							o->_isimmutable = null();
							HX_STACK_LINE(440)
							o->_validate = null();
							HX_STACK_LINE(440)
							o->_invalidate = null();
						}
						HX_STACK_LINE(440)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(440)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(440)
				true;
			}
			else{
				HX_STACK_LINE(440)
				false;
			}
			HX_STACK_LINE(440)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::constraint::PulleyJoint_obj *__this){
			HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",442);
			{
				HX_STACK_LINE(442)
				if (((__this->zpp_inner_zn->wrap_a4 == null()))){
					HX_STACK_LINE(442)
					__this->zpp_inner_zn->setup_a4();
				}
				HX_STACK_LINE(442)
				return __this->zpp_inner_zn->wrap_a4;
			}
			return null();
		}
	};
	HX_STACK_LINE(442)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_anchor4,return )

::nape::geom::Vec2 PulleyJoint_obj::get_anchor4( ){
	HX_STACK_PUSH("PulleyJoint::get_anchor4","nape/constraint/PulleyJoint.hx",426);
	HX_STACK_THIS(this);
	HX_STACK_LINE(427)
	if (((this->zpp_inner_zn->wrap_a4 == null()))){
		HX_STACK_LINE(427)
		this->zpp_inner_zn->setup_a4();
	}
	HX_STACK_LINE(428)
	return this->zpp_inner_zn->wrap_a4;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_anchor4,return )

::nape::geom::Vec2 PulleyJoint_obj::set_anchor3( ::nape::geom::Vec2 anchor3){
	HX_STACK_PUSH("PulleyJoint::set_anchor3","nape/constraint/PulleyJoint.hx",405);
	HX_STACK_THIS(this);
	HX_STACK_ARG(anchor3,"anchor3");
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(407)
		if (((bool((anchor3 != null())) && bool(anchor3->zpp_disp)))){
			HX_STACK_LINE(409)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(413)
		if (((anchor3 == null()))){
			HX_STACK_LINE(413)
			hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor3")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(415)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::constraint::PulleyJoint_obj *__this){
					HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",415);
					{
						HX_STACK_LINE(415)
						if (((__this->zpp_inner_zn->wrap_a3 == null()))){
							HX_STACK_LINE(415)
							__this->zpp_inner_zn->setup_a3();
						}
						HX_STACK_LINE(415)
						return __this->zpp_inner_zn->wrap_a3;
					}
					return null();
				}
			};
			HX_STACK_LINE(415)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(415)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(415)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(415)
			if (((bool((anchor3 != null())) && bool(anchor3->zpp_disp)))){
				HX_STACK_LINE(415)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(415)
				if ((_this1->_immutable)){
					HX_STACK_LINE(415)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(415)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(415)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(415)
			if (((anchor3 == null()))){
				HX_STACK_LINE(415)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor3,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",415);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &anchor3){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",415);
								{
									HX_STACK_LINE(415)
									if (((bool((anchor3 != null())) && bool(anchor3->zpp_disp)))){
										HX_STACK_LINE(415)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(415)
									{
										HX_STACK_LINE(415)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(415)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(415)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(415)
									return anchor3->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &anchor3){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",415);
								{
									HX_STACK_LINE(415)
									if (((bool((anchor3 != null())) && bool(anchor3->zpp_disp)))){
										HX_STACK_LINE(415)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(415)
									{
										HX_STACK_LINE(415)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(415)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(415)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(415)
									return anchor3->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(415)
						Float x = _Function_4_1::Block(anchor3);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(anchor3);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(415)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(415)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(415)
						{
							HX_STACK_LINE(415)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(415)
							if ((_this1->_immutable)){
								HX_STACK_LINE(415)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(415)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(415)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(415)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(415)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",415);
								{
									HX_STACK_LINE(415)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(415)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(415)
									{
										HX_STACK_LINE(415)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(415)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(415)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(415)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",415);
								{
									HX_STACK_LINE(415)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(415)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(415)
									{
										HX_STACK_LINE(415)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(415)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(415)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(415)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(415)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(415)
							{
								HX_STACK_LINE(415)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(415)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(415)
								{
								}
								HX_STACK_LINE(415)
								{
								}
							}
							HX_STACK_LINE(415)
							{
								HX_STACK_LINE(415)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(415)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(415)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(415)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(415)
			::nape::geom::Vec2 ret = _Function_3_2::Block(anchor3,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(415)
			if ((anchor3->zpp_inner->weak)){
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					if (((bool((anchor3 != null())) && bool(anchor3->zpp_disp)))){
						HX_STACK_LINE(415)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(415)
						if ((_this1->_immutable)){
							HX_STACK_LINE(415)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(415)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(415)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(415)
					if ((anchor3->zpp_inner->_inuse)){
						HX_STACK_LINE(415)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(415)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor3->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(415)
					anchor3->zpp_inner->outer = null();
					HX_STACK_LINE(415)
					anchor3->zpp_inner = null();
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						::nape::geom::Vec2 o = anchor3;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(415)
						{
						}
						HX_STACK_LINE(415)
						o->zpp_pool = null();
						HX_STACK_LINE(415)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(415)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(415)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(415)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(415)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(415)
						{
						}
						HX_STACK_LINE(415)
						{
							HX_STACK_LINE(415)
							if (((o->outer != null()))){
								HX_STACK_LINE(415)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(415)
								o->outer = null();
							}
							HX_STACK_LINE(415)
							o->_isimmutable = null();
							HX_STACK_LINE(415)
							o->_validate = null();
							HX_STACK_LINE(415)
							o->_invalidate = null();
						}
						HX_STACK_LINE(415)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(415)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(415)
				true;
			}
			else{
				HX_STACK_LINE(415)
				false;
			}
			HX_STACK_LINE(415)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::constraint::PulleyJoint_obj *__this){
			HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",417);
			{
				HX_STACK_LINE(417)
				if (((__this->zpp_inner_zn->wrap_a3 == null()))){
					HX_STACK_LINE(417)
					__this->zpp_inner_zn->setup_a3();
				}
				HX_STACK_LINE(417)
				return __this->zpp_inner_zn->wrap_a3;
			}
			return null();
		}
	};
	HX_STACK_LINE(417)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_anchor3,return )

::nape::geom::Vec2 PulleyJoint_obj::get_anchor3( ){
	HX_STACK_PUSH("PulleyJoint::get_anchor3","nape/constraint/PulleyJoint.hx",401);
	HX_STACK_THIS(this);
	HX_STACK_LINE(402)
	if (((this->zpp_inner_zn->wrap_a3 == null()))){
		HX_STACK_LINE(402)
		this->zpp_inner_zn->setup_a3();
	}
	HX_STACK_LINE(403)
	return this->zpp_inner_zn->wrap_a3;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_anchor3,return )

::nape::geom::Vec2 PulleyJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_PUSH("PulleyJoint::set_anchor2","nape/constraint/PulleyJoint.hx",380);
	HX_STACK_THIS(this);
	HX_STACK_ARG(anchor2,"anchor2");
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(382)
		if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
			HX_STACK_LINE(384)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(388)
		if (((anchor2 == null()))){
			HX_STACK_LINE(388)
			hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor2")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(390)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::constraint::PulleyJoint_obj *__this){
					HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",390);
					{
						HX_STACK_LINE(390)
						if (((__this->zpp_inner_zn->wrap_a2 == null()))){
							HX_STACK_LINE(390)
							__this->zpp_inner_zn->setup_a2();
						}
						HX_STACK_LINE(390)
						return __this->zpp_inner_zn->wrap_a2;
					}
					return null();
				}
			};
			HX_STACK_LINE(390)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(390)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(390)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(390)
			if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
				HX_STACK_LINE(390)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(390)
				if ((_this1->_immutable)){
					HX_STACK_LINE(390)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(390)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(390)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(390)
			if (((anchor2 == null()))){
				HX_STACK_LINE(390)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor2,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",390);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &anchor2){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",390);
								{
									HX_STACK_LINE(390)
									if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
										HX_STACK_LINE(390)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(390)
									{
										HX_STACK_LINE(390)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(390)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(390)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(390)
									return anchor2->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &anchor2){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",390);
								{
									HX_STACK_LINE(390)
									if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
										HX_STACK_LINE(390)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(390)
									{
										HX_STACK_LINE(390)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(390)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(390)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(390)
									return anchor2->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(390)
						Float x = _Function_4_1::Block(anchor2);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(anchor2);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(390)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(390)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(390)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(390)
							if ((_this1->_immutable)){
								HX_STACK_LINE(390)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(390)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(390)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(390)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(390)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",390);
								{
									HX_STACK_LINE(390)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(390)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(390)
									{
										HX_STACK_LINE(390)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(390)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(390)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(390)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",390);
								{
									HX_STACK_LINE(390)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(390)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(390)
									{
										HX_STACK_LINE(390)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(390)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(390)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(390)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(390)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(390)
							{
								HX_STACK_LINE(390)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(390)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(390)
								{
								}
								HX_STACK_LINE(390)
								{
								}
							}
							HX_STACK_LINE(390)
							{
								HX_STACK_LINE(390)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(390)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(390)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(390)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(390)
			::nape::geom::Vec2 ret = _Function_3_2::Block(anchor2,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(390)
			if ((anchor2->zpp_inner->weak)){
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
						HX_STACK_LINE(390)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(390)
						if ((_this1->_immutable)){
							HX_STACK_LINE(390)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(390)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(390)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(390)
					if ((anchor2->zpp_inner->_inuse)){
						HX_STACK_LINE(390)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(390)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(390)
					anchor2->zpp_inner->outer = null();
					HX_STACK_LINE(390)
					anchor2->zpp_inner = null();
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(390)
						{
						}
						HX_STACK_LINE(390)
						o->zpp_pool = null();
						HX_STACK_LINE(390)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(390)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(390)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(390)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(390)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(390)
						{
						}
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(390)
							if (((o->outer != null()))){
								HX_STACK_LINE(390)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(390)
								o->outer = null();
							}
							HX_STACK_LINE(390)
							o->_isimmutable = null();
							HX_STACK_LINE(390)
							o->_validate = null();
							HX_STACK_LINE(390)
							o->_invalidate = null();
						}
						HX_STACK_LINE(390)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(390)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(390)
				true;
			}
			else{
				HX_STACK_LINE(390)
				false;
			}
			HX_STACK_LINE(390)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::constraint::PulleyJoint_obj *__this){
			HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",392);
			{
				HX_STACK_LINE(392)
				if (((__this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(392)
					__this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(392)
				return __this->zpp_inner_zn->wrap_a2;
			}
			return null();
		}
	};
	HX_STACK_LINE(392)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_anchor2,return )

::nape::geom::Vec2 PulleyJoint_obj::get_anchor2( ){
	HX_STACK_PUSH("PulleyJoint::get_anchor2","nape/constraint/PulleyJoint.hx",376);
	HX_STACK_THIS(this);
	HX_STACK_LINE(377)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(377)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(378)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_anchor2,return )

::nape::geom::Vec2 PulleyJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_PUSH("PulleyJoint::set_anchor1","nape/constraint/PulleyJoint.hx",355);
	HX_STACK_THIS(this);
	HX_STACK_ARG(anchor1,"anchor1");
	HX_STACK_LINE(356)
	{
		HX_STACK_LINE(357)
		if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
			HX_STACK_LINE(359)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(363)
		if (((anchor1 == null()))){
			HX_STACK_LINE(363)
			hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor1")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(365)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::constraint::PulleyJoint_obj *__this){
					HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",365);
					{
						HX_STACK_LINE(365)
						if (((__this->zpp_inner_zn->wrap_a1 == null()))){
							HX_STACK_LINE(365)
							__this->zpp_inner_zn->setup_a1();
						}
						HX_STACK_LINE(365)
						return __this->zpp_inner_zn->wrap_a1;
					}
					return null();
				}
			};
			HX_STACK_LINE(365)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(365)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(365)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(365)
			if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
				HX_STACK_LINE(365)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(365)
				if ((_this1->_immutable)){
					HX_STACK_LINE(365)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(365)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(365)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(365)
			if (((anchor1 == null()))){
				HX_STACK_LINE(365)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor1,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",365);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &anchor1){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",365);
								{
									HX_STACK_LINE(365)
									if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
										HX_STACK_LINE(365)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(365)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(365)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(365)
									return anchor1->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &anchor1){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",365);
								{
									HX_STACK_LINE(365)
									if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
										HX_STACK_LINE(365)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(365)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(365)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(365)
									return anchor1->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(365)
						Float x = _Function_4_1::Block(anchor1);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(anchor1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(365)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(365)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(365)
							if ((_this1->_immutable)){
								HX_STACK_LINE(365)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(365)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(365)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(365)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(365)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",365);
								{
									HX_STACK_LINE(365)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(365)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(365)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(365)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(365)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",365);
								{
									HX_STACK_LINE(365)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(365)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(365)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(365)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(365)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(365)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(365)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(365)
								{
								}
								HX_STACK_LINE(365)
								{
								}
							}
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(365)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(365)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(365)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(365)
			::nape::geom::Vec2 ret = _Function_3_2::Block(anchor1,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(365)
			if ((anchor1->zpp_inner->weak)){
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
						HX_STACK_LINE(365)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(365)
						if ((_this1->_immutable)){
							HX_STACK_LINE(365)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(365)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(365)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(365)
					if ((anchor1->zpp_inner->_inuse)){
						HX_STACK_LINE(365)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(365)
					anchor1->zpp_inner->outer = null();
					HX_STACK_LINE(365)
					anchor1->zpp_inner = null();
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(365)
						{
						}
						HX_STACK_LINE(365)
						o->zpp_pool = null();
						HX_STACK_LINE(365)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(365)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(365)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(365)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(365)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(365)
						{
						}
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							if (((o->outer != null()))){
								HX_STACK_LINE(365)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(365)
								o->outer = null();
							}
							HX_STACK_LINE(365)
							o->_isimmutable = null();
							HX_STACK_LINE(365)
							o->_validate = null();
							HX_STACK_LINE(365)
							o->_invalidate = null();
						}
						HX_STACK_LINE(365)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(365)
				true;
			}
			else{
				HX_STACK_LINE(365)
				false;
			}
			HX_STACK_LINE(365)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::constraint::PulleyJoint_obj *__this){
			HX_STACK_PUSH("*::closure","nape/constraint/PulleyJoint.hx",367);
			{
				HX_STACK_LINE(367)
				if (((__this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(367)
					__this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(367)
				return __this->zpp_inner_zn->wrap_a1;
			}
			return null();
		}
	};
	HX_STACK_LINE(367)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_anchor1,return )

::nape::geom::Vec2 PulleyJoint_obj::get_anchor1( ){
	HX_STACK_PUSH("PulleyJoint::get_anchor1","nape/constraint/PulleyJoint.hx",351);
	HX_STACK_THIS(this);
	HX_STACK_LINE(352)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(352)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(353)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_anchor1,return )

::nape::phys::Body PulleyJoint_obj::set_body4( ::nape::phys::Body body4){
	HX_STACK_PUSH("PulleyJoint::set_body4","nape/constraint/PulleyJoint.hx",317);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body4,"body4");
	HX_STACK_LINE(318)
	{
		HX_STACK_LINE(319)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body4")));
		HX_STACK_LINE(320)
		::zpp_nape::phys::ZPP_Body inbody4 = (  (((body4 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body4->zpp_inner) );		HX_STACK_VAR(inbody4,"inbody4");
		HX_STACK_LINE(321)
		if (((inbody4 != this->zpp_inner_zn->b4))){
			HX_STACK_LINE(322)
			if (((this->zpp_inner_zn->b4 != null()))){
				HX_STACK_LINE(323)
				if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b4)))) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b4)))) && bool((this->zpp_inner_zn->b3 != this->zpp_inner_zn->b4))))){
					HX_STACK_LINE(323)
					if (((this->zpp_inner_zn->b4 != null()))){
						HX_STACK_LINE(325)
						this->zpp_inner_zn->b4->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(328)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(328)
					this->zpp_inner_zn->b4->wake();
				}
			}
			HX_STACK_LINE(330)
			this->zpp_inner_zn->b4 = inbody4;
			HX_STACK_LINE(331)
			if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody4 != null())))) && bool((this->zpp_inner_zn->b1 != inbody4)))) && bool((this->zpp_inner_zn->b2 != inbody4)))) && bool((this->zpp_inner_zn->b3 != inbody4))))){
				HX_STACK_LINE(331)
				if (((inbody4 != null()))){
					HX_STACK_LINE(333)
					inbody4->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(336)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(337)
				this->zpp_inner->wake();
				HX_STACK_LINE(338)
				if (((inbody4 != null()))){
					HX_STACK_LINE(338)
					inbody4->wake();
				}
			}
		}
	}
	HX_STACK_LINE(342)
	return (  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_body4,return )

::nape::phys::Body PulleyJoint_obj::get_body4( ){
	HX_STACK_PUSH("PulleyJoint::get_body4","nape/constraint/PulleyJoint.hx",314);
	HX_STACK_THIS(this);
	HX_STACK_LINE(314)
	return (  (((this->zpp_inner_zn->b4 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b4->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_body4,return )

::nape::phys::Body PulleyJoint_obj::set_body3( ::nape::phys::Body body3){
	HX_STACK_PUSH("PulleyJoint::set_body3","nape/constraint/PulleyJoint.hx",279);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body3,"body3");
	HX_STACK_LINE(280)
	{
		HX_STACK_LINE(281)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body3")));
		HX_STACK_LINE(282)
		::zpp_nape::phys::ZPP_Body inbody3 = (  (((body3 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body3->zpp_inner) );		HX_STACK_VAR(inbody3,"inbody3");
		HX_STACK_LINE(283)
		if (((inbody3 != this->zpp_inner_zn->b3))){
			HX_STACK_LINE(284)
			if (((this->zpp_inner_zn->b3 != null()))){
				HX_STACK_LINE(285)
				if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b3)))) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b3)))) && bool((this->zpp_inner_zn->b4 != this->zpp_inner_zn->b3))))){
					HX_STACK_LINE(285)
					if (((this->zpp_inner_zn->b3 != null()))){
						HX_STACK_LINE(287)
						this->zpp_inner_zn->b3->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(290)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(290)
					this->zpp_inner_zn->b3->wake();
				}
			}
			HX_STACK_LINE(292)
			this->zpp_inner_zn->b3 = inbody3;
			HX_STACK_LINE(293)
			if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody3 != null())))) && bool((this->zpp_inner_zn->b1 != inbody3)))) && bool((this->zpp_inner_zn->b2 != inbody3)))) && bool((this->zpp_inner_zn->b4 != inbody3))))){
				HX_STACK_LINE(293)
				if (((inbody3 != null()))){
					HX_STACK_LINE(295)
					inbody3->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(298)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(299)
				this->zpp_inner->wake();
				HX_STACK_LINE(300)
				if (((inbody3 != null()))){
					HX_STACK_LINE(300)
					inbody3->wake();
				}
			}
		}
	}
	HX_STACK_LINE(304)
	return (  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_body3,return )

::nape::phys::Body PulleyJoint_obj::get_body3( ){
	HX_STACK_PUSH("PulleyJoint::get_body3","nape/constraint/PulleyJoint.hx",276);
	HX_STACK_THIS(this);
	HX_STACK_LINE(276)
	return (  (((this->zpp_inner_zn->b3 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b3->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_body3,return )

::nape::phys::Body PulleyJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_PUSH("PulleyJoint::set_body2","nape/constraint/PulleyJoint.hx",241);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body2,"body2");
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(243)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body2")));
		HX_STACK_LINE(244)
		::zpp_nape::phys::ZPP_Body inbody2 = (  (((body2 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body2->zpp_inner) );		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(245)
		if (((inbody2 != this->zpp_inner_zn->b2))){
			HX_STACK_LINE(246)
			if (((this->zpp_inner_zn->b2 != null()))){
				HX_STACK_LINE(247)
				if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2)))) && bool((this->zpp_inner_zn->b3 != this->zpp_inner_zn->b2)))) && bool((this->zpp_inner_zn->b4 != this->zpp_inner_zn->b2))))){
					HX_STACK_LINE(247)
					if (((this->zpp_inner_zn->b2 != null()))){
						HX_STACK_LINE(249)
						this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(252)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(252)
					this->zpp_inner_zn->b2->wake();
				}
			}
			HX_STACK_LINE(254)
			this->zpp_inner_zn->b2 = inbody2;
			HX_STACK_LINE(255)
			if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2)))) && bool((this->zpp_inner_zn->b3 != inbody2)))) && bool((this->zpp_inner_zn->b4 != inbody2))))){
				HX_STACK_LINE(255)
				if (((inbody2 != null()))){
					HX_STACK_LINE(257)
					inbody2->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(260)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(261)
				this->zpp_inner->wake();
				HX_STACK_LINE(262)
				if (((inbody2 != null()))){
					HX_STACK_LINE(262)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(266)
	return (  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_body2,return )

::nape::phys::Body PulleyJoint_obj::get_body2( ){
	HX_STACK_PUSH("PulleyJoint::get_body2","nape/constraint/PulleyJoint.hx",238);
	HX_STACK_THIS(this);
	HX_STACK_LINE(238)
	return (  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_body2,return )

::nape::phys::Body PulleyJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_PUSH("PulleyJoint::set_body1","nape/constraint/PulleyJoint.hx",203);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body1,"body1");
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(205)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body1")));
		HX_STACK_LINE(206)
		::zpp_nape::phys::ZPP_Body inbody1 = (  (((body1 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body1->zpp_inner) );		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(207)
		if (((inbody1 != this->zpp_inner_zn->b1))){
			HX_STACK_LINE(208)
			if (((this->zpp_inner_zn->b1 != null()))){
				HX_STACK_LINE(209)
				if (((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1)))) && bool((this->zpp_inner_zn->b3 != this->zpp_inner_zn->b1)))) && bool((this->zpp_inner_zn->b4 != this->zpp_inner_zn->b1))))){
					HX_STACK_LINE(209)
					if (((this->zpp_inner_zn->b1 != null()))){
						HX_STACK_LINE(211)
						this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(214)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(214)
					this->zpp_inner_zn->b1->wake();
				}
			}
			HX_STACK_LINE(216)
			this->zpp_inner_zn->b1 = inbody1;
			HX_STACK_LINE(217)
			if (((bool((bool((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1)))) && bool((this->zpp_inner_zn->b3 != inbody1)))) && bool((this->zpp_inner_zn->b4 != inbody1))))){
				HX_STACK_LINE(217)
				if (((inbody1 != null()))){
					HX_STACK_LINE(219)
					inbody1->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(222)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(223)
				this->zpp_inner->wake();
				HX_STACK_LINE(224)
				if (((inbody1 != null()))){
					HX_STACK_LINE(224)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(228)
	return (  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_body1,return )

::nape::phys::Body PulleyJoint_obj::get_body1( ){
	HX_STACK_PUSH("PulleyJoint::get_body1","nape/constraint/PulleyJoint.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_LINE(200)
	return (  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_body1,return )


PulleyJoint_obj::PulleyJoint_obj()
{
}

void PulleyJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PulleyJoint);
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	HX_MARK_MEMBER_NAME(jointMax,"jointMax");
	HX_MARK_MEMBER_NAME(jointMin,"jointMin");
	HX_MARK_MEMBER_NAME(anchor4,"anchor4");
	HX_MARK_MEMBER_NAME(anchor3,"anchor3");
	HX_MARK_MEMBER_NAME(anchor2,"anchor2");
	HX_MARK_MEMBER_NAME(anchor1,"anchor1");
	HX_MARK_MEMBER_NAME(body4,"body4");
	HX_MARK_MEMBER_NAME(body3,"body3");
	HX_MARK_MEMBER_NAME(body2,"body2");
	HX_MARK_MEMBER_NAME(body1,"body1");
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PulleyJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	HX_VISIT_MEMBER_NAME(jointMax,"jointMax");
	HX_VISIT_MEMBER_NAME(jointMin,"jointMin");
	HX_VISIT_MEMBER_NAME(anchor4,"anchor4");
	HX_VISIT_MEMBER_NAME(anchor3,"anchor3");
	HX_VISIT_MEMBER_NAME(anchor2,"anchor2");
	HX_VISIT_MEMBER_NAME(anchor1,"anchor1");
	HX_VISIT_MEMBER_NAME(body4,"body4");
	HX_VISIT_MEMBER_NAME(body3,"body3");
	HX_VISIT_MEMBER_NAME(body2,"body2");
	HX_VISIT_MEMBER_NAME(body1,"body1");
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PulleyJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { return inCallProp ? get_ratio() : ratio; }
		if (HX_FIELD_EQ(inName,"body4") ) { return inCallProp ? get_body4() : body4; }
		if (HX_FIELD_EQ(inName,"body3") ) { return inCallProp ? get_body3() : body3; }
		if (HX_FIELD_EQ(inName,"body2") ) { return inCallProp ? get_body2() : body2; }
		if (HX_FIELD_EQ(inName,"body1") ) { return inCallProp ? get_body1() : body1; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		if (HX_FIELD_EQ(inName,"isSlack") ) { return isSlack_dyn(); }
		if (HX_FIELD_EQ(inName,"anchor4") ) { return inCallProp ? get_anchor4() : anchor4; }
		if (HX_FIELD_EQ(inName,"anchor3") ) { return inCallProp ? get_anchor3() : anchor3; }
		if (HX_FIELD_EQ(inName,"anchor2") ) { return inCallProp ? get_anchor2() : anchor2; }
		if (HX_FIELD_EQ(inName,"anchor1") ) { return inCallProp ? get_anchor1() : anchor1; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jointMax") ) { return inCallProp ? get_jointMax() : jointMax; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { return inCallProp ? get_jointMin() : jointMin; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_ratio") ) { return set_ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ratio") ) { return get_ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body4") ) { return set_body4_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body4") ) { return get_body4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body3") ) { return set_body3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body3") ) { return get_body3_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body2") ) { return set_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return get_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body1") ) { return set_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body1") ) { return get_body1_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor4") ) { return set_anchor4_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor4") ) { return get_anchor4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor3") ) { return set_anchor3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor3") ) { return get_anchor3_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor2") ) { return set_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor2") ) { return get_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor1") ) { return set_anchor1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor1") ) { return get_anchor1_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_jointMax") ) { return set_jointMax_dyn(); }
		if (HX_FIELD_EQ(inName,"get_jointMax") ) { return get_jointMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_jointMin") ) { return set_jointMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_jointMin") ) { return get_jointMin_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PulleyJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { if (inCallProp) return set_ratio(inValue);ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body4") ) { if (inCallProp) return set_body4(inValue);body4=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body3") ) { if (inCallProp) return set_body3(inValue);body3=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp) return set_body2(inValue);body2=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp) return set_body1(inValue);body1=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor4") ) { if (inCallProp) return set_anchor4(inValue);anchor4=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"anchor3") ) { if (inCallProp) return set_anchor3(inValue);anchor3=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"anchor2") ) { if (inCallProp) return set_anchor2(inValue);anchor2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"anchor1") ) { if (inCallProp) return set_anchor1(inValue);anchor1=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jointMax") ) { if (inCallProp) return set_jointMax(inValue);jointMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { if (inCallProp) return set_jointMin(inValue);jointMin=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_PulleyJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PulleyJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ratio"));
	outFields->push(HX_CSTRING("jointMax"));
	outFields->push(HX_CSTRING("jointMin"));
	outFields->push(HX_CSTRING("anchor4"));
	outFields->push(HX_CSTRING("anchor3"));
	outFields->push(HX_CSTRING("anchor2"));
	outFields->push(HX_CSTRING("anchor1"));
	outFields->push(HX_CSTRING("body4"));
	outFields->push(HX_CSTRING("body3"));
	outFields->push(HX_CSTRING("body2"));
	outFields->push(HX_CSTRING("body1"));
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("visitBodies"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("impulse"),
	HX_CSTRING("isSlack"),
	HX_CSTRING("set_ratio"),
	HX_CSTRING("get_ratio"),
	HX_CSTRING("ratio"),
	HX_CSTRING("set_jointMax"),
	HX_CSTRING("get_jointMax"),
	HX_CSTRING("jointMax"),
	HX_CSTRING("set_jointMin"),
	HX_CSTRING("get_jointMin"),
	HX_CSTRING("jointMin"),
	HX_CSTRING("set_anchor4"),
	HX_CSTRING("get_anchor4"),
	HX_CSTRING("anchor4"),
	HX_CSTRING("set_anchor3"),
	HX_CSTRING("get_anchor3"),
	HX_CSTRING("anchor3"),
	HX_CSTRING("set_anchor2"),
	HX_CSTRING("get_anchor2"),
	HX_CSTRING("anchor2"),
	HX_CSTRING("set_anchor1"),
	HX_CSTRING("get_anchor1"),
	HX_CSTRING("anchor1"),
	HX_CSTRING("set_body4"),
	HX_CSTRING("get_body4"),
	HX_CSTRING("body4"),
	HX_CSTRING("set_body3"),
	HX_CSTRING("get_body3"),
	HX_CSTRING("body3"),
	HX_CSTRING("set_body2"),
	HX_CSTRING("get_body2"),
	HX_CSTRING("body2"),
	HX_CSTRING("set_body1"),
	HX_CSTRING("get_body1"),
	HX_CSTRING("body1"),
	HX_CSTRING("zpp_inner_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PulleyJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PulleyJoint_obj::__mClass,"__mClass");
};

Class PulleyJoint_obj::__mClass;

void PulleyJoint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.PulleyJoint"), hx::TCanCast< PulleyJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PulleyJoint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
