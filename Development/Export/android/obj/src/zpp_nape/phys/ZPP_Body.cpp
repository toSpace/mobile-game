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
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
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
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_Body
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_Body_obj::__construct()
{
HX_STACK_PUSH("ZPP_Body::new","zpp_nape/phys/Body.hx",174);
{
	HX_STACK_LINE(1049)
	this->wrap_worldCOM = null();
	HX_STACK_LINE(1048)
	this->wrap_localCOM = null();
	HX_STACK_LINE(1047)
	this->zip_worldCOM = false;
	HX_STACK_LINE(1046)
	this->worldCOMy = 0.0;
	HX_STACK_LINE(1045)
	this->worldCOMx = 0.0;
	HX_STACK_LINE(1044)
	this->zip_localCOM = false;
	HX_STACK_LINE(1043)
	this->localCOMy = 0.0;
	HX_STACK_LINE(1042)
	this->localCOMx = 0.0;
	HX_STACK_LINE(976)
	this->zip_aabb = false;
	HX_STACK_LINE(975)
	this->aabb = null();
	HX_STACK_LINE(935)
	this->norotate = false;
	HX_STACK_LINE(934)
	this->sinertia = 0.0;
	HX_STACK_LINE(933)
	this->iinertia = 0.0;
	HX_STACK_LINE(932)
	this->cinertia = 0.0;
	HX_STACK_LINE(931)
	this->zip_inertia = false;
	HX_STACK_LINE(930)
	this->inertia = 0.0;
	HX_STACK_LINE(929)
	this->inertiaMode = (int)0;
	HX_STACK_LINE(895)
	this->zip_gravMassScale = false;
	HX_STACK_LINE(894)
	this->gravMassScale = 0.0;
	HX_STACK_LINE(893)
	this->gravMassMode = (int)0;
	HX_STACK_LINE(892)
	this->zip_gravMass = false;
	HX_STACK_LINE(891)
	this->gravMass = 0.0;
	HX_STACK_LINE(856)
	this->nomove = false;
	HX_STACK_LINE(855)
	this->cmass = 0.0;
	HX_STACK_LINE(854)
	this->smass = 0.0;
	HX_STACK_LINE(853)
	this->imass = 0.0;
	HX_STACK_LINE(852)
	this->massMode = (int)0;
	HX_STACK_LINE(851)
	this->zip_mass = false;
	HX_STACK_LINE(850)
	this->mass = 0.0;
	HX_STACK_LINE(803)
	this->zip_axis = false;
	HX_STACK_LINE(802)
	this->axisy = 0.0;
	HX_STACK_LINE(801)
	this->axisx = 0.0;
	HX_STACK_LINE(780)
	this->rot = 0.0;
	HX_STACK_LINE(779)
	this->pre_rot = 0.0;
	HX_STACK_LINE(778)
	this->kinangvel = 0.0;
	HX_STACK_LINE(777)
	this->torque = 0.0;
	HX_STACK_LINE(776)
	this->angvel = 0.0;
	HX_STACK_LINE(769)
	this->wrapcvel = null();
	HX_STACK_LINE(463)
	this->wrap_svel = null();
	HX_STACK_LINE(462)
	this->svely = 0.0;
	HX_STACK_LINE(461)
	this->svelx = 0.0;
	HX_STACK_LINE(460)
	this->wrap_kinvel = null();
	HX_STACK_LINE(459)
	this->kinvely = 0.0;
	HX_STACK_LINE(458)
	this->kinvelx = 0.0;
	HX_STACK_LINE(457)
	this->wrap_force = null();
	HX_STACK_LINE(456)
	this->forcey = 0.0;
	HX_STACK_LINE(455)
	this->forcex = 0.0;
	HX_STACK_LINE(454)
	this->wrap_vel = null();
	HX_STACK_LINE(453)
	this->vely = 0.0;
	HX_STACK_LINE(452)
	this->velx = 0.0;
	HX_STACK_LINE(451)
	this->wrap_pos = null();
	HX_STACK_LINE(450)
	this->posy = 0.0;
	HX_STACK_LINE(449)
	this->posx = 0.0;
	HX_STACK_LINE(448)
	this->pre_posy = 0.0;
	HX_STACK_LINE(447)
	this->pre_posx = 0.0;
	HX_STACK_LINE(345)
	this->disableCCD = false;
	HX_STACK_LINE(344)
	this->bulletEnabled = false;
	HX_STACK_LINE(343)
	this->bullet = false;
	HX_STACK_LINE(342)
	this->sweepRadius = 0.0;
	HX_STACK_LINE(341)
	this->sweepFrozen = false;
	HX_STACK_LINE(340)
	this->sweep_angvel = 0.0;
	HX_STACK_LINE(339)
	this->sweepTime = 0.0;
	HX_STACK_LINE(217)
	this->graph_depth = (int)0;
	HX_STACK_LINE(211)
	this->component = null();
	HX_STACK_LINE(210)
	this->wrap_constraints = null();
	HX_STACK_LINE(209)
	this->constraints = null();
	HX_STACK_LINE(208)
	this->wrap_arbiters = null();
	HX_STACK_LINE(207)
	this->arbiters = null();
	HX_STACK_LINE(206)
	this->space = null();
	HX_STACK_LINE(199)
	this->wrap_shapes = null();
	HX_STACK_LINE(198)
	this->shapes = null();
	HX_STACK_LINE(197)
	this->compound = null();
	HX_STACK_LINE(177)
	this->type = (int)0;
	HX_STACK_LINE(176)
	this->world = false;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(1420)
	super::__construct();
	HX_STACK_LINE(1421)
	this->ibody = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(1422)
	this->world = false;
	HX_STACK_LINE(1423)
	this->bulletEnabled = false;
	HX_STACK_LINE(1424)
	this->sweepTime = (int)0;
	HX_STACK_LINE(1425)
	this->sweep_angvel = (int)0;
	HX_STACK_LINE(1426)
	this->norotate = this->nomove = false;
	HX_STACK_LINE(1427)
	this->disableCCD = false;
	HX_STACK_LINE(1428)
	{
		HX_STACK_LINE(1429)
		this->posx = (int)0;
		HX_STACK_LINE(1430)
		this->posy = (int)0;
		HX_STACK_LINE(1439)
		{
		}
	}
	HX_STACK_LINE(1448)
	this->rot = (int)0;
	HX_STACK_LINE(1449)
	{
		HX_STACK_LINE(1450)
		this->axisx = (int)0;
		HX_STACK_LINE(1451)
		this->axisy = (int)1;
		HX_STACK_LINE(1460)
		{
		}
	}
	HX_STACK_LINE(1469)
	{
		HX_STACK_LINE(1470)
		this->svelx = (int)0;
		HX_STACK_LINE(1471)
		this->svely = (int)0;
		HX_STACK_LINE(1480)
		{
		}
	}
	HX_STACK_LINE(1489)
	{
		HX_STACK_LINE(1490)
		this->velx = (int)0;
		HX_STACK_LINE(1491)
		this->vely = (int)0;
		HX_STACK_LINE(1500)
		{
		}
	}
	HX_STACK_LINE(1509)
	{
		HX_STACK_LINE(1510)
		this->kinvelx = (int)0;
		HX_STACK_LINE(1511)
		this->kinvely = (int)0;
		HX_STACK_LINE(1520)
		{
		}
	}
	HX_STACK_LINE(1529)
	{
		HX_STACK_LINE(1530)
		this->forcex = (int)0;
		HX_STACK_LINE(1531)
		this->forcey = (int)0;
		HX_STACK_LINE(1540)
		{
		}
	}
	HX_STACK_LINE(1549)
	this->torque = this->angvel = this->kinangvel = (int)0;
	HX_STACK_LINE(1550)
	{
		HX_STACK_LINE(1551)
		this->pre_posx = ::Math_obj::POSITIVE_INFINITY;
		HX_STACK_LINE(1552)
		this->pre_posy = ::Math_obj::POSITIVE_INFINITY;
		HX_STACK_LINE(1561)
		{
		}
	}
	HX_STACK_LINE(1570)
	this->pre_rot = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(1571)
	{
		HX_STACK_LINE(1572)
		this->localCOMx = (int)0;
		HX_STACK_LINE(1573)
		this->localCOMy = (int)0;
		HX_STACK_LINE(1582)
		{
		}
	}
	HX_STACK_LINE(1591)
	{
		HX_STACK_LINE(1592)
		this->worldCOMx = (int)0;
		HX_STACK_LINE(1593)
		this->worldCOMy = (int)0;
		HX_STACK_LINE(1602)
		{
		}
	}
	HX_STACK_LINE(1611)
	this->zip_aabb = true;
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_AABB Block( ){
			HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",1612);
			{
				HX_STACK_LINE(1612)
				::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1612)
				{
					HX_STACK_LINE(1612)
					if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
						HX_STACK_LINE(1612)
						ret = ::zpp_nape::geom::ZPP_AABB_obj::__new();
					}
					else{
						HX_STACK_LINE(1612)
						ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
						HX_STACK_LINE(1612)
						::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1612)
						ret->next = null();
					}
					HX_STACK_LINE(1612)
					Dynamic();
				}
				HX_STACK_LINE(1612)
				{
					HX_STACK_LINE(1612)
					ret->minx = (int)0;
					HX_STACK_LINE(1612)
					ret->miny = (int)0;
					HX_STACK_LINE(1612)
					{
					}
				}
				HX_STACK_LINE(1612)
				{
					HX_STACK_LINE(1612)
					ret->maxx = (int)0;
					HX_STACK_LINE(1612)
					ret->maxy = (int)0;
					HX_STACK_LINE(1612)
					{
					}
				}
				HX_STACK_LINE(1612)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1612)
	this->aabb = _Function_1_1::Block();
	HX_STACK_LINE(1613)
	this->aabb->_immutable = true;
	HX_STACK_LINE(1614)
	::zpp_nape::phys::ZPP_Body me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(1615)
	this->aabb->_validate = this->aabb_validate_dyn();
	HX_STACK_LINE(1616)
	this->massMode = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;
	HX_STACK_LINE(1617)
	this->gravMassMode = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT;
	HX_STACK_LINE(1618)
	this->gravMassScale = 1.0;
	HX_STACK_LINE(1619)
	this->inertiaMode = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;
	HX_STACK_LINE(1620)
	this->arbiters = ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__new();
	HX_STACK_LINE(1621)
	this->constraints = ::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__new();
	HX_STACK_LINE(1622)
	this->shapes = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();
	HX_STACK_LINE(1623)
	this->wrap_shapes = ::zpp_nape::util::ZPP_ShapeList_obj::get(this->shapes,null());
	HX_STACK_LINE(1624)
	this->wrap_shapes->zpp_inner->adder = this->shapes_adder_dyn();
	HX_STACK_LINE(1625)
	this->wrap_shapes->zpp_inner->subber = this->shapes_subber_dyn();
	HX_STACK_LINE(1626)
	this->wrap_shapes->zpp_inner->_invalidate = this->shapes_invalidate_dyn();
	HX_STACK_LINE(1628)
	this->wrap_shapes->zpp_inner->_modifiable = this->shapes_modifiable_dyn();
	HX_STACK_LINE(1630)
	this->kinematicDelaySleep = false;
}
;
	return null();
}

ZPP_Body_obj::~ZPP_Body_obj() { }

Dynamic ZPP_Body_obj::__CreateEmpty() { return  new ZPP_Body_obj; }
hx::ObjectPtr< ZPP_Body_obj > ZPP_Body_obj::__new()
{  hx::ObjectPtr< ZPP_Body_obj > result = new ZPP_Body_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Body_obj > result = new ZPP_Body_obj();
	result->__construct();
	return result;}

::nape::phys::Body ZPP_Body_obj::copy( ){
	HX_STACK_PUSH("ZPP_Body::copy","zpp_nape/phys/Body.hx",1687);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1688)
	::zpp_nape::phys::ZPP_Body ret = ::nape::phys::Body_obj::__new(null(),null())->zpp_inner;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1689)
	ret->type = this->type;
	HX_STACK_LINE(1690)
	ret->bulletEnabled = this->bulletEnabled;
	HX_STACK_LINE(1691)
	ret->disableCCD = this->disableCCD;
	HX_STACK_LINE(1692)
	{
		HX_STACK_LINE(1693)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1694)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1695)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1696)
			{
				HX_STACK_LINE(1697)
				::nape::shape::ShapeList _this = ret->outer->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				::nape::shape::Shape obj = s->outer->copy();		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1697)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(1697)
					_this->push(obj);
				}
				else{
					HX_STACK_LINE(1697)
					_this->unshift(obj);
				}
			}
			HX_STACK_LINE(1699)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1702)
	{
		HX_STACK_LINE(1703)
		ret->posx = this->posx;
		HX_STACK_LINE(1704)
		ret->posy = this->posy;
		HX_STACK_LINE(1713)
		{
		}
	}
	HX_STACK_LINE(1722)
	{
		HX_STACK_LINE(1723)
		ret->velx = this->velx;
		HX_STACK_LINE(1724)
		ret->vely = this->vely;
		HX_STACK_LINE(1733)
		{
		}
	}
	HX_STACK_LINE(1742)
	{
		HX_STACK_LINE(1743)
		ret->forcex = this->forcex;
		HX_STACK_LINE(1744)
		ret->forcey = this->forcey;
		HX_STACK_LINE(1753)
		{
		}
	}
	HX_STACK_LINE(1762)
	ret->rot = this->rot;
	HX_STACK_LINE(1763)
	ret->angvel = this->angvel;
	HX_STACK_LINE(1764)
	ret->torque = this->torque;
	HX_STACK_LINE(1765)
	{
		HX_STACK_LINE(1766)
		ret->kinvelx = this->kinvelx;
		HX_STACK_LINE(1767)
		ret->kinvely = this->kinvely;
		HX_STACK_LINE(1776)
		{
		}
	}
	HX_STACK_LINE(1785)
	ret->kinangvel = this->kinangvel;
	HX_STACK_LINE(1786)
	{
		HX_STACK_LINE(1787)
		ret->svelx = this->svelx;
		HX_STACK_LINE(1788)
		ret->svely = this->svely;
		HX_STACK_LINE(1797)
		{
		}
	}
	HX_STACK_LINE(1806)
	if ((!(this->zip_axis))){
		HX_STACK_LINE(1807)
		ret->axisx = this->axisx;
		HX_STACK_LINE(1808)
		ret->axisy = this->axisy;
		HX_STACK_LINE(1817)
		{
		}
	}
	else{
		HX_STACK_LINE(1826)
		ret->zip_axis = true;
		HX_STACK_LINE(1826)
		{
			HX_STACK_LINE(1826)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = ret->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1826)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1826)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(1826)
				{
					HX_STACK_LINE(1826)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(1826)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(1826)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(1826)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(1826)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1826)
		ret->zip_worldCOM = true;
	}
	HX_STACK_LINE(1827)
	ret->rot = this->rot;
	HX_STACK_LINE(1828)
	ret->massMode = this->massMode;
	HX_STACK_LINE(1829)
	ret->gravMassMode = this->gravMassMode;
	HX_STACK_LINE(1830)
	ret->inertiaMode = this->inertiaMode;
	HX_STACK_LINE(1831)
	if ((!(this->zip_mass))){
		HX_STACK_LINE(1831)
		ret->mass = this->mass;
	}
	else{
		HX_STACK_LINE(1832)
		ret->invalidate_mass();
	}
	HX_STACK_LINE(1833)
	if ((!(this->zip_gravMass))){
		HX_STACK_LINE(1833)
		ret->gravMass = this->gravMass;
	}
	else{
		HX_STACK_LINE(1834)
		ret->invalidate_gravMass();
	}
	HX_STACK_LINE(1835)
	if ((!(this->zip_gravMassScale))){
		HX_STACK_LINE(1835)
		ret->gravMassScale = this->gravMassScale;
	}
	else{
		HX_STACK_LINE(1836)
		ret->invalidate_gravMassScale();
	}
	HX_STACK_LINE(1837)
	if ((!(this->zip_inertia))){
		HX_STACK_LINE(1837)
		ret->inertia = this->inertia;
	}
	else{
		HX_STACK_LINE(1838)
		ret->invalidate_inertia();
	}
	HX_STACK_LINE(1839)
	if ((!(this->zip_aabb))){
		HX_STACK_LINE(1840)
		{
			HX_STACK_LINE(1841)
			ret->aabb->minx = this->aabb->minx;
			HX_STACK_LINE(1842)
			ret->aabb->miny = this->aabb->miny;
			HX_STACK_LINE(1851)
			{
			}
		}
		HX_STACK_LINE(1860)
		{
			HX_STACK_LINE(1861)
			ret->aabb->maxx = this->aabb->maxx;
			HX_STACK_LINE(1862)
			ret->aabb->maxy = this->aabb->maxy;
			HX_STACK_LINE(1871)
			{
			}
		}
	}
	else{
		HX_STACK_LINE(1881)
		ret->zip_aabb = true;
	}
	HX_STACK_LINE(1882)
	if ((!(this->zip_localCOM))){
		HX_STACK_LINE(1883)
		ret->localCOMx = this->localCOMx;
		HX_STACK_LINE(1884)
		ret->localCOMy = this->localCOMy;
		HX_STACK_LINE(1893)
		{
		}
	}
	else{
		HX_STACK_LINE(1902)
		ret->zip_localCOM = true;
		HX_STACK_LINE(1902)
		ret->zip_worldCOM = true;
	}
	HX_STACK_LINE(1903)
	if ((!(this->zip_worldCOM))){
		HX_STACK_LINE(1904)
		ret->worldCOMx = this->worldCOMx;
		HX_STACK_LINE(1905)
		ret->worldCOMy = this->worldCOMy;
		HX_STACK_LINE(1914)
		{
		}
	}
	else{
		HX_STACK_LINE(1923)
		ret->zip_worldCOM = true;
	}
	HX_STACK_LINE(1924)
	this->copyto(ret->outer);
	HX_STACK_LINE(1925)
	return ret->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,copy,return )

