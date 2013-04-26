#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomPoly
#include <zpp_nape/util/ZNPList_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomPoly
#include <zpp_nape/util/ZNPNode_ZPP_GeomPoly.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_GeomPoly_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::new","zpp_nape/util/Lists.hx",13936);
{
	HX_STACK_LINE(13946)
	this->length = (int)0;
	HX_STACK_LINE(13945)
	this->pushmod = false;
	HX_STACK_LINE(13944)
	this->modified = false;
	HX_STACK_LINE(13937)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_GeomPoly_obj::~ZNPList_ZPP_GeomPoly_obj() { }

Dynamic ZNPList_ZPP_GeomPoly_obj::__CreateEmpty() { return  new ZNPList_ZPP_GeomPoly_obj; }
hx::ObjectPtr< ZNPList_ZPP_GeomPoly_obj > ZNPList_ZPP_GeomPoly_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_GeomPoly_obj > result = new ZNPList_ZPP_GeomPoly_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_GeomPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_GeomPoly_obj > result = new ZNPList_ZPP_GeomPoly_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::at","zpp_nape/util/Lists.hx",14339);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(14340)
	{
	}
	HX_STACK_LINE(14348)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(14349)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_GeomPoly(it->elt) : ::zpp_nape::geom::ZPP_GeomPoly(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::iterator_at","zpp_nape/util/Lists.hx",14326);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(14327)
	{
	}
	HX_STACK_LINE(14335)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14336)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(14336)
		ret = ret->next;
	}
	HX_STACK_LINE(14337)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,iterator_at,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::back","zpp_nape/util/Lists.hx",14317);
	HX_STACK_THIS(this);
	HX_STACK_LINE(14318)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14319)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(14320)
	while(((cur != null()))){
		HX_STACK_LINE(14321)
		ret = cur;
		HX_STACK_LINE(14322)
		cur = cur->next;
	}
	HX_STACK_LINE(14324)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,back,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::front","zpp_nape/util/Lists.hx",14314);
	HX_STACK_THIS(this);
	HX_STACK_LINE(14314)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,front,return )

