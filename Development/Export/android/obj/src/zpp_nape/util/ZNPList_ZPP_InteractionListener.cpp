#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_InteractionListener_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::new","zpp_nape/util/Lists.hx",2677);
{
	HX_STACK_LINE(2687)
	this->length = (int)0;
	HX_STACK_LINE(2686)
	this->pushmod = false;
	HX_STACK_LINE(2685)
	this->modified = false;
	HX_STACK_LINE(2678)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_InteractionListener_obj::~ZNPList_ZPP_InteractionListener_obj() { }

Dynamic ZNPList_ZPP_InteractionListener_obj::__CreateEmpty() { return  new ZNPList_ZPP_InteractionListener_obj; }
hx::ObjectPtr< ZNPList_ZPP_InteractionListener_obj > ZNPList_ZPP_InteractionListener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_InteractionListener_obj > result = new ZNPList_ZPP_InteractionListener_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_InteractionListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_InteractionListener_obj > result = new ZNPList_ZPP_InteractionListener_obj();
	result->__construct();
	return result;}

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::at","zpp_nape/util/Lists.hx",3080);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(3089)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(3090)
	return (  (((it != null()))) ? ::zpp_nape::callbacks::ZPP_InteractionListener(it->elt) : ::zpp_nape::callbacks::ZPP_InteractionListener(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::iterator_at","zpp_nape/util/Lists.hx",3067);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(3076)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3077)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(3077)
		ret = ret->next;
	}
	HX_STACK_LINE(3078)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::back","zpp_nape/util/Lists.hx",3058);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3059)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3060)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3061)
	while(((cur != null()))){
		HX_STACK_LINE(3062)
		ret = cur;
		HX_STACK_LINE(3063)
		cur = cur->next;
	}
	HX_STACK_LINE(3065)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,back,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::front","zpp_nape/util/Lists.hx",3055);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3055)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,front,return )

bool ZNPList_ZPP_InteractionListener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_has","zpp_nape/util/Lists.hx",3025);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3034)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3035)
	{
		HX_STACK_LINE(3036)
		ret = false;
		HX_STACK_LINE(3037)
		{
			HX_STACK_LINE(3038)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3039)
			while(((cx_ite != null()))){
				HX_STACK_LINE(3040)
				::zpp_nape::callbacks::ZPP_InteractionListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(3041)
				if (((npite == obj))){
					HX_STACK_LINE(3043)
					ret = true;
					HX_STACK_LINE(3044)
					break;
				}
				HX_STACK_LINE(3047)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(3051)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_has,return )

bool ZNPList_ZPP_InteractionListener_obj::has( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::has","zpp_nape/util/Lists.hx",3020);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj *__this,::zpp_nape::callbacks::ZPP_InteractionListener &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3021);
			{
				HX_STACK_LINE(3021)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3021)
				{
					HX_STACK_LINE(3021)
					ret = false;
					HX_STACK_LINE(3021)
					{
						HX_STACK_LINE(3021)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(3021)
						while(((cx_ite != null()))){
							HX_STACK_LINE(3021)
							::zpp_nape::callbacks::ZPP_InteractionListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(3021)
							if (((npite == obj))){
								HX_STACK_LINE(3021)
								ret = true;
								HX_STACK_LINE(3021)
								break;
							}
							HX_STACK_LINE(3021)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(3021)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3020)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,has,return )

int ZNPList_ZPP_InteractionListener_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::size","zpp_nape/util/Lists.hx",3017);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3017)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,size,return )

bool ZNPList_ZPP_InteractionListener_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::empty","zpp_nape/util/Lists.hx",3012);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3012)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,empty,return )

Void ZNPList_ZPP_InteractionListener_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::reverse","zpp_nape/util/Lists.hx",2997);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2998)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2999)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3000)
		while(((cur != null()))){
			HX_STACK_LINE(3001)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(3002)
			cur->next = pre;
			HX_STACK_LINE(3003)
			this->head = cur;
			HX_STACK_LINE(3004)
			pre = cur;
			HX_STACK_LINE(3005)
			cur = nx;
		}
		HX_STACK_LINE(3007)
		this->modified = true;
		HX_STACK_LINE(3008)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,reverse,(void))

Void ZNPList_ZPP_InteractionListener_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_clear","zpp_nape/util/Lists.hx",2991);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2993)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(2993)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2993)
			this->head = ret->next;
			HX_STACK_LINE(2993)
			{
				HX_STACK_LINE(2993)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2993)
				o->elt = null();
				HX_STACK_LINE(2993)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
				HX_STACK_LINE(2993)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2993)
			if (((this->head == null()))){
				HX_STACK_LINE(2993)
				this->pushmod = true;
			}
			HX_STACK_LINE(2993)
			this->modified = true;
			HX_STACK_LINE(2993)
			(this->length)--;
		}
		HX_STACK_LINE(2994)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,inlined_clear,(void))

