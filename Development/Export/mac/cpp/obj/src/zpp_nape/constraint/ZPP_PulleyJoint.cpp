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
#ifndef INCLUDED_nape_constraint_PulleyJoint
#include <nape/constraint/PulleyJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PulleyJoint
#include <zpp_nape/constraint/ZPP_PulleyJoint.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_PulleyJoint_obj::__construct()
{
HX_STACK_PUSH("ZPP_PulleyJoint::new","zpp_nape/constraint/PulleyJoint.hx",174);
{
	HX_STACK_LINE(645)
	this->stepped = false;
	HX_STACK_LINE(644)
	this->bias = 0.0;
	HX_STACK_LINE(643)
	this->gamma = 0.0;
	HX_STACK_LINE(642)
	this->jMax = 0.0;
	HX_STACK_LINE(641)
	this->jAcc = 0.0;
	HX_STACK_LINE(640)
	this->kMass = 0.0;
	HX_STACK_LINE(639)
	this->wrap_a4 = null();
	HX_STACK_LINE(586)
	this->a4rely = 0.0;
	HX_STACK_LINE(585)
	this->a4relx = 0.0;
	HX_STACK_LINE(584)
	this->a4localy = 0.0;
	HX_STACK_LINE(583)
	this->a4localx = 0.0;
	HX_STACK_LINE(582)
	this->b4 = null();
	HX_STACK_LINE(581)
	this->wrap_a3 = null();
	HX_STACK_LINE(528)
	this->a3rely = 0.0;
	HX_STACK_LINE(527)
	this->a3relx = 0.0;
	HX_STACK_LINE(526)
	this->a3localy = 0.0;
	HX_STACK_LINE(525)
	this->a3localx = 0.0;
	HX_STACK_LINE(524)
	this->b3 = null();
	HX_STACK_LINE(523)
	this->wrap_a2 = null();
	HX_STACK_LINE(470)
	this->a2rely = 0.0;
	HX_STACK_LINE(469)
	this->a2relx = 0.0;
	HX_STACK_LINE(468)
	this->a2localy = 0.0;
	HX_STACK_LINE(467)
	this->a2localx = 0.0;
	HX_STACK_LINE(466)
	this->b2 = null();
	HX_STACK_LINE(465)
	this->wrap_a1 = null();
	HX_STACK_LINE(412)
	this->a1rely = 0.0;
	HX_STACK_LINE(411)
	this->a1relx = 0.0;
	HX_STACK_LINE(410)
	this->a1localy = 0.0;
	HX_STACK_LINE(409)
	this->a1localx = 0.0;
	HX_STACK_LINE(408)
	this->b1 = null();
	HX_STACK_LINE(352)
	this->cx4 = 0.0;
	HX_STACK_LINE(351)
	this->cx3 = 0.0;
	HX_STACK_LINE(350)
	this->cx2 = 0.0;
	HX_STACK_LINE(349)
	this->cx1 = 0.0;
	HX_STACK_LINE(348)
	this->n34y = 0.0;
	HX_STACK_LINE(347)
	this->n34x = 0.0;
	HX_STACK_LINE(346)
	this->n12y = 0.0;
	HX_STACK_LINE(345)
	this->n12x = 0.0;
	HX_STACK_LINE(180)
	this->equal = false;
	HX_STACK_LINE(179)
	this->slack = false;
	HX_STACK_LINE(178)
	this->jointMax = 0.0;
	HX_STACK_LINE(177)
	this->jointMin = 0.0;
	HX_STACK_LINE(176)
	this->ratio = 1.0;
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(736)
	super::__construct();
	HX_STACK_LINE(737)
	{
		HX_STACK_LINE(738)
		{
			HX_STACK_LINE(739)
			this->a1localx = (int)0;
			HX_STACK_LINE(740)
			this->a1localy = (int)0;
			HX_STACK_LINE(749)
			{
			}
		}
		HX_STACK_LINE(758)
		{
			HX_STACK_LINE(759)
			this->a1relx = (int)0;
			HX_STACK_LINE(760)
			this->a1rely = (int)0;
			HX_STACK_LINE(769)
			{
			}
		}
	}
	HX_STACK_LINE(779)
	{
		HX_STACK_LINE(780)
		{
			HX_STACK_LINE(781)
			this->a2localx = (int)0;
			HX_STACK_LINE(782)
			this->a2localy = (int)0;
			HX_STACK_LINE(791)
			{
			}
		}
		HX_STACK_LINE(800)
		{
			HX_STACK_LINE(801)
			this->a2relx = (int)0;
			HX_STACK_LINE(802)
			this->a2rely = (int)0;
			HX_STACK_LINE(811)
			{
			}
		}
	}
	HX_STACK_LINE(821)
	{
		HX_STACK_LINE(822)
		{
			HX_STACK_LINE(823)
			this->a3localx = (int)0;
			HX_STACK_LINE(824)
			this->a3localy = (int)0;
			HX_STACK_LINE(833)
			{
			}
		}
		HX_STACK_LINE(842)
		{
			HX_STACK_LINE(843)
			this->a3relx = (int)0;
			HX_STACK_LINE(844)
			this->a3rely = (int)0;
			HX_STACK_LINE(853)
			{
			}
		}
	}
	HX_STACK_LINE(863)
	{
		HX_STACK_LINE(864)
		{
			HX_STACK_LINE(865)
			this->a4localx = (int)0;
			HX_STACK_LINE(866)
			this->a4localy = (int)0;
			HX_STACK_LINE(875)
			{
			}
		}
		HX_STACK_LINE(884)
		{
			HX_STACK_LINE(885)
			this->a4relx = (int)0;
			HX_STACK_LINE(886)
			this->a4rely = (int)0;
			HX_STACK_LINE(895)
			{
			}
		}
	}
	HX_STACK_LINE(905)
	{
		HX_STACK_LINE(906)
		this->n12x = (int)1;
		HX_STACK_LINE(907)
		this->n12y = (int)0;
		HX_STACK_LINE(916)
		{
		}
	}
	HX_STACK_LINE(925)
	{
		HX_STACK_LINE(926)
		this->n34x = (int)1;
		HX_STACK_LINE(927)
		this->n34y = (int)0;
		HX_STACK_LINE(936)
		{
		}
	}
	HX_STACK_LINE(945)
	this->jAcc = (int)0;
	HX_STACK_LINE(946)
	this->jMax = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(947)
	this->stepped = false;
	HX_STACK_LINE(948)
	this->cx1 = this->cx2 = this->cx3 = this->cx4 = (int)0;
}
;
	return null();
}

ZPP_PulleyJoint_obj::~ZPP_PulleyJoint_obj() { }

Dynamic ZPP_PulleyJoint_obj::__CreateEmpty() { return  new ZPP_PulleyJoint_obj; }
hx::ObjectPtr< ZPP_PulleyJoint_obj > ZPP_PulleyJoint_obj::__new()
{  hx::ObjectPtr< ZPP_PulleyJoint_obj > result = new ZPP_PulleyJoint_obj();
	result->__construct();
	return result;}

Dynamic ZPP_PulleyJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PulleyJoint_obj > result = new ZPP_PulleyJoint_obj();
	result->__construct();
	return result;}

Void ZPP_PulleyJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::draw","zpp_nape/constraint/PulleyJoint.hx",2192);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
	}
return null();
}


