#ifndef INCLUDED_aze_display_TileSprite
#define INCLUDED_aze_display_TileSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <aze/display/TileBase.h>
HX_DECLARE_CLASS2(aze,display,TileBase)
HX_DECLARE_CLASS2(aze,display,TileGroup)
HX_DECLARE_CLASS2(aze,display,TileLayer)
HX_DECLARE_CLASS2(aze,display,TileSprite)
HX_DECLARE_CLASS1(haxe,Public)
HX_DECLARE_CLASS2(native,geom,Rectangle)
namespace aze{
namespace display{


class TileSprite_obj : public ::aze::display::TileBase_obj{
	public:
		typedef ::aze::display::TileBase_obj super;
		typedef TileSprite_obj OBJ_;
		TileSprite_obj();
		Void __construct(::String tile);

	public:
		static hx::ObjectPtr< TileSprite_obj > __new(::String tile);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TileSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileSprite"); }

		virtual Float get_width( );
		Dynamic get_width_dyn();

		Float width; /* REM */ 
		virtual Float get_height( );
		Dynamic get_height_dyn();

		Float height; /* REM */ 
		virtual Array< Float > get_transform( );
		Dynamic get_transform_dyn();

		Array< Float > transform; /* REM */ 
		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		int color; /* REM */ 
		virtual Float set_scaleY( Float value);
		Dynamic set_scaleY_dyn();

		virtual Float get_scaleY( );
		Dynamic get_scaleY_dyn();

		Float scaleY; /* REM */ 
		virtual Float set_scaleX( Float value);
		Dynamic set_scaleX_dyn();

		virtual Float get_scaleX( );
		Dynamic get_scaleX_dyn();

		Float scaleX; /* REM */ 
		virtual Float set_scale( Float value);
		Dynamic set_scale_dyn();

		virtual Float get_scale( );
		Dynamic get_scale_dyn();

		Float scale; /* REM */ 
		virtual Float set_rotation( Float value);
		Dynamic set_rotation_dyn();

		virtual Float get_rotation( );
		Dynamic get_rotation_dyn();

		Float rotation; /* REM */ 
		virtual int set_mirror( int value);
		Dynamic set_mirror_dyn();

		virtual int get_mirror( );
		Dynamic get_mirror_dyn();

		int mirror; /* REM */ 
		virtual int set_indice( int value);
		Dynamic set_indice_dyn();

		virtual int get_indice( );
		Dynamic get_indice_dyn();

		int indice; /* REM */ 
		virtual ::String set_tile( ::String value);
		Dynamic set_tile_dyn();

		virtual ::String get_tile( );
		Dynamic get_tile_dyn();

		::String tile; /* REM */ 
		virtual Void init( ::aze::display::TileLayer layer);

		Float b; /* REM */ 
		Float g; /* REM */ 
		Float r; /* REM */ 
		Float alpha; /* REM */ 
		Array< Float > _transform; /* REM */ 
		int _mirror; /* REM */ 
		Float _scaleY; /* REM */ 
		Float _scaleX; /* REM */ 
		Float _rotation; /* REM */ 
		bool dirty; /* REM */ 
		::native::geom::Rectangle size; /* REM */ 
		int _indice; /* REM */ 
		::String _tile; /* REM */ 
};

} // end namespace aze
} // end namespace display

#endif /* INCLUDED_aze_display_TileSprite */ 
