#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Body_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Body::new","zpp_nape/util/Lists.hx",1426);
{
	HX_STACK_LINE(1436)
	this->length = (int)0;
	HX_STACK_LINE(1435)
	this->pushmod = false;
	HX_STACK_LINE(1434)
	this->modified = false;
	HX_STACK_LINE(1427)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Body_obj::~ZNPList_ZPP_Body_obj() { }

Dynamic ZNPList_ZPP_Body_obj::__CreateEmpty() { return  new ZNPList_ZPP_Body_obj; }
hx::ObjectPtr< ZNPList_ZPP_Body_obj > ZNPList_ZPP_Body_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Body_obj > result = new ZNPList_ZPP_Body_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Body_obj > result = new ZNPList_ZPP_Body_obj();
	result->__construct();
	return result;}

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Body::at","zpp_nape/util/Lists.hx",1829);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(1830)
	{
	}
	HX_STACK_LINE(1838)
	::zpp_nape::util::ZNPNode_ZPP_Body it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(1839)
	return (  (((it != null()))) ? ::zpp_nape::phys::ZPP_Body(it->elt) : ::zpp_nape::phys::ZPP_Body(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Body::iterator_at","zpp_nape/util/Lists.hx",1816);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(1817)
	{
	}
	HX_STACK_LINE(1825)
	::zpp_nape::util::ZNPNode_ZPP_Body ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1826)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(1826)
		ret = ret->next;
	}
	HX_STACK_LINE(1827)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,iterator_at,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::back","zpp_nape/util/Lists.hx",1807);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1808)
	::zpp_nape::util::ZNPNode_ZPP_Body ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1809)
	::zpp_nape::util::ZNPNode_ZPP_Body cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1810)
	while(((cur != null()))){
		HX_STACK_LINE(1811)
		ret = cur;
		HX_STACK_LINE(1812)
		cur = cur->next;
	}
	HX_STACK_LINE(1814)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,back,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::front","zpp_nape/util/Lists.hx",1804);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1804)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,front,return )

bool ZNPList_ZPP_Body_obj::inlined_has( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_has","zpp_nape/util/Lists.hx",1774);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1775)
	{
	}
	HX_STACK_LINE(1783)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1784)
	{
		HX_STACK_LINE(1785)
		ret = false;
		HX_STACK_LINE(1786)
		{
			HX_STACK_LINE(1787)
			::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1788)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1789)
				::zpp_nape::phys::ZPP_Body npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(1790)
				if (((npite == obj))){
					HX_STACK_LINE(1792)
					ret = true;
					HX_STACK_LINE(1793)
					break;
				}
				HX_STACK_LINE(1796)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1800)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_has,return )

bool ZNPList_ZPP_Body_obj::has( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZNPList_ZPP_Body::has","zpp_nape/util/Lists.hx",1769);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Body_obj *__this,::zpp_nape::phys::ZPP_Body &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1770);
			{
				HX_STACK_LINE(1770)
				{
				}
				HX_STACK_LINE(1770)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1770)
				{
					HX_STACK_LINE(1770)
					ret = false;
					HX_STACK_LINE(1770)
					{
						HX_STACK_LINE(1770)
						::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1770)
						while(((cx_ite != null()))){
							HX_STACK_LINE(1770)
							::zpp_nape::phys::ZPP_Body npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(1770)
							if (((npite == obj))){
								HX_STACK_LINE(1770)
								ret = true;
								HX_STACK_LINE(1770)
								break;
							}
							HX_STACK_LINE(1770)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(1770)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1769)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,has,return )

int ZNPList_ZPP_Body_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::size","zpp_nape/util/Lists.hx",1766);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1766)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,size,return )

bool ZNPList_ZPP_Body_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::empty","zpp_nape/util/Lists.hx",1761);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1761)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,empty,return )

Void ZNPList_ZPP_Body_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::reverse","zpp_nape/util/Lists.hx",1746);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1747)
		::zpp_nape::util::ZNPNode_ZPP_Body cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1748)
		::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1749)
		while(((cur != null()))){
			HX_STACK_LINE(1750)
			::zpp_nape::util::ZNPNode_ZPP_Body nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1751)
			cur->next = pre;
			HX_STACK_LINE(1752)
			this->head = cur;
			HX_STACK_LINE(1753)
			pre = cur;
			HX_STACK_LINE(1754)
			cur = nx;
		}
		HX_STACK_LINE(1756)
		this->modified = true;
		HX_STACK_LINE(1757)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,reverse,(void))

