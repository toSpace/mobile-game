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

Void ZPP_PivotJoint_obj::__construct()
{
HX_STACK_PUSH("ZPP_PivotJoint::new","zpp_nape/constraint/PivotJoint.hx",174);
{
	HX_STACK_LINE(324)
	this->stepped = false;
	HX_STACK_LINE(323)
	this->biasy = 0.0;
	HX_STACK_LINE(322)
	this->biasx = 0.0;
	HX_STACK_LINE(321)
	this->gamma = 0.0;
	HX_STACK_LINE(320)
	this->jMax = 0.0;
	HX_STACK_LINE(319)
	this->jAccy = 0.0;
	HX_STACK_LINE(318)
	this->jAccx = 0.0;
	HX_STACK_LINE(317)
	this->kMassc = 0.0;
	HX_STACK_LINE(316)
	this->kMassb = 0.0;
	HX_STACK_LINE(315)
	this->kMassa = 0.0;
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
	HX_STACK_LINE(373)
	super::__construct();
	HX_STACK_LINE(374)
	this->stepped = false;
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(376)
		this->jAccx = (int)0;
		HX_STACK_LINE(377)
		this->jAccy = (int)0;
		HX_STACK_LINE(386)
		{
		}
	}
	HX_STACK_LINE(395)
	this->jMax = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(396)
	{
		HX_STACK_LINE(397)
		{
			HX_STACK_LINE(398)
			this->a1localx = (int)0;
			HX_STACK_LINE(399)
			this->a1localy = (int)0;
			HX_STACK_LINE(408)
			{
			}
		}
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(418)
			this->a1relx = (int)0;
			HX_STACK_LINE(419)
			this->a1rely = (int)0;
			HX_STACK_LINE(428)
			{
			}
		}
	}
	HX_STACK_LINE(438)
	{
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(440)
			this->a2localx = (int)0;
			HX_STACK_LINE(441)
			this->a2localy = (int)0;
			HX_STACK_LINE(450)
			{
			}
		}
		HX_STACK_LINE(459)
		{
			HX_STACK_LINE(460)
			this->a2relx = (int)0;
			HX_STACK_LINE(461)
			this->a2rely = (int)0;
			HX_STACK_LINE(470)
			{
			}
		}
	}
}
;
	return null();
}

ZPP_PivotJoint_obj::~ZPP_PivotJoint_obj() { }

Dynamic ZPP_PivotJoint_obj::__CreateEmpty() { return  new ZPP_PivotJoint_obj; }
hx::ObjectPtr< ZPP_PivotJoint_obj > ZPP_PivotJoint_obj::__new()
{  hx::ObjectPtr< ZPP_PivotJoint_obj > result = new ZPP_PivotJoint_obj();
	result->__construct();
	return result;}

Dynamic ZPP_PivotJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PivotJoint_obj > result = new ZPP_PivotJoint_obj();
	result->__construct();
	return result;}

Void ZPP_PivotJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_PUSH("ZPP_PivotJoint::draw","zpp_nape/constraint/PivotJoint.hx",1342);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
	}
return null();
}


