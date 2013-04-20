#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Debug_obj::__construct(int width,int height)
{
HX_STACK_PUSH("ZPP_Debug::new","zpp_nape/util/Debug.hx",174);
{
	HX_STACK_LINE(269)
	this->tmpab = null();
	HX_STACK_LINE(191)
	this->iport = null();
	HX_STACK_LINE(190)
	this->viewport = null();
	HX_STACK_LINE(189)
	this->height = (int)0;
	HX_STACK_LINE(188)
	this->width = (int)0;
	HX_STACK_LINE(187)
	this->xdet = 0.0;
	HX_STACK_LINE(186)
	this->xnull = false;
	HX_STACK_LINE(185)
	this->xform = null();
	HX_STACK_LINE(184)
	this->bg_col = (int)0;
	HX_STACK_LINE(183)
	this->bg_b = 0.0;
	HX_STACK_LINE(182)
	this->bg_g = 0.0;
	HX_STACK_LINE(181)
	this->bg_r = 0.0;
	HX_STACK_LINE(180)
	this->d_shape = null();
	HX_STACK_LINE(177)
	this->isbmp = false;
	HX_STACK_LINE(176)
	this->outer = null();
	HX_STACK_LINE(193)
	this->xnull = true;
	HX_STACK_LINE(194)
	this->xdet = 1.0;
	HX_STACK_LINE(195)
	this->width = width;
	HX_STACK_LINE(196)
	this->height = height;
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_AABB Block( int &width,int &height){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",197);
			{
				HX_STACK_LINE(197)
				::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
						HX_STACK_LINE(197)
						ret = ::zpp_nape::geom::ZPP_AABB_obj::__new();
					}
					else{
						HX_STACK_LINE(197)
						ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
						HX_STACK_LINE(197)
						::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
						HX_STACK_LINE(197)
						ret->next = null();
					}
					HX_STACK_LINE(197)
					Dynamic();
				}
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					ret->minx = (int)0;
					HX_STACK_LINE(197)
					ret->miny = (int)0;
					HX_STACK_LINE(197)
					{
					}
					HX_STACK_LINE(197)
					{
					}
				}
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					ret->maxx = width;
					HX_STACK_LINE(197)
					ret->maxy = height;
					HX_STACK_LINE(197)
					{
					}
					HX_STACK_LINE(197)
					{
					}
				}
				HX_STACK_LINE(197)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(197)
	this->viewport = _Function_1_1::Block(width,height);
	struct _Function_1_2{
		inline static ::zpp_nape::geom::ZPP_AABB Block( int &width,int &height){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",198);
			{
				HX_STACK_LINE(198)
				::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(198)
				{
					HX_STACK_LINE(198)
					if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
						HX_STACK_LINE(198)
						ret = ::zpp_nape::geom::ZPP_AABB_obj::__new();
					}
					else{
						HX_STACK_LINE(198)
						ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
						HX_STACK_LINE(198)
						::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
						HX_STACK_LINE(198)
						ret->next = null();
					}
					HX_STACK_LINE(198)
					Dynamic();
				}
				HX_STACK_LINE(198)
				{
					HX_STACK_LINE(198)
					ret->minx = (int)0;
					HX_STACK_LINE(198)
					ret->miny = (int)0;
					HX_STACK_LINE(198)
					{
					}
					HX_STACK_LINE(198)
					{
					}
				}
				HX_STACK_LINE(198)
				{
					HX_STACK_LINE(198)
					ret->maxx = width;
					HX_STACK_LINE(198)
					ret->maxy = height;
					HX_STACK_LINE(198)
					{
					}
					HX_STACK_LINE(198)
					{
					}
				}
				HX_STACK_LINE(198)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(198)
	this->iport = _Function_1_2::Block(width,height);
	HX_STACK_LINE(199)
	this->tmpab = ::zpp_nape::geom::ZPP_AABB_obj::__new();
}
;
	return null();
}

ZPP_Debug_obj::~ZPP_Debug_obj() { }

Dynamic ZPP_Debug_obj::__CreateEmpty() { return  new ZPP_Debug_obj; }
hx::ObjectPtr< ZPP_Debug_obj > ZPP_Debug_obj::__new(int width,int height)
{  hx::ObjectPtr< ZPP_Debug_obj > result = new ZPP_Debug_obj();
	result->__construct(width,height);
	return result;}

