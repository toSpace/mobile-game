#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_AABB_obj::__construct()
{
HX_STACK_PUSH("ZPP_AABB::new","zpp_nape/geom/AABB.hx",174);
{
	HX_STACK_LINE(406)
	this->wrap_max = null();
	HX_STACK_LINE(405)
	this->maxy = 0.0;
	HX_STACK_LINE(404)
	this->maxx = 0.0;
	HX_STACK_LINE(341)
	this->wrap_min = null();
	HX_STACK_LINE(340)
	this->miny = 0.0;
	HX_STACK_LINE(339)
	this->minx = 0.0;
	HX_STACK_LINE(217)
	this->next = null();
	HX_STACK_LINE(192)
	this->outer = null();
	HX_STACK_LINE(177)
	this->_immutable = false;
	HX_STACK_LINE(176)
	this->_validate = null();
	HX_STACK_LINE(175)
	this->_invalidate = null();
}
;
	return null();
}

ZPP_AABB_obj::~ZPP_AABB_obj() { }

Dynamic ZPP_AABB_obj::__CreateEmpty() { return  new ZPP_AABB_obj; }
hx::ObjectPtr< ZPP_AABB_obj > ZPP_AABB_obj::__new()
{  hx::ObjectPtr< ZPP_AABB_obj > result = new ZPP_AABB_obj();
	result->__construct();
	return result;}

Dynamic ZPP_AABB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AABB_obj > result = new ZPP_AABB_obj();
	result->__construct();
	return result;}

