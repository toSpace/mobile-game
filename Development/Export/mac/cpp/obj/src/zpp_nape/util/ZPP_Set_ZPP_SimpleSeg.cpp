#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_SimpleSeg_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::new","zpp_nape/util/RBTree.hx",4620);
{
	HX_STACK_LINE(4661)
	this->colour = (int)0;
	HX_STACK_LINE(4660)
	this->parent = null();
	HX_STACK_LINE(4659)
	this->next = null();
	HX_STACK_LINE(4658)
	this->prev = null();
	HX_STACK_LINE(4657)
	this->data = null();
	HX_STACK_LINE(4656)
	this->swapped = null();
	HX_STACK_LINE(4655)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_SimpleSeg_obj::~ZPP_Set_ZPP_SimpleSeg_obj() { }

Dynamic ZPP_Set_ZPP_SimpleSeg_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_SimpleSeg_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_SimpleSeg_obj > ZPP_Set_ZPP_SimpleSeg_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleSeg_obj > result = new ZPP_Set_ZPP_SimpleSeg_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_SimpleSeg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleSeg_obj > result = new ZPP_Set_ZPP_SimpleSeg_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::insert( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::insert","zpp_nape/util/RBTree.hx",5442);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5451)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(5452)
	{
		HX_STACK_LINE(5453)
		if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
			HX_STACK_LINE(5453)
			x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
		}
		else{
			HX_STACK_LINE(5460)
			x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
			HX_STACK_LINE(5461)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
			HX_STACK_LINE(5462)
			x->next = null();
		}
		HX_STACK_LINE(5467)
		Dynamic();
	}
	HX_STACK_LINE(5469)
	x->data = obj;
	HX_STACK_LINE(5470)
	if (((this->parent == null()))){
		HX_STACK_LINE(5470)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(5472)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5473)
		while((true)){
			HX_STACK_LINE(5473)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(5474)
				if (((cur->prev == null()))){
					HX_STACK_LINE(5476)
					cur->prev = x;
					HX_STACK_LINE(5477)
					x->parent = cur;
					HX_STACK_LINE(5478)
					break;
				}
				else{
					HX_STACK_LINE(5480)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(5482)
				if (((cur->next == null()))){
					HX_STACK_LINE(5484)
					cur->next = x;
					HX_STACK_LINE(5485)
					x->parent = cur;
					HX_STACK_LINE(5486)
					break;
				}
				else{
					HX_STACK_LINE(5488)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(5492)
	if (((x->parent == null()))){
		HX_STACK_LINE(5492)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(5494)
		x->colour = (int)0;
		HX_STACK_LINE(5495)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(5495)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(5505)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::try_insert( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::try_insert","zpp_nape/util/RBTree.hx",5350);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5351)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(5352)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5353)
	if (((this->parent == null()))){
		HX_STACK_LINE(5354)
		{
			HX_STACK_LINE(5355)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
				HX_STACK_LINE(5355)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
			}
			else{
				HX_STACK_LINE(5362)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
				HX_STACK_LINE(5363)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
				HX_STACK_LINE(5364)
				x->next = null();
			}
			HX_STACK_LINE(5369)
			Dynamic();
		}
		HX_STACK_LINE(5371)
		x->data = obj;
		HX_STACK_LINE(5372)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(5375)
		cur = this->parent;
		HX_STACK_LINE(5376)
		while((true)){
			HX_STACK_LINE(5376)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(5377)
				if (((cur->prev == null()))){
					HX_STACK_LINE(5379)
					{
						HX_STACK_LINE(5380)
						if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
							HX_STACK_LINE(5380)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
						}
						else{
							HX_STACK_LINE(5387)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
							HX_STACK_LINE(5388)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
							HX_STACK_LINE(5389)
							x->next = null();
						}
						HX_STACK_LINE(5394)
						Dynamic();
					}
					HX_STACK_LINE(5396)
					x->data = obj;
					HX_STACK_LINE(5397)
					cur->prev = x;
					HX_STACK_LINE(5398)
					x->parent = cur;
					HX_STACK_LINE(5399)
					break;
				}
				else{
					HX_STACK_LINE(5401)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(5403)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(5403)
					if (((cur->next == null()))){
						HX_STACK_LINE(5405)
						{
							HX_STACK_LINE(5406)
							if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
								HX_STACK_LINE(5406)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
							}
							else{
								HX_STACK_LINE(5413)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
								HX_STACK_LINE(5414)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
								HX_STACK_LINE(5415)
								x->next = null();
							}
							HX_STACK_LINE(5420)
							Dynamic();
						}
						HX_STACK_LINE(5422)
						x->data = obj;
						HX_STACK_LINE(5423)
						cur->next = x;
						HX_STACK_LINE(5424)
						x->parent = cur;
						HX_STACK_LINE(5425)
						break;
					}
					else{
						HX_STACK_LINE(5427)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(5429)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(5432)
	if (((x == null()))){
		HX_STACK_LINE(5432)
		return cur;
	}
	else{
		HX_STACK_LINE(5434)
		if (((x->parent == null()))){
			HX_STACK_LINE(5434)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(5436)
			x->colour = (int)0;
			HX_STACK_LINE(5437)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(5437)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(5439)
		return x;
	}
	HX_STACK_LINE(5432)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,try_insert,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::try_insert_bool( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::try_insert_bool","zpp_nape/util/RBTree.hx",5258);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5259)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(5260)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5261)
	if (((this->parent == null()))){
		HX_STACK_LINE(5262)
		{
			HX_STACK_LINE(5263)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
				HX_STACK_LINE(5263)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
			}
			else{
				HX_STACK_LINE(5270)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
				HX_STACK_LINE(5271)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
				HX_STACK_LINE(5272)
				x->next = null();
			}
			HX_STACK_LINE(5277)
			Dynamic();
		}
		HX_STACK_LINE(5279)
		x->data = obj;
		HX_STACK_LINE(5280)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(5283)
		cur = this->parent;
		HX_STACK_LINE(5284)
		while((true)){
			HX_STACK_LINE(5284)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(5285)
				if (((cur->prev == null()))){
					HX_STACK_LINE(5287)
					{
						HX_STACK_LINE(5288)
						if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
							HX_STACK_LINE(5288)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
						}
						else{
							HX_STACK_LINE(5295)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
							HX_STACK_LINE(5296)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
							HX_STACK_LINE(5297)
							x->next = null();
						}
						HX_STACK_LINE(5302)
						Dynamic();
					}
					HX_STACK_LINE(5304)
					x->data = obj;
					HX_STACK_LINE(5305)
					cur->prev = x;
					HX_STACK_LINE(5306)
					x->parent = cur;
					HX_STACK_LINE(5307)
					break;
				}
				else{
					HX_STACK_LINE(5309)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(5311)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(5311)
					if (((cur->next == null()))){
						HX_STACK_LINE(5313)
						{
							HX_STACK_LINE(5314)
							if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
								HX_STACK_LINE(5314)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
							}
							else{
								HX_STACK_LINE(5321)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
								HX_STACK_LINE(5322)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
								HX_STACK_LINE(5323)
								x->next = null();
							}
							HX_STACK_LINE(5328)
							Dynamic();
						}
						HX_STACK_LINE(5330)
						x->data = obj;
						HX_STACK_LINE(5331)
						cur->next = x;
						HX_STACK_LINE(5332)
						x->parent = cur;
						HX_STACK_LINE(5333)
						break;
					}
					else{
						HX_STACK_LINE(5335)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(5337)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(5340)
	if (((x == null()))){
		HX_STACK_LINE(5340)
		return false;
	}
	else{
		HX_STACK_LINE(5342)
		if (((x->parent == null()))){
			HX_STACK_LINE(5342)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(5344)
			x->colour = (int)0;
			HX_STACK_LINE(5345)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(5345)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(5347)
		return true;
	}
	HX_STACK_LINE(5340)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_SimpleSeg_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::__fix_dbl_red","zpp_nape/util/RBTree.hx",5169);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(5169)
		while((true)){
			HX_STACK_LINE(5171)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(5172)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(5173)
			if (((g == null()))){
				HX_STACK_LINE(5174)
				par->colour = (int)1;
				HX_STACK_LINE(5175)
				break;
			}
			HX_STACK_LINE(5177)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(5178)
			if (((par == g->prev))){
				HX_STACK_LINE(5179)
				n3 = g;
				HX_STACK_LINE(5180)
				t4 = g->next;
				HX_STACK_LINE(5181)
				if (((x == par->prev))){
					HX_STACK_LINE(5182)
					n1 = x;
					HX_STACK_LINE(5183)
					n2 = par;
					HX_STACK_LINE(5184)
					t1 = x->prev;
					HX_STACK_LINE(5185)
					t2 = x->next;
					HX_STACK_LINE(5186)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(5189)
					n1 = par;
					HX_STACK_LINE(5190)
					n2 = x;
					HX_STACK_LINE(5191)
					t1 = par->prev;
					HX_STACK_LINE(5192)
					t2 = x->prev;
					HX_STACK_LINE(5193)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(5197)
				n1 = g;
				HX_STACK_LINE(5198)
				t1 = g->prev;
				HX_STACK_LINE(5199)
				if (((x == par->prev))){
					HX_STACK_LINE(5200)
					n2 = x;
					HX_STACK_LINE(5201)
					n3 = par;
					HX_STACK_LINE(5202)
					t2 = x->prev;
					HX_STACK_LINE(5203)
					t3 = x->next;
					HX_STACK_LINE(5204)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(5207)
					n2 = par;
					HX_STACK_LINE(5208)
					n3 = x;
					HX_STACK_LINE(5209)
					t2 = par->prev;
					HX_STACK_LINE(5210)
					t3 = x->prev;
					HX_STACK_LINE(5211)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(5214)
			{
				HX_STACK_LINE(5215)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(5216)
				if (((par1 == null()))){
					HX_STACK_LINE(5216)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(5219)
					if (((par1->prev == g))){
						HX_STACK_LINE(5219)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(5220)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(5221)
				if (((n2 != null()))){
					HX_STACK_LINE(5221)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(5223)
			{
				HX_STACK_LINE(5224)
				n1->prev = t1;
				HX_STACK_LINE(5225)
				if (((t1 != null()))){
					HX_STACK_LINE(5225)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(5227)
			{
				HX_STACK_LINE(5228)
				n1->next = t2;
				HX_STACK_LINE(5229)
				if (((t2 != null()))){
					HX_STACK_LINE(5229)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(5231)
			{
				HX_STACK_LINE(5232)
				n2->prev = n1;
				HX_STACK_LINE(5233)
				if (((n1 != null()))){
					HX_STACK_LINE(5233)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(5235)
			{
				HX_STACK_LINE(5236)
				n2->next = n3;
				HX_STACK_LINE(5237)
				if (((n3 != null()))){
					HX_STACK_LINE(5237)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(5239)
			{
				HX_STACK_LINE(5240)
				n3->prev = t3;
				HX_STACK_LINE(5241)
				if (((t3 != null()))){
					HX_STACK_LINE(5241)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(5243)
			{
				HX_STACK_LINE(5244)
				n3->next = t4;
				HX_STACK_LINE(5245)
				if (((t4 != null()))){
					HX_STACK_LINE(5245)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(5247)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(5248)
			n1->colour = (int)1;
			HX_STACK_LINE(5249)
			n3->colour = (int)1;
			HX_STACK_LINE(5250)
			if (((n2 == this->parent))){
				HX_STACK_LINE(5250)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(5251)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(5252)
					x = n2;
					HX_STACK_LINE(5253)
					continue;
				}
			}
			HX_STACK_LINE(5255)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_SimpleSeg_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::__fix_neg_red","zpp_nape/util/RBTree.hx",5102);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(5103)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj *__this,::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg &negred,::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg &parent){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5104);
				{
					HX_STACK_LINE(5105)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(5106)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(5107)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(5108)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(5109)
					nl->colour = (int)0;
					HX_STACK_LINE(5110)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(5111)
					{
						HX_STACK_LINE(5112)
						negred->next = trl;
						HX_STACK_LINE(5113)
						if (((trl != null()))){
							HX_STACK_LINE(5113)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(5115)
					{
						HX_STACK_LINE(5116)
						::zpp_nape::geom::ZPP_SimpleSeg t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(5117)
						parent->data = nr->data;
						HX_STACK_LINE(5118)
						nr->data = t;
					}
					HX_STACK_LINE(5120)
					if (((__this->swapped != null()))){
						HX_STACK_LINE(5120)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(5121)
					{
						HX_STACK_LINE(5122)
						nr->prev = trr;
						HX_STACK_LINE(5123)
						if (((trr != null()))){
							HX_STACK_LINE(5123)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(5125)
					{
						HX_STACK_LINE(5126)
						nr->next = parent->next;
						HX_STACK_LINE(5127)
						if (((parent->next != null()))){
							HX_STACK_LINE(5127)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(5129)
					{
						HX_STACK_LINE(5130)
						parent->next = nr;
						HX_STACK_LINE(5131)
						if (((nr != null()))){
							HX_STACK_LINE(5131)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(5133)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj *__this,::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg &negred,::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg &parent){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5135);
				{
					HX_STACK_LINE(5136)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(5137)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(5138)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(5139)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(5140)
					nl->colour = (int)0;
					HX_STACK_LINE(5141)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(5142)
					{
						HX_STACK_LINE(5143)
						negred->prev = trl;
						HX_STACK_LINE(5144)
						if (((trl != null()))){
							HX_STACK_LINE(5144)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(5146)
					{
						HX_STACK_LINE(5147)
						::zpp_nape::geom::ZPP_SimpleSeg t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(5148)
						parent->data = nr->data;
						HX_STACK_LINE(5149)
						nr->data = t;
					}
					HX_STACK_LINE(5151)
					if (((__this->swapped != null()))){
						HX_STACK_LINE(5151)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(5152)
					{
						HX_STACK_LINE(5153)
						nr->next = trr;
						HX_STACK_LINE(5154)
						if (((trr != null()))){
							HX_STACK_LINE(5154)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(5156)
					{
						HX_STACK_LINE(5157)
						nr->prev = parent->prev;
						HX_STACK_LINE(5158)
						if (((parent->prev != null()))){
							HX_STACK_LINE(5158)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(5160)
					{
						HX_STACK_LINE(5161)
						parent->prev = nr;
						HX_STACK_LINE(5162)
						if (((nr != null()))){
							HX_STACK_LINE(5162)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(5164)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(5104)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(_Function_1_1::Block(this,negred,parent)) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(_Function_1_2::Block(this,negred,parent)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(5166)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(5166)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(5167)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(5167)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::clear_node","zpp_nape/util/RBTree.hx",5067);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(5076)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(5077)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5078)
	if (((ret != null()))){
		HX_STACK_LINE(5079)
		if (((node == ret->prev))){
			HX_STACK_LINE(5079)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(5080)
			ret->next = null();
		}
		HX_STACK_LINE(5081)
		node->parent = null();
	}
	HX_STACK_LINE(5083)
	{
		HX_STACK_LINE(5084)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5093)
		{
			HX_STACK_LINE(5093)
			o->data = null();
			HX_STACK_LINE(5093)
			o->lt = null();
			HX_STACK_LINE(5093)
			o->swapped = null();
		}
		HX_STACK_LINE(5094)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
		HX_STACK_LINE(5095)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5100)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_SimpleSeg_obj,clear_node,return )

Void ZPP_Set_ZPP_SimpleSeg_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::clear_with","zpp_nape/util/RBTree.hx",5058);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(5058)
		if (((this->parent == null()))){
			HX_STACK_LINE(5059)
			return null();
		}
		else{
			HX_STACK_LINE(5061)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5062)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg &cur,Dynamic &lambda){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5062);
						{
							HX_STACK_LINE(5062)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(5062)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(5062)
							if (((ret != null()))){
								HX_STACK_LINE(5062)
								if (((cur == ret->prev))){
									HX_STACK_LINE(5062)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(5062)
									ret->next = null();
								}
								HX_STACK_LINE(5062)
								cur->parent = null();
							}
							HX_STACK_LINE(5062)
							{
								HX_STACK_LINE(5062)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(5062)
								{
									HX_STACK_LINE(5062)
									o->data = null();
									HX_STACK_LINE(5062)
									o->lt = null();
									HX_STACK_LINE(5062)
									o->swapped = null();
								}
								HX_STACK_LINE(5062)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
								HX_STACK_LINE(5062)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = o;
							}
							HX_STACK_LINE(5062)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(5062)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(_Function_3_1::Block(cur,lambda)) )) );
			}
			HX_STACK_LINE(5063)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,clear_with,(void))

Void ZPP_Set_ZPP_SimpleSeg_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::clear","zpp_nape/util/RBTree.hx",5054);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5054)
		if (((this->parent == null()))){
			HX_STACK_LINE(5055)
			Dynamic();
		}
		else{
			HX_STACK_LINE(5055)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5055)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5055);
						{
							HX_STACK_LINE(5055)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(5055)
							if (((ret != null()))){
								HX_STACK_LINE(5055)
								if (((cur == ret->prev))){
									HX_STACK_LINE(5055)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(5055)
									ret->next = null();
								}
								HX_STACK_LINE(5055)
								cur->parent = null();
							}
							HX_STACK_LINE(5055)
							{
								HX_STACK_LINE(5055)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(5055)
								{
									HX_STACK_LINE(5055)
									o->data = null();
									HX_STACK_LINE(5055)
									o->lt = null();
									HX_STACK_LINE(5055)
									o->swapped = null();
								}
								HX_STACK_LINE(5055)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
								HX_STACK_LINE(5055)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = o;
							}
							HX_STACK_LINE(5055)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(5055)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(5055)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,clear,(void))

Void ZPP_Set_ZPP_SimpleSeg_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::remove_node","zpp_nape/util/RBTree.hx",4934);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(4943)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(4944)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(4945)
			while(((sm->prev != null()))){
				HX_STACK_LINE(4945)
				sm = sm->prev;
			}
			HX_STACK_LINE(4946)
			{
				HX_STACK_LINE(4947)
				::zpp_nape::geom::ZPP_SimpleSeg t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(4948)
				cur->data = sm->data;
				HX_STACK_LINE(4949)
				sm->data = t;
			}
			HX_STACK_LINE(4951)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(4951)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(4952)
			cur = sm;
		}
		HX_STACK_LINE(4962)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(4963)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(4963)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(4964)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(4965)
				if (((cur->parent != null()))){
					HX_STACK_LINE(4966)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(4967)
					while((true)){
						HX_STACK_LINE(4968)
						(parent->colour)++;
						HX_STACK_LINE(4969)
						(parent->prev->colour)--;
						HX_STACK_LINE(4970)
						(parent->next->colour)--;
						HX_STACK_LINE(4971)
						{
							HX_STACK_LINE(4972)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(4973)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(4974)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(4975)
								break;
							}
							else{
								HX_STACK_LINE(4977)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(4978)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(4980)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(4981)
										break;
									}
									HX_STACK_LINE(4984)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(4986)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(4987)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(4992)
						{
							HX_STACK_LINE(4993)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(4994)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(4995)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(4996)
								break;
							}
							else{
								HX_STACK_LINE(4998)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(4999)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(5001)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(5002)
										break;
									}
									HX_STACK_LINE(5005)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(5007)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(5008)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(5013)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(5013)
							if (((parent->parent == null()))){
								HX_STACK_LINE(5014)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(5018)
								parent = parent->parent;
								HX_STACK_LINE(5019)
								continue;
							}
						}
						HX_STACK_LINE(5022)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(5026)
		{
			HX_STACK_LINE(5027)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(5028)
			if (((par == null()))){
				HX_STACK_LINE(5028)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(5031)
				if (((par->prev == cur))){
					HX_STACK_LINE(5031)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(5032)
					par->next = child;
				}
			}
			HX_STACK_LINE(5033)
			if (((child != null()))){
				HX_STACK_LINE(5033)
				child->parent = par;
			}
		}
		HX_STACK_LINE(5035)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(5036)
		{
			HX_STACK_LINE(5037)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5046)
			{
				HX_STACK_LINE(5046)
				o->data = null();
				HX_STACK_LINE(5046)
				o->lt = null();
				HX_STACK_LINE(5046)
				o->swapped = null();
			}
			HX_STACK_LINE(5047)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
			HX_STACK_LINE(5048)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,remove_node,(void))

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::predecessor( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::predecessor","zpp_nape/util/RBTree.hx",4922);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4931)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(4932)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_SimpleSeg(null()) : ::zpp_nape::geom::ZPP_SimpleSeg(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,predecessor,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::successor( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::successor","zpp_nape/util/RBTree.hx",4910);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4919)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(4920)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_SimpleSeg(null()) : ::zpp_nape::geom::ZPP_SimpleSeg(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::predecessor_node","zpp_nape/util/RBTree.hx",4887);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(4896)
	if (((cur->prev != null()))){
		HX_STACK_LINE(4897)
		cur = cur->prev;
		HX_STACK_LINE(4898)
		while(((cur->next != null()))){
			HX_STACK_LINE(4898)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(4901)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4902)
		cur = cur->parent;
		HX_STACK_LINE(4903)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(4904)
			pre = cur;
			HX_STACK_LINE(4905)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(4908)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::successor_node","zpp_nape/util/RBTree.hx",4864);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(4873)
	if (((cur->next != null()))){
		HX_STACK_LINE(4874)
		cur = cur->next;
		HX_STACK_LINE(4875)
		while(((cur->prev != null()))){
			HX_STACK_LINE(4875)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(4878)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4879)
		cur = cur->parent;
		HX_STACK_LINE(4880)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(4881)
			pre = cur;
			HX_STACK_LINE(4882)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(4885)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,successor_node,return )

Void ZPP_Set_ZPP_SimpleSeg_obj::remove( ::zpp_nape::geom::ZPP_SimpleSeg obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::remove","zpp_nape/util/RBTree.hx",4852);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(4853)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(4862)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,remove,(void))

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::pop_front","zpp_nape/util/RBTree.hx",4837);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4846)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4847)
	while(((cur->prev != null()))){
		HX_STACK_LINE(4847)
		cur = cur->prev;
	}
	HX_STACK_LINE(4848)
	::zpp_nape::geom::ZPP_SimpleSeg ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4849)
	this->remove_node(cur);
	HX_STACK_LINE(4850)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,pop_front,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::first","zpp_nape/util/RBTree.hx",4824);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4833)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4834)
	while(((cur->prev != null()))){
		HX_STACK_LINE(4834)
		cur = cur->prev;
	}
	HX_STACK_LINE(4835)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,first,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::lower_bound( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::lower_bound","zpp_nape/util/RBTree.hx",4787);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimpleSeg Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj *__this,::zpp_nape::geom::ZPP_SimpleSeg &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",4788);
			{
				HX_STACK_LINE(4789)
				::zpp_nape::geom::ZPP_SimpleSeg ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4790)
				if ((!(__this->empty()))){
					HX_STACK_LINE(4800)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
					HX_STACK_LINE(4801)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(4801)
						set_ite = set_ite->prev;
					}
					HX_STACK_LINE(4802)
					while(((set_ite != null()))){
						HX_STACK_LINE(4803)
						::zpp_nape::geom::ZPP_SimpleSeg elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
						HX_STACK_LINE(4804)
						if ((!(__this->lt(elt,obj)))){
							HX_STACK_LINE(4806)
							ret = elt;
							HX_STACK_LINE(4807)
							break;
						}
						HX_STACK_LINE(4810)
						if (((set_ite->next != null()))){
							HX_STACK_LINE(4811)
							set_ite = set_ite->next;
							HX_STACK_LINE(4812)
							while(((set_ite->prev != null()))){
								HX_STACK_LINE(4812)
								set_ite = set_ite->prev;
							}
						}
						else{
							HX_STACK_LINE(4815)
							while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
								HX_STACK_LINE(4815)
								set_ite = set_ite->parent;
							}
							HX_STACK_LINE(4816)
							set_ite = set_ite->parent;
						}
					}
				}
				HX_STACK_LINE(4821)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4787)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::find_weak( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::find_weak","zpp_nape/util/RBTree.hx",4778);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4779)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4780)
	while(((cur != null()))){
		HX_STACK_LINE(4780)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(4781)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(4782)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(4782)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(4783)
				break;
			}
		}
	}
	HX_STACK_LINE(4785)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,find_weak,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::has_weak( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::has_weak","zpp_nape/util/RBTree.hx",4775);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4775)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::find( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::find","zpp_nape/util/RBTree.hx",4767);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4768)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4769)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(4769)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(4770)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(4771)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(4773)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,find,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::has( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::has","zpp_nape/util/RBTree.hx",4764);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4764)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,has,return )

int ZPP_Set_ZPP_SimpleSeg_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::size","zpp_nape/util/RBTree.hx",4734);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4735)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4736)
	if ((!(this->empty()))){
		HX_STACK_LINE(4746)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(4747)
		while(((set_ite->prev != null()))){
			HX_STACK_LINE(4747)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(4748)
		while(((set_ite != null()))){
			HX_STACK_LINE(4749)
			::zpp_nape::geom::ZPP_SimpleSeg i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(4750)
			(ret)++;
			HX_STACK_LINE(4751)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(4752)
				set_ite = set_ite->next;
				HX_STACK_LINE(4753)
				while(((set_ite->prev != null()))){
					HX_STACK_LINE(4753)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(4756)
				while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
					HX_STACK_LINE(4756)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(4757)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(4762)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,size,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::singular","zpp_nape/util/RBTree.hx",4731);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4731)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,singular,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::empty","zpp_nape/util/RBTree.hx",4728);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4728)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,empty,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::verify","zpp_nape/util/RBTree.hx",4663);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4664)
	if ((!(this->empty()))){
		HX_STACK_LINE(4674)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(4675)
		while(((set_ite->prev != null()))){
			HX_STACK_LINE(4675)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(4676)
		while(((set_ite != null()))){
			HX_STACK_LINE(4677)
			::zpp_nape::geom::ZPP_SimpleSeg i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(4678)
			{
				HX_STACK_LINE(4679)
				bool prei = true;		HX_STACK_VAR(prei,"prei");
				HX_STACK_LINE(4680)
				if ((!(this->empty()))){
					HX_STACK_LINE(4690)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
					HX_STACK_LINE(4691)
					while(((set_ite1->prev != null()))){
						HX_STACK_LINE(4691)
						set_ite1 = set_ite1->prev;
					}
					HX_STACK_LINE(4692)
					while(((set_ite1 != null()))){
						HX_STACK_LINE(4693)
						::zpp_nape::geom::ZPP_SimpleSeg j = set_ite1->data;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(4694)
						if ((!(prei))){
							HX_STACK_LINE(4695)
							if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
								HX_STACK_LINE(4696)
								return false;
							}
						}
						else{
							HX_STACK_LINE(4698)
							if (((i == j))){
								HX_STACK_LINE(4698)
								prei = false;
							}
							else{
								HX_STACK_LINE(4699)
								if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
									HX_STACK_LINE(4700)
									return false;
								}
							}
						}
						HX_STACK_LINE(4703)
						if (((set_ite1->next != null()))){
							HX_STACK_LINE(4704)
							set_ite1 = set_ite1->next;
							HX_STACK_LINE(4705)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(4705)
								set_ite1 = set_ite1->prev;
							}
						}
						else{
							HX_STACK_LINE(4708)
							while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
								HX_STACK_LINE(4708)
								set_ite1 = set_ite1->parent;
							}
							HX_STACK_LINE(4709)
							set_ite1 = set_ite1->parent;
						}
					}
				}
			}
			HX_STACK_LINE(4715)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(4716)
				set_ite = set_ite->next;
				HX_STACK_LINE(4717)
				while(((set_ite->prev != null()))){
					HX_STACK_LINE(4717)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(4720)
				while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
					HX_STACK_LINE(4720)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(4721)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(4726)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,verify,return )

Void ZPP_Set_ZPP_SimpleSeg_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::alloc","zpp_nape/util/RBTree.hx",4654);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,alloc,(void))

Void ZPP_Set_ZPP_SimpleSeg_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::free","zpp_nape/util/RBTree.hx",4647);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4648)
		this->data = null();
		HX_STACK_LINE(4649)
		this->lt = null();
		HX_STACK_LINE(4650)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;


ZPP_Set_ZPP_SimpleSeg_obj::ZPP_Set_ZPP_SimpleSeg_obj()
{
}

void ZPP_Set_ZPP_SimpleSeg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_SimpleSeg);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_SimpleSeg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_SimpleSeg_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_SimpleSeg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_SimpleSeg_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleSeg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleSeg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_SimpleSeg_obj::__mClass;

void ZPP_Set_ZPP_SimpleSeg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg"), hx::TCanCast< ZPP_Set_ZPP_SimpleSeg_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_SimpleSeg_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
