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
#ifndef INCLUDED_nape_constraint_PivotJoint
#include <nape/constraint/PivotJoint.h>
#endif
#ifndef INCLUDED_nape_constraint_WeldJoint
#include <nape/constraint/WeldJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PivotJoint
#include <zpp_nape/constraint/ZPP_PivotJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_WeldJoint
#include <zpp_nape/constraint/ZPP_WeldJoint.h>
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

Void ZPP_WeldJoint_obj::__construct()
{
HX_STACK_PUSH("ZPP_WeldJoint::new","zpp_nape/constraint/WeldJoint.hx",174);
{
	HX_STACK_LINE(330)
	this->stepped = false;
	HX_STACK_LINE(329)
	this->biasz = 0.0;
	HX_STACK_LINE(328)
	this->biasy = 0.0;
	HX_STACK_LINE(327)
	this->biasx = 0.0;
	HX_STACK_LINE(326)
	this->gamma = 0.0;
	HX_STACK_LINE(325)
	this->jMax = 0.0;
	HX_STACK_LINE(324)
	this->jAccz = 0.0;
	HX_STACK_LINE(323)
	this->jAccy = 0.0;
	HX_STACK_LINE(322)
	this->jAccx = 0.0;
	HX_STACK_LINE(321)
	this->kMassf = 0.0;
	HX_STACK_LINE(320)
	this->kMasse = 0.0;
	HX_STACK_LINE(319)
	this->kMassc = 0.0;
	HX_STACK_LINE(318)
	this->kMassd = 0.0;
	HX_STACK_LINE(317)
	this->kMassb = 0.0;
	HX_STACK_LINE(316)
	this->kMassa = 0.0;
	HX_STACK_LINE(315)
	this->phase = 0.0;
	HX_STACK_LINE(314)
	this->wrap_a2 = null();
	HX_STACK_LINE(261)
	this->a2rely = 0.0;
	HX_STACK_LINE(260)
	this->a2relx = 0.0;
	HX_STACK_LINE(259)
	this->a2localy = 0.0;
	HX_STACK_LINE(258)
	this->a2localx = 0.0;
	HX_STACK_LINE(257)
	this->b2 = null();
	HX_STACK_LINE(256)
	this->wrap_a1 = null();
	HX_STACK_LINE(203)
	this->a1rely = 0.0;
	HX_STACK_LINE(202)
	this->a1relx = 0.0;
	HX_STACK_LINE(201)
	this->a1localy = 0.0;
	HX_STACK_LINE(200)
	this->a1localx = 0.0;
	HX_STACK_LINE(199)
	this->b1 = null();
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(379)
	super::__construct();
	HX_STACK_LINE(380)
	this->phase = (int)0;
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(383)
			this->jAccx = (int)0;
			HX_STACK_LINE(384)
			this->jAccy = (int)0;
			HX_STACK_LINE(393)
			{
			}
		}
		HX_STACK_LINE(402)
		this->jAccz = (int)0;
	}
	HX_STACK_LINE(404)
	this->jMax = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(405)
	this->stepped = false;
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(408)
			this->a1localx = (int)0;
			HX_STACK_LINE(409)
			this->a1localy = (int)0;
			HX_STACK_LINE(418)
			{
			}
		}
		HX_STACK_LINE(427)
		{
			HX_STACK_LINE(428)
			this->a1relx = (int)0;
			HX_STACK_LINE(429)
			this->a1rely = (int)0;
			HX_STACK_LINE(438)
			{
			}
		}
	}
	HX_STACK_LINE(448)
	{
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(450)
			this->a2localx = (int)0;
			HX_STACK_LINE(451)
			this->a2localy = (int)0;
			HX_STACK_LINE(460)
			{
			}
		}
		HX_STACK_LINE(469)
		{
			HX_STACK_LINE(470)
			this->a2relx = (int)0;
			HX_STACK_LINE(471)
			this->a2rely = (int)0;
			HX_STACK_LINE(480)
			{
			}
		}
	}
}
;
	return null();
}

ZPP_WeldJoint_obj::~ZPP_WeldJoint_obj() { }

Dynamic ZPP_WeldJoint_obj::__CreateEmpty() { return  new ZPP_WeldJoint_obj; }
hx::ObjectPtr< ZPP_WeldJoint_obj > ZPP_WeldJoint_obj::__new()
{  hx::ObjectPtr< ZPP_WeldJoint_obj > result = new ZPP_WeldJoint_obj();
	result->__construct();
	return result;}

Dynamic ZPP_WeldJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_WeldJoint_obj > result = new ZPP_WeldJoint_obj();
	result->__construct();
	return result;}

Void ZPP_WeldJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_PUSH("ZPP_WeldJoint::draw","zpp_nape/constraint/WeldJoint.hx",1531);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
	}
return null();
}


