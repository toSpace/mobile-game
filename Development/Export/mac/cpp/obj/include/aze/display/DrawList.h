#ifndef INCLUDED_aze_display_DrawList
#define INCLUDED_aze_display_DrawList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(aze,display,DrawList)
namespace aze{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DrawList_obj : public hx::Object{
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
		::String __ToString() const { return HX_CSTRING("DrawList"); }

		virtual Void end( );
		Dynamic end_dyn();

		virtual Void begin( int elapsed,bool useTransforms,bool useAlpha,bool useTint,bool useAdditive);
		Dynamic begin_dyn();

		int runs;
		int elapsed;
		int time;
		int flags;
		int offsetAlpha;
		int offsetRGB;
		int offsetTransform;
		int fields;
		int index;
		Array< Float > list;
};

} // end namespace aze
} // end namespace display

#endif /* INCLUDED_aze_display_DrawList */ 
