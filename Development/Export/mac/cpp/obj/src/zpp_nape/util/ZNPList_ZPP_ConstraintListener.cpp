#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_ConstraintListener_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::new","zpp_nape/util/Lists.hx",4762);
{
	HX_STACK_LINE(4772)
	this->length = (int)0;
	HX_STACK_LINE(4771)
	this->pushmod = false;
	HX_STACK_LINE(4770)
	this->modified = false;
	HX_STACK_LINE(4763)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_ConstraintListener_obj::~ZNPList_ZPP_ConstraintListener_obj() { }

Dynamic ZNPList_ZPP_ConstraintListener_obj::__CreateEmpty() { return  new ZNPList_ZPP_ConstraintListener_obj; }
hx::ObjectPtr< ZNPList_ZPP_ConstraintListener_obj > ZNPList_ZPP_ConstraintListener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_ConstraintListener_obj > result = new ZNPList_ZPP_ConstraintListener_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_ConstraintListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_ConstraintListener_obj > result = new ZNPList_ZPP_ConstraintListener_obj();
	result->__construct();
	return result;}

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::at","zpp_nape/util/Lists.hx",5165);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(5174)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(5175)
	return (  (((it != null()))) ? ::zpp_nape::callbacks::ZPP_ConstraintListener(it->elt) : ::zpp_nape::callbacks::ZPP_ConstraintListener(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::iterator_at","zpp_nape/util/Lists.hx",5152);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(5161)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5162)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(5162)
		ret = ret->next;
	}
	HX_STACK_LINE(5163)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::back","zpp_nape/util/Lists.hx",5143);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5144)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5145)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5146)
	while(((cur != null()))){
		HX_STACK_LINE(5147)
		ret = cur;
		HX_STACK_LINE(5148)
		cur = cur->next;
	}
	HX_STACK_LINE(5150)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,back,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::front","zpp_nape/util/Lists.hx",5140);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5140)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,front,return )

bool ZNPList_ZPP_ConstraintListener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_has","zpp_nape/util/Lists.hx",5110);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5119)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5120)
	{
		HX_STACK_LINE(5121)
		ret = false;
		HX_STACK_LINE(5122)
		{
			HX_STACK_LINE(5123)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5124)
			while(((cx_ite != null()))){
				HX_STACK_LINE(5125)
				::zpp_nape::callbacks::ZPP_ConstraintListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(5126)
				if (((npite == obj))){
					HX_STACK_LINE(5128)
					ret = true;
					HX_STACK_LINE(5129)
					break;
				}
				HX_STACK_LINE(5132)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(5136)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_has,return )

bool ZNPList_ZPP_ConstraintListener_obj::has( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::has","zpp_nape/util/Lists.hx",5105);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj *__this,::zpp_nape::callbacks::ZPP_ConstraintListener &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5106);
			{
				HX_STACK_LINE(5106)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5106)
				{
					HX_STACK_LINE(5106)
					ret = false;
					HX_STACK_LINE(5106)
					{
						HX_STACK_LINE(5106)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(5106)
						while(((cx_ite != null()))){
							HX_STACK_LINE(5106)
							::zpp_nape::callbacks::ZPP_ConstraintListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(5106)
							if (((npite == obj))){
								HX_STACK_LINE(5106)
								ret = true;
								HX_STACK_LINE(5106)
								break;
							}
							HX_STACK_LINE(5106)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(5106)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5105)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,has,return )

int ZNPList_ZPP_ConstraintListener_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::size","zpp_nape/util/Lists.hx",5102);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5102)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,size,return )

bool ZNPList_ZPP_ConstraintListener_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::empty","zpp_nape/util/Lists.hx",5097);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5097)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,empty,return )

Void ZNPList_ZPP_ConstraintListener_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::reverse","zpp_nape/util/Lists.hx",5082);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5083)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5084)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5085)
		while(((cur != null()))){
			HX_STACK_LINE(5086)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(5087)
			cur->next = pre;
			HX_STACK_LINE(5088)
			this->head = cur;
			HX_STACK_LINE(5089)
			pre = cur;
			HX_STACK_LINE(5090)
			cur = nx;
		}
		HX_STACK_LINE(5092)
		this->modified = true;
		HX_STACK_LINE(5093)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,reverse,(void))

Void ZNPList_ZPP_ConstraintListener_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_clear","zpp_nape/util/Lists.hx",5076);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5078)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(5078)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5078)
			this->head = ret->next;
			HX_STACK_LINE(5078)
			{
				HX_STACK_LINE(5078)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5078)
				o->elt = null();
				HX_STACK_LINE(5078)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
				HX_STACK_LINE(5078)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5078)
			if (((this->head == null()))){
				HX_STACK_LINE(5078)
				this->pushmod = true;
			}
			HX_STACK_LINE(5078)
			this->modified = true;
			HX_STACK_LINE(5078)
			(this->length)--;
		}
		HX_STACK_LINE(5079)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,inlined_clear,(void))

