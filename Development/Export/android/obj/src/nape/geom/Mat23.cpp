#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void Mat23_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
HX_STACK_PUSH("Mat23::new","nape/geom/Mat23.hx",187);
Float a = __o_a.Default(1.0);
Float b = __o_b.Default(0.0);
Float c = __o_c.Default(0.0);
Float d = __o_d.Default(1.0);
Float tx = __o_tx.Default(0.0);
Float ty = __o_ty.Default(0.0);
{
	HX_STACK_LINE(191)
	this->zpp_inner = null();
	HX_STACK_LINE(371)
	this->zpp_inner = ::zpp_nape::geom::ZPP_Mat23_obj::get();
	HX_STACK_LINE(372)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(373)
	{
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			if (((a != a))){
				HX_STACK_LINE(373)
				hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("a")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(373)
			this->zpp_inner->a = a;
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(373)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(373)
					_this->_invalidate();
				}
			}
		}
		HX_STACK_LINE(373)
		this->zpp_inner->a;
	}
	HX_STACK_LINE(374)
	{
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			if (((b != b))){
				HX_STACK_LINE(374)
				hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("b")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(374)
			this->zpp_inner->b = b;
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(374)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(374)
					_this->_invalidate();
				}
			}
		}
		HX_STACK_LINE(374)
		this->zpp_inner->b;
	}
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			if (((tx != tx))){
				HX_STACK_LINE(375)
				hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("tx")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(375)
			this->zpp_inner->tx = tx;
			HX_STACK_LINE(375)
			{
				HX_STACK_LINE(375)
				::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(375)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(375)
					_this->_invalidate();
				}
			}
		}
		HX_STACK_LINE(375)
		this->zpp_inner->tx;
	}
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			if (((c != c))){
				HX_STACK_LINE(376)
				hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("c")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(376)
			this->zpp_inner->c = c;
			HX_STACK_LINE(376)
			{
				HX_STACK_LINE(376)
				::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(376)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(376)
					_this->_invalidate();
				}
			}
		}
		HX_STACK_LINE(376)
		this->zpp_inner->c;
	}
	HX_STACK_LINE(377)
	{
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			if (((d != d))){
				HX_STACK_LINE(377)
				hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("d")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(377)
			this->zpp_inner->d = d;
			HX_STACK_LINE(377)
			{
				HX_STACK_LINE(377)
				::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(377)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(377)
					_this->_invalidate();
				}
			}
		}
		HX_STACK_LINE(377)
		this->zpp_inner->d;
	}
	HX_STACK_LINE(378)
	{
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			if (((ty != ty))){
				HX_STACK_LINE(378)
				hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("ty")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(378)
			this->zpp_inner->ty = ty;
			HX_STACK_LINE(378)
			{
				HX_STACK_LINE(378)
				::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(378)
				if (((_this->_invalidate != null()))){
					HX_STACK_LINE(378)
					_this->_invalidate();
				}
			}
		}
		HX_STACK_LINE(378)
		this->zpp_inner->ty;
	}
}
;
	return null();
}

Mat23_obj::~Mat23_obj() { }

Dynamic Mat23_obj::__CreateEmpty() { return  new Mat23_obj; }
hx::ObjectPtr< Mat23_obj > Mat23_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< Mat23_obj > result = new Mat23_obj();
	result->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return result;}

Dynamic Mat23_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mat23_obj > result = new Mat23_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::nape::geom::Mat23 Mat23_obj::orthogonalise( ){
	HX_STACK_PUSH("Mat23::orthogonalise","nape/geom/Mat23.hx",862);
	HX_STACK_THIS(this);
	HX_STACK_LINE(863)
	if ((!(this->orthogonal()))){
		HX_STACK_LINE(864)
		Float k1 = ::Math_obj::sqrt(((this->zpp_inner->a * this->zpp_inner->a) + (this->zpp_inner->c * this->zpp_inner->c)));		HX_STACK_VAR(k1,"k1");
		HX_STACK_LINE(865)
		Float k2 = ::Math_obj::sqrt(((this->zpp_inner->b * this->zpp_inner->b) + (this->zpp_inner->d * this->zpp_inner->d)));		HX_STACK_VAR(k2,"k2");
		HX_STACK_LINE(867)
		if (((bool(((k1 * k1) < ::nape::Config_obj::epsilon)) || bool(((k2 * k2) < ::nape::Config_obj::epsilon))))){
			HX_STACK_LINE(867)
			hx::Throw (((HX_CSTRING("Error: Matrix is singular and cannot be ") + HX_CSTRING("orthogonal")) + HX_CSTRING("ised")));
		}
		HX_STACK_LINE(871)
		int k = (int)1;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(872)
		k1 = (Float(k) / Float(k1));
		HX_STACK_LINE(873)
		k2 = (Float(k) / Float(k2));
		HX_STACK_LINE(874)
		{
			HX_STACK_LINE(874)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(874)
			{
				HX_STACK_LINE(874)
				Float a = (_g->zpp_inner->a * k1);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(874)
				{
					HX_STACK_LINE(874)
					if (((a != a))){
						HX_STACK_LINE(874)
						hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("a")) + HX_CSTRING(" cannot be NaN")));
					}
					HX_STACK_LINE(874)
					_g->zpp_inner->a = a;
					HX_STACK_LINE(874)
					{
						HX_STACK_LINE(874)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(874)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(874)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(874)
				_g->zpp_inner->a;
			}
		}
		HX_STACK_LINE(875)
		{
			HX_STACK_LINE(875)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(875)
			{
				HX_STACK_LINE(875)
				Float c = (_g->zpp_inner->c * k1);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(875)
				{
					HX_STACK_LINE(875)
					if (((c != c))){
						HX_STACK_LINE(875)
						hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("c")) + HX_CSTRING(" cannot be NaN")));
					}
					HX_STACK_LINE(875)
					_g->zpp_inner->c = c;
					HX_STACK_LINE(875)
					{
						HX_STACK_LINE(875)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(875)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(875)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(875)
				_g->zpp_inner->c;
			}
		}
		HX_STACK_LINE(876)
		{
			HX_STACK_LINE(876)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(876)
			{
				HX_STACK_LINE(876)
				Float b = (_g->zpp_inner->b * k2);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(876)
				{
					HX_STACK_LINE(876)
					if (((b != b))){
						HX_STACK_LINE(876)
						hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("b")) + HX_CSTRING(" cannot be NaN")));
					}
					HX_STACK_LINE(876)
					_g->zpp_inner->b = b;
					HX_STACK_LINE(876)
					{
						HX_STACK_LINE(876)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(876)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(876)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(876)
				_g->zpp_inner->b;
			}
		}
		HX_STACK_LINE(877)
		{
			HX_STACK_LINE(877)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(877)
			{
				HX_STACK_LINE(877)
				Float d = (_g->zpp_inner->d * k2);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(877)
				{
					HX_STACK_LINE(877)
					if (((d != d))){
						HX_STACK_LINE(877)
						hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("d")) + HX_CSTRING(" cannot be NaN")));
					}
					HX_STACK_LINE(877)
					_g->zpp_inner->d = d;
					HX_STACK_LINE(877)
					{
						HX_STACK_LINE(877)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(877)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(877)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(877)
				_g->zpp_inner->d;
			}
		}
		HX_STACK_LINE(878)
		Float dot = ((this->zpp_inner->a * this->zpp_inner->b) + (this->zpp_inner->c * this->zpp_inner->d));		HX_STACK_VAR(dot,"dot");
		HX_STACK_LINE(879)
		Float ang = ((0.25 * ::Math_obj::PI) - (0.5 * ::Math_obj::acos((Float(dot) / Float(((k * k)))))));		HX_STACK_VAR(ang,"ang");
		HX_STACK_LINE(880)
		if (((((this->zpp_inner->a * this->zpp_inner->d) - (this->zpp_inner->b * this->zpp_inner->c)) > (int)0))){
			HX_STACK_LINE(880)
			ang = -(ang);
		}
		HX_STACK_LINE(883)
		Float sin = ::Math_obj::sin(ang);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(884)
		Float cos = ::Math_obj::cos(ang);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(885)
		Float a2 = ((this->zpp_inner->a * cos) - (this->zpp_inner->c * sin));		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(886)
		Float b2 = ((this->zpp_inner->b * cos) + (this->zpp_inner->d * sin));		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(887)
		{
			HX_STACK_LINE(887)
			Float c = ((this->zpp_inner->c * cos) + (this->zpp_inner->a * sin));		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				if (((c != c))){
					HX_STACK_LINE(887)
					hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("c")) + HX_CSTRING(" cannot be NaN")));
				}
				HX_STACK_LINE(887)
				this->zpp_inner->c = c;
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(887)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(887)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(887)
			this->zpp_inner->c;
		}
		HX_STACK_LINE(888)
		{
			HX_STACK_LINE(888)
			{
				HX_STACK_LINE(888)
				if (((a2 != a2))){
					HX_STACK_LINE(888)
					hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("a")) + HX_CSTRING(" cannot be NaN")));
				}
				HX_STACK_LINE(888)
				this->zpp_inner->a = a2;
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(888)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(888)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(888)
			this->zpp_inner->a;
		}
		HX_STACK_LINE(889)
		{
			HX_STACK_LINE(889)
			Float d = ((this->zpp_inner->d * cos) - (this->zpp_inner->b * sin));		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(889)
			{
				HX_STACK_LINE(889)
				if (((d != d))){
					HX_STACK_LINE(889)
					hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("d")) + HX_CSTRING(" cannot be NaN")));
				}
				HX_STACK_LINE(889)
				this->zpp_inner->d = d;
				HX_STACK_LINE(889)
				{
					HX_STACK_LINE(889)
					::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(889)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(889)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(889)
			this->zpp_inner->d;
		}
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(890)
			{
				HX_STACK_LINE(890)
				if (((b2 != b2))){
					HX_STACK_LINE(890)
					hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("b")) + HX_CSTRING(" cannot be NaN")));
				}
				HX_STACK_LINE(890)
				this->zpp_inner->b = b2;
				HX_STACK_LINE(890)
				{
					HX_STACK_LINE(890)
					::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(890)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(890)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(890)
			this->zpp_inner->b;
		}
		HX_STACK_LINE(891)
		{
			HX_STACK_LINE(891)
			::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(891)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(891)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(893)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,orthogonalise,return )