bool ZNPList_ZPP_GeomPoly_obj::inlined_has( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_has","zpp_nape/util/Lists.hx",14284);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(14285)
	{
	}
	HX_STACK_LINE(14293)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14294)
	{
		HX_STACK_LINE(14295)
		ret = false;
		HX_STACK_LINE(14296)
		{
			HX_STACK_LINE(14297)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(14298)
			while(((cx_ite != null()))){
				HX_STACK_LINE(14299)
				::zpp_nape::geom::ZPP_GeomPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(14300)
				if (((npite == obj))){
					HX_STACK_LINE(14302)
					ret = true;
					HX_STACK_LINE(14303)
					break;
				}
				HX_STACK_LINE(14306)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(14310)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_has,return )

bool ZNPList_ZPP_GeomPoly_obj::has( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::has","zpp_nape/util/Lists.hx",14279);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj *__this,::zpp_nape::geom::ZPP_GeomPoly &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",14280);
			{
				HX_STACK_LINE(14280)
				{
				}
				HX_STACK_LINE(14280)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(14280)
				{
					HX_STACK_LINE(14280)
					ret = false;
					HX_STACK_LINE(14280)
					{
						HX_STACK_LINE(14280)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(14280)
						while(((cx_ite != null()))){
							HX_STACK_LINE(14280)
							::zpp_nape::geom::ZPP_GeomPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(14280)
							if (((npite == obj))){
								HX_STACK_LINE(14280)
								ret = true;
								HX_STACK_LINE(14280)
								break;
							}
							HX_STACK_LINE(14280)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(14280)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(14279)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,has,return )

int ZNPList_ZPP_GeomPoly_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::size","zpp_nape/util/Lists.hx",14276);
	HX_STACK_THIS(this);
	HX_STACK_LINE(14276)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,size,return )

bool ZNPList_ZPP_GeomPoly_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::empty","zpp_nape/util/Lists.hx",14271);
	HX_STACK_THIS(this);
	HX_STACK_LINE(14271)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,empty,return )

Void ZNPList_ZPP_GeomPoly_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::reverse","zpp_nape/util/Lists.hx",14256);
		HX_STACK_THIS(this);
		HX_STACK_LINE(14257)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(14258)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(14259)
		while(((cur != null()))){
			HX_STACK_LINE(14260)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(14261)
			cur->next = pre;
			HX_STACK_LINE(14262)
			this->head = cur;
			HX_STACK_LINE(14263)
			pre = cur;
			HX_STACK_LINE(14264)
			cur = nx;
		}
		HX_STACK_LINE(14266)
		this->modified = true;
		HX_STACK_LINE(14267)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,reverse,(void))

Void ZNPList_ZPP_GeomPoly_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_clear","zpp_nape/util/Lists.hx",14250);
		HX_STACK_THIS(this);
		HX_STACK_LINE(14252)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(14252)
			{
			}
			HX_STACK_LINE(14252)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(14252)
			this->head = ret->next;
			HX_STACK_LINE(14252)
			{
			}
			HX_STACK_LINE(14252)
			{
				HX_STACK_LINE(14252)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(14252)
				{
				}
				HX_STACK_LINE(14252)
				o->elt = null();
				HX_STACK_LINE(14252)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
				HX_STACK_LINE(14252)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(14252)
			if (((this->head == null()))){
				HX_STACK_LINE(14252)
				this->pushmod = true;
			}
			HX_STACK_LINE(14252)
			this->modified = true;
			HX_STACK_LINE(14252)
			(this->length)--;
		}
		HX_STACK_LINE(14253)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,inlined_clear,(void))

Void ZNPList_ZPP_GeomPoly_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::clear","zpp_nape/util/Lists.hx",14245);
		HX_STACK_THIS(this);
		HX_STACK_LINE(14246)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(14246)
			{
			}
			HX_STACK_LINE(14246)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(14246)
			this->head = ret->next;
			HX_STACK_LINE(14246)
			{
			}
			HX_STACK_LINE(14246)
			{
				HX_STACK_LINE(14246)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(14246)
				{
				}
				HX_STACK_LINE(14246)
				o->elt = null();
				HX_STACK_LINE(14246)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
				HX_STACK_LINE(14246)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(14246)
			if (((this->head == null()))){
				HX_STACK_LINE(14246)
				this->pushmod = true;
			}
			HX_STACK_LINE(14246)
			this->modified = true;
			HX_STACK_LINE(14246)
			(this->length)--;
		}
		HX_STACK_LINE(14246)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::splice","zpp_nape/util/Lists.hx",14241);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(14242)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(14242)
		this->erase(pre);
	}
	HX_STACK_LINE(14243)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomPoly_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_erase","zpp_nape/util/Lists.hx",14195);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(14196)
	{
	}
	HX_STACK_LINE(14204)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(14205)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14206)
	if (((pre == null()))){
		HX_STACK_LINE(14207)
		old = this->head;
		HX_STACK_LINE(14208)
		ret = old->next;
		HX_STACK_LINE(14209)
		this->head = ret;
		HX_STACK_LINE(14210)
		if (((this->head == null()))){
			HX_STACK_LINE(14210)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(14213)
		old = pre->next;
		HX_STACK_LINE(14214)
		ret = old->next;
		HX_STACK_LINE(14215)
		pre->next = ret;
		HX_STACK_LINE(14216)
		if (((ret == null()))){
			HX_STACK_LINE(14216)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(14218)
	{
	}
	HX_STACK_LINE(14219)
	{
		HX_STACK_LINE(14220)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(14221)
		{
		}
		HX_STACK_LINE(14229)
		o->elt = null();
		HX_STACK_LINE(14230)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
		HX_STACK_LINE(14231)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
	}
	HX_STACK_LINE(14236)
	this->modified = true;
	HX_STACK_LINE(14237)
	(this->length)--;
	HX_STACK_LINE(14238)
	this->pushmod = true;
	HX_STACK_LINE(14239)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::erase","zpp_nape/util/Lists.hx",14190);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomPoly Block( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly &pre,::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",14191);
			{
				HX_STACK_LINE(14191)
				{
				}
				HX_STACK_LINE(14191)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(14191)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(14191)
				if (((pre == null()))){
					HX_STACK_LINE(14191)
					old = __this->head;
					HX_STACK_LINE(14191)
					ret = old->next;
					HX_STACK_LINE(14191)
					__this->head = ret;
					HX_STACK_LINE(14191)
					if (((__this->head == null()))){
						HX_STACK_LINE(14191)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(14191)
					old = pre->next;
					HX_STACK_LINE(14191)
					ret = old->next;
					HX_STACK_LINE(14191)
					pre->next = ret;
					HX_STACK_LINE(14191)
					if (((ret == null()))){
						HX_STACK_LINE(14191)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(14191)
				{
				}
				HX_STACK_LINE(14191)
				{
					HX_STACK_LINE(14191)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(14191)
					{
					}
					HX_STACK_LINE(14191)
					o->elt = null();
					HX_STACK_LINE(14191)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
					HX_STACK_LINE(14191)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
				}
				HX_STACK_LINE(14191)
				__this->modified = true;
				HX_STACK_LINE(14191)
				(__this->length)--;
				HX_STACK_LINE(14191)
				__this->pushmod = true;
				HX_STACK_LINE(14191)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(14190)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,erase,return )

bool ZNPList_ZPP_GeomPoly_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_try_remove","zpp_nape/util/Lists.hx",14167);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(14168)
	{
	}
	HX_STACK_LINE(14176)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(14177)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(14178)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14179)
	while(((cur != null()))){
		HX_STACK_LINE(14180)
		if (((cur->elt == obj))){
			HX_STACK_LINE(14181)
			{
				HX_STACK_LINE(14181)
				{
				}
				HX_STACK_LINE(14181)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(14181)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(14181)
				if (((pre == null()))){
					HX_STACK_LINE(14181)
					old = this->head;
					HX_STACK_LINE(14181)
					ret1 = old->next;
					HX_STACK_LINE(14181)
					this->head = ret1;
					HX_STACK_LINE(14181)
					if (((this->head == null()))){
						HX_STACK_LINE(14181)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(14181)
					old = pre->next;
					HX_STACK_LINE(14181)
					ret1 = old->next;
					HX_STACK_LINE(14181)
					pre->next = ret1;
					HX_STACK_LINE(14181)
					if (((ret1 == null()))){
						HX_STACK_LINE(14181)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(14181)
				{
				}
				HX_STACK_LINE(14181)
				{
					HX_STACK_LINE(14181)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(14181)
					{
					}
					HX_STACK_LINE(14181)
					o->elt = null();
					HX_STACK_LINE(14181)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
					HX_STACK_LINE(14181)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
				}
				HX_STACK_LINE(14181)
				this->modified = true;
				HX_STACK_LINE(14181)
				(this->length)--;
				HX_STACK_LINE(14181)
				this->pushmod = true;
				HX_STACK_LINE(14181)
				ret1;
			}
			HX_STACK_LINE(14182)
			ret = true;
			HX_STACK_LINE(14183)
			break;
		}
		HX_STACK_LINE(14185)
		pre = cur;
		HX_STACK_LINE(14186)
		cur = cur->next;
	}
	HX_STACK_LINE(14188)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_try_remove,return )

Void ZNPList_ZPP_GeomPoly_obj::inlined_remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_remove","zpp_nape/util/Lists.hx",14154);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(14155)
		{
		}
		HX_STACK_LINE(14163)
		{
			HX_STACK_LINE(14163)
			{
			}
			HX_STACK_LINE(14163)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(14163)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(14163)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(14163)
			while(((cur != null()))){
				HX_STACK_LINE(14163)
				if (((cur->elt == obj))){
					HX_STACK_LINE(14163)
					{
						HX_STACK_LINE(14163)
						{
						}
						HX_STACK_LINE(14163)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(14163)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(14163)
						if (((pre == null()))){
							HX_STACK_LINE(14163)
							old = this->head;
							HX_STACK_LINE(14163)
							ret1 = old->next;
							HX_STACK_LINE(14163)
							this->head = ret1;
							HX_STACK_LINE(14163)
							if (((this->head == null()))){
								HX_STACK_LINE(14163)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(14163)
							old = pre->next;
							HX_STACK_LINE(14163)
							ret1 = old->next;
							HX_STACK_LINE(14163)
							pre->next = ret1;
							HX_STACK_LINE(14163)
							if (((ret1 == null()))){
								HX_STACK_LINE(14163)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(14163)
						{
						}
						HX_STACK_LINE(14163)
						{
							HX_STACK_LINE(14163)
							::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(14163)
							{
							}
							HX_STACK_LINE(14163)
							o->elt = null();
							HX_STACK_LINE(14163)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
							HX_STACK_LINE(14163)
							::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
						}
						HX_STACK_LINE(14163)
						this->modified = true;
						HX_STACK_LINE(14163)
						(this->length)--;
						HX_STACK_LINE(14163)
						this->pushmod = true;
						HX_STACK_LINE(14163)
						ret1;
					}
					HX_STACK_LINE(14163)
					ret = true;
					HX_STACK_LINE(14163)
					break;
				}
				HX_STACK_LINE(14163)
				pre = cur;
				HX_STACK_LINE(14163)
				cur = cur->next;
			}
			HX_STACK_LINE(14163)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_remove,(void))

bool ZNPList_ZPP_GeomPoly_obj::try_remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::try_remove","zpp_nape/util/Lists.hx",14129);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(14130)
	{
	}
	HX_STACK_LINE(14138)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(14139)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(14140)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14141)
	while(((cur != null()))){
		HX_STACK_LINE(14142)
		if (((cur->elt == obj))){
			HX_STACK_LINE(14143)
			this->erase(pre);
			HX_STACK_LINE(14144)
			ret = true;
			HX_STACK_LINE(14145)
			break;
		}
		HX_STACK_LINE(14147)
		pre = cur;
		HX_STACK_LINE(14148)
		cur = cur->next;
	}
	HX_STACK_LINE(14150)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,try_remove,return )

Void ZNPList_ZPP_GeomPoly_obj::remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::remove","zpp_nape/util/Lists.hx",14118);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(14119)
		{
		}
		HX_STACK_LINE(14127)
		{
			HX_STACK_LINE(14127)
			{
			}
			HX_STACK_LINE(14127)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(14127)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(14127)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(14127)
			while(((cur != null()))){
				HX_STACK_LINE(14127)
				if (((cur->elt == obj))){
					HX_STACK_LINE(14127)
					{
						HX_STACK_LINE(14127)
						{
						}
						HX_STACK_LINE(14127)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(14127)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(14127)
						if (((pre == null()))){
							HX_STACK_LINE(14127)
							old = this->head;
							HX_STACK_LINE(14127)
							ret1 = old->next;
							HX_STACK_LINE(14127)
							this->head = ret1;
							HX_STACK_LINE(14127)
							if (((this->head == null()))){
								HX_STACK_LINE(14127)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(14127)
							old = pre->next;
							HX_STACK_LINE(14127)
							ret1 = old->next;
							HX_STACK_LINE(14127)
							pre->next = ret1;
							HX_STACK_LINE(14127)
							if (((ret1 == null()))){
								HX_STACK_LINE(14127)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(14127)
						{
						}
						HX_STACK_LINE(14127)
						{
							HX_STACK_LINE(14127)
							::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(14127)
							{
							}
							HX_STACK_LINE(14127)
							o->elt = null();
							HX_STACK_LINE(14127)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
							HX_STACK_LINE(14127)
							::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
						}
						HX_STACK_LINE(14127)
						this->modified = true;
						HX_STACK_LINE(14127)
						(this->length)--;
						HX_STACK_LINE(14127)
						this->pushmod = true;
						HX_STACK_LINE(14127)
						ret1;
					}
					HX_STACK_LINE(14127)
					ret = true;
					HX_STACK_LINE(14127)
					break;
				}
				HX_STACK_LINE(14127)
				pre = cur;
				HX_STACK_LINE(14127)
				cur = cur->next;
			}
			HX_STACK_LINE(14127)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,remove,(void))

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_pop_unsafe","zpp_nape/util/Lists.hx",14105);
	HX_STACK_THIS(this);
	HX_STACK_LINE(14106)
	{
	}
	HX_STACK_LINE(14114)
	::zpp_nape::geom::ZPP_GeomPoly ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14115)
	this->pop();
	HX_STACK_LINE(14116)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::pop_unsafe","zpp_nape/util/Lists.hx",14100);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_GeomPoly Block( ::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",14101);
			{
				HX_STACK_LINE(14101)
				{
				}
				HX_STACK_LINE(14101)
				::zpp_nape::geom::ZPP_GeomPoly ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(14101)
				__this->pop();
				HX_STACK_LINE(14101)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(14100)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,pop_unsafe,return )

Void ZNPList_ZPP_GeomPoly_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_pop","zpp_nape/util/Lists.hx",14067);
		HX_STACK_THIS(this);
		HX_STACK_LINE(14068)
		{
		}
		HX_STACK_LINE(14076)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14077)
		this->head = ret->next;
		HX_STACK_LINE(14078)
		{
		}
		HX_STACK_LINE(14079)
		{
			HX_STACK_LINE(14080)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(14081)
			{
			}
			HX_STACK_LINE(14089)
			o->elt = null();
			HX_STACK_LINE(14090)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
			HX_STACK_LINE(14091)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(14096)
		if (((this->head == null()))){
			HX_STACK_LINE(14096)
			this->pushmod = true;
		}
		HX_STACK_LINE(14097)
		this->modified = true;
		HX_STACK_LINE(14098)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,inlined_pop,(void))

Void ZNPList_ZPP_GeomPoly_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::pop","zpp_nape/util/Lists.hx",14062);
		HX_STACK_THIS(this);
		HX_STACK_LINE(14063)
		{
		}
		HX_STACK_LINE(14063)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14063)
		this->head = ret->next;
		HX_STACK_LINE(14063)
		{
		}
		HX_STACK_LINE(14063)
		{
			HX_STACK_LINE(14063)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(14063)
			{
			}
			HX_STACK_LINE(14063)
			o->elt = null();
			HX_STACK_LINE(14063)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
			HX_STACK_LINE(14063)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(14063)
		if (((this->head == null()))){
			HX_STACK_LINE(14063)
			this->pushmod = true;
		}
		HX_STACK_LINE(14063)
		this->modified = true;
		HX_STACK_LINE(14063)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur,::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_insert","zpp_nape/util/Lists.hx",14019);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(14020)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomPoly Block( ::zpp_nape::geom::ZPP_GeomPoly &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",14028);
			{
				HX_STACK_LINE(14029)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(14030)
				{
					HX_STACK_LINE(14031)
					if (((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool == null()))){
						HX_STACK_LINE(14031)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();
					}
					else{
						HX_STACK_LINE(14038)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
						HX_STACK_LINE(14039)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
						HX_STACK_LINE(14040)
						ret->next = null();
					}
					HX_STACK_LINE(14045)
					Dynamic();
				}
				HX_STACK_LINE(14047)
				ret->elt = o;
				HX_STACK_LINE(14048)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(14028)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(14050)
	if (((cur == null()))){
		HX_STACK_LINE(14051)
		temp->next = this->head;
		HX_STACK_LINE(14052)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(14055)
		temp->next = cur->next;
		HX_STACK_LINE(14056)
		cur->next = temp;
	}
	HX_STACK_LINE(14058)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(14059)
	(this->length)++;
	HX_STACK_LINE(14060)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomPoly_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur,::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::insert","zpp_nape/util/Lists.hx",14014);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomPoly Block( ::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj *__this,::zpp_nape::geom::ZPP_GeomPoly &o,::zpp_nape::util::ZNPNode_ZPP_GeomPoly &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",14015);
			{
				HX_STACK_LINE(14015)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_GeomPoly Block( ::zpp_nape::geom::ZPP_GeomPoly &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",14015);
						{
							HX_STACK_LINE(14015)
							::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(14015)
							{
								HX_STACK_LINE(14015)
								if (((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool == null()))){
									HX_STACK_LINE(14015)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();
								}
								else{
									HX_STACK_LINE(14015)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
									HX_STACK_LINE(14015)
									::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
									HX_STACK_LINE(14015)
									ret->next = null();
								}
								HX_STACK_LINE(14015)
								Dynamic();
							}
							HX_STACK_LINE(14015)
							ret->elt = o;
							HX_STACK_LINE(14015)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(14015)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(14015)
				if (((cur == null()))){
					HX_STACK_LINE(14015)
					temp->next = __this->head;
					HX_STACK_LINE(14015)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(14015)
					temp->next = cur->next;
					HX_STACK_LINE(14015)
					cur->next = temp;
				}
				HX_STACK_LINE(14015)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(14015)
				(__this->length)++;
				HX_STACK_LINE(14015)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(14014)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomPoly_obj,insert,return )

Void ZNPList_ZPP_GeomPoly_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_GeomPoly x){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::addAll","zpp_nape/util/Lists.hx",13996);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(13997)
		{
		}
		HX_STACK_LINE(14005)
		{
			HX_STACK_LINE(14006)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(14007)
			while(((cx_ite != null()))){
				HX_STACK_LINE(14008)
				::zpp_nape::geom::ZPP_GeomPoly i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(14009)
				this->add(i);
				HX_STACK_LINE(14010)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,addAll,(void))

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_add( ::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_add","zpp_nape/util/Lists.hx",13959);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(13960)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomPoly Block( ::zpp_nape::geom::ZPP_GeomPoly &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13968);
			{
				HX_STACK_LINE(13969)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13970)
				{
					HX_STACK_LINE(13971)
					if (((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool == null()))){
						HX_STACK_LINE(13971)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();
					}
					else{
						HX_STACK_LINE(13978)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
						HX_STACK_LINE(13979)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
						HX_STACK_LINE(13980)
						ret->next = null();
					}
					HX_STACK_LINE(13985)
					Dynamic();
				}
				HX_STACK_LINE(13987)
				ret->elt = o;
				HX_STACK_LINE(13988)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13968)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(13990)
	temp->next = this->head;
	HX_STACK_LINE(13991)
	this->head = temp;
	HX_STACK_LINE(13992)
	this->modified = true;
	HX_STACK_LINE(13993)
	(this->length)++;
	HX_STACK_LINE(13994)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_add,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::add( ::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::add","zpp_nape/util/Lists.hx",13954);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_GeomPoly Block( ::zpp_nape::geom::ZPP_GeomPoly &o,::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13955);
			{
				HX_STACK_LINE(13955)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_GeomPoly Block( ::zpp_nape::geom::ZPP_GeomPoly &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13955);
						{
							HX_STACK_LINE(13955)
							::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(13955)
							{
								HX_STACK_LINE(13955)
								if (((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool == null()))){
									HX_STACK_LINE(13955)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();
								}
								else{
									HX_STACK_LINE(13955)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
									HX_STACK_LINE(13955)
									::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
									HX_STACK_LINE(13955)
									ret->next = null();
								}
								HX_STACK_LINE(13955)
								Dynamic();
							}
							HX_STACK_LINE(13955)
							ret->elt = o;
							HX_STACK_LINE(13955)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(13955)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(13955)
				temp->next = __this->head;
				HX_STACK_LINE(13955)
				__this->head = temp;
				HX_STACK_LINE(13955)
				__this->modified = true;
				HX_STACK_LINE(13955)
				(__this->length)++;
				HX_STACK_LINE(13955)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(13954)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,add,return )

Void ZNPList_ZPP_GeomPoly_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly i){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::setbegin","zpp_nape/util/Lists.hx",13949);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(13950)
		this->head = i;
		HX_STACK_LINE(13951)
		this->modified = true;
		HX_STACK_LINE(13952)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::begin","zpp_nape/util/Lists.hx",13941);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13941)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,begin,return )


ZNPList_ZPP_GeomPoly_obj::ZNPList_ZPP_GeomPoly_obj()
{
}

void ZNPList_ZPP_GeomPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_GeomPoly);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_GeomPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_GeomPoly_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_GeomPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_GeomPoly >(); return inValue; }
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

void ZNPList_ZPP_GeomPoly_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_GeomPoly_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_GeomPoly_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_GeomPoly_obj::__mClass;

void ZNPList_ZPP_GeomPoly_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_GeomPoly"), hx::TCanCast< ZNPList_ZPP_GeomPoly_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_GeomPoly_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
