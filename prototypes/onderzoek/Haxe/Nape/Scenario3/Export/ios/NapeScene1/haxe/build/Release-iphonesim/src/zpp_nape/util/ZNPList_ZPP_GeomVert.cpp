#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomVert
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomVert
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_GeomVert_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_GeomVert::new","zpp_nape/util/Lists.hx",7264);
{
	HX_STACK_LINE(7274)
	this->length = (int)0;
	HX_STACK_LINE(7273)
	this->pushmod = false;
	HX_STACK_LINE(7272)
	this->modified = false;
	HX_STACK_LINE(7265)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_GeomVert_obj::~ZNPList_ZPP_GeomVert_obj() { }

Dynamic ZNPList_ZPP_GeomVert_obj::__CreateEmpty() { return  new ZNPList_ZPP_GeomVert_obj; }
hx::ObjectPtr< ZNPList_ZPP_GeomVert_obj > ZNPList_ZPP_GeomVert_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_GeomVert_obj > result = new ZNPList_ZPP_GeomVert_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_GeomVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_GeomVert_obj > result = new ZNPList_ZPP_GeomVert_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::at","zpp_nape/util/Lists.hx",7667);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(7668)
	{
	}
	HX_STACK_LINE(7676)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(7677)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_GeomVert(it->elt) : ::zpp_nape::geom::ZPP_GeomVert(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::iterator_at","zpp_nape/util/Lists.hx",7654);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(7655)
	{
	}
	HX_STACK_LINE(7663)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7664)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(7664)
		ret = ret->next;
	}
	HX_STACK_LINE(7665)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,iterator_at,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::back","zpp_nape/util/Lists.hx",7645);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7646)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7647)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7648)
	while(((cur != null()))){
		HX_STACK_LINE(7649)
		ret = cur;
		HX_STACK_LINE(7650)
		cur = cur->next;
	}
	HX_STACK_LINE(7652)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,back,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::front","zpp_nape/util/Lists.hx",7642);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7642)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,front,return )

bool ZNPList_ZPP_GeomVert_obj::inlined_has( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_has","zpp_nape/util/Lists.hx",7612);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7613)
	{
	}
	HX_STACK_LINE(7621)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7622)
	{
		HX_STACK_LINE(7623)
		ret = false;
		HX_STACK_LINE(7624)
		{
			HX_STACK_LINE(7625)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(7626)
			while(((cx_ite != null()))){
				HX_STACK_LINE(7627)
				::zpp_nape::geom::ZPP_GeomVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(7628)
				if (((npite == obj))){
					HX_STACK_LINE(7630)
					ret = true;
					HX_STACK_LINE(7631)
					break;
				}
				HX_STACK_LINE(7634)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(7638)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_has,return )

bool ZNPList_ZPP_GeomVert_obj::has( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::has","zpp_nape/util/Lists.hx",7607);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj *__this,::zpp_nape::geom::ZPP_GeomVert &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7608);
			{
				HX_STACK_LINE(7608)
				{
				}
				HX_STACK_LINE(7608)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7608)
				{
					HX_STACK_LINE(7608)
					ret = false;
					HX_STACK_LINE(7608)
					{
						HX_STACK_LINE(7608)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(7608)
						while(((cx_ite != null()))){
							HX_STACK_LINE(7608)
							::zpp_nape::geom::ZPP_GeomVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(7608)
							if (((npite == obj))){
								HX_STACK_LINE(7608)
								ret = true;
								HX_STACK_LINE(7608)
								break;
							}
							HX_STACK_LINE(7608)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(7608)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7607)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,has,return )

int ZNPList_ZPP_GeomVert_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::size","zpp_nape/util/Lists.hx",7604);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7604)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,size,return )

bool ZNPList_ZPP_GeomVert_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::empty","zpp_nape/util/Lists.hx",7599);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7599)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,empty,return )

Void ZNPList_ZPP_GeomVert_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::reverse","zpp_nape/util/Lists.hx",7584);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7585)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7586)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7587)
		while(((cur != null()))){
			HX_STACK_LINE(7588)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(7589)
			cur->next = pre;
			HX_STACK_LINE(7590)
			this->head = cur;
			HX_STACK_LINE(7591)
			pre = cur;
			HX_STACK_LINE(7592)
			cur = nx;
		}
		HX_STACK_LINE(7594)
		this->modified = true;
		HX_STACK_LINE(7595)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,reverse,(void))

Void ZNPList_ZPP_GeomVert_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_clear","zpp_nape/util/Lists.hx",7578);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7580)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(7580)
			{
			}
			HX_STACK_LINE(7580)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7580)
			this->head = ret->next;
			HX_STACK_LINE(7580)
			{
			}
			HX_STACK_LINE(7580)
			{
				HX_STACK_LINE(7580)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7580)
				{
				}
				HX_STACK_LINE(7580)
				o->elt = null();
				HX_STACK_LINE(7580)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(7580)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7580)
			if (((this->head == null()))){
				HX_STACK_LINE(7580)
				this->pushmod = true;
			}
			HX_STACK_LINE(7580)
			this->modified = true;
			HX_STACK_LINE(7580)
			(this->length)--;
		}
		HX_STACK_LINE(7581)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,inlined_clear,(void))