::nape::geom::Mat23 Mat23_obj::equiorthogonalise( ){
	HX_STACK_PUSH("Mat23::equiorthogonalise","nape/geom/Mat23.hx",817);
	HX_STACK_THIS(this);
	HX_STACK_LINE(818)
	if ((!(this->equiorthogonal()))){
		HX_STACK_LINE(819)
		Float k1 = ::Math_obj::sqrt(((this->zpp_inner->a * this->zpp_inner->a) + (this->zpp_inner->c * this->zpp_inner->c)));		HX_STACK_VAR(k1,"k1");
		HX_STACK_LINE(820)
		Float k2 = ::Math_obj::sqrt(((this->zpp_inner->b * this->zpp_inner->b) + (this->zpp_inner->d * this->zpp_inner->d)));		HX_STACK_VAR(k2,"k2");
		HX_STACK_LINE(822)
		if (((bool(((k1 * k1) < ::nape::Config_obj::epsilon)) || bool(((k2 * k2) < ::nape::Config_obj::epsilon))))){
			HX_STACK_LINE(822)
			hx::Throw (((HX_CSTRING("Error: Matrix is singular and cannot be ") + HX_CSTRING("equiorthogonal")) + HX_CSTRING("ised")));
		}
		HX_STACK_LINE(826)
		Float k = (Float(((k1 + k2))) / Float((int)2));		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(827)
		k1 = (Float(k) / Float(k1));
		HX_STACK_LINE(828)
		k2 = (Float(k) / Float(k2));
		HX_STACK_LINE(829)
		{
			HX_STACK_LINE(829)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(829)
			{
				HX_STACK_LINE(829)
				Float a = (_g->zpp_inner->a * k1);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(829)
				{
					HX_STACK_LINE(829)
					if (((a != a))){
						HX_STACK_LINE(829)
						hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("a")) + HX_CSTRING(" cannot be NaN")));
					}
					HX_STACK_LINE(829)
					_g->zpp_inner->a = a;
					HX_STACK_LINE(829)
					{
						HX_STACK_LINE(829)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(829)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(829)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(829)
				_g->zpp_inner->a;
			}
		}
		HX_STACK_LINE(830)
		{
			HX_STACK_LINE(830)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(830)
			{
				HX_STACK_LINE(830)
				Float c = (_g->zpp_inner->c * k1);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(830)
				{
					HX_STACK_LINE(830)
					if (((c != c))){
						HX_STACK_LINE(830)
						hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("c")) + HX_CSTRING(" cannot be NaN")));
					}
					HX_STACK_LINE(830)
					_g->zpp_inner->c = c;
					HX_STACK_LINE(830)
					{
						HX_STACK_LINE(830)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(830)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(830)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(830)
				_g->zpp_inner->c;
			}
		}
		HX_STACK_LINE(831)
		{
			HX_STACK_LINE(831)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(831)
			{
				HX_STACK_LINE(831)
				Float b = (_g->zpp_inner->b * k2);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(831)
				{
					HX_STACK_LINE(831)
					if (((b != b))){
						HX_STACK_LINE(831)
						hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("b")) + HX_CSTRING(" cannot be NaN")));
					}
					HX_STACK_LINE(831)
					_g->zpp_inner->b = b;
					HX_STACK_LINE(831)
					{
						HX_STACK_LINE(831)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(831)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(831)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(831)
				_g->zpp_inner->b;
			}
		}
		HX_STACK_LINE(832)
		{
			HX_STACK_LINE(832)
			::nape::geom::Mat23 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(832)
			{
				HX_STACK_LINE(832)
				Float d = (_g->zpp_inner->d * k2);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(832)
				{
					HX_STACK_LINE(832)
					if (((d != d))){
						HX_STACK_LINE(832)
						hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("d")) + HX_CSTRING(" cannot be NaN")));
					}
					HX_STACK_LINE(832)
					_g->zpp_inner->d = d;
					HX_STACK_LINE(832)
					{
						HX_STACK_LINE(832)
						::zpp_nape::geom::ZPP_Mat23 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(832)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(832)
							_this->_invalidate();
						}
					}
				}
				HX_STACK_LINE(832)
				_g->zpp_inner->d;
			}
		}
		HX_STACK_LINE(833)
		Float dot = ((this->zpp_inner->a * this->zpp_inner->b) + (this->zpp_inner->c * this->zpp_inner->d));		HX_STACK_VAR(dot,"dot");
		HX_STACK_LINE(834)
		Float ang = ((0.25 * ::Math_obj::PI) - (0.5 * ::Math_obj::acos((Float(dot) / Float(((k * k)))))));		HX_STACK_VAR(ang,"ang");
		HX_STACK_LINE(835)
		if (((((this->zpp_inner->a * this->zpp_inner->d) - (this->zpp_inner->b * this->zpp_inner->c)) > (int)0))){
			HX_STACK_LINE(835)
			ang = -(ang);
		}
		HX_STACK_LINE(838)
		Float sin = ::Math_obj::sin(ang);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(839)
		Float cos = ::Math_obj::cos(ang);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(840)
		Float a2 = ((this->zpp_inner->a * cos) - (this->zpp_inner->c * sin));		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(841)
		Float b2 = ((this->zpp_inner->b * cos) + (this->zpp_inner->d * sin));		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(842)
		{
			HX_STACK_LINE(842)
			Float c = ((this->zpp_inner->c * cos) + (this->zpp_inner->a * sin));		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(842)
			{
				HX_STACK_LINE(842)
				if (((c != c))){
					HX_STACK_LINE(842)
					hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("c")) + HX_CSTRING(" cannot be NaN")));
				}
				HX_STACK_LINE(842)
				this->zpp_inner->c = c;
				HX_STACK_LINE(842)
				{
					HX_STACK_LINE(842)
					::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(842)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(842)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(842)
			this->zpp_inner->c;
		}
		HX_STACK_LINE(843)
		{
			HX_STACK_LINE(843)
			{
				HX_STACK_LINE(843)
				if (((a2 != a2))){
					HX_STACK_LINE(843)
					hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("a")) + HX_CSTRING(" cannot be NaN")));
				}
				HX_STACK_LINE(843)
				this->zpp_inner->a = a2;
				HX_STACK_LINE(843)
				{
					HX_STACK_LINE(843)
					::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(843)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(843)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(843)
			this->zpp_inner->a;
		}
		HX_STACK_LINE(844)
		{
			HX_STACK_LINE(844)
			Float d = ((this->zpp_inner->d * cos) - (this->zpp_inner->b * sin));		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(844)
			{
				HX_STACK_LINE(844)
				if (((d != d))){
					HX_STACK_LINE(844)
					hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("d")) + HX_CSTRING(" cannot be NaN")));
				}
				HX_STACK_LINE(844)
				this->zpp_inner->d = d;
				HX_STACK_LINE(844)
				{
					HX_STACK_LINE(844)
					::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(844)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(844)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(844)
			this->zpp_inner->d;
		}
		HX_STACK_LINE(845)
		{
			HX_STACK_LINE(845)
			{
				HX_STACK_LINE(845)
				if (((b2 != b2))){
					HX_STACK_LINE(845)
					hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("b")) + HX_CSTRING(" cannot be NaN")));
				}
				HX_STACK_LINE(845)
				this->zpp_inner->b = b2;
				HX_STACK_LINE(845)
				{
					HX_STACK_LINE(845)
					::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(845)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(845)
						_this->_invalidate();
					}
				}
			}
			HX_STACK_LINE(845)
			this->zpp_inner->b;
		}
		HX_STACK_LINE(846)
		{
			HX_STACK_LINE(846)
			::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(846)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(846)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(848)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,equiorthogonalise,return )

