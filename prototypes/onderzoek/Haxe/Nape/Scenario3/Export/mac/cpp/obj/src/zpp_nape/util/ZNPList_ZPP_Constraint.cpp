#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Constraint_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Constraint::new","zpp_nape/util/Lists.hx",1843);
{
	HX_STACK_LINE(1853)
	this->length = (int)0;
	HX_STACK_LINE(1852)
	this->pushmod = false;
	HX_STACK_LINE(1851)
	this->modified = false;
	HX_STACK_LINE(1844)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Constraint_obj::~ZNPList_ZPP_Constraint_obj() { }

Dynamic ZNPList_ZPP_Constraint_obj::__CreateEmpty() { return  new ZNPList_ZPP_Constraint_obj; }
hx::ObjectPtr< ZNPList_ZPP_Constraint_obj > ZNPList_ZPP_Constraint_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Constraint_obj > result = new ZNPList_ZPP_Constraint_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Constraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Constraint_obj > result = new ZNPList_ZPP_Constraint_obj();
	result->__construct();
	return result;}

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::at","zpp_nape/util/Lists.hx",2246);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(2247)
	{
	}
	HX_STACK_LINE(2255)
	::zpp_nape::util::ZNPNode_ZPP_Constraint it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(2256)
	return (  (((it != null()))) ? ::zpp_nape::constraint::ZPP_Constraint(it->elt) : ::zpp_nape::constraint::ZPP_Constraint(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::iterator_at","zpp_nape/util/Lists.hx",2233);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(2234)
	{
	}
	HX_STACK_LINE(2242)
	::zpp_nape::util::ZNPNode_ZPP_Constraint ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2243)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(2243)
		ret = ret->next;
	}
	HX_STACK_LINE(2244)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,iterator_at,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::back","zpp_nape/util/Lists.hx",2224);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2225)
	::zpp_nape::util::ZNPNode_ZPP_Constraint ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2226)
	::zpp_nape::util::ZNPNode_ZPP_Constraint cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2227)
	while(((cur != null()))){
		HX_STACK_LINE(2228)
		ret = cur;
		HX_STACK_LINE(2229)
		cur = cur->next;
	}
	HX_STACK_LINE(2231)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,back,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::front","zpp_nape/util/Lists.hx",2221);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2221)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,front,return )

bool ZNPList_ZPP_Constraint_obj::inlined_has( ::zpp_nape::constraint::ZPP_Constraint obj){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_has","zpp_nape/util/Lists.hx",2191);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2192)
	{
	}
	HX_STACK_LINE(2200)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2201)
	{
		HX_STACK_LINE(2202)
		ret = false;
		HX_STACK_LINE(2203)
		{
			HX_STACK_LINE(2204)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2205)
			while(((cx_ite != null()))){
				HX_STACK_LINE(2206)
				::zpp_nape::constraint::ZPP_Constraint npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(2207)
				if (((npite == obj))){
					HX_STACK_LINE(2209)
					ret = true;
					HX_STACK_LINE(2210)
					break;
				}
				HX_STACK_LINE(2213)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(2217)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_has,return )

bool ZNPList_ZPP_Constraint_obj::has( ::zpp_nape::constraint::ZPP_Constraint obj){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::has","zpp_nape/util/Lists.hx",2186);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Constraint_obj *__this,::zpp_nape::constraint::ZPP_Constraint &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2187);
			{
				HX_STACK_LINE(2187)
				{
				}
				HX_STACK_LINE(2187)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2187)
				{
					HX_STACK_LINE(2187)
					ret = false;
					HX_STACK_LINE(2187)
					{
						HX_STACK_LINE(2187)
						::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(2187)
						while(((cx_ite != null()))){
							HX_STACK_LINE(2187)
							::zpp_nape::constraint::ZPP_Constraint npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(2187)
							if (((npite == obj))){
								HX_STACK_LINE(2187)
								ret = true;
								HX_STACK_LINE(2187)
								break;
							}
							HX_STACK_LINE(2187)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(2187)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2186)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,has,return )

int ZNPList_ZPP_Constraint_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::size","zpp_nape/util/Lists.hx",2183);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2183)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,size,return )

bool ZNPList_ZPP_Constraint_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::empty","zpp_nape/util/Lists.hx",2178);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2178)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,empty,return )

Void ZNPList_ZPP_Constraint_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::reverse","zpp_nape/util/Lists.hx",2163);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2164)
		::zpp_nape::util::ZNPNode_ZPP_Constraint cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2165)
		::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2166)
		while(((cur != null()))){
			HX_STACK_LINE(2167)
			::zpp_nape::util::ZNPNode_ZPP_Constraint nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(2168)
			cur->next = pre;
			HX_STACK_LINE(2169)
			this->head = cur;
			HX_STACK_LINE(2170)
			pre = cur;
			HX_STACK_LINE(2171)
			cur = nx;
		}
		HX_STACK_LINE(2173)
		this->modified = true;
		HX_STACK_LINE(2174)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,reverse,(void))

