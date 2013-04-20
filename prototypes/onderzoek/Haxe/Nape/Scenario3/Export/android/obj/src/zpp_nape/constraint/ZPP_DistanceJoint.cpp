#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_DistanceJoint
#include <nape/constraint/DistanceJoint.h>
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
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_DistanceJoint
#include <zpp_nape/constraint/ZPP_DistanceJoint.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_DistanceJoint_obj::__construct()
{
HX_STACK_PUSH("ZPP_DistanceJoint::new","zpp_nape/constraint/DistanceJoint.hx",174);
{
	HX_STACK_LINE(432)
	this->stepped = false;
	HX_STACK_LINE(431)
	this->bias = 0.0;
	HX_STACK_LINE(430)
	this->gamma = 0.0;
	HX_STACK_LINE(429)
	this->jMax = 0.0;
	HX_STACK_LINE(428)
	this->jAcc = 0.0;
	HX_STACK_LINE(427)
	this->kMass = 0.0;
	HX_STACK_LINE(426)
	this->wrap_a2 = null();
	HX_STACK_LINE(373)
	this->a2rely = 0.0;
	HX_STACK_LINE(372)
	this->a2relx = 0.0;
	HX_STACK_LINE(371)
	this->a2localy = 0.0;
	HX_STACK_LINE(370)
	this->a2localx = 0.0;
	HX_STACK_LINE(369)
	this->b2 = null();
	HX_STACK_LINE(368)
	this->wrap_a1 = null();
	HX_STACK_LINE(315)
	this->a1rely = 0.0;
	HX_STACK_LINE(314)
	this->a1relx = 0.0;
	HX_STACK_LINE(313)
	this->a1localy = 0.0;
	HX_STACK_LINE(312)
	this->a1localx = 0.0;
	HX_STACK_LINE(311)
	this->b1 = null();
	HX_STACK_LINE(287)
	this->cx2 = 0.0;
	HX_STACK_LINE(286)
	this->cx1 = 0.0;
	HX_STACK_LINE(285)
	this->ny = 0.0;
	HX_STACK_LINE(284)
	this->nx = 0.0;
	HX_STACK_LINE(179)
	this->equal = false;
	HX_STACK_LINE(178)
	this->slack = false;
	HX_STACK_LINE(177)
	this->jointMax = 0.0;
	HX_STACK_LINE(176)
	this->jointMin = 0.0;
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(481)
	super::__construct();
	HX_STACK_LINE(482)
	{
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(484)
			this->a1localx = (int)0;
			HX_STACK_LINE(485)
			this->a1localy = (int)0;
			HX_STACK_LINE(486)
			{
			}
			HX_STACK_LINE(494)
			{
			}
		}
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(504)
			this->a1relx = (int)0;
			HX_STACK_LINE(505)
			this->a1rely = (int)0;
			HX_STACK_LINE(506)
			{
			}
			HX_STACK_LINE(514)
			{
			}
		}
	}
	HX_STACK_LINE(524)
	{
		HX_STACK_LINE(525)
		{
			HX_STACK_LINE(526)
			this->a2localx = (int)0;
			HX_STACK_LINE(527)
			this->a2localy = (int)0;
			HX_STACK_LINE(528)
			{
			}
			HX_STACK_LINE(536)
			{
			}
		}
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(546)
			this->a2relx = (int)0;
			HX_STACK_LINE(547)
			this->a2rely = (int)0;
			HX_STACK_LINE(548)
			{
			}
			HX_STACK_LINE(556)
			{
			}
		}
	}
	HX_STACK_LINE(566)
	this->jAcc = (int)0;
	HX_STACK_LINE(567)
	this->jMax = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(568)
	this->stepped = false;
	HX_STACK_LINE(569)
	this->cx1 = this->cx2 = (int)0;
}
;
	return null();
}

ZPP_DistanceJoint_obj::~ZPP_DistanceJoint_obj() { }

Dynamic ZPP_DistanceJoint_obj::__CreateEmpty() { return  new ZPP_DistanceJoint_obj; }
hx::ObjectPtr< ZPP_DistanceJoint_obj > ZPP_DistanceJoint_obj::__new()
{  hx::ObjectPtr< ZPP_DistanceJoint_obj > result = new ZPP_DistanceJoint_obj();
	result->__construct();
	return result;}

Dynamic ZPP_DistanceJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_DistanceJoint_obj > result = new ZPP_DistanceJoint_obj();
	result->__construct();
	return result;}

