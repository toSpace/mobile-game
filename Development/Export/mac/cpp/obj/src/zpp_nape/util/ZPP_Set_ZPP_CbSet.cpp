#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSet
#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_CbSet_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::new","zpp_nape/util/RBTree.hx",6398);
{
	HX_STACK_LINE(6439)
	this->colour = (int)0;
	HX_STACK_LINE(6438)
	this->parent = null();
	HX_STACK_LINE(6437)
	this->next = null();
	HX_STACK_LINE(6436)
	this->prev = null();
	HX_STACK_LINE(6435)
	this->data = null();
	HX_STACK_LINE(6434)
	this->swapped = null();
	HX_STACK_LINE(6433)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_CbSet_obj::~ZPP_Set_ZPP_CbSet_obj() { }

Dynamic ZPP_Set_ZPP_CbSet_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_CbSet_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_CbSet_obj > ZPP_Set_ZPP_CbSet_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_CbSet_obj > result = new ZPP_Set_ZPP_CbSet_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_CbSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_CbSet_obj > result = new ZPP_Set_ZPP_CbSet_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::insert( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::insert","zpp_nape/util/RBTree.hx",7220);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7229)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(7230)
	{
		HX_STACK_LINE(7231)
		if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
			HX_STACK_LINE(7231)
			x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
		}
		else{
			HX_STACK_LINE(7238)
			x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(7239)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
			HX_STACK_LINE(7240)
			x->next = null();
		}
		HX_STACK_LINE(7245)
		Dynamic();
	}
	HX_STACK_LINE(7247)
	x->data = obj;
	HX_STACK_LINE(7248)
	if (((this->parent == null()))){
		HX_STACK_LINE(7248)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(7250)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7251)
		while((true)){
			HX_STACK_LINE(7251)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(7252)
				if (((cur->prev == null()))){
					HX_STACK_LINE(7254)
					cur->prev = x;
					HX_STACK_LINE(7255)
					x->parent = cur;
					HX_STACK_LINE(7256)
					break;
				}
				else{
					HX_STACK_LINE(7258)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(7260)
				if (((cur->next == null()))){
					HX_STACK_LINE(7262)
					cur->next = x;
					HX_STACK_LINE(7263)
					x->parent = cur;
					HX_STACK_LINE(7264)
					break;
				}
				else{
					HX_STACK_LINE(7266)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(7270)
	if (((x->parent == null()))){
		HX_STACK_LINE(7270)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(7272)
		x->colour = (int)0;
		HX_STACK_LINE(7273)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(7273)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(7283)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::try_insert( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::try_insert","zpp_nape/util/RBTree.hx",7128);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7129)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(7130)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7131)
	if (((this->parent == null()))){
		HX_STACK_LINE(7132)
		{
			HX_STACK_LINE(7133)
			if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
				HX_STACK_LINE(7133)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
			}
			else{
				HX_STACK_LINE(7140)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(7141)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
				HX_STACK_LINE(7142)
				x->next = null();
			}
			HX_STACK_LINE(7147)
			Dynamic();
		}
		HX_STACK_LINE(7149)
		x->data = obj;
		HX_STACK_LINE(7150)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(7153)
		cur = this->parent;
		HX_STACK_LINE(7154)
		while((true)){
			HX_STACK_LINE(7154)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(7155)
				if (((cur->prev == null()))){
					HX_STACK_LINE(7157)
					{
						HX_STACK_LINE(7158)
						if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
							HX_STACK_LINE(7158)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
						}
						else{
							HX_STACK_LINE(7165)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
							HX_STACK_LINE(7166)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
							HX_STACK_LINE(7167)
							x->next = null();
						}
						HX_STACK_LINE(7172)
						Dynamic();
					}
					HX_STACK_LINE(7174)
					x->data = obj;
					HX_STACK_LINE(7175)
					cur->prev = x;
					HX_STACK_LINE(7176)
					x->parent = cur;
					HX_STACK_LINE(7177)
					break;
				}
				else{
					HX_STACK_LINE(7179)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(7181)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(7181)
					if (((cur->next == null()))){
						HX_STACK_LINE(7183)
						{
							HX_STACK_LINE(7184)
							if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
								HX_STACK_LINE(7184)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
							}
							else{
								HX_STACK_LINE(7191)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
								HX_STACK_LINE(7192)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
								HX_STACK_LINE(7193)
								x->next = null();
							}
							HX_STACK_LINE(7198)
							Dynamic();
						}
						HX_STACK_LINE(7200)
						x->data = obj;
						HX_STACK_LINE(7201)
						cur->next = x;
						HX_STACK_LINE(7202)
						x->parent = cur;
						HX_STACK_LINE(7203)
						break;
					}
					else{
						HX_STACK_LINE(7205)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(7207)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(7210)
	if (((x == null()))){
		HX_STACK_LINE(7210)
		return cur;
	}
	else{
		HX_STACK_LINE(7212)
		if (((x->parent == null()))){
			HX_STACK_LINE(7212)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(7214)
			x->colour = (int)0;
			HX_STACK_LINE(7215)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(7215)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(7217)
		return x;
	}
	HX_STACK_LINE(7210)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,try_insert,return )

bool ZPP_Set_ZPP_CbSet_obj::try_insert_bool( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::try_insert_bool","zpp_nape/util/RBTree.hx",7036);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7037)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(7038)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7039)
	if (((this->parent == null()))){
		HX_STACK_LINE(7040)
		{
			HX_STACK_LINE(7041)
			if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
				HX_STACK_LINE(7041)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
			}
			else{
				HX_STACK_LINE(7048)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(7049)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
				HX_STACK_LINE(7050)
				x->next = null();
			}
			HX_STACK_LINE(7055)
			Dynamic();
		}
		HX_STACK_LINE(7057)
		x->data = obj;
		HX_STACK_LINE(7058)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(7061)
		cur = this->parent;
		HX_STACK_LINE(7062)
		while((true)){
			HX_STACK_LINE(7062)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(7063)
				if (((cur->prev == null()))){
					HX_STACK_LINE(7065)
					{
						HX_STACK_LINE(7066)
						if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
							HX_STACK_LINE(7066)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
						}
						else{
							HX_STACK_LINE(7073)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
							HX_STACK_LINE(7074)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
							HX_STACK_LINE(7075)
							x->next = null();
						}
						HX_STACK_LINE(7080)
						Dynamic();
					}
					HX_STACK_LINE(7082)
					x->data = obj;
					HX_STACK_LINE(7083)
					cur->prev = x;
					HX_STACK_LINE(7084)
					x->parent = cur;
					HX_STACK_LINE(7085)
					break;
				}
				else{
					HX_STACK_LINE(7087)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(7089)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(7089)
					if (((cur->next == null()))){
						HX_STACK_LINE(7091)
						{
							HX_STACK_LINE(7092)
							if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
								HX_STACK_LINE(7092)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
							}
							else{
								HX_STACK_LINE(7099)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
								HX_STACK_LINE(7100)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
								HX_STACK_LINE(7101)
								x->next = null();
							}
							HX_STACK_LINE(7106)
							Dynamic();
						}
						HX_STACK_LINE(7108)
						x->data = obj;
						HX_STACK_LINE(7109)
						cur->next = x;
						HX_STACK_LINE(7110)
						x->parent = cur;
						HX_STACK_LINE(7111)
						break;
					}
					else{
						HX_STACK_LINE(7113)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(7115)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(7118)
	if (((x == null()))){
		HX_STACK_LINE(7118)
		return false;
	}
	else{
		HX_STACK_LINE(7120)
		if (((x->parent == null()))){
			HX_STACK_LINE(7120)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(7122)
			x->colour = (int)0;
			HX_STACK_LINE(7123)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(7123)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(7125)
		return true;
	}
	HX_STACK_LINE(7118)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_CbSet_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSet x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::__fix_dbl_red","zpp_nape/util/RBTree.hx",6947);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(6947)
		while((true)){
			HX_STACK_LINE(6949)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(6950)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(6951)
			if (((g == null()))){
				HX_STACK_LINE(6952)
				par->colour = (int)1;
				HX_STACK_LINE(6953)
				break;
			}
			HX_STACK_LINE(6955)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_CbSet n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_CbSet n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_CbSet t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_CbSet t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_CbSet t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_CbSet t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(6956)
			if (((par == g->prev))){
				HX_STACK_LINE(6957)
				n3 = g;
				HX_STACK_LINE(6958)
				t4 = g->next;
				HX_STACK_LINE(6959)
				if (((x == par->prev))){
					HX_STACK_LINE(6960)
					n1 = x;
					HX_STACK_LINE(6961)
					n2 = par;
					HX_STACK_LINE(6962)
					t1 = x->prev;
					HX_STACK_LINE(6963)
					t2 = x->next;
					HX_STACK_LINE(6964)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(6967)
					n1 = par;
					HX_STACK_LINE(6968)
					n2 = x;
					HX_STACK_LINE(6969)
					t1 = par->prev;
					HX_STACK_LINE(6970)
					t2 = x->prev;
					HX_STACK_LINE(6971)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(6975)
				n1 = g;
				HX_STACK_LINE(6976)
				t1 = g->prev;
				HX_STACK_LINE(6977)
				if (((x == par->prev))){
					HX_STACK_LINE(6978)
					n2 = x;
					HX_STACK_LINE(6979)
					n3 = par;
					HX_STACK_LINE(6980)
					t2 = x->prev;
					HX_STACK_LINE(6981)
					t3 = x->next;
					HX_STACK_LINE(6982)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(6985)
					n2 = par;
					HX_STACK_LINE(6986)
					n3 = x;
					HX_STACK_LINE(6987)
					t2 = par->prev;
					HX_STACK_LINE(6988)
					t3 = x->prev;
					HX_STACK_LINE(6989)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(6992)
			{
				HX_STACK_LINE(6993)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(6994)
				if (((par1 == null()))){
					HX_STACK_LINE(6994)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(6997)
					if (((par1->prev == g))){
						HX_STACK_LINE(6997)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(6998)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(6999)
				if (((n2 != null()))){
					HX_STACK_LINE(6999)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(7001)
			{
				HX_STACK_LINE(7002)
				n1->prev = t1;
				HX_STACK_LINE(7003)
				if (((t1 != null()))){
					HX_STACK_LINE(7003)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(7005)
			{
				HX_STACK_LINE(7006)
				n1->next = t2;
				HX_STACK_LINE(7007)
				if (((t2 != null()))){
					HX_STACK_LINE(7007)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(7009)
			{
				HX_STACK_LINE(7010)
				n2->prev = n1;
				HX_STACK_LINE(7011)
				if (((n1 != null()))){
					HX_STACK_LINE(7011)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(7013)
			{
				HX_STACK_LINE(7014)
				n2->next = n3;
				HX_STACK_LINE(7015)
				if (((n3 != null()))){
					HX_STACK_LINE(7015)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(7017)
			{
				HX_STACK_LINE(7018)
				n3->prev = t3;
				HX_STACK_LINE(7019)
				if (((t3 != null()))){
					HX_STACK_LINE(7019)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(7021)
			{
				HX_STACK_LINE(7022)
				n3->next = t4;
				HX_STACK_LINE(7023)
				if (((t4 != null()))){
					HX_STACK_LINE(7023)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(7025)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(7026)
			n1->colour = (int)1;
			HX_STACK_LINE(7027)
			n3->colour = (int)1;
			HX_STACK_LINE(7028)
			if (((n2 == this->parent))){
				HX_STACK_LINE(7028)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(7029)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(7030)
					x = n2;
					HX_STACK_LINE(7031)
					continue;
				}
			}
			HX_STACK_LINE(7033)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_CbSet_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSet negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::__fix_neg_red","zpp_nape/util/RBTree.hx",6880);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(6881)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSet Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj *__this,::zpp_nape::util::ZPP_Set_ZPP_CbSet &negred,::zpp_nape::util::ZPP_Set_ZPP_CbSet &parent){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",6882);
				{
					HX_STACK_LINE(6883)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(6884)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(6885)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(6886)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(6887)
					nl->colour = (int)0;
					HX_STACK_LINE(6888)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(6889)
					{
						HX_STACK_LINE(6890)
						negred->next = trl;
						HX_STACK_LINE(6891)
						if (((trl != null()))){
							HX_STACK_LINE(6891)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(6893)
					{
						HX_STACK_LINE(6894)
						::zpp_nape::callbacks::ZPP_CbSet t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(6895)
						parent->data = nr->data;
						HX_STACK_LINE(6896)
						nr->data = t;
					}
					HX_STACK_LINE(6898)
					if (((__this->swapped != null()))){
						HX_STACK_LINE(6898)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(6899)
					{
						HX_STACK_LINE(6900)
						nr->prev = trr;
						HX_STACK_LINE(6901)
						if (((trr != null()))){
							HX_STACK_LINE(6901)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(6903)
					{
						HX_STACK_LINE(6904)
						nr->next = parent->next;
						HX_STACK_LINE(6905)
						if (((parent->next != null()))){
							HX_STACK_LINE(6905)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(6907)
					{
						HX_STACK_LINE(6908)
						parent->next = nr;
						HX_STACK_LINE(6909)
						if (((nr != null()))){
							HX_STACK_LINE(6909)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(6911)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSet Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj *__this,::zpp_nape::util::ZPP_Set_ZPP_CbSet &negred,::zpp_nape::util::ZPP_Set_ZPP_CbSet &parent){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",6913);
				{
					HX_STACK_LINE(6914)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(6915)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(6916)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(6917)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(6918)
					nl->colour = (int)0;
					HX_STACK_LINE(6919)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(6920)
					{
						HX_STACK_LINE(6921)
						negred->prev = trl;
						HX_STACK_LINE(6922)
						if (((trl != null()))){
							HX_STACK_LINE(6922)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(6924)
					{
						HX_STACK_LINE(6925)
						::zpp_nape::callbacks::ZPP_CbSet t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(6926)
						parent->data = nr->data;
						HX_STACK_LINE(6927)
						nr->data = t;
					}
					HX_STACK_LINE(6929)
					if (((__this->swapped != null()))){
						HX_STACK_LINE(6929)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(6930)
					{
						HX_STACK_LINE(6931)
						nr->next = trr;
						HX_STACK_LINE(6932)
						if (((trr != null()))){
							HX_STACK_LINE(6932)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(6934)
					{
						HX_STACK_LINE(6935)
						nr->prev = parent->prev;
						HX_STACK_LINE(6936)
						if (((parent->prev != null()))){
							HX_STACK_LINE(6936)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(6938)
					{
						HX_STACK_LINE(6939)
						parent->prev = nr;
						HX_STACK_LINE(6940)
						if (((nr != null()))){
							HX_STACK_LINE(6940)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(6942)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(6882)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSet(_Function_1_1::Block(this,negred,parent)) : ::zpp_nape::util::ZPP_Set_ZPP_CbSet(_Function_1_2::Block(this,negred,parent)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(6944)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(6944)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(6945)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(6945)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSet node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::clear_node","zpp_nape/util/RBTree.hx",6845);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(6854)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(6855)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6856)
	if (((ret != null()))){
		HX_STACK_LINE(6857)
		if (((node == ret->prev))){
			HX_STACK_LINE(6857)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(6858)
			ret->next = null();
		}
		HX_STACK_LINE(6859)
		node->parent = null();
	}
	HX_STACK_LINE(6861)
	{
		HX_STACK_LINE(6862)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(6871)
		{
			HX_STACK_LINE(6871)
			o->data = null();
			HX_STACK_LINE(6871)
			o->lt = null();
			HX_STACK_LINE(6871)
			o->swapped = null();
		}
		HX_STACK_LINE(6872)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
		HX_STACK_LINE(6873)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(6878)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_CbSet_obj,clear_node,return )

Void ZPP_Set_ZPP_CbSet_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::clear_with","zpp_nape/util/RBTree.hx",6836);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(6836)
		if (((this->parent == null()))){
			HX_STACK_LINE(6837)
			return null();
		}
		else{
			HX_STACK_LINE(6839)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(6840)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSet Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSet &cur,Dynamic &lambda){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",6840);
						{
							HX_STACK_LINE(6840)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(6840)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6840)
							if (((ret != null()))){
								HX_STACK_LINE(6840)
								if (((cur == ret->prev))){
									HX_STACK_LINE(6840)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(6840)
									ret->next = null();
								}
								HX_STACK_LINE(6840)
								cur->parent = null();
							}
							HX_STACK_LINE(6840)
							{
								HX_STACK_LINE(6840)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(6840)
								{
									HX_STACK_LINE(6840)
									o->data = null();
									HX_STACK_LINE(6840)
									o->lt = null();
									HX_STACK_LINE(6840)
									o->swapped = null();
								}
								HX_STACK_LINE(6840)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
								HX_STACK_LINE(6840)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = o;
							}
							HX_STACK_LINE(6840)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6840)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSet(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_CbSet((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSet(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSet(_Function_3_1::Block(cur,lambda)) )) );
			}
			HX_STACK_LINE(6841)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,clear_with,(void))

Void ZPP_Set_ZPP_CbSet_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::clear","zpp_nape/util/RBTree.hx",6832);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6832)
		if (((this->parent == null()))){
			HX_STACK_LINE(6833)
			Dynamic();
		}
		else{
			HX_STACK_LINE(6833)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(6833)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSet Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSet &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",6833);
						{
							HX_STACK_LINE(6833)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6833)
							if (((ret != null()))){
								HX_STACK_LINE(6833)
								if (((cur == ret->prev))){
									HX_STACK_LINE(6833)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(6833)
									ret->next = null();
								}
								HX_STACK_LINE(6833)
								cur->parent = null();
							}
							HX_STACK_LINE(6833)
							{
								HX_STACK_LINE(6833)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(6833)
								{
									HX_STACK_LINE(6833)
									o->data = null();
									HX_STACK_LINE(6833)
									o->lt = null();
									HX_STACK_LINE(6833)
									o->swapped = null();
								}
								HX_STACK_LINE(6833)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
								HX_STACK_LINE(6833)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = o;
							}
							HX_STACK_LINE(6833)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6833)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSet(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_CbSet((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSet(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSet(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(6833)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,clear,(void))

Void ZPP_Set_ZPP_CbSet_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSet cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::remove_node","zpp_nape/util/RBTree.hx",6712);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(6721)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(6722)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(6723)
			while(((sm->prev != null()))){
				HX_STACK_LINE(6723)
				sm = sm->prev;
			}
			HX_STACK_LINE(6724)
			{
				HX_STACK_LINE(6725)
				::zpp_nape::callbacks::ZPP_CbSet t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(6726)
				cur->data = sm->data;
				HX_STACK_LINE(6727)
				sm->data = t;
			}
			HX_STACK_LINE(6729)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(6729)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(6730)
			cur = sm;
		}
		HX_STACK_LINE(6740)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSet(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSet(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(6741)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(6741)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(6742)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(6743)
				if (((cur->parent != null()))){
					HX_STACK_LINE(6744)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(6745)
					while((true)){
						HX_STACK_LINE(6746)
						(parent->colour)++;
						HX_STACK_LINE(6747)
						(parent->prev->colour)--;
						HX_STACK_LINE(6748)
						(parent->next->colour)--;
						HX_STACK_LINE(6749)
						{
							HX_STACK_LINE(6750)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(6751)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(6752)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(6753)
								break;
							}
							else{
								HX_STACK_LINE(6755)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(6756)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(6758)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(6759)
										break;
									}
									HX_STACK_LINE(6762)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(6764)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(6765)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(6770)
						{
							HX_STACK_LINE(6771)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(6772)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(6773)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(6774)
								break;
							}
							else{
								HX_STACK_LINE(6776)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(6777)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(6779)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(6780)
										break;
									}
									HX_STACK_LINE(6783)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(6785)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(6786)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(6791)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(6791)
							if (((parent->parent == null()))){
								HX_STACK_LINE(6792)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(6796)
								parent = parent->parent;
								HX_STACK_LINE(6797)
								continue;
							}
						}
						HX_STACK_LINE(6800)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(6804)
		{
			HX_STACK_LINE(6805)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(6806)
			if (((par == null()))){
				HX_STACK_LINE(6806)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(6809)
				if (((par->prev == cur))){
					HX_STACK_LINE(6809)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(6810)
					par->next = child;
				}
			}
			HX_STACK_LINE(6811)
			if (((child != null()))){
				HX_STACK_LINE(6811)
				child->parent = par;
			}
		}
		HX_STACK_LINE(6813)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(6814)
		{
			HX_STACK_LINE(6815)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6824)
			{
				HX_STACK_LINE(6824)
				o->data = null();
				HX_STACK_LINE(6824)
				o->lt = null();
				HX_STACK_LINE(6824)
				o->swapped = null();
			}
			HX_STACK_LINE(6825)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(6826)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,remove_node,(void))

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::predecessor( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::predecessor","zpp_nape/util/RBTree.hx",6700);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6709)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(6710)
	return (  (((node == null()))) ? ::zpp_nape::callbacks::ZPP_CbSet(null()) : ::zpp_nape::callbacks::ZPP_CbSet(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,predecessor,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::successor( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::successor","zpp_nape/util/RBTree.hx",6688);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6697)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(6698)
	return (  (((node == null()))) ? ::zpp_nape::callbacks::ZPP_CbSet(null()) : ::zpp_nape::callbacks::ZPP_CbSet(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSet cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::predecessor_node","zpp_nape/util/RBTree.hx",6665);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(6674)
	if (((cur->prev != null()))){
		HX_STACK_LINE(6675)
		cur = cur->prev;
		HX_STACK_LINE(6676)
		while(((cur->next != null()))){
			HX_STACK_LINE(6676)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(6679)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6680)
		cur = cur->parent;
		HX_STACK_LINE(6681)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(6682)
			pre = cur;
			HX_STACK_LINE(6683)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(6686)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSet cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::successor_node","zpp_nape/util/RBTree.hx",6642);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(6651)
	if (((cur->next != null()))){
		HX_STACK_LINE(6652)
		cur = cur->next;
		HX_STACK_LINE(6653)
		while(((cur->prev != null()))){
			HX_STACK_LINE(6653)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(6656)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6657)
		cur = cur->parent;
		HX_STACK_LINE(6658)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(6659)
			pre = cur;
			HX_STACK_LINE(6660)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(6663)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,successor_node,return )

Void ZPP_Set_ZPP_CbSet_obj::remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::remove","zpp_nape/util/RBTree.hx",6630);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(6631)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(6640)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,remove,(void))

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::pop_front","zpp_nape/util/RBTree.hx",6615);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6624)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6625)
	while(((cur->prev != null()))){
		HX_STACK_LINE(6625)
		cur = cur->prev;
	}
	HX_STACK_LINE(6626)
	::zpp_nape::callbacks::ZPP_CbSet ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6627)
	this->remove_node(cur);
	HX_STACK_LINE(6628)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,pop_front,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::first","zpp_nape/util/RBTree.hx",6602);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6611)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6612)
	while(((cur->prev != null()))){
		HX_STACK_LINE(6612)
		cur = cur->prev;
	}
	HX_STACK_LINE(6613)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,first,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::lower_bound( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::lower_bound","zpp_nape/util/RBTree.hx",6565);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbSet Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj *__this,::zpp_nape::callbacks::ZPP_CbSet &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",6566);
			{
				HX_STACK_LINE(6567)
				::zpp_nape::callbacks::ZPP_CbSet ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6568)
				if ((!(__this->empty()))){
					HX_STACK_LINE(6578)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
					HX_STACK_LINE(6579)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(6579)
						set_ite = set_ite->prev;
					}
					HX_STACK_LINE(6580)
					while(((set_ite != null()))){
						HX_STACK_LINE(6581)
						::zpp_nape::callbacks::ZPP_CbSet elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
						HX_STACK_LINE(6582)
						if ((!(__this->lt(elt,obj)))){
							HX_STACK_LINE(6584)
							ret = elt;
							HX_STACK_LINE(6585)
							break;
						}
						HX_STACK_LINE(6588)
						if (((set_ite->next != null()))){
							HX_STACK_LINE(6589)
							set_ite = set_ite->next;
							HX_STACK_LINE(6590)
							while(((set_ite->prev != null()))){
								HX_STACK_LINE(6590)
								set_ite = set_ite->prev;
							}
						}
						else{
							HX_STACK_LINE(6593)
							while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
								HX_STACK_LINE(6593)
								set_ite = set_ite->parent;
							}
							HX_STACK_LINE(6594)
							set_ite = set_ite->parent;
						}
					}
				}
				HX_STACK_LINE(6599)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6565)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::find_weak( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::find_weak","zpp_nape/util/RBTree.hx",6556);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6557)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6558)
	while(((cur != null()))){
		HX_STACK_LINE(6558)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(6559)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(6560)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(6560)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(6561)
				break;
			}
		}
	}
	HX_STACK_LINE(6563)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,find_weak,return )

bool ZPP_Set_ZPP_CbSet_obj::has_weak( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::has_weak","zpp_nape/util/RBTree.hx",6553);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6553)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::find( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::find","zpp_nape/util/RBTree.hx",6545);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6546)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6547)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(6547)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(6548)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(6549)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(6551)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,find,return )

bool ZPP_Set_ZPP_CbSet_obj::has( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::has","zpp_nape/util/RBTree.hx",6542);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6542)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,has,return )

int ZPP_Set_ZPP_CbSet_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::size","zpp_nape/util/RBTree.hx",6512);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6513)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6514)
	if ((!(this->empty()))){
		HX_STACK_LINE(6524)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(6525)
		while(((set_ite->prev != null()))){
			HX_STACK_LINE(6525)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(6526)
		while(((set_ite != null()))){
			HX_STACK_LINE(6527)
			::zpp_nape::callbacks::ZPP_CbSet i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(6528)
			(ret)++;
			HX_STACK_LINE(6529)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(6530)
				set_ite = set_ite->next;
				HX_STACK_LINE(6531)
				while(((set_ite->prev != null()))){
					HX_STACK_LINE(6531)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(6534)
				while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
					HX_STACK_LINE(6534)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(6535)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(6540)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,size,return )

bool ZPP_Set_ZPP_CbSet_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::singular","zpp_nape/util/RBTree.hx",6509);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6509)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,singular,return )

bool ZPP_Set_ZPP_CbSet_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::empty","zpp_nape/util/RBTree.hx",6506);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6506)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,empty,return )

bool ZPP_Set_ZPP_CbSet_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::verify","zpp_nape/util/RBTree.hx",6441);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6442)
	if ((!(this->empty()))){
		HX_STACK_LINE(6452)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(6453)
		while(((set_ite->prev != null()))){
			HX_STACK_LINE(6453)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(6454)
		while(((set_ite != null()))){
			HX_STACK_LINE(6455)
			::zpp_nape::callbacks::ZPP_CbSet i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(6456)
			{
				HX_STACK_LINE(6457)
				bool prei = true;		HX_STACK_VAR(prei,"prei");
				HX_STACK_LINE(6458)
				if ((!(this->empty()))){
					HX_STACK_LINE(6468)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
					HX_STACK_LINE(6469)
					while(((set_ite1->prev != null()))){
						HX_STACK_LINE(6469)
						set_ite1 = set_ite1->prev;
					}
					HX_STACK_LINE(6470)
					while(((set_ite1 != null()))){
						HX_STACK_LINE(6471)
						::zpp_nape::callbacks::ZPP_CbSet j = set_ite1->data;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(6472)
						if ((!(prei))){
							HX_STACK_LINE(6473)
							if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
								HX_STACK_LINE(6474)
								return false;
							}
						}
						else{
							HX_STACK_LINE(6476)
							if (((i == j))){
								HX_STACK_LINE(6476)
								prei = false;
							}
							else{
								HX_STACK_LINE(6477)
								if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
									HX_STACK_LINE(6478)
									return false;
								}
							}
						}
						HX_STACK_LINE(6481)
						if (((set_ite1->next != null()))){
							HX_STACK_LINE(6482)
							set_ite1 = set_ite1->next;
							HX_STACK_LINE(6483)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(6483)
								set_ite1 = set_ite1->prev;
							}
						}
						else{
							HX_STACK_LINE(6486)
							while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
								HX_STACK_LINE(6486)
								set_ite1 = set_ite1->parent;
							}
							HX_STACK_LINE(6487)
							set_ite1 = set_ite1->parent;
						}
					}
				}
			}
			HX_STACK_LINE(6493)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(6494)
				set_ite = set_ite->next;
				HX_STACK_LINE(6495)
				while(((set_ite->prev != null()))){
					HX_STACK_LINE(6495)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(6498)
				while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
					HX_STACK_LINE(6498)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(6499)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(6504)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,verify,return )

Void ZPP_Set_ZPP_CbSet_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::alloc","zpp_nape/util/RBTree.hx",6432);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,alloc,(void))

Void ZPP_Set_ZPP_CbSet_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::free","zpp_nape/util/RBTree.hx",6425);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6426)
		this->data = null();
		HX_STACK_LINE(6427)
		this->lt = null();
		HX_STACK_LINE(6428)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::zpp_pool;


ZPP_Set_ZPP_CbSet_obj::ZPP_Set_ZPP_CbSet_obj()
{
}

void ZPP_Set_ZPP_CbSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_CbSet);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_CbSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_CbSet_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_CbSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_CbSet_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_CbSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_CbSet_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_CbSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_CbSet_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_CbSet_obj::__mClass;

void ZPP_Set_ZPP_CbSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_CbSet"), hx::TCanCast< ZPP_Set_ZPP_CbSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_CbSet_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
