#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace geom{

Void Vec2List_obj::__construct()
{
HX_STACK_PUSH("Vec2List::new","nape/geom/Vec2List.hx",234);
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(690)
	this->zpp_inner = ::zpp_nape::util::ZPP_Vec2List_obj::__new();
	HX_STACK_LINE(691)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

Vec2List_obj::~Vec2List_obj() { }

Dynamic Vec2List_obj::__CreateEmpty() { return  new Vec2List_obj; }
hx::ObjectPtr< Vec2List_obj > Vec2List_obj::__new()
{  hx::ObjectPtr< Vec2List_obj > result = new Vec2List_obj();
	result->__construct();
	return result;}

Dynamic Vec2List_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec2List_obj > result = new Vec2List_obj();
	result->__construct();
	return result;}

::nape::geom::Vec2List Vec2List_obj::filter( Dynamic lambda){
	HX_STACK_PUSH("Vec2List::filter","nape/geom/Vec2List.hx",773);
	HX_STACK_THIS(this);
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(775)
	if (((lambda == null()))){
		HX_STACK_LINE(775)
		hx::Throw (HX_CSTRING("Error: Cannot select elements of list with null"));
	}
	HX_STACK_LINE(777)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(778)
	while(((i < this->zpp_gl()))){
		HX_STACK_LINE(779)
		::nape::geom::Vec2 x = this->at(i);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(780)
		try{
			HX_STACK_LINE(780)
			if ((lambda(x).Cast< bool >())){
				HX_STACK_LINE(781)
				(i)++;
			}
			else{
				HX_STACK_LINE(782)
				this->remove(x);
			}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(784)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(788)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,filter,return )

::nape::geom::Vec2List Vec2List_obj::foreach( Dynamic lambda){
	HX_STACK_PUSH("Vec2List::foreach","nape/geom/Vec2List.hx",726);
	HX_STACK_THIS(this);
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(728)
	if (((lambda == null()))){
		HX_STACK_LINE(728)
		hx::Throw (HX_CSTRING("Error: Cannot execute null on list elements"));
	}
	HX_STACK_LINE(730)
	::nape::geom::Vec2Iterator it = this->iterator();		HX_STACK_VAR(it,"it");
	struct _Function_1_1{
		inline static bool Block( ::nape::geom::Vec2Iterator &it){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",731);
			{
				HX_STACK_LINE(731)
				it->zpp_inner->zpp_inner->valmod();
				HX_STACK_LINE(731)
				int length = it->zpp_inner->zpp_gl();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(731)
				it->zpp_critical = true;
				struct _Function_2_1{
					inline static bool Block( ::nape::geom::Vec2Iterator &it){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",731);
						{
							HX_STACK_LINE(731)
							{
								HX_STACK_LINE(731)
								it->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
								HX_STACK_LINE(731)
								::nape::geom::Vec2Iterator_obj::zpp_pool = it;
								HX_STACK_LINE(731)
								it->zpp_inner = null();
							}
							HX_STACK_LINE(731)
							return false;
						}
						return null();
					}
				};
				HX_STACK_LINE(731)
				return (  (((it->zpp_i < length))) ? bool(true) : bool(_Function_2_1::Block(it)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(731)
	while((_Function_1_1::Block(it))){
		HX_STACK_LINE(731)
		try{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2Iterator &it){
					HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",733);
					{
						HX_STACK_LINE(733)
						it->zpp_critical = false;
						HX_STACK_LINE(733)
						return it->zpp_inner->at((it->zpp_i)++);
					}
					return null();
				}
			};
			HX_STACK_LINE(732)
			lambda(_Function_3_1::Block(it)).Cast< Void >();
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(736)
					{
						HX_STACK_LINE(737)
						it->zpp_next = ::nape::geom::Vec2Iterator_obj::zpp_pool;
						HX_STACK_LINE(738)
						::nape::geom::Vec2Iterator_obj::zpp_pool = it;
						HX_STACK_LINE(739)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(741)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(744)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,foreach,return )

::String Vec2List_obj::toString( ){
	HX_STACK_PUSH("Vec2List::toString","nape/geom/Vec2List.hx",696);
	HX_STACK_THIS(this);
	HX_STACK_LINE(697)
	::String ret = HX_CSTRING("[");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(698)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(699)
	for(::cpp::FastIterator_obj< ::nape::geom::Vec2 > *__it = ::cpp::CreateFastIterator< ::nape::geom::Vec2 >(this->iterator());  __it->hasNext(); ){
		::nape::geom::Vec2 i = __it->next();
		{
			HX_STACK_LINE(700)
			if ((!(fst))){
				HX_STACK_LINE(700)
				hx::AddEq(ret,HX_CSTRING(","));
			}
			HX_STACK_LINE(701)
			hx::AddEq(ret,(  (((i == null()))) ? ::String(HX_CSTRING("NULL")) : ::String(i->toString()) ));
			HX_STACK_LINE(702)
			fst = false;
		}
;
	}
	HX_STACK_LINE(704)
	return (ret + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,toString,return )

Void Vec2List_obj::merge( ::nape::geom::Vec2List xs){
{
		HX_STACK_PUSH("Vec2List::merge","nape/geom/Vec2List.hx",678);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xs,"xs");
		HX_STACK_LINE(680)
		if (((xs == null()))){
			HX_STACK_LINE(680)
			hx::Throw (HX_CSTRING("Error: Cannot merge with null list"));
		}
		HX_STACK_LINE(682)
		for(::cpp::FastIterator_obj< ::nape::geom::Vec2 > *__it = ::cpp::CreateFastIterator< ::nape::geom::Vec2 >(xs->iterator());  __it->hasNext(); ){
			::nape::geom::Vec2 x = __it->next();
			if ((!(this->has(x)))){
				HX_STACK_LINE(683)
				this->add(x);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,merge,(void))

::nape::geom::Vec2List Vec2List_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_PUSH("Vec2List::copy","nape/geom/Vec2List.hx",662);
	HX_STACK_THIS(this);
	HX_STACK_ARG(deep,"deep");
{
		HX_STACK_LINE(663)
		::nape::geom::Vec2List ret = ::nape::geom::Vec2List_obj::__new();		HX_STACK_VAR(ret,"ret");
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &i){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",664);
				{
					HX_STACK_LINE(664)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(664)
					if (((bool((i != null())) && bool(i->zpp_disp)))){
						HX_STACK_LINE(664)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					struct _Function_2_1{
						inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &i,bool &weak){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",664);
							{
								struct _Function_3_1{
									inline static Float Block( ::nape::geom::Vec2 &i){
										HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",664);
										{
											HX_STACK_LINE(664)
											if ((i->zpp_disp)){
												HX_STACK_LINE(664)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(664)
											{
												HX_STACK_LINE(664)
												::zpp_nape::geom::ZPP_Vec2 _this = i->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(664)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(664)
													_this->_validate();
												}
											}
											HX_STACK_LINE(664)
											return i->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_3_2{
									inline static Float Block( ::nape::geom::Vec2 &i){
										HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",664);
										{
											HX_STACK_LINE(664)
											if ((i->zpp_disp)){
												HX_STACK_LINE(664)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(664)
											{
												HX_STACK_LINE(664)
												::zpp_nape::geom::ZPP_Vec2 _this = i->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(664)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(664)
													_this->_validate();
												}
											}
											HX_STACK_LINE(664)
											return i->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(664)
								Float x = _Function_3_1::Block(i);		HX_STACK_VAR(x,"x");
								Float y = _Function_3_2::Block(i);		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(664)
								if (((bool((x != x)) || bool((y != y))))){
									HX_STACK_LINE(664)
									hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
								}
								HX_STACK_LINE(664)
								::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(664)
								if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
									HX_STACK_LINE(664)
									ret1 = ::nape::geom::Vec2_obj::__new(null(),null());
								}
								else{
									HX_STACK_LINE(664)
									ret1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(664)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
									HX_STACK_LINE(664)
									ret1->zpp_pool = null();
									HX_STACK_LINE(664)
									ret1->zpp_disp = false;
									HX_STACK_LINE(664)
									if (((ret1 == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
										HX_STACK_LINE(664)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
									}
								}
								HX_STACK_LINE(664)
								if (((ret1->zpp_inner == null()))){
									struct _Function_4_1{
										inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
											HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",664);
											{
												HX_STACK_LINE(664)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(664)
												::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
												HX_STACK_LINE(664)
												{
													HX_STACK_LINE(664)
													if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
														HX_STACK_LINE(664)
														ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
													}
													else{
														HX_STACK_LINE(664)
														ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
														HX_STACK_LINE(664)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
														HX_STACK_LINE(664)
														ret2->next = null();
													}
													HX_STACK_LINE(664)
													ret2->weak = false;
												}
												HX_STACK_LINE(664)
												ret2->_immutable = immutable;
												HX_STACK_LINE(664)
												{
													HX_STACK_LINE(664)
													ret2->x = x;
													HX_STACK_LINE(664)
													ret2->y = y;
													HX_STACK_LINE(664)
													{
													}
												}
												HX_STACK_LINE(664)
												return ret2;
											}
											return null();
										}
									};
									HX_STACK_LINE(664)
									ret1->zpp_inner = _Function_4_1::Block(x,y);
									HX_STACK_LINE(664)
									ret1->zpp_inner->outer = ret1;
								}
								else{
									HX_STACK_LINE(664)
									if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
										HX_STACK_LINE(664)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(664)
									{
										HX_STACK_LINE(664)
										::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(664)
										if ((_this->_immutable)){
											HX_STACK_LINE(664)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(664)
										if (((_this->_isimmutable != null()))){
											HX_STACK_LINE(664)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(664)
									if (((bool((x != x)) || bool((y != y))))){
										HX_STACK_LINE(664)
										hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
									}
									struct _Function_4_1{
										inline static Float Block( ::nape::geom::Vec2 &ret1){
											HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",664);
											{
												HX_STACK_LINE(664)
												if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
													HX_STACK_LINE(664)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(664)
												{
													HX_STACK_LINE(664)
													::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(664)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(664)
														_this->_validate();
													}
												}
												HX_STACK_LINE(664)
												return ret1->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_4_2{
										inline static Float Block( ::nape::geom::Vec2 &ret1){
											HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",664);
											{
												HX_STACK_LINE(664)
												if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
													HX_STACK_LINE(664)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(664)
												{
													HX_STACK_LINE(664)
													::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(664)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(664)
														_this->_validate();
													}
												}
												HX_STACK_LINE(664)
												return ret1->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(664)
									if ((!(((bool((_Function_4_1::Block(ret1) == x)) && bool((_Function_4_2::Block(ret1) == y))))))){
										HX_STACK_LINE(664)
										{
											HX_STACK_LINE(664)
											ret1->zpp_inner->x = x;
											HX_STACK_LINE(664)
											ret1->zpp_inner->y = y;
											HX_STACK_LINE(664)
											{
											}
										}
										HX_STACK_LINE(664)
										{
											HX_STACK_LINE(664)
											::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(664)
											if (((_this->_invalidate != null()))){
												HX_STACK_LINE(664)
												_this->_invalidate(_this);
											}
										}
									}
									HX_STACK_LINE(664)
									ret1;
								}
								HX_STACK_LINE(664)
								ret1->zpp_inner->weak = weak;
								HX_STACK_LINE(664)
								return ret1;
							}
							return null();
						}
					};
					HX_STACK_LINE(664)
					return _Function_2_1::Block(i,weak);
				}
				return null();
			}
		};
		HX_STACK_LINE(664)
		for(::cpp::FastIterator_obj< ::nape::geom::Vec2 > *__it = ::cpp::CreateFastIterator< ::nape::geom::Vec2 >(this->iterator());  __it->hasNext(); ){
			::nape::geom::Vec2 i = __it->next();
			ret->push((  ((deep)) ? ::nape::geom::Vec2(_Function_1_1::Block(i)) : ::nape::geom::Vec2(i) ));
		}
		HX_STACK_LINE(665)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,copy,return )

::nape::geom::Vec2Iterator Vec2List_obj::iterator( ){
	HX_STACK_PUSH("Vec2List::iterator","nape/geom/Vec2List.hx",647);
	HX_STACK_THIS(this);
	HX_STACK_LINE(649)
	this->zpp_vm();
	HX_STACK_LINE(651)
	return ::nape::geom::Vec2Iterator_obj::get(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,iterator,return )

bool Vec2List_obj::empty( ){
	HX_STACK_PUSH("Vec2List::empty","nape/geom/Vec2List.hx",631);
	HX_STACK_THIS(this);
	HX_STACK_LINE(631)
	return (this->zpp_gl() == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,empty,return )

Void Vec2List_obj::clear( ){
{
		HX_STACK_PUSH("Vec2List::clear","nape/geom/Vec2List.hx",614);
		HX_STACK_THIS(this);
		HX_STACK_LINE(616)
		if ((this->zpp_inner->immutable)){
			HX_STACK_LINE(616)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
		}
		HX_STACK_LINE(618)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(618)
			while((!(this->empty()))){
				HX_STACK_LINE(619)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(621)
			while((!(this->empty()))){
				HX_STACK_LINE(622)
				this->shift();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,clear,(void))

bool Vec2List_obj::remove( ::nape::geom::Vec2 obj){
	HX_STACK_PUSH("Vec2List::remove","nape/geom/Vec2List.hx",576);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(578)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(578)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(580)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(582)
	this->zpp_vm();
	HX_STACK_LINE(584)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(586)
		ret = false;
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 cx_ite = this->zpp_inner->inner->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while(((cx_ite != null()))){
				HX_STACK_LINE(590)
				::zpp_nape::geom::ZPP_Vec2 x = cx_ite->elt;		HX_STACK_VAR(x,"x");
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


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,remove,return )

bool Vec2List_obj::add( ::nape::geom::Vec2 obj){
	HX_STACK_PUSH("Vec2List::add","nape/geom/Vec2List.hx",563);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(563)
	return (  ((this->zpp_inner->reverse_flag)) ? bool(this->push(obj)) : bool(this->unshift(obj)) );
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,add,return )

::nape::geom::Vec2 Vec2List_obj::shift( ){
	HX_STACK_PUSH("Vec2List::shift","nape/geom/Vec2List.hx",519);
	HX_STACK_THIS(this);
	HX_STACK_LINE(521)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(521)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(523)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(525)
	if ((this->empty())){
		HX_STACK_LINE(525)
		hx::Throw (HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(528)
	this->zpp_vm();
	HX_STACK_LINE(530)
	::zpp_nape::geom::ZPP_Vec2 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(532)
		if (((bool((this->zpp_inner->at_ite != null())) && bool((this->zpp_inner->at_ite->next == null()))))){
			HX_STACK_LINE(532)
			this->zpp_inner->at_ite = null();
		}
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 ite = (  (((this->zpp_gl() == (int)1))) ? ::zpp_nape::util::ZNPNode_ZPP_Vec2(null()) : ::zpp_nape::util::ZNPNode_ZPP_Vec2(this->zpp_inner->inner->iterator_at((this->zpp_gl() - (int)2))) );		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(534)
		ret = (  (((ite == null()))) ? ::zpp_nape::geom::ZPP_Vec2(this->zpp_inner->inner->head->elt) : ::zpp_nape::geom::ZPP_Vec2(ite->next->elt) );
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",535);
				{
					HX_STACK_LINE(535)
					if (((ret->outer == null()))){
						HX_STACK_LINE(535)
						ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
						HX_STACK_LINE(535)
						{
							HX_STACK_LINE(535)
							::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(535)
							{
								HX_STACK_LINE(535)
								if (((o->outer != null()))){
									HX_STACK_LINE(535)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(535)
									o->outer = null();
								}
								HX_STACK_LINE(535)
								o->_isimmutable = null();
								HX_STACK_LINE(535)
								o->_validate = null();
								HX_STACK_LINE(535)
								o->_invalidate = null();
							}
							HX_STACK_LINE(535)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(535)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(535)
						ret->outer->zpp_inner = ret;
					}
					HX_STACK_LINE(535)
					return ret->outer;
				}
				return null();
			}
		};
		HX_STACK_LINE(535)
		::nape::geom::Vec2 retx = _Function_2_1::Block(ret);		HX_STACK_VAR(retx,"retx");
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
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",541);
				{
					HX_STACK_LINE(541)
					if (((ret->outer == null()))){
						HX_STACK_LINE(541)
						ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
						HX_STACK_LINE(541)
						{
							HX_STACK_LINE(541)
							::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(541)
							{
								HX_STACK_LINE(541)
								if (((o->outer != null()))){
									HX_STACK_LINE(541)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(541)
									o->outer = null();
								}
								HX_STACK_LINE(541)
								o->_isimmutable = null();
								HX_STACK_LINE(541)
								o->_validate = null();
								HX_STACK_LINE(541)
								o->_invalidate = null();
							}
							HX_STACK_LINE(541)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(541)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(541)
						ret->outer->zpp_inner = ret;
					}
					HX_STACK_LINE(541)
					return ret->outer;
				}
				return null();
			}
		};
		HX_STACK_LINE(541)
		::nape::geom::Vec2 retx = _Function_2_1::Block(ret);		HX_STACK_VAR(retx,"retx");
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
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",546);
			{
				HX_STACK_LINE(546)
				if (((ret->outer == null()))){
					HX_STACK_LINE(546)
					ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
					HX_STACK_LINE(546)
					{
						HX_STACK_LINE(546)
						::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(546)
						{
							HX_STACK_LINE(546)
							if (((o->outer != null()))){
								HX_STACK_LINE(546)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(546)
								o->outer = null();
							}
							HX_STACK_LINE(546)
							o->_isimmutable = null();
							HX_STACK_LINE(546)
							o->_validate = null();
							HX_STACK_LINE(546)
							o->_invalidate = null();
						}
						HX_STACK_LINE(546)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(546)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(546)
					ret->outer->zpp_inner = ret;
				}
				HX_STACK_LINE(546)
				return ret->outer;
			}
			return null();
		}
	};
	HX_STACK_LINE(546)
	::nape::geom::Vec2 retx = _Function_1_1::Block(ret);		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,shift,return )

::nape::geom::Vec2 Vec2List_obj::pop( ){
	HX_STACK_PUSH("Vec2List::pop","nape/geom/Vec2List.hx",478);
	HX_STACK_THIS(this);
	HX_STACK_LINE(480)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(480)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(482)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(484)
	if ((this->empty())){
		HX_STACK_LINE(484)
		hx::Throw (HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(487)
	this->zpp_vm();
	HX_STACK_LINE(489)
	::zpp_nape::geom::ZPP_Vec2 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(491)
		ret = this->zpp_inner->inner->head->elt;
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",492);
				{
					HX_STACK_LINE(492)
					if (((ret->outer == null()))){
						HX_STACK_LINE(492)
						ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								if (((o->outer != null()))){
									HX_STACK_LINE(492)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(492)
									o->outer = null();
								}
								HX_STACK_LINE(492)
								o->_isimmutable = null();
								HX_STACK_LINE(492)
								o->_validate = null();
								HX_STACK_LINE(492)
								o->_invalidate = null();
							}
							HX_STACK_LINE(492)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(492)
						ret->outer->zpp_inner = ret;
					}
					HX_STACK_LINE(492)
					return ret->outer;
				}
				return null();
			}
		};
		HX_STACK_LINE(492)
		::nape::geom::Vec2 retx = _Function_2_1::Block(ret);		HX_STACK_VAR(retx,"retx");
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
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 ite = (  (((this->zpp_gl() == (int)1))) ? ::zpp_nape::util::ZNPNode_ZPP_Vec2(null()) : ::zpp_nape::util::ZNPNode_ZPP_Vec2(this->zpp_inner->inner->iterator_at((this->zpp_gl() - (int)2))) );		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(499)
		ret = (  (((ite == null()))) ? ::zpp_nape::geom::ZPP_Vec2(this->zpp_inner->inner->head->elt) : ::zpp_nape::geom::ZPP_Vec2(ite->next->elt) );
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",500);
				{
					HX_STACK_LINE(500)
					if (((ret->outer == null()))){
						HX_STACK_LINE(500)
						ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
						HX_STACK_LINE(500)
						{
							HX_STACK_LINE(500)
							::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(500)
							{
								HX_STACK_LINE(500)
								if (((o->outer != null()))){
									HX_STACK_LINE(500)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(500)
									o->outer = null();
								}
								HX_STACK_LINE(500)
								o->_isimmutable = null();
								HX_STACK_LINE(500)
								o->_validate = null();
								HX_STACK_LINE(500)
								o->_invalidate = null();
							}
							HX_STACK_LINE(500)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(500)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(500)
						ret->outer->zpp_inner = ret;
					}
					HX_STACK_LINE(500)
					return ret->outer;
				}
				return null();
			}
		};
		HX_STACK_LINE(500)
		::nape::geom::Vec2 retx = _Function_2_1::Block(ret);		HX_STACK_VAR(retx,"retx");
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
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",505);
			{
				HX_STACK_LINE(505)
				if (((ret->outer == null()))){
					HX_STACK_LINE(505)
					ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
					HX_STACK_LINE(505)
					{
						HX_STACK_LINE(505)
						::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(505)
						{
							HX_STACK_LINE(505)
							if (((o->outer != null()))){
								HX_STACK_LINE(505)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(505)
								o->outer = null();
							}
							HX_STACK_LINE(505)
							o->_isimmutable = null();
							HX_STACK_LINE(505)
							o->_validate = null();
							HX_STACK_LINE(505)
							o->_invalidate = null();
						}
						HX_STACK_LINE(505)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(505)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(505)
					ret->outer->zpp_inner = ret;
				}
				HX_STACK_LINE(505)
				return ret->outer;
			}
			return null();
		}
	};
	HX_STACK_LINE(505)
	::nape::geom::Vec2 retx = _Function_1_1::Block(ret);		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,pop,return )

bool Vec2List_obj::unshift( ::nape::geom::Vec2 obj){
	HX_STACK_PUSH("Vec2List::unshift","nape/geom/Vec2List.hx",447);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(449)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(449)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(451)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(453)
	this->zpp_vm();
	HX_STACK_LINE(455)
	bool cont = (  (((this->zpp_inner->adder != null()))) ? bool(this->zpp_inner->adder(obj)) : bool(true) );		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(456)
	if ((cont)){
		HX_STACK_LINE(457)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(458)
			if (((this->zpp_inner->push_ite == null()))){
				HX_STACK_LINE(458)
				this->zpp_inner->push_ite = (  ((this->empty())) ? ::zpp_nape::util::ZNPNode_ZPP_Vec2(null()) : ::zpp_nape::util::ZNPNode_ZPP_Vec2(this->zpp_inner->inner->iterator_at((this->zpp_gl() - (int)1))) );
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


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,unshift,return )

bool Vec2List_obj::push( ::nape::geom::Vec2 obj){
	HX_STACK_PUSH("Vec2List::push","nape/geom/Vec2List.hx",416);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(418)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(418)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(420)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(422)
	this->zpp_vm();
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
				HX_STACK_LINE(428)
				this->zpp_inner->push_ite = (  ((this->empty())) ? ::zpp_nape::util::ZNPNode_ZPP_Vec2(null()) : ::zpp_nape::util::ZNPNode_ZPP_Vec2(this->zpp_inner->inner->iterator_at((this->zpp_gl() - (int)1))) );
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


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,push,return )

::nape::geom::Vec2 Vec2List_obj::at( int index){
	HX_STACK_PUSH("Vec2List::at","nape/geom/Vec2List.hx",363);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(365)
	this->zpp_vm();
	HX_STACK_LINE(368)
	if (((bool((index < (int)0)) || bool((index >= this->zpp_gl()))))){
		HX_STACK_LINE(368)
		hx::Throw (HX_CSTRING("Error: Index out of bounds"));
	}
	HX_STACK_LINE(370)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(370)
		index = ((this->zpp_gl() - (int)1) - index);
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
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2List_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2List.hx",403);
			{
				HX_STACK_LINE(403)
				::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner->at_ite->elt;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(403)
				if (((_this->outer == null()))){
					HX_STACK_LINE(403)
					_this->outer = ::nape::geom::Vec2_obj::__new(null(),null());
					HX_STACK_LINE(403)
					{
						HX_STACK_LINE(403)
						::zpp_nape::geom::ZPP_Vec2 o = _this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(403)
						{
							HX_STACK_LINE(403)
							if (((o->outer != null()))){
								HX_STACK_LINE(403)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(403)
								o->outer = null();
							}
							HX_STACK_LINE(403)
							o->_isimmutable = null();
							HX_STACK_LINE(403)
							o->_validate = null();
							HX_STACK_LINE(403)
							o->_invalidate = null();
						}
						HX_STACK_LINE(403)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(403)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(403)
					_this->outer->zpp_inner = _this;
				}
				HX_STACK_LINE(403)
				return _this->outer;
			}
			return null();
		}
	};
	HX_STACK_LINE(403)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,at,return )

bool Vec2List_obj::has( ::nape::geom::Vec2 obj){
	HX_STACK_PUSH("Vec2List::has","nape/geom/Vec2List.hx",346);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(348)
	this->zpp_vm();
	HX_STACK_LINE(350)
	return this->zpp_inner->inner->has(obj->zpp_inner);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,has,return )

Void Vec2List_obj::zpp_vm( ){
{
		HX_STACK_PUSH("Vec2List::zpp_vm","nape/geom/Vec2List.hx",291);
		HX_STACK_THIS(this);
		HX_STACK_LINE(291)
		this->zpp_inner->valmod();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,zpp_vm,(void))

int Vec2List_obj::zpp_gl( ){
	HX_STACK_PUSH("Vec2List::zpp_gl","nape/geom/Vec2List.hx",269);
	HX_STACK_THIS(this);
	HX_STACK_LINE(270)
	this->zpp_inner->valmod();
	HX_STACK_LINE(271)
	if ((this->zpp_inner->zip_length)){
		HX_STACK_LINE(272)
		this->zpp_inner->zip_length = false;
		HX_STACK_LINE(284)
		this->zpp_inner->user_length = this->zpp_inner->inner->length;
	}
	HX_STACK_LINE(286)
	return this->zpp_inner->user_length;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,zpp_gl,return )

int Vec2List_obj::get_length( ){
	HX_STACK_PUSH("Vec2List::get_length","nape/geom/Vec2List.hx",263);
	HX_STACK_THIS(this);
	HX_STACK_LINE(263)
	return this->zpp_gl();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2List_obj,get_length,return )

::nape::geom::Vec2List Vec2List_obj::fromArray( Array< ::Dynamic > array){
	HX_STACK_PUSH("Vec2List::fromArray","nape/geom/Vec2List.hx",304);
	HX_STACK_ARG(array,"array");
	HX_STACK_LINE(306)
	if (((array == null()))){
		HX_STACK_LINE(306)
		hx::Throw (HX_CSTRING("Error: Cannot convert null Array to Nape list"));
	}
	HX_STACK_LINE(310)
	::nape::geom::Vec2List ret = ::nape::geom::Vec2List_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		while(((_g < array->length))){
			HX_STACK_LINE(311)
			::nape::geom::Vec2 i = array->__get(_g).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			ret->push(i);
		}
	}
	HX_STACK_LINE(318)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vec2List_obj,fromArray,return )


Vec2List_obj::Vec2List_obj()
{
}

void Vec2List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vec2List);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Vec2List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Vec2List_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"zpp_vm") ) { return zpp_vm_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_gl") ) { return zpp_gl_dyn(); }
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

Dynamic Vec2List_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_Vec2List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vec2List_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("zpp_vm"),
	HX_CSTRING("zpp_gl"),
	HX_CSTRING("get_length"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec2List_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec2List_obj::__mClass,"__mClass");
};

Class Vec2List_obj::__mClass;

void Vec2List_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.Vec2List"), hx::TCanCast< Vec2List_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Vec2List_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
