#ifndef INCLUDED_zpp_nape_constraint_ZPP_MotorJoint
#define INCLUDED_zpp_nape_constraint_ZPP_MotorJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/constraint/ZPP_Constraint.h>
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,MotorJoint)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_MotorJoint)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace zpp_nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES  ZPP_MotorJoint_obj : public ::zpp_nape::constraint::ZPP_Constraint_obj{
	public:
		typedef ::zpp_nape::constraint::ZPP_Constraint_obj super;
		typedef ZPP_MotorJoint_obj OBJ_;
		ZPP_MotorJoint_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_MotorJoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_MotorJoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_MotorJoint"); }

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
		Float jMax;
		Float jAcc;
		Float kMass;
		::zpp_nape::phys::ZPP_Body b2;
		::zpp_nape::phys::ZPP_Body b1;
		virtual Void inactiveBodies( );

		virtual Void activeBodies( );

		virtual ::nape::geom::Vec3 bodyImpulse( ::zpp_nape::phys::ZPP_Body b);
		Dynamic bodyImpulse_dyn();

		Float rate;
		Float ratio;
		::nape::constraint::MotorJoint outer_zn;
};

} // end namespace zpp_nape
} // end namespace constraint

#endif /* INCLUDED_zpp_nape_constraint_ZPP_MotorJoint */ 
