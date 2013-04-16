#include <hxcpp.h>

#ifndef INCLUDED_nape_shape_Edge
#include <nape/shape/Edge.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeIterator
#include <nape/shape/EdgeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeList
#include <nape/shape/EdgeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_EdgeList
#include <zpp_nape/util/ZPP_EdgeList.h>
#endif
namespace nape{
namespace shape{

Void EdgeIterator_obj::__construct()
{
HX_STACK_PUSH("EdgeIterator::new","nape/shape/EdgeIterator.hx",178);
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
	if ((!(::zpp_nape::util::ZPP_EdgeList_obj::internal))){
		HX_STACK_LINE(204)
		hx::Throw (((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("Edge")) + HX_CSTRING("Iterator derp!")));
	}
}
;
	return null();
}

EdgeIterator_obj::~EdgeIterator_obj() { }

Dynamic EdgeIterator_obj::__CreateEmpty() { return  new EdgeIterator_obj; }
hx::ObjectPtr< EdgeIterator_obj > EdgeIterator_obj::__new()
{  hx::ObjectPtr< EdgeIterator_obj > result = new EdgeIterator_obj();
	result->__construct();
	return result;}

Dynamic EdgeIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EdgeIterator_obj > result = new EdgeIterator_obj();
	result->__construct();
	return result;}

::nape::shape::Edge EdgeIterator_obj::next( ){
	HX_STACK_PUSH("EdgeIterator::next","nape/shape/EdgeIterator.hx",264);
	HX_STACK_THIS(this);
	HX_STACK_LINE(265)
	this->zpp_critical = false;
	HX_STACK_LINE(266)
	return this->zpp_inner->at((this->zpp_i)++);
}


HX_DEFINE_DYNAMIC_FUNC0(EdgeIterator_obj,next,return )

bool EdgeIterator_obj::hasNext( ){
	HX_STACK_PUSH("EdgeIterator::hasNext","nape/shape/EdgeIterator.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_LINE(241)
	this->zpp_inner->zpp_inner->valmod();
	struct _Function_1_1{
		inline static int Block( ::nape::shape::EdgeIterator_obj *__this){
			HX_STACK_PUSH("*::closure","nape/shape/EdgeIterator.hx",244);
			{
				HX_STACK_LINE(244)
				::nape::shape::EdgeList _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
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
			this->zpp_next = ::nape::shape::EdgeIterator_obj::zpp_pool;
			HX_STACK_LINE(252)
			::nape::shape::EdgeIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(253)
			this->zpp_inner = null();
		}
		HX_STACK_LINE(255)
		return false;
	}
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(EdgeIterator_obj,hasNext,return )

::nape::shape::EdgeIterator EdgeIterator_obj::zpp_pool;

::nape::shape::EdgeIterator EdgeIterator_obj::get( ::nape::shape::EdgeList list){
	HX_STACK_PUSH("EdgeIterator::get","nape/shape/EdgeIterator.hx",217);
	HX_STACK_ARG(list,"list");
	struct _Function_1_1{
		inline static ::nape::shape::EdgeIterator Block( ){
			HX_STACK_PUSH("*::closure","nape/shape/EdgeIterator.hx",218);
			{
				HX_STACK_LINE(219)
				::zpp_nape::util::ZPP_EdgeList_obj::internal = true;
				HX_STACK_LINE(220)
				::nape::shape::EdgeIterator ret = ::nape::shape::EdgeIterator_obj::__new();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(221)
				::zpp_nape::util::ZPP_EdgeList_obj::internal = false;
				HX_STACK_LINE(222)
				return ret;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::shape::EdgeIterator Block( ){
			HX_STACK_PUSH("*::closure","nape/shape/EdgeIterator.hx",224);
			{
				HX_STACK_LINE(225)
				::nape::shape::EdgeIterator r = ::nape::shape::EdgeIterator_obj::zpp_pool;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(226)
				::nape::shape::EdgeIterator_obj::zpp_pool = r->zpp_next;
				HX_STACK_LINE(227)
				return r;
			}
			return null();
		}
	};
	HX_STACK_LINE(218)
	::nape::shape::EdgeIterator ret = (  (((::nape::shape::EdgeIterator_obj::zpp_pool == null()))) ? ::nape::shape::EdgeIterator(_Function_1_1::Block()) : ::nape::shape::EdgeIterator(_Function_1_2::Block()) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(229)
	ret->zpp_i = (int)0;
	HX_STACK_LINE(230)
	ret->zpp_inner = list;
	HX_STACK_LINE(231)
	ret->zpp_critical = false;
	HX_STACK_LINE(232)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EdgeIterator_obj,get,return )


EdgeIterator_obj::EdgeIterator_obj()
{
}

void EdgeIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EdgeIterator);
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void EdgeIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic EdgeIterator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic EdgeIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::shape::EdgeIterator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast< ::nape::shape::EdgeIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::nape::shape::EdgeList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EdgeIterator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(EdgeIterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EdgeIterator_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EdgeIterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EdgeIterator_obj::zpp_pool,"zpp_pool");
};

Class EdgeIterator_obj::__mClass;

void EdgeIterator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.shape.EdgeIterator"), hx::TCanCast< EdgeIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EdgeIterator_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace nape
} // end namespace shape
