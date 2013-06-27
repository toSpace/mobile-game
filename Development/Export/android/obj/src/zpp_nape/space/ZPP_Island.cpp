#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_Island
#include <zpp_nape/space/ZPP_Island.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Component
#include <zpp_nape/util/ZNPList_ZPP_Component.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_Island_obj::__construct()
{
HX_STACK_PUSH("ZPP_Island::new","zpp_nape/space/Space.hx",174);
{
	HX_STACK_LINE(532)
	this->waket = (int)0;
	HX_STACK_LINE(531)
	this->sleep = false;
	HX_STACK_LINE(530)
	this->comps = null();
	HX_STACK_LINE(189)
	this->length = (int)0;
	HX_STACK_LINE(188)
	this->pushmod = false;
	HX_STACK_LINE(187)
	this->modified = false;
	HX_STACK_LINE(186)
	this->_inuse = false;
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(574)
	this->comps = ::zpp_nape::util::ZNPList_ZPP_Component_obj::__new();
}
;
	return null();
}

ZPP_Island_obj::~ZPP_Island_obj() { }

Dynamic ZPP_Island_obj::__CreateEmpty() { return  new ZPP_Island_obj; }
hx::ObjectPtr< ZPP_Island_obj > ZPP_Island_obj::__new()
{  hx::ObjectPtr< ZPP_Island_obj > result = new ZPP_Island_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Island_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Island_obj > result = new ZPP_Island_obj();
	result->__construct();
	return result;}

Void ZPP_Island_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Island::alloc","zpp_nape/space/Space.hx",571);
		HX_STACK_THIS(this);
		HX_STACK_LINE(571)
		this->waket = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,alloc,(void))

