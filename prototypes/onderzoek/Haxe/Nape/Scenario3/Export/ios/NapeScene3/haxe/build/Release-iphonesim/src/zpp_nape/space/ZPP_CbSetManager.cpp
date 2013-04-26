#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CbSetManager
#include <zpp_nape/space/ZPP_CbSetManager.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSetPair
#include <zpp_nape/util/ZNPList_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSet
#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_CbSetManager_obj::__construct(::zpp_nape::space::ZPP_Space space)
{
HX_STACK_PUSH("ZPP_CbSetManager::new","zpp_nape/space/Space.hx",1191);
{
	HX_STACK_LINE(1193)
	this->space = null();
	HX_STACK_LINE(1192)
	this->cbsets = null();
	HX_STACK_LINE(1296)
	{
		HX_STACK_LINE(1297)
		if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
			HX_STACK_LINE(1297)
			this->cbsets = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
		}
		else{
			HX_STACK_LINE(1304)
			this->cbsets = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(1305)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = this->cbsets->next;
			HX_STACK_LINE(1306)
			this->cbsets->next = null();
		}
		HX_STACK_LINE(1311)
		Dynamic();
	}
	HX_STACK_LINE(1313)
	this->cbsets->lt = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt_dyn();
	HX_STACK_LINE(1314)
	this->space = space;
}
;
	return null();
}

ZPP_CbSetManager_obj::~ZPP_CbSetManager_obj() { }

Dynamic ZPP_CbSetManager_obj::__CreateEmpty() { return  new ZPP_CbSetManager_obj; }
hx::ObjectPtr< ZPP_CbSetManager_obj > ZPP_CbSetManager_obj::__new(::zpp_nape::space::ZPP_Space space)
{  hx::ObjectPtr< ZPP_CbSetManager_obj > result = new ZPP_CbSetManager_obj();
	result->__construct(space);
	return result;}

Dynamic ZPP_CbSetManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CbSetManager_obj > result = new ZPP_CbSetManager_obj();
	result->__construct(inArgs[0]);
	return result;}

bool ZPP_CbSetManager_obj::valid_listener( ::zpp_nape::callbacks::ZPP_Listener i){
	HX_STACK_PUSH("ZPP_CbSetManager::valid_listener","zpp_nape/space/Space.hx",1374);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1374)
	return (i->space == this->space);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetManager_obj,valid_listener,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_CbSetManager_obj::pair( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b){
	HX_STACK_PUSH("ZPP_CbSetManager::pair","zpp_nape/space/Space.hx",1348);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(1349)
	::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1350)
	::zpp_nape::util::ZNPList_ZPP_CbSetPair pairs = (  (((a->cbpairs->length < b->cbpairs->length))) ? ::zpp_nape::util::ZNPList_ZPP_CbSetPair(a->cbpairs) : ::zpp_nape::util::ZNPList_ZPP_CbSetPair(b->cbpairs) );		HX_STACK_VAR(pairs,"pairs");
	HX_STACK_LINE(1351)
	{
		HX_STACK_LINE(1352)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1353)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1354)
			::zpp_nape::callbacks::ZPP_CbSetPair p = cx_ite->elt;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(1355)
			if (((bool((bool((p->a == a)) && bool((p->b == b)))) || bool((bool((p->a == b)) && bool((p->b == a))))))){
				HX_STACK_LINE(1357)
				ret = p;
				HX_STACK_LINE(1358)
				break;
			}
			HX_STACK_LINE(1361)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1364)
	if (((ret == null()))){
		struct _Function_2_1{
			inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &a,::zpp_nape::callbacks::ZPP_CbSet &b){
				HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",1365);
				{
					HX_STACK_LINE(1365)
					::zpp_nape::callbacks::ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1365)
					{
						HX_STACK_LINE(1365)
						if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
							HX_STACK_LINE(1365)
							ret1 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
						}
						else{
							HX_STACK_LINE(1365)
							ret1 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
							HX_STACK_LINE(1365)
							::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1365)
							ret1->next = null();
						}
						HX_STACK_LINE(1365)
						ret1->zip_listeners = true;
					}
					HX_STACK_LINE(1365)
					if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
						HX_STACK_LINE(1365)
						ret1->a = a;
						HX_STACK_LINE(1365)
						ret1->b = b;
					}
					else{
						HX_STACK_LINE(1365)
						ret1->a = b;
						HX_STACK_LINE(1365)
						ret1->b = a;
					}
					HX_STACK_LINE(1365)
					return ret1;
				}
				return null();
			}
		};
		HX_STACK_LINE(1365)
		ret = _Function_2_1::Block(a,b);
		HX_STACK_LINE(1366)
		a->cbpairs->add(ret);
		HX_STACK_LINE(1367)
		if (((b != a))){
			HX_STACK_LINE(1367)
			b->cbpairs->add(ret);
		}
	}
	HX_STACK_LINE(1369)
	if ((ret->zip_listeners)){
		HX_STACK_LINE(1369)
		ret->zip_listeners = false;
		HX_STACK_LINE(1369)
		ret->__validate();
	}
	HX_STACK_LINE(1370)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSetManager_obj,pair,return )

