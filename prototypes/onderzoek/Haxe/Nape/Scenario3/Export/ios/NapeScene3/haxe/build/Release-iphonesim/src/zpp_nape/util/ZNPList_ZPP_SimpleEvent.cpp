#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPList_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPNode_ZPP_SimpleEvent.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SimpleEvent_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::new","zpp_nape/util/Lists.hx",8515);
{
	HX_STACK_LINE(8525)
	this->length = (int)0;
	HX_STACK_LINE(8524)
	this->pushmod = false;
	HX_STACK_LINE(8523)
	this->modified = false;
	HX_STACK_LINE(8516)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_SimpleEvent_obj::~ZNPList_ZPP_SimpleEvent_obj() { }

Dynamic ZNPList_ZPP_SimpleEvent_obj::__CreateEmpty() { return  new ZNPList_ZPP_SimpleEvent_obj; }
hx::ObjectPtr< ZNPList_ZPP_SimpleEvent_obj > ZNPList_ZPP_SimpleEvent_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SimpleEvent_obj > result = new ZNPList_ZPP_SimpleEvent_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_SimpleEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SimpleEvent_obj > result = new ZNPList_ZPP_SimpleEvent_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::at","zpp_nape/util/Lists.hx",8918);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(8919)
	{
	}
	HX_STACK_LINE(8927)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(8928)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_SimpleEvent(it->elt) : ::zpp_nape::geom::ZPP_SimpleEvent(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::iterator_at","zpp_nape/util/Lists.hx",8905);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(8906)
	{
	}
	HX_STACK_LINE(8914)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8915)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(8915)
		ret = ret->next;
	}
	HX_STACK_LINE(8916)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,iterator_at,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::back","zpp_nape/util/Lists.hx",8896);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8897)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8898)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8899)
	while(((cur != null()))){
		HX_STACK_LINE(8900)
		ret = cur;
		HX_STACK_LINE(8901)
		cur = cur->next;
	}
	HX_STACK_LINE(8903)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,back,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::front","zpp_nape/util/Lists.hx",8893);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8893)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,front,return )

bool ZNPList_ZPP_SimpleEvent_obj::inlined_has( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_has","zpp_nape/util/Lists.hx",8863);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(8864)
	{
	}
	HX_STACK_LINE(8872)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8873)
	{
		HX_STACK_LINE(8874)
		ret = false;
		HX_STACK_LINE(8875)
		{
			HX_STACK_LINE(8876)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8877)
			while(((cx_ite != null()))){
				HX_STACK_LINE(8878)
				::zpp_nape::geom::ZPP_SimpleEvent npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8879)
				if (((npite == obj))){
					HX_STACK_LINE(8881)
					ret = true;
					HX_STACK_LINE(8882)
					break;
				}
				HX_STACK_LINE(8885)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8889)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_has,return )

