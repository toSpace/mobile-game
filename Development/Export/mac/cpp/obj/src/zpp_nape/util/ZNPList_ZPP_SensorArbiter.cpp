#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPList_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SensorArbiter_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::new","zpp_nape/util/Lists.hx",11434);
{
	HX_STACK_LINE(11444)
	this->length = (int)0;
	HX_STACK_LINE(11443)
	this->pushmod = false;
	HX_STACK_LINE(11442)
	this->modified = false;
	HX_STACK_LINE(11435)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_SensorArbiter_obj::~ZNPList_ZPP_SensorArbiter_obj() { }

Dynamic ZNPList_ZPP_SensorArbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_SensorArbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > ZNPList_ZPP_SensorArbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > result = new ZNPList_ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_SensorArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > result = new ZNPList_ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::at","zpp_nape/util/Lists.hx",11837);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(11846)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(11847)
	return (  (((it != null()))) ? ::zpp_nape::dynamics::ZPP_SensorArbiter(it->elt) : ::zpp_nape::dynamics::ZPP_SensorArbiter(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::iterator_at","zpp_nape/util/Lists.hx",11824);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(11833)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11834)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(11834)
		ret = ret->next;
	}
	HX_STACK_LINE(11835)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::back","zpp_nape/util/Lists.hx",11815);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11816)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11817)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11818)
	while(((cur != null()))){
		HX_STACK_LINE(11819)
		ret = cur;
		HX_STACK_LINE(11820)
		cur = cur->next;
	}
	HX_STACK_LINE(11822)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,back,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::front","zpp_nape/util/Lists.hx",11812);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11812)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,front,return )

bool ZNPList_ZPP_SensorArbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_has","zpp_nape/util/Lists.hx",11782);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(11791)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11792)
	{
		HX_STACK_LINE(11793)
		ret = false;
		HX_STACK_LINE(11794)
		{
			HX_STACK_LINE(11795)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11796)
			while(((cx_ite != null()))){
				HX_STACK_LINE(11797)
				::zpp_nape::dynamics::ZPP_SensorArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(11798)
				if (((npite == obj))){
					HX_STACK_LINE(11800)
					ret = true;
					HX_STACK_LINE(11801)
					break;
				}
				HX_STACK_LINE(11804)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(11808)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_has,return )

bool ZNPList_ZPP_SensorArbiter_obj::has( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::has","zpp_nape/util/Lists.hx",11777);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj *__this,::zpp_nape::dynamics::ZPP_SensorArbiter &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11778);
			{
				HX_STACK_LINE(11778)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11778)
				{
					HX_STACK_LINE(11778)
					ret = false;
					HX_STACK_LINE(11778)
					{
						HX_STACK_LINE(11778)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(11778)
						while(((cx_ite != null()))){
							HX_STACK_LINE(11778)
							::zpp_nape::dynamics::ZPP_SensorArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(11778)
							if (((npite == obj))){
								HX_STACK_LINE(11778)
								ret = true;
								HX_STACK_LINE(11778)
								break;
							}
							HX_STACK_LINE(11778)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(11778)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11777)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,has,return )

int ZNPList_ZPP_SensorArbiter_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::size","zpp_nape/util/Lists.hx",11774);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11774)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,size,return )

bool ZNPList_ZPP_SensorArbiter_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::empty","zpp_nape/util/Lists.hx",11769);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11769)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,empty,return )

Void ZNPList_ZPP_SensorArbiter_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::reverse","zpp_nape/util/Lists.hx",11754);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11755)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11756)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11757)
		while(((cur != null()))){
			HX_STACK_LINE(11758)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(11759)
			cur->next = pre;
			HX_STACK_LINE(11760)
			this->head = cur;
			HX_STACK_LINE(11761)
			pre = cur;
			HX_STACK_LINE(11762)
			cur = nx;
		}
		HX_STACK_LINE(11764)
		this->modified = true;
		HX_STACK_LINE(11765)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,reverse,(void))

Void ZNPList_ZPP_SensorArbiter_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_clear","zpp_nape/util/Lists.hx",11748);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11750)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(11750)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11750)
			this->head = ret->next;
			HX_STACK_LINE(11750)
			{
				HX_STACK_LINE(11750)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11750)
				o->elt = null();
				HX_STACK_LINE(11750)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(11750)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11750)
			if (((this->head == null()))){
				HX_STACK_LINE(11750)
				this->pushmod = true;
			}
			HX_STACK_LINE(11750)
			this->modified = true;
			HX_STACK_LINE(11750)
			(this->length)--;
		}
		HX_STACK_LINE(11751)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_SensorArbiter_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::clear","zpp_nape/util/Lists.hx",11743);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11744)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(11744)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11744)
			this->head = ret->next;
			HX_STACK_LINE(11744)
			{
				HX_STACK_LINE(11744)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11744)
				o->elt = null();
				HX_STACK_LINE(11744)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(11744)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11744)
			if (((this->head == null()))){
				HX_STACK_LINE(11744)
				this->pushmod = true;
			}
			HX_STACK_LINE(11744)
			this->modified = true;
			HX_STACK_LINE(11744)
			(this->length)--;
		}
		HX_STACK_LINE(11744)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::splice","zpp_nape/util/Lists.hx",11739);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(11740)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(11740)
		this->erase(pre);
	}
	HX_STACK_LINE(11741)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_erase","zpp_nape/util/Lists.hx",11693);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(11702)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(11703)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11704)
	if (((pre == null()))){
		HX_STACK_LINE(11705)
		old = this->head;
		HX_STACK_LINE(11706)
		ret = old->next;
		HX_STACK_LINE(11707)
		this->head = ret;
		HX_STACK_LINE(11708)
		if (((this->head == null()))){
			HX_STACK_LINE(11708)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(11711)
		old = pre->next;
		HX_STACK_LINE(11712)
		ret = old->next;
		HX_STACK_LINE(11713)
		pre->next = ret;
		HX_STACK_LINE(11714)
		if (((ret == null()))){
			HX_STACK_LINE(11714)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(11717)
	{
		HX_STACK_LINE(11718)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(11727)
		o->elt = null();
		HX_STACK_LINE(11728)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
		HX_STACK_LINE(11729)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(11734)
	this->modified = true;
	HX_STACK_LINE(11735)
	(this->length)--;
	HX_STACK_LINE(11736)
	this->pushmod = true;
	HX_STACK_LINE(11737)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::erase","zpp_nape/util/Lists.hx",11688);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter Block( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj *__this,::zpp_nape::util::ZNPNode_ZPP_SensorArbiter &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11689);
			{
				HX_STACK_LINE(11689)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11689)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11689)
				if (((pre == null()))){
					HX_STACK_LINE(11689)
					old = __this->head;
					HX_STACK_LINE(11689)
					ret = old->next;
					HX_STACK_LINE(11689)
					__this->head = ret;
					HX_STACK_LINE(11689)
					if (((__this->head == null()))){
						HX_STACK_LINE(11689)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11689)
					old = pre->next;
					HX_STACK_LINE(11689)
					ret = old->next;
					HX_STACK_LINE(11689)
					pre->next = ret;
					HX_STACK_LINE(11689)
					if (((ret == null()))){
						HX_STACK_LINE(11689)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(11689)
				{
					HX_STACK_LINE(11689)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11689)
					o->elt = null();
					HX_STACK_LINE(11689)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
					HX_STACK_LINE(11689)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11689)
				__this->modified = true;
				HX_STACK_LINE(11689)
				(__this->length)--;
				HX_STACK_LINE(11689)
				__this->pushmod = true;
				HX_STACK_LINE(11689)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11688)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,erase,return )

bool ZNPList_ZPP_SensorArbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_try_remove","zpp_nape/util/Lists.hx",11665);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(11674)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11675)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11676)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11677)
	while(((cur != null()))){
		HX_STACK_LINE(11678)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11679)
			{
				HX_STACK_LINE(11679)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11679)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(11679)
				if (((pre == null()))){
					HX_STACK_LINE(11679)
					old = this->head;
					HX_STACK_LINE(11679)
					ret1 = old->next;
					HX_STACK_LINE(11679)
					this->head = ret1;
					HX_STACK_LINE(11679)
					if (((this->head == null()))){
						HX_STACK_LINE(11679)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11679)
					old = pre->next;
					HX_STACK_LINE(11679)
					ret1 = old->next;
					HX_STACK_LINE(11679)
					pre->next = ret1;
					HX_STACK_LINE(11679)
					if (((ret1 == null()))){
						HX_STACK_LINE(11679)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(11679)
				{
					HX_STACK_LINE(11679)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11679)
					o->elt = null();
					HX_STACK_LINE(11679)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
					HX_STACK_LINE(11679)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11679)
				this->modified = true;
				HX_STACK_LINE(11679)
				(this->length)--;
				HX_STACK_LINE(11679)
				this->pushmod = true;
				HX_STACK_LINE(11679)
				ret1;
			}
			HX_STACK_LINE(11680)
			ret = true;
			HX_STACK_LINE(11681)
			break;
		}
		HX_STACK_LINE(11683)
		pre = cur;
		HX_STACK_LINE(11684)
		cur = cur->next;
	}
	HX_STACK_LINE(11686)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_try_remove,return )

