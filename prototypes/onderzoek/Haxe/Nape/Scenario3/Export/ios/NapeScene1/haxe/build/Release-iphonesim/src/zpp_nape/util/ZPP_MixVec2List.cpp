#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_MixVec2List
#include <zpp_nape/util/ZPP_MixVec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_MixVec2List_obj::__construct()
{
HX_STACK_PUSH("ZPP_MixVec2List::new","zpp_nape/util/Lists.hx",16277);
{
	HX_STACK_LINE(16282)
	this->at_index = (int)0;
	HX_STACK_LINE(16281)
	this->at_ite = null();
	HX_STACK_LINE(16280)
	this->zip_length = false;
	HX_STACK_LINE(16279)
	this->_length = (int)0;
	HX_STACK_LINE(16278)
	this->inner = null();
	HX_STACK_LINE(16290)
	super::__construct();
	HX_STACK_LINE(16291)
	this->at_ite = null();
	HX_STACK_LINE(16292)
	this->at_index = (int)0;
	HX_STACK_LINE(16293)
	this->zip_length = true;
	HX_STACK_LINE(16294)
	this->_length = (int)0;
}
;
	return null();
}

ZPP_MixVec2List_obj::~ZPP_MixVec2List_obj() { }

Dynamic ZPP_MixVec2List_obj::__CreateEmpty() { return  new ZPP_MixVec2List_obj; }
hx::ObjectPtr< ZPP_MixVec2List_obj > ZPP_MixVec2List_obj::__new()
{  hx::ObjectPtr< ZPP_MixVec2List_obj > result = new ZPP_MixVec2List_obj();
	result->__construct();
	return result;}

Dynamic ZPP_MixVec2List_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MixVec2List_obj > result = new ZPP_MixVec2List_obj();
	result->__construct();
	return result;}

Void ZPP_MixVec2List_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_MixVec2List::clear","zpp_nape/util/Lists.hx",16481);
		HX_STACK_THIS(this);
		HX_STACK_LINE(16483)
		if ((this->zpp_inner->immutable)){
			HX_STACK_LINE(16483)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
		}
		HX_STACK_LINE(16485)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(16485)
			while((!(this->empty()))){
				HX_STACK_LINE(16486)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(16488)
			while((!(this->empty()))){
				HX_STACK_LINE(16489)
				this->shift();
			}
		}
	}
return null();
}


