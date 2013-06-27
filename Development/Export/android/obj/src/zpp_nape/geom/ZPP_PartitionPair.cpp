#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionPair
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionPair
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_PartitionPair_obj::__construct()
{
HX_STACK_PUSH("ZPP_PartitionPair::new","zpp_nape/geom/Triangular.hx",174);
{
	HX_STACK_LINE(600)
	this->node = null();
	HX_STACK_LINE(566)
	this->di = (int)0;
	HX_STACK_LINE(565)
	this->id = (int)0;
	HX_STACK_LINE(564)
	this->b = null();
	HX_STACK_LINE(563)
	this->a = null();
	HX_STACK_LINE(213)
	this->length = (int)0;
	HX_STACK_LINE(212)
	this->pushmod = false;
	HX_STACK_LINE(211)
	this->modified = false;
	HX_STACK_LINE(210)
	this->_inuse = false;
	HX_STACK_LINE(199)
	this->next = null();
}
;
	return null();
}

ZPP_PartitionPair_obj::~ZPP_PartitionPair_obj() { }

Dynamic ZPP_PartitionPair_obj::__CreateEmpty() { return  new ZPP_PartitionPair_obj; }
hx::ObjectPtr< ZPP_PartitionPair_obj > ZPP_PartitionPair_obj::__new()
{  hx::ObjectPtr< ZPP_PartitionPair_obj > result = new ZPP_PartitionPair_obj();
	result->__construct();
	return result;}

Dynamic ZPP_PartitionPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PartitionPair_obj > result = new ZPP_PartitionPair_obj();
	result->__construct();
	return result;}

Void ZPP_PartitionPair_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_PartitionPair::alloc","zpp_nape/geom/Triangular.hx",562);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,alloc,(void))

