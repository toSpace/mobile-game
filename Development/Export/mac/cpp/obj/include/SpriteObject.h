#ifndef INCLUDED_SpriteObject
#define INCLUDED_SpriteObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS0(SpriteObject)
HX_DECLARE_CLASS2(aze,display,TileBase)
HX_DECLARE_CLASS2(aze,display,TileClip)
HX_DECLARE_CLASS2(aze,display,TileGroup)
HX_DECLARE_CLASS2(aze,display,TileLayer)
HX_DECLARE_CLASS2(aze,display,TileSprite)
HX_DECLARE_CLASS1(haxe,Public)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)


class SpriteObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SpriteObject_obj OBJ_;
		SpriteObject_obj();
		Void __construct(::String xmlUrl,::String sparrowXml);

	public:
		static hx::ObjectPtr< SpriteObject_obj > __new(::String xmlUrl,::String sparrowXml);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SpriteObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SpriteObject"); }

		virtual Void setXY( Float x,Float y,hx::Null< bool >  offset);
		Dynamic setXY_dyn();

		virtual Void renderPhysics( );
		Dynamic renderPhysics_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void makePhysics( Float x,Float y);
		Dynamic makePhysics_dyn();

		virtual Void makeClip( ::String name,Dynamic loop,Dynamic play);
		Dynamic makeClip_dyn();

		virtual Void makeSpritesheet( ::String xmlUrl,::String imgUrl);
		Dynamic makeSpritesheet_dyn();

		virtual ::Hash readXml( ::String url);
		Dynamic readXml_dyn();

		::aze::display::TileClip clip; /* REM */ 
		::nape::phys::Body body; /* REM */ 
		::Hash xml; /* REM */ 
		::aze::display::TileLayer layer; /* REM */ 
		Float tLast; /* REM */ 
};


#endif /* INCLUDED_SpriteObject */ 
