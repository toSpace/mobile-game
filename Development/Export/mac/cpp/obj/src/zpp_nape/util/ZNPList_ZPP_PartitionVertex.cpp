#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_PartitionVertex_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::new","zpp_nape/util/Lists.hx",6430);
{
	HX_STACK_LINE(6440)
	this->length = (int)0;
	HX_STACK_LINE(6439)
	this->pushmod = false;
	HX_STACK_LINE(6438)
	this->modified = false;
	HX_STACK_LINE(6431)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_PartitionVertex_obj::~ZNPList_ZPP_PartitionVertex_obj() { }

Dynamic ZNPList_ZPP_PartitionVertex_obj::__CreateEmpty() { return  new ZNPList_ZPP_PartitionVertex_obj; }
hx::ObjectPtr< ZNPList_ZPP_PartitionVertex_obj > ZNPList_ZPP_PartitionVertex_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_PartitionVertex_obj > result = new ZNPList_ZPP_PartitionVertex_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_PartitionVertex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_PartitionVertex_obj > result = new ZNPList_ZPP_PartitionVertex_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::at","zpp_nape/util/Lists.hx",6833);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(6842)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(6843)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_PartitionVertex(it->elt) : ::zpp_nape::geom::ZPP_PartitionVertex(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::iterator_at","zpp_nape/util/Lists.hx",6820);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(6829)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6830)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(6830)
		ret = ret->next;
	}
	HX_STACK_LINE(6831)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,iterator_at,return )

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::back","zpp_nape/util/Lists.hx",6811);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6812)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6813)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6814)
	while(((cur != null()))){
		HX_STACK_LINE(6815)
		ret = cur;
		HX_STACK_LINE(6816)
		cur = cur->next;
	}
	HX_STACK_LINE(6818)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,back,return )

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::front","zpp_nape/util/Lists.hx",6808);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6808)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,front,return )

