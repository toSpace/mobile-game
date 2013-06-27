#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace phys{

Void Material_obj::__construct(hx::Null< Float >  __o_elasticity,hx::Null< Float >  __o_dynamicFriction,hx::Null< Float >  __o_staticFriction,hx::Null< Float >  __o_density,hx::Null< Float >  __o_rollingFriction)
{
HX_STACK_PUSH("Material::new","nape/phys/Material.hx",177);
Float elasticity = __o_elasticity.Default(0.0);
Float dynamicFriction = __o_dynamicFriction.Default(1.0);
Float staticFriction = __o_staticFriction.Default(2.0);
Float density = __o_density.Default(1);
Float rollingFriction = __o_rollingFriction.Default(0.001);
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(231)
		if (((::zpp_nape::phys::ZPP_Material_obj::zpp_pool == null()))){
			HX_STACK_LINE(231)
			this->zpp_inner = ::zpp_nape::phys::ZPP_Material_obj::__new();
		}
		else{
			HX_STACK_LINE(238)
			this->zpp_inner = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;
			HX_STACK_LINE(239)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = this->zpp_inner->next;
			HX_STACK_LINE(240)
			this->zpp_inner->next = null();
		}
		HX_STACK_LINE(245)
		Dynamic();
	}
	HX_STACK_LINE(247)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(248)
		if (((elasticity != this->zpp_inner->elasticity))){
			HX_STACK_LINE(248)
			if (((elasticity != elasticity))){
				HX_STACK_LINE(248)
				hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("elasticity")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(248)
			this->zpp_inner->elasticity = (Float(elasticity) / Float((int)1));
			HX_STACK_LINE(248)
			this->zpp_inner->invalidate((int(::zpp_nape::phys::ZPP_Material_obj::WAKE) | int(::zpp_nape::phys::ZPP_Material_obj::ARBITERS)));
		}
		HX_STACK_LINE(248)
		this->zpp_inner->elasticity;
	}
	HX_STACK_LINE(249)
	{
		HX_STACK_LINE(249)
		if (((dynamicFriction != this->zpp_inner->dynamicFriction))){
			HX_STACK_LINE(249)
			if (((dynamicFriction != dynamicFriction))){
				HX_STACK_LINE(249)
				hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("dynamicFriction")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(249)
			if (((dynamicFriction < (int)0))){
				HX_STACK_LINE(249)
				hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("dynamicFriction")) + HX_CSTRING(" cannot be negative")));
			}
			HX_STACK_LINE(249)
			this->zpp_inner->dynamicFriction = (Float(dynamicFriction) / Float((int)1));
			HX_STACK_LINE(249)
			this->zpp_inner->invalidate((int((int(::zpp_nape::phys::ZPP_Material_obj::WAKE) | int(::zpp_nape::phys::ZPP_Material_obj::ANGDRAG))) | int(::zpp_nape::phys::ZPP_Material_obj::ARBITERS)));
		}
		HX_STACK_LINE(249)
		this->zpp_inner->dynamicFriction;
	}
	HX_STACK_LINE(250)
	{
		HX_STACK_LINE(250)
		if (((staticFriction != this->zpp_inner->staticFriction))){
			HX_STACK_LINE(250)
			if (((staticFriction != staticFriction))){
				HX_STACK_LINE(250)
				hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("staticFriction")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(250)
			if (((staticFriction < (int)0))){
				HX_STACK_LINE(250)
				hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("staticFriction")) + HX_CSTRING(" cannot be negative")));
			}
			HX_STACK_LINE(250)
			this->zpp_inner->staticFriction = (Float(staticFriction) / Float((int)1));
			HX_STACK_LINE(250)
			this->zpp_inner->invalidate((int(::zpp_nape::phys::ZPP_Material_obj::WAKE) | int(::zpp_nape::phys::ZPP_Material_obj::ARBITERS)));
		}
		HX_STACK_LINE(250)
		this->zpp_inner->staticFriction;
	}
	HX_STACK_LINE(251)
	{
		HX_STACK_LINE(251)
		if (((density != (this->zpp_inner->density * (int)1000)))){
			HX_STACK_LINE(251)
			if (((density != density))){
				HX_STACK_LINE(251)
				hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("density")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(251)
			if (((density < (int)0))){
				HX_STACK_LINE(251)
				hx::Throw (HX_CSTRING("Error: Material::density must be positive"));
			}
			HX_STACK_LINE(251)
			if (((density < (int)0))){
				HX_STACK_LINE(251)
				hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("density")) + HX_CSTRING(" cannot be negative")));
			}
			HX_STACK_LINE(251)
			this->zpp_inner->density = (Float(density) / Float((int)1000));
			HX_STACK_LINE(251)
			this->zpp_inner->invalidate((int(::zpp_nape::phys::ZPP_Material_obj::WAKE) | int(::zpp_nape::phys::ZPP_Material_obj::PROPS)));
		}
		HX_STACK_LINE(251)
		(this->zpp_inner->density * (int)1000);
	}
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(252)
		if (((rollingFriction != this->zpp_inner->rollingFriction))){
			HX_STACK_LINE(252)
			if (((rollingFriction != rollingFriction))){
				HX_STACK_LINE(252)
				hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("rollingFriction")) + HX_CSTRING(" cannot be NaN")));
			}
			HX_STACK_LINE(252)
			if (((rollingFriction < (int)0))){
				HX_STACK_LINE(252)
				hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("rollingFriction")) + HX_CSTRING(" cannot be negative")));
			}
			HX_STACK_LINE(252)
			this->zpp_inner->rollingFriction = (Float(rollingFriction) / Float((int)1));
			HX_STACK_LINE(252)
			this->zpp_inner->invalidate((int(::zpp_nape::phys::ZPP_Material_obj::WAKE) | int(::zpp_nape::phys::ZPP_Material_obj::ARBITERS)));
		}
		HX_STACK_LINE(252)
		this->zpp_inner->rollingFriction;
	}
}
;
	return null();
}

