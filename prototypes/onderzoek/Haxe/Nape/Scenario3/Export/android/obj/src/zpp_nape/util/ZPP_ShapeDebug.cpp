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
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
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
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_JointStyle
#include <native/display/JointStyle.h>
#endif
#ifndef INCLUDED_native_display_LineScaleMode
#include <native/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_native_display_Shape
#include <native/display/Shape.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SpaceArbiterList
#include <zpp_nape/dynamics/ZPP_SpaceArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Compound
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_ShapeDebug_obj::__construct(int width,int height)
{
HX_STACK_PUSH("ZPP_ShapeDebug::new","zpp_nape/util/Debug.hx",430);
{
	HX_STACK_LINE(472)
	this->bodyList = null();
	HX_STACK_LINE(471)
	this->shapeList = null();
	HX_STACK_LINE(444)
	this->compoundstack = null();
	HX_STACK_LINE(433)
	this->graphics = null();
	HX_STACK_LINE(432)
	this->shape = null();
	HX_STACK_LINE(431)
	this->outer_zn = null();
	HX_STACK_LINE(435)
	super::__construct(width,height);
	HX_STACK_LINE(436)
	this->shape = ::native::display::Shape_obj::__new();
	HX_STACK_LINE(437)
	this->graphics = this->shape->get_graphics();
	HX_STACK_LINE(438)
	this->isbmp = false;
	HX_STACK_LINE(439)
	this->d_shape = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

ZPP_ShapeDebug_obj::~ZPP_ShapeDebug_obj() { }

Dynamic ZPP_ShapeDebug_obj::__CreateEmpty() { return  new ZPP_ShapeDebug_obj; }
hx::ObjectPtr< ZPP_ShapeDebug_obj > ZPP_ShapeDebug_obj::__new(int width,int height)
{  hx::ObjectPtr< ZPP_ShapeDebug_obj > result = new ZPP_ShapeDebug_obj();
	result->__construct(width,height);
	return result;}

Dynamic ZPP_ShapeDebug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_ShapeDebug_obj > result = new ZPP_ShapeDebug_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ZPP_ShapeDebug_obj::draw_arbiter( ::zpp_nape::dynamics::ZPP_Arbiter arb,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_PUSH("ZPP_ShapeDebug::draw_arbiter","zpp_nape/util/Debug.hx",1032);
		HX_STACK_THIS(this);
		HX_STACK_ARG(arb,"arb");
		HX_STACK_ARG(xform,"xform");
		HX_STACK_ARG(xdet,"xdet");
		HX_STACK_ARG(xnull,"xnull");
		HX_STACK_LINE(1033)
		Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(1034)
		Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(1035)
		if (((arb->outer->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR))){
			HX_STACK_LINE(1035)
			if ((this->outer->drawSensorArbiters)){
				HX_STACK_LINE(1037)
				::nape::dynamics::Arbiter sarb = arb->outer;		HX_STACK_VAR(sarb,"sarb");
				struct _Function_3_1{
					inline static int Block( ::zpp_nape::util::ZPP_ShapeDebug_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1038);
						{
							HX_STACK_LINE(1039)
							int col = (int)65280;		HX_STACK_VAR(col,"col");
							HX_STACK_LINE(1040)
							int ncol = ~(int)(__this->bg_col);		HX_STACK_VAR(ncol,"ncol");
							HX_STACK_LINE(1041)
							Float f = 0.7;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(1042)
							int _r = ::Std_obj::_int(((((int((int(col) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
							HX_STACK_LINE(1043)
							int _g = ::Std_obj::_int(((((int((int(col) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1044)
							int _b = ::Std_obj::_int(((((int(col) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
							HX_STACK_LINE(1045)
							return (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
						}
						return null();
					}
				};
				HX_STACK_LINE(1038)
				this->graphics->lineStyle(this->outer_zn->thickness,_Function_3_1::Block(this),(int)1,null(),null(),null(),null(),null());
				HX_STACK_LINE(1048)
				if ((xnull)){
					struct _Function_4_1{
						inline static Float Block( ::nape::dynamics::Arbiter &sarb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1049);
							{
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::dynamics::Arbiter &sarb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1049);
										{
											struct _Function_6_1{
												inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter &sarb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1049);
													{
														HX_STACK_LINE(1049)
														if ((!(sarb->zpp_inner->active))){
															HX_STACK_LINE(1049)
															hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
														}
														HX_STACK_LINE(1049)
														return (  (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))) ? ::nape::shape::Shape(sarb->zpp_inner->ws2->outer) : ::nape::shape::Shape(sarb->zpp_inner->ws1->outer) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1049)
											::nape::shape::Shape _this = _Function_6_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1049)
											if (((_this->zpp_inner->wrap_worldCOM == null()))){
												struct _Function_7_1{
													inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape &_this){
														HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1049);
														{
															HX_STACK_LINE(1049)
															Float x = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
															Float y = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
															bool weak = false;		HX_STACK_VAR(weak,"weak");
															HX_STACK_LINE(1049)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(1049)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(1049)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(1049)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(1049)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(1049)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(1049)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(1049)
																ret->zpp_pool = null();
																HX_STACK_LINE(1049)
																ret->zpp_disp = false;
																HX_STACK_LINE(1049)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(1049)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(1049)
															if (((ret->zpp_inner == null()))){
																struct _Function_9_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1049);
																		{
																			HX_STACK_LINE(1049)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1049)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1049)
																			{
																				HX_STACK_LINE(1049)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1049)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1049)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1049)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1049)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1049)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(1049)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(1049)
																			{
																				HX_STACK_LINE(1049)
																				ret1->x = x;
																				HX_STACK_LINE(1049)
																				ret1->y = y;
																				HX_STACK_LINE(1049)
																				{
																				}
																				HX_STACK_LINE(1049)
																				{
																				}
																			}
																			HX_STACK_LINE(1049)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1049)
																ret->zpp_inner = _Function_9_1::Block(x,y);
																HX_STACK_LINE(1049)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(1049)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(1049)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(1049)
																{
																	HX_STACK_LINE(1049)
																	::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1049)
																	if ((_this1->_immutable)){
																		HX_STACK_LINE(1049)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(1049)
																	if (((_this1->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(1049)
																		_this1->_isimmutable();
																	}
																}
																HX_STACK_LINE(1049)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(1049)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_9_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1049);
																		{
																			HX_STACK_LINE(1049)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1049)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1049)
																			{
																				HX_STACK_LINE(1049)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1049)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1049)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1049)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1049);
																		{
																			HX_STACK_LINE(1049)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1049)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1049)
																			{
																				HX_STACK_LINE(1049)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1049)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1049)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1049)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1049)
																if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
																	HX_STACK_LINE(1049)
																	{
																		HX_STACK_LINE(1049)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(1049)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(1049)
																		{
																		}
																		HX_STACK_LINE(1049)
																		{
																		}
																	}
																	HX_STACK_LINE(1049)
																	{
																		HX_STACK_LINE(1049)
																		::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																		HX_STACK_LINE(1049)
																		if (((_this1->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(1049)
																			_this1->_invalidate(_this1);
																		}
																	}
																}
																HX_STACK_LINE(1049)
																ret;
															}
															HX_STACK_LINE(1049)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(1049)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(1049)
												_this->zpp_inner->wrap_worldCOM = _Function_7_1::Block(_this);
												HX_STACK_LINE(1049)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
												HX_STACK_LINE(1049)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
												HX_STACK_LINE(1049)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this->zpp_inner->getworldCOM_dyn();
											}
											HX_STACK_LINE(1049)
											return _this->zpp_inner->wrap_worldCOM;
										}
										return null();
									}
								};
								HX_STACK_LINE(1049)
								::nape::geom::Vec2 _this = _Function_5_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1049)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1049)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1049)
								{
									HX_STACK_LINE(1049)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1049)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(1049)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1049)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(1049)
					vx = _Function_4_1::Block(sarb);
					struct _Function_4_2{
						inline static Float Block( ::nape::dynamics::Arbiter &sarb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1050);
							{
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::dynamics::Arbiter &sarb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1050);
										{
											struct _Function_6_1{
												inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter &sarb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1050);
													{
														HX_STACK_LINE(1050)
														if ((!(sarb->zpp_inner->active))){
															HX_STACK_LINE(1050)
															hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
														}
														HX_STACK_LINE(1050)
														return (  (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))) ? ::nape::shape::Shape(sarb->zpp_inner->ws2->outer) : ::nape::shape::Shape(sarb->zpp_inner->ws1->outer) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1050)
											::nape::shape::Shape _this = _Function_6_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1050)
											if (((_this->zpp_inner->wrap_worldCOM == null()))){
												struct _Function_7_1{
													inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape &_this){
														HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1050);
														{
															HX_STACK_LINE(1050)
															Float x = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
															Float y = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
															bool weak = false;		HX_STACK_VAR(weak,"weak");
															HX_STACK_LINE(1050)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(1050)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(1050)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(1050)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(1050)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(1050)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(1050)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(1050)
																ret->zpp_pool = null();
																HX_STACK_LINE(1050)
																ret->zpp_disp = false;
																HX_STACK_LINE(1050)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(1050)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(1050)
															if (((ret->zpp_inner == null()))){
																struct _Function_9_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1050);
																		{
																			HX_STACK_LINE(1050)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1050)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1050)
																			{
																				HX_STACK_LINE(1050)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1050)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1050)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1050)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1050)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1050)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(1050)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(1050)
																			{
																				HX_STACK_LINE(1050)
																				ret1->x = x;
																				HX_STACK_LINE(1050)
																				ret1->y = y;
																				HX_STACK_LINE(1050)
																				{
																				}
																				HX_STACK_LINE(1050)
																				{
																				}
																			}
																			HX_STACK_LINE(1050)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1050)
																ret->zpp_inner = _Function_9_1::Block(x,y);
																HX_STACK_LINE(1050)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(1050)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(1050)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(1050)
																{
																	HX_STACK_LINE(1050)
																	::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1050)
																	if ((_this1->_immutable)){
																		HX_STACK_LINE(1050)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(1050)
																	if (((_this1->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(1050)
																		_this1->_isimmutable();
																	}
																}
																HX_STACK_LINE(1050)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(1050)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_9_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1050);
																		{
																			HX_STACK_LINE(1050)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1050)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1050)
																			{
																				HX_STACK_LINE(1050)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1050)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1050)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1050)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1050);
																		{
																			HX_STACK_LINE(1050)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1050)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1050)
																			{
																				HX_STACK_LINE(1050)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1050)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1050)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1050)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1050)
																if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
																	HX_STACK_LINE(1050)
																	{
																		HX_STACK_LINE(1050)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(1050)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(1050)
																		{
																		}
																		HX_STACK_LINE(1050)
																		{
																		}
																	}
																	HX_STACK_LINE(1050)
																	{
																		HX_STACK_LINE(1050)
																		::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																		HX_STACK_LINE(1050)
																		if (((_this1->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(1050)
																			_this1->_invalidate(_this1);
																		}
																	}
																}
																HX_STACK_LINE(1050)
																ret;
															}
															HX_STACK_LINE(1050)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(1050)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(1050)
												_this->zpp_inner->wrap_worldCOM = _Function_7_1::Block(_this);
												HX_STACK_LINE(1050)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
												HX_STACK_LINE(1050)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
												HX_STACK_LINE(1050)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this->zpp_inner->getworldCOM_dyn();
											}
											HX_STACK_LINE(1050)
											return _this->zpp_inner->wrap_worldCOM;
										}
										return null();
									}
								};
								HX_STACK_LINE(1050)
								::nape::geom::Vec2 _this = _Function_5_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1050)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1050)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1050)
								{
									HX_STACK_LINE(1050)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1050)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(1050)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1050)
								return _this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1050)
					vy = _Function_4_2::Block(sarb);
					HX_STACK_LINE(1051)
					{
					}
					HX_STACK_LINE(1059)
					{
					}
				}
				else{
					struct _Function_4_1{
						inline static Float Block( ::nape::dynamics::Arbiter &sarb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
							{
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::dynamics::Arbiter &sarb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
										{
											struct _Function_6_1{
												inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter &sarb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
													{
														HX_STACK_LINE(1069)
														if ((!(sarb->zpp_inner->active))){
															HX_STACK_LINE(1069)
															hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
														}
														HX_STACK_LINE(1069)
														return (  (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))) ? ::nape::shape::Shape(sarb->zpp_inner->ws2->outer) : ::nape::shape::Shape(sarb->zpp_inner->ws1->outer) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1069)
											::nape::shape::Shape _this = _Function_6_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1069)
											if (((_this->zpp_inner->wrap_worldCOM == null()))){
												struct _Function_7_1{
													inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape &_this){
														HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
														{
															HX_STACK_LINE(1069)
															Float x = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
															Float y = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
															bool weak = false;		HX_STACK_VAR(weak,"weak");
															HX_STACK_LINE(1069)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(1069)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(1069)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(1069)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(1069)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(1069)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(1069)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(1069)
																ret->zpp_pool = null();
																HX_STACK_LINE(1069)
																ret->zpp_disp = false;
																HX_STACK_LINE(1069)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(1069)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(1069)
															if (((ret->zpp_inner == null()))){
																struct _Function_9_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
																		{
																			HX_STACK_LINE(1069)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1069)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1069)
																			{
																				HX_STACK_LINE(1069)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1069)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1069)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1069)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1069)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1069)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(1069)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(1069)
																			{
																				HX_STACK_LINE(1069)
																				ret1->x = x;
																				HX_STACK_LINE(1069)
																				ret1->y = y;
																				HX_STACK_LINE(1069)
																				{
																				}
																				HX_STACK_LINE(1069)
																				{
																				}
																			}
																			HX_STACK_LINE(1069)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1069)
																ret->zpp_inner = _Function_9_1::Block(x,y);
																HX_STACK_LINE(1069)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(1069)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(1069)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(1069)
																{
																	HX_STACK_LINE(1069)
																	::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1069)
																	if ((_this1->_immutable)){
																		HX_STACK_LINE(1069)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(1069)
																	if (((_this1->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(1069)
																		_this1->_isimmutable();
																	}
																}
																HX_STACK_LINE(1069)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(1069)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_9_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
																		{
																			HX_STACK_LINE(1069)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1069)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1069)
																			{
																				HX_STACK_LINE(1069)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1069)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1069)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1069)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
																		{
																			HX_STACK_LINE(1069)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1069)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1069)
																			{
																				HX_STACK_LINE(1069)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1069)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1069)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1069)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1069)
																if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
																	HX_STACK_LINE(1069)
																	{
																		HX_STACK_LINE(1069)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(1069)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(1069)
																		{
																		}
																		HX_STACK_LINE(1069)
																		{
																		}
																	}
																	HX_STACK_LINE(1069)
																	{
																		HX_STACK_LINE(1069)
																		::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																		HX_STACK_LINE(1069)
																		if (((_this1->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(1069)
																			_this1->_invalidate(_this1);
																		}
																	}
																}
																HX_STACK_LINE(1069)
																ret;
															}
															HX_STACK_LINE(1069)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(1069)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(1069)
												_this->zpp_inner->wrap_worldCOM = _Function_7_1::Block(_this);
												HX_STACK_LINE(1069)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
												HX_STACK_LINE(1069)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
												HX_STACK_LINE(1069)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this->zpp_inner->getworldCOM_dyn();
											}
											HX_STACK_LINE(1069)
											return _this->zpp_inner->wrap_worldCOM;
										}
										return null();
									}
								};
								HX_STACK_LINE(1069)
								::nape::geom::Vec2 _this = _Function_5_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1069)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1069)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1069)
								{
									HX_STACK_LINE(1069)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1069)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(1069)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1069)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::nape::dynamics::Arbiter &sarb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
							{
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::dynamics::Arbiter &sarb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
										{
											struct _Function_6_1{
												inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter &sarb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
													{
														HX_STACK_LINE(1069)
														if ((!(sarb->zpp_inner->active))){
															HX_STACK_LINE(1069)
															hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
														}
														HX_STACK_LINE(1069)
														return (  (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))) ? ::nape::shape::Shape(sarb->zpp_inner->ws2->outer) : ::nape::shape::Shape(sarb->zpp_inner->ws1->outer) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1069)
											::nape::shape::Shape _this = _Function_6_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1069)
											if (((_this->zpp_inner->wrap_worldCOM == null()))){
												struct _Function_7_1{
													inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape &_this){
														HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
														{
															HX_STACK_LINE(1069)
															Float x = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
															Float y = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
															bool weak = false;		HX_STACK_VAR(weak,"weak");
															HX_STACK_LINE(1069)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(1069)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(1069)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(1069)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(1069)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(1069)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(1069)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(1069)
																ret->zpp_pool = null();
																HX_STACK_LINE(1069)
																ret->zpp_disp = false;
																HX_STACK_LINE(1069)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(1069)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(1069)
															if (((ret->zpp_inner == null()))){
																struct _Function_9_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
																		{
																			HX_STACK_LINE(1069)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1069)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1069)
																			{
																				HX_STACK_LINE(1069)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1069)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1069)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1069)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1069)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1069)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(1069)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(1069)
																			{
																				HX_STACK_LINE(1069)
																				ret1->x = x;
																				HX_STACK_LINE(1069)
																				ret1->y = y;
																				HX_STACK_LINE(1069)
																				{
																				}
																				HX_STACK_LINE(1069)
																				{
																				}
																			}
																			HX_STACK_LINE(1069)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1069)
																ret->zpp_inner = _Function_9_1::Block(x,y);
																HX_STACK_LINE(1069)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(1069)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(1069)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(1069)
																{
																	HX_STACK_LINE(1069)
																	::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1069)
																	if ((_this1->_immutable)){
																		HX_STACK_LINE(1069)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(1069)
																	if (((_this1->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(1069)
																		_this1->_isimmutable();
																	}
																}
																HX_STACK_LINE(1069)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(1069)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_9_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
																		{
																			HX_STACK_LINE(1069)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1069)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1069)
																			{
																				HX_STACK_LINE(1069)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1069)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1069)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1069)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1069);
																		{
																			HX_STACK_LINE(1069)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1069)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1069)
																			{
																				HX_STACK_LINE(1069)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1069)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1069)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1069)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1069)
																if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
																	HX_STACK_LINE(1069)
																	{
																		HX_STACK_LINE(1069)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(1069)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(1069)
																		{
																		}
																		HX_STACK_LINE(1069)
																		{
																		}
																	}
																	HX_STACK_LINE(1069)
																	{
																		HX_STACK_LINE(1069)
																		::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																		HX_STACK_LINE(1069)
																		if (((_this1->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(1069)
																			_this1->_invalidate(_this1);
																		}
																	}
																}
																HX_STACK_LINE(1069)
																ret;
															}
															HX_STACK_LINE(1069)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(1069)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(1069)
												_this->zpp_inner->wrap_worldCOM = _Function_7_1::Block(_this);
												HX_STACK_LINE(1069)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
												HX_STACK_LINE(1069)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
												HX_STACK_LINE(1069)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this->zpp_inner->getworldCOM_dyn();
											}
											HX_STACK_LINE(1069)
											return _this->zpp_inner->wrap_worldCOM;
										}
										return null();
									}
								};
								HX_STACK_LINE(1069)
								::nape::geom::Vec2 _this = _Function_5_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1069)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1069)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1069)
								{
									HX_STACK_LINE(1069)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1069)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(1069)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1069)
								return _this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1069)
					vx = (((xform->a * _Function_4_1::Block(sarb)) + (xform->b * _Function_4_2::Block(sarb))) + xform->tx);
					struct _Function_4_3{
						inline static Float Block( ::nape::dynamics::Arbiter &sarb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
							{
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::dynamics::Arbiter &sarb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
										{
											struct _Function_6_1{
												inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter &sarb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
													{
														HX_STACK_LINE(1070)
														if ((!(sarb->zpp_inner->active))){
															HX_STACK_LINE(1070)
															hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
														}
														HX_STACK_LINE(1070)
														return (  (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))) ? ::nape::shape::Shape(sarb->zpp_inner->ws2->outer) : ::nape::shape::Shape(sarb->zpp_inner->ws1->outer) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1070)
											::nape::shape::Shape _this = _Function_6_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1070)
											if (((_this->zpp_inner->wrap_worldCOM == null()))){
												struct _Function_7_1{
													inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape &_this){
														HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
														{
															HX_STACK_LINE(1070)
															Float x = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
															Float y = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
															bool weak = false;		HX_STACK_VAR(weak,"weak");
															HX_STACK_LINE(1070)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(1070)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(1070)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(1070)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(1070)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(1070)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(1070)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(1070)
																ret->zpp_pool = null();
																HX_STACK_LINE(1070)
																ret->zpp_disp = false;
																HX_STACK_LINE(1070)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(1070)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(1070)
															if (((ret->zpp_inner == null()))){
																struct _Function_9_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
																		{
																			HX_STACK_LINE(1070)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1070)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1070)
																			{
																				HX_STACK_LINE(1070)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1070)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1070)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1070)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1070)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1070)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(1070)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(1070)
																			{
																				HX_STACK_LINE(1070)
																				ret1->x = x;
																				HX_STACK_LINE(1070)
																				ret1->y = y;
																				HX_STACK_LINE(1070)
																				{
																				}
																				HX_STACK_LINE(1070)
																				{
																				}
																			}
																			HX_STACK_LINE(1070)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1070)
																ret->zpp_inner = _Function_9_1::Block(x,y);
																HX_STACK_LINE(1070)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(1070)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(1070)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(1070)
																{
																	HX_STACK_LINE(1070)
																	::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1070)
																	if ((_this1->_immutable)){
																		HX_STACK_LINE(1070)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(1070)
																	if (((_this1->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(1070)
																		_this1->_isimmutable();
																	}
																}
																HX_STACK_LINE(1070)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(1070)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_9_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
																		{
																			HX_STACK_LINE(1070)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1070)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1070)
																			{
																				HX_STACK_LINE(1070)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1070)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1070)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1070)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
																		{
																			HX_STACK_LINE(1070)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1070)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1070)
																			{
																				HX_STACK_LINE(1070)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1070)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1070)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1070)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1070)
																if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
																	HX_STACK_LINE(1070)
																	{
																		HX_STACK_LINE(1070)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(1070)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(1070)
																		{
																		}
																		HX_STACK_LINE(1070)
																		{
																		}
																	}
																	HX_STACK_LINE(1070)
																	{
																		HX_STACK_LINE(1070)
																		::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																		HX_STACK_LINE(1070)
																		if (((_this1->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(1070)
																			_this1->_invalidate(_this1);
																		}
																	}
																}
																HX_STACK_LINE(1070)
																ret;
															}
															HX_STACK_LINE(1070)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(1070)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(1070)
												_this->zpp_inner->wrap_worldCOM = _Function_7_1::Block(_this);
												HX_STACK_LINE(1070)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
												HX_STACK_LINE(1070)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
												HX_STACK_LINE(1070)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this->zpp_inner->getworldCOM_dyn();
											}
											HX_STACK_LINE(1070)
											return _this->zpp_inner->wrap_worldCOM;
										}
										return null();
									}
								};
								HX_STACK_LINE(1070)
								::nape::geom::Vec2 _this = _Function_5_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1070)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1070)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1070)
								{
									HX_STACK_LINE(1070)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1070)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(1070)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1070)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_4_4{
						inline static Float Block( ::nape::dynamics::Arbiter &sarb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
							{
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::dynamics::Arbiter &sarb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
										{
											struct _Function_6_1{
												inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter &sarb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
													{
														HX_STACK_LINE(1070)
														if ((!(sarb->zpp_inner->active))){
															HX_STACK_LINE(1070)
															hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
														}
														HX_STACK_LINE(1070)
														return (  (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))) ? ::nape::shape::Shape(sarb->zpp_inner->ws2->outer) : ::nape::shape::Shape(sarb->zpp_inner->ws1->outer) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1070)
											::nape::shape::Shape _this = _Function_6_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1070)
											if (((_this->zpp_inner->wrap_worldCOM == null()))){
												struct _Function_7_1{
													inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape &_this){
														HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
														{
															HX_STACK_LINE(1070)
															Float x = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
															Float y = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
															bool weak = false;		HX_STACK_VAR(weak,"weak");
															HX_STACK_LINE(1070)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(1070)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(1070)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(1070)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(1070)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(1070)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(1070)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(1070)
																ret->zpp_pool = null();
																HX_STACK_LINE(1070)
																ret->zpp_disp = false;
																HX_STACK_LINE(1070)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(1070)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(1070)
															if (((ret->zpp_inner == null()))){
																struct _Function_9_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
																		{
																			HX_STACK_LINE(1070)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1070)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1070)
																			{
																				HX_STACK_LINE(1070)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1070)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1070)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1070)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1070)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1070)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(1070)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(1070)
																			{
																				HX_STACK_LINE(1070)
																				ret1->x = x;
																				HX_STACK_LINE(1070)
																				ret1->y = y;
																				HX_STACK_LINE(1070)
																				{
																				}
																				HX_STACK_LINE(1070)
																				{
																				}
																			}
																			HX_STACK_LINE(1070)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1070)
																ret->zpp_inner = _Function_9_1::Block(x,y);
																HX_STACK_LINE(1070)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(1070)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(1070)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(1070)
																{
																	HX_STACK_LINE(1070)
																	::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1070)
																	if ((_this1->_immutable)){
																		HX_STACK_LINE(1070)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(1070)
																	if (((_this1->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(1070)
																		_this1->_isimmutable();
																	}
																}
																HX_STACK_LINE(1070)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(1070)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_9_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
																		{
																			HX_STACK_LINE(1070)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1070)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1070)
																			{
																				HX_STACK_LINE(1070)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1070)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1070)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1070)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1070);
																		{
																			HX_STACK_LINE(1070)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1070)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1070)
																			{
																				HX_STACK_LINE(1070)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1070)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1070)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1070)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1070)
																if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
																	HX_STACK_LINE(1070)
																	{
																		HX_STACK_LINE(1070)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(1070)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(1070)
																		{
																		}
																		HX_STACK_LINE(1070)
																		{
																		}
																	}
																	HX_STACK_LINE(1070)
																	{
																		HX_STACK_LINE(1070)
																		::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																		HX_STACK_LINE(1070)
																		if (((_this1->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(1070)
																			_this1->_invalidate(_this1);
																		}
																	}
																}
																HX_STACK_LINE(1070)
																ret;
															}
															HX_STACK_LINE(1070)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(1070)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(1070)
												_this->zpp_inner->wrap_worldCOM = _Function_7_1::Block(_this);
												HX_STACK_LINE(1070)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
												HX_STACK_LINE(1070)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
												HX_STACK_LINE(1070)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this->zpp_inner->getworldCOM_dyn();
											}
											HX_STACK_LINE(1070)
											return _this->zpp_inner->wrap_worldCOM;
										}
										return null();
									}
								};
								HX_STACK_LINE(1070)
								::nape::geom::Vec2 _this = _Function_5_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1070)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1070)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1070)
								{
									HX_STACK_LINE(1070)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1070)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(1070)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1070)
								return _this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1070)
					vy = (((xform->c * _Function_4_3::Block(sarb)) + (xform->d * _Function_4_4::Block(sarb))) + xform->ty);
				}
				HX_STACK_LINE(1072)
				this->graphics->moveTo(vx,vy);
				HX_STACK_LINE(1073)
				if ((xnull)){
					struct _Function_4_1{
						inline static Float Block( ::nape::dynamics::Arbiter &sarb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1074);
							{
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::dynamics::Arbiter &sarb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1074);
										{
											struct _Function_6_1{
												inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter &sarb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1074);
													{
														HX_STACK_LINE(1074)
														if ((!(sarb->zpp_inner->active))){
															HX_STACK_LINE(1074)
															hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
														}
														HX_STACK_LINE(1074)
														return (  (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))) ? ::nape::shape::Shape(sarb->zpp_inner->ws1->outer) : ::nape::shape::Shape(sarb->zpp_inner->ws2->outer) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1074)
											::nape::shape::Shape _this = _Function_6_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1074)
											if (((_this->zpp_inner->wrap_worldCOM == null()))){
												struct _Function_7_1{
													inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape &_this){
														HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1074);
														{
															HX_STACK_LINE(1074)
															Float x = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
															Float y = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
															bool weak = false;		HX_STACK_VAR(weak,"weak");
															HX_STACK_LINE(1074)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(1074)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(1074)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(1074)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(1074)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(1074)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(1074)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(1074)
																ret->zpp_pool = null();
																HX_STACK_LINE(1074)
																ret->zpp_disp = false;
																HX_STACK_LINE(1074)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(1074)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(1074)
															if (((ret->zpp_inner == null()))){
																struct _Function_9_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1074);
																		{
																			HX_STACK_LINE(1074)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1074)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1074)
																			{
																				HX_STACK_LINE(1074)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1074)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1074)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1074)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1074)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1074)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(1074)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(1074)
																			{
																				HX_STACK_LINE(1074)
																				ret1->x = x;
																				HX_STACK_LINE(1074)
																				ret1->y = y;
																				HX_STACK_LINE(1074)
																				{
																				}
																				HX_STACK_LINE(1074)
																				{
																				}
																			}
																			HX_STACK_LINE(1074)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1074)
																ret->zpp_inner = _Function_9_1::Block(x,y);
																HX_STACK_LINE(1074)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(1074)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(1074)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(1074)
																{
																	HX_STACK_LINE(1074)
																	::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1074)
																	if ((_this1->_immutable)){
																		HX_STACK_LINE(1074)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(1074)
																	if (((_this1->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(1074)
																		_this1->_isimmutable();
																	}
																}
																HX_STACK_LINE(1074)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(1074)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_9_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1074);
																		{
																			HX_STACK_LINE(1074)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1074)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1074)
																			{
																				HX_STACK_LINE(1074)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1074)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1074)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1074)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1074);
																		{
																			HX_STACK_LINE(1074)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1074)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1074)
																			{
																				HX_STACK_LINE(1074)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1074)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1074)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1074)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1074)
																if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
																	HX_STACK_LINE(1074)
																	{
																		HX_STACK_LINE(1074)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(1074)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(1074)
																		{
																		}
																		HX_STACK_LINE(1074)
																		{
																		}
																	}
																	HX_STACK_LINE(1074)
																	{
																		HX_STACK_LINE(1074)
																		::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																		HX_STACK_LINE(1074)
																		if (((_this1->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(1074)
																			_this1->_invalidate(_this1);
																		}
																	}
																}
																HX_STACK_LINE(1074)
																ret;
															}
															HX_STACK_LINE(1074)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(1074)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(1074)
												_this->zpp_inner->wrap_worldCOM = _Function_7_1::Block(_this);
												HX_STACK_LINE(1074)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
												HX_STACK_LINE(1074)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
												HX_STACK_LINE(1074)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this->zpp_inner->getworldCOM_dyn();
											}
											HX_STACK_LINE(1074)
											return _this->zpp_inner->wrap_worldCOM;
										}
										return null();
									}
								};
								HX_STACK_LINE(1074)
								::nape::geom::Vec2 _this = _Function_5_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1074)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1074)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1074)
								{
									HX_STACK_LINE(1074)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1074)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(1074)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1074)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(1074)
					vx = _Function_4_1::Block(sarb);
					struct _Function_4_2{
						inline static Float Block( ::nape::dynamics::Arbiter &sarb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1075);
							{
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::dynamics::Arbiter &sarb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1075);
										{
											struct _Function_6_1{
												inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter &sarb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1075);
													{
														HX_STACK_LINE(1075)
														if ((!(sarb->zpp_inner->active))){
															HX_STACK_LINE(1075)
															hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
														}
														HX_STACK_LINE(1075)
														return (  (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))) ? ::nape::shape::Shape(sarb->zpp_inner->ws1->outer) : ::nape::shape::Shape(sarb->zpp_inner->ws2->outer) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1075)
											::nape::shape::Shape _this = _Function_6_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1075)
											if (((_this->zpp_inner->wrap_worldCOM == null()))){
												struct _Function_7_1{
													inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape &_this){
														HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1075);
														{
															HX_STACK_LINE(1075)
															Float x = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
															Float y = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
															bool weak = false;		HX_STACK_VAR(weak,"weak");
															HX_STACK_LINE(1075)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(1075)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(1075)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(1075)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(1075)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(1075)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(1075)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(1075)
																ret->zpp_pool = null();
																HX_STACK_LINE(1075)
																ret->zpp_disp = false;
																HX_STACK_LINE(1075)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(1075)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(1075)
															if (((ret->zpp_inner == null()))){
																struct _Function_9_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1075);
																		{
																			HX_STACK_LINE(1075)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1075)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1075)
																			{
																				HX_STACK_LINE(1075)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1075)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1075)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1075)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1075)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1075)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(1075)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(1075)
																			{
																				HX_STACK_LINE(1075)
																				ret1->x = x;
																				HX_STACK_LINE(1075)
																				ret1->y = y;
																				HX_STACK_LINE(1075)
																				{
																				}
																				HX_STACK_LINE(1075)
																				{
																				}
																			}
																			HX_STACK_LINE(1075)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1075)
																ret->zpp_inner = _Function_9_1::Block(x,y);
																HX_STACK_LINE(1075)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(1075)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(1075)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(1075)
																{
																	HX_STACK_LINE(1075)
																	::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1075)
																	if ((_this1->_immutable)){
																		HX_STACK_LINE(1075)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(1075)
																	if (((_this1->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(1075)
																		_this1->_isimmutable();
																	}
																}
																HX_STACK_LINE(1075)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(1075)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_9_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1075);
																		{
																			HX_STACK_LINE(1075)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1075)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1075)
																			{
																				HX_STACK_LINE(1075)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1075)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1075)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1075)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1075);
																		{
																			HX_STACK_LINE(1075)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1075)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1075)
																			{
																				HX_STACK_LINE(1075)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1075)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1075)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1075)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1075)
																if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
																	HX_STACK_LINE(1075)
																	{
																		HX_STACK_LINE(1075)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(1075)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(1075)
																		{
																		}
																		HX_STACK_LINE(1075)
																		{
																		}
																	}
																	HX_STACK_LINE(1075)
																	{
																		HX_STACK_LINE(1075)
																		::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																		HX_STACK_LINE(1075)
																		if (((_this1->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(1075)
																			_this1->_invalidate(_this1);
																		}
																	}
																}
																HX_STACK_LINE(1075)
																ret;
															}
															HX_STACK_LINE(1075)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(1075)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(1075)
												_this->zpp_inner->wrap_worldCOM = _Function_7_1::Block(_this);
												HX_STACK_LINE(1075)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
												HX_STACK_LINE(1075)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
												HX_STACK_LINE(1075)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this->zpp_inner->getworldCOM_dyn();
											}
											HX_STACK_LINE(1075)
											return _this->zpp_inner->wrap_worldCOM;
										}
										return null();
									}
								};
								HX_STACK_LINE(1075)
								::nape::geom::Vec2 _this = _Function_5_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1075)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1075)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1075)
								{
									HX_STACK_LINE(1075)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1075)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(1075)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1075)
								return _this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1075)
					vy = _Function_4_2::Block(sarb);
					HX_STACK_LINE(1076)
					{
					}
					HX_STACK_LINE(1084)
					{
					}
				}
				else{
					struct _Function_4_1{
						inline static Float Block( ::nape::dynamics::Arbiter &sarb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
							{
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::dynamics::Arbiter &sarb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
										{
											struct _Function_6_1{
												inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter &sarb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
													{
														HX_STACK_LINE(1094)
														if ((!(sarb->zpp_inner->active))){
															HX_STACK_LINE(1094)
															hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
														}
														HX_STACK_LINE(1094)
														return (  (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))) ? ::nape::shape::Shape(sarb->zpp_inner->ws1->outer) : ::nape::shape::Shape(sarb->zpp_inner->ws2->outer) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1094)
											::nape::shape::Shape _this = _Function_6_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1094)
											if (((_this->zpp_inner->wrap_worldCOM == null()))){
												struct _Function_7_1{
													inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape &_this){
														HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
														{
															HX_STACK_LINE(1094)
															Float x = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
															Float y = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
															bool weak = false;		HX_STACK_VAR(weak,"weak");
															HX_STACK_LINE(1094)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(1094)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(1094)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(1094)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(1094)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(1094)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(1094)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(1094)
																ret->zpp_pool = null();
																HX_STACK_LINE(1094)
																ret->zpp_disp = false;
																HX_STACK_LINE(1094)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(1094)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(1094)
															if (((ret->zpp_inner == null()))){
																struct _Function_9_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
																		{
																			HX_STACK_LINE(1094)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1094)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1094)
																			{
																				HX_STACK_LINE(1094)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1094)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1094)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1094)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1094)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1094)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(1094)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(1094)
																			{
																				HX_STACK_LINE(1094)
																				ret1->x = x;
																				HX_STACK_LINE(1094)
																				ret1->y = y;
																				HX_STACK_LINE(1094)
																				{
																				}
																				HX_STACK_LINE(1094)
																				{
																				}
																			}
																			HX_STACK_LINE(1094)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1094)
																ret->zpp_inner = _Function_9_1::Block(x,y);
																HX_STACK_LINE(1094)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(1094)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(1094)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(1094)
																{
																	HX_STACK_LINE(1094)
																	::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1094)
																	if ((_this1->_immutable)){
																		HX_STACK_LINE(1094)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(1094)
																	if (((_this1->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(1094)
																		_this1->_isimmutable();
																	}
																}
																HX_STACK_LINE(1094)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(1094)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_9_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
																		{
																			HX_STACK_LINE(1094)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1094)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1094)
																			{
																				HX_STACK_LINE(1094)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1094)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1094)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1094)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
																		{
																			HX_STACK_LINE(1094)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1094)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1094)
																			{
																				HX_STACK_LINE(1094)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1094)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1094)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1094)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1094)
																if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
																	HX_STACK_LINE(1094)
																	{
																		HX_STACK_LINE(1094)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(1094)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(1094)
																		{
																		}
																		HX_STACK_LINE(1094)
																		{
																		}
																	}
																	HX_STACK_LINE(1094)
																	{
																		HX_STACK_LINE(1094)
																		::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																		HX_STACK_LINE(1094)
																		if (((_this1->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(1094)
																			_this1->_invalidate(_this1);
																		}
																	}
																}
																HX_STACK_LINE(1094)
																ret;
															}
															HX_STACK_LINE(1094)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(1094)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(1094)
												_this->zpp_inner->wrap_worldCOM = _Function_7_1::Block(_this);
												HX_STACK_LINE(1094)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
												HX_STACK_LINE(1094)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
												HX_STACK_LINE(1094)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this->zpp_inner->getworldCOM_dyn();
											}
											HX_STACK_LINE(1094)
											return _this->zpp_inner->wrap_worldCOM;
										}
										return null();
									}
								};
								HX_STACK_LINE(1094)
								::nape::geom::Vec2 _this = _Function_5_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1094)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1094)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1094)
								{
									HX_STACK_LINE(1094)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1094)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(1094)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1094)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::nape::dynamics::Arbiter &sarb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
							{
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::dynamics::Arbiter &sarb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
										{
											struct _Function_6_1{
												inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter &sarb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
													{
														HX_STACK_LINE(1094)
														if ((!(sarb->zpp_inner->active))){
															HX_STACK_LINE(1094)
															hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
														}
														HX_STACK_LINE(1094)
														return (  (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))) ? ::nape::shape::Shape(sarb->zpp_inner->ws1->outer) : ::nape::shape::Shape(sarb->zpp_inner->ws2->outer) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1094)
											::nape::shape::Shape _this = _Function_6_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1094)
											if (((_this->zpp_inner->wrap_worldCOM == null()))){
												struct _Function_7_1{
													inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape &_this){
														HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
														{
															HX_STACK_LINE(1094)
															Float x = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
															Float y = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
															bool weak = false;		HX_STACK_VAR(weak,"weak");
															HX_STACK_LINE(1094)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(1094)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(1094)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(1094)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(1094)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(1094)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(1094)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(1094)
																ret->zpp_pool = null();
																HX_STACK_LINE(1094)
																ret->zpp_disp = false;
																HX_STACK_LINE(1094)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(1094)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(1094)
															if (((ret->zpp_inner == null()))){
																struct _Function_9_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
																		{
																			HX_STACK_LINE(1094)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1094)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1094)
																			{
																				HX_STACK_LINE(1094)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1094)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1094)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1094)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1094)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1094)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(1094)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(1094)
																			{
																				HX_STACK_LINE(1094)
																				ret1->x = x;
																				HX_STACK_LINE(1094)
																				ret1->y = y;
																				HX_STACK_LINE(1094)
																				{
																				}
																				HX_STACK_LINE(1094)
																				{
																				}
																			}
																			HX_STACK_LINE(1094)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1094)
																ret->zpp_inner = _Function_9_1::Block(x,y);
																HX_STACK_LINE(1094)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(1094)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(1094)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(1094)
																{
																	HX_STACK_LINE(1094)
																	::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1094)
																	if ((_this1->_immutable)){
																		HX_STACK_LINE(1094)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(1094)
																	if (((_this1->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(1094)
																		_this1->_isimmutable();
																	}
																}
																HX_STACK_LINE(1094)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(1094)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_9_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
																		{
																			HX_STACK_LINE(1094)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1094)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1094)
																			{
																				HX_STACK_LINE(1094)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1094)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1094)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1094)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1094);
																		{
																			HX_STACK_LINE(1094)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1094)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1094)
																			{
																				HX_STACK_LINE(1094)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1094)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1094)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1094)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1094)
																if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
																	HX_STACK_LINE(1094)
																	{
																		HX_STACK_LINE(1094)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(1094)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(1094)
																		{
																		}
																		HX_STACK_LINE(1094)
																		{
																		}
																	}
																	HX_STACK_LINE(1094)
																	{
																		HX_STACK_LINE(1094)
																		::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																		HX_STACK_LINE(1094)
																		if (((_this1->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(1094)
																			_this1->_invalidate(_this1);
																		}
																	}
																}
																HX_STACK_LINE(1094)
																ret;
															}
															HX_STACK_LINE(1094)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(1094)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(1094)
												_this->zpp_inner->wrap_worldCOM = _Function_7_1::Block(_this);
												HX_STACK_LINE(1094)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
												HX_STACK_LINE(1094)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
												HX_STACK_LINE(1094)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this->zpp_inner->getworldCOM_dyn();
											}
											HX_STACK_LINE(1094)
											return _this->zpp_inner->wrap_worldCOM;
										}
										return null();
									}
								};
								HX_STACK_LINE(1094)
								::nape::geom::Vec2 _this = _Function_5_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1094)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1094)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1094)
								{
									HX_STACK_LINE(1094)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1094)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(1094)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1094)
								return _this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1094)
					vx = (((xform->a * _Function_4_1::Block(sarb)) + (xform->b * _Function_4_2::Block(sarb))) + xform->tx);
					struct _Function_4_3{
						inline static Float Block( ::nape::dynamics::Arbiter &sarb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
							{
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::dynamics::Arbiter &sarb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
										{
											struct _Function_6_1{
												inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter &sarb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
													{
														HX_STACK_LINE(1095)
														if ((!(sarb->zpp_inner->active))){
															HX_STACK_LINE(1095)
															hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
														}
														HX_STACK_LINE(1095)
														return (  (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))) ? ::nape::shape::Shape(sarb->zpp_inner->ws1->outer) : ::nape::shape::Shape(sarb->zpp_inner->ws2->outer) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1095)
											::nape::shape::Shape _this = _Function_6_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1095)
											if (((_this->zpp_inner->wrap_worldCOM == null()))){
												struct _Function_7_1{
													inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape &_this){
														HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
														{
															HX_STACK_LINE(1095)
															Float x = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
															Float y = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
															bool weak = false;		HX_STACK_VAR(weak,"weak");
															HX_STACK_LINE(1095)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(1095)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(1095)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(1095)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(1095)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(1095)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(1095)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(1095)
																ret->zpp_pool = null();
																HX_STACK_LINE(1095)
																ret->zpp_disp = false;
																HX_STACK_LINE(1095)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(1095)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(1095)
															if (((ret->zpp_inner == null()))){
																struct _Function_9_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
																		{
																			HX_STACK_LINE(1095)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1095)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1095)
																			{
																				HX_STACK_LINE(1095)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1095)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1095)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1095)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1095)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1095)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(1095)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(1095)
																			{
																				HX_STACK_LINE(1095)
																				ret1->x = x;
																				HX_STACK_LINE(1095)
																				ret1->y = y;
																				HX_STACK_LINE(1095)
																				{
																				}
																				HX_STACK_LINE(1095)
																				{
																				}
																			}
																			HX_STACK_LINE(1095)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1095)
																ret->zpp_inner = _Function_9_1::Block(x,y);
																HX_STACK_LINE(1095)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(1095)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(1095)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(1095)
																{
																	HX_STACK_LINE(1095)
																	::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1095)
																	if ((_this1->_immutable)){
																		HX_STACK_LINE(1095)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(1095)
																	if (((_this1->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(1095)
																		_this1->_isimmutable();
																	}
																}
																HX_STACK_LINE(1095)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(1095)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_9_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
																		{
																			HX_STACK_LINE(1095)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1095)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1095)
																			{
																				HX_STACK_LINE(1095)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1095)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1095)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1095)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
																		{
																			HX_STACK_LINE(1095)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1095)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1095)
																			{
																				HX_STACK_LINE(1095)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1095)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1095)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1095)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1095)
																if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
																	HX_STACK_LINE(1095)
																	{
																		HX_STACK_LINE(1095)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(1095)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(1095)
																		{
																		}
																		HX_STACK_LINE(1095)
																		{
																		}
																	}
																	HX_STACK_LINE(1095)
																	{
																		HX_STACK_LINE(1095)
																		::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																		HX_STACK_LINE(1095)
																		if (((_this1->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(1095)
																			_this1->_invalidate(_this1);
																		}
																	}
																}
																HX_STACK_LINE(1095)
																ret;
															}
															HX_STACK_LINE(1095)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(1095)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(1095)
												_this->zpp_inner->wrap_worldCOM = _Function_7_1::Block(_this);
												HX_STACK_LINE(1095)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
												HX_STACK_LINE(1095)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
												HX_STACK_LINE(1095)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this->zpp_inner->getworldCOM_dyn();
											}
											HX_STACK_LINE(1095)
											return _this->zpp_inner->wrap_worldCOM;
										}
										return null();
									}
								};
								HX_STACK_LINE(1095)
								::nape::geom::Vec2 _this = _Function_5_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1095)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1095)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1095)
								{
									HX_STACK_LINE(1095)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1095)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(1095)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1095)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_4_4{
						inline static Float Block( ::nape::dynamics::Arbiter &sarb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
							{
								struct _Function_5_1{
									inline static ::nape::geom::Vec2 Block( ::nape::dynamics::Arbiter &sarb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
										{
											struct _Function_6_1{
												inline static ::nape::shape::Shape Block( ::nape::dynamics::Arbiter &sarb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
													{
														HX_STACK_LINE(1095)
														if ((!(sarb->zpp_inner->active))){
															HX_STACK_LINE(1095)
															hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
														}
														HX_STACK_LINE(1095)
														return (  (((sarb->zpp_inner->ws1->id > sarb->zpp_inner->ws2->id))) ? ::nape::shape::Shape(sarb->zpp_inner->ws1->outer) : ::nape::shape::Shape(sarb->zpp_inner->ws2->outer) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1095)
											::nape::shape::Shape _this = _Function_6_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1095)
											if (((_this->zpp_inner->wrap_worldCOM == null()))){
												struct _Function_7_1{
													inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape &_this){
														HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
														{
															HX_STACK_LINE(1095)
															Float x = _this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
															Float y = _this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
															bool weak = false;		HX_STACK_VAR(weak,"weak");
															HX_STACK_LINE(1095)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(1095)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(1095)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(1095)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(1095)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(1095)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(1095)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(1095)
																ret->zpp_pool = null();
																HX_STACK_LINE(1095)
																ret->zpp_disp = false;
																HX_STACK_LINE(1095)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(1095)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(1095)
															if (((ret->zpp_inner == null()))){
																struct _Function_9_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
																		{
																			HX_STACK_LINE(1095)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(1095)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1095)
																			{
																				HX_STACK_LINE(1095)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1095)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1095)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(1095)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1095)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1095)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(1095)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(1095)
																			{
																				HX_STACK_LINE(1095)
																				ret1->x = x;
																				HX_STACK_LINE(1095)
																				ret1->y = y;
																				HX_STACK_LINE(1095)
																				{
																				}
																				HX_STACK_LINE(1095)
																				{
																				}
																			}
																			HX_STACK_LINE(1095)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1095)
																ret->zpp_inner = _Function_9_1::Block(x,y);
																HX_STACK_LINE(1095)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(1095)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(1095)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(1095)
																{
																	HX_STACK_LINE(1095)
																	::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																	HX_STACK_LINE(1095)
																	if ((_this1->_immutable)){
																		HX_STACK_LINE(1095)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(1095)
																	if (((_this1->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(1095)
																		_this1->_isimmutable();
																	}
																}
																HX_STACK_LINE(1095)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(1095)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_9_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
																		{
																			HX_STACK_LINE(1095)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1095)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1095)
																			{
																				HX_STACK_LINE(1095)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1095)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1095)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1095)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1095);
																		{
																			HX_STACK_LINE(1095)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(1095)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(1095)
																			{
																				HX_STACK_LINE(1095)
																				::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																				HX_STACK_LINE(1095)
																				if (((_this1->_validate_dyn() != null()))){
																					HX_STACK_LINE(1095)
																					_this1->_validate();
																				}
																			}
																			HX_STACK_LINE(1095)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1095)
																if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
																	HX_STACK_LINE(1095)
																	{
																		HX_STACK_LINE(1095)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(1095)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(1095)
																		{
																		}
																		HX_STACK_LINE(1095)
																		{
																		}
																	}
																	HX_STACK_LINE(1095)
																	{
																		HX_STACK_LINE(1095)
																		::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
																		HX_STACK_LINE(1095)
																		if (((_this1->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(1095)
																			_this1->_invalidate(_this1);
																		}
																	}
																}
																HX_STACK_LINE(1095)
																ret;
															}
															HX_STACK_LINE(1095)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(1095)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(1095)
												_this->zpp_inner->wrap_worldCOM = _Function_7_1::Block(_this);
												HX_STACK_LINE(1095)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
												HX_STACK_LINE(1095)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
												HX_STACK_LINE(1095)
												_this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = _this->zpp_inner->getworldCOM_dyn();
											}
											HX_STACK_LINE(1095)
											return _this->zpp_inner->wrap_worldCOM;
										}
										return null();
									}
								};
								HX_STACK_LINE(1095)
								::nape::geom::Vec2 _this = _Function_5_1::Block(sarb);		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1095)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1095)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1095)
								{
									HX_STACK_LINE(1095)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1095)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(1095)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(1095)
								return _this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1095)
					vy = (((xform->c * _Function_4_3::Block(sarb)) + (xform->d * _Function_4_4::Block(sarb))) + xform->ty);
				}
				HX_STACK_LINE(1097)
				this->graphics->lineTo(vx,vy);
			}
		}
		else{
			HX_STACK_LINE(1100)
			if (((arb->outer->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
				HX_STACK_LINE(1100)
				if ((this->outer->drawFluidArbiters)){
					struct _Function_4_1{
						inline static ::nape::dynamics::FluidArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1102);
							{
								HX_STACK_LINE(1102)
								::nape::dynamics::Arbiter _this = arb->outer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1102)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))) ? ::nape::dynamics::FluidArbiter(_this->zpp_inner->fluidarb->outer_zn) : ::nape::dynamics::FluidArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1102)
					::nape::dynamics::FluidArbiter farb = _Function_4_1::Block(arb);		HX_STACK_VAR(farb,"farb");
					struct _Function_4_2{
						inline static int Block( ::zpp_nape::util::ZPP_ShapeDebug_obj *__this){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1103);
							{
								HX_STACK_LINE(1104)
								int col = (int)255;		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(1105)
								int ncol = ~(int)(__this->bg_col);		HX_STACK_VAR(ncol,"ncol");
								HX_STACK_LINE(1106)
								Float f = 0.7;		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(1107)
								int _r = ::Std_obj::_int(((((int((int(col) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
								HX_STACK_LINE(1108)
								int _g = ::Std_obj::_int(((((int((int(col) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1109)
								int _b = ::Std_obj::_int(((((int(col) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
								HX_STACK_LINE(1110)
								return (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
							}
							return null();
						}
					};
					HX_STACK_LINE(1103)
					this->graphics->lineStyle(this->outer_zn->thickness,_Function_4_2::Block(this),(int)1,null(),null(),null(),null(),null());
					HX_STACK_LINE(1113)
					if ((xnull)){
						struct _Function_5_1{
							inline static Float Block( ::nape::dynamics::FluidArbiter &farb){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1114);
								{
									struct _Function_6_1{
										inline static ::nape::geom::Vec2 Block( ::nape::dynamics::FluidArbiter &farb){
											HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1114);
											{
												HX_STACK_LINE(1114)
												if ((!(farb->zpp_inner->active))){
													HX_STACK_LINE(1114)
													hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
												}
												HX_STACK_LINE(1114)
												if (((farb->zpp_inner->fluidarb->wrap_position == null()))){
													HX_STACK_LINE(1114)
													farb->zpp_inner->fluidarb->getposition();
												}
												HX_STACK_LINE(1114)
												return farb->zpp_inner->fluidarb->wrap_position;
											}
											return null();
										}
									};
									HX_STACK_LINE(1114)
									::nape::geom::Vec2 _this = _Function_6_1::Block(farb);		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1114)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(1114)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1114)
									{
										HX_STACK_LINE(1114)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1114)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(1114)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(1114)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1114)
						vx = _Function_5_1::Block(farb);
						struct _Function_5_2{
							inline static Float Block( ::nape::dynamics::FluidArbiter &farb){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1115);
								{
									struct _Function_6_1{
										inline static ::nape::geom::Vec2 Block( ::nape::dynamics::FluidArbiter &farb){
											HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1115);
											{
												HX_STACK_LINE(1115)
												if ((!(farb->zpp_inner->active))){
													HX_STACK_LINE(1115)
													hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
												}
												HX_STACK_LINE(1115)
												if (((farb->zpp_inner->fluidarb->wrap_position == null()))){
													HX_STACK_LINE(1115)
													farb->zpp_inner->fluidarb->getposition();
												}
												HX_STACK_LINE(1115)
												return farb->zpp_inner->fluidarb->wrap_position;
											}
											return null();
										}
									};
									HX_STACK_LINE(1115)
									::nape::geom::Vec2 _this = _Function_6_1::Block(farb);		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1115)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(1115)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1115)
									{
										HX_STACK_LINE(1115)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1115)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(1115)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(1115)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1115)
						vy = _Function_5_2::Block(farb);
						HX_STACK_LINE(1116)
						{
						}
						HX_STACK_LINE(1124)
						{
						}
					}
					else{
						struct _Function_5_1{
							inline static Float Block( ::nape::dynamics::FluidArbiter &farb){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1134);
								{
									struct _Function_6_1{
										inline static ::nape::geom::Vec2 Block( ::nape::dynamics::FluidArbiter &farb){
											HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1134);
											{
												HX_STACK_LINE(1134)
												if ((!(farb->zpp_inner->active))){
													HX_STACK_LINE(1134)
													hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
												}
												HX_STACK_LINE(1134)
												if (((farb->zpp_inner->fluidarb->wrap_position == null()))){
													HX_STACK_LINE(1134)
													farb->zpp_inner->fluidarb->getposition();
												}
												HX_STACK_LINE(1134)
												return farb->zpp_inner->fluidarb->wrap_position;
											}
											return null();
										}
									};
									HX_STACK_LINE(1134)
									::nape::geom::Vec2 _this = _Function_6_1::Block(farb);		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1134)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(1134)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1134)
									{
										HX_STACK_LINE(1134)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1134)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(1134)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(1134)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static Float Block( ::nape::dynamics::FluidArbiter &farb){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1134);
								{
									struct _Function_6_1{
										inline static ::nape::geom::Vec2 Block( ::nape::dynamics::FluidArbiter &farb){
											HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1134);
											{
												HX_STACK_LINE(1134)
												if ((!(farb->zpp_inner->active))){
													HX_STACK_LINE(1134)
													hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
												}
												HX_STACK_LINE(1134)
												if (((farb->zpp_inner->fluidarb->wrap_position == null()))){
													HX_STACK_LINE(1134)
													farb->zpp_inner->fluidarb->getposition();
												}
												HX_STACK_LINE(1134)
												return farb->zpp_inner->fluidarb->wrap_position;
											}
											return null();
										}
									};
									HX_STACK_LINE(1134)
									::nape::geom::Vec2 _this = _Function_6_1::Block(farb);		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1134)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(1134)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1134)
									{
										HX_STACK_LINE(1134)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1134)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(1134)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(1134)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1134)
						vx = (((xform->a * _Function_5_1::Block(farb)) + (xform->b * _Function_5_2::Block(farb))) + xform->tx);
						struct _Function_5_3{
							inline static Float Block( ::nape::dynamics::FluidArbiter &farb){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1135);
								{
									struct _Function_6_1{
										inline static ::nape::geom::Vec2 Block( ::nape::dynamics::FluidArbiter &farb){
											HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1135);
											{
												HX_STACK_LINE(1135)
												if ((!(farb->zpp_inner->active))){
													HX_STACK_LINE(1135)
													hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
												}
												HX_STACK_LINE(1135)
												if (((farb->zpp_inner->fluidarb->wrap_position == null()))){
													HX_STACK_LINE(1135)
													farb->zpp_inner->fluidarb->getposition();
												}
												HX_STACK_LINE(1135)
												return farb->zpp_inner->fluidarb->wrap_position;
											}
											return null();
										}
									};
									HX_STACK_LINE(1135)
									::nape::geom::Vec2 _this = _Function_6_1::Block(farb);		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1135)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(1135)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1135)
									{
										HX_STACK_LINE(1135)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1135)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(1135)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(1135)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_5_4{
							inline static Float Block( ::nape::dynamics::FluidArbiter &farb){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1135);
								{
									struct _Function_6_1{
										inline static ::nape::geom::Vec2 Block( ::nape::dynamics::FluidArbiter &farb){
											HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1135);
											{
												HX_STACK_LINE(1135)
												if ((!(farb->zpp_inner->active))){
													HX_STACK_LINE(1135)
													hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
												}
												HX_STACK_LINE(1135)
												if (((farb->zpp_inner->fluidarb->wrap_position == null()))){
													HX_STACK_LINE(1135)
													farb->zpp_inner->fluidarb->getposition();
												}
												HX_STACK_LINE(1135)
												return farb->zpp_inner->fluidarb->wrap_position;
											}
											return null();
										}
									};
									HX_STACK_LINE(1135)
									::nape::geom::Vec2 _this = _Function_6_1::Block(farb);		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1135)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(1135)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1135)
									{
										HX_STACK_LINE(1135)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(1135)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(1135)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(1135)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1135)
						vy = (((xform->c * _Function_5_3::Block(farb)) + (xform->d * _Function_5_4::Block(farb))) + xform->ty);
					}
					HX_STACK_LINE(1137)
					this->graphics->drawCircle(vx,vy,0.75);
				}
			}
			else{
				HX_STACK_LINE(1140)
				if ((this->outer->drawCollisionArbiters)){
					struct _Function_4_1{
						inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1142);
							{
								HX_STACK_LINE(1142)
								::nape::dynamics::Arbiter _this = arb->outer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1142)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1142)
					::nape::dynamics::CollisionArbiter carb = _Function_4_1::Block(arb);		HX_STACK_VAR(carb,"carb");
					struct _Function_4_2{
						inline static bool Block( ::nape::dynamics::CollisionArbiter &carb){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1143);
							{
								struct _Function_5_1{
									inline static ::nape::dynamics::ContactList Block( ::nape::dynamics::CollisionArbiter &carb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1143);
										{
											HX_STACK_LINE(1143)
											if ((!(carb->zpp_inner->active))){
												HX_STACK_LINE(1143)
												hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
											}
											HX_STACK_LINE(1143)
											if (((carb->zpp_inner->colarb->wrap_contacts == null()))){
												HX_STACK_LINE(1143)
												carb->zpp_inner->colarb->setupcontacts();
											}
											HX_STACK_LINE(1143)
											return carb->zpp_inner->colarb->wrap_contacts;
										}
										return null();
									}
								};
								HX_STACK_LINE(1143)
								::nape::dynamics::ContactList _this = _Function_5_1::Block(carb);		HX_STACK_VAR(_this,"_this");
								struct _Function_5_2{
									inline static int Block( ::nape::dynamics::ContactList &_this){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1143);
										{
											HX_STACK_LINE(1143)
											_this->zpp_inner->valmod();
											HX_STACK_LINE(1143)
											if ((_this->zpp_inner->zip_length)){
												HX_STACK_LINE(1143)
												_this->zpp_inner->zip_length = false;
												HX_STACK_LINE(1143)
												{
													HX_STACK_LINE(1143)
													_this->zpp_inner->user_length = (int)0;
													HX_STACK_LINE(1143)
													{
														HX_STACK_LINE(1143)
														::zpp_nape::dynamics::ZPP_Contact cx_ite = _this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(1143)
														while(((cx_ite != null()))){
															HX_STACK_LINE(1143)
															::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
															HX_STACK_LINE(1143)
															if (((bool(i->active) && bool(i->arbiter->active)))){
																HX_STACK_LINE(1143)
																(_this->zpp_inner->user_length)++;
															}
															HX_STACK_LINE(1143)
															cx_ite = cx_ite->next;
														}
													}
												}
											}
											HX_STACK_LINE(1143)
											return _this->zpp_inner->user_length;
										}
										return null();
									}
								};
								HX_STACK_LINE(1143)
								return (_Function_5_2::Block(_this) == (int)0);
							}
							return null();
						}
					};
					HX_STACK_LINE(1143)
					if ((!(_Function_4_2::Block(carb)))){
						HX_STACK_LINE(1144)
						Float px = 0.0;		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(1145)
						Float py = 0.0;		HX_STACK_VAR(py,"py");
						struct _Function_5_1{
							inline static int Block( ::nape::dynamics::CollisionArbiter &carb){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1146);
								{
									struct _Function_6_1{
										inline static ::nape::dynamics::ContactList Block( ::nape::dynamics::CollisionArbiter &carb){
											HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1146);
											{
												HX_STACK_LINE(1146)
												if ((!(carb->zpp_inner->active))){
													HX_STACK_LINE(1146)
													hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
												}
												HX_STACK_LINE(1146)
												if (((carb->zpp_inner->colarb->wrap_contacts == null()))){
													HX_STACK_LINE(1146)
													carb->zpp_inner->colarb->setupcontacts();
												}
												HX_STACK_LINE(1146)
												return carb->zpp_inner->colarb->wrap_contacts;
											}
											return null();
										}
									};
									HX_STACK_LINE(1146)
									::nape::dynamics::ContactList _this = _Function_6_1::Block(carb);		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1146)
									_this->zpp_inner->valmod();
									HX_STACK_LINE(1146)
									if ((_this->zpp_inner->zip_length)){
										HX_STACK_LINE(1146)
										_this->zpp_inner->zip_length = false;
										HX_STACK_LINE(1146)
										{
											HX_STACK_LINE(1146)
											_this->zpp_inner->user_length = (int)0;
											HX_STACK_LINE(1146)
											{
												HX_STACK_LINE(1146)
												::zpp_nape::dynamics::ZPP_Contact cx_ite = _this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(1146)
												while(((cx_ite != null()))){
													HX_STACK_LINE(1146)
													::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(1146)
													if (((bool(i->active) && bool(i->arbiter->active)))){
														HX_STACK_LINE(1146)
														(_this->zpp_inner->user_length)++;
													}
													HX_STACK_LINE(1146)
													cx_ite = cx_ite->next;
												}
											}
										}
									}
									HX_STACK_LINE(1146)
									return _this->zpp_inner->user_length;
								}
								return null();
							}
						};
						HX_STACK_LINE(1146)
						if (((_Function_5_1::Block(carb) == (int)2))){
							struct _Function_6_1{
								inline static ::nape::geom::Vec2 Block( ::nape::dynamics::CollisionArbiter &carb){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1147);
									{
										struct _Function_7_1{
											inline static ::nape::dynamics::ContactList Block( ::nape::dynamics::CollisionArbiter &carb){
												HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1147);
												{
													HX_STACK_LINE(1147)
													if ((!(carb->zpp_inner->active))){
														HX_STACK_LINE(1147)
														hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
													}
													HX_STACK_LINE(1147)
													if (((carb->zpp_inner->colarb->wrap_contacts == null()))){
														HX_STACK_LINE(1147)
														carb->zpp_inner->colarb->setupcontacts();
													}
													HX_STACK_LINE(1147)
													return carb->zpp_inner->colarb->wrap_contacts;
												}
												return null();
											}
										};
										HX_STACK_LINE(1147)
										::nape::dynamics::Contact _this = (_Function_7_1::Block(carb))->at((int)0);		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1147)
										if ((_this->zpp_inner->inactiveme())){
											HX_STACK_LINE(1147)
											hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
										}
										HX_STACK_LINE(1147)
										if (((_this->zpp_inner->wrap_position == null()))){
											HX_STACK_LINE(1147)
											_this->zpp_inner->getposition();
										}
										HX_STACK_LINE(1147)
										return _this->zpp_inner->wrap_position;
									}
									return null();
								}
							};
							HX_STACK_LINE(1147)
							::nape::geom::Vec2 c1 = _Function_6_1::Block(carb);		HX_STACK_VAR(c1,"c1");
							struct _Function_6_2{
								inline static ::nape::geom::Vec2 Block( ::nape::dynamics::CollisionArbiter &carb){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1148);
									{
										struct _Function_7_1{
											inline static ::nape::dynamics::ContactList Block( ::nape::dynamics::CollisionArbiter &carb){
												HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1148);
												{
													HX_STACK_LINE(1148)
													if ((!(carb->zpp_inner->active))){
														HX_STACK_LINE(1148)
														hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
													}
													HX_STACK_LINE(1148)
													if (((carb->zpp_inner->colarb->wrap_contacts == null()))){
														HX_STACK_LINE(1148)
														carb->zpp_inner->colarb->setupcontacts();
													}
													HX_STACK_LINE(1148)
													return carb->zpp_inner->colarb->wrap_contacts;
												}
												return null();
											}
										};
										HX_STACK_LINE(1148)
										::nape::dynamics::Contact _this = (_Function_7_1::Block(carb))->at((int)1);		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1148)
										if ((_this->zpp_inner->inactiveme())){
											HX_STACK_LINE(1148)
											hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
										}
										HX_STACK_LINE(1148)
										if (((_this->zpp_inner->wrap_position == null()))){
											HX_STACK_LINE(1148)
											_this->zpp_inner->getposition();
										}
										HX_STACK_LINE(1148)
										return _this->zpp_inner->wrap_position;
									}
									return null();
								}
							};
							HX_STACK_LINE(1148)
							::nape::geom::Vec2 c2 = _Function_6_2::Block(carb);		HX_STACK_VAR(c2,"c2");
							struct _Function_6_3{
								inline static ::nape::geom::Vec2 Block( ::nape::dynamics::CollisionArbiter &carb){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1149);
									{
										HX_STACK_LINE(1149)
										if ((!(carb->zpp_inner->active))){
											HX_STACK_LINE(1149)
											hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
										}
										HX_STACK_LINE(1149)
										if (((carb->zpp_inner->colarb->wrap_normal == null()))){
											HX_STACK_LINE(1149)
											carb->zpp_inner->colarb->getnormal();
										}
										HX_STACK_LINE(1149)
										return carb->zpp_inner->colarb->wrap_normal;
									}
									return null();
								}
							};
							HX_STACK_LINE(1149)
							::nape::geom::Vec2 n = _Function_6_3::Block(carb);		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(1150)
							Float x = 0.661437828;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1151)
							Float y = 0.75;		HX_STACK_VAR(y,"y");
							struct _Function_6_4{
								inline static Float Block( ::nape::geom::Vec2 &n){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1152);
									{
										HX_STACK_LINE(1152)
										if (((bool((n != null())) && bool(n->zpp_disp)))){
											HX_STACK_LINE(1152)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1152)
										{
											HX_STACK_LINE(1152)
											::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1152)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1152)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1152)
										return n->zpp_inner->y;
									}
									return null();
								}
							};
							struct _Function_6_5{
								inline static Float Block( ::nape::geom::Vec2 &c1){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1152);
									{
										HX_STACK_LINE(1152)
										if (((bool((c1 != null())) && bool(c1->zpp_disp)))){
											HX_STACK_LINE(1152)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1152)
										{
											HX_STACK_LINE(1152)
											::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1152)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1152)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1152)
										return c1->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_6_6{
								inline static Float Block( ::nape::geom::Vec2 &n){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1152);
									{
										HX_STACK_LINE(1152)
										if (((bool((n != null())) && bool(n->zpp_disp)))){
											HX_STACK_LINE(1152)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1152)
										{
											HX_STACK_LINE(1152)
											::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1152)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1152)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1152)
										return n->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_6_7{
								inline static Float Block( ::nape::geom::Vec2 &c1){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1152);
									{
										HX_STACK_LINE(1152)
										if (((bool((c1 != null())) && bool(c1->zpp_disp)))){
											HX_STACK_LINE(1152)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1152)
										{
											HX_STACK_LINE(1152)
											::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1152)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1152)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1152)
										return c1->zpp_inner->y;
									}
									return null();
								}
							};
							struct _Function_6_8{
								inline static Float Block( ::nape::geom::Vec2 &n){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1152);
									{
										HX_STACK_LINE(1152)
										if (((bool((n != null())) && bool(n->zpp_disp)))){
											HX_STACK_LINE(1152)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1152)
										{
											HX_STACK_LINE(1152)
											::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1152)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1152)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1152)
										return n->zpp_inner->y;
									}
									return null();
								}
							};
							struct _Function_6_9{
								inline static Float Block( ::nape::geom::Vec2 &c2){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1152);
									{
										HX_STACK_LINE(1152)
										if (((bool((c2 != null())) && bool(c2->zpp_disp)))){
											HX_STACK_LINE(1152)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1152)
										{
											HX_STACK_LINE(1152)
											::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1152)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1152)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1152)
										return c2->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_6_10{
								inline static Float Block( ::nape::geom::Vec2 &n){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1152);
									{
										HX_STACK_LINE(1152)
										if (((bool((n != null())) && bool(n->zpp_disp)))){
											HX_STACK_LINE(1152)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1152)
										{
											HX_STACK_LINE(1152)
											::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1152)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1152)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1152)
										return n->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_6_11{
								inline static Float Block( ::nape::geom::Vec2 &c2){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1152);
									{
										HX_STACK_LINE(1152)
										if (((bool((c2 != null())) && bool(c2->zpp_disp)))){
											HX_STACK_LINE(1152)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1152)
										{
											HX_STACK_LINE(1152)
											::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1152)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1152)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1152)
										return c2->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1152)
							if (((((_Function_6_4::Block(n) * _Function_6_5::Block(c1)) - (_Function_6_6::Block(n) * _Function_6_7::Block(c1))) < ((_Function_6_8::Block(n) * _Function_6_9::Block(c2)) - (_Function_6_10::Block(n) * _Function_6_11::Block(c2)))))){
								HX_STACK_LINE(1153)
								x = -(x);
								HX_STACK_LINE(1154)
								y = -(y);
							}
							struct _Function_6_12{
								inline static int Block( ::zpp_nape::util::ZPP_ShapeDebug_obj *__this){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1156);
									{
										HX_STACK_LINE(1157)
										int col = (int)255;		HX_STACK_VAR(col,"col");
										HX_STACK_LINE(1158)
										int ncol = ~(int)(__this->bg_col);		HX_STACK_VAR(ncol,"ncol");
										HX_STACK_LINE(1159)
										Float f = 0.7;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(1160)
										int _r = ::Std_obj::_int(((((int((int(col) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
										HX_STACK_LINE(1161)
										int _g = ::Std_obj::_int(((((int((int(col) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(1162)
										int _b = ::Std_obj::_int(((((int(col) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
										HX_STACK_LINE(1163)
										return (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
									}
									return null();
								}
							};
							HX_STACK_LINE(1156)
							this->graphics->lineStyle(this->outer_zn->thickness,_Function_6_12::Block(this),(int)1,null(),null(),null(),null(),null());
							HX_STACK_LINE(1166)
							{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &c1){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1167);
										{
											HX_STACK_LINE(1167)
											if (((bool((c1 != null())) && bool(c1->zpp_disp)))){
												HX_STACK_LINE(1167)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1167)
											{
												HX_STACK_LINE(1167)
												::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1167)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1167)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1167)
											return c1->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1167);
										{
											HX_STACK_LINE(1167)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1167)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1167)
											{
												HX_STACK_LINE(1167)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1167)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1167)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1167)
											return n->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_3{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1167);
										{
											HX_STACK_LINE(1167)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1167)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1167)
											{
												HX_STACK_LINE(1167)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1167)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1167)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1167)
											return n->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1167)
								vx = ((_Function_7_1::Block(c1) + (_Function_7_2::Block(n) * y)) - (_Function_7_3::Block(n) * x));
								struct _Function_7_4{
									inline static Float Block( ::nape::geom::Vec2 &c1){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1168);
										{
											HX_STACK_LINE(1168)
											if (((bool((c1 != null())) && bool(c1->zpp_disp)))){
												HX_STACK_LINE(1168)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1168)
											{
												HX_STACK_LINE(1168)
												::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1168)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1168)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1168)
											return c1->zpp_inner->y;
										}
										return null();
									}
								};
								struct _Function_7_5{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1168);
										{
											HX_STACK_LINE(1168)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1168)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1168)
											{
												HX_STACK_LINE(1168)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1168)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1168)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1168)
											return n->zpp_inner->y;
										}
										return null();
									}
								};
								struct _Function_7_6{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1168);
										{
											HX_STACK_LINE(1168)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1168)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1168)
											{
												HX_STACK_LINE(1168)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1168)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1168)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1168)
											return n->zpp_inner->x;
										}
										return null();
									}
								};
								HX_STACK_LINE(1168)
								vy = ((_Function_7_4::Block(c1) + (_Function_7_5::Block(n) * y)) + (_Function_7_6::Block(n) * x));
								HX_STACK_LINE(1169)
								{
								}
								HX_STACK_LINE(1177)
								{
								}
							}
							HX_STACK_LINE(1186)
							if ((!(xnull))){
								HX_STACK_LINE(1187)
								Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1188)
								vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
								HX_STACK_LINE(1189)
								vx = t;
							}
							HX_STACK_LINE(1191)
							this->graphics->moveTo(vx,vy);
							HX_STACK_LINE(1192)
							{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &c2){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1193);
										{
											HX_STACK_LINE(1193)
											if (((bool((c2 != null())) && bool(c2->zpp_disp)))){
												HX_STACK_LINE(1193)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1193)
											{
												HX_STACK_LINE(1193)
												::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1193)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1193)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1193)
											return c2->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1193);
										{
											HX_STACK_LINE(1193)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1193)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1193)
											{
												HX_STACK_LINE(1193)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1193)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1193)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1193)
											return n->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_3{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1193);
										{
											HX_STACK_LINE(1193)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1193)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1193)
											{
												HX_STACK_LINE(1193)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1193)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1193)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1193)
											return n->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1193)
								vx = ((_Function_7_1::Block(c2) + (_Function_7_2::Block(n) * y)) + (_Function_7_3::Block(n) * x));
								struct _Function_7_4{
									inline static Float Block( ::nape::geom::Vec2 &c2){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1194);
										{
											HX_STACK_LINE(1194)
											if (((bool((c2 != null())) && bool(c2->zpp_disp)))){
												HX_STACK_LINE(1194)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1194)
											{
												HX_STACK_LINE(1194)
												::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1194)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1194)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1194)
											return c2->zpp_inner->y;
										}
										return null();
									}
								};
								struct _Function_7_5{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1194);
										{
											HX_STACK_LINE(1194)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1194)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1194)
											{
												HX_STACK_LINE(1194)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1194)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1194)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1194)
											return n->zpp_inner->y;
										}
										return null();
									}
								};
								struct _Function_7_6{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1194);
										{
											HX_STACK_LINE(1194)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1194)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1194)
											{
												HX_STACK_LINE(1194)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1194)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1194)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1194)
											return n->zpp_inner->x;
										}
										return null();
									}
								};
								HX_STACK_LINE(1194)
								vy = ((_Function_7_4::Block(c2) + (_Function_7_5::Block(n) * y)) - (_Function_7_6::Block(n) * x));
								HX_STACK_LINE(1195)
								{
								}
								HX_STACK_LINE(1203)
								{
								}
							}
							HX_STACK_LINE(1212)
							if ((!(xnull))){
								HX_STACK_LINE(1213)
								Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1214)
								vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
								HX_STACK_LINE(1215)
								vx = t;
							}
							HX_STACK_LINE(1217)
							this->graphics->lineTo(vx,vy);
							struct _Function_6_13{
								inline static int Block( ::zpp_nape::util::ZPP_ShapeDebug_obj *__this){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1218);
									{
										HX_STACK_LINE(1219)
										int col = (int)16711680;		HX_STACK_VAR(col,"col");
										HX_STACK_LINE(1220)
										int ncol = ~(int)(__this->bg_col);		HX_STACK_VAR(ncol,"ncol");
										HX_STACK_LINE(1221)
										Float f = 0.7;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(1222)
										int _r = ::Std_obj::_int(((((int((int(col) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
										HX_STACK_LINE(1223)
										int _g = ::Std_obj::_int(((((int((int(col) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(1224)
										int _b = ::Std_obj::_int(((((int(col) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
										HX_STACK_LINE(1225)
										return (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
									}
									return null();
								}
							};
							HX_STACK_LINE(1218)
							this->graphics->lineStyle(this->outer_zn->thickness,_Function_6_13::Block(this),(int)1,null(),null(),null(),null(),null());
							HX_STACK_LINE(1228)
							{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &c1){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1229);
										{
											HX_STACK_LINE(1229)
											if (((bool((c1 != null())) && bool(c1->zpp_disp)))){
												HX_STACK_LINE(1229)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1229)
											{
												HX_STACK_LINE(1229)
												::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1229)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1229)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1229)
											return c1->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1229);
										{
											HX_STACK_LINE(1229)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1229)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1229)
											{
												HX_STACK_LINE(1229)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1229)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1229)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1229)
											return n->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_3{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1229);
										{
											HX_STACK_LINE(1229)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1229)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1229)
											{
												HX_STACK_LINE(1229)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1229)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1229)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1229)
											return n->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1229)
								vx = ((_Function_7_1::Block(c1) - (_Function_7_2::Block(n) * y)) - (_Function_7_3::Block(n) * x));
								struct _Function_7_4{
									inline static Float Block( ::nape::geom::Vec2 &c1){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1230);
										{
											HX_STACK_LINE(1230)
											if (((bool((c1 != null())) && bool(c1->zpp_disp)))){
												HX_STACK_LINE(1230)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1230)
											{
												HX_STACK_LINE(1230)
												::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1230)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1230)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1230)
											return c1->zpp_inner->y;
										}
										return null();
									}
								};
								struct _Function_7_5{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1230);
										{
											HX_STACK_LINE(1230)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1230)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1230)
											{
												HX_STACK_LINE(1230)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1230)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1230)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1230)
											return n->zpp_inner->y;
										}
										return null();
									}
								};
								struct _Function_7_6{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1230);
										{
											HX_STACK_LINE(1230)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1230)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1230)
											{
												HX_STACK_LINE(1230)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1230)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1230)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1230)
											return n->zpp_inner->x;
										}
										return null();
									}
								};
								HX_STACK_LINE(1230)
								vy = ((_Function_7_4::Block(c1) - (_Function_7_5::Block(n) * y)) + (_Function_7_6::Block(n) * x));
								HX_STACK_LINE(1231)
								{
								}
								HX_STACK_LINE(1239)
								{
								}
							}
							HX_STACK_LINE(1248)
							if ((!(xnull))){
								HX_STACK_LINE(1249)
								Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1250)
								vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
								HX_STACK_LINE(1251)
								vx = t;
							}
							HX_STACK_LINE(1253)
							this->graphics->moveTo(vx,vy);
							HX_STACK_LINE(1254)
							{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &c2){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1255);
										{
											HX_STACK_LINE(1255)
											if (((bool((c2 != null())) && bool(c2->zpp_disp)))){
												HX_STACK_LINE(1255)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1255)
											{
												HX_STACK_LINE(1255)
												::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1255)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1255)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1255)
											return c2->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1255);
										{
											HX_STACK_LINE(1255)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1255)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1255)
											{
												HX_STACK_LINE(1255)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1255)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1255)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1255)
											return n->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_3{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1255);
										{
											HX_STACK_LINE(1255)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1255)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1255)
											{
												HX_STACK_LINE(1255)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1255)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1255)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1255)
											return n->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1255)
								vx = ((_Function_7_1::Block(c2) - (_Function_7_2::Block(n) * y)) + (_Function_7_3::Block(n) * x));
								struct _Function_7_4{
									inline static Float Block( ::nape::geom::Vec2 &c2){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1256);
										{
											HX_STACK_LINE(1256)
											if (((bool((c2 != null())) && bool(c2->zpp_disp)))){
												HX_STACK_LINE(1256)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1256)
											{
												HX_STACK_LINE(1256)
												::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1256)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1256)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1256)
											return c2->zpp_inner->y;
										}
										return null();
									}
								};
								struct _Function_7_5{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1256);
										{
											HX_STACK_LINE(1256)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1256)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1256)
											{
												HX_STACK_LINE(1256)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1256)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1256)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1256)
											return n->zpp_inner->y;
										}
										return null();
									}
								};
								struct _Function_7_6{
									inline static Float Block( ::nape::geom::Vec2 &n){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1256);
										{
											HX_STACK_LINE(1256)
											if (((bool((n != null())) && bool(n->zpp_disp)))){
												HX_STACK_LINE(1256)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1256)
											{
												HX_STACK_LINE(1256)
												::zpp_nape::geom::ZPP_Vec2 _this = n->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1256)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1256)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1256)
											return n->zpp_inner->x;
										}
										return null();
									}
								};
								HX_STACK_LINE(1256)
								vy = ((_Function_7_4::Block(c2) - (_Function_7_5::Block(n) * y)) - (_Function_7_6::Block(n) * x));
								HX_STACK_LINE(1257)
								{
								}
								HX_STACK_LINE(1265)
								{
								}
							}
							HX_STACK_LINE(1274)
							if ((!(xnull))){
								HX_STACK_LINE(1275)
								Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1276)
								vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
								HX_STACK_LINE(1277)
								vx = t;
							}
							HX_STACK_LINE(1279)
							this->graphics->lineTo(vx,vy);
							HX_STACK_LINE(1280)
							{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &c1){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1281);
										{
											HX_STACK_LINE(1281)
											if (((bool((c1 != null())) && bool(c1->zpp_disp)))){
												HX_STACK_LINE(1281)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1281)
											{
												HX_STACK_LINE(1281)
												::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1281)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1281)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1281)
											return c1->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &c2){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1281);
										{
											HX_STACK_LINE(1281)
											if (((bool((c2 != null())) && bool(c2->zpp_disp)))){
												HX_STACK_LINE(1281)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1281)
											{
												HX_STACK_LINE(1281)
												::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1281)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1281)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1281)
											return c2->zpp_inner->x;
										}
										return null();
									}
								};
								HX_STACK_LINE(1281)
								px = (0.5 * ((_Function_7_1::Block(c1) + _Function_7_2::Block(c2))));
								struct _Function_7_3{
									inline static Float Block( ::nape::geom::Vec2 &c1){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1282);
										{
											HX_STACK_LINE(1282)
											if (((bool((c1 != null())) && bool(c1->zpp_disp)))){
												HX_STACK_LINE(1282)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1282)
											{
												HX_STACK_LINE(1282)
												::zpp_nape::geom::ZPP_Vec2 _this = c1->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1282)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1282)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1282)
											return c1->zpp_inner->y;
										}
										return null();
									}
								};
								struct _Function_7_4{
									inline static Float Block( ::nape::geom::Vec2 &c2){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1282);
										{
											HX_STACK_LINE(1282)
											if (((bool((c2 != null())) && bool(c2->zpp_disp)))){
												HX_STACK_LINE(1282)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1282)
											{
												HX_STACK_LINE(1282)
												::zpp_nape::geom::ZPP_Vec2 _this = c2->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1282)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1282)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1282)
											return c2->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1282)
								py = (0.5 * ((_Function_7_3::Block(c1) + _Function_7_4::Block(c2))));
								HX_STACK_LINE(1283)
								{
								}
								HX_STACK_LINE(1291)
								{
								}
							}
							HX_STACK_LINE(1300)
							if ((!(xnull))){
								HX_STACK_LINE(1301)
								Float t = (((xform->a * px) + (xform->b * py)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1302)
								py = (((xform->c * px) + (xform->d * py)) + xform->ty);
								HX_STACK_LINE(1303)
								px = t;
							}
						}
						else{
							HX_STACK_LINE(1307)
							{
								struct _Function_7_1{
									inline static Float Block( ::nape::dynamics::CollisionArbiter &carb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1308);
										{
											struct _Function_8_1{
												inline static ::nape::geom::Vec2 Block( ::nape::dynamics::CollisionArbiter &carb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1308);
													{
														struct _Function_9_1{
															inline static ::nape::dynamics::ContactList Block( ::nape::dynamics::CollisionArbiter &carb){
																HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1308);
																{
																	HX_STACK_LINE(1308)
																	if ((!(carb->zpp_inner->active))){
																		HX_STACK_LINE(1308)
																		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
																	}
																	HX_STACK_LINE(1308)
																	if (((carb->zpp_inner->colarb->wrap_contacts == null()))){
																		HX_STACK_LINE(1308)
																		carb->zpp_inner->colarb->setupcontacts();
																	}
																	HX_STACK_LINE(1308)
																	return carb->zpp_inner->colarb->wrap_contacts;
																}
																return null();
															}
														};
														HX_STACK_LINE(1308)
														::nape::dynamics::Contact _this = (_Function_9_1::Block(carb))->at((int)0);		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1308)
														if ((_this->zpp_inner->inactiveme())){
															HX_STACK_LINE(1308)
															hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
														}
														HX_STACK_LINE(1308)
														if (((_this->zpp_inner->wrap_position == null()))){
															HX_STACK_LINE(1308)
															_this->zpp_inner->getposition();
														}
														HX_STACK_LINE(1308)
														return _this->zpp_inner->wrap_position;
													}
													return null();
												}
											};
											HX_STACK_LINE(1308)
											::nape::geom::Vec2 _this = _Function_8_1::Block(carb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1308)
											if (((bool((_this != null())) && bool(_this->zpp_disp)))){
												HX_STACK_LINE(1308)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1308)
											{
												HX_STACK_LINE(1308)
												::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1308)
												if (((_this1->_validate_dyn() != null()))){
													HX_STACK_LINE(1308)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1308)
											return _this->zpp_inner->x;
										}
										return null();
									}
								};
								HX_STACK_LINE(1308)
								px = _Function_7_1::Block(carb);
								struct _Function_7_2{
									inline static Float Block( ::nape::dynamics::CollisionArbiter &carb){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1309);
										{
											struct _Function_8_1{
												inline static ::nape::geom::Vec2 Block( ::nape::dynamics::CollisionArbiter &carb){
													HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1309);
													{
														struct _Function_9_1{
															inline static ::nape::dynamics::ContactList Block( ::nape::dynamics::CollisionArbiter &carb){
																HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1309);
																{
																	HX_STACK_LINE(1309)
																	if ((!(carb->zpp_inner->active))){
																		HX_STACK_LINE(1309)
																		hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
																	}
																	HX_STACK_LINE(1309)
																	if (((carb->zpp_inner->colarb->wrap_contacts == null()))){
																		HX_STACK_LINE(1309)
																		carb->zpp_inner->colarb->setupcontacts();
																	}
																	HX_STACK_LINE(1309)
																	return carb->zpp_inner->colarb->wrap_contacts;
																}
																return null();
															}
														};
														HX_STACK_LINE(1309)
														::nape::dynamics::Contact _this = (_Function_9_1::Block(carb))->at((int)0);		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1309)
														if ((_this->zpp_inner->inactiveme())){
															HX_STACK_LINE(1309)
															hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
														}
														HX_STACK_LINE(1309)
														if (((_this->zpp_inner->wrap_position == null()))){
															HX_STACK_LINE(1309)
															_this->zpp_inner->getposition();
														}
														HX_STACK_LINE(1309)
														return _this->zpp_inner->wrap_position;
													}
													return null();
												}
											};
											HX_STACK_LINE(1309)
											::nape::geom::Vec2 _this = _Function_8_1::Block(carb);		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1309)
											if (((bool((_this != null())) && bool(_this->zpp_disp)))){
												HX_STACK_LINE(1309)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1309)
											{
												HX_STACK_LINE(1309)
												::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1309)
												if (((_this1->_validate_dyn() != null()))){
													HX_STACK_LINE(1309)
													_this1->_validate();
												}
											}
											HX_STACK_LINE(1309)
											return _this->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1309)
								py = _Function_7_2::Block(carb);
								HX_STACK_LINE(1310)
								{
								}
								HX_STACK_LINE(1318)
								{
								}
							}
							HX_STACK_LINE(1327)
							if ((!(xnull))){
								HX_STACK_LINE(1328)
								Float t = (((xform->a * px) + (xform->b * py)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1329)
								py = (((xform->c * px) + (xform->d * py)) + xform->ty);
								HX_STACK_LINE(1330)
								px = t;
							}
							struct _Function_6_1{
								inline static int Block( ::zpp_nape::util::ZPP_ShapeDebug_obj *__this){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1332);
									{
										HX_STACK_LINE(1333)
										int col = (int)16711935;		HX_STACK_VAR(col,"col");
										HX_STACK_LINE(1334)
										int ncol = ~(int)(__this->bg_col);		HX_STACK_VAR(ncol,"ncol");
										HX_STACK_LINE(1335)
										Float f = 0.7;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(1336)
										int _r = ::Std_obj::_int(((((int((int(col) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
										HX_STACK_LINE(1337)
										int _g = ::Std_obj::_int(((((int((int(col) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(1338)
										int _b = ::Std_obj::_int(((((int(col) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
										HX_STACK_LINE(1339)
										return (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
									}
									return null();
								}
							};
							HX_STACK_LINE(1332)
							this->graphics->lineStyle(this->outer_zn->thickness,_Function_6_1::Block(this),(int)1,null(),null(),null(),null(),null());
							HX_STACK_LINE(1342)
							this->graphics->drawCircle(px,py,(int)1);
						}
						struct _Function_5_2{
							inline static int Block( ::zpp_nape::util::ZPP_ShapeDebug_obj *__this){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1344);
								{
									HX_STACK_LINE(1345)
									int col = ~(int)(__this->bg_col);		HX_STACK_VAR(col,"col");
									HX_STACK_LINE(1346)
									int ncol = __this->bg_col;		HX_STACK_VAR(ncol,"ncol");
									HX_STACK_LINE(1347)
									Float f = 0.7;		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(1348)
									int _r = ::Std_obj::_int(((((int((int(col) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
									HX_STACK_LINE(1349)
									int _g = ::Std_obj::_int(((((int((int(col) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1350)
									int _b = ::Std_obj::_int(((((int(col) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
									HX_STACK_LINE(1351)
									return (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
								}
								return null();
							}
						};
						HX_STACK_LINE(1344)
						this->graphics->lineStyle(this->outer_zn->thickness,_Function_5_2::Block(this),(int)1,null(),null(),null(),null(),null());
						HX_STACK_LINE(1354)
						this->graphics->moveTo(px,py);
						HX_STACK_LINE(1355)
						{
							struct _Function_6_1{
								inline static Float Block( ::nape::dynamics::CollisionArbiter &carb){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1356);
									{
										struct _Function_7_1{
											inline static ::nape::geom::Vec2 Block( ::nape::dynamics::CollisionArbiter &carb){
												HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1356);
												{
													HX_STACK_LINE(1356)
													if ((!(carb->zpp_inner->active))){
														HX_STACK_LINE(1356)
														hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
													}
													HX_STACK_LINE(1356)
													if (((carb->zpp_inner->colarb->wrap_normal == null()))){
														HX_STACK_LINE(1356)
														carb->zpp_inner->colarb->getnormal();
													}
													HX_STACK_LINE(1356)
													return carb->zpp_inner->colarb->wrap_normal;
												}
												return null();
											}
										};
										HX_STACK_LINE(1356)
										::nape::geom::Vec2 _this = _Function_7_1::Block(carb);		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1356)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(1356)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1356)
										{
											HX_STACK_LINE(1356)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1356)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(1356)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(1356)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1356)
							vx = (_Function_6_1::Block(carb) * (int)5);
							struct _Function_6_2{
								inline static Float Block( ::nape::dynamics::CollisionArbiter &carb){
									HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1357);
									{
										struct _Function_7_1{
											inline static ::nape::geom::Vec2 Block( ::nape::dynamics::CollisionArbiter &carb){
												HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1357);
												{
													HX_STACK_LINE(1357)
													if ((!(carb->zpp_inner->active))){
														HX_STACK_LINE(1357)
														hx::Throw (HX_CSTRING("Error: Arbiter not currently in use"));
													}
													HX_STACK_LINE(1357)
													if (((carb->zpp_inner->colarb->wrap_normal == null()))){
														HX_STACK_LINE(1357)
														carb->zpp_inner->colarb->getnormal();
													}
													HX_STACK_LINE(1357)
													return carb->zpp_inner->colarb->wrap_normal;
												}
												return null();
											}
										};
										HX_STACK_LINE(1357)
										::nape::geom::Vec2 _this = _Function_7_1::Block(carb);		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1357)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(1357)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1357)
										{
											HX_STACK_LINE(1357)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1357)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(1357)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(1357)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1357)
							vy = (_Function_6_2::Block(carb) * (int)5);
							HX_STACK_LINE(1358)
							{
							}
							HX_STACK_LINE(1366)
							{
							}
						}
						HX_STACK_LINE(1375)
						if ((!(xnull))){
							HX_STACK_LINE(1376)
							Float t = ((xform->a * vx) + (xform->b * vy));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1377)
							vy = ((xform->c * vx) + (xform->d * vy));
							HX_STACK_LINE(1378)
							vx = t;
						}
						HX_STACK_LINE(1380)
						this->graphics->lineTo((px + vx),(py + vy));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_arbiter,(void))

Void ZPP_ShapeDebug_obj::draw_shape( ::zpp_nape::shape::ZPP_Shape shape,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_PUSH("ZPP_ShapeDebug::draw_shape","zpp_nape/util/Debug.hx",774);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_ARG(xform,"xform");
		HX_STACK_ARG(xdet,"xdet");
		HX_STACK_ARG(xnull,"xnull");
		struct _Function_1_1{
			inline static int Block( ::zpp_nape::util::ZPP_ShapeDebug_obj *__this,::zpp_nape::shape::ZPP_Shape &shape){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",775);
				{
					HX_STACK_LINE(776)
					int idc;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(777)
					if (((__this->outer->colour_dyn() == null()))){
						HX_STACK_LINE(777)
						idc = ::Std_obj::_int(((int)16777215 * ::Math_obj::exp((Float(-((hx::Mod(shape->id,(int)500)))) / Float((int)1500)))));
					}
					else{
						HX_STACK_LINE(778)
						idc = __this->outer->colour(shape->id);
					}
					HX_STACK_LINE(779)
					Float _r = (((int(((int(idc) & int((int)16711680)))) >> int((int)16))) * 0.7);		HX_STACK_VAR(_r,"_r");
					HX_STACK_LINE(780)
					Float _g = (((int(((int(idc) & int((int)65280)))) >> int((int)8))) * 0.7);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(781)
					Float _b = (((int(idc) & int((int)255))) * 0.7);		HX_STACK_VAR(_b,"_b");
					HX_STACK_LINE(782)
					{
					}
					HX_STACK_LINE(787)
					return (int((int((int((int)-16777216) | int((int(::Std_obj::_int(_r)) << int((int)16))))) | int((int(::Std_obj::_int(_g)) << int((int)8))))) | int(::Std_obj::_int(_b)));
				}
				return null();
			}
		};
		HX_STACK_LINE(775)
		int col = _Function_1_1::Block(this,shape);		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(789)
		::zpp_nape::phys::ZPP_Body body = shape->body;		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(790)
		if (((body != null()))){
			struct _Function_2_1{
				inline static int Block( ::zpp_nape::util::ZPP_ShapeDebug_obj *__this,::zpp_nape::phys::ZPP_Body &body){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",791);
					{
						HX_STACK_LINE(792)
						int idc;		HX_STACK_VAR(idc,"idc");
						HX_STACK_LINE(793)
						if (((__this->outer->colour_dyn() == null()))){
							HX_STACK_LINE(793)
							idc = ::Std_obj::_int(((int)16777215 * ::Math_obj::exp((Float(-((hx::Mod(body->id,(int)500)))) / Float((int)1500)))));
						}
						else{
							HX_STACK_LINE(794)
							idc = __this->outer->colour(body->id);
						}
						HX_STACK_LINE(795)
						Float _r = (((int(((int(idc) & int((int)16711680)))) >> int((int)16))) * 0.7);		HX_STACK_VAR(_r,"_r");
						HX_STACK_LINE(796)
						Float _g = (((int(((int(idc) & int((int)65280)))) >> int((int)8))) * 0.7);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(797)
						Float _b = (((int(idc) & int((int)255))) * 0.7);		HX_STACK_VAR(_b,"_b");
						struct _Function_3_1{
							inline static bool Block( ::zpp_nape::phys::ZPP_Body &body){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",798);
								{
									HX_STACK_LINE(798)
									::nape::phys::Body _this = body->outer;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(798)
									if (((_this->zpp_inner->space == null()))){
										HX_STACK_LINE(798)
										hx::Throw (HX_CSTRING("Error: isSleeping makes no sense if the object is not contained within a Space"));
									}
									HX_STACK_LINE(798)
									return _this->zpp_inner->component->sleeping;
								}
								return null();
							}
						};
						HX_STACK_LINE(798)
						if (((bool((body->space != null())) && bool(_Function_3_1::Block(body))))){
							HX_STACK_LINE(799)
							_r = ((0.4 * _r) + (0.6 * __this->bg_r));
							HX_STACK_LINE(800)
							_g = ((0.4 * _g) + (0.6 * __this->bg_g));
							HX_STACK_LINE(801)
							_b = ((0.4 * _b) + (0.6 * __this->bg_b));
						}
						HX_STACK_LINE(803)
						return (int((int((int((int)-16777216) | int((int(::Std_obj::_int(_r)) << int((int)16))))) | int((int(::Std_obj::_int(_g)) << int((int)8))))) | int(::Std_obj::_int(_b)));
					}
					return null();
				}
			};
			HX_STACK_LINE(791)
			int bcol = _Function_2_1::Block(this,body);		HX_STACK_VAR(bcol,"bcol");
			struct _Function_2_2{
				inline static int Block( int &col,int &bcol){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",805);
					{
						HX_STACK_LINE(806)
						int col1 = col;		HX_STACK_VAR(col1,"col1");
						HX_STACK_LINE(807)
						int ncol = bcol;		HX_STACK_VAR(ncol,"ncol");
						HX_STACK_LINE(808)
						Float f = 0.2;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(809)
						int _r = ::Std_obj::_int(((((int((int(col1) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
						HX_STACK_LINE(810)
						int _g = ::Std_obj::_int(((((int((int(col1) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(811)
						int _b = ::Std_obj::_int(((((int(col1) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
						HX_STACK_LINE(812)
						return (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
					}
					return null();
				}
			};
			HX_STACK_LINE(805)
			col = _Function_2_2::Block(col,bcol);
			HX_STACK_LINE(814)
			this->graphics->lineStyle(this->outer_zn->thickness,col,1.0,null(),null(),null(),null(),null());
			HX_STACK_LINE(815)
			if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(816)
				::zpp_nape::shape::ZPP_Circle circ = shape->circle;		HX_STACK_VAR(circ,"circ");
				HX_STACK_LINE(817)
				if ((circ->zip_worldCOM)){
					HX_STACK_LINE(817)
					if (((circ->body != null()))){
						HX_STACK_LINE(817)
						circ->zip_worldCOM = false;
						HX_STACK_LINE(817)
						if ((circ->zip_localCOM)){
							HX_STACK_LINE(817)
							circ->zip_localCOM = false;
							HX_STACK_LINE(817)
							if (((circ->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(817)
								::zpp_nape::shape::ZPP_Polygon _this = circ->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(817)
								if (((_this->lverts->next == null()))){
									HX_STACK_LINE(817)
									hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
								}
								HX_STACK_LINE(817)
								if (((_this->lverts->next->next == null()))){
									HX_STACK_LINE(817)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(817)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(817)
									{
									}
									HX_STACK_LINE(817)
									Dynamic();
								}
								else{
									HX_STACK_LINE(817)
									if (((_this->lverts->next->next->next == null()))){
										HX_STACK_LINE(817)
										{
											HX_STACK_LINE(817)
											_this->localCOMx = _this->lverts->next->x;
											HX_STACK_LINE(817)
											_this->localCOMy = _this->lverts->next->y;
											HX_STACK_LINE(817)
											{
											}
											HX_STACK_LINE(817)
											{
											}
										}
										HX_STACK_LINE(817)
										{
											HX_STACK_LINE(817)
											Float t = 1.0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(817)
											{
											}
											HX_STACK_LINE(817)
											hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
											HX_STACK_LINE(817)
											hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
										}
										HX_STACK_LINE(817)
										{
											HX_STACK_LINE(817)
											Float t = 0.5;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(817)
											{
											}
											HX_STACK_LINE(817)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(817)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(817)
										{
											HX_STACK_LINE(817)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(817)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(817)
											{
											}
											HX_STACK_LINE(817)
											{
											}
										}
										HX_STACK_LINE(817)
										Float area = 0.0;		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(817)
										{
											HX_STACK_LINE(817)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(817)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(817)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(817)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(817)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(817)
											while(((cx_ite != null()))){
												HX_STACK_LINE(817)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(817)
												{
													HX_STACK_LINE(817)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(817)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(817)
													hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(817)
													hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(817)
												u = v;
												HX_STACK_LINE(817)
												v = w;
												HX_STACK_LINE(817)
												cx_ite = cx_ite->next;
											}
											HX_STACK_LINE(817)
											cx_ite = _this->lverts->next;
											HX_STACK_LINE(817)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(817)
											{
												HX_STACK_LINE(817)
												hx::AddEq(area,(v->x * ((w->y - u->y))));
												HX_STACK_LINE(817)
												Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(817)
												hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
												HX_STACK_LINE(817)
												hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
											}
											HX_STACK_LINE(817)
											u = v;
											HX_STACK_LINE(817)
											v = w;
											HX_STACK_LINE(817)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(817)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(817)
											{
												HX_STACK_LINE(817)
												hx::AddEq(area,(v->x * ((w1->y - u->y))));
												HX_STACK_LINE(817)
												Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(817)
												hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
												HX_STACK_LINE(817)
												hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
											}
										}
										HX_STACK_LINE(817)
										area = (Float((int)1) / Float((((int)3 * area))));
										HX_STACK_LINE(817)
										{
											HX_STACK_LINE(817)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(817)
											{
											}
											HX_STACK_LINE(817)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(817)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
						}
						HX_STACK_LINE(817)
						{
							HX_STACK_LINE(817)
							::zpp_nape::phys::ZPP_Body _this = circ->body;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(817)
							if ((_this->zip_axis)){
								HX_STACK_LINE(817)
								_this->zip_axis = false;
								HX_STACK_LINE(817)
								{
									HX_STACK_LINE(817)
									_this->axisx = ::Math_obj::sin(_this->rot);
									HX_STACK_LINE(817)
									_this->axisy = ::Math_obj::cos(_this->rot);
									HX_STACK_LINE(817)
									{
									}
									HX_STACK_LINE(817)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(817)
						{
							HX_STACK_LINE(817)
							circ->worldCOMx = (circ->body->posx + (((circ->body->axisy * circ->localCOMx) - (circ->body->axisx * circ->localCOMy))));
							HX_STACK_LINE(817)
							circ->worldCOMy = (circ->body->posy + (((circ->localCOMx * circ->body->axisx) + (circ->localCOMy * circ->body->axisy))));
						}
					}
				}
				HX_STACK_LINE(818)
				Float vx = circ->worldCOMx;		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(819)
				Float vy = circ->worldCOMy;		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(820)
				if ((!(xnull))){
					HX_STACK_LINE(821)
					Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(822)
					vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
					HX_STACK_LINE(823)
					vx = t;
				}
				HX_STACK_LINE(825)
				this->graphics->drawCircle(vx,vy,(circ->radius * xdet));
				HX_STACK_LINE(826)
				if ((this->outer->drawShapeAngleIndicators)){
					HX_STACK_LINE(827)
					Float v0x = (circ->worldCOMx + ((0.3 * circ->radius) * body->axisy));		HX_STACK_VAR(v0x,"v0x");
					HX_STACK_LINE(828)
					Float v0y = (circ->worldCOMy + ((0.3 * circ->radius) * body->axisx));		HX_STACK_VAR(v0y,"v0y");
					HX_STACK_LINE(829)
					Float v1x = (circ->worldCOMx + (circ->radius * body->axisy));		HX_STACK_VAR(v1x,"v1x");
					HX_STACK_LINE(830)
					Float v1y = (circ->worldCOMy + (circ->radius * body->axisx));		HX_STACK_VAR(v1y,"v1y");
					HX_STACK_LINE(831)
					if ((!(xnull))){
						HX_STACK_LINE(832)
						Float t = (((xform->a * v0x) + (xform->b * v0y)) + xform->tx);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(833)
						v0y = (((xform->c * v0x) + (xform->d * v0y)) + xform->ty);
						HX_STACK_LINE(834)
						v0x = t;
					}
					HX_STACK_LINE(836)
					if ((!(xnull))){
						HX_STACK_LINE(837)
						Float t = (((xform->a * v1x) + (xform->b * v1y)) + xform->tx);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(838)
						v1y = (((xform->c * v1x) + (xform->d * v1y)) + xform->ty);
						HX_STACK_LINE(839)
						v1x = t;
					}
					HX_STACK_LINE(841)
					this->graphics->moveTo(v0x,v0y);
					HX_STACK_LINE(842)
					this->graphics->lineTo(v1x,v1y);
				}
			}
			else{
				HX_STACK_LINE(846)
				::zpp_nape::shape::ZPP_Polygon poly = shape->polygon;		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(847)
				if ((poly->zip_gverts)){
					HX_STACK_LINE(847)
					if (((poly->body != null()))){
						HX_STACK_LINE(847)
						poly->zip_gverts = false;
						HX_STACK_LINE(847)
						poly->validate_lverts();
						HX_STACK_LINE(847)
						{
							HX_STACK_LINE(847)
							::zpp_nape::phys::ZPP_Body _this = poly->body;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(847)
							if ((_this->zip_axis)){
								HX_STACK_LINE(847)
								_this->zip_axis = false;
								HX_STACK_LINE(847)
								{
									HX_STACK_LINE(847)
									_this->axisx = ::Math_obj::sin(_this->rot);
									HX_STACK_LINE(847)
									_this->axisy = ::Math_obj::cos(_this->rot);
									HX_STACK_LINE(847)
									{
									}
									HX_STACK_LINE(847)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(847)
						::zpp_nape::geom::ZPP_Vec2 li = poly->lverts->next;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(847)
						{
							HX_STACK_LINE(847)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = poly->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(847)
							while(((cx_ite != null()))){
								HX_STACK_LINE(847)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(847)
								{
									HX_STACK_LINE(847)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(847)
									li = li->next;
									HX_STACK_LINE(847)
									{
										HX_STACK_LINE(847)
										g->x = (poly->body->posx + (((poly->body->axisy * l->x) - (poly->body->axisx * l->y))));
										HX_STACK_LINE(847)
										g->y = (poly->body->posy + (((l->x * poly->body->axisx) + (l->y * poly->body->axisy))));
									}
								}
								HX_STACK_LINE(847)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(848)
				::zpp_nape::geom::ZPP_Vec2 u = poly->gverts->next;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(849)
				Float vx = u->x;		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(850)
				Float vy = u->y;		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(851)
				if ((!(xnull))){
					HX_STACK_LINE(852)
					Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(853)
					vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
					HX_STACK_LINE(854)
					vx = t;
				}
				HX_STACK_LINE(856)
				this->graphics->moveTo(vx,vy);
				HX_STACK_LINE(857)
				Float vox = vx;		HX_STACK_VAR(vox,"vox");
				HX_STACK_LINE(858)
				Float voy = vy;		HX_STACK_VAR(voy,"voy");
				HX_STACK_LINE(859)
				{
					HX_STACK_LINE(860)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = poly->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(861)
					while(((cx_ite != null()))){
						HX_STACK_LINE(862)
						::zpp_nape::geom::ZPP_Vec2 u1 = cx_ite;		HX_STACK_VAR(u1,"u1");
						HX_STACK_LINE(863)
						{
							HX_STACK_LINE(864)
							vx = u1->x;
							HX_STACK_LINE(865)
							vy = u1->y;
							HX_STACK_LINE(866)
							if ((!(xnull))){
								HX_STACK_LINE(867)
								Float t = (((xform->a * vx) + (xform->b * vy)) + xform->tx);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(868)
								vy = (((xform->c * vx) + (xform->d * vy)) + xform->ty);
								HX_STACK_LINE(869)
								vx = t;
							}
							HX_STACK_LINE(871)
							this->graphics->lineTo(vx,vy);
						}
						HX_STACK_LINE(873)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(876)
				this->graphics->lineTo(vox,voy);
				HX_STACK_LINE(877)
				if ((this->outer->drawShapeAngleIndicators)){
					HX_STACK_LINE(878)
					if ((poly->zip_worldCOM)){
						HX_STACK_LINE(878)
						if (((poly->body != null()))){
							HX_STACK_LINE(878)
							poly->zip_worldCOM = false;
							HX_STACK_LINE(878)
							if ((poly->zip_localCOM)){
								HX_STACK_LINE(878)
								poly->zip_localCOM = false;
								HX_STACK_LINE(878)
								if (((poly->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
									HX_STACK_LINE(878)
									::zpp_nape::shape::ZPP_Polygon _this = poly->polygon;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(878)
									if (((_this->lverts->next == null()))){
										HX_STACK_LINE(878)
										hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
									}
									HX_STACK_LINE(878)
									if (((_this->lverts->next->next == null()))){
										HX_STACK_LINE(878)
										_this->localCOMx = _this->lverts->next->x;
										HX_STACK_LINE(878)
										_this->localCOMy = _this->lverts->next->y;
										HX_STACK_LINE(878)
										{
										}
										HX_STACK_LINE(878)
										Dynamic();
									}
									else{
										HX_STACK_LINE(878)
										if (((_this->lverts->next->next->next == null()))){
											HX_STACK_LINE(878)
											{
												HX_STACK_LINE(878)
												_this->localCOMx = _this->lverts->next->x;
												HX_STACK_LINE(878)
												_this->localCOMy = _this->lverts->next->y;
												HX_STACK_LINE(878)
												{
												}
												HX_STACK_LINE(878)
												{
												}
											}
											HX_STACK_LINE(878)
											{
												HX_STACK_LINE(878)
												Float t = 1.0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(878)
												{
												}
												HX_STACK_LINE(878)
												hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
												HX_STACK_LINE(878)
												hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
											}
											HX_STACK_LINE(878)
											{
												HX_STACK_LINE(878)
												Float t = 0.5;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(878)
												{
												}
												HX_STACK_LINE(878)
												hx::MultEq(_this->localCOMx,t);
												HX_STACK_LINE(878)
												hx::MultEq(_this->localCOMy,t);
											}
										}
										else{
											HX_STACK_LINE(878)
											{
												HX_STACK_LINE(878)
												_this->localCOMx = (int)0;
												HX_STACK_LINE(878)
												_this->localCOMy = (int)0;
												HX_STACK_LINE(878)
												{
												}
												HX_STACK_LINE(878)
												{
												}
											}
											HX_STACK_LINE(878)
											Float area = 0.0;		HX_STACK_VAR(area,"area");
											HX_STACK_LINE(878)
											{
												HX_STACK_LINE(878)
												::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(878)
												::zpp_nape::geom::ZPP_Vec2 u1 = cx_ite;		HX_STACK_VAR(u1,"u1");
												HX_STACK_LINE(878)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(878)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(878)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(878)
												while(((cx_ite != null()))){
													HX_STACK_LINE(878)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(878)
													{
														HX_STACK_LINE(878)
														hx::AddEq(area,(v->x * ((w->y - u1->y))));
														HX_STACK_LINE(878)
														Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(878)
														hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
														HX_STACK_LINE(878)
														hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
													}
													HX_STACK_LINE(878)
													u1 = v;
													HX_STACK_LINE(878)
													v = w;
													HX_STACK_LINE(878)
													cx_ite = cx_ite->next;
												}
												HX_STACK_LINE(878)
												cx_ite = _this->lverts->next;
												HX_STACK_LINE(878)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(878)
												{
													HX_STACK_LINE(878)
													hx::AddEq(area,(v->x * ((w->y - u1->y))));
													HX_STACK_LINE(878)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(878)
													hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(878)
													hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(878)
												u1 = v;
												HX_STACK_LINE(878)
												v = w;
												HX_STACK_LINE(878)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(878)
												::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
												HX_STACK_LINE(878)
												{
													HX_STACK_LINE(878)
													hx::AddEq(area,(v->x * ((w1->y - u1->y))));
													HX_STACK_LINE(878)
													Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(878)
													hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
													HX_STACK_LINE(878)
													hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
												}
											}
											HX_STACK_LINE(878)
											area = (Float((int)1) / Float((((int)3 * area))));
											HX_STACK_LINE(878)
											{
												HX_STACK_LINE(878)
												Float t = area;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(878)
												{
												}
												HX_STACK_LINE(878)
												hx::MultEq(_this->localCOMx,t);
												HX_STACK_LINE(878)
												hx::MultEq(_this->localCOMy,t);
											}
										}
									}
								}
							}
							HX_STACK_LINE(878)
							{
								HX_STACK_LINE(878)
								::zpp_nape::phys::ZPP_Body _this = poly->body;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(878)
								if ((_this->zip_axis)){
									HX_STACK_LINE(878)
									_this->zip_axis = false;
									HX_STACK_LINE(878)
									{
										HX_STACK_LINE(878)
										_this->axisx = ::Math_obj::sin(_this->rot);
										HX_STACK_LINE(878)
										_this->axisy = ::Math_obj::cos(_this->rot);
										HX_STACK_LINE(878)
										{
										}
										HX_STACK_LINE(878)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(878)
							{
								HX_STACK_LINE(878)
								poly->worldCOMx = (poly->body->posx + (((poly->body->axisy * poly->localCOMx) - (poly->body->axisx * poly->localCOMy))));
								HX_STACK_LINE(878)
								poly->worldCOMy = (poly->body->posy + (((poly->localCOMx * poly->body->axisx) + (poly->localCOMy * poly->body->axisy))));
							}
						}
					}
					HX_STACK_LINE(879)
					if ((xnull)){
						HX_STACK_LINE(880)
						vx = poly->worldCOMx;
						HX_STACK_LINE(881)
						vy = poly->worldCOMy;
						HX_STACK_LINE(882)
						{
						}
						HX_STACK_LINE(890)
						{
						}
					}
					else{
						HX_STACK_LINE(900)
						vx = (((xform->a * poly->worldCOMx) + (xform->b * poly->worldCOMy)) + xform->tx);
						HX_STACK_LINE(901)
						vy = (((xform->c * poly->worldCOMx) + (xform->d * poly->worldCOMy)) + xform->ty);
					}
					HX_STACK_LINE(903)
					this->graphics->moveTo(vx,vy);
					HX_STACK_LINE(904)
					this->graphics->lineTo(vox,voy);
				}
			}
			HX_STACK_LINE(907)
			if ((this->outer->drawShapeDetail)){
				HX_STACK_LINE(908)
				if ((shape->zip_worldCOM)){
					HX_STACK_LINE(908)
					if (((shape->body != null()))){
						HX_STACK_LINE(908)
						shape->zip_worldCOM = false;
						HX_STACK_LINE(908)
						if ((shape->zip_localCOM)){
							HX_STACK_LINE(908)
							shape->zip_localCOM = false;
							HX_STACK_LINE(908)
							if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(908)
								::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(908)
								if (((_this->lverts->next == null()))){
									HX_STACK_LINE(908)
									hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
								}
								HX_STACK_LINE(908)
								if (((_this->lverts->next->next == null()))){
									HX_STACK_LINE(908)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(908)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(908)
									{
									}
									HX_STACK_LINE(908)
									Dynamic();
								}
								else{
									HX_STACK_LINE(908)
									if (((_this->lverts->next->next->next == null()))){
										HX_STACK_LINE(908)
										{
											HX_STACK_LINE(908)
											_this->localCOMx = _this->lverts->next->x;
											HX_STACK_LINE(908)
											_this->localCOMy = _this->lverts->next->y;
											HX_STACK_LINE(908)
											{
											}
											HX_STACK_LINE(908)
											{
											}
										}
										HX_STACK_LINE(908)
										{
											HX_STACK_LINE(908)
											Float t = 1.0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(908)
											{
											}
											HX_STACK_LINE(908)
											hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
											HX_STACK_LINE(908)
											hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
										}
										HX_STACK_LINE(908)
										{
											HX_STACK_LINE(908)
											Float t = 0.5;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(908)
											{
											}
											HX_STACK_LINE(908)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(908)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(908)
										{
											HX_STACK_LINE(908)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(908)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(908)
											{
											}
											HX_STACK_LINE(908)
											{
											}
										}
										HX_STACK_LINE(908)
										Float area = 0.0;		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(908)
										{
											HX_STACK_LINE(908)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(908)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(908)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(908)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(908)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(908)
											while(((cx_ite != null()))){
												HX_STACK_LINE(908)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(908)
												{
													HX_STACK_LINE(908)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(908)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(908)
													hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(908)
													hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(908)
												u = v;
												HX_STACK_LINE(908)
												v = w;
												HX_STACK_LINE(908)
												cx_ite = cx_ite->next;
											}
											HX_STACK_LINE(908)
											cx_ite = _this->lverts->next;
											HX_STACK_LINE(908)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(908)
											{
												HX_STACK_LINE(908)
												hx::AddEq(area,(v->x * ((w->y - u->y))));
												HX_STACK_LINE(908)
												Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(908)
												hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
												HX_STACK_LINE(908)
												hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
											}
											HX_STACK_LINE(908)
											u = v;
											HX_STACK_LINE(908)
											v = w;
											HX_STACK_LINE(908)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(908)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(908)
											{
												HX_STACK_LINE(908)
												hx::AddEq(area,(v->x * ((w1->y - u->y))));
												HX_STACK_LINE(908)
												Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(908)
												hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
												HX_STACK_LINE(908)
												hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
											}
										}
										HX_STACK_LINE(908)
										area = (Float((int)1) / Float((((int)3 * area))));
										HX_STACK_LINE(908)
										{
											HX_STACK_LINE(908)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(908)
											{
											}
											HX_STACK_LINE(908)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(908)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
						}
						HX_STACK_LINE(908)
						{
							HX_STACK_LINE(908)
							::zpp_nape::phys::ZPP_Body _this = shape->body;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(908)
							if ((_this->zip_axis)){
								HX_STACK_LINE(908)
								_this->zip_axis = false;
								HX_STACK_LINE(908)
								{
									HX_STACK_LINE(908)
									_this->axisx = ::Math_obj::sin(_this->rot);
									HX_STACK_LINE(908)
									_this->axisy = ::Math_obj::cos(_this->rot);
									HX_STACK_LINE(908)
									{
									}
									HX_STACK_LINE(908)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(908)
						{
							HX_STACK_LINE(908)
							shape->worldCOMx = (shape->body->posx + (((shape->body->axisy * shape->localCOMx) - (shape->body->axisx * shape->localCOMy))));
							HX_STACK_LINE(908)
							shape->worldCOMy = (shape->body->posy + (((shape->localCOMx * shape->body->axisx) + (shape->localCOMy * shape->body->axisy))));
						}
					}
				}
				struct _Function_3_1{
					inline static int Block( int &col){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",909);
						{
							HX_STACK_LINE(910)
							int col1 = col;		HX_STACK_VAR(col1,"col1");
							HX_STACK_LINE(911)
							int ncol = (int)16711680;		HX_STACK_VAR(ncol,"ncol");
							HX_STACK_LINE(912)
							Float f = 0.8;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(913)
							int _r = ::Std_obj::_int(((((int((int(col1) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
							HX_STACK_LINE(914)
							int _g = ::Std_obj::_int(((((int((int(col1) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(915)
							int _b = ::Std_obj::_int(((((int(col1) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
							HX_STACK_LINE(916)
							return (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
						}
						return null();
					}
				};
				HX_STACK_LINE(909)
				this->graphics->lineStyle(this->outer_zn->thickness,_Function_3_1::Block(col),(int)1,null(),null(),null(),null(),null());
				HX_STACK_LINE(919)
				Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
				HX_STACK_LINE(920)
				Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
				HX_STACK_LINE(921)
				if ((xnull)){
					HX_STACK_LINE(922)
					vx = shape->worldCOMx;
					HX_STACK_LINE(923)
					vy = shape->worldCOMy;
					HX_STACK_LINE(924)
					{
					}
					HX_STACK_LINE(932)
					{
					}
				}
				else{
					HX_STACK_LINE(942)
					vx = (((xform->a * shape->worldCOMx) + (xform->b * shape->worldCOMy)) + xform->tx);
					HX_STACK_LINE(943)
					vy = (((xform->c * shape->worldCOMx) + (xform->d * shape->worldCOMy)) + xform->ty);
				}
				HX_STACK_LINE(945)
				this->graphics->drawCircle(vx,vy,(int)1);
				HX_STACK_LINE(946)
				if ((shape->zip_aabb)){
					HX_STACK_LINE(946)
					if (((shape->body != null()))){
						HX_STACK_LINE(946)
						shape->zip_aabb = false;
						HX_STACK_LINE(946)
						if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
							HX_STACK_LINE(946)
							::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(946)
							if ((_this->zip_worldCOM)){
								HX_STACK_LINE(946)
								if (((_this->body != null()))){
									HX_STACK_LINE(946)
									_this->zip_worldCOM = false;
									HX_STACK_LINE(946)
									if ((_this->zip_localCOM)){
										HX_STACK_LINE(946)
										_this->zip_localCOM = false;
										HX_STACK_LINE(946)
										if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
											HX_STACK_LINE(946)
											::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(946)
											if (((_this1->lverts->next == null()))){
												HX_STACK_LINE(946)
												hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
											}
											HX_STACK_LINE(946)
											if (((_this1->lverts->next->next == null()))){
												HX_STACK_LINE(946)
												_this1->localCOMx = _this1->lverts->next->x;
												HX_STACK_LINE(946)
												_this1->localCOMy = _this1->lverts->next->y;
												HX_STACK_LINE(946)
												{
												}
												HX_STACK_LINE(946)
												Dynamic();
											}
											else{
												HX_STACK_LINE(946)
												if (((_this1->lverts->next->next->next == null()))){
													HX_STACK_LINE(946)
													{
														HX_STACK_LINE(946)
														_this1->localCOMx = _this1->lverts->next->x;
														HX_STACK_LINE(946)
														_this1->localCOMy = _this1->lverts->next->y;
														HX_STACK_LINE(946)
														{
														}
														HX_STACK_LINE(946)
														{
														}
													}
													HX_STACK_LINE(946)
													{
														HX_STACK_LINE(946)
														Float t = 1.0;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(946)
														{
														}
														HX_STACK_LINE(946)
														hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
														HX_STACK_LINE(946)
														hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
													}
													HX_STACK_LINE(946)
													{
														HX_STACK_LINE(946)
														Float t = 0.5;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(946)
														{
														}
														HX_STACK_LINE(946)
														hx::MultEq(_this1->localCOMx,t);
														HX_STACK_LINE(946)
														hx::MultEq(_this1->localCOMy,t);
													}
												}
												else{
													HX_STACK_LINE(946)
													{
														HX_STACK_LINE(946)
														_this1->localCOMx = (int)0;
														HX_STACK_LINE(946)
														_this1->localCOMy = (int)0;
														HX_STACK_LINE(946)
														{
														}
														HX_STACK_LINE(946)
														{
														}
													}
													HX_STACK_LINE(946)
													Float area = 0.0;		HX_STACK_VAR(area,"area");
													HX_STACK_LINE(946)
													{
														HX_STACK_LINE(946)
														::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(946)
														::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
														HX_STACK_LINE(946)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(946)
														::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(946)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(946)
														while(((cx_ite != null()))){
															HX_STACK_LINE(946)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(946)
															{
																HX_STACK_LINE(946)
																hx::AddEq(area,(v->x * ((w->y - u->y))));
																HX_STACK_LINE(946)
																Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(946)
																hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																HX_STACK_LINE(946)
																hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
															}
															HX_STACK_LINE(946)
															u = v;
															HX_STACK_LINE(946)
															v = w;
															HX_STACK_LINE(946)
															cx_ite = cx_ite->next;
														}
														HX_STACK_LINE(946)
														cx_ite = _this1->lverts->next;
														HX_STACK_LINE(946)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(946)
														{
															HX_STACK_LINE(946)
															hx::AddEq(area,(v->x * ((w->y - u->y))));
															HX_STACK_LINE(946)
															Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(946)
															hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
															HX_STACK_LINE(946)
															hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
														}
														HX_STACK_LINE(946)
														u = v;
														HX_STACK_LINE(946)
														v = w;
														HX_STACK_LINE(946)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(946)
														::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
														HX_STACK_LINE(946)
														{
															HX_STACK_LINE(946)
															hx::AddEq(area,(v->x * ((w1->y - u->y))));
															HX_STACK_LINE(946)
															Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(946)
															hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
															HX_STACK_LINE(946)
															hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
														}
													}
													HX_STACK_LINE(946)
													area = (Float((int)1) / Float((((int)3 * area))));
													HX_STACK_LINE(946)
													{
														HX_STACK_LINE(946)
														Float t = area;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(946)
														{
														}
														HX_STACK_LINE(946)
														hx::MultEq(_this1->localCOMx,t);
														HX_STACK_LINE(946)
														hx::MultEq(_this1->localCOMy,t);
													}
												}
											}
										}
									}
									HX_STACK_LINE(946)
									{
										HX_STACK_LINE(946)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(946)
										if ((_this1->zip_axis)){
											HX_STACK_LINE(946)
											_this1->zip_axis = false;
											HX_STACK_LINE(946)
											{
												HX_STACK_LINE(946)
												_this1->axisx = ::Math_obj::sin(_this1->rot);
												HX_STACK_LINE(946)
												_this1->axisy = ::Math_obj::cos(_this1->rot);
												HX_STACK_LINE(946)
												{
												}
												HX_STACK_LINE(946)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(946)
									{
										HX_STACK_LINE(946)
										_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
										HX_STACK_LINE(946)
										_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
									}
								}
							}
							HX_STACK_LINE(946)
							Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(946)
							Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(946)
							{
							}
							HX_STACK_LINE(946)
							{
							}
							HX_STACK_LINE(946)
							{
								HX_STACK_LINE(946)
								_this->aabb->minx = (_this->worldCOMx - rx);
								HX_STACK_LINE(946)
								_this->aabb->miny = (_this->worldCOMy - ry);
							}
							HX_STACK_LINE(946)
							{
								HX_STACK_LINE(946)
								_this->aabb->maxx = (_this->worldCOMx + rx);
								HX_STACK_LINE(946)
								_this->aabb->maxy = (_this->worldCOMy + ry);
							}
						}
						else{
							HX_STACK_LINE(946)
							::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(946)
							if ((_this->zip_gverts)){
								HX_STACK_LINE(946)
								if (((_this->body != null()))){
									HX_STACK_LINE(946)
									_this->zip_gverts = false;
									HX_STACK_LINE(946)
									_this->validate_lverts();
									HX_STACK_LINE(946)
									{
										HX_STACK_LINE(946)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(946)
										if ((_this1->zip_axis)){
											HX_STACK_LINE(946)
											_this1->zip_axis = false;
											HX_STACK_LINE(946)
											{
												HX_STACK_LINE(946)
												_this1->axisx = ::Math_obj::sin(_this1->rot);
												HX_STACK_LINE(946)
												_this1->axisy = ::Math_obj::cos(_this1->rot);
												HX_STACK_LINE(946)
												{
												}
												HX_STACK_LINE(946)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(946)
									::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(946)
									{
										HX_STACK_LINE(946)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(946)
										while(((cx_ite != null()))){
											HX_STACK_LINE(946)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(946)
											{
												HX_STACK_LINE(946)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(946)
												li = li->next;
												HX_STACK_LINE(946)
												{
													HX_STACK_LINE(946)
													g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
													HX_STACK_LINE(946)
													g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
												}
											}
											HX_STACK_LINE(946)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(946)
							if (((_this->lverts->next == null()))){
								HX_STACK_LINE(946)
								hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
							}
							HX_STACK_LINE(946)
							::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
							HX_STACK_LINE(946)
							{
								HX_STACK_LINE(946)
								_this->aabb->minx = p0->x;
								HX_STACK_LINE(946)
								_this->aabb->miny = p0->y;
								HX_STACK_LINE(946)
								{
								}
								HX_STACK_LINE(946)
								{
								}
							}
							HX_STACK_LINE(946)
							{
								HX_STACK_LINE(946)
								_this->aabb->maxx = p0->x;
								HX_STACK_LINE(946)
								_this->aabb->maxy = p0->y;
								HX_STACK_LINE(946)
								{
								}
								HX_STACK_LINE(946)
								{
								}
							}
							HX_STACK_LINE(946)
							{
								HX_STACK_LINE(946)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(946)
								while(((cx_ite != null()))){
									HX_STACK_LINE(946)
									::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(946)
									{
										HX_STACK_LINE(946)
										if (((p->x < _this->aabb->minx))){
											HX_STACK_LINE(946)
											_this->aabb->minx = p->x;
										}
										HX_STACK_LINE(946)
										if (((p->x > _this->aabb->maxx))){
											HX_STACK_LINE(946)
											_this->aabb->maxx = p->x;
										}
										HX_STACK_LINE(946)
										if (((p->y < _this->aabb->miny))){
											HX_STACK_LINE(946)
											_this->aabb->miny = p->y;
										}
										HX_STACK_LINE(946)
										if (((p->y > _this->aabb->maxy))){
											HX_STACK_LINE(946)
											_this->aabb->maxy = p->y;
										}
									}
									HX_STACK_LINE(946)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
				}
				HX_STACK_LINE(947)
				if ((xnull)){
					struct _Function_4_1{
						inline static Float Block( ::zpp_nape::shape::ZPP_Shape &shape){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",948);
							{
								HX_STACK_LINE(948)
								::zpp_nape::geom::ZPP_AABB _this = shape->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(948)
								return (_this->maxx - _this->minx);
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::zpp_nape::shape::ZPP_Shape &shape){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",948);
							{
								HX_STACK_LINE(948)
								::zpp_nape::geom::ZPP_AABB _this = shape->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(948)
								return (_this->maxy - _this->miny);
							}
							return null();
						}
					};
					HX_STACK_LINE(948)
					this->graphics->drawRect(shape->aabb->minx,shape->aabb->miny,_Function_4_1::Block(shape),_Function_4_2::Block(shape));
				}
				else{
					HX_STACK_LINE(950)
					Float ox = 0.0;		HX_STACK_VAR(ox,"ox");
					HX_STACK_LINE(951)
					Float oy = 0.0;		HX_STACK_VAR(oy,"oy");
					HX_STACK_LINE(972)
					{
						HX_STACK_LINE(973)
						ox = (((xform->a * shape->aabb->minx) + (xform->b * shape->aabb->miny)) + xform->tx);
						HX_STACK_LINE(974)
						oy = (((xform->c * shape->aabb->minx) + (xform->d * shape->aabb->miny)) + xform->ty);
					}
					struct _Function_4_1{
						inline static Float Block( ::zpp_nape::shape::ZPP_Shape &shape){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",976);
							{
								HX_STACK_LINE(976)
								::zpp_nape::geom::ZPP_AABB _this = shape->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(976)
								return (_this->maxx - _this->minx);
							}
							return null();
						}
					};
					HX_STACK_LINE(976)
					Float wx = _Function_4_1::Block(shape);		HX_STACK_VAR(wx,"wx");
					HX_STACK_LINE(977)
					Float wy = (int)0;		HX_STACK_VAR(wy,"wy");
					HX_STACK_LINE(978)
					{
					}
					HX_STACK_LINE(986)
					{
					}
					HX_STACK_LINE(994)
					{
						HX_STACK_LINE(995)
						Float t = ((xform->a * wx) + (xform->b * wy));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(996)
						wy = ((xform->c * wx) + (xform->d * wy));
						HX_STACK_LINE(997)
						wx = t;
					}
					HX_STACK_LINE(999)
					Float hx = (int)0;		HX_STACK_VAR(hx,"hx");
					struct _Function_4_2{
						inline static Float Block( ::zpp_nape::shape::ZPP_Shape &shape){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",1000);
							{
								HX_STACK_LINE(1000)
								::zpp_nape::geom::ZPP_AABB _this = shape->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1000)
								return (_this->maxy - _this->miny);
							}
							return null();
						}
					};
					HX_STACK_LINE(1000)
					Float hy = _Function_4_2::Block(shape);		HX_STACK_VAR(hy,"hy");
					HX_STACK_LINE(1001)
					{
					}
					HX_STACK_LINE(1009)
					{
					}
					HX_STACK_LINE(1017)
					{
						HX_STACK_LINE(1018)
						Float t = ((xform->a * hx) + (xform->b * hy));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1019)
						hy = ((xform->c * hx) + (xform->d * hy));
						HX_STACK_LINE(1020)
						hx = t;
					}
					HX_STACK_LINE(1022)
					this->graphics->moveTo(ox,oy);
					HX_STACK_LINE(1023)
					this->graphics->lineTo((ox + wx),(oy + wy));
					HX_STACK_LINE(1024)
					this->graphics->lineTo(((ox + wx) + hx),((oy + wy) + hy));
					HX_STACK_LINE(1025)
					this->graphics->lineTo((ox + hx),(oy + hy));
					HX_STACK_LINE(1026)
					this->graphics->lineTo(ox,oy);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_shape,(void))

Void ZPP_ShapeDebug_obj::draw_body( ::zpp_nape::phys::ZPP_Body body,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_PUSH("ZPP_ShapeDebug::draw_body","zpp_nape/util/Debug.hx",572);
		HX_STACK_THIS(this);
		HX_STACK_ARG(body,"body");
		HX_STACK_ARG(xform,"xform");
		HX_STACK_ARG(xdet,"xdet");
		HX_STACK_ARG(xnull,"xnull");
		HX_STACK_LINE(573)
		{
			HX_STACK_LINE(574)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = body->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(575)
			while(((cx_ite != null()))){
				HX_STACK_LINE(576)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(577)
				this->draw_shape(s,xform,xdet,xnull);
				HX_STACK_LINE(578)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(581)
		if ((this->outer->drawBodyDetail)){
			struct _Function_2_1{
				inline static int Block( ::zpp_nape::util::ZPP_ShapeDebug_obj *__this,::zpp_nape::phys::ZPP_Body &body){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",582);
					{
						HX_STACK_LINE(583)
						int idc;		HX_STACK_VAR(idc,"idc");
						HX_STACK_LINE(584)
						if (((__this->outer->colour_dyn() == null()))){
							HX_STACK_LINE(584)
							idc = ::Std_obj::_int(((int)16777215 * ::Math_obj::exp((Float(-((hx::Mod(body->id,(int)500)))) / Float((int)1500)))));
						}
						else{
							HX_STACK_LINE(585)
							idc = __this->outer->colour(body->id);
						}
						HX_STACK_LINE(586)
						Float _r = (((int(((int(idc) & int((int)16711680)))) >> int((int)16))) * 0.7);		HX_STACK_VAR(_r,"_r");
						HX_STACK_LINE(587)
						Float _g = (((int(((int(idc) & int((int)65280)))) >> int((int)8))) * 0.7);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(588)
						Float _b = (((int(idc) & int((int)255))) * 0.7);		HX_STACK_VAR(_b,"_b");
						struct _Function_3_1{
							inline static bool Block( ::zpp_nape::phys::ZPP_Body &body){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",589);
								{
									HX_STACK_LINE(589)
									::nape::phys::Body _this = body->outer;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(589)
									if (((_this->zpp_inner->space == null()))){
										HX_STACK_LINE(589)
										hx::Throw (HX_CSTRING("Error: isSleeping makes no sense if the object is not contained within a Space"));
									}
									HX_STACK_LINE(589)
									return _this->zpp_inner->component->sleeping;
								}
								return null();
							}
						};
						HX_STACK_LINE(589)
						if (((bool((body->space != null())) && bool(_Function_3_1::Block(body))))){
							HX_STACK_LINE(590)
							_r = ((0.4 * _r) + (0.6 * __this->bg_r));
							HX_STACK_LINE(591)
							_g = ((0.4 * _g) + (0.6 * __this->bg_g));
							HX_STACK_LINE(592)
							_b = ((0.4 * _b) + (0.6 * __this->bg_b));
						}
						HX_STACK_LINE(594)
						return (int((int((int((int)-16777216) | int((int(::Std_obj::_int(_r)) << int((int)16))))) | int((int(::Std_obj::_int(_g)) << int((int)8))))) | int(::Std_obj::_int(_b)));
					}
					return null();
				}
			};
			HX_STACK_LINE(582)
			int col = _Function_2_1::Block(this,body);		HX_STACK_VAR(col,"col");
			struct _Function_2_2{
				inline static int Block( int &col){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",596);
					{
						HX_STACK_LINE(597)
						int col1 = col;		HX_STACK_VAR(col1,"col1");
						HX_STACK_LINE(598)
						int ncol = (int)16711680;		HX_STACK_VAR(ncol,"ncol");
						HX_STACK_LINE(599)
						Float f = 0.8;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(600)
						int _r = ::Std_obj::_int(((((int((int(col1) >> int((int)16))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)16))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_r,"_r");
						HX_STACK_LINE(601)
						int _g = ::Std_obj::_int(((((int((int(col1) >> int((int)8))) & int((int)255))) * f) + (((int((int(ncol) >> int((int)8))) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(602)
						int _b = ::Std_obj::_int(((((int(col1) & int((int)255))) * f) + (((int(ncol) & int((int)255))) * (((int)1 - f)))));		HX_STACK_VAR(_b,"_b");
						HX_STACK_LINE(603)
						return (int((int((int((int)-16777216) | int((int(_r) << int((int)16))))) | int((int(_g) << int((int)8))))) | int(_b));
					}
					return null();
				}
			};
			HX_STACK_LINE(596)
			this->graphics->lineStyle(this->outer_zn->thickness,_Function_2_2::Block(col),(int)1,null(),null(),null(),null(),null());
			HX_STACK_LINE(606)
			Float px = 0.0;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(607)
			Float py = 0.0;		HX_STACK_VAR(py,"py");
			HX_STACK_LINE(608)
			Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
			HX_STACK_LINE(609)
			Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
			HX_STACK_LINE(610)
			if ((!(((body->shapes->head == null()))))){
				HX_STACK_LINE(611)
				body->validate_worldCOM();
				HX_STACK_LINE(612)
				if ((xnull)){
					HX_STACK_LINE(613)
					px = body->worldCOMx;
					HX_STACK_LINE(614)
					py = body->worldCOMy;
					HX_STACK_LINE(615)
					{
					}
					HX_STACK_LINE(623)
					{
					}
				}
				else{
					HX_STACK_LINE(633)
					px = (((xform->a * body->worldCOMx) + (xform->b * body->worldCOMy)) + xform->tx);
					HX_STACK_LINE(634)
					py = (((xform->c * body->worldCOMx) + (xform->d * body->worldCOMy)) + xform->ty);
				}
				HX_STACK_LINE(636)
				this->graphics->drawCircle(px,py,(int)1);
				HX_STACK_LINE(637)
				{
					HX_STACK_LINE(637)
					if (((body->shapes->head == null()))){
						HX_STACK_LINE(637)
						hx::Throw (HX_CSTRING("Error: Body bounds only makes sense if it contains shapes"));
					}
					HX_STACK_LINE(637)
					if ((body->zip_aabb)){
						HX_STACK_LINE(637)
						body->zip_aabb = false;
						HX_STACK_LINE(637)
						{
							HX_STACK_LINE(637)
							body->aabb->minx = ::Math_obj::POSITIVE_INFINITY;
							HX_STACK_LINE(637)
							body->aabb->miny = ::Math_obj::POSITIVE_INFINITY;
							HX_STACK_LINE(637)
							{
							}
							HX_STACK_LINE(637)
							{
							}
						}
						HX_STACK_LINE(637)
						{
							HX_STACK_LINE(637)
							body->aabb->maxx = ::Math_obj::NEGATIVE_INFINITY;
							HX_STACK_LINE(637)
							body->aabb->maxy = ::Math_obj::NEGATIVE_INFINITY;
							HX_STACK_LINE(637)
							{
							}
							HX_STACK_LINE(637)
							{
							}
						}
						HX_STACK_LINE(637)
						{
							HX_STACK_LINE(637)
							::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = body->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(637)
							while(((cx_ite != null()))){
								HX_STACK_LINE(637)
								::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(637)
								{
									HX_STACK_LINE(637)
									if ((s->zip_aabb)){
										HX_STACK_LINE(637)
										if (((s->body != null()))){
											HX_STACK_LINE(637)
											s->zip_aabb = false;
											HX_STACK_LINE(637)
											if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
												HX_STACK_LINE(637)
												::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(637)
												if ((_this->zip_worldCOM)){
													HX_STACK_LINE(637)
													if (((_this->body != null()))){
														HX_STACK_LINE(637)
														_this->zip_worldCOM = false;
														HX_STACK_LINE(637)
														if ((_this->zip_localCOM)){
															HX_STACK_LINE(637)
															_this->zip_localCOM = false;
															HX_STACK_LINE(637)
															if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
																HX_STACK_LINE(637)
																::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
																HX_STACK_LINE(637)
																if (((_this1->lverts->next == null()))){
																	HX_STACK_LINE(637)
																	hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
																}
																HX_STACK_LINE(637)
																if (((_this1->lverts->next->next == null()))){
																	HX_STACK_LINE(637)
																	_this1->localCOMx = _this1->lverts->next->x;
																	HX_STACK_LINE(637)
																	_this1->localCOMy = _this1->lverts->next->y;
																	HX_STACK_LINE(637)
																	{
																	}
																	HX_STACK_LINE(637)
																	Dynamic();
																}
																else{
																	HX_STACK_LINE(637)
																	if (((_this1->lverts->next->next->next == null()))){
																		HX_STACK_LINE(637)
																		{
																			HX_STACK_LINE(637)
																			_this1->localCOMx = _this1->lverts->next->x;
																			HX_STACK_LINE(637)
																			_this1->localCOMy = _this1->lverts->next->y;
																			HX_STACK_LINE(637)
																			{
																			}
																			HX_STACK_LINE(637)
																			{
																			}
																		}
																		HX_STACK_LINE(637)
																		{
																			HX_STACK_LINE(637)
																			Float t = 1.0;		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(637)
																			{
																			}
																			HX_STACK_LINE(637)
																			hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																			HX_STACK_LINE(637)
																			hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
																		}
																		HX_STACK_LINE(637)
																		{
																			HX_STACK_LINE(637)
																			Float t = 0.5;		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(637)
																			{
																			}
																			HX_STACK_LINE(637)
																			hx::MultEq(_this1->localCOMx,t);
																			HX_STACK_LINE(637)
																			hx::MultEq(_this1->localCOMy,t);
																		}
																	}
																	else{
																		HX_STACK_LINE(637)
																		{
																			HX_STACK_LINE(637)
																			_this1->localCOMx = (int)0;
																			HX_STACK_LINE(637)
																			_this1->localCOMy = (int)0;
																			HX_STACK_LINE(637)
																			{
																			}
																			HX_STACK_LINE(637)
																			{
																			}
																		}
																		HX_STACK_LINE(637)
																		Float area = 0.0;		HX_STACK_VAR(area,"area");
																		HX_STACK_LINE(637)
																		{
																			HX_STACK_LINE(637)
																			::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this1->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																			HX_STACK_LINE(637)
																			::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
																			HX_STACK_LINE(637)
																			cx_ite1 = cx_ite1->next;
																			HX_STACK_LINE(637)
																			::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																			HX_STACK_LINE(637)
																			cx_ite1 = cx_ite1->next;
																			HX_STACK_LINE(637)
																			while(((cx_ite1 != null()))){
																				HX_STACK_LINE(637)
																				::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																				HX_STACK_LINE(637)
																				{
																					HX_STACK_LINE(637)
																					hx::AddEq(area,(v->x * ((w->y - u->y))));
																					HX_STACK_LINE(637)
																					Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																					HX_STACK_LINE(637)
																					hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																					HX_STACK_LINE(637)
																					hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																				}
																				HX_STACK_LINE(637)
																				u = v;
																				HX_STACK_LINE(637)
																				v = w;
																				HX_STACK_LINE(637)
																				cx_ite1 = cx_ite1->next;
																			}
																			HX_STACK_LINE(637)
																			cx_ite1 = _this1->lverts->next;
																			HX_STACK_LINE(637)
																			::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																			HX_STACK_LINE(637)
																			{
																				HX_STACK_LINE(637)
																				hx::AddEq(area,(v->x * ((w->y - u->y))));
																				HX_STACK_LINE(637)
																				Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																				HX_STACK_LINE(637)
																				hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																				HX_STACK_LINE(637)
																				hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																			}
																			HX_STACK_LINE(637)
																			u = v;
																			HX_STACK_LINE(637)
																			v = w;
																			HX_STACK_LINE(637)
																			cx_ite1 = cx_ite1->next;
																			HX_STACK_LINE(637)
																			::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
																			HX_STACK_LINE(637)
																			{
																				HX_STACK_LINE(637)
																				hx::AddEq(area,(v->x * ((w1->y - u->y))));
																				HX_STACK_LINE(637)
																				Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																				HX_STACK_LINE(637)
																				hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																				HX_STACK_LINE(637)
																				hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																			}
																		}
																		HX_STACK_LINE(637)
																		area = (Float((int)1) / Float((((int)3 * area))));
																		HX_STACK_LINE(637)
																		{
																			HX_STACK_LINE(637)
																			Float t = area;		HX_STACK_VAR(t,"t");
																			HX_STACK_LINE(637)
																			{
																			}
																			HX_STACK_LINE(637)
																			hx::MultEq(_this1->localCOMx,t);
																			HX_STACK_LINE(637)
																			hx::MultEq(_this1->localCOMy,t);
																		}
																	}
																}
															}
														}
														HX_STACK_LINE(637)
														{
															HX_STACK_LINE(637)
															::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
															HX_STACK_LINE(637)
															if ((_this1->zip_axis)){
																HX_STACK_LINE(637)
																_this1->zip_axis = false;
																HX_STACK_LINE(637)
																{
																	HX_STACK_LINE(637)
																	_this1->axisx = ::Math_obj::sin(_this1->rot);
																	HX_STACK_LINE(637)
																	_this1->axisy = ::Math_obj::cos(_this1->rot);
																	HX_STACK_LINE(637)
																	{
																	}
																	HX_STACK_LINE(637)
																	Dynamic();
																}
															}
														}
														HX_STACK_LINE(637)
														{
															HX_STACK_LINE(637)
															_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
															HX_STACK_LINE(637)
															_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
														}
													}
												}
												HX_STACK_LINE(637)
												Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
												HX_STACK_LINE(637)
												Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
												HX_STACK_LINE(637)
												{
												}
												HX_STACK_LINE(637)
												{
												}
												HX_STACK_LINE(637)
												{
													HX_STACK_LINE(637)
													_this->aabb->minx = (_this->worldCOMx - rx);
													HX_STACK_LINE(637)
													_this->aabb->miny = (_this->worldCOMy - ry);
												}
												HX_STACK_LINE(637)
												{
													HX_STACK_LINE(637)
													_this->aabb->maxx = (_this->worldCOMx + rx);
													HX_STACK_LINE(637)
													_this->aabb->maxy = (_this->worldCOMy + ry);
												}
											}
											else{
												HX_STACK_LINE(637)
												::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(637)
												if ((_this->zip_gverts)){
													HX_STACK_LINE(637)
													if (((_this->body != null()))){
														HX_STACK_LINE(637)
														_this->zip_gverts = false;
														HX_STACK_LINE(637)
														_this->validate_lverts();
														HX_STACK_LINE(637)
														{
															HX_STACK_LINE(637)
															::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
															HX_STACK_LINE(637)
															if ((_this1->zip_axis)){
																HX_STACK_LINE(637)
																_this1->zip_axis = false;
																HX_STACK_LINE(637)
																{
																	HX_STACK_LINE(637)
																	_this1->axisx = ::Math_obj::sin(_this1->rot);
																	HX_STACK_LINE(637)
																	_this1->axisy = ::Math_obj::cos(_this1->rot);
																	HX_STACK_LINE(637)
																	{
																	}
																	HX_STACK_LINE(637)
																	Dynamic();
																}
															}
														}
														HX_STACK_LINE(637)
														::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
														HX_STACK_LINE(637)
														{
															HX_STACK_LINE(637)
															::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
															HX_STACK_LINE(637)
															while(((cx_ite1 != null()))){
																HX_STACK_LINE(637)
																::zpp_nape::geom::ZPP_Vec2 g = cx_ite1;		HX_STACK_VAR(g,"g");
																HX_STACK_LINE(637)
																{
																	HX_STACK_LINE(637)
																	::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
																	HX_STACK_LINE(637)
																	li = li->next;
																	HX_STACK_LINE(637)
																	{
																		HX_STACK_LINE(637)
																		g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
																		HX_STACK_LINE(637)
																		g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
																	}
																}
																HX_STACK_LINE(637)
																cx_ite1 = cx_ite1->next;
															}
														}
													}
												}
												HX_STACK_LINE(637)
												if (((_this->lverts->next == null()))){
													HX_STACK_LINE(637)
													hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
												}
												HX_STACK_LINE(637)
												::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
												HX_STACK_LINE(637)
												{
													HX_STACK_LINE(637)
													_this->aabb->minx = p0->x;
													HX_STACK_LINE(637)
													_this->aabb->miny = p0->y;
													HX_STACK_LINE(637)
													{
													}
													HX_STACK_LINE(637)
													{
													}
												}
												HX_STACK_LINE(637)
												{
													HX_STACK_LINE(637)
													_this->aabb->maxx = p0->x;
													HX_STACK_LINE(637)
													_this->aabb->maxy = p0->y;
													HX_STACK_LINE(637)
													{
													}
													HX_STACK_LINE(637)
													{
													}
												}
												HX_STACK_LINE(637)
												{
													HX_STACK_LINE(637)
													::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
													HX_STACK_LINE(637)
													while(((cx_ite1 != null()))){
														HX_STACK_LINE(637)
														::zpp_nape::geom::ZPP_Vec2 p = cx_ite1;		HX_STACK_VAR(p,"p");
														HX_STACK_LINE(637)
														{
															HX_STACK_LINE(637)
															if (((p->x < _this->aabb->minx))){
																HX_STACK_LINE(637)
																_this->aabb->minx = p->x;
															}
															HX_STACK_LINE(637)
															if (((p->x > _this->aabb->maxx))){
																HX_STACK_LINE(637)
																_this->aabb->maxx = p->x;
															}
															HX_STACK_LINE(637)
															if (((p->y < _this->aabb->miny))){
																HX_STACK_LINE(637)
																_this->aabb->miny = p->y;
															}
															HX_STACK_LINE(637)
															if (((p->y > _this->aabb->maxy))){
																HX_STACK_LINE(637)
																_this->aabb->maxy = p->y;
															}
														}
														HX_STACK_LINE(637)
														cx_ite1 = cx_ite1->next;
													}
												}
											}
										}
									}
									HX_STACK_LINE(637)
									{
										HX_STACK_LINE(637)
										::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
										::zpp_nape::geom::ZPP_AABB x = s->aabb;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(637)
										if (((x->minx < _this->minx))){
											HX_STACK_LINE(637)
											_this->minx = x->minx;
										}
										HX_STACK_LINE(637)
										if (((x->maxx > _this->maxx))){
											HX_STACK_LINE(637)
											_this->maxx = x->maxx;
										}
										HX_STACK_LINE(637)
										if (((x->miny < _this->miny))){
											HX_STACK_LINE(637)
											_this->miny = x->miny;
										}
										HX_STACK_LINE(637)
										if (((x->maxy > _this->maxy))){
											HX_STACK_LINE(637)
											_this->maxy = x->maxy;
										}
									}
								}
								HX_STACK_LINE(637)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(638)
				if ((xnull)){
					struct _Function_4_1{
						inline static Float Block( ::zpp_nape::phys::ZPP_Body &body){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",639);
							{
								HX_STACK_LINE(639)
								::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(639)
								return (_this->maxx - _this->minx);
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::zpp_nape::phys::ZPP_Body &body){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",639);
							{
								HX_STACK_LINE(639)
								::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(639)
								return (_this->maxy - _this->miny);
							}
							return null();
						}
					};
					HX_STACK_LINE(639)
					this->graphics->drawRect(body->aabb->minx,body->aabb->miny,_Function_4_1::Block(body),_Function_4_2::Block(body));
				}
				else{
					HX_STACK_LINE(641)
					Float ox = 0.0;		HX_STACK_VAR(ox,"ox");
					HX_STACK_LINE(642)
					Float oy = 0.0;		HX_STACK_VAR(oy,"oy");
					HX_STACK_LINE(663)
					{
						HX_STACK_LINE(664)
						ox = (((xform->a * body->aabb->minx) + (xform->b * body->aabb->miny)) + xform->tx);
						HX_STACK_LINE(665)
						oy = (((xform->c * body->aabb->minx) + (xform->d * body->aabb->miny)) + xform->ty);
					}
					struct _Function_4_1{
						inline static Float Block( ::zpp_nape::phys::ZPP_Body &body){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",667);
							{
								HX_STACK_LINE(667)
								::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(667)
								return (_this->maxx - _this->minx);
							}
							return null();
						}
					};
					HX_STACK_LINE(667)
					Float wx = _Function_4_1::Block(body);		HX_STACK_VAR(wx,"wx");
					HX_STACK_LINE(668)
					Float wy = (int)0;		HX_STACK_VAR(wy,"wy");
					HX_STACK_LINE(669)
					{
					}
					HX_STACK_LINE(677)
					{
					}
					HX_STACK_LINE(685)
					{
						HX_STACK_LINE(686)
						Float t = ((xform->a * wx) + (xform->b * wy));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(687)
						wy = ((xform->c * wx) + (xform->d * wy));
						HX_STACK_LINE(688)
						wx = t;
					}
					HX_STACK_LINE(690)
					Float hx = (int)0;		HX_STACK_VAR(hx,"hx");
					struct _Function_4_2{
						inline static Float Block( ::zpp_nape::phys::ZPP_Body &body){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",691);
							{
								HX_STACK_LINE(691)
								::zpp_nape::geom::ZPP_AABB _this = body->aabb;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(691)
								return (_this->maxy - _this->miny);
							}
							return null();
						}
					};
					HX_STACK_LINE(691)
					Float hy = _Function_4_2::Block(body);		HX_STACK_VAR(hy,"hy");
					HX_STACK_LINE(692)
					{
					}
					HX_STACK_LINE(700)
					{
					}
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(709)
						Float t = ((xform->a * hx) + (xform->b * hy));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(710)
						hy = ((xform->c * hx) + (xform->d * hy));
						HX_STACK_LINE(711)
						hx = t;
					}
					HX_STACK_LINE(713)
					this->graphics->moveTo(ox,oy);
					HX_STACK_LINE(714)
					this->graphics->lineTo((ox + wx),(oy + wy));
					HX_STACK_LINE(715)
					this->graphics->lineTo(((ox + wx) + hx),((oy + wy) + hy));
					HX_STACK_LINE(716)
					this->graphics->lineTo((ox + hx),(oy + hy));
					HX_STACK_LINE(717)
					this->graphics->lineTo(ox,oy);
				}
			}
			HX_STACK_LINE(721)
			if ((xnull)){
				HX_STACK_LINE(722)
				qx = body->pre_posx;
				HX_STACK_LINE(723)
				qy = body->pre_posy;
				HX_STACK_LINE(724)
				{
				}
				HX_STACK_LINE(732)
				{
				}
			}
			else{
				HX_STACK_LINE(742)
				qx = (((xform->a * body->pre_posx) + (xform->b * body->pre_posy)) + xform->tx);
				HX_STACK_LINE(743)
				qy = (((xform->c * body->pre_posx) + (xform->d * body->pre_posy)) + xform->ty);
			}
			HX_STACK_LINE(745)
			if ((xnull)){
				HX_STACK_LINE(746)
				px = body->posx;
				HX_STACK_LINE(747)
				py = body->posy;
				HX_STACK_LINE(748)
				{
				}
				HX_STACK_LINE(756)
				{
				}
			}
			else{
				HX_STACK_LINE(766)
				px = (((xform->a * body->posx) + (xform->b * body->posy)) + xform->tx);
				HX_STACK_LINE(767)
				py = (((xform->c * body->posx) + (xform->d * body->posy)) + xform->ty);
			}
			HX_STACK_LINE(769)
			this->graphics->moveTo(qx,qy);
			HX_STACK_LINE(770)
			this->graphics->lineTo(px,py);
			HX_STACK_LINE(771)
			this->graphics->drawCircle(px,py,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_body,(void))

Void ZPP_ShapeDebug_obj::draw_space( ::zpp_nape::space::ZPP_Space space,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_PUSH("ZPP_ShapeDebug::draw_space","zpp_nape/util/Debug.hx",473);
		HX_STACK_THIS(this);
		HX_STACK_ARG(space,"space");
		HX_STACK_ARG(xform,"xform");
		HX_STACK_ARG(xdet,"xdet");
		HX_STACK_ARG(xnull,"xnull");
		HX_STACK_LINE(474)
		if ((this->outer->cullingEnabled)){
			HX_STACK_LINE(474)
			if ((this->outer->drawBodies)){
				HX_STACK_LINE(475)
				if ((this->outer->drawBodyDetail)){
					HX_STACK_LINE(477)
					::nape::phys::BodyList bods = this->bodyList = space->bphase->bodiesInAABB(this->iport,false,false,null(),this->bodyList);		HX_STACK_VAR(bods,"bods");
					HX_STACK_LINE(478)
					while((!(((bods->zpp_inner->inner->head == null()))))){
						HX_STACK_LINE(479)
						::nape::phys::Body b = bods->shift();		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(480)
						if ((b->debugDraw)){
							HX_STACK_LINE(480)
							this->draw_body(b->zpp_inner,xform,xdet,xnull);
						}
					}
				}
				else{
					HX_STACK_LINE(484)
					::nape::shape::ShapeList shapes = this->shapeList = space->bphase->shapesInAABB(this->iport,false,false,null(),this->shapeList);		HX_STACK_VAR(shapes,"shapes");
					HX_STACK_LINE(485)
					while((!(((shapes->zpp_inner->inner->head == null()))))){
						HX_STACK_LINE(486)
						::nape::shape::Shape s = shapes->shift();		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(487)
						if ((((  (((s->zpp_inner->body != null()))) ? ::nape::phys::Body(s->zpp_inner->body->outer) : ::nape::phys::Body(null()) ))->debugDraw)){
							HX_STACK_LINE(487)
							this->draw_shape(s->zpp_inner,xform,xdet,xnull);
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(492)
			if ((this->outer->drawBodies)){
				HX_STACK_LINE(494)
				if (((this->compoundstack == null()))){
					HX_STACK_LINE(494)
					this->compoundstack = ::zpp_nape::util::ZNPList_ZPP_Compound_obj::__new();
				}
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(496)
					::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = space->bodies->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(497)
					while(((cx_ite != null()))){
						HX_STACK_LINE(498)
						::zpp_nape::phys::ZPP_Body b = cx_ite->elt;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(499)
						if ((b->outer->debugDraw)){
							HX_STACK_LINE(499)
							this->draw_body(b,xform,xdet,xnull);
						}
						HX_STACK_LINE(500)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(503)
				{
					HX_STACK_LINE(504)
					::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = space->compounds->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(505)
					while(((cx_ite != null()))){
						HX_STACK_LINE(506)
						::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(507)
						this->compoundstack->add(c);
						HX_STACK_LINE(508)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(511)
				while((!(((this->compoundstack->head == null()))))){
					HX_STACK_LINE(512)
					::zpp_nape::phys::ZPP_Compound x = this->compoundstack->pop_unsafe();		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(514)
						::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = x->bodies->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(515)
						while(((cx_ite != null()))){
							HX_STACK_LINE(516)
							::zpp_nape::phys::ZPP_Body b = cx_ite->elt;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(517)
							if ((b->outer->debugDraw)){
								HX_STACK_LINE(517)
								this->draw_body(b,xform,xdet,xnull);
							}
							HX_STACK_LINE(518)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(521)
					{
						HX_STACK_LINE(522)
						::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = x->compounds->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(523)
						while(((cx_ite != null()))){
							HX_STACK_LINE(524)
							::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(525)
							this->compoundstack->add(c);
							HX_STACK_LINE(526)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
		HX_STACK_LINE(532)
		if (((bool((bool(this->outer->drawCollisionArbiters) || bool(this->outer->drawFluidArbiters))) || bool(this->outer->drawSensorArbiters)))){
			struct _Function_2_1{
				inline static ::nape::dynamics::ArbiterList Block( ::zpp_nape::space::ZPP_Space &space){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",532);
					{
						HX_STACK_LINE(532)
						::nape::space::Space _this = space->outer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(532)
						if (((_this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(532)
							::zpp_nape::dynamics::ZPP_SpaceArbiterList ret = ::zpp_nape::dynamics::ZPP_SpaceArbiterList_obj::__new();		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(532)
							ret->space = _this->zpp_inner;
							HX_STACK_LINE(532)
							_this->zpp_inner->wrap_arbiters = ret;
						}
						HX_STACK_LINE(532)
						return _this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(532)
			for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(space))->iterator());  __it->hasNext(); ){
				::nape::dynamics::Arbiter arb = __it->next();
				this->draw_arbiter(arb->zpp_inner,xform,xdet,xnull);
			}
		}
		HX_STACK_LINE(533)
		if ((this->outer->drawConstraints)){
			HX_STACK_LINE(534)
			if (((this->compoundstack == null()))){
				HX_STACK_LINE(534)
				this->compoundstack = ::zpp_nape::util::ZNPList_ZPP_Compound_obj::__new();
			}
			HX_STACK_LINE(535)
			{
				HX_STACK_LINE(536)
				::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = space->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(537)
				while(((cx_ite != null()))){
					HX_STACK_LINE(538)
					::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(539)
					if (((bool(c->active) && bool(c->outer->debugDraw)))){
						HX_STACK_LINE(539)
						c->draw(this->outer);
					}
					HX_STACK_LINE(540)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(543)
			{
				HX_STACK_LINE(544)
				::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = space->compounds->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(545)
				while(((cx_ite != null()))){
					HX_STACK_LINE(546)
					::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(547)
					this->compoundstack->add(c);
					HX_STACK_LINE(548)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(551)
			while((!(((this->compoundstack->head == null()))))){
				HX_STACK_LINE(552)
				::zpp_nape::phys::ZPP_Compound x = this->compoundstack->pop_unsafe();		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(554)
					::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = x->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(555)
					while(((cx_ite != null()))){
						HX_STACK_LINE(556)
						::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(557)
						if (((bool(c->active) && bool(c->outer->debugDraw)))){
							HX_STACK_LINE(557)
							c->draw(this->outer);
						}
						HX_STACK_LINE(558)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(562)
					::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = x->compounds->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(563)
					while(((cx_ite != null()))){
						HX_STACK_LINE(564)
						::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(565)
						this->compoundstack->add(c);
						HX_STACK_LINE(566)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_space,(void))

Void ZPP_ShapeDebug_obj::draw_compound( ::zpp_nape::phys::ZPP_Compound compound,::zpp_nape::geom::ZPP_Mat23 xform,Float xdet,bool xnull){
{
		HX_STACK_PUSH("ZPP_ShapeDebug::draw_compound","zpp_nape/util/Debug.hx",445);
		HX_STACK_THIS(this);
		HX_STACK_ARG(compound,"compound");
		HX_STACK_ARG(xform,"xform");
		HX_STACK_ARG(xdet,"xdet");
		HX_STACK_ARG(xnull,"xnull");
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(447)
			::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = compound->compounds->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(448)
			while(((cx_ite != null()))){
				HX_STACK_LINE(449)
				::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(450)
				this->draw_compound(c,xform,xdet,xnull);
				HX_STACK_LINE(451)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(455)
			::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = compound->bodies->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(456)
			while(((cx_ite != null()))){
				HX_STACK_LINE(457)
				::zpp_nape::phys::ZPP_Body b = cx_ite->elt;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(458)
				if ((b->outer->debugDraw)){
					HX_STACK_LINE(458)
					this->draw_body(b,xform,xdet,xnull);
				}
				HX_STACK_LINE(459)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(463)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = compound->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(464)
			while(((cx_ite != null()))){
				HX_STACK_LINE(465)
				::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(466)
				if (((bool(c->active) && bool(c->outer->debugDraw)))){
					HX_STACK_LINE(466)
					c->draw(this->outer);
				}
				HX_STACK_LINE(467)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_ShapeDebug_obj,draw_compound,(void))

Void ZPP_ShapeDebug_obj::setbg( int bgColor){
{
		HX_STACK_PUSH("ZPP_ShapeDebug::setbg","zpp_nape/util/Debug.hx",441);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bgColor,"bgColor");
		HX_STACK_LINE(441)
		this->sup_setbg(bgColor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_ShapeDebug_obj,setbg,(void))


ZPP_ShapeDebug_obj::ZPP_ShapeDebug_obj()
{
}

void ZPP_ShapeDebug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_ShapeDebug);
	HX_MARK_MEMBER_NAME(bodyList,"bodyList");
	HX_MARK_MEMBER_NAME(shapeList,"shapeList");
	HX_MARK_MEMBER_NAME(compoundstack,"compoundstack");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_ShapeDebug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bodyList,"bodyList");
	HX_VISIT_MEMBER_NAME(shapeList,"shapeList");
	HX_VISIT_MEMBER_NAME(compoundstack,"compoundstack");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_ShapeDebug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"setbg") ) { return setbg_dyn(); }
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bodyList") ) { return bodyList; }
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"draw_body") ) { return draw_body_dyn(); }
		if (HX_FIELD_EQ(inName,"shapeList") ) { return shapeList; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"draw_shape") ) { return draw_shape_dyn(); }
		if (HX_FIELD_EQ(inName,"draw_space") ) { return draw_space_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"draw_arbiter") ) { return draw_arbiter_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"draw_compound") ) { return draw_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"compoundstack") ) { return compoundstack; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_ShapeDebug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::native::display::Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bodyList") ) { bodyList=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::native::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::util::ShapeDebug >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shapeList") ) { shapeList=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"compoundstack") ) { compoundstack=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Compound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_ShapeDebug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bodyList"));
	outFields->push(HX_CSTRING("shapeList"));
	outFields->push(HX_CSTRING("compoundstack"));
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("shape"));
	outFields->push(HX_CSTRING("outer_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw_arbiter"),
	HX_CSTRING("draw_shape"),
	HX_CSTRING("draw_body"),
	HX_CSTRING("draw_space"),
	HX_CSTRING("bodyList"),
	HX_CSTRING("shapeList"),
	HX_CSTRING("draw_compound"),
	HX_CSTRING("compoundstack"),
	HX_CSTRING("setbg"),
	HX_CSTRING("graphics"),
	HX_CSTRING("shape"),
	HX_CSTRING("outer_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_ShapeDebug_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_ShapeDebug_obj::__mClass,"__mClass");
};

Class ZPP_ShapeDebug_obj::__mClass;

void ZPP_ShapeDebug_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_ShapeDebug"), hx::TCanCast< ZPP_ShapeDebug_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_ShapeDebug_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