Void ZPP_PartitionPair_obj::free( ){
{
		HX_STACK_PUSH("ZPP_PartitionPair::free","zpp_nape/geom/Triangular.hx",556);
		HX_STACK_THIS(this);
		HX_STACK_LINE(557)
		this->a = this->b = null();
		HX_STACK_LINE(558)
		this->node = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,free,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::at( int ind){
	HX_STACK_PUSH("ZPP_PartitionPair::at","zpp_nape/geom/Triangular.hx",542);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(551)
	::zpp_nape::geom::ZPP_PartitionPair it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(552)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_PartitionPair(it) : ::zpp_nape::geom::ZPP_PartitionPair(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,at,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZPP_PartitionPair::iterator_at","zpp_nape/geom/Triangular.hx",529);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(538)
	::zpp_nape::geom::ZPP_PartitionPair ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(539)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(539)
		ret = ret->next;
	}
	HX_STACK_LINE(540)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,iterator_at,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::back( ){
	HX_STACK_PUSH("ZPP_PartitionPair::back","zpp_nape/geom/Triangular.hx",520);
	HX_STACK_THIS(this);
	HX_STACK_LINE(521)
	::zpp_nape::geom::ZPP_PartitionPair ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(522)
	::zpp_nape::geom::ZPP_PartitionPair cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(523)
	while(((cur != null()))){
		HX_STACK_LINE(524)
		ret = cur;
		HX_STACK_LINE(525)
		cur = cur->next;
	}
	HX_STACK_LINE(527)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,back,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::front( ){
	HX_STACK_PUSH("ZPP_PartitionPair::front","zpp_nape/geom/Triangular.hx",517);
	HX_STACK_THIS(this);
	HX_STACK_LINE(517)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,front,return )

bool ZPP_PartitionPair_obj::inlined_has( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_PartitionPair::inlined_has","zpp_nape/geom/Triangular.hx",487);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(496)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(497)
	{
		HX_STACK_LINE(498)
		ret = false;
		HX_STACK_LINE(499)
		{
			HX_STACK_LINE(500)
			::zpp_nape::geom::ZPP_PartitionPair cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(501)
			while(((cx_ite != null()))){
				HX_STACK_LINE(502)
				::zpp_nape::geom::ZPP_PartitionPair npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(503)
				if (((npite == obj))){
					HX_STACK_LINE(505)
					ret = true;
					HX_STACK_LINE(506)
					break;
				}
				HX_STACK_LINE(509)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(513)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,inlined_has,return )

bool ZPP_PartitionPair_obj::has( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_PartitionPair::has","zpp_nape/geom/Triangular.hx",482);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::geom::ZPP_PartitionPair_obj *__this,::zpp_nape::geom::ZPP_PartitionPair &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",483);
			{
				HX_STACK_LINE(483)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(483)
				{
					HX_STACK_LINE(483)
					ret = false;
					HX_STACK_LINE(483)
					{
						HX_STACK_LINE(483)
						::zpp_nape::geom::ZPP_PartitionPair cx_ite = __this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(483)
						while(((cx_ite != null()))){
							HX_STACK_LINE(483)
							::zpp_nape::geom::ZPP_PartitionPair npite = cx_ite;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(483)
							if (((npite == obj))){
								HX_STACK_LINE(483)
								ret = true;
								HX_STACK_LINE(483)
								break;
							}
							HX_STACK_LINE(483)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(483)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(482)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,has,return )

int ZPP_PartitionPair_obj::size( ){
	HX_STACK_PUSH("ZPP_PartitionPair::size","zpp_nape/geom/Triangular.hx",479);
	HX_STACK_THIS(this);
	HX_STACK_LINE(479)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,size,return )

bool ZPP_PartitionPair_obj::empty( ){
	HX_STACK_PUSH("ZPP_PartitionPair::empty","zpp_nape/geom/Triangular.hx",474);
	HX_STACK_THIS(this);
	HX_STACK_LINE(474)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,empty,return )

Void ZPP_PartitionPair_obj::reverse( ){
{
		HX_STACK_PUSH("ZPP_PartitionPair::reverse","zpp_nape/geom/Triangular.hx",459);
		HX_STACK_THIS(this);
		HX_STACK_LINE(460)
		::zpp_nape::geom::ZPP_PartitionPair cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(461)
		::zpp_nape::geom::ZPP_PartitionPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(462)
		while(((cur != null()))){
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_PartitionPair nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(464)
			cur->next = pre;
			HX_STACK_LINE(465)
			this->next = cur;
			HX_STACK_LINE(466)
			pre = cur;
			HX_STACK_LINE(467)
			cur = nx;
		}
		HX_STACK_LINE(469)
		this->modified = true;
		HX_STACK_LINE(470)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,reverse,(void))

Void ZPP_PartitionPair_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZPP_PartitionPair::inlined_clear","zpp_nape/geom/Triangular.hx",453);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,inlined_clear,(void))

Void ZPP_PartitionPair_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_PartitionPair::clear","zpp_nape/geom/Triangular.hx",448);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,clear,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::splice( ::zpp_nape::geom::ZPP_PartitionPair pre,int n){
	HX_STACK_PUSH("ZPP_PartitionPair::splice","zpp_nape/geom/Triangular.hx",444);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(445)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(445)
		this->erase(pre);
	}
	HX_STACK_LINE(446)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionPair_obj,splice,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::inlined_erase( ::zpp_nape::geom::ZPP_PartitionPair pre){
	HX_STACK_PUSH("ZPP_PartitionPair::inlined_erase","zpp_nape/geom/Triangular.hx",412);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(421)
	::zpp_nape::geom::ZPP_PartitionPair old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(422)
	::zpp_nape::geom::ZPP_PartitionPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(423)
	if (((pre == null()))){
		HX_STACK_LINE(424)
		old = this->next;
		HX_STACK_LINE(425)
		ret = old->next;
		HX_STACK_LINE(426)
		this->next = ret;
		HX_STACK_LINE(427)
		if (((this->next == null()))){
			HX_STACK_LINE(427)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(430)
		old = pre->next;
		HX_STACK_LINE(431)
		ret = old->next;
		HX_STACK_LINE(432)
		pre->next = ret;
		HX_STACK_LINE(433)
		if (((ret == null()))){
			HX_STACK_LINE(433)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(435)
	old->_inuse = false;
	HX_STACK_LINE(439)
	this->modified = true;
	HX_STACK_LINE(440)
	(this->length)--;
	HX_STACK_LINE(441)
	this->pushmod = true;
	HX_STACK_LINE(442)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,inlined_erase,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::erase( ::zpp_nape::geom::ZPP_PartitionPair pre){
	HX_STACK_PUSH("ZPP_PartitionPair::erase","zpp_nape/geom/Triangular.hx",407);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionPair Block( ::zpp_nape::geom::ZPP_PartitionPair_obj *__this,::zpp_nape::geom::ZPP_PartitionPair &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",408);
			{
				HX_STACK_LINE(408)
				::zpp_nape::geom::ZPP_PartitionPair old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(408)
				::zpp_nape::geom::ZPP_PartitionPair ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(408)
				if (((pre == null()))){
					HX_STACK_LINE(408)
					old = __this->next;
					HX_STACK_LINE(408)
					ret = old->next;
					HX_STACK_LINE(408)
					__this->next = ret;
					HX_STACK_LINE(408)
					if (((__this->next == null()))){
						HX_STACK_LINE(408)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(408)
					old = pre->next;
					HX_STACK_LINE(408)
					ret = old->next;
					HX_STACK_LINE(408)
					pre->next = ret;
					HX_STACK_LINE(408)
					if (((ret == null()))){
						HX_STACK_LINE(408)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(408)
				old->_inuse = false;
				HX_STACK_LINE(408)
				__this->modified = true;
				HX_STACK_LINE(408)
				(__this->length)--;
				HX_STACK_LINE(408)
				__this->pushmod = true;
				HX_STACK_LINE(408)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(407)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,erase,return )

bool ZPP_PartitionPair_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_PartitionPair::inlined_try_remove","zpp_nape/geom/Triangular.hx",384);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(393)
	::zpp_nape::geom::ZPP_PartitionPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(394)
	::zpp_nape::geom::ZPP_PartitionPair cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(395)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(396)
	while(((cur != null()))){
		HX_STACK_LINE(397)
		if (((cur == obj))){
			HX_STACK_LINE(398)
			{
				HX_STACK_LINE(398)
				::zpp_nape::geom::ZPP_PartitionPair old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(398)
				::zpp_nape::geom::ZPP_PartitionPair ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(398)
				if (((pre == null()))){
					HX_STACK_LINE(398)
					old = this->next;
					HX_STACK_LINE(398)
					ret1 = old->next;
					HX_STACK_LINE(398)
					this->next = ret1;
					HX_STACK_LINE(398)
					if (((this->next == null()))){
						HX_STACK_LINE(398)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(398)
					old = pre->next;
					HX_STACK_LINE(398)
					ret1 = old->next;
					HX_STACK_LINE(398)
					pre->next = ret1;
					HX_STACK_LINE(398)
					if (((ret1 == null()))){
						HX_STACK_LINE(398)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(398)
				old->_inuse = false;
				HX_STACK_LINE(398)
				this->modified = true;
				HX_STACK_LINE(398)
				(this->length)--;
				HX_STACK_LINE(398)
				this->pushmod = true;
				HX_STACK_LINE(398)
				ret1;
			}
			HX_STACK_LINE(399)
			ret = true;
			HX_STACK_LINE(400)
			break;
		}
		HX_STACK_LINE(402)
		pre = cur;
		HX_STACK_LINE(403)
		cur = cur->next;
	}
	HX_STACK_LINE(405)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,inlined_try_remove,return )

Void ZPP_PartitionPair_obj::inlined_remove( ::zpp_nape::geom::ZPP_PartitionPair obj){
{
		HX_STACK_PUSH("ZPP_PartitionPair::inlined_remove","zpp_nape/geom/Triangular.hx",371);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(380)
		::zpp_nape::geom::ZPP_PartitionPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(380)
		::zpp_nape::geom::ZPP_PartitionPair cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(380)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(380)
		while(((cur != null()))){
			HX_STACK_LINE(380)
			if (((cur == obj))){
				HX_STACK_LINE(380)
				{
					HX_STACK_LINE(380)
					::zpp_nape::geom::ZPP_PartitionPair old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(380)
					::zpp_nape::geom::ZPP_PartitionPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(380)
					if (((pre == null()))){
						HX_STACK_LINE(380)
						old = this->next;
						HX_STACK_LINE(380)
						ret1 = old->next;
						HX_STACK_LINE(380)
						this->next = ret1;
						HX_STACK_LINE(380)
						if (((this->next == null()))){
							HX_STACK_LINE(380)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(380)
						old = pre->next;
						HX_STACK_LINE(380)
						ret1 = old->next;
						HX_STACK_LINE(380)
						pre->next = ret1;
						HX_STACK_LINE(380)
						if (((ret1 == null()))){
							HX_STACK_LINE(380)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(380)
					old->_inuse = false;
					HX_STACK_LINE(380)
					this->modified = true;
					HX_STACK_LINE(380)
					(this->length)--;
					HX_STACK_LINE(380)
					this->pushmod = true;
					HX_STACK_LINE(380)
					ret1;
				}
				HX_STACK_LINE(380)
				ret = true;
				HX_STACK_LINE(380)
				break;
			}
			HX_STACK_LINE(380)
			pre = cur;
			HX_STACK_LINE(380)
			cur = cur->next;
		}
		HX_STACK_LINE(380)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,inlined_remove,(void))

bool ZPP_PartitionPair_obj::try_remove( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_PartitionPair::try_remove","zpp_nape/geom/Triangular.hx",346);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(355)
	::zpp_nape::geom::ZPP_PartitionPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(356)
	::zpp_nape::geom::ZPP_PartitionPair cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(357)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(358)
	while(((cur != null()))){
		HX_STACK_LINE(359)
		if (((cur == obj))){
			HX_STACK_LINE(360)
			this->erase(pre);
			HX_STACK_LINE(361)
			ret = true;
			HX_STACK_LINE(362)
			break;
		}
		HX_STACK_LINE(364)
		pre = cur;
		HX_STACK_LINE(365)
		cur = cur->next;
	}
	HX_STACK_LINE(367)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,try_remove,return )

Void ZPP_PartitionPair_obj::remove( ::zpp_nape::geom::ZPP_PartitionPair obj){
{
		HX_STACK_PUSH("ZPP_PartitionPair::remove","zpp_nape/geom/Triangular.hx",335);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(344)
		::zpp_nape::geom::ZPP_PartitionPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(344)
		::zpp_nape::geom::ZPP_PartitionPair cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(344)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(344)
		while(((cur != null()))){
			HX_STACK_LINE(344)
			if (((cur == obj))){
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					::zpp_nape::geom::ZPP_PartitionPair old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(344)
					::zpp_nape::geom::ZPP_PartitionPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(344)
					if (((pre == null()))){
						HX_STACK_LINE(344)
						old = this->next;
						HX_STACK_LINE(344)
						ret1 = old->next;
						HX_STACK_LINE(344)
						this->next = ret1;
						HX_STACK_LINE(344)
						if (((this->next == null()))){
							HX_STACK_LINE(344)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(344)
						old = pre->next;
						HX_STACK_LINE(344)
						ret1 = old->next;
						HX_STACK_LINE(344)
						pre->next = ret1;
						HX_STACK_LINE(344)
						if (((ret1 == null()))){
							HX_STACK_LINE(344)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(344)
					old->_inuse = false;
					HX_STACK_LINE(344)
					this->modified = true;
					HX_STACK_LINE(344)
					(this->length)--;
					HX_STACK_LINE(344)
					this->pushmod = true;
					HX_STACK_LINE(344)
					ret1;
				}
				HX_STACK_LINE(344)
				ret = true;
				HX_STACK_LINE(344)
				break;
			}
			HX_STACK_LINE(344)
			pre = cur;
			HX_STACK_LINE(344)
			cur = cur->next;
		}
		HX_STACK_LINE(344)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,remove,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZPP_PartitionPair::inlined_pop_unsafe","zpp_nape/geom/Triangular.hx",322);
	HX_STACK_THIS(this);
	HX_STACK_LINE(331)
	::zpp_nape::geom::ZPP_PartitionPair ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(332)
	this->pop();
	HX_STACK_LINE(333)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZPP_PartitionPair::pop_unsafe","zpp_nape/geom/Triangular.hx",317);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionPair Block( ::zpp_nape::geom::ZPP_PartitionPair_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",318);
			{
				HX_STACK_LINE(318)
				::zpp_nape::geom::ZPP_PartitionPair ret = __this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(318)
				__this->pop();
				HX_STACK_LINE(318)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(317)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,pop_unsafe,return )

Void ZPP_PartitionPair_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZPP_PartitionPair::inlined_pop","zpp_nape/geom/Triangular.hx",298);
		HX_STACK_THIS(this);
		HX_STACK_LINE(307)
		::zpp_nape::geom::ZPP_PartitionPair ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(308)
		this->next = ret->next;
		HX_STACK_LINE(309)
		ret->_inuse = false;
		HX_STACK_LINE(313)
		if (((this->next == null()))){
			HX_STACK_LINE(313)
			this->pushmod = true;
		}
		HX_STACK_LINE(314)
		this->modified = true;
		HX_STACK_LINE(315)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,inlined_pop,(void))

Void ZPP_PartitionPair_obj::pop( ){
{
		HX_STACK_PUSH("ZPP_PartitionPair::pop","zpp_nape/geom/Triangular.hx",293);
		HX_STACK_THIS(this);
		HX_STACK_LINE(294)
		::zpp_nape::geom::ZPP_PartitionPair ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(294)
		this->next = ret->next;
		HX_STACK_LINE(294)
		ret->_inuse = false;
		HX_STACK_LINE(294)
		if (((this->next == null()))){
			HX_STACK_LINE(294)
			this->pushmod = true;
		}
		HX_STACK_LINE(294)
		this->modified = true;
		HX_STACK_LINE(294)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,pop,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::inlined_insert( ::zpp_nape::geom::ZPP_PartitionPair cur,::zpp_nape::geom::ZPP_PartitionPair o){
	HX_STACK_PUSH("ZPP_PartitionPair::inlined_insert","zpp_nape/geom/Triangular.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionPair Block( ::zpp_nape::geom::ZPP_PartitionPair &o){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",277);
			{
				HX_STACK_LINE(278)
				o->_inuse = true;
				HX_STACK_LINE(279)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(277)
	::zpp_nape::geom::ZPP_PartitionPair temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(281)
	if (((cur == null()))){
		HX_STACK_LINE(282)
		temp->next = this->next;
		HX_STACK_LINE(283)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(286)
		temp->next = cur->next;
		HX_STACK_LINE(287)
		cur->next = temp;
	}
	HX_STACK_LINE(289)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(290)
	(this->length)++;
	HX_STACK_LINE(291)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionPair_obj,inlined_insert,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::insert( ::zpp_nape::geom::ZPP_PartitionPair cur,::zpp_nape::geom::ZPP_PartitionPair o){
	HX_STACK_PUSH("ZPP_PartitionPair::insert","zpp_nape/geom/Triangular.hx",263);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionPair Block( ::zpp_nape::geom::ZPP_PartitionPair_obj *__this,::zpp_nape::geom::ZPP_PartitionPair &o,::zpp_nape::geom::ZPP_PartitionPair &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",264);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::geom::ZPP_PartitionPair Block( ::zpp_nape::geom::ZPP_PartitionPair &o){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",264);
						{
							HX_STACK_LINE(264)
							o->_inuse = true;
							HX_STACK_LINE(264)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(264)
				::zpp_nape::geom::ZPP_PartitionPair temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(264)
				if (((cur == null()))){
					HX_STACK_LINE(264)
					temp->next = __this->next;
					HX_STACK_LINE(264)
					__this->next = temp;
				}
				else{
					HX_STACK_LINE(264)
					temp->next = cur->next;
					HX_STACK_LINE(264)
					cur->next = temp;
				}
				HX_STACK_LINE(264)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(264)
				(__this->length)++;
				HX_STACK_LINE(264)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(263)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionPair_obj,insert,return )

Void ZPP_PartitionPair_obj::addAll( ::zpp_nape::geom::ZPP_PartitionPair x){
{
		HX_STACK_PUSH("ZPP_PartitionPair::addAll","zpp_nape/geom/Triangular.hx",245);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(255)
		::zpp_nape::geom::ZPP_PartitionPair cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(256)
		while(((cx_ite != null()))){
			HX_STACK_LINE(257)
			::zpp_nape::geom::ZPP_PartitionPair i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(258)
			this->add(i);
			HX_STACK_LINE(259)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,addAll,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::inlined_add( ::zpp_nape::geom::ZPP_PartitionPair o){
	HX_STACK_PUSH("ZPP_PartitionPair::inlined_add","zpp_nape/geom/Triangular.hx",226);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionPair Block( ::zpp_nape::geom::ZPP_PartitionPair &o){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",235);
			{
				HX_STACK_LINE(236)
				o->_inuse = true;
				HX_STACK_LINE(237)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(235)
	::zpp_nape::geom::ZPP_PartitionPair temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(239)
	temp->next = this->next;
	HX_STACK_LINE(240)
	this->next = temp;
	HX_STACK_LINE(241)
	this->modified = true;
	HX_STACK_LINE(242)
	(this->length)++;
	HX_STACK_LINE(243)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,inlined_add,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::add( ::zpp_nape::geom::ZPP_PartitionPair o){
	HX_STACK_PUSH("ZPP_PartitionPair::add","zpp_nape/geom/Triangular.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionPair Block( ::zpp_nape::geom::ZPP_PartitionPair_obj *__this,::zpp_nape::geom::ZPP_PartitionPair &o){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",222);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::geom::ZPP_PartitionPair Block( ::zpp_nape::geom::ZPP_PartitionPair &o){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",222);
						{
							HX_STACK_LINE(222)
							o->_inuse = true;
							HX_STACK_LINE(222)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(222)
				::zpp_nape::geom::ZPP_PartitionPair temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(222)
				temp->next = __this->next;
				HX_STACK_LINE(222)
				__this->next = temp;
				HX_STACK_LINE(222)
				__this->modified = true;
				HX_STACK_LINE(222)
				(__this->length)++;
				HX_STACK_LINE(222)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(221)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,add,return )

Void ZPP_PartitionPair_obj::setbegin( ::zpp_nape::geom::ZPP_PartitionPair i){
{
		HX_STACK_PUSH("ZPP_PartitionPair::setbegin","zpp_nape/geom/Triangular.hx",216);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(217)
		this->next = i;
		HX_STACK_LINE(218)
		this->modified = true;
		HX_STACK_LINE(219)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PartitionPair_obj,setbegin,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::begin( ){
	HX_STACK_PUSH("ZPP_PartitionPair::begin","zpp_nape/geom/Triangular.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_LINE(207)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,begin,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::elem( ){
	HX_STACK_PUSH("ZPP_PartitionPair::elem","zpp_nape/geom/Triangular.hx",202);
	HX_STACK_THIS(this);
	HX_STACK_LINE(202)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PartitionPair_obj,elem,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::zpp_pool;

::zpp_nape::geom::ZPP_PartitionPair ZPP_PartitionPair_obj::get( ::zpp_nape::geom::ZPP_PartitionVertex a,::zpp_nape::geom::ZPP_PartitionVertex b){
	HX_STACK_PUSH("ZPP_PartitionPair::get","zpp_nape/geom/Triangular.hx",569);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(570)
	::zpp_nape::geom::ZPP_PartitionPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(571)
	{
		HX_STACK_LINE(572)
		if (((::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool == null()))){
			HX_STACK_LINE(572)
			ret = ::zpp_nape::geom::ZPP_PartitionPair_obj::__new();
		}
		else{
			HX_STACK_LINE(579)
			ret = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;
			HX_STACK_LINE(580)
			::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = ret->next;
			HX_STACK_LINE(581)
			ret->next = null();
		}
		HX_STACK_LINE(586)
		Dynamic();
	}
	HX_STACK_LINE(588)
	ret->a = a;
	HX_STACK_LINE(589)
	ret->b = b;
	HX_STACK_LINE(590)
	if (((a->id < b->id))){
		HX_STACK_LINE(591)
		ret->id = a->id;
		HX_STACK_LINE(592)
		ret->di = b->id;
	}
	else{
		HX_STACK_LINE(595)
		ret->id = b->id;
		HX_STACK_LINE(596)
		ret->di = a->id;
	}
	HX_STACK_LINE(598)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionPair_obj,get,return )

Void ZPP_PartitionPair_obj::edge_swap( ::zpp_nape::geom::ZPP_PartitionPair a,::zpp_nape::geom::ZPP_PartitionPair b){
{
		HX_STACK_PUSH("ZPP_PartitionPair::edge_swap","zpp_nape/geom/Triangular.hx",601);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(603)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t = a->node;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(604)
		a->node = b->node;
		HX_STACK_LINE(605)
		b->node = t;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionPair_obj,edge_swap,(void))

bool ZPP_PartitionPair_obj::edge_lt( ::zpp_nape::geom::ZPP_PartitionPair a,::zpp_nape::geom::ZPP_PartitionPair b){
	HX_STACK_PUSH("ZPP_PartitionPair::edge_lt","zpp_nape/geom/Triangular.hx",608);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(608)
	return (bool((a->id < b->id)) || bool((bool((a->id == b->id)) && bool((a->di < b->di)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_PartitionPair_obj,edge_lt,return )


ZPP_PartitionPair_obj::ZPP_PartitionPair_obj()
{
}

void ZPP_PartitionPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PartitionPair);
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_PartitionPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(di,"di");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_PartitionPair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"di") ) { return di; }
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
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
		if (HX_FIELD_EQ(inName,"_inuse") ) { return _inuse; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"edge_lt") ) { return edge_lt_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"edge_swap") ) { return edge_swap_dyn(); }
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

Dynamic ZPP_PartitionPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionPair >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_PartitionPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("node"));
	outFields->push(HX_CSTRING("di"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	HX_CSTRING("edge_swap"),
	HX_CSTRING("edge_lt"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("node"),
	HX_CSTRING("di"),
	HX_CSTRING("id"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
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
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_PartitionPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_PartitionPair_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PartitionPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_PartitionPair_obj::zpp_pool,"zpp_pool");
};

Class ZPP_PartitionPair_obj::__mClass;

void ZPP_PartitionPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_PartitionPair"), hx::TCanCast< ZPP_PartitionPair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_PartitionPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