Material_obj::~Material_obj() { }

Dynamic Material_obj::__CreateEmpty() { return  new Material_obj; }
hx::ObjectPtr< Material_obj > Material_obj::__new(hx::Null< Float >  __o_elasticity,hx::Null< Float >  __o_dynamicFriction,hx::Null< Float >  __o_staticFriction,hx::Null< Float >  __o_density,hx::Null< Float >  __o_rollingFriction)
{  hx::ObjectPtr< Material_obj > result = new Material_obj();
	result->__construct(__o_elasticity,__o_dynamicFriction,__o_staticFriction,__o_density,__o_rollingFriction);
	return result;}

Dynamic Material_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Material_obj > result = new Material_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::String Material_obj::toString( ){
	HX_STACK_PUSH("Material::toString","nape/phys/Material.hx",425);
	HX_STACK_THIS(this);
	HX_STACK_LINE(425)
	return ((((((((((HX_CSTRING("{ elasticity: ") + this->zpp_inner->elasticity) + HX_CSTRING(" dynamicFriction: ")) + this->zpp_inner->dynamicFriction) + HX_CSTRING(" staticFriction: ")) + this->zpp_inner->staticFriction) + HX_CSTRING(" density: ")) + (this->zpp_inner->density * (int)1000)) + HX_CSTRING(" rollingFriction: ")) + this->zpp_inner->rollingFriction) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,toString,return )

Float Material_obj::set_rollingFriction( Float rollingFriction){
	HX_STACK_PUSH("Material::set_rollingFriction","nape/phys/Material.hx",408);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rollingFriction,"rollingFriction");
	HX_STACK_LINE(409)
	if (((rollingFriction != this->zpp_inner->rollingFriction))){
		HX_STACK_LINE(412)
		if (((rollingFriction != rollingFriction))){
			HX_STACK_LINE(412)
			hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("rollingFriction")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(414)
		if (((rollingFriction < (int)0))){
			HX_STACK_LINE(414)
			hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("rollingFriction")) + HX_CSTRING(" cannot be negative")));
		}
		HX_STACK_LINE(416)
		this->zpp_inner->rollingFriction = (Float(rollingFriction) / Float((int)1));
		HX_STACK_LINE(417)
		this->zpp_inner->invalidate((int(::zpp_nape::phys::ZPP_Material_obj::WAKE) | int(::zpp_nape::phys::ZPP_Material_obj::ARBITERS)));
	}
	HX_STACK_LINE(420)
	return this->zpp_inner->rollingFriction;
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_rollingFriction,return )

