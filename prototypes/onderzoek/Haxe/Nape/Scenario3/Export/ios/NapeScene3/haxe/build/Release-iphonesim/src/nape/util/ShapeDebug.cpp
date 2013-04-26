#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_nape_util_ShapeDebug
#include <nape/util/ShapeDebug.h>
#endif
#ifndef INCLUDED_native_display_CapsStyle
#include <native/display/CapsStyle.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
#endif
#ifndef INCLUDED_native_display_JointStyle
#include <native/display/JointStyle.h>
#endif
#ifndef INCLUDED_native_display_LineScaleMode
#include <native/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace util{

Void ShapeDebug_obj::__construct(int width,int height,hx::Null< int >  __o_bgColour)
{
HX_STACK_PUSH("ShapeDebug::new","nape/util/ShapeDebug.hx",182);
int bgColour = __o_bgColour.Default(3355443);
{
	HX_STACK_LINE(191)
	this->thickness = 0.0;
	HX_STACK_LINE(186)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(209)
	if (((width <= (int)0))){
		HX_STACK_LINE(209)
		hx::Throw (HX_CSTRING("Error: Debug width must be > 0"));
	}
	HX_STACK_LINE(212)
	if (((height <= (int)0))){
		HX_STACK_LINE(212)
		hx::Throw (HX_CSTRING("Error: Debug height must be > 0"));
	}
	HX_STACK_LINE(215)
	::zpp_nape::util::ZPP_Debug_obj::internal = true;
	HX_STACK_LINE(217)
	super::__construct();
	HX_STACK_LINE(219)
	::zpp_nape::util::ZPP_Debug_obj::internal = false;
	HX_STACK_LINE(221)
	this->zpp_inner_zn = ::zpp_nape::util::ZPP_ShapeDebug_obj::__new(width,height);
	HX_STACK_LINE(222)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(223)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(224)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		this->zpp_inner->d_shape->setbg(bgColour);
		HX_STACK_LINE(225)
		this->zpp_inner->bg_col;
	}
	HX_STACK_LINE(226)
	this->thickness = 0.1;
}
;
	return null();
}

ShapeDebug_obj::~ShapeDebug_obj() { }

Dynamic ShapeDebug_obj::__CreateEmpty() { return  new ShapeDebug_obj; }
hx::ObjectPtr< ShapeDebug_obj > ShapeDebug_obj::__new(int width,int height,hx::Null< int >  __o_bgColour)
{  hx::ObjectPtr< ShapeDebug_obj > result = new ShapeDebug_obj();
	result->__construct(width,height,__o_bgColour);
	return result;}

Dynamic ShapeDebug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeDebug_obj > result = new ShapeDebug_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ShapeDebug_obj::drawSpring( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour,hx::Null< int >  __o_coils,hx::Null< Float >  __o_radius){
int coils = __o_coils.Default(3);
Float radius = __o_radius.Default(3.0);
	HX_STACK_PUSH("ShapeDebug::drawSpring","nape/util/ShapeDebug.hx",1223);
	HX_STACK_THIS(this);
	HX_STACK_ARG(start,"start");
	HX_STACK_ARG(end,"end");
	HX_STACK_ARG(colour,"colour");
	HX_STACK_ARG(coils,"coils");
	HX_STACK_ARG(radius,"radius");
{
		HX_STACK_LINE(1224)
		if (((bool((start != null())) && bool(start->zpp_disp)))){
			HX_STACK_LINE(1226)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1229)
		if (((bool((end != null())) && bool(end->zpp_disp)))){
			HX_STACK_LINE(1231)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1235)
		if (((start == null()))){
			HX_STACK_LINE(1235)
			hx::Throw (HX_CSTRING("Error: drawCurve::start cannot be null"));
		}
		HX_STACK_LINE(1238)
		if (((end == null()))){
			HX_STACK_LINE(1238)
			hx::Throw (HX_CSTRING("Error: drawCurve::end cannot be null"));
		}
		HX_STACK_LINE(1241)
		if (((coils < (int)0))){
			HX_STACK_LINE(1241)
			hx::Throw (HX_CSTRING("Error: drawCurve::coils must be >= 0"));
		}
		HX_STACK_LINE(1243)
		if (((coils == (int)0))){
			HX_STACK_LINE(1243)
			this->drawLine(start,end,colour);
		}
		else{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1245);
					{
						HX_STACK_LINE(1245)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(1245)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1245)
						{
							HX_STACK_LINE(1245)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1245)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1245)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1245)
						return end->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1245);
					{
						HX_STACK_LINE(1245)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(1245)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1245)
						{
							HX_STACK_LINE(1245)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1245)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1245)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1245)
						return start->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(1245)
			Float dx = (_Function_2_1::Block(end) - _Function_2_2::Block(start));		HX_STACK_VAR(dx,"dx");
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1246);
					{
						HX_STACK_LINE(1246)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(1246)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1246)
						{
							HX_STACK_LINE(1246)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1246)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1246)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1246)
						return end->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1246);
					{
						HX_STACK_LINE(1246)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(1246)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1246)
						{
							HX_STACK_LINE(1246)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1246)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1246)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1246)
						return start->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1246)
			Float dy = (_Function_2_3::Block(end) - _Function_2_4::Block(start));		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1247)
			{
			}
			HX_STACK_LINE(1255)
			{
			}
			HX_STACK_LINE(1263)
			{
				HX_STACK_LINE(1264)
				Float t = (Float(1.0) / Float(((coils * (int)4))));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1265)
				{
				}
				HX_STACK_LINE(1273)
				hx::MultEq(dx,t);
				HX_STACK_LINE(1274)
				hx::MultEq(dy,t);
			}
			HX_STACK_LINE(1276)
			Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1277)
			Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
			HX_STACK_LINE(1278)
			{
				HX_STACK_LINE(1279)
				nx = dx;
				HX_STACK_LINE(1280)
				ny = dy;
				HX_STACK_LINE(1281)
				{
				}
				HX_STACK_LINE(1289)
				{
				}
			}
			HX_STACK_LINE(1298)
			if (((((nx * nx) + (ny * ny)) < 0.1))){
				HX_STACK_LINE(1298)
				return null();
			}
			HX_STACK_LINE(1299)
			{
				HX_STACK_LINE(1300)
				{
					HX_STACK_LINE(1301)
					Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1302)
					{
					}
					struct _Function_4_1{
						inline static Float Block( Float &d){
							HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1310);
							{
								HX_STACK_LINE(1310)
								{
								}
								struct _Function_5_1{
									inline static Float Block( Float &d){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1310);
										{
											HX_STACK_LINE(1310)
											{
											}
											HX_STACK_LINE(1310)
											return ::Math_obj::sqrt(d);
										}
										return null();
									}
								};
								HX_STACK_LINE(1310)
								return (Float(1.0) / Float(_Function_5_1::Block(d)));
							}
							return null();
						}
					};
					HX_STACK_LINE(1310)
					Float imag = _Function_4_1::Block(d);		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(1311)
					{
						HX_STACK_LINE(1312)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1313)
						{
						}
						HX_STACK_LINE(1321)
						hx::MultEq(nx,t);
						HX_STACK_LINE(1322)
						hx::MultEq(ny,t);
					}
				}
				HX_STACK_LINE(1325)
				{
					HX_STACK_LINE(1326)
					Float t = nx;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1327)
					nx = -(ny);
					HX_STACK_LINE(1328)
					ny = t;
				}
			}
			HX_STACK_LINE(1331)
			{
				HX_STACK_LINE(1332)
				Float t = (radius * (int)2);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1333)
				{
				}
				HX_STACK_LINE(1341)
				hx::MultEq(nx,t);
				HX_STACK_LINE(1342)
				hx::MultEq(ny,t);
			}
			struct _Function_2_5{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1344);
					{
						HX_STACK_LINE(1344)
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(1344)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(1344)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						struct _Function_3_1{
							inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &start,bool &weak){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1344);
								{
									struct _Function_4_1{
										inline static Float Block( ::nape::geom::Vec2 &start){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1344);
											{
												HX_STACK_LINE(1344)
												if ((start->zpp_disp)){
													HX_STACK_LINE(1344)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1344)
												{
													HX_STACK_LINE(1344)
													::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1344)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(1344)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1344)
												return start->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_4_2{
										inline static Float Block( ::nape::geom::Vec2 &start){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1344);
											{
												HX_STACK_LINE(1344)
												if ((start->zpp_disp)){
													HX_STACK_LINE(1344)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1344)
												{
													HX_STACK_LINE(1344)
													::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1344)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(1344)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1344)
												return start->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(1344)
									Float x = _Function_4_1::Block(start);		HX_STACK_VAR(x,"x");
									Float y = _Function_4_2::Block(start);		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1344)
									if (((bool((x != x)) || bool((y != y))))){
										HX_STACK_LINE(1344)
										hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
									}
									HX_STACK_LINE(1344)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1344)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1344)
										ret = ::nape::geom::Vec2_obj::__new(null(),null());
									}
									else{
										HX_STACK_LINE(1344)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1344)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1344)
										ret->zpp_pool = null();
										HX_STACK_LINE(1344)
										ret->zpp_disp = false;
										HX_STACK_LINE(1344)
										if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
											HX_STACK_LINE(1344)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
										}
									}
									HX_STACK_LINE(1344)
									if (((ret->zpp_inner == null()))){
										struct _Function_5_1{
											inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1344);
												{
													HX_STACK_LINE(1344)
													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
													HX_STACK_LINE(1344)
													::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1344)
													{
														HX_STACK_LINE(1344)
														if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
															HX_STACK_LINE(1344)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
														}
														else{
															HX_STACK_LINE(1344)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
															HX_STACK_LINE(1344)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1344)
															ret1->next = null();
														}
														HX_STACK_LINE(1344)
														ret1->weak = false;
													}
													HX_STACK_LINE(1344)
													ret1->_immutable = immutable;
													HX_STACK_LINE(1344)
													{
														HX_STACK_LINE(1344)
														ret1->x = x;
														HX_STACK_LINE(1344)
														ret1->y = y;
														HX_STACK_LINE(1344)
														{
														}
														HX_STACK_LINE(1344)
														{
														}
													}
													HX_STACK_LINE(1344)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(1344)
										ret->zpp_inner = _Function_5_1::Block(x,y);
										HX_STACK_LINE(1344)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1344)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1344)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1344)
										{
											HX_STACK_LINE(1344)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1344)
											if ((_this->_immutable)){
												HX_STACK_LINE(1344)
												hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(1344)
											if (((_this->_isimmutable_dyn() != null()))){
												HX_STACK_LINE(1344)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(1344)
										if (((bool((x != x)) || bool((y != y))))){
											HX_STACK_LINE(1344)
											hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
										}
										struct _Function_5_1{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1344);
												{
													HX_STACK_LINE(1344)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(1344)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1344)
													{
														HX_STACK_LINE(1344)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1344)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(1344)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1344)
													return ret->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_5_2{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1344);
												{
													HX_STACK_LINE(1344)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(1344)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1344)
													{
														HX_STACK_LINE(1344)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1344)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(1344)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1344)
													return ret->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(1344)
										if ((!(((bool((_Function_5_1::Block(ret) == x)) && bool((_Function_5_2::Block(ret) == y))))))){
											HX_STACK_LINE(1344)
											{
												HX_STACK_LINE(1344)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1344)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1344)
												{
												}
												HX_STACK_LINE(1344)
												{
												}
											}
											HX_STACK_LINE(1344)
											{
												HX_STACK_LINE(1344)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1344)
												if (((_this->_invalidate_dyn() != null()))){
													HX_STACK_LINE(1344)
													_this->_invalidate(_this);
												}
											}
										}
										HX_STACK_LINE(1344)
										ret;
									}
									HX_STACK_LINE(1344)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1344)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(1344)
						return _Function_3_1::Block(start,weak);
					}
					return null();
				}
			};
			HX_STACK_LINE(1344)
			::nape::geom::Vec2 u = _Function_2_5::Block(start);		HX_STACK_VAR(u,"u");
			struct _Function_2_6{
				inline static ::nape::geom::Vec2 Block( ){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1345);
					{
						HX_STACK_LINE(1345)
						Float x = (int)0;		HX_STACK_VAR(x,"x");
						Float y = (int)0;		HX_STACK_VAR(y,"y");
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(1345)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1345)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						HX_STACK_LINE(1345)
						::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1345)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(1345)
							ret = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(1345)
							ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(1345)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(1345)
							ret->zpp_pool = null();
							HX_STACK_LINE(1345)
							ret->zpp_disp = false;
							HX_STACK_LINE(1345)
							if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(1345)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(1345)
						if (((ret->zpp_inner == null()))){
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1345);
									{
										HX_STACK_LINE(1345)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(1345)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(1345)
										{
											HX_STACK_LINE(1345)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(1345)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
											}
											else{
												HX_STACK_LINE(1345)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1345)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(1345)
												ret1->next = null();
											}
											HX_STACK_LINE(1345)
											ret1->weak = false;
										}
										HX_STACK_LINE(1345)
										ret1->_immutable = immutable;
										HX_STACK_LINE(1345)
										{
											HX_STACK_LINE(1345)
											ret1->x = x;
											HX_STACK_LINE(1345)
											ret1->y = y;
											HX_STACK_LINE(1345)
											{
											}
											HX_STACK_LINE(1345)
											{
											}
										}
										HX_STACK_LINE(1345)
										return ret1;
									}
									return null();
								}
							};
							HX_STACK_LINE(1345)
							ret->zpp_inner = _Function_4_1::Block(x,y);
							HX_STACK_LINE(1345)
							ret->zpp_inner->outer = ret;
						}
						else{
							HX_STACK_LINE(1345)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(1345)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1345)
							{
								HX_STACK_LINE(1345)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1345)
								if ((_this->_immutable)){
									HX_STACK_LINE(1345)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1345)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1345)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(1345)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(1345)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_4_1{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1345);
									{
										HX_STACK_LINE(1345)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1345)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1345)
										{
											HX_STACK_LINE(1345)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1345)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1345)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1345)
										return ret->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1345);
									{
										HX_STACK_LINE(1345)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1345)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1345)
										{
											HX_STACK_LINE(1345)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1345)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1345)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1345)
										return ret->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1345)
							if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
								HX_STACK_LINE(1345)
								{
									HX_STACK_LINE(1345)
									ret->zpp_inner->x = x;
									HX_STACK_LINE(1345)
									ret->zpp_inner->y = y;
									HX_STACK_LINE(1345)
									{
									}
									HX_STACK_LINE(1345)
									{
									}
								}
								HX_STACK_LINE(1345)
								{
									HX_STACK_LINE(1345)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1345)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1345)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(1345)
							ret;
						}
						HX_STACK_LINE(1345)
						ret->zpp_inner->weak = weak;
						HX_STACK_LINE(1345)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(1345)
			::nape::geom::Vec2 v = _Function_2_6::Block();		HX_STACK_VAR(v,"v");
			struct _Function_2_7{
				inline static ::nape::geom::Vec2 Block( ){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1346);
					{
						HX_STACK_LINE(1346)
						Float x = (int)0;		HX_STACK_VAR(x,"x");
						Float y = (int)0;		HX_STACK_VAR(y,"y");
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(1346)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1346)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						HX_STACK_LINE(1346)
						::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1346)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(1346)
							ret = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(1346)
							ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(1346)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(1346)
							ret->zpp_pool = null();
							HX_STACK_LINE(1346)
							ret->zpp_disp = false;
							HX_STACK_LINE(1346)
							if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(1346)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(1346)
						if (((ret->zpp_inner == null()))){
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1346);
									{
										HX_STACK_LINE(1346)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(1346)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(1346)
										{
											HX_STACK_LINE(1346)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(1346)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
											}
											else{
												HX_STACK_LINE(1346)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1346)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(1346)
												ret1->next = null();
											}
											HX_STACK_LINE(1346)
											ret1->weak = false;
										}
										HX_STACK_LINE(1346)
										ret1->_immutable = immutable;
										HX_STACK_LINE(1346)
										{
											HX_STACK_LINE(1346)
											ret1->x = x;
											HX_STACK_LINE(1346)
											ret1->y = y;
											HX_STACK_LINE(1346)
											{
											}
											HX_STACK_LINE(1346)
											{
											}
										}
										HX_STACK_LINE(1346)
										return ret1;
									}
									return null();
								}
							};
							HX_STACK_LINE(1346)
							ret->zpp_inner = _Function_4_1::Block(x,y);
							HX_STACK_LINE(1346)
							ret->zpp_inner->outer = ret;
						}
						else{
							HX_STACK_LINE(1346)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(1346)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1346)
							{
								HX_STACK_LINE(1346)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1346)
								if ((_this->_immutable)){
									HX_STACK_LINE(1346)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1346)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1346)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(1346)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(1346)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_4_1{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1346);
									{
										HX_STACK_LINE(1346)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1346)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1346)
										{
											HX_STACK_LINE(1346)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1346)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1346)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1346)
										return ret->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1346);
									{
										HX_STACK_LINE(1346)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1346)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1346)
										{
											HX_STACK_LINE(1346)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1346)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1346)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1346)
										return ret->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1346)
							if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
								HX_STACK_LINE(1346)
								{
									HX_STACK_LINE(1346)
									ret->zpp_inner->x = x;
									HX_STACK_LINE(1346)
									ret->zpp_inner->y = y;
									HX_STACK_LINE(1346)
									{
									}
									HX_STACK_LINE(1346)
									{
									}
								}
								HX_STACK_LINE(1346)
								{
									HX_STACK_LINE(1346)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1346)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1346)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(1346)
							ret;
						}
						HX_STACK_LINE(1346)
						ret->zpp_inner->weak = weak;
						HX_STACK_LINE(1346)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(1346)
			::nape::geom::Vec2 q = _Function_2_7::Block();		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(1347)
			{
				HX_STACK_LINE(1347)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1347)
				while(((_g < coils))){
					HX_STACK_LINE(1347)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1348)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1348);
								{
									HX_STACK_LINE(1348)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1348)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1348)
									{
										HX_STACK_LINE(1348)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1348)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1348)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1348)
									return u->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1348)
						Float x = ((_Function_5_1::Block(u) + dx) + nx);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1348)
						{
							HX_STACK_LINE(1348)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1348)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1348)
							{
								HX_STACK_LINE(1348)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1348)
								if ((_this->_immutable)){
									HX_STACK_LINE(1348)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1348)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1348)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &v){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1348);
									{
										HX_STACK_LINE(1348)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1348)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1348)
										{
											HX_STACK_LINE(1348)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1348)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1348)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1348)
										return v->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1348)
							if (((_Function_6_1::Block(v) != x))){
								HX_STACK_LINE(1348)
								if (((x != x))){
									HX_STACK_LINE(1348)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1348)
								v->zpp_inner->x = x;
								HX_STACK_LINE(1348)
								{
									HX_STACK_LINE(1348)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1348)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1348)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1348)
						{
							HX_STACK_LINE(1348)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1348)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1348)
							{
								HX_STACK_LINE(1348)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1348)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1348)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1348)
							v->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1349)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1349);
								{
									HX_STACK_LINE(1349)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1349)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1349)
									{
										HX_STACK_LINE(1349)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1349)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1349)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1349)
									return u->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1349)
						Float y = ((_Function_5_1::Block(u) + dy) + ny);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1349)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1349)
								if ((_this->_immutable)){
									HX_STACK_LINE(1349)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1349)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1349)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &v){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1349);
									{
										HX_STACK_LINE(1349)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1349)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1349)
										{
											HX_STACK_LINE(1349)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1349)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1349)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1349)
										return v->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1349)
							if (((_Function_6_1::Block(v) != y))){
								HX_STACK_LINE(1349)
								if (((y != y))){
									HX_STACK_LINE(1349)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1349)
								v->zpp_inner->y = y;
								HX_STACK_LINE(1349)
								{
									HX_STACK_LINE(1349)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1349)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1349)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1349)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1349)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1349)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1349)
							v->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1350)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1350);
								{
									HX_STACK_LINE(1350)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1350)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1350)
									{
										HX_STACK_LINE(1350)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1350)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1350)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1350)
									return u->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1350)
						Float x = (_Function_5_1::Block(u) + (dx * (int)2));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1350)
						{
							HX_STACK_LINE(1350)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1350)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1350)
							{
								HX_STACK_LINE(1350)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1350)
								if ((_this->_immutable)){
									HX_STACK_LINE(1350)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1350)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1350)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &q){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1350);
									{
										HX_STACK_LINE(1350)
										if (((bool((q != null())) && bool(q->zpp_disp)))){
											HX_STACK_LINE(1350)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1350)
										{
											HX_STACK_LINE(1350)
											::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1350)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1350)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1350)
										return q->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1350)
							if (((_Function_6_1::Block(q) != x))){
								HX_STACK_LINE(1350)
								if (((x != x))){
									HX_STACK_LINE(1350)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1350)
								q->zpp_inner->x = x;
								HX_STACK_LINE(1350)
								{
									HX_STACK_LINE(1350)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1350)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1350)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1350)
						{
							HX_STACK_LINE(1350)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1350)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1350)
							{
								HX_STACK_LINE(1350)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1350)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1350)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1350)
							q->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1351)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1351);
								{
									HX_STACK_LINE(1351)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1351)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1351)
									{
										HX_STACK_LINE(1351)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1351)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1351)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1351)
									return u->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1351)
						Float y = (_Function_5_1::Block(u) + (dy * (int)2));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1351)
						{
							HX_STACK_LINE(1351)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1351)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1351)
							{
								HX_STACK_LINE(1351)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1351)
								if ((_this->_immutable)){
									HX_STACK_LINE(1351)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1351)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1351)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &q){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1351);
									{
										HX_STACK_LINE(1351)
										if (((bool((q != null())) && bool(q->zpp_disp)))){
											HX_STACK_LINE(1351)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1351)
										{
											HX_STACK_LINE(1351)
											::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1351)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1351)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1351)
										return q->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1351)
							if (((_Function_6_1::Block(q) != y))){
								HX_STACK_LINE(1351)
								if (((y != y))){
									HX_STACK_LINE(1351)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1351)
								q->zpp_inner->y = y;
								HX_STACK_LINE(1351)
								{
									HX_STACK_LINE(1351)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1351)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1351)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1351)
						{
							HX_STACK_LINE(1351)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1351)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1351)
							{
								HX_STACK_LINE(1351)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1351)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1351)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1351)
							q->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1352)
					this->drawCurve(u,v,q,colour);
					HX_STACK_LINE(1353)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &q){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1353);
								{
									HX_STACK_LINE(1353)
									if (((bool((q != null())) && bool(q->zpp_disp)))){
										HX_STACK_LINE(1353)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1353)
									{
										HX_STACK_LINE(1353)
										::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1353)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1353)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1353)
									return q->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1353)
						Float x = _Function_5_1::Block(q);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1353)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1353)
								if ((_this->_immutable)){
									HX_STACK_LINE(1353)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1353)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1353)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &u){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1353);
									{
										HX_STACK_LINE(1353)
										if (((bool((u != null())) && bool(u->zpp_disp)))){
											HX_STACK_LINE(1353)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1353)
										{
											HX_STACK_LINE(1353)
											::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1353)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1353)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1353)
										return u->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1353)
							if (((_Function_6_1::Block(u) != x))){
								HX_STACK_LINE(1353)
								if (((x != x))){
									HX_STACK_LINE(1353)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1353)
								u->zpp_inner->x = x;
								HX_STACK_LINE(1353)
								{
									HX_STACK_LINE(1353)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1353)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1353)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1353)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1353)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1353)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1353)
							u->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1354)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &q){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1354);
								{
									HX_STACK_LINE(1354)
									if (((bool((q != null())) && bool(q->zpp_disp)))){
										HX_STACK_LINE(1354)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1354)
									{
										HX_STACK_LINE(1354)
										::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1354)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1354)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1354)
									return q->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1354)
						Float y = _Function_5_1::Block(q);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1354)
						{
							HX_STACK_LINE(1354)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1354)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1354)
							{
								HX_STACK_LINE(1354)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1354)
								if ((_this->_immutable)){
									HX_STACK_LINE(1354)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1354)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1354)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &u){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1354);
									{
										HX_STACK_LINE(1354)
										if (((bool((u != null())) && bool(u->zpp_disp)))){
											HX_STACK_LINE(1354)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1354)
										{
											HX_STACK_LINE(1354)
											::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1354)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1354)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1354)
										return u->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1354)
							if (((_Function_6_1::Block(u) != y))){
								HX_STACK_LINE(1354)
								if (((y != y))){
									HX_STACK_LINE(1354)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1354)
								u->zpp_inner->y = y;
								HX_STACK_LINE(1354)
								{
									HX_STACK_LINE(1354)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1354)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1354)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1354)
						{
							HX_STACK_LINE(1354)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1354)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1354)
							{
								HX_STACK_LINE(1354)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1354)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1354)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1354)
							u->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1355)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1355);
								{
									HX_STACK_LINE(1355)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1355)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1355)
									{
										HX_STACK_LINE(1355)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1355)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1355)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1355)
									return u->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1355)
						Float x = ((_Function_5_1::Block(u) + dx) - nx);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1355)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1355)
							{
								HX_STACK_LINE(1355)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1355)
								if ((_this->_immutable)){
									HX_STACK_LINE(1355)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1355)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1355)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &v){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1355);
									{
										HX_STACK_LINE(1355)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1355)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1355)
										{
											HX_STACK_LINE(1355)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1355)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1355)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1355)
										return v->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1355)
							if (((_Function_6_1::Block(v) != x))){
								HX_STACK_LINE(1355)
								if (((x != x))){
									HX_STACK_LINE(1355)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1355)
								v->zpp_inner->x = x;
								HX_STACK_LINE(1355)
								{
									HX_STACK_LINE(1355)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1355)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1355)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1355)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1355)
							{
								HX_STACK_LINE(1355)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1355)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1355)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1355)
							v->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1356)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1356);
								{
									HX_STACK_LINE(1356)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1356)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1356)
									{
										HX_STACK_LINE(1356)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1356)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1356)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1356)
									return u->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1356)
						Float y = ((_Function_5_1::Block(u) + dy) - ny);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1356)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1356)
							{
								HX_STACK_LINE(1356)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1356)
								if ((_this->_immutable)){
									HX_STACK_LINE(1356)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1356)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1356)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &v){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1356);
									{
										HX_STACK_LINE(1356)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1356)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1356)
										{
											HX_STACK_LINE(1356)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1356)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1356)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1356)
										return v->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1356)
							if (((_Function_6_1::Block(v) != y))){
								HX_STACK_LINE(1356)
								if (((y != y))){
									HX_STACK_LINE(1356)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1356)
								v->zpp_inner->y = y;
								HX_STACK_LINE(1356)
								{
									HX_STACK_LINE(1356)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1356)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1356)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1356)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1356)
							{
								HX_STACK_LINE(1356)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1356)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1356)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1356)
							v->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1357)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1357);
								{
									HX_STACK_LINE(1357)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1357)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1357)
									{
										HX_STACK_LINE(1357)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1357)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1357)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1357)
									return u->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1357)
						Float x = (_Function_5_1::Block(u) + (dx * (int)2));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1357)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1357)
								if ((_this->_immutable)){
									HX_STACK_LINE(1357)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1357)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1357)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &q){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1357);
									{
										HX_STACK_LINE(1357)
										if (((bool((q != null())) && bool(q->zpp_disp)))){
											HX_STACK_LINE(1357)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1357)
										{
											HX_STACK_LINE(1357)
											::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1357)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1357)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1357)
										return q->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1357)
							if (((_Function_6_1::Block(q) != x))){
								HX_STACK_LINE(1357)
								if (((x != x))){
									HX_STACK_LINE(1357)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1357)
								q->zpp_inner->x = x;
								HX_STACK_LINE(1357)
								{
									HX_STACK_LINE(1357)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1357)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1357)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1357)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1357)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1357)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1357)
							q->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1358)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1358);
								{
									HX_STACK_LINE(1358)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1358)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1358)
									{
										HX_STACK_LINE(1358)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1358)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1358)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1358)
									return u->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1358)
						Float y = (_Function_5_1::Block(u) + (dy * (int)2));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1358)
						{
							HX_STACK_LINE(1358)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1358)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1358)
							{
								HX_STACK_LINE(1358)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1358)
								if ((_this->_immutable)){
									HX_STACK_LINE(1358)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1358)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1358)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &q){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1358);
									{
										HX_STACK_LINE(1358)
										if (((bool((q != null())) && bool(q->zpp_disp)))){
											HX_STACK_LINE(1358)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1358)
										{
											HX_STACK_LINE(1358)
											::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1358)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1358)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1358)
										return q->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1358)
							if (((_Function_6_1::Block(q) != y))){
								HX_STACK_LINE(1358)
								if (((y != y))){
									HX_STACK_LINE(1358)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1358)
								q->zpp_inner->y = y;
								HX_STACK_LINE(1358)
								{
									HX_STACK_LINE(1358)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1358)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1358)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1358)
						{
							HX_STACK_LINE(1358)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1358)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1358)
							{
								HX_STACK_LINE(1358)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1358)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1358)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1358)
							q->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1359)
					this->drawCurve(u,v,q,colour);
					HX_STACK_LINE(1360)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &q){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1360);
								{
									HX_STACK_LINE(1360)
									if (((bool((q != null())) && bool(q->zpp_disp)))){
										HX_STACK_LINE(1360)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1360)
									{
										HX_STACK_LINE(1360)
										::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1360)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1360)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1360)
									return q->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1360)
						Float x = _Function_5_1::Block(q);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1360)
						{
							HX_STACK_LINE(1360)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1360)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1360)
							{
								HX_STACK_LINE(1360)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1360)
								if ((_this->_immutable)){
									HX_STACK_LINE(1360)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1360)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1360)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &u){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1360);
									{
										HX_STACK_LINE(1360)
										if (((bool((u != null())) && bool(u->zpp_disp)))){
											HX_STACK_LINE(1360)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1360)
										{
											HX_STACK_LINE(1360)
											::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1360)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1360)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1360)
										return u->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1360)
							if (((_Function_6_1::Block(u) != x))){
								HX_STACK_LINE(1360)
								if (((x != x))){
									HX_STACK_LINE(1360)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1360)
								u->zpp_inner->x = x;
								HX_STACK_LINE(1360)
								{
									HX_STACK_LINE(1360)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1360)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1360)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1360)
						{
							HX_STACK_LINE(1360)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1360)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1360)
							{
								HX_STACK_LINE(1360)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1360)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1360)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1360)
							u->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1361)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &q){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1361);
								{
									HX_STACK_LINE(1361)
									if (((bool((q != null())) && bool(q->zpp_disp)))){
										HX_STACK_LINE(1361)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1361)
									{
										HX_STACK_LINE(1361)
										::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1361)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1361)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1361)
									return q->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1361)
						Float y = _Function_5_1::Block(q);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1361)
						{
							HX_STACK_LINE(1361)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1361)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1361)
							{
								HX_STACK_LINE(1361)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1361)
								if ((_this->_immutable)){
									HX_STACK_LINE(1361)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1361)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1361)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &u){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1361);
									{
										HX_STACK_LINE(1361)
										if (((bool((u != null())) && bool(u->zpp_disp)))){
											HX_STACK_LINE(1361)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1361)
										{
											HX_STACK_LINE(1361)
											::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1361)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1361)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1361)
										return u->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1361)
							if (((_Function_6_1::Block(u) != y))){
								HX_STACK_LINE(1361)
								if (((y != y))){
									HX_STACK_LINE(1361)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1361)
								u->zpp_inner->y = y;
								HX_STACK_LINE(1361)
								{
									HX_STACK_LINE(1361)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1361)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1361)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1361)
						{
							HX_STACK_LINE(1361)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1361)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1361)
							{
								HX_STACK_LINE(1361)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1361)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1361)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1361)
							u->zpp_inner->y;
						}
					}
				}
			}
			HX_STACK_LINE(1363)
			{
				HX_STACK_LINE(1363)
				if (((bool((u != null())) && bool(u->zpp_disp)))){
					HX_STACK_LINE(1363)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1363)
				{
					HX_STACK_LINE(1363)
					::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1363)
					if ((_this->_immutable)){
						HX_STACK_LINE(1363)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1363)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1363)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1363)
				if ((u->zpp_inner->_inuse)){
					HX_STACK_LINE(1363)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1363)
				::zpp_nape::geom::ZPP_Vec2 inner = u->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1363)
				u->zpp_inner->outer = null();
				HX_STACK_LINE(1363)
				u->zpp_inner = null();
				HX_STACK_LINE(1363)
				{
					HX_STACK_LINE(1363)
					::nape::geom::Vec2 o = u;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1363)
					{
					}
					HX_STACK_LINE(1363)
					o->zpp_pool = null();
					HX_STACK_LINE(1363)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1363)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1363)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1363)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1363)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1363)
				{
					HX_STACK_LINE(1363)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1363)
					{
					}
					HX_STACK_LINE(1363)
					{
						HX_STACK_LINE(1363)
						if (((o->outer != null()))){
							HX_STACK_LINE(1363)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1363)
							o->outer = null();
						}
						HX_STACK_LINE(1363)
						o->_isimmutable = null();
						HX_STACK_LINE(1363)
						o->_validate = null();
						HX_STACK_LINE(1363)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1363)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1363)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1364)
			{
				HX_STACK_LINE(1364)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(1364)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1364)
				{
					HX_STACK_LINE(1364)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1364)
					if ((_this->_immutable)){
						HX_STACK_LINE(1364)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1364)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1364)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1364)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(1364)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1364)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1364)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(1364)
				v->zpp_inner = null();
				HX_STACK_LINE(1364)
				{
					HX_STACK_LINE(1364)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1364)
					{
					}
					HX_STACK_LINE(1364)
					o->zpp_pool = null();
					HX_STACK_LINE(1364)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1364)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1364)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1364)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1364)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1364)
				{
					HX_STACK_LINE(1364)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1364)
					{
					}
					HX_STACK_LINE(1364)
					{
						HX_STACK_LINE(1364)
						if (((o->outer != null()))){
							HX_STACK_LINE(1364)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1364)
							o->outer = null();
						}
						HX_STACK_LINE(1364)
						o->_isimmutable = null();
						HX_STACK_LINE(1364)
						o->_validate = null();
						HX_STACK_LINE(1364)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1364)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1364)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1365)
			{
				HX_STACK_LINE(1365)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(1365)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1365)
				{
					HX_STACK_LINE(1365)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1365)
					if ((_this->_immutable)){
						HX_STACK_LINE(1365)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1365)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1365)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1365)
				if ((q->zpp_inner->_inuse)){
					HX_STACK_LINE(1365)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1365)
				::zpp_nape::geom::ZPP_Vec2 inner = q->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1365)
				q->zpp_inner->outer = null();
				HX_STACK_LINE(1365)
				q->zpp_inner = null();
				HX_STACK_LINE(1365)
				{
					HX_STACK_LINE(1365)
					::nape::geom::Vec2 o = q;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1365)
					{
					}
					HX_STACK_LINE(1365)
					o->zpp_pool = null();
					HX_STACK_LINE(1365)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1365)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1365)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1365)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1365)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1365)
				{
					HX_STACK_LINE(1365)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1365)
					{
					}
					HX_STACK_LINE(1365)
					{
						HX_STACK_LINE(1365)
						if (((o->outer != null()))){
							HX_STACK_LINE(1365)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1365)
							o->outer = null();
						}
						HX_STACK_LINE(1365)
						o->_isimmutable = null();
						HX_STACK_LINE(1365)
						o->_validate = null();
						HX_STACK_LINE(1365)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1365)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1365)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1367)
		if ((start->zpp_inner->weak)){
			HX_STACK_LINE(1371)
			{
				HX_STACK_LINE(1371)
				if (((bool((start != null())) && bool(start->zpp_disp)))){
					HX_STACK_LINE(1371)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1371)
				{
					HX_STACK_LINE(1371)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1371)
					if ((_this->_immutable)){
						HX_STACK_LINE(1371)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1371)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1371)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1371)
				if ((start->zpp_inner->_inuse)){
					HX_STACK_LINE(1371)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1371)
				::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1371)
				start->zpp_inner->outer = null();
				HX_STACK_LINE(1371)
				start->zpp_inner = null();
				HX_STACK_LINE(1371)
				{
					HX_STACK_LINE(1371)
					::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1371)
					{
					}
					HX_STACK_LINE(1371)
					o->zpp_pool = null();
					HX_STACK_LINE(1371)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1371)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1371)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1371)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1371)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1371)
				{
					HX_STACK_LINE(1371)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1371)
					{
					}
					HX_STACK_LINE(1371)
					{
						HX_STACK_LINE(1371)
						if (((o->outer != null()))){
							HX_STACK_LINE(1371)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1371)
							o->outer = null();
						}
						HX_STACK_LINE(1371)
						o->_isimmutable = null();
						HX_STACK_LINE(1371)
						o->_validate = null();
						HX_STACK_LINE(1371)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1371)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1371)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1372)
			true;
		}
		else{
			HX_STACK_LINE(1374)
			false;
		}
		HX_STACK_LINE(1378)
		if ((end->zpp_inner->weak)){
			HX_STACK_LINE(1382)
			{
				HX_STACK_LINE(1382)
				if (((bool((end != null())) && bool(end->zpp_disp)))){
					HX_STACK_LINE(1382)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1382)
				{
					HX_STACK_LINE(1382)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1382)
					if ((_this->_immutable)){
						HX_STACK_LINE(1382)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1382)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1382)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1382)
				if ((end->zpp_inner->_inuse)){
					HX_STACK_LINE(1382)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1382)
				::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1382)
				end->zpp_inner->outer = null();
				HX_STACK_LINE(1382)
				end->zpp_inner = null();
				HX_STACK_LINE(1382)
				{
					HX_STACK_LINE(1382)
					::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1382)
					{
					}
					HX_STACK_LINE(1382)
					o->zpp_pool = null();
					HX_STACK_LINE(1382)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1382)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1382)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1382)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1382)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1382)
				{
					HX_STACK_LINE(1382)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1382)
					{
					}
					HX_STACK_LINE(1382)
					{
						HX_STACK_LINE(1382)
						if (((o->outer != null()))){
							HX_STACK_LINE(1382)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1382)
							o->outer = null();
						}
						HX_STACK_LINE(1382)
						o->_isimmutable = null();
						HX_STACK_LINE(1382)
						o->_validate = null();
						HX_STACK_LINE(1382)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1382)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1382)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1383)
			true;
		}
		else{
			HX_STACK_LINE(1385)
			false;
		}
	}
