#ifndef INCLUDED_World1Level1
#define INCLUDED_World1Level1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Level.h>
HX_DECLARE_CLASS0(Level)
HX_DECLARE_CLASS0(World1Level1)


class HXCPP_CLASS_ATTRIBUTES  World1Level1_obj : public ::Level_obj{
	public:
		typedef ::Level_obj super;
		typedef World1Level1_obj OBJ_;
		World1Level1_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< World1Level1_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~World1Level1_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("World1Level1"); }

		virtual Void loadLevel( );

};


#endif /* INCLUDED_World1Level1 */ 
