#ifndef INCLUDED_Character
#define INCLUDED_Character

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)


class HXCPP_CLASS_ATTRIBUTES  Character_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Character_obj OBJ_;
		Character_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Character_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Character_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Character"); }

		virtual Void walk( ::nape::phys::Body body,Float speed,Float velocity);
		Dynamic walk_dyn();

		virtual Void render( );
		Dynamic render_dyn();

};


#endif /* INCLUDED_Character */ 
