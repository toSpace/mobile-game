#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_CallbackSet_obj::__construct()
{
HX_STACK_PUSH("ZPP_CallbackSet::new","zpp_nape/space/Space.hx",645);
{
	HX_STACK_LINE(1084)
	this->lazydel = false;
	HX_STACK_LINE(1083)
	this->freed = false;
	HX_STACK_LINE(718)
	this->length = (int)0;
	HX_STACK_LINE(717)
	this->pushmod = false;
	HX_STACK_LINE(716)
	this->modified = false;
	HX_STACK_LINE(715)
	this->_inuse = false;
	HX_STACK_LINE(704)
	this->next = null();
	HX_STACK_LINE(649)
	this->int2 = null();
	HX_STACK_LINE(648)
	this->int1 = null();
	HX_STACK_LINE(647)
	this->di = (int)0;
	HX_STACK_LINE(646)
	this->id = (int)0;
	HX_STACK_LINE(1113)
	this->arbiters = ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__new();
}
;
	return null();
}

ZPP_CallbackSet_obj::~ZPP_CallbackSet_obj() { }

Dynamic ZPP_CallbackSet_obj::__CreateEmpty() { return  new ZPP_CallbackSet_obj; }
hx::ObjectPtr< ZPP_CallbackSet_obj > ZPP_CallbackSet_obj::__new()
{  hx::ObjectPtr< ZPP_CallbackSet_obj > result = new ZPP_CallbackSet_obj();
	result->__construct();
	return result;}

Dynamic ZPP_CallbackSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CallbackSet_obj > result = new ZPP_CallbackSet_obj();
	result->__construct();
	return result;}

bool ZPP_CallbackSet_obj::sleeping( ){
	HX_STACK_PUSH("ZPP_CallbackSet::sleeping","zpp_nape/space/Space.hx",1163);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1164)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1165)
	{
		HX_STACK_LINE(1166)
		ret = true;
		HX_STACK_LINE(1167)
		{
			HX_STACK_LINE(1168)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1169)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1170)
				::zpp_nape::dynamics::ZPP_Arbiter x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1171)
				if ((x->sleeping)){
					HX_STACK_LINE(1174)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1175)
					continue;
				}
				else{
					HX_STACK_LINE(1179)
					ret = false;
					HX_STACK_LINE(1180)
					break;
				}
				HX_STACK_LINE(1183)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1187)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,sleeping,return )

bool ZPP_CallbackSet_obj::really_empty( ){
	HX_STACK_PUSH("ZPP_CallbackSet::really_empty","zpp_nape/space/Space.hx",1158);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1158)
	return (this->arbiters->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,really_empty,return )

bool ZPP_CallbackSet_obj::empty_arb( int type){
	HX_STACK_PUSH("ZPP_CallbackSet::empty_arb","zpp_nape/space/Space.hx",1130);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(1131)
	bool retvar;		HX_STACK_VAR(retvar,"retvar");
	HX_STACK_LINE(1132)
	{
		HX_STACK_LINE(1133)
		retvar = true;
		HX_STACK_LINE(1134)
		{
			HX_STACK_LINE(1135)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1136)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1137)
				::zpp_nape::dynamics::ZPP_Arbiter x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1138)
				if (((((int(x->type) & int(type))) == (int)0))){
					HX_STACK_LINE(1141)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1142)
					continue;
				}
				else{
					HX_STACK_LINE(1146)
					retvar = false;
					HX_STACK_LINE(1147)
					break;
				}
				HX_STACK_LINE(1150)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1154)
	return retvar;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,empty_arb,return )

Void ZPP_CallbackSet_obj::remove_arb( ::zpp_nape::dynamics::ZPP_Arbiter x){
{
		HX_STACK_PUSH("ZPP_CallbackSet::remove_arb","zpp_nape/space/Space.hx",1127);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1128)
		::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->arbiters;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1128)
		{
			HX_STACK_LINE(1128)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(1128)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1128)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1128)
			while(((cur != null()))){
				HX_STACK_LINE(1128)
				if (((cur->elt == x))){
					HX_STACK_LINE(1128)
					{
						HX_STACK_LINE(1128)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1128)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1128)
						if (((pre == null()))){
							HX_STACK_LINE(1128)
							old = _this->head;
							HX_STACK_LINE(1128)
							ret1 = old->next;
							HX_STACK_LINE(1128)
							_this->head = ret1;
							HX_STACK_LINE(1128)
							if (((_this->head == null()))){
								HX_STACK_LINE(1128)
								_this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1128)
							old = pre->next;
							HX_STACK_LINE(1128)
							ret1 = old->next;
							HX_STACK_LINE(1128)
							pre->next = ret1;
							HX_STACK_LINE(1128)
							if (((ret1 == null()))){
								HX_STACK_LINE(1128)
								_this->pushmod = true;
							}
						}
						HX_STACK_LINE(1128)
						{
							HX_STACK_LINE(1128)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1128)
							o->elt = null();
							HX_STACK_LINE(1128)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
							HX_STACK_LINE(1128)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1128)
						_this->modified = true;
						HX_STACK_LINE(1128)
						(_this->length)--;
						HX_STACK_LINE(1128)
						_this->pushmod = true;
						HX_STACK_LINE(1128)
						ret1;
					}
					HX_STACK_LINE(1128)
					ret = true;
					HX_STACK_LINE(1128)
					break;
				}
				HX_STACK_LINE(1128)
				pre = cur;
				HX_STACK_LINE(1128)
				cur = cur->next;
			}
			HX_STACK_LINE(1128)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,remove_arb,(void))

