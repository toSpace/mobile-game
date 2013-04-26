#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_SensorArbiter_obj::__construct()
{
HX_STACK_PUSH("ZPP_SensorArbiter::new","zpp_nape/dynamics/Arbiter.hx",355);
{
	HX_STACK_LINE(356)
	this->next = null();
	HX_STACK_LINE(406)
	super::__construct();
	HX_STACK_LINE(407)
	this->type = ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR;
	HX_STACK_LINE(408)
	this->sensorarb = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

ZPP_SensorArbiter_obj::~ZPP_SensorArbiter_obj() { }

Dynamic ZPP_SensorArbiter_obj::__CreateEmpty() { return  new ZPP_SensorArbiter_obj; }
hx::ObjectPtr< ZPP_SensorArbiter_obj > ZPP_SensorArbiter_obj::__new()
{  hx::ObjectPtr< ZPP_SensorArbiter_obj > result = new ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SensorArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SensorArbiter_obj > result = new ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

Void ZPP_SensorArbiter_obj::makeimmutable( ){
{
		HX_STACK_PUSH("ZPP_SensorArbiter::makeimmutable","zpp_nape/dynamics/Arbiter.hx",442);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SensorArbiter_obj,makeimmutable,(void))

Void ZPP_SensorArbiter_obj::makemutable( ){
{
		HX_STACK_PUSH("ZPP_SensorArbiter::makemutable","zpp_nape/dynamics/Arbiter.hx",439);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SensorArbiter_obj,makemutable,(void))

Void ZPP_SensorArbiter_obj::retire( ){
{
		HX_STACK_PUSH("ZPP_SensorArbiter::retire","zpp_nape/dynamics/Arbiter.hx",417);
		HX_STACK_THIS(this);
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			{
			}
			HX_STACK_LINE(418)
			{
			}
			HX_STACK_LINE(418)
			{
			}
			HX_STACK_LINE(418)
			{
			}
			HX_STACK_LINE(418)
			if ((!(this->cleared))){
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(418)
					{
					}
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						{
						}
						HX_STACK_LINE(418)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(418)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(418)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(418)
						while(((cur != null()))){
							HX_STACK_LINE(418)
							if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(418)
								{
									HX_STACK_LINE(418)
									{
									}
									HX_STACK_LINE(418)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(418)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(418)
									if (((pre == null()))){
										HX_STACK_LINE(418)
										old = _this->head;
										HX_STACK_LINE(418)
										ret1 = old->next;
										HX_STACK_LINE(418)
										_this->head = ret1;
										HX_STACK_LINE(418)
										if (((_this->head == null()))){
											HX_STACK_LINE(418)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(418)
										old = pre->next;
										HX_STACK_LINE(418)
										ret1 = old->next;
										HX_STACK_LINE(418)
										pre->next = ret1;
										HX_STACK_LINE(418)
										if (((ret1 == null()))){
											HX_STACK_LINE(418)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(418)
									{
									}
									HX_STACK_LINE(418)
									{
										HX_STACK_LINE(418)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(418)
										{
										}
										HX_STACK_LINE(418)
										o->elt = null();
										HX_STACK_LINE(418)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(418)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(418)
									_this->modified = true;
									HX_STACK_LINE(418)
									(_this->length)--;
									HX_STACK_LINE(418)
									_this->pushmod = true;
									HX_STACK_LINE(418)
									ret1;
								}
								HX_STACK_LINE(418)
								ret = true;
								HX_STACK_LINE(418)
								break;
							}
							HX_STACK_LINE(418)
							pre = cur;
							HX_STACK_LINE(418)
							cur = cur->next;
						}
						HX_STACK_LINE(418)
						ret;
					}
				}
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(418)
					{
					}
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						{
						}
						HX_STACK_LINE(418)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(418)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(418)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(418)
						while(((cur != null()))){
							HX_STACK_LINE(418)
							if (((cur->elt == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(418)
								{
									HX_STACK_LINE(418)
									{
									}
									HX_STACK_LINE(418)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(418)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(418)
									if (((pre == null()))){
										HX_STACK_LINE(418)
										old = _this->head;
										HX_STACK_LINE(418)
										ret1 = old->next;
										HX_STACK_LINE(418)
										_this->head = ret1;
										HX_STACK_LINE(418)
										if (((_this->head == null()))){
											HX_STACK_LINE(418)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(418)
										old = pre->next;
										HX_STACK_LINE(418)
										ret1 = old->next;
										HX_STACK_LINE(418)
										pre->next = ret1;
										HX_STACK_LINE(418)
										if (((ret1 == null()))){
											HX_STACK_LINE(418)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(418)
									{
									}
									HX_STACK_LINE(418)
									{
										HX_STACK_LINE(418)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(418)
										{
										}
										HX_STACK_LINE(418)
										o->elt = null();
										HX_STACK_LINE(418)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(418)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(418)
									_this->modified = true;
									HX_STACK_LINE(418)
									(_this->length)--;
									HX_STACK_LINE(418)
									_this->pushmod = true;
									HX_STACK_LINE(418)
									ret1;
								}
								HX_STACK_LINE(418)
								ret = true;
								HX_STACK_LINE(418)
								break;
							}
							HX_STACK_LINE(418)
							pre = cur;
							HX_STACK_LINE(418)
							cur = cur->next;
						}
						HX_STACK_LINE(418)
						ret;
					}
				}
				HX_STACK_LINE(418)
				if (((this->pair != null()))){
					HX_STACK_LINE(418)
					this->pair->arb = null();
					HX_STACK_LINE(418)
					this->pair = null();
				}
			}
			HX_STACK_LINE(418)
			this->b1 = this->b2 = null();
			HX_STACK_LINE(418)
			this->active = false;
			HX_STACK_LINE(418)
			this->intchange = false;
		}
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(420)
			::zpp_nape::dynamics::ZPP_SensorArbiter o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(421)
			{
			}
			HX_STACK_LINE(430)
			o->next = ::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool;
			HX_STACK_LINE(431)
			::zpp_nape::dynamics::ZPP_SensorArbiter_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SensorArbiter_obj,retire,(void))

Void ZPP_SensorArbiter_obj::assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di){
{
		HX_STACK_PUSH("ZPP_SensorArbiter::assign","zpp_nape/dynamics/Arbiter.hx",412);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s1,"s1");
		HX_STACK_ARG(s2,"s2");
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(di,"di");
		HX_STACK_LINE(412)
		{
			HX_STACK_LINE(413)
			this->b1 = s1->body;
			HX_STACK_LINE(413)
			this->ws1 = s1;
			HX_STACK_LINE(413)
			this->b2 = s2->body;
			HX_STACK_LINE(413)
			this->ws2 = s2;
			HX_STACK_LINE(413)
			this->id = id;
			HX_STACK_LINE(413)
			this->di = di;
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(413)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b1->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(413)
				{
				}
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_SensorArbiter_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",413);
						{
							HX_STACK_LINE(413)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(413)
							{
								HX_STACK_LINE(413)
								if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(413)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(413)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
									HX_STACK_LINE(413)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(413)
									ret->next = null();
								}
								HX_STACK_LINE(413)
								Dynamic();
							}
							HX_STACK_LINE(413)
							ret->elt = __this;
							HX_STACK_LINE(413)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(413)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_3_1::Block(this);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(413)
				temp->next = _this->head;
				HX_STACK_LINE(413)
				_this->head = temp;
				HX_STACK_LINE(413)
				_this->modified = true;
				HX_STACK_LINE(413)
				(_this->length)++;
				HX_STACK_LINE(413)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(413)
			{
				HX_STACK_LINE(413)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->b2->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(413)
				{
				}
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_SensorArbiter_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Arbiter.hx",413);
						{
							HX_STACK_LINE(413)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(413)
							{
								HX_STACK_LINE(413)
								if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(413)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(413)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
									HX_STACK_LINE(413)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(413)
									ret->next = null();
								}
								HX_STACK_LINE(413)
								Dynamic();
							}
							HX_STACK_LINE(413)
							ret->elt = __this;
							HX_STACK_LINE(413)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(413)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_3_1::Block(this);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(413)
				temp->next = _this->head;
				HX_STACK_LINE(413)
				_this->head = temp;
				HX_STACK_LINE(413)
				_this->modified = true;
				HX_STACK_LINE(413)
				(_this->length)++;
				HX_STACK_LINE(413)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(413)
			this->active = true;
			HX_STACK_LINE(413)
			this->present = (int)0;
			HX_STACK_LINE(413)
			this->cleared = false;
			HX_STACK_LINE(413)
			this->sleeping = false;
			HX_STACK_LINE(413)
			this->fresh = false;
			HX_STACK_LINE(413)
			this->presentable = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_SensorArbiter_obj,assign,(void))

Void ZPP_SensorArbiter_obj::free( ){
{
		HX_STACK_PUSH("ZPP_SensorArbiter::free","zpp_nape/dynamics/Arbiter.hx",395);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SensorArbiter_obj,free,(void))

Void ZPP_SensorArbiter_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_SensorArbiter::alloc","zpp_nape/dynamics/Arbiter.hx",383);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SensorArbiter_obj,alloc,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZPP_SensorArbiter_obj::zpp_pool;


ZPP_SensorArbiter_obj::ZPP_SensorArbiter_obj()
{
}

void ZPP_SensorArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SensorArbiter);
	HX_MARK_MEMBER_NAME(next,"next");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_SensorArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_SensorArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"retire") ) { return retire_dyn(); }
		if (HX_FIELD_EQ(inName,"assign") ) { return assign_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"makemutable") ) { return makemutable_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"makeimmutable") ) { return makeimmutable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SensorArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_SensorArbiter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::dynamics::ZPP_SensorArbiter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SensorArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("makeimmutable"),
	HX_CSTRING("makemutable"),
	HX_CSTRING("retire"),
	HX_CSTRING("assign"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SensorArbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_SensorArbiter_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SensorArbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_SensorArbiter_obj::zpp_pool,"zpp_pool");
};

Class ZPP_SensorArbiter_obj::__mClass;

void ZPP_SensorArbiter_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_SensorArbiter"), hx::TCanCast< ZPP_SensorArbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_SensorArbiter_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace dynamics