bool ZPP_PulleyJoint_obj::applyImpulsePos( ){
	HX_STACK_PUSH("ZPP_PulleyJoint::applyImpulsePos","zpp_nape/constraint/PulleyJoint.hx",1633);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1634)
	Float E;		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(1635)
	Float j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(1636)
	Float r1x = 0.0;		HX_STACK_VAR(r1x,"r1x");
	HX_STACK_LINE(1637)
	Float r1y = 0.0;		HX_STACK_VAR(r1y,"r1y");
	HX_STACK_LINE(1638)
	{
		HX_STACK_LINE(1640)
		r1x = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(1641)
		r1y = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(1644)
	Float r2x = 0.0;		HX_STACK_VAR(r2x,"r2x");
	HX_STACK_LINE(1645)
	Float r2y = 0.0;		HX_STACK_VAR(r2y,"r2y");
	HX_STACK_LINE(1646)
	{
		HX_STACK_LINE(1648)
		r2x = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(1649)
		r2y = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(1652)
	Float r3x = 0.0;		HX_STACK_VAR(r3x,"r3x");
	HX_STACK_LINE(1653)
	Float r3y = 0.0;		HX_STACK_VAR(r3y,"r3y");
	HX_STACK_LINE(1654)
	{
		HX_STACK_LINE(1656)
		r3x = ((this->b3->axisy * this->a3localx) - (this->b3->axisx * this->a3localy));
		HX_STACK_LINE(1657)
		r3y = ((this->a3localx * this->b3->axisx) + (this->a3localy * this->b3->axisy));
	}
	HX_STACK_LINE(1660)
	Float r4x = 0.0;		HX_STACK_VAR(r4x,"r4x");
	HX_STACK_LINE(1661)
	Float r4y = 0.0;		HX_STACK_VAR(r4y,"r4y");
	HX_STACK_LINE(1662)
	{
		HX_STACK_LINE(1664)
		r4x = ((this->b4->axisy * this->a4localx) - (this->b4->axisx * this->a4localy));
		HX_STACK_LINE(1665)
		r4y = ((this->a4localx * this->b4->axisx) + (this->a4localy * this->b4->axisy));
	}
	HX_STACK_LINE(1668)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(1669)
	Float n12x = 0.0;		HX_STACK_VAR(n12x,"n12x");
	HX_STACK_LINE(1670)
	Float n12y = 0.0;		HX_STACK_VAR(n12y,"n12y");
	HX_STACK_LINE(1671)
	Float n34x = 0.0;		HX_STACK_VAR(n34x,"n34x");
	HX_STACK_LINE(1672)
	Float n34y = 0.0;		HX_STACK_VAR(n34y,"n34y");
	HX_STACK_LINE(1673)
	{
		HX_STACK_LINE(1674)
		n12x = this->n12x;
		HX_STACK_LINE(1675)
		n12y = this->n12y;
		HX_STACK_LINE(1684)
		{
		}
	}
	HX_STACK_LINE(1693)
	{
		HX_STACK_LINE(1694)
		n34x = this->n34x;
		HX_STACK_LINE(1695)
		n34y = this->n34y;
		HX_STACK_LINE(1704)
		{
		}
	}
	struct _Function_1_1{
		inline static Float Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this,Float &r1y,Float &r3x,Float &r3y,Float &r4x,bool &slack,Float &r1x,Float &r2y,Float &n34x,Float &n12y,Float &r2x,Float &n12x,Float &n34y,Float &r4y){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",1713);
			{
				HX_STACK_LINE(1714)
				Float t12x = 0.0;		HX_STACK_VAR(t12x,"t12x");
				HX_STACK_LINE(1715)
				Float t12y = 0.0;		HX_STACK_VAR(t12y,"t12y");
				HX_STACK_LINE(1716)
				Float t34x = 0.0;		HX_STACK_VAR(t34x,"t34x");
				HX_STACK_LINE(1717)
				Float t34y = 0.0;		HX_STACK_VAR(t34y,"t34y");
				HX_STACK_LINE(1718)
				t12x = ((__this->b2->posx + r2x) - ((__this->b1->posx + r1x)));
				HX_STACK_LINE(1719)
				t12y = ((__this->b2->posy + r2y) - ((__this->b1->posy + r1y)));
				HX_STACK_LINE(1720)
				t34x = ((__this->b4->posx + r4x) - ((__this->b3->posx + r3x)));
				HX_STACK_LINE(1721)
				t34y = ((__this->b4->posy + r4y) - ((__this->b3->posy + r3y)));
				HX_STACK_LINE(1722)
				Float C12 = ::Math_obj::sqrt(((t12x * t12x) + (t12y * t12y)));		HX_STACK_VAR(C12,"C12");
				HX_STACK_LINE(1723)
				Float C34 = ::Math_obj::sqrt(((t34x * t34x) + (t34y * t34y)));		HX_STACK_VAR(C34,"C34");
				HX_STACK_LINE(1724)
				if (((C12 != (int)0))){
					HX_STACK_LINE(1726)
					Float t = (Float(1.0) / Float(C12));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1735)
					n12x = (t12x * t);
					HX_STACK_LINE(1736)
					n12y = (t12y * t);
				}
				HX_STACK_LINE(1739)
				if (((C34 != (int)0))){
					HX_STACK_LINE(1740)
					{
						HX_STACK_LINE(1741)
						Float t = (Float(1.0) / Float(C34));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1750)
						n34x = (t34x * t);
						HX_STACK_LINE(1751)
						n34y = (t34y * t);
					}
					HX_STACK_LINE(1753)
					{
						HX_STACK_LINE(1754)
						Float t = __this->ratio;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1763)
						hx::MultEq(n34x,t);
						HX_STACK_LINE(1764)
						hx::MultEq(n34y,t);
					}
				}
				else{
					HX_STACK_LINE(1769)
					Float t = (Float(__this->ratio) / Float(::Math_obj::sqrt(((n34x * n34x) + (n34y * n34y)))));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1778)
					hx::MultEq(n34x,t);
					HX_STACK_LINE(1779)
					hx::MultEq(n34y,t);
				}
				HX_STACK_LINE(1782)
				Float C = (C12 + (__this->ratio * C34));		HX_STACK_VAR(C,"C");
				HX_STACK_LINE(1783)
				if ((__this->equal)){
					HX_STACK_LINE(1784)
					hx::SubEq(C,__this->jointMax);
					HX_STACK_LINE(1785)
					slack = false;
				}
				else{
					HX_STACK_LINE(1787)
					if (((C < __this->jointMin))){
						HX_STACK_LINE(1789)
						C = (__this->jointMin - C);
						HX_STACK_LINE(1790)
						{
							HX_STACK_LINE(1791)
							n12x = -(n12x);
							HX_STACK_LINE(1792)
							n12y = -(n12y);
						}
						HX_STACK_LINE(1794)
						{
							HX_STACK_LINE(1795)
							n34x = -(n34x);
							HX_STACK_LINE(1796)
							n34y = -(n34y);
						}
						HX_STACK_LINE(1798)
						slack = false;
					}
					else{
						HX_STACK_LINE(1800)
						if (((C > __this->jointMax))){
							HX_STACK_LINE(1801)
							hx::SubEq(C,__this->jointMax);
							HX_STACK_LINE(1802)
							slack = false;
						}
						else{
							HX_STACK_LINE(1805)
							{
								HX_STACK_LINE(1806)
								n12x = (int)0;
								HX_STACK_LINE(1807)
								n12y = (int)0;
								HX_STACK_LINE(1816)
								{
								}
							}
							HX_STACK_LINE(1825)
							{
								HX_STACK_LINE(1826)
								n34x = (int)0;
								HX_STACK_LINE(1827)
								n34y = (int)0;
								HX_STACK_LINE(1836)
								{
								}
							}
							HX_STACK_LINE(1845)
							C = (int)0;
							HX_STACK_LINE(1846)
							slack = true;
						}
					}
				}
				HX_STACK_LINE(1849)
				return C;
			}
			return null();
		}
	};
	HX_STACK_LINE(1713)
	E = _Function_1_1::Block(this,r1y,r3x,r3y,r4x,slack,r1x,r2y,n34x,n12y,r2x,n12x,n34y,r4y);
	HX_STACK_LINE(1851)
	if ((!(slack))){
		HX_STACK_LINE(1852)
		if (((bool(this->breakUnderError) && bool(((E * E) > (this->maxError * this->maxError)))))){
			HX_STACK_LINE(1852)
			return true;
		}
		HX_STACK_LINE(1853)
		if ((((E * E) < (::nape::Config_obj::constraintLinearSlop * ::nape::Config_obj::constraintLinearSlop)))){
			HX_STACK_LINE(1853)
			return false;
		}
		HX_STACK_LINE(1854)
		hx::MultEq(E,0.5);
		HX_STACK_LINE(1855)
		if ((((E * E) > (int)6))){
			HX_STACK_LINE(1856)
			Float k = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(1857)
			if (((k > ::nape::Config_obj::epsilon))){
				HX_STACK_LINE(1858)
				k = (Float(0.75) / Float(k));
				HX_STACK_LINE(1859)
				j = (-(E) * k);
				HX_STACK_LINE(1860)
				if (((bool(this->equal) || bool((j < (int)0))))){
					HX_STACK_LINE(1861)
					{
						HX_STACK_LINE(1862)
						Float t = (j * this->b1->imass);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1871)
						hx::SubEq(this->b1->posx,(n12x * t));
						HX_STACK_LINE(1872)
						hx::SubEq(this->b1->posy,(n12y * t));
					}
					HX_STACK_LINE(1874)
					{
						HX_STACK_LINE(1875)
						Float t = (j * this->b2->imass);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1884)
						hx::AddEq(this->b2->posx,(n12x * t));
						HX_STACK_LINE(1885)
						hx::AddEq(this->b2->posy,(n12y * t));
					}
					HX_STACK_LINE(1887)
					{
						HX_STACK_LINE(1888)
						Float t = (j * this->b3->imass);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1897)
						hx::SubEq(this->b3->posx,(n34x * t));
						HX_STACK_LINE(1898)
						hx::SubEq(this->b3->posy,(n34y * t));
					}
					HX_STACK_LINE(1900)
					{
						HX_STACK_LINE(1901)
						Float t = (j * this->b4->imass);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1910)
						hx::AddEq(this->b4->posx,(n34x * t));
						HX_STACK_LINE(1911)
						hx::AddEq(this->b4->posy,(n34y * t));
					}
					struct _Function_5_1{
						inline static Float Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this,Float &r1y,Float &r3x,Float &r3y,Float &r4x,bool &slack,Float &r1x,Float &r2y,Float &n34x,Float &n12y,Float &r2x,Float &n12x,Float &n34y,Float &r4y){
							HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",1913);
							{
								HX_STACK_LINE(1914)
								Float t12x = 0.0;		HX_STACK_VAR(t12x,"t12x");
								HX_STACK_LINE(1915)
								Float t12y = 0.0;		HX_STACK_VAR(t12y,"t12y");
								HX_STACK_LINE(1916)
								Float t34x = 0.0;		HX_STACK_VAR(t34x,"t34x");
								HX_STACK_LINE(1917)
								Float t34y = 0.0;		HX_STACK_VAR(t34y,"t34y");
								HX_STACK_LINE(1918)
								t12x = ((__this->b2->posx + r2x) - ((__this->b1->posx + r1x)));
								HX_STACK_LINE(1919)
								t12y = ((__this->b2->posy + r2y) - ((__this->b1->posy + r1y)));
								HX_STACK_LINE(1920)
								t34x = ((__this->b4->posx + r4x) - ((__this->b3->posx + r3x)));
								HX_STACK_LINE(1921)
								t34y = ((__this->b4->posy + r4y) - ((__this->b3->posy + r3y)));
								HX_STACK_LINE(1922)
								Float C12 = ::Math_obj::sqrt(((t12x * t12x) + (t12y * t12y)));		HX_STACK_VAR(C12,"C12");
								HX_STACK_LINE(1923)
								Float C34 = ::Math_obj::sqrt(((t34x * t34x) + (t34y * t34y)));		HX_STACK_VAR(C34,"C34");
								HX_STACK_LINE(1924)
								if (((C12 != (int)0))){
									HX_STACK_LINE(1926)
									Float t = (Float(1.0) / Float(C12));		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(1935)
									n12x = (t12x * t);
									HX_STACK_LINE(1936)
									n12y = (t12y * t);
								}
								HX_STACK_LINE(1939)
								if (((C34 != (int)0))){
									HX_STACK_LINE(1940)
									{
										HX_STACK_LINE(1941)
										Float t = (Float(1.0) / Float(C34));		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(1950)
										n34x = (t34x * t);
										HX_STACK_LINE(1951)
										n34y = (t34y * t);
									}
									HX_STACK_LINE(1953)
									{
										HX_STACK_LINE(1954)
										Float t = __this->ratio;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(1963)
										hx::MultEq(n34x,t);
										HX_STACK_LINE(1964)
										hx::MultEq(n34y,t);
									}
								}
								else{
									HX_STACK_LINE(1969)
									Float t = (Float(__this->ratio) / Float(::Math_obj::sqrt(((n34x * n34x) + (n34y * n34y)))));		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(1978)
									hx::MultEq(n34x,t);
									HX_STACK_LINE(1979)
									hx::MultEq(n34y,t);
								}
								HX_STACK_LINE(1982)
								Float C = (C12 + (__this->ratio * C34));		HX_STACK_VAR(C,"C");
								HX_STACK_LINE(1983)
								if ((__this->equal)){
									HX_STACK_LINE(1984)
									hx::SubEq(C,__this->jointMax);
									HX_STACK_LINE(1985)
									slack = false;
								}
								else{
									HX_STACK_LINE(1987)
									if (((C < __this->jointMin))){
										HX_STACK_LINE(1989)
										C = (__this->jointMin - C);
										HX_STACK_LINE(1990)
										{
											HX_STACK_LINE(1991)
											n12x = -(n12x);
											HX_STACK_LINE(1992)
											n12y = -(n12y);
										}
										HX_STACK_LINE(1994)
										{
											HX_STACK_LINE(1995)
											n34x = -(n34x);
											HX_STACK_LINE(1996)
											n34y = -(n34y);
										}
										HX_STACK_LINE(1998)
										slack = false;
									}
									else{
										HX_STACK_LINE(2000)
										if (((C > __this->jointMax))){
											HX_STACK_LINE(2001)
											hx::SubEq(C,__this->jointMax);
											HX_STACK_LINE(2002)
											slack = false;
										}
										else{
											HX_STACK_LINE(2005)
											{
												HX_STACK_LINE(2006)
												n12x = (int)0;
												HX_STACK_LINE(2007)
												n12y = (int)0;
												HX_STACK_LINE(2016)
												{
												}
											}
											HX_STACK_LINE(2025)
											{
												HX_STACK_LINE(2026)
												n34x = (int)0;
												HX_STACK_LINE(2027)
												n34y = (int)0;
												HX_STACK_LINE(2036)
												{
												}
											}
											HX_STACK_LINE(2045)
											C = (int)0;
											HX_STACK_LINE(2046)
											slack = true;
										}
									}
								}
								HX_STACK_LINE(2049)
								return C;
							}
							return null();
						}
					};
					HX_STACK_LINE(1913)
					E = _Function_5_1::Block(this,r1y,r3x,r3y,r4x,slack,r1x,r2y,n34x,n12y,r2x,n12x,n34y,r4y);
					HX_STACK_LINE(2051)
					hx::MultEq(E,0.5);
				}
			}
		}
		HX_STACK_LINE(2055)
		Float cx1;		HX_STACK_VAR(cx1,"cx1");
		Float cx2;		HX_STACK_VAR(cx2,"cx2");
		Float cx3;		HX_STACK_VAR(cx3,"cx3");
		Float cx4;		HX_STACK_VAR(cx4,"cx4");
		struct _Function_2_1{
			inline static Float Block( Float &r1y,::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this,Float &r3x,Float &r3y,Float &r4x,Float &r1x,Float &r2y,Float &n34x,Float &n12y,Float &cx1,Float &n12x,Float &r2x,Float &cx3,Float &n34y,Float &cx4,Float &r4y,Float &cx2){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",2056);
				{
					HX_STACK_LINE(2057)
					cx1 = ((n12y * r1x) - (n12x * r1y));
					HX_STACK_LINE(2058)
					cx2 = ((n12y * r2x) - (n12x * r2y));
					HX_STACK_LINE(2059)
					cx3 = ((n34y * r3x) - (n34x * r3y));
					HX_STACK_LINE(2060)
					cx4 = ((n34y * r4x) - (n34x * r4y));
					HX_STACK_LINE(2061)
					Float ratioSq = (__this->ratio * __this->ratio);		HX_STACK_VAR(ratioSq,"ratioSq");
					HX_STACK_LINE(2062)
					Float K = ((((((__this->b1->smass + __this->b2->smass) + (ratioSq * ((__this->b3->smass + __this->b4->smass)))) + ((__this->b1->sinertia * cx1) * cx1)) + ((__this->b2->sinertia * cx2) * cx2)) + ((__this->b3->sinertia * cx3) * cx3)) + ((__this->b4->sinertia * cx4) * cx4));		HX_STACK_VAR(K,"K");
					HX_STACK_LINE(2063)
					if (((__this->b1 == __this->b4))){
						HX_STACK_LINE(2063)
						hx::SubEq(K,((int)2 * ((((((n12x * n34x) + (n12y * n34y))) * __this->b1->smass) + ((cx1 * cx4) * __this->b1->sinertia)))));
					}
					HX_STACK_LINE(2064)
					if (((__this->b1 == __this->b3))){
						HX_STACK_LINE(2064)
						hx::AddEq(K,((int)2 * ((((((n12x * n34x) + (n12y * n34y))) * __this->b1->smass) + ((cx1 * cx3) * __this->b1->sinertia)))));
					}
					HX_STACK_LINE(2065)
					if (((__this->b2 == __this->b3))){
						HX_STACK_LINE(2065)
						hx::SubEq(K,((int)2 * ((((((n12x * n34x) + (n12y * n34y))) * __this->b2->smass) + ((cx2 * cx3) * __this->b2->sinertia)))));
					}
					HX_STACK_LINE(2066)
					if (((__this->b2 == __this->b4))){
						HX_STACK_LINE(2066)
						hx::AddEq(K,((int)2 * ((((((n12x * n34x) + (n12y * n34y))) * __this->b2->smass) + ((cx2 * cx4) * __this->b2->sinertia)))));
					}
					HX_STACK_LINE(2067)
					return K;
				}
				return null();
			}
		};
		HX_STACK_LINE(2056)
		Float k = _Function_2_1::Block(r1y,this,r3x,r3y,r4x,r1x,r2y,n34x,n12y,cx1,n12x,r2x,cx3,n34y,cx4,r4y,cx2);		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(2069)
		if (((k != (int)0))){
			HX_STACK_LINE(2069)
			k = (Float((int)1) / Float(k));
		}
		HX_STACK_LINE(2070)
		j = (-(E) * k);
		HX_STACK_LINE(2071)
		if (((bool(this->equal) || bool((j < (int)0))))){
			HX_STACK_LINE(2073)
			{
				HX_STACK_LINE(2074)
				Float t = (this->b1->imass * j);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2083)
				hx::SubEq(this->b1->posx,(n12x * t));
				HX_STACK_LINE(2084)
				hx::SubEq(this->b1->posy,(n12y * t));
			}
			HX_STACK_LINE(2086)
			{
				HX_STACK_LINE(2087)
				Float t = (this->b2->imass * j);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2096)
				hx::AddEq(this->b2->posx,(n12x * t));
				HX_STACK_LINE(2097)
				hx::AddEq(this->b2->posy,(n12y * t));
			}
			HX_STACK_LINE(2099)
			{
				HX_STACK_LINE(2100)
				Float t = (this->b3->imass * j);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2109)
				hx::SubEq(this->b3->posx,(n34x * t));
				HX_STACK_LINE(2110)
				hx::SubEq(this->b3->posy,(n34y * t));
			}
			HX_STACK_LINE(2112)
			{
				HX_STACK_LINE(2113)
				Float t = (this->b4->imass * j);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2122)
				hx::AddEq(this->b4->posx,(n34x * t));
				HX_STACK_LINE(2123)
				hx::AddEq(this->b4->posy,(n34y * t));
			}
			HX_STACK_LINE(2125)
			{
				HX_STACK_LINE(2125)
				::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
				Float dr = ((-(cx1) * this->b1->iinertia) * j);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(2125)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(2125)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(2125)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(2125)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(2125)
					Dynamic();
				}
				else{
					HX_STACK_LINE(2125)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(2125)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(2125)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(2125)
					Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(2125)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(2125)
					_this->axisx = nx;
				}
			}
			HX_STACK_LINE(2126)
			{
				HX_STACK_LINE(2126)
				::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
				Float dr = ((cx2 * this->b2->iinertia) * j);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(2126)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(2126)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(2126)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(2126)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(2126)
					Dynamic();
				}
				else{
					HX_STACK_LINE(2126)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(2126)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(2126)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(2126)
					Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(2126)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(2126)
					_this->axisx = nx;
				}
			}
			HX_STACK_LINE(2127)
			{
				HX_STACK_LINE(2127)
				::zpp_nape::phys::ZPP_Body _this = this->b3;		HX_STACK_VAR(_this,"_this");
				Float dr = ((-(cx3) * this->b3->iinertia) * j);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(2127)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(2127)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(2127)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(2127)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(2127)
					Dynamic();
				}
				else{
					HX_STACK_LINE(2127)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(2127)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(2127)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(2127)
					Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(2127)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(2127)
					_this->axisx = nx;
				}
			}
			HX_STACK_LINE(2128)
			{
				HX_STACK_LINE(2128)
				::zpp_nape::phys::ZPP_Body _this = this->b4;		HX_STACK_VAR(_this,"_this");
				Float dr = ((cx4 * this->b4->iinertia) * j);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(2128)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(2128)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(2128)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(2128)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(2128)
					Dynamic();
				}
				else{
					HX_STACK_LINE(2128)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(2128)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(2128)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(2128)
					Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(2128)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(2128)
					_this->axisx = nx;
				}
			}
		}
	}
	HX_STACK_LINE(2190)
	return false;
}