bool ZPP_PivotJoint_obj::applyImpulsePos( ){
	HX_STACK_PUSH("ZPP_PivotJoint::applyImpulsePos","zpp_nape/constraint/PivotJoint.hx",1034);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1035)
	Float r1x = 0.0;		HX_STACK_VAR(r1x,"r1x");
	HX_STACK_LINE(1036)
	Float r1y = 0.0;		HX_STACK_VAR(r1y,"r1y");
	HX_STACK_LINE(1037)
	{
		HX_STACK_LINE(1039)
		r1x = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(1040)
		r1y = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(1043)
	Float r2x = 0.0;		HX_STACK_VAR(r2x,"r2x");
	HX_STACK_LINE(1044)
	Float r2y = 0.0;		HX_STACK_VAR(r2y,"r2y");
	HX_STACK_LINE(1045)
	{
		HX_STACK_LINE(1047)
		r2x = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(1048)
		r2y = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(1051)
	Float Ex = 0.0;		HX_STACK_VAR(Ex,"Ex");
	HX_STACK_LINE(1052)
	Float Ey = 0.0;		HX_STACK_VAR(Ey,"Ey");
	HX_STACK_LINE(1053)
	{
		HX_STACK_LINE(1054)
		Ex = ((this->b2->posx + r2x) - ((this->b1->posx + r1x)));
		HX_STACK_LINE(1055)
		Ey = ((this->b2->posy + r2y) - ((this->b1->posy + r1y)));
	}
	HX_STACK_LINE(1057)
	if (((bool(this->breakUnderError) && bool((((Ex * Ex) + (Ey * Ey)) > (this->maxError * this->maxError)))))){
		HX_STACK_LINE(1057)
		return true;
	}
	HX_STACK_LINE(1058)
	if (((((Ex * Ex) + (Ey * Ey)) < (::nape::Config_obj::constraintLinearSlop * ::nape::Config_obj::constraintLinearSlop)))){
		HX_STACK_LINE(1058)
		return false;
	}
	HX_STACK_LINE(1059)
	{
		HX_STACK_LINE(1060)
		Float t = 0.5;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1069)
		hx::MultEq(Ex,t);
		HX_STACK_LINE(1070)
		hx::MultEq(Ey,t);
	}
	HX_STACK_LINE(1072)
	Float Jx = 0.0;		HX_STACK_VAR(Jx,"Jx");
	HX_STACK_LINE(1073)
	Float Jy = 0.0;		HX_STACK_VAR(Jy,"Jy");
	HX_STACK_LINE(1074)
	if (((((Ex * Ex) + (Ey * Ey)) > (int)6))){
		HX_STACK_LINE(1075)
		Float k = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(1076)
		if (((k > ::nape::Config_obj::epsilon))){
			HX_STACK_LINE(1077)
			k = (Float(0.75) / Float(k));
			HX_STACK_LINE(1078)
			{
				HX_STACK_LINE(1079)
				Jx = (-(Ex) * k);
				HX_STACK_LINE(1080)
				Jy = (-(Ey) * k);
				HX_STACK_LINE(1089)
				{
				}
			}
			HX_STACK_LINE(1098)
			{
				HX_STACK_LINE(1099)
				int t = (int)20;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1108)
				Float ls = ((Jx * Jx) + (Jy * Jy));		HX_STACK_VAR(ls,"ls");
				HX_STACK_LINE(1109)
				if (((ls > (t * t)))){
					HX_STACK_LINE(1119)
					Float t1 = (t * ((Float(1.0) / Float(::Math_obj::sqrt(ls)))));		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(1128)
					hx::MultEq(Jx,t1);
					HX_STACK_LINE(1129)
					hx::MultEq(Jy,t1);
				}
			}
			HX_STACK_LINE(1133)
			{
				HX_STACK_LINE(1134)
				Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1143)
				hx::SubEq(this->b1->posx,(Jx * t));
				HX_STACK_LINE(1144)
				hx::SubEq(this->b1->posy,(Jy * t));
			}
			HX_STACK_LINE(1146)
			{
				HX_STACK_LINE(1147)
				Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1156)
				hx::AddEq(this->b2->posx,(Jx * t));
				HX_STACK_LINE(1157)
				hx::AddEq(this->b2->posy,(Jy * t));
			}
			HX_STACK_LINE(1159)
			{
				HX_STACK_LINE(1160)
				Ex = ((this->b2->posx + r2x) - ((this->b1->posx + r1x)));
				HX_STACK_LINE(1161)
				Ey = ((this->b2->posy + r2y) - ((this->b1->posy + r1y)));
			}
			HX_STACK_LINE(1163)
			{
				HX_STACK_LINE(1164)
				Float t = 0.5;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1173)
				hx::MultEq(Ex,t);
				HX_STACK_LINE(1174)
				hx::MultEq(Ey,t);
			}
		}
	}
	HX_STACK_LINE(1178)
	Float Ka = 0.0;		HX_STACK_VAR(Ka,"Ka");
	HX_STACK_LINE(1179)
	Float Kb = 0.0;		HX_STACK_VAR(Kb,"Kb");
	HX_STACK_LINE(1180)
	Float Kc = 0.0;		HX_STACK_VAR(Kc,"Kc");
	HX_STACK_LINE(1181)
	{
		HX_STACK_LINE(1182)
		Float m = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(1183)
		{
			HX_STACK_LINE(1184)
			Ka = m;
			HX_STACK_LINE(1185)
			Kb = (int)0;
			HX_STACK_LINE(1186)
			Kc = m;
		}
		HX_STACK_LINE(1188)
		if (((this->b1->sinertia != (int)0))){
			HX_STACK_LINE(1189)
			Float X = (r1x * this->b1->sinertia);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1190)
			Float Y = (r1y * this->b1->sinertia);		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1191)
			{
				HX_STACK_LINE(1192)
				hx::AddEq(Ka,(Y * r1y));
				HX_STACK_LINE(1193)
				hx::AddEq(Kb,(-(Y) * r1x));
				HX_STACK_LINE(1194)
				hx::AddEq(Kc,(X * r1x));
			}
		}
		HX_STACK_LINE(1197)
		if (((this->b2->sinertia != (int)0))){
			HX_STACK_LINE(1198)
			Float X = (r2x * this->b2->sinertia);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1199)
			Float Y = (r2y * this->b2->sinertia);		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1200)
			{
				HX_STACK_LINE(1201)
				hx::AddEq(Ka,(Y * r2y));
				HX_STACK_LINE(1202)
				hx::AddEq(Kb,(-(Y) * r2x));
				HX_STACK_LINE(1203)
				hx::AddEq(Kc,(X * r2x));
			}
		}
	}
	HX_STACK_LINE(1207)
	{
		HX_STACK_LINE(1208)
		Jx = -(Ex);
		HX_STACK_LINE(1209)
		Jy = -(Ey);
		HX_STACK_LINE(1218)
		{
		}
	}
	HX_STACK_LINE(1227)
	{
		HX_STACK_LINE(1228)
		int t = (int)6;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1237)
		Float ls = ((Jx * Jx) + (Jy * Jy));		HX_STACK_VAR(ls,"ls");
		HX_STACK_LINE(1238)
		if (((ls > (t * t)))){
			HX_STACK_LINE(1248)
			Float t1 = (t * ((Float(1.0) / Float(::Math_obj::sqrt(ls)))));		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(1257)
			hx::MultEq(Jx,t1);
			HX_STACK_LINE(1258)
			hx::MultEq(Jy,t1);
		}
	}
	HX_STACK_LINE(1262)
	{
		HX_STACK_LINE(1263)
		Float det = ((Ka * Kc) - (Kb * Kb));		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(1264)
		if (((det != det))){
			HX_STACK_LINE(1264)
			Jx = Jy = (int)0;
		}
		else{
			HX_STACK_LINE(1265)
			if (((det == (int)0))){
				HX_STACK_LINE(1266)
				if (((Ka != (int)0))){
					HX_STACK_LINE(1266)
					hx::DivEq(Jx,Ka);
				}
				else{
					HX_STACK_LINE(1267)
					Jx = (int)0;
				}
				HX_STACK_LINE(1268)
				if (((Kc != (int)0))){
					HX_STACK_LINE(1268)
					hx::DivEq(Jy,Kc);
				}
				else{
					HX_STACK_LINE(1269)
					Jy = (int)0;
				}
			}
			else{
				HX_STACK_LINE(1272)
				det = (Float((int)1) / Float(det));
				HX_STACK_LINE(1273)
				Float t = (det * (((Kc * Jx) - (Kb * Jy))));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1274)
				Jy = (det * (((Ka * Jy) - (Kb * Jx))));
				HX_STACK_LINE(1275)
				Jx = t;
			}
		}
	}
	HX_STACK_LINE(1278)
	{
		HX_STACK_LINE(1280)
		{
			HX_STACK_LINE(1281)
			Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1290)
			hx::SubEq(this->b1->posx,(Jx * t));
			HX_STACK_LINE(1291)
			hx::SubEq(this->b1->posy,(Jy * t));
		}
		HX_STACK_LINE(1293)
		{
			HX_STACK_LINE(1294)
			Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1303)
			hx::AddEq(this->b2->posx,(Jx * t));
			HX_STACK_LINE(1304)
			hx::AddEq(this->b2->posy,(Jy * t));
		}
		HX_STACK_LINE(1306)
		{
			HX_STACK_LINE(1306)
			::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
			Float dr = (-((((Jy * r1x) - (Jx * r1y)))) * this->b1->iinertia);		HX_STACK_VAR(dr,"dr");
			HX_STACK_LINE(1306)
			hx::AddEq(_this->rot,dr);
			HX_STACK_LINE(1306)
			if ((((dr * dr) > 0.0001))){
				HX_STACK_LINE(1306)
				_this->axisx = ::Math_obj::sin(_this->rot);
				HX_STACK_LINE(1306)
				_this->axisy = ::Math_obj::cos(_this->rot);
				HX_STACK_LINE(1306)
				Dynamic();
			}
			else{
				HX_STACK_LINE(1306)
				Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
				HX_STACK_LINE(1306)
				Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1306)
				Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1306)
				Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(1306)
				_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
				HX_STACK_LINE(1306)
				_this->axisx = nx;
			}
		}
		HX_STACK_LINE(1307)
		{
			HX_STACK_LINE(1307)
			::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
			Float dr = ((((Jy * r2x) - (Jx * r2y))) * this->b2->iinertia);		HX_STACK_VAR(dr,"dr");
			HX_STACK_LINE(1307)
			hx::AddEq(_this->rot,dr);
			HX_STACK_LINE(1307)
			if ((((dr * dr) > 0.0001))){
				HX_STACK_LINE(1307)
				_this->axisx = ::Math_obj::sin(_this->rot);
				HX_STACK_LINE(1307)
				_this->axisy = ::Math_obj::cos(_this->rot);
				HX_STACK_LINE(1307)
				Dynamic();
			}
			else{
				HX_STACK_LINE(1307)
				Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
				HX_STACK_LINE(1307)
				Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1307)
				Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1307)
				Float nx = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(1307)
				_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
				HX_STACK_LINE(1307)
				_this->axisx = nx;
			}
		}
	}
	HX_STACK_LINE(1340)
	return false;
}


