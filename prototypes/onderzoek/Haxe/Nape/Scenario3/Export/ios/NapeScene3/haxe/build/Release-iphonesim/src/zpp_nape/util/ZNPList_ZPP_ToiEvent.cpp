#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ToiEvent
#include <zpp_nape/util/ZNPList_ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ToiEvent
#include <zpp_nape/util/ZNPNode_ZPP_ToiEvent.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_ToiEvent_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::new","zpp_nape/util/Lists.hx",12685);
{
	HX_STACK_LINE(12695)
	this->length = (int)0;
	HX_STACK_LINE(12694)
	this->pushmod = false;
	HX_STACK_LINE(12693)
	this->modified = false;
	HX_STACK_LINE(12686)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_ToiEvent_obj::~ZNPList_ZPP_ToiEvent_obj() { }

Dynamic ZNPList_ZPP_ToiEvent_obj::__CreateEmpty() { return  new ZNPList_ZPP_ToiEvent_obj; }
hx::ObjectPtr< ZNPList_ZPP_ToiEvent_obj > ZNPList_ZPP_ToiEvent_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_ToiEvent_obj > result = new ZNPList_ZPP_ToiEvent_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_ToiEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_ToiEvent_obj > result = new ZNPList_ZPP_ToiEvent_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::at","zpp_nape/util/Lists.hx",13088);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(13089)
	{
	}
	HX_STACK_LINE(13097)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(13098)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_ToiEvent(it->elt) : ::zpp_nape::geom::ZPP_ToiEvent(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::iterator_at","zpp_nape/util/Lists.hx",13075);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(13076)
	{
	}
	HX_STACK_LINE(13084)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13085)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(13085)
		ret = ret->next;
	}
	HX_STACK_LINE(13086)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,iterator_at,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::back","zpp_nape/util/Lists.hx",13066);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13067)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13068)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13069)
	while(((cur != null()))){
		HX_STACK_LINE(13070)
		ret = cur;
		HX_STACK_LINE(13071)
		cur = cur->next;
	}
	HX_STACK_LINE(13073)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,back,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::front","zpp_nape/util/Lists.hx",13063);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13063)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,front,return )

bool ZNPList_ZPP_ToiEvent_obj::inlined_has( ::zpp_nape::geom::ZPP_ToiEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_has","zpp_nape/util/Lists.hx",13033);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(13034)
	{
	}
	HX_STACK_LINE(13042)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13043)
	{
		HX_STACK_LINE(13044)
		ret = false;
		HX_STACK_LINE(13045)
		{
			HX_STACK_LINE(13046)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(13047)
			while(((cx_ite != null()))){
				HX_STACK_LINE(13048)
				::zpp_nape::geom::ZPP_ToiEvent npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(13049)
				if (((npite == obj))){
					HX_STACK_LINE(13051)
					ret = true;
					HX_STACK_LINE(13052)
					break;
				}
				HX_STACK_LINE(13055)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(13059)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_has,return )

bool ZNPList_ZPP_ToiEvent_obj::has( ::zpp_nape::geom::ZPP_ToiEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::has","zpp_nape/util/Lists.hx",13028);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj *__this,::zpp_nape::geom::ZPP_ToiEvent &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13029);
			{
				HX_STACK_LINE(13029)
				{
				}
				HX_STACK_LINE(13029)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13029)
				{
					HX_STACK_LINE(13029)
					ret = false;
					HX_STACK_LINE(13029)
					{
						HX_STACK_LINE(13029)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(13029)
						while(((cx_ite != null()))){
							HX_STACK_LINE(13029)
							::zpp_nape::geom::ZPP_ToiEvent npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(13029)
							if (((npite == obj))){
								HX_STACK_LINE(13029)
								ret = true;
								HX_STACK_LINE(13029)
								break;
							}
							HX_STACK_LINE(13029)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(13029)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13028)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,has,return )

int ZNPList_ZPP_ToiEvent_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::size","zpp_nape/util/Lists.hx",13025);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13025)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,size,return )

bool ZNPList_ZPP_ToiEvent_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::empty","zpp_nape/util/Lists.hx",13020);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13020)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,empty,return )

Void ZNPList_ZPP_ToiEvent_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::reverse","zpp_nape/util/Lists.hx",13005);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13006)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13007)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13008)
		while(((cur != null()))){
			HX_STACK_LINE(13009)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(13010)
			cur->next = pre;
			HX_STACK_LINE(13011)
			this->head = cur;
			HX_STACK_LINE(13012)
			pre = cur;
			HX_STACK_LINE(13013)
			cur = nx;
		}
		HX_STACK_LINE(13015)
		this->modified = true;
		HX_STACK_LINE(13016)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,reverse,(void))

Void ZNPList_ZPP_ToiEvent_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_clear","zpp_nape/util/Lists.hx",12999);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13001)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(13001)
			{
			}
			HX_STACK_LINE(13001)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13001)
			this->head = ret->next;
			HX_STACK_LINE(13001)
			{
			}
			HX_STACK_LINE(13001)
			{
				HX_STACK_LINE(13001)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(13001)
				{
				}
				HX_STACK_LINE(13001)
				o->elt = null();
				HX_STACK_LINE(13001)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
				HX_STACK_LINE(13001)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
			}
			HX_STACK_LINE(13001)
			if (((this->head == null()))){
				HX_STACK_LINE(13001)
				this->pushmod = true;
			}
			HX_STACK_LINE(13001)
			this->modified = true;
			HX_STACK_LINE(13001)
			(this->length)--;
		}
		HX_STACK_LINE(13002)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,inlined_clear,(void))

