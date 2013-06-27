#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void Vec2_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_PUSH("Vec2::new","nape/geom/Vec2.hx",204);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(212)
	this->zpp_pool = null();
	HX_STACK_LINE(208)
	this->zpp_inner = null();
	HX_STACK_LINE(402)
	if (((bool((x != x)) || bool((y != y))))){
		HX_STACK_LINE(402)
		hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
	}
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",406);
			{
				HX_STACK_LINE(406)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(406)
				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(406)
				{
					HX_STACK_LINE(406)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(406)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(406)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(406)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
						HX_STACK_LINE(406)
						ret->next = null();
					}
					HX_STACK_LINE(406)
					ret->weak = false;
				}
				HX_STACK_LINE(406)
				ret->_immutable = immutable;
				HX_STACK_LINE(406)
				{
					HX_STACK_LINE(406)
					ret->x = x;
					HX_STACK_LINE(406)
					ret->y = y;
					HX_STACK_LINE(406)
					{
					}
				}
				HX_STACK_LINE(406)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(406)
	this->zpp_inner = _Function_1_1::Block(x,y);
	HX_STACK_LINE(407)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

Vec2_obj::~Vec2_obj() { }

Dynamic Vec2_obj::__CreateEmpty() { return  new Vec2_obj; }
hx::ObjectPtr< Vec2_obj > Vec2_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< Vec2_obj > result = new Vec2_obj();
	result->__construct(__o_x,__o_y);
	return result;}

Dynamic Vec2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec2_obj > result = new Vec2_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Vec2_obj::toString( ){
	HX_STACK_PUSH("Vec2::toString","nape/geom/Vec2.hx",1481);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1482)
	if ((this->zpp_disp)){
		HX_STACK_LINE(1484)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1487)
	{
		HX_STACK_LINE(1487)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1487)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(1487)
			_this->_validate();
		}
	}
	HX_STACK_LINE(1488)
	return this->zpp_inner->toString();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,toString,return )

::nape::geom::Vec2 Vec2_obj::perp( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Vec2::perp","nape/geom/Vec2.hx",1470);
	HX_STACK_THIS(this);
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1471)
		if ((this->zpp_disp)){
			HX_STACK_LINE(1473)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2_obj *__this,bool &weak){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1476);
				{
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1476);
							{
								HX_STACK_LINE(1476)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1476)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1476)
								{
									HX_STACK_LINE(1476)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1476)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1476)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1476)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1476);
							{
								HX_STACK_LINE(1476)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1476)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1476)
								{
									HX_STACK_LINE(1476)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1476)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1476)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1476)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(1476)
					Float x = -(_Function_2_1::Block(__this));		HX_STACK_VAR(x,"x");
					Float y = _Function_2_2::Block(__this);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1476)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1476)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1476)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1476)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1476)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1476)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1476)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1476)
						ret->zpp_pool = null();
						HX_STACK_LINE(1476)
						ret->zpp_disp = false;
						HX_STACK_LINE(1476)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1476)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1476)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1476);
								{
									HX_STACK_LINE(1476)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1476)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1476)
									{
										HX_STACK_LINE(1476)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1476)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1476)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1476)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1476)
											ret1->next = null();
										}
										HX_STACK_LINE(1476)
										ret1->weak = false;
									}
									HX_STACK_LINE(1476)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1476)
									{
										HX_STACK_LINE(1476)
										ret1->x = x;
										HX_STACK_LINE(1476)
										ret1->y = y;
										HX_STACK_LINE(1476)
										{
										}
									}
									HX_STACK_LINE(1476)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1476)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(1476)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1476)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1476)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1476)
						{
							HX_STACK_LINE(1476)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1476)
							if ((_this->_immutable)){
								HX_STACK_LINE(1476)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1476)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1476)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1476)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1476)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1476);
								{
									HX_STACK_LINE(1476)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1476)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1476)
									{
										HX_STACK_LINE(1476)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1476)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1476)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1476)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1476);
								{
									HX_STACK_LINE(1476)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1476)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1476)
									{
										HX_STACK_LINE(1476)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1476)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1476)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1476)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1476)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(1476)
							{
								HX_STACK_LINE(1476)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1476)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1476)
								{
								}
							}
							HX_STACK_LINE(1476)
							{
								HX_STACK_LINE(1476)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1476)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1476)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1476)
						ret;
					}
					HX_STACK_LINE(1476)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1476)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1476)
		return _Function_1_1::Block(this,weak);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,perp,return )

Float Vec2_obj::cross( ::nape::geom::Vec2 vector){
	HX_STACK_PUSH("Vec2::cross","nape/geom/Vec2.hx",1419);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_LINE(1420)
	if ((this->zpp_disp)){
		HX_STACK_LINE(1422)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1425)
	if (((bool((vector != null())) && bool(vector->zpp_disp)))){
		HX_STACK_LINE(1427)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1431)
	if (((vector == null()))){
		HX_STACK_LINE(1431)
		hx::Throw (HX_CSTRING("Error: Cannot take cross product with null vector"));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2 &vector){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1435);
			{
				HX_STACK_LINE(1435)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(1435)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1435)
				{
					HX_STACK_LINE(1435)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1435)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1435)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1435)
				return vector->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1435);
			{
				HX_STACK_LINE(1435)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(1435)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1435)
				{
					HX_STACK_LINE(1435)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1435)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1435)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1435)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::nape::geom::Vec2 &vector){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1435);
			{
				HX_STACK_LINE(1435)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(1435)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1435)
				{
					HX_STACK_LINE(1435)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1435)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1435)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1435)
				return vector->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1435);
			{
				HX_STACK_LINE(1435)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(1435)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1435)
				{
					HX_STACK_LINE(1435)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1435)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1435)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1435)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	HX_STACK_LINE(1435)
	Float ret = ((_Function_1_1::Block(vector) * _Function_1_2::Block(this)) - (_Function_1_3::Block(vector) * _Function_1_4::Block(this)));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1436)
	if ((vector->zpp_inner->weak)){
		HX_STACK_LINE(1440)
		{
			HX_STACK_LINE(1440)
			if (((bool((vector != null())) && bool(vector->zpp_disp)))){
				HX_STACK_LINE(1440)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1440)
			{
				HX_STACK_LINE(1440)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1440)
				if ((_this->_immutable)){
					HX_STACK_LINE(1440)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1440)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(1440)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1440)
			if ((vector->zpp_inner->_inuse)){
				HX_STACK_LINE(1440)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1440)
			::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1440)
			vector->zpp_inner->outer = null();
			HX_STACK_LINE(1440)
			vector->zpp_inner = null();
			HX_STACK_LINE(1440)
			{
				HX_STACK_LINE(1440)
				::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1440)
				o->zpp_pool = null();
				HX_STACK_LINE(1440)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1440)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1440)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1440)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1440)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1440)
			{
				HX_STACK_LINE(1440)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1440)
				{
					HX_STACK_LINE(1440)
					if (((o->outer != null()))){
						HX_STACK_LINE(1440)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1440)
						o->outer = null();
					}
					HX_STACK_LINE(1440)
					o->_isimmutable = null();
					HX_STACK_LINE(1440)
					o->_validate = null();
					HX_STACK_LINE(1440)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1440)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1440)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1441)
		true;
	}
	else{
		HX_STACK_LINE(1443)
		false;
	}
	HX_STACK_LINE(1447)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,cross,return )

Float Vec2_obj::dot( ::nape::geom::Vec2 vector){
	HX_STACK_PUSH("Vec2::dot","nape/geom/Vec2.hx",1359);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_LINE(1360)
	if ((this->zpp_disp)){
		HX_STACK_LINE(1362)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1365)
	if (((bool((vector != null())) && bool(vector->zpp_disp)))){
		HX_STACK_LINE(1367)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1371)
	if (((vector == null()))){
		HX_STACK_LINE(1371)
		hx::Throw (HX_CSTRING("Error: Cannot take dot product with null vector"));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1375);
			{
				HX_STACK_LINE(1375)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(1375)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1375)
				{
					HX_STACK_LINE(1375)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1375)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1375)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1375)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec2 &vector){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1375);
			{
				HX_STACK_LINE(1375)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(1375)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1375)
				{
					HX_STACK_LINE(1375)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1375)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1375)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1375)
				return vector->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1375);
			{
				HX_STACK_LINE(1375)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(1375)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1375)
				{
					HX_STACK_LINE(1375)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1375)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1375)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1375)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::nape::geom::Vec2 &vector){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1375);
			{
				HX_STACK_LINE(1375)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(1375)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1375)
				{
					HX_STACK_LINE(1375)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1375)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(1375)
						_this->_validate();
					}
				}
				HX_STACK_LINE(1375)
				return vector->zpp_inner->y;
			}
			return null();
		}
	};
	HX_STACK_LINE(1375)
	Float ret = ((_Function_1_1::Block(this) * _Function_1_2::Block(vector)) + (_Function_1_3::Block(this) * _Function_1_4::Block(vector)));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1376)
	if ((vector->zpp_inner->weak)){
		HX_STACK_LINE(1380)
		{
			HX_STACK_LINE(1380)
			if (((bool((vector != null())) && bool(vector->zpp_disp)))){
				HX_STACK_LINE(1380)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1380)
			{
				HX_STACK_LINE(1380)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1380)
				if ((_this->_immutable)){
					HX_STACK_LINE(1380)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1380)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(1380)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1380)
			if ((vector->zpp_inner->_inuse)){
				HX_STACK_LINE(1380)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1380)
			::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1380)
			vector->zpp_inner->outer = null();
			HX_STACK_LINE(1380)
			vector->zpp_inner = null();
			HX_STACK_LINE(1380)
			{
				HX_STACK_LINE(1380)
				::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1380)
				o->zpp_pool = null();
				HX_STACK_LINE(1380)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1380)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1380)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1380)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1380)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1380)
			{
				HX_STACK_LINE(1380)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1380)
				{
					HX_STACK_LINE(1380)
					if (((o->outer != null()))){
						HX_STACK_LINE(1380)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1380)
						o->outer = null();
					}
					HX_STACK_LINE(1380)
					o->_isimmutable = null();
					HX_STACK_LINE(1380)
					o->_validate = null();
					HX_STACK_LINE(1380)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1380)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1380)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1381)
		true;
	}
	else{
		HX_STACK_LINE(1383)
		false;
	}
	HX_STACK_LINE(1387)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,dot,return )

::nape::geom::Vec2 Vec2_obj::muleq( Float scalar){
	HX_STACK_PUSH("Vec2::muleq","nape/geom/Vec2.hx",1328);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scalar,"scalar");
	HX_STACK_LINE(1329)
	if ((this->zpp_disp)){
		HX_STACK_LINE(1331)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1334)
	{
		HX_STACK_LINE(1334)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1334)
		if ((_this->_immutable)){
			HX_STACK_LINE(1334)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(1334)
		if (((_this->_isimmutable != null()))){
			HX_STACK_LINE(1334)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(1336)
	if (((scalar != scalar))){
		HX_STACK_LINE(1336)
		hx::Throw (HX_CSTRING("Error: Cannot multiply with NaN"));
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2_obj *__this,Float &scalar){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1340);
			{
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1340);
						{
							HX_STACK_LINE(1340)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(1340)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1340)
							{
								HX_STACK_LINE(1340)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1340)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1340)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1340)
							return __this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1340);
						{
							HX_STACK_LINE(1340)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(1340)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1340)
							{
								HX_STACK_LINE(1340)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1340)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1340)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1340)
							return __this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(1340)
				Float x = (_Function_2_1::Block(__this) * scalar);		HX_STACK_VAR(x,"x");
				Float y = (_Function_2_2::Block(__this) * scalar);		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1340)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(1340)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1340)
				{
					HX_STACK_LINE(1340)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1340)
					if ((_this->_immutable)){
						HX_STACK_LINE(1340)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1340)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1340)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1340)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(1340)
					hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				struct _Function_2_3{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1340);
						{
							HX_STACK_LINE(1340)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(1340)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1340)
							{
								HX_STACK_LINE(1340)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1340)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1340)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1340)
							return __this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1340);
						{
							HX_STACK_LINE(1340)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(1340)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1340)
							{
								HX_STACK_LINE(1340)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1340)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1340)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1340)
							return __this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(1340)
				if ((!(((bool((_Function_2_3::Block(__this) == x)) && bool((_Function_2_4::Block(__this) == y))))))){
					HX_STACK_LINE(1340)
					{
						HX_STACK_LINE(1340)
						__this->zpp_inner->x = x;
						HX_STACK_LINE(1340)
						__this->zpp_inner->y = y;
						HX_STACK_LINE(1340)
						{
						}
					}
					HX_STACK_LINE(1340)
					{
						HX_STACK_LINE(1340)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1340)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(1340)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(1340)
				return __this;
			}
			return null();
		}
	};
	HX_STACK_LINE(1340)
	return _Function_1_1::Block(this,scalar);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,muleq,return )

