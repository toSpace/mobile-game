#ifndef INCLUDED_zpp_nape_util_ZPP_MixVec2List
#define INCLUDED_zpp_nape_util_ZPP_MixVec2List

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nape/geom/Vec2List.h>
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec2List)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_MixVec2List)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZPP_MixVec2List_obj : public ::nape::geom::Vec2List_obj{
	public:
		typedef ::nape::geom::Vec2List_obj super;
		typedef ZPP_MixVec2List_obj OBJ_;
		ZPP_MixVec2List_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_MixVec2List_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_MixVec2List_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_MixVec2List"); }

		virtual Void clear( );

		virtual bool remove( ::nape::geom::Vec2 obj);

		virtual ::nape::geom::Vec2 shift( );

		virtual ::nape::geom::Vec2 pop( );

		virtual bool unshift( ::nape::geom::Vec2 obj);

		virtual bool push( ::nape::geom::Vec2 obj);

		virtual ::nape::geom::Vec2 at( int index);

		virtual Void zpp_vm( );

		virtual int zpp_gl( );

		int at_index;
		::zpp_nape::geom::ZPP_Vec2 at_ite;
		bool zip_length;
		int _length;
		::zpp_nape::geom::ZPP_Vec2 inner;
		static ::zpp_nape::util::ZPP_MixVec2List get( ::zpp_nape::geom::ZPP_Vec2 list,hx::Null< bool >  immutable);
		static Dynamic get_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_MixVec2List */ 