Void ZPP_Island_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Island::free","zpp_nape/space/Space.hx",559);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,free,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::at( int ind){
	HX_STACK_PUSH("ZPP_Island::at","zpp_nape/space/Space.hx",518);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(527)
	::zpp_nape::space::ZPP_Island it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(528)
	return (  (((it != null()))) ? ::zpp_nape::space::ZPP_Island(it) : ::zpp_nape::space::ZPP_Island(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,at,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZPP_Island::iterator_at","zpp_nape/space/Space.hx",505);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(514)
	::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(515)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(515)
		ret = ret->next;
	}
	HX_STACK_LINE(516)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,iterator_at,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::back( ){
	HX_STACK_PUSH("ZPP_Island::back","zpp_nape/space/Space.hx",496);
	HX_STACK_THIS(this);
	HX_STACK_LINE(497)
	::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(498)
	::zpp_nape::space::ZPP_Island cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(499)
	while(((cur != null()))){
		HX_STACK_LINE(500)
		ret = cur;
		HX_STACK_LINE(501)
		cur = cur->next;
	}
	HX_STACK_LINE(503)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,back,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::front( ){
	HX_STACK_PUSH("ZPP_Island::front","zpp_nape/space/Space.hx",493);
	HX_STACK_THIS(this);
	HX_STACK_LINE(493)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,front,return )

bool ZPP_Island_obj::inlined_has( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_PUSH("ZPP_Island::inlined_has","zpp_nape/space/Space.hx",463);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(472)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(473)
	{
		HX_STACK_LINE(474)
		ret = false;
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(476)
			::zpp_nape::space::ZPP_Island cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(477)
			while(((cx_ite != null()))){
				HX_STACK_LINE(478)
				::zpp_nape::space::ZPP_Island npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(479)
				if (((npite == obj))){
					HX_STACK_LINE(481)
					ret = true;
					HX_STACK_LINE(482)
					break;
				}
				HX_STACK_LINE(485)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(489)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_has,return )

bool ZPP_Island_obj::has( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_PUSH("ZPP_Island::has","zpp_nape/space/Space.hx",458);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::space::ZPP_Island_obj *__this,::zpp_nape::space::ZPP_Island &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",459);
			{
				HX_STACK_LINE(459)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(459)
				{
					HX_STACK_LINE(459)
					ret = false;
					HX_STACK_LINE(459)
					{
						HX_STACK_LINE(459)
						::zpp_nape::space::ZPP_Island cx_ite = __this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(459)
						while(((cx_ite != null()))){
							HX_STACK_LINE(459)
							::zpp_nape::space::ZPP_Island npite = cx_ite;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(459)
							if (((npite == obj))){
								HX_STACK_LINE(459)
								ret = true;
								HX_STACK_LINE(459)
								break;
							}
							HX_STACK_LINE(459)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(459)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(458)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,has,return )

int ZPP_Island_obj::size( ){
	HX_STACK_PUSH("ZPP_Island::size","zpp_nape/space/Space.hx",455);
	HX_STACK_THIS(this);
	HX_STACK_LINE(455)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,size,return )

bool ZPP_Island_obj::empty( ){
	HX_STACK_PUSH("ZPP_Island::empty","zpp_nape/space/Space.hx",450);
	HX_STACK_THIS(this);
	HX_STACK_LINE(450)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,empty,return )

Void ZPP_Island_obj::reverse( ){
{
		HX_STACK_PUSH("ZPP_Island::reverse","zpp_nape/space/Space.hx",435);
		HX_STACK_THIS(this);
		HX_STACK_LINE(436)
		::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(437)
		::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(438)
		while(((cur != null()))){
			HX_STACK_LINE(439)
			::zpp_nape::space::ZPP_Island nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(440)
			cur->next = pre;
			HX_STACK_LINE(441)
			this->next = cur;
			HX_STACK_LINE(442)
			pre = cur;
			HX_STACK_LINE(443)
			cur = nx;
		}
		HX_STACK_LINE(445)
		this->modified = true;
		HX_STACK_LINE(446)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,reverse,(void))

Void ZPP_Island_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZPP_Island::inlined_clear","zpp_nape/space/Space.hx",429);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,inlined_clear,(void))

Void ZPP_Island_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Island::clear","zpp_nape/space/Space.hx",424);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,clear,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::splice( ::zpp_nape::space::ZPP_Island pre,int n){
	HX_STACK_PUSH("ZPP_Island::splice","zpp_nape/space/Space.hx",420);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(421)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(421)
		this->erase(pre);
	}
	HX_STACK_LINE(422)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Island_obj,splice,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_erase( ::zpp_nape::space::ZPP_Island pre){
	HX_STACK_PUSH("ZPP_Island::inlined_erase","zpp_nape/space/Space.hx",388);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(397)
	::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(398)
	::zpp_nape::space::ZPP_Island ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(399)
	if (((pre == null()))){
		HX_STACK_LINE(400)
		old = this->next;
		HX_STACK_LINE(401)
		ret = old->next;
		HX_STACK_LINE(402)
		this->next = ret;
		HX_STACK_LINE(403)
		if (((this->next == null()))){
			HX_STACK_LINE(403)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(406)
		old = pre->next;
		HX_STACK_LINE(407)
		ret = old->next;
		HX_STACK_LINE(408)
		pre->next = ret;
		HX_STACK_LINE(409)
		if (((ret == null()))){
			HX_STACK_LINE(409)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(411)
	old->_inuse = false;
	HX_STACK_LINE(415)
	this->modified = true;
	HX_STACK_LINE(416)
	(this->length)--;
	HX_STACK_LINE(417)
	this->pushmod = true;
	HX_STACK_LINE(418)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_erase,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::erase( ::zpp_nape::space::ZPP_Island pre){
	HX_STACK_PUSH("ZPP_Island::erase","zpp_nape/space/Space.hx",383);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island_obj *__this,::zpp_nape::space::ZPP_Island &pre){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",384);
			{
				HX_STACK_LINE(384)
				::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(384)
				::zpp_nape::space::ZPP_Island ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(384)
				if (((pre == null()))){
					HX_STACK_LINE(384)
					old = __this->next;
					HX_STACK_LINE(384)
					ret = old->next;
					HX_STACK_LINE(384)
					__this->next = ret;
					HX_STACK_LINE(384)
					if (((__this->next == null()))){
						HX_STACK_LINE(384)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(384)
					old = pre->next;
					HX_STACK_LINE(384)
					ret = old->next;
					HX_STACK_LINE(384)
					pre->next = ret;
					HX_STACK_LINE(384)
					if (((ret == null()))){
						HX_STACK_LINE(384)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(384)
				old->_inuse = false;
				HX_STACK_LINE(384)
				__this->modified = true;
				HX_STACK_LINE(384)
				(__this->length)--;
				HX_STACK_LINE(384)
				__this->pushmod = true;
				HX_STACK_LINE(384)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(383)
	return _Function_1_1::Block(this,pre);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,erase,return )

bool ZPP_Island_obj::inlined_try_remove( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_PUSH("ZPP_Island::inlined_try_remove","zpp_nape/space/Space.hx",360);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(369)
	::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(370)
	::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(371)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(372)
	while(((cur != null()))){
		HX_STACK_LINE(373)
		if (((cur == obj))){
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(374)
				::zpp_nape::space::ZPP_Island ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(374)
				if (((pre == null()))){
					HX_STACK_LINE(374)
					old = this->next;
					HX_STACK_LINE(374)
					ret1 = old->next;
					HX_STACK_LINE(374)
					this->next = ret1;
					HX_STACK_LINE(374)
					if (((this->next == null()))){
						HX_STACK_LINE(374)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(374)
					old = pre->next;
					HX_STACK_LINE(374)
					ret1 = old->next;
					HX_STACK_LINE(374)
					pre->next = ret1;
					HX_STACK_LINE(374)
					if (((ret1 == null()))){
						HX_STACK_LINE(374)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(374)
				old->_inuse = false;
				HX_STACK_LINE(374)
				this->modified = true;
				HX_STACK_LINE(374)
				(this->length)--;
				HX_STACK_LINE(374)
				this->pushmod = true;
				HX_STACK_LINE(374)
				ret1;
			}
			HX_STACK_LINE(375)
			ret = true;
			HX_STACK_LINE(376)
			break;
		}
		HX_STACK_LINE(378)
		pre = cur;
		HX_STACK_LINE(379)
		cur = cur->next;
	}
	HX_STACK_LINE(381)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_try_remove,return )

Void ZPP_Island_obj::inlined_remove( ::zpp_nape::space::ZPP_Island obj){
{
		HX_STACK_PUSH("ZPP_Island::inlined_remove","zpp_nape/space/Space.hx",347);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(356)
		::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(356)
		::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(356)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(356)
		while(((cur != null()))){
			HX_STACK_LINE(356)
			if (((cur == obj))){
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(356)
					::zpp_nape::space::ZPP_Island ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(356)
					if (((pre == null()))){
						HX_STACK_LINE(356)
						old = this->next;
						HX_STACK_LINE(356)
						ret1 = old->next;
						HX_STACK_LINE(356)
						this->next = ret1;
						HX_STACK_LINE(356)
						if (((this->next == null()))){
							HX_STACK_LINE(356)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(356)
						old = pre->next;
						HX_STACK_LINE(356)
						ret1 = old->next;
						HX_STACK_LINE(356)
						pre->next = ret1;
						HX_STACK_LINE(356)
						if (((ret1 == null()))){
							HX_STACK_LINE(356)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(356)
					old->_inuse = false;
					HX_STACK_LINE(356)
					this->modified = true;
					HX_STACK_LINE(356)
					(this->length)--;
					HX_STACK_LINE(356)
					this->pushmod = true;
					HX_STACK_LINE(356)
					ret1;
				}
				HX_STACK_LINE(356)
				ret = true;
				HX_STACK_LINE(356)
				break;
			}
			HX_STACK_LINE(356)
			pre = cur;
			HX_STACK_LINE(356)
			cur = cur->next;
		}
		HX_STACK_LINE(356)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_remove,(void))

bool ZPP_Island_obj::try_remove( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_PUSH("ZPP_Island::try_remove","zpp_nape/space/Space.hx",322);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(331)
	::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(332)
	::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(333)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(334)
	while(((cur != null()))){
		HX_STACK_LINE(335)
		if (((cur == obj))){
			HX_STACK_LINE(336)
			this->erase(pre);
			HX_STACK_LINE(337)
			ret = true;
			HX_STACK_LINE(338)
			break;
		}
		HX_STACK_LINE(340)
		pre = cur;
		HX_STACK_LINE(341)
		cur = cur->next;
	}
	HX_STACK_LINE(343)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,try_remove,return )

Void ZPP_Island_obj::remove( ::zpp_nape::space::ZPP_Island obj){
{
		HX_STACK_PUSH("ZPP_Island::remove","zpp_nape/space/Space.hx",311);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(320)
		::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(320)
		::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(320)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(320)
		while(((cur != null()))){
			HX_STACK_LINE(320)
			if (((cur == obj))){
				HX_STACK_LINE(320)
				{
					HX_STACK_LINE(320)
					::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(320)
					::zpp_nape::space::ZPP_Island ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(320)
					if (((pre == null()))){
						HX_STACK_LINE(320)
						old = this->next;
						HX_STACK_LINE(320)
						ret1 = old->next;
						HX_STACK_LINE(320)
						this->next = ret1;
						HX_STACK_LINE(320)
						if (((this->next == null()))){
							HX_STACK_LINE(320)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(320)
						old = pre->next;
						HX_STACK_LINE(320)
						ret1 = old->next;
						HX_STACK_LINE(320)
						pre->next = ret1;
						HX_STACK_LINE(320)
						if (((ret1 == null()))){
							HX_STACK_LINE(320)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(320)
					old->_inuse = false;
					HX_STACK_LINE(320)
					this->modified = true;
					HX_STACK_LINE(320)
					(this->length)--;
					HX_STACK_LINE(320)
					this->pushmod = true;
					HX_STACK_LINE(320)
					ret1;
				}
				HX_STACK_LINE(320)
				ret = true;
				HX_STACK_LINE(320)
				break;
			}
			HX_STACK_LINE(320)
			pre = cur;
			HX_STACK_LINE(320)
			cur = cur->next;
		}
		HX_STACK_LINE(320)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,remove,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZPP_Island::inlined_pop_unsafe","zpp_nape/space/Space.hx",298);
	HX_STACK_THIS(this);
	HX_STACK_LINE(307)
	::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(308)
	this->pop();
	HX_STACK_LINE(309)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,inlined_pop_unsafe,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZPP_Island::pop_unsafe","zpp_nape/space/Space.hx",293);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",294);
			{
				HX_STACK_LINE(294)
				::zpp_nape::space::ZPP_Island ret = __this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(294)
				__this->pop();
				HX_STACK_LINE(294)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(293)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,pop_unsafe,return )

Void ZPP_Island_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZPP_Island::inlined_pop","zpp_nape/space/Space.hx",274);
		HX_STACK_THIS(this);
		HX_STACK_LINE(283)
		::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(284)
		this->next = ret->next;
		HX_STACK_LINE(285)
		ret->_inuse = false;
		HX_STACK_LINE(289)
		if (((this->next == null()))){
			HX_STACK_LINE(289)
			this->pushmod = true;
		}
		HX_STACK_LINE(290)
		this->modified = true;
		HX_STACK_LINE(291)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,inlined_pop,(void))

Void ZPP_Island_obj::pop( ){
{
		HX_STACK_PUSH("ZPP_Island::pop","zpp_nape/space/Space.hx",269);
		HX_STACK_THIS(this);
		HX_STACK_LINE(270)
		::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(270)
		this->next = ret->next;
		HX_STACK_LINE(270)
		ret->_inuse = false;
		HX_STACK_LINE(270)
		if (((this->next == null()))){
			HX_STACK_LINE(270)
			this->pushmod = true;
		}
		HX_STACK_LINE(270)
		this->modified = true;
		HX_STACK_LINE(270)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,pop,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_insert( ::zpp_nape::space::ZPP_Island cur,::zpp_nape::space::ZPP_Island o){
	HX_STACK_PUSH("ZPP_Island::inlined_insert","zpp_nape/space/Space.hx",244);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island &o){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",253);
			{
				HX_STACK_LINE(254)
				o->_inuse = true;
				HX_STACK_LINE(255)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(253)
	::zpp_nape::space::ZPP_Island temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(257)
	if (((cur == null()))){
		HX_STACK_LINE(258)
		temp->next = this->next;
		HX_STACK_LINE(259)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(262)
		temp->next = cur->next;
		HX_STACK_LINE(263)
		cur->next = temp;
	}
	HX_STACK_LINE(265)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(266)
	(this->length)++;
	HX_STACK_LINE(267)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Island_obj,inlined_insert,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::insert( ::zpp_nape::space::ZPP_Island cur,::zpp_nape::space::ZPP_Island o){
	HX_STACK_PUSH("ZPP_Island::insert","zpp_nape/space/Space.hx",239);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island_obj *__this,::zpp_nape::space::ZPP_Island &o,::zpp_nape::space::ZPP_Island &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",240);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island &o){
						HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",240);
						{
							HX_STACK_LINE(240)
							o->_inuse = true;
							HX_STACK_LINE(240)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(240)
				::zpp_nape::space::ZPP_Island temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(240)
				if (((cur == null()))){
					HX_STACK_LINE(240)
					temp->next = __this->next;
					HX_STACK_LINE(240)
					__this->next = temp;
				}
				else{
					HX_STACK_LINE(240)
					temp->next = cur->next;
					HX_STACK_LINE(240)
					cur->next = temp;
				}
				HX_STACK_LINE(240)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(240)
				(__this->length)++;
				HX_STACK_LINE(240)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(239)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Island_obj,insert,return )

Void ZPP_Island_obj::addAll( ::zpp_nape::space::ZPP_Island x){
{
		HX_STACK_PUSH("ZPP_Island::addAll","zpp_nape/space/Space.hx",221);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(231)
		::zpp_nape::space::ZPP_Island cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(232)
		while(((cx_ite != null()))){
			HX_STACK_LINE(233)
			::zpp_nape::space::ZPP_Island i = cx_ite;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(234)
			this->add(i);
			HX_STACK_LINE(235)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,addAll,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_add( ::zpp_nape::space::ZPP_Island o){
	HX_STACK_PUSH("ZPP_Island::inlined_add","zpp_nape/space/Space.hx",202);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island &o){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",211);
			{
				HX_STACK_LINE(212)
				o->_inuse = true;
				HX_STACK_LINE(213)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(211)
	::zpp_nape::space::ZPP_Island temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(215)
	temp->next = this->next;
	HX_STACK_LINE(216)
	this->next = temp;
	HX_STACK_LINE(217)
	this->modified = true;
	HX_STACK_LINE(218)
	(this->length)++;
	HX_STACK_LINE(219)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_add,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::add( ::zpp_nape::space::ZPP_Island o){
	HX_STACK_PUSH("ZPP_Island::add","zpp_nape/space/Space.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island_obj *__this,::zpp_nape::space::ZPP_Island &o){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",198);
			{
				struct _Function_2_1{
					inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island &o){
						HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",198);
						{
							HX_STACK_LINE(198)
							o->_inuse = true;
							HX_STACK_LINE(198)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(198)
				::zpp_nape::space::ZPP_Island temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(198)
				temp->next = __this->next;
				HX_STACK_LINE(198)
				__this->next = temp;
				HX_STACK_LINE(198)
				__this->modified = true;
				HX_STACK_LINE(198)
				(__this->length)++;
				HX_STACK_LINE(198)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(197)
	return _Function_1_1::Block(this,o);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,add,return )

Void ZPP_Island_obj::setbegin( ::zpp_nape::space::ZPP_Island i){
{
		HX_STACK_PUSH("ZPP_Island::setbegin","zpp_nape/space/Space.hx",192);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(193)
		this->next = i;
		HX_STACK_LINE(194)
		this->modified = true;
		HX_STACK_LINE(195)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,setbegin,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::begin( ){
	HX_STACK_PUSH("ZPP_Island::begin","zpp_nape/space/Space.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_LINE(183)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,begin,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::elem( ){
	HX_STACK_PUSH("ZPP_Island::elem","zpp_nape/space/Space.hx",178);
	HX_STACK_THIS(this);
	HX_STACK_LINE(178)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,elem,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::zpp_pool;


ZPP_Island_obj::ZPP_Island_obj()
{
}

void ZPP_Island_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Island);
	HX_MARK_MEMBER_NAME(waket,"waket");
	HX_MARK_MEMBER_NAME(sleep,"sleep");
	HX_MARK_MEMBER_NAME(comps,"comps");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_Island_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(waket,"waket");
	HX_VISIT_MEMBER_NAME(sleep,"sleep");
	HX_VISIT_MEMBER_NAME(comps,"comps");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_Island_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"waket") ) { return waket; }
		if (HX_FIELD_EQ(inName,"sleep") ) { return sleep; }
		if (HX_FIELD_EQ(inName,"comps") ) { return comps; }
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
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
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

Dynamic ZPP_Island_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_Island >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"waket") ) { waket=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sleep") ) { sleep=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"comps") ) { comps=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Component >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::space::ZPP_Island >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Island_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("waket"));
	outFields->push(HX_CSTRING("sleep"));
	outFields->push(HX_CSTRING("comps"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("waket"),
	HX_CSTRING("sleep"),
	HX_CSTRING("comps"),
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
	HX_MARK_MEMBER_NAME(ZPP_Island_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Island_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Island_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Island_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Island_obj::__mClass;

void ZPP_Island_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_Island"), hx::TCanCast< ZPP_Island_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Island_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
