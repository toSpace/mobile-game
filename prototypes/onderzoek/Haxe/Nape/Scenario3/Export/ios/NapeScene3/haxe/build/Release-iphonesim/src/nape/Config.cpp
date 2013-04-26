#include <hxcpp.h>

#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
namespace nape{

Void Config_obj::__construct()
{
HX_STACK_PUSH("Config::new","nape/Config.hx",9);
{
}
;
	return null();
}

Config_obj::~Config_obj() { }

Dynamic Config_obj::__CreateEmpty() { return  new Config_obj; }
hx::ObjectPtr< Config_obj > Config_obj::__new()
{  hx::ObjectPtr< Config_obj > result = new Config_obj();
	result->__construct();
	return result;}

Dynamic Config_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Config_obj > result = new Config_obj();
	result->__construct();
	return result;}

Float Config_obj::epsilon;

Float Config_obj::fluidAngularDragFriction;

Float Config_obj::fluidAngularDrag;

Float Config_obj::fluidVacuumDrag;

Float Config_obj::fluidLinearDrag;

Float Config_obj::collisionSlop;

Float Config_obj::collisionSlopCCD;

Float Config_obj::distanceThresholdCCD;

Float Config_obj::staticCCDLinearThreshold;

Float Config_obj::staticCCDAngularThreshold;

Float Config_obj::bulletCCDLinearThreshold;

Float Config_obj::bulletCCDAngularThreshold;

Float Config_obj::dynamicSweepLinearThreshold;

Float Config_obj::dynamicSweepAngularThreshold;

Float Config_obj::angularCCDSlipScale;

int Config_obj::arbiterExpirationDelay;

Float Config_obj::staticFrictionThreshold;

Float Config_obj::elasticThreshold;

int Config_obj::sleepDelay;

Float Config_obj::linearSleepThreshold;

Float Config_obj::angularSleepThreshold;

Float Config_obj::contactBiasCoef;

Float Config_obj::contactStaticBiasCoef;

Float Config_obj::contactContinuousBiasCoef;

Float Config_obj::contactContinuousStaticBiasCoef;

Float Config_obj::constraintLinearSlop;

Float Config_obj::constraintAngularSlop;

Float Config_obj::illConditionedThreshold;


Config_obj::Config_obj()
{
}

void Config_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Config);
	HX_MARK_END_CLASS();
}

