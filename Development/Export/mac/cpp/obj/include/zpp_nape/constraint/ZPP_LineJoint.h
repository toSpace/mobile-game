#ifndef INCLUDED_zpp_nape_constraint_ZPP_LineJoint
#define INCLUDED_zpp_nape_constraint_ZPP_LineJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/constraint/ZPP_Constraint.h>
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,LineJoint)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_LineJoint)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace zpp_nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES  ZPP_LineJoint_obj : public ::zpp_nape::constraint::ZPP_Constraint_obj{
	public:
		typedef ::zpp_nape::constraint::ZPP_Constraint_obj super;
		typedef ZPP_LineJoint_obj OBJ_;
		ZPP_LineJoint_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_LineJoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_LineJoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_LineJoint"); }

		virtual Void draw( ::nape::util::Debug g);

		virtual bool applyImpulsePos( );

		virtual bool applyImpulseVel( );

		virtual Void warmStart( );

		virtual bool preStep( Float dt);

		virtual Void clearcache( );

		virtual bool pair_exists( int id,int di);

		virtual Void forest( );

		virtual Void wake_connected( );

		virtual Void validate( );

		virtual ::nape::constraint::Constraint copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo);

		bool stepped;
		Float biasy;
		Float biasx;
		Float gamma;
		Float jMax;
		Float jAccy;
		Float jAccx;
		Float kMassc;
		Float kMassb;
		Float kMassa;
		virtual Void validate_norm( );
		Dynamic validate_norm_dyn();

		::nape::geom::Vec2 wrap_n;
		virtual Void setup_n( );
		Dynamic setup_n_dyn();

		virtual Void invalidate_n( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_n_dyn();

		virtual Void validate_n( );
		Dynamic validate_n_dyn();

		Float nrely;
		Float nrelx;
		Float nlocaly;
		Float nlocalx;
		bool zip_n;
		::nape::geom::Vec2 wrap_a2;
		virtual Void setup_a2( );
		Dynamic setup_a2_dyn();

		virtual Void invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_a2_dyn();

		virtual Void validate_a2( );
		Dynamic validate_a2_dyn();

		Float a2rely;
		Float a2relx;
		Float a2localy;
		Float a2localx;
		::zpp_nape::phys::ZPP_Body b2;
		::nape::geom::Vec2 wrap_a1;
		virtual Void setup_a1( );
		Dynamic setup_a1_dyn();

		virtual Void invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_a1_dyn();

		virtual Void validate_a1( );
		Dynamic validate_a1_dyn();

		Float a1rely;
		Float a1relx;
		Float a1localy;
		Float a1localx;
		::zpp_nape::phys::ZPP_Body b1;
		virtual Void inactiveBodies( );

		virtual Void activeBodies( );

		virtual ::nape::geom::Vec3 bodyImpulse( ::zpp_nape::phys::ZPP_Body b);
		Dynamic bodyImpulse_dyn();

		Float cx2;
		Float cx1;
		Float dot2;
		Float dot1;
		bool equal;
		Float jointMax;
		Float jointMin;
		Float scale;
		::nape::constraint::LineJoint outer_zn;
};

} // end namespace zpp_nape
} // end namespace constraint

#endif /* INCLUDED_zpp_nape_constraint_ZPP_LineJoint */ 
