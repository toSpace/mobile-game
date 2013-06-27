#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CbSet_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_CbSet::new","zpp_nape/util/Lists.hx",3094);
{
	HX_STACK_LINE(3104)
	this->length = (int)0;
	HX_STACK_LINE(3103)
	this->pushmod = false;
	HX_STACK_LINE(3102)
	this->modified = false;
	HX_STACK_LINE(3095)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_CbSet_obj::~ZNPList_ZPP_CbSet_obj() { }

Dynamic ZNPList_ZPP_CbSet_obj::__CreateEmpty() { return  new ZNPList_ZPP_CbSet_obj; }
hx::ObjectPtr< ZNPList_ZPP_CbSet_obj > ZNPList_ZPP_CbSet_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CbSet_obj > result = new ZNPList_ZPP_CbSet_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_CbSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CbSet_obj > result = new ZNPList_ZPP_CbSet_obj();
	result->__construct();
	return result;}

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::at","zpp_nape/util/Lists.hx",3497);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(3506)
	::zpp_nape::util::ZNPNode_ZPP_CbSet it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(3507)
	return (  (((it != null()))) ? ::zpp_nape::callbacks::ZPP_CbSet(it->elt) : ::zpp_nape::callbacks::ZPP_CbSet(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::iterator_at","zpp_nape/util/Lists.hx",3484);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(3493)
	::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3494)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(3494)
		ret = ret->next;
	}
	HX_STACK_LINE(3495)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::back","zpp_nape/util/Lists.hx",3475);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3476)
	::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3477)
	::zpp_nape::util::ZNPNode_ZPP_CbSet cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3478)
	while(((cur != null()))){
		HX_STACK_LINE(3479)
		ret = cur;
		HX_STACK_LINE(3480)
		cur = cur->next;
	}
	HX_STACK_LINE(3482)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,back,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::front","zpp_nape/util/Lists.hx",3472);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3472)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,front,return )

bool ZNPList_ZPP_CbSet_obj::inlined_has( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_has","zpp_nape/util/Lists.hx",3442);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3451)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3452)
	{
		HX_STACK_LINE(3453)
		ret = false;
		HX_STACK_LINE(3454)
		{
			HX_STACK_LINE(3455)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3456)
			while(((cx_ite != null()))){
				HX_STACK_LINE(3457)
				::zpp_nape::callbacks::ZPP_CbSet npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(3458)
				if (((npite == obj))){
					HX_STACK_LINE(3460)
					ret = true;
					HX_STACK_LINE(3461)
					break;
				}
				HX_STACK_LINE(3464)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(3468)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_has,return )

bool ZNPList_ZPP_CbSet_obj::has( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::has","zpp_nape/util/Lists.hx",3437);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_CbSet_obj *__this,::zpp_nape::callbacks::ZPP_CbSet &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3438);
			{
				HX_STACK_LINE(3438)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3438)
				{
					HX_STACK_LINE(3438)
					ret = false;
					HX_STACK_LINE(3438)
					{
						HX_STACK_LINE(3438)
						::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(3438)
						while(((cx_ite != null()))){
							HX_STACK_LINE(3438)
							::zpp_nape::callbacks::ZPP_CbSet npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(3438)
							if (((npite == obj))){
								HX_STACK_LINE(3438)
								ret = true;
								HX_STACK_LINE(3438)
								break;
							}
							HX_STACK_LINE(3438)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(3438)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3437)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,has,return )

int ZNPList_ZPP_CbSet_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::size","zpp_nape/util/Lists.hx",3434);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3434)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,size,return )

bool ZNPList_ZPP_CbSet_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::empty","zpp_nape/util/Lists.hx",3429);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3429)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,empty,return )

Void ZNPList_ZPP_CbSet_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::reverse","zpp_nape/util/Lists.hx",3414);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3415)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3416)
		::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3417)
		while(((cur != null()))){
			HX_STACK_LINE(3418)
			::zpp_nape::util::ZNPNode_ZPP_CbSet nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(3419)
			cur->next = pre;
			HX_STACK_LINE(3420)
			this->head = cur;
			HX_STACK_LINE(3421)
			pre = cur;
			HX_STACK_LINE(3422)
			cur = nx;
		}
		HX_STACK_LINE(3424)
		this->modified = true;
		HX_STACK_LINE(3425)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,reverse,(void))

Void ZNPList_ZPP_CbSet_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_clear","zpp_nape/util/Lists.hx",3408);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3410)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(3410)
			::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3410)
			this->head = ret->next;
			HX_STACK_LINE(3410)
			{
				HX_STACK_LINE(3410)
				::zpp_nape::util::ZNPNode_ZPP_CbSet o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3410)
				o->elt = null();
				HX_STACK_LINE(3410)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(3410)
				::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3410)
			if (((this->head == null()))){
				HX_STACK_LINE(3410)
				this->pushmod = true;
			}
			HX_STACK_LINE(3410)
			this->modified = true;
			HX_STACK_LINE(3410)
			(this->length)--;
		}
		HX_STACK_LINE(3411)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,inlined_clear,(void))

