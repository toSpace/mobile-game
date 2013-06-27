#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutVert
#include <zpp_nape/util/ZNPList_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutVert
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CutVert_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_CutVert::new","zpp_nape/util/Lists.hx",6013);
{
	HX_STACK_LINE(6023)
	this->length = (int)0;
	HX_STACK_LINE(6022)
	this->pushmod = false;
	HX_STACK_LINE(6021)
	this->modified = false;
	HX_STACK_LINE(6014)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_CutVert_obj::~ZNPList_ZPP_CutVert_obj() { }

Dynamic ZNPList_ZPP_CutVert_obj::__CreateEmpty() { return  new ZNPList_ZPP_CutVert_obj; }
hx::ObjectPtr< ZNPList_ZPP_CutVert_obj > ZNPList_ZPP_CutVert_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CutVert_obj > result = new ZNPList_ZPP_CutVert_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_CutVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CutVert_obj > result = new ZNPList_ZPP_CutVert_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::at","zpp_nape/util/Lists.hx",6416);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(6425)
	::zpp_nape::util::ZNPNode_ZPP_CutVert it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(6426)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_CutVert(it->elt) : ::zpp_nape::geom::ZPP_CutVert(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::iterator_at","zpp_nape/util/Lists.hx",6403);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(6412)
	::zpp_nape::util::ZNPNode_ZPP_CutVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6413)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(6413)
		ret = ret->next;
	}
	HX_STACK_LINE(6414)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,iterator_at,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::back","zpp_nape/util/Lists.hx",6394);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6395)
	::zpp_nape::util::ZNPNode_ZPP_CutVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6396)
	::zpp_nape::util::ZNPNode_ZPP_CutVert cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6397)
	while(((cur != null()))){
		HX_STACK_LINE(6398)
		ret = cur;
		HX_STACK_LINE(6399)
		cur = cur->next;
	}
	HX_STACK_LINE(6401)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,back,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::front","zpp_nape/util/Lists.hx",6391);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6391)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,front,return )

bool ZNPList_ZPP_CutVert_obj::inlined_has( ::zpp_nape::geom::ZPP_CutVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_has","zpp_nape/util/Lists.hx",6361);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6370)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6371)
	{
		HX_STACK_LINE(6372)
		ret = false;
		HX_STACK_LINE(6373)
		{
			HX_STACK_LINE(6374)
			::zpp_nape::util::ZNPNode_ZPP_CutVert cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(6375)
			while(((cx_ite != null()))){
				HX_STACK_LINE(6376)
				::zpp_nape::geom::ZPP_CutVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(6377)
				if (((npite == obj))){
					HX_STACK_LINE(6379)
					ret = true;
					HX_STACK_LINE(6380)
					break;
				}
				HX_STACK_LINE(6383)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(6387)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_has,return )

bool ZNPList_ZPP_CutVert_obj::has( ::zpp_nape::geom::ZPP_CutVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::has","zpp_nape/util/Lists.hx",6356);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_CutVert_obj *__this,::zpp_nape::geom::ZPP_CutVert &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6357);
			{
				HX_STACK_LINE(6357)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6357)
				{
					HX_STACK_LINE(6357)
					ret = false;
					HX_STACK_LINE(6357)
					{
						HX_STACK_LINE(6357)
						::zpp_nape::util::ZNPNode_ZPP_CutVert cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(6357)
						while(((cx_ite != null()))){
							HX_STACK_LINE(6357)
							::zpp_nape::geom::ZPP_CutVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(6357)
							if (((npite == obj))){
								HX_STACK_LINE(6357)
								ret = true;
								HX_STACK_LINE(6357)
								break;
							}
							HX_STACK_LINE(6357)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(6357)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6356)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,has,return )

int ZNPList_ZPP_CutVert_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::size","zpp_nape/util/Lists.hx",6353);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6353)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,size,return )

bool ZNPList_ZPP_CutVert_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::empty","zpp_nape/util/Lists.hx",6348);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6348)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,empty,return )

Void ZNPList_ZPP_CutVert_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::reverse","zpp_nape/util/Lists.hx",6333);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6334)
		::zpp_nape::util::ZNPNode_ZPP_CutVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6335)
		::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6336)
		while(((cur != null()))){
			HX_STACK_LINE(6337)
			::zpp_nape::util::ZNPNode_ZPP_CutVert nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(6338)
			cur->next = pre;
			HX_STACK_LINE(6339)
			this->head = cur;
			HX_STACK_LINE(6340)
			pre = cur;
			HX_STACK_LINE(6341)
			cur = nx;
		}
		HX_STACK_LINE(6343)
		this->modified = true;
		HX_STACK_LINE(6344)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,reverse,(void))

Void ZNPList_ZPP_CutVert_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_clear","zpp_nape/util/Lists.hx",6327);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6329)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(6329)
			::zpp_nape::util::ZNPNode_ZPP_CutVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6329)
			this->head = ret->next;
			HX_STACK_LINE(6329)
			{
				HX_STACK_LINE(6329)
				::zpp_nape::util::ZNPNode_ZPP_CutVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(6329)
				o->elt = null();
				HX_STACK_LINE(6329)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
				HX_STACK_LINE(6329)
				::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(6329)
			if (((this->head == null()))){
				HX_STACK_LINE(6329)
				this->pushmod = true;
			}
			HX_STACK_LINE(6329)
			this->modified = true;
			HX_STACK_LINE(6329)
			(this->length)--;
		}
		HX_STACK_LINE(6330)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,inlined_clear,(void))

