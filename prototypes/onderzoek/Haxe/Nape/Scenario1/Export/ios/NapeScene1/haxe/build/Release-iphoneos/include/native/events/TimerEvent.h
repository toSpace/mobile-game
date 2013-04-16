#ifndef INCLUDED_native_events_TimerEvent
#define INCLUDED_native_events_TimerEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/Event.h>
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,TimerEvent)
namespace native{
namespace events{


class TimerEvent_obj : public ::native::events::Event_obj{
	public:
		typedef ::native::events::Event_obj super;
		typedef TimerEvent_obj OBJ_;
		TimerEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		static hx::ObjectPtr< TimerEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TimerEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TimerEvent"); }

		virtual Void updateAfterEvent( );
		Dynamic updateAfterEvent_dyn();

		virtual ::String toString( );

		virtual ::native::events::Event clone( );

		static ::String TIMER; /* REM */ 
		static ::String TIMER_COMPLETE; /* REM */ 
};

} // end namespace native
} // end namespace events

#endif /* INCLUDED_native_events_TimerEvent */ 