bool ZPP_WeldJoint_obj::applyImpulsePos( ){
	HX_STACK_PUSH("ZPP_WeldJoint::applyImpulsePos","zpp_nape/constraint/WeldJoint.hx",1143);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1144)
	Float r1x = 0.0;		HX_STACK_VAR(r1x,"r1x");
	HX_STACK_LINE(1145)
	Float r1y = 0.0;		HX_STACK_VAR(r1y,"r1y");
	HX_STACK_LINE(1146)
	{
		HX_STACK_LINE(1148)
		r1x = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(1149)
		r1y = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(1152)
	Float r2x = 0.0;		HX_STACK_VAR(r2x,"r2x");
	HX_STACK_LINE(1153)
	Float r2y = 0.0;		HX_STACK_VAR(r2y,"r2y");
	HX_STACK_LINE(1154)
	{
		HX_STACK_LINE(1156)
		r2x = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(1157)
		r2y = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(1160)
	Float Ex = 0.0;		HX_STACK_VAR(Ex,"Ex");
	HX_STACK_LINE(1161)
	Float Ey = 0.0;		HX_STACK_VAR(Ey,"Ey");
	HX_STACK_LINE(1162)
	Float Ez = 0.0;		HX_STACK_VAR(Ez,"Ez");
	HX_STACK_LINE(1163)
	{
		HX_STACK_LINE(1164)
		Ex = ((this->b2->posx + r2x) - ((this->b1->posx + r1x)));
		HX_STACK_LINE(1165)
		Ey = ((this->b2->posy + r2y) - ((this->b1->posy + r1y)));
		HX_STACK_LINE(1166)
		Ez = ((this->b2->rot - this->b1->rot) - this->phase);
	}
	HX_STACK_LINE(1168)
	Float Jx = 0.0;		HX_STACK_VAR(Jx,"Jx");
	HX_STACK_LINE(1169)
	Float Jy = 0.0;		HX_STACK_VAR(Jy,"Jy");
	HX_STACK_LINE(1170)
	Float Jz = 0.0;		HX_STACK_VAR(Jz,"Jz");
	HX_STACK_LINE(1171)
	if (((bool(this->breakUnderError) && bool(((((Ex * Ex) + (Ey * Ey)) + (Ez * Ez)) > (this->maxError * this->maxError)))))){
		HX_STACK_LINE(1171)
		return true;
	}
	HX_STACK_LINE(1172)
	bool cont = true;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(1173)
	if (((((Ex * Ex) + (Ey * Ey)) < (::nape::Config_obj::constraintLinearSlop * ::nape::Config_obj::constraintLinearSlop)))){
		HX_STACK_LINE(1174)
		cont = false;
		HX_STACK_LINE(1175)
		{
			HX_STACK_LINE(1176)
			Ex = (int)0;
			HX_STACK_LINE(1177)
			Ey = (int)0;
			HX_STACK_LINE(1186)
			{
			}
		}
	}
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",1196);
			{
				HX_STACK_LINE(1196)
				Float x = ::nape::Config_obj::constraintAngularSlop;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1196)
				return (x * x);
			}
			return null();
		}
	};
	HX_STACK_LINE(1196)
	if ((((Ez * Ez) < _Function_1_1::Block()))){
		HX_STACK_LINE(1196)
		if ((!(cont))){
			HX_STACK_LINE(1197)
			return false;
		}
		else{
			HX_STACK_LINE(1198)
			Ez = (int)0;
		}
	}
	HX_STACK_LINE(1200)
	{
		HX_STACK_LINE(1201)
		Float t = 0.5;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1202)
		{
			HX_STACK_LINE(1203)
			Float t1 = t;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(1212)
			hx::MultEq(Ex,t1);
			HX_STACK_LINE(1213)
			hx::MultEq(Ey,t1);
		}
		HX_STACK_LINE(1215)
		hx::MultEq(Ez,t);
	}
	HX_STACK_LINE(1217)
	if (((((Ex * Ex) + (Ey * Ey)) > (int)6))){
		HX_STACK_LINE(1218)
		Float k = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(1219)
		if (((k > ::nape::Config_obj::epsilon))){
			HX_STACK_LINE(1220)
			k = (Float(0.75) / Float(k));
			HX_STACK_LINE(1221)
			{
				HX_STACK_LINE(1222)
				Jx = (-(Ex) * k);
				HX_STACK_LINE(1223)
				Jy = (-(Ey) * k);
				HX_STACK_LINE(1232)
				{
				}
			}
			HX_STACK_LINE(1241)
			{
				HX_STACK_LINE(1242)
				int t = (int)20;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1251)
				Float ls = ((Jx * Jx) + (Jy * Jy));		HX_STACK_VAR(ls,"ls");
				HX_STACK_LINE(1252)
				if (((ls > (t * t)))){
					HX_STACK_LINE(1262)
					Float t1 = (t * ((Float(1.0) / Float(::Math_obj::sqrt(ls)))));		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(1271)
					hx::MultEq(Jx,t1);
					HX_STACK_LINE(1272)
					hx::MultEq(Jy,t1);
				}
			}
			HX_STACK_LINE(1276)
			{
				HX_STACK_LINE(1277)
				Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1286)
				hx::SubEq(this->b1->posx,(Jx * t));
				HX_STACK_LINE(1287)
				hx::SubEq(this->b1->posy,(Jy * t));
			}
			HX_STACK_LINE(1289)
			{
				HX_STACK_LINE(1290)
				Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1299)
				hx::AddEq(this->b2->posx,(Jx * t));
				HX_STACK_LINE(1300)
				hx::AddEq(this->b2->posy,(Jy * t));
			}
			HX_STACK_LINE(1302)
			{
				HX_STACK_LINE(1303)
				Ex = ((this->b2->posx + r2x) - ((this->b1->posx + r1x)));
				HX_STACK_LINE(1304)
				Ey = ((this->b2->posy + r2y) - ((this->b1->posy + r1y)));
				HX_STACK_LINE(1305)
				Ez = ((this->b2->rot - this->b1->rot) - this->phase);
			}
			HX_STACK_LINE(1307)
			{
				HX_STACK_LINE(1308)
				Float t = 0.5;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1309)
				{
					HX_STACK_LINE(1310)
					Float t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(1319)
					hx::MultEq(Ex,t1);
					HX_STACK_LINE(1320)
					hx::MultEq(Ey,t1);
				}
				HX_STACK_LINE(1322)
				hx::MultEq(Ez,t);
			}
		}
	}
	HX_STACK_LINE(1326)
	Float Ka = 0.0;		HX_STACK_VAR(Ka,"Ka");
	HX_STACK_LINE(1327)
	Float Kb = 0.0;		HX_STACK_VAR(Kb,"Kb");
	HX_STACK_LINE(1328)
	Float Kd = 0.0;		HX_STACK_VAR(Kd,"Kd");
	HX_STACK_LINE(1329)
	Float Kc = 0.0;		HX_STACK_VAR(Kc,"Kc");
	HX_STACK_LINE(1330)
	Float Ke = 0.0;		HX_STACK_VAR(Ke,"Ke");
	HX_STACK_LINE(1331)
	Float Kf = 0.0;		HX_STACK_VAR(Kf,"Kf");
	HX_STACK_LINE(1332)
	{
		HX_STACK_LINE(1333)
		Float m = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(1334)
		{
			HX_STACK_LINE(1335)
			Ka = m;
			HX_STACK_LINE(1336)
			Kb = (int)0;
			HX_STACK_LINE(1337)
			Kd = m;
			HX_STACK_LINE(1338)
			Kc = (int)0;
			HX_STACK_LINE(1339)
			Ke = (int)0;
			HX_STACK_LINE(1340)
			Kf = (int)0;
		}
		HX_STACK_LINE(1342)
		if (((this->b1->sinertia != (int)0))){
			HX_STACK_LINE(1343)
			Float X = (r1x * this->b1->sinertia);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1344)
			Float Y = (r1y * this->b1->sinertia);		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1345)
			{
				HX_STACK_LINE(1346)
				hx::AddEq(Ka,(Y * r1y));
				HX_STACK_LINE(1347)
				hx::AddEq(Kb,(-(Y) * r1x));
				HX_STACK_LINE(1348)
				hx::AddEq(Kd,(X * r1x));
				HX_STACK_LINE(1349)
				hx::AddEq(Kc,-(Y));
				HX_STACK_LINE(1350)
				hx::AddEq(Ke,X);
				HX_STACK_LINE(1351)
				hx::AddEq(Kf,this->b1->sinertia);
			}
		}
		HX_STACK_LINE(1354)
		if (((this->b2->sinertia != (int)0))){
			HX_STACK_LINE(1355)
			Float X = (r2x * this->b2->sinertia);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1356)
			Float Y = (r2y * this->b2->sinertia);		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1357)
			{
				HX_STACK_LINE(1358)
				hx::AddEq(Ka,(Y * r2y));
				HX_STACK_LINE(1359)
				hx::AddEq(Kb,(-(Y) * r2x));
				HX_STACK_LINE(1360)
				hx::AddEq(Kd,(X * r2x));
				HX_STACK_LINE(1361)
				hx::AddEq(Kc,-(Y));
				HX_STACK_LINE(1362)
				hx::AddEq(Ke,X);
				HX_STACK_LINE(1363)
				hx::AddEq(Kf,this->b2->sinertia);
			}
		}
	}
	HX_STACK_LINE(1367)
	{
		HX_STACK_LINE(1368)
		{
			HX_STACK_LINE(1369)
			Jx = -(Ex);
			HX_STACK_LINE(1370)
			Jy = -(Ey);
			HX_STACK_LINE(1379)
			{
			}
		}
		HX_STACK_LINE(1388)
		Jz = -(Ez);
	}
	HX_STACK_LINE(1390)
	{
		HX_STACK_LINE(1391)
		int t = (int)6;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1400)
		Float ls = ((Jx * Jx) + (Jy * Jy));		HX_STACK_VAR(ls,"ls");
		HX_STACK_LINE(1401)
		if (((ls > (t * t)))){
			HX_STACK_LINE(1411)
			Float t1 = (t * ((Float(1.0) / Float(::Math_obj::sqrt(ls)))));		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(1420)
			hx::MultEq(Jx,t1);
			HX_STACK_LINE(1421)
			hx::MultEq(Jy,t1);
		}
	}
	HX_STACK_LINE(1425)
	{
		HX_STACK_LINE(1425)
		Float a = -0.25;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1425)
		if (((Jz < a))){
			HX_STACK_LINE(1425)
			a;
		}
		else{
			HX_STACK_LINE(1425)
			if (((Jz > 0.25))){
				HX_STACK_LINE(1425)
				0.25;
			}
			else{
				HX_STACK_LINE(1425)
				Jz;
			}
		}
	}
	HX_STACK_LINE(1426)
	{
		HX_STACK_LINE(1427)
		Float det = (((Ka * (((Kd * Kf) - (Ke * Ke)))) + (Kb * (((Kc * Ke) - (Kb * Kf))))) + (Kc * (((Kb * Ke) - (Kc * Kd)))));		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(1428)
		if (((det != det))){
			HX_STACK_LINE(1428)
			Jx = Jy = Jz = (int)0;
		}
		else{
			HX_STACK_LINE(1429)
			if (((det == (int)0))){
				HX_STACK_LINE(1430)
				if (((Ka != (int)0))){
					HX_STACK_LINE(1430)
					hx::DivEq(Jx,Ka);
				}
				else{
					HX_STACK_LINE(1431)
					Jx = (int)0;
				}
				HX_STACK_LINE(1432)
				if (((Kd != (int)0))){
					HX_STACK_LINE(1432)
					hx::DivEq(Jy,Kd);
				}
				else{
					HX_STACK_LINE(1433)
					Jy = (int)0;
				}
				HX_STACK_LINE(1434)
				if (((Kf != (int)0))){
					HX_STACK_LINE(1434)
					hx::DivEq(Jz,Kf);
				}
				else{
					HX_STACK_LINE(1435)
					Jz = (int)0;
				}
			}
			else{
				HX_STACK_LINE(1438)
				det = (Float((int)1) / Float(det));
				HX_STACK_LINE(1439)
				Float B = ((Ke * Kc) - (Kb * Kf));		HX_STACK_VAR(B,"B");
				HX_STACK_LINE(1440)
				Float C = ((Kb * Ke) - (Kc * Kd));		HX_STACK_VAR(C,"C");
				HX_STACK_LINE(1441)
				Float E = ((Kb * Kc) - (Ka * Ke));		HX_STACK_VAR(E,"E");
				HX_STACK_LINE(1442)
				Float X = (det * ((((Jx * (((Kd * Kf) - (Ke * Ke)))) + (Jy * B)) + (Jz * C))));		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(1443)
				Float Y = (det * ((((Jx * B) + (Jy * (((Ka * Kf) - (Kc * Kc))))) + (Jz * E))));		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(1444)
				Jz = (det * ((((Jx * C) + (Jy * E)) + (Jz * (((Ka * Kd) - (Kb * Kb)))))));
				HX_STACK_LINE(1445)
				{
					HX_STACK_LINE(1446)
					Jx = X;
					HX_STACK_LINE(1447)
					Jy = Y;
					HX_STACK_LINE(1456)
					{
					}
				}
			}
		}
	}
	HX_STACK_LINE(1467)
	{
		HX_STACK_LINE(1469)
		{
			HX_STACK_LINE(1470)
			Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1479)
			hx::SubEq(this->b1->posx,(Jx * t));
			HX_STACK_LINE(1480)
			hx::SubEq(this->b1->posy,(Jy * t));
		}
		HX_STACK_LINE(1482)
		{
			HX_STACK_LINE(1483)
			Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1492)
			hx::AddEq(this->b2->posx,(Jx * t));
			HX_STACK_LINE(1493)
			hx::AddEq(this->b2->posy,(Jy * t));
		}
		HX_STACK_LINE(1495)
		{
			HX_STACK_LINE(1495)
			::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
			Float dr = (-(((((Jy * r1x) - (Jx * r1y)) + Jz))) * this->b1->iinertia);		HX_STACK_VAR(dr,"dr");
			HX_STACK_LINE(1495)
			hx::AddEq(_this->rot,dr);
			HX_STACK_LINE(1495)
			if ((((dr * dr) > 0.0001))){
				HX_STACK_LINE(1495)
				_this->axisx = ::Math_obj::sin(_this->rot);
				HX_STACK_LINE(1495)
				_this->axisy = ::Math_obj::cos(_this->rot);
				HX_STACK_LINE(1495)
				Dynamic();
			}
			else{
				HX_STACK_LINE(1495)
				Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
				HX_STACK_LINE(1495)
				Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1495)
				Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1495)
				Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(1495)
				_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
				HX_STACK_LINE(1495)
				_this->axisx = nx;
			}
		}
		HX_STACK_LINE(1496)
		{
			HX_STACK_LINE(1496)
			::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
			Float dr = (((((Jy * r2x) - (Jx * r2y)) + Jz)) * this->b2->iinertia);		HX_STACK_VAR(dr,"dr");
			HX_STACK_LINE(1496)
			hx::AddEq(_this->rot,dr);
			HX_STACK_LINE(1496)
			if ((((dr * dr) > 0.0001))){
				HX_STACK_LINE(1496)
				_this->axisx = ::Math_obj::sin(_this->rot);
				HX_STACK_LINE(1496)
				_this->axisy = ::Math_obj::cos(_this->rot);
				HX_STACK_LINE(1496)
				Dynamic();
			}
			else{
				HX_STACK_LINE(1496)
				Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
				HX_STACK_LINE(1496)
				Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1496)
				Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1496)
				Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(1496)
				_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
				HX_STACK_LINE(1496)
				_this->axisx = nx;
			}
		}
	}
	HX_STACK_LINE(1529)
	return false;
}