bool Mat23_obj::orthogonal( ){
	HX_STACK_PUSH("Mat23::orthogonal","nape/geom/Mat23.hx",794);
	HX_STACK_THIS(this);
	HX_STACK_LINE(795)
	Float x = ((this->zpp_inner->a * this->zpp_inner->b) + (this->zpp_inner->c * this->zpp_inner->d));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(796)
	if ((((x * x) < ::nape::Config_obj::epsilon))){
		HX_STACK_LINE(797)
		Float y = (((this->zpp_inner->a * this->zpp_inner->a) + (this->zpp_inner->b * this->zpp_inner->b)) - (int)1);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(798)
		Float z = (((this->zpp_inner->c * this->zpp_inner->c) + (this->zpp_inner->d * this->zpp_inner->d)) - (int)1);		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(799)
		return (bool(((y * y) < ::nape::Config_obj::epsilon)) && bool(((z * z) < ::nape::Config_obj::epsilon)));
	}
	else{
		HX_STACK_LINE(801)
		return false;
	}
	HX_STACK_LINE(796)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,orthogonal,return )

bool Mat23_obj::equiorthogonal( ){
	HX_STACK_PUSH("Mat23::equiorthogonal","nape/geom/Mat23.hx",766);
	HX_STACK_THIS(this);
	HX_STACK_LINE(766)
	if ((this->singular())){
		HX_STACK_LINE(767)
		return false;
	}
	else{
		HX_STACK_LINE(771)
		Float x = ((this->zpp_inner->a * this->zpp_inner->b) + (this->zpp_inner->c * this->zpp_inner->d));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(772)
		if ((((x * x) < ::nape::Config_obj::epsilon))){
			HX_STACK_LINE(773)
			Float y = ((((this->zpp_inner->a * this->zpp_inner->a) + (this->zpp_inner->b * this->zpp_inner->b)) - (this->zpp_inner->c * this->zpp_inner->c)) - (this->zpp_inner->d * this->zpp_inner->d));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(774)
			return ((y * y) < ::nape::Config_obj::epsilon);
		}
		else{
			HX_STACK_LINE(776)
			return false;
		}
	}
	HX_STACK_LINE(766)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,equiorthogonal,return )