Void ZPP_DistanceJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::draw","zpp_nape/constraint/DistanceJoint.hx",1288);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_LINE(1289)
		::nape::constraint::DistanceJoint me = this->outer_zn;		HX_STACK_VAR(me,"me");
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::nape::constraint::DistanceJoint &me){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",1290);
				{
					HX_STACK_LINE(1290)
					if (((me->zpp_inner_zn->wrap_a1 == null()))){
						HX_STACK_LINE(1290)
						me->zpp_inner_zn->setup_a1();
					}
					HX_STACK_LINE(1290)
					return me->zpp_inner_zn->wrap_a1;
				}
				return null();
			}
		};
		HX_STACK_LINE(1290)
		::nape::geom::Vec2 a1 = ((  (((me->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(me->zpp_inner_zn->b1->outer) ))->localPointToWorld(_Function_1_1::Block(me),null());		HX_STACK_VAR(a1,"a1");
		struct _Function_1_2{
			inline static ::nape::geom::Vec2 Block( ::nape::constraint::DistanceJoint &me){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",1291);
				{
					HX_STACK_LINE(1291)
					if (((me->zpp_inner_zn->wrap_a2 == null()))){
						HX_STACK_LINE(1291)
						me->zpp_inner_zn->setup_a2();
					}
					HX_STACK_LINE(1291)
					return me->zpp_inner_zn->wrap_a2;
				}
				return null();
			}
		};
		HX_STACK_LINE(1291)
		::nape::geom::Vec2 a2 = ((  (((me->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(me->zpp_inner_zn->b2->outer) ))->localPointToWorld(_Function_1_2::Block(me),null());		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(1292)
		::nape::geom::Vec2 n = a2->sub(a1,null());		HX_STACK_VAR(n,"n");
		struct _Function_1_3{
			inline static Float Block( ::nape::geom::Vec2 &n){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",1293);
				{
					HX_STACK_LINE(1293)
					if (((bool((n != null())) && bool(n->zpp_disp)))){
						HX_STACK_LINE(1293)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::Vec2 &n){
							HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",1293);
							{
								HX_STACK_LINE(1293)
								if (((bool((n != null())) && bool(n->zpp_disp)))){
									HX_STACK_LINE(1293)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1293)
								{
									HX_STACK_LINE(1293)
									::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1293)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(1293)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1293)
								return n->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static Float Block( ::nape::geom::Vec2 &n){
							HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",1293);
							{
								HX_STACK_LINE(1293)
								if (((bool((n != null())) && bool(n->zpp_disp)))){
									HX_STACK_LINE(1293)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1293)
								{
									HX_STACK_LINE(1293)
									::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1293)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(1293)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1293)
								return n->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_3{
						inline static Float Block( ::nape::geom::Vec2 &n){
							HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",1293);
							{
								HX_STACK_LINE(1293)
								if (((bool((n != null())) && bool(n->zpp_disp)))){
									HX_STACK_LINE(1293)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1293)
								{
									HX_STACK_LINE(1293)
									::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1293)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(1293)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1293)
								return n->zpp_inner->y;
							}
							return null();
						}
					};
					struct _Function_2_4{
						inline static Float Block( ::nape::geom::Vec2 &n){
							HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",1293);
							{
								HX_STACK_LINE(1293)
								if (((bool((n != null())) && bool(n->zpp_disp)))){
									HX_STACK_LINE(1293)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1293)
								{
									HX_STACK_LINE(1293)
									::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1293)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(1293)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1293)
								return n->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1293)
					return ::Math_obj::sqrt(((_Function_2_1::Block(n) * _Function_2_2::Block(n)) + (_Function_2_3::Block(n) * _Function_2_4::Block(n))));
				}
				return null();
			}
		};
		HX_STACK_LINE(1293)
		Float nl = _Function_1_3::Block(n);		HX_STACK_VAR(nl,"nl");
		HX_STACK_LINE(1294)
		if (((nl != (int)0))){
			HX_STACK_LINE(1295)
			n->muleq((Float((int)1) / Float(nl)));
			HX_STACK_LINE(1296)
			::nape::geom::Vec2 mid = a1->add(a2,null())->muleq(0.5);		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(1297)
			::nape::geom::Vec2 min1 = mid->sub(n->mul((this->jointMin * 0.5),true),null());		HX_STACK_VAR(min1,"min1");
			HX_STACK_LINE(1298)
			::nape::geom::Vec2 min2 = mid->add(n->mul((this->jointMin * 0.5),true),null());		HX_STACK_VAR(min2,"min2");
			HX_STACK_LINE(1299)
			::nape::geom::Vec2 max1 = mid->sub(n->mul((this->jointMax * 0.5),true),null());		HX_STACK_VAR(max1,"max1");
			HX_STACK_LINE(1300)
			::nape::geom::Vec2 max2 = mid->add(n->mul((this->jointMax * 0.5),true),null());		HX_STACK_VAR(max2,"max2");
			HX_STACK_LINE(1301)
			g->drawLine(min1,min2,(int)16776960);
			HX_STACK_LINE(1302)
			g->drawLine(max1,min1,(int)65535);
			HX_STACK_LINE(1303)
			g->drawLine(max2,min2,(int)65535);
			HX_STACK_LINE(1304)
			if ((!(this->stiff))){
				HX_STACK_LINE(1304)
				if (((nl > this->jointMax))){
					HX_STACK_LINE(1306)
					g->drawSpring(max1,a1,(int)65535,null(),null());
					HX_STACK_LINE(1307)
					g->drawSpring(max2,a2,(int)65535,null(),null());
				}
				else{
					HX_STACK_LINE(1309)
					if (((nl < this->jointMin))){
						HX_STACK_LINE(1310)
						g->drawSpring(min1,a1,(int)16776960,null(),null());
						HX_STACK_LINE(1311)
						g->drawSpring(min2,a2,(int)16776960,null(),null());
					}
				}
			}
			HX_STACK_LINE(1314)
			{
				HX_STACK_LINE(1314)
				if (((bool((mid != null())) && bool(mid->zpp_disp)))){
					HX_STACK_LINE(1314)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1314)
				{
					HX_STACK_LINE(1314)
					::zpp_nape::geom::ZPP_Vec2 _this = mid->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1314)
					if ((_this->_immutable)){
						HX_STACK_LINE(1314)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1314)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1314)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1314)
				if ((mid->zpp_inner->_inuse)){
					HX_STACK_LINE(1314)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1314)
				::zpp_nape::geom::ZPP_Vec2 inner = mid->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1314)
				mid->zpp_inner->outer = null();
				HX_STACK_LINE(1314)
				mid->zpp_inner = null();
				HX_STACK_LINE(1314)
				{
					HX_STACK_LINE(1314)
					::nape::geom::Vec2 o = mid;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1314)
					{
					}
					HX_STACK_LINE(1314)
					o->zpp_pool = null();
					HX_STACK_LINE(1314)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1314)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1314)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1314)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1314)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1314)
				{
					HX_STACK_LINE(1314)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1314)
					{
					}
					HX_STACK_LINE(1314)
					{
						HX_STACK_LINE(1314)
						if (((o->outer != null()))){
							HX_STACK_LINE(1314)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1314)
							o->outer = null();
						}
						HX_STACK_LINE(1314)
						o->_isimmutable = null();
						HX_STACK_LINE(1314)
						o->_validate = null();
						HX_STACK_LINE(1314)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1314)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1314)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1315)
			{
				HX_STACK_LINE(1315)
				if (((bool((min1 != null())) && bool(min1->zpp_disp)))){
					HX_STACK_LINE(1315)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1315)
				{
					HX_STACK_LINE(1315)
					::zpp_nape::geom::ZPP_Vec2 _this = min1->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1315)
					if ((_this->_immutable)){
						HX_STACK_LINE(1315)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1315)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1315)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1315)
				if ((min1->zpp_inner->_inuse)){
					HX_STACK_LINE(1315)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1315)
				::zpp_nape::geom::ZPP_Vec2 inner = min1->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1315)
				min1->zpp_inner->outer = null();
				HX_STACK_LINE(1315)
				min1->zpp_inner = null();
				HX_STACK_LINE(1315)
				{
					HX_STACK_LINE(1315)
					::nape::geom::Vec2 o = min1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1315)
					{
					}
					HX_STACK_LINE(1315)
					o->zpp_pool = null();
					HX_STACK_LINE(1315)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1315)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1315)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1315)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1315)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1315)
				{
					HX_STACK_LINE(1315)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1315)
					{
					}
					HX_STACK_LINE(1315)
					{
						HX_STACK_LINE(1315)
						if (((o->outer != null()))){
							HX_STACK_LINE(1315)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1315)
							o->outer = null();
						}
						HX_STACK_LINE(1315)
						o->_isimmutable = null();
						HX_STACK_LINE(1315)
						o->_validate = null();
						HX_STACK_LINE(1315)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1315)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1315)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1316)
			{
				HX_STACK_LINE(1316)
				if (((bool((min2 != null())) && bool(min2->zpp_disp)))){
					HX_STACK_LINE(1316)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1316)
				{
					HX_STACK_LINE(1316)
					::zpp_nape::geom::ZPP_Vec2 _this = min2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1316)
					if ((_this->_immutable)){
						HX_STACK_LINE(1316)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1316)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1316)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1316)
				if ((min2->zpp_inner->_inuse)){
					HX_STACK_LINE(1316)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1316)
				::zpp_nape::geom::ZPP_Vec2 inner = min2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1316)
				min2->zpp_inner->outer = null();
				HX_STACK_LINE(1316)
				min2->zpp_inner = null();
				HX_STACK_LINE(1316)
				{
					HX_STACK_LINE(1316)
					::nape::geom::Vec2 o = min2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1316)
					{
					}
					HX_STACK_LINE(1316)
					o->zpp_pool = null();
					HX_STACK_LINE(1316)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1316)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1316)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1316)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1316)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1316)
				{
					HX_STACK_LINE(1316)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1316)
					{
					}
					HX_STACK_LINE(1316)
					{
						HX_STACK_LINE(1316)
						if (((o->outer != null()))){
							HX_STACK_LINE(1316)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1316)
							o->outer = null();
						}
						HX_STACK_LINE(1316)
						o->_isimmutable = null();
						HX_STACK_LINE(1316)
						o->_validate = null();
						HX_STACK_LINE(1316)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1316)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1316)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1317)
			{
				HX_STACK_LINE(1317)
				if (((bool((max1 != null())) && bool(max1->zpp_disp)))){
					HX_STACK_LINE(1317)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1317)
				{
					HX_STACK_LINE(1317)
					::zpp_nape::geom::ZPP_Vec2 _this = max1->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1317)
					if ((_this->_immutable)){
						HX_STACK_LINE(1317)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1317)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1317)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1317)
				if ((max1->zpp_inner->_inuse)){
					HX_STACK_LINE(1317)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1317)
				::zpp_nape::geom::ZPP_Vec2 inner = max1->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1317)
				max1->zpp_inner->outer = null();
				HX_STACK_LINE(1317)
				max1->zpp_inner = null();
				HX_STACK_LINE(1317)
				{
					HX_STACK_LINE(1317)
					::nape::geom::Vec2 o = max1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1317)
					{
					}
					HX_STACK_LINE(1317)
					o->zpp_pool = null();
					HX_STACK_LINE(1317)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1317)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1317)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1317)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1317)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1317)
				{
					HX_STACK_LINE(1317)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1317)
					{
					}
					HX_STACK_LINE(1317)
					{
						HX_STACK_LINE(1317)
						if (((o->outer != null()))){
							HX_STACK_LINE(1317)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1317)
							o->outer = null();
						}
						HX_STACK_LINE(1317)
						o->_isimmutable = null();
						HX_STACK_LINE(1317)
						o->_validate = null();
						HX_STACK_LINE(1317)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1317)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1317)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1318)
			{
				HX_STACK_LINE(1318)
				if (((bool((max2 != null())) && bool(max2->zpp_disp)))){
					HX_STACK_LINE(1318)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1318)
				{
					HX_STACK_LINE(1318)
					::zpp_nape::geom::ZPP_Vec2 _this = max2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1318)
					if ((_this->_immutable)){
						HX_STACK_LINE(1318)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1318)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1318)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1318)
				if ((max2->zpp_inner->_inuse)){
					HX_STACK_LINE(1318)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1318)
				::zpp_nape::geom::ZPP_Vec2 inner = max2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1318)
				max2->zpp_inner->outer = null();
				HX_STACK_LINE(1318)
				max2->zpp_inner = null();
				HX_STACK_LINE(1318)
				{
					HX_STACK_LINE(1318)
					::nape::geom::Vec2 o = max2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1318)
					{
					}
					HX_STACK_LINE(1318)
					o->zpp_pool = null();
					HX_STACK_LINE(1318)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1318)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1318)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1318)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1318)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1318)
				{
					HX_STACK_LINE(1318)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1318)
					{
					}
					HX_STACK_LINE(1318)
					{
						HX_STACK_LINE(1318)
						if (((o->outer != null()))){
							HX_STACK_LINE(1318)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1318)
							o->outer = null();
						}
						HX_STACK_LINE(1318)
						o->_isimmutable = null();
						HX_STACK_LINE(1318)
						o->_validate = null();
						HX_STACK_LINE(1318)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1318)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1318)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1320)
		g->drawFilledCircle(a1,(int)2,(int)255);
		HX_STACK_LINE(1321)
		g->drawFilledCircle(a2,(int)2,(int)16711680);
		HX_STACK_LINE(1322)
		{
			HX_STACK_LINE(1322)
			if (((bool((a1 != null())) && bool(a1->zpp_disp)))){
				HX_STACK_LINE(1322)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1322)
			{
				HX_STACK_LINE(1322)
				::zpp_nape::geom::ZPP_Vec2 _this = a1->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1322)
				if ((_this->_immutable)){
					HX_STACK_LINE(1322)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1322)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(1322)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1322)
			if ((a1->zpp_inner->_inuse)){
				HX_STACK_LINE(1322)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1322)
			::zpp_nape::geom::ZPP_Vec2 inner = a1->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1322)
			a1->zpp_inner->outer = null();
			HX_STACK_LINE(1322)
			a1->zpp_inner = null();
			HX_STACK_LINE(1322)
			{
				HX_STACK_LINE(1322)
				::nape::geom::Vec2 o = a1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1322)
				{
				}
				HX_STACK_LINE(1322)
				o->zpp_pool = null();
				HX_STACK_LINE(1322)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1322)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1322)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1322)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1322)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1322)
			{
				HX_STACK_LINE(1322)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1322)
				{
				}
				HX_STACK_LINE(1322)
				{
					HX_STACK_LINE(1322)
					if (((o->outer != null()))){
						HX_STACK_LINE(1322)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1322)
						o->outer = null();
					}
					HX_STACK_LINE(1322)
					o->_isimmutable = null();
					HX_STACK_LINE(1322)
					o->_validate = null();
					HX_STACK_LINE(1322)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1322)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1322)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1323)
		{
			HX_STACK_LINE(1323)
			if (((bool((a2 != null())) && bool(a2->zpp_disp)))){
				HX_STACK_LINE(1323)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1323)
			{
				HX_STACK_LINE(1323)
				::zpp_nape::geom::ZPP_Vec2 _this = a2->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1323)
				if ((_this->_immutable)){
					HX_STACK_LINE(1323)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1323)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(1323)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1323)
			if ((a2->zpp_inner->_inuse)){
				HX_STACK_LINE(1323)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1323)
			::zpp_nape::geom::ZPP_Vec2 inner = a2->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1323)
			a2->zpp_inner->outer = null();
			HX_STACK_LINE(1323)
			a2->zpp_inner = null();
			HX_STACK_LINE(1323)
			{
				HX_STACK_LINE(1323)
				::nape::geom::Vec2 o = a2;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1323)
				{
				}
				HX_STACK_LINE(1323)
				o->zpp_pool = null();
				HX_STACK_LINE(1323)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1323)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1323)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1323)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1323)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1323)
			{
				HX_STACK_LINE(1323)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1323)
				{
				}
				HX_STACK_LINE(1323)
				{
					HX_STACK_LINE(1323)
					if (((o->outer != null()))){
						HX_STACK_LINE(1323)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1323)
						o->outer = null();
					}
					HX_STACK_LINE(1323)
					o->_isimmutable = null();
					HX_STACK_LINE(1323)
					o->_validate = null();
					HX_STACK_LINE(1323)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1323)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1323)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1324)
		{
			HX_STACK_LINE(1324)
			if (((bool((n != null())) && bool(n->zpp_disp)))){
				HX_STACK_LINE(1324)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1324)
			{
				HX_STACK_LINE(1324)
				::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1324)
				if ((_this->_immutable)){
					HX_STACK_LINE(1324)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1324)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(1324)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1324)
			if ((n->zpp_inner->_inuse)){
				HX_STACK_LINE(1324)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1324)
			::zpp_nape::geom::ZPP_Vec2 inner = n->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1324)
			n->zpp_inner->outer = null();
			HX_STACK_LINE(1324)
			n->zpp_inner = null();
			HX_STACK_LINE(1324)
			{
				HX_STACK_LINE(1324)
				::nape::geom::Vec2 o = n;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1324)
				{
				}
				HX_STACK_LINE(1324)
				o->zpp_pool = null();
				HX_STACK_LINE(1324)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1324)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1324)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1324)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1324)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1324)
			{
				HX_STACK_LINE(1324)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1324)
				{
				}
				HX_STACK_LINE(1324)
				{
					HX_STACK_LINE(1324)
					if (((o->outer != null()))){
						HX_STACK_LINE(1324)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1324)
						o->outer = null();
					}
					HX_STACK_LINE(1324)
					o->_isimmutable = null();
					HX_STACK_LINE(1324)
					o->_validate = null();
					HX_STACK_LINE(1324)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1324)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1324)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


