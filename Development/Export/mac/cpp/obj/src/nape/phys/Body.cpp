#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
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
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
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
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_FluidProperties
#include <nape/phys/FluidProperties.h>
#endif
#ifndef INCLUDED_nape_phys_GravMassMode
#include <nape/phys/GravMassMode.h>
#endif
#ifndef INCLUDED_nape_phys_InertiaMode
#include <nape/phys/InertiaMode.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_MassMode
#include <nape/phys/MassMode.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
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
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <zpp_nape/util/ZPP_ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace phys{

Void Body_obj::__construct(::nape::phys::BodyType type,::nape::geom::Vec2 position)
{
HX_STACK_PUSH("Body::new","nape/phys/Body.hx",177);
{
	HX_STACK_LINE(189)
	this->debugDraw = true;
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(459)
	try{
		HX_STACK_LINE(459)
		super::__construct();
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(467)
	this->zpp_inner = ::zpp_nape::phys::ZPP_Body_obj::__new();
	HX_STACK_LINE(468)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(469)
	this->zpp_inner->outer_i = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(470)
	this->zpp_inner_i = this->zpp_inner;
	HX_STACK_LINE(471)
	if (((position != null()))){
		HX_STACK_LINE(472)
		if (((bool((position != null())) && bool(position->zpp_disp)))){
			HX_STACK_LINE(474)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(477)
		{
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",478);
					{
						HX_STACK_LINE(478)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(478)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(478)
						{
							HX_STACK_LINE(478)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(478)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(478)
								_this->_validate();
							}
						}
						HX_STACK_LINE(478)
						return position->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(478)
			this->zpp_inner->posx = _Function_3_1::Block(position);
			struct _Function_3_2{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",479);
					{
						HX_STACK_LINE(479)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(479)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(479)
						{
							HX_STACK_LINE(479)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(479)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(479)
								_this->_validate();
							}
						}
						HX_STACK_LINE(479)
						return position->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(479)
			this->zpp_inner->posy = _Function_3_2::Block(position);
			HX_STACK_LINE(488)
			{
			}
		}
	}
	else{
		HX_STACK_LINE(499)
		this->zpp_inner->posx = (int)0;
		HX_STACK_LINE(500)
		this->zpp_inner->posy = (int)0;
		HX_STACK_LINE(509)
		{
		}
	}
	HX_STACK_LINE(518)
	{
		struct _Function_2_1{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
				{
					HX_STACK_LINE(518)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(518)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
				}
				return null();
			}
		};
		HX_STACK_LINE(518)
		::nape::phys::BodyType type1 = (  (((type == null()))) ? ::nape::phys::BodyType(_Function_2_1::Block()) : ::nape::phys::BodyType(type) );		HX_STACK_VAR(type1,"type1");
		HX_STACK_LINE(518)
		{
			HX_STACK_LINE(518)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
			HX_STACK_LINE(518)
			if ((this->zpp_inner->world)){
				HX_STACK_LINE(518)
				hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
			}
			struct _Function_3_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
					{
						HX_STACK_LINE(518)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(518)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
					{
						HX_STACK_LINE(518)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(518)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_3_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
					{
						HX_STACK_LINE(518)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(518)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(518)
			if (((Array_obj< ::Dynamic >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(this->zpp_inner->type).StaticCast< ::nape::phys::BodyType >() != type1))){
				HX_STACK_LINE(518)
				if (((type1 == null()))){
					HX_STACK_LINE(518)
					hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
				}
				struct _Function_4_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
						{
							HX_STACK_LINE(518)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(518)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(518)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(518)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(518)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
						{
							HX_STACK_LINE(518)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(518)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(518)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(518)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(518)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(518)
				int ntype = (  (((type1 == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type1 == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
				HX_STACK_LINE(518)
				if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((this->zpp_inner->space != null()))))){
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						this->zpp_inner->velx = (int)0;
						HX_STACK_LINE(518)
						this->zpp_inner->vely = (int)0;
						HX_STACK_LINE(518)
						{
						}
					}
					HX_STACK_LINE(518)
					this->zpp_inner->angvel = (int)0;
				}
				HX_STACK_LINE(518)
				this->zpp_inner->invalidate_type();
				HX_STACK_LINE(518)
				if (((this->zpp_inner->space != null()))){
					HX_STACK_LINE(518)
					this->zpp_inner->space->transmitType(this->zpp_inner,ntype);
				}
				else{
					HX_STACK_LINE(518)
					this->zpp_inner->type = ntype;
				}
			}
		}
		struct _Function_2_2{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
				{
					HX_STACK_LINE(518)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(518)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
				{
					HX_STACK_LINE(518)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(518)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
				{
					HX_STACK_LINE(518)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(518)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
				}
				return null();
			}
		};
		HX_STACK_LINE(518)
		Array_obj< ::Dynamic >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(this->zpp_inner->type).StaticCast< ::nape::phys::BodyType >();
	}
	HX_STACK_LINE(519)
	if (((position != null()))){
		HX_STACK_LINE(519)
		if ((position->zpp_inner->weak)){
			HX_STACK_LINE(523)
			{
				HX_STACK_LINE(523)
				if (((bool((position != null())) && bool(position->zpp_disp)))){
					HX_STACK_LINE(523)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(523)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(523)
					if ((_this->_immutable)){
						HX_STACK_LINE(523)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(523)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(523)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(523)
				if ((position->zpp_inner->_inuse)){
					HX_STACK_LINE(523)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(523)
				::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(523)
				position->zpp_inner->outer = null();
				HX_STACK_LINE(523)
				position->zpp_inner = null();
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(523)
					::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(523)
					o->zpp_pool = null();
					HX_STACK_LINE(523)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(523)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(523)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(523)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(523)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(523)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(523)
					{
						HX_STACK_LINE(523)
						if (((o->outer != null()))){
							HX_STACK_LINE(523)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(523)
							o->outer = null();
						}
						HX_STACK_LINE(523)
						o->_isimmutable = null();
						HX_STACK_LINE(523)
						o->_validate = null();
						HX_STACK_LINE(523)
						o->_invalidate = null();
					}
					HX_STACK_LINE(523)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(523)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(524)
			true;
		}
		else{
			HX_STACK_LINE(526)
			false;
		}
	}
	HX_STACK_LINE(530)
	this->zpp_inner_i->insert_cbtype(::zpp_nape::callbacks::ZPP_CbType_obj::ANY_BODY->zpp_inner);
}
;
	return null();
}

Body_obj::~Body_obj() { }

Dynamic Body_obj::__CreateEmpty() { return  new Body_obj; }
hx::ObjectPtr< Body_obj > Body_obj::__new(::nape::phys::BodyType type,::nape::geom::Vec2 position)
{  hx::ObjectPtr< Body_obj > result = new Body_obj();
	result->__construct(type,position);
	return result;}

Dynamic Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Body_obj > result = new Body_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Body_obj::toString( ){
	HX_STACK_PUSH("Body::toString","nape/phys/Body.hx",2537);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2537)
	return ((((  ((this->zpp_inner->world)) ? ::String(HX_CSTRING("(space::world")) : ::String((HX_CSTRING("(") + ((  (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))) ? ::String(HX_CSTRING("dynamic")) : ::String((  (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))) ? ::String(HX_CSTRING("static")) : ::String(HX_CSTRING("kinematic")) )) )))) )) + HX_CSTRING(")#")) + this->zpp_inner_i->id);
}


bool Body_obj::contains( ::nape::geom::Vec2 point){
	HX_STACK_PUSH("Body::contains","nape/phys/Body.hx",2492);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(2493)
	if (((bool((point != null())) && bool(point->zpp_disp)))){
		HX_STACK_LINE(2495)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(2499)
	if (((point == null()))){
		HX_STACK_LINE(2499)
		hx::Throw (HX_CSTRING("Error: Cannot check containment of null point"));
	}
	HX_STACK_LINE(2501)
	bool wasWeak = point->zpp_inner->weak;		HX_STACK_VAR(wasWeak,"wasWeak");
	HX_STACK_LINE(2502)
	point->zpp_inner->weak = false;
	HX_STACK_LINE(2503)
	bool retvar;		HX_STACK_VAR(retvar,"retvar");
	HX_STACK_LINE(2504)
	{
		HX_STACK_LINE(2505)
		retvar = false;
		HX_STACK_LINE(2506)
		{
			HX_STACK_LINE(2507)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2508)
			while(((cx_ite != null()))){
				HX_STACK_LINE(2509)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(2510)
				if ((s->outer->contains(point))){
					HX_STACK_LINE(2512)
					retvar = true;
					HX_STACK_LINE(2513)
					break;
				}
				HX_STACK_LINE(2516)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(2520)
	point->zpp_inner->weak = wasWeak;
	HX_STACK_LINE(2521)
	if ((point->zpp_inner->weak)){
		HX_STACK_LINE(2525)
		{
			HX_STACK_LINE(2525)
			if (((bool((point != null())) && bool(point->zpp_disp)))){
				HX_STACK_LINE(2525)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(2525)
			{
				HX_STACK_LINE(2525)
				::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2525)
				if ((_this->_immutable)){
					HX_STACK_LINE(2525)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(2525)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(2525)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(2525)
			if ((point->zpp_inner->_inuse)){
				HX_STACK_LINE(2525)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(2525)
			::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(2525)
			point->zpp_inner->outer = null();
			HX_STACK_LINE(2525)
			point->zpp_inner = null();
			HX_STACK_LINE(2525)
			{
				HX_STACK_LINE(2525)
				::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2525)
				o->zpp_pool = null();
				HX_STACK_LINE(2525)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(2525)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(2525)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(2525)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(2525)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(2525)
			{
				HX_STACK_LINE(2525)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2525)
				{
					HX_STACK_LINE(2525)
					if (((o->outer != null()))){
						HX_STACK_LINE(2525)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(2525)
						o->outer = null();
					}
					HX_STACK_LINE(2525)
					o->_isimmutable = null();
					HX_STACK_LINE(2525)
					o->_validate = null();
					HX_STACK_LINE(2525)
					o->_invalidate = null();
				}
				HX_STACK_LINE(2525)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(2525)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(2526)
		true;
	}
	else{
		HX_STACK_LINE(2528)
		false;
	}
	HX_STACK_LINE(2532)
	return retvar;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,contains,return )

::nape::geom::Vec3 Body_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("Body::totalImpulse","nape/phys/Body.hx",2407);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(2408)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(2409)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(2426)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(2427)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
		struct _Function_1_1{
			inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2428);
				{
					HX_STACK_LINE(2428)
					if (((__this->zpp_inner->wrap_arbiters == null()))){
						HX_STACK_LINE(2428)
						__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
					}
					HX_STACK_LINE(2428)
					return __this->zpp_inner->wrap_arbiters;
				}
				return null();
			}
		};
		HX_STACK_LINE(2428)
		for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_1_1::Block(this))->iterator());  __it->hasNext(); ){
			::nape::dynamics::Arbiter oarb = __it->next();
			{
				HX_STACK_LINE(2429)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2430)
				if (((arb->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR))){
					HX_STACK_LINE(2430)
					continue;
				}
				HX_STACK_LINE(2431)
				if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
					HX_STACK_LINE(2431)
					continue;
				}
				HX_STACK_LINE(2432)
				::nape::geom::Vec3 imp = arb->wrapper()->totalImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(2433)
				{
					HX_STACK_LINE(2434)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2435)
					{
						HX_STACK_LINE(2436)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2445);
								{
									HX_STACK_LINE(2445)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2445)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2445)
									{
										HX_STACK_LINE(2445)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2445)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(2445)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2445)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(2445)
						hx::AddEq(retx,(_Function_4_1::Block(imp) * t1));
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2446);
								{
									HX_STACK_LINE(2446)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2446)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2446)
									{
										HX_STACK_LINE(2446)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2446)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(2446)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2446)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(2446)
						hx::AddEq(rety,(_Function_4_2::Block(imp) * t1));
					}
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2448);
							{
								HX_STACK_LINE(2448)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(2448)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(2448)
								{
									HX_STACK_LINE(2448)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2448)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2448)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2448)
								return imp->zpp_inner->z;
							}
							return null();
						}
					};
					HX_STACK_LINE(2448)
					hx::AddEq(retz,(_Function_3_1::Block(imp) * t));
				}
				HX_STACK_LINE(2450)
				imp->dispose();
			}
;
		}
		HX_STACK_LINE(2452)
		{
			HX_STACK_LINE(2453)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = this->zpp_inner->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2454)
			while(((cx_ite != null()))){
				HX_STACK_LINE(2455)
				::zpp_nape::constraint::ZPP_Constraint con = cx_ite->elt;		HX_STACK_VAR(con,"con");
				HX_STACK_LINE(2456)
				if ((con->active)){
					HX_STACK_LINE(2458)
					::nape::geom::Vec3 imp = con->outer->bodyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2459)
					{
						HX_STACK_LINE(2460)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2461)
						{
							HX_STACK_LINE(2462)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2471);
									{
										HX_STACK_LINE(2471)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2471)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2471)
										{
											HX_STACK_LINE(2471)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2471)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(2471)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2471)
										return imp->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(2471)
							hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
							struct _Function_6_2{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2472);
									{
										HX_STACK_LINE(2472)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2472)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2472)
										{
											HX_STACK_LINE(2472)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2472)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(2472)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2472)
										return imp->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(2472)
							hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2474);
								{
									HX_STACK_LINE(2474)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2474)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2474)
									{
										HX_STACK_LINE(2474)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2474)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(2474)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2474)
									return imp->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(2474)
						hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
					}
					HX_STACK_LINE(2476)
					imp->dispose();
				}
				HX_STACK_LINE(2479)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(2482)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,totalImpulse,return )

::nape::geom::Vec3 Body_obj::constraintsImpulse( ){
	HX_STACK_PUSH("Body::constraintsImpulse","nape/phys/Body.hx",2341);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2342)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2343)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2360)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2361)
	{
		HX_STACK_LINE(2362)
		::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = this->zpp_inner->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(2363)
		while(((cx_ite != null()))){
			HX_STACK_LINE(2364)
			::zpp_nape::constraint::ZPP_Constraint con = cx_ite->elt;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(2365)
			{
				HX_STACK_LINE(2366)
				::nape::geom::Vec3 imp = con->outer->bodyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(2367)
				{
					HX_STACK_LINE(2368)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2369)
					{
						HX_STACK_LINE(2370)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2379);
								{
									HX_STACK_LINE(2379)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2379)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2379)
									{
										HX_STACK_LINE(2379)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2379)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(2379)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2379)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(2379)
						hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
						struct _Function_6_2{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2380);
								{
									HX_STACK_LINE(2380)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2380)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2380)
									{
										HX_STACK_LINE(2380)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2380)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(2380)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2380)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(2380)
						hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
					}
					struct _Function_5_1{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2382);
							{
								HX_STACK_LINE(2382)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(2382)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(2382)
								{
									HX_STACK_LINE(2382)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2382)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(2382)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2382)
								return imp->zpp_inner->z;
							}
							return null();
						}
					};
					HX_STACK_LINE(2382)
					hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
				}
				HX_STACK_LINE(2384)
				imp->dispose();
			}
			HX_STACK_LINE(2386)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(2389)
	return ::nape::geom::Vec3_obj::get(retx,rety,retz);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,constraintsImpulse,return )

::nape::geom::Vec3 Body_obj::totalFluidImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("Body::totalFluidImpulse","nape/phys/Body.hx",2284);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(2285)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2286)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2303)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2304)
	{
		HX_STACK_LINE(2305)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
		struct _Function_2_1{
			inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2306);
				{
					HX_STACK_LINE(2306)
					if (((__this->zpp_inner->wrap_arbiters == null()))){
						HX_STACK_LINE(2306)
						__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
					}
					HX_STACK_LINE(2306)
					return __this->zpp_inner->wrap_arbiters;
				}
				return null();
			}
		};
		HX_STACK_LINE(2306)
		for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
			::nape::dynamics::Arbiter oarb = __it->next();
			{
				HX_STACK_LINE(2307)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2308)
				if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
					HX_STACK_LINE(2308)
					continue;
				}
				HX_STACK_LINE(2309)
				if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
					HX_STACK_LINE(2309)
					continue;
				}
				HX_STACK_LINE(2310)
				{
					struct _Function_4_1{
						inline static ::nape::dynamics::FluidArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2311);
							{
								HX_STACK_LINE(2311)
								::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2311)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))) ? ::nape::dynamics::FluidArbiter(_this->zpp_inner->fluidarb->outer_zn) : ::nape::dynamics::FluidArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2311)
					::nape::geom::Vec3 imp = (_Function_4_1::Block(arb))->totalImpulse(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2312)
					{
						HX_STACK_LINE(2313)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2314)
						{
							HX_STACK_LINE(2315)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2324);
									{
										HX_STACK_LINE(2324)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2324)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2324)
										{
											HX_STACK_LINE(2324)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2324)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(2324)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2324)
										return imp->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(2324)
							hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
							struct _Function_6_2{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2325);
									{
										HX_STACK_LINE(2325)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2325)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2325)
										{
											HX_STACK_LINE(2325)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2325)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(2325)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2325)
										return imp->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(2325)
							hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2327);
								{
									HX_STACK_LINE(2327)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2327)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2327)
									{
										HX_STACK_LINE(2327)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2327)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(2327)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2327)
									return imp->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(2327)
						hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
					}
					HX_STACK_LINE(2329)
					imp->dispose();
				}
			}
;
		}
	}
	HX_STACK_LINE(2333)
	return ::nape::geom::Vec3_obj::get(retx,rety,retz);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,totalFluidImpulse,return )

::nape::geom::Vec3 Body_obj::dragImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("Body::dragImpulse","nape/phys/Body.hx",2222);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(2223)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2224)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2241)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2242)
	{
		HX_STACK_LINE(2243)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
		struct _Function_2_1{
			inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2244);
				{
					HX_STACK_LINE(2244)
					if (((__this->zpp_inner->wrap_arbiters == null()))){
						HX_STACK_LINE(2244)
						__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
					}
					HX_STACK_LINE(2244)
					return __this->zpp_inner->wrap_arbiters;
				}
				return null();
			}
		};
		HX_STACK_LINE(2244)
		for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
			::nape::dynamics::Arbiter oarb = __it->next();
			{
				HX_STACK_LINE(2245)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2246)
				if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
					HX_STACK_LINE(2246)
					continue;
				}
				HX_STACK_LINE(2247)
				if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
					HX_STACK_LINE(2247)
					continue;
				}
				HX_STACK_LINE(2248)
				{
					struct _Function_4_1{
						inline static ::nape::dynamics::FluidArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2249);
							{
								HX_STACK_LINE(2249)
								::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2249)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))) ? ::nape::dynamics::FluidArbiter(_this->zpp_inner->fluidarb->outer_zn) : ::nape::dynamics::FluidArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2249)
					::nape::geom::Vec3 imp = (_Function_4_1::Block(arb))->dragImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2250)
					{
						HX_STACK_LINE(2251)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2252)
						{
							HX_STACK_LINE(2253)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2262);
									{
										HX_STACK_LINE(2262)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2262)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2262)
										{
											HX_STACK_LINE(2262)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2262)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(2262)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2262)
										return imp->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(2262)
							hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
							struct _Function_6_2{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2263);
									{
										HX_STACK_LINE(2263)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2263)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2263)
										{
											HX_STACK_LINE(2263)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2263)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(2263)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2263)
										return imp->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(2263)
							hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2265);
								{
									HX_STACK_LINE(2265)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2265)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2265)
									{
										HX_STACK_LINE(2265)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2265)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(2265)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2265)
									return imp->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(2265)
						hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
					}
					HX_STACK_LINE(2267)
					imp->dispose();
				}
			}
;
		}
	}
	HX_STACK_LINE(2271)
	return ::nape::geom::Vec3_obj::get(retx,rety,retz);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,dragImpulse,return )

::nape::geom::Vec3 Body_obj::buoyancyImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("Body::buoyancyImpulse","nape/phys/Body.hx",2160);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(2161)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2162)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2179)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2180)
	{
		HX_STACK_LINE(2181)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
		struct _Function_2_1{
			inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2182);
				{
					HX_STACK_LINE(2182)
					if (((__this->zpp_inner->wrap_arbiters == null()))){
						HX_STACK_LINE(2182)
						__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
					}
					HX_STACK_LINE(2182)
					return __this->zpp_inner->wrap_arbiters;
				}
				return null();
			}
		};
		HX_STACK_LINE(2182)
		for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
			::nape::dynamics::Arbiter oarb = __it->next();
			{
				HX_STACK_LINE(2183)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2184)
				if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
					HX_STACK_LINE(2184)
					continue;
				}
				HX_STACK_LINE(2185)
				if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
					HX_STACK_LINE(2185)
					continue;
				}
				HX_STACK_LINE(2186)
				{
					struct _Function_4_1{
						inline static ::nape::dynamics::FluidArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2187);
							{
								HX_STACK_LINE(2187)
								::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2187)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))) ? ::nape::dynamics::FluidArbiter(_this->zpp_inner->fluidarb->outer_zn) : ::nape::dynamics::FluidArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2187)
					::nape::geom::Vec3 imp = (_Function_4_1::Block(arb))->buoyancyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2188)
					{
						HX_STACK_LINE(2189)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2190)
						{
							HX_STACK_LINE(2191)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2200);
									{
										HX_STACK_LINE(2200)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2200)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2200)
										{
											HX_STACK_LINE(2200)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2200)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(2200)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2200)
										return imp->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(2200)
							hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
							struct _Function_6_2{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2201);
									{
										HX_STACK_LINE(2201)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2201)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2201)
										{
											HX_STACK_LINE(2201)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2201)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(2201)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2201)
										return imp->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(2201)
							hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2203);
								{
									HX_STACK_LINE(2203)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2203)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2203)
									{
										HX_STACK_LINE(2203)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2203)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(2203)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2203)
									return imp->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(2203)
						hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
					}
					HX_STACK_LINE(2205)
					imp->dispose();
				}
			}
;
		}
	}
	HX_STACK_LINE(2209)
	return ::nape::geom::Vec3_obj::get(retx,rety,retz);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,buoyancyImpulse,return )

Float Body_obj::rollingImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("Body::rollingImpulse","nape/phys/Body.hx",2134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(2135)
		Float ret = 0.0;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2136)
		{
			HX_STACK_LINE(2137)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
			struct _Function_2_1{
				inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2138);
					{
						HX_STACK_LINE(2138)
						if (((__this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(2138)
							__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
						}
						HX_STACK_LINE(2138)
						return __this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(2138)
			for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
				::nape::dynamics::Arbiter oarb = __it->next();
				{
					HX_STACK_LINE(2139)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(2140)
					if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
						HX_STACK_LINE(2140)
						continue;
					}
					HX_STACK_LINE(2141)
					if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
						HX_STACK_LINE(2141)
						continue;
					}
					struct _Function_3_1{
						inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2143);
							{
								HX_STACK_LINE(2143)
								::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2143)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2142)
					hx::AddEq(ret,(_Function_3_1::Block(arb))->rollingImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly));
				}
;
			}
		}
		HX_STACK_LINE(2147)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,rollingImpulse,return )

::nape::geom::Vec3 Body_obj::totalContactsImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("Body::totalContactsImpulse","nape/phys/Body.hx",2070);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(2071)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(2072)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(2089)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(2090)
		{
			HX_STACK_LINE(2091)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
			struct _Function_2_1{
				inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2092);
					{
						HX_STACK_LINE(2092)
						if (((__this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(2092)
							__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
						}
						HX_STACK_LINE(2092)
						return __this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(2092)
			for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
				::nape::dynamics::Arbiter oarb = __it->next();
				{
					HX_STACK_LINE(2093)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(2094)
					if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
						HX_STACK_LINE(2094)
						continue;
					}
					HX_STACK_LINE(2095)
					if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
						HX_STACK_LINE(2095)
						continue;
					}
					HX_STACK_LINE(2096)
					{
						struct _Function_4_1{
							inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2097);
								{
									HX_STACK_LINE(2097)
									::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2097)
									return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2097)
						::nape::geom::Vec3 imp = (_Function_4_1::Block(arb))->totalImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(2098)
						{
							HX_STACK_LINE(2099)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2100)
							{
								HX_STACK_LINE(2101)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								struct _Function_6_1{
									inline static Float Block( ::nape::geom::Vec3 &imp){
										HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2110);
										{
											HX_STACK_LINE(2110)
											if (((bool((imp != null())) && bool(imp->zpp_disp)))){
												HX_STACK_LINE(2110)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(2110)
											{
												HX_STACK_LINE(2110)
												::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(2110)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(2110)
													_this->_validate();
												}
											}
											HX_STACK_LINE(2110)
											return imp->zpp_inner->x;
										}
										return null();
									}
								};
								HX_STACK_LINE(2110)
								hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
								struct _Function_6_2{
									inline static Float Block( ::nape::geom::Vec3 &imp){
										HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2111);
										{
											HX_STACK_LINE(2111)
											if (((bool((imp != null())) && bool(imp->zpp_disp)))){
												HX_STACK_LINE(2111)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(2111)
											{
												HX_STACK_LINE(2111)
												::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(2111)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(2111)
													_this->_validate();
												}
											}
											HX_STACK_LINE(2111)
											return imp->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(2111)
								hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
							}
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2113);
									{
										HX_STACK_LINE(2113)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2113)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2113)
										{
											HX_STACK_LINE(2113)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2113)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(2113)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2113)
										return imp->zpp_inner->z;
									}
									return null();
								}
							};
							HX_STACK_LINE(2113)
							hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
						}
						HX_STACK_LINE(2115)
						imp->dispose();
					}
				}