Void ZNPList_ZPP_SensorArbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_remove","zpp_nape/util/Lists.hx",11652);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(11661)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11661)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11661)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11661)
		while(((cur != null()))){
			HX_STACK_LINE(11661)
			if (((cur->elt == obj))){
				HX_STACK_LINE(11661)
				{
					HX_STACK_LINE(11661)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(11661)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(11661)
					if (((pre == null()))){
						HX_STACK_LINE(11661)
						old = this->head;
						HX_STACK_LINE(11661)
						ret1 = old->next;
						HX_STACK_LINE(11661)
						this->head = ret1;
						HX_STACK_LINE(11661)
						if (((this->head == null()))){
							HX_STACK_LINE(11661)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(11661)
						old = pre->next;
						HX_STACK_LINE(11661)
						ret1 = old->next;
						HX_STACK_LINE(11661)
						pre->next = ret1;
						HX_STACK_LINE(11661)
						if (((ret1 == null()))){
							HX_STACK_LINE(11661)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(11661)
					{
						HX_STACK_LINE(11661)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(11661)
						o->elt = null();
						HX_STACK_LINE(11661)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
						HX_STACK_LINE(11661)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(11661)
					this->modified = true;
					HX_STACK_LINE(11661)
					(this->length)--;
					HX_STACK_LINE(11661)
					this->pushmod = true;
					HX_STACK_LINE(11661)
					ret1;
				}
				HX_STACK_LINE(11661)
				ret = true;
				HX_STACK_LINE(11661)
				break;
			}
			HX_STACK_LINE(11661)
			pre = cur;
			HX_STACK_LINE(11661)
			cur = cur->next;
		}
		HX_STACK_LINE(11661)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_SensorArbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::try_remove","zpp_nape/util/Lists.hx",11627);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(11636)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11637)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11638)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11639)
	while(((cur != null()))){
		HX_STACK_LINE(11640)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11641)
			this->erase(pre);
			HX_STACK_LINE(11642)
			ret = true;
			HX_STACK_LINE(11643)
			break;
		}
		HX_STACK_LINE(11645)
		pre = cur;
		HX_STACK_LINE(11646)
		cur = cur->next;
	}
	HX_STACK_LINE(11648)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,try_remove,return )

Void ZNPList_ZPP_SensorArbiter_obj::remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::remove","zpp_nape/util/Lists.hx",11616);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(11625)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11625)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11625)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11625)
		while(((cur != null()))){
			HX_STACK_LINE(11625)
			if (((cur->elt == obj))){
				HX_STACK_LINE(11625)
				{
					HX_STACK_LINE(11625)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(11625)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(11625)
					if (((pre == null()))){
						HX_STACK_LINE(11625)
						old = this->head;
						HX_STACK_LINE(11625)
						ret1 = old->next;
						HX_STACK_LINE(11625)
						this->head = ret1;
						HX_STACK_LINE(11625)
						if (((this->head == null()))){
							HX_STACK_LINE(11625)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(11625)
						old = pre->next;
						HX_STACK_LINE(11625)
						ret1 = old->next;
						HX_STACK_LINE(11625)
						pre->next = ret1;
						HX_STACK_LINE(11625)
						if (((ret1 == null()))){
							HX_STACK_LINE(11625)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(11625)
					{
						HX_STACK_LINE(11625)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(11625)
						o->elt = null();
						HX_STACK_LINE(11625)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
						HX_STACK_LINE(11625)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(11625)
					this->modified = true;
					HX_STACK_LINE(11625)
					(this->length)--;
					HX_STACK_LINE(11625)
					this->pushmod = true;
					HX_STACK_LINE(11625)
					ret1;
				}
				HX_STACK_LINE(11625)
				ret = true;
				HX_STACK_LINE(11625)
				break;
			}
			HX_STACK_LINE(11625)
			pre = cur;
			HX_STACK_LINE(11625)
			cur = cur->next;
		}
		HX_STACK_LINE(11625)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,remove,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_pop_unsafe","zpp_nape/util/Lists.hx",11603);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11612)
	::zpp_nape::dynamics::ZPP_SensorArbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11613)
	this->pop();
	HX_STACK_LINE(11614)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::pop_unsafe","zpp_nape/util/Lists.hx",11598);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_SensorArbiter Block( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11599);
			{
				HX_STACK_LINE(11599)
				::zpp_nape::dynamics::ZPP_SensorArbiter ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11599)
				__this->pop();
				HX_STACK_LINE(11599)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11598)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,pop_unsafe,return )

Void ZNPList_ZPP_SensorArbiter_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_pop","zpp_nape/util/Lists.hx",11565);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11574)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11575)
		this->head = ret->next;
		HX_STACK_LINE(11577)
		{
			HX_STACK_LINE(11578)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11587)
			o->elt = null();
			HX_STACK_LINE(11588)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
			HX_STACK_LINE(11589)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11594)
		if (((this->head == null()))){
			HX_STACK_LINE(11594)
			this->pushmod = true;
		}
		HX_STACK_LINE(11595)
		this->modified = true;
		HX_STACK_LINE(11596)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_pop,(void))