bool ZPP_DistanceJoint_obj::applyImpulsePos( ){
	HX_STACK_PUSH("ZPP_DistanceJoint::applyImpulsePos","zpp_nape/constraint/DistanceJoint.hx",977);
	HX_STACK_THIS(this);
	HX_STACK_LINE(978)
	Float E;		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(979)
	Float j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(980)
	Float r1x = 0.0;		HX_STACK_VAR(r1x,"r1x");
	HX_STACK_LINE(981)
	Float r1y = 0.0;		HX_STACK_VAR(r1y,"r1y");
	HX_STACK_LINE(982)
	{
		HX_STACK_LINE(984)
		r1x = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(985)
		r1y = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(988)
	Float r2x = 0.0;		HX_STACK_VAR(r2x,"r2x");
	HX_STACK_LINE(989)
	Float r2y = 0.0;		HX_STACK_VAR(r2y,"r2y");
	HX_STACK_LINE(990)
	{
		HX_STACK_LINE(992)
		r2x = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(993)
		r2y = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(996)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(997)
	Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(998)
	Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
	struct _Function_1_1{
		inline static Float Block( Float &ny,bool &slack,Float &nx,Float &r1y,Float &r1x,::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this,Float &r2y,Float &r2x){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",999);
			{
				HX_STACK_LINE(1000)
				nx = ((__this->b2->posx + r2x) - ((__this->b1->posx + r1x)));
				HX_STACK_LINE(1001)
				ny = ((__this->b2->posy + r2y) - ((__this->b1->posy + r1y)));
				HX_STACK_LINE(1002)
				Float C = ((nx * nx) + (ny * ny));		HX_STACK_VAR(C,"C");
				HX_STACK_LINE(1003)
				if (((C < ::nape::Config_obj::epsilon))){
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1005)
						nx = (int)0;
						HX_STACK_LINE(1006)
						ny = (int)0;
						HX_STACK_LINE(1007)
						{
						}
						HX_STACK_LINE(1015)
						{
						}
					}
					HX_STACK_LINE(1024)
					C = (int)0;
					HX_STACK_LINE(1025)
					slack = true;
				}
				else{
					struct _Function_3_1{
						inline static Float Block( Float &C){
							HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",1028);
							{
								HX_STACK_LINE(1028)
								{
								}
								HX_STACK_LINE(1028)
								return ::Math_obj::sqrt(C);
							}
							return null();
						}
					};
					HX_STACK_LINE(1028)
					C = _Function_3_1::Block(C);
					HX_STACK_LINE(1029)
					{
						HX_STACK_LINE(1030)
						Float t = (Float(1.0) / Float(C));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1031)
						{
						}
						HX_STACK_LINE(1039)
						hx::MultEq(nx,t);
						HX_STACK_LINE(1040)
						hx::MultEq(ny,t);
					}
					HX_STACK_LINE(1042)
					if ((__this->equal)){
						HX_STACK_LINE(1043)
						hx::SubEq(C,__this->jointMax);
						HX_STACK_LINE(1044)
						slack = false;
					}
					else{
						HX_STACK_LINE(1046)
						if (((C < __this->jointMin))){
							HX_STACK_LINE(1048)
							C = (__this->jointMin - C);
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1050)
								nx = -(nx);
								HX_STACK_LINE(1051)
								ny = -(ny);
							}
							HX_STACK_LINE(1053)
							slack = false;
						}
						else{
							HX_STACK_LINE(1055)
							if (((C > __this->jointMax))){
								HX_STACK_LINE(1056)
								hx::SubEq(C,__this->jointMax);
								HX_STACK_LINE(1057)
								slack = false;
							}
							else{
								HX_STACK_LINE(1060)
								{
									HX_STACK_LINE(1061)
									nx = (int)0;
									HX_STACK_LINE(1062)
									ny = (int)0;
									HX_STACK_LINE(1063)
									{
									}
									HX_STACK_LINE(1071)
									{
									}
								}
								HX_STACK_LINE(1080)
								C = (int)0;
								HX_STACK_LINE(1081)
								slack = true;
							}
						}
					}
				}
				HX_STACK_LINE(1085)
				return C;
			}
			return null();
		}
	};
	HX_STACK_LINE(999)
	E = _Function_1_1::Block(ny,slack,nx,r1y,r1x,this,r2y,r2x);
	HX_STACK_LINE(1087)
	if ((!(slack))){
		HX_STACK_LINE(1088)
		if (((bool(this->breakUnderError) && bool(((E * E) > (this->maxError * this->maxError)))))){
			HX_STACK_LINE(1088)
			return true;
		}
		HX_STACK_LINE(1089)
		if ((((E * E) < (::nape::Config_obj::constraintLinearSlop * ::nape::Config_obj::constraintLinearSlop)))){
			HX_STACK_LINE(1089)
			return false;
		}
		HX_STACK_LINE(1090)
		hx::MultEq(E,0.5);
		HX_STACK_LINE(1091)
		if ((((E * E) > (int)6))){
			HX_STACK_LINE(1092)
			Float k = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(1093)
			if (((k > ::nape::Config_obj::epsilon))){
				HX_STACK_LINE(1094)
				k = (Float(0.75) / Float(k));
				HX_STACK_LINE(1095)
				j = (-(E) * k);
				HX_STACK_LINE(1096)
				if (((bool(this->equal) || bool((j < (int)0))))){
					HX_STACK_LINE(1097)
					{
						HX_STACK_LINE(1098)
						Float t = (j * this->b1->imass);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1099)
						{
						}
						HX_STACK_LINE(1107)
						hx::SubEq(this->b1->posx,(nx * t));
						HX_STACK_LINE(1108)
						hx::SubEq(this->b1->posy,(ny * t));
					}
					HX_STACK_LINE(1110)
					{
						HX_STACK_LINE(1111)
						Float t = (j * this->b2->imass);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1112)
						{
						}
						HX_STACK_LINE(1120)
						hx::AddEq(this->b2->posx,(nx * t));
						HX_STACK_LINE(1121)
						hx::AddEq(this->b2->posy,(ny * t));
					}
					struct _Function_5_1{
						inline static Float Block( Float &ny,bool &slack,Float &nx,Float &r1y,Float &r1x,::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this,Float &r2y,Float &r2x){
							HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",1123);
							{
								HX_STACK_LINE(1124)
								nx = ((__this->b2->posx + r2x) - ((__this->b1->posx + r1x)));
								HX_STACK_LINE(1125)
								ny = ((__this->b2->posy + r2y) - ((__this->b1->posy + r1y)));
								HX_STACK_LINE(1126)
								Float C = ((nx * nx) + (ny * ny));		HX_STACK_VAR(C,"C");
								HX_STACK_LINE(1127)
								if (((C < ::nape::Config_obj::epsilon))){
									HX_STACK_LINE(1128)
									{
										HX_STACK_LINE(1129)
										nx = (int)0;
										HX_STACK_LINE(1130)
										ny = (int)0;
										HX_STACK_LINE(1131)
										{
										}
										HX_STACK_LINE(1139)
										{
										}
									}
									HX_STACK_LINE(1148)
									C = (int)0;
									HX_STACK_LINE(1149)
									slack = true;
								}
								else{
									struct _Function_7_1{
										inline static Float Block( Float &C){
											HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",1152);
											{
												HX_STACK_LINE(1152)
												{
												}
												HX_STACK_LINE(1152)
												return ::Math_obj::sqrt(C);
											}
											return null();
										}
									};
									HX_STACK_LINE(1152)
									C = _Function_7_1::Block(C);
									HX_STACK_LINE(1153)
									{
										HX_STACK_LINE(1154)
										Float t = (Float(1.0) / Float(C));		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(1155)
										{
										}
										HX_STACK_LINE(1163)
										hx::MultEq(nx,t);
										HX_STACK_LINE(1164)
										hx::MultEq(ny,t);
									}
									HX_STACK_LINE(1166)
									if ((__this->equal)){
										HX_STACK_LINE(1167)
										hx::SubEq(C,__this->jointMax);
										HX_STACK_LINE(1168)
										slack = false;
									}
									else{
										HX_STACK_LINE(1170)
										if (((C < __this->jointMin))){
											HX_STACK_LINE(1172)
											C = (__this->jointMin - C);
											HX_STACK_LINE(1173)
											{
												HX_STACK_LINE(1174)
												nx = -(nx);
												HX_STACK_LINE(1175)
												ny = -(ny);
											}
											HX_STACK_LINE(1177)
											slack = false;
										}
										else{
											HX_STACK_LINE(1179)
											if (((C > __this->jointMax))){
												HX_STACK_LINE(1180)
												hx::SubEq(C,__this->jointMax);
												HX_STACK_LINE(1181)
												slack = false;
											}
											else{
												HX_STACK_LINE(1184)
												{
													HX_STACK_LINE(1185)
													nx = (int)0;
													HX_STACK_LINE(1186)
													ny = (int)0;
													HX_STACK_LINE(1187)
													{
													}
													HX_STACK_LINE(1195)
													{
													}
												}
												HX_STACK_LINE(1204)
												C = (int)0;
												HX_STACK_LINE(1205)
												slack = true;
											}
										}
									}
								}
								HX_STACK_LINE(1209)
								return C;
							}
							return null();
						}
					};
					HX_STACK_LINE(1123)
					E = _Function_5_1::Block(ny,slack,nx,r1y,r1x,this,r2y,r2x);
					HX_STACK_LINE(1211)
					hx::MultEq(E,0.5);
				}
			}
		}
		HX_STACK_LINE(1215)
		Float cx1;		HX_STACK_VAR(cx1,"cx1");
		Float cx2;		HX_STACK_VAR(cx2,"cx2");
		struct _Function_2_1{
			inline static Float Block( Float &ny,Float &nx,Float &r1y,Float &cx2,Float &cx1,Float &r1x,::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this,Float &r2y,Float &r2x){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",1216);
				{
					HX_STACK_LINE(1217)
					cx1 = ((ny * r1x) - (nx * r1y));
					HX_STACK_LINE(1218)
					cx2 = ((ny * r2x) - (nx * r2y));
					HX_STACK_LINE(1219)
					return (((__this->b1->smass + __this->b2->smass) + ((cx1 * cx1) * __this->b1->sinertia)) + ((cx2 * cx2) * __this->b2->sinertia));
				}
				return null();
			}
		};
		HX_STACK_LINE(1216)
		Float k = _Function_2_1::Block(ny,nx,r1y,cx2,cx1,r1x,this,r2y,r2x);		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(1221)
		if (((k != (int)0))){
			HX_STACK_LINE(1221)
			k = (Float((int)1) / Float(k));
		}
		HX_STACK_LINE(1222)
		j = (-(E) * k);
		HX_STACK_LINE(1223)
		if (((bool(this->equal) || bool((j < (int)0))))){
			HX_STACK_LINE(1225)
			{
				HX_STACK_LINE(1226)
				Float t = (this->b1->imass * j);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1227)
				{
				}
				HX_STACK_LINE(1235)
				hx::SubEq(this->b1->posx,(nx * t));
				HX_STACK_LINE(1236)
				hx::SubEq(this->b1->posy,(ny * t));
			}
			HX_STACK_LINE(1238)
			{
				HX_STACK_LINE(1239)
				Float t = (this->b2->imass * j);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1240)
				{
				}
				HX_STACK_LINE(1248)
				hx::AddEq(this->b2->posx,(nx * t));
				HX_STACK_LINE(1249)
				hx::AddEq(this->b2->posy,(ny * t));
			}
			HX_STACK_LINE(1251)
			{
				HX_STACK_LINE(1251)
				::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
				Float dr = ((-(cx1) * this->b1->iinertia) * j);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(1251)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(1251)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(1251)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(1251)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(1251)
					{
					}
					HX_STACK_LINE(1251)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1251)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(1251)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1251)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1251)
					Float nx1 = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx1,"nx1");
					HX_STACK_LINE(1251)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(1251)
					_this->axisx = nx1;
				}
			}
			HX_STACK_LINE(1252)
			{
				HX_STACK_LINE(1252)
				::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
				Float dr = ((cx2 * this->b2->iinertia) * j);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(1252)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(1252)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(1252)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(1252)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(1252)
					{
					}
					HX_STACK_LINE(1252)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1252)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(1252)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1252)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1252)
					Float nx1 = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx1,"nx1");
					HX_STACK_LINE(1252)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(1252)
					_this->axisx = nx1;
				}
			}
		}
	}
	HX_STACK_LINE(1286)
	return false;
}