Void ZNPList_ZPP_Body_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_clear","zpp_nape/util/Lists.hx",1740);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1742)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(1742)
			{
			}
			HX_STACK_LINE(1742)
			::zpp_nape::util::ZNPNode_ZPP_Body ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1742)
			this->head = ret->next;
			HX_STACK_LINE(1742)
			{
			}
			HX_STACK_LINE(1742)
			{
				HX_STACK_LINE(1742)
				::zpp_nape::util::ZNPNode_ZPP_Body o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1742)
				{
				}
				HX_STACK_LINE(1742)
				o->elt = null();
				HX_STACK_LINE(1742)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
				HX_STACK_LINE(1742)
				::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1742)
			if (((this->head == null()))){
				HX_STACK_LINE(1742)
				this->pushmod = true;
			}
			HX_STACK_LINE(1742)
			this->modified = true;
			HX_STACK_LINE(1742)
			(this->length)--;
		}
		HX_STACK_LINE(1743)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,inlined_clear,(void))

Void ZNPList_ZPP_Body_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::clear","zpp_nape/util/Lists.hx",1735);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1736)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(1736)
			{
			}
			HX_STACK_LINE(1736)
			::zpp_nape::util::ZNPNode_ZPP_Body ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1736)
			this->head = ret->next;
			HX_STACK_LINE(1736)
			{
			}
			HX_STACK_LINE(1736)
			{
				HX_STACK_LINE(1736)
				::zpp_nape::util::ZNPNode_ZPP_Body o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1736)
				{
				}
				HX_STACK_LINE(1736)
				o->elt = null();
				HX_STACK_LINE(1736)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
				HX_STACK_LINE(1736)
				::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1736)
			if (((this->head == null()))){
				HX_STACK_LINE(1736)
				this->pushmod = true;
			}
			HX_STACK_LINE(1736)
			this->modified = true;
			HX_STACK_LINE(1736)
			(this->length)--;
		}
		HX_STACK_LINE(1736)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Body pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Body::splice","zpp_nape/util/Lists.hx",1731);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(1732)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(1732)
		this->erase(pre);
	}
	HX_STACK_LINE(1733)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Body_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Body pre){
	HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_erase","zpp_nape/util/Lists.hx",1685);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(1686)
	{
	}
	HX_STACK_LINE(1694)
	::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(1695)
	::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1696)
	if (((pre == null()))){
		HX_STACK_LINE(1697)
		old = this->head;
		HX_STACK_LINE(1698)
		ret = old->next;
		HX_STACK_LINE(1699)
		this->head = ret;
		HX_STACK_LINE(1700)
		if (((this->head == null()))){
			HX_STACK_LINE(1700)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(1703)
		old = pre->next;
		HX_STACK_LINE(1704)
		ret = old->next;
		HX_STACK_LINE(1705)
		pre->next = ret;
		HX_STACK_LINE(1706)
		if (((ret == null()))){
			HX_STACK_LINE(1706)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(1708)
	{
	}
	HX_STACK_LINE(1709)
	{
		HX_STACK_LINE(1710)
		::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1711)
		{
		}
		HX_STACK_LINE(1719)
		o->elt = null();
		HX_STACK_LINE(1720)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
		HX_STACK_LINE(1721)
		::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1726)
	this->modified = true;
	HX_STACK_LINE(1727)
	(this->length)--;
	HX_STACK_LINE(1728)
	this->pushmod = true;
	HX_STACK_LINE(1729)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Body pre){
	HX_STACK_PUSH("ZNPList_ZPP_Body::erase","zpp_nape/util/Lists.hx",1680);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Body Block( ::zpp_nape::util::ZNPNode_ZPP_Body &pre,::zpp_nape::util::ZNPList_ZPP_Body_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1681);
			{
				HX_STACK_LINE(1681)
				{
				}
				HX_STACK_LINE(1681)
				::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(1681)
				::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1681)
				if (((pre == null()))){
					HX_STACK_LINE(1681)
					old = __this->head;
					HX_STACK_LINE(1681)
					ret = old->next;
					HX_STACK_LINE(1681)
					__this->head = ret;
					HX_STACK_LINE(1681)
					if (((__this->head == null()))){
						HX_STACK_LINE(1681)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(1681)
					old = pre->next;
					HX_STACK_LINE(1681)
					ret = old->next;
					HX_STACK_LINE(1681)
					pre->next = ret;
					HX_STACK_LINE(1681)
					if (((ret == null()))){
						HX_STACK_LINE(1681)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(1681)
				{
				}
				HX_STACK_LINE(1681)
				{
					HX_STACK_LINE(1681)
					::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1681)
					{
					}
					HX_STACK_LINE(1681)
					o->elt = null();
					HX_STACK_LINE(1681)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
					HX_STACK_LINE(1681)
					::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1681)
				__this->modified = true;
				HX_STACK_LINE(1681)
				(__this->length)--;
				HX_STACK_LINE(1681)
				__this->pushmod = true;
				HX_STACK_LINE(1681)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1680)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,erase,return )

bool ZNPList_ZPP_Body_obj::inlined_try_remove( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_try_remove","zpp_nape/util/Lists.hx",1657);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1658)
	{
	}
	HX_STACK_LINE(1666)
	::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1667)
	::zpp_nape::util::ZNPNode_ZPP_Body cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1668)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1669)
	while(((cur != null()))){
		HX_STACK_LINE(1670)
		if (((cur->elt == obj))){
			HX_STACK_LINE(1671)
			{
				HX_STACK_LINE(1671)
				{
				}
				HX_STACK_LINE(1671)
				::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(1671)
				::zpp_nape::util::ZNPNode_ZPP_Body ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1671)
				if (((pre == null()))){
					HX_STACK_LINE(1671)
					old = this->head;
					HX_STACK_LINE(1671)
					ret1 = old->next;
					HX_STACK_LINE(1671)
					this->head = ret1;
					HX_STACK_LINE(1671)
					if (((this->head == null()))){
						HX_STACK_LINE(1671)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(1671)
					old = pre->next;
					HX_STACK_LINE(1671)
					ret1 = old->next;
					HX_STACK_LINE(1671)
					pre->next = ret1;
					HX_STACK_LINE(1671)
					if (((ret1 == null()))){
						HX_STACK_LINE(1671)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(1671)
				{
				}
				HX_STACK_LINE(1671)
				{
					HX_STACK_LINE(1671)
					::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1671)
					{
					}
					HX_STACK_LINE(1671)
					o->elt = null();
					HX_STACK_LINE(1671)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
					HX_STACK_LINE(1671)
					::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1671)
				this->modified = true;
				HX_STACK_LINE(1671)
				(this->length)--;
				HX_STACK_LINE(1671)
				this->pushmod = true;
				HX_STACK_LINE(1671)
				ret1;
			}
			HX_STACK_LINE(1672)
			ret = true;
			HX_STACK_LINE(1673)
			break;
		}
		HX_STACK_LINE(1675)
		pre = cur;
		HX_STACK_LINE(1676)
		cur = cur->next;
	}
	HX_STACK_LINE(1678)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Body_obj::inlined_remove( ::zpp_nape::phys::ZPP_Body obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_remove","zpp_nape/util/Lists.hx",1644);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(1645)
		{
		}
		HX_STACK_LINE(1653)
		{
			HX_STACK_LINE(1653)
			{
			}
			HX_STACK_LINE(1653)
			::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(1653)
			::zpp_nape::util::ZNPNode_ZPP_Body cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1653)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1653)
			while(((cur != null()))){
				HX_STACK_LINE(1653)
				if (((cur->elt == obj))){
					HX_STACK_LINE(1653)
					{
						HX_STACK_LINE(1653)
						{
						}
						HX_STACK_LINE(1653)
						::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1653)
						::zpp_nape::util::ZNPNode_ZPP_Body ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1653)
						if (((pre == null()))){
							HX_STACK_LINE(1653)
							old = this->head;
							HX_STACK_LINE(1653)
							ret1 = old->next;
							HX_STACK_LINE(1653)
							this->head = ret1;
							HX_STACK_LINE(1653)
							if (((this->head == null()))){
								HX_STACK_LINE(1653)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1653)
							old = pre->next;
							HX_STACK_LINE(1653)
							ret1 = old->next;
							HX_STACK_LINE(1653)
							pre->next = ret1;
							HX_STACK_LINE(1653)
							if (((ret1 == null()))){
								HX_STACK_LINE(1653)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(1653)
						{
						}
						HX_STACK_LINE(1653)
						{
							HX_STACK_LINE(1653)
							::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1653)
							{
							}
							HX_STACK_LINE(1653)
							o->elt = null();
							HX_STACK_LINE(1653)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
							HX_STACK_LINE(1653)
							::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1653)
						this->modified = true;
						HX_STACK_LINE(1653)
						(this->length)--;
						HX_STACK_LINE(1653)
						this->pushmod = true;
						HX_STACK_LINE(1653)
						ret1;
					}
					HX_STACK_LINE(1653)
					ret = true;
					HX_STACK_LINE(1653)
					break;
				}
				HX_STACK_LINE(1653)
				pre = cur;
				HX_STACK_LINE(1653)
				cur = cur->next;
			}
			HX_STACK_LINE(1653)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_remove,(void))