Void ZNPList_ZPP_GeomVert_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::clear","zpp_nape/util/Lists.hx",7573);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7574)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(7574)
			{
			}
			HX_STACK_LINE(7574)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7574)
			this->head = ret->next;
			HX_STACK_LINE(7574)
			{
			}
			HX_STACK_LINE(7574)
			{
				HX_STACK_LINE(7574)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7574)
				{
				}
				HX_STACK_LINE(7574)
				o->elt = null();
				HX_STACK_LINE(7574)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(7574)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7574)
			if (((this->head == null()))){
				HX_STACK_LINE(7574)
				this->pushmod = true;
			}
			HX_STACK_LINE(7574)
			this->modified = true;
			HX_STACK_LINE(7574)
			(this->length)--;
		}
		HX_STACK_LINE(7574)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_GeomVert pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::splice","zpp_nape/util/Lists.hx",7569);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(7570)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(7570)
		this->erase(pre);
	}
	HX_STACK_LINE(7571)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomVert_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_GeomVert pre){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_erase","zpp_nape/util/Lists.hx",7523);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(7524)
	{
	}
	HX_STACK_LINE(7532)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(7533)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7534)
	if (((pre == null()))){
		HX_STACK_LINE(7535)
		old = this->head;
		HX_STACK_LINE(7536)
		ret = old->next;
		HX_STACK_LINE(7537)
		this->head = ret;
		HX_STACK_LINE(7538)
		if (((this->head == null()))){
			HX_STACK_LINE(7538)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(7541)
		old = pre->next;
		HX_STACK_LINE(7542)
		ret = old->next;
		HX_STACK_LINE(7543)
		pre->next = ret;
		HX_STACK_LINE(7544)
		if (((ret == null()))){
			HX_STACK_LINE(7544)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(7546)
	{
	}
	HX_STACK_LINE(7547)
	{
		HX_STACK_LINE(7548)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(7549)
		{
		}
		HX_STACK_LINE(7557)
		o->elt = null();
		HX_STACK_LINE(7558)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
		HX_STACK_LINE(7559)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(7564)
	this->modified = true;
	HX_STACK_LINE(7565)
	(this->length)--;
	HX_STACK_LINE(7566)
	this->pushmod = true;
	HX_STACK_LINE(7567)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_GeomVert pre){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::erase","zpp_nape/util/Lists.hx",7518);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomVert Block( ::zpp_nape::util::ZNPNode_ZPP_GeomVert &pre,::zpp_nape::util::ZNPList_ZPP_GeomVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7519);
			{
				HX_STACK_LINE(7519)
				{
				}
				HX_STACK_LINE(7519)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7519)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7519)
				if (((pre == null()))){
					HX_STACK_LINE(7519)
					old = __this->head;
					HX_STACK_LINE(7519)
					ret = old->next;
					HX_STACK_LINE(7519)
					__this->head = ret;
					HX_STACK_LINE(7519)
					if (((__this->head == null()))){
						HX_STACK_LINE(7519)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7519)
					old = pre->next;
					HX_STACK_LINE(7519)
					ret = old->next;
					HX_STACK_LINE(7519)
					pre->next = ret;
					HX_STACK_LINE(7519)
					if (((ret == null()))){
						HX_STACK_LINE(7519)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(7519)
				{
				}
				HX_STACK_LINE(7519)
				{
					HX_STACK_LINE(7519)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7519)
					{
					}
					HX_STACK_LINE(7519)
					o->elt = null();
					HX_STACK_LINE(7519)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
					HX_STACK_LINE(7519)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7519)
				__this->modified = true;
				HX_STACK_LINE(7519)
				(__this->length)--;
				HX_STACK_LINE(7519)
				__this->pushmod = true;
				HX_STACK_LINE(7519)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7518)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,erase,return )

bool ZNPList_ZPP_GeomVert_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_try_remove","zpp_nape/util/Lists.hx",7495);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7496)
	{
	}
	HX_STACK_LINE(7504)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7505)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7506)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7507)
	while(((cur != null()))){
		HX_STACK_LINE(7508)
		if (((cur->elt == obj))){
			HX_STACK_LINE(7509)
			{
				HX_STACK_LINE(7509)
				{
				}
				HX_STACK_LINE(7509)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7509)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(7509)
				if (((pre == null()))){
					HX_STACK_LINE(7509)
					old = this->head;
					HX_STACK_LINE(7509)
					ret1 = old->next;
					HX_STACK_LINE(7509)
					this->head = ret1;
					HX_STACK_LINE(7509)
					if (((this->head == null()))){
						HX_STACK_LINE(7509)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7509)
					old = pre->next;
					HX_STACK_LINE(7509)
					ret1 = old->next;
					HX_STACK_LINE(7509)
					pre->next = ret1;
					HX_STACK_LINE(7509)
					if (((ret1 == null()))){
						HX_STACK_LINE(7509)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(7509)
				{
				}
				HX_STACK_LINE(7509)
				{
					HX_STACK_LINE(7509)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7509)
					{
					}
					HX_STACK_LINE(7509)
					o->elt = null();
					HX_STACK_LINE(7509)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
					HX_STACK_LINE(7509)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7509)
				this->modified = true;
				HX_STACK_LINE(7509)
				(this->length)--;
				HX_STACK_LINE(7509)
				this->pushmod = true;
				HX_STACK_LINE(7509)
				ret1;
			}
			HX_STACK_LINE(7510)
			ret = true;
			HX_STACK_LINE(7511)
			break;
		}
		HX_STACK_LINE(7513)
		pre = cur;
		HX_STACK_LINE(7514)
		cur = cur->next;
	}
	HX_STACK_LINE(7516)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_try_remove,return )

