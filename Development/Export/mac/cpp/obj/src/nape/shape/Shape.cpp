#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_FluidProperties
#include <nape/phys/FluidProperties.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeType
#include <nape/shape/ShapeType.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Collide
#include <zpp_nape/geom/ZPP_Collide.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Geom
#include <zpp_nape/geom/ZPP_Geom.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace shape{

Void Shape_obj::__construct()
{
HX_STACK_PUSH("Shape::new","nape/shape/Shape.hx",177);
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(215)
	try{
		HX_STACK_LINE(215)
		super::__construct();
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(224)
	hx::Throw (HX_CSTRING("Error: Shape cannot be instantiated derp!"));
}
;
	return null();
}

Shape_obj::~Shape_obj() { }

Dynamic Shape_obj::__CreateEmpty() { return  new Shape_obj; }
hx::ObjectPtr< Shape_obj > Shape_obj::__new()
{  hx::ObjectPtr< Shape_obj > result = new Shape_obj();
	result->__construct();
	return result;}

Dynamic Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shape_obj > result = new Shape_obj();
	result->__construct();
	return result;}

::String Shape_obj::toString( ){
	HX_STACK_PUSH("Shape::toString","nape/shape/Shape.hx",660);
	HX_STACK_THIS(this);
	HX_STACK_LINE(661)
	::String ret = (  (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))) ? ::String(HX_CSTRING("Circle")) : ::String(HX_CSTRING("Polygon")) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(662)
	return ((ret + HX_CSTRING("#")) + this->zpp_inner_i->id);
}


::nape::shape::Shape Shape_obj::copy( ){
	HX_STACK_PUSH("Shape::copy","nape/shape/Shape.hx",654);
	HX_STACK_THIS(this);
	HX_STACK_LINE(654)
	return this->zpp_inner->copy();
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,copy,return )

