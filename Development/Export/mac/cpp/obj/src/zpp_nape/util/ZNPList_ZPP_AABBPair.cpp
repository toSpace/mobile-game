#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBPair
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_AABBPair_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_AABBPair::new","zpp_nape/util/Lists.hx",9349);
{
	HX_STACK_LINE(9359)
	this->length = (int)0;
	HX_STACK_LINE(9358)
	this->pushmod = false;
	HX_STACK_LINE(9357)
	this->modified = false;
	HX_STACK_LINE(9350)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_AABBPair_obj::~ZNPList_ZPP_AABBPair_obj() { }

Dynamic ZNPList_ZPP_AABBPair_obj::__CreateEmpty() { return  new ZNPList_ZPP_AABBPair_obj; }
hx::ObjectPtr< ZNPList_ZPP_AABBPair_obj > ZNPList_ZPP_AABBPair_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_AABBPair_obj > result = new ZNPList_ZPP_AABBPair_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_AABBPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_AABBPair_obj > result = new ZNPList_ZPP_AABBPair_obj();
	result->__construct();
	return result;}

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::at","zpp_nape/util/Lists.hx",9752);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(9761)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(9762)
	return (  (((it != null()))) ? ::zpp_nape::space::ZPP_AABBPair(it->elt) : ::zpp_nape::space::ZPP_AABBPair(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::iterator_at","zpp_nape/util/Lists.hx",9739);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(9748)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9749)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(9749)
		ret = ret->next;
	}
	HX_STACK_LINE(9750)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,iterator_at,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::back","zpp_nape/util/Lists.hx",9730);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9731)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9732)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9733)
	while(((cur != null()))){
		HX_STACK_LINE(9734)
		ret = cur;
		HX_STACK_LINE(9735)
		cur = cur->next;
	}
	HX_STACK_LINE(9737)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,back,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::front","zpp_nape/util/Lists.hx",9727);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9727)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,front,return )

bool ZNPList_ZPP_AABBPair_obj::inlined_has( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_has","zpp_nape/util/Lists.hx",9697);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(9706)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9707)
	{
		HX_STACK_LINE(9708)
		ret = false;
		HX_STACK_LINE(9709)
		{
			HX_STACK_LINE(9710)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(9711)
			while(((cx_ite != null()))){
				HX_STACK_LINE(9712)
				::zpp_nape::space::ZPP_AABBPair npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(9713)
				if (((npite == obj))){
					HX_STACK_LINE(9715)
					ret = true;
					HX_STACK_LINE(9716)
					break;
				}
				HX_STACK_LINE(9719)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(9723)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_has,return )

bool ZNPList_ZPP_AABBPair_obj::has( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::has","zpp_nape/util/Lists.hx",9692);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_AABBPair_obj *__this,::zpp_nape::space::ZPP_AABBPair &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9693);
			{
				HX_STACK_LINE(9693)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9693)
				{
					HX_STACK_LINE(9693)
					ret = false;
					HX_STACK_LINE(9693)
					{
						HX_STACK_LINE(9693)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(9693)
						while(((cx_ite != null()))){
							HX_STACK_LINE(9693)
							::zpp_nape::space::ZPP_AABBPair npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(9693)
							if (((npite == obj))){
								HX_STACK_LINE(9693)
								ret = true;
								HX_STACK_LINE(9693)
								break;
							}
							HX_STACK_LINE(9693)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(9693)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9692)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,has,return )

int ZNPList_ZPP_AABBPair_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::size","zpp_nape/util/Lists.hx",9689);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9689)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,size,return )

bool ZNPList_ZPP_AABBPair_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::empty","zpp_nape/util/Lists.hx",9684);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9684)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,empty,return )

Void ZNPList_ZPP_AABBPair_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::reverse","zpp_nape/util/Lists.hx",9669);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9670)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9671)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9672)
		while(((cur != null()))){
			HX_STACK_LINE(9673)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(9674)
			cur->next = pre;
			HX_STACK_LINE(9675)
			this->head = cur;
			HX_STACK_LINE(9676)
			pre = cur;
			HX_STACK_LINE(9677)
			cur = nx;
		}
		HX_STACK_LINE(9679)
		this->modified = true;
		HX_STACK_LINE(9680)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,reverse,(void))

Void ZNPList_ZPP_AABBPair_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_clear","zpp_nape/util/Lists.hx",9663);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9665)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(9665)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9665)
			this->head = ret->next;
			HX_STACK_LINE(9665)
			{
				HX_STACK_LINE(9665)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(9665)
				o->elt = null();
				HX_STACK_LINE(9665)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(9665)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(9665)
			if (((this->head == null()))){
				HX_STACK_LINE(9665)
				this->pushmod = true;
			}
			HX_STACK_LINE(9665)
			this->modified = true;
			HX_STACK_LINE(9665)
			(this->length)--;
		}
		HX_STACK_LINE(9666)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,inlined_clear,(void))

Void ZNPList_ZPP_AABBPair_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::clear","zpp_nape/util/Lists.hx",9658);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9659)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(9659)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9659)
			this->head = ret->next;
			HX_STACK_LINE(9659)
			{
				HX_STACK_LINE(9659)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(9659)
				o->elt = null();
				HX_STACK_LINE(9659)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(9659)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(9659)
			if (((this->head == null()))){
				HX_STACK_LINE(9659)
				this->pushmod = true;
			}
			HX_STACK_LINE(9659)
			this->modified = true;
			HX_STACK_LINE(9659)
			(this->length)--;
		}
		HX_STACK_LINE(9659)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_AABBPair pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::splice","zpp_nape/util/Lists.hx",9654);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(9655)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(9655)
		this->erase(pre);
	}
	HX_STACK_LINE(9656)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBPair_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_AABBPair pre){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_erase","zpp_nape/util/Lists.hx",9608);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(9617)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(9618)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9619)
	if (((pre == null()))){
		HX_STACK_LINE(9620)
		old = this->head;
		HX_STACK_LINE(9621)
		ret = old->next;
		HX_STACK_LINE(9622)
		this->head = ret;
		HX_STACK_LINE(9623)
		if (((this->head == null()))){
			HX_STACK_LINE(9623)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(9626)
		old = pre->next;
		HX_STACK_LINE(9627)
		ret = old->next;
		HX_STACK_LINE(9628)
		pre->next = ret;
		HX_STACK_LINE(9629)
		if (((ret == null()))){
			HX_STACK_LINE(9629)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(9632)
	{
		HX_STACK_LINE(9633)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(9642)
		o->elt = null();
		HX_STACK_LINE(9643)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
		HX_STACK_LINE(9644)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(9649)
	this->modified = true;
	HX_STACK_LINE(9650)
	(this->length)--;
	HX_STACK_LINE(9651)
	this->pushmod = true;
	HX_STACK_LINE(9652)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_AABBPair pre){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::erase","zpp_nape/util/Lists.hx",9603);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::util::ZNPList_ZPP_AABBPair_obj *__this,::zpp_nape::util::ZNPNode_ZPP_AABBPair &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9604);
			{
				HX_STACK_LINE(9604)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(9604)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9604)
				if (((pre == null()))){
					HX_STACK_LINE(9604)
					old = __this->head;
					HX_STACK_LINE(9604)
					ret = old->next;
					HX_STACK_LINE(9604)
					__this->head = ret;
					HX_STACK_LINE(9604)
					if (((__this->head == null()))){
						HX_STACK_LINE(9604)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(9604)
					old = pre->next;
					HX_STACK_LINE(9604)
					ret = old->next;
					HX_STACK_LINE(9604)
					pre->next = ret;
					HX_STACK_LINE(9604)
					if (((ret == null()))){
						HX_STACK_LINE(9604)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(9604)
				{
					HX_STACK_LINE(9604)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(9604)
					o->elt = null();
					HX_STACK_LINE(9604)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
					HX_STACK_LINE(9604)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(9604)
				__this->modified = true;
				HX_STACK_LINE(9604)
				(__this->length)--;
				HX_STACK_LINE(9604)
				__this->pushmod = true;
				HX_STACK_LINE(9604)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9603)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,erase,return )

bool ZNPList_ZPP_AABBPair_obj::inlined_try_remove( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_try_remove","zpp_nape/util/Lists.hx",9580);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(9589)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9590)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9591)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9592)
	while(((cur != null()))){
		HX_STACK_LINE(9593)
		if (((cur->elt == obj))){
			HX_STACK_LINE(9594)
			{
				HX_STACK_LINE(9594)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(9594)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(9594)
				if (((pre == null()))){
					HX_STACK_LINE(9594)
					old = this->head;
					HX_STACK_LINE(9594)
					ret1 = old->next;
					HX_STACK_LINE(9594)
					this->head = ret1;
					HX_STACK_LINE(9594)
					if (((this->head == null()))){
						HX_STACK_LINE(9594)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(9594)
					old = pre->next;
					HX_STACK_LINE(9594)
					ret1 = old->next;
					HX_STACK_LINE(9594)
					pre->next = ret1;
					HX_STACK_LINE(9594)
					if (((ret1 == null()))){
						HX_STACK_LINE(9594)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(9594)
				{
					HX_STACK_LINE(9594)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(9594)
					o->elt = null();
					HX_STACK_LINE(9594)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
					HX_STACK_LINE(9594)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(9594)
				this->modified = true;
				HX_STACK_LINE(9594)
				(this->length)--;
				HX_STACK_LINE(9594)
				this->pushmod = true;
				HX_STACK_LINE(9594)
				ret1;
			}
			HX_STACK_LINE(9595)
			ret = true;
			HX_STACK_LINE(9596)
			break;
		}
		HX_STACK_LINE(9598)
		pre = cur;
		HX_STACK_LINE(9599)
		cur = cur->next;
	}
	HX_STACK_LINE(9601)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_try_remove,return )

Void ZNPList_ZPP_AABBPair_obj::inlined_remove( ::zpp_nape::space::ZPP_AABBPair obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_remove","zpp_nape/util/Lists.hx",9567);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(9576)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9576)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9576)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9576)
		while(((cur != null()))){
			HX_STACK_LINE(9576)
			if (((cur->elt == obj))){
				HX_STACK_LINE(9576)
				{
					HX_STACK_LINE(9576)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(9576)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(9576)
					if (((pre == null()))){
						HX_STACK_LINE(9576)
						old = this->head;
						HX_STACK_LINE(9576)
						ret1 = old->next;
						HX_STACK_LINE(9576)
						this->head = ret1;
						HX_STACK_LINE(9576)
						if (((this->head == null()))){
							HX_STACK_LINE(9576)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(9576)
						old = pre->next;
						HX_STACK_LINE(9576)
						ret1 = old->next;
						HX_STACK_LINE(9576)
						pre->next = ret1;
						HX_STACK_LINE(9576)
						if (((ret1 == null()))){
							HX_STACK_LINE(9576)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(9576)
					{
						HX_STACK_LINE(9576)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(9576)
						o->elt = null();
						HX_STACK_LINE(9576)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
						HX_STACK_LINE(9576)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
					}
					HX_STACK_LINE(9576)
					this->modified = true;
					HX_STACK_LINE(9576)
					(this->length)--;
					HX_STACK_LINE(9576)
					this->pushmod = true;
					HX_STACK_LINE(9576)
					ret1;
				}
				HX_STACK_LINE(9576)
				ret = true;
				HX_STACK_LINE(9576)
				break;
			}
			HX_STACK_LINE(9576)
			pre = cur;
			HX_STACK_LINE(9576)
			cur = cur->next;
		}
		HX_STACK_LINE(9576)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_remove,(void))

bool ZNPList_ZPP_AABBPair_obj::try_remove( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::try_remove","zpp_nape/util/Lists.hx",9542);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(9551)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9552)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9553)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9554)
	while(((cur != null()))){
		HX_STACK_LINE(9555)
		if (((cur->elt == obj))){
			HX_STACK_LINE(9556)
			this->erase(pre);
			HX_STACK_LINE(9557)
			ret = true;
			HX_STACK_LINE(9558)
			break;
		}
		HX_STACK_LINE(9560)
		pre = cur;
		HX_STACK_LINE(9561)
		cur = cur->next;
	}
	HX_STACK_LINE(9563)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,try_remove,return )

Void ZNPList_ZPP_AABBPair_obj::remove( ::zpp_nape::space::ZPP_AABBPair obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::remove","zpp_nape/util/Lists.hx",9531);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(9540)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9540)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9540)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9540)
		while(((cur != null()))){
			HX_STACK_LINE(9540)
			if (((cur->elt == obj))){
				HX_STACK_LINE(9540)
				{
					HX_STACK_LINE(9540)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(9540)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(9540)
					if (((pre == null()))){
						HX_STACK_LINE(9540)
						old = this->head;
						HX_STACK_LINE(9540)
						ret1 = old->next;
						HX_STACK_LINE(9540)
						this->head = ret1;
						HX_STACK_LINE(9540)
						if (((this->head == null()))){
							HX_STACK_LINE(9540)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(9540)
						old = pre->next;
						HX_STACK_LINE(9540)
						ret1 = old->next;
						HX_STACK_LINE(9540)
						pre->next = ret1;
						HX_STACK_LINE(9540)
						if (((ret1 == null()))){
							HX_STACK_LINE(9540)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(9540)
					{
						HX_STACK_LINE(9540)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(9540)
						o->elt = null();
						HX_STACK_LINE(9540)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
						HX_STACK_LINE(9540)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
					}
					HX_STACK_LINE(9540)
					this->modified = true;
					HX_STACK_LINE(9540)
					(this->length)--;
					HX_STACK_LINE(9540)
					this->pushmod = true;
					HX_STACK_LINE(9540)
					ret1;
				}
				HX_STACK_LINE(9540)
				ret = true;
				HX_STACK_LINE(9540)
				break;
			}
			HX_STACK_LINE(9540)
			pre = cur;
			HX_STACK_LINE(9540)
			cur = cur->next;
		}
		HX_STACK_LINE(9540)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,remove,(void))

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_pop_unsafe","zpp_nape/util/Lists.hx",9518);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9527)
	::zpp_nape::space::ZPP_AABBPair ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9528)
	this->pop();
	HX_STACK_LINE(9529)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,inlined_pop_unsafe,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::pop_unsafe","zpp_nape/util/Lists.hx",9513);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_AABBPair Block( ::zpp_nape::util::ZNPList_ZPP_AABBPair_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9514);
			{
				HX_STACK_LINE(9514)
				::zpp_nape::space::ZPP_AABBPair ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9514)
				__this->pop();
				HX_STACK_LINE(9514)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9513)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,pop_unsafe,return )

Void ZNPList_ZPP_AABBPair_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_pop","zpp_nape/util/Lists.hx",9480);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9489)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9490)
		this->head = ret->next;
		HX_STACK_LINE(9492)
		{
			HX_STACK_LINE(9493)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9502)
			o->elt = null();
			HX_STACK_LINE(9503)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
			HX_STACK_LINE(9504)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9509)
		if (((this->head == null()))){
			HX_STACK_LINE(9509)
			this->pushmod = true;
		}
		HX_STACK_LINE(9510)
		this->modified = true;
		HX_STACK_LINE(9511)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,inlined_pop,(void))

Void ZNPList_ZPP_AABBPair_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::pop","zpp_nape/util/Lists.hx",9475);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9476)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9476)
		this->head = ret->next;
		HX_STACK_LINE(9476)
		{
			HX_STACK_LINE(9476)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9476)
			o->elt = null();
			HX_STACK_LINE(9476)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
			HX_STACK_LINE(9476)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9476)
		if (((this->head == null()))){
			HX_STACK_LINE(9476)
			this->pushmod = true;
		}
		HX_STACK_LINE(9476)
		this->modified = true;
		HX_STACK_LINE(9476)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_AABBPair cur,::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_insert","zpp_nape/util/Lists.hx",9432);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9441);
			{
				HX_STACK_LINE(9442)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9443)
				{
					HX_STACK_LINE(9444)
					if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
						HX_STACK_LINE(9444)
						ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
					}
					else{
						HX_STACK_LINE(9451)
						ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
						HX_STACK_LINE(9452)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
						HX_STACK_LINE(9453)
						ret->next = null();
					}
					HX_STACK_LINE(9458)
					Dynamic();
				}
				HX_STACK_LINE(9460)
				ret->elt = o;
				HX_STACK_LINE(9461)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9441)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9463)
	if (((cur == null()))){
		HX_STACK_LINE(9464)
		temp->next = this->head;
		HX_STACK_LINE(9465)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(9468)
		temp->next = cur->next;
		HX_STACK_LINE(9469)
		cur->next = temp;
	}
	HX_STACK_LINE(9471)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(9472)
	(this->length)++;
	HX_STACK_LINE(9473)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBPair_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_AABBPair cur,::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::insert","zpp_nape/util/Lists.hx",9427);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::util::ZNPList_ZPP_AABBPair_obj *__this,::zpp_nape::space::ZPP_AABBPair &o,::zpp_nape::util::ZNPNode_ZPP_AABBPair &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9428);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9428);
						{
							HX_STACK_LINE(9428)
							::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(9428)
							{
								HX_STACK_LINE(9428)
								if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
									HX_STACK_LINE(9428)
									ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
								}
								else{
									HX_STACK_LINE(9428)
									ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
									HX_STACK_LINE(9428)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
									HX_STACK_LINE(9428)
									ret->next = null();
								}
								HX_STACK_LINE(9428)
								Dynamic();
							}
							HX_STACK_LINE(9428)
							ret->elt = o;
							HX_STACK_LINE(9428)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(9428)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(9428)
				if (((cur == null()))){
					HX_STACK_LINE(9428)
					temp->next = __this->head;
					HX_STACK_LINE(9428)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(9428)
					temp->next = cur->next;
					HX_STACK_LINE(9428)
					cur->next = temp;
				}
				HX_STACK_LINE(9428)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(9428)
				(__this->length)++;
				HX_STACK_LINE(9428)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(9427)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBPair_obj,insert,return )

Void ZNPList_ZPP_AABBPair_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_AABBPair x){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::addAll","zpp_nape/util/Lists.hx",9409);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(9419)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(9420)
		while(((cx_ite != null()))){
			HX_STACK_LINE(9421)
			::zpp_nape::space::ZPP_AABBPair i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(9422)
			this->add(i);
			HX_STACK_LINE(9423)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,addAll,(void))

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_add( ::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_add","zpp_nape/util/Lists.hx",9372);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9381);
			{
				HX_STACK_LINE(9382)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9383)
				{
					HX_STACK_LINE(9384)
					if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
						HX_STACK_LINE(9384)
						ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
					}
					else{
						HX_STACK_LINE(9391)
						ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
						HX_STACK_LINE(9392)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
						HX_STACK_LINE(9393)
						ret->next = null();
					}
					HX_STACK_LINE(9398)
					Dynamic();
				}
				HX_STACK_LINE(9400)
				ret->elt = o;
				HX_STACK_LINE(9401)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9381)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9403)
	temp->next = this->head;
	HX_STACK_LINE(9404)
	this->head = temp;
	HX_STACK_LINE(9405)
	this->modified = true;
	HX_STACK_LINE(9406)
	(this->length)++;
	HX_STACK_LINE(9407)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_add,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::add( ::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::add","zpp_nape/util/Lists.hx",9367);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_AABBPair Block( ::zpp_nape::util::ZNPList_ZPP_AABBPair_obj *__this,::zpp_nape::space::ZPP_AABBPair &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9368);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9368);
						{
							HX_STACK_LINE(9368)
							::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(9368)
							{
								HX_STACK_LINE(9368)
								if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
									HX_STACK_LINE(9368)
									ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
								}
								else{
									HX_STACK_LINE(9368)
									ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
									HX_STACK_LINE(9368)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
									HX_STACK_LINE(9368)
									ret->next = null();
								}
								HX_STACK_LINE(9368)
								Dynamic();
							}
							HX_STACK_LINE(9368)
							ret->elt = o;
							HX_STACK_LINE(9368)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(9368)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(9368)
				temp->next = __this->head;
				HX_STACK_LINE(9368)
				__this->head = temp;
				HX_STACK_LINE(9368)
				__this->modified = true;
				HX_STACK_LINE(9368)
				(__this->length)++;
				HX_STACK_LINE(9368)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(9367)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,add,return )

Void ZNPList_ZPP_AABBPair_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_AABBPair i){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::setbegin","zpp_nape/util/Lists.hx",9362);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(9363)
		this->head = i;
		HX_STACK_LINE(9364)
		this->modified = true;
		HX_STACK_LINE(9365)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::begin","zpp_nape/util/Lists.hx",9354);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9354)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,begin,return )


ZNPList_ZPP_AABBPair_obj::ZNPList_ZPP_AABBPair_obj()
{
}

void ZNPList_ZPP_AABBPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_AABBPair);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_AABBPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_AABBPair_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_AABBPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_AABBPair >(); return inValue; }
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

void ZNPList_ZPP_AABBPair_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_AABBPair_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_AABBPair_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_AABBPair_obj::__mClass;

void ZNPList_ZPP_AABBPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_AABBPair"), hx::TCanCast< ZNPList_ZPP_AABBPair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_AABBPair_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
