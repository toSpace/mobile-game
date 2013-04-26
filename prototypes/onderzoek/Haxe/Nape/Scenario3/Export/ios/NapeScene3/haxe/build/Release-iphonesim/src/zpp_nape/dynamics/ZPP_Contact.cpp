#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_Contact_obj::__construct()
{
HX_STACK_PUSH("ZPP_Contact::new","zpp_nape/dynamics/Contact.hx",174);
{
	HX_STACK_LINE(282)
	this->length = (int)0;
	HX_STACK_LINE(281)
	this->pushmod = false;
	HX_STACK_LINE(280)
	this->modified = false;
	HX_STACK_LINE(279)
	this->_inuse = false;
	HX_STACK_LINE(268)
	this->next = null();
	HX_STACK_LINE(232)
	this->elasticity = 0.0;
	HX_STACK_LINE(231)
	this->dist = 0.0;
	HX_STACK_LINE(230)
	this->fresh = false;
	HX_STACK_LINE(229)
	this->hash = (int)0;
	HX_STACK_LINE(228)
	this->stamp = (int)0;
	HX_STACK_LINE(227)
	this->posOnly = false;
	HX_STACK_LINE(226)
	this->active = false;
	HX_STACK_LINE(225)
	this->inner = null();
	HX_STACK_LINE(224)
	this->arbiter = null();
	HX_STACK_LINE(213)
	this->wrap_position = null();
	HX_STACK_LINE(187)
	this->py = 0.0;
	HX_STACK_LINE(186)
	this->px = 0.0;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(233)
	this->inner = ::zpp_nape::dynamics::ZPP_IContact_obj::__new();
}
;
	return null();
}

ZPP_Contact_obj::~ZPP_Contact_obj() { }