;
			}
		}
		HX_STACK_LINE(2119)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,totalContactsImpulse,return )

::nape::geom::Vec3 Body_obj::tangentImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("Body::tangentImpulse","nape/phys/Body.hx",2006);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(2007)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(2008)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(2025)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(2026)
		{
			HX_STACK_LINE(2027)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
			struct _Function_2_1{
				inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2028);
					{
						HX_STACK_LINE(2028)
						if (((__this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(2028)
							__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
						}
						HX_STACK_LINE(2028)
						return __this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(2028)
			for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
				::nape::dynamics::Arbiter oarb = __it->next();
				{
					HX_STACK_LINE(2029)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(2030)
					if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
						HX_STACK_LINE(2030)
						continue;
					}
					HX_STACK_LINE(2031)
					if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
						HX_STACK_LINE(2031)
						continue;
					}
					HX_STACK_LINE(2032)
					{
						struct _Function_4_1{
							inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2033);
								{
									HX_STACK_LINE(2033)
									::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2033)
									return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2033)
						::nape::geom::Vec3 imp = (_Function_4_1::Block(arb))->tangentImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(2034)
						{
							HX_STACK_LINE(2035)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2036)
							{
								HX_STACK_LINE(2037)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								struct _Function_6_1{
									inline static Float Block( ::nape::geom::Vec3 &imp){
										HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2046);
										{
											HX_STACK_LINE(2046)
											if (((bool((imp != null())) && bool(imp->zpp_disp)))){
												HX_STACK_LINE(2046)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(2046)
											{
												HX_STACK_LINE(2046)
												::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(2046)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(2046)
													_this->_validate();
												}
											}
											HX_STACK_LINE(2046)
											return imp->zpp_inner->x;
										}
										return null();
									}
								};
								HX_STACK_LINE(2046)
								hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
								struct _Function_6_2{
									inline static Float Block( ::nape::geom::Vec3 &imp){
										HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2047);
										{
											HX_STACK_LINE(2047)
											if (((bool((imp != null())) && bool(imp->zpp_disp)))){
												HX_STACK_LINE(2047)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(2047)
											{
												HX_STACK_LINE(2047)
												::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(2047)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(2047)
													_this->_validate();
												}
											}
											HX_STACK_LINE(2047)
											return imp->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(2047)
								hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
							}
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2049);
									{
										HX_STACK_LINE(2049)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2049)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2049)
										{
											HX_STACK_LINE(2049)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2049)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(2049)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2049)
										return imp->zpp_inner->z;
									}
									return null();
								}
							};
							HX_STACK_LINE(2049)
							hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
						}
						HX_STACK_LINE(2051)
						imp->dispose();
					}
				}
;
			}
		}
		HX_STACK_LINE(2055)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,tangentImpulse,return )

::nape::geom::Vec3 Body_obj::normalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("Body::normalImpulse","nape/phys/Body.hx",1942);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(1943)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(1944)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(1961)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(1962)
		{
			HX_STACK_LINE(1963)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
			struct _Function_2_1{
				inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1964);
					{
						HX_STACK_LINE(1964)
						if (((__this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(1964)
							__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
						}
						HX_STACK_LINE(1964)
						return __this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(1964)
			for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
				::nape::dynamics::Arbiter oarb = __it->next();
				{
					HX_STACK_LINE(1965)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(1966)
					if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
						HX_STACK_LINE(1966)
						continue;
					}
					HX_STACK_LINE(1967)
					if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
						HX_STACK_LINE(1967)
						continue;
					}
					HX_STACK_LINE(1968)
					{
						struct _Function_4_1{
							inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1969);
								{
									HX_STACK_LINE(1969)
									::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1969)
									return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1969)
						::nape::geom::Vec3 imp = (_Function_4_1::Block(arb))->normalImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(1970)
						{
							HX_STACK_LINE(1971)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1972)
							{
								HX_STACK_LINE(1973)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								struct _Function_6_1{
									inline static Float Block( ::nape::geom::Vec3 &imp){
										HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1982);
										{
											HX_STACK_LINE(1982)
											if (((bool((imp != null())) && bool(imp->zpp_disp)))){
												HX_STACK_LINE(1982)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1982)
											{
												HX_STACK_LINE(1982)
												::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1982)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1982)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1982)
											return imp->zpp_inner->x;
										}
										return null();
									}
								};
								HX_STACK_LINE(1982)
								hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
								struct _Function_6_2{
									inline static Float Block( ::nape::geom::Vec3 &imp){
										HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1983);
										{
											HX_STACK_LINE(1983)
											if (((bool((imp != null())) && bool(imp->zpp_disp)))){
												HX_STACK_LINE(1983)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1983)
											{
												HX_STACK_LINE(1983)
												::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1983)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(1983)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1983)
											return imp->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1983)
								hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
							}
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1985);
									{
										HX_STACK_LINE(1985)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(1985)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1985)
										{
											HX_STACK_LINE(1985)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1985)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1985)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1985)
										return imp->zpp_inner->z;
									}
									return null();
								}
							};
							HX_STACK_LINE(1985)
							hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
						}
						HX_STACK_LINE(1987)
						imp->dispose();
					}
				}
;
			}
		}
		HX_STACK_LINE(1991)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,normalImpulse,return )

::nape::geom::Vec2 Body_obj::get_worldCOM( ){
	HX_STACK_PUSH("Body::get_worldCOM","nape/phys/Body.hx",1917);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1919)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1919)
		hx::Throw ((HX_CSTRING("Error: Space::world has no ") + HX_CSTRING("worldCOM")));
	}
	HX_STACK_LINE(1921)
	if (((this->zpp_inner->wrap_worldCOM == null()))){
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1922);
				{
					HX_STACK_LINE(1922)
					Float x = __this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
					Float y = __this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(1922)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1922)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1922)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1922)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1922)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1922)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1922)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1922)
						ret->zpp_pool = null();
						HX_STACK_LINE(1922)
						ret->zpp_disp = false;
						HX_STACK_LINE(1922)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1922)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1922)
					if (((ret->zpp_inner == null()))){
						struct _Function_4_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1922);
								{
									HX_STACK_LINE(1922)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1922)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1922)
									{
										HX_STACK_LINE(1922)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1922)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1922)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1922)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1922)
											ret1->next = null();
										}
										HX_STACK_LINE(1922)
										ret1->weak = false;
									}
									HX_STACK_LINE(1922)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1922)
									{
										HX_STACK_LINE(1922)
										ret1->x = x;
										HX_STACK_LINE(1922)
										ret1->y = y;
										HX_STACK_LINE(1922)
										{
										}
									}
									HX_STACK_LINE(1922)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1922)
						ret->zpp_inner = _Function_4_1::Block(x,y);
						HX_STACK_LINE(1922)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1922)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1922)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1922)
						{
							HX_STACK_LINE(1922)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1922)
							if ((_this->_immutable)){
								HX_STACK_LINE(1922)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1922)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1922)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1922)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1922)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1922);
								{
									HX_STACK_LINE(1922)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1922)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1922)
									{
										HX_STACK_LINE(1922)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1922)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1922)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1922)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1922);
								{
									HX_STACK_LINE(1922)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1922)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1922)
									{
										HX_STACK_LINE(1922)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1922)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1922)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1922)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1922)
						if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
							HX_STACK_LINE(1922)
							{
								HX_STACK_LINE(1922)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1922)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1922)
								{
								}
							}
							HX_STACK_LINE(1922)
							{
								HX_STACK_LINE(1922)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1922)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1922)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1922)
						ret;
					}
					HX_STACK_LINE(1922)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1922)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1922)
		this->zpp_inner->wrap_worldCOM = _Function_2_1::Block(this);
		HX_STACK_LINE(1923)
		this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
		HX_STACK_LINE(1924)
		this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
		HX_STACK_LINE(1925)
		this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = this->zpp_inner->getworldCOM_dyn();
	}
	HX_STACK_LINE(1927)
	return this->zpp_inner->wrap_worldCOM;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_worldCOM,return )

::nape::geom::Vec2 Body_obj::get_localCOM( ){
	HX_STACK_PUSH("Body::get_localCOM","nape/phys/Body.hx",1895);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1897)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1897)
		hx::Throw ((HX_CSTRING("Error: Space::world has no ") + HX_CSTRING("localCOM")));
	}
	HX_STACK_LINE(1899)
	if (((this->zpp_inner->wrap_localCOM == null()))){
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1900);
				{
					HX_STACK_LINE(1900)
					Float x = __this->zpp_inner->localCOMx;		HX_STACK_VAR(x,"x");
					Float y = __this->zpp_inner->localCOMy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(1900)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1900)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1900)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1900)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1900)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1900)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1900)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1900)
						ret->zpp_pool = null();
						HX_STACK_LINE(1900)
						ret->zpp_disp = false;
						HX_STACK_LINE(1900)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1900)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1900)
					if (((ret->zpp_inner == null()))){
						struct _Function_4_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1900);
								{
									HX_STACK_LINE(1900)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1900)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1900)
									{
										HX_STACK_LINE(1900)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1900)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1900)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1900)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1900)
											ret1->next = null();
										}
										HX_STACK_LINE(1900)
										ret1->weak = false;
									}
									HX_STACK_LINE(1900)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1900)
									{
										HX_STACK_LINE(1900)
										ret1->x = x;
										HX_STACK_LINE(1900)
										ret1->y = y;
										HX_STACK_LINE(1900)
										{
										}
									}
									HX_STACK_LINE(1900)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1900)
						ret->zpp_inner = _Function_4_1::Block(x,y);
						HX_STACK_LINE(1900)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1900)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1900)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1900)
						{
							HX_STACK_LINE(1900)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1900)
							if ((_this->_immutable)){
								HX_STACK_LINE(1900)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1900)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1900)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1900)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1900)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1900);
								{
									HX_STACK_LINE(1900)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1900)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1900)
									{
										HX_STACK_LINE(1900)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1900)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1900)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1900)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1900);
								{
									HX_STACK_LINE(1900)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1900)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1900)
									{
										HX_STACK_LINE(1900)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1900)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1900)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1900)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1900)
						if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
							HX_STACK_LINE(1900)
							{
								HX_STACK_LINE(1900)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1900)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1900)
								{
								}
							}
							HX_STACK_LINE(1900)
							{
								HX_STACK_LINE(1900)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1900)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1900)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1900)
						ret;
					}
					HX_STACK_LINE(1900)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1900)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1900)
		this->zpp_inner->wrap_localCOM = _Function_2_1::Block(this);
		HX_STACK_LINE(1901)
		this->zpp_inner->wrap_localCOM->zpp_inner->_inuse = true;
		HX_STACK_LINE(1902)
		this->zpp_inner->wrap_localCOM->zpp_inner->_immutable = true;
		HX_STACK_LINE(1903)
		this->zpp_inner->wrap_localCOM->zpp_inner->_validate = this->zpp_inner->getlocalCOM_dyn();
	}
	HX_STACK_LINE(1905)
	return this->zpp_inner->wrap_localCOM;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_localCOM,return )

::nape::phys::Body Body_obj::setShapeFluidProperties( ::nape::phys::FluidProperties fluidProperties){
	HX_STACK_PUSH("Body::setShapeFluidProperties","nape/phys/Body.hx",1870);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fluidProperties,"fluidProperties");
	HX_STACK_LINE(1871)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::setShapeFluidProperties()"));
	HX_STACK_LINE(1873)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1873)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1875)
	{
		HX_STACK_LINE(1876)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1877)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1878)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1879)
			{
				HX_STACK_LINE(1879)
				::nape::shape::Shape _this = s->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1879)
				{
					HX_STACK_LINE(1879)
					if (((fluidProperties == null()))){
						HX_STACK_LINE(1879)
						hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape fluidProperties, disable fluids by setting fluidEnabled to false"));
					}
					HX_STACK_LINE(1879)
					_this->zpp_inner->setFluid(fluidProperties->zpp_inner);
				}
				HX_STACK_LINE(1879)
				{
					HX_STACK_LINE(1879)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::fluidProperties"));
					HX_STACK_LINE(1879)
					if (((_this->zpp_inner->fluidProperties == null()))){
						HX_STACK_LINE(1879)
						_this->zpp_inner->setFluid(::nape::phys::FluidProperties_obj::__new(null(),null())->zpp_inner);
					}
					HX_STACK_LINE(1879)
					_this->zpp_inner->fluidProperties->wrapper();
				}
			}
			HX_STACK_LINE(1880)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1883)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,setShapeFluidProperties,return )

::nape::phys::Body Body_obj::setShapeFilters( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_PUSH("Body::setShapeFilters","nape/phys/Body.hx",1846);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");
	HX_STACK_LINE(1847)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::setShapeFilters()"));
	HX_STACK_LINE(1849)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1849)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1851)
	{
		HX_STACK_LINE(1852)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1853)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1854)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1855)
			{
				HX_STACK_LINE(1855)
				::nape::shape::Shape _this = s->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1855)
				{
					HX_STACK_LINE(1855)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::filter"));
					HX_STACK_LINE(1855)
					if (((filter == null()))){
						HX_STACK_LINE(1855)
						hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape filter"));
					}
					HX_STACK_LINE(1855)
					_this->zpp_inner->setFilter(filter->zpp_inner);
				}
				HX_STACK_LINE(1855)
				_this->zpp_inner->filter->wrapper();
			}
			HX_STACK_LINE(1856)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1859)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,setShapeFilters,return )

::nape::phys::Body Body_obj::setShapeMaterials( ::nape::phys::Material material){
	HX_STACK_PUSH("Body::setShapeMaterials","nape/phys/Body.hx",1822);
	HX_STACK_THIS(this);
	HX_STACK_ARG(material,"material");
	HX_STACK_LINE(1823)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::setShapeMaterials()"));
	HX_STACK_LINE(1825)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1825)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1827)
	{
		HX_STACK_LINE(1828)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1829)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1830)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1831)
			{
				HX_STACK_LINE(1831)
				::nape::shape::Shape _this = s->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1831)
				{
					HX_STACK_LINE(1831)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::material"));
					HX_STACK_LINE(1831)
					if (((material == null()))){
						HX_STACK_LINE(1831)
						hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape material"));
					}
					HX_STACK_LINE(1831)
					_this->zpp_inner->setMaterial(material->zpp_inner);
				}
				HX_STACK_LINE(1831)
				_this->zpp_inner->material->wrapper();
			}
			HX_STACK_LINE(1832)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1835)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,setShapeMaterials,return )

::nape::phys::Body Body_obj::rotate( ::nape::geom::Vec2 centre,Float angle){
	HX_STACK_PUSH("Body::rotate","nape/phys/Body.hx",1780);
	HX_STACK_THIS(this);
	HX_STACK_ARG(centre,"centre");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(1781)
	if (((bool((centre != null())) && bool(centre->zpp_disp)))){
		HX_STACK_LINE(1783)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1787)
	if (((centre == null()))){
		HX_STACK_LINE(1787)
		hx::Throw (HX_CSTRING("Error: Cannot rotate about a null Vec2"));
	}
	HX_STACK_LINE(1790)
	if (((angle != angle))){
		HX_STACK_LINE(1790)
		hx::Throw (HX_CSTRING("Error: Cannot rotate by NaN radians"));
	}
	HX_STACK_LINE(1792)
	bool weak = centre->zpp_inner->weak;		HX_STACK_VAR(weak,"weak");
	HX_STACK_LINE(1793)
	centre->zpp_inner->weak = false;
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1794);
			{
				HX_STACK_LINE(1794)
				if (((__this->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(1794)
					__this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(1794)
				return __this->zpp_inner->wrap_pos;
			}
			return null();
		}
	};
	HX_STACK_LINE(1794)
	::nape::geom::Vec2 del = (_Function_1_1::Block(this))->sub(centre,null());		HX_STACK_VAR(del,"del");
	HX_STACK_LINE(1795)
	del->rotate(angle);
	HX_STACK_LINE(1796)
	{
		HX_STACK_LINE(1796)
		::nape::geom::Vec2 position = centre->add(del,true);		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(1796)
		{
			HX_STACK_LINE(1796)
			if (((bool((position != null())) && bool(position->zpp_disp)))){
				HX_STACK_LINE(1796)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1796)
			if (((position == null()))){
				HX_STACK_LINE(1796)
				hx::Throw (((HX_CSTRING("Error: Body::") + HX_CSTRING("position")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(1796)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1796);
						{
							HX_STACK_LINE(1796)
							if (((__this->zpp_inner->wrap_pos == null()))){
								HX_STACK_LINE(1796)
								__this->zpp_inner->setupPosition();
							}
							HX_STACK_LINE(1796)
							return __this->zpp_inner->wrap_pos;
						}
						return null();
					}
				};
				HX_STACK_LINE(1796)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1796)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(1796)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1796)
				if (((bool((position != null())) && bool(position->zpp_disp)))){
					HX_STACK_LINE(1796)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1796)
				{
					HX_STACK_LINE(1796)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(1796)
					if ((_this1->_immutable)){
						HX_STACK_LINE(1796)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1796)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(1796)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(1796)
				if (((position == null()))){
					HX_STACK_LINE(1796)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &position,::nape::geom::Vec2 _this){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1796);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &position){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1796);
									{
										HX_STACK_LINE(1796)
										if (((bool((position != null())) && bool(position->zpp_disp)))){
											HX_STACK_LINE(1796)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1796)
										{
											HX_STACK_LINE(1796)
											::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1796)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(1796)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(1796)
										return position->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &position){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1796);
									{
										HX_STACK_LINE(1796)
										if (((bool((position != null())) && bool(position->zpp_disp)))){
											HX_STACK_LINE(1796)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1796)
										{
											HX_STACK_LINE(1796)
											::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1796)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(1796)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(1796)
										return position->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1796)
							Float x = _Function_5_1::Block(position);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(position);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1796)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(1796)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1796)
							{
								HX_STACK_LINE(1796)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1796)
								if ((_this1->_immutable)){
									HX_STACK_LINE(1796)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1796)
								if (((_this1->_isimmutable != null()))){
									HX_STACK_LINE(1796)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(1796)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(1796)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 _this){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1796);
									{
										HX_STACK_LINE(1796)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(1796)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1796)
										{
											HX_STACK_LINE(1796)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1796)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(1796)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(1796)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 _this){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1796);
									{
										HX_STACK_LINE(1796)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(1796)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1796)
										{
											HX_STACK_LINE(1796)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1796)
											if (((_this1->_validate != null()))){
												HX_STACK_LINE(1796)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(1796)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1796)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(1796)
								{
									HX_STACK_LINE(1796)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(1796)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(1796)
									{
									}
								}
								HX_STACK_LINE(1796)
								{
									HX_STACK_LINE(1796)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1796)
									if (((_this1->_invalidate != null()))){
										HX_STACK_LINE(1796)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(1796)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(1796)
				::nape::geom::Vec2 ret = _Function_4_2::Block(position,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1796)
				if ((position->zpp_inner->weak)){
					HX_STACK_LINE(1796)
					{
						HX_STACK_LINE(1796)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(1796)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1796)
						{
							HX_STACK_LINE(1796)
							::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1796)
							if ((_this1->_immutable)){
								HX_STACK_LINE(1796)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1796)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(1796)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(1796)
						if ((position->zpp_inner->_inuse)){
							HX_STACK_LINE(1796)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(1796)
						::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(1796)
						position->zpp_inner->outer = null();
						HX_STACK_LINE(1796)
						position->zpp_inner = null();
						HX_STACK_LINE(1796)
						{
							HX_STACK_LINE(1796)
							::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1796)
							o->zpp_pool = null();
							HX_STACK_LINE(1796)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(1796)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(1796)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(1796)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(1796)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(1796)
						{
							HX_STACK_LINE(1796)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1796)
							{
								HX_STACK_LINE(1796)
								if (((o->outer != null()))){
									HX_STACK_LINE(1796)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(1796)
									o->outer = null();
								}
								HX_STACK_LINE(1796)
								o->_isimmutable = null();
								HX_STACK_LINE(1796)
								o->_validate = null();
								HX_STACK_LINE(1796)
								o->_invalidate = null();
							}
							HX_STACK_LINE(1796)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(1796)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(1796)
					true;
				}
				else{
					HX_STACK_LINE(1796)
					false;
				}
				HX_STACK_LINE(1796)
				ret;
			}
		}
		HX_STACK_LINE(1796)
		{
			HX_STACK_LINE(1796)
			if (((this->zpp_inner->wrap_pos == null()))){
				HX_STACK_LINE(1796)
				this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(1796)
			this->zpp_inner->wrap_pos;
		}
	}
	HX_STACK_LINE(1797)
	{
		HX_STACK_LINE(1797)
		if (((bool((del != null())) && bool(del->zpp_disp)))){
			HX_STACK_LINE(1797)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1797)
		{
			HX_STACK_LINE(1797)
			::zpp_nape::geom::ZPP_Vec2 _this = del->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1797)
			if ((_this->_immutable)){
				HX_STACK_LINE(1797)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(1797)
			if (((_this->_isimmutable != null()))){
				HX_STACK_LINE(1797)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1797)
		if ((del->zpp_inner->_inuse)){
			HX_STACK_LINE(1797)
			hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
		}
		HX_STACK_LINE(1797)
		::zpp_nape::geom::ZPP_Vec2 inner = del->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1797)
		del->zpp_inner->outer = null();
		HX_STACK_LINE(1797)
		del->zpp_inner = null();
		HX_STACK_LINE(1797)
		{
			HX_STACK_LINE(1797)
			::nape::geom::Vec2 o = del;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1797)
			o->zpp_pool = null();
			HX_STACK_LINE(1797)
			if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
				HX_STACK_LINE(1797)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1797)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1797)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(1797)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(1797)
		{
			HX_STACK_LINE(1797)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1797)
			{
				HX_STACK_LINE(1797)
				if (((o->outer != null()))){
					HX_STACK_LINE(1797)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1797)
					o->outer = null();
				}
				HX_STACK_LINE(1797)
				o->_isimmutable = null();
				HX_STACK_LINE(1797)
				o->_validate = null();
				HX_STACK_LINE(1797)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1797)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(1797)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1798)
	{
		HX_STACK_LINE(1798)
		::nape::phys::Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1798)
		{
			HX_STACK_LINE(1798)
			Float rotation = (_g->zpp_inner->rot + angle);		HX_STACK_VAR(rotation,"rotation");
			HX_STACK_LINE(1798)
			{
				HX_STACK_LINE(1798)
				_g->zpp_inner->immutable_midstep(HX_CSTRING("Body::rotation"));
				HX_STACK_LINE(1798)
				if ((_g->zpp_inner->world)){
					HX_STACK_LINE(1798)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				HX_STACK_LINE(1798)
				if (((bool((_g->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_g->zpp_inner->space != null()))))){
					HX_STACK_LINE(1798)
					hx::Throw (HX_CSTRING("Error: Static objects cannot be rotated once inside a Space"));
				}
				HX_STACK_LINE(1798)
				if (((_g->zpp_inner->rot != rotation))){
					HX_STACK_LINE(1798)
					if (((rotation != rotation))){
						HX_STACK_LINE(1798)
						hx::Throw (HX_CSTRING("Error: Body::rotation cannot be NaN"));
					}
					HX_STACK_LINE(1798)
					_g->zpp_inner->rot = rotation;
					HX_STACK_LINE(1798)
					{
						HX_STACK_LINE(1798)
						::zpp_nape::phys::ZPP_Body _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1798)
						_this->zip_axis = true;
						HX_STACK_LINE(1798)
						{
							HX_STACK_LINE(1798)
							::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = _this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(1798)
							while(((cx_ite != null()))){
								HX_STACK_LINE(1798)
								::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1798)
								{
									HX_STACK_LINE(1798)
									if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
										HX_STACK_LINE(1798)
										s->polygon->invalidate_gverts();
										HX_STACK_LINE(1798)
										s->polygon->invalidate_gaxi();
									}
									HX_STACK_LINE(1798)
									s->invalidate_worldCOM();
								}
								HX_STACK_LINE(1798)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(1798)
						_this->zip_worldCOM = true;
					}
					HX_STACK_LINE(1798)
					_g->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(1798)
			_g->zpp_inner->rot;
		}
	}
	HX_STACK_LINE(1799)
	centre->zpp_inner->weak = weak;
	HX_STACK_LINE(1800)
	if ((centre->zpp_inner->weak)){
		HX_STACK_LINE(1804)
		{
			HX_STACK_LINE(1804)
			if (((bool((centre != null())) && bool(centre->zpp_disp)))){
				HX_STACK_LINE(1804)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1804)
			{
				HX_STACK_LINE(1804)
				::zpp_nape::geom::ZPP_Vec2 _this = centre->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1804)
				if ((_this->_immutable)){
					HX_STACK_LINE(1804)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1804)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(1804)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1804)
			if ((centre->zpp_inner->_inuse)){
				HX_STACK_LINE(1804)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1804)
			::zpp_nape::geom::ZPP_Vec2 inner = centre->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1804)
			centre->zpp_inner->outer = null();
			HX_STACK_LINE(1804)
			centre->zpp_inner = null();
			HX_STACK_LINE(1804)
			{
				HX_STACK_LINE(1804)
				::nape::geom::Vec2 o = centre;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1804)
				o->zpp_pool = null();
				HX_STACK_LINE(1804)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1804)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1804)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1804)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1804)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1804)
			{
				HX_STACK_LINE(1804)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1804)
				{
					HX_STACK_LINE(1804)
					if (((o->outer != null()))){
						HX_STACK_LINE(1804)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1804)
						o->outer = null();
					}
					HX_STACK_LINE(1804)
					o->_isimmutable = null();
					HX_STACK_LINE(1804)
					o->_validate = null();
					HX_STACK_LINE(1804)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1804)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1804)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1805)
		true;
	}
	else{
		HX_STACK_LINE(1807)
		false;
	}
	HX_STACK_LINE(1811)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,rotate,return )

