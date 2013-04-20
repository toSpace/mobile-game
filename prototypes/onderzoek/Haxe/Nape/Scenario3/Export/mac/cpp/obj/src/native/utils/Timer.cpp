#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_native_errors_Error
#include <native/errors/Error.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_TimerEvent
#include <native/events/TimerEvent.h>
#endif
#ifndef INCLUDED_native_utils_Timer
#include <native/utils/Timer.h>
#endif
namespace native{
namespace utils{

Void Timer_obj::__construct(Float delay,hx::Null< int >  __o_repeatCount)
{
HX_STACK_PUSH("Timer::new","native/utils/Timer.hx",22);
int repeatCount = __o_repeatCount.Default(0);
{
	HX_STACK_LINE(24)
	if (((bool(::Math_obj::isNaN(delay)) || bool((delay < (int)0))))){
		HX_STACK_LINE(24)
		hx::Throw (::native::errors::Error_obj::__new(HX_CSTRING("The delay specified is negative or not a finite number"),null()));
	}
	HX_STACK_LINE(30)
	super::__construct(null());
	HX_STACK_LINE(32)
	this->_delay = delay;
	HX_STACK_LINE(33)
	this->repeatCount = repeatCount;
	HX_STACK_LINE(34)
	this->currentCount = (int)0;
}
;
	return null();
}

Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(Float delay,hx::Null< int >  __o_repeatCount)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(delay,__o_repeatCount);
	return result;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Timer_obj::timer_onTimer( ){
{
		HX_STACK_PUSH("Timer::timer_onTimer","native/utils/Timer.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_LINE(118)
		(this->currentCount)++;
		HX_STACK_LINE(120)
		if (((bool((this->repeatCount > (int)0)) && bool((this->currentCount >= this->repeatCount))))){
			HX_STACK_LINE(122)
			this->stop();
			HX_STACK_LINE(123)
			this->dispatchEvent(::native::events::TimerEvent_obj::__new(::native::events::TimerEvent_obj::TIMER,null(),null()));
			HX_STACK_LINE(124)
			this->dispatchEvent(::native::events::TimerEvent_obj::__new(::native::events::TimerEvent_obj::TIMER_COMPLETE,null(),null()));
		}
		else{
			HX_STACK_LINE(126)
			this->dispatchEvent(::native::events::TimerEvent_obj::__new(::native::events::TimerEvent_obj::TIMER,null(),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,timer_onTimer,(void))

Float Timer_obj::set_delay( Float value){
	HX_STACK_PUSH("Timer::set_delay","native/utils/Timer.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(95)
	this->_delay = value;
	HX_STACK_LINE(97)
	if ((this->running)){
		HX_STACK_LINE(99)
		this->stop();
		HX_STACK_LINE(100)
		this->start();
	}
	HX_STACK_LINE(104)
	return this->_delay;
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,set_delay,return )

Float Timer_obj::get_delay( ){
	HX_STACK_PUSH("Timer::get_delay","native/utils/Timer.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return this->_delay;
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,get_delay,return )

Void Timer_obj::stop( ){
{
		HX_STACK_PUSH("Timer::stop","native/utils/Timer.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_LINE(67)
		this->running = false;
		HX_STACK_LINE(69)
		if (((this->timer != null()))){
			HX_STACK_LINE(71)
			this->timer->stop();
			HX_STACK_LINE(72)
			this->timer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

Void Timer_obj::start( ){
{
		HX_STACK_PUSH("Timer::start","native/utils/Timer.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_LINE(52)
		if ((!(this->running))){
			HX_STACK_LINE(56)
			this->running = true;
			HX_STACK_LINE(57)
			this->timer = ::haxe::Timer_obj::__new(this->_delay);
			HX_STACK_LINE(58)
			this->timer->run = this->timer_onTimer_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,start,(void))

Void Timer_obj::reset( ){
{
		HX_STACK_PUSH("Timer::reset","native/utils/Timer.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_LINE(41)
		if ((this->running)){
			HX_STACK_LINE(41)
			this->stop();
		}
		HX_STACK_LINE(47)
		this->currentCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,reset,(void))


Timer_obj::Timer_obj()
{
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(_delay,"_delay");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_MEMBER_NAME(repeatCount,"repeatCount");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(currentCount,"currentCount");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(_delay,"_delay");
	HX_VISIT_MEMBER_NAME(running,"running");
	HX_VISIT_MEMBER_NAME(repeatCount,"repeatCount");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(currentCount,"currentCount");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Timer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"delay") ) { return inCallProp ? get_delay() : delay; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delay") ) { return _delay; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { return running; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_delay") ) { return set_delay_dyn(); }
		if (HX_FIELD_EQ(inName,"get_delay") ) { return get_delay_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"repeatCount") ) { return repeatCount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentCount") ) { return currentCount; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"timer_onTimer") ) { return timer_onTimer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"delay") ) { if (inCallProp) return set_delay(inValue);delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delay") ) { _delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"repeatCount") ) { repeatCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentCount") ) { currentCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("_delay"));
	outFields->push(HX_CSTRING("running"));
	outFields->push(HX_CSTRING("repeatCount"));
	outFields->push(HX_CSTRING("delay"));
	outFields->push(HX_CSTRING("currentCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("timer_onTimer"),
	HX_CSTRING("set_delay"),
	HX_CSTRING("get_delay"),
	HX_CSTRING("stop"),
	HX_CSTRING("start"),
	HX_CSTRING("reset"),
	HX_CSTRING("timer"),
	HX_CSTRING("_delay"),
	HX_CSTRING("running"),
	HX_CSTRING("repeatCount"),
	HX_CSTRING("delay"),
	HX_CSTRING("currentCount"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.utils.Timer"), hx::TCanCast< Timer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Timer_obj::__boot()
{
}

} // end namespace native
} // end namespace utils
