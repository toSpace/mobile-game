#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionPair
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionPair
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_PartitionPair_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::new","zpp_nape/util/RBTree.hx",1953);
{
	HX_STACK_LINE(1994)
	this->colour = (int)0;
	HX_STACK_LINE(1993)
	this->parent = null();
	HX_STACK_LINE(1992)
	this->next = null();
	HX_STACK_LINE(1991)
	this->prev = null();
	HX_STACK_LINE(1990)
	this->data = null();
	HX_STACK_LINE(1989)
	this->swapped = null();
	HX_STACK_LINE(1988)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_PartitionPair_obj::~ZPP_Set_ZPP_PartitionPair_obj() { }

Dynamic ZPP_Set_ZPP_PartitionPair_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_PartitionPair_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_PartitionPair_obj > ZPP_Set_ZPP_PartitionPair_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_PartitionPair_obj > result = new ZPP_Set_ZPP_PartitionPair_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_PartitionPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_PartitionPair_obj > result = new ZPP_Set_ZPP_PartitionPair_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::insert( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::insert","zpp_nape/util/RBTree.hx",2775);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2784)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(2785)
	{
		HX_STACK_LINE(2786)
		if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
			HX_STACK_LINE(2786)
			x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
		}
		else{
			HX_STACK_LINE(2793)
			x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
			HX_STACK_LINE(2794)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
			HX_STACK_LINE(2795)
			x->next = null();
		}
		HX_STACK_LINE(2800)
		Dynamic();
	}
	HX_STACK_LINE(2802)
	x->data = obj;
	HX_STACK_LINE(2803)
	if (((this->parent == null()))){
		HX_STACK_LINE(2803)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(2805)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2806)
		while((true)){
			HX_STACK_LINE(2806)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(2807)
				if (((cur->prev == null()))){
					HX_STACK_LINE(2809)
					cur->prev = x;
					HX_STACK_LINE(2810)
					x->parent = cur;
					HX_STACK_LINE(2811)
					break;
				}
				else{
					HX_STACK_LINE(2813)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(2815)
				if (((cur->next == null()))){
					HX_STACK_LINE(2817)
					cur->next = x;
					HX_STACK_LINE(2818)
					x->parent = cur;
					HX_STACK_LINE(2819)
					break;
				}
				else{
					HX_STACK_LINE(2821)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(2825)
	if (((x->parent == null()))){
		HX_STACK_LINE(2825)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(2827)
		x->colour = (int)0;
		HX_STACK_LINE(2828)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(2828)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(2838)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::try_insert( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::try_insert","zpp_nape/util/RBTree.hx",2683);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2684)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(2685)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2686)
	if (((this->parent == null()))){
		HX_STACK_LINE(2687)
		{
			HX_STACK_LINE(2688)
			if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(2688)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
			}
			else{
				HX_STACK_LINE(2695)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
				HX_STACK_LINE(2696)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
				HX_STACK_LINE(2697)
				x->next = null();
			}
			HX_STACK_LINE(2702)
			Dynamic();
		}
		HX_STACK_LINE(2704)
		x->data = obj;
		HX_STACK_LINE(2705)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(2708)
		cur = this->parent;
		HX_STACK_LINE(2709)
		while((true)){
			HX_STACK_LINE(2709)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(2710)
				if (((cur->prev == null()))){
					HX_STACK_LINE(2712)
					{
						HX_STACK_LINE(2713)
						if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
							HX_STACK_LINE(2713)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
						}
						else{
							HX_STACK_LINE(2720)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
							HX_STACK_LINE(2721)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
							HX_STACK_LINE(2722)
							x->next = null();
						}
						HX_STACK_LINE(2727)
						Dynamic();
					}
					HX_STACK_LINE(2729)
					x->data = obj;
					HX_STACK_LINE(2730)
					cur->prev = x;
					HX_STACK_LINE(2731)
					x->parent = cur;
					HX_STACK_LINE(2732)
					break;
				}
				else{
					HX_STACK_LINE(2734)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(2736)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(2736)
					if (((cur->next == null()))){
						HX_STACK_LINE(2738)
						{
							HX_STACK_LINE(2739)
							if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
								HX_STACK_LINE(2739)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
							}
							else{
								HX_STACK_LINE(2746)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
								HX_STACK_LINE(2747)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
								HX_STACK_LINE(2748)
								x->next = null();
							}
							HX_STACK_LINE(2753)
							Dynamic();
						}
						HX_STACK_LINE(2755)
						x->data = obj;
						HX_STACK_LINE(2756)
						cur->next = x;
						HX_STACK_LINE(2757)
						x->parent = cur;
						HX_STACK_LINE(2758)
						break;
					}
					else{
						HX_STACK_LINE(2760)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(2762)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2765)
	if (((x == null()))){
		HX_STACK_LINE(2765)
		return cur;
	}
	else{
		HX_STACK_LINE(2767)
		if (((x->parent == null()))){
			HX_STACK_LINE(2767)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(2769)
			x->colour = (int)0;
			HX_STACK_LINE(2770)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(2770)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(2772)
		return x;
	}
	HX_STACK_LINE(2765)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,try_insert,return )

bool ZPP_Set_ZPP_PartitionPair_obj::try_insert_bool( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::try_insert_bool","zpp_nape/util/RBTree.hx",2591);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2592)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(2593)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2594)
	if (((this->parent == null()))){
		HX_STACK_LINE(2595)
		{
			HX_STACK_LINE(2596)
			if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(2596)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
			}
			else{
				HX_STACK_LINE(2603)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
				HX_STACK_LINE(2604)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
				HX_STACK_LINE(2605)
				x->next = null();
			}
			HX_STACK_LINE(2610)
			Dynamic();
		}
		HX_STACK_LINE(2612)
		x->data = obj;
		HX_STACK_LINE(2613)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(2616)
		cur = this->parent;
		HX_STACK_LINE(2617)
		while((true)){
			HX_STACK_LINE(2617)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(2618)
				if (((cur->prev == null()))){
					HX_STACK_LINE(2620)
					{
						HX_STACK_LINE(2621)
						if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
							HX_STACK_LINE(2621)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
						}
						else{
							HX_STACK_LINE(2628)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
							HX_STACK_LINE(2629)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
							HX_STACK_LINE(2630)
							x->next = null();
						}
						HX_STACK_LINE(2635)
						Dynamic();
					}
					HX_STACK_LINE(2637)
					x->data = obj;
					HX_STACK_LINE(2638)
					cur->prev = x;
					HX_STACK_LINE(2639)
					x->parent = cur;
					HX_STACK_LINE(2640)
					break;
				}
				else{
					HX_STACK_LINE(2642)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(2644)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(2644)
					if (((cur->next == null()))){
						HX_STACK_LINE(2646)
						{
							HX_STACK_LINE(2647)
							if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
								HX_STACK_LINE(2647)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
							}
							else{
								HX_STACK_LINE(2654)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
								HX_STACK_LINE(2655)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
								HX_STACK_LINE(2656)
								x->next = null();
							}
							HX_STACK_LINE(2661)
							Dynamic();
						}
						HX_STACK_LINE(2663)
						x->data = obj;
						HX_STACK_LINE(2664)
						cur->next = x;
						HX_STACK_LINE(2665)
						x->parent = cur;
						HX_STACK_LINE(2666)
						break;
					}
					else{
						HX_STACK_LINE(2668)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(2670)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2673)
	if (((x == null()))){
		HX_STACK_LINE(2673)
		return false;
	}
	else{
		HX_STACK_LINE(2675)
		if (((x->parent == null()))){
			HX_STACK_LINE(2675)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(2677)
			x->colour = (int)0;
			HX_STACK_LINE(2678)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(2678)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(2680)
		return true;
	}
	HX_STACK_LINE(2673)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_PartitionPair_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::__fix_dbl_red","zpp_nape/util/RBTree.hx",2502);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(2502)
		while((true)){
			HX_STACK_LINE(2504)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(2505)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(2506)
			if (((g == null()))){
				HX_STACK_LINE(2507)
				par->colour = (int)1;
				HX_STACK_LINE(2508)
				break;
			}
			HX_STACK_LINE(2510)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(2511)
			if (((par == g->prev))){
				HX_STACK_LINE(2512)
				n3 = g;
				HX_STACK_LINE(2513)
				t4 = g->next;
				HX_STACK_LINE(2514)
				if (((x == par->prev))){
					HX_STACK_LINE(2515)
					n1 = x;
					HX_STACK_LINE(2516)
					n2 = par;
					HX_STACK_LINE(2517)
					t1 = x->prev;
					HX_STACK_LINE(2518)
					t2 = x->next;
					HX_STACK_LINE(2519)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(2522)
					n1 = par;
					HX_STACK_LINE(2523)
					n2 = x;
					HX_STACK_LINE(2524)
					t1 = par->prev;
					HX_STACK_LINE(2525)
					t2 = x->prev;
					HX_STACK_LINE(2526)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(2530)
				n1 = g;
				HX_STACK_LINE(2531)
				t1 = g->prev;
				HX_STACK_LINE(2532)
				if (((x == par->prev))){
					HX_STACK_LINE(2533)
					n2 = x;
					HX_STACK_LINE(2534)
					n3 = par;
					HX_STACK_LINE(2535)
					t2 = x->prev;
					HX_STACK_LINE(2536)
					t3 = x->next;
					HX_STACK_LINE(2537)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(2540)
					n2 = par;
					HX_STACK_LINE(2541)
					n3 = x;
					HX_STACK_LINE(2542)
					t2 = par->prev;
					HX_STACK_LINE(2543)
					t3 = x->prev;
					HX_STACK_LINE(2544)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(2547)
			{
				HX_STACK_LINE(2548)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(2549)
				if (((par1 == null()))){
					HX_STACK_LINE(2549)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(2552)
					if (((par1->prev == g))){
						HX_STACK_LINE(2552)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(2553)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(2554)
				if (((n2 != null()))){
					HX_STACK_LINE(2554)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(2556)
			{
				HX_STACK_LINE(2557)
				n1->prev = t1;
				HX_STACK_LINE(2558)
				if (((t1 != null()))){
					HX_STACK_LINE(2558)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(2560)
			{
				HX_STACK_LINE(2561)
				n1->next = t2;
				HX_STACK_LINE(2562)
				if (((t2 != null()))){
					HX_STACK_LINE(2562)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(2564)
			{
				HX_STACK_LINE(2565)
				n2->prev = n1;
				HX_STACK_LINE(2566)
				if (((n1 != null()))){
					HX_STACK_LINE(2566)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(2568)
			{
				HX_STACK_LINE(2569)
				n2->next = n3;
				HX_STACK_LINE(2570)
				if (((n3 != null()))){
					HX_STACK_LINE(2570)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(2572)
			{
				HX_STACK_LINE(2573)
				n3->prev = t3;
				HX_STACK_LINE(2574)
				if (((t3 != null()))){
					HX_STACK_LINE(2574)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(2576)
			{
				HX_STACK_LINE(2577)
				n3->next = t4;
				HX_STACK_LINE(2578)
				if (((t4 != null()))){
					HX_STACK_LINE(2578)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(2580)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(2581)
			n1->colour = (int)1;
			HX_STACK_LINE(2582)
			n3->colour = (int)1;
			HX_STACK_LINE(2583)
			if (((n2 == this->parent))){
				HX_STACK_LINE(2583)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(2584)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(2585)
					x = n2;
					HX_STACK_LINE(2586)
					continue;
				}
			}
			HX_STACK_LINE(2588)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_PartitionPair_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::__fix_neg_red","zpp_nape/util/RBTree.hx",2435);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(2436)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj *__this,::zpp_nape::util::ZPP_Set_ZPP_PartitionPair &negred,::zpp_nape::util::ZPP_Set_ZPP_PartitionPair &parent){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",2437);
				{
					HX_STACK_LINE(2438)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(2439)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(2440)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(2441)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(2442)
					nl->colour = (int)0;
					HX_STACK_LINE(2443)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(2444)
					{
						HX_STACK_LINE(2445)
						negred->next = trl;
						HX_STACK_LINE(2446)
						if (((trl != null()))){
							HX_STACK_LINE(2446)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(2448)
					{
						HX_STACK_LINE(2449)
						::zpp_nape::geom::ZPP_PartitionPair t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2450)
						parent->data = nr->data;
						HX_STACK_LINE(2451)
						nr->data = t;
					}
					HX_STACK_LINE(2453)
					if (((__this->swapped != null()))){
						HX_STACK_LINE(2453)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(2454)
					{
						HX_STACK_LINE(2455)
						nr->prev = trr;
						HX_STACK_LINE(2456)
						if (((trr != null()))){
							HX_STACK_LINE(2456)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(2458)
					{
						HX_STACK_LINE(2459)
						nr->next = parent->next;
						HX_STACK_LINE(2460)
						if (((parent->next != null()))){
							HX_STACK_LINE(2460)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(2462)
					{
						HX_STACK_LINE(2463)
						parent->next = nr;
						HX_STACK_LINE(2464)
						if (((nr != null()))){
							HX_STACK_LINE(2464)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(2466)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj *__this,::zpp_nape::util::ZPP_Set_ZPP_PartitionPair &negred,::zpp_nape::util::ZPP_Set_ZPP_PartitionPair &parent){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",2468);
				{
					HX_STACK_LINE(2469)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(2470)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(2471)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(2472)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(2473)
					nl->colour = (int)0;
					HX_STACK_LINE(2474)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(2475)
					{
						HX_STACK_LINE(2476)
						negred->prev = trl;
						HX_STACK_LINE(2477)
						if (((trl != null()))){
							HX_STACK_LINE(2477)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(2479)
					{
						HX_STACK_LINE(2480)
						::zpp_nape::geom::ZPP_PartitionPair t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2481)
						parent->data = nr->data;
						HX_STACK_LINE(2482)
						nr->data = t;
					}
					HX_STACK_LINE(2484)
					if (((__this->swapped != null()))){
						HX_STACK_LINE(2484)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(2485)
					{
						HX_STACK_LINE(2486)
						nr->next = trr;
						HX_STACK_LINE(2487)
						if (((trr != null()))){
							HX_STACK_LINE(2487)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(2489)
					{
						HX_STACK_LINE(2490)
						nr->prev = parent->prev;
						HX_STACK_LINE(2491)
						if (((parent->prev != null()))){
							HX_STACK_LINE(2491)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(2493)
					{
						HX_STACK_LINE(2494)
						parent->prev = nr;
						HX_STACK_LINE(2495)
						if (((nr != null()))){
							HX_STACK_LINE(2495)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(2497)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(2437)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(_Function_1_1::Block(this,negred,parent)) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(_Function_1_2::Block(this,negred,parent)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(2499)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(2499)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(2500)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(2500)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::clear_node","zpp_nape/util/RBTree.hx",2400);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(2409)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(2410)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2411)
	if (((ret != null()))){
		HX_STACK_LINE(2412)
		if (((node == ret->prev))){
			HX_STACK_LINE(2412)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(2413)
			ret->next = null();
		}
		HX_STACK_LINE(2414)
		node->parent = null();
	}
	HX_STACK_LINE(2416)
	{
		HX_STACK_LINE(2417)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2426)
		{
			HX_STACK_LINE(2426)
			o->data = null();
			HX_STACK_LINE(2426)
			o->lt = null();
			HX_STACK_LINE(2426)
			o->swapped = null();
		}
		HX_STACK_LINE(2427)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
		HX_STACK_LINE(2428)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2433)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_PartitionPair_obj,clear_node,return )

Void ZPP_Set_ZPP_PartitionPair_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::clear_with","zpp_nape/util/RBTree.hx",2391);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(2391)
		if (((this->parent == null()))){
			HX_STACK_LINE(2392)
			return null();
		}
		else{
			HX_STACK_LINE(2394)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(2395)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair &cur,Dynamic &lambda){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",2395);
						{
							HX_STACK_LINE(2395)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(2395)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(2395)
							if (((ret != null()))){
								HX_STACK_LINE(2395)
								if (((cur == ret->prev))){
									HX_STACK_LINE(2395)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(2395)
									ret->next = null();
								}
								HX_STACK_LINE(2395)
								cur->parent = null();
							}
							HX_STACK_LINE(2395)
							{
								HX_STACK_LINE(2395)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(2395)
								{
									HX_STACK_LINE(2395)
									o->data = null();
									HX_STACK_LINE(2395)
									o->lt = null();
									HX_STACK_LINE(2395)
									o->swapped = null();
								}
								HX_STACK_LINE(2395)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
								HX_STACK_LINE(2395)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = o;
							}
							HX_STACK_LINE(2395)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(2395)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(_Function_3_1::Block(cur,lambda)) )) );
			}
			HX_STACK_LINE(2396)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,clear_with,(void))

Void ZPP_Set_ZPP_PartitionPair_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::clear","zpp_nape/util/RBTree.hx",2387);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2387)
		if (((this->parent == null()))){
			HX_STACK_LINE(2388)
			Dynamic();
		}
		else{
			HX_STACK_LINE(2388)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(2388)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",2388);
						{
							HX_STACK_LINE(2388)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(2388)
							if (((ret != null()))){
								HX_STACK_LINE(2388)
								if (((cur == ret->prev))){
									HX_STACK_LINE(2388)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(2388)
									ret->next = null();
								}
								HX_STACK_LINE(2388)
								cur->parent = null();
							}
							HX_STACK_LINE(2388)
							{
								HX_STACK_LINE(2388)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(2388)
								{
									HX_STACK_LINE(2388)
									o->data = null();
									HX_STACK_LINE(2388)
									o->lt = null();
									HX_STACK_LINE(2388)
									o->swapped = null();
								}
								HX_STACK_LINE(2388)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
								HX_STACK_LINE(2388)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = o;
							}
							HX_STACK_LINE(2388)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(2388)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(2388)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,clear,(void))

Void ZPP_Set_ZPP_PartitionPair_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::remove_node","zpp_nape/util/RBTree.hx",2267);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(2276)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(2277)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(2278)
			while(((sm->prev != null()))){
				HX_STACK_LINE(2278)
				sm = sm->prev;
			}
			HX_STACK_LINE(2279)
			{
				HX_STACK_LINE(2280)
				::zpp_nape::geom::ZPP_PartitionPair t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2281)
				cur->data = sm->data;
				HX_STACK_LINE(2282)
				sm->data = t;
			}
			HX_STACK_LINE(2284)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(2284)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(2285)
			cur = sm;
		}
		HX_STACK_LINE(2295)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(2296)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(2296)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(2297)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(2298)
				if (((cur->parent != null()))){
					HX_STACK_LINE(2299)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(2300)
					while((true)){
						HX_STACK_LINE(2301)
						(parent->colour)++;
						HX_STACK_LINE(2302)
						(parent->prev->colour)--;
						HX_STACK_LINE(2303)
						(parent->next->colour)--;
						HX_STACK_LINE(2304)
						{
							HX_STACK_LINE(2305)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(2306)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(2307)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(2308)
								break;
							}
							else{
								HX_STACK_LINE(2310)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(2311)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(2313)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(2314)
										break;
									}
									HX_STACK_LINE(2317)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(2319)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(2320)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(2325)
						{
							HX_STACK_LINE(2326)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(2327)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(2328)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(2329)
								break;
							}
							else{
								HX_STACK_LINE(2331)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(2332)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(2334)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(2335)
										break;
									}
									HX_STACK_LINE(2338)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(2340)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(2341)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(2346)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(2346)
							if (((parent->parent == null()))){
								HX_STACK_LINE(2347)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(2351)
								parent = parent->parent;
								HX_STACK_LINE(2352)
								continue;
							}
						}
						HX_STACK_LINE(2355)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(2359)
		{
			HX_STACK_LINE(2360)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(2361)
			if (((par == null()))){
				HX_STACK_LINE(2361)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(2364)
				if (((par->prev == cur))){
					HX_STACK_LINE(2364)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(2365)
					par->next = child;
				}
			}
			HX_STACK_LINE(2366)
			if (((child != null()))){
				HX_STACK_LINE(2366)
				child->parent = par;
			}
		}
		HX_STACK_LINE(2368)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(2369)
		{
			HX_STACK_LINE(2370)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2379)
			{
				HX_STACK_LINE(2379)
				o->data = null();
				HX_STACK_LINE(2379)
				o->lt = null();
				HX_STACK_LINE(2379)
				o->swapped = null();
			}
			HX_STACK_LINE(2380)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
			HX_STACK_LINE(2381)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,remove_node,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::predecessor( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::predecessor","zpp_nape/util/RBTree.hx",2255);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2264)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(2265)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_PartitionPair(null()) : ::zpp_nape::geom::ZPP_PartitionPair(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,predecessor,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::successor( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::successor","zpp_nape/util/RBTree.hx",2243);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2252)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(2253)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_PartitionPair(null()) : ::zpp_nape::geom::ZPP_PartitionPair(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::predecessor_node","zpp_nape/util/RBTree.hx",2220);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(2229)
	if (((cur->prev != null()))){
		HX_STACK_LINE(2230)
		cur = cur->prev;
		HX_STACK_LINE(2231)
		while(((cur->next != null()))){
			HX_STACK_LINE(2231)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(2234)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2235)
		cur = cur->parent;
		HX_STACK_LINE(2236)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(2237)
			pre = cur;
			HX_STACK_LINE(2238)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(2241)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::successor_node","zpp_nape/util/RBTree.hx",2197);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(2206)
	if (((cur->next != null()))){
		HX_STACK_LINE(2207)
		cur = cur->next;
		HX_STACK_LINE(2208)
		while(((cur->prev != null()))){
			HX_STACK_LINE(2208)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(2211)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2212)
		cur = cur->parent;
		HX_STACK_LINE(2213)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(2214)
			pre = cur;
			HX_STACK_LINE(2215)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(2218)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,successor_node,return )

Void ZPP_Set_ZPP_PartitionPair_obj::remove( ::zpp_nape::geom::ZPP_PartitionPair obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::remove","zpp_nape/util/RBTree.hx",2185);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(2186)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(2195)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,remove,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::pop_front","zpp_nape/util/RBTree.hx",2170);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2179)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2180)
	while(((cur->prev != null()))){
		HX_STACK_LINE(2180)
		cur = cur->prev;
	}
	HX_STACK_LINE(2181)
	::zpp_nape::geom::ZPP_PartitionPair ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2182)
	this->remove_node(cur);
	HX_STACK_LINE(2183)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,pop_front,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::first","zpp_nape/util/RBTree.hx",2157);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2166)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2167)
	while(((cur->prev != null()))){
		HX_STACK_LINE(2167)
		cur = cur->prev;
	}
	HX_STACK_LINE(2168)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,first,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::lower_bound( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::lower_bound","zpp_nape/util/RBTree.hx",2120);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionPair Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj *__this,::zpp_nape::geom::ZPP_PartitionPair &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",2121);
			{
				HX_STACK_LINE(2122)
				::zpp_nape::geom::ZPP_PartitionPair ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2123)
				if ((!(__this->empty()))){
					HX_STACK_LINE(2133)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
					HX_STACK_LINE(2134)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(2134)
						set_ite = set_ite->prev;
					}
					HX_STACK_LINE(2135)
					while(((set_ite != null()))){
						HX_STACK_LINE(2136)
						::zpp_nape::geom::ZPP_PartitionPair elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
						HX_STACK_LINE(2137)
						if ((!(__this->lt(elt,obj)))){
							HX_STACK_LINE(2139)
							ret = elt;
							HX_STACK_LINE(2140)
							break;
						}
						HX_STACK_LINE(2143)
						if (((set_ite->next != null()))){
							HX_STACK_LINE(2144)
							set_ite = set_ite->next;
							HX_STACK_LINE(2145)
							while(((set_ite->prev != null()))){
								HX_STACK_LINE(2145)
								set_ite = set_ite->prev;
							}
						}
						else{
							HX_STACK_LINE(2148)
							while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
								HX_STACK_LINE(2148)
								set_ite = set_ite->parent;
							}
							HX_STACK_LINE(2149)
							set_ite = set_ite->parent;
						}
					}
				}
				HX_STACK_LINE(2154)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2120)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::find_weak( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::find_weak","zpp_nape/util/RBTree.hx",2111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2112)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2113)
	while(((cur != null()))){
		HX_STACK_LINE(2113)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(2114)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(2115)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(2115)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(2116)
				break;
			}
		}
	}
	HX_STACK_LINE(2118)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,find_weak,return )

bool ZPP_Set_ZPP_PartitionPair_obj::has_weak( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::has_weak","zpp_nape/util/RBTree.hx",2108);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2108)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::find( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::find","zpp_nape/util/RBTree.hx",2100);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2101)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2102)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(2102)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(2103)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(2104)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(2106)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,find,return )

bool ZPP_Set_ZPP_PartitionPair_obj::has( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::has","zpp_nape/util/RBTree.hx",2097);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2097)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,has,return )

int ZPP_Set_ZPP_PartitionPair_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::size","zpp_nape/util/RBTree.hx",2067);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2068)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2069)
	if ((!(this->empty()))){
		HX_STACK_LINE(2079)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(2080)
		while(((set_ite->prev != null()))){
			HX_STACK_LINE(2080)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(2081)
		while(((set_ite != null()))){
			HX_STACK_LINE(2082)
			::zpp_nape::geom::ZPP_PartitionPair i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2083)
			(ret)++;
			HX_STACK_LINE(2084)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(2085)
				set_ite = set_ite->next;
				HX_STACK_LINE(2086)
				while(((set_ite->prev != null()))){
					HX_STACK_LINE(2086)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(2089)
				while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
					HX_STACK_LINE(2089)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(2090)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(2095)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,size,return )

bool ZPP_Set_ZPP_PartitionPair_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::singular","zpp_nape/util/RBTree.hx",2064);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2064)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,singular,return )

bool ZPP_Set_ZPP_PartitionPair_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::empty","zpp_nape/util/RBTree.hx",2061);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2061)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,empty,return )

bool ZPP_Set_ZPP_PartitionPair_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::verify","zpp_nape/util/RBTree.hx",1996);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1997)
	if ((!(this->empty()))){
		HX_STACK_LINE(2007)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(2008)
		while(((set_ite->prev != null()))){
			HX_STACK_LINE(2008)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(2009)
		while(((set_ite != null()))){
			HX_STACK_LINE(2010)
			::zpp_nape::geom::ZPP_PartitionPair i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2011)
			{
				HX_STACK_LINE(2012)
				bool prei = true;		HX_STACK_VAR(prei,"prei");
				HX_STACK_LINE(2013)
				if ((!(this->empty()))){
					HX_STACK_LINE(2023)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
					HX_STACK_LINE(2024)
					while(((set_ite1->prev != null()))){
						HX_STACK_LINE(2024)
						set_ite1 = set_ite1->prev;
					}
					HX_STACK_LINE(2025)
					while(((set_ite1 != null()))){
						HX_STACK_LINE(2026)
						::zpp_nape::geom::ZPP_PartitionPair j = set_ite1->data;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2027)
						if ((!(prei))){
							HX_STACK_LINE(2028)
							if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
								HX_STACK_LINE(2029)
								return false;
							}
						}
						else{
							HX_STACK_LINE(2031)
							if (((i == j))){
								HX_STACK_LINE(2031)
								prei = false;
							}
							else{
								HX_STACK_LINE(2032)
								if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
									HX_STACK_LINE(2033)
									return false;
								}
							}
						}
						HX_STACK_LINE(2036)
						if (((set_ite1->next != null()))){
							HX_STACK_LINE(2037)
							set_ite1 = set_ite1->next;
							HX_STACK_LINE(2038)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(2038)
								set_ite1 = set_ite1->prev;
							}
						}
						else{
							HX_STACK_LINE(2041)
							while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
								HX_STACK_LINE(2041)
								set_ite1 = set_ite1->parent;
							}
							HX_STACK_LINE(2042)
							set_ite1 = set_ite1->parent;
						}
					}
				}
			}
			HX_STACK_LINE(2048)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(2049)
				set_ite = set_ite->next;
				HX_STACK_LINE(2050)
				while(((set_ite->prev != null()))){
					HX_STACK_LINE(2050)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(2053)
				while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
					HX_STACK_LINE(2053)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(2054)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(2059)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,verify,return )

Void ZPP_Set_ZPP_PartitionPair_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::alloc","zpp_nape/util/RBTree.hx",1987);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,alloc,(void))

Void ZPP_Set_ZPP_PartitionPair_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::free","zpp_nape/util/RBTree.hx",1980);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1981)
		this->data = null();
		HX_STACK_LINE(1982)
		this->lt = null();
		HX_STACK_LINE(1983)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;


ZPP_Set_ZPP_PartitionPair_obj::ZPP_Set_ZPP_PartitionPair_obj()
{
}

void ZPP_Set_ZPP_PartitionPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_PartitionPair);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_PartitionPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_PartitionPair_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_PartitionPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionPair >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_PartitionPair_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_PartitionPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_PartitionPair_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_PartitionPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_PartitionPair_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_PartitionPair_obj::__mClass;

void ZPP_Set_ZPP_PartitionPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_PartitionPair"), hx::TCanCast< ZPP_Set_ZPP_PartitionPair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_PartitionPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
