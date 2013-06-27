#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_Listener_obj::__construct()
{
HX_STACK_PUSH("ZPP_Listener::new","zpp_nape/callbacks/Listener.hx",174);
{
	HX_STACK_LINE(186)
	this->space = null();
	HX_STACK_LINE(185)
	this->interaction = null();
	HX_STACK_LINE(184)
	this->constraint = null();
	HX_STACK_LINE(183)
	this->body = null();
	HX_STACK_LINE(182)
	this->precedence = (int)0;
	HX_STACK_LINE(181)
	this->event = (int)0;
	HX_STACK_LINE(180)
	this->type = (int)0;
	HX_STACK_LINE(179)
	this->id = (int)0;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(187)
	this->id = ::zpp_nape::ZPP_ID_obj::Listener();
}
;
	return null();
}

ZPP_Listener_obj::~ZPP_Listener_obj() { }

Dynamic ZPP_Listener_obj::__CreateEmpty() { return  new ZPP_Listener_obj; }
hx::ObjectPtr< ZPP_Listener_obj > ZPP_Listener_obj::__new()
{  hx::ObjectPtr< ZPP_Listener_obj > result = new ZPP_Listener_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Listener_obj > result = new ZPP_Listener_obj();
	result->__construct();
	return result;}

Void ZPP_Listener_obj::removedFromSpace( ){
{
		HX_STACK_PUSH("ZPP_Listener::removedFromSpace","zpp_nape/callbacks/Listener.hx",197);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Listener_obj,removedFromSpace,(void))

Void ZPP_Listener_obj::addedToSpace( ){
{
		HX_STACK_PUSH("ZPP_Listener::addedToSpace","zpp_nape/callbacks/Listener.hx",196);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Listener_obj,addedToSpace,(void))

Void ZPP_Listener_obj::invalidate_precedence( ){
{
		HX_STACK_PUSH("ZPP_Listener::invalidate_precedence","zpp_nape/callbacks/Listener.hx",195);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Listener_obj,invalidate_precedence,(void))

Void ZPP_Listener_obj::swapEvent( int event){
{
		HX_STACK_PUSH("ZPP_Listener::swapEvent","zpp_nape/callbacks/Listener.hx",194);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Listener_obj,swapEvent,(void))

bool ZPP_Listener_obj::internal;

bool ZPP_Listener_obj::setlt( ::zpp_nape::callbacks::ZPP_Listener a,::zpp_nape::callbacks::ZPP_Listener b){
	HX_STACK_PUSH("ZPP_Listener::setlt","zpp_nape/callbacks/Listener.hx",191);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(191)
	return (bool((a->precedence > b->precedence)) || bool((bool((a->precedence == b->precedence)) && bool((a->id > b->id)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Listener_obj,setlt,return )


ZPP_Listener_obj::ZPP_Listener_obj()
{
}

void ZPP_Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Listener);
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(interaction,"interaction");
	HX_MARK_MEMBER_NAME(constraint,"constraint");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(precedence,"precedence");
	HX_MARK_MEMBER_NAME(event,"event");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_END_CLASS();
}

void ZPP_Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(interaction,"interaction");
	HX_VISIT_MEMBER_NAME(constraint,"constraint");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(precedence,"precedence");
	HX_VISIT_MEMBER_NAME(event,"event");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(outer,"outer");
}

Dynamic ZPP_Listener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setlt") ) { return setlt_dyn(); }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"event") ) { return event; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { return internal; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swapEvent") ) { return swapEvent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"constraint") ) { return constraint; }
		if (HX_FIELD_EQ(inName,"precedence") ) { return precedence; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interaction") ) { return interaction; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"invalidate_precedence") ) { return invalidate_precedence_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::zpp_nape::callbacks::ZPP_BodyListener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"event") ) { event=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::callbacks::Listener >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"constraint") ) { constraint=inValue.Cast< ::zpp_nape::callbacks::ZPP_ConstraintListener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"precedence") ) { precedence=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interaction") ) { interaction=inValue.Cast< ::zpp_nape::callbacks::ZPP_InteractionListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("interaction"));
	outFields->push(HX_CSTRING("constraint"));
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("precedence"));
	outFields->push(HX_CSTRING("event"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("internal"),
	HX_CSTRING("setlt"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("removedFromSpace"),
	HX_CSTRING("addedToSpace"),
	HX_CSTRING("invalidate_precedence"),
	HX_CSTRING("swapEvent"),
	HX_CSTRING("space"),
	HX_CSTRING("interaction"),
	HX_CSTRING("constraint"),
	HX_CSTRING("body"),
	HX_CSTRING("precedence"),
	HX_CSTRING("event"),
	HX_CSTRING("type"),
	HX_CSTRING("id"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Listener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Listener_obj::internal,"internal");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Listener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Listener_obj::internal,"internal");
};

Class ZPP_Listener_obj::__mClass;

void ZPP_Listener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.callbacks.ZPP_Listener"), hx::TCanCast< ZPP_Listener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Listener_obj::__boot()
{
	internal= false;
}

} // end namespace zpp_nape
} // end namespace callbacks