bool ZPP_MixVec2List_obj::remove( ::nape::geom::Vec2 obj){
	HX_STACK_PUSH("ZPP_MixVec2List::remove","zpp_nape/util/Lists.hx",16450);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(16452)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(16452)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(16454)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(16455)
	this->zpp_vm();
	HX_STACK_LINE(16456)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(16457)
	{
		HX_STACK_LINE(16458)
		ret = false;
		HX_STACK_LINE(16459)
		{
			HX_STACK_LINE(16460)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(16461)
			while(((cx_ite != null()))){
				HX_STACK_LINE(16462)
				::zpp_nape::geom::ZPP_Vec2 x = cx_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(16463)
				if (((obj->zpp_inner == x))){
					HX_STACK_LINE(16465)
					ret = true;
					HX_STACK_LINE(16466)
					break;
				}
				HX_STACK_LINE(16469)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(16473)
	if ((ret)){
		HX_STACK_LINE(16474)
		if (((this->zpp_inner->subber_dyn() != null()))){
			HX_STACK_LINE(16474)
			this->zpp_inner->subber(obj);
		}
		HX_STACK_LINE(16475)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(16475)
			this->inner->remove(obj->zpp_inner);
		}
		HX_STACK_LINE(16476)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(16478)
	return ret;
}


::nape::geom::Vec2 ZPP_MixVec2List_obj::shift( ){
	HX_STACK_PUSH("ZPP_MixVec2List::shift","zpp_nape/util/Lists.hx",16421);
	HX_STACK_THIS(this);
	HX_STACK_LINE(16423)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(16423)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(16425)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(16427)
	if ((this->empty())){
		HX_STACK_LINE(16427)
		hx::Throw (HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(16429)
	this->zpp_vm();
	HX_STACK_LINE(16430)
	::zpp_nape::geom::ZPP_Vec2 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(16431)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(16432)
		if (((bool((this->at_ite != null())) && bool((this->at_ite->next == null()))))){
			HX_STACK_LINE(16432)
			this->at_ite = null();
		}
		HX_STACK_LINE(16433)
		::zpp_nape::geom::ZPP_Vec2 ite = (  (((this->zpp_gl() == (int)1))) ? ::zpp_nape::geom::ZPP_Vec2(null()) : ::zpp_nape::geom::ZPP_Vec2(this->inner->iterator_at((this->zpp_gl() - (int)2))) );		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(16434)
		ret = (  (((ite == null()))) ? ::zpp_nape::geom::ZPP_Vec2(this->inner->next) : ::zpp_nape::geom::ZPP_Vec2(ite->next) );
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",16435);
				{
					HX_STACK_LINE(16435)
					if (((ret->outer == null()))){
						HX_STACK_LINE(16435)
						ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
						HX_STACK_LINE(16435)
						{
							HX_STACK_LINE(16435)
							::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(16435)
							{
							}
							HX_STACK_LINE(16435)
							{
								HX_STACK_LINE(16435)
								if (((o->outer != null()))){
									HX_STACK_LINE(16435)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(16435)
									o->outer = null();
								}
								HX_STACK_LINE(16435)
								o->_isimmutable = null();
								HX_STACK_LINE(16435)
								o->_validate = null();
								HX_STACK_LINE(16435)
								o->_invalidate = null();
							}
							HX_STACK_LINE(16435)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(16435)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(16435)
						ret->outer->zpp_inner = ret;
					}
					HX_STACK_LINE(16435)
					return ret->outer;
				}
				return null();
			}
		};
		HX_STACK_LINE(16435)
		::nape::geom::Vec2 retx = _Function_2_1::Block(ret);		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(16436)
		if (((this->zpp_inner->subber_dyn() != null()))){
			HX_STACK_LINE(16436)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(16437)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(16437)
			this->inner->erase(ite);
		}
	}
	else{
		HX_STACK_LINE(16440)
		ret = this->inner->next;
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",16441);
				{
					HX_STACK_LINE(16441)
					if (((ret->outer == null()))){
						HX_STACK_LINE(16441)
						ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
						HX_STACK_LINE(16441)
						{
							HX_STACK_LINE(16441)
							::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(16441)
							{
							}
							HX_STACK_LINE(16441)
							{
								HX_STACK_LINE(16441)
								if (((o->outer != null()))){
									HX_STACK_LINE(16441)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(16441)
									o->outer = null();
								}
								HX_STACK_LINE(16441)
								o->_isimmutable = null();
								HX_STACK_LINE(16441)
								o->_validate = null();
								HX_STACK_LINE(16441)
								o->_invalidate = null();
							}
							HX_STACK_LINE(16441)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(16441)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(16441)
						ret->outer->zpp_inner = ret;
					}
					HX_STACK_LINE(16441)
					return ret->outer;
				}
				return null();
			}
		};
		HX_STACK_LINE(16441)
		::nape::geom::Vec2 retx = _Function_2_1::Block(ret);		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(16442)
		if (((this->zpp_inner->subber_dyn() != null()))){
			HX_STACK_LINE(16442)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(16443)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(16443)
			this->inner->pop();
		}
	}
	HX_STACK_LINE(16445)
	this->zpp_inner->invalidate();
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",16446);
			{
				HX_STACK_LINE(16446)
				if (((ret->outer == null()))){
					HX_STACK_LINE(16446)
					ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
					HX_STACK_LINE(16446)
					{
						HX_STACK_LINE(16446)
						::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(16446)
						{
						}
						HX_STACK_LINE(16446)
						{
							HX_STACK_LINE(16446)
							if (((o->outer != null()))){
								HX_STACK_LINE(16446)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(16446)
								o->outer = null();
							}
							HX_STACK_LINE(16446)
							o->_isimmutable = null();
							HX_STACK_LINE(16446)
							o->_validate = null();
							HX_STACK_LINE(16446)
							o->_invalidate = null();
						}
						HX_STACK_LINE(16446)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(16446)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(16446)
					ret->outer->zpp_inner = ret;
				}
				HX_STACK_LINE(16446)
				return ret->outer;
			}
			return null();
		}
	};
	HX_STACK_LINE(16446)
	::nape::geom::Vec2 retx = _Function_1_1::Block(ret);		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(16447)
	return retx;
}


::nape::geom::Vec2 ZPP_MixVec2List_obj::pop( ){
	HX_STACK_PUSH("ZPP_MixVec2List::pop","zpp_nape/util/Lists.hx",16392);
	HX_STACK_THIS(this);
	HX_STACK_LINE(16394)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(16394)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(16396)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(16398)
	if ((this->empty())){
		HX_STACK_LINE(16398)
		hx::Throw (HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(16400)
	this->zpp_vm();
	HX_STACK_LINE(16401)
	::zpp_nape::geom::ZPP_Vec2 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(16402)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(16403)
		ret = this->inner->next;
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",16404);
				{
					HX_STACK_LINE(16404)
					if (((ret->outer == null()))){
						HX_STACK_LINE(16404)
						ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
						HX_STACK_LINE(16404)
						{
							HX_STACK_LINE(16404)
							::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(16404)
							{
							}
							HX_STACK_LINE(16404)
							{
								HX_STACK_LINE(16404)
								if (((o->outer != null()))){
									HX_STACK_LINE(16404)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(16404)
									o->outer = null();
								}
								HX_STACK_LINE(16404)
								o->_isimmutable = null();
								HX_STACK_LINE(16404)
								o->_validate = null();
								HX_STACK_LINE(16404)
								o->_invalidate = null();
							}
							HX_STACK_LINE(16404)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(16404)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(16404)
						ret->outer->zpp_inner = ret;
					}
					HX_STACK_LINE(16404)
					return ret->outer;
				}
				return null();
			}
		};
		HX_STACK_LINE(16404)
		::nape::geom::Vec2 retx = _Function_2_1::Block(ret);		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(16405)
		if (((this->zpp_inner->subber_dyn() != null()))){
			HX_STACK_LINE(16405)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(16406)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(16406)
			this->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(16409)
		if (((bool((this->at_ite != null())) && bool((this->at_ite->next == null()))))){
			HX_STACK_LINE(16409)
			this->at_ite = null();
		}
		HX_STACK_LINE(16410)
		::zpp_nape::geom::ZPP_Vec2 ite = (  (((this->zpp_gl() == (int)1))) ? ::zpp_nape::geom::ZPP_Vec2(null()) : ::zpp_nape::geom::ZPP_Vec2(this->inner->iterator_at((this->zpp_gl() - (int)2))) );		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(16411)
		ret = (  (((ite == null()))) ? ::zpp_nape::geom::ZPP_Vec2(this->inner->next) : ::zpp_nape::geom::ZPP_Vec2(ite->next) );
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",16412);
				{
					HX_STACK_LINE(16412)
					if (((ret->outer == null()))){
						HX_STACK_LINE(16412)
						ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
						HX_STACK_LINE(16412)
						{
							HX_STACK_LINE(16412)
							::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(16412)
							{
							}
							HX_STACK_LINE(16412)
							{
								HX_STACK_LINE(16412)
								if (((o->outer != null()))){
									HX_STACK_LINE(16412)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(16412)
									o->outer = null();
								}
								HX_STACK_LINE(16412)
								o->_isimmutable = null();
								HX_STACK_LINE(16412)
								o->_validate = null();
								HX_STACK_LINE(16412)
								o->_invalidate = null();
							}
							HX_STACK_LINE(16412)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(16412)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(16412)
						ret->outer->zpp_inner = ret;
					}
					HX_STACK_LINE(16412)
					return ret->outer;
				}
				return null();
			}
		};
		HX_STACK_LINE(16412)
		::nape::geom::Vec2 retx = _Function_2_1::Block(ret);		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(16413)
		if (((this->zpp_inner->subber_dyn() != null()))){
			HX_STACK_LINE(16413)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(16414)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(16414)
			this->inner->erase(ite);
		}
	}
	HX_STACK_LINE(16416)
	this->zpp_inner->invalidate();
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",16417);
			{
				HX_STACK_LINE(16417)
				if (((ret->outer == null()))){
					HX_STACK_LINE(16417)
					ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
					HX_STACK_LINE(16417)
					{
						HX_STACK_LINE(16417)
						::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(16417)
						{
						}
						HX_STACK_LINE(16417)
						{
							HX_STACK_LINE(16417)
							if (((o->outer != null()))){
								HX_STACK_LINE(16417)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(16417)
								o->outer = null();
							}
							HX_STACK_LINE(16417)
							o->_isimmutable = null();
							HX_STACK_LINE(16417)
							o->_validate = null();
							HX_STACK_LINE(16417)
							o->_invalidate = null();
						}
						HX_STACK_LINE(16417)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(16417)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(16417)
					ret->outer->zpp_inner = ret;
				}
				HX_STACK_LINE(16417)
				return ret->outer;
			}
			return null();
		}
	};
	HX_STACK_LINE(16417)
	::nape::geom::Vec2 retx = _Function_1_1::Block(ret);		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(16418)
	return retx;
}