Void ZNPList_ZPP_InteractionListener_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::clear","zpp_nape/util/Lists.hx",2986);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2987)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(2987)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2987)
			this->head = ret->next;
			HX_STACK_LINE(2987)
			{
				HX_STACK_LINE(2987)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2987)
				o->elt = null();
				HX_STACK_LINE(2987)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
				HX_STACK_LINE(2987)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2987)
			if (((this->head == null()))){
				HX_STACK_LINE(2987)
				this->pushmod = true;
			}
			HX_STACK_LINE(2987)
			this->modified = true;
			HX_STACK_LINE(2987)
			(this->length)--;
		}
		HX_STACK_LINE(2987)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::splice","zpp_nape/util/Lists.hx",2982);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(2983)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(2983)
		this->erase(pre);
	}
	HX_STACK_LINE(2984)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionListener_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_erase","zpp_nape/util/Lists.hx",2936);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(2945)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(2946)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2947)
	if (((pre == null()))){
		HX_STACK_LINE(2948)
		old = this->head;
		HX_STACK_LINE(2949)
		ret = old->next;
		HX_STACK_LINE(2950)
		this->head = ret;
		HX_STACK_LINE(2951)
		if (((this->head == null()))){
			HX_STACK_LINE(2951)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(2954)
		old = pre->next;
		HX_STACK_LINE(2955)
		ret = old->next;
		HX_STACK_LINE(2956)
		pre->next = ret;
		HX_STACK_LINE(2957)
		if (((ret == null()))){
			HX_STACK_LINE(2957)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(2960)
	{
		HX_STACK_LINE(2961)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2970)
		o->elt = null();
		HX_STACK_LINE(2971)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
		HX_STACK_LINE(2972)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2977)
	this->modified = true;
	HX_STACK_LINE(2978)
	(this->length)--;
	HX_STACK_LINE(2979)
	this->pushmod = true;
	HX_STACK_LINE(2980)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::erase","zpp_nape/util/Lists.hx",2931);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj *__this,::zpp_nape::util::ZNPNode_ZPP_InteractionListener &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2932);
			{
				HX_STACK_LINE(2932)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(2932)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2932)
				if (((pre == null()))){
					HX_STACK_LINE(2932)
					old = __this->head;
					HX_STACK_LINE(2932)
					ret = old->next;
					HX_STACK_LINE(2932)
					__this->head = ret;
					HX_STACK_LINE(2932)
					if (((__this->head == null()))){
						HX_STACK_LINE(2932)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(2932)
					old = pre->next;
					HX_STACK_LINE(2932)
					ret = old->next;
					HX_STACK_LINE(2932)
					pre->next = ret;
					HX_STACK_LINE(2932)
					if (((ret == null()))){
						HX_STACK_LINE(2932)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(2932)
				{
					HX_STACK_LINE(2932)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2932)
					o->elt = null();
					HX_STACK_LINE(2932)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
					HX_STACK_LINE(2932)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(2932)
				__this->modified = true;
				HX_STACK_LINE(2932)
				(__this->length)--;
				HX_STACK_LINE(2932)
				__this->pushmod = true;
				HX_STACK_LINE(2932)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2931)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,erase,return )

bool ZNPList_ZPP_InteractionListener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_try_remove","zpp_nape/util/Lists.hx",2908);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2917)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2918)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2919)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2920)
	while(((cur != null()))){
		HX_STACK_LINE(2921)
		if (((cur->elt == obj))){
			HX_STACK_LINE(2922)
			{
				HX_STACK_LINE(2922)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(2922)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(2922)
				if (((pre == null()))){
					HX_STACK_LINE(2922)
					old = this->head;
					HX_STACK_LINE(2922)
					ret1 = old->next;
					HX_STACK_LINE(2922)
					this->head = ret1;
					HX_STACK_LINE(2922)
					if (((this->head == null()))){
						HX_STACK_LINE(2922)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(2922)
					old = pre->next;
					HX_STACK_LINE(2922)
					ret1 = old->next;
					HX_STACK_LINE(2922)
					pre->next = ret1;
					HX_STACK_LINE(2922)
					if (((ret1 == null()))){
						HX_STACK_LINE(2922)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(2922)
				{
					HX_STACK_LINE(2922)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2922)
					o->elt = null();
					HX_STACK_LINE(2922)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
					HX_STACK_LINE(2922)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(2922)
				this->modified = true;
				HX_STACK_LINE(2922)
				(this->length)--;
				HX_STACK_LINE(2922)
				this->pushmod = true;
				HX_STACK_LINE(2922)
				ret1;
			}
			HX_STACK_LINE(2923)
			ret = true;
			HX_STACK_LINE(2924)
			break;
		}
		HX_STACK_LINE(2926)
		pre = cur;
		HX_STACK_LINE(2927)
		cur = cur->next;
	}
	HX_STACK_LINE(2929)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_try_remove,return )

Void ZNPList_ZPP_InteractionListener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_remove","zpp_nape/util/Lists.hx",2895);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(2904)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2904)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2904)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2904)
		while(((cur != null()))){
			HX_STACK_LINE(2904)
			if (((cur->elt == obj))){
				HX_STACK_LINE(2904)
				{
					HX_STACK_LINE(2904)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(2904)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2904)
					if (((pre == null()))){
						HX_STACK_LINE(2904)
						old = this->head;
						HX_STACK_LINE(2904)
						ret1 = old->next;
						HX_STACK_LINE(2904)
						this->head = ret1;
						HX_STACK_LINE(2904)
						if (((this->head == null()))){
							HX_STACK_LINE(2904)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(2904)
						old = pre->next;
						HX_STACK_LINE(2904)
						ret1 = old->next;
						HX_STACK_LINE(2904)
						pre->next = ret1;
						HX_STACK_LINE(2904)
						if (((ret1 == null()))){
							HX_STACK_LINE(2904)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(2904)
					{
						HX_STACK_LINE(2904)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2904)
						o->elt = null();
						HX_STACK_LINE(2904)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
						HX_STACK_LINE(2904)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(2904)
					this->modified = true;
					HX_STACK_LINE(2904)
					(this->length)--;
					HX_STACK_LINE(2904)
					this->pushmod = true;
					HX_STACK_LINE(2904)
					ret1;
				}
				HX_STACK_LINE(2904)
				ret = true;
				HX_STACK_LINE(2904)
				break;
			}
			HX_STACK_LINE(2904)
			pre = cur;
			HX_STACK_LINE(2904)
			cur = cur->next;
		}
		HX_STACK_LINE(2904)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_remove,(void))

bool ZNPList_ZPP_InteractionListener_obj::try_remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::try_remove","zpp_nape/util/Lists.hx",2870);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2879)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2880)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2881)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2882)
	while(((cur != null()))){
		HX_STACK_LINE(2883)
		if (((cur->elt == obj))){
			HX_STACK_LINE(2884)
			this->erase(pre);
			HX_STACK_LINE(2885)
			ret = true;
			HX_STACK_LINE(2886)
			break;
		}
		HX_STACK_LINE(2888)
		pre = cur;
		HX_STACK_LINE(2889)
		cur = cur->next;
	}
	HX_STACK_LINE(2891)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,try_remove,return )

Void ZNPList_ZPP_InteractionListener_obj::remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::remove","zpp_nape/util/Lists.hx",2859);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(2868)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2868)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2868)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2868)
		while(((cur != null()))){
			HX_STACK_LINE(2868)
			if (((cur->elt == obj))){
				HX_STACK_LINE(2868)
				{
					HX_STACK_LINE(2868)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(2868)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(2868)
					if (((pre == null()))){
						HX_STACK_LINE(2868)
						old = this->head;
						HX_STACK_LINE(2868)
						ret1 = old->next;
						HX_STACK_LINE(2868)
						this->head = ret1;
						HX_STACK_LINE(2868)
						if (((this->head == null()))){
							HX_STACK_LINE(2868)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(2868)
						old = pre->next;
						HX_STACK_LINE(2868)
						ret1 = old->next;
						HX_STACK_LINE(2868)
						pre->next = ret1;
						HX_STACK_LINE(2868)
						if (((ret1 == null()))){
							HX_STACK_LINE(2868)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(2868)
					{
						HX_STACK_LINE(2868)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2868)
						o->elt = null();
						HX_STACK_LINE(2868)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
						HX_STACK_LINE(2868)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(2868)
					this->modified = true;
					HX_STACK_LINE(2868)
					(this->length)--;
					HX_STACK_LINE(2868)
					this->pushmod = true;
					HX_STACK_LINE(2868)
					ret1;
				}
				HX_STACK_LINE(2868)
				ret = true;
				HX_STACK_LINE(2868)
				break;
			}
			HX_STACK_LINE(2868)
			pre = cur;
			HX_STACK_LINE(2868)
			cur = cur->next;
		}
		HX_STACK_LINE(2868)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,remove,(void))

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_pop_unsafe","zpp_nape/util/Lists.hx",2846);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2855)
	::zpp_nape::callbacks::ZPP_InteractionListener ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2856)
	this->pop();
	HX_STACK_LINE(2857)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,inlined_pop_unsafe,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::pop_unsafe","zpp_nape/util/Lists.hx",2841);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_InteractionListener Block( ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2842);
			{
				HX_STACK_LINE(2842)
				::zpp_nape::callbacks::ZPP_InteractionListener ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2842)
				__this->pop();
				HX_STACK_LINE(2842)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2841)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,pop_unsafe,return )

Void ZNPList_ZPP_InteractionListener_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_pop","zpp_nape/util/Lists.hx",2808);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2817)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2818)
		this->head = ret->next;
		HX_STACK_LINE(2820)
		{
			HX_STACK_LINE(2821)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2830)
			o->elt = null();
			HX_STACK_LINE(2831)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
			HX_STACK_LINE(2832)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2837)
		if (((this->head == null()))){
			HX_STACK_LINE(2837)
			this->pushmod = true;
		}
		HX_STACK_LINE(2838)
		this->modified = true;
		HX_STACK_LINE(2839)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,inlined_pop,(void))

Void ZNPList_ZPP_InteractionListener_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::pop","zpp_nape/util/Lists.hx",2803);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2804)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2804)
		this->head = ret->next;
		HX_STACK_LINE(2804)
		{
			HX_STACK_LINE(2804)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2804)
			o->elt = null();
			HX_STACK_LINE(2804)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
			HX_STACK_LINE(2804)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2804)
		if (((this->head == null()))){
			HX_STACK_LINE(2804)
			this->pushmod = true;
		}
		HX_STACK_LINE(2804)
		this->modified = true;
		HX_STACK_LINE(2804)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur,::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_insert","zpp_nape/util/Lists.hx",2760);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2769);
			{
				HX_STACK_LINE(2770)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2771)
				{
					HX_STACK_LINE(2772)
					if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
						HX_STACK_LINE(2772)
						ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
					}
					else{
						HX_STACK_LINE(2779)
						ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
						HX_STACK_LINE(2780)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2781)
						ret->next = null();
					}
					HX_STACK_LINE(2786)
					Dynamic();
				}
				HX_STACK_LINE(2788)
				ret->elt = o;
				HX_STACK_LINE(2789)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2769)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2791)
	if (((cur == null()))){
		HX_STACK_LINE(2792)
		temp->next = this->head;
		HX_STACK_LINE(2793)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(2796)
		temp->next = cur->next;
		HX_STACK_LINE(2797)
		cur->next = temp;
	}
	HX_STACK_LINE(2799)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(2800)
	(this->length)++;
	HX_STACK_LINE(2801)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionListener_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur,::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::insert","zpp_nape/util/Lists.hx",2755);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj *__this,::zpp_nape::callbacks::ZPP_InteractionListener &o,::zpp_nape::util::ZNPNode_ZPP_InteractionListener &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2756);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2756);
						{
							HX_STACK_LINE(2756)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(2756)
							{
								HX_STACK_LINE(2756)
								if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(2756)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
								}
								else{
									HX_STACK_LINE(2756)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
									HX_STACK_LINE(2756)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(2756)
									ret->next = null();
								}
								HX_STACK_LINE(2756)
								Dynamic();
							}
							HX_STACK_LINE(2756)
							ret->elt = o;
							HX_STACK_LINE(2756)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(2756)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(2756)
				if (((cur == null()))){
					HX_STACK_LINE(2756)
					temp->next = __this->head;
					HX_STACK_LINE(2756)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(2756)
					temp->next = cur->next;
					HX_STACK_LINE(2756)
					cur->next = temp;
				}
				HX_STACK_LINE(2756)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(2756)
				(__this->length)++;
				HX_STACK_LINE(2756)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(2755)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionListener_obj,insert,return )

