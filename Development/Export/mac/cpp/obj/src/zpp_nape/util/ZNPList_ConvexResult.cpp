#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_ConvexResult
#include <nape/geom/ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ConvexResult
#include <zpp_nape/util/ZNPList_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ConvexResult
#include <zpp_nape/util/ZNPNode_ConvexResult.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ConvexResult_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ConvexResult::new","zpp_nape/util/Lists.hx",13519);
{
	HX_STACK_LINE(13529)
	this->length = (int)0;
	HX_STACK_LINE(13528)
	this->pushmod = false;
	HX_STACK_LINE(13527)
	this->modified = false;
	HX_STACK_LINE(13520)
	this->head = null();
}
;
	return null();
}

ZNPList_ConvexResult_obj::~ZNPList_ConvexResult_obj() { }

Dynamic ZNPList_ConvexResult_obj::__CreateEmpty() { return  new ZNPList_ConvexResult_obj; }
hx::ObjectPtr< ZNPList_ConvexResult_obj > ZNPList_ConvexResult_obj::__new()
{  hx::ObjectPtr< ZNPList_ConvexResult_obj > result = new ZNPList_ConvexResult_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ConvexResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ConvexResult_obj > result = new ZNPList_ConvexResult_obj();
	result->__construct();
	return result;}

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ConvexResult::at","zpp_nape/util/Lists.hx",13922);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(13931)
	::zpp_nape::util::ZNPNode_ConvexResult it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(13932)
	return (  (((it != null()))) ? ::nape::geom::ConvexResult(it->elt) : ::nape::geom::ConvexResult(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,at,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ConvexResult::iterator_at","zpp_nape/util/Lists.hx",13909);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(13918)
	::zpp_nape::util::ZNPNode_ConvexResult ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13919)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(13919)
		ret = ret->next;
	}
	HX_STACK_LINE(13920)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,iterator_at,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::back( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::back","zpp_nape/util/Lists.hx",13900);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13901)
	::zpp_nape::util::ZNPNode_ConvexResult ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13902)
	::zpp_nape::util::ZNPNode_ConvexResult cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13903)
	while(((cur != null()))){
		HX_STACK_LINE(13904)
		ret = cur;
		HX_STACK_LINE(13905)
		cur = cur->next;
	}
	HX_STACK_LINE(13907)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,back,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::front( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::front","zpp_nape/util/Lists.hx",13897);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13897)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,front,return )

bool ZNPList_ConvexResult_obj::inlined_has( ::nape::geom::ConvexResult obj){
	HX_STACK_PUSH("ZNPList_ConvexResult::inlined_has","zpp_nape/util/Lists.hx",13867);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(13876)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13877)
	{
		HX_STACK_LINE(13878)
		ret = false;
		HX_STACK_LINE(13879)
		{
			HX_STACK_LINE(13880)
			::zpp_nape::util::ZNPNode_ConvexResult cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(13881)
			while(((cx_ite != null()))){
				HX_STACK_LINE(13882)
				::nape::geom::ConvexResult npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(13883)
				if (((npite == obj))){
					HX_STACK_LINE(13885)
					ret = true;
					HX_STACK_LINE(13886)
					break;
				}
				HX_STACK_LINE(13889)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(13893)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_has,return )

bool ZNPList_ConvexResult_obj::has( ::nape::geom::ConvexResult obj){
	HX_STACK_PUSH("ZNPList_ConvexResult::has","zpp_nape/util/Lists.hx",13862);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ConvexResult_obj *__this,::nape::geom::ConvexResult &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13863);
			{
				HX_STACK_LINE(13863)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13863)
				{
					HX_STACK_LINE(13863)
					ret = false;
					HX_STACK_LINE(13863)
					{
						HX_STACK_LINE(13863)
						::zpp_nape::util::ZNPNode_ConvexResult cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(13863)
						while(((cx_ite != null()))){
							HX_STACK_LINE(13863)
							::nape::geom::ConvexResult npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(13863)
							if (((npite == obj))){
								HX_STACK_LINE(13863)
								ret = true;
								HX_STACK_LINE(13863)
								break;
							}
							HX_STACK_LINE(13863)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(13863)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13862)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,has,return )

int ZNPList_ConvexResult_obj::size( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::size","zpp_nape/util/Lists.hx",13859);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13859)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,size,return )

bool ZNPList_ConvexResult_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::empty","zpp_nape/util/Lists.hx",13854);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13854)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,empty,return )

Void ZNPList_ConvexResult_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::reverse","zpp_nape/util/Lists.hx",13839);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13840)
		::zpp_nape::util::ZNPNode_ConvexResult cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13841)
		::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13842)
		while(((cur != null()))){
			HX_STACK_LINE(13843)
			::zpp_nape::util::ZNPNode_ConvexResult nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(13844)
			cur->next = pre;
			HX_STACK_LINE(13845)
			this->head = cur;
			HX_STACK_LINE(13846)
			pre = cur;
			HX_STACK_LINE(13847)
			cur = nx;
		}
		HX_STACK_LINE(13849)
		this->modified = true;
		HX_STACK_LINE(13850)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,reverse,(void))

Void ZNPList_ConvexResult_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::inlined_clear","zpp_nape/util/Lists.hx",13833);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13835)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(13835)
			::zpp_nape::util::ZNPNode_ConvexResult ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13835)
			this->head = ret->next;
			HX_STACK_LINE(13835)
			{
				HX_STACK_LINE(13835)
				::zpp_nape::util::ZNPNode_ConvexResult o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(13835)
				o->elt = null();
				HX_STACK_LINE(13835)
				o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
				HX_STACK_LINE(13835)
				::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
			}
			HX_STACK_LINE(13835)
			if (((this->head == null()))){
				HX_STACK_LINE(13835)
				this->pushmod = true;
			}
			HX_STACK_LINE(13835)
			this->modified = true;
			HX_STACK_LINE(13835)
			(this->length)--;
		}
		HX_STACK_LINE(13836)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,inlined_clear,(void))