bool ZPP_WeldJoint_obj::applyImpulseVel( ){
	HX_STACK_PUSH("ZPP_WeldJoint::applyImpulseVel","zpp_nape/constraint/WeldJoint.hx",922);
	HX_STACK_THIS(this);
	HX_STACK_LINE(923)
	Float Ex = 0.0;		HX_STACK_VAR(Ex,"Ex");
	HX_STACK_LINE(924)
	Float Ey = 0.0;		HX_STACK_VAR(Ey,"Ey");
	HX_STACK_LINE(925)
	Float Ez = 0.0;		HX_STACK_VAR(Ez,"Ez");
	HX_STACK_LINE(926)
	{
		HX_STACK_LINE(927)
		Ex = (((this->b2->velx + this->b2->kinvelx) - (this->a2rely * ((this->b2->angvel + this->b2->kinangvel)))) - (((this->b1->velx + this->b1->kinvelx) - (this->a1rely * ((this->b1->angvel + this->b1->kinangvel))))));
		HX_STACK_LINE(928)
		Ey = (((this->b2->vely + this->b2->kinvely) + (this->a2relx * ((this->b2->angvel + this->b2->kinangvel)))) - (((this->b1->vely + this->b1->kinvely) + (this->a1relx * ((this->b1->angvel + this->b1->kinangvel))))));
		HX_STACK_LINE(929)
		Ez = (((this->b2->angvel + this->b2->kinangvel) - this->b1->angvel) - this->b1->kinangvel);
	}
	HX_STACK_LINE(931)
	Float Jx = 0.0;		HX_STACK_VAR(Jx,"Jx");
	HX_STACK_LINE(932)
	Float Jy = 0.0;		HX_STACK_VAR(Jy,"Jy");
	HX_STACK_LINE(933)
	Float Jz = 0.0;		HX_STACK_VAR(Jz,"Jz");
	HX_STACK_LINE(934)
	{
		HX_STACK_LINE(935)
		{
			HX_STACK_LINE(936)
			Jx = (this->biasx - Ex);
			HX_STACK_LINE(937)
			Jy = (this->biasy - Ey);
		}
		HX_STACK_LINE(939)
		Jz = (this->biasz - Ez);
	}
	HX_STACK_LINE(941)
	{
		HX_STACK_LINE(942)
		Float X = (((this->kMassa * Jx) + (this->kMassb * Jy)) + (this->kMassc * Jz));		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(943)
		Float Y = (((this->kMassb * Jx) + (this->kMassd * Jy)) + (this->kMasse * Jz));		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(944)
		Jz = (((this->kMassc * Jx) + (this->kMasse * Jy)) + (this->kMassf * Jz));
		HX_STACK_LINE(945)
		{
			HX_STACK_LINE(946)
			Jx = X;
			HX_STACK_LINE(947)
			Jy = Y;
			HX_STACK_LINE(956)
			{
			}
		}
	}
	HX_STACK_LINE(966)
	{
		HX_STACK_LINE(967)
		Float t = this->gamma;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(968)
		{
			HX_STACK_LINE(969)
			Float t1 = t;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(978)
			hx::SubEq(Jx,(this->jAccx * t1));
			HX_STACK_LINE(979)
			hx::SubEq(Jy,(this->jAccy * t1));
		}
		HX_STACK_LINE(981)
		hx::SubEq(Jz,(this->jAccz * t));
	}
	HX_STACK_LINE(983)
	{
		HX_STACK_LINE(984)
		Float jOldx = 0.0;		HX_STACK_VAR(jOldx,"jOldx");
		HX_STACK_LINE(985)
		Float jOldy = 0.0;		HX_STACK_VAR(jOldy,"jOldy");
		HX_STACK_LINE(986)
		Float jOldz = 0.0;		HX_STACK_VAR(jOldz,"jOldz");
		HX_STACK_LINE(987)
		{
			HX_STACK_LINE(988)
			{
				HX_STACK_LINE(989)
				jOldx = this->jAccx;
				HX_STACK_LINE(990)
				jOldy = this->jAccy;
				HX_STACK_LINE(999)
				{
				}
			}
			HX_STACK_LINE(1008)
			jOldz = this->jAccz;
		}
		HX_STACK_LINE(1010)
		{
			HX_STACK_LINE(1011)
			int t = (int)1;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1012)
			{
				HX_STACK_LINE(1013)
				int t1 = t;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(1022)
				hx::AddEq(this->jAccx,(Jx * t1));
				HX_STACK_LINE(1023)
				hx::AddEq(this->jAccy,(Jy * t1));
			}
			HX_STACK_LINE(1025)
			hx::AddEq(this->jAccz,(Jz * t));
		}
		HX_STACK_LINE(1027)
		if ((this->breakUnderForce)){
			HX_STACK_LINE(1028)
			if ((((((this->jAccx * this->jAccx) + (this->jAccy * this->jAccy)) + (this->jAccz * this->jAccz)) > (this->jMax * this->jMax)))){
				HX_STACK_LINE(1029)
				return true;
			}
		}
		else{
			HX_STACK_LINE(1031)
			if ((!(this->stiff))){
				HX_STACK_LINE(1032)
				Float t = this->jMax;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1041)
				Float ls = (((this->jAccx * this->jAccx) + (this->jAccy * this->jAccy)) + (this->jAccz * this->jAccz));		HX_STACK_VAR(ls,"ls");
				HX_STACK_LINE(1042)
				if (((ls > (t * t)))){
					HX_STACK_LINE(1052)
					Float t1 = (t * ((Float(1.0) / Float(::Math_obj::sqrt(ls)))));		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(1053)
					{
						HX_STACK_LINE(1054)
						Float t2 = t1;		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(1063)
						hx::MultEq(this->jAccx,t2);
						HX_STACK_LINE(1064)
						hx::MultEq(this->jAccy,t2);
					}
					HX_STACK_LINE(1066)
					hx::MultEq(this->jAccz,t1);
				}
			}
		}
		HX_STACK_LINE(1071)
		{
			HX_STACK_LINE(1072)
			{
				HX_STACK_LINE(1073)
				Jx = (this->jAccx - jOldx);
				HX_STACK_LINE(1074)
				Jy = (this->jAccy - jOldy);
			}
			HX_STACK_LINE(1076)
			Jz = (this->jAccz - jOldz);
		}
	}
	HX_STACK_LINE(1079)
	{
		HX_STACK_LINE(1111)
		{
			HX_STACK_LINE(1112)
			Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1121)
			hx::SubEq(this->b1->velx,(Jx * t));
			HX_STACK_LINE(1122)
			hx::SubEq(this->b1->vely,(Jy * t));
		}
		HX_STACK_LINE(1124)
		{
			HX_STACK_LINE(1125)
			Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1134)
			hx::AddEq(this->b2->velx,(Jx * t));
			HX_STACK_LINE(1135)
			hx::AddEq(this->b2->vely,(Jy * t));
		}
		HX_STACK_LINE(1137)
		hx::SubEq(this->b1->angvel,(((((Jy * this->a1relx) - (Jx * this->a1rely)) + Jz)) * this->b1->iinertia));
		HX_STACK_LINE(1138)
		hx::AddEq(this->b2->angvel,(((((Jy * this->a2relx) - (Jx * this->a2rely)) + Jz)) * this->b2->iinertia));
	}
	HX_STACK_LINE(1141)
	return false;
}


