#ifndef INCLUDED_nape_callbacks_ListenerList
#define INCLUDED_nape_callbacks_ListenerList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(nape,callbacks,ListenerIterator)
HX_DECLARE_CLASS2(nape,callbacks,ListenerList)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_ListenerList)
namespace nape{
namespace callbacks{


class ListenerList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ListenerList_obj OBJ_;
		ListenerList_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ListenerList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ListenerList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ListenerList"); }

		virtual ::nape::callbacks::ListenerList filter( Dynamic lambda);
		Dynamic filter_dyn();

		virtual ::nape::callbacks::ListenerList foreach( Dynamic lambda);
		Dynamic foreach_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void merge( ::nape::callbacks::ListenerList xs);
		Dynamic merge_dyn();

		virtual ::nape::callbacks::ListenerList copy( hx::Null< bool >  deep);
		Dynamic copy_dyn();

		virtual ::nape::callbacks::ListenerIterator iterator( );
		Dynamic iterator_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool remove( ::nape::callbacks::Listener obj);
		Dynamic remove_dyn();

		virtual bool add( ::nape::callbacks::Listener obj);
		Dynamic add_dyn();

		virtual ::nape::callbacks::Listener shift( );
		Dynamic shift_dyn();

		virtual ::nape::callbacks::Listener pop( );
		Dynamic pop_dyn();

		virtual bool unshift( ::nape::callbacks::Listener obj);
		Dynamic unshift_dyn();

		virtual bool push( ::nape::callbacks::Listener obj);
		Dynamic push_dyn();

		virtual ::nape::callbacks::Listener at( int index);
		Dynamic at_dyn();

		virtual bool has( ::nape::callbacks::Listener obj);
		Dynamic has_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

		int length; /* REM */ 
		::zpp_nape::util::ZPP_ListenerList zpp_inner; /* REM */ 
		static ::nape::callbacks::ListenerList fromArray( Array< ::nape::callbacks::Listener > array);
		static Dynamic fromArray_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_ListenerList */ 
