#ifndef INCLUDED_Camera
#define INCLUDED_Camera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Camera)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(native,geom,Point)


class Camera_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Camera_obj OBJ_;
		Camera_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Camera_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Camera_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Camera"); }

		static Float cameraSpeed; /* REM */ 
		static Float smoothing; /* REM */ 
		static Float targetX; /* REM */ 
		static Float targetY; /* REM */ 
		static Float currentX; /* REM */ 
		static Float currentY; /* REM */ 
		static Void reload( );
		static Dynamic reload_dyn();

		static Void move( Float x,Float y,Dynamic direct);
		static Dynamic move_dyn();

		static Void follow( ::nape::phys::Body body);
		static Dynamic follow_dyn();

		static ::native::geom::Point getPosition( );
		static Dynamic getPosition_dyn();

		static Void setSpeed( Float speed);
		static Dynamic setSpeed_dyn();

		static Void render( );
		static Dynamic render_dyn();

		static Float smooth( Float data,Float previous);
		static Dynamic smooth_dyn();

};


#endif /* INCLUDED_Camera */ 