bool ZPP_DistanceJoint_obj::applyImpulseVel( ){
	HX_STACK_PUSH("ZPP_DistanceJoint::applyImpulseVel","zpp_nape/constraint/DistanceJoint.hx",887);
	HX_STACK_THIS(this);
	HX_STACK_LINE(888)
	if ((this->slack)){
		HX_STACK_LINE(888)
		return false;
	}
	HX_STACK_LINE(889)
	Float E = ((((this->nx * ((((this->b2->velx + this->b2->kinvelx) - this->b1->velx) - this->b1->kinvelx))) + (this->ny * ((((this->b2->vely + this->b2->kinvely) - this->b1->vely) - this->b1->kinvely)))) + (((this->b2->angvel + this->b2->kinangvel)) * this->cx2)) - (((this->b1->angvel + this->b1->kinangvel)) * this->cx1));		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(892)
	Float j = ((this->kMass * ((this->bias - E))) - (this->jAcc * this->gamma));		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(893)
	{
		HX_STACK_LINE(894)
		{
		}
		HX_STACK_LINE(902)
		Float jOld = this->jAcc;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(903)
		hx::AddEq(this->jAcc,j);
		HX_STACK_LINE(904)
		{
			HX_STACK_LINE(905)
			if (((bool(!(this->equal)) && bool((this->jAcc > (int)0))))){
				HX_STACK_LINE(905)
				this->jAcc = (int)0;
			}
			HX_STACK_LINE(906)
			if (((bool(this->breakUnderForce) && bool((this->jAcc < -(this->jMax)))))){
				HX_STACK_LINE(906)
				return true;
			}
			HX_STACK_LINE(907)
			if ((!(this->stiff))){
				HX_STACK_LINE(907)
				if (((this->jAcc < -(this->jMax)))){
					HX_STACK_LINE(908)
					this->jAcc = -(this->jMax);
				}
			}
		}
		HX_STACK_LINE(911)
		j = (this->jAcc - jOld);
	}
	HX_STACK_LINE(913)
	{
		HX_STACK_LINE(945)
		{
			HX_STACK_LINE(946)
			Float t = (this->b1->imass * j);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(947)
			{
			}
			HX_STACK_LINE(955)
			hx::SubEq(this->b1->velx,(this->nx * t));
			HX_STACK_LINE(956)
			hx::SubEq(this->b1->vely,(this->ny * t));
		}
		HX_STACK_LINE(958)
		{
			HX_STACK_LINE(959)
			Float t = (this->b2->imass * j);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(960)
			{
			}
			HX_STACK_LINE(968)
			hx::AddEq(this->b2->velx,(this->nx * t));
			HX_STACK_LINE(969)
			hx::AddEq(this->b2->vely,(this->ny * t));
		}
		HX_STACK_LINE(971)
		hx::SubEq(this->b1->angvel,((this->cx1 * this->b1->iinertia) * j));
		HX_STACK_LINE(972)
		hx::AddEq(this->b2->angvel,((this->cx2 * this->b2->iinertia) * j));
	}
	HX_STACK_LINE(975)
	return false;
}