Float Material_obj::get_rollingFriction( ){
	HX_STACK_PUSH("Material::get_rollingFriction","nape/phys/Material.hx",405);
	HX_STACK_THIS(this);
	HX_STACK_LINE(405)
	return this->zpp_inner->rollingFriction;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_rollingFriction,return )

Float Material_obj::set_density( Float density){
	HX_STACK_PUSH("Material::set_density","nape/phys/Material.hx",377);
	HX_STACK_THIS(this);
	HX_STACK_ARG(density,"density");
	HX_STACK_LINE(378)
	if (((density != (this->zpp_inner->density * (int)1000)))){
		HX_STACK_LINE(381)
		if (((density != density))){
			HX_STACK_LINE(381)
			hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("density")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(382)
		if (((density < (int)0))){
			HX_STACK_LINE(382)
			hx::Throw (HX_CSTRING("Error: Material::density must be positive"));
		}
		HX_STACK_LINE(383)
		if (((density < (int)0))){
			HX_STACK_LINE(383)
			hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("density")) + HX_CSTRING(" cannot be negative")));
		}
		HX_STACK_LINE(385)
		this->zpp_inner->density = (Float(density) / Float((int)1000));
		HX_STACK_LINE(386)
		this->zpp_inner->invalidate((int(::zpp_nape::phys::ZPP_Material_obj::WAKE) | int(::zpp_nape::phys::ZPP_Material_obj::PROPS)));
	}
	HX_STACK_LINE(389)
	return (this->zpp_inner->density * (int)1000);
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_density,return )

Float Material_obj::get_density( ){
	HX_STACK_PUSH("Material::get_density","nape/phys/Material.hx",374);
	HX_STACK_THIS(this);
	HX_STACK_LINE(374)
	return (this->zpp_inner->density * (int)1000);
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_density,return )

Float Material_obj::set_staticFriction( Float staticFriction){
	HX_STACK_PUSH("Material::set_staticFriction","nape/phys/Material.hx",349);
	HX_STACK_THIS(this);
	HX_STACK_ARG(staticFriction,"staticFriction");
	HX_STACK_LINE(350)
	if (((staticFriction != this->zpp_inner->staticFriction))){
		HX_STACK_LINE(353)
		if (((staticFriction != staticFriction))){
			HX_STACK_LINE(353)
			hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("staticFriction")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(355)
		if (((staticFriction < (int)0))){
			HX_STACK_LINE(355)
			hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("staticFriction")) + HX_CSTRING(" cannot be negative")));
		}
		HX_STACK_LINE(357)
		this->zpp_inner->staticFriction = (Float(staticFriction) / Float((int)1));
		HX_STACK_LINE(358)
		this->zpp_inner->invalidate((int(::zpp_nape::phys::ZPP_Material_obj::WAKE) | int(::zpp_nape::phys::ZPP_Material_obj::ARBITERS)));
	}
	HX_STACK_LINE(361)
	return this->zpp_inner->staticFriction;
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_staticFriction,return )

Float Material_obj::get_staticFriction( ){
	HX_STACK_PUSH("Material::get_staticFriction","nape/phys/Material.hx",346);
	HX_STACK_THIS(this);
	HX_STACK_LINE(346)
	return this->zpp_inner->staticFriction;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_staticFriction,return )

Float Material_obj::set_dynamicFriction( Float dynamicFriction){
	HX_STACK_PUSH("Material::set_dynamicFriction","nape/phys/Material.hx",319);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dynamicFriction,"dynamicFriction");
	HX_STACK_LINE(320)
	if (((dynamicFriction != this->zpp_inner->dynamicFriction))){
		HX_STACK_LINE(323)
		if (((dynamicFriction != dynamicFriction))){
			HX_STACK_LINE(323)
			hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("dynamicFriction")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(325)
		if (((dynamicFriction < (int)0))){
			HX_STACK_LINE(325)
			hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("dynamicFriction")) + HX_CSTRING(" cannot be negative")));
		}
		HX_STACK_LINE(327)
		this->zpp_inner->dynamicFriction = (Float(dynamicFriction) / Float((int)1));
		HX_STACK_LINE(328)
		this->zpp_inner->invalidate((int((int(::zpp_nape::phys::ZPP_Material_obj::WAKE) | int(::zpp_nape::phys::ZPP_Material_obj::ANGDRAG))) | int(::zpp_nape::phys::ZPP_Material_obj::ARBITERS)));
	}
	HX_STACK_LINE(331)
	return this->zpp_inner->dynamicFriction;
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_dynamicFriction,return )

