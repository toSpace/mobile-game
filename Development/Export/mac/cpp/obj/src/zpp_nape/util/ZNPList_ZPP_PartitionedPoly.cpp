#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPList_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_PartitionedPoly_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::new","zpp_nape/util/Lists.hx",6847);
{
	HX_STACK_LINE(6857)
	this->length = (int)0;
	HX_STACK_LINE(6856)
	this->pushmod = false;
	HX_STACK_LINE(6855)
	this->modified = false;
	HX_STACK_LINE(6848)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_PartitionedPoly_obj::~ZNPList_ZPP_PartitionedPoly_obj() { }

Dynamic ZNPList_ZPP_PartitionedPoly_obj::__CreateEmpty() { return  new ZNPList_ZPP_PartitionedPoly_obj; }
hx::ObjectPtr< ZNPList_ZPP_PartitionedPoly_obj > ZNPList_ZPP_PartitionedPoly_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_PartitionedPoly_obj > result = new ZNPList_ZPP_PartitionedPoly_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_PartitionedPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_PartitionedPoly_obj > result = new ZNPList_ZPP_PartitionedPoly_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::at","zpp_nape/util/Lists.hx",7250);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(7259)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(7260)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_PartitionedPoly(it->elt) : ::zpp_nape::geom::ZPP_PartitionedPoly(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::iterator_at","zpp_nape/util/Lists.hx",7237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(7246)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7247)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(7247)
		ret = ret->next;
	}
	HX_STACK_LINE(7248)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,iterator_at,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::back","zpp_nape/util/Lists.hx",7228);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7229)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7230)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7231)
	while(((cur != null()))){
		HX_STACK_LINE(7232)
		ret = cur;
		HX_STACK_LINE(7233)
		cur = cur->next;
	}
	HX_STACK_LINE(7235)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,back,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::front","zpp_nape/util/Lists.hx",7225);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7225)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,front,return )

