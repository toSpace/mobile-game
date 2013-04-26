#ifndef INCLUDED_nape_Config
#define INCLUDED_nape_Config

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(nape,Config)
namespace nape{


class Config_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Config_obj OBJ_;
		Config_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Config_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Config_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Config"); }

		static Float epsilon; /* REM */ 
		static Float fluidAngularDragFriction; /* REM */ 
		static Float fluidAngularDrag; /* REM */ 
		static Float fluidVacuumDrag; /* REM */ 
		static Float fluidLinearDrag; /* REM */ 
		static Float collisionSlop; /* REM */ 
		static Float collisionSlopCCD; /* REM */ 
		static Float distanceThresholdCCD; /* REM */ 
		static Float staticCCDLinearThreshold; /* REM */ 
		static Float staticCCDAngularThreshold; /* REM */ 
		static Float bulletCCDLinearThreshold; /* REM */ 
		static Float bulletCCDAngularThreshold; /* REM */ 
		static Float dynamicSweepLinearThreshold; /* REM */ 
		static Float dynamicSweepAngularThreshold; /* REM */ 
		static Float angularCCDSlipScale; /* REM */ 
		static int arbiterExpirationDelay; /* REM */ 
		static Float staticFrictionThreshold; /* REM */ 
		static Float elasticThreshold; /* REM */ 
		static int sleepDelay; /* REM */ 
		static Float linearSleepThreshold; /* REM */ 
		static Float angularSleepThreshold; /* REM */ 
		static Float contactBiasCoef; /* REM */ 
		static Float contactStaticBiasCoef; /* REM */ 
		static Float contactContinuousBiasCoef; /* REM */ 
		static Float contactContinuousStaticBiasCoef; /* REM */ 
		static Float constraintLinearSlop; /* REM */ 
		static Float constraintAngularSlop; /* REM */ 
		static Float illConditionedThreshold; /* REM */ 
};

} // end namespace nape

#endif /* INCLUDED_nape_Config */ 
