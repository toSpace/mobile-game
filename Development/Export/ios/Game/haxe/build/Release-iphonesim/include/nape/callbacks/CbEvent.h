#ifndef INCLUDED_nape_callbacks_CbEvent
#define INCLUDED_nape_callbacks_CbEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbEvent)
namespace nape{
namespace callbacks{


class CbEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CbEvent_obj OBJ_;
		CbEvent_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CbEvent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CbEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CbEvent"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		static ::nape::callbacks::CbEvent BEGIN; /* REM */ 
		static ::nape::callbacks::CbEvent get_BEGIN( );
		static Dynamic get_BEGIN_dyn();

		static ::nape::callbacks::CbEvent ONGOING; /* REM */ 
		static ::nape::callbacks::CbEvent get_ONGOING( );
		static Dynamic get_ONGOING_dyn();

		static ::nape::callbacks::CbEvent END; /* REM */ 
		static ::nape::callbacks::CbEvent get_END( );
		static Dynamic get_END_dyn();

		static ::nape::callbacks::CbEvent WAKE; /* REM */ 
		static ::nape::callbacks::CbEvent get_WAKE( );
		static Dynamic get_WAKE_dyn();

		static ::nape::callbacks::CbEvent SLEEP; /* REM */ 
		static ::nape::callbacks::CbEvent get_SLEEP( );
		static Dynamic get_SLEEP_dyn();

		static ::nape::callbacks::CbEvent BREAK; /* REM */ 
		static ::nape::callbacks::CbEvent get_BREAK( );
		static Dynamic get_BREAK_dyn();

		static ::nape::callbacks::CbEvent PRE; /* REM */ 
		static ::nape::callbacks::CbEvent get_PRE( );
		static Dynamic get_PRE_dyn();

};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_CbEvent */ 