Void ZNPList_ZPP_GeomVert_obj::inlined_remove( ::zpp_nape::geom::ZPP_GeomVert obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_remove","zpp_nape/util/Lists.hx",7482);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(7483)
		{
		}
		HX_STACK_LINE(7491)
		{
			HX_STACK_LINE(7491)
			{
			}
			HX_STACK_LINE(7491)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(7491)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(7491)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7491)
			while(((cur != null()))){
				HX_STACK_LINE(7491)
				if (((cur->elt == obj))){
					HX_STACK_LINE(7491)
					{
						HX_STACK_LINE(7491)
						{
						}
						HX_STACK_LINE(7491)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(7491)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(7491)
						if (((pre == null()))){
							HX_STACK_LINE(7491)
							old = this->head;
							HX_STACK_LINE(7491)
							ret1 = old->next;
							HX_STACK_LINE(7491)
							this->head = ret1;
							HX_STACK_LINE(7491)
							if (((this->head == null()))){
								HX_STACK_LINE(7491)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(7491)
							old = pre->next;
							HX_STACK_LINE(7491)
							ret1 = old->next;
							HX_STACK_LINE(7491)
							pre->next = ret1;
							HX_STACK_LINE(7491)
							if (((ret1 == null()))){
								HX_STACK_LINE(7491)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(7491)
						{
						}
						HX_STACK_LINE(7491)
						{
							HX_STACK_LINE(7491)
							::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(7491)
							{
							}
							HX_STACK_LINE(7491)
							o->elt = null();
							HX_STACK_LINE(7491)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
							HX_STACK_LINE(7491)
							::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(7491)
						this->modified = true;
						HX_STACK_LINE(7491)
						(this->length)--;
						HX_STACK_LINE(7491)
						this->pushmod = true;
						HX_STACK_LINE(7491)
						ret1;
					}
					HX_STACK_LINE(7491)
					ret = true;
					HX_STACK_LINE(7491)
					break;
				}
				HX_STACK_LINE(7491)
				pre = cur;
				HX_STACK_LINE(7491)
				cur = cur->next;
			}
			HX_STACK_LINE(7491)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_remove,(void))

bool ZNPList_ZPP_GeomVert_obj::try_remove( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::try_remove","zpp_nape/util/Lists.hx",7457);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7458)
	{
	}
	HX_STACK_LINE(7466)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7467)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7468)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7469)
	while(((cur != null()))){
		HX_STACK_LINE(7470)
		if (((cur->elt == obj))){
			HX_STACK_LINE(7471)
			this->erase(pre);
			HX_STACK_LINE(7472)
			ret = true;
			HX_STACK_LINE(7473)
			break;
		}
		HX_STACK_LINE(7475)
		pre = cur;
		HX_STACK_LINE(7476)
		cur = cur->next;
	}
	HX_STACK_LINE(7478)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,try_remove,return )

Void ZNPList_ZPP_GeomVert_obj::remove( ::zpp_nape::geom::ZPP_GeomVert obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::remove","zpp_nape/util/Lists.hx",7446);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(7447)
		{
		}
		HX_STACK_LINE(7455)
		{
			HX_STACK_LINE(7455)
			{
			}
			HX_STACK_LINE(7455)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(7455)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(7455)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7455)
			while(((cur != null()))){
				HX_STACK_LINE(7455)
				if (((cur->elt == obj))){
					HX_STACK_LINE(7455)
					{
						HX_STACK_LINE(7455)
						{
						}
						HX_STACK_LINE(7455)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(7455)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(7455)
						if (((pre == null()))){
							HX_STACK_LINE(7455)
							old = this->head;
							HX_STACK_LINE(7455)
							ret1 = old->next;
							HX_STACK_LINE(7455)
							this->head = ret1;
							HX_STACK_LINE(7455)
							if (((this->head == null()))){
								HX_STACK_LINE(7455)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(7455)
							old = pre->next;
							HX_STACK_LINE(7455)
							ret1 = old->next;
							HX_STACK_LINE(7455)
							pre->next = ret1;
							HX_STACK_LINE(7455)
							if (((ret1 == null()))){
								HX_STACK_LINE(7455)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(7455)
						{
						}
						HX_STACK_LINE(7455)
						{
							HX_STACK_LINE(7455)
							::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(7455)
							{
							}
							HX_STACK_LINE(7455)
							o->elt = null();
							HX_STACK_LINE(7455)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
							HX_STACK_LINE(7455)
							::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(7455)
						this->modified = true;
						HX_STACK_LINE(7455)
						(this->length)--;
						HX_STACK_LINE(7455)
						this->pushmod = true;
						HX_STACK_LINE(7455)
						ret1;
					}
					HX_STACK_LINE(7455)
					ret = true;
					HX_STACK_LINE(7455)
					break;
				}
				HX_STACK_LINE(7455)
				pre = cur;
				HX_STACK_LINE(7455)
				cur = cur->next;
			}
			HX_STACK_LINE(7455)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,remove,(void))

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_pop_unsafe","zpp_nape/util/Lists.hx",7433);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7434)
	{
	}
	HX_STACK_LINE(7442)
	::zpp_nape::geom::ZPP_GeomVert ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7443)
	this->pop();
	HX_STACK_LINE(7444)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::pop_unsafe","zpp_nape/util/Lists.hx",7428);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7429);
			{
				HX_STACK_LINE(7429)
				{
				}
				HX_STACK_LINE(7429)
				::zpp_nape::geom::ZPP_GeomVert ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7429)
				__this->pop();
				HX_STACK_LINE(7429)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7428)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,pop_unsafe,return )

Void ZNPList_ZPP_GeomVert_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_pop","zpp_nape/util/Lists.hx",7395);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7396)
		{
		}
		HX_STACK_LINE(7404)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7405)
		this->head = ret->next;
		HX_STACK_LINE(7406)
		{
		}
		HX_STACK_LINE(7407)
		{
			HX_STACK_LINE(7408)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7409)
			{
			}
			HX_STACK_LINE(7417)
			o->elt = null();
			HX_STACK_LINE(7418)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(7419)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7424)
		if (((this->head == null()))){
			HX_STACK_LINE(7424)
			this->pushmod = true;
		}
		HX_STACK_LINE(7425)
		this->modified = true;
		HX_STACK_LINE(7426)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,inlined_pop,(void))