Dynamic ZPP_Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Debug_obj > result = new ZPP_Debug_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ZPP_Debug_obj::sup_setbg( int bgcol){
{
		HX_STACK_PUSH("ZPP_Debug::sup_setbg","zpp_nape/util/Debug.hx",422);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bgcol,"bgcol");
		HX_STACK_LINE(423)
		this->bg_r = (int((int(bgcol) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(424)
		this->bg_g = (int((int(bgcol) >> int((int)8))) & int((int)255));
		HX_STACK_LINE(425)
		this->bg_b = (int(bgcol) & int((int)255));
		HX_STACK_LINE(426)
		this->bg_col = bgcol;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Debug_obj,sup_setbg,(void))

bool ZPP_Debug_obj::cull( ::zpp_nape::geom::ZPP_AABB aabb){
	HX_STACK_PUSH("ZPP_Debug::cull","zpp_nape/util/Debug.hx",270);
	HX_STACK_THIS(this);
	HX_STACK_ARG(aabb,"aabb");
	HX_STACK_LINE(270)
	if ((this->xnull)){
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::util::ZPP_Debug_obj *__this,::zpp_nape::geom::ZPP_AABB &aabb){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",271);
				{
					HX_STACK_LINE(271)
					::zpp_nape::geom::ZPP_AABB x = __this->viewport;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(271)
					return (bool((bool((bool((x->miny <= aabb->maxy)) && bool((aabb->miny <= x->maxy)))) && bool((x->minx <= aabb->maxx)))) && bool((aabb->minx <= x->maxx)));
				}
				return null();
			}
		};
		HX_STACK_LINE(271)
		return _Function_2_1::Block(this,aabb);
	}
	else{
		HX_STACK_LINE(273)
		Float qx = 0.0;		HX_STACK_VAR(qx,"qx");
		HX_STACK_LINE(274)
		Float qy = 0.0;		HX_STACK_VAR(qy,"qy");
		HX_STACK_LINE(275)
		Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
		HX_STACK_LINE(276)
		Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(278)
			vx = aabb->minx;
			HX_STACK_LINE(279)
			vy = aabb->miny;
			HX_STACK_LINE(280)
			{
			}
			HX_STACK_LINE(288)
			{
			}
		}
		HX_STACK_LINE(317)
		{
			HX_STACK_LINE(318)
			this->tmpab->minx = (((this->xform->a * vx) + (this->xform->b * vy)) + this->xform->tx);
			HX_STACK_LINE(319)
			this->tmpab->miny = (((this->xform->c * vx) + (this->xform->d * vy)) + this->xform->ty);
		}
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(322)
			this->tmpab->maxx = this->tmpab->minx;
			HX_STACK_LINE(323)
			this->tmpab->maxy = this->tmpab->miny;
			HX_STACK_LINE(324)
			{
			}
			HX_STACK_LINE(332)
			{
			}
		}
		HX_STACK_LINE(341)
		vx = aabb->maxx;
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(363)
			qx = (((this->xform->a * vx) + (this->xform->b * vy)) + this->xform->tx);
			HX_STACK_LINE(364)
			qy = (((this->xform->c * vx) + (this->xform->d * vy)) + this->xform->ty);
		}
		HX_STACK_LINE(366)
		{
			HX_STACK_LINE(366)
			::zpp_nape::geom::ZPP_AABB _this = this->tmpab;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(366)
			if (((qx < _this->minx))){
				HX_STACK_LINE(366)
				_this->minx = qx;
			}
			HX_STACK_LINE(366)
			if (((qx > _this->maxx))){
				HX_STACK_LINE(366)
				_this->maxx = qx;
			}
			HX_STACK_LINE(366)
			if (((qy < _this->miny))){
				HX_STACK_LINE(366)
				_this->miny = qy;
			}
			HX_STACK_LINE(366)
			if (((qy > _this->maxy))){
				HX_STACK_LINE(366)
				_this->maxy = qy;
			}
		}
		HX_STACK_LINE(367)
		vy = aabb->maxy;
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(389)
			qx = (((this->xform->a * vx) + (this->xform->b * vy)) + this->xform->tx);
			HX_STACK_LINE(390)
			qy = (((this->xform->c * vx) + (this->xform->d * vy)) + this->xform->ty);
		}
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			::zpp_nape::geom::ZPP_AABB _this = this->tmpab;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(392)
			if (((qx < _this->minx))){
				HX_STACK_LINE(392)
				_this->minx = qx;
			}
			HX_STACK_LINE(392)
			if (((qx > _this->maxx))){
				HX_STACK_LINE(392)
				_this->maxx = qx;
			}
			HX_STACK_LINE(392)
			if (((qy < _this->miny))){
				HX_STACK_LINE(392)
				_this->miny = qy;
			}
			HX_STACK_LINE(392)
			if (((qy > _this->maxy))){
				HX_STACK_LINE(392)
				_this->maxy = qy;
			}
		}
		HX_STACK_LINE(393)
		vx = aabb->minx;
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(415)
			qx = (((this->xform->a * vx) + (this->xform->b * vy)) + this->xform->tx);
			HX_STACK_LINE(416)
			qy = (((this->xform->c * vx) + (this->xform->d * vy)) + this->xform->ty);
		}
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			::zpp_nape::geom::ZPP_AABB _this = this->tmpab;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(418)
			if (((qx < _this->minx))){
				HX_STACK_LINE(418)
				_this->minx = qx;
			}
			HX_STACK_LINE(418)
			if (((qx > _this->maxx))){
				HX_STACK_LINE(418)
				_this->maxx = qx;
			}
			HX_STACK_LINE(418)
			if (((qy < _this->miny))){
				HX_STACK_LINE(418)
				_this->miny = qy;
			}
			HX_STACK_LINE(418)
			if (((qy > _this->maxy))){
				HX_STACK_LINE(418)
				_this->maxy = qy;
			}
		}
		struct _Function_2_1{
			inline static bool Block( ::zpp_nape::util::ZPP_Debug_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",419);
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_AABB _this = __this->tmpab;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB x = __this->viewport;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(419)
					return (bool((bool((bool((x->miny <= _this->maxy)) && bool((_this->miny <= x->maxy)))) && bool((x->minx <= _this->maxx)))) && bool((_this->minx <= x->maxx)));
				}
				return null();
			}
		};
		HX_STACK_LINE(419)
		return _Function_2_1::Block(this);
	}
	HX_STACK_LINE(270)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Debug_obj,cull,return )