return null();
}


Void ShapeDebug_obj::draw( Dynamic object){
{
		HX_STACK_PUSH("ShapeDebug::draw","nape/util/ShapeDebug.hx",1190);
		HX_STACK_THIS(this);
		HX_STACK_ARG(object,"object");
		HX_STACK_LINE(1193)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(1193)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(1195)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(1195)
			if ((::Std_obj::is(object,hx::ClassOf< ::nape::space::Space >()))){
				HX_STACK_LINE(1196)
				this->zpp_inner_zn->draw_space((hx::TCast< nape::space::Space >::cast(object))->zpp_inner,null(),1.0,true);
			}
			else{
				HX_STACK_LINE(1197)
				if ((::Std_obj::is(object,hx::ClassOf< ::nape::phys::Compound >()))){
					HX_STACK_LINE(1197)
					this->zpp_inner_zn->draw_compound((hx::TCast< nape::phys::Compound >::cast(object))->zpp_inner,null(),1.0,true);
				}
				else{
					HX_STACK_LINE(1198)
					if ((::Std_obj::is(object,hx::ClassOf< ::nape::phys::Body >()))){
						HX_STACK_LINE(1198)
						this->zpp_inner_zn->draw_body((hx::TCast< nape::phys::Body >::cast(object))->zpp_inner,null(),1.0,true);
					}
					else{
						HX_STACK_LINE(1199)
						if ((::Std_obj::is(object,hx::ClassOf< ::nape::shape::Shape >()))){
							HX_STACK_LINE(1199)
							this->zpp_inner_zn->draw_shape((hx::TCast< nape::shape::Shape >::cast(object))->zpp_inner,null(),1.0,true);
						}
						else{
							HX_STACK_LINE(1200)
							if ((::Std_obj::is(object,hx::ClassOf< ::nape::constraint::Constraint >()))){
								HX_STACK_LINE(1200)
								(hx::TCast< nape::constraint::Constraint >::cast(object))->zpp_inner->draw(hx::ObjectPtr<OBJ_>(this));
							}
							else{
								HX_STACK_LINE(1201)
								hx::Throw (HX_CSTRING("Error: Unhandled object type for Debug draw"));
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1207)
			if ((::Std_obj::is(object,hx::ClassOf< ::nape::space::Space >()))){
				HX_STACK_LINE(1208)
				this->zpp_inner_zn->draw_space((hx::TCast< nape::space::Space >::cast(object))->zpp_inner,this->zpp_inner->xform,this->zpp_inner->xdet,false);
			}
			else{
				HX_STACK_LINE(1209)
				if ((::Std_obj::is(object,hx::ClassOf< ::nape::phys::Body >()))){
					HX_STACK_LINE(1209)
					this->zpp_inner_zn->draw_body((hx::TCast< nape::phys::Body >::cast(object))->zpp_inner,this->zpp_inner->xform,this->zpp_inner->xdet,false);
				}
				else{
					HX_STACK_LINE(1210)
					if ((::Std_obj::is(object,hx::ClassOf< ::nape::shape::Shape >()))){
						HX_STACK_LINE(1210)
						this->zpp_inner_zn->draw_shape((hx::TCast< nape::shape::Shape >::cast(object))->zpp_inner,this->zpp_inner->xform,this->zpp_inner->xdet,false);
					}
					else{
						HX_STACK_LINE(1211)
						if ((::Std_obj::is(object,hx::ClassOf< ::nape::constraint::Constraint >()))){
							HX_STACK_LINE(1211)
							(hx::TCast< nape::constraint::Constraint >::cast(object))->zpp_inner->draw(hx::ObjectPtr<OBJ_>(this));
						}
						else{
							HX_STACK_LINE(1212)
							hx::Throw (HX_CSTRING("Error: Unhandled object type for Debug draw"));
						}
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawFilledPolygon( Dynamic polygon,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawFilledPolygon","nape/util/ShapeDebug.hx",874);
		HX_STACK_THIS(this);
		HX_STACK_ARG(polygon,"polygon");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(876)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(876)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(879)
		if (((polygon == null()))){
			HX_STACK_LINE(879)
			hx::Throw (HX_CSTRING("Error: Cannot draw null polygon!"));
		}
		HX_STACK_LINE(881)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(882)
		g->beginFill((int(colour) & int((int)16777215)),1.0);
		HX_STACK_LINE(883)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(884)
		::nape::geom::Vec2 fst = null();		HX_STACK_VAR(fst,"fst");
		HX_STACK_LINE(885)
		bool fsttime = true;		HX_STACK_VAR(fsttime,"fsttime");
		HX_STACK_LINE(886)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(887)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(889)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(890)
					while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(890)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(890)
						++(_g);
						HX_STACK_LINE(892)
						if (((vite == null()))){
							HX_STACK_LINE(892)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains null objects"));
						}
						HX_STACK_LINE(895)
						if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
							HX_STACK_LINE(895)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
						}
						HX_STACK_LINE(897)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(898)
						if (((bool((p != null())) && bool(p->zpp_disp)))){
							HX_STACK_LINE(900)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(904)
							if ((fsttime)){
								struct _Function_7_1{
									inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",905);
										{
											HX_STACK_LINE(905)
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(905)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(905)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											struct _Function_8_1{
												inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p,bool &weak){
													HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",905);
													{
														struct _Function_9_1{
															inline static Float Block( ::nape::geom::Vec2 &p){
																HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",905);
																{
																	HX_STACK_LINE(905)
																	if ((p->zpp_disp)){
																		HX_STACK_LINE(905)
																		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																	}
																	HX_STACK_LINE(905)
																	{
																		HX_STACK_LINE(905)
																		::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(905)
																		if (((_this->_validate_dyn() != null()))){
																			HX_STACK_LINE(905)
																			_this->_validate();
																		}
																	}
																	HX_STACK_LINE(905)
																	return p->zpp_inner->x;
																}
																return null();
															}
														};
														struct _Function_9_2{
															inline static Float Block( ::nape::geom::Vec2 &p){
																HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",905);
																{
																	HX_STACK_LINE(905)
																	if ((p->zpp_disp)){
																		HX_STACK_LINE(905)
																		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																	}
																	HX_STACK_LINE(905)
																	{
																		HX_STACK_LINE(905)
																		::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(905)
																		if (((_this->_validate_dyn() != null()))){
																			HX_STACK_LINE(905)
																			_this->_validate();
																		}
																	}
																	HX_STACK_LINE(905)
																	return p->zpp_inner->y;
																}
																return null();
															}
														};
														HX_STACK_LINE(905)
														Float x = _Function_9_1::Block(p);		HX_STACK_VAR(x,"x");
														Float y = _Function_9_2::Block(p);		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(905)
														if (((bool((x != x)) || bool((y != y))))){
															HX_STACK_LINE(905)
															hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
														}
														HX_STACK_LINE(905)
														::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(905)
														if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
															HX_STACK_LINE(905)
															ret = ::nape::geom::Vec2_obj::__new(null(),null());
														}
														else{
															HX_STACK_LINE(905)
															ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
															HX_STACK_LINE(905)
															::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
															HX_STACK_LINE(905)
															ret->zpp_pool = null();
															HX_STACK_LINE(905)
															ret->zpp_disp = false;
															HX_STACK_LINE(905)
															if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																HX_STACK_LINE(905)
																::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
															}
														}
														HX_STACK_LINE(905)
														if (((ret->zpp_inner == null()))){
															struct _Function_10_1{
																inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",905);
																	{
																		HX_STACK_LINE(905)
																		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																		HX_STACK_LINE(905)
																		::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(905)
																		{
																			HX_STACK_LINE(905)
																			if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																				HX_STACK_LINE(905)
																				ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(905)
																				ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																				HX_STACK_LINE(905)
																				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(905)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(905)
																			ret1->weak = false;
																		}
																		HX_STACK_LINE(905)
																		ret1->_immutable = immutable;
																		HX_STACK_LINE(905)
																		{
																			HX_STACK_LINE(905)
																			ret1->x = x;
																			HX_STACK_LINE(905)
																			ret1->y = y;
																			HX_STACK_LINE(905)
																			{
																			}
																			HX_STACK_LINE(905)
																			{
																			}
																		}
																		HX_STACK_LINE(905)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(905)
															ret->zpp_inner = _Function_10_1::Block(x,y);
															HX_STACK_LINE(905)
															ret->zpp_inner->outer = ret;
														}
														else{
															HX_STACK_LINE(905)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(905)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(905)
															{
																HX_STACK_LINE(905)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(905)
																if ((_this->_immutable)){
																	HX_STACK_LINE(905)
																	hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																}
																HX_STACK_LINE(905)
																if (((_this->_isimmutable_dyn() != null()))){
																	HX_STACK_LINE(905)
																	_this->_isimmutable();
																}
															}
															HX_STACK_LINE(905)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(905)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															struct _Function_10_1{
																inline static Float Block( ::nape::geom::Vec2 &ret){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",905);
																	{
																		HX_STACK_LINE(905)
																		if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																			HX_STACK_LINE(905)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(905)
																		{
																			HX_STACK_LINE(905)
																			::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(905)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(905)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(905)
																		return ret->zpp_inner->x;
																	}
																	return null();
																}
															};
															struct _Function_10_2{
																inline static Float Block( ::nape::geom::Vec2 &ret){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",905);
																	{
																		HX_STACK_LINE(905)
																		if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																			HX_STACK_LINE(905)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(905)
																		{
																			HX_STACK_LINE(905)
																			::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(905)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(905)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(905)
																		return ret->zpp_inner->y;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(905)
															if ((!(((bool((_Function_10_1::Block(ret) == x)) && bool((_Function_10_2::Block(ret) == y))))))){
																HX_STACK_LINE(905)
																{
																	HX_STACK_LINE(905)
																	ret->zpp_inner->x = x;
																	HX_STACK_LINE(905)
																	ret->zpp_inner->y = y;
																	HX_STACK_LINE(905)
																	{
																	}
																	HX_STACK_LINE(905)
																	{
																	}
																}
																HX_STACK_LINE(905)
																{
																	HX_STACK_LINE(905)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(905)
																	if (((_this->_invalidate_dyn() != null()))){
																		HX_STACK_LINE(905)
																		_this->_invalidate(_this);
																	}
																}
															}
															HX_STACK_LINE(905)
															ret;
														}
														HX_STACK_LINE(905)
														ret->zpp_inner->weak = weak;
														HX_STACK_LINE(905)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(905)
											return _Function_8_1::Block(p,weak);
										}
										return null();
									}
								};
								HX_STACK_LINE(905)
								fst = _Function_7_1::Block(p);
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",906);
										{
											HX_STACK_LINE(906)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(906)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(906)
											{
												HX_STACK_LINE(906)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(906)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(906)
													_this->_validate();
												}
											}
											HX_STACK_LINE(906)
											return p->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_3{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",906);
										{
											HX_STACK_LINE(906)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(906)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(906)
											{
												HX_STACK_LINE(906)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(906)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(906)
													_this->_validate();
												}
											}
											HX_STACK_LINE(906)
											return p->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(906)
								g->moveTo(_Function_7_2::Block(p),_Function_7_3::Block(p));
							}
							else{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",908);
										{
											HX_STACK_LINE(908)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(908)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(908)
											{
												HX_STACK_LINE(908)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(908)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(908)
													_this->_validate();
												}
											}
											HX_STACK_LINE(908)
											return p->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",908);
										{
											HX_STACK_LINE(908)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(908)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(908)
											{
												HX_STACK_LINE(908)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(908)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(908)
													_this->_validate();
												}
											}
											HX_STACK_LINE(908)
											return p->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(908)
								g->lineTo(_Function_7_1::Block(p),_Function_7_2::Block(p));
							}
							HX_STACK_LINE(909)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(936)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(937)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(938)
					for(::cpp::FastIterator_obj< ::nape::geom::Vec2 > *__it = ::cpp::CreateFastIterator< ::nape::geom::Vec2 >(lv->iterator());  __it->hasNext(); ){
						::nape::geom::Vec2 p = __it->next();
						{
							HX_STACK_LINE(940)
							if (((p == null()))){
								HX_STACK_LINE(940)
								hx::Throw (HX_CSTRING("Error: Vec2List contains null objects"));
							}
							HX_STACK_LINE(942)
							if (((bool((p != null())) && bool(p->zpp_disp)))){
								HX_STACK_LINE(944)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(947)
							{
								HX_STACK_LINE(948)
								if ((fsttime)){
									struct _Function_7_1{
										inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",949);
											{
												HX_STACK_LINE(949)
												bool weak = false;		HX_STACK_VAR(weak,"weak");
												HX_STACK_LINE(949)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(949)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												struct _Function_8_1{
													inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p,bool &weak){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",949);
														{
															struct _Function_9_1{
																inline static Float Block( ::nape::geom::Vec2 &p){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",949);
																	{
																		HX_STACK_LINE(949)
																		if ((p->zpp_disp)){
																			HX_STACK_LINE(949)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(949)
																		{
																			HX_STACK_LINE(949)
																			::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(949)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(949)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(949)
																		return p->zpp_inner->x;
																	}
																	return null();
																}
															};
															struct _Function_9_2{
																inline static Float Block( ::nape::geom::Vec2 &p){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",949);
																	{
																		HX_STACK_LINE(949)
																		if ((p->zpp_disp)){
																			HX_STACK_LINE(949)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(949)
																		{
																			HX_STACK_LINE(949)
																			::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(949)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(949)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(949)
																		return p->zpp_inner->y;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(949)
															Float x = _Function_9_1::Block(p);		HX_STACK_VAR(x,"x");
															Float y = _Function_9_2::Block(p);		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(949)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(949)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(949)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(949)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(949)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(949)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(949)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(949)
																ret->zpp_pool = null();
																HX_STACK_LINE(949)
																ret->zpp_disp = false;
																HX_STACK_LINE(949)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(949)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(949)
															if (((ret->zpp_inner == null()))){
																struct _Function_10_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",949);
																		{
																			HX_STACK_LINE(949)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(949)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(949)
																			{
																				HX_STACK_LINE(949)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(949)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(949)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(949)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(949)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(949)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(949)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(949)
																			{
																				HX_STACK_LINE(949)
																				ret1->x = x;
																				HX_STACK_LINE(949)
																				ret1->y = y;
																				HX_STACK_LINE(949)
																				{
																				}
																				HX_STACK_LINE(949)
																				{
																				}
																			}
																			HX_STACK_LINE(949)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(949)
																ret->zpp_inner = _Function_10_1::Block(x,y);
																HX_STACK_LINE(949)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(949)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(949)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(949)
																{
																	HX_STACK_LINE(949)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(949)
																	if ((_this->_immutable)){
																		HX_STACK_LINE(949)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(949)
																	if (((_this->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(949)
																		_this->_isimmutable();
																	}
																}
																HX_STACK_LINE(949)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(949)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_10_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",949);
																		{
																			HX_STACK_LINE(949)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(949)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(949)
																			{
																				HX_STACK_LINE(949)
																				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(949)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(949)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(949)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_10_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",949);
																		{
																			HX_STACK_LINE(949)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(949)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(949)
																			{
																				HX_STACK_LINE(949)
																				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(949)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(949)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(949)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(949)
																if ((!(((bool((_Function_10_1::Block(ret) == x)) && bool((_Function_10_2::Block(ret) == y))))))){
																	HX_STACK_LINE(949)
																	{
																		HX_STACK_LINE(949)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(949)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(949)
																		{
																		}
																		HX_STACK_LINE(949)
																		{
																		}
																	}
																	HX_STACK_LINE(949)
																	{
																		HX_STACK_LINE(949)
																		::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(949)
																		if (((_this->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(949)
																			_this->_invalidate(_this);
																		}
																	}
																}
																HX_STACK_LINE(949)
																ret;
															}
															HX_STACK_LINE(949)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(949)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(949)
												return _Function_8_1::Block(p,weak);
											}
											return null();
										}
									};
									HX_STACK_LINE(949)
									fst = _Function_7_1::Block(p);
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",950);
											{
												HX_STACK_LINE(950)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(950)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(950)
												{
													HX_STACK_LINE(950)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(950)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(950)
														_this->_validate();
													}
												}
												HX_STACK_LINE(950)
												return p->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_3{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",950);
											{
												HX_STACK_LINE(950)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(950)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(950)
												{
													HX_STACK_LINE(950)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(950)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(950)
														_this->_validate();
													}
												}
												HX_STACK_LINE(950)
												return p->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(950)
									g->moveTo(_Function_7_2::Block(p),_Function_7_3::Block(p));
								}
								else{
									struct _Function_7_1{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",952);
											{
												HX_STACK_LINE(952)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(952)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(952)
												{
													HX_STACK_LINE(952)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(952)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(952)
														_this->_validate();
													}
												}
												HX_STACK_LINE(952)
												return p->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",952);
											{
												HX_STACK_LINE(952)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(952)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(952)
												{
													HX_STACK_LINE(952)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(952)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(952)
														_this->_validate();
													}
												}
												HX_STACK_LINE(952)
												return p->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(952)
									g->lineTo(_Function_7_1::Block(p),_Function_7_2::Block(p));
								}
								HX_STACK_LINE(953)
								fsttime = false;
							}
						}
;
					}
				}
				else{
					HX_STACK_LINE(957)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(958)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(959)
						if (((bool((lv != null())) && bool(lv->zpp_disp)))){
							HX_STACK_LINE(961)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("GeomPoly")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(964)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(965)
						if (((verts != null()))){
							HX_STACK_LINE(966)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(967)
							do{
								struct _Function_7_1{
									inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_GeomVert &vite){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",968);
										{
											HX_STACK_LINE(968)
											Float x = vite->x;		HX_STACK_VAR(x,"x");
											Float y = vite->y;		HX_STACK_VAR(y,"y");
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(968)
											if (((bool((x != x)) || bool((y != y))))){
												HX_STACK_LINE(968)
												hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											HX_STACK_LINE(968)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(968)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(968)
												ret = ::nape::geom::Vec2_obj::__new(null(),null());
											}
											else{
												HX_STACK_LINE(968)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(968)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(968)
												ret->zpp_pool = null();
												HX_STACK_LINE(968)
												ret->zpp_disp = false;
												HX_STACK_LINE(968)
												if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
													HX_STACK_LINE(968)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
											HX_STACK_LINE(968)
											if (((ret->zpp_inner == null()))){
												struct _Function_9_1{
													inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",968);
														{
															HX_STACK_LINE(968)
															bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
															HX_STACK_LINE(968)
															::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(968)
															{
																HX_STACK_LINE(968)
																if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																	HX_STACK_LINE(968)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																}
																else{
																	HX_STACK_LINE(968)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																	HX_STACK_LINE(968)
																	::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(968)
																	ret1->next = null();
																}
																HX_STACK_LINE(968)
																ret1->weak = false;
															}
															HX_STACK_LINE(968)
															ret1->_immutable = immutable;
															HX_STACK_LINE(968)
															{
																HX_STACK_LINE(968)
																ret1->x = x;
																HX_STACK_LINE(968)
																ret1->y = y;
																HX_STACK_LINE(968)
																{
																}
																HX_STACK_LINE(968)
																{
																}
															}
															HX_STACK_LINE(968)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(968)
												ret->zpp_inner = _Function_9_1::Block(x,y);
												HX_STACK_LINE(968)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(968)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(968)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(968)
												{
													HX_STACK_LINE(968)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(968)
													if ((_this->_immutable)){
														HX_STACK_LINE(968)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(968)
													if (((_this->_isimmutable_dyn() != null()))){
														HX_STACK_LINE(968)
														_this->_isimmutable();
													}
												}
												HX_STACK_LINE(968)
												if (((bool((x != x)) || bool((y != y))))){
													HX_STACK_LINE(968)
													hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												struct _Function_9_1{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",968);
														{
															HX_STACK_LINE(968)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(968)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(968)
															{
																HX_STACK_LINE(968)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(968)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(968)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(968)
															return ret->zpp_inner->x;
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",968);
														{
															HX_STACK_LINE(968)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(968)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(968)
															{
																HX_STACK_LINE(968)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(968)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(968)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(968)
															return ret->zpp_inner->y;
														}
														return null();
													}
												};
												HX_STACK_LINE(968)
												if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
													HX_STACK_LINE(968)
													{
														HX_STACK_LINE(968)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(968)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(968)
														{
														}
														HX_STACK_LINE(968)
														{
														}
													}
													HX_STACK_LINE(968)
													{
														HX_STACK_LINE(968)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(968)
														if (((_this->_invalidate_dyn() != null()))){
															HX_STACK_LINE(968)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(968)
												ret;
											}
											HX_STACK_LINE(968)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(968)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(968)
								::nape::geom::Vec2 p = _Function_7_1::Block(vite);		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(969)
								vite = vite->next;
								HX_STACK_LINE(970)
								{
									HX_STACK_LINE(971)
									if ((fsttime)){
										struct _Function_9_1{
											inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",972);
												{
													HX_STACK_LINE(972)
													bool weak = false;		HX_STACK_VAR(weak,"weak");
													HX_STACK_LINE(972)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(972)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													struct _Function_10_1{
														inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p,bool &weak){
															HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",972);
															{
																struct _Function_11_1{
																	inline static Float Block( ::nape::geom::Vec2 &p){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",972);
																		{
																			HX_STACK_LINE(972)
																			if ((p->zpp_disp)){
																				HX_STACK_LINE(972)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(972)
																			{
																				HX_STACK_LINE(972)
																				::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(972)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(972)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(972)
																			return p->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_11_2{
																	inline static Float Block( ::nape::geom::Vec2 &p){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",972);
																		{
																			HX_STACK_LINE(972)
																			if ((p->zpp_disp)){
																				HX_STACK_LINE(972)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(972)
																			{
																				HX_STACK_LINE(972)
																				::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(972)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(972)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(972)
																			return p->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(972)
																Float x = _Function_11_1::Block(p);		HX_STACK_VAR(x,"x");
																Float y = _Function_11_2::Block(p);		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(972)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(972)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																HX_STACK_LINE(972)
																::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
																HX_STACK_LINE(972)
																if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																	HX_STACK_LINE(972)
																	ret = ::nape::geom::Vec2_obj::__new(null(),null());
																}
																else{
																	HX_STACK_LINE(972)
																	ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																	HX_STACK_LINE(972)
																	::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																	HX_STACK_LINE(972)
																	ret->zpp_pool = null();
																	HX_STACK_LINE(972)
																	ret->zpp_disp = false;
																	HX_STACK_LINE(972)
																	if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																		HX_STACK_LINE(972)
																		::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																	}
																}
																HX_STACK_LINE(972)
																if (((ret->zpp_inner == null()))){
																	struct _Function_12_1{
																		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																			HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",972);
																			{
																				HX_STACK_LINE(972)
																				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																				HX_STACK_LINE(972)
																				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(972)
																				{
																					HX_STACK_LINE(972)
																					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																						HX_STACK_LINE(972)
																						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(972)
																						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																						HX_STACK_LINE(972)
																						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(972)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(972)
																					ret1->weak = false;
																				}
																				HX_STACK_LINE(972)
																				ret1->_immutable = immutable;
																				HX_STACK_LINE(972)
																				{
																					HX_STACK_LINE(972)
																					ret1->x = x;
																					HX_STACK_LINE(972)
																					ret1->y = y;
																					HX_STACK_LINE(972)
																					{
																					}
																					HX_STACK_LINE(972)
																					{
																					}
																				}
																				HX_STACK_LINE(972)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(972)
																	ret->zpp_inner = _Function_12_1::Block(x,y);
																	HX_STACK_LINE(972)
																	ret->zpp_inner->outer = ret;
																}
																else{
																	HX_STACK_LINE(972)
																	if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																		HX_STACK_LINE(972)
																		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																	}
																	HX_STACK_LINE(972)
																	{
																		HX_STACK_LINE(972)
																		::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(972)
																		if ((_this->_immutable)){
																			HX_STACK_LINE(972)
																			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																		}
																		HX_STACK_LINE(972)
																		if (((_this->_isimmutable_dyn() != null()))){
																			HX_STACK_LINE(972)
																			_this->_isimmutable();
																		}
																	}
																	HX_STACK_LINE(972)
																	if (((bool((x != x)) || bool((y != y))))){
																		HX_STACK_LINE(972)
																		hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																	}
																	struct _Function_12_1{
																		inline static Float Block( ::nape::geom::Vec2 &ret){
																			HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",972);
																			{
																				HX_STACK_LINE(972)
																				if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																					HX_STACK_LINE(972)
																					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																				}
																				HX_STACK_LINE(972)
																				{
																					HX_STACK_LINE(972)
																					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																					HX_STACK_LINE(972)
																					if (((_this->_validate_dyn() != null()))){
																						HX_STACK_LINE(972)
																						_this->_validate();
																					}
																				}
																				HX_STACK_LINE(972)
																				return ret->zpp_inner->x;
																			}
																			return null();
																		}
																	};
																	struct _Function_12_2{
																		inline static Float Block( ::nape::geom::Vec2 &ret){
																			HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",972);
																			{
																				HX_STACK_LINE(972)
																				if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																					HX_STACK_LINE(972)
																					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																				}
																				HX_STACK_LINE(972)
																				{
																					HX_STACK_LINE(972)
																					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																					HX_STACK_LINE(972)
																					if (((_this->_validate_dyn() != null()))){
																						HX_STACK_LINE(972)
																						_this->_validate();
																					}
																				}
																				HX_STACK_LINE(972)
																				return ret->zpp_inner->y;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(972)
																	if ((!(((bool((_Function_12_1::Block(ret) == x)) && bool((_Function_12_2::Block(ret) == y))))))){
																		HX_STACK_LINE(972)
																		{
																			HX_STACK_LINE(972)
																			ret->zpp_inner->x = x;
																			HX_STACK_LINE(972)
																			ret->zpp_inner->y = y;
																			HX_STACK_LINE(972)
																			{
																			}
																			HX_STACK_LINE(972)
																			{
																			}
																		}
																		HX_STACK_LINE(972)
																		{
																			HX_STACK_LINE(972)
																			::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(972)
																			if (((_this->_invalidate_dyn() != null()))){
																				HX_STACK_LINE(972)
																				_this->_invalidate(_this);
																			}
																		}
																	}
																	HX_STACK_LINE(972)
																	ret;
																}
																HX_STACK_LINE(972)
																ret->zpp_inner->weak = weak;
																HX_STACK_LINE(972)
																return ret;
															}
															return null();
														}
													};
													HX_STACK_LINE(972)
													return _Function_10_1::Block(p,weak);
												}
												return null();
											}
										};
										HX_STACK_LINE(972)
										fst = _Function_9_1::Block(p);
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",973);
												{
													HX_STACK_LINE(973)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(973)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(973)
													{
														HX_STACK_LINE(973)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(973)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(973)
															_this->_validate();
														}
													}
													HX_STACK_LINE(973)
													return p->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_3{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",973);
												{
													HX_STACK_LINE(973)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(973)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(973)
													{
														HX_STACK_LINE(973)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(973)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(973)
															_this->_validate();
														}
													}
													HX_STACK_LINE(973)
													return p->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(973)
										g->moveTo(_Function_9_2::Block(p),_Function_9_3::Block(p));
									}
									else{
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",975);
												{
													HX_STACK_LINE(975)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(975)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(975)
													{
														HX_STACK_LINE(975)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(975)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(975)
															_this->_validate();
														}
													}
													HX_STACK_LINE(975)
													return p->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",975);
												{
													HX_STACK_LINE(975)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(975)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(975)
													{
														HX_STACK_LINE(975)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(975)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(975)
															_this->_validate();
														}
													}
													HX_STACK_LINE(975)
													return p->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(975)
										g->lineTo(_Function_9_1::Block(p),_Function_9_2::Block(p));
									}
									HX_STACK_LINE(976)
									fsttime = false;
								}
								HX_STACK_LINE(978)
								{
									HX_STACK_LINE(978)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(978)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(978)
									{
										HX_STACK_LINE(978)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(978)
										if ((_this->_immutable)){
											HX_STACK_LINE(978)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(978)
										if (((_this->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(978)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(978)
									if ((p->zpp_inner->_inuse)){
										HX_STACK_LINE(978)
										hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(978)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(978)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(978)
									p->zpp_inner = null();
									HX_STACK_LINE(978)
									{
										HX_STACK_LINE(978)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(978)
										{
										}
										HX_STACK_LINE(978)
										o->zpp_pool = null();
										HX_STACK_LINE(978)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(978)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(978)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(978)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(978)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(978)
									{
										HX_STACK_LINE(978)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(978)
										{
										}
										HX_STACK_LINE(978)
										{
											HX_STACK_LINE(978)
											if (((o->outer != null()))){
												HX_STACK_LINE(978)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(978)
												o->outer = null();
											}
											HX_STACK_LINE(978)
											o->_isimmutable = null();
											HX_STACK_LINE(978)
											o->_validate = null();
											HX_STACK_LINE(978)
											o->_invalidate = null();
										}
										HX_STACK_LINE(978)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(978)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
							}
while(((vite != verts)));
						}
					}
					else{
						HX_STACK_LINE(983)
						hx::Throw (HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
					}
				}
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",989);
					{
						HX_STACK_LINE(989)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(989)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(989)
						{
							HX_STACK_LINE(989)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(989)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(989)
								_this->_validate();
							}
						}
						HX_STACK_LINE(989)
						return fst->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",989);
					{
						HX_STACK_LINE(989)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(989)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(989)
						{
							HX_STACK_LINE(989)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(989)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(989)
								_this->_validate();
							}
						}
						HX_STACK_LINE(989)
						return fst->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(989)
			g->lineTo(_Function_2_1::Block(fst),_Function_2_2::Block(fst));
			HX_STACK_LINE(990)
			{
				HX_STACK_LINE(990)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(990)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(990)
				{
					HX_STACK_LINE(990)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(990)
					if ((_this->_immutable)){
						HX_STACK_LINE(990)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(990)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(990)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(990)
				if ((fst->zpp_inner->_inuse)){
					HX_STACK_LINE(990)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(990)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(990)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(990)
				fst->zpp_inner = null();
				HX_STACK_LINE(990)
				{
					HX_STACK_LINE(990)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(990)
					{
					}
					HX_STACK_LINE(990)
					o->zpp_pool = null();
					HX_STACK_LINE(990)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(990)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(990)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(990)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(990)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(990)
				{
					HX_STACK_LINE(990)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(990)
					{
					}
					HX_STACK_LINE(990)
					{
						HX_STACK_LINE(990)
						if (((o->outer != null()))){
							HX_STACK_LINE(990)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(990)
							o->outer = null();
						}
						HX_STACK_LINE(990)
						o->_isimmutable = null();
						HX_STACK_LINE(990)
						o->_validate = null();
						HX_STACK_LINE(990)
						o->_invalidate = null();
					}
					HX_STACK_LINE(990)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(990)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		else{
			HX_STACK_LINE(993)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(995)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(996)
				{
					HX_STACK_LINE(996)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(996)
					while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(996)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(996)
						++(_g);
						HX_STACK_LINE(998)
						if (((vite == null()))){
							HX_STACK_LINE(998)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains null objects"));
						}
						HX_STACK_LINE(1001)
						if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
							HX_STACK_LINE(1001)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
						}
						HX_STACK_LINE(1003)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(1004)
						if (((bool((p != null())) && bool(p->zpp_disp)))){
							HX_STACK_LINE(1006)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1009)
						{
							HX_STACK_LINE(1010)
							::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(1011)
							if ((fsttime)){
								HX_STACK_LINE(1012)
								fst = v;
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1013);
										{
											HX_STACK_LINE(1013)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(1013)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1013)
											{
												HX_STACK_LINE(1013)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1013)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1013)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1013)
											return v->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1013);
										{
											HX_STACK_LINE(1013)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(1013)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1013)
											{
												HX_STACK_LINE(1013)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1013)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1013)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1013)
											return v->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1013)
								g->moveTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
							}
							else{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1015);
										{
											HX_STACK_LINE(1015)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(1015)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1015)
											{
												HX_STACK_LINE(1015)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1015)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1015)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1015)
											return v->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1015);
										{
											HX_STACK_LINE(1015)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(1015)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1015)
											{
												HX_STACK_LINE(1015)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1015)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1015)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1015)
											return v->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1015)
								g->lineTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
							}
							HX_STACK_LINE(1016)
							if ((!(fsttime))){
								HX_STACK_LINE(1016)
								if (((bool((v != null())) && bool(v->zpp_disp)))){
									HX_STACK_LINE(1016)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1016)
								{
									HX_STACK_LINE(1016)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1016)
									if ((_this->_immutable)){
										HX_STACK_LINE(1016)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(1016)
									if (((_this->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(1016)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(1016)
								if ((v->zpp_inner->_inuse)){
									HX_STACK_LINE(1016)
									hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(1016)
								::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1016)
								v->zpp_inner->outer = null();
								HX_STACK_LINE(1016)
								v->zpp_inner = null();
								HX_STACK_LINE(1016)
								{
									HX_STACK_LINE(1016)
									::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1016)
									{
									}
									HX_STACK_LINE(1016)
									o->zpp_pool = null();
									HX_STACK_LINE(1016)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(1016)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(1016)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1016)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(1016)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(1016)
								{
									HX_STACK_LINE(1016)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1016)
									{
									}
									HX_STACK_LINE(1016)
									{
										HX_STACK_LINE(1016)
										if (((o->outer != null()))){
											HX_STACK_LINE(1016)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1016)
											o->outer = null();
										}
										HX_STACK_LINE(1016)
										o->_isimmutable = null();
										HX_STACK_LINE(1016)
										o->_validate = null();
										HX_STACK_LINE(1016)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1016)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1016)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1017)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1046)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(1047)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(1048)
					for(::cpp::FastIterator_obj< ::nape::geom::Vec2 > *__it = ::cpp::CreateFastIterator< ::nape::geom::Vec2 >(lv->iterator());  __it->hasNext(); ){
						::nape::geom::Vec2 p = __it->next();
						{
							HX_STACK_LINE(1050)
							if (((p == null()))){
								HX_STACK_LINE(1050)
								hx::Throw (HX_CSTRING("Error: Vec2List contains null objects"));
							}
							HX_STACK_LINE(1052)
							if (((bool((p != null())) && bool(p->zpp_disp)))){
								HX_STACK_LINE(1054)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1057)
							{
								HX_STACK_LINE(1058)
								::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1059)
								if ((fsttime)){
									HX_STACK_LINE(1060)
									fst = v;
									struct _Function_7_1{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1061);
											{
												HX_STACK_LINE(1061)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(1061)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1061)
												{
													HX_STACK_LINE(1061)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1061)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(1061)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1061)
												return v->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1061);
											{
												HX_STACK_LINE(1061)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(1061)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1061)
												{
													HX_STACK_LINE(1061)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1061)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(1061)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1061)
												return v->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(1061)
									g->moveTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
								}
								else{
									struct _Function_7_1{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1063);
											{
												HX_STACK_LINE(1063)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(1063)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1063)
												{
													HX_STACK_LINE(1063)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1063)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(1063)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1063)
												return v->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1063);
											{
												HX_STACK_LINE(1063)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(1063)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1063)
												{
													HX_STACK_LINE(1063)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1063)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(1063)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1063)
												return v->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(1063)
									g->lineTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
								}
								HX_STACK_LINE(1064)
								if ((!(fsttime))){
									HX_STACK_LINE(1064)
									if (((bool((v != null())) && bool(v->zpp_disp)))){
										HX_STACK_LINE(1064)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1064)
									{
										HX_STACK_LINE(1064)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1064)
										if ((_this->_immutable)){
											HX_STACK_LINE(1064)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(1064)
										if (((_this->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(1064)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(1064)
									if ((v->zpp_inner->_inuse)){
										HX_STACK_LINE(1064)
										hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(1064)
									::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1064)
									v->zpp_inner->outer = null();
									HX_STACK_LINE(1064)
									v->zpp_inner = null();
									HX_STACK_LINE(1064)
									{
										HX_STACK_LINE(1064)
										::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1064)
										{
										}
										HX_STACK_LINE(1064)
										o->zpp_pool = null();
										HX_STACK_LINE(1064)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(1064)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(1064)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(1064)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(1064)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(1064)
									{
										HX_STACK_LINE(1064)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1064)
										{
										}
										HX_STACK_LINE(1064)
										{
											HX_STACK_LINE(1064)
											if (((o->outer != null()))){
												HX_STACK_LINE(1064)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(1064)
												o->outer = null();
											}
											HX_STACK_LINE(1064)
											o->_isimmutable = null();
											HX_STACK_LINE(1064)
											o->_validate = null();
											HX_STACK_LINE(1064)
											o->_invalidate = null();
										}
										HX_STACK_LINE(1064)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1064)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(1065)
								fsttime = false;
							}
						}
;
					}
				}
				else{
					HX_STACK_LINE(1069)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(1070)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(1071)
						if (((bool((lv != null())) && bool(lv->zpp_disp)))){
							HX_STACK_LINE(1073)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("GeomPoly")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1076)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(1077)
						if (((verts != null()))){
							HX_STACK_LINE(1078)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(1079)
							do{
								struct _Function_7_1{
									inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_GeomVert &vite){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1080);
										{
											HX_STACK_LINE(1080)
											Float x = vite->x;		HX_STACK_VAR(x,"x");
											Float y = vite->y;		HX_STACK_VAR(y,"y");
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(1080)
											if (((bool((x != x)) || bool((y != y))))){
												HX_STACK_LINE(1080)
												hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											HX_STACK_LINE(1080)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1080)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(1080)
												ret = ::nape::geom::Vec2_obj::__new(null(),null());
											}
											else{
												HX_STACK_LINE(1080)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(1080)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(1080)
												ret->zpp_pool = null();
												HX_STACK_LINE(1080)
												ret->zpp_disp = false;
												HX_STACK_LINE(1080)
												if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
													HX_STACK_LINE(1080)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
											HX_STACK_LINE(1080)
											if (((ret->zpp_inner == null()))){
												struct _Function_9_1{
													inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1080);
														{
															HX_STACK_LINE(1080)
															bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
															HX_STACK_LINE(1080)
															::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1080)
															{
																HX_STACK_LINE(1080)
																if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1080)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																}
																else{
																	HX_STACK_LINE(1080)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																	HX_STACK_LINE(1080)
																	::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1080)
																	ret1->next = null();
																}
																HX_STACK_LINE(1080)
																ret1->weak = false;
															}
															HX_STACK_LINE(1080)
															ret1->_immutable = immutable;
															HX_STACK_LINE(1080)
															{
																HX_STACK_LINE(1080)
																ret1->x = x;
																HX_STACK_LINE(1080)
																ret1->y = y;
																HX_STACK_LINE(1080)
																{
																}
																HX_STACK_LINE(1080)
																{
																}
															}
															HX_STACK_LINE(1080)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1080)
												ret->zpp_inner = _Function_9_1::Block(x,y);
												HX_STACK_LINE(1080)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(1080)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(1080)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1080)
												{
													HX_STACK_LINE(1080)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1080)
													if ((_this->_immutable)){
														HX_STACK_LINE(1080)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(1080)
													if (((_this->_isimmutable_dyn() != null()))){
														HX_STACK_LINE(1080)
														_this->_isimmutable();
													}
												}
												HX_STACK_LINE(1080)
												if (((bool((x != x)) || bool((y != y))))){
													HX_STACK_LINE(1080)
													hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												struct _Function_9_1{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1080);
														{
															HX_STACK_LINE(1080)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(1080)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(1080)
															{
																HX_STACK_LINE(1080)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(1080)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(1080)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(1080)
															return ret->zpp_inner->x;
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1080);
														{
															HX_STACK_LINE(1080)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(1080)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(1080)
															{
																HX_STACK_LINE(1080)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(1080)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(1080)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(1080)
															return ret->zpp_inner->y;
														}
														return null();
													}
												};
												HX_STACK_LINE(1080)
												if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
													HX_STACK_LINE(1080)
													{
														HX_STACK_LINE(1080)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(1080)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(1080)
														{
														}
														HX_STACK_LINE(1080)
														{
														}
													}
													HX_STACK_LINE(1080)
													{
														HX_STACK_LINE(1080)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1080)
														if (((_this->_invalidate_dyn() != null()))){
															HX_STACK_LINE(1080)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(1080)
												ret;
											}
											HX_STACK_LINE(1080)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(1080)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(1080)
								::nape::geom::Vec2 p = _Function_7_1::Block(vite);		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1081)
								vite = vite->next;
								HX_STACK_LINE(1082)
								{
									HX_STACK_LINE(1083)
									::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1084)
									if ((fsttime)){
										HX_STACK_LINE(1085)
										fst = v;
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1086);
												{
													HX_STACK_LINE(1086)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(1086)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1086)
													{
														HX_STACK_LINE(1086)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1086)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(1086)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1086)
													return v->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1086);
												{
													HX_STACK_LINE(1086)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(1086)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1086)
													{
														HX_STACK_LINE(1086)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1086)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(1086)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1086)
													return v->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(1086)
										g->moveTo(_Function_9_1::Block(v),_Function_9_2::Block(v));
									}
									else{
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1088);
												{
													HX_STACK_LINE(1088)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(1088)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1088)
													{
														HX_STACK_LINE(1088)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1088)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(1088)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1088)
													return v->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1088);
												{
													HX_STACK_LINE(1088)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(1088)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1088)
													{
														HX_STACK_LINE(1088)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1088)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(1088)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1088)
													return v->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(1088)
										g->lineTo(_Function_9_1::Block(v),_Function_9_2::Block(v));
									}
									HX_STACK_LINE(1089)
									if ((!(fsttime))){
										HX_STACK_LINE(1089)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1089)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1089)
											if ((_this->_immutable)){
												HX_STACK_LINE(1089)
												hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(1089)
											if (((_this->_isimmutable_dyn() != null()))){
												HX_STACK_LINE(1089)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(1089)
										if ((v->zpp_inner->_inuse)){
											HX_STACK_LINE(1089)
											hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
										}
										HX_STACK_LINE(1089)
										::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1089)
										v->zpp_inner->outer = null();
										HX_STACK_LINE(1089)
										v->zpp_inner = null();
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1089)
											{
											}
											HX_STACK_LINE(1089)
											o->zpp_pool = null();
											HX_STACK_LINE(1089)
											if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
												HX_STACK_LINE(1089)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
											}
											else{
												HX_STACK_LINE(1089)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
											}
											HX_STACK_LINE(1089)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
											HX_STACK_LINE(1089)
											o->zpp_disp = true;
										}
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1089)
											{
											}
											HX_STACK_LINE(1089)
											{
												HX_STACK_LINE(1089)
												if (((o->outer != null()))){
													HX_STACK_LINE(1089)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(1089)
													o->outer = null();
												}
												HX_STACK_LINE(1089)
												o->_isimmutable = null();
												HX_STACK_LINE(1089)
												o->_validate = null();
												HX_STACK_LINE(1089)
												o->_invalidate = null();
											}
											HX_STACK_LINE(1089)
											o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1089)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(1090)
									fsttime = false;
								}
								HX_STACK_LINE(1092)
								{
									HX_STACK_LINE(1092)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(1092)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1092)
									{
										HX_STACK_LINE(1092)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1092)
										if ((_this->_immutable)){
											HX_STACK_LINE(1092)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(1092)
										if (((_this->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(1092)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(1092)
									if ((p->zpp_inner->_inuse)){
										HX_STACK_LINE(1092)
										hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(1092)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1092)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(1092)
									p->zpp_inner = null();
									HX_STACK_LINE(1092)
									{
										HX_STACK_LINE(1092)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1092)
										{
										}
										HX_STACK_LINE(1092)
										o->zpp_pool = null();
										HX_STACK_LINE(1092)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(1092)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(1092)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(1092)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(1092)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(1092)
									{
										HX_STACK_LINE(1092)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1092)
										{
										}
										HX_STACK_LINE(1092)
										{
											HX_STACK_LINE(1092)
											if (((o->outer != null()))){
												HX_STACK_LINE(1092)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(1092)
												o->outer = null();
											}
											HX_STACK_LINE(1092)
											o->_isimmutable = null();
											HX_STACK_LINE(1092)
											o->_validate = null();
											HX_STACK_LINE(1092)
											o->_invalidate = null();
										}
										HX_STACK_LINE(1092)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1092)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
							}
while(((vite != verts)));
						}
					}
					else{
						HX_STACK_LINE(1097)
						hx::Throw (HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
					}
				}
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1103);
					{
						HX_STACK_LINE(1103)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(1103)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1103)
						{
							HX_STACK_LINE(1103)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1103)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1103)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1103)
						return fst->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1103);
					{
						HX_STACK_LINE(1103)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(1103)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1103)
						{
							HX_STACK_LINE(1103)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1103)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1103)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1103)
						return fst->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1103)
			g->lineTo(_Function_2_1::Block(fst),_Function_2_2::Block(fst));
			HX_STACK_LINE(1104)
			{
				HX_STACK_LINE(1104)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(1104)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1104)
				{
					HX_STACK_LINE(1104)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1104)
					if ((_this->_immutable)){
						HX_STACK_LINE(1104)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1104)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1104)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1104)
				if ((fst->zpp_inner->_inuse)){
					HX_STACK_LINE(1104)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1104)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1104)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(1104)
				fst->zpp_inner = null();
				HX_STACK_LINE(1104)
				{
					HX_STACK_LINE(1104)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1104)
					{
					}
					HX_STACK_LINE(1104)
					o->zpp_pool = null();
					HX_STACK_LINE(1104)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1104)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1104)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1104)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1104)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1104)
				{
					HX_STACK_LINE(1104)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1104)
					{
					}
					HX_STACK_LINE(1104)
					{
						HX_STACK_LINE(1104)
						if (((o->outer != null()))){
							HX_STACK_LINE(1104)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1104)
							o->outer = null();
						}
						HX_STACK_LINE(1104)
						o->_isimmutable = null();
						HX_STACK_LINE(1104)
						o->_validate = null();
						HX_STACK_LINE(1104)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1104)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1104)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1106)
		g->endFill();
		HX_STACK_LINE(1107)
		if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(1109)
			Array< ::nape::geom::Vec2 > lv = polygon;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(1110)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1111)
			while(((i < lv->length))){
				HX_STACK_LINE(1112)
				::nape::geom::Vec2 cur = lv->__get(i);		HX_STACK_VAR(cur,"cur");
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &cur){
						HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1116);
						{
							HX_STACK_LINE(1117)
							{
								HX_STACK_LINE(1117)
								if (((bool((cur != null())) && bool(cur->zpp_disp)))){
									HX_STACK_LINE(1117)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1117)
								{
									HX_STACK_LINE(1117)
									::zpp_nape::geom::ZPP_Vec2 _this = cur->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1117)
									if ((_this->_immutable)){
										HX_STACK_LINE(1117)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(1117)
									if (((_this->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(1117)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(1117)
								if ((cur->zpp_inner->_inuse)){
									HX_STACK_LINE(1117)
									hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(1117)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1117)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(1117)
								cur->zpp_inner = null();
								HX_STACK_LINE(1117)
								{
									HX_STACK_LINE(1117)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1117)
									{
									}
									HX_STACK_LINE(1117)
									o->zpp_pool = null();
									HX_STACK_LINE(1117)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(1117)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(1117)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1117)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(1117)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(1117)
								{
									HX_STACK_LINE(1117)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1117)
									{
									}
									HX_STACK_LINE(1117)
									{
										HX_STACK_LINE(1117)
										if (((o->outer != null()))){
											HX_STACK_LINE(1117)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1117)
											o->outer = null();
										}
										HX_STACK_LINE(1117)
										o->_isimmutable = null();
										HX_STACK_LINE(1117)
										o->_validate = null();
										HX_STACK_LINE(1117)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1117)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1117)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1118)
							return true;
						}
						return null();
					}
				};
				HX_STACK_LINE(1113)
				if (((  ((cur->zpp_inner->weak)) ? bool(_Function_3_1::Block(cur)) : bool(false) ))){
					HX_STACK_LINE(1124)
					lv->splice(i,(int)1);
					HX_STACK_LINE(1125)
					continue;
				}
				HX_STACK_LINE(1127)
				(i)++;
			}
		}
		else{
			HX_STACK_LINE(1155)
			if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
				HX_STACK_LINE(1156)
				::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(1157)
				if (((lv->zpp_inner->_validate_dyn() != null()))){
					HX_STACK_LINE(1157)
					lv->zpp_inner->_validate();
				}
				HX_STACK_LINE(1158)
				::zpp_nape::util::ZNPList_ZPP_Vec2 ins = lv->zpp_inner->inner;		HX_STACK_VAR(ins,"ins");
				HX_STACK_LINE(1159)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(1160)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(1161)
				while(((cur != null()))){
					HX_STACK_LINE(1162)
					::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1163)
					if ((x->outer->zpp_inner->weak)){
						HX_STACK_LINE(1166)
						cur = ins->erase(pre);
						HX_STACK_LINE(1167)
						if ((x->outer->zpp_inner->weak)){
							HX_STACK_LINE(1171)
							{
								HX_STACK_LINE(1171)
								::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1171)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1171)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1171)
								{
									HX_STACK_LINE(1171)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1171)
									if ((_this1->_immutable)){
										HX_STACK_LINE(1171)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(1171)
									if (((_this1->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(1171)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(1171)
								if ((_this->zpp_inner->_inuse)){
									HX_STACK_LINE(1171)
									hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(1171)
								::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1171)
								_this->zpp_inner->outer = null();
								HX_STACK_LINE(1171)
								_this->zpp_inner = null();
								HX_STACK_LINE(1171)
								{
									HX_STACK_LINE(1171)
									::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1171)
									{
									}
									HX_STACK_LINE(1171)
									o->zpp_pool = null();
									HX_STACK_LINE(1171)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(1171)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(1171)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1171)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(1171)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(1171)
								{
									HX_STACK_LINE(1171)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1171)
									{
									}
									HX_STACK_LINE(1171)
									{
										HX_STACK_LINE(1171)
										if (((o->outer != null()))){
											HX_STACK_LINE(1171)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1171)
											o->outer = null();
										}
										HX_STACK_LINE(1171)
										o->_isimmutable = null();
										HX_STACK_LINE(1171)
										o->_validate = null();
										HX_STACK_LINE(1171)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1171)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1171)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1172)
							true;
						}
						else{
							HX_STACK_LINE(1174)
							false;
						}
					}
					else{
						HX_STACK_LINE(1180)
						pre = cur;
						HX_STACK_LINE(1181)
						cur = cur->next;
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawPolygon( Dynamic polygon,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawPolygon","nape/util/ShapeDebug.hx",560);
		HX_STACK_THIS(this);
		HX_STACK_ARG(polygon,"polygon");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(562)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(562)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(565)
		if (((polygon == null()))){
			HX_STACK_LINE(565)
			hx::Throw (HX_CSTRING("Error: Cannot draw null polygon"));
		}
		HX_STACK_LINE(567)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(568)
		g->lineStyle(0.1,(int(colour) & int((int)16777215)),1.0,null(),null(),null(),null(),null());
		HX_STACK_LINE(569)
		::nape::geom::Vec2 fst = null();		HX_STACK_VAR(fst,"fst");
		HX_STACK_LINE(570)
		bool fsttime = true;		HX_STACK_VAR(fsttime,"fsttime");
		HX_STACK_LINE(571)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(572)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(574)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(575)
				{
					HX_STACK_LINE(575)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(575)
					while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(575)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(575)
						++(_g);
						HX_STACK_LINE(577)
						if (((vite == null()))){
							HX_STACK_LINE(577)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains null objects"));
						}
						HX_STACK_LINE(580)
						if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
							HX_STACK_LINE(580)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
						}
						HX_STACK_LINE(582)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(583)
						if (((bool((p != null())) && bool(p->zpp_disp)))){
							HX_STACK_LINE(585)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(588)
						{
							HX_STACK_LINE(589)
							if ((fsttime)){
								struct _Function_7_1{
									inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",590);
										{
											HX_STACK_LINE(590)
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(590)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(590)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											struct _Function_8_1{
												inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p,bool &weak){
													HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",590);
													{
														struct _Function_9_1{
															inline static Float Block( ::nape::geom::Vec2 &p){
																HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",590);
																{
																	HX_STACK_LINE(590)
																	if ((p->zpp_disp)){
																		HX_STACK_LINE(590)
																		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																	}
																	HX_STACK_LINE(590)
																	{
																		HX_STACK_LINE(590)
																		::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(590)
																		if (((_this->_validate_dyn() != null()))){
																			HX_STACK_LINE(590)
																			_this->_validate();
																		}
																	}
																	HX_STACK_LINE(590)
																	return p->zpp_inner->x;
																}
																return null();
															}
														};
														struct _Function_9_2{
															inline static Float Block( ::nape::geom::Vec2 &p){
																HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",590);
																{
																	HX_STACK_LINE(590)
																	if ((p->zpp_disp)){
																		HX_STACK_LINE(590)
																		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																	}
																	HX_STACK_LINE(590)
																	{
																		HX_STACK_LINE(590)
																		::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(590)
																		if (((_this->_validate_dyn() != null()))){
																			HX_STACK_LINE(590)
																			_this->_validate();
																		}
																	}
																	HX_STACK_LINE(590)
																	return p->zpp_inner->y;
																}
																return null();
															}
														};
														HX_STACK_LINE(590)
														Float x = _Function_9_1::Block(p);		HX_STACK_VAR(x,"x");
														Float y = _Function_9_2::Block(p);		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(590)
														if (((bool((x != x)) || bool((y != y))))){
															HX_STACK_LINE(590)
															hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
														}
														HX_STACK_LINE(590)
														::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(590)
														if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
															HX_STACK_LINE(590)
															ret = ::nape::geom::Vec2_obj::__new(null(),null());
														}
														else{
															HX_STACK_LINE(590)
															ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
															HX_STACK_LINE(590)
															::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
															HX_STACK_LINE(590)
															ret->zpp_pool = null();
															HX_STACK_LINE(590)
															ret->zpp_disp = false;
															HX_STACK_LINE(590)
															if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																HX_STACK_LINE(590)
																::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
															}
														}
														HX_STACK_LINE(590)
														if (((ret->zpp_inner == null()))){
															struct _Function_10_1{
																inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",590);
																	{
																		HX_STACK_LINE(590)
																		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																		HX_STACK_LINE(590)
																		::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(590)
																		{
																			HX_STACK_LINE(590)
																			if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																				HX_STACK_LINE(590)
																				ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(590)
																				ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																				HX_STACK_LINE(590)
																				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(590)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(590)
																			ret1->weak = false;
																		}
																		HX_STACK_LINE(590)
																		ret1->_immutable = immutable;
																		HX_STACK_LINE(590)
																		{
																			HX_STACK_LINE(590)
																			ret1->x = x;
																			HX_STACK_LINE(590)
																			ret1->y = y;
																			HX_STACK_LINE(590)
																			{
																			}
																			HX_STACK_LINE(590)
																			{
																			}
																		}
																		HX_STACK_LINE(590)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(590)
															ret->zpp_inner = _Function_10_1::Block(x,y);
															HX_STACK_LINE(590)
															ret->zpp_inner->outer = ret;
														}
														else{
															HX_STACK_LINE(590)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(590)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(590)
															{
																HX_STACK_LINE(590)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(590)
																if ((_this->_immutable)){
																	HX_STACK_LINE(590)
																	hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																}
																HX_STACK_LINE(590)
																if (((_this->_isimmutable_dyn() != null()))){
																	HX_STACK_LINE(590)
																	_this->_isimmutable();
																}
															}
															HX_STACK_LINE(590)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(590)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															struct _Function_10_1{
																inline static Float Block( ::nape::geom::Vec2 &ret){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",590);
																	{
																		HX_STACK_LINE(590)
																		if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																			HX_STACK_LINE(590)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(590)
																		{
																			HX_STACK_LINE(590)
																			::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(590)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(590)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(590)
																		return ret->zpp_inner->x;
																	}
																	return null();
																}
															};
															struct _Function_10_2{
																inline static Float Block( ::nape::geom::Vec2 &ret){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",590);
																	{
																		HX_STACK_LINE(590)
																		if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																			HX_STACK_LINE(590)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(590)
																		{
																			HX_STACK_LINE(590)
																			::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(590)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(590)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(590)
																		return ret->zpp_inner->y;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(590)
															if ((!(((bool((_Function_10_1::Block(ret) == x)) && bool((_Function_10_2::Block(ret) == y))))))){
																HX_STACK_LINE(590)
																{
																	HX_STACK_LINE(590)
																	ret->zpp_inner->x = x;
																	HX_STACK_LINE(590)
																	ret->zpp_inner->y = y;
																	HX_STACK_LINE(590)
																	{
																	}
																	HX_STACK_LINE(590)
																	{
																	}
																}
																HX_STACK_LINE(590)
																{
																	HX_STACK_LINE(590)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(590)
																	if (((_this->_invalidate_dyn() != null()))){
																		HX_STACK_LINE(590)
																		_this->_invalidate(_this);
																	}
																}
															}
															HX_STACK_LINE(590)
															ret;
														}
														HX_STACK_LINE(590)
														ret->zpp_inner->weak = weak;
														HX_STACK_LINE(590)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(590)
											return _Function_8_1::Block(p,weak);
										}
										return null();
									}
								};
								HX_STACK_LINE(590)
								fst = _Function_7_1::Block(p);
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",591);
										{
											HX_STACK_LINE(591)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(591)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(591)
											{
												HX_STACK_LINE(591)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(591)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(591)
													_this->_validate();
												}
											}
											HX_STACK_LINE(591)
											return p->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_3{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",591);
										{
											HX_STACK_LINE(591)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(591)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(591)
											{
												HX_STACK_LINE(591)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(591)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(591)
													_this->_validate();
												}
											}
											HX_STACK_LINE(591)
											return p->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(591)
								g->moveTo(_Function_7_2::Block(p),_Function_7_3::Block(p));
							}
							else{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",593);
										{
											HX_STACK_LINE(593)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(593)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(593)
											{
												HX_STACK_LINE(593)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(593)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(593)
													_this->_validate();
												}
											}
											HX_STACK_LINE(593)
											return p->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",593);
										{
											HX_STACK_LINE(593)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(593)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(593)
											{
												HX_STACK_LINE(593)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(593)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(593)
													_this->_validate();
												}
											}
											HX_STACK_LINE(593)
											return p->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(593)
								g->lineTo(_Function_7_1::Block(p),_Function_7_2::Block(p));
							}
							HX_STACK_LINE(594)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(621)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(622)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(623)
					for(::cpp::FastIterator_obj< ::nape::geom::Vec2 > *__it = ::cpp::CreateFastIterator< ::nape::geom::Vec2 >(lv->iterator());  __it->hasNext(); ){
						::nape::geom::Vec2 p = __it->next();
						{
							HX_STACK_LINE(625)
							if (((p == null()))){
								HX_STACK_LINE(625)
								hx::Throw (HX_CSTRING("Error: Vec2List contains null objects"));
							}
							HX_STACK_LINE(627)
							if (((bool((p != null())) && bool(p->zpp_disp)))){
								HX_STACK_LINE(629)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(632)
							{
								HX_STACK_LINE(633)
								if ((fsttime)){
									struct _Function_7_1{
										inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",634);
											{
												HX_STACK_LINE(634)
												bool weak = false;		HX_STACK_VAR(weak,"weak");
												HX_STACK_LINE(634)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(634)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												struct _Function_8_1{
													inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p,bool &weak){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",634);
														{
															struct _Function_9_1{
																inline static Float Block( ::nape::geom::Vec2 &p){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",634);
																	{
																		HX_STACK_LINE(634)
																		if ((p->zpp_disp)){
																			HX_STACK_LINE(634)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(634)
																		{
																			HX_STACK_LINE(634)
																			::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(634)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(634)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(634)
																		return p->zpp_inner->x;
																	}
																	return null();
																}
															};
															struct _Function_9_2{
																inline static Float Block( ::nape::geom::Vec2 &p){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",634);
																	{
																		HX_STACK_LINE(634)
																		if ((p->zpp_disp)){
																			HX_STACK_LINE(634)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(634)
																		{
																			HX_STACK_LINE(634)
																			::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(634)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(634)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(634)
																		return p->zpp_inner->y;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(634)
															Float x = _Function_9_1::Block(p);		HX_STACK_VAR(x,"x");
															Float y = _Function_9_2::Block(p);		HX_STACK_VAR(y,"y");
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
																struct _Function_10_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",634);
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
																ret->zpp_inner = _Function_10_1::Block(x,y);
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
																	if (((_this->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(634)
																		_this->_isimmutable();
																	}
																}
																HX_STACK_LINE(634)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(634)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_10_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",634);
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
																				if (((_this->_validate_dyn() != null()))){
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
																struct _Function_10_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",634);
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
																				if (((_this->_validate_dyn() != null()))){
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
																if ((!(((bool((_Function_10_1::Block(ret) == x)) && bool((_Function_10_2::Block(ret) == y))))))){
																	HX_STACK_LINE(634)
																	{
																		HX_STACK_LINE(634)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(634)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(634)
																		{
																		}
																		HX_STACK_LINE(634)
																		{
																		}
																	}
																	HX_STACK_LINE(634)
																	{
																		HX_STACK_LINE(634)
																		::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(634)
																		if (((_this->_invalidate_dyn() != null()))){
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
												return _Function_8_1::Block(p,weak);
											}
											return null();
										}
									};
									HX_STACK_LINE(634)
									fst = _Function_7_1::Block(p);
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",635);
											{
												HX_STACK_LINE(635)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(635)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(635)
												{
													HX_STACK_LINE(635)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(635)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(635)
														_this->_validate();
													}
												}
												HX_STACK_LINE(635)
												return p->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_3{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",635);
											{
												HX_STACK_LINE(635)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(635)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(635)
												{
													HX_STACK_LINE(635)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(635)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(635)
														_this->_validate();
													}
												}
												HX_STACK_LINE(635)
												return p->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(635)
									g->moveTo(_Function_7_2::Block(p),_Function_7_3::Block(p));
								}
								else{
									struct _Function_7_1{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",637);
											{
												HX_STACK_LINE(637)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(637)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(637)
												{
													HX_STACK_LINE(637)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(637)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(637)
														_this->_validate();
													}
												}
												HX_STACK_LINE(637)
												return p->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",637);
											{
												HX_STACK_LINE(637)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(637)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(637)
												{
													HX_STACK_LINE(637)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(637)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(637)
														_this->_validate();
													}
												}
												HX_STACK_LINE(637)
												return p->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(637)
									g->lineTo(_Function_7_1::Block(p),_Function_7_2::Block(p));
								}
								HX_STACK_LINE(638)
								fsttime = false;
							}
						}
;
					}
				}
				else{
					HX_STACK_LINE(642)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(643)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(644)
						if (((bool((lv != null())) && bool(lv->zpp_disp)))){
							HX_STACK_LINE(646)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("GeomPoly")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(649)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(650)
						if (((verts != null()))){
							HX_STACK_LINE(651)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(652)
							do{
								struct _Function_7_1{
									inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_GeomVert &vite){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",653);
										{
											HX_STACK_LINE(653)
											Float x = vite->x;		HX_STACK_VAR(x,"x");
											Float y = vite->y;		HX_STACK_VAR(y,"y");
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(653)
											if (((bool((x != x)) || bool((y != y))))){
												HX_STACK_LINE(653)
												hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											HX_STACK_LINE(653)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(653)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(653)
												ret = ::nape::geom::Vec2_obj::__new(null(),null());
											}
											else{
												HX_STACK_LINE(653)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(653)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(653)
												ret->zpp_pool = null();
												HX_STACK_LINE(653)
												ret->zpp_disp = false;
												HX_STACK_LINE(653)
												if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
													HX_STACK_LINE(653)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
											HX_STACK_LINE(653)
											if (((ret->zpp_inner == null()))){
												struct _Function_9_1{
													inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",653);
														{
															HX_STACK_LINE(653)
															bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
															HX_STACK_LINE(653)
															::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(653)
															{
																HX_STACK_LINE(653)
																if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																	HX_STACK_LINE(653)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																}
																else{
																	HX_STACK_LINE(653)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																	HX_STACK_LINE(653)
																	::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(653)
																	ret1->next = null();
																}
																HX_STACK_LINE(653)
																ret1->weak = false;
															}
															HX_STACK_LINE(653)
															ret1->_immutable = immutable;
															HX_STACK_LINE(653)
															{
																HX_STACK_LINE(653)
																ret1->x = x;
																HX_STACK_LINE(653)
																ret1->y = y;
																HX_STACK_LINE(653)
																{
																}
																HX_STACK_LINE(653)
																{
																}
															}
															HX_STACK_LINE(653)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(653)
												ret->zpp_inner = _Function_9_1::Block(x,y);
												HX_STACK_LINE(653)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(653)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(653)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(653)
												{
													HX_STACK_LINE(653)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(653)
													if ((_this->_immutable)){
														HX_STACK_LINE(653)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(653)
													if (((_this->_isimmutable_dyn() != null()))){
														HX_STACK_LINE(653)
														_this->_isimmutable();
													}
												}
												HX_STACK_LINE(653)
												if (((bool((x != x)) || bool((y != y))))){
													HX_STACK_LINE(653)
													hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												struct _Function_9_1{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",653);
														{
															HX_STACK_LINE(653)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(653)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(653)
															{
																HX_STACK_LINE(653)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(653)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(653)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(653)
															return ret->zpp_inner->x;
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",653);
														{
															HX_STACK_LINE(653)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(653)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(653)
															{
																HX_STACK_LINE(653)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(653)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(653)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(653)
															return ret->zpp_inner->y;
														}
														return null();
													}
												};
												HX_STACK_LINE(653)
												if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
													HX_STACK_LINE(653)
													{
														HX_STACK_LINE(653)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(653)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(653)
														{
														}
														HX_STACK_LINE(653)
														{
														}
													}
													HX_STACK_LINE(653)
													{
														HX_STACK_LINE(653)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(653)
														if (((_this->_invalidate_dyn() != null()))){
															HX_STACK_LINE(653)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(653)
												ret;
											}
											HX_STACK_LINE(653)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(653)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(653)
								::nape::geom::Vec2 p = _Function_7_1::Block(vite);		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(654)
								vite = vite->next;
								HX_STACK_LINE(655)
								{
									HX_STACK_LINE(656)
									if ((fsttime)){
										struct _Function_9_1{
											inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",657);
												{
													HX_STACK_LINE(657)
													bool weak = false;		HX_STACK_VAR(weak,"weak");
													HX_STACK_LINE(657)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(657)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													struct _Function_10_1{
														inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p,bool &weak){
															HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",657);
															{
																struct _Function_11_1{
																	inline static Float Block( ::nape::geom::Vec2 &p){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",657);
																		{
																			HX_STACK_LINE(657)
																			if ((p->zpp_disp)){
																				HX_STACK_LINE(657)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(657)
																			{
																				HX_STACK_LINE(657)
																				::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(657)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(657)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(657)
																			return p->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_11_2{
																	inline static Float Block( ::nape::geom::Vec2 &p){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",657);
																		{
																			HX_STACK_LINE(657)
																			if ((p->zpp_disp)){
																				HX_STACK_LINE(657)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(657)
																			{
																				HX_STACK_LINE(657)
																				::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(657)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(657)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(657)
																			return p->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(657)
																Float x = _Function_11_1::Block(p);		HX_STACK_VAR(x,"x");
																Float y = _Function_11_2::Block(p);		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(657)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(657)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																HX_STACK_LINE(657)
																::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
																HX_STACK_LINE(657)
																if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																	HX_STACK_LINE(657)
																	ret = ::nape::geom::Vec2_obj::__new(null(),null());
																}
																else{
																	HX_STACK_LINE(657)
																	ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																	HX_STACK_LINE(657)
																	::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																	HX_STACK_LINE(657)
																	ret->zpp_pool = null();
																	HX_STACK_LINE(657)
																	ret->zpp_disp = false;
																	HX_STACK_LINE(657)
																	if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																		HX_STACK_LINE(657)
																		::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																	}
																}
																HX_STACK_LINE(657)
																if (((ret->zpp_inner == null()))){
																	struct _Function_12_1{
																		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																			HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",657);
																			{
																				HX_STACK_LINE(657)
																				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																				HX_STACK_LINE(657)
																				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(657)
																				{
																					HX_STACK_LINE(657)
																					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																						HX_STACK_LINE(657)
																						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(657)
																						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																						HX_STACK_LINE(657)
																						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(657)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(657)
																					ret1->weak = false;
																				}
																				HX_STACK_LINE(657)
																				ret1->_immutable = immutable;
																				HX_STACK_LINE(657)
																				{
																					HX_STACK_LINE(657)
																					ret1->x = x;
																					HX_STACK_LINE(657)
																					ret1->y = y;
																					HX_STACK_LINE(657)
																					{
																					}
																					HX_STACK_LINE(657)
																					{
																					}
																				}
																				HX_STACK_LINE(657)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(657)
																	ret->zpp_inner = _Function_12_1::Block(x,y);
																	HX_STACK_LINE(657)
																	ret->zpp_inner->outer = ret;
																}
																else{
																	HX_STACK_LINE(657)
																	if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																		HX_STACK_LINE(657)
																		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																	}
																	HX_STACK_LINE(657)
																	{
																		HX_STACK_LINE(657)
																		::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(657)
																		if ((_this->_immutable)){
																			HX_STACK_LINE(657)
																			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																		}
																		HX_STACK_LINE(657)
																		if (((_this->_isimmutable_dyn() != null()))){
																			HX_STACK_LINE(657)
																			_this->_isimmutable();
																		}
																	}
																	HX_STACK_LINE(657)
																	if (((bool((x != x)) || bool((y != y))))){
																		HX_STACK_LINE(657)
																		hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																	}
																	struct _Function_12_1{
																		inline static Float Block( ::nape::geom::Vec2 &ret){
																			HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",657);
																			{
																				HX_STACK_LINE(657)
																				if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																					HX_STACK_LINE(657)
																					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																				}
																				HX_STACK_LINE(657)
																				{
																					HX_STACK_LINE(657)
																					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																					HX_STACK_LINE(657)
																					if (((_this->_validate_dyn() != null()))){
																						HX_STACK_LINE(657)
																						_this->_validate();
																					}
																				}
																				HX_STACK_LINE(657)
																				return ret->zpp_inner->x;
																			}
																			return null();
																		}
																	};
																	struct _Function_12_2{
																		inline static Float Block( ::nape::geom::Vec2 &ret){
																			HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",657);
																			{
																				HX_STACK_LINE(657)
																				if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																					HX_STACK_LINE(657)
																					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																				}
																				HX_STACK_LINE(657)
																				{
																					HX_STACK_LINE(657)
																					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																					HX_STACK_LINE(657)
																					if (((_this->_validate_dyn() != null()))){
																						HX_STACK_LINE(657)
																						_this->_validate();
																					}
																				}
																				HX_STACK_LINE(657)
																				return ret->zpp_inner->y;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(657)
																	if ((!(((bool((_Function_12_1::Block(ret) == x)) && bool((_Function_12_2::Block(ret) == y))))))){
																		HX_STACK_LINE(657)
																		{
																			HX_STACK_LINE(657)
																			ret->zpp_inner->x = x;
																			HX_STACK_LINE(657)
																			ret->zpp_inner->y = y;
																			HX_STACK_LINE(657)
																			{
																			}
																			HX_STACK_LINE(657)
																			{
																			}
																		}
																		HX_STACK_LINE(657)
																		{
																			HX_STACK_LINE(657)
																			::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(657)
																			if (((_this->_invalidate_dyn() != null()))){
																				HX_STACK_LINE(657)
																				_this->_invalidate(_this);
																			}
																		}
																	}
																	HX_STACK_LINE(657)
																	ret;
																}
																HX_STACK_LINE(657)
																ret->zpp_inner->weak = weak;
																HX_STACK_LINE(657)
																return ret;
															}
															return null();
														}
													};
													HX_STACK_LINE(657)
													return _Function_10_1::Block(p,weak);
												}
												return null();
											}
										};
										HX_STACK_LINE(657)
										fst = _Function_9_1::Block(p);
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",658);
												{
													HX_STACK_LINE(658)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(658)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(658)
													{
														HX_STACK_LINE(658)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(658)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(658)
															_this->_validate();
														}
													}
													HX_STACK_LINE(658)
													return p->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_3{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",658);
												{
													HX_STACK_LINE(658)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(658)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(658)
													{
														HX_STACK_LINE(658)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(658)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(658)
															_this->_validate();
														}
													}
													HX_STACK_LINE(658)
													return p->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(658)
										g->moveTo(_Function_9_2::Block(p),_Function_9_3::Block(p));
									}
									else{
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",660);
												{
													HX_STACK_LINE(660)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(660)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(660)
													{
														HX_STACK_LINE(660)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(660)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(660)
															_this->_validate();
														}
													}
													HX_STACK_LINE(660)
													return p->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",660);
												{
													HX_STACK_LINE(660)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(660)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(660)
													{
														HX_STACK_LINE(660)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(660)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(660)
															_this->_validate();
														}
													}
													HX_STACK_LINE(660)
													return p->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(660)
										g->lineTo(_Function_9_1::Block(p),_Function_9_2::Block(p));
									}
									HX_STACK_LINE(661)
									fsttime = false;
								}
								HX_STACK_LINE(663)
								{
									HX_STACK_LINE(663)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(663)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(663)
									{
										HX_STACK_LINE(663)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(663)
										if ((_this->_immutable)){
											HX_STACK_LINE(663)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(663)
										if (((_this->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(663)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(663)
									if ((p->zpp_inner->_inuse)){
										HX_STACK_LINE(663)
										hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(663)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(663)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(663)
									p->zpp_inner = null();
									HX_STACK_LINE(663)
									{
										HX_STACK_LINE(663)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(663)
										{
										}
										HX_STACK_LINE(663)
										o->zpp_pool = null();
										HX_STACK_LINE(663)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(663)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(663)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(663)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(663)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(663)
									{
										HX_STACK_LINE(663)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(663)
										{
										}
										HX_STACK_LINE(663)
										{
											HX_STACK_LINE(663)
											if (((o->outer != null()))){
												HX_STACK_LINE(663)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(663)
												o->outer = null();
											}
											HX_STACK_LINE(663)
											o->_isimmutable = null();
											HX_STACK_LINE(663)
											o->_validate = null();
											HX_STACK_LINE(663)
											o->_invalidate = null();
										}
										HX_STACK_LINE(663)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(663)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
							}
while(((vite != verts)));
						}
					}
					else{
						HX_STACK_LINE(668)
						hx::Throw (HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
					}
				}
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",674);
					{
						HX_STACK_LINE(674)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(674)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(674)
						{
							HX_STACK_LINE(674)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(674)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(674)
								_this->_validate();
							}
						}
						HX_STACK_LINE(674)
						return fst->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",674);
					{
						HX_STACK_LINE(674)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(674)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(674)
						{
							HX_STACK_LINE(674)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(674)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(674)
								_this->_validate();
							}
						}
						HX_STACK_LINE(674)
						return fst->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(674)
			g->lineTo(_Function_2_1::Block(fst),_Function_2_2::Block(fst));
			HX_STACK_LINE(675)
			{
				HX_STACK_LINE(675)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(675)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(675)
				{
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(675)
					if ((_this->_immutable)){
						HX_STACK_LINE(675)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(675)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(675)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(675)
				if ((fst->zpp_inner->_inuse)){
					HX_STACK_LINE(675)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(675)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(675)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(675)
				fst->zpp_inner = null();
				HX_STACK_LINE(675)
				{
					HX_STACK_LINE(675)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(675)
					{
					}
					HX_STACK_LINE(675)
					o->zpp_pool = null();
					HX_STACK_LINE(675)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(675)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(675)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(675)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(675)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(675)
				{
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(675)
					{
					}
					HX_STACK_LINE(675)
					{
						HX_STACK_LINE(675)
						if (((o->outer != null()))){
							HX_STACK_LINE(675)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(675)
							o->outer = null();
						}
						HX_STACK_LINE(675)
						o->_isimmutable = null();
						HX_STACK_LINE(675)
						o->_validate = null();
						HX_STACK_LINE(675)
						o->_invalidate = null();
					}
					HX_STACK_LINE(675)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(675)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		else{
			HX_STACK_LINE(678)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(680)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(681)
				{
					HX_STACK_LINE(681)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(681)
					while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(681)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(681)
						++(_g);
						HX_STACK_LINE(683)
						if (((vite == null()))){
							HX_STACK_LINE(683)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains null objects"));
						}
						HX_STACK_LINE(686)
						if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
							HX_STACK_LINE(686)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
						}
						HX_STACK_LINE(688)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(689)
						if (((bool((p != null())) && bool(p->zpp_disp)))){
							HX_STACK_LINE(691)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(694)
						{
							HX_STACK_LINE(695)
							::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(696)
							if ((fsttime)){
								HX_STACK_LINE(697)
								fst = v;
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",698);
										{
											HX_STACK_LINE(698)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(698)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(698)
											{
												HX_STACK_LINE(698)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(698)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(698)
													_this->_validate();
												}
											}
											HX_STACK_LINE(698)
											return v->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",698);
										{
											HX_STACK_LINE(698)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(698)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(698)
											{
												HX_STACK_LINE(698)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(698)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(698)
													_this->_validate();
												}
											}
											HX_STACK_LINE(698)
											return v->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(698)
								g->moveTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
							}
							else{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",700);
										{
											HX_STACK_LINE(700)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(700)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(700)
											{
												HX_STACK_LINE(700)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(700)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(700)
													_this->_validate();
												}
											}
											HX_STACK_LINE(700)
											return v->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",700);
										{
											HX_STACK_LINE(700)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(700)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(700)
											{
												HX_STACK_LINE(700)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(700)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(700)
													_this->_validate();
												}
											}
											HX_STACK_LINE(700)
											return v->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(700)
								g->lineTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
							}
							HX_STACK_LINE(701)
							if ((!(fsttime))){
								HX_STACK_LINE(701)
								if (((bool((v != null())) && bool(v->zpp_disp)))){
									HX_STACK_LINE(701)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(701)
								{
									HX_STACK_LINE(701)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(701)
									if ((_this->_immutable)){
										HX_STACK_LINE(701)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(701)
									if (((_this->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(701)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(701)
								if ((v->zpp_inner->_inuse)){
									HX_STACK_LINE(701)
									hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(701)
								::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(701)
								v->zpp_inner->outer = null();
								HX_STACK_LINE(701)
								v->zpp_inner = null();
								HX_STACK_LINE(701)
								{
									HX_STACK_LINE(701)
									::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(701)
									{
									}
									HX_STACK_LINE(701)
									o->zpp_pool = null();
									HX_STACK_LINE(701)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(701)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(701)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(701)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(701)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(701)
								{
									HX_STACK_LINE(701)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(701)
									{
									}
									HX_STACK_LINE(701)
									{
										HX_STACK_LINE(701)
										if (((o->outer != null()))){
											HX_STACK_LINE(701)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(701)
											o->outer = null();
										}
										HX_STACK_LINE(701)
										o->_isimmutable = null();
										HX_STACK_LINE(701)
										o->_validate = null();
										HX_STACK_LINE(701)
										o->_invalidate = null();
									}
									HX_STACK_LINE(701)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(701)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(702)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(731)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(732)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(733)
					for(::cpp::FastIterator_obj< ::nape::geom::Vec2 > *__it = ::cpp::CreateFastIterator< ::nape::geom::Vec2 >(lv->iterator());  __it->hasNext(); ){
						::nape::geom::Vec2 p = __it->next();
						{
							HX_STACK_LINE(735)
							if (((p == null()))){
								HX_STACK_LINE(735)
								hx::Throw (HX_CSTRING("Error: Vec2List contains null objects"));
							}
							HX_STACK_LINE(737)
							if (((bool((p != null())) && bool(p->zpp_disp)))){
								HX_STACK_LINE(739)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(743)
								::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(744)
								if ((fsttime)){
									HX_STACK_LINE(745)
									fst = v;
									struct _Function_7_1{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",746);
											{
												HX_STACK_LINE(746)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(746)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(746)
												{
													HX_STACK_LINE(746)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(746)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(746)
														_this->_validate();
													}
												}
												HX_STACK_LINE(746)
												return v->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",746);
											{
												HX_STACK_LINE(746)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(746)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(746)
												{
													HX_STACK_LINE(746)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(746)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(746)
														_this->_validate();
													}
												}
												HX_STACK_LINE(746)
												return v->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(746)
									g->moveTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
								}
								else{
									struct _Function_7_1{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",748);
											{
												HX_STACK_LINE(748)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(748)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(748)
												{
													HX_STACK_LINE(748)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(748)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(748)
														_this->_validate();
													}
												}
												HX_STACK_LINE(748)
												return v->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",748);
											{
												HX_STACK_LINE(748)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(748)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(748)
												{
													HX_STACK_LINE(748)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(748)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(748)
														_this->_validate();
													}
												}
												HX_STACK_LINE(748)
												return v->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(748)
									g->lineTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
								}
								HX_STACK_LINE(749)
								if ((!(fsttime))){
									HX_STACK_LINE(749)
									if (((bool((v != null())) && bool(v->zpp_disp)))){
										HX_STACK_LINE(749)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(749)
									{
										HX_STACK_LINE(749)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(749)
										if ((_this->_immutable)){
											HX_STACK_LINE(749)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(749)
										if (((_this->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(749)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(749)
									if ((v->zpp_inner->_inuse)){
										HX_STACK_LINE(749)
										hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(749)
									::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(749)
									v->zpp_inner->outer = null();
									HX_STACK_LINE(749)
									v->zpp_inner = null();
									HX_STACK_LINE(749)
									{
										HX_STACK_LINE(749)
										::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(749)
										{
										}
										HX_STACK_LINE(749)
										o->zpp_pool = null();
										HX_STACK_LINE(749)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(749)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(749)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(749)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(749)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(749)
									{
										HX_STACK_LINE(749)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(749)
										{
										}
										HX_STACK_LINE(749)
										{
											HX_STACK_LINE(749)
											if (((o->outer != null()))){
												HX_STACK_LINE(749)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(749)
												o->outer = null();
											}
											HX_STACK_LINE(749)
											o->_isimmutable = null();
											HX_STACK_LINE(749)
											o->_validate = null();
											HX_STACK_LINE(749)
											o->_invalidate = null();
										}
										HX_STACK_LINE(749)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(749)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(750)
								fsttime = false;
							}
						}
;
					}
				}
				else{
					HX_STACK_LINE(754)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(755)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(756)
						if (((bool((lv != null())) && bool(lv->zpp_disp)))){
							HX_STACK_LINE(758)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("GeomPoly")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(761)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(762)
						if (((verts != null()))){
							HX_STACK_LINE(763)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(764)
							do{
								struct _Function_7_1{
									inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_GeomVert &vite){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",765);
										{
											HX_STACK_LINE(765)
											Float x = vite->x;		HX_STACK_VAR(x,"x");
											Float y = vite->y;		HX_STACK_VAR(y,"y");
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(765)
											if (((bool((x != x)) || bool((y != y))))){
												HX_STACK_LINE(765)
												hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											HX_STACK_LINE(765)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(765)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(765)
												ret = ::nape::geom::Vec2_obj::__new(null(),null());
											}
											else{
												HX_STACK_LINE(765)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(765)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(765)
												ret->zpp_pool = null();
												HX_STACK_LINE(765)
												ret->zpp_disp = false;
												HX_STACK_LINE(765)
												if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
													HX_STACK_LINE(765)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
											HX_STACK_LINE(765)
											if (((ret->zpp_inner == null()))){
												struct _Function_9_1{
													inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",765);
														{
															HX_STACK_LINE(765)
															bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
															HX_STACK_LINE(765)
															::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(765)
															{
																HX_STACK_LINE(765)
																if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																	HX_STACK_LINE(765)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																}
																else{
																	HX_STACK_LINE(765)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																	HX_STACK_LINE(765)
																	::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(765)
																	ret1->next = null();
																}
																HX_STACK_LINE(765)
																ret1->weak = false;
															}
															HX_STACK_LINE(765)
															ret1->_immutable = immutable;
															HX_STACK_LINE(765)
															{
																HX_STACK_LINE(765)
																ret1->x = x;
																HX_STACK_LINE(765)
																ret1->y = y;
																HX_STACK_LINE(765)
																{
																}
																HX_STACK_LINE(765)
																{
																}
															}
															HX_STACK_LINE(765)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(765)
												ret->zpp_inner = _Function_9_1::Block(x,y);
												HX_STACK_LINE(765)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(765)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(765)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(765)
												{
													HX_STACK_LINE(765)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(765)
													if ((_this->_immutable)){
														HX_STACK_LINE(765)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(765)
													if (((_this->_isimmutable_dyn() != null()))){
														HX_STACK_LINE(765)
														_this->_isimmutable();
													}
												}
												HX_STACK_LINE(765)
												if (((bool((x != x)) || bool((y != y))))){
													HX_STACK_LINE(765)
													hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												struct _Function_9_1{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",765);
														{
															HX_STACK_LINE(765)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(765)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(765)
															{
																HX_STACK_LINE(765)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(765)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(765)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(765)
															return ret->zpp_inner->x;
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",765);
														{
															HX_STACK_LINE(765)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(765)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(765)
															{
																HX_STACK_LINE(765)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(765)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(765)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(765)
															return ret->zpp_inner->y;
														}
														return null();
													}
												};
												HX_STACK_LINE(765)
												if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
													HX_STACK_LINE(765)
													{
														HX_STACK_LINE(765)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(765)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(765)
														{
														}
														HX_STACK_LINE(765)
														{
														}
													}
													HX_STACK_LINE(765)
													{
														HX_STACK_LINE(765)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(765)
														if (((_this->_invalidate_dyn() != null()))){
															HX_STACK_LINE(765)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(765)
												ret;
											}
											HX_STACK_LINE(765)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(765)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(765)
								::nape::geom::Vec2 p = _Function_7_1::Block(vite);		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(766)
								vite = vite->next;
								HX_STACK_LINE(767)
								{
									HX_STACK_LINE(768)
									::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(769)
									if ((fsttime)){
										HX_STACK_LINE(770)
										fst = v;
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",771);
												{
													HX_STACK_LINE(771)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(771)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(771)
													{
														HX_STACK_LINE(771)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(771)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(771)
															_this->_validate();
														}
													}
													HX_STACK_LINE(771)
													return v->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",771);
												{
													HX_STACK_LINE(771)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(771)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(771)
													{
														HX_STACK_LINE(771)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(771)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(771)
															_this->_validate();
														}
													}
													HX_STACK_LINE(771)
													return v->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(771)
										g->moveTo(_Function_9_1::Block(v),_Function_9_2::Block(v));
									}
									else{
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",773);
												{
													HX_STACK_LINE(773)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(773)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(773)
													{
														HX_STACK_LINE(773)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(773)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(773)
															_this->_validate();
														}
													}
													HX_STACK_LINE(773)
													return v->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",773);
												{
													HX_STACK_LINE(773)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(773)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(773)
													{
														HX_STACK_LINE(773)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(773)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(773)
															_this->_validate();
														}
													}
													HX_STACK_LINE(773)
													return v->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(773)
										g->lineTo(_Function_9_1::Block(v),_Function_9_2::Block(v));
									}
									HX_STACK_LINE(774)
									if ((!(fsttime))){
										HX_STACK_LINE(774)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(774)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(774)
											if ((_this->_immutable)){
												HX_STACK_LINE(774)
												hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(774)
											if (((_this->_isimmutable_dyn() != null()))){
												HX_STACK_LINE(774)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(774)
										if ((v->zpp_inner->_inuse)){
											HX_STACK_LINE(774)
											hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
										}
										HX_STACK_LINE(774)
										::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(774)
										v->zpp_inner->outer = null();
										HX_STACK_LINE(774)
										v->zpp_inner = null();
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(774)
											{
											}
											HX_STACK_LINE(774)
											o->zpp_pool = null();
											HX_STACK_LINE(774)
											if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
												HX_STACK_LINE(774)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
											}
											else{
												HX_STACK_LINE(774)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
											}
											HX_STACK_LINE(774)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
											HX_STACK_LINE(774)
											o->zpp_disp = true;
										}
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(774)
											{
											}
											HX_STACK_LINE(774)
											{
												HX_STACK_LINE(774)
												if (((o->outer != null()))){
													HX_STACK_LINE(774)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(774)
													o->outer = null();
												}
												HX_STACK_LINE(774)
												o->_isimmutable = null();
												HX_STACK_LINE(774)
												o->_validate = null();
												HX_STACK_LINE(774)
												o->_invalidate = null();
											}
											HX_STACK_LINE(774)
											o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(774)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(775)
									fsttime = false;
								}
								HX_STACK_LINE(777)
								{
									HX_STACK_LINE(777)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(777)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(777)
										if ((_this->_immutable)){
											HX_STACK_LINE(777)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(777)
										if (((_this->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(777)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(777)
									if ((p->zpp_inner->_inuse)){
										HX_STACK_LINE(777)
										hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(777)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(777)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(777)
									p->zpp_inner = null();
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(777)
										{
										}
										HX_STACK_LINE(777)
										o->zpp_pool = null();
										HX_STACK_LINE(777)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(777)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(777)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(777)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(777)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(777)
									{
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(777)
										{
										}
										HX_STACK_LINE(777)
										{
											HX_STACK_LINE(777)
											if (((o->outer != null()))){
												HX_STACK_LINE(777)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(777)
												o->outer = null();
											}
											HX_STACK_LINE(777)
											o->_isimmutable = null();
											HX_STACK_LINE(777)
											o->_validate = null();
											HX_STACK_LINE(777)
											o->_invalidate = null();
										}
										HX_STACK_LINE(777)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(777)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
							}
while(((vite != verts)));
						}
					}
					else{
						HX_STACK_LINE(782)
						hx::Throw (HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
					}
				}
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",788);
					{
						HX_STACK_LINE(788)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(788)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(788)
						{
							HX_STACK_LINE(788)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(788)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(788)
								_this->_validate();
							}
						}
						HX_STACK_LINE(788)
						return fst->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",788);
					{
						HX_STACK_LINE(788)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(788)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(788)
						{
							HX_STACK_LINE(788)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(788)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(788)
								_this->_validate();
							}
						}
						HX_STACK_LINE(788)
						return fst->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(788)
			g->lineTo(_Function_2_1::Block(fst),_Function_2_2::Block(fst));
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(789)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(789)
					if ((_this->_immutable)){
						HX_STACK_LINE(789)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(789)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(789)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(789)
				if ((fst->zpp_inner->_inuse)){
					HX_STACK_LINE(789)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(789)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(789)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(789)
				fst->zpp_inner = null();
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(789)
					{
					}
					HX_STACK_LINE(789)
					o->zpp_pool = null();
					HX_STACK_LINE(789)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(789)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(789)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(789)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(789)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(789)
					{
					}
					HX_STACK_LINE(789)
					{
						HX_STACK_LINE(789)
						if (((o->outer != null()))){
							HX_STACK_LINE(789)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(789)
							o->outer = null();
						}
						HX_STACK_LINE(789)
						o->_isimmutable = null();
						HX_STACK_LINE(789)
						o->_validate = null();
						HX_STACK_LINE(789)
						o->_invalidate = null();
					}
					HX_STACK_LINE(789)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(789)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(791)
		if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(793)
			Array< ::nape::geom::Vec2 > lv = polygon;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(794)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(795)
			while(((i < lv->length))){
				HX_STACK_LINE(796)
				::nape::geom::Vec2 cur = lv->__get(i);		HX_STACK_VAR(cur,"cur");
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &cur){
						HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",800);
						{
							HX_STACK_LINE(801)
							{
								HX_STACK_LINE(801)
								if (((bool((cur != null())) && bool(cur->zpp_disp)))){
									HX_STACK_LINE(801)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(801)
								{
									HX_STACK_LINE(801)
									::zpp_nape::geom::ZPP_Vec2 _this = cur->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(801)
									if ((_this->_immutable)){
										HX_STACK_LINE(801)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(801)
									if (((_this->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(801)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(801)
								if ((cur->zpp_inner->_inuse)){
									HX_STACK_LINE(801)
									hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(801)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(801)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(801)
								cur->zpp_inner = null();
								HX_STACK_LINE(801)
								{
									HX_STACK_LINE(801)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(801)
									{
									}
									HX_STACK_LINE(801)
									o->zpp_pool = null();
									HX_STACK_LINE(801)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(801)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(801)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(801)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(801)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(801)
								{
									HX_STACK_LINE(801)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(801)
									{
									}
									HX_STACK_LINE(801)
									{
										HX_STACK_LINE(801)
										if (((o->outer != null()))){
											HX_STACK_LINE(801)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(801)
											o->outer = null();
										}
										HX_STACK_LINE(801)
										o->_isimmutable = null();
										HX_STACK_LINE(801)
										o->_validate = null();
										HX_STACK_LINE(801)
										o->_invalidate = null();
									}
									HX_STACK_LINE(801)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(801)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(802)
							return true;
						}
						return null();
					}
				};
				HX_STACK_LINE(797)
				if (((  ((cur->zpp_inner->weak)) ? bool(_Function_3_1::Block(cur)) : bool(false) ))){
					HX_STACK_LINE(808)
					lv->splice(i,(int)1);
					HX_STACK_LINE(809)
					continue;
				}
				HX_STACK_LINE(811)
				(i)++;
			}
		}
		else{
			HX_STACK_LINE(839)
			if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
				HX_STACK_LINE(840)
				::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(841)
				if (((lv->zpp_inner->_validate_dyn() != null()))){
					HX_STACK_LINE(841)
					lv->zpp_inner->_validate();
				}
				HX_STACK_LINE(842)
				::zpp_nape::util::ZNPList_ZPP_Vec2 ins = lv->zpp_inner->inner;		HX_STACK_VAR(ins,"ins");
				HX_STACK_LINE(843)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(844)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(845)
				while(((cur != null()))){
					HX_STACK_LINE(846)
					::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(847)
					if ((x->outer->zpp_inner->weak)){
						HX_STACK_LINE(850)
						cur = ins->erase(pre);
						HX_STACK_LINE(851)
						if ((x->outer->zpp_inner->weak)){
							HX_STACK_LINE(855)
							{
								HX_STACK_LINE(855)
								::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(855)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(855)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(855)
								{
									HX_STACK_LINE(855)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(855)
									if ((_this1->_immutable)){
										HX_STACK_LINE(855)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(855)
									if (((_this1->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(855)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(855)
								if ((_this->zpp_inner->_inuse)){
									HX_STACK_LINE(855)
									hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(855)
								::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(855)
								_this->zpp_inner->outer = null();
								HX_STACK_LINE(855)
								_this->zpp_inner = null();
								HX_STACK_LINE(855)
								{
									HX_STACK_LINE(855)
									::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(855)
									{
									}
									HX_STACK_LINE(855)
									o->zpp_pool = null();
									HX_STACK_LINE(855)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(855)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(855)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(855)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(855)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(855)
								{
									HX_STACK_LINE(855)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(855)
									{
									}
									HX_STACK_LINE(855)
									{
										HX_STACK_LINE(855)
										if (((o->outer != null()))){
											HX_STACK_LINE(855)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(855)
											o->outer = null();
										}
										HX_STACK_LINE(855)
										o->_isimmutable = null();
										HX_STACK_LINE(855)
										o->_validate = null();
										HX_STACK_LINE(855)
										o->_invalidate = null();
									}
									HX_STACK_LINE(855)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(855)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(856)
							true;
						}
						else{
							HX_STACK_LINE(858)
							false;
						}
					}
					else{
						HX_STACK_LINE(864)
						pre = cur;
						HX_STACK_LINE(865)
						cur = cur->next;
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawFilledCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawFilledCircle","nape/util/ShapeDebug.hx",520);
		HX_STACK_THIS(this);
		HX_STACK_ARG(position,"position");
		HX_STACK_ARG(radius,"radius");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(522)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(522)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(524)
		if (((bool((position != null())) && bool(position->zpp_disp)))){
			HX_STACK_LINE(526)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(530)
		if (((position == null()))){
			HX_STACK_LINE(530)
			hx::Throw (HX_CSTRING("Error: drawFilledCircle::position cannot be null"));
		}
		HX_STACK_LINE(531)
		if (((bool((radius != radius)) || bool((radius < (int)0))))){
			HX_STACK_LINE(531)
			hx::Throw (HX_CSTRING("Error: drawFilledCircle::radius must be >=0"));
		}
		HX_STACK_LINE(533)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(534)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(535)
		g->beginFill((int(colour) & int((int)16777215)),(int)1);
		HX_STACK_LINE(536)
		if ((this->zpp_inner->xnull)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",537);
					{
						HX_STACK_LINE(537)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(537)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(537)
						{
							HX_STACK_LINE(537)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(537)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(537)
								_this->_validate();
							}
						}
						HX_STACK_LINE(537)
						return position->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",537);
					{
						HX_STACK_LINE(537)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(537)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(537)
						{
							HX_STACK_LINE(537)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(537)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(537)
								_this->_validate();
							}
						}
						HX_STACK_LINE(537)
						return position->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(537)
			g->drawCircle(_Function_2_1::Block(position),_Function_2_2::Block(position),radius);
			HX_STACK_LINE(538)
			if ((position->zpp_inner->weak)){
				HX_STACK_LINE(542)
				{
					HX_STACK_LINE(542)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(542)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(542)
					{
						HX_STACK_LINE(542)
						::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(542)
						if ((_this->_immutable)){
							HX_STACK_LINE(542)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(542)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(542)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(542)
					if ((position->zpp_inner->_inuse)){
						HX_STACK_LINE(542)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(542)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(542)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(542)
					position->zpp_inner = null();
					HX_STACK_LINE(542)
					{
						HX_STACK_LINE(542)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(542)
						{
						}
						HX_STACK_LINE(542)
						o->zpp_pool = null();
						HX_STACK_LINE(542)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(542)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(542)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(542)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(542)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(542)
					{
						HX_STACK_LINE(542)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(542)
						{
						}
						HX_STACK_LINE(542)
						{
							HX_STACK_LINE(542)
							if (((o->outer != null()))){
								HX_STACK_LINE(542)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(542)
								o->outer = null();
							}
							HX_STACK_LINE(542)
							o->_isimmutable = null();
							HX_STACK_LINE(542)
							o->_validate = null();
							HX_STACK_LINE(542)
							o->_invalidate = null();
						}
						HX_STACK_LINE(542)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(542)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(543)
				true;
			}
			else{
				HX_STACK_LINE(545)
				false;
			}
		}
		else{
			HX_STACK_LINE(551)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(position,null(),null());		HX_STACK_VAR(v,"v");
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",552);
					{
						HX_STACK_LINE(552)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(552)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(552)
						{
							HX_STACK_LINE(552)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(552)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(552)
								_this->_validate();
							}
						}
						HX_STACK_LINE(552)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",552);
					{
						HX_STACK_LINE(552)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(552)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(552)
						{
							HX_STACK_LINE(552)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(552)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(552)
								_this->_validate();
							}
						}
						HX_STACK_LINE(552)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(552)
			g->drawCircle(_Function_2_1::Block(v),_Function_2_2::Block(v),(radius * this->zpp_inner->xdet));
			HX_STACK_LINE(553)
			{
				HX_STACK_LINE(553)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(553)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(553)
					if ((_this->_immutable)){
						HX_STACK_LINE(553)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(553)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(553)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(553)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(553)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(553)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(553)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(553)
				v->zpp_inner = null();
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(553)
					{
					}
					HX_STACK_LINE(553)
					o->zpp_pool = null();
					HX_STACK_LINE(553)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(553)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(553)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(553)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(553)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(553)
					{
					}
					HX_STACK_LINE(553)
					{
						HX_STACK_LINE(553)
						if (((o->outer != null()))){
							HX_STACK_LINE(553)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(553)
							o->outer = null();
						}
						HX_STACK_LINE(553)
						o->_isimmutable = null();
						HX_STACK_LINE(553)
						o->_validate = null();
						HX_STACK_LINE(553)
						o->_invalidate = null();
					}
					HX_STACK_LINE(553)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(553)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(555)
		g->endFill();
	}
return null();
}


Void ShapeDebug_obj::drawFilledTriangle( ::nape::geom::Vec2 p0,::nape::geom::Vec2 p1,::nape::geom::Vec2 p2,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawFilledTriangle","nape/util/ShapeDebug.hx",441);
		HX_STACK_THIS(this);
		HX_STACK_ARG(p0,"p0");
		HX_STACK_ARG(p1,"p1");
		HX_STACK_ARG(p2,"p2");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(443)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(443)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(445)
		if (((bool((p0 != null())) && bool(p0->zpp_disp)))){
			HX_STACK_LINE(447)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(450)
		if (((bool((p1 != null())) && bool(p1->zpp_disp)))){
			HX_STACK_LINE(452)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(455)
		if (((bool((p2 != null())) && bool(p2->zpp_disp)))){
			HX_STACK_LINE(457)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(461)
		if (((bool((bool((p0 == null())) || bool((p1 == null())))) || bool((p2 == null()))))){
			HX_STACK_LINE(461)
			hx::Throw (HX_CSTRING("Error: drawFilledTriangle can't use null points"));
		}
		HX_STACK_LINE(463)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(464)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(465)
		g->beginFill((int(colour) & int((int)16777215)),(int)1);
		HX_STACK_LINE(466)
		if ((this->zpp_inner->xnull)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &p0){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",467);
					{
						HX_STACK_LINE(467)
						if (((bool((p0 != null())) && bool(p0->zpp_disp)))){
							HX_STACK_LINE(467)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(467)
						{
							HX_STACK_LINE(467)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(467)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(467)
								_this->_validate();
							}
						}
						HX_STACK_LINE(467)
						return p0->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &p0){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",467);
					{
						HX_STACK_LINE(467)
						if (((bool((p0 != null())) && bool(p0->zpp_disp)))){
							HX_STACK_LINE(467)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(467)
						{
							HX_STACK_LINE(467)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(467)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(467)
								_this->_validate();
							}
						}
						HX_STACK_LINE(467)
						return p0->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(467)
			g->moveTo(_Function_2_1::Block(p0),_Function_2_2::Block(p0));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &p1){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",468);
					{
						HX_STACK_LINE(468)
						if (((bool((p1 != null())) && bool(p1->zpp_disp)))){
							HX_STACK_LINE(468)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(468)
						{
							HX_STACK_LINE(468)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(468)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(468)
								_this->_validate();
							}
						}
						HX_STACK_LINE(468)
						return p1->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &p1){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",468);
					{
						HX_STACK_LINE(468)
						if (((bool((p1 != null())) && bool(p1->zpp_disp)))){
							HX_STACK_LINE(468)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(468)
						{
							HX_STACK_LINE(468)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(468)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(468)
								_this->_validate();
							}
						}
						HX_STACK_LINE(468)
						return p1->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(468)
			g->lineTo(_Function_2_3::Block(p1),_Function_2_4::Block(p1));
			struct _Function_2_5{
				inline static Float Block( ::nape::geom::Vec2 &p2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",469);
					{
						HX_STACK_LINE(469)
						if (((bool((p2 != null())) && bool(p2->zpp_disp)))){
							HX_STACK_LINE(469)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(469)
						{
							HX_STACK_LINE(469)
							::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(469)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(469)
								_this->_validate();
							}
						}
						HX_STACK_LINE(469)
						return p2->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_6{
				inline static Float Block( ::nape::geom::Vec2 &p2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",469);
					{
						HX_STACK_LINE(469)
						if (((bool((p2 != null())) && bool(p2->zpp_disp)))){
							HX_STACK_LINE(469)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(469)
						{
							HX_STACK_LINE(469)
							::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(469)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(469)
								_this->_validate();
							}
						}
						HX_STACK_LINE(469)
						return p2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(469)
			g->lineTo(_Function_2_5::Block(p2),_Function_2_6::Block(p2));
			HX_STACK_LINE(470)
			if ((p0->zpp_inner->weak)){
				HX_STACK_LINE(474)
				{
					HX_STACK_LINE(474)
					if (((bool((p0 != null())) && bool(p0->zpp_disp)))){
						HX_STACK_LINE(474)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(474)
					{
						HX_STACK_LINE(474)
						::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(474)
						if ((_this->_immutable)){
							HX_STACK_LINE(474)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(474)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(474)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(474)
					if ((p0->zpp_inner->_inuse)){
						HX_STACK_LINE(474)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(474)
					::zpp_nape::geom::ZPP_Vec2 inner = p0->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(474)
					p0->zpp_inner->outer = null();
					HX_STACK_LINE(474)
					p0->zpp_inner = null();
					HX_STACK_LINE(474)
					{
						HX_STACK_LINE(474)
						::nape::geom::Vec2 o = p0;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(474)
						{
						}
						HX_STACK_LINE(474)
						o->zpp_pool = null();
						HX_STACK_LINE(474)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(474)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(474)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(474)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(474)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(474)
					{
						HX_STACK_LINE(474)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(474)
						{
						}
						HX_STACK_LINE(474)
						{
							HX_STACK_LINE(474)
							if (((o->outer != null()))){
								HX_STACK_LINE(474)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(474)
								o->outer = null();
							}
							HX_STACK_LINE(474)
							o->_isimmutable = null();
							HX_STACK_LINE(474)
							o->_validate = null();
							HX_STACK_LINE(474)
							o->_invalidate = null();
						}
						HX_STACK_LINE(474)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(474)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(475)
				true;
			}
			else{
				HX_STACK_LINE(477)
				false;
			}
			HX_STACK_LINE(481)
			if ((p1->zpp_inner->weak)){
				HX_STACK_LINE(485)
				{
					HX_STACK_LINE(485)
					if (((bool((p1 != null())) && bool(p1->zpp_disp)))){
						HX_STACK_LINE(485)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(485)
					{
						HX_STACK_LINE(485)
						::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(485)
						if ((_this->_immutable)){
							HX_STACK_LINE(485)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(485)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(485)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(485)
					if ((p1->zpp_inner->_inuse)){
						HX_STACK_LINE(485)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(485)
					::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(485)
					p1->zpp_inner->outer = null();
					HX_STACK_LINE(485)
					p1->zpp_inner = null();
					HX_STACK_LINE(485)
					{
						HX_STACK_LINE(485)
						::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(485)
						{
						}
						HX_STACK_LINE(485)
						o->zpp_pool = null();
						HX_STACK_LINE(485)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(485)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(485)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(485)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(485)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(485)
					{
						HX_STACK_LINE(485)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(485)
						{
						}
						HX_STACK_LINE(485)
						{
							HX_STACK_LINE(485)
							if (((o->outer != null()))){
								HX_STACK_LINE(485)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(485)
								o->outer = null();
							}
							HX_STACK_LINE(485)
							o->_isimmutable = null();
							HX_STACK_LINE(485)
							o->_validate = null();
							HX_STACK_LINE(485)
							o->_invalidate = null();
						}
						HX_STACK_LINE(485)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(485)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(486)
				true;
			}
			else{
				HX_STACK_LINE(488)
				false;
			}
			HX_STACK_LINE(492)
			if ((p2->zpp_inner->weak)){
				HX_STACK_LINE(496)
				{
					HX_STACK_LINE(496)
					if (((bool((p2 != null())) && bool(p2->zpp_disp)))){
						HX_STACK_LINE(496)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(496)
					{
						HX_STACK_LINE(496)
						::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(496)
						if ((_this->_immutable)){
							HX_STACK_LINE(496)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(496)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(496)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(496)
					if ((p2->zpp_inner->_inuse)){
						HX_STACK_LINE(496)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(496)
					::zpp_nape::geom::ZPP_Vec2 inner = p2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(496)
					p2->zpp_inner->outer = null();
					HX_STACK_LINE(496)
					p2->zpp_inner = null();
					HX_STACK_LINE(496)
					{
						HX_STACK_LINE(496)
						::nape::geom::Vec2 o = p2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(496)
						{
						}
						HX_STACK_LINE(496)
						o->zpp_pool = null();
						HX_STACK_LINE(496)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(496)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(496)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(496)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(496)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(496)
					{
						HX_STACK_LINE(496)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(496)
						{
						}
						HX_STACK_LINE(496)
						{
							HX_STACK_LINE(496)
							if (((o->outer != null()))){
								HX_STACK_LINE(496)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(496)
								o->outer = null();
							}
							HX_STACK_LINE(496)
							o->_isimmutable = null();
							HX_STACK_LINE(496)
							o->_validate = null();
							HX_STACK_LINE(496)
							o->_invalidate = null();
						}
						HX_STACK_LINE(496)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(496)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(497)
				true;
			}
			else{
				HX_STACK_LINE(499)
				false;
			}
		}
		else{
			HX_STACK_LINE(505)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p0,null(),null());		HX_STACK_VAR(v,"v");
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",506);
					{
						HX_STACK_LINE(506)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(506)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(506)
						{
							HX_STACK_LINE(506)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(506)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(506)
								_this->_validate();
							}
						}
						HX_STACK_LINE(506)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",506);
					{
						HX_STACK_LINE(506)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(506)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(506)
						{
							HX_STACK_LINE(506)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(506)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(506)
								_this->_validate();
							}
						}
						HX_STACK_LINE(506)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(506)
			g->moveTo(_Function_2_1::Block(v),_Function_2_2::Block(v));
			HX_STACK_LINE(507)
			{
				HX_STACK_LINE(507)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(507)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(507)
					if ((_this->_immutable)){
						HX_STACK_LINE(507)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(507)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(507)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(507)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(507)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(507)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(507)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(507)
				v->zpp_inner = null();
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(507)
					{
					}
					HX_STACK_LINE(507)
					o->zpp_pool = null();
					HX_STACK_LINE(507)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(507)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(507)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(507)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(507)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(507)
					{
					}
					HX_STACK_LINE(507)
					{
						HX_STACK_LINE(507)
						if (((o->outer != null()))){
							HX_STACK_LINE(507)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(507)
							o->outer = null();
						}
						HX_STACK_LINE(507)
						o->_isimmutable = null();
						HX_STACK_LINE(507)
						o->_validate = null();
						HX_STACK_LINE(507)
						o->_invalidate = null();
					}
					HX_STACK_LINE(507)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(508)
			v = this->zpp_inner->xform->outer->transform(p1,null(),null());
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",509);
					{
						HX_STACK_LINE(509)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(509)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(509)
						{
							HX_STACK_LINE(509)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(509)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(509)
								_this->_validate();
							}
						}
						HX_STACK_LINE(509)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",509);
					{
						HX_STACK_LINE(509)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(509)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(509)
						{
							HX_STACK_LINE(509)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(509)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(509)
								_this->_validate();
							}
						}
						HX_STACK_LINE(509)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(509)
			g->lineTo(_Function_2_3::Block(v),_Function_2_4::Block(v));
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(510)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(510)
					if ((_this->_immutable)){
						HX_STACK_LINE(510)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(510)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(510)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(510)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(510)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(510)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(510)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(510)
				v->zpp_inner = null();
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(510)
					{
					}
					HX_STACK_LINE(510)
					o->zpp_pool = null();
					HX_STACK_LINE(510)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(510)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(510)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(510)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(510)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(510)
					{
					}
					HX_STACK_LINE(510)
					{
						HX_STACK_LINE(510)
						if (((o->outer != null()))){
							HX_STACK_LINE(510)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(510)
							o->outer = null();
						}
						HX_STACK_LINE(510)
						o->_isimmutable = null();
						HX_STACK_LINE(510)
						o->_validate = null();
						HX_STACK_LINE(510)
						o->_invalidate = null();
					}
					HX_STACK_LINE(510)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(511)
			v = this->zpp_inner->xform->outer->transform(p2,null(),null());
			struct _Function_2_5{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",512);
					{
						HX_STACK_LINE(512)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(512)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(512)
						{
							HX_STACK_LINE(512)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(512)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(512)
								_this->_validate();
							}
						}
						HX_STACK_LINE(512)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_6{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",512);
					{
						HX_STACK_LINE(512)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(512)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(512)
						{
							HX_STACK_LINE(512)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(512)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(512)
								_this->_validate();
							}
						}
						HX_STACK_LINE(512)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(512)
			g->lineTo(_Function_2_5::Block(v),_Function_2_6::Block(v));
			HX_STACK_LINE(513)
			{
				HX_STACK_LINE(513)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(513)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(513)
					if ((_this->_immutable)){
						HX_STACK_LINE(513)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(513)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(513)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(513)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(513)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(513)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(513)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(513)
				v->zpp_inner = null();
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(513)
					{
					}
					HX_STACK_LINE(513)
					o->zpp_pool = null();
					HX_STACK_LINE(513)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(513)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(513)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(513)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(513)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(513)
					{
					}
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						if (((o->outer != null()))){
							HX_STACK_LINE(513)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(513)
							o->outer = null();
						}
						HX_STACK_LINE(513)
						o->_isimmutable = null();
						HX_STACK_LINE(513)
						o->_validate = null();
						HX_STACK_LINE(513)
						o->_invalidate = null();
					}
					HX_STACK_LINE(513)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(515)
		g->endFill();
	}
return null();
}


Void ShapeDebug_obj::drawAABB( ::nape::geom::AABB aabb,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawAABB","nape/util/ShapeDebug.hx",410);
		HX_STACK_THIS(this);
		HX_STACK_ARG(aabb,"aabb");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(412)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(412)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(415)
		if (((aabb == null()))){
			HX_STACK_LINE(415)
			hx::Throw (HX_CSTRING("Error: drawAABB::aabb cannot be null"));
		}
		HX_STACK_LINE(417)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(418)
		g->lineStyle(0.1,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(419)
		if ((this->zpp_inner->xnull)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::AABB &aabb){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",419);
					{
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(419)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(419)
								_this->_validate();
							}
						}
						HX_STACK_LINE(419)
						return aabb->zpp_inner->minx;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::AABB &aabb){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",419);
					{
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(419)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(419)
								_this->_validate();
							}
						}
						HX_STACK_LINE(419)
						return aabb->zpp_inner->miny;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::AABB &aabb){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",419);
					{
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(419)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(419)
								_this->_validate();
							}
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::AABB &aabb){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",419);
								{
									HX_STACK_LINE(419)
									::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(419)
									return (_this->maxx - _this->minx);
								}
								return null();
							}
						};
						HX_STACK_LINE(419)
						return _Function_3_1::Block(aabb);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::AABB &aabb){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",419);
					{
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(419)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(419)
								_this->_validate();
							}
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::AABB &aabb){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",419);
								{
									HX_STACK_LINE(419)
									::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(419)
									return (_this->maxy - _this->miny);
								}
								return null();
							}
						};
						HX_STACK_LINE(419)
						return _Function_3_1::Block(aabb);
					}
					return null();
				}
			};
			HX_STACK_LINE(419)
			g->drawRect(_Function_2_1::Block(aabb),_Function_2_2::Block(aabb),_Function_2_3::Block(aabb),_Function_2_4::Block(aabb));
		}
		else{
			HX_STACK_LINE(421)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(aabb->zpp_inner->getmin(),null(),null());		HX_STACK_VAR(v,"v");
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::AABB &aabb){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",422);
					{
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::AABB &aabb){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",422);
								{
									HX_STACK_LINE(422)
									{
										HX_STACK_LINE(422)
										::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(422)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(422)
											_this->_validate();
										}
									}
									struct _Function_4_1{
										inline static Float Block( ::nape::geom::AABB &aabb){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",422);
											{
												HX_STACK_LINE(422)
												::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(422)
												return (_this->maxx - _this->minx);
											}
											return null();
										}
									};
									HX_STACK_LINE(422)
									return _Function_4_1::Block(aabb);
								}
								return null();
							}
						};
						HX_STACK_LINE(422)
						Float x = _Function_3_1::Block(aabb);		HX_STACK_VAR(x,"x");
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(422)
						if (((x != x))){
							HX_STACK_LINE(422)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						HX_STACK_LINE(422)
						::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(422)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(422)
							ret = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(422)
							ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(422)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(422)
							ret->zpp_pool = null();
							HX_STACK_LINE(422)
							ret->zpp_disp = false;
							HX_STACK_LINE(422)
							if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(422)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(422)
						if (((ret->zpp_inner == null()))){
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",422);
									{
										HX_STACK_LINE(422)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(422)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(422)
										{
											HX_STACK_LINE(422)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(422)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
											}
											else{
												HX_STACK_LINE(422)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(422)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(422)
												ret1->next = null();
											}
											HX_STACK_LINE(422)
											ret1->weak = false;
										}
										HX_STACK_LINE(422)
										ret1->_immutable = immutable;
										HX_STACK_LINE(422)
										{
											HX_STACK_LINE(422)
											ret1->x = x;
											HX_STACK_LINE(422)
											ret1->y = (int)0;
											HX_STACK_LINE(422)
											{
											}
											HX_STACK_LINE(422)
											{
											}
										}
										HX_STACK_LINE(422)
										return ret1;
									}
									return null();
								}
							};
							HX_STACK_LINE(422)
							ret->zpp_inner = _Function_4_1::Block(x);
							HX_STACK_LINE(422)
							ret->zpp_inner->outer = ret;
						}
						else{
							HX_STACK_LINE(422)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(422)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(422)
							{
								HX_STACK_LINE(422)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(422)
								if ((_this->_immutable)){
									HX_STACK_LINE(422)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(422)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(422)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(422)
							if (((x != x))){
								HX_STACK_LINE(422)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_4_1{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",422);
									{
										HX_STACK_LINE(422)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(422)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(422)
										{
											HX_STACK_LINE(422)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(422)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(422)
												_this->_validate();
											}
										}
										HX_STACK_LINE(422)
										return ret->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",422);
									{
										HX_STACK_LINE(422)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(422)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(422)
										{
											HX_STACK_LINE(422)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(422)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(422)
												_this->_validate();
											}
										}
										HX_STACK_LINE(422)
										return ret->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(422)
							if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == (int)0))))))){
								HX_STACK_LINE(422)
								{
									HX_STACK_LINE(422)
									ret->zpp_inner->x = x;
									HX_STACK_LINE(422)
									ret->zpp_inner->y = (int)0;
									HX_STACK_LINE(422)
									{
									}
									HX_STACK_LINE(422)
									{
									}
								}
								HX_STACK_LINE(422)
								{
									HX_STACK_LINE(422)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(422)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(422)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(422)
							ret;
						}
						HX_STACK_LINE(422)
						ret->zpp_inner->weak = weak;
						HX_STACK_LINE(422)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(422)
			::nape::geom::Vec2 w = _Function_2_1::Block(aabb);		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(423)
			::nape::geom::Vec2 w2 = this->zpp_inner->xform->outer->transform(w,true,null());		HX_STACK_VAR(w2,"w2");
			struct _Function_2_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::AABB &aabb){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",424);
					{
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::AABB &aabb){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",424);
								{
									HX_STACK_LINE(424)
									{
										HX_STACK_LINE(424)
										::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(424)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(424)
											_this->_validate();
										}
									}
									struct _Function_4_1{
										inline static Float Block( ::nape::geom::AABB &aabb){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",424);
											{
												HX_STACK_LINE(424)
												::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(424)
												return (_this->maxy - _this->miny);
											}
											return null();
										}
									};
									HX_STACK_LINE(424)
									return _Function_4_1::Block(aabb);
								}
								return null();
							}
						};
						HX_STACK_LINE(424)
						Float y = _Function_3_1::Block(aabb);		HX_STACK_VAR(y,"y");
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(424)
						if (((y != y))){
							HX_STACK_LINE(424)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						HX_STACK_LINE(424)
						::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(424)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(424)
							ret = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(424)
							ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(424)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(424)
							ret->zpp_pool = null();
							HX_STACK_LINE(424)
							ret->zpp_disp = false;
							HX_STACK_LINE(424)
							if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(424)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(424)
						if (((ret->zpp_inner == null()))){
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &y){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",424);
									{
										HX_STACK_LINE(424)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(424)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(424)
										{
											HX_STACK_LINE(424)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(424)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
											}
											else{
												HX_STACK_LINE(424)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(424)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(424)
												ret1->next = null();
											}
											HX_STACK_LINE(424)
											ret1->weak = false;
										}
										HX_STACK_LINE(424)
										ret1->_immutable = immutable;
										HX_STACK_LINE(424)
										{
											HX_STACK_LINE(424)
											ret1->x = (int)0;
											HX_STACK_LINE(424)
											ret1->y = y;
											HX_STACK_LINE(424)
											{
											}
											HX_STACK_LINE(424)
											{
											}
										}
										HX_STACK_LINE(424)
										return ret1;
									}
									return null();
								}
							};
							HX_STACK_LINE(424)
							ret->zpp_inner = _Function_4_1::Block(y);
							HX_STACK_LINE(424)
							ret->zpp_inner->outer = ret;
						}
						else{
							HX_STACK_LINE(424)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(424)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(424)
							{
								HX_STACK_LINE(424)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(424)
								if ((_this->_immutable)){
									HX_STACK_LINE(424)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(424)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(424)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(424)
							if (((y != y))){
								HX_STACK_LINE(424)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_4_1{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",424);
									{
										HX_STACK_LINE(424)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(424)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(424)
										{
											HX_STACK_LINE(424)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(424)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(424)
												_this->_validate();
											}
										}
										HX_STACK_LINE(424)
										return ret->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",424);
									{
										HX_STACK_LINE(424)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(424)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(424)
										{
											HX_STACK_LINE(424)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(424)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(424)
												_this->_validate();
											}
										}
										HX_STACK_LINE(424)
										return ret->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(424)
							if ((!(((bool((_Function_4_1::Block(ret) == (int)0)) && bool((_Function_4_2::Block(ret) == y))))))){
								HX_STACK_LINE(424)
								{
									HX_STACK_LINE(424)
									ret->zpp_inner->x = (int)0;
									HX_STACK_LINE(424)
									ret->zpp_inner->y = y;
									HX_STACK_LINE(424)
									{
									}
									HX_STACK_LINE(424)
									{
									}
								}
								HX_STACK_LINE(424)
								{
									HX_STACK_LINE(424)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(424)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(424)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(424)
							ret;
						}
						HX_STACK_LINE(424)
						ret->zpp_inner->weak = weak;
						HX_STACK_LINE(424)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(424)
			::nape::geom::Vec2 h = _Function_2_2::Block(aabb);		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(425)
			::nape::geom::Vec2 h2 = this->zpp_inner->xform->outer->transform(h,true,null());		HX_STACK_VAR(h2,"h2");
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",426);
					{
						HX_STACK_LINE(426)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(426)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(426)
						{
							HX_STACK_LINE(426)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(426)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(426)
								_this->_validate();
							}
						}
						HX_STACK_LINE(426)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",426);
					{
						HX_STACK_LINE(426)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(426)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(426)
						{
							HX_STACK_LINE(426)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(426)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(426)
								_this->_validate();
							}
						}
						HX_STACK_LINE(426)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(426)
			g->moveTo(_Function_2_3::Block(v),_Function_2_4::Block(v));
			struct _Function_2_5{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",427);
					{
						HX_STACK_LINE(427)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(427)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(427)
						{
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(427)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(427)
								_this->_validate();
							}
						}
						HX_STACK_LINE(427)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_6{
				inline static Float Block( ::nape::geom::Vec2 &w2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",427);
					{
						HX_STACK_LINE(427)
						if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
							HX_STACK_LINE(427)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(427)
						{
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(427)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(427)
								_this->_validate();
							}
						}
						HX_STACK_LINE(427)
						return w2->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_7{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",427);
					{
						HX_STACK_LINE(427)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(427)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(427)
						{
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(427)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(427)
								_this->_validate();
							}
						}
						HX_STACK_LINE(427)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_8{
				inline static Float Block( ::nape::geom::Vec2 &w2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",427);
					{
						HX_STACK_LINE(427)
						if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
							HX_STACK_LINE(427)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(427)
						{
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(427)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(427)
								_this->_validate();
							}
						}
						HX_STACK_LINE(427)
						return w2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(427)
			g->lineTo((_Function_2_5::Block(v) + _Function_2_6::Block(w2)),(_Function_2_7::Block(v) + _Function_2_8::Block(w2)));
			struct _Function_2_9{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",428);
					{
						HX_STACK_LINE(428)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(428)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(428)
								_this->_validate();
							}
						}
						HX_STACK_LINE(428)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_10{
				inline static Float Block( ::nape::geom::Vec2 &w2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",428);
					{
						HX_STACK_LINE(428)
						if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
							HX_STACK_LINE(428)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(428)
								_this->_validate();
							}
						}
						HX_STACK_LINE(428)
						return w2->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_11{
				inline static Float Block( ::nape::geom::Vec2 &h2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",428);
					{
						HX_STACK_LINE(428)
						if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
							HX_STACK_LINE(428)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(428)
								_this->_validate();
							}
						}
						HX_STACK_LINE(428)
						return h2->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_12{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",428);
					{
						HX_STACK_LINE(428)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(428)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(428)
								_this->_validate();
							}
						}
						HX_STACK_LINE(428)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_13{
				inline static Float Block( ::nape::geom::Vec2 &w2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",428);
					{
						HX_STACK_LINE(428)
						if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
							HX_STACK_LINE(428)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(428)
								_this->_validate();
							}
						}
						HX_STACK_LINE(428)
						return w2->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_14{
				inline static Float Block( ::nape::geom::Vec2 &h2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",428);
					{
						HX_STACK_LINE(428)
						if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
							HX_STACK_LINE(428)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(428)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(428)
								_this->_validate();
							}
						}
						HX_STACK_LINE(428)
						return h2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(428)
			g->lineTo(((_Function_2_9::Block(v) + _Function_2_10::Block(w2)) + _Function_2_11::Block(h2)),((_Function_2_12::Block(v) + _Function_2_13::Block(w2)) + _Function_2_14::Block(h2)));
			struct _Function_2_15{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",429);
					{
						HX_STACK_LINE(429)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(429)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(429)
						{
							HX_STACK_LINE(429)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(429)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(429)
								_this->_validate();
							}
						}
						HX_STACK_LINE(429)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_16{
				inline static Float Block( ::nape::geom::Vec2 &h2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",429);
					{
						HX_STACK_LINE(429)
						if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
							HX_STACK_LINE(429)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(429)
						{
							HX_STACK_LINE(429)
							::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(429)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(429)
								_this->_validate();
							}
						}
						HX_STACK_LINE(429)
						return h2->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_17{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",429);
					{
						HX_STACK_LINE(429)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(429)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(429)
						{
							HX_STACK_LINE(429)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(429)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(429)
								_this->_validate();
							}
						}
						HX_STACK_LINE(429)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_18{
				inline static Float Block( ::nape::geom::Vec2 &h2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",429);
					{
						HX_STACK_LINE(429)
						if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
							HX_STACK_LINE(429)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(429)
						{
							HX_STACK_LINE(429)
							::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(429)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(429)
								_this->_validate();
							}
						}
						HX_STACK_LINE(429)
						return h2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(429)
			g->lineTo((_Function_2_15::Block(v) + _Function_2_16::Block(h2)),(_Function_2_17::Block(v) + _Function_2_18::Block(h2)));
			struct _Function_2_19{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",430);
					{
						HX_STACK_LINE(430)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(430)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(430)
						{
							HX_STACK_LINE(430)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(430)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(430)
								_this->_validate();
							}
						}
						HX_STACK_LINE(430)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_20{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",430);
					{
						HX_STACK_LINE(430)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(430)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(430)
						{
							HX_STACK_LINE(430)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(430)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(430)
								_this->_validate();
							}
						}
						HX_STACK_LINE(430)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(430)
			g->lineTo(_Function_2_19::Block(v),_Function_2_20::Block(v));
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(431)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(431)
					if ((_this->_immutable)){
						HX_STACK_LINE(431)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(431)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(431)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(431)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(431)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(431)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(431)
				v->zpp_inner = null();
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(431)
					{
					}
					HX_STACK_LINE(431)
					o->zpp_pool = null();
					HX_STACK_LINE(431)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(431)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(431)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(431)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(431)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(431)
					{
					}
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						if (((o->outer != null()))){
							HX_STACK_LINE(431)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(431)
							o->outer = null();
						}
						HX_STACK_LINE(431)
						o->_isimmutable = null();
						HX_STACK_LINE(431)
						o->_validate = null();
						HX_STACK_LINE(431)
						o->_invalidate = null();
					}
					HX_STACK_LINE(431)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(432)
			{
				HX_STACK_LINE(432)
				if (((bool((w != null())) && bool(w->zpp_disp)))){
					HX_STACK_LINE(432)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2 _this = w->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(432)
					if ((_this->_immutable)){
						HX_STACK_LINE(432)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(432)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(432)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(432)
				if ((w->zpp_inner->_inuse)){
					HX_STACK_LINE(432)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(432)
				::zpp_nape::geom::ZPP_Vec2 inner = w->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(432)
				w->zpp_inner->outer = null();
				HX_STACK_LINE(432)
				w->zpp_inner = null();
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::nape::geom::Vec2 o = w;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(432)
					{
					}
					HX_STACK_LINE(432)
					o->zpp_pool = null();
					HX_STACK_LINE(432)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(432)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(432)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(432)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(432)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(432)
					{
					}
					HX_STACK_LINE(432)
					{
						HX_STACK_LINE(432)
						if (((o->outer != null()))){
							HX_STACK_LINE(432)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(432)
							o->outer = null();
						}
						HX_STACK_LINE(432)
						o->_isimmutable = null();
						HX_STACK_LINE(432)
						o->_validate = null();
						HX_STACK_LINE(432)
						o->_invalidate = null();
					}
					HX_STACK_LINE(432)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(433)
			{
				HX_STACK_LINE(433)
				if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
					HX_STACK_LINE(433)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(433)
					if ((_this->_immutable)){
						HX_STACK_LINE(433)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(433)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(433)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(433)
				if ((w2->zpp_inner->_inuse)){
					HX_STACK_LINE(433)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(433)
				::zpp_nape::geom::ZPP_Vec2 inner = w2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(433)
				w2->zpp_inner->outer = null();
				HX_STACK_LINE(433)
				w2->zpp_inner = null();
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					::nape::geom::Vec2 o = w2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(433)
					{
					}
					HX_STACK_LINE(433)
					o->zpp_pool = null();
					HX_STACK_LINE(433)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(433)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(433)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(433)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(433)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(433)
					{
					}
					HX_STACK_LINE(433)
					{
						HX_STACK_LINE(433)
						if (((o->outer != null()))){
							HX_STACK_LINE(433)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(433)
							o->outer = null();
						}
						HX_STACK_LINE(433)
						o->_isimmutable = null();
						HX_STACK_LINE(433)
						o->_validate = null();
						HX_STACK_LINE(433)
						o->_invalidate = null();
					}
					HX_STACK_LINE(433)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(433)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(434)
			{
				HX_STACK_LINE(434)
				if (((bool((h != null())) && bool(h->zpp_disp)))){
					HX_STACK_LINE(434)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					::zpp_nape::geom::ZPP_Vec2 _this = h->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(434)
					if ((_this->_immutable)){
						HX_STACK_LINE(434)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(434)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(434)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(434)
				if ((h->zpp_inner->_inuse)){
					HX_STACK_LINE(434)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(434)
				::zpp_nape::geom::ZPP_Vec2 inner = h->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(434)
				h->zpp_inner->outer = null();
				HX_STACK_LINE(434)
				h->zpp_inner = null();
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					::nape::geom::Vec2 o = h;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(434)
					{
					}
					HX_STACK_LINE(434)
					o->zpp_pool = null();
					HX_STACK_LINE(434)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(434)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(434)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(434)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(434)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(434)
					{
					}
					HX_STACK_LINE(434)
					{
						HX_STACK_LINE(434)
						if (((o->outer != null()))){
							HX_STACK_LINE(434)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(434)
							o->outer = null();
						}
						HX_STACK_LINE(434)
						o->_isimmutable = null();
						HX_STACK_LINE(434)
						o->_validate = null();
						HX_STACK_LINE(434)
						o->_invalidate = null();
					}
					HX_STACK_LINE(434)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(434)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(435)
			{
				HX_STACK_LINE(435)
				if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
					HX_STACK_LINE(435)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(435)
				{
					HX_STACK_LINE(435)
					::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(435)
					if ((_this->_immutable)){
						HX_STACK_LINE(435)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(435)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(435)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(435)
				if ((h2->zpp_inner->_inuse)){
					HX_STACK_LINE(435)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(435)
				::zpp_nape::geom::ZPP_Vec2 inner = h2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(435)
				h2->zpp_inner->outer = null();
				HX_STACK_LINE(435)
				h2->zpp_inner = null();
				HX_STACK_LINE(435)
				{
					HX_STACK_LINE(435)
					::nape::geom::Vec2 o = h2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(435)
					{
					}
					HX_STACK_LINE(435)
					o->zpp_pool = null();
					HX_STACK_LINE(435)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(435)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(435)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(435)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(435)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(435)
				{
					HX_STACK_LINE(435)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(435)
					{
					}
					HX_STACK_LINE(435)
					{
						HX_STACK_LINE(435)
						if (((o->outer != null()))){
							HX_STACK_LINE(435)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(435)
							o->outer = null();
						}
						HX_STACK_LINE(435)
						o->_isimmutable = null();
						HX_STACK_LINE(435)
						o->_validate = null();
						HX_STACK_LINE(435)
						o->_invalidate = null();
					}
					HX_STACK_LINE(435)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(435)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawCircle","nape/util/ShapeDebug.hx",372);
		HX_STACK_THIS(this);
		HX_STACK_ARG(position,"position");
		HX_STACK_ARG(radius,"radius");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(374)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(374)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(376)
		if (((bool((position != null())) && bool(position->zpp_disp)))){
			HX_STACK_LINE(378)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(382)
		if (((position == null()))){
			HX_STACK_LINE(382)
			hx::Throw (HX_CSTRING("Error: drawCircle::position cannot be null"));
		}
		HX_STACK_LINE(383)
		if (((bool((radius != radius)) || bool((radius < (int)0))))){
			HX_STACK_LINE(383)
			hx::Throw (HX_CSTRING("Error: drawCircle::radius must be >=0"));
		}
		HX_STACK_LINE(385)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(386)
		g->lineStyle(0.1,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(387)
		if ((this->zpp_inner->xnull)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",388);
					{
						HX_STACK_LINE(388)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(388)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(388)
						{
							HX_STACK_LINE(388)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(388)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(388)
								_this->_validate();
							}
						}
						HX_STACK_LINE(388)
						return position->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",388);
					{
						HX_STACK_LINE(388)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(388)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(388)
						{
							HX_STACK_LINE(388)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(388)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(388)
								_this->_validate();
							}
						}
						HX_STACK_LINE(388)
						return position->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(388)
			g->drawCircle(_Function_2_1::Block(position),_Function_2_2::Block(position),radius);
			HX_STACK_LINE(389)
			if ((position->zpp_inner->weak)){
				HX_STACK_LINE(393)
				{
					HX_STACK_LINE(393)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(393)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(393)
						if ((_this->_immutable)){
							HX_STACK_LINE(393)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(393)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(393)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(393)
					if ((position->zpp_inner->_inuse)){
						HX_STACK_LINE(393)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(393)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(393)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(393)
					position->zpp_inner = null();
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(393)
						{
						}
						HX_STACK_LINE(393)
						o->zpp_pool = null();
						HX_STACK_LINE(393)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(393)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(393)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(393)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(393)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(393)
						{
						}
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							if (((o->outer != null()))){
								HX_STACK_LINE(393)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(393)
								o->outer = null();
							}
							HX_STACK_LINE(393)
							o->_isimmutable = null();
							HX_STACK_LINE(393)
							o->_validate = null();
							HX_STACK_LINE(393)
							o->_invalidate = null();
						}
						HX_STACK_LINE(393)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(393)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(394)
				true;
			}
			else{
				HX_STACK_LINE(396)
				false;
			}
		}
		else{
			HX_STACK_LINE(402)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(position,null(),null());		HX_STACK_VAR(v,"v");
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",403);
					{
						HX_STACK_LINE(403)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(403)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(403)
						{
							HX_STACK_LINE(403)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(403)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(403)
								_this->_validate();
							}
						}
						HX_STACK_LINE(403)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",403);
					{
						HX_STACK_LINE(403)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(403)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(403)
						{
							HX_STACK_LINE(403)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(403)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(403)
								_this->_validate();
							}
						}
						HX_STACK_LINE(403)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(403)
			g->drawCircle(_Function_2_1::Block(v),_Function_2_2::Block(v),(radius * this->zpp_inner->xdet));
			HX_STACK_LINE(404)
			{
				HX_STACK_LINE(404)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(404)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(404)
					if ((_this->_immutable)){
						HX_STACK_LINE(404)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(404)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(404)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(404)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(404)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(404)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(404)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(404)
				v->zpp_inner = null();
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(404)
					{
					}
					HX_STACK_LINE(404)
					o->zpp_pool = null();
					HX_STACK_LINE(404)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(404)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(404)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(404)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(404)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(404)
					{
					}
					HX_STACK_LINE(404)
					{
						HX_STACK_LINE(404)
						if (((o->outer != null()))){
							HX_STACK_LINE(404)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(404)
							o->outer = null();
						}
						HX_STACK_LINE(404)
						o->_isimmutable = null();
						HX_STACK_LINE(404)
						o->_validate = null();
						HX_STACK_LINE(404)
						o->_invalidate = null();
					}
					HX_STACK_LINE(404)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(404)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawCurve( ::nape::geom::Vec2 start,::nape::geom::Vec2 control,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawCurve","nape/util/ShapeDebug.hx",295);
		HX_STACK_THIS(this);
		HX_STACK_ARG(start,"start");
		HX_STACK_ARG(control,"control");
		HX_STACK_ARG(end,"end");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(297)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(297)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(299)
		if (((bool((start != null())) && bool(start->zpp_disp)))){
			HX_STACK_LINE(301)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(304)
		if (((bool((control != null())) && bool(control->zpp_disp)))){
			HX_STACK_LINE(306)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(309)
		if (((bool((end != null())) && bool(end->zpp_disp)))){
			HX_STACK_LINE(311)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(315)
		if (((start == null()))){
			HX_STACK_LINE(315)
			hx::Throw (HX_CSTRING("Error: drawCurve::start cannot be null"));
		}
		HX_STACK_LINE(316)
		if (((control == null()))){
			HX_STACK_LINE(316)
			hx::Throw (HX_CSTRING("Error: drawCurve::control cannot be null"));
		}
		HX_STACK_LINE(317)
		if (((end == null()))){
			HX_STACK_LINE(317)
			hx::Throw (HX_CSTRING("Error: drawCurve::end cannot be null"));
		}
		HX_STACK_LINE(319)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(320)
		g->lineStyle(0.1,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(321)
		if ((this->zpp_inner->xnull)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",322);
					{
						HX_STACK_LINE(322)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(322)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(322)
						{
							HX_STACK_LINE(322)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(322)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(322)
								_this->_validate();
							}
						}
						HX_STACK_LINE(322)
						return start->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",322);
					{
						HX_STACK_LINE(322)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(322)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(322)
						{
							HX_STACK_LINE(322)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(322)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(322)
								_this->_validate();
							}
						}
						HX_STACK_LINE(322)
						return start->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(322)
			g->moveTo(_Function_2_1::Block(start),_Function_2_2::Block(start));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &control){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",323);
					{
						HX_STACK_LINE(323)
						if (((bool((control != null())) && bool(control->zpp_disp)))){
							HX_STACK_LINE(323)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(323)
						{
							HX_STACK_LINE(323)
							::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(323)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(323)
								_this->_validate();
							}
						}
						HX_STACK_LINE(323)
						return control->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &control){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",323);
					{
						HX_STACK_LINE(323)
						if (((bool((control != null())) && bool(control->zpp_disp)))){
							HX_STACK_LINE(323)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(323)
						{
							HX_STACK_LINE(323)
							::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(323)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(323)
								_this->_validate();
							}
						}
						HX_STACK_LINE(323)
						return control->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_5{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",323);
					{
						HX_STACK_LINE(323)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(323)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(323)
						{
							HX_STACK_LINE(323)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(323)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(323)
								_this->_validate();
							}
						}
						HX_STACK_LINE(323)
						return end->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_6{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",323);
					{
						HX_STACK_LINE(323)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(323)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(323)
						{
							HX_STACK_LINE(323)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(323)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(323)
								_this->_validate();
							}
						}
						HX_STACK_LINE(323)
						return end->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(323)
			g->curveTo(_Function_2_3::Block(control),_Function_2_4::Block(control),_Function_2_5::Block(end),_Function_2_6::Block(end));
			HX_STACK_LINE(324)
			if ((start->zpp_inner->weak)){
				HX_STACK_LINE(328)
				{
					HX_STACK_LINE(328)
					if (((bool((start != null())) && bool(start->zpp_disp)))){
						HX_STACK_LINE(328)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(328)
						if ((_this->_immutable)){
							HX_STACK_LINE(328)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(328)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(328)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(328)
					if ((start->zpp_inner->_inuse)){
						HX_STACK_LINE(328)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(328)
					::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(328)
					start->zpp_inner->outer = null();
					HX_STACK_LINE(328)
					start->zpp_inner = null();
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(328)
						{
						}
						HX_STACK_LINE(328)
						o->zpp_pool = null();
						HX_STACK_LINE(328)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(328)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(328)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(328)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(328)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(328)
						{
						}
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(328)
							if (((o->outer != null()))){
								HX_STACK_LINE(328)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(328)
								o->outer = null();
							}
							HX_STACK_LINE(328)
							o->_isimmutable = null();
							HX_STACK_LINE(328)
							o->_validate = null();
							HX_STACK_LINE(328)
							o->_invalidate = null();
						}
						HX_STACK_LINE(328)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(328)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(329)
				true;
			}
			else{
				HX_STACK_LINE(331)
				false;
			}
			HX_STACK_LINE(335)
			if ((control->zpp_inner->weak)){
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					if (((bool((control != null())) && bool(control->zpp_disp)))){
						HX_STACK_LINE(339)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(339)
						if ((_this->_immutable)){
							HX_STACK_LINE(339)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(339)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(339)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(339)
					if ((control->zpp_inner->_inuse)){
						HX_STACK_LINE(339)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(339)
					::zpp_nape::geom::ZPP_Vec2 inner = control->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(339)
					control->zpp_inner->outer = null();
					HX_STACK_LINE(339)
					control->zpp_inner = null();
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::nape::geom::Vec2 o = control;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(339)
						{
						}
						HX_STACK_LINE(339)
						o->zpp_pool = null();
						HX_STACK_LINE(339)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(339)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(339)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(339)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(339)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(339)
					{
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(339)
						{
						}
						HX_STACK_LINE(339)
						{
							HX_STACK_LINE(339)
							if (((o->outer != null()))){
								HX_STACK_LINE(339)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(339)
								o->outer = null();
							}
							HX_STACK_LINE(339)
							o->_isimmutable = null();
							HX_STACK_LINE(339)
							o->_validate = null();
							HX_STACK_LINE(339)
							o->_invalidate = null();
						}
						HX_STACK_LINE(339)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(339)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(340)
				true;
			}
			else{
				HX_STACK_LINE(342)
				false;
			}
			HX_STACK_LINE(346)
			if ((end->zpp_inner->weak)){
				HX_STACK_LINE(350)
				{
					HX_STACK_LINE(350)
					if (((bool((end != null())) && bool(end->zpp_disp)))){
						HX_STACK_LINE(350)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(350)
						if ((_this->_immutable)){
							HX_STACK_LINE(350)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(350)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(350)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(350)
					if ((end->zpp_inner->_inuse)){
						HX_STACK_LINE(350)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(350)
					::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(350)
					end->zpp_inner->outer = null();
					HX_STACK_LINE(350)
					end->zpp_inner = null();
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(350)
						{
						}
						HX_STACK_LINE(350)
						o->zpp_pool = null();
						HX_STACK_LINE(350)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(350)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(350)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(350)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(350)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(350)
						{
						}
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							if (((o->outer != null()))){
								HX_STACK_LINE(350)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(350)
								o->outer = null();
							}
							HX_STACK_LINE(350)
							o->_isimmutable = null();
							HX_STACK_LINE(350)
							o->_validate = null();
							HX_STACK_LINE(350)
							o->_invalidate = null();
						}
						HX_STACK_LINE(350)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(350)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(351)
				true;
			}
			else{
				HX_STACK_LINE(353)
				false;
			}
		}
		else{
			HX_STACK_LINE(359)
			::nape::geom::Vec2 u = this->zpp_inner->xform->outer->transform(start,null(),null());		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(360)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(control,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(361)
			::nape::geom::Vec2 q = this->zpp_inner->xform->outer->transform(end,null(),null());		HX_STACK_VAR(q,"q");
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &u){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",362);
					{
						HX_STACK_LINE(362)
						if (((bool((u != null())) && bool(u->zpp_disp)))){
							HX_STACK_LINE(362)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(362)
						{
							HX_STACK_LINE(362)
							::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(362)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(362)
								_this->_validate();
							}
						}
						HX_STACK_LINE(362)
						return u->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &u){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",362);
					{
						HX_STACK_LINE(362)
						if (((bool((u != null())) && bool(u->zpp_disp)))){
							HX_STACK_LINE(362)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(362)
						{
							HX_STACK_LINE(362)
							::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(362)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(362)
								_this->_validate();
							}
						}
						HX_STACK_LINE(362)
						return u->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(362)
			g->moveTo(_Function_2_1::Block(u),_Function_2_2::Block(u));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",363);
					{
						HX_STACK_LINE(363)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(363)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(363)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(363)
								_this->_validate();
							}
						}
						HX_STACK_LINE(363)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",363);
					{
						HX_STACK_LINE(363)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(363)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(363)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(363)
								_this->_validate();
							}
						}
						HX_STACK_LINE(363)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_5{
				inline static Float Block( ::nape::geom::Vec2 &q){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",363);
					{
						HX_STACK_LINE(363)
						if (((bool((q != null())) && bool(q->zpp_disp)))){
							HX_STACK_LINE(363)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(363)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(363)
								_this->_validate();
							}
						}
						HX_STACK_LINE(363)
						return q->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_6{
				inline static Float Block( ::nape::geom::Vec2 &q){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",363);
					{
						HX_STACK_LINE(363)
						if (((bool((q != null())) && bool(q->zpp_disp)))){
							HX_STACK_LINE(363)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(363)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(363)
								_this->_validate();
							}
						}
						HX_STACK_LINE(363)
						return q->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(363)
			g->curveTo(_Function_2_3::Block(v),_Function_2_4::Block(v),_Function_2_5::Block(q),_Function_2_6::Block(q));
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				if (((bool((u != null())) && bool(u->zpp_disp)))){
					HX_STACK_LINE(364)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(364)
					if ((_this->_immutable)){
						HX_STACK_LINE(364)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(364)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(364)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(364)
				if ((u->zpp_inner->_inuse)){
					HX_STACK_LINE(364)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(364)
				::zpp_nape::geom::ZPP_Vec2 inner = u->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(364)
				u->zpp_inner->outer = null();
				HX_STACK_LINE(364)
				u->zpp_inner = null();
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::nape::geom::Vec2 o = u;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(364)
					{
					}
					HX_STACK_LINE(364)
					o->zpp_pool = null();
					HX_STACK_LINE(364)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(364)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(364)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(364)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(364)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(364)
					{
					}
					HX_STACK_LINE(364)
					{
						HX_STACK_LINE(364)
						if (((o->outer != null()))){
							HX_STACK_LINE(364)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(364)
							o->outer = null();
						}
						HX_STACK_LINE(364)
						o->_isimmutable = null();
						HX_STACK_LINE(364)
						o->_validate = null();
						HX_STACK_LINE(364)
						o->_invalidate = null();
					}
					HX_STACK_LINE(364)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(364)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(365)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(365)
					if ((_this->_immutable)){
						HX_STACK_LINE(365)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(365)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(365)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(365)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(365)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(365)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(365)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(365)
				v->zpp_inner = null();
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
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
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(366)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(366)
					if ((_this->_immutable)){
						HX_STACK_LINE(366)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(366)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(366)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(366)
				if ((q->zpp_inner->_inuse)){
					HX_STACK_LINE(366)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(366)
				::zpp_nape::geom::ZPP_Vec2 inner = q->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(366)
				q->zpp_inner->outer = null();
				HX_STACK_LINE(366)
				q->zpp_inner = null();
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::nape::geom::Vec2 o = q;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(366)
					{
					}
					HX_STACK_LINE(366)
					o->zpp_pool = null();
					HX_STACK_LINE(366)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(366)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(366)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(366)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(366)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(366)
					{
					}
					HX_STACK_LINE(366)
					{
						HX_STACK_LINE(366)
						if (((o->outer != null()))){
							HX_STACK_LINE(366)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(366)
							o->outer = null();
						}
						HX_STACK_LINE(366)
						o->_isimmutable = null();
						HX_STACK_LINE(366)
						o->_validate = null();
						HX_STACK_LINE(366)
						o->_invalidate = null();
					}
					HX_STACK_LINE(366)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(366)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawLine( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawLine","nape/util/ShapeDebug.hx",237);
		HX_STACK_THIS(this);
		HX_STACK_ARG(start,"start");
		HX_STACK_ARG(end,"end");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(239)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(239)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(241)
		if (((bool((start != null())) && bool(start->zpp_disp)))){
			HX_STACK_LINE(243)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(246)
		if (((bool((end != null())) && bool(end->zpp_disp)))){
			HX_STACK_LINE(248)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(252)
		if (((start == null()))){
			HX_STACK_LINE(252)
			hx::Throw (HX_CSTRING("Error: drawLine::start cannot be null"));
		}
		HX_STACK_LINE(253)
		if (((end == null()))){
			HX_STACK_LINE(253)
			hx::Throw (HX_CSTRING("Error: drawLine::end cannot be null"));
		}
		HX_STACK_LINE(255)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(256)
		g->lineStyle(0.1,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(257)
		if ((this->zpp_inner->xnull)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",258);
					{
						HX_STACK_LINE(258)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(258)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(258)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(258)
								_this->_validate();
							}
						}
						HX_STACK_LINE(258)
						return start->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",258);
					{
						HX_STACK_LINE(258)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(258)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(258)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(258)
								_this->_validate();
							}
						}
						HX_STACK_LINE(258)
						return start->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(258)
			g->moveTo(_Function_2_1::Block(start),_Function_2_2::Block(start));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",259);
					{
						HX_STACK_LINE(259)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(259)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(259)
						{
							HX_STACK_LINE(259)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(259)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(259)
								_this->_validate();
							}
						}
						HX_STACK_LINE(259)
						return end->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",259);
					{
						HX_STACK_LINE(259)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(259)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(259)
						{
							HX_STACK_LINE(259)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(259)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(259)
								_this->_validate();
							}
						}
						HX_STACK_LINE(259)
						return end->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(259)
			g->lineTo(_Function_2_3::Block(end),_Function_2_4::Block(end));
			HX_STACK_LINE(260)
			if ((start->zpp_inner->weak)){
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					if (((bool((start != null())) && bool(start->zpp_disp)))){
						HX_STACK_LINE(264)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(264)
						if ((_this->_immutable)){
							HX_STACK_LINE(264)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(264)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(264)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(264)
					if ((start->zpp_inner->_inuse)){
						HX_STACK_LINE(264)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(264)
					::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(264)
					start->zpp_inner->outer = null();
					HX_STACK_LINE(264)
					start->zpp_inner = null();
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(264)
						{
						}
						HX_STACK_LINE(264)
						o->zpp_pool = null();
						HX_STACK_LINE(264)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(264)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(264)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(264)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(264)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(264)
						{
						}
						HX_STACK_LINE(264)
						{
							HX_STACK_LINE(264)
							if (((o->outer != null()))){
								HX_STACK_LINE(264)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(264)
								o->outer = null();
							}
							HX_STACK_LINE(264)
							o->_isimmutable = null();
							HX_STACK_LINE(264)
							o->_validate = null();
							HX_STACK_LINE(264)
							o->_invalidate = null();
						}
						HX_STACK_LINE(264)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(264)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(265)
				true;
			}
			else{
				HX_STACK_LINE(267)
				false;
			}
			HX_STACK_LINE(271)
			if ((end->zpp_inner->weak)){
				HX_STACK_LINE(275)
				{
					HX_STACK_LINE(275)
					if (((bool((end != null())) && bool(end->zpp_disp)))){
						HX_STACK_LINE(275)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(275)
						if ((_this->_immutable)){
							HX_STACK_LINE(275)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(275)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(275)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(275)
					if ((end->zpp_inner->_inuse)){
						HX_STACK_LINE(275)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(275)
					::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(275)
					end->zpp_inner->outer = null();
					HX_STACK_LINE(275)
					end->zpp_inner = null();
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(275)
						{
						}
						HX_STACK_LINE(275)
						o->zpp_pool = null();
						HX_STACK_LINE(275)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(275)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(275)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(275)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(275)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(275)
						{
						}
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							if (((o->outer != null()))){
								HX_STACK_LINE(275)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(275)
								o->outer = null();
							}
							HX_STACK_LINE(275)
							o->_isimmutable = null();
							HX_STACK_LINE(275)
							o->_validate = null();
							HX_STACK_LINE(275)
							o->_invalidate = null();
						}
						HX_STACK_LINE(275)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(275)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(276)
				true;
			}
			else{
				HX_STACK_LINE(278)
				false;
			}
		}
		else{
			HX_STACK_LINE(284)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(start,null(),null());		HX_STACK_VAR(v,"v");
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",285);
					{
						HX_STACK_LINE(285)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(285)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(285)
						{
							HX_STACK_LINE(285)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(285)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(285)
								_this->_validate();
							}
						}
						HX_STACK_LINE(285)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",285);
					{
						HX_STACK_LINE(285)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(285)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(285)
						{
							HX_STACK_LINE(285)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(285)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(285)
								_this->_validate();
							}
						}
						HX_STACK_LINE(285)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(285)
			g->moveTo(_Function_2_1::Block(v),_Function_2_2::Block(v));
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(286)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					if ((_this->_immutable)){
						HX_STACK_LINE(286)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(286)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(286)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(286)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(286)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(286)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(286)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(286)
				v->zpp_inner = null();
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(286)
					{
					}
					HX_STACK_LINE(286)
					o->zpp_pool = null();
					HX_STACK_LINE(286)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(286)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(286)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(286)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(286)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(286)
					{
					}
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						if (((o->outer != null()))){
							HX_STACK_LINE(286)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(286)
							o->outer = null();
						}
						HX_STACK_LINE(286)
						o->_isimmutable = null();
						HX_STACK_LINE(286)
						o->_validate = null();
						HX_STACK_LINE(286)
						o->_invalidate = null();
					}
					HX_STACK_LINE(286)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(287)
			v = this->zpp_inner->xform->outer->transform(end,null(),null());
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",288);
					{
						HX_STACK_LINE(288)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(288)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(288)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(288)
								_this->_validate();
							}
						}
						HX_STACK_LINE(288)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",288);
					{
						HX_STACK_LINE(288)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(288)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(288)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(288)
								_this->_validate();
							}
						}
						HX_STACK_LINE(288)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(288)
			g->lineTo(_Function_2_3::Block(v),_Function_2_4::Block(v));
			HX_STACK_LINE(289)
			{
				HX_STACK_LINE(289)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(289)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(289)
					if ((_this->_immutable)){
						HX_STACK_LINE(289)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(289)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(289)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(289)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(289)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(289)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(289)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(289)
				v->zpp_inner = null();
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(289)
					{
					}
					HX_STACK_LINE(289)
					o->zpp_pool = null();
					HX_STACK_LINE(289)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(289)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(289)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(289)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(289)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(289)
					{
					}
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						if (((o->outer != null()))){
							HX_STACK_LINE(289)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(289)
							o->outer = null();
						}
						HX_STACK_LINE(289)
						o->_isimmutable = null();
						HX_STACK_LINE(289)
						o->_validate = null();
						HX_STACK_LINE(289)
						o->_invalidate = null();
					}
					HX_STACK_LINE(289)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::clear( ){
{
		HX_STACK_PUSH("ShapeDebug::clear","nape/util/ShapeDebug.hx",231);
		HX_STACK_THIS(this);
		HX_STACK_LINE(231)
		this->zpp_inner_zn->graphics->clear();
	}
return null();
}



ShapeDebug_obj::ShapeDebug_obj()
{
}

void ShapeDebug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeDebug);
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShapeDebug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ShapeDebug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawAABB") ) { return drawAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawCurve") ) { return drawCurve_dyn(); }
		if (HX_FIELD_EQ(inName,"thickness") ) { return thickness; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawSpring") ) { return drawSpring_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { return drawPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawFilledCircle") ) { return drawFilledCircle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawFilledPolygon") ) { return drawFilledPolygon_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawFilledTriangle") ) { return drawFilledTriangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShapeDebug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::util::ZPP_ShapeDebug >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeDebug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("thickness"));
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawSpring"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawFilledPolygon"),
	HX_CSTRING("drawPolygon"),
	HX_CSTRING("drawFilledCircle"),
	HX_CSTRING("drawFilledTriangle"),
	HX_CSTRING("drawAABB"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawCurve"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("clear"),
	HX_CSTRING("thickness"),
	HX_CSTRING("zpp_inner_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeDebug_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeDebug_obj::__mClass,"__mClass");
};

Class ShapeDebug_obj::__mClass;

void ShapeDebug_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.util.ShapeDebug"), hx::TCanCast< ShapeDebug_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShapeDebug_obj::__boot()
{
}

} // end namespace nape
} // end namespace util