Void ZNPList_ZPP_CbSet_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::clear","zpp_nape/util/Lists.hx",3403);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3404)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(3404)
			::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3404)
			this->head = ret->next;
			HX_STACK_LINE(3404)
			{
				HX_STACK_LINE(3404)
				::zpp_nape::util::ZNPNode_ZPP_CbSet o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3404)
				o->elt = null();
				HX_STACK_LINE(3404)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(3404)
				::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3404)
			if (((this->head == null()))){
				HX_STACK_LINE(3404)
				this->pushmod = true;
			}
			HX_STACK_LINE(3404)
			this->modified = true;
			HX_STACK_LINE(3404)
			(this->length)--;
		}
		HX_STACK_LINE(3404)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CbSet pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::splice","zpp_nape/util/Lists.hx",3399);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(3400)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(3400)
		this->erase(pre);
	}
	HX_STACK_LINE(3401)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSet_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CbSet pre){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_erase","zpp_nape/util/Lists.hx",3353);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(3362)
	::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(3363)
	::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3364)
	if (((pre == null()))){
		HX_STACK_LINE(3365)
		old = this->head;
		HX_STACK_LINE(3366)
		ret = old->next;
		HX_STACK_LINE(3367)
		this->head = ret;
		HX_STACK_LINE(3368)
		if (((this->head == null()))){
			HX_STACK_LINE(3368)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(3371)
		old = pre->next;
		HX_STACK_LINE(3372)
		ret = old->next;
		HX_STACK_LINE(3373)
		pre->next = ret;
		HX_STACK_LINE(3374)
		if (((ret == null()))){
			HX_STACK_LINE(3374)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(3377)
	{
		HX_STACK_LINE(3378)
		::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(3387)
		o->elt = null();
		HX_STACK_LINE(3388)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
		HX_STACK_LINE(3389)
		::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(3394)
	this->modified = true;
	HX_STACK_LINE(3395)
	(this->length)--;
	HX_STACK_LINE(3396)
	this->pushmod = true;
	HX_STACK_LINE(3397)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CbSet pre){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::erase","zpp_nape/util/Lists.hx",3348);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::util::ZNPList_ZPP_CbSet_obj *__this,::zpp_nape::util::ZNPNode_ZPP_CbSet &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3349);
			{
				HX_STACK_LINE(3349)
				::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(3349)
				::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3349)
				if (((pre == null()))){
					HX_STACK_LINE(3349)
					old = __this->head;
					HX_STACK_LINE(3349)
					ret = old->next;
					HX_STACK_LINE(3349)
					__this->head = ret;
					HX_STACK_LINE(3349)
					if (((__this->head == null()))){
						HX_STACK_LINE(3349)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(3349)
					old = pre->next;
					HX_STACK_LINE(3349)
					ret = old->next;
					HX_STACK_LINE(3349)
					pre->next = ret;
					HX_STACK_LINE(3349)
					if (((ret == null()))){
						HX_STACK_LINE(3349)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(3349)
				{
					HX_STACK_LINE(3349)
					::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(3349)
					o->elt = null();
					HX_STACK_LINE(3349)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
					HX_STACK_LINE(3349)
					::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
				}
				HX_STACK_LINE(3349)
				__this->modified = true;
				HX_STACK_LINE(3349)
				(__this->length)--;
				HX_STACK_LINE(3349)
				__this->pushmod = true;
				HX_STACK_LINE(3349)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3348)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,erase,return )

bool ZNPList_ZPP_CbSet_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_try_remove","zpp_nape/util/Lists.hx",3325);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3334)
	::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3335)
	::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3336)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3337)
	while(((cur != null()))){
		HX_STACK_LINE(3338)
		if (((cur->elt == obj))){
			HX_STACK_LINE(3339)
			{
				HX_STACK_LINE(3339)
				::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(3339)
				::zpp_nape::util::ZNPNode_ZPP_CbSet ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(3339)
				if (((pre == null()))){
					HX_STACK_LINE(3339)
					old = this->head;
					HX_STACK_LINE(3339)
					ret1 = old->next;
					HX_STACK_LINE(3339)
					this->head = ret1;
					HX_STACK_LINE(3339)
					if (((this->head == null()))){
						HX_STACK_LINE(3339)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(3339)
					old = pre->next;
					HX_STACK_LINE(3339)
					ret1 = old->next;
					HX_STACK_LINE(3339)
					pre->next = ret1;
					HX_STACK_LINE(3339)
					if (((ret1 == null()))){
						HX_STACK_LINE(3339)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(3339)
				{
					HX_STACK_LINE(3339)
					::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(3339)
					o->elt = null();
					HX_STACK_LINE(3339)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
					HX_STACK_LINE(3339)
					::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
				}
				HX_STACK_LINE(3339)
				this->modified = true;
				HX_STACK_LINE(3339)
				(this->length)--;
				HX_STACK_LINE(3339)
				this->pushmod = true;
				HX_STACK_LINE(3339)
				ret1;
			}
			HX_STACK_LINE(3340)
			ret = true;
			HX_STACK_LINE(3341)
			break;
		}
		HX_STACK_LINE(3343)
		pre = cur;
		HX_STACK_LINE(3344)
		cur = cur->next;
	}
	HX_STACK_LINE(3346)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_try_remove,return )

Void ZNPList_ZPP_CbSet_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_remove","zpp_nape/util/Lists.hx",3312);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3321)
		::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3321)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3321)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3321)
		while(((cur != null()))){
			HX_STACK_LINE(3321)
			if (((cur->elt == obj))){
				HX_STACK_LINE(3321)
				{
					HX_STACK_LINE(3321)
					::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(3321)
					::zpp_nape::util::ZNPNode_ZPP_CbSet ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(3321)
					if (((pre == null()))){
						HX_STACK_LINE(3321)
						old = this->head;
						HX_STACK_LINE(3321)
						ret1 = old->next;
						HX_STACK_LINE(3321)
						this->head = ret1;
						HX_STACK_LINE(3321)
						if (((this->head == null()))){
							HX_STACK_LINE(3321)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(3321)
						old = pre->next;
						HX_STACK_LINE(3321)
						ret1 = old->next;
						HX_STACK_LINE(3321)
						pre->next = ret1;
						HX_STACK_LINE(3321)
						if (((ret1 == null()))){
							HX_STACK_LINE(3321)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(3321)
					{
						HX_STACK_LINE(3321)
						::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(3321)
						o->elt = null();
						HX_STACK_LINE(3321)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
						HX_STACK_LINE(3321)
						::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
					}
					HX_STACK_LINE(3321)
					this->modified = true;
					HX_STACK_LINE(3321)
					(this->length)--;
					HX_STACK_LINE(3321)
					this->pushmod = true;
					HX_STACK_LINE(3321)
					ret1;
				}
				HX_STACK_LINE(3321)
				ret = true;
				HX_STACK_LINE(3321)
				break;
			}
			HX_STACK_LINE(3321)
			pre = cur;
			HX_STACK_LINE(3321)
			cur = cur->next;
		}
		HX_STACK_LINE(3321)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_remove,(void))

bool ZNPList_ZPP_CbSet_obj::try_remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::try_remove","zpp_nape/util/Lists.hx",3287);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3296)
	::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3297)
	::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3298)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3299)
	while(((cur != null()))){
		HX_STACK_LINE(3300)
		if (((cur->elt == obj))){
			HX_STACK_LINE(3301)
			this->erase(pre);
			HX_STACK_LINE(3302)
			ret = true;
			HX_STACK_LINE(3303)
			break;
		}
		HX_STACK_LINE(3305)
		pre = cur;
		HX_STACK_LINE(3306)
		cur = cur->next;
	}
	HX_STACK_LINE(3308)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,try_remove,return )

