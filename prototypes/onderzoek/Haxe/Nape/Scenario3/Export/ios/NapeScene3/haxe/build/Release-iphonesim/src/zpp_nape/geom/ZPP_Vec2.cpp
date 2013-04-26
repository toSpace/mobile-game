#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Vec2_obj::__construct()
{
HX_STACK_PUSH("ZPP_Vec2::new","zpp_nape/geom/Vec2.hx",174);
{
	HX_STACK_LINE(629)
	this->y = 0.0;
	HX_STACK_LINE(628)
	this->x = 0.0;
	HX_STACK_LINE(287)
	this->length = (int)0;
	HX_STACK_LINE(286)
	this->pushmod = false;
	HX_STACK_LINE(285)
	this->modified = false;
	HX_STACK_LINE(284)
	this->_inuse = false;
	HX_STACK_LINE(273)
	this->next = null();
	HX_STACK_LINE(232)
	this->weak = false;
	HX_STACK_LINE(205)
	this->outer = null();
	HX_STACK_LINE(192)
	this->_isimmutable = null();
	HX_STACK_LINE(191)
	this->_immutable = false;
	HX_STACK_LINE(176)
	this->_validate = null();
	HX_STACK_LINE(175)
	this->_invalidate = null();
}
;
	return null();
}

ZPP_Vec2_obj::~ZPP_Vec2_obj() { }

Dynamic ZPP_Vec2_obj::__CreateEmpty() { return  new ZPP_Vec2_obj; }
hx::ObjectPtr< ZPP_Vec2_obj > ZPP_Vec2_obj::__new()
{  hx::ObjectPtr< ZPP_Vec2_obj > result = new ZPP_Vec2_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Vec2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Vec2_obj > result = new ZPP_Vec2_obj();
	result->__construct();
	return result;}