::nape::phys::Body Body_obj::align( ){
	HX_STACK_PUSH("Body::align","nape/phys/Body.hx",1737);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1738)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::align()"));
	HX_STACK_LINE(1740)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1740)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1743)
	if (((this->zpp_inner->shapes->head == null()))){
		HX_STACK_LINE(1743)
		hx::Throw (HX_CSTRING("Error: Cannot align empty Body"));
	}
	HX_STACK_LINE(1745)
	this->zpp_inner->validate_localCOM();
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1746);
			{
				HX_STACK_LINE(1746)
				Float x = -(__this->zpp_inner->localCOMx);		HX_STACK_VAR(x,"x");
				Float y = -(__this->zpp_inner->localCOMy);		HX_STACK_VAR(y,"y");
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1746)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(1746)
					hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				HX_STACK_LINE(1746)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1746)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(1746)
					ret = ::nape::geom::Vec2_obj::__new(null(),null());
				}
				else{
					HX_STACK_LINE(1746)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1746)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1746)
					ret->zpp_pool = null();
					HX_STACK_LINE(1746)
					ret->zpp_disp = false;
					HX_STACK_LINE(1746)
					if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
						HX_STACK_LINE(1746)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
				HX_STACK_LINE(1746)
				if (((ret->zpp_inner == null()))){
					struct _Function_3_1{
						inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1746);
							{
								HX_STACK_LINE(1746)
								bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
								HX_STACK_LINE(1746)
								::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1746)
								{
									HX_STACK_LINE(1746)
									if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
										HX_STACK_LINE(1746)
										ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
									}
									else{
										HX_STACK_LINE(1746)
										ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1746)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
										HX_STACK_LINE(1746)
										ret1->next = null();
									}
									HX_STACK_LINE(1746)
									ret1->weak = false;
								}
								HX_STACK_LINE(1746)
								ret1->_immutable = immutable;
								HX_STACK_LINE(1746)
								{
									HX_STACK_LINE(1746)
									ret1->x = x;
									HX_STACK_LINE(1746)
									ret1->y = y;
									HX_STACK_LINE(1746)
									{
									}
								}
								HX_STACK_LINE(1746)
								return ret1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1746)
					ret->zpp_inner = _Function_3_1::Block(x,y);
					HX_STACK_LINE(1746)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1746)
					if (((bool((ret != null())) && bool(ret->zpp_disp)))){
						HX_STACK_LINE(1746)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1746)
					{
						HX_STACK_LINE(1746)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1746)
						if ((_this->_immutable)){
							HX_STACK_LINE(1746)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(1746)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(1746)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1746)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1746)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1746);
							{
								HX_STACK_LINE(1746)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(1746)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1746)
								{
									HX_STACK_LINE(1746)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1746)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1746)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1746)
								return ret->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1746);
							{
								HX_STACK_LINE(1746)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(1746)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1746)
								{
									HX_STACK_LINE(1746)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1746)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1746)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1746)
								return ret->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1746)
					if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
						HX_STACK_LINE(1746)
						{
							HX_STACK_LINE(1746)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(1746)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(1746)
							{
							}
						}
						HX_STACK_LINE(1746)
						{
							HX_STACK_LINE(1746)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1746)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(1746)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(1746)
					ret;
				}
				HX_STACK_LINE(1746)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1746)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1746)
	::nape::geom::Vec2 dx = _Function_1_1::Block(this);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(1747)
	this->translateShapes(dx);
	HX_STACK_LINE(1748)
	::nape::geom::Vec2 dx2 = this->localVectorToWorld(dx,null());		HX_STACK_VAR(dx2,"dx2");
	struct _Function_1_2{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1749);
			{
				HX_STACK_LINE(1749)
				if (((__this->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(1749)
					__this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(1749)
				return __this->zpp_inner->wrap_pos;
			}
			return null();
		}
	};
	HX_STACK_LINE(1749)
	(_Function_1_2::Block(this))->subeq(dx2);
	HX_STACK_LINE(1750)
	if (((this->zpp_inner->pre_posx < ::Math_obj::POSITIVE_INFINITY))){
		HX_STACK_LINE(1751)
		Float t = 1.0;		HX_STACK_VAR(t,"t");
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2 &dx2){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1760);
				{
					HX_STACK_LINE(1760)
					if (((bool((dx2 != null())) && bool(dx2->zpp_disp)))){
						HX_STACK_LINE(1760)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1760)
					{
						HX_STACK_LINE(1760)
						::zpp_nape::geom::ZPP_Vec2 _this = dx2->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1760)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1760)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1760)
					return dx2->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(1760)
		hx::SubEq(this->zpp_inner->pre_posx,(_Function_2_1::Block(dx2) * t));
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2 &dx2){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1761);
				{
					HX_STACK_LINE(1761)
					if (((bool((dx2 != null())) && bool(dx2->zpp_disp)))){
						HX_STACK_LINE(1761)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1761)
					{
						HX_STACK_LINE(1761)
						::zpp_nape::geom::ZPP_Vec2 _this = dx2->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1761)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1761)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1761)
					return dx2->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(1761)
		hx::SubEq(this->zpp_inner->pre_posy,(_Function_2_2::Block(dx2) * t));
	}
	HX_STACK_LINE(1763)
	{
		HX_STACK_LINE(1763)
		if (((bool((dx != null())) && bool(dx->zpp_disp)))){
			HX_STACK_LINE(1763)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1763)
		{
			HX_STACK_LINE(1763)
			::zpp_nape::geom::ZPP_Vec2 _this = dx->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1763)
			if ((_this->_immutable)){
				HX_STACK_LINE(1763)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(1763)
			if (((_this->_isimmutable != null()))){
				HX_STACK_LINE(1763)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1763)
		if ((dx->zpp_inner->_inuse)){
			HX_STACK_LINE(1763)
			hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
		}
		HX_STACK_LINE(1763)
		::zpp_nape::geom::ZPP_Vec2 inner = dx->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1763)
		dx->zpp_inner->outer = null();
		HX_STACK_LINE(1763)
		dx->zpp_inner = null();
		HX_STACK_LINE(1763)
		{
			HX_STACK_LINE(1763)
			::nape::geom::Vec2 o = dx;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1763)
			o->zpp_pool = null();
			HX_STACK_LINE(1763)
			if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
				HX_STACK_LINE(1763)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1763)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1763)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(1763)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(1763)
		{
			HX_STACK_LINE(1763)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1763)
			{
				HX_STACK_LINE(1763)
				if (((o->outer != null()))){
					HX_STACK_LINE(1763)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1763)
					o->outer = null();
				}
				HX_STACK_LINE(1763)
				o->_isimmutable = null();
				HX_STACK_LINE(1763)
				o->_validate = null();
				HX_STACK_LINE(1763)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1763)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(1763)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1764)
	{
		HX_STACK_LINE(1764)
		if (((bool((dx2 != null())) && bool(dx2->zpp_disp)))){
			HX_STACK_LINE(1764)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1764)
		{
			HX_STACK_LINE(1764)
			::zpp_nape::geom::ZPP_Vec2 _this = dx2->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1764)
			if ((_this->_immutable)){
				HX_STACK_LINE(1764)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(1764)
			if (((_this->_isimmutable != null()))){
				HX_STACK_LINE(1764)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1764)
		if ((dx2->zpp_inner->_inuse)){
			HX_STACK_LINE(1764)
			hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
		}
		HX_STACK_LINE(1764)
		::zpp_nape::geom::ZPP_Vec2 inner = dx2->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1764)
		dx2->zpp_inner->outer = null();
		HX_STACK_LINE(1764)
		dx2->zpp_inner = null();
		HX_STACK_LINE(1764)
		{
			HX_STACK_LINE(1764)
			::nape::geom::Vec2 o = dx2;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1764)
			o->zpp_pool = null();
			HX_STACK_LINE(1764)
			if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
				HX_STACK_LINE(1764)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1764)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1764)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(1764)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(1764)
		{
			HX_STACK_LINE(1764)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1764)
			{
				HX_STACK_LINE(1764)
				if (((o->outer != null()))){
					HX_STACK_LINE(1764)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1764)
					o->outer = null();
				}
				HX_STACK_LINE(1764)
				o->_isimmutable = null();
				HX_STACK_LINE(1764)
				o->_validate = null();
				HX_STACK_LINE(1764)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1764)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(1764)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1765)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,align,return )

::nape::phys::Body Body_obj::transformShapes( ::nape::geom::Mat23 matrix){
	HX_STACK_PUSH("Body::transformShapes","nape/phys/Body.hx",1706);
	HX_STACK_THIS(this);
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_LINE(1707)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::transformShapes()"));
	HX_STACK_LINE(1709)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1709)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1711)
	{
		HX_STACK_LINE(1712)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1713)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1714)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1715)
			s->outer->transform(matrix);
			HX_STACK_LINE(1716)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1719)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,transformShapes,return )

::nape::phys::Body Body_obj::scaleShapes( Float scaleX,Float scaleY){
	HX_STACK_PUSH("Body::scaleShapes","nape/phys/Body.hx",1677);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scaleX,"scaleX");
	HX_STACK_ARG(scaleY,"scaleY");
	HX_STACK_LINE(1678)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::scaleShapes()"));
	HX_STACK_LINE(1680)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1680)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1682)
	{
		HX_STACK_LINE(1683)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1684)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1685)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1686)
			s->outer->scale(scaleX,scaleY);
			HX_STACK_LINE(1687)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1690)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,scaleShapes,return )

::nape::phys::Body Body_obj::rotateShapes( Float angle){
	HX_STACK_PUSH("Body::rotateShapes","nape/phys/Body.hx",1649);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(1650)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::rotateShapes()"));
	HX_STACK_LINE(1652)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1652)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1654)
	{
		HX_STACK_LINE(1655)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1656)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1657)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1658)
			s->outer->rotate(angle);
			HX_STACK_LINE(1659)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1662)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,rotateShapes,return )

::nape::phys::Body Body_obj::translateShapes( ::nape::geom::Vec2 translation){
	HX_STACK_PUSH("Body::translateShapes","nape/phys/Body.hx",1601);
	HX_STACK_THIS(this);
	HX_STACK_ARG(translation,"translation");
	HX_STACK_LINE(1602)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::translateShapes()"));
	HX_STACK_LINE(1603)
	if (((bool((translation != null())) && bool(translation->zpp_disp)))){
		HX_STACK_LINE(1605)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1609)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1609)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1612)
	if (((translation == null()))){
		HX_STACK_LINE(1612)
		hx::Throw (HX_CSTRING("Error: Cannot displace by null Vec2"));
	}
	HX_STACK_LINE(1614)
	bool weak = translation->zpp_inner->weak;		HX_STACK_VAR(weak,"weak");
	HX_STACK_LINE(1615)
	translation->zpp_inner->weak = false;
	HX_STACK_LINE(1616)
	{
		HX_STACK_LINE(1617)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1618)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1619)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1620)
			s->outer->translate(translation);
			HX_STACK_LINE(1621)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1624)
	translation->zpp_inner->weak = weak;
	HX_STACK_LINE(1625)
	if ((translation->zpp_inner->weak)){
		HX_STACK_LINE(1629)
		{
			HX_STACK_LINE(1629)
			if (((bool((translation != null())) && bool(translation->zpp_disp)))){
				HX_STACK_LINE(1629)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1629)
			{
				HX_STACK_LINE(1629)
				::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1629)
				if ((_this->_immutable)){
					HX_STACK_LINE(1629)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1629)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(1629)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1629)
			if ((translation->zpp_inner->_inuse)){
				HX_STACK_LINE(1629)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1629)
			::zpp_nape::geom::ZPP_Vec2 inner = translation->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1629)
			translation->zpp_inner->outer = null();
			HX_STACK_LINE(1629)
			translation->zpp_inner = null();
			HX_STACK_LINE(1629)
			{
				HX_STACK_LINE(1629)
				::nape::geom::Vec2 o = translation;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1629)
				o->zpp_pool = null();
				HX_STACK_LINE(1629)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1629)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1629)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1629)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1629)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1629)
			{
				HX_STACK_LINE(1629)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1629)
				{
					HX_STACK_LINE(1629)
					if (((o->outer != null()))){
						HX_STACK_LINE(1629)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1629)
						o->outer = null();
					}
					HX_STACK_LINE(1629)
					o->_isimmutable = null();
					HX_STACK_LINE(1629)
					o->_validate = null();
					HX_STACK_LINE(1629)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1629)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1629)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1630)
		true;
	}
	else{
		HX_STACK_LINE(1632)
		false;
	}
	HX_STACK_LINE(1636)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,translateShapes,return )

::nape::phys::Body Body_obj::applyAngularImpulse( Float impulse,hx::Null< bool >  __o_sleepable){
bool sleepable = __o_sleepable.Default(false);
	HX_STACK_PUSH("Body::applyAngularImpulse","nape/phys/Body.hx",1575);
	HX_STACK_THIS(this);
	HX_STACK_ARG(impulse,"impulse");
	HX_STACK_ARG(sleepable,"sleepable");
{
		HX_STACK_LINE(1577)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1577)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		struct _Function_1_1{
			inline static bool Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1579);
				{
					HX_STACK_LINE(1579)
					if (((__this->zpp_inner->space == null()))){
						HX_STACK_LINE(1579)
						hx::Throw (HX_CSTRING("Error: isSleeping makes no sense if the object is not contained within a Space"));
					}
					HX_STACK_LINE(1579)
					return __this->zpp_inner->component->sleeping;
				}
				return null();
			}
		};
		HX_STACK_LINE(1579)
		if (((bool(sleepable) && bool(_Function_1_1::Block(this))))){
			HX_STACK_LINE(1579)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1582)
		this->zpp_inner->validate_inertia();
		HX_STACK_LINE(1583)
		hx::AddEq(this->zpp_inner->angvel,(impulse * this->zpp_inner->iinertia));
		HX_STACK_LINE(1584)
		if ((!(sleepable))){
			HX_STACK_LINE(1584)
			if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
				HX_STACK_LINE(1585)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(1587)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,applyAngularImpulse,return )

::nape::phys::Body Body_obj::applyImpulse( ::nape::geom::Vec2 impulse,::nape::geom::Vec2 pos,hx::Null< bool >  __o_sleepable){
bool sleepable = __o_sleepable.Default(false);
	HX_STACK_PUSH("Body::applyImpulse","nape/phys/Body.hx",1479);
	HX_STACK_THIS(this);
	HX_STACK_ARG(impulse,"impulse");
	HX_STACK_ARG(pos,"pos");
	HX_STACK_ARG(sleepable,"sleepable");
{
		HX_STACK_LINE(1480)
		if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
			HX_STACK_LINE(1482)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1485)
		if (((bool((pos != null())) && bool(pos->zpp_disp)))){
			HX_STACK_LINE(1487)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1491)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1491)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1494)
		if (((impulse == null()))){
			HX_STACK_LINE(1494)
			hx::Throw (HX_CSTRING("Error: Cannot apply null impulse to Body"));
		}
		struct _Function_1_1{
			inline static bool Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1496);
				{
					HX_STACK_LINE(1496)
					if (((__this->zpp_inner->space == null()))){
						HX_STACK_LINE(1496)
						hx::Throw (HX_CSTRING("Error: isSleeping makes no sense if the object is not contained within a Space"));
					}
					HX_STACK_LINE(1496)
					return __this->zpp_inner->component->sleeping;
				}
				return null();
			}
		};
		HX_STACK_LINE(1496)
		if (((bool(sleepable) && bool(_Function_1_1::Block(this))))){
			HX_STACK_LINE(1497)
			if ((impulse->zpp_inner->weak)){
				HX_STACK_LINE(1501)
				{
					HX_STACK_LINE(1501)
					if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
						HX_STACK_LINE(1501)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1501)
					{
						HX_STACK_LINE(1501)
						::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1501)
						if ((_this->_immutable)){
							HX_STACK_LINE(1501)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(1501)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(1501)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1501)
					if ((impulse->zpp_inner->_inuse)){
						HX_STACK_LINE(1501)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(1501)
					::zpp_nape::geom::ZPP_Vec2 inner = impulse->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1501)
					impulse->zpp_inner->outer = null();
					HX_STACK_LINE(1501)
					impulse->zpp_inner = null();
					HX_STACK_LINE(1501)
					{
						HX_STACK_LINE(1501)
						::nape::geom::Vec2 o = impulse;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1501)
						o->zpp_pool = null();
						HX_STACK_LINE(1501)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(1501)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(1501)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1501)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(1501)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(1501)
					{
						HX_STACK_LINE(1501)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1501)
						{
							HX_STACK_LINE(1501)
							if (((o->outer != null()))){
								HX_STACK_LINE(1501)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1501)
								o->outer = null();
							}
							HX_STACK_LINE(1501)
							o->_isimmutable = null();
							HX_STACK_LINE(1501)
							o->_validate = null();
							HX_STACK_LINE(1501)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1501)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1501)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1502)
				true;
			}
			else{
				HX_STACK_LINE(1504)
				false;
			}
			HX_STACK_LINE(1508)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1510)
		this->zpp_inner->validate_mass();
		HX_STACK_LINE(1511)
		{
			HX_STACK_LINE(1512)
			Float t = this->zpp_inner->imass;		HX_STACK_VAR(t,"t");
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &impulse){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1521);
					{
						HX_STACK_LINE(1521)
						if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
							HX_STACK_LINE(1521)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1521)
						{
							HX_STACK_LINE(1521)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1521)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1521)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1521)
						return impulse->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(1521)
			hx::AddEq(this->zpp_inner->velx,(_Function_2_1::Block(impulse) * t));
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &impulse){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1522);
					{
						HX_STACK_LINE(1522)
						if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
							HX_STACK_LINE(1522)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1522)
						{
							HX_STACK_LINE(1522)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1522)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1522)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1522)
						return impulse->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1522)
			hx::AddEq(this->zpp_inner->vely,(_Function_2_2::Block(impulse) * t));
		}
		HX_STACK_LINE(1524)
		if (((pos != null()))){
			HX_STACK_LINE(1525)
			Float rx = 0.0;		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(1526)
			Float ry = 0.0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(1527)
			{
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &pos){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1528);
						{
							HX_STACK_LINE(1528)
							if (((bool((pos != null())) && bool(pos->zpp_disp)))){
								HX_STACK_LINE(1528)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1528)
							{
								HX_STACK_LINE(1528)
								::zpp_nape::geom::ZPP_Vec2 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1528)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1528)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1528)
							return pos->zpp_inner->x;
						}
						return null();
					}
				};
				HX_STACK_LINE(1528)
				rx = (_Function_3_1::Block(pos) - this->zpp_inner->posx);
				struct _Function_3_2{
					inline static Float Block( ::nape::geom::Vec2 &pos){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1529);
						{
							HX_STACK_LINE(1529)
							if (((bool((pos != null())) && bool(pos->zpp_disp)))){
								HX_STACK_LINE(1529)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1529)
							{
								HX_STACK_LINE(1529)
								::zpp_nape::geom::ZPP_Vec2 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1529)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1529)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1529)
							return pos->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(1529)
				ry = (_Function_3_2::Block(pos) - this->zpp_inner->posy);
			}
			HX_STACK_LINE(1531)
			this->zpp_inner->validate_inertia();
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &impulse){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1532);
					{
						HX_STACK_LINE(1532)
						if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
							HX_STACK_LINE(1532)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1532)
						{
							HX_STACK_LINE(1532)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1532)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1532)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1532)
						return impulse->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &impulse){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1532);
					{
						HX_STACK_LINE(1532)
						if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
							HX_STACK_LINE(1532)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1532)
						{
							HX_STACK_LINE(1532)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1532)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1532)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1532)
						return impulse->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(1532)
			hx::AddEq(this->zpp_inner->angvel,((((_Function_2_1::Block(impulse) * rx) - (_Function_2_2::Block(impulse) * ry))) * this->zpp_inner->iinertia));
			HX_STACK_LINE(1533)
			if ((pos->zpp_inner->weak)){
				HX_STACK_LINE(1537)
				{
					HX_STACK_LINE(1537)
					if (((bool((pos != null())) && bool(pos->zpp_disp)))){
						HX_STACK_LINE(1537)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1537)
					{
						HX_STACK_LINE(1537)
						::zpp_nape::geom::ZPP_Vec2 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1537)
						if ((_this->_immutable)){
							HX_STACK_LINE(1537)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(1537)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(1537)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1537)
					if ((pos->zpp_inner->_inuse)){
						HX_STACK_LINE(1537)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(1537)
					::zpp_nape::geom::ZPP_Vec2 inner = pos->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1537)
					pos->zpp_inner->outer = null();
					HX_STACK_LINE(1537)
					pos->zpp_inner = null();
					HX_STACK_LINE(1537)
					{
						HX_STACK_LINE(1537)
						::nape::geom::Vec2 o = pos;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1537)
						o->zpp_pool = null();
						HX_STACK_LINE(1537)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(1537)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(1537)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1537)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(1537)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(1537)
					{
						HX_STACK_LINE(1537)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1537)
						{
							HX_STACK_LINE(1537)
							if (((o->outer != null()))){
								HX_STACK_LINE(1537)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1537)
								o->outer = null();
							}
							HX_STACK_LINE(1537)
							o->_isimmutable = null();
							HX_STACK_LINE(1537)
							o->_validate = null();
							HX_STACK_LINE(1537)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1537)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1537)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1538)
				true;
			}
			else{
				HX_STACK_LINE(1540)
				false;
			}
		}
		HX_STACK_LINE(1545)
		if ((!(sleepable))){
			HX_STACK_LINE(1545)
			if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
				HX_STACK_LINE(1546)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(1548)
		if ((impulse->zpp_inner->weak)){
			HX_STACK_LINE(1552)
			{
				HX_STACK_LINE(1552)
				if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
					HX_STACK_LINE(1552)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1552)
				{
					HX_STACK_LINE(1552)
					::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1552)
					if ((_this->_immutable)){
						HX_STACK_LINE(1552)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1552)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1552)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1552)
				if ((impulse->zpp_inner->_inuse)){
					HX_STACK_LINE(1552)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1552)
				::zpp_nape::geom::ZPP_Vec2 inner = impulse->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1552)
				impulse->zpp_inner->outer = null();
				HX_STACK_LINE(1552)
				impulse->zpp_inner = null();
				HX_STACK_LINE(1552)
				{
					HX_STACK_LINE(1552)
					::nape::geom::Vec2 o = impulse;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1552)
					o->zpp_pool = null();
					HX_STACK_LINE(1552)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1552)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1552)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1552)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1552)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1552)
				{
					HX_STACK_LINE(1552)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1552)
					{
						HX_STACK_LINE(1552)
						if (((o->outer != null()))){
							HX_STACK_LINE(1552)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1552)
							o->outer = null();
						}
						HX_STACK_LINE(1552)
						o->_isimmutable = null();
						HX_STACK_LINE(1552)
						o->_validate = null();
						HX_STACK_LINE(1552)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1552)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1552)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1553)
			true;
		}
		else{
			HX_STACK_LINE(1555)
			false;
		}
		HX_STACK_LINE(1559)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Body_obj,applyImpulse,return )