bool ZPP_PivotJoint_obj::applyImpulseVel( ){
	HX_STACK_PUSH("ZPP_PivotJoint::applyImpulseVel","zpp_nape/constraint/PivotJoint.hx",858);
	HX_STACK_THIS(this);
	HX_STACK_LINE(859)
	Float Ex = 0.0;		HX_STACK_VAR(Ex,"Ex");
	HX_STACK_LINE(860)
	Float Ey = 0.0;		HX_STACK_VAR(Ey,"Ey");
	HX_STACK_LINE(861)
	{
		HX_STACK_LINE(862)
		Ex = (((this->b2->velx + this->b2->kinvelx) - (this->a2rely * ((this->b2->angvel + this->b2->kinangvel)))) - (((this->b1->velx + this->b1->kinvelx) - (this->a1rely * ((this->b1->angvel + this->b1->kinangvel))))));
		HX_STACK_LINE(863)
		Ey = (((this->b2->vely + this->b2->kinvely) + (this->a2relx * ((this->b2->angvel + this->b2->kinangvel)))) - (((this->b1->vely + this->b1->kinvely) + (this->a1relx * ((this->b1->angvel + this->b1->kinangvel))))));
	}
	HX_STACK_LINE(865)
	Float Jx = 0.0;		HX_STACK_VAR(Jx,"Jx");
	HX_STACK_LINE(866)
	Float Jy = 0.0;		HX_STACK_VAR(Jy,"Jy");
	HX_STACK_LINE(867)
	{
		HX_STACK_LINE(868)
		Jx = (this->biasx - Ex);
		HX_STACK_LINE(869)
		Jy = (this->biasy - Ey);
	}
	HX_STACK_LINE(871)
	{
		HX_STACK_LINE(872)
		Float t = ((this->kMassa * Jx) + (this->kMassb * Jy));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(873)
		Jy = ((this->kMassb * Jx) + (this->kMassc * Jy));
		HX_STACK_LINE(874)
		Jx = t;
	}
	HX_STACK_LINE(876)
	{
		HX_STACK_LINE(877)
		Float t = this->gamma;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(886)
		hx::SubEq(Jx,(this->jAccx * t));
		HX_STACK_LINE(887)
		hx::SubEq(Jy,(this->jAccy * t));
	}
	HX_STACK_LINE(889)
	{
		HX_STACK_LINE(890)
		Float jOldx = 0.0;		HX_STACK_VAR(jOldx,"jOldx");
		HX_STACK_LINE(891)
		Float jOldy = 0.0;		HX_STACK_VAR(jOldy,"jOldy");
		HX_STACK_LINE(892)
		{
			HX_STACK_LINE(893)
			jOldx = this->jAccx;
			HX_STACK_LINE(894)
			jOldy = this->jAccy;
			HX_STACK_LINE(903)
			{
			}
		}
		HX_STACK_LINE(912)
		{
			HX_STACK_LINE(913)
			Float t = 1.0;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(922)
			hx::AddEq(this->jAccx,(Jx * t));
			HX_STACK_LINE(923)
			hx::AddEq(this->jAccy,(Jy * t));
		}
		HX_STACK_LINE(925)
		if ((this->breakUnderForce)){
			HX_STACK_LINE(926)
			if (((((this->jAccx * this->jAccx) + (this->jAccy * this->jAccy)) > (this->jMax * this->jMax)))){
				HX_STACK_LINE(927)
				return true;
			}
		}
		else{
			HX_STACK_LINE(929)
			if ((!(this->stiff))){
				HX_STACK_LINE(930)
				Float t = this->jMax;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(939)
				Float ls = ((this->jAccx * this->jAccx) + (this->jAccy * this->jAccy));		HX_STACK_VAR(ls,"ls");
				HX_STACK_LINE(940)
				if (((ls > (t * t)))){
					HX_STACK_LINE(950)
					Float t1 = (t * ((Float(1.0) / Float(::Math_obj::sqrt(ls)))));		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(959)
					hx::MultEq(this->jAccx,t1);
					HX_STACK_LINE(960)
					hx::MultEq(this->jAccy,t1);
				}
			}
		}
		HX_STACK_LINE(965)
		{
			HX_STACK_LINE(966)
			Jx = (this->jAccx - jOldx);
			HX_STACK_LINE(967)
			Jy = (this->jAccy - jOldy);
		}
	}
	HX_STACK_LINE(970)
	{
		HX_STACK_LINE(1002)
		{
			HX_STACK_LINE(1003)
			Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1012)
			hx::SubEq(this->b1->velx,(Jx * t));
			HX_STACK_LINE(1013)
			hx::SubEq(this->b1->vely,(Jy * t));
		}
		HX_STACK_LINE(1015)
		{
			HX_STACK_LINE(1016)
			Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1025)
			hx::AddEq(this->b2->velx,(Jx * t));
			HX_STACK_LINE(1026)
			hx::AddEq(this->b2->vely,(Jy * t));
		}
		HX_STACK_LINE(1028)
		hx::SubEq(this->b1->angvel,((((Jy * this->a1relx) - (Jx * this->a1rely))) * this->b1->iinertia));
		HX_STACK_LINE(1029)
		hx::AddEq(this->b2->angvel,((((Jy * this->a2relx) - (Jx * this->a2rely))) * this->b2->iinertia));
	}
	HX_STACK_LINE(1032)
	return false;
}