Void ZPP_Debug_obj::setform( ){
{
		HX_STACK_PUSH("ZPP_Debug::setform","zpp_nape/util/Debug.hx",265);
		HX_STACK_THIS(this);
		HX_STACK_LINE(266)
		this->xform = ::nape::geom::Mat23_obj::__new(null(),null(),null(),null(),null(),null())->zpp_inner;
		HX_STACK_LINE(267)
		this->xform->_invalidate = this->xform_invalidate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Debug_obj,setform,(void))

Void ZPP_Debug_obj::xform_invalidate( ){
{
		HX_STACK_PUSH("ZPP_Debug::xform_invalidate","zpp_nape/util/Debug.hx",201);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Float Block( ::zpp_nape::util::ZPP_Debug_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",202);
				{
					HX_STACK_LINE(202)
					{
					}
					struct _Function_2_1{
						inline static Float Block( ::zpp_nape::util::ZPP_Debug_obj *__this){
							HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",202);
							{
								struct _Function_3_1{
									inline static Float Block( ::zpp_nape::util::ZPP_Debug_obj *__this){
										HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",203);
										{
											HX_STACK_LINE(203)
											::nape::geom::Mat23 _this = __this->xform->outer;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(203)
											return ((_this->zpp_inner->a * _this->zpp_inner->d) - (_this->zpp_inner->b * _this->zpp_inner->c));
										}
										return null();
									}
								};
								HX_STACK_LINE(203)
								Float x = _Function_3_1::Block(__this);		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(204)
								return (  (((x < (int)0))) ? Float(-(x)) : Float(x) );
							}
							return null();
						}
					};
					HX_STACK_LINE(202)
					return ::Math_obj::sqrt(_Function_2_1::Block(__this));
				}
				return null();
			}
		};
		HX_STACK_LINE(202)
		this->xdet = _Function_1_1::Block(this);
		HX_STACK_LINE(206)
		this->xnull = (bool((bool((bool((bool((bool((this->xform->a == 1.0)) && bool((this->xform->b == 0.0)))) && bool((this->xform->c == 0.0)))) && bool((this->xform->d == 1.0)))) && bool((this->xform->tx == 0.0)))) && bool((this->xform->ty == 0.0)));
		HX_STACK_LINE(207)
		::nape::geom::Mat23 qmat = this->xform->outer->inverse();		HX_STACK_VAR(qmat,"qmat");
		struct _Function_1_2{
			inline static ::nape::geom::Vec2 Block( ){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",208);
				{
					HX_STACK_LINE(208)
					Float x = (int)0;		HX_STACK_VAR(x,"x");
					Float y = (int)0;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(208)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(208)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(208)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(208)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(208)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(208)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(208)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(208)
						ret->zpp_pool = null();
						HX_STACK_LINE(208)
						ret->zpp_disp = false;
						HX_STACK_LINE(208)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(208)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(208)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",208);
								{
									HX_STACK_LINE(208)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(208)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(208)
									{
										HX_STACK_LINE(208)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(208)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(208)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(208)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(208)
											ret1->next = null();
										}
										HX_STACK_LINE(208)
										ret1->weak = false;
									}
									HX_STACK_LINE(208)
									ret1->_immutable = immutable;
									HX_STACK_LINE(208)
									{
										HX_STACK_LINE(208)
										ret1->x = x;
										HX_STACK_LINE(208)
										ret1->y = y;
										HX_STACK_LINE(208)
										{
										}
										HX_STACK_LINE(208)
										{
										}
									}
									HX_STACK_LINE(208)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(208)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(208)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(208)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(208)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(208)
						{
							HX_STACK_LINE(208)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(208)
							if ((_this->_immutable)){
								HX_STACK_LINE(208)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(208)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(208)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(208)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(208)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",208);
								{
									HX_STACK_LINE(208)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(208)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(208)
									{
										HX_STACK_LINE(208)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(208)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(208)
											_this->_validate();
										}
									}
									HX_STACK_LINE(208)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",208);
								{
									HX_STACK_LINE(208)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(208)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(208)
									{
										HX_STACK_LINE(208)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(208)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(208)
											_this->_validate();
										}
									}
									HX_STACK_LINE(208)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(208)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(208)
							{
								HX_STACK_LINE(208)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(208)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(208)
								{
								}
								HX_STACK_LINE(208)
								{
								}
							}
							HX_STACK_LINE(208)
							{
								HX_STACK_LINE(208)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(208)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(208)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(208)
						ret;
					}
					HX_STACK_LINE(208)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(208)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(208)
		::nape::geom::Vec2 q = _Function_1_2::Block();		HX_STACK_VAR(q,"q");
		HX_STACK_LINE(209)
		::nape::geom::Vec2 v = qmat->transform(q,null(),null());		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(210)
		{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",211);
					{
						HX_STACK_LINE(211)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(211)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(211)
						{
							HX_STACK_LINE(211)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(211)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(211)
								_this->_validate();
							}
						}
						HX_STACK_LINE(211)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(211)
			this->iport->minx = _Function_2_1::Block(v);
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",212);
					{
						HX_STACK_LINE(212)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(212)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(212)
						{
							HX_STACK_LINE(212)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(212)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(212)
								_this->_validate();
							}
						}
						HX_STACK_LINE(212)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(212)
			this->iport->miny = _Function_2_2::Block(v);
			HX_STACK_LINE(213)
			{
			}
			HX_STACK_LINE(221)
			{
			}
		}
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(231)
			this->iport->maxx = this->iport->minx;
			HX_STACK_LINE(232)
			this->iport->maxy = this->iport->miny;
			HX_STACK_LINE(233)
			{
			}
			HX_STACK_LINE(241)
			{
			}
		}
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			if (((bool((v != null())) && bool(v->zpp_disp)))){
				HX_STACK_LINE(250)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(250)
				if ((_this->_immutable)){
					HX_STACK_LINE(250)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(250)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(250)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(250)
			if ((v->zpp_inner->_inuse)){
				HX_STACK_LINE(250)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(250)
			::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(250)
			v->zpp_inner->outer = null();
			HX_STACK_LINE(250)
			v->zpp_inner = null();
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(250)
				{
				}
				HX_STACK_LINE(250)
				o->zpp_pool = null();
				HX_STACK_LINE(250)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(250)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(250)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(250)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(250)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(250)
				{
				}
				HX_STACK_LINE(250)
				{
					HX_STACK_LINE(250)
					if (((o->outer != null()))){
						HX_STACK_LINE(250)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(250)
						o->outer = null();
					}
					HX_STACK_LINE(250)
					o->_isimmutable = null();
					HX_STACK_LINE(250)
					o->_validate = null();
					HX_STACK_LINE(250)
					o->_invalidate = null();
				}
				HX_STACK_LINE(250)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(250)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(251)
			Float x = this->width;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(251)
			{
				HX_STACK_LINE(251)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(251)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(251)
					if ((_this->_immutable)){
						HX_STACK_LINE(251)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(251)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(251)
						_this->_isimmutable();
					}
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &q){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",251);
						{
							HX_STACK_LINE(251)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(251)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(251)
							{
								HX_STACK_LINE(251)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(251)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(251)
									_this->_validate();
								}
							}
							HX_STACK_LINE(251)
							return q->zpp_inner->x;
						}
						return null();
					}
				};
				HX_STACK_LINE(251)
				if (((_Function_3_1::Block(q) != x))){
					HX_STACK_LINE(251)
					if (((x != x))){
						HX_STACK_LINE(251)
						hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
					}
					HX_STACK_LINE(251)
					q->zpp_inner->x = x;
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(251)
						if (((_this->_invalidate_dyn() != null()))){
							HX_STACK_LINE(251)
							_this->_invalidate(_this);
						}
					}
				}
			}
			HX_STACK_LINE(251)
			{
				HX_STACK_LINE(251)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(251)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(251)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(251)
						_this->_validate();
					}
				}
				HX_STACK_LINE(251)
				q->zpp_inner->x;
			}
		}
		HX_STACK_LINE(252)
		v = qmat->transform(q,null(),null());
		HX_STACK_LINE(253)
		{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",253);
					{
						HX_STACK_LINE(253)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(253)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(253)
						{
							HX_STACK_LINE(253)
							::zpp_nape::geom::ZPP_Vec2 _this1 = v->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(253)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(253)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(253)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",253);
					{
						HX_STACK_LINE(253)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(253)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(253)
						{
							HX_STACK_LINE(253)
							::zpp_nape::geom::ZPP_Vec2 _this1 = v->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(253)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(253)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(253)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(253)
			::zpp_nape::geom::ZPP_AABB _this = this->iport;		HX_STACK_VAR(_this,"_this");
			Float x = _Function_2_1::Block(v);		HX_STACK_VAR(x,"x");
			Float y = _Function_2_2::Block(v);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(253)
			if (((x < _this->minx))){
				HX_STACK_LINE(253)
				_this->minx = x;
			}
			HX_STACK_LINE(253)
			if (((x > _this->maxx))){
				HX_STACK_LINE(253)
				_this->maxx = x;
			}
			HX_STACK_LINE(253)
			if (((y < _this->miny))){
				HX_STACK_LINE(253)
				_this->miny = y;
			}
			HX_STACK_LINE(253)
			if (((y > _this->maxy))){
				HX_STACK_LINE(253)
				_this->maxy = y;
			}
		}
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			if (((bool((v != null())) && bool(v->zpp_disp)))){
				HX_STACK_LINE(254)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(254)
				::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(254)
				if ((_this->_immutable)){
					HX_STACK_LINE(254)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(254)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(254)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(254)
			if ((v->zpp_inner->_inuse)){
				HX_STACK_LINE(254)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(254)
			::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(254)
			v->zpp_inner->outer = null();
			HX_STACK_LINE(254)
			v->zpp_inner = null();
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(254)
				::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(254)
				{
				}
				HX_STACK_LINE(254)
				o->zpp_pool = null();
				HX_STACK_LINE(254)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(254)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(254)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(254)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(254)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(254)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(254)
				{
				}
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					if (((o->outer != null()))){
						HX_STACK_LINE(254)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(254)
						o->outer = null();
					}
					HX_STACK_LINE(254)
					o->_isimmutable = null();
					HX_STACK_LINE(254)
					o->_validate = null();
					HX_STACK_LINE(254)
					o->_invalidate = null();
				}
				HX_STACK_LINE(254)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(254)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			Float y = this->height;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(255)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(255)
				{
					HX_STACK_LINE(255)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(255)
					if ((_this->_immutable)){
						HX_STACK_LINE(255)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(255)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(255)
						_this->_isimmutable();
					}
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &q){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",255);
						{
							HX_STACK_LINE(255)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(255)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(255)
							{
								HX_STACK_LINE(255)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(255)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(255)
									_this->_validate();
								}
							}
							HX_STACK_LINE(255)
							return q->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(255)
				if (((_Function_3_1::Block(q) != y))){
					HX_STACK_LINE(255)
					if (((y != y))){
						HX_STACK_LINE(255)
						hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
					}
					HX_STACK_LINE(255)
					q->zpp_inner->y = y;
					HX_STACK_LINE(255)
					{
						HX_STACK_LINE(255)
						::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(255)
						if (((_this->_invalidate_dyn() != null()))){
							HX_STACK_LINE(255)
							_this->_invalidate(_this);
						}
					}
				}
			}
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(255)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(255)
				{
					HX_STACK_LINE(255)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(255)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(255)
						_this->_validate();
					}
				}
				HX_STACK_LINE(255)
				q->zpp_inner->y;
			}
		}
		HX_STACK_LINE(256)
		v = qmat->transform(q,null(),null());
		HX_STACK_LINE(257)
		{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",257);
					{
						HX_STACK_LINE(257)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(257)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 _this1 = v->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(257)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(257)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(257)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",257);
					{
						HX_STACK_LINE(257)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(257)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::zpp_nape::geom::ZPP_Vec2 _this1 = v->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(257)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(257)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(257)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(257)
			::zpp_nape::geom::ZPP_AABB _this = this->iport;		HX_STACK_VAR(_this,"_this");
			Float x = _Function_2_1::Block(v);		HX_STACK_VAR(x,"x");
			Float y = _Function_2_2::Block(v);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(257)
			if (((x < _this->minx))){
				HX_STACK_LINE(257)
				_this->minx = x;
			}
			HX_STACK_LINE(257)
			if (((x > _this->maxx))){
				HX_STACK_LINE(257)
				_this->maxx = x;
			}
			HX_STACK_LINE(257)
			if (((y < _this->miny))){
				HX_STACK_LINE(257)
				_this->miny = y;
			}
			HX_STACK_LINE(257)
			if (((y > _this->maxy))){
				HX_STACK_LINE(257)
				_this->maxy = y;
			}
		}
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			if (((bool((v != null())) && bool(v->zpp_disp)))){
				HX_STACK_LINE(258)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(258)
				if ((_this->_immutable)){
					HX_STACK_LINE(258)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(258)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(258)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(258)
			if ((v->zpp_inner->_inuse)){
				HX_STACK_LINE(258)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(258)
			::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(258)
			v->zpp_inner->outer = null();
			HX_STACK_LINE(258)
			v->zpp_inner = null();
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(258)
				{
				}
				HX_STACK_LINE(258)
				o->zpp_pool = null();
				HX_STACK_LINE(258)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(258)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(258)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(258)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(258)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(258)
				{
				}
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					if (((o->outer != null()))){
						HX_STACK_LINE(258)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(258)
						o->outer = null();
					}
					HX_STACK_LINE(258)
					o->_isimmutable = null();
					HX_STACK_LINE(258)
					o->_validate = null();
					HX_STACK_LINE(258)
					o->_invalidate = null();
				}
				HX_STACK_LINE(258)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(258)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(259)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(259)
					if ((_this->_immutable)){
						HX_STACK_LINE(259)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(259)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(259)
						_this->_isimmutable();
					}
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &q){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",259);
						{
							HX_STACK_LINE(259)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(259)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(259)
							{
								HX_STACK_LINE(259)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(259)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(259)
									_this->_validate();
								}
							}
							HX_STACK_LINE(259)
							return q->zpp_inner->x;
						}
						return null();
					}
				};
				HX_STACK_LINE(259)
				if (((_Function_3_1::Block(q) != (int)0))){
					HX_STACK_LINE(259)
					{
					}
					HX_STACK_LINE(259)
					q->zpp_inner->x = (int)0;
					HX_STACK_LINE(259)
					{
						HX_STACK_LINE(259)
						::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(259)
						if (((_this->_invalidate_dyn() != null()))){
							HX_STACK_LINE(259)
							_this->_invalidate(_this);
						}
					}
				}
			}
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(259)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(259)
					if (((_this->_validate_dyn() != null()))){
						HX_STACK_LINE(259)
						_this->_validate();
					}
				}
				HX_STACK_LINE(259)
				q->zpp_inner->x;
			}
		}
		HX_STACK_LINE(260)
		v = qmat->transform(q,null(),null());
		HX_STACK_LINE(261)
		{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",261);
					{
						HX_STACK_LINE(261)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(261)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							::zpp_nape::geom::ZPP_Vec2 _this1 = v->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(261)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(261)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(261)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/util/Debug.hx",261);
					{
						HX_STACK_LINE(261)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(261)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							::zpp_nape::geom::ZPP_Vec2 _this1 = v->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(261)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(261)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(261)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(261)
			::zpp_nape::geom::ZPP_AABB _this = this->iport;		HX_STACK_VAR(_this,"_this");
			Float x = _Function_2_1::Block(v);		HX_STACK_VAR(x,"x");
			Float y = _Function_2_2::Block(v);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(261)
			if (((x < _this->minx))){
				HX_STACK_LINE(261)
				_this->minx = x;
			}
			HX_STACK_LINE(261)
			if (((x > _this->maxx))){
				HX_STACK_LINE(261)
				_this->maxx = x;
			}
			HX_STACK_LINE(261)
			if (((y < _this->miny))){
				HX_STACK_LINE(261)
				_this->miny = y;
			}
			HX_STACK_LINE(261)
			if (((y > _this->maxy))){
				HX_STACK_LINE(261)
				_this->maxy = y;
			}
		}
		HX_STACK_LINE(262)
		{
			HX_STACK_LINE(262)
			if (((bool((v != null())) && bool(v->zpp_disp)))){
				HX_STACK_LINE(262)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(262)
			{
				HX_STACK_LINE(262)
				::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(262)
				if ((_this->_immutable)){
					HX_STACK_LINE(262)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(262)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(262)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(262)
			if ((v->zpp_inner->_inuse)){
				HX_STACK_LINE(262)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(262)
			::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(262)
			v->zpp_inner->outer = null();
			HX_STACK_LINE(262)
			v->zpp_inner = null();
			HX_STACK_LINE(262)
			{
				HX_STACK_LINE(262)
				::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(262)
				{
				}
				HX_STACK_LINE(262)
				o->zpp_pool = null();
				HX_STACK_LINE(262)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(262)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(262)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(262)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(262)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(262)
			{
				HX_STACK_LINE(262)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(262)
				{
				}
				HX_STACK_LINE(262)
				{
					HX_STACK_LINE(262)
					if (((o->outer != null()))){
						HX_STACK_LINE(262)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(262)
						o->outer = null();
					}
					HX_STACK_LINE(262)
					o->_isimmutable = null();
					HX_STACK_LINE(262)
					o->_validate = null();
					HX_STACK_LINE(262)
					o->_invalidate = null();
				}
				HX_STACK_LINE(262)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(262)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			if (((bool((q != null())) && bool(q->zpp_disp)))){
				HX_STACK_LINE(263)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(263)
				if ((_this->_immutable)){
					HX_STACK_LINE(263)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(263)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(263)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(263)
			if ((q->zpp_inner->_inuse)){
				HX_STACK_LINE(263)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(263)
			::zpp_nape::geom::ZPP_Vec2 inner = q->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(263)
			q->zpp_inner->outer = null();
			HX_STACK_LINE(263)
			q->zpp_inner = null();
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				::nape::geom::Vec2 o = q;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(263)
				{
				}
				HX_STACK_LINE(263)
				o->zpp_pool = null();
				HX_STACK_LINE(263)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(263)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(263)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(263)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(263)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(263)
				{
				}
				HX_STACK_LINE(263)
				{
					HX_STACK_LINE(263)
					if (((o->outer != null()))){
						HX_STACK_LINE(263)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(263)
						o->outer = null();
					}
					HX_STACK_LINE(263)
					o->_isimmutable = null();
					HX_STACK_LINE(263)
					o->_validate = null();
					HX_STACK_LINE(263)
					o->_invalidate = null();
				}
				HX_STACK_LINE(263)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(263)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Debug_obj,xform_invalidate,(void))

bool ZPP_Debug_obj::internal;


ZPP_Debug_obj::ZPP_Debug_obj()
{
}

void ZPP_Debug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Debug);
	HX_MARK_MEMBER_NAME(tmpab,"tmpab");
	HX_MARK_MEMBER_NAME(iport,"iport");
	HX_MARK_MEMBER_NAME(viewport,"viewport");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(xdet,"xdet");
	HX_MARK_MEMBER_NAME(xnull,"xnull");
	HX_MARK_MEMBER_NAME(xform,"xform");
	HX_MARK_MEMBER_NAME(bg_col,"bg_col");
	HX_MARK_MEMBER_NAME(bg_b,"bg_b");
	HX_MARK_MEMBER_NAME(bg_g,"bg_g");
	HX_MARK_MEMBER_NAME(bg_r,"bg_r");
	HX_MARK_MEMBER_NAME(d_shape,"d_shape");
	HX_MARK_MEMBER_NAME(isbmp,"isbmp");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_END_CLASS();
}

void ZPP_Debug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tmpab,"tmpab");
	HX_VISIT_MEMBER_NAME(iport,"iport");
	HX_VISIT_MEMBER_NAME(viewport,"viewport");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(xdet,"xdet");
	HX_VISIT_MEMBER_NAME(xnull,"xnull");
	HX_VISIT_MEMBER_NAME(xform,"xform");
	HX_VISIT_MEMBER_NAME(bg_col,"bg_col");
	HX_VISIT_MEMBER_NAME(bg_b,"bg_b");
	HX_VISIT_MEMBER_NAME(bg_g,"bg_g");
	HX_VISIT_MEMBER_NAME(bg_r,"bg_r");
	HX_VISIT_MEMBER_NAME(d_shape,"d_shape");
	HX_VISIT_MEMBER_NAME(isbmp,"isbmp");
	HX_VISIT_MEMBER_NAME(outer,"outer");
}

Dynamic ZPP_Debug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cull") ) { return cull_dyn(); }
		if (HX_FIELD_EQ(inName,"xdet") ) { return xdet; }
		if (HX_FIELD_EQ(inName,"bg_b") ) { return bg_b; }
		if (HX_FIELD_EQ(inName,"bg_g") ) { return bg_g; }
		if (HX_FIELD_EQ(inName,"bg_r") ) { return bg_r; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tmpab") ) { return tmpab; }
		if (HX_FIELD_EQ(inName,"iport") ) { return iport; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"xnull") ) { return xnull; }
		if (HX_FIELD_EQ(inName,"xform") ) { return xform; }
		if (HX_FIELD_EQ(inName,"isbmp") ) { return isbmp; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"bg_col") ) { return bg_col; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setform") ) { return setform_dyn(); }
		if (HX_FIELD_EQ(inName,"d_shape") ) { return d_shape; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { return internal; }
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sup_setbg") ) { return sup_setbg_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"xform_invalidate") ) { return xform_invalidate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Debug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xdet") ) { xdet=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bg_b") ) { bg_b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bg_g") ) { bg_g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bg_r") ) { bg_r=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tmpab") ) { tmpab=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iport") ) { iport=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xnull") ) { xnull=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xform") ) { xform=inValue.Cast< ::zpp_nape::geom::ZPP_Mat23 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isbmp") ) { isbmp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::util::Debug >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bg_col") ) { bg_col=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"d_shape") ) { d_shape=inValue.Cast< ::zpp_nape::util::ZPP_ShapeDebug >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewport") ) { viewport=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Debug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tmpab"));
	outFields->push(HX_CSTRING("iport"));
	outFields->push(HX_CSTRING("viewport"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("xdet"));
	outFields->push(HX_CSTRING("xnull"));
	outFields->push(HX_CSTRING("xform"));
	outFields->push(HX_CSTRING("bg_col"));
	outFields->push(HX_CSTRING("bg_b"));
	outFields->push(HX_CSTRING("bg_g"));
	outFields->push(HX_CSTRING("bg_r"));
	outFields->push(HX_CSTRING("d_shape"));
	outFields->push(HX_CSTRING("isbmp"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("internal"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sup_setbg"),
	HX_CSTRING("cull"),
	HX_CSTRING("tmpab"),
	HX_CSTRING("setform"),
	HX_CSTRING("xform_invalidate"),
	HX_CSTRING("iport"),
	HX_CSTRING("viewport"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("xdet"),
	HX_CSTRING("xnull"),
	HX_CSTRING("xform"),
	HX_CSTRING("bg_col"),
	HX_CSTRING("bg_b"),
	HX_CSTRING("bg_g"),
	HX_CSTRING("bg_r"),
	HX_CSTRING("d_shape"),
	HX_CSTRING("isbmp"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Debug_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Debug_obj::internal,"internal");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Debug_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Debug_obj::internal,"internal");
};

Class ZPP_Debug_obj::__mClass;

void ZPP_Debug_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Debug"), hx::TCanCast< ZPP_Debug_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Debug_obj::__boot()
{
	internal= false;
}

} // end namespace zpp_nape
} // end namespace util