bool ZNPList_ZPP_Body_obj::try_remove( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZNPList_ZPP_Body::try_remove","zpp_nape/util/Lists.hx",1619);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1620)
	{
	}
	HX_STACK_LINE(1628)
	::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1629)
	::zpp_nape::util::ZNPNode_ZPP_Body cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1630)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1631)
	while(((cur != null()))){
		HX_STACK_LINE(1632)
		if (((cur->elt == obj))){
			HX_STACK_LINE(1633)
			this->erase(pre);
			HX_STACK_LINE(1634)
			ret = true;
			HX_STACK_LINE(1635)
			break;
		}
		HX_STACK_LINE(1637)
		pre = cur;
		HX_STACK_LINE(1638)
		cur = cur->next;
	}
	HX_STACK_LINE(1640)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,try_remove,return )

Void ZNPList_ZPP_Body_obj::remove( ::zpp_nape::phys::ZPP_Body obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::remove","zpp_nape/util/Lists.hx",1608);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(1609)
		{
		}
		HX_STACK_LINE(1617)
		{
			HX_STACK_LINE(1617)
			{
			}
			HX_STACK_LINE(1617)
			::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(1617)
			::zpp_nape::util::ZNPNode_ZPP_Body cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1617)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1617)
			while(((cur != null()))){
				HX_STACK_LINE(1617)
				if (((cur->elt == obj))){
					HX_STACK_LINE(1617)
					{
						HX_STACK_LINE(1617)
						{
						}
						HX_STACK_LINE(1617)
						::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1617)
						::zpp_nape::util::ZNPNode_ZPP_Body ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1617)
						if (((pre == null()))){
							HX_STACK_LINE(1617)
							old = this->head;
							HX_STACK_LINE(1617)
							ret1 = old->next;
							HX_STACK_LINE(1617)
							this->head = ret1;
							HX_STACK_LINE(1617)
							if (((this->head == null()))){
								HX_STACK_LINE(1617)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1617)
							old = pre->next;
							HX_STACK_LINE(1617)
							ret1 = old->next;
							HX_STACK_LINE(1617)
							pre->next = ret1;
							HX_STACK_LINE(1617)
							if (((ret1 == null()))){
								HX_STACK_LINE(1617)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(1617)
						{
						}
						HX_STACK_LINE(1617)
						{
							HX_STACK_LINE(1617)
							::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1617)
							{
							}
							HX_STACK_LINE(1617)
							o->elt = null();
							HX_STACK_LINE(1617)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
							HX_STACK_LINE(1617)
							::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1617)
						this->modified = true;
						HX_STACK_LINE(1617)
						(this->length)--;
						HX_STACK_LINE(1617)
						this->pushmod = true;
						HX_STACK_LINE(1617)
						ret1;
					}
					HX_STACK_LINE(1617)
					ret = true;
					HX_STACK_LINE(1617)
					break;
				}
				HX_STACK_LINE(1617)
				pre = cur;
				HX_STACK_LINE(1617)
				cur = cur->next;
			}
			HX_STACK_LINE(1617)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,remove,(void))

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_pop_unsafe","zpp_nape/util/Lists.hx",1595);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1596)
	{
	}
	HX_STACK_LINE(1604)
	::zpp_nape::phys::ZPP_Body ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1605)
	this->pop();
	HX_STACK_LINE(1606)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,inlined_pop_unsafe,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::pop_unsafe","zpp_nape/util/Lists.hx",1590);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::phys::ZPP_Body Block( ::zpp_nape::util::ZNPList_ZPP_Body_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1591);
			{
				HX_STACK_LINE(1591)
				{
				}
				HX_STACK_LINE(1591)
				::zpp_nape::phys::ZPP_Body ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1591)
				__this->pop();
				HX_STACK_LINE(1591)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1590)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,pop_unsafe,return )