Void ZPP_Body_obj::removedFromSpace( ){
{
		HX_STACK_PUSH("ZPP_Body::removedFromSpace","zpp_nape/phys/Body.hx",1662);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1663)
		while((!(((this->arbiters->head == null()))))){
			HX_STACK_LINE(1664)
			::zpp_nape::dynamics::ZPP_Arbiter arb = this->arbiters->pop_unsafe();		HX_STACK_VAR(arb,"arb");
			HX_STACK_LINE(1665)
			{
				HX_STACK_LINE(1665)
				arb->cleared = true;
				HX_STACK_LINE(1665)
				if (((arb->b2 == hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(1665)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = arb->b1->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1665)
					{
						HX_STACK_LINE(1665)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1665)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1665)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1665)
						while(((cur != null()))){
							HX_STACK_LINE(1665)
							if (((cur->elt == arb))){
								HX_STACK_LINE(1665)
								{
									HX_STACK_LINE(1665)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1665)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1665)
									if (((pre == null()))){
										HX_STACK_LINE(1665)
										old = _this->head;
										HX_STACK_LINE(1665)
										ret1 = old->next;
										HX_STACK_LINE(1665)
										_this->head = ret1;
										HX_STACK_LINE(1665)
										if (((_this->head == null()))){
											HX_STACK_LINE(1665)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1665)
										old = pre->next;
										HX_STACK_LINE(1665)
										ret1 = old->next;
										HX_STACK_LINE(1665)
										pre->next = ret1;
										HX_STACK_LINE(1665)
										if (((ret1 == null()))){
											HX_STACK_LINE(1665)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1665)
									{
										HX_STACK_LINE(1665)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1665)
										o->elt = null();
										HX_STACK_LINE(1665)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(1665)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1665)
									_this->modified = true;
									HX_STACK_LINE(1665)
									(_this->length)--;
									HX_STACK_LINE(1665)
									_this->pushmod = true;
									HX_STACK_LINE(1665)
									ret1;
								}
								HX_STACK_LINE(1665)
								ret = true;
								HX_STACK_LINE(1665)
								break;
							}
							HX_STACK_LINE(1665)
							pre = cur;
							HX_STACK_LINE(1665)
							cur = cur->next;
						}
						HX_STACK_LINE(1665)
						ret;
					}
				}
				HX_STACK_LINE(1665)
				if (((arb->b1 == hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(1665)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = arb->b2->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1665)
					{
						HX_STACK_LINE(1665)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1665)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1665)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1665)
						while(((cur != null()))){
							HX_STACK_LINE(1665)
							if (((cur->elt == arb))){
								HX_STACK_LINE(1665)
								{
									HX_STACK_LINE(1665)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1665)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1665)
									if (((pre == null()))){
										HX_STACK_LINE(1665)
										old = _this->head;
										HX_STACK_LINE(1665)
										ret1 = old->next;
										HX_STACK_LINE(1665)
										_this->head = ret1;
										HX_STACK_LINE(1665)
										if (((_this->head == null()))){
											HX_STACK_LINE(1665)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1665)
										old = pre->next;
										HX_STACK_LINE(1665)
										ret1 = old->next;
										HX_STACK_LINE(1665)
										pre->next = ret1;
										HX_STACK_LINE(1665)
										if (((ret1 == null()))){
											HX_STACK_LINE(1665)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1665)
									{
										HX_STACK_LINE(1665)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1665)
										o->elt = null();
										HX_STACK_LINE(1665)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(1665)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1665)
									_this->modified = true;
									HX_STACK_LINE(1665)
									(_this->length)--;
									HX_STACK_LINE(1665)
									_this->pushmod = true;
									HX_STACK_LINE(1665)
									ret1;
								}
								HX_STACK_LINE(1665)
								ret = true;
								HX_STACK_LINE(1665)
								break;
							}
							HX_STACK_LINE(1665)
							pre = cur;
							HX_STACK_LINE(1665)
							cur = cur->next;
						}
						HX_STACK_LINE(1665)
						ret;
					}
				}
				HX_STACK_LINE(1665)
				if (((arb->pair != null()))){
					HX_STACK_LINE(1665)
					arb->pair->arb = null();
					HX_STACK_LINE(1665)
					arb->pair = null();
				}
				HX_STACK_LINE(1665)
				arb->active = false;
				HX_STACK_LINE(1665)
				this->space->f_arbiters->modified = true;
			}
		}
		HX_STACK_LINE(1667)
		{
			HX_STACK_LINE(1668)
			::zpp_nape::space::ZPP_Component o = this->component;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1677)
			{
				HX_STACK_LINE(1677)
				o->body = null();
				HX_STACK_LINE(1677)
				o->constraint = null();
				HX_STACK_LINE(1677)
				Dynamic();
			}
			HX_STACK_LINE(1678)
			o->next = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;
			HX_STACK_LINE(1679)
			::zpp_nape::space::ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1684)
		this->component = null();
		HX_STACK_LINE(1685)
		this->__iremovedFromSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,removedFromSpace,(void))

Void ZPP_Body_obj::addedToSpace( ){
{
		HX_STACK_PUSH("ZPP_Body::addedToSpace","zpp_nape/phys/Body.hx",1632);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1641)
		{
			HX_STACK_LINE(1642)
			if (((::zpp_nape::space::ZPP_Component_obj::zpp_pool == null()))){
				HX_STACK_LINE(1642)
				this->component = ::zpp_nape::space::ZPP_Component_obj::__new();
			}
			else{
				HX_STACK_LINE(1649)
				this->component = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;
				HX_STACK_LINE(1650)
				::zpp_nape::space::ZPP_Component_obj::zpp_pool = this->component->next;
				HX_STACK_LINE(1651)
				this->component->next = null();
			}
			HX_STACK_LINE(1656)
			Dynamic();
		}
		HX_STACK_LINE(1658)
		this->component->isBody = true;
		HX_STACK_LINE(1659)
		this->component->body = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(1660)
		this->__iaddedToSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,addedToSpace,(void))

Void ZPP_Body_obj::shapes_modifiable( ){
{
		HX_STACK_PUSH("ZPP_Body::shapes_modifiable","zpp_nape/phys/Body.hx",1414);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1415)
		this->immutable_midstep(HX_CSTRING("Body::shapes"));
		HX_STACK_LINE(1416)
		if (((bool((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((this->space != null()))))){
			HX_STACK_LINE(1416)
			hx::Throw (HX_CSTRING("Error: Cannot modifiy shapes of static object once added to Space"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,shapes_modifiable,(void))

Void ZPP_Body_obj::shapes_invalidate( ::zpp_nape::util::ZPP_ShapeList _){
{
		HX_STACK_PUSH("ZPP_Body::shapes_invalidate","zpp_nape/phys/Body.hx",1410);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_,"_");
		HX_STACK_LINE(1410)
		this->invalidate_shapes();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,shapes_invalidate,(void))

Void ZPP_Body_obj::shapes_subber( ::nape::shape::Shape s){
{
		HX_STACK_PUSH("ZPP_Body::shapes_subber","zpp_nape/phys/Body.hx",1405);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(1406)
		if (((this->space != null()))){
			HX_STACK_LINE(1406)
			this->space->removed_shape(s->zpp_inner,null());
		}
		HX_STACK_LINE(1407)
		s->zpp_inner->body = null();
		HX_STACK_LINE(1408)
		s->zpp_inner->removedFromBody();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,shapes_subber,(void))

bool ZPP_Body_obj::shapes_adder( ::nape::shape::Shape s){
	HX_STACK_PUSH("ZPP_Body::shapes_adder","zpp_nape/phys/Body.hx",1391);
	HX_STACK_THIS(this);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(1391)
	if (((s->zpp_inner->body != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(1393)
		if (((s->zpp_inner->body != null()))){
			HX_STACK_LINE(1393)
			s->zpp_inner->body->wrap_shapes->remove(s);
		}
		HX_STACK_LINE(1394)
		s->zpp_inner->body = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(1395)
		s->zpp_inner->addedToBody();
		HX_STACK_LINE(1396)
		if (((this->space != null()))){
			HX_STACK_LINE(1396)
			::zpp_nape::space::ZPP_Space _this = this->space;		HX_STACK_VAR(_this,"_this");
			::zpp_nape::shape::ZPP_Shape s1 = s->zpp_inner;		HX_STACK_VAR(s1,"s1");
			bool dontwake = false;		HX_STACK_VAR(dontwake,"dontwake");
			HX_STACK_LINE(1396)
			if ((!(dontwake))){
				HX_STACK_LINE(1396)
				::zpp_nape::phys::ZPP_Body o = s1->body;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1396)
				if ((!(o->world))){
					HX_STACK_LINE(1396)
					o->component->waket = (_this->stamp + ((  ((_this->midstep)) ? int((int)0) : int((int)1) )));
					HX_STACK_LINE(1396)
					if (((o->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC))){
						HX_STACK_LINE(1396)
						o->kinematicDelaySleep = true;
					}
					HX_STACK_LINE(1396)
					if ((o->component->sleeping)){
						HX_STACK_LINE(1396)
						_this->really_wake(o,false);
					}
				}
			}
			HX_STACK_LINE(1396)
			_this->bphase->insert(s1);
			HX_STACK_LINE(1396)
			s1->addedToSpace();
		}
		HX_STACK_LINE(1397)
		if (((s->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
			HX_STACK_LINE(1398)
			s->zpp_inner->polygon->invalidate_gaxi();
			HX_STACK_LINE(1399)
			s->zpp_inner->polygon->invalidate_gverts();
		}
		HX_STACK_LINE(1401)
		return true;
	}
	else{
		HX_STACK_LINE(1403)
		return false;
	}
	HX_STACK_LINE(1391)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,shapes_adder,return )

Void ZPP_Body_obj::aabb_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::aabb_validate","zpp_nape/phys/Body.hx",1385);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1387)
		if (((this->shapes->head == null()))){
			HX_STACK_LINE(1387)
			hx::Throw (HX_CSTRING("Error: bounds only makes sense when Body has shapes"));
		}
		HX_STACK_LINE(1389)
		{
			HX_STACK_LINE(1389)
			if (((this->shapes->head == null()))){
				HX_STACK_LINE(1389)
				hx::Throw (HX_CSTRING("Error: Body bounds only makes sense if it contains shapes"));
			}
			HX_STACK_LINE(1389)
			if ((this->zip_aabb)){
				HX_STACK_LINE(1389)
				this->zip_aabb = false;
				HX_STACK_LINE(1389)
				{
					HX_STACK_LINE(1389)
					this->aabb->minx = ::Math_obj::POSITIVE_INFINITY;
					HX_STACK_LINE(1389)
					this->aabb->miny = ::Math_obj::POSITIVE_INFINITY;
					HX_STACK_LINE(1389)
					{
					}
				}
				HX_STACK_LINE(1389)
				{
					HX_STACK_LINE(1389)
					this->aabb->maxx = ::Math_obj::NEGATIVE_INFINITY;
					HX_STACK_LINE(1389)
					this->aabb->maxy = ::Math_obj::NEGATIVE_INFINITY;
					HX_STACK_LINE(1389)
					{
					}
				}
				HX_STACK_LINE(1389)
				{
					HX_STACK_LINE(1389)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1389)
					while(((cx_ite != null()))){
						HX_STACK_LINE(1389)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(1389)
						{
							HX_STACK_LINE(1389)
							if ((s->zip_aabb)){
								HX_STACK_LINE(1389)
								if (((s->body != null()))){
									HX_STACK_LINE(1389)
									s->zip_aabb = false;
									HX_STACK_LINE(1389)
									if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
										HX_STACK_LINE(1389)
										::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1389)
										if ((_this->zip_worldCOM)){
											HX_STACK_LINE(1389)
											if (((_this->body != null()))){
												HX_STACK_LINE(1389)
												_this->zip_worldCOM = false;
												HX_STACK_LINE(1389)
												if ((_this->zip_localCOM)){
													HX_STACK_LINE(1389)
													_this->zip_localCOM = false;
													HX_STACK_LINE(1389)
													if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
														HX_STACK_LINE(1389)
														::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1389)
														if (((_this1->lverts->next == null()))){
															HX_STACK_LINE(1389)
															hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
														}
														HX_STACK_LINE(1389)
														if (((_this1->lverts->next->next == null()))){
															HX_STACK_LINE(1389)
															_this1->localCOMx = _this1->lverts->next->x;
															HX_STACK_LINE(1389)
															_this1->localCOMy = _this1->lverts->next->y;
															HX_STACK_LINE(1389)
															Dynamic();
														}
														else{
															HX_STACK_LINE(1389)
															if (((_this1->lverts->next->next->next == null()))){
																HX_STACK_LINE(1389)
																{
																	HX_STACK_LINE(1389)
																	_this1->localCOMx = _this1->lverts->next->x;
																	HX_STACK_LINE(1389)
																	_this1->localCOMy = _this1->lverts->next->y;
																	HX_STACK_LINE(1389)
																	{
																	}
																}
																HX_STACK_LINE(1389)
																{
																	HX_STACK_LINE(1389)
																	Float t = 1.0;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1389)
																	hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																	HX_STACK_LINE(1389)
																	hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
																}
																HX_STACK_LINE(1389)
																{
																	HX_STACK_LINE(1389)
																	Float t = 0.5;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1389)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1389)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
															else{
																HX_STACK_LINE(1389)
																{
																	HX_STACK_LINE(1389)
																	_this1->localCOMx = (int)0;
																	HX_STACK_LINE(1389)
																	_this1->localCOMy = (int)0;
																	HX_STACK_LINE(1389)
																	{
																	}
																}
																HX_STACK_LINE(1389)
																Float area = 0.0;		HX_STACK_VAR(area,"area");
																HX_STACK_LINE(1389)
																{
																	HX_STACK_LINE(1389)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this1->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																	HX_STACK_LINE(1389)
																	::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
																	HX_STACK_LINE(1389)
																	cx_ite1 = cx_ite1->next;
																	HX_STACK_LINE(1389)
																	::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																	HX_STACK_LINE(1389)
																	cx_ite1 = cx_ite1->next;
																	HX_STACK_LINE(1389)
																	while(((cx_ite1 != null()))){
																		HX_STACK_LINE(1389)
																		::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																		HX_STACK_LINE(1389)
																		{
																			HX_STACK_LINE(1389)
																			hx::AddEq(area,(v->x * ((w->y - u->y))));
																			HX_STACK_LINE(1389)
																			Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																			HX_STACK_LINE(1389)
																			hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																			HX_STACK_LINE(1389)
																			hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																		}
																		HX_STACK_LINE(1389)
																		u = v;
																		HX_STACK_LINE(1389)
																		v = w;
																		HX_STACK_LINE(1389)
																		cx_ite1 = cx_ite1->next;
																	}
																	HX_STACK_LINE(1389)
																	cx_ite1 = _this1->lverts->next;
																	HX_STACK_LINE(1389)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1389)
																	{
																		HX_STACK_LINE(1389)
																		hx::AddEq(area,(v->x * ((w->y - u->y))));
																		HX_STACK_LINE(1389)
																		Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1389)
																		hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																		HX_STACK_LINE(1389)
																		hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																	}
																	HX_STACK_LINE(1389)
																	u = v;
																	HX_STACK_LINE(1389)
																	v = w;
																	HX_STACK_LINE(1389)
																	cx_ite1 = cx_ite1->next;
																	HX_STACK_LINE(1389)
																	::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
																	HX_STACK_LINE(1389)
																	{
																		HX_STACK_LINE(1389)
																		hx::AddEq(area,(v->x * ((w1->y - u->y))));
																		HX_STACK_LINE(1389)
																		Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1389)
																		hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																		HX_STACK_LINE(1389)
																		hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																	}
																}
																HX_STACK_LINE(1389)
																area = (Float((int)1) / Float((((int)3 * area))));
																HX_STACK_LINE(1389)
																{
																	HX_STACK_LINE(1389)
																	Float t = area;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1389)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1389)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
														}
													}
												}
												HX_STACK_LINE(1389)
												{
													HX_STACK_LINE(1389)
													::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1389)
													if ((_this1->zip_axis)){
														HX_STACK_LINE(1389)
														_this1->zip_axis = false;
														HX_STACK_LINE(1389)
														{
															HX_STACK_LINE(1389)
															_this1->axisx = ::Math_obj::sin(_this1->rot);
															HX_STACK_LINE(1389)
															_this1->axisy = ::Math_obj::cos(_this1->rot);
															HX_STACK_LINE(1389)
															Dynamic();
														}
													}
												}
												HX_STACK_LINE(1389)
												{
													HX_STACK_LINE(1389)
													_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
													HX_STACK_LINE(1389)
													_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
												}
											}
										}
										HX_STACK_LINE(1389)
										Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
										HX_STACK_LINE(1389)
										Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
										HX_STACK_LINE(1389)
										{
											HX_STACK_LINE(1389)
											_this->aabb->minx = (_this->worldCOMx - rx);
											HX_STACK_LINE(1389)
											_this->aabb->miny = (_this->worldCOMy - ry);
										}
										HX_STACK_LINE(1389)
										{
											HX_STACK_LINE(1389)
											_this->aabb->maxx = (_this->worldCOMx + rx);
											HX_STACK_LINE(1389)
											_this->aabb->maxy = (_this->worldCOMy + ry);
										}
									}
									else{
										HX_STACK_LINE(1389)
										::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1389)
										if ((_this->zip_gverts)){
											HX_STACK_LINE(1389)
											if (((_this->body != null()))){
												HX_STACK_LINE(1389)
												_this->zip_gverts = false;
												HX_STACK_LINE(1389)
												_this->validate_lverts();
												HX_STACK_LINE(1389)
												{
													HX_STACK_LINE(1389)
													::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1389)
													if ((_this1->zip_axis)){
														HX_STACK_LINE(1389)
														_this1->zip_axis = false;
														HX_STACK_LINE(1389)
														{
															HX_STACK_LINE(1389)
															_this1->axisx = ::Math_obj::sin(_this1->rot);
															HX_STACK_LINE(1389)
															_this1->axisy = ::Math_obj::cos(_this1->rot);
															HX_STACK_LINE(1389)
															Dynamic();
														}
													}
												}
												HX_STACK_LINE(1389)
												::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
												HX_STACK_LINE(1389)
												{
													HX_STACK_LINE(1389)
													::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
													HX_STACK_LINE(1389)
													while(((cx_ite1 != null()))){
														HX_STACK_LINE(1389)
														::zpp_nape::geom::ZPP_Vec2 g = cx_ite1;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1389)
														{
															HX_STACK_LINE(1389)
															::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
															HX_STACK_LINE(1389)
															li = li->next;
															HX_STACK_LINE(1389)
															{
																HX_STACK_LINE(1389)
																g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
																HX_STACK_LINE(1389)
																g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
															}
														}
														HX_STACK_LINE(1389)
														cx_ite1 = cx_ite1->next;
													}
												}
											}
										}
										HX_STACK_LINE(1389)
										if (((_this->lverts->next == null()))){
											HX_STACK_LINE(1389)
											hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
										}
										HX_STACK_LINE(1389)
										::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
										HX_STACK_LINE(1389)
										{
											HX_STACK_LINE(1389)
											_this->aabb->minx = p0->x;
											HX_STACK_LINE(1389)
											_this->aabb->miny = p0->y;
											HX_STACK_LINE(1389)
											{
											}
										}
										HX_STACK_LINE(1389)
										{
											HX_STACK_LINE(1389)
											_this->aabb->maxx = p0->x;
											HX_STACK_LINE(1389)
											_this->aabb->maxy = p0->y;
											HX_STACK_LINE(1389)
											{
											}
										}
										HX_STACK_LINE(1389)
										{
											HX_STACK_LINE(1389)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(1389)
											while(((cx_ite1 != null()))){
												HX_STACK_LINE(1389)
												::zpp_nape::geom::ZPP_Vec2 p = cx_ite1;		HX_STACK_VAR(p,"p");
												HX_STACK_LINE(1389)
												{
													HX_STACK_LINE(1389)
													if (((p->x < _this->aabb->minx))){
														HX_STACK_LINE(1389)
														_this->aabb->minx = p->x;
													}
													HX_STACK_LINE(1389)
													if (((p->x > _this->aabb->maxx))){
														HX_STACK_LINE(1389)
														_this->aabb->maxx = p->x;
													}
													HX_STACK_LINE(1389)
													if (((p->y < _this->aabb->miny))){
														HX_STACK_LINE(1389)
														_this->aabb->miny = p->y;
													}
													HX_STACK_LINE(1389)
													if (((p->y > _this->aabb->maxy))){
														HX_STACK_LINE(1389)
														_this->aabb->maxy = p->y;
													}
												}
												HX_STACK_LINE(1389)
												cx_ite1 = cx_ite1->next;
											}
										}
									}
								}
							}
							HX_STACK_LINE(1389)
							{
								HX_STACK_LINE(1389)
								::zpp_nape::geom::ZPP_AABB _this = this->aabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB x = s->aabb;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1389)
								if (((x->minx < _this->minx))){
									HX_STACK_LINE(1389)
									_this->minx = x->minx;
								}
								HX_STACK_LINE(1389)
								if (((x->maxx > _this->maxx))){
									HX_STACK_LINE(1389)
									_this->maxx = x->maxx;
								}
								HX_STACK_LINE(1389)
								if (((x->miny < _this->miny))){
									HX_STACK_LINE(1389)
									_this->miny = x->miny;
								}
								HX_STACK_LINE(1389)
								if (((x->maxy > _this->maxy))){
									HX_STACK_LINE(1389)
									_this->maxy = x->maxy;
								}
							}
						}
						HX_STACK_LINE(1389)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,aabb_validate,(void))

