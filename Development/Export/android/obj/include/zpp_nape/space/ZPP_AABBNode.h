#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#define INCLUDED_zpp_nape_space_ZPP_AABBNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_AABB)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
HX_DECLARE_CLASS2(zpp_nape,shape,ZPP_Shape)
HX_DECLARE_CLASS2(zpp_nape,space,ZPP_AABBNode)
namespace zpp_nape{
namespace space{


class HXCPP_CLASS_ATTRIBUTES  ZPP_AABBNode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_AABBNode_obj OBJ_;
		ZPP_AABBNode_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_AABBNode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_AABBNode_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_AABBNode"); }

		virtual bool isLeaf( );
		Dynamic isLeaf_dyn();

		bool first_sync;
		bool synced;
		::zpp_nape::space::ZPP_AABBNode snext;
		bool moved;
		::zpp_nape::space::ZPP_AABBNode mnext;
		virtual Void free( );
		Dynamic free_dyn();

		virtual Void alloc( );
		Dynamic alloc_dyn();

		::zpp_nape::space::ZPP_AABBNode next;
		Float rayt;
		int height;
		::zpp_nape::space::ZPP_AABBNode child2;
		::zpp_nape::space::ZPP_AABBNode child1;
		::zpp_nape::space::ZPP_AABBNode parent;
		bool dyn;
		::zpp_nape::shape::ZPP_Shape shape;
		::zpp_nape::geom::ZPP_AABB aabb;
		static ::zpp_nape::space::ZPP_AABBNode zpp_pool;
};

} // end namespace zpp_nape
} // end namespace space

#endif /* INCLUDED_zpp_nape_space_ZPP_AABBNode */ 
