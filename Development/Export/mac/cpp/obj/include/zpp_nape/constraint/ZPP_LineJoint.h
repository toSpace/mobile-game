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


class ZPP_LineJoint_obj : public ::zpp_nape::constraint::ZPP_Constraint_obj{
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

		virtual ::nape::constraint::Constraint copy( Array< ::zpp_nape::constraint::ZPP_CopyHelper > dict,Array< ::zpp_nape::constraint::ZPP_CopyHelper > todo);

		bool stepped; /* REM */ 
		Float biasy; /* REM */ 
		Float biasx; /* REM */ 
		Float gamma; /* REM */ 
		Float jMax; /* REM */ 
		Float jAccy; /* REM */ 
		Float jAccx; /* REM */ 
		Float kMassc; /* REM */ 
		Float kMassb; /* REM */ 
		Float kMassa; /* REM */ 
		virtual Void validate_norm( );
		Dynamic validate_norm_dyn();

		::nape::geom::Vec2 wrap_n; /* REM */ 
		virtual Void setup_n( );
		Dynamic setup_n_dyn();

		virtual Void invalidate_n( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_n_dyn();

		virtual Void validate_n( );
		Dynamic validate_n_dyn();

		Float nrely; /* REM */ 
		Float nrelx; /* REM */ 
		Float nlocaly; /* REM */ 
		Float nlocalx; /* REM */ 
		bool zip_n; /* REM */ 
		::nape::geom::Vec2 wrap_a2; /* REM */ 
		virtual Void setup_a2( );
		Dynamic setup_a2_dyn();

		virtual Void invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_a2_dyn();

		virtual Void validate_a2( );
		Dynamic validate_a2_dyn();

		Float a2rely; /* REM */ 
		Float a2relx; /* REM */ 
		Float a2localy; /* REM */ 
		Float a2localx; /* REM */ 
		::zpp_nape::phys::ZPP_Body b2; /* REM */ 
		::nape::geom::Vec2 wrap_a1; /* REM */ 
		virtual Void setup_a1( );
		Dynamic setup_a1_dyn();

		virtual Void invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_a1_dyn();

		virtual Void validate_a1( );
		Dynamic validate_a1_dyn();

		Float a1rely; /* REM */ 
		Float a1relx; /* REM */ 
		Float a1localy; /* REM */ 
		Float a1localx; /* REM */ 
		::zpp_nape::phys::ZPP_Body b1; /* REM */ 
		virtual Void inactiveBodies( );

		virtual Void activeBodies( );

		virtual ::nape::geom::Vec3 bodyImpulse( ::zpp_nape::phys::ZPP_Body b);
		Dynamic bodyImpulse_dyn();

		Float cx2; /* REM */ 
		Float cx1; /* REM */ 
		Float dot2; /* REM */ 
		Float dot1; /* REM */ 
		bool equal; /* REM */ 
		Float jointMax; /* REM */ 
		Float jointMin; /* REM */ 
		Float scale; /* REM */ 
		::nape::constraint::LineJoint outer_zn; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace constraint

#endif /* INCLUDED_zpp_nape_constraint_ZPP_LineJoint */ 
