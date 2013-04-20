#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#include <nape/callbacks/CbTypeIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CbSetManager
#include <zpp_nape/space/ZPP_CbSetManager.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CallbackSet
#include <zpp_nape/util/ZNPList_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CallbackSet
#include <zpp_nape/util/ZNPNode_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_Interactor_obj::__construct()
{
HX_STACK_PUSH("ZPP_Interactor::new","zpp_nape/phys/Interactor.hx",174);
{
	HX_STACK_LINE(287)
	this->wrap_cbTypes = null();
	HX_STACK_LINE(286)
	this->cbSet = null();
	HX_STACK_LINE(285)
	this->cbTypes = null();
	HX_STACK_LINE(284)
	this->group = null();
	HX_STACK_LINE(234)
	this->cbsets = null();
	HX_STACK_LINE(180)
	this->icompound = null();
	HX_STACK_LINE(179)
	this->ibody = null();
	HX_STACK_LINE(178)
	this->ishape = null();
	HX_STACK_LINE(177)
	this->userData = null();
	HX_STACK_LINE(176)
	this->id = (int)0;
	HX_STACK_LINE(175)
	this->outer_i = null();
	HX_STACK_LINE(421)
	this->id = ::zpp_nape::ZPP_ID_obj::Interactor();
	HX_STACK_LINE(422)
	this->cbsets = ::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj::__new();
	HX_STACK_LINE(423)
	this->cbTypes = ::zpp_nape::util::ZNPList_ZPP_CbType_obj::__new();
}
;
	return null();
}

ZPP_Interactor_obj::~ZPP_Interactor_obj() { }

Dynamic ZPP_Interactor_obj::__CreateEmpty() { return  new ZPP_Interactor_obj; }
hx::ObjectPtr< ZPP_Interactor_obj > ZPP_Interactor_obj::__new()
{  hx::ObjectPtr< ZPP_Interactor_obj > result = new ZPP_Interactor_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Interactor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Interactor_obj > result = new ZPP_Interactor_obj();
	result->__construct();
	return result;}

Void ZPP_Interactor_obj::copyto( ::nape::phys::Interactor ret){
{
		HX_STACK_PUSH("ZPP_Interactor::copyto","zpp_nape/phys/Interactor.hx",449);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ret,"ret");
		HX_STACK_LINE(450)
		ret->zpp_inner_i->group = this->group;
		struct _Function_1_1{
			inline static Dynamic Block( ::zpp_nape::phys::ZPP_Interactor_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",451);
				{
					struct _Function_2_1{
						inline static ::nape::callbacks::CbTypeList Block( ::zpp_nape::phys::ZPP_Interactor_obj *__this){
							HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",451);
							{
								HX_STACK_LINE(451)
								::nape::phys::Interactor _this = __this->outer_i;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(451)
								if (((_this->zpp_inner_i->wrap_cbTypes == null()))){
									HX_STACK_LINE(451)
									_this->zpp_inner_i->setupcbTypes();
								}
								HX_STACK_LINE(451)
								return _this->zpp_inner_i->wrap_cbTypes;
							}
							return null();
						}
					};
					HX_STACK_LINE(451)
					::nape::callbacks::CbTypeList _this = _Function_2_1::Block(__this);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(451)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(451)
					return ::nape::callbacks::CbTypeIterator_obj::get(_this);
				}
				return null();
			}
		};
		HX_STACK_LINE(451)
		for(::cpp::FastIterator_obj< ::nape::callbacks::CbType > *__it = ::cpp::CreateFastIterator< ::nape::callbacks::CbType >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::nape::callbacks::CbType cb = __it->next();
			{
				struct _Function_2_1{
					inline static ::nape::callbacks::CbTypeList Block( ::nape::phys::Interactor &ret){
						HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",451);
						{
							HX_STACK_LINE(451)
							if (((ret->zpp_inner_i->wrap_cbTypes == null()))){
								HX_STACK_LINE(451)
								ret->zpp_inner_i->setupcbTypes();
							}
							HX_STACK_LINE(451)
							return ret->zpp_inner_i->wrap_cbTypes;
						}
						return null();
					}
				};
				HX_STACK_LINE(451)
				::nape::callbacks::CbTypeList _this = _Function_2_1::Block(ret);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(451)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(451)
					_this->push(cb);
				}
				else{
					HX_STACK_LINE(451)
					_this->unshift(cb);
				}
			}
;
		}
		HX_STACK_LINE(452)
		if (((this->userData != null()))){
			HX_STACK_LINE(452)
			ret->zpp_inner_i->userData = ::Reflect_obj::copy(this->userData);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,copyto,(void))