Void ZPP_CbSetManager_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_CbSetManager::validate","zpp_nape/space/Space.hx",1318);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1320)
		{
		}
		HX_STACK_LINE(1328)
		if ((!(this->cbsets->empty()))){
			HX_STACK_LINE(1329)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = this->cbsets->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(1330)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(1330)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(1331)
			while(((set_ite != null()))){
				HX_STACK_LINE(1332)
				::zpp_nape::callbacks::ZPP_CbSet cb = set_ite->data;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(1333)
				cb->validate();
				HX_STACK_LINE(1334)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(1335)
					set_ite = set_ite->next;
					HX_STACK_LINE(1336)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(1336)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(1339)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(1339)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(1340)
					set_ite = set_ite->parent;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetManager_obj,validate,(void))

Void ZPP_CbSetManager_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_CbSetManager::clear","zpp_nape/space/Space.hx",1285);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetManager_obj,clear,(void))

Void ZPP_CbSetManager_obj::remove( ::zpp_nape::callbacks::ZPP_CbSet set){
{
		HX_STACK_PUSH("ZPP_CbSetManager::remove","zpp_nape/space/Space.hx",1253);
		HX_STACK_THIS(this);
		HX_STACK_ARG(set,"set");
		HX_STACK_LINE(1254)
		this->cbsets->remove(set);
		HX_STACK_LINE(1255)
		while((!(((set->cbpairs->head == null()))))){
			HX_STACK_LINE(1257)
			::zpp_nape::callbacks::ZPP_CbSetPair pair = set->cbpairs->pop_unsafe();		HX_STACK_VAR(pair,"pair");
			HX_STACK_LINE(1258)
			{
				HX_STACK_LINE(1259)
				if (((pair->a != pair->b))){
					HX_STACK_LINE(1259)
					if (((set == pair->a))){
						HX_STACK_LINE(1260)
						pair->b->cbpairs->remove(pair);
					}
					else{
						HX_STACK_LINE(1261)
						pair->a->cbpairs->remove(pair);
					}
				}
				HX_STACK_LINE(1263)
				{
					HX_STACK_LINE(1264)
					::zpp_nape::callbacks::ZPP_CbSetPair o = pair;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1265)
					{
					}
					HX_STACK_LINE(1273)
					{
						HX_STACK_LINE(1273)
						o->a = o->b = null();
						HX_STACK_LINE(1273)
						o->listeners->clear();
					}
					HX_STACK_LINE(1274)
					o->next = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
					HX_STACK_LINE(1275)
					::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1283)
		set->manager = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetManager_obj,remove,(void))

::zpp_nape::callbacks::ZPP_CbSet ZPP_CbSetManager_obj::get( ::zpp_nape::util::ZNPList_ZPP_CbType cbTypes){
	HX_STACK_PUSH("ZPP_CbSetManager::get","zpp_nape/space/Space.hx",1194);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cbTypes,"cbTypes");
	HX_STACK_LINE(1195)
	if (((cbTypes->head == null()))){
		HX_STACK_LINE(1195)
		return null();
	}
	HX_STACK_LINE(1198)
	::zpp_nape::callbacks::ZPP_CbSet fake;		HX_STACK_VAR(fake,"fake");
	HX_STACK_LINE(1199)
	{
		HX_STACK_LINE(1200)
		if (((::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool == null()))){
			HX_STACK_LINE(1200)
			fake = ::zpp_nape::callbacks::ZPP_CbSet_obj::__new();
		}
		else{
			HX_STACK_LINE(1207)
			fake = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(1208)
			::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = fake->next;
			HX_STACK_LINE(1209)
			fake->next = null();
		}
		HX_STACK_LINE(1214)
		Dynamic();
	}
	HX_STACK_LINE(1216)
	::zpp_nape::util::ZNPList_ZPP_CbType faketypes = fake->cbTypes;		HX_STACK_VAR(faketypes,"faketypes");
	HX_STACK_LINE(1217)
	fake->cbTypes = cbTypes;
	HX_STACK_LINE(1218)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet res = this->cbsets->find_weak(fake);		HX_STACK_VAR(res,"res");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbSet Block( ::zpp_nape::util::ZNPList_ZPP_CbType &cbTypes,::zpp_nape::space::ZPP_CbSetManager_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",1219);
			{
				HX_STACK_LINE(1220)
				::zpp_nape::callbacks::ZPP_CbSet set = ::zpp_nape::callbacks::ZPP_CbSet_obj::get(cbTypes);		HX_STACK_VAR(set,"set");
				HX_STACK_LINE(1221)
				{
				}
				HX_STACK_LINE(1229)
				__this->cbsets->insert(set);
				HX_STACK_LINE(1230)
				set->manager = __this;
				HX_STACK_LINE(1231)
				return set;
			}
			return null();
		}
	};
	HX_STACK_LINE(1219)
	::zpp_nape::callbacks::ZPP_CbSet ret = (  (((res != null()))) ? ::zpp_nape::callbacks::ZPP_CbSet(res->data) : ::zpp_nape::callbacks::ZPP_CbSet(_Function_1_1::Block(cbTypes,this)) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1233)
	fake->cbTypes = faketypes;
	HX_STACK_LINE(1234)
	{
		HX_STACK_LINE(1235)
		::zpp_nape::callbacks::ZPP_CbSet o = fake;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1236)
		{
		}
		HX_STACK_LINE(1244)
		{
			HX_STACK_LINE(1244)
			{
			}
			HX_STACK_LINE(1244)
			{
			}
			HX_STACK_LINE(1244)
			{
			}
			HX_STACK_LINE(1244)
			o->listeners->clear();
			HX_STACK_LINE(1244)
			o->zip_listeners = true;
			HX_STACK_LINE(1244)
			o->bodylisteners->clear();
			HX_STACK_LINE(1244)
			o->zip_bodylisteners = true;
			HX_STACK_LINE(1244)
			o->conlisteners->clear();
			HX_STACK_LINE(1244)
			o->zip_conlisteners = true;
			HX_STACK_LINE(1244)
			while((!(((o->cbTypes->head == null()))))){
				HX_STACK_LINE(1244)
				::zpp_nape::callbacks::ZPP_CbType cb = o->cbTypes->pop_unsafe();		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(1244)
				cb->cbsets->remove(o);
			}
			HX_STACK_LINE(1244)
			Dynamic();
		}
		HX_STACK_LINE(1245)
		o->next = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;
		HX_STACK_LINE(1246)
		::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1251)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetManager_obj,get,return )


ZPP_CbSetManager_obj::ZPP_CbSetManager_obj()
{
}

void ZPP_CbSetManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CbSetManager);
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(cbsets,"cbsets");
	HX_MARK_END_CLASS();
}

void ZPP_CbSetManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(cbsets,"cbsets");
}

Dynamic ZPP_CbSetManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pair") ) { return pair_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"cbsets") ) { return cbsets; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"valid_listener") ) { return valid_listener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CbSetManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cbsets") ) { cbsets=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_CbSetManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("cbsets"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("valid_listener"),
	HX_CSTRING("pair"),
	HX_CSTRING("validate"),
	HX_CSTRING("clear"),
	HX_CSTRING("remove"),
	HX_CSTRING("get"),
	HX_CSTRING("space"),
	HX_CSTRING("cbsets"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CbSetManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CbSetManager_obj::__mClass,"__mClass");
};

Class ZPP_CbSetManager_obj::__mClass;

void ZPP_CbSetManager_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_CbSetManager"), hx::TCanCast< ZPP_CbSetManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_CbSetManager_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace space
