#ifndef INCLUDED_zpp_nape_constraint_ZPP_PivotJoint
#define INCLUDED_zpp_nape_constraint_ZPP_PivotJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/constraint/ZPP_Constraint.h>
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,PivotJoint)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_PivotJoint)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace zpp_nape{
namespace constraint{


class ZPP_PivotJoint_obj : public ::zpp_nape::constraint::ZPP_Constraint_obj{
	public:
		typedef ::zpp_nape::constraint::ZPP_Constraint_obj super;
		typedef ZPP_PivotJoint_obj OBJ_;
		ZPP_PivotJoint_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_PivotJoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_PivotJoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_PivotJoint"); }

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

		::nape::constraint::PivotJoint outer_zn; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace constraint

#endif /* INCLUDED_zpp_nape_constraint_ZPP_PivotJoint */ 