::String Mat23_obj::toString( ){
	HX_STACK_PUSH("Mat23::toString","nape/geom/Mat23.hx",742);
	HX_STACK_THIS(this);
	HX_STACK_LINE(742)
	return ((((((((((((HX_CSTRING("{ a: ") + this->zpp_inner->a) + HX_CSTRING(" b: ")) + this->zpp_inner->b) + HX_CSTRING(" c: ")) + this->zpp_inner->c) + HX_CSTRING(" d: ")) + this->zpp_inner->d) + HX_CSTRING(" tx: ")) + this->zpp_inner->tx) + HX_CSTRING(" ty: ")) + this->zpp_inner->ty) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,toString,return )

::nape::geom::Vec2 Mat23_obj::inverseTransform( ::nape::geom::Vec2 point,hx::Null< bool >  __o_noTranslation,hx::Null< bool >  __o_weak){
bool noTranslation = __o_noTranslation.Default(false);
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Mat23::inverseTransform","nape/geom/Mat23.hx",702);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(noTranslation,"noTranslation");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(703)
		if (((bool((point != null())) && bool(point->zpp_disp)))){
			HX_STACK_LINE(705)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(709)
		if (((point == null()))){
			HX_STACK_LINE(709)
			hx::Throw (HX_CSTRING("Error: Cannot transform null Vec2"));
		}
		HX_STACK_LINE(712)
		if ((this->singular())){
			HX_STACK_LINE(712)
			hx::Throw (HX_CSTRING("Error: Matrix is singular and inverse transformation cannot be performed"));
		}
		HX_STACK_LINE(716)
		Float idet = (Float(1.0) / Float((((this->zpp_inner->a * this->zpp_inner->d) - (this->zpp_inner->b * this->zpp_inner->c)))));		HX_STACK_VAR(idet,"idet");
		HX_STACK_LINE(717)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(718)
		if ((noTranslation)){
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Mat23_obj *__this,::nape::geom::Vec2 &point,bool &weak,Float &idet){
					HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",719);
					{
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &point){
								HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",719);
								{
									HX_STACK_LINE(719)
									if (((bool((point != null())) && bool(point->zpp_disp)))){
										HX_STACK_LINE(719)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(719)
									{
										HX_STACK_LINE(719)
										::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(719)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(719)
											_this->_validate();
										}
									}
									HX_STACK_LINE(719)
									return point->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &point){
								HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",719);
								{
									HX_STACK_LINE(719)
									if (((bool((point != null())) && bool(point->zpp_disp)))){
										HX_STACK_LINE(719)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(719)
									{
										HX_STACK_LINE(719)
										::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(719)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(719)
											_this->_validate();
										}
									}
									HX_STACK_LINE(719)
									return point->zpp_inner->y;
								}
								return null();
							}
						};
						struct _Function_3_3{
							inline static Float Block( ::nape::geom::Vec2 &point){
								HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",719);
								{
									HX_STACK_LINE(719)
									if (((bool((point != null())) && bool(point->zpp_disp)))){
										HX_STACK_LINE(719)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(719)
									{
										HX_STACK_LINE(719)
										::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(719)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(719)
											_this->_validate();
										}
									}
									HX_STACK_LINE(719)
									return point->zpp_inner->y;
								}
								return null();
							}
						};
						struct _Function_3_4{
							inline static Float Block( ::nape::geom::Vec2 &point){
								HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",719);
								{
									HX_STACK_LINE(719)
									if (((bool((point != null())) && bool(point->zpp_disp)))){
										HX_STACK_LINE(719)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(719)
									{
										HX_STACK_LINE(719)
										::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(719)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(719)
											_this->_validate();
										}
									}
									HX_STACK_LINE(719)
									return point->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(719)
						Float x = ((((_Function_3_1::Block(point) * __this->zpp_inner->d) - (_Function_3_2::Block(point) * __this->zpp_inner->b))) * idet);		HX_STACK_VAR(x,"x");
						Float y = ((((_Function_3_3::Block(point) * __this->zpp_inner->a) - (_Function_3_4::Block(point) * __this->zpp_inner->c))) * idet);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(719)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(719)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						HX_STACK_LINE(719)
						::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(719)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(719)
							ret1 = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(719)
							ret1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(719)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
							HX_STACK_LINE(719)
							ret1->zpp_pool = null();
							HX_STACK_LINE(719)
							ret1->zpp_disp = false;
							HX_STACK_LINE(719)
							if (((ret1 == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(719)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(719)
						if (((ret1->zpp_inner == null()))){
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
									HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",719);
									{
										HX_STACK_LINE(719)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(719)
										::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
										HX_STACK_LINE(719)
										{
											HX_STACK_LINE(719)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(719)
												ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
											}
											else{
												HX_STACK_LINE(719)
												ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(719)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
												HX_STACK_LINE(719)
												ret2->next = null();
											}
											HX_STACK_LINE(719)
											ret2->weak = false;
										}
										HX_STACK_LINE(719)
										ret2->_immutable = immutable;
										HX_STACK_LINE(719)
										{
											HX_STACK_LINE(719)
											ret2->x = x;
											HX_STACK_LINE(719)
											ret2->y = y;
											HX_STACK_LINE(719)
											{
											}
										}
										HX_STACK_LINE(719)
										return ret2;
									}
									return null();
								}
							};
							HX_STACK_LINE(719)
							ret1->zpp_inner = _Function_4_1::Block(x,y);
							HX_STACK_LINE(719)
							ret1->zpp_inner->outer = ret1;
						}
						else{
							HX_STACK_LINE(719)
							if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
								HX_STACK_LINE(719)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(719)
							{
								HX_STACK_LINE(719)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(719)
								if ((_this->_immutable)){
									HX_STACK_LINE(719)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(719)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(719)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(719)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(719)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_4_1{
								inline static Float Block( ::nape::geom::Vec2 &ret1){
									HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",719);
									{
										HX_STACK_LINE(719)
										if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
											HX_STACK_LINE(719)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(719)
										{
											HX_STACK_LINE(719)
											::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(719)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(719)
												_this->_validate();
											}
										}
										HX_STACK_LINE(719)
										return ret1->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::nape::geom::Vec2 &ret1){
									HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",719);
									{
										HX_STACK_LINE(719)
										if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
											HX_STACK_LINE(719)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(719)
										{
											HX_STACK_LINE(719)
											::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(719)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(719)
												_this->_validate();
											}
										}
										HX_STACK_LINE(719)
										return ret1->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(719)
							if ((!(((bool((_Function_4_1::Block(ret1) == x)) && bool((_Function_4_2::Block(ret1) == y))))))){
								HX_STACK_LINE(719)
								{
									HX_STACK_LINE(719)
									ret1->zpp_inner->x = x;
									HX_STACK_LINE(719)
									ret1->zpp_inner->y = y;
									HX_STACK_LINE(719)
									{
									}
								}
								HX_STACK_LINE(719)
								{
									HX_STACK_LINE(719)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(719)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(719)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(719)
							ret1;
						}
						HX_STACK_LINE(719)
						ret1->zpp_inner->weak = weak;
						HX_STACK_LINE(719)
						return ret1;
					}
					return null();
				}
			};
			HX_STACK_LINE(718)
			ret = _Function_2_1::Block(this,point,weak,idet);
		}
		else{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",722);
					{
						HX_STACK_LINE(722)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(722)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(722)
						{
							HX_STACK_LINE(722)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(722)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(722)
								_this->_validate();
							}
						}
						HX_STACK_LINE(722)
						return point->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(722)
			Float dx = (_Function_2_1::Block(point) - this->zpp_inner->tx);		HX_STACK_VAR(dx,"dx");
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",723);
					{
						HX_STACK_LINE(723)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(723)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(723)
						{
							HX_STACK_LINE(723)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(723)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(723)
								_this->_validate();
							}
						}
						HX_STACK_LINE(723)
						return point->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(723)
			Float dy = (_Function_2_2::Block(point) - this->zpp_inner->ty);		HX_STACK_VAR(dy,"dy");
			struct _Function_2_3{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Mat23_obj *__this,Float &dy,Float &dx,bool &weak,Float &idet){
					HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",724);
					{
						HX_STACK_LINE(724)
						Float x = ((((dx * __this->zpp_inner->d) - (dy * __this->zpp_inner->b))) * idet);		HX_STACK_VAR(x,"x");
						Float y = ((((dy * __this->zpp_inner->a) - (dx * __this->zpp_inner->c))) * idet);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(724)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(724)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						HX_STACK_LINE(724)
						::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(724)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(724)
							ret1 = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(724)
							ret1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(724)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
							HX_STACK_LINE(724)
							ret1->zpp_pool = null();
							HX_STACK_LINE(724)
							ret1->zpp_disp = false;
							HX_STACK_LINE(724)
							if (((ret1 == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(724)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(724)
						if (((ret1->zpp_inner == null()))){
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
									HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",724);
									{
										HX_STACK_LINE(724)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(724)
										::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
										HX_STACK_LINE(724)
										{
											HX_STACK_LINE(724)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(724)
												ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
											}
											else{
												HX_STACK_LINE(724)
												ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(724)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
												HX_STACK_LINE(724)
												ret2->next = null();
											}
											HX_STACK_LINE(724)
											ret2->weak = false;
										}
										HX_STACK_LINE(724)
										ret2->_immutable = immutable;
										HX_STACK_LINE(724)
										{
											HX_STACK_LINE(724)
											ret2->x = x;
											HX_STACK_LINE(724)
											ret2->y = y;
											HX_STACK_LINE(724)
											{
											}
										}
										HX_STACK_LINE(724)
										return ret2;
									}
									return null();
								}
							};
							HX_STACK_LINE(724)
							ret1->zpp_inner = _Function_4_1::Block(x,y);
							HX_STACK_LINE(724)
							ret1->zpp_inner->outer = ret1;
						}
						else{
							HX_STACK_LINE(724)
							if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
								HX_STACK_LINE(724)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(724)
							{
								HX_STACK_LINE(724)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(724)
								if ((_this->_immutable)){
									HX_STACK_LINE(724)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(724)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(724)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(724)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(724)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_4_1{
								inline static Float Block( ::nape::geom::Vec2 &ret1){
									HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",724);
									{
										HX_STACK_LINE(724)
										if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
											HX_STACK_LINE(724)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(724)
										{
											HX_STACK_LINE(724)
											::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(724)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(724)
												_this->_validate();
											}
										}
										HX_STACK_LINE(724)
										return ret1->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::nape::geom::Vec2 &ret1){
									HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",724);
									{
										HX_STACK_LINE(724)
										if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
											HX_STACK_LINE(724)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(724)
										{
											HX_STACK_LINE(724)
											::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(724)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(724)
												_this->_validate();
											}
										}
										HX_STACK_LINE(724)
										return ret1->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(724)
							if ((!(((bool((_Function_4_1::Block(ret1) == x)) && bool((_Function_4_2::Block(ret1) == y))))))){
								HX_STACK_LINE(724)
								{
									HX_STACK_LINE(724)
									ret1->zpp_inner->x = x;
									HX_STACK_LINE(724)
									ret1->zpp_inner->y = y;
									HX_STACK_LINE(724)
									{
									}
								}
								HX_STACK_LINE(724)
								{
									HX_STACK_LINE(724)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(724)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(724)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(724)
							ret1;
						}
						HX_STACK_LINE(724)
						ret1->zpp_inner->weak = weak;
						HX_STACK_LINE(724)
						return ret1;
					}
					return null();
				}
			};
			HX_STACK_LINE(724)
			ret = _Function_2_3::Block(this,dy,dx,weak,idet);
		}
		HX_STACK_LINE(726)
		if ((point->zpp_inner->weak)){
			HX_STACK_LINE(730)
			{
				HX_STACK_LINE(730)
				if (((bool((point != null())) && bool(point->zpp_disp)))){
					HX_STACK_LINE(730)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
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
				if ((point->zpp_inner->_inuse)){
					HX_STACK_LINE(730)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(730)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(730)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(730)
				point->zpp_inner = null();
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
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
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Mat23_obj,inverseTransform,return )

::nape::geom::Vec2 Mat23_obj::transform( ::nape::geom::Vec2 point,hx::Null< bool >  __o_noTranslation,hx::Null< bool >  __o_weak){
bool noTranslation = __o_noTranslation.Default(false);
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Mat23::transform","nape/geom/Mat23.hx",648);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(noTranslation,"noTranslation");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(649)
		if (((bool((point != null())) && bool(point->zpp_disp)))){
			HX_STACK_LINE(651)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(655)
		if (((point == null()))){
			HX_STACK_LINE(655)
			hx::Throw (HX_CSTRING("Error: Cannot transform null Vec2"));
		}
		HX_STACK_LINE(659)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(660)
		if ((noTranslation)){
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Mat23_obj *__this,::nape::geom::Vec2 &point,bool &weak){
					HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",661);
					{
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &point){
								HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",661);
								{
									HX_STACK_LINE(661)
									if (((bool((point != null())) && bool(point->zpp_disp)))){
										HX_STACK_LINE(661)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(661)
									{
										HX_STACK_LINE(661)
										::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(661)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(661)
											_this->_validate();
										}
									}
									HX_STACK_LINE(661)
									return point->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &point){
								HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",661);
								{
									HX_STACK_LINE(661)
									if (((bool((point != null())) && bool(point->zpp_disp)))){
										HX_STACK_LINE(661)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(661)
									{
										HX_STACK_LINE(661)
										::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(661)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(661)
											_this->_validate();
										}
									}
									HX_STACK_LINE(661)
									return point->zpp_inner->y;
								}
								return null();
							}
						};
						struct _Function_3_3{
							inline static Float Block( ::nape::geom::Vec2 &point){
								HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",661);
								{
									HX_STACK_LINE(661)
									if (((bool((point != null())) && bool(point->zpp_disp)))){
										HX_STACK_LINE(661)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(661)
									{
										HX_STACK_LINE(661)
										::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(661)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(661)
											_this->_validate();
										}
									}
									HX_STACK_LINE(661)
									return point->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_4{
							inline static Float Block( ::nape::geom::Vec2 &point){
								HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",661);
								{
									HX_STACK_LINE(661)
									if (((bool((point != null())) && bool(point->zpp_disp)))){
										HX_STACK_LINE(661)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(661)
									{
										HX_STACK_LINE(661)
										::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(661)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(661)
											_this->_validate();
										}
									}
									HX_STACK_LINE(661)
									return point->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(661)
						Float x = ((_Function_3_1::Block(point) * __this->zpp_inner->a) + (_Function_3_2::Block(point) * __this->zpp_inner->b));		HX_STACK_VAR(x,"x");
						Float y = ((_Function_3_3::Block(point) * __this->zpp_inner->c) + (_Function_3_4::Block(point) * __this->zpp_inner->d));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(661)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(661)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						HX_STACK_LINE(661)
						::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(661)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(661)
							ret1 = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(661)
							ret1 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(661)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
							HX_STACK_LINE(661)
							ret1->zpp_pool = null();
							HX_STACK_LINE(661)
							ret1->zpp_disp = false;
							HX_STACK_LINE(661)
							if (((ret1 == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(661)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(661)
						if (((ret1->zpp_inner == null()))){
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
									HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",661);
									{
										HX_STACK_LINE(661)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(661)
										::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
										HX_STACK_LINE(661)
										{
											HX_STACK_LINE(661)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(661)
												ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
											}
											else{
												HX_STACK_LINE(661)
												ret2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(661)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
												HX_STACK_LINE(661)
												ret2->next = null();
											}
											HX_STACK_LINE(661)
											ret2->weak = false;
										}
										HX_STACK_LINE(661)
										ret2->_immutable = immutable;
										HX_STACK_LINE(661)
										{
											HX_STACK_LINE(661)
											ret2->x = x;
											HX_STACK_LINE(661)
											ret2->y = y;
											HX_STACK_LINE(661)
											{
											}
										}
										HX_STACK_LINE(661)
										return ret2;
									}
									return null();
								}
							};
							HX_STACK_LINE(661)
							ret1->zpp_inner = _Function_4_1::Block(x,y);
							HX_STACK_LINE(661)
							ret1->zpp_inner->outer = ret1;
						}
						else{
							HX_STACK_LINE(661)
							if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
								HX_STACK_LINE(661)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(661)
							{
								HX_STACK_LINE(661)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(661)
								if ((_this->_immutable)){
									HX_STACK_LINE(661)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(661)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(661)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(661)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(661)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_4_1{
								inline static Float Block( ::nape::geom::Vec2 &ret1){
									HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",661);
									{
										HX_STACK_LINE(661)
										if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
											HX_STACK_LINE(661)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(661)
										{
											HX_STACK_LINE(661)
											::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(661)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(661)
												_this->_validate();
											}
										}
										HX_STACK_LINE(661)
										return ret1->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::nape::geom::Vec2 &ret1){
									HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",661);
									{
										HX_STACK_LINE(661)
										if (((bool((ret1 != null())) && bool(ret1->zpp_disp)))){
											HX_STACK_LINE(661)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(661)
										{
											HX_STACK_LINE(661)
											::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(661)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(661)
												_this->_validate();
											}
										}
										HX_STACK_LINE(661)
										return ret1->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(661)
							if ((!(((bool((_Function_4_1::Block(ret1) == x)) && bool((_Function_4_2::Block(ret1) == y))))))){
								HX_STACK_LINE(661)
								{
									HX_STACK_LINE(661)
									ret1->zpp_inner->x = x;
									HX_STACK_LINE(661)
									ret1->zpp_inner->y = y;
									HX_STACK_LINE(661)
									{
									}
								}
								HX_STACK_LINE(661)
								{
									HX_STACK_LINE(661)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(661)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(661)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(661)
							ret1;
						}
						HX_STACK_LINE(661)
						ret1->zpp_inner->weak = weak;
						HX_STACK_LINE(661)
						return ret1;
					}
					return null();
				}
			};
			HX_STACK_LINE(660)
			ret = _Function_2_1::Block(this,point,weak);
		}
		else{
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Mat23_obj *__this,::nape::geom::Vec2 &point,bool &weak){
					HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",664);
					{
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &point){
								HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",664);
								{
									HX_STACK_LINE(664)
									if (((bool((point != null())) && bool(point->zpp_disp)))){
										HX_STACK_LINE(664)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(664)
									{
										HX_STACK_LINE(664)
										::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(664)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(664)
											_this->_validate();
										}
									}
									HX_STACK_LINE(664)
									return point->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &point){
								HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",664);
								{
									HX_STACK_LINE(664)
									if (((bool((point != null())) && bool(point->zpp_disp)))){
										HX_STACK_LINE(664)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(664)
									{
										HX_STACK_LINE(664)
										::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(664)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(664)
											_this->_validate();
										}
									}
									HX_STACK_LINE(664)
									return point->zpp_inner->y;
								}
								return null();
							}
						};
						struct _Function_3_3{
							inline static Float Block( ::nape::geom::Vec2 &point){
								HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",664);
								{
									HX_STACK_LINE(664)
									if (((bool((point != null())) && bool(point->zpp_disp)))){
										HX_STACK_LINE(664)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(664)
									{
										HX_STACK_LINE(664)
										::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(664)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(664)
											_this->_validate();
										}
									}
									HX_STACK_LINE(664)
									return point->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_4{
							inline static Float Block( ::nape::geom::Vec2 &point){
								HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",664);
								{
									HX_STACK_LINE(664)
									if (((bool((point != null())) && bool(point->zpp_disp)))){
										HX_STACK_LINE(664)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(664)
									{
										HX_STACK_LINE(664)
										::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(664)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(664)
											_this->_validate();
										}
									}
									HX_STACK_LINE(664)
									return point->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(664)
						Float x = (((_Function_3_1::Block(point) * __this->zpp_inner->a) + (_Function_3_2::Block(point) * __this->zpp_inner->b)) + __this->zpp_inner->tx);		HX_STACK_VAR(x,"x");
						Float y = (((_Function_3_3::Block(point) * __this->zpp_inner->c) + (_Function_3_4::Block(point) * __this->zpp_inner->d)) + __this->zpp_inner->ty);		HX_STACK_VAR(y,"y");
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
									HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",664);
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
									HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",664);
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
									HX_STACK_PUSH("*::closure","nape/geom/Mat23.hx",664);
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
			HX_STACK_LINE(663)
			ret = _Function_2_1::Block(this,point,weak);
		}
		HX_STACK_LINE(666)
		if ((point->zpp_inner->weak)){
			HX_STACK_LINE(670)
			{
				HX_STACK_LINE(670)
				if (((bool((point != null())) && bool(point->zpp_disp)))){
					HX_STACK_LINE(670)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(670)
				{
					HX_STACK_LINE(670)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(670)
					if ((_this->_immutable)){
						HX_STACK_LINE(670)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(670)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(670)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(670)
				if ((point->zpp_inner->_inuse)){
					HX_STACK_LINE(670)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(670)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(670)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(670)
				point->zpp_inner = null();
				HX_STACK_LINE(670)
				{
					HX_STACK_LINE(670)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(670)
					o->zpp_pool = null();
					HX_STACK_LINE(670)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(670)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(670)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(670)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(670)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(670)
				{
					HX_STACK_LINE(670)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(670)
					{
						HX_STACK_LINE(670)
						if (((o->outer != null()))){
							HX_STACK_LINE(670)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(670)
							o->outer = null();
						}
						HX_STACK_LINE(670)
						o->_isimmutable = null();
						HX_STACK_LINE(670)
						o->_validate = null();
						HX_STACK_LINE(670)
						o->_invalidate = null();
					}
					HX_STACK_LINE(670)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(670)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(671)
			true;
		}
		else{
			HX_STACK_LINE(673)
			false;
		}
		HX_STACK_LINE(677)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Mat23_obj,transform,return )

::nape::geom::Mat23 Mat23_obj::concat( ::nape::geom::Mat23 matrix){
	HX_STACK_PUSH("Mat23::concat","nape/geom/Mat23.hx",622);
	HX_STACK_THIS(this);
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_LINE(623)
	::nape::geom::Mat23 m = matrix;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(625)
	if (((m == null()))){
		HX_STACK_LINE(625)
		hx::Throw (HX_CSTRING("Error: Cannot concatenate with null Mat23"));
	}
	HX_STACK_LINE(629)
	return ::nape::geom::Mat23_obj::__new(((m->zpp_inner->a * this->zpp_inner->a) + (m->zpp_inner->b * this->zpp_inner->c)),((m->zpp_inner->a * this->zpp_inner->b) + (m->zpp_inner->b * this->zpp_inner->d)),((m->zpp_inner->c * this->zpp_inner->a) + (m->zpp_inner->d * this->zpp_inner->c)),((m->zpp_inner->c * this->zpp_inner->b) + (m->zpp_inner->d * this->zpp_inner->d)),(((m->zpp_inner->a * this->zpp_inner->tx) + (m->zpp_inner->b * this->zpp_inner->ty)) + m->zpp_inner->tx),(((m->zpp_inner->c * this->zpp_inner->tx) + (m->zpp_inner->d * this->zpp_inner->ty)) + m->zpp_inner->ty));
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,concat,return )

::nape::geom::Mat23 Mat23_obj::transpose( ){
	HX_STACK_PUSH("Mat23::transpose","nape/geom/Mat23.hx",606);
	HX_STACK_THIS(this);
	HX_STACK_LINE(606)
	return ::nape::geom::Mat23_obj::__new(this->zpp_inner->a,this->zpp_inner->c,this->zpp_inner->b,this->zpp_inner->d,((-(this->zpp_inner->a) * this->zpp_inner->tx) - (this->zpp_inner->c * this->zpp_inner->ty)),((-(this->zpp_inner->b) * this->zpp_inner->tx) - (this->zpp_inner->d * this->zpp_inner->ty)));
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,transpose,return )

::nape::geom::Mat23 Mat23_obj::inverse( ){
	HX_STACK_PUSH("Mat23::inverse","nape/geom/Mat23.hx",577);
	HX_STACK_THIS(this);
	HX_STACK_LINE(579)
	if ((this->singular())){
		HX_STACK_LINE(579)
		hx::Throw (HX_CSTRING("Error: Matrix is singular and cannot be inverted"));
	}
	HX_STACK_LINE(583)
	Float idet = (Float(1.0) / Float((((this->zpp_inner->a * this->zpp_inner->d) - (this->zpp_inner->b * this->zpp_inner->c)))));		HX_STACK_VAR(idet,"idet");
	HX_STACK_LINE(584)
	return ::nape::geom::Mat23_obj::__new((this->zpp_inner->d * idet),(-(this->zpp_inner->b) * idet),(-(this->zpp_inner->c) * idet),(this->zpp_inner->a * idet),((((this->zpp_inner->b * this->zpp_inner->ty) - (this->zpp_inner->d * this->zpp_inner->tx))) * idet),((((this->zpp_inner->c * this->zpp_inner->tx) - (this->zpp_inner->a * this->zpp_inner->ty))) * idet));
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,inverse,return )

bool Mat23_obj::singular( ){
	HX_STACK_PUSH("Mat23::singular","nape/geom/Mat23.hx",560);
	HX_STACK_THIS(this);
	HX_STACK_LINE(561)
	Float norm = ((((this->zpp_inner->a * this->zpp_inner->a) + (this->zpp_inner->b * this->zpp_inner->b)) + (this->zpp_inner->c * this->zpp_inner->c)) + (this->zpp_inner->d * this->zpp_inner->d));		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(562)
	Float limit = ((this->zpp_inner->a * this->zpp_inner->d) - (this->zpp_inner->b * this->zpp_inner->c));		HX_STACK_VAR(limit,"limit");
	HX_STACK_LINE(563)
	if (((limit < (int)0))){
		HX_STACK_LINE(563)
		limit = -(limit);
	}
	HX_STACK_LINE(564)
	return (norm > (::nape::Config_obj::illConditionedThreshold * limit));
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,singular,return )

Float Mat23_obj::get_determinant( ){
	HX_STACK_PUSH("Mat23::get_determinant","nape/geom/Mat23.hx",547);
	HX_STACK_THIS(this);
	HX_STACK_LINE(547)
	return ((this->zpp_inner->a * this->zpp_inner->d) - (this->zpp_inner->b * this->zpp_inner->c));
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_determinant,return )

::nape::geom::Mat23 Mat23_obj::reset( ){
	HX_STACK_PUSH("Mat23::reset","nape/geom/Mat23.hx",433);
	HX_STACK_THIS(this);
	HX_STACK_LINE(433)
	return this->setAs(null(),null(),null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,reset,return )

::nape::geom::Mat23 Mat23_obj::setAs( hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float a = __o_a.Default(1.0);
Float b = __o_b.Default(0.0);
Float c = __o_c.Default(0.0);
Float d = __o_d.Default(1.0);
Float tx = __o_tx.Default(0.0);
Float ty = __o_ty.Default(0.0);
	HX_STACK_PUSH("Mat23::setAs","nape/geom/Mat23.hx",420);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_ARG(tx,"tx");
	HX_STACK_ARG(ty,"ty");
{
		HX_STACK_LINE(421)
		this->zpp_inner->setas(a,b,c,d,tx,ty);
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(422)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(422)
				_this->_invalidate();
			}
		}
		HX_STACK_LINE(423)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(Mat23_obj,setAs,return )

::nape::geom::Mat23 Mat23_obj::set( ::nape::geom::Mat23 matrix){
	HX_STACK_PUSH("Mat23::set","nape/geom/Mat23.hx",396);
	HX_STACK_THIS(this);
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_LINE(398)
	if (((matrix == null()))){
		HX_STACK_LINE(398)
		hx::Throw (HX_CSTRING("Error: Cannot set form null matrix"));
	}
	HX_STACK_LINE(402)
	{
		HX_STACK_LINE(402)
		::zpp_nape::geom::ZPP_Mat23 m = matrix->zpp_inner;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(402)
		this->zpp_inner->setas(m->a,m->b,m->c,m->d,m->tx,m->ty);
	}
	HX_STACK_LINE(403)
	{
		HX_STACK_LINE(403)
		::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(403)
		if (((_this->_invalidate != null()))){
			HX_STACK_LINE(403)
			_this->_invalidate();
		}
	}
	HX_STACK_LINE(404)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set,return )

::nape::geom::Mat23 Mat23_obj::copy( ){
	HX_STACK_PUSH("Mat23::copy","nape/geom/Mat23.hx",386);
	HX_STACK_THIS(this);
	HX_STACK_LINE(386)
	return ::nape::geom::Mat23_obj::__new(this->zpp_inner->a,this->zpp_inner->b,this->zpp_inner->c,this->zpp_inner->d,this->zpp_inner->tx,this->zpp_inner->ty);
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,copy,return )

Float Mat23_obj::set_ty( Float ty){
	HX_STACK_PUSH("Mat23::set_ty","nape/geom/Mat23.hx",342);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ty,"ty");
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(345)
		if (((ty != ty))){
			HX_STACK_LINE(345)
			hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("ty")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(349)
		this->zpp_inner->ty = ty;
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(350)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(350)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(352)
	return this->zpp_inner->ty;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set_ty,return )

Float Mat23_obj::get_ty( ){
	HX_STACK_PUSH("Mat23::get_ty","nape/geom/Mat23.hx",339);
	HX_STACK_THIS(this);
	HX_STACK_LINE(339)
	return this->zpp_inner->ty;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_ty,return )

Float Mat23_obj::set_tx( Float tx){
	HX_STACK_PUSH("Mat23::set_tx","nape/geom/Mat23.hx",315);
	HX_STACK_THIS(this);
	HX_STACK_ARG(tx,"tx");
	HX_STACK_LINE(316)
	{
		HX_STACK_LINE(318)
		if (((tx != tx))){
			HX_STACK_LINE(318)
			hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("tx")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(322)
		this->zpp_inner->tx = tx;
		HX_STACK_LINE(323)
		{
			HX_STACK_LINE(323)
			::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(323)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(323)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(325)
	return this->zpp_inner->tx;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set_tx,return )

Float Mat23_obj::get_tx( ){
	HX_STACK_PUSH("Mat23::get_tx","nape/geom/Mat23.hx",312);
	HX_STACK_THIS(this);
	HX_STACK_LINE(312)
	return this->zpp_inner->tx;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_tx,return )

Float Mat23_obj::set_d( Float d){
	HX_STACK_PUSH("Mat23::set_d","nape/geom/Mat23.hx",288);
	HX_STACK_THIS(this);
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(291)
		if (((d != d))){
			HX_STACK_LINE(291)
			hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("d")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(295)
		this->zpp_inner->d = d;
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(296)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(296)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(298)
	return this->zpp_inner->d;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set_d,return )

Float Mat23_obj::get_d( ){
	HX_STACK_PUSH("Mat23::get_d","nape/geom/Mat23.hx",285);
	HX_STACK_THIS(this);
	HX_STACK_LINE(285)
	return this->zpp_inner->d;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_d,return )

Float Mat23_obj::set_c( Float c){
	HX_STACK_PUSH("Mat23::set_c","nape/geom/Mat23.hx",261);
	HX_STACK_THIS(this);
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(264)
		if (((c != c))){
			HX_STACK_LINE(264)
			hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("c")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(268)
		this->zpp_inner->c = c;
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(269)
			::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(269)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(269)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(271)
	return this->zpp_inner->c;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set_c,return )

Float Mat23_obj::get_c( ){
	HX_STACK_PUSH("Mat23::get_c","nape/geom/Mat23.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_LINE(258)
	return this->zpp_inner->c;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_c,return )

Float Mat23_obj::set_b( Float b){
	HX_STACK_PUSH("Mat23::set_b","nape/geom/Mat23.hx",234);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(237)
		if (((b != b))){
			HX_STACK_LINE(237)
			hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("b")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(241)
		this->zpp_inner->b = b;
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(242)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(242)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(244)
	return this->zpp_inner->b;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set_b,return )

Float Mat23_obj::get_b( ){
	HX_STACK_PUSH("Mat23::get_b","nape/geom/Mat23.hx",231);
	HX_STACK_THIS(this);
	HX_STACK_LINE(231)
	return this->zpp_inner->b;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_b,return )

Float Mat23_obj::set_a( Float a){
	HX_STACK_PUSH("Mat23::set_a","nape/geom/Mat23.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(210)
		if (((a != a))){
			HX_STACK_LINE(210)
			hx::Throw (((HX_CSTRING("Error: Mat23::") + HX_CSTRING("a")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(214)
		this->zpp_inner->a = a;
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			::zpp_nape::geom::ZPP_Mat23 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(215)
			if (((_this->_invalidate != null()))){
				HX_STACK_LINE(215)
				_this->_invalidate();
			}
		}
	}
	HX_STACK_LINE(217)
	return this->zpp_inner->a;
}


HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,set_a,return )

Float Mat23_obj::get_a( ){
	HX_STACK_PUSH("Mat23::get_a","nape/geom/Mat23.hx",204);
	HX_STACK_THIS(this);
	HX_STACK_LINE(204)
	return this->zpp_inner->a;
}


HX_DEFINE_DYNAMIC_FUNC0(Mat23_obj,get_a,return )

::nape::geom::Mat23 Mat23_obj::rotation( Float angle){
	HX_STACK_PUSH("Mat23::rotation","nape/geom/Mat23.hx",490);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(492)
	if (((angle != angle))){
		HX_STACK_LINE(492)
		hx::Throw (HX_CSTRING("Error: Cannot create rotation matrix with NaN angle"));
	}
	HX_STACK_LINE(496)
	Float cos = ::Math_obj::cos(angle);		HX_STACK_VAR(cos,"cos");
	HX_STACK_LINE(497)
	Float sin = ::Math_obj::sin(angle);		HX_STACK_VAR(sin,"sin");
	HX_STACK_LINE(498)
	return ::nape::geom::Mat23_obj::__new(cos,-(sin),sin,cos,(int)0,(int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mat23_obj,rotation,return )

::nape::geom::Mat23 Mat23_obj::translation( Float tx,Float ty){
	HX_STACK_PUSH("Mat23::translation","nape/geom/Mat23.hx",513);
	HX_STACK_ARG(tx,"tx");
	HX_STACK_ARG(ty,"ty");
	HX_STACK_LINE(513)
	return ::nape::geom::Mat23_obj::__new((int)1,(int)0,(int)0,(int)1,tx,ty);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mat23_obj,translation,return )

::nape::geom::Mat23 Mat23_obj::scale( Float sx,Float sy){
	HX_STACK_PUSH("Mat23::scale","nape/geom/Mat23.hx",529);
	HX_STACK_ARG(sx,"sx");
	HX_STACK_ARG(sy,"sy");
	HX_STACK_LINE(529)
	return ::nape::geom::Mat23_obj::__new(sx,(int)0,(int)0,sy,(int)0,(int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mat23_obj,scale,return )


Mat23_obj::Mat23_obj()
{
}

void Mat23_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mat23);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Mat23_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Mat23_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return get_d(); }
		if (HX_FIELD_EQ(inName,"c") ) { return get_c(); }
		if (HX_FIELD_EQ(inName,"b") ) { return get_b(); }
		if (HX_FIELD_EQ(inName,"a") ) { return get_a(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ty") ) { return get_ty(); }
		if (HX_FIELD_EQ(inName,"tx") ) { return get_tx(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"setAs") ) { return setAs_dyn(); }
		if (HX_FIELD_EQ(inName,"set_d") ) { return set_d_dyn(); }
		if (HX_FIELD_EQ(inName,"get_d") ) { return get_d_dyn(); }
		if (HX_FIELD_EQ(inName,"set_c") ) { return set_c_dyn(); }
		if (HX_FIELD_EQ(inName,"get_c") ) { return get_c_dyn(); }
		if (HX_FIELD_EQ(inName,"set_b") ) { return set_b_dyn(); }
		if (HX_FIELD_EQ(inName,"get_b") ) { return get_b_dyn(); }
		if (HX_FIELD_EQ(inName,"set_a") ) { return set_a_dyn(); }
		if (HX_FIELD_EQ(inName,"get_a") ) { return get_a_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ty") ) { return set_ty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ty") ) { return get_ty_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tx") ) { return set_tx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tx") ) { return get_tx_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { return inverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"singular") ) { return singular_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"orthogonal") ) { return orthogonal_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"translation") ) { return translation_dyn(); }
		if (HX_FIELD_EQ(inName,"determinant") ) { return get_determinant(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"orthogonalise") ) { return orthogonalise_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"equiorthogonal") ) { return equiorthogonal_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_determinant") ) { return get_determinant_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"inverseTransform") ) { return inverseTransform_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"equiorthogonalise") ) { return equiorthogonalise_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mat23_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return set_d(inValue); }
		if (HX_FIELD_EQ(inName,"c") ) { return set_c(inValue); }
		if (HX_FIELD_EQ(inName,"b") ) { return set_b(inValue); }
		if (HX_FIELD_EQ(inName,"a") ) { return set_a(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ty") ) { return set_ty(inValue); }
		if (HX_FIELD_EQ(inName,"tx") ) { return set_tx(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_Mat23 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mat23_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("determinant"));
	outFields->push(HX_CSTRING("ty"));
	outFields->push(HX_CSTRING("tx"));
	outFields->push(HX_CSTRING("d"));
	outFields->push(HX_CSTRING("c"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("rotation"),
	HX_CSTRING("translation"),
	HX_CSTRING("scale"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("orthogonalise"),
	HX_CSTRING("equiorthogonalise"),
	HX_CSTRING("orthogonal"),
	HX_CSTRING("equiorthogonal"),
	HX_CSTRING("toString"),
	HX_CSTRING("inverseTransform"),
	HX_CSTRING("transform"),
	HX_CSTRING("concat"),
	HX_CSTRING("transpose"),
	HX_CSTRING("inverse"),
	HX_CSTRING("singular"),
	HX_CSTRING("get_determinant"),
	HX_CSTRING("reset"),
	HX_CSTRING("setAs"),
	HX_CSTRING("set"),
	HX_CSTRING("copy"),
	HX_CSTRING("set_ty"),
	HX_CSTRING("get_ty"),
	HX_CSTRING("set_tx"),
	HX_CSTRING("get_tx"),
	HX_CSTRING("set_d"),
	HX_CSTRING("get_d"),
	HX_CSTRING("set_c"),
	HX_CSTRING("get_c"),
	HX_CSTRING("set_b"),
	HX_CSTRING("get_b"),
	HX_CSTRING("set_a"),
	HX_CSTRING("get_a"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mat23_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mat23_obj::__mClass,"__mClass");
};

Class Mat23_obj::__mClass;

void Mat23_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.Mat23"), hx::TCanCast< Mat23_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Mat23_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
