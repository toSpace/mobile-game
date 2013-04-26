#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_UserConstraint
#include <nape/constraint/UserConstraint.h>
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
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserBody
#include <zpp_nape/constraint/ZPP_UserBody.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserConstraint
#include <zpp_nape/constraint/ZPP_UserConstraint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_UserConstraint_obj::__construct(int dim,bool velonly)
{
HX_STACK_PUSH("ZPP_UserConstraint::new","zpp_nape/constraint/UserConstraint.hx",174);
{
	HX_STACK_LINE(498)
	this->jOld = null();
	HX_STACK_LINE(497)
	this->J = null();
	HX_STACK_LINE(476)
	this->vec3 = null();
	HX_STACK_LINE(440)
	this->Keff = null();
	HX_STACK_LINE(439)
	this->jMax = 0.0;
	HX_STACK_LINE(438)
	this->velonly = false;
	HX_STACK_LINE(437)
	this->gamma = 0.0;
	HX_STACK_LINE(436)
	this->soft = 0.0;
	HX_STACK_LINE(414)
	this->y = null();
	HX_STACK_LINE(391)
	this->L = null();
	HX_STACK_LINE(253)
	this->stepped = false;
	HX_STACK_LINE(182)
	this->bias = null();
	HX_STACK_LINE(181)
	this->jAcc = null();
	HX_STACK_LINE(180)
	this->dim = (int)0;
	HX_STACK_LINE(179)
	this->bodies = null();
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(261)
	super::__construct();
	HX_STACK_LINE(262)
	this->bodies = Array_obj< ::zpp_nape::constraint::ZPP_UserBody >::__new();
	HX_STACK_LINE(265)
	this->dim = dim;
	HX_STACK_LINE(266)
	this->velonly = velonly;
	HX_STACK_LINE(267)
	this->jAcc = Array_obj< Float >::__new();
	HX_STACK_LINE(270)
	this->bias = Array_obj< Float >::__new();
	HX_STACK_LINE(273)
	this->L = Array_obj< Float >::__new();
	HX_STACK_LINE(276)
	this->J = Array_obj< Float >::__new();
	HX_STACK_LINE(279)
	this->jOld = Array_obj< Float >::__new();
	HX_STACK_LINE(282)
	this->y = Array_obj< Float >::__new();
	HX_STACK_LINE(285)
	this->Keff = Array_obj< Float >::__new();
	HX_STACK_LINE(288)
	this->vec3 = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(289)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(289)
		while(((_g < dim))){
			HX_STACK_LINE(289)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(290)
			this->jAcc[i] = this->bias[i] = this->J[i] = this->jOld[i] = this->y[i] = 0.0;
			HX_STACK_LINE(291)
			{
				HX_STACK_LINE(291)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(291)
				while(((_g1 < dim))){
					HX_STACK_LINE(291)
					int j = (_g1)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(291)
					this->L[((i * dim) + j)] = 0.0;
				}
			}
		}
	}
	HX_STACK_LINE(293)
	this->stepped = false;
}
;
	return null();
}

ZPP_UserConstraint_obj::~ZPP_UserConstraint_obj() { }

Dynamic ZPP_UserConstraint_obj::__CreateEmpty() { return  new ZPP_UserConstraint_obj; }
hx::ObjectPtr< ZPP_UserConstraint_obj > ZPP_UserConstraint_obj::__new(int dim,bool velonly)
{  hx::ObjectPtr< ZPP_UserConstraint_obj > result = new ZPP_UserConstraint_obj();
	result->__construct(dim,velonly);
	return result;}

Dynamic ZPP_UserConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_UserConstraint_obj > result = new ZPP_UserConstraint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ZPP_UserConstraint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_PUSH("ZPP_UserConstraint::draw","zpp_nape/constraint/UserConstraint.hx",564);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_LINE(564)
		this->outer_zn->__draw(g);
	}
return null();
}


