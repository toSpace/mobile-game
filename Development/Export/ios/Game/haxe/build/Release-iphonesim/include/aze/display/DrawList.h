#ifndef INCLUDED_aze_display_DrawList
#define INCLUDED_aze_display_DrawList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/Public.h>
HX_DECLARE_CLASS2(aze,display,DrawList)
HX_DECLARE_CLASS1(haxe,Public)
namespace aze{
namespace display{


class DrawList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawList_obj OBJ_;
		DrawList_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DrawList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DrawList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::Public_obj *()
			{ return new ::haxe::Public_delegate_< DrawList_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("DrawList"); }

		virtual Void end( );
		Dynamic end_dyn();

		virtual Void begin( int elapsed,bool useTransforms,bool useAlpha,bool useTint,bool useAdditive);
		Dynamic begin_dyn();

		int runs; /* REM */ 
		int elapsed; /* REM */ 
		int time; /* REM */ 
		int flags; /* REM */ 
		int offsetAlpha; /* REM */ 
		int offsetRGB; /* REM */ 
		int offsetTransform; /* REM */ 
		int fields; /* REM */ 
		int index; /* REM */ 
		Array< Float > list; /* REM */ 
};

} // end namespace aze
} // end namespace display

#endif /* INCLUDED_aze_display_DrawList */ 