Void ZPP_Body_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Body::clear","zpp_nape/phys/Body.hx",1207);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1209)
		if (((this->space != null()))){
			HX_STACK_LINE(1209)
			hx::Throw (HX_CSTRING("Error: Cannot clear a Body if it is currently being used by a Space!"));
		}
		HX_STACK_LINE(1212)
		if ((!(((this->constraints->head == null()))))){
			HX_STACK_LINE(1212)
			hx::Throw (HX_CSTRING("Error: Cannot clear a Body if it is currently being used by a constraint!"));
		}
		HX_STACK_LINE(1214)
		while((!(((this->shapes->head == null()))))){
			HX_STACK_LINE(1216)
			::zpp_nape::shape::ZPP_Shape s = this->shapes->pop_unsafe();		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1217)
			{
				HX_STACK_LINE(1218)
				s->removedFromBody();
				HX_STACK_LINE(1219)
				s->body = null();
			}
		}
		HX_STACK_LINE(1223)
		this->invalidate_shapes();
		HX_STACK_LINE(1224)
		{
			HX_STACK_LINE(1225)
			this->pre_posx = (int)0;
			HX_STACK_LINE(1226)
			this->pre_posy = (int)0;
			HX_STACK_LINE(1235)
			{
			}
		}
		HX_STACK_LINE(1244)
		{
			HX_STACK_LINE(1245)
			this->posx = (int)0;
			HX_STACK_LINE(1246)
			this->posy = (int)0;
			HX_STACK_LINE(1255)
			{
			}
		}
		HX_STACK_LINE(1264)
		{
			HX_STACK_LINE(1265)
			this->velx = (int)0;
			HX_STACK_LINE(1266)
			this->vely = (int)0;
			HX_STACK_LINE(1275)
			{
			}
		}
		HX_STACK_LINE(1284)
		{
			HX_STACK_LINE(1285)
			this->forcex = (int)0;
			HX_STACK_LINE(1286)
			this->forcey = (int)0;
			HX_STACK_LINE(1295)
			{
			}
		}
		HX_STACK_LINE(1304)
		{
			HX_STACK_LINE(1305)
			this->kinvelx = (int)0;
			HX_STACK_LINE(1306)
			this->kinvely = (int)0;
			HX_STACK_LINE(1315)
			{
			}
		}
		HX_STACK_LINE(1324)
		{
			HX_STACK_LINE(1325)
			this->svelx = (int)0;
			HX_STACK_LINE(1326)
			this->svely = (int)0;
			HX_STACK_LINE(1335)
			{
			}
		}
		HX_STACK_LINE(1344)
		this->angvel = this->torque = this->kinangvel = this->pre_rot = this->rot = (int)0;
		HX_STACK_LINE(1345)
		{
			HX_STACK_LINE(1345)
			{
				HX_STACK_LINE(1345)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1345)
				while(((cx_ite != null()))){
					HX_STACK_LINE(1345)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1345)
					{
						HX_STACK_LINE(1345)
						if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
							HX_STACK_LINE(1345)
							s->polygon->invalidate_gverts();
							HX_STACK_LINE(1345)
							s->polygon->invalidate_gaxi();
						}
						HX_STACK_LINE(1345)
						s->invalidate_worldCOM();
					}
					HX_STACK_LINE(1345)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1345)
			this->zip_worldCOM = true;
		}
		HX_STACK_LINE(1346)
		{
			HX_STACK_LINE(1346)
			this->zip_axis = true;
			HX_STACK_LINE(1346)
			{
				HX_STACK_LINE(1346)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1346)
				while(((cx_ite != null()))){
					HX_STACK_LINE(1346)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1346)
					{
						HX_STACK_LINE(1346)
						if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
							HX_STACK_LINE(1346)
							s->polygon->invalidate_gverts();
							HX_STACK_LINE(1346)
							s->polygon->invalidate_gaxi();
						}
						HX_STACK_LINE(1346)
						s->invalidate_worldCOM();
					}
					HX_STACK_LINE(1346)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1346)
			this->zip_worldCOM = true;
		}
		HX_STACK_LINE(1347)
		{
			HX_STACK_LINE(1348)
			this->axisx = (int)0;
			HX_STACK_LINE(1349)
			this->axisy = (int)1;
			HX_STACK_LINE(1358)
			{
			}
		}
		HX_STACK_LINE(1367)
		this->zip_axis = false;
		HX_STACK_LINE(1368)
		this->massMode = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;
		HX_STACK_LINE(1369)
		this->gravMassMode = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT;
		HX_STACK_LINE(1370)
		this->gravMassScale = 1.0;
		HX_STACK_LINE(1371)
		this->inertiaMode = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;
		HX_STACK_LINE(1372)
		this->norotate = false;
		HX_STACK_LINE(1373)
		this->nomove = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,clear,(void))