Void ZNPList_ZPP_SensorArbiter_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::pop","zpp_nape/util/Lists.hx",11560);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11561)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11561)
		this->head = ret->next;
		HX_STACK_LINE(11561)
		{
			HX_STACK_LINE(11561)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11561)
			o->elt = null();
			HX_STACK_LINE(11561)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
			HX_STACK_LINE(11561)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11561)
		if (((this->head == null()))){
			HX_STACK_LINE(11561)
			this->pushmod = true;
		}
		HX_STACK_LINE(11561)
		this->modified = true;
		HX_STACK_LINE(11561)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur,::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_insert","zpp_nape/util/Lists.hx",11517);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter Block( ::zpp_nape::dynamics::ZPP_SensorArbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11526);
			{
				HX_STACK_LINE(11527)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11528)
				{
					HX_STACK_LINE(11529)
					if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(11529)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();
					}
					else{
						HX_STACK_LINE(11536)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
						HX_STACK_LINE(11537)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(11538)
						ret->next = null();
					}
					HX_STACK_LINE(11543)
					Dynamic();
				}
				HX_STACK_LINE(11545)
				ret->elt = o;
				HX_STACK_LINE(11546)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11526)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11548)
	if (((cur == null()))){
		HX_STACK_LINE(11549)
		temp->next = this->head;
		HX_STACK_LINE(11550)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11553)
		temp->next = cur->next;
		HX_STACK_LINE(11554)
		cur->next = temp;
	}
	HX_STACK_LINE(11556)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(11557)
	(this->length)++;
	HX_STACK_LINE(11558)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur,::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::insert","zpp_nape/util/Lists.hx",11512);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter Block( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj *__this,::zpp_nape::dynamics::ZPP_SensorArbiter &o,::zpp_nape::util::ZNPNode_ZPP_SensorArbiter &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11513);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter Block( ::zpp_nape::dynamics::ZPP_SensorArbiter &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11513);
						{
							HX_STACK_LINE(11513)
							::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(11513)
							{
								HX_STACK_LINE(11513)
								if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(11513)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(11513)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
									HX_STACK_LINE(11513)
									::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(11513)
									ret->next = null();
								}
								HX_STACK_LINE(11513)
								Dynamic();
							}
							HX_STACK_LINE(11513)
							ret->elt = o;
							HX_STACK_LINE(11513)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(11513)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(11513)
				if (((cur == null()))){
					HX_STACK_LINE(11513)
					temp->next = __this->head;
					HX_STACK_LINE(11513)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(11513)
					temp->next = cur->next;
					HX_STACK_LINE(11513)
					cur->next = temp;
				}
				HX_STACK_LINE(11513)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(11513)
				(__this->length)++;
				HX_STACK_LINE(11513)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(11512)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,insert,return )