Void ZNPList_ZPP_CutVert_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::clear","zpp_nape/util/Lists.hx",6322);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6323)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(6323)
			::zpp_nape::util::ZNPNode_ZPP_CutVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6323)
			this->head = ret->next;
			HX_STACK_LINE(6323)
			{
				HX_STACK_LINE(6323)
				::zpp_nape::util::ZNPNode_ZPP_CutVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(6323)
				o->elt = null();
				HX_STACK_LINE(6323)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
				HX_STACK_LINE(6323)
				::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(6323)
			if (((this->head == null()))){
				HX_STACK_LINE(6323)
				this->pushmod = true;
			}
			HX_STACK_LINE(6323)
			this->modified = true;
			HX_STACK_LINE(6323)
			(this->length)--;
		}
		HX_STACK_LINE(6323)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CutVert pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::splice","zpp_nape/util/Lists.hx",6318);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(6319)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(6319)
		this->erase(pre);
	}
	HX_STACK_LINE(6320)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutVert_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CutVert pre){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_erase","zpp_nape/util/Lists.hx",6272);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(6281)
	::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(6282)
	::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6283)
	if (((pre == null()))){
		HX_STACK_LINE(6284)
		old = this->head;
		HX_STACK_LINE(6285)
		ret = old->next;
		HX_STACK_LINE(6286)
		this->head = ret;
		HX_STACK_LINE(6287)
		if (((this->head == null()))){
			HX_STACK_LINE(6287)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(6290)
		old = pre->next;
		HX_STACK_LINE(6291)
		ret = old->next;
		HX_STACK_LINE(6292)
		pre->next = ret;
		HX_STACK_LINE(6293)
		if (((ret == null()))){
			HX_STACK_LINE(6293)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(6296)
	{
		HX_STACK_LINE(6297)
		::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(6306)
		o->elt = null();
		HX_STACK_LINE(6307)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
		HX_STACK_LINE(6308)
		::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(6313)
	this->modified = true;
	HX_STACK_LINE(6314)
	(this->length)--;
	HX_STACK_LINE(6315)
	this->pushmod = true;
	HX_STACK_LINE(6316)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CutVert pre){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::erase","zpp_nape/util/Lists.hx",6267);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CutVert Block( ::zpp_nape::util::ZNPList_ZPP_CutVert_obj *__this,::zpp_nape::util::ZNPNode_ZPP_CutVert &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6268);
			{
				HX_STACK_LINE(6268)
				::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(6268)
				::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6268)
				if (((pre == null()))){
					HX_STACK_LINE(6268)
					old = __this->head;
					HX_STACK_LINE(6268)
					ret = old->next;
					HX_STACK_LINE(6268)
					__this->head = ret;
					HX_STACK_LINE(6268)
					if (((__this->head == null()))){
						HX_STACK_LINE(6268)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(6268)
					old = pre->next;
					HX_STACK_LINE(6268)
					ret = old->next;
					HX_STACK_LINE(6268)
					pre->next = ret;
					HX_STACK_LINE(6268)
					if (((ret == null()))){
						HX_STACK_LINE(6268)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(6268)
				{
					HX_STACK_LINE(6268)
					::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(6268)
					o->elt = null();
					HX_STACK_LINE(6268)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
					HX_STACK_LINE(6268)
					::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(6268)
				__this->modified = true;
				HX_STACK_LINE(6268)
				(__this->length)--;
				HX_STACK_LINE(6268)
				__this->pushmod = true;
				HX_STACK_LINE(6268)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6267)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,erase,return )

bool ZNPList_ZPP_CutVert_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_CutVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_try_remove","zpp_nape/util/Lists.hx",6244);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6253)
	::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(6254)
	::zpp_nape::util::ZNPNode_ZPP_CutVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6255)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6256)
	while(((cur != null()))){
		HX_STACK_LINE(6257)
		if (((cur->elt == obj))){
			HX_STACK_LINE(6258)
			{
				HX_STACK_LINE(6258)
				::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(6258)
				::zpp_nape::util::ZNPNode_ZPP_CutVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(6258)
				if (((pre == null()))){
					HX_STACK_LINE(6258)
					old = this->head;
					HX_STACK_LINE(6258)
					ret1 = old->next;
					HX_STACK_LINE(6258)
					this->head = ret1;
					HX_STACK_LINE(6258)
					if (((this->head == null()))){
						HX_STACK_LINE(6258)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(6258)
					old = pre->next;
					HX_STACK_LINE(6258)
					ret1 = old->next;
					HX_STACK_LINE(6258)
					pre->next = ret1;
					HX_STACK_LINE(6258)
					if (((ret1 == null()))){
						HX_STACK_LINE(6258)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(6258)
				{
					HX_STACK_LINE(6258)
					::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(6258)
					o->elt = null();
					HX_STACK_LINE(6258)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
					HX_STACK_LINE(6258)
					::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(6258)
				this->modified = true;
				HX_STACK_LINE(6258)
				(this->length)--;
				HX_STACK_LINE(6258)
				this->pushmod = true;
				HX_STACK_LINE(6258)
				ret1;
			}
			HX_STACK_LINE(6259)
			ret = true;
			HX_STACK_LINE(6260)
			break;
		}
		HX_STACK_LINE(6262)
		pre = cur;
		HX_STACK_LINE(6263)
		cur = cur->next;
	}
	HX_STACK_LINE(6265)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_try_remove,return )

Void ZNPList_ZPP_CutVert_obj::inlined_remove( ::zpp_nape::geom::ZPP_CutVert obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_remove","zpp_nape/util/Lists.hx",6231);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(6240)
		::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6240)
		::zpp_nape::util::ZNPNode_ZPP_CutVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6240)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6240)
		while(((cur != null()))){
			HX_STACK_LINE(6240)
			if (((cur->elt == obj))){
				HX_STACK_LINE(6240)
				{
					HX_STACK_LINE(6240)
					::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(6240)
					::zpp_nape::util::ZNPNode_ZPP_CutVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(6240)
					if (((pre == null()))){
						HX_STACK_LINE(6240)
						old = this->head;
						HX_STACK_LINE(6240)
						ret1 = old->next;
						HX_STACK_LINE(6240)
						this->head = ret1;
						HX_STACK_LINE(6240)
						if (((this->head == null()))){
							HX_STACK_LINE(6240)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(6240)
						old = pre->next;
						HX_STACK_LINE(6240)
						ret1 = old->next;
						HX_STACK_LINE(6240)
						pre->next = ret1;
						HX_STACK_LINE(6240)
						if (((ret1 == null()))){
							HX_STACK_LINE(6240)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(6240)
					{
						HX_STACK_LINE(6240)
						::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(6240)
						o->elt = null();
						HX_STACK_LINE(6240)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
						HX_STACK_LINE(6240)
						::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(6240)
					this->modified = true;
					HX_STACK_LINE(6240)
					(this->length)--;
					HX_STACK_LINE(6240)
					this->pushmod = true;
					HX_STACK_LINE(6240)
					ret1;
				}
				HX_STACK_LINE(6240)
				ret = true;
				HX_STACK_LINE(6240)
				break;
			}
			HX_STACK_LINE(6240)
			pre = cur;
			HX_STACK_LINE(6240)
			cur = cur->next;
		}
		HX_STACK_LINE(6240)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_remove,(void))

bool ZNPList_ZPP_CutVert_obj::try_remove( ::zpp_nape::geom::ZPP_CutVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::try_remove","zpp_nape/util/Lists.hx",6206);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6215)
	::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(6216)
	::zpp_nape::util::ZNPNode_ZPP_CutVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6217)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6218)
	while(((cur != null()))){
		HX_STACK_LINE(6219)
		if (((cur->elt == obj))){
			HX_STACK_LINE(6220)
			this->erase(pre);
			HX_STACK_LINE(6221)
			ret = true;
			HX_STACK_LINE(6222)
			break;
		}
		HX_STACK_LINE(6224)
		pre = cur;
		HX_STACK_LINE(6225)
		cur = cur->next;
	}
	HX_STACK_LINE(6227)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,try_remove,return )

Void ZNPList_ZPP_CutVert_obj::remove( ::zpp_nape::geom::ZPP_CutVert obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::remove","zpp_nape/util/Lists.hx",6195);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(6204)
		::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6204)
		::zpp_nape::util::ZNPNode_ZPP_CutVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6204)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6204)
		while(((cur != null()))){
			HX_STACK_LINE(6204)
			if (((cur->elt == obj))){
				HX_STACK_LINE(6204)
				{
					HX_STACK_LINE(6204)
					::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(6204)
					::zpp_nape::util::ZNPNode_ZPP_CutVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(6204)
					if (((pre == null()))){
						HX_STACK_LINE(6204)
						old = this->head;
						HX_STACK_LINE(6204)
						ret1 = old->next;
						HX_STACK_LINE(6204)
						this->head = ret1;
						HX_STACK_LINE(6204)
						if (((this->head == null()))){
							HX_STACK_LINE(6204)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(6204)
						old = pre->next;
						HX_STACK_LINE(6204)
						ret1 = old->next;
						HX_STACK_LINE(6204)
						pre->next = ret1;
						HX_STACK_LINE(6204)
						if (((ret1 == null()))){
							HX_STACK_LINE(6204)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(6204)
					{
						HX_STACK_LINE(6204)
						::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(6204)
						o->elt = null();
						HX_STACK_LINE(6204)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
						HX_STACK_LINE(6204)
						::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
					}
					HX_STACK_LINE(6204)
					this->modified = true;
					HX_STACK_LINE(6204)
					(this->length)--;
					HX_STACK_LINE(6204)
					this->pushmod = true;
					HX_STACK_LINE(6204)
					ret1;
				}
				HX_STACK_LINE(6204)
				ret = true;
				HX_STACK_LINE(6204)
				break;
			}
			HX_STACK_LINE(6204)
			pre = cur;
			HX_STACK_LINE(6204)
			cur = cur->next;
		}
		HX_STACK_LINE(6204)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,remove,(void))

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_pop_unsafe","zpp_nape/util/Lists.hx",6182);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6191)
	::zpp_nape::geom::ZPP_CutVert ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6192)
	this->pop();
	HX_STACK_LINE(6193)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::pop_unsafe","zpp_nape/util/Lists.hx",6177);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::util::ZNPList_ZPP_CutVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6178);
			{
				HX_STACK_LINE(6178)
				::zpp_nape::geom::ZPP_CutVert ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6178)
				__this->pop();
				HX_STACK_LINE(6178)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6177)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,pop_unsafe,return )

Void ZNPList_ZPP_CutVert_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_pop","zpp_nape/util/Lists.hx",6144);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6153)
		::zpp_nape::util::ZNPNode_ZPP_CutVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6154)
		this->head = ret->next;
		HX_STACK_LINE(6156)
		{
			HX_STACK_LINE(6157)
			::zpp_nape::util::ZNPNode_ZPP_CutVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6166)
			o->elt = null();
			HX_STACK_LINE(6167)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
			HX_STACK_LINE(6168)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6173)
		if (((this->head == null()))){
			HX_STACK_LINE(6173)
			this->pushmod = true;
		}
		HX_STACK_LINE(6174)
		this->modified = true;
		HX_STACK_LINE(6175)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,inlined_pop,(void))

