#ifndef INCLUDED_aze_display_TileGroup
#define INCLUDED_aze_display_TileGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <aze/display/TileBase.h>
HX_DECLARE_CLASS2(aze,display,TileBase)
HX_DECLARE_CLASS2(aze,display,TileGroup)
HX_DECLARE_CLASS2(aze,display,TileLayer)
namespace aze{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  TileGroup_obj : public ::aze::display::TileBase_obj{
	public:
		typedef ::aze::display::TileBase_obj super;
		typedef TileGroup_obj OBJ_;
		TileGroup_obj();
		Void __construct(::aze::display::TileLayer layer);

	public:
		static hx::ObjectPtr< TileGroup_obj > __new(::aze::display::TileLayer layer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TileGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileGroup"); }

		virtual Float get_width( );
		Dynamic get_width_dyn();

		Float width;
		virtual Float get_height( );
		Dynamic get_height_dyn();

		Float height;
		virtual int get_numChildren( );
		Dynamic get_numChildren_dyn();

		int numChildren;
		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual Void setChildIndex( ::aze::display::TileBase item,int index);
		Dynamic setChildIndex_dyn();

		virtual int getChildIndex( ::aze::display::TileBase item);
		Dynamic getChildIndex_dyn();

		virtual Array< ::Dynamic > removeAllChildren( );
		Dynamic removeAllChildren_dyn();

		virtual ::aze::display::TileBase removeChildAt( int index);
		Dynamic removeChildAt_dyn();

		virtual ::aze::display::TileBase removeChild( ::aze::display::TileBase item);
		Dynamic removeChild_dyn();

		virtual int addChildAt( ::aze::display::TileBase item,int index);
		Dynamic addChildAt_dyn();

		virtual int addChild( ::aze::display::TileBase item);
		Dynamic addChild_dyn();

		virtual int indexOf( ::aze::display::TileBase item);
		Dynamic indexOf_dyn();

		virtual Void initChildren( );
		Dynamic initChildren_dyn();

		virtual Void initChild( ::aze::display::TileBase item);
		Dynamic initChild_dyn();

		virtual Void init( ::aze::display::TileLayer layer);

		Array< ::Dynamic > children;
};

} // end namespace aze
} // end namespace display

#endif /* INCLUDED_aze_display_TileGroup */ 