::nape::geom::Vec2 Body_obj::worldVectorToLocal( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Body::worldVectorToLocal","nape/phys/Body.hx",1429);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1430)
		if (((bool((vector != null())) && bool(vector->zpp_disp)))){
			HX_STACK_LINE(1432)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1436)
		if (((vector == null()))){
			HX_STACK_LINE(1436)
			hx::Throw (HX_CSTRING("Error: Cannot transform null Vec2"));
		}
		HX_STACK_LINE(1438)
		{
			HX_STACK_LINE(1438)
			::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1438)
			if ((_this->zip_axis)){
				HX_STACK_LINE(1438)
				_this->zip_axis = false;
				HX_STACK_LINE(1438)
				{
					HX_STACK_LINE(1438)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(1438)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(1438)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1439)
		Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1440)
		Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1441)
		{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1442);
					{
						HX_STACK_LINE(1442)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1442)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1442)
						{
							HX_STACK_LINE(1442)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1442)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1442)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1442)
						return vector->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1442);
					{
						HX_STACK_LINE(1442)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1442)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1442)
						{
							HX_STACK_LINE(1442)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1442)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1442)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1442)
						return vector->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1442)
			tempx = ((_Function_2_1::Block(vector) * this->zpp_inner->axisy) + (_Function_2_2::Block(vector) * this->zpp_inner->axisx));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1443);
					{
						HX_STACK_LINE(1443)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1443)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1443)
						{
							HX_STACK_LINE(1443)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1443)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1443)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1443)
						return vector->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1443);
					{
						HX_STACK_LINE(1443)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1443)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1443)
						{
							HX_STACK_LINE(1443)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1443)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1443)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1443)
						return vector->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(1443)
			tempy = ((_Function_2_3::Block(vector) * this->zpp_inner->axisy) - (_Function_2_4::Block(vector) * this->zpp_inner->axisx));
		}
		HX_STACK_LINE(1445)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(1449)
			{
				HX_STACK_LINE(1449)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(1449)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1449)
				{
					HX_STACK_LINE(1449)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1449)
					if ((_this->_immutable)){
						HX_STACK_LINE(1449)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1449)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1449)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1449)
				if ((vector->zpp_inner->_inuse)){
					HX_STACK_LINE(1449)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1449)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1449)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1449)
				vector->zpp_inner = null();
				HX_STACK_LINE(1449)
				{
					HX_STACK_LINE(1449)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1449)
					o->zpp_pool = null();
					HX_STACK_LINE(1449)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1449)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1449)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1449)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1449)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1449)
				{
					HX_STACK_LINE(1449)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1449)
					{
						HX_STACK_LINE(1449)
						if (((o->outer != null()))){
							HX_STACK_LINE(1449)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1449)
							o->outer = null();
						}
						HX_STACK_LINE(1449)
						o->_isimmutable = null();
						HX_STACK_LINE(1449)
						o->_validate = null();
						HX_STACK_LINE(1449)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1449)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1449)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1450)
			true;
		}
		else{
			HX_STACK_LINE(1452)
			false;
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( Float &tempy,Float &tempx,bool &weak){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1456);
				{
					HX_STACK_LINE(1456)
					if (((bool((tempx != tempx)) || bool((tempy != tempy))))){
						HX_STACK_LINE(1456)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1456)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1456)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1456)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1456)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1456)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1456)
						ret->zpp_pool = null();
						HX_STACK_LINE(1456)
						ret->zpp_disp = false;
						HX_STACK_LINE(1456)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1456)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1456)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &tempy,Float &tempx){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1456);
								{
									HX_STACK_LINE(1456)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1456)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1456)
									{
										HX_STACK_LINE(1456)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1456)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1456)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1456)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1456)
											ret1->next = null();
										}
										HX_STACK_LINE(1456)
										ret1->weak = false;
									}
									HX_STACK_LINE(1456)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1456)
									{
										HX_STACK_LINE(1456)
										ret1->x = tempx;
										HX_STACK_LINE(1456)
										ret1->y = tempy;
										HX_STACK_LINE(1456)
										{
										}
									}
									HX_STACK_LINE(1456)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1456)
						ret->zpp_inner = _Function_3_1::Block(tempy,tempx);
						HX_STACK_LINE(1456)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1456)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1456)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1456)
						{
							HX_STACK_LINE(1456)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1456)
							if ((_this->_immutable)){
								HX_STACK_LINE(1456)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1456)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1456)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1456)
						if (((bool((tempx != tempx)) || bool((tempy != tempy))))){
							HX_STACK_LINE(1456)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1456);
								{
									HX_STACK_LINE(1456)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1456)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1456)
									{
										HX_STACK_LINE(1456)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1456)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1456)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1456)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1456);
								{
									HX_STACK_LINE(1456)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1456)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1456)
									{
										HX_STACK_LINE(1456)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1456)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1456)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1456)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1456)
						if ((!(((bool((_Function_3_1::Block(ret) == tempx)) && bool((_Function_3_2::Block(ret) == tempy))))))){
							HX_STACK_LINE(1456)
							{
								HX_STACK_LINE(1456)
								ret->zpp_inner->x = tempx;
								HX_STACK_LINE(1456)
								ret->zpp_inner->y = tempy;
								HX_STACK_LINE(1456)
								{
								}
							}
							HX_STACK_LINE(1456)
							{
								HX_STACK_LINE(1456)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1456)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1456)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1456)
						ret;
					}
					HX_STACK_LINE(1456)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1456)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1456)
		return _Function_1_1::Block(tempy,tempx,weak);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,worldVectorToLocal,return )

::nape::geom::Vec2 Body_obj::localVectorToWorld( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Body::localVectorToWorld","nape/phys/Body.hx",1388);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1389)
		if (((bool((vector != null())) && bool(vector->zpp_disp)))){
			HX_STACK_LINE(1391)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1395)
		if (((vector == null()))){
			HX_STACK_LINE(1395)
			hx::Throw (HX_CSTRING("Error: Cannot transform null Vec2"));
		}
		HX_STACK_LINE(1397)
		{
			HX_STACK_LINE(1397)
			::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1397)
			if ((_this->zip_axis)){
				HX_STACK_LINE(1397)
				_this->zip_axis = false;
				HX_STACK_LINE(1397)
				{
					HX_STACK_LINE(1397)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(1397)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(1397)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1398)
		Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1399)
		Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1400)
		{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1401);
					{
						HX_STACK_LINE(1401)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1401)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1401)
						{
							HX_STACK_LINE(1401)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1401)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1401)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1401)
						return vector->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1401);
					{
						HX_STACK_LINE(1401)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1401)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1401)
						{
							HX_STACK_LINE(1401)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1401)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1401)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1401)
						return vector->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1401)
			tempx = ((this->zpp_inner->axisy * _Function_2_1::Block(vector)) - (this->zpp_inner->axisx * _Function_2_2::Block(vector)));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1402);
					{
						HX_STACK_LINE(1402)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1402)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1402)
						{
							HX_STACK_LINE(1402)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1402)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1402)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1402)
						return vector->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1402);
					{
						HX_STACK_LINE(1402)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1402)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1402)
						{
							HX_STACK_LINE(1402)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1402)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1402)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1402)
						return vector->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1402)
			tempy = ((_Function_2_3::Block(vector) * this->zpp_inner->axisx) + (_Function_2_4::Block(vector) * this->zpp_inner->axisy));
		}
		HX_STACK_LINE(1404)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(1408)
			{
				HX_STACK_LINE(1408)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(1408)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1408)
				{
					HX_STACK_LINE(1408)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1408)
					if ((_this->_immutable)){
						HX_STACK_LINE(1408)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1408)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1408)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1408)
				if ((vector->zpp_inner->_inuse)){
					HX_STACK_LINE(1408)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1408)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1408)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1408)
				vector->zpp_inner = null();
				HX_STACK_LINE(1408)
				{
					HX_STACK_LINE(1408)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1408)
					o->zpp_pool = null();
					HX_STACK_LINE(1408)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1408)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1408)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1408)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1408)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1408)
				{
					HX_STACK_LINE(1408)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1408)
					{
						HX_STACK_LINE(1408)
						if (((o->outer != null()))){
							HX_STACK_LINE(1408)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1408)
							o->outer = null();
						}
						HX_STACK_LINE(1408)
						o->_isimmutable = null();
						HX_STACK_LINE(1408)
						o->_validate = null();
						HX_STACK_LINE(1408)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1408)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1408)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1409)
			true;
		}
		else{
			HX_STACK_LINE(1411)
			false;
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( Float &tempy,Float &tempx,bool &weak){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1415);
				{
					HX_STACK_LINE(1415)
					if (((bool((tempx != tempx)) || bool((tempy != tempy))))){
						HX_STACK_LINE(1415)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1415)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1415)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1415)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1415)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1415)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1415)
						ret->zpp_pool = null();
						HX_STACK_LINE(1415)
						ret->zpp_disp = false;
						HX_STACK_LINE(1415)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1415)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1415)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &tempy,Float &tempx){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1415);
								{
									HX_STACK_LINE(1415)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1415)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1415)
									{
										HX_STACK_LINE(1415)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1415)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1415)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1415)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1415)
											ret1->next = null();
										}
										HX_STACK_LINE(1415)
										ret1->weak = false;
									}
									HX_STACK_LINE(1415)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1415)
									{
										HX_STACK_LINE(1415)
										ret1->x = tempx;
										HX_STACK_LINE(1415)
										ret1->y = tempy;
										HX_STACK_LINE(1415)
										{
										}
									}
									HX_STACK_LINE(1415)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1415)
						ret->zpp_inner = _Function_3_1::Block(tempy,tempx);
						HX_STACK_LINE(1415)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1415)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1415)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1415)
						{
							HX_STACK_LINE(1415)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1415)
							if ((_this->_immutable)){
								HX_STACK_LINE(1415)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1415)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1415)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1415)
						if (((bool((tempx != tempx)) || bool((tempy != tempy))))){
							HX_STACK_LINE(1415)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1415);
								{
									HX_STACK_LINE(1415)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1415)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1415)
									{
										HX_STACK_LINE(1415)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1415)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1415)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1415)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1415);
								{
									HX_STACK_LINE(1415)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1415)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1415)
									{
										HX_STACK_LINE(1415)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1415)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1415)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1415)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1415)
						if ((!(((bool((_Function_3_1::Block(ret) == tempx)) && bool((_Function_3_2::Block(ret) == tempy))))))){
							HX_STACK_LINE(1415)
							{
								HX_STACK_LINE(1415)
								ret->zpp_inner->x = tempx;
								HX_STACK_LINE(1415)
								ret->zpp_inner->y = tempy;
								HX_STACK_LINE(1415)
								{
								}
							}
							HX_STACK_LINE(1415)
							{
								HX_STACK_LINE(1415)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1415)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1415)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1415)
						ret;
					}
					HX_STACK_LINE(1415)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1415)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1415)
		return _Function_1_1::Block(tempy,tempx,weak);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,localVectorToWorld,return )

::nape::geom::Vec2 Body_obj::worldPointToLocal( ::nape::geom::Vec2 point,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Body::worldPointToLocal","nape/phys/Body.hx",1341);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1342)
		if (((bool((point != null())) && bool(point->zpp_disp)))){
			HX_STACK_LINE(1344)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1348)
		if (((point == null()))){
			HX_STACK_LINE(1348)
			hx::Throw (HX_CSTRING("Error: Cannot transform null Vec2"));
		}
		HX_STACK_LINE(1350)
		{
			HX_STACK_LINE(1350)
			::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1350)
			if ((_this->zip_axis)){
				HX_STACK_LINE(1350)
				_this->zip_axis = false;
				HX_STACK_LINE(1350)
				{
					HX_STACK_LINE(1350)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(1350)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(1350)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1351)
		Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1352)
		Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1353)
		Float pointx = 0.0;		HX_STACK_VAR(pointx,"pointx");
		HX_STACK_LINE(1354)
		Float pointy = 0.0;		HX_STACK_VAR(pointy,"pointy");
		HX_STACK_LINE(1355)
		{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1356);
					{
						HX_STACK_LINE(1356)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(1356)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1356)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1356)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1356)
						return point->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(1356)
			pointx = (_Function_2_1::Block(point) - this->zpp_inner->posx);
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1357);
					{
						HX_STACK_LINE(1357)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(1357)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1357)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1357)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1357)
						return point->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1357)
			pointy = (_Function_2_2::Block(point) - this->zpp_inner->posy);
		}
		HX_STACK_LINE(1359)
		{
			HX_STACK_LINE(1360)
			tempx = ((pointx * this->zpp_inner->axisy) + (pointy * this->zpp_inner->axisx));
			HX_STACK_LINE(1361)
			tempy = ((pointy * this->zpp_inner->axisy) - (pointx * this->zpp_inner->axisx));
		}
		HX_STACK_LINE(1363)
		if ((point->zpp_inner->weak)){
			HX_STACK_LINE(1367)
			{
				HX_STACK_LINE(1367)
				if (((bool((point != null())) && bool(point->zpp_disp)))){
					HX_STACK_LINE(1367)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1367)
				{
					HX_STACK_LINE(1367)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1367)
					if ((_this->_immutable)){
						HX_STACK_LINE(1367)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1367)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1367)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1367)
				if ((point->zpp_inner->_inuse)){
					HX_STACK_LINE(1367)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1367)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1367)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(1367)
				point->zpp_inner = null();
				HX_STACK_LINE(1367)
				{
					HX_STACK_LINE(1367)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1367)
					o->zpp_pool = null();
					HX_STACK_LINE(1367)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1367)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1367)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1367)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1367)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1367)
				{
					HX_STACK_LINE(1367)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1367)
					{
						HX_STACK_LINE(1367)
						if (((o->outer != null()))){
							HX_STACK_LINE(1367)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1367)
							o->outer = null();
						}
						HX_STACK_LINE(1367)
						o->_isimmutable = null();
						HX_STACK_LINE(1367)
						o->_validate = null();
						HX_STACK_LINE(1367)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1367)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1367)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1368)
			true;
		}
		else{
			HX_STACK_LINE(1370)
			false;
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( Float &tempy,Float &tempx,bool &weak){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1374);
				{
					HX_STACK_LINE(1374)
					if (((bool((tempx != tempx)) || bool((tempy != tempy))))){
						HX_STACK_LINE(1374)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1374)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1374)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1374)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1374)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1374)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1374)
						ret->zpp_pool = null();
						HX_STACK_LINE(1374)
						ret->zpp_disp = false;
						HX_STACK_LINE(1374)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1374)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1374)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &tempy,Float &tempx){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1374);
								{
									HX_STACK_LINE(1374)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1374)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1374)
									{
										HX_STACK_LINE(1374)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1374)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1374)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1374)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1374)
											ret1->next = null();
										}
										HX_STACK_LINE(1374)
										ret1->weak = false;
									}
									HX_STACK_LINE(1374)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1374)
									{
										HX_STACK_LINE(1374)
										ret1->x = tempx;
										HX_STACK_LINE(1374)
										ret1->y = tempy;
										HX_STACK_LINE(1374)
										{
										}
									}
									HX_STACK_LINE(1374)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1374)
						ret->zpp_inner = _Function_3_1::Block(tempy,tempx);
						HX_STACK_LINE(1374)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1374)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1374)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1374)
						{
							HX_STACK_LINE(1374)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1374)
							if ((_this->_immutable)){
								HX_STACK_LINE(1374)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1374)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1374)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1374)
						if (((bool((tempx != tempx)) || bool((tempy != tempy))))){
							HX_STACK_LINE(1374)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1374);
								{
									HX_STACK_LINE(1374)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1374)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1374)
									{
										HX_STACK_LINE(1374)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1374)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1374)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1374)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1374);
								{
									HX_STACK_LINE(1374)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1374)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1374)
									{
										HX_STACK_LINE(1374)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1374)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1374)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1374)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1374)
						if ((!(((bool((_Function_3_1::Block(ret) == tempx)) && bool((_Function_3_2::Block(ret) == tempy))))))){
							HX_STACK_LINE(1374)
							{
								HX_STACK_LINE(1374)
								ret->zpp_inner->x = tempx;
								HX_STACK_LINE(1374)
								ret->zpp_inner->y = tempy;
								HX_STACK_LINE(1374)
								{
								}
							}
							HX_STACK_LINE(1374)
							{
								HX_STACK_LINE(1374)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1374)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1374)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1374)
						ret;
					}
					HX_STACK_LINE(1374)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1374)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1374)
		return _Function_1_1::Block(tempy,tempx,weak);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,worldPointToLocal,return )

::nape::geom::Vec2 Body_obj::localPointToWorld( ::nape::geom::Vec2 point,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Body::localPointToWorld","nape/phys/Body.hx",1301);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1302)
		if (((bool((point != null())) && bool(point->zpp_disp)))){
			HX_STACK_LINE(1304)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1308)
		if (((point == null()))){
			HX_STACK_LINE(1308)
			hx::Throw (HX_CSTRING("Error: Cannot transform null Vec2"));
		}
		HX_STACK_LINE(1310)
		{
			HX_STACK_LINE(1310)
			::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1310)
			if ((_this->zip_axis)){
				HX_STACK_LINE(1310)
				_this->zip_axis = false;
				HX_STACK_LINE(1310)
				{
					HX_STACK_LINE(1310)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(1310)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(1310)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1311)
		Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1312)
		Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1313)
		{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1314);
					{
						HX_STACK_LINE(1314)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(1314)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1314)
						{
							HX_STACK_LINE(1314)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1314)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1314)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1314)
						return point->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1314);
					{
						HX_STACK_LINE(1314)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(1314)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1314)
						{
							HX_STACK_LINE(1314)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1314)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1314)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1314)
						return point->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1314)
			tempx = ((this->zpp_inner->axisy * _Function_2_1::Block(point)) - (this->zpp_inner->axisx * _Function_2_2::Block(point)));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1315);
					{
						HX_STACK_LINE(1315)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(1315)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1315)
						{
							HX_STACK_LINE(1315)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1315)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1315)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1315)
						return point->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1315);
					{
						HX_STACK_LINE(1315)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(1315)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1315)
						{
							HX_STACK_LINE(1315)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1315)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1315)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1315)
						return point->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1315)
			tempy = ((_Function_2_3::Block(point) * this->zpp_inner->axisx) + (_Function_2_4::Block(point) * this->zpp_inner->axisy));
		}
		HX_STACK_LINE(1317)
		if ((point->zpp_inner->weak)){
			HX_STACK_LINE(1321)
			{
				HX_STACK_LINE(1321)
				if (((bool((point != null())) && bool(point->zpp_disp)))){
					HX_STACK_LINE(1321)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1321)
				{
					HX_STACK_LINE(1321)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1321)
					if ((_this->_immutable)){
						HX_STACK_LINE(1321)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1321)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1321)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1321)
				if ((point->zpp_inner->_inuse)){
					HX_STACK_LINE(1321)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1321)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1321)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(1321)
				point->zpp_inner = null();
				HX_STACK_LINE(1321)
				{
					HX_STACK_LINE(1321)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1321)
					o->zpp_pool = null();
					HX_STACK_LINE(1321)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1321)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1321)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1321)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1321)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1321)
				{
					HX_STACK_LINE(1321)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1321)
					{
						HX_STACK_LINE(1321)
						if (((o->outer != null()))){
							HX_STACK_LINE(1321)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1321)
							o->outer = null();
						}
						HX_STACK_LINE(1321)
						o->_isimmutable = null();
						HX_STACK_LINE(1321)
						o->_validate = null();
						HX_STACK_LINE(1321)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1321)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1321)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1322)
			true;
		}
		else{
			HX_STACK_LINE(1324)
			false;
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this,Float &tempy,Float &tempx,bool &weak){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1328);
				{
					HX_STACK_LINE(1328)
					Float x = (tempx + __this->zpp_inner->posx);		HX_STACK_VAR(x,"x");
					Float y = (tempy + __this->zpp_inner->posy);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1328)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1328)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1328)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1328)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1328)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1328)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1328)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1328)
						ret->zpp_pool = null();
						HX_STACK_LINE(1328)
						ret->zpp_disp = false;
						HX_STACK_LINE(1328)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1328)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1328)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1328);
								{
									HX_STACK_LINE(1328)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1328)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1328)
									{
										HX_STACK_LINE(1328)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1328)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1328)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1328)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1328)
											ret1->next = null();
										}
										HX_STACK_LINE(1328)
										ret1->weak = false;
									}
									HX_STACK_LINE(1328)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1328)
									{
										HX_STACK_LINE(1328)
										ret1->x = x;
										HX_STACK_LINE(1328)
										ret1->y = y;
										HX_STACK_LINE(1328)
										{
										}
									}
									HX_STACK_LINE(1328)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1328)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(1328)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1328)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1328)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1328)
						{
							HX_STACK_LINE(1328)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1328)
							if ((_this->_immutable)){
								HX_STACK_LINE(1328)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1328)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1328)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1328)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1328)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1328);
								{
									HX_STACK_LINE(1328)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1328)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1328)
									{
										HX_STACK_LINE(1328)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1328)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1328)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1328)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1328);
								{
									HX_STACK_LINE(1328)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1328)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1328)
									{
										HX_STACK_LINE(1328)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1328)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1328)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1328)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1328)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(1328)
							{
								HX_STACK_LINE(1328)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1328)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1328)
								{
								}
							}
							HX_STACK_LINE(1328)
							{
								HX_STACK_LINE(1328)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1328)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1328)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1328)
						ret;
					}
					HX_STACK_LINE(1328)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1328)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1328)
		return _Function_1_1::Block(this,tempy,tempx,weak);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,localPointToWorld,return )

Float Body_obj::crushFactor( ){
	HX_STACK_PUSH("Body::crushFactor","nape/phys/Body.hx",1264);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1266)
	if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) == null()))){
		HX_STACK_LINE(1266)
		hx::Throw (HX_CSTRING("Error: Makes no sense to see how much an object not taking part in a simulation is being crushed"));
	}
	HX_STACK_LINE(1268)
	Float msum = 0.0;		HX_STACK_VAR(msum,"msum");
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1269);
			{
				HX_STACK_LINE(1269)
				Float x = (int)0;		HX_STACK_VAR(x,"x");
				Float y = (int)0;		HX_STACK_VAR(y,"y");
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1269)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(1269)
					hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				HX_STACK_LINE(1269)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1269)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(1269)
					ret = ::nape::geom::Vec2_obj::__new(null(),null());
				}
				else{
					HX_STACK_LINE(1269)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1269)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1269)
					ret->zpp_pool = null();
					HX_STACK_LINE(1269)
					ret->zpp_disp = false;
					HX_STACK_LINE(1269)
					if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
						HX_STACK_LINE(1269)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
				HX_STACK_LINE(1269)
				if (((ret->zpp_inner == null()))){
					struct _Function_3_1{
						inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1269);
							{
								HX_STACK_LINE(1269)
								bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
								HX_STACK_LINE(1269)
								::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1269)
								{
									HX_STACK_LINE(1269)
									if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
										HX_STACK_LINE(1269)
										ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
									}
									else{
										HX_STACK_LINE(1269)
										ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1269)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
										HX_STACK_LINE(1269)
										ret1->next = null();
									}
									HX_STACK_LINE(1269)
									ret1->weak = false;
								}
								HX_STACK_LINE(1269)
								ret1->_immutable = immutable;
								HX_STACK_LINE(1269)
								{
									HX_STACK_LINE(1269)
									ret1->x = x;
									HX_STACK_LINE(1269)
									ret1->y = y;
									HX_STACK_LINE(1269)
									{
									}
								}
								HX_STACK_LINE(1269)
								return ret1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1269)
					ret->zpp_inner = _Function_3_1::Block(x,y);
					HX_STACK_LINE(1269)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1269)
					if (((bool((ret != null())) && bool(ret->zpp_disp)))){
						HX_STACK_LINE(1269)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1269)
					{
						HX_STACK_LINE(1269)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1269)
						if ((_this->_immutable)){
							HX_STACK_LINE(1269)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(1269)
						if (((_this->_isimmutable != null()))){
							HX_STACK_LINE(1269)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1269)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1269)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1269);
							{
								HX_STACK_LINE(1269)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(1269)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1269)
								{
									HX_STACK_LINE(1269)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1269)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1269)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1269)
								return ret->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1269);
							{
								HX_STACK_LINE(1269)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(1269)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1269)
								{
									HX_STACK_LINE(1269)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1269)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1269)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1269)
								return ret->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1269)
					if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
						HX_STACK_LINE(1269)
						{
							HX_STACK_LINE(1269)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(1269)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(1269)
							{
							}
						}
						HX_STACK_LINE(1269)
						{
							HX_STACK_LINE(1269)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1269)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(1269)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(1269)
					ret;
				}
				HX_STACK_LINE(1269)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1269)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1269)
	::nape::geom::Vec2 jsum = _Function_1_1::Block();		HX_STACK_VAR(jsum,"jsum");
	struct _Function_1_2{
		inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1270);
			{
				HX_STACK_LINE(1270)
				if (((__this->zpp_inner->wrap_arbiters == null()))){
					HX_STACK_LINE(1270)
					__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
				}
				HX_STACK_LINE(1270)
				return __this->zpp_inner->wrap_arbiters;
			}
			return null();
		}
	};
	HX_STACK_LINE(1270)
	for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_1_2::Block(this))->iterator());  __it->hasNext(); ){
		::nape::dynamics::Arbiter arb = __it->next();
		{
			HX_STACK_LINE(1271)
			::nape::geom::Vec3 imp3 = arb->totalImpulse(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(imp3,"imp3");
			HX_STACK_LINE(1272)
			::nape::geom::Vec2 imp = imp3->xy(null());		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(1273)
			jsum->addeq(imp);
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &imp){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1274);
					{
						HX_STACK_LINE(1274)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(1274)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1274);
								{
									HX_STACK_LINE(1274)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1274)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1274)
									{
										HX_STACK_LINE(1274)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1274)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1274)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1274)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1274);
								{
									HX_STACK_LINE(1274)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1274)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1274)
									{
										HX_STACK_LINE(1274)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1274)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1274)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1274)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_3{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1274);
								{
									HX_STACK_LINE(1274)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1274)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1274)
									{
										HX_STACK_LINE(1274)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1274)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1274)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1274)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						struct _Function_3_4{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1274);
								{
									HX_STACK_LINE(1274)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1274)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1274)
									{
										HX_STACK_LINE(1274)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1274)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1274)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1274)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1274)
						return ::Math_obj::sqrt(((_Function_3_1::Block(imp) * _Function_3_2::Block(imp)) + (_Function_3_3::Block(imp) * _Function_3_4::Block(imp))));
					}
					return null();
				}
			};
			HX_STACK_LINE(1274)
			hx::AddEq(msum,_Function_2_1::Block(imp));
			HX_STACK_LINE(1275)
			{
				HX_STACK_LINE(1275)
				if (((bool((imp != null())) && bool(imp->zpp_disp)))){
					HX_STACK_LINE(1275)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1275)
				{
					HX_STACK_LINE(1275)
					::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1275)
					if ((_this->_immutable)){
						HX_STACK_LINE(1275)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1275)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1275)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1275)
				if ((imp->zpp_inner->_inuse)){
					HX_STACK_LINE(1275)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1275)
				::zpp_nape::geom::ZPP_Vec2 inner = imp->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1275)
				imp->zpp_inner->outer = null();
				HX_STACK_LINE(1275)
				imp->zpp_inner = null();
				HX_STACK_LINE(1275)
				{
					HX_STACK_LINE(1275)
					::nape::geom::Vec2 o = imp;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1275)
					o->zpp_pool = null();
					HX_STACK_LINE(1275)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1275)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1275)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1275)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1275)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1275)
				{
					HX_STACK_LINE(1275)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1275)
					{
						HX_STACK_LINE(1275)
						if (((o->outer != null()))){
							HX_STACK_LINE(1275)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1275)
							o->outer = null();
						}
						HX_STACK_LINE(1275)
						o->_isimmutable = null();
						HX_STACK_LINE(1275)
						o->_validate = null();
						HX_STACK_LINE(1275)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1275)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1275)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1276)
			imp3->dispose();
		}
