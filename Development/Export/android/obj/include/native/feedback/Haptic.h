#ifndef INCLUDED_native_feedback_Haptic
#define INCLUDED_native_feedback_Haptic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,feedback,Haptic)
namespace native{
namespace feedback{


class Haptic_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Haptic_obj OBJ_;
		Haptic_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Haptic_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Haptic_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Haptic"); }

		static Void vibrate( hx::Null< int >  period,hx::Null< int >  duration);
		static Dynamic vibrate_dyn();

		static Dynamic nme_haptic_vibrate; /* REM */ 
		static Dynamic &nme_haptic_vibrate_dyn() { return nme_haptic_vibrate;}
};

} // end namespace native
} // end namespace feedback

#endif /* INCLUDED_native_feedback_Haptic */ 