void Config_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Config_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"epsilon") ) { return epsilon; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sleepDelay") ) { return sleepDelay; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionSlop") ) { return collisionSlop; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fluidVacuumDrag") ) { return fluidVacuumDrag; }
		if (HX_FIELD_EQ(inName,"fluidLinearDrag") ) { return fluidLinearDrag; }
		if (HX_FIELD_EQ(inName,"contactBiasCoef") ) { return contactBiasCoef; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fluidAngularDrag") ) { return fluidAngularDrag; }
		if (HX_FIELD_EQ(inName,"collisionSlopCCD") ) { return collisionSlopCCD; }
		if (HX_FIELD_EQ(inName,"elasticThreshold") ) { return elasticThreshold; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularCCDSlipScale") ) { return angularCCDSlipScale; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"distanceThresholdCCD") ) { return distanceThresholdCCD; }
		if (HX_FIELD_EQ(inName,"linearSleepThreshold") ) { return linearSleepThreshold; }
		if (HX_FIELD_EQ(inName,"constraintLinearSlop") ) { return constraintLinearSlop; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"angularSleepThreshold") ) { return angularSleepThreshold; }
		if (HX_FIELD_EQ(inName,"contactStaticBiasCoef") ) { return contactStaticBiasCoef; }
		if (HX_FIELD_EQ(inName,"constraintAngularSlop") ) { return constraintAngularSlop; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"arbiterExpirationDelay") ) { return arbiterExpirationDelay; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"staticFrictionThreshold") ) { return staticFrictionThreshold; }
		if (HX_FIELD_EQ(inName,"illConditionedThreshold") ) { return illConditionedThreshold; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"fluidAngularDragFriction") ) { return fluidAngularDragFriction; }
		if (HX_FIELD_EQ(inName,"staticCCDLinearThreshold") ) { return staticCCDLinearThreshold; }
		if (HX_FIELD_EQ(inName,"bulletCCDLinearThreshold") ) { return bulletCCDLinearThreshold; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"staticCCDAngularThreshold") ) { return staticCCDAngularThreshold; }
		if (HX_FIELD_EQ(inName,"bulletCCDAngularThreshold") ) { return bulletCCDAngularThreshold; }
		if (HX_FIELD_EQ(inName,"contactContinuousBiasCoef") ) { return contactContinuousBiasCoef; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"dynamicSweepLinearThreshold") ) { return dynamicSweepLinearThreshold; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"dynamicSweepAngularThreshold") ) { return dynamicSweepAngularThreshold; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"contactContinuousStaticBiasCoef") ) { return contactContinuousStaticBiasCoef; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Config_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"epsilon") ) { epsilon=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sleepDelay") ) { sleepDelay=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionSlop") ) { collisionSlop=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fluidVacuumDrag") ) { fluidVacuumDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fluidLinearDrag") ) { fluidLinearDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contactBiasCoef") ) { contactBiasCoef=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fluidAngularDrag") ) { fluidAngularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collisionSlopCCD") ) { collisionSlopCCD=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elasticThreshold") ) { elasticThreshold=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularCCDSlipScale") ) { angularCCDSlipScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"distanceThresholdCCD") ) { distanceThresholdCCD=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"linearSleepThreshold") ) { linearSleepThreshold=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraintLinearSlop") ) { constraintLinearSlop=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"angularSleepThreshold") ) { angularSleepThreshold=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contactStaticBiasCoef") ) { contactStaticBiasCoef=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraintAngularSlop") ) { constraintAngularSlop=inValue.Cast< Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"arbiterExpirationDelay") ) { arbiterExpirationDelay=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"staticFrictionThreshold") ) { staticFrictionThreshold=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"illConditionedThreshold") ) { illConditionedThreshold=inValue.Cast< Float >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"fluidAngularDragFriction") ) { fluidAngularDragFriction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"staticCCDLinearThreshold") ) { staticCCDLinearThreshold=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletCCDLinearThreshold") ) { bulletCCDLinearThreshold=inValue.Cast< Float >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"staticCCDAngularThreshold") ) { staticCCDAngularThreshold=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletCCDAngularThreshold") ) { bulletCCDAngularThreshold=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contactContinuousBiasCoef") ) { contactContinuousBiasCoef=inValue.Cast< Float >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"dynamicSweepLinearThreshold") ) { dynamicSweepLinearThreshold=inValue.Cast< Float >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"dynamicSweepAngularThreshold") ) { dynamicSweepAngularThreshold=inValue.Cast< Float >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"contactContinuousStaticBiasCoef") ) { contactContinuousStaticBiasCoef=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Config_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("epsilon"),
	HX_CSTRING("fluidAngularDragFriction"),
	HX_CSTRING("fluidAngularDrag"),
	HX_CSTRING("fluidVacuumDrag"),
	HX_CSTRING("fluidLinearDrag"),
	HX_CSTRING("collisionSlop"),
	HX_CSTRING("collisionSlopCCD"),
	HX_CSTRING("distanceThresholdCCD"),
	HX_CSTRING("staticCCDLinearThreshold"),
	HX_CSTRING("staticCCDAngularThreshold"),
	HX_CSTRING("bulletCCDLinearThreshold"),
	HX_CSTRING("bulletCCDAngularThreshold"),
	HX_CSTRING("dynamicSweepLinearThreshold"),
	HX_CSTRING("dynamicSweepAngularThreshold"),
	HX_CSTRING("angularCCDSlipScale"),
	HX_CSTRING("arbiterExpirationDelay"),
	HX_CSTRING("staticFrictionThreshold"),
	HX_CSTRING("elasticThreshold"),
	HX_CSTRING("sleepDelay"),
	HX_CSTRING("linearSleepThreshold"),
	HX_CSTRING("angularSleepThreshold"),
	HX_CSTRING("contactBiasCoef"),
	HX_CSTRING("contactStaticBiasCoef"),
	HX_CSTRING("contactContinuousBiasCoef"),
	HX_CSTRING("contactContinuousStaticBiasCoef"),
	HX_CSTRING("constraintLinearSlop"),
	HX_CSTRING("constraintAngularSlop"),
	HX_CSTRING("illConditionedThreshold"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Config_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Config_obj::epsilon,"epsilon");
	HX_MARK_MEMBER_NAME(Config_obj::fluidAngularDragFriction,"fluidAngularDragFriction");
	HX_MARK_MEMBER_NAME(Config_obj::fluidAngularDrag,"fluidAngularDrag");
	HX_MARK_MEMBER_NAME(Config_obj::fluidVacuumDrag,"fluidVacuumDrag");
	HX_MARK_MEMBER_NAME(Config_obj::fluidLinearDrag,"fluidLinearDrag");
	HX_MARK_MEMBER_NAME(Config_obj::collisionSlop,"collisionSlop");
	HX_MARK_MEMBER_NAME(Config_obj::collisionSlopCCD,"collisionSlopCCD");
	HX_MARK_MEMBER_NAME(Config_obj::distanceThresholdCCD,"distanceThresholdCCD");
	HX_MARK_MEMBER_NAME(Config_obj::staticCCDLinearThreshold,"staticCCDLinearThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::staticCCDAngularThreshold,"staticCCDAngularThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::bulletCCDLinearThreshold,"bulletCCDLinearThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::bulletCCDAngularThreshold,"bulletCCDAngularThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::dynamicSweepLinearThreshold,"dynamicSweepLinearThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::dynamicSweepAngularThreshold,"dynamicSweepAngularThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::angularCCDSlipScale,"angularCCDSlipScale");
	HX_MARK_MEMBER_NAME(Config_obj::arbiterExpirationDelay,"arbiterExpirationDelay");
	HX_MARK_MEMBER_NAME(Config_obj::staticFrictionThreshold,"staticFrictionThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::elasticThreshold,"elasticThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::sleepDelay,"sleepDelay");
	HX_MARK_MEMBER_NAME(Config_obj::linearSleepThreshold,"linearSleepThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::angularSleepThreshold,"angularSleepThreshold");
	HX_MARK_MEMBER_NAME(Config_obj::contactBiasCoef,"contactBiasCoef");
	HX_MARK_MEMBER_NAME(Config_obj::contactStaticBiasCoef,"contactStaticBiasCoef");
	HX_MARK_MEMBER_NAME(Config_obj::contactContinuousBiasCoef,"contactContinuousBiasCoef");
	HX_MARK_MEMBER_NAME(Config_obj::contactContinuousStaticBiasCoef,"contactContinuousStaticBiasCoef");
	HX_MARK_MEMBER_NAME(Config_obj::constraintLinearSlop,"constraintLinearSlop");
	HX_MARK_MEMBER_NAME(Config_obj::constraintAngularSlop,"constraintAngularSlop");
	HX_MARK_MEMBER_NAME(Config_obj::illConditionedThreshold,"illConditionedThreshold");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Config_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Config_obj::epsilon,"epsilon");
	HX_VISIT_MEMBER_NAME(Config_obj::fluidAngularDragFriction,"fluidAngularDragFriction");
	HX_VISIT_MEMBER_NAME(Config_obj::fluidAngularDrag,"fluidAngularDrag");
	HX_VISIT_MEMBER_NAME(Config_obj::fluidVacuumDrag,"fluidVacuumDrag");
	HX_VISIT_MEMBER_NAME(Config_obj::fluidLinearDrag,"fluidLinearDrag");
	HX_VISIT_MEMBER_NAME(Config_obj::collisionSlop,"collisionSlop");
	HX_VISIT_MEMBER_NAME(Config_obj::collisionSlopCCD,"collisionSlopCCD");
	HX_VISIT_MEMBER_NAME(Config_obj::distanceThresholdCCD,"distanceThresholdCCD");
	HX_VISIT_MEMBER_NAME(Config_obj::staticCCDLinearThreshold,"staticCCDLinearThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::staticCCDAngularThreshold,"staticCCDAngularThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::bulletCCDLinearThreshold,"bulletCCDLinearThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::bulletCCDAngularThreshold,"bulletCCDAngularThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::dynamicSweepLinearThreshold,"dynamicSweepLinearThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::dynamicSweepAngularThreshold,"dynamicSweepAngularThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::angularCCDSlipScale,"angularCCDSlipScale");
	HX_VISIT_MEMBER_NAME(Config_obj::arbiterExpirationDelay,"arbiterExpirationDelay");
	HX_VISIT_MEMBER_NAME(Config_obj::staticFrictionThreshold,"staticFrictionThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::elasticThreshold,"elasticThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::sleepDelay,"sleepDelay");
	HX_VISIT_MEMBER_NAME(Config_obj::linearSleepThreshold,"linearSleepThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::angularSleepThreshold,"angularSleepThreshold");
	HX_VISIT_MEMBER_NAME(Config_obj::contactBiasCoef,"contactBiasCoef");
	HX_VISIT_MEMBER_NAME(Config_obj::contactStaticBiasCoef,"contactStaticBiasCoef");
	HX_VISIT_MEMBER_NAME(Config_obj::contactContinuousBiasCoef,"contactContinuousBiasCoef");
	HX_VISIT_MEMBER_NAME(Config_obj::contactContinuousStaticBiasCoef,"contactContinuousStaticBiasCoef");
	HX_VISIT_MEMBER_NAME(Config_obj::constraintLinearSlop,"constraintLinearSlop");
	HX_VISIT_MEMBER_NAME(Config_obj::constraintAngularSlop,"constraintAngularSlop");
	HX_VISIT_MEMBER_NAME(Config_obj::illConditionedThreshold,"illConditionedThreshold");
};

Class Config_obj::__mClass;

void Config_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.Config"), hx::TCanCast< Config_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Config_obj::__boot()
{
	epsilon= 1e-8;
	fluidAngularDragFriction= 2.5;
	fluidAngularDrag= (int)100;
	fluidVacuumDrag= 0.5;
	fluidLinearDrag= 0.5;
	collisionSlop= 0.2;
	collisionSlopCCD= 0.5;
	distanceThresholdCCD= 0.05;
	staticCCDLinearThreshold= 0.05;
	staticCCDAngularThreshold= 0.005;
	bulletCCDLinearThreshold= 0.125;
	bulletCCDAngularThreshold= 0.0125;
	dynamicSweepLinearThreshold= (int)17;
	dynamicSweepAngularThreshold= 0.6;
	angularCCDSlipScale= 0.75;
	arbiterExpirationDelay= (int)6;
	staticFrictionThreshold= (int)2;
	elasticThreshold= (int)20;
	sleepDelay= (int)60;
	linearSleepThreshold= 0.2;
	angularSleepThreshold= 0.4;
	contactBiasCoef= 0.3;
	contactStaticBiasCoef= 0.6;
	contactContinuousBiasCoef= 0.4;
	contactContinuousStaticBiasCoef= 0.5;
	constraintLinearSlop= 0.1;
	constraintAngularSlop= 1e-3;
	illConditionedThreshold= 2e+8;
}

} // end namespace nape