bool ZNPList_ZPP_PartitionedPoly_obj::inlined_has( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_has","zpp_nape/util/Lists.hx",7195);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7204)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7205)
	{
		HX_STACK_LINE(7206)
		ret = false;
		HX_STACK_LINE(7207)
		{
			HX_STACK_LINE(7208)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(7209)
			while(((cx_ite != null()))){
				HX_STACK_LINE(7210)
				::zpp_nape::geom::ZPP_PartitionedPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(7211)
				if (((npite == obj))){
					HX_STACK_LINE(7213)
					ret = true;
					HX_STACK_LINE(7214)
					break;
				}
				HX_STACK_LINE(7217)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(7221)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_has,return )

bool ZNPList_ZPP_PartitionedPoly_obj::has( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::has","zpp_nape/util/Lists.hx",7190);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj *__this,::zpp_nape::geom::ZPP_PartitionedPoly &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7191);
			{
				HX_STACK_LINE(7191)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7191)
				{
					HX_STACK_LINE(7191)
					ret = false;
					HX_STACK_LINE(7191)
					{
						HX_STACK_LINE(7191)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(7191)
						while(((cx_ite != null()))){
							HX_STACK_LINE(7191)
							::zpp_nape::geom::ZPP_PartitionedPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(7191)
							if (((npite == obj))){
								HX_STACK_LINE(7191)
								ret = true;
								HX_STACK_LINE(7191)
								break;
							}
							HX_STACK_LINE(7191)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(7191)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7190)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,has,return )

int ZNPList_ZPP_PartitionedPoly_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::size","zpp_nape/util/Lists.hx",7187);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7187)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,size,return )

bool ZNPList_ZPP_PartitionedPoly_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::empty","zpp_nape/util/Lists.hx",7182);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7182)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,empty,return )

Void ZNPList_ZPP_PartitionedPoly_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::reverse","zpp_nape/util/Lists.hx",7167);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7168)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7169)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7170)
		while(((cur != null()))){
			HX_STACK_LINE(7171)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(7172)
			cur->next = pre;
			HX_STACK_LINE(7173)
			this->head = cur;
			HX_STACK_LINE(7174)
			pre = cur;
			HX_STACK_LINE(7175)
			cur = nx;
		}
		HX_STACK_LINE(7177)
		this->modified = true;
		HX_STACK_LINE(7178)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,reverse,(void))

Void ZNPList_ZPP_PartitionedPoly_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_clear","zpp_nape/util/Lists.hx",7161);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7163)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(7163)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7163)
			this->head = ret->next;
			HX_STACK_LINE(7163)
			{
				HX_STACK_LINE(7163)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7163)
				o->elt = null();
				HX_STACK_LINE(7163)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
				HX_STACK_LINE(7163)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7163)
			if (((this->head == null()))){
				HX_STACK_LINE(7163)
				this->pushmod = true;
			}
			HX_STACK_LINE(7163)
			this->modified = true;
			HX_STACK_LINE(7163)
			(this->length)--;
		}
		HX_STACK_LINE(7164)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,inlined_clear,(void))

Void ZNPList_ZPP_PartitionedPoly_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::clear","zpp_nape/util/Lists.hx",7156);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7157)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(7157)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7157)
			this->head = ret->next;
			HX_STACK_LINE(7157)
			{
				HX_STACK_LINE(7157)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7157)
				o->elt = null();
				HX_STACK_LINE(7157)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
				HX_STACK_LINE(7157)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7157)
			if (((this->head == null()))){
				HX_STACK_LINE(7157)
				this->pushmod = true;
			}
			HX_STACK_LINE(7157)
			this->modified = true;
			HX_STACK_LINE(7157)
			(this->length)--;
		}
		HX_STACK_LINE(7157)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::splice","zpp_nape/util/Lists.hx",7152);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(7153)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(7153)
		this->erase(pre);
	}
	HX_STACK_LINE(7154)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionedPoly_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_erase","zpp_nape/util/Lists.hx",7106);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(7115)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(7116)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7117)
	if (((pre == null()))){
		HX_STACK_LINE(7118)
		old = this->head;
		HX_STACK_LINE(7119)
		ret = old->next;
		HX_STACK_LINE(7120)
		this->head = ret;
		HX_STACK_LINE(7121)
		if (((this->head == null()))){
			HX_STACK_LINE(7121)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(7124)
		old = pre->next;
		HX_STACK_LINE(7125)
		ret = old->next;
		HX_STACK_LINE(7126)
		pre->next = ret;
		HX_STACK_LINE(7127)
		if (((ret == null()))){
			HX_STACK_LINE(7127)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(7130)
	{
		HX_STACK_LINE(7131)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(7140)
		o->elt = null();
		HX_STACK_LINE(7141)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
		HX_STACK_LINE(7142)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
	}
	HX_STACK_LINE(7147)
	this->modified = true;
	HX_STACK_LINE(7148)
	(this->length)--;
	HX_STACK_LINE(7149)
	this->pushmod = true;
	HX_STACK_LINE(7150)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::erase","zpp_nape/util/Lists.hx",7101);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly Block( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj *__this,::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7102);
			{
				HX_STACK_LINE(7102)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7102)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7102)
				if (((pre == null()))){
					HX_STACK_LINE(7102)
					old = __this->head;
					HX_STACK_LINE(7102)
					ret = old->next;
					HX_STACK_LINE(7102)
					__this->head = ret;
					HX_STACK_LINE(7102)
					if (((__this->head == null()))){
						HX_STACK_LINE(7102)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7102)
					old = pre->next;
					HX_STACK_LINE(7102)
					ret = old->next;
					HX_STACK_LINE(7102)
					pre->next = ret;
					HX_STACK_LINE(7102)
					if (((ret == null()))){
						HX_STACK_LINE(7102)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(7102)
				{
					HX_STACK_LINE(7102)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7102)
					o->elt = null();
					HX_STACK_LINE(7102)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
					HX_STACK_LINE(7102)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7102)
				__this->modified = true;
				HX_STACK_LINE(7102)
				(__this->length)--;
				HX_STACK_LINE(7102)
				__this->pushmod = true;
				HX_STACK_LINE(7102)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7101)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,erase,return )

bool ZNPList_ZPP_PartitionedPoly_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_try_remove","zpp_nape/util/Lists.hx",7078);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7087)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7088)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7089)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7090)
	while(((cur != null()))){
		HX_STACK_LINE(7091)
		if (((cur->elt == obj))){
			HX_STACK_LINE(7092)
			{
				HX_STACK_LINE(7092)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7092)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(7092)
				if (((pre == null()))){
					HX_STACK_LINE(7092)
					old = this->head;
					HX_STACK_LINE(7092)
					ret1 = old->next;
					HX_STACK_LINE(7092)
					this->head = ret1;
					HX_STACK_LINE(7092)
					if (((this->head == null()))){
						HX_STACK_LINE(7092)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7092)
					old = pre->next;
					HX_STACK_LINE(7092)
					ret1 = old->next;
					HX_STACK_LINE(7092)
					pre->next = ret1;
					HX_STACK_LINE(7092)
					if (((ret1 == null()))){
						HX_STACK_LINE(7092)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(7092)
				{
					HX_STACK_LINE(7092)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7092)
					o->elt = null();
					HX_STACK_LINE(7092)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
					HX_STACK_LINE(7092)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7092)
				this->modified = true;
				HX_STACK_LINE(7092)
				(this->length)--;
				HX_STACK_LINE(7092)
				this->pushmod = true;
				HX_STACK_LINE(7092)
				ret1;
			}
			HX_STACK_LINE(7093)
			ret = true;
			HX_STACK_LINE(7094)
			break;
		}
		HX_STACK_LINE(7096)
		pre = cur;
		HX_STACK_LINE(7097)
		cur = cur->next;
	}
	HX_STACK_LINE(7099)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_try_remove,return )

