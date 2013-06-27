#ifndef INCLUDED_Garbage
#define INCLUDED_Garbage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Garbage)


class HXCPP_CLASS_ATTRIBUTES  Garbage_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Garbage_obj OBJ_;
		Garbage_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Garbage_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Garbage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Garbage"); }

		static Dynamic garbageList;
		static Void add( Dynamic element);
		static Dynamic add_dyn();

		static Void clean( );
		static Dynamic clean_dyn();

		static Void clearList( );
		static Dynamic clearList_dyn();

};


#endif /* INCLUDED_Garbage */ 
