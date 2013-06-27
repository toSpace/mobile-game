#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_CbSetPair_obj::__construct()
{
HX_STACK_PUSH("ZPP_CbSetPair::new","zpp_nape/callbacks/CbSetPair.hx",174);
{
	HX_STACK_LINE(264)
	this->listeners = null();
	HX_STACK_LINE(263)
	this->zip_listeners = false;
	HX_STACK_LINE(177)
	this->next = null();
	HX_STACK_LINE(176)
	this->b = null();
	HX_STACK_LINE(175)
	this->a = null();
	HX_STACK_LINE(213)
	this->listeners = ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj::__new();
}
;
	return null();
}

ZPP_CbSetPair_obj::~ZPP_CbSetPair_obj() { }

Dynamic ZPP_CbSetPair_obj::__CreateEmpty() { return  new ZPP_CbSetPair_obj; }
hx::ObjectPtr< ZPP_CbSetPair_obj > ZPP_CbSetPair_obj::__new()
{  hx::ObjectPtr< ZPP_CbSetPair_obj > result = new ZPP_CbSetPair_obj();
	result->__construct();
	return result;}

Dynamic ZPP_CbSetPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CbSetPair_obj > result = new ZPP_CbSetPair_obj();
	result->__construct();
	return result;}

Void ZPP_CbSetPair_obj::forall( int event,Dynamic cb){
{
		HX_STACK_PUSH("ZPP_CbSetPair::forall","zpp_nape/callbacks/CbSetPair.hx",341);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_ARG(cb,"cb");
		HX_STACK_LINE(351)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = this->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(352)
		while(((cx_ite != null()))){
			HX_STACK_LINE(353)
			::zpp_nape::callbacks::ZPP_InteractionListener x = cx_ite->elt;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(354)
			if (((x->event == event))){
				HX_STACK_LINE(355)
				cb(x).Cast< Void >();
			}
			HX_STACK_LINE(357)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSetPair_obj,forall,(void))

bool ZPP_CbSetPair_obj::single_intersection( ::zpp_nape::callbacks::ZPP_InteractionListener i){
	HX_STACK_PUSH("ZPP_CbSetPair::single_intersection","zpp_nape/callbacks/CbSetPair.hx",327);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(336)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ite = this->listeners->head;		HX_STACK_VAR(ite,"ite");
	HX_STACK_LINE(337)
	return (bool((bool((ite != null())) && bool((ite->elt == i)))) && bool((ite->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetPair_obj,single_intersection,return )

bool ZPP_CbSetPair_obj::empty_intersection( ){
	HX_STACK_PUSH("ZPP_CbSetPair::empty_intersection","zpp_nape/callbacks/CbSetPair.hx",314);
	HX_STACK_THIS(this);
	HX_STACK_LINE(314)
	return (this->listeners->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetPair_obj,empty_intersection,return )

Void ZPP_CbSetPair_obj::__validate( ){
{
		HX_STACK_PUSH("ZPP_CbSetPair::__validate","zpp_nape/callbacks/CbSetPair.hx",278);
		HX_STACK_THIS(this);
		HX_STACK_LINE(279)
		this->listeners->clear();
		HX_STACK_LINE(296)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener aite = this->a->listeners->head;		HX_STACK_VAR(aite,"aite");
		HX_STACK_LINE(297)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener bite = this->b->listeners->head;		HX_STACK_VAR(bite,"bite");
		HX_STACK_LINE(298)
		while(((bool((aite != null())) && bool((bite != null()))))){
			HX_STACK_LINE(299)
			::zpp_nape::callbacks::ZPP_InteractionListener ax = aite->elt;		HX_STACK_VAR(ax,"ax");
			HX_STACK_LINE(300)
			::zpp_nape::callbacks::ZPP_InteractionListener bx = bite->elt;		HX_STACK_VAR(bx,"bx");
			HX_STACK_LINE(301)
			if (((ax == bx))){
				struct _Function_3_1{
					inline static bool Block( ::zpp_nape::callbacks::ZPP_CbSetPair_obj *__this,::zpp_nape::callbacks::ZPP_InteractionListener &ax){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/CbSetPair.hx",302);
						{
							HX_STACK_LINE(302)
							::zpp_nape::callbacks::ZPP_OptionType _this = ax->options1;		HX_STACK_VAR(_this,"_this");
							::zpp_nape::util::ZNPList_ZPP_CbType xs = __this->a->cbTypes;		HX_STACK_VAR(xs,"xs");
							HX_STACK_LINE(302)
							return (bool(_this->nonemptyintersection(xs,_this->includes)) && bool(!(_this->nonemptyintersection(xs,_this->excludes))));
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( ::zpp_nape::callbacks::ZPP_CbSetPair_obj *__this,::zpp_nape::callbacks::ZPP_InteractionListener &ax){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/CbSetPair.hx",302);
						{
							HX_STACK_LINE(302)
							::zpp_nape::callbacks::ZPP_OptionType _this = ax->options2;		HX_STACK_VAR(_this,"_this");
							::zpp_nape::util::ZNPList_ZPP_CbType xs = __this->b->cbTypes;		HX_STACK_VAR(xs,"xs");
							HX_STACK_LINE(302)
							return (bool(_this->nonemptyintersection(xs,_this->includes)) && bool(!(_this->nonemptyintersection(xs,_this->excludes))));
						}
						return null();
					}
				};
				struct _Function_3_3{
					inline static bool Block( ::zpp_nape::callbacks::ZPP_CbSetPair_obj *__this,::zpp_nape::callbacks::ZPP_InteractionListener &ax){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/CbSetPair.hx",302);
						{
							HX_STACK_LINE(302)
							::zpp_nape::callbacks::ZPP_OptionType _this = ax->options2;		HX_STACK_VAR(_this,"_this");
							::zpp_nape::util::ZNPList_ZPP_CbType xs = __this->a->cbTypes;		HX_STACK_VAR(xs,"xs");
							HX_STACK_LINE(302)
							return (bool(_this->nonemptyintersection(xs,_this->includes)) && bool(!(_this->nonemptyintersection(xs,_this->excludes))));
						}
						return null();
					}
				};
				struct _Function_3_4{
					inline static bool Block( ::zpp_nape::callbacks::ZPP_CbSetPair_obj *__this,::zpp_nape::callbacks::ZPP_InteractionListener &ax){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/CbSetPair.hx",302);
						{
							HX_STACK_LINE(302)
							::zpp_nape::callbacks::ZPP_OptionType _this = ax->options1;		HX_STACK_VAR(_this,"_this");
							::zpp_nape::util::ZNPList_ZPP_CbType xs = __this->b->cbTypes;		HX_STACK_VAR(xs,"xs");
							HX_STACK_LINE(302)
							return (bool(_this->nonemptyintersection(xs,_this->includes)) && bool(!(_this->nonemptyintersection(xs,_this->excludes))));
						}
						return null();
					}
				};
				HX_STACK_LINE(302)
				if (((bool((bool(_Function_3_1::Block(this,ax)) && bool(_Function_3_2::Block(this,ax)))) || bool((bool(_Function_3_3::Block(this,ax)) && bool(_Function_3_4::Block(this,ax))))))){
					HX_STACK_LINE(302)
					this->listeners->add(ax);
				}
				HX_STACK_LINE(305)
				aite = aite->next;
				HX_STACK_LINE(306)
				bite = bite->next;
			}
			else{
				HX_STACK_LINE(308)
				if (((bool((ax->precedence > bx->precedence)) || bool((bool((ax->precedence == bx->precedence)) && bool((ax->id > bx->id))))))){
					HX_STACK_LINE(308)
					aite = aite->next;
				}
				else{
					HX_STACK_LINE(309)
					bite = bite->next;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetPair_obj,__validate,(void))

Void ZPP_CbSetPair_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_CbSetPair::validate","zpp_nape/callbacks/CbSetPair.hx",272);
		HX_STACK_THIS(this);
		HX_STACK_LINE(272)
		if ((this->zip_listeners)){
			HX_STACK_LINE(274)
			this->zip_listeners = false;
			HX_STACK_LINE(275)
			this->__validate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetPair_obj,validate,(void))

Void ZPP_CbSetPair_obj::invalidate( ){
{
		HX_STACK_PUSH("ZPP_CbSetPair::invalidate","zpp_nape/callbacks/CbSetPair.hx",267);
		HX_STACK_THIS(this);
		HX_STACK_LINE(267)
		this->zip_listeners = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetPair_obj,invalidate,(void))

bool ZPP_CbSetPair_obj::compatible( ::zpp_nape::callbacks::ZPP_InteractionListener i){
	HX_STACK_PUSH("ZPP_CbSetPair::compatible","zpp_nape/callbacks/CbSetPair.hx",260);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::callbacks::ZPP_InteractionListener &i,::zpp_nape::callbacks::ZPP_CbSetPair_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/callbacks/CbSetPair.hx",261);
			{
				HX_STACK_LINE(261)
				::zpp_nape::callbacks::ZPP_OptionType _this = i->options1;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::util::ZNPList_ZPP_CbType xs = __this->a->cbTypes;		HX_STACK_VAR(xs,"xs");
				HX_STACK_LINE(261)
				return (bool(_this->nonemptyintersection(xs,_this->includes)) && bool(!(_this->nonemptyintersection(xs,_this->excludes))));
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::zpp_nape::callbacks::ZPP_InteractionListener &i,::zpp_nape::callbacks::ZPP_CbSetPair_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/callbacks/CbSetPair.hx",261);
			{
				HX_STACK_LINE(261)
				::zpp_nape::callbacks::ZPP_OptionType _this = i->options2;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::util::ZNPList_ZPP_CbType xs = __this->b->cbTypes;		HX_STACK_VAR(xs,"xs");
				HX_STACK_LINE(261)
				return (bool(_this->nonemptyintersection(xs,_this->includes)) && bool(!(_this->nonemptyintersection(xs,_this->excludes))));
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( ::zpp_nape::callbacks::ZPP_InteractionListener &i,::zpp_nape::callbacks::ZPP_CbSetPair_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/callbacks/CbSetPair.hx",261);
			{
				HX_STACK_LINE(261)
				::zpp_nape::callbacks::ZPP_OptionType _this = i->options2;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::util::ZNPList_ZPP_CbType xs = __this->a->cbTypes;		HX_STACK_VAR(xs,"xs");
				HX_STACK_LINE(261)
				return (bool(_this->nonemptyintersection(xs,_this->includes)) && bool(!(_this->nonemptyintersection(xs,_this->excludes))));
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static bool Block( ::zpp_nape::callbacks::ZPP_InteractionListener &i,::zpp_nape::callbacks::ZPP_CbSetPair_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/callbacks/CbSetPair.hx",261);
			{
				HX_STACK_LINE(261)
				::zpp_nape::callbacks::ZPP_OptionType _this = i->options1;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::util::ZNPList_ZPP_CbType xs = __this->b->cbTypes;		HX_STACK_VAR(xs,"xs");
				HX_STACK_LINE(261)
				return (bool(_this->nonemptyintersection(xs,_this->includes)) && bool(!(_this->nonemptyintersection(xs,_this->excludes))));
			}
			return null();
		}
	};
	HX_STACK_LINE(260)
	return (bool((bool(_Function_1_1::Block(i,this)) && bool(_Function_1_2::Block(i,this)))) || bool((bool(_Function_1_3::Block(i,this)) && bool(_Function_1_4::Block(i,this)))));
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetPair_obj,compatible,return )

Void ZPP_CbSetPair_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_CbSetPair::alloc","zpp_nape/callbacks/CbSetPair.hx",210);
		HX_STACK_THIS(this);
		HX_STACK_LINE(210)
		this->zip_listeners = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetPair_obj,alloc,(void))

Void ZPP_CbSetPair_obj::free( ){
{
		HX_STACK_PUSH("ZPP_CbSetPair::free","zpp_nape/callbacks/CbSetPair.hx",204);
		HX_STACK_THIS(this);
		HX_STACK_LINE(205)
		this->a = this->b = null();
		HX_STACK_LINE(206)
		this->listeners->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetPair_obj,free,(void))

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_CbSetPair_obj::zpp_pool;

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_CbSetPair_obj::get( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b){
	HX_STACK_PUSH("ZPP_CbSetPair::get","zpp_nape/callbacks/CbSetPair.hx",217);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(218)
	::zpp_nape::callbacks::ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(219)
	{
		HX_STACK_LINE(220)
		if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
			HX_STACK_LINE(220)
			ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
		}
		else{
			HX_STACK_LINE(227)
			ret = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
			HX_STACK_LINE(228)
			::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret->next;
			HX_STACK_LINE(229)
			ret->next = null();
		}
		HX_STACK_LINE(234)
		ret->zip_listeners = true;
	}
	HX_STACK_LINE(236)
	if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
		HX_STACK_LINE(237)
		ret->a = a;
		HX_STACK_LINE(238)
		ret->b = b;
	}
	else{
		HX_STACK_LINE(241)
		ret->a = b;
		HX_STACK_LINE(242)
		ret->b = a;
	}
	HX_STACK_LINE(244)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSetPair_obj,get,return )

bool ZPP_CbSetPair_obj::setlt( ::zpp_nape::callbacks::ZPP_CbSetPair x,::zpp_nape::callbacks::ZPP_CbSetPair y){
	HX_STACK_PUSH("ZPP_CbSetPair::setlt","zpp_nape/callbacks/CbSetPair.hx",247);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(247)
	return (bool(::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x->a,y->a)) || bool((bool((x->a == y->a)) && bool(::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(x->b,y->b)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSetPair_obj,setlt,return )


ZPP_CbSetPair_obj::ZPP_CbSetPair_obj()
{
}

void ZPP_CbSetPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CbSetPair);
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_MEMBER_NAME(zip_listeners,"zip_listeners");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_END_CLASS();
}

void ZPP_CbSetPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
	HX_VISIT_MEMBER_NAME(zip_listeners,"zip_listeners");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(a,"a");
}

Dynamic ZPP_CbSetPair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setlt") ) { return setlt_dyn(); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forall") ) { return forall_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { return listeners; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__validate") ) { return __validate_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"compatible") ) { return compatible_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"zip_listeners") ) { return zip_listeners; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"empty_intersection") ) { return empty_intersection_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"single_intersection") ) { return single_intersection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CbSetPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSetPair >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSetPair >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_InteractionListener >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"zip_listeners") ) { zip_listeners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_CbSetPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("listeners"));
	outFields->push(HX_CSTRING("zip_listeners"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	HX_CSTRING("setlt"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forall"),
	HX_CSTRING("single_intersection"),
	HX_CSTRING("empty_intersection"),
	HX_CSTRING("__validate"),
	HX_CSTRING("validate"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("listeners"),
	HX_CSTRING("zip_listeners"),
	HX_CSTRING("compatible"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("next"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CbSetPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CbSetPair_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CbSetPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CbSetPair_obj::zpp_pool,"zpp_pool");
};

Class ZPP_CbSetPair_obj::__mClass;

void ZPP_CbSetPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.callbacks.ZPP_CbSetPair"), hx::TCanCast< ZPP_CbSetPair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_CbSetPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace callbacks