Void ZPP_Body_obj::__immutable_midstep( ::String name){
{
		HX_STACK_PUSH("ZPP_Body::__immutable_midstep","zpp_nape/phys/Body.hx",1202);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(1202)
		if (((bool((this->space != null())) && bool(this->space->midstep)))){
			HX_STACK_LINE(1204)
			hx::Throw (((HX_CSTRING("Error: ") + name) + HX_CSTRING(" cannot be set during a space step()")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,__immutable_midstep,(void))

Void ZPP_Body_obj::getworldCOM( ){
{
		HX_STACK_PUSH("ZPP_Body::getworldCOM","zpp_nape/phys/Body.hx",1194);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1196)
		if (((this->shapes->head == null()))){
			HX_STACK_LINE(1196)
			hx::Throw (HX_CSTRING("Error: worldCOM only makes sense when Body has Shapes"));
		}
		HX_STACK_LINE(1198)
		this->validate_worldCOM();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,getworldCOM,(void))

Void ZPP_Body_obj::getlocalCOM( ){
{
		HX_STACK_PUSH("ZPP_Body::getlocalCOM","zpp_nape/phys/Body.hx",1188);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1190)
		if (((this->shapes->head == null()))){
			HX_STACK_LINE(1190)
			hx::Throw (HX_CSTRING("Error: localCOM only makes sense when Body has Shapes"));
		}
		HX_STACK_LINE(1192)
		this->validate_localCOM();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,getlocalCOM,(void))

Void ZPP_Body_obj::validate_worldCOM( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_worldCOM","zpp_nape/phys/Body.hx",1157);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1157)
		if ((this->zip_worldCOM)){
			HX_STACK_LINE(1159)
			this->zip_worldCOM = false;
			HX_STACK_LINE(1160)
			this->validate_localCOM();
			HX_STACK_LINE(1161)
			if ((this->zip_axis)){
				HX_STACK_LINE(1161)
				this->zip_axis = false;
				HX_STACK_LINE(1161)
				{
					HX_STACK_LINE(1161)
					this->axisx = ::Math_obj::sin(this->rot);
					HX_STACK_LINE(1161)
					this->axisy = ::Math_obj::cos(this->rot);
					HX_STACK_LINE(1161)
					Dynamic();
				}
			}
			HX_STACK_LINE(1162)
			{
				HX_STACK_LINE(1163)
				this->worldCOMx = (this->posx + (((this->axisy * this->localCOMx) - (this->axisx * this->localCOMy))));
				HX_STACK_LINE(1164)
				this->worldCOMy = (this->posy + (((this->localCOMx * this->axisx) + (this->localCOMy * this->axisy))));
			}
			HX_STACK_LINE(1166)
			if (((this->wrap_worldCOM != null()))){
				HX_STACK_LINE(1167)
				this->wrap_worldCOM->zpp_inner->x = this->worldCOMx;
				HX_STACK_LINE(1168)
				this->wrap_worldCOM->zpp_inner->y = this->worldCOMy;
				HX_STACK_LINE(1177)
				{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_worldCOM,(void))

Void ZPP_Body_obj::validate_localCOM( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_localCOM","zpp_nape/phys/Body.hx",1061);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1061)
		if ((this->zip_localCOM)){
			HX_STACK_LINE(1063)
			this->zip_localCOM = false;
			HX_STACK_LINE(1064)
			Float tempx = (int)0;		HX_STACK_VAR(tempx,"tempx");
			HX_STACK_LINE(1065)
			Float tempy = (int)0;		HX_STACK_VAR(tempy,"tempy");
			HX_STACK_LINE(1082)
			Float msum = 0.0;		HX_STACK_VAR(msum,"msum");
			HX_STACK_LINE(1083)
			{
				HX_STACK_LINE(1084)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1085)
				while(((cx_ite != null()))){
					HX_STACK_LINE(1086)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1087)
					{
						HX_STACK_LINE(1088)
						if ((s->zip_localCOM)){
							HX_STACK_LINE(1088)
							s->zip_localCOM = false;
							HX_STACK_LINE(1088)
							if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(1088)
								::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1088)
								if (((_this->lverts->next == null()))){
									HX_STACK_LINE(1088)
									hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
								}
								HX_STACK_LINE(1088)
								if (((_this->lverts->next->next == null()))){
									HX_STACK_LINE(1088)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(1088)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(1088)
									Dynamic();
								}
								else{
									HX_STACK_LINE(1088)
									if (((_this->lverts->next->next->next == null()))){
										HX_STACK_LINE(1088)
										{
											HX_STACK_LINE(1088)
											_this->localCOMx = _this->lverts->next->x;
											HX_STACK_LINE(1088)
											_this->localCOMy = _this->lverts->next->y;
											HX_STACK_LINE(1088)
											{
											}
										}
										HX_STACK_LINE(1088)
										{
											HX_STACK_LINE(1088)
											Float t = 1.0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(1088)
											hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
											HX_STACK_LINE(1088)
											hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
										}
										HX_STACK_LINE(1088)
										{
											HX_STACK_LINE(1088)
											Float t = 0.5;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(1088)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(1088)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(1088)
										{
											HX_STACK_LINE(1088)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(1088)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(1088)
											{
											}
										}
										HX_STACK_LINE(1088)
										Float area = 0.0;		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(1088)
										{
											HX_STACK_LINE(1088)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(1088)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(1088)
											cx_ite1 = cx_ite1->next;
											HX_STACK_LINE(1088)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1088)
											cx_ite1 = cx_ite1->next;
											HX_STACK_LINE(1088)
											while(((cx_ite1 != null()))){
												HX_STACK_LINE(1088)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(1088)
												{
													HX_STACK_LINE(1088)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(1088)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(1088)
													hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(1088)
													hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(1088)
												u = v;
												HX_STACK_LINE(1088)
												v = w;
												HX_STACK_LINE(1088)
												cx_ite1 = cx_ite1->next;
											}
											HX_STACK_LINE(1088)
											cx_ite1 = _this->lverts->next;
											HX_STACK_LINE(1088)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(1088)
											{
												HX_STACK_LINE(1088)
												hx::AddEq(area,(v->x * ((w->y - u->y))));
												HX_STACK_LINE(1088)
												Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(1088)
												hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
												HX_STACK_LINE(1088)
												hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
											}
											HX_STACK_LINE(1088)
											u = v;
											HX_STACK_LINE(1088)
											v = w;
											HX_STACK_LINE(1088)
											cx_ite1 = cx_ite1->next;
											HX_STACK_LINE(1088)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(1088)
											{
												HX_STACK_LINE(1088)
												hx::AddEq(area,(v->x * ((w1->y - u->y))));
												HX_STACK_LINE(1088)
												Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(1088)
												hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
												HX_STACK_LINE(1088)
												hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
											}
										}
										HX_STACK_LINE(1088)
										area = (Float((int)1) / Float((((int)3 * area))));
										HX_STACK_LINE(1088)
										{
											HX_STACK_LINE(1088)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(1088)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(1088)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
						}
						HX_STACK_LINE(1089)
						s->validate_area_inertia();
						HX_STACK_LINE(1090)
						{
							HX_STACK_LINE(1091)
							Float t = (s->area * s->material->density);		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1100)
							hx::AddEq(tempx,(s->localCOMx * t));
							HX_STACK_LINE(1101)
							hx::AddEq(tempy,(s->localCOMy * t));
						}
						HX_STACK_LINE(1103)
						hx::AddEq(msum,(s->area * s->material->density));
					}
					HX_STACK_LINE(1105)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1108)
			if (((msum != (int)0))){
				HX_STACK_LINE(1110)
				Float t = (Float(1.0) / Float(msum));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1119)
				this->localCOMx = (tempx * t);
				HX_STACK_LINE(1120)
				this->localCOMy = (tempy * t);
			}
			HX_STACK_LINE(1123)
			if (((this->wrap_localCOM != null()))){
				HX_STACK_LINE(1124)
				this->wrap_localCOM->zpp_inner->x = this->localCOMx;
				HX_STACK_LINE(1125)
				this->wrap_localCOM->zpp_inner->y = this->localCOMy;
				HX_STACK_LINE(1134)
				{
				}
			}
			HX_STACK_LINE(1143)
			if (((bool(this->zip_mass) && bool((this->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT))))){
				HX_STACK_LINE(1144)
				this->zip_mass = false;
				HX_STACK_LINE(1145)
				this->cmass = msum;
				HX_STACK_LINE(1146)
				if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
					HX_STACK_LINE(1147)
					this->mass = this->cmass;
					HX_STACK_LINE(1148)
					this->imass = this->smass = (Float(1.0) / Float(this->mass));
				}
				else{
					HX_STACK_LINE(1151)
					this->mass = ::Math_obj::POSITIVE_INFINITY;
					HX_STACK_LINE(1152)
					this->imass = this->smass = 0.0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_localCOM,(void))

Void ZPP_Body_obj::invalidate_worldCOM( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_worldCOM","zpp_nape/phys/Body.hx",1058);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1058)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_worldCOM,(void))

Void ZPP_Body_obj::invalidate_localCOM( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_localCOM","zpp_nape/phys/Body.hx",1052);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1053)
		this->zip_localCOM = true;
		HX_STACK_LINE(1054)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_localCOM,(void))

Void ZPP_Body_obj::invalidate_aabb( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_aabb","zpp_nape/phys/Body.hx",1039);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1039)
		this->zip_aabb = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_aabb,(void))

Void ZPP_Body_obj::validate_aabb( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_aabb","zpp_nape/phys/Body.hx",978);
		HX_STACK_THIS(this);
		HX_STACK_LINE(980)
		if (((this->shapes->head == null()))){
			HX_STACK_LINE(980)
			hx::Throw (HX_CSTRING("Error: Body bounds only makes sense if it contains shapes"));
		}
		HX_STACK_LINE(982)
		if ((this->zip_aabb)){
			HX_STACK_LINE(983)
			this->zip_aabb = false;
			HX_STACK_LINE(984)
			{
				HX_STACK_LINE(985)
				this->aabb->minx = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(986)
				this->aabb->miny = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(995)
				{
				}
			}
			HX_STACK_LINE(1004)
			{
				HX_STACK_LINE(1005)
				this->aabb->maxx = ::Math_obj::NEGATIVE_INFINITY;
				HX_STACK_LINE(1006)
				this->aabb->maxy = ::Math_obj::NEGATIVE_INFINITY;
				HX_STACK_LINE(1015)
				{
				}
			}
			HX_STACK_LINE(1024)
			{
				HX_STACK_LINE(1025)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1026)
				while(((cx_ite != null()))){
					HX_STACK_LINE(1027)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1028)
					{
						HX_STACK_LINE(1029)
						if ((s->zip_aabb)){
							HX_STACK_LINE(1029)
							if (((s->body != null()))){
								HX_STACK_LINE(1029)
								s->zip_aabb = false;
								HX_STACK_LINE(1029)
								if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
									HX_STACK_LINE(1029)
									::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1029)
									if ((_this->zip_worldCOM)){
										HX_STACK_LINE(1029)
										if (((_this->body != null()))){
											HX_STACK_LINE(1029)
											_this->zip_worldCOM = false;
											HX_STACK_LINE(1029)
											if ((_this->zip_localCOM)){
												HX_STACK_LINE(1029)
												_this->zip_localCOM = false;
												HX_STACK_LINE(1029)
												if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
													HX_STACK_LINE(1029)
													::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1029)
													if (((_this1->lverts->next == null()))){
														HX_STACK_LINE(1029)
														hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
													}
													HX_STACK_LINE(1029)
													if (((_this1->lverts->next->next == null()))){
														HX_STACK_LINE(1029)
														_this1->localCOMx = _this1->lverts->next->x;
														HX_STACK_LINE(1029)
														_this1->localCOMy = _this1->lverts->next->y;
														HX_STACK_LINE(1029)
														Dynamic();
													}
													else{
														HX_STACK_LINE(1029)
														if (((_this1->lverts->next->next->next == null()))){
															HX_STACK_LINE(1029)
															{
																HX_STACK_LINE(1029)
																_this1->localCOMx = _this1->lverts->next->x;
																HX_STACK_LINE(1029)
																_this1->localCOMy = _this1->lverts->next->y;
																HX_STACK_LINE(1029)
																{
																}
															}
															HX_STACK_LINE(1029)
															{
																HX_STACK_LINE(1029)
																Float t = 1.0;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1029)
																hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																HX_STACK_LINE(1029)
																hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
															}
															HX_STACK_LINE(1029)
															{
																HX_STACK_LINE(1029)
																Float t = 0.5;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1029)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(1029)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
														else{
															HX_STACK_LINE(1029)
															{
																HX_STACK_LINE(1029)
																_this1->localCOMx = (int)0;
																HX_STACK_LINE(1029)
																_this1->localCOMy = (int)0;
																HX_STACK_LINE(1029)
																{
																}
															}
															HX_STACK_LINE(1029)
															Float area = 0.0;		HX_STACK_VAR(area,"area");
															HX_STACK_LINE(1029)
															{
																HX_STACK_LINE(1029)
																::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this1->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																HX_STACK_LINE(1029)
																::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
																HX_STACK_LINE(1029)
																cx_ite1 = cx_ite1->next;
																HX_STACK_LINE(1029)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(1029)
																cx_ite1 = cx_ite1->next;
																HX_STACK_LINE(1029)
																while(((cx_ite1 != null()))){
																	HX_STACK_LINE(1029)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1029)
																	{
																		HX_STACK_LINE(1029)
																		hx::AddEq(area,(v->x * ((w->y - u->y))));
																		HX_STACK_LINE(1029)
																		Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1029)
																		hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																		HX_STACK_LINE(1029)
																		hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																	}
																	HX_STACK_LINE(1029)
																	u = v;
																	HX_STACK_LINE(1029)
																	v = w;
																	HX_STACK_LINE(1029)
																	cx_ite1 = cx_ite1->next;
																}
																HX_STACK_LINE(1029)
																cx_ite1 = _this1->lverts->next;
																HX_STACK_LINE(1029)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(1029)
																{
																	HX_STACK_LINE(1029)
																	hx::AddEq(area,(v->x * ((w->y - u->y))));
																	HX_STACK_LINE(1029)
																	Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1029)
																	hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																	HX_STACK_LINE(1029)
																	hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																}
																HX_STACK_LINE(1029)
																u = v;
																HX_STACK_LINE(1029)
																v = w;
																HX_STACK_LINE(1029)
																cx_ite1 = cx_ite1->next;
																HX_STACK_LINE(1029)
																::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
																HX_STACK_LINE(1029)
																{
																	HX_STACK_LINE(1029)
																	hx::AddEq(area,(v->x * ((w1->y - u->y))));
																	HX_STACK_LINE(1029)
																	Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1029)
																	hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																	HX_STACK_LINE(1029)
																	hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																}
															}
															HX_STACK_LINE(1029)
															area = (Float((int)1) / Float((((int)3 * area))));
															HX_STACK_LINE(1029)
															{
																HX_STACK_LINE(1029)
																Float t = area;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1029)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(1029)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
													}
												}
											}
											HX_STACK_LINE(1029)
											{
												HX_STACK_LINE(1029)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1029)
												if ((_this1->zip_axis)){
													HX_STACK_LINE(1029)
													_this1->zip_axis = false;
													HX_STACK_LINE(1029)
													{
														HX_STACK_LINE(1029)
														_this1->axisx = ::Math_obj::sin(_this1->rot);
														HX_STACK_LINE(1029)
														_this1->axisy = ::Math_obj::cos(_this1->rot);
														HX_STACK_LINE(1029)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(1029)
											{
												HX_STACK_LINE(1029)
												_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
												HX_STACK_LINE(1029)
												_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
											}
										}
									}
									HX_STACK_LINE(1029)
									Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
									HX_STACK_LINE(1029)
									Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
									HX_STACK_LINE(1029)
									{
										HX_STACK_LINE(1029)
										_this->aabb->minx = (_this->worldCOMx - rx);
										HX_STACK_LINE(1029)
										_this->aabb->miny = (_this->worldCOMy - ry);
									}
									HX_STACK_LINE(1029)
									{
										HX_STACK_LINE(1029)
										_this->aabb->maxx = (_this->worldCOMx + rx);
										HX_STACK_LINE(1029)
										_this->aabb->maxy = (_this->worldCOMy + ry);
									}
								}
								else{
									HX_STACK_LINE(1029)
									::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1029)
									if ((_this->zip_gverts)){
										HX_STACK_LINE(1029)
										if (((_this->body != null()))){
											HX_STACK_LINE(1029)
											_this->zip_gverts = false;
											HX_STACK_LINE(1029)
											_this->validate_lverts();
											HX_STACK_LINE(1029)
											{
												HX_STACK_LINE(1029)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1029)
												if ((_this1->zip_axis)){
													HX_STACK_LINE(1029)
													_this1->zip_axis = false;
													HX_STACK_LINE(1029)
													{
														HX_STACK_LINE(1029)
														_this1->axisx = ::Math_obj::sin(_this1->rot);
														HX_STACK_LINE(1029)
														_this1->axisy = ::Math_obj::cos(_this1->rot);
														HX_STACK_LINE(1029)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(1029)
											::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
											HX_STACK_LINE(1029)
											{
												HX_STACK_LINE(1029)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(1029)
												while(((cx_ite1 != null()))){
													HX_STACK_LINE(1029)
													::zpp_nape::geom::ZPP_Vec2 g = cx_ite1;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(1029)
													{
														HX_STACK_LINE(1029)
														::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
														HX_STACK_LINE(1029)
														li = li->next;
														HX_STACK_LINE(1029)
														{
															HX_STACK_LINE(1029)
															g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
															HX_STACK_LINE(1029)
															g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
														}
													}
													HX_STACK_LINE(1029)
													cx_ite1 = cx_ite1->next;
												}
											}
										}
									}
									HX_STACK_LINE(1029)
									if (((_this->lverts->next == null()))){
										HX_STACK_LINE(1029)
										hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
									}
									HX_STACK_LINE(1029)
									::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
									HX_STACK_LINE(1029)
									{
										HX_STACK_LINE(1029)
										_this->aabb->minx = p0->x;
										HX_STACK_LINE(1029)
										_this->aabb->miny = p0->y;
										HX_STACK_LINE(1029)
										{
										}
									}
									HX_STACK_LINE(1029)
									{
										HX_STACK_LINE(1029)
										_this->aabb->maxx = p0->x;
										HX_STACK_LINE(1029)
										_this->aabb->maxy = p0->y;
										HX_STACK_LINE(1029)
										{
										}
									}
									HX_STACK_LINE(1029)
									{
										HX_STACK_LINE(1029)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(1029)
										while(((cx_ite1 != null()))){
											HX_STACK_LINE(1029)
											::zpp_nape::geom::ZPP_Vec2 p = cx_ite1;		HX_STACK_VAR(p,"p");
											HX_STACK_LINE(1029)
											{
												HX_STACK_LINE(1029)
												if (((p->x < _this->aabb->minx))){
													HX_STACK_LINE(1029)
													_this->aabb->minx = p->x;
												}
												HX_STACK_LINE(1029)
												if (((p->x > _this->aabb->maxx))){
													HX_STACK_LINE(1029)
													_this->aabb->maxx = p->x;
												}
												HX_STACK_LINE(1029)
												if (((p->y < _this->aabb->miny))){
													HX_STACK_LINE(1029)
													_this->aabb->miny = p->y;
												}
												HX_STACK_LINE(1029)
												if (((p->y > _this->aabb->maxy))){
													HX_STACK_LINE(1029)
													_this->aabb->maxy = p->y;
												}
											}
											HX_STACK_LINE(1029)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(1030)
						{
							HX_STACK_LINE(1030)
							::zpp_nape::geom::ZPP_AABB _this = this->aabb;		HX_STACK_VAR(_this,"_this");
							::zpp_nape::geom::ZPP_AABB x = s->aabb;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1030)
							if (((x->minx < _this->minx))){
								HX_STACK_LINE(1030)
								_this->minx = x->minx;
							}
							HX_STACK_LINE(1030)
							if (((x->maxx > _this->maxx))){
								HX_STACK_LINE(1030)
								_this->maxx = x->maxx;
							}
							HX_STACK_LINE(1030)
							if (((x->miny < _this->miny))){
								HX_STACK_LINE(1030)
								_this->miny = x->miny;
							}
							HX_STACK_LINE(1030)
							if (((x->maxy > _this->maxy))){
								HX_STACK_LINE(1030)
								_this->maxy = x->maxy;
							}
						}
					}
					HX_STACK_LINE(1032)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_aabb,(void))

Void ZPP_Body_obj::invalidate_wake( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_wake","zpp_nape/phys/Body.hx",972);
		HX_STACK_THIS(this);
		HX_STACK_LINE(972)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_wake,(void))

Void ZPP_Body_obj::validate_inertia( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_inertia","zpp_nape/phys/Body.hx",940);
		HX_STACK_THIS(this);
		HX_STACK_LINE(941)
		bool exist = false;		HX_STACK_VAR(exist,"exist");
		HX_STACK_LINE(942)
		if (((bool(this->zip_inertia) || bool((bool((this->inertiaMode == ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT)) && bool(exist)))))){
			HX_STACK_LINE(943)
			this->zip_inertia = false;
			HX_STACK_LINE(944)
			if (((this->inertiaMode == ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT))){
				HX_STACK_LINE(945)
				this->cinertia = (int)0;
				HX_STACK_LINE(946)
				{
					HX_STACK_LINE(947)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(948)
					while(((cx_ite != null()))){
						HX_STACK_LINE(949)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(950)
						{
							HX_STACK_LINE(951)
							s->refmaterial->density = s->material->density;
							HX_STACK_LINE(952)
							s->validate_area_inertia();
							HX_STACK_LINE(953)
							hx::AddEq(this->cinertia,((s->inertia * s->area) * s->material->density));
						}
						HX_STACK_LINE(955)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(959)
			if (((bool((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)) && bool(!(this->norotate))))){
				HX_STACK_LINE(960)
				this->inertia = this->cinertia;
				HX_STACK_LINE(961)
				this->sinertia = this->iinertia = (Float(1.0) / Float(this->inertia));
			}
			else{
				HX_STACK_LINE(964)
				this->inertia = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(965)
				this->sinertia = this->iinertia = (int)0;
			}
			HX_STACK_LINE(967)
			if ((exist)){
				HX_STACK_LINE(967)
				this->invalidate_inertia();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_inertia,(void))

Void ZPP_Body_obj::invalidate_inertia( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_inertia","zpp_nape/phys/Body.hx",936);
		HX_STACK_THIS(this);
		HX_STACK_LINE(937)
		this->zip_inertia = true;
		HX_STACK_LINE(938)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_inertia,(void))

Void ZPP_Body_obj::validate_gravMassScale( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_gravMassScale","zpp_nape/phys/Body.hx",919);
		HX_STACK_THIS(this);
		HX_STACK_LINE(919)
		if ((this->zip_gravMassScale)){
			HX_STACK_LINE(921)
			this->zip_gravMassScale = false;
			HX_STACK_LINE(922)
			if (((this->gravMassMode == ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT))){
				HX_STACK_LINE(922)
				this->gravMassScale = 1.0;
			}
			else{
				HX_STACK_LINE(923)
				if (((this->gravMassMode == ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED))){
					HX_STACK_LINE(924)
					this->validate_mass();
					HX_STACK_LINE(925)
					this->gravMassScale = (Float(this->gravMass) / Float(this->cmass));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_gravMassScale,(void))

Void ZPP_Body_obj::invalidate_gravMassScale( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_gravMassScale","zpp_nape/phys/Body.hx",915);
		HX_STACK_THIS(this);
		HX_STACK_LINE(915)
		if (((this->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))){
			HX_STACK_LINE(916)
			this->zip_gravMassScale = true;
		}
		else{
			HX_STACK_LINE(917)
			this->invalidate_gravMass();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_gravMassScale,(void))

Void ZPP_Body_obj::validate_gravMass( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_gravMass","zpp_nape/phys/Body.hx",901);
		HX_STACK_THIS(this);
		HX_STACK_LINE(901)
		if ((this->zip_gravMass)){
			HX_STACK_LINE(903)
			this->zip_gravMass = false;
			HX_STACK_LINE(904)
			this->validate_mass();
			HX_STACK_LINE(905)
			if (((this->gravMassMode == ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT))){
				HX_STACK_LINE(906)
				this->validate_mass();
				HX_STACK_LINE(907)
				this->gravMass = this->cmass;
			}
			else{
				HX_STACK_LINE(909)
				if (((this->gravMassMode == ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))){
					HX_STACK_LINE(910)
					this->validate_mass();
					HX_STACK_LINE(911)
					this->gravMass = (this->cmass * this->gravMassScale);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_gravMass,(void))

Void ZPP_Body_obj::invalidate_gravMass( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_gravMass","zpp_nape/phys/Body.hx",896);
		HX_STACK_THIS(this);
		HX_STACK_LINE(897)
		if (((this->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED))){
			HX_STACK_LINE(897)
			this->zip_gravMass = true;
		}
		HX_STACK_LINE(898)
		if (((this->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))){
			HX_STACK_LINE(898)
			this->zip_gravMassScale = true;
		}
		HX_STACK_LINE(899)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_gravMass,(void))

Void ZPP_Body_obj::validate_mass( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_mass","zpp_nape/phys/Body.hx",861);
		HX_STACK_THIS(this);
		HX_STACK_LINE(862)
		bool exist = false;		HX_STACK_VAR(exist,"exist");
		HX_STACK_LINE(863)
		if (((bool(this->zip_mass) || bool((bool((this->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool(exist)))))){
			HX_STACK_LINE(864)
			this->zip_mass = false;
			HX_STACK_LINE(865)
			if (((this->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT))){
				HX_STACK_LINE(866)
				this->cmass = (int)0;
				HX_STACK_LINE(867)
				{
					HX_STACK_LINE(868)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(869)
					while(((cx_ite != null()))){
						HX_STACK_LINE(870)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(871)
						{
							HX_STACK_LINE(872)
							s->refmaterial->density = s->material->density;
							HX_STACK_LINE(873)
							s->validate_area_inertia();
							HX_STACK_LINE(874)
							hx::AddEq(this->cmass,(s->area * s->material->density));
						}
						HX_STACK_LINE(876)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(880)
			if (((bool((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)) && bool(!(this->nomove))))){
				HX_STACK_LINE(881)
				this->mass = this->cmass;
				HX_STACK_LINE(882)
				this->imass = this->smass = (Float(1.0) / Float(this->mass));
			}
			else{
				HX_STACK_LINE(885)
				this->mass = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(886)
				this->imass = this->smass = 0.0;
			}
			HX_STACK_LINE(888)
			if ((exist)){
				HX_STACK_LINE(888)
				this->invalidate_inertia();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_mass,(void))

Void ZPP_Body_obj::invalidate_mass( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_mass","zpp_nape/phys/Body.hx",857);
		HX_STACK_THIS(this);
		HX_STACK_LINE(858)
		this->zip_mass = true;
		HX_STACK_LINE(859)
		this->invalidate_gravMass();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_mass,(void))

Void ZPP_Body_obj::delta_rot( Float dr){
{
		HX_STACK_PUSH("ZPP_Body::delta_rot","zpp_nape/phys/Body.hx",837);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dr,"dr");
		HX_STACK_LINE(838)
		hx::AddEq(this->rot,dr);
		HX_STACK_LINE(839)
		if ((((dr * dr) > 0.0001))){
			HX_STACK_LINE(839)
			this->axisx = ::Math_obj::sin(this->rot);
			HX_STACK_LINE(839)
			this->axisy = ::Math_obj::cos(this->rot);
			HX_STACK_LINE(839)
			Dynamic();
		}
		else{
			HX_STACK_LINE(841)
			Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
			HX_STACK_LINE(842)
			Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(843)
			Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(844)
			Float nx = ((((p * this->axisx) + (dr * this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(845)
			this->axisy = ((((p * this->axisy) - (dr * this->axisx))) * m);
			HX_STACK_LINE(846)
			this->axisx = nx;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,delta_rot,(void))

Void ZPP_Body_obj::quick_validate_axis( ){
{
		HX_STACK_PUSH("ZPP_Body::quick_validate_axis","zpp_nape/phys/Body.hx",813);
		HX_STACK_THIS(this);
		HX_STACK_LINE(815)
		this->axisx = ::Math_obj::sin(this->rot);
		HX_STACK_LINE(816)
		this->axisy = ::Math_obj::cos(this->rot);
		HX_STACK_LINE(825)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,quick_validate_axis,(void))

Void ZPP_Body_obj::validate_axis( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_axis","zpp_nape/phys/Body.hx",805);
		HX_STACK_THIS(this);
		HX_STACK_LINE(805)
		if ((this->zip_axis)){
			HX_STACK_LINE(807)
			this->zip_axis = false;
			HX_STACK_LINE(808)
			{
				HX_STACK_LINE(808)
				this->axisx = ::Math_obj::sin(this->rot);
				HX_STACK_LINE(808)
				this->axisy = ::Math_obj::cos(this->rot);
				HX_STACK_LINE(808)
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_axis,(void))

Void ZPP_Body_obj::invalidate_rot( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_rot","zpp_nape/phys/Body.hx",783);
		HX_STACK_THIS(this);
		HX_STACK_LINE(784)
		this->zip_axis = true;
		HX_STACK_LINE(785)
		{
			HX_STACK_LINE(786)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(787)
			while(((cx_ite != null()))){
				HX_STACK_LINE(788)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(790)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(791)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(792)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(794)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(796)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(799)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_rot,(void))

Void ZPP_Body_obj::setup_cvel( ){
{
		HX_STACK_PUSH("ZPP_Body::setup_cvel","zpp_nape/phys/Body.hx",770);
		HX_STACK_THIS(this);
		HX_STACK_LINE(771)
		::zpp_nape::phys::ZPP_Body me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(772)
		this->wrapcvel = ::nape::geom::Vec3_obj::get(null(),null(),null());
		HX_STACK_LINE(773)
		this->wrapcvel->zpp_inner->immutable = true;
		HX_STACK_LINE(774)
		this->wrapcvel->zpp_inner->_validate = this->cvel_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setup_cvel,(void))

Void ZPP_Body_obj::cvel_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::cvel_validate","zpp_nape/phys/Body.hx",764);
		HX_STACK_THIS(this);
		HX_STACK_LINE(765)
		this->wrapcvel->zpp_inner->x = (this->velx + this->kinvelx);
		HX_STACK_LINE(766)
		this->wrapcvel->zpp_inner->y = (this->vely + this->kinvely);
		HX_STACK_LINE(767)
		this->wrapcvel->zpp_inner->z = (this->angvel + this->kinangvel);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,cvel_validate,(void))

Void ZPP_Body_obj::setupForce( ){
{
		HX_STACK_PUSH("ZPP_Body::setupForce","zpp_nape/phys/Body.hx",755);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::phys::ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",756);
				{
					HX_STACK_LINE(756)
					Float x = __this->forcex;		HX_STACK_VAR(x,"x");
					Float y = __this->forcey;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(756)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(756)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(756)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(756)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(756)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(756)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(756)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(756)
						ret->zpp_pool = null();
						HX_STACK_LINE(756)
						ret->zpp_disp = false;
						HX_STACK_LINE(756)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(756)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(756)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",756);
								{
									HX_STACK_LINE(756)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(756)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(756)
									{
										HX_STACK_LINE(756)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(756)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(756)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(756)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(756)
											ret1->next = null();
										}
										HX_STACK_LINE(756)
										ret1->weak = false;
									}
									HX_STACK_LINE(756)
									ret1->_immutable = immutable;
									HX_STACK_LINE(756)
									{
										HX_STACK_LINE(756)
										ret1->x = x;
										HX_STACK_LINE(756)
										ret1->y = y;
										HX_STACK_LINE(756)
										{
										}
									}
									HX_STACK_LINE(756)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(756)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(756)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(756)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(756)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(756)
							if ((_this->_immutable)){
								HX_STACK_LINE(756)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(756)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(756)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(756)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(756)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",756);
								{
									HX_STACK_LINE(756)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(756)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(756)
									{
										HX_STACK_LINE(756)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(756)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(756)
											_this->_validate();
										}
									}
									HX_STACK_LINE(756)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",756);
								{
									HX_STACK_LINE(756)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(756)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(756)
									{
										HX_STACK_LINE(756)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(756)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(756)
											_this->_validate();
										}
									}
									HX_STACK_LINE(756)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(756)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(756)
							{
								HX_STACK_LINE(756)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(756)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(756)
								{
								}
							}
							HX_STACK_LINE(756)
							{
								HX_STACK_LINE(756)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(756)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(756)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(756)
						ret;
					}
					HX_STACK_LINE(756)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(756)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(756)
		this->wrap_force = _Function_1_1::Block(this);
		HX_STACK_LINE(757)
		this->wrap_force->zpp_inner->_inuse = true;
		HX_STACK_LINE(758)
		if ((this->world)){
			HX_STACK_LINE(758)
			this->wrap_force->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(760)
			this->wrap_force->zpp_inner->_invalidate = this->force_invalidate_dyn();
			HX_STACK_LINE(761)
			this->wrap_force->zpp_inner->_validate = this->force_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupForce,(void))

Void ZPP_Body_obj::setupsvel( ){
{
		HX_STACK_PUSH("ZPP_Body::setupsvel","zpp_nape/phys/Body.hx",746);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::phys::ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",747);
				{
					HX_STACK_LINE(747)
					Float x = __this->svelx;		HX_STACK_VAR(x,"x");
					Float y = __this->svely;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(747)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(747)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(747)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(747)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(747)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(747)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(747)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(747)
						ret->zpp_pool = null();
						HX_STACK_LINE(747)
						ret->zpp_disp = false;
						HX_STACK_LINE(747)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(747)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(747)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",747);
								{
									HX_STACK_LINE(747)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(747)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(747)
									{
										HX_STACK_LINE(747)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(747)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(747)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(747)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(747)
											ret1->next = null();
										}
										HX_STACK_LINE(747)
										ret1->weak = false;
									}
									HX_STACK_LINE(747)
									ret1->_immutable = immutable;
									HX_STACK_LINE(747)
									{
										HX_STACK_LINE(747)
										ret1->x = x;
										HX_STACK_LINE(747)
										ret1->y = y;
										HX_STACK_LINE(747)
										{
										}
									}
									HX_STACK_LINE(747)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(747)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(747)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(747)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(747)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(747)
						{
							HX_STACK_LINE(747)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(747)
							if ((_this->_immutable)){
								HX_STACK_LINE(747)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(747)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(747)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(747)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(747)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",747);
								{
									HX_STACK_LINE(747)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(747)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(747)
									{
										HX_STACK_LINE(747)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(747)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(747)
											_this->_validate();
										}
									}
									HX_STACK_LINE(747)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",747);
								{
									HX_STACK_LINE(747)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(747)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(747)
									{
										HX_STACK_LINE(747)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(747)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(747)
											_this->_validate();
										}
									}
									HX_STACK_LINE(747)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(747)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(747)
							{
								HX_STACK_LINE(747)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(747)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(747)
								{
								}
							}
							HX_STACK_LINE(747)
							{
								HX_STACK_LINE(747)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(747)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(747)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(747)
						ret;
					}
					HX_STACK_LINE(747)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(747)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(747)
		this->wrap_svel = _Function_1_1::Block(this);
		HX_STACK_LINE(748)
		this->wrap_svel->zpp_inner->_inuse = true;
		HX_STACK_LINE(749)
		if ((this->world)){
			HX_STACK_LINE(749)
			this->wrap_svel->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(751)
			this->wrap_svel->zpp_inner->_invalidate = this->svel_invalidate_dyn();
			HX_STACK_LINE(752)
			this->wrap_svel->zpp_inner->_validate = this->svel_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupsvel,(void))

Void ZPP_Body_obj::setupkinvel( ){
{
		HX_STACK_PUSH("ZPP_Body::setupkinvel","zpp_nape/phys/Body.hx",737);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::phys::ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",738);
				{
					HX_STACK_LINE(738)
					Float x = __this->kinvelx;		HX_STACK_VAR(x,"x");
					Float y = __this->kinvely;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(738)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(738)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(738)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(738)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(738)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(738)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(738)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(738)
						ret->zpp_pool = null();
						HX_STACK_LINE(738)
						ret->zpp_disp = false;
						HX_STACK_LINE(738)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(738)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(738)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",738);
								{
									HX_STACK_LINE(738)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(738)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(738)
									{
										HX_STACK_LINE(738)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(738)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(738)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(738)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(738)
											ret1->next = null();
										}
										HX_STACK_LINE(738)
										ret1->weak = false;
									}
									HX_STACK_LINE(738)
									ret1->_immutable = immutable;
									HX_STACK_LINE(738)
									{
										HX_STACK_LINE(738)
										ret1->x = x;
										HX_STACK_LINE(738)
										ret1->y = y;
										HX_STACK_LINE(738)
										{
										}
									}
									HX_STACK_LINE(738)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(738)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(738)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(738)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(738)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(738)
						{
							HX_STACK_LINE(738)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(738)
							if ((_this->_immutable)){
								HX_STACK_LINE(738)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(738)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(738)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(738)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(738)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",738);
								{
									HX_STACK_LINE(738)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(738)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(738)
									{
										HX_STACK_LINE(738)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(738)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(738)
											_this->_validate();
										}
									}
									HX_STACK_LINE(738)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",738);
								{
									HX_STACK_LINE(738)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(738)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(738)
									{
										HX_STACK_LINE(738)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(738)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(738)
											_this->_validate();
										}
									}
									HX_STACK_LINE(738)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(738)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(738)
							{
								HX_STACK_LINE(738)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(738)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(738)
								{
								}
							}
							HX_STACK_LINE(738)
							{
								HX_STACK_LINE(738)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(738)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(738)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(738)
						ret;
					}
					HX_STACK_LINE(738)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(738)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(738)
		this->wrap_kinvel = _Function_1_1::Block(this);
		HX_STACK_LINE(739)
		this->wrap_kinvel->zpp_inner->_inuse = true;
		HX_STACK_LINE(740)
		if ((this->world)){
			HX_STACK_LINE(740)
			this->wrap_kinvel->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(742)
			this->wrap_kinvel->zpp_inner->_invalidate = this->kinvel_invalidate_dyn();
			HX_STACK_LINE(743)
			this->wrap_kinvel->zpp_inner->_validate = this->kinvel_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupkinvel,(void))

Void ZPP_Body_obj::setupVelocity( ){
{
		HX_STACK_PUSH("ZPP_Body::setupVelocity","zpp_nape/phys/Body.hx",728);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::phys::ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",729);
				{
					HX_STACK_LINE(729)
					Float x = __this->velx;		HX_STACK_VAR(x,"x");
					Float y = __this->vely;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(729)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(729)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(729)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(729)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(729)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(729)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(729)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(729)
						ret->zpp_pool = null();
						HX_STACK_LINE(729)
						ret->zpp_disp = false;
						HX_STACK_LINE(729)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(729)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(729)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",729);
								{
									HX_STACK_LINE(729)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(729)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(729)
									{
										HX_STACK_LINE(729)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(729)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(729)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(729)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(729)
											ret1->next = null();
										}
										HX_STACK_LINE(729)
										ret1->weak = false;
									}
									HX_STACK_LINE(729)
									ret1->_immutable = immutable;
									HX_STACK_LINE(729)
									{
										HX_STACK_LINE(729)
										ret1->x = x;
										HX_STACK_LINE(729)
										ret1->y = y;
										HX_STACK_LINE(729)
										{
										}
									}
									HX_STACK_LINE(729)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(729)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(729)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(729)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(729)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(729)
						{
							HX_STACK_LINE(729)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(729)
							if ((_this->_immutable)){
								HX_STACK_LINE(729)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(729)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(729)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(729)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(729)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",729);
								{
									HX_STACK_LINE(729)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(729)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(729)
									{
										HX_STACK_LINE(729)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(729)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(729)
											_this->_validate();
										}
									}
									HX_STACK_LINE(729)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",729);
								{
									HX_STACK_LINE(729)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(729)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(729)
									{
										HX_STACK_LINE(729)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(729)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(729)
											_this->_validate();
										}
									}
									HX_STACK_LINE(729)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(729)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(729)
							{
								HX_STACK_LINE(729)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(729)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(729)
								{
								}
							}
							HX_STACK_LINE(729)
							{
								HX_STACK_LINE(729)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(729)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(729)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(729)
						ret;
					}
					HX_STACK_LINE(729)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(729)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(729)
		this->wrap_vel = _Function_1_1::Block(this);
		HX_STACK_LINE(730)
		this->wrap_vel->zpp_inner->_inuse = true;
		HX_STACK_LINE(731)
		if ((this->world)){
			HX_STACK_LINE(731)
			this->wrap_vel->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(733)
			this->wrap_vel->zpp_inner->_invalidate = this->vel_invalidate_dyn();
			HX_STACK_LINE(734)
			this->wrap_vel->zpp_inner->_validate = this->vel_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupVelocity,(void))

Void ZPP_Body_obj::setupPosition( ){
{
		HX_STACK_PUSH("ZPP_Body::setupPosition","zpp_nape/phys/Body.hx",719);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::phys::ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",720);
				{
					HX_STACK_LINE(720)
					Float x = __this->posx;		HX_STACK_VAR(x,"x");
					Float y = __this->posy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(720)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(720)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(720)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(720)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(720)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(720)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(720)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(720)
						ret->zpp_pool = null();
						HX_STACK_LINE(720)
						ret->zpp_disp = false;
						HX_STACK_LINE(720)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(720)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(720)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",720);
								{
									HX_STACK_LINE(720)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(720)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(720)
									{
										HX_STACK_LINE(720)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(720)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(720)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(720)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(720)
											ret1->next = null();
										}
										HX_STACK_LINE(720)
										ret1->weak = false;
									}
									HX_STACK_LINE(720)
									ret1->_immutable = immutable;
									HX_STACK_LINE(720)
									{
										HX_STACK_LINE(720)
										ret1->x = x;
										HX_STACK_LINE(720)
										ret1->y = y;
										HX_STACK_LINE(720)
										{
										}
									}
									HX_STACK_LINE(720)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(720)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(720)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(720)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(720)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(720)
						{
							HX_STACK_LINE(720)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(720)
							if ((_this->_immutable)){
								HX_STACK_LINE(720)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(720)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(720)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(720)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(720)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",720);
								{
									HX_STACK_LINE(720)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(720)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(720)
									{
										HX_STACK_LINE(720)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(720)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(720)
											_this->_validate();
										}
									}
									HX_STACK_LINE(720)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",720);
								{
									HX_STACK_LINE(720)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(720)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(720)
									{
										HX_STACK_LINE(720)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(720)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(720)
											_this->_validate();
										}
									}
									HX_STACK_LINE(720)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(720)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(720)
							{
								HX_STACK_LINE(720)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(720)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(720)
								{
								}
							}
							HX_STACK_LINE(720)
							{
								HX_STACK_LINE(720)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(720)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(720)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(720)
						ret;
					}
					HX_STACK_LINE(720)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(720)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(720)
		this->wrap_pos = _Function_1_1::Block(this);
		HX_STACK_LINE(721)
		this->wrap_pos->zpp_inner->_inuse = true;
		HX_STACK_LINE(722)
		if ((this->world)){
			HX_STACK_LINE(722)
			this->wrap_pos->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(724)
			this->wrap_pos->zpp_inner->_invalidate = this->pos_invalidate_dyn();
			HX_STACK_LINE(725)
			this->wrap_pos->zpp_inner->_validate = this->pos_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupPosition,(void))

Void ZPP_Body_obj::force_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::force_validate","zpp_nape/phys/Body.hx",699);
		HX_STACK_THIS(this);
		HX_STACK_LINE(700)
		this->wrap_force->zpp_inner->x = this->forcex;
		HX_STACK_LINE(701)
		this->wrap_force->zpp_inner->y = this->forcey;
		HX_STACK_LINE(710)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,force_validate,(void))

Void ZPP_Body_obj::force_invalidate( ::zpp_nape::geom::ZPP_Vec2 force){
{
		HX_STACK_PUSH("ZPP_Body::force_invalidate","zpp_nape/phys/Body.hx",673);
		HX_STACK_THIS(this);
		HX_STACK_ARG(force,"force");
		HX_STACK_LINE(675)
		if ((!(((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(675)
			hx::Throw (HX_CSTRING("Error: Non-dynamic body cannot have force applied."));
		}
		HX_STACK_LINE(677)
		{
			HX_STACK_LINE(678)
			this->forcex = force->x;
			HX_STACK_LINE(679)
			this->forcey = force->y;
			HX_STACK_LINE(688)
			{
			}
		}
		HX_STACK_LINE(697)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,force_invalidate,(void))

Void ZPP_Body_obj::svel_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::svel_validate","zpp_nape/phys/Body.hx",651);
		HX_STACK_THIS(this);
		HX_STACK_LINE(653)
		this->wrap_svel->zpp_inner->x = this->svelx;
		HX_STACK_LINE(654)
		this->wrap_svel->zpp_inner->y = this->svely;
		HX_STACK_LINE(663)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,svel_validate,(void))

Void ZPP_Body_obj::svel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel){
{
		HX_STACK_PUSH("ZPP_Body::svel_invalidate","zpp_nape/phys/Body.hx",628);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vel,"vel");
		HX_STACK_LINE(629)
		{
			HX_STACK_LINE(630)
			this->svelx = vel->x;
			HX_STACK_LINE(631)
			this->svely = vel->y;
			HX_STACK_LINE(640)
			{
			}
		}
		HX_STACK_LINE(649)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,svel_invalidate,(void))

Void ZPP_Body_obj::kinvel_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::kinvel_validate","zpp_nape/phys/Body.hx",606);
		HX_STACK_THIS(this);
		HX_STACK_LINE(608)
		this->wrap_kinvel->zpp_inner->x = this->kinvelx;
		HX_STACK_LINE(609)
		this->wrap_kinvel->zpp_inner->y = this->kinvely;
		HX_STACK_LINE(618)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,kinvel_validate,(void))

Void ZPP_Body_obj::kinvel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel){
{
		HX_STACK_PUSH("ZPP_Body::kinvel_invalidate","zpp_nape/phys/Body.hx",583);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vel,"vel");
		HX_STACK_LINE(584)
		{
			HX_STACK_LINE(585)
			this->kinvelx = vel->x;
			HX_STACK_LINE(586)
			this->kinvely = vel->y;
			HX_STACK_LINE(595)
			{
			}
		}
		HX_STACK_LINE(604)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,kinvel_invalidate,(void))

Void ZPP_Body_obj::vel_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::vel_validate","zpp_nape/phys/Body.hx",561);
		HX_STACK_THIS(this);
		HX_STACK_LINE(563)
		this->wrap_vel->zpp_inner->x = this->velx;
		HX_STACK_LINE(564)
		this->wrap_vel->zpp_inner->y = this->vely;
		HX_STACK_LINE(573)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,vel_validate,(void))

Void ZPP_Body_obj::vel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel){
{
		HX_STACK_PUSH("ZPP_Body::vel_invalidate","zpp_nape/phys/Body.hx",535);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vel,"vel");
		HX_STACK_LINE(537)
		if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))){
			HX_STACK_LINE(537)
			hx::Throw (HX_CSTRING("Error: Static body cannot have its velocity set."));
		}
		HX_STACK_LINE(539)
		{
			HX_STACK_LINE(540)
			this->velx = vel->x;
			HX_STACK_LINE(541)
			this->vely = vel->y;
			HX_STACK_LINE(550)
			{
			}
		}
		HX_STACK_LINE(559)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,vel_invalidate,(void))

Void ZPP_Body_obj::pos_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::pos_validate","zpp_nape/phys/Body.hx",513);
		HX_STACK_THIS(this);
		HX_STACK_LINE(515)
		this->wrap_pos->zpp_inner->x = this->posx;
		HX_STACK_LINE(516)
		this->wrap_pos->zpp_inner->y = this->posy;
		HX_STACK_LINE(525)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,pos_validate,(void))

Void ZPP_Body_obj::pos_invalidate( ::zpp_nape::geom::ZPP_Vec2 pos){
{
		HX_STACK_PUSH("ZPP_Body::pos_invalidate","zpp_nape/phys/Body.hx",483);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pos,"pos");
		HX_STACK_LINE(484)
		this->immutable_midstep(HX_CSTRING("Body::position"));
		HX_STACK_LINE(486)
		if (((bool((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((this->space != null()))))){
			HX_STACK_LINE(486)
			hx::Throw (HX_CSTRING("Error: Cannot move a static object once inside a Space"));
		}
		HX_STACK_LINE(488)
		if ((!(((bool((this->posx == pos->x)) && bool((this->posy == pos->y))))))){
			HX_STACK_LINE(489)
			{
				HX_STACK_LINE(490)
				this->posx = pos->x;
				HX_STACK_LINE(491)
				this->posy = pos->y;
				HX_STACK_LINE(500)
				{
				}
			}
			HX_STACK_LINE(509)
			{
				HX_STACK_LINE(509)
				{
					HX_STACK_LINE(509)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(509)
					while(((cx_ite != null()))){
						HX_STACK_LINE(509)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(509)
						{
							HX_STACK_LINE(509)
							if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(509)
								s->polygon->invalidate_gverts();
								HX_STACK_LINE(509)
								s->polygon->invalidate_gaxi();
							}
							HX_STACK_LINE(509)
							s->invalidate_worldCOM();
						}
						HX_STACK_LINE(509)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(509)
				this->zip_worldCOM = true;
			}
			HX_STACK_LINE(510)
			this->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,pos_invalidate,(void))

Void ZPP_Body_obj::invalidate_pos( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_pos","zpp_nape/phys/Body.hx",466);
		HX_STACK_THIS(this);
		HX_STACK_LINE(467)
		{
			HX_STACK_LINE(468)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(469)
			while(((cx_ite != null()))){
				HX_STACK_LINE(470)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(471)
				{
					HX_STACK_LINE(472)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(473)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(474)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(476)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(478)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(481)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_pos,(void))

Void ZPP_Body_obj::sweepValidate( ::zpp_nape::shape::ZPP_Shape s){
{
		HX_STACK_PUSH("ZPP_Body::sweepValidate","zpp_nape/phys/Body.hx",378);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(378)
		if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
			HX_STACK_LINE(389)
			s->worldCOMx = (this->posx + (((this->axisy * s->localCOMx) - (this->axisx * s->localCOMy))));
			HX_STACK_LINE(390)
			s->worldCOMy = (this->posy + (((s->localCOMx * this->axisx) + (s->localCOMy * this->axisy))));
		}
		else{
			HX_STACK_LINE(394)
			::zpp_nape::shape::ZPP_Polygon p = s->polygon;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(395)
			::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(397)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(398)
				while(((cx_ite != null()))){
					HX_STACK_LINE(399)
					::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(400)
					{
						HX_STACK_LINE(401)
						::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(402)
						li = li->next;
						HX_STACK_LINE(403)
						{
							HX_STACK_LINE(404)
							g->x = (this->posx + (((this->axisy * l->x) - (this->axisx * l->y))));
							HX_STACK_LINE(405)
							g->y = (this->posy + (((l->x * this->axisx) + (l->y * this->axisy))));
						}
					}
					HX_STACK_LINE(408)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(411)
			::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(412)
			{
				HX_STACK_LINE(413)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(414)
				::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(415)
				cx_ite = cx_ite->next;
				HX_STACK_LINE(416)
				while(((cx_ite != null()))){
					HX_STACK_LINE(417)
					::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(419)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(420)
						ite = ite->next;
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(422)
							e->gnormx = ((this->axisy * e->lnormx) - (this->axisx * e->lnormy));
							HX_STACK_LINE(423)
							e->gnormy = ((e->lnormx * this->axisx) + (e->lnormy * this->axisy));
						}
						HX_STACK_LINE(425)
						e->gprojection = (((this->posx * e->gnormx) + (this->posy * e->gnormy)) + e->lprojection);
						HX_STACK_LINE(426)
						e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
						HX_STACK_LINE(427)
						e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
					}
					HX_STACK_LINE(429)
					u = v;
					HX_STACK_LINE(430)
					cx_ite = cx_ite->next;
				}
				HX_STACK_LINE(432)
				::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(434)
					::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(435)
					ite = ite->next;
					HX_STACK_LINE(436)
					{
						HX_STACK_LINE(437)
						e->gnormx = ((this->axisy * e->lnormx) - (this->axisx * e->lnormy));
						HX_STACK_LINE(438)
						e->gnormy = ((e->lnormx * this->axisx) + (e->lnormy * this->axisy));
					}
					HX_STACK_LINE(440)
					e->gprojection = (((this->posx * e->gnormx) + (this->posy * e->gnormy)) + e->lprojection);
					HX_STACK_LINE(441)
					e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
					HX_STACK_LINE(442)
					e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,sweepValidate,(void))

Void ZPP_Body_obj::sweepIntegrate( Float dt){
{
		HX_STACK_PUSH("ZPP_Body::sweepIntegrate","zpp_nape/phys/Body.hx",348);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dt,"dt");
		HX_STACK_LINE(349)
		Float delta = (dt - this->sweepTime);		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(350)
		if (((delta != (int)0))){
			HX_STACK_LINE(359)
			this->sweepTime = dt;
			HX_STACK_LINE(360)
			{
				HX_STACK_LINE(361)
				Float t = delta;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(370)
				hx::AddEq(this->posx,(this->velx * t));
				HX_STACK_LINE(371)
				hx::AddEq(this->posy,(this->vely * t));
			}
			HX_STACK_LINE(373)
			if (((this->angvel != (int)0))){
				HX_STACK_LINE(373)
				Float dr = (this->sweep_angvel * delta);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(373)
				hx::AddEq(this->rot,dr);
				HX_STACK_LINE(373)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(373)
					this->axisx = ::Math_obj::sin(this->rot);
					HX_STACK_LINE(373)
					this->axisy = ::Math_obj::cos(this->rot);
					HX_STACK_LINE(373)
					Dynamic();
				}
				else{
					HX_STACK_LINE(373)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(373)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(373)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(373)
					Float nx = ((((p * this->axisx) + (dr * this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(373)
					this->axisy = ((((p * this->axisy) - (dr * this->axisx))) * m);
					HX_STACK_LINE(373)
					this->axisx = nx;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,sweepIntegrate,(void))

Void ZPP_Body_obj::refreshArbiters( ){
{
		HX_STACK_PUSH("ZPP_Body::refreshArbiters","zpp_nape/phys/Body.hx",329);
		HX_STACK_THIS(this);
		HX_STACK_LINE(331)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(332)
		while(((cx_ite != null()))){
			HX_STACK_LINE(333)
			::zpp_nape::dynamics::ZPP_Arbiter arb = cx_ite->elt;		HX_STACK_VAR(arb,"arb");
			HX_STACK_LINE(334)
			arb->invalidated = true;
			HX_STACK_LINE(335)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,refreshArbiters,(void))

bool ZPP_Body_obj::atRest( Float dt){
	HX_STACK_PUSH("ZPP_Body::atRest","zpp_nape/phys/Body.hx",304);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dt,"dt");
	HX_STACK_LINE(304)
	if ((!(((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
		HX_STACK_LINE(305)
		return this->component->sleeping;
	}
	else{
		HX_STACK_LINE(307)
		Float linSq = ::nape::Config_obj::linearSleepThreshold;		HX_STACK_VAR(linSq,"linSq");
		HX_STACK_LINE(308)
		hx::MultEq(linSq,linSq);
		struct _Function_2_1{
			inline static Float Block( ::zpp_nape::phys::ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",310);
				{
					HX_STACK_LINE(310)
					Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(310)
					Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						dx = (__this->posx - __this->pre_posx);
						HX_STACK_LINE(310)
						dy = (__this->posy - __this->pre_posy);
					}
					HX_STACK_LINE(310)
					return ((dx * dx) + (dy * dy));
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( ::zpp_nape::phys::ZPP_Body_obj *__this,Float &dt){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",310);
				{
					HX_STACK_LINE(311)
					Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(312)
					Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(314)
						dx = (__this->aabb->maxx - __this->aabb->minx);
						HX_STACK_LINE(315)
						dy = (__this->aabb->maxy - __this->aabb->miny);
					}
					HX_STACK_LINE(317)
					Float idl = ((dx * dx) + (dy * dy));		HX_STACK_VAR(idl,"idl");
					HX_STACK_LINE(318)
					Float angSq = ::nape::Config_obj::angularSleepThreshold;		HX_STACK_VAR(angSq,"angSq");
					HX_STACK_LINE(319)
					hx::MultEq(angSq,angSq);
					struct _Function_3_1{
						inline static bool Block( ::zpp_nape::phys::ZPP_Body_obj *__this,Float &idl,Float &dt,Float &angSq){
							HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",320);
							{
								HX_STACK_LINE(321)
								Float dr = (__this->rot - __this->pre_rot);		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(322)
								return (  (((((dr * dr) * idl) > ((angSq * dt) * dt)))) ? bool(false) : bool(true) );
							}
							return null();
						}
					};
					HX_STACK_LINE(320)
					return (  (((((((int)4 * __this->angvel) * __this->angvel) * idl) > angSq))) ? bool(false) : bool(_Function_3_1::Block(__this,idl,dt,angSq)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(309)
		bool cansleep = (  (((((this->velx * this->velx) + (this->vely * this->vely)) > linSq))) ? bool(false) : bool((  (((_Function_2_1::Block(this) > (((0.25 * linSq) * dt) * dt)))) ? bool(false) : bool(_Function_2_2::Block(this,dt)) )) );		HX_STACK_VAR(cansleep,"cansleep");
		HX_STACK_LINE(325)
		if ((!(cansleep))){
			HX_STACK_LINE(325)
			this->component->waket = this->space->stamp;
		}
		HX_STACK_LINE(326)
		return ((this->component->waket + ::nape::Config_obj::sleepDelay) < this->space->stamp);
	}
	HX_STACK_LINE(304)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,atRest,return )

::nape::phys::BodyList ZPP_Body_obj::interactingBodies( int arbiter_type,int depth,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_Body::interactingBodies","zpp_nape/phys/Body.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(arbiter_type,"arbiter_type");
	HX_STACK_ARG(depth,"depth");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(273)
	::zpp_nape::phys::ZPP_Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(274)
	{
		HX_STACK_LINE(274)
		if (((::zpp_nape::phys::ZPP_Body_obj::bodyset == null()))){
			HX_STACK_LINE(274)
			::zpp_nape::phys::ZPP_Body_obj::bodyset = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
			HX_STACK_LINE(274)
			::zpp_nape::phys::ZPP_Body_obj::bodyset->lt = ::zpp_nape::phys::ZPP_Body_obj::bodysetlt_dyn();
			HX_STACK_LINE(274)
			::zpp_nape::phys::ZPP_Body_obj::bodystack = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();
		}
		HX_STACK_LINE(274)
		Dynamic();
	}
	HX_STACK_LINE(275)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(276)
	::zpp_nape::phys::ZPP_Body_obj::bodyset->insert(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(277)
	::zpp_nape::phys::ZPP_Body_obj::bodystack->add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(278)
	this->graph_depth = (int)0;
	HX_STACK_LINE(279)
	while((!(((::zpp_nape::phys::ZPP_Body_obj::bodystack->head == null()))))){
		HX_STACK_LINE(280)
		::zpp_nape::phys::ZPP_Body cur = ::zpp_nape::phys::ZPP_Body_obj::bodystack->pop_unsafe();		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(281)
		if (((cur->graph_depth == depth))){
			HX_STACK_LINE(281)
			continue;
		}
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(283)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = cur->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(284)
			while(((cx_ite != null()))){
				HX_STACK_LINE(285)
				::zpp_nape::dynamics::ZPP_Arbiter arb = cx_ite->elt;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(286)
				if (((((int(arb->type) & int(arbiter_type))) != (int)0))){
					HX_STACK_LINE(288)
					::zpp_nape::phys::ZPP_Body other = (  (((arb->b1 == cur))) ? ::zpp_nape::phys::ZPP_Body(arb->b2) : ::zpp_nape::phys::ZPP_Body(arb->b1) );		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(289)
					if ((::zpp_nape::phys::ZPP_Body_obj::bodyset->try_insert_bool(other))){
						HX_STACK_LINE(290)
						::zpp_nape::phys::ZPP_Body_obj::bodystack->add(other);
						HX_STACK_LINE(291)
						other->graph_depth = (cur->graph_depth + (int)1);
					}
				}
				HX_STACK_LINE(295)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(299)
		::zpp_nape::util::ZPP_Set_ZPP_Body _this = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(299)
		if (((_this->parent == null()))){
			HX_STACK_LINE(299)
			Dynamic();
		}
		else{
			HX_STACK_LINE(299)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = _this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(299)
			while(((cur != null()))){
				struct _Function_4_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_Body Block( ::zpp_nape::util::ZPP_Set_ZPP_Body &cur,::zpp_nape::phys::ZPP_Body &_g,::nape::phys::BodyList &ret){
						HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",299);
						{
							HX_STACK_LINE(299)
							{
								HX_STACK_LINE(299)
								::zpp_nape::phys::ZPP_Body b = cur->data;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(299)
								if (((b != _g))){
									HX_STACK_LINE(299)
									::nape::phys::Body obj = b->outer;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(299)
									if ((ret->zpp_inner->reverse_flag)){
										HX_STACK_LINE(299)
										ret->push(obj);
									}
									else{
										HX_STACK_LINE(299)
										ret->unshift(obj);
									}
								}
							}
							HX_STACK_LINE(299)
							::zpp_nape::util::ZPP_Set_ZPP_Body ret1 = cur->parent;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(299)
							if (((ret1 != null()))){
								HX_STACK_LINE(299)
								if (((cur == ret1->prev))){
									HX_STACK_LINE(299)
									ret1->prev = null();
								}
								else{
									HX_STACK_LINE(299)
									ret1->next = null();
								}
								HX_STACK_LINE(299)
								cur->parent = null();
							}
							HX_STACK_LINE(299)
							{
								HX_STACK_LINE(299)
								::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(299)
								{
									HX_STACK_LINE(299)
									o->data = null();
									HX_STACK_LINE(299)
									o->lt = null();
									HX_STACK_LINE(299)
									o->swapped = null();
								}
								HX_STACK_LINE(299)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
								HX_STACK_LINE(299)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
							}
							HX_STACK_LINE(299)
							return ret1;
						}
						return null();
					}
				};
				HX_STACK_LINE(299)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_Body((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_Body(_Function_4_1::Block(cur,_g,ret)) )) );
			}
			HX_STACK_LINE(299)
			_this->parent = null();
		}
	}
	HX_STACK_LINE(302)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Body_obj,interactingBodies,return )

::nape::phys::BodyList ZPP_Body_obj::connectedBodies( int depth,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_Body::connectedBodies","zpp_nape/phys/Body.hx",249);
	HX_STACK_THIS(this);
	HX_STACK_ARG(depth,"depth");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(249)
	::zpp_nape::phys::ZPP_Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(250)
	{
		HX_STACK_LINE(250)
		if (((::zpp_nape::phys::ZPP_Body_obj::bodyset == null()))){
			HX_STACK_LINE(250)
			::zpp_nape::phys::ZPP_Body_obj::bodyset = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
			HX_STACK_LINE(250)
			::zpp_nape::phys::ZPP_Body_obj::bodyset->lt = ::zpp_nape::phys::ZPP_Body_obj::bodysetlt_dyn();
			HX_STACK_LINE(250)
			::zpp_nape::phys::ZPP_Body_obj::bodystack = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();
		}
		HX_STACK_LINE(250)
		Dynamic();
	}
	HX_STACK_LINE(251)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(252)
	::zpp_nape::phys::ZPP_Body_obj::bodystack->add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(253)
	::zpp_nape::phys::ZPP_Body_obj::bodyset->insert(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(254)
	this->graph_depth = (int)0;
	HX_STACK_LINE(255)
	while((!(((::zpp_nape::phys::ZPP_Body_obj::bodystack->head == null()))))){
		HX_STACK_LINE(256)
		::zpp_nape::phys::ZPP_Body cur = ::zpp_nape::phys::ZPP_Body_obj::bodystack->pop_unsafe();		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(257)
		if (((cur->graph_depth == depth))){
			HX_STACK_LINE(257)
			continue;
		}
		HX_STACK_LINE(258)
		::zpp_nape::phys::ZPP_Body_obj::cur_graph_depth = cur->graph_depth;
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(260)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = cur->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(261)
			while(((cx_ite != null()))){
				HX_STACK_LINE(262)
				::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(263)
				c->outer->visitBodies(this->connectedBodies_cont_dyn());
				HX_STACK_LINE(264)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(268)
	{
		HX_STACK_LINE(268)
		::zpp_nape::util::ZPP_Set_ZPP_Body _this = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(268)
		if (((_this->parent == null()))){
			HX_STACK_LINE(268)
			Dynamic();
		}
		else{
			HX_STACK_LINE(268)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = _this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(268)
			while(((cur != null()))){
				struct _Function_4_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_Body Block( ::zpp_nape::util::ZPP_Set_ZPP_Body &cur,::zpp_nape::phys::ZPP_Body &_g,::nape::phys::BodyList &ret){
						HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",268);
						{
							HX_STACK_LINE(268)
							{
								HX_STACK_LINE(268)
								::zpp_nape::phys::ZPP_Body b = cur->data;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(268)
								if (((b != _g))){
									HX_STACK_LINE(268)
									::nape::phys::Body obj = b->outer;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(268)
									if ((ret->zpp_inner->reverse_flag)){
										HX_STACK_LINE(268)
										ret->push(obj);
									}
									else{
										HX_STACK_LINE(268)
										ret->unshift(obj);
									}
								}
							}
							HX_STACK_LINE(268)
							::zpp_nape::util::ZPP_Set_ZPP_Body ret1 = cur->parent;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(268)
							if (((ret1 != null()))){
								HX_STACK_LINE(268)
								if (((cur == ret1->prev))){
									HX_STACK_LINE(268)
									ret1->prev = null();
								}
								else{
									HX_STACK_LINE(268)
									ret1->next = null();
								}
								HX_STACK_LINE(268)
								cur->parent = null();
							}
							HX_STACK_LINE(268)
							{
								HX_STACK_LINE(268)
								::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(268)
								{
									HX_STACK_LINE(268)
									o->data = null();
									HX_STACK_LINE(268)
									o->lt = null();
									HX_STACK_LINE(268)
									o->swapped = null();
								}
								HX_STACK_LINE(268)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
								HX_STACK_LINE(268)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
							}
							HX_STACK_LINE(268)
							return ret1;
						}
						return null();
					}
				};
				HX_STACK_LINE(268)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_Body((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_Body(_Function_4_1::Block(cur,_g,ret)) )) );
			}
			HX_STACK_LINE(268)
			_this->parent = null();
		}
	}
	HX_STACK_LINE(271)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Body_obj,connectedBodies,return )

Void ZPP_Body_obj::connectedBodies_cont( ::nape::phys::Body b){
{
		HX_STACK_PUSH("ZPP_Body::connectedBodies_cont","zpp_nape/phys/Body.hx",243);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(243)
		if ((::zpp_nape::phys::ZPP_Body_obj::bodyset->try_insert_bool(b->zpp_inner))){
			HX_STACK_LINE(245)
			::zpp_nape::phys::ZPP_Body_obj::bodystack->add(b->zpp_inner);
			HX_STACK_LINE(246)
			b->zpp_inner->graph_depth = (::zpp_nape::phys::ZPP_Body_obj::cur_graph_depth + (int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,connectedBodies_cont,(void))

Void ZPP_Body_obj::init_bodysetlist( ){
{
		HX_STACK_PUSH("ZPP_Body::init_bodysetlist","zpp_nape/phys/Body.hx",219);
		HX_STACK_THIS(this);
		HX_STACK_LINE(220)
		if (((::zpp_nape::phys::ZPP_Body_obj::bodyset == null()))){
			HX_STACK_LINE(221)
			::zpp_nape::phys::ZPP_Body_obj::bodyset = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
			HX_STACK_LINE(222)
			::zpp_nape::phys::ZPP_Body_obj::bodyset->lt = ::zpp_nape::phys::ZPP_Body_obj::bodysetlt_dyn();
			HX_STACK_LINE(223)
			::zpp_nape::phys::ZPP_Body_obj::bodystack = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();
		}
		HX_STACK_LINE(233)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,init_bodysetlist,(void))

Void ZPP_Body_obj::invalidate_shapes( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_shapes","zpp_nape/phys/Body.hx",200);
		HX_STACK_THIS(this);
		HX_STACK_LINE(201)
		this->zip_aabb = true;
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			this->zip_localCOM = true;
			HX_STACK_LINE(202)
			this->zip_worldCOM = true;
		}
		HX_STACK_LINE(203)
		this->invalidate_mass();
		HX_STACK_LINE(204)
		this->invalidate_inertia();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_shapes,(void))

Void ZPP_Body_obj::invalidate_type( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_type","zpp_nape/phys/Body.hx",193);
		HX_STACK_THIS(this);
		HX_STACK_LINE(194)
		this->invalidate_mass();
		HX_STACK_LINE(195)
		this->invalidate_inertia();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_type,(void))

bool ZPP_Body_obj::isKinematic( ){
	HX_STACK_PUSH("ZPP_Body::isKinematic","zpp_nape/phys/Body.hx",190);
	HX_STACK_THIS(this);
	HX_STACK_LINE(190)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,isKinematic,return )

bool ZPP_Body_obj::isDynamic( ){
	HX_STACK_PUSH("ZPP_Body::isDynamic","zpp_nape/phys/Body.hx",185);
	HX_STACK_THIS(this);
	HX_STACK_LINE(185)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,isDynamic,return )

bool ZPP_Body_obj::isStatic( ){
	HX_STACK_PUSH("ZPP_Body::isStatic","zpp_nape/phys/Body.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_LINE(180)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,isStatic,return )

::zpp_nape::util::ZNPList_ZPP_Body ZPP_Body_obj::bodystack;

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Body_obj::bodyset;

bool ZPP_Body_obj::bodysetlt( ::zpp_nape::phys::ZPP_Body a,::zpp_nape::phys::ZPP_Body b){
	HX_STACK_PUSH("ZPP_Body::bodysetlt","zpp_nape/phys/Body.hx",214);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(214)
	return (a->id < b->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Body_obj,bodysetlt,return )

int ZPP_Body_obj::cur_graph_depth;

::nape::phys::Body ZPP_Body_obj::__static( ){
	HX_STACK_PUSH("ZPP_Body::__static","zpp_nape/phys/Body.hx",1375);
	struct _Function_1_1{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",1376);
			{
				HX_STACK_LINE(1376)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
					HX_STACK_LINE(1376)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1376)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(1376)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1376)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			return null();
		}
	};
	HX_STACK_LINE(1376)
	::nape::phys::Body ret = ::nape::phys::Body_obj::__new(_Function_1_1::Block(),null());		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1377)
	::zpp_nape::phys::ZPP_Body si = ret->zpp_inner;		HX_STACK_VAR(si,"si");
	HX_STACK_LINE(1378)
	si->world = true;
	HX_STACK_LINE(1379)
	si->wrap_shapes->zpp_inner->immutable = true;
	HX_STACK_LINE(1380)
	si->smass = si->imass = si->cmass = si->mass = si->gravMass = 0.0;
	HX_STACK_LINE(1381)
	si->sinertia = si->iinertia = si->cinertia = si->inertia = 0.0;
	HX_STACK_LINE(1382)
	si->cbTypes->clear();
	HX_STACK_LINE(1383)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,__static,return )


ZPP_Body_obj::ZPP_Body_obj()
{
}

void ZPP_Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Body);
	HX_MARK_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	HX_MARK_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_MARK_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_MARK_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_MARK_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_MARK_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_MARK_MEMBER_NAME(localCOMy,"localCOMy");
	HX_MARK_MEMBER_NAME(localCOMx,"localCOMx");
	HX_MARK_MEMBER_NAME(zip_aabb,"zip_aabb");
	HX_MARK_MEMBER_NAME(aabb,"aabb");
	HX_MARK_MEMBER_NAME(norotate,"norotate");
	HX_MARK_MEMBER_NAME(sinertia,"sinertia");
	HX_MARK_MEMBER_NAME(iinertia,"iinertia");
	HX_MARK_MEMBER_NAME(cinertia,"cinertia");
	HX_MARK_MEMBER_NAME(zip_inertia,"zip_inertia");
	HX_MARK_MEMBER_NAME(inertia,"inertia");
	HX_MARK_MEMBER_NAME(inertiaMode,"inertiaMode");
	HX_MARK_MEMBER_NAME(zip_gravMassScale,"zip_gravMassScale");
	HX_MARK_MEMBER_NAME(gravMassScale,"gravMassScale");
	HX_MARK_MEMBER_NAME(gravMassMode,"gravMassMode");
	HX_MARK_MEMBER_NAME(zip_gravMass,"zip_gravMass");
	HX_MARK_MEMBER_NAME(gravMass,"gravMass");
	HX_MARK_MEMBER_NAME(nomove,"nomove");
	HX_MARK_MEMBER_NAME(cmass,"cmass");
	HX_MARK_MEMBER_NAME(smass,"smass");
	HX_MARK_MEMBER_NAME(imass,"imass");
	HX_MARK_MEMBER_NAME(massMode,"massMode");
	HX_MARK_MEMBER_NAME(zip_mass,"zip_mass");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(kinematicDelaySleep,"kinematicDelaySleep");
	HX_MARK_MEMBER_NAME(zip_axis,"zip_axis");
	HX_MARK_MEMBER_NAME(axisy,"axisy");
	HX_MARK_MEMBER_NAME(axisx,"axisx");
	HX_MARK_MEMBER_NAME(rot,"rot");
	HX_MARK_MEMBER_NAME(pre_rot,"pre_rot");
	HX_MARK_MEMBER_NAME(kinangvel,"kinangvel");
	HX_MARK_MEMBER_NAME(torque,"torque");
	HX_MARK_MEMBER_NAME(angvel,"angvel");
	HX_MARK_MEMBER_NAME(wrapcvel,"wrapcvel");
	HX_MARK_MEMBER_NAME(wrap_svel,"wrap_svel");
	HX_MARK_MEMBER_NAME(svely,"svely");
	HX_MARK_MEMBER_NAME(svelx,"svelx");
	HX_MARK_MEMBER_NAME(wrap_kinvel,"wrap_kinvel");
	HX_MARK_MEMBER_NAME(kinvely,"kinvely");
	HX_MARK_MEMBER_NAME(kinvelx,"kinvelx");
	HX_MARK_MEMBER_NAME(wrap_force,"wrap_force");
	HX_MARK_MEMBER_NAME(forcey,"forcey");
	HX_MARK_MEMBER_NAME(forcex,"forcex");
	HX_MARK_MEMBER_NAME(wrap_vel,"wrap_vel");
	HX_MARK_MEMBER_NAME(vely,"vely");
	HX_MARK_MEMBER_NAME(velx,"velx");
	HX_MARK_MEMBER_NAME(wrap_pos,"wrap_pos");
	HX_MARK_MEMBER_NAME(posy,"posy");
	HX_MARK_MEMBER_NAME(posx,"posx");
	HX_MARK_MEMBER_NAME(pre_posy,"pre_posy");
	HX_MARK_MEMBER_NAME(pre_posx,"pre_posx");
	HX_MARK_MEMBER_NAME(disableCCD,"disableCCD");
	HX_MARK_MEMBER_NAME(bulletEnabled,"bulletEnabled");
	HX_MARK_MEMBER_NAME(bullet,"bullet");
	HX_MARK_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_MARK_MEMBER_NAME(sweepFrozen,"sweepFrozen");
	HX_MARK_MEMBER_NAME(sweep_angvel,"sweep_angvel");
	HX_MARK_MEMBER_NAME(sweepTime,"sweepTime");
	HX_MARK_MEMBER_NAME(graph_depth,"graph_depth");
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(wrap_arbiters,"wrap_arbiters");
	HX_MARK_MEMBER_NAME(arbiters,"arbiters");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(compound,"compound");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(outer,"outer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	HX_VISIT_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_VISIT_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_VISIT_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_VISIT_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_VISIT_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_VISIT_MEMBER_NAME(localCOMy,"localCOMy");
	HX_VISIT_MEMBER_NAME(localCOMx,"localCOMx");
	HX_VISIT_MEMBER_NAME(zip_aabb,"zip_aabb");
	HX_VISIT_MEMBER_NAME(aabb,"aabb");
	HX_VISIT_MEMBER_NAME(norotate,"norotate");
	HX_VISIT_MEMBER_NAME(sinertia,"sinertia");
	HX_VISIT_MEMBER_NAME(iinertia,"iinertia");
	HX_VISIT_MEMBER_NAME(cinertia,"cinertia");
	HX_VISIT_MEMBER_NAME(zip_inertia,"zip_inertia");
	HX_VISIT_MEMBER_NAME(inertia,"inertia");
	HX_VISIT_MEMBER_NAME(inertiaMode,"inertiaMode");
	HX_VISIT_MEMBER_NAME(zip_gravMassScale,"zip_gravMassScale");
	HX_VISIT_MEMBER_NAME(gravMassScale,"gravMassScale");
	HX_VISIT_MEMBER_NAME(gravMassMode,"gravMassMode");
	HX_VISIT_MEMBER_NAME(zip_gravMass,"zip_gravMass");
	HX_VISIT_MEMBER_NAME(gravMass,"gravMass");
	HX_VISIT_MEMBER_NAME(nomove,"nomove");
	HX_VISIT_MEMBER_NAME(cmass,"cmass");
	HX_VISIT_MEMBER_NAME(smass,"smass");
	HX_VISIT_MEMBER_NAME(imass,"imass");
	HX_VISIT_MEMBER_NAME(massMode,"massMode");
	HX_VISIT_MEMBER_NAME(zip_mass,"zip_mass");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(kinematicDelaySleep,"kinematicDelaySleep");
	HX_VISIT_MEMBER_NAME(zip_axis,"zip_axis");
	HX_VISIT_MEMBER_NAME(axisy,"axisy");
	HX_VISIT_MEMBER_NAME(axisx,"axisx");
	HX_VISIT_MEMBER_NAME(rot,"rot");
	HX_VISIT_MEMBER_NAME(pre_rot,"pre_rot");
	HX_VISIT_MEMBER_NAME(kinangvel,"kinangvel");
	HX_VISIT_MEMBER_NAME(torque,"torque");
	HX_VISIT_MEMBER_NAME(angvel,"angvel");
	HX_VISIT_MEMBER_NAME(wrapcvel,"wrapcvel");
	HX_VISIT_MEMBER_NAME(wrap_svel,"wrap_svel");
	HX_VISIT_MEMBER_NAME(svely,"svely");
	HX_VISIT_MEMBER_NAME(svelx,"svelx");
	HX_VISIT_MEMBER_NAME(wrap_kinvel,"wrap_kinvel");
	HX_VISIT_MEMBER_NAME(kinvely,"kinvely");
	HX_VISIT_MEMBER_NAME(kinvelx,"kinvelx");
	HX_VISIT_MEMBER_NAME(wrap_force,"wrap_force");
	HX_VISIT_MEMBER_NAME(forcey,"forcey");
	HX_VISIT_MEMBER_NAME(forcex,"forcex");
	HX_VISIT_MEMBER_NAME(wrap_vel,"wrap_vel");
	HX_VISIT_MEMBER_NAME(vely,"vely");
	HX_VISIT_MEMBER_NAME(velx,"velx");
	HX_VISIT_MEMBER_NAME(wrap_pos,"wrap_pos");
	HX_VISIT_MEMBER_NAME(posy,"posy");
	HX_VISIT_MEMBER_NAME(posx,"posx");
	HX_VISIT_MEMBER_NAME(pre_posy,"pre_posy");
	HX_VISIT_MEMBER_NAME(pre_posx,"pre_posx");
	HX_VISIT_MEMBER_NAME(disableCCD,"disableCCD");
	HX_VISIT_MEMBER_NAME(bulletEnabled,"bulletEnabled");
	HX_VISIT_MEMBER_NAME(bullet,"bullet");
	HX_VISIT_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_VISIT_MEMBER_NAME(sweepFrozen,"sweepFrozen");
	HX_VISIT_MEMBER_NAME(sweep_angvel,"sweep_angvel");
	HX_VISIT_MEMBER_NAME(sweepTime,"sweepTime");
	HX_VISIT_MEMBER_NAME(graph_depth,"graph_depth");
	HX_VISIT_MEMBER_NAME(component,"component");
	HX_VISIT_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(wrap_arbiters,"wrap_arbiters");
	HX_VISIT_MEMBER_NAME(arbiters,"arbiters");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(compound,"compound");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Body_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rot") ) { return rot; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"vely") ) { return vely; }
		if (HX_FIELD_EQ(inName,"velx") ) { return velx; }
		if (HX_FIELD_EQ(inName,"posy") ) { return posy; }
		if (HX_FIELD_EQ(inName,"posx") ) { return posx; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"cmass") ) { return cmass; }
		if (HX_FIELD_EQ(inName,"smass") ) { return smass; }
		if (HX_FIELD_EQ(inName,"imass") ) { return imass; }
		if (HX_FIELD_EQ(inName,"axisy") ) { return axisy; }
		if (HX_FIELD_EQ(inName,"axisx") ) { return axisx; }
		if (HX_FIELD_EQ(inName,"svely") ) { return svely; }
		if (HX_FIELD_EQ(inName,"svelx") ) { return svelx; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nomove") ) { return nomove; }
		if (HX_FIELD_EQ(inName,"torque") ) { return torque; }
		if (HX_FIELD_EQ(inName,"angvel") ) { return angvel; }
		if (HX_FIELD_EQ(inName,"forcey") ) { return forcey; }
		if (HX_FIELD_EQ(inName,"forcex") ) { return forcex; }
		if (HX_FIELD_EQ(inName,"bullet") ) { return bullet; }
		if (HX_FIELD_EQ(inName,"atRest") ) { return atRest_dyn(); }
		if (HX_FIELD_EQ(inName,"shapes") ) { return shapes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bodyset") ) { return bodyset; }
		if (HX_FIELD_EQ(inName,"inertia") ) { return inertia; }
		if (HX_FIELD_EQ(inName,"pre_rot") ) { return pre_rot; }
		if (HX_FIELD_EQ(inName,"kinvely") ) { return kinvely; }
		if (HX_FIELD_EQ(inName,"kinvelx") ) { return kinvelx; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__static") ) { return __static_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { return zip_aabb; }
		if (HX_FIELD_EQ(inName,"norotate") ) { return norotate; }
		if (HX_FIELD_EQ(inName,"sinertia") ) { return sinertia; }
		if (HX_FIELD_EQ(inName,"iinertia") ) { return iinertia; }
		if (HX_FIELD_EQ(inName,"cinertia") ) { return cinertia; }
		if (HX_FIELD_EQ(inName,"gravMass") ) { return gravMass; }
		if (HX_FIELD_EQ(inName,"massMode") ) { return massMode; }
		if (HX_FIELD_EQ(inName,"zip_mass") ) { return zip_mass; }
		if (HX_FIELD_EQ(inName,"zip_axis") ) { return zip_axis; }
		if (HX_FIELD_EQ(inName,"wrapcvel") ) { return wrapcvel; }
		if (HX_FIELD_EQ(inName,"wrap_vel") ) { return wrap_vel; }
		if (HX_FIELD_EQ(inName,"wrap_pos") ) { return wrap_pos; }
		if (HX_FIELD_EQ(inName,"pre_posy") ) { return pre_posy; }
		if (HX_FIELD_EQ(inName,"pre_posx") ) { return pre_posx; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return arbiters; }
		if (HX_FIELD_EQ(inName,"compound") ) { return compound; }
		if (HX_FIELD_EQ(inName,"isStatic") ) { return isStatic_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bodystack") ) { return bodystack; }
		if (HX_FIELD_EQ(inName,"bodysetlt") ) { return bodysetlt_dyn(); }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { return worldCOMy; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { return worldCOMx; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { return localCOMy; }
		if (HX_FIELD_EQ(inName,"localCOMx") ) { return localCOMx; }
		if (HX_FIELD_EQ(inName,"delta_rot") ) { return delta_rot_dyn(); }
		if (HX_FIELD_EQ(inName,"kinangvel") ) { return kinangvel; }
		if (HX_FIELD_EQ(inName,"setupsvel") ) { return setupsvel_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_svel") ) { return wrap_svel; }
		if (HX_FIELD_EQ(inName,"sweepTime") ) { return sweepTime; }
		if (HX_FIELD_EQ(inName,"component") ) { return component; }
		if (HX_FIELD_EQ(inName,"isDynamic") ) { return isDynamic_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setup_cvel") ) { return setup_cvel_dyn(); }
		if (HX_FIELD_EQ(inName,"setupForce") ) { return setupForce_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_force") ) { return wrap_force; }
		if (HX_FIELD_EQ(inName,"disableCCD") ) { return disableCCD; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getworldCOM") ) { return getworldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"getlocalCOM") ) { return getlocalCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_inertia") ) { return zip_inertia; }
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { return inertiaMode; }
		if (HX_FIELD_EQ(inName,"setupkinvel") ) { return setupkinvel_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_kinvel") ) { return wrap_kinvel; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { return sweepRadius; }
		if (HX_FIELD_EQ(inName,"sweepFrozen") ) { return sweepFrozen; }
		if (HX_FIELD_EQ(inName,"graph_depth") ) { return graph_depth; }
		if (HX_FIELD_EQ(inName,"constraints") ) { return constraints; }
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { return wrap_shapes; }
		if (HX_FIELD_EQ(inName,"isKinematic") ) { return isKinematic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"shapes_adder") ) { return shapes_adder_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { return zip_worldCOM; }
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { return zip_localCOM; }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { return gravMassMode; }
		if (HX_FIELD_EQ(inName,"zip_gravMass") ) { return zip_gravMass; }
		if (HX_FIELD_EQ(inName,"vel_validate") ) { return vel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"pos_validate") ) { return pos_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"sweep_angvel") ) { return sweep_angvel; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shapes_subber") ) { return shapes_subber_dyn(); }
		if (HX_FIELD_EQ(inName,"aabb_validate") ) { return aabb_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { return wrap_worldCOM; }
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { return wrap_localCOM; }
		if (HX_FIELD_EQ(inName,"validate_aabb") ) { return validate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { return gravMassScale; }
		if (HX_FIELD_EQ(inName,"validate_mass") ) { return validate_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_axis") ) { return validate_axis_dyn(); }
		if (HX_FIELD_EQ(inName,"cvel_validate") ) { return cvel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"setupVelocity") ) { return setupVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"setupPosition") ) { return setupPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"svel_validate") ) { return svel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"sweepValidate") ) { return sweepValidate_dyn(); }
		if (HX_FIELD_EQ(inName,"bulletEnabled") ) { return bulletEnabled; }
		if (HX_FIELD_EQ(inName,"wrap_arbiters") ) { return wrap_arbiters; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"invalidate_rot") ) { return invalidate_rot_dyn(); }
		if (HX_FIELD_EQ(inName,"force_validate") ) { return force_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"vel_invalidate") ) { return vel_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"pos_invalidate") ) { return pos_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_pos") ) { return invalidate_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"sweepIntegrate") ) { return sweepIntegrate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_graph_depth") ) { return cur_graph_depth; }
		if (HX_FIELD_EQ(inName,"invalidate_aabb") ) { return invalidate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_wake") ) { return invalidate_wake_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_mass") ) { return invalidate_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"svel_invalidate") ) { return svel_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"kinvel_validate") ) { return kinvel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshArbiters") ) { return refreshArbiters_dyn(); }
		if (HX_FIELD_EQ(inName,"connectedBodies") ) { return connectedBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_type") ) { return invalidate_type_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_inertia") ) { return validate_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"force_invalidate") ) { return force_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"init_bodysetlist") ) { return init_bodysetlist_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { return wrap_constraints; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"shapes_modifiable") ) { return shapes_modifiable_dyn(); }
		if (HX_FIELD_EQ(inName,"shapes_invalidate") ) { return shapes_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_worldCOM") ) { return validate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_localCOM") ) { return validate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_gravMass") ) { return validate_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_gravMassScale") ) { return zip_gravMassScale; }
		if (HX_FIELD_EQ(inName,"kinvel_invalidate") ) { return kinvel_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"interactingBodies") ) { return interactingBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_shapes") ) { return invalidate_shapes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"invalidate_inertia") ) { return invalidate_inertia_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__immutable_midstep") ) { return __immutable_midstep_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_worldCOM") ) { return invalidate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_localCOM") ) { return invalidate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_gravMass") ) { return invalidate_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"kinematicDelaySleep") ) { return kinematicDelaySleep; }
		if (HX_FIELD_EQ(inName,"quick_validate_axis") ) { return quick_validate_axis_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"connectedBodies_cont") ) { return connectedBodies_cont_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"validate_gravMassScale") ) { return validate_gravMassScale_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"invalidate_gravMassScale") ) { return invalidate_gravMassScale_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rot") ) { rot=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"aabb") ) { aabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vely") ) { vely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velx") ) { velx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posy") ) { posy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posx") ) { posx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cmass") ) { cmass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smass") ) { smass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imass") ) { imass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axisy") ) { axisy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axisx") ) { axisx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"svely") ) { svely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"svelx") ) { svelx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nomove") ) { nomove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"torque") ) { torque=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angvel") ) { angvel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forcey") ) { forcey=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forcex") ) { forcex=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bullet") ) { bullet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bodyset") ) { bodyset=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inertia") ) { inertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_rot") ) { pre_rot=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinvely") ) { kinvely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinvelx") ) { kinvelx=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { zip_aabb=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"norotate") ) { norotate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sinertia") ) { sinertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iinertia") ) { iinertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cinertia") ) { cinertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMass") ) { gravMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"massMode") ) { massMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_mass") ) { zip_mass=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_axis") ) { zip_axis=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapcvel") ) { wrapcvel=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_vel") ) { wrap_vel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_pos") ) { wrap_pos=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_posy") ) { pre_posy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_posx") ) { pre_posx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { arbiters=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"compound") ) { compound=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bodystack") ) { bodystack=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { worldCOMy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { worldCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { localCOMy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOMx") ) { localCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinangvel") ) { kinangvel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_svel") ) { wrap_svel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepTime") ) { sweepTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast< ::zpp_nape::space::ZPP_Component >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrap_force") ) { wrap_force=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disableCCD") ) { disableCCD=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"zip_inertia") ) { zip_inertia=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { inertiaMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_kinvel") ) { wrap_kinvel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { sweepRadius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepFrozen") ) { sweepFrozen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graph_depth") ) { graph_depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { wrap_shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { zip_worldCOM=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { zip_localCOM=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { gravMassMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_gravMass") ) { zip_gravMass=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweep_angvel") ) { sweep_angvel=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { wrap_worldCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { wrap_localCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { gravMassScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletEnabled") ) { bulletEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_arbiters") ) { wrap_arbiters=inValue.Cast< ::nape::dynamics::ArbiterList >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_graph_depth") ) { cur_graph_depth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { wrap_constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"zip_gravMassScale") ) { zip_gravMassScale=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"kinematicDelaySleep") ) { kinematicDelaySleep=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("wrap_worldCOM"));
	outFields->push(HX_CSTRING("wrap_localCOM"));
	outFields->push(HX_CSTRING("zip_worldCOM"));
	outFields->push(HX_CSTRING("worldCOMy"));
	outFields->push(HX_CSTRING("worldCOMx"));
	outFields->push(HX_CSTRING("zip_localCOM"));
	outFields->push(HX_CSTRING("localCOMy"));
	outFields->push(HX_CSTRING("localCOMx"));
	outFields->push(HX_CSTRING("zip_aabb"));
	outFields->push(HX_CSTRING("aabb"));
	outFields->push(HX_CSTRING("norotate"));
	outFields->push(HX_CSTRING("sinertia"));
	outFields->push(HX_CSTRING("iinertia"));
	outFields->push(HX_CSTRING("cinertia"));
	outFields->push(HX_CSTRING("zip_inertia"));
	outFields->push(HX_CSTRING("inertia"));
	outFields->push(HX_CSTRING("inertiaMode"));
	outFields->push(HX_CSTRING("zip_gravMassScale"));
	outFields->push(HX_CSTRING("gravMassScale"));
	outFields->push(HX_CSTRING("gravMassMode"));
	outFields->push(HX_CSTRING("zip_gravMass"));
	outFields->push(HX_CSTRING("gravMass"));
	outFields->push(HX_CSTRING("nomove"));
	outFields->push(HX_CSTRING("cmass"));
	outFields->push(HX_CSTRING("smass"));
	outFields->push(HX_CSTRING("imass"));
	outFields->push(HX_CSTRING("massMode"));
	outFields->push(HX_CSTRING("zip_mass"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("kinematicDelaySleep"));
	outFields->push(HX_CSTRING("zip_axis"));
	outFields->push(HX_CSTRING("axisy"));
	outFields->push(HX_CSTRING("axisx"));
	outFields->push(HX_CSTRING("rot"));
	outFields->push(HX_CSTRING("pre_rot"));
	outFields->push(HX_CSTRING("kinangvel"));
	outFields->push(HX_CSTRING("torque"));
	outFields->push(HX_CSTRING("angvel"));
	outFields->push(HX_CSTRING("wrapcvel"));
	outFields->push(HX_CSTRING("wrap_svel"));
	outFields->push(HX_CSTRING("svely"));
	outFields->push(HX_CSTRING("svelx"));
	outFields->push(HX_CSTRING("wrap_kinvel"));
	outFields->push(HX_CSTRING("kinvely"));
	outFields->push(HX_CSTRING("kinvelx"));
	outFields->push(HX_CSTRING("wrap_force"));
	outFields->push(HX_CSTRING("forcey"));
	outFields->push(HX_CSTRING("forcex"));
	outFields->push(HX_CSTRING("wrap_vel"));
	outFields->push(HX_CSTRING("vely"));
	outFields->push(HX_CSTRING("velx"));
	outFields->push(HX_CSTRING("wrap_pos"));
	outFields->push(HX_CSTRING("posy"));
	outFields->push(HX_CSTRING("posx"));
	outFields->push(HX_CSTRING("pre_posy"));
	outFields->push(HX_CSTRING("pre_posx"));
	outFields->push(HX_CSTRING("disableCCD"));
	outFields->push(HX_CSTRING("bulletEnabled"));
	outFields->push(HX_CSTRING("bullet"));
	outFields->push(HX_CSTRING("sweepRadius"));
	outFields->push(HX_CSTRING("sweepFrozen"));
	outFields->push(HX_CSTRING("sweep_angvel"));
	outFields->push(HX_CSTRING("sweepTime"));
	outFields->push(HX_CSTRING("graph_depth"));
	outFields->push(HX_CSTRING("component"));
	outFields->push(HX_CSTRING("wrap_constraints"));
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("wrap_arbiters"));
	outFields->push(HX_CSTRING("arbiters"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("wrap_shapes"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("compound"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("world"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("bodystack"),
	HX_CSTRING("bodyset"),
	HX_CSTRING("bodysetlt"),
	HX_CSTRING("cur_graph_depth"),
	HX_CSTRING("__static"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("copy"),
	HX_CSTRING("removedFromSpace"),
	HX_CSTRING("addedToSpace"),
	HX_CSTRING("shapes_modifiable"),
	HX_CSTRING("shapes_invalidate"),
	HX_CSTRING("shapes_subber"),
	HX_CSTRING("shapes_adder"),
	HX_CSTRING("aabb_validate"),
	HX_CSTRING("clear"),
	HX_CSTRING("__immutable_midstep"),
	HX_CSTRING("getworldCOM"),
	HX_CSTRING("getlocalCOM"),
	HX_CSTRING("validate_worldCOM"),
	HX_CSTRING("validate_localCOM"),
	HX_CSTRING("invalidate_worldCOM"),
	HX_CSTRING("invalidate_localCOM"),
	HX_CSTRING("wrap_worldCOM"),
	HX_CSTRING("wrap_localCOM"),
	HX_CSTRING("zip_worldCOM"),
	HX_CSTRING("worldCOMy"),
	HX_CSTRING("worldCOMx"),
	HX_CSTRING("zip_localCOM"),
	HX_CSTRING("localCOMy"),
	HX_CSTRING("localCOMx"),
	HX_CSTRING("invalidate_aabb"),
	HX_CSTRING("validate_aabb"),
	HX_CSTRING("zip_aabb"),
	HX_CSTRING("aabb"),
	HX_CSTRING("invalidate_wake"),
	HX_CSTRING("validate_inertia"),
	HX_CSTRING("invalidate_inertia"),
	HX_CSTRING("norotate"),
	HX_CSTRING("sinertia"),
	HX_CSTRING("iinertia"),
	HX_CSTRING("cinertia"),
	HX_CSTRING("zip_inertia"),
	HX_CSTRING("inertia"),
	HX_CSTRING("inertiaMode"),
	HX_CSTRING("validate_gravMassScale"),
	HX_CSTRING("invalidate_gravMassScale"),
	HX_CSTRING("validate_gravMass"),
	HX_CSTRING("invalidate_gravMass"),
	HX_CSTRING("zip_gravMassScale"),
	HX_CSTRING("gravMassScale"),
	HX_CSTRING("gravMassMode"),
	HX_CSTRING("zip_gravMass"),
	HX_CSTRING("gravMass"),
	HX_CSTRING("validate_mass"),
	HX_CSTRING("invalidate_mass"),
	HX_CSTRING("nomove"),
	HX_CSTRING("cmass"),
	HX_CSTRING("smass"),
	HX_CSTRING("imass"),
	HX_CSTRING("massMode"),
	HX_CSTRING("zip_mass"),
	HX_CSTRING("mass"),
	HX_CSTRING("kinematicDelaySleep"),
	HX_CSTRING("delta_rot"),
	HX_CSTRING("quick_validate_axis"),
	HX_CSTRING("validate_axis"),
	HX_CSTRING("zip_axis"),
	HX_CSTRING("axisy"),
	HX_CSTRING("axisx"),
	HX_CSTRING("invalidate_rot"),
	HX_CSTRING("rot"),
	HX_CSTRING("pre_rot"),
	HX_CSTRING("kinangvel"),
	HX_CSTRING("torque"),
	HX_CSTRING("angvel"),
	HX_CSTRING("setup_cvel"),
	HX_CSTRING("wrapcvel"),
	HX_CSTRING("cvel_validate"),
	HX_CSTRING("setupForce"),
	HX_CSTRING("setupsvel"),
	HX_CSTRING("setupkinvel"),
	HX_CSTRING("setupVelocity"),
	HX_CSTRING("setupPosition"),
	HX_CSTRING("force_validate"),
	HX_CSTRING("force_invalidate"),
	HX_CSTRING("svel_validate"),
	HX_CSTRING("svel_invalidate"),
	HX_CSTRING("kinvel_validate"),
	HX_CSTRING("kinvel_invalidate"),
	HX_CSTRING("vel_validate"),
	HX_CSTRING("vel_invalidate"),
	HX_CSTRING("pos_validate"),
	HX_CSTRING("pos_invalidate"),
	HX_CSTRING("invalidate_pos"),
	HX_CSTRING("wrap_svel"),
	HX_CSTRING("svely"),
	HX_CSTRING("svelx"),
	HX_CSTRING("wrap_kinvel"),
	HX_CSTRING("kinvely"),
	HX_CSTRING("kinvelx"),
	HX_CSTRING("wrap_force"),
	HX_CSTRING("forcey"),
	HX_CSTRING("forcex"),
	HX_CSTRING("wrap_vel"),
	HX_CSTRING("vely"),
	HX_CSTRING("velx"),
	HX_CSTRING("wrap_pos"),
	HX_CSTRING("posy"),
	HX_CSTRING("posx"),
	HX_CSTRING("pre_posy"),
	HX_CSTRING("pre_posx"),
	HX_CSTRING("sweepValidate"),
	HX_CSTRING("sweepIntegrate"),
	HX_CSTRING("disableCCD"),
	HX_CSTRING("bulletEnabled"),
	HX_CSTRING("bullet"),
	HX_CSTRING("sweepRadius"),
	HX_CSTRING("sweepFrozen"),
	HX_CSTRING("sweep_angvel"),
	HX_CSTRING("sweepTime"),
	HX_CSTRING("refreshArbiters"),
	HX_CSTRING("atRest"),
	HX_CSTRING("interactingBodies"),
	HX_CSTRING("connectedBodies"),
	HX_CSTRING("connectedBodies_cont"),
	HX_CSTRING("init_bodysetlist"),
	HX_CSTRING("graph_depth"),
	HX_CSTRING("component"),
	HX_CSTRING("wrap_constraints"),
	HX_CSTRING("constraints"),
	HX_CSTRING("wrap_arbiters"),
	HX_CSTRING("arbiters"),
	HX_CSTRING("space"),
	HX_CSTRING("invalidate_shapes"),
	HX_CSTRING("wrap_shapes"),
	HX_CSTRING("shapes"),
	HX_CSTRING("compound"),
	HX_CSTRING("invalidate_type"),
	HX_CSTRING("isKinematic"),
	HX_CSTRING("isDynamic"),
	HX_CSTRING("isStatic"),
	HX_CSTRING("type"),
	HX_CSTRING("world"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::bodystack,"bodystack");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::bodyset,"bodyset");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::cur_graph_depth,"cur_graph_depth");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::bodystack,"bodystack");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::bodyset,"bodyset");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::cur_graph_depth,"cur_graph_depth");
};

Class ZPP_Body_obj::__mClass;

void ZPP_Body_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.phys.ZPP_Body"), hx::TCanCast< ZPP_Body_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Body_obj::__boot()
{
	bodystack= null();
	bodyset= null();
	cur_graph_depth= (int)0;
}

} // end namespace zpp_nape
} // end namespace phys
