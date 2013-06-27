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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_AABBNode_obj::__construct()
{
HX_STACK_PUSH("ZPP_AABBNode::new","zpp_nape/space/DynAABBPhase.hx",174);
{
	HX_STACK_LINE(265)
	this->first_sync = false;
	HX_STACK_LINE(264)
	this->synced = false;
	HX_STACK_LINE(263)
	this->snext = null();
	HX_STACK_LINE(262)
	this->moved = false;
	HX_STACK_LINE(261)
	this->mnext = null();
	HX_STACK_LINE(186)
	this->next = null();
	HX_STACK_LINE(182)
	this->rayt = 0.0;
	HX_STACK_LINE(181)
	this->height = (int)0;
	HX_STACK_LINE(180)
	this->child2 = null();
	HX_STACK_LINE(179)
	this->child1 = null();
	HX_STACK_LINE(178)
	this->parent = null();
	HX_STACK_LINE(177)
	this->dyn = false;
	HX_STACK_LINE(176)
	this->shape = null();
	HX_STACK_LINE(175)
	this->aabb = null();
	HX_STACK_LINE(183)
	this->height = (int)-1;
}
;
	return null();
}

ZPP_AABBNode_obj::~ZPP_AABBNode_obj() { }

Dynamic ZPP_AABBNode_obj::__CreateEmpty() { return  new ZPP_AABBNode_obj; }
hx::ObjectPtr< ZPP_AABBNode_obj > ZPP_AABBNode_obj::__new()
{  hx::ObjectPtr< ZPP_AABBNode_obj > result = new ZPP_AABBNode_obj();
	result->__construct();
	return result;}

Dynamic ZPP_AABBNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AABBNode_obj > result = new ZPP_AABBNode_obj();
	result->__construct();
	return result;}

bool ZPP_AABBNode_obj::isLeaf( ){
	HX_STACK_PUSH("ZPP_AABBNode::isLeaf","zpp_nape/space/DynAABBPhase.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_LINE(268)
	return (this->child1 == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBNode_obj,isLeaf,return )

Void ZPP_AABBNode_obj::free( ){
{
		HX_STACK_PUSH("ZPP_AABBNode::free","zpp_nape/space/DynAABBPhase.hx",237);
		HX_STACK_THIS(this);
		HX_STACK_LINE(238)
		this->height = (int)-1;
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(240)
			::zpp_nape::geom::ZPP_AABB o = this->aabb;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				if (((o->outer != null()))){
					HX_STACK_LINE(249)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(249)
					o->outer = null();
				}
				HX_STACK_LINE(249)
				o->wrap_min = o->wrap_max = null();
				HX_STACK_LINE(249)
				o->_invalidate = null();
				HX_STACK_LINE(249)
				o->_validate = null();
			}
			HX_STACK_LINE(250)
			o->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
			HX_STACK_LINE(251)
			::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o;
		}
		HX_STACK_LINE(256)
		this->child1 = this->child2 = this->parent = null();
		HX_STACK_LINE(257)
		this->next = null();
		HX_STACK_LINE(258)
		this->snext = null();
		HX_STACK_LINE(259)
		this->mnext = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBNode_obj,free,(void))

Void ZPP_AABBNode_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_AABBNode::alloc","zpp_nape/space/DynAABBPhase.hx",213);
		HX_STACK_THIS(this);
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(215)
			if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
				HX_STACK_LINE(215)
				this->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
			}
			else{
				HX_STACK_LINE(222)
				this->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
				HX_STACK_LINE(223)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = this->aabb->next;
				HX_STACK_LINE(224)
				this->aabb->next = null();
			}
			HX_STACK_LINE(229)
			Dynamic();
		}
		HX_STACK_LINE(231)
		this->moved = false;
		HX_STACK_LINE(232)
		this->synced = false;
		HX_STACK_LINE(233)
		this->first_sync = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBNode_obj,alloc,(void))

::zpp_nape::space::ZPP_AABBNode ZPP_AABBNode_obj::zpp_pool;


ZPP_AABBNode_obj::ZPP_AABBNode_obj()
{
}

void ZPP_AABBNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AABBNode);
	HX_MARK_MEMBER_NAME(first_sync,"first_sync");
	HX_MARK_MEMBER_NAME(synced,"synced");
	HX_MARK_MEMBER_NAME(snext,"snext");
	HX_MARK_MEMBER_NAME(moved,"moved");
	HX_MARK_MEMBER_NAME(mnext,"mnext");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(rayt,"rayt");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(child2,"child2");
	HX_MARK_MEMBER_NAME(child1,"child1");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(dyn,"dyn");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(aabb,"aabb");
	HX_MARK_END_CLASS();
}

void ZPP_AABBNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(first_sync,"first_sync");
	HX_VISIT_MEMBER_NAME(synced,"synced");
	HX_VISIT_MEMBER_NAME(snext,"snext");
	HX_VISIT_MEMBER_NAME(moved,"moved");
	HX_VISIT_MEMBER_NAME(mnext,"mnext");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(rayt,"rayt");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(child2,"child2");
	HX_VISIT_MEMBER_NAME(child1,"child1");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(dyn,"dyn");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(aabb,"aabb");
}

Dynamic ZPP_AABBNode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dyn") ) { return dyn; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"rayt") ) { return rayt; }
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"snext") ) { return snext; }
		if (HX_FIELD_EQ(inName,"moved") ) { return moved; }
		if (HX_FIELD_EQ(inName,"mnext") ) { return mnext; }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isLeaf") ) { return isLeaf_dyn(); }
		if (HX_FIELD_EQ(inName,"synced") ) { return synced; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"child2") ) { return child2; }
		if (HX_FIELD_EQ(inName,"child1") ) { return child1; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"first_sync") ) { return first_sync; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_AABBNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dyn") ) { dyn=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rayt") ) { rayt=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aabb") ) { aabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"snext") ) { snext=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moved") ) { moved=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mnext") ) { mnext=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"synced") ) { synced=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"child2") ) { child2=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"child1") ) { child1=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"first_sync") ) { first_sync=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_AABBNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("first_sync"));
	outFields->push(HX_CSTRING("synced"));
	outFields->push(HX_CSTRING("snext"));
	outFields->push(HX_CSTRING("moved"));
	outFields->push(HX_CSTRING("mnext"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("rayt"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("child2"));
	outFields->push(HX_CSTRING("child1"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("dyn"));
	outFields->push(HX_CSTRING("shape"));
	outFields->push(HX_CSTRING("aabb"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("isLeaf"),
	HX_CSTRING("first_sync"),
	HX_CSTRING("synced"),
	HX_CSTRING("snext"),
	HX_CSTRING("moved"),
	HX_CSTRING("mnext"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("next"),
	HX_CSTRING("rayt"),
	HX_CSTRING("height"),
	HX_CSTRING("child2"),
	HX_CSTRING("child1"),
	HX_CSTRING("parent"),
	HX_CSTRING("dyn"),
	HX_CSTRING("shape"),
	HX_CSTRING("aabb"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AABBNode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_AABBNode_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AABBNode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_AABBNode_obj::zpp_pool,"zpp_pool");
};

Class ZPP_AABBNode_obj::__mClass;

void ZPP_AABBNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_AABBNode"), hx::TCanCast< ZPP_AABBNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_AABBNode_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