bool ZPP_PulleyJoint_obj::applyImpulseVel( ){
	HX_STACK_PUSH("ZPP_PulleyJoint::applyImpulseVel","zpp_nape/constraint/PulleyJoint.hx",1487);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1488)
	if ((this->slack)){
		HX_STACK_LINE(1488)
		return false;
	}
	HX_STACK_LINE(1489)
	Float E = ((((((((this->n12x * ((((this->b2->velx + this->b2->kinvelx) - this->b1->velx) - this->b1->kinvelx))) + (this->n12y * ((((this->b2->vely + this->b2->kinvely) - this->b1->vely) - this->b1->kinvely)))) + (this->n34x * ((((this->b4->velx + this->b4->kinvelx) - this->b3->velx) - this->b3->kinvelx)))) + (this->n34y * ((((this->b4->vely + this->b4->kinvely) - this->b3->vely) - this->b3->kinvely)))) + (((this->b2->angvel + this->b2->kinangvel)) * this->cx2)) - (((this->b1->angvel + this->b1->kinangvel)) * this->cx1)) + (((this->b4->angvel + this->b4->kinangvel)) * this->cx4)) - (((this->b3->angvel + this->b3->kinangvel)) * this->cx3));		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(1492)
	Float j = ((this->kMass * ((this->bias - E))) - (this->jAcc * this->gamma));		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(1493)
	{
		HX_STACK_LINE(1502)
		Float jOld = this->jAcc;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(1503)
		hx::AddEq(this->jAcc,j);
		HX_STACK_LINE(1504)
		{
			HX_STACK_LINE(1505)
			if (((bool(!(this->equal)) && bool((this->jAcc > (int)0))))){
				HX_STACK_LINE(1505)
				this->jAcc = (int)0;
			}
			HX_STACK_LINE(1506)
			if (((bool(this->breakUnderForce) && bool((this->jAcc < -(this->jMax)))))){
				HX_STACK_LINE(1506)
				return true;
			}
			HX_STACK_LINE(1507)
			if ((!(this->stiff))){
				HX_STACK_LINE(1507)
				if (((this->jAcc < -(this->jMax)))){
					HX_STACK_LINE(1508)
					this->jAcc = -(this->jMax);
				}
			}
		}
		HX_STACK_LINE(1511)
		j = (this->jAcc - jOld);
	}
	HX_STACK_LINE(1513)
	{
		HX_STACK_LINE(1573)
		{
			HX_STACK_LINE(1574)
			Float t = (this->b1->imass * j);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1583)
			hx::SubEq(this->b1->velx,(this->n12x * t));
			HX_STACK_LINE(1584)
			hx::SubEq(this->b1->vely,(this->n12y * t));
		}
		HX_STACK_LINE(1586)
		{
			HX_STACK_LINE(1587)
			Float t = (this->b2->imass * j);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1596)
			hx::AddEq(this->b2->velx,(this->n12x * t));
			HX_STACK_LINE(1597)
			hx::AddEq(this->b2->vely,(this->n12y * t));
		}
		HX_STACK_LINE(1599)
		{
			HX_STACK_LINE(1600)
			Float t = (this->b3->imass * j);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1609)
			hx::SubEq(this->b3->velx,(this->n34x * t));
			HX_STACK_LINE(1610)
			hx::SubEq(this->b3->vely,(this->n34y * t));
		}
		HX_STACK_LINE(1612)
		{
			HX_STACK_LINE(1613)
			Float t = (this->b4->imass * j);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1622)
			hx::AddEq(this->b4->velx,(this->n34x * t));
			HX_STACK_LINE(1623)
			hx::AddEq(this->b4->vely,(this->n34y * t));
		}
		HX_STACK_LINE(1625)
		hx::SubEq(this->b1->angvel,((this->cx1 * this->b1->iinertia) * j));
		HX_STACK_LINE(1626)
		hx::AddEq(this->b2->angvel,((this->cx2 * this->b2->iinertia) * j));
		HX_STACK_LINE(1627)
		hx::SubEq(this->b3->angvel,((this->cx3 * this->b3->iinertia) * j));
		HX_STACK_LINE(1628)
		hx::AddEq(this->b4->angvel,((this->cx4 * this->b4->iinertia) * j));
	}
	HX_STACK_LINE(1631)
	return false;
}


Void ZPP_PulleyJoint_obj::warmStart( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::warmStart","zpp_nape/constraint/PulleyJoint.hx",1367);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1367)
		if ((!(this->slack))){
			HX_STACK_LINE(1428)
			{
				HX_STACK_LINE(1429)
				Float t = (this->b1->imass * this->jAcc);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1438)
				hx::SubEq(this->b1->velx,(this->n12x * t));
				HX_STACK_LINE(1439)
				hx::SubEq(this->b1->vely,(this->n12y * t));
			}
			HX_STACK_LINE(1441)
			{
				HX_STACK_LINE(1442)
				Float t = (this->b2->imass * this->jAcc);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1451)
				hx::AddEq(this->b2->velx,(this->n12x * t));
				HX_STACK_LINE(1452)
				hx::AddEq(this->b2->vely,(this->n12y * t));
			}
			HX_STACK_LINE(1454)
			{
				HX_STACK_LINE(1455)
				Float t = (this->b3->imass * this->jAcc);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1464)
				hx::SubEq(this->b3->velx,(this->n34x * t));
				HX_STACK_LINE(1465)
				hx::SubEq(this->b3->vely,(this->n34y * t));
			}
			HX_STACK_LINE(1467)
			{
				HX_STACK_LINE(1468)
				Float t = (this->b4->imass * this->jAcc);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1477)
				hx::AddEq(this->b4->velx,(this->n34x * t));
				HX_STACK_LINE(1478)
				hx::AddEq(this->b4->vely,(this->n34y * t));
			}
			HX_STACK_LINE(1480)
			hx::SubEq(this->b1->angvel,((this->cx1 * this->b1->iinertia) * this->jAcc));
			HX_STACK_LINE(1481)
			hx::AddEq(this->b2->angvel,((this->cx2 * this->b2->iinertia) * this->jAcc));
			HX_STACK_LINE(1482)
			hx::SubEq(this->b3->angvel,((this->cx3 * this->b3->iinertia) * this->jAcc));
			HX_STACK_LINE(1483)
			hx::AddEq(this->b4->angvel,((this->cx4 * this->b4->iinertia) * this->jAcc));
		}
	}
return null();
}


