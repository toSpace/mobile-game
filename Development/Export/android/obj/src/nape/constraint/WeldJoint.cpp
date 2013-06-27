#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_WeldJoint
#include <nape/constraint/WeldJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_WeldJoint
#include <zpp_nape/constraint/ZPP_WeldJoint.h>
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

Void WeldJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,hx::Null< Float >  __o_phase)
{
HX_STACK_PUSH("WeldJoint::new","nape/constraint/WeldJoint.hx",192);
Float phase = __o_phase.Default(0.0);
{
	HX_STACK_LINE(196)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(361)
	this->zpp_inner_zn = ::zpp_nape::constraint::ZPP_WeldJoint_obj::__new();
	HX_STACK_LINE(362)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(363)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(364)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(366)
	try{
		HX_STACK_LINE(366)
		super::__construct();
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(374)
	{
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body1")));
			HX_STACK_LINE(374)
			::zpp_nape::phys::ZPP_Body inbody1 = (  (((body1 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body1->zpp_inner) );		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(374)
			if (((inbody1 != this->zpp_inner_zn->b1))){
				HX_STACK_LINE(374)
				if (((this->zpp_inner_zn->b1 != null()))){
					HX_STACK_LINE(374)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
						HX_STACK_LINE(374)
						if (((this->zpp_inner_zn->b1 != null()))){
							HX_STACK_LINE(374)
							this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(374)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(374)
						this->zpp_inner_zn->b1->wake();
					}
				}
				HX_STACK_LINE(374)
				this->zpp_inner_zn->b1 = inbody1;
				HX_STACK_LINE(374)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
					HX_STACK_LINE(374)
					if (((inbody1 != null()))){
						HX_STACK_LINE(374)
						inbody1->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(374)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(374)
					this->zpp_inner->wake();
					HX_STACK_LINE(374)
					if (((inbody1 != null()))){
						HX_STACK_LINE(374)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(374)
		if (((this->zpp_inner_zn->b1 == null()))){
			HX_STACK_LINE(374)
			Dynamic();
		}
		else{
			HX_STACK_LINE(374)
			this->zpp_inner_zn->b1->outer;
		}
	}
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body2")));
			HX_STACK_LINE(375)
			::zpp_nape::phys::ZPP_Body inbody2 = (  (((body2 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body2->zpp_inner) );		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(375)
			if (((inbody2 != this->zpp_inner_zn->b2))){
				HX_STACK_LINE(375)
				if (((this->zpp_inner_zn->b2 != null()))){
					HX_STACK_LINE(375)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
						HX_STACK_LINE(375)
						if (((this->zpp_inner_zn->b2 != null()))){
							HX_STACK_LINE(375)
							this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(375)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(375)
						this->zpp_inner_zn->b2->wake();
					}
				}
				HX_STACK_LINE(375)
				this->zpp_inner_zn->b2 = inbody2;
				HX_STACK_LINE(375)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
					HX_STACK_LINE(375)
					if (((inbody2 != null()))){
						HX_STACK_LINE(375)
						inbody2->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(375)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(375)
					this->zpp_inner->wake();
					HX_STACK_LINE(375)
					if (((inbody2 != null()))){
						HX_STACK_LINE(375)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(375)
		if (((this->zpp_inner_zn->b2 == null()))){
			HX_STACK_LINE(375)
			Dynamic();
		}
		else{
			HX_STACK_LINE(375)
			this->zpp_inner_zn->b2->outer;
		}
	}
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
				HX_STACK_LINE(376)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(376)
			if (((anchor1 == null()))){
				HX_STACK_LINE(376)
				hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor1")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(376)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::constraint::WeldJoint_obj *__this){
						HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",376);
						{
							HX_STACK_LINE(376)
							if (((__this->zpp_inner_zn->wrap_a1 == null()))){
								HX_STACK_LINE(376)
								__this->zpp_inner_zn->setup_a1();
							}
							HX_STACK_LINE(376)
							return __this->zpp_inner_zn->wrap_a1;
						}
						return null();
					}
				};
				HX_STACK_LINE(376)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(376)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(376)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(376)
				if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
					HX_STACK_LINE(376)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(376)
					if ((_this1->_immutable)){
						HX_STACK_LINE(376)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(376)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(376)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(376)
				if (((anchor1 == null()))){
					HX_STACK_LINE(376)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor1,::nape::geom::Vec2 _this){
						HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",376);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &anchor1){
									HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",376);
									{
										HX_STACK_LINE(376)
										if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
											HX_STACK_LINE(376)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(376)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(376)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(376)
										return anchor1->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &anchor1){
									HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",376);
									{
										HX_STACK_LINE(376)
										if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
											HX_STACK_LINE(376)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(376)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(376)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(376)
										return anchor1->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(376)
							Float x = _Function_5_1::Block(anchor1);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(anchor1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(376)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(376)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(376)
							{
								HX_STACK_LINE(376)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(376)
								if ((_this1->_immutable)){
									HX_STACK_LINE(376)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(376)
								if (((_this1->_isimmutable != null()))){
									HX_STACK_LINE(376)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(376)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(376)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 _this){
									HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",376);
									{
										HX_STACK_LINE(376)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(376)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(376)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(376)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(376)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 _this){
									HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",376);
									{
										HX_STACK_LINE(376)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(376)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(376)
										{
											HX_STACK_LINE(376)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(376)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(376)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(376)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(376)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(376)
								{
									HX_STACK_LINE(376)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(376)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(376)
									{
									}
								}
								HX_STACK_LINE(376)
								{
									HX_STACK_LINE(376)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(376)
									if (((_this1->_invalidate != null()))){
										HX_STACK_LINE(376)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(376)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(376)
				::nape::geom::Vec2 ret = _Function_4_2::Block(anchor1,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(376)
				if ((anchor1->zpp_inner->weak)){
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
							HX_STACK_LINE(376)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(376)
							if ((_this1->_immutable)){
								HX_STACK_LINE(376)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(376)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(376)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(376)
						if ((anchor1->zpp_inner->_inuse)){
							HX_STACK_LINE(376)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(376)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(376)
						anchor1->zpp_inner->outer = null();
						HX_STACK_LINE(376)
						anchor1->zpp_inner = null();
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(376)
							o->zpp_pool = null();
							HX_STACK_LINE(376)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(376)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(376)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(376)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(376)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(376)
							{
								HX_STACK_LINE(376)
								if (((o->outer != null()))){
									HX_STACK_LINE(376)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(376)
									o->outer = null();
								}
								HX_STACK_LINE(376)
								o->_isimmutable = null();
								HX_STACK_LINE(376)
								o->_validate = null();
								HX_STACK_LINE(376)
								o->_invalidate = null();
							}
							HX_STACK_LINE(376)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(376)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(376)
					true;
				}
				else{
					HX_STACK_LINE(376)
					false;
				}
				HX_STACK_LINE(376)
				ret;
			}
		}
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(376)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(376)
			this->zpp_inner_zn->wrap_a1;
		}
	}
	HX_STACK_LINE(377)
	{
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
				HX_STACK_LINE(377)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(377)
			if (((anchor2 == null()))){
				HX_STACK_LINE(377)
				hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor2")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(377)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::constraint::WeldJoint_obj *__this){
						HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",377);
						{
							HX_STACK_LINE(377)
							if (((__this->zpp_inner_zn->wrap_a2 == null()))){
								HX_STACK_LINE(377)
								__this->zpp_inner_zn->setup_a2();
							}
							HX_STACK_LINE(377)
							return __this->zpp_inner_zn->wrap_a2;
						}
						return null();
					}
				};
				HX_STACK_LINE(377)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(377)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(377)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(377)
				if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
					HX_STACK_LINE(377)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(377)
				{
					HX_STACK_LINE(377)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(377)
					if ((_this1->_immutable)){
						HX_STACK_LINE(377)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(377)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(377)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(377)
				if (((anchor2 == null()))){
					HX_STACK_LINE(377)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 _this,::nape::geom::Vec2 &anchor2){
						HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",377);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &anchor2){
									HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",377);
									{
										HX_STACK_LINE(377)
										if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
											HX_STACK_LINE(377)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(377)
										{
											HX_STACK_LINE(377)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(377)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(377)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(377)
										return anchor2->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &anchor2){
									HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",377);
									{
										HX_STACK_LINE(377)
										if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
											HX_STACK_LINE(377)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(377)
										{
											HX_STACK_LINE(377)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(377)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(377)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(377)
										return anchor2->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(377)
							Float x = _Function_5_1::Block(anchor2);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(anchor2);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(377)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(377)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(377)
							{
								HX_STACK_LINE(377)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(377)
								if ((_this1->_immutable)){
									HX_STACK_LINE(377)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(377)
								if (((_this1->_isimmutable != null()))){
									HX_STACK_LINE(377)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(377)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(377)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 _this){
									HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",377);
									{
										HX_STACK_LINE(377)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(377)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(377)
										{
											HX_STACK_LINE(377)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(377)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(377)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(377)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 _this){
									HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",377);
									{
										HX_STACK_LINE(377)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(377)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(377)
										{
											HX_STACK_LINE(377)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(377)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(377)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(377)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(377)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(377)
								{
									HX_STACK_LINE(377)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(377)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(377)
									{
									}
								}
								HX_STACK_LINE(377)
								{
									HX_STACK_LINE(377)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(377)
									if (((_this1->_invalidate != null()))){
										HX_STACK_LINE(377)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(377)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(377)
				::nape::geom::Vec2 ret = _Function_4_2::Block(_this,anchor2);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(377)
				if ((anchor2->zpp_inner->weak)){
					HX_STACK_LINE(377)
					{
						HX_STACK_LINE(377)
						if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
							HX_STACK_LINE(377)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(377)
						{
							HX_STACK_LINE(377)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(377)
							if ((_this1->_immutable)){
								HX_STACK_LINE(377)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(377)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(377)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(377)
						if ((anchor2->zpp_inner->_inuse)){
							HX_STACK_LINE(377)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(377)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(377)
						anchor2->zpp_inner->outer = null();
						HX_STACK_LINE(377)
						anchor2->zpp_inner = null();
						HX_STACK_LINE(377)
						{
							HX_STACK_LINE(377)
							::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(377)
							o->zpp_pool = null();
							HX_STACK_LINE(377)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(377)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(377)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(377)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(377)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(377)
						{
							HX_STACK_LINE(377)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(377)
							{
								HX_STACK_LINE(377)
								if (((o->outer != null()))){
									HX_STACK_LINE(377)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(377)
									o->outer = null();
								}
								HX_STACK_LINE(377)
								o->_isimmutable = null();
								HX_STACK_LINE(377)
								o->_validate = null();
								HX_STACK_LINE(377)
								o->_invalidate = null();
							}
							HX_STACK_LINE(377)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(377)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(377)
					true;
				}
				else{
					HX_STACK_LINE(377)
					false;
				}
				HX_STACK_LINE(377)
				ret;
			}
		}
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(377)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(377)
			this->zpp_inner_zn->wrap_a2;
		}
	}
	HX_STACK_LINE(378)
	{
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			this->zpp_inner->immutable_midstep(HX_CSTRING("WeldJoint::phase"));
			HX_STACK_LINE(378)
			if (((phase != phase))){
				HX_STACK_LINE(378)
				hx::Throw (HX_CSTRING("Error: WeldJoint::phase cannot be NaN"));
			}
			HX_STACK_LINE(378)
			if (((this->zpp_inner_zn->phase != phase))){
				HX_STACK_LINE(378)
				this->zpp_inner_zn->phase = phase;
				HX_STACK_LINE(378)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(378)
		this->zpp_inner_zn->phase;
	}
}
;
	return null();
}

WeldJoint_obj::~WeldJoint_obj() { }

Dynamic WeldJoint_obj::__CreateEmpty() { return  new WeldJoint_obj; }
hx::ObjectPtr< WeldJoint_obj > WeldJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,hx::Null< Float >  __o_phase)
{  hx::ObjectPtr< WeldJoint_obj > result = new WeldJoint_obj();
	result->__construct(body1,body2,anchor1,anchor2,__o_phase);
	return result;}

Dynamic WeldJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeldJoint_obj > result = new WeldJoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void WeldJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_PUSH("WeldJoint::visitBodies","nape/constraint/WeldJoint.hx",414);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(415)
		if (((((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )) != null()))){
			HX_STACK_LINE(415)
			lambda((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(418)
		if (((bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) ))))))){
			HX_STACK_LINE(418)
			lambda((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )).Cast< Void >();
		}
	}
return null();
}


::nape::geom::Vec3 WeldJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("WeldJoint::bodyImpulse","nape/constraint/WeldJoint.hx",395);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(397)
	if (((body == null()))){
		HX_STACK_LINE(397)
		hx::Throw (HX_CSTRING("Error: Cannot evaluate impulse on null body"));
	}
	HX_STACK_LINE(400)
	if (((bool((body != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )))) && bool((body != ((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) ))))))){
		HX_STACK_LINE(400)
		hx::Throw (HX_CSTRING("Error: Body is not linked to this constraint"));
	}
	HX_STACK_LINE(404)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(404)
		return ::nape::geom::Vec3_obj::get(null(),null(),null());
	}
	else{
		HX_STACK_LINE(407)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(404)
	return null();
}


::nape::geom::MatMN WeldJoint_obj::impulse( ){
	HX_STACK_PUSH("WeldJoint::impulse","nape/constraint/WeldJoint.hx",385);
	HX_STACK_THIS(this);
	HX_STACK_LINE(386)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)3,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		if (((bool(((int)0 >= ret->zpp_inner->m)) || bool(((int)0 >= ret->zpp_inner->n))))){
			HX_STACK_LINE(387)
			hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
		}
		HX_STACK_LINE(387)
		ret->zpp_inner->x[((int)0 * ret->zpp_inner->n)] = this->zpp_inner_zn->jAccx;
	}
	HX_STACK_LINE(388)
	{
		HX_STACK_LINE(388)
		if (((bool(((int)1 >= ret->zpp_inner->m)) || bool(((int)0 >= ret->zpp_inner->n))))){
			HX_STACK_LINE(388)
			hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
		}
		HX_STACK_LINE(388)
		ret->zpp_inner->x[ret->zpp_inner->n] = this->zpp_inner_zn->jAccy;
	}
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(389)
		if (((bool(((int)1 >= ret->zpp_inner->m)) || bool(((int)0 >= ret->zpp_inner->n))))){
			HX_STACK_LINE(389)
			hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
		}
		HX_STACK_LINE(389)
		ret->zpp_inner->x[ret->zpp_inner->n] = this->zpp_inner_zn->jAccz;
	}
	HX_STACK_LINE(390)
	return ret;
}


Float WeldJoint_obj::set_phase( Float phase){
	HX_STACK_PUSH("WeldJoint::set_phase","nape/constraint/WeldJoint.hx",333);
	HX_STACK_THIS(this);
	HX_STACK_ARG(phase,"phase");
	HX_STACK_LINE(334)
	{
		HX_STACK_LINE(335)
		this->zpp_inner->immutable_midstep(HX_CSTRING("WeldJoint::phase"));
		HX_STACK_LINE(337)
		if (((phase != phase))){
			HX_STACK_LINE(337)
			hx::Throw (HX_CSTRING("Error: WeldJoint::phase cannot be NaN"));
		}
		HX_STACK_LINE(341)
		if (((this->zpp_inner_zn->phase != phase))){
			HX_STACK_LINE(342)
			this->zpp_inner_zn->phase = phase;
			HX_STACK_LINE(343)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(346)
	return this->zpp_inner_zn->phase;
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_phase,return )

Float WeldJoint_obj::get_phase( ){
	HX_STACK_PUSH("WeldJoint::get_phase","nape/constraint/WeldJoint.hx",330);
	HX_STACK_THIS(this);
	HX_STACK_LINE(330)
	return this->zpp_inner_zn->phase;
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_phase,return )

::nape::geom::Vec2 WeldJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_PUSH("WeldJoint::set_anchor2","nape/constraint/WeldJoint.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_ARG(anchor2,"anchor2");
	HX_STACK_LINE(310)
	{
		HX_STACK_LINE(311)
		if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
			HX_STACK_LINE(313)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(317)
		if (((anchor2 == null()))){
			HX_STACK_LINE(317)
			hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor2")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(319)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::constraint::WeldJoint_obj *__this){
					HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",319);
					{
						HX_STACK_LINE(319)
						if (((__this->zpp_inner_zn->wrap_a2 == null()))){
							HX_STACK_LINE(319)
							__this->zpp_inner_zn->setup_a2();
						}
						HX_STACK_LINE(319)
						return __this->zpp_inner_zn->wrap_a2;
					}
					return null();
				}
			};
			HX_STACK_LINE(319)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(319)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(319)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(319)
			if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
				HX_STACK_LINE(319)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(319)
				if ((_this1->_immutable)){
					HX_STACK_LINE(319)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(319)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(319)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(319)
			if (((anchor2 == null()))){
				HX_STACK_LINE(319)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 _this,::nape::geom::Vec2 &anchor2){
					HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",319);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &anchor2){
								HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",319);
								{
									HX_STACK_LINE(319)
									if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
										HX_STACK_LINE(319)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(319)
									{
										HX_STACK_LINE(319)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(319)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(319)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(319)
									return anchor2->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &anchor2){
								HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",319);
								{
									HX_STACK_LINE(319)
									if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
										HX_STACK_LINE(319)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(319)
									{
										HX_STACK_LINE(319)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(319)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(319)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(319)
									return anchor2->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(319)
						Float x = _Function_4_1::Block(anchor2);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(anchor2);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(319)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(319)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(319)
							if ((_this1->_immutable)){
								HX_STACK_LINE(319)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(319)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(319)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(319)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(319)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",319);
								{
									HX_STACK_LINE(319)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(319)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(319)
									{
										HX_STACK_LINE(319)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(319)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(319)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(319)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",319);
								{
									HX_STACK_LINE(319)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(319)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(319)
									{
										HX_STACK_LINE(319)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(319)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(319)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(319)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(319)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(319)
							{
								HX_STACK_LINE(319)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(319)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(319)
								{
								}
							}
							HX_STACK_LINE(319)
							{
								HX_STACK_LINE(319)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(319)
								if (((_this1->_invalidate != null()))){
									HX_STACK_LINE(319)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(319)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(319)
			::nape::geom::Vec2 ret = _Function_3_2::Block(_this,anchor2);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(319)
			if ((anchor2->zpp_inner->weak)){
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
						HX_STACK_LINE(319)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(319)
						if ((_this1->_immutable)){
							HX_STACK_LINE(319)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(319)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(319)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(319)
					if ((anchor2->zpp_inner->_inuse)){
						HX_STACK_LINE(319)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(319)
					anchor2->zpp_inner->outer = null();
					HX_STACK_LINE(319)
					anchor2->zpp_inner = null();
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(319)
						o->zpp_pool = null();
						HX_STACK_LINE(319)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(319)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(319)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(319)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(319)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							if (((o->outer != null()))){
								HX_STACK_LINE(319)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(319)
								o->outer = null();
							}
							HX_STACK_LINE(319)
							o->_isimmutable = null();
							HX_STACK_LINE(319)
							o->_validate = null();
							HX_STACK_LINE(319)
							o->_invalidate = null();
						}
						HX_STACK_LINE(319)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(319)
				true;
			}
			else{
				HX_STACK_LINE(319)
				false;
			}
			HX_STACK_LINE(319)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::constraint::WeldJoint_obj *__this){
			HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",321);
			{
				HX_STACK_LINE(321)
				if (((__this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(321)
					__this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(321)
				return __this->zpp_inner_zn->wrap_a2;
			}
			return null();
		}
	};
	HX_STACK_LINE(321)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_anchor2,return )

::nape::geom::Vec2 WeldJoint_obj::get_anchor2( ){
	HX_STACK_PUSH("WeldJoint::get_anchor2","nape/constraint/WeldJoint.hx",305);
	HX_STACK_THIS(this);
	HX_STACK_LINE(306)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(306)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(307)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_anchor2,return )

::nape::geom::Vec2 WeldJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_PUSH("WeldJoint::set_anchor1","nape/constraint/WeldJoint.hx",284);
	HX_STACK_THIS(this);
	HX_STACK_ARG(anchor1,"anchor1");
	HX_STACK_LINE(285)
	{
		HX_STACK_LINE(286)
		if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
			HX_STACK_LINE(288)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(292)
		if (((anchor1 == null()))){
			HX_STACK_LINE(292)
			hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor1")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(294)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::constraint::WeldJoint_obj *__this){
					HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",294);
					{
						HX_STACK_LINE(294)
						if (((__this->zpp_inner_zn->wrap_a1 == null()))){
							HX_STACK_LINE(294)
							__this->zpp_inner_zn->setup_a1();
						}
						HX_STACK_LINE(294)
						return __this->zpp_inner_zn->wrap_a1;
					}
					return null();
				}
			};
			HX_STACK_LINE(294)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(294)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(294)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(294)
			if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
				HX_STACK_LINE(294)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(294)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(294)
				if ((_this1->_immutable)){
					HX_STACK_LINE(294)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(294)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(294)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(294)
			if (((anchor1 == null()))){
				HX_STACK_LINE(294)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor1,::nape::geom::Vec2 _this){
					HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",294);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &anchor1){
								HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",294);
								{
									HX_STACK_LINE(294)
									if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
										HX_STACK_LINE(294)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(294)
									{
										HX_STACK_LINE(294)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(294)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(294)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(294)
									return anchor1->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &anchor1){
								HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",294);
								{
									HX_STACK_LINE(294)
									if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
										HX_STACK_LINE(294)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(294)
									{
										HX_STACK_LINE(294)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(294)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(294)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(294)
									return anchor1->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(294)
						Float x = _Function_4_1::Block(anchor1);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(anchor1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(294)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(294)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(294)
						{
							HX_STACK_LINE(294)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(294)
							if ((_this1->_immutable)){
								HX_STACK_LINE(294)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(294)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(294)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(294)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(294)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",294);
								{
									HX_STACK_LINE(294)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(294)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(294)
									{
										HX_STACK_LINE(294)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(294)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(294)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(294)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",294);
								{
									HX_STACK_LINE(294)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(294)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(294)
									{
										HX_STACK_LINE(294)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(294)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(294)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(294)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(294)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(294)
							{
								HX_STACK_LINE(294)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(294)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(294)
								{
								}
							}
							HX_STACK_LINE(294)
							{
								HX_STACK_LINE(294)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(294)
								if (((_this1->_invalidate != null()))){
									HX_STACK_LINE(294)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(294)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(294)
			::nape::geom::Vec2 ret = _Function_3_2::Block(anchor1,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(294)
			if ((anchor1->zpp_inner->weak)){
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
						HX_STACK_LINE(294)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(294)
						if ((_this1->_immutable)){
							HX_STACK_LINE(294)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(294)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(294)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(294)
					if ((anchor1->zpp_inner->_inuse)){
						HX_STACK_LINE(294)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(294)
					anchor1->zpp_inner->outer = null();
					HX_STACK_LINE(294)
					anchor1->zpp_inner = null();
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(294)
						o->zpp_pool = null();
						HX_STACK_LINE(294)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(294)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(294)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(294)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(294)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(294)
						{
							HX_STACK_LINE(294)
							if (((o->outer != null()))){
								HX_STACK_LINE(294)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(294)
								o->outer = null();
							}
							HX_STACK_LINE(294)
							o->_isimmutable = null();
							HX_STACK_LINE(294)
							o->_validate = null();
							HX_STACK_LINE(294)
							o->_invalidate = null();
						}
						HX_STACK_LINE(294)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(294)
				true;
			}
			else{
				HX_STACK_LINE(294)
				false;
			}
			HX_STACK_LINE(294)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::constraint::WeldJoint_obj *__this){
			HX_STACK_PUSH("*::closure","nape/constraint/WeldJoint.hx",296);
			{
				HX_STACK_LINE(296)
				if (((__this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(296)
					__this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(296)
				return __this->zpp_inner_zn->wrap_a1;
			}
			return null();
		}
	};
	HX_STACK_LINE(296)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_anchor1,return )

::nape::geom::Vec2 WeldJoint_obj::get_anchor1( ){
	HX_STACK_PUSH("WeldJoint::get_anchor1","nape/constraint/WeldJoint.hx",280);
	HX_STACK_THIS(this);
	HX_STACK_LINE(281)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(281)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(282)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_anchor1,return )

::nape::phys::Body WeldJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_PUSH("WeldJoint::set_body2","nape/constraint/WeldJoint.hx",246);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body2,"body2");
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(248)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body2")));
		HX_STACK_LINE(249)
		::zpp_nape::phys::ZPP_Body inbody2 = (  (((body2 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body2->zpp_inner) );		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(250)
		if (((inbody2 != this->zpp_inner_zn->b2))){
			HX_STACK_LINE(251)
			if (((this->zpp_inner_zn->b2 != null()))){
				HX_STACK_LINE(252)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
					HX_STACK_LINE(252)
					if (((this->zpp_inner_zn->b2 != null()))){
						HX_STACK_LINE(254)
						this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(257)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(257)
					this->zpp_inner_zn->b2->wake();
				}
			}
			HX_STACK_LINE(259)
			this->zpp_inner_zn->b2 = inbody2;
			HX_STACK_LINE(260)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
				HX_STACK_LINE(260)
				if (((inbody2 != null()))){
					HX_STACK_LINE(262)
					inbody2->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(265)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(266)
				this->zpp_inner->wake();
				HX_STACK_LINE(267)
				if (((inbody2 != null()))){
					HX_STACK_LINE(267)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(271)
	return (  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_body2,return )

::nape::phys::Body WeldJoint_obj::get_body2( ){
	HX_STACK_PUSH("WeldJoint::get_body2","nape/constraint/WeldJoint.hx",243);
	HX_STACK_THIS(this);
	HX_STACK_LINE(243)
	return (  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_body2,return )

::nape::phys::Body WeldJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_PUSH("WeldJoint::set_body1","nape/constraint/WeldJoint.hx",208);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body1,"body1");
	HX_STACK_LINE(209)
	{
		HX_STACK_LINE(210)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body1")));
		HX_STACK_LINE(211)
		::zpp_nape::phys::ZPP_Body inbody1 = (  (((body1 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body1->zpp_inner) );		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(212)
		if (((inbody1 != this->zpp_inner_zn->b1))){
			HX_STACK_LINE(213)
			if (((this->zpp_inner_zn->b1 != null()))){
				HX_STACK_LINE(214)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
					HX_STACK_LINE(214)
					if (((this->zpp_inner_zn->b1 != null()))){
						HX_STACK_LINE(216)
						this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(219)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(219)
					this->zpp_inner_zn->b1->wake();
				}
			}
			HX_STACK_LINE(221)
			this->zpp_inner_zn->b1 = inbody1;
			HX_STACK_LINE(222)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
				HX_STACK_LINE(222)
				if (((inbody1 != null()))){
					HX_STACK_LINE(224)
					inbody1->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(227)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(228)
				this->zpp_inner->wake();
				HX_STACK_LINE(229)
				if (((inbody1 != null()))){
					HX_STACK_LINE(229)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(233)
	return (  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(WeldJoint_obj,set_body1,return )

::nape::phys::Body WeldJoint_obj::get_body1( ){
	HX_STACK_PUSH("WeldJoint::get_body1","nape/constraint/WeldJoint.hx",205);
	HX_STACK_THIS(this);
	HX_STACK_LINE(205)
	return (  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(WeldJoint_obj,get_body1,return )


WeldJoint_obj::WeldJoint_obj()
{
}

void WeldJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeldJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WeldJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic WeldJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"phase") ) { return get_phase(); }
		if (HX_FIELD_EQ(inName,"body2") ) { return get_body2(); }
		if (HX_FIELD_EQ(inName,"body1") ) { return get_body1(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { return get_anchor2(); }
		if (HX_FIELD_EQ(inName,"anchor1") ) { return get_anchor1(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_phase") ) { return set_phase_dyn(); }
		if (HX_FIELD_EQ(inName,"get_phase") ) { return get_phase_dyn(); }
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

Dynamic WeldJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"phase") ) { return set_phase(inValue); }
		if (HX_FIELD_EQ(inName,"body2") ) { return set_body2(inValue); }
		if (HX_FIELD_EQ(inName,"body1") ) { return set_body1(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor2") ) { return set_anchor2(inValue); }
		if (HX_FIELD_EQ(inName,"anchor1") ) { return set_anchor1(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_WeldJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WeldJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("phase"));
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
	HX_CSTRING("set_phase"),
	HX_CSTRING("get_phase"),
	HX_CSTRING("set_anchor2"),
	HX_CSTRING("get_anchor2"),
	HX_CSTRING("set_anchor1"),
	HX_CSTRING("get_anchor1"),
	HX_CSTRING("set_body2"),
	HX_CSTRING("get_body2"),
	HX_CSTRING("set_body1"),
	HX_CSTRING("get_body1"),
	HX_CSTRING("zpp_inner_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeldJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeldJoint_obj::__mClass,"__mClass");
};

Class WeldJoint_obj::__mClass;

void WeldJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.WeldJoint"), hx::TCanCast< WeldJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void WeldJoint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
