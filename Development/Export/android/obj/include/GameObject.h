#ifndef INCLUDED_GameObject
#define INCLUDED_GameObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS2(native,display,Bitmap)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)


class GameObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GameObject_obj OBJ_;
		GameObject_obj();
		Void __construct(::String xmlUrl);

	public:
		static hx::ObjectPtr< GameObject_obj > __new(::String xmlUrl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GameObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameObject"); }

		virtual Void setXY( Float x,Float y,hx::Null< bool >  offset);
		Dynamic setXY_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void remove( );
		Dynamic remove_dyn();

		virtual Void renderPhysics( );
		Dynamic renderPhysics_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void physicsObject( ::String physic);
		Dynamic physicsObject_dyn();

		virtual ::Hash readXml( ::String url);
		Dynamic readXml_dyn();

		::Hash xml; /* REM */ 
		::native::display::Bitmap asset; /* REM */ 
		::native::display::Sprite canvas; /* REM */ 
		::nape::space::Space space; /* REM */ 
		::nape::phys::Body body; /* REM */ 
};


#endif /* INCLUDED_GameObject */ 