Void ZNPList_ZPP_ConstraintListener_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::clear","zpp_nape/util/Lists.hx",5071);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5072)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(5072)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5072)
			this->head = ret->next;
			HX_STACK_LINE(5072)
			{
				HX_STACK_LINE(5072)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5072)
				o->elt = null();
				HX_STACK_LINE(5072)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
				HX_STACK_LINE(5072)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5072)
			if (((this->head == null()))){
				HX_STACK_LINE(5072)
				this->pushmod = true;
			}
			HX_STACK_LINE(5072)
			this->modified = true;
			HX_STACK_LINE(5072)
			(this->length)--;
		}
		HX_STACK_LINE(5072)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::splice","zpp_nape/util/Lists.hx",5067);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(5068)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(5068)
		this->erase(pre);
	}
	HX_STACK_LINE(5069)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ConstraintListener_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_erase","zpp_nape/util/Lists.hx",5021);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(5030)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(5031)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5032)
	if (((pre == null()))){
		HX_STACK_LINE(5033)
		old = this->head;
		HX_STACK_LINE(5034)
		ret = old->next;
		HX_STACK_LINE(5035)
		this->head = ret;
		HX_STACK_LINE(5036)
		if (((this->head == null()))){
			HX_STACK_LINE(5036)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(5039)
		old = pre->next;
		HX_STACK_LINE(5040)
		ret = old->next;
		HX_STACK_LINE(5041)
		pre->next = ret;
		HX_STACK_LINE(5042)
		if (((ret == null()))){
			HX_STACK_LINE(5042)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(5045)
	{
		HX_STACK_LINE(5046)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5055)
		o->elt = null();
		HX_STACK_LINE(5056)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
		HX_STACK_LINE(5057)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5062)
	this->modified = true;
	HX_STACK_LINE(5063)
	(this->length)--;
	HX_STACK_LINE(5064)
	this->pushmod = true;
	HX_STACK_LINE(5065)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::erase","zpp_nape/util/Lists.hx",5016);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj *__this,::zpp_nape::util::ZNPNode_ZPP_ConstraintListener &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5017);
			{
				HX_STACK_LINE(5017)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5017)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5017)
				if (((pre == null()))){
					HX_STACK_LINE(5017)
					old = __this->head;
					HX_STACK_LINE(5017)
					ret = old->next;
					HX_STACK_LINE(5017)
					__this->head = ret;
					HX_STACK_LINE(5017)
					if (((__this->head == null()))){
						HX_STACK_LINE(5017)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5017)
					old = pre->next;
					HX_STACK_LINE(5017)
					ret = old->next;
					HX_STACK_LINE(5017)
					pre->next = ret;
					HX_STACK_LINE(5017)
					if (((ret == null()))){
						HX_STACK_LINE(5017)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(5017)
				{
					HX_STACK_LINE(5017)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5017)
					o->elt = null();
					HX_STACK_LINE(5017)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
					HX_STACK_LINE(5017)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5017)
				__this->modified = true;
				HX_STACK_LINE(5017)
				(__this->length)--;
				HX_STACK_LINE(5017)
				__this->pushmod = true;
				HX_STACK_LINE(5017)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5016)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,erase,return )

