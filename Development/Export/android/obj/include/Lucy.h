#ifndef INCLUDED_Lucy
#define INCLUDED_Lucy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Character.h>
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(Lucy)
HX_DECLARE_CLASS0(SpriteObject)


class Lucy_obj : public ::Character_obj{
	public:
		typedef ::Character_obj super;
		typedef Lucy_obj OBJ_;
		Lucy_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Lucy_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Lucy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Lucy"); }

		virtual Void render( );

		::SpriteObject lucy; /* REM */ 
};


#endif /* INCLUDED_Lucy */ 