::zpp_nape::dynamics::ZPP_InteractionGroup ZPP_Interactor_obj::lookup_group( ){
	HX_STACK_PUSH("ZPP_Interactor::lookup_group","zpp_nape/phys/Interactor.hx",440);
	HX_STACK_THIS(this);
	HX_STACK_LINE(441)
	::zpp_nape::phys::ZPP_Interactor cur = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(442)
	while(((bool((cur != null())) && bool((cur->group == null()))))){
		HX_STACK_LINE(442)
		if (((cur->ishape != null()))){
			HX_STACK_LINE(443)
			cur = cur->ishape->body;
		}
		else{
			HX_STACK_LINE(444)
			if (((cur->icompound != null()))){
				HX_STACK_LINE(444)
				cur = cur->icompound->compound;
			}
			else{
				HX_STACK_LINE(445)
				cur = cur->ibody->compound;
			}
		}
	}
	HX_STACK_LINE(447)
	return (  (((cur == null()))) ? ::zpp_nape::dynamics::ZPP_InteractionGroup(null()) : ::zpp_nape::dynamics::ZPP_InteractionGroup(cur->group) );
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,lookup_group,return )

Void ZPP_Interactor_obj::immutable_midstep( ::String n){
{
		HX_STACK_PUSH("ZPP_Interactor::immutable_midstep","zpp_nape/phys/Interactor.hx",415);
		HX_STACK_THIS(this);
		HX_STACK_ARG(n,"n");
		HX_STACK_LINE(415)
		if (((this->ibody != null()))){
			HX_STACK_LINE(416)
			::zpp_nape::phys::ZPP_Body _this = this->ibody;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(416)
			if (((bool((_this->space != null())) && bool(_this->space->midstep)))){
				HX_STACK_LINE(416)
				hx::Throw (((HX_CSTRING("Error: ") + n) + HX_CSTRING(" cannot be set during a space step()")));
			}
		}
		else{
			HX_STACK_LINE(417)
			if (((this->ishape != null()))){
				HX_STACK_LINE(417)
				this->ishape->__immutable_midstep(n);
			}
			else{
				HX_STACK_LINE(418)
				this->icompound->__imutable_midstep(n);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,immutable_midstep,(void))

Void ZPP_Interactor_obj::setGroup( ::zpp_nape::dynamics::ZPP_InteractionGroup group){
{
		HX_STACK_PUSH("ZPP_Interactor::setGroup","zpp_nape/phys/Interactor.hx",402);
		HX_STACK_THIS(this);
		HX_STACK_ARG(group,"group");
		HX_STACK_LINE(402)
		if (((this->group != group))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Space Block( ::zpp_nape::phys::ZPP_Interactor_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",404);
					{
						HX_STACK_LINE(404)
						return (  (((__this->ishape->body == null()))) ? ::zpp_nape::space::ZPP_Space(null()) : ::zpp_nape::space::ZPP_Space(__this->ishape->body->space) );
					}
					return null();
				}
			};
			HX_STACK_LINE(404)
			bool inspace = (((  (((this->ishape != null()))) ? ::zpp_nape::space::ZPP_Space(_Function_2_1::Block(this)) : ::zpp_nape::space::ZPP_Space((  (((this->ibody != null()))) ? ::zpp_nape::space::ZPP_Space(this->ibody->space) : ::zpp_nape::space::ZPP_Space(this->icompound->space) )) )) != null());		HX_STACK_VAR(inspace,"inspace");
			HX_STACK_LINE(405)
			if (((bool(inspace) && bool((this->group != null()))))){
				HX_STACK_LINE(405)
				int flag = (int)-1;		HX_STACK_VAR(flag,"flag");
				HX_STACK_LINE(405)
				this->group->interactors->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(406)
			this->group = group;
			HX_STACK_LINE(407)
			if (((bool(inspace) && bool((group != null()))))){
				HX_STACK_LINE(407)
				group->interactors->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(408)
			if ((inspace)){
				HX_STACK_LINE(408)
				if (((this->ishape != null()))){
					HX_STACK_LINE(409)
					this->ishape->body->wake();
				}
				else{
					HX_STACK_LINE(410)
					if (((this->ibody != null()))){
						HX_STACK_LINE(410)
						this->ibody->wake();
					}
					else{
						HX_STACK_LINE(411)
						this->icompound->wake();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,setGroup,(void))

Void ZPP_Interactor_obj::dealloc_cbSet( ){
{
		HX_STACK_PUSH("ZPP_Interactor::dealloc_cbSet","zpp_nape/phys/Interactor.hx",366);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::zpp_nape::space::ZPP_Space Block( ::zpp_nape::phys::ZPP_Interactor_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",367);
				{
					HX_STACK_LINE(367)
					return (  (((__this->ishape->body == null()))) ? ::zpp_nape::space::ZPP_Space(null()) : ::zpp_nape::space::ZPP_Space(__this->ishape->body->space) );
				}
				return null();
			}
		};
		HX_STACK_LINE(367)
		::zpp_nape::space::ZPP_Space space = (  (((this->ishape != null()))) ? ::zpp_nape::space::ZPP_Space(_Function_1_1::Block(this)) : ::zpp_nape::space::ZPP_Space((  (((this->ibody != null()))) ? ::zpp_nape::space::ZPP_Space(this->ibody->space) : ::zpp_nape::space::ZPP_Space(this->icompound->space) )) );		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(368)
		{
		}
		HX_STACK_LINE(376)
		if (((this->cbSet != null()))){
			HX_STACK_LINE(377)
			this->cbSet->interactors->remove(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(378)
			space->nullInteractorType(hx::ObjectPtr<OBJ_>(this),null());
			struct _Function_2_1{
				inline static bool Block( ::zpp_nape::phys::ZPP_Interactor_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",379);
					{
						HX_STACK_LINE(379)
						{
						}
						HX_STACK_LINE(379)
						return (--(__this->cbSet->count) == (int)0);
					}
					return null();
				}
			};
			HX_STACK_LINE(379)
			if ((_Function_2_1::Block(this))){
				HX_STACK_LINE(380)
				space->cbsets->remove(this->cbSet);
				HX_STACK_LINE(381)
				{
					HX_STACK_LINE(382)
					::zpp_nape::callbacks::ZPP_CbSet o = this->cbSet;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(383)
					{
					}
					HX_STACK_LINE(391)
					{
						HX_STACK_LINE(391)
						{
						}
						HX_STACK_LINE(391)
						{
						}
						HX_STACK_LINE(391)
						{
						}
						HX_STACK_LINE(391)
						o->listeners->clear();
						HX_STACK_LINE(391)
						o->zip_listeners = true;
						HX_STACK_LINE(391)
						o->bodylisteners->clear();
						HX_STACK_LINE(391)
						o->zip_bodylisteners = true;
						HX_STACK_LINE(391)
						o->conlisteners->clear();
						HX_STACK_LINE(391)
						o->zip_conlisteners = true;
						HX_STACK_LINE(391)
						while((!(((o->cbTypes->head == null()))))){
							HX_STACK_LINE(391)
							::zpp_nape::callbacks::ZPP_CbType cb = o->cbTypes->pop_unsafe();		HX_STACK_VAR(cb,"cb");
							HX_STACK_LINE(391)
							cb->cbsets->remove(o);
						}
						HX_STACK_LINE(391)
						Dynamic();
					}
					HX_STACK_LINE(392)
					o->next = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;
					HX_STACK_LINE(393)
					::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(399)
			this->cbSet = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,dealloc_cbSet,(void))

Void ZPP_Interactor_obj::alloc_cbSet( ){
{
		HX_STACK_PUSH("ZPP_Interactor::alloc_cbSet","zpp_nape/phys/Interactor.hx",349);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::zpp_nape::space::ZPP_Space Block( ::zpp_nape::phys::ZPP_Interactor_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",350);
				{
					HX_STACK_LINE(350)
					return (  (((__this->ishape->body == null()))) ? ::zpp_nape::space::ZPP_Space(null()) : ::zpp_nape::space::ZPP_Space(__this->ishape->body->space) );
				}
				return null();
			}
		};
		HX_STACK_LINE(350)
		::zpp_nape::space::ZPP_Space space = (  (((this->ishape != null()))) ? ::zpp_nape::space::ZPP_Space(_Function_1_1::Block(this)) : ::zpp_nape::space::ZPP_Space((  (((this->ibody != null()))) ? ::zpp_nape::space::ZPP_Space(this->ibody->space) : ::zpp_nape::space::ZPP_Space(this->icompound->space) )) );		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(351)
		{
		}
		HX_STACK_LINE(359)
		if ((((this->cbSet = space->cbsets->get(this->cbTypes)) != null()))){
			HX_STACK_LINE(360)
			(this->cbSet->count)++;
			HX_STACK_LINE(361)
			this->cbSet->interactors->add(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(362)
			this->cbSet->validate();
			HX_STACK_LINE(363)
			space->freshInteractorType(hx::ObjectPtr<OBJ_>(this),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,alloc_cbSet,(void))

Void ZPP_Interactor_obj::insert_cbtype( ::zpp_nape::callbacks::ZPP_CbType cb){
{
		HX_STACK_PUSH("ZPP_Interactor::insert_cbtype","zpp_nape/phys/Interactor.hx",321);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cb,"cb");
		HX_STACK_LINE(321)
		if ((!(this->cbTypes->has(cb)))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Space Block( ::zpp_nape::phys::ZPP_Interactor_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",323);
					{
						HX_STACK_LINE(323)
						return (  (((__this->ishape->body == null()))) ? ::zpp_nape::space::ZPP_Space(null()) : ::zpp_nape::space::ZPP_Space(__this->ishape->body->space) );
					}
					return null();
				}
			};
			HX_STACK_LINE(323)
			::zpp_nape::space::ZPP_Space space = (  (((this->ishape != null()))) ? ::zpp_nape::space::ZPP_Space(_Function_2_1::Block(this)) : ::zpp_nape::space::ZPP_Space((  (((this->ibody != null()))) ? ::zpp_nape::space::ZPP_Space(this->ibody->space) : ::zpp_nape::space::ZPP_Space(this->icompound->space) )) );		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(324)
			if (((space != null()))){
				HX_STACK_LINE(325)
				this->dealloc_cbSet();
				HX_STACK_LINE(326)
				cb->interactors->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(329)
				::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(330)
				{
					HX_STACK_LINE(331)
					::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(332)
					while(((cx_ite != null()))){
						HX_STACK_LINE(333)
						::zpp_nape::callbacks::ZPP_CbType j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(334)
						{
							HX_STACK_LINE(335)
							if (((cb->id < j->id))){
								HX_STACK_LINE(335)
								break;
							}
							HX_STACK_LINE(336)
							pre = cx_ite;
						}
						HX_STACK_LINE(338)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(341)
				{
					HX_STACK_LINE(341)
					::zpp_nape::util::ZNPList_ZPP_CbType _this = this->cbTypes;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(341)
					{
					}
					struct _Function_4_1{
						inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &cb){
							HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",341);
							{
								HX_STACK_LINE(341)
								::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(341)
								{
									HX_STACK_LINE(341)
									if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
										HX_STACK_LINE(341)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
									}
									else{
										HX_STACK_LINE(341)
										ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
										HX_STACK_LINE(341)
										::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
										HX_STACK_LINE(341)
										ret->next = null();
									}
									HX_STACK_LINE(341)
									Dynamic();
								}
								HX_STACK_LINE(341)
								ret->elt = cb;
								HX_STACK_LINE(341)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(341)
					::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_4_1::Block(cb);		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(341)
					if (((pre == null()))){
						HX_STACK_LINE(341)
						temp->next = _this->head;
						HX_STACK_LINE(341)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(341)
						temp->next = pre->next;
						HX_STACK_LINE(341)
						pre->next = temp;
					}
					HX_STACK_LINE(341)
					_this->pushmod = _this->modified = true;
					HX_STACK_LINE(341)
					(_this->length)++;
					HX_STACK_LINE(341)
					temp;
				}
			}
			HX_STACK_LINE(343)
			if (((space != null()))){
				HX_STACK_LINE(344)
				this->alloc_cbSet();
				HX_STACK_LINE(345)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,insert_cbtype,(void))

bool ZPP_Interactor_obj::wrap_cbTypes_adder( ::nape::callbacks::CbType cb){
	HX_STACK_PUSH("ZPP_Interactor::wrap_cbTypes_adder","zpp_nape/phys/Interactor.hx",317);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cb,"cb");
	HX_STACK_LINE(318)
	this->insert_cbtype(cb->zpp_inner);
	HX_STACK_LINE(319)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,wrap_cbTypes_adder,return )

Void ZPP_Interactor_obj::wrap_cbTypes_subber( ::nape::callbacks::CbType pcb){
{
		HX_STACK_PUSH("ZPP_Interactor::wrap_cbTypes_subber","zpp_nape/phys/Interactor.hx",302);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pcb,"pcb");
		HX_STACK_LINE(303)
		::zpp_nape::callbacks::ZPP_CbType cb = pcb->zpp_inner;		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(304)
		if ((this->cbTypes->has(cb))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_Space Block( ::zpp_nape::phys::ZPP_Interactor_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",305);
					{
						HX_STACK_LINE(305)
						return (  (((__this->ishape->body == null()))) ? ::zpp_nape::space::ZPP_Space(null()) : ::zpp_nape::space::ZPP_Space(__this->ishape->body->space) );
					}
					return null();
				}
			};
			HX_STACK_LINE(305)
			::zpp_nape::space::ZPP_Space space = (  (((this->ishape != null()))) ? ::zpp_nape::space::ZPP_Space(_Function_2_1::Block(this)) : ::zpp_nape::space::ZPP_Space((  (((this->ibody != null()))) ? ::zpp_nape::space::ZPP_Space(this->ibody->space) : ::zpp_nape::space::ZPP_Space(this->icompound->space) )) );		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(306)
			if (((space != null()))){
				HX_STACK_LINE(307)
				this->dealloc_cbSet();
				HX_STACK_LINE(308)
				cb->interactors->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(310)
			this->cbTypes->remove(cb);
			HX_STACK_LINE(311)
			if (((space != null()))){
				HX_STACK_LINE(312)
				this->alloc_cbSet();
				HX_STACK_LINE(313)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Interactor_obj,wrap_cbTypes_subber,(void))

Void ZPP_Interactor_obj::immutable_cbTypes( ){
{
		HX_STACK_PUSH("ZPP_Interactor::immutable_cbTypes","zpp_nape/phys/Interactor.hx",298);
		HX_STACK_THIS(this);
		HX_STACK_LINE(298)
		this->immutable_midstep(HX_CSTRING("Interactor::cbTypes"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,immutable_cbTypes,(void))

Void ZPP_Interactor_obj::setupcbTypes( ){
{
		HX_STACK_PUSH("ZPP_Interactor::setupcbTypes","zpp_nape/phys/Interactor.hx",288);
		HX_STACK_THIS(this);
		HX_STACK_LINE(289)
		this->wrap_cbTypes = ::zpp_nape::util::ZPP_CbTypeList_obj::get(this->cbTypes,null());
		HX_STACK_LINE(290)
		this->wrap_cbTypes->zpp_inner->adder = this->wrap_cbTypes_adder_dyn();
		HX_STACK_LINE(291)
		this->wrap_cbTypes->zpp_inner->subber = this->wrap_cbTypes_subber_dyn();
		HX_STACK_LINE(292)
		this->wrap_cbTypes->zpp_inner->dontremove = true;
		HX_STACK_LINE(294)
		this->wrap_cbTypes->zpp_inner->_modifiable = this->immutable_cbTypes_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,setupcbTypes,(void))

::zpp_nape::space::ZPP_Space ZPP_Interactor_obj::getSpace( ){
	HX_STACK_PUSH("ZPP_Interactor::getSpace","zpp_nape/phys/Interactor.hx",281);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Space Block( ::zpp_nape::phys::ZPP_Interactor_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",282);
			{
				HX_STACK_LINE(282)
				return (  (((__this->ishape->body == null()))) ? ::zpp_nape::space::ZPP_Space(null()) : ::zpp_nape::space::ZPP_Space(__this->ishape->body->space) );
			}
			return null();
		}
	};
	HX_STACK_LINE(281)
	return (  (((this->ishape != null()))) ? ::zpp_nape::space::ZPP_Space(_Function_1_1::Block(this)) : ::zpp_nape::space::ZPP_Space((  (((this->ibody != null()))) ? ::zpp_nape::space::ZPP_Space(this->ibody->space) : ::zpp_nape::space::ZPP_Space(this->icompound->space) )) );
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,getSpace,return )

Void ZPP_Interactor_obj::wake( ){
{
		HX_STACK_PUSH("ZPP_Interactor::wake","zpp_nape/phys/Interactor.hx",220);
		HX_STACK_THIS(this);
		HX_STACK_LINE(220)
		if (((this->ishape != null()))){
			HX_STACK_LINE(222)
			::zpp_nape::phys::ZPP_Body body = this->ishape->body;		HX_STACK_VAR(body,"body");
			HX_STACK_LINE(223)
			if (((bool((body != null())) && bool((body->space != null()))))){
				HX_STACK_LINE(223)
				body->space->non_inlined_wake(body,null());
			}
			HX_STACK_LINE(224)
			true;
		}
		else{
			HX_STACK_LINE(226)
			if (((this->ibody != null()))){
				HX_STACK_LINE(226)
				if (((this->ibody->space != null()))){
					HX_STACK_LINE(227)
					this->ibody->space->non_inlined_wake(this->ibody,null());
				}
				else{
					HX_STACK_LINE(227)
					false;
				}
			}
			else{
				HX_STACK_LINE(230)
				if (((this->icompound->space != null()))){
					HX_STACK_LINE(230)
					this->icompound->space->wakeCompound(this->icompound);
				}
				HX_STACK_LINE(231)
				true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,wake,(void))

Void ZPP_Interactor_obj::__iremovedFromSpace( ){
{
		HX_STACK_PUSH("ZPP_Interactor::__iremovedFromSpace","zpp_nape/phys/Interactor.hx",208);
		HX_STACK_THIS(this);
		HX_STACK_LINE(209)
		if (((this->group != null()))){
			HX_STACK_LINE(209)
			int flag = (int)-1;		HX_STACK_VAR(flag,"flag");
			HX_STACK_LINE(209)
			this->group->interactors->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(211)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(212)
			while(((cx_ite != null()))){
				HX_STACK_LINE(213)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(214)
				cb->interactors->remove(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(215)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(218)
		this->dealloc_cbSet();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,__iremovedFromSpace,(void))

Void ZPP_Interactor_obj::__iaddedToSpace( ){
{
		HX_STACK_PUSH("ZPP_Interactor::__iaddedToSpace","zpp_nape/phys/Interactor.hx",196);
		HX_STACK_THIS(this);
		HX_STACK_LINE(197)
		if (((this->group != null()))){
			HX_STACK_LINE(197)
			this->group->interactors->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(199)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->cbTypes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(200)
			while(((cx_ite != null()))){
				HX_STACK_LINE(201)
				::zpp_nape::callbacks::ZPP_CbType cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(202)
				cb->interactors->add(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(203)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(206)
		this->alloc_cbSet();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,__iaddedToSpace,(void))

bool ZPP_Interactor_obj::isCompound( ){
	HX_STACK_PUSH("ZPP_Interactor::isCompound","zpp_nape/phys/Interactor.hx",193);
	HX_STACK_THIS(this);
	HX_STACK_LINE(193)
	return (this->icompound != null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,isCompound,return )

bool ZPP_Interactor_obj::isBody( ){
	HX_STACK_PUSH("ZPP_Interactor::isBody","zpp_nape/phys/Interactor.hx",188);
	HX_STACK_THIS(this);
	HX_STACK_LINE(188)
	return (this->ibody != null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,isBody,return )

bool ZPP_Interactor_obj::isShape( ){
	HX_STACK_PUSH("ZPP_Interactor::isShape","zpp_nape/phys/Interactor.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_LINE(183)
	return (this->ishape != null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Interactor_obj,isShape,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_Interactor_obj::get( ::zpp_nape::phys::ZPP_Interactor i1,::zpp_nape::phys::ZPP_Interactor i2){
	HX_STACK_PUSH("ZPP_Interactor::get","zpp_nape/phys/Interactor.hx",235);
	HX_STACK_ARG(i1,"i1");
	HX_STACK_ARG(i2,"i2");
	HX_STACK_LINE(236)
	{
	}
	HX_STACK_LINE(244)
	int id = (  (((i1->id < i2->id))) ? int(i1->id) : int(i2->id) );		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(245)
	int di = (  (((i1->id < i2->id))) ? int(i2->id) : int(i1->id) );		HX_STACK_VAR(di,"di");
	HX_STACK_LINE(246)
	{
	}
	HX_STACK_LINE(254)
	::zpp_nape::util::ZNPList_ZPP_CallbackSet xs = (  (((i1->cbsets->length < i2->cbsets->length))) ? ::zpp_nape::util::ZNPList_ZPP_CallbackSet(i1->cbsets) : ::zpp_nape::util::ZNPList_ZPP_CallbackSet(i2->cbsets) );		HX_STACK_VAR(xs,"xs");
	HX_STACK_LINE(255)
	::zpp_nape::space::ZPP_CallbackSet ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(257)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet cx_ite = xs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(258)
		while(((cx_ite != null()))){
			HX_STACK_LINE(259)
			::zpp_nape::space::ZPP_CallbackSet x = cx_ite->elt;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(261)
				{
				}
				HX_STACK_LINE(269)
				if (((bool((x->id == id)) && bool((x->di == di))))){
					HX_STACK_LINE(270)
					ret = x;
					HX_STACK_LINE(271)
					break;
				}
			}
			HX_STACK_LINE(274)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(277)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Interactor_obj,get,return )

Void ZPP_Interactor_obj::int_callback( ::zpp_nape::space::ZPP_CallbackSet set,::zpp_nape::callbacks::ZPP_InteractionListener x,::zpp_nape::callbacks::ZPP_Callback cb){
{
		HX_STACK_PUSH("ZPP_Interactor::int_callback","zpp_nape/phys/Interactor.hx",426);
		HX_STACK_ARG(set,"set");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(cb,"cb");
		HX_STACK_LINE(427)
		::zpp_nape::phys::ZPP_Interactor o1 = set->int1;		HX_STACK_VAR(o1,"o1");
		HX_STACK_LINE(428)
		::zpp_nape::phys::ZPP_Interactor o2 = set->int2;		HX_STACK_VAR(o2,"o2");
		struct _Function_1_1{
			inline static bool Block( ::zpp_nape::callbacks::ZPP_InteractionListener &x,::zpp_nape::phys::ZPP_Interactor &o1){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",429);
				{
					HX_STACK_LINE(429)
					::zpp_nape::callbacks::ZPP_OptionType _this = x->options1;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::util::ZNPList_ZPP_CbType xs = o1->cbTypes;		HX_STACK_VAR(xs,"xs");
					HX_STACK_LINE(429)
					return (bool(_this->nonemptyintersection(xs,_this->includes)) && bool(!(_this->nonemptyintersection(xs,_this->excludes))));
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( ::zpp_nape::callbacks::ZPP_InteractionListener &x,::zpp_nape::phys::ZPP_Interactor &o2){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Interactor.hx",429);
				{
					HX_STACK_LINE(429)
					::zpp_nape::callbacks::ZPP_OptionType _this = x->options2;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::util::ZNPList_ZPP_CbType xs = o2->cbTypes;		HX_STACK_VAR(xs,"xs");
					HX_STACK_LINE(429)
					return (bool(_this->nonemptyintersection(xs,_this->includes)) && bool(!(_this->nonemptyintersection(xs,_this->excludes))));
				}
				return null();
			}
		};
		HX_STACK_LINE(429)
		if (((bool(_Function_1_1::Block(x,o1)) && bool(_Function_1_2::Block(x,o2))))){
			HX_STACK_LINE(430)
			cb->int1 = o1;
			HX_STACK_LINE(431)
			cb->int2 = o2;
		}
		else{
			HX_STACK_LINE(434)
			cb->int1 = o2;
			HX_STACK_LINE(435)
			cb->int2 = o1;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Interactor_obj,int_callback,(void))


ZPP_Interactor_obj::ZPP_Interactor_obj()
{
}

void ZPP_Interactor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Interactor);
	HX_MARK_MEMBER_NAME(wrap_cbTypes,"wrap_cbTypes");
	HX_MARK_MEMBER_NAME(cbSet,"cbSet");
	HX_MARK_MEMBER_NAME(cbTypes,"cbTypes");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(cbsets,"cbsets");
	HX_MARK_MEMBER_NAME(icompound,"icompound");
	HX_MARK_MEMBER_NAME(ibody,"ibody");
	HX_MARK_MEMBER_NAME(ishape,"ishape");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(outer_i,"outer_i");
	HX_MARK_END_CLASS();
}

void ZPP_Interactor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wrap_cbTypes,"wrap_cbTypes");
	HX_VISIT_MEMBER_NAME(cbSet,"cbSet");
	HX_VISIT_MEMBER_NAME(cbTypes,"cbTypes");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(cbsets,"cbsets");
	HX_VISIT_MEMBER_NAME(icompound,"icompound");
	HX_VISIT_MEMBER_NAME(ibody,"ibody");
	HX_VISIT_MEMBER_NAME(ishape,"ishape");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(outer_i,"outer_i");
}

Dynamic ZPP_Interactor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wake") ) { return wake_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cbSet") ) { return cbSet; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"ibody") ) { return ibody; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyto") ) { return copyto_dyn(); }
		if (HX_FIELD_EQ(inName,"cbsets") ) { return cbsets; }
		if (HX_FIELD_EQ(inName,"isBody") ) { return isBody_dyn(); }
		if (HX_FIELD_EQ(inName,"ishape") ) { return ishape; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cbTypes") ) { return cbTypes; }
		if (HX_FIELD_EQ(inName,"isShape") ) { return isShape_dyn(); }
		if (HX_FIELD_EQ(inName,"outer_i") ) { return outer_i; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setGroup") ) { return setGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"getSpace") ) { return getSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"icompound") ) { return icompound; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isCompound") ) { return isCompound_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alloc_cbSet") ) { return alloc_cbSet_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"int_callback") ) { return int_callback_dyn(); }
		if (HX_FIELD_EQ(inName,"lookup_group") ) { return lookup_group_dyn(); }
		if (HX_FIELD_EQ(inName,"setupcbTypes") ) { return setupcbTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_cbTypes") ) { return wrap_cbTypes; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dealloc_cbSet") ) { return dealloc_cbSet_dyn(); }
		if (HX_FIELD_EQ(inName,"insert_cbtype") ) { return insert_cbtype_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__iaddedToSpace") ) { return __iaddedToSpace_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"immutable_midstep") ) { return immutable_midstep_dyn(); }
		if (HX_FIELD_EQ(inName,"immutable_cbTypes") ) { return immutable_cbTypes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes_adder") ) { return wrap_cbTypes_adder_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes_subber") ) { return wrap_cbTypes_subber_dyn(); }
		if (HX_FIELD_EQ(inName,"__iremovedFromSpace") ) { return __iremovedFromSpace_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Interactor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cbSet") ) { cbSet=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ibody") ) { ibody=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cbsets") ) { cbsets=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CallbackSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ishape") ) { ishape=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cbTypes") ) { cbTypes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_i") ) { outer_i=inValue.Cast< ::nape::phys::Interactor >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"icompound") ) { icompound=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"wrap_cbTypes") ) { wrap_cbTypes=inValue.Cast< ::nape::callbacks::CbTypeList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Interactor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("wrap_cbTypes"));
	outFields->push(HX_CSTRING("cbSet"));
	outFields->push(HX_CSTRING("cbTypes"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("cbsets"));
	outFields->push(HX_CSTRING("icompound"));
	outFields->push(HX_CSTRING("ibody"));
	outFields->push(HX_CSTRING("ishape"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("outer_i"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get"),
	HX_CSTRING("int_callback"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("copyto"),
	HX_CSTRING("lookup_group"),
	HX_CSTRING("immutable_midstep"),
	HX_CSTRING("setGroup"),
	HX_CSTRING("dealloc_cbSet"),
	HX_CSTRING("alloc_cbSet"),
	HX_CSTRING("insert_cbtype"),
	HX_CSTRING("wrap_cbTypes_adder"),
	HX_CSTRING("wrap_cbTypes_subber"),
	HX_CSTRING("immutable_cbTypes"),
	HX_CSTRING("setupcbTypes"),
	HX_CSTRING("wrap_cbTypes"),
	HX_CSTRING("cbSet"),
	HX_CSTRING("cbTypes"),
	HX_CSTRING("group"),
	HX_CSTRING("getSpace"),
	HX_CSTRING("cbsets"),
	HX_CSTRING("wake"),
	HX_CSTRING("__iremovedFromSpace"),
	HX_CSTRING("__iaddedToSpace"),
	HX_CSTRING("isCompound"),
	HX_CSTRING("isBody"),
	HX_CSTRING("isShape"),
	HX_CSTRING("icompound"),
	HX_CSTRING("ibody"),
	HX_CSTRING("ishape"),
	HX_CSTRING("userData"),
	HX_CSTRING("id"),
	HX_CSTRING("outer_i"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Interactor_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Interactor_obj::__mClass,"__mClass");
};

Class ZPP_Interactor_obj::__mClass;

void ZPP_Interactor_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.phys.ZPP_Interactor"), hx::TCanCast< ZPP_Interactor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Interactor_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace phys
