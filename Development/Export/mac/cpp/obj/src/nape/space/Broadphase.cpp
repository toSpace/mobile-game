#include <hxcpp.h>

#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace space{

Void Broadphase_obj::__construct()
{
HX_STACK_PUSH("Broadphase::new","nape/space/Broadphase.hx",181);
{
	HX_STACK_LINE(181)
	if ((!(::zpp_nape::util::ZPP_Flags_obj::internal))){
		HX_STACK_LINE(183)
		hx::Throw (((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("Broadphase")) + HX_CSTRING(" derp!")));
	}
}
;
	return null();
}

Broadphase_obj::~Broadphase_obj() { }

Dynamic Broadphase_obj::__CreateEmpty() { return  new Broadphase_obj; }
hx::ObjectPtr< Broadphase_obj > Broadphase_obj::__new()
{  hx::ObjectPtr< Broadphase_obj > result = new Broadphase_obj();
	result->__construct();
	return result;}

Dynamic Broadphase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Broadphase_obj > result = new Broadphase_obj();
	result->__construct();
	return result;}

::String Broadphase_obj::toString( ){
	HX_STACK_PUSH("Broadphase::toString","nape/space/Broadphase.hx",189);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::space::Broadphase Block( ){
			HX_STACK_PUSH("*::closure","nape/space/Broadphase.hx",192);
			{
				HX_STACK_LINE(192)
				if (((::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE == null()))){
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE = ::nape::space::Broadphase_obj::__new();
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(192)
				return ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;
			}
			return null();
		}
	};
	HX_STACK_LINE(189)
	if (((hx::ObjectPtr<OBJ_>(this) == _Function_1_1::Block()))){
		HX_STACK_LINE(192)
		return HX_CSTRING("DYNAMIC_AABB_TREE");
	}
	else{
		struct _Function_2_1{
			inline static ::nape::space::Broadphase Block( ){
				HX_STACK_PUSH("*::closure","nape/space/Broadphase.hx",193);
				{
					HX_STACK_LINE(193)
					if (((::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE == null()))){
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE = ::nape::space::Broadphase_obj::__new();
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(193)
					return ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;
				}
				return null();
			}
		};
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _Function_2_1::Block()))){
			HX_STACK_LINE(193)
			return HX_CSTRING("SWEEP_AND_PRUNE");
		}
		else{
			HX_STACK_LINE(194)
			return HX_CSTRING("");
		}
	}
	HX_STACK_LINE(189)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Broadphase_obj,toString,return )

::nape::space::Broadphase Broadphase_obj::get_DYNAMIC_AABB_TREE( ){
	HX_STACK_PUSH("Broadphase::get_DYNAMIC_AABB_TREE","nape/space/Broadphase.hx",210);
	HX_STACK_LINE(211)
	if (((::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE == null()))){
		HX_STACK_LINE(212)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(213)
		::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE = ::nape::space::Broadphase_obj::__new();
		HX_STACK_LINE(214)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(216)
	return ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Broadphase_obj,get_DYNAMIC_AABB_TREE,return )

::nape::space::Broadphase Broadphase_obj::get_SWEEP_AND_PRUNE( ){
	HX_STACK_PUSH("Broadphase::get_SWEEP_AND_PRUNE","nape/space/Broadphase.hx",238);
	HX_STACK_LINE(239)
	if (((::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE == null()))){
		HX_STACK_LINE(240)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(241)
		::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE = ::nape::space::Broadphase_obj::__new();
		HX_STACK_LINE(242)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(244)
	return ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Broadphase_obj,get_SWEEP_AND_PRUNE,return )


Broadphase_obj::Broadphase_obj()
{
}

void Broadphase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Broadphase);
	HX_MARK_END_CLASS();
}

void Broadphase_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Broadphase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SWEEP_AND_PRUNE") ) { return get_SWEEP_AND_PRUNE(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DYNAMIC_AABB_TREE") ) { return get_DYNAMIC_AABB_TREE(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_SWEEP_AND_PRUNE") ) { return get_SWEEP_AND_PRUNE_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_DYNAMIC_AABB_TREE") ) { return get_DYNAMIC_AABB_TREE_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Broadphase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Broadphase_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_DYNAMIC_AABB_TREE"),
	HX_CSTRING("get_SWEEP_AND_PRUNE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Broadphase_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Broadphase_obj::__mClass,"__mClass");
};

Class Broadphase_obj::__mClass;

void Broadphase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.space.Broadphase"), hx::TCanCast< Broadphase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Broadphase_obj::__boot()
{
}

} // end namespace nape
} // end namespace space