bool ZPP_PulleyJoint_obj::preStep( Float dt){
	HX_STACK_PUSH("ZPP_PulleyJoint::preStep","zpp_nape/constraint/PulleyJoint.hx",1165);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dt,"dt");
	HX_STACK_LINE(1166)
	if (((this->pre_dt == -1.0))){
		HX_STACK_LINE(1166)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(1167)
	Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(1168)
	this->pre_dt = dt;
	HX_STACK_LINE(1169)
	this->stepped = true;
	HX_STACK_LINE(1170)
	this->equal = (this->jointMin == this->jointMax);
	HX_STACK_LINE(1171)
	{
		HX_STACK_LINE(1172)
		this->a1relx = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(1173)
		this->a1rely = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(1175)
	{
		HX_STACK_LINE(1176)
		this->a2relx = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(1177)
		this->a2rely = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(1179)
	{
		HX_STACK_LINE(1180)
		this->a3relx = ((this->b3->axisy * this->a3localx) - (this->b3->axisx * this->a3localy));
		HX_STACK_LINE(1181)
		this->a3rely = ((this->a3localx * this->b3->axisx) + (this->a3localy * this->b3->axisy));
	}
	HX_STACK_LINE(1183)
	{
		HX_STACK_LINE(1184)
		this->a4relx = ((this->b4->axisy * this->a4localx) - (this->b4->axisx * this->a4localy));
		HX_STACK_LINE(1185)
		this->a4rely = ((this->a4localx * this->b4->axisx) + (this->a4localy * this->b4->axisy));
	}
	struct _Function_1_1{
		inline static Float Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",1187);
			{
				HX_STACK_LINE(1188)
				Float t12x = 0.0;		HX_STACK_VAR(t12x,"t12x");
				HX_STACK_LINE(1189)
				Float t12y = 0.0;		HX_STACK_VAR(t12y,"t12y");
				HX_STACK_LINE(1190)
				Float t34x = 0.0;		HX_STACK_VAR(t34x,"t34x");
				HX_STACK_LINE(1191)
				Float t34y = 0.0;		HX_STACK_VAR(t34y,"t34y");
				HX_STACK_LINE(1192)
				t12x = ((__this->b2->posx + __this->a2relx) - ((__this->b1->posx + __this->a1relx)));
				HX_STACK_LINE(1193)
				t12y = ((__this->b2->posy + __this->a2rely) - ((__this->b1->posy + __this->a1rely)));
				HX_STACK_LINE(1194)
				t34x = ((__this->b4->posx + __this->a4relx) - ((__this->b3->posx + __this->a3relx)));
				HX_STACK_LINE(1195)
				t34y = ((__this->b4->posy + __this->a4rely) - ((__this->b3->posy + __this->a3rely)));
				HX_STACK_LINE(1196)
				Float C12 = ::Math_obj::sqrt(((t12x * t12x) + (t12y * t12y)));		HX_STACK_VAR(C12,"C12");
				HX_STACK_LINE(1197)
				Float C34 = ::Math_obj::sqrt(((t34x * t34x) + (t34y * t34y)));		HX_STACK_VAR(C34,"C34");
				HX_STACK_LINE(1198)
				if (((C12 != (int)0))){
					HX_STACK_LINE(1200)
					Float t = (Float(1.0) / Float(C12));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1209)
					__this->n12x = (t12x * t);
					HX_STACK_LINE(1210)
					__this->n12y = (t12y * t);
				}
				HX_STACK_LINE(1213)
				if (((C34 != (int)0))){
					HX_STACK_LINE(1214)
					{
						HX_STACK_LINE(1215)
						Float t = (Float(1.0) / Float(C34));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1224)
						__this->n34x = (t34x * t);
						HX_STACK_LINE(1225)
						__this->n34y = (t34y * t);
					}
					HX_STACK_LINE(1227)
					{
						HX_STACK_LINE(1228)
						Float t = __this->ratio;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1237)
						hx::MultEq(__this->n34x,t);
						HX_STACK_LINE(1238)
						hx::MultEq(__this->n34y,t);
					}
				}
				else{
					HX_STACK_LINE(1243)
					Float t = (Float(__this->ratio) / Float(::Math_obj::sqrt(((__this->n34x * __this->n34x) + (__this->n34y * __this->n34y)))));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1252)
					hx::MultEq(__this->n34x,t);
					HX_STACK_LINE(1253)
					hx::MultEq(__this->n34y,t);
				}
				HX_STACK_LINE(1256)
				Float C = (C12 + (__this->ratio * C34));		HX_STACK_VAR(C,"C");
				HX_STACK_LINE(1257)
				if ((__this->equal)){
					HX_STACK_LINE(1258)
					hx::SubEq(C,__this->jointMax);
					HX_STACK_LINE(1259)
					__this->slack = false;
				}
				else{
					HX_STACK_LINE(1261)
					if (((C < __this->jointMin))){
						HX_STACK_LINE(1263)
						C = (__this->jointMin - C);
						HX_STACK_LINE(1264)
						{
							HX_STACK_LINE(1265)
							__this->n12x = -(__this->n12x);
							HX_STACK_LINE(1266)
							__this->n12y = -(__this->n12y);
						}
						HX_STACK_LINE(1268)
						{
							HX_STACK_LINE(1269)
							__this->n34x = -(__this->n34x);
							HX_STACK_LINE(1270)
							__this->n34y = -(__this->n34y);
						}
						HX_STACK_LINE(1272)
						__this->slack = false;
					}
					else{
						HX_STACK_LINE(1274)
						if (((C > __this->jointMax))){
							HX_STACK_LINE(1275)
							hx::SubEq(C,__this->jointMax);
							HX_STACK_LINE(1276)
							__this->slack = false;
						}
						else{
							HX_STACK_LINE(1279)
							{
								HX_STACK_LINE(1280)
								__this->n12x = (int)0;
								HX_STACK_LINE(1281)
								__this->n12y = (int)0;
								HX_STACK_LINE(1290)
								{
								}
							}
							HX_STACK_LINE(1299)
							{
								HX_STACK_LINE(1300)
								__this->n34x = (int)0;
								HX_STACK_LINE(1301)
								__this->n34y = (int)0;
								HX_STACK_LINE(1310)
								{
								}
							}
							HX_STACK_LINE(1319)
							C = (int)0;
							HX_STACK_LINE(1320)
							__this->slack = true;
						}
					}
				}
				HX_STACK_LINE(1323)
				return C;
			}
			return null();
		}
	};
	HX_STACK_LINE(1187)
	Float C = _Function_1_1::Block(this);		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(1325)
	if ((!(this->slack))){
		struct _Function_2_1{
			inline static Float Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",1326);
				{
					HX_STACK_LINE(1327)
					__this->cx1 = ((__this->n12y * __this->a1relx) - (__this->n12x * __this->a1rely));
					HX_STACK_LINE(1328)
					__this->cx2 = ((__this->n12y * __this->a2relx) - (__this->n12x * __this->a2rely));
					HX_STACK_LINE(1329)
					__this->cx3 = ((__this->n34y * __this->a3relx) - (__this->n34x * __this->a3rely));
					HX_STACK_LINE(1330)
					__this->cx4 = ((__this->n34y * __this->a4relx) - (__this->n34x * __this->a4rely));
					HX_STACK_LINE(1331)
					Float ratioSq = (__this->ratio * __this->ratio);		HX_STACK_VAR(ratioSq,"ratioSq");
					HX_STACK_LINE(1332)
					Float K = ((((((__this->b1->smass + __this->b2->smass) + (ratioSq * ((__this->b3->smass + __this->b4->smass)))) + ((__this->b1->sinertia * __this->cx1) * __this->cx1)) + ((__this->b2->sinertia * __this->cx2) * __this->cx2)) + ((__this->b3->sinertia * __this->cx3) * __this->cx3)) + ((__this->b4->sinertia * __this->cx4) * __this->cx4));		HX_STACK_VAR(K,"K");
					HX_STACK_LINE(1333)
					if (((__this->b1 == __this->b4))){
						HX_STACK_LINE(1333)
						hx::SubEq(K,((int)2 * ((((((__this->n12x * __this->n34x) + (__this->n12y * __this->n34y))) * __this->b1->smass) + ((__this->cx1 * __this->cx4) * __this->b1->sinertia)))));
					}
					HX_STACK_LINE(1334)
					if (((__this->b1 == __this->b3))){
						HX_STACK_LINE(1334)
						hx::AddEq(K,((int)2 * ((((((__this->n12x * __this->n34x) + (__this->n12y * __this->n34y))) * __this->b1->smass) + ((__this->cx1 * __this->cx3) * __this->b1->sinertia)))));
					}
					HX_STACK_LINE(1335)
					if (((__this->b2 == __this->b3))){
						HX_STACK_LINE(1335)
						hx::SubEq(K,((int)2 * ((((((__this->n12x * __this->n34x) + (__this->n12y * __this->n34y))) * __this->b2->smass) + ((__this->cx2 * __this->cx3) * __this->b2->sinertia)))));
					}
					HX_STACK_LINE(1336)
					if (((__this->b2 == __this->b4))){
						HX_STACK_LINE(1336)
						hx::AddEq(K,((int)2 * ((((((__this->n12x * __this->n34x) + (__this->n12y * __this->n34y))) * __this->b2->smass) + ((__this->cx2 * __this->cx4) * __this->b2->sinertia)))));
					}
					HX_STACK_LINE(1337)
					return K;
				}
				return null();
			}
		};
		HX_STACK_LINE(1326)
		this->kMass = _Function_2_1::Block(this);
		HX_STACK_LINE(1339)
		if (((this->kMass != (int)0))){
			HX_STACK_LINE(1339)
			this->kMass = (Float((int)1) / Float(this->kMass));
		}
		else{
			HX_STACK_LINE(1340)
			this->jAcc = (int)0;
		}
		HX_STACK_LINE(1341)
		if ((!(this->stiff))){
			HX_STACK_LINE(1342)
			if (((bool(this->breakUnderError) && bool(((C * C) > (this->maxError * this->maxError)))))){
				HX_STACK_LINE(1342)
				return true;
			}
			HX_STACK_LINE(1343)
			Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
			struct _Function_3_1{
				inline static Float Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this,Float &dt,Float &biasCoef){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",1344);
					{
						HX_STACK_LINE(1345)
						Float omega = (((int)2 * ::Math_obj::PI) * __this->frequency);		HX_STACK_VAR(omega,"omega");
						HX_STACK_LINE(1346)
						__this->gamma = (Float((int)1) / Float((((dt * omega) * ((((int)2 * __this->damping) + (omega * dt)))))));
						HX_STACK_LINE(1347)
						Float ig = (Float((int)1) / Float((((int)1 + __this->gamma))));		HX_STACK_VAR(ig,"ig");
						HX_STACK_LINE(1348)
						biasCoef = (((dt * omega) * omega) * __this->gamma);
						HX_STACK_LINE(1349)
						hx::MultEq(__this->gamma,ig);
						HX_STACK_LINE(1350)
						return ig;
					}
					return null();
				}
			};
			HX_STACK_LINE(1344)
			hx::MultEq(this->kMass,_Function_3_1::Block(this,dt,biasCoef));
			HX_STACK_LINE(1352)
			this->bias = (-(C) * biasCoef);
			HX_STACK_LINE(1353)
			if (((this->bias < -(this->maxError)))){
				HX_STACK_LINE(1354)
				this->bias = -(this->maxError);
			}
			else{
				HX_STACK_LINE(1355)
				if (((this->bias > this->maxError))){
					HX_STACK_LINE(1355)
					this->bias = this->maxError;
				}
			}
		}
		else{
			HX_STACK_LINE(1359)
			this->bias = (int)0;
			HX_STACK_LINE(1360)
			this->gamma = (int)0;
		}
		HX_STACK_LINE(1362)
		hx::MultEq(this->jAcc,dtratio);
		HX_STACK_LINE(1363)
		this->jMax = (this->maxForce * dt);
	}
	HX_STACK_LINE(1365)
	return false;
}


Void ZPP_PulleyJoint_obj::clearcache( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::clearcache","zpp_nape/constraint/PulleyJoint.hx",1161);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1162)
		this->jAcc = (int)0;
		HX_STACK_LINE(1163)
		this->pre_dt = -1.0;
	}
return null();
}


bool ZPP_PulleyJoint_obj::pair_exists( int id,int di){
	HX_STACK_PUSH("ZPP_PulleyJoint::pair_exists","zpp_nape/constraint/PulleyJoint.hx",1158);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(1158)
	return (bool((bool((bool((bool((this->b1->id == id)) && bool(((bool((bool((this->b2->id == di)) || bool((this->b3->id == di)))) || bool((this->b4->id == di))))))) || bool((bool((this->b2->id == id)) && bool(((bool((bool((this->b3->id == di)) || bool((this->b4->id == di)))) || bool((this->b1->id == di))))))))) || bool((bool((this->b3->id == id)) && bool(((bool((bool((this->b4->id == di)) || bool((this->b1->id == di)))) || bool((this->b2->id == di))))))))) || bool((bool((this->b4->id == id)) && bool(((bool((bool((this->b1->id == di)) || bool((this->b2->id == di)))) || bool((this->b3->id == di))))))));
}


