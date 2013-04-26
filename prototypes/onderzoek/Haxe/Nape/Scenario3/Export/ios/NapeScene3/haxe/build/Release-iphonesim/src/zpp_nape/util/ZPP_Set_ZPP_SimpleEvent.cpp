#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleEvent
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_SimpleEvent_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::new","zpp_nape/util/RBTree.hx",5509);
{
	HX_STACK_LINE(5550)
	this->colour = (int)0;
	HX_STACK_LINE(5549)
	this->parent = null();
	HX_STACK_LINE(5548)
	this->next = null();
	HX_STACK_LINE(5547)
	this->prev = null();
	HX_STACK_LINE(5546)
	this->data = null();
	HX_STACK_LINE(5545)
	this->swapped = null();
	HX_STACK_LINE(5544)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_SimpleEvent_obj::~ZPP_Set_ZPP_SimpleEvent_obj() { }

Dynamic ZPP_Set_ZPP_SimpleEvent_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_SimpleEvent_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_SimpleEvent_obj > ZPP_Set_ZPP_SimpleEvent_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleEvent_obj > result = new ZPP_Set_ZPP_SimpleEvent_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_SimpleEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleEvent_obj > result = new ZPP_Set_ZPP_SimpleEvent_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::insert( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::insert","zpp_nape/util/RBTree.hx",6331);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6332)
	{
	}
	HX_STACK_LINE(6340)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(6341)
	{
		HX_STACK_LINE(6342)
		if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
			HX_STACK_LINE(6342)
			x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
		}
		else{
			HX_STACK_LINE(6349)
			x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
			HX_STACK_LINE(6350)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
			HX_STACK_LINE(6351)
			x->next = null();
		}
		HX_STACK_LINE(6356)
		Dynamic();
	}
	HX_STACK_LINE(6358)
	x->data = obj;
	HX_STACK_LINE(6359)
	if (((this->parent == null()))){
		HX_STACK_LINE(6359)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(6361)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6362)
		while((true)){
			HX_STACK_LINE(6362)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(6363)
				if (((cur->prev == null()))){
					HX_STACK_LINE(6365)
					cur->prev = x;
					HX_STACK_LINE(6366)
					x->parent = cur;
					HX_STACK_LINE(6367)
					break;
				}
				else{
					HX_STACK_LINE(6369)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(6371)
				if (((cur->next == null()))){
					HX_STACK_LINE(6373)
					cur->next = x;
					HX_STACK_LINE(6374)
					x->parent = cur;
					HX_STACK_LINE(6375)
					break;
				}
				else{
					HX_STACK_LINE(6377)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(6381)
	if (((x->parent == null()))){
		HX_STACK_LINE(6381)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(6383)
		x->colour = (int)0;
		HX_STACK_LINE(6384)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(6384)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(6386)
	{
	}
	HX_STACK_LINE(6394)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::try_insert( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::try_insert","zpp_nape/util/RBTree.hx",6239);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6240)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(6241)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6242)
	if (((this->parent == null()))){
		HX_STACK_LINE(6243)
		{
			HX_STACK_LINE(6244)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
				HX_STACK_LINE(6244)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
			}
			else{
				HX_STACK_LINE(6251)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
				HX_STACK_LINE(6252)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
				HX_STACK_LINE(6253)
				x->next = null();
			}
			HX_STACK_LINE(6258)
			Dynamic();
		}
		HX_STACK_LINE(6260)
		x->data = obj;
		HX_STACK_LINE(6261)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(6264)
		cur = this->parent;
		HX_STACK_LINE(6265)
		while((true)){
			HX_STACK_LINE(6265)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(6266)
				if (((cur->prev == null()))){
					HX_STACK_LINE(6268)
					{
						HX_STACK_LINE(6269)
						if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
							HX_STACK_LINE(6269)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
						}
						else{
							HX_STACK_LINE(6276)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
							HX_STACK_LINE(6277)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
							HX_STACK_LINE(6278)
							x->next = null();
						}
						HX_STACK_LINE(6283)
						Dynamic();
					}
					HX_STACK_LINE(6285)
					x->data = obj;
					HX_STACK_LINE(6286)
					cur->prev = x;
					HX_STACK_LINE(6287)
					x->parent = cur;
					HX_STACK_LINE(6288)
					break;
				}
				else{
					HX_STACK_LINE(6290)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(6292)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(6292)
					if (((cur->next == null()))){
						HX_STACK_LINE(6294)
						{
							HX_STACK_LINE(6295)
							if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
								HX_STACK_LINE(6295)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
							}
							else{
								HX_STACK_LINE(6302)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(6303)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
								HX_STACK_LINE(6304)
								x->next = null();
							}
							HX_STACK_LINE(6309)
							Dynamic();
						}
						HX_STACK_LINE(6311)
						x->data = obj;
						HX_STACK_LINE(6312)
						cur->next = x;
						HX_STACK_LINE(6313)
						x->parent = cur;
						HX_STACK_LINE(6314)
						break;
					}
					else{
						HX_STACK_LINE(6316)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(6318)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(6321)
	if (((x == null()))){
		HX_STACK_LINE(6321)
		return cur;
	}
	else{
		HX_STACK_LINE(6323)
		if (((x->parent == null()))){
			HX_STACK_LINE(6323)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(6325)
			x->colour = (int)0;
			HX_STACK_LINE(6326)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(6326)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(6328)
		return x;
	}
	HX_STACK_LINE(6321)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,try_insert,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::try_insert_bool( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::try_insert_bool","zpp_nape/util/RBTree.hx",6147);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6148)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(6149)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6150)
	if (((this->parent == null()))){
		HX_STACK_LINE(6151)
		{
			HX_STACK_LINE(6152)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
				HX_STACK_LINE(6152)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
			}
			else{
				HX_STACK_LINE(6159)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
				HX_STACK_LINE(6160)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
				HX_STACK_LINE(6161)
				x->next = null();
			}
			HX_STACK_LINE(6166)
			Dynamic();
		}
		HX_STACK_LINE(6168)
		x->data = obj;
		HX_STACK_LINE(6169)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(6172)
		cur = this->parent;
		HX_STACK_LINE(6173)
		while((true)){
			HX_STACK_LINE(6173)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(6174)
				if (((cur->prev == null()))){
					HX_STACK_LINE(6176)
					{
						HX_STACK_LINE(6177)
						if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
							HX_STACK_LINE(6177)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
						}
						else{
							HX_STACK_LINE(6184)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
							HX_STACK_LINE(6185)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
							HX_STACK_LINE(6186)
							x->next = null();
						}
						HX_STACK_LINE(6191)
						Dynamic();
					}
					HX_STACK_LINE(6193)
					x->data = obj;
					HX_STACK_LINE(6194)
					cur->prev = x;
					HX_STACK_LINE(6195)
					x->parent = cur;
					HX_STACK_LINE(6196)
					break;
				}
				else{
					HX_STACK_LINE(6198)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(6200)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(6200)
					if (((cur->next == null()))){
						HX_STACK_LINE(6202)
						{
							HX_STACK_LINE(6203)
							if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
								HX_STACK_LINE(6203)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
							}
							else{
								HX_STACK_LINE(6210)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(6211)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
								HX_STACK_LINE(6212)
								x->next = null();
							}
							HX_STACK_LINE(6217)
							Dynamic();
						}
						HX_STACK_LINE(6219)
						x->data = obj;
						HX_STACK_LINE(6220)
						cur->next = x;
						HX_STACK_LINE(6221)
						x->parent = cur;
						HX_STACK_LINE(6222)
						break;
					}
					else{
						HX_STACK_LINE(6224)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(6226)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(6229)
	if (((x == null()))){
		HX_STACK_LINE(6229)
		return false;
	}
	else{
		HX_STACK_LINE(6231)
		if (((x->parent == null()))){
			HX_STACK_LINE(6231)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(6233)
			x->colour = (int)0;
			HX_STACK_LINE(6234)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(6234)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(6236)
		return true;
	}
	HX_STACK_LINE(6229)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_SimpleEvent_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::__fix_dbl_red","zpp_nape/util/RBTree.hx",6058);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(6058)
		while((true)){
			HX_STACK_LINE(6060)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(6061)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(6062)
			if (((g == null()))){
				HX_STACK_LINE(6063)
				par->colour = (int)1;
				HX_STACK_LINE(6064)
				break;
			}
			HX_STACK_LINE(6066)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(6067)
			if (((par == g->prev))){
				HX_STACK_LINE(6068)
				n3 = g;
				HX_STACK_LINE(6069)
				t4 = g->next;
				HX_STACK_LINE(6070)
				if (((x == par->prev))){
					HX_STACK_LINE(6071)
					n1 = x;
					HX_STACK_LINE(6072)
					n2 = par;
					HX_STACK_LINE(6073)
					t1 = x->prev;
					HX_STACK_LINE(6074)
					t2 = x->next;
					HX_STACK_LINE(6075)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(6078)
					n1 = par;
					HX_STACK_LINE(6079)
					n2 = x;
					HX_STACK_LINE(6080)
					t1 = par->prev;
					HX_STACK_LINE(6081)
					t2 = x->prev;
					HX_STACK_LINE(6082)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(6086)
				n1 = g;
				HX_STACK_LINE(6087)
				t1 = g->prev;
				HX_STACK_LINE(6088)
				if (((x == par->prev))){
					HX_STACK_LINE(6089)
					n2 = x;
					HX_STACK_LINE(6090)
					n3 = par;
					HX_STACK_LINE(6091)
					t2 = x->prev;
					HX_STACK_LINE(6092)
					t3 = x->next;
					HX_STACK_LINE(6093)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(6096)
					n2 = par;
					HX_STACK_LINE(6097)
					n3 = x;
					HX_STACK_LINE(6098)
					t2 = par->prev;
					HX_STACK_LINE(6099)
					t3 = x->prev;
					HX_STACK_LINE(6100)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(6103)
			{
				HX_STACK_LINE(6104)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(6105)
				if (((par1 == null()))){
					HX_STACK_LINE(6105)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(6108)
					if (((par1->prev == g))){
						HX_STACK_LINE(6108)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(6109)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(6110)
				if (((n2 != null()))){
					HX_STACK_LINE(6110)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(6112)
			{
				HX_STACK_LINE(6113)
				n1->prev = t1;
				HX_STACK_LINE(6114)
				if (((t1 != null()))){
					HX_STACK_LINE(6114)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(6116)
			{
				HX_STACK_LINE(6117)
				n1->next = t2;
				HX_STACK_LINE(6118)
				if (((t2 != null()))){
					HX_STACK_LINE(6118)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(6120)
			{
				HX_STACK_LINE(6121)
				n2->prev = n1;
				HX_STACK_LINE(6122)
				if (((n1 != null()))){
					HX_STACK_LINE(6122)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(6124)
			{
				HX_STACK_LINE(6125)
				n2->next = n3;
				HX_STACK_LINE(6126)
				if (((n3 != null()))){
					HX_STACK_LINE(6126)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(6128)
			{
				HX_STACK_LINE(6129)
				n3->prev = t3;
				HX_STACK_LINE(6130)
				if (((t3 != null()))){
					HX_STACK_LINE(6130)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(6132)
			{
				HX_STACK_LINE(6133)
				n3->next = t4;
				HX_STACK_LINE(6134)
				if (((t4 != null()))){
					HX_STACK_LINE(6134)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(6136)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(6137)
			n1->colour = (int)1;
			HX_STACK_LINE(6138)
			n3->colour = (int)1;
			HX_STACK_LINE(6139)
			if (((n2 == this->parent))){
				HX_STACK_LINE(6139)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(6140)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(6141)
					x = n2;
					HX_STACK_LINE(6142)
					continue;
				}
			}
			HX_STACK_LINE(6144)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_SimpleEvent_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::__fix_neg_red","zpp_nape/util/RBTree.hx",5991);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(5992)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent &negred,::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent &parent,::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5993);
				{
					HX_STACK_LINE(5994)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(5995)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(5996)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(5997)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(5998)
					nl->colour = (int)0;
					HX_STACK_LINE(5999)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(6000)
					{
						HX_STACK_LINE(6001)
						negred->next = trl;
						HX_STACK_LINE(6002)
						if (((trl != null()))){
							HX_STACK_LINE(6002)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(6004)
					{
						HX_STACK_LINE(6005)
						::zpp_nape::geom::ZPP_SimpleEvent t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(6006)
						parent->data = nr->data;
						HX_STACK_LINE(6007)
						nr->data = t;
					}
					HX_STACK_LINE(6009)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(6009)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(6010)
					{
						HX_STACK_LINE(6011)
						nr->prev = trr;
						HX_STACK_LINE(6012)
						if (((trr != null()))){
							HX_STACK_LINE(6012)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(6014)
					{
						HX_STACK_LINE(6015)
						nr->next = parent->next;
						HX_STACK_LINE(6016)
						if (((parent->next != null()))){
							HX_STACK_LINE(6016)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(6018)
					{
						HX_STACK_LINE(6019)
						parent->next = nr;
						HX_STACK_LINE(6020)
						if (((nr != null()))){
							HX_STACK_LINE(6020)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(6022)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent &negred,::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent &parent,::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",6024);
				{
					HX_STACK_LINE(6025)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(6026)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(6027)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(6028)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(6029)
					nl->colour = (int)0;
					HX_STACK_LINE(6030)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(6031)
					{
						HX_STACK_LINE(6032)
						negred->prev = trl;
						HX_STACK_LINE(6033)
						if (((trl != null()))){
							HX_STACK_LINE(6033)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(6035)
					{
						HX_STACK_LINE(6036)
						::zpp_nape::geom::ZPP_SimpleEvent t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(6037)
						parent->data = nr->data;
						HX_STACK_LINE(6038)
						nr->data = t;
					}
					HX_STACK_LINE(6040)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(6040)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(6041)
					{
						HX_STACK_LINE(6042)
						nr->next = trr;
						HX_STACK_LINE(6043)
						if (((trr != null()))){
							HX_STACK_LINE(6043)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(6045)
					{
						HX_STACK_LINE(6046)
						nr->prev = parent->prev;
						HX_STACK_LINE(6047)
						if (((parent->prev != null()))){
							HX_STACK_LINE(6047)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(6049)
					{
						HX_STACK_LINE(6050)
						parent->prev = nr;
						HX_STACK_LINE(6051)
						if (((nr != null()))){
							HX_STACK_LINE(6051)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(6053)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(5993)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(_Function_1_1::Block(negred,parent,this)) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(_Function_1_2::Block(negred,parent,this)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(6055)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(6055)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(6056)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(6056)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::clear_node","zpp_nape/util/RBTree.hx",5956);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(5957)
	{
	}
	HX_STACK_LINE(5965)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(5966)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5967)
	if (((ret != null()))){
		HX_STACK_LINE(5968)
		if (((node == ret->prev))){
			HX_STACK_LINE(5968)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(5969)
			ret->next = null();
		}
		HX_STACK_LINE(5970)
		node->parent = null();
	}
	HX_STACK_LINE(5972)
	{
		HX_STACK_LINE(5973)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5974)
		{
		}
		HX_STACK_LINE(5982)
		{
			HX_STACK_LINE(5982)
			o->data = null();
			HX_STACK_LINE(5982)
			o->lt = null();
			HX_STACK_LINE(5982)
			o->swapped = null();
		}
		HX_STACK_LINE(5983)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
		HX_STACK_LINE(5984)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5989)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_SimpleEvent_obj,clear_node,return )

Void ZPP_Set_ZPP_SimpleEvent_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::clear_with","zpp_nape/util/RBTree.hx",5947);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(5947)
		if (((this->parent == null()))){
			HX_STACK_LINE(5948)
			return null();
		}
		else{
			HX_STACK_LINE(5950)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5951)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent Block( Dynamic &lambda,::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5951);
						{
							HX_STACK_LINE(5951)
							{
							}
							HX_STACK_LINE(5951)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(5951)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(5951)
							if (((ret != null()))){
								HX_STACK_LINE(5951)
								if (((cur == ret->prev))){
									HX_STACK_LINE(5951)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(5951)
									ret->next = null();
								}
								HX_STACK_LINE(5951)
								cur->parent = null();
							}
							HX_STACK_LINE(5951)
							{
								HX_STACK_LINE(5951)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(5951)
								{
								}
								HX_STACK_LINE(5951)
								{
									HX_STACK_LINE(5951)
									o->data = null();
									HX_STACK_LINE(5951)
									o->lt = null();
									HX_STACK_LINE(5951)
									o->swapped = null();
								}
								HX_STACK_LINE(5951)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(5951)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = o;
							}
							HX_STACK_LINE(5951)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(5951)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(_Function_3_1::Block(lambda,cur)) )) );
			}
			HX_STACK_LINE(5952)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,clear_with,(void))

Void ZPP_Set_ZPP_SimpleEvent_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::clear","zpp_nape/util/RBTree.hx",5943);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5943)
		if (((this->parent == null()))){
			HX_STACK_LINE(5944)
			Dynamic();
		}
		else{
			HX_STACK_LINE(5944)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5944)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5944);
						{
							HX_STACK_LINE(5944)
							{
							}
							HX_STACK_LINE(5944)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(5944)
							if (((ret != null()))){
								HX_STACK_LINE(5944)
								if (((cur == ret->prev))){
									HX_STACK_LINE(5944)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(5944)
									ret->next = null();
								}
								HX_STACK_LINE(5944)
								cur->parent = null();
							}
							HX_STACK_LINE(5944)
							{
								HX_STACK_LINE(5944)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(5944)
								{
								}
								HX_STACK_LINE(5944)
								{
									HX_STACK_LINE(5944)
									o->data = null();
									HX_STACK_LINE(5944)
									o->lt = null();
									HX_STACK_LINE(5944)
									o->swapped = null();
								}
								HX_STACK_LINE(5944)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(5944)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = o;
							}
							HX_STACK_LINE(5944)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(5944)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(5944)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,clear,(void))

Void ZPP_Set_ZPP_SimpleEvent_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::remove_node","zpp_nape/util/RBTree.hx",5823);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(5824)
		{
		}
		HX_STACK_LINE(5832)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(5833)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(5834)
			while(((sm->prev != null()))){
				HX_STACK_LINE(5834)
				sm = sm->prev;
			}
			HX_STACK_LINE(5835)
			{
				HX_STACK_LINE(5836)
				::zpp_nape::geom::ZPP_SimpleEvent t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(5837)
				cur->data = sm->data;
				HX_STACK_LINE(5838)
				sm->data = t;
			}
			HX_STACK_LINE(5840)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(5840)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(5841)
			cur = sm;
		}
		HX_STACK_LINE(5843)
		{
		}
		HX_STACK_LINE(5851)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(5852)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(5852)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(5853)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(5854)
				if (((cur->parent != null()))){
					HX_STACK_LINE(5855)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(5856)
					while((true)){
						HX_STACK_LINE(5857)
						(parent->colour)++;
						HX_STACK_LINE(5858)
						(parent->prev->colour)--;
						HX_STACK_LINE(5859)
						(parent->next->colour)--;
						HX_STACK_LINE(5860)
						{
							HX_STACK_LINE(5861)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(5862)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(5863)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(5864)
								break;
							}
							else{
								HX_STACK_LINE(5866)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(5867)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(5869)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(5870)
										break;
									}
									HX_STACK_LINE(5873)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(5875)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(5876)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(5881)
						{
							HX_STACK_LINE(5882)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(5883)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(5884)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(5885)
								break;
							}
							else{
								HX_STACK_LINE(5887)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(5888)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(5890)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(5891)
										break;
									}
									HX_STACK_LINE(5894)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(5896)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(5897)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(5902)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(5902)
							if (((parent->parent == null()))){
								HX_STACK_LINE(5903)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(5907)
								parent = parent->parent;
								HX_STACK_LINE(5908)
								continue;
							}
						}
						HX_STACK_LINE(5911)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(5915)
		{
			HX_STACK_LINE(5916)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(5917)
			if (((par == null()))){
				HX_STACK_LINE(5917)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(5920)
				if (((par->prev == cur))){
					HX_STACK_LINE(5920)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(5921)
					par->next = child;
				}
			}
			HX_STACK_LINE(5922)
			if (((child != null()))){
				HX_STACK_LINE(5922)
				child->parent = par;
			}
		}
		HX_STACK_LINE(5924)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(5925)
		{
			HX_STACK_LINE(5926)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5927)
			{
			}
			HX_STACK_LINE(5935)
			{
				HX_STACK_LINE(5935)
				o->data = null();
				HX_STACK_LINE(5935)
				o->lt = null();
				HX_STACK_LINE(5935)
				o->swapped = null();
			}
			HX_STACK_LINE(5936)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
			HX_STACK_LINE(5937)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,remove_node,(void))

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::predecessor( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::predecessor","zpp_nape/util/RBTree.hx",5811);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5812)
	{
	}
	HX_STACK_LINE(5820)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(5821)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_SimpleEvent(null()) : ::zpp_nape::geom::ZPP_SimpleEvent(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,predecessor,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::successor( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::successor","zpp_nape/util/RBTree.hx",5799);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5800)
	{
	}
	HX_STACK_LINE(5808)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(5809)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_SimpleEvent(null()) : ::zpp_nape::geom::ZPP_SimpleEvent(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::predecessor_node","zpp_nape/util/RBTree.hx",5776);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(5777)
	{
	}
	HX_STACK_LINE(5785)
	if (((cur->prev != null()))){
		HX_STACK_LINE(5786)
		cur = cur->prev;
		HX_STACK_LINE(5787)
		while(((cur->next != null()))){
			HX_STACK_LINE(5787)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(5790)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5791)
		cur = cur->parent;
		HX_STACK_LINE(5792)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(5793)
			pre = cur;
			HX_STACK_LINE(5794)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(5797)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::successor_node","zpp_nape/util/RBTree.hx",5753);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(5754)
	{
	}
	HX_STACK_LINE(5762)
	if (((cur->next != null()))){
		HX_STACK_LINE(5763)
		cur = cur->next;
		HX_STACK_LINE(5764)
		while(((cur->prev != null()))){
			HX_STACK_LINE(5764)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(5767)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5768)
		cur = cur->parent;
		HX_STACK_LINE(5769)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(5770)
			pre = cur;
			HX_STACK_LINE(5771)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(5774)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,successor_node,return )

Void ZPP_Set_ZPP_SimpleEvent_obj::remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::remove","zpp_nape/util/RBTree.hx",5741);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(5742)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(5743)
		{
		}
		HX_STACK_LINE(5751)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,remove,(void))

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::pop_front","zpp_nape/util/RBTree.hx",5726);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5727)
	{
	}
	HX_STACK_LINE(5735)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5736)
	while(((cur->prev != null()))){
		HX_STACK_LINE(5736)
		cur = cur->prev;
	}
	HX_STACK_LINE(5737)
	::zpp_nape::geom::ZPP_SimpleEvent ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5738)
	this->remove_node(cur);
	HX_STACK_LINE(5739)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,pop_front,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::first","zpp_nape/util/RBTree.hx",5713);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5714)
	{
	}
	HX_STACK_LINE(5722)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5723)
	while(((cur->prev != null()))){
		HX_STACK_LINE(5723)
		cur = cur->prev;
	}
	HX_STACK_LINE(5724)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,first,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::lower_bound( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::lower_bound","zpp_nape/util/RBTree.hx",5676);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimpleEvent Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj *__this,::zpp_nape::geom::ZPP_SimpleEvent &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5677);
			{
				HX_STACK_LINE(5678)
				::zpp_nape::geom::ZPP_SimpleEvent ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5679)
				{
					HX_STACK_LINE(5680)
					{
					}
					HX_STACK_LINE(5688)
					if ((!(__this->empty()))){
						HX_STACK_LINE(5689)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
						HX_STACK_LINE(5690)
						while(((set_ite->prev != null()))){
							HX_STACK_LINE(5690)
							set_ite = set_ite->prev;
						}
						HX_STACK_LINE(5691)
						while(((set_ite != null()))){
							HX_STACK_LINE(5692)
							::zpp_nape::geom::ZPP_SimpleEvent elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
							HX_STACK_LINE(5693)
							if ((!(__this->lt(elt,obj)))){
								HX_STACK_LINE(5695)
								ret = elt;
								HX_STACK_LINE(5696)
								break;
							}
							HX_STACK_LINE(5699)
							if (((set_ite->next != null()))){
								HX_STACK_LINE(5700)
								set_ite = set_ite->next;
								HX_STACK_LINE(5701)
								while(((set_ite->prev != null()))){
									HX_STACK_LINE(5701)
									set_ite = set_ite->prev;
								}
							}
							else{
								HX_STACK_LINE(5704)
								while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
									HX_STACK_LINE(5704)
									set_ite = set_ite->parent;
								}
								HX_STACK_LINE(5705)
								set_ite = set_ite->parent;
							}
						}
					}
				}
				HX_STACK_LINE(5710)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5676)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::find_weak( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::find_weak","zpp_nape/util/RBTree.hx",5667);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5668)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5669)
	while(((cur != null()))){
		HX_STACK_LINE(5669)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(5670)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(5671)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(5671)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(5672)
				break;
			}
		}
	}
	HX_STACK_LINE(5674)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,find_weak,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::has_weak( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::has_weak","zpp_nape/util/RBTree.hx",5664);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5664)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::find( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::find","zpp_nape/util/RBTree.hx",5656);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5657)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5658)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(5658)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(5659)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(5660)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(5662)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,find,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::has( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::has","zpp_nape/util/RBTree.hx",5653);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5653)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,has,return )

int ZPP_Set_ZPP_SimpleEvent_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::size","zpp_nape/util/RBTree.hx",5623);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5624)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5625)
	{
		HX_STACK_LINE(5626)
		{
		}
		HX_STACK_LINE(5634)
		if ((!(this->empty()))){
			HX_STACK_LINE(5635)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(5636)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(5636)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(5637)
			while(((set_ite != null()))){
				HX_STACK_LINE(5638)
				::zpp_nape::geom::ZPP_SimpleEvent i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(5639)
				(ret)++;
				HX_STACK_LINE(5640)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(5641)
					set_ite = set_ite->next;
					HX_STACK_LINE(5642)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(5642)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(5645)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(5645)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(5646)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(5651)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,size,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::singular","zpp_nape/util/RBTree.hx",5620);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5620)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,singular,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::empty","zpp_nape/util/RBTree.hx",5617);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5617)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,empty,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::verify","zpp_nape/util/RBTree.hx",5552);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5553)
	{
		HX_STACK_LINE(5554)
		{
		}
		HX_STACK_LINE(5562)
		if ((!(this->empty()))){
			HX_STACK_LINE(5563)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(5564)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(5564)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(5565)
			while(((set_ite != null()))){
				HX_STACK_LINE(5566)
				::zpp_nape::geom::ZPP_SimpleEvent i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(5567)
				{
					HX_STACK_LINE(5568)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(5569)
					{
						HX_STACK_LINE(5570)
						{
						}
						HX_STACK_LINE(5578)
						if ((!(this->empty()))){
							HX_STACK_LINE(5579)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(5580)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(5580)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(5581)
							while(((set_ite1 != null()))){
								HX_STACK_LINE(5582)
								::zpp_nape::geom::ZPP_SimpleEvent j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(5583)
								if ((!(prei))){
									HX_STACK_LINE(5584)
									if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
										HX_STACK_LINE(5585)
										return false;
									}
								}
								else{
									HX_STACK_LINE(5587)
									if (((i == j))){
										HX_STACK_LINE(5587)
										prei = false;
									}
									else{
										HX_STACK_LINE(5588)
										if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
											HX_STACK_LINE(5589)
											return false;
										}
									}
								}
								HX_STACK_LINE(5592)
								if (((set_ite1->next != null()))){
									HX_STACK_LINE(5593)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(5594)
									while(((set_ite1->prev != null()))){
										HX_STACK_LINE(5594)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(5597)
									while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
										HX_STACK_LINE(5597)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(5598)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(5604)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(5605)
					set_ite = set_ite->next;
					HX_STACK_LINE(5606)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(5606)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(5609)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(5609)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(5610)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(5615)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,verify,return )

Void ZPP_Set_ZPP_SimpleEvent_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::alloc","zpp_nape/util/RBTree.hx",5543);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,alloc,(void))

Void ZPP_Set_ZPP_SimpleEvent_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::free","zpp_nape/util/RBTree.hx",5536);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5537)
		this->data = null();
		HX_STACK_LINE(5538)
		this->lt = null();
		HX_STACK_LINE(5539)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;


ZPP_Set_ZPP_SimpleEvent_obj::ZPP_Set_ZPP_SimpleEvent_obj()
{
}

void ZPP_Set_ZPP_SimpleEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_SimpleEvent);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_SimpleEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_SimpleEvent_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_SimpleEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleEvent >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_SimpleEvent_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_SimpleEvent_obj::__mClass;

void ZPP_Set_ZPP_SimpleEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent"), hx::TCanCast< ZPP_Set_ZPP_SimpleEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_SimpleEvent_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