Void ZPP_DistanceJoint_obj::warmStart( ){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::warmStart","zpp_nape/constraint/DistanceJoint.hx",823);
		HX_STACK_THIS(this);
		HX_STACK_LINE(823)
		if ((!(this->slack))){
			HX_STACK_LINE(856)
			{
				HX_STACK_LINE(857)
				Float t = (this->b1->imass * this->jAcc);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(858)
				{
				}
				HX_STACK_LINE(866)
				hx::SubEq(this->b1->velx,(this->nx * t));
				HX_STACK_LINE(867)
				hx::SubEq(this->b1->vely,(this->ny * t));
			}
			HX_STACK_LINE(869)
			{
				HX_STACK_LINE(870)
				Float t = (this->b2->imass * this->jAcc);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(871)
				{
				}
				HX_STACK_LINE(879)
				hx::AddEq(this->b2->velx,(this->nx * t));
				HX_STACK_LINE(880)
				hx::AddEq(this->b2->vely,(this->ny * t));
			}
			HX_STACK_LINE(882)
			hx::SubEq(this->b1->angvel,((this->cx1 * this->b1->iinertia) * this->jAcc));
			HX_STACK_LINE(883)
			hx::AddEq(this->b2->angvel,((this->cx2 * this->b2->iinertia) * this->jAcc));
		}
	}
return null();
}


bool ZPP_DistanceJoint_obj::preStep( Float dt){
	HX_STACK_PUSH("ZPP_DistanceJoint::preStep","zpp_nape/constraint/DistanceJoint.hx",687);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dt,"dt");
	HX_STACK_LINE(688)
	if (((this->pre_dt == -1.0))){
		HX_STACK_LINE(688)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(689)
	Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(690)
	this->pre_dt = dt;
	HX_STACK_LINE(691)
	this->stepped = true;
	HX_STACK_LINE(692)
	this->equal = (this->jointMin == this->jointMax);
	HX_STACK_LINE(693)
	{
		HX_STACK_LINE(694)
		this->a1relx = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(695)
		this->a1rely = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(697)
	{
		HX_STACK_LINE(698)
		this->a2relx = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(699)
		this->a2rely = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	struct _Function_1_1{
		inline static Float Block( ::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",701);
			{
				HX_STACK_LINE(702)
				__this->nx = ((__this->b2->posx + __this->a2relx) - ((__this->b1->posx + __this->a1relx)));
				HX_STACK_LINE(703)
				__this->ny = ((__this->b2->posy + __this->a2rely) - ((__this->b1->posy + __this->a1rely)));
				HX_STACK_LINE(704)
				Float C = ((__this->nx * __this->nx) + (__this->ny * __this->ny));		HX_STACK_VAR(C,"C");
				HX_STACK_LINE(705)
				if (((C < ::nape::Config_obj::epsilon))){
					HX_STACK_LINE(706)
					{
						HX_STACK_LINE(707)
						__this->nx = (int)0;
						HX_STACK_LINE(708)
						__this->ny = (int)0;
						HX_STACK_LINE(709)
						{
						}
						HX_STACK_LINE(717)
						{
						}
					}
					HX_STACK_LINE(726)
					C = (int)0;
					HX_STACK_LINE(727)
					__this->slack = true;
				}
				else{
					struct _Function_3_1{
						inline static Float Block( Float &C){
							HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",730);
							{
								HX_STACK_LINE(730)
								{
								}
								HX_STACK_LINE(730)
								return ::Math_obj::sqrt(C);
							}
							return null();
						}
					};
					HX_STACK_LINE(730)
					C = _Function_3_1::Block(C);
					HX_STACK_LINE(731)
					{
						HX_STACK_LINE(732)
						Float t = (Float(1.0) / Float(C));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(733)
						{
						}
						HX_STACK_LINE(741)
						hx::MultEq(__this->nx,t);
						HX_STACK_LINE(742)
						hx::MultEq(__this->ny,t);
					}
					HX_STACK_LINE(744)
					if ((__this->equal)){
						HX_STACK_LINE(745)
						hx::SubEq(C,__this->jointMax);
						HX_STACK_LINE(746)
						__this->slack = false;
					}
					else{
						HX_STACK_LINE(748)
						if (((C < __this->jointMin))){
							HX_STACK_LINE(750)
							C = (__this->jointMin - C);
							HX_STACK_LINE(751)
							{
								HX_STACK_LINE(752)
								__this->nx = -(__this->nx);
								HX_STACK_LINE(753)
								__this->ny = -(__this->ny);
							}
							HX_STACK_LINE(755)
							__this->slack = false;
						}
						else{
							HX_STACK_LINE(757)
							if (((C > __this->jointMax))){
								HX_STACK_LINE(758)
								hx::SubEq(C,__this->jointMax);
								HX_STACK_LINE(759)
								__this->slack = false;
							}
							else{
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(763)
									__this->nx = (int)0;
									HX_STACK_LINE(764)
									__this->ny = (int)0;
									HX_STACK_LINE(765)
									{
									}
									HX_STACK_LINE(773)
									{
									}
								}
								HX_STACK_LINE(782)
								C = (int)0;
								HX_STACK_LINE(783)
								__this->slack = true;
							}
						}
					}
				}
				HX_STACK_LINE(787)
				return C;
			}
			return null();
		}
	};
	HX_STACK_LINE(701)
	Float C = _Function_1_1::Block(this);		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(789)
	if ((!(this->slack))){
		struct _Function_2_1{
			inline static Float Block( ::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",790);
				{
					HX_STACK_LINE(791)
					__this->cx1 = ((__this->ny * __this->a1relx) - (__this->nx * __this->a1rely));
					HX_STACK_LINE(792)
					__this->cx2 = ((__this->ny * __this->a2relx) - (__this->nx * __this->a2rely));
					HX_STACK_LINE(793)
					return (((__this->b1->smass + __this->b2->smass) + ((__this->cx1 * __this->cx1) * __this->b1->sinertia)) + ((__this->cx2 * __this->cx2) * __this->b2->sinertia));
				}
				return null();
			}
		};
		HX_STACK_LINE(790)
		this->kMass = _Function_2_1::Block(this);
		HX_STACK_LINE(795)
		if (((this->kMass != (int)0))){
			HX_STACK_LINE(795)
			this->kMass = (Float((int)1) / Float(this->kMass));
		}
		else{
			HX_STACK_LINE(796)
			this->jAcc = (int)0;
		}
		HX_STACK_LINE(797)
		if ((!(this->stiff))){
			HX_STACK_LINE(798)
			if (((bool(this->breakUnderError) && bool(((C * C) > (this->maxError * this->maxError)))))){
				HX_STACK_LINE(798)
				return true;
			}
			HX_STACK_LINE(799)
			Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
			struct _Function_3_1{
				inline static Float Block( ::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this,Float &biasCoef,Float &dt){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",800);
					{
						HX_STACK_LINE(801)
						Float omega = (((int)2 * ::Math_obj::PI) * __this->frequency);		HX_STACK_VAR(omega,"omega");
						HX_STACK_LINE(802)
						__this->gamma = (Float((int)1) / Float((((dt * omega) * ((((int)2 * __this->damping) + (omega * dt)))))));
						HX_STACK_LINE(803)
						Float ig = (Float((int)1) / Float((((int)1 + __this->gamma))));		HX_STACK_VAR(ig,"ig");
						HX_STACK_LINE(804)
						biasCoef = (((dt * omega) * omega) * __this->gamma);
						HX_STACK_LINE(805)
						hx::MultEq(__this->gamma,ig);
						HX_STACK_LINE(806)
						return ig;
					}
					return null();
				}
			};
			HX_STACK_LINE(800)
			hx::MultEq(this->kMass,_Function_3_1::Block(this,biasCoef,dt));
			HX_STACK_LINE(808)
			this->bias = (-(C) * biasCoef);
			HX_STACK_LINE(809)
			if (((this->bias < -(this->maxError)))){
				HX_STACK_LINE(810)
				this->bias = -(this->maxError);
			}
			else{
				HX_STACK_LINE(811)
				if (((this->bias > this->maxError))){
					HX_STACK_LINE(811)
					this->bias = this->maxError;
				}
			}
		}
		else{
			HX_STACK_LINE(815)
			this->bias = (int)0;
			HX_STACK_LINE(816)
			this->gamma = (int)0;
		}
		HX_STACK_LINE(818)
		hx::MultEq(this->jAcc,dtratio);
		HX_STACK_LINE(819)
		this->jMax = (this->maxForce * dt);
	}
	HX_STACK_LINE(821)
	return false;
}


Void ZPP_DistanceJoint_obj::clearcache( ){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::clearcache","zpp_nape/constraint/DistanceJoint.hx",683);
		HX_STACK_THIS(this);
		HX_STACK_LINE(684)
		this->jAcc = (int)0;
		HX_STACK_LINE(685)
		this->pre_dt = -1.0;
	}
return null();
}


bool ZPP_DistanceJoint_obj::pair_exists( int id,int di){
	HX_STACK_PUSH("ZPP_DistanceJoint::pair_exists","zpp_nape/constraint/DistanceJoint.hx",680);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(680)
	return (bool((bool((this->b1->id == id)) && bool((this->b2->id == di)))) || bool((bool((this->b1->id == di)) && bool((this->b2->id == id)))));
}


