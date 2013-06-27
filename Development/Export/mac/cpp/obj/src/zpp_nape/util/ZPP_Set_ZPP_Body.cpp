#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_Body
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_Body_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_Body::new","zpp_nape/util/RBTree.hx",175);
{
	HX_STACK_LINE(216)
	this->colour = (int)0;
	HX_STACK_LINE(215)
	this->parent = null();
	HX_STACK_LINE(214)
	this->next = null();
	HX_STACK_LINE(213)
	this->prev = null();
	HX_STACK_LINE(212)
	this->data = null();
	HX_STACK_LINE(211)
	this->swapped = null();
	HX_STACK_LINE(210)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_Body_obj::~ZPP_Set_ZPP_Body_obj() { }

Dynamic ZPP_Set_ZPP_Body_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_Body_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_Body_obj > ZPP_Set_ZPP_Body_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_Body_obj > result = new ZPP_Set_ZPP_Body_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_Body_obj > result = new ZPP_Set_ZPP_Body_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::insert( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::insert","zpp_nape/util/RBTree.hx",997);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1006)
	::zpp_nape::util::ZPP_Set_ZPP_Body x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1007)
	{
		HX_STACK_LINE(1008)
		if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
			HX_STACK_LINE(1008)
			x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
		}
		else{
			HX_STACK_LINE(1015)
			x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
			HX_STACK_LINE(1016)
			::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
			HX_STACK_LINE(1017)
			x->next = null();
		}
		HX_STACK_LINE(1022)
		Dynamic();
	}
	HX_STACK_LINE(1024)
	x->data = obj;
	HX_STACK_LINE(1025)
	if (((this->parent == null()))){
		HX_STACK_LINE(1025)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(1027)
		::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1028)
		while((true)){
			HX_STACK_LINE(1028)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(1029)
				if (((cur->prev == null()))){
					HX_STACK_LINE(1031)
					cur->prev = x;
					HX_STACK_LINE(1032)
					x->parent = cur;
					HX_STACK_LINE(1033)
					break;
				}
				else{
					HX_STACK_LINE(1035)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(1037)
				if (((cur->next == null()))){
					HX_STACK_LINE(1039)
					cur->next = x;
					HX_STACK_LINE(1040)
					x->parent = cur;
					HX_STACK_LINE(1041)
					break;
				}
				else{
					HX_STACK_LINE(1043)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(1047)
	if (((x->parent == null()))){
		HX_STACK_LINE(1047)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(1049)
		x->colour = (int)0;
		HX_STACK_LINE(1050)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(1050)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(1060)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::try_insert( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::try_insert","zpp_nape/util/RBTree.hx",905);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(906)
	::zpp_nape::util::ZPP_Set_ZPP_Body x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(907)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(908)
	if (((this->parent == null()))){
		HX_STACK_LINE(909)
		{
			HX_STACK_LINE(910)
			if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
				HX_STACK_LINE(910)
				x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
			}
			else{
				HX_STACK_LINE(917)
				x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
				HX_STACK_LINE(918)
				::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
				HX_STACK_LINE(919)
				x->next = null();
			}
			HX_STACK_LINE(924)
			Dynamic();
		}
		HX_STACK_LINE(926)
		x->data = obj;
		HX_STACK_LINE(927)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(930)
		cur = this->parent;
		HX_STACK_LINE(931)
		while((true)){
			HX_STACK_LINE(931)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(932)
				if (((cur->prev == null()))){
					HX_STACK_LINE(934)
					{
						HX_STACK_LINE(935)
						if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
							HX_STACK_LINE(935)
							x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
						}
						else{
							HX_STACK_LINE(942)
							x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
							HX_STACK_LINE(943)
							::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
							HX_STACK_LINE(944)
							x->next = null();
						}
						HX_STACK_LINE(949)
						Dynamic();
					}
					HX_STACK_LINE(951)
					x->data = obj;
					HX_STACK_LINE(952)
					cur->prev = x;
					HX_STACK_LINE(953)
					x->parent = cur;
					HX_STACK_LINE(954)
					break;
				}
				else{
					HX_STACK_LINE(956)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(958)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(958)
					if (((cur->next == null()))){
						HX_STACK_LINE(960)
						{
							HX_STACK_LINE(961)
							if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
								HX_STACK_LINE(961)
								x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
							}
							else{
								HX_STACK_LINE(968)
								x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
								HX_STACK_LINE(969)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
								HX_STACK_LINE(970)
								x->next = null();
							}
							HX_STACK_LINE(975)
							Dynamic();
						}
						HX_STACK_LINE(977)
						x->data = obj;
						HX_STACK_LINE(978)
						cur->next = x;
						HX_STACK_LINE(979)
						x->parent = cur;
						HX_STACK_LINE(980)
						break;
					}
					else{
						HX_STACK_LINE(982)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(984)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(987)
	if (((x == null()))){
		HX_STACK_LINE(987)
		return cur;
	}
	else{
		HX_STACK_LINE(989)
		if (((x->parent == null()))){
			HX_STACK_LINE(989)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(991)
			x->colour = (int)0;
			HX_STACK_LINE(992)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(992)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(994)
		return x;
	}
	HX_STACK_LINE(987)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,try_insert,return )

bool ZPP_Set_ZPP_Body_obj::try_insert_bool( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::try_insert_bool","zpp_nape/util/RBTree.hx",813);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(814)
	::zpp_nape::util::ZPP_Set_ZPP_Body x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(815)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(816)
	if (((this->parent == null()))){
		HX_STACK_LINE(817)
		{
			HX_STACK_LINE(818)
			if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
				HX_STACK_LINE(818)
				x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
			}
			else{
				HX_STACK_LINE(825)
				x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
				HX_STACK_LINE(826)
				::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
				HX_STACK_LINE(827)
				x->next = null();
			}
			HX_STACK_LINE(832)
			Dynamic();
		}
		HX_STACK_LINE(834)
		x->data = obj;
		HX_STACK_LINE(835)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(838)
		cur = this->parent;
		HX_STACK_LINE(839)
		while((true)){
			HX_STACK_LINE(839)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(840)
				if (((cur->prev == null()))){
					HX_STACK_LINE(842)
					{
						HX_STACK_LINE(843)
						if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
							HX_STACK_LINE(843)
							x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
						}
						else{
							HX_STACK_LINE(850)
							x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
							HX_STACK_LINE(851)
							::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
							HX_STACK_LINE(852)
							x->next = null();
						}
						HX_STACK_LINE(857)
						Dynamic();
					}
					HX_STACK_LINE(859)
					x->data = obj;
					HX_STACK_LINE(860)
					cur->prev = x;
					HX_STACK_LINE(861)
					x->parent = cur;
					HX_STACK_LINE(862)
					break;
				}
				else{
					HX_STACK_LINE(864)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(866)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(866)
					if (((cur->next == null()))){
						HX_STACK_LINE(868)
						{
							HX_STACK_LINE(869)
							if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
								HX_STACK_LINE(869)
								x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
							}
							else{
								HX_STACK_LINE(876)
								x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
								HX_STACK_LINE(877)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
								HX_STACK_LINE(878)
								x->next = null();
							}
							HX_STACK_LINE(883)
							Dynamic();
						}
						HX_STACK_LINE(885)
						x->data = obj;
						HX_STACK_LINE(886)
						cur->next = x;
						HX_STACK_LINE(887)
						x->parent = cur;
						HX_STACK_LINE(888)
						break;
					}
					else{
						HX_STACK_LINE(890)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(892)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(895)
	if (((x == null()))){
		HX_STACK_LINE(895)
		return false;
	}
	else{
		HX_STACK_LINE(897)
		if (((x->parent == null()))){
			HX_STACK_LINE(897)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(899)
			x->colour = (int)0;
			HX_STACK_LINE(900)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(900)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(902)
		return true;
	}
	HX_STACK_LINE(895)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_Body_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_Body x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::__fix_dbl_red","zpp_nape/util/RBTree.hx",724);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(724)
		while((true)){
			HX_STACK_LINE(726)
			::zpp_nape::util::ZPP_Set_ZPP_Body par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(727)
			::zpp_nape::util::ZPP_Set_ZPP_Body g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(728)
			if (((g == null()))){
				HX_STACK_LINE(729)
				par->colour = (int)1;
				HX_STACK_LINE(730)
				break;
			}
			HX_STACK_LINE(732)
			::zpp_nape::util::ZPP_Set_ZPP_Body n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_Body n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_Body n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_Body t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_Body t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_Body t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_Body t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(733)
			if (((par == g->prev))){
				HX_STACK_LINE(734)
				n3 = g;
				HX_STACK_LINE(735)
				t4 = g->next;
				HX_STACK_LINE(736)
				if (((x == par->prev))){
					HX_STACK_LINE(737)
					n1 = x;
					HX_STACK_LINE(738)
					n2 = par;
					HX_STACK_LINE(739)
					t1 = x->prev;
					HX_STACK_LINE(740)
					t2 = x->next;
					HX_STACK_LINE(741)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(744)
					n1 = par;
					HX_STACK_LINE(745)
					n2 = x;
					HX_STACK_LINE(746)
					t1 = par->prev;
					HX_STACK_LINE(747)
					t2 = x->prev;
					HX_STACK_LINE(748)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(752)
				n1 = g;
				HX_STACK_LINE(753)
				t1 = g->prev;
				HX_STACK_LINE(754)
				if (((x == par->prev))){
					HX_STACK_LINE(755)
					n2 = x;
					HX_STACK_LINE(756)
					n3 = par;
					HX_STACK_LINE(757)
					t2 = x->prev;
					HX_STACK_LINE(758)
					t3 = x->next;
					HX_STACK_LINE(759)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(762)
					n2 = par;
					HX_STACK_LINE(763)
					n3 = x;
					HX_STACK_LINE(764)
					t2 = par->prev;
					HX_STACK_LINE(765)
					t3 = x->prev;
					HX_STACK_LINE(766)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(769)
			{
				HX_STACK_LINE(770)
				::zpp_nape::util::ZPP_Set_ZPP_Body par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(771)
				if (((par1 == null()))){
					HX_STACK_LINE(771)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(774)
					if (((par1->prev == g))){
						HX_STACK_LINE(774)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(775)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(776)
				if (((n2 != null()))){
					HX_STACK_LINE(776)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(779)
				n1->prev = t1;
				HX_STACK_LINE(780)
				if (((t1 != null()))){
					HX_STACK_LINE(780)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(782)
			{
				HX_STACK_LINE(783)
				n1->next = t2;
				HX_STACK_LINE(784)
				if (((t2 != null()))){
					HX_STACK_LINE(784)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(786)
			{
				HX_STACK_LINE(787)
				n2->prev = n1;
				HX_STACK_LINE(788)
				if (((n1 != null()))){
					HX_STACK_LINE(788)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(790)
			{
				HX_STACK_LINE(791)
				n2->next = n3;
				HX_STACK_LINE(792)
				if (((n3 != null()))){
					HX_STACK_LINE(792)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(794)
			{
				HX_STACK_LINE(795)
				n3->prev = t3;
				HX_STACK_LINE(796)
				if (((t3 != null()))){
					HX_STACK_LINE(796)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(798)
			{
				HX_STACK_LINE(799)
				n3->next = t4;
				HX_STACK_LINE(800)
				if (((t4 != null()))){
					HX_STACK_LINE(800)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(802)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(803)
			n1->colour = (int)1;
			HX_STACK_LINE(804)
			n3->colour = (int)1;
			HX_STACK_LINE(805)
			if (((n2 == this->parent))){
				HX_STACK_LINE(805)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(806)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(807)
					x = n2;
					HX_STACK_LINE(808)
					continue;
				}
			}
			HX_STACK_LINE(810)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_Body_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_Body negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::__fix_neg_red","zpp_nape/util/RBTree.hx",657);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(658)
		::zpp_nape::util::ZPP_Set_ZPP_Body parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_Body Block( ::zpp_nape::util::ZPP_Set_ZPP_Body_obj *__this,::zpp_nape::util::ZPP_Set_ZPP_Body &negred,::zpp_nape::util::ZPP_Set_ZPP_Body &parent){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",659);
				{
					HX_STACK_LINE(660)
					::zpp_nape::util::ZPP_Set_ZPP_Body nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(661)
					::zpp_nape::util::ZPP_Set_ZPP_Body nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(662)
					::zpp_nape::util::ZPP_Set_ZPP_Body trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(663)
					::zpp_nape::util::ZPP_Set_ZPP_Body trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(664)
					nl->colour = (int)0;
					HX_STACK_LINE(665)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(666)
					{
						HX_STACK_LINE(667)
						negred->next = trl;
						HX_STACK_LINE(668)
						if (((trl != null()))){
							HX_STACK_LINE(668)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(670)
					{
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Body t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(672)
						parent->data = nr->data;
						HX_STACK_LINE(673)
						nr->data = t;
					}
					HX_STACK_LINE(675)
					if (((__this->swapped != null()))){
						HX_STACK_LINE(675)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(676)
					{
						HX_STACK_LINE(677)
						nr->prev = trr;
						HX_STACK_LINE(678)
						if (((trr != null()))){
							HX_STACK_LINE(678)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(680)
					{
						HX_STACK_LINE(681)
						nr->next = parent->next;
						HX_STACK_LINE(682)
						if (((parent->next != null()))){
							HX_STACK_LINE(682)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(684)
					{
						HX_STACK_LINE(685)
						parent->next = nr;
						HX_STACK_LINE(686)
						if (((nr != null()))){
							HX_STACK_LINE(686)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(688)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_Body Block( ::zpp_nape::util::ZPP_Set_ZPP_Body_obj *__this,::zpp_nape::util::ZPP_Set_ZPP_Body &negred,::zpp_nape::util::ZPP_Set_ZPP_Body &parent){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",690);
				{
					HX_STACK_LINE(691)
					::zpp_nape::util::ZPP_Set_ZPP_Body nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(692)
					::zpp_nape::util::ZPP_Set_ZPP_Body nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(693)
					::zpp_nape::util::ZPP_Set_ZPP_Body trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(694)
					::zpp_nape::util::ZPP_Set_ZPP_Body trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(695)
					nl->colour = (int)0;
					HX_STACK_LINE(696)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(697)
					{
						HX_STACK_LINE(698)
						negred->prev = trl;
						HX_STACK_LINE(699)
						if (((trl != null()))){
							HX_STACK_LINE(699)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(701)
					{
						HX_STACK_LINE(702)
						::zpp_nape::phys::ZPP_Body t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(703)
						parent->data = nr->data;
						HX_STACK_LINE(704)
						nr->data = t;
					}
					HX_STACK_LINE(706)
					if (((__this->swapped != null()))){
						HX_STACK_LINE(706)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(707)
					{
						HX_STACK_LINE(708)
						nr->next = trr;
						HX_STACK_LINE(709)
						if (((trr != null()))){
							HX_STACK_LINE(709)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(711)
					{
						HX_STACK_LINE(712)
						nr->prev = parent->prev;
						HX_STACK_LINE(713)
						if (((parent->prev != null()))){
							HX_STACK_LINE(713)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(715)
					{
						HX_STACK_LINE(716)
						parent->prev = nr;
						HX_STACK_LINE(717)
						if (((nr != null()))){
							HX_STACK_LINE(717)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(719)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(659)
		::zpp_nape::util::ZPP_Set_ZPP_Body child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(_Function_1_1::Block(this,negred,parent)) : ::zpp_nape::util::ZPP_Set_ZPP_Body(_Function_1_2::Block(this,negred,parent)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(721)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(721)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(722)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(722)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_Body node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::clear_node","zpp_nape/util/RBTree.hx",622);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(631)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(632)
	::zpp_nape::util::ZPP_Set_ZPP_Body ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(633)
	if (((ret != null()))){
		HX_STACK_LINE(634)
		if (((node == ret->prev))){
			HX_STACK_LINE(634)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(635)
			ret->next = null();
		}
		HX_STACK_LINE(636)
		node->parent = null();
	}
	HX_STACK_LINE(638)
	{
		HX_STACK_LINE(639)
		::zpp_nape::util::ZPP_Set_ZPP_Body o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(648)
		{
			HX_STACK_LINE(648)
			o->data = null();
			HX_STACK_LINE(648)
			o->lt = null();
			HX_STACK_LINE(648)
			o->swapped = null();
		}
		HX_STACK_LINE(649)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
		HX_STACK_LINE(650)
		::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
	}
	HX_STACK_LINE(655)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_Body_obj,clear_node,return )

Void ZPP_Set_ZPP_Body_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::clear_with","zpp_nape/util/RBTree.hx",613);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(613)
		if (((this->parent == null()))){
			HX_STACK_LINE(614)
			return null();
		}
		else{
			HX_STACK_LINE(616)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(617)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_Body Block( ::zpp_nape::util::ZPP_Set_ZPP_Body &cur,Dynamic &lambda){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",617);
						{
							HX_STACK_LINE(617)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(617)
							::zpp_nape::util::ZPP_Set_ZPP_Body ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(617)
							if (((ret != null()))){
								HX_STACK_LINE(617)
								if (((cur == ret->prev))){
									HX_STACK_LINE(617)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(617)
									ret->next = null();
								}
								HX_STACK_LINE(617)
								cur->parent = null();
							}
							HX_STACK_LINE(617)
							{
								HX_STACK_LINE(617)
								::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(617)
								{
									HX_STACK_LINE(617)
									o->data = null();
									HX_STACK_LINE(617)
									o->lt = null();
									HX_STACK_LINE(617)
									o->swapped = null();
								}
								HX_STACK_LINE(617)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
								HX_STACK_LINE(617)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
							}
							HX_STACK_LINE(617)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(617)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_Body((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_Body(_Function_3_1::Block(cur,lambda)) )) );
			}
			HX_STACK_LINE(618)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,clear_with,(void))

Void ZPP_Set_ZPP_Body_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::clear","zpp_nape/util/RBTree.hx",609);
		HX_STACK_THIS(this);
		HX_STACK_LINE(609)
		if (((this->parent == null()))){
			HX_STACK_LINE(610)
			Dynamic();
		}
		else{
			HX_STACK_LINE(610)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(610)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_Body Block( ::zpp_nape::util::ZPP_Set_ZPP_Body &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",610);
						{
							HX_STACK_LINE(610)
							::zpp_nape::util::ZPP_Set_ZPP_Body ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(610)
							if (((ret != null()))){
								HX_STACK_LINE(610)
								if (((cur == ret->prev))){
									HX_STACK_LINE(610)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(610)
									ret->next = null();
								}
								HX_STACK_LINE(610)
								cur->parent = null();
							}
							HX_STACK_LINE(610)
							{
								HX_STACK_LINE(610)
								::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(610)
								{
									HX_STACK_LINE(610)
									o->data = null();
									HX_STACK_LINE(610)
									o->lt = null();
									HX_STACK_LINE(610)
									o->swapped = null();
								}
								HX_STACK_LINE(610)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
								HX_STACK_LINE(610)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
							}
							HX_STACK_LINE(610)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(610)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_Body((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_Body(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(610)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,clear,(void))

Void ZPP_Set_ZPP_Body_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_Body cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::remove_node","zpp_nape/util/RBTree.hx",489);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(498)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(499)
			::zpp_nape::util::ZPP_Set_ZPP_Body sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(500)
			while(((sm->prev != null()))){
				HX_STACK_LINE(500)
				sm = sm->prev;
			}
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(502)
				::zpp_nape::phys::ZPP_Body t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(503)
				cur->data = sm->data;
				HX_STACK_LINE(504)
				sm->data = t;
			}
			HX_STACK_LINE(506)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(506)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(507)
			cur = sm;
		}
		HX_STACK_LINE(517)
		::zpp_nape::util::ZPP_Set_ZPP_Body child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(518)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(518)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(519)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(520)
				if (((cur->parent != null()))){
					HX_STACK_LINE(521)
					::zpp_nape::util::ZPP_Set_ZPP_Body parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(522)
					while((true)){
						HX_STACK_LINE(523)
						(parent->colour)++;
						HX_STACK_LINE(524)
						(parent->prev->colour)--;
						HX_STACK_LINE(525)
						(parent->next->colour)--;
						HX_STACK_LINE(526)
						{
							HX_STACK_LINE(527)
							::zpp_nape::util::ZPP_Set_ZPP_Body child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(528)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(529)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(530)
								break;
							}
							else{
								HX_STACK_LINE(532)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(533)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(535)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(536)
										break;
									}
									HX_STACK_LINE(539)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(541)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(542)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(547)
						{
							HX_STACK_LINE(548)
							::zpp_nape::util::ZPP_Set_ZPP_Body child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(549)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(550)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(551)
								break;
							}
							else{
								HX_STACK_LINE(553)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(554)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(556)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(557)
										break;
									}
									HX_STACK_LINE(560)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(562)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(563)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(568)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(568)
							if (((parent->parent == null()))){
								HX_STACK_LINE(569)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(573)
								parent = parent->parent;
								HX_STACK_LINE(574)
								continue;
							}
						}
						HX_STACK_LINE(577)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(581)
		{
			HX_STACK_LINE(582)
			::zpp_nape::util::ZPP_Set_ZPP_Body par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(583)
			if (((par == null()))){
				HX_STACK_LINE(583)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(586)
				if (((par->prev == cur))){
					HX_STACK_LINE(586)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(587)
					par->next = child;
				}
			}
			HX_STACK_LINE(588)
			if (((child != null()))){
				HX_STACK_LINE(588)
				child->parent = par;
			}
		}
		HX_STACK_LINE(590)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(592)
			::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(601)
			{
				HX_STACK_LINE(601)
				o->data = null();
				HX_STACK_LINE(601)
				o->lt = null();
				HX_STACK_LINE(601)
				o->swapped = null();
			}
			HX_STACK_LINE(602)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
			HX_STACK_LINE(603)
			::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,remove_node,(void))

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::predecessor( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::predecessor","zpp_nape/util/RBTree.hx",477);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(486)
	::zpp_nape::util::ZPP_Set_ZPP_Body node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(487)
	return (  (((node == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,predecessor,return )

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::successor( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::successor","zpp_nape/util/RBTree.hx",465);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(474)
	::zpp_nape::util::ZPP_Set_ZPP_Body node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(475)
	return (  (((node == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_Body cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::predecessor_node","zpp_nape/util/RBTree.hx",442);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(451)
	if (((cur->prev != null()))){
		HX_STACK_LINE(452)
		cur = cur->prev;
		HX_STACK_LINE(453)
		while(((cur->next != null()))){
			HX_STACK_LINE(453)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(456)
		::zpp_nape::util::ZPP_Set_ZPP_Body pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(457)
		cur = cur->parent;
		HX_STACK_LINE(458)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(459)
			pre = cur;
			HX_STACK_LINE(460)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(463)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_Body cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::successor_node","zpp_nape/util/RBTree.hx",419);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(428)
	if (((cur->next != null()))){
		HX_STACK_LINE(429)
		cur = cur->next;
		HX_STACK_LINE(430)
		while(((cur->prev != null()))){
			HX_STACK_LINE(430)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(433)
		::zpp_nape::util::ZPP_Set_ZPP_Body pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(434)
		cur = cur->parent;
		HX_STACK_LINE(435)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(436)
			pre = cur;
			HX_STACK_LINE(437)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(440)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,successor_node,return )

Void ZPP_Set_ZPP_Body_obj::remove( ::zpp_nape::phys::ZPP_Body obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::remove","zpp_nape/util/RBTree.hx",407);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(408)
		::zpp_nape::util::ZPP_Set_ZPP_Body node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(417)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,remove,(void))

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::pop_front","zpp_nape/util/RBTree.hx",392);
	HX_STACK_THIS(this);
	HX_STACK_LINE(401)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(402)
	while(((cur->prev != null()))){
		HX_STACK_LINE(402)
		cur = cur->prev;
	}
	HX_STACK_LINE(403)
	::zpp_nape::phys::ZPP_Body ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(404)
	this->remove_node(cur);
	HX_STACK_LINE(405)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,pop_front,return )

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::first","zpp_nape/util/RBTree.hx",379);
	HX_STACK_THIS(this);
	HX_STACK_LINE(388)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(389)
	while(((cur->prev != null()))){
		HX_STACK_LINE(389)
		cur = cur->prev;
	}
	HX_STACK_LINE(390)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,first,return )

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::lower_bound( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::lower_bound","zpp_nape/util/RBTree.hx",342);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::phys::ZPP_Body Block( ::zpp_nape::util::ZPP_Set_ZPP_Body_obj *__this,::zpp_nape::phys::ZPP_Body &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",343);
			{
				HX_STACK_LINE(344)
				::zpp_nape::phys::ZPP_Body ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(345)
				if ((!(__this->empty()))){
					HX_STACK_LINE(355)
					::zpp_nape::util::ZPP_Set_ZPP_Body set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
					HX_STACK_LINE(356)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(356)
						set_ite = set_ite->prev;
					}
					HX_STACK_LINE(357)
					while(((set_ite != null()))){
						HX_STACK_LINE(358)
						::zpp_nape::phys::ZPP_Body elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
						HX_STACK_LINE(359)
						if ((!(__this->lt(elt,obj)))){
							HX_STACK_LINE(361)
							ret = elt;
							HX_STACK_LINE(362)
							break;
						}
						HX_STACK_LINE(365)
						if (((set_ite->next != null()))){
							HX_STACK_LINE(366)
							set_ite = set_ite->next;
							HX_STACK_LINE(367)
							while(((set_ite->prev != null()))){
								HX_STACK_LINE(367)
								set_ite = set_ite->prev;
							}
						}
						else{
							HX_STACK_LINE(370)
							while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
								HX_STACK_LINE(370)
								set_ite = set_ite->parent;
							}
							HX_STACK_LINE(371)
							set_ite = set_ite->parent;
						}
					}
				}
				HX_STACK_LINE(376)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(342)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::find_weak( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::find_weak","zpp_nape/util/RBTree.hx",333);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(334)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(335)
	while(((cur != null()))){
		HX_STACK_LINE(335)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(336)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(337)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(337)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(338)
				break;
			}
		}
	}
	HX_STACK_LINE(340)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,find_weak,return )

bool ZPP_Set_ZPP_Body_obj::has_weak( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::has_weak","zpp_nape/util/RBTree.hx",330);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(330)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::find( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::find","zpp_nape/util/RBTree.hx",322);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(323)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(324)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(324)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(325)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(326)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(328)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,find,return )

bool ZPP_Set_ZPP_Body_obj::has( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::has","zpp_nape/util/RBTree.hx",319);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(319)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,has,return )

int ZPP_Set_ZPP_Body_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::size","zpp_nape/util/RBTree.hx",289);
	HX_STACK_THIS(this);
	HX_STACK_LINE(290)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(291)
	if ((!(this->empty()))){
		HX_STACK_LINE(301)
		::zpp_nape::util::ZPP_Set_ZPP_Body set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(302)
		while(((set_ite->prev != null()))){
			HX_STACK_LINE(302)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(303)
		while(((set_ite != null()))){
			HX_STACK_LINE(304)
			::zpp_nape::phys::ZPP_Body i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(305)
			(ret)++;
			HX_STACK_LINE(306)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(307)
				set_ite = set_ite->next;
				HX_STACK_LINE(308)
				while(((set_ite->prev != null()))){
					HX_STACK_LINE(308)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(311)
				while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
					HX_STACK_LINE(311)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(312)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(317)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,size,return )

bool ZPP_Set_ZPP_Body_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::singular","zpp_nape/util/RBTree.hx",286);
	HX_STACK_THIS(this);
	HX_STACK_LINE(286)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,singular,return )

bool ZPP_Set_ZPP_Body_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::empty","zpp_nape/util/RBTree.hx",283);
	HX_STACK_THIS(this);
	HX_STACK_LINE(283)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,empty,return )

bool ZPP_Set_ZPP_Body_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::verify","zpp_nape/util/RBTree.hx",218);
	HX_STACK_THIS(this);
	HX_STACK_LINE(219)
	if ((!(this->empty()))){
		HX_STACK_LINE(229)
		::zpp_nape::util::ZPP_Set_ZPP_Body set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(230)
		while(((set_ite->prev != null()))){
			HX_STACK_LINE(230)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(231)
		while(((set_ite != null()))){
			HX_STACK_LINE(232)
			::zpp_nape::phys::ZPP_Body i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(233)
			{
				HX_STACK_LINE(234)
				bool prei = true;		HX_STACK_VAR(prei,"prei");
				HX_STACK_LINE(235)
				if ((!(this->empty()))){
					HX_STACK_LINE(245)
					::zpp_nape::util::ZPP_Set_ZPP_Body set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
					HX_STACK_LINE(246)
					while(((set_ite1->prev != null()))){
						HX_STACK_LINE(246)
						set_ite1 = set_ite1->prev;
					}
					HX_STACK_LINE(247)
					while(((set_ite1 != null()))){
						HX_STACK_LINE(248)
						::zpp_nape::phys::ZPP_Body j = set_ite1->data;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(249)
						if ((!(prei))){
							HX_STACK_LINE(250)
							if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
								HX_STACK_LINE(251)
								return false;
							}
						}
						else{
							HX_STACK_LINE(253)
							if (((i == j))){
								HX_STACK_LINE(253)
								prei = false;
							}
							else{
								HX_STACK_LINE(254)
								if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
									HX_STACK_LINE(255)
									return false;
								}
							}
						}
						HX_STACK_LINE(258)
						if (((set_ite1->next != null()))){
							HX_STACK_LINE(259)
							set_ite1 = set_ite1->next;
							HX_STACK_LINE(260)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(260)
								set_ite1 = set_ite1->prev;
							}
						}
						else{
							HX_STACK_LINE(263)
							while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
								HX_STACK_LINE(263)
								set_ite1 = set_ite1->parent;
							}
							HX_STACK_LINE(264)
							set_ite1 = set_ite1->parent;
						}
					}
				}
			}
			HX_STACK_LINE(270)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(271)
				set_ite = set_ite->next;
				HX_STACK_LINE(272)
				while(((set_ite->prev != null()))){
					HX_STACK_LINE(272)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(275)
				while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
					HX_STACK_LINE(275)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(276)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(281)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,verify,return )

Void ZPP_Set_ZPP_Body_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::alloc","zpp_nape/util/RBTree.hx",209);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,alloc,(void))

Void ZPP_Set_ZPP_Body_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::free","zpp_nape/util/RBTree.hx",202);
		HX_STACK_THIS(this);
		HX_STACK_LINE(203)
		this->data = null();
		HX_STACK_LINE(204)
		this->lt = null();
		HX_STACK_LINE(205)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::zpp_pool;


ZPP_Set_ZPP_Body_obj::ZPP_Set_ZPP_Body_obj()
{
}

void ZPP_Set_ZPP_Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_Body);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_Body_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_Body_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_Body_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_Body_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_Body_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_Body_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_Body_obj::__mClass;

void ZPP_Set_ZPP_Body_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_Body"), hx::TCanCast< ZPP_Set_ZPP_Body_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_Body_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