Void ZPP_PivotJoint_obj::warmStart( ){
{
		HX_STACK_PUSH("ZPP_PivotJoint::warmStart","zpp_nape/constraint/PivotJoint.hx",794);
		HX_STACK_THIS(this);
		HX_STACK_LINE(827)
		{
			HX_STACK_LINE(828)
			Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(837)
			hx::SubEq(this->b1->velx,(this->jAccx * t));
			HX_STACK_LINE(838)
			hx::SubEq(this->b1->vely,(this->jAccy * t));
		}
		HX_STACK_LINE(840)
		{
			HX_STACK_LINE(841)
			Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(850)
			hx::AddEq(this->b2->velx,(this->jAccx * t));
			HX_STACK_LINE(851)
			hx::AddEq(this->b2->vely,(this->jAccy * t));
		}
		HX_STACK_LINE(853)
		hx::SubEq(this->b1->angvel,((((this->jAccy * this->a1relx) - (this->jAccx * this->a1rely))) * this->b1->iinertia));
		HX_STACK_LINE(854)
		hx::AddEq(this->b2->angvel,((((this->jAccy * this->a2relx) - (this->jAccx * this->a2rely))) * this->b2->iinertia));
	}
return null();
}


bool ZPP_PivotJoint_obj::preStep( Float dt){
	HX_STACK_PUSH("ZPP_PivotJoint::preStep","zpp_nape/constraint/PivotJoint.hx",615);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dt,"dt");
	HX_STACK_LINE(616)
	if (((this->pre_dt == -1.0))){
		HX_STACK_LINE(616)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(617)
	Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(618)
	this->pre_dt = dt;
	HX_STACK_LINE(619)
	this->stepped = true;
	HX_STACK_LINE(620)
	{
		HX_STACK_LINE(621)
		this->a1relx = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(622)
		this->a1rely = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(624)
	{
		HX_STACK_LINE(625)
		this->a2relx = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(626)
		this->a2rely = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(628)
	{
		HX_STACK_LINE(629)
		Float m = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(630)
		{
			HX_STACK_LINE(631)
			this->kMassa = m;
			HX_STACK_LINE(632)
			this->kMassb = (int)0;
			HX_STACK_LINE(633)
			this->kMassc = m;
		}
		HX_STACK_LINE(635)
		if (((this->b1->sinertia != (int)0))){
			HX_STACK_LINE(636)
			Float X = (this->a1relx * this->b1->sinertia);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(637)
			Float Y = (this->a1rely * this->b1->sinertia);		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(639)
				hx::AddEq(this->kMassa,(Y * this->a1rely));
				HX_STACK_LINE(640)
				hx::AddEq(this->kMassb,(-(Y) * this->a1relx));
				HX_STACK_LINE(641)
				hx::AddEq(this->kMassc,(X * this->a1relx));
			}
		}
		HX_STACK_LINE(644)
		if (((this->b2->sinertia != (int)0))){
			HX_STACK_LINE(645)
			Float X = (this->a2relx * this->b2->sinertia);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(646)
			Float Y = (this->a2rely * this->b2->sinertia);		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(647)
			{
				HX_STACK_LINE(648)
				hx::AddEq(this->kMassa,(Y * this->a2rely));
				HX_STACK_LINE(649)
				hx::AddEq(this->kMassb,(-(Y) * this->a2relx));
				HX_STACK_LINE(650)
				hx::AddEq(this->kMassc,(X * this->a2relx));
			}
		}
	}
	struct _Function_1_1{
		inline static int Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",654);
			{
				HX_STACK_LINE(655)
				Float det = ((__this->kMassa * __this->kMassc) - (__this->kMassb * __this->kMassb));		HX_STACK_VAR(det,"det");
				struct _Function_2_1{
					inline static int Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",656);
						{
							HX_STACK_LINE(657)
							__this->kMassa = __this->kMassb = __this->kMassc = (int)0;
							HX_STACK_LINE(658)
							return (int)3;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static int Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",660);
						{
							HX_STACK_LINE(661)
							int flag = (int)0;		HX_STACK_VAR(flag,"flag");
							HX_STACK_LINE(662)
							if (((__this->kMassa != (int)0))){
								HX_STACK_LINE(662)
								__this->kMassa = (Float((int)1) / Float(__this->kMassa));
							}
							else{
								HX_STACK_LINE(664)
								__this->kMassa = (int)0;
								HX_STACK_LINE(665)
								hx::OrEq(flag,(int)1);
							}
							HX_STACK_LINE(667)
							if (((__this->kMassc != (int)0))){
								HX_STACK_LINE(667)
								__this->kMassc = (Float((int)1) / Float(__this->kMassc));
							}
							else{
								HX_STACK_LINE(669)
								__this->kMassc = (int)0;
								HX_STACK_LINE(670)
								hx::OrEq(flag,(int)2);
							}
							HX_STACK_LINE(672)
							__this->kMassb = (int)0;
							HX_STACK_LINE(673)
							return flag;
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static int Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this,Float &det){
						HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",675);
						{
							HX_STACK_LINE(676)
							det = (Float((int)1) / Float(det));
							HX_STACK_LINE(677)
							Float t = (__this->kMassc * det);		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(678)
							__this->kMassc = (__this->kMassa * det);
							HX_STACK_LINE(679)
							__this->kMassa = t;
							HX_STACK_LINE(680)
							hx::MultEq(__this->kMassb,-(det));
							HX_STACK_LINE(681)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(656)
				return (  (((det != det))) ? int(_Function_2_1::Block(__this)) : int((  (((det == (int)0))) ? int(_Function_2_2::Block(__this)) : int(_Function_2_3::Block(__this,det)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(654)
	int flag = _Function_1_1::Block(this);		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(684)
	if (((((int(flag) & int((int)1))) != (int)0))){
		HX_STACK_LINE(684)
		this->jAccx = (int)0;
	}
	HX_STACK_LINE(685)
	if (((((int(flag) & int((int)2))) != (int)0))){
		HX_STACK_LINE(685)
		this->jAccy = (int)0;
	}
	HX_STACK_LINE(686)
	if ((!(this->stiff))){
		HX_STACK_LINE(687)
		Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
		HX_STACK_LINE(688)
		{
			struct _Function_3_1{
				inline static Float Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this,Float &dt,Float &biasCoef){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",689);
					{
						HX_STACK_LINE(690)
						Float omega = (((int)2 * ::Math_obj::PI) * __this->frequency);		HX_STACK_VAR(omega,"omega");
						HX_STACK_LINE(691)
						__this->gamma = (Float((int)1) / Float((((dt * omega) * ((((int)2 * __this->damping) + (omega * dt)))))));
						HX_STACK_LINE(692)
						Float ig = (Float((int)1) / Float((((int)1 + __this->gamma))));		HX_STACK_VAR(ig,"ig");
						HX_STACK_LINE(693)
						biasCoef = (((dt * omega) * omega) * __this->gamma);
						HX_STACK_LINE(694)
						hx::MultEq(__this->gamma,ig);
						HX_STACK_LINE(695)
						return ig;
					}
					return null();
				}
			};
			HX_STACK_LINE(689)
			Float X = _Function_3_1::Block(this,dt,biasCoef);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(697)
			hx::MultEq(this->kMassa,X);
			HX_STACK_LINE(698)
			hx::MultEq(this->kMassb,X);
			HX_STACK_LINE(699)
			hx::MultEq(this->kMassc,X);
		}
		HX_STACK_LINE(701)
		{
			HX_STACK_LINE(702)
			this->biasx = ((this->b2->posx + this->a2relx) - ((this->b1->posx + this->a1relx)));
			HX_STACK_LINE(703)
			this->biasy = ((this->b2->posy + this->a2rely) - ((this->b1->posy + this->a1rely)));
		}
		HX_STACK_LINE(705)
		if (((bool(this->breakUnderError) && bool((((this->biasx * this->biasx) + (this->biasy * this->biasy)) > (this->maxError * this->maxError)))))){
			HX_STACK_LINE(705)
			return true;
		}
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(707)
			Float t = -(biasCoef);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(716)
			hx::MultEq(this->biasx,t);
			HX_STACK_LINE(717)
			hx::MultEq(this->biasy,t);
		}
		HX_STACK_LINE(719)
		{
			HX_STACK_LINE(720)
			Float t = this->maxError;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(729)
			Float ls = ((this->biasx * this->biasx) + (this->biasy * this->biasy));		HX_STACK_VAR(ls,"ls");
			HX_STACK_LINE(730)
			if (((ls > (t * t)))){
				HX_STACK_LINE(740)
				Float t1 = (t * ((Float(1.0) / Float(::Math_obj::sqrt(ls)))));		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(749)
				hx::MultEq(this->biasx,t1);
				HX_STACK_LINE(750)
				hx::MultEq(this->biasy,t1);
			}
		}
	}
	else{
		HX_STACK_LINE(756)
		{
			HX_STACK_LINE(757)
			this->biasx = (int)0;
			HX_STACK_LINE(758)
			this->biasy = (int)0;
			HX_STACK_LINE(767)
			{
			}
		}
		HX_STACK_LINE(776)
		this->gamma = (int)0;
	}
	HX_STACK_LINE(778)
	{
		HX_STACK_LINE(779)
		Float t = dtratio;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(788)
		hx::MultEq(this->jAccx,t);
		HX_STACK_LINE(789)
		hx::MultEq(this->jAccy,t);
	}
	HX_STACK_LINE(791)
	this->jMax = (this->maxForce * dt);
	HX_STACK_LINE(792)
	return false;
}


Void ZPP_PivotJoint_obj::clearcache( ){
{
		HX_STACK_PUSH("ZPP_PivotJoint::clearcache","zpp_nape/constraint/PivotJoint.hx",592);
		HX_STACK_THIS(this);
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(594)
			this->jAccx = (int)0;
			HX_STACK_LINE(595)
			this->jAccy = (int)0;
			HX_STACK_LINE(604)
			{
			}
		}
		HX_STACK_LINE(613)
		this->pre_dt = -1.0;
	}
return null();
}


bool ZPP_PivotJoint_obj::pair_exists( int id,int di){
	HX_STACK_PUSH("ZPP_PivotJoint::pair_exists","zpp_nape/constraint/PivotJoint.hx",589);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(589)
	return (bool((bool((this->b1->id == id)) && bool((this->b2->id == di)))) || bool((bool((this->b1->id == di)) && bool((this->b2->id == id)))));
}


Void ZPP_PivotJoint_obj::forest( ){
{
		HX_STACK_PUSH("ZPP_PivotJoint::forest","zpp_nape/constraint/PivotJoint.hx",491);
		HX_STACK_THIS(this);
		HX_STACK_LINE(492)
		if (((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",495);
					{
						HX_STACK_LINE(496)
						::zpp_nape::space::ZPP_Component obj = __this->b1->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(497)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(498)
						while(((obj != obj->parent))){
							HX_STACK_LINE(499)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(500)
							obj->parent = stack;
							HX_STACK_LINE(501)
							stack = obj;
							HX_STACK_LINE(502)
							obj = nxt;
						}
						HX_STACK_LINE(504)
						while(((stack != null()))){
							HX_STACK_LINE(505)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(506)
							stack->parent = obj;
							HX_STACK_LINE(507)
							stack = nxt;
						}
						HX_STACK_LINE(509)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(493)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b1->component == this->b1->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b1->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",514);
					{
						HX_STACK_LINE(515)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(516)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(517)
						while(((obj != obj->parent))){
							HX_STACK_LINE(518)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(519)
							obj->parent = stack;
							HX_STACK_LINE(520)
							stack = obj;
							HX_STACK_LINE(521)
							obj = nxt;
						}
						HX_STACK_LINE(523)
						while(((stack != null()))){
							HX_STACK_LINE(524)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(525)
							stack->parent = obj;
							HX_STACK_LINE(526)
							stack = nxt;
						}
						HX_STACK_LINE(528)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(512)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(531)
			if (((xr != yr))){
				HX_STACK_LINE(531)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(532)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(533)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(533)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(535)
						yr->parent = xr;
						HX_STACK_LINE(536)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(540)
		if (((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",543);
					{
						HX_STACK_LINE(544)
						::zpp_nape::space::ZPP_Component obj = __this->b2->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(545)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(546)
						while(((obj != obj->parent))){
							HX_STACK_LINE(547)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(548)
							obj->parent = stack;
							HX_STACK_LINE(549)
							stack = obj;
							HX_STACK_LINE(550)
							obj = nxt;
						}
						HX_STACK_LINE(552)
						while(((stack != null()))){
							HX_STACK_LINE(553)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(554)
							stack->parent = obj;
							HX_STACK_LINE(555)
							stack = nxt;
						}
						HX_STACK_LINE(557)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(541)
			::zpp_nape::space::ZPP_Component xr = (  (((this->b2->component == this->b2->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->b2->component) : ::zpp_nape::space::ZPP_Component(_Function_2_1::Block(this)) );		HX_STACK_VAR(xr,"xr");
			struct _Function_2_2{
				inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",562);
					{
						HX_STACK_LINE(563)
						::zpp_nape::space::ZPP_Component obj = __this->component;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(564)
						::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(565)
						while(((obj != obj->parent))){
							HX_STACK_LINE(566)
							::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(567)
							obj->parent = stack;
							HX_STACK_LINE(568)
							stack = obj;
							HX_STACK_LINE(569)
							obj = nxt;
						}
						HX_STACK_LINE(571)
						while(((stack != null()))){
							HX_STACK_LINE(572)
							::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
							HX_STACK_LINE(573)
							stack->parent = obj;
							HX_STACK_LINE(574)
							stack = nxt;
						}
						HX_STACK_LINE(576)
						return obj;
					}
					return null();
				}
			};
			HX_STACK_LINE(560)
			::zpp_nape::space::ZPP_Component yr = (  (((this->component == this->component->parent))) ? ::zpp_nape::space::ZPP_Component(this->component) : ::zpp_nape::space::ZPP_Component(_Function_2_2::Block(this)) );		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(579)
			if (((xr != yr))){
				HX_STACK_LINE(579)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(580)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(581)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(581)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(583)
						yr->parent = xr;
						HX_STACK_LINE(584)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


Void ZPP_PivotJoint_obj::wake_connected( ){
{
		HX_STACK_PUSH("ZPP_PivotJoint::wake_connected","zpp_nape/constraint/PivotJoint.hx",487);
		HX_STACK_THIS(this);
		HX_STACK_LINE(488)
		if (((bool((this->b1 != null())) && bool((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(488)
			this->b1->wake();
		}
		HX_STACK_LINE(489)
		if (((bool((this->b2 != null())) && bool((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(489)
			this->b2->wake();
		}
	}
return null();
}


Void ZPP_PivotJoint_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_PivotJoint::validate","zpp_nape/constraint/PivotJoint.hx",481);
		HX_STACK_THIS(this);
		HX_STACK_LINE(482)
		if (((bool((this->b1 == null())) || bool((this->b2 == null()))))){
			HX_STACK_LINE(482)
			hx::Throw (HX_CSTRING("Error: PivotJoint cannot be simulated null bodies"));
		}
		HX_STACK_LINE(483)
		if (((this->b1 == this->b2))){
			HX_STACK_LINE(483)
			hx::Throw (((HX_CSTRING("Error: PivotJoint cannot be simulated with body1 == body2 (body1=body2=") + this->b1->outer->toString()) + HX_CSTRING(")")));
		}
		HX_STACK_LINE(484)
		if (((bool((this->b1->space != this->space)) || bool((this->b2->space != this->space))))){
			HX_STACK_LINE(484)
			hx::Throw (((((HX_CSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned (body1=") + this->b1->outer->toString()) + HX_CSTRING(", body2=")) + this->b2->outer->toString()) + HX_CSTRING(")")));
		}
		HX_STACK_LINE(485)
		if (((bool(!(((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) && bool(!(((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))))){
			HX_STACK_LINE(485)
			hx::Throw (((((HX_CSTRING("Error: Constraints cannot have both bodies non-dynamic (body1=") + this->b1->outer->toString()) + HX_CSTRING(", body2=")) + this->b2->outer->toString()) + HX_CSTRING(")")));
		}
	}
return null();
}


::nape::constraint::Constraint ZPP_PivotJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_PUSH("ZPP_PivotJoint::copy","zpp_nape/constraint/PivotJoint.hx",325);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dict,"dict");
	HX_STACK_ARG(todo,"todo");
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",326);
			{
				HX_STACK_LINE(326)
				::nape::constraint::PivotJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(326)
				if (((_this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(326)
					_this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(326)
				return _this->zpp_inner_zn->wrap_a1;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",326);
			{
				HX_STACK_LINE(326)
				::nape::constraint::PivotJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(326)
				if (((_this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(326)
					_this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(326)
				return _this->zpp_inner_zn->wrap_a2;
			}
			return null();
		}
	};
	HX_STACK_LINE(326)
	Array< ::Dynamic > ret = Array_obj< ::Dynamic >::__new().Add(::nape::constraint::PivotJoint_obj::__new(null(),null(),_Function_1_1::Block(this),_Function_1_2::Block(this)));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(327)
	this->copyto(ret->__get((int)0).StaticCast< ::nape::constraint::PivotJoint >());
	HX_STACK_LINE(328)
	if (((bool((dict != null())) && bool((this->b1 != null()))))){
		HX_STACK_LINE(338)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(339)
		{
			HX_STACK_LINE(339)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(339)
			while(((_g < dict->length))){
				HX_STACK_LINE(339)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(339)
				++(_g);
				HX_STACK_LINE(340)
				if (((idc->id == this->b1->id))){
					HX_STACK_LINE(341)
					b = idc->bc;
					HX_STACK_LINE(342)
					break;
				}
			}
		}
		HX_STACK_LINE(345)
		if (((b != null()))){
			HX_STACK_LINE(345)
			ret->__get((int)0).StaticCast< ::nape::constraint::PivotJoint >()->zpp_inner_zn->b1 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/PivotJoint.hx",346);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(346)
					ret->__get((int)0).StaticCast< ::nape::constraint::PivotJoint >()->zpp_inner_zn->b1 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(346)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b1->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(349)
	if (((bool((dict != null())) && bool((this->b2 != null()))))){
		HX_STACK_LINE(359)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(360)
		{
			HX_STACK_LINE(360)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(360)
			while(((_g < dict->length))){
				HX_STACK_LINE(360)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(360)
				++(_g);
				HX_STACK_LINE(361)
				if (((idc->id == this->b2->id))){
					HX_STACK_LINE(362)
					b = idc->bc;
					HX_STACK_LINE(363)
					break;
				}
			}
		}
		HX_STACK_LINE(366)
		if (((b != null()))){
			HX_STACK_LINE(366)
			ret->__get((int)0).StaticCast< ::nape::constraint::PivotJoint >()->zpp_inner_zn->b2 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_PUSH("*::_Function_3_1","zpp_nape/constraint/PivotJoint.hx",367);
				HX_STACK_ARG(b1,"b1");
				{
					HX_STACK_LINE(367)
					ret->__get((int)0).StaticCast< ::nape::constraint::PivotJoint >()->zpp_inner_zn->b2 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(367)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b2->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(370)
	return ret->__get((int)0).StaticCast< ::nape::constraint::PivotJoint >();
}


Void ZPP_PivotJoint_obj::setup_a2( ){
{
		HX_STACK_PUSH("ZPP_PivotJoint::setup_a2","zpp_nape/constraint/PivotJoint.hx",308);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",309);
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
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",309);
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
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",309);
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
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",309);
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


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PivotJoint_obj,setup_a2,(void))

Void ZPP_PivotJoint_obj::invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_PivotJoint::invalidate_a2","zpp_nape/constraint/PivotJoint.hx",284);
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


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PivotJoint_obj,invalidate_a2,(void))

Void ZPP_PivotJoint_obj::validate_a2( ){
{
		HX_STACK_PUSH("ZPP_PivotJoint::validate_a2","zpp_nape/constraint/PivotJoint.hx",262);
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


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PivotJoint_obj,validate_a2,(void))

Void ZPP_PivotJoint_obj::setup_a1( ){
{
		HX_STACK_PUSH("ZPP_PivotJoint::setup_a1","zpp_nape/constraint/PivotJoint.hx",250);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_PivotJoint_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",251);
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
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",251);
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
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",251);
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
								HX_STACK_PUSH("*::closure","zpp_nape/constraint/PivotJoint.hx",251);
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


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PivotJoint_obj,setup_a1,(void))

Void ZPP_PivotJoint_obj::invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_PivotJoint::invalidate_a1","zpp_nape/constraint/PivotJoint.hx",226);
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


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PivotJoint_obj,invalidate_a1,(void))

Void ZPP_PivotJoint_obj::validate_a1( ){
{
		HX_STACK_PUSH("ZPP_PivotJoint::validate_a1","zpp_nape/constraint/PivotJoint.hx",204);
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


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PivotJoint_obj,validate_a1,(void))

Void ZPP_PivotJoint_obj::inactiveBodies( ){
{
		HX_STACK_PUSH("ZPP_PivotJoint::inactiveBodies","zpp_nape/constraint/PivotJoint.hx",191);
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


Void ZPP_PivotJoint_obj::activeBodies( ){
{
		HX_STACK_PUSH("ZPP_PivotJoint::activeBodies","zpp_nape/constraint/PivotJoint.hx",183);
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


::nape::geom::Vec3 ZPP_PivotJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_PUSH("ZPP_PivotJoint::bodyImpulse","zpp_nape/constraint/PivotJoint.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(176)
	if ((this->stepped)){
		HX_STACK_LINE(177)
		if (((b == this->b1))){
			HX_STACK_LINE(178)
			return ::nape::geom::Vec3_obj::get(-(this->jAccx),-(this->jAccy),-((((this->jAccy * this->a1relx) - (this->jAccx * this->a1rely)))));
		}
		else{
			HX_STACK_LINE(179)
			return ::nape::geom::Vec3_obj::get(this->jAccx,this->jAccy,((this->jAccy * this->a2relx) - (this->jAccx * this->a2rely)));
		}
	}
	else{
		HX_STACK_LINE(181)
		return ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	}
	HX_STACK_LINE(176)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PivotJoint_obj,bodyImpulse,return )


ZPP_PivotJoint_obj::ZPP_PivotJoint_obj()
{
}

void ZPP_PivotJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PivotJoint);
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	HX_MARK_MEMBER_NAME(biasy,"biasy");
	HX_MARK_MEMBER_NAME(biasx,"biasx");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(jAccy,"jAccy");
	HX_MARK_MEMBER_NAME(jAccx,"jAccx");
	HX_MARK_MEMBER_NAME(kMassc,"kMassc");
	HX_MARK_MEMBER_NAME(kMassb,"kMassb");
	HX_MARK_MEMBER_NAME(kMassa,"kMassa");
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

void ZPP_PivotJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	HX_VISIT_MEMBER_NAME(biasy,"biasy");
	HX_VISIT_MEMBER_NAME(biasx,"biasx");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(jAccy,"jAccy");
	HX_VISIT_MEMBER_NAME(jAccx,"jAccx");
	HX_VISIT_MEMBER_NAME(kMassc,"kMassc");
	HX_VISIT_MEMBER_NAME(kMassb,"kMassb");
	HX_VISIT_MEMBER_NAME(kMassa,"kMassa");
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

Dynamic ZPP_PivotJoint_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"biasy") ) { return biasy; }
		if (HX_FIELD_EQ(inName,"biasx") ) { return biasx; }
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		if (HX_FIELD_EQ(inName,"jAccy") ) { return jAccy; }
		if (HX_FIELD_EQ(inName,"jAccx") ) { return jAccx; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		if (HX_FIELD_EQ(inName,"kMassc") ) { return kMassc; }
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

Dynamic ZPP_PivotJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"biasy") ) { biasy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"biasx") ) { biasx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAccy") ) { jAccy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAccx") ) { jAccx=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"kMassc") ) { kMassc=inValue.Cast< Float >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::PivotJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_PivotJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stepped"));
	outFields->push(HX_CSTRING("biasy"));
	outFields->push(HX_CSTRING("biasx"));
	outFields->push(HX_CSTRING("gamma"));
	outFields->push(HX_CSTRING("jMax"));
	outFields->push(HX_CSTRING("jAccy"));
	outFields->push(HX_CSTRING("jAccx"));
	outFields->push(HX_CSTRING("kMassc"));
	outFields->push(HX_CSTRING("kMassb"));
	outFields->push(HX_CSTRING("kMassa"));
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
	HX_CSTRING("biasy"),
	HX_CSTRING("biasx"),
	HX_CSTRING("gamma"),
	HX_CSTRING("jMax"),
	HX_CSTRING("jAccy"),
	HX_CSTRING("jAccx"),
	HX_CSTRING("kMassc"),
	HX_CSTRING("kMassb"),
	HX_CSTRING("kMassa"),
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
	HX_MARK_MEMBER_NAME(ZPP_PivotJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PivotJoint_obj::__mClass,"__mClass");
};

Class ZPP_PivotJoint_obj::__mClass;

void ZPP_PivotJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_PivotJoint"), hx::TCanCast< ZPP_PivotJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_PivotJoint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