Void ZNPList_ConvexResult_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::clear","zpp_nape/util/Lists.hx",13828);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13829)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(13829)
			::zpp_nape::util::ZNPNode_ConvexResult ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13829)
			this->head = ret->next;
			HX_STACK_LINE(13829)
			{
				HX_STACK_LINE(13829)
				::zpp_nape::util::ZNPNode_ConvexResult o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(13829)
				o->elt = null();
				HX_STACK_LINE(13829)
				o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
				HX_STACK_LINE(13829)
				::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
			}
			HX_STACK_LINE(13829)
			if (((this->head == null()))){
				HX_STACK_LINE(13829)
				this->pushmod = true;
			}
			HX_STACK_LINE(13829)
			this->modified = true;
			HX_STACK_LINE(13829)
			(this->length)--;
		}
		HX_STACK_LINE(13829)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,clear,(void))

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::splice( ::zpp_nape::util::ZNPNode_ConvexResult pre,int n){
	HX_STACK_PUSH("ZNPList_ConvexResult::splice","zpp_nape/util/Lists.hx",13824);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(13825)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(13825)
		this->erase(pre);
	}
	HX_STACK_LINE(13826)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ConvexResult_obj,splice,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ConvexResult pre){
	HX_STACK_PUSH("ZNPList_ConvexResult::inlined_erase","zpp_nape/util/Lists.hx",13778);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(13787)
	::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(13788)
	::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13789)
	if (((pre == null()))){
		HX_STACK_LINE(13790)
		old = this->head;
		HX_STACK_LINE(13791)
		ret = old->next;
		HX_STACK_LINE(13792)
		this->head = ret;
		HX_STACK_LINE(13793)
		if (((this->head == null()))){
			HX_STACK_LINE(13793)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(13796)
		old = pre->next;
		HX_STACK_LINE(13797)
		ret = old->next;
		HX_STACK_LINE(13798)
		pre->next = ret;
		HX_STACK_LINE(13799)
		if (((ret == null()))){
			HX_STACK_LINE(13799)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(13802)
	{
		HX_STACK_LINE(13803)
		::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(13812)
		o->elt = null();
		HX_STACK_LINE(13813)
		o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
		HX_STACK_LINE(13814)
		::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
	}
	HX_STACK_LINE(13819)
	this->modified = true;
	HX_STACK_LINE(13820)
	(this->length)--;
	HX_STACK_LINE(13821)
	this->pushmod = true;
	HX_STACK_LINE(13822)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::erase( ::zpp_nape::util::ZNPNode_ConvexResult pre){
	HX_STACK_PUSH("ZNPList_ConvexResult::erase","zpp_nape/util/Lists.hx",13773);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ConvexResult Block( ::zpp_nape::util::ZNPList_ConvexResult_obj *__this,::zpp_nape::util::ZNPNode_ConvexResult &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13774);
			{
				HX_STACK_LINE(13774)
				::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(13774)
				::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13774)
				if (((pre == null()))){
					HX_STACK_LINE(13774)
					old = __this->head;
					HX_STACK_LINE(13774)
					ret = old->next;
					HX_STACK_LINE(13774)
					__this->head = ret;
					HX_STACK_LINE(13774)
					if (((__this->head == null()))){
						HX_STACK_LINE(13774)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(13774)
					old = pre->next;
					HX_STACK_LINE(13774)
					ret = old->next;
					HX_STACK_LINE(13774)
					pre->next = ret;
					HX_STACK_LINE(13774)
					if (((ret == null()))){
						HX_STACK_LINE(13774)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(13774)
				{
					HX_STACK_LINE(13774)
					::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(13774)
					o->elt = null();
					HX_STACK_LINE(13774)
					o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
					HX_STACK_LINE(13774)
					::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
				}
				HX_STACK_LINE(13774)
				__this->modified = true;
				HX_STACK_LINE(13774)
				(__this->length)--;
				HX_STACK_LINE(13774)
				__this->pushmod = true;
				HX_STACK_LINE(13774)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13773)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,erase,return )

bool ZNPList_ConvexResult_obj::inlined_try_remove( ::nape::geom::ConvexResult obj){
	HX_STACK_PUSH("ZNPList_ConvexResult::inlined_try_remove","zpp_nape/util/Lists.hx",13750);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(13759)
	::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(13760)
	::zpp_nape::util::ZNPNode_ConvexResult cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13761)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13762)
	while(((cur != null()))){
		HX_STACK_LINE(13763)
		if (((cur->elt == obj))){
			HX_STACK_LINE(13764)
			{
				HX_STACK_LINE(13764)
				::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(13764)
				::zpp_nape::util::ZNPNode_ConvexResult ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(13764)
				if (((pre == null()))){
					HX_STACK_LINE(13764)
					old = this->head;
					HX_STACK_LINE(13764)
					ret1 = old->next;
					HX_STACK_LINE(13764)
					this->head = ret1;
					HX_STACK_LINE(13764)
					if (((this->head == null()))){
						HX_STACK_LINE(13764)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(13764)
					old = pre->next;
					HX_STACK_LINE(13764)
					ret1 = old->next;
					HX_STACK_LINE(13764)
					pre->next = ret1;
					HX_STACK_LINE(13764)
					if (((ret1 == null()))){
						HX_STACK_LINE(13764)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(13764)
				{
					HX_STACK_LINE(13764)
					::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(13764)
					o->elt = null();
					HX_STACK_LINE(13764)
					o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
					HX_STACK_LINE(13764)
					::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
				}
				HX_STACK_LINE(13764)
				this->modified = true;
				HX_STACK_LINE(13764)
				(this->length)--;
				HX_STACK_LINE(13764)
				this->pushmod = true;
				HX_STACK_LINE(13764)
				ret1;
			}
			HX_STACK_LINE(13765)
			ret = true;
			HX_STACK_LINE(13766)
			break;
		}
		HX_STACK_LINE(13768)
		pre = cur;
		HX_STACK_LINE(13769)
		cur = cur->next;
	}
	HX_STACK_LINE(13771)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_try_remove,return )

Void ZNPList_ConvexResult_obj::inlined_remove( ::nape::geom::ConvexResult obj){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::inlined_remove","zpp_nape/util/Lists.hx",13737);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(13746)
		::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13746)
		::zpp_nape::util::ZNPNode_ConvexResult cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13746)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13746)
		while(((cur != null()))){
			HX_STACK_LINE(13746)
			if (((cur->elt == obj))){
				HX_STACK_LINE(13746)
				{
					HX_STACK_LINE(13746)
					::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(13746)
					::zpp_nape::util::ZNPNode_ConvexResult ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(13746)
					if (((pre == null()))){
						HX_STACK_LINE(13746)
						old = this->head;
						HX_STACK_LINE(13746)
						ret1 = old->next;
						HX_STACK_LINE(13746)
						this->head = ret1;
						HX_STACK_LINE(13746)
						if (((this->head == null()))){
							HX_STACK_LINE(13746)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(13746)
						old = pre->next;
						HX_STACK_LINE(13746)
						ret1 = old->next;
						HX_STACK_LINE(13746)
						pre->next = ret1;
						HX_STACK_LINE(13746)
						if (((ret1 == null()))){
							HX_STACK_LINE(13746)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(13746)
					{
						HX_STACK_LINE(13746)
						::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(13746)
						o->elt = null();
						HX_STACK_LINE(13746)
						o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
						HX_STACK_LINE(13746)
						::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
					}
					HX_STACK_LINE(13746)
					this->modified = true;
					HX_STACK_LINE(13746)
					(this->length)--;
					HX_STACK_LINE(13746)
					this->pushmod = true;
					HX_STACK_LINE(13746)
					ret1;
				}
				HX_STACK_LINE(13746)
				ret = true;
				HX_STACK_LINE(13746)
				break;
			}
			HX_STACK_LINE(13746)
			pre = cur;
			HX_STACK_LINE(13746)
			cur = cur->next;
		}
		HX_STACK_LINE(13746)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_remove,(void))

bool ZNPList_ConvexResult_obj::try_remove( ::nape::geom::ConvexResult obj){
	HX_STACK_PUSH("ZNPList_ConvexResult::try_remove","zpp_nape/util/Lists.hx",13712);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(13721)
	::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(13722)
	::zpp_nape::util::ZNPNode_ConvexResult cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13723)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13724)
	while(((cur != null()))){
		HX_STACK_LINE(13725)
		if (((cur->elt == obj))){
			HX_STACK_LINE(13726)
			this->erase(pre);
			HX_STACK_LINE(13727)
			ret = true;
			HX_STACK_LINE(13728)
			break;
		}
		HX_STACK_LINE(13730)
		pre = cur;
		HX_STACK_LINE(13731)
		cur = cur->next;
	}
	HX_STACK_LINE(13733)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,try_remove,return )

Void ZNPList_ConvexResult_obj::remove( ::nape::geom::ConvexResult obj){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::remove","zpp_nape/util/Lists.hx",13701);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(13710)
		::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13710)
		::zpp_nape::util::ZNPNode_ConvexResult cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13710)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13710)
		while(((cur != null()))){
			HX_STACK_LINE(13710)
			if (((cur->elt == obj))){
				HX_STACK_LINE(13710)
				{
					HX_STACK_LINE(13710)
					::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(13710)
					::zpp_nape::util::ZNPNode_ConvexResult ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(13710)
					if (((pre == null()))){
						HX_STACK_LINE(13710)
						old = this->head;
						HX_STACK_LINE(13710)
						ret1 = old->next;
						HX_STACK_LINE(13710)
						this->head = ret1;
						HX_STACK_LINE(13710)
						if (((this->head == null()))){
							HX_STACK_LINE(13710)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(13710)
						old = pre->next;
						HX_STACK_LINE(13710)
						ret1 = old->next;
						HX_STACK_LINE(13710)
						pre->next = ret1;
						HX_STACK_LINE(13710)
						if (((ret1 == null()))){
							HX_STACK_LINE(13710)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(13710)
					{
						HX_STACK_LINE(13710)
						::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(13710)
						o->elt = null();
						HX_STACK_LINE(13710)
						o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
						HX_STACK_LINE(13710)
						::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
					}
					HX_STACK_LINE(13710)
					this->modified = true;
					HX_STACK_LINE(13710)
					(this->length)--;
					HX_STACK_LINE(13710)
					this->pushmod = true;
					HX_STACK_LINE(13710)
					ret1;
				}
				HX_STACK_LINE(13710)
				ret = true;
				HX_STACK_LINE(13710)
				break;
			}
			HX_STACK_LINE(13710)
			pre = cur;
			HX_STACK_LINE(13710)
			cur = cur->next;
		}
		HX_STACK_LINE(13710)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,remove,(void))

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::inlined_pop_unsafe","zpp_nape/util/Lists.hx",13688);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13697)
	::nape::geom::ConvexResult ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13698)
	this->pop();
	HX_STACK_LINE(13699)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,inlined_pop_unsafe,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::pop_unsafe","zpp_nape/util/Lists.hx",13683);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::geom::ConvexResult Block( ::zpp_nape::util::ZNPList_ConvexResult_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13684);
			{
				HX_STACK_LINE(13684)
				::nape::geom::ConvexResult ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13684)
				__this->pop();
				HX_STACK_LINE(13684)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13683)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,pop_unsafe,return )

Void ZNPList_ConvexResult_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::inlined_pop","zpp_nape/util/Lists.hx",13650);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13659)
		::zpp_nape::util::ZNPNode_ConvexResult ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13660)
		this->head = ret->next;
		HX_STACK_LINE(13662)
		{
			HX_STACK_LINE(13663)
			::zpp_nape::util::ZNPNode_ConvexResult o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(13672)
			o->elt = null();
			HX_STACK_LINE(13673)
			o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
			HX_STACK_LINE(13674)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
		}
		HX_STACK_LINE(13679)
		if (((this->head == null()))){
			HX_STACK_LINE(13679)
			this->pushmod = true;
		}
		HX_STACK_LINE(13680)
		this->modified = true;
		HX_STACK_LINE(13681)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,inlined_pop,(void))