Void ZNPList_ZPP_SensorArbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter x){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::addAll","zpp_nape/util/Lists.hx",11494);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(11504)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(11505)
		while(((cx_ite != null()))){
			HX_STACK_LINE(11506)
			::zpp_nape::dynamics::ZPP_SensorArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(11507)
			this->add(i);
			HX_STACK_LINE(11508)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_add","zpp_nape/util/Lists.hx",11457);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter Block( ::zpp_nape::dynamics::ZPP_SensorArbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11466);
			{
				HX_STACK_LINE(11467)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11468)
				{
					HX_STACK_LINE(11469)
					if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(11469)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();
					}
					else{
						HX_STACK_LINE(11476)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
						HX_STACK_LINE(11477)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(11478)
						ret->next = null();
					}
					HX_STACK_LINE(11483)
					Dynamic();
				}
				HX_STACK_LINE(11485)
				ret->elt = o;
				HX_STACK_LINE(11486)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11466)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11488)
	temp->next = this->head;
	HX_STACK_LINE(11489)
	this->head = temp;
	HX_STACK_LINE(11490)
	this->modified = true;
	HX_STACK_LINE(11491)
	(this->length)++;
	HX_STACK_LINE(11492)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::add( ::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::add","zpp_nape/util/Lists.hx",11452);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_SensorArbiter Block( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj *__this,::zpp_nape::dynamics::ZPP_SensorArbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11453);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter Block( ::zpp_nape::dynamics::ZPP_SensorArbiter &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11453);
						{
							HX_STACK_LINE(11453)
							::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(11453)
							{
								HX_STACK_LINE(11453)
								if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(11453)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(11453)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
									HX_STACK_LINE(11453)
									::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(11453)
									ret->next = null();
								}
								HX_STACK_LINE(11453)
								Dynamic();
							}
							HX_STACK_LINE(11453)
							ret->elt = o;
							HX_STACK_LINE(11453)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(11453)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(11453)
				temp->next = __this->head;
				HX_STACK_LINE(11453)
				__this->head = temp;
				HX_STACK_LINE(11453)
				__this->modified = true;
				HX_STACK_LINE(11453)
				(__this->length)++;
				HX_STACK_LINE(11453)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(11452)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,add,return )

Void ZNPList_ZPP_SensorArbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter i){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::setbegin","zpp_nape/util/Lists.hx",11447);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(11448)
		this->head = i;
		HX_STACK_LINE(11449)
		this->modified = true;
		HX_STACK_LINE(11450)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::begin","zpp_nape/util/Lists.hx",11439);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11439)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,begin,return )


ZNPList_ZPP_SensorArbiter_obj::ZNPList_ZPP_SensorArbiter_obj()
{
}

void ZNPList_ZPP_SensorArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SensorArbiter);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SensorArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_SensorArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		break;
	case 5:
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
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPList_ZPP_SensorArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPList_ZPP_SensorArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("head"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
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
	HX_CSTRING("begin"),
	HX_CSTRING("head"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SensorArbiter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SensorArbiter_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_SensorArbiter_obj::__mClass;

void ZNPList_ZPP_SensorArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_SensorArbiter"), hx::TCanCast< ZNPList_ZPP_SensorArbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_SensorArbiter_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