Void ZPP_DistanceJoint_obj::forest( ){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::forest","zpp_nape/constraint/DistanceJoint.hx",582);
		HX_STACK_THIS(this);
		HX_STACK_LINE(583)
		if (((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",586);
					{
						HX_STACK_LINE(587)
						::zpp_nape::space::ZPP_Component obj = __this->b1->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(588)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(589)
						while(((obj != obj->parent))){
							HX_STACK_LINE(590)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(591)
							obj->parent = stack;
							HX_STACK_LINE(592)
							stack = obj;
							HX_STACK_LINE(593)
							obj = nxt;
						}
						HX_STACK_LINE(595)
						while(((stack != null()))){
							HX_STACK_LINE(596)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(597)
							stack->parent = obj;
							HX_STACK_LINE(598)
							stack = nxt;
						}
						HX_STACK_LINE(600)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(584)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b1->component == this->b1->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b1->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",605);
					{
						HX_STACK_LINE(606)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(607)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(608)
						while(((obj != obj->parent))){
							HX_STACK_LINE(609)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(610)
							obj->parent = stack;
							HX_STACK_LINE(611)
							stack = obj;
							HX_STACK_LINE(612)
							obj = nxt;
						}
						HX_STACK_LINE(614)
						while(((stack != null()))){
							HX_STACK_LINE(615)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(616)
							stack->parent = obj;
							HX_STACK_LINE(617)
							stack = nxt;
						}
						HX_STACK_LINE(619)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(603)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(622)
			if (((xr != yr))){
				HX_STACK_LINE(622)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(623)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(624)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(624)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(626)
						yr->parent = xr;
						HX_STACK_LINE(627)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(631)
		if (((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",634);
					{
						HX_STACK_LINE(635)
						::zpp_nape::space::ZPP_Component obj = __this->b2->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(636)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(637)
						while(((obj != obj->parent))){
							HX_STACK_LINE(638)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(639)
							obj->parent = stack;
							HX_STACK_LINE(640)
							stack = obj;
							HX_STACK_LINE(641)
							obj = nxt;
						}
						HX_STACK_LINE(643)
						while(((stack != null()))){
							HX_STACK_LINE(644)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(645)
							stack->parent = obj;
							HX_STACK_LINE(646)
							stack = nxt;
						}
						HX_STACK_LINE(648)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(632)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b2->component == this->b2->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b2->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",653);
					{
						HX_STACK_LINE(654)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(655)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(656)
						while(((obj != obj->parent))){
							HX_STACK_LINE(657)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(658)
							obj->parent = stack;
							HX_STACK_LINE(659)
							stack = obj;
							HX_STACK_LINE(660)
							obj = nxt;
						}
						HX_STACK_LINE(662)
						while(((stack != null()))){
							HX_STACK_LINE(663)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(664)
							stack->parent = obj;
							HX_STACK_LINE(665)
							stack = nxt;
						}
						HX_STACK_LINE(667)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(651)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(670)
			if (((xr != yr))){
				HX_STACK_LINE(670)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(671)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(672)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(672)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(674)
						yr->parent = xr;
						HX_STACK_LINE(675)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


Void ZPP_DistanceJoint_obj::wake_connected( ){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::wake_connected","zpp_nape/constraint/DistanceJoint.hx",578);
		HX_STACK_THIS(this);
		HX_STACK_LINE(579)
		if (((bool((this->b1 != null())) && bool((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(579)
			this->b1->wake();
		}
		HX_STACK_LINE(580)
		if (((bool((this->b2 != null())) && bool((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(580)
			this->b2->wake();
		}
	}
return null();
}


Void ZPP_DistanceJoint_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::validate","zpp_nape/constraint/DistanceJoint.hx",571);
		HX_STACK_THIS(this);
		HX_STACK_LINE(572)
		if (((bool((this->b1 == null())) || bool((this->b2 == null()))))){
			HX_STACK_LINE(572)
			hx::Throw (HX_CSTRING("Error: DistanceJoint cannot be simulated null bodies"));
		}
		HX_STACK_LINE(573)
		if (((this->b1 == this->b2))){
			HX_STACK_LINE(573)
			hx::Throw (HX_CSTRING("Error: DistanceJoint cannot be simulated with body1 == body2"));
		}
		HX_STACK_LINE(574)
		if (((bool((this->b1->space != this->space)) || bool((this->b2->space != this->space))))){
			HX_STACK_LINE(574)
			hx::Throw (HX_CSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned"));
		}
		HX_STACK_LINE(575)
		if (((this->jointMin > this->jointMax))){
			HX_STACK_LINE(575)
			hx::Throw (HX_CSTRING("Error: DistanceJoint must have jointMin <= jointMax"));
		}
		HX_STACK_LINE(576)
		if (((bool(!(((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) && bool(!(((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))))){
			HX_STACK_LINE(576)
			hx::Throw (HX_CSTRING("Error: Constraints cannot have both bodies non-dynamic"));
		}
	}
return null();
}


::nape::constraint::Constraint ZPP_DistanceJoint_obj::copy( Array< ::zpp_nape::constraint::ZPP_CopyHelper > dict,Array< ::zpp_nape::constraint::ZPP_CopyHelper > todo){
	HX_STACK_PUSH("ZPP_DistanceJoint::copy","zpp_nape/constraint/DistanceJoint.hx",433);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dict,"dict");
	HX_STACK_ARG(todo,"todo");
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",434);
			{
				HX_STACK_LINE(434)
				::nape::constraint::DistanceJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(434)
				if (((_this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(434)
					_this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(434)
				return _this->zpp_inner_zn->wrap_a1;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",434);
			{
				HX_STACK_LINE(434)
				::nape::constraint::DistanceJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(434)
				if (((_this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(434)
					_this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(434)
				return _this->zpp_inner_zn->wrap_a2;
			}
			return null();
		}
	};
	HX_STACK_LINE(434)
	Array< ::nape::constraint::DistanceJoint > ret = Array_obj< ::nape::constraint::DistanceJoint >::__new().Add(::nape::constraint::DistanceJoint_obj::__new(null(),null(),_Function_1_1::Block(this),_Function_1_2::Block(this),this->jointMin,this->jointMax));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(435)
	this->copyto(ret->__get((int)0));
	HX_STACK_LINE(436)
	if (((bool((dict != null())) && bool((this->b1 != null()))))){
		HX_STACK_LINE(438)
		{
		}
		HX_STACK_LINE(446)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(447)
			while(((_g < dict->length))){
				HX_STACK_LINE(447)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g);		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(447)
				++(_g);
				HX_STACK_LINE(448)
				if (((idc->id == this->b1->id))){
					HX_STACK_LINE(449)
					b = idc->bc;
					HX_STACK_LINE(450)
					break;
				}
			}
		}
		HX_STACK_LINE(453)
		if (((b != null()))){
			HX_STACK_LINE(453)
			ret->__get((int)0)->zpp_inner_zn->b1 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::nape::constraint::DistanceJoint >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/DistanceJoint.hx",454);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(454)
					ret->__get((int)0)->zpp_inner_zn->b1 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(454)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b1->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(457)
	if (((bool((dict != null())) && bool((this->b2 != null()))))){
		HX_STACK_LINE(459)
		{
		}
		HX_STACK_LINE(467)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(468)
			while(((_g < dict->length))){
				HX_STACK_LINE(468)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g);		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(468)
				++(_g);
				HX_STACK_LINE(469)
				if (((idc->id == this->b2->id))){
					HX_STACK_LINE(470)
					b = idc->bc;
					HX_STACK_LINE(471)
					break;
				}
			}
		}
		HX_STACK_LINE(474)
		if (((b != null()))){
			HX_STACK_LINE(474)
			ret->__get((int)0)->zpp_inner_zn->b2 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::nape::constraint::DistanceJoint >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/DistanceJoint.hx",475);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(475)
					ret->__get((int)0)->zpp_inner_zn->b2 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(475)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b2->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(478)
	return ret->__get((int)0);
}


Void ZPP_DistanceJoint_obj::setup_a2( ){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::setup_a2","zpp_nape/constraint/DistanceJoint.hx",420);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",421);
				{
					HX_STACK_LINE(421)
					Float x = __this->a2localx;		HX_STACK_VAR(x,"x");
					Float y = __this->a2localy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(421)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(421)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(421)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(421)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(421)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(421)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(421)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(421)
						ret->zpp_pool = null();
						HX_STACK_LINE(421)
						ret->zpp_disp = false;
						HX_STACK_LINE(421)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(421)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(421)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",421);
								{
									HX_STACK_LINE(421)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(421)
									{
										HX_STACK_LINE(421)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(421)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(421)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(421)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(421)
											ret1->next = null();
										}
										HX_STACK_LINE(421)
										ret1->weak = false;
									}
									HX_STACK_LINE(421)
									ret1->_immutable = immutable;
									HX_STACK_LINE(421)
									{
										HX_STACK_LINE(421)
										ret1->x = x;
										HX_STACK_LINE(421)
										ret1->y = y;
										HX_STACK_LINE(421)
										{
										}
										HX_STACK_LINE(421)
										{
										}
									}
									HX_STACK_LINE(421)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(421)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(421)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(421)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(421)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(421)
							if ((_this->_immutable)){
								HX_STACK_LINE(421)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(421)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(421)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(421)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(421)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",421);
								{
									HX_STACK_LINE(421)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(421)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(421)
									{
										HX_STACK_LINE(421)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(421)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(421)
											_this->_validate();
										}
									}
									HX_STACK_LINE(421)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",421);
								{
									HX_STACK_LINE(421)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(421)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(421)
									{
										HX_STACK_LINE(421)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(421)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(421)
											_this->_validate();
										}
									}
									HX_STACK_LINE(421)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(421)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(421)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(421)
								{
								}
								HX_STACK_LINE(421)
								{
								}
							}
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(421)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(421)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(421)
						ret;
					}
					HX_STACK_LINE(421)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(421)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(421)
		this->wrap_a2 = _Function_1_1::Block(this);
		HX_STACK_LINE(422)
		this->wrap_a2->zpp_inner->_inuse = true;
		HX_STACK_LINE(423)
		this->wrap_a2->zpp_inner->_validate = this->validate_a2_dyn();
		HX_STACK_LINE(424)
		this->wrap_a2->zpp_inner->_invalidate = this->invalidate_a2_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,setup_a2,(void))

Void ZPP_DistanceJoint_obj::invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::invalidate_a2","zpp_nape/constraint/DistanceJoint.hx",396);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(397)
		this->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("a2")));
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(399)
			this->a2localx = x->x;
			HX_STACK_LINE(400)
			this->a2localy = x->y;
			HX_STACK_LINE(401)
			{
			}
			HX_STACK_LINE(409)
			{
			}
		}
		HX_STACK_LINE(418)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DistanceJoint_obj,invalidate_a2,(void))

Void ZPP_DistanceJoint_obj::validate_a2( ){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::validate_a2","zpp_nape/constraint/DistanceJoint.hx",374);
		HX_STACK_THIS(this);
		HX_STACK_LINE(376)
		this->wrap_a2->zpp_inner->x = this->a2localx;
		HX_STACK_LINE(377)
		this->wrap_a2->zpp_inner->y = this->a2localy;
		HX_STACK_LINE(378)
		{
		}
		HX_STACK_LINE(386)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,validate_a2,(void))

Void ZPP_DistanceJoint_obj::setup_a1( ){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::setup_a1","zpp_nape/constraint/DistanceJoint.hx",362);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_DistanceJoint_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",363);
				{
					HX_STACK_LINE(363)
					Float x = __this->a1localx;		HX_STACK_VAR(x,"x");
					Float y = __this->a1localy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(363)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(363)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(363)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(363)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(363)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(363)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(363)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(363)
						ret->zpp_pool = null();
						HX_STACK_LINE(363)
						ret->zpp_disp = false;
						HX_STACK_LINE(363)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(363)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(363)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",363);
								{
									HX_STACK_LINE(363)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(363)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(363)
									{
										HX_STACK_LINE(363)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(363)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(363)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(363)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(363)
											ret1->next = null();
										}
										HX_STACK_LINE(363)
										ret1->weak = false;
									}
									HX_STACK_LINE(363)
									ret1->_immutable = immutable;
									HX_STACK_LINE(363)
									{
										HX_STACK_LINE(363)
										ret1->x = x;
										HX_STACK_LINE(363)
										ret1->y = y;
										HX_STACK_LINE(363)
										{
										}
										HX_STACK_LINE(363)
										{
										}
									}
									HX_STACK_LINE(363)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(363)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(363)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(363)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(363)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(363)
							if ((_this->_immutable)){
								HX_STACK_LINE(363)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(363)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(363)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(363)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(363)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",363);
								{
									HX_STACK_LINE(363)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(363)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(363)
									{
										HX_STACK_LINE(363)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(363)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(363)
											_this->_validate();
										}
									}
									HX_STACK_LINE(363)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",363);
								{
									HX_STACK_LINE(363)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(363)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(363)
									{
										HX_STACK_LINE(363)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(363)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(363)
											_this->_validate();
										}
									}
									HX_STACK_LINE(363)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(363)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(363)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(363)
								{
								}
								HX_STACK_LINE(363)
								{
								}
							}
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(363)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(363)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(363)
						ret;
					}
					HX_STACK_LINE(363)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(363)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(363)
		this->wrap_a1 = _Function_1_1::Block(this);
		HX_STACK_LINE(364)
		this->wrap_a1->zpp_inner->_inuse = true;
		HX_STACK_LINE(365)
		this->wrap_a1->zpp_inner->_validate = this->validate_a1_dyn();
		HX_STACK_LINE(366)
		this->wrap_a1->zpp_inner->_invalidate = this->invalidate_a1_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,setup_a1,(void))

Void ZPP_DistanceJoint_obj::invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::invalidate_a1","zpp_nape/constraint/DistanceJoint.hx",338);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(339)
		this->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("a1")));
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(341)
			this->a1localx = x->x;
			HX_STACK_LINE(342)
			this->a1localy = x->y;
			HX_STACK_LINE(343)
			{
			}
			HX_STACK_LINE(351)
			{
			}
		}
		HX_STACK_LINE(360)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DistanceJoint_obj,invalidate_a1,(void))

Void ZPP_DistanceJoint_obj::validate_a1( ){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::validate_a1","zpp_nape/constraint/DistanceJoint.hx",316);
		HX_STACK_THIS(this);
		HX_STACK_LINE(318)
		this->wrap_a1->zpp_inner->x = this->a1localx;
		HX_STACK_LINE(319)
		this->wrap_a1->zpp_inner->y = this->a1localy;
		HX_STACK_LINE(320)
		{
		}
		HX_STACK_LINE(328)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,validate_a1,(void))

Void ZPP_DistanceJoint_obj::inactiveBodies( ){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::inactiveBodies","zpp_nape/constraint/DistanceJoint.hx",303);
		HX_STACK_THIS(this);
		HX_STACK_LINE(304)
		if (((this->b1 != null()))){
			HX_STACK_LINE(305)
			this->b1->constraints->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(307)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(307)
			if (((this->b2 != null()))){
				HX_STACK_LINE(308)
				this->b2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_DistanceJoint_obj::activeBodies( ){
{
		HX_STACK_PUSH("ZPP_DistanceJoint::activeBodies","zpp_nape/constraint/DistanceJoint.hx",295);
		HX_STACK_THIS(this);
		HX_STACK_LINE(296)
		if (((this->b1 != null()))){
			HX_STACK_LINE(297)
			this->b1->constraints->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(299)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(299)
			if (((this->b2 != null()))){
				HX_STACK_LINE(300)
				this->b2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


::nape::geom::Vec3 ZPP_DistanceJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_PUSH("ZPP_DistanceJoint::bodyImpulse","zpp_nape/constraint/DistanceJoint.hx",288);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(288)
	if ((this->stepped)){
		HX_STACK_LINE(289)
		if (((b == this->b1))){
			HX_STACK_LINE(290)
			return ::nape::geom::Vec3_obj::get((-(this->jAcc) * this->nx),(-(this->jAcc) * this->ny),(-(this->cx1) * this->jAcc));
		}
		else{
			HX_STACK_LINE(291)
			return ::nape::geom::Vec3_obj::get((this->jAcc * this->nx),(this->jAcc * this->ny),(this->cx2 * this->jAcc));
		}
	}
	else{
		HX_STACK_LINE(293)
		return ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	}
	HX_STACK_LINE(288)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DistanceJoint_obj,bodyImpulse,return )

bool ZPP_DistanceJoint_obj::is_slack( ){
	HX_STACK_PUSH("ZPP_DistanceJoint::is_slack","zpp_nape/constraint/DistanceJoint.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_LINE(183)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(185)
		this->a1relx = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(186)
		this->a1rely = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(188)
	{
		HX_STACK_LINE(189)
		this->a2relx = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(190)
		this->a2rely = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(192)
	Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(193)
	Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
	HX_STACK_LINE(194)
	{
		HX_STACK_LINE(195)
		nx = ((this->b2->posx + this->a2relx) - ((this->b1->posx + this->a1relx)));
		HX_STACK_LINE(196)
		ny = ((this->b2->posy + this->a2rely) - ((this->b1->posy + this->a1rely)));
		HX_STACK_LINE(197)
		Float C = ((nx * nx) + (ny * ny));		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(198)
		if (((C < ::nape::Config_obj::epsilon))){
			HX_STACK_LINE(199)
			{
				HX_STACK_LINE(200)
				nx = (int)0;
				HX_STACK_LINE(201)
				ny = (int)0;
				HX_STACK_LINE(202)
				{
				}
				HX_STACK_LINE(210)
				{
				}
			}
			HX_STACK_LINE(219)
			C = (int)0;
			HX_STACK_LINE(220)
			slack = true;
		}
		else{
			struct _Function_3_1{
				inline static Float Block( Float &C){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/DistanceJoint.hx",223);
					{
						HX_STACK_LINE(223)
						{
						}
						HX_STACK_LINE(223)
						return ::Math_obj::sqrt(C);
					}
					return null();
				}
			};
			HX_STACK_LINE(223)
			C = _Function_3_1::Block(C);
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(225)
				Float t = (Float(1.0) / Float(C));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(226)
				{
				}
				HX_STACK_LINE(234)
				hx::MultEq(nx,t);
				HX_STACK_LINE(235)
				hx::MultEq(ny,t);
			}
			HX_STACK_LINE(237)
			if ((this->equal)){
				HX_STACK_LINE(238)
				hx::SubEq(C,this->jointMax);
				HX_STACK_LINE(239)
				slack = false;
			}
			else{
				HX_STACK_LINE(241)
				if (((C < this->jointMin))){
					HX_STACK_LINE(243)
					C = (this->jointMin - C);
					HX_STACK_LINE(244)
					{
						HX_STACK_LINE(245)
						nx = -(nx);
						HX_STACK_LINE(246)
						ny = -(ny);
					}
					HX_STACK_LINE(248)
					slack = false;
				}
				else{
					HX_STACK_LINE(250)
					if (((C > this->jointMax))){
						HX_STACK_LINE(251)
						hx::SubEq(C,this->jointMax);
						HX_STACK_LINE(252)
						slack = false;
					}
					else{
						HX_STACK_LINE(255)
						{
							HX_STACK_LINE(256)
							nx = (int)0;
							HX_STACK_LINE(257)
							ny = (int)0;
							HX_STACK_LINE(258)
							{
							}
							HX_STACK_LINE(266)
							{
							}
						}
						HX_STACK_LINE(275)
						C = (int)0;
						HX_STACK_LINE(276)
						slack = true;
					}
				}
			}
		}
		HX_STACK_LINE(280)
		C;
	}
	HX_STACK_LINE(282)
	return slack;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,is_slack,return )


ZPP_DistanceJoint_obj::ZPP_DistanceJoint_obj()
{
}

void ZPP_DistanceJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_DistanceJoint);
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(kMass,"kMass");
	HX_MARK_MEMBER_NAME(wrap_a2,"wrap_a2");
	HX_MARK_MEMBER_NAME(a2rely,"a2rely");
	HX_MARK_MEMBER_NAME(a2relx,"a2relx");
	HX_MARK_MEMBER_NAME(a2localy,"a2localy");
	HX_MARK_MEMBER_NAME(a2localx,"a2localx");
	HX_MARK_MEMBER_NAME(b2,"b2");
	HX_MARK_MEMBER_NAME(wrap_a1,"wrap_a1");
	HX_MARK_MEMBER_NAME(a1rely,"a1rely");
	HX_MARK_MEMBER_NAME(a1relx,"a1relx");
	HX_MARK_MEMBER_NAME(a1localy,"a1localy");
	HX_MARK_MEMBER_NAME(a1localx,"a1localx");
	HX_MARK_MEMBER_NAME(b1,"b1");
	HX_MARK_MEMBER_NAME(cx2,"cx2");
	HX_MARK_MEMBER_NAME(cx1,"cx1");
	HX_MARK_MEMBER_NAME(ny,"ny");
	HX_MARK_MEMBER_NAME(nx,"nx");
	HX_MARK_MEMBER_NAME(equal,"equal");
	HX_MARK_MEMBER_NAME(slack,"slack");
	HX_MARK_MEMBER_NAME(jointMax,"jointMax");
	HX_MARK_MEMBER_NAME(jointMin,"jointMin");
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_DistanceJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(kMass,"kMass");
	HX_VISIT_MEMBER_NAME(wrap_a2,"wrap_a2");
	HX_VISIT_MEMBER_NAME(a2rely,"a2rely");
	HX_VISIT_MEMBER_NAME(a2relx,"a2relx");
	HX_VISIT_MEMBER_NAME(a2localy,"a2localy");
	HX_VISIT_MEMBER_NAME(a2localx,"a2localx");
	HX_VISIT_MEMBER_NAME(b2,"b2");
	HX_VISIT_MEMBER_NAME(wrap_a1,"wrap_a1");
	HX_VISIT_MEMBER_NAME(a1rely,"a1rely");
	HX_VISIT_MEMBER_NAME(a1relx,"a1relx");
	HX_VISIT_MEMBER_NAME(a1localy,"a1localy");
	HX_VISIT_MEMBER_NAME(a1localx,"a1localx");
	HX_VISIT_MEMBER_NAME(b1,"b1");
	HX_VISIT_MEMBER_NAME(cx2,"cx2");
	HX_VISIT_MEMBER_NAME(cx1,"cx1");
	HX_VISIT_MEMBER_NAME(ny,"ny");
	HX_VISIT_MEMBER_NAME(nx,"nx");
	HX_VISIT_MEMBER_NAME(equal,"equal");
	HX_VISIT_MEMBER_NAME(slack,"slack");
	HX_VISIT_MEMBER_NAME(jointMax,"jointMax");
	HX_VISIT_MEMBER_NAME(jointMin,"jointMin");
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_DistanceJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		if (HX_FIELD_EQ(inName,"ny") ) { return ny; }
		if (HX_FIELD_EQ(inName,"nx") ) { return nx; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx2") ) { return cx2; }
		if (HX_FIELD_EQ(inName,"cx1") ) { return cx1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"bias") ) { return bias; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		if (HX_FIELD_EQ(inName,"kMass") ) { return kMass; }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal; }
		if (HX_FIELD_EQ(inName,"slack") ) { return slack; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		if (HX_FIELD_EQ(inName,"a2rely") ) { return a2rely; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { return a2relx; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { return a1rely; }
		if (HX_FIELD_EQ(inName,"a1relx") ) { return a1relx; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		if (HX_FIELD_EQ(inName,"stepped") ) { return stepped; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { return wrap_a2; }
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { return wrap_a1; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"setup_a2") ) { return setup_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"a2localy") ) { return a2localy; }
		if (HX_FIELD_EQ(inName,"a2localx") ) { return a2localx; }
		if (HX_FIELD_EQ(inName,"setup_a1") ) { return setup_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"a1localy") ) { return a1localy; }
		if (HX_FIELD_EQ(inName,"a1localx") ) { return a1localx; }
		if (HX_FIELD_EQ(inName,"is_slack") ) { return is_slack_dyn(); }
		if (HX_FIELD_EQ(inName,"jointMax") ) { return jointMax; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { return jointMin; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearcache") ) { return clearcache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pair_exists") ) { return pair_exists_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a2") ) { return validate_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a1") ) { return validate_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidate_a2") ) { return invalidate_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a1") ) { return invalidate_a1_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wake_connected") ) { return wake_connected_dyn(); }
		if (HX_FIELD_EQ(inName,"inactiveBodies") ) { return inactiveBodies_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_DistanceJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ny") ) { ny=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nx") ) { nx=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx2") ) { cx2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx1") ) { cx1=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMass") ) { kMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"equal") ) { equal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slack") ) { slack=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"a2rely") ) { a2rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { a2relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { a1rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1relx") ) { a1relx=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { wrap_a2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { wrap_a1=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"a2localy") ) { a2localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localx") ) { a2localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localy") ) { a1localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localx") ) { a1localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { jointMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { jointMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::DistanceJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_DistanceJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stepped"));
	outFields->push(HX_CSTRING("bias"));
	outFields->push(HX_CSTRING("gamma"));
	outFields->push(HX_CSTRING("jMax"));
	outFields->push(HX_CSTRING("jAcc"));
	outFields->push(HX_CSTRING("kMass"));
	outFields->push(HX_CSTRING("wrap_a2"));
	outFields->push(HX_CSTRING("a2rely"));
	outFields->push(HX_CSTRING("a2relx"));
	outFields->push(HX_CSTRING("a2localy"));
	outFields->push(HX_CSTRING("a2localx"));
	outFields->push(HX_CSTRING("b2"));
	outFields->push(HX_CSTRING("wrap_a1"));
	outFields->push(HX_CSTRING("a1rely"));
	outFields->push(HX_CSTRING("a1relx"));
	outFields->push(HX_CSTRING("a1localy"));
	outFields->push(HX_CSTRING("a1localx"));
	outFields->push(HX_CSTRING("b1"));
	outFields->push(HX_CSTRING("cx2"));
	outFields->push(HX_CSTRING("cx1"));
	outFields->push(HX_CSTRING("ny"));
	outFields->push(HX_CSTRING("nx"));
	outFields->push(HX_CSTRING("equal"));
	outFields->push(HX_CSTRING("slack"));
	outFields->push(HX_CSTRING("jointMax"));
	outFields->push(HX_CSTRING("jointMin"));
	outFields->push(HX_CSTRING("outer_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("applyImpulsePos"),
	HX_CSTRING("applyImpulseVel"),
	HX_CSTRING("warmStart"),
	HX_CSTRING("preStep"),
	HX_CSTRING("clearcache"),
	HX_CSTRING("pair_exists"),
	HX_CSTRING("forest"),
	HX_CSTRING("wake_connected"),
	HX_CSTRING("validate"),
	HX_CSTRING("copy"),
	HX_CSTRING("stepped"),
	HX_CSTRING("bias"),
	HX_CSTRING("gamma"),
	HX_CSTRING("jMax"),
	HX_CSTRING("jAcc"),
	HX_CSTRING("kMass"),
	HX_CSTRING("wrap_a2"),
	HX_CSTRING("setup_a2"),
	HX_CSTRING("invalidate_a2"),
	HX_CSTRING("validate_a2"),
	HX_CSTRING("a2rely"),
	HX_CSTRING("a2relx"),
	HX_CSTRING("a2localy"),
	HX_CSTRING("a2localx"),
	HX_CSTRING("b2"),
	HX_CSTRING("wrap_a1"),
	HX_CSTRING("setup_a1"),
	HX_CSTRING("invalidate_a1"),
	HX_CSTRING("validate_a1"),
	HX_CSTRING("a1rely"),
	HX_CSTRING("a1relx"),
	HX_CSTRING("a1localy"),
	HX_CSTRING("a1localx"),
	HX_CSTRING("b1"),
	HX_CSTRING("inactiveBodies"),
	HX_CSTRING("activeBodies"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("cx2"),
	HX_CSTRING("cx1"),
	HX_CSTRING("ny"),
	HX_CSTRING("nx"),
	HX_CSTRING("is_slack"),
	HX_CSTRING("equal"),
	HX_CSTRING("slack"),
	HX_CSTRING("jointMax"),
	HX_CSTRING("jointMin"),
	HX_CSTRING("outer_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_DistanceJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_DistanceJoint_obj::__mClass,"__mClass");
};

Class ZPP_DistanceJoint_obj::__mClass;

void ZPP_DistanceJoint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_DistanceJoint"), hx::TCanCast< ZPP_DistanceJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_DistanceJoint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
