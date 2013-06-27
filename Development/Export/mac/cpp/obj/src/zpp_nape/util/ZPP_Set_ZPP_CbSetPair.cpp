#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_CbSetPair_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::new","zpp_nape/util/RBTree.hx",1064);
{
	HX_STACK_LINE(1105)
	this->colour = (int)0;
	HX_STACK_LINE(1104)
	this->parent = null();
	HX_STACK_LINE(1103)
	this->next = null();
	HX_STACK_LINE(1102)
	this->prev = null();
	HX_STACK_LINE(1101)
	this->data = null();
	HX_STACK_LINE(1100)
	this->swapped = null();
	HX_STACK_LINE(1099)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_CbSetPair_obj::~ZPP_Set_ZPP_CbSetPair_obj() { }

Dynamic ZPP_Set_ZPP_CbSetPair_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_CbSetPair_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_CbSetPair_obj > ZPP_Set_ZPP_CbSetPair_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_CbSetPair_obj > result = new ZPP_Set_ZPP_CbSetPair_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_CbSetPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_CbSetPair_obj > result = new ZPP_Set_ZPP_CbSetPair_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::insert( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::insert","zpp_nape/util/RBTree.hx",1886);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1895)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1896)
	{
		HX_STACK_LINE(1897)
		if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
			HX_STACK_LINE(1897)
			x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
		}
		else{
			HX_STACK_LINE(1904)
			x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
			HX_STACK_LINE(1905)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
			HX_STACK_LINE(1906)
			x->next = null();
		}
		HX_STACK_LINE(1911)
		Dynamic();
	}
	HX_STACK_LINE(1913)
	x->data = obj;
	HX_STACK_LINE(1914)
	if (((this->parent == null()))){
		HX_STACK_LINE(1914)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(1916)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1917)
		while((true)){
			HX_STACK_LINE(1917)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(1918)
				if (((cur->prev == null()))){
					HX_STACK_LINE(1920)
					cur->prev = x;
					HX_STACK_LINE(1921)
					x->parent = cur;
					HX_STACK_LINE(1922)
					break;
				}
				else{
					HX_STACK_LINE(1924)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(1926)
				if (((cur->next == null()))){
					HX_STACK_LINE(1928)
					cur->next = x;
					HX_STACK_LINE(1929)
					x->parent = cur;
					HX_STACK_LINE(1930)
					break;
				}
				else{
					HX_STACK_LINE(1932)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(1936)
	if (((x->parent == null()))){
		HX_STACK_LINE(1936)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(1938)
		x->colour = (int)0;
		HX_STACK_LINE(1939)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(1939)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(1949)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::try_insert( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::try_insert","zpp_nape/util/RBTree.hx",1794);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1795)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1796)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1797)
	if (((this->parent == null()))){
		HX_STACK_LINE(1798)
		{
			HX_STACK_LINE(1799)
			if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(1799)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
			}
			else{
				HX_STACK_LINE(1806)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(1807)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
				HX_STACK_LINE(1808)
				x->next = null();
			}
			HX_STACK_LINE(1813)
			Dynamic();
		}
		HX_STACK_LINE(1815)
		x->data = obj;
		HX_STACK_LINE(1816)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(1819)
		cur = this->parent;
		HX_STACK_LINE(1820)
		while((true)){
			HX_STACK_LINE(1820)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(1821)
				if (((cur->prev == null()))){
					HX_STACK_LINE(1823)
					{
						HX_STACK_LINE(1824)
						if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
							HX_STACK_LINE(1824)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
						}
						else{
							HX_STACK_LINE(1831)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
							HX_STACK_LINE(1832)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
							HX_STACK_LINE(1833)
							x->next = null();
						}
						HX_STACK_LINE(1838)
						Dynamic();
					}
					HX_STACK_LINE(1840)
					x->data = obj;
					HX_STACK_LINE(1841)
					cur->prev = x;
					HX_STACK_LINE(1842)
					x->parent = cur;
					HX_STACK_LINE(1843)
					break;
				}
				else{
					HX_STACK_LINE(1845)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(1847)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(1847)
					if (((cur->next == null()))){
						HX_STACK_LINE(1849)
						{
							HX_STACK_LINE(1850)
							if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
								HX_STACK_LINE(1850)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
							}
							else{
								HX_STACK_LINE(1857)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
								HX_STACK_LINE(1858)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
								HX_STACK_LINE(1859)
								x->next = null();
							}
							HX_STACK_LINE(1864)
							Dynamic();
						}
						HX_STACK_LINE(1866)
						x->data = obj;
						HX_STACK_LINE(1867)
						cur->next = x;
						HX_STACK_LINE(1868)
						x->parent = cur;
						HX_STACK_LINE(1869)
						break;
					}
					else{
						HX_STACK_LINE(1871)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(1873)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(1876)
	if (((x == null()))){
		HX_STACK_LINE(1876)
		return cur;
	}
	else{
		HX_STACK_LINE(1878)
		if (((x->parent == null()))){
			HX_STACK_LINE(1878)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(1880)
			x->colour = (int)0;
			HX_STACK_LINE(1881)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(1881)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(1883)
		return x;
	}
	HX_STACK_LINE(1876)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,try_insert,return )

bool ZPP_Set_ZPP_CbSetPair_obj::try_insert_bool( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::try_insert_bool","zpp_nape/util/RBTree.hx",1702);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1703)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1704)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1705)
	if (((this->parent == null()))){
		HX_STACK_LINE(1706)
		{
			HX_STACK_LINE(1707)
			if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(1707)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
			}
			else{
				HX_STACK_LINE(1714)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(1715)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
				HX_STACK_LINE(1716)
				x->next = null();
			}
			HX_STACK_LINE(1721)
			Dynamic();
		}
		HX_STACK_LINE(1723)
		x->data = obj;
		HX_STACK_LINE(1724)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(1727)
		cur = this->parent;
		HX_STACK_LINE(1728)
		while((true)){
			HX_STACK_LINE(1728)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(1729)
				if (((cur->prev == null()))){
					HX_STACK_LINE(1731)
					{
						HX_STACK_LINE(1732)
						if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
							HX_STACK_LINE(1732)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
						}
						else{
							HX_STACK_LINE(1739)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
							HX_STACK_LINE(1740)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
							HX_STACK_LINE(1741)
							x->next = null();
						}
						HX_STACK_LINE(1746)
						Dynamic();
					}
					HX_STACK_LINE(1748)
					x->data = obj;
					HX_STACK_LINE(1749)
					cur->prev = x;
					HX_STACK_LINE(1750)
					x->parent = cur;
					HX_STACK_LINE(1751)
					break;
				}
				else{
					HX_STACK_LINE(1753)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(1755)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(1755)
					if (((cur->next == null()))){
						HX_STACK_LINE(1757)
						{
							HX_STACK_LINE(1758)
							if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
								HX_STACK_LINE(1758)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
							}
							else{
								HX_STACK_LINE(1765)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
								HX_STACK_LINE(1766)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
								HX_STACK_LINE(1767)
								x->next = null();
							}
							HX_STACK_LINE(1772)
							Dynamic();
						}
						HX_STACK_LINE(1774)
						x->data = obj;
						HX_STACK_LINE(1775)
						cur->next = x;
						HX_STACK_LINE(1776)
						x->parent = cur;
						HX_STACK_LINE(1777)
						break;
					}
					else{
						HX_STACK_LINE(1779)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(1781)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(1784)
	if (((x == null()))){
		HX_STACK_LINE(1784)
		return false;
	}
	else{
		HX_STACK_LINE(1786)
		if (((x->parent == null()))){
			HX_STACK_LINE(1786)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(1788)
			x->colour = (int)0;
			HX_STACK_LINE(1789)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(1789)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(1791)
		return true;
	}
	HX_STACK_LINE(1784)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_CbSetPair_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::__fix_dbl_red","zpp_nape/util/RBTree.hx",1613);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1613)
		while((true)){
			HX_STACK_LINE(1615)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(1616)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(1617)
			if (((g == null()))){
				HX_STACK_LINE(1618)
				par->colour = (int)1;
				HX_STACK_LINE(1619)
				break;
			}
			HX_STACK_LINE(1621)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(1622)
			if (((par == g->prev))){
				HX_STACK_LINE(1623)
				n3 = g;
				HX_STACK_LINE(1624)
				t4 = g->next;
				HX_STACK_LINE(1625)
				if (((x == par->prev))){
					HX_STACK_LINE(1626)
					n1 = x;
					HX_STACK_LINE(1627)
					n2 = par;
					HX_STACK_LINE(1628)
					t1 = x->prev;
					HX_STACK_LINE(1629)
					t2 = x->next;
					HX_STACK_LINE(1630)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(1633)
					n1 = par;
					HX_STACK_LINE(1634)
					n2 = x;
					HX_STACK_LINE(1635)
					t1 = par->prev;
					HX_STACK_LINE(1636)
					t2 = x->prev;
					HX_STACK_LINE(1637)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(1641)
				n1 = g;
				HX_STACK_LINE(1642)
				t1 = g->prev;
				HX_STACK_LINE(1643)
				if (((x == par->prev))){
					HX_STACK_LINE(1644)
					n2 = x;
					HX_STACK_LINE(1645)
					n3 = par;
					HX_STACK_LINE(1646)
					t2 = x->prev;
					HX_STACK_LINE(1647)
					t3 = x->next;
					HX_STACK_LINE(1648)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(1651)
					n2 = par;
					HX_STACK_LINE(1652)
					n3 = x;
					HX_STACK_LINE(1653)
					t2 = par->prev;
					HX_STACK_LINE(1654)
					t3 = x->prev;
					HX_STACK_LINE(1655)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(1658)
			{
				HX_STACK_LINE(1659)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(1660)
				if (((par1 == null()))){
					HX_STACK_LINE(1660)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(1663)
					if (((par1->prev == g))){
						HX_STACK_LINE(1663)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(1664)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(1665)
				if (((n2 != null()))){
					HX_STACK_LINE(1665)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(1667)
			{
				HX_STACK_LINE(1668)
				n1->prev = t1;
				HX_STACK_LINE(1669)
				if (((t1 != null()))){
					HX_STACK_LINE(1669)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(1671)
			{
				HX_STACK_LINE(1672)
				n1->next = t2;
				HX_STACK_LINE(1673)
				if (((t2 != null()))){
					HX_STACK_LINE(1673)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(1675)
			{
				HX_STACK_LINE(1676)
				n2->prev = n1;
				HX_STACK_LINE(1677)
				if (((n1 != null()))){
					HX_STACK_LINE(1677)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(1679)
			{
				HX_STACK_LINE(1680)
				n2->next = n3;
				HX_STACK_LINE(1681)
				if (((n3 != null()))){
					HX_STACK_LINE(1681)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(1683)
			{
				HX_STACK_LINE(1684)
				n3->prev = t3;
				HX_STACK_LINE(1685)
				if (((t3 != null()))){
					HX_STACK_LINE(1685)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(1687)
			{
				HX_STACK_LINE(1688)
				n3->next = t4;
				HX_STACK_LINE(1689)
				if (((t4 != null()))){
					HX_STACK_LINE(1689)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(1691)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(1692)
			n1->colour = (int)1;
			HX_STACK_LINE(1693)
			n3->colour = (int)1;
			HX_STACK_LINE(1694)
			if (((n2 == this->parent))){
				HX_STACK_LINE(1694)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(1695)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(1696)
					x = n2;
					HX_STACK_LINE(1697)
					continue;
				}
			}
			HX_STACK_LINE(1699)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_CbSetPair_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::__fix_neg_red","zpp_nape/util/RBTree.hx",1546);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(1547)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj *__this,::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &negred,::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &parent){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",1548);
				{
					HX_STACK_LINE(1549)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(1550)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(1551)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(1552)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(1553)
					nl->colour = (int)0;
					HX_STACK_LINE(1554)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(1555)
					{
						HX_STACK_LINE(1556)
						negred->next = trl;
						HX_STACK_LINE(1557)
						if (((trl != null()))){
							HX_STACK_LINE(1557)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(1559)
					{
						HX_STACK_LINE(1560)
						::zpp_nape::callbacks::ZPP_CbSetPair t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1561)
						parent->data = nr->data;
						HX_STACK_LINE(1562)
						nr->data = t;
					}
					HX_STACK_LINE(1564)
					if (((__this->swapped != null()))){
						HX_STACK_LINE(1564)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(1565)
					{
						HX_STACK_LINE(1566)
						nr->prev = trr;
						HX_STACK_LINE(1567)
						if (((trr != null()))){
							HX_STACK_LINE(1567)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(1569)
					{
						HX_STACK_LINE(1570)
						nr->next = parent->next;
						HX_STACK_LINE(1571)
						if (((parent->next != null()))){
							HX_STACK_LINE(1571)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(1573)
					{
						HX_STACK_LINE(1574)
						parent->next = nr;
						HX_STACK_LINE(1575)
						if (((nr != null()))){
							HX_STACK_LINE(1575)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(1577)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj *__this,::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &negred,::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &parent){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",1579);
				{
					HX_STACK_LINE(1580)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(1581)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(1582)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(1583)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(1584)
					nl->colour = (int)0;
					HX_STACK_LINE(1585)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(1586)
					{
						HX_STACK_LINE(1587)
						negred->prev = trl;
						HX_STACK_LINE(1588)
						if (((trl != null()))){
							HX_STACK_LINE(1588)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(1590)
					{
						HX_STACK_LINE(1591)
						::zpp_nape::callbacks::ZPP_CbSetPair t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1592)
						parent->data = nr->data;
						HX_STACK_LINE(1593)
						nr->data = t;
					}
					HX_STACK_LINE(1595)
					if (((__this->swapped != null()))){
						HX_STACK_LINE(1595)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(1596)
					{
						HX_STACK_LINE(1597)
						nr->next = trr;
						HX_STACK_LINE(1598)
						if (((trr != null()))){
							HX_STACK_LINE(1598)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(1600)
					{
						HX_STACK_LINE(1601)
						nr->prev = parent->prev;
						HX_STACK_LINE(1602)
						if (((parent->prev != null()))){
							HX_STACK_LINE(1602)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(1604)
					{
						HX_STACK_LINE(1605)
						parent->prev = nr;
						HX_STACK_LINE(1606)
						if (((nr != null()))){
							HX_STACK_LINE(1606)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(1608)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(1548)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(_Function_1_1::Block(this,negred,parent)) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(_Function_1_2::Block(this,negred,parent)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(1610)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(1610)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(1611)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(1611)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::clear_node","zpp_nape/util/RBTree.hx",1511);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(1520)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(1521)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1522)
	if (((ret != null()))){
		HX_STACK_LINE(1523)
		if (((node == ret->prev))){
			HX_STACK_LINE(1523)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(1524)
			ret->next = null();
		}
		HX_STACK_LINE(1525)
		node->parent = null();
	}
	HX_STACK_LINE(1527)
	{
		HX_STACK_LINE(1528)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1537)
		{
			HX_STACK_LINE(1537)
			o->data = null();
			HX_STACK_LINE(1537)
			o->lt = null();
			HX_STACK_LINE(1537)
			o->swapped = null();
		}
		HX_STACK_LINE(1538)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
		HX_STACK_LINE(1539)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1544)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_CbSetPair_obj,clear_node,return )

Void ZPP_Set_ZPP_CbSetPair_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::clear_with","zpp_nape/util/RBTree.hx",1502);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(1502)
		if (((this->parent == null()))){
			HX_STACK_LINE(1503)
			return null();
		}
		else{
			HX_STACK_LINE(1505)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1506)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &cur,Dynamic &lambda){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",1506);
						{
							HX_STACK_LINE(1506)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(1506)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1506)
							if (((ret != null()))){
								HX_STACK_LINE(1506)
								if (((cur == ret->prev))){
									HX_STACK_LINE(1506)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(1506)
									ret->next = null();
								}
								HX_STACK_LINE(1506)
								cur->parent = null();
							}
							HX_STACK_LINE(1506)
							{
								HX_STACK_LINE(1506)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1506)
								{
									HX_STACK_LINE(1506)
									o->data = null();
									HX_STACK_LINE(1506)
									o->lt = null();
									HX_STACK_LINE(1506)
									o->swapped = null();
								}
								HX_STACK_LINE(1506)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
								HX_STACK_LINE(1506)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1506)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1506)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(_Function_3_1::Block(cur,lambda)) )) );
			}
			HX_STACK_LINE(1507)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,clear_with,(void))

Void ZPP_Set_ZPP_CbSetPair_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::clear","zpp_nape/util/RBTree.hx",1498);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1498)
		if (((this->parent == null()))){
			HX_STACK_LINE(1499)
			Dynamic();
		}
		else{
			HX_STACK_LINE(1499)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1499)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",1499);
						{
							HX_STACK_LINE(1499)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1499)
							if (((ret != null()))){
								HX_STACK_LINE(1499)
								if (((cur == ret->prev))){
									HX_STACK_LINE(1499)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(1499)
									ret->next = null();
								}
								HX_STACK_LINE(1499)
								cur->parent = null();
							}
							HX_STACK_LINE(1499)
							{
								HX_STACK_LINE(1499)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1499)
								{
									HX_STACK_LINE(1499)
									o->data = null();
									HX_STACK_LINE(1499)
									o->lt = null();
									HX_STACK_LINE(1499)
									o->swapped = null();
								}
								HX_STACK_LINE(1499)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
								HX_STACK_LINE(1499)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1499)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1499)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(1499)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,clear,(void))

Void ZPP_Set_ZPP_CbSetPair_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::remove_node","zpp_nape/util/RBTree.hx",1378);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(1387)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(1388)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(1389)
			while(((sm->prev != null()))){
				HX_STACK_LINE(1389)
				sm = sm->prev;
			}
			HX_STACK_LINE(1390)
			{
				HX_STACK_LINE(1391)
				::zpp_nape::callbacks::ZPP_CbSetPair t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1392)
				cur->data = sm->data;
				HX_STACK_LINE(1393)
				sm->data = t;
			}
			HX_STACK_LINE(1395)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(1395)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(1396)
			cur = sm;
		}
		HX_STACK_LINE(1406)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(1407)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(1407)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(1408)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(1409)
				if (((cur->parent != null()))){
					HX_STACK_LINE(1410)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(1411)
					while((true)){
						HX_STACK_LINE(1412)
						(parent->colour)++;
						HX_STACK_LINE(1413)
						(parent->prev->colour)--;
						HX_STACK_LINE(1414)
						(parent->next->colour)--;
						HX_STACK_LINE(1415)
						{
							HX_STACK_LINE(1416)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(1417)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(1418)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(1419)
								break;
							}
							else{
								HX_STACK_LINE(1421)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(1422)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(1424)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(1425)
										break;
									}
									HX_STACK_LINE(1428)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(1430)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(1431)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(1436)
						{
							HX_STACK_LINE(1437)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(1438)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(1439)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(1440)
								break;
							}
							else{
								HX_STACK_LINE(1442)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(1443)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(1445)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(1446)
										break;
									}
									HX_STACK_LINE(1449)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(1451)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(1452)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(1457)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(1457)
							if (((parent->parent == null()))){
								HX_STACK_LINE(1458)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(1462)
								parent = parent->parent;
								HX_STACK_LINE(1463)
								continue;
							}
						}
						HX_STACK_LINE(1466)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1470)
		{
			HX_STACK_LINE(1471)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(1472)
			if (((par == null()))){
				HX_STACK_LINE(1472)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(1475)
				if (((par->prev == cur))){
					HX_STACK_LINE(1475)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(1476)
					par->next = child;
				}
			}
			HX_STACK_LINE(1477)
			if (((child != null()))){
				HX_STACK_LINE(1477)
				child->parent = par;
			}
		}
		HX_STACK_LINE(1479)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(1480)
		{
			HX_STACK_LINE(1481)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1490)
			{
				HX_STACK_LINE(1490)
				o->data = null();
				HX_STACK_LINE(1490)
				o->lt = null();
				HX_STACK_LINE(1490)
				o->swapped = null();
			}
			HX_STACK_LINE(1491)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
			HX_STACK_LINE(1492)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,remove_node,(void))

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::predecessor( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::predecessor","zpp_nape/util/RBTree.hx",1366);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1375)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(1376)
	return (  (((node == null()))) ? ::zpp_nape::callbacks::ZPP_CbSetPair(null()) : ::zpp_nape::callbacks::ZPP_CbSetPair(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,predecessor,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::successor( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::successor","zpp_nape/util/RBTree.hx",1354);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1363)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(1364)
	return (  (((node == null()))) ? ::zpp_nape::callbacks::ZPP_CbSetPair(null()) : ::zpp_nape::callbacks::ZPP_CbSetPair(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::predecessor_node","zpp_nape/util/RBTree.hx",1331);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(1340)
	if (((cur->prev != null()))){
		HX_STACK_LINE(1341)
		cur = cur->prev;
		HX_STACK_LINE(1342)
		while(((cur->next != null()))){
			HX_STACK_LINE(1342)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(1345)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1346)
		cur = cur->parent;
		HX_STACK_LINE(1347)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(1348)
			pre = cur;
			HX_STACK_LINE(1349)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(1352)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::successor_node","zpp_nape/util/RBTree.hx",1308);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(1317)
	if (((cur->next != null()))){
		HX_STACK_LINE(1318)
		cur = cur->next;
		HX_STACK_LINE(1319)
		while(((cur->prev != null()))){
			HX_STACK_LINE(1319)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(1322)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1323)
		cur = cur->parent;
		HX_STACK_LINE(1324)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(1325)
			pre = cur;
			HX_STACK_LINE(1326)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(1329)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,successor_node,return )

Void ZPP_Set_ZPP_CbSetPair_obj::remove( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::remove","zpp_nape/util/RBTree.hx",1296);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(1297)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1306)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,remove,(void))

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::pop_front","zpp_nape/util/RBTree.hx",1281);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1290)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1291)
	while(((cur->prev != null()))){
		HX_STACK_LINE(1291)
		cur = cur->prev;
	}
	HX_STACK_LINE(1292)
	::zpp_nape::callbacks::ZPP_CbSetPair ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1293)
	this->remove_node(cur);
	HX_STACK_LINE(1294)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,pop_front,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::first","zpp_nape/util/RBTree.hx",1268);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1277)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1278)
	while(((cur->prev != null()))){
		HX_STACK_LINE(1278)
		cur = cur->prev;
	}
	HX_STACK_LINE(1279)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,first,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::lower_bound( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::lower_bound","zpp_nape/util/RBTree.hx",1231);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj *__this,::zpp_nape::callbacks::ZPP_CbSetPair &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",1232);
			{
				HX_STACK_LINE(1233)
				::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1234)
				if ((!(__this->empty()))){
					HX_STACK_LINE(1244)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
					HX_STACK_LINE(1245)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(1245)
						set_ite = set_ite->prev;
					}
					HX_STACK_LINE(1246)
					while(((set_ite != null()))){
						HX_STACK_LINE(1247)
						::zpp_nape::callbacks::ZPP_CbSetPair elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
						HX_STACK_LINE(1248)
						if ((!(__this->lt(elt,obj)))){
							HX_STACK_LINE(1250)
							ret = elt;
							HX_STACK_LINE(1251)
							break;
						}
						HX_STACK_LINE(1254)
						if (((set_ite->next != null()))){
							HX_STACK_LINE(1255)
							set_ite = set_ite->next;
							HX_STACK_LINE(1256)
							while(((set_ite->prev != null()))){
								HX_STACK_LINE(1256)
								set_ite = set_ite->prev;
							}
						}
						else{
							HX_STACK_LINE(1259)
							while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
								HX_STACK_LINE(1259)
								set_ite = set_ite->parent;
							}
							HX_STACK_LINE(1260)
							set_ite = set_ite->parent;
						}
					}
				}
				HX_STACK_LINE(1265)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1231)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::find_weak( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::find_weak","zpp_nape/util/RBTree.hx",1222);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1223)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1224)
	while(((cur != null()))){
		HX_STACK_LINE(1224)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(1225)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(1226)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(1226)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(1227)
				break;
			}
		}
	}
	HX_STACK_LINE(1229)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,find_weak,return )

bool ZPP_Set_ZPP_CbSetPair_obj::has_weak( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::has_weak","zpp_nape/util/RBTree.hx",1219);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1219)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::find( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::find","zpp_nape/util/RBTree.hx",1211);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1212)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1213)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(1213)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(1214)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(1215)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(1217)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,find,return )

bool ZPP_Set_ZPP_CbSetPair_obj::has( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::has","zpp_nape/util/RBTree.hx",1208);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1208)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,has,return )

int ZPP_Set_ZPP_CbSetPair_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::size","zpp_nape/util/RBTree.hx",1178);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1179)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1180)
	if ((!(this->empty()))){
		HX_STACK_LINE(1190)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(1191)
		while(((set_ite->prev != null()))){
			HX_STACK_LINE(1191)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(1192)
		while(((set_ite != null()))){
			HX_STACK_LINE(1193)
			::zpp_nape::callbacks::ZPP_CbSetPair i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1194)
			(ret)++;
			HX_STACK_LINE(1195)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(1196)
				set_ite = set_ite->next;
				HX_STACK_LINE(1197)
				while(((set_ite->prev != null()))){
					HX_STACK_LINE(1197)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(1200)
				while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
					HX_STACK_LINE(1200)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(1201)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(1206)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,size,return )

bool ZPP_Set_ZPP_CbSetPair_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::singular","zpp_nape/util/RBTree.hx",1175);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1175)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,singular,return )

bool ZPP_Set_ZPP_CbSetPair_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::empty","zpp_nape/util/RBTree.hx",1172);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1172)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,empty,return )

bool ZPP_Set_ZPP_CbSetPair_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::verify","zpp_nape/util/RBTree.hx",1107);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1108)
	if ((!(this->empty()))){
		HX_STACK_LINE(1118)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(1119)
		while(((set_ite->prev != null()))){
			HX_STACK_LINE(1119)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(1120)
		while(((set_ite != null()))){
			HX_STACK_LINE(1121)
			::zpp_nape::callbacks::ZPP_CbSetPair i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1122)
			{
				HX_STACK_LINE(1123)
				bool prei = true;		HX_STACK_VAR(prei,"prei");
				HX_STACK_LINE(1124)
				if ((!(this->empty()))){
					HX_STACK_LINE(1134)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
					HX_STACK_LINE(1135)
					while(((set_ite1->prev != null()))){
						HX_STACK_LINE(1135)
						set_ite1 = set_ite1->prev;
					}
					HX_STACK_LINE(1136)
					while(((set_ite1 != null()))){
						HX_STACK_LINE(1137)
						::zpp_nape::callbacks::ZPP_CbSetPair j = set_ite1->data;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1138)
						if ((!(prei))){
							HX_STACK_LINE(1139)
							if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
								HX_STACK_LINE(1140)
								return false;
							}
						}
						else{
							HX_STACK_LINE(1142)
							if (((i == j))){
								HX_STACK_LINE(1142)
								prei = false;
							}
							else{
								HX_STACK_LINE(1143)
								if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
									HX_STACK_LINE(1144)
									return false;
								}
							}
						}
						HX_STACK_LINE(1147)
						if (((set_ite1->next != null()))){
							HX_STACK_LINE(1148)
							set_ite1 = set_ite1->next;
							HX_STACK_LINE(1149)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(1149)
								set_ite1 = set_ite1->prev;
							}
						}
						else{
							HX_STACK_LINE(1152)
							while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
								HX_STACK_LINE(1152)
								set_ite1 = set_ite1->parent;
							}
							HX_STACK_LINE(1153)
							set_ite1 = set_ite1->parent;
						}
					}
				}
			}
			HX_STACK_LINE(1159)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(1160)
				set_ite = set_ite->next;
				HX_STACK_LINE(1161)
				while(((set_ite->prev != null()))){
					HX_STACK_LINE(1161)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(1164)
				while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
					HX_STACK_LINE(1164)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(1165)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(1170)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,verify,return )

Void ZPP_Set_ZPP_CbSetPair_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::alloc","zpp_nape/util/RBTree.hx",1098);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,alloc,(void))

Void ZPP_Set_ZPP_CbSetPair_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::free","zpp_nape/util/RBTree.hx",1091);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1092)
		this->data = null();
		HX_STACK_LINE(1093)
		this->lt = null();
		HX_STACK_LINE(1094)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;


ZPP_Set_ZPP_CbSetPair_obj::ZPP_Set_ZPP_CbSetPair_obj()
{
}

void ZPP_Set_ZPP_CbSetPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_CbSetPair);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_CbSetPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_CbSetPair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { return lt; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"find") ) { return find_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"verify") ) { return verify_dyn(); }
		if (HX_FIELD_EQ(inName,"colour") ) { return colour; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { return swapped; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"has_weak") ) { return has_weak_dyn(); }
		if (HX_FIELD_EQ(inName,"singular") ) { return singular_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"successor") ) { return successor_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_front") ) { return pop_front_dyn(); }
		if (HX_FIELD_EQ(inName,"find_weak") ) { return find_weak_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"try_insert") ) { return try_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"clear_node") ) { return clear_node_dyn(); }
		if (HX_FIELD_EQ(inName,"clear_with") ) { return clear_with_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"remove_node") ) { return remove_node_dyn(); }
		if (HX_FIELD_EQ(inName,"predecessor") ) { return predecessor_dyn(); }
		if (HX_FIELD_EQ(inName,"lower_bound") ) { return lower_bound_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__fix_dbl_red") ) { return __fix_dbl_red_dyn(); }
		if (HX_FIELD_EQ(inName,"__fix_neg_red") ) { return __fix_neg_red_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"successor_node") ) { return successor_node_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"try_insert_bool") ) { return try_insert_bool_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"predecessor_node") ) { return predecessor_node_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Set_ZPP_CbSetPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSetPair >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_CbSetPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("colour"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("prev"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("insert"),
	HX_CSTRING("try_insert"),
	HX_CSTRING("try_insert_bool"),
	HX_CSTRING("__fix_dbl_red"),
	HX_CSTRING("__fix_neg_red"),
	HX_CSTRING("clear_node"),
	HX_CSTRING("clear_with"),
	HX_CSTRING("clear"),
	HX_CSTRING("remove_node"),
	HX_CSTRING("predecessor"),
	HX_CSTRING("successor"),
	HX_CSTRING("predecessor_node"),
	HX_CSTRING("successor_node"),
	HX_CSTRING("remove"),
	HX_CSTRING("pop_front"),
	HX_CSTRING("first"),
	HX_CSTRING("lower_bound"),
	HX_CSTRING("find_weak"),
	HX_CSTRING("has_weak"),
	HX_CSTRING("find"),
	HX_CSTRING("has"),
	HX_CSTRING("size"),
	HX_CSTRING("singular"),
	HX_CSTRING("empty"),
	HX_CSTRING("verify"),
	HX_CSTRING("colour"),
	HX_CSTRING("parent"),
	HX_CSTRING("next"),
	HX_CSTRING("prev"),
	HX_CSTRING("data"),
	HX_CSTRING("swapped"),
	HX_CSTRING("lt"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_CbSetPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_CbSetPair_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_CbSetPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_CbSetPair_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_CbSetPair_obj::__mClass;

void ZPP_Set_ZPP_CbSetPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_CbSetPair"), hx::TCanCast< ZPP_Set_ZPP_CbSetPair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_CbSetPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