bool ZPP_CallbackSet_obj::try_remove_arb( ::zpp_nape::dynamics::ZPP_Arbiter x){
	HX_STACK_PUSH("ZPP_CallbackSet::try_remove_arb","zpp_nape/space/Space.hx",1124);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::space::ZPP_CallbackSet_obj *__this,::zpp_nape::dynamics::ZPP_Arbiter &x){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",1125);
			{
				HX_STACK_LINE(1125)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = __this->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1125)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(1125)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(1125)
				bool ret = false;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1125)
				while(((cur != null()))){
					HX_STACK_LINE(1125)
					if (((cur->elt == x))){
						HX_STACK_LINE(1125)
						{
							HX_STACK_LINE(1125)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
							HX_STACK_LINE(1125)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(1125)
							if (((pre == null()))){
								HX_STACK_LINE(1125)
								old = _this->head;
								HX_STACK_LINE(1125)
								ret1 = old->next;
								HX_STACK_LINE(1125)
								_this->head = ret1;
								HX_STACK_LINE(1125)
								if (((_this->head == null()))){
									HX_STACK_LINE(1125)
									_this->pushmod = true;
								}
							}
							else{
								HX_STACK_LINE(1125)
								old = pre->next;
								HX_STACK_LINE(1125)
								ret1 = old->next;
								HX_STACK_LINE(1125)
								pre->next = ret1;
								HX_STACK_LINE(1125)
								if (((ret1 == null()))){
									HX_STACK_LINE(1125)
									_this->pushmod = true;
								}
							}
							HX_STACK_LINE(1125)
							{
								HX_STACK_LINE(1125)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1125)
								o->elt = null();
								HX_STACK_LINE(1125)
								o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
								HX_STACK_LINE(1125)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1125)
							_this->modified = true;
							HX_STACK_LINE(1125)
							(_this->length)--;
							HX_STACK_LINE(1125)
							_this->pushmod = true;
							HX_STACK_LINE(1125)
							ret1;
						}
						HX_STACK_LINE(1125)
						ret = true;
						HX_STACK_LINE(1125)
						break;
					}
					HX_STACK_LINE(1125)
					pre = cur;
					HX_STACK_LINE(1125)
					cur = cur->next;
				}
				HX_STACK_LINE(1125)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1124)
	return _Function_1_1::Block(this,x);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,try_remove_arb,return )

bool ZPP_CallbackSet_obj::add_arb( ::zpp_nape::dynamics::ZPP_Arbiter x){
	HX_STACK_PUSH("ZPP_CallbackSet::add_arb","zpp_nape/space/Space.hx",1117);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::space::ZPP_CallbackSet_obj *__this,::zpp_nape::dynamics::ZPP_Arbiter &x){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",1118);
			{
				HX_STACK_LINE(1118)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1118)
				{
					HX_STACK_LINE(1118)
					ret = false;
					HX_STACK_LINE(1118)
					{
						HX_STACK_LINE(1118)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = __this->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1118)
						while(((cx_ite != null()))){
							HX_STACK_LINE(1118)
							::zpp_nape::dynamics::ZPP_Arbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(1118)
							if (((npite == x))){
								HX_STACK_LINE(1118)
								ret = true;
								HX_STACK_LINE(1118)
								break;
							}
							HX_STACK_LINE(1118)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(1118)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1117)
	if ((!(_Function_1_1::Block(this,x)))){
		HX_STACK_LINE(1119)
		{
			HX_STACK_LINE(1119)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->arbiters;		HX_STACK_VAR(_this,"_this");
			struct _Function_3_1{
				inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &x){
					HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",1119);
					{
						HX_STACK_LINE(1119)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1119)
						{
							HX_STACK_LINE(1119)
							if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
								HX_STACK_LINE(1119)
								ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
							}
							else{
								HX_STACK_LINE(1119)
								ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
								HX_STACK_LINE(1119)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
								HX_STACK_LINE(1119)
								ret->next = null();
							}
							HX_STACK_LINE(1119)
							Dynamic();
						}
						HX_STACK_LINE(1119)
						ret->elt = x;
						HX_STACK_LINE(1119)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(1119)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_3_1::Block(x);		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(1119)
			temp->next = _this->head;
			HX_STACK_LINE(1119)
			_this->head = temp;
			HX_STACK_LINE(1119)
			_this->modified = true;
			HX_STACK_LINE(1119)
			(_this->length)++;
			HX_STACK_LINE(1119)
			x;
		}
		HX_STACK_LINE(1120)
		return true;
	}
	else{
		HX_STACK_LINE(1122)
		return false;
	}
	HX_STACK_LINE(1117)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,add_arb,return )

Void ZPP_CallbackSet_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::alloc","zpp_nape/space/Space.hx",1102);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1103)
		this->freed = false;
		HX_STACK_LINE(1104)
		this->lazydel = false;
		HX_STACK_LINE(1106)
		this->COLLISIONstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
		HX_STACK_LINE(1107)
		this->COLLISIONstamp = (int)0;
		HX_STACK_LINE(1108)
		this->SENSORstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
		HX_STACK_LINE(1109)
		this->SENSORstamp = (int)0;
		HX_STACK_LINE(1110)
		this->FLUIDstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
		HX_STACK_LINE(1111)
		this->FLUIDstamp = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,alloc,(void))

