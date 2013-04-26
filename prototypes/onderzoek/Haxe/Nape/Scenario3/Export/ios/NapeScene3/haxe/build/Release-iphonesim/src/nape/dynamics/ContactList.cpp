#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactIterator
#include <nape/dynamics/ContactIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
namespace nape{
namespace dynamics{

Void ContactList_obj::__construct()
{
HX_STACK_PUSH("ContactList::new","nape/dynamics/ContactList.hx",234);
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(696)
	this->zpp_inner = ::zpp_nape::util::ZPP_ContactList_obj::__new();
	HX_STACK_LINE(697)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

ContactList_obj::~ContactList_obj() { }

Dynamic ContactList_obj::__CreateEmpty() { return  new ContactList_obj; }
hx::ObjectPtr< ContactList_obj > ContactList_obj::__new()
{  hx::ObjectPtr< ContactList_obj > result = new ContactList_obj();
	result->__construct();
	return result;}

Dynamic ContactList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ContactList_obj > result = new ContactList_obj();
	result->__construct();
	return result;}

::nape::dynamics::ContactList ContactList_obj::filter( Dynamic lambda){
	HX_STACK_PUSH("ContactList::filter","nape/dynamics/ContactList.hx",779);
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
		inline static int Block( ::nape::dynamics::ContactList_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",784);
			{
				HX_STACK_LINE(784)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(784)
				if ((__this->zpp_inner->zip_length)){
					HX_STACK_LINE(784)
					__this->zpp_inner->zip_length = false;
					HX_STACK_LINE(784)
					{
						HX_STACK_LINE(784)
						__this->zpp_inner->user_length = (int)0;
						HX_STACK_LINE(784)
						{
							HX_STACK_LINE(784)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(784)
							while(((cx_ite != null()))){
								HX_STACK_LINE(784)
								::zpp_nape::dynamics::ZPP_Contact i1 = cx_ite;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(784)
								if (((bool(i1->active) && bool(i1->arbiter->active)))){
									HX_STACK_LINE(784)
									(__this->zpp_inner->user_length)++;
								}
								HX_STACK_LINE(784)
								cx_ite = cx_ite->next;
							}
						}
					}
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
		::nape::dynamics::Contact x = this->at(i);		HX_STACK_VAR(x,"x");
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


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,filter,return )

::nape::dynamics::ContactList ContactList_obj::foreach( Dynamic lambda){
	HX_STACK_PUSH("ContactList::foreach","nape/dynamics/ContactList.hx",732);
	HX_STACK_THIS(this);
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(734)
	if (((lambda == null()))){
		HX_STACK_LINE(734)
		hx::Throw (HX_CSTRING("Error: Cannot execute null on list elements"));
	}
	struct _Function_1_1{
		inline static ::nape::dynamics::ContactIterator Block( ::nape::dynamics::ContactList_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",736);
			{
				HX_STACK_LINE(736)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(736)
				return ::nape::dynamics::ContactIterator_obj::get(__this);
			}
			return null();
		}
	};
	HX_STACK_LINE(736)
	::nape::dynamics::ContactIterator it = _Function_1_1::Block(this);		HX_STACK_VAR(it,"it");
	struct _Function_1_2{
		inline static bool Block( ::nape::dynamics::ContactIterator &it){
			HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",737);
			{
				HX_STACK_LINE(737)
				it->zpp_inner->zpp_inner->valmod();
				struct _Function_2_1{
					inline static int Block( ::nape::dynamics::ContactIterator &it){
						HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",737);
						{
							HX_STACK_LINE(737)
							::nape::dynamics::ContactList _this = it->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(737)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(737)
							if ((_this->zpp_inner->zip_length)){
								HX_STACK_LINE(737)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(737)
								{
									HX_STACK_LINE(737)
									_this->zpp_inner->user_length = (int)0;
									HX_STACK_LINE(737)
									{
										HX_STACK_LINE(737)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = _this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(737)
										while(((cx_ite != null()))){
											HX_STACK_LINE(737)
											::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(737)
											if (((bool(i->active) && bool(i->arbiter->active)))){
												HX_STACK_LINE(737)
												(_this->zpp_inner->user_length)++;
											}
											HX_STACK_LINE(737)
											cx_ite = cx_ite->next;
										}
									}
								}
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
					inline static bool Block( ::nape::dynamics::ContactIterator &it){
						HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",737);
						{
							HX_STACK_LINE(737)
							{
								HX_STACK_LINE(737)
								it->zpp_next = ::nape::dynamics::ContactIterator_obj::zpp_pool;
								HX_STACK_LINE(737)
								::nape::dynamics::ContactIterator_obj::zpp_pool = it;
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
				inline static ::nape::dynamics::Contact Block( ::nape::dynamics::ContactIterator &it){
					HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",739);
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
				Dynamic e = __e;{
					HX_STACK_LINE(742)
					{
						HX_STACK_LINE(743)
						it->zpp_next = ::nape::dynamics::ContactIterator_obj::zpp_pool;
						HX_STACK_LINE(744)
						::nape::dynamics::ContactIterator_obj::zpp_pool = it;
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


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,foreach,return )

::String ContactList_obj::toString( ){
	HX_STACK_PUSH("ContactList::toString","nape/dynamics/ContactList.hx",702);
	HX_STACK_THIS(this);
	HX_STACK_LINE(703)
	::String ret = HX_CSTRING("[");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(704)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	struct _Function_1_1{
		inline static ::nape::dynamics::ContactIterator Block( ::nape::dynamics::ContactList_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",705);
			{
				HX_STACK_LINE(705)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(705)
				return ::nape::dynamics::ContactIterator_obj::get(__this);
			}
			return null();
		}
	};
	HX_STACK_LINE(705)
	for(::cpp::FastIterator_obj< ::nape::dynamics::Contact > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Contact >(_Function_1_1::Block(this));  __it->hasNext(); ){
		::nape::dynamics::Contact i = __it->next();
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


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,toString,return )

Void ContactList_obj::merge( ::nape::dynamics::ContactList xs){
{
		HX_STACK_PUSH("ContactList::merge","nape/dynamics/ContactList.hx",684);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xs,"xs");
		HX_STACK_LINE(686)
		if (((xs == null()))){
			HX_STACK_LINE(686)
			hx::Throw (HX_CSTRING("Error: Cannot merge with null list"));
		}
		struct _Function_1_1{
			inline static ::nape::dynamics::ContactIterator Block( ::nape::dynamics::ContactList &xs){
				HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",688);
				{
					HX_STACK_LINE(688)
					xs->zpp_inner->valmod();
					HX_STACK_LINE(688)
					return ::nape::dynamics::ContactIterator_obj::get(xs);
				}
				return null();
			}
		};
		HX_STACK_LINE(688)
		for(::cpp::FastIterator_obj< ::nape::dynamics::Contact > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Contact >(_Function_1_1::Block(xs));  __it->hasNext(); ){
			::nape::dynamics::Contact x = __it->next();
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


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,merge,(void))

::nape::dynamics::ContactList ContactList_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_PUSH("ContactList::copy","nape/dynamics/ContactList.hx",662);
	HX_STACK_THIS(this);
	HX_STACK_ARG(deep,"deep");
{
		HX_STACK_LINE(663)
		::nape::dynamics::ContactList ret = ::nape::dynamics::ContactList_obj::__new();		HX_STACK_VAR(ret,"ret");
		struct _Function_1_1{
			inline static ::nape::dynamics::ContactIterator Block( ::nape::dynamics::ContactList_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",664);
				{
					HX_STACK_LINE(664)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(664)
					return ::nape::dynamics::ContactIterator_obj::get(__this);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::nape::dynamics::Contact Block( ){
				HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",664);
				{
					HX_STACK_LINE(666)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Contact")) + HX_CSTRING(" is not a copyable type")));
					HX_STACK_LINE(668)
					return null();
				}
				return null();
			}
		};
		HX_STACK_LINE(664)
		for(::cpp::FastIterator_obj< ::nape::dynamics::Contact > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Contact >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::nape::dynamics::Contact i = __it->next();
			ret->push((  ((deep)) ? ::nape::dynamics::Contact(_Function_1_2::Block()) : ::nape::dynamics::Contact(i) ));
		}
		HX_STACK_LINE(671)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,copy,return )

::nape::dynamics::ContactIterator ContactList_obj::iterator( ){
	HX_STACK_PUSH("ContactList::iterator","nape/dynamics/ContactList.hx",647);
	HX_STACK_THIS(this);
	HX_STACK_LINE(648)
	this->zpp_inner->valmod();
	HX_STACK_LINE(651)
	return ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,iterator,return )

bool ContactList_obj::empty( ){
	HX_STACK_PUSH("ContactList::empty","nape/dynamics/ContactList.hx",631);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static int Block( ::nape::dynamics::ContactList_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",632);
			{
				HX_STACK_LINE(632)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(632)
				if ((__this->zpp_inner->zip_length)){
					HX_STACK_LINE(632)
					__this->zpp_inner->zip_length = false;
					HX_STACK_LINE(632)
					{
						HX_STACK_LINE(632)
						__this->zpp_inner->user_length = (int)0;
						HX_STACK_LINE(632)
						{
							HX_STACK_LINE(632)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(632)
							while(((cx_ite != null()))){
								HX_STACK_LINE(632)
								::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(632)
								if (((bool(i->active) && bool(i->arbiter->active)))){
									HX_STACK_LINE(632)
									(__this->zpp_inner->user_length)++;
								}
								HX_STACK_LINE(632)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(632)
				return __this->zpp_inner->user_length;
			}
			return null();
		}
	};
	HX_STACK_LINE(631)
	return (_Function_1_1::Block(this) == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,empty,return )

Void ContactList_obj::clear( ){
{
		HX_STACK_PUSH("ContactList::clear","nape/dynamics/ContactList.hx",614);
		HX_STACK_THIS(this);
		HX_STACK_LINE(616)
		if ((this->zpp_inner->immutable)){
			HX_STACK_LINE(616)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Contact")) + HX_CSTRING("List is immutable")));
		}
		HX_STACK_LINE(618)
		if ((this->zpp_inner->reverse_flag)){
			struct _Function_2_1{
				inline static int Block( ::nape::dynamics::ContactList_obj *__this){
					HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",619);
					{
						HX_STACK_LINE(619)
						__this->zpp_inner->valmod();
						HX_STACK_LINE(619)
						if ((__this->zpp_inner->zip_length)){
							HX_STACK_LINE(619)
							__this->zpp_inner->zip_length = false;
							HX_STACK_LINE(619)
							{
								HX_STACK_LINE(619)
								__this->zpp_inner->user_length = (int)0;
								HX_STACK_LINE(619)
								{
									HX_STACK_LINE(619)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(619)
									while(((cx_ite != null()))){
										HX_STACK_LINE(619)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(619)
										if (((bool(i->active) && bool(i->arbiter->active)))){
											HX_STACK_LINE(619)
											(__this->zpp_inner->user_length)++;
										}
										HX_STACK_LINE(619)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(619)
						return __this->zpp_inner->user_length;
					}
					return null();
				}
			};
			HX_STACK_LINE(618)
			while((!(((_Function_2_1::Block(this) == (int)0))))){
				HX_STACK_LINE(619)
				this->pop();
			}
		}
		else{
			struct _Function_2_1{
				inline static int Block( ::nape::dynamics::ContactList_obj *__this){
					HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",622);
					{
						HX_STACK_LINE(622)
						__this->zpp_inner->valmod();
						HX_STACK_LINE(622)
						if ((__this->zpp_inner->zip_length)){
							HX_STACK_LINE(622)
							__this->zpp_inner->zip_length = false;
							HX_STACK_LINE(622)
							{
								HX_STACK_LINE(622)
								__this->zpp_inner->user_length = (int)0;
								HX_STACK_LINE(622)
								{
									HX_STACK_LINE(622)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(622)
									while(((cx_ite != null()))){
										HX_STACK_LINE(622)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(622)
										if (((bool(i->active) && bool(i->arbiter->active)))){
											HX_STACK_LINE(622)
											(__this->zpp_inner->user_length)++;
										}
										HX_STACK_LINE(622)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(622)
						return __this->zpp_inner->user_length;
					}
					return null();
				}
			};
			HX_STACK_LINE(621)
			while((!(((_Function_2_1::Block(this) == (int)0))))){
				HX_STACK_LINE(622)
				this->shift();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,clear,(void))

bool ContactList_obj::remove( ::nape::dynamics::Contact obj){
	HX_STACK_PUSH("ContactList::remove","nape/dynamics/ContactList.hx",576);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(578)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(578)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Contact")) + HX_CSTRING("List is immutable")));
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
			::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while(((cx_ite != null()))){
				HX_STACK_LINE(590)
				::zpp_nape::dynamics::ZPP_Contact x = cx_ite;		HX_STACK_VAR(x,"x");
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
		if (((this->zpp_inner->subber_dyn() != null()))){
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


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,remove,return )

bool ContactList_obj::add( ::nape::dynamics::Contact obj){
	HX_STACK_PUSH("ContactList::add","nape/dynamics/ContactList.hx",563);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(563)
	return (  ((this->zpp_inner->reverse_flag)) ? bool(this->push(obj)) : bool(this->unshift(obj)) );
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,add,return )

::nape::dynamics::Contact ContactList_obj::shift( ){
	HX_STACK_PUSH("ContactList::shift","nape/dynamics/ContactList.hx",519);
	HX_STACK_THIS(this);
	HX_STACK_LINE(521)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(521)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Contact")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(523)
	this->zpp_inner->modify_test();
	struct _Function_1_1{
		inline static int Block( ::nape::dynamics::ContactList_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",525);
			{
				HX_STACK_LINE(525)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(525)
				if ((__this->zpp_inner->zip_length)){
					HX_STACK_LINE(525)
					__this->zpp_inner->zip_length = false;
					HX_STACK_LINE(525)
					{
						HX_STACK_LINE(525)
						__this->zpp_inner->user_length = (int)0;
						HX_STACK_LINE(525)
						{
							HX_STACK_LINE(525)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(525)
							while(((cx_ite != null()))){
								HX_STACK_LINE(525)
								::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(525)
								if (((bool(i->active) && bool(i->arbiter->active)))){
									HX_STACK_LINE(525)
									(__this->zpp_inner->user_length)++;
								}
								HX_STACK_LINE(525)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(525)
				return __this->zpp_inner->user_length;
			}
			return null();
		}
	};
	HX_STACK_LINE(525)
	if (((_Function_1_1::Block(this) == (int)0))){
		HX_STACK_LINE(525)
		hx::Throw (HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(527)
	this->zpp_inner->valmod();
	HX_STACK_LINE(530)
	::zpp_nape::dynamics::ZPP_Contact ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(532)
		if (((bool((this->zpp_inner->at_ite != null())) && bool((this->zpp_inner->at_ite->next == null()))))){
			HX_STACK_LINE(532)
			this->zpp_inner->at_ite = null();
		}
		struct _Function_2_1{
			inline static int Block( ::nape::dynamics::ContactList_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",533);
				{
					HX_STACK_LINE(533)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(533)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(533)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(533)
						{
							HX_STACK_LINE(533)
							__this->zpp_inner->user_length = (int)0;
							HX_STACK_LINE(533)
							{
								HX_STACK_LINE(533)
								::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(533)
								while(((cx_ite != null()))){
									HX_STACK_LINE(533)
									::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(533)
									if (((bool(i->active) && bool(i->arbiter->active)))){
										HX_STACK_LINE(533)
										(__this->zpp_inner->user_length)++;
									}
									HX_STACK_LINE(533)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(533)
					return __this->zpp_inner->user_length;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static int Block( ::nape::dynamics::ContactList_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",533);
				{
					HX_STACK_LINE(533)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(533)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(533)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(533)
						{
							HX_STACK_LINE(533)
							__this->zpp_inner->user_length = (int)0;
							HX_STACK_LINE(533)
							{
								HX_STACK_LINE(533)
								::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(533)
								while(((cx_ite != null()))){
									HX_STACK_LINE(533)
									::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(533)
									if (((bool(i->active) && bool(i->arbiter->active)))){
										HX_STACK_LINE(533)
										(__this->zpp_inner->user_length)++;
									}
									HX_STACK_LINE(533)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(533)
					return __this->zpp_inner->user_length;
				}
				return null();
			}
		};
		HX_STACK_LINE(533)
		::zpp_nape::dynamics::ZPP_Contact ite = (  (((_Function_2_1::Block(this) == (int)1))) ? ::zpp_nape::dynamics::ZPP_Contact(null()) : ::zpp_nape::dynamics::ZPP_Contact(this->zpp_inner->inner->iterator_at((_Function_2_2::Block(this) - (int)2))) );		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(534)
		ret = (  (((ite == null()))) ? ::zpp_nape::dynamics::ZPP_Contact(this->zpp_inner->inner->next) : ::zpp_nape::dynamics::ZPP_Contact(ite->next) );
		HX_STACK_LINE(535)
		::nape::dynamics::Contact retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(536)
		if (((this->zpp_inner->subber_dyn() != null()))){
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
		ret = this->zpp_inner->inner->next;
		HX_STACK_LINE(541)
		::nape::dynamics::Contact retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(542)
		if (((this->zpp_inner->subber_dyn() != null()))){
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
	::nape::dynamics::Contact retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,shift,return )

::nape::dynamics::Contact ContactList_obj::pop( ){
	HX_STACK_PUSH("ContactList::pop","nape/dynamics/ContactList.hx",478);
	HX_STACK_THIS(this);
	HX_STACK_LINE(480)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(480)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Contact")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(482)
	this->zpp_inner->modify_test();
	struct _Function_1_1{
		inline static int Block( ::nape::dynamics::ContactList_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",484);
			{
				HX_STACK_LINE(484)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(484)
				if ((__this->zpp_inner->zip_length)){
					HX_STACK_LINE(484)
					__this->zpp_inner->zip_length = false;
					HX_STACK_LINE(484)
					{
						HX_STACK_LINE(484)
						__this->zpp_inner->user_length = (int)0;
						HX_STACK_LINE(484)
						{
							HX_STACK_LINE(484)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(484)
							while(((cx_ite != null()))){
								HX_STACK_LINE(484)
								::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(484)
								if (((bool(i->active) && bool(i->arbiter->active)))){
									HX_STACK_LINE(484)
									(__this->zpp_inner->user_length)++;
								}
								HX_STACK_LINE(484)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(484)
				return __this->zpp_inner->user_length;
			}
			return null();
		}
	};
	HX_STACK_LINE(484)
	if (((_Function_1_1::Block(this) == (int)0))){
		HX_STACK_LINE(484)
		hx::Throw (HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(486)
	this->zpp_inner->valmod();
	HX_STACK_LINE(489)
	::zpp_nape::dynamics::ZPP_Contact ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(491)
		ret = this->zpp_inner->inner->next;
		HX_STACK_LINE(492)
		::nape::dynamics::Contact retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		if (((this->zpp_inner->subber_dyn() != null()))){
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
			inline static int Block( ::nape::dynamics::ContactList_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",498);
				{
					HX_STACK_LINE(498)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(498)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(498)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(498)
						{
							HX_STACK_LINE(498)
							__this->zpp_inner->user_length = (int)0;
							HX_STACK_LINE(498)
							{
								HX_STACK_LINE(498)
								::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(498)
								while(((cx_ite != null()))){
									HX_STACK_LINE(498)
									::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(498)
									if (((bool(i->active) && bool(i->arbiter->active)))){
										HX_STACK_LINE(498)
										(__this->zpp_inner->user_length)++;
									}
									HX_STACK_LINE(498)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(498)
					return __this->zpp_inner->user_length;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static int Block( ::nape::dynamics::ContactList_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",498);
				{
					HX_STACK_LINE(498)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(498)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(498)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(498)
						{
							HX_STACK_LINE(498)
							__this->zpp_inner->user_length = (int)0;
							HX_STACK_LINE(498)
							{
								HX_STACK_LINE(498)
								::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(498)
								while(((cx_ite != null()))){
									HX_STACK_LINE(498)
									::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(498)
									if (((bool(i->active) && bool(i->arbiter->active)))){
										HX_STACK_LINE(498)
										(__this->zpp_inner->user_length)++;
									}
									HX_STACK_LINE(498)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(498)
					return __this->zpp_inner->user_length;
				}
				return null();
			}
		};
		HX_STACK_LINE(498)
		::zpp_nape::dynamics::ZPP_Contact ite = (  (((_Function_2_1::Block(this) == (int)1))) ? ::zpp_nape::dynamics::ZPP_Contact(null()) : ::zpp_nape::dynamics::ZPP_Contact(this->zpp_inner->inner->iterator_at((_Function_2_2::Block(this) - (int)2))) );		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(499)
		ret = (  (((ite == null()))) ? ::zpp_nape::dynamics::ZPP_Contact(this->zpp_inner->inner->next) : ::zpp_nape::dynamics::ZPP_Contact(ite->next) );
		HX_STACK_LINE(500)
		::nape::dynamics::Contact retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(501)
		if (((this->zpp_inner->subber_dyn() != null()))){
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
	::nape::dynamics::Contact retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,pop,return )

bool ContactList_obj::unshift( ::nape::dynamics::Contact obj){
	HX_STACK_PUSH("ContactList::unshift","nape/dynamics/ContactList.hx",447);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(449)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(449)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Contact")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(451)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(452)
	this->zpp_inner->valmod();
	HX_STACK_LINE(455)
	bool cont = (  (((this->zpp_inner->adder_dyn() != null()))) ? bool(this->zpp_inner->adder(obj)) : bool(true) );		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(456)
	if ((cont)){
		HX_STACK_LINE(457)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(458)
			if (((this->zpp_inner->push_ite == null()))){
				struct _Function_4_1{
					inline static int Block( ::nape::dynamics::ContactList_obj *__this){
						HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",458);
						{
							HX_STACK_LINE(458)
							__this->zpp_inner->valmod();
							HX_STACK_LINE(458)
							if ((__this->zpp_inner->zip_length)){
								HX_STACK_LINE(458)
								__this->zpp_inner->zip_length = false;
								HX_STACK_LINE(458)
								{
									HX_STACK_LINE(458)
									__this->zpp_inner->user_length = (int)0;
									HX_STACK_LINE(458)
									{
										HX_STACK_LINE(458)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(458)
										while(((cx_ite != null()))){
											HX_STACK_LINE(458)
											::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(458)
											if (((bool(i->active) && bool(i->arbiter->active)))){
												HX_STACK_LINE(458)
												(__this->zpp_inner->user_length)++;
											}
											HX_STACK_LINE(458)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(458)
							return __this->zpp_inner->user_length;
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static int Block( ::nape::dynamics::ContactList_obj *__this){
						HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",458);
						{
							HX_STACK_LINE(458)
							__this->zpp_inner->valmod();
							HX_STACK_LINE(458)
							if ((__this->zpp_inner->zip_length)){
								HX_STACK_LINE(458)
								__this->zpp_inner->zip_length = false;
								HX_STACK_LINE(458)
								{
									HX_STACK_LINE(458)
									__this->zpp_inner->user_length = (int)0;
									HX_STACK_LINE(458)
									{
										HX_STACK_LINE(458)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(458)
										while(((cx_ite != null()))){
											HX_STACK_LINE(458)
											::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(458)
											if (((bool(i->active) && bool(i->arbiter->active)))){
												HX_STACK_LINE(458)
												(__this->zpp_inner->user_length)++;
											}
											HX_STACK_LINE(458)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(458)
							return __this->zpp_inner->user_length;
						}
						return null();
					}
				};
				HX_STACK_LINE(458)
				this->zpp_inner->push_ite = (  (((_Function_4_1::Block(this) == (int)0))) ? ::zpp_nape::dynamics::ZPP_Contact(null()) : ::zpp_nape::dynamics::ZPP_Contact(this->zpp_inner->inner->iterator_at((_Function_4_2::Block(this) - (int)1))) );
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
		if (((this->zpp_inner->post_adder_dyn() != null()))){
			HX_STACK_LINE(463)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(465)
	return cont;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,unshift,return )

bool ContactList_obj::push( ::nape::dynamics::Contact obj){
	HX_STACK_PUSH("ContactList::push","nape/dynamics/ContactList.hx",416);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(418)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(418)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Contact")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(420)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(421)
	this->zpp_inner->valmod();
	HX_STACK_LINE(424)
	bool cont = (  (((this->zpp_inner->adder_dyn() != null()))) ? bool(this->zpp_inner->adder(obj)) : bool(true) );		HX_STACK_VAR(cont,"cont");
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
					inline static int Block( ::nape::dynamics::ContactList_obj *__this){
						HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",428);
						{
							HX_STACK_LINE(428)
							__this->zpp_inner->valmod();
							HX_STACK_LINE(428)
							if ((__this->zpp_inner->zip_length)){
								HX_STACK_LINE(428)
								__this->zpp_inner->zip_length = false;
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									__this->zpp_inner->user_length = (int)0;
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(428)
										while(((cx_ite != null()))){
											HX_STACK_LINE(428)
											::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(428)
											if (((bool(i->active) && bool(i->arbiter->active)))){
												HX_STACK_LINE(428)
												(__this->zpp_inner->user_length)++;
											}
											HX_STACK_LINE(428)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(428)
							return __this->zpp_inner->user_length;
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static int Block( ::nape::dynamics::ContactList_obj *__this){
						HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",428);
						{
							HX_STACK_LINE(428)
							__this->zpp_inner->valmod();
							HX_STACK_LINE(428)
							if ((__this->zpp_inner->zip_length)){
								HX_STACK_LINE(428)
								__this->zpp_inner->zip_length = false;
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									__this->zpp_inner->user_length = (int)0;
									HX_STACK_LINE(428)
									{
										HX_STACK_LINE(428)
										::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(428)
										while(((cx_ite != null()))){
											HX_STACK_LINE(428)
											::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(428)
											if (((bool(i->active) && bool(i->arbiter->active)))){
												HX_STACK_LINE(428)
												(__this->zpp_inner->user_length)++;
											}
											HX_STACK_LINE(428)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(428)
							return __this->zpp_inner->user_length;
						}
						return null();
					}
				};
				HX_STACK_LINE(428)
				this->zpp_inner->push_ite = (  (((_Function_4_1::Block(this) == (int)0))) ? ::zpp_nape::dynamics::ZPP_Contact(null()) : ::zpp_nape::dynamics::ZPP_Contact(this->zpp_inner->inner->iterator_at((_Function_4_2::Block(this) - (int)1))) );
			}
			HX_STACK_LINE(429)
			this->zpp_inner->push_ite = this->zpp_inner->inner->insert(this->zpp_inner->push_ite,obj->zpp_inner);
		}
		HX_STACK_LINE(431)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(432)
		if (((this->zpp_inner->post_adder_dyn() != null()))){
			HX_STACK_LINE(432)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(434)
	return cont;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,push,return )

::nape::dynamics::Contact ContactList_obj::at( int index){
	HX_STACK_PUSH("ContactList::at","nape/dynamics/ContactList.hx",363);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(364)
	this->zpp_inner->valmod();
	struct _Function_1_1{
		inline static int Block( ::nape::dynamics::ContactList_obj *__this){
			HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",368);
			{
				HX_STACK_LINE(368)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(368)
				if ((__this->zpp_inner->zip_length)){
					HX_STACK_LINE(368)
					__this->zpp_inner->zip_length = false;
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						__this->zpp_inner->user_length = (int)0;
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(368)
							while(((cx_ite != null()))){
								HX_STACK_LINE(368)
								::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(368)
								if (((bool(i->active) && bool(i->arbiter->active)))){
									HX_STACK_LINE(368)
									(__this->zpp_inner->user_length)++;
								}
								HX_STACK_LINE(368)
								cx_ite = cx_ite->next;
							}
						}
					}
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
			inline static int Block( ::nape::dynamics::ContactList_obj *__this){
				HX_STACK_PUSH("*::closure","nape/dynamics/ContactList.hx",370);
				{
					HX_STACK_LINE(370)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(370)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(370)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(370)
						{
							HX_STACK_LINE(370)
							__this->zpp_inner->user_length = (int)0;
							HX_STACK_LINE(370)
							{
								HX_STACK_LINE(370)
								::zpp_nape::dynamics::ZPP_Contact cx_ite = __this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(370)
								while(((cx_ite != null()))){
									HX_STACK_LINE(370)
									::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(370)
									if (((bool(i->active) && bool(i->arbiter->active)))){
										HX_STACK_LINE(370)
										(__this->zpp_inner->user_length)++;
									}
									HX_STACK_LINE(370)
									cx_ite = cx_ite->next;
								}
							}
						}
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
	HX_STACK_LINE(383)
	{
		HX_STACK_LINE(384)
		if (((bool((index < this->zpp_inner->at_index)) || bool((this->zpp_inner->at_ite == null()))))){
			HX_STACK_LINE(385)
			this->zpp_inner->at_index = (int)0;
			HX_STACK_LINE(386)
			this->zpp_inner->at_ite = this->zpp_inner->inner->next;
			HX_STACK_LINE(387)
			while((true)){
				HX_STACK_LINE(388)
				::zpp_nape::dynamics::ZPP_Contact x = this->zpp_inner->at_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(389)
				if (((bool(x->active) && bool(x->arbiter->active)))){
					HX_STACK_LINE(389)
					break;
				}
				HX_STACK_LINE(390)
				this->zpp_inner->at_ite = this->zpp_inner->at_ite->next;
			}
		}
		HX_STACK_LINE(393)
		while(((this->zpp_inner->at_index != index))){
			HX_STACK_LINE(394)
			(this->zpp_inner->at_index)++;
			HX_STACK_LINE(395)
			this->zpp_inner->at_ite = this->zpp_inner->at_ite->next;
			HX_STACK_LINE(396)
			while((true)){
				HX_STACK_LINE(397)
				::zpp_nape::dynamics::ZPP_Contact x = this->zpp_inner->at_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(398)
				if (((bool(x->active) && bool(x->arbiter->active)))){
					HX_STACK_LINE(398)
					break;
				}
				HX_STACK_LINE(399)
				this->zpp_inner->at_ite = this->zpp_inner->at_ite->next;
			}
		}
	}
	HX_STACK_LINE(403)
	return this->zpp_inner->at_ite->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,at,return )

bool ContactList_obj::has( ::nape::dynamics::Contact obj){
	HX_STACK_PUSH("ContactList::has","nape/dynamics/ContactList.hx",346);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(347)
	this->zpp_inner->valmod();
	HX_STACK_LINE(350)
	return this->zpp_inner->inner->has(obj->zpp_inner);
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,has,return )

int ContactList_obj::get_length( ){
	HX_STACK_PUSH("ContactList::get_length","nape/dynamics/ContactList.hx",244);
	HX_STACK_THIS(this);
	HX_STACK_LINE(245)
	this->zpp_inner->valmod();
	HX_STACK_LINE(246)
	if ((this->zpp_inner->zip_length)){
		HX_STACK_LINE(247)
		this->zpp_inner->zip_length = false;
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(249)
			this->zpp_inner->user_length = (int)0;
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Contact cx_ite = this->zpp_inner->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(252)
				while(((cx_ite != null()))){
					HX_STACK_LINE(253)
					::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(254)
					if (((bool(i->active) && bool(i->arbiter->active)))){
						HX_STACK_LINE(254)
						(this->zpp_inner->user_length)++;
					}
					HX_STACK_LINE(255)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
	HX_STACK_LINE(261)
	return this->zpp_inner->user_length;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,get_length,return )

::nape::dynamics::ContactList ContactList_obj::fromArray( Array< ::nape::dynamics::Contact > array){
	HX_STACK_PUSH("ContactList::fromArray","nape/dynamics/ContactList.hx",304);
	HX_STACK_ARG(array,"array");
	HX_STACK_LINE(306)
	if (((array == null()))){
		HX_STACK_LINE(306)
		hx::Throw (HX_CSTRING("Error: Cannot convert null Array to Nape list"));
	}
	HX_STACK_LINE(310)
	::nape::dynamics::ContactList ret = ::nape::dynamics::ContactList_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		while(((_g < array->length))){
			HX_STACK_LINE(311)
			::nape::dynamics::Contact i = array->__get(_g);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			ret->push(i);
		}
	}
	HX_STACK_LINE(318)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,fromArray,return )


ContactList_obj::ContactList_obj()
{
}

void ContactList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ContactList);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void ContactList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic ContactList_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? get_length() : length; }
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

Dynamic ContactList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_ContactList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ContactList_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("length"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ContactList_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ContactList_obj::__mClass,"__mClass");
};

Class ContactList_obj::__mClass;

void ContactList_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.ContactList"), hx::TCanCast< ContactList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ContactList_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
