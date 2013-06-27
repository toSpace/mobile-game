#ifndef INCLUDED_Level
#define INCLUDED_Level

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Level)


class HXCPP_CLASS_ATTRIBUTES  Level_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Level_obj OBJ_;
		Level_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Level_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Level_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Level"); }

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void loadLevel( );
		Dynamic loadLevel_dyn();

		virtual Void snort( );
		Dynamic snort_dyn();

		virtual Void resetNightmare( );
		Dynamic resetNightmare_dyn();

		virtual Float getNightmare( );
		Dynamic getNightmare_dyn();

		virtual Void addToNightmare( Float point);
		Dynamic addToNightmare_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		int nightmareTolerance;
		Float nightmare;
		static Dynamic load( ::String level);
		static Dynamic load_dyn();

};


#endif /* INCLUDED_Level */ 
