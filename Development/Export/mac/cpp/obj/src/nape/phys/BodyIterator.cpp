#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
namespace nape{
namespace phys{

Void BodyIterator_obj::__construct()
{
HX_STACK_PUSH("BodyIterator::new","nape/phys/BodyIterator.hx",178);
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
	if ((!(::zpp_nape::util::ZPP_BodyList_obj::internal))){
		HX_STACK_LINE(204)
		hx::Throw (((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("Body")) + HX_CSTRING("Iterator derp!")));
	}
}
;
	return null();
}

BodyIterator_obj::~BodyIterator_obj() { }

Dynamic BodyIterator_obj::__CreateEmpty() { return  new BodyIterator_obj; }
hx::ObjectPtr< BodyIterator_obj > BodyIterator_obj::__new()
{  hx::ObjectPtr< BodyIterator_obj > result = new BodyIterator_obj();
	result->__construct();
	return result;}

Dynamic BodyIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BodyIterator_obj > result = new BodyIterator_obj();
	result->__construct();
	return result;}

::nape::phys::Body BodyIterator_obj::next( ){
	HX_STACK_PUSH("BodyIterator::next","nape/phys/BodyIterator.hx",264);
	HX_STACK_THIS(this);
	HX_STACK_LINE(265)
	this->zpp_critical = false;
	HX_STACK_LINE(266)
	return this->zpp_inner->at((this->zpp_i)++);
}


HX_DEFINE_DYNAMIC_FUNC0(BodyIterator_obj,next,return )

bool BodyIterator_obj::hasNext( ){
	HX_STACK_PUSH("BodyIterator::hasNext","nape/phys/BodyIterator.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_LINE(241)
	this->zpp_inner->zpp_inner->valmod();
	struct _Function_1_1{
		inline static int Block( ::nape::phys::BodyIterator_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/BodyIterator.hx",244);
			{
				HX_STACK_LINE(244)
				::nape::phys::BodyList _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
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
			this->zpp_next = ::nape::phys::BodyIterator_obj::zpp_pool;
			HX_STACK_LINE(252)
			::nape::phys::BodyIterator_obj::zpp_pool = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(253)
			this->zpp_inner = null();
		}
		HX_STACK_LINE(255)
		return false;
	}
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(BodyIterator_obj,hasNext,return )

::nape::phys::BodyIterator BodyIterator_obj::zpp_pool;

::nape::phys::BodyIterator BodyIterator_obj::get( ::nape::phys::BodyList list){
	HX_STACK_PUSH("BodyIterator::get","nape/phys/BodyIterator.hx",217);
	HX_STACK_ARG(list,"list");
	struct _Function_1_1{
		inline static ::nape::phys::BodyIterator Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/BodyIterator.hx",218);
			{
				HX_STACK_LINE(219)
				::zpp_nape::util::ZPP_BodyList_obj::internal = true;
				HX_STACK_LINE(220)
				::nape::phys::BodyIterator ret = ::nape::phys::BodyIterator_obj::__new();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(221)
				::zpp_nape::util::ZPP_BodyList_obj::internal = false;
				HX_STACK_LINE(222)
				return ret;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::BodyIterator Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/BodyIterator.hx",224);
			{
				HX_STACK_LINE(225)
				::nape::phys::BodyIterator r = ::nape::phys::BodyIterator_obj::zpp_pool;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(226)
				::nape::phys::BodyIterator_obj::zpp_pool = r->zpp_next;
				HX_STACK_LINE(227)
				return r;
			}
			return null();
		}
	};
	HX_STACK_LINE(218)
	::nape::phys::BodyIterator ret = (  (((::nape::phys::BodyIterator_obj::zpp_pool == null()))) ? ::nape::phys::BodyIterator(_Function_1_1::Block()) : ::nape::phys::BodyIterator(_Function_1_2::Block()) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(229)
	ret->zpp_i = (int)0;
	HX_STACK_LINE(230)
	ret->zpp_inner = list;
	HX_STACK_LINE(231)
	ret->zpp_critical = false;
	HX_STACK_LINE(232)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BodyIterator_obj,get,return )


BodyIterator_obj::BodyIterator_obj()
{
}

void BodyIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BodyIterator);
	HX_MARK_MEMBER_NAME(zpp_next,"zpp_next");
	HX_MARK_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_MARK_MEMBER_NAME(zpp_i,"zpp_i");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void BodyIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_next,"zpp_next");
	HX_VISIT_MEMBER_NAME(zpp_critical,"zpp_critical");
	HX_VISIT_MEMBER_NAME(zpp_i,"zpp_i");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic BodyIterator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic BodyIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"zpp_i") ) { zpp_i=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::phys::BodyIterator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_next") ) { zpp_next=inValue.Cast< ::nape::phys::BodyIterator >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_critical") ) { zpp_critical=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BodyIterator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(BodyIterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BodyIterator_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BodyIterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BodyIterator_obj::zpp_pool,"zpp_pool");
};

Class BodyIterator_obj::__mClass;

void BodyIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.BodyIterator"), hx::TCanCast< BodyIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BodyIterator_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace nape
} // end namespace phys
