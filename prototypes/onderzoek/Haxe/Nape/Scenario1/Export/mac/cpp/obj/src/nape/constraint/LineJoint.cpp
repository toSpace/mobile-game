#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_LineJoint
#include <nape/constraint/LineJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_LineJoint
#include <zpp_nape/constraint/ZPP_LineJoint.h>
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

Void LineJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,::nape::geom::Vec2 direction,Float jointMin,Float jointMax)
{
HX_STACK_PUSH("LineJoint::new","nape/constraint/LineJoint.hx",208);
{
	HX_STACK_LINE(212)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(430)
	this->zpp_inner_zn = ::zpp_nape::constraint::ZPP_LineJoint_obj::__new();
	HX_STACK_LINE(431)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(432)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(433)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(435)
	try{
		HX_STACK_LINE(435)
		super::__construct();
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body1")));
			HX_STACK_LINE(443)
			::zpp_nape::phys::ZPP_Body inbody1 = (  (((body1 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body1->zpp_inner) );		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(443)
			if (((inbody1 != this->zpp_inner_zn->b1))){
				HX_STACK_LINE(443)
				if (((this->zpp_inner_zn->b1 != null()))){
					HX_STACK_LINE(443)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
						HX_STACK_LINE(443)
						if (((this->zpp_inner_zn->b1 != null()))){
							HX_STACK_LINE(443)
							this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(443)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(443)
						this->zpp_inner_zn->b1->wake();
					}
				}
				HX_STACK_LINE(443)
				this->zpp_inner_zn->b1 = inbody1;
				HX_STACK_LINE(443)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
					HX_STACK_LINE(443)
					if (((inbody1 != null()))){
						HX_STACK_LINE(443)
						inbody1->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(443)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(443)
					this->zpp_inner->wake();
					HX_STACK_LINE(443)
					if (((inbody1 != null()))){
						HX_STACK_LINE(443)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(443)
		if (((this->zpp_inner_zn->b1 == null()))){
			HX_STACK_LINE(443)
			Dynamic();
		}
		else{
			HX_STACK_LINE(443)
			this->zpp_inner_zn->b1->outer;
		}
	}
	HX_STACK_LINE(444)
	{
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body2")));
			HX_STACK_LINE(444)
			::zpp_nape::phys::ZPP_Body inbody2 = (  (((body2 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body2->zpp_inner) );		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(444)
			if (((inbody2 != this->zpp_inner_zn->b2))){
				HX_STACK_LINE(444)
				if (((this->zpp_inner_zn->b2 != null()))){
					HX_STACK_LINE(444)
					if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
						HX_STACK_LINE(444)
						if (((this->zpp_inner_zn->b2 != null()))){
							HX_STACK_LINE(444)
							this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
						}
					}
					HX_STACK_LINE(444)
					if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
						HX_STACK_LINE(444)
						this->zpp_inner_zn->b2->wake();
					}
				}
				HX_STACK_LINE(444)
				this->zpp_inner_zn->b2 = inbody2;
				HX_STACK_LINE(444)
				if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
					HX_STACK_LINE(444)
					if (((inbody2 != null()))){
						HX_STACK_LINE(444)
						inbody2->constraints->add(this->zpp_inner);
					}
				}
				HX_STACK_LINE(444)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(444)
					this->zpp_inner->wake();
					HX_STACK_LINE(444)
					if (((inbody2 != null()))){
						HX_STACK_LINE(444)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(444)
		if (((this->zpp_inner_zn->b2 == null()))){
			HX_STACK_LINE(444)
			Dynamic();
		}
		else{
			HX_STACK_LINE(444)
			this->zpp_inner_zn->b2->outer;
		}
	}
	HX_STACK_LINE(445)
	{
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
				HX_STACK_LINE(445)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(445)
			if (((anchor1 == null()))){
				HX_STACK_LINE(445)
				hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor1")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(445)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::constraint::LineJoint_obj *__this){
						HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",445);
						{
							HX_STACK_LINE(445)
							if (((__this->zpp_inner_zn->wrap_a1 == null()))){
								HX_STACK_LINE(445)
								__this->zpp_inner_zn->setup_a1();
							}
							HX_STACK_LINE(445)
							return __this->zpp_inner_zn->wrap_a1;
						}
						return null();
					}
				};
				HX_STACK_LINE(445)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(445)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(445)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(445)
				if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
					HX_STACK_LINE(445)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(445)
					if ((_this1->_immutable)){
						HX_STACK_LINE(445)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(445)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(445)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(445)
				if (((anchor1 == null()))){
					HX_STACK_LINE(445)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor1,::nape::geom::Vec2 &_this){
						HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",445);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &anchor1){
									HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",445);
									{
										HX_STACK_LINE(445)
										if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
											HX_STACK_LINE(445)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(445)
										{
											HX_STACK_LINE(445)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(445)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(445)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(445)
										return anchor1->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &anchor1){
									HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",445);
									{
										HX_STACK_LINE(445)
										if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
											HX_STACK_LINE(445)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(445)
										{
											HX_STACK_LINE(445)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(445)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(445)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(445)
										return anchor1->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(445)
							Float x = _Function_5_1::Block(anchor1);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(anchor1);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(445)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(445)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(445)
								if ((_this1->_immutable)){
									HX_STACK_LINE(445)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(445)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(445)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(445)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(445)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",445);
									{
										HX_STACK_LINE(445)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(445)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(445)
										{
											HX_STACK_LINE(445)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(445)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(445)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(445)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",445);
									{
										HX_STACK_LINE(445)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(445)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(445)
										{
											HX_STACK_LINE(445)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(445)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(445)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(445)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(445)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(445)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(445)
									{
									}
									HX_STACK_LINE(445)
									{
									}
								}
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(445)
									if (((_this1->_invalidate_dyn() != null()))){
										HX_STACK_LINE(445)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(445)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(445)
				::nape::geom::Vec2 ret = _Function_4_2::Block(anchor1,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(445)
				if ((anchor1->zpp_inner->weak)){
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
							HX_STACK_LINE(445)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(445)
							if ((_this1->_immutable)){
								HX_STACK_LINE(445)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(445)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(445)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(445)
						if ((anchor1->zpp_inner->_inuse)){
							HX_STACK_LINE(445)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(445)
						anchor1->zpp_inner->outer = null();
						HX_STACK_LINE(445)
						anchor1->zpp_inner = null();
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(445)
							{
							}
							HX_STACK_LINE(445)
							o->zpp_pool = null();
							HX_STACK_LINE(445)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(445)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(445)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(445)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(445)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(445)
							{
							}
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								if (((o->outer != null()))){
									HX_STACK_LINE(445)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(445)
									o->outer = null();
								}
								HX_STACK_LINE(445)
								o->_isimmutable = null();
								HX_STACK_LINE(445)
								o->_validate = null();
								HX_STACK_LINE(445)
								o->_invalidate = null();
							}
							HX_STACK_LINE(445)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(445)
					true;
				}
				else{
					HX_STACK_LINE(445)
					false;
				}
				HX_STACK_LINE(445)
				ret;
			}
		}
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			if (((this->zpp_inner_zn->wrap_a1 == null()))){
				HX_STACK_LINE(445)
				this->zpp_inner_zn->setup_a1();
			}
			HX_STACK_LINE(445)
			this->zpp_inner_zn->wrap_a1;
		}
	}
	HX_STACK_LINE(446)
	{
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
				HX_STACK_LINE(446)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(446)
			if (((anchor2 == null()))){
				HX_STACK_LINE(446)
				hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor2")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(446)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::constraint::LineJoint_obj *__this){
						HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",446);
						{
							HX_STACK_LINE(446)
							if (((__this->zpp_inner_zn->wrap_a2 == null()))){
								HX_STACK_LINE(446)
								__this->zpp_inner_zn->setup_a2();
							}
							HX_STACK_LINE(446)
							return __this->zpp_inner_zn->wrap_a2;
						}
						return null();
					}
				};
				HX_STACK_LINE(446)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(446)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(446)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(446)
				if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
					HX_STACK_LINE(446)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(446)
					if ((_this1->_immutable)){
						HX_STACK_LINE(446)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(446)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(446)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(446)
				if (((anchor2 == null()))){
					HX_STACK_LINE(446)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor2,::nape::geom::Vec2 &_this){
						HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",446);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &anchor2){
									HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",446);
									{
										HX_STACK_LINE(446)
										if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
											HX_STACK_LINE(446)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(446)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(446)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(446)
										return anchor2->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &anchor2){
									HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",446);
									{
										HX_STACK_LINE(446)
										if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
											HX_STACK_LINE(446)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(446)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(446)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(446)
										return anchor2->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(446)
							Float x = _Function_5_1::Block(anchor2);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(anchor2);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(446)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(446)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(446)
								if ((_this1->_immutable)){
									HX_STACK_LINE(446)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(446)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(446)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(446)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(446)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",446);
									{
										HX_STACK_LINE(446)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(446)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(446)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(446)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(446)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",446);
									{
										HX_STACK_LINE(446)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(446)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(446)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(446)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(446)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(446)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(446)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(446)
									{
									}
									HX_STACK_LINE(446)
									{
									}
								}
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(446)
									if (((_this1->_invalidate_dyn() != null()))){
										HX_STACK_LINE(446)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(446)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(446)
				::nape::geom::Vec2 ret = _Function_4_2::Block(anchor2,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(446)
				if ((anchor2->zpp_inner->weak)){
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
							HX_STACK_LINE(446)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(446)
							if ((_this1->_immutable)){
								HX_STACK_LINE(446)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(446)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(446)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(446)
						if ((anchor2->zpp_inner->_inuse)){
							HX_STACK_LINE(446)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(446)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(446)
						anchor2->zpp_inner->outer = null();
						HX_STACK_LINE(446)
						anchor2->zpp_inner = null();
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(446)
							{
							}
							HX_STACK_LINE(446)
							o->zpp_pool = null();
							HX_STACK_LINE(446)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(446)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(446)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(446)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(446)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(446)
							{
							}
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								if (((o->outer != null()))){
									HX_STACK_LINE(446)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(446)
									o->outer = null();
								}
								HX_STACK_LINE(446)
								o->_isimmutable = null();
								HX_STACK_LINE(446)
								o->_validate = null();
								HX_STACK_LINE(446)
								o->_invalidate = null();
							}
							HX_STACK_LINE(446)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(446)
					true;
				}
				else{
					HX_STACK_LINE(446)
					false;
				}
				HX_STACK_LINE(446)
				ret;
			}
		}
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			if (((this->zpp_inner_zn->wrap_a2 == null()))){
				HX_STACK_LINE(446)
				this->zpp_inner_zn->setup_a2();
			}
			HX_STACK_LINE(446)
			this->zpp_inner_zn->wrap_a2;
		}
	}
	HX_STACK_LINE(447)
	{
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			if (((bool((direction != null())) && bool(direction->zpp_disp)))){
				HX_STACK_LINE(447)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(447)
			if (((direction == null()))){
				HX_STACK_LINE(447)
				hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("direction")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(447)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::constraint::LineJoint_obj *__this){
						HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",447);
						{
							HX_STACK_LINE(447)
							if (((__this->zpp_inner_zn->wrap_n == null()))){
								HX_STACK_LINE(447)
								__this->zpp_inner_zn->setup_n();
							}
							HX_STACK_LINE(447)
							return __this->zpp_inner_zn->wrap_n;
						}
						return null();
					}
				};
				HX_STACK_LINE(447)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(447)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(447)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(447)
				if (((bool((direction != null())) && bool(direction->zpp_disp)))){
					HX_STACK_LINE(447)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(447)
					if ((_this1->_immutable)){
						HX_STACK_LINE(447)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(447)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(447)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(447)
				if (((direction == null()))){
					HX_STACK_LINE(447)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &direction,::nape::geom::Vec2 &_this){
						HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",447);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &direction){
									HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",447);
									{
										HX_STACK_LINE(447)
										if (((bool((direction != null())) && bool(direction->zpp_disp)))){
											HX_STACK_LINE(447)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(447)
										{
											HX_STACK_LINE(447)
											::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(447)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(447)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(447)
										return direction->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &direction){
									HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",447);
									{
										HX_STACK_LINE(447)
										if (((bool((direction != null())) && bool(direction->zpp_disp)))){
											HX_STACK_LINE(447)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(447)
										{
											HX_STACK_LINE(447)
											::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(447)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(447)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(447)
										return direction->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(447)
							Float x = _Function_5_1::Block(direction);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(direction);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(447)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(447)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(447)
							{
								HX_STACK_LINE(447)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(447)
								if ((_this1->_immutable)){
									HX_STACK_LINE(447)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(447)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(447)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(447)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(447)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",447);
									{
										HX_STACK_LINE(447)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(447)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(447)
										{
											HX_STACK_LINE(447)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(447)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(447)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(447)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",447);
									{
										HX_STACK_LINE(447)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(447)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(447)
										{
											HX_STACK_LINE(447)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(447)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(447)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(447)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(447)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(447)
								{
									HX_STACK_LINE(447)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(447)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(447)
									{
									}
									HX_STACK_LINE(447)
									{
									}
								}
								HX_STACK_LINE(447)
								{
									HX_STACK_LINE(447)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(447)
									if (((_this1->_invalidate_dyn() != null()))){
										HX_STACK_LINE(447)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(447)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(447)
				::nape::geom::Vec2 ret = _Function_4_2::Block(direction,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(447)
				if ((direction->zpp_inner->weak)){
					HX_STACK_LINE(447)
					{
						HX_STACK_LINE(447)
						if (((bool((direction != null())) && bool(direction->zpp_disp)))){
							HX_STACK_LINE(447)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(447)
						{
							HX_STACK_LINE(447)
							::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(447)
							if ((_this1->_immutable)){
								HX_STACK_LINE(447)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(447)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(447)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(447)
						if ((direction->zpp_inner->_inuse)){
							HX_STACK_LINE(447)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(447)
						::zpp_nape::geom::ZPP_Vec2 inner = direction->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(447)
						direction->zpp_inner->outer = null();
						HX_STACK_LINE(447)
						direction->zpp_inner = null();
						HX_STACK_LINE(447)
						{
							HX_STACK_LINE(447)
							::nape::geom::Vec2 o = direction;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(447)
							{
							}
							HX_STACK_LINE(447)
							o->zpp_pool = null();
							HX_STACK_LINE(447)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(447)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(447)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(447)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(447)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(447)
						{
							HX_STACK_LINE(447)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(447)
							{
							}
							HX_STACK_LINE(447)
							{
								HX_STACK_LINE(447)
								if (((o->outer != null()))){
									HX_STACK_LINE(447)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(447)
									o->outer = null();
								}
								HX_STACK_LINE(447)
								o->_isimmutable = null();
								HX_STACK_LINE(447)
								o->_validate = null();
								HX_STACK_LINE(447)
								o->_invalidate = null();
							}
							HX_STACK_LINE(447)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(447)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(447)
					true;
				}
				else{
					HX_STACK_LINE(447)
					false;
				}
				HX_STACK_LINE(447)
				ret;
			}
		}
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			if (((this->zpp_inner_zn->wrap_n == null()))){
				HX_STACK_LINE(447)
				this->zpp_inner_zn->setup_n();
			}
			HX_STACK_LINE(447)
			this->zpp_inner_zn->wrap_n;
		}
	}
	HX_STACK_LINE(448)
	{
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(448)
			this->zpp_inner->immutable_midstep(HX_CSTRING("LineJoint::jointMin"));
			HX_STACK_LINE(448)
			if (((jointMin != jointMin))){
				HX_STACK_LINE(448)
				hx::Throw (HX_CSTRING("Error: AngleJoint::jointMin cannot be NaN"));
			}
			HX_STACK_LINE(448)
			if (((this->zpp_inner_zn->jointMin != jointMin))){
				HX_STACK_LINE(448)
				this->zpp_inner_zn->jointMin = jointMin;
				HX_STACK_LINE(448)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(448)
		this->zpp_inner_zn->jointMin;
	}
	HX_STACK_LINE(449)
	{
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			this->zpp_inner->immutable_midstep(HX_CSTRING("LineJoint::jointMax"));
			HX_STACK_LINE(449)
			if (((jointMax != jointMax))){
				HX_STACK_LINE(449)
				hx::Throw (HX_CSTRING("Error: AngleJoint::jointMax cannot be NaN"));
			}
			HX_STACK_LINE(449)
			if (((this->zpp_inner_zn->jointMax != jointMax))){
				HX_STACK_LINE(449)
				this->zpp_inner_zn->jointMax = jointMax;
				HX_STACK_LINE(449)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(449)
		this->zpp_inner_zn->jointMax;
	}
}
;
	return null();
}

LineJoint_obj::~LineJoint_obj() { }

Dynamic LineJoint_obj::__CreateEmpty() { return  new LineJoint_obj; }
hx::ObjectPtr< LineJoint_obj > LineJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,::nape::geom::Vec2 direction,Float jointMin,Float jointMax)
{  hx::ObjectPtr< LineJoint_obj > result = new LineJoint_obj();
	result->__construct(body1,body2,anchor1,anchor2,direction,jointMin,jointMax);
	return result;}

Dynamic LineJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineJoint_obj > result = new LineJoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void LineJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_PUSH("LineJoint::visitBodies","nape/constraint/LineJoint.hx",484);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(485)
		if (((((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )) != null()))){
			HX_STACK_LINE(485)
			lambda((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )).Cast< Void >();
		}
		HX_STACK_LINE(488)
		if (((bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != null())) && bool((((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )) != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) ))))))){
			HX_STACK_LINE(488)
			lambda((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) )).Cast< Void >();
		}
	}
return null();
}


::nape::geom::Vec3 LineJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("LineJoint::bodyImpulse","nape/constraint/LineJoint.hx",465);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(467)
	if (((body == null()))){
		HX_STACK_LINE(467)
		hx::Throw (HX_CSTRING("Error: Cannot evaluate impulse on null body"));
	}
	HX_STACK_LINE(470)
	if (((bool((body != ((  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) )))) && bool((body != ((  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) ))))))){
		HX_STACK_LINE(470)
		hx::Throw (HX_CSTRING("Error: Body is not linked to this constraint"));
	}
	HX_STACK_LINE(474)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(474)
		return ::nape::geom::Vec3_obj::get(null(),null(),null());
	}
	else{
		HX_STACK_LINE(477)
		return this->zpp_inner_zn->bodyImpulse(body->zpp_inner);
	}
	HX_STACK_LINE(474)
	return null();
}


::nape::geom::MatMN LineJoint_obj::impulse( ){
	HX_STACK_PUSH("LineJoint::impulse","nape/constraint/LineJoint.hx",456);
	HX_STACK_THIS(this);
	HX_STACK_LINE(457)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)2,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(458)
	{
		HX_STACK_LINE(458)
		if (((bool(((int)0 >= ret->zpp_inner->m)) || bool(((int)0 >= ret->zpp_inner->n))))){
			HX_STACK_LINE(458)
			hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
		}
		HX_STACK_LINE(458)
		ret->zpp_inner->x[((int)0 * ret->zpp_inner->n)] = this->zpp_inner_zn->jAccx;
	}
	HX_STACK_LINE(459)
	{
		HX_STACK_LINE(459)
		if (((bool(((int)1 >= ret->zpp_inner->m)) || bool(((int)0 >= ret->zpp_inner->n))))){
			HX_STACK_LINE(459)
			hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
		}
		HX_STACK_LINE(459)
		ret->zpp_inner->x[ret->zpp_inner->n] = this->zpp_inner_zn->jAccy;
	}
	HX_STACK_LINE(460)
	return ret;
}


Float LineJoint_obj::set_jointMax( Float jointMax){
	HX_STACK_PUSH("LineJoint::set_jointMax","nape/constraint/LineJoint.hx",400);
	HX_STACK_THIS(this);
	HX_STACK_ARG(jointMax,"jointMax");
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(402)
		this->zpp_inner->immutable_midstep(HX_CSTRING("LineJoint::jointMax"));
		HX_STACK_LINE(404)
		if (((jointMax != jointMax))){
			HX_STACK_LINE(404)
			hx::Throw (HX_CSTRING("Error: AngleJoint::jointMax cannot be NaN"));
		}
		HX_STACK_LINE(408)
		if (((this->zpp_inner_zn->jointMax != jointMax))){
			HX_STACK_LINE(409)
			this->zpp_inner_zn->jointMax = jointMax;
			HX_STACK_LINE(410)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(413)
	return this->zpp_inner_zn->jointMax;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_jointMax,return )

Float LineJoint_obj::get_jointMax( ){
	HX_STACK_PUSH("LineJoint::get_jointMax","nape/constraint/LineJoint.hx",397);
	HX_STACK_THIS(this);
	HX_STACK_LINE(397)
	return this->zpp_inner_zn->jointMax;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_jointMax,return )

Float LineJoint_obj::set_jointMin( Float jointMin){
	HX_STACK_PUSH("LineJoint::set_jointMin","nape/constraint/LineJoint.hx",375);
	HX_STACK_THIS(this);
	HX_STACK_ARG(jointMin,"jointMin");
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(377)
		this->zpp_inner->immutable_midstep(HX_CSTRING("LineJoint::jointMin"));
		HX_STACK_LINE(379)
		if (((jointMin != jointMin))){
			HX_STACK_LINE(379)
			hx::Throw (HX_CSTRING("Error: AngleJoint::jointMin cannot be NaN"));
		}
		HX_STACK_LINE(383)
		if (((this->zpp_inner_zn->jointMin != jointMin))){
			HX_STACK_LINE(384)
			this->zpp_inner_zn->jointMin = jointMin;
			HX_STACK_LINE(385)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(388)
	return this->zpp_inner_zn->jointMin;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_jointMin,return )

Float LineJoint_obj::get_jointMin( ){
	HX_STACK_PUSH("LineJoint::get_jointMin","nape/constraint/LineJoint.hx",372);
	HX_STACK_THIS(this);
	HX_STACK_LINE(372)
	return this->zpp_inner_zn->jointMin;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_jointMin,return )

::nape::geom::Vec2 LineJoint_obj::set_direction( ::nape::geom::Vec2 direction){
	HX_STACK_PUSH("LineJoint::set_direction","nape/constraint/LineJoint.hx",351);
	HX_STACK_THIS(this);
	HX_STACK_ARG(direction,"direction");
	HX_STACK_LINE(352)
	{
		HX_STACK_LINE(353)
		if (((bool((direction != null())) && bool(direction->zpp_disp)))){
			HX_STACK_LINE(355)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(359)
		if (((direction == null()))){
			HX_STACK_LINE(359)
			hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("direction")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(361)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::constraint::LineJoint_obj *__this){
					HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",361);
					{
						HX_STACK_LINE(361)
						if (((__this->zpp_inner_zn->wrap_n == null()))){
							HX_STACK_LINE(361)
							__this->zpp_inner_zn->setup_n();
						}
						HX_STACK_LINE(361)
						return __this->zpp_inner_zn->wrap_n;
					}
					return null();
				}
			};
			HX_STACK_LINE(361)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(361)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(361)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(361)
			if (((bool((direction != null())) && bool(direction->zpp_disp)))){
				HX_STACK_LINE(361)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(361)
				if ((_this1->_immutable)){
					HX_STACK_LINE(361)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(361)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(361)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(361)
			if (((direction == null()))){
				HX_STACK_LINE(361)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &direction,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",361);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &direction){
								HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",361);
								{
									HX_STACK_LINE(361)
									if (((bool((direction != null())) && bool(direction->zpp_disp)))){
										HX_STACK_LINE(361)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(361)
									{
										HX_STACK_LINE(361)
										::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(361)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(361)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(361)
									return direction->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &direction){
								HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",361);
								{
									HX_STACK_LINE(361)
									if (((bool((direction != null())) && bool(direction->zpp_disp)))){
										HX_STACK_LINE(361)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(361)
									{
										HX_STACK_LINE(361)
										::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(361)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(361)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(361)
									return direction->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(361)
						Float x = _Function_4_1::Block(direction);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(direction);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(361)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(361)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(361)
						{
							HX_STACK_LINE(361)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(361)
							if ((_this1->_immutable)){
								HX_STACK_LINE(361)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(361)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(361)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(361)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(361)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",361);
								{
									HX_STACK_LINE(361)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(361)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(361)
									{
										HX_STACK_LINE(361)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(361)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(361)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(361)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",361);
								{
									HX_STACK_LINE(361)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(361)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(361)
									{
										HX_STACK_LINE(361)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(361)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(361)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(361)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(361)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(361)
							{
								HX_STACK_LINE(361)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(361)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(361)
								{
								}
								HX_STACK_LINE(361)
								{
								}
							}
							HX_STACK_LINE(361)
							{
								HX_STACK_LINE(361)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(361)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(361)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(361)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(361)
			::nape::geom::Vec2 ret = _Function_3_2::Block(direction,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(361)
			if ((direction->zpp_inner->weak)){
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					if (((bool((direction != null())) && bool(direction->zpp_disp)))){
						HX_STACK_LINE(361)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(361)
						if ((_this1->_immutable)){
							HX_STACK_LINE(361)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(361)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(361)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(361)
					if ((direction->zpp_inner->_inuse)){
						HX_STACK_LINE(361)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(361)
					::zpp_nape::geom::ZPP_Vec2 inner = direction->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(361)
					direction->zpp_inner->outer = null();
					HX_STACK_LINE(361)
					direction->zpp_inner = null();
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						::nape::geom::Vec2 o = direction;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(361)
						{
						}
						HX_STACK_LINE(361)
						o->zpp_pool = null();
						HX_STACK_LINE(361)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(361)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(361)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(361)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(361)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(361)
						{
						}
						HX_STACK_LINE(361)
						{
							HX_STACK_LINE(361)
							if (((o->outer != null()))){
								HX_STACK_LINE(361)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(361)
								o->outer = null();
							}
							HX_STACK_LINE(361)
							o->_isimmutable = null();
							HX_STACK_LINE(361)
							o->_validate = null();
							HX_STACK_LINE(361)
							o->_invalidate = null();
						}
						HX_STACK_LINE(361)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(361)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(361)
				true;
			}
			else{
				HX_STACK_LINE(361)
				false;
			}
			HX_STACK_LINE(361)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::constraint::LineJoint_obj *__this){
			HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",363);
			{
				HX_STACK_LINE(363)
				if (((__this->zpp_inner_zn->wrap_n == null()))){
					HX_STACK_LINE(363)
					__this->zpp_inner_zn->setup_n();
				}
				HX_STACK_LINE(363)
				return __this->zpp_inner_zn->wrap_n;
			}
			return null();
		}
	};
	HX_STACK_LINE(363)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_direction,return )

::nape::geom::Vec2 LineJoint_obj::get_direction( ){
	HX_STACK_PUSH("LineJoint::get_direction","nape/constraint/LineJoint.hx",347);
	HX_STACK_THIS(this);
	HX_STACK_LINE(348)
	if (((this->zpp_inner_zn->wrap_n == null()))){
		HX_STACK_LINE(348)
		this->zpp_inner_zn->setup_n();
	}
	HX_STACK_LINE(349)
	return this->zpp_inner_zn->wrap_n;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_direction,return )

::nape::geom::Vec2 LineJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_PUSH("LineJoint::set_anchor2","nape/constraint/LineJoint.hx",325);
	HX_STACK_THIS(this);
	HX_STACK_ARG(anchor2,"anchor2");
	HX_STACK_LINE(326)
	{
		HX_STACK_LINE(327)
		if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
			HX_STACK_LINE(329)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(333)
		if (((anchor2 == null()))){
			HX_STACK_LINE(333)
			hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor2")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(335)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::constraint::LineJoint_obj *__this){
					HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",335);
					{
						HX_STACK_LINE(335)
						if (((__this->zpp_inner_zn->wrap_a2 == null()))){
							HX_STACK_LINE(335)
							__this->zpp_inner_zn->setup_a2();
						}
						HX_STACK_LINE(335)
						return __this->zpp_inner_zn->wrap_a2;
					}
					return null();
				}
			};
			HX_STACK_LINE(335)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(335)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(335)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(335)
			if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
				HX_STACK_LINE(335)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(335)
				if ((_this1->_immutable)){
					HX_STACK_LINE(335)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(335)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(335)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(335)
			if (((anchor2 == null()))){
				HX_STACK_LINE(335)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor2,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",335);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &anchor2){
								HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",335);
								{
									HX_STACK_LINE(335)
									if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
										HX_STACK_LINE(335)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(335)
									{
										HX_STACK_LINE(335)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(335)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(335)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(335)
									return anchor2->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &anchor2){
								HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",335);
								{
									HX_STACK_LINE(335)
									if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
										HX_STACK_LINE(335)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(335)
									{
										HX_STACK_LINE(335)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(335)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(335)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(335)
									return anchor2->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(335)
						Float x = _Function_4_1::Block(anchor2);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(anchor2);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(335)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(335)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(335)
							if ((_this1->_immutable)){
								HX_STACK_LINE(335)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(335)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(335)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(335)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(335)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",335);
								{
									HX_STACK_LINE(335)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(335)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(335)
									{
										HX_STACK_LINE(335)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(335)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(335)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(335)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",335);
								{
									HX_STACK_LINE(335)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(335)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(335)
									{
										HX_STACK_LINE(335)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(335)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(335)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(335)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(335)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(335)
							{
								HX_STACK_LINE(335)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(335)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(335)
								{
								}
								HX_STACK_LINE(335)
								{
								}
							}
							HX_STACK_LINE(335)
							{
								HX_STACK_LINE(335)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(335)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(335)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(335)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(335)
			::nape::geom::Vec2 ret = _Function_3_2::Block(anchor2,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(335)
			if ((anchor2->zpp_inner->weak)){
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					if (((bool((anchor2 != null())) && bool(anchor2->zpp_disp)))){
						HX_STACK_LINE(335)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(335)
						if ((_this1->_immutable)){
							HX_STACK_LINE(335)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(335)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(335)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(335)
					if ((anchor2->zpp_inner->_inuse)){
						HX_STACK_LINE(335)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(335)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(335)
					anchor2->zpp_inner->outer = null();
					HX_STACK_LINE(335)
					anchor2->zpp_inner = null();
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(335)
						{
						}
						HX_STACK_LINE(335)
						o->zpp_pool = null();
						HX_STACK_LINE(335)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(335)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(335)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(335)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(335)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(335)
						{
						}
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							if (((o->outer != null()))){
								HX_STACK_LINE(335)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(335)
								o->outer = null();
							}
							HX_STACK_LINE(335)
							o->_isimmutable = null();
							HX_STACK_LINE(335)
							o->_validate = null();
							HX_STACK_LINE(335)
							o->_invalidate = null();
						}
						HX_STACK_LINE(335)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(335)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(335)
				true;
			}
			else{
				HX_STACK_LINE(335)
				false;
			}
			HX_STACK_LINE(335)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::constraint::LineJoint_obj *__this){
			HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",337);
			{
				HX_STACK_LINE(337)
				if (((__this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(337)
					__this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(337)
				return __this->zpp_inner_zn->wrap_a2;
			}
			return null();
		}
	};
	HX_STACK_LINE(337)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_anchor2,return )

::nape::geom::Vec2 LineJoint_obj::get_anchor2( ){
	HX_STACK_PUSH("LineJoint::get_anchor2","nape/constraint/LineJoint.hx",321);
	HX_STACK_THIS(this);
	HX_STACK_LINE(322)
	if (((this->zpp_inner_zn->wrap_a2 == null()))){
		HX_STACK_LINE(322)
		this->zpp_inner_zn->setup_a2();
	}
	HX_STACK_LINE(323)
	return this->zpp_inner_zn->wrap_a2;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_anchor2,return )

::nape::geom::Vec2 LineJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_PUSH("LineJoint::set_anchor1","nape/constraint/LineJoint.hx",300);
	HX_STACK_THIS(this);
	HX_STACK_ARG(anchor1,"anchor1");
	HX_STACK_LINE(301)
	{
		HX_STACK_LINE(302)
		if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
			HX_STACK_LINE(304)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(308)
		if (((anchor1 == null()))){
			HX_STACK_LINE(308)
			hx::Throw (((HX_CSTRING("Error: Constraint::") + HX_CSTRING("anchor1")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(310)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::constraint::LineJoint_obj *__this){
					HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",310);
					{
						HX_STACK_LINE(310)
						if (((__this->zpp_inner_zn->wrap_a1 == null()))){
							HX_STACK_LINE(310)
							__this->zpp_inner_zn->setup_a1();
						}
						HX_STACK_LINE(310)
						return __this->zpp_inner_zn->wrap_a1;
					}
					return null();
				}
			};
			HX_STACK_LINE(310)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(310)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(310)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(310)
			if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
				HX_STACK_LINE(310)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(310)
				if ((_this1->_immutable)){
					HX_STACK_LINE(310)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(310)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(310)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(310)
			if (((anchor1 == null()))){
				HX_STACK_LINE(310)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &anchor1,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",310);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &anchor1){
								HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",310);
								{
									HX_STACK_LINE(310)
									if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
										HX_STACK_LINE(310)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(310)
									{
										HX_STACK_LINE(310)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(310)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(310)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(310)
									return anchor1->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &anchor1){
								HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",310);
								{
									HX_STACK_LINE(310)
									if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
										HX_STACK_LINE(310)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(310)
									{
										HX_STACK_LINE(310)
										::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(310)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(310)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(310)
									return anchor1->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(310)
						Float x = _Function_4_1::Block(anchor1);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(anchor1);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(310)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(310)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(310)
							if ((_this1->_immutable)){
								HX_STACK_LINE(310)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(310)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(310)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(310)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(310)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",310);
								{
									HX_STACK_LINE(310)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(310)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(310)
									{
										HX_STACK_LINE(310)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(310)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(310)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(310)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",310);
								{
									HX_STACK_LINE(310)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(310)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(310)
									{
										HX_STACK_LINE(310)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(310)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(310)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(310)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(310)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(310)
							{
								HX_STACK_LINE(310)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(310)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(310)
								{
								}
								HX_STACK_LINE(310)
								{
								}
							}
							HX_STACK_LINE(310)
							{
								HX_STACK_LINE(310)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(310)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(310)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(310)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(310)
			::nape::geom::Vec2 ret = _Function_3_2::Block(anchor1,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(310)
			if ((anchor1->zpp_inner->weak)){
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					if (((bool((anchor1 != null())) && bool(anchor1->zpp_disp)))){
						HX_STACK_LINE(310)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(310)
						if ((_this1->_immutable)){
							HX_STACK_LINE(310)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(310)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(310)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(310)
					if ((anchor1->zpp_inner->_inuse)){
						HX_STACK_LINE(310)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(310)
					::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(310)
					anchor1->zpp_inner->outer = null();
					HX_STACK_LINE(310)
					anchor1->zpp_inner = null();
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(310)
						{
						}
						HX_STACK_LINE(310)
						o->zpp_pool = null();
						HX_STACK_LINE(310)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(310)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(310)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(310)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(310)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(310)
						{
						}
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							if (((o->outer != null()))){
								HX_STACK_LINE(310)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(310)
								o->outer = null();
							}
							HX_STACK_LINE(310)
							o->_isimmutable = null();
							HX_STACK_LINE(310)
							o->_validate = null();
							HX_STACK_LINE(310)
							o->_invalidate = null();
						}
						HX_STACK_LINE(310)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(310)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(310)
				true;
			}
			else{
				HX_STACK_LINE(310)
				false;
			}
			HX_STACK_LINE(310)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::constraint::LineJoint_obj *__this){
			HX_STACK_PUSH("*::closure","nape/constraint/LineJoint.hx",312);
			{
				HX_STACK_LINE(312)
				if (((__this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(312)
					__this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(312)
				return __this->zpp_inner_zn->wrap_a1;
			}
			return null();
		}
	};
	HX_STACK_LINE(312)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_anchor1,return )

::nape::geom::Vec2 LineJoint_obj::get_anchor1( ){
	HX_STACK_PUSH("LineJoint::get_anchor1","nape/constraint/LineJoint.hx",296);
	HX_STACK_THIS(this);
	HX_STACK_LINE(297)
	if (((this->zpp_inner_zn->wrap_a1 == null()))){
		HX_STACK_LINE(297)
		this->zpp_inner_zn->setup_a1();
	}
	HX_STACK_LINE(298)
	return this->zpp_inner_zn->wrap_a1;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_anchor1,return )

::nape::phys::Body LineJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_PUSH("LineJoint::set_body2","nape/constraint/LineJoint.hx",262);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body2,"body2");
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(264)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body2")));
		HX_STACK_LINE(265)
		::zpp_nape::phys::ZPP_Body inbody2 = (  (((body2 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body2->zpp_inner) );		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(266)
		if (((inbody2 != this->zpp_inner_zn->b2))){
			HX_STACK_LINE(267)
			if (((this->zpp_inner_zn->b2 != null()))){
				HX_STACK_LINE(268)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b1 != this->zpp_inner_zn->b2))))){
					HX_STACK_LINE(268)
					if (((this->zpp_inner_zn->b2 != null()))){
						HX_STACK_LINE(270)
						this->zpp_inner_zn->b2->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(273)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(273)
					this->zpp_inner_zn->b2->wake();
				}
			}
			HX_STACK_LINE(275)
			this->zpp_inner_zn->b2 = inbody2;
			HX_STACK_LINE(276)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody2 != null())))) && bool((this->zpp_inner_zn->b1 != inbody2))))){
				HX_STACK_LINE(276)
				if (((inbody2 != null()))){
					HX_STACK_LINE(278)
					inbody2->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(281)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(282)
				this->zpp_inner->wake();
				HX_STACK_LINE(283)
				if (((inbody2 != null()))){
					HX_STACK_LINE(283)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(287)
	return (  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_body2,return )

::nape::phys::Body LineJoint_obj::get_body2( ){
	HX_STACK_PUSH("LineJoint::get_body2","nape/constraint/LineJoint.hx",259);
	HX_STACK_THIS(this);
	HX_STACK_LINE(259)
	return (  (((this->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b2->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_body2,return )

::nape::phys::Body LineJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_PUSH("LineJoint::set_body1","nape/constraint/LineJoint.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body1,"body1");
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(226)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("body1")));
		HX_STACK_LINE(227)
		::zpp_nape::phys::ZPP_Body inbody1 = (  (((body1 == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(body1->zpp_inner) );		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(228)
		if (((inbody1 != this->zpp_inner_zn->b1))){
			HX_STACK_LINE(229)
			if (((this->zpp_inner_zn->b1 != null()))){
				HX_STACK_LINE(230)
				if (((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((this->zpp_inner_zn->b2 != this->zpp_inner_zn->b1))))){
					HX_STACK_LINE(230)
					if (((this->zpp_inner_zn->b1 != null()))){
						HX_STACK_LINE(232)
						this->zpp_inner_zn->b1->constraints->remove(this->zpp_inner);
					}
				}
				HX_STACK_LINE(235)
				if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
					HX_STACK_LINE(235)
					this->zpp_inner_zn->b1->wake();
				}
			}
			HX_STACK_LINE(237)
			this->zpp_inner_zn->b1 = inbody1;
			HX_STACK_LINE(238)
			if (((bool((bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null())) && bool((inbody1 != null())))) && bool((this->zpp_inner_zn->b2 != inbody1))))){
				HX_STACK_LINE(238)
				if (((inbody1 != null()))){
					HX_STACK_LINE(240)
					inbody1->constraints->add(this->zpp_inner);
				}
			}
			HX_STACK_LINE(243)
			if (((bool(this->zpp_inner->active) && bool((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))))){
				HX_STACK_LINE(244)
				this->zpp_inner->wake();
				HX_STACK_LINE(245)
				if (((inbody1 != null()))){
					HX_STACK_LINE(245)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(249)
	return (  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_body1,return )

::nape::phys::Body LineJoint_obj::get_body1( ){
	HX_STACK_PUSH("LineJoint::get_body1","nape/constraint/LineJoint.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_LINE(221)
	return (  (((this->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(this->zpp_inner_zn->b1->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_body1,return )


LineJoint_obj::LineJoint_obj()
{
}

void LineJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineJoint);
	HX_MARK_MEMBER_NAME(jointMax,"jointMax");
	HX_MARK_MEMBER_NAME(jointMin,"jointMin");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(anchor2,"anchor2");
	HX_MARK_MEMBER_NAME(anchor1,"anchor1");
	HX_MARK_MEMBER_NAME(body2,"body2");
	HX_MARK_MEMBER_NAME(body1,"body1");
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LineJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(jointMax,"jointMax");
	HX_VISIT_MEMBER_NAME(jointMin,"jointMin");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(anchor2,"anchor2");
	HX_VISIT_MEMBER_NAME(anchor1,"anchor1");
	HX_VISIT_MEMBER_NAME(body2,"body2");
	HX_VISIT_MEMBER_NAME(body1,"body1");
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LineJoint_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 8:
		if (HX_FIELD_EQ(inName,"jointMax") ) { return inCallProp ? get_jointMax() : jointMax; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { return inCallProp ? get_jointMin() : jointMin; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return inCallProp ? get_direction() : direction; }
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
		if (HX_FIELD_EQ(inName,"set_jointMax") ) { return set_jointMax_dyn(); }
		if (HX_FIELD_EQ(inName,"get_jointMax") ) { return get_jointMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_jointMin") ) { return set_jointMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_jointMin") ) { return get_jointMin_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LineJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
	case 8:
		if (HX_FIELD_EQ(inName,"jointMax") ) { if (inCallProp) return set_jointMax(inValue);jointMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { if (inCallProp) return set_jointMin(inValue);jointMin=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp) return set_direction(inValue);direction=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_LineJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LineJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("jointMax"));
	outFields->push(HX_CSTRING("jointMin"));
	outFields->push(HX_CSTRING("direction"));
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
	HX_CSTRING("set_jointMax"),
	HX_CSTRING("get_jointMax"),
	HX_CSTRING("jointMax"),
	HX_CSTRING("set_jointMin"),
	HX_CSTRING("get_jointMin"),
	HX_CSTRING("jointMin"),
	HX_CSTRING("set_direction"),
	HX_CSTRING("get_direction"),
	HX_CSTRING("direction"),
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
	HX_MARK_MEMBER_NAME(LineJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineJoint_obj::__mClass,"__mClass");
};

Class LineJoint_obj::__mClass;

void LineJoint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.LineJoint"), hx::TCanCast< LineJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LineJoint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
