#ifndef INCLUDED_zpp_nape_constraint_ZPP_AngleJoint
#define INCLUDED_zpp_nape_constraint_ZPP_AngleJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/constraint/ZPP_Constraint.h>
HX_DECLARE_CLASS2(nape,constraint,AngleJoint)
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_AngleJoint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace zpp_nape{
namespace constraint{


class ZPP_AngleJoint_obj : public ::zpp_nape::constraint::ZPP_Constraint_obj{
	public:
		typedef ::zpp_nape::constraint::ZPP_Constraint_obj super;
		typedef ZPP_AngleJoint_obj OBJ_;
		ZPP_AngleJoint_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_AngleJoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_AngleJoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_AngleJoint"); }

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
		::zpp_nape::phys::ZPP_Body b2; /* REM */ 
		::zpp_nape::phys::ZPP_Body b1; /* REM */ 
		virtual Void inactiveBodies( );

		virtual Void activeBodies( );

		virtual ::nape::geom::Vec3 bodyImpulse( ::zpp_nape::phys::ZPP_Body b);
		Dynamic bodyImpulse_dyn();

		virtual bool is_slack( );
		Dynamic is_slack_dyn();

		Float scale; /* REM */ 
		bool equal; /* REM */ 
		bool slack; /* REM */ 
		Float jointMax; /* REM */ 
		Float jointMin; /* REM */ 
		Float ratio; /* REM */ 
		::nape::constraint::AngleJoint outer_zn; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace constraint

#endif /* INCLUDED_zpp_nape_constraint_ZPP_AngleJoint */ 
