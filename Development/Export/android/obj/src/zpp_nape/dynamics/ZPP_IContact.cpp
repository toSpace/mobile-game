#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_IContact_obj::__construct()
{
HX_STACK_PUSH("ZPP_IContact::new","zpp_nape/dynamics/Contact.hx",625);
{
	HX_STACK_LINE(655)
	this->length = (int)0;
	HX_STACK_LINE(654)
	this->pushmod = false;
	HX_STACK_LINE(653)
	this->modified = false;
	HX_STACK_LINE(652)
	this->_inuse = false;
	HX_STACK_LINE(641)
	this->next = null();
	HX_STACK_LINE(639)
	this->lr2y = 0.0;
	HX_STACK_LINE(638)
	this->lr2x = 0.0;
	HX_STACK_LINE(637)
	this->lr1y = 0.0;
	HX_STACK_LINE(636)
	this->lr1x = 0.0;
	HX_STACK_LINE(635)
	this->jtAcc = 0.0;
	HX_STACK_LINE(634)
	this->jnAcc = 0.0;
	HX_STACK_LINE(633)
	this->friction = 0.0;
	HX_STACK_LINE(632)
	this->bounce = 0.0;
	HX_STACK_LINE(631)
	this->tMass = 0.0;
	HX_STACK_LINE(630)
	this->nMass = 0.0;
	HX_STACK_LINE(629)
	this->r2y = 0.0;
	HX_STACK_LINE(628)
	this->r2x = 0.0;
	HX_STACK_LINE(627)
	this->r1y = 0.0;
	HX_STACK_LINE(626)
	this->r1x = 0.0;
}
;
	return null();
}

ZPP_IContact_obj::~ZPP_IContact_obj() { }

Dynamic ZPP_IContact_obj::__CreateEmpty() { return  new ZPP_IContact_obj; }
hx::ObjectPtr< ZPP_IContact_obj > ZPP_IContact_obj::__new()
{  hx::ObjectPtr< ZPP_IContact_obj > result = new ZPP_IContact_obj();
	result->__construct();
	return result;}