Void ZNPList_ZPP_Constraint_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_clear","zpp_nape/util/Lists.hx",2157);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2159)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(2159)
			{
			}
			HX_STACK_LINE(2159)
			::zpp_nape::util::ZNPNode_ZPP_Constraint ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2159)
			this->head = ret->next;
			HX_STACK_LINE(2159)
			{
			}
			HX_STACK_LINE(2159)
			{
				HX_STACK_LINE(2159)
				::zpp_nape::util::ZNPNode_ZPP_Constraint o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2159)
				{
				}
				HX_STACK_LINE(2159)
				o->elt = null();
				HX_STACK_LINE(2159)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
				HX_STACK_LINE(2159)
				::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2159)
			if (((this->head == null()))){
				HX_STACK_LINE(2159)
				this->pushmod = true;
			}
			HX_STACK_LINE(2159)
			this->modified = true;
			HX_STACK_LINE(2159)
			(this->length)--;
		}
		HX_STACK_LINE(2160)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,inlined_clear,(void))

Void ZNPList_ZPP_Constraint_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::clear","zpp_nape/util/Lists.hx",2152);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2153)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(2153)
			{
			}
			HX_STACK_LINE(2153)
			::zpp_nape::util::ZNPNode_ZPP_Constraint ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2153)
			this->head = ret->next;
			HX_STACK_LINE(2153)
			{
			}
			HX_STACK_LINE(2153)
			{
				HX_STACK_LINE(2153)
				::zpp_nape::util::ZNPNode_ZPP_Constraint o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2153)
				{
				}
				HX_STACK_LINE(2153)
				o->elt = null();
				HX_STACK_LINE(2153)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
				HX_STACK_LINE(2153)
				::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2153)
			if (((this->head == null()))){
				HX_STACK_LINE(2153)
				this->pushmod = true;
			}
			HX_STACK_LINE(2153)
			this->modified = true;
			HX_STACK_LINE(2153)
			(this->length)--;
		}
		HX_STACK_LINE(2153)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Constraint pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::splice","zpp_nape/util/Lists.hx",2148);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(2149)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(2149)
		this->erase(pre);
	}
	HX_STACK_LINE(2150)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Constraint_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Constraint pre){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_erase","zpp_nape/util/Lists.hx",2102);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(2103)
	{
	}
	HX_STACK_LINE(2111)
	::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(2112)
	::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2113)
	if (((pre == null()))){
		HX_STACK_LINE(2114)
		old = this->head;
		HX_STACK_LINE(2115)
		ret = old->next;
		HX_STACK_LINE(2116)
		this->head = ret;
		HX_STACK_LINE(2117)
		if (((this->head == null()))){
			HX_STACK_LINE(2117)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(2120)
		old = pre->next;
		HX_STACK_LINE(2121)
		ret = old->next;
		HX_STACK_LINE(2122)
		pre->next = ret;
		HX_STACK_LINE(2123)
		if (((ret == null()))){
			HX_STACK_LINE(2123)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(2125)
	{
	}
	HX_STACK_LINE(2126)
	{
		HX_STACK_LINE(2127)
		::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2128)
		{
		}
		HX_STACK_LINE(2136)
		o->elt = null();
		HX_STACK_LINE(2137)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
		HX_STACK_LINE(2138)
		::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2143)
	this->modified = true;
	HX_STACK_LINE(2144)
	(this->length)--;
	HX_STACK_LINE(2145)
	this->pushmod = true;
	HX_STACK_LINE(2146)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Constraint pre){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::erase","zpp_nape/util/Lists.hx",2097);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Constraint Block( ::zpp_nape::util::ZNPNode_ZPP_Constraint &pre,::zpp_nape::util::ZNPList_ZPP_Constraint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2098);
			{
				HX_STACK_LINE(2098)
				{
				}
				HX_STACK_LINE(2098)
				::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(2098)
				::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2098)
				if (((pre == null()))){
					HX_STACK_LINE(2098)
					old = __this->head;
					HX_STACK_LINE(2098)
					ret = old->next;
					HX_STACK_LINE(2098)
					__this->head = ret;
					HX_STACK_LINE(2098)
					if (((__this->head == null()))){
						HX_STACK_LINE(2098)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(2098)
					old = pre->next;
					HX_STACK_LINE(2098)
					ret = old->next;
					HX_STACK_LINE(2098)
					pre->next = ret;
					HX_STACK_LINE(2098)
					if (((ret == null()))){
						HX_STACK_LINE(2098)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(2098)
				{
				}
				HX_STACK_LINE(2098)
				{
					HX_STACK_LINE(2098)
					::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2098)
					{
					}
					HX_STACK_LINE(2098)
					o->elt = null();
					HX_STACK_LINE(2098)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
					HX_STACK_LINE(2098)
					::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
				}
				HX_STACK_LINE(2098)
				__this->modified = true;
				HX_STACK_LINE(2098)
				(__this->length)--;
				HX_STACK_LINE(2098)
				__this->pushmod = true;
				HX_STACK_LINE(2098)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2097)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,erase,return )

bool ZNPList_ZPP_Constraint_obj::inlined_try_remove( ::zpp_nape::constraint::ZPP_Constraint obj){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_try_remove","zpp_nape/util/Lists.hx",2074);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2075)
	{
	}
	HX_STACK_LINE(2083)
	::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2084)
	::zpp_nape::util::ZNPNode_ZPP_Constraint cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2085)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2086)
	while(((cur != null()))){
		HX_STACK_LINE(2087)
		if (((cur->elt == obj))){
			HX_STACK_LINE(2088)
			{
				HX_STACK_LINE(2088)
				{
				}
				HX_STACK_LINE(2088)
				::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(2088)
				::zpp_nape::util::ZNPNode_ZPP_Constraint ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(2088)
				if (((pre == null()))){
					HX_STACK_LINE(2088)
					old = this->head;
					HX_STACK_LINE(2088)
					ret1 = old->next;
					HX_STACK_LINE(2088)
					this->head = ret1;
					HX_STACK_LINE(2088)
					if (((this->head == null()))){
						HX_STACK_LINE(2088)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(2088)
					old = pre->next;
					HX_STACK_LINE(2088)
					ret1 = old->next;
					HX_STACK_LINE(2088)
					pre->next = ret1;
					HX_STACK_LINE(2088)
					if (((ret1 == null()))){
						HX_STACK_LINE(2088)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(2088)
				{
				}
				HX_STACK_LINE(2088)
				{
					HX_STACK_LINE(2088)
					::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2088)
					{
					}
					HX_STACK_LINE(2088)
					o->elt = null();
					HX_STACK_LINE(2088)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
					HX_STACK_LINE(2088)
					::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
				}
				HX_STACK_LINE(2088)
				this->modified = true;
				HX_STACK_LINE(2088)
				(this->length)--;
				HX_STACK_LINE(2088)
				this->pushmod = true;
				HX_STACK_LINE(2088)
				ret1;
			}
			HX_STACK_LINE(2089)
			ret = true;
			HX_STACK_LINE(2090)
			break;
		}
		HX_STACK_LINE(2092)
		pre = cur;
		HX_STACK_LINE(2093)
		cur = cur->next;
	}
	HX_STACK_LINE(2095)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Constraint_obj::inlined_remove( ::zpp_nape::constraint::ZPP_Constraint obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_remove","zpp_nape/util/Lists.hx",2061);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(2062)
		{
		}
		HX_STACK_LINE(2070)
		{
			HX_STACK_LINE(2070)
			{
			}
			HX_STACK_LINE(2070)
			::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(2070)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(2070)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2070)
			while(((cur != null()))){
				HX_STACK_LINE(2070)
				if (((cur->elt == obj))){
					HX_STACK_LINE(2070)
					{
						HX_STACK_LINE(2070)
						{
						}
						HX_STACK_LINE(2070)
						::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(2070)
						::zpp_nape::util::ZNPNode_ZPP_Constraint ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(2070)
						if (((pre == null()))){
							HX_STACK_LINE(2070)
							old = this->head;
							HX_STACK_LINE(2070)
							ret1 = old->next;
							HX_STACK_LINE(2070)
							this->head = ret1;
							HX_STACK_LINE(2070)
							if (((this->head == null()))){
								HX_STACK_LINE(2070)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(2070)
							old = pre->next;
							HX_STACK_LINE(2070)
							ret1 = old->next;
							HX_STACK_LINE(2070)
							pre->next = ret1;
							HX_STACK_LINE(2070)
							if (((ret1 == null()))){
								HX_STACK_LINE(2070)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(2070)
						{
						}
						HX_STACK_LINE(2070)
						{
							HX_STACK_LINE(2070)
							::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(2070)
							{
							}
							HX_STACK_LINE(2070)
							o->elt = null();
							HX_STACK_LINE(2070)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
							HX_STACK_LINE(2070)
							::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
						}
						HX_STACK_LINE(2070)
						this->modified = true;
						HX_STACK_LINE(2070)
						(this->length)--;
						HX_STACK_LINE(2070)
						this->pushmod = true;
						HX_STACK_LINE(2070)
						ret1;
					}
					HX_STACK_LINE(2070)
					ret = true;
					HX_STACK_LINE(2070)
					break;
				}
				HX_STACK_LINE(2070)
				pre = cur;
				HX_STACK_LINE(2070)
				cur = cur->next;
			}
			HX_STACK_LINE(2070)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_remove,(void))

bool ZNPList_ZPP_Constraint_obj::try_remove( ::zpp_nape::constraint::ZPP_Constraint obj){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::try_remove","zpp_nape/util/Lists.hx",2036);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2037)
	{
	}
	HX_STACK_LINE(2045)
	::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2046)
	::zpp_nape::util::ZNPNode_ZPP_Constraint cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2047)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2048)
	while(((cur != null()))){
		HX_STACK_LINE(2049)
		if (((cur->elt == obj))){
			HX_STACK_LINE(2050)
			this->erase(pre);
			HX_STACK_LINE(2051)
			ret = true;
			HX_STACK_LINE(2052)
			break;
		}
		HX_STACK_LINE(2054)
		pre = cur;
		HX_STACK_LINE(2055)
		cur = cur->next;
	}
	HX_STACK_LINE(2057)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,try_remove,return )

Void ZNPList_ZPP_Constraint_obj::remove( ::zpp_nape::constraint::ZPP_Constraint obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::remove","zpp_nape/util/Lists.hx",2025);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(2026)
		{
		}
		HX_STACK_LINE(2034)
		{
			HX_STACK_LINE(2034)
			{
			}
			HX_STACK_LINE(2034)
			::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(2034)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(2034)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2034)
			while(((cur != null()))){
				HX_STACK_LINE(2034)
				if (((cur->elt == obj))){
					HX_STACK_LINE(2034)
					{
						HX_STACK_LINE(2034)
						{
						}
						HX_STACK_LINE(2034)
						::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(2034)
						::zpp_nape::util::ZNPNode_ZPP_Constraint ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(2034)
						if (((pre == null()))){
							HX_STACK_LINE(2034)
							old = this->head;
							HX_STACK_LINE(2034)
							ret1 = old->next;
							HX_STACK_LINE(2034)
							this->head = ret1;
							HX_STACK_LINE(2034)
							if (((this->head == null()))){
								HX_STACK_LINE(2034)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(2034)
							old = pre->next;
							HX_STACK_LINE(2034)
							ret1 = old->next;
							HX_STACK_LINE(2034)
							pre->next = ret1;
							HX_STACK_LINE(2034)
							if (((ret1 == null()))){
								HX_STACK_LINE(2034)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(2034)
						{
						}
						HX_STACK_LINE(2034)
						{
							HX_STACK_LINE(2034)
							::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(2034)
							{
							}
							HX_STACK_LINE(2034)
							o->elt = null();
							HX_STACK_LINE(2034)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
							HX_STACK_LINE(2034)
							::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
						}
						HX_STACK_LINE(2034)
						this->modified = true;
						HX_STACK_LINE(2034)
						(this->length)--;
						HX_STACK_LINE(2034)
						this->pushmod = true;
						HX_STACK_LINE(2034)
						ret1;
					}
					HX_STACK_LINE(2034)
					ret = true;
					HX_STACK_LINE(2034)
					break;
				}
				HX_STACK_LINE(2034)
				pre = cur;
				HX_STACK_LINE(2034)
				cur = cur->next;
			}
			HX_STACK_LINE(2034)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,remove,(void))

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_pop_unsafe","zpp_nape/util/Lists.hx",2012);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2013)
	{
	}
	HX_STACK_LINE(2021)
	::zpp_nape::constraint::ZPP_Constraint ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2022)
	this->pop();
	HX_STACK_LINE(2023)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,inlined_pop_unsafe,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::pop_unsafe","zpp_nape/util/Lists.hx",2007);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::constraint::ZPP_Constraint Block( ::zpp_nape::util::ZNPList_ZPP_Constraint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2008);
			{
				HX_STACK_LINE(2008)
				{
				}
				HX_STACK_LINE(2008)
				::zpp_nape::constraint::ZPP_Constraint ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2008)
				__this->pop();
				HX_STACK_LINE(2008)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2007)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,pop_unsafe,return )

Void ZNPList_ZPP_Constraint_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_pop","zpp_nape/util/Lists.hx",1974);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1975)
		{
		}
		HX_STACK_LINE(1983)
		::zpp_nape::util::ZNPNode_ZPP_Constraint ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1984)
		this->head = ret->next;
		HX_STACK_LINE(1985)
		{
		}
		HX_STACK_LINE(1986)
		{
			HX_STACK_LINE(1987)
			::zpp_nape::util::ZNPNode_ZPP_Constraint o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1988)
			{
			}
			HX_STACK_LINE(1996)
			o->elt = null();
			HX_STACK_LINE(1997)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
			HX_STACK_LINE(1998)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2003)
		if (((this->head == null()))){
			HX_STACK_LINE(2003)
			this->pushmod = true;
		}
		HX_STACK_LINE(2004)
		this->modified = true;
		HX_STACK_LINE(2005)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,inlined_pop,(void))