Void ZNPList_ZPP_CbSet_obj::remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::remove","zpp_nape/util/Lists.hx",3276);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3285)
		::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3285)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3285)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3285)
		while(((cur != null()))){
			HX_STACK_LINE(3285)
			if (((cur->elt == obj))){
				HX_STACK_LINE(3285)
				{
					HX_STACK_LINE(3285)
					::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(3285)
					::zpp_nape::util::ZNPNode_ZPP_CbSet ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(3285)
					if (((pre == null()))){
						HX_STACK_LINE(3285)
						old = this->head;
						HX_STACK_LINE(3285)
						ret1 = old->next;
						HX_STACK_LINE(3285)
						this->head = ret1;
						HX_STACK_LINE(3285)
						if (((this->head == null()))){
							HX_STACK_LINE(3285)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(3285)
						old = pre->next;
						HX_STACK_LINE(3285)
						ret1 = old->next;
						HX_STACK_LINE(3285)
						pre->next = ret1;
						HX_STACK_LINE(3285)
						if (((ret1 == null()))){
							HX_STACK_LINE(3285)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(3285)
					{
						HX_STACK_LINE(3285)
						::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(3285)
						o->elt = null();
						HX_STACK_LINE(3285)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
						HX_STACK_LINE(3285)
						::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
					}
					HX_STACK_LINE(3285)
					this->modified = true;
					HX_STACK_LINE(3285)
					(this->length)--;
					HX_STACK_LINE(3285)
					this->pushmod = true;
					HX_STACK_LINE(3285)
					ret1;
				}
				HX_STACK_LINE(3285)
				ret = true;
				HX_STACK_LINE(3285)
				break;
			}
			HX_STACK_LINE(3285)
			pre = cur;
			HX_STACK_LINE(3285)
			cur = cur->next;
		}
		HX_STACK_LINE(3285)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,remove,(void))

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_pop_unsafe","zpp_nape/util/Lists.hx",3263);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3272)
	::zpp_nape::callbacks::ZPP_CbSet ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3273)
	this->pop();
	HX_STACK_LINE(3274)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,inlined_pop_unsafe,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::pop_unsafe","zpp_nape/util/Lists.hx",3258);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbSet Block( ::zpp_nape::util::ZNPList_ZPP_CbSet_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3259);
			{
				HX_STACK_LINE(3259)
				::zpp_nape::callbacks::ZPP_CbSet ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3259)
				__this->pop();
				HX_STACK_LINE(3259)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3258)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,pop_unsafe,return )