bool ZNPList_ZPP_ConstraintListener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_try_remove","zpp_nape/util/Lists.hx",4993);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5002)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5003)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5004)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5005)
	while(((cur != null()))){
		HX_STACK_LINE(5006)
		if (((cur->elt == obj))){
			HX_STACK_LINE(5007)
			{
				HX_STACK_LINE(5007)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5007)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(5007)
				if (((pre == null()))){
					HX_STACK_LINE(5007)
					old = this->head;
					HX_STACK_LINE(5007)
					ret1 = old->next;
					HX_STACK_LINE(5007)
					this->head = ret1;
					HX_STACK_LINE(5007)
					if (((this->head == null()))){
						HX_STACK_LINE(5007)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5007)
					old = pre->next;
					HX_STACK_LINE(5007)
					ret1 = old->next;
					HX_STACK_LINE(5007)
					pre->next = ret1;
					HX_STACK_LINE(5007)
					if (((ret1 == null()))){
						HX_STACK_LINE(5007)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(5007)
				{
					HX_STACK_LINE(5007)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5007)
					o->elt = null();
					HX_STACK_LINE(5007)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
					HX_STACK_LINE(5007)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5007)
				this->modified = true;
				HX_STACK_LINE(5007)
				(this->length)--;
				HX_STACK_LINE(5007)
				this->pushmod = true;
				HX_STACK_LINE(5007)
				ret1;
			}
			HX_STACK_LINE(5008)
			ret = true;
			HX_STACK_LINE(5009)
			break;
		}
		HX_STACK_LINE(5011)
		pre = cur;
		HX_STACK_LINE(5012)
		cur = cur->next;
	}
	HX_STACK_LINE(5014)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_try_remove,return )

Void ZNPList_ZPP_ConstraintListener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_remove","zpp_nape/util/Lists.hx",4980);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(4989)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4989)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4989)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4989)
		while(((cur != null()))){
			HX_STACK_LINE(4989)
			if (((cur->elt == obj))){
				HX_STACK_LINE(4989)
				{
					HX_STACK_LINE(4989)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4989)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4989)
					if (((pre == null()))){
						HX_STACK_LINE(4989)
						old = this->head;
						HX_STACK_LINE(4989)
						ret1 = old->next;
						HX_STACK_LINE(4989)
						this->head = ret1;
						HX_STACK_LINE(4989)
						if (((this->head == null()))){
							HX_STACK_LINE(4989)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4989)
						old = pre->next;
						HX_STACK_LINE(4989)
						ret1 = old->next;
						HX_STACK_LINE(4989)
						pre->next = ret1;
						HX_STACK_LINE(4989)
						if (((ret1 == null()))){
							HX_STACK_LINE(4989)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4989)
					{
						HX_STACK_LINE(4989)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4989)
						o->elt = null();
						HX_STACK_LINE(4989)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
						HX_STACK_LINE(4989)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4989)
					this->modified = true;
					HX_STACK_LINE(4989)
					(this->length)--;
					HX_STACK_LINE(4989)
					this->pushmod = true;
					HX_STACK_LINE(4989)
					ret1;
				}
				HX_STACK_LINE(4989)
				ret = true;
				HX_STACK_LINE(4989)
				break;
			}
			HX_STACK_LINE(4989)
			pre = cur;
			HX_STACK_LINE(4989)
			cur = cur->next;
		}
		HX_STACK_LINE(4989)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_remove,(void))

bool ZNPList_ZPP_ConstraintListener_obj::try_remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::try_remove","zpp_nape/util/Lists.hx",4955);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4964)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4965)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4966)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4967)
	while(((cur != null()))){
		HX_STACK_LINE(4968)
		if (((cur->elt == obj))){
			HX_STACK_LINE(4969)
			this->erase(pre);
			HX_STACK_LINE(4970)
			ret = true;
			HX_STACK_LINE(4971)
			break;
		}
		HX_STACK_LINE(4973)
		pre = cur;
		HX_STACK_LINE(4974)
		cur = cur->next;
	}
	HX_STACK_LINE(4976)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,try_remove,return )