Void ZNPList_ZPP_GeomVert_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::pop","zpp_nape/util/Lists.hx",7390);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7391)
		{
		}
		HX_STACK_LINE(7391)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7391)
		this->head = ret->next;
		HX_STACK_LINE(7391)
		{
		}
		HX_STACK_LINE(7391)
		{
			HX_STACK_LINE(7391)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7391)
			{
			}
			HX_STACK_LINE(7391)
			o->elt = null();
			HX_STACK_LINE(7391)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(7391)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7391)
		if (((this->head == null()))){
			HX_STACK_LINE(7391)
			this->pushmod = true;
		}
		HX_STACK_LINE(7391)
		this->modified = true;
		HX_STACK_LINE(7391)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_GeomVert cur,::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_insert","zpp_nape/util/Lists.hx",7347);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(7348)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7356);
			{
				HX_STACK_LINE(7357)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7358)
				{
					HX_STACK_LINE(7359)
					if (((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(7359)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();
					}
					else{
						HX_STACK_LINE(7366)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
						HX_STACK_LINE(7367)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
						HX_STACK_LINE(7368)
						ret->next = null();
					}
					HX_STACK_LINE(7373)
					Dynamic();
				}
				HX_STACK_LINE(7375)
				ret->elt = o;
				HX_STACK_LINE(7376)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7356)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7378)
	if (((cur == null()))){
		HX_STACK_LINE(7379)
		temp->next = this->head;
		HX_STACK_LINE(7380)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(7383)
		temp->next = cur->next;
		HX_STACK_LINE(7384)
		cur->next = temp;
	}
	HX_STACK_LINE(7386)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(7387)
	(this->length)++;
	HX_STACK_LINE(7388)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomVert_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_GeomVert cur,::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::insert","zpp_nape/util/Lists.hx",7342);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomVert Block( ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj *__this,::zpp_nape::geom::ZPP_GeomVert &o,::zpp_nape::util::ZNPNode_ZPP_GeomVert &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7343);
			{
				HX_STACK_LINE(7343)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7343);
						{
							HX_STACK_LINE(7343)
							::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(7343)
							{
								HX_STACK_LINE(7343)
								if (((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(7343)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();
								}
								else{
									HX_STACK_LINE(7343)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(7343)
									::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(7343)
									ret->next = null();
								}
								HX_STACK_LINE(7343)
								Dynamic();
							}
							HX_STACK_LINE(7343)
							ret->elt = o;
							HX_STACK_LINE(7343)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(7343)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(7343)
				if (((cur == null()))){
					HX_STACK_LINE(7343)
					temp->next = __this->head;
					HX_STACK_LINE(7343)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(7343)
					temp->next = cur->next;
					HX_STACK_LINE(7343)
					cur->next = temp;
				}
				HX_STACK_LINE(7343)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(7343)
				(__this->length)++;
				HX_STACK_LINE(7343)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(7342)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomVert_obj,insert,return )

Void ZNPList_ZPP_GeomVert_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_GeomVert x){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::addAll","zpp_nape/util/Lists.hx",7324);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(7325)
		{
		}
		HX_STACK_LINE(7333)
		{
			HX_STACK_LINE(7334)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(7335)
			while(((cx_ite != null()))){
				HX_STACK_LINE(7336)
				::zpp_nape::geom::ZPP_GeomVert i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(7337)
				this->add(i);
				HX_STACK_LINE(7338)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,addAll,(void))

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_add( ::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_add","zpp_nape/util/Lists.hx",7287);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(7288)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7296);
			{
				HX_STACK_LINE(7297)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7298)
				{
					HX_STACK_LINE(7299)
					if (((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(7299)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();
					}
					else{
						HX_STACK_LINE(7306)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
						HX_STACK_LINE(7307)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
						HX_STACK_LINE(7308)
						ret->next = null();
					}
					HX_STACK_LINE(7313)
					Dynamic();
				}
				HX_STACK_LINE(7315)
				ret->elt = o;
				HX_STACK_LINE(7316)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7296)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7318)
	temp->next = this->head;
	HX_STACK_LINE(7319)
	this->head = temp;
	HX_STACK_LINE(7320)
	this->modified = true;
	HX_STACK_LINE(7321)
	(this->length)++;
	HX_STACK_LINE(7322)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_add,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::add( ::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::add","zpp_nape/util/Lists.hx",7282);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &o,::zpp_nape::util::ZNPList_ZPP_GeomVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7283);
			{
				HX_STACK_LINE(7283)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7283);
						{
							HX_STACK_LINE(7283)
							::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(7283)
							{
								HX_STACK_LINE(7283)
								if (((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(7283)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();
								}
								else{
									HX_STACK_LINE(7283)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(7283)
									::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(7283)
									ret->next = null();
								}
								HX_STACK_LINE(7283)
								Dynamic();
							}
							HX_STACK_LINE(7283)
							ret->elt = o;
							HX_STACK_LINE(7283)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(7283)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(7283)
				temp->next = __this->head;
				HX_STACK_LINE(7283)
				__this->head = temp;
				HX_STACK_LINE(7283)
				__this->modified = true;
				HX_STACK_LINE(7283)
				(__this->length)++;
				HX_STACK_LINE(7283)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(7282)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,add,return )

Void ZNPList_ZPP_GeomVert_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_GeomVert i){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::setbegin","zpp_nape/util/Lists.hx",7277);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(7278)
		this->head = i;
		HX_STACK_LINE(7279)
		this->modified = true;
		HX_STACK_LINE(7280)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::begin","zpp_nape/util/Lists.hx",7269);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7269)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,begin,return )


ZNPList_ZPP_GeomVert_obj::ZNPList_ZPP_GeomVert_obj()
{
}

void ZNPList_ZPP_GeomVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_GeomVert);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_GeomVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_GeomVert_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_GeomVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_GeomVert >(); return inValue; }
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

void ZNPList_ZPP_GeomVert_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_GeomVert_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_GeomVert_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_GeomVert_obj::__mClass;

void ZNPList_ZPP_GeomVert_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_GeomVert"), hx::TCanCast< ZNPList_ZPP_GeomVert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_GeomVert_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
