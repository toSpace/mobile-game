#ifndef INCLUDED_RenderManager
#define INCLUDED_RenderManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(RenderManager)


class HXCPP_CLASS_ATTRIBUTES  RenderManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderManager_obj OBJ_;
		RenderManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< RenderManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RenderManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderManager"); }

		static Dynamic renderList;
		static bool running;
		static Void add( Dynamic object);
		static Dynamic add_dyn();

		static Void remove( Dynamic object);
		static Dynamic remove_dyn();

		static Void clear( );
		static Dynamic clear_dyn();

		static Void render( );
		static Dynamic render_dyn();

		static Void pause( );
		static Dynamic pause_dyn();

		static Void start( );
		static Dynamic start_dyn();

};


#endif /* INCLUDED_RenderManager */ 