bool ZPP_UserConstraint_obj::applyImpulsePos( ){
	HX_STACK_PUSH("ZPP_UserConstraint::applyImpulsePos","zpp_nape/constraint/UserConstraint.hx",533);
	HX_STACK_THIS(this);
	HX_STACK_LINE(534)
	if ((this->velonly)){
		HX_STACK_LINE(534)
		return false;
	}
	HX_STACK_LINE(535)
	this->outer_zn->__prepare();
	HX_STACK_LINE(536)
	this->outer_zn->__position(this->J);
	HX_STACK_LINE(537)
	Float lj = this->lsq(this->J);		HX_STACK_VAR(lj,"lj");
	HX_STACK_LINE(538)
	if (((bool(this->breakUnderError) && bool((lj > (this->maxError * this->maxError)))))){
		HX_STACK_LINE(538)
		return true;
	}
	else{
		HX_STACK_LINE(539)
		if (((lj < (::nape::Config_obj::constraintLinearSlop * ::nape::Config_obj::constraintLinearSlop)))){
			HX_STACK_LINE(539)
			return false;
		}
	}
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(540)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->dim;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(540)
		while(((_g1 < _g))){
			HX_STACK_LINE(540)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(540)
			hx::MultEq(this->J[i],(int)-1);
		}
	}
	HX_STACK_LINE(541)
	this->outer_zn->__eff_mass(this->Keff);
	HX_STACK_LINE(542)
	this->transform(this->solve(this->Keff),this->J);
	HX_STACK_LINE(543)
	this->outer_zn->__clamp(this->J);
	HX_STACK_LINE(544)
	{
		HX_STACK_LINE(544)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::zpp_nape::constraint::ZPP_UserBody > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(544)
		while(((_g < _g1->length))){
			HX_STACK_LINE(544)
			::zpp_nape::constraint::ZPP_UserBody bs = _g1->__get(_g);		HX_STACK_VAR(bs,"bs");
			HX_STACK_LINE(544)
			++(_g);
			HX_STACK_LINE(545)
			::zpp_nape::phys::ZPP_Body b = bs->body;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(546)
			this->outer_zn->__impulse(this->J,b->outer,this->vec3);
			HX_STACK_LINE(547)
			{
				HX_STACK_LINE(548)
				Float t = b->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(549)
				{
				}
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::constraint::ZPP_UserConstraint_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/UserConstraint.hx",557);
						{
							HX_STACK_LINE(557)
							::nape::geom::Vec3 _this = __this->vec3;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(557)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(557)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(557)
							{
								HX_STACK_LINE(557)
								::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(557)
								if (((_this1->_validate_dyn() != null()))){
									HX_STACK_LINE(557)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(557)
							return _this->zpp_inner->x;
						}
						return null();
					}
				};
				HX_STACK_LINE(557)
				hx::AddEq(b->posx,(_Function_4_1::Block(this) * t));
				struct _Function_4_2{
					inline static Float Block( ::zpp_nape::constraint::ZPP_UserConstraint_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/UserConstraint.hx",558);
						{
							HX_STACK_LINE(558)
							::nape::geom::Vec3 _this = __this->vec3;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(558)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(558)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(558)
							{
								HX_STACK_LINE(558)
								::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(558)
								if (((_this1->_validate_dyn() != null()))){
									HX_STACK_LINE(558)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(558)
							return _this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(558)
				hx::AddEq(b->posy,(_Function_4_2::Block(this) * t));
			}
			HX_STACK_LINE(560)
			{
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::constraint::ZPP_UserConstraint_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/UserConstraint.hx",560);
						{
							HX_STACK_LINE(560)
							::nape::geom::Vec3 _this = __this->vec3;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(560)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(560)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(560)
							{
								HX_STACK_LINE(560)
								::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(560)
								if (((_this1->_validate_dyn() != null()))){
									HX_STACK_LINE(560)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(560)
							return _this->zpp_inner->z;
						}
						return null();
					}
				};
				HX_STACK_LINE(560)
				Float dr = (_Function_4_1::Block(this) * b->iinertia);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(560)
				hx::AddEq(b->rot,dr);
				HX_STACK_LINE(560)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(560)
					b->axisx = ::Math_obj::sin(b->rot);
					HX_STACK_LINE(560)
					b->axisy = ::Math_obj::cos(b->rot);
					HX_STACK_LINE(560)
					{
					}
					HX_STACK_LINE(560)
					Dynamic();
				}
				else{
					HX_STACK_LINE(560)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(560)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(560)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(560)
					Float nx = ((((p * b->axisx) + (dr * b->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(560)
					b->axisy = ((((p * b->axisy) - (dr * b->axisx))) * m);
					HX_STACK_LINE(560)
					b->axisx = nx;
				}
			}
		}
	}
	HX_STACK_LINE(562)
	return false;
}


bool ZPP_UserConstraint_obj::applyImpulseVel( ){
	HX_STACK_PUSH("ZPP_UserConstraint::applyImpulseVel","zpp_nape/constraint/UserConstraint.hx",499);
	HX_STACK_THIS(this);
	HX_STACK_LINE(500)
	this->outer_zn->__velocity(this->J);
	HX_STACK_LINE(501)
	{
		HX_STACK_LINE(501)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->dim;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(501)
		while(((_g1 < _g))){
			HX_STACK_LINE(501)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(501)
			this->J[i] = (this->bias->__get(i) - this->J->__get(i));
		}
	}
	HX_STACK_LINE(502)
	this->transform(this->L,this->J);
	HX_STACK_LINE(503)
	{
		HX_STACK_LINE(503)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->dim;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(503)
		while(((_g1 < _g))){
			HX_STACK_LINE(503)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(504)
			this->jOld[i] = this->jAcc->__get(i);
			HX_STACK_LINE(505)
			hx::AddEq(this->jAcc[i],this->J[i] = ((this->J->__get(i) * this->soft) - (this->jAcc->__get(i) * this->gamma)));
		}
	}
	HX_STACK_LINE(507)
	this->outer_zn->__clamp(this->jAcc);
	HX_STACK_LINE(508)
	if (((bool(((bool(this->breakUnderForce) || bool(!(this->stiff))))) && bool((this->lsq(this->jAcc) > (this->jMax * this->jMax)))))){
		HX_STACK_LINE(508)
		if ((this->breakUnderForce)){
			HX_STACK_LINE(509)
			return true;
		}
		else{
			HX_STACK_LINE(510)
			if ((!(this->stiff))){
				HX_STACK_LINE(510)
				this->_clamp(this->jAcc,this->jMax);
			}
		}
	}
	HX_STACK_LINE(512)
	{
		HX_STACK_LINE(512)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->dim;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(512)
		while(((_g1 < _g))){
			HX_STACK_LINE(512)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(512)
			this->J[i] = (this->jAcc->__get(i) - this->jOld->__get(i));
		}
	}
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::zpp_nape::constraint::ZPP_UserBody > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(513)
		while(((_g < _g1->length))){
			HX_STACK_LINE(513)
			::zpp_nape::constraint::ZPP_UserBody bs = _g1->__get(_g);		HX_STACK_VAR(bs,"bs");
			HX_STACK_LINE(513)
			++(_g);
			HX_STACK_LINE(514)
			::zpp_nape::phys::ZPP_Body b = bs->body;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(515)
			this->outer_zn->__impulse(this->J,b->outer,this->vec3);
			HX_STACK_LINE(516)
			{
				HX_STACK_LINE(517)
				Float t = b->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(518)
				{
				}
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::constraint::ZPP_UserConstraint_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/UserConstraint.hx",526);
						{
							HX_STACK_LINE(526)
							::nape::geom::Vec3 _this = __this->vec3;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(526)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(526)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(526)
							{
								HX_STACK_LINE(526)
								::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(526)
								if (((_this1->_validate_dyn() != null()))){
									HX_STACK_LINE(526)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(526)
							return _this->zpp_inner->x;
						}
						return null();
					}
				};
				HX_STACK_LINE(526)
				hx::AddEq(b->velx,(_Function_4_1::Block(this) * t));
				struct _Function_4_2{
					inline static Float Block( ::zpp_nape::constraint::ZPP_UserConstraint_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/UserConstraint.hx",527);
						{
							HX_STACK_LINE(527)
							::nape::geom::Vec3 _this = __this->vec3;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(527)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(527)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(527)
							{
								HX_STACK_LINE(527)
								::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(527)
								if (((_this1->_validate_dyn() != null()))){
									HX_STACK_LINE(527)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(527)
							return _this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(527)
				hx::AddEq(b->vely,(_Function_4_2::Block(this) * t));
			}
			struct _Function_3_1{
				inline static Float Block( ::zpp_nape::constraint::ZPP_UserConstraint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/UserConstraint.hx",529);
					{
						HX_STACK_LINE(529)
						::nape::geom::Vec3 _this = __this->vec3;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(529)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(529)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(529)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(529)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(529)
						return _this->zpp_inner->z;
					}
					return null();
				}
			};
			HX_STACK_LINE(529)
			hx::AddEq(b->angvel,(_Function_3_1::Block(this) * b->iinertia));
		}
	}
	HX_STACK_LINE(531)
	return false;
}


Void ZPP_UserConstraint_obj::warmStart( ){
{
		HX_STACK_PUSH("ZPP_UserConstraint::warmStart","zpp_nape/constraint/UserConstraint.hx",477);
		HX_STACK_THIS(this);
		HX_STACK_LINE(478)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::zpp_nape::constraint::ZPP_UserBody > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(478)
		while(((_g < _g1->length))){
			HX_STACK_LINE(478)
			::zpp_nape::constraint::ZPP_UserBody bs = _g1->__get(_g);		HX_STACK_VAR(bs,"bs");
			HX_STACK_LINE(478)
			++(_g);
			HX_STACK_LINE(479)
			::zpp_nape::phys::ZPP_Body b = bs->body;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(480)
			this->outer_zn->__impulse(this->jAcc,b->outer,this->vec3);
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(482)
				Float t = b->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(483)
				{
				}
				struct _Function_3_1{
					inline static Float Block( ::zpp_nape::constraint::ZPP_UserConstraint_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/UserConstraint.hx",491);
						{
							HX_STACK_LINE(491)
							::nape::geom::Vec3 _this = __this->vec3;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(491)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(491)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(491)
							{
								HX_STACK_LINE(491)
								::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(491)
								if (((_this1->_validate_dyn() != null()))){
									HX_STACK_LINE(491)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(491)
							return _this->zpp_inner->x;
						}
						return null();
					}
				};
				HX_STACK_LINE(491)
				hx::AddEq(b->velx,(_Function_3_1::Block(this) * t));
				struct _Function_3_2{
					inline static Float Block( ::zpp_nape::constraint::ZPP_UserConstraint_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/UserConstraint.hx",492);
						{
							HX_STACK_LINE(492)
							::nape::geom::Vec3 _this = __this->vec3;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(492)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(492)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(492)
								if (((_this1->_validate_dyn() != null()))){
									HX_STACK_LINE(492)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(492)
							return _this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(492)
				hx::AddEq(b->vely,(_Function_3_2::Block(this) * t));
			}
			struct _Function_2_1{
				inline static Float Block( ::zpp_nape::constraint::ZPP_UserConstraint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/UserConstraint.hx",494);
					{
						HX_STACK_LINE(494)
						::nape::geom::Vec3 _this = __this->vec3;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(494)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(494)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(494)
						{
							HX_STACK_LINE(494)
							::zpp_nape::geom::ZPP_Vec3 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(494)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(494)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(494)
						return _this->zpp_inner->z;
					}
					return null();
				}
			};
			HX_STACK_LINE(494)
			hx::AddEq(b->angvel,(_Function_2_1::Block(this) * b->iinertia));
		}
	}
return null();
}


bool ZPP_UserConstraint_obj::preStep( Float dt){
	HX_STACK_PUSH("ZPP_UserConstraint::preStep","zpp_nape/constraint/UserConstraint.hx",441);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dt,"dt");
	HX_STACK_LINE(445)
	if (((this->pre_dt == -1.0))){
		HX_STACK_LINE(445)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(446)
	Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(447)
	this->pre_dt = dt;
	HX_STACK_LINE(448)
	this->stepped = true;
	HX_STACK_LINE(449)
	this->outer_zn->__prepare();
	HX_STACK_LINE(450)
	this->outer_zn->__eff_mass(this->Keff);
	HX_STACK_LINE(451)
	this->L = this->solve(this->Keff);
	HX_STACK_LINE(452)
	if (((bool(!(this->stiff)) && bool(!(this->velonly))))){
		HX_STACK_LINE(453)
		Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
		struct _Function_2_1{
			inline static Float Block( ::zpp_nape::constraint::ZPP_UserConstraint_obj *__this,Float &biasCoef,Float &dt){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/UserConstraint.hx",454);
				{
					HX_STACK_LINE(455)
					Float omega = (((int)2 * ::Math_obj::PI) * __this->frequency);		HX_STACK_VAR(omega,"omega");
					HX_STACK_LINE(456)
					__this->gamma = (Float((int)1) / Float((((dt * omega) * ((((int)2 * __this->damping) + (omega * dt)))))));
					HX_STACK_LINE(457)
					Float ig = (Float((int)1) / Float((((int)1 + __this->gamma))));		HX_STACK_VAR(ig,"ig");
					HX_STACK_LINE(458)
					biasCoef = (((dt * omega) * omega) * __this->gamma);
					HX_STACK_LINE(459)
					hx::MultEq(__this->gamma,ig);
					HX_STACK_LINE(460)
					return ig;
				}
				return null();
			}
		};
		HX_STACK_LINE(454)
		this->soft = _Function_2_1::Block(this,biasCoef,dt);
		HX_STACK_LINE(462)
		this->outer_zn->__position(this->bias);
		HX_STACK_LINE(463)
		if (((bool(this->breakUnderError) && bool((this->lsq(this->bias) > (this->maxError * this->maxError)))))){
			HX_STACK_LINE(463)
			return true;
		}
		HX_STACK_LINE(464)
		{
			HX_STACK_LINE(464)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->dim;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(464)
			while(((_g1 < _g))){
				HX_STACK_LINE(464)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(464)
				hx::MultEq(this->bias[i],-(biasCoef));
			}
		}
		HX_STACK_LINE(465)
		this->_clamp(this->bias,this->maxError);
	}
	else{
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->dim;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(468)
			while(((_g1 < _g))){
				HX_STACK_LINE(468)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(468)
				this->bias[i] = 0.0;
			}
		}
		HX_STACK_LINE(469)
		this->gamma = 0.0;
		HX_STACK_LINE(470)
		this->soft = 1.0;
	}
	HX_STACK_LINE(472)
	{
		HX_STACK_LINE(472)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->dim;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(472)
		while(((_g1 < _g))){
			HX_STACK_LINE(472)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(472)
			hx::MultEq(this->jAcc[i],dtratio);
		}
	}
	HX_STACK_LINE(473)
	this->jMax = (this->maxForce * dt);
	HX_STACK_LINE(474)
	return false;
}


Void ZPP_UserConstraint_obj::transform( Array< Float > L,Array< Float > x){
{
		HX_STACK_PUSH("ZPP_UserConstraint::transform","zpp_nape/constraint/UserConstraint.hx",415);
		HX_STACK_THIS(this);
		HX_STACK_ARG(L,"L");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->dim;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(416)
			while(((_g1 < _g))){
				HX_STACK_LINE(416)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(417)
				Float sum = x->__get(i);		HX_STACK_VAR(sum,"sum");
				HX_STACK_LINE(418)
				Float lii = L->__get(((i * this->dim) + i));		HX_STACK_VAR(lii,"lii");
				HX_STACK_LINE(419)
				if (((lii != (int)0))){
					HX_STACK_LINE(420)
					{
						HX_STACK_LINE(420)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(420)
						while(((_g2 < i))){
							HX_STACK_LINE(420)
							int k = (_g2)++;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(420)
							hx::SubEq(sum,(L->__get(((i * this->dim) + k)) * this->y->__get(k)));
						}
					}
					HX_STACK_LINE(421)
					this->y[i] = (Float(sum) / Float(lii));
				}
				else{
					HX_STACK_LINE(423)
					this->y[i] = 0.0;
				}
			}
		}
		HX_STACK_LINE(425)
		{
			HX_STACK_LINE(425)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->dim;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(425)
			while(((_g1 < _g))){
				HX_STACK_LINE(425)
				int ix = (_g1)++;		HX_STACK_VAR(ix,"ix");
				HX_STACK_LINE(426)
				int i = ((this->dim - (int)1) - ix);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(427)
				Float lii = L->__get(((i * this->dim) + i));		HX_STACK_VAR(lii,"lii");
				HX_STACK_LINE(428)
				if (((lii != (int)0))){
					HX_STACK_LINE(429)
					Float sum = this->y->__get(i);		HX_STACK_VAR(sum,"sum");
					HX_STACK_LINE(430)
					{
						HX_STACK_LINE(430)
						int _g3 = (i + (int)1);		HX_STACK_VAR(_g3,"_g3");
						int _g2 = this->dim;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(430)
						while(((_g3 < _g2))){
							HX_STACK_LINE(430)
							int k = (_g3)++;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(430)
							hx::SubEq(sum,(L->__get(((k * this->dim) + i)) * x->__get(k)));
						}
					}
					HX_STACK_LINE(431)
					x[i] = (Float(sum) / Float(lii));
				}
				else{
					HX_STACK_LINE(433)
					x[i] = 0.0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_UserConstraint_obj,transform,(void))

Array< Float > ZPP_UserConstraint_obj::solve( Array< Float > m){
	HX_STACK_PUSH("ZPP_UserConstraint::solve","zpp_nape/constraint/UserConstraint.hx",392);
	HX_STACK_THIS(this);
	HX_STACK_ARG(m,"m");
	HX_STACK_LINE(393)
	int ind = (int)0;		HX_STACK_VAR(ind,"ind");
	HX_STACK_LINE(394)
	{
		HX_STACK_LINE(394)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->dim;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(394)
		while(((_g1 < _g))){
			HX_STACK_LINE(394)
			int j = (_g1)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(395)
			Float sum = 0.0;		HX_STACK_VAR(sum,"sum");
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = (j - (int)1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(396)
				while(((_g3 < _g2))){
					HX_STACK_LINE(396)
					int k = (_g3)++;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(396)
					hx::AddEq(sum,(this->L->__get(((j * this->dim) + k)) * this->L->__get(((j * this->dim) + k))));
				}
			}
			HX_STACK_LINE(397)
			Float rec = ::Math_obj::sqrt((m->__get((ind)++) - sum));		HX_STACK_VAR(rec,"rec");
			HX_STACK_LINE(398)
			this->L[((j * this->dim) + j)] = rec;
			HX_STACK_LINE(399)
			if (((rec != (int)0))){
				HX_STACK_LINE(400)
				rec = (Float(1.0) / Float(rec));
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					int _g3 = (j + (int)1);		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->dim;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(401)
					while(((_g3 < _g2))){
						HX_STACK_LINE(401)
						int i = (_g3)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(402)
						Float sum1 = 0.0;		HX_STACK_VAR(sum1,"sum1");
						HX_STACK_LINE(403)
						{
							HX_STACK_LINE(403)
							int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
							int _g4 = (j - (int)1);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(403)
							while(((_g5 < _g4))){
								HX_STACK_LINE(403)
								int k = (_g5)++;		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(403)
								hx::AddEq(sum1,(this->L->__get(((i * this->dim) + k)) * this->L->__get(((j * this->dim) + k))));
							}
						}
						HX_STACK_LINE(404)
						this->L[((i * this->dim) + j)] = (rec * ((m->__get((ind)++) - sum1)));
					}
				}
			}
			else{
				HX_STACK_LINE(408)
				{
					HX_STACK_LINE(408)
					int _g3 = (j + (int)1);		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->dim;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(408)
					while(((_g3 < _g2))){
						HX_STACK_LINE(408)
						int i = (_g3)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(408)
						this->L[((i * this->dim) + j)] = 0.0;
					}
				}
				HX_STACK_LINE(409)
				hx::AddEq(ind,((this->dim - j) - (int)1));
			}
		}
	}
	HX_STACK_LINE(412)
	return this->L;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,solve,return )

Void ZPP_UserConstraint_obj::_clamp( Array< Float > v,Float max){
{
		HX_STACK_PUSH("ZPP_UserConstraint::_clamp","zpp_nape/constraint/UserConstraint.hx",384);
		HX_STACK_THIS(this);
		HX_STACK_ARG(v,"v");
		HX_STACK_ARG(max,"max");
		HX_STACK_LINE(385)
		Float x = this->lsq(v);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(386)
		if (((x > (max * max)))){
			HX_STACK_LINE(387)
			Float scale = (Float(max) / Float(::Math_obj::sqrt(x)));		HX_STACK_VAR(scale,"scale");
			HX_STACK_LINE(388)
			{
				HX_STACK_LINE(388)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->dim;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(388)
				while(((_g1 < _g))){
					HX_STACK_LINE(388)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(388)
					hx::MultEq(v[i],scale);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_UserConstraint_obj,_clamp,(void))

Float ZPP_UserConstraint_obj::lsq( Array< Float > v){
	HX_STACK_PUSH("ZPP_UserConstraint::lsq","zpp_nape/constraint/UserConstraint.hx",379);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(380)
	Float sum = 0.0;		HX_STACK_VAR(sum,"sum");
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(381)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->dim;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(381)
		while(((_g1 < _g))){
			HX_STACK_LINE(381)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(381)
			hx::AddEq(sum,(v->__get(i) * v->__get(i)));
		}
	}
	HX_STACK_LINE(382)
	return sum;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,lsq,return )

Void ZPP_UserConstraint_obj::clearcache( ){
{
		HX_STACK_PUSH("ZPP_UserConstraint::clearcache","zpp_nape/constraint/UserConstraint.hx",375);
		HX_STACK_THIS(this);
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->dim;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(376)
			while(((_g1 < _g))){
				HX_STACK_LINE(376)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(376)
				this->jAcc[i] = 0.0;
			}
		}
		HX_STACK_LINE(377)
		this->pre_dt = -1.0;
	}
return null();
}


Void ZPP_UserConstraint_obj::broken( ){
{
		HX_STACK_PUSH("ZPP_UserConstraint::broken","zpp_nape/constraint/UserConstraint.hx",372);
		HX_STACK_THIS(this);
		HX_STACK_LINE(372)
		this->outer_zn->__broken();
	}
return null();
}


bool ZPP_UserConstraint_obj::pair_exists( int id,int di){
	HX_STACK_PUSH("ZPP_UserConstraint::pair_exists","zpp_nape/constraint/UserConstraint.hx",356);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(357)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(358)
	int bl = ::Std_obj::_int(this->bodies->length);		HX_STACK_VAR(bl,"bl");
	HX_STACK_LINE(359)
	{
		HX_STACK_LINE(359)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(359)
		while(((_g < bl))){
			HX_STACK_LINE(359)
			int bi = (_g)++;		HX_STACK_VAR(bi,"bi");
			HX_STACK_LINE(360)
			::zpp_nape::phys::ZPP_Body b = this->bodies->__get(bi)->body;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				int _g1 = (bi + (int)1);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(361)
				while(((_g1 < bl))){
					HX_STACK_LINE(361)
					int ci = (_g1)++;		HX_STACK_VAR(ci,"ci");
					HX_STACK_LINE(362)
					::zpp_nape::phys::ZPP_Body c = this->bodies->__get(ci)->body;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(363)
					if (((bool((bool((b->id == id)) && bool((c->id == di)))) || bool((bool((b->id == di)) && bool((c->id == id))))))){
						HX_STACK_LINE(364)
						ret = true;
						HX_STACK_LINE(365)
						break;
					}
				}
			}
			HX_STACK_LINE(368)
			if ((ret)){
				HX_STACK_LINE(368)
				break;
			}
		}
	}
	HX_STACK_LINE(370)
	return ret;
}


Void ZPP_UserConstraint_obj::forest( ){
{
		HX_STACK_PUSH("ZPP_UserConstraint::forest","zpp_nape/constraint/UserConstraint.hx",304);
		HX_STACK_THIS(this);
		HX_STACK_LINE(305)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::zpp_nape::constraint::ZPP_UserBody > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(305)
		while(((_g < _g1->length))){
			HX_STACK_LINE(305)
			::zpp_nape::constraint::ZPP_UserBody b = _g1->__get(_g);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(305)
			++(_g);
			HX_STACK_LINE(306)
			if (((b->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
				struct _Function_3_1{
					inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_UserBody &b){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/UserConstraint.hx",309);
						{
							HX_STACK_LINE(310)
							::zpp_nape::space::ZPP_Component obj = b->body->component;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(311)
							::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(312)
							while(((obj != obj->parent))){
								HX_STACK_LINE(313)
								::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(314)
								obj->parent = stack;
								HX_STACK_LINE(315)
								stack = obj;
								HX_STACK_LINE(316)
								obj = nxt;
							}
							HX_STACK_LINE(318)
							while(((stack != null()))){
								HX_STACK_LINE(319)
								::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(320)
								stack->parent = obj;
								HX_STACK_LINE(321)
								stack = nxt;
							}
							HX_STACK_LINE(323)
							return obj;
						}
						return null();
					}
				};
				HX_STACK_LINE(307)
				::zpp_nape::space::ZPP_Component xr = (  (((b->body->component == b->body->component->parent))) ? ::zpp_nape::space::ZPP_Component(b->body->component) : ::zpp_nape::space::ZPP_Component(_Function_3_1::Block(b)) );		HX_STACK_VAR(xr,"xr");
				struct _Function_3_2{
					inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_UserConstraint_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/UserConstraint.hx",328);
						{
							HX_STACK_LINE(329)
							::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(330)
							::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(331)
							while(((obj != obj->parent))){
								HX_STACK_LINE(332)
								::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(333)
								obj->parent = stack;
								HX_STACK_LINE(334)
								stack = obj;
								HX_STACK_LINE(335)
								obj = nxt;
							}
							HX_STACK_LINE(337)
							while(((stack != null()))){
								HX_STACK_LINE(338)
								::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
								HX_STACK_LINE(339)
								stack->parent = obj;
								HX_STACK_LINE(340)
								stack = nxt;
							}
							HX_STACK_LINE(342)
							return obj;
						}
						return null();
					}
				};
				HX_STACK_LINE(326)
				::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_3_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
				HX_STACK_LINE(345)
				if (((xr != yr))){
					HX_STACK_LINE(345)
					if (((xr->rank < yr->rank))){
						HX_STACK_LINE(346)
						xr->parent = yr;
					}
					else{
						HX_STACK_LINE(347)
						if (((xr->rank > yr->rank))){
							HX_STACK_LINE(347)
							yr->parent = xr;
						}
						else{
							HX_STACK_LINE(349)
							yr->parent = xr;
							HX_STACK_LINE(350)
							(xr->rank)++;
						}
					}
				}
			}
		}
	}
return null();
}


Void ZPP_UserConstraint_obj::wake_connected( ){
{
		HX_STACK_PUSH("ZPP_UserConstraint::wake_connected","zpp_nape/constraint/UserConstraint.hx",299);
		HX_STACK_THIS(this);
		HX_STACK_LINE(300)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::zpp_nape::constraint::ZPP_UserBody > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(300)
		while(((_g < _g1->length))){
			HX_STACK_LINE(300)
			::zpp_nape::constraint::ZPP_UserBody b = _g1->__get(_g);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(300)
			++(_g);
			HX_STACK_LINE(301)
			if (((b->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
				HX_STACK_LINE(301)
				b->body->wake();
			}
		}
	}
return null();
}


Void ZPP_UserConstraint_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_UserConstraint::validate","zpp_nape/constraint/UserConstraint.hx",295);
		HX_STACK_THIS(this);
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::zpp_nape::constraint::ZPP_UserBody > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(296)
			while(((_g < _g1->length))){
				HX_STACK_LINE(296)
				::zpp_nape::constraint::ZPP_UserBody b = _g1->__get(_g);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(296)
				++(_g);
				HX_STACK_LINE(296)
				if (((b->body->space != this->space))){
					HX_STACK_LINE(296)
					hx::Throw (HX_CSTRING("Error: Constraints must have each body within the same sapce to which the constraint has been assigned"));
				}
			}
		}
		HX_STACK_LINE(297)
		this->outer_zn->__validate();
	}
return null();
}


::nape::constraint::Constraint ZPP_UserConstraint_obj::copy( Array< ::zpp_nape::constraint::ZPP_CopyHelper > dict,Array< ::zpp_nape::constraint::ZPP_CopyHelper > todo){
	HX_STACK_PUSH("ZPP_UserConstraint::copy","zpp_nape/constraint/UserConstraint.hx",254);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dict,"dict");
	HX_STACK_ARG(todo,"todo");
	HX_STACK_LINE(255)
	::nape::constraint::UserConstraint ret = this->outer_zn->__copy();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(256)
	this->copyto(ret);
	HX_STACK_LINE(257)
	hx::Throw (HX_CSTRING("not done yet"));
	HX_STACK_LINE(258)
	return ret;
}


Void ZPP_UserConstraint_obj::inactiveBodies( ){
{
		HX_STACK_PUSH("ZPP_UserConstraint::inactiveBodies","zpp_nape/constraint/UserConstraint.hx",248);
		HX_STACK_THIS(this);
		HX_STACK_LINE(249)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::zpp_nape::constraint::ZPP_UserBody > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(249)
		while(((_g < _g1->length))){
			HX_STACK_LINE(249)
			::zpp_nape::constraint::ZPP_UserBody b = _g1->__get(_g);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(249)
			++(_g);
			HX_STACK_LINE(250)
			if (((b->body != null()))){
				HX_STACK_LINE(250)
				b->body->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_UserConstraint_obj::activeBodies( ){
{
		HX_STACK_PUSH("ZPP_UserConstraint::activeBodies","zpp_nape/constraint/UserConstraint.hx",243);
		HX_STACK_THIS(this);
		HX_STACK_LINE(244)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::zpp_nape::constraint::ZPP_UserBody > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(244)
		while(((_g < _g1->length))){
			HX_STACK_LINE(244)
			::zpp_nape::constraint::ZPP_UserBody b = _g1->__get(_g);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(244)
			++(_g);
			HX_STACK_LINE(245)
			if (((b->body != null()))){
				HX_STACK_LINE(245)
				b->body->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


::nape::geom::Vec3 ZPP_UserConstraint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_PUSH("ZPP_UserConstraint::bodyImpulse","zpp_nape/constraint/UserConstraint.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->dim;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(238)
		while(((_g1 < _g))){
			HX_STACK_LINE(238)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(238)
			this->J[i] = this->jAcc->__get(i);
		}
	}
	HX_STACK_LINE(239)
	::nape::geom::Vec3 ret = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(240)
	if ((this->stepped)){
		HX_STACK_LINE(240)
		this->outer_zn->__impulse(this->J,b->outer,ret);
	}
	HX_STACK_LINE(241)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,bodyImpulse,return )

bool ZPP_UserConstraint_obj::remBody( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_PUSH("ZPP_UserConstraint::remBody","zpp_nape/constraint/UserConstraint.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(208)
	{
	}
	HX_STACK_LINE(216)
	::zpp_nape::constraint::ZPP_UserBody match = null();		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(217)
	int bl = ::Std_obj::_int(this->bodies->length);		HX_STACK_VAR(bl,"bl");
	HX_STACK_LINE(218)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(219)
	while(((i < bl))){
		HX_STACK_LINE(220)
		::zpp_nape::constraint::ZPP_UserBody x = this->bodies->__get(i);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(221)
		if (((x->body == b))){
			HX_STACK_LINE(222)
			(x->cnt)--;
			HX_STACK_LINE(223)
			if (((x->cnt == (int)0))){
				HX_STACK_LINE(224)
				if (((bl > (int)0))){
					HX_STACK_LINE(224)
					this->bodies[i] = this->bodies->__get((bl - (int)1));
				}
				HX_STACK_LINE(225)
				this->bodies->pop();
				HX_STACK_LINE(226)
				if (((bool(this->active) && bool((this->space != null()))))){
					HX_STACK_LINE(226)
					if (((b != null()))){
						HX_STACK_LINE(227)
						b->constraints->remove(hx::ObjectPtr<OBJ_>(this));
					}
				}
			}
			HX_STACK_LINE(230)
			match = x;
			HX_STACK_LINE(231)
			break;
		}
		HX_STACK_LINE(233)
		(i)++;
	}
	HX_STACK_LINE(235)
	return (match != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,remBody,return )

Void ZPP_UserConstraint_obj::addBody( ::zpp_nape::phys::ZPP_Body b){
{
		HX_STACK_PUSH("ZPP_UserConstraint::addBody","zpp_nape/constraint/UserConstraint.hx",183);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(184)
		{
		}
		HX_STACK_LINE(192)
		::zpp_nape::constraint::ZPP_UserBody match = null();		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::zpp_nape::constraint::ZPP_UserBody > _g1 = this->bodies;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			while(((_g < _g1->length))){
				HX_STACK_LINE(193)
				::zpp_nape::constraint::ZPP_UserBody x = _g1->__get(_g);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(193)
				++(_g);
				HX_STACK_LINE(194)
				if (((x->body == b))){
					HX_STACK_LINE(195)
					match = x;
					HX_STACK_LINE(196)
					break;
				}
			}
		}
		HX_STACK_LINE(199)
		if (((match == null()))){
			HX_STACK_LINE(200)
			this->bodies->push(::zpp_nape::constraint::ZPP_UserBody_obj::__new((int)1,b));
			HX_STACK_LINE(201)
			if (((bool(this->active) && bool((this->space != null()))))){
				HX_STACK_LINE(201)
				if (((b != null()))){
					HX_STACK_LINE(202)
					b->constraints->add(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		else{
			HX_STACK_LINE(205)
			(match->cnt)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,addBody,(void))

Void ZPP_UserConstraint_obj::bindVec2_invalidate( ::zpp_nape::geom::ZPP_Vec2 _){
{
		HX_STACK_PUSH("ZPP_UserConstraint::bindVec2_invalidate","zpp_nape/constraint/UserConstraint.hx",176);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_,"_");
		HX_STACK_LINE(176)
		this->outer_zn->__invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_UserConstraint_obj,bindVec2_invalidate,(void))


ZPP_UserConstraint_obj::ZPP_UserConstraint_obj()
{
}

void ZPP_UserConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_UserConstraint);
	HX_MARK_MEMBER_NAME(jOld,"jOld");
	HX_MARK_MEMBER_NAME(J,"J");
	HX_MARK_MEMBER_NAME(vec3,"vec3");
	HX_MARK_MEMBER_NAME(Keff,"Keff");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(velonly,"velonly");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(soft,"soft");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(L,"L");
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(dim,"dim");
	HX_MARK_MEMBER_NAME(bodies,"bodies");
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_UserConstraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(jOld,"jOld");
	HX_VISIT_MEMBER_NAME(J,"J");
	HX_VISIT_MEMBER_NAME(vec3,"vec3");
	HX_VISIT_MEMBER_NAME(Keff,"Keff");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(velonly,"velonly");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(soft,"soft");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(L,"L");
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(dim,"dim");
	HX_VISIT_MEMBER_NAME(bodies,"bodies");
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_UserConstraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"J") ) { return J; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"L") ) { return L; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"lsq") ) { return lsq_dyn(); }
		if (HX_FIELD_EQ(inName,"dim") ) { return dim; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"jOld") ) { return jOld; }
		if (HX_FIELD_EQ(inName,"vec3") ) { return vec3; }
		if (HX_FIELD_EQ(inName,"Keff") ) { return Keff; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"soft") ) { return soft; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"bias") ) { return bias; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		if (HX_FIELD_EQ(inName,"solve") ) { return solve_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_clamp") ) { return _clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"broken") ) { return broken_dyn(); }
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		if (HX_FIELD_EQ(inName,"bodies") ) { return bodies; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		if (HX_FIELD_EQ(inName,"velonly") ) { return velonly; }
		if (HX_FIELD_EQ(inName,"stepped") ) { return stepped; }
		if (HX_FIELD_EQ(inName,"remBody") ) { return remBody_dyn(); }
		if (HX_FIELD_EQ(inName,"addBody") ) { return addBody_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearcache") ) { return clearcache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pair_exists") ) { return pair_exists_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wake_connected") ) { return wake_connected_dyn(); }
		if (HX_FIELD_EQ(inName,"inactiveBodies") ) { return inactiveBodies_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"bindVec2_invalidate") ) { return bindVec2_invalidate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_UserConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"J") ) { J=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"L") ) { L=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dim") ) { dim=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jOld") ) { jOld=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vec3") ) { vec3=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Keff") ) { Keff=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soft") ) { soft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { bodies=inValue.Cast< Array< ::zpp_nape::constraint::ZPP_UserBody > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"velonly") ) { velonly=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::UserConstraint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_UserConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("jOld"));
	outFields->push(HX_CSTRING("J"));
	outFields->push(HX_CSTRING("vec3"));
	outFields->push(HX_CSTRING("Keff"));
	outFields->push(HX_CSTRING("jMax"));
	outFields->push(HX_CSTRING("velonly"));
	outFields->push(HX_CSTRING("gamma"));
	outFields->push(HX_CSTRING("soft"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("L"));
	outFields->push(HX_CSTRING("stepped"));
	outFields->push(HX_CSTRING("bias"));
	outFields->push(HX_CSTRING("jAcc"));
	outFields->push(HX_CSTRING("dim"));
	outFields->push(HX_CSTRING("bodies"));
	outFields->push(HX_CSTRING("outer_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("applyImpulsePos"),
	HX_CSTRING("applyImpulseVel"),
	HX_CSTRING("jOld"),
	HX_CSTRING("J"),
	HX_CSTRING("warmStart"),
	HX_CSTRING("vec3"),
	HX_CSTRING("preStep"),
	HX_CSTRING("Keff"),
	HX_CSTRING("jMax"),
	HX_CSTRING("velonly"),
	HX_CSTRING("gamma"),
	HX_CSTRING("soft"),
	HX_CSTRING("transform"),
	HX_CSTRING("y"),
	HX_CSTRING("solve"),
	HX_CSTRING("L"),
	HX_CSTRING("_clamp"),
	HX_CSTRING("lsq"),
	HX_CSTRING("clearcache"),
	HX_CSTRING("broken"),
	HX_CSTRING("pair_exists"),
	HX_CSTRING("forest"),
	HX_CSTRING("wake_connected"),
	HX_CSTRING("validate"),
	HX_CSTRING("copy"),
	HX_CSTRING("stepped"),
	HX_CSTRING("inactiveBodies"),
	HX_CSTRING("activeBodies"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("remBody"),
	HX_CSTRING("addBody"),
	HX_CSTRING("bias"),
	HX_CSTRING("jAcc"),
	HX_CSTRING("dim"),
	HX_CSTRING("bodies"),
	HX_CSTRING("bindVec2_invalidate"),
	HX_CSTRING("outer_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_UserConstraint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_UserConstraint_obj::__mClass,"__mClass");
};

Class ZPP_UserConstraint_obj::__mClass;

void ZPP_UserConstraint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_UserConstraint"), hx::TCanCast< ZPP_UserConstraint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_UserConstraint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