Void ZNPList_ZPP_Body_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_pop","zpp_nape/util/Lists.hx",1557);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1558)
		{
		}
		HX_STACK_LINE(1566)
		::zpp_nape::util::ZNPNode_ZPP_Body ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1567)
		this->head = ret->next;
		HX_STACK_LINE(1568)
		{
		}
		HX_STACK_LINE(1569)
		{
			HX_STACK_LINE(1570)
			::zpp_nape::util::ZNPNode_ZPP_Body o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1571)
			{
			}
			HX_STACK_LINE(1579)
			o->elt = null();
			HX_STACK_LINE(1580)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
			HX_STACK_LINE(1581)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1586)
		if (((this->head == null()))){
			HX_STACK_LINE(1586)
			this->pushmod = true;
		}
		HX_STACK_LINE(1587)
		this->modified = true;
		HX_STACK_LINE(1588)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,inlined_pop,(void))

Void ZNPList_ZPP_Body_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::pop","zpp_nape/util/Lists.hx",1552);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1553)
		{
		}
		HX_STACK_LINE(1553)
		::zpp_nape::util::ZNPNode_ZPP_Body ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1553)
		this->head = ret->next;
		HX_STACK_LINE(1553)
		{
		}
		HX_STACK_LINE(1553)
		{
			HX_STACK_LINE(1553)
			::zpp_nape::util::ZNPNode_ZPP_Body o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1553)
			{
			}
			HX_STACK_LINE(1553)
			o->elt = null();
			HX_STACK_LINE(1553)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
			HX_STACK_LINE(1553)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1553)
		if (((this->head == null()))){
			HX_STACK_LINE(1553)
			this->pushmod = true;
		}
		HX_STACK_LINE(1553)
		this->modified = true;
		HX_STACK_LINE(1553)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Body cur,::zpp_nape::phys::ZPP_Body o){
	HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_insert","zpp_nape/util/Lists.hx",1509);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(1510)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Body Block( ::zpp_nape::phys::ZPP_Body &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1518);
			{
				HX_STACK_LINE(1519)
				::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1520)
				{
					HX_STACK_LINE(1521)
					if (((::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool == null()))){
						HX_STACK_LINE(1521)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::__new();
					}
					else{
						HX_STACK_LINE(1528)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
						HX_STACK_LINE(1529)
						::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1530)
						ret->next = null();
					}
					HX_STACK_LINE(1535)
					Dynamic();
				}
				HX_STACK_LINE(1537)
				ret->elt = o;
				HX_STACK_LINE(1538)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1518)
	::zpp_nape::util::ZNPNode_ZPP_Body temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1540)
	if (((cur == null()))){
		HX_STACK_LINE(1541)
		temp->next = this->head;
		HX_STACK_LINE(1542)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(1545)
		temp->next = cur->next;
		HX_STACK_LINE(1546)
		cur->next = temp;
	}
	HX_STACK_LINE(1548)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(1549)
	(this->length)++;
	HX_STACK_LINE(1550)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Body_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Body cur,::zpp_nape::phys::ZPP_Body o){
	HX_STACK_PUSH("ZNPList_ZPP_Body::insert","zpp_nape/util/Lists.hx",1504);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Body Block( ::zpp_nape::util::ZNPList_ZPP_Body_obj *__this,::zpp_nape::phys::ZPP_Body &o,::zpp_nape::util::ZNPNode_ZPP_Body &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1505);
			{
				HX_STACK_LINE(1505)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Body Block( ::zpp_nape::phys::ZPP_Body &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1505);
						{
							HX_STACK_LINE(1505)
							::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1505)
							{
								HX_STACK_LINE(1505)
								if (((::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool == null()))){
									HX_STACK_LINE(1505)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::__new();
								}
								else{
									HX_STACK_LINE(1505)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
									HX_STACK_LINE(1505)
									::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1505)
									ret->next = null();
								}
								HX_STACK_LINE(1505)
								Dynamic();
							}
							HX_STACK_LINE(1505)
							ret->elt = o;
							HX_STACK_LINE(1505)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1505)
				::zpp_nape::util::ZNPNode_ZPP_Body temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1505)
				if (((cur == null()))){
					HX_STACK_LINE(1505)
					temp->next = __this->head;
					HX_STACK_LINE(1505)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(1505)
					temp->next = cur->next;
					HX_STACK_LINE(1505)
					cur->next = temp;
				}
				HX_STACK_LINE(1505)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(1505)
				(__this->length)++;
				HX_STACK_LINE(1505)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(1504)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Body_obj,insert,return )

