#ifndef INCLUDED_native_utils_Timer
#define INCLUDED_native_utils_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,utils,Timer)
namespace native{
namespace utils{


class Timer_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef Timer_obj OBJ_;
		Timer_obj();
		Void __construct(Float delay,hx::Null< int >  __o_repeatCount);

	public:
		static hx::ObjectPtr< Timer_obj > __new(Float delay,hx::Null< int >  __o_repeatCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Timer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Timer"); }

		virtual Void timer_onTimer( );
		Dynamic timer_onTimer_dyn();

		virtual Float set_delay( Float value);
		Dynamic set_delay_dyn();

		virtual Float get_delay( );
		Dynamic get_delay_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		::haxe::Timer timer; /* REM */ 
		Float _delay; /* REM */ 
		bool running; /* REM */ 
		int repeatCount; /* REM */ 
		Float delay; /* REM */ 
		int currentCount; /* REM */ 
};

} // end namespace native
} // end namespace utils

#endif /* INCLUDED_native_utils_Timer */ 
