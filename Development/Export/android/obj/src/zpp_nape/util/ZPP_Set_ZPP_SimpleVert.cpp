#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_SimpleVert_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::new","zpp_nape/util/RBTree.hx",3731);
{
	HX_STACK_LINE(3772)
	this->colour = (int)0;
	HX_STACK_LINE(3771)
	this->parent = null();
	HX_STACK_LINE(3770)
	this->next = null();
	HX_STACK_LINE(3769)
	this->prev = null();
	HX_STACK_LINE(3768)
	this->data = null();
	HX_STACK_LINE(3767)
	this->swapped = null();
	HX_STACK_LINE(3766)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_SimpleVert_obj::~ZPP_Set_ZPP_SimpleVert_obj() { }

Dynamic ZPP_Set_ZPP_SimpleVert_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_SimpleVert_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_SimpleVert_obj > ZPP_Set_ZPP_SimpleVert_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleVert_obj > result = new ZPP_Set_ZPP_SimpleVert_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_SimpleVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleVert_obj > result = new ZPP_Set_ZPP_SimpleVert_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::insert( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::insert","zpp_nape/util/RBTree.hx",4553);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4562)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(4563)
	{
		HX_STACK_LINE(4564)
		if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
			HX_STACK_LINE(4564)
			x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
		}
		else{
			HX_STACK_LINE(4571)
			x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(4572)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
			HX_STACK_LINE(4573)
			x->next = null();
		}
		HX_STACK_LINE(4578)
		Dynamic();
	}
	HX_STACK_LINE(4580)
	x->data = obj;
	HX_STACK_LINE(4581)
	if (((this->parent == null()))){
		HX_STACK_LINE(4581)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(4583)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4584)
		while((true)){
			HX_STACK_LINE(4584)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(4585)
				if (((cur->prev == null()))){
					HX_STACK_LINE(4587)
					cur->prev = x;
					HX_STACK_LINE(4588)
					x->parent = cur;
					HX_STACK_LINE(4589)
					break;
				}
				else{
					HX_STACK_LINE(4591)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(4593)
				if (((cur->next == null()))){
					HX_STACK_LINE(4595)
					cur->next = x;
					HX_STACK_LINE(4596)
					x->parent = cur;
					HX_STACK_LINE(4597)
					break;
				}
				else{
					HX_STACK_LINE(4599)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(4603)
	if (((x->parent == null()))){
		HX_STACK_LINE(4603)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(4605)
		x->colour = (int)0;
		HX_STACK_LINE(4606)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(4606)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(4616)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::try_insert( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::try_insert","zpp_nape/util/RBTree.hx",4461);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4462)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(4463)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4464)
	if (((this->parent == null()))){
		HX_STACK_LINE(4465)
		{
			HX_STACK_LINE(4466)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(4466)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
			}
			else{
				HX_STACK_LINE(4473)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(4474)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
				HX_STACK_LINE(4475)
				x->next = null();
			}
			HX_STACK_LINE(4480)
			Dynamic();
		}
		HX_STACK_LINE(4482)
		x->data = obj;
		HX_STACK_LINE(4483)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(4486)
		cur = this->parent;
		HX_STACK_LINE(4487)
		while((true)){
			HX_STACK_LINE(4487)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(4488)
				if (((cur->prev == null()))){
					HX_STACK_LINE(4490)
					{
						HX_STACK_LINE(4491)
						if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
							HX_STACK_LINE(4491)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
						}
						else{
							HX_STACK_LINE(4498)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
							HX_STACK_LINE(4499)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
							HX_STACK_LINE(4500)
							x->next = null();
						}
						HX_STACK_LINE(4505)
						Dynamic();
					}
					HX_STACK_LINE(4507)
					x->data = obj;
					HX_STACK_LINE(4508)
					cur->prev = x;
					HX_STACK_LINE(4509)
					x->parent = cur;
					HX_STACK_LINE(4510)
					break;
				}
				else{
					HX_STACK_LINE(4512)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(4514)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(4514)
					if (((cur->next == null()))){
						HX_STACK_LINE(4516)
						{
							HX_STACK_LINE(4517)
							if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
								HX_STACK_LINE(4517)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
							}
							else{
								HX_STACK_LINE(4524)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(4525)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
								HX_STACK_LINE(4526)
								x->next = null();
							}
							HX_STACK_LINE(4531)
							Dynamic();
						}
						HX_STACK_LINE(4533)
						x->data = obj;
						HX_STACK_LINE(4534)
						cur->next = x;
						HX_STACK_LINE(4535)
						x->parent = cur;
						HX_STACK_LINE(4536)
						break;
					}
					else{
						HX_STACK_LINE(4538)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(4540)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(4543)
	if (((x == null()))){
		HX_STACK_LINE(4543)
		return cur;
	}
	else{
		HX_STACK_LINE(4545)
		if (((x->parent == null()))){
			HX_STACK_LINE(4545)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(4547)
			x->colour = (int)0;
			HX_STACK_LINE(4548)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(4548)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(4550)
		return x;
	}
	HX_STACK_LINE(4543)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,try_insert,return )

bool ZPP_Set_ZPP_SimpleVert_obj::try_insert_bool( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::try_insert_bool","zpp_nape/util/RBTree.hx",4369);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4370)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(4371)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4372)
	if (((this->parent == null()))){
		HX_STACK_LINE(4373)
		{
			HX_STACK_LINE(4374)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(4374)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
			}
			else{
				HX_STACK_LINE(4381)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(4382)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
				HX_STACK_LINE(4383)
				x->next = null();
			}
			HX_STACK_LINE(4388)
			Dynamic();
		}
		HX_STACK_LINE(4390)
		x->data = obj;
		HX_STACK_LINE(4391)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(4394)
		cur = this->parent;
		HX_STACK_LINE(4395)
		while((true)){
			HX_STACK_LINE(4395)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(4396)
				if (((cur->prev == null()))){
					HX_STACK_LINE(4398)
					{
						HX_STACK_LINE(4399)
						if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
							HX_STACK_LINE(4399)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
						}
						else{
							HX_STACK_LINE(4406)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
							HX_STACK_LINE(4407)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
							HX_STACK_LINE(4408)
							x->next = null();
						}
						HX_STACK_LINE(4413)
						Dynamic();
					}
					HX_STACK_LINE(4415)
					x->data = obj;
					HX_STACK_LINE(4416)
					cur->prev = x;
					HX_STACK_LINE(4417)
					x->parent = cur;
					HX_STACK_LINE(4418)
					break;
				}
				else{
					HX_STACK_LINE(4420)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(4422)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(4422)
					if (((cur->next == null()))){
						HX_STACK_LINE(4424)
						{
							HX_STACK_LINE(4425)
							if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
								HX_STACK_LINE(4425)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
							}
							else{
								HX_STACK_LINE(4432)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(4433)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
								HX_STACK_LINE(4434)
								x->next = null();
							}
							HX_STACK_LINE(4439)
							Dynamic();
						}
						HX_STACK_LINE(4441)
						x->data = obj;
						HX_STACK_LINE(4442)
						cur->next = x;
						HX_STACK_LINE(4443)
						x->parent = cur;
						HX_STACK_LINE(4444)
						break;
					}
					else{
						HX_STACK_LINE(4446)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(4448)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(4451)
	if (((x == null()))){
		HX_STACK_LINE(4451)
		return false;
	}
	else{
		HX_STACK_LINE(4453)
		if (((x->parent == null()))){
			HX_STACK_LINE(4453)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(4455)
			x->colour = (int)0;
			HX_STACK_LINE(4456)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(4456)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(4458)
		return true;
	}
	HX_STACK_LINE(4451)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_SimpleVert_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::__fix_dbl_red","zpp_nape/util/RBTree.hx",4280);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(4280)
		while((true)){
			HX_STACK_LINE(4282)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(4283)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(4284)
			if (((g == null()))){
				HX_STACK_LINE(4285)
				par->colour = (int)1;
				HX_STACK_LINE(4286)
				break;
			}
			HX_STACK_LINE(4288)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(4289)
			if (((par == g->prev))){
				HX_STACK_LINE(4290)
				n3 = g;
				HX_STACK_LINE(4291)
				t4 = g->next;
				HX_STACK_LINE(4292)
				if (((x == par->prev))){
					HX_STACK_LINE(4293)
					n1 = x;
					HX_STACK_LINE(4294)
					n2 = par;
					HX_STACK_LINE(4295)
					t1 = x->prev;
					HX_STACK_LINE(4296)
					t2 = x->next;
					HX_STACK_LINE(4297)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(4300)
					n1 = par;
					HX_STACK_LINE(4301)
					n2 = x;
					HX_STACK_LINE(4302)
					t1 = par->prev;
					HX_STACK_LINE(4303)
					t2 = x->prev;
					HX_STACK_LINE(4304)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(4308)
				n1 = g;
				HX_STACK_LINE(4309)
				t1 = g->prev;
				HX_STACK_LINE(4310)
				if (((x == par->prev))){
					HX_STACK_LINE(4311)
					n2 = x;
					HX_STACK_LINE(4312)
					n3 = par;
					HX_STACK_LINE(4313)
					t2 = x->prev;
					HX_STACK_LINE(4314)
					t3 = x->next;
					HX_STACK_LINE(4315)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(4318)
					n2 = par;
					HX_STACK_LINE(4319)
					n3 = x;
					HX_STACK_LINE(4320)
					t2 = par->prev;
					HX_STACK_LINE(4321)
					t3 = x->prev;
					HX_STACK_LINE(4322)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(4325)
			{
				HX_STACK_LINE(4326)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(4327)
				if (((par1 == null()))){
					HX_STACK_LINE(4327)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(4330)
					if (((par1->prev == g))){
						HX_STACK_LINE(4330)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(4331)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(4332)
				if (((n2 != null()))){
					HX_STACK_LINE(4332)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(4334)
			{
				HX_STACK_LINE(4335)
				n1->prev = t1;
				HX_STACK_LINE(4336)
				if (((t1 != null()))){
					HX_STACK_LINE(4336)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(4338)
			{
				HX_STACK_LINE(4339)
				n1->next = t2;
				HX_STACK_LINE(4340)
				if (((t2 != null()))){
					HX_STACK_LINE(4340)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(4342)
			{
				HX_STACK_LINE(4343)
				n2->prev = n1;
				HX_STACK_LINE(4344)
				if (((n1 != null()))){
					HX_STACK_LINE(4344)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(4346)
			{
				HX_STACK_LINE(4347)
				n2->next = n3;
				HX_STACK_LINE(4348)
				if (((n3 != null()))){
					HX_STACK_LINE(4348)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(4350)
			{
				HX_STACK_LINE(4351)
				n3->prev = t3;
				HX_STACK_LINE(4352)
				if (((t3 != null()))){
					HX_STACK_LINE(4352)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(4354)
			{
				HX_STACK_LINE(4355)
				n3->next = t4;
				HX_STACK_LINE(4356)
				if (((t4 != null()))){
					HX_STACK_LINE(4356)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(4358)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(4359)
			n1->colour = (int)1;
			HX_STACK_LINE(4360)
			n3->colour = (int)1;
			HX_STACK_LINE(4361)
			if (((n2 == this->parent))){
				HX_STACK_LINE(4361)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(4362)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(4363)
					x = n2;
					HX_STACK_LINE(4364)
					continue;
				}
			}
			HX_STACK_LINE(4366)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_SimpleVert_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::__fix_neg_red","zpp_nape/util/RBTree.hx",4213);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(4214)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj *__this,::zpp_nape::util::ZPP_Set_ZPP_SimpleVert &negred,::zpp_nape::util::ZPP_Set_ZPP_SimpleVert &parent){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",4215);
				{
					HX_STACK_LINE(4216)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(4217)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(4218)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(4219)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(4220)
					nl->colour = (int)0;
					HX_STACK_LINE(4221)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(4222)
					{
						HX_STACK_LINE(4223)
						negred->next = trl;
						HX_STACK_LINE(4224)
						if (((trl != null()))){
							HX_STACK_LINE(4224)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(4226)
					{
						HX_STACK_LINE(4227)
						::zpp_nape::geom::ZPP_SimpleVert t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(4228)
						parent->data = nr->data;
						HX_STACK_LINE(4229)
						nr->data = t;
					}
					HX_STACK_LINE(4231)
					if (((__this->swapped != null()))){
						HX_STACK_LINE(4231)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(4232)
					{
						HX_STACK_LINE(4233)
						nr->prev = trr;
						HX_STACK_LINE(4234)
						if (((trr != null()))){
							HX_STACK_LINE(4234)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(4236)
					{
						HX_STACK_LINE(4237)
						nr->next = parent->next;
						HX_STACK_LINE(4238)
						if (((parent->next != null()))){
							HX_STACK_LINE(4238)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(4240)
					{
						HX_STACK_LINE(4241)
						parent->next = nr;
						HX_STACK_LINE(4242)
						if (((nr != null()))){
							HX_STACK_LINE(4242)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(4244)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj *__this,::zpp_nape::util::ZPP_Set_ZPP_SimpleVert &negred,::zpp_nape::util::ZPP_Set_ZPP_SimpleVert &parent){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",4246);
				{
					HX_STACK_LINE(4247)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(4248)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(4249)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(4250)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(4251)
					nl->colour = (int)0;
					HX_STACK_LINE(4252)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(4253)
					{
						HX_STACK_LINE(4254)
						negred->prev = trl;
						HX_STACK_LINE(4255)
						if (((trl != null()))){
							HX_STACK_LINE(4255)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(4257)
					{
						HX_STACK_LINE(4258)
						::zpp_nape::geom::ZPP_SimpleVert t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(4259)
						parent->data = nr->data;
						HX_STACK_LINE(4260)
						nr->data = t;
					}
					HX_STACK_LINE(4262)
					if (((__this->swapped != null()))){
						HX_STACK_LINE(4262)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(4263)
					{
						HX_STACK_LINE(4264)
						nr->next = trr;
						HX_STACK_LINE(4265)
						if (((trr != null()))){
							HX_STACK_LINE(4265)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(4267)
					{
						HX_STACK_LINE(4268)
						nr->prev = parent->prev;
						HX_STACK_LINE(4269)
						if (((parent->prev != null()))){
							HX_STACK_LINE(4269)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(4271)
					{
						HX_STACK_LINE(4272)
						parent->prev = nr;
						HX_STACK_LINE(4273)
						if (((nr != null()))){
							HX_STACK_LINE(4273)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(4275)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(4215)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(_Function_1_1::Block(this,negred,parent)) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(_Function_1_2::Block(this,negred,parent)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(4277)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(4277)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(4278)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(4278)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::clear_node","zpp_nape/util/RBTree.hx",4178);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(4187)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(4188)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4189)
	if (((ret != null()))){
		HX_STACK_LINE(4190)
		if (((node == ret->prev))){
			HX_STACK_LINE(4190)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(4191)
			ret->next = null();
		}
		HX_STACK_LINE(4192)
		node->parent = null();
	}
	HX_STACK_LINE(4194)
	{
		HX_STACK_LINE(4195)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(4204)
		{
			HX_STACK_LINE(4204)
			o->data = null();
			HX_STACK_LINE(4204)
			o->lt = null();
			HX_STACK_LINE(4204)
			o->swapped = null();
		}
		HX_STACK_LINE(4205)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
		HX_STACK_LINE(4206)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(4211)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_SimpleVert_obj,clear_node,return )

Void ZPP_Set_ZPP_SimpleVert_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::clear_with","zpp_nape/util/RBTree.hx",4169);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(4169)
		if (((this->parent == null()))){
			HX_STACK_LINE(4170)
			return null();
		}
		else{
			HX_STACK_LINE(4172)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4173)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert &cur,Dynamic &lambda){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",4173);
						{
							HX_STACK_LINE(4173)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(4173)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4173)
							if (((ret != null()))){
								HX_STACK_LINE(4173)
								if (((cur == ret->prev))){
									HX_STACK_LINE(4173)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(4173)
									ret->next = null();
								}
								HX_STACK_LINE(4173)
								cur->parent = null();
							}
							HX_STACK_LINE(4173)
							{
								HX_STACK_LINE(4173)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(4173)
								{
									HX_STACK_LINE(4173)
									o->data = null();
									HX_STACK_LINE(4173)
									o->lt = null();
									HX_STACK_LINE(4173)
									o->swapped = null();
								}
								HX_STACK_LINE(4173)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(4173)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(4173)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4173)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(_Function_3_1::Block(cur,lambda)) )) );
			}
			HX_STACK_LINE(4174)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,clear_with,(void))

Void ZPP_Set_ZPP_SimpleVert_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::clear","zpp_nape/util/RBTree.hx",4165);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4165)
		if (((this->parent == null()))){
			HX_STACK_LINE(4166)
			Dynamic();
		}
		else{
			HX_STACK_LINE(4166)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4166)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",4166);
						{
							HX_STACK_LINE(4166)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4166)
							if (((ret != null()))){
								HX_STACK_LINE(4166)
								if (((cur == ret->prev))){
									HX_STACK_LINE(4166)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(4166)
									ret->next = null();
								}
								HX_STACK_LINE(4166)
								cur->parent = null();
							}
							HX_STACK_LINE(4166)
							{
								HX_STACK_LINE(4166)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(4166)
								{
									HX_STACK_LINE(4166)
									o->data = null();
									HX_STACK_LINE(4166)
									o->lt = null();
									HX_STACK_LINE(4166)
									o->swapped = null();
								}
								HX_STACK_LINE(4166)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(4166)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(4166)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4166)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(4166)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,clear,(void))

Void ZPP_Set_ZPP_SimpleVert_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::remove_node","zpp_nape/util/RBTree.hx",4045);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(4054)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(4055)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(4056)
			while(((sm->prev != null()))){
				HX_STACK_LINE(4056)
				sm = sm->prev;
			}
			HX_STACK_LINE(4057)
			{
				HX_STACK_LINE(4058)
				::zpp_nape::geom::ZPP_SimpleVert t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(4059)
				cur->data = sm->data;
				HX_STACK_LINE(4060)
				sm->data = t;
			}
			HX_STACK_LINE(4062)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(4062)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(4063)
			cur = sm;
		}
		HX_STACK_LINE(4073)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(4074)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(4074)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(4075)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(4076)
				if (((cur->parent != null()))){
					HX_STACK_LINE(4077)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(4078)
					while((true)){
						HX_STACK_LINE(4079)
						(parent->colour)++;
						HX_STACK_LINE(4080)
						(parent->prev->colour)--;
						HX_STACK_LINE(4081)
						(parent->next->colour)--;
						HX_STACK_LINE(4082)
						{
							HX_STACK_LINE(4083)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(4084)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(4085)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(4086)
								break;
							}
							else{
								HX_STACK_LINE(4088)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(4089)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(4091)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(4092)
										break;
									}
									HX_STACK_LINE(4095)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(4097)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(4098)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(4103)
						{
							HX_STACK_LINE(4104)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(4105)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(4106)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(4107)
								break;
							}
							else{
								HX_STACK_LINE(4109)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(4110)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(4112)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(4113)
										break;
									}
									HX_STACK_LINE(4116)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(4118)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(4119)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(4124)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(4124)
							if (((parent->parent == null()))){
								HX_STACK_LINE(4125)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(4129)
								parent = parent->parent;
								HX_STACK_LINE(4130)
								continue;
							}
						}
						HX_STACK_LINE(4133)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(4137)
		{
			HX_STACK_LINE(4138)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(4139)
			if (((par == null()))){
				HX_STACK_LINE(4139)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(4142)
				if (((par->prev == cur))){
					HX_STACK_LINE(4142)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(4143)
					par->next = child;
				}
			}
			HX_STACK_LINE(4144)
			if (((child != null()))){
				HX_STACK_LINE(4144)
				child->parent = par;
			}
		}
		HX_STACK_LINE(4146)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(4147)
		{
			HX_STACK_LINE(4148)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4157)
			{
				HX_STACK_LINE(4157)
				o->data = null();
				HX_STACK_LINE(4157)
				o->lt = null();
				HX_STACK_LINE(4157)
				o->swapped = null();
			}
			HX_STACK_LINE(4158)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(4159)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,remove_node,(void))

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::predecessor( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::predecessor","zpp_nape/util/RBTree.hx",4033);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4042)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(4043)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_SimpleVert(null()) : ::zpp_nape::geom::ZPP_SimpleVert(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,predecessor,return )

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::successor( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::successor","zpp_nape/util/RBTree.hx",4021);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4030)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(4031)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_SimpleVert(null()) : ::zpp_nape::geom::ZPP_SimpleVert(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::predecessor_node","zpp_nape/util/RBTree.hx",3998);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(4007)
	if (((cur->prev != null()))){
		HX_STACK_LINE(4008)
		cur = cur->prev;
		HX_STACK_LINE(4009)
		while(((cur->next != null()))){
			HX_STACK_LINE(4009)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(4012)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4013)
		cur = cur->parent;
		HX_STACK_LINE(4014)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(4015)
			pre = cur;
			HX_STACK_LINE(4016)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(4019)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::successor_node","zpp_nape/util/RBTree.hx",3975);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(3984)
	if (((cur->next != null()))){
		HX_STACK_LINE(3985)
		cur = cur->next;
		HX_STACK_LINE(3986)
		while(((cur->prev != null()))){
			HX_STACK_LINE(3986)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(3989)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3990)
		cur = cur->parent;
		HX_STACK_LINE(3991)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(3992)
			pre = cur;
			HX_STACK_LINE(3993)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(3996)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,successor_node,return )

Void ZPP_Set_ZPP_SimpleVert_obj::remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::remove","zpp_nape/util/RBTree.hx",3963);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3964)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(3973)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,remove,(void))

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::pop_front","zpp_nape/util/RBTree.hx",3948);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3957)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3958)
	while(((cur->prev != null()))){
		HX_STACK_LINE(3958)
		cur = cur->prev;
	}
	HX_STACK_LINE(3959)
	::zpp_nape::geom::ZPP_SimpleVert ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3960)
	this->remove_node(cur);
	HX_STACK_LINE(3961)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,pop_front,return )

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::first","zpp_nape/util/RBTree.hx",3935);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3944)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3945)
	while(((cur->prev != null()))){
		HX_STACK_LINE(3945)
		cur = cur->prev;
	}
	HX_STACK_LINE(3946)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,first,return )

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::lower_bound( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::lower_bound","zpp_nape/util/RBTree.hx",3898);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimpleVert Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj *__this,::zpp_nape::geom::ZPP_SimpleVert &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",3899);
			{
				HX_STACK_LINE(3900)
				::zpp_nape::geom::ZPP_SimpleVert ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3901)
				if ((!(__this->empty()))){
					HX_STACK_LINE(3911)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
					HX_STACK_LINE(3912)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(3912)
						set_ite = set_ite->prev;
					}
					HX_STACK_LINE(3913)
					while(((set_ite != null()))){
						HX_STACK_LINE(3914)
						::zpp_nape::geom::ZPP_SimpleVert elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
						HX_STACK_LINE(3915)
						if ((!(__this->lt(elt,obj)))){
							HX_STACK_LINE(3917)
							ret = elt;
							HX_STACK_LINE(3918)
							break;
						}
						HX_STACK_LINE(3921)
						if (((set_ite->next != null()))){
							HX_STACK_LINE(3922)
							set_ite = set_ite->next;
							HX_STACK_LINE(3923)
							while(((set_ite->prev != null()))){
								HX_STACK_LINE(3923)
								set_ite = set_ite->prev;
							}
						}
						else{
							HX_STACK_LINE(3926)
							while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
								HX_STACK_LINE(3926)
								set_ite = set_ite->parent;
							}
							HX_STACK_LINE(3927)
							set_ite = set_ite->parent;
						}
					}
				}
				HX_STACK_LINE(3932)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3898)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::find_weak( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::find_weak","zpp_nape/util/RBTree.hx",3889);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3890)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3891)
	while(((cur != null()))){
		HX_STACK_LINE(3891)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(3892)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(3893)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(3893)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(3894)
				break;
			}
		}
	}
	HX_STACK_LINE(3896)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,find_weak,return )

bool ZPP_Set_ZPP_SimpleVert_obj::has_weak( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::has_weak","zpp_nape/util/RBTree.hx",3886);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3886)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::find( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::find","zpp_nape/util/RBTree.hx",3878);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3879)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3880)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(3880)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(3881)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(3882)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(3884)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,find,return )

bool ZPP_Set_ZPP_SimpleVert_obj::has( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::has","zpp_nape/util/RBTree.hx",3875);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3875)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,has,return )

int ZPP_Set_ZPP_SimpleVert_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::size","zpp_nape/util/RBTree.hx",3845);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3846)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3847)
	if ((!(this->empty()))){
		HX_STACK_LINE(3857)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(3858)
		while(((set_ite->prev != null()))){
			HX_STACK_LINE(3858)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(3859)
		while(((set_ite != null()))){
			HX_STACK_LINE(3860)
			::zpp_nape::geom::ZPP_SimpleVert i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(3861)
			(ret)++;
			HX_STACK_LINE(3862)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(3863)
				set_ite = set_ite->next;
				HX_STACK_LINE(3864)
				while(((set_ite->prev != null()))){
					HX_STACK_LINE(3864)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(3867)
				while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
					HX_STACK_LINE(3867)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(3868)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(3873)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,size,return )

bool ZPP_Set_ZPP_SimpleVert_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::singular","zpp_nape/util/RBTree.hx",3842);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3842)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,singular,return )

bool ZPP_Set_ZPP_SimpleVert_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::empty","zpp_nape/util/RBTree.hx",3839);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3839)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,empty,return )

bool ZPP_Set_ZPP_SimpleVert_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::verify","zpp_nape/util/RBTree.hx",3774);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3775)
	if ((!(this->empty()))){
		HX_STACK_LINE(3785)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
		HX_STACK_LINE(3786)
		while(((set_ite->prev != null()))){
			HX_STACK_LINE(3786)
			set_ite = set_ite->prev;
		}
		HX_STACK_LINE(3787)
		while(((set_ite != null()))){
			HX_STACK_LINE(3788)
			::zpp_nape::geom::ZPP_SimpleVert i = set_ite->data;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(3789)
			{
				HX_STACK_LINE(3790)
				bool prei = true;		HX_STACK_VAR(prei,"prei");
				HX_STACK_LINE(3791)
				if ((!(this->empty()))){
					HX_STACK_LINE(3801)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
					HX_STACK_LINE(3802)
					while(((set_ite1->prev != null()))){
						HX_STACK_LINE(3802)
						set_ite1 = set_ite1->prev;
					}
					HX_STACK_LINE(3803)
					while(((set_ite1 != null()))){
						HX_STACK_LINE(3804)
						::zpp_nape::geom::ZPP_SimpleVert j = set_ite1->data;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(3805)
						if ((!(prei))){
							HX_STACK_LINE(3806)
							if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
								HX_STACK_LINE(3807)
								return false;
							}
						}
						else{
							HX_STACK_LINE(3809)
							if (((i == j))){
								HX_STACK_LINE(3809)
								prei = false;
							}
							else{
								HX_STACK_LINE(3810)
								if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
									HX_STACK_LINE(3811)
									return false;
								}
							}
						}
						HX_STACK_LINE(3814)
						if (((set_ite1->next != null()))){
							HX_STACK_LINE(3815)
							set_ite1 = set_ite1->next;
							HX_STACK_LINE(3816)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(3816)
								set_ite1 = set_ite1->prev;
							}
						}
						else{
							HX_STACK_LINE(3819)
							while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
								HX_STACK_LINE(3819)
								set_ite1 = set_ite1->parent;
							}
							HX_STACK_LINE(3820)
							set_ite1 = set_ite1->parent;
						}
					}
				}
			}
			HX_STACK_LINE(3826)
			if (((set_ite->next != null()))){
				HX_STACK_LINE(3827)
				set_ite = set_ite->next;
				HX_STACK_LINE(3828)
				while(((set_ite->prev != null()))){
					HX_STACK_LINE(3828)
					set_ite = set_ite->prev;
				}
			}
			else{
				HX_STACK_LINE(3831)
				while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
					HX_STACK_LINE(3831)
					set_ite = set_ite->parent;
				}
				HX_STACK_LINE(3832)
				set_ite = set_ite->parent;
			}
		}
	}
	HX_STACK_LINE(3837)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,verify,return )

Void ZPP_Set_ZPP_SimpleVert_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::alloc","zpp_nape/util/RBTree.hx",3765);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,alloc,(void))

Void ZPP_Set_ZPP_SimpleVert_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::free","zpp_nape/util/RBTree.hx",3758);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3759)
		this->data = null();
		HX_STACK_LINE(3760)
		this->lt = null();
		HX_STACK_LINE(3761)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;


ZPP_Set_ZPP_SimpleVert_obj::ZPP_Set_ZPP_SimpleVert_obj()
{
}

void ZPP_Set_ZPP_SimpleVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_SimpleVert);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_SimpleVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_SimpleVert_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_SimpleVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_SimpleVert_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_SimpleVert_obj::__mClass;

void ZPP_Set_ZPP_SimpleVert_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_SimpleVert"), hx::TCanCast< ZPP_Set_ZPP_SimpleVert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_SimpleVert_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