Dynamic ZPP_IContact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_IContact_obj > result = new ZPP_IContact_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::at( int ind){
	HX_STACK_PUSH("ZPP_IContact::at","zpp_nape/dynamics/Contact.hx",984);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(993)
	::zpp_nape::dynamics::ZPP_IContact it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(994)
	return (  (((it != null()))) ? ::zpp_nape::dynamics::ZPP_IContact(it) : ::zpp_nape::dynamics::ZPP_IContact(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,at,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZPP_IContact::iterator_at","zpp_nape/dynamics/Contact.hx",971);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(980)
	::zpp_nape::dynamics::ZPP_IContact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(981)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(981)
		ret = ret->next;
	}
	HX_STACK_LINE(982)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::back( ){
	HX_STACK_PUSH("ZPP_IContact::back","zpp_nape/dynamics/Contact.hx",962);
	HX_STACK_THIS(this);
	HX_STACK_LINE(963)
	::zpp_nape::dynamics::ZPP_IContact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(964)
	::zpp_nape::dynamics::ZPP_IContact cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(965)
	while(((cur != null()))){
		HX_STACK_LINE(966)
		ret = cur;
		HX_STACK_LINE(967)
		cur = cur->next;
	}
	HX_STACK_LINE(969)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,back,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::front( ){
	HX_STACK_PUSH("ZPP_IContact::front","zpp_nape/dynamics/Contact.hx",959);
	HX_STACK_THIS(this);
	HX_STACK_LINE(959)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,front,return )

bool ZPP_IContact_obj::inlined_has( ::zpp_nape::dynamics::ZPP_IContact obj){
	HX_STACK_PUSH("ZPP_IContact::inlined_has","zpp_nape/dynamics/Contact.hx",929);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(938)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(939)
	{
		HX_STACK_LINE(940)
		ret = false;
		HX_STACK_LINE(941)
		{
			HX_STACK_LINE(942)
			::zpp_nape::dynamics::ZPP_IContact cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(943)
			while(((cx_ite != null()))){
				HX_STACK_LINE(944)
				::zpp_nape::dynamics::ZPP_IContact npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(945)
				if (((npite == obj))){
					HX_STACK_LINE(947)
					ret = true;
					HX_STACK_LINE(948)
					break;
				}
				HX_STACK_LINE(951)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(955)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_has,return )

bool ZPP_IContact_obj::has( ::zpp_nape::dynamics::ZPP_IContact obj){
	HX_STACK_PUSH("ZPP_IContact::has","zpp_nape/dynamics/Contact.hx",924);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::dynamics::ZPP_IContact_obj *__this,::zpp_nape::dynamics::ZPP_IContact &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",925);
			{
				HX_STACK_LINE(925)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(925)
				{
					HX_STACK_LINE(925)
					ret = false;
					HX_STACK_LINE(925)
					{
						HX_STACK_LINE(925)
						::zpp_nape::dynamics::ZPP_IContact cx_ite = __this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(925)
						while(((cx_ite != null()))){
							HX_STACK_LINE(925)
							::zpp_nape::dynamics::ZPP_IContact npite = cx_ite;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(925)
							if (((npite == obj))){
								HX_STACK_LINE(925)
								ret = true;
								HX_STACK_LINE(925)
								break;
							}
							HX_STACK_LINE(925)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(925)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(924)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,has,return )

int ZPP_IContact_obj::size( ){
	HX_STACK_PUSH("ZPP_IContact::size","zpp_nape/dynamics/Contact.hx",921);
	HX_STACK_THIS(this);
	HX_STACK_LINE(921)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,size,return )

bool ZPP_IContact_obj::empty( ){
	HX_STACK_PUSH("ZPP_IContact::empty","zpp_nape/dynamics/Contact.hx",916);
	HX_STACK_THIS(this);
	HX_STACK_LINE(916)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,empty,return )

Void ZPP_IContact_obj::reverse( ){
{
		HX_STACK_PUSH("ZPP_IContact::reverse","zpp_nape/dynamics/Contact.hx",901);
		HX_STACK_THIS(this);
		HX_STACK_LINE(902)
		::zpp_nape::dynamics::ZPP_IContact cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(903)
		::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(904)
		while(((cur != null()))){
			HX_STACK_LINE(905)
			::zpp_nape::dynamics::ZPP_IContact nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(906)
			cur->next = pre;
			HX_STACK_LINE(907)
			this->next = cur;
			HX_STACK_LINE(908)
			pre = cur;
			HX_STACK_LINE(909)
			cur = nx;
		}
		HX_STACK_LINE(911)
		this->modified = true;
		HX_STACK_LINE(912)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,reverse,(void))

Void ZPP_IContact_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZPP_IContact::inlined_clear","zpp_nape/dynamics/Contact.hx",895);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,inlined_clear,(void))

Void ZPP_IContact_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_IContact::clear","zpp_nape/dynamics/Contact.hx",890);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,clear,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::splice( ::zpp_nape::dynamics::ZPP_IContact pre,int n){
	HX_STACK_PUSH("ZPP_IContact::splice","zpp_nape/dynamics/Contact.hx",886);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(887)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(887)
		this->erase(pre);
	}
	HX_STACK_LINE(888)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_IContact_obj,splice,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::inlined_erase( ::zpp_nape::dynamics::ZPP_IContact pre){
	HX_STACK_PUSH("ZPP_IContact::inlined_erase","zpp_nape/dynamics/Contact.hx",854);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(863)
	::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(864)
	::zpp_nape::dynamics::ZPP_IContact ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(865)
	if (((pre == null()))){
		HX_STACK_LINE(866)
		old = this->next;
		HX_STACK_LINE(867)
		ret = old->next;
		HX_STACK_LINE(868)
		this->next = ret;
		HX_STACK_LINE(869)
		if (((this->next == null()))){
			HX_STACK_LINE(869)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(872)
		old = pre->next;
		HX_STACK_LINE(873)
		ret = old->next;
		HX_STACK_LINE(874)
		pre->next = ret;
		HX_STACK_LINE(875)
		if (((ret == null()))){
			HX_STACK_LINE(875)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(877)
	old->_inuse = false;
	HX_STACK_LINE(881)
	this->modified = true;
	HX_STACK_LINE(882)
	(this->length)--;
	HX_STACK_LINE(883)
	this->pushmod = true;
	HX_STACK_LINE(884)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_erase,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::erase( ::zpp_nape::dynamics::ZPP_IContact pre){
	HX_STACK_PUSH("ZPP_IContact::erase","zpp_nape/dynamics/Contact.hx",849);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact_obj *__this,::zpp_nape::dynamics::ZPP_IContact &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",850);
			{
				HX_STACK_LINE(850)
				::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(850)
				::zpp_nape::dynamics::ZPP_IContact ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(850)
				if (((pre == null()))){
					HX_STACK_LINE(850)
					old = __this->next;
					HX_STACK_LINE(850)
					ret = old->next;
					HX_STACK_LINE(850)
					__this->next = ret;
					HX_STACK_LINE(850)
					if (((__this->next == null()))){
						HX_STACK_LINE(850)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(850)
					old = pre->next;
					HX_STACK_LINE(850)
					ret = old->next;
					HX_STACK_LINE(850)
					pre->next = ret;
					HX_STACK_LINE(850)
					if (((ret == null()))){
						HX_STACK_LINE(850)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(850)
				old->_inuse = false;
				HX_STACK_LINE(850)
				__this->modified = true;
				HX_STACK_LINE(850)
				(__this->length)--;
				HX_STACK_LINE(850)
				__this->pushmod = true;
				HX_STACK_LINE(850)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(849)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,erase,return )

bool ZPP_IContact_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_IContact obj){
	HX_STACK_PUSH("ZPP_IContact::inlined_try_remove","zpp_nape/dynamics/Contact.hx",826);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(835)
	::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(836)
	::zpp_nape::dynamics::ZPP_IContact cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(837)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(838)
	while(((cur != null()))){
		HX_STACK_LINE(839)
		if (((cur == obj))){
			HX_STACK_LINE(840)
			{
				HX_STACK_LINE(840)
				::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(840)
				::zpp_nape::dynamics::ZPP_IContact ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(840)
				if (((pre == null()))){
					HX_STACK_LINE(840)
					old = this->next;
					HX_STACK_LINE(840)
					ret1 = old->next;
					HX_STACK_LINE(840)
					this->next = ret1;
					HX_STACK_LINE(840)
					if (((this->next == null()))){
						HX_STACK_LINE(840)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(840)
					old = pre->next;
					HX_STACK_LINE(840)
					ret1 = old->next;
					HX_STACK_LINE(840)
					pre->next = ret1;
					HX_STACK_LINE(840)
					if (((ret1 == null()))){
						HX_STACK_LINE(840)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(840)
				old->_inuse = false;
				HX_STACK_LINE(840)
				this->modified = true;
				HX_STACK_LINE(840)
				(this->length)--;
				HX_STACK_LINE(840)
				this->pushmod = true;
				HX_STACK_LINE(840)
				ret1;
			}
			HX_STACK_LINE(841)
			ret = true;
			HX_STACK_LINE(842)
			break;
		}
		HX_STACK_LINE(844)
		pre = cur;
		HX_STACK_LINE(845)
		cur = cur->next;
	}
	HX_STACK_LINE(847)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_try_remove,return )

Void ZPP_IContact_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_IContact obj){
{
		HX_STACK_PUSH("ZPP_IContact::inlined_remove","zpp_nape/dynamics/Contact.hx",813);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(822)
		::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(822)
		::zpp_nape::dynamics::ZPP_IContact cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(822)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(822)
		while(((cur != null()))){
			HX_STACK_LINE(822)
			if (((cur == obj))){
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(822)
					::zpp_nape::dynamics::ZPP_IContact ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(822)
					if (((pre == null()))){
						HX_STACK_LINE(822)
						old = this->next;
						HX_STACK_LINE(822)
						ret1 = old->next;
						HX_STACK_LINE(822)
						this->next = ret1;
						HX_STACK_LINE(822)
						if (((this->next == null()))){
							HX_STACK_LINE(822)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(822)
						old = pre->next;
						HX_STACK_LINE(822)
						ret1 = old->next;
						HX_STACK_LINE(822)
						pre->next = ret1;
						HX_STACK_LINE(822)
						if (((ret1 == null()))){
							HX_STACK_LINE(822)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(822)
					old->_inuse = false;
					HX_STACK_LINE(822)
					this->modified = true;
					HX_STACK_LINE(822)
					(this->length)--;
					HX_STACK_LINE(822)
					this->pushmod = true;
					HX_STACK_LINE(822)
					ret1;
				}
				HX_STACK_LINE(822)
				ret = true;
				HX_STACK_LINE(822)
				break;
			}
			HX_STACK_LINE(822)
			pre = cur;
			HX_STACK_LINE(822)
			cur = cur->next;
		}
		HX_STACK_LINE(822)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_remove,(void))

bool ZPP_IContact_obj::try_remove( ::zpp_nape::dynamics::ZPP_IContact obj){
	HX_STACK_PUSH("ZPP_IContact::try_remove","zpp_nape/dynamics/Contact.hx",788);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(797)
	::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(798)
	::zpp_nape::dynamics::ZPP_IContact cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(799)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(800)
	while(((cur != null()))){
		HX_STACK_LINE(801)
		if (((cur == obj))){
			HX_STACK_LINE(802)
			this->erase(pre);
			HX_STACK_LINE(803)
			ret = true;
			HX_STACK_LINE(804)
			break;
		}
		HX_STACK_LINE(806)
		pre = cur;
		HX_STACK_LINE(807)
		cur = cur->next;
	}
	HX_STACK_LINE(809)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,try_remove,return )

Void ZPP_IContact_obj::remove( ::zpp_nape::dynamics::ZPP_IContact obj){
{
		HX_STACK_PUSH("ZPP_IContact::remove","zpp_nape/dynamics/Contact.hx",777);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(786)
		::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(786)
		::zpp_nape::dynamics::ZPP_IContact cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(786)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(786)
		while(((cur != null()))){
			HX_STACK_LINE(786)
			if (((cur == obj))){
				HX_STACK_LINE(786)
				{
					HX_STACK_LINE(786)
					::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(786)
					::zpp_nape::dynamics::ZPP_IContact ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(786)
					if (((pre == null()))){
						HX_STACK_LINE(786)
						old = this->next;
						HX_STACK_LINE(786)
						ret1 = old->next;
						HX_STACK_LINE(786)
						this->next = ret1;
						HX_STACK_LINE(786)
						if (((this->next == null()))){
							HX_STACK_LINE(786)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(786)
						old = pre->next;
						HX_STACK_LINE(786)
						ret1 = old->next;
						HX_STACK_LINE(786)
						pre->next = ret1;
						HX_STACK_LINE(786)
						if (((ret1 == null()))){
							HX_STACK_LINE(786)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(786)
					old->_inuse = false;
					HX_STACK_LINE(786)
					this->modified = true;
					HX_STACK_LINE(786)
					(this->length)--;
					HX_STACK_LINE(786)
					this->pushmod = true;
					HX_STACK_LINE(786)
					ret1;
				}
				HX_STACK_LINE(786)
				ret = true;
				HX_STACK_LINE(786)
				break;
			}
			HX_STACK_LINE(786)
			pre = cur;
			HX_STACK_LINE(786)
			cur = cur->next;
		}
		HX_STACK_LINE(786)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,remove,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZPP_IContact::inlined_pop_unsafe","zpp_nape/dynamics/Contact.hx",764);
	HX_STACK_THIS(this);
	HX_STACK_LINE(773)
	::zpp_nape::dynamics::ZPP_IContact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(774)
	this->pop();
	HX_STACK_LINE(775)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZPP_IContact::pop_unsafe","zpp_nape/dynamics/Contact.hx",759);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",760);
			{
				HX_STACK_LINE(760)
				::zpp_nape::dynamics::ZPP_IContact ret = __this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(760)
				__this->pop();
				HX_STACK_LINE(760)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(759)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,pop_unsafe,return )

Void ZPP_IContact_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZPP_IContact::inlined_pop","zpp_nape/dynamics/Contact.hx",740);
		HX_STACK_THIS(this);
		HX_STACK_LINE(749)
		::zpp_nape::dynamics::ZPP_IContact ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(750)
		this->next = ret->next;
		HX_STACK_LINE(751)
		ret->_inuse = false;
		HX_STACK_LINE(755)
		if (((this->next == null()))){
			HX_STACK_LINE(755)
			this->pushmod = true;
		}
		HX_STACK_LINE(756)
		this->modified = true;
		HX_STACK_LINE(757)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,inlined_pop,(void))

Void ZPP_IContact_obj::pop( ){
{
		HX_STACK_PUSH("ZPP_IContact::pop","zpp_nape/dynamics/Contact.hx",735);
		HX_STACK_THIS(this);
		HX_STACK_LINE(736)
		::zpp_nape::dynamics::ZPP_IContact ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(736)
		this->next = ret->next;
		HX_STACK_LINE(736)
		ret->_inuse = false;
		HX_STACK_LINE(736)
		if (((this->next == null()))){
			HX_STACK_LINE(736)
			this->pushmod = true;
		}
		HX_STACK_LINE(736)
		this->modified = true;
		HX_STACK_LINE(736)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,pop,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::inlined_insert( ::zpp_nape::dynamics::ZPP_IContact cur,::zpp_nape::dynamics::ZPP_IContact o){
	HX_STACK_PUSH("ZPP_IContact::inlined_insert","zpp_nape/dynamics/Contact.hx",710);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact &o){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",719);
			{
				HX_STACK_LINE(720)
				o->_inuse = true;
				HX_STACK_LINE(721)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(719)
	::zpp_nape::dynamics::ZPP_IContact temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(723)
	if (((cur == null()))){
		HX_STACK_LINE(724)
		temp->next = this->next;
		HX_STACK_LINE(725)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(728)
		temp->next = cur->next;
		HX_STACK_LINE(729)
		cur->next = temp;
	}
	HX_STACK_LINE(731)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(732)
	(this->length)++;
	HX_STACK_LINE(733)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_IContact_obj,inlined_insert,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::insert( ::zpp_nape::dynamics::ZPP_IContact cur,::zpp_nape::dynamics::ZPP_IContact o){
	HX_STACK_PUSH("ZPP_IContact::insert","zpp_nape/dynamics/Contact.hx",705);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact_obj *__this,::zpp_nape::dynamics::ZPP_IContact &o,::zpp_nape::dynamics::ZPP_IContact &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",706);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact &o){
						HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",706);
						{
							HX_STACK_LINE(706)
							o->_inuse = true;
							HX_STACK_LINE(706)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(706)
				::zpp_nape::dynamics::ZPP_IContact temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(706)
				if (((cur == null()))){
					HX_STACK_LINE(706)
					temp->next = __this->next;
					HX_STACK_LINE(706)
					__this->next = temp;
				}
				else{
					HX_STACK_LINE(706)
					temp->next = cur->next;
					HX_STACK_LINE(706)
					cur->next = temp;
				}
				HX_STACK_LINE(706)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(706)
				(__this->length)++;
				HX_STACK_LINE(706)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(705)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_IContact_obj,insert,return )

Void ZPP_IContact_obj::addAll( ::zpp_nape::dynamics::ZPP_IContact x){
{
		HX_STACK_PUSH("ZPP_IContact::addAll","zpp_nape/dynamics/Contact.hx",687);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(697)
		::zpp_nape::dynamics::ZPP_IContact cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(698)
		while(((cx_ite != null()))){
			HX_STACK_LINE(699)
			::zpp_nape::dynamics::ZPP_IContact i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(700)
			this->add(i);
			HX_STACK_LINE(701)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::inlined_add( ::zpp_nape::dynamics::ZPP_IContact o){
	HX_STACK_PUSH("ZPP_IContact::inlined_add","zpp_nape/dynamics/Contact.hx",668);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact &o){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",677);
			{
				HX_STACK_LINE(678)
				o->_inuse = true;
				HX_STACK_LINE(679)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(677)
	::zpp_nape::dynamics::ZPP_IContact temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(681)
	temp->next = this->next;
	HX_STACK_LINE(682)
	this->next = temp;
	HX_STACK_LINE(683)
	this->modified = true;
	HX_STACK_LINE(684)
	(this->length)++;
	HX_STACK_LINE(685)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::add( ::zpp_nape::dynamics::ZPP_IContact o){
	HX_STACK_PUSH("ZPP_IContact::add","zpp_nape/dynamics/Contact.hx",663);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact_obj *__this,::zpp_nape::dynamics::ZPP_IContact &o){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",664);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact &o){
						HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",664);
						{
							HX_STACK_LINE(664)
							o->_inuse = true;
							HX_STACK_LINE(664)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(664)
				::zpp_nape::dynamics::ZPP_IContact temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(664)
				temp->next = __this->next;
				HX_STACK_LINE(664)
				__this->next = temp;
				HX_STACK_LINE(664)
				__this->modified = true;
				HX_STACK_LINE(664)
				(__this->length)++;
				HX_STACK_LINE(664)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(663)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,add,return )

Void ZPP_IContact_obj::setbegin( ::zpp_nape::dynamics::ZPP_IContact i){
{
		HX_STACK_PUSH("ZPP_IContact::setbegin","zpp_nape/dynamics/Contact.hx",658);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(659)
		this->next = i;
		HX_STACK_LINE(660)
		this->modified = true;
		HX_STACK_LINE(661)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::begin( ){
	HX_STACK_PUSH("ZPP_IContact::begin","zpp_nape/dynamics/Contact.hx",649);
	HX_STACK_THIS(this);
	HX_STACK_LINE(649)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,begin,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::elem( ){
	HX_STACK_PUSH("ZPP_IContact::elem","zpp_nape/dynamics/Contact.hx",644);
	HX_STACK_THIS(this);
	HX_STACK_LINE(644)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,elem,return )


ZPP_IContact_obj::ZPP_IContact_obj()
{
}

void ZPP_IContact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_IContact);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(lr2y,"lr2y");
	HX_MARK_MEMBER_NAME(lr2x,"lr2x");
	HX_MARK_MEMBER_NAME(lr1y,"lr1y");
	HX_MARK_MEMBER_NAME(lr1x,"lr1x");
	HX_MARK_MEMBER_NAME(jtAcc,"jtAcc");
	HX_MARK_MEMBER_NAME(jnAcc,"jnAcc");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(bounce,"bounce");
	HX_MARK_MEMBER_NAME(tMass,"tMass");
	HX_MARK_MEMBER_NAME(nMass,"nMass");
	HX_MARK_MEMBER_NAME(r2y,"r2y");
	HX_MARK_MEMBER_NAME(r2x,"r2x");
	HX_MARK_MEMBER_NAME(r1y,"r1y");
	HX_MARK_MEMBER_NAME(r1x,"r1x");
	HX_MARK_END_CLASS();
}

void ZPP_IContact_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(lr2y,"lr2y");
	HX_VISIT_MEMBER_NAME(lr2x,"lr2x");
	HX_VISIT_MEMBER_NAME(lr1y,"lr1y");
	HX_VISIT_MEMBER_NAME(lr1x,"lr1x");
	HX_VISIT_MEMBER_NAME(jtAcc,"jtAcc");
	HX_VISIT_MEMBER_NAME(jnAcc,"jnAcc");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(bounce,"bounce");
	HX_VISIT_MEMBER_NAME(tMass,"tMass");
	HX_VISIT_MEMBER_NAME(nMass,"nMass");
	HX_VISIT_MEMBER_NAME(r2y,"r2y");
	HX_VISIT_MEMBER_NAME(r2x,"r2x");
	HX_VISIT_MEMBER_NAME(r1y,"r1y");
	HX_VISIT_MEMBER_NAME(r1x,"r1x");
}

Dynamic ZPP_IContact_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"r2y") ) { return r2y; }
		if (HX_FIELD_EQ(inName,"r2x") ) { return r2x; }
		if (HX_FIELD_EQ(inName,"r1y") ) { return r1y; }
		if (HX_FIELD_EQ(inName,"r1x") ) { return r1x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"lr2y") ) { return lr2y; }
		if (HX_FIELD_EQ(inName,"lr2x") ) { return lr2x; }
		if (HX_FIELD_EQ(inName,"lr1y") ) { return lr1y; }
		if (HX_FIELD_EQ(inName,"lr1x") ) { return lr1x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"jtAcc") ) { return jtAcc; }
		if (HX_FIELD_EQ(inName,"jnAcc") ) { return jnAcc; }
		if (HX_FIELD_EQ(inName,"tMass") ) { return tMass; }
		if (HX_FIELD_EQ(inName,"nMass") ) { return nMass; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { return _inuse; }
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
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

Dynamic ZPP_IContact_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"r2y") ) { r2y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2x") ) { r2x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1y") ) { r1y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1x") ) { r1x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lr2y") ) { lr2y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lr2x") ) { lr2x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lr1y") ) { lr1y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lr1x") ) { lr1x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"jtAcc") ) { jtAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jnAcc") ) { jnAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tMass") ) { tMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nMass") ) { nMass=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounce") ) { bounce=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_IContact_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("lr2y"));
	outFields->push(HX_CSTRING("lr2x"));
	outFields->push(HX_CSTRING("lr1y"));
	outFields->push(HX_CSTRING("lr1x"));
	outFields->push(HX_CSTRING("jtAcc"));
	outFields->push(HX_CSTRING("jnAcc"));
	outFields->push(HX_CSTRING("friction"));
	outFields->push(HX_CSTRING("bounce"));
	outFields->push(HX_CSTRING("tMass"));
	outFields->push(HX_CSTRING("nMass"));
	outFields->push(HX_CSTRING("r2y"));
	outFields->push(HX_CSTRING("r2x"));
	outFields->push(HX_CSTRING("r1y"));
	outFields->push(HX_CSTRING("r1x"));
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
	HX_CSTRING("_inuse"),
	HX_CSTRING("begin"),
	HX_CSTRING("elem"),
	HX_CSTRING("next"),
	HX_CSTRING("lr2y"),
	HX_CSTRING("lr2x"),
	HX_CSTRING("lr1y"),
	HX_CSTRING("lr1x"),
	HX_CSTRING("jtAcc"),
	HX_CSTRING("jnAcc"),
	HX_CSTRING("friction"),
	HX_CSTRING("bounce"),
	HX_CSTRING("tMass"),
	HX_CSTRING("nMass"),
	HX_CSTRING("r2y"),
	HX_CSTRING("r2x"),
	HX_CSTRING("r1y"),
	HX_CSTRING("r1x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_IContact_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_IContact_obj::__mClass,"__mClass");
};

Class ZPP_IContact_obj::__mClass;

void ZPP_IContact_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_IContact"), hx::TCanCast< ZPP_IContact_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_IContact_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace dynamics