;
	}
	struct _Function_1_3{
		inline static Dynamic Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1278);
			{
				struct _Function_2_1{
					inline static ::nape::constraint::ConstraintList Block( ::nape::phys::Body_obj *__this){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1278);
						{
							HX_STACK_LINE(1278)
							if (((__this->zpp_inner->wrap_constraints == null()))){
								HX_STACK_LINE(1278)
								__this->zpp_inner->wrap_constraints = ::zpp_nape::util::ZPP_ConstraintList_obj::get(__this->zpp_inner->constraints,true);
							}
							HX_STACK_LINE(1278)
							return __this->zpp_inner->wrap_constraints;
						}
						return null();
					}
				};
				HX_STACK_LINE(1278)
				::nape::constraint::ConstraintList _this = _Function_2_1::Block(__this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1278)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(1278)
				return ::nape::constraint::ConstraintIterator_obj::get(_this);
			}
			return null();
		}
	};
	HX_STACK_LINE(1278)
	for(::cpp::FastIterator_obj< ::nape::constraint::Constraint > *__it = ::cpp::CreateFastIterator< ::nape::constraint::Constraint >(_Function_1_3::Block(this));  __it->hasNext(); ){
		::nape::constraint::Constraint con = __it->next();
		{
			HX_STACK_LINE(1279)
			::nape::geom::Vec3 imp3 = con->bodyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp3,"imp3");
			HX_STACK_LINE(1280)
			::nape::geom::Vec2 imp = imp3->xy(null());		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(1281)
			jsum->addeq(imp);
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &imp){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1282);
					{
						HX_STACK_LINE(1282)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(1282)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1282);
								{
									HX_STACK_LINE(1282)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1282)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1282)
									{
										HX_STACK_LINE(1282)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1282)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1282)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1282)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1282);
								{
									HX_STACK_LINE(1282)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1282)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1282)
									{
										HX_STACK_LINE(1282)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1282)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1282)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1282)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_3{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1282);
								{
									HX_STACK_LINE(1282)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1282)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1282)
									{
										HX_STACK_LINE(1282)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1282)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1282)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1282)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						struct _Function_3_4{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1282);
								{
									HX_STACK_LINE(1282)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1282)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1282)
									{
										HX_STACK_LINE(1282)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1282)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1282)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1282)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1282)
						return ::Math_obj::sqrt(((_Function_3_1::Block(imp) * _Function_3_2::Block(imp)) + (_Function_3_3::Block(imp) * _Function_3_4::Block(imp))));
					}
					return null();
				}
			};
			HX_STACK_LINE(1282)
			hx::AddEq(msum,_Function_2_1::Block(imp));
			HX_STACK_LINE(1283)
			{
				HX_STACK_LINE(1283)
				if (((bool((imp != null())) && bool(imp->zpp_disp)))){
					HX_STACK_LINE(1283)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1283)
				{
					HX_STACK_LINE(1283)
					::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1283)
					if ((_this->_immutable)){
						HX_STACK_LINE(1283)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1283)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1283)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1283)
				if ((imp->zpp_inner->_inuse)){
					HX_STACK_LINE(1283)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1283)
				::zpp_nape::geom::ZPP_Vec2 inner = imp->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1283)
				imp->zpp_inner->outer = null();
				HX_STACK_LINE(1283)
				imp->zpp_inner = null();
				HX_STACK_LINE(1283)
				{
					HX_STACK_LINE(1283)
					::nape::geom::Vec2 o = imp;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1283)
					o->zpp_pool = null();
					HX_STACK_LINE(1283)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1283)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1283)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1283)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1283)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1283)
				{
					HX_STACK_LINE(1283)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1283)
					{
						HX_STACK_LINE(1283)
						if (((o->outer != null()))){
							HX_STACK_LINE(1283)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1283)
							o->outer = null();
						}
						HX_STACK_LINE(1283)
						o->_isimmutable = null();
						HX_STACK_LINE(1283)
						o->_validate = null();
						HX_STACK_LINE(1283)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1283)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1283)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1284)
			imp3->dispose();
		}
;
	}
	struct _Function_1_4{
		inline static Float Block( ::nape::geom::Vec2 &jsum){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1286);
			{
				HX_STACK_LINE(1286)
				if (((bool((jsum != null())) && bool(jsum->zpp_disp)))){
					HX_STACK_LINE(1286)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::Vec2 &jsum){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1286);
						{
							HX_STACK_LINE(1286)
							if (((bool((jsum != null())) && bool(jsum->zpp_disp)))){
								HX_STACK_LINE(1286)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1286)
							{
								HX_STACK_LINE(1286)
								::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1286)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1286)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1286)
							return jsum->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static Float Block( ::nape::geom::Vec2 &jsum){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1286);
						{
							HX_STACK_LINE(1286)
							if (((bool((jsum != null())) && bool(jsum->zpp_disp)))){
								HX_STACK_LINE(1286)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1286)
							{
								HX_STACK_LINE(1286)
								::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1286)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1286)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1286)
							return jsum->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static Float Block( ::nape::geom::Vec2 &jsum){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1286);
						{
							HX_STACK_LINE(1286)
							if (((bool((jsum != null())) && bool(jsum->zpp_disp)))){
								HX_STACK_LINE(1286)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1286)
							{
								HX_STACK_LINE(1286)
								::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1286)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1286)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1286)
							return jsum->zpp_inner->y;
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static Float Block( ::nape::geom::Vec2 &jsum){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1286);
						{
							HX_STACK_LINE(1286)
							if (((bool((jsum != null())) && bool(jsum->zpp_disp)))){
								HX_STACK_LINE(1286)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1286)
							{
								HX_STACK_LINE(1286)
								::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1286)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1286)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1286)
							return jsum->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(1286)
				return ::Math_obj::sqrt(((_Function_2_1::Block(jsum) * _Function_2_2::Block(jsum)) + (_Function_2_3::Block(jsum) * _Function_2_4::Block(jsum))));
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static Float Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1286);
			{
				HX_STACK_LINE(1286)
				if ((__this->zpp_inner->world)){
					HX_STACK_LINE(1286)
					hx::Throw (HX_CSTRING("Error: Space::world has no mass"));
				}
				HX_STACK_LINE(1286)
				__this->zpp_inner->validate_mass();
				HX_STACK_LINE(1286)
				if (((bool((__this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((__this->zpp_inner->shapes->head == null()))))){
					HX_STACK_LINE(1286)
					hx::Throw (HX_CSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes"));
				}
				HX_STACK_LINE(1286)
				return __this->zpp_inner->cmass;
			}
			return null();
		}
	};
	HX_STACK_LINE(1286)
	Float ret = (Float(((msum - _Function_1_4::Block(jsum)))) / Float(((_Function_1_5::Block(this) * ((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) ))->zpp_inner->pre_dt))));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1287)
	{
		HX_STACK_LINE(1287)
		if (((bool((jsum != null())) && bool(jsum->zpp_disp)))){
			HX_STACK_LINE(1287)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1287)
		{
			HX_STACK_LINE(1287)
			::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1287)
			if ((_this->_immutable)){
				HX_STACK_LINE(1287)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(1287)
			if (((_this->_isimmutable != null()))){
				HX_STACK_LINE(1287)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1287)
		if ((jsum->zpp_inner->_inuse)){
			HX_STACK_LINE(1287)
			hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
		}
		HX_STACK_LINE(1287)
		::zpp_nape::geom::ZPP_Vec2 inner = jsum->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1287)
		jsum->zpp_inner->outer = null();
		HX_STACK_LINE(1287)
		jsum->zpp_inner = null();
		HX_STACK_LINE(1287)
		{
			HX_STACK_LINE(1287)
			::nape::geom::Vec2 o = jsum;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1287)
			o->zpp_pool = null();
			HX_STACK_LINE(1287)
			if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
				HX_STACK_LINE(1287)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1287)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1287)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(1287)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(1287)
		{
			HX_STACK_LINE(1287)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1287)
			{
				HX_STACK_LINE(1287)
				if (((o->outer != null()))){
					HX_STACK_LINE(1287)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1287)
					o->outer = null();
				}
				HX_STACK_LINE(1287)
				o->_isimmutable = null();
				HX_STACK_LINE(1287)
				o->_validate = null();
				HX_STACK_LINE(1287)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1287)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(1287)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1288)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,crushFactor,return )

::nape::phys::BodyList Body_obj::interactingBodies( ::nape::callbacks::InteractionType type,hx::Null< int >  __o_depth,::nape::phys::BodyList output){
int depth = __o_depth.Default(-1);
	HX_STACK_PUSH("Body::interactingBodies","nape/phys/Body.hx",1242);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(depth,"depth");
	HX_STACK_ARG(output,"output");
{
		struct _Function_1_1{
			inline static ::nape::callbacks::InteractionType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1246);
				{
					HX_STACK_LINE(1246)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
						HX_STACK_LINE(1246)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(1246)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
						HX_STACK_LINE(1246)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(1246)
					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::nape::callbacks::InteractionType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1246);
				{
					HX_STACK_LINE(1246)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
						HX_STACK_LINE(1246)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(1246)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
						HX_STACK_LINE(1246)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(1246)
					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				return null();
			}
		};
		HX_STACK_LINE(1243)
		int arbiter_type = (  (((type == null()))) ? int((int((int(::zpp_nape::dynamics::ZPP_Arbiter_obj::COL) | int(::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR))) | int(::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))) : int((  (((type == _Function_1_1::Block()))) ? int(::zpp_nape::dynamics::ZPP_Arbiter_obj::COL) : int((  (((type == _Function_1_2::Block()))) ? int(::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR) : int(::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID) )) )) );		HX_STACK_VAR(arbiter_type,"arbiter_type");
		HX_STACK_LINE(1247)
		return this->zpp_inner->interactingBodies(arbiter_type,depth,output);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Body_obj,interactingBodies,return )

::nape::phys::BodyList Body_obj::connectedBodies( hx::Null< int >  __o_depth,::nape::phys::BodyList output){
int depth = __o_depth.Default(-1);
	HX_STACK_PUSH("Body::connectedBodies","nape/phys/Body.hx",1224);
	HX_STACK_THIS(this);
	HX_STACK_ARG(depth,"depth");
	HX_STACK_ARG(output,"output");
{
		HX_STACK_LINE(1224)
		return this->zpp_inner->connectedBodies(depth,output);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,connectedBodies,return )

Float Body_obj::set_inertia( Float inertia){
	HX_STACK_PUSH("Body::set_inertia","nape/phys/Body.hx",1190);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inertia,"inertia");
	HX_STACK_LINE(1191)
	{
		HX_STACK_LINE(1192)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::inertia"));
		HX_STACK_LINE(1194)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1194)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1197)
		if (((inertia != inertia))){
			HX_STACK_LINE(1197)
			hx::Throw (HX_CSTRING("Error: Inertia cannot be NaN"));
		}
		HX_STACK_LINE(1198)
		if (((inertia <= (int)0))){
			HX_STACK_LINE(1198)
			hx::Throw (HX_CSTRING("Error: Inertia must be strictly positive"));
		}
		HX_STACK_LINE(1199)
		if (((inertia >= ::Math_obj::POSITIVE_INFINITY))){
			HX_STACK_LINE(1199)
			hx::Throw (HX_CSTRING("Error: Inertia cannot be infinite, use allowRotation = false instead"));
		}
		HX_STACK_LINE(1201)
		this->zpp_inner->inertiaMode = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_FIXED;
		HX_STACK_LINE(1202)
		this->zpp_inner->cinertia = inertia;
		HX_STACK_LINE(1203)
		this->zpp_inner->invalidate_inertia();
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1205);
			{
				HX_STACK_LINE(1205)
				if ((__this->zpp_inner->world)){
					HX_STACK_LINE(1205)
					hx::Throw (HX_CSTRING("Error: Space::world has no inertia"));
				}
				HX_STACK_LINE(1205)
				__this->zpp_inner->validate_inertia();
				struct _Function_2_1{
					inline static bool Block( ::nape::phys::Body_obj *__this){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1205);
						{
							HX_STACK_LINE(1205)
							::nape::shape::ShapeList _this = __this->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1205)
							return (_this->zpp_inner->inner->head == null());
						}
						return null();
					}
				};
				HX_STACK_LINE(1205)
				if (((bool((__this->zpp_inner->inertiaMode == ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT)) && bool(_Function_2_1::Block(__this))))){
					HX_STACK_LINE(1205)
					hx::Throw (HX_CSTRING("Error: Given current inertia mode flag, Body::inertia only makes sense if Body contains Shapes"));
				}
				HX_STACK_LINE(1205)
				return __this->zpp_inner->cinertia;
			}
			return null();
		}
	};
	HX_STACK_LINE(1205)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_inertia,return )

Float Body_obj::get_inertia( ){
	HX_STACK_PUSH("Body::get_inertia","nape/phys/Body.hx",1180);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1182)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1182)
		hx::Throw (HX_CSTRING("Error: Space::world has no inertia"));
	}
	HX_STACK_LINE(1184)
	this->zpp_inner->validate_inertia();
	struct _Function_1_1{
		inline static bool Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1186);
			{
				HX_STACK_LINE(1186)
				::nape::shape::ShapeList _this = __this->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1186)
				return (_this->zpp_inner->inner->head == null());
			}
			return null();
		}
	};
	HX_STACK_LINE(1186)
	if (((bool((this->zpp_inner->inertiaMode == ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT)) && bool(_Function_1_1::Block(this))))){
		HX_STACK_LINE(1186)
		hx::Throw (HX_CSTRING("Error: Given current inertia mode flag, Body::inertia only makes sense if Body contains Shapes"));
	}
	HX_STACK_LINE(1188)
	return this->zpp_inner->cinertia;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_inertia,return )

Float Body_obj::get_constraintInertia( ){
	HX_STACK_PUSH("Body::get_constraintInertia","nape/phys/Body.hx",1169);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1170)
	if ((!(this->zpp_inner->world))){
		HX_STACK_LINE(1170)
		this->zpp_inner->validate_inertia();
	}
	HX_STACK_LINE(1171)
	return this->zpp_inner->sinertia;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraintInertia,return )

::nape::phys::InertiaMode Body_obj::set_inertiaMode( ::nape::phys::InertiaMode inertiaMode){
	HX_STACK_PUSH("Body::set_inertiaMode","nape/phys/Body.hx",1146);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inertiaMode,"inertiaMode");
	HX_STACK_LINE(1147)
	{
		HX_STACK_LINE(1148)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::inertiaMode"));
		HX_STACK_LINE(1150)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1150)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1153)
		if (((inertiaMode == null()))){
			HX_STACK_LINE(1153)
			hx::Throw (HX_CSTRING("Error: Cannot use null InertiaMode"));
		}
		struct _Function_2_1{
			inline static ::nape::phys::InertiaMode Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1155);
				{
					HX_STACK_LINE(1155)
					if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
						HX_STACK_LINE(1155)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(1155)
						::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = ::nape::phys::InertiaMode_obj::__new();
						HX_STACK_LINE(1155)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(1155)
					return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
				}
				return null();
			}
		};
		HX_STACK_LINE(1155)
		this->zpp_inner->inertiaMode = (  (((inertiaMode == _Function_2_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_FIXED) : int(::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT) );
		HX_STACK_LINE(1156)
		this->zpp_inner->invalidate_inertia();
	}
	struct _Function_1_1{
		inline static ::nape::phys::InertiaMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1158);
			{
				HX_STACK_LINE(1158)
				if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT == null()))){
					HX_STACK_LINE(1158)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1158)
					::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT = ::nape::phys::InertiaMode_obj::__new();
					HX_STACK_LINE(1158)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1158)
				return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::InertiaMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1158);
			{
				HX_STACK_LINE(1158)
				if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
					HX_STACK_LINE(1158)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1158)
					::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = ::nape::phys::InertiaMode_obj::__new();
					HX_STACK_LINE(1158)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1158)
				return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
			}
			return null();
		}
	};
	HX_STACK_LINE(1158)
	return Array_obj< ::Dynamic >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block())->__get(this->zpp_inner->inertiaMode).StaticCast< ::nape::phys::InertiaMode >();
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_inertiaMode,return )

::nape::phys::InertiaMode Body_obj::get_inertiaMode( ){
	HX_STACK_PUSH("Body::get_inertiaMode","nape/phys/Body.hx",1143);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::phys::InertiaMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1144);
			{
				HX_STACK_LINE(1144)
				if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT == null()))){
					HX_STACK_LINE(1144)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1144)
					::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT = ::nape::phys::InertiaMode_obj::__new();
					HX_STACK_LINE(1144)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1144)
				return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::InertiaMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1144);
			{
				HX_STACK_LINE(1144)
				if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
					HX_STACK_LINE(1144)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1144)
					::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = ::nape::phys::InertiaMode_obj::__new();
					HX_STACK_LINE(1144)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1144)
				return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
			}
			return null();
		}
	};
	HX_STACK_LINE(1143)
	return Array_obj< ::Dynamic >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block())->__get(this->zpp_inner->inertiaMode).StaticCast< ::nape::phys::InertiaMode >();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_inertiaMode,return )

Float Body_obj::set_gravMassScale( Float gravMassScale){
	HX_STACK_PUSH("Body::set_gravMassScale","nape/phys/Body.hx",1119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(gravMassScale,"gravMassScale");
	HX_STACK_LINE(1120)
	{
		HX_STACK_LINE(1121)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::gravMassScale"));
		HX_STACK_LINE(1123)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1123)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1126)
		if (((gravMassScale != gravMassScale))){
			HX_STACK_LINE(1126)
			hx::Throw (HX_CSTRING("Error: gravMassScale cannot be NaN"));
		}
		HX_STACK_LINE(1128)
		this->zpp_inner->gravMassMode = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED;
		HX_STACK_LINE(1129)
		this->zpp_inner->gravMassScale = gravMassScale;
		HX_STACK_LINE(1130)
		this->zpp_inner->invalidate_gravMassScale();
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1132);
			{
				HX_STACK_LINE(1132)
				__this->zpp_inner->validate_gravMassScale();
				HX_STACK_LINE(1132)
				if (((__this->zpp_inner->shapes->head == null()))){
					HX_STACK_LINE(1132)
					if (((bool((__this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((__this->zpp_inner->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))))){
						HX_STACK_LINE(1132)
						hx::Throw (HX_CSTRING("Error: Given current mass/gravMass modes; Body::gravMassScale only makes sense if it contains Shapes"));
					}
				}
				HX_STACK_LINE(1132)
				return __this->zpp_inner->gravMassScale;
			}
			return null();
		}
	};
	HX_STACK_LINE(1132)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_gravMassScale,return )

Float Body_obj::get_gravMassScale( ){
	HX_STACK_PUSH("Body::get_gravMassScale","nape/phys/Body.hx",1110);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1111)
	this->zpp_inner->validate_gravMassScale();
	HX_STACK_LINE(1113)
	if (((this->zpp_inner->shapes->head == null()))){
		HX_STACK_LINE(1113)
		if (((bool((this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((this->zpp_inner->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))))){
			HX_STACK_LINE(1114)
			hx::Throw (HX_CSTRING("Error: Given current mass/gravMass modes; Body::gravMassScale only makes sense if it contains Shapes"));
		}
	}
	HX_STACK_LINE(1117)
	return this->zpp_inner->gravMassScale;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_gravMassScale,return )

Float Body_obj::set_gravMass( Float gravMass){
	HX_STACK_PUSH("Body::set_gravMass","nape/phys/Body.hx",1085);
	HX_STACK_THIS(this);
	HX_STACK_ARG(gravMass,"gravMass");
	HX_STACK_LINE(1086)
	{
		HX_STACK_LINE(1087)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::gravMass"));
		HX_STACK_LINE(1089)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1089)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1092)
		if (((gravMass != gravMass))){
			HX_STACK_LINE(1092)
			hx::Throw (HX_CSTRING("Error: gravMass cannot be NaN"));
		}
		HX_STACK_LINE(1094)
		this->zpp_inner->gravMassMode = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED;
		HX_STACK_LINE(1095)
		this->zpp_inner->gravMass = gravMass;
		HX_STACK_LINE(1096)
		this->zpp_inner->invalidate_gravMass();
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1098);
			{
				HX_STACK_LINE(1098)
				if ((__this->zpp_inner->world)){
					HX_STACK_LINE(1098)
					hx::Throw (HX_CSTRING("Error: Space::world has no gravMass"));
				}
				HX_STACK_LINE(1098)
				__this->zpp_inner->validate_gravMass();
				HX_STACK_LINE(1098)
				if (((__this->zpp_inner->shapes->head == null()))){
					HX_STACK_LINE(1098)
					if (((bool((__this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((__this->zpp_inner->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED))))){
						HX_STACK_LINE(1098)
						hx::Throw (HX_CSTRING("Error: Given current mass/gravMass modes; Body::gravMass only makes sense if it contains Shapes"));
					}
				}
				HX_STACK_LINE(1098)
				return __this->zpp_inner->gravMass;
			}
			return null();
		}
	};
	HX_STACK_LINE(1098)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_gravMass,return )

Float Body_obj::get_gravMass( ){
	HX_STACK_PUSH("Body::get_gravMass","nape/phys/Body.hx",1073);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1075)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1075)
		hx::Throw (HX_CSTRING("Error: Space::world has no gravMass"));
	}
	HX_STACK_LINE(1077)
	this->zpp_inner->validate_gravMass();
	HX_STACK_LINE(1079)
	if (((this->zpp_inner->shapes->head == null()))){
		HX_STACK_LINE(1079)
		if (((bool((this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((this->zpp_inner->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED))))){
			HX_STACK_LINE(1080)
			hx::Throw (HX_CSTRING("Error: Given current mass/gravMass modes; Body::gravMass only makes sense if it contains Shapes"));
		}
	}
	HX_STACK_LINE(1083)
	return this->zpp_inner->gravMass;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_gravMass,return )

::nape::phys::GravMassMode Body_obj::set_gravMassMode( ::nape::phys::GravMassMode gravMassMode){
	HX_STACK_PUSH("Body::set_gravMassMode","nape/phys/Body.hx",1050);
	HX_STACK_THIS(this);
	HX_STACK_ARG(gravMassMode,"gravMassMode");
	HX_STACK_LINE(1051)
	{
		HX_STACK_LINE(1052)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::gravMassMode"));
		HX_STACK_LINE(1054)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1054)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1057)
		if (((gravMassMode == null()))){
			HX_STACK_LINE(1057)
			hx::Throw (HX_CSTRING("Error: Cannot use null gravMassMode"));
		}
		struct _Function_2_1{
			inline static ::nape::phys::GravMassMode Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1059);
				{
					HX_STACK_LINE(1059)
					if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
						HX_STACK_LINE(1059)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(1059)
						::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = ::nape::phys::GravMassMode_obj::__new();
						HX_STACK_LINE(1059)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(1059)
					return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static ::nape::phys::GravMassMode Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1059);
				{
					HX_STACK_LINE(1059)
					if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
						HX_STACK_LINE(1059)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(1059)
						::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = ::nape::phys::GravMassMode_obj::__new();
						HX_STACK_LINE(1059)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(1059)
					return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
				}
				return null();
			}
		};
		HX_STACK_LINE(1059)
		this->zpp_inner->gravMassMode = (  (((gravMassMode == _Function_2_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED) : int((  (((gravMassMode == _Function_2_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT) : int(::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED) )) );
		HX_STACK_LINE(1060)
		this->zpp_inner->invalidate_gravMass();
	}
	struct _Function_1_1{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1062);
			{
				HX_STACK_LINE(1062)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
					HX_STACK_LINE(1062)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1062)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(1062)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1062)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1062);
			{
				HX_STACK_LINE(1062)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED == null()))){
					HX_STACK_LINE(1062)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1062)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(1062)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1062)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1062);
			{
				HX_STACK_LINE(1062)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
					HX_STACK_LINE(1062)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1062)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(1062)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1062)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
			}
			return null();
		}
	};
	HX_STACK_LINE(1062)
	return Array_obj< ::Dynamic >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block())->__get(this->zpp_inner->massMode).StaticCast< ::nape::phys::GravMassMode >();
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_gravMassMode,return )