bool ZNPList_ZPP_SimpleEvent_obj::has( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::has","zpp_nape/util/Lists.hx",8858);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj *__this,::zpp_nape::geom::ZPP_SimpleEvent &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8859);
			{
				HX_STACK_LINE(8859)
				{
				}
				HX_STACK_LINE(8859)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8859)
				{
					HX_STACK_LINE(8859)
					ret = false;
					HX_STACK_LINE(8859)
					{
						HX_STACK_LINE(8859)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(8859)
						while(((cx_ite != null()))){
							HX_STACK_LINE(8859)
							::zpp_nape::geom::ZPP_SimpleEvent npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(8859)
							if (((npite == obj))){
								HX_STACK_LINE(8859)
								ret = true;
								HX_STACK_LINE(8859)
								break;
							}
							HX_STACK_LINE(8859)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(8859)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8858)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,has,return )

int ZNPList_ZPP_SimpleEvent_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::size","zpp_nape/util/Lists.hx",8855);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8855)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,size,return )

bool ZNPList_ZPP_SimpleEvent_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::empty","zpp_nape/util/Lists.hx",8850);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8850)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,empty,return )

Void ZNPList_ZPP_SimpleEvent_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::reverse","zpp_nape/util/Lists.hx",8835);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8836)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8837)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8838)
		while(((cur != null()))){
			HX_STACK_LINE(8839)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(8840)
			cur->next = pre;
			HX_STACK_LINE(8841)
			this->head = cur;
			HX_STACK_LINE(8842)
			pre = cur;
			HX_STACK_LINE(8843)
			cur = nx;
		}
		HX_STACK_LINE(8845)
		this->modified = true;
		HX_STACK_LINE(8846)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,reverse,(void))

Void ZNPList_ZPP_SimpleEvent_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_clear","zpp_nape/util/Lists.hx",8829);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8831)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(8831)
			{
			}
			HX_STACK_LINE(8831)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8831)
			this->head = ret->next;
			HX_STACK_LINE(8831)
			{
			}
			HX_STACK_LINE(8831)
			{
				HX_STACK_LINE(8831)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8831)
				{
				}
				HX_STACK_LINE(8831)
				o->elt = null();
				HX_STACK_LINE(8831)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
				HX_STACK_LINE(8831)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8831)
			if (((this->head == null()))){
				HX_STACK_LINE(8831)
				this->pushmod = true;
			}
			HX_STACK_LINE(8831)
			this->modified = true;
			HX_STACK_LINE(8831)
			(this->length)--;
		}
		HX_STACK_LINE(8832)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,inlined_clear,(void))

