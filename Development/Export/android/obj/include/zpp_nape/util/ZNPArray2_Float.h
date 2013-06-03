#ifndef INCLUDED_zpp_nape_util_ZNPArray2_Float
#define INCLUDED_zpp_nape_util_ZNPArray2_Float

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,util,ZNPArray2_Float)
namespace zpp_nape{
namespace util{


class ZNPArray2_Float_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPArray2_Float_obj OBJ_;
		ZNPArray2_Float_obj();
		Void __construct(int width,int height);

	public:
		static hx::ObjectPtr< ZNPArray2_Float_obj > __new(int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZNPArray2_Float_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZNPArray2_Float"); }

		virtual Float set( int x,int y,Float obj);
		Dynamic set_dyn();

		virtual Float get( int x,int y);
		Dynamic get_dyn();

		virtual Void resize( int width,int height,Float def);
		Dynamic resize_dyn();

		int width; /* REM */ 
		Array< Float > list; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPArray2_Float */ 