Dynamic ZPP_Contact_obj::__CreateEmpty() { return  new ZPP_Contact_obj; }
hx::ObjectPtr< ZPP_Contact_obj > ZPP_Contact_obj::__new()
{  hx::ObjectPtr< ZPP_Contact_obj > result = new ZPP_Contact_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Contact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Contact_obj > result = new ZPP_Contact_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::at( int ind){
	HX_STACK_PUSH("ZPP_Contact::at","zpp_nape/dynamics/Contact.hx",611);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(612)
	{
	}
	HX_STACK_LINE(620)
	::zpp_nape::dynamics::ZPP_Contact it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(621)
	return (  (((it != null()))) ? ::zpp_nape::dynamics::ZPP_Contact(it) : ::zpp_nape::dynamics::ZPP_Contact(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,at,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZPP_Contact::iterator_at","zpp_nape/dynamics/Contact.hx",598);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(599)
	{
	}
	HX_STACK_LINE(607)
	::zpp_nape::dynamics::ZPP_Contact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(608)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(608)
		ret = ret->next;
	}
	HX_STACK_LINE(609)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::back( ){
	HX_STACK_PUSH("ZPP_Contact::back","zpp_nape/dynamics/Contact.hx",589);
	HX_STACK_THIS(this);
	HX_STACK_LINE(590)
	::zpp_nape::dynamics::ZPP_Contact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(591)
	::zpp_nape::dynamics::ZPP_Contact cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(592)
	while(((cur != null()))){
		HX_STACK_LINE(593)
		ret = cur;
		HX_STACK_LINE(594)
		cur = cur->next;
	}
	HX_STACK_LINE(596)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,back,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::front( ){
	HX_STACK_PUSH("ZPP_Contact::front","zpp_nape/dynamics/Contact.hx",586);
	HX_STACK_THIS(this);
	HX_STACK_LINE(586)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,front,return )

bool ZPP_Contact_obj::inlined_has( ::zpp_nape::dynamics::ZPP_Contact obj){
	HX_STACK_PUSH("ZPP_Contact::inlined_has","zpp_nape/dynamics/Contact.hx",556);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(557)
	{
	}
	HX_STACK_LINE(565)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(566)
	{
		HX_STACK_LINE(567)
		ret = false;
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(569)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(570)
			while(((cx_ite != null()))){
				HX_STACK_LINE(571)
				::zpp_nape::dynamics::ZPP_Contact npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(572)
				if (((npite == obj))){
					HX_STACK_LINE(574)
					ret = true;
					HX_STACK_LINE(575)
					break;
				}
				HX_STACK_LINE(578)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(582)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_has,return )

bool ZPP_Contact_obj::has( ::zpp_nape::dynamics::ZPP_Contact obj){
	HX_STACK_PUSH("ZPP_Contact::has","zpp_nape/dynamics/Contact.hx",551);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::dynamics::ZPP_Contact_obj *__this,::zpp_nape::dynamics::ZPP_Contact &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",552);
			{
				HX_STACK_LINE(552)
				{
				}
				HX_STACK_LINE(552)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(552)
				{
					HX_STACK_LINE(552)
					ret = false;
					HX_STACK_LINE(552)
					{
						HX_STACK_LINE(552)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(552)
						while(((cx_ite != null()))){
							HX_STACK_LINE(552)
							::zpp_nape::dynamics::ZPP_Contact npite = cx_ite;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(552)
							if (((npite == obj))){
								HX_STACK_LINE(552)
								ret = true;
								HX_STACK_LINE(552)
								break;
							}
							HX_STACK_LINE(552)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(552)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(551)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,has,return )

int ZPP_Contact_obj::size( ){
	HX_STACK_PUSH("ZPP_Contact::size","zpp_nape/dynamics/Contact.hx",548);
	HX_STACK_THIS(this);
	HX_STACK_LINE(548)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,size,return )

bool ZPP_Contact_obj::empty( ){
	HX_STACK_PUSH("ZPP_Contact::empty","zpp_nape/dynamics/Contact.hx",543);
	HX_STACK_THIS(this);
	HX_STACK_LINE(543)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,empty,return )

Void ZPP_Contact_obj::reverse( ){
{
		HX_STACK_PUSH("ZPP_Contact::reverse","zpp_nape/dynamics/Contact.hx",528);
		HX_STACK_THIS(this);
		HX_STACK_LINE(529)
		::zpp_nape::dynamics::ZPP_Contact cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(530)
		::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(531)
		while(((cur != null()))){
			HX_STACK_LINE(532)
			::zpp_nape::dynamics::ZPP_Contact nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(533)
			cur->next = pre;
			HX_STACK_LINE(534)
			this->next = cur;
			HX_STACK_LINE(535)
			pre = cur;
			HX_STACK_LINE(536)
			cur = nx;
		}
		HX_STACK_LINE(538)
		this->modified = true;
		HX_STACK_LINE(539)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,reverse,(void))

Void ZPP_Contact_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZPP_Contact::inlined_clear","zpp_nape/dynamics/Contact.hx",522);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,inlined_clear,(void))

Void ZPP_Contact_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Contact::clear","zpp_nape/dynamics/Contact.hx",517);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,clear,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::splice( ::zpp_nape::dynamics::ZPP_Contact pre,int n){
	HX_STACK_PUSH("ZPP_Contact::splice","zpp_nape/dynamics/Contact.hx",513);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(514)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(514)
		this->erase(pre);
	}
	HX_STACK_LINE(515)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Contact_obj,splice,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::inlined_erase( ::zpp_nape::dynamics::ZPP_Contact pre){
	HX_STACK_PUSH("ZPP_Contact::inlined_erase","zpp_nape/dynamics/Contact.hx",481);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(482)
	{
	}
	HX_STACK_LINE(490)
	::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(491)
	::zpp_nape::dynamics::ZPP_Contact ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(492)
	if (((pre == null()))){
		HX_STACK_LINE(493)
		old = this->next;
		HX_STACK_LINE(494)
		ret = old->next;
		HX_STACK_LINE(495)
		this->next = ret;
		HX_STACK_LINE(496)
		if (((this->next == null()))){
			HX_STACK_LINE(496)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(499)
		old = pre->next;
		HX_STACK_LINE(500)
		ret = old->next;
		HX_STACK_LINE(501)
		pre->next = ret;
		HX_STACK_LINE(502)
		if (((ret == null()))){
			HX_STACK_LINE(502)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(504)
	old->_inuse = false;
	HX_STACK_LINE(507)
	{
	}
	HX_STACK_LINE(508)
	this->modified = true;
	HX_STACK_LINE(509)
	(this->length)--;
	HX_STACK_LINE(510)
	this->pushmod = true;
	HX_STACK_LINE(511)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_erase,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::erase( ::zpp_nape::dynamics::ZPP_Contact pre){
	HX_STACK_PUSH("ZPP_Contact::erase","zpp_nape/dynamics/Contact.hx",476);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &pre,::zpp_nape::dynamics::ZPP_Contact_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",477);
			{
				HX_STACK_LINE(477)
				{
				}
				HX_STACK_LINE(477)
				::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(477)
				::zpp_nape::dynamics::ZPP_Contact ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(477)
				if (((pre == null()))){
					HX_STACK_LINE(477)
					old = __this->next;
					HX_STACK_LINE(477)
					ret = old->next;
					HX_STACK_LINE(477)
					__this->next = ret;
					HX_STACK_LINE(477)
					if (((__this->next == null()))){
						HX_STACK_LINE(477)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(477)
					old = pre->next;
					HX_STACK_LINE(477)
					ret = old->next;
					HX_STACK_LINE(477)
					pre->next = ret;
					HX_STACK_LINE(477)
					if (((ret == null()))){
						HX_STACK_LINE(477)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(477)
				old->_inuse = false;
				HX_STACK_LINE(477)
				{
				}
				HX_STACK_LINE(477)
				__this->modified = true;
				HX_STACK_LINE(477)
				(__this->length)--;
				HX_STACK_LINE(477)
				__this->pushmod = true;
				HX_STACK_LINE(477)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(476)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,erase,return )

bool ZPP_Contact_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_Contact obj){
	HX_STACK_PUSH("ZPP_Contact::inlined_try_remove","zpp_nape/dynamics/Contact.hx",453);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(454)
	{
	}
	HX_STACK_LINE(462)
	::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(463)
	::zpp_nape::dynamics::ZPP_Contact cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(464)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(465)
	while(((cur != null()))){
		HX_STACK_LINE(466)
		if (((cur == obj))){
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				{
				}
				HX_STACK_LINE(467)
				::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(467)
				::zpp_nape::dynamics::ZPP_Contact ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(467)
				if (((pre == null()))){
					HX_STACK_LINE(467)
					old = this->next;
					HX_STACK_LINE(467)
					ret1 = old->next;
					HX_STACK_LINE(467)
					this->next = ret1;
					HX_STACK_LINE(467)
					if (((this->next == null()))){
						HX_STACK_LINE(467)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(467)
					old = pre->next;
					HX_STACK_LINE(467)
					ret1 = old->next;
					HX_STACK_LINE(467)
					pre->next = ret1;
					HX_STACK_LINE(467)
					if (((ret1 == null()))){
						HX_STACK_LINE(467)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(467)
				old->_inuse = false;
				HX_STACK_LINE(467)
				{
				}
				HX_STACK_LINE(467)
				this->modified = true;
				HX_STACK_LINE(467)
				(this->length)--;
				HX_STACK_LINE(467)
				this->pushmod = true;
				HX_STACK_LINE(467)
				ret1;
			}
			HX_STACK_LINE(468)
			ret = true;
			HX_STACK_LINE(469)
			break;
		}
		HX_STACK_LINE(471)
		pre = cur;
		HX_STACK_LINE(472)
		cur = cur->next;
	}
	HX_STACK_LINE(474)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_try_remove,return )

Void ZPP_Contact_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_Contact obj){
{
		HX_STACK_PUSH("ZPP_Contact::inlined_remove","zpp_nape/dynamics/Contact.hx",440);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(441)
		{
		}
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			{
			}
			HX_STACK_LINE(449)
			::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(449)
			::zpp_nape::dynamics::ZPP_Contact cur = this->next;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(449)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(449)
			while(((cur != null()))){
				HX_STACK_LINE(449)
				if (((cur == obj))){
					HX_STACK_LINE(449)
					{
						HX_STACK_LINE(449)
						{
						}
						HX_STACK_LINE(449)
						::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(449)
						::zpp_nape::dynamics::ZPP_Contact ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(449)
						if (((pre == null()))){
							HX_STACK_LINE(449)
							old = this->next;
							HX_STACK_LINE(449)
							ret1 = old->next;
							HX_STACK_LINE(449)
							this->next = ret1;
							HX_STACK_LINE(449)
							if (((this->next == null()))){
								HX_STACK_LINE(449)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(449)
							old = pre->next;
							HX_STACK_LINE(449)
							ret1 = old->next;
							HX_STACK_LINE(449)
							pre->next = ret1;
							HX_STACK_LINE(449)
							if (((ret1 == null()))){
								HX_STACK_LINE(449)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(449)
						old->_inuse = false;
						HX_STACK_LINE(449)
						{
						}
						HX_STACK_LINE(449)
						this->modified = true;
						HX_STACK_LINE(449)
						(this->length)--;
						HX_STACK_LINE(449)
						this->pushmod = true;
						HX_STACK_LINE(449)
						ret1;
					}
					HX_STACK_LINE(449)
					ret = true;
					HX_STACK_LINE(449)
					break;
				}
				HX_STACK_LINE(449)
				pre = cur;
				HX_STACK_LINE(449)
				cur = cur->next;
			}
			HX_STACK_LINE(449)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_remove,(void))

bool ZPP_Contact_obj::try_remove( ::zpp_nape::dynamics::ZPP_Contact obj){
	HX_STACK_PUSH("ZPP_Contact::try_remove","zpp_nape/dynamics/Contact.hx",415);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(416)
	{
	}
	HX_STACK_LINE(424)
	::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(425)
	::zpp_nape::dynamics::ZPP_Contact cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(426)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(427)
	while(((cur != null()))){
		HX_STACK_LINE(428)
		if (((cur == obj))){
			HX_STACK_LINE(429)
			this->erase(pre);
			HX_STACK_LINE(430)
			ret = true;
			HX_STACK_LINE(431)
			break;
		}
		HX_STACK_LINE(433)
		pre = cur;
		HX_STACK_LINE(434)
		cur = cur->next;
	}
	HX_STACK_LINE(436)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,try_remove,return )

Void ZPP_Contact_obj::remove( ::zpp_nape::dynamics::ZPP_Contact obj){
{
		HX_STACK_PUSH("ZPP_Contact::remove","zpp_nape/dynamics/Contact.hx",404);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(405)
		{
		}
		HX_STACK_LINE(413)
		{
			HX_STACK_LINE(413)
			{
			}
			HX_STACK_LINE(413)
			::zpp_nape::dynamics::ZPP_Contact pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(413)
			::zpp_nape::dynamics::ZPP_Contact cur = this->next;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(413)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(413)
			while(((cur != null()))){
				HX_STACK_LINE(413)
				if (((cur == obj))){
					HX_STACK_LINE(413)
					{
						HX_STACK_LINE(413)
						{
						}
						HX_STACK_LINE(413)
						::zpp_nape::dynamics::ZPP_Contact old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(413)
						::zpp_nape::dynamics::ZPP_Contact ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(413)
						if (((pre == null()))){
							HX_STACK_LINE(413)
							old = this->next;
							HX_STACK_LINE(413)
							ret1 = old->next;
							HX_STACK_LINE(413)
							this->next = ret1;
							HX_STACK_LINE(413)
							if (((this->next == null()))){
								HX_STACK_LINE(413)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(413)
							old = pre->next;
							HX_STACK_LINE(413)
							ret1 = old->next;
							HX_STACK_LINE(413)
							pre->next = ret1;
							HX_STACK_LINE(413)
							if (((ret1 == null()))){
								HX_STACK_LINE(413)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(413)
						old->_inuse = false;
						HX_STACK_LINE(413)
						{
						}
						HX_STACK_LINE(413)
						this->modified = true;
						HX_STACK_LINE(413)
						(this->length)--;
						HX_STACK_LINE(413)
						this->pushmod = true;
						HX_STACK_LINE(413)
						ret1;
					}
					HX_STACK_LINE(413)
					ret = true;
					HX_STACK_LINE(413)
					break;
				}
				HX_STACK_LINE(413)
				pre = cur;
				HX_STACK_LINE(413)
				cur = cur->next;
			}
			HX_STACK_LINE(413)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,remove,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZPP_Contact::inlined_pop_unsafe","zpp_nape/dynamics/Contact.hx",391);
	HX_STACK_THIS(this);
	HX_STACK_LINE(392)
	{
	}
	HX_STACK_LINE(400)
	::zpp_nape::dynamics::ZPP_Contact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(401)
	this->pop();
	HX_STACK_LINE(402)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZPP_Contact::pop_unsafe","zpp_nape/dynamics/Contact.hx",386);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",387);
			{
				HX_STACK_LINE(387)
				{
				}
				HX_STACK_LINE(387)
				::zpp_nape::dynamics::ZPP_Contact ret = __this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(387)
				__this->pop();
				HX_STACK_LINE(387)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(386)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,pop_unsafe,return )

Void ZPP_Contact_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZPP_Contact::inlined_pop","zpp_nape/dynamics/Contact.hx",367);
		HX_STACK_THIS(this);
		HX_STACK_LINE(368)
		{
		}
		HX_STACK_LINE(376)
		::zpp_nape::dynamics::ZPP_Contact ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(377)
		this->next = ret->next;
		HX_STACK_LINE(378)
		ret->_inuse = false;
		HX_STACK_LINE(381)
		{
		}
		HX_STACK_LINE(382)
		if (((this->next == null()))){
			HX_STACK_LINE(382)
			this->pushmod = true;
		}
		HX_STACK_LINE(383)
		this->modified = true;
		HX_STACK_LINE(384)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,inlined_pop,(void))

Void ZPP_Contact_obj::pop( ){
{
		HX_STACK_PUSH("ZPP_Contact::pop","zpp_nape/dynamics/Contact.hx",362);
		HX_STACK_THIS(this);
		HX_STACK_LINE(363)
		{
		}
		HX_STACK_LINE(363)
		::zpp_nape::dynamics::ZPP_Contact ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(363)
		this->next = ret->next;
		HX_STACK_LINE(363)
		ret->_inuse = false;
		HX_STACK_LINE(363)
		{
		}
		HX_STACK_LINE(363)
		if (((this->next == null()))){
			HX_STACK_LINE(363)
			this->pushmod = true;
		}
		HX_STACK_LINE(363)
		this->modified = true;
		HX_STACK_LINE(363)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,pop,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::inlined_insert( ::zpp_nape::dynamics::ZPP_Contact cur,::zpp_nape::dynamics::ZPP_Contact o){
	HX_STACK_PUSH("ZPP_Contact::inlined_insert","zpp_nape/dynamics/Contact.hx",337);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(338)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &o){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",346);
			{
				HX_STACK_LINE(347)
				o->_inuse = true;
				HX_STACK_LINE(348)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(346)
	::zpp_nape::dynamics::ZPP_Contact temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(350)
	if (((cur == null()))){
		HX_STACK_LINE(351)
		temp->next = this->next;
		HX_STACK_LINE(352)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(355)
		temp->next = cur->next;
		HX_STACK_LINE(356)
		cur->next = temp;
	}
	HX_STACK_LINE(358)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(359)
	(this->length)++;
	HX_STACK_LINE(360)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Contact_obj,inlined_insert,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::insert( ::zpp_nape::dynamics::ZPP_Contact cur,::zpp_nape::dynamics::ZPP_Contact o){
	HX_STACK_PUSH("ZPP_Contact::insert","zpp_nape/dynamics/Contact.hx",332);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact_obj *__this,::zpp_nape::dynamics::ZPP_Contact &o,::zpp_nape::dynamics::ZPP_Contact &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",333);
			{
				HX_STACK_LINE(333)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &o){
						HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",333);
						{
							HX_STACK_LINE(333)
							o->_inuse = true;
							HX_STACK_LINE(333)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(333)
				::zpp_nape::dynamics::ZPP_Contact temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(333)
				if (((cur == null()))){
					HX_STACK_LINE(333)
					temp->next = __this->next;
					HX_STACK_LINE(333)
					__this->next = temp;
				}
				else{
					HX_STACK_LINE(333)
					temp->next = cur->next;
					HX_STACK_LINE(333)
					cur->next = temp;
				}
				HX_STACK_LINE(333)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(333)
				(__this->length)++;
				HX_STACK_LINE(333)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(332)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Contact_obj,insert,return )

Void ZPP_Contact_obj::addAll( ::zpp_nape::dynamics::ZPP_Contact x){
{
		HX_STACK_PUSH("ZPP_Contact::addAll","zpp_nape/dynamics/Contact.hx",314);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(315)
		{
		}
		HX_STACK_LINE(323)
		{
			HX_STACK_LINE(324)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(325)
			while(((cx_ite != null()))){
				HX_STACK_LINE(326)
				::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(327)
				this->add(i);
				HX_STACK_LINE(328)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::inlined_add( ::zpp_nape::dynamics::ZPP_Contact o){
	HX_STACK_PUSH("ZPP_Contact::inlined_add","zpp_nape/dynamics/Contact.hx",295);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(296)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &o){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",304);
			{
				HX_STACK_LINE(305)
				o->_inuse = true;
				HX_STACK_LINE(306)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(304)
	::zpp_nape::dynamics::ZPP_Contact temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(308)
	temp->next = this->next;
	HX_STACK_LINE(309)
	this->next = temp;
	HX_STACK_LINE(310)
	this->modified = true;
	HX_STACK_LINE(311)
	(this->length)++;
	HX_STACK_LINE(312)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::add( ::zpp_nape::dynamics::ZPP_Contact o){
	HX_STACK_PUSH("ZPP_Contact::add","zpp_nape/dynamics/Contact.hx",290);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &o,::zpp_nape::dynamics::ZPP_Contact_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",291);
			{
				HX_STACK_LINE(291)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::dynamics::ZPP_Contact Block( ::zpp_nape::dynamics::ZPP_Contact &o){
						HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",291);
						{
							HX_STACK_LINE(291)
							o->_inuse = true;
							HX_STACK_LINE(291)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(291)
				::zpp_nape::dynamics::ZPP_Contact temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(291)
				temp->next = __this->next;
				HX_STACK_LINE(291)
				__this->next = temp;
				HX_STACK_LINE(291)
				__this->modified = true;
				HX_STACK_LINE(291)
				(__this->length)++;
				HX_STACK_LINE(291)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(290)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,add,return )

Void ZPP_Contact_obj::setbegin( ::zpp_nape::dynamics::ZPP_Contact i){
{
		HX_STACK_PUSH("ZPP_Contact::setbegin","zpp_nape/dynamics/Contact.hx",285);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(286)
		this->next = i;
		HX_STACK_LINE(287)
		this->modified = true;
		HX_STACK_LINE(288)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Contact_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::begin( ){
	HX_STACK_PUSH("ZPP_Contact::begin","zpp_nape/dynamics/Contact.hx",276);
	HX_STACK_THIS(this);
	HX_STACK_LINE(276)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,begin,return )

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::elem( ){
	HX_STACK_PUSH("ZPP_Contact::elem","zpp_nape/dynamics/Contact.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_LINE(271)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,elem,return )

Void ZPP_Contact_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Contact::alloc","zpp_nape/dynamics/Contact.hx",243);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,alloc,(void))

Void ZPP_Contact_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Contact::free","zpp_nape/dynamics/Contact.hx",238);
		HX_STACK_THIS(this);
		HX_STACK_LINE(238)
		this->arbiter = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,free,(void))

bool ZPP_Contact_obj::inactiveme( ){
	HX_STACK_PUSH("ZPP_Contact::inactiveme","zpp_nape/dynamics/Contact.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_LINE(221)
	return !(((bool((bool(this->active) && bool((this->arbiter != null())))) && bool(!(!(this->arbiter->active))))));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,inactiveme,return )

Void ZPP_Contact_obj::getposition( ){
{
		HX_STACK_PUSH("ZPP_Contact::getposition","zpp_nape/dynamics/Contact.hx",214);
		HX_STACK_THIS(this);
		HX_STACK_LINE(215)
		::zpp_nape::dynamics::ZPP_Contact me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ){
				HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",216);
				{
					HX_STACK_LINE(216)
					Float x = (int)0;		HX_STACK_VAR(x,"x");
					Float y = (int)0;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(216)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(216)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(216)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(216)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(216)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(216)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(216)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(216)
						ret->zpp_pool = null();
						HX_STACK_LINE(216)
						ret->zpp_disp = false;
						HX_STACK_LINE(216)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(216)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(216)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",216);
								{
									HX_STACK_LINE(216)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(216)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(216)
									{
										HX_STACK_LINE(216)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(216)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(216)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(216)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(216)
											ret1->next = null();
										}
										HX_STACK_LINE(216)
										ret1->weak = false;
									}
									HX_STACK_LINE(216)
									ret1->_immutable = immutable;
									HX_STACK_LINE(216)
									{
										HX_STACK_LINE(216)
										ret1->x = x;
										HX_STACK_LINE(216)
										ret1->y = y;
										HX_STACK_LINE(216)
										{
										}
										HX_STACK_LINE(216)
										{
										}
									}
									HX_STACK_LINE(216)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(216)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(216)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(216)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(216)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(216)
						{
							HX_STACK_LINE(216)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(216)
							if ((_this->_immutable)){
								HX_STACK_LINE(216)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(216)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(216)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(216)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(216)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",216);
								{
									HX_STACK_LINE(216)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(216)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(216)
									{
										HX_STACK_LINE(216)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(216)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(216)
											_this->_validate();
										}
									}
									HX_STACK_LINE(216)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",216);
								{
									HX_STACK_LINE(216)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(216)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(216)
									{
										HX_STACK_LINE(216)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(216)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(216)
											_this->_validate();
										}
									}
									HX_STACK_LINE(216)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(216)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(216)
							{
								HX_STACK_LINE(216)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(216)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(216)
								{
								}
								HX_STACK_LINE(216)
								{
								}
							}
							HX_STACK_LINE(216)
							{
								HX_STACK_LINE(216)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(216)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(216)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(216)
						ret;
					}
					HX_STACK_LINE(216)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(216)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(216)
		this->wrap_position = _Function_1_1::Block();
		HX_STACK_LINE(217)
		this->wrap_position->zpp_inner->_inuse = true;
		HX_STACK_LINE(218)
		this->wrap_position->zpp_inner->_immutable = true;
		HX_STACK_LINE(219)
		this->wrap_position->zpp_inner->_validate = this->position_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,getposition,(void))

Void ZPP_Contact_obj::position_validate( ){
{
		HX_STACK_PUSH("ZPP_Contact::position_validate","zpp_nape/dynamics/Contact.hx",188);
		HX_STACK_THIS(this);
		HX_STACK_LINE(190)
		if ((this->inactiveme())){
			HX_STACK_LINE(190)
			hx::Throw (HX_CSTRING("Error: Contact not currently in use"));
		}
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(193)
			this->wrap_position->zpp_inner->x = this->px;
			HX_STACK_LINE(194)
			this->wrap_position->zpp_inner->y = this->py;
			HX_STACK_LINE(195)
			{
			}
			HX_STACK_LINE(203)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,position_validate,(void))

::nape::dynamics::Contact ZPP_Contact_obj::wrapper( ){
	HX_STACK_PUSH("ZPP_Contact::wrapper","zpp_nape/dynamics/Contact.hx",177);
	HX_STACK_THIS(this);
	HX_STACK_LINE(178)
	if (((this->outer == null()))){
		HX_STACK_LINE(179)
		::zpp_nape::dynamics::ZPP_Contact_obj::internal = true;
		HX_STACK_LINE(180)
		this->outer = ::nape::dynamics::Contact_obj::__new();
		HX_STACK_LINE(181)
		::zpp_nape::dynamics::ZPP_Contact_obj::internal = false;
		HX_STACK_LINE(182)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(184)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Contact_obj,wrapper,return )

bool ZPP_Contact_obj::internal;

::zpp_nape::dynamics::ZPP_Contact ZPP_Contact_obj::zpp_pool;


ZPP_Contact_obj::ZPP_Contact_obj()
{
}

void ZPP_Contact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Contact);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(dist,"dist");
	HX_MARK_MEMBER_NAME(fresh,"fresh");
	HX_MARK_MEMBER_NAME(hash,"hash");
	HX_MARK_MEMBER_NAME(stamp,"stamp");
	HX_MARK_MEMBER_NAME(posOnly,"posOnly");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(inner,"inner");
	HX_MARK_MEMBER_NAME(arbiter,"arbiter");
	HX_MARK_MEMBER_NAME(wrap_position,"wrap_position");
	HX_MARK_MEMBER_NAME(py,"py");
	HX_MARK_MEMBER_NAME(px,"px");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_END_CLASS();
}

void ZPP_Contact_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(dist,"dist");
	HX_VISIT_MEMBER_NAME(fresh,"fresh");
	HX_VISIT_MEMBER_NAME(hash,"hash");
	HX_VISIT_MEMBER_NAME(stamp,"stamp");
	HX_VISIT_MEMBER_NAME(posOnly,"posOnly");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(inner,"inner");
	HX_VISIT_MEMBER_NAME(arbiter,"arbiter");
	HX_VISIT_MEMBER_NAME(wrap_position,"wrap_position");
	HX_VISIT_MEMBER_NAME(py,"py");
	HX_VISIT_MEMBER_NAME(px,"px");
	HX_VISIT_MEMBER_NAME(outer,"outer");
}

Dynamic ZPP_Contact_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		if (HX_FIELD_EQ(inName,"py") ) { return py; }
		if (HX_FIELD_EQ(inName,"px") ) { return px; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"dist") ) { return dist; }
		if (HX_FIELD_EQ(inName,"hash") ) { return hash; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"fresh") ) { return fresh; }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp; }
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { return _inuse; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		if (HX_FIELD_EQ(inName,"posOnly") ) { return posOnly; }
		if (HX_FIELD_EQ(inName,"arbiter") ) { return arbiter; }
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { return internal; }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"inactiveme") ) { return inactiveme_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"getposition") ) { return getposition_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_position") ) { return wrap_position; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"position_validate") ) { return position_validate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Contact_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"py") ) { py=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"px") ) { px=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dist") ) { dist=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hash") ) { hash=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fresh") ) { fresh=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stamp") ) { stamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::dynamics::Contact >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posOnly") ) { posOnly=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arbiter") ) { arbiter=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::dynamics::ZPP_Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_position") ) { wrap_position=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Contact_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("dist"));
	outFields->push(HX_CSTRING("fresh"));
	outFields->push(HX_CSTRING("hash"));
	outFields->push(HX_CSTRING("stamp"));
	outFields->push(HX_CSTRING("posOnly"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("inner"));
	outFields->push(HX_CSTRING("arbiter"));
	outFields->push(HX_CSTRING("wrap_position"));
	outFields->push(HX_CSTRING("py"));
	outFields->push(HX_CSTRING("px"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("internal"),
	HX_CSTRING("zpp_pool"),
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
	HX_CSTRING("_inuse"),
	HX_CSTRING("begin"),
	HX_CSTRING("elem"),
	HX_CSTRING("next"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("elasticity"),
	HX_CSTRING("dist"),
	HX_CSTRING("fresh"),
	HX_CSTRING("hash"),
	HX_CSTRING("stamp"),
	HX_CSTRING("posOnly"),
	HX_CSTRING("active"),
	HX_CSTRING("inner"),
	HX_CSTRING("arbiter"),
	HX_CSTRING("inactiveme"),
	HX_CSTRING("getposition"),
	HX_CSTRING("wrap_position"),
	HX_CSTRING("position_validate"),
	HX_CSTRING("py"),
	HX_CSTRING("px"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Contact_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Contact_obj::internal,"internal");
	HX_MARK_MEMBER_NAME(ZPP_Contact_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Contact_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Contact_obj::internal,"internal");
	HX_VISIT_MEMBER_NAME(ZPP_Contact_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Contact_obj::__mClass;

void ZPP_Contact_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_Contact"), hx::TCanCast< ZPP_Contact_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Contact_obj::__boot()
{
	internal= false;
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace dynamics
