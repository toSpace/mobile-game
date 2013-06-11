#ifndef INCLUDED_aze_display_TileClip
#define INCLUDED_aze_display_TileClip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <aze/display/TileSprite.h>
HX_DECLARE_CLASS2(aze,display,TileBase)
HX_DECLARE_CLASS2(aze,display,TileClip)
HX_DECLARE_CLASS2(aze,display,TileGroup)
HX_DECLARE_CLASS2(aze,display,TileLayer)
HX_DECLARE_CLASS2(aze,display,TileSprite)
HX_DECLARE_CLASS1(haxe,Public)
namespace aze{
namespace display{


class TileClip_obj : public ::aze::display::TileSprite_obj{
	public:
		typedef ::aze::display::TileSprite_obj super;
		typedef TileClip_obj OBJ_;
		TileClip_obj();
		Void __construct(::String tile,hx::Null< int >  __o_fps);

	public:
		static hx::ObjectPtr< TileClip_obj > __new(::String tile,hx::Null< int >  __o_fps);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TileClip_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileClip"); }

		virtual int get_totalFrames( );
		Dynamic get_totalFrames_dyn();

		int totalFrames; /* REM */ 
		virtual int set_currentFrame( int value);
		Dynamic set_currentFrame_dyn();

		virtual int get_currentFrame( );
		Dynamic get_currentFrame_dyn();

		int currentFrame; /* REM */ 
		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void step( int elapsed);

		virtual Void init( ::aze::display::TileLayer layer);

		int prevFrame; /* REM */ 
		int time; /* REM */ 
		bool loop; /* REM */ 
		int fps; /* REM */ 
		Array< int > frames; /* REM */ 
		Dynamic onComplete; /* REM */ 
		Dynamic &onComplete_dyn() { return onComplete;}
};

} // end namespace aze
} // end namespace display

#endif /* INCLUDED_aze_display_TileClip */ 