Void ZNPList_ZPP_CbSet_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_pop","zpp_nape/util/Lists.hx",3225);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3234)
		::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3235)
		this->head = ret->next;
		HX_STACK_LINE(3237)
		{
			HX_STACK_LINE(3238)
			::zpp_nape::util::ZNPNode_ZPP_CbSet o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3247)
			o->elt = null();
			HX_STACK_LINE(3248)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(3249)
			::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3254)
		if (((this->head == null()))){
			HX_STACK_LINE(3254)
			this->pushmod = true;
		}
		HX_STACK_LINE(3255)
		this->modified = true;
		HX_STACK_LINE(3256)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,inlined_pop,(void))

Void ZNPList_ZPP_CbSet_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::pop","zpp_nape/util/Lists.hx",3220);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3221)
		::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3221)
		this->head = ret->next;
		HX_STACK_LINE(3221)
		{
			HX_STACK_LINE(3221)
			::zpp_nape::util::ZNPNode_ZPP_CbSet o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3221)
			o->elt = null();
			HX_STACK_LINE(3221)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(3221)
			::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3221)
		if (((this->head == null()))){
			HX_STACK_LINE(3221)
			this->pushmod = true;
		}
		HX_STACK_LINE(3221)
		this->modified = true;
		HX_STACK_LINE(3221)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CbSet cur,::zpp_nape::callbacks::ZPP_CbSet o){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_insert","zpp_nape/util/Lists.hx",3177);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3186);
			{
				HX_STACK_LINE(3187)
				::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3188)
				{
					HX_STACK_LINE(3189)
					if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
						HX_STACK_LINE(3189)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
					}
					else{
						HX_STACK_LINE(3196)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
						HX_STACK_LINE(3197)
						::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
						HX_STACK_LINE(3198)
						ret->next = null();
					}
					HX_STACK_LINE(3203)
					Dynamic();
				}
				HX_STACK_LINE(3205)
				ret->elt = o;
				HX_STACK_LINE(3206)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3186)
	::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3208)
	if (((cur == null()))){
		HX_STACK_LINE(3209)
		temp->next = this->head;
		HX_STACK_LINE(3210)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(3213)
		temp->next = cur->next;
		HX_STACK_LINE(3214)
		cur->next = temp;
	}
	HX_STACK_LINE(3216)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(3217)
	(this->length)++;
	HX_STACK_LINE(3218)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSet_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CbSet cur,::zpp_nape::callbacks::ZPP_CbSet o){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::insert","zpp_nape/util/Lists.hx",3172);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::util::ZNPList_ZPP_CbSet_obj *__this,::zpp_nape::callbacks::ZPP_CbSet &o,::zpp_nape::util::ZNPNode_ZPP_CbSet &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3173);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3173);
						{
							HX_STACK_LINE(3173)
							::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(3173)
							{
								HX_STACK_LINE(3173)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
									HX_STACK_LINE(3173)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
								}
								else{
									HX_STACK_LINE(3173)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
									HX_STACK_LINE(3173)
									::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
									HX_STACK_LINE(3173)
									ret->next = null();
								}
								HX_STACK_LINE(3173)
								Dynamic();
							}
							HX_STACK_LINE(3173)
							ret->elt = o;
							HX_STACK_LINE(3173)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(3173)
				::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(3173)
				if (((cur == null()))){
					HX_STACK_LINE(3173)
					temp->next = __this->head;
					HX_STACK_LINE(3173)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(3173)
					temp->next = cur->next;
					HX_STACK_LINE(3173)
					cur->next = temp;
				}
				HX_STACK_LINE(3173)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(3173)
				(__this->length)++;
				HX_STACK_LINE(3173)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(3172)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSet_obj,insert,return )