Void ZNPList_ZPP_SimpleEvent_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::clear","zpp_nape/util/Lists.hx",8824);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8825)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(8825)
			{
			}
			HX_STACK_LINE(8825)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8825)
			this->head = ret->next;
			HX_STACK_LINE(8825)
			{
			}
			HX_STACK_LINE(8825)
			{
				HX_STACK_LINE(8825)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8825)
				{
				}
				HX_STACK_LINE(8825)
				o->elt = null();
				HX_STACK_LINE(8825)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
				HX_STACK_LINE(8825)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8825)
			if (((this->head == null()))){
				HX_STACK_LINE(8825)
				this->pushmod = true;
			}
			HX_STACK_LINE(8825)
			this->modified = true;
			HX_STACK_LINE(8825)
			(this->length)--;
		}
		HX_STACK_LINE(8825)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::splice","zpp_nape/util/Lists.hx",8820);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(8821)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(8821)
		this->erase(pre);
	}
	HX_STACK_LINE(8822)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleEvent_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_erase","zpp_nape/util/Lists.hx",8774);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(8775)
	{
	}
	HX_STACK_LINE(8783)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(8784)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8785)
	if (((pre == null()))){
		HX_STACK_LINE(8786)
		old = this->head;
		HX_STACK_LINE(8787)
		ret = old->next;
		HX_STACK_LINE(8788)
		this->head = ret;
		HX_STACK_LINE(8789)
		if (((this->head == null()))){
			HX_STACK_LINE(8789)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(8792)
		old = pre->next;
		HX_STACK_LINE(8793)
		ret = old->next;
		HX_STACK_LINE(8794)
		pre->next = ret;
		HX_STACK_LINE(8795)
		if (((ret == null()))){
			HX_STACK_LINE(8795)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(8797)
	{
	}
	HX_STACK_LINE(8798)
	{
		HX_STACK_LINE(8799)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(8800)
		{
		}
		HX_STACK_LINE(8808)
		o->elt = null();
		HX_STACK_LINE(8809)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
		HX_STACK_LINE(8810)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
	}
	HX_STACK_LINE(8815)
	this->modified = true;
	HX_STACK_LINE(8816)
	(this->length)--;
	HX_STACK_LINE(8817)
	this->pushmod = true;
	HX_STACK_LINE(8818)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::erase","zpp_nape/util/Lists.hx",8769);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent Block( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent &pre,::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8770);
			{
				HX_STACK_LINE(8770)
				{
				}
				HX_STACK_LINE(8770)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(8770)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8770)
				if (((pre == null()))){
					HX_STACK_LINE(8770)
					old = __this->head;
					HX_STACK_LINE(8770)
					ret = old->next;
					HX_STACK_LINE(8770)
					__this->head = ret;
					HX_STACK_LINE(8770)
					if (((__this->head == null()))){
						HX_STACK_LINE(8770)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(8770)
					old = pre->next;
					HX_STACK_LINE(8770)
					ret = old->next;
					HX_STACK_LINE(8770)
					pre->next = ret;
					HX_STACK_LINE(8770)
					if (((ret == null()))){
						HX_STACK_LINE(8770)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(8770)
				{
				}
				HX_STACK_LINE(8770)
				{
					HX_STACK_LINE(8770)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(8770)
					{
					}
					HX_STACK_LINE(8770)
					o->elt = null();
					HX_STACK_LINE(8770)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
					HX_STACK_LINE(8770)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
				}
				HX_STACK_LINE(8770)
				__this->modified = true;
				HX_STACK_LINE(8770)
				(__this->length)--;
				HX_STACK_LINE(8770)
				__this->pushmod = true;
				HX_STACK_LINE(8770)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8769)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,erase,return )

bool ZNPList_ZPP_SimpleEvent_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_try_remove","zpp_nape/util/Lists.hx",8746);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(8747)
	{
	}
	HX_STACK_LINE(8755)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8756)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8757)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8758)
	while(((cur != null()))){
		HX_STACK_LINE(8759)
		if (((cur->elt == obj))){
			HX_STACK_LINE(8760)
			{
				HX_STACK_LINE(8760)
				{
				}
				HX_STACK_LINE(8760)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(8760)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(8760)
				if (((pre == null()))){
					HX_STACK_LINE(8760)
					old = this->head;
					HX_STACK_LINE(8760)
					ret1 = old->next;
					HX_STACK_LINE(8760)
					this->head = ret1;
					HX_STACK_LINE(8760)
					if (((this->head == null()))){
						HX_STACK_LINE(8760)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(8760)
					old = pre->next;
					HX_STACK_LINE(8760)
					ret1 = old->next;
					HX_STACK_LINE(8760)
					pre->next = ret1;
					HX_STACK_LINE(8760)
					if (((ret1 == null()))){
						HX_STACK_LINE(8760)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(8760)
				{
				}
				HX_STACK_LINE(8760)
				{
					HX_STACK_LINE(8760)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(8760)
					{
					}
					HX_STACK_LINE(8760)
					o->elt = null();
					HX_STACK_LINE(8760)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
					HX_STACK_LINE(8760)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
				}
				HX_STACK_LINE(8760)
				this->modified = true;
				HX_STACK_LINE(8760)
				(this->length)--;
				HX_STACK_LINE(8760)
				this->pushmod = true;
				HX_STACK_LINE(8760)
				ret1;
			}
			HX_STACK_LINE(8761)
			ret = true;
			HX_STACK_LINE(8762)
			break;
		}
		HX_STACK_LINE(8764)
		pre = cur;
		HX_STACK_LINE(8765)
		cur = cur->next;
	}
	HX_STACK_LINE(8767)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_try_remove,return )

Void ZNPList_ZPP_SimpleEvent_obj::inlined_remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_remove","zpp_nape/util/Lists.hx",8733);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(8734)
		{
		}
		HX_STACK_LINE(8742)
		{
			HX_STACK_LINE(8742)
			{
			}
			HX_STACK_LINE(8742)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(8742)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(8742)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8742)
			while(((cur != null()))){
				HX_STACK_LINE(8742)
				if (((cur->elt == obj))){
					HX_STACK_LINE(8742)
					{
						HX_STACK_LINE(8742)
						{
						}
						HX_STACK_LINE(8742)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(8742)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(8742)
						if (((pre == null()))){
							HX_STACK_LINE(8742)
							old = this->head;
							HX_STACK_LINE(8742)
							ret1 = old->next;
							HX_STACK_LINE(8742)
							this->head = ret1;
							HX_STACK_LINE(8742)
							if (((this->head == null()))){
								HX_STACK_LINE(8742)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(8742)
							old = pre->next;
							HX_STACK_LINE(8742)
							ret1 = old->next;
							HX_STACK_LINE(8742)
							pre->next = ret1;
							HX_STACK_LINE(8742)
							if (((ret1 == null()))){
								HX_STACK_LINE(8742)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(8742)
						{
						}
						HX_STACK_LINE(8742)
						{
							HX_STACK_LINE(8742)
							::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(8742)
							{
							}
							HX_STACK_LINE(8742)
							o->elt = null();
							HX_STACK_LINE(8742)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
							HX_STACK_LINE(8742)
							::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
						}
						HX_STACK_LINE(8742)
						this->modified = true;
						HX_STACK_LINE(8742)
						(this->length)--;
						HX_STACK_LINE(8742)
						this->pushmod = true;
						HX_STACK_LINE(8742)
						ret1;
					}
					HX_STACK_LINE(8742)
					ret = true;
					HX_STACK_LINE(8742)
					break;
				}
				HX_STACK_LINE(8742)
				pre = cur;
				HX_STACK_LINE(8742)
				cur = cur->next;
			}
			HX_STACK_LINE(8742)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_remove,(void))

bool ZNPList_ZPP_SimpleEvent_obj::try_remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::try_remove","zpp_nape/util/Lists.hx",8708);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(8709)
	{
	}
	HX_STACK_LINE(8717)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8718)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8719)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8720)
	while(((cur != null()))){
		HX_STACK_LINE(8721)
		if (((cur->elt == obj))){
			HX_STACK_LINE(8722)
			this->erase(pre);
			HX_STACK_LINE(8723)
			ret = true;
			HX_STACK_LINE(8724)
			break;
		}
		HX_STACK_LINE(8726)
		pre = cur;
		HX_STACK_LINE(8727)
		cur = cur->next;
	}
	HX_STACK_LINE(8729)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,try_remove,return )

Void ZNPList_ZPP_SimpleEvent_obj::remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::remove","zpp_nape/util/Lists.hx",8697);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(8698)
		{
		}
		HX_STACK_LINE(8706)
		{
			HX_STACK_LINE(8706)
			{
			}
			HX_STACK_LINE(8706)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(8706)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(8706)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8706)
			while(((cur != null()))){
				HX_STACK_LINE(8706)
				if (((cur->elt == obj))){
					HX_STACK_LINE(8706)
					{
						HX_STACK_LINE(8706)
						{
						}
						HX_STACK_LINE(8706)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(8706)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(8706)
						if (((pre == null()))){
							HX_STACK_LINE(8706)
							old = this->head;
							HX_STACK_LINE(8706)
							ret1 = old->next;
							HX_STACK_LINE(8706)
							this->head = ret1;
							HX_STACK_LINE(8706)
							if (((this->head == null()))){
								HX_STACK_LINE(8706)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(8706)
							old = pre->next;
							HX_STACK_LINE(8706)
							ret1 = old->next;
							HX_STACK_LINE(8706)
							pre->next = ret1;
							HX_STACK_LINE(8706)
							if (((ret1 == null()))){
								HX_STACK_LINE(8706)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(8706)
						{
						}
						HX_STACK_LINE(8706)
						{
							HX_STACK_LINE(8706)
							::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(8706)
							{
							}
							HX_STACK_LINE(8706)
							o->elt = null();
							HX_STACK_LINE(8706)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
							HX_STACK_LINE(8706)
							::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
						}
						HX_STACK_LINE(8706)
						this->modified = true;
						HX_STACK_LINE(8706)
						(this->length)--;
						HX_STACK_LINE(8706)
						this->pushmod = true;
						HX_STACK_LINE(8706)
						ret1;
					}
					HX_STACK_LINE(8706)
					ret = true;
					HX_STACK_LINE(8706)
					break;
				}
				HX_STACK_LINE(8706)
				pre = cur;
				HX_STACK_LINE(8706)
				cur = cur->next;
			}
			HX_STACK_LINE(8706)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,remove,(void))

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_pop_unsafe","zpp_nape/util/Lists.hx",8684);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8685)
	{
	}
	HX_STACK_LINE(8693)
	::zpp_nape::geom::ZPP_SimpleEvent ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8694)
	this->pop();
	HX_STACK_LINE(8695)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::pop_unsafe","zpp_nape/util/Lists.hx",8679);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimpleEvent Block( ::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8680);
			{
				HX_STACK_LINE(8680)
				{
				}
				HX_STACK_LINE(8680)
				::zpp_nape::geom::ZPP_SimpleEvent ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8680)
				__this->pop();
				HX_STACK_LINE(8680)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8679)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,pop_unsafe,return )