Void ZNPList_ZPP_ToiEvent_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::clear","zpp_nape/util/Lists.hx",12994);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12995)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(12995)
			{
			}
			HX_STACK_LINE(12995)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12995)
			this->head = ret->next;
			HX_STACK_LINE(12995)
			{
			}
			HX_STACK_LINE(12995)
			{
				HX_STACK_LINE(12995)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12995)
				{
				}
				HX_STACK_LINE(12995)
				o->elt = null();
				HX_STACK_LINE(12995)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
				HX_STACK_LINE(12995)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12995)
			if (((this->head == null()))){
				HX_STACK_LINE(12995)
				this->pushmod = true;
			}
			HX_STACK_LINE(12995)
			this->modified = true;
			HX_STACK_LINE(12995)
			(this->length)--;
		}
		HX_STACK_LINE(12995)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::splice","zpp_nape/util/Lists.hx",12990);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(12991)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(12991)
		this->erase(pre);
	}
	HX_STACK_LINE(12992)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ToiEvent_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_erase","zpp_nape/util/Lists.hx",12944);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(12945)
	{
	}
	HX_STACK_LINE(12953)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(12954)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12955)
	if (((pre == null()))){
		HX_STACK_LINE(12956)
		old = this->head;
		HX_STACK_LINE(12957)
		ret = old->next;
		HX_STACK_LINE(12958)
		this->head = ret;
		HX_STACK_LINE(12959)
		if (((this->head == null()))){
			HX_STACK_LINE(12959)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(12962)
		old = pre->next;
		HX_STACK_LINE(12963)
		ret = old->next;
		HX_STACK_LINE(12964)
		pre->next = ret;
		HX_STACK_LINE(12965)
		if (((ret == null()))){
			HX_STACK_LINE(12965)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(12967)
	{
	}
	HX_STACK_LINE(12968)
	{
		HX_STACK_LINE(12969)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(12970)
		{
		}
		HX_STACK_LINE(12978)
		o->elt = null();
		HX_STACK_LINE(12979)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
		HX_STACK_LINE(12980)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
	}
	HX_STACK_LINE(12985)
	this->modified = true;
	HX_STACK_LINE(12986)
	(this->length)--;
	HX_STACK_LINE(12987)
	this->pushmod = true;
	HX_STACK_LINE(12988)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::erase","zpp_nape/util/Lists.hx",12939);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent Block( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent &pre,::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12940);
			{
				HX_STACK_LINE(12940)
				{
				}
				HX_STACK_LINE(12940)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(12940)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12940)
				if (((pre == null()))){
					HX_STACK_LINE(12940)
					old = __this->head;
					HX_STACK_LINE(12940)
					ret = old->next;
					HX_STACK_LINE(12940)
					__this->head = ret;
					HX_STACK_LINE(12940)
					if (((__this->head == null()))){
						HX_STACK_LINE(12940)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(12940)
					old = pre->next;
					HX_STACK_LINE(12940)
					ret = old->next;
					HX_STACK_LINE(12940)
					pre->next = ret;
					HX_STACK_LINE(12940)
					if (((ret == null()))){
						HX_STACK_LINE(12940)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(12940)
				{
				}
				HX_STACK_LINE(12940)
				{
					HX_STACK_LINE(12940)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(12940)
					{
					}
					HX_STACK_LINE(12940)
					o->elt = null();
					HX_STACK_LINE(12940)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
					HX_STACK_LINE(12940)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
				}
				HX_STACK_LINE(12940)
				__this->modified = true;
				HX_STACK_LINE(12940)
				(__this->length)--;
				HX_STACK_LINE(12940)
				__this->pushmod = true;
				HX_STACK_LINE(12940)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12939)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,erase,return )

bool ZNPList_ZPP_ToiEvent_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_ToiEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_try_remove","zpp_nape/util/Lists.hx",12916);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(12917)
	{
	}
	HX_STACK_LINE(12925)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12926)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12927)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12928)
	while(((cur != null()))){
		HX_STACK_LINE(12929)
		if (((cur->elt == obj))){
			HX_STACK_LINE(12930)
			{
				HX_STACK_LINE(12930)
				{
				}
				HX_STACK_LINE(12930)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(12930)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(12930)
				if (((pre == null()))){
					HX_STACK_LINE(12930)
					old = this->head;
					HX_STACK_LINE(12930)
					ret1 = old->next;
					HX_STACK_LINE(12930)
					this->head = ret1;
					HX_STACK_LINE(12930)
					if (((this->head == null()))){
						HX_STACK_LINE(12930)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(12930)
					old = pre->next;
					HX_STACK_LINE(12930)
					ret1 = old->next;
					HX_STACK_LINE(12930)
					pre->next = ret1;
					HX_STACK_LINE(12930)
					if (((ret1 == null()))){
						HX_STACK_LINE(12930)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(12930)
				{
				}
				HX_STACK_LINE(12930)
				{
					HX_STACK_LINE(12930)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(12930)
					{
					}
					HX_STACK_LINE(12930)
					o->elt = null();
					HX_STACK_LINE(12930)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
					HX_STACK_LINE(12930)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
				}
				HX_STACK_LINE(12930)
				this->modified = true;
				HX_STACK_LINE(12930)
				(this->length)--;
				HX_STACK_LINE(12930)
				this->pushmod = true;
				HX_STACK_LINE(12930)
				ret1;
			}
			HX_STACK_LINE(12931)
			ret = true;
			HX_STACK_LINE(12932)
			break;
		}
		HX_STACK_LINE(12934)
		pre = cur;
		HX_STACK_LINE(12935)
		cur = cur->next;
	}
	HX_STACK_LINE(12937)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_try_remove,return )

Void ZNPList_ZPP_ToiEvent_obj::inlined_remove( ::zpp_nape::geom::ZPP_ToiEvent obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_remove","zpp_nape/util/Lists.hx",12903);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(12904)
		{
		}
		HX_STACK_LINE(12912)
		{
			HX_STACK_LINE(12912)
			{
			}
			HX_STACK_LINE(12912)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(12912)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(12912)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12912)
			while(((cur != null()))){
				HX_STACK_LINE(12912)
				if (((cur->elt == obj))){
					HX_STACK_LINE(12912)
					{
						HX_STACK_LINE(12912)
						{
						}
						HX_STACK_LINE(12912)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(12912)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(12912)
						if (((pre == null()))){
							HX_STACK_LINE(12912)
							old = this->head;
							HX_STACK_LINE(12912)
							ret1 = old->next;
							HX_STACK_LINE(12912)
							this->head = ret1;
							HX_STACK_LINE(12912)
							if (((this->head == null()))){
								HX_STACK_LINE(12912)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(12912)
							old = pre->next;
							HX_STACK_LINE(12912)
							ret1 = old->next;
							HX_STACK_LINE(12912)
							pre->next = ret1;
							HX_STACK_LINE(12912)
							if (((ret1 == null()))){
								HX_STACK_LINE(12912)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(12912)
						{
						}
						HX_STACK_LINE(12912)
						{
							HX_STACK_LINE(12912)
							::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(12912)
							{
							}
							HX_STACK_LINE(12912)
							o->elt = null();
							HX_STACK_LINE(12912)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
							HX_STACK_LINE(12912)
							::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
						}
						HX_STACK_LINE(12912)
						this->modified = true;
						HX_STACK_LINE(12912)
						(this->length)--;
						HX_STACK_LINE(12912)
						this->pushmod = true;
						HX_STACK_LINE(12912)
						ret1;
					}
					HX_STACK_LINE(12912)
					ret = true;
					HX_STACK_LINE(12912)
					break;
				}
				HX_STACK_LINE(12912)
				pre = cur;
				HX_STACK_LINE(12912)
				cur = cur->next;
			}
			HX_STACK_LINE(12912)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_remove,(void))

bool ZNPList_ZPP_ToiEvent_obj::try_remove( ::zpp_nape::geom::ZPP_ToiEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::try_remove","zpp_nape/util/Lists.hx",12878);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(12879)
	{
	}
	HX_STACK_LINE(12887)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12888)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12889)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12890)
	while(((cur != null()))){
		HX_STACK_LINE(12891)
		if (((cur->elt == obj))){
			HX_STACK_LINE(12892)
			this->erase(pre);
			HX_STACK_LINE(12893)
			ret = true;
			HX_STACK_LINE(12894)
			break;
		}
		HX_STACK_LINE(12896)
		pre = cur;
		HX_STACK_LINE(12897)
		cur = cur->next;
	}
	HX_STACK_LINE(12899)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,try_remove,return )

Void ZNPList_ZPP_ToiEvent_obj::remove( ::zpp_nape::geom::ZPP_ToiEvent obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::remove","zpp_nape/util/Lists.hx",12867);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(12868)
		{
		}
		HX_STACK_LINE(12876)
		{
			HX_STACK_LINE(12876)
			{
			}
			HX_STACK_LINE(12876)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(12876)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(12876)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12876)
			while(((cur != null()))){
				HX_STACK_LINE(12876)
				if (((cur->elt == obj))){
					HX_STACK_LINE(12876)
					{
						HX_STACK_LINE(12876)
						{
						}
						HX_STACK_LINE(12876)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(12876)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(12876)
						if (((pre == null()))){
							HX_STACK_LINE(12876)
							old = this->head;
							HX_STACK_LINE(12876)
							ret1 = old->next;
							HX_STACK_LINE(12876)
							this->head = ret1;
							HX_STACK_LINE(12876)
							if (((this->head == null()))){
								HX_STACK_LINE(12876)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(12876)
							old = pre->next;
							HX_STACK_LINE(12876)
							ret1 = old->next;
							HX_STACK_LINE(12876)
							pre->next = ret1;
							HX_STACK_LINE(12876)
							if (((ret1 == null()))){
								HX_STACK_LINE(12876)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(12876)
						{
						}
						HX_STACK_LINE(12876)
						{
							HX_STACK_LINE(12876)
							::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(12876)
							{
							}
							HX_STACK_LINE(12876)
							o->elt = null();
							HX_STACK_LINE(12876)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
							HX_STACK_LINE(12876)
							::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
						}
						HX_STACK_LINE(12876)
						this->modified = true;
						HX_STACK_LINE(12876)
						(this->length)--;
						HX_STACK_LINE(12876)
						this->pushmod = true;
						HX_STACK_LINE(12876)
						ret1;
					}
					HX_STACK_LINE(12876)
					ret = true;
					HX_STACK_LINE(12876)
					break;
				}
				HX_STACK_LINE(12876)
				pre = cur;
				HX_STACK_LINE(12876)
				cur = cur->next;
			}
			HX_STACK_LINE(12876)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,remove,(void))

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_pop_unsafe","zpp_nape/util/Lists.hx",12854);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12855)
	{
	}
	HX_STACK_LINE(12863)
	::zpp_nape::geom::ZPP_ToiEvent ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12864)
	this->pop();
	HX_STACK_LINE(12865)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::pop_unsafe","zpp_nape/util/Lists.hx",12849);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_ToiEvent Block( ::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12850);
			{
				HX_STACK_LINE(12850)
				{
				}
				HX_STACK_LINE(12850)
				::zpp_nape::geom::ZPP_ToiEvent ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12850)
				__this->pop();
				HX_STACK_LINE(12850)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12849)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,pop_unsafe,return )

Void ZNPList_ZPP_ToiEvent_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_pop","zpp_nape/util/Lists.hx",12816);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12817)
		{
		}
		HX_STACK_LINE(12825)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12826)
		this->head = ret->next;
		HX_STACK_LINE(12827)
		{
		}
		HX_STACK_LINE(12828)
		{
			HX_STACK_LINE(12829)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12830)
			{
			}
			HX_STACK_LINE(12838)
			o->elt = null();
			HX_STACK_LINE(12839)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
			HX_STACK_LINE(12840)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12845)
		if (((this->head == null()))){
			HX_STACK_LINE(12845)
			this->pushmod = true;
		}
		HX_STACK_LINE(12846)
		this->modified = true;
		HX_STACK_LINE(12847)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,inlined_pop,(void))