::nape::phys::GravMassMode Body_obj::get_gravMassMode( ){
	HX_STACK_PUSH("Body::get_gravMassMode","nape/phys/Body.hx",1047);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1048);
			{
				HX_STACK_LINE(1048)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
					HX_STACK_LINE(1048)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1048)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(1048)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1048)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1048);
			{
				HX_STACK_LINE(1048)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED == null()))){
					HX_STACK_LINE(1048)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1048)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(1048)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1048)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1048);
			{
				HX_STACK_LINE(1048)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
					HX_STACK_LINE(1048)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1048)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(1048)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1048)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
			}
			return null();
		}
	};
	HX_STACK_LINE(1047)
	return Array_obj< ::Dynamic >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block())->__get(this->zpp_inner->massMode).StaticCast< ::nape::phys::GravMassMode >();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_gravMassMode,return )

Float Body_obj::set_mass( Float mass){
	HX_STACK_PUSH("Body::set_mass","nape/phys/Body.hx",1021);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mass,"mass");
	HX_STACK_LINE(1022)
	{
		HX_STACK_LINE(1023)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::mass"));
		HX_STACK_LINE(1025)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1025)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1028)
		if (((mass != mass))){
			HX_STACK_LINE(1028)
			hx::Throw (HX_CSTRING("Error: Mass cannot be NaN"));
		}
		HX_STACK_LINE(1029)
		if (((mass <= (int)0))){
			HX_STACK_LINE(1029)
			hx::Throw (HX_CSTRING("Error: Mass must be strictly positive"));
		}
		HX_STACK_LINE(1030)
		if (((mass >= ::Math_obj::POSITIVE_INFINITY))){
			HX_STACK_LINE(1030)
			hx::Throw (HX_CSTRING("Error: Mass cannot be infinite, use allowMovement = false instead"));
		}
		HX_STACK_LINE(1032)
		this->zpp_inner->massMode = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_FIXED;
		HX_STACK_LINE(1033)
		this->zpp_inner->cmass = mass;
		HX_STACK_LINE(1034)
		this->zpp_inner->invalidate_mass();
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1036);
			{
				HX_STACK_LINE(1036)
				if ((__this->zpp_inner->world)){
					HX_STACK_LINE(1036)
					hx::Throw (HX_CSTRING("Error: Space::world has no mass"));
				}
				HX_STACK_LINE(1036)
				__this->zpp_inner->validate_mass();
				HX_STACK_LINE(1036)
				if (((bool((__this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((__this->zpp_inner->shapes->head == null()))))){
					HX_STACK_LINE(1036)
					hx::Throw (HX_CSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes"));
				}
				HX_STACK_LINE(1036)
				return __this->zpp_inner->cmass;
			}
			return null();
		}
	};
	HX_STACK_LINE(1036)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_mass,return )

Float Body_obj::get_mass( ){
	HX_STACK_PUSH("Body::get_mass","nape/phys/Body.hx",1011);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1013)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1013)
		hx::Throw (HX_CSTRING("Error: Space::world has no mass"));
	}
	HX_STACK_LINE(1015)
	this->zpp_inner->validate_mass();
	HX_STACK_LINE(1017)
	if (((bool((this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((this->zpp_inner->shapes->head == null()))))){
		HX_STACK_LINE(1017)
		hx::Throw (HX_CSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes"));
	}
	HX_STACK_LINE(1019)
	return this->zpp_inner->cmass;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_mass,return )

Float Body_obj::get_constraintMass( ){
	HX_STACK_PUSH("Body::get_constraintMass","nape/phys/Body.hx",993);
	HX_STACK_THIS(this);
	HX_STACK_LINE(994)
	if ((!(this->zpp_inner->world))){
		HX_STACK_LINE(994)
		this->zpp_inner->validate_mass();
	}
	HX_STACK_LINE(995)
	return this->zpp_inner->smass;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraintMass,return )

::nape::phys::MassMode Body_obj::set_massMode( ::nape::phys::MassMode massMode){
	HX_STACK_PUSH("Body::set_massMode","nape/phys/Body.hx",970);
	HX_STACK_THIS(this);
	HX_STACK_ARG(massMode,"massMode");
	HX_STACK_LINE(971)
	{
		HX_STACK_LINE(972)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::massMode"));
		HX_STACK_LINE(974)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(974)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(977)
		if (((massMode == null()))){
			HX_STACK_LINE(977)
			hx::Throw (HX_CSTRING("Error: cannot use null massMode"));
		}
		struct _Function_2_1{
			inline static ::nape::phys::MassMode Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",979);
				{
					HX_STACK_LINE(979)
					if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT == null()))){
						HX_STACK_LINE(979)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(979)
						::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = ::nape::phys::MassMode_obj::__new();
						HX_STACK_LINE(979)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(979)
					return ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
				}
				return null();
			}
		};
		HX_STACK_LINE(979)
		this->zpp_inner->massMode = (  (((massMode == _Function_2_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT) : int(::zpp_nape::util::ZPP_Flags_obj::id_MassMode_FIXED) );
		HX_STACK_LINE(980)
		this->zpp_inner->invalidate_mass();
	}
	struct _Function_1_1{
		inline static ::nape::phys::MassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",982);
			{
				HX_STACK_LINE(982)
				if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT == null()))){
					HX_STACK_LINE(982)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(982)
					::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = ::nape::phys::MassMode_obj::__new();
					HX_STACK_LINE(982)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(982)
				return ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::MassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",982);
			{
				HX_STACK_LINE(982)
				if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED == null()))){
					HX_STACK_LINE(982)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(982)
					::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED = ::nape::phys::MassMode_obj::__new();
					HX_STACK_LINE(982)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(982)
				return ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;
			}
			return null();
		}
	};
	HX_STACK_LINE(982)
	return Array_obj< ::Dynamic >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block())->__get(this->zpp_inner->massMode).StaticCast< ::nape::phys::MassMode >();
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_massMode,return )

::nape::phys::MassMode Body_obj::get_massMode( ){
	HX_STACK_PUSH("Body::get_massMode","nape/phys/Body.hx",967);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::phys::MassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",968);
			{
				HX_STACK_LINE(968)
				if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT == null()))){
					HX_STACK_LINE(968)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(968)
					::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = ::nape::phys::MassMode_obj::__new();
					HX_STACK_LINE(968)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(968)
				return ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::MassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",968);
			{
				HX_STACK_LINE(968)
				if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED == null()))){
					HX_STACK_LINE(968)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(968)
					::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED = ::nape::phys::MassMode_obj::__new();
					HX_STACK_LINE(968)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(968)
				return ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;
			}
			return null();
		}
	};
	HX_STACK_LINE(967)
	return Array_obj< ::Dynamic >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block())->__get(this->zpp_inner->massMode).StaticCast< ::nape::phys::MassMode >();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_massMode,return )

bool Body_obj::set_allowRotation( bool allowRotation){
	HX_STACK_PUSH("Body::set_allowRotation","nape/phys/Body.hx",946);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowRotation,"allowRotation");
	HX_STACK_LINE(947)
	{
		HX_STACK_LINE(948)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Body::") + ::Std_obj::string(allowRotation)));
		HX_STACK_LINE(949)
		if (((!(this->zpp_inner->norotate) != allowRotation))){
			HX_STACK_LINE(950)
			this->zpp_inner->norotate = !(allowRotation);
			HX_STACK_LINE(951)
			this->zpp_inner->invalidate_inertia();
		}
	}
	HX_STACK_LINE(954)
	return !(this->zpp_inner->norotate);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_allowRotation,return )

bool Body_obj::get_allowRotation( ){
	HX_STACK_PUSH("Body::get_allowRotation","nape/phys/Body.hx",943);
	HX_STACK_THIS(this);
	HX_STACK_LINE(943)
	return !(this->zpp_inner->norotate);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_allowRotation,return )

bool Body_obj::set_allowMovement( bool allowMovement){
	HX_STACK_PUSH("Body::set_allowMovement","nape/phys/Body.hx",922);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowMovement,"allowMovement");
	HX_STACK_LINE(923)
	{
		HX_STACK_LINE(924)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Body::") + ::Std_obj::string(allowMovement)));
		HX_STACK_LINE(925)
		if (((!(this->zpp_inner->nomove) != allowMovement))){
			HX_STACK_LINE(926)
			this->zpp_inner->nomove = !(allowMovement);
			HX_STACK_LINE(927)
			this->zpp_inner->invalidate_mass();
		}
	}
	HX_STACK_LINE(930)
	return !(this->zpp_inner->nomove);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_allowMovement,return )

bool Body_obj::get_allowMovement( ){
	HX_STACK_PUSH("Body::get_allowMovement","nape/phys/Body.hx",919);
	HX_STACK_THIS(this);
	HX_STACK_LINE(919)
	return !(this->zpp_inner->nomove);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_allowMovement,return )

::nape::geom::AABB Body_obj::get_bounds( ){
	HX_STACK_PUSH("Body::get_bounds","nape/phys/Body.hx",902);
	HX_STACK_THIS(this);
	HX_STACK_LINE(904)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(904)
		hx::Throw (HX_CSTRING("Error: Space::world has no bounds"));
	}
	HX_STACK_LINE(906)
	return this->zpp_inner->aabb->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_bounds,return )