Void ZNPList_ZPP_InteractionListener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_InteractionListener x){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::addAll","zpp_nape/util/Lists.hx",2737);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(2747)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(2748)
		while(((cx_ite != null()))){
			HX_STACK_LINE(2749)
			::zpp_nape::callbacks::ZPP_InteractionListener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2750)
			this->add(i);
			HX_STACK_LINE(2751)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,addAll,(void))

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_add","zpp_nape/util/Lists.hx",2700);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2709);
			{
				HX_STACK_LINE(2710)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2711)
				{
					HX_STACK_LINE(2712)
					if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
						HX_STACK_LINE(2712)
						ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
					}
					else{
						HX_STACK_LINE(2719)
						ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
						HX_STACK_LINE(2720)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2721)
						ret->next = null();
					}
					HX_STACK_LINE(2726)
					Dynamic();
				}
				HX_STACK_LINE(2728)
				ret->elt = o;
				HX_STACK_LINE(2729)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2709)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2731)
	temp->next = this->head;
	HX_STACK_LINE(2732)
	this->head = temp;
	HX_STACK_LINE(2733)
	this->modified = true;
	HX_STACK_LINE(2734)
	(this->length)++;
	HX_STACK_LINE(2735)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_add,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::add( ::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::add","zpp_nape/util/Lists.hx",2695);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_InteractionListener Block( ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj *__this,::zpp_nape::callbacks::ZPP_InteractionListener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2696);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2696);
						{
							HX_STACK_LINE(2696)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(2696)
							{
								HX_STACK_LINE(2696)
								if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(2696)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
								}
								else{
									HX_STACK_LINE(2696)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
									HX_STACK_LINE(2696)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(2696)
									ret->next = null();
								}
								HX_STACK_LINE(2696)
								Dynamic();
							}
							HX_STACK_LINE(2696)
							ret->elt = o;
							HX_STACK_LINE(2696)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(2696)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(2696)
				temp->next = __this->head;
				HX_STACK_LINE(2696)
				__this->head = temp;
				HX_STACK_LINE(2696)
				__this->modified = true;
				HX_STACK_LINE(2696)
				(__this->length)++;
				HX_STACK_LINE(2696)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(2695)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,add,return )

Void ZNPList_ZPP_InteractionListener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener i){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::setbegin","zpp_nape/util/Lists.hx",2690);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(2691)
		this->head = i;
		HX_STACK_LINE(2692)
		this->modified = true;
		HX_STACK_LINE(2693)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::begin","zpp_nape/util/Lists.hx",2682);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2682)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,begin,return )


ZNPList_ZPP_InteractionListener_obj::ZNPList_ZPP_InteractionListener_obj()
{
}

void ZNPList_ZPP_InteractionListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_InteractionListener);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_InteractionListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_InteractionListener_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_InteractionListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_InteractionListener >(); return inValue; }
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

void ZNPList_ZPP_InteractionListener_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_InteractionListener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_InteractionListener_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_InteractionListener_obj::__mClass;

void ZNPList_ZPP_InteractionListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_InteractionListener"), hx::TCanCast< ZNPList_ZPP_InteractionListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_InteractionListener_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