Void ZNPList_ZPP_SimpleEvent_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_pop","zpp_nape/util/Lists.hx",8646);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8647)
		{
		}
		HX_STACK_LINE(8655)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8656)
		this->head = ret->next;
		HX_STACK_LINE(8657)
		{
		}
		HX_STACK_LINE(8658)
		{
			HX_STACK_LINE(8659)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8660)
			{
			}
			HX_STACK_LINE(8668)
			o->elt = null();
			HX_STACK_LINE(8669)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
			HX_STACK_LINE(8670)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8675)
		if (((this->head == null()))){
			HX_STACK_LINE(8675)
			this->pushmod = true;
		}
		HX_STACK_LINE(8676)
		this->modified = true;
		HX_STACK_LINE(8677)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,inlined_pop,(void))

Void ZNPList_ZPP_SimpleEvent_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::pop","zpp_nape/util/Lists.hx",8641);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8642)
		{
		}
		HX_STACK_LINE(8642)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8642)
		this->head = ret->next;
		HX_STACK_LINE(8642)
		{
		}
		HX_STACK_LINE(8642)
		{
			HX_STACK_LINE(8642)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8642)
			{
			}
			HX_STACK_LINE(8642)
			o->elt = null();
			HX_STACK_LINE(8642)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
			HX_STACK_LINE(8642)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8642)
		if (((this->head == null()))){
			HX_STACK_LINE(8642)
			this->pushmod = true;
		}
		HX_STACK_LINE(8642)
		this->modified = true;
		HX_STACK_LINE(8642)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur,::zpp_nape::geom::ZPP_SimpleEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_insert","zpp_nape/util/Lists.hx",8598);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(8599)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent Block( ::zpp_nape::geom::ZPP_SimpleEvent &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8607);
			{
				HX_STACK_LINE(8608)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8609)
				{
					HX_STACK_LINE(8610)
					if (((::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool == null()))){
						HX_STACK_LINE(8610)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__new();
					}
					else{
						HX_STACK_LINE(8617)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
						HX_STACK_LINE(8618)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(8619)
						ret->next = null();
					}
					HX_STACK_LINE(8624)
					Dynamic();
				}
				HX_STACK_LINE(8626)
				ret->elt = o;
				HX_STACK_LINE(8627)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8607)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8629)
	if (((cur == null()))){
		HX_STACK_LINE(8630)
		temp->next = this->head;
		HX_STACK_LINE(8631)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(8634)
		temp->next = cur->next;
		HX_STACK_LINE(8635)
		cur->next = temp;
	}
	HX_STACK_LINE(8637)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(8638)
	(this->length)++;
	HX_STACK_LINE(8639)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleEvent_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur,::zpp_nape::geom::ZPP_SimpleEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::insert","zpp_nape/util/Lists.hx",8593);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent Block( ::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj *__this,::zpp_nape::geom::ZPP_SimpleEvent &o,::zpp_nape::util::ZNPNode_ZPP_SimpleEvent &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8594);
			{
				HX_STACK_LINE(8594)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent Block( ::zpp_nape::geom::ZPP_SimpleEvent &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8594);
						{
							HX_STACK_LINE(8594)
							::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(8594)
							{
								HX_STACK_LINE(8594)
								if (((::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool == null()))){
									HX_STACK_LINE(8594)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__new();
								}
								else{
									HX_STACK_LINE(8594)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
									HX_STACK_LINE(8594)
									::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = ret->next;
									HX_STACK_LINE(8594)
									ret->next = null();
								}
								HX_STACK_LINE(8594)
								Dynamic();
							}
							HX_STACK_LINE(8594)
							ret->elt = o;
							HX_STACK_LINE(8594)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(8594)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(8594)
				if (((cur == null()))){
					HX_STACK_LINE(8594)
					temp->next = __this->head;
					HX_STACK_LINE(8594)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(8594)
					temp->next = cur->next;
					HX_STACK_LINE(8594)
					cur->next = temp;
				}
				HX_STACK_LINE(8594)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(8594)
				(__this->length)++;
				HX_STACK_LINE(8594)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(8593)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleEvent_obj,insert,return )

Void ZNPList_ZPP_SimpleEvent_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SimpleEvent x){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::addAll","zpp_nape/util/Lists.hx",8575);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(8576)
		{
		}
		HX_STACK_LINE(8584)
		{
			HX_STACK_LINE(8585)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8586)
			while(((cx_ite != null()))){
				HX_STACK_LINE(8587)
				::zpp_nape::geom::ZPP_SimpleEvent i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(8588)
				this->add(i);
				HX_STACK_LINE(8589)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,addAll,(void))

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::inlined_add( ::zpp_nape::geom::ZPP_SimpleEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_add","zpp_nape/util/Lists.hx",8538);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(8539)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent Block( ::zpp_nape::geom::ZPP_SimpleEvent &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8547);
			{
				HX_STACK_LINE(8548)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8549)
				{
					HX_STACK_LINE(8550)
					if (((::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool == null()))){
						HX_STACK_LINE(8550)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__new();
					}
					else{
						HX_STACK_LINE(8557)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
						HX_STACK_LINE(8558)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(8559)
						ret->next = null();
					}
					HX_STACK_LINE(8564)
					Dynamic();
				}
				HX_STACK_LINE(8566)
				ret->elt = o;
				HX_STACK_LINE(8567)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8547)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8569)
	temp->next = this->head;
	HX_STACK_LINE(8570)
	this->head = temp;
	HX_STACK_LINE(8571)
	this->modified = true;
	HX_STACK_LINE(8572)
	(this->length)++;
	HX_STACK_LINE(8573)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_add,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::add( ::zpp_nape::geom::ZPP_SimpleEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::add","zpp_nape/util/Lists.hx",8533);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimpleEvent Block( ::zpp_nape::geom::ZPP_SimpleEvent &o,::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8534);
			{
				HX_STACK_LINE(8534)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent Block( ::zpp_nape::geom::ZPP_SimpleEvent &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8534);
						{
							HX_STACK_LINE(8534)
							::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(8534)
							{
								HX_STACK_LINE(8534)
								if (((::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool == null()))){
									HX_STACK_LINE(8534)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__new();
								}
								else{
									HX_STACK_LINE(8534)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
									HX_STACK_LINE(8534)
									::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = ret->next;
									HX_STACK_LINE(8534)
									ret->next = null();
								}
								HX_STACK_LINE(8534)
								Dynamic();
							}
							HX_STACK_LINE(8534)
							ret->elt = o;
							HX_STACK_LINE(8534)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(8534)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(8534)
				temp->next = __this->head;
				HX_STACK_LINE(8534)
				__this->head = temp;
				HX_STACK_LINE(8534)
				__this->modified = true;
				HX_STACK_LINE(8534)
				(__this->length)++;
				HX_STACK_LINE(8534)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(8533)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,add,return )

Void ZNPList_ZPP_SimpleEvent_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent i){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::setbegin","zpp_nape/util/Lists.hx",8528);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(8529)
		this->head = i;
		HX_STACK_LINE(8530)
		this->modified = true;
		HX_STACK_LINE(8531)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::begin","zpp_nape/util/Lists.hx",8520);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8520)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,begin,return )


ZNPList_ZPP_SimpleEvent_obj::ZNPList_ZPP_SimpleEvent_obj()
{
}

void ZNPList_ZPP_SimpleEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SimpleEvent);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SimpleEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_SimpleEvent_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_SimpleEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent >(); return inValue; }
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

void ZNPList_ZPP_SimpleEvent_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SimpleEvent_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SimpleEvent_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_SimpleEvent_obj::__mClass;

void ZNPList_ZPP_SimpleEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_SimpleEvent"), hx::TCanCast< ZNPList_ZPP_SimpleEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_SimpleEvent_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