::nape::geom::Vec2 Vec2_obj::subeq( ::nape::geom::Vec2 vector){
	HX_STACK_PUSH("Vec2::subeq","nape/geom/Vec2.hx",1283);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_LINE(1284)
	if ((this->zpp_disp)){
		HX_STACK_LINE(1286)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1289)
	if (((bool((vector != null())) && bool(vector->zpp_disp)))){
		HX_STACK_LINE(1291)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1294)
	{
		HX_STACK_LINE(1294)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1294)
		if ((_this->_immutable)){
			HX_STACK_LINE(1294)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(1294)
		if (((_this->_isimmutable != null()))){
			HX_STACK_LINE(1294)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(1296)
	if (((vector == null()))){
		HX_STACK_LINE(1296)
		hx::Throw (HX_CSTRING("Error: Cannot subtract null vectors"));
	}
	HX_STACK_LINE(1300)
	{
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1300);
				{
					HX_STACK_LINE(1300)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1300)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1300)
					{
						HX_STACK_LINE(1300)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1300)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1300)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1300)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2 &vector){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1300);
				{
					HX_STACK_LINE(1300)
					if (((bool((vector != null())) && bool(vector->zpp_disp)))){
						HX_STACK_LINE(1300)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1300)
					{
						HX_STACK_LINE(1300)
						::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1300)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1300)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1300)
					return vector->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1300);
				{
					HX_STACK_LINE(1300)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1300)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1300)
					{
						HX_STACK_LINE(1300)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1300)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1300)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1300)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static Float Block( ::nape::geom::Vec2 &vector){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1300);
				{
					HX_STACK_LINE(1300)
					if (((bool((vector != null())) && bool(vector->zpp_disp)))){
						HX_STACK_LINE(1300)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1300)
					{
						HX_STACK_LINE(1300)
						::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1300)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1300)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1300)
					return vector->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(1300)
		Float x = (_Function_2_1::Block(this) - _Function_2_2::Block(vector));		HX_STACK_VAR(x,"x");
		Float y = (_Function_2_3::Block(this) - _Function_2_4::Block(vector));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1300)
		if ((this->zpp_disp)){
			HX_STACK_LINE(1300)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1300)
		{
			HX_STACK_LINE(1300)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1300)
			if ((_this->_immutable)){
				HX_STACK_LINE(1300)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(1300)
			if (((_this->_isimmutable != null()))){
				HX_STACK_LINE(1300)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1300)
		if (((bool((x != x)) || bool((y != y))))){
			HX_STACK_LINE(1300)
			hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
		}
		struct _Function_2_5{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1300);
				{
					HX_STACK_LINE(1300)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1300)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1300)
					{
						HX_STACK_LINE(1300)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1300)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1300)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1300)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_6{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1300);
				{
					HX_STACK_LINE(1300)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1300)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1300)
					{
						HX_STACK_LINE(1300)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1300)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1300)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1300)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(1300)
		if ((!(((bool((_Function_2_5::Block(this) == x)) && bool((_Function_2_6::Block(this) == y))))))){
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				this->zpp_inner->x = x;
				HX_STACK_LINE(1300)
				this->zpp_inner->y = y;
				HX_STACK_LINE(1300)
				{
				}
			}
			HX_STACK_LINE(1300)
			{
				HX_STACK_LINE(1300)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1300)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(1300)
					_this->_invalidate(_this);
				}
			}
		}
		HX_STACK_LINE(1300)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1301)
	if ((vector->zpp_inner->weak)){
		HX_STACK_LINE(1305)
		{
			HX_STACK_LINE(1305)
			if (((bool((vector != null())) && bool(vector->zpp_disp)))){
				HX_STACK_LINE(1305)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1305)
			{
				HX_STACK_LINE(1305)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1305)
				if ((_this->_immutable)){
					HX_STACK_LINE(1305)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1305)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(1305)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1305)
			if ((vector->zpp_inner->_inuse)){
				HX_STACK_LINE(1305)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1305)
			::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1305)
			vector->zpp_inner->outer = null();
			HX_STACK_LINE(1305)
			vector->zpp_inner = null();
			HX_STACK_LINE(1305)
			{
				HX_STACK_LINE(1305)
				::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1305)
				o->zpp_pool = null();
				HX_STACK_LINE(1305)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1305)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1305)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1305)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1305)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1305)
			{
				HX_STACK_LINE(1305)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1305)
				{
					HX_STACK_LINE(1305)
					if (((o->outer != null()))){
						HX_STACK_LINE(1305)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1305)
						o->outer = null();
					}
					HX_STACK_LINE(1305)
					o->_isimmutable = null();
					HX_STACK_LINE(1305)
					o->_validate = null();
					HX_STACK_LINE(1305)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1305)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1305)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1306)
		true;
	}
	else{
		HX_STACK_LINE(1308)
		false;
	}
	HX_STACK_LINE(1312)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,subeq,return )

::nape::geom::Vec2 Vec2_obj::addeq( ::nape::geom::Vec2 vector){
	HX_STACK_PUSH("Vec2::addeq","nape/geom/Vec2.hx",1237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_LINE(1238)
	if ((this->zpp_disp)){
		HX_STACK_LINE(1240)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1243)
	if (((bool((vector != null())) && bool(vector->zpp_disp)))){
		HX_STACK_LINE(1245)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1248)
	{
		HX_STACK_LINE(1248)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1248)
		if ((_this->_immutable)){
			HX_STACK_LINE(1248)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(1248)
		if (((_this->_isimmutable != null()))){
			HX_STACK_LINE(1248)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(1250)
	if (((vector == null()))){
		HX_STACK_LINE(1250)
		hx::Throw (HX_CSTRING("Error: Cannot add null vectors"));
	}
	HX_STACK_LINE(1254)
	{
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1254);
				{
					HX_STACK_LINE(1254)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1254)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1254)
					{
						HX_STACK_LINE(1254)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1254)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1254)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1254)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2 &vector){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1254);
				{
					HX_STACK_LINE(1254)
					if (((bool((vector != null())) && bool(vector->zpp_disp)))){
						HX_STACK_LINE(1254)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1254)
					{
						HX_STACK_LINE(1254)
						::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1254)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1254)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1254)
					return vector->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1254);
				{
					HX_STACK_LINE(1254)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1254)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1254)
					{
						HX_STACK_LINE(1254)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1254)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1254)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1254)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static Float Block( ::nape::geom::Vec2 &vector){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1254);
				{
					HX_STACK_LINE(1254)
					if (((bool((vector != null())) && bool(vector->zpp_disp)))){
						HX_STACK_LINE(1254)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1254)
					{
						HX_STACK_LINE(1254)
						::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1254)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1254)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1254)
					return vector->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(1254)
		Float x = (_Function_2_1::Block(this) + _Function_2_2::Block(vector));		HX_STACK_VAR(x,"x");
		Float y = (_Function_2_3::Block(this) + _Function_2_4::Block(vector));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1254)
		if ((this->zpp_disp)){
			HX_STACK_LINE(1254)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1254)
			if ((_this->_immutable)){
				HX_STACK_LINE(1254)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(1254)
			if (((_this->_isimmutable != null()))){
				HX_STACK_LINE(1254)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1254)
		if (((bool((x != x)) || bool((y != y))))){
			HX_STACK_LINE(1254)
			hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
		}
		struct _Function_2_5{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1254);
				{
					HX_STACK_LINE(1254)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1254)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1254)
					{
						HX_STACK_LINE(1254)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1254)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1254)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1254)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_6{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1254);
				{
					HX_STACK_LINE(1254)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1254)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1254)
					{
						HX_STACK_LINE(1254)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1254)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1254)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1254)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(1254)
		if ((!(((bool((_Function_2_5::Block(this) == x)) && bool((_Function_2_6::Block(this) == y))))))){
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				this->zpp_inner->x = x;
				HX_STACK_LINE(1254)
				this->zpp_inner->y = y;
				HX_STACK_LINE(1254)
				{
				}
			}
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1254)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(1254)
					_this->_invalidate(_this);
				}
			}
		}
		HX_STACK_LINE(1254)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1255)
	if ((vector->zpp_inner->weak)){
		HX_STACK_LINE(1259)
		{
			HX_STACK_LINE(1259)
			if (((bool((vector != null())) && bool(vector->zpp_disp)))){
				HX_STACK_LINE(1259)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1259)
			{
				HX_STACK_LINE(1259)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1259)
				if ((_this->_immutable)){
					HX_STACK_LINE(1259)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1259)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(1259)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1259)
			if ((vector->zpp_inner->_inuse)){
				HX_STACK_LINE(1259)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1259)
			::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1259)
			vector->zpp_inner->outer = null();
			HX_STACK_LINE(1259)
			vector->zpp_inner = null();
			HX_STACK_LINE(1259)
			{
				HX_STACK_LINE(1259)
				::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1259)
				o->zpp_pool = null();
				HX_STACK_LINE(1259)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1259)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1259)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1259)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1259)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1259)
			{
				HX_STACK_LINE(1259)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1259)
				{
					HX_STACK_LINE(1259)
					if (((o->outer != null()))){
						HX_STACK_LINE(1259)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1259)
						o->outer = null();
					}
					HX_STACK_LINE(1259)
					o->_isimmutable = null();
					HX_STACK_LINE(1259)
					o->_validate = null();
					HX_STACK_LINE(1259)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1259)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1259)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1260)
		true;
	}
	else{
		HX_STACK_LINE(1262)
		false;
	}
	HX_STACK_LINE(1266)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,addeq,return )

::nape::geom::Vec2 Vec2_obj::mul( Float scalar,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Vec2::mul","nape/geom/Vec2.hx",1209);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scalar,"scalar");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1210)
		if ((this->zpp_disp)){
			HX_STACK_LINE(1212)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1216)
		if (((scalar != scalar))){
			HX_STACK_LINE(1216)
			hx::Throw (HX_CSTRING("Error: Cannot multiply with NaN"));
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2_obj *__this,Float &scalar,bool &weak){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1220);
				{
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1220);
							{
								HX_STACK_LINE(1220)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1220)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1220)
								{
									HX_STACK_LINE(1220)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1220)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1220)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1220)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1220);
							{
								HX_STACK_LINE(1220)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1220)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1220)
								{
									HX_STACK_LINE(1220)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1220)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1220)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1220)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1220)
					Float x = (_Function_2_1::Block(__this) * scalar);		HX_STACK_VAR(x,"x");
					Float y = (_Function_2_2::Block(__this) * scalar);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1220)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1220)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1220)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1220)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1220)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1220)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1220)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1220)
						ret->zpp_pool = null();
						HX_STACK_LINE(1220)
						ret->zpp_disp = false;
						HX_STACK_LINE(1220)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1220)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1220)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1220);
								{
									HX_STACK_LINE(1220)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1220)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1220)
									{
										HX_STACK_LINE(1220)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1220)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1220)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1220)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1220)
											ret1->next = null();
										}
										HX_STACK_LINE(1220)
										ret1->weak = false;
									}
									HX_STACK_LINE(1220)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1220)
									{
										HX_STACK_LINE(1220)
										ret1->x = x;
										HX_STACK_LINE(1220)
										ret1->y = y;
										HX_STACK_LINE(1220)
										{
										}
									}
									HX_STACK_LINE(1220)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1220)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(1220)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1220)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1220)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1220)
						{
							HX_STACK_LINE(1220)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1220)
							if ((_this->_immutable)){
								HX_STACK_LINE(1220)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1220)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1220)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1220)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1220)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1220);
								{
									HX_STACK_LINE(1220)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1220)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1220)
									{
										HX_STACK_LINE(1220)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1220)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1220)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1220)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1220);
								{
									HX_STACK_LINE(1220)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1220)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1220)
									{
										HX_STACK_LINE(1220)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1220)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1220)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1220)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1220)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(1220)
							{
								HX_STACK_LINE(1220)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1220)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1220)
								{
								}
							}
							HX_STACK_LINE(1220)
							{
								HX_STACK_LINE(1220)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1220)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1220)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1220)
						ret;
					}
					HX_STACK_LINE(1220)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1220)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1220)
		return _Function_1_1::Block(this,scalar,weak);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,mul,return )

::nape::geom::Vec2 Vec2_obj::sub( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Vec2::sub","nape/geom/Vec2.hx",1165);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1166)
		if ((this->zpp_disp)){
			HX_STACK_LINE(1168)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1171)
		if (((bool((vector != null())) && bool(vector->zpp_disp)))){
			HX_STACK_LINE(1173)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1177)
		if (((vector == null()))){
			HX_STACK_LINE(1177)
			hx::Throw (HX_CSTRING("Error: Cannot subtract null vectors"));
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2_obj *__this,::nape::geom::Vec2 &vector,bool &weak){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1181);
				{
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1181);
							{
								HX_STACK_LINE(1181)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1181)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1181)
								{
									HX_STACK_LINE(1181)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1181)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1181)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1181)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static Float Block( ::nape::geom::Vec2 &vector){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1181);
							{
								HX_STACK_LINE(1181)
								if (((bool((vector != null())) && bool(vector->zpp_disp)))){
									HX_STACK_LINE(1181)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1181)
								{
									HX_STACK_LINE(1181)
									::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1181)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1181)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1181)
								return vector->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_3{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1181);
							{
								HX_STACK_LINE(1181)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1181)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1181)
								{
									HX_STACK_LINE(1181)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1181)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1181)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1181)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					struct _Function_2_4{
						inline static Float Block( ::nape::geom::Vec2 &vector){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1181);
							{
								HX_STACK_LINE(1181)
								if (((bool((vector != null())) && bool(vector->zpp_disp)))){
									HX_STACK_LINE(1181)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1181)
								{
									HX_STACK_LINE(1181)
									::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1181)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1181)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1181)
								return vector->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1181)
					Float x = (_Function_2_1::Block(__this) - _Function_2_2::Block(vector));		HX_STACK_VAR(x,"x");
					Float y = (_Function_2_3::Block(__this) - _Function_2_4::Block(vector));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1181)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1181)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1181)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1181)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1181)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1181)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1181)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1181)
						ret->zpp_pool = null();
						HX_STACK_LINE(1181)
						ret->zpp_disp = false;
						HX_STACK_LINE(1181)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1181)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1181)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1181);
								{
									HX_STACK_LINE(1181)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1181)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1181)
									{
										HX_STACK_LINE(1181)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1181)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1181)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1181)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1181)
											ret1->next = null();
										}
										HX_STACK_LINE(1181)
										ret1->weak = false;
									}
									HX_STACK_LINE(1181)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1181)
									{
										HX_STACK_LINE(1181)
										ret1->x = x;
										HX_STACK_LINE(1181)
										ret1->y = y;
										HX_STACK_LINE(1181)
										{
										}
									}
									HX_STACK_LINE(1181)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1181)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(1181)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1181)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1181)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1181)
						{
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1181)
							if ((_this->_immutable)){
								HX_STACK_LINE(1181)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1181)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1181)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1181)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1181)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1181);
								{
									HX_STACK_LINE(1181)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1181)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1181)
									{
										HX_STACK_LINE(1181)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1181)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1181)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1181)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1181);
								{
									HX_STACK_LINE(1181)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1181)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1181)
									{
										HX_STACK_LINE(1181)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1181)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1181)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1181)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1181)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(1181)
							{
								HX_STACK_LINE(1181)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1181)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1181)
								{
								}
							}
							HX_STACK_LINE(1181)
							{
								HX_STACK_LINE(1181)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1181)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1181)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1181)
						ret;
					}
					HX_STACK_LINE(1181)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1181)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1181)
		::nape::geom::Vec2 ret = _Function_1_1::Block(this,vector,weak);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1182)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(1186)
			{
				HX_STACK_LINE(1186)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(1186)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1186)
				{
					HX_STACK_LINE(1186)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1186)
					if ((_this->_immutable)){
						HX_STACK_LINE(1186)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1186)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1186)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1186)
				if ((vector->zpp_inner->_inuse)){
					HX_STACK_LINE(1186)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1186)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1186)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1186)
				vector->zpp_inner = null();
				HX_STACK_LINE(1186)
				{
					HX_STACK_LINE(1186)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1186)
					o->zpp_pool = null();
					HX_STACK_LINE(1186)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1186)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1186)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1186)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1186)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1186)
				{
					HX_STACK_LINE(1186)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1186)
					{
						HX_STACK_LINE(1186)
						if (((o->outer != null()))){
							HX_STACK_LINE(1186)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1186)
							o->outer = null();
						}
						HX_STACK_LINE(1186)
						o->_isimmutable = null();
						HX_STACK_LINE(1186)
						o->_validate = null();
						HX_STACK_LINE(1186)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1186)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1186)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1187)
			true;
		}
		else{
			HX_STACK_LINE(1189)
			false;
		}
		HX_STACK_LINE(1193)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,sub,return )