Void ZNPList_ZPP_PartitionedPoly_obj::inlined_remove( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_remove","zpp_nape/util/Lists.hx",7065);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(7074)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7074)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7074)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7074)
		while(((cur != null()))){
			HX_STACK_LINE(7074)
			if (((cur->elt == obj))){
				HX_STACK_LINE(7074)
				{
					HX_STACK_LINE(7074)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(7074)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(7074)
					if (((pre == null()))){
						HX_STACK_LINE(7074)
						old = this->head;
						HX_STACK_LINE(7074)
						ret1 = old->next;
						HX_STACK_LINE(7074)
						this->head = ret1;
						HX_STACK_LINE(7074)
						if (((this->head == null()))){
							HX_STACK_LINE(7074)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(7074)
						old = pre->next;
						HX_STACK_LINE(7074)
						ret1 = old->next;
						HX_STACK_LINE(7074)
						pre->next = ret1;
						HX_STACK_LINE(7074)
						if (((ret1 == null()))){
							HX_STACK_LINE(7074)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(7074)
					{
						HX_STACK_LINE(7074)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(7074)
						o->elt = null();
						HX_STACK_LINE(7074)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
						HX_STACK_LINE(7074)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
					}
					HX_STACK_LINE(7074)
					this->modified = true;
					HX_STACK_LINE(7074)
					(this->length)--;
					HX_STACK_LINE(7074)
					this->pushmod = true;
					HX_STACK_LINE(7074)
					ret1;
				}
				HX_STACK_LINE(7074)
				ret = true;
				HX_STACK_LINE(7074)
				break;
			}
			HX_STACK_LINE(7074)
			pre = cur;
			HX_STACK_LINE(7074)
			cur = cur->next;
		}
		HX_STACK_LINE(7074)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_remove,(void))

bool ZNPList_ZPP_PartitionedPoly_obj::try_remove( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::try_remove","zpp_nape/util/Lists.hx",7040);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7049)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7050)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7051)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7052)
	while(((cur != null()))){
		HX_STACK_LINE(7053)
		if (((cur->elt == obj))){
			HX_STACK_LINE(7054)
			this->erase(pre);
			HX_STACK_LINE(7055)
			ret = true;
			HX_STACK_LINE(7056)
			break;
		}
		HX_STACK_LINE(7058)
		pre = cur;
		HX_STACK_LINE(7059)
		cur = cur->next;
	}
	HX_STACK_LINE(7061)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,try_remove,return )

Void ZNPList_ZPP_PartitionedPoly_obj::remove( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::remove","zpp_nape/util/Lists.hx",7029);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(7038)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7038)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7038)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7038)
		while(((cur != null()))){
			HX_STACK_LINE(7038)
			if (((cur->elt == obj))){
				HX_STACK_LINE(7038)
				{
					HX_STACK_LINE(7038)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(7038)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(7038)
					if (((pre == null()))){
						HX_STACK_LINE(7038)
						old = this->head;
						HX_STACK_LINE(7038)
						ret1 = old->next;
						HX_STACK_LINE(7038)
						this->head = ret1;
						HX_STACK_LINE(7038)
						if (((this->head == null()))){
							HX_STACK_LINE(7038)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(7038)
						old = pre->next;
						HX_STACK_LINE(7038)
						ret1 = old->next;
						HX_STACK_LINE(7038)
						pre->next = ret1;
						HX_STACK_LINE(7038)
						if (((ret1 == null()))){
							HX_STACK_LINE(7038)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(7038)
					{
						HX_STACK_LINE(7038)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(7038)
						o->elt = null();
						HX_STACK_LINE(7038)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
						HX_STACK_LINE(7038)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
					}
					HX_STACK_LINE(7038)
					this->modified = true;
					HX_STACK_LINE(7038)
					(this->length)--;
					HX_STACK_LINE(7038)
					this->pushmod = true;
					HX_STACK_LINE(7038)
					ret1;
				}
				HX_STACK_LINE(7038)
				ret = true;
				HX_STACK_LINE(7038)
				break;
			}
			HX_STACK_LINE(7038)
			pre = cur;
			HX_STACK_LINE(7038)
			cur = cur->next;
		}
		HX_STACK_LINE(7038)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,remove,(void))

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_pop_unsafe","zpp_nape/util/Lists.hx",7016);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7025)
	::zpp_nape::geom::ZPP_PartitionedPoly ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7026)
	this->pop();
	HX_STACK_LINE(7027)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::pop_unsafe","zpp_nape/util/Lists.hx",7011);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionedPoly Block( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7012);
			{
				HX_STACK_LINE(7012)
				::zpp_nape::geom::ZPP_PartitionedPoly ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7012)
				__this->pop();
				HX_STACK_LINE(7012)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7011)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,pop_unsafe,return )

Void ZNPList_ZPP_PartitionedPoly_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_pop","zpp_nape/util/Lists.hx",6978);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6987)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6988)
		this->head = ret->next;
		HX_STACK_LINE(6990)
		{
			HX_STACK_LINE(6991)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7000)
			o->elt = null();
			HX_STACK_LINE(7001)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
			HX_STACK_LINE(7002)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7007)
		if (((this->head == null()))){
			HX_STACK_LINE(7007)
			this->pushmod = true;
		}
		HX_STACK_LINE(7008)
		this->modified = true;
		HX_STACK_LINE(7009)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,inlined_pop,(void))

Void ZNPList_ZPP_PartitionedPoly_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::pop","zpp_nape/util/Lists.hx",6973);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6974)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6974)
		this->head = ret->next;
		HX_STACK_LINE(6974)
		{
			HX_STACK_LINE(6974)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6974)
			o->elt = null();
			HX_STACK_LINE(6974)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
			HX_STACK_LINE(6974)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6974)
		if (((this->head == null()))){
			HX_STACK_LINE(6974)
			this->pushmod = true;
		}
		HX_STACK_LINE(6974)
		this->modified = true;
		HX_STACK_LINE(6974)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur,::zpp_nape::geom::ZPP_PartitionedPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_insert","zpp_nape/util/Lists.hx",6930);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly Block( ::zpp_nape::geom::ZPP_PartitionedPoly &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6939);
			{
				HX_STACK_LINE(6940)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6941)
				{
					HX_STACK_LINE(6942)
					if (((::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool == null()))){
						HX_STACK_LINE(6942)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__new();
					}
					else{
						HX_STACK_LINE(6949)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
						HX_STACK_LINE(6950)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = ret->next;
						HX_STACK_LINE(6951)
						ret->next = null();
					}
					HX_STACK_LINE(6956)
					Dynamic();
				}
				HX_STACK_LINE(6958)
				ret->elt = o;
				HX_STACK_LINE(6959)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6939)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6961)
	if (((cur == null()))){
		HX_STACK_LINE(6962)
		temp->next = this->head;
		HX_STACK_LINE(6963)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(6966)
		temp->next = cur->next;
		HX_STACK_LINE(6967)
		cur->next = temp;
	}
	HX_STACK_LINE(6969)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(6970)
	(this->length)++;
	HX_STACK_LINE(6971)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionedPoly_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur,::zpp_nape::geom::ZPP_PartitionedPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::insert","zpp_nape/util/Lists.hx",6925);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly Block( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj *__this,::zpp_nape::geom::ZPP_PartitionedPoly &o,::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6926);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly Block( ::zpp_nape::geom::ZPP_PartitionedPoly &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6926);
						{
							HX_STACK_LINE(6926)
							::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6926)
							{
								HX_STACK_LINE(6926)
								if (((::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool == null()))){
									HX_STACK_LINE(6926)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__new();
								}
								else{
									HX_STACK_LINE(6926)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
									HX_STACK_LINE(6926)
									::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = ret->next;
									HX_STACK_LINE(6926)
									ret->next = null();
								}
								HX_STACK_LINE(6926)
								Dynamic();
							}
							HX_STACK_LINE(6926)
							ret->elt = o;
							HX_STACK_LINE(6926)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6926)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(6926)
				if (((cur == null()))){
					HX_STACK_LINE(6926)
					temp->next = __this->head;
					HX_STACK_LINE(6926)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(6926)
					temp->next = cur->next;
					HX_STACK_LINE(6926)
					cur->next = temp;
				}
				HX_STACK_LINE(6926)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(6926)
				(__this->length)++;
				HX_STACK_LINE(6926)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(6925)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionedPoly_obj,insert,return )

