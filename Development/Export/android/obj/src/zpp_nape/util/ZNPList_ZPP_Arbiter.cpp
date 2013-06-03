#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Arbiter_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Arbiter::new","zpp_nape/util/Lists.hx",3511);
{
	HX_STACK_LINE(3521)
	this->length = (int)0;
	HX_STACK_LINE(3520)
	this->pushmod = false;
	HX_STACK_LINE(3519)
	this->modified = false;
	HX_STACK_LINE(3512)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Arbiter_obj::~ZNPList_ZPP_Arbiter_obj() { }

Dynamic ZNPList_ZPP_Arbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_Arbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_Arbiter_obj > ZNPList_ZPP_Arbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Arbiter_obj > result = new ZNPList_ZPP_Arbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Arbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Arbiter_obj > result = new ZNPList_ZPP_Arbiter_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::at","zpp_nape/util/Lists.hx",3914);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(3915)
	{
	}
	HX_STACK_LINE(3923)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(3924)
	return (  (((it != null()))) ? ::zpp_nape::dynamics::ZPP_Arbiter(it->elt) : ::zpp_nape::dynamics::ZPP_Arbiter(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::iterator_at","zpp_nape/util/Lists.hx",3901);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(3902)
	{
	}
	HX_STACK_LINE(3910)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3911)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(3911)
		ret = ret->next;
	}
	HX_STACK_LINE(3912)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::back","zpp_nape/util/Lists.hx",3892);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3893)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3894)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3895)
	while(((cur != null()))){
		HX_STACK_LINE(3896)
		ret = cur;
		HX_STACK_LINE(3897)
		cur = cur->next;
	}
	HX_STACK_LINE(3899)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,back,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::front","zpp_nape/util/Lists.hx",3889);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3889)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,front,return )

bool ZNPList_ZPP_Arbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_Arbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_has","zpp_nape/util/Lists.hx",3859);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3860)
	{
	}
	HX_STACK_LINE(3868)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3869)
	{
		HX_STACK_LINE(3870)
		ret = false;
		HX_STACK_LINE(3871)
		{
			HX_STACK_LINE(3872)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3873)
			while(((cx_ite != null()))){
				HX_STACK_LINE(3874)
				::zpp_nape::dynamics::ZPP_Arbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(3875)
				if (((npite == obj))){
					HX_STACK_LINE(3877)
					ret = true;
					HX_STACK_LINE(3878)
					break;
				}
				HX_STACK_LINE(3881)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(3885)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_has,return )

bool ZNPList_ZPP_Arbiter_obj::has( ::zpp_nape::dynamics::ZPP_Arbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::has","zpp_nape/util/Lists.hx",3854);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj *__this,::zpp_nape::dynamics::ZPP_Arbiter &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3855);
			{
				HX_STACK_LINE(3855)
				{
				}
				HX_STACK_LINE(3855)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3855)
				{
					HX_STACK_LINE(3855)
					ret = false;
					HX_STACK_LINE(3855)
					{
						HX_STACK_LINE(3855)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(3855)
						while(((cx_ite != null()))){
							HX_STACK_LINE(3855)
							::zpp_nape::dynamics::ZPP_Arbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(3855)
							if (((npite == obj))){
								HX_STACK_LINE(3855)
								ret = true;
								HX_STACK_LINE(3855)
								break;
							}
							HX_STACK_LINE(3855)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(3855)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3854)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,has,return )

int ZNPList_ZPP_Arbiter_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::size","zpp_nape/util/Lists.hx",3851);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3851)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,size,return )

bool ZNPList_ZPP_Arbiter_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::empty","zpp_nape/util/Lists.hx",3846);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3846)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,empty,return )

Void ZNPList_ZPP_Arbiter_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::reverse","zpp_nape/util/Lists.hx",3831);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3832)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3833)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3834)
		while(((cur != null()))){
			HX_STACK_LINE(3835)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(3836)
			cur->next = pre;
			HX_STACK_LINE(3837)
			this->head = cur;
			HX_STACK_LINE(3838)
			pre = cur;
			HX_STACK_LINE(3839)
			cur = nx;
		}
		HX_STACK_LINE(3841)
		this->modified = true;
		HX_STACK_LINE(3842)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,reverse,(void))

Void ZNPList_ZPP_Arbiter_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_clear","zpp_nape/util/Lists.hx",3825);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3827)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(3827)
			{
			}
			HX_STACK_LINE(3827)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3827)
			this->head = ret->next;
			HX_STACK_LINE(3827)
			{
			}
			HX_STACK_LINE(3827)
			{
				HX_STACK_LINE(3827)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3827)
				{
				}
				HX_STACK_LINE(3827)
				o->elt = null();
				HX_STACK_LINE(3827)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
				HX_STACK_LINE(3827)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3827)
			if (((this->head == null()))){
				HX_STACK_LINE(3827)
				this->pushmod = true;
			}
			HX_STACK_LINE(3827)
			this->modified = true;
			HX_STACK_LINE(3827)
			(this->length)--;
		}
		HX_STACK_LINE(3828)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_Arbiter_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::clear","zpp_nape/util/Lists.hx",3820);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3821)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(3821)
			{
			}
			HX_STACK_LINE(3821)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3821)
			this->head = ret->next;
			HX_STACK_LINE(3821)
			{
			}
			HX_STACK_LINE(3821)
			{
				HX_STACK_LINE(3821)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3821)
				{
				}
				HX_STACK_LINE(3821)
				o->elt = null();
				HX_STACK_LINE(3821)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
				HX_STACK_LINE(3821)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3821)
			if (((this->head == null()))){
				HX_STACK_LINE(3821)
				this->pushmod = true;
			}
			HX_STACK_LINE(3821)
			this->modified = true;
			HX_STACK_LINE(3821)
			(this->length)--;
		}
		HX_STACK_LINE(3821)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Arbiter pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::splice","zpp_nape/util/Lists.hx",3816);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(3817)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(3817)
		this->erase(pre);
	}
	HX_STACK_LINE(3818)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Arbiter_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Arbiter pre){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_erase","zpp_nape/util/Lists.hx",3770);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(3771)
	{
	}
	HX_STACK_LINE(3779)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(3780)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3781)
	if (((pre == null()))){
		HX_STACK_LINE(3782)
		old = this->head;
		HX_STACK_LINE(3783)
		ret = old->next;
		HX_STACK_LINE(3784)
		this->head = ret;
		HX_STACK_LINE(3785)
		if (((this->head == null()))){
			HX_STACK_LINE(3785)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(3788)
		old = pre->next;
		HX_STACK_LINE(3789)
		ret = old->next;
		HX_STACK_LINE(3790)
		pre->next = ret;
		HX_STACK_LINE(3791)
		if (((ret == null()))){
			HX_STACK_LINE(3791)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(3793)
	{
	}
	HX_STACK_LINE(3794)
	{
		HX_STACK_LINE(3795)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(3796)
		{
		}
		HX_STACK_LINE(3804)
		o->elt = null();
		HX_STACK_LINE(3805)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
		HX_STACK_LINE(3806)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(3811)
	this->modified = true;
	HX_STACK_LINE(3812)
	(this->length)--;
	HX_STACK_LINE(3813)
	this->pushmod = true;
	HX_STACK_LINE(3814)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Arbiter pre){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::erase","zpp_nape/util/Lists.hx",3765);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::util::ZNPNode_ZPP_Arbiter &pre,::zpp_nape::util::ZNPList_ZPP_Arbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3766);
			{
				HX_STACK_LINE(3766)
				{
				}
				HX_STACK_LINE(3766)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(3766)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3766)
				if (((pre == null()))){
					HX_STACK_LINE(3766)
					old = __this->head;
					HX_STACK_LINE(3766)
					ret = old->next;
					HX_STACK_LINE(3766)
					__this->head = ret;
					HX_STACK_LINE(3766)
					if (((__this->head == null()))){
						HX_STACK_LINE(3766)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(3766)
					old = pre->next;
					HX_STACK_LINE(3766)
					ret = old->next;
					HX_STACK_LINE(3766)
					pre->next = ret;
					HX_STACK_LINE(3766)
					if (((ret == null()))){
						HX_STACK_LINE(3766)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(3766)
				{
				}
				HX_STACK_LINE(3766)
				{
					HX_STACK_LINE(3766)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(3766)
					{
					}
					HX_STACK_LINE(3766)
					o->elt = null();
					HX_STACK_LINE(3766)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
					HX_STACK_LINE(3766)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(3766)
				__this->modified = true;
				HX_STACK_LINE(3766)
				(__this->length)--;
				HX_STACK_LINE(3766)
				__this->pushmod = true;
				HX_STACK_LINE(3766)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3765)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,erase,return )

bool ZNPList_ZPP_Arbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_Arbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_try_remove","zpp_nape/util/Lists.hx",3742);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3743)
	{
	}
	HX_STACK_LINE(3751)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3752)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3753)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3754)
	while(((cur != null()))){
		HX_STACK_LINE(3755)
		if (((cur->elt == obj))){
			HX_STACK_LINE(3756)
			{
				HX_STACK_LINE(3756)
				{
				}
				HX_STACK_LINE(3756)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(3756)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(3756)
				if (((pre == null()))){
					HX_STACK_LINE(3756)
					old = this->head;
					HX_STACK_LINE(3756)
					ret1 = old->next;
					HX_STACK_LINE(3756)
					this->head = ret1;
					HX_STACK_LINE(3756)
					if (((this->head == null()))){
						HX_STACK_LINE(3756)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(3756)
					old = pre->next;
					HX_STACK_LINE(3756)
					ret1 = old->next;
					HX_STACK_LINE(3756)
					pre->next = ret1;
					HX_STACK_LINE(3756)
					if (((ret1 == null()))){
						HX_STACK_LINE(3756)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(3756)
				{
				}
				HX_STACK_LINE(3756)
				{
					HX_STACK_LINE(3756)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(3756)
					{
					}
					HX_STACK_LINE(3756)
					o->elt = null();
					HX_STACK_LINE(3756)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
					HX_STACK_LINE(3756)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(3756)
				this->modified = true;
				HX_STACK_LINE(3756)
				(this->length)--;
				HX_STACK_LINE(3756)
				this->pushmod = true;
				HX_STACK_LINE(3756)
				ret1;
			}
			HX_STACK_LINE(3757)
			ret = true;
			HX_STACK_LINE(3758)
			break;
		}
		HX_STACK_LINE(3760)
		pre = cur;
		HX_STACK_LINE(3761)
		cur = cur->next;
	}
	HX_STACK_LINE(3763)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Arbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_Arbiter obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_remove","zpp_nape/util/Lists.hx",3729);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3730)
		{
		}
		HX_STACK_LINE(3738)
		{
			HX_STACK_LINE(3738)
			{
			}
			HX_STACK_LINE(3738)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(3738)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3738)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3738)
			while(((cur != null()))){
				HX_STACK_LINE(3738)
				if (((cur->elt == obj))){
					HX_STACK_LINE(3738)
					{
						HX_STACK_LINE(3738)
						{
						}
						HX_STACK_LINE(3738)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(3738)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(3738)
						if (((pre == null()))){
							HX_STACK_LINE(3738)
							old = this->head;
							HX_STACK_LINE(3738)
							ret1 = old->next;
							HX_STACK_LINE(3738)
							this->head = ret1;
							HX_STACK_LINE(3738)
							if (((this->head == null()))){
								HX_STACK_LINE(3738)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(3738)
							old = pre->next;
							HX_STACK_LINE(3738)
							ret1 = old->next;
							HX_STACK_LINE(3738)
							pre->next = ret1;
							HX_STACK_LINE(3738)
							if (((ret1 == null()))){
								HX_STACK_LINE(3738)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(3738)
						{
						}
						HX_STACK_LINE(3738)
						{
							HX_STACK_LINE(3738)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(3738)
							{
							}
							HX_STACK_LINE(3738)
							o->elt = null();
							HX_STACK_LINE(3738)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
							HX_STACK_LINE(3738)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(3738)
						this->modified = true;
						HX_STACK_LINE(3738)
						(this->length)--;
						HX_STACK_LINE(3738)
						this->pushmod = true;
						HX_STACK_LINE(3738)
						ret1;
					}
					HX_STACK_LINE(3738)
					ret = true;
					HX_STACK_LINE(3738)
					break;
				}
				HX_STACK_LINE(3738)
				pre = cur;
				HX_STACK_LINE(3738)
				cur = cur->next;
			}
			HX_STACK_LINE(3738)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_Arbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_Arbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::try_remove","zpp_nape/util/Lists.hx",3704);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3705)
	{
	}
	HX_STACK_LINE(3713)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3714)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3715)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3716)
	while(((cur != null()))){
		HX_STACK_LINE(3717)
		if (((cur->elt == obj))){
			HX_STACK_LINE(3718)
			this->erase(pre);
			HX_STACK_LINE(3719)
			ret = true;
			HX_STACK_LINE(3720)
			break;
		}
		HX_STACK_LINE(3722)
		pre = cur;
		HX_STACK_LINE(3723)
		cur = cur->next;
	}
	HX_STACK_LINE(3725)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,try_remove,return )

Void ZNPList_ZPP_Arbiter_obj::remove( ::zpp_nape::dynamics::ZPP_Arbiter obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::remove","zpp_nape/util/Lists.hx",3693);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3694)
		{
		}
		HX_STACK_LINE(3702)
		{
			HX_STACK_LINE(3702)
			{
			}
			HX_STACK_LINE(3702)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(3702)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3702)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3702)
			while(((cur != null()))){
				HX_STACK_LINE(3702)
				if (((cur->elt == obj))){
					HX_STACK_LINE(3702)
					{
						HX_STACK_LINE(3702)
						{
						}
						HX_STACK_LINE(3702)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(3702)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(3702)
						if (((pre == null()))){
							HX_STACK_LINE(3702)
							old = this->head;
							HX_STACK_LINE(3702)
							ret1 = old->next;
							HX_STACK_LINE(3702)
							this->head = ret1;
							HX_STACK_LINE(3702)
							if (((this->head == null()))){
								HX_STACK_LINE(3702)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(3702)
							old = pre->next;
							HX_STACK_LINE(3702)
							ret1 = old->next;
							HX_STACK_LINE(3702)
							pre->next = ret1;
							HX_STACK_LINE(3702)
							if (((ret1 == null()))){
								HX_STACK_LINE(3702)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(3702)
						{
						}
						HX_STACK_LINE(3702)
						{
							HX_STACK_LINE(3702)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(3702)
							{
							}
							HX_STACK_LINE(3702)
							o->elt = null();
							HX_STACK_LINE(3702)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
							HX_STACK_LINE(3702)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(3702)
						this->modified = true;
						HX_STACK_LINE(3702)
						(this->length)--;
						HX_STACK_LINE(3702)
						this->pushmod = true;
						HX_STACK_LINE(3702)
						ret1;
					}
					HX_STACK_LINE(3702)
					ret = true;
					HX_STACK_LINE(3702)
					break;
				}
				HX_STACK_LINE(3702)
				pre = cur;
				HX_STACK_LINE(3702)
				cur = cur->next;
			}
			HX_STACK_LINE(3702)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,remove,(void))

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_pop_unsafe","zpp_nape/util/Lists.hx",3680);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3681)
	{
	}
	HX_STACK_LINE(3689)
	::zpp_nape::dynamics::ZPP_Arbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3690)
	this->pop();
	HX_STACK_LINE(3691)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::pop_unsafe","zpp_nape/util/Lists.hx",3675);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_Arbiter Block( ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3676);
			{
				HX_STACK_LINE(3676)
				{
				}
				HX_STACK_LINE(3676)
				::zpp_nape::dynamics::ZPP_Arbiter ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3676)
				__this->pop();
				HX_STACK_LINE(3676)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3675)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,pop_unsafe,return )

Void ZNPList_ZPP_Arbiter_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_pop","zpp_nape/util/Lists.hx",3642);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3643)
		{
		}
		HX_STACK_LINE(3651)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3652)
		this->head = ret->next;
		HX_STACK_LINE(3653)
		{
		}
		HX_STACK_LINE(3654)
		{
			HX_STACK_LINE(3655)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3656)
			{
			}
			HX_STACK_LINE(3664)
			o->elt = null();
			HX_STACK_LINE(3665)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
			HX_STACK_LINE(3666)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3671)
		if (((this->head == null()))){
			HX_STACK_LINE(3671)
			this->pushmod = true;
		}
		HX_STACK_LINE(3672)
		this->modified = true;
		HX_STACK_LINE(3673)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,inlined_pop,(void))

Void ZNPList_ZPP_Arbiter_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::pop","zpp_nape/util/Lists.hx",3637);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3638)
		{
		}
		HX_STACK_LINE(3638)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3638)
		this->head = ret->next;
		HX_STACK_LINE(3638)
		{
		}
		HX_STACK_LINE(3638)
		{
			HX_STACK_LINE(3638)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3638)
			{
			}
			HX_STACK_LINE(3638)
			o->elt = null();
			HX_STACK_LINE(3638)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
			HX_STACK_LINE(3638)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3638)
		if (((this->head == null()))){
			HX_STACK_LINE(3638)
			this->pushmod = true;
		}
		HX_STACK_LINE(3638)
		this->modified = true;
		HX_STACK_LINE(3638)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Arbiter cur,::zpp_nape::dynamics::ZPP_Arbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_insert","zpp_nape/util/Lists.hx",3594);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(3595)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3603);
			{
				HX_STACK_LINE(3604)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3605)
				{
					HX_STACK_LINE(3606)
					if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(3606)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
					}
					else{
						HX_STACK_LINE(3613)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
						HX_STACK_LINE(3614)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(3615)
						ret->next = null();
					}
					HX_STACK_LINE(3620)
					Dynamic();
				}
				HX_STACK_LINE(3622)
				ret->elt = o;
				HX_STACK_LINE(3623)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3603)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3625)
	if (((cur == null()))){
		HX_STACK_LINE(3626)
		temp->next = this->head;
		HX_STACK_LINE(3627)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(3630)
		temp->next = cur->next;
		HX_STACK_LINE(3631)
		cur->next = temp;
	}
	HX_STACK_LINE(3633)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(3634)
	(this->length)++;
	HX_STACK_LINE(3635)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Arbiter_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Arbiter cur,::zpp_nape::dynamics::ZPP_Arbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::insert","zpp_nape/util/Lists.hx",3589);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj *__this,::zpp_nape::dynamics::ZPP_Arbiter &o,::zpp_nape::util::ZNPNode_ZPP_Arbiter &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3590);
			{
				HX_STACK_LINE(3590)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3590);
						{
							HX_STACK_LINE(3590)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(3590)
							{
								HX_STACK_LINE(3590)
								if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(3590)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(3590)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
									HX_STACK_LINE(3590)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(3590)
									ret->next = null();
								}
								HX_STACK_LINE(3590)
								Dynamic();
							}
							HX_STACK_LINE(3590)
							ret->elt = o;
							HX_STACK_LINE(3590)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(3590)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(3590)
				if (((cur == null()))){
					HX_STACK_LINE(3590)
					temp->next = __this->head;
					HX_STACK_LINE(3590)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(3590)
					temp->next = cur->next;
					HX_STACK_LINE(3590)
					cur->next = temp;
				}
				HX_STACK_LINE(3590)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(3590)
				(__this->length)++;
				HX_STACK_LINE(3590)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(3589)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Arbiter_obj,insert,return )