Void ZNPList_ZPP_Body_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Body x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::addAll","zpp_nape/util/Lists.hx",1486);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1487)
		{
		}
		HX_STACK_LINE(1495)
		{
			HX_STACK_LINE(1496)
			::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1497)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1498)
				::zpp_nape::phys::ZPP_Body i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1499)
				this->add(i);
				HX_STACK_LINE(1500)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,addAll,(void))

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::inlined_add( ::zpp_nape::phys::ZPP_Body o){
	HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_add","zpp_nape/util/Lists.hx",1449);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(1450)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Body Block( ::zpp_nape::phys::ZPP_Body &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1458);
			{
				HX_STACK_LINE(1459)
				::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1460)
				{
					HX_STACK_LINE(1461)
					if (((::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool == null()))){
						HX_STACK_LINE(1461)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::__new();
					}
					else{
						HX_STACK_LINE(1468)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
						HX_STACK_LINE(1469)
						::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1470)
						ret->next = null();
					}
					HX_STACK_LINE(1475)
					Dynamic();
				}
				HX_STACK_LINE(1477)
				ret->elt = o;
				HX_STACK_LINE(1478)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1458)
	::zpp_nape::util::ZNPNode_ZPP_Body temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1480)
	temp->next = this->head;
	HX_STACK_LINE(1481)
	this->head = temp;
	HX_STACK_LINE(1482)
	this->modified = true;
	HX_STACK_LINE(1483)
	(this->length)++;
	HX_STACK_LINE(1484)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_add,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::add( ::zpp_nape::phys::ZPP_Body o){
	HX_STACK_PUSH("ZNPList_ZPP_Body::add","zpp_nape/util/Lists.hx",1444);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::phys::ZPP_Body Block( ::zpp_nape::phys::ZPP_Body &o,::zpp_nape::util::ZNPList_ZPP_Body_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1445);
			{
				HX_STACK_LINE(1445)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Body Block( ::zpp_nape::phys::ZPP_Body &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1445);
						{
							HX_STACK_LINE(1445)
							::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1445)
							{
								HX_STACK_LINE(1445)
								if (((::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool == null()))){
									HX_STACK_LINE(1445)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::__new();
								}
								else{
									HX_STACK_LINE(1445)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
									HX_STACK_LINE(1445)
									::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1445)
									ret->next = null();
								}
								HX_STACK_LINE(1445)
								Dynamic();
							}
							HX_STACK_LINE(1445)
							ret->elt = o;
							HX_STACK_LINE(1445)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1445)
				::zpp_nape::util::ZNPNode_ZPP_Body temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1445)
				temp->next = __this->head;
				HX_STACK_LINE(1445)
				__this->head = temp;
				HX_STACK_LINE(1445)
				__this->modified = true;
				HX_STACK_LINE(1445)
				(__this->length)++;
				HX_STACK_LINE(1445)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(1444)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,add,return )

Void ZNPList_ZPP_Body_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Body i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::setbegin","zpp_nape/util/Lists.hx",1439);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(1440)
		this->head = i;
		HX_STACK_LINE(1441)
		this->modified = true;
		HX_STACK_LINE(1442)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::begin","zpp_nape/util/Lists.hx",1431);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1431)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,begin,return )


ZNPList_ZPP_Body_obj::ZNPList_ZPP_Body_obj()
{
}

void ZNPList_ZPP_Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Body);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Body_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Body >(); return inValue; }
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

void ZNPList_ZPP_Body_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Body_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Body_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Body_obj::__mClass;

void ZNPList_ZPP_Body_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Body"), hx::TCanCast< ZNPList_ZPP_Body_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Body_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