Void ZNPList_ZPP_CutVert_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::pop","zpp_nape/util/Lists.hx",6139);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6140)
		::zpp_nape::util::ZNPNode_ZPP_CutVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6140)
		this->head = ret->next;
		HX_STACK_LINE(6140)
		{
			HX_STACK_LINE(6140)
			::zpp_nape::util::ZNPNode_ZPP_CutVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6140)
			o->elt = null();
			HX_STACK_LINE(6140)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
			HX_STACK_LINE(6140)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6140)
		if (((this->head == null()))){
			HX_STACK_LINE(6140)
			this->pushmod = true;
		}
		HX_STACK_LINE(6140)
		this->modified = true;
		HX_STACK_LINE(6140)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CutVert cur,::zpp_nape::geom::ZPP_CutVert o){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_insert","zpp_nape/util/Lists.hx",6096);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6105);
			{
				HX_STACK_LINE(6106)
				::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6107)
				{
					HX_STACK_LINE(6108)
					if (((::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(6108)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__new();
					}
					else{
						HX_STACK_LINE(6115)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
						HX_STACK_LINE(6116)
						::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = ret->next;
						HX_STACK_LINE(6117)
						ret->next = null();
					}
					HX_STACK_LINE(6122)
					Dynamic();
				}
				HX_STACK_LINE(6124)
				ret->elt = o;
				HX_STACK_LINE(6125)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6105)
	::zpp_nape::util::ZNPNode_ZPP_CutVert temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6127)
	if (((cur == null()))){
		HX_STACK_LINE(6128)
		temp->next = this->head;
		HX_STACK_LINE(6129)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(6132)
		temp->next = cur->next;
		HX_STACK_LINE(6133)
		cur->next = temp;
	}
	HX_STACK_LINE(6135)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(6136)
	(this->length)++;
	HX_STACK_LINE(6137)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutVert_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CutVert cur,::zpp_nape::geom::ZPP_CutVert o){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::insert","zpp_nape/util/Lists.hx",6091);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CutVert Block( ::zpp_nape::util::ZNPList_ZPP_CutVert_obj *__this,::zpp_nape::geom::ZPP_CutVert &o,::zpp_nape::util::ZNPNode_ZPP_CutVert &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6092);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6092);
						{
							HX_STACK_LINE(6092)
							::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6092)
							{
								HX_STACK_LINE(6092)
								if (((::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(6092)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__new();
								}
								else{
									HX_STACK_LINE(6092)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
									HX_STACK_LINE(6092)
									::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(6092)
									ret->next = null();
								}
								HX_STACK_LINE(6092)
								Dynamic();
							}
							HX_STACK_LINE(6092)
							ret->elt = o;
							HX_STACK_LINE(6092)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6092)
				::zpp_nape::util::ZNPNode_ZPP_CutVert temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(6092)
				if (((cur == null()))){
					HX_STACK_LINE(6092)
					temp->next = __this->head;
					HX_STACK_LINE(6092)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(6092)
					temp->next = cur->next;
					HX_STACK_LINE(6092)
					cur->next = temp;
				}
				HX_STACK_LINE(6092)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(6092)
				(__this->length)++;
				HX_STACK_LINE(6092)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(6091)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutVert_obj,insert,return )

Void ZNPList_ZPP_CutVert_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CutVert x){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::addAll","zpp_nape/util/Lists.hx",6073);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(6083)
		::zpp_nape::util::ZNPNode_ZPP_CutVert cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(6084)
		while(((cx_ite != null()))){
			HX_STACK_LINE(6085)
			::zpp_nape::geom::ZPP_CutVert i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(6086)
			this->add(i);
			HX_STACK_LINE(6087)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,addAll,(void))

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::inlined_add( ::zpp_nape::geom::ZPP_CutVert o){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_add","zpp_nape/util/Lists.hx",6036);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6045);
			{
				HX_STACK_LINE(6046)
				::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6047)
				{
					HX_STACK_LINE(6048)
					if (((::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(6048)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__new();
					}
					else{
						HX_STACK_LINE(6055)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
						HX_STACK_LINE(6056)
						::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = ret->next;
						HX_STACK_LINE(6057)
						ret->next = null();
					}
					HX_STACK_LINE(6062)
					Dynamic();
				}
				HX_STACK_LINE(6064)
				ret->elt = o;
				HX_STACK_LINE(6065)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6045)
	::zpp_nape::util::ZNPNode_ZPP_CutVert temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6067)
	temp->next = this->head;
	HX_STACK_LINE(6068)
	this->head = temp;
	HX_STACK_LINE(6069)
	this->modified = true;
	HX_STACK_LINE(6070)
	(this->length)++;
	HX_STACK_LINE(6071)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_add,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::add( ::zpp_nape::geom::ZPP_CutVert o){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::add","zpp_nape/util/Lists.hx",6031);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::util::ZNPList_ZPP_CutVert_obj *__this,::zpp_nape::geom::ZPP_CutVert &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6032);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6032);
						{
							HX_STACK_LINE(6032)
							::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6032)
							{
								HX_STACK_LINE(6032)
								if (((::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(6032)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__new();
								}
								else{
									HX_STACK_LINE(6032)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
									HX_STACK_LINE(6032)
									::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(6032)
									ret->next = null();
								}
								HX_STACK_LINE(6032)
								Dynamic();
							}
							HX_STACK_LINE(6032)
							ret->elt = o;
							HX_STACK_LINE(6032)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6032)
				::zpp_nape::util::ZNPNode_ZPP_CutVert temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(6032)
				temp->next = __this->head;
				HX_STACK_LINE(6032)
				__this->head = temp;
				HX_STACK_LINE(6032)
				__this->modified = true;
				HX_STACK_LINE(6032)
				(__this->length)++;
				HX_STACK_LINE(6032)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(6031)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,add,return )

Void ZNPList_ZPP_CutVert_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CutVert i){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::setbegin","zpp_nape/util/Lists.hx",6026);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(6027)
		this->head = i;
		HX_STACK_LINE(6028)
		this->modified = true;
		HX_STACK_LINE(6029)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::begin","zpp_nape/util/Lists.hx",6018);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6018)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,begin,return )


ZNPList_ZPP_CutVert_obj::ZNPList_ZPP_CutVert_obj()
{
}

void ZNPList_ZPP_CutVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CutVert);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CutVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_CutVert_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_CutVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CutVert >(); return inValue; }
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

void ZNPList_ZPP_CutVert_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CutVert_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CutVert_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_CutVert_obj::__mClass;

void ZNPList_ZPP_CutVert_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_CutVert"), hx::TCanCast< ZNPList_ZPP_CutVert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_CutVert_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