::String ZPP_Vec2_obj::toString( ){
	HX_STACK_PUSH("ZPP_Vec2::toString","zpp_nape/geom/Vec2.hx",679);
	HX_STACK_THIS(this);
	HX_STACK_LINE(679)
	return ((((HX_CSTRING("{ x: ") + this->x) + HX_CSTRING(" y: ")) + this->y) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,toString,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::copy( ){
	HX_STACK_PUSH("ZPP_Vec2::copy","zpp_nape/geom/Vec2.hx",676);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",677);
			{
				HX_STACK_LINE(677)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(677)
				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(677)
				{
					HX_STACK_LINE(677)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(677)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(677)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(677)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
						HX_STACK_LINE(677)
						ret->next = null();
					}
					HX_STACK_LINE(677)
					ret->weak = false;
				}
				HX_STACK_LINE(677)
				ret->_immutable = immutable;
				HX_STACK_LINE(677)
				{
					HX_STACK_LINE(677)
					ret->x = __this->x;
					HX_STACK_LINE(677)
					ret->y = __this->y;
					HX_STACK_LINE(677)
					{
					}
					HX_STACK_LINE(677)
					{
					}
				}
				HX_STACK_LINE(677)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(676)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,copy,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::at( int ind){
	HX_STACK_PUSH("ZPP_Vec2::at","zpp_nape/geom/Vec2.hx",616);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(617)
	{
	}
	HX_STACK_LINE(625)
	::zpp_nape::geom::ZPP_Vec2 it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(626)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_Vec2(it) : ::zpp_nape::geom::ZPP_Vec2(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,at,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZPP_Vec2::iterator_at","zpp_nape/geom/Vec2.hx",603);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(604)
	{
	}
	HX_STACK_LINE(612)
	::zpp_nape::geom::ZPP_Vec2 ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(613)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(613)
		ret = ret->next;
	}
	HX_STACK_LINE(614)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,iterator_at,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::back( ){
	HX_STACK_PUSH("ZPP_Vec2::back","zpp_nape/geom/Vec2.hx",594);
	HX_STACK_THIS(this);
	HX_STACK_LINE(595)
	::zpp_nape::geom::ZPP_Vec2 ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(596)
	::zpp_nape::geom::ZPP_Vec2 cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(597)
	while(((cur != null()))){
		HX_STACK_LINE(598)
		ret = cur;
		HX_STACK_LINE(599)
		cur = cur->next;
	}
	HX_STACK_LINE(601)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,back,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::front( ){
	HX_STACK_PUSH("ZPP_Vec2::front","zpp_nape/geom/Vec2.hx",591);
	HX_STACK_THIS(this);
	HX_STACK_LINE(591)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,front,return )

bool ZPP_Vec2_obj::inlined_has( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_PUSH("ZPP_Vec2::inlined_has","zpp_nape/geom/Vec2.hx",561);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(562)
	{
	}
	HX_STACK_LINE(570)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(571)
	{
		HX_STACK_LINE(572)
		ret = false;
		HX_STACK_LINE(573)
		{
			HX_STACK_LINE(574)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(575)
			while(((cx_ite != null()))){
				HX_STACK_LINE(576)
				::zpp_nape::geom::ZPP_Vec2 npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(577)
				if (((npite == obj))){
					HX_STACK_LINE(579)
					ret = true;
					HX_STACK_LINE(580)
					break;
				}
				HX_STACK_LINE(583)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(587)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_has,return )

bool ZPP_Vec2_obj::has( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_PUSH("ZPP_Vec2::has","zpp_nape/geom/Vec2.hx",556);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::geom::ZPP_Vec2_obj *__this,::zpp_nape::geom::ZPP_Vec2 &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",557);
			{
				HX_STACK_LINE(557)
				{
				}
				HX_STACK_LINE(557)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(557)
				{
					HX_STACK_LINE(557)
					ret = false;
					HX_STACK_LINE(557)
					{
						HX_STACK_LINE(557)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = __this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(557)
						while(((cx_ite != null()))){
							HX_STACK_LINE(557)
							::zpp_nape::geom::ZPP_Vec2 npite = cx_ite;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(557)
							if (((npite == obj))){
								HX_STACK_LINE(557)
								ret = true;
								HX_STACK_LINE(557)
								break;
							}
							HX_STACK_LINE(557)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(557)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(556)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,has,return )

int ZPP_Vec2_obj::size( ){
	HX_STACK_PUSH("ZPP_Vec2::size","zpp_nape/geom/Vec2.hx",553);
	HX_STACK_THIS(this);
	HX_STACK_LINE(553)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,size,return )

bool ZPP_Vec2_obj::empty( ){
	HX_STACK_PUSH("ZPP_Vec2::empty","zpp_nape/geom/Vec2.hx",548);
	HX_STACK_THIS(this);
	HX_STACK_LINE(548)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,empty,return )

Void ZPP_Vec2_obj::reverse( ){
{
		HX_STACK_PUSH("ZPP_Vec2::reverse","zpp_nape/geom/Vec2.hx",533);
		HX_STACK_THIS(this);
		HX_STACK_LINE(534)
		::zpp_nape::geom::ZPP_Vec2 cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(535)
		::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(536)
		while(((cur != null()))){
			HX_STACK_LINE(537)
			::zpp_nape::geom::ZPP_Vec2 nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(538)
			cur->next = pre;
			HX_STACK_LINE(539)
			this->next = cur;
			HX_STACK_LINE(540)
			pre = cur;
			HX_STACK_LINE(541)
			cur = nx;
		}
		HX_STACK_LINE(543)
		this->modified = true;
		HX_STACK_LINE(544)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,reverse,(void))

Void ZPP_Vec2_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZPP_Vec2::inlined_clear","zpp_nape/geom/Vec2.hx",527);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,inlined_clear,(void))

Void ZPP_Vec2_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Vec2::clear","zpp_nape/geom/Vec2.hx",522);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,clear,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::splice( ::zpp_nape::geom::ZPP_Vec2 pre,int n){
	HX_STACK_PUSH("ZPP_Vec2::splice","zpp_nape/geom/Vec2.hx",518);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(519)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(519)
		this->erase(pre);
	}
	HX_STACK_LINE(520)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Vec2_obj,splice,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::inlined_erase( ::zpp_nape::geom::ZPP_Vec2 pre){
	HX_STACK_PUSH("ZPP_Vec2::inlined_erase","zpp_nape/geom/Vec2.hx",486);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(487)
	{
	}
	HX_STACK_LINE(495)
	::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(496)
	::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(497)
	if (((pre == null()))){
		HX_STACK_LINE(498)
		old = this->next;
		HX_STACK_LINE(499)
		ret = old->next;
		HX_STACK_LINE(500)
		this->next = ret;
		HX_STACK_LINE(501)
		if (((this->next == null()))){
			HX_STACK_LINE(501)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(504)
		old = pre->next;
		HX_STACK_LINE(505)
		ret = old->next;
		HX_STACK_LINE(506)
		pre->next = ret;
		HX_STACK_LINE(507)
		if (((ret == null()))){
			HX_STACK_LINE(507)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(509)
	old->_inuse = false;
	HX_STACK_LINE(512)
	{
	}
	HX_STACK_LINE(513)
	this->modified = true;
	HX_STACK_LINE(514)
	(this->length)--;
	HX_STACK_LINE(515)
	this->pushmod = true;
	HX_STACK_LINE(516)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_erase,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::erase( ::zpp_nape::geom::ZPP_Vec2 pre){
	HX_STACK_PUSH("ZPP_Vec2::erase","zpp_nape/geom/Vec2.hx",481);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &pre,::zpp_nape::geom::ZPP_Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",482);
			{
				HX_STACK_LINE(482)
				{
				}
				HX_STACK_LINE(482)
				::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(482)
				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(482)
				if (((pre == null()))){
					HX_STACK_LINE(482)
					old = __this->next;
					HX_STACK_LINE(482)
					ret = old->next;
					HX_STACK_LINE(482)
					__this->next = ret;
					HX_STACK_LINE(482)
					if (((__this->next == null()))){
						HX_STACK_LINE(482)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(482)
					old = pre->next;
					HX_STACK_LINE(482)
					ret = old->next;
					HX_STACK_LINE(482)
					pre->next = ret;
					HX_STACK_LINE(482)
					if (((ret == null()))){
						HX_STACK_LINE(482)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(482)
				old->_inuse = false;
				HX_STACK_LINE(482)
				{
				}
				HX_STACK_LINE(482)
				__this->modified = true;
				HX_STACK_LINE(482)
				(__this->length)--;
				HX_STACK_LINE(482)
				__this->pushmod = true;
				HX_STACK_LINE(482)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(481)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,erase,return )

bool ZPP_Vec2_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_PUSH("ZPP_Vec2::inlined_try_remove","zpp_nape/geom/Vec2.hx",458);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(459)
	{
	}
	HX_STACK_LINE(467)
	::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(468)
	::zpp_nape::geom::ZPP_Vec2 cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(469)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(470)
	while(((cur != null()))){
		HX_STACK_LINE(471)
		if (((cur == obj))){
			HX_STACK_LINE(472)
			{
				HX_STACK_LINE(472)
				{
				}
				HX_STACK_LINE(472)
				::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(472)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(472)
				if (((pre == null()))){
					HX_STACK_LINE(472)
					old = this->next;
					HX_STACK_LINE(472)
					ret1 = old->next;
					HX_STACK_LINE(472)
					this->next = ret1;
					HX_STACK_LINE(472)
					if (((this->next == null()))){
						HX_STACK_LINE(472)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(472)
					old = pre->next;
					HX_STACK_LINE(472)
					ret1 = old->next;
					HX_STACK_LINE(472)
					pre->next = ret1;
					HX_STACK_LINE(472)
					if (((ret1 == null()))){
						HX_STACK_LINE(472)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(472)
				old->_inuse = false;
				HX_STACK_LINE(472)
				{
				}
				HX_STACK_LINE(472)
				this->modified = true;
				HX_STACK_LINE(472)
				(this->length)--;
				HX_STACK_LINE(472)
				this->pushmod = true;
				HX_STACK_LINE(472)
				ret1;
			}
			HX_STACK_LINE(473)
			ret = true;
			HX_STACK_LINE(474)
			break;
		}
		HX_STACK_LINE(476)
		pre = cur;
		HX_STACK_LINE(477)
		cur = cur->next;
	}
	HX_STACK_LINE(479)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_try_remove,return )

Void ZPP_Vec2_obj::inlined_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
{
		HX_STACK_PUSH("ZPP_Vec2::inlined_remove","zpp_nape/geom/Vec2.hx",445);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(446)
		{
		}
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(454)
			{
			}
			HX_STACK_LINE(454)
			::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(454)
			::zpp_nape::geom::ZPP_Vec2 cur = this->next;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(454)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(454)
			while(((cur != null()))){
				HX_STACK_LINE(454)
				if (((cur == obj))){
					HX_STACK_LINE(454)
					{
						HX_STACK_LINE(454)
						{
						}
						HX_STACK_LINE(454)
						::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(454)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(454)
						if (((pre == null()))){
							HX_STACK_LINE(454)
							old = this->next;
							HX_STACK_LINE(454)
							ret1 = old->next;
							HX_STACK_LINE(454)
							this->next = ret1;
							HX_STACK_LINE(454)
							if (((this->next == null()))){
								HX_STACK_LINE(454)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(454)
							old = pre->next;
							HX_STACK_LINE(454)
							ret1 = old->next;
							HX_STACK_LINE(454)
							pre->next = ret1;
							HX_STACK_LINE(454)
							if (((ret1 == null()))){
								HX_STACK_LINE(454)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(454)
						old->_inuse = false;
						HX_STACK_LINE(454)
						{
						}
						HX_STACK_LINE(454)
						this->modified = true;
						HX_STACK_LINE(454)
						(this->length)--;
						HX_STACK_LINE(454)
						this->pushmod = true;
						HX_STACK_LINE(454)
						ret1;
					}
					HX_STACK_LINE(454)
					ret = true;
					HX_STACK_LINE(454)
					break;
				}
				HX_STACK_LINE(454)
				pre = cur;
				HX_STACK_LINE(454)
				cur = cur->next;
			}
			HX_STACK_LINE(454)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_remove,(void))

bool ZPP_Vec2_obj::try_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_PUSH("ZPP_Vec2::try_remove","zpp_nape/geom/Vec2.hx",420);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(421)
	{
	}
	HX_STACK_LINE(429)
	::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(430)
	::zpp_nape::geom::ZPP_Vec2 cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(431)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(432)
	while(((cur != null()))){
		HX_STACK_LINE(433)
		if (((cur == obj))){
			HX_STACK_LINE(434)
			this->erase(pre);
			HX_STACK_LINE(435)
			ret = true;
			HX_STACK_LINE(436)
			break;
		}
		HX_STACK_LINE(438)
		pre = cur;
		HX_STACK_LINE(439)
		cur = cur->next;
	}
	HX_STACK_LINE(441)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,try_remove,return )

Void ZPP_Vec2_obj::remove( ::zpp_nape::geom::ZPP_Vec2 obj){
{
		HX_STACK_PUSH("ZPP_Vec2::remove","zpp_nape/geom/Vec2.hx",409);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(410)
		{
		}
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			{
			}
			HX_STACK_LINE(418)
			::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(418)
			::zpp_nape::geom::ZPP_Vec2 cur = this->next;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(418)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(418)
			while(((cur != null()))){
				HX_STACK_LINE(418)
				if (((cur == obj))){
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						{
						}
						HX_STACK_LINE(418)
						::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(418)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(418)
						if (((pre == null()))){
							HX_STACK_LINE(418)
							old = this->next;
							HX_STACK_LINE(418)
							ret1 = old->next;
							HX_STACK_LINE(418)
							this->next = ret1;
							HX_STACK_LINE(418)
							if (((this->next == null()))){
								HX_STACK_LINE(418)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(418)
							old = pre->next;
							HX_STACK_LINE(418)
							ret1 = old->next;
							HX_STACK_LINE(418)
							pre->next = ret1;
							HX_STACK_LINE(418)
							if (((ret1 == null()))){
								HX_STACK_LINE(418)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(418)
						old->_inuse = false;
						HX_STACK_LINE(418)
						{
						}
						HX_STACK_LINE(418)
						this->modified = true;
						HX_STACK_LINE(418)
						(this->length)--;
						HX_STACK_LINE(418)
						this->pushmod = true;
						HX_STACK_LINE(418)
						ret1;
					}
					HX_STACK_LINE(418)
					ret = true;
					HX_STACK_LINE(418)
					break;
				}
				HX_STACK_LINE(418)
				pre = cur;
				HX_STACK_LINE(418)
				cur = cur->next;
			}
			HX_STACK_LINE(418)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,remove,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZPP_Vec2::inlined_pop_unsafe","zpp_nape/geom/Vec2.hx",396);
	HX_STACK_THIS(this);
	HX_STACK_LINE(397)
	{
	}
	HX_STACK_LINE(405)
	::zpp_nape::geom::ZPP_Vec2 ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(406)
	this->pop();
	HX_STACK_LINE(407)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZPP_Vec2::pop_unsafe","zpp_nape/geom/Vec2.hx",391);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",392);
			{
				HX_STACK_LINE(392)
				{
				}
				HX_STACK_LINE(392)
				::zpp_nape::geom::ZPP_Vec2 ret = __this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(392)
				__this->pop();
				HX_STACK_LINE(392)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(391)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,pop_unsafe,return )

Void ZPP_Vec2_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZPP_Vec2::inlined_pop","zpp_nape/geom/Vec2.hx",372);
		HX_STACK_THIS(this);
		HX_STACK_LINE(373)
		{
		}
		HX_STACK_LINE(381)
		::zpp_nape::geom::ZPP_Vec2 ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(382)
		this->next = ret->next;
		HX_STACK_LINE(383)
		ret->_inuse = false;
		HX_STACK_LINE(386)
		{
		}
		HX_STACK_LINE(387)
		if (((this->next == null()))){
			HX_STACK_LINE(387)
			this->pushmod = true;
		}
		HX_STACK_LINE(388)
		this->modified = true;
		HX_STACK_LINE(389)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,inlined_pop,(void))

Void ZPP_Vec2_obj::pop( ){
{
		HX_STACK_PUSH("ZPP_Vec2::pop","zpp_nape/geom/Vec2.hx",367);
		HX_STACK_THIS(this);
		HX_STACK_LINE(368)
		{
		}
		HX_STACK_LINE(368)
		::zpp_nape::geom::ZPP_Vec2 ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(368)
		this->next = ret->next;
		HX_STACK_LINE(368)
		ret->_inuse = false;
		HX_STACK_LINE(368)
		{
		}
		HX_STACK_LINE(368)
		if (((this->next == null()))){
			HX_STACK_LINE(368)
			this->pushmod = true;
		}
		HX_STACK_LINE(368)
		this->modified = true;
		HX_STACK_LINE(368)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,pop,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::inlined_insert( ::zpp_nape::geom::ZPP_Vec2 cur,::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_PUSH("ZPP_Vec2::inlined_insert","zpp_nape/geom/Vec2.hx",342);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(343)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",351);
			{
				HX_STACK_LINE(352)
				o->_inuse = true;
				HX_STACK_LINE(353)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(351)
	::zpp_nape::geom::ZPP_Vec2 temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(355)
	if (((cur == null()))){
		HX_STACK_LINE(356)
		temp->next = this->next;
		HX_STACK_LINE(357)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(360)
		temp->next = cur->next;
		HX_STACK_LINE(361)
		cur->next = temp;
	}
	HX_STACK_LINE(363)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(364)
	(this->length)++;
	HX_STACK_LINE(365)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Vec2_obj,inlined_insert,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::insert( ::zpp_nape::geom::ZPP_Vec2 cur,::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_PUSH("ZPP_Vec2::insert","zpp_nape/geom/Vec2.hx",337);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2_obj *__this,::zpp_nape::geom::ZPP_Vec2 &o,::zpp_nape::geom::ZPP_Vec2 &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",338);
			{
				HX_STACK_LINE(338)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",338);
						{
							HX_STACK_LINE(338)
							o->_inuse = true;
							HX_STACK_LINE(338)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(338)
				::zpp_nape::geom::ZPP_Vec2 temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(338)
				if (((cur == null()))){
					HX_STACK_LINE(338)
					temp->next = __this->next;
					HX_STACK_LINE(338)
					__this->next = temp;
				}
				else{
					HX_STACK_LINE(338)
					temp->next = cur->next;
					HX_STACK_LINE(338)
					cur->next = temp;
				}
				HX_STACK_LINE(338)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(338)
				(__this->length)++;
				HX_STACK_LINE(338)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(337)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Vec2_obj,insert,return )

Void ZPP_Vec2_obj::addAll( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_Vec2::addAll","zpp_nape/geom/Vec2.hx",319);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(320)
		{
		}
		HX_STACK_LINE(328)
		{
			HX_STACK_LINE(329)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(330)
			while(((cx_ite != null()))){
				HX_STACK_LINE(331)
				::zpp_nape::geom::ZPP_Vec2 i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(332)
				this->add(i);
				HX_STACK_LINE(333)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,addAll,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::inlined_add( ::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_PUSH("ZPP_Vec2::inlined_add","zpp_nape/geom/Vec2.hx",300);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(301)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",309);
			{
				HX_STACK_LINE(310)
				o->_inuse = true;
				HX_STACK_LINE(311)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(309)
	::zpp_nape::geom::ZPP_Vec2 temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(313)
	temp->next = this->next;
	HX_STACK_LINE(314)
	this->next = temp;
	HX_STACK_LINE(315)
	this->modified = true;
	HX_STACK_LINE(316)
	(this->length)++;
	HX_STACK_LINE(317)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_add,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::add( ::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_PUSH("ZPP_Vec2::add","zpp_nape/geom/Vec2.hx",295);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o,::zpp_nape::geom::ZPP_Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",296);
			{
				HX_STACK_LINE(296)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",296);
						{
							HX_STACK_LINE(296)
							o->_inuse = true;
							HX_STACK_LINE(296)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(296)
				::zpp_nape::geom::ZPP_Vec2 temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(296)
				temp->next = __this->next;
				HX_STACK_LINE(296)
				__this->next = temp;
				HX_STACK_LINE(296)
				__this->modified = true;
				HX_STACK_LINE(296)
				(__this->length)++;
				HX_STACK_LINE(296)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(295)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,add,return )

Void ZPP_Vec2_obj::setbegin( ::zpp_nape::geom::ZPP_Vec2 i){
{
		HX_STACK_PUSH("ZPP_Vec2::setbegin","zpp_nape/geom/Vec2.hx",290);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(291)
		this->next = i;
		HX_STACK_LINE(292)
		this->modified = true;
		HX_STACK_LINE(293)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,setbegin,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::begin( ){
	HX_STACK_PUSH("ZPP_Vec2::begin","zpp_nape/geom/Vec2.hx",281);
	HX_STACK_THIS(this);
	HX_STACK_LINE(281)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,begin,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::elem( ){
	HX_STACK_PUSH("ZPP_Vec2::elem","zpp_nape/geom/Vec2.hx",276);
	HX_STACK_THIS(this);
	HX_STACK_LINE(276)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,elem,return )

Void ZPP_Vec2_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Vec2::alloc","zpp_nape/geom/Vec2.hx",270);
		HX_STACK_THIS(this);
		HX_STACK_LINE(270)
		this->weak = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,alloc,(void))

Void ZPP_Vec2_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Vec2::free","zpp_nape/geom/Vec2.hx",259);
		HX_STACK_THIS(this);
		HX_STACK_LINE(260)
		if (((this->outer != null()))){
			HX_STACK_LINE(261)
			this->outer->zpp_inner = null();
			HX_STACK_LINE(262)
			this->outer = null();
		}
		HX_STACK_LINE(264)
		this->_isimmutable = null();
		HX_STACK_LINE(265)
		this->_validate = null();
		HX_STACK_LINE(266)
		this->_invalidate = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,free,(void))

::nape::geom::Vec2 ZPP_Vec2_obj::wrapper( ){
	HX_STACK_PUSH("ZPP_Vec2::wrapper","zpp_nape/geom/Vec2.hx",208);
	HX_STACK_THIS(this);
	HX_STACK_LINE(209)
	if (((this->outer == null()))){
		HX_STACK_LINE(210)
		this->outer = ::nape::geom::Vec2_obj::__new(null(),null());
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(212)
			::zpp_nape::geom::ZPP_Vec2 o = this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(213)
			{
			}
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				if (((o->outer != null()))){
					HX_STACK_LINE(221)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(221)
					o->outer = null();
				}
				HX_STACK_LINE(221)
				o->_isimmutable = null();
				HX_STACK_LINE(221)
				o->_validate = null();
				HX_STACK_LINE(221)
				o->_invalidate = null();
			}
			HX_STACK_LINE(222)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(223)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(228)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(230)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,wrapper,return )

Void ZPP_Vec2_obj::immutable( ){
{
		HX_STACK_PUSH("ZPP_Vec2::immutable","zpp_nape/geom/Vec2.hx",195);
		HX_STACK_THIS(this);
		HX_STACK_LINE(197)
		if ((this->_immutable)){
			HX_STACK_LINE(197)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(200)
		if (((this->_isimmutable_dyn() != null()))){
			HX_STACK_LINE(200)
			this->_isimmutable();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,immutable,(void))

Void ZPP_Vec2_obj::invalidate( ){
{
		HX_STACK_PUSH("ZPP_Vec2::invalidate","zpp_nape/geom/Vec2.hx",186);
		HX_STACK_THIS(this);
		HX_STACK_LINE(186)
		if (((this->_invalidate_dyn() != null()))){
			HX_STACK_LINE(187)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,invalidate,(void))

Void ZPP_Vec2_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_Vec2::validate","zpp_nape/geom/Vec2.hx",179);
		HX_STACK_THIS(this);
		HX_STACK_LINE(179)
		if (((this->_validate_dyn() != null()))){
			HX_STACK_LINE(180)
			this->_validate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,validate,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::zpp_pool;

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::get( Float x,Float y,hx::Null< bool >  __o_immutable){
bool immutable = __o_immutable.Default(false);
	HX_STACK_PUSH("ZPP_Vec2::get","zpp_nape/geom/Vec2.hx",632);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(immutable,"immutable");
{
		HX_STACK_LINE(633)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(634)
		{
			HX_STACK_LINE(635)
			if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
				HX_STACK_LINE(635)
				ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
			}
			else{
				HX_STACK_LINE(642)
				ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(643)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(644)
				ret->next = null();
			}
			HX_STACK_LINE(649)
			ret->weak = false;
		}
		HX_STACK_LINE(651)
		ret->_immutable = immutable;
		HX_STACK_LINE(652)
		{
			HX_STACK_LINE(653)
			ret->x = x;
			HX_STACK_LINE(654)
			ret->y = y;
			HX_STACK_LINE(655)
			{
			}
			HX_STACK_LINE(663)
			{
			}
		}
		HX_STACK_LINE(672)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Vec2_obj,get,return )


ZPP_Vec2_obj::ZPP_Vec2_obj()
{
}

void ZPP_Vec2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Vec2);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(weak,"weak");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(_isimmutable,"_isimmutable");
	HX_MARK_MEMBER_NAME(_immutable,"_immutable");
	HX_MARK_MEMBER_NAME(_validate,"_validate");
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_END_CLASS();
}

void ZPP_Vec2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(weak,"weak");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(_isimmutable,"_isimmutable");
	HX_VISIT_MEMBER_NAME(_immutable,"_immutable");
	HX_VISIT_MEMBER_NAME(_validate,"_validate");
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
}

Dynamic ZPP_Vec2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"weak") ) { return weak; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
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
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immutable") ) { return immutable_dyn(); }
		if (HX_FIELD_EQ(inName,"_validate") ) { return _validate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"_immutable") ) { return _immutable; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return _invalidate; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_isimmutable") ) { return _isimmutable; }
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

Dynamic ZPP_Vec2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weak") ) { weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { _validate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_immutable") ) { _immutable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_isimmutable") ) { _isimmutable=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Vec2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("weak"));
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("_immutable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("copy"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
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
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("weak"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("outer"),
	HX_CSTRING("immutable"),
	HX_CSTRING("_isimmutable"),
	HX_CSTRING("_immutable"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("validate"),
	HX_CSTRING("_validate"),
	HX_CSTRING("_invalidate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Vec2_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Vec2_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Vec2_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Vec2_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Vec2_obj::__mClass;

void ZPP_Vec2_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Vec2"), hx::TCanCast< ZPP_Vec2_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Vec2_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