Void ZNPList_ZPP_CbSet_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CbSet x){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::addAll","zpp_nape/util/Lists.hx",3154);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(3164)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(3165)
		while(((cx_ite != null()))){
			HX_STACK_LINE(3166)
			::zpp_nape::callbacks::ZPP_CbSet i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(3167)
			this->add(i);
			HX_STACK_LINE(3168)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,addAll,(void))

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::inlined_add( ::zpp_nape::callbacks::ZPP_CbSet o){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_add","zpp_nape/util/Lists.hx",3117);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3126);
			{
				HX_STACK_LINE(3127)
				::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3128)
				{
					HX_STACK_LINE(3129)
					if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
						HX_STACK_LINE(3129)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
					}
					else{
						HX_STACK_LINE(3136)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
						HX_STACK_LINE(3137)
						::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
						HX_STACK_LINE(3138)
						ret->next = null();
					}
					HX_STACK_LINE(3143)
					Dynamic();
				}
				HX_STACK_LINE(3145)
				ret->elt = o;
				HX_STACK_LINE(3146)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3126)
	::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3148)
	temp->next = this->head;
	HX_STACK_LINE(3149)
	this->head = temp;
	HX_STACK_LINE(3150)
	this->modified = true;
	HX_STACK_LINE(3151)
	(this->length)++;
	HX_STACK_LINE(3152)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_add,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::add( ::zpp_nape::callbacks::ZPP_CbSet o){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::add","zpp_nape/util/Lists.hx",3112);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbSet Block( ::zpp_nape::util::ZNPList_ZPP_CbSet_obj *__this,::zpp_nape::callbacks::ZPP_CbSet &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3113);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3113);
						{
							HX_STACK_LINE(3113)
							::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(3113)
							{
								HX_STACK_LINE(3113)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
									HX_STACK_LINE(3113)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
								}
								else{
									HX_STACK_LINE(3113)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
									HX_STACK_LINE(3113)
									::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
									HX_STACK_LINE(3113)
									ret->next = null();
								}
								HX_STACK_LINE(3113)
								Dynamic();
							}
							HX_STACK_LINE(3113)
							ret->elt = o;
							HX_STACK_LINE(3113)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(3113)
				::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(3113)
				temp->next = __this->head;
				HX_STACK_LINE(3113)
				__this->head = temp;
				HX_STACK_LINE(3113)
				__this->modified = true;
				HX_STACK_LINE(3113)
				(__this->length)++;
				HX_STACK_LINE(3113)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(3112)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,add,return )

Void ZNPList_ZPP_CbSet_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CbSet i){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::setbegin","zpp_nape/util/Lists.hx",3107);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(3108)
		this->head = i;
		HX_STACK_LINE(3109)
		this->modified = true;
		HX_STACK_LINE(3110)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::begin","zpp_nape/util/Lists.hx",3099);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3099)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,begin,return )


ZNPList_ZPP_CbSet_obj::ZNPList_ZPP_CbSet_obj()
{
}

void ZNPList_ZPP_CbSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CbSet);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CbSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_CbSet_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_CbSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CbSet >(); return inValue; }
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

void ZNPList_ZPP_CbSet_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CbSet_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CbSet_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_CbSet_obj::__mClass;

void ZNPList_ZPP_CbSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_CbSet"), hx::TCanCast< ZNPList_ZPP_CbSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_CbSet_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