::nape::geom::Vec2 Vec2_obj::addMul( ::nape::geom::Vec2 vector,Float scalar,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Vec2::addMul","nape/geom/Vec2.hx",1119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_ARG(scalar,"scalar");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1120)
		if ((this->zpp_disp)){
			HX_STACK_LINE(1122)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1125)
		if (((bool((vector != null())) && bool(vector->zpp_disp)))){
			HX_STACK_LINE(1127)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1131)
		if (((vector == null()))){
			HX_STACK_LINE(1131)
			hx::Throw (HX_CSTRING("Error: Cannot add null vectors"));
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2_obj *__this,::nape::geom::Vec2 &vector,Float &scalar,bool &weak){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1135);
				{
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1135);
							{
								HX_STACK_LINE(1135)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1135)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1135)
								{
									HX_STACK_LINE(1135)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1135)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1135)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1135)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static Float Block( ::nape::geom::Vec2 &vector){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1135);
							{
								HX_STACK_LINE(1135)
								if (((bool((vector != null())) && bool(vector->zpp_disp)))){
									HX_STACK_LINE(1135)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1135)
								{
									HX_STACK_LINE(1135)
									::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1135)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1135)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1135)
								return vector->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_3{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1135);
							{
								HX_STACK_LINE(1135)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1135)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1135)
								{
									HX_STACK_LINE(1135)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1135)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1135)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1135)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					struct _Function_2_4{
						inline static Float Block( ::nape::geom::Vec2 &vector){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1135);
							{
								HX_STACK_LINE(1135)
								if (((bool((vector != null())) && bool(vector->zpp_disp)))){
									HX_STACK_LINE(1135)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1135)
								{
									HX_STACK_LINE(1135)
									::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1135)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1135)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1135)
								return vector->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1135)
					Float x = (_Function_2_1::Block(__this) + (_Function_2_2::Block(vector) * scalar));		HX_STACK_VAR(x,"x");
					Float y = (_Function_2_3::Block(__this) + (_Function_2_4::Block(vector) * scalar));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1135)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1135)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1135)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1135)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1135)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1135)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1135)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1135)
						ret->zpp_pool = null();
						HX_STACK_LINE(1135)
						ret->zpp_disp = false;
						HX_STACK_LINE(1135)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1135)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1135)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1135);
								{
									HX_STACK_LINE(1135)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1135)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1135)
									{
										HX_STACK_LINE(1135)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1135)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1135)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1135)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1135)
											ret1->next = null();
										}
										HX_STACK_LINE(1135)
										ret1->weak = false;
									}
									HX_STACK_LINE(1135)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1135)
									{
										HX_STACK_LINE(1135)
										ret1->x = x;
										HX_STACK_LINE(1135)
										ret1->y = y;
										HX_STACK_LINE(1135)
										{
										}
									}
									HX_STACK_LINE(1135)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1135)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(1135)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1135)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1135)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1135)
						{
							HX_STACK_LINE(1135)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1135)
							if ((_this->_immutable)){
								HX_STACK_LINE(1135)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1135)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1135)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1135)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1135)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1135);
								{
									HX_STACK_LINE(1135)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1135)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1135)
									{
										HX_STACK_LINE(1135)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1135)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1135)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1135)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1135);
								{
									HX_STACK_LINE(1135)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1135)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1135)
									{
										HX_STACK_LINE(1135)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1135)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1135)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1135)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1135)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(1135)
							{
								HX_STACK_LINE(1135)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1135)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1135)
								{
								}
							}
							HX_STACK_LINE(1135)
							{
								HX_STACK_LINE(1135)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1135)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1135)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1135)
						ret;
					}
					HX_STACK_LINE(1135)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1135)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1135)
		::nape::geom::Vec2 ret = _Function_1_1::Block(this,vector,scalar,weak);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1136)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(1140)
			{
				HX_STACK_LINE(1140)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(1140)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1140)
				{
					HX_STACK_LINE(1140)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1140)
					if ((_this->_immutable)){
						HX_STACK_LINE(1140)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1140)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1140)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1140)
				if ((vector->zpp_inner->_inuse)){
					HX_STACK_LINE(1140)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1140)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1140)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1140)
				vector->zpp_inner = null();
				HX_STACK_LINE(1140)
				{
					HX_STACK_LINE(1140)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1140)
					o->zpp_pool = null();
					HX_STACK_LINE(1140)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1140)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1140)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1140)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1140)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1140)
				{
					HX_STACK_LINE(1140)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1140)
					{
						HX_STACK_LINE(1140)
						if (((o->outer != null()))){
							HX_STACK_LINE(1140)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1140)
							o->outer = null();
						}
						HX_STACK_LINE(1140)
						o->_isimmutable = null();
						HX_STACK_LINE(1140)
						o->_validate = null();
						HX_STACK_LINE(1140)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1140)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1140)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1141)
			true;
		}
		else{
			HX_STACK_LINE(1143)
			false;
		}
		HX_STACK_LINE(1147)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vec2_obj,addMul,return )

::nape::geom::Vec2 Vec2_obj::add( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Vec2::add","nape/geom/Vec2.hx",1066);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1067)
		if ((this->zpp_disp)){
			HX_STACK_LINE(1069)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1072)
		if (((bool((vector != null())) && bool(vector->zpp_disp)))){
			HX_STACK_LINE(1074)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1078)
		if (((vector == null()))){
			HX_STACK_LINE(1078)
			hx::Throw (HX_CSTRING("Error: Cannot add null vectors"));
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2_obj *__this,::nape::geom::Vec2 &vector,bool &weak){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1082);
				{
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1082);
							{
								HX_STACK_LINE(1082)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1082)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1082)
								{
									HX_STACK_LINE(1082)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1082)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1082)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1082)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static Float Block( ::nape::geom::Vec2 &vector){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1082);
							{
								HX_STACK_LINE(1082)
								if (((bool((vector != null())) && bool(vector->zpp_disp)))){
									HX_STACK_LINE(1082)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1082)
								{
									HX_STACK_LINE(1082)
									::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1082)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1082)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1082)
								return vector->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_3{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1082);
							{
								HX_STACK_LINE(1082)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1082)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1082)
								{
									HX_STACK_LINE(1082)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1082)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1082)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1082)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					struct _Function_2_4{
						inline static Float Block( ::nape::geom::Vec2 &vector){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1082);
							{
								HX_STACK_LINE(1082)
								if (((bool((vector != null())) && bool(vector->zpp_disp)))){
									HX_STACK_LINE(1082)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1082)
								{
									HX_STACK_LINE(1082)
									::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1082)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1082)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1082)
								return vector->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1082)
					Float x = (_Function_2_1::Block(__this) + _Function_2_2::Block(vector));		HX_STACK_VAR(x,"x");
					Float y = (_Function_2_3::Block(__this) + _Function_2_4::Block(vector));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1082)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1082)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1082)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1082)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1082)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1082)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1082)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1082)
						ret->zpp_pool = null();
						HX_STACK_LINE(1082)
						ret->zpp_disp = false;
						HX_STACK_LINE(1082)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1082)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1082)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1082);
								{
									HX_STACK_LINE(1082)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1082)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1082)
									{
										HX_STACK_LINE(1082)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1082)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1082)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1082)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1082)
											ret1->next = null();
										}
										HX_STACK_LINE(1082)
										ret1->weak = false;
									}
									HX_STACK_LINE(1082)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1082)
									{
										HX_STACK_LINE(1082)
										ret1->x = x;
										HX_STACK_LINE(1082)
										ret1->y = y;
										HX_STACK_LINE(1082)
										{
										}
									}
									HX_STACK_LINE(1082)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1082)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(1082)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1082)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1082)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1082)
						{
							HX_STACK_LINE(1082)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1082)
							if ((_this->_immutable)){
								HX_STACK_LINE(1082)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1082)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1082)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1082)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1082)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1082);
								{
									HX_STACK_LINE(1082)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1082)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1082)
									{
										HX_STACK_LINE(1082)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1082)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1082)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1082)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1082);
								{
									HX_STACK_LINE(1082)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1082)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1082)
									{
										HX_STACK_LINE(1082)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1082)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1082)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1082)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1082)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(1082)
							{
								HX_STACK_LINE(1082)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1082)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1082)
								{
								}
							}
							HX_STACK_LINE(1082)
							{
								HX_STACK_LINE(1082)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1082)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1082)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1082)
						ret;
					}
					HX_STACK_LINE(1082)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1082)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1082)
		::nape::geom::Vec2 ret = _Function_1_1::Block(this,vector,weak);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1083)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(1087)
			{
				HX_STACK_LINE(1087)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(1087)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1087)
				{
					HX_STACK_LINE(1087)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1087)
					if ((_this->_immutable)){
						HX_STACK_LINE(1087)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1087)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1087)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1087)
				if ((vector->zpp_inner->_inuse)){
					HX_STACK_LINE(1087)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1087)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1087)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1087)
				vector->zpp_inner = null();
				HX_STACK_LINE(1087)
				{
					HX_STACK_LINE(1087)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1087)
					o->zpp_pool = null();
					HX_STACK_LINE(1087)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1087)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1087)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1087)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1087)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1087)
				{
					HX_STACK_LINE(1087)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1087)
					{
						HX_STACK_LINE(1087)
						if (((o->outer != null()))){
							HX_STACK_LINE(1087)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1087)
							o->outer = null();
						}
						HX_STACK_LINE(1087)
						o->_isimmutable = null();
						HX_STACK_LINE(1087)
						o->_validate = null();
						HX_STACK_LINE(1087)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1087)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1087)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1088)
			true;
		}
		else{
			HX_STACK_LINE(1090)
			false;
		}
		HX_STACK_LINE(1094)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,add,return )

::nape::geom::Vec2 Vec2_obj::unit( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Vec2::unit","nape/geom/Vec2.hx",1035);
	HX_STACK_THIS(this);
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1036)
		if ((this->zpp_disp)){
			HX_STACK_LINE(1038)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		struct _Function_1_1{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1042);
				{
					HX_STACK_LINE(1042)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1042)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1042);
							{
								HX_STACK_LINE(1042)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1042)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1042)
								{
									HX_STACK_LINE(1042)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1042)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1042)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1042)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1042);
							{
								HX_STACK_LINE(1042)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1042)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1042)
								{
									HX_STACK_LINE(1042)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1042)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1042)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1042)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_3{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1042);
							{
								HX_STACK_LINE(1042)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1042)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1042)
								{
									HX_STACK_LINE(1042)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1042)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1042)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1042)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					struct _Function_2_4{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1042);
							{
								HX_STACK_LINE(1042)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1042)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1042)
								{
									HX_STACK_LINE(1042)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1042)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1042)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1042)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1042)
					return ::Math_obj::sqrt(((_Function_2_1::Block(__this) * _Function_2_2::Block(__this)) + (_Function_2_3::Block(__this) * _Function_2_4::Block(__this))));
				}
				return null();
			}
		};
		HX_STACK_LINE(1042)
		if (((_Function_1_1::Block(this) == (int)0))){
			HX_STACK_LINE(1042)
			hx::Throw (HX_CSTRING("Error: Cannot normalise vector of length 0"));
		}
		struct _Function_1_2{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1046);
				{
					HX_STACK_LINE(1046)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1046)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1046)
					{
						HX_STACK_LINE(1046)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1046)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1046)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1046)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1046);
				{
					HX_STACK_LINE(1046)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1046)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1046)
					{
						HX_STACK_LINE(1046)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1046)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1046)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1046)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1046);
				{
					HX_STACK_LINE(1046)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1046)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1046)
					{
						HX_STACK_LINE(1046)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1046)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1046)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1046)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		struct _Function_1_5{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1046);
				{
					HX_STACK_LINE(1046)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(1046)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1046)
					{
						HX_STACK_LINE(1046)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1046)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(1046)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1046)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(1046)
		Float scale = (Float((int)1) / Float(::Math_obj::sqrt(((_Function_1_2::Block(this) * _Function_1_3::Block(this)) + (_Function_1_4::Block(this) * _Function_1_5::Block(this))))));		HX_STACK_VAR(scale,"scale");
		struct _Function_1_6{
			inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2_obj *__this,Float &scale,bool &weak){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1047);
				{
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1047);
							{
								HX_STACK_LINE(1047)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1047)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1047)
								{
									HX_STACK_LINE(1047)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1047)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1047)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1047)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1047);
							{
								HX_STACK_LINE(1047)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(1047)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1047)
								{
									HX_STACK_LINE(1047)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1047)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1047)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1047)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1047)
					Float x = (_Function_2_1::Block(__this) * scale);		HX_STACK_VAR(x,"x");
					Float y = (_Function_2_2::Block(__this) * scale);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1047)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1047)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1047)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1047)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1047)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1047)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1047)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1047)
						ret->zpp_pool = null();
						HX_STACK_LINE(1047)
						ret->zpp_disp = false;
						HX_STACK_LINE(1047)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1047)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1047)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1047);
								{
									HX_STACK_LINE(1047)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1047)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1047)
									{
										HX_STACK_LINE(1047)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1047)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1047)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1047)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1047)
											ret1->next = null();
										}
										HX_STACK_LINE(1047)
										ret1->weak = false;
									}
									HX_STACK_LINE(1047)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1047)
									{
										HX_STACK_LINE(1047)
										ret1->x = x;
										HX_STACK_LINE(1047)
										ret1->y = y;
										HX_STACK_LINE(1047)
										{
										}
									}
									HX_STACK_LINE(1047)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1047)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(1047)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1047)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1047)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1047)
						{
							HX_STACK_LINE(1047)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1047)
							if ((_this->_immutable)){
								HX_STACK_LINE(1047)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1047)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1047)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1047)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1047)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1047);
								{
									HX_STACK_LINE(1047)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1047)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1047)
									{
										HX_STACK_LINE(1047)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1047)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1047)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1047)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1047);
								{
									HX_STACK_LINE(1047)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1047)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1047)
									{
										HX_STACK_LINE(1047)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1047)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1047)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1047)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1047)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(1047)
							{
								HX_STACK_LINE(1047)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1047)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1047)
								{
								}
							}
							HX_STACK_LINE(1047)
							{
								HX_STACK_LINE(1047)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1047)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1047)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1047)
						ret;
					}
					HX_STACK_LINE(1047)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1047)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1047)
		return _Function_1_6::Block(this,scale,weak);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,unit,return )

