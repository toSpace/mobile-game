#ifndef INCLUDED_zpp_nape_constraint_ZPP_UserConstraint
#define INCLUDED_zpp_nape_constraint_ZPP_UserConstraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <zpp_nape/constraint/ZPP_Constraint.h>
HX_DECLARE_CLASS2(nape,constraint,Constraint)
HX_DECLARE_CLASS2(nape,constraint,UserConstraint)
HX_DECLARE_CLASS2(nape,geom,Vec3)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_Constraint)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_CopyHelper)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_UserBody)
HX_DECLARE_CLASS2(zpp_nape,constraint,ZPP_UserConstraint)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Vec2)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,phys,ZPP_Interactor)
namespace zpp_nape{
namespace constraint{


class HXCPP_CLASS_ATTRIBUTES  ZPP_UserConstraint_obj : public ::zpp_nape::constraint::ZPP_Constraint_obj{
	public:
		typedef ::zpp_nape::constraint::ZPP_Constraint_obj super;
		typedef ZPP_UserConstraint_obj OBJ_;
		ZPP_UserConstraint_obj();
		Void __construct(int dim,bool velonly);

	public:
		static hx::ObjectPtr< ZPP_UserConstraint_obj > __new(int dim,bool velonly);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_UserConstraint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_UserConstraint"); }

		virtual Void draw( ::nape::util::Debug g);

		virtual bool applyImpulsePos( );

		virtual bool applyImpulseVel( );

		Array< Float > jOld;
		Array< Float > J;
		virtual Void warmStart( );

		::nape::geom::Vec3 vec3;
		virtual bool preStep( Float dt);

		Array< Float > Keff;
		Float jMax;
		bool velonly;
		Float gamma;
		Float soft;
		virtual Void transform( Array< Float > L,Array< Float > x);
		Dynamic transform_dyn();

		Array< Float > y;
		virtual Array< Float > solve( Array< Float > m);
		Dynamic solve_dyn();

		Array< Float > L;
		virtual Void _clamp( Array< Float > v,Float max);
		Dynamic _clamp_dyn();

		virtual Float lsq( Array< Float > v);
		Dynamic lsq_dyn();

		virtual Void clearcache( );

		virtual Void broken( );

		virtual bool pair_exists( int id,int di);

		virtual Void forest( );

		virtual Void wake_connected( );

		virtual Void validate( );

		virtual ::nape::constraint::Constraint copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo);

		bool stepped;
		virtual Void inactiveBodies( );

		virtual Void activeBodies( );

		virtual ::nape::geom::Vec3 bodyImpulse( ::zpp_nape::phys::ZPP_Body b);
		Dynamic bodyImpulse_dyn();

		virtual bool remBody( ::zpp_nape::phys::ZPP_Body b);
		Dynamic remBody_dyn();

		virtual Void addBody( ::zpp_nape::phys::ZPP_Body b);
		Dynamic addBody_dyn();

		Array< Float > bias;
		Array< Float > jAcc;
		int dim;
		Array< ::Dynamic > bodies;
		virtual Void bindVec2_invalidate( ::zpp_nape::geom::ZPP_Vec2 _);
		Dynamic bindVec2_invalidate_dyn();

		::nape::constraint::UserConstraint outer_zn;
};

} // end namespace zpp_nape
} // end namespace constraint

#endif /* INCLUDED_zpp_nape_constraint_ZPP_UserConstraint */ 