Float Body_obj::set_torque( Float torque){
	HX_STACK_PUSH("Body::set_torque","nape/phys/Body.hx",873);
	HX_STACK_THIS(this);
	HX_STACK_ARG(torque,"torque");
	HX_STACK_LINE(874)
	{
		HX_STACK_LINE(876)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(876)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(879)
		if ((!(((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(879)
			hx::Throw (HX_CSTRING("Error: Non-dynamic body cannot have torque applied."));
		}
		HX_STACK_LINE(882)
		if (((torque != torque))){
			HX_STACK_LINE(882)
			hx::Throw (HX_CSTRING("Error: Body::torque cannot be NaN"));
		}
		HX_STACK_LINE(884)
		if (((this->zpp_inner->torque != torque))){
			HX_STACK_LINE(885)
			this->zpp_inner->torque = torque;
			HX_STACK_LINE(886)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(889)
	return this->zpp_inner->torque;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_torque,return )

Float Body_obj::get_torque( ){
	HX_STACK_PUSH("Body::get_torque","nape/phys/Body.hx",870);
	HX_STACK_THIS(this);
	HX_STACK_LINE(870)
	return this->zpp_inner->torque;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_torque,return )

Float Body_obj::set_kinAngVel( Float kinAngVel){
	HX_STACK_PUSH("Body::set_kinAngVel","nape/phys/Body.hx",844);
	HX_STACK_THIS(this);
	HX_STACK_ARG(kinAngVel,"kinAngVel");
	HX_STACK_LINE(845)
	{
		HX_STACK_LINE(847)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(847)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(849)
		if (((this->zpp_inner->kinangvel != kinAngVel))){
			HX_STACK_LINE(851)
			if (((kinAngVel != kinAngVel))){
				HX_STACK_LINE(851)
				hx::Throw (HX_CSTRING("Error: Body::kinAngVel cannot be NaN"));
			}
			HX_STACK_LINE(853)
			this->zpp_inner->kinangvel = kinAngVel;
			HX_STACK_LINE(854)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(857)
	return this->zpp_inner->kinangvel;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_kinAngVel,return )

Float Body_obj::get_kinAngVel( ){
	HX_STACK_PUSH("Body::get_kinAngVel","nape/phys/Body.hx",841);
	HX_STACK_THIS(this);
	HX_STACK_LINE(841)
	return this->zpp_inner->kinangvel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_kinAngVel,return )

Float Body_obj::set_angularVel( Float angularVel){
	HX_STACK_PUSH("Body::set_angularVel","nape/phys/Body.hx",809);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angularVel,"angularVel");
	HX_STACK_LINE(810)
	{
		HX_STACK_LINE(812)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(812)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(814)
		if (((this->zpp_inner->angvel != angularVel))){
			HX_STACK_LINE(816)
			if (((angularVel != angularVel))){
				HX_STACK_LINE(816)
				hx::Throw (HX_CSTRING("Error: Body::angularVel cannot be NaN"));
			}
			HX_STACK_LINE(819)
			if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))){
				HX_STACK_LINE(819)
				hx::Throw (HX_CSTRING("Error: A static object cannot be given a velocity"));
			}
			HX_STACK_LINE(821)
			this->zpp_inner->angvel = angularVel;
			HX_STACK_LINE(822)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(825)
	return this->zpp_inner->angvel;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_angularVel,return )

Float Body_obj::get_angularVel( ){
	HX_STACK_PUSH("Body::get_angularVel","nape/phys/Body.hx",806);
	HX_STACK_THIS(this);
	HX_STACK_LINE(806)
	return this->zpp_inner->angvel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_angularVel,return )

Float Body_obj::set_rotation( Float rotation){
	HX_STACK_PUSH("Body::set_rotation","nape/phys/Body.hx",777);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rotation,"rotation");
	HX_STACK_LINE(778)
	{
		HX_STACK_LINE(779)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::rotation"));
		HX_STACK_LINE(781)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(781)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(784)
		if (((bool((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((this->zpp_inner->space != null()))))){
			HX_STACK_LINE(784)
			hx::Throw (HX_CSTRING("Error: Static objects cannot be rotated once inside a Space"));
		}
		HX_STACK_LINE(786)
		if (((this->zpp_inner->rot != rotation))){
			HX_STACK_LINE(788)
			if (((rotation != rotation))){
				HX_STACK_LINE(788)
				hx::Throw (HX_CSTRING("Error: Body::rotation cannot be NaN"));
			}
			HX_STACK_LINE(790)
			this->zpp_inner->rot = rotation;
			HX_STACK_LINE(791)
			{
				HX_STACK_LINE(791)
				::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(791)
				_this->zip_axis = true;
				HX_STACK_LINE(791)
				{
					HX_STACK_LINE(791)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = _this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(791)
					while(((cx_ite != null()))){
						HX_STACK_LINE(791)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(791)
						{
							HX_STACK_LINE(791)
							if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(791)
								s->polygon->invalidate_gverts();
								HX_STACK_LINE(791)
								s->polygon->invalidate_gaxi();
							}
							HX_STACK_LINE(791)
							s->invalidate_worldCOM();
						}
						HX_STACK_LINE(791)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(791)
				_this->zip_worldCOM = true;
			}
			HX_STACK_LINE(792)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(795)
	return this->zpp_inner->rot;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_rotation,return )

Float Body_obj::get_rotation( ){
	HX_STACK_PUSH("Body::get_rotation","nape/phys/Body.hx",774);
	HX_STACK_THIS(this);
	HX_STACK_LINE(774)
	return this->zpp_inner->rot;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_rotation,return )

::nape::geom::Vec3 Body_obj::get_constraintVelocity( ){
	HX_STACK_PUSH("Body::get_constraintVelocity","nape/phys/Body.hx",756);
	HX_STACK_THIS(this);
	HX_STACK_LINE(757)
	if (((this->zpp_inner->wrapcvel == null()))){
		HX_STACK_LINE(757)
		this->zpp_inner->setup_cvel();
	}
	HX_STACK_LINE(758)
	return this->zpp_inner->wrapcvel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraintVelocity,return )

::nape::geom::Vec2 Body_obj::set_force( ::nape::geom::Vec2 force){
	HX_STACK_PUSH("Body::set_force","nape/phys/Body.hx",734);
	HX_STACK_THIS(this);
	HX_STACK_ARG(force,"force");
	HX_STACK_LINE(735)
	{
		HX_STACK_LINE(736)
		if (((bool((force != null())) && bool(force->zpp_disp)))){
			HX_STACK_LINE(738)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(742)
		if (((force == null()))){
			HX_STACK_LINE(742)
			hx::Throw (((HX_CSTRING("Error: Body::") + HX_CSTRING("force")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(744)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",744);
					{
						HX_STACK_LINE(744)
						if (((__this->zpp_inner->wrap_force == null()))){
							HX_STACK_LINE(744)
							__this->zpp_inner->setupForce();
						}
						HX_STACK_LINE(744)
						return __this->zpp_inner->wrap_force;
					}
					return null();
				}
			};
			HX_STACK_LINE(744)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(744)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(744)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(744)
			if (((bool((force != null())) && bool(force->zpp_disp)))){
				HX_STACK_LINE(744)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(744)
			{
				HX_STACK_LINE(744)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(744)
				if ((_this1->_immutable)){
					HX_STACK_LINE(744)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(744)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(744)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(744)
			if (((force == null()))){
				HX_STACK_LINE(744)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &force,::nape::geom::Vec2 _this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",744);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &force){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",744);
								{
									HX_STACK_LINE(744)
									if (((bool((force != null())) && bool(force->zpp_disp)))){
										HX_STACK_LINE(744)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(744)
									{
										HX_STACK_LINE(744)
										::zpp_nape::geom::ZPP_Vec2 _this1 = force->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(744)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(744)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(744)
									return force->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &force){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",744);
								{
									HX_STACK_LINE(744)
									if (((bool((force != null())) && bool(force->zpp_disp)))){
										HX_STACK_LINE(744)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(744)
									{
										HX_STACK_LINE(744)
										::zpp_nape::geom::ZPP_Vec2 _this1 = force->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(744)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(744)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(744)
									return force->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(744)
						Float x = _Function_4_1::Block(force);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(force);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(744)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(744)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(744)
						{
							HX_STACK_LINE(744)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(744)
							if ((_this1->_immutable)){
								HX_STACK_LINE(744)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(744)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(744)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(744)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(744)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",744);
								{
									HX_STACK_LINE(744)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(744)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(744)
									{
										HX_STACK_LINE(744)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(744)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(744)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(744)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",744);
								{
									HX_STACK_LINE(744)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(744)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(744)
									{
										HX_STACK_LINE(744)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(744)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(744)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(744)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(744)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(744)
							{
								HX_STACK_LINE(744)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(744)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(744)
								{
								}
							}
							HX_STACK_LINE(744)
							{
								HX_STACK_LINE(744)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(744)
								if (((_this1->_invalidate != null()))){
									HX_STACK_LINE(744)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(744)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(744)
			::nape::geom::Vec2 ret = _Function_3_2::Block(force,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(744)
			if ((force->zpp_inner->weak)){
				HX_STACK_LINE(744)
				{
					HX_STACK_LINE(744)
					if (((bool((force != null())) && bool(force->zpp_disp)))){
						HX_STACK_LINE(744)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(744)
					{
						HX_STACK_LINE(744)
						::zpp_nape::geom::ZPP_Vec2 _this1 = force->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(744)
						if ((_this1->_immutable)){
							HX_STACK_LINE(744)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(744)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(744)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(744)
					if ((force->zpp_inner->_inuse)){
						HX_STACK_LINE(744)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(744)
					::zpp_nape::geom::ZPP_Vec2 inner = force->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(744)
					force->zpp_inner->outer = null();
					HX_STACK_LINE(744)
					force->zpp_inner = null();
					HX_STACK_LINE(744)
					{
						HX_STACK_LINE(744)
						::nape::geom::Vec2 o = force;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(744)
						o->zpp_pool = null();
						HX_STACK_LINE(744)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(744)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(744)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(744)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(744)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(744)
					{
						HX_STACK_LINE(744)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(744)
						{
							HX_STACK_LINE(744)
							if (((o->outer != null()))){
								HX_STACK_LINE(744)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(744)
								o->outer = null();
							}
							HX_STACK_LINE(744)
							o->_isimmutable = null();
							HX_STACK_LINE(744)
							o->_validate = null();
							HX_STACK_LINE(744)
							o->_invalidate = null();
						}
						HX_STACK_LINE(744)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(744)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(744)
				true;
			}
			else{
				HX_STACK_LINE(744)
				false;
			}
			HX_STACK_LINE(744)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",746);
			{
				HX_STACK_LINE(746)
				if (((__this->zpp_inner->wrap_force == null()))){
					HX_STACK_LINE(746)
					__this->zpp_inner->setupForce();
				}
				HX_STACK_LINE(746)
				return __this->zpp_inner->wrap_force;
			}
			return null();
		}
	};
	HX_STACK_LINE(746)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_force,return )

::nape::geom::Vec2 Body_obj::get_force( ){
	HX_STACK_PUSH("Body::get_force","nape/phys/Body.hx",730);
	HX_STACK_THIS(this);
	HX_STACK_LINE(731)
	if (((this->zpp_inner->wrap_force == null()))){
		HX_STACK_LINE(731)
		this->zpp_inner->setupForce();
	}
	HX_STACK_LINE(732)
	return this->zpp_inner->wrap_force;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_force,return )

::nape::geom::Vec2 Body_obj::set_surfaceVel( ::nape::geom::Vec2 surfaceVel){
	HX_STACK_PUSH("Body::set_surfaceVel","nape/phys/Body.hx",705);
	HX_STACK_THIS(this);
	HX_STACK_ARG(surfaceVel,"surfaceVel");
	HX_STACK_LINE(706)
	{
		HX_STACK_LINE(707)
		if (((bool((surfaceVel != null())) && bool(surfaceVel->zpp_disp)))){
			HX_STACK_LINE(709)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(713)
		if (((surfaceVel == null()))){
			HX_STACK_LINE(713)
			hx::Throw (((HX_CSTRING("Error: Body::") + HX_CSTRING("surfaceVel")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(715)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",715);
					{
						HX_STACK_LINE(715)
						if (((__this->zpp_inner->wrap_svel == null()))){
							HX_STACK_LINE(715)
							__this->zpp_inner->setupsvel();
						}
						HX_STACK_LINE(715)
						return __this->zpp_inner->wrap_svel;
					}
					return null();
				}
			};
			HX_STACK_LINE(715)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(715)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(715)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(715)
			if (((bool((surfaceVel != null())) && bool(surfaceVel->zpp_disp)))){
				HX_STACK_LINE(715)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(715)
			{
				HX_STACK_LINE(715)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(715)
				if ((_this1->_immutable)){
					HX_STACK_LINE(715)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(715)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(715)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(715)
			if (((surfaceVel == null()))){
				HX_STACK_LINE(715)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &surfaceVel,::nape::geom::Vec2 _this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",715);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &surfaceVel){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",715);
								{
									HX_STACK_LINE(715)
									if (((bool((surfaceVel != null())) && bool(surfaceVel->zpp_disp)))){
										HX_STACK_LINE(715)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(715)
									{
										HX_STACK_LINE(715)
										::zpp_nape::geom::ZPP_Vec2 _this1 = surfaceVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(715)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(715)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(715)
									return surfaceVel->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &surfaceVel){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",715);
								{
									HX_STACK_LINE(715)
									if (((bool((surfaceVel != null())) && bool(surfaceVel->zpp_disp)))){
										HX_STACK_LINE(715)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(715)
									{
										HX_STACK_LINE(715)
										::zpp_nape::geom::ZPP_Vec2 _this1 = surfaceVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(715)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(715)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(715)
									return surfaceVel->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(715)
						Float x = _Function_4_1::Block(surfaceVel);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(surfaceVel);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(715)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(715)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(715)
						{
							HX_STACK_LINE(715)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(715)
							if ((_this1->_immutable)){
								HX_STACK_LINE(715)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(715)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(715)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(715)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(715)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",715);
								{
									HX_STACK_LINE(715)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(715)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(715)
									{
										HX_STACK_LINE(715)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(715)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(715)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(715)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",715);
								{
									HX_STACK_LINE(715)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(715)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(715)
									{
										HX_STACK_LINE(715)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(715)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(715)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(715)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(715)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(715)
							{
								HX_STACK_LINE(715)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(715)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(715)
								{
								}
							}
							HX_STACK_LINE(715)
							{
								HX_STACK_LINE(715)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(715)
								if (((_this1->_invalidate != null()))){
									HX_STACK_LINE(715)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(715)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(715)
			::nape::geom::Vec2 ret = _Function_3_2::Block(surfaceVel,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(715)
			if ((surfaceVel->zpp_inner->weak)){
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					if (((bool((surfaceVel != null())) && bool(surfaceVel->zpp_disp)))){
						HX_STACK_LINE(715)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(715)
					{
						HX_STACK_LINE(715)
						::zpp_nape::geom::ZPP_Vec2 _this1 = surfaceVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(715)
						if ((_this1->_immutable)){
							HX_STACK_LINE(715)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(715)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(715)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(715)
					if ((surfaceVel->zpp_inner->_inuse)){
						HX_STACK_LINE(715)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(715)
					::zpp_nape::geom::ZPP_Vec2 inner = surfaceVel->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(715)
					surfaceVel->zpp_inner->outer = null();
					HX_STACK_LINE(715)
					surfaceVel->zpp_inner = null();
					HX_STACK_LINE(715)
					{
						HX_STACK_LINE(715)
						::nape::geom::Vec2 o = surfaceVel;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(715)
						o->zpp_pool = null();
						HX_STACK_LINE(715)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(715)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(715)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(715)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(715)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(715)
					{
						HX_STACK_LINE(715)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(715)
						{
							HX_STACK_LINE(715)
							if (((o->outer != null()))){
								HX_STACK_LINE(715)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(715)
								o->outer = null();
							}
							HX_STACK_LINE(715)
							o->_isimmutable = null();
							HX_STACK_LINE(715)
							o->_validate = null();
							HX_STACK_LINE(715)
							o->_invalidate = null();
						}
						HX_STACK_LINE(715)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(715)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(715)
				true;
			}
			else{
				HX_STACK_LINE(715)
				false;
			}
			HX_STACK_LINE(715)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",717);
			{
				HX_STACK_LINE(717)
				if (((__this->zpp_inner->wrap_svel == null()))){
					HX_STACK_LINE(717)
					__this->zpp_inner->setupsvel();
				}
				HX_STACK_LINE(717)
				return __this->zpp_inner->wrap_svel;
			}
			return null();
		}
	};
	HX_STACK_LINE(717)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_surfaceVel,return )

::nape::geom::Vec2 Body_obj::get_surfaceVel( ){
	HX_STACK_PUSH("Body::get_surfaceVel","nape/phys/Body.hx",701);
	HX_STACK_THIS(this);
	HX_STACK_LINE(702)
	if (((this->zpp_inner->wrap_svel == null()))){
		HX_STACK_LINE(702)
		this->zpp_inner->setupsvel();
	}
	HX_STACK_LINE(703)
	return this->zpp_inner->wrap_svel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_surfaceVel,return )

::nape::geom::Vec2 Body_obj::set_kinematicVel( ::nape::geom::Vec2 kinematicVel){
	HX_STACK_PUSH("Body::set_kinematicVel","nape/phys/Body.hx",673);
	HX_STACK_THIS(this);
	HX_STACK_ARG(kinematicVel,"kinematicVel");
	HX_STACK_LINE(674)
	{
		HX_STACK_LINE(675)
		if (((bool((kinematicVel != null())) && bool(kinematicVel->zpp_disp)))){
			HX_STACK_LINE(677)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(681)
		if (((kinematicVel == null()))){
			HX_STACK_LINE(681)
			hx::Throw (((HX_CSTRING("Error: Body::") + HX_CSTRING("kinematicVel")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(683)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",683);
					{
						HX_STACK_LINE(683)
						if (((__this->zpp_inner->wrap_kinvel == null()))){
							HX_STACK_LINE(683)
							__this->zpp_inner->setupkinvel();
						}
						HX_STACK_LINE(683)
						return __this->zpp_inner->wrap_kinvel;
					}
					return null();
				}
			};
			HX_STACK_LINE(683)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(683)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(683)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(683)
			if (((bool((kinematicVel != null())) && bool(kinematicVel->zpp_disp)))){
				HX_STACK_LINE(683)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(683)
			{
				HX_STACK_LINE(683)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(683)
				if ((_this1->_immutable)){
					HX_STACK_LINE(683)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(683)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(683)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(683)
			if (((kinematicVel == null()))){
				HX_STACK_LINE(683)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &kinematicVel,::nape::geom::Vec2 _this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",683);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &kinematicVel){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",683);
								{
									HX_STACK_LINE(683)
									if (((bool((kinematicVel != null())) && bool(kinematicVel->zpp_disp)))){
										HX_STACK_LINE(683)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(683)
									{
										HX_STACK_LINE(683)
										::zpp_nape::geom::ZPP_Vec2 _this1 = kinematicVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(683)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(683)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(683)
									return kinematicVel->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &kinematicVel){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",683);
								{
									HX_STACK_LINE(683)
									if (((bool((kinematicVel != null())) && bool(kinematicVel->zpp_disp)))){
										HX_STACK_LINE(683)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(683)
									{
										HX_STACK_LINE(683)
										::zpp_nape::geom::ZPP_Vec2 _this1 = kinematicVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(683)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(683)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(683)
									return kinematicVel->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(683)
						Float x = _Function_4_1::Block(kinematicVel);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(kinematicVel);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(683)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(683)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(683)
						{
							HX_STACK_LINE(683)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(683)
							if ((_this1->_immutable)){
								HX_STACK_LINE(683)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(683)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(683)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(683)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(683)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",683);
								{
									HX_STACK_LINE(683)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(683)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(683)
									{
										HX_STACK_LINE(683)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(683)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(683)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(683)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",683);
								{
									HX_STACK_LINE(683)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(683)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(683)
									{
										HX_STACK_LINE(683)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(683)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(683)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(683)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(683)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(683)
							{
								HX_STACK_LINE(683)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(683)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(683)
								{
								}
							}
							HX_STACK_LINE(683)
							{
								HX_STACK_LINE(683)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(683)
								if (((_this1->_invalidate != null()))){
									HX_STACK_LINE(683)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(683)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(683)
			::nape::geom::Vec2 ret = _Function_3_2::Block(kinematicVel,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(683)
			if ((kinematicVel->zpp_inner->weak)){
				HX_STACK_LINE(683)
				{
					HX_STACK_LINE(683)
					if (((bool((kinematicVel != null())) && bool(kinematicVel->zpp_disp)))){
						HX_STACK_LINE(683)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(683)
					{
						HX_STACK_LINE(683)
						::zpp_nape::geom::ZPP_Vec2 _this1 = kinematicVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(683)
						if ((_this1->_immutable)){
							HX_STACK_LINE(683)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(683)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(683)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(683)
					if ((kinematicVel->zpp_inner->_inuse)){
						HX_STACK_LINE(683)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(683)
					::zpp_nape::geom::ZPP_Vec2 inner = kinematicVel->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(683)
					kinematicVel->zpp_inner->outer = null();
					HX_STACK_LINE(683)
					kinematicVel->zpp_inner = null();
					HX_STACK_LINE(683)
					{
						HX_STACK_LINE(683)
						::nape::geom::Vec2 o = kinematicVel;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(683)
						o->zpp_pool = null();
						HX_STACK_LINE(683)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(683)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(683)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(683)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(683)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(683)
					{
						HX_STACK_LINE(683)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(683)
						{
							HX_STACK_LINE(683)
							if (((o->outer != null()))){
								HX_STACK_LINE(683)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(683)
								o->outer = null();
							}
							HX_STACK_LINE(683)
							o->_isimmutable = null();
							HX_STACK_LINE(683)
							o->_validate = null();
							HX_STACK_LINE(683)
							o->_invalidate = null();
						}
						HX_STACK_LINE(683)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(683)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(683)
				true;
			}
			else{
				HX_STACK_LINE(683)
				false;
			}
			HX_STACK_LINE(683)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",685);
			{
				HX_STACK_LINE(685)
				if (((__this->zpp_inner->wrap_kinvel == null()))){
					HX_STACK_LINE(685)
					__this->zpp_inner->setupkinvel();
				}
				HX_STACK_LINE(685)
				return __this->zpp_inner->wrap_kinvel;
			}
			return null();
		}
	};
	HX_STACK_LINE(685)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_kinematicVel,return )

::nape::geom::Vec2 Body_obj::get_kinematicVel( ){
	HX_STACK_PUSH("Body::get_kinematicVel","nape/phys/Body.hx",669);
	HX_STACK_THIS(this);
	HX_STACK_LINE(670)
	if (((this->zpp_inner->wrap_kinvel == null()))){
		HX_STACK_LINE(670)
		this->zpp_inner->setupkinvel();
	}
	HX_STACK_LINE(671)
	return this->zpp_inner->wrap_kinvel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_kinematicVel,return )

::nape::phys::Body Body_obj::setVelocityFromTarget( ::nape::geom::Vec2 targetPosition,Float targetRotation,Float deltaTime){
	HX_STACK_PUSH("Body::setVelocityFromTarget","nape/phys/Body.hx",629);
	HX_STACK_THIS(this);
	HX_STACK_ARG(targetPosition,"targetPosition");
	HX_STACK_ARG(targetRotation,"targetRotation");
	HX_STACK_ARG(deltaTime,"deltaTime");
	HX_STACK_LINE(630)
	if (((bool((targetPosition != null())) && bool(targetPosition->zpp_disp)))){
		HX_STACK_LINE(632)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(636)
	if (((targetPosition == null()))){
		HX_STACK_LINE(636)
		hx::Throw (HX_CSTRING("Cannot set velocity for null target position"));
	}
	HX_STACK_LINE(637)
	if (((deltaTime == (int)0))){
		HX_STACK_LINE(637)
		hx::Throw (HX_CSTRING("deltaTime cannot be 0 for setVelocityFromTarget"));
	}
	HX_STACK_LINE(639)
	Float idt = (Float((int)1) / Float(deltaTime));		HX_STACK_VAR(idt,"idt");
	HX_STACK_LINE(640)
	{
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
				{
					HX_STACK_LINE(640)
					if (((__this->zpp_inner->wrap_vel == null()))){
						HX_STACK_LINE(640)
						__this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(640)
					return __this->zpp_inner->wrap_vel;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
				{
					HX_STACK_LINE(640)
					if (((__this->zpp_inner->wrap_pos == null()))){
						HX_STACK_LINE(640)
						__this->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(640)
					return __this->zpp_inner->wrap_pos;
				}
				return null();
			}
		};
		HX_STACK_LINE(640)
		::nape::geom::Vec2 _this = _Function_2_1::Block(this);		HX_STACK_VAR(_this,"_this");
		::nape::geom::Vec2 vector = targetPosition->sub(_Function_2_2::Block(this),true)->muleq(idt);		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(640)
		if (((bool((_this != null())) && bool(_this->zpp_disp)))){
			HX_STACK_LINE(640)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(640)
		if (((bool((vector != null())) && bool(vector->zpp_disp)))){
			HX_STACK_LINE(640)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(640)
		{
			HX_STACK_LINE(640)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(640)
			if ((_this1->_immutable)){
				HX_STACK_LINE(640)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(640)
			if (((_this1->_isimmutable != null()))){
				HX_STACK_LINE(640)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(640)
		if (((vector == null()))){
			HX_STACK_LINE(640)
			hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
		}
		struct _Function_2_3{
			inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &vector,::nape::geom::Vec2 _this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
				{
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::Vec2 &vector){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
							{
								HX_STACK_LINE(640)
								if (((bool((vector != null())) && bool(vector->zpp_disp)))){
									HX_STACK_LINE(640)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(640)
								{
									HX_STACK_LINE(640)
									::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(640)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(640)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(640)
								return vector->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static Float Block( ::nape::geom::Vec2 &vector){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
							{
								HX_STACK_LINE(640)
								if (((bool((vector != null())) && bool(vector->zpp_disp)))){
									HX_STACK_LINE(640)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(640)
								{
									HX_STACK_LINE(640)
									::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(640)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(640)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(640)
								return vector->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(640)
					Float x = _Function_3_1::Block(vector);		HX_STACK_VAR(x,"x");
					Float y = _Function_3_2::Block(vector);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(640)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(640)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(640)
					{
						HX_STACK_LINE(640)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(640)
						if ((_this1->_immutable)){
							HX_STACK_LINE(640)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(640)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(640)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(640)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(640)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					struct _Function_3_3{
						inline static Float Block( ::nape::geom::Vec2 _this){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
							{
								HX_STACK_LINE(640)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(640)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(640)
								{
									HX_STACK_LINE(640)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(640)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(640)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(640)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_3_4{
						inline static Float Block( ::nape::geom::Vec2 _this){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
							{
								HX_STACK_LINE(640)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(640)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(640)
								{
									HX_STACK_LINE(640)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(640)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(640)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(640)
								return _this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(640)
					if ((!(((bool((_Function_3_3::Block(_this) == x)) && bool((_Function_3_4::Block(_this) == y))))))){
						HX_STACK_LINE(640)
						{
							HX_STACK_LINE(640)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(640)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(640)
							{
							}
						}
						HX_STACK_LINE(640)
						{
							HX_STACK_LINE(640)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(640)
							if (((_this1->_invalidate != null()))){
								HX_STACK_LINE(640)
								_this1->_invalidate(_this1);
							}
						}
					}
					HX_STACK_LINE(640)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(640)
		::nape::geom::Vec2 ret = _Function_2_3::Block(vector,_this);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(640)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(640)
			{
				HX_STACK_LINE(640)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(640)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(640)
					if ((_this1->_immutable)){
						HX_STACK_LINE(640)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(640)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(640)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(640)
				if ((vector->zpp_inner->_inuse)){
					HX_STACK_LINE(640)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(640)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(640)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(640)
				vector->zpp_inner = null();
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(640)
					o->zpp_pool = null();
					HX_STACK_LINE(640)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(640)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(640)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(640)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(640)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(640)
					{
						HX_STACK_LINE(640)
						if (((o->outer != null()))){
							HX_STACK_LINE(640)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(640)
							o->outer = null();
						}
						HX_STACK_LINE(640)
						o->_isimmutable = null();
						HX_STACK_LINE(640)
						o->_validate = null();
						HX_STACK_LINE(640)
						o->_invalidate = null();
					}
					HX_STACK_LINE(640)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(640)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(640)
			true;
		}
		else{
			HX_STACK_LINE(640)
			false;
		}
		HX_STACK_LINE(640)
		ret;
	}
	HX_STACK_LINE(641)
	{
		HX_STACK_LINE(641)
		Float angularVel = (((targetRotation - this->zpp_inner->rot)) * idt);		HX_STACK_VAR(angularVel,"angularVel");
		HX_STACK_LINE(641)
		{
			HX_STACK_LINE(641)
			if ((this->zpp_inner->world)){
				HX_STACK_LINE(641)
				hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
			}
			HX_STACK_LINE(641)
			if (((this->zpp_inner->angvel != angularVel))){
				HX_STACK_LINE(641)
				if (((angularVel != angularVel))){
					HX_STACK_LINE(641)
					hx::Throw (HX_CSTRING("Error: Body::angularVel cannot be NaN"));
				}
				HX_STACK_LINE(641)
				if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))){
					HX_STACK_LINE(641)
					hx::Throw (HX_CSTRING("Error: A static object cannot be given a velocity"));
				}
				HX_STACK_LINE(641)
				this->zpp_inner->angvel = angularVel;
				HX_STACK_LINE(641)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(641)
		this->zpp_inner->angvel;
	}
	HX_STACK_LINE(642)
	if ((targetPosition->zpp_inner->weak)){
		HX_STACK_LINE(646)
		{
			HX_STACK_LINE(646)
			if (((bool((targetPosition != null())) && bool(targetPosition->zpp_disp)))){
				HX_STACK_LINE(646)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(646)
			{
				HX_STACK_LINE(646)
				::zpp_nape::geom::ZPP_Vec2 _this = targetPosition->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(646)
				if ((_this->_immutable)){
					HX_STACK_LINE(646)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(646)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(646)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(646)
			if ((targetPosition->zpp_inner->_inuse)){
				HX_STACK_LINE(646)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(646)
			::zpp_nape::geom::ZPP_Vec2 inner = targetPosition->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(646)
			targetPosition->zpp_inner->outer = null();
			HX_STACK_LINE(646)
			targetPosition->zpp_inner = null();
			HX_STACK_LINE(646)
			{
				HX_STACK_LINE(646)
				::nape::geom::Vec2 o = targetPosition;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(646)
				o->zpp_pool = null();
				HX_STACK_LINE(646)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(646)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(646)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(646)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(646)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(646)
			{
				HX_STACK_LINE(646)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(646)
				{
					HX_STACK_LINE(646)
					if (((o->outer != null()))){
						HX_STACK_LINE(646)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(646)
						o->outer = null();
					}
					HX_STACK_LINE(646)
					o->_isimmutable = null();
					HX_STACK_LINE(646)
					o->_validate = null();
					HX_STACK_LINE(646)
					o->_invalidate = null();
				}
				HX_STACK_LINE(646)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(646)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(647)
		true;
	}
	else{
		HX_STACK_LINE(649)
		false;
	}
	HX_STACK_LINE(653)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Body_obj,setVelocityFromTarget,return )

::nape::geom::Vec2 Body_obj::set_velocity( ::nape::geom::Vec2 velocity){
	HX_STACK_PUSH("Body::set_velocity","nape/phys/Body.hx",598);
	HX_STACK_THIS(this);
	HX_STACK_ARG(velocity,"velocity");
	HX_STACK_LINE(599)
	{
		HX_STACK_LINE(600)
		if (((bool((velocity != null())) && bool(velocity->zpp_disp)))){
			HX_STACK_LINE(602)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(606)
		if (((velocity == null()))){
			HX_STACK_LINE(606)
			hx::Throw (((HX_CSTRING("Error: Body::") + HX_CSTRING("velocity")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(608)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",608);
					{
						HX_STACK_LINE(608)
						if (((__this->zpp_inner->wrap_vel == null()))){
							HX_STACK_LINE(608)
							__this->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(608)
						return __this->zpp_inner->wrap_vel;
					}
					return null();
				}
			};
			HX_STACK_LINE(608)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(608)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(608)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(608)
			if (((bool((velocity != null())) && bool(velocity->zpp_disp)))){
				HX_STACK_LINE(608)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(608)
			{
				HX_STACK_LINE(608)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(608)
				if ((_this1->_immutable)){
					HX_STACK_LINE(608)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(608)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(608)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(608)
			if (((velocity == null()))){
				HX_STACK_LINE(608)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &velocity,::nape::geom::Vec2 _this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",608);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &velocity){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",608);
								{
									HX_STACK_LINE(608)
									if (((bool((velocity != null())) && bool(velocity->zpp_disp)))){
										HX_STACK_LINE(608)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(608)
									{
										HX_STACK_LINE(608)
										::zpp_nape::geom::ZPP_Vec2 _this1 = velocity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(608)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(608)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(608)
									return velocity->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &velocity){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",608);
								{
									HX_STACK_LINE(608)
									if (((bool((velocity != null())) && bool(velocity->zpp_disp)))){
										HX_STACK_LINE(608)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(608)
									{
										HX_STACK_LINE(608)
										::zpp_nape::geom::ZPP_Vec2 _this1 = velocity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(608)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(608)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(608)
									return velocity->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(608)
						Float x = _Function_4_1::Block(velocity);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(velocity);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(608)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(608)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(608)
						{
							HX_STACK_LINE(608)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(608)
							if ((_this1->_immutable)){
								HX_STACK_LINE(608)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(608)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(608)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(608)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(608)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",608);
								{
									HX_STACK_LINE(608)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(608)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(608)
									{
										HX_STACK_LINE(608)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(608)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(608)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(608)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",608);
								{
									HX_STACK_LINE(608)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(608)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(608)
									{
										HX_STACK_LINE(608)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(608)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(608)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(608)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(608)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(608)
							{
								HX_STACK_LINE(608)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(608)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(608)
								{
								}
							}
							HX_STACK_LINE(608)
							{
								HX_STACK_LINE(608)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(608)
								if (((_this1->_invalidate != null()))){
									HX_STACK_LINE(608)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(608)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(608)
			::nape::geom::Vec2 ret = _Function_3_2::Block(velocity,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(608)
			if ((velocity->zpp_inner->weak)){
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(608)
					if (((bool((velocity != null())) && bool(velocity->zpp_disp)))){
						HX_STACK_LINE(608)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(608)
					{
						HX_STACK_LINE(608)
						::zpp_nape::geom::ZPP_Vec2 _this1 = velocity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(608)
						if ((_this1->_immutable)){
							HX_STACK_LINE(608)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(608)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(608)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(608)
					if ((velocity->zpp_inner->_inuse)){
						HX_STACK_LINE(608)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(608)
					::zpp_nape::geom::ZPP_Vec2 inner = velocity->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(608)
					velocity->zpp_inner->outer = null();
					HX_STACK_LINE(608)
					velocity->zpp_inner = null();
					HX_STACK_LINE(608)
					{
						HX_STACK_LINE(608)
						::nape::geom::Vec2 o = velocity;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(608)
						o->zpp_pool = null();
						HX_STACK_LINE(608)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(608)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(608)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(608)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(608)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(608)
					{
						HX_STACK_LINE(608)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(608)
						{
							HX_STACK_LINE(608)
							if (((o->outer != null()))){
								HX_STACK_LINE(608)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(608)
								o->outer = null();
							}
							HX_STACK_LINE(608)
							o->_isimmutable = null();
							HX_STACK_LINE(608)
							o->_validate = null();
							HX_STACK_LINE(608)
							o->_invalidate = null();
						}
						HX_STACK_LINE(608)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(608)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(608)
				true;
			}
			else{
				HX_STACK_LINE(608)
				false;
			}
			HX_STACK_LINE(608)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",610);
			{
				HX_STACK_LINE(610)
				if (((__this->zpp_inner->wrap_vel == null()))){
					HX_STACK_LINE(610)
					__this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(610)
				return __this->zpp_inner->wrap_vel;
			}
			return null();
		}
	};
	HX_STACK_LINE(610)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_velocity,return )

::nape::geom::Vec2 Body_obj::get_velocity( ){
	HX_STACK_PUSH("Body::get_velocity","nape/phys/Body.hx",594);
	HX_STACK_THIS(this);
	HX_STACK_LINE(595)
	if (((this->zpp_inner->wrap_vel == null()))){
		HX_STACK_LINE(595)
		this->zpp_inner->setupVelocity();
	}
	HX_STACK_LINE(596)
	return this->zpp_inner->wrap_vel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_velocity,return )

::nape::geom::Vec2 Body_obj::set_position( ::nape::geom::Vec2 position){
	HX_STACK_PUSH("Body::set_position","nape/phys/Body.hx",569);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_LINE(570)
	{
		HX_STACK_LINE(571)
		if (((bool((position != null())) && bool(position->zpp_disp)))){
			HX_STACK_LINE(573)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(577)
		if (((position == null()))){
			HX_STACK_LINE(577)
			hx::Throw (((HX_CSTRING("Error: Body::") + HX_CSTRING("position")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(579)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",579);
					{
						HX_STACK_LINE(579)
						if (((__this->zpp_inner->wrap_pos == null()))){
							HX_STACK_LINE(579)
							__this->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(579)
						return __this->zpp_inner->wrap_pos;
					}
					return null();
				}
			};
			HX_STACK_LINE(579)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(579)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(579)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(579)
			if (((bool((position != null())) && bool(position->zpp_disp)))){
				HX_STACK_LINE(579)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(579)
				if ((_this1->_immutable)){
					HX_STACK_LINE(579)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(579)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(579)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(579)
			if (((position == null()))){
				HX_STACK_LINE(579)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &position,::nape::geom::Vec2 _this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",579);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &position){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",579);
								{
									HX_STACK_LINE(579)
									if (((bool((position != null())) && bool(position->zpp_disp)))){
										HX_STACK_LINE(579)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(579)
									{
										HX_STACK_LINE(579)
										::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(579)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(579)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(579)
									return position->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &position){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",579);
								{
									HX_STACK_LINE(579)
									if (((bool((position != null())) && bool(position->zpp_disp)))){
										HX_STACK_LINE(579)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(579)
									{
										HX_STACK_LINE(579)
										::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(579)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(579)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(579)
									return position->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(579)
						Float x = _Function_4_1::Block(position);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(position);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(579)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(579)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(579)
							if ((_this1->_immutable)){
								HX_STACK_LINE(579)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(579)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(579)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(579)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(579)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",579);
								{
									HX_STACK_LINE(579)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(579)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(579)
									{
										HX_STACK_LINE(579)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(579)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(579)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(579)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",579);
								{
									HX_STACK_LINE(579)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(579)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(579)
									{
										HX_STACK_LINE(579)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(579)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(579)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(579)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(579)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(579)
							{
								HX_STACK_LINE(579)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(579)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(579)
								{
								}
							}
							HX_STACK_LINE(579)
							{
								HX_STACK_LINE(579)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(579)
								if (((_this1->_invalidate != null()))){
									HX_STACK_LINE(579)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(579)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(579)
			::nape::geom::Vec2 ret = _Function_3_2::Block(position,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(579)
			if ((position->zpp_inner->weak)){
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(579)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(579)
						if ((_this1->_immutable)){
							HX_STACK_LINE(579)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(579)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(579)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(579)
					if ((position->zpp_inner->_inuse)){
						HX_STACK_LINE(579)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(579)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(579)
					position->zpp_inner = null();
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(579)
						o->zpp_pool = null();
						HX_STACK_LINE(579)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(579)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(579)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(579)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(579)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							if (((o->outer != null()))){
								HX_STACK_LINE(579)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(579)
								o->outer = null();
							}
							HX_STACK_LINE(579)
							o->_isimmutable = null();
							HX_STACK_LINE(579)
							o->_validate = null();
							HX_STACK_LINE(579)
							o->_invalidate = null();
						}
						HX_STACK_LINE(579)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(579)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(579)
				true;
			}
			else{
				HX_STACK_LINE(579)
				false;
			}
			HX_STACK_LINE(579)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",581);
			{
				HX_STACK_LINE(581)
				if (((__this->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(581)
					__this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(581)
				return __this->zpp_inner->wrap_pos;
			}
			return null();
		}
	};
	HX_STACK_LINE(581)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_position,return )

::nape::geom::Vec2 Body_obj::get_position( ){
	HX_STACK_PUSH("Body::get_position","nape/phys/Body.hx",565);
	HX_STACK_THIS(this);
	HX_STACK_LINE(566)
	if (((this->zpp_inner->wrap_pos == null()))){
		HX_STACK_LINE(566)
		this->zpp_inner->setupPosition();
	}
	HX_STACK_LINE(567)
	return this->zpp_inner->wrap_pos;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_position,return )

::nape::phys::Body Body_obj::copy( ){
	HX_STACK_PUSH("Body::copy","nape/phys/Body.hx",543);
	HX_STACK_THIS(this);
	HX_STACK_LINE(545)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(545)
		hx::Throw (HX_CSTRING("Error: Space::world cannot be copied"));
	}
	HX_STACK_LINE(547)
	return this->zpp_inner->copy();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,copy,return )

::nape::constraint::ConstraintList Body_obj::get_constraints( ){
	HX_STACK_PUSH("Body::get_constraints","nape/phys/Body.hx",443);
	HX_STACK_THIS(this);
	HX_STACK_LINE(444)
	if (((this->zpp_inner->wrap_constraints == null()))){
		HX_STACK_LINE(444)
		this->zpp_inner->wrap_constraints = ::zpp_nape::util::ZPP_ConstraintList_obj::get(this->zpp_inner->constraints,true);
	}
	HX_STACK_LINE(445)
	return this->zpp_inner->wrap_constraints;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraints,return )

bool Body_obj::get_isSleeping( ){
	HX_STACK_PUSH("Body::get_isSleeping","nape/phys/Body.hx",428);
	HX_STACK_THIS(this);
	HX_STACK_LINE(430)
	if (((this->zpp_inner->space == null()))){
		HX_STACK_LINE(430)
		hx::Throw (HX_CSTRING("Error: isSleeping makes no sense if the object is not contained within a Space"));
	}
	HX_STACK_LINE(432)
	return this->zpp_inner->component->sleeping;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_isSleeping,return )

::nape::dynamics::ArbiterList Body_obj::get_arbiters( ){
	HX_STACK_PUSH("Body::get_arbiters","nape/phys/Body.hx",412);
	HX_STACK_THIS(this);
	HX_STACK_LINE(413)
	if (((this->zpp_inner->wrap_arbiters == null()))){
		HX_STACK_LINE(413)
		this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(this->zpp_inner->arbiters,true);
	}
	HX_STACK_LINE(414)
	return this->zpp_inner->wrap_arbiters;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_arbiters,return )

::nape::space::Space Body_obj::set_space( ::nape::space::Space space){
	HX_STACK_PUSH("Body::set_space","nape/phys/Body.hx",388);
	HX_STACK_THIS(this);
	HX_STACK_ARG(space,"space");
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(391)
		if (((this->zpp_inner->compound != null()))){
			HX_STACK_LINE(391)
			hx::Throw (HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
		}
		HX_STACK_LINE(393)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
		HX_STACK_LINE(395)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(395)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(397)
		if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != space))){
			HX_STACK_LINE(398)
			if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))){
				HX_STACK_LINE(398)
				this->zpp_inner->component->woken = false;
			}
			HX_STACK_LINE(399)
			if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))){
				HX_STACK_LINE(399)
				((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(400)
			if (((space != null()))){
				HX_STACK_LINE(400)
				::nape::phys::BodyList _this = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(400)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(400)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(400)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(403)
	return (  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_space,return )

::nape::space::Space Body_obj::get_space( ){
	HX_STACK_PUSH("Body::get_space","nape/phys/Body.hx",385);
	HX_STACK_THIS(this);
	HX_STACK_LINE(385)
	return (  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_space,return )

::nape::phys::Compound Body_obj::set_compound( ::nape::phys::Compound compound){
	HX_STACK_PUSH("Body::set_compound","nape/phys/Body.hx",366);
	HX_STACK_THIS(this);
	HX_STACK_ARG(compound,"compound");
	HX_STACK_LINE(367)
	if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != compound))){
		HX_STACK_LINE(369)
		if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != null()))){
			HX_STACK_LINE(369)
			((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) ))->zpp_inner->wrap_bodies->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(370)
		if (((compound != null()))){
			HX_STACK_LINE(370)
			::nape::phys::BodyList _this = compound->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(370)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(370)
				_this->push(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(370)
				_this->unshift(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(373)
	return (  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_compound,return )

::nape::phys::Compound Body_obj::get_compound( ){
	HX_STACK_PUSH("Body::get_compound","nape/phys/Body.hx",363);
	HX_STACK_THIS(this);
	HX_STACK_LINE(363)
	return (  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_compound,return )

::nape::shape::ShapeList Body_obj::get_shapes( ){
	HX_STACK_PUSH("Body::get_shapes","nape/phys/Body.hx",349);
	HX_STACK_THIS(this);
	HX_STACK_LINE(349)
	return this->zpp_inner->wrap_shapes;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_shapes,return )

bool Body_obj::isKinematic( ){
	HX_STACK_PUSH("Body::isKinematic","nape/phys/Body.hx",337);
	HX_STACK_THIS(this);
	HX_STACK_LINE(337)
	return (this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,isKinematic,return )

bool Body_obj::isDynamic( ){
	HX_STACK_PUSH("Body::isDynamic","nape/phys/Body.hx",328);
	HX_STACK_THIS(this);
	HX_STACK_LINE(328)
	return (this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,isDynamic,return )

bool Body_obj::isStatic( ){
	HX_STACK_PUSH("Body::isStatic","nape/phys/Body.hx",319);
	HX_STACK_THIS(this);
	HX_STACK_LINE(319)
	return (this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,isStatic,return )

::nape::phys::Body Body_obj::integrate( Float deltaTime){
	HX_STACK_PUSH("Body::integrate","nape/phys/Body.hx",295);
	HX_STACK_THIS(this);
	HX_STACK_ARG(deltaTime,"deltaTime");
	HX_STACK_LINE(297)
	if (((deltaTime != deltaTime))){
		HX_STACK_LINE(297)
		hx::Throw (HX_CSTRING("Cannot integrate by NaN time"));
	}
	HX_STACK_LINE(299)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
	HX_STACK_LINE(301)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(301)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(303)
	if (((deltaTime == (int)0))){
		HX_STACK_LINE(303)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(304)
	::zpp_nape::phys::ZPP_Body cur = this->zpp_inner;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(305)
	cur->sweepTime = (int)0;
	HX_STACK_LINE(306)
	cur->sweep_angvel = cur->angvel;
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		Float delta = (deltaTime - cur->sweepTime);		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(307)
		if (((delta != (int)0))){
			HX_STACK_LINE(307)
			cur->sweepTime = deltaTime;
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				Float t = delta;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(307)
				hx::AddEq(cur->posx,(cur->velx * t));
				HX_STACK_LINE(307)
				hx::AddEq(cur->posy,(cur->vely * t));
			}
			HX_STACK_LINE(307)
			if (((cur->angvel != (int)0))){
				HX_STACK_LINE(307)
				Float dr = (cur->sweep_angvel * delta);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(307)
				hx::AddEq(cur->rot,dr);
				HX_STACK_LINE(307)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(307)
					cur->axisx = ::Math_obj::sin(cur->rot);
					HX_STACK_LINE(307)
					cur->axisy = ::Math_obj::cos(cur->rot);
					HX_STACK_LINE(307)
					Dynamic();
				}
				else{
					HX_STACK_LINE(307)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(307)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(307)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(307)
					Float nx = ((((p * cur->axisx) + (dr * cur->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(307)
					cur->axisy = ((((p * cur->axisy) - (dr * cur->axisx))) * m);
					HX_STACK_LINE(307)
					cur->axisx = nx;
				}
			}
		}
	}
	HX_STACK_LINE(308)
	{
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = cur->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(308)
			while(((cx_ite != null()))){
				HX_STACK_LINE(308)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(308)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(308)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(308)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(308)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(308)
		cur->zip_worldCOM = true;
	}
	HX_STACK_LINE(309)
	{
		HX_STACK_LINE(309)
		cur->zip_axis = true;
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = cur->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(309)
			while(((cx_ite != null()))){
				HX_STACK_LINE(309)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(309)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(309)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(309)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(309)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(309)
		cur->zip_worldCOM = true;
	}
	HX_STACK_LINE(310)
	cur->sweepTime = (int)0;
	HX_STACK_LINE(311)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,integrate,return )

bool Body_obj::set_disableCCD( bool disableCCD){
	HX_STACK_PUSH("Body::set_disableCCD","nape/phys/Body.hx",281);
	HX_STACK_THIS(this);
	HX_STACK_ARG(disableCCD,"disableCCD");
	HX_STACK_LINE(282)
	this->zpp_inner->disableCCD = disableCCD;
	HX_STACK_LINE(285)
	return this->zpp_inner->disableCCD;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_disableCCD,return )

bool Body_obj::get_disableCCD( ){
	HX_STACK_PUSH("Body::get_disableCCD","nape/phys/Body.hx",278);
	HX_STACK_THIS(this);
	HX_STACK_LINE(278)
	return this->zpp_inner->disableCCD;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_disableCCD,return )

bool Body_obj::set_isBullet( bool isBullet){
	HX_STACK_PUSH("Body::set_isBullet","nape/phys/Body.hx",262);
	HX_STACK_THIS(this);
	HX_STACK_ARG(isBullet,"isBullet");
	HX_STACK_LINE(263)
	this->zpp_inner->bulletEnabled = isBullet;
	HX_STACK_LINE(266)
	return this->zpp_inner->bulletEnabled;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_isBullet,return )

bool Body_obj::get_isBullet( ){
	HX_STACK_PUSH("Body::get_isBullet","nape/phys/Body.hx",259);
	HX_STACK_THIS(this);
	HX_STACK_LINE(259)
	return this->zpp_inner->bulletEnabled;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_isBullet,return )

::nape::phys::BodyType Body_obj::set_type( ::nape::phys::BodyType type){
	HX_STACK_PUSH("Body::set_type","nape/phys/Body.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(202)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
		HX_STACK_LINE(204)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(204)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		struct _Function_2_1{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",206);
				{
					HX_STACK_LINE(206)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(206)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",206);
				{
					HX_STACK_LINE(206)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(206)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",206);
				{
					HX_STACK_LINE(206)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(206)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
				}
				return null();
			}
		};
		HX_STACK_LINE(206)
		if (((Array_obj< ::Dynamic >::__new().Add(null()).Add(_Function_2_1::Block()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block())->__get(this->zpp_inner->type).StaticCast< ::nape::phys::BodyType >() != type))){
			HX_STACK_LINE(208)
			if (((type == null()))){
				HX_STACK_LINE(208)
				hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
			}
			struct _Function_3_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",210);
					{
						HX_STACK_LINE(210)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(210)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(210)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(210)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(210)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",210);
					{
						HX_STACK_LINE(210)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(210)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(210)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(210)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(210)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(210)
			int ntype = (  (((type == _Function_3_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_3_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
			HX_STACK_LINE(211)
			if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((this->zpp_inner->space != null()))))){
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(213)
					this->zpp_inner->velx = (int)0;
					HX_STACK_LINE(214)
					this->zpp_inner->vely = (int)0;
					HX_STACK_LINE(223)
					{
					}
				}
				HX_STACK_LINE(232)
				this->zpp_inner->angvel = (int)0;
			}
			HX_STACK_LINE(234)
			this->zpp_inner->invalidate_type();
			HX_STACK_LINE(235)
			if (((this->zpp_inner->space != null()))){
				HX_STACK_LINE(235)
				this->zpp_inner->space->transmitType(this->zpp_inner,ntype);
			}
			else{
				HX_STACK_LINE(236)
				this->zpp_inner->type = ntype;
			}
		}
	}
	struct _Function_1_1{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",239);
			{
				HX_STACK_LINE(239)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(239)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",239);
			{
				HX_STACK_LINE(239)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(239)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",239);
			{
				HX_STACK_LINE(239)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(239)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
			}
			return null();
		}
	};
	HX_STACK_LINE(239)
	return Array_obj< ::Dynamic >::__new().Add(null()).Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block())->__get(this->zpp_inner->type).StaticCast< ::nape::phys::BodyType >();
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_type,return )

::nape::phys::BodyType Body_obj::get_type( ){
	HX_STACK_PUSH("Body::get_type","nape/phys/Body.hx",197);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",198);
			{
				HX_STACK_LINE(198)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(198)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",198);
			{
				HX_STACK_LINE(198)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(198)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",198);
			{
				HX_STACK_LINE(198)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(198)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
			}
			return null();
		}
	};
	HX_STACK_LINE(197)
	return Array_obj< ::Dynamic >::__new().Add(null()).Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block())->__get(this->zpp_inner->type).StaticCast< ::nape::phys::BodyType >();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_type,return )


Body_obj::Body_obj()
{
}

void Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Body);
	HX_MARK_MEMBER_NAME(debugDraw,"debugDraw");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(debugDraw,"debugDraw");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Body_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mass") ) { return get_mass(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"type") ) { return get_type(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align_dyn(); }
		if (HX_FIELD_EQ(inName,"force") ) { return get_force(); }
		if (HX_FIELD_EQ(inName,"space") ) { return get_space(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return get_bounds(); }
		if (HX_FIELD_EQ(inName,"torque") ) { return get_torque(); }
		if (HX_FIELD_EQ(inName,"shapes") ) { return get_shapes(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { return get_inertia(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"worldCOM") ) { return get_worldCOM(); }
		if (HX_FIELD_EQ(inName,"localCOM") ) { return get_localCOM(); }
		if (HX_FIELD_EQ(inName,"gravMass") ) { return get_gravMass(); }
		if (HX_FIELD_EQ(inName,"set_mass") ) { return set_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mass") ) { return get_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"massMode") ) { return get_massMode(); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return get_rotation(); }
		if (HX_FIELD_EQ(inName,"velocity") ) { return get_velocity(); }
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return get_arbiters(); }
		if (HX_FIELD_EQ(inName,"compound") ) { return get_compound(); }
		if (HX_FIELD_EQ(inName,"isStatic") ) { return isStatic_dyn(); }
		if (HX_FIELD_EQ(inName,"isBullet") ) { return get_isBullet(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinAngVel") ) { return get_kinAngVel(); }
		if (HX_FIELD_EQ(inName,"set_force") ) { return set_force_dyn(); }
		if (HX_FIELD_EQ(inName,"get_force") ) { return get_force_dyn(); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"isDynamic") ) { return isDynamic_dyn(); }
		if (HX_FIELD_EQ(inName,"integrate") ) { return integrate_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_torque") ) { return set_torque_dyn(); }
		if (HX_FIELD_EQ(inName,"get_torque") ) { return get_torque_dyn(); }
		if (HX_FIELD_EQ(inName,"angularVel") ) { return get_angularVel(); }
		if (HX_FIELD_EQ(inName,"surfaceVel") ) { return get_surfaceVel(); }
		if (HX_FIELD_EQ(inName,"isSleeping") ) { return get_isSleeping(); }
		if (HX_FIELD_EQ(inName,"get_shapes") ) { return get_shapes_dyn(); }
		if (HX_FIELD_EQ(inName,"disableCCD") ) { return get_disableCCD(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dragImpulse") ) { return dragImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleShapes") ) { return scaleShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"crushFactor") ) { return crushFactor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inertia") ) { return set_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inertia") ) { return get_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { return get_inertiaMode(); }
		if (HX_FIELD_EQ(inName,"constraints") ) { return get_constraints(); }
		if (HX_FIELD_EQ(inName,"isKinematic") ) { return isKinematic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldCOM") ) { return get_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_localCOM") ) { return get_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateShapes") ) { return rotateShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulse") ) { return applyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravMass") ) { return set_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravMass") ) { return get_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { return get_gravMassMode(); }
		if (HX_FIELD_EQ(inName,"set_massMode") ) { return set_massMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_massMode") ) { return get_massMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"kinematicVel") ) { return get_kinematicVel(); }
		if (HX_FIELD_EQ(inName,"set_velocity") ) { return set_velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_velocity") ) { return get_velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_arbiters") ) { return get_arbiters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_compound") ) { return set_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_compound") ) { return get_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"set_isBullet") ) { return set_isBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isBullet") ) { return get_isBullet_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { return normalImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { return get_gravMassScale(); }
		if (HX_FIELD_EQ(inName,"allowRotation") ) { return get_allowRotation(); }
		if (HX_FIELD_EQ(inName,"allowMovement") ) { return get_allowMovement(); }
		if (HX_FIELD_EQ(inName,"set_kinAngVel") ) { return set_kinAngVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_kinAngVel") ) { return get_kinAngVel_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rollingImpulse") ) { return rollingImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { return tangentImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"constraintMass") ) { return get_constraintMass(); }
		if (HX_FIELD_EQ(inName,"set_angularVel") ) { return set_angularVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angularVel") ) { return get_angularVel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_surfaceVel") ) { return set_surfaceVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_surfaceVel") ) { return get_surfaceVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isSleeping") ) { return get_isSleeping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_disableCCD") ) { return set_disableCCD_dyn(); }
		if (HX_FIELD_EQ(inName,"get_disableCCD") ) { return get_disableCCD_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buoyancyImpulse") ) { return buoyancyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"setShapeFilters") ) { return setShapeFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"transformShapes") ) { return transformShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"translateShapes") ) { return translateShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"connectedBodies") ) { return connectedBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inertiaMode") ) { return set_inertiaMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inertiaMode") ) { return get_inertiaMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return get_constraints_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_gravMassMode") ) { return set_gravMassMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravMassMode") ) { return get_gravMassMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_kinematicVel") ) { return set_kinematicVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_kinematicVel") ) { return get_kinematicVel_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"totalFluidImpulse") ) { return totalFluidImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"setShapeMaterials") ) { return setShapeMaterials_dyn(); }
		if (HX_FIELD_EQ(inName,"worldPointToLocal") ) { return worldPointToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"localPointToWorld") ) { return localPointToWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"interactingBodies") ) { return interactingBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"constraintInertia") ) { return get_constraintInertia(); }
		if (HX_FIELD_EQ(inName,"set_gravMassScale") ) { return set_gravMassScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravMassScale") ) { return get_gravMassScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowRotation") ) { return set_allowRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_allowRotation") ) { return get_allowRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowMovement") ) { return set_allowMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"get_allowMovement") ) { return get_allowMovement_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"constraintsImpulse") ) { return constraintsImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"worldVectorToLocal") ) { return worldVectorToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"localVectorToWorld") ) { return localVectorToWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"get_constraintMass") ) { return get_constraintMass_dyn(); }
		if (HX_FIELD_EQ(inName,"constraintVelocity") ) { return get_constraintVelocity(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"applyAngularImpulse") ) { return applyAngularImpulse_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"totalContactsImpulse") ) { return totalContactsImpulse_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_constraintInertia") ) { return get_constraintInertia_dyn(); }
		if (HX_FIELD_EQ(inName,"setVelocityFromTarget") ) { return setVelocityFromTarget_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_constraintVelocity") ) { return get_constraintVelocity_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setShapeFluidProperties") ) { return setShapeFluidProperties_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mass") ) { return set_mass(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { return set_type(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"force") ) { return set_force(inValue); }
		if (HX_FIELD_EQ(inName,"space") ) { return set_space(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"torque") ) { return set_torque(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { return set_inertia(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gravMass") ) { return set_gravMass(inValue); }
		if (HX_FIELD_EQ(inName,"massMode") ) { return set_massMode(inValue); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"velocity") ) { return set_velocity(inValue); }
		if (HX_FIELD_EQ(inName,"position") ) { return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"compound") ) { return set_compound(inValue); }
		if (HX_FIELD_EQ(inName,"isBullet") ) { return set_isBullet(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinAngVel") ) { return set_kinAngVel(inValue); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angularVel") ) { return set_angularVel(inValue); }
		if (HX_FIELD_EQ(inName,"surfaceVel") ) { return set_surfaceVel(inValue); }
		if (HX_FIELD_EQ(inName,"disableCCD") ) { return set_disableCCD(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { return set_inertiaMode(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { return set_gravMassMode(inValue); }
		if (HX_FIELD_EQ(inName,"kinematicVel") ) { return set_kinematicVel(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { return set_gravMassScale(inValue); }
		if (HX_FIELD_EQ(inName,"allowRotation") ) { return set_allowRotation(inValue); }
		if (HX_FIELD_EQ(inName,"allowMovement") ) { return set_allowMovement(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("worldCOM"));
	outFields->push(HX_CSTRING("localCOM"));
	outFields->push(HX_CSTRING("inertia"));
	outFields->push(HX_CSTRING("constraintInertia"));
	outFields->push(HX_CSTRING("inertiaMode"));
	outFields->push(HX_CSTRING("gravMassScale"));
	outFields->push(HX_CSTRING("gravMass"));
	outFields->push(HX_CSTRING("gravMassMode"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("constraintMass"));
	outFields->push(HX_CSTRING("massMode"));
	outFields->push(HX_CSTRING("allowRotation"));
	outFields->push(HX_CSTRING("allowMovement"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("torque"));
	outFields->push(HX_CSTRING("kinAngVel"));
	outFields->push(HX_CSTRING("angularVel"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("constraintVelocity"));
	outFields->push(HX_CSTRING("force"));
	outFields->push(HX_CSTRING("surfaceVel"));
	outFields->push(HX_CSTRING("kinematicVel"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("isSleeping"));
	outFields->push(HX_CSTRING("arbiters"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("compound"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("disableCCD"));
	outFields->push(HX_CSTRING("isBullet"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("debugDraw"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("contains"),
	HX_CSTRING("totalImpulse"),
	HX_CSTRING("constraintsImpulse"),
	HX_CSTRING("totalFluidImpulse"),
	HX_CSTRING("dragImpulse"),
	HX_CSTRING("buoyancyImpulse"),
	HX_CSTRING("rollingImpulse"),
	HX_CSTRING("totalContactsImpulse"),
	HX_CSTRING("tangentImpulse"),
	HX_CSTRING("normalImpulse"),
	HX_CSTRING("get_worldCOM"),
	HX_CSTRING("get_localCOM"),
	HX_CSTRING("setShapeFluidProperties"),
	HX_CSTRING("setShapeFilters"),
	HX_CSTRING("setShapeMaterials"),
	HX_CSTRING("rotate"),
	HX_CSTRING("align"),
	HX_CSTRING("transformShapes"),
	HX_CSTRING("scaleShapes"),
	HX_CSTRING("rotateShapes"),
	HX_CSTRING("translateShapes"),
	HX_CSTRING("applyAngularImpulse"),
	HX_CSTRING("applyImpulse"),
	HX_CSTRING("worldVectorToLocal"),
	HX_CSTRING("localVectorToWorld"),
	HX_CSTRING("worldPointToLocal"),
	HX_CSTRING("localPointToWorld"),
	HX_CSTRING("crushFactor"),
	HX_CSTRING("interactingBodies"),
	HX_CSTRING("connectedBodies"),
	HX_CSTRING("set_inertia"),
	HX_CSTRING("get_inertia"),
	HX_CSTRING("get_constraintInertia"),
	HX_CSTRING("set_inertiaMode"),
	HX_CSTRING("get_inertiaMode"),
	HX_CSTRING("set_gravMassScale"),
	HX_CSTRING("get_gravMassScale"),
	HX_CSTRING("set_gravMass"),
	HX_CSTRING("get_gravMass"),
	HX_CSTRING("set_gravMassMode"),
	HX_CSTRING("get_gravMassMode"),
	HX_CSTRING("set_mass"),
	HX_CSTRING("get_mass"),
	HX_CSTRING("get_constraintMass"),
	HX_CSTRING("set_massMode"),
	HX_CSTRING("get_massMode"),
	HX_CSTRING("set_allowRotation"),
	HX_CSTRING("get_allowRotation"),
	HX_CSTRING("set_allowMovement"),
	HX_CSTRING("get_allowMovement"),
	HX_CSTRING("get_bounds"),
	HX_CSTRING("set_torque"),
	HX_CSTRING("get_torque"),
	HX_CSTRING("set_kinAngVel"),
	HX_CSTRING("get_kinAngVel"),
	HX_CSTRING("set_angularVel"),
	HX_CSTRING("get_angularVel"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("get_constraintVelocity"),
	HX_CSTRING("set_force"),
	HX_CSTRING("get_force"),
	HX_CSTRING("set_surfaceVel"),
	HX_CSTRING("get_surfaceVel"),
	HX_CSTRING("set_kinematicVel"),
	HX_CSTRING("get_kinematicVel"),
	HX_CSTRING("setVelocityFromTarget"),
	HX_CSTRING("set_velocity"),
	HX_CSTRING("get_velocity"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get_position"),
	HX_CSTRING("copy"),
	HX_CSTRING("get_constraints"),
	HX_CSTRING("get_isSleeping"),
	HX_CSTRING("get_arbiters"),
	HX_CSTRING("set_space"),
	HX_CSTRING("get_space"),
	HX_CSTRING("set_compound"),
	HX_CSTRING("get_compound"),
	HX_CSTRING("get_shapes"),
	HX_CSTRING("isKinematic"),
	HX_CSTRING("isDynamic"),
	HX_CSTRING("isStatic"),
	HX_CSTRING("integrate"),
	HX_CSTRING("set_disableCCD"),
	HX_CSTRING("get_disableCCD"),
	HX_CSTRING("set_isBullet"),
	HX_CSTRING("get_isBullet"),
	HX_CSTRING("set_type"),
	HX_CSTRING("get_type"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Body_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Body_obj::__mClass,"__mClass");
};

Class Body_obj::__mClass;

void Body_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.Body"), hx::TCanCast< Body_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Body_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