bool ZPP_MixVec2List_obj::unshift( ::nape::geom::Vec2 obj){
	HX_STACK_PUSH("ZPP_MixVec2List::unshift","zpp_nape/util/Lists.hx",16370);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(16372)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(16372)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(16374)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(16375)
	this->zpp_vm();
	HX_STACK_LINE(16377)
	if ((obj->zpp_inner->_inuse)){
		HX_STACK_LINE(16377)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" is already in use")));
	}
	HX_STACK_LINE(16379)
	bool cont = (  (((this->zpp_inner->adder_dyn() != null()))) ? bool(this->zpp_inner->adder(obj)) : bool(true) );		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(16380)
	if ((cont)){
		HX_STACK_LINE(16381)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(16382)
			::zpp_nape::geom::ZPP_Vec2 ite = this->inner->iterator_at((this->zpp_gl() - (int)1));		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(16383)
			this->inner->insert(ite,obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(16385)
			this->inner->add(obj->zpp_inner);
		}
		HX_STACK_LINE(16386)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(16387)
		if (((this->zpp_inner->post_adder_dyn() != null()))){
			HX_STACK_LINE(16387)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(16389)
	return cont;
}


bool ZPP_MixVec2List_obj::push( ::nape::geom::Vec2 obj){
	HX_STACK_PUSH("ZPP_MixVec2List::push","zpp_nape/util/Lists.hx",16348);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(16350)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(16350)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(16352)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(16353)
	this->zpp_vm();
	HX_STACK_LINE(16355)
	if ((obj->zpp_inner->_inuse)){
		HX_STACK_LINE(16355)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" is already in use")));
	}
	HX_STACK_LINE(16357)
	bool cont = (  (((this->zpp_inner->adder_dyn() != null()))) ? bool(this->zpp_inner->adder(obj)) : bool(true) );		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(16358)
	if ((cont)){
		HX_STACK_LINE(16359)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(16359)
			this->inner->add(obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(16361)
			::zpp_nape::geom::ZPP_Vec2 ite = this->inner->iterator_at((this->zpp_gl() - (int)1));		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(16362)
			this->inner->insert(ite,obj->zpp_inner);
		}
		HX_STACK_LINE(16364)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(16365)
		if (((this->zpp_inner->post_adder_dyn() != null()))){
			HX_STACK_LINE(16365)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(16367)
	return cont;
}


::nape::geom::Vec2 ZPP_MixVec2List_obj::at( int index){
	HX_STACK_PUSH("ZPP_MixVec2List::at","zpp_nape/util/Lists.hx",16321);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(16322)
	this->zpp_vm();
	HX_STACK_LINE(16324)
	if (((bool((index < (int)0)) || bool((index >= this->zpp_gl()))))){
		HX_STACK_LINE(16324)
		hx::Throw (HX_CSTRING("Error: Index out of bounds"));
	}
	HX_STACK_LINE(16326)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(16326)
		index = ((this->zpp_gl() - (int)1) - index);
	}
	HX_STACK_LINE(16327)
	if (((bool((index < this->at_index)) || bool((this->at_ite == null()))))){
		HX_STACK_LINE(16328)
		this->at_index = (int)0;
		HX_STACK_LINE(16329)
		this->at_ite = this->inner->next;
		HX_STACK_LINE(16330)
		while((true)){
			HX_STACK_LINE(16331)
			::zpp_nape::geom::ZPP_Vec2 x = this->at_ite;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(16332)
			break;
			HX_STACK_LINE(16333)
			this->at_ite = this->at_ite->next;
		}
	}
	HX_STACK_LINE(16336)
	while(((this->at_index != index))){
		HX_STACK_LINE(16337)
		(this->at_index)++;
		HX_STACK_LINE(16338)
		this->at_ite = this->at_ite->next;
		HX_STACK_LINE(16339)
		while((true)){
			HX_STACK_LINE(16340)
			::zpp_nape::geom::ZPP_Vec2 x = this->at_ite;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(16341)
			break;
			HX_STACK_LINE(16342)
			this->at_ite = this->at_ite->next;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::util::ZPP_MixVec2List_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",16345);
			{
				HX_STACK_LINE(16345)
				::zpp_nape::geom::ZPP_Vec2 _this = __this->at_ite;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(16345)
				if (((_this->outer == null()))){
					HX_STACK_LINE(16345)
					_this->outer = ::nape::geom::Vec2_obj::__new(null(),null());
					HX_STACK_LINE(16345)
					{
						HX_STACK_LINE(16345)
						::zpp_nape::geom::ZPP_Vec2 o = _this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(16345)
						{
						}
						HX_STACK_LINE(16345)
						{
							HX_STACK_LINE(16345)
							if (((o->outer != null()))){
								HX_STACK_LINE(16345)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(16345)
								o->outer = null();
							}
							HX_STACK_LINE(16345)
							o->_isimmutable = null();
							HX_STACK_LINE(16345)
							o->_validate = null();
							HX_STACK_LINE(16345)
							o->_invalidate = null();
						}
						HX_STACK_LINE(16345)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(16345)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(16345)
					_this->outer->zpp_inner = _this;
				}
				HX_STACK_LINE(16345)
				return _this->outer;
			}
			return null();
		}
	};
	HX_STACK_LINE(16345)
	return _Function_1_1::Block(this);
}


Void ZPP_MixVec2List_obj::zpp_vm( ){
{
		HX_STACK_PUSH("ZPP_MixVec2List::zpp_vm","zpp_nape/util/Lists.hx",16312);
		HX_STACK_THIS(this);
		HX_STACK_LINE(16313)
		this->zpp_inner->validate();
		HX_STACK_LINE(16314)
		if ((this->inner->modified)){
			HX_STACK_LINE(16315)
			this->zip_length = true;
			HX_STACK_LINE(16316)
			this->_length = (int)0;
			HX_STACK_LINE(16317)
			this->at_ite = null();
		}
	}
return null();
}


int ZPP_MixVec2List_obj::zpp_gl( ){
	HX_STACK_PUSH("ZPP_MixVec2List::zpp_gl","zpp_nape/util/Lists.hx",16296);
	HX_STACK_THIS(this);
	HX_STACK_LINE(16297)
	this->zpp_vm();
	HX_STACK_LINE(16298)
	if ((this->zip_length)){
		HX_STACK_LINE(16299)
		this->_length = (int)0;
		HX_STACK_LINE(16300)
		{
			HX_STACK_LINE(16301)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(16302)
			while(((cx_ite != null()))){
				HX_STACK_LINE(16303)
				::zpp_nape::geom::ZPP_Vec2 i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(16304)
				(this->_length)++;
				HX_STACK_LINE(16305)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(16308)
		this->zip_length = false;
	}
	HX_STACK_LINE(16310)
	return this->_length;
}


::zpp_nape::util::ZPP_MixVec2List ZPP_MixVec2List_obj::get( ::zpp_nape::geom::ZPP_Vec2 list,hx::Null< bool >  __o_immutable){
bool immutable = __o_immutable.Default(false);
	HX_STACK_PUSH("ZPP_MixVec2List::get","zpp_nape/util/Lists.hx",16283);
	HX_STACK_ARG(list,"list");
	HX_STACK_ARG(immutable,"immutable");
{
		HX_STACK_LINE(16284)
		::zpp_nape::util::ZPP_MixVec2List ret = ::zpp_nape::util::ZPP_MixVec2List_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(16285)
		ret->inner = list;
		HX_STACK_LINE(16286)
		ret->zpp_inner->immutable = immutable;
		HX_STACK_LINE(16287)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_MixVec2List_obj,get,return )


ZPP_MixVec2List_obj::ZPP_MixVec2List_obj()
{
}

void ZPP_MixVec2List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MixVec2List);
	HX_MARK_MEMBER_NAME(at_index,"at_index");
	HX_MARK_MEMBER_NAME(at_ite,"at_ite");
	HX_MARK_MEMBER_NAME(zip_length,"zip_length");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_MEMBER_NAME(inner,"inner");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_MixVec2List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(at_index,"at_index");
	HX_VISIT_MEMBER_NAME(at_ite,"at_ite");
	HX_VISIT_MEMBER_NAME(zip_length,"zip_length");
	HX_VISIT_MEMBER_NAME(_length,"_length");
	HX_VISIT_MEMBER_NAME(inner,"inner");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_MixVec2List_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_vm") ) { return zpp_vm_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_gl") ) { return zpp_gl_dyn(); }
		if (HX_FIELD_EQ(inName,"at_ite") ) { return at_ite; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		if (HX_FIELD_EQ(inName,"_length") ) { return _length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"at_index") ) { return at_index; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { return zip_length; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_MixVec2List_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"at_index") ) { at_index=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { zip_length=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_MixVec2List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("at_index"));
	outFields->push(HX_CSTRING("at_ite"));
	outFields->push(HX_CSTRING("zip_length"));
	outFields->push(HX_CSTRING("_length"));
	outFields->push(HX_CSTRING("inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clear"),
	HX_CSTRING("remove"),
	HX_CSTRING("shift"),
	HX_CSTRING("pop"),
	HX_CSTRING("unshift"),
	HX_CSTRING("push"),
	HX_CSTRING("at"),
	HX_CSTRING("zpp_vm"),
	HX_CSTRING("zpp_gl"),
	HX_CSTRING("at_index"),
	HX_CSTRING("at_ite"),
	HX_CSTRING("zip_length"),
	HX_CSTRING("_length"),
	HX_CSTRING("inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MixVec2List_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MixVec2List_obj::__mClass,"__mClass");
};

Class ZPP_MixVec2List_obj::__mClass;

void ZPP_MixVec2List_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_MixVec2List"), hx::TCanCast< ZPP_MixVec2List_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_MixVec2List_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