bool ZNPList_ZPP_PartitionVertex_obj::inlined_has( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_has","zpp_nape/util/Lists.hx",6778);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6787)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6788)
	{
		HX_STACK_LINE(6789)
		ret = false;
		HX_STACK_LINE(6790)
		{
			HX_STACK_LINE(6791)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(6792)
			while(((cx_ite != null()))){
				HX_STACK_LINE(6793)
				::zpp_nape::geom::ZPP_PartitionVertex npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(6794)
				if (((npite == obj))){
					HX_STACK_LINE(6796)
					ret = true;
					HX_STACK_LINE(6797)
					break;
				}
				HX_STACK_LINE(6800)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(6804)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,inlined_has,return )

bool ZNPList_ZPP_PartitionVertex_obj::has( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::has","zpp_nape/util/Lists.hx",6773);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj *__this,::zpp_nape::geom::ZPP_PartitionVertex &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6774);
			{
				HX_STACK_LINE(6774)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6774)
				{
					HX_STACK_LINE(6774)
					ret = false;
					HX_STACK_LINE(6774)
					{
						HX_STACK_LINE(6774)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(6774)
						while(((cx_ite != null()))){
							HX_STACK_LINE(6774)
							::zpp_nape::geom::ZPP_PartitionVertex npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(6774)
							if (((npite == obj))){
								HX_STACK_LINE(6774)
								ret = true;
								HX_STACK_LINE(6774)
								break;
							}
							HX_STACK_LINE(6774)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(6774)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6773)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,has,return )

int ZNPList_ZPP_PartitionVertex_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::size","zpp_nape/util/Lists.hx",6770);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6770)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,size,return )

bool ZNPList_ZPP_PartitionVertex_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::empty","zpp_nape/util/Lists.hx",6765);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6765)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,empty,return )

Void ZNPList_ZPP_PartitionVertex_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::reverse","zpp_nape/util/Lists.hx",6750);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6751)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6752)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6753)
		while(((cur != null()))){
			HX_STACK_LINE(6754)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(6755)
			cur->next = pre;
			HX_STACK_LINE(6756)
			this->head = cur;
			HX_STACK_LINE(6757)
			pre = cur;
			HX_STACK_LINE(6758)
			cur = nx;
		}
		HX_STACK_LINE(6760)
		this->modified = true;
		HX_STACK_LINE(6761)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,reverse,(void))

Void ZNPList_ZPP_PartitionVertex_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_clear","zpp_nape/util/Lists.hx",6744);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6746)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(6746)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6746)
			this->head = ret->next;
			HX_STACK_LINE(6746)
			{
				HX_STACK_LINE(6746)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(6746)
				o->elt = null();
				HX_STACK_LINE(6746)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
				HX_STACK_LINE(6746)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
			}
			HX_STACK_LINE(6746)
			if (((this->head == null()))){
				HX_STACK_LINE(6746)
				this->pushmod = true;
			}
			HX_STACK_LINE(6746)
			this->modified = true;
			HX_STACK_LINE(6746)
			(this->length)--;
		}
		HX_STACK_LINE(6747)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,inlined_clear,(void))

Void ZNPList_ZPP_PartitionVertex_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::clear","zpp_nape/util/Lists.hx",6739);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6740)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(6740)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6740)
			this->head = ret->next;
			HX_STACK_LINE(6740)
			{
				HX_STACK_LINE(6740)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(6740)
				o->elt = null();
				HX_STACK_LINE(6740)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
				HX_STACK_LINE(6740)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
			}
			HX_STACK_LINE(6740)
			if (((this->head == null()))){
				HX_STACK_LINE(6740)
				this->pushmod = true;
			}
			HX_STACK_LINE(6740)
			this->modified = true;
			HX_STACK_LINE(6740)
			(this->length)--;
		}
		HX_STACK_LINE(6740)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::splice","zpp_nape/util/Lists.hx",6735);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(6736)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(6736)
		this->erase(pre);
	}
	HX_STACK_LINE(6737)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionVertex_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_erase","zpp_nape/util/Lists.hx",6689);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(6698)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(6699)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6700)
	if (((pre == null()))){
		HX_STACK_LINE(6701)
		old = this->head;
		HX_STACK_LINE(6702)
		ret = old->next;
		HX_STACK_LINE(6703)
		this->head = ret;
		HX_STACK_LINE(6704)
		if (((this->head == null()))){
			HX_STACK_LINE(6704)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(6707)
		old = pre->next;
		HX_STACK_LINE(6708)
		ret = old->next;
		HX_STACK_LINE(6709)
		pre->next = ret;
		HX_STACK_LINE(6710)
		if (((ret == null()))){
			HX_STACK_LINE(6710)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(6713)
	{
		HX_STACK_LINE(6714)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(6723)
		o->elt = null();
		HX_STACK_LINE(6724)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
		HX_STACK_LINE(6725)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
	}
	HX_STACK_LINE(6730)
	this->modified = true;
	HX_STACK_LINE(6731)
	(this->length)--;
	HX_STACK_LINE(6732)
	this->pushmod = true;
	HX_STACK_LINE(6733)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::erase","zpp_nape/util/Lists.hx",6684);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex Block( ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj *__this,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6685);
			{
				HX_STACK_LINE(6685)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(6685)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6685)
				if (((pre == null()))){
					HX_STACK_LINE(6685)
					old = __this->head;
					HX_STACK_LINE(6685)
					ret = old->next;
					HX_STACK_LINE(6685)
					__this->head = ret;
					HX_STACK_LINE(6685)
					if (((__this->head == null()))){
						HX_STACK_LINE(6685)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(6685)
					old = pre->next;
					HX_STACK_LINE(6685)
					ret = old->next;
					HX_STACK_LINE(6685)
					pre->next = ret;
					HX_STACK_LINE(6685)
					if (((ret == null()))){
						HX_STACK_LINE(6685)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(6685)
				{
					HX_STACK_LINE(6685)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(6685)
					o->elt = null();
					HX_STACK_LINE(6685)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
					HX_STACK_LINE(6685)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
				}
				HX_STACK_LINE(6685)
				__this->modified = true;
				HX_STACK_LINE(6685)
				(__this->length)--;
				HX_STACK_LINE(6685)
				__this->pushmod = true;
				HX_STACK_LINE(6685)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6684)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,erase,return )

bool ZNPList_ZPP_PartitionVertex_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_try_remove","zpp_nape/util/Lists.hx",6661);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6670)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(6671)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6672)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6673)
	while(((cur != null()))){
		HX_STACK_LINE(6674)
		if (((cur->elt == obj))){
			HX_STACK_LINE(6675)
			{
				HX_STACK_LINE(6675)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(6675)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(6675)
				if (((pre == null()))){
					HX_STACK_LINE(6675)
					old = this->head;
					HX_STACK_LINE(6675)
					ret1 = old->next;
					HX_STACK_LINE(6675)
					this->head = ret1;
					HX_STACK_LINE(6675)
					if (((this->head == null()))){
						HX_STACK_LINE(6675)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(6675)
					old = pre->next;
					HX_STACK_LINE(6675)
					ret1 = old->next;
					HX_STACK_LINE(6675)
					pre->next = ret1;
					HX_STACK_LINE(6675)
					if (((ret1 == null()))){
						HX_STACK_LINE(6675)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(6675)
				{
					HX_STACK_LINE(6675)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(6675)
					o->elt = null();
					HX_STACK_LINE(6675)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
					HX_STACK_LINE(6675)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
				}
				HX_STACK_LINE(6675)
				this->modified = true;
				HX_STACK_LINE(6675)
				(this->length)--;
				HX_STACK_LINE(6675)
				this->pushmod = true;
				HX_STACK_LINE(6675)
				ret1;
			}
			HX_STACK_LINE(6676)
			ret = true;
			HX_STACK_LINE(6677)
			break;
		}
		HX_STACK_LINE(6679)
		pre = cur;
		HX_STACK_LINE(6680)
		cur = cur->next;
	}
	HX_STACK_LINE(6682)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,inlined_try_remove,return )

Void ZNPList_ZPP_PartitionVertex_obj::inlined_remove( ::zpp_nape::geom::ZPP_PartitionVertex obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_remove","zpp_nape/util/Lists.hx",6648);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(6657)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6657)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6657)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6657)
		while(((cur != null()))){
			HX_STACK_LINE(6657)
			if (((cur->elt == obj))){
				HX_STACK_LINE(6657)
				{
					HX_STACK_LINE(6657)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(6657)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(6657)
					if (((pre == null()))){
						HX_STACK_LINE(6657)
						old = this->head;
						HX_STACK_LINE(6657)
						ret1 = old->next;
						HX_STACK_LINE(6657)
						this->head = ret1;
						HX_STACK_LINE(6657)
						if (((this->head == null()))){
							HX_STACK_LINE(6657)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(6657)
						old = pre->next;
						HX_STACK_LINE(6657)
						ret1 = old->next;
						HX_STACK_LINE(6657)
						pre->next = ret1;
						HX_STACK_LINE(6657)
						if (((ret1 == null()))){
							HX_STACK_LINE(6657)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(6657)
					{
						HX_STACK_LINE(6657)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(6657)
						o->elt = null();
						HX_STACK_LINE(6657)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
						HX_STACK_LINE(6657)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
					}
					HX_STACK_LINE(6657)
					this->modified = true;
					HX_STACK_LINE(6657)
					(this->length)--;
					HX_STACK_LINE(6657)
					this->pushmod = true;
					HX_STACK_LINE(6657)
					ret1;
				}
				HX_STACK_LINE(6657)
				ret = true;
				HX_STACK_LINE(6657)
				break;
			}
			HX_STACK_LINE(6657)
			pre = cur;
			HX_STACK_LINE(6657)
			cur = cur->next;
		}
		HX_STACK_LINE(6657)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,inlined_remove,(void))

bool ZNPList_ZPP_PartitionVertex_obj::try_remove( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::try_remove","zpp_nape/util/Lists.hx",6623);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6632)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(6633)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6634)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6635)
	while(((cur != null()))){
		HX_STACK_LINE(6636)
		if (((cur->elt == obj))){
			HX_STACK_LINE(6637)
			this->erase(pre);
			HX_STACK_LINE(6638)
			ret = true;
			HX_STACK_LINE(6639)
			break;
		}
		HX_STACK_LINE(6641)
		pre = cur;
		HX_STACK_LINE(6642)
		cur = cur->next;
	}
	HX_STACK_LINE(6644)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,try_remove,return )

Void ZNPList_ZPP_PartitionVertex_obj::remove( ::zpp_nape::geom::ZPP_PartitionVertex obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::remove","zpp_nape/util/Lists.hx",6612);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(6621)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6621)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6621)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6621)
		while(((cur != null()))){
			HX_STACK_LINE(6621)
			if (((cur->elt == obj))){
				HX_STACK_LINE(6621)
				{
					HX_STACK_LINE(6621)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(6621)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(6621)
					if (((pre == null()))){
						HX_STACK_LINE(6621)
						old = this->head;
						HX_STACK_LINE(6621)
						ret1 = old->next;
						HX_STACK_LINE(6621)
						this->head = ret1;
						HX_STACK_LINE(6621)
						if (((this->head == null()))){
							HX_STACK_LINE(6621)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(6621)
						old = pre->next;
						HX_STACK_LINE(6621)
						ret1 = old->next;
						HX_STACK_LINE(6621)
						pre->next = ret1;
						HX_STACK_LINE(6621)
						if (((ret1 == null()))){
							HX_STACK_LINE(6621)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(6621)
					{
						HX_STACK_LINE(6621)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(6621)
						o->elt = null();
						HX_STACK_LINE(6621)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
						HX_STACK_LINE(6621)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
					}
					HX_STACK_LINE(6621)
					this->modified = true;
					HX_STACK_LINE(6621)
					(this->length)--;
					HX_STACK_LINE(6621)
					this->pushmod = true;
					HX_STACK_LINE(6621)
					ret1;
				}
				HX_STACK_LINE(6621)
				ret = true;
				HX_STACK_LINE(6621)
				break;
			}
			HX_STACK_LINE(6621)
			pre = cur;
			HX_STACK_LINE(6621)
			cur = cur->next;
		}
		HX_STACK_LINE(6621)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,remove,(void))

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_pop_unsafe","zpp_nape/util/Lists.hx",6599);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6608)
	::zpp_nape::geom::ZPP_PartitionVertex ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6609)
	this->pop();
	HX_STACK_LINE(6610)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::pop_unsafe","zpp_nape/util/Lists.hx",6594);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6595);
			{
				HX_STACK_LINE(6595)
				::zpp_nape::geom::ZPP_PartitionVertex ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6595)
				__this->pop();
				HX_STACK_LINE(6595)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6594)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,pop_unsafe,return )

Void ZNPList_ZPP_PartitionVertex_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_pop","zpp_nape/util/Lists.hx",6561);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6570)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6571)
		this->head = ret->next;
		HX_STACK_LINE(6573)
		{
			HX_STACK_LINE(6574)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6583)
			o->elt = null();
			HX_STACK_LINE(6584)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
			HX_STACK_LINE(6585)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6590)
		if (((this->head == null()))){
			HX_STACK_LINE(6590)
			this->pushmod = true;
		}
		HX_STACK_LINE(6591)
		this->modified = true;
		HX_STACK_LINE(6592)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,inlined_pop,(void))

Void ZNPList_ZPP_PartitionVertex_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::pop","zpp_nape/util/Lists.hx",6556);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6557)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6557)
		this->head = ret->next;
		HX_STACK_LINE(6557)
		{
			HX_STACK_LINE(6557)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6557)
			o->elt = null();
			HX_STACK_LINE(6557)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
			HX_STACK_LINE(6557)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6557)
		if (((this->head == null()))){
			HX_STACK_LINE(6557)
			this->pushmod = true;
		}
		HX_STACK_LINE(6557)
		this->modified = true;
		HX_STACK_LINE(6557)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur,::zpp_nape::geom::ZPP_PartitionVertex o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_insert","zpp_nape/util/Lists.hx",6513);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6522);
			{
				HX_STACK_LINE(6523)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6524)
				{
					HX_STACK_LINE(6525)
					if (((::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool == null()))){
						HX_STACK_LINE(6525)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__new();
					}
					else{
						HX_STACK_LINE(6532)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
						HX_STACK_LINE(6533)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = ret->next;
						HX_STACK_LINE(6534)
						ret->next = null();
					}
					HX_STACK_LINE(6539)
					Dynamic();
				}
				HX_STACK_LINE(6541)
				ret->elt = o;
				HX_STACK_LINE(6542)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6522)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6544)
	if (((cur == null()))){
		HX_STACK_LINE(6545)
		temp->next = this->head;
		HX_STACK_LINE(6546)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(6549)
		temp->next = cur->next;
		HX_STACK_LINE(6550)
		cur->next = temp;
	}
	HX_STACK_LINE(6552)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(6553)
	(this->length)++;
	HX_STACK_LINE(6554)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionVertex_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur,::zpp_nape::geom::ZPP_PartitionVertex o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::insert","zpp_nape/util/Lists.hx",6508);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex Block( ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj *__this,::zpp_nape::geom::ZPP_PartitionVertex &o,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6509);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6509);
						{
							HX_STACK_LINE(6509)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6509)
							{
								HX_STACK_LINE(6509)
								if (((::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool == null()))){
									HX_STACK_LINE(6509)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__new();
								}
								else{
									HX_STACK_LINE(6509)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
									HX_STACK_LINE(6509)
									::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = ret->next;
									HX_STACK_LINE(6509)
									ret->next = null();
								}
								HX_STACK_LINE(6509)
								Dynamic();
							}
							HX_STACK_LINE(6509)
							ret->elt = o;
							HX_STACK_LINE(6509)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6509)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(6509)
				if (((cur == null()))){
					HX_STACK_LINE(6509)
					temp->next = __this->head;
					HX_STACK_LINE(6509)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(6509)
					temp->next = cur->next;
					HX_STACK_LINE(6509)
					cur->next = temp;
				}
				HX_STACK_LINE(6509)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(6509)
				(__this->length)++;
				HX_STACK_LINE(6509)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(6508)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionVertex_obj,insert,return )

Void ZNPList_ZPP_PartitionVertex_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_PartitionVertex x){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::addAll","zpp_nape/util/Lists.hx",6490);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(6500)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(6501)
		while(((cx_ite != null()))){
			HX_STACK_LINE(6502)
			::zpp_nape::geom::ZPP_PartitionVertex i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(6503)
			this->add(i);
			HX_STACK_LINE(6504)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,addAll,(void))

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::inlined_add( ::zpp_nape::geom::ZPP_PartitionVertex o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_add","zpp_nape/util/Lists.hx",6453);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6462);
			{
				HX_STACK_LINE(6463)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6464)
				{
					HX_STACK_LINE(6465)
					if (((::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool == null()))){
						HX_STACK_LINE(6465)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__new();
					}
					else{
						HX_STACK_LINE(6472)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
						HX_STACK_LINE(6473)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = ret->next;
						HX_STACK_LINE(6474)
						ret->next = null();
					}
					HX_STACK_LINE(6479)
					Dynamic();
				}
				HX_STACK_LINE(6481)
				ret->elt = o;
				HX_STACK_LINE(6482)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6462)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6484)
	temp->next = this->head;
	HX_STACK_LINE(6485)
	this->head = temp;
	HX_STACK_LINE(6486)
	this->modified = true;
	HX_STACK_LINE(6487)
	(this->length)++;
	HX_STACK_LINE(6488)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,inlined_add,return )

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::add( ::zpp_nape::geom::ZPP_PartitionVertex o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::add","zpp_nape/util/Lists.hx",6448);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj *__this,::zpp_nape::geom::ZPP_PartitionVertex &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6449);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6449);
						{
							HX_STACK_LINE(6449)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6449)
							{
								HX_STACK_LINE(6449)
								if (((::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool == null()))){
									HX_STACK_LINE(6449)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__new();
								}
								else{
									HX_STACK_LINE(6449)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
									HX_STACK_LINE(6449)
									::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = ret->next;
									HX_STACK_LINE(6449)
									ret->next = null();
								}
								HX_STACK_LINE(6449)
								Dynamic();
							}
							HX_STACK_LINE(6449)
							ret->elt = o;
							HX_STACK_LINE(6449)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6449)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(6449)
				temp->next = __this->head;
				HX_STACK_LINE(6449)
				__this->head = temp;
				HX_STACK_LINE(6449)
				__this->modified = true;
				HX_STACK_LINE(6449)
				(__this->length)++;
				HX_STACK_LINE(6449)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(6448)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,add,return )

Void ZNPList_ZPP_PartitionVertex_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex i){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::setbegin","zpp_nape/util/Lists.hx",6443);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(6444)
		this->head = i;
		HX_STACK_LINE(6445)
		this->modified = true;
		HX_STACK_LINE(6446)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::begin","zpp_nape/util/Lists.hx",6435);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6435)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,begin,return )


ZNPList_ZPP_PartitionVertex_obj::ZNPList_ZPP_PartitionVertex_obj()
{
}

void ZNPList_ZPP_PartitionVertex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_PartitionVertex);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_PartitionVertex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_PartitionVertex_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_PartitionVertex_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex >(); return inValue; }
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

void ZNPList_ZPP_PartitionVertex_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_PartitionVertex_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_PartitionVertex_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_PartitionVertex_obj::__mClass;

void ZNPList_ZPP_PartitionVertex_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_PartitionVertex"), hx::TCanCast< ZNPList_ZPP_PartitionVertex_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_PartitionVertex_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