Void ZPP_CallbackSet_obj::free( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::free","zpp_nape/space/Space.hx",1087);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1088)
		this->int1 = this->int2 = null();
		HX_STACK_LINE(1089)
		this->id = this->di = (int)-1;
		HX_STACK_LINE(1090)
		this->freed = true;
		HX_STACK_LINE(1091)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,free,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::at( int ind){
	HX_STACK_PUSH("ZPP_CallbackSet::at","zpp_nape/space/Space.hx",1047);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(1056)
	::zpp_nape::space::ZPP_CallbackSet it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(1057)
	return (  (((it != null()))) ? ::zpp_nape::space::ZPP_CallbackSet(it) : ::zpp_nape::space::ZPP_CallbackSet(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,at,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZPP_CallbackSet::iterator_at","zpp_nape/space/Space.hx",1034);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(1043)
	::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1044)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(1044)
		ret = ret->next;
	}
	HX_STACK_LINE(1045)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,iterator_at,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::back( ){
	HX_STACK_PUSH("ZPP_CallbackSet::back","zpp_nape/space/Space.hx",1025);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1026)
	::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1027)
	::zpp_nape::space::ZPP_CallbackSet cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1028)
	while(((cur != null()))){
		HX_STACK_LINE(1029)
		ret = cur;
		HX_STACK_LINE(1030)
		cur = cur->next;
	}
	HX_STACK_LINE(1032)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,back,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::front( ){
	HX_STACK_PUSH("ZPP_CallbackSet::front","zpp_nape/space/Space.hx",1022);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1022)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,front,return )

bool ZPP_CallbackSet_obj::inlined_has( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_PUSH("ZPP_CallbackSet::inlined_has","zpp_nape/space/Space.hx",992);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1001)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1002)
	{
		HX_STACK_LINE(1003)
		ret = false;
		HX_STACK_LINE(1004)
		{
			HX_STACK_LINE(1005)
			::zpp_nape::space::ZPP_CallbackSet cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1006)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1007)
				::zpp_nape::space::ZPP_CallbackSet npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(1008)
				if (((npite == obj))){
					HX_STACK_LINE(1010)
					ret = true;
					HX_STACK_LINE(1011)
					break;
				}
				HX_STACK_LINE(1014)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1018)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_has,return )