Float Material_obj::get_dynamicFriction( ){
	HX_STACK_PUSH("Material::get_dynamicFriction","nape/phys/Material.hx",316);
	HX_STACK_THIS(this);
	HX_STACK_LINE(316)
	return this->zpp_inner->dynamicFriction;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_dynamicFriction,return )

Float Material_obj::set_elasticity( Float elasticity){
	HX_STACK_PUSH("Material::set_elasticity","nape/phys/Material.hx",289);
	HX_STACK_THIS(this);
	HX_STACK_ARG(elasticity,"elasticity");
	HX_STACK_LINE(290)
	if (((elasticity != this->zpp_inner->elasticity))){
		HX_STACK_LINE(293)
		if (((elasticity != elasticity))){
			HX_STACK_LINE(293)
			hx::Throw (((HX_CSTRING("Error: Material::") + HX_CSTRING("elasticity")) + HX_CSTRING(" cannot be NaN")));
		}
		HX_STACK_LINE(297)
		this->zpp_inner->elasticity = (Float(elasticity) / Float((int)1));
		HX_STACK_LINE(298)
		this->zpp_inner->invalidate((int(::zpp_nape::phys::ZPP_Material_obj::WAKE) | int(::zpp_nape::phys::ZPP_Material_obj::ARBITERS)));
	}
	HX_STACK_LINE(301)
	return this->zpp_inner->elasticity;
}


HX_DEFINE_DYNAMIC_FUNC1(Material_obj,set_elasticity,return )

Float Material_obj::get_elasticity( ){
	HX_STACK_PUSH("Material::get_elasticity","nape/phys/Material.hx",286);
	HX_STACK_THIS(this);
	HX_STACK_LINE(286)
	return this->zpp_inner->elasticity;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_elasticity,return )

::nape::phys::Material Material_obj::copy( ){
	HX_STACK_PUSH("Material::copy","nape/phys/Material.hx",264);
	HX_STACK_THIS(this);
	HX_STACK_LINE(265)
	::nape::phys::Material ret = ::nape::phys::Material_obj::__new(this->zpp_inner->elasticity,this->zpp_inner->dynamicFriction,this->zpp_inner->staticFriction,(this->zpp_inner->density * (int)1000),this->zpp_inner->rollingFriction);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(266)
	if (((this->zpp_inner->userData != null()))){
		HX_STACK_LINE(266)
		ret->zpp_inner->userData = ::Reflect_obj::copy(this->zpp_inner->userData);
	}
	HX_STACK_LINE(267)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,copy,return )

::nape::shape::ShapeList Material_obj::get_shapes( ){
	HX_STACK_PUSH("Material::get_shapes","nape/phys/Material.hx",210);
	HX_STACK_THIS(this);
	HX_STACK_LINE(211)
	if (((this->zpp_inner->wrap_shapes == null()))){
		HX_STACK_LINE(211)
		this->zpp_inner->wrap_shapes = ::zpp_nape::util::ZPP_ShapeList_obj::get(this->zpp_inner->shapes,true);
	}
	HX_STACK_LINE(212)
	return this->zpp_inner->wrap_shapes;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_shapes,return )

Dynamic Material_obj::get_userData( ){
	HX_STACK_PUSH("Material::get_userData","nape/phys/Material.hx",195);
	HX_STACK_THIS(this);
	HX_STACK_LINE(196)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Material.hx",197);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(196)
		this->zpp_inner->userData = _Function_2_1::Block();
	}
	HX_STACK_LINE(199)
	return this->zpp_inner->userData;
}


HX_DEFINE_DYNAMIC_FUNC0(Material_obj,get_userData,return )

::nape::phys::Material Material_obj::wood( ){
	HX_STACK_PUSH("Material::wood","nape/phys/Material.hx",434);
	HX_STACK_LINE(434)
	return ::nape::phys::Material_obj::__new(0.4,0.2,0.38,0.7,0.005);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Material_obj,wood,return )