Void ZNPList_ZPP_ToiEvent_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::pop","zpp_nape/util/Lists.hx",12811);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12812)
		{
		}
		HX_STACK_LINE(12812)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12812)
		this->head = ret->next;
		HX_STACK_LINE(12812)
		{
		}
		HX_STACK_LINE(12812)
		{
			HX_STACK_LINE(12812)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12812)
			{
			}
			HX_STACK_LINE(12812)
			o->elt = null();
			HX_STACK_LINE(12812)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
			HX_STACK_LINE(12812)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12812)
		if (((this->head == null()))){
			HX_STACK_LINE(12812)
			this->pushmod = true;
		}
		HX_STACK_LINE(12812)
		this->modified = true;
		HX_STACK_LINE(12812)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur,::zpp_nape::geom::ZPP_ToiEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_insert","zpp_nape/util/Lists.hx",12768);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(12769)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent Block( ::zpp_nape::geom::ZPP_ToiEvent &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12777);
			{
				HX_STACK_LINE(12778)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12779)
				{
					HX_STACK_LINE(12780)
					if (((::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool == null()))){
						HX_STACK_LINE(12780)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__new();
					}
					else{
						HX_STACK_LINE(12787)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
						HX_STACK_LINE(12788)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(12789)
						ret->next = null();
					}
					HX_STACK_LINE(12794)
					Dynamic();
				}
				HX_STACK_LINE(12796)
				ret->elt = o;
				HX_STACK_LINE(12797)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12777)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12799)
	if (((cur == null()))){
		HX_STACK_LINE(12800)
		temp->next = this->head;
		HX_STACK_LINE(12801)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(12804)
		temp->next = cur->next;
		HX_STACK_LINE(12805)
		cur->next = temp;
	}
	HX_STACK_LINE(12807)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(12808)
	(this->length)++;
	HX_STACK_LINE(12809)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ToiEvent_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur,::zpp_nape::geom::ZPP_ToiEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::insert","zpp_nape/util/Lists.hx",12763);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent Block( ::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj *__this,::zpp_nape::geom::ZPP_ToiEvent &o,::zpp_nape::util::ZNPNode_ZPP_ToiEvent &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12764);
			{
				HX_STACK_LINE(12764)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent Block( ::zpp_nape::geom::ZPP_ToiEvent &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12764);
						{
							HX_STACK_LINE(12764)
							::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(12764)
							{
								HX_STACK_LINE(12764)
								if (((::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool == null()))){
									HX_STACK_LINE(12764)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__new();
								}
								else{
									HX_STACK_LINE(12764)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
									HX_STACK_LINE(12764)
									::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = ret->next;
									HX_STACK_LINE(12764)
									ret->next = null();
								}
								HX_STACK_LINE(12764)
								Dynamic();
							}
							HX_STACK_LINE(12764)
							ret->elt = o;
							HX_STACK_LINE(12764)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(12764)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(12764)
				if (((cur == null()))){
					HX_STACK_LINE(12764)
					temp->next = __this->head;
					HX_STACK_LINE(12764)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(12764)
					temp->next = cur->next;
					HX_STACK_LINE(12764)
					cur->next = temp;
				}
				HX_STACK_LINE(12764)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(12764)
				(__this->length)++;
				HX_STACK_LINE(12764)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(12763)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ToiEvent_obj,insert,return )

Void ZNPList_ZPP_ToiEvent_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_ToiEvent x){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::addAll","zpp_nape/util/Lists.hx",12745);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(12746)
		{
		}
		HX_STACK_LINE(12754)
		{
			HX_STACK_LINE(12755)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12756)
			while(((cx_ite != null()))){
				HX_STACK_LINE(12757)
				::zpp_nape::geom::ZPP_ToiEvent i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(12758)
				this->add(i);
				HX_STACK_LINE(12759)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,addAll,(void))

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::inlined_add( ::zpp_nape::geom::ZPP_ToiEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_add","zpp_nape/util/Lists.hx",12708);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(12709)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent Block( ::zpp_nape::geom::ZPP_ToiEvent &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12717);
			{
				HX_STACK_LINE(12718)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12719)
				{
					HX_STACK_LINE(12720)
					if (((::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool == null()))){
						HX_STACK_LINE(12720)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__new();
					}
					else{
						HX_STACK_LINE(12727)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
						HX_STACK_LINE(12728)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(12729)
						ret->next = null();
					}
					HX_STACK_LINE(12734)
					Dynamic();
				}
				HX_STACK_LINE(12736)
				ret->elt = o;
				HX_STACK_LINE(12737)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12717)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12739)
	temp->next = this->head;
	HX_STACK_LINE(12740)
	this->head = temp;
	HX_STACK_LINE(12741)
	this->modified = true;
	HX_STACK_LINE(12742)
	(this->length)++;
	HX_STACK_LINE(12743)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_add,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::add( ::zpp_nape::geom::ZPP_ToiEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::add","zpp_nape/util/Lists.hx",12703);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_ToiEvent Block( ::zpp_nape::geom::ZPP_ToiEvent &o,::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12704);
			{
				HX_STACK_LINE(12704)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent Block( ::zpp_nape::geom::ZPP_ToiEvent &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12704);
						{
							HX_STACK_LINE(12704)
							::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(12704)
							{
								HX_STACK_LINE(12704)
								if (((::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool == null()))){
									HX_STACK_LINE(12704)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__new();
								}
								else{
									HX_STACK_LINE(12704)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
									HX_STACK_LINE(12704)
									::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = ret->next;
									HX_STACK_LINE(12704)
									ret->next = null();
								}
								HX_STACK_LINE(12704)
								Dynamic();
							}
							HX_STACK_LINE(12704)
							ret->elt = o;
							HX_STACK_LINE(12704)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(12704)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(12704)
				temp->next = __this->head;
				HX_STACK_LINE(12704)
				__this->head = temp;
				HX_STACK_LINE(12704)
				__this->modified = true;
				HX_STACK_LINE(12704)
				(__this->length)++;
				HX_STACK_LINE(12704)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(12703)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,add,return )

Void ZNPList_ZPP_ToiEvent_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent i){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::setbegin","zpp_nape/util/Lists.hx",12698);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(12699)
		this->head = i;
		HX_STACK_LINE(12700)
		this->modified = true;
		HX_STACK_LINE(12701)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::begin","zpp_nape/util/Lists.hx",12690);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12690)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,begin,return )


ZNPList_ZPP_ToiEvent_obj::ZNPList_ZPP_ToiEvent_obj()
{
}

void ZNPList_ZPP_ToiEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_ToiEvent);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_ToiEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_ToiEvent_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_ToiEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ToiEvent >(); return inValue; }
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

void ZNPList_ZPP_ToiEvent_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_ToiEvent_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_ToiEvent_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_ToiEvent_obj::__mClass;

void ZNPList_ZPP_ToiEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_ToiEvent"), hx::TCanCast< ZNPList_ZPP_ToiEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_ToiEvent_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