Void ZNPList_ZPP_Arbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Arbiter x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::addAll","zpp_nape/util/Lists.hx",3571);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(3572)
		{
		}
		HX_STACK_LINE(3580)
		{
			HX_STACK_LINE(3581)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3582)
			while(((cx_ite != null()))){
				HX_STACK_LINE(3583)
				::zpp_nape::dynamics::ZPP_Arbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3584)
				this->add(i);
				HX_STACK_LINE(3585)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_Arbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_add","zpp_nape/util/Lists.hx",3534);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(3535)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3543);
			{
				HX_STACK_LINE(3544)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3545)
				{
					HX_STACK_LINE(3546)
					if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(3546)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
					}
					else{
						HX_STACK_LINE(3553)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
						HX_STACK_LINE(3554)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(3555)
						ret->next = null();
					}
					HX_STACK_LINE(3560)
					Dynamic();
				}
				HX_STACK_LINE(3562)
				ret->elt = o;
				HX_STACK_LINE(3563)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3543)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3565)
	temp->next = this->head;
	HX_STACK_LINE(3566)
	this->head = temp;
	HX_STACK_LINE(3567)
	this->modified = true;
	HX_STACK_LINE(3568)
	(this->length)++;
	HX_STACK_LINE(3569)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::add( ::zpp_nape::dynamics::ZPP_Arbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::add","zpp_nape/util/Lists.hx",3529);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &o,::zpp_nape::util::ZNPList_ZPP_Arbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3530);
			{
				HX_STACK_LINE(3530)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3530);
						{
							HX_STACK_LINE(3530)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(3530)
							{
								HX_STACK_LINE(3530)
								if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(3530)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(3530)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
									HX_STACK_LINE(3530)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(3530)
									ret->next = null();
								}
								HX_STACK_LINE(3530)
								Dynamic();
							}
							HX_STACK_LINE(3530)
							ret->elt = o;
							HX_STACK_LINE(3530)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(3530)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(3530)
				temp->next = __this->head;
				HX_STACK_LINE(3530)
				__this->head = temp;
				HX_STACK_LINE(3530)
				__this->modified = true;
				HX_STACK_LINE(3530)
				(__this->length)++;
				HX_STACK_LINE(3530)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(3529)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,add,return )

Void ZNPList_ZPP_Arbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Arbiter i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::setbegin","zpp_nape/util/Lists.hx",3524);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(3525)
		this->head = i;
		HX_STACK_LINE(3526)
		this->modified = true;
		HX_STACK_LINE(3527)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::begin","zpp_nape/util/Lists.hx",3516);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3516)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,begin,return )


ZNPList_ZPP_Arbiter_obj::ZNPList_ZPP_Arbiter_obj()
{
}

void ZNPList_ZPP_Arbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Arbiter);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Arbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Arbiter_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Arbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Arbiter >(); return inValue; }
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

void ZNPList_ZPP_Arbiter_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Arbiter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Arbiter_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Arbiter_obj::__mClass;

void ZNPList_ZPP_Arbiter_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Arbiter"), hx::TCanCast< ZNPList_ZPP_Arbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Arbiter_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
