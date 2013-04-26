#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace dynamics{

Void InteractionFilter_obj::__construct(hx::Null< int >  __o_collisionGroup,hx::Null< int >  __o_collisionMask,hx::Null< int >  __o_sensorGroup,hx::Null< int >  __o_sensorMask,hx::Null< int >  __o_fluidGroup,hx::Null< int >  __o_fluidMask)
{
HX_STACK_PUSH("InteractionFilter::new","nape/dynamics/InteractionFilter.hx",206);
int collisionGroup = __o_collisionGroup.Default(1);
int collisionMask = __o_collisionMask.Default(-1);
int sensorGroup = __o_sensorGroup.Default(1);
int sensorMask = __o_sensorMask.Default(-1);
int fluidGroup = __o_fluidGroup.Default(1);
int fluidMask = __o_fluidMask.Default(-1);
{
	HX_STACK_LINE(210)
	this->zpp_inner = null();
	HX_STACK_LINE(365)
	{
		HX_STACK_LINE(366)
		if (((::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool == null()))){
			HX_STACK_LINE(366)
			this->zpp_inner = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__new();
		}
		else{
			HX_STACK_LINE(373)
			this->zpp_inner = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;
			HX_STACK_LINE(374)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = this->zpp_inner->next;
			HX_STACK_LINE(375)
			this->zpp_inner->next = null();
		}
		HX_STACK_LINE(380)
		Dynamic();
	}
	HX_STACK_LINE(382)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(383)
	{
		HX_STACK_LINE(383)
		if (((this->zpp_inner->collisionGroup != collisionGroup))){
			HX_STACK_LINE(383)
			this->zpp_inner->collisionGroup = collisionGroup;
			HX_STACK_LINE(383)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(383)
		this->zpp_inner->collisionGroup;
	}
	HX_STACK_LINE(384)
	{
		HX_STACK_LINE(384)
		if (((this->zpp_inner->collisionMask != collisionMask))){
			HX_STACK_LINE(384)
			this->zpp_inner->collisionMask = collisionMask;
			HX_STACK_LINE(384)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(384)
		this->zpp_inner->collisionMask;
	}
	HX_STACK_LINE(385)
	{
		HX_STACK_LINE(385)
		if (((this->zpp_inner->sensorGroup != sensorGroup))){
			HX_STACK_LINE(385)
			this->zpp_inner->sensorGroup = sensorGroup;
			HX_STACK_LINE(385)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(385)
		this->zpp_inner->sensorGroup;
	}
	HX_STACK_LINE(386)
	{
		HX_STACK_LINE(386)
		if (((this->zpp_inner->sensorMask != sensorMask))){
			HX_STACK_LINE(386)
			this->zpp_inner->sensorMask = sensorMask;
			HX_STACK_LINE(386)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(386)
		this->zpp_inner->sensorMask;
	}
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		if (((this->zpp_inner->fluidGroup != fluidGroup))){
			HX_STACK_LINE(387)
			this->zpp_inner->fluidGroup = fluidGroup;
			HX_STACK_LINE(387)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(387)
		this->zpp_inner->fluidGroup;
	}
	HX_STACK_LINE(388)
	{
		HX_STACK_LINE(388)
		if (((this->zpp_inner->fluidMask != fluidMask))){
			HX_STACK_LINE(388)
			this->zpp_inner->fluidMask = fluidMask;
			HX_STACK_LINE(388)
			this->zpp_inner->invalidate();
		}
		HX_STACK_LINE(388)
		this->zpp_inner->fluidMask;
	}
}
;
	return null();
}

InteractionFilter_obj::~InteractionFilter_obj() { }

Dynamic InteractionFilter_obj::__CreateEmpty() { return  new InteractionFilter_obj; }
hx::ObjectPtr< InteractionFilter_obj > InteractionFilter_obj::__new(hx::Null< int >  __o_collisionGroup,hx::Null< int >  __o_collisionMask,hx::Null< int >  __o_sensorGroup,hx::Null< int >  __o_sensorMask,hx::Null< int >  __o_fluidGroup,hx::Null< int >  __o_fluidMask)
{  hx::ObjectPtr< InteractionFilter_obj > result = new InteractionFilter_obj();
	result->__construct(__o_collisionGroup,__o_collisionMask,__o_sensorGroup,__o_sensorMask,__o_fluidGroup,__o_fluidMask);
	return result;}

Dynamic InteractionFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionFilter_obj > result = new InteractionFilter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::String InteractionFilter_obj::toString( ){
	HX_STACK_PUSH("InteractionFilter::toString","nape/dynamics/InteractionFilter.hx",451);
	HX_STACK_THIS(this);
	HX_STACK_LINE(451)
	return ((((((((((((HX_CSTRING("{ collision: ") + ::StringTools_obj::hex(this->zpp_inner->collisionGroup,(int)8)) + HX_CSTRING("~")) + ::StringTools_obj::hex(this->zpp_inner->collisionMask,(int)8)) + HX_CSTRING(" sensor: ")) + ::StringTools_obj::hex(this->zpp_inner->sensorGroup,(int)8)) + HX_CSTRING("~")) + ::StringTools_obj::hex(this->zpp_inner->sensorMask,(int)8)) + HX_CSTRING(" fluid: ")) + ::StringTools_obj::hex(this->zpp_inner->fluidGroup,(int)8)) + HX_CSTRING("~")) + ::StringTools_obj::hex(this->zpp_inner->fluidMask,(int)8)) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,toString,return )

::nape::dynamics::InteractionFilter InteractionFilter_obj::copy( ){
	HX_STACK_PUSH("InteractionFilter::copy","nape/dynamics/InteractionFilter.hx",444);
	HX_STACK_THIS(this);
	HX_STACK_LINE(444)
	return ::nape::dynamics::InteractionFilter_obj::__new(this->zpp_inner->collisionGroup,this->zpp_inner->collisionMask,this->zpp_inner->sensorGroup,this->zpp_inner->sensorMask,this->zpp_inner->fluidGroup,this->zpp_inner->fluidMask);
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,copy,return )

bool InteractionFilter_obj::shouldFlow( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_PUSH("InteractionFilter::shouldFlow","nape/dynamics/InteractionFilter.hx",432);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");
	HX_STACK_LINE(434)
	if (((filter == null()))){
		HX_STACK_LINE(434)
		hx::Throw (HX_CSTRING("Error: filter argument cannot be null for shouldFlow"));
	}
	struct _Function_1_1{
		inline static bool Block( ::nape::dynamics::InteractionFilter_obj *__this,::nape::dynamics::InteractionFilter &filter){
			HX_STACK_PUSH("*::closure","nape/dynamics/InteractionFilter.hx",436);
			{
				HX_STACK_LINE(436)
				::zpp_nape::dynamics::ZPP_InteractionFilter _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::dynamics::ZPP_InteractionFilter x = filter->zpp_inner;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(436)
				return (bool((((int(_this->fluidMask) & int(x->fluidGroup))) != (int)0)) && bool((((int(x->fluidMask) & int(_this->fluidGroup))) != (int)0)));
			}
			return null();
		}
	};
	HX_STACK_LINE(436)
	return _Function_1_1::Block(this,filter);
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,shouldFlow,return )

bool InteractionFilter_obj::shouldSense( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_PUSH("InteractionFilter::shouldSense","nape/dynamics/InteractionFilter.hx",416);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");
	HX_STACK_LINE(418)
	if (((filter == null()))){
		HX_STACK_LINE(418)
		hx::Throw (HX_CSTRING("Error: filter argument cannot be null for shouldSense"));
	}
	struct _Function_1_1{
		inline static bool Block( ::nape::dynamics::InteractionFilter_obj *__this,::nape::dynamics::InteractionFilter &filter){
			HX_STACK_PUSH("*::closure","nape/dynamics/InteractionFilter.hx",420);
			{
				HX_STACK_LINE(420)
				::zpp_nape::dynamics::ZPP_InteractionFilter _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::dynamics::ZPP_InteractionFilter x = filter->zpp_inner;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(420)
				return (bool((((int(_this->sensorMask) & int(x->sensorGroup))) != (int)0)) && bool((((int(x->sensorMask) & int(_this->sensorGroup))) != (int)0)));
			}
			return null();
		}
	};
	HX_STACK_LINE(420)
	return _Function_1_1::Block(this,filter);
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,shouldSense,return )

bool InteractionFilter_obj::shouldCollide( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_PUSH("InteractionFilter::shouldCollide","nape/dynamics/InteractionFilter.hx",400);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");
	HX_STACK_LINE(402)
	if (((filter == null()))){
		HX_STACK_LINE(402)
		hx::Throw (HX_CSTRING("Error: filter argument cannot be null for shouldCollide"));
	}
	struct _Function_1_1{
		inline static bool Block( ::nape::dynamics::InteractionFilter_obj *__this,::nape::dynamics::InteractionFilter &filter){
			HX_STACK_PUSH("*::closure","nape/dynamics/InteractionFilter.hx",404);
			{
				HX_STACK_LINE(404)
				::zpp_nape::dynamics::ZPP_InteractionFilter _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::dynamics::ZPP_InteractionFilter x = filter->zpp_inner;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(404)
				return (bool((((int(_this->collisionMask) & int(x->collisionGroup))) != (int)0)) && bool((((int(x->collisionMask) & int(_this->collisionGroup))) != (int)0)));
			}
			return null();
		}
	};
	HX_STACK_LINE(404)
	return _Function_1_1::Block(this,filter);
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,shouldCollide,return )

int InteractionFilter_obj::set_fluidMask( int fluidMask){
	HX_STACK_PUSH("InteractionFilter::set_fluidMask","nape/dynamics/InteractionFilter.hx",342);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fluidMask,"fluidMask");
	HX_STACK_LINE(343)
	if (((this->zpp_inner->fluidMask != fluidMask))){
		HX_STACK_LINE(345)
		this->zpp_inner->fluidMask = fluidMask;
		HX_STACK_LINE(346)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(349)
	return this->zpp_inner->fluidMask;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_fluidMask,return )

int InteractionFilter_obj::get_fluidMask( ){
	HX_STACK_PUSH("InteractionFilter::get_fluidMask","nape/dynamics/InteractionFilter.hx",339);
	HX_STACK_THIS(this);
	HX_STACK_LINE(339)
	return this->zpp_inner->fluidMask;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_fluidMask,return )

int InteractionFilter_obj::set_fluidGroup( int fluidGroup){
	HX_STACK_PUSH("InteractionFilter::set_fluidGroup","nape/dynamics/InteractionFilter.hx",324);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fluidGroup,"fluidGroup");
	HX_STACK_LINE(325)
	if (((this->zpp_inner->fluidGroup != fluidGroup))){
		HX_STACK_LINE(327)
		this->zpp_inner->fluidGroup = fluidGroup;
		HX_STACK_LINE(328)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(331)
	return this->zpp_inner->fluidGroup;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_fluidGroup,return )

int InteractionFilter_obj::get_fluidGroup( ){
	HX_STACK_PUSH("InteractionFilter::get_fluidGroup","nape/dynamics/InteractionFilter.hx",321);
	HX_STACK_THIS(this);
	HX_STACK_LINE(321)
	return this->zpp_inner->fluidGroup;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_fluidGroup,return )

int InteractionFilter_obj::set_sensorMask( int sensorMask){
	HX_STACK_PUSH("InteractionFilter::set_sensorMask","nape/dynamics/InteractionFilter.hx",306);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sensorMask,"sensorMask");
	HX_STACK_LINE(307)
	if (((this->zpp_inner->sensorMask != sensorMask))){
		HX_STACK_LINE(309)
		this->zpp_inner->sensorMask = sensorMask;
		HX_STACK_LINE(310)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(313)
	return this->zpp_inner->sensorMask;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_sensorMask,return )

int InteractionFilter_obj::get_sensorMask( ){
	HX_STACK_PUSH("InteractionFilter::get_sensorMask","nape/dynamics/InteractionFilter.hx",303);
	HX_STACK_THIS(this);
	HX_STACK_LINE(303)
	return this->zpp_inner->sensorMask;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_sensorMask,return )

int InteractionFilter_obj::set_sensorGroup( int sensorGroup){
	HX_STACK_PUSH("InteractionFilter::set_sensorGroup","nape/dynamics/InteractionFilter.hx",288);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sensorGroup,"sensorGroup");
	HX_STACK_LINE(289)
	if (((this->zpp_inner->sensorGroup != sensorGroup))){
		HX_STACK_LINE(291)
		this->zpp_inner->sensorGroup = sensorGroup;
		HX_STACK_LINE(292)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(295)
	return this->zpp_inner->sensorGroup;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_sensorGroup,return )

int InteractionFilter_obj::get_sensorGroup( ){
	HX_STACK_PUSH("InteractionFilter::get_sensorGroup","nape/dynamics/InteractionFilter.hx",285);
	HX_STACK_THIS(this);
	HX_STACK_LINE(285)
	return this->zpp_inner->sensorGroup;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_sensorGroup,return )

int InteractionFilter_obj::set_collisionMask( int collisionMask){
	HX_STACK_PUSH("InteractionFilter::set_collisionMask","nape/dynamics/InteractionFilter.hx",270);
	HX_STACK_THIS(this);
	HX_STACK_ARG(collisionMask,"collisionMask");
	HX_STACK_LINE(271)
	if (((this->zpp_inner->collisionMask != collisionMask))){
		HX_STACK_LINE(273)
		this->zpp_inner->collisionMask = collisionMask;
		HX_STACK_LINE(274)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(277)
	return this->zpp_inner->collisionMask;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_collisionMask,return )

int InteractionFilter_obj::get_collisionMask( ){
	HX_STACK_PUSH("InteractionFilter::get_collisionMask","nape/dynamics/InteractionFilter.hx",267);
	HX_STACK_THIS(this);
	HX_STACK_LINE(267)
	return this->zpp_inner->collisionMask;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_collisionMask,return )

int InteractionFilter_obj::set_collisionGroup( int collisionGroup){
	HX_STACK_PUSH("InteractionFilter::set_collisionGroup","nape/dynamics/InteractionFilter.hx",252);
	HX_STACK_THIS(this);
	HX_STACK_ARG(collisionGroup,"collisionGroup");
	HX_STACK_LINE(253)
	if (((this->zpp_inner->collisionGroup != collisionGroup))){
		HX_STACK_LINE(255)
		this->zpp_inner->collisionGroup = collisionGroup;
		HX_STACK_LINE(256)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(259)
	return this->zpp_inner->collisionGroup;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionFilter_obj,set_collisionGroup,return )

int InteractionFilter_obj::get_collisionGroup( ){
	HX_STACK_PUSH("InteractionFilter::get_collisionGroup","nape/dynamics/InteractionFilter.hx",249);
	HX_STACK_THIS(this);
	HX_STACK_LINE(249)
	return this->zpp_inner->collisionGroup;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_collisionGroup,return )

::nape::shape::ShapeList InteractionFilter_obj::get_shapes( ){
	HX_STACK_PUSH("InteractionFilter::get_shapes","nape/dynamics/InteractionFilter.hx",239);
	HX_STACK_THIS(this);
	HX_STACK_LINE(240)
	if (((this->zpp_inner->wrap_shapes == null()))){
		HX_STACK_LINE(240)
		this->zpp_inner->wrap_shapes = ::zpp_nape::util::ZPP_ShapeList_obj::get(this->zpp_inner->shapes,true);
	}
	HX_STACK_LINE(241)
	return this->zpp_inner->wrap_shapes;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_shapes,return )

Dynamic InteractionFilter_obj::get_userData( ){
	HX_STACK_PUSH("InteractionFilter::get_userData","nape/dynamics/InteractionFilter.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_LINE(225)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","nape/dynamics/InteractionFilter.hx",226);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(225)
		this->zpp_inner->userData = _Function_2_1::Block();
	}
	HX_STACK_LINE(228)
	return this->zpp_inner->userData;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionFilter_obj,get_userData,return )


InteractionFilter_obj::InteractionFilter_obj()
{
}

void InteractionFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractionFilter);
	HX_MARK_MEMBER_NAME(fluidMask,"fluidMask");
	HX_MARK_MEMBER_NAME(fluidGroup,"fluidGroup");
	HX_MARK_MEMBER_NAME(sensorMask,"sensorMask");
	HX_MARK_MEMBER_NAME(sensorGroup,"sensorGroup");
	HX_MARK_MEMBER_NAME(collisionMask,"collisionMask");
	HX_MARK_MEMBER_NAME(collisionGroup,"collisionGroup");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void InteractionFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fluidMask,"fluidMask");
	HX_VISIT_MEMBER_NAME(fluidGroup,"fluidGroup");
	HX_VISIT_MEMBER_NAME(sensorMask,"sensorMask");
	HX_VISIT_MEMBER_NAME(sensorGroup,"sensorGroup");
	HX_VISIT_MEMBER_NAME(collisionMask,"collisionMask");
	HX_VISIT_MEMBER_NAME(collisionGroup,"collisionGroup");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic InteractionFilter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return inCallProp ? get_shapes() : shapes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return inCallProp ? get_userData() : userData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fluidMask") ) { return inCallProp ? get_fluidMask() : fluidMask; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shouldFlow") ) { return shouldFlow_dyn(); }
		if (HX_FIELD_EQ(inName,"fluidGroup") ) { return inCallProp ? get_fluidGroup() : fluidGroup; }
		if (HX_FIELD_EQ(inName,"sensorMask") ) { return inCallProp ? get_sensorMask() : sensorMask; }
		if (HX_FIELD_EQ(inName,"get_shapes") ) { return get_shapes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shouldSense") ) { return shouldSense_dyn(); }
		if (HX_FIELD_EQ(inName,"sensorGroup") ) { return inCallProp ? get_sensorGroup() : sensorGroup; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shouldCollide") ) { return shouldCollide_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fluidMask") ) { return set_fluidMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fluidMask") ) { return get_fluidMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collisionMask") ) { return inCallProp ? get_collisionMask() : collisionMask; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_fluidGroup") ) { return set_fluidGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fluidGroup") ) { return get_fluidGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sensorMask") ) { return set_sensorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sensorMask") ) { return get_sensorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collisionGroup") ) { return inCallProp ? get_collisionGroup() : collisionGroup; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_sensorGroup") ) { return set_sensorGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sensorGroup") ) { return get_sensorGroup_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_collisionMask") ) { return set_collisionMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_collisionMask") ) { return get_collisionMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_collisionGroup") ) { return set_collisionGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"get_collisionGroup") ) { return get_collisionGroup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractionFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fluidMask") ) { if (inCallProp) return set_fluidMask(inValue);fluidMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionFilter >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fluidGroup") ) { if (inCallProp) return set_fluidGroup(inValue);fluidGroup=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sensorMask") ) { if (inCallProp) return set_sensorMask(inValue);sensorMask=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sensorGroup") ) { if (inCallProp) return set_sensorGroup(inValue);sensorGroup=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionMask") ) { if (inCallProp) return set_collisionMask(inValue);collisionMask=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionGroup") ) { if (inCallProp) return set_collisionGroup(inValue);collisionGroup=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractionFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fluidMask"));
	outFields->push(HX_CSTRING("fluidGroup"));
	outFields->push(HX_CSTRING("sensorMask"));
	outFields->push(HX_CSTRING("sensorGroup"));
	outFields->push(HX_CSTRING("collisionMask"));
	outFields->push(HX_CSTRING("collisionGroup"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("copy"),
	HX_CSTRING("shouldFlow"),
	HX_CSTRING("shouldSense"),
	HX_CSTRING("shouldCollide"),
	HX_CSTRING("set_fluidMask"),
	HX_CSTRING("get_fluidMask"),
	HX_CSTRING("fluidMask"),
	HX_CSTRING("set_fluidGroup"),
	HX_CSTRING("get_fluidGroup"),
	HX_CSTRING("fluidGroup"),
	HX_CSTRING("set_sensorMask"),
	HX_CSTRING("get_sensorMask"),
	HX_CSTRING("sensorMask"),
	HX_CSTRING("set_sensorGroup"),
	HX_CSTRING("get_sensorGroup"),
	HX_CSTRING("sensorGroup"),
	HX_CSTRING("set_collisionMask"),
	HX_CSTRING("get_collisionMask"),
	HX_CSTRING("collisionMask"),
	HX_CSTRING("set_collisionGroup"),
	HX_CSTRING("get_collisionGroup"),
	HX_CSTRING("collisionGroup"),
	HX_CSTRING("get_shapes"),
	HX_CSTRING("shapes"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("userData"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionFilter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionFilter_obj::__mClass,"__mClass");
};

Class InteractionFilter_obj::__mClass;

void InteractionFilter_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.InteractionFilter"), hx::TCanCast< InteractionFilter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void InteractionFilter_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