Void ZNPList_ZPP_ConstraintListener_obj::remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::remove","zpp_nape/util/Lists.hx",4944);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(4953)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4953)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4953)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4953)
		while(((cur != null()))){
			HX_STACK_LINE(4953)
			if (((cur->elt == obj))){
				HX_STACK_LINE(4953)
				{
					HX_STACK_LINE(4953)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(4953)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(4953)
					if (((pre == null()))){
						HX_STACK_LINE(4953)
						old = this->head;
						HX_STACK_LINE(4953)
						ret1 = old->next;
						HX_STACK_LINE(4953)
						this->head = ret1;
						HX_STACK_LINE(4953)
						if (((this->head == null()))){
							HX_STACK_LINE(4953)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(4953)
						old = pre->next;
						HX_STACK_LINE(4953)
						ret1 = old->next;
						HX_STACK_LINE(4953)
						pre->next = ret1;
						HX_STACK_LINE(4953)
						if (((ret1 == null()))){
							HX_STACK_LINE(4953)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(4953)
					{
						HX_STACK_LINE(4953)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(4953)
						o->elt = null();
						HX_STACK_LINE(4953)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
						HX_STACK_LINE(4953)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
					}
					HX_STACK_LINE(4953)
					this->modified = true;
					HX_STACK_LINE(4953)
					(this->length)--;
					HX_STACK_LINE(4953)
					this->pushmod = true;
					HX_STACK_LINE(4953)
					ret1;
				}
				HX_STACK_LINE(4953)
				ret = true;
				HX_STACK_LINE(4953)
				break;
			}
			HX_STACK_LINE(4953)
			pre = cur;
			HX_STACK_LINE(4953)
			cur = cur->next;
		}
		HX_STACK_LINE(4953)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,remove,(void))

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_pop_unsafe","zpp_nape/util/Lists.hx",4931);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4940)
	::zpp_nape::callbacks::ZPP_ConstraintListener ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4941)
	this->pop();
	HX_STACK_LINE(4942)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,inlined_pop_unsafe,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::pop_unsafe","zpp_nape/util/Lists.hx",4926);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_ConstraintListener Block( ::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4927);
			{
				HX_STACK_LINE(4927)
				::zpp_nape::callbacks::ZPP_ConstraintListener ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4927)
				__this->pop();
				HX_STACK_LINE(4927)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4926)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,pop_unsafe,return )

Void ZNPList_ZPP_ConstraintListener_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_pop","zpp_nape/util/Lists.hx",4893);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4902)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4903)
		this->head = ret->next;
		HX_STACK_LINE(4905)
		{
			HX_STACK_LINE(4906)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4915)
			o->elt = null();
			HX_STACK_LINE(4916)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
			HX_STACK_LINE(4917)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4922)
		if (((this->head == null()))){
			HX_STACK_LINE(4922)
			this->pushmod = true;
		}
		HX_STACK_LINE(4923)
		this->modified = true;
		HX_STACK_LINE(4924)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,inlined_pop,(void))

Void ZNPList_ZPP_ConstraintListener_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::pop","zpp_nape/util/Lists.hx",4888);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4889)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4889)
		this->head = ret->next;
		HX_STACK_LINE(4889)
		{
			HX_STACK_LINE(4889)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4889)
			o->elt = null();
			HX_STACK_LINE(4889)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
			HX_STACK_LINE(4889)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4889)
		if (((this->head == null()))){
			HX_STACK_LINE(4889)
			this->pushmod = true;
		}
		HX_STACK_LINE(4889)
		this->modified = true;
		HX_STACK_LINE(4889)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur,::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_insert","zpp_nape/util/Lists.hx",4845);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::callbacks::ZPP_ConstraintListener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4854);
			{
				HX_STACK_LINE(4855)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4856)
				{
					HX_STACK_LINE(4857)
					if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
						HX_STACK_LINE(4857)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();
					}
					else{
						HX_STACK_LINE(4864)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
						HX_STACK_LINE(4865)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
						HX_STACK_LINE(4866)
						ret->next = null();
					}
					HX_STACK_LINE(4871)
					Dynamic();
				}
				HX_STACK_LINE(4873)
				ret->elt = o;
				HX_STACK_LINE(4874)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4854)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4876)
	if (((cur == null()))){
		HX_STACK_LINE(4877)
		temp->next = this->head;
		HX_STACK_LINE(4878)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4881)
		temp->next = cur->next;
		HX_STACK_LINE(4882)
		cur->next = temp;
	}
	HX_STACK_LINE(4884)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(4885)
	(this->length)++;
	HX_STACK_LINE(4886)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ConstraintListener_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur,::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::insert","zpp_nape/util/Lists.hx",4840);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj *__this,::zpp_nape::callbacks::ZPP_ConstraintListener &o,::zpp_nape::util::ZNPNode_ZPP_ConstraintListener &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4841);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::callbacks::ZPP_ConstraintListener &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4841);
						{
							HX_STACK_LINE(4841)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4841)
							{
								HX_STACK_LINE(4841)
								if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(4841)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();
								}
								else{
									HX_STACK_LINE(4841)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
									HX_STACK_LINE(4841)
									::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(4841)
									ret->next = null();
								}
								HX_STACK_LINE(4841)
								Dynamic();
							}
							HX_STACK_LINE(4841)
							ret->elt = o;
							HX_STACK_LINE(4841)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4841)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(4841)
				if (((cur == null()))){
					HX_STACK_LINE(4841)
					temp->next = __this->head;
					HX_STACK_LINE(4841)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(4841)
					temp->next = cur->next;
					HX_STACK_LINE(4841)
					cur->next = temp;
				}
				HX_STACK_LINE(4841)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(4841)
				(__this->length)++;
				HX_STACK_LINE(4841)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(4840)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ConstraintListener_obj,insert,return )