Void ZPP_PulleyJoint_obj::forest( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::forest","zpp_nape/constraint/PulleyJoint.hx",964);
		HX_STACK_THIS(this);
		HX_STACK_LINE(965)
		if (((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",968);
					{
						HX_STACK_LINE(969)
						::zpp_nape::space::ZPP_Component obj = __this->b1->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(970)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(971)
						while(((obj != obj->parent))){
							HX_STACK_LINE(972)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(973)
							obj->parent = stack;
							HX_STACK_LINE(974)
							stack = obj;
							HX_STACK_LINE(975)
							obj = nxt;
						}
						HX_STACK_LINE(977)
						while(((stack != null()))){
							HX_STACK_LINE(978)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(979)
							stack->parent = obj;
							HX_STACK_LINE(980)
							stack = nxt;
						}
						HX_STACK_LINE(982)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(966)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b1->component == this->b1->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b1->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",987);
					{
						HX_STACK_LINE(988)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(989)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(990)
						while(((obj != obj->parent))){
							HX_STACK_LINE(991)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(992)
							obj->parent = stack;
							HX_STACK_LINE(993)
							stack = obj;
							HX_STACK_LINE(994)
							obj = nxt;
						}
						HX_STACK_LINE(996)
						while(((stack != null()))){
							HX_STACK_LINE(997)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(998)
							stack->parent = obj;
							HX_STACK_LINE(999)
							stack = nxt;
						}
						HX_STACK_LINE(1001)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(985)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(1004)
			if (((xr != yr))){
				HX_STACK_LINE(1004)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(1005)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(1006)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(1006)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(1008)
						yr->parent = xr;
						HX_STACK_LINE(1009)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(1013)
		if (((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",1016);
					{
						HX_STACK_LINE(1017)
						::zpp_nape::space::ZPP_Component obj = __this->b2->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1018)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1019)
						while(((obj != obj->parent))){
							HX_STACK_LINE(1020)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1021)
							obj->parent = stack;
							HX_STACK_LINE(1022)
							stack = obj;
							HX_STACK_LINE(1023)
							obj = nxt;
						}
						HX_STACK_LINE(1025)
						while(((stack != null()))){
							HX_STACK_LINE(1026)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1027)
							stack->parent = obj;
							HX_STACK_LINE(1028)
							stack = nxt;
						}
						HX_STACK_LINE(1030)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(1014)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b2->component == this->b2->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b2->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",1035);
					{
						HX_STACK_LINE(1036)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1037)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1038)
						while(((obj != obj->parent))){
							HX_STACK_LINE(1039)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1040)
							obj->parent = stack;
							HX_STACK_LINE(1041)
							stack = obj;
							HX_STACK_LINE(1042)
							obj = nxt;
						}
						HX_STACK_LINE(1044)
						while(((stack != null()))){
							HX_STACK_LINE(1045)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1046)
							stack->parent = obj;
							HX_STACK_LINE(1047)
							stack = nxt;
						}
						HX_STACK_LINE(1049)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(1033)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(1052)
			if (((xr != yr))){
				HX_STACK_LINE(1052)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(1053)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(1054)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(1054)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(1056)
						yr->parent = xr;
						HX_STACK_LINE(1057)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(1061)
		if (((this->b3->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",1064);
					{
						HX_STACK_LINE(1065)
						::zpp_nape::space::ZPP_Component obj = __this->b3->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1066)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1067)
						while(((obj != obj->parent))){
							HX_STACK_LINE(1068)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1069)
							obj->parent = stack;
							HX_STACK_LINE(1070)
							stack = obj;
							HX_STACK_LINE(1071)
							obj = nxt;
						}
						HX_STACK_LINE(1073)
						while(((stack != null()))){
							HX_STACK_LINE(1074)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1075)
							stack->parent = obj;
							HX_STACK_LINE(1076)
							stack = nxt;
						}
						HX_STACK_LINE(1078)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(1062)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b3->component == this->b3->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b3->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",1083);
					{
						HX_STACK_LINE(1084)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1085)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1086)
						while(((obj != obj->parent))){
							HX_STACK_LINE(1087)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1088)
							obj->parent = stack;
							HX_STACK_LINE(1089)
							stack = obj;
							HX_STACK_LINE(1090)
							obj = nxt;
						}
						HX_STACK_LINE(1092)
						while(((stack != null()))){
							HX_STACK_LINE(1093)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1094)
							stack->parent = obj;
							HX_STACK_LINE(1095)
							stack = nxt;
						}
						HX_STACK_LINE(1097)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(1081)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(1100)
			if (((xr != yr))){
				HX_STACK_LINE(1100)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(1101)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(1102)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(1102)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(1104)
						yr->parent = xr;
						HX_STACK_LINE(1105)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(1109)
		if (((this->b4->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",1112);
					{
						HX_STACK_LINE(1113)
						::zpp_nape::space::ZPP_Component obj = __this->b4->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1114)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1115)
						while(((obj != obj->parent))){
							HX_STACK_LINE(1116)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1117)
							obj->parent = stack;
							HX_STACK_LINE(1118)
							stack = obj;
							HX_STACK_LINE(1119)
							obj = nxt;
						}
						HX_STACK_LINE(1121)
						while(((stack != null()))){
							HX_STACK_LINE(1122)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1123)
							stack->parent = obj;
							HX_STACK_LINE(1124)
							stack = nxt;
						}
						HX_STACK_LINE(1126)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(1110)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b4->component == this->b4->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b4->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",1131);
					{
						HX_STACK_LINE(1132)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(1133)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(1134)
						while(((obj != obj->parent))){
							HX_STACK_LINE(1135)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1136)
							obj->parent = stack;
							HX_STACK_LINE(1137)
							stack = obj;
							HX_STACK_LINE(1138)
							obj = nxt;
						}
						HX_STACK_LINE(1140)
						while(((stack != null()))){
							HX_STACK_LINE(1141)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(1142)
							stack->parent = obj;
							HX_STACK_LINE(1143)
							stack = nxt;
						}
						HX_STACK_LINE(1145)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(1129)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(1148)
			if (((xr != yr))){
				HX_STACK_LINE(1148)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(1149)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(1150)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(1150)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(1152)
						yr->parent = xr;
						HX_STACK_LINE(1153)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


Void ZPP_PulleyJoint_obj::wake_connected( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::wake_connected","zpp_nape/constraint/PulleyJoint.hx",958);
		HX_STACK_THIS(this);
		HX_STACK_LINE(959)
		if (((bool((this->b1 != null())) && bool((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(959)
			this->b1->wake();
		}
		HX_STACK_LINE(960)
		if (((bool((this->b2 != null())) && bool((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(960)
			this->b2->wake();
		}
		HX_STACK_LINE(961)
		if (((bool((this->b3 != null())) && bool((this->b3->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(961)
			this->b3->wake();
		}
		HX_STACK_LINE(962)
		if (((bool((this->b4 != null())) && bool((this->b4->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(962)
			this->b4->wake();
		}
	}
return null();
}


Void ZPP_PulleyJoint_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::validate","zpp_nape/constraint/PulleyJoint.hx",950);
		HX_STACK_THIS(this);
		HX_STACK_LINE(951)
		if (((bool((bool((bool((this->b1 == null())) || bool((this->b2 == null())))) || bool((this->b3 == null())))) || bool((this->b4 == null()))))){
			HX_STACK_LINE(951)
			hx::Throw (HX_CSTRING("Error: PulleyJoint cannot be simulated with null bodies"));
		}
		HX_STACK_LINE(952)
		if (((bool((this->b1 == this->b2)) || bool((this->b3 == this->b4))))){
			HX_STACK_LINE(952)
			hx::Throw (HX_CSTRING("Error: PulleyJoint cannot have body1==body2 or body3==body4"));
		}
		HX_STACK_LINE(953)
		if (((bool((bool((bool((this->b1->space != this->space)) || bool((this->b2->space != this->space)))) || bool((this->b3->space != this->space)))) || bool((this->b4->space != this->space))))){
			HX_STACK_LINE(953)
			hx::Throw (HX_CSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned"));
		}
		HX_STACK_LINE(954)
		if (((this->jointMin > this->jointMax))){
			HX_STACK_LINE(954)
			hx::Throw (HX_CSTRING("Error: PulleyJoint must have jointMin <= jointMax"));
		}
		HX_STACK_LINE(955)
		if (((bool(!(((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) && bool(!(((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))))){
			HX_STACK_LINE(955)
			hx::Throw (HX_CSTRING("Error: PulleyJoint cannot have both bodies in a linked pair non-dynamic"));
		}
		HX_STACK_LINE(956)
		if (((bool(!(((this->b3->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) && bool(!(((this->b4->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))))){
			HX_STACK_LINE(956)
			hx::Throw (HX_CSTRING("Error: PulleyJoint cannot have both bodies in a linked pair non-dynamic"));
		}
	}
return null();
}


::nape::constraint::Constraint ZPP_PulleyJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_PUSH("ZPP_PulleyJoint::copy","zpp_nape/constraint/PulleyJoint.hx",646);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dict,"dict");
	HX_STACK_ARG(todo,"todo");
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",647);
			{
				HX_STACK_LINE(647)
				::nape::constraint::PulleyJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(647)
				if (((_this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(647)
					_this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(647)
				return _this->zpp_inner_zn->wrap_a1;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",647);
			{
				HX_STACK_LINE(647)
				::nape::constraint::PulleyJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(647)
				if (((_this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(647)
					_this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(647)
				return _this->zpp_inner_zn->wrap_a2;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",647);
			{
				HX_STACK_LINE(647)
				::nape::constraint::PulleyJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(647)
				if (((_this->zpp_inner_zn->wrap_a3 == null()))){
					HX_STACK_LINE(647)
					_this->zpp_inner_zn->setup_a3();
				}
				HX_STACK_LINE(647)
				return _this->zpp_inner_zn->wrap_a3;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",647);
			{
				HX_STACK_LINE(647)
				::nape::constraint::PulleyJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(647)
				if (((_this->zpp_inner_zn->wrap_a4 == null()))){
					HX_STACK_LINE(647)
					_this->zpp_inner_zn->setup_a4();
				}
				HX_STACK_LINE(647)
				return _this->zpp_inner_zn->wrap_a4;
			}
			return null();
		}
	};
	HX_STACK_LINE(647)
	Array< ::Dynamic > ret = Array_obj< ::Dynamic >::__new().Add(::nape::constraint::PulleyJoint_obj::__new(null(),null(),null(),null(),_Function_1_1::Block(this),_Function_1_2::Block(this),_Function_1_3::Block(this),_Function_1_4::Block(this),this->jointMin,this->jointMax,this->ratio));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(648)
	this->copyto(ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >());
	HX_STACK_LINE(649)
	if (((bool((dict != null())) && bool((this->b1 != null()))))){
		HX_STACK_LINE(659)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(660)
		{
			HX_STACK_LINE(660)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(660)
			while(((_g < dict->length))){
				HX_STACK_LINE(660)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(660)
				++(_g);
				HX_STACK_LINE(661)
				if (((idc->id == this->b1->id))){
					HX_STACK_LINE(662)
					b = idc->bc;
					HX_STACK_LINE(663)
					break;
				}
			}
		}
		HX_STACK_LINE(666)
		if (((b != null()))){
			HX_STACK_LINE(666)
			ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b1 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/PulleyJoint.hx",667);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(667)
					ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b1 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(667)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b1->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(670)
	if (((bool((dict != null())) && bool((this->b2 != null()))))){
		HX_STACK_LINE(680)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(681)
		{
			HX_STACK_LINE(681)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(681)
			while(((_g < dict->length))){
				HX_STACK_LINE(681)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(681)
				++(_g);
				HX_STACK_LINE(682)
				if (((idc->id == this->b2->id))){
					HX_STACK_LINE(683)
					b = idc->bc;
					HX_STACK_LINE(684)
					break;
				}
			}
		}
		HX_STACK_LINE(687)
		if (((b != null()))){
			HX_STACK_LINE(687)
			ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b2 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/PulleyJoint.hx",688);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(688)
					ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b2 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(688)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b2->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(691)
	if (((bool((dict != null())) && bool((this->b3 != null()))))){
		HX_STACK_LINE(701)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(702)
		{
			HX_STACK_LINE(702)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(702)
			while(((_g < dict->length))){
				HX_STACK_LINE(702)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(702)
				++(_g);
				HX_STACK_LINE(703)
				if (((idc->id == this->b3->id))){
					HX_STACK_LINE(704)
					b = idc->bc;
					HX_STACK_LINE(705)
					break;
				}
			}
		}
		HX_STACK_LINE(708)
		if (((b != null()))){
			HX_STACK_LINE(708)
			ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b3 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/PulleyJoint.hx",709);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(709)
					ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b3 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(709)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b3->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(712)
	if (((bool((dict != null())) && bool((this->b4 != null()))))){
		HX_STACK_LINE(722)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(723)
		{
			HX_STACK_LINE(723)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(723)
			while(((_g < dict->length))){
				HX_STACK_LINE(723)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(723)
				++(_g);
				HX_STACK_LINE(724)
				if (((idc->id == this->b4->id))){
					HX_STACK_LINE(725)
					b = idc->bc;
					HX_STACK_LINE(726)
					break;
				}
			}
		}
		HX_STACK_LINE(729)
		if (((b != null()))){
			HX_STACK_LINE(729)
			ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b4 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/PulleyJoint.hx",730);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(730)
					ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >()->zpp_inner_zn->b4 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(730)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b4->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(733)
	return ret->__get((int)0).StaticCast< ::nape::constraint::PulleyJoint >();
}


Void ZPP_PulleyJoint_obj::setup_a4( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::setup_a4","zpp_nape/constraint/PulleyJoint.hx",633);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",634);
				{
					HX_STACK_LINE(634)
					Float x = __this->a4localx;		HX_STACK_VAR(x,"x");
					Float y = __this->a4localy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(634)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(634)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(634)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(634)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(634)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(634)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(634)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(634)
						ret->zpp_pool = null();
						HX_STACK_LINE(634)
						ret->zpp_disp = false;
						HX_STACK_LINE(634)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(634)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(634)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",634);
								{
									HX_STACK_LINE(634)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(634)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(634)
									{
										HX_STACK_LINE(634)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(634)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(634)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(634)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(634)
											ret1->next = null();
										}
										HX_STACK_LINE(634)
										ret1->weak = false;
									}
									HX_STACK_LINE(634)
									ret1->_immutable = immutable;
									HX_STACK_LINE(634)
									{
										HX_STACK_LINE(634)
										ret1->x = x;
										HX_STACK_LINE(634)
										ret1->y = y;
										HX_STACK_LINE(634)
										{
										}
									}
									HX_STACK_LINE(634)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(634)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(634)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(634)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(634)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(634)
							if ((_this->_immutable)){
								HX_STACK_LINE(634)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(634)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(634)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(634)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(634)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",634);
								{
									HX_STACK_LINE(634)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(634)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(634)
									{
										HX_STACK_LINE(634)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(634)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(634)
											_this->_validate();
										}
									}
									HX_STACK_LINE(634)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",634);
								{
									HX_STACK_LINE(634)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(634)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(634)
									{
										HX_STACK_LINE(634)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(634)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(634)
											_this->_validate();
										}
									}
									HX_STACK_LINE(634)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(634)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(634)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(634)
								{
								}
							}
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(634)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(634)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(634)
						ret;
					}
					HX_STACK_LINE(634)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(634)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(634)
		this->wrap_a4 = _Function_1_1::Block(this);
		HX_STACK_LINE(635)
		this->wrap_a4->zpp_inner->_inuse = true;
		HX_STACK_LINE(636)
		this->wrap_a4->zpp_inner->_validate = this->validate_a4_dyn();
		HX_STACK_LINE(637)
		this->wrap_a4->zpp_inner->_invalidate = this->invalidate_a4_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,setup_a4,(void))

Void ZPP_PulleyJoint_obj::invalidate_a4( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::invalidate_a4","zpp_nape/constraint/PulleyJoint.hx",609);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(610)
		this->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("a4")));
		HX_STACK_LINE(611)
		{
			HX_STACK_LINE(612)
			this->a4localx = x->x;
			HX_STACK_LINE(613)
			this->a4localy = x->y;
			HX_STACK_LINE(622)
			{
			}
		}
		HX_STACK_LINE(631)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,invalidate_a4,(void))

Void ZPP_PulleyJoint_obj::validate_a4( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::validate_a4","zpp_nape/constraint/PulleyJoint.hx",587);
		HX_STACK_THIS(this);
		HX_STACK_LINE(589)
		this->wrap_a4->zpp_inner->x = this->a4localx;
		HX_STACK_LINE(590)
		this->wrap_a4->zpp_inner->y = this->a4localy;
		HX_STACK_LINE(599)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,validate_a4,(void))

Void ZPP_PulleyJoint_obj::setup_a3( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::setup_a3","zpp_nape/constraint/PulleyJoint.hx",575);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",576);
				{
					HX_STACK_LINE(576)
					Float x = __this->a3localx;		HX_STACK_VAR(x,"x");
					Float y = __this->a3localy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(576)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(576)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(576)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(576)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(576)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(576)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(576)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(576)
						ret->zpp_pool = null();
						HX_STACK_LINE(576)
						ret->zpp_disp = false;
						HX_STACK_LINE(576)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(576)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(576)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",576);
								{
									HX_STACK_LINE(576)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(576)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(576)
									{
										HX_STACK_LINE(576)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(576)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(576)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(576)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(576)
											ret1->next = null();
										}
										HX_STACK_LINE(576)
										ret1->weak = false;
									}
									HX_STACK_LINE(576)
									ret1->_immutable = immutable;
									HX_STACK_LINE(576)
									{
										HX_STACK_LINE(576)
										ret1->x = x;
										HX_STACK_LINE(576)
										ret1->y = y;
										HX_STACK_LINE(576)
										{
										}
									}
									HX_STACK_LINE(576)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(576)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(576)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(576)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(576)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(576)
						{
							HX_STACK_LINE(576)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(576)
							if ((_this->_immutable)){
								HX_STACK_LINE(576)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(576)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(576)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(576)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(576)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",576);
								{
									HX_STACK_LINE(576)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(576)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(576)
									{
										HX_STACK_LINE(576)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(576)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(576)
											_this->_validate();
										}
									}
									HX_STACK_LINE(576)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",576);
								{
									HX_STACK_LINE(576)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(576)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(576)
									{
										HX_STACK_LINE(576)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(576)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(576)
											_this->_validate();
										}
									}
									HX_STACK_LINE(576)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(576)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(576)
							{
								HX_STACK_LINE(576)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(576)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(576)
								{
								}
							}
							HX_STACK_LINE(576)
							{
								HX_STACK_LINE(576)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(576)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(576)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(576)
						ret;
					}
					HX_STACK_LINE(576)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(576)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(576)
		this->wrap_a3 = _Function_1_1::Block(this);
		HX_STACK_LINE(577)
		this->wrap_a3->zpp_inner->_inuse = true;
		HX_STACK_LINE(578)
		this->wrap_a3->zpp_inner->_validate = this->validate_a3_dyn();
		HX_STACK_LINE(579)
		this->wrap_a3->zpp_inner->_invalidate = this->invalidate_a3_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,setup_a3,(void))

Void ZPP_PulleyJoint_obj::invalidate_a3( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::invalidate_a3","zpp_nape/constraint/PulleyJoint.hx",551);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(552)
		this->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("a3")));
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(554)
			this->a3localx = x->x;
			HX_STACK_LINE(555)
			this->a3localy = x->y;
			HX_STACK_LINE(564)
			{
			}
		}
		HX_STACK_LINE(573)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,invalidate_a3,(void))

Void ZPP_PulleyJoint_obj::validate_a3( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::validate_a3","zpp_nape/constraint/PulleyJoint.hx",529);
		HX_STACK_THIS(this);
		HX_STACK_LINE(531)
		this->wrap_a3->zpp_inner->x = this->a3localx;
		HX_STACK_LINE(532)
		this->wrap_a3->zpp_inner->y = this->a3localy;
		HX_STACK_LINE(541)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,validate_a3,(void))

Void ZPP_PulleyJoint_obj::setup_a2( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::setup_a2","zpp_nape/constraint/PulleyJoint.hx",517);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",518);
				{
					HX_STACK_LINE(518)
					Float x = __this->a2localx;		HX_STACK_VAR(x,"x");
					Float y = __this->a2localy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(518)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(518)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(518)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(518)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(518)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(518)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(518)
						ret->zpp_pool = null();
						HX_STACK_LINE(518)
						ret->zpp_disp = false;
						HX_STACK_LINE(518)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(518)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",518);
								{
									HX_STACK_LINE(518)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(518)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(518)
									{
										HX_STACK_LINE(518)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(518)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(518)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(518)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(518)
											ret1->next = null();
										}
										HX_STACK_LINE(518)
										ret1->weak = false;
									}
									HX_STACK_LINE(518)
									ret1->_immutable = immutable;
									HX_STACK_LINE(518)
									{
										HX_STACK_LINE(518)
										ret1->x = x;
										HX_STACK_LINE(518)
										ret1->y = y;
										HX_STACK_LINE(518)
										{
										}
									}
									HX_STACK_LINE(518)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(518)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(518)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(518)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(518)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(518)
							if ((_this->_immutable)){
								HX_STACK_LINE(518)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(518)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(518)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(518)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(518)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",518);
								{
									HX_STACK_LINE(518)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(518)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(518)
									{
										HX_STACK_LINE(518)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(518)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(518)
											_this->_validate();
										}
									}
									HX_STACK_LINE(518)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",518);
								{
									HX_STACK_LINE(518)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(518)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(518)
									{
										HX_STACK_LINE(518)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(518)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(518)
											_this->_validate();
										}
									}
									HX_STACK_LINE(518)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(518)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(518)
							{
								HX_STACK_LINE(518)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(518)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(518)
								{
								}
							}
							HX_STACK_LINE(518)
							{
								HX_STACK_LINE(518)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(518)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(518)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(518)
						ret;
					}
					HX_STACK_LINE(518)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(518)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(518)
		this->wrap_a2 = _Function_1_1::Block(this);
		HX_STACK_LINE(519)
		this->wrap_a2->zpp_inner->_inuse = true;
		HX_STACK_LINE(520)
		this->wrap_a2->zpp_inner->_validate = this->validate_a2_dyn();
		HX_STACK_LINE(521)
		this->wrap_a2->zpp_inner->_invalidate = this->invalidate_a2_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,setup_a2,(void))

Void ZPP_PulleyJoint_obj::invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::invalidate_a2","zpp_nape/constraint/PulleyJoint.hx",493);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(494)
		this->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("a2")));
		HX_STACK_LINE(495)
		{
			HX_STACK_LINE(496)
			this->a2localx = x->x;
			HX_STACK_LINE(497)
			this->a2localy = x->y;
			HX_STACK_LINE(506)
			{
			}
		}
		HX_STACK_LINE(515)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,invalidate_a2,(void))

Void ZPP_PulleyJoint_obj::validate_a2( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::validate_a2","zpp_nape/constraint/PulleyJoint.hx",471);
		HX_STACK_THIS(this);
		HX_STACK_LINE(473)
		this->wrap_a2->zpp_inner->x = this->a2localx;
		HX_STACK_LINE(474)
		this->wrap_a2->zpp_inner->y = this->a2localy;
		HX_STACK_LINE(483)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,validate_a2,(void))

Void ZPP_PulleyJoint_obj::setup_a1( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::setup_a1","zpp_nape/constraint/PulleyJoint.hx",459);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_PulleyJoint_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",460);
				{
					HX_STACK_LINE(460)
					Float x = __this->a1localx;		HX_STACK_VAR(x,"x");
					Float y = __this->a1localy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(460)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(460)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(460)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(460)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(460)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(460)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(460)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(460)
						ret->zpp_pool = null();
						HX_STACK_LINE(460)
						ret->zpp_disp = false;
						HX_STACK_LINE(460)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(460)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(460)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",460);
								{
									HX_STACK_LINE(460)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(460)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(460)
									{
										HX_STACK_LINE(460)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(460)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(460)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(460)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(460)
											ret1->next = null();
										}
										HX_STACK_LINE(460)
										ret1->weak = false;
									}
									HX_STACK_LINE(460)
									ret1->_immutable = immutable;
									HX_STACK_LINE(460)
									{
										HX_STACK_LINE(460)
										ret1->x = x;
										HX_STACK_LINE(460)
										ret1->y = y;
										HX_STACK_LINE(460)
										{
										}
									}
									HX_STACK_LINE(460)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(460)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(460)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(460)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(460)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(460)
						{
							HX_STACK_LINE(460)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(460)
							if ((_this->_immutable)){
								HX_STACK_LINE(460)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(460)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(460)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(460)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(460)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",460);
								{
									HX_STACK_LINE(460)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(460)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(460)
									{
										HX_STACK_LINE(460)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(460)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(460)
											_this->_validate();
										}
									}
									HX_STACK_LINE(460)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",460);
								{
									HX_STACK_LINE(460)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(460)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(460)
									{
										HX_STACK_LINE(460)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(460)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(460)
											_this->_validate();
										}
									}
									HX_STACK_LINE(460)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(460)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(460)
							{
								HX_STACK_LINE(460)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(460)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(460)
								{
								}
							}
							HX_STACK_LINE(460)
							{
								HX_STACK_LINE(460)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(460)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(460)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(460)
						ret;
					}
					HX_STACK_LINE(460)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(460)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(460)
		this->wrap_a1 = _Function_1_1::Block(this);
		HX_STACK_LINE(461)
		this->wrap_a1->zpp_inner->_inuse = true;
		HX_STACK_LINE(462)
		this->wrap_a1->zpp_inner->_validate = this->validate_a1_dyn();
		HX_STACK_LINE(463)
		this->wrap_a1->zpp_inner->_invalidate = this->invalidate_a1_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,setup_a1,(void))

Void ZPP_PulleyJoint_obj::invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::invalidate_a1","zpp_nape/constraint/PulleyJoint.hx",435);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(436)
		this->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("a1")));
		HX_STACK_LINE(437)
		{
			HX_STACK_LINE(438)
			this->a1localx = x->x;
			HX_STACK_LINE(439)
			this->a1localy = x->y;
			HX_STACK_LINE(448)
			{
			}
		}
		HX_STACK_LINE(457)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,invalidate_a1,(void))

Void ZPP_PulleyJoint_obj::validate_a1( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::validate_a1","zpp_nape/constraint/PulleyJoint.hx",413);
		HX_STACK_THIS(this);
		HX_STACK_LINE(415)
		this->wrap_a1->zpp_inner->x = this->a1localx;
		HX_STACK_LINE(416)
		this->wrap_a1->zpp_inner->y = this->a1localy;
		HX_STACK_LINE(425)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,validate_a1,(void))

Void ZPP_PulleyJoint_obj::inactiveBodies( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::inactiveBodies","zpp_nape/constraint/PulleyJoint.hx",394);
		HX_STACK_THIS(this);
		HX_STACK_LINE(395)
		if (((this->b1 != null()))){
			HX_STACK_LINE(396)
			this->b1->constraints->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(398)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(398)
			if (((this->b2 != null()))){
				HX_STACK_LINE(399)
				this->b2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(401)
		if (((bool((this->b3 != this->b1)) && bool((this->b3 != this->b2))))){
			HX_STACK_LINE(401)
			if (((this->b3 != null()))){
				HX_STACK_LINE(402)
				this->b3->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(404)
		if (((bool((bool((this->b4 != this->b1)) && bool((this->b4 != this->b2)))) && bool((this->b4 != this->b3))))){
			HX_STACK_LINE(404)
			if (((this->b4 != null()))){
				HX_STACK_LINE(405)
				this->b4->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_PulleyJoint_obj::activeBodies( ){
{
		HX_STACK_PUSH("ZPP_PulleyJoint::activeBodies","zpp_nape/constraint/PulleyJoint.hx",380);
		HX_STACK_THIS(this);
		HX_STACK_LINE(381)
		if (((this->b1 != null()))){
			HX_STACK_LINE(382)
			this->b1->constraints->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(384)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(384)
			if (((this->b2 != null()))){
				HX_STACK_LINE(385)
				this->b2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(387)
		if (((bool((this->b3 != this->b1)) && bool((this->b3 != this->b2))))){
			HX_STACK_LINE(387)
			if (((this->b3 != null()))){
				HX_STACK_LINE(388)
				this->b3->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(390)
		if (((bool((bool((this->b4 != this->b1)) && bool((this->b4 != this->b2)))) && bool((this->b4 != this->b3))))){
			HX_STACK_LINE(390)
			if (((this->b4 != null()))){
				HX_STACK_LINE(391)
				this->b4->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


::nape::geom::Vec3 ZPP_PulleyJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_PUSH("ZPP_PulleyJoint::bodyImpulse","zpp_nape/constraint/PulleyJoint.hx",353);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(353)
	if ((this->stepped)){
		HX_STACK_LINE(355)
		::nape::geom::Vec3 ret = ::nape::geom::Vec3_obj::get(null(),null(),null());		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(356)
		if (((b == this->b1))){
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(357)
				{
					HX_STACK_LINE(357)
					{
						HX_STACK_LINE(357)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(357)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(357)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(357)
							hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",357);
								{
									HX_STACK_LINE(357)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(357)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(357)
									{
										HX_STACK_LINE(357)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(357)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(357)
											_this->_validate();
										}
									}
									HX_STACK_LINE(357)
									return _g->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(357)
						_g->zpp_inner->x = (_Function_6_1::Block(_g) - (this->jAcc * this->n12x));
					}
					HX_STACK_LINE(357)
					{
						HX_STACK_LINE(357)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(357)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(357)
						{
							HX_STACK_LINE(357)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(357)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(357)
								_this->_validate();
							}
						}
						HX_STACK_LINE(357)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(358)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(358)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(358)
							hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",358);
								{
									HX_STACK_LINE(358)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(358)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(358)
									{
										HX_STACK_LINE(358)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(358)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(358)
											_this->_validate();
										}
									}
									HX_STACK_LINE(358)
									return _g->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(358)
						_g->zpp_inner->y = (_Function_6_1::Block(_g) - (this->jAcc * this->n12y));
					}
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(358)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(358)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(358)
								_this->_validate();
							}
						}
						HX_STACK_LINE(358)
						_g->zpp_inner->y;
					}
				}
			}
			HX_STACK_LINE(359)
			{
				HX_STACK_LINE(359)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(359)
				{
					HX_STACK_LINE(359)
					{
						HX_STACK_LINE(359)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(359)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(359)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(359)
							hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",359);
								{
									HX_STACK_LINE(359)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(359)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(359)
									{
										HX_STACK_LINE(359)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(359)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(359)
											_this->_validate();
										}
									}
									HX_STACK_LINE(359)
									return _g->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(359)
						_g->zpp_inner->z = (_Function_6_1::Block(_g) - (this->cx1 * this->jAcc));
					}
					HX_STACK_LINE(359)
					{
						HX_STACK_LINE(359)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(359)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(359)
						{
							HX_STACK_LINE(359)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(359)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(359)
								_this->_validate();
							}
						}
						HX_STACK_LINE(359)
						_g->zpp_inner->z;
					}
				}
			}
		}
		HX_STACK_LINE(361)
		if (((b == this->b2))){
			HX_STACK_LINE(362)
			{
				HX_STACK_LINE(362)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					{
						HX_STACK_LINE(362)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(362)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(362)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(362)
							hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",362);
								{
									HX_STACK_LINE(362)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(362)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(362)
									{
										HX_STACK_LINE(362)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(362)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(362)
											_this->_validate();
										}
									}
									HX_STACK_LINE(362)
									return _g->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(362)
						_g->zpp_inner->x = (_Function_6_1::Block(_g) + (this->jAcc * this->n12x));
					}
					HX_STACK_LINE(362)
					{
						HX_STACK_LINE(362)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(362)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(362)
						{
							HX_STACK_LINE(362)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(362)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(362)
								_this->_validate();
							}
						}
						HX_STACK_LINE(362)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(363)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(363)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(363)
							hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",363);
								{
									HX_STACK_LINE(363)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(363)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(363)
									{
										HX_STACK_LINE(363)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(363)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(363)
											_this->_validate();
										}
									}
									HX_STACK_LINE(363)
									return _g->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(363)
						_g->zpp_inner->y = (_Function_6_1::Block(_g) + (this->jAcc * this->n12y));
					}
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(363)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(363)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(363)
								_this->_validate();
							}
						}
						HX_STACK_LINE(363)
						_g->zpp_inner->y;
					}
				}
			}
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					{
						HX_STACK_LINE(364)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(364)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(364)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(364)
							hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",364);
								{
									HX_STACK_LINE(364)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(364)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(364)
									{
										HX_STACK_LINE(364)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(364)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(364)
											_this->_validate();
										}
									}
									HX_STACK_LINE(364)
									return _g->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(364)
						_g->zpp_inner->z = (_Function_6_1::Block(_g) + (this->cx2 * this->jAcc));
					}
					HX_STACK_LINE(364)
					{
						HX_STACK_LINE(364)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(364)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(364)
						{
							HX_STACK_LINE(364)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(364)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(364)
								_this->_validate();
							}
						}
						HX_STACK_LINE(364)
						_g->zpp_inner->z;
					}
				}
			}
		}
		HX_STACK_LINE(366)
		if (((b == this->b3))){
			HX_STACK_LINE(367)
			{
				HX_STACK_LINE(367)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(367)
				{
					HX_STACK_LINE(367)
					{
						HX_STACK_LINE(367)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(367)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(367)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(367)
							hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",367);
								{
									HX_STACK_LINE(367)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(367)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(367)
									{
										HX_STACK_LINE(367)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(367)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(367)
											_this->_validate();
										}
									}
									HX_STACK_LINE(367)
									return _g->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(367)
						_g->zpp_inner->x = (_Function_6_1::Block(_g) - (this->jAcc * this->n34x));
					}
					HX_STACK_LINE(367)
					{
						HX_STACK_LINE(367)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(367)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(367)
						{
							HX_STACK_LINE(367)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(367)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(367)
								_this->_validate();
							}
						}
						HX_STACK_LINE(367)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(368)
			{
				HX_STACK_LINE(368)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(368)
				{
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(368)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(368)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(368)
							hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",368);
								{
									HX_STACK_LINE(368)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(368)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(368)
									{
										HX_STACK_LINE(368)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(368)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(368)
											_this->_validate();
										}
									}
									HX_STACK_LINE(368)
									return _g->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(368)
						_g->zpp_inner->y = (_Function_6_1::Block(_g) - (this->jAcc * this->n34y));
					}
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(368)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(368)
								_this->_validate();
							}
						}
						HX_STACK_LINE(368)
						_g->zpp_inner->y;
					}
				}
			}
			HX_STACK_LINE(369)
			{
				HX_STACK_LINE(369)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(369)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(369)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(369)
							hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",369);
								{
									HX_STACK_LINE(369)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(369)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(369)
									{
										HX_STACK_LINE(369)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(369)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(369)
											_this->_validate();
										}
									}
									HX_STACK_LINE(369)
									return _g->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(369)
						_g->zpp_inner->z = (_Function_6_1::Block(_g) - (this->cx3 * this->jAcc));
					}
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(369)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(369)
						{
							HX_STACK_LINE(369)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(369)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(369)
								_this->_validate();
							}
						}
						HX_STACK_LINE(369)
						_g->zpp_inner->z;
					}
				}
			}
		}
		HX_STACK_LINE(371)
		if (((b == this->b4))){
			HX_STACK_LINE(372)
			{
				HX_STACK_LINE(372)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(372)
				{
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(372)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(372)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(372)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(372)
							hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",372);
								{
									HX_STACK_LINE(372)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(372)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(372)
									{
										HX_STACK_LINE(372)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(372)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(372)
											_this->_validate();
										}
									}
									HX_STACK_LINE(372)
									return _g->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(372)
						_g->zpp_inner->x = (_Function_6_1::Block(_g) + (this->jAcc * this->n34x));
					}
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(372)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(372)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(372)
						{
							HX_STACK_LINE(372)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(372)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(372)
								_this->_validate();
							}
						}
						HX_STACK_LINE(372)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(373)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(373)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(373)
							hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",373);
								{
									HX_STACK_LINE(373)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(373)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(373)
									{
										HX_STACK_LINE(373)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(373)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(373)
											_this->_validate();
										}
									}
									HX_STACK_LINE(373)
									return _g->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(373)
						_g->zpp_inner->y = (_Function_6_1::Block(_g) + (this->jAcc * this->n34y));
					}
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(373)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(373)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(373)
								_this->_validate();
							}
						}
						HX_STACK_LINE(373)
						_g->zpp_inner->y;
					}
				}
			}
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(374)
				{
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(374)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(374)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(374)
							hx::Throw (HX_CSTRING("Error: Vec3 is immutable"));
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PulleyJoint.hx",374);
								{
									HX_STACK_LINE(374)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(374)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(374)
									{
										HX_STACK_LINE(374)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(374)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(374)
											_this->_validate();
										}
									}
									HX_STACK_LINE(374)
									return _g->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(374)
						_g->zpp_inner->z = (_Function_6_1::Block(_g) + (this->cx4 * this->jAcc));
					}
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(374)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(374)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(374)
								_this->_validate();
							}
						}
						HX_STACK_LINE(374)
						_g->zpp_inner->z;
					}
				}
			}
		}
		HX_STACK_LINE(376)
		return ret;
	}
	else{
		HX_STACK_LINE(378)
		return ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	}
	HX_STACK_LINE(353)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,bodyImpulse,return )

bool ZPP_PulleyJoint_obj::is_slack( ){
	HX_STACK_PUSH("ZPP_PulleyJoint::is_slack","zpp_nape/constraint/PulleyJoint.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_LINE(184)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(186)
		this->a1relx = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(187)
		this->a1rely = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(190)
		this->a2relx = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(191)
		this->a2rely = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(194)
		this->a3relx = ((this->b3->axisy * this->a3localx) - (this->b3->axisx * this->a3localy));
		HX_STACK_LINE(195)
		this->a3rely = ((this->a3localx * this->b3->axisx) + (this->a3localy * this->b3->axisy));
	}
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(198)
		this->a4relx = ((this->b4->axisy * this->a4localx) - (this->b4->axisx * this->a4localy));
		HX_STACK_LINE(199)
		this->a4rely = ((this->a4localx * this->b4->axisx) + (this->a4localy * this->b4->axisy));
	}
	HX_STACK_LINE(201)
	Float n12x = 0.0;		HX_STACK_VAR(n12x,"n12x");
	HX_STACK_LINE(202)
	Float n12y = 0.0;		HX_STACK_VAR(n12y,"n12y");
	HX_STACK_LINE(203)
	Float n34x = 0.0;		HX_STACK_VAR(n34x,"n34x");
	HX_STACK_LINE(204)
	Float n34y = 0.0;		HX_STACK_VAR(n34y,"n34y");
	HX_STACK_LINE(205)
	{
		HX_STACK_LINE(206)
		Float t12x = 0.0;		HX_STACK_VAR(t12x,"t12x");
		HX_STACK_LINE(207)
		Float t12y = 0.0;		HX_STACK_VAR(t12y,"t12y");
		HX_STACK_LINE(208)
		Float t34x = 0.0;		HX_STACK_VAR(t34x,"t34x");
		HX_STACK_LINE(209)
		Float t34y = 0.0;		HX_STACK_VAR(t34y,"t34y");
		HX_STACK_LINE(210)
		t12x = ((this->b2->posx + this->a2relx) - ((this->b1->posx + this->a1relx)));
		HX_STACK_LINE(211)
		t12y = ((this->b2->posy + this->a2rely) - ((this->b1->posy + this->a1rely)));
		HX_STACK_LINE(212)
		t34x = ((this->b4->posx + this->a4relx) - ((this->b3->posx + this->a3relx)));
		HX_STACK_LINE(213)
		t34y = ((this->b4->posy + this->a4rely) - ((this->b3->posy + this->a3rely)));
		HX_STACK_LINE(214)
		Float C12 = ::Math_obj::sqrt(((t12x * t12x) + (t12y * t12y)));		HX_STACK_VAR(C12,"C12");
		HX_STACK_LINE(215)
		Float C34 = ::Math_obj::sqrt(((t34x * t34x) + (t34y * t34y)));		HX_STACK_VAR(C34,"C34");
		HX_STACK_LINE(216)
		if (((C12 != (int)0))){
			HX_STACK_LINE(218)
			Float t = (Float(1.0) / Float(C12));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(227)
			n12x = (t12x * t);
			HX_STACK_LINE(228)
			n12y = (t12y * t);
		}
		HX_STACK_LINE(231)
		if (((C34 != (int)0))){
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(233)
				Float t = (Float(1.0) / Float(C34));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(242)
				n34x = (t34x * t);
				HX_STACK_LINE(243)
				n34y = (t34y * t);
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(246)
				Float t = this->ratio;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(255)
				hx::MultEq(n34x,t);
				HX_STACK_LINE(256)
				hx::MultEq(n34y,t);
			}
		}
		else{
			HX_STACK_LINE(261)
			Float t = (Float(this->ratio) / Float(::Math_obj::sqrt(((n34x * n34x) + (n34y * n34y)))));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(270)
			hx::MultEq(n34x,t);
			HX_STACK_LINE(271)
			hx::MultEq(n34y,t);
		}
		HX_STACK_LINE(274)
		Float C = (C12 + (this->ratio * C34));		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(275)
		if ((this->equal)){
			HX_STACK_LINE(276)
			hx::SubEq(C,this->jointMax);
			HX_STACK_LINE(277)
			slack = false;
		}
		else{
			HX_STACK_LINE(279)
			if (((C < this->jointMin))){
				HX_STACK_LINE(281)
				C = (this->jointMin - C);
				HX_STACK_LINE(282)
				{
					HX_STACK_LINE(283)
					n12x = -(n12x);
					HX_STACK_LINE(284)
					n12y = -(n12y);
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(287)
					n34x = -(n34x);
					HX_STACK_LINE(288)
					n34y = -(n34y);
				}
				HX_STACK_LINE(290)
				slack = false;
			}
			else{
				HX_STACK_LINE(292)
				if (((C > this->jointMax))){
					HX_STACK_LINE(293)
					hx::SubEq(C,this->jointMax);
					HX_STACK_LINE(294)
					slack = false;
				}
				else{
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(298)
						n12x = (int)0;
						HX_STACK_LINE(299)
						n12y = (int)0;
						HX_STACK_LINE(308)
						{
						}
					}
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(318)
						n34x = (int)0;
						HX_STACK_LINE(319)
						n34y = (int)0;
						HX_STACK_LINE(328)
						{
						}
					}
					HX_STACK_LINE(337)
					C = (int)0;
					HX_STACK_LINE(338)
					slack = true;
				}
			}
		}
		HX_STACK_LINE(341)
		C;
	}
	HX_STACK_LINE(343)
	return slack;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,is_slack,return )


ZPP_PulleyJoint_obj::ZPP_PulleyJoint_obj()
{
}

void ZPP_PulleyJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PulleyJoint);
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(kMass,"kMass");
	HX_MARK_MEMBER_NAME(wrap_a4,"wrap_a4");
	HX_MARK_MEMBER_NAME(a4rely,"a4rely");
	HX_MARK_MEMBER_NAME(a4relx,"a4relx");
	HX_MARK_MEMBER_NAME(a4localy,"a4localy");
	HX_MARK_MEMBER_NAME(a4localx,"a4localx");
	HX_MARK_MEMBER_NAME(b4,"b4");
	HX_MARK_MEMBER_NAME(wrap_a3,"wrap_a3");
	HX_MARK_MEMBER_NAME(a3rely,"a3rely");
	HX_MARK_MEMBER_NAME(a3relx,"a3relx");
	HX_MARK_MEMBER_NAME(a3localy,"a3localy");
	HX_MARK_MEMBER_NAME(a3localx,"a3localx");
	HX_MARK_MEMBER_NAME(b3,"b3");
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
	HX_MARK_MEMBER_NAME(cx4,"cx4");
	HX_MARK_MEMBER_NAME(cx3,"cx3");
	HX_MARK_MEMBER_NAME(cx2,"cx2");
	HX_MARK_MEMBER_NAME(cx1,"cx1");
	HX_MARK_MEMBER_NAME(n34y,"n34y");
	HX_MARK_MEMBER_NAME(n34x,"n34x");
	HX_MARK_MEMBER_NAME(n12y,"n12y");
	HX_MARK_MEMBER_NAME(n12x,"n12x");
	HX_MARK_MEMBER_NAME(equal,"equal");
	HX_MARK_MEMBER_NAME(slack,"slack");
	HX_MARK_MEMBER_NAME(jointMax,"jointMax");
	HX_MARK_MEMBER_NAME(jointMin,"jointMin");
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_PulleyJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(kMass,"kMass");
	HX_VISIT_MEMBER_NAME(wrap_a4,"wrap_a4");
	HX_VISIT_MEMBER_NAME(a4rely,"a4rely");
	HX_VISIT_MEMBER_NAME(a4relx,"a4relx");
	HX_VISIT_MEMBER_NAME(a4localy,"a4localy");
	HX_VISIT_MEMBER_NAME(a4localx,"a4localx");
	HX_VISIT_MEMBER_NAME(b4,"b4");
	HX_VISIT_MEMBER_NAME(wrap_a3,"wrap_a3");
	HX_VISIT_MEMBER_NAME(a3rely,"a3rely");
	HX_VISIT_MEMBER_NAME(a3relx,"a3relx");
	HX_VISIT_MEMBER_NAME(a3localy,"a3localy");
	HX_VISIT_MEMBER_NAME(a3localx,"a3localx");
	HX_VISIT_MEMBER_NAME(b3,"b3");
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
	HX_VISIT_MEMBER_NAME(cx4,"cx4");
	HX_VISIT_MEMBER_NAME(cx3,"cx3");
	HX_VISIT_MEMBER_NAME(cx2,"cx2");
	HX_VISIT_MEMBER_NAME(cx1,"cx1");
	HX_VISIT_MEMBER_NAME(n34y,"n34y");
	HX_VISIT_MEMBER_NAME(n34x,"n34x");
	HX_VISIT_MEMBER_NAME(n12y,"n12y");
	HX_VISIT_MEMBER_NAME(n12x,"n12x");
	HX_VISIT_MEMBER_NAME(equal,"equal");
	HX_VISIT_MEMBER_NAME(slack,"slack");
	HX_VISIT_MEMBER_NAME(jointMax,"jointMax");
	HX_VISIT_MEMBER_NAME(jointMin,"jointMin");
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_PulleyJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b4") ) { return b4; }
		if (HX_FIELD_EQ(inName,"b3") ) { return b3; }
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx4") ) { return cx4; }
		if (HX_FIELD_EQ(inName,"cx3") ) { return cx3; }
		if (HX_FIELD_EQ(inName,"cx2") ) { return cx2; }
		if (HX_FIELD_EQ(inName,"cx1") ) { return cx1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"bias") ) { return bias; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		if (HX_FIELD_EQ(inName,"n34y") ) { return n34y; }
		if (HX_FIELD_EQ(inName,"n34x") ) { return n34x; }
		if (HX_FIELD_EQ(inName,"n12y") ) { return n12y; }
		if (HX_FIELD_EQ(inName,"n12x") ) { return n12x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		if (HX_FIELD_EQ(inName,"kMass") ) { return kMass; }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal; }
		if (HX_FIELD_EQ(inName,"slack") ) { return slack; }
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		if (HX_FIELD_EQ(inName,"a4rely") ) { return a4rely; }
		if (HX_FIELD_EQ(inName,"a4relx") ) { return a4relx; }
		if (HX_FIELD_EQ(inName,"a3rely") ) { return a3rely; }
		if (HX_FIELD_EQ(inName,"a3relx") ) { return a3relx; }
		if (HX_FIELD_EQ(inName,"a2rely") ) { return a2rely; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { return a2relx; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { return a1rely; }
		if (HX_FIELD_EQ(inName,"a1relx") ) { return a1relx; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		if (HX_FIELD_EQ(inName,"stepped") ) { return stepped; }
		if (HX_FIELD_EQ(inName,"wrap_a4") ) { return wrap_a4; }
		if (HX_FIELD_EQ(inName,"wrap_a3") ) { return wrap_a3; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { return wrap_a2; }
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { return wrap_a1; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"setup_a4") ) { return setup_a4_dyn(); }
		if (HX_FIELD_EQ(inName,"a4localy") ) { return a4localy; }
		if (HX_FIELD_EQ(inName,"a4localx") ) { return a4localx; }
		if (HX_FIELD_EQ(inName,"setup_a3") ) { return setup_a3_dyn(); }
		if (HX_FIELD_EQ(inName,"a3localy") ) { return a3localy; }
		if (HX_FIELD_EQ(inName,"a3localx") ) { return a3localx; }
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
		if (HX_FIELD_EQ(inName,"validate_a4") ) { return validate_a4_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a3") ) { return validate_a3_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a2") ) { return validate_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a1") ) { return validate_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidate_a4") ) { return invalidate_a4_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a3") ) { return invalidate_a3_dyn(); }
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

Dynamic ZPP_PulleyJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b4") ) { b4=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b3") ) { b3=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx4") ) { cx4=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx3") ) { cx3=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx2") ) { cx2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx1") ) { cx1=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n34y") ) { n34y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n34x") ) { n34x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n12y") ) { n12y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n12x") ) { n12x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMass") ) { kMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"equal") ) { equal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slack") ) { slack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"a4rely") ) { a4rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a4relx") ) { a4relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a3rely") ) { a3rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a3relx") ) { a3relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2rely") ) { a2rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { a2relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { a1rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1relx") ) { a1relx=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a4") ) { wrap_a4=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a3") ) { wrap_a3=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { wrap_a2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { wrap_a1=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"a4localy") ) { a4localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a4localx") ) { a4localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a3localy") ) { a3localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a3localx") ) { a3localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localy") ) { a2localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localx") ) { a2localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localy") ) { a1localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localx") ) { a1localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { jointMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { jointMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::PulleyJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_PulleyJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stepped"));
	outFields->push(HX_CSTRING("bias"));
	outFields->push(HX_CSTRING("gamma"));
	outFields->push(HX_CSTRING("jMax"));
	outFields->push(HX_CSTRING("jAcc"));
	outFields->push(HX_CSTRING("kMass"));
	outFields->push(HX_CSTRING("wrap_a4"));
	outFields->push(HX_CSTRING("a4rely"));
	outFields->push(HX_CSTRING("a4relx"));
	outFields->push(HX_CSTRING("a4localy"));
	outFields->push(HX_CSTRING("a4localx"));
	outFields->push(HX_CSTRING("b4"));
	outFields->push(HX_CSTRING("wrap_a3"));
	outFields->push(HX_CSTRING("a3rely"));
	outFields->push(HX_CSTRING("a3relx"));
	outFields->push(HX_CSTRING("a3localy"));
	outFields->push(HX_CSTRING("a3localx"));
	outFields->push(HX_CSTRING("b3"));
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
	outFields->push(HX_CSTRING("cx4"));
	outFields->push(HX_CSTRING("cx3"));
	outFields->push(HX_CSTRING("cx2"));
	outFields->push(HX_CSTRING("cx1"));
	outFields->push(HX_CSTRING("n34y"));
	outFields->push(HX_CSTRING("n34x"));
	outFields->push(HX_CSTRING("n12y"));
	outFields->push(HX_CSTRING("n12x"));
	outFields->push(HX_CSTRING("equal"));
	outFields->push(HX_CSTRING("slack"));
	outFields->push(HX_CSTRING("jointMax"));
	outFields->push(HX_CSTRING("jointMin"));
	outFields->push(HX_CSTRING("ratio"));
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
	HX_CSTRING("wrap_a4"),
	HX_CSTRING("setup_a4"),
	HX_CSTRING("invalidate_a4"),
	HX_CSTRING("validate_a4"),
	HX_CSTRING("a4rely"),
	HX_CSTRING("a4relx"),
	HX_CSTRING("a4localy"),
	HX_CSTRING("a4localx"),
	HX_CSTRING("b4"),
	HX_CSTRING("wrap_a3"),
	HX_CSTRING("setup_a3"),
	HX_CSTRING("invalidate_a3"),
	HX_CSTRING("validate_a3"),
	HX_CSTRING("a3rely"),
	HX_CSTRING("a3relx"),
	HX_CSTRING("a3localy"),
	HX_CSTRING("a3localx"),
	HX_CSTRING("b3"),
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
	HX_CSTRING("cx4"),
	HX_CSTRING("cx3"),
	HX_CSTRING("cx2"),
	HX_CSTRING("cx1"),
	HX_CSTRING("n34y"),
	HX_CSTRING("n34x"),
	HX_CSTRING("n12y"),
	HX_CSTRING("n12x"),
	HX_CSTRING("is_slack"),
	HX_CSTRING("equal"),
	HX_CSTRING("slack"),
	HX_CSTRING("jointMax"),
	HX_CSTRING("jointMin"),
	HX_CSTRING("ratio"),
	HX_CSTRING("outer_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_PulleyJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PulleyJoint_obj::__mClass,"__mClass");
};

Class ZPP_PulleyJoint_obj::__mClass;

void ZPP_PulleyJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_PulleyJoint"), hx::TCanCast< ZPP_PulleyJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_PulleyJoint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