Void ZPP_WeldJoint_obj::warmStart( ){
{
		HX_STACK_PUSH("ZPP_WeldJoint::warmStart","zpp_nape/constraint/WeldJoint.hx",858);
		HX_STACK_THIS(this);
		HX_STACK_LINE(891)
		{
			HX_STACK_LINE(892)
			Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(901)
			hx::SubEq(this->b1->velx,(this->jAccx * t));
			HX_STACK_LINE(902)
			hx::SubEq(this->b1->vely,(this->jAccy * t));
		}
		HX_STACK_LINE(904)
		{
			HX_STACK_LINE(905)
			Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(914)
			hx::AddEq(this->b2->velx,(this->jAccx * t));
			HX_STACK_LINE(915)
			hx::AddEq(this->b2->vely,(this->jAccy * t));
		}
		HX_STACK_LINE(917)
		hx::SubEq(this->b1->angvel,(((((this->jAccy * this->a1relx) - (this->jAccx * this->a1rely)) + this->jAccz)) * this->b1->iinertia));
		HX_STACK_LINE(918)
		hx::AddEq(this->b2->angvel,(((((this->jAccy * this->a2relx) - (this->jAccx * this->a2rely)) + this->jAccz)) * this->b2->iinertia));
	}
return null();
}


bool ZPP_WeldJoint_obj::preStep( Float dt){
	HX_STACK_PUSH("ZPP_WeldJoint::preStep","zpp_nape/constraint/WeldJoint.hx",628);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dt,"dt");
	HX_STACK_LINE(629)
	if (((this->pre_dt == -1.0))){
		HX_STACK_LINE(629)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(630)
	Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(631)
	this->pre_dt = dt;
	HX_STACK_LINE(632)
	this->stepped = true;
	HX_STACK_LINE(633)
	{
		HX_STACK_LINE(634)
		this->a1relx = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(635)
		this->a1rely = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(637)
	{
		HX_STACK_LINE(638)
		this->a2relx = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(639)
		this->a2rely = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(641)
	{
		HX_STACK_LINE(642)
		Float m = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(643)
		{
			HX_STACK_LINE(644)
			this->kMassa = m;
			HX_STACK_LINE(645)
			this->kMassb = (int)0;
			HX_STACK_LINE(646)
			this->kMassd = m;
			HX_STACK_LINE(647)
			this->kMassc = (int)0;
			HX_STACK_LINE(648)
			this->kMasse = (int)0;
			HX_STACK_LINE(649)
			this->kMassf = (int)0;
		}
		HX_STACK_LINE(651)
		if (((this->b1->sinertia != (int)0))){
			HX_STACK_LINE(652)
			Float X = (this->a1relx * this->b1->sinertia);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(653)
			Float Y = (this->a1rely * this->b1->sinertia);		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(654)
			{
				HX_STACK_LINE(655)
				hx::AddEq(this->kMassa,(Y * this->a1rely));
				HX_STACK_LINE(656)
				hx::AddEq(this->kMassb,(-(Y) * this->a1relx));
				HX_STACK_LINE(657)
				hx::AddEq(this->kMassd,(X * this->a1relx));
				HX_STACK_LINE(658)
				hx::AddEq(this->kMassc,-(Y));
				HX_STACK_LINE(659)
				hx::AddEq(this->kMasse,X);
				HX_STACK_LINE(660)
				hx::AddEq(this->kMassf,this->b1->sinertia);
			}
		}
		HX_STACK_LINE(663)
		if (((this->b2->sinertia != (int)0))){
			HX_STACK_LINE(664)
			Float X = (this->a2relx * this->b2->sinertia);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(665)
			Float Y = (this->a2rely * this->b2->sinertia);		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(666)
			{
				HX_STACK_LINE(667)
				hx::AddEq(this->kMassa,(Y * this->a2rely));
				HX_STACK_LINE(668)
				hx::AddEq(this->kMassb,(-(Y) * this->a2relx));
				HX_STACK_LINE(669)
				hx::AddEq(this->kMassd,(X * this->a2relx));
				HX_STACK_LINE(670)
				hx::AddEq(this->kMassc,-(Y));
				HX_STACK_LINE(671)
				hx::AddEq(this->kMasse,X);
				HX_STACK_LINE(672)
				hx::AddEq(this->kMassf,this->b2->sinertia);
			}
		}
	}
	struct _Function_1_1{
		inline static int Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",676);
			{
				HX_STACK_LINE(677)
				Float det = (((__this->kMassa * (((__this->kMassd * __this->kMassf) - (__this->kMasse * __this->kMasse)))) + (__this->kMassb * (((__this->kMassc * __this->kMasse) - (__this->kMassb * __this->kMassf))))) + (__this->kMassc * (((__this->kMassb * __this->kMasse) - (__this->kMassc * __this->kMassd)))));		HX_STACK_VAR(det,"det");
				struct _Function_2_1{
					inline static int Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",678);
						{
							HX_STACK_LINE(679)
							{
								HX_STACK_LINE(680)
								__this->kMassa = (int)0;
								HX_STACK_LINE(681)
								__this->kMassb = (int)0;
								HX_STACK_LINE(682)
								__this->kMassd = (int)0;
								HX_STACK_LINE(683)
								__this->kMassc = (int)0;
								HX_STACK_LINE(684)
								__this->kMasse = (int)0;
								HX_STACK_LINE(685)
								__this->kMassf = (int)0;
							}
							HX_STACK_LINE(687)
							return (int)7;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static int Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",689);
						{
							HX_STACK_LINE(690)
							int flag = (int)0;		HX_STACK_VAR(flag,"flag");
							HX_STACK_LINE(691)
							if (((__this->kMassa != (int)0))){
								HX_STACK_LINE(691)
								__this->kMassa = (Float((int)1) / Float(__this->kMassa));
							}
							else{
								HX_STACK_LINE(693)
								__this->kMassa = (int)0;
								HX_STACK_LINE(694)
								hx::OrEq(flag,(int)1);
							}
							HX_STACK_LINE(696)
							if (((__this->kMassd != (int)0))){
								HX_STACK_LINE(696)
								__this->kMassd = (Float((int)1) / Float(__this->kMassd));
							}
							else{
								HX_STACK_LINE(698)
								__this->kMassd = (int)0;
								HX_STACK_LINE(699)
								hx::OrEq(flag,(int)2);
							}
							HX_STACK_LINE(701)
							if (((__this->kMassf != (int)0))){
								HX_STACK_LINE(701)
								__this->kMassf = (Float((int)1) / Float(__this->kMassf));
							}
							else{
								HX_STACK_LINE(703)
								__this->kMassf = (int)0;
								HX_STACK_LINE(704)
								hx::OrEq(flag,(int)4);
							}
							HX_STACK_LINE(706)
							__this->kMassb = __this->kMassc = __this->kMasse = 0.0;
							HX_STACK_LINE(707)
							return flag;
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static int Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this,Float &det){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",709);
						{
							HX_STACK_LINE(710)
							det = (Float((int)1) / Float(det));
							HX_STACK_LINE(711)
							Float A = (det * (((__this->kMassd * __this->kMassf) - (__this->kMasse * __this->kMasse))));		HX_STACK_VAR(A,"A");
							HX_STACK_LINE(712)
							Float B = (det * (((__this->kMasse * __this->kMassc) - (__this->kMassb * __this->kMassf))));		HX_STACK_VAR(B,"B");
							HX_STACK_LINE(713)
							Float D = (det * (((__this->kMassa * __this->kMassf) - (__this->kMassc * __this->kMassc))));		HX_STACK_VAR(D,"D");
							HX_STACK_LINE(714)
							Float C = (det * (((__this->kMassb * __this->kMasse) - (__this->kMassc * __this->kMassd))));		HX_STACK_VAR(C,"C");
							HX_STACK_LINE(715)
							Float E = (det * (((__this->kMassb * __this->kMassc) - (__this->kMassa * __this->kMasse))));		HX_STACK_VAR(E,"E");
							HX_STACK_LINE(716)
							Float F = (det * (((__this->kMassa * __this->kMassd) - (__this->kMassb * __this->kMassb))));		HX_STACK_VAR(F,"F");
							HX_STACK_LINE(717)
							{
								HX_STACK_LINE(718)
								__this->kMassa = A;
								HX_STACK_LINE(719)
								__this->kMassb = B;
								HX_STACK_LINE(720)
								__this->kMassd = D;
								HX_STACK_LINE(721)
								__this->kMassc = C;
								HX_STACK_LINE(722)
								__this->kMasse = E;
								HX_STACK_LINE(723)
								__this->kMassf = F;
							}
							HX_STACK_LINE(725)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(678)
				return (  (((det != det))) ? int(_Function_2_1::Block(__this)) : int((  (((det == (int)0))) ? int(_Function_2_2::Block(__this)) : int(_Function_2_3::Block(__this,det)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(676)
	int flag = _Function_1_1::Block(this);		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(728)
	if (((((int(flag) & int((int)1))) != (int)0))){
		HX_STACK_LINE(728)
		this->jAccx = (int)0;
	}
	HX_STACK_LINE(729)
	if (((((int(flag) & int((int)2))) != (int)0))){
		HX_STACK_LINE(729)
		this->jAccy = (int)0;
	}
	HX_STACK_LINE(730)
	if (((((int(flag) & int((int)4))) != (int)0))){
		HX_STACK_LINE(730)
		this->jAccz = (int)0;
	}
	HX_STACK_LINE(731)
	if ((!(this->stiff))){
		HX_STACK_LINE(732)
		Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
		HX_STACK_LINE(733)
		{
			struct _Function_3_1{
				inline static Float Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this,Float &dt,Float &biasCoef){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",734);
					{
						HX_STACK_LINE(735)
						Float omega = (((int)2 * ::Math_obj::PI) * __this->frequency);		HX_STACK_VAR(omega,"omega");
						HX_STACK_LINE(736)
						__this->gamma = (Float((int)1) / Float((((dt * omega) * ((((int)2 * __this->damping) + (omega * dt)))))));
						HX_STACK_LINE(737)
						Float ig = (Float((int)1) / Float((((int)1 + __this->gamma))));		HX_STACK_VAR(ig,"ig");
						HX_STACK_LINE(738)
						biasCoef = (((dt * omega) * omega) * __this->gamma);
						HX_STACK_LINE(739)
						hx::MultEq(__this->gamma,ig);
						HX_STACK_LINE(740)
						return ig;
					}
					return null();
				}
			};
			HX_STACK_LINE(734)
			Float X = _Function_3_1::Block(this,dt,biasCoef);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(742)
			hx::MultEq(this->kMassa,X);
			HX_STACK_LINE(743)
			hx::MultEq(this->kMassb,X);
			HX_STACK_LINE(744)
			hx::MultEq(this->kMassd,X);
			HX_STACK_LINE(745)
			hx::MultEq(this->kMassc,X);
			HX_STACK_LINE(746)
			hx::MultEq(this->kMasse,X);
			HX_STACK_LINE(747)
			hx::MultEq(this->kMassf,X);
		}
		HX_STACK_LINE(749)
		{
			HX_STACK_LINE(750)
			this->biasx = ((this->b2->posx + this->a2relx) - ((this->b1->posx + this->a1relx)));
			HX_STACK_LINE(751)
			this->biasy = ((this->b2->posy + this->a2rely) - ((this->b1->posy + this->a1rely)));
			HX_STACK_LINE(752)
			this->biasz = ((this->b2->rot - this->b1->rot) - this->phase);
		}
		HX_STACK_LINE(754)
		if (((bool(this->breakUnderError) && bool(((((this->biasx * this->biasx) + (this->biasy * this->biasy)) + (this->biasz * this->biasz)) > (this->maxError * this->maxError)))))){
			HX_STACK_LINE(754)
			return true;
		}
		HX_STACK_LINE(755)
		{
			HX_STACK_LINE(756)
			Float t = -(biasCoef);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(758)
				Float t1 = t;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(767)
				hx::MultEq(this->biasx,t1);
				HX_STACK_LINE(768)
				hx::MultEq(this->biasy,t1);
			}
			HX_STACK_LINE(770)
			hx::MultEq(this->biasz,t);
		}
		HX_STACK_LINE(772)
		{
			HX_STACK_LINE(773)
			Float t = this->maxError;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(782)
			Float ls = (((this->biasx * this->biasx) + (this->biasy * this->biasy)) + (this->biasz * this->biasz));		HX_STACK_VAR(ls,"ls");
			HX_STACK_LINE(783)
			if (((ls > (t * t)))){
				HX_STACK_LINE(793)
				Float t1 = (t * ((Float(1.0) / Float(::Math_obj::sqrt(ls)))));		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(794)
				{
					HX_STACK_LINE(795)
					Float t2 = t1;		HX_STACK_VAR(t2,"t2");
					HX_STACK_LINE(804)
					hx::MultEq(this->biasx,t2);
					HX_STACK_LINE(805)
					hx::MultEq(this->biasy,t2);
				}
				HX_STACK_LINE(807)
				hx::MultEq(this->biasz,t1);
			}
		}
	}
	else{
		HX_STACK_LINE(813)
		{
			HX_STACK_LINE(814)
			{
				HX_STACK_LINE(815)
				this->biasx = (int)0;
				HX_STACK_LINE(816)
				this->biasy = (int)0;
				HX_STACK_LINE(825)
				{
				}
			}
			HX_STACK_LINE(834)
			this->biasz = (int)0;
		}
		HX_STACK_LINE(836)
		this->gamma = (int)0;
	}
	HX_STACK_LINE(838)
	{
		HX_STACK_LINE(839)
		Float t = dtratio;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(840)
		{
			HX_STACK_LINE(841)
			Float t1 = t;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(850)
			hx::MultEq(this->jAccx,t1);
			HX_STACK_LINE(851)
			hx::MultEq(this->jAccy,t1);
		}
		HX_STACK_LINE(853)
		hx::MultEq(this->jAccz,t);
	}
	HX_STACK_LINE(855)
	this->jMax = (this->maxForce * dt);
	HX_STACK_LINE(856)
	return false;
}


Void ZPP_WeldJoint_obj::clearcache( ){
{
		HX_STACK_PUSH("ZPP_WeldJoint::clearcache","zpp_nape/constraint/WeldJoint.hx",602);
		HX_STACK_THIS(this);
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(604)
			{
				HX_STACK_LINE(605)
				this->jAccx = (int)0;
				HX_STACK_LINE(606)
				this->jAccy = (int)0;
				HX_STACK_LINE(615)
				{
				}
			}
			HX_STACK_LINE(624)
			this->jAccz = (int)0;
		}
		HX_STACK_LINE(626)
		this->pre_dt = -1.0;
	}
return null();
}


bool ZPP_WeldJoint_obj::pair_exists( int id,int di){
	HX_STACK_PUSH("ZPP_WeldJoint::pair_exists","zpp_nape/constraint/WeldJoint.hx",599);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(599)
	return (bool((bool((this->b1->id == id)) && bool((this->b2->id == di)))) || bool((bool((this->b1->id == di)) && bool((this->b2->id == id)))));
}


Void ZPP_WeldJoint_obj::forest( ){
{
		HX_STACK_PUSH("ZPP_WeldJoint::forest","zpp_nape/constraint/WeldJoint.hx",501);
		HX_STACK_THIS(this);
		HX_STACK_LINE(502)
		if (((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",505);
					{
						HX_STACK_LINE(506)
						::zpp_nape::space::ZPP_Component obj = __this->b1->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(507)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(508)
						while(((obj != obj->parent))){
							HX_STACK_LINE(509)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(510)
							obj->parent = stack;
							HX_STACK_LINE(511)
							stack = obj;
							HX_STACK_LINE(512)
							obj = nxt;
						}
						HX_STACK_LINE(514)
						while(((stack != null()))){
							HX_STACK_LINE(515)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(516)
							stack->parent = obj;
							HX_STACK_LINE(517)
							stack = nxt;
						}
						HX_STACK_LINE(519)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(503)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b1->component == this->b1->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b1->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",524);
					{
						HX_STACK_LINE(525)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(526)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(527)
						while(((obj != obj->parent))){
							HX_STACK_LINE(528)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(529)
							obj->parent = stack;
							HX_STACK_LINE(530)
							stack = obj;
							HX_STACK_LINE(531)
							obj = nxt;
						}
						HX_STACK_LINE(533)
						while(((stack != null()))){
							HX_STACK_LINE(534)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(535)
							stack->parent = obj;
							HX_STACK_LINE(536)
							stack = nxt;
						}
						HX_STACK_LINE(538)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(522)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(541)
			if (((xr != yr))){
				HX_STACK_LINE(541)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(542)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(543)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(543)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(545)
						yr->parent = xr;
						HX_STACK_LINE(546)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(550)
		if (((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",553);
					{
						HX_STACK_LINE(554)
						::zpp_nape::space::ZPP_Component obj = __this->b2->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(555)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(556)
						while(((obj != obj->parent))){
							HX_STACK_LINE(557)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(558)
							obj->parent = stack;
							HX_STACK_LINE(559)
							stack = obj;
							HX_STACK_LINE(560)
							obj = nxt;
						}
						HX_STACK_LINE(562)
						while(((stack != null()))){
							HX_STACK_LINE(563)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(564)
							stack->parent = obj;
							HX_STACK_LINE(565)
							stack = nxt;
						}
						HX_STACK_LINE(567)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(551)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b2->component == this->b2->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b2->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",572);
					{
						HX_STACK_LINE(573)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(574)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(575)
						while(((obj != obj->parent))){
							HX_STACK_LINE(576)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(577)
							obj->parent = stack;
							HX_STACK_LINE(578)
							stack = obj;
							HX_STACK_LINE(579)
							obj = nxt;
						}
						HX_STACK_LINE(581)
						while(((stack != null()))){
							HX_STACK_LINE(582)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(583)
							stack->parent = obj;
							HX_STACK_LINE(584)
							stack = nxt;
						}
						HX_STACK_LINE(586)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(570)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(589)
			if (((xr != yr))){
				HX_STACK_LINE(589)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(590)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(591)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(591)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(593)
						yr->parent = xr;
						HX_STACK_LINE(594)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


Void ZPP_WeldJoint_obj::wake_connected( ){
{
		HX_STACK_PUSH("ZPP_WeldJoint::wake_connected","zpp_nape/constraint/WeldJoint.hx",497);
		HX_STACK_THIS(this);
		HX_STACK_LINE(498)
		if (((bool((this->b1 != null())) && bool((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(498)
			this->b1->wake();
		}
		HX_STACK_LINE(499)
		if (((bool((this->b2 != null())) && bool((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(499)
			this->b2->wake();
		}
	}
return null();
}


Void ZPP_WeldJoint_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_WeldJoint::validate","zpp_nape/constraint/WeldJoint.hx",491);
		HX_STACK_THIS(this);
		HX_STACK_LINE(492)
		if (((bool((this->b1 == null())) || bool((this->b2 == null()))))){
			HX_STACK_LINE(492)
			hx::Throw (HX_CSTRING("Error: AngleJoint cannot be simulated null bodies"));
		}
		HX_STACK_LINE(493)
		if (((this->b1 == this->b2))){
			HX_STACK_LINE(493)
			hx::Throw (HX_CSTRING("Error: WeldJoint cannot be simulated with body1 == body2"));
		}
		HX_STACK_LINE(494)
		if (((bool((this->b1->space != this->space)) || bool((this->b2->space != this->space))))){
			HX_STACK_LINE(494)
			hx::Throw (HX_CSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned"));
		}
		HX_STACK_LINE(495)
		if (((bool(!(((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) && bool(!(((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))))){
			HX_STACK_LINE(495)
			hx::Throw (HX_CSTRING("Error: Constraints cannot have both bodies non-dynamic"));
		}
	}
return null();
}


::nape::constraint::Constraint ZPP_WeldJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_PUSH("ZPP_WeldJoint::copy","zpp_nape/constraint/WeldJoint.hx",331);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dict,"dict");
	HX_STACK_ARG(todo,"todo");
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",332);
			{
				HX_STACK_LINE(332)
				::nape::constraint::WeldJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(332)
				if (((_this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(332)
					_this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(332)
				return _this->zpp_inner_zn->wrap_a1;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",332);
			{
				HX_STACK_LINE(332)
				::nape::constraint::WeldJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(332)
				if (((_this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(332)
					_this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(332)
				return _this->zpp_inner_zn->wrap_a2;
			}
			return null();
		}
	};
	HX_STACK_LINE(332)
	Array< ::Dynamic > ret = Array_obj< ::Dynamic >::__new().Add(::nape::constraint::PivotJoint_obj::__new(null(),null(),_Function_1_1::Block(this),_Function_1_2::Block(this)));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(333)
	this->copyto(ret->__get((int)0).StaticCast< ::nape::constraint::PivotJoint >());
	HX_STACK_LINE(334)
	if (((bool((dict != null())) && bool((this->b1 != null()))))){
		HX_STACK_LINE(344)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(345)
			while(((_g < dict->length))){
				HX_STACK_LINE(345)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(345)
				++(_g);
				HX_STACK_LINE(346)
				if (((idc->id == this->b1->id))){
					HX_STACK_LINE(347)
					b = idc->bc;
					HX_STACK_LINE(348)
					break;
				}
			}
		}
		HX_STACK_LINE(351)
		if (((b != null()))){
			HX_STACK_LINE(351)
			ret->__get((int)0).StaticCast< ::nape::constraint::PivotJoint >()->zpp_inner_zn->b1 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/WeldJoint.hx",352);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(352)
					ret->__get((int)0).StaticCast< ::nape::constraint::PivotJoint >()->zpp_inner_zn->b1 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(352)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b1->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(355)
	if (((bool((dict != null())) && bool((this->b2 != null()))))){
		HX_STACK_LINE(365)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(366)
		{
			HX_STACK_LINE(366)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(366)
			while(((_g < dict->length))){
				HX_STACK_LINE(366)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(366)
				++(_g);
				HX_STACK_LINE(367)
				if (((idc->id == this->b2->id))){
					HX_STACK_LINE(368)
					b = idc->bc;
					HX_STACK_LINE(369)
					break;
				}
			}
		}
		HX_STACK_LINE(372)
		if (((b != null()))){
			HX_STACK_LINE(372)
			ret->__get((int)0).StaticCast< ::nape::constraint::PivotJoint >()->zpp_inner_zn->b2 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/WeldJoint.hx",373);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(373)
					ret->__get((int)0).StaticCast< ::nape::constraint::PivotJoint >()->zpp_inner_zn->b2 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(373)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b2->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(376)
	return ret->__get((int)0).StaticCast< ::nape::constraint::PivotJoint >();
}


Void ZPP_WeldJoint_obj::setup_a2( ){
{
		HX_STACK_PUSH("ZPP_WeldJoint::setup_a2","zpp_nape/constraint/WeldJoint.hx",308);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",309);
				{
					HX_STACK_LINE(309)
					Float x = __this->a2localx;		HX_STACK_VAR(x,"x");
					Float y = __this->a2localy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(309)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(309)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(309)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(309)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(309)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(309)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(309)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(309)
						ret->zpp_pool = null();
						HX_STACK_LINE(309)
						ret->zpp_disp = false;
						HX_STACK_LINE(309)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(309)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(309)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",309);
								{
									HX_STACK_LINE(309)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(309)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(309)
									{
										HX_STACK_LINE(309)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(309)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(309)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(309)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(309)
											ret1->next = null();
										}
										HX_STACK_LINE(309)
										ret1->weak = false;
									}
									HX_STACK_LINE(309)
									ret1->_immutable = immutable;
									HX_STACK_LINE(309)
									{
										HX_STACK_LINE(309)
										ret1->x = x;
										HX_STACK_LINE(309)
										ret1->y = y;
										HX_STACK_LINE(309)
										{
										}
									}
									HX_STACK_LINE(309)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(309)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(309)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(309)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(309)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(309)
							if ((_this->_immutable)){
								HX_STACK_LINE(309)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(309)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(309)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(309)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(309)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",309);
								{
									HX_STACK_LINE(309)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(309)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(309)
									{
										HX_STACK_LINE(309)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(309)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(309)
											_this->_validate();
										}
									}
									HX_STACK_LINE(309)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",309);
								{
									HX_STACK_LINE(309)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(309)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(309)
									{
										HX_STACK_LINE(309)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(309)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(309)
											_this->_validate();
										}
									}
									HX_STACK_LINE(309)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(309)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(309)
							{
								HX_STACK_LINE(309)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(309)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(309)
								{
								}
							}
							HX_STACK_LINE(309)
							{
								HX_STACK_LINE(309)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(309)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(309)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(309)
						ret;
					}
					HX_STACK_LINE(309)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(309)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(309)
		this->wrap_a2 = _Function_1_1::Block(this);
		HX_STACK_LINE(310)
		this->wrap_a2->zpp_inner->_inuse = true;
		HX_STACK_LINE(311)
		this->wrap_a2->zpp_inner->_validate = this->validate_a2_dyn();
		HX_STACK_LINE(312)
		this->wrap_a2->zpp_inner->_invalidate = this->invalidate_a2_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_WeldJoint_obj,setup_a2,(void))

Void ZPP_WeldJoint_obj::invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_WeldJoint::invalidate_a2","zpp_nape/constraint/WeldJoint.hx",284);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(285)
		this->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("a2")));
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(287)
			this->a2localx = x->x;
			HX_STACK_LINE(288)
			this->a2localy = x->y;
			HX_STACK_LINE(297)
			{
			}
		}
		HX_STACK_LINE(306)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_WeldJoint_obj,invalidate_a2,(void))

Void ZPP_WeldJoint_obj::validate_a2( ){
{
		HX_STACK_PUSH("ZPP_WeldJoint::validate_a2","zpp_nape/constraint/WeldJoint.hx",262);
		HX_STACK_THIS(this);
		HX_STACK_LINE(264)
		this->wrap_a2->zpp_inner->x = this->a2localx;
		HX_STACK_LINE(265)
		this->wrap_a2->zpp_inner->y = this->a2localy;
		HX_STACK_LINE(274)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_WeldJoint_obj,validate_a2,(void))

Void ZPP_WeldJoint_obj::setup_a1( ){
{
		HX_STACK_PUSH("ZPP_WeldJoint::setup_a1","zpp_nape/constraint/WeldJoint.hx",250);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_WeldJoint_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",251);
				{
					HX_STACK_LINE(251)
					Float x = __this->a1localx;		HX_STACK_VAR(x,"x");
					Float y = __this->a1localy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(251)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(251)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(251)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(251)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(251)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(251)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(251)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(251)
						ret->zpp_pool = null();
						HX_STACK_LINE(251)
						ret->zpp_disp = false;
						HX_STACK_LINE(251)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(251)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(251)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",251);
								{
									HX_STACK_LINE(251)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(251)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(251)
									{
										HX_STACK_LINE(251)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(251)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(251)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(251)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(251)
											ret1->next = null();
										}
										HX_STACK_LINE(251)
										ret1->weak = false;
									}
									HX_STACK_LINE(251)
									ret1->_immutable = immutable;
									HX_STACK_LINE(251)
									{
										HX_STACK_LINE(251)
										ret1->x = x;
										HX_STACK_LINE(251)
										ret1->y = y;
										HX_STACK_LINE(251)
										{
										}
									}
									HX_STACK_LINE(251)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(251)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(251)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(251)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(251)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(251)
						{
							HX_STACK_LINE(251)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(251)
							if ((_this->_immutable)){
								HX_STACK_LINE(251)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(251)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(251)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(251)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(251)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",251);
								{
									HX_STACK_LINE(251)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(251)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(251)
									{
										HX_STACK_LINE(251)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(251)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(251)
											_this->_validate();
										}
									}
									HX_STACK_LINE(251)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/WeldJoint.hx",251);
								{
									HX_STACK_LINE(251)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(251)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(251)
									{
										HX_STACK_LINE(251)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(251)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(251)
											_this->_validate();
										}
									}
									HX_STACK_LINE(251)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(251)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(251)
							{
								HX_STACK_LINE(251)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(251)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(251)
								{
								}
							}
							HX_STACK_LINE(251)
							{
								HX_STACK_LINE(251)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(251)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(251)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(251)
						ret;
					}
					HX_STACK_LINE(251)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(251)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(251)
		this->wrap_a1 = _Function_1_1::Block(this);
		HX_STACK_LINE(252)
		this->wrap_a1->zpp_inner->_inuse = true;
		HX_STACK_LINE(253)
		this->wrap_a1->zpp_inner->_validate = this->validate_a1_dyn();
		HX_STACK_LINE(254)
		this->wrap_a1->zpp_inner->_invalidate = this->invalidate_a1_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_WeldJoint_obj,setup_a1,(void))

Void ZPP_WeldJoint_obj::invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_WeldJoint::invalidate_a1","zpp_nape/constraint/WeldJoint.hx",226);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(227)
		this->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("a1")));
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(229)
			this->a1localx = x->x;
			HX_STACK_LINE(230)
			this->a1localy = x->y;
			HX_STACK_LINE(239)
			{
			}
		}
		HX_STACK_LINE(248)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_WeldJoint_obj,invalidate_a1,(void))

Void ZPP_WeldJoint_obj::validate_a1( ){
{
		HX_STACK_PUSH("ZPP_WeldJoint::validate_a1","zpp_nape/constraint/WeldJoint.hx",204);
		HX_STACK_THIS(this);
		HX_STACK_LINE(206)
		this->wrap_a1->zpp_inner->x = this->a1localx;
		HX_STACK_LINE(207)
		this->wrap_a1->zpp_inner->y = this->a1localy;
		HX_STACK_LINE(216)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_WeldJoint_obj,validate_a1,(void))

Void ZPP_WeldJoint_obj::inactiveBodies( ){
{
		HX_STACK_PUSH("ZPP_WeldJoint::inactiveBodies","zpp_nape/constraint/WeldJoint.hx",191);
		HX_STACK_THIS(this);
		HX_STACK_LINE(192)
		if (((this->b1 != null()))){
			HX_STACK_LINE(193)
			this->b1->constraints->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(195)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(195)
			if (((this->b2 != null()))){
				HX_STACK_LINE(196)
				this->b2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_WeldJoint_obj::activeBodies( ){
{
		HX_STACK_PUSH("ZPP_WeldJoint::activeBodies","zpp_nape/constraint/WeldJoint.hx",183);
		HX_STACK_THIS(this);
		HX_STACK_LINE(184)
		if (((this->b1 != null()))){
			HX_STACK_LINE(185)
			this->b1->constraints->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(187)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(187)
			if (((this->b2 != null()))){
				HX_STACK_LINE(188)
				this->b2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


::nape::geom::Vec3 ZPP_WeldJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_PUSH("ZPP_WeldJoint::bodyImpulse","zpp_nape/constraint/WeldJoint.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(176)
	if ((this->stepped)){
		HX_STACK_LINE(177)
		if (((b == this->b1))){
			HX_STACK_LINE(178)
			return ::nape::geom::Vec3_obj::get(-(this->jAccx),-(this->jAccy),-(((((this->jAccy * this->a1relx) - (this->jAccx * this->a1rely)) + this->jAccz))));
		}
		else{
			HX_STACK_LINE(179)
			return ::nape::geom::Vec3_obj::get(this->jAccx,this->jAccy,(((this->jAccy * this->a2relx) - (this->jAccx * this->a2rely)) + this->jAccz));
		}
	}
	else{
		HX_STACK_LINE(181)
		return ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	}
	HX_STACK_LINE(176)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_WeldJoint_obj,bodyImpulse,return )


ZPP_WeldJoint_obj::ZPP_WeldJoint_obj()
{
}

void ZPP_WeldJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_WeldJoint);
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	HX_MARK_MEMBER_NAME(biasz,"biasz");
	HX_MARK_MEMBER_NAME(biasy,"biasy");
	HX_MARK_MEMBER_NAME(biasx,"biasx");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(jAccz,"jAccz");
	HX_MARK_MEMBER_NAME(jAccy,"jAccy");
	HX_MARK_MEMBER_NAME(jAccx,"jAccx");
	HX_MARK_MEMBER_NAME(kMassf,"kMassf");
	HX_MARK_MEMBER_NAME(kMasse,"kMasse");
	HX_MARK_MEMBER_NAME(kMassc,"kMassc");
	HX_MARK_MEMBER_NAME(kMassd,"kMassd");
	HX_MARK_MEMBER_NAME(kMassb,"kMassb");
	HX_MARK_MEMBER_NAME(kMassa,"kMassa");
	HX_MARK_MEMBER_NAME(phase,"phase");
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
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_WeldJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	HX_VISIT_MEMBER_NAME(biasz,"biasz");
	HX_VISIT_MEMBER_NAME(biasy,"biasy");
	HX_VISIT_MEMBER_NAME(biasx,"biasx");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(jAccz,"jAccz");
	HX_VISIT_MEMBER_NAME(jAccy,"jAccy");
	HX_VISIT_MEMBER_NAME(jAccx,"jAccx");
	HX_VISIT_MEMBER_NAME(kMassf,"kMassf");
	HX_VISIT_MEMBER_NAME(kMasse,"kMasse");
	HX_VISIT_MEMBER_NAME(kMassc,"kMassc");
	HX_VISIT_MEMBER_NAME(kMassd,"kMassd");
	HX_VISIT_MEMBER_NAME(kMassb,"kMassb");
	HX_VISIT_MEMBER_NAME(kMassa,"kMassa");
	HX_VISIT_MEMBER_NAME(phase,"phase");
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
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_WeldJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"biasz") ) { return biasz; }
		if (HX_FIELD_EQ(inName,"biasy") ) { return biasy; }
		if (HX_FIELD_EQ(inName,"biasx") ) { return biasx; }
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		if (HX_FIELD_EQ(inName,"jAccz") ) { return jAccz; }
		if (HX_FIELD_EQ(inName,"jAccy") ) { return jAccy; }
		if (HX_FIELD_EQ(inName,"jAccx") ) { return jAccx; }
		if (HX_FIELD_EQ(inName,"phase") ) { return phase; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		if (HX_FIELD_EQ(inName,"kMassf") ) { return kMassf; }
		if (HX_FIELD_EQ(inName,"kMasse") ) { return kMasse; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { return kMassc; }
		if (HX_FIELD_EQ(inName,"kMassd") ) { return kMassd; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { return kMassb; }
		if (HX_FIELD_EQ(inName,"kMassa") ) { return kMassa; }
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

Dynamic ZPP_WeldJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"biasz") ) { biasz=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"biasy") ) { biasy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"biasx") ) { biasx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAccz") ) { jAccz=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAccy") ) { jAccy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAccx") ) { jAccx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"phase") ) { phase=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"kMassf") ) { kMassf=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMasse") ) { kMasse=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { kMassc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassd") ) { kMassd=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { kMassb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassa") ) { kMassa=inValue.Cast< Float >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::WeldJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_WeldJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stepped"));
	outFields->push(HX_CSTRING("biasz"));
	outFields->push(HX_CSTRING("biasy"));
	outFields->push(HX_CSTRING("biasx"));
	outFields->push(HX_CSTRING("gamma"));
	outFields->push(HX_CSTRING("jMax"));
	outFields->push(HX_CSTRING("jAccz"));
	outFields->push(HX_CSTRING("jAccy"));
	outFields->push(HX_CSTRING("jAccx"));
	outFields->push(HX_CSTRING("kMassf"));
	outFields->push(HX_CSTRING("kMasse"));
	outFields->push(HX_CSTRING("kMassc"));
	outFields->push(HX_CSTRING("kMassd"));
	outFields->push(HX_CSTRING("kMassb"));
	outFields->push(HX_CSTRING("kMassa"));
	outFields->push(HX_CSTRING("phase"));
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
	HX_CSTRING("biasz"),
	HX_CSTRING("biasy"),
	HX_CSTRING("biasx"),
	HX_CSTRING("gamma"),
	HX_CSTRING("jMax"),
	HX_CSTRING("jAccz"),
	HX_CSTRING("jAccy"),
	HX_CSTRING("jAccx"),
	HX_CSTRING("kMassf"),
	HX_CSTRING("kMasse"),
	HX_CSTRING("kMassc"),
	HX_CSTRING("kMassd"),
	HX_CSTRING("kMassb"),
	HX_CSTRING("kMassa"),
	HX_CSTRING("phase"),
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
	HX_CSTRING("outer_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_WeldJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_WeldJoint_obj::__mClass,"__mClass");
};

Class ZPP_WeldJoint_obj::__mClass;

void ZPP_WeldJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_WeldJoint"), hx::TCanCast< ZPP_WeldJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_WeldJoint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