::String ZPP_AABB_obj::toString( ){
	HX_STACK_PUSH("ZPP_AABB::toString","zpp_nape/geom/AABB.hx",526);
	HX_STACK_THIS(this);
	HX_STACK_LINE(526)
	return ((((((((HX_CSTRING("{ x: ") + this->minx) + HX_CSTRING(" y: ")) + this->miny) + HX_CSTRING(" w: ")) + ((this->maxx - this->minx))) + HX_CSTRING(" h: ")) + ((this->maxy - this->miny))) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,toString,return )

Void ZPP_AABB_obj::setExpandPoint( Float x,Float y){
{
		HX_STACK_PUSH("ZPP_AABB::setExpandPoint","zpp_nape/geom/AABB.hx",520);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(521)
		if (((x < this->minx))){
			HX_STACK_LINE(521)
			this->minx = x;
		}
		HX_STACK_LINE(522)
		if (((x > this->maxx))){
			HX_STACK_LINE(522)
			this->maxx = x;
		}
		HX_STACK_LINE(523)
		if (((y < this->miny))){
			HX_STACK_LINE(523)
			this->miny = y;
		}
		HX_STACK_LINE(524)
		if (((y > this->maxy))){
			HX_STACK_LINE(524)
			this->maxy = y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_AABB_obj,setExpandPoint,(void))

Void ZPP_AABB_obj::setExpand( ::zpp_nape::geom::ZPP_AABB a,Float fatten){
{
		HX_STACK_PUSH("ZPP_AABB::setExpand","zpp_nape/geom/AABB.hx",512);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(fatten,"fatten");
		HX_STACK_LINE(513)
		this->minx = (a->minx - fatten);
		HX_STACK_LINE(514)
		this->miny = (a->miny - fatten);
		HX_STACK_LINE(515)
		this->maxx = (a->maxx + fatten);
		HX_STACK_LINE(516)
		this->maxy = (a->maxy + fatten);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_AABB_obj,setExpand,(void))

Void ZPP_AABB_obj::setCombine( ::zpp_nape::geom::ZPP_AABB a,::zpp_nape::geom::ZPP_AABB b){
{
		HX_STACK_PUSH("ZPP_AABB::setCombine","zpp_nape/geom/AABB.hx",504);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(505)
		this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
		HX_STACK_LINE(506)
		this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
		HX_STACK_LINE(507)
		this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
		HX_STACK_LINE(508)
		this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_AABB_obj,setCombine,(void))

bool ZPP_AABB_obj::containsPoint( ::zpp_nape::geom::ZPP_Vec2 v){
	HX_STACK_PUSH("ZPP_AABB::containsPoint","zpp_nape/geom/AABB.hx",499);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(499)
	return (bool((bool((bool((v->x >= this->minx)) && bool((v->x <= this->maxx)))) && bool((v->y >= this->miny)))) && bool((v->y <= this->maxy)));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,containsPoint,return )

bool ZPP_AABB_obj::contains( ::zpp_nape::geom::ZPP_AABB x){
	HX_STACK_PUSH("ZPP_AABB::contains","zpp_nape/geom/AABB.hx",494);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(494)
	return (bool((bool((bool((x->minx >= this->minx)) && bool((x->miny >= this->miny)))) && bool((x->maxx <= this->maxx)))) && bool((x->maxy <= this->maxy)));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,contains,return )

Void ZPP_AABB_obj::combine( ::zpp_nape::geom::ZPP_AABB x){
{
		HX_STACK_PUSH("ZPP_AABB::combine","zpp_nape/geom/AABB.hx",486);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(487)
		if (((x->minx < this->minx))){
			HX_STACK_LINE(487)
			this->minx = x->minx;
		}
		HX_STACK_LINE(488)
		if (((x->maxx > this->maxx))){
			HX_STACK_LINE(488)
			this->maxx = x->maxx;
		}
		HX_STACK_LINE(489)
		if (((x->miny < this->miny))){
			HX_STACK_LINE(489)
			this->miny = x->miny;
		}
		HX_STACK_LINE(490)
		if (((x->maxy > this->maxy))){
			HX_STACK_LINE(490)
			this->maxy = x->maxy;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,combine,(void))

bool ZPP_AABB_obj::intersect( ::zpp_nape::geom::ZPP_AABB x){
	HX_STACK_PUSH("ZPP_AABB::intersect","zpp_nape/geom/AABB.hx",481);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(481)
	return (bool((bool((bool((x->miny <= this->maxy)) && bool((this->miny <= x->maxy)))) && bool((x->minx <= this->maxx)))) && bool((this->minx <= x->maxx)));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,intersect,return )

bool ZPP_AABB_obj::intersectY( ::zpp_nape::geom::ZPP_AABB x){
	HX_STACK_PUSH("ZPP_AABB::intersectY","zpp_nape/geom/AABB.hx",476);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(476)
	return !(((bool((x->miny > this->maxy)) || bool((this->miny > x->maxy)))));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,intersectY,return )

bool ZPP_AABB_obj::intersectX( ::zpp_nape::geom::ZPP_AABB x){
	HX_STACK_PUSH("ZPP_AABB::intersectX","zpp_nape/geom/AABB.hx",471);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(471)
	return !(((bool((x->minx > this->maxx)) || bool((this->minx > x->maxx)))));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,intersectX,return )

Void ZPP_AABB_obj::mod_max( ::zpp_nape::geom::ZPP_Vec2 max){
{
		HX_STACK_PUSH("ZPP_AABB::mod_max","zpp_nape/geom/AABB.hx",444);
		HX_STACK_THIS(this);
		HX_STACK_ARG(max,"max");
		HX_STACK_LINE(444)
		if (((bool((max->x != this->maxx)) || bool((max->y != this->maxy))))){
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(447)
				this->maxx = max->x;
				HX_STACK_LINE(448)
				this->maxy = max->y;
				HX_STACK_LINE(449)
				{
				}
				HX_STACK_LINE(457)
				{
				}
			}
			HX_STACK_LINE(466)
			if (((this->_invalidate_dyn() != null()))){
				HX_STACK_LINE(466)
				this->_invalidate(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,mod_max,(void))

Void ZPP_AABB_obj::dom_max( ){
{
		HX_STACK_PUSH("ZPP_AABB::dom_max","zpp_nape/geom/AABB.hx",421);
		HX_STACK_THIS(this);
		HX_STACK_LINE(422)
		if (((this->_validate_dyn() != null()))){
			HX_STACK_LINE(422)
			this->_validate();
		}
		HX_STACK_LINE(423)
		{
			HX_STACK_LINE(424)
			this->wrap_max->zpp_inner->x = this->maxx;
			HX_STACK_LINE(425)
			this->wrap_max->zpp_inner->y = this->maxy;
			HX_STACK_LINE(426)
			{
			}
			HX_STACK_LINE(434)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,dom_max,(void))

::nape::geom::Vec2 ZPP_AABB_obj::getmax( ){
	HX_STACK_PUSH("ZPP_AABB::getmax","zpp_nape/geom/AABB.hx",407);
	HX_STACK_THIS(this);
	HX_STACK_LINE(408)
	if (((this->wrap_max == null()))){
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_AABB_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/AABB.hx",409);
				{
					HX_STACK_LINE(409)
					Float x = __this->maxx;		HX_STACK_VAR(x,"x");
					Float y = __this->maxy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(409)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(409)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(409)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(409)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(409)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(409)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(409)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(409)
						ret->zpp_pool = null();
						HX_STACK_LINE(409)
						ret->zpp_disp = false;
						HX_STACK_LINE(409)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(409)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(409)
					if (((ret->zpp_inner == null()))){
						struct _Function_4_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/AABB.hx",409);
								{
									HX_STACK_LINE(409)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(409)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(409)
									{
										HX_STACK_LINE(409)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(409)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(409)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(409)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(409)
											ret1->next = null();
										}
										HX_STACK_LINE(409)
										ret1->weak = false;
									}
									HX_STACK_LINE(409)
									ret1->_immutable = immutable;
									HX_STACK_LINE(409)
									{
										HX_STACK_LINE(409)
										ret1->x = x;
										HX_STACK_LINE(409)
										ret1->y = y;
										HX_STACK_LINE(409)
										{
										}
										HX_STACK_LINE(409)
										{
										}
									}
									HX_STACK_LINE(409)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(409)
						ret->zpp_inner = _Function_4_1::Block(x,y);
						HX_STACK_LINE(409)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(409)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(409)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(409)
						{
							HX_STACK_LINE(409)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(409)
							if ((_this->_immutable)){
								HX_STACK_LINE(409)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(409)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(409)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(409)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(409)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/AABB.hx",409);
								{
									HX_STACK_LINE(409)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(409)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(409)
									{
										HX_STACK_LINE(409)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(409)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(409)
											_this->_validate();
										}
									}
									HX_STACK_LINE(409)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/AABB.hx",409);
								{
									HX_STACK_LINE(409)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(409)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(409)
									{
										HX_STACK_LINE(409)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(409)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(409)
											_this->_validate();
										}
									}
									HX_STACK_LINE(409)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(409)
						if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
							HX_STACK_LINE(409)
							{
								HX_STACK_LINE(409)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(409)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(409)
								{
								}
								HX_STACK_LINE(409)
								{
								}
							}
							HX_STACK_LINE(409)
							{
								HX_STACK_LINE(409)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(409)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(409)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(409)
						ret;
					}
					HX_STACK_LINE(409)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(409)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(409)
		this->wrap_max = _Function_2_1::Block(this);
		HX_STACK_LINE(410)
		this->wrap_max->zpp_inner->_inuse = true;
		HX_STACK_LINE(411)
		if ((this->_immutable)){
			HX_STACK_LINE(411)
			this->wrap_max->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(414)
			this->wrap_max->zpp_inner->_invalidate = this->mod_max_dyn();
		}
		HX_STACK_LINE(417)
		this->wrap_max->zpp_inner->_validate = this->dom_max_dyn();
	}
	HX_STACK_LINE(419)
	return this->wrap_max;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,getmax,return )

Void ZPP_AABB_obj::mod_min( ::zpp_nape::geom::ZPP_Vec2 min){
{
		HX_STACK_PUSH("ZPP_AABB::mod_min","zpp_nape/geom/AABB.hx",379);
		HX_STACK_THIS(this);
		HX_STACK_ARG(min,"min");
		HX_STACK_LINE(379)
		if (((bool((min->x != this->minx)) || bool((min->y != this->miny))))){
			HX_STACK_LINE(381)
			{
				HX_STACK_LINE(382)
				this->minx = min->x;
				HX_STACK_LINE(383)
				this->miny = min->y;
				HX_STACK_LINE(384)
				{
				}
				HX_STACK_LINE(392)
				{
				}
			}
			HX_STACK_LINE(401)
			if (((this->_invalidate_dyn() != null()))){
				HX_STACK_LINE(401)
				this->_invalidate(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABB_obj,mod_min,(void))

Void ZPP_AABB_obj::dom_min( ){
{
		HX_STACK_PUSH("ZPP_AABB::dom_min","zpp_nape/geom/AABB.hx",356);
		HX_STACK_THIS(this);
		HX_STACK_LINE(357)
		if (((this->_validate_dyn() != null()))){
			HX_STACK_LINE(357)
			this->_validate();
		}
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(359)
			this->wrap_min->zpp_inner->x = this->minx;
			HX_STACK_LINE(360)
			this->wrap_min->zpp_inner->y = this->miny;
			HX_STACK_LINE(361)
			{
			}
			HX_STACK_LINE(369)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,dom_min,(void))

::nape::geom::Vec2 ZPP_AABB_obj::getmin( ){
	HX_STACK_PUSH("ZPP_AABB::getmin","zpp_nape/geom/AABB.hx",342);
	HX_STACK_THIS(this);
	HX_STACK_LINE(343)
	if (((this->wrap_min == null()))){
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_AABB_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/AABB.hx",344);
				{
					HX_STACK_LINE(344)
					Float x = __this->minx;		HX_STACK_VAR(x,"x");
					Float y = __this->miny;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(344)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(344)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(344)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(344)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(344)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(344)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(344)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(344)
						ret->zpp_pool = null();
						HX_STACK_LINE(344)
						ret->zpp_disp = false;
						HX_STACK_LINE(344)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(344)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(344)
					if (((ret->zpp_inner == null()))){
						struct _Function_4_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/AABB.hx",344);
								{
									HX_STACK_LINE(344)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(344)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(344)
									{
										HX_STACK_LINE(344)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(344)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(344)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(344)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(344)
											ret1->next = null();
										}
										HX_STACK_LINE(344)
										ret1->weak = false;
									}
									HX_STACK_LINE(344)
									ret1->_immutable = immutable;
									HX_STACK_LINE(344)
									{
										HX_STACK_LINE(344)
										ret1->x = x;
										HX_STACK_LINE(344)
										ret1->y = y;
										HX_STACK_LINE(344)
										{
										}
										HX_STACK_LINE(344)
										{
										}
									}
									HX_STACK_LINE(344)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(344)
						ret->zpp_inner = _Function_4_1::Block(x,y);
						HX_STACK_LINE(344)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(344)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(344)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(344)
							if ((_this->_immutable)){
								HX_STACK_LINE(344)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(344)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(344)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(344)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(344)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/AABB.hx",344);
								{
									HX_STACK_LINE(344)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(344)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(344)
									{
										HX_STACK_LINE(344)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(344)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(344)
											_this->_validate();
										}
									}
									HX_STACK_LINE(344)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/AABB.hx",344);
								{
									HX_STACK_LINE(344)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(344)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(344)
									{
										HX_STACK_LINE(344)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(344)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(344)
											_this->_validate();
										}
									}
									HX_STACK_LINE(344)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(344)
						if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(344)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(344)
								{
								}
								HX_STACK_LINE(344)
								{
								}
							}
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(344)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(344)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(344)
						ret;
					}
					HX_STACK_LINE(344)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(344)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(344)
		this->wrap_min = _Function_2_1::Block(this);
		HX_STACK_LINE(345)
		this->wrap_min->zpp_inner->_inuse = true;
		HX_STACK_LINE(346)
		if ((this->_immutable)){
			HX_STACK_LINE(346)
			this->wrap_min->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(349)
			this->wrap_min->zpp_inner->_invalidate = this->mod_min_dyn();
		}
		HX_STACK_LINE(352)
		this->wrap_min->zpp_inner->_validate = this->dom_min_dyn();
	}
	HX_STACK_LINE(354)
	return this->wrap_min;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,getmin,return )

Float ZPP_AABB_obj::perimeter( ){
	HX_STACK_PUSH("ZPP_AABB::perimeter","zpp_nape/geom/AABB.hx",336);
	HX_STACK_THIS(this);
	HX_STACK_LINE(336)
	return ((((this->maxx - this->minx) + ((this->maxy - this->miny)))) * (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,perimeter,return )

Float ZPP_AABB_obj::height( ){
	HX_STACK_PUSH("ZPP_AABB::height","zpp_nape/geom/AABB.hx",331);
	HX_STACK_THIS(this);
	HX_STACK_LINE(331)
	return (this->maxy - this->miny);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,height,return )

Float ZPP_AABB_obj::width( ){
	HX_STACK_PUSH("ZPP_AABB::width","zpp_nape/geom/AABB.hx",326);
	HX_STACK_THIS(this);
	HX_STACK_LINE(326)
	return (this->maxx - this->minx);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,width,return )

::zpp_nape::geom::ZPP_AABB ZPP_AABB_obj::copy( ){
	HX_STACK_PUSH("ZPP_AABB::copy","zpp_nape/geom/AABB.hx",321);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_AABB Block( ::zpp_nape::geom::ZPP_AABB_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/AABB.hx",322);
			{
				HX_STACK_LINE(322)
				::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(322)
				{
					HX_STACK_LINE(322)
					if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
						HX_STACK_LINE(322)
						ret = ::zpp_nape::geom::ZPP_AABB_obj::__new();
					}
					else{
						HX_STACK_LINE(322)
						ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
						HX_STACK_LINE(322)
						::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
						HX_STACK_LINE(322)
						ret->next = null();
					}
					HX_STACK_LINE(322)
					Dynamic();
				}
				HX_STACK_LINE(322)
				{
					HX_STACK_LINE(322)
					ret->minx = __this->minx;
					HX_STACK_LINE(322)
					ret->miny = __this->miny;
					HX_STACK_LINE(322)
					{
					}
					HX_STACK_LINE(322)
					{
					}
				}
				HX_STACK_LINE(322)
				{
					HX_STACK_LINE(322)
					ret->maxx = __this->maxx;
					HX_STACK_LINE(322)
					ret->maxy = __this->maxy;
					HX_STACK_LINE(322)
					{
					}
					HX_STACK_LINE(322)
					{
					}
				}
				HX_STACK_LINE(322)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(321)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,copy,return )

Void ZPP_AABB_obj::free( ){
{
		HX_STACK_PUSH("ZPP_AABB::free","zpp_nape/geom/AABB.hx",247);
		HX_STACK_THIS(this);
		HX_STACK_LINE(248)
		if (((this->outer != null()))){
			HX_STACK_LINE(249)
			this->outer->zpp_inner = null();
			HX_STACK_LINE(250)
			this->outer = null();
		}
		HX_STACK_LINE(252)
		this->wrap_min = this->wrap_max = null();
		HX_STACK_LINE(253)
		this->_invalidate = null();
		HX_STACK_LINE(254)
		this->_validate = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,free,(void))

Void ZPP_AABB_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_AABB::alloc","zpp_nape/geom/AABB.hx",244);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,alloc,(void))

::nape::geom::AABB ZPP_AABB_obj::wrapper( ){
	HX_STACK_PUSH("ZPP_AABB::wrapper","zpp_nape/geom/AABB.hx",193);
	HX_STACK_THIS(this);
	HX_STACK_LINE(194)
	if (((this->outer == null()))){
		HX_STACK_LINE(195)
		this->outer = ::nape::geom::AABB_obj::__new(null(),null(),null(),null());
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(197)
			::zpp_nape::geom::ZPP_AABB o = this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(198)
			{
			}
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				if (((o->outer != null()))){
					HX_STACK_LINE(206)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(206)
					o->outer = null();
				}
				HX_STACK_LINE(206)
				o->wrap_min = o->wrap_max = null();
				HX_STACK_LINE(206)
				o->_invalidate = null();
				HX_STACK_LINE(206)
				o->_validate = null();
			}
			HX_STACK_LINE(207)
			o->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
			HX_STACK_LINE(208)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o;
		}
		HX_STACK_LINE(213)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(215)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,wrapper,return )

Void ZPP_AABB_obj::invalidate( ){
{
		HX_STACK_PUSH("ZPP_AABB::invalidate","zpp_nape/geom/AABB.hx",187);
		HX_STACK_THIS(this);
		HX_STACK_LINE(187)
		if (((this->_invalidate_dyn() != null()))){
			HX_STACK_LINE(188)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,invalidate,(void))

Void ZPP_AABB_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_AABB::validate","zpp_nape/geom/AABB.hx",180);
		HX_STACK_THIS(this);
		HX_STACK_LINE(180)
		if (((this->_validate_dyn() != null()))){
			HX_STACK_LINE(181)
			this->_validate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABB_obj,validate,(void))

::zpp_nape::geom::ZPP_AABB ZPP_AABB_obj::zpp_pool;

::zpp_nape::geom::ZPP_AABB ZPP_AABB_obj::get( Float minx,Float miny,Float maxx,Float maxy){
	HX_STACK_PUSH("ZPP_AABB::get","zpp_nape/geom/AABB.hx",258);
	HX_STACK_ARG(minx,"minx");
	HX_STACK_ARG(miny,"miny");
	HX_STACK_ARG(maxx,"maxx");
	HX_STACK_ARG(maxy,"maxy");
	HX_STACK_LINE(259)
	::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(260)
	{
		HX_STACK_LINE(261)
		if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
			HX_STACK_LINE(261)
			ret = ::zpp_nape::geom::ZPP_AABB_obj::__new();
		}
		else{
			HX_STACK_LINE(268)
			ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
			HX_STACK_LINE(269)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
			HX_STACK_LINE(270)
			ret->next = null();
		}
		HX_STACK_LINE(275)
		Dynamic();
	}
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(278)
		ret->minx = minx;
		HX_STACK_LINE(279)
		ret->miny = miny;
		HX_STACK_LINE(280)
		{
		}
		HX_STACK_LINE(288)
		{
		}
	}
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(298)
		ret->maxx = maxx;
		HX_STACK_LINE(299)
		ret->maxy = maxy;
		HX_STACK_LINE(300)
		{
		}
		HX_STACK_LINE(308)
		{
		}
	}
	HX_STACK_LINE(317)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_AABB_obj,get,return )


ZPP_AABB_obj::ZPP_AABB_obj()
{
}

void ZPP_AABB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AABB);
	HX_MARK_MEMBER_NAME(wrap_max,"wrap_max");
	HX_MARK_MEMBER_NAME(maxy,"maxy");
	HX_MARK_MEMBER_NAME(maxx,"maxx");
	HX_MARK_MEMBER_NAME(wrap_min,"wrap_min");
	HX_MARK_MEMBER_NAME(miny,"miny");
	HX_MARK_MEMBER_NAME(minx,"minx");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(_immutable,"_immutable");
	HX_MARK_MEMBER_NAME(_validate,"_validate");
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_END_CLASS();
}

void ZPP_AABB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wrap_max,"wrap_max");
	HX_VISIT_MEMBER_NAME(maxy,"maxy");
	HX_VISIT_MEMBER_NAME(maxx,"maxx");
	HX_VISIT_MEMBER_NAME(wrap_min,"wrap_min");
	HX_VISIT_MEMBER_NAME(miny,"miny");
	HX_VISIT_MEMBER_NAME(minx,"minx");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(_immutable,"_immutable");
	HX_VISIT_MEMBER_NAME(_validate,"_validate");
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
}

Dynamic ZPP_AABB_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"maxy") ) { return maxy; }
		if (HX_FIELD_EQ(inName,"maxx") ) { return maxx; }
		if (HX_FIELD_EQ(inName,"miny") ) { return miny; }
		if (HX_FIELD_EQ(inName,"minx") ) { return minx; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width_dyn(); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getmax") ) { return getmax_dyn(); }
		if (HX_FIELD_EQ(inName,"getmin") ) { return getmin_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"combine") ) { return combine_dyn(); }
		if (HX_FIELD_EQ(inName,"mod_max") ) { return mod_max_dyn(); }
		if (HX_FIELD_EQ(inName,"dom_max") ) { return dom_max_dyn(); }
		if (HX_FIELD_EQ(inName,"mod_min") ) { return mod_min_dyn(); }
		if (HX_FIELD_EQ(inName,"dom_min") ) { return dom_min_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_max") ) { return wrap_max; }
		if (HX_FIELD_EQ(inName,"wrap_min") ) { return wrap_min; }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setExpand") ) { return setExpand_dyn(); }
		if (HX_FIELD_EQ(inName,"intersect") ) { return intersect_dyn(); }
		if (HX_FIELD_EQ(inName,"perimeter") ) { return perimeter_dyn(); }
		if (HX_FIELD_EQ(inName,"_validate") ) { return _validate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setCombine") ) { return setCombine_dyn(); }
		if (HX_FIELD_EQ(inName,"intersectY") ) { return intersectY_dyn(); }
		if (HX_FIELD_EQ(inName,"intersectX") ) { return intersectX_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"_immutable") ) { return _immutable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return _invalidate; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setExpandPoint") ) { return setExpandPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_AABB_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"maxy") ) { maxy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxx") ) { maxx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"miny") ) { miny=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minx") ) { minx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::AABB >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_max") ) { wrap_max=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_min") ) { wrap_min=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { _validate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_immutable") ) { _immutable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_AABB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("wrap_max"));
	outFields->push(HX_CSTRING("maxy"));
	outFields->push(HX_CSTRING("maxx"));
	outFields->push(HX_CSTRING("wrap_min"));
	outFields->push(HX_CSTRING("miny"));
	outFields->push(HX_CSTRING("minx"));
	outFields->push(HX_CSTRING("next"));
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
	HX_CSTRING("setExpandPoint"),
	HX_CSTRING("setExpand"),
	HX_CSTRING("setCombine"),
	HX_CSTRING("containsPoint"),
	HX_CSTRING("contains"),
	HX_CSTRING("combine"),
	HX_CSTRING("intersect"),
	HX_CSTRING("intersectY"),
	HX_CSTRING("intersectX"),
	HX_CSTRING("mod_max"),
	HX_CSTRING("dom_max"),
	HX_CSTRING("getmax"),
	HX_CSTRING("wrap_max"),
	HX_CSTRING("maxy"),
	HX_CSTRING("maxx"),
	HX_CSTRING("mod_min"),
	HX_CSTRING("dom_min"),
	HX_CSTRING("getmin"),
	HX_CSTRING("wrap_min"),
	HX_CSTRING("miny"),
	HX_CSTRING("minx"),
	HX_CSTRING("perimeter"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("copy"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("next"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("outer"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("validate"),
	HX_CSTRING("_immutable"),
	HX_CSTRING("_validate"),
	HX_CSTRING("_invalidate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AABB_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_AABB_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AABB_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_AABB_obj::zpp_pool,"zpp_pool");
};

Class ZPP_AABB_obj::__mClass;

void ZPP_AABB_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_AABB"), hx::TCanCast< ZPP_AABB_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_AABB_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
