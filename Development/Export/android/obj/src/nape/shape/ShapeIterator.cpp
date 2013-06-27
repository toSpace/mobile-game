#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeIterator
#include <nape/shape/ShapeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace shape{

Void ShapeIterator_obj::__construct()
{
HX_STACK_PUSH("ShapeIterator::new","nape/shape/ShapeIterator.hx",178);
{
	HX_STACK_LINE(198)
	this->zpp_next = null();
	HX_STACK_LINE(190)
	this->zpp_critical = false;
	HX_STACK_LINE(186)
	this->zpp_i = (int)0;
	HX_STACK_LINE(182)
	this->zpp_inner = null();
	HX_STACK_LINE(202)
	if ((!(::zpp_nape::util::ZPP_ShapeList_obj::internal))){
		HX_STACK_LINE(204)
		hx::Throw (((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("Shape")) + HX_CSTRING("Iterator derp!")));
	}
}
;
	return null();
}

ShapeIterator_obj::~ShapeIterator_obj() { }

Dynamic ShapeIterator_obj::__CreateEmpty() { return  new ShapeIterator_obj; }
hx::ObjectPtr< ShapeIterator_obj > ShapeIterator_obj::__new()
{  hx::ObjectPtr< ShapeIterator_obj > result = new ShapeIterator_obj();
	result->__construct();
	return result;}

Dynamic ShapeIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeIterator_obj > result = new ShapeIterator_obj();
	result->__construct();
	return result;}

::nape::shape::Shape ShapeIterator_obj::next( ){
	HX_STACK_PUSH("ShapeIterator::next","nape/shape/ShapeIterator.hx",264);
	HX_STACK_THIS(this);
	HX_STACK_LINE(265)
	this->zpp_critical = false;
	HX_STACK_LINE(266)
	return this->zpp_inner->at((this->zpp_i)++);
}


HX_DEFINE_DYNAMIC_FUNC0(ShapeIterator_obj,next,return )

bool ShapeIterator_obj::hasNext( ){
	HX_STACK_PUSH("ShapeIterator::hasNext","nape/shape/ShapeIterator.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_LINE(241)
	this->zpp_inner->zpp_inner->valmod();
	struct _Function_1_1{
		inline static int Block( ::nape::shape::ShapeIterator_obj *__this){
			HX_STACK_PUSH("*::closure","nape/shape/ShapeIterator.hx",244);
			{
				HX_STACK_LINE(244)
				::nape::shape::ShapeList _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(244)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(244)
				if ((_this->zpp_inner->zip_length)){
					HX_STACK_LINE(244)
					_this->zpp_inner->zip_length = false;
					HX_STACK_LINE(244)
					_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
				}
				HX_STACK_LINE(244)
				return _this->zpp_inner->user_length;
			}
			return null();
		}
	};
	HX_STACK_LINE(244)
	int length = _Function_1_1::Block(this);		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(245)
	this->zpp_critical = true;
	HX_STACK_LINE(246)
	if (((this->zpp_i < length))){
		HX_STACK_LINE(246)
		return true;
	}
	else{
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(251)
			this->zpp_next = ::nape::shape::ShapeIterator_obj::zpp_pool;
			HX_STACK_LINE(252)
			::nape::shape::ShapeIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(253)
			this->zpp_inner = null();
		}
		HX_STACK_LINE(255)
		return false;
	}
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ShapeIterator_obj,hasNext,return )

::nape::shape::ShapeIterator ShapeIterator_obj::zpp_pool;

::nape::shape::ShapeIterator ShapeIterator_obj::get( ::nape::shape::ShapeList list){
	HX_STACK_PUSH("ShapeIterator::get","nape/shape/ShapeIterator.hx",217);
	HX_STACK_ARG(list,"list");
	struct _Function_1_1{
		inline static ::nape::shape::ShapeIterator Block( ){
			HX_STACK_PUSH("*::closure","nape/shape/ShapeIterator.hx",218);
			{
				HX_STACK_LINE(219)
				::zpp_nape::util::ZPP_ShapeList_obj::internal = true;
				HX_STACK_LINE(220)
				::nape::shape::ShapeIterator ret = ::nape::shape::ShapeIterator_obj::__new();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(221)
				::zpp_nape::util::ZPP_ShapeList_obj::internal = false;
				HX_STACK_LINE(222)
				return ret;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::shape::ShapeIterator Block( ){
			HX_STACK_PUSH("*::closure","nape/shape/ShapeIterator.hx",224);
			{
				HX_STACK_LINE(225)
				::nape::shape::ShapeIterator r = ::nape::shape::ShapeIterator_obj::zpp_pool;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(226)
				::nape::shape::ShapeIterator_obj::zpp_pool = r->zpp_next;
				HX_STACK_LINE(227)
				return r;
			}
			return null();
		}
	};
	HX_STACK_LINE(218)
	::nape::shape::ShapeIterator ret = (  (((::nape::shape::ShapeIterator_obj::zpp_pool == null()))) ? ::nape::shape::ShapeIterator(_Function_1_1::Block()) : ::nape::shape::ShapeIterator(_Function_1_2::Block()) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(229)
	ret->zpp_i = (int)0;
	HX_STACK_LINE(230)
	ret->zpp_inner = list;
	HX_STACK_LINE(231)
	ret->zpp_critical = false;
	HX_STACK_LINE(232)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShapeIterator_obj,get,return )


ShapeIterator_obj::ShapeIterator_obj()
{
}

void ShapeIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeIterator);
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void ShapeIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic ShapeIterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { return zpp_i; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"zpp_next") ) { return zpp_next; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { return zpp_critical; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShapeIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::shape::ShapeIterator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast< ::nape::shape::ShapeIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_next"));
	outFields->push(HX_CSTRING("zpp_critical"));
	outFields->push(HX_CSTRING("zpp_i"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("next"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("zpp_next"),
	HX_CSTRING("zpp_critical"),
	HX_CSTRING("zpp_i"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeIterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ShapeIterator_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeIterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShapeIterator_obj::zpp_pool,"zpp_pool");
};

Class ShapeIterator_obj::__mClass;

void ShapeIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.shape.ShapeIterator"), hx::TCanCast< ShapeIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShapeIterator_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace nape
} // end namespace shape