Void ZNPList_ZPP_Constraint_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::pop","zpp_nape/util/Lists.hx",1969);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1970)
		{
		}
		HX_STACK_LINE(1970)
		::zpp_nape::util::ZNPNode_ZPP_Constraint ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1970)
		this->head = ret->next;
		HX_STACK_LINE(1970)
		{
		}
		HX_STACK_LINE(1970)
		{
			HX_STACK_LINE(1970)
			::zpp_nape::util::ZNPNode_ZPP_Constraint o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1970)
			{
			}
			HX_STACK_LINE(1970)
			o->elt = null();
			HX_STACK_LINE(1970)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
			HX_STACK_LINE(1970)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1970)
		if (((this->head == null()))){
			HX_STACK_LINE(1970)
			this->pushmod = true;
		}
		HX_STACK_LINE(1970)
		this->modified = true;
		HX_STACK_LINE(1970)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Constraint cur,::zpp_nape::constraint::ZPP_Constraint o){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_insert","zpp_nape/util/Lists.hx",1926);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(1927)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Constraint Block( ::zpp_nape::constraint::ZPP_Constraint &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1935);
			{
				HX_STACK_LINE(1936)
				::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1937)
				{
					HX_STACK_LINE(1938)
					if (((::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool == null()))){
						HX_STACK_LINE(1938)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__new();
					}
					else{
						HX_STACK_LINE(1945)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
						HX_STACK_LINE(1946)
						::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1947)
						ret->next = null();
					}
					HX_STACK_LINE(1952)
					Dynamic();
				}
				HX_STACK_LINE(1954)
				ret->elt = o;
				HX_STACK_LINE(1955)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1935)
	::zpp_nape::util::ZNPNode_ZPP_Constraint temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1957)
	if (((cur == null()))){
		HX_STACK_LINE(1958)
		temp->next = this->head;
		HX_STACK_LINE(1959)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(1962)
		temp->next = cur->next;
		HX_STACK_LINE(1963)
		cur->next = temp;
	}
	HX_STACK_LINE(1965)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(1966)
	(this->length)++;
	HX_STACK_LINE(1967)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Constraint_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Constraint cur,::zpp_nape::constraint::ZPP_Constraint o){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::insert","zpp_nape/util/Lists.hx",1921);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Constraint Block( ::zpp_nape::util::ZNPList_ZPP_Constraint_obj *__this,::zpp_nape::constraint::ZPP_Constraint &o,::zpp_nape::util::ZNPNode_ZPP_Constraint &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1922);
			{
				HX_STACK_LINE(1922)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Constraint Block( ::zpp_nape::constraint::ZPP_Constraint &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1922);
						{
							HX_STACK_LINE(1922)
							::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1922)
							{
								HX_STACK_LINE(1922)
								if (((::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool == null()))){
									HX_STACK_LINE(1922)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__new();
								}
								else{
									HX_STACK_LINE(1922)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
									HX_STACK_LINE(1922)
									::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1922)
									ret->next = null();
								}
								HX_STACK_LINE(1922)
								Dynamic();
							}
							HX_STACK_LINE(1922)
							ret->elt = o;
							HX_STACK_LINE(1922)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1922)
				::zpp_nape::util::ZNPNode_ZPP_Constraint temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1922)
				if (((cur == null()))){
					HX_STACK_LINE(1922)
					temp->next = __this->head;
					HX_STACK_LINE(1922)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(1922)
					temp->next = cur->next;
					HX_STACK_LINE(1922)
					cur->next = temp;
				}
				HX_STACK_LINE(1922)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(1922)
				(__this->length)++;
				HX_STACK_LINE(1922)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(1921)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Constraint_obj,insert,return )

