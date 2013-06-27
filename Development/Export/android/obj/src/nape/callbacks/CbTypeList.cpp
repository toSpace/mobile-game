#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeIterator
#include <nape/callbacks/CbTypeIterator.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
namespace nape{
namespace callbacks{

Void CbTypeList_obj::__construct()
{
HX_STACK_PUSH("CbTypeList::new","nape/callbacks/CbTypeList.hx",234);
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(696)
	this->zpp_inner = ::zpp_nape::util::ZPP_CbTypeList_obj::__new();
	HX_STACK_LINE(697)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

CbTypeList_obj::~CbTypeList_obj() { }

Dynamic CbTypeList_obj::__CreateEmpty() { return  new CbTypeList_obj; }
hx::ObjectPtr< CbTypeList_obj > CbTypeList_obj::__new()
{  hx::ObjectPtr< CbTypeList_obj > result = new CbTypeList_obj();
	result->__construct();
	return result;}

Dynamic CbTypeList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CbTypeList_obj > result = new CbTypeList_obj();
	result->__construct();
	return result;}

::nape::callbacks::CbTypeList CbTypeList_obj::filter( Dynamic lambda){
	HX_STACK_PUSH("CbTypeList::filter","nape/callbacks/CbTypeList.hx",779);
	HX_STACK_THIS(this);
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(781)
	if (((lambda == null()))){
		HX_STACK_LINE(781)
		hx::Throw (HX_CSTRING("Error: Cannot select elements of list with null"));
	}
	HX_STACK_LINE(783)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	struct _Function_1_1{
		inline static int Block( ::nape::callbacks::CbTypeList_obj *__this){
			HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",784);
			{
				HX_STACK_LINE(784)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(784)
				if ((__this->zpp_inner->zip_length)){
					HX_STACK_LINE(784)
					__this->zpp_inner->zip_length = false;
					HX_STACK_LINE(784)
					__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
				}
				HX_STACK_LINE(784)
				return __this->zpp_inner->user_length;
			}
			return null();
		}
	};
	HX_STACK_LINE(784)
	while(((i < _Function_1_1::Block(this)))){
		HX_STACK_LINE(785)
		::nape::callbacks::CbType x = this->at(i);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(786)
		try{
			HX_STACK_LINE(786)
			if ((lambda(x).Cast< bool >())){
				HX_STACK_LINE(787)
				(i)++;
			}
			else{
				HX_STACK_LINE(788)
				this->remove(x);
			}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(790)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(794)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(CbTypeList_obj,filter,return )

::nape::callbacks::CbTypeList CbTypeList_obj::foreach( Dynamic lambda){
	HX_STACK_PUSH("CbTypeList::foreach","nape/callbacks/CbTypeList.hx",732);
	HX_STACK_THIS(this);
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(734)
	if (((lambda == null()))){
		HX_STACK_LINE(734)
		hx::Throw (HX_CSTRING("Error: Cannot execute null on list elements"));
	}
	struct _Function_1_1{
		inline static ::nape::callbacks::CbTypeIterator Block( ::nape::callbacks::CbTypeList_obj *__this){
			HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",736);
			{
				HX_STACK_LINE(736)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(736)
				return ::nape::callbacks::CbTypeIterator_obj::get(__this);
			}
			return null();
		}
	};
	HX_STACK_LINE(736)
	::nape::callbacks::CbTypeIterator it = _Function_1_1::Block(this);		HX_STACK_VAR(it,"it");
	struct _Function_1_2{
		inline static bool Block( ::nape::callbacks::CbTypeIterator &it){
			HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",737);
			{
				HX_STACK_LINE(737)
				it->zpp_inner->zpp_inner->valmod();
				struct _Function_2_1{
					inline static int Block( ::nape::callbacks::CbTypeIterator &it){
						HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",737);
						{
							HX_STACK_LINE(737)
							::nape::callbacks::CbTypeList _this = it->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(737)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(737)
							if ((_this->zpp_inner->zip_length)){
								HX_STACK_LINE(737)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(737)
								_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
							}
							HX_STACK_LINE(737)
							return _this->zpp_inner->user_length;
						}
						return null();
					}
				};
				HX_STACK_LINE(737)
				int length = _Function_2_1::Block(it);		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(737)
				it->zpp_critical = true;
				struct _Function_2_2{
					inline static bool Block( ::nape::callbacks::CbTypeIterator &it){
						HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",737);
						{
							HX_STACK_LINE(737)
							{
								HX_STACK_LINE(737)
								it->zpp_next = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;
								HX_STACK_LINE(737)
								::nape::callbacks::CbTypeIterator_obj::zpp_pool = it;
								HX_STACK_LINE(737)
								it->zpp_inner = null();
							}
							HX_STACK_LINE(737)
							return false;
						}
						return null();
					}
				};
				HX_STACK_LINE(737)
				return (  (((it->zpp_i < length))) ? bool(true) : bool(_Function_2_2::Block(it)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(737)
	while((_Function_1_2::Block(it))){
		HX_STACK_LINE(737)
		try{
			struct _Function_3_1{
				inline static ::nape::callbacks::CbType Block( ::nape::callbacks::CbTypeIterator &it){
					HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",739);
					{
						HX_STACK_LINE(739)
						it->zpp_critical = false;
						HX_STACK_LINE(739)
						return it->zpp_inner->at((it->zpp_i)++);
					}
					return null();
				}
			};
			HX_STACK_LINE(738)
			lambda(_Function_3_1::Block(it)).Cast< Void >();
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(742)
					{
						HX_STACK_LINE(743)
						it->zpp_next = ::nape::callbacks::CbTypeIterator_obj::zpp_pool;
						HX_STACK_LINE(744)
						::nape::callbacks::CbTypeIterator_obj::zpp_pool = it;
						HX_STACK_LINE(745)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(747)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(750)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(CbTypeList_obj,foreach,return )

::String CbTypeList_obj::toString( ){
	HX_STACK_PUSH("CbTypeList::toString","nape/callbacks/CbTypeList.hx",702);
	HX_STACK_THIS(this);
	HX_STACK_LINE(703)
	::String ret = HX_CSTRING("[");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(704)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	struct _Function_1_1{
		inline static ::nape::callbacks::CbTypeIterator Block( ::nape::callbacks::CbTypeList_obj *__this){
			HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",705);
			{
				HX_STACK_LINE(705)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(705)
				return ::nape::callbacks::CbTypeIterator_obj::get(__this);
			}
			return null();
		}
	};
	HX_STACK_LINE(705)
	for(::cpp::FastIterator_obj< ::nape::callbacks::CbType > *__it = ::cpp::CreateFastIterator< ::nape::callbacks::CbType >(_Function_1_1::Block(this));  __it->hasNext(); ){
		::nape::callbacks::CbType i = __it->next();
		{
			HX_STACK_LINE(706)
			if ((!(fst))){
				HX_STACK_LINE(706)
				hx::AddEq(ret,HX_CSTRING(","));
			}
			HX_STACK_LINE(707)
			hx::AddEq(ret,(  (((i == null()))) ? ::String(HX_CSTRING("NULL")) : ::String(i->toString()) ));
			HX_STACK_LINE(708)
			fst = false;
		}
;
	}
	HX_STACK_LINE(710)
	return (ret + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(CbTypeList_obj,toString,return )

Void CbTypeList_obj::merge( ::nape::callbacks::CbTypeList xs){
{
		HX_STACK_PUSH("CbTypeList::merge","nape/callbacks/CbTypeList.hx",684);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xs,"xs");
		HX_STACK_LINE(686)
		if (((xs == null()))){
			HX_STACK_LINE(686)
			hx::Throw (HX_CSTRING("Error: Cannot merge with null list"));
		}
		struct _Function_1_1{
			inline static ::nape::callbacks::CbTypeIterator Block( ::nape::callbacks::CbTypeList &xs){
				HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",688);
				{
					HX_STACK_LINE(688)
					xs->zpp_inner->valmod();
					HX_STACK_LINE(688)
					return ::nape::callbacks::CbTypeIterator_obj::get(xs);
				}
				return null();
			}
		};
		HX_STACK_LINE(688)
		for(::cpp::FastIterator_obj< ::nape::callbacks::CbType > *__it = ::cpp::CreateFastIterator< ::nape::callbacks::CbType >(_Function_1_1::Block(xs));  __it->hasNext(); ){
			::nape::callbacks::CbType x = __it->next();
			if ((!(this->has(x)))){
				HX_STACK_LINE(689)
				if ((this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(689)
					this->push(x);
				}
				else{
					HX_STACK_LINE(689)
					this->unshift(x);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CbTypeList_obj,merge,(void))

::nape::callbacks::CbTypeList CbTypeList_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_PUSH("CbTypeList::copy","nape/callbacks/CbTypeList.hx",662);
	HX_STACK_THIS(this);
	HX_STACK_ARG(deep,"deep");
{
		HX_STACK_LINE(663)
		::nape::callbacks::CbTypeList ret = ::nape::callbacks::CbTypeList_obj::__new();		HX_STACK_VAR(ret,"ret");
		struct _Function_1_1{
			inline static ::nape::callbacks::CbTypeIterator Block( ::nape::callbacks::CbTypeList_obj *__this){
				HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",664);
				{
					HX_STACK_LINE(664)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(664)
					return ::nape::callbacks::CbTypeIterator_obj::get(__this);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::nape::callbacks::CbType Block( ){
				HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",664);
				{
					HX_STACK_LINE(666)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("CbType")) + HX_CSTRING(" is not a copyable type")));
					HX_STACK_LINE(668)
					return null();
				}
				return null();
			}
		};
		HX_STACK_LINE(664)
		for(::cpp::FastIterator_obj< ::nape::callbacks::CbType > *__it = ::cpp::CreateFastIterator< ::nape::callbacks::CbType >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::nape::callbacks::CbType i = __it->next();
			ret->push((  ((deep)) ? ::nape::callbacks::CbType(_Function_1_2::Block()) : ::nape::callbacks::CbType(i) ));
		}
		HX_STACK_LINE(671)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(CbTypeList_obj,copy,return )

::nape::callbacks::CbTypeIterator CbTypeList_obj::iterator( ){
	HX_STACK_PUSH("CbTypeList::iterator","nape/callbacks/CbTypeList.hx",647);
	HX_STACK_THIS(this);
	HX_STACK_LINE(648)
	this->zpp_inner->valmod();
	HX_STACK_LINE(651)
	return ::nape::callbacks::CbTypeIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(CbTypeList_obj,iterator,return )

bool CbTypeList_obj::empty( ){
	HX_STACK_PUSH("CbTypeList::empty","nape/callbacks/CbTypeList.hx",631);
	HX_STACK_THIS(this);
	HX_STACK_LINE(631)
	return (this->zpp_inner->inner->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(CbTypeList_obj,empty,return )

Void CbTypeList_obj::clear( ){
{
		HX_STACK_PUSH("CbTypeList::clear","nape/callbacks/CbTypeList.hx",614);
		HX_STACK_THIS(this);
		HX_STACK_LINE(616)
		if ((this->zpp_inner->immutable)){
			HX_STACK_LINE(616)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("CbType")) + HX_CSTRING("List is immutable")));
		}
		HX_STACK_LINE(618)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(618)
			while((!(((this->zpp_inner->inner->head == null()))))){
				HX_STACK_LINE(619)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(621)
			while((!(((this->zpp_inner->inner->head == null()))))){
				HX_STACK_LINE(622)
				this->shift();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CbTypeList_obj,clear,(void))

bool CbTypeList_obj::remove( ::nape::callbacks::CbType obj){
	HX_STACK_PUSH("CbTypeList::remove","nape/callbacks/CbTypeList.hx",576);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(578)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(578)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("CbType")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(580)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(581)
	this->zpp_inner->valmod();
	HX_STACK_LINE(584)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(586)
		ret = false;
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->zpp_inner->inner->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while(((cx_ite != null()))){
				HX_STACK_LINE(590)
				::zpp_nape::callbacks::ZPP_CbType x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(591)
				if (((x == obj->zpp_inner))){
					HX_STACK_LINE(593)
					ret = true;
					HX_STACK_LINE(594)
					break;
				}
				HX_STACK_LINE(597)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(601)
	if ((ret)){
		HX_STACK_LINE(602)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(602)
			this->zpp_inner->subber(obj);
		}
		HX_STACK_LINE(603)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(603)
			this->zpp_inner->inner->remove(obj->zpp_inner);
		}
		HX_STACK_LINE(604)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(606)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(CbTypeList_obj,remove,return )

bool CbTypeList_obj::add( ::nape::callbacks::CbType obj){
	HX_STACK_PUSH("CbTypeList::add","nape/callbacks/CbTypeList.hx",563);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(563)
	return (  ((this->zpp_inner->reverse_flag)) ? bool(this->push(obj)) : bool(this->unshift(obj)) );
}


HX_DEFINE_DYNAMIC_FUNC1(CbTypeList_obj,add,return )

::nape::callbacks::CbType CbTypeList_obj::shift( ){
	HX_STACK_PUSH("CbTypeList::shift","nape/callbacks/CbTypeList.hx",519);
	HX_STACK_THIS(this);
	HX_STACK_LINE(521)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(521)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("CbType")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(523)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(525)
	if (((this->zpp_inner->inner->head == null()))){
		HX_STACK_LINE(525)
		hx::Throw (HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(527)
	this->zpp_inner->valmod();
	HX_STACK_LINE(530)
	::zpp_nape::callbacks::ZPP_CbType ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(532)
		if (((bool((this->zpp_inner->at_ite != null())) && bool((this->zpp_inner->at_ite->next == null()))))){
			HX_STACK_LINE(532)
			this->zpp_inner->at_ite = null();
		}
		struct _Function_2_1{
			inline static int Block( ::nape::callbacks::CbTypeList_obj *__this){
				HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",533);
				{
					HX_STACK_LINE(533)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(533)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(533)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(533)
						__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
					}
					HX_STACK_LINE(533)
					return __this->zpp_inner->user_length;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static int Block( ::nape::callbacks::CbTypeList_obj *__this){
				HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",533);
				{
					HX_STACK_LINE(533)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(533)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(533)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(533)
						__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
					}
					HX_STACK_LINE(533)
					return __this->zpp_inner->user_length;
				}
				return null();
			}
		};
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite = (  (((_Function_2_1::Block(this) == (int)1))) ? ::zpp_nape::util::ZNPNode_ZPP_CbType(null()) : ::zpp_nape::util::ZNPNode_ZPP_CbType(this->zpp_inner->inner->iterator_at((_Function_2_2::Block(this) - (int)2))) );		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(534)
		ret = (  (((ite == null()))) ? ::zpp_nape::callbacks::ZPP_CbType(this->zpp_inner->inner->head->elt) : ::zpp_nape::callbacks::ZPP_CbType(ite->next->elt) );
		HX_STACK_LINE(535)
		::nape::callbacks::CbType retx = ret->outer;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(536)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(536)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(537)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(537)
			this->zpp_inner->inner->erase(ite);
		}
	}
	else{
		HX_STACK_LINE(540)
		ret = this->zpp_inner->inner->head->elt;
		HX_STACK_LINE(541)
		::nape::callbacks::CbType retx = ret->outer;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(542)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(542)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(543)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(543)
			this->zpp_inner->inner->pop();
		}
	}
	HX_STACK_LINE(545)
	this->zpp_inner->invalidate();
	HX_STACK_LINE(546)
	::nape::callbacks::CbType retx = ret->outer;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(CbTypeList_obj,shift,return )

::nape::callbacks::CbType CbTypeList_obj::pop( ){
	HX_STACK_PUSH("CbTypeList::pop","nape/callbacks/CbTypeList.hx",478);
	HX_STACK_THIS(this);
	HX_STACK_LINE(480)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(480)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("CbType")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(482)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(484)
	if (((this->zpp_inner->inner->head == null()))){
		HX_STACK_LINE(484)
		hx::Throw (HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(486)
	this->zpp_inner->valmod();
	HX_STACK_LINE(489)
	::zpp_nape::callbacks::ZPP_CbType ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(491)
		ret = this->zpp_inner->inner->head->elt;
		HX_STACK_LINE(492)
		::nape::callbacks::CbType retx = ret->outer;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(493)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(494)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(494)
			this->zpp_inner->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(497)
		if (((bool((this->zpp_inner->at_ite != null())) && bool((this->zpp_inner->at_ite->next == null()))))){
			HX_STACK_LINE(497)
			this->zpp_inner->at_ite = null();
		}
		struct _Function_2_1{
			inline static int Block( ::nape::callbacks::CbTypeList_obj *__this){
				HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",498);
				{
					HX_STACK_LINE(498)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(498)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(498)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(498)
						__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
					}
					HX_STACK_LINE(498)
					return __this->zpp_inner->user_length;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static int Block( ::nape::callbacks::CbTypeList_obj *__this){
				HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",498);
				{
					HX_STACK_LINE(498)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(498)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(498)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(498)
						__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
					}
					HX_STACK_LINE(498)
					return __this->zpp_inner->user_length;
				}
				return null();
			}
		};
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_ZPP_CbType ite = (  (((_Function_2_1::Block(this) == (int)1))) ? ::zpp_nape::util::ZNPNode_ZPP_CbType(null()) : ::zpp_nape::util::ZNPNode_ZPP_CbType(this->zpp_inner->inner->iterator_at((_Function_2_2::Block(this) - (int)2))) );		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(499)
		ret = (  (((ite == null()))) ? ::zpp_nape::callbacks::ZPP_CbType(this->zpp_inner->inner->head->elt) : ::zpp_nape::callbacks::ZPP_CbType(ite->next->elt) );
		HX_STACK_LINE(500)
		::nape::callbacks::CbType retx = ret->outer;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(501)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(501)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(502)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(502)
			this->zpp_inner->inner->erase(ite);
		}
	}
	HX_STACK_LINE(504)
	this->zpp_inner->invalidate();
	HX_STACK_LINE(505)
	::nape::callbacks::CbType retx = ret->outer;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(CbTypeList_obj,pop,return )

bool CbTypeList_obj::unshift( ::nape::callbacks::CbType obj){
	HX_STACK_PUSH("CbTypeList::unshift","nape/callbacks/CbTypeList.hx",447);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(449)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(449)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("CbType")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(451)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(452)
	this->zpp_inner->valmod();
	HX_STACK_LINE(455)
	bool cont = (  (((this->zpp_inner->adder != null()))) ? bool(this->zpp_inner->adder(obj)) : bool(true) );		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(456)
	if ((cont)){
		HX_STACK_LINE(457)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(458)
			if (((this->zpp_inner->push_ite == null()))){
				struct _Function_4_1{
					inline static int Block( ::nape::callbacks::CbTypeList_obj *__this){
						HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",458);
						{
							HX_STACK_LINE(458)
							__this->zpp_inner->valmod();
							HX_STACK_LINE(458)
							if ((__this->zpp_inner->zip_length)){
								HX_STACK_LINE(458)
								__this->zpp_inner->zip_length = false;
								HX_STACK_LINE(458)
								__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
							}
							HX_STACK_LINE(458)
							return __this->zpp_inner->user_length;
						}
						return null();
					}
				};
				HX_STACK_LINE(458)
				this->zpp_inner->push_ite = (  (((this->zpp_inner->inner->head == null()))) ? ::zpp_nape::util::ZNPNode_ZPP_CbType(null()) : ::zpp_nape::util::ZNPNode_ZPP_CbType(this->zpp_inner->inner->iterator_at((_Function_4_1::Block(this) - (int)1))) );
			}
			HX_STACK_LINE(459)
			this->zpp_inner->push_ite = this->zpp_inner->inner->insert(this->zpp_inner->push_ite,obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(461)
			this->zpp_inner->inner->add(obj->zpp_inner);
		}
		HX_STACK_LINE(462)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(463)
		if (((this->zpp_inner->post_adder != null()))){
			HX_STACK_LINE(463)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(465)
	return cont;
}


HX_DEFINE_DYNAMIC_FUNC1(CbTypeList_obj,unshift,return )

bool CbTypeList_obj::push( ::nape::callbacks::CbType obj){
	HX_STACK_PUSH("CbTypeList::push","nape/callbacks/CbTypeList.hx",416);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(418)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(418)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("CbType")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(420)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(421)
	this->zpp_inner->valmod();
	HX_STACK_LINE(424)
	bool cont = (  (((this->zpp_inner->adder != null()))) ? bool(this->zpp_inner->adder(obj)) : bool(true) );		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(425)
	if ((cont)){
		HX_STACK_LINE(426)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(426)
			this->zpp_inner->inner->add(obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(428)
			if (((this->zpp_inner->push_ite == null()))){
				struct _Function_4_1{
					inline static int Block( ::nape::callbacks::CbTypeList_obj *__this){
						HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",428);
						{
							HX_STACK_LINE(428)
							__this->zpp_inner->valmod();
							HX_STACK_LINE(428)
							if ((__this->zpp_inner->zip_length)){
								HX_STACK_LINE(428)
								__this->zpp_inner->zip_length = false;
								HX_STACK_LINE(428)
								__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
							}
							HX_STACK_LINE(428)
							return __this->zpp_inner->user_length;
						}
						return null();
					}
				};
				HX_STACK_LINE(428)
				this->zpp_inner->push_ite = (  (((this->zpp_inner->inner->head == null()))) ? ::zpp_nape::util::ZNPNode_ZPP_CbType(null()) : ::zpp_nape::util::ZNPNode_ZPP_CbType(this->zpp_inner->inner->iterator_at((_Function_4_1::Block(this) - (int)1))) );
			}
			HX_STACK_LINE(429)
			this->zpp_inner->push_ite = this->zpp_inner->inner->insert(this->zpp_inner->push_ite,obj->zpp_inner);
		}
		HX_STACK_LINE(431)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(432)
		if (((this->zpp_inner->post_adder != null()))){
			HX_STACK_LINE(432)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(434)
	return cont;
}


HX_DEFINE_DYNAMIC_FUNC1(CbTypeList_obj,push,return )

::nape::callbacks::CbType CbTypeList_obj::at( int index){
	HX_STACK_PUSH("CbTypeList::at","nape/callbacks/CbTypeList.hx",363);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(364)
	this->zpp_inner->valmod();
	struct _Function_1_1{
		inline static int Block( ::nape::callbacks::CbTypeList_obj *__this){
			HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",368);
			{
				HX_STACK_LINE(368)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(368)
				if ((__this->zpp_inner->zip_length)){
					HX_STACK_LINE(368)
					__this->zpp_inner->zip_length = false;
					HX_STACK_LINE(368)
					__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
				}
				HX_STACK_LINE(368)
				return __this->zpp_inner->user_length;
			}
			return null();
		}
	};
	HX_STACK_LINE(368)
	if (((bool((index < (int)0)) || bool((index >= _Function_1_1::Block(this)))))){
		HX_STACK_LINE(368)
		hx::Throw (HX_CSTRING("Error: Index out of bounds"));
	}
	HX_STACK_LINE(370)
	if ((this->zpp_inner->reverse_flag)){
		struct _Function_2_1{
			inline static int Block( ::nape::callbacks::CbTypeList_obj *__this){
				HX_STACK_PUSH("*::closure","nape/callbacks/CbTypeList.hx",370);
				{
					HX_STACK_LINE(370)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(370)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(370)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(370)
						__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
					}
					HX_STACK_LINE(370)
					return __this->zpp_inner->user_length;
				}
				return null();
			}
		};
		HX_STACK_LINE(370)
		index = ((_Function_2_1::Block(this) - (int)1) - index);
	}
	HX_STACK_LINE(371)
	if (((bool((index < this->zpp_inner->at_index)) || bool((this->zpp_inner->at_ite == null()))))){
		HX_STACK_LINE(373)
		this->zpp_inner->at_index = index;
		HX_STACK_LINE(374)
		this->zpp_inner->at_ite = this->zpp_inner->inner->iterator_at(index);
	}
	else{
		HX_STACK_LINE(376)
		while(((this->zpp_inner->at_index != index))){
			HX_STACK_LINE(378)
			(this->zpp_inner->at_index)++;
			HX_STACK_LINE(379)
			this->zpp_inner->at_ite = this->zpp_inner->at_ite->next;
		}
	}
	HX_STACK_LINE(403)
	return this->zpp_inner->at_ite->elt->outer;
}


HX_DEFINE_DYNAMIC_FUNC1(CbTypeList_obj,at,return )

bool CbTypeList_obj::has( ::nape::callbacks::CbType obj){
	HX_STACK_PUSH("CbTypeList::has","nape/callbacks/CbTypeList.hx",346);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(347)
	this->zpp_inner->valmod();
	HX_STACK_LINE(350)
	return this->zpp_inner->inner->has(obj->zpp_inner);
}


HX_DEFINE_DYNAMIC_FUNC1(CbTypeList_obj,has,return )

int CbTypeList_obj::get_length( ){
	HX_STACK_PUSH("CbTypeList::get_length","nape/callbacks/CbTypeList.hx",244);
	HX_STACK_THIS(this);
	HX_STACK_LINE(245)
	this->zpp_inner->valmod();
	HX_STACK_LINE(246)
	if ((this->zpp_inner->zip_length)){
		HX_STACK_LINE(247)
		this->zpp_inner->zip_length = false;
		HX_STACK_LINE(259)
		this->zpp_inner->user_length = this->zpp_inner->inner->length;
	}
	HX_STACK_LINE(261)
	return this->zpp_inner->user_length;
}


HX_DEFINE_DYNAMIC_FUNC0(CbTypeList_obj,get_length,return )

::nape::callbacks::CbTypeList CbTypeList_obj::fromArray( Array< ::Dynamic > array){
	HX_STACK_PUSH("CbTypeList::fromArray","nape/callbacks/CbTypeList.hx",304);
	HX_STACK_ARG(array,"array");
	HX_STACK_LINE(306)
	if (((array == null()))){
		HX_STACK_LINE(306)
		hx::Throw (HX_CSTRING("Error: Cannot convert null Array to Nape list"));
	}
	HX_STACK_LINE(310)
	::nape::callbacks::CbTypeList ret = ::nape::callbacks::CbTypeList_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		while(((_g < array->length))){
			HX_STACK_LINE(311)
			::nape::callbacks::CbType i = array->__get(_g).StaticCast< ::nape::callbacks::CbType >();		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			ret->push(i);
		}
	}
	HX_STACK_LINE(318)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CbTypeList_obj,fromArray,return )


CbTypeList_obj::CbTypeList_obj()
{
}

void CbTypeList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CbTypeList);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void CbTypeList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic CbTypeList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { return fromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CbTypeList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_CbTypeList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CbTypeList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromArray"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("filter"),
	HX_CSTRING("foreach"),
	HX_CSTRING("toString"),
	HX_CSTRING("merge"),
	HX_CSTRING("copy"),
	HX_CSTRING("iterator"),
	HX_CSTRING("empty"),
	HX_CSTRING("clear"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("shift"),
	HX_CSTRING("pop"),
	HX_CSTRING("unshift"),
	HX_CSTRING("push"),
	HX_CSTRING("at"),
	HX_CSTRING("has"),
	HX_CSTRING("get_length"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CbTypeList_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CbTypeList_obj::__mClass,"__mClass");
};

Class CbTypeList_obj::__mClass;

void CbTypeList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.callbacks.CbTypeList"), hx::TCanCast< CbTypeList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CbTypeList_obj::__boot()
{
}

} // end namespace nape
} // end namespace callbacks