Void ZNPList_ZPP_PartitionedPoly_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly x){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::addAll","zpp_nape/util/Lists.hx",6907);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(6917)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(6918)
		while(((cx_ite != null()))){
			HX_STACK_LINE(6919)
			::zpp_nape::geom::ZPP_PartitionedPoly i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(6920)
			this->add(i);
			HX_STACK_LINE(6921)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,addAll,(void))

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::inlined_add( ::zpp_nape::geom::ZPP_PartitionedPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_add","zpp_nape/util/Lists.hx",6870);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly Block( ::zpp_nape::geom::ZPP_PartitionedPoly &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6879);
			{
				HX_STACK_LINE(6880)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6881)
				{
					HX_STACK_LINE(6882)
					if (((::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool == null()))){
						HX_STACK_LINE(6882)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__new();
					}
					else{
						HX_STACK_LINE(6889)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
						HX_STACK_LINE(6890)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = ret->next;
						HX_STACK_LINE(6891)
						ret->next = null();
					}
					HX_STACK_LINE(6896)
					Dynamic();
				}
				HX_STACK_LINE(6898)
				ret->elt = o;
				HX_STACK_LINE(6899)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6879)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6901)
	temp->next = this->head;
	HX_STACK_LINE(6902)
	this->head = temp;
	HX_STACK_LINE(6903)
	this->modified = true;
	HX_STACK_LINE(6904)
	(this->length)++;
	HX_STACK_LINE(6905)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_add,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::add( ::zpp_nape::geom::ZPP_PartitionedPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::add","zpp_nape/util/Lists.hx",6865);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionedPoly Block( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj *__this,::zpp_nape::geom::ZPP_PartitionedPoly &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6866);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly Block( ::zpp_nape::geom::ZPP_PartitionedPoly &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6866);
						{
							HX_STACK_LINE(6866)
							::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6866)
							{
								HX_STACK_LINE(6866)
								if (((::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool == null()))){
									HX_STACK_LINE(6866)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__new();
								}
								else{
									HX_STACK_LINE(6866)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
									HX_STACK_LINE(6866)
									::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = ret->next;
									HX_STACK_LINE(6866)
									ret->next = null();
								}
								HX_STACK_LINE(6866)
								Dynamic();
							}
							HX_STACK_LINE(6866)
							ret->elt = o;
							HX_STACK_LINE(6866)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6866)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(6866)
				temp->next = __this->head;
				HX_STACK_LINE(6866)
				__this->head = temp;
				HX_STACK_LINE(6866)
				__this->modified = true;
				HX_STACK_LINE(6866)
				(__this->length)++;
				HX_STACK_LINE(6866)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(6865)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,add,return )

Void ZNPList_ZPP_PartitionedPoly_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly i){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::setbegin","zpp_nape/util/Lists.hx",6860);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(6861)
		this->head = i;
		HX_STACK_LINE(6862)
		this->modified = true;
		HX_STACK_LINE(6863)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::begin","zpp_nape/util/Lists.hx",6852);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6852)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,begin,return )


ZNPList_ZPP_PartitionedPoly_obj::ZNPList_ZPP_PartitionedPoly_obj()
{
}

void ZNPList_ZPP_PartitionedPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_PartitionedPoly);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_PartitionedPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_PartitionedPoly_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_PartitionedPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly >(); return inValue; }
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

void ZNPList_ZPP_PartitionedPoly_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_PartitionedPoly_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_PartitionedPoly_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_PartitionedPoly_obj::__mClass;

void ZNPList_ZPP_PartitionedPoly_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_PartitionedPoly"), hx::TCanCast< ZNPList_ZPP_PartitionedPoly_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_PartitionedPoly_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