::nape::geom::Vec2 Vec2_obj::normalise( ){
	HX_STACK_PUSH("Vec2::normalise","nape/geom/Vec2.hx",984);
	HX_STACK_THIS(this);
	HX_STACK_LINE(985)
	if ((this->zpp_disp)){
		HX_STACK_LINE(987)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(990)
	{
		HX_STACK_LINE(990)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(990)
		if ((_this->_immutable)){
			HX_STACK_LINE(990)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(990)
		if (((_this->_isimmutable != null()))){
			HX_STACK_LINE(990)
			_this->_isimmutable();
		}
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",992);
			{
				HX_STACK_LINE(992)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(992)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",992);
						{
							HX_STACK_LINE(992)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(992)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(992)
							{
								HX_STACK_LINE(992)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(992)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(992)
									_this->_validate();
								}
							}
							HX_STACK_LINE(992)
							return __this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",992);
						{
							HX_STACK_LINE(992)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(992)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(992)
							{
								HX_STACK_LINE(992)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(992)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(992)
									_this->_validate();
								}
							}
							HX_STACK_LINE(992)
							return __this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",992);
						{
							HX_STACK_LINE(992)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(992)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(992)
							{
								HX_STACK_LINE(992)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(992)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(992)
									_this->_validate();
								}
							}
							HX_STACK_LINE(992)
							return __this->zpp_inner->y;
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",992);
						{
							HX_STACK_LINE(992)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(992)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(992)
							{
								HX_STACK_LINE(992)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(992)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(992)
									_this->_validate();
								}
							}
							HX_STACK_LINE(992)
							return __this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(992)
				return ::Math_obj::sqrt(((_Function_2_1::Block(__this) * _Function_2_2::Block(__this)) + (_Function_2_3::Block(__this) * _Function_2_4::Block(__this))));
			}
			return null();
		}
	};
	HX_STACK_LINE(992)
	if (((_Function_1_1::Block(this) == (int)0))){
		HX_STACK_LINE(992)
		hx::Throw (HX_CSTRING("Error: Cannot normalise vector of length 0"));
	}
	HX_STACK_LINE(996)
	{
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",997);
				{
					HX_STACK_LINE(997)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(997)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(997)
					{
						HX_STACK_LINE(997)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(997)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(997)
							_this->_validate();
						}
					}
					HX_STACK_LINE(997)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",997);
				{
					HX_STACK_LINE(997)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(997)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(997)
					{
						HX_STACK_LINE(997)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(997)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(997)
							_this->_validate();
						}
					}
					HX_STACK_LINE(997)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",997);
				{
					HX_STACK_LINE(997)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(997)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(997)
					{
						HX_STACK_LINE(997)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(997)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(997)
							_this->_validate();
						}
					}
					HX_STACK_LINE(997)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",997);
				{
					HX_STACK_LINE(997)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(997)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(997)
					{
						HX_STACK_LINE(997)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(997)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(997)
							_this->_validate();
						}
					}
					HX_STACK_LINE(997)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(997)
		Float d = ((_Function_2_1::Block(this) * _Function_2_2::Block(this)) + (_Function_2_3::Block(this) * _Function_2_4::Block(this)));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(1006)
		Float imag = (Float(1.0) / Float(::Math_obj::sqrt(d)));		HX_STACK_VAR(imag,"imag");
		HX_STACK_LINE(1007)
		{
			HX_STACK_LINE(1008)
			Float t = imag;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1017)
			{
				HX_STACK_LINE(1017)
				::nape::geom::Vec2 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1017)
				{
					struct _Function_5_1{
						inline static Float Block( ::nape::geom::Vec2 &_g){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1017);
							{
								HX_STACK_LINE(1017)
								if (((bool((_g != null())) && bool(_g->zpp_disp)))){
									HX_STACK_LINE(1017)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1017)
								{
									HX_STACK_LINE(1017)
									::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1017)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1017)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1017)
								return _g->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(1017)
					Float x = (_Function_5_1::Block(_g) * t);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1017)
					{
						HX_STACK_LINE(1017)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(1017)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1017)
							if ((_this->_immutable)){
								HX_STACK_LINE(1017)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1017)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1017)
								_this->_isimmutable();
							}
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec2 &_g){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1017);
								{
									HX_STACK_LINE(1017)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(1017)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1017)
									{
										HX_STACK_LINE(1017)
										::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1017)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1017)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1017)
									return _g->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1017)
						if (((_Function_6_1::Block(_g) != x))){
							HX_STACK_LINE(1017)
							if (((x != x))){
								HX_STACK_LINE(1017)
								hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
							}
							HX_STACK_LINE(1017)
							_g->zpp_inner->x = x;
							HX_STACK_LINE(1017)
							{
								HX_STACK_LINE(1017)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1017)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1017)
									_this->_invalidate(_this);
								}
							}
						}
					}
					HX_STACK_LINE(1017)
					{
						HX_STACK_LINE(1017)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(1017)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1017)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1017)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1017)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(1018)
			{
				HX_STACK_LINE(1018)
				::nape::geom::Vec2 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1018)
				{
					struct _Function_5_1{
						inline static Float Block( ::nape::geom::Vec2 &_g){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1018);
							{
								HX_STACK_LINE(1018)
								if (((bool((_g != null())) && bool(_g->zpp_disp)))){
									HX_STACK_LINE(1018)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1018)
								{
									HX_STACK_LINE(1018)
									::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1018)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1018)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1018)
								return _g->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1018)
					Float y = (_Function_5_1::Block(_g) * t);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(1018)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1018)
							if ((_this->_immutable)){
								HX_STACK_LINE(1018)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1018)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1018)
								_this->_isimmutable();
							}
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec2 &_g){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",1018);
								{
									HX_STACK_LINE(1018)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(1018)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1018)
									{
										HX_STACK_LINE(1018)
										::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1018)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1018)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1018)
									return _g->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1018)
						if (((_Function_6_1::Block(_g) != y))){
							HX_STACK_LINE(1018)
							if (((y != y))){
								HX_STACK_LINE(1018)
								hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
							}
							HX_STACK_LINE(1018)
							_g->zpp_inner->y = y;
							HX_STACK_LINE(1018)
							{
								HX_STACK_LINE(1018)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1018)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1018)
									_this->_invalidate(_this);
								}
							}
						}
					}
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(1018)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1018)
						{
							HX_STACK_LINE(1018)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1018)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1018)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1018)
						_g->zpp_inner->y;
					}
				}
			}
		}
	}
	HX_STACK_LINE(1021)
	{
		HX_STACK_LINE(1021)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1021)
		if (((_this->_invalidate != null()))){
			HX_STACK_LINE(1021)
			_this->_invalidate(_this);
		}
	}
	HX_STACK_LINE(1022)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,normalise,return )

