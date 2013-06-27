#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CbType_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_CbType::new","zpp_nape/util/Lists.hx",175);
{
	HX_STACK_LINE(185)
	this->length = (int)0;
	HX_STACK_LINE(184)
	this->pushmod = false;
	HX_STACK_LINE(183)
	this->modified = false;
	HX_STACK_LINE(176)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_CbType_obj::~ZNPList_ZPP_CbType_obj() { }

Dynamic ZNPList_ZPP_CbType_obj::__CreateEmpty() { return  new ZNPList_ZPP_CbType_obj; }
hx::ObjectPtr< ZNPList_ZPP_CbType_obj > ZNPList_ZPP_CbType_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CbType_obj > result = new ZNPList_ZPP_CbType_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_CbType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CbType_obj > result = new ZNPList_ZPP_CbType_obj();
	result->__construct();
	return result;}

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::at","zpp_nape/util/Lists.hx",578);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(587)
	::zpp_nape::util::ZNPNode_ZPP_CbType it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(588)
	return (  (((it != null()))) ? ::zpp_nape::callbacks::ZPP_CbType(it->elt) : ::zpp_nape::callbacks::ZPP_CbType(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::iterator_at","zpp_nape/util/Lists.hx",565);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(574)
	::zpp_nape::util::ZNPNode_ZPP_CbType ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(575)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(575)
		ret = ret->next;
	}
	HX_STACK_LINE(576)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::back","zpp_nape/util/Lists.hx",556);
	HX_STACK_THIS(this);
	HX_STACK_LINE(557)
	::zpp_nape::util::ZNPNode_ZPP_CbType ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(558)
	::zpp_nape::util::ZNPNode_ZPP_CbType cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(559)
	while(((cur != null()))){
		HX_STACK_LINE(560)
		ret = cur;
		HX_STACK_LINE(561)
		cur = cur->next;
	}
	HX_STACK_LINE(563)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,back,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::front","zpp_nape/util/Lists.hx",553);
	HX_STACK_THIS(this);
	HX_STACK_LINE(553)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,front,return )

bool ZNPList_ZPP_CbType_obj::inlined_has( ::zpp_nape::callbacks::ZPP_CbType obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_has","zpp_nape/util/Lists.hx",523);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(532)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(534)
		ret = false;
		HX_STACK_LINE(535)
		{
			HX_STACK_LINE(536)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(537)
			while(((cx_ite != null()))){
				HX_STACK_LINE(538)
				::zpp_nape::callbacks::ZPP_CbType npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(539)
				if (((npite == obj))){
					HX_STACK_LINE(541)
					ret = true;
					HX_STACK_LINE(542)
					break;
				}
				HX_STACK_LINE(545)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(549)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_has,return )

bool ZNPList_ZPP_CbType_obj::has( ::zpp_nape::callbacks::ZPP_CbType obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::has","zpp_nape/util/Lists.hx",518);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_CbType_obj *__this,::zpp_nape::callbacks::ZPP_CbType &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",519);
			{
				HX_STACK_LINE(519)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(519)
				{
					HX_STACK_LINE(519)
					ret = false;
					HX_STACK_LINE(519)
					{
						HX_STACK_LINE(519)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(519)
						while(((cx_ite != null()))){
							HX_STACK_LINE(519)
							::zpp_nape::callbacks::ZPP_CbType npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(519)
							if (((npite == obj))){
								HX_STACK_LINE(519)
								ret = true;
								HX_STACK_LINE(519)
								break;
							}
							HX_STACK_LINE(519)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(519)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(518)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,has,return )

int ZNPList_ZPP_CbType_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::size","zpp_nape/util/Lists.hx",515);
	HX_STACK_THIS(this);
	HX_STACK_LINE(515)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,size,return )

bool ZNPList_ZPP_CbType_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::empty","zpp_nape/util/Lists.hx",510);
	HX_STACK_THIS(this);
	HX_STACK_LINE(510)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,empty,return )

Void ZNPList_ZPP_CbType_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::reverse","zpp_nape/util/Lists.hx",495);
		HX_STACK_THIS(this);
		HX_STACK_LINE(496)
		::zpp_nape::util::ZNPNode_ZPP_CbType cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(497)
		::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(498)
		while(((cur != null()))){
			HX_STACK_LINE(499)
			::zpp_nape::util::ZNPNode_ZPP_CbType nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(500)
			cur->next = pre;
			HX_STACK_LINE(501)
			this->head = cur;
			HX_STACK_LINE(502)
			pre = cur;
			HX_STACK_LINE(503)
			cur = nx;
		}
		HX_STACK_LINE(505)
		this->modified = true;
		HX_STACK_LINE(506)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,reverse,(void))

Void ZNPList_ZPP_CbType_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_clear","zpp_nape/util/Lists.hx",489);
		HX_STACK_THIS(this);
		HX_STACK_LINE(491)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(491)
			::zpp_nape::util::ZNPNode_ZPP_CbType ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(491)
			this->head = ret->next;
			HX_STACK_LINE(491)
			{
				HX_STACK_LINE(491)
				::zpp_nape::util::ZNPNode_ZPP_CbType o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(491)
				o->elt = null();
				HX_STACK_LINE(491)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
				HX_STACK_LINE(491)
				::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
			}
			HX_STACK_LINE(491)
			if (((this->head == null()))){
				HX_STACK_LINE(491)
				this->pushmod = true;
			}
			HX_STACK_LINE(491)
			this->modified = true;
			HX_STACK_LINE(491)
			(this->length)--;
		}
		HX_STACK_LINE(492)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,inlined_clear,(void))

