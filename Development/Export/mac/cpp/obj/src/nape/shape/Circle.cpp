#include <hxcpp.h>

#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
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
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
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
namespace nape{
namespace shape{

Void Circle_obj::__construct(Float radius,::nape::geom::Vec2 localCOM,::nape::phys::Material material,::nape::dynamics::InteractionFilter filter)
{
HX_STACK_PUSH("Circle::new","nape/shape/Circle.hx",177);
{
	HX_STACK_LINE(181)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(198)
	try{
		HX_STACK_LINE(198)
		super::__construct();
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(206)
	this->zpp_inner_zn = ::zpp_nape::shape::ZPP_Circle_obj::__new();
	HX_STACK_LINE(207)
	this->zpp_inner_zn->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(208)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(209)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(210)
	this->zpp_inner_i = this->zpp_inner;
	HX_STACK_LINE(211)
	this->zpp_inner_i->outer_i = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(212)
	{
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(212)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Circle::radius"));
			HX_STACK_LINE(212)
			if (((bool((bool((this->zpp_inner->body != null())) && bool((this->zpp_inner->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)))) && bool((this->zpp_inner->body->space != null()))))){
				HX_STACK_LINE(212)
				hx::Throw (HX_CSTRING("Error: Cannot modifiy radius of Circle contained in static object once added to space"));
			}
			HX_STACK_LINE(212)
			if (((radius != this->zpp_inner_zn->radius))){
				HX_STACK_LINE(212)
				if (((radius != radius))){
					HX_STACK_LINE(212)
					hx::Throw (HX_CSTRING("Error: Circle::radius cannot be NaN"));
				}
				HX_STACK_LINE(212)
				if (((radius < ::nape::Config_obj::epsilon))){
					HX_STACK_LINE(212)
					hx::Throw (((HX_CSTRING("Error: Circle::radius (") + radius) + HX_CSTRING(") must be > Config.epsilon")));
				}
				HX_STACK_LINE(212)
				if (((radius > 1e100))){
					HX_STACK_LINE(212)
					hx::Throw (((HX_CSTRING("Error: Circle::radius (") + radius) + HX_CSTRING(") must be < PR(Const).FMAX")));
				}
				HX_STACK_LINE(212)
				this->zpp_inner_zn->radius = radius;
				HX_STACK_LINE(212)
				this->zpp_inner_zn->invalidate_radius();
			}
		}
		HX_STACK_LINE(212)
		this->zpp_inner_zn->radius;
	}
	HX_STACK_LINE(213)
	if (((localCOM == null()))){
		HX_STACK_LINE(214)
		this->zpp_inner->localCOMx = (int)0;
		HX_STACK_LINE(215)
		this->zpp_inner->localCOMy = (int)0;
		HX_STACK_LINE(224)
		{
		}
	}
	else{
		HX_STACK_LINE(234)
		if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
			HX_STACK_LINE(236)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(239)
		{
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::Vec2 &localCOM){
					HX_STACK_PUSH("*::closure","nape/shape/Circle.hx",240);
					{
						HX_STACK_LINE(240)
						if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
							HX_STACK_LINE(240)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							::zpp_nape::geom::ZPP_Vec2 _this = localCOM->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(240)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(240)
								_this->_validate();
							}
						}
						HX_STACK_LINE(240)
						return localCOM->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(240)
			this->zpp_inner->localCOMx = _Function_3_1::Block(localCOM);
			struct _Function_3_2{
				inline static Float Block( ::nape::geom::Vec2 &localCOM){
					HX_STACK_PUSH("*::closure","nape/shape/Circle.hx",241);
					{
						HX_STACK_LINE(241)
						if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
							HX_STACK_LINE(241)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							::zpp_nape::geom::ZPP_Vec2 _this = localCOM->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(241)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(241)
								_this->_validate();
							}
						}
						HX_STACK_LINE(241)
						return localCOM->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(241)
			this->zpp_inner->localCOMy = _Function_3_2::Block(localCOM);
			HX_STACK_LINE(250)
			{
			}
		}
		HX_STACK_LINE(259)
		if ((localCOM->zpp_inner->weak)){
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				if (((bool((localCOM != null())) && bool(localCOM->zpp_disp)))){
					HX_STACK_LINE(263)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(263)
				{
					HX_STACK_LINE(263)
					::zpp_nape::geom::ZPP_Vec2 _this = localCOM->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(263)
					if ((_this->_immutable)){
						HX_STACK_LINE(263)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(263)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(263)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(263)
				if ((localCOM->zpp_inner->_inuse)){
					HX_STACK_LINE(263)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(263)
				::zpp_nape::geom::ZPP_Vec2 inner = localCOM->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(263)
				localCOM->zpp_inner->outer = null();
				HX_STACK_LINE(263)
				localCOM->zpp_inner = null();
				HX_STACK_LINE(263)
				{
					HX_STACK_LINE(263)
					::nape::geom::Vec2 o = localCOM;		HX_STACK_VAR(o,"o");
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
			HX_STACK_LINE(264)
			true;
		}
		else{
			HX_STACK_LINE(266)
			false;
		}
	}
	HX_STACK_LINE(271)
	if (((material == null()))){
		HX_STACK_LINE(272)
		if (((::zpp_nape::phys::ZPP_Material_obj::zpp_pool == null()))){
			HX_STACK_LINE(272)
			this->zpp_inner->material = ::zpp_nape::phys::ZPP_Material_obj::__new();
		}
		else{
			HX_STACK_LINE(279)
			this->zpp_inner->material = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;
			HX_STACK_LINE(280)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = this->zpp_inner->material->next;
			HX_STACK_LINE(281)
			this->zpp_inner->material->next = null();
		}
		HX_STACK_LINE(286)
		Dynamic();
	}
	else{
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::material"));
			HX_STACK_LINE(288)
			if (((material == null()))){
				HX_STACK_LINE(288)
				hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape material"));
			}
			HX_STACK_LINE(288)
			this->zpp_inner->setMaterial(material->zpp_inner);
		}
		HX_STACK_LINE(288)
		this->zpp_inner->material->wrapper();
	}
	HX_STACK_LINE(289)
	if (((filter == null()))){
		HX_STACK_LINE(290)
		if (((::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool == null()))){
			HX_STACK_LINE(290)
			this->zpp_inner->filter = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__new();
		}
		else{
			HX_STACK_LINE(297)
			this->zpp_inner->filter = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;
			HX_STACK_LINE(298)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = this->zpp_inner->filter->next;
			HX_STACK_LINE(299)
			this->zpp_inner->filter->next = null();
		}
		HX_STACK_LINE(304)
		Dynamic();
	}
	else{
		HX_STACK_LINE(306)
		{
			HX_STACK_LINE(306)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::filter"));
			HX_STACK_LINE(306)
			if (((filter == null()))){
				HX_STACK_LINE(306)
				hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape filter"));
			}
			HX_STACK_LINE(306)
			this->zpp_inner->setFilter(filter->zpp_inner);
		}
		HX_STACK_LINE(306)
		this->zpp_inner->filter->wrapper();
	}
	HX_STACK_LINE(307)
	this->zpp_inner_i->insert_cbtype(::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE->zpp_inner);
}
;
	return null();
}

Circle_obj::~Circle_obj() { }

Dynamic Circle_obj::__CreateEmpty() { return  new Circle_obj; }
hx::ObjectPtr< Circle_obj > Circle_obj::__new(Float radius,::nape::geom::Vec2 localCOM,::nape::phys::Material material,::nape::dynamics::InteractionFilter filter)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(radius,localCOM,material,filter);
	return result;}

Dynamic Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Float Circle_obj::set_radius( Float radius){
	HX_STACK_PUSH("Circle::set_radius","nape/shape/Circle.hx",321);
	HX_STACK_THIS(this);
	HX_STACK_ARG(radius,"radius");
	HX_STACK_LINE(322)
	{
		HX_STACK_LINE(323)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Circle::radius"));
		HX_STACK_LINE(325)
		if (((bool((bool((this->zpp_inner->body != null())) && bool((this->zpp_inner->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)))) && bool((this->zpp_inner->body->space != null()))))){
			HX_STACK_LINE(325)
			hx::Throw (HX_CSTRING("Error: Cannot modifiy radius of Circle contained in static object once added to space"));
		}
		HX_STACK_LINE(327)
		if (((radius != this->zpp_inner_zn->radius))){
			HX_STACK_LINE(329)
			if (((radius != radius))){
				HX_STACK_LINE(329)
				hx::Throw (HX_CSTRING("Error: Circle::radius cannot be NaN"));
			}
			HX_STACK_LINE(330)
			if (((radius < ::nape::Config_obj::epsilon))){
				HX_STACK_LINE(330)
				hx::Throw (((HX_CSTRING("Error: Circle::radius (") + radius) + HX_CSTRING(") must be > Config.epsilon")));
			}
			HX_STACK_LINE(331)
			if (((radius > 1e100))){
				HX_STACK_LINE(331)
				hx::Throw (((HX_CSTRING("Error: Circle::radius (") + radius) + HX_CSTRING(") must be < PR(Const).FMAX")));
			}
			HX_STACK_LINE(333)
			this->zpp_inner_zn->radius = radius;
			HX_STACK_LINE(334)
			this->zpp_inner_zn->invalidate_radius();
		}
	}
	HX_STACK_LINE(337)
	return this->zpp_inner_zn->radius;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,set_radius,return )

Float Circle_obj::get_radius( ){
	HX_STACK_PUSH("Circle::get_radius","nape/shape/Circle.hx",318);
	HX_STACK_THIS(this);
	HX_STACK_LINE(318)
	return this->zpp_inner_zn->radius;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,get_radius,return )


Circle_obj::Circle_obj()
{
}

void Circle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Circle);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Circle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Circle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return get_radius(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_radius") ) { return set_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return set_radius(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::shape::ZPP_Circle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_radius"),
	HX_CSTRING("get_radius"),
	HX_CSTRING("zpp_inner_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.shape.Circle"), hx::TCanCast< Circle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Circle_obj::__boot()
{
}

} // end namespace nape
} // end namespace shape