::nape::geom::Vec2 Vec2_obj::reflect( ::nape::geom::Vec2 vec,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Vec2::reflect","nape/geom/Vec2.hx",942);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vec,"vec");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(943)
		if ((this->zpp_disp)){
			HX_STACK_LINE(945)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(948)
		if (((bool((vec != null())) && bool(vec->zpp_disp)))){
			HX_STACK_LINE(950)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		struct _Function_1_1{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",954);
				{
					HX_STACK_LINE(954)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(954)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",954);
							{
								HX_STACK_LINE(954)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(954)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(954)
								{
									HX_STACK_LINE(954)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(954)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(954)
										_this->_validate();
									}
								}
								HX_STACK_LINE(954)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",954);
							{
								HX_STACK_LINE(954)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(954)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(954)
								{
									HX_STACK_LINE(954)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(954)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(954)
										_this->_validate();
									}
								}
								HX_STACK_LINE(954)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_3{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",954);
							{
								HX_STACK_LINE(954)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(954)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(954)
								{
									HX_STACK_LINE(954)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(954)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(954)
										_this->_validate();
									}
								}
								HX_STACK_LINE(954)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					struct _Function_2_4{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",954);
							{
								HX_STACK_LINE(954)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(954)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(954)
								{
									HX_STACK_LINE(954)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(954)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(954)
										_this->_validate();
									}
								}
								HX_STACK_LINE(954)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(954)
					return ::Math_obj::sqrt(((_Function_2_1::Block(__this) * _Function_2_2::Block(__this)) + (_Function_2_3::Block(__this) * _Function_2_4::Block(__this))));
				}
				return null();
			}
		};
		HX_STACK_LINE(954)
		if (((_Function_1_1::Block(this) == (int)0))){
			HX_STACK_LINE(954)
			hx::Throw (HX_CSTRING("Error: Cannot reflect in zero vector"));
		}
		struct _Function_1_2{
			inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",958);
				{
					HX_STACK_LINE(958)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(958)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					struct _Function_2_1{
						inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",958);
							{
								struct _Function_3_1{
									inline static Float Block( ::nape::geom::Vec2_obj *__this){
										HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",958);
										{
											HX_STACK_LINE(958)
											if ((__this->zpp_disp)){
												HX_STACK_LINE(958)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(958)
											{
												HX_STACK_LINE(958)
												::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(958)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(958)
													_this->_validate();
												}
											}
											HX_STACK_LINE(958)
											return __this->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_3_2{
									inline static Float Block( ::nape::geom::Vec2_obj *__this){
										HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",958);
										{
											HX_STACK_LINE(958)
											if ((__this->zpp_disp)){
												HX_STACK_LINE(958)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(958)
											{
												HX_STACK_LINE(958)
												::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(958)
												if (((_this->_validate != null()))){
													HX_STACK_LINE(958)
													_this->_validate();
												}
											}
											HX_STACK_LINE(958)
											return __this->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(958)
								Float x = _Function_3_1::Block(__this);		HX_STACK_VAR(x,"x");
								Float y = _Function_3_2::Block(__this);		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(958)
								if (((bool((x != x)) || bool((y != y))))){
									HX_STACK_LINE(958)
									hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
								}
								HX_STACK_LINE(958)
								::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(958)
								if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
									HX_STACK_LINE(958)
									ret = ::nape::geom::Vec2_obj::__new(null(),null());
								}
								else{
									HX_STACK_LINE(958)
									ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
									HX_STACK_LINE(958)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
									HX_STACK_LINE(958)
									ret->zpp_pool = null();
									HX_STACK_LINE(958)
									ret->zpp_disp = false;
									HX_STACK_LINE(958)
									if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
										HX_STACK_LINE(958)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
									}
								}
								HX_STACK_LINE(958)
								if (((ret->zpp_inner == null()))){
									struct _Function_4_1{
										inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
											HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",958);
											{
												HX_STACK_LINE(958)
												bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
												HX_STACK_LINE(958)
												::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(958)
												{
													HX_STACK_LINE(958)
													if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
														HX_STACK_LINE(958)
														ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
													}
													else{
														HX_STACK_LINE(958)
														ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
														HX_STACK_LINE(958)
														::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(958)
														ret1->next = null();
													}
													HX_STACK_LINE(958)
													ret1->weak = false;
												}
												HX_STACK_LINE(958)
												ret1->_immutable = immutable;
												HX_STACK_LINE(958)
												{
													HX_STACK_LINE(958)
													ret1->x = x;
													HX_STACK_LINE(958)
													ret1->y = y;
													HX_STACK_LINE(958)
													{
													}
												}
												HX_STACK_LINE(958)
												return ret1;
											}
											return null();
										}
									};
									HX_STACK_LINE(958)
									ret->zpp_inner = _Function_4_1::Block(x,y);
									HX_STACK_LINE(958)
									ret->zpp_inner->outer = ret;
								}
								else{
									HX_STACK_LINE(958)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(958)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(958)
									{
										HX_STACK_LINE(958)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(958)
										if ((_this->_immutable)){
											HX_STACK_LINE(958)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(958)
										if (((_this->_isimmutable != null()))){
											HX_STACK_LINE(958)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(958)
									if (((bool((x != x)) || bool((y != y))))){
										HX_STACK_LINE(958)
										hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
									}
									struct _Function_4_1{
										inline static Float Block( ::nape::geom::Vec2 &ret){
											HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",958);
											{
												HX_STACK_LINE(958)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(958)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(958)
												{
													HX_STACK_LINE(958)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(958)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(958)
														_this->_validate();
													}
												}
												HX_STACK_LINE(958)
												return ret->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_4_2{
										inline static Float Block( ::nape::geom::Vec2 &ret){
											HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",958);
											{
												HX_STACK_LINE(958)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(958)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(958)
												{
													HX_STACK_LINE(958)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(958)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(958)
														_this->_validate();
													}
												}
												HX_STACK_LINE(958)
												return ret->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(958)
									if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
										HX_STACK_LINE(958)
										{
											HX_STACK_LINE(958)
											ret->zpp_inner->x = x;
											HX_STACK_LINE(958)
											ret->zpp_inner->y = y;
											HX_STACK_LINE(958)
											{
											}
										}
										HX_STACK_LINE(958)
										{
											HX_STACK_LINE(958)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(958)
											if (((_this->_invalidate != null()))){
												HX_STACK_LINE(958)
												_this->_invalidate(_this);
											}
										}
									}
									HX_STACK_LINE(958)
									ret;
								}
								HX_STACK_LINE(958)
								ret->zpp_inner->weak = true;
								HX_STACK_LINE(958)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(958)
					return _Function_2_1::Block(__this);
				}
				return null();
			}
		};
		HX_STACK_LINE(958)
		::nape::geom::Vec2 normal = (_Function_1_2::Block(this))->normalise();		HX_STACK_VAR(normal,"normal");
		HX_STACK_LINE(959)
		::nape::geom::Vec2 ret = vec->sub(normal->muleq(((int)2 * normal->dot(vec))),weak);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(960)
		if ((vec->zpp_inner->weak)){
			HX_STACK_LINE(964)
			{
				HX_STACK_LINE(964)
				if (((bool((vec != null())) && bool(vec->zpp_disp)))){
					HX_STACK_LINE(964)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(964)
				{
					HX_STACK_LINE(964)
					::zpp_nape::geom::ZPP_Vec2 _this = vec->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(964)
					if ((_this->_immutable)){
						HX_STACK_LINE(964)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(964)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(964)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(964)
				if ((vec->zpp_inner->_inuse)){
					HX_STACK_LINE(964)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(964)
				::zpp_nape::geom::ZPP_Vec2 inner = vec->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(964)
				vec->zpp_inner->outer = null();
				HX_STACK_LINE(964)
				vec->zpp_inner = null();
				HX_STACK_LINE(964)
				{
					HX_STACK_LINE(964)
					::nape::geom::Vec2 o = vec;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(964)
					o->zpp_pool = null();
					HX_STACK_LINE(964)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(964)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(964)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(964)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(964)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(964)
				{
					HX_STACK_LINE(964)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(964)
					{
						HX_STACK_LINE(964)
						if (((o->outer != null()))){
							HX_STACK_LINE(964)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(964)
							o->outer = null();
						}
						HX_STACK_LINE(964)
						o->_isimmutable = null();
						HX_STACK_LINE(964)
						o->_validate = null();
						HX_STACK_LINE(964)
						o->_invalidate = null();
					}
					HX_STACK_LINE(964)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(964)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(965)
			true;
		}
		else{
			HX_STACK_LINE(967)
			false;
		}
		HX_STACK_LINE(971)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,reflect,return )

::nape::geom::Vec2 Vec2_obj::rotate( Float angle){
	HX_STACK_PUSH("Vec2::rotate","nape/geom/Vec2.hx",907);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(908)
	if ((this->zpp_disp)){
		HX_STACK_LINE(910)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(913)
	{
		HX_STACK_LINE(913)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(913)
		if ((_this->_immutable)){
			HX_STACK_LINE(913)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(913)
		if (((_this->_isimmutable != null()))){
			HX_STACK_LINE(913)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(915)
	if (((angle != angle))){
		HX_STACK_LINE(915)
		hx::Throw (HX_CSTRING("Error: Cannot rotate Vec2 by NaN"));
	}
	HX_STACK_LINE(919)
	if (((hx::Mod(angle,((::Math_obj::PI * (int)2))) != (int)0))){
		HX_STACK_LINE(920)
		Float ax = ::Math_obj::sin(angle);		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(921)
		Float ay = ::Math_obj::cos(angle);		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(922)
		{
			HX_STACK_LINE(923)
			Float t = ((ay * this->zpp_inner->x) - (ax * this->zpp_inner->y));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(924)
			this->zpp_inner->y = ((this->zpp_inner->x * ax) + (this->zpp_inner->y * ay));
			HX_STACK_LINE(925)
			this->zpp_inner->x = t;
		}
		HX_STACK_LINE(927)
		{
			HX_STACK_LINE(927)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(927)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(927)
				_this->_invalidate(_this);
			}
		}
	}
	HX_STACK_LINE(929)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,rotate,return )

Float Vec2_obj::set_angle( Float angle){
	HX_STACK_PUSH("Vec2::set_angle","nape/geom/Vec2.hx",874);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(875)
	{
		HX_STACK_LINE(876)
		if ((this->zpp_disp)){
			HX_STACK_LINE(878)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(881)
		{
			HX_STACK_LINE(881)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(881)
			if ((_this->_immutable)){
				HX_STACK_LINE(881)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(881)
			if (((_this->_isimmutable != null()))){
				HX_STACK_LINE(881)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(883)
		if (((angle != angle))){
			HX_STACK_LINE(883)
			hx::Throw (HX_CSTRING("Error: Vec2::angle cannot be NaN"));
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",887);
				{
					HX_STACK_LINE(887)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(887)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",887);
							{
								HX_STACK_LINE(887)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(887)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(887)
								{
									HX_STACK_LINE(887)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(887)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(887)
										_this->_validate();
									}
								}
								HX_STACK_LINE(887)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",887);
							{
								HX_STACK_LINE(887)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(887)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(887)
								{
									HX_STACK_LINE(887)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(887)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(887)
										_this->_validate();
									}
								}
								HX_STACK_LINE(887)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_3_3{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",887);
							{
								HX_STACK_LINE(887)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(887)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(887)
								{
									HX_STACK_LINE(887)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(887)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(887)
										_this->_validate();
									}
								}
								HX_STACK_LINE(887)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					struct _Function_3_4{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",887);
							{
								HX_STACK_LINE(887)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(887)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(887)
								{
									HX_STACK_LINE(887)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(887)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(887)
										_this->_validate();
									}
								}
								HX_STACK_LINE(887)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(887)
					return ::Math_obj::sqrt(((_Function_3_1::Block(__this) * _Function_3_2::Block(__this)) + (_Function_3_3::Block(__this) * _Function_3_4::Block(__this))));
				}
				return null();
			}
		};
		HX_STACK_LINE(887)
		Float l = _Function_2_1::Block(this);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(888)
		{
			HX_STACK_LINE(888)
			Float x = (l * ::Math_obj::cos(angle));		HX_STACK_VAR(x,"x");
			Float y = (l * ::Math_obj::sin(angle));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(888)
			if ((this->zpp_disp)){
				HX_STACK_LINE(888)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(888)
			{
				HX_STACK_LINE(888)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(888)
				if ((_this->_immutable)){
					HX_STACK_LINE(888)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(888)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(888)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(888)
			if (((bool((x != x)) || bool((y != y))))){
				HX_STACK_LINE(888)
				hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::Vec2_obj *__this){
					HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",888);
					{
						HX_STACK_LINE(888)
						if ((__this->zpp_disp)){
							HX_STACK_LINE(888)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(888)
						{
							HX_STACK_LINE(888)
							::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(888)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(888)
								_this->_validate();
							}
						}
						HX_STACK_LINE(888)
						return __this->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( ::nape::geom::Vec2_obj *__this){
					HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",888);
					{
						HX_STACK_LINE(888)
						if ((__this->zpp_disp)){
							HX_STACK_LINE(888)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(888)
						{
							HX_STACK_LINE(888)
							::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(888)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(888)
								_this->_validate();
							}
						}
						HX_STACK_LINE(888)
						return __this->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(888)
			if ((!(((bool((_Function_3_1::Block(this) == x)) && bool((_Function_3_2::Block(this) == y))))))){
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					this->zpp_inner->x = x;
					HX_STACK_LINE(888)
					this->zpp_inner->y = y;
					HX_STACK_LINE(888)
					{
					}
				}
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(888)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(888)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(888)
			hx::ObjectPtr<OBJ_>(this);
		}
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",890);
			{
				HX_STACK_LINE(890)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(890)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",890);
						{
							HX_STACK_LINE(890)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(890)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(890)
							{
								HX_STACK_LINE(890)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(890)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(890)
									_this->_validate();
								}
							}
							HX_STACK_LINE(890)
							return __this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",890);
						{
							HX_STACK_LINE(890)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(890)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(890)
							{
								HX_STACK_LINE(890)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(890)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(890)
									_this->_validate();
								}
							}
							HX_STACK_LINE(890)
							return __this->zpp_inner->y;
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",890);
						{
							HX_STACK_LINE(890)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(890)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(890)
							{
								HX_STACK_LINE(890)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(890)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(890)
									_this->_validate();
								}
							}
							HX_STACK_LINE(890)
							return __this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",890);
						{
							HX_STACK_LINE(890)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(890)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(890)
							{
								HX_STACK_LINE(890)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(890)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(890)
									_this->_validate();
								}
							}
							HX_STACK_LINE(890)
							return __this->zpp_inner->y;
						}
						return null();
					}
				};
				struct _Function_2_5{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",890);
						{
							HX_STACK_LINE(890)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(890)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(890)
							{
								HX_STACK_LINE(890)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(890)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(890)
									_this->_validate();
								}
							}
							HX_STACK_LINE(890)
							return __this->zpp_inner->x;
						}
						return null();
					}
				};
				HX_STACK_LINE(890)
				return (  (((bool((_Function_2_1::Block(__this) == _Function_2_2::Block(__this))) && bool((_Function_2_3::Block(__this) == (int)0))))) ? Float(0.0) : Float(::Math_obj::atan2(_Function_2_4::Block(__this),_Function_2_5::Block(__this))) );
			}
			return null();
		}
	};
	HX_STACK_LINE(890)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_angle,return )

Float Vec2_obj::get_angle( ){
	HX_STACK_PUSH("Vec2::get_angle","nape/geom/Vec2.hx",861);
	HX_STACK_THIS(this);
	HX_STACK_LINE(862)
	if ((this->zpp_disp)){
		HX_STACK_LINE(864)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",867);
			{
				HX_STACK_LINE(867)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(867)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(867)
				{
					HX_STACK_LINE(867)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(867)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(867)
						_this->_validate();
					}
				}
				HX_STACK_LINE(867)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",867);
			{
				HX_STACK_LINE(867)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(867)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(867)
				{
					HX_STACK_LINE(867)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(867)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(867)
						_this->_validate();
					}
				}
				HX_STACK_LINE(867)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",867);
			{
				HX_STACK_LINE(867)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(867)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(867)
				{
					HX_STACK_LINE(867)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(867)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(867)
						_this->_validate();
					}
				}
				HX_STACK_LINE(867)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	HX_STACK_LINE(867)
	if (((bool((_Function_1_1::Block(this) == _Function_1_2::Block(this))) && bool((_Function_1_3::Block(this) == (int)0))))){
		HX_STACK_LINE(867)
		return 0.0;
	}
	else{
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",871);
				{
					HX_STACK_LINE(871)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(871)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(871)
					{
						HX_STACK_LINE(871)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(871)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(871)
							_this->_validate();
						}
					}
					HX_STACK_LINE(871)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",871);
				{
					HX_STACK_LINE(871)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(871)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(871)
					{
						HX_STACK_LINE(871)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(871)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(871)
							_this->_validate();
						}
					}
					HX_STACK_LINE(871)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(870)
		return ::Math_obj::atan2(_Function_2_1::Block(this),_Function_2_2::Block(this));
	}
	HX_STACK_LINE(867)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_angle,return )

::nape::geom::Vec2 Vec2_obj::setxy( Float x,Float y){
	HX_STACK_PUSH("Vec2::setxy","nape/geom/Vec2.hx",808);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(809)
	if ((this->zpp_disp)){
		HX_STACK_LINE(811)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(814)
	{
		HX_STACK_LINE(814)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(814)
		if ((_this->_immutable)){
			HX_STACK_LINE(814)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(814)
		if (((_this->_isimmutable != null()))){
			HX_STACK_LINE(814)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(816)
	if (((bool((x != x)) || bool((y != y))))){
		HX_STACK_LINE(816)
		hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",820);
			{
				HX_STACK_LINE(820)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(820)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(820)
				{
					HX_STACK_LINE(820)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(820)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(820)
						_this->_validate();
					}
				}
				HX_STACK_LINE(820)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",820);
			{
				HX_STACK_LINE(820)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(820)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(820)
				{
					HX_STACK_LINE(820)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(820)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(820)
						_this->_validate();
					}
				}
				HX_STACK_LINE(820)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	HX_STACK_LINE(820)
	if ((!(((bool((_Function_1_1::Block(this) == x)) && bool((_Function_1_2::Block(this) == y))))))){
		HX_STACK_LINE(821)
		{
			HX_STACK_LINE(822)
			this->zpp_inner->x = x;
			HX_STACK_LINE(823)
			this->zpp_inner->y = y;
			HX_STACK_LINE(832)
			{
			}
		}
		HX_STACK_LINE(841)
		{
			HX_STACK_LINE(841)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(841)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(841)
				_this->_invalidate(_this);
			}
		}
	}
	HX_STACK_LINE(843)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,setxy,return )

::nape::geom::Vec2 Vec2_obj::set( ::nape::geom::Vec2 vector){
	HX_STACK_PUSH("Vec2::set","nape/geom/Vec2.hx",671);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_LINE(672)
	if ((this->zpp_disp)){
		HX_STACK_LINE(674)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(677)
	if (((bool((vector != null())) && bool(vector->zpp_disp)))){
		HX_STACK_LINE(679)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(682)
	{
		HX_STACK_LINE(682)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(682)
		if ((_this->_immutable)){
			HX_STACK_LINE(682)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(682)
		if (((_this->_isimmutable != null()))){
			HX_STACK_LINE(682)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(684)
	if (((vector == null()))){
		HX_STACK_LINE(684)
		hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2_obj *__this,::nape::geom::Vec2 &vector){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",688);
			{
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::Vec2 &vector){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",688);
						{
							HX_STACK_LINE(688)
							if (((bool((vector != null())) && bool(vector->zpp_disp)))){
								HX_STACK_LINE(688)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(688)
							{
								HX_STACK_LINE(688)
								::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(688)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(688)
									_this->_validate();
								}
							}
							HX_STACK_LINE(688)
							return vector->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static Float Block( ::nape::geom::Vec2 &vector){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",688);
						{
							HX_STACK_LINE(688)
							if (((bool((vector != null())) && bool(vector->zpp_disp)))){
								HX_STACK_LINE(688)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(688)
							{
								HX_STACK_LINE(688)
								::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(688)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(688)
									_this->_validate();
								}
							}
							HX_STACK_LINE(688)
							return vector->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(688)
				Float x = _Function_2_1::Block(vector);		HX_STACK_VAR(x,"x");
				Float y = _Function_2_2::Block(vector);		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(688)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(688)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(688)
					if ((_this->_immutable)){
						HX_STACK_LINE(688)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(688)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(688)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(688)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(688)
					hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				struct _Function_2_3{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",688);
						{
							HX_STACK_LINE(688)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(688)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(688)
							{
								HX_STACK_LINE(688)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(688)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(688)
									_this->_validate();
								}
							}
							HX_STACK_LINE(688)
							return __this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",688);
						{
							HX_STACK_LINE(688)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(688)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(688)
							{
								HX_STACK_LINE(688)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(688)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(688)
									_this->_validate();
								}
							}
							HX_STACK_LINE(688)
							return __this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(688)
				if ((!(((bool((_Function_2_3::Block(__this) == x)) && bool((_Function_2_4::Block(__this) == y))))))){
					HX_STACK_LINE(688)
					{
						HX_STACK_LINE(688)
						__this->zpp_inner->x = x;
						HX_STACK_LINE(688)
						__this->zpp_inner->y = y;
						HX_STACK_LINE(688)
						{
						}
					}
					HX_STACK_LINE(688)
					{
						HX_STACK_LINE(688)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(688)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(688)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(688)
				return __this;
			}
			return null();
		}
	};
	HX_STACK_LINE(688)
	::nape::geom::Vec2 ret = _Function_1_1::Block(this,vector);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(689)
	if ((vector->zpp_inner->weak)){
		HX_STACK_LINE(693)
		{
			HX_STACK_LINE(693)
			if (((bool((vector != null())) && bool(vector->zpp_disp)))){
				HX_STACK_LINE(693)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(693)
			{
				HX_STACK_LINE(693)
				::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(693)
				if ((_this->_immutable)){
					HX_STACK_LINE(693)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(693)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(693)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(693)
			if ((vector->zpp_inner->_inuse)){
				HX_STACK_LINE(693)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(693)
			::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(693)
			vector->zpp_inner->outer = null();
			HX_STACK_LINE(693)
			vector->zpp_inner = null();
			HX_STACK_LINE(693)
			{
				HX_STACK_LINE(693)
				::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(693)
				o->zpp_pool = null();
				HX_STACK_LINE(693)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(693)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(693)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(693)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(693)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(693)
			{
				HX_STACK_LINE(693)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(693)
				{
					HX_STACK_LINE(693)
					if (((o->outer != null()))){
						HX_STACK_LINE(693)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(693)
						o->outer = null();
					}
					HX_STACK_LINE(693)
					o->_isimmutable = null();
					HX_STACK_LINE(693)
					o->_validate = null();
					HX_STACK_LINE(693)
					o->_invalidate = null();
				}
				HX_STACK_LINE(693)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(693)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(694)
		true;
	}
	else{
		HX_STACK_LINE(696)
		false;
	}
	HX_STACK_LINE(700)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set,return )

Float Vec2_obj::lsq( ){
	HX_STACK_PUSH("Vec2::lsq","nape/geom/Vec2.hx",650);
	HX_STACK_THIS(this);
	HX_STACK_LINE(651)
	if ((this->zpp_disp)){
		HX_STACK_LINE(653)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",656);
			{
				HX_STACK_LINE(656)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(656)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(656)
				{
					HX_STACK_LINE(656)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(656)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(656)
						_this->_validate();
					}
				}
				HX_STACK_LINE(656)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",656);
			{
				HX_STACK_LINE(656)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(656)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(656)
				{
					HX_STACK_LINE(656)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(656)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(656)
						_this->_validate();
					}
				}
				HX_STACK_LINE(656)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",656);
			{
				HX_STACK_LINE(656)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(656)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(656)
				{
					HX_STACK_LINE(656)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(656)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(656)
						_this->_validate();
					}
				}
				HX_STACK_LINE(656)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",656);
			{
				HX_STACK_LINE(656)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(656)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(656)
				{
					HX_STACK_LINE(656)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(656)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(656)
						_this->_validate();
					}
				}
				HX_STACK_LINE(656)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	HX_STACK_LINE(656)
	return ((_Function_1_1::Block(this) * _Function_1_2::Block(this)) + (_Function_1_3::Block(this) * _Function_1_4::Block(this)));
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,lsq,return )

Float Vec2_obj::set_length( Float length){
	HX_STACK_PUSH("Vec2::set_length","nape/geom/Vec2.hx",607);
	HX_STACK_THIS(this);
	HX_STACK_ARG(length,"length");
	HX_STACK_LINE(608)
	{
		HX_STACK_LINE(609)
		if ((this->zpp_disp)){
			HX_STACK_LINE(611)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(614)
			if ((_this->_immutable)){
				HX_STACK_LINE(614)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(614)
			if (((_this->_isimmutable != null()))){
				HX_STACK_LINE(614)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(616)
		if (((length != length))){
			HX_STACK_LINE(616)
			hx::Throw (HX_CSTRING("Error: Vec2::length cannot be NaN"));
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",619);
				{
					HX_STACK_LINE(619)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(619)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(619)
					{
						HX_STACK_LINE(619)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(619)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(619)
							_this->_validate();
						}
					}
					HX_STACK_LINE(619)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",619);
				{
					HX_STACK_LINE(619)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(619)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(619)
					{
						HX_STACK_LINE(619)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(619)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(619)
							_this->_validate();
						}
					}
					HX_STACK_LINE(619)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",619);
				{
					HX_STACK_LINE(619)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(619)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(619)
					{
						HX_STACK_LINE(619)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(619)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(619)
							_this->_validate();
						}
					}
					HX_STACK_LINE(619)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",619);
				{
					HX_STACK_LINE(619)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(619)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(619)
					{
						HX_STACK_LINE(619)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(619)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(619)
							_this->_validate();
						}
					}
					HX_STACK_LINE(619)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(619)
		if (((((_Function_2_1::Block(this) * _Function_2_2::Block(this)) + (_Function_2_3::Block(this) * _Function_2_4::Block(this))) == (int)0))){
			HX_STACK_LINE(619)
			hx::Throw (HX_CSTRING("Error: Cannot set length of a zero vector"));
		}
		HX_STACK_LINE(623)
		{
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::Vec2_obj *__this){
					HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",624);
					{
						HX_STACK_LINE(624)
						if ((__this->zpp_disp)){
							HX_STACK_LINE(624)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(624)
						{
							HX_STACK_LINE(624)
							::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(624)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(624)
								_this->_validate();
							}
						}
						HX_STACK_LINE(624)
						return __this->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( ::nape::geom::Vec2_obj *__this){
					HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",624);
					{
						HX_STACK_LINE(624)
						if ((__this->zpp_disp)){
							HX_STACK_LINE(624)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(624)
						{
							HX_STACK_LINE(624)
							::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(624)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(624)
								_this->_validate();
							}
						}
						HX_STACK_LINE(624)
						return __this->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_3_3{
				inline static Float Block( ::nape::geom::Vec2_obj *__this){
					HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",624);
					{
						HX_STACK_LINE(624)
						if ((__this->zpp_disp)){
							HX_STACK_LINE(624)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(624)
						{
							HX_STACK_LINE(624)
							::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(624)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(624)
								_this->_validate();
							}
						}
						HX_STACK_LINE(624)
						return __this->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_3_4{
				inline static Float Block( ::nape::geom::Vec2_obj *__this){
					HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",624);
					{
						HX_STACK_LINE(624)
						if ((__this->zpp_disp)){
							HX_STACK_LINE(624)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(624)
						{
							HX_STACK_LINE(624)
							::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(624)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(624)
								_this->_validate();
							}
						}
						HX_STACK_LINE(624)
						return __this->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(624)
			Float t = (Float(length) / Float(::Math_obj::sqrt(((_Function_3_1::Block(this) * _Function_3_2::Block(this)) + (_Function_3_3::Block(this) * _Function_3_4::Block(this))))));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(633)
			{
				HX_STACK_LINE(633)
				::nape::geom::Vec2 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(633)
				{
					struct _Function_5_1{
						inline static Float Block( ::nape::geom::Vec2 &_g){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",633);
							{
								HX_STACK_LINE(633)
								if (((bool((_g != null())) && bool(_g->zpp_disp)))){
									HX_STACK_LINE(633)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(633)
								{
									HX_STACK_LINE(633)
									::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(633)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(633)
										_this->_validate();
									}
								}
								HX_STACK_LINE(633)
								return _g->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(633)
					Float x = (_Function_5_1::Block(_g) * t);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(633)
					{
						HX_STACK_LINE(633)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(633)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(633)
							if ((_this->_immutable)){
								HX_STACK_LINE(633)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(633)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(633)
								_this->_isimmutable();
							}
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec2 &_g){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",633);
								{
									HX_STACK_LINE(633)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(633)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(633)
									{
										HX_STACK_LINE(633)
										::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(633)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(633)
											_this->_validate();
										}
									}
									HX_STACK_LINE(633)
									return _g->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(633)
						if (((_Function_6_1::Block(_g) != x))){
							HX_STACK_LINE(633)
							if (((x != x))){
								HX_STACK_LINE(633)
								hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
							}
							HX_STACK_LINE(633)
							_g->zpp_inner->x = x;
							HX_STACK_LINE(633)
							{
								HX_STACK_LINE(633)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(633)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(633)
									_this->_invalidate(_this);
								}
							}
						}
					}
					HX_STACK_LINE(633)
					{
						HX_STACK_LINE(633)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(633)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(633)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(633)
								_this->_validate();
							}
						}
						HX_STACK_LINE(633)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(634)
			{
				HX_STACK_LINE(634)
				::nape::geom::Vec2 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(634)
				{
					struct _Function_5_1{
						inline static Float Block( ::nape::geom::Vec2 &_g){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",634);
							{
								HX_STACK_LINE(634)
								if (((bool((_g != null())) && bool(_g->zpp_disp)))){
									HX_STACK_LINE(634)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(634)
								{
									HX_STACK_LINE(634)
									::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(634)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(634)
										_this->_validate();
									}
								}
								HX_STACK_LINE(634)
								return _g->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(634)
					Float y = (_Function_5_1::Block(_g) * t);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(634)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(634)
							if ((_this->_immutable)){
								HX_STACK_LINE(634)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(634)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(634)
								_this->_isimmutable();
							}
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec2 &_g){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",634);
								{
									HX_STACK_LINE(634)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(634)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(634)
									{
										HX_STACK_LINE(634)
										::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(634)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(634)
											_this->_validate();
										}
									}
									HX_STACK_LINE(634)
									return _g->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(634)
						if (((_Function_6_1::Block(_g) != y))){
							HX_STACK_LINE(634)
							if (((y != y))){
								HX_STACK_LINE(634)
								hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
							}
							HX_STACK_LINE(634)
							_g->zpp_inner->y = y;
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(634)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(634)
									_this->_invalidate(_this);
								}
							}
						}
					}
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(634)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(634)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(634)
								_this->_validate();
							}
						}
						HX_STACK_LINE(634)
						_g->zpp_inner->y;
					}
				}
			}
		}
		HX_STACK_LINE(636)
		{
			HX_STACK_LINE(636)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(636)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(636)
				_this->_invalidate(_this);
			}
		}
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",638);
			{
				HX_STACK_LINE(638)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(638)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",638);
						{
							HX_STACK_LINE(638)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(638)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(638)
							{
								HX_STACK_LINE(638)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(638)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(638)
									_this->_validate();
								}
							}
							HX_STACK_LINE(638)
							return __this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",638);
						{
							HX_STACK_LINE(638)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(638)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(638)
							{
								HX_STACK_LINE(638)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(638)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(638)
									_this->_validate();
								}
							}
							HX_STACK_LINE(638)
							return __this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",638);
						{
							HX_STACK_LINE(638)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(638)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(638)
							{
								HX_STACK_LINE(638)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(638)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(638)
									_this->_validate();
								}
							}
							HX_STACK_LINE(638)
							return __this->zpp_inner->y;
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static Float Block( ::nape::geom::Vec2_obj *__this){
						HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",638);
						{
							HX_STACK_LINE(638)
							if ((__this->zpp_disp)){
								HX_STACK_LINE(638)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(638)
							{
								HX_STACK_LINE(638)
								::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(638)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(638)
									_this->_validate();
								}
							}
							HX_STACK_LINE(638)
							return __this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(638)
				return ::Math_obj::sqrt(((_Function_2_1::Block(__this) * _Function_2_2::Block(__this)) + (_Function_2_3::Block(__this) * _Function_2_4::Block(__this))));
			}
			return null();
		}
	};
	HX_STACK_LINE(638)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_length,return )

Float Vec2_obj::get_length( ){
	HX_STACK_PUSH("Vec2::get_length","nape/geom/Vec2.hx",599);
	HX_STACK_THIS(this);
	HX_STACK_LINE(600)
	if ((this->zpp_disp)){
		HX_STACK_LINE(602)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",605);
			{
				HX_STACK_LINE(605)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(605)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(605)
				{
					HX_STACK_LINE(605)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(605)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(605)
						_this->_validate();
					}
				}
				HX_STACK_LINE(605)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",605);
			{
				HX_STACK_LINE(605)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(605)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(605)
				{
					HX_STACK_LINE(605)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(605)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(605)
						_this->_validate();
					}
				}
				HX_STACK_LINE(605)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",605);
			{
				HX_STACK_LINE(605)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(605)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(605)
				{
					HX_STACK_LINE(605)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(605)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(605)
						_this->_validate();
					}
				}
				HX_STACK_LINE(605)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",605);
			{
				HX_STACK_LINE(605)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(605)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(605)
				{
					HX_STACK_LINE(605)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(605)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(605)
						_this->_validate();
					}
				}
				HX_STACK_LINE(605)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	HX_STACK_LINE(605)
	return ::Math_obj::sqrt(((_Function_1_1::Block(this) * _Function_1_2::Block(this)) + (_Function_1_3::Block(this) * _Function_1_4::Block(this))));
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_length,return )

Float Vec2_obj::set_y( Float y){
	HX_STACK_PUSH("Vec2::set_y","nape/geom/Vec2.hx",568);
	HX_STACK_THIS(this);
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(569)
	{
		HX_STACK_LINE(570)
		if ((this->zpp_disp)){
			HX_STACK_LINE(572)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(575)
		{
			HX_STACK_LINE(575)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(575)
			if ((_this->_immutable)){
				HX_STACK_LINE(575)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(575)
			if (((_this->_isimmutable != null()))){
				HX_STACK_LINE(575)
				_this->_isimmutable();
			}
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",576);
				{
					HX_STACK_LINE(576)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(576)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(576)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(576)
							_this->_validate();
						}
					}
					HX_STACK_LINE(576)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(576)
		if (((_Function_2_1::Block(this) != y))){
			HX_STACK_LINE(578)
			if (((y != y))){
				HX_STACK_LINE(578)
				hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(582)
			this->zpp_inner->y = y;
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(583)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(583)
					_this->_invalidate(_this);
				}
			}
		}
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",586);
			{
				HX_STACK_LINE(586)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(586)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(586)
				{
					HX_STACK_LINE(586)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(586)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(586)
						_this->_validate();
					}
				}
				HX_STACK_LINE(586)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	HX_STACK_LINE(586)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_y,return )

Float Vec2_obj::get_y( ){
	HX_STACK_PUSH("Vec2::get_y","nape/geom/Vec2.hx",559);
	HX_STACK_THIS(this);
	HX_STACK_LINE(560)
	if ((this->zpp_disp)){
		HX_STACK_LINE(562)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(565)
	{
		HX_STACK_LINE(565)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(565)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(565)
			_this->_validate();
		}
	}
	HX_STACK_LINE(566)
	return this->zpp_inner->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_y,return )

Float Vec2_obj::set_x( Float x){
	HX_STACK_PUSH("Vec2::set_x","nape/geom/Vec2.hx",532);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(534)
		if ((this->zpp_disp)){
			HX_STACK_LINE(536)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(539)
		{
			HX_STACK_LINE(539)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(539)
			if ((_this->_immutable)){
				HX_STACK_LINE(539)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(539)
			if (((_this->_isimmutable != null()))){
				HX_STACK_LINE(539)
				_this->_isimmutable();
			}
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2_obj *__this){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",540);
				{
					HX_STACK_LINE(540)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(540)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(540)
						::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(540)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(540)
							_this->_validate();
						}
					}
					HX_STACK_LINE(540)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(540)
		if (((_Function_2_1::Block(this) != x))){
			HX_STACK_LINE(542)
			if (((x != x))){
				HX_STACK_LINE(542)
				hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(546)
			this->zpp_inner->x = x;
			HX_STACK_LINE(547)
			{
				HX_STACK_LINE(547)
				::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(547)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(547)
					_this->_invalidate(_this);
				}
			}
		}
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",550);
			{
				HX_STACK_LINE(550)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(550)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(550)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(550)
						_this->_validate();
					}
				}
				HX_STACK_LINE(550)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	HX_STACK_LINE(550)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,set_x,return )

Float Vec2_obj::get_x( ){
	HX_STACK_PUSH("Vec2::get_x","nape/geom/Vec2.hx",523);
	HX_STACK_THIS(this);
	HX_STACK_LINE(524)
	if ((this->zpp_disp)){
		HX_STACK_LINE(526)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(529)
	{
		HX_STACK_LINE(529)
		::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(529)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(529)
			_this->_validate();
		}
	}
	HX_STACK_LINE(530)
	return this->zpp_inner->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,get_x,return )

::nape::geom::Vec2 Vec2_obj::copy( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Vec2::copy","nape/geom/Vec2.hx",425);
	HX_STACK_THIS(this);
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(426)
		if ((this->zpp_disp)){
			HX_STACK_LINE(428)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2_obj *__this,bool &weak){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",431);
				{
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",431);
							{
								HX_STACK_LINE(431)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(431)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(431)
								{
									HX_STACK_LINE(431)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(431)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(431)
										_this->_validate();
									}
								}
								HX_STACK_LINE(431)
								return __this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static Float Block( ::nape::geom::Vec2_obj *__this){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",431);
							{
								HX_STACK_LINE(431)
								if ((__this->zpp_disp)){
									HX_STACK_LINE(431)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(431)
								{
									HX_STACK_LINE(431)
									::zpp_nape::geom::ZPP_Vec2 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(431)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(431)
										_this->_validate();
									}
								}
								HX_STACK_LINE(431)
								return __this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(431)
					Float x = _Function_2_1::Block(__this);		HX_STACK_VAR(x,"x");
					Float y = _Function_2_2::Block(__this);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(431)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(431)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(431)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(431)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(431)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(431)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(431)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(431)
						ret->zpp_pool = null();
						HX_STACK_LINE(431)
						ret->zpp_disp = false;
						HX_STACK_LINE(431)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(431)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(431)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",431);
								{
									HX_STACK_LINE(431)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(431)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(431)
									{
										HX_STACK_LINE(431)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(431)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(431)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(431)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(431)
											ret1->next = null();
										}
										HX_STACK_LINE(431)
										ret1->weak = false;
									}
									HX_STACK_LINE(431)
									ret1->_immutable = immutable;
									HX_STACK_LINE(431)
									{
										HX_STACK_LINE(431)
										ret1->x = x;
										HX_STACK_LINE(431)
										ret1->y = y;
										HX_STACK_LINE(431)
										{
										}
									}
									HX_STACK_LINE(431)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(431)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(431)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(431)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(431)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(431)
						{
							HX_STACK_LINE(431)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(431)
							if ((_this->_immutable)){
								HX_STACK_LINE(431)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(431)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(431)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(431)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(431)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",431);
								{
									HX_STACK_LINE(431)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(431)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(431)
									{
										HX_STACK_LINE(431)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(431)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(431)
											_this->_validate();
										}
									}
									HX_STACK_LINE(431)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",431);
								{
									HX_STACK_LINE(431)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(431)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(431)
									{
										HX_STACK_LINE(431)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(431)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(431)
											_this->_validate();
										}
									}
									HX_STACK_LINE(431)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(431)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(431)
							{
								HX_STACK_LINE(431)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(431)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(431)
								{
								}
							}
							HX_STACK_LINE(431)
							{
								HX_STACK_LINE(431)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(431)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(431)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(431)
						ret;
					}
					HX_STACK_LINE(431)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(431)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(431)
		return _Function_1_1::Block(this,weak);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec2_obj,copy,return )

Void Vec2_obj::dispose( ){
{
		HX_STACK_PUSH("Vec2::dispose","nape/geom/Vec2.hx",328);
		HX_STACK_THIS(this);
		HX_STACK_LINE(329)
		if ((this->zpp_disp)){
			HX_STACK_LINE(331)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(334)
			::zpp_nape::geom::ZPP_Vec2 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(334)
			if ((_this->_immutable)){
				HX_STACK_LINE(334)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(334)
			if (((_this->_isimmutable != null()))){
				HX_STACK_LINE(334)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(336)
		if ((this->zpp_inner->_inuse)){
			HX_STACK_LINE(336)
			hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
		}
		HX_STACK_LINE(340)
		::zpp_nape::geom::ZPP_Vec2 inner = this->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(341)
		this->zpp_inner->outer = null();
		HX_STACK_LINE(342)
		this->zpp_inner = null();
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(344)
			::nape::geom::Vec2 o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(354)
			o->zpp_pool = null();
			HX_STACK_LINE(355)
			if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
				HX_STACK_LINE(355)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(356)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(357)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(367)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(371)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(380)
			{
				HX_STACK_LINE(380)
				if (((o->outer != null()))){
					HX_STACK_LINE(380)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(380)
					o->outer = null();
				}
				HX_STACK_LINE(380)
				o->_isimmutable = null();
				HX_STACK_LINE(380)
				o->_validate = null();
				HX_STACK_LINE(380)
				o->_invalidate = null();
			}
			HX_STACK_LINE(381)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(382)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec2_obj,dispose,(void))

::nape::geom::Vec2 Vec2_obj::weak( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_PUSH("Vec2::weak","nape/geom/Vec2.hx",256);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( Float &x,Float &y){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",257);
				{
					HX_STACK_LINE(257)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(257)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(257)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(257)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(257)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(257)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(257)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(257)
						ret->zpp_pool = null();
						HX_STACK_LINE(257)
						ret->zpp_disp = false;
						HX_STACK_LINE(257)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(257)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(257)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",257);
								{
									HX_STACK_LINE(257)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(257)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(257)
									{
										HX_STACK_LINE(257)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(257)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(257)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(257)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(257)
											ret1->next = null();
										}
										HX_STACK_LINE(257)
										ret1->weak = false;
									}
									HX_STACK_LINE(257)
									ret1->_immutable = immutable;
									HX_STACK_LINE(257)
									{
										HX_STACK_LINE(257)
										ret1->x = x;
										HX_STACK_LINE(257)
										ret1->y = y;
										HX_STACK_LINE(257)
										{
										}
									}
									HX_STACK_LINE(257)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(257)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(257)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(257)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(257)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(257)
							if ((_this->_immutable)){
								HX_STACK_LINE(257)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(257)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(257)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(257)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(257)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",257);
								{
									HX_STACK_LINE(257)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(257)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(257)
									{
										HX_STACK_LINE(257)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(257)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(257)
											_this->_validate();
										}
									}
									HX_STACK_LINE(257)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",257);
								{
									HX_STACK_LINE(257)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(257)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(257)
									{
										HX_STACK_LINE(257)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(257)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(257)
											_this->_validate();
										}
									}
									HX_STACK_LINE(257)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(257)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(257)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(257)
								{
								}
							}
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(257)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(257)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(257)
						ret;
					}
					HX_STACK_LINE(257)
					ret->zpp_inner->weak = true;
					HX_STACK_LINE(257)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(256)
		return _Function_1_1::Block(x,y);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,weak,return )

::nape::geom::Vec2 Vec2_obj::get( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< bool >  __o_weak){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Vec2::get","nape/geom/Vec2.hx",273);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(275)
		if (((bool((x != x)) || bool((y != y))))){
			HX_STACK_LINE(275)
			hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
		}
		HX_STACK_LINE(279)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(280)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(281)
			ret = ::nape::geom::Vec2_obj::__new(null(),null());
		}
		else{
			HX_STACK_LINE(288)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(289)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(290)
			ret->zpp_pool = null();
			HX_STACK_LINE(292)
			ret->zpp_disp = false;
			HX_STACK_LINE(293)
			if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
				HX_STACK_LINE(293)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
			}
		}
		HX_STACK_LINE(300)
		if (((ret->zpp_inner == null()))){
			struct _Function_2_1{
				inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
					HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",301);
					{
						HX_STACK_LINE(301)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(301)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(301)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
							}
							else{
								HX_STACK_LINE(301)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(301)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(301)
								ret1->next = null();
							}
							HX_STACK_LINE(301)
							ret1->weak = false;
						}
						HX_STACK_LINE(301)
						ret1->_immutable = immutable;
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							ret1->x = x;
							HX_STACK_LINE(301)
							ret1->y = y;
							HX_STACK_LINE(301)
							{
							}
						}
						HX_STACK_LINE(301)
						return ret1;
					}
					return null();
				}
			};
			HX_STACK_LINE(301)
			ret->zpp_inner = _Function_2_1::Block(x,y);
			HX_STACK_LINE(302)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(305)
			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
				HX_STACK_LINE(305)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(305)
				if ((_this->_immutable)){
					HX_STACK_LINE(305)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(305)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(305)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(305)
			if (((bool((x != x)) || bool((y != y))))){
				HX_STACK_LINE(305)
				hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &ret){
					HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",305);
					{
						HX_STACK_LINE(305)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(305)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(305)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(305)
								_this->_validate();
							}
						}
						HX_STACK_LINE(305)
						return ret->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &ret){
					HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",305);
					{
						HX_STACK_LINE(305)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(305)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(305)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(305)
								_this->_validate();
							}
						}
						HX_STACK_LINE(305)
						return ret->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(305)
			if ((!(((bool((_Function_2_1::Block(ret) == x)) && bool((_Function_2_2::Block(ret) == y))))))){
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(305)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(305)
					{
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(305)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(305)
			ret;
		}
		HX_STACK_LINE(307)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(308)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vec2_obj,get,return )

::nape::geom::Vec2 Vec2_obj::fromPolar( Float length,Float angle,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Vec2::fromPolar","nape/geom/Vec2.hx",505);
	HX_STACK_ARG(length,"length");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(507)
		if (((length != length))){
			HX_STACK_LINE(507)
			hx::Throw (HX_CSTRING("Error: Vec2::length cannot be NaN"));
		}
		HX_STACK_LINE(510)
		if (((angle != angle))){
			HX_STACK_LINE(510)
			hx::Throw (HX_CSTRING("Error: Vec2::angle cannot be NaN"));
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( Float &length,bool &weak,Float &angle){
				HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",514);
				{
					HX_STACK_LINE(514)
					Float x = (length * ::Math_obj::cos(angle));		HX_STACK_VAR(x,"x");
					Float y = (length * ::Math_obj::sin(angle));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(514)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(514)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(514)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(514)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(514)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(514)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(514)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(514)
						ret->zpp_pool = null();
						HX_STACK_LINE(514)
						ret->zpp_disp = false;
						HX_STACK_LINE(514)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(514)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(514)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",514);
								{
									HX_STACK_LINE(514)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(514)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(514)
									{
										HX_STACK_LINE(514)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(514)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(514)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(514)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(514)
											ret1->next = null();
										}
										HX_STACK_LINE(514)
										ret1->weak = false;
									}
									HX_STACK_LINE(514)
									ret1->_immutable = immutable;
									HX_STACK_LINE(514)
									{
										HX_STACK_LINE(514)
										ret1->x = x;
										HX_STACK_LINE(514)
										ret1->y = y;
										HX_STACK_LINE(514)
										{
										}
									}
									HX_STACK_LINE(514)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(514)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(514)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(514)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(514)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(514)
						{
							HX_STACK_LINE(514)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(514)
							if ((_this->_immutable)){
								HX_STACK_LINE(514)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(514)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(514)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(514)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(514)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",514);
								{
									HX_STACK_LINE(514)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(514)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(514)
									{
										HX_STACK_LINE(514)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(514)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(514)
											_this->_validate();
										}
									}
									HX_STACK_LINE(514)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",514);
								{
									HX_STACK_LINE(514)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(514)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(514)
									{
										HX_STACK_LINE(514)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(514)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(514)
											_this->_validate();
										}
									}
									HX_STACK_LINE(514)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(514)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(514)
							{
								HX_STACK_LINE(514)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(514)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(514)
								{
								}
							}
							HX_STACK_LINE(514)
							{
								HX_STACK_LINE(514)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(514)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(514)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(514)
						ret;
					}
					HX_STACK_LINE(514)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(514)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(514)
		return _Function_1_1::Block(length,weak,angle);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vec2_obj,fromPolar,return )

Float Vec2_obj::dsq( ::nape::geom::Vec2 a,::nape::geom::Vec2 b){
	HX_STACK_PUSH("Vec2::dsq","nape/geom/Vec2.hx",711);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(712)
	if (((bool((a != null())) && bool(a->zpp_disp)))){
		HX_STACK_LINE(714)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(717)
	if (((bool((b != null())) && bool(b->zpp_disp)))){
		HX_STACK_LINE(719)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(723)
	if (((bool((a == null())) || bool((b == null()))))){
		HX_STACK_LINE(723)
		hx::Throw (HX_CSTRING("Error: Cannot compute squared distance between null Vec2"));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2 &b,::nape::geom::Vec2 &a){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",725);
			{
				HX_STACK_LINE(725)
				Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(725)
				Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(725)
				{
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::Vec2 &a){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",725);
							{
								HX_STACK_LINE(725)
								if (((bool((a != null())) && bool(a->zpp_disp)))){
									HX_STACK_LINE(725)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(725)
								{
									HX_STACK_LINE(725)
									::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(725)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(725)
										_this->_validate();
									}
								}
								HX_STACK_LINE(725)
								return a->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static Float Block( ::nape::geom::Vec2 &b){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",725);
							{
								HX_STACK_LINE(725)
								if (((bool((b != null())) && bool(b->zpp_disp)))){
									HX_STACK_LINE(725)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(725)
								{
									HX_STACK_LINE(725)
									::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(725)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(725)
										_this->_validate();
									}
								}
								HX_STACK_LINE(725)
								return b->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(725)
					dx = (_Function_3_1::Block(a) - _Function_3_2::Block(b));
					struct _Function_3_3{
						inline static Float Block( ::nape::geom::Vec2 &a){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",725);
							{
								HX_STACK_LINE(725)
								if (((bool((a != null())) && bool(a->zpp_disp)))){
									HX_STACK_LINE(725)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(725)
								{
									HX_STACK_LINE(725)
									::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(725)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(725)
										_this->_validate();
									}
								}
								HX_STACK_LINE(725)
								return a->zpp_inner->y;
							}
							return null();
						}
					};
					struct _Function_3_4{
						inline static Float Block( ::nape::geom::Vec2 &b){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",725);
							{
								HX_STACK_LINE(725)
								if (((bool((b != null())) && bool(b->zpp_disp)))){
									HX_STACK_LINE(725)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(725)
								{
									HX_STACK_LINE(725)
									::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(725)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(725)
										_this->_validate();
									}
								}
								HX_STACK_LINE(725)
								return b->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(725)
					dy = (_Function_3_3::Block(a) - _Function_3_4::Block(b));
				}
				HX_STACK_LINE(725)
				return ((dx * dx) + (dy * dy));
			}
			return null();
		}
	};
	HX_STACK_LINE(725)
	Float ret = _Function_1_1::Block(b,a);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(726)
	if ((a->zpp_inner->weak)){
		HX_STACK_LINE(730)
		{
			HX_STACK_LINE(730)
			if (((bool((a != null())) && bool(a->zpp_disp)))){
				HX_STACK_LINE(730)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(730)
			{
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(730)
				if ((_this->_immutable)){
					HX_STACK_LINE(730)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(730)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(730)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(730)
			if ((a->zpp_inner->_inuse)){
				HX_STACK_LINE(730)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(730)
			::zpp_nape::geom::ZPP_Vec2 inner = a->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(730)
			a->zpp_inner->outer = null();
			HX_STACK_LINE(730)
			a->zpp_inner = null();
			HX_STACK_LINE(730)
			{
				HX_STACK_LINE(730)
				::nape::geom::Vec2 o = a;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(730)
				o->zpp_pool = null();
				HX_STACK_LINE(730)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(730)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(730)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(730)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(730)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(730)
			{
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					if (((o->outer != null()))){
						HX_STACK_LINE(730)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(730)
						o->outer = null();
					}
					HX_STACK_LINE(730)
					o->_isimmutable = null();
					HX_STACK_LINE(730)
					o->_validate = null();
					HX_STACK_LINE(730)
					o->_invalidate = null();
				}
				HX_STACK_LINE(730)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(731)
		true;
	}
	else{
		HX_STACK_LINE(733)
		false;
	}
	HX_STACK_LINE(737)
	if ((b->zpp_inner->weak)){
		HX_STACK_LINE(741)
		{
			HX_STACK_LINE(741)
			if (((bool((b != null())) && bool(b->zpp_disp)))){
				HX_STACK_LINE(741)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(741)
			{
				HX_STACK_LINE(741)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(741)
				if ((_this->_immutable)){
					HX_STACK_LINE(741)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(741)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(741)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(741)
			if ((b->zpp_inner->_inuse)){
				HX_STACK_LINE(741)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(741)
			::zpp_nape::geom::ZPP_Vec2 inner = b->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(741)
			b->zpp_inner->outer = null();
			HX_STACK_LINE(741)
			b->zpp_inner = null();
			HX_STACK_LINE(741)
			{
				HX_STACK_LINE(741)
				::nape::geom::Vec2 o = b;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(741)
				o->zpp_pool = null();
				HX_STACK_LINE(741)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(741)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(741)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(741)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(741)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(741)
			{
				HX_STACK_LINE(741)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(741)
				{
					HX_STACK_LINE(741)
					if (((o->outer != null()))){
						HX_STACK_LINE(741)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(741)
						o->outer = null();
					}
					HX_STACK_LINE(741)
					o->_isimmutable = null();
					HX_STACK_LINE(741)
					o->_validate = null();
					HX_STACK_LINE(741)
					o->_invalidate = null();
				}
				HX_STACK_LINE(741)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(741)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(742)
		true;
	}
	else{
		HX_STACK_LINE(744)
		false;
	}
	HX_STACK_LINE(748)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,dsq,return )

Float Vec2_obj::distance( ::nape::geom::Vec2 a,::nape::geom::Vec2 b){
	HX_STACK_PUSH("Vec2::distance","nape/geom/Vec2.hx",759);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(760)
	if (((bool((a != null())) && bool(a->zpp_disp)))){
		HX_STACK_LINE(762)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(765)
	if (((bool((b != null())) && bool(b->zpp_disp)))){
		HX_STACK_LINE(767)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(771)
	if (((bool((a == null())) || bool((b == null()))))){
		HX_STACK_LINE(771)
		hx::Throw (HX_CSTRING("Error: Cannot compute squared distance between null Vec2"));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec2 &b,::nape::geom::Vec2 &a){
			HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",773);
			{
				HX_STACK_LINE(773)
				Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(773)
				Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(773)
				{
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::Vec2 &a){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",773);
							{
								HX_STACK_LINE(773)
								if (((bool((a != null())) && bool(a->zpp_disp)))){
									HX_STACK_LINE(773)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(773)
								{
									HX_STACK_LINE(773)
									::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(773)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(773)
										_this->_validate();
									}
								}
								HX_STACK_LINE(773)
								return a->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static Float Block( ::nape::geom::Vec2 &b){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",773);
							{
								HX_STACK_LINE(773)
								if (((bool((b != null())) && bool(b->zpp_disp)))){
									HX_STACK_LINE(773)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(773)
								{
									HX_STACK_LINE(773)
									::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(773)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(773)
										_this->_validate();
									}
								}
								HX_STACK_LINE(773)
								return b->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(773)
					dx = (_Function_3_1::Block(a) - _Function_3_2::Block(b));
					struct _Function_3_3{
						inline static Float Block( ::nape::geom::Vec2 &a){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",773);
							{
								HX_STACK_LINE(773)
								if (((bool((a != null())) && bool(a->zpp_disp)))){
									HX_STACK_LINE(773)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(773)
								{
									HX_STACK_LINE(773)
									::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(773)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(773)
										_this->_validate();
									}
								}
								HX_STACK_LINE(773)
								return a->zpp_inner->y;
							}
							return null();
						}
					};
					struct _Function_3_4{
						inline static Float Block( ::nape::geom::Vec2 &b){
							HX_STACK_PUSH("*::closure","nape/geom/Vec2.hx",773);
							{
								HX_STACK_LINE(773)
								if (((bool((b != null())) && bool(b->zpp_disp)))){
									HX_STACK_LINE(773)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(773)
								{
									HX_STACK_LINE(773)
									::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(773)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(773)
										_this->_validate();
									}
								}
								HX_STACK_LINE(773)
								return b->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(773)
					dy = (_Function_3_3::Block(a) - _Function_3_4::Block(b));
				}
				HX_STACK_LINE(773)
				return ((dx * dx) + (dy * dy));
			}
			return null();
		}
	};
	HX_STACK_LINE(773)
	Float ret = ::Math_obj::sqrt(_Function_1_1::Block(b,a));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(774)
	if ((a->zpp_inner->weak)){
		HX_STACK_LINE(778)
		{
			HX_STACK_LINE(778)
			if (((bool((a != null())) && bool(a->zpp_disp)))){
				HX_STACK_LINE(778)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(778)
				::zpp_nape::geom::ZPP_Vec2 _this = a->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(778)
				if ((_this->_immutable)){
					HX_STACK_LINE(778)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(778)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(778)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(778)
			if ((a->zpp_inner->_inuse)){
				HX_STACK_LINE(778)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(778)
			::zpp_nape::geom::ZPP_Vec2 inner = a->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(778)
			a->zpp_inner->outer = null();
			HX_STACK_LINE(778)
			a->zpp_inner = null();
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(778)
				::nape::geom::Vec2 o = a;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(778)
				o->zpp_pool = null();
				HX_STACK_LINE(778)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(778)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(778)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(778)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(778)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(778)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(778)
				{
					HX_STACK_LINE(778)
					if (((o->outer != null()))){
						HX_STACK_LINE(778)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(778)
						o->outer = null();
					}
					HX_STACK_LINE(778)
					o->_isimmutable = null();
					HX_STACK_LINE(778)
					o->_validate = null();
					HX_STACK_LINE(778)
					o->_invalidate = null();
				}
				HX_STACK_LINE(778)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(778)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(779)
		true;
	}
	else{
		HX_STACK_LINE(781)
		false;
	}
	HX_STACK_LINE(785)
	if ((b->zpp_inner->weak)){
		HX_STACK_LINE(789)
		{
			HX_STACK_LINE(789)
			if (((bool((b != null())) && bool(b->zpp_disp)))){
				HX_STACK_LINE(789)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				::zpp_nape::geom::ZPP_Vec2 _this = b->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(789)
				if ((_this->_immutable)){
					HX_STACK_LINE(789)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(789)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(789)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(789)
			if ((b->zpp_inner->_inuse)){
				HX_STACK_LINE(789)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(789)
			::zpp_nape::geom::ZPP_Vec2 inner = b->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(789)
			b->zpp_inner->outer = null();
			HX_STACK_LINE(789)
			b->zpp_inner = null();
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				::nape::geom::Vec2 o = b;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(789)
				o->zpp_pool = null();
				HX_STACK_LINE(789)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(789)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(789)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(789)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(789)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					if (((o->outer != null()))){
						HX_STACK_LINE(789)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(789)
						o->outer = null();
					}
					HX_STACK_LINE(789)
					o->_isimmutable = null();
					HX_STACK_LINE(789)
					o->_validate = null();
					HX_STACK_LINE(789)
					o->_invalidate = null();
				}
				HX_STACK_LINE(789)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(789)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(790)
		true;
	}
	else{
		HX_STACK_LINE(792)
		false;
	}
	HX_STACK_LINE(796)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vec2_obj,distance,return )


Vec2_obj::Vec2_obj()
{
}

void Vec2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vec2);
	HX_MARK_MEMBER_NAME(zpp_disp,"zpp_disp");
	HX_MARK_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Vec2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_disp,"zpp_disp");
	HX_VISIT_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Vec2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"dsq") ) { return dsq_dyn(); }
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		if (HX_FIELD_EQ(inName,"mul") ) { return mul_dyn(); }
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"lsq") ) { return lsq_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { return weak_dyn(); }
		if (HX_FIELD_EQ(inName,"perp") ) { return perp_dyn(); }
		if (HX_FIELD_EQ(inName,"unit") ) { return unit_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cross") ) { return cross_dyn(); }
		if (HX_FIELD_EQ(inName,"muleq") ) { return muleq_dyn(); }
		if (HX_FIELD_EQ(inName,"subeq") ) { return subeq_dyn(); }
		if (HX_FIELD_EQ(inName,"addeq") ) { return addeq_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		if (HX_FIELD_EQ(inName,"setxy") ) { return setxy_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addMul") ) { return addMul_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reflect") ) { return reflect_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_disp") ) { return zpp_disp; }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromPolar") ) { return fromPolar_dyn(); }
		if (HX_FIELD_EQ(inName,"normalise") ) { return normalise_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vec2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return set_angle(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return set_length(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_disp") ) { zpp_disp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vec2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("zpp_disp"));
	outFields->push(HX_CSTRING("zpp_pool"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("weak"),
	HX_CSTRING("get"),
	HX_CSTRING("fromPolar"),
	HX_CSTRING("dsq"),
	HX_CSTRING("distance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("perp"),
	HX_CSTRING("cross"),
	HX_CSTRING("dot"),
	HX_CSTRING("muleq"),
	HX_CSTRING("subeq"),
	HX_CSTRING("addeq"),
	HX_CSTRING("mul"),
	HX_CSTRING("sub"),
	HX_CSTRING("addMul"),
	HX_CSTRING("add"),
	HX_CSTRING("unit"),
	HX_CSTRING("normalise"),
	HX_CSTRING("reflect"),
	HX_CSTRING("rotate"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("setxy"),
	HX_CSTRING("set"),
	HX_CSTRING("lsq"),
	HX_CSTRING("set_length"),
	HX_CSTRING("get_length"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_x"),
	HX_CSTRING("copy"),
	HX_CSTRING("dispose"),
	HX_CSTRING("zpp_disp"),
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec2_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec2_obj::__mClass,"__mClass");
};

Class Vec2_obj::__mClass;

void Vec2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.Vec2"), hx::TCanCast< Vec2_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Vec2_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
