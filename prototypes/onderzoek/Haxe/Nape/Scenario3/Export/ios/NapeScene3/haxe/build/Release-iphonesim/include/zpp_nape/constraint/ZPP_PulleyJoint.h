#ifndef INCLUDED_zpp_nape_constraint_ZPP_PulleyJoint
#define INCLUDED_zpp_nape_constraint_ZPP_PulleyJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/constraint/ZPP_Constraint.h>
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,PulleyJoint)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_PulleyJoint)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace zpp_nape{
namespace constraint{


class ZPP_PulleyJoint_obj : public ::zpp_nape::constraint::ZPP_Constraint_obj{
	public:
		typedef ::zpp_nape::constraint::ZPP_Constraint_obj super;
		typedef ZPP_PulleyJoint_obj OBJ_;
		ZPP_PulleyJoint_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_PulleyJoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_PulleyJoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_PulleyJoint"); }

		virtual Void drawLink( ::nape::util::Debug g,::nape::geom::Vec2 a1,::nape::geom::Vec2 a2,::nape::geom::Vec2 n,Float nl,Float bias,Float scale,int ca,int cb);
		Dynamic drawLink_dyn();

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
		Float bias; /* REM */ 
		Float gamma; /* REM */ 
		Float jMax; /* REM */ 
		Float jAcc; /* REM */ 
		Float kMass; /* REM */ 
		::nape::geom::Vec2 wrap_a4; /* REM */ 
		virtual Void setup_a4( );
		Dynamic setup_a4_dyn();

		virtual Void invalidate_a4( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_a4_dyn();

		virtual Void validate_a4( );
		Dynamic validate_a4_dyn();

		Float a4rely; /* REM */ 
		Float a4relx; /* REM */ 
		Float a4localy; /* REM */ 
		Float a4localx; /* REM */ 
		::zpp_nape::phys::ZPP_Body b4; /* REM */ 
		::nape::geom::Vec2 wrap_a3; /* REM */ 
		virtual Void setup_a3( );
		Dynamic setup_a3_dyn();

		virtual Void invalidate_a3( ::zpp_nape::geom::ZPP_Vec2 x);
		Dynamic invalidate_a3_dyn();

		virtual Void validate_a3( );
		Dynamic validate_a3_dyn();

		Float a3rely; /* REM */ 
		Float a3relx; /* REM */ 
		Float a3localy; /* REM */ 
		Float a3localx; /* REM */ 
		::zpp_nape::phys::ZPP_Body b3; /* REM */ 
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

		Float cx4; /* REM */ 
		Float cx3; /* REM */ 
		Float cx2; /* REM */ 
		Float cx1; /* REM */ 
		Float n34y; /* REM */ 
		Float n34x; /* REM */ 
		Float n12y; /* REM */ 
		Float n12x; /* REM */ 
		virtual bool is_slack( );
		Dynamic is_slack_dyn();

		bool equal; /* REM */ 
		bool slack; /* REM */ 
		Float jointMax; /* REM */ 
		Float jointMin; /* REM */ 
		Float ratio; /* REM */ 
		::nape::constraint::PulleyJoint outer_zn; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace constraint

#endif /* INCLUDED_zpp_nape_constraint_ZPP_PulleyJoint */ 