::nape::phys::Material Material_obj::steel( ){
	HX_STACK_PUSH("Material::steel","nape/phys/Material.hx",443);
	HX_STACK_LINE(443)
	return ::nape::phys::Material_obj::__new(0.2,0.57,0.74,7.8,0.001);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Material_obj,steel,return )

::nape::phys::Material Material_obj::ice( ){
	HX_STACK_PUSH("Material::ice","nape/phys/Material.hx",452);
	HX_STACK_LINE(452)
	return ::nape::phys::Material_obj::__new(0.3,0.03,0.1,0.9,0.0001);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Material_obj,ice,return )

::nape::phys::Material Material_obj::rubber( ){
	HX_STACK_PUSH("Material::rubber","nape/phys/Material.hx",461);
	HX_STACK_LINE(461)
	return ::nape::phys::Material_obj::__new(0.8,1.0,1.4,1.5,0.01);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Material_obj,rubber,return )

::nape::phys::Material Material_obj::glass( ){
	HX_STACK_PUSH("Material::glass","nape/phys/Material.hx",470);
	HX_STACK_LINE(470)
	return ::nape::phys::Material_obj::__new(0.4,0.4,0.94,2.6,0.002);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Material_obj,glass,return )

::nape::phys::Material Material_obj::sand( ){
	HX_STACK_PUSH("Material::sand","nape/phys/Material.hx",479);
	HX_STACK_LINE(479)
	return ::nape::phys::Material_obj::__new(-1.0,0.45,0.6,1.6,16.0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Material_obj,sand,return )


Material_obj::Material_obj()
{
}

void Material_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Material);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Material_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Material_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ice") ) { return ice_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wood") ) { return wood_dyn(); }
		if (HX_FIELD_EQ(inName,"sand") ) { return sand_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"steel") ) { return steel_dyn(); }
		if (HX_FIELD_EQ(inName,"glass") ) { return glass_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rubber") ) { return rubber_dyn(); }
		if (HX_FIELD_EQ(inName,"shapes") ) { return get_shapes(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { return get_density(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return get_userData(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return get_elasticity(); }
		if (HX_FIELD_EQ(inName,"get_shapes") ) { return get_shapes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_density") ) { return set_density_dyn(); }
		if (HX_FIELD_EQ(inName,"get_density") ) { return get_density_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"staticFriction") ) { return get_staticFriction(); }
		if (HX_FIELD_EQ(inName,"set_elasticity") ) { return set_elasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_elasticity") ) { return get_elasticity_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { return get_rollingFriction(); }
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { return get_dynamicFriction(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_staticFriction") ) { return set_staticFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_staticFriction") ) { return get_staticFriction_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_rollingFriction") ) { return set_rollingFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rollingFriction") ) { return get_rollingFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dynamicFriction") ) { return set_dynamicFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dynamicFriction") ) { return get_dynamicFriction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Material_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { return set_density(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::phys::ZPP_Material >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return set_elasticity(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"staticFriction") ) { return set_staticFriction(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { return set_rollingFriction(inValue); }
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { return set_dynamicFriction(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Material_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rollingFriction"));
	outFields->push(HX_CSTRING("density"));
	outFields->push(HX_CSTRING("staticFriction"));
	outFields->push(HX_CSTRING("dynamicFriction"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("wood"),
	HX_CSTRING("steel"),
	HX_CSTRING("ice"),
	HX_CSTRING("rubber"),
	HX_CSTRING("glass"),
	HX_CSTRING("sand"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("set_rollingFriction"),
	HX_CSTRING("get_rollingFriction"),
	HX_CSTRING("set_density"),
	HX_CSTRING("get_density"),
	HX_CSTRING("set_staticFriction"),
	HX_CSTRING("get_staticFriction"),
	HX_CSTRING("set_dynamicFriction"),
	HX_CSTRING("get_dynamicFriction"),
	HX_CSTRING("set_elasticity"),
	HX_CSTRING("get_elasticity"),
	HX_CSTRING("copy"),
	HX_CSTRING("get_shapes"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Material_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Material_obj::__mClass,"__mClass");
};

Class Material_obj::__mClass;

void Material_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.Material"), hx::TCanCast< Material_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Material_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