Void ZNPList_ZPP_Constraint_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Constraint x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::addAll","zpp_nape/util/Lists.hx",1903);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1904)
		{
		}
		HX_STACK_LINE(1912)
		{
			HX_STACK_LINE(1913)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1914)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1915)
				::zpp_nape::constraint::ZPP_Constraint i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1916)
				this->add(i);
				HX_STACK_LINE(1917)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,addAll,(void))

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::inlined_add( ::zpp_nape::constraint::ZPP_Constraint o){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_add","zpp_nape/util/Lists.hx",1866);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(1867)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Constraint Block( ::zpp_nape::constraint::ZPP_Constraint &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1875);
			{
				HX_STACK_LINE(1876)
				::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1877)
				{
					HX_STACK_LINE(1878)
					if (((::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool == null()))){
						HX_STACK_LINE(1878)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__new();
					}
					else{
						HX_STACK_LINE(1885)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
						HX_STACK_LINE(1886)
						::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1887)
						ret->next = null();
					}
					HX_STACK_LINE(1892)
					Dynamic();
				}
				HX_STACK_LINE(1894)
				ret->elt = o;
				HX_STACK_LINE(1895)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1875)
	::zpp_nape::util::ZNPNode_ZPP_Constraint temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1897)
	temp->next = this->head;
	HX_STACK_LINE(1898)
	this->head = temp;
	HX_STACK_LINE(1899)
	this->modified = true;
	HX_STACK_LINE(1900)
	(this->length)++;
	HX_STACK_LINE(1901)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_add,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::add( ::zpp_nape::constraint::ZPP_Constraint o){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::add","zpp_nape/util/Lists.hx",1861);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::constraint::ZPP_Constraint Block( ::zpp_nape::constraint::ZPP_Constraint &o,::zpp_nape::util::ZNPList_ZPP_Constraint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1862);
			{
				HX_STACK_LINE(1862)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Constraint Block( ::zpp_nape::constraint::ZPP_Constraint &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1862);
						{
							HX_STACK_LINE(1862)
							::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1862)
							{
								HX_STACK_LINE(1862)
								if (((::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool == null()))){
									HX_STACK_LINE(1862)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__new();
								}
								else{
									HX_STACK_LINE(1862)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
									HX_STACK_LINE(1862)
									::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1862)
									ret->next = null();
								}
								HX_STACK_LINE(1862)
								Dynamic();
							}
							HX_STACK_LINE(1862)
							ret->elt = o;
							HX_STACK_LINE(1862)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1862)
				::zpp_nape::util::ZNPNode_ZPP_Constraint temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1862)
				temp->next = __this->head;
				HX_STACK_LINE(1862)
				__this->head = temp;
				HX_STACK_LINE(1862)
				__this->modified = true;
				HX_STACK_LINE(1862)
				(__this->length)++;
				HX_STACK_LINE(1862)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(1861)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,add,return )

Void ZNPList_ZPP_Constraint_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Constraint i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::setbegin","zpp_nape/util/Lists.hx",1856);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(1857)
		this->head = i;
		HX_STACK_LINE(1858)
		this->modified = true;
		HX_STACK_LINE(1859)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::begin","zpp_nape/util/Lists.hx",1848);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1848)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,begin,return )


ZNPList_ZPP_Constraint_obj::ZNPList_ZPP_Constraint_obj()
{
}

void ZNPList_ZPP_Constraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Constraint);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Constraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Constraint_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Constraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Constraint >(); return inValue; }
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

void ZNPList_ZPP_Constraint_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Constraint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Constraint_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Constraint_obj::__mClass;

void ZNPList_ZPP_Constraint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Constraint"), hx::TCanCast< ZNPList_ZPP_Constraint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Constraint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