Void ZNPList_ZPP_CbType_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::clear","zpp_nape/util/Lists.hx",484);
		HX_STACK_THIS(this);
		HX_STACK_LINE(485)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(485)
			::zpp_nape::util::ZNPNode_ZPP_CbType ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(485)
			this->head = ret->next;
			HX_STACK_LINE(485)
			{
				HX_STACK_LINE(485)
				::zpp_nape::util::ZNPNode_ZPP_CbType o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(485)
				o->elt = null();
				HX_STACK_LINE(485)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
				HX_STACK_LINE(485)
				::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
			}
			HX_STACK_LINE(485)
			if (((this->head == null()))){
				HX_STACK_LINE(485)
				this->pushmod = true;
			}
			HX_STACK_LINE(485)
			this->modified = true;
			HX_STACK_LINE(485)
			(this->length)--;
		}
		HX_STACK_LINE(485)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CbType pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::splice","zpp_nape/util/Lists.hx",480);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(481)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(481)
		this->erase(pre);
	}
	HX_STACK_LINE(482)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbType_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CbType pre){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_erase","zpp_nape/util/Lists.hx",434);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(443)
	::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(444)
	::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(445)
	if (((pre == null()))){
		HX_STACK_LINE(446)
		old = this->head;
		HX_STACK_LINE(447)
		ret = old->next;
		HX_STACK_LINE(448)
		this->head = ret;
		HX_STACK_LINE(449)
		if (((this->head == null()))){
			HX_STACK_LINE(449)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(452)
		old = pre->next;
		HX_STACK_LINE(453)
		ret = old->next;
		HX_STACK_LINE(454)
		pre->next = ret;
		HX_STACK_LINE(455)
		if (((ret == null()))){
			HX_STACK_LINE(455)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(458)
	{
		HX_STACK_LINE(459)
		::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(468)
		o->elt = null();
		HX_STACK_LINE(469)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
		HX_STACK_LINE(470)
		::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
	}
	HX_STACK_LINE(475)
	this->modified = true;
	HX_STACK_LINE(476)
	(this->length)--;
	HX_STACK_LINE(477)
	this->pushmod = true;
	HX_STACK_LINE(478)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CbType pre){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::erase","zpp_nape/util/Lists.hx",429);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::util::ZNPList_ZPP_CbType_obj *__this,::zpp_nape::util::ZNPNode_ZPP_CbType &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",430);
			{
				HX_STACK_LINE(430)
				::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(430)
				::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(430)
				if (((pre == null()))){
					HX_STACK_LINE(430)
					old = __this->head;
					HX_STACK_LINE(430)
					ret = old->next;
					HX_STACK_LINE(430)
					__this->head = ret;
					HX_STACK_LINE(430)
					if (((__this->head == null()))){
						HX_STACK_LINE(430)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(430)
					old = pre->next;
					HX_STACK_LINE(430)
					ret = old->next;
					HX_STACK_LINE(430)
					pre->next = ret;
					HX_STACK_LINE(430)
					if (((ret == null()))){
						HX_STACK_LINE(430)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(430)
					o->elt = null();
					HX_STACK_LINE(430)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
					HX_STACK_LINE(430)
					::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
				}
				HX_STACK_LINE(430)
				__this->modified = true;
				HX_STACK_LINE(430)
				(__this->length)--;
				HX_STACK_LINE(430)
				__this->pushmod = true;
				HX_STACK_LINE(430)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(429)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,erase,return )

bool ZNPList_ZPP_CbType_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_CbType obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_try_remove","zpp_nape/util/Lists.hx",406);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(415)
	::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(416)
	::zpp_nape::util::ZNPNode_ZPP_CbType cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(417)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(418)
	while(((cur != null()))){
		HX_STACK_LINE(419)
		if (((cur->elt == obj))){
			HX_STACK_LINE(420)
			{
				HX_STACK_LINE(420)
				::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(420)
				::zpp_nape::util::ZNPNode_ZPP_CbType ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(420)
				if (((pre == null()))){
					HX_STACK_LINE(420)
					old = this->head;
					HX_STACK_LINE(420)
					ret1 = old->next;
					HX_STACK_LINE(420)
					this->head = ret1;
					HX_STACK_LINE(420)
					if (((this->head == null()))){
						HX_STACK_LINE(420)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(420)
					old = pre->next;
					HX_STACK_LINE(420)
					ret1 = old->next;
					HX_STACK_LINE(420)
					pre->next = ret1;
					HX_STACK_LINE(420)
					if (((ret1 == null()))){
						HX_STACK_LINE(420)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(420)
				{
					HX_STACK_LINE(420)
					::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(420)
					o->elt = null();
					HX_STACK_LINE(420)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
					HX_STACK_LINE(420)
					::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
				}
				HX_STACK_LINE(420)
				this->modified = true;
				HX_STACK_LINE(420)
				(this->length)--;
				HX_STACK_LINE(420)
				this->pushmod = true;
				HX_STACK_LINE(420)
				ret1;
			}
			HX_STACK_LINE(421)
			ret = true;
			HX_STACK_LINE(422)
			break;
		}
		HX_STACK_LINE(424)
		pre = cur;
		HX_STACK_LINE(425)
		cur = cur->next;
	}
	HX_STACK_LINE(427)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_try_remove,return )

Void ZNPList_ZPP_CbType_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_CbType obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_remove","zpp_nape/util/Lists.hx",393);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(402)
		::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(402)
		::zpp_nape::util::ZNPNode_ZPP_CbType cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(402)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(402)
		while(((cur != null()))){
			HX_STACK_LINE(402)
			if (((cur->elt == obj))){
				HX_STACK_LINE(402)
				{
					HX_STACK_LINE(402)
					::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(402)
					::zpp_nape::util::ZNPNode_ZPP_CbType ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(402)
					if (((pre == null()))){
						HX_STACK_LINE(402)
						old = this->head;
						HX_STACK_LINE(402)
						ret1 = old->next;
						HX_STACK_LINE(402)
						this->head = ret1;
						HX_STACK_LINE(402)
						if (((this->head == null()))){
							HX_STACK_LINE(402)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(402)
						old = pre->next;
						HX_STACK_LINE(402)
						ret1 = old->next;
						HX_STACK_LINE(402)
						pre->next = ret1;
						HX_STACK_LINE(402)
						if (((ret1 == null()))){
							HX_STACK_LINE(402)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(402)
					{
						HX_STACK_LINE(402)
						::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(402)
						o->elt = null();
						HX_STACK_LINE(402)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
						HX_STACK_LINE(402)
						::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
					}
					HX_STACK_LINE(402)
					this->modified = true;
					HX_STACK_LINE(402)
					(this->length)--;
					HX_STACK_LINE(402)
					this->pushmod = true;
					HX_STACK_LINE(402)
					ret1;
				}
				HX_STACK_LINE(402)
				ret = true;
				HX_STACK_LINE(402)
				break;
			}
			HX_STACK_LINE(402)
			pre = cur;
			HX_STACK_LINE(402)
			cur = cur->next;
		}
		HX_STACK_LINE(402)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_remove,(void))

bool ZNPList_ZPP_CbType_obj::try_remove( ::zpp_nape::callbacks::ZPP_CbType obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::try_remove","zpp_nape/util/Lists.hx",368);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(377)
	::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(378)
	::zpp_nape::util::ZNPNode_ZPP_CbType cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(379)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(380)
	while(((cur != null()))){
		HX_STACK_LINE(381)
		if (((cur->elt == obj))){
			HX_STACK_LINE(382)
			this->erase(pre);
			HX_STACK_LINE(383)
			ret = true;
			HX_STACK_LINE(384)
			break;
		}
		HX_STACK_LINE(386)
		pre = cur;
		HX_STACK_LINE(387)
		cur = cur->next;
	}
	HX_STACK_LINE(389)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,try_remove,return )

Void ZNPList_ZPP_CbType_obj::remove( ::zpp_nape::callbacks::ZPP_CbType obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::remove","zpp_nape/util/Lists.hx",357);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(366)
		::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(366)
		::zpp_nape::util::ZNPNode_ZPP_CbType cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(366)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(366)
		while(((cur != null()))){
			HX_STACK_LINE(366)
			if (((cur->elt == obj))){
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(366)
					::zpp_nape::util::ZNPNode_ZPP_CbType ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(366)
					if (((pre == null()))){
						HX_STACK_LINE(366)
						old = this->head;
						HX_STACK_LINE(366)
						ret1 = old->next;
						HX_STACK_LINE(366)
						this->head = ret1;
						HX_STACK_LINE(366)
						if (((this->head == null()))){
							HX_STACK_LINE(366)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(366)
						old = pre->next;
						HX_STACK_LINE(366)
						ret1 = old->next;
						HX_STACK_LINE(366)
						pre->next = ret1;
						HX_STACK_LINE(366)
						if (((ret1 == null()))){
							HX_STACK_LINE(366)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(366)
					{
						HX_STACK_LINE(366)
						::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(366)
						o->elt = null();
						HX_STACK_LINE(366)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
						HX_STACK_LINE(366)
						::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
					}
					HX_STACK_LINE(366)
					this->modified = true;
					HX_STACK_LINE(366)
					(this->length)--;
					HX_STACK_LINE(366)
					this->pushmod = true;
					HX_STACK_LINE(366)
					ret1;
				}
				HX_STACK_LINE(366)
				ret = true;
				HX_STACK_LINE(366)
				break;
			}
			HX_STACK_LINE(366)
			pre = cur;
			HX_STACK_LINE(366)
			cur = cur->next;
		}
		HX_STACK_LINE(366)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,remove,(void))

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_pop_unsafe","zpp_nape/util/Lists.hx",344);
	HX_STACK_THIS(this);
	HX_STACK_LINE(353)
	::zpp_nape::callbacks::ZPP_CbType ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(354)
	this->pop();
	HX_STACK_LINE(355)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,inlined_pop_unsafe,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::pop_unsafe","zpp_nape/util/Lists.hx",339);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbType Block( ::zpp_nape::util::ZNPList_ZPP_CbType_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",340);
			{
				HX_STACK_LINE(340)
				::zpp_nape::callbacks::ZPP_CbType ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(340)
				__this->pop();
				HX_STACK_LINE(340)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(339)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,pop_unsafe,return )

Void ZNPList_ZPP_CbType_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_pop","zpp_nape/util/Lists.hx",306);
		HX_STACK_THIS(this);
		HX_STACK_LINE(315)
		::zpp_nape::util::ZNPNode_ZPP_CbType ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(316)
		this->head = ret->next;
		HX_STACK_LINE(318)
		{
			HX_STACK_LINE(319)
			::zpp_nape::util::ZNPNode_ZPP_CbType o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(328)
			o->elt = null();
			HX_STACK_LINE(329)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
			HX_STACK_LINE(330)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
		}
		HX_STACK_LINE(335)
		if (((this->head == null()))){
			HX_STACK_LINE(335)
			this->pushmod = true;
		}
		HX_STACK_LINE(336)
		this->modified = true;
		HX_STACK_LINE(337)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,inlined_pop,(void))

Void ZNPList_ZPP_CbType_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::pop","zpp_nape/util/Lists.hx",301);
		HX_STACK_THIS(this);
		HX_STACK_LINE(302)
		::zpp_nape::util::ZNPNode_ZPP_CbType ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(302)
		this->head = ret->next;
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			::zpp_nape::util::ZNPNode_ZPP_CbType o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(302)
			o->elt = null();
			HX_STACK_LINE(302)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
			HX_STACK_LINE(302)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
		}
		HX_STACK_LINE(302)
		if (((this->head == null()))){
			HX_STACK_LINE(302)
			this->pushmod = true;
		}
		HX_STACK_LINE(302)
		this->modified = true;
		HX_STACK_LINE(302)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CbType cur,::zpp_nape::callbacks::ZPP_CbType o){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_insert","zpp_nape/util/Lists.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",267);
			{
				HX_STACK_LINE(268)
				::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(269)
				{
					HX_STACK_LINE(270)
					if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
						HX_STACK_LINE(270)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
					}
					else{
						HX_STACK_LINE(277)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
						HX_STACK_LINE(278)
						::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
						HX_STACK_LINE(279)
						ret->next = null();
					}
					HX_STACK_LINE(284)
					Dynamic();
				}
				HX_STACK_LINE(286)
				ret->elt = o;
				HX_STACK_LINE(287)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(267)
	::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(289)
	if (((cur == null()))){
		HX_STACK_LINE(290)
		temp->next = this->head;
		HX_STACK_LINE(291)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(294)
		temp->next = cur->next;
		HX_STACK_LINE(295)
		cur->next = temp;
	}
	HX_STACK_LINE(297)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(298)
	(this->length)++;
	HX_STACK_LINE(299)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbType_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CbType cur,::zpp_nape::callbacks::ZPP_CbType o){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::insert","zpp_nape/util/Lists.hx",253);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::util::ZNPList_ZPP_CbType_obj *__this,::zpp_nape::callbacks::ZPP_CbType &o,::zpp_nape::util::ZNPNode_ZPP_CbType &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",254);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",254);
						{
							HX_STACK_LINE(254)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(254)
							{
								HX_STACK_LINE(254)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
									HX_STACK_LINE(254)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
								}
								else{
									HX_STACK_LINE(254)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
									HX_STACK_LINE(254)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(254)
									ret->next = null();
								}
								HX_STACK_LINE(254)
								Dynamic();
							}
							HX_STACK_LINE(254)
							ret->elt = o;
							HX_STACK_LINE(254)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(254)
				::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(254)
				if (((cur == null()))){
					HX_STACK_LINE(254)
					temp->next = __this->head;
					HX_STACK_LINE(254)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(254)
					temp->next = cur->next;
					HX_STACK_LINE(254)
					cur->next = temp;
				}
				HX_STACK_LINE(254)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(254)
				(__this->length)++;
				HX_STACK_LINE(254)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(253)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbType_obj,insert,return )

Void ZNPList_ZPP_CbType_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CbType x){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::addAll","zpp_nape/util/Lists.hx",235);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(245)
		::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(246)
		while(((cx_ite != null()))){
			HX_STACK_LINE(247)
			::zpp_nape::callbacks::ZPP_CbType i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(248)
			this->add(i);
			HX_STACK_LINE(249)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,addAll,(void))

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::inlined_add( ::zpp_nape::callbacks::ZPP_CbType o){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_add","zpp_nape/util/Lists.hx",198);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",207);
			{
				HX_STACK_LINE(208)
				::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(210)
					if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
						HX_STACK_LINE(210)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
					}
					else{
						HX_STACK_LINE(217)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
						HX_STACK_LINE(218)
						::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
						HX_STACK_LINE(219)
						ret->next = null();
					}
					HX_STACK_LINE(224)
					Dynamic();
				}
				HX_STACK_LINE(226)
				ret->elt = o;
				HX_STACK_LINE(227)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(207)
	::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(229)
	temp->next = this->head;
	HX_STACK_LINE(230)
	this->head = temp;
	HX_STACK_LINE(231)
	this->modified = true;
	HX_STACK_LINE(232)
	(this->length)++;
	HX_STACK_LINE(233)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_add,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::add( ::zpp_nape::callbacks::ZPP_CbType o){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::add","zpp_nape/util/Lists.hx",193);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbType Block( ::zpp_nape::util::ZNPList_ZPP_CbType_obj *__this,::zpp_nape::callbacks::ZPP_CbType &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",194);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",194);
						{
							HX_STACK_LINE(194)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
									HX_STACK_LINE(194)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
								}
								else{
									HX_STACK_LINE(194)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
									HX_STACK_LINE(194)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(194)
									ret->next = null();
								}
								HX_STACK_LINE(194)
								Dynamic();
							}
							HX_STACK_LINE(194)
							ret->elt = o;
							HX_STACK_LINE(194)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(194)
				::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(194)
				temp->next = __this->head;
				HX_STACK_LINE(194)
				__this->head = temp;
				HX_STACK_LINE(194)
				__this->modified = true;
				HX_STACK_LINE(194)
				(__this->length)++;
				HX_STACK_LINE(194)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(193)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,add,return )

Void ZNPList_ZPP_CbType_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CbType i){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::setbegin","zpp_nape/util/Lists.hx",188);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(189)
		this->head = i;
		HX_STACK_LINE(190)
		this->modified = true;
		HX_STACK_LINE(191)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::begin","zpp_nape/util/Lists.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_LINE(180)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,begin,return )


ZNPList_ZPP_CbType_obj::ZNPList_ZPP_CbType_obj()
{
}

void ZNPList_ZPP_CbType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CbType);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CbType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_CbType_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_CbType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CbType >(); return inValue; }
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

void ZNPList_ZPP_CbType_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CbType_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CbType_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_CbType_obj::__mClass;

void ZNPList_ZPP_CbType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_CbType"), hx::TCanCast< ZNPList_ZPP_CbType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_CbType_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
