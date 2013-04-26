#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#define INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/callbacks/ZPP_Listener.h>
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,InteractionCallback)
HX_DECLARE_CLASS2(nape,callbacks,InteractionListener)
HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(nape,callbacks,OptionType)
HX_DECLARE_CLASS2(nape,callbacks,PreCallback)
HX_DECLARE_CLASS2(nape,callbacks,PreFlag)
HX_DECLARE_CLASS2(nape,callbacks,PreListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbSet)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbType)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_InteractionListener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_OptionType)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_CbSet)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_CbType)
namespace zpp_nape{
namespace callbacks{


class ZPP_InteractionListener_obj : public ::zpp_nape::callbacks::ZPP_Listener_obj{
	public:
		typedef ::zpp_nape::callbacks::ZPP_Listener_obj super;
		typedef ZPP_InteractionListener_obj OBJ_;
		ZPP_InteractionListener_obj();
		Void __construct(::nape::callbacks::OptionType options1,::nape::callbacks::OptionType options2,int event,int type);

	public:
		static hx::ObjectPtr< ZPP_InteractionListener_obj > __new(::nape::callbacks::OptionType options1,::nape::callbacks::OptionType options2,int event,int type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_InteractionListener_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_InteractionListener"); }

		virtual Void swapEvent( int newev);

		virtual Void cbtype_change( ::zpp_nape::callbacks::ZPP_OptionType options,::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added);
		Dynamic cbtype_change_dyn();

		virtual Void cbtype_change2( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added);
		Dynamic cbtype_change2_dyn();

		virtual Void cbtype_change1( ::zpp_nape::callbacks::ZPP_CbType cb,bool included,bool added);
		Dynamic cbtype_change1_dyn();

		virtual Void invalidate_precedence( );

		virtual Void removedFromSpace( );

		virtual Void addedToSpace( );

		virtual Void with_union( Dynamic lambda);
		Dynamic with_union_dyn();

		virtual Void with_uniquesets( bool fresh);
		Dynamic with_uniquesets_dyn();

		virtual Void CbTypeset( ::zpp_nape::util::ZNPList_ZPP_CbType A,::zpp_nape::util::ZNPList_ZPP_CbType B,Dynamic lambda);
		Dynamic CbTypeset_dyn();

		virtual Void CbSetset( ::zpp_nape::util::ZNPList_ZPP_CbSet A,::zpp_nape::util::ZNPList_ZPP_CbSet B,Dynamic lambda);
		Dynamic CbSetset_dyn();

		virtual Void wake( );
		Dynamic wake_dyn();

		virtual Void setInteractionType( int itype);
		Dynamic setInteractionType_dyn();

		Dynamic handlerp; /* REM */ 
		Dynamic &handlerp_dyn() { return handlerp;}
		bool pure; /* REM */ 
		bool allowSleepingCallbacks; /* REM */ 
		Dynamic handleri; /* REM */ 
		Dynamic &handleri_dyn() { return handleri;}
		::zpp_nape::callbacks::ZPP_OptionType options2; /* REM */ 
		::zpp_nape::callbacks::ZPP_OptionType options1; /* REM */ 
		int itype; /* REM */ 
		::nape::callbacks::PreListener outer_znp; /* REM */ 
		::nape::callbacks::InteractionListener outer_zni; /* REM */ 
		static ::zpp_nape::util::ZNPList_ZPP_CbSet UCbSet; /* REM */ 
		static ::zpp_nape::util::ZNPList_ZPP_CbSet VCbSet; /* REM */ 
		static ::zpp_nape::util::ZNPList_ZPP_CbSet WCbSet; /* REM */ 
		static ::zpp_nape::util::ZNPList_ZPP_CbType UCbType; /* REM */ 
		static ::zpp_nape::util::ZNPList_ZPP_CbType VCbType; /* REM */ 
		static ::zpp_nape::util::ZNPList_ZPP_CbType WCbType; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace callbacks

#endif /* INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener */ 