bool ZPP_CallbackSet_obj::has( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_PUSH("ZPP_CallbackSet::has","zpp_nape/space/Space.hx",987);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::space::ZPP_CallbackSet_obj *__this,::zpp_nape::space::ZPP_CallbackSet &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",988);
			{
				HX_STACK_LINE(988)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(988)
				{
					HX_STACK_LINE(988)
					ret = false;
					HX_STACK_LINE(988)
					{
						HX_STACK_LINE(988)
						::zpp_nape::space::ZPP_CallbackSet cx_ite = __this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(988)
						while(((cx_ite != null()))){
							HX_STACK_LINE(988)
							::zpp_nape::space::ZPP_CallbackSet npite = cx_ite;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(988)
							if (((npite == obj))){
								HX_STACK_LINE(988)
								ret = true;
								HX_STACK_LINE(988)
								break;
							}
							HX_STACK_LINE(988)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(988)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(987)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,has,return )

int ZPP_CallbackSet_obj::size( ){
	HX_STACK_PUSH("ZPP_CallbackSet::size","zpp_nape/space/Space.hx",984);
	HX_STACK_THIS(this);
	HX_STACK_LINE(984)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,size,return )

bool ZPP_CallbackSet_obj::empty( ){
	HX_STACK_PUSH("ZPP_CallbackSet::empty","zpp_nape/space/Space.hx",979);
	HX_STACK_THIS(this);
	HX_STACK_LINE(979)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,empty,return )

Void ZPP_CallbackSet_obj::reverse( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::reverse","zpp_nape/space/Space.hx",964);
		HX_STACK_THIS(this);
		HX_STACK_LINE(965)
		::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(966)
		::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(967)
		while(((cur != null()))){
			HX_STACK_LINE(968)
			::zpp_nape::space::ZPP_CallbackSet nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(969)
			cur->next = pre;
			HX_STACK_LINE(970)
			this->next = cur;
			HX_STACK_LINE(971)
			pre = cur;
			HX_STACK_LINE(972)
			cur = nx;
		}
		HX_STACK_LINE(974)
		this->modified = true;
		HX_STACK_LINE(975)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,reverse,(void))

Void ZPP_CallbackSet_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::inlined_clear","zpp_nape/space/Space.hx",958);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,inlined_clear,(void))

Void ZPP_CallbackSet_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::clear","zpp_nape/space/Space.hx",953);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,clear,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::splice( ::zpp_nape::space::ZPP_CallbackSet pre,int n){
	HX_STACK_PUSH("ZPP_CallbackSet::splice","zpp_nape/space/Space.hx",949);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(950)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(950)
		this->erase(pre);
	}
	HX_STACK_LINE(951)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,splice,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_erase( ::zpp_nape::space::ZPP_CallbackSet pre){
	HX_STACK_PUSH("ZPP_CallbackSet::inlined_erase","zpp_nape/space/Space.hx",917);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(926)
	::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(927)
	::zpp_nape::space::ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(928)
	if (((pre == null()))){
		HX_STACK_LINE(929)
		old = this->next;
		HX_STACK_LINE(930)
		ret = old->next;
		HX_STACK_LINE(931)
		this->next = ret;
		HX_STACK_LINE(932)
		if (((this->next == null()))){
			HX_STACK_LINE(932)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(935)
		old = pre->next;
		HX_STACK_LINE(936)
		ret = old->next;
		HX_STACK_LINE(937)
		pre->next = ret;
		HX_STACK_LINE(938)
		if (((ret == null()))){
			HX_STACK_LINE(938)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(940)
	old->_inuse = false;
	HX_STACK_LINE(944)
	this->modified = true;
	HX_STACK_LINE(945)
	(this->length)--;
	HX_STACK_LINE(946)
	this->pushmod = true;
	HX_STACK_LINE(947)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_erase,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::erase( ::zpp_nape::space::ZPP_CallbackSet pre){
	HX_STACK_PUSH("ZPP_CallbackSet::erase","zpp_nape/space/Space.hx",912);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet_obj *__this,::zpp_nape::space::ZPP_CallbackSet &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",913);
			{
				HX_STACK_LINE(913)
				::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(913)
				::zpp_nape::space::ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(913)
				if (((pre == null()))){
					HX_STACK_LINE(913)
					old = __this->next;
					HX_STACK_LINE(913)
					ret = old->next;
					HX_STACK_LINE(913)
					__this->next = ret;
					HX_STACK_LINE(913)
					if (((__this->next == null()))){
						HX_STACK_LINE(913)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(913)
					old = pre->next;
					HX_STACK_LINE(913)
					ret = old->next;
					HX_STACK_LINE(913)
					pre->next = ret;
					HX_STACK_LINE(913)
					if (((ret == null()))){
						HX_STACK_LINE(913)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(913)
				old->_inuse = false;
				HX_STACK_LINE(913)
				__this->modified = true;
				HX_STACK_LINE(913)
				(__this->length)--;
				HX_STACK_LINE(913)
				__this->pushmod = true;
				HX_STACK_LINE(913)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(912)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,erase,return )

bool ZPP_CallbackSet_obj::inlined_try_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_PUSH("ZPP_CallbackSet::inlined_try_remove","zpp_nape/space/Space.hx",889);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(898)
	::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(899)
	::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(900)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(901)
	while(((cur != null()))){
		HX_STACK_LINE(902)
		if (((cur == obj))){
			HX_STACK_LINE(903)
			{
				HX_STACK_LINE(903)
				::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(903)
				::zpp_nape::space::ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(903)
				if (((pre == null()))){
					HX_STACK_LINE(903)
					old = this->next;
					HX_STACK_LINE(903)
					ret1 = old->next;
					HX_STACK_LINE(903)
					this->next = ret1;
					HX_STACK_LINE(903)
					if (((this->next == null()))){
						HX_STACK_LINE(903)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(903)
					old = pre->next;
					HX_STACK_LINE(903)
					ret1 = old->next;
					HX_STACK_LINE(903)
					pre->next = ret1;
					HX_STACK_LINE(903)
					if (((ret1 == null()))){
						HX_STACK_LINE(903)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(903)
				old->_inuse = false;
				HX_STACK_LINE(903)
				this->modified = true;
				HX_STACK_LINE(903)
				(this->length)--;
				HX_STACK_LINE(903)
				this->pushmod = true;
				HX_STACK_LINE(903)
				ret1;
			}
			HX_STACK_LINE(904)
			ret = true;
			HX_STACK_LINE(905)
			break;
		}
		HX_STACK_LINE(907)
		pre = cur;
		HX_STACK_LINE(908)
		cur = cur->next;
	}
	HX_STACK_LINE(910)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_try_remove,return )

Void ZPP_CallbackSet_obj::inlined_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
{
		HX_STACK_PUSH("ZPP_CallbackSet::inlined_remove","zpp_nape/space/Space.hx",876);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(885)
		::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(885)
		::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(885)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(885)
		while(((cur != null()))){
			HX_STACK_LINE(885)
			if (((cur == obj))){
				HX_STACK_LINE(885)
				{
					HX_STACK_LINE(885)
					::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(885)
					::zpp_nape::space::ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(885)
					if (((pre == null()))){
						HX_STACK_LINE(885)
						old = this->next;
						HX_STACK_LINE(885)
						ret1 = old->next;
						HX_STACK_LINE(885)
						this->next = ret1;
						HX_STACK_LINE(885)
						if (((this->next == null()))){
							HX_STACK_LINE(885)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(885)
						old = pre->next;
						HX_STACK_LINE(885)
						ret1 = old->next;
						HX_STACK_LINE(885)
						pre->next = ret1;
						HX_STACK_LINE(885)
						if (((ret1 == null()))){
							HX_STACK_LINE(885)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(885)
					old->_inuse = false;
					HX_STACK_LINE(885)
					this->modified = true;
					HX_STACK_LINE(885)
					(this->length)--;
					HX_STACK_LINE(885)
					this->pushmod = true;
					HX_STACK_LINE(885)
					ret1;
				}
				HX_STACK_LINE(885)
				ret = true;
				HX_STACK_LINE(885)
				break;
			}
			HX_STACK_LINE(885)
			pre = cur;
			HX_STACK_LINE(885)
			cur = cur->next;
		}
		HX_STACK_LINE(885)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_remove,(void))

bool ZPP_CallbackSet_obj::try_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_PUSH("ZPP_CallbackSet::try_remove","zpp_nape/space/Space.hx",851);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(860)
	::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(861)
	::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(862)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(863)
	while(((cur != null()))){
		HX_STACK_LINE(864)
		if (((cur == obj))){
			HX_STACK_LINE(865)
			this->erase(pre);
			HX_STACK_LINE(866)
			ret = true;
			HX_STACK_LINE(867)
			break;
		}
		HX_STACK_LINE(869)
		pre = cur;
		HX_STACK_LINE(870)
		cur = cur->next;
	}
	HX_STACK_LINE(872)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,try_remove,return )

Void ZPP_CallbackSet_obj::remove( ::zpp_nape::space::ZPP_CallbackSet obj){
{
		HX_STACK_PUSH("ZPP_CallbackSet::remove","zpp_nape/space/Space.hx",840);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(849)
		::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(849)
		::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(849)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(849)
		while(((cur != null()))){
			HX_STACK_LINE(849)
			if (((cur == obj))){
				HX_STACK_LINE(849)
				{
					HX_STACK_LINE(849)
					::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(849)
					::zpp_nape::space::ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(849)
					if (((pre == null()))){
						HX_STACK_LINE(849)
						old = this->next;
						HX_STACK_LINE(849)
						ret1 = old->next;
						HX_STACK_LINE(849)
						this->next = ret1;
						HX_STACK_LINE(849)
						if (((this->next == null()))){
							HX_STACK_LINE(849)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(849)
						old = pre->next;
						HX_STACK_LINE(849)
						ret1 = old->next;
						HX_STACK_LINE(849)
						pre->next = ret1;
						HX_STACK_LINE(849)
						if (((ret1 == null()))){
							HX_STACK_LINE(849)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(849)
					old->_inuse = false;
					HX_STACK_LINE(849)
					this->modified = true;
					HX_STACK_LINE(849)
					(this->length)--;
					HX_STACK_LINE(849)
					this->pushmod = true;
					HX_STACK_LINE(849)
					ret1;
				}
				HX_STACK_LINE(849)
				ret = true;
				HX_STACK_LINE(849)
				break;
			}
			HX_STACK_LINE(849)
			pre = cur;
			HX_STACK_LINE(849)
			cur = cur->next;
		}
		HX_STACK_LINE(849)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,remove,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZPP_CallbackSet::inlined_pop_unsafe","zpp_nape/space/Space.hx",827);
	HX_STACK_THIS(this);
	HX_STACK_LINE(836)
	::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(837)
	this->pop();
	HX_STACK_LINE(838)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,inlined_pop_unsafe,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZPP_CallbackSet::pop_unsafe","zpp_nape/space/Space.hx",822);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",823);
			{
				HX_STACK_LINE(823)
				::zpp_nape::space::ZPP_CallbackSet ret = __this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(823)
				__this->pop();
				HX_STACK_LINE(823)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(822)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,pop_unsafe,return )

Void ZPP_CallbackSet_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::inlined_pop","zpp_nape/space/Space.hx",803);
		HX_STACK_THIS(this);
		HX_STACK_LINE(812)
		::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(813)
		this->next = ret->next;
		HX_STACK_LINE(814)
		ret->_inuse = false;
		HX_STACK_LINE(818)
		if (((this->next == null()))){
			HX_STACK_LINE(818)
			this->pushmod = true;
		}
		HX_STACK_LINE(819)
		this->modified = true;
		HX_STACK_LINE(820)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,inlined_pop,(void))

Void ZPP_CallbackSet_obj::pop( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::pop","zpp_nape/space/Space.hx",798);
		HX_STACK_THIS(this);
		HX_STACK_LINE(799)
		::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(799)
		this->next = ret->next;
		HX_STACK_LINE(799)
		ret->_inuse = false;
		HX_STACK_LINE(799)
		if (((this->next == null()))){
			HX_STACK_LINE(799)
			this->pushmod = true;
		}
		HX_STACK_LINE(799)
		this->modified = true;
		HX_STACK_LINE(799)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,pop,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_insert( ::zpp_nape::space::ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_PUSH("ZPP_CallbackSet::inlined_insert","zpp_nape/space/Space.hx",773);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",782);
			{
				HX_STACK_LINE(783)
				o->_inuse = true;
				HX_STACK_LINE(784)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(782)
	::zpp_nape::space::ZPP_CallbackSet temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(786)
	if (((cur == null()))){
		HX_STACK_LINE(787)
		temp->next = this->next;
		HX_STACK_LINE(788)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(791)
		temp->next = cur->next;
		HX_STACK_LINE(792)
		cur->next = temp;
	}
	HX_STACK_LINE(794)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(795)
	(this->length)++;
	HX_STACK_LINE(796)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,inlined_insert,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::insert( ::zpp_nape::space::ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_PUSH("ZPP_CallbackSet::insert","zpp_nape/space/Space.hx",768);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet_obj *__this,::zpp_nape::space::ZPP_CallbackSet &o,::zpp_nape::space::ZPP_CallbackSet &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",769);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o){
						HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",769);
						{
							HX_STACK_LINE(769)
							o->_inuse = true;
							HX_STACK_LINE(769)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(769)
				::zpp_nape::space::ZPP_CallbackSet temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(769)
				if (((cur == null()))){
					HX_STACK_LINE(769)
					temp->next = __this->next;
					HX_STACK_LINE(769)
					__this->next = temp;
				}
				else{
					HX_STACK_LINE(769)
					temp->next = cur->next;
					HX_STACK_LINE(769)
					cur->next = temp;
				}
				HX_STACK_LINE(769)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(769)
				(__this->length)++;
				HX_STACK_LINE(769)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(768)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,insert,return )

Void ZPP_CallbackSet_obj::addAll( ::zpp_nape::space::ZPP_CallbackSet x){
{
		HX_STACK_PUSH("ZPP_CallbackSet::addAll","zpp_nape/space/Space.hx",750);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(760)
		::zpp_nape::space::ZPP_CallbackSet cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(761)
		while(((cx_ite != null()))){
			HX_STACK_LINE(762)
			::zpp_nape::space::ZPP_CallbackSet i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(763)
			this->add(i);
			HX_STACK_LINE(764)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,addAll,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_add( ::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_PUSH("ZPP_CallbackSet::inlined_add","zpp_nape/space/Space.hx",731);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",740);
			{
				HX_STACK_LINE(741)
				o->_inuse = true;
				HX_STACK_LINE(742)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(740)
	::zpp_nape::space::ZPP_CallbackSet temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(744)
	temp->next = this->next;
	HX_STACK_LINE(745)
	this->next = temp;
	HX_STACK_LINE(746)
	this->modified = true;
	HX_STACK_LINE(747)
	(this->length)++;
	HX_STACK_LINE(748)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_add,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::add( ::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_PUSH("ZPP_CallbackSet::add","zpp_nape/space/Space.hx",726);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet_obj *__this,::zpp_nape::space::ZPP_CallbackSet &o){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",727);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o){
						HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",727);
						{
							HX_STACK_LINE(727)
							o->_inuse = true;
							HX_STACK_LINE(727)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(727)
				::zpp_nape::space::ZPP_CallbackSet temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(727)
				temp->next = __this->next;
				HX_STACK_LINE(727)
				__this->next = temp;
				HX_STACK_LINE(727)
				__this->modified = true;
				HX_STACK_LINE(727)
				(__this->length)++;
				HX_STACK_LINE(727)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(726)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,add,return )

Void ZPP_CallbackSet_obj::setbegin( ::zpp_nape::space::ZPP_CallbackSet i){
{
		HX_STACK_PUSH("ZPP_CallbackSet::setbegin","zpp_nape/space/Space.hx",721);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(722)
		this->next = i;
		HX_STACK_LINE(723)
		this->modified = true;
		HX_STACK_LINE(724)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,setbegin,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::begin( ){
	HX_STACK_PUSH("ZPP_CallbackSet::begin","zpp_nape/space/Space.hx",712);
	HX_STACK_THIS(this);
	HX_STACK_LINE(712)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,begin,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::elem( ){
	HX_STACK_PUSH("ZPP_CallbackSet::elem","zpp_nape/space/Space.hx",707);
	HX_STACK_THIS(this);
	HX_STACK_LINE(707)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,elem,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::get( ::zpp_nape::phys::ZPP_Interactor i1,::zpp_nape::phys::ZPP_Interactor i2){
	HX_STACK_PUSH("ZPP_CallbackSet::get","zpp_nape/space/Space.hx",650);
	HX_STACK_ARG(i1,"i1");
	HX_STACK_ARG(i2,"i2");
	HX_STACK_LINE(651)
	::zpp_nape::space::ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(652)
	{
		HX_STACK_LINE(653)
		if (((::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool == null()))){
			HX_STACK_LINE(653)
			ret = ::zpp_nape::space::ZPP_CallbackSet_obj::__new();
		}
		else{
			HX_STACK_LINE(660)
			ret = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool;
			HX_STACK_LINE(661)
			::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool = ret->next;
			HX_STACK_LINE(662)
			ret->next = null();
		}
		HX_STACK_LINE(667)
		{
			HX_STACK_LINE(667)
			ret->freed = false;
			HX_STACK_LINE(667)
			ret->lazydel = false;
			HX_STACK_LINE(667)
			ret->COLLISIONstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
			HX_STACK_LINE(667)
			ret->COLLISIONstamp = (int)0;
			HX_STACK_LINE(667)
			ret->SENSORstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
			HX_STACK_LINE(667)
			ret->SENSORstamp = (int)0;
			HX_STACK_LINE(667)
			ret->FLUIDstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
			HX_STACK_LINE(667)
			ret->FLUIDstamp = (int)0;
		}
	}
	HX_STACK_LINE(677)
	if (((i1->id < i2->id))){
		HX_STACK_LINE(678)
		ret->int1 = i1;
		HX_STACK_LINE(679)
		ret->int2 = i2;
	}
	else{
		HX_STACK_LINE(682)
		ret->int1 = i2;
		HX_STACK_LINE(683)
		ret->int2 = i1;
	}
	HX_STACK_LINE(685)
	ret->id = ret->int1->id;
	HX_STACK_LINE(686)
	ret->di = ret->int2->id;
	HX_STACK_LINE(695)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,get,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::zpp_pool;


ZPP_CallbackSet_obj::ZPP_CallbackSet_obj()
{
}

void ZPP_CallbackSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CallbackSet);
	HX_MARK_MEMBER_NAME(lazydel,"lazydel");
	HX_MARK_MEMBER_NAME(freed,"freed");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(FLUIDstamp,"FLUIDstamp");
	HX_MARK_MEMBER_NAME(FLUIDstate,"FLUIDstate");
	HX_MARK_MEMBER_NAME(SENSORstamp,"SENSORstamp");
	HX_MARK_MEMBER_NAME(SENSORstate,"SENSORstate");
	HX_MARK_MEMBER_NAME(COLLISIONstamp,"COLLISIONstamp");
	HX_MARK_MEMBER_NAME(COLLISIONstate,"COLLISIONstate");
	HX_MARK_MEMBER_NAME(arbiters,"arbiters");
	HX_MARK_MEMBER_NAME(int2,"int2");
	HX_MARK_MEMBER_NAME(int1,"int1");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void ZPP_CallbackSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lazydel,"lazydel");
	HX_VISIT_MEMBER_NAME(freed,"freed");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(FLUIDstamp,"FLUIDstamp");
	HX_VISIT_MEMBER_NAME(FLUIDstate,"FLUIDstate");
	HX_VISIT_MEMBER_NAME(SENSORstamp,"SENSORstamp");
	HX_VISIT_MEMBER_NAME(SENSORstate,"SENSORstate");
	HX_VISIT_MEMBER_NAME(COLLISIONstamp,"COLLISIONstamp");
	HX_VISIT_MEMBER_NAME(COLLISIONstate,"COLLISIONstate");
	HX_VISIT_MEMBER_NAME(arbiters,"arbiters");
	HX_VISIT_MEMBER_NAME(int2,"int2");
	HX_VISIT_MEMBER_NAME(int1,"int1");
	HX_VISIT_MEMBER_NAME(di,"di");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic ZPP_CallbackSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		if (HX_FIELD_EQ(inName,"di") ) { return di; }
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"int2") ) { return int2; }
		if (HX_FIELD_EQ(inName,"int1") ) { return int1; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"freed") ) { return freed; }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { return _inuse; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"add_arb") ) { return add_arb_dyn(); }
		if (HX_FIELD_EQ(inName,"lazydel") ) { return lazydel; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"sleeping") ) { return sleeping_dyn(); }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return arbiters; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"empty_arb") ) { return empty_arb_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"remove_arb") ) { return remove_arb_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"FLUIDstamp") ) { return FLUIDstamp; }
		if (HX_FIELD_EQ(inName,"FLUIDstate") ) { return FLUIDstate; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"SENSORstamp") ) { return SENSORstamp; }
		if (HX_FIELD_EQ(inName,"SENSORstate") ) { return SENSORstate; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"really_empty") ) { return really_empty_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"try_remove_arb") ) { return try_remove_arb_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"COLLISIONstamp") ) { return COLLISIONstamp; }
		if (HX_FIELD_EQ(inName,"COLLISIONstate") ) { return COLLISIONstate; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CallbackSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_CallbackSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"int2") ) { int2=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"int1") ) { int1=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"freed") ) { freed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lazydel") ) { lazydel=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::space::ZPP_CallbackSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { arbiters=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Arbiter >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FLUIDstamp") ) { FLUIDstamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLUIDstate") ) { FLUIDstate=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SENSORstamp") ) { SENSORstamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SENSORstate") ) { SENSORstate=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"COLLISIONstamp") ) { COLLISIONstamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLLISIONstate") ) { COLLISIONstate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_CallbackSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lazydel"));
	outFields->push(HX_CSTRING("freed"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("FLUIDstamp"));
	outFields->push(HX_CSTRING("FLUIDstate"));
	outFields->push(HX_CSTRING("SENSORstamp"));
	outFields->push(HX_CSTRING("SENSORstate"));
	outFields->push(HX_CSTRING("COLLISIONstamp"));
	outFields->push(HX_CSTRING("COLLISIONstate"));
	outFields->push(HX_CSTRING("arbiters"));
	outFields->push(HX_CSTRING("int2"));
	outFields->push(HX_CSTRING("int1"));
	outFields->push(HX_CSTRING("di"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get"),
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sleeping"),
	HX_CSTRING("really_empty"),
	HX_CSTRING("empty_arb"),
	HX_CSTRING("remove_arb"),
	HX_CSTRING("try_remove_arb"),
	HX_CSTRING("add_arb"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("lazydel"),
	HX_CSTRING("freed"),
	HX_CSTRING("at"),
	HX_CSTRING("iterator_at"),
	HX_CSTRING("back"),
	HX_CSTRING("front"),
	HX_CSTRING("inlined_has"),
	HX_CSTRING("has"),
	HX_CSTRING("size"),
	HX_CSTRING("empty"),
	HX_CSTRING("reverse"),
	HX_CSTRING("inlined_clear"),
	HX_CSTRING("clear"),
	HX_CSTRING("splice"),
	HX_CSTRING("inlined_erase"),
	HX_CSTRING("erase"),
	HX_CSTRING("inlined_try_remove"),
	HX_CSTRING("inlined_remove"),
	HX_CSTRING("try_remove"),
	HX_CSTRING("remove"),
	HX_CSTRING("inlined_pop_unsafe"),
	HX_CSTRING("pop_unsafe"),
	HX_CSTRING("inlined_pop"),
	HX_CSTRING("pop"),
	HX_CSTRING("inlined_insert"),
	HX_CSTRING("insert"),
	HX_CSTRING("addAll"),
	HX_CSTRING("inlined_add"),
	HX_CSTRING("add"),
	HX_CSTRING("setbegin"),
	HX_CSTRING("length"),
	HX_CSTRING("pushmod"),
	HX_CSTRING("modified"),
	HX_CSTRING("_inuse"),
	HX_CSTRING("begin"),
	HX_CSTRING("elem"),
	HX_CSTRING("next"),
	HX_CSTRING("FLUIDstamp"),
	HX_CSTRING("FLUIDstate"),
	HX_CSTRING("SENSORstamp"),
	HX_CSTRING("SENSORstate"),
	HX_CSTRING("COLLISIONstamp"),
	HX_CSTRING("COLLISIONstate"),
	HX_CSTRING("arbiters"),
	HX_CSTRING("int2"),
	HX_CSTRING("int1"),
	HX_CSTRING("di"),
	HX_CSTRING("id"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CallbackSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CallbackSet_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CallbackSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CallbackSet_obj::zpp_pool,"zpp_pool");
};

Class ZPP_CallbackSet_obj::__mClass;

void ZPP_CallbackSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_CallbackSet"), hx::TCanCast< ZPP_CallbackSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_CallbackSet_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