Void ZNPList_ZPP_ConstraintListener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_ConstraintListener x){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::addAll","zpp_nape/util/Lists.hx",4822);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(4832)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(4833)
		while(((cx_ite != null()))){
			HX_STACK_LINE(4834)
			::zpp_nape::callbacks::ZPP_ConstraintListener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(4835)
			this->add(i);
			HX_STACK_LINE(4836)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,addAll,(void))

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_add","zpp_nape/util/Lists.hx",4785);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::callbacks::ZPP_ConstraintListener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4794);
			{
				HX_STACK_LINE(4795)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4796)
				{
					HX_STACK_LINE(4797)
					if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
						HX_STACK_LINE(4797)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();
					}
					else{
						HX_STACK_LINE(4804)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
						HX_STACK_LINE(4805)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
						HX_STACK_LINE(4806)
						ret->next = null();
					}
					HX_STACK_LINE(4811)
					Dynamic();
				}
				HX_STACK_LINE(4813)
				ret->elt = o;
				HX_STACK_LINE(4814)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4794)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4816)
	temp->next = this->head;
	HX_STACK_LINE(4817)
	this->head = temp;
	HX_STACK_LINE(4818)
	this->modified = true;
	HX_STACK_LINE(4819)
	(this->length)++;
	HX_STACK_LINE(4820)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_add,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::add( ::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::add","zpp_nape/util/Lists.hx",4780);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_ConstraintListener Block( ::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj *__this,::zpp_nape::callbacks::ZPP_ConstraintListener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4781);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::callbacks::ZPP_ConstraintListener &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4781);
						{
							HX_STACK_LINE(4781)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4781)
							{
								HX_STACK_LINE(4781)
								if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(4781)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();
								}
								else{
									HX_STACK_LINE(4781)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
									HX_STACK_LINE(4781)
									::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(4781)
									ret->next = null();
								}
								HX_STACK_LINE(4781)
								Dynamic();
							}
							HX_STACK_LINE(4781)
							ret->elt = o;
							HX_STACK_LINE(4781)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4781)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(4781)
				temp->next = __this->head;
				HX_STACK_LINE(4781)
				__this->head = temp;
				HX_STACK_LINE(4781)
				__this->modified = true;
				HX_STACK_LINE(4781)
				(__this->length)++;
				HX_STACK_LINE(4781)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(4780)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,add,return )

Void ZNPList_ZPP_ConstraintListener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener i){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::setbegin","zpp_nape/util/Lists.hx",4775);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(4776)
		this->head = i;
		HX_STACK_LINE(4777)
		this->modified = true;
		HX_STACK_LINE(4778)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::begin","zpp_nape/util/Lists.hx",4767);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4767)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,begin,return )


ZNPList_ZPP_ConstraintListener_obj::ZNPList_ZPP_ConstraintListener_obj()
{
}

void ZNPList_ZPP_ConstraintListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_ConstraintListener);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_ConstraintListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_ConstraintListener_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_ConstraintListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener >(); return inValue; }
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

void ZNPList_ZPP_ConstraintListener_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_ConstraintListener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_ConstraintListener_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_ConstraintListener_obj::__mClass;

void ZNPList_ZPP_ConstraintListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_ConstraintListener"), hx::TCanCast< ZNPList_ZPP_ConstraintListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_ConstraintListener_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