bool Shape_obj::contains( ::nape::geom::Vec2 point){
	HX_STACK_PUSH("Shape::contains","nape/shape/Shape.hx",616);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(617)
	if (((bool((point != null())) && bool(point->zpp_disp)))){
		HX_STACK_LINE(619)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(623)
	if (((point == null()))){
		HX_STACK_LINE(623)
		hx::Throw (HX_CSTRING("Cannot check null point for containment"));
	}
	HX_STACK_LINE(626)
	if (((((  (((this->zpp_inner->body != null()))) ? ::nape::phys::Body(this->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) == null()))){
		HX_STACK_LINE(626)
		hx::Throw (HX_CSTRING("Error: Shape is not well defined without a Body"));
	}
	HX_STACK_LINE(628)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(this->zpp_inner);
	HX_STACK_LINE(629)
	{
		HX_STACK_LINE(629)
		::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(629)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(629)
			_this->_validate();
		}
	}
	HX_STACK_LINE(630)
	bool ret = ::zpp_nape::geom::ZPP_Collide_obj::shapeContains(this->zpp_inner,point->zpp_inner);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(631)
	if ((point->zpp_inner->weak)){
		HX_STACK_LINE(635)
		{
			HX_STACK_LINE(635)
			if (((bool((point != null())) && bool(point->zpp_disp)))){
				HX_STACK_LINE(635)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(635)
			{
				HX_STACK_LINE(635)
				::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(635)
				if ((_this->_immutable)){
					HX_STACK_LINE(635)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(635)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(635)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(635)
			if ((point->zpp_inner->_inuse)){
				HX_STACK_LINE(635)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(635)
			::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(635)
			point->zpp_inner->outer = null();
			HX_STACK_LINE(635)
			point->zpp_inner = null();
			HX_STACK_LINE(635)
			{
				HX_STACK_LINE(635)
				::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(635)
				o->zpp_pool = null();
				HX_STACK_LINE(635)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(635)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(635)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(635)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(635)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(635)
			{
				HX_STACK_LINE(635)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(635)
				{
					HX_STACK_LINE(635)
					if (((o->outer != null()))){
						HX_STACK_LINE(635)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(635)
						o->outer = null();
					}
					HX_STACK_LINE(635)
					o->_isimmutable = null();
					HX_STACK_LINE(635)
					o->_validate = null();
					HX_STACK_LINE(635)
					o->_invalidate = null();
				}
				HX_STACK_LINE(635)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(635)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(636)
		true;
	}
	else{
		HX_STACK_LINE(638)
		false;
	}
	HX_STACK_LINE(642)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,contains,return )

::nape::shape::Shape Shape_obj::transform( ::nape::geom::Mat23 matrix){
	HX_STACK_PUSH("Shape::transform","nape/shape/Shape.hx",584);
	HX_STACK_THIS(this);
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_LINE(585)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::transform()"));
	HX_STACK_LINE(587)
	if (((bool((bool((this->zpp_inner->body != null())) && bool((this->zpp_inner->body->space != null())))) && bool((this->zpp_inner->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))){
		HX_STACK_LINE(587)
		hx::Throw (HX_CSTRING("Error: Cannot modify Shape belonging to a static Object once inside a Space"));
	}
	HX_STACK_LINE(588)
	if (((matrix == null()))){
		HX_STACK_LINE(588)
		hx::Throw (HX_CSTRING("Error: Cannot transform Shape by null matrix"));
	}
	HX_STACK_LINE(589)
	if ((matrix->singular())){
		HX_STACK_LINE(589)
		hx::Throw (HX_CSTRING("Error: Cannot transform Shape by a singular matrix"));
	}
	HX_STACK_LINE(591)
	if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
		HX_STACK_LINE(591)
		if ((matrix->equiorthogonal())){
			HX_STACK_LINE(592)
			this->zpp_inner->circle->__transform(matrix);
		}
		else{
			HX_STACK_LINE(595)
			hx::Throw (HX_CSTRING("Error: Cannot transform Circle by a non equiorthogonal matrix"));
		}
	}
	else{
		HX_STACK_LINE(601)
		this->zpp_inner->polygon->__transform(matrix);
	}
	HX_STACK_LINE(602)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,transform,return )

::nape::shape::Shape Shape_obj::rotate( Float angle){
	HX_STACK_PUSH("Shape::rotate","nape/shape/Shape.hx",557);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(558)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::rotate()"));
	HX_STACK_LINE(560)
	if (((bool((bool((this->zpp_inner->body != null())) && bool((this->zpp_inner->body->space != null())))) && bool((this->zpp_inner->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))){
		HX_STACK_LINE(560)
		hx::Throw (HX_CSTRING("Error: Cannot modify Shape belonging to a static Object once inside a Space"));
	}
	HX_STACK_LINE(561)
	if (((angle != angle))){
		HX_STACK_LINE(561)
		hx::Throw (HX_CSTRING("Error: Cannot rotate Shape by NaN"));
	}
	HX_STACK_LINE(563)
	Float dr = hx::Mod(angle,(((int)2 * ::Math_obj::PI)));		HX_STACK_VAR(dr,"dr");
	HX_STACK_LINE(564)
	if (((dr != 0.0))){
		HX_STACK_LINE(565)
		Float cos = ::Math_obj::cos(angle);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(566)
		Float sin = ::Math_obj::sin(angle);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(567)
		if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
			HX_STACK_LINE(567)
			this->zpp_inner->circle->__rotate(sin,cos);
		}
		else{
			HX_STACK_LINE(568)
			this->zpp_inner->polygon->__rotate(sin,cos);
		}
	}
	HX_STACK_LINE(570)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,rotate,return )

::nape::shape::Shape Shape_obj::scale( Float scalex,Float scaley){
	HX_STACK_PUSH("Shape::scale","nape/shape/Shape.hx",527);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scalex,"scalex");
	HX_STACK_ARG(scaley,"scaley");
	HX_STACK_LINE(528)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::scale()"));
	HX_STACK_LINE(530)
	if (((bool((bool((this->zpp_inner->body != null())) && bool((this->zpp_inner->body->space != null())))) && bool((this->zpp_inner->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))){
		HX_STACK_LINE(530)
		hx::Throw (HX_CSTRING("Error: Cannot modify Shape belonging to a static Object once inside a Space"));
	}
	HX_STACK_LINE(531)
	if (((bool((scalex != scalex)) || bool((scaley != scaley))))){
		HX_STACK_LINE(531)
		hx::Throw (HX_CSTRING("Error: Cannot scale Shape by NaN"));
	}
	HX_STACK_LINE(532)
	if (((bool((scalex == (int)0)) || bool((scaley == (int)0))))){
		HX_STACK_LINE(532)
		hx::Throw (HX_CSTRING("Error: Cannot Scale shape by a factor of 0"));
	}
	HX_STACK_LINE(534)
	if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
		HX_STACK_LINE(535)
		Float d = ((scalex * scalex) - (scaley * scaley));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(536)
		if ((((d * d) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))){
			HX_STACK_LINE(536)
			this->zpp_inner->circle->__scale(scalex,scaley);
		}
		else{
			HX_STACK_LINE(539)
			hx::Throw (HX_CSTRING("Error: Cannot perform a non equal scaling on a Circle"));
		}
	}
	else{
		HX_STACK_LINE(545)
		this->zpp_inner->polygon->__scale(scalex,scaley);
	}
	HX_STACK_LINE(546)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Shape_obj,scale,return )

::nape::shape::Shape Shape_obj::translate( ::nape::geom::Vec2 translation){
	HX_STACK_PUSH("Shape::translate","nape/shape/Shape.hx",487);
	HX_STACK_THIS(this);
	HX_STACK_ARG(translation,"translation");
	HX_STACK_LINE(488)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::translate()"));
	HX_STACK_LINE(489)
	if (((bool((translation != null())) && bool(translation->zpp_disp)))){
		HX_STACK_LINE(491)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(495)
	if (((bool((bool((this->zpp_inner->body != null())) && bool((this->zpp_inner->body->space != null())))) && bool((this->zpp_inner->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))){
		HX_STACK_LINE(495)
		hx::Throw (HX_CSTRING("Error: Cannot modify Shape belonging to a static Object once inside a Space"));
	}
	HX_STACK_LINE(496)
	if (((translation == null()))){
		HX_STACK_LINE(496)
		hx::Throw (HX_CSTRING("Error: Cannot displace Shape by null Vec2"));
	}
	HX_STACK_LINE(498)
	if (((translation->lsq() > (int)0))){
		HX_STACK_LINE(498)
		if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::Vec2 &translation){
					HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",499);
					{
						HX_STACK_LINE(499)
						if (((bool((translation != null())) && bool(translation->zpp_disp)))){
							HX_STACK_LINE(499)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(499)
						{
							HX_STACK_LINE(499)
							::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(499)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(499)
								_this->_validate();
							}
						}
						HX_STACK_LINE(499)
						return translation->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( ::nape::geom::Vec2 &translation){
					HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",499);
					{
						HX_STACK_LINE(499)
						if (((bool((translation != null())) && bool(translation->zpp_disp)))){
							HX_STACK_LINE(499)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(499)
						{
							HX_STACK_LINE(499)
							::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(499)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(499)
								_this->_validate();
							}
						}
						HX_STACK_LINE(499)
						return translation->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(499)
			this->zpp_inner->circle->__translate(_Function_3_1::Block(translation),_Function_3_2::Block(translation));
		}
		else{
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::Vec2 &translation){
					HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",500);
					{
						HX_STACK_LINE(500)
						if (((bool((translation != null())) && bool(translation->zpp_disp)))){
							HX_STACK_LINE(500)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(500)
						{
							HX_STACK_LINE(500)
							::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(500)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(500)
								_this->_validate();
							}
						}
						HX_STACK_LINE(500)
						return translation->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( ::nape::geom::Vec2 &translation){
					HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",500);
					{
						HX_STACK_LINE(500)
						if (((bool((translation != null())) && bool(translation->zpp_disp)))){
							HX_STACK_LINE(500)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(500)
						{
							HX_STACK_LINE(500)
							::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(500)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(500)
								_this->_validate();
							}
						}
						HX_STACK_LINE(500)
						return translation->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(500)
			this->zpp_inner->polygon->__translate(_Function_3_1::Block(translation),_Function_3_2::Block(translation));
		}
	}
	HX_STACK_LINE(502)
	if ((translation->zpp_inner->weak)){
		HX_STACK_LINE(506)
		{
			HX_STACK_LINE(506)
			if (((bool((translation != null())) && bool(translation->zpp_disp)))){
				HX_STACK_LINE(506)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(506)
			{
				HX_STACK_LINE(506)
				::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(506)
				if ((_this->_immutable)){
					HX_STACK_LINE(506)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(506)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(506)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(506)
			if ((translation->zpp_inner->_inuse)){
				HX_STACK_LINE(506)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(506)
			::zpp_nape::geom::ZPP_Vec2 inner = translation->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(506)
			translation->zpp_inner->outer = null();
			HX_STACK_LINE(506)
			translation->zpp_inner = null();
			HX_STACK_LINE(506)
			{
				HX_STACK_LINE(506)
				::nape::geom::Vec2 o = translation;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(506)
				o->zpp_pool = null();
				HX_STACK_LINE(506)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(506)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(506)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(506)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(506)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(506)
			{
				HX_STACK_LINE(506)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(506)
				{
					HX_STACK_LINE(506)
					if (((o->outer != null()))){
						HX_STACK_LINE(506)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(506)
						o->outer = null();
					}
					HX_STACK_LINE(506)
					o->_isimmutable = null();
					HX_STACK_LINE(506)
					o->_validate = null();
					HX_STACK_LINE(506)
					o->_invalidate = null();
				}
				HX_STACK_LINE(506)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(506)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(507)
		true;
	}
	else{
		HX_STACK_LINE(509)
		false;
	}
	HX_STACK_LINE(513)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,translate,return )

::nape::geom::AABB Shape_obj::get_bounds( ){
	HX_STACK_PUSH("Shape::get_bounds","nape/shape/Shape.hx",473);
	HX_STACK_THIS(this);
	HX_STACK_LINE(473)
	return this->zpp_inner->aabb->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_bounds,return )

bool Shape_obj::set_sensorEnabled( bool sensorEnabled){
	HX_STACK_PUSH("Shape::set_sensorEnabled","nape/shape/Shape.hx",454);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sensorEnabled,"sensorEnabled");
	HX_STACK_LINE(455)
	{
		HX_STACK_LINE(456)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::sensorEnabled"));
		HX_STACK_LINE(457)
		this->zpp_inner->sensorEnabled = sensorEnabled;
		HX_STACK_LINE(458)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(460)
	return this->zpp_inner->sensorEnabled;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_sensorEnabled,return )

bool Shape_obj::get_sensorEnabled( ){
	HX_STACK_PUSH("Shape::get_sensorEnabled","nape/shape/Shape.hx",451);
	HX_STACK_THIS(this);
	HX_STACK_LINE(451)
	return this->zpp_inner->sensorEnabled;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_sensorEnabled,return )

bool Shape_obj::set_fluidEnabled( bool fluidEnabled){
	HX_STACK_PUSH("Shape::set_fluidEnabled","nape/shape/Shape.hx",429);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fluidEnabled,"fluidEnabled");
	HX_STACK_LINE(430)
	{
		HX_STACK_LINE(431)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::fluidEnabled"));
		HX_STACK_LINE(432)
		this->zpp_inner->fluidEnabled = fluidEnabled;
		HX_STACK_LINE(433)
		if (((bool(fluidEnabled) && bool((this->zpp_inner->fluidProperties == null()))))){
			HX_STACK_LINE(433)
			::nape::phys::FluidProperties fluidProperties = ::nape::phys::FluidProperties_obj::__new(null(),null());		HX_STACK_VAR(fluidProperties,"fluidProperties");
			HX_STACK_LINE(433)
			{
				HX_STACK_LINE(433)
				if (((fluidProperties == null()))){
					HX_STACK_LINE(433)
					hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape fluidProperties, disable fluids by setting fluidEnabled to false"));
				}
				HX_STACK_LINE(433)
				this->zpp_inner->setFluid(fluidProperties->zpp_inner);
			}
			HX_STACK_LINE(433)
			{
				HX_STACK_LINE(433)
				this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::fluidProperties"));
				HX_STACK_LINE(433)
				if (((this->zpp_inner->fluidProperties == null()))){
					HX_STACK_LINE(433)
					this->zpp_inner->setFluid(::nape::phys::FluidProperties_obj::__new(null(),null())->zpp_inner);
				}
				HX_STACK_LINE(433)
				this->zpp_inner->fluidProperties->wrapper();
			}
		}
		HX_STACK_LINE(434)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(436)
	return this->zpp_inner->fluidEnabled;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_fluidEnabled,return )

bool Shape_obj::get_fluidEnabled( ){
	HX_STACK_PUSH("Shape::get_fluidEnabled","nape/shape/Shape.hx",426);
	HX_STACK_THIS(this);
	HX_STACK_LINE(426)
	return this->zpp_inner->fluidEnabled;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_fluidEnabled,return )

::nape::phys::FluidProperties Shape_obj::set_fluidProperties( ::nape::phys::FluidProperties fluidProperties){
	HX_STACK_PUSH("Shape::set_fluidProperties","nape/shape/Shape.hx",403);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fluidProperties,"fluidProperties");
	HX_STACK_LINE(404)
	{
		HX_STACK_LINE(406)
		if (((fluidProperties == null()))){
			HX_STACK_LINE(406)
			hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape fluidProperties, disable fluids by setting fluidEnabled to false"));
		}
		HX_STACK_LINE(408)
		this->zpp_inner->setFluid(fluidProperties->zpp_inner);
	}
	struct _Function_1_1{
		inline static ::nape::phys::FluidProperties Block( ::nape::shape::Shape_obj *__this){
			HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",410);
			{
				HX_STACK_LINE(410)
				__this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::fluidProperties"));
				HX_STACK_LINE(410)
				if (((__this->zpp_inner->fluidProperties == null()))){
					HX_STACK_LINE(410)
					__this->zpp_inner->setFluid(::nape::phys::FluidProperties_obj::__new(null(),null())->zpp_inner);
				}
				HX_STACK_LINE(410)
				return __this->zpp_inner->fluidProperties->wrapper();
			}
			return null();
		}
	};
	HX_STACK_LINE(410)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_fluidProperties,return )

::nape::phys::FluidProperties Shape_obj::get_fluidProperties( ){
	HX_STACK_PUSH("Shape::get_fluidProperties","nape/shape/Shape.hx",398);
	HX_STACK_THIS(this);
	HX_STACK_LINE(399)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::fluidProperties"));
	HX_STACK_LINE(400)
	if (((this->zpp_inner->fluidProperties == null()))){
		HX_STACK_LINE(400)
		this->zpp_inner->setFluid(::nape::phys::FluidProperties_obj::__new(null(),null())->zpp_inner);
	}
	HX_STACK_LINE(401)
	return this->zpp_inner->fluidProperties->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_fluidProperties,return )

::nape::dynamics::InteractionFilter Shape_obj::set_filter( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_PUSH("Shape::set_filter","nape/shape/Shape.hx",378);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");
	HX_STACK_LINE(379)
	{
		HX_STACK_LINE(380)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::filter"));
		HX_STACK_LINE(382)
		if (((filter == null()))){
			HX_STACK_LINE(382)
			hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape filter"));
		}
		HX_STACK_LINE(384)
		this->zpp_inner->setFilter(filter->zpp_inner);
	}
	HX_STACK_LINE(386)
	return this->zpp_inner->filter->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_filter,return )

::nape::dynamics::InteractionFilter Shape_obj::get_filter( ){
	HX_STACK_PUSH("Shape::get_filter","nape/shape/Shape.hx",375);
	HX_STACK_THIS(this);
	HX_STACK_LINE(375)
	return this->zpp_inner->filter->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_filter,return )

::nape::phys::Material Shape_obj::set_material( ::nape::phys::Material material){
	HX_STACK_PUSH("Shape::set_material","nape/shape/Shape.hx",358);
	HX_STACK_THIS(this);
	HX_STACK_ARG(material,"material");
	HX_STACK_LINE(359)
	{
		HX_STACK_LINE(360)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::material"));
		HX_STACK_LINE(362)
		if (((material == null()))){
			HX_STACK_LINE(362)
			hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape material"));
		}
		HX_STACK_LINE(364)
		this->zpp_inner->setMaterial(material->zpp_inner);
	}
	HX_STACK_LINE(366)
	return this->zpp_inner->material->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_material,return )

::nape::phys::Material Shape_obj::get_material( ){
	HX_STACK_PUSH("Shape::get_material","nape/shape/Shape.hx",355);
	HX_STACK_THIS(this);
	HX_STACK_LINE(355)
	return this->zpp_inner->material->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_material,return )

Float Shape_obj::get_angDrag( ){
	HX_STACK_PUSH("Shape::get_angDrag","nape/shape/Shape.hx",344);
	HX_STACK_THIS(this);
	HX_STACK_LINE(345)
	this->zpp_inner->validate_angDrag();
	HX_STACK_LINE(346)
	return this->zpp_inner->angDrag;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_angDrag,return )

Float Shape_obj::get_inertia( ){
	HX_STACK_PUSH("Shape::get_inertia","nape/shape/Shape.hx",335);
	HX_STACK_THIS(this);
	HX_STACK_LINE(336)
	this->zpp_inner->validate_area_inertia();
	HX_STACK_LINE(337)
	return this->zpp_inner->inertia;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_inertia,return )

Float Shape_obj::get_area( ){
	HX_STACK_PUSH("Shape::get_area","nape/shape/Shape.hx",326);
	HX_STACK_THIS(this);
	HX_STACK_LINE(327)
	this->zpp_inner->validate_area_inertia();
	HX_STACK_LINE(328)
	return this->zpp_inner->area;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_area,return )

::nape::geom::Vec2 Shape_obj::set_localCOM( ::nape::geom::Vec2 localCOM){
	HX_STACK_PUSH("Shape::set_localCOM","nape/shape/Shape.hx",305);
	HX_STACK_THIS(this);
	HX_STACK_ARG(localCOM,"localCOM");
	HX_STACK_LINE(306)
	{
		HX_STACK_LINE(307)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::localCOM"));
		HX_STACK_LINE(308)
		if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
			HX_STACK_LINE(310)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(314)
		if (((bool((bool((this->zpp_inner->body != null())) && bool((this->zpp_inner->body->space != null())))) && bool((this->zpp_inner->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))){
			HX_STACK_LINE(314)
			hx::Throw (HX_CSTRING("Error: Cannot modify Shape belonging to a static Object once inside a Space"));
		}
		HX_STACK_LINE(315)
		if (((localCOM == null()))){
			HX_STACK_LINE(315)
			hx::Throw (HX_CSTRING("Error: Shape::localCOM cannot be null"));
		}
		HX_STACK_LINE(317)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape_obj *__this){
					HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",317);
					{
						HX_STACK_LINE(317)
						if (((__this->zpp_inner->wrap_localCOM == null()))){
							HX_STACK_LINE(317)
							if (((__this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(317)
								__this->zpp_inner->circle->setupLocalCOM();
							}
							else{
								HX_STACK_LINE(317)
								__this->zpp_inner->polygon->setupLocalCOM();
							}
						}
						HX_STACK_LINE(317)
						return __this->zpp_inner->wrap_localCOM;
					}
					return null();
				}
			};
			HX_STACK_LINE(317)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(317)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(317)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(317)
			if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
				HX_STACK_LINE(317)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(317)
			{
				HX_STACK_LINE(317)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(317)
				if ((_this1->_immutable)){
					HX_STACK_LINE(317)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(317)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(317)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(317)
			if (((localCOM == null()))){
				HX_STACK_LINE(317)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &localCOM,::nape::geom::Vec2 _this){
					HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",317);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &localCOM){
								HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",317);
								{
									HX_STACK_LINE(317)
									if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
										HX_STACK_LINE(317)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(317)
									{
										HX_STACK_LINE(317)
										::zpp_nape::geom::ZPP_Vec2 _this1 = localCOM->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(317)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(317)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(317)
									return localCOM->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &localCOM){
								HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",317);
								{
									HX_STACK_LINE(317)
									if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
										HX_STACK_LINE(317)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(317)
									{
										HX_STACK_LINE(317)
										::zpp_nape::geom::ZPP_Vec2 _this1 = localCOM->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(317)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(317)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(317)
									return localCOM->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(317)
						Float x = _Function_4_1::Block(localCOM);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(localCOM);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(317)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(317)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(317)
						{
							HX_STACK_LINE(317)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(317)
							if ((_this1->_immutable)){
								HX_STACK_LINE(317)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(317)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(317)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(317)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(317)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",317);
								{
									HX_STACK_LINE(317)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(317)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(317)
									{
										HX_STACK_LINE(317)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(317)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(317)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(317)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",317);
								{
									HX_STACK_LINE(317)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(317)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(317)
									{
										HX_STACK_LINE(317)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(317)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(317)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(317)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(317)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(317)
							{
								HX_STACK_LINE(317)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(317)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(317)
								{
								}
							}
							HX_STACK_LINE(317)
							{
								HX_STACK_LINE(317)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(317)
								if (((_this1->_invalidate != null()))){
									HX_STACK_LINE(317)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(317)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(317)
			::nape::geom::Vec2 ret = _Function_3_2::Block(localCOM,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(317)
			if ((localCOM->zpp_inner->weak)){
				HX_STACK_LINE(317)
				{
					HX_STACK_LINE(317)
					if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
						HX_STACK_LINE(317)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(317)
						::zpp_nape::geom::ZPP_Vec2 _this1 = localCOM->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(317)
						if ((_this1->_immutable)){
							HX_STACK_LINE(317)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(317)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(317)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(317)
					if ((localCOM->zpp_inner->_inuse)){
						HX_STACK_LINE(317)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(317)
					::zpp_nape::geom::ZPP_Vec2 inner = localCOM->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(317)
					localCOM->zpp_inner->outer = null();
					HX_STACK_LINE(317)
					localCOM->zpp_inner = null();
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(317)
						::nape::geom::Vec2 o = localCOM;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(317)
						o->zpp_pool = null();
						HX_STACK_LINE(317)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(317)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(317)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(317)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(317)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(317)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(317)
						{
							HX_STACK_LINE(317)
							if (((o->outer != null()))){
								HX_STACK_LINE(317)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(317)
								o->outer = null();
							}
							HX_STACK_LINE(317)
							o->_isimmutable = null();
							HX_STACK_LINE(317)
							o->_validate = null();
							HX_STACK_LINE(317)
							o->_invalidate = null();
						}
						HX_STACK_LINE(317)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(317)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(317)
				true;
			}
			else{
				HX_STACK_LINE(317)
				false;
			}
			HX_STACK_LINE(317)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape_obj *__this){
			HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",319);
			{
				HX_STACK_LINE(319)
				if (((__this->zpp_inner->wrap_localCOM == null()))){
					HX_STACK_LINE(319)
					if (((__this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
						HX_STACK_LINE(319)
						__this->zpp_inner->circle->setupLocalCOM();
					}
					else{
						HX_STACK_LINE(319)
						__this->zpp_inner->polygon->setupLocalCOM();
					}
				}
				HX_STACK_LINE(319)
				return __this->zpp_inner->wrap_localCOM;
			}
			return null();
		}
	};
	HX_STACK_LINE(319)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_localCOM,return )

::nape::geom::Vec2 Shape_obj::get_localCOM( ){
	HX_STACK_PUSH("Shape::get_localCOM","nape/shape/Shape.hx",298);
	HX_STACK_THIS(this);
	HX_STACK_LINE(299)
	if (((this->zpp_inner->wrap_localCOM == null()))){
		HX_STACK_LINE(299)
		if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
			HX_STACK_LINE(300)
			this->zpp_inner->circle->setupLocalCOM();
		}
		else{
			HX_STACK_LINE(301)
			this->zpp_inner->polygon->setupLocalCOM();
		}
	}
	HX_STACK_LINE(303)
	return this->zpp_inner->wrap_localCOM;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_localCOM,return )

::nape::geom::Vec2 Shape_obj::get_worldCOM( ){
	HX_STACK_PUSH("Shape::get_worldCOM","nape/shape/Shape.hx",277);
	HX_STACK_THIS(this);
	HX_STACK_LINE(278)
	if (((this->zpp_inner->wrap_worldCOM == null()))){
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::nape::shape::Shape_obj *__this){
				HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",279);
				{
					HX_STACK_LINE(279)
					Float x = __this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
					Float y = __this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(279)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(279)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(279)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(279)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(279)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(279)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(279)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(279)
						ret->zpp_pool = null();
						HX_STACK_LINE(279)
						ret->zpp_disp = false;
						HX_STACK_LINE(279)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(279)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(279)
					if (((ret->zpp_inner == null()))){
						struct _Function_4_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",279);
								{
									HX_STACK_LINE(279)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(279)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(279)
									{
										HX_STACK_LINE(279)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(279)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(279)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(279)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(279)
											ret1->next = null();
										}
										HX_STACK_LINE(279)
										ret1->weak = false;
									}
									HX_STACK_LINE(279)
									ret1->_immutable = immutable;
									HX_STACK_LINE(279)
									{
										HX_STACK_LINE(279)
										ret1->x = x;
										HX_STACK_LINE(279)
										ret1->y = y;
										HX_STACK_LINE(279)
										{
										}
									}
									HX_STACK_LINE(279)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(279)
						ret->zpp_inner = _Function_4_1::Block(x,y);
						HX_STACK_LINE(279)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(279)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(279)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(279)
						{
							HX_STACK_LINE(279)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(279)
							if ((_this->_immutable)){
								HX_STACK_LINE(279)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(279)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(279)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(279)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(279)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",279);
								{
									HX_STACK_LINE(279)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(279)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(279)
									{
										HX_STACK_LINE(279)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(279)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(279)
											_this->_validate();
										}
									}
									HX_STACK_LINE(279)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",279);
								{
									HX_STACK_LINE(279)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(279)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(279)
									{
										HX_STACK_LINE(279)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(279)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(279)
											_this->_validate();
										}
									}
									HX_STACK_LINE(279)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(279)
						if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
							HX_STACK_LINE(279)
							{
								HX_STACK_LINE(279)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(279)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(279)
								{
								}
							}
							HX_STACK_LINE(279)
							{
								HX_STACK_LINE(279)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(279)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(279)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(279)
						ret;
					}
					HX_STACK_LINE(279)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(279)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(279)
		this->zpp_inner->wrap_worldCOM = _Function_2_1::Block(this);
		HX_STACK_LINE(280)
		this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
		HX_STACK_LINE(281)
		this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
		HX_STACK_LINE(282)
		this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = this->zpp_inner->getworldCOM_dyn();
	}
	HX_STACK_LINE(284)
	return this->zpp_inner->wrap_worldCOM;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_worldCOM,return )

::nape::shape::Polygon Shape_obj::get_castPolygon( ){
	HX_STACK_PUSH("Shape::get_castPolygon","nape/shape/Shape.hx",263);
	HX_STACK_THIS(this);
	HX_STACK_LINE(263)
	return (  (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))) ? ::nape::shape::Polygon(this->zpp_inner->polygon->outer_zn) : ::nape::shape::Polygon(null()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_castPolygon,return )

::nape::shape::Circle Shape_obj::get_castCircle( ){
	HX_STACK_PUSH("Shape::get_castCircle","nape/shape/Shape.hx",255);
	HX_STACK_THIS(this);
	HX_STACK_LINE(255)
	return (  (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))) ? ::nape::shape::Circle(this->zpp_inner->circle->outer_zn) : ::nape::shape::Circle(null()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_castCircle,return )

::nape::phys::Body Shape_obj::set_body( ::nape::phys::Body body){
	HX_STACK_PUSH("Shape::set_body","nape/shape/Shape.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(242)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::body"));
		HX_STACK_LINE(243)
		if (((((  (((this->zpp_inner->body != null()))) ? ::nape::phys::Body(this->zpp_inner->body->outer) : ::nape::phys::Body(null()) )) != body))){
			HX_STACK_LINE(244)
			if (((this->zpp_inner->body != null()))){
				HX_STACK_LINE(244)
				((  (((this->zpp_inner->body != null()))) ? ::nape::phys::Body(this->zpp_inner->body->outer) : ::nape::phys::Body(null()) ))->zpp_inner->wrap_shapes->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(245)
			if (((body != null()))){
				HX_STACK_LINE(245)
				::nape::shape::ShapeList _this = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(245)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(245)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(245)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(248)
	return (  (((this->zpp_inner->body != null()))) ? ::nape::phys::Body(this->zpp_inner->body->outer) : ::nape::phys::Body(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_body,return )

::nape::phys::Body Shape_obj::get_body( ){
	HX_STACK_PUSH("Shape::get_body","nape/shape/Shape.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_LINE(237)
	return (  (((this->zpp_inner->body != null()))) ? ::nape::phys::Body(this->zpp_inner->body->outer) : ::nape::phys::Body(null()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_body,return )

bool Shape_obj::isPolygon( ){
	HX_STACK_PUSH("Shape::isPolygon","nape/shape/Shape.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_LINE(207)
	return (this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON);
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,isPolygon,return )

bool Shape_obj::isCircle( ){
	HX_STACK_PUSH("Shape::isCircle","nape/shape/Shape.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_LINE(197)
	return (this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE);
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,isCircle,return )

::nape::shape::ShapeType Shape_obj::get_type( ){
	HX_STACK_PUSH("Shape::get_type","nape/shape/Shape.hx",187);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::shape::ShapeType Block( ){
			HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",188);
			{
				HX_STACK_LINE(188)
				if (((::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE == null()))){
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE = ::nape::shape::ShapeType_obj::__new();
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(188)
				return ::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::shape::ShapeType Block( ){
			HX_STACK_PUSH("*::closure","nape/shape/Shape.hx",188);
			{
				HX_STACK_LINE(188)
				if (((::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON == null()))){
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON = ::nape::shape::ShapeType_obj::__new();
					HX_STACK_LINE(188)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(188)
				return ::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON;
			}
			return null();
		}
	};
	HX_STACK_LINE(187)
	return Array_obj< ::Dynamic >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block())->__get(this->zpp_inner->type).StaticCast< ::nape::shape::ShapeType >();
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_type,return )


Shape_obj::Shape_obj()
{
}

void Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shape);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Shape_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"area") ) { return get_area(); }
		if (HX_FIELD_EQ(inName,"body") ) { return get_body(); }
		if (HX_FIELD_EQ(inName,"type") ) { return get_type(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return get_bounds(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return get_filter(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"angDrag") ) { return get_angDrag(); }
		if (HX_FIELD_EQ(inName,"inertia") ) { return get_inertia(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"material") ) { return get_material(); }
		if (HX_FIELD_EQ(inName,"get_area") ) { return get_area_dyn(); }
		if (HX_FIELD_EQ(inName,"localCOM") ) { return get_localCOM(); }
		if (HX_FIELD_EQ(inName,"worldCOM") ) { return get_worldCOM(); }
		if (HX_FIELD_EQ(inName,"set_body") ) { return set_body_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body") ) { return get_body_dyn(); }
		if (HX_FIELD_EQ(inName,"isCircle") ) { return isCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"isPolygon") ) { return isPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filter") ) { return set_filter_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filter") ) { return get_filter_dyn(); }
		if (HX_FIELD_EQ(inName,"castCircle") ) { return get_castCircle(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_angDrag") ) { return get_angDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inertia") ) { return get_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"castPolygon") ) { return get_castPolygon(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fluidEnabled") ) { return get_fluidEnabled(); }
		if (HX_FIELD_EQ(inName,"set_material") ) { return set_material_dyn(); }
		if (HX_FIELD_EQ(inName,"get_material") ) { return get_material_dyn(); }
		if (HX_FIELD_EQ(inName,"set_localCOM") ) { return set_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_localCOM") ) { return get_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldCOM") ) { return get_worldCOM_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sensorEnabled") ) { return get_sensorEnabled(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_castCircle") ) { return get_castCircle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fluidProperties") ) { return get_fluidProperties(); }
		if (HX_FIELD_EQ(inName,"get_castPolygon") ) { return get_castPolygon_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_fluidEnabled") ) { return set_fluidEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fluidEnabled") ) { return get_fluidEnabled_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_sensorEnabled") ) { return set_sensorEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sensorEnabled") ) { return get_sensorEnabled_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_fluidProperties") ) { return set_fluidProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fluidProperties") ) { return get_fluidProperties_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return set_body(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return set_filter(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { return set_material(inValue); }
		if (HX_FIELD_EQ(inName,"localCOM") ) { return set_localCOM(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fluidEnabled") ) { return set_fluidEnabled(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sensorEnabled") ) { return set_sensorEnabled(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fluidProperties") ) { return set_fluidProperties(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("sensorEnabled"));
	outFields->push(HX_CSTRING("fluidEnabled"));
	outFields->push(HX_CSTRING("fluidProperties"));
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("material"));
	outFields->push(HX_CSTRING("angDrag"));
	outFields->push(HX_CSTRING("inertia"));
	outFields->push(HX_CSTRING("area"));
	outFields->push(HX_CSTRING("localCOM"));
	outFields->push(HX_CSTRING("worldCOM"));
	outFields->push(HX_CSTRING("castPolygon"));
	outFields->push(HX_CSTRING("castCircle"));
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("copy"),
	HX_CSTRING("contains"),
	HX_CSTRING("transform"),
	HX_CSTRING("rotate"),
	HX_CSTRING("scale"),
	HX_CSTRING("translate"),
	HX_CSTRING("get_bounds"),
	HX_CSTRING("set_sensorEnabled"),
	HX_CSTRING("get_sensorEnabled"),
	HX_CSTRING("set_fluidEnabled"),
	HX_CSTRING("get_fluidEnabled"),
	HX_CSTRING("set_fluidProperties"),
	HX_CSTRING("get_fluidProperties"),
	HX_CSTRING("set_filter"),
	HX_CSTRING("get_filter"),
	HX_CSTRING("set_material"),
	HX_CSTRING("get_material"),
	HX_CSTRING("get_angDrag"),
	HX_CSTRING("get_inertia"),
	HX_CSTRING("get_area"),
	HX_CSTRING("set_localCOM"),
	HX_CSTRING("get_localCOM"),
	HX_CSTRING("get_worldCOM"),
	HX_CSTRING("get_castPolygon"),
	HX_CSTRING("get_castCircle"),
	HX_CSTRING("set_body"),
	HX_CSTRING("get_body"),
	HX_CSTRING("isPolygon"),
	HX_CSTRING("isCircle"),
	HX_CSTRING("get_type"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
};

Class Shape_obj::__mClass;

void Shape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.shape.Shape"), hx::TCanCast< Shape_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Shape_obj::__boot()
{
}

} // end namespace nape
} // end namespace shape