Void ZNPList_ConvexResult_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::pop","zpp_nape/util/Lists.hx",13645);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13646)
		::zpp_nape::util::ZNPNode_ConvexResult ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13646)
		this->head = ret->next;
		HX_STACK_LINE(13646)
		{
			HX_STACK_LINE(13646)
			::zpp_nape::util::ZNPNode_ConvexResult o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(13646)
			o->elt = null();
			HX_STACK_LINE(13646)
			o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
			HX_STACK_LINE(13646)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
		}
		HX_STACK_LINE(13646)
		if (((this->head == null()))){
			HX_STACK_LINE(13646)
			this->pushmod = true;
		}
		HX_STACK_LINE(13646)
		this->modified = true;
		HX_STACK_LINE(13646)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,pop,(void))

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ConvexResult cur,::nape::geom::ConvexResult o){
	HX_STACK_PUSH("ZNPList_ConvexResult::inlined_insert","zpp_nape/util/Lists.hx",13602);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ConvexResult Block( ::nape::geom::ConvexResult &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13611);
			{
				HX_STACK_LINE(13612)
				::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13613)
				{
					HX_STACK_LINE(13614)
					if (((::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool == null()))){
						HX_STACK_LINE(13614)
						ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::__new();
					}
					else{
						HX_STACK_LINE(13621)
						ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
						HX_STACK_LINE(13622)
						::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = ret->next;
						HX_STACK_LINE(13623)
						ret->next = null();
					}
					HX_STACK_LINE(13628)
					Dynamic();
				}
				HX_STACK_LINE(13630)
				ret->elt = o;
				HX_STACK_LINE(13631)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13611)
	::zpp_nape::util::ZNPNode_ConvexResult temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(13633)
	if (((cur == null()))){
		HX_STACK_LINE(13634)
		temp->next = this->head;
		HX_STACK_LINE(13635)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(13638)
		temp->next = cur->next;
		HX_STACK_LINE(13639)
		cur->next = temp;
	}
	HX_STACK_LINE(13641)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(13642)
	(this->length)++;
	HX_STACK_LINE(13643)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ConvexResult_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::insert( ::zpp_nape::util::ZNPNode_ConvexResult cur,::nape::geom::ConvexResult o){
	HX_STACK_PUSH("ZNPList_ConvexResult::insert","zpp_nape/util/Lists.hx",13597);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ConvexResult Block( ::zpp_nape::util::ZNPList_ConvexResult_obj *__this,::nape::geom::ConvexResult &o,::zpp_nape::util::ZNPNode_ConvexResult &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13598);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ConvexResult Block( ::nape::geom::ConvexResult &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13598);
						{
							HX_STACK_LINE(13598)
							::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(13598)
							{
								HX_STACK_LINE(13598)
								if (((::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool == null()))){
									HX_STACK_LINE(13598)
									ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::__new();
								}
								else{
									HX_STACK_LINE(13598)
									ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
									HX_STACK_LINE(13598)
									::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = ret->next;
									HX_STACK_LINE(13598)
									ret->next = null();
								}
								HX_STACK_LINE(13598)
								Dynamic();
							}
							HX_STACK_LINE(13598)
							ret->elt = o;
							HX_STACK_LINE(13598)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(13598)
				::zpp_nape::util::ZNPNode_ConvexResult temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(13598)
				if (((cur == null()))){
					HX_STACK_LINE(13598)
					temp->next = __this->head;
					HX_STACK_LINE(13598)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(13598)
					temp->next = cur->next;
					HX_STACK_LINE(13598)
					cur->next = temp;
				}
				HX_STACK_LINE(13598)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(13598)
				(__this->length)++;
				HX_STACK_LINE(13598)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(13597)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ConvexResult_obj,insert,return )

Void ZNPList_ConvexResult_obj::addAll( ::zpp_nape::util::ZNPList_ConvexResult x){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::addAll","zpp_nape/util/Lists.hx",13579);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(13589)
		::zpp_nape::util::ZNPNode_ConvexResult cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(13590)
		while(((cx_ite != null()))){
			HX_STACK_LINE(13591)
			::nape::geom::ConvexResult i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(13592)
			this->add(i);
			HX_STACK_LINE(13593)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,addAll,(void))

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::inlined_add( ::nape::geom::ConvexResult o){
	HX_STACK_PUSH("ZNPList_ConvexResult::inlined_add","zpp_nape/util/Lists.hx",13542);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ConvexResult Block( ::nape::geom::ConvexResult &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13551);
			{
				HX_STACK_LINE(13552)
				::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13553)
				{
					HX_STACK_LINE(13554)
					if (((::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool == null()))){
						HX_STACK_LINE(13554)
						ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::__new();
					}
					else{
						HX_STACK_LINE(13561)
						ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
						HX_STACK_LINE(13562)
						::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = ret->next;
						HX_STACK_LINE(13563)
						ret->next = null();
					}
					HX_STACK_LINE(13568)
					Dynamic();
				}
				HX_STACK_LINE(13570)
				ret->elt = o;
				HX_STACK_LINE(13571)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13551)
	::zpp_nape::util::ZNPNode_ConvexResult temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(13573)
	temp->next = this->head;
	HX_STACK_LINE(13574)
	this->head = temp;
	HX_STACK_LINE(13575)
	this->modified = true;
	HX_STACK_LINE(13576)
	(this->length)++;
	HX_STACK_LINE(13577)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_add,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::add( ::nape::geom::ConvexResult o){
	HX_STACK_PUSH("ZNPList_ConvexResult::add","zpp_nape/util/Lists.hx",13537);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::nape::geom::ConvexResult Block( ::zpp_nape::util::ZNPList_ConvexResult_obj *__this,::nape::geom::ConvexResult &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13538);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ConvexResult Block( ::nape::geom::ConvexResult &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13538);
						{
							HX_STACK_LINE(13538)
							::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(13538)
							{
								HX_STACK_LINE(13538)
								if (((::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool == null()))){
									HX_STACK_LINE(13538)
									ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::__new();
								}
								else{
									HX_STACK_LINE(13538)
									ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
									HX_STACK_LINE(13538)
									::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = ret->next;
									HX_STACK_LINE(13538)
									ret->next = null();
								}
								HX_STACK_LINE(13538)
								Dynamic();
							}
							HX_STACK_LINE(13538)
							ret->elt = o;
							HX_STACK_LINE(13538)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(13538)
				::zpp_nape::util::ZNPNode_ConvexResult temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(13538)
				temp->next = __this->head;
				HX_STACK_LINE(13538)
				__this->head = temp;
				HX_STACK_LINE(13538)
				__this->modified = true;
				HX_STACK_LINE(13538)
				(__this->length)++;
				HX_STACK_LINE(13538)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(13537)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,add,return )

Void ZNPList_ConvexResult_obj::setbegin( ::zpp_nape::util::ZNPNode_ConvexResult i){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::setbegin","zpp_nape/util/Lists.hx",13532);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(13533)
		this->head = i;
		HX_STACK_LINE(13534)
		this->modified = true;
		HX_STACK_LINE(13535)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::begin","zpp_nape/util/Lists.hx",13524);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13524)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,begin,return )


ZNPList_ConvexResult_obj::ZNPList_ConvexResult_obj()
{
}

void ZNPList_ConvexResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ConvexResult);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ConvexResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ConvexResult_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ConvexResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ConvexResult >(); return inValue; }
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

void ZNPList_ConvexResult_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ConvexResult_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ConvexResult_obj::__mClass,"__mClass");
};

Class ZNPList_ConvexResult_obj::__mClass;

void ZNPList_ConvexResult_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ConvexResult"), hx::TCanCast< ZNPList_ConvexResult_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ConvexResult_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
