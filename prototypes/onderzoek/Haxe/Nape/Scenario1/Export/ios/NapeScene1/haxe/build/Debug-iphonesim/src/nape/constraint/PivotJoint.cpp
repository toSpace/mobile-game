#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_PivotJoint
#include <nape/constraint/PivotJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PivotJoint
#include <zpp_nape/constraint/ZPP_PivotJoint.h>
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

Void PivotJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2)
{
HX_STACK_PUSH("PivotJoint::new","nape/constraint/PivotJoint.hx",186);
{
	HX_STACK_LINE(190)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(329)
	this->zpp_inner_zn = ::zpp_nape::constraint::ZPP_PivotJoint_obj::__new();
	HX_STACK_LINE(330)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(331)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(332)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(334)
	try{
		HX_STACK_LINE(334)
		super::__construct();
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(342)
	{
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body1")));
			HX_STACK_LINE(342)
			::zpp_nape::phys::ZPP_Body inbody1 = (  (((body1 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body1->zpp_inner) );		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(342)
			if (((inbody1 != this->zpp_inner_zn->b1))){
				HX_STACK_LINE(342)
				if (((this->zpp_inner_zn->b1 != null()))){
					HX_STACK_LINE(342)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
						HX_STACK_LINE(342)
						if (((this->zpp_inner_zn->b1 != null()))){
							HX_STACK_LINE(342)
							this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(342)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(342)
						this->zpp_inner_zn->b1->wake();
					}
				}
				HX_STACK_LINE(342)
				this->zpp_inner_zn->b1 = inbody1;
				HX_STACK_LINE(342)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
					HX_STACK_LINE(342)
					if (((inbody1 != null()))){
						HX_STACK_LINE(342)
						inbody1->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(342)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(342)
					this->zpp_inner->wake();
					HX_STACK_LINE(342)
					if (((inbody1 != null()))){
						HX_STACK_LINE(342)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(342)
		if (((this->zpp_inner_zn->b1 == null()))){
			HX_STACK_LINE(342)
			Dynamic();
		}
		else{
			HX_STACK_LINE(342)
			this->zpp_inner_zn->b1->outer;
		}
	}
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(343)
			this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body2")));
			HX_STACK_LINE(343)
			::zpp_nape::phys::ZPP_Body inbody2 = (  (((body2 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body2->zpp_inner) );		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(343)
			if (((inbody2 != this->zpp_inner_zn->b2))){
				HX_STACK_LINE(343)
				if (((this->zpp_inner_zn->b2 != null()))){
					HX_STACK_LINE(343)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
						HX_STACK_LINE(343)
						if (((this->zpp_inner_zn->b2 != null()))){
							HX_STACK_LINE(343)
							this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(343)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(343)
						this->zpp_inner_zn->b2->wake();
					}
				}
				HX_STACK_LINE(343)
				this->zpp_inner_zn->b2 = inbody2;
				HX_STACK_LINE(343)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
					HX_STACK_LINE(343)
					if (((inbody2 != null()))){
						HX_STACK_LINE(343)
						inbody2->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(343)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(343)
					this->zpp_inner->wake();
					HX_STACK_LINE(343)
					if (((inbody2 != null()))){
						HX_STACK_LINE(343)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(343)
		if (((this->zpp_inner_zn->b2 == null()))){
			HX_STACK_LINE(343)
			Dynamic();
		}
		else{
			HX_STACK_LINE(343)
			this->zpp_inner_zn->b2->outer;
		}
	}
	HX_STACK_LINE(344)
	{
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
				HX_STACK_LINE(344)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(344)
			if (((anchor1 == null()))){
				HX_STACK_LINE(344)
				hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor1")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(344)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::constraint::PivotJoint_obj *__this){
						HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",344);
						{
							HX_STACK_LINE(344)
							if (((__this->zpp_inner_zn->wrap_a1 == null()))){
								HX_STACK_LINE(344)
								__this->zpp_inner_zn->setup_a1();
							}
							HX_STACK_LINE(344)
							return __this->zpp_inner_zn->wrap_a1;
						}
						return null();
					}
				};
				HX_STACK_LINE(344)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(344)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(344)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(344)
				if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
					HX_STACK_LINE(344)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(344)
					if ((_this1->_immutable)){
						HX_STACK_LINE(344)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(344)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(344)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(344)
				if (((anchor1 == null()))){
					HX_STACK_LINE(344)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor1,::nape::geom::Vec2 &_this){
						HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",344);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &anchor1){
									HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",344);
									{
										HX_STACK_LINE(344)
										if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
											HX_STACK_LINE(344)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(344)
										{
											HX_STACK_LINE(344)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(344)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(344)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(344)
										return anchor1->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &anchor1){
									HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",344);
									{
										HX_STACK_LINE(344)
										if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
											HX_STACK_LINE(344)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(344)
										{
											HX_STACK_LINE(344)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(344)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(344)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(344)
										return anchor1->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(344)
							Float x = _Function_5_1::Block(anchor1);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(anchor1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(344)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(344)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(344)
								if ((_this1->_immutable)){
									HX_STACK_LINE(344)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(344)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(344)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(344)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(344)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",344);
									{
										HX_STACK_LINE(344)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(344)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(344)
										{
											HX_STACK_LINE(344)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(344)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(344)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(344)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",344);
									{
										HX_STACK_LINE(344)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(344)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(344)
										{
											HX_STACK_LINE(344)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(344)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(344)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(344)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(344)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(344)
								{
									HX_STACK_LINE(344)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(344)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(344)
									{
									}
									HX_STACK_LINE(344)
									{
									}
								}
								HX_STACK_LINE(344)
								{
									HX_STACK_LINE(344)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(344)
									if (((_this1->_invalidate_dyn() != null()))){
										HX_STACK_LINE(344)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(344)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(344)
				::nape::geom::Vec2 ret = _Function_4_2::Block(anchor1,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(344)
				if ((anchor1->zpp_inner->weak)){
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
							HX_STACK_LINE(344)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(344)
							if ((_this1->_immutable)){
								HX_STACK_LINE(344)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(344)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(344)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(344)
						if ((anchor1->zpp_inner->_inuse)){
							HX_STACK_LINE(344)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(344)
						anchor1->zpp_inner->outer = null();
						HX_STACK_LINE(344)
						anchor1->zpp_inner = null();
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(344)
							{
							}
							HX_STACK_LINE(344)
							o->zpp_pool = null();
							HX_STACK_LINE(344)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(344)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(344)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(344)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(344)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(344)
							{
							}
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								if (((o->outer != null()))){
									HX_STACK_LINE(344)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(344)
									o->outer = null();
								}
								HX_STACK_LINE(344)
								o->_isimmutable = null();
								HX_STACK_LINE(344)
								o->_validate = null();
								HX_STACK_LINE(344)
								o->_invalidate = null();
							}
							HX_STACK_LINE(344)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(344)
					true;
				}
				else{
					HX_STACK_LINE(344)
					false;
				}
				HX_STACK_LINE(344)
				ret;
			}
		}
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(344)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(344)
			this->zpp_inner_zn->wrap_a1;
		}
	}
	HX_STACK_LINE(345)
	{
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
				HX_STACK_LINE(345)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(345)
			if (((anchor2 == null()))){
				HX_STACK_LINE(345)
				hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor2")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(345)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::constraint::PivotJoint_obj *__this){
						HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",345);
						{
							HX_STACK_LINE(345)
							if (((__this->zpp_inner_zn->wrap_a2 == null()))){
								HX_STACK_LINE(345)
								__this->zpp_inner_zn->setup_a2();
							}
							HX_STACK_LINE(345)
							return __this->zpp_inner_zn->wrap_a2;
						}
						return null();
					}
				};
				HX_STACK_LINE(345)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(345)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(345)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(345)
				if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
					HX_STACK_LINE(345)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(345)
				{
					HX_STACK_LINE(345)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(345)
					if ((_this1->_immutable)){
						HX_STACK_LINE(345)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(345)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(345)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(345)
				if (((anchor2 == null()))){
					HX_STACK_LINE(345)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor2,::nape::geom::Vec2 &_this){
						HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",345);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &anchor2){
									HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",345);
									{
										HX_STACK_LINE(345)
										if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
											HX_STACK_LINE(345)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(345)
										{
											HX_STACK_LINE(345)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(345)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(345)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(345)
										return anchor2->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &anchor2){
									HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",345);
									{
										HX_STACK_LINE(345)
										if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
											HX_STACK_LINE(345)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(345)
										{
											HX_STACK_LINE(345)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(345)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(345)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(345)
										return anchor2->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(345)
							Float x = _Function_5_1::Block(anchor2);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(anchor2);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(345)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(345)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(345)
							{
								HX_STACK_LINE(345)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(345)
								if ((_this1->_immutable)){
									HX_STACK_LINE(345)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(345)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(345)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(345)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(345)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",345);
									{
										HX_STACK_LINE(345)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(345)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(345)
										{
											HX_STACK_LINE(345)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(345)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(345)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(345)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",345);
									{
										HX_STACK_LINE(345)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(345)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(345)
										{
											HX_STACK_LINE(345)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(345)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(345)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(345)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(345)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(345)
								{
									HX_STACK_LINE(345)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(345)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(345)
									{
									}
									HX_STACK_LINE(345)
									{
									}
								}
								HX_STACK_LINE(345)
								{
									HX_STACK_LINE(345)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(345)
									if (((_this1->_invalidate_dyn() != null()))){
										HX_STACK_LINE(345)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(345)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(345)
				::nape::geom::Vec2 ret = _Function_4_2::Block(anchor2,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(345)
				if ((anchor2->zpp_inner->weak)){
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
							HX_STACK_LINE(345)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(345)
							if ((_this1->_immutable)){
								HX_STACK_LINE(345)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(345)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(345)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(345)
						if ((anchor2->zpp_inner->_inuse)){
							HX_STACK_LINE(345)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(345)
						anchor2->zpp_inner->outer = null();
						HX_STACK_LINE(345)
						anchor2->zpp_inner = null();
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(345)
							{
							}
							HX_STACK_LINE(345)
							o->zpp_pool = null();
							HX_STACK_LINE(345)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(345)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(345)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(345)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(345)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(345)
							{
							}
							HX_STACK_LINE(345)
							{
								HX_STACK_LINE(345)
								if (((o->outer != null()))){
									HX_STACK_LINE(345)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(345)
									o->outer = null();
								}
								HX_STACK_LINE(345)
								o->_isimmutable = null();
								HX_STACK_LINE(345)
								o->_validate = null();
								HX_STACK_LINE(345)
								o->_invalidate = null();
							}
							HX_STACK_LINE(345)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(345)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(345)
					true;
				}
				else{
					HX_STACK_LINE(345)
					false;
				}
				HX_STACK_LINE(345)
				ret;
			}
		}
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(345)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(345)
			this->zpp_inner_zn->wrap_a2;
		}
	}
}
;
	return null();
}

PivotJoint_obj::~PivotJoint_obj() { }

Dynamic PivotJoint_obj::__CreateEmpty() { return  new PivotJoint_obj; }
hx::ObjectPtr< PivotJoint_obj > PivotJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2)
{  hx::ObjectPtr< PivotJoint_obj > result = new PivotJoint_obj();
	result->__construct(body1,body2,anchor1,anchor2);
	return result;}

Dynamic PivotJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PivotJoint_obj > result = new PivotJoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void PivotJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_PUSH("PivotJoint::visitBodies","nape/constraint/PivotJoint.hx",380);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(381)
		if (((((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )) != null()))){
			HX_STACK_LINE(381)
			lambda((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(384)
		if (((bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) ))))))){
			HX_STACK_LINE(384)
			lambda((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )).Cast< Void >();
		}
	}
return null();
}


::nape::geom::Vec3 PivotJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("PivotJoint::bodyImpulse","nape/constraint/PivotJoint.hx",361);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(363)
	if (((body == null()))){
		HX_STACK_LINE(363)
		hx::Throw (HX_CSTRING("Error: Cannot evaluate impulse on null body"));
	}
	HX_STACK_LINE(366)
	if (((bool((body != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )))) && bool((body != ((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) ))))))){
		HX_STACK_LINE(366)
		hx::Throw (HX_CSTRING("Error: Body is not linked to this constraint"));
	}
	HX_STACK_LINE(370)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(370)
		return ::nape::geom::Vec3_obj::get(null(),null(),null());
	}
	else{
		HX_STACK_LINE(373)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(370)
	return null();
}


::nape::geom::MatMN PivotJoint_obj::impulse( ){
	HX_STACK_PUSH("PivotJoint::impulse","nape/constraint/PivotJoint.hx",352);
	HX_STACK_THIS(this);
	HX_STACK_LINE(353)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)2,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(354)
	{
		HX_STACK_LINE(354)
		if (((bool(((int)0 >= ret->zpp_inner->m)) || bool(((int)0 >= ret->zpp_inner->n))))){
			HX_STACK_LINE(354)
			hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
		}
		HX_STACK_LINE(354)
		ret->zpp_inner->x[((int)0 * ret->zpp_inner->n)] = this->zpp_inner_zn->jAccx;
	}
	HX_STACK_LINE(355)
	{
		HX_STACK_LINE(355)
		if (((bool(((int)1 >= ret->zpp_inner->m)) || bool(((int)0 >= ret->zpp_inner->n))))){
			HX_STACK_LINE(355)
			hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
		}
		HX_STACK_LINE(355)
		ret->zpp_inner->x[ret->zpp_inner->n] = this->zpp_inner_zn->jAccy;
	}
	HX_STACK_LINE(356)
	return ret;
}


::nape::geom::Vec2 PivotJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_PUSH("PivotJoint::set_anchor2","nape/constraint/PivotJoint.hx",303);
	HX_STACK_THIS(this);
	HX_STACK_ARG(anchor2,"anchor2");
	HX_STACK_LINE(304)
	{
		HX_STACK_LINE(305)
		if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
			HX_STACK_LINE(307)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(311)
		if (((anchor2 == null()))){
			HX_STACK_LINE(311)
			hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor2")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(313)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::constraint::PivotJoint_obj *__this){
					HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",313);
					{
						HX_STACK_LINE(313)
						if (((__this->zpp_inner_zn->wrap_a2 == null()))){
							HX_STACK_LINE(313)
							__this->zpp_inner_zn->setup_a2();
						}
						HX_STACK_LINE(313)
						return __this->zpp_inner_zn->wrap_a2;
					}
					return null();
				}
			};
			HX_STACK_LINE(313)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(313)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(313)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(313)
			if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
				HX_STACK_LINE(313)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(313)
				if ((_this1->_immutable)){
					HX_STACK_LINE(313)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(313)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(313)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(313)
			if (((anchor2 == null()))){
				HX_STACK_LINE(313)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor2,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",313);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &anchor2){
								HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",313);
								{
									HX_STACK_LINE(313)
									if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
										HX_STACK_LINE(313)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(313)
									{
										HX_STACK_LINE(313)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(313)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(313)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(313)
									return anchor2->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &anchor2){
								HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",313);
								{
									HX_STACK_LINE(313)
									if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
										HX_STACK_LINE(313)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(313)
									{
										HX_STACK_LINE(313)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(313)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(313)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(313)
									return anchor2->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(313)
						Float x = _Function_4_1::Block(anchor2);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(anchor2);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(313)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(313)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(313)
							if ((_this1->_immutable)){
								HX_STACK_LINE(313)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(313)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(313)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(313)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(313)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",313);
								{
									HX_STACK_LINE(313)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(313)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(313)
									{
										HX_STACK_LINE(313)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(313)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(313)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(313)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",313);
								{
									HX_STACK_LINE(313)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(313)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(313)
									{
										HX_STACK_LINE(313)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(313)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(313)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(313)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(313)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(313)
							{
								HX_STACK_LINE(313)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(313)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(313)
								{
								}
								HX_STACK_LINE(313)
								{
								}
							}
							HX_STACK_LINE(313)
							{
								HX_STACK_LINE(313)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(313)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(313)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(313)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(313)
			::nape::geom::Vec2 ret = _Function_3_2::Block(anchor2,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(313)
			if ((anchor2->zpp_inner->weak)){
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
						HX_STACK_LINE(313)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(313)
						if ((_this1->_immutable)){
							HX_STACK_LINE(313)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(313)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(313)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(313)
					if ((anchor2->zpp_inner->_inuse)){
						HX_STACK_LINE(313)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(313)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(313)
					anchor2->zpp_inner->outer = null();
					HX_STACK_LINE(313)
					anchor2->zpp_inner = null();
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(313)
						{
						}
						HX_STACK_LINE(313)
						o->zpp_pool = null();
						HX_STACK_LINE(313)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(313)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(313)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(313)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(313)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(313)
						{
						}
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							if (((o->outer != null()))){
								HX_STACK_LINE(313)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(313)
								o->outer = null();
							}
							HX_STACK_LINE(313)
							o->_isimmutable = null();
							HX_STACK_LINE(313)
							o->_validate = null();
							HX_STACK_LINE(313)
							o->_invalidate = null();
						}
						HX_STACK_LINE(313)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(313)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(313)
				true;
			}
			else{
				HX_STACK_LINE(313)
				false;
			}
			HX_STACK_LINE(313)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::constraint::PivotJoint_obj *__this){
			HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",315);
			{
				HX_STACK_LINE(315)
				if (((__this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(315)
					__this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(315)
				return __this->zpp_inner_zn->wrap_a2;
			}
			return null();
		}
	};
	HX_STACK_LINE(315)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(PivotJoint_obj,set_anchor2,return )

::nape::geom::Vec2 PivotJoint_obj::get_anchor2( ){
	HX_STACK_PUSH("PivotJoint::get_anchor2","nape/constraint/PivotJoint.hx",299);
	HX_STACK_THIS(this);
	HX_STACK_LINE(300)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(300)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(301)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC0(PivotJoint_obj,get_anchor2,return )

::nape::geom::Vec2 PivotJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_PUSH("PivotJoint::set_anchor1","nape/constraint/PivotJoint.hx",278);
	HX_STACK_THIS(this);
	HX_STACK_ARG(anchor1,"anchor1");
	HX_STACK_LINE(279)
	{
		HX_STACK_LINE(280)
		if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
			HX_STACK_LINE(282)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(286)
		if (((anchor1 == null()))){
			HX_STACK_LINE(286)
			hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor1")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(288)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::constraint::PivotJoint_obj *__this){
					HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",288);
					{
						HX_STACK_LINE(288)
						if (((__this->zpp_inner_zn->wrap_a1 == null()))){
							HX_STACK_LINE(288)
							__this->zpp_inner_zn->setup_a1();
						}
						HX_STACK_LINE(288)
						return __this->zpp_inner_zn->wrap_a1;
					}
					return null();
				}
			};
			HX_STACK_LINE(288)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(288)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(288)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(288)
			if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
				HX_STACK_LINE(288)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(288)
				if ((_this1->_immutable)){
					HX_STACK_LINE(288)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(288)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(288)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(288)
			if (((anchor1 == null()))){
				HX_STACK_LINE(288)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor1,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",288);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &anchor1){
								HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",288);
								{
									HX_STACK_LINE(288)
									if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
										HX_STACK_LINE(288)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(288)
									{
										HX_STACK_LINE(288)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(288)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(288)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(288)
									return anchor1->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &anchor1){
								HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",288);
								{
									HX_STACK_LINE(288)
									if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
										HX_STACK_LINE(288)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(288)
									{
										HX_STACK_LINE(288)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(288)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(288)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(288)
									return anchor1->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(288)
						Float x = _Function_4_1::Block(anchor1);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(anchor1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(288)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(288)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(288)
							if ((_this1->_immutable)){
								HX_STACK_LINE(288)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(288)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(288)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(288)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(288)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",288);
								{
									HX_STACK_LINE(288)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(288)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(288)
									{
										HX_STACK_LINE(288)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(288)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(288)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(288)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",288);
								{
									HX_STACK_LINE(288)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(288)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(288)
									{
										HX_STACK_LINE(288)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(288)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(288)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(288)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(288)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(288)
							{
								HX_STACK_LINE(288)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(288)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(288)
								{
								}
								HX_STACK_LINE(288)
								{
								}
							}
							HX_STACK_LINE(288)
							{
								HX_STACK_LINE(288)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(288)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(288)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(288)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(288)
			::nape::geom::Vec2 ret = _Function_3_2::Block(anchor1,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(288)
			if ((anchor1->zpp_inner->weak)){
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
						HX_STACK_LINE(288)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(288)
						if ((_this1->_immutable)){
							HX_STACK_LINE(288)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(288)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(288)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(288)
					if ((anchor1->zpp_inner->_inuse)){
						HX_STACK_LINE(288)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(288)
					anchor1->zpp_inner->outer = null();
					HX_STACK_LINE(288)
					anchor1->zpp_inner = null();
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(288)
						{
						}
						HX_STACK_LINE(288)
						o->zpp_pool = null();
						HX_STACK_LINE(288)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(288)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(288)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(288)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(288)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(288)
						{
						}
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							if (((o->outer != null()))){
								HX_STACK_LINE(288)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(288)
								o->outer = null();
							}
							HX_STACK_LINE(288)
							o->_isimmutable = null();
							HX_STACK_LINE(288)
							o->_validate = null();
							HX_STACK_LINE(288)
							o->_invalidate = null();
						}
						HX_STACK_LINE(288)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(288)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(288)
				true;
			}
			else{
				HX_STACK_LINE(288)
				false;
			}
			HX_STACK_LINE(288)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::constraint::PivotJoint_obj *__this){
			HX_STACK_PUSH("*::closure","nape/constraint/PivotJoint.hx",290);
			{
				HX_STACK_LINE(290)
				if (((__this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(290)
					__this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(290)
				return __this->zpp_inner_zn->wrap_a1;
			}
			return null();
		}
	};
	HX_STACK_LINE(290)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(PivotJoint_obj,set_anchor1,return )

::nape::geom::Vec2 PivotJoint_obj::get_anchor1( ){
	HX_STACK_PUSH("PivotJoint::get_anchor1","nape/constraint/PivotJoint.hx",274);
	HX_STACK_THIS(this);
	HX_STACK_LINE(275)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(275)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(276)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC0(PivotJoint_obj,get_anchor1,return )

::nape::phys::Body PivotJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_PUSH("PivotJoint::set_body2","nape/constraint/PivotJoint.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body2,"body2");
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(242)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body2")));
		HX_STACK_LINE(243)
		::zpp_nape::phys::ZPP_Body inbody2 = (  (((body2 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body2->zpp_inner) );		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(244)
		if (((inbody2 != this->zpp_inner_zn->b2))){
			HX_STACK_LINE(245)
			if (((this->zpp_inner_zn->b2 != null()))){
				HX_STACK_LINE(246)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
					HX_STACK_LINE(246)
					if (((this->zpp_inner_zn->b2 != null()))){
						HX_STACK_LINE(248)
						this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(251)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(251)
					this->zpp_inner_zn->b2->wake();
				}
			}
			HX_STACK_LINE(253)
			this->zpp_inner_zn->b2 = inbody2;
			HX_STACK_LINE(254)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
				HX_STACK_LINE(254)
				if (((inbody2 != null()))){
					HX_STACK_LINE(256)
					inbody2->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(259)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(260)
				this->zpp_inner->wake();
				HX_STACK_LINE(261)
				if (((inbody2 != null()))){
					HX_STACK_LINE(261)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(265)
	return (  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(PivotJoint_obj,set_body2,return )

::nape::phys::Body PivotJoint_obj::get_body2( ){
	HX_STACK_PUSH("PivotJoint::get_body2","nape/constraint/PivotJoint.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_LINE(237)
	return (  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(PivotJoint_obj,get_body2,return )

::nape::phys::Body PivotJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_PUSH("PivotJoint::set_body1","nape/constraint/PivotJoint.hx",202);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body1,"body1");
	HX_STACK_LINE(203)
	{
		HX_STACK_LINE(204)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body1")));
		HX_STACK_LINE(205)
		::zpp_nape::phys::ZPP_Body inbody1 = (  (((body1 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body1->zpp_inner) );		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(206)
		if (((inbody1 != this->zpp_inner_zn->b1))){
			HX_STACK_LINE(207)
			if (((this->zpp_inner_zn->b1 != null()))){
				HX_STACK_LINE(208)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
					HX_STACK_LINE(208)
					if (((this->zpp_inner_zn->b1 != null()))){
						HX_STACK_LINE(210)
						this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(213)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(213)
					this->zpp_inner_zn->b1->wake();
				}
			}
			HX_STACK_LINE(215)
			this->zpp_inner_zn->b1 = inbody1;
			HX_STACK_LINE(216)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
				HX_STACK_LINE(216)
				if (((inbody1 != null()))){
					HX_STACK_LINE(218)
					inbody1->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(221)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(222)
				this->zpp_inner->wake();
				HX_STACK_LINE(223)
				if (((inbody1 != null()))){
					HX_STACK_LINE(223)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(227)
	return (  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(PivotJoint_obj,set_body1,return )

::nape::phys::Body PivotJoint_obj::get_body1( ){
	HX_STACK_PUSH("PivotJoint::get_body1","nape/constraint/PivotJoint.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_LINE(199)
	return (  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(PivotJoint_obj,get_body1,return )


PivotJoint_obj::PivotJoint_obj()
{
}

void PivotJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PivotJoint);
	HX_MARK_MEMBER_NAME(anchor2,"anchor2");
	HX_MARK_MEMBER_NAME(anchor1,"anchor1");
	HX_MARK_MEMBER_NAME(body2,"body2");
	HX_MARK_MEMBER_NAME(body1,"body1");
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PivotJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(anchor2,"anchor2");
	HX_VISIT_MEMBER_NAME(anchor1,"anchor1");
	HX_VISIT_MEMBER_NAME(body2,"body2");
	HX_VISIT_MEMBER_NAME(body1,"body1");
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PivotJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body2") ) { return inCallProp ? get_body2() : body2; }
		if (HX_FIELD_EQ(inName,"body1") ) { return inCallProp ? get_body1() : body1; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { return inCallProp ? get_anchor2() : anchor2; }
		if (HX_FIELD_EQ(inName,"anchor1") ) { return inCallProp ? get_anchor1() : anchor1; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_body2") ) { return set_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return get_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body1") ) { return set_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body1") ) { return get_body1_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor2") ) { return set_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor2") ) { return get_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor1") ) { return set_anchor1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor1") ) { return get_anchor1_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PivotJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp) return set_body2(inValue);body2=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp) return set_body1(inValue);body1=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor2") ) { if (inCallProp) return set_anchor2(inValue);anchor2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"anchor1") ) { if (inCallProp) return set_anchor1(inValue);anchor1=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_PivotJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PivotJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("anchor2"));
	outFields->push(HX_CSTRING("anchor1"));
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
	HX_CSTRING("set_anchor2"),
	HX_CSTRING("get_anchor2"),
	HX_CSTRING("anchor2"),
	HX_CSTRING("set_anchor1"),
	HX_CSTRING("get_anchor1"),
	HX_CSTRING("anchor1"),
	HX_CSTRING("set_body2"),
	HX_CSTRING("get_body2"),
	HX_CSTRING("body2"),
	HX_CSTRING("set_body1"),
	HX_CSTRING("get_body1"),
	HX_CSTRING("body1"),
	HX_CSTRING("zpp_inner_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PivotJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PivotJoint_obj::__mClass,"__mClass");
};

Class PivotJoint_obj::__mClass;

void PivotJoint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.PivotJoint"), hx::TCanCast< PivotJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PivotJoint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
