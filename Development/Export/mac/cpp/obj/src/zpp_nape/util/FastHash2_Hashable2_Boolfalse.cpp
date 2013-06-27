#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse
#include <zpp_nape/util/FastHash2_Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
namespace zpp_nape{
namespace util{

Void FastHash2_Hashable2_Boolfalse_obj::__construct()
{
HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::new","zpp_nape/util/FastHash.hx",256);
{
	HX_STACK_LINE(258)
	this->cnt = (int)0;
	HX_STACK_LINE(257)
	this->table = null();
	HX_STACK_LINE(260)
	this->cnt = (int)0;
	HX_STACK_LINE(262)
	this->table = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(263)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (int)1048576;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(263)
		while(((_g1 < _g))){
			HX_STACK_LINE(263)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(263)
			this->table->push(null());
		}
	}
}
;
	return null();
}

FastHash2_Hashable2_Boolfalse_obj::~FastHash2_Hashable2_Boolfalse_obj() { }

Dynamic FastHash2_Hashable2_Boolfalse_obj::__CreateEmpty() { return  new FastHash2_Hashable2_Boolfalse_obj; }
hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > FastHash2_Hashable2_Boolfalse_obj::__new()
{  hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > result = new FastHash2_Hashable2_Boolfalse_obj();
	result->__construct();
	return result;}

Dynamic FastHash2_Hashable2_Boolfalse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > result = new FastHash2_Hashable2_Boolfalse_obj();
	result->__construct();
	return result;}

int FastHash2_Hashable2_Boolfalse_obj::hash( int id,int di){
	HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::hash","zpp_nape/util/FastHash.hx",416);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(416)
	return (int(((id * (int)106039) + di)) & int((int)1048575));
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,hash,return )

Void FastHash2_Hashable2_Boolfalse_obj::remove( ::zpp_nape::util::Hashable2_Boolfalse arb){
{
		HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::remove","zpp_nape/util/FastHash.hx",382);
		HX_STACK_THIS(this);
		HX_STACK_ARG(arb,"arb");
		HX_STACK_LINE(391)
		int h = (int(((arb->id * (int)106039) + arb->di)) & int((int)1048575));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(392)
		::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get(h).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(393)
		if (((n == arb))){
			HX_STACK_LINE(393)
			this->table[h] = n->hnext;
		}
		else{
			HX_STACK_LINE(394)
			if (((n != null()))){
				HX_STACK_LINE(395)
				::zpp_nape::util::Hashable2_Boolfalse pre;		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(396)
				do{
					HX_STACK_LINE(397)
					pre = n;
					HX_STACK_LINE(398)
					n = n->hnext;
				}
while(((bool((n != null())) && bool((n != arb)))));
				HX_STACK_LINE(409)
				pre->hnext = n->hnext;
			}
		}
		HX_STACK_LINE(411)
		arb->hnext = null();
		HX_STACK_LINE(412)
		(this->cnt)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastHash2_Hashable2_Boolfalse_obj,remove,(void))

Void FastHash2_Hashable2_Boolfalse_obj::add( ::zpp_nape::util::Hashable2_Boolfalse arb){
{
		HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::add","zpp_nape/util/FastHash.hx",350);
		HX_STACK_THIS(this);
		HX_STACK_ARG(arb,"arb");
		HX_STACK_LINE(359)
		int h = (int(((arb->id * (int)106039) + arb->di)) & int((int)1048575));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(360)
		::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get(h).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(361)
		if (((n == null()))){
			HX_STACK_LINE(362)
			this->table[h] = arb;
			HX_STACK_LINE(363)
			arb->hnext = null();
		}
		else{
			HX_STACK_LINE(373)
			arb->hnext = n->hnext;
			HX_STACK_LINE(374)
			n->hnext = arb;
		}
		HX_STACK_LINE(380)
		(this->cnt)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastHash2_Hashable2_Boolfalse_obj,add,(void))

Void FastHash2_Hashable2_Boolfalse_obj::maybeAdd( ::zpp_nape::util::Hashable2_Boolfalse arb){
{
		HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::maybeAdd","zpp_nape/util/FastHash.hx",316);
		HX_STACK_THIS(this);
		HX_STACK_ARG(arb,"arb");
		HX_STACK_LINE(325)
		int h = (int(((arb->id * (int)106039) + arb->di)) & int((int)1048575));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(326)
		::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get(h).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(327)
		bool cont = true;		HX_STACK_VAR(cont,"cont");
		HX_STACK_LINE(328)
		if (((n == null()))){
			HX_STACK_LINE(329)
			this->table[h] = arb;
			HX_STACK_LINE(330)
			arb->hnext = null();
		}
		else{
			HX_STACK_LINE(332)
			if ((cont)){
				HX_STACK_LINE(344)
				arb->hnext = n->hnext;
				HX_STACK_LINE(345)
				n->hnext = arb;
			}
		}
		HX_STACK_LINE(348)
		if ((cont)){
			HX_STACK_LINE(348)
			(this->cnt)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastHash2_Hashable2_Boolfalse_obj,maybeAdd,(void))

bool FastHash2_Hashable2_Boolfalse_obj::has( int id,int di){
	HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::has","zpp_nape/util/FastHash.hx",307);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(308)
	::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get((int(((id * (int)106039) + di)) & int((int)1048575))).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(309)
	if (((n == null()))){
		HX_STACK_LINE(309)
		return false;
	}
	else{
		HX_STACK_LINE(310)
		if (((bool((n->id == id)) && bool((n->di == di))))){
			HX_STACK_LINE(310)
			return true;
		}
		else{
			HX_STACK_LINE(312)
			do{
				HX_STACK_LINE(312)
				n = n->hnext;
			}
while(((bool((n != null())) && bool(((bool((n->id != id)) || bool((n->di != di))))))));
			HX_STACK_LINE(313)
			return (n != null());
		}
	}
	HX_STACK_LINE(309)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,has,return )

::zpp_nape::util::Hashable2_Boolfalse FastHash2_Hashable2_Boolfalse_obj::ordered_get( int id,int di){
	HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::ordered_get","zpp_nape/util/FastHash.hx",299);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(300)
	if (((id > di))){
		HX_STACK_LINE(301)
		int t = id;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(302)
		id = di;
		HX_STACK_LINE(303)
		di = t;
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::Hashable2_Boolfalse Block( ::zpp_nape::util::FastHash2_Hashable2_Boolfalse_obj *__this,int &di,int &id){
			HX_STACK_PUSH("*::closure","zpp_nape/util/FastHash.hx",305);
			{
				HX_STACK_LINE(305)
				::zpp_nape::util::Hashable2_Boolfalse n = __this->table->__get((int(((id * (int)106039) + di)) & int((int)1048575))).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
				struct _Function_2_1{
					inline static ::zpp_nape::util::Hashable2_Boolfalse Block( int &di,::zpp_nape::util::Hashable2_Boolfalse &n,int &id){
						HX_STACK_PUSH("*::closure","zpp_nape/util/FastHash.hx",305);
						{
							HX_STACK_LINE(305)
							do{
								HX_STACK_LINE(305)
								n = n->hnext;
							}
while(((bool((n != null())) && bool(((bool((n->id != id)) || bool((n->di != di))))))));
							HX_STACK_LINE(305)
							return n;
						}
						return null();
					}
				};
				HX_STACK_LINE(305)
				return (  (((n == null()))) ? ::zpp_nape::util::Hashable2_Boolfalse(null()) : ::zpp_nape::util::Hashable2_Boolfalse((  (((bool((n->id == id)) && bool((n->di == di))))) ? ::zpp_nape::util::Hashable2_Boolfalse(n) : ::zpp_nape::util::Hashable2_Boolfalse(_Function_2_1::Block(di,n,id)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(305)
	return _Function_1_1::Block(this,di,id);
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,ordered_get,return )

::zpp_nape::util::Hashable2_Boolfalse FastHash2_Hashable2_Boolfalse_obj::get( int id,int di){
	HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::get","zpp_nape/util/FastHash.hx",288);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(289)
	::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get((int(((id * (int)106039) + di)) & int((int)1048575))).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(290)
	if (((n == null()))){
		HX_STACK_LINE(290)
		return null();
	}
	else{
		HX_STACK_LINE(291)
		if (((bool((n->id == id)) && bool((n->di == di))))){
			HX_STACK_LINE(291)
			return n;
		}
		else{
			HX_STACK_LINE(293)
			do{
				HX_STACK_LINE(293)
				n = n->hnext;
			}
while(((bool((n != null())) && bool(((bool((n->id != id)) || bool((n->di != di))))))));
			HX_STACK_LINE(294)
			return n;
		}
	}
	HX_STACK_LINE(290)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,get,return )

Void FastHash2_Hashable2_Boolfalse_obj::clear( ){
{
		HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::clear","zpp_nape/util/FastHash.hx",271);
		HX_STACK_THIS(this);
		HX_STACK_LINE(273)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->table->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(273)
		while(((_g1 < _g))){
			HX_STACK_LINE(273)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(274)
			::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get(i).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(275)
			if (((n == null()))){
				HX_STACK_LINE(275)
				continue;
			}
			HX_STACK_LINE(276)
			while(((n != null()))){
				HX_STACK_LINE(277)
				::zpp_nape::util::Hashable2_Boolfalse t = n->hnext;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(278)
				n->hnext = null();
				HX_STACK_LINE(279)
				n;
				HX_STACK_LINE(280)
				n = t;
			}
			HX_STACK_LINE(282)
			this->table[i] = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FastHash2_Hashable2_Boolfalse_obj,clear,(void))

bool FastHash2_Hashable2_Boolfalse_obj::empty( ){
	HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::empty","zpp_nape/util/FastHash.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_LINE(268)
	return (this->cnt == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FastHash2_Hashable2_Boolfalse_obj,empty,return )


FastHash2_Hashable2_Boolfalse_obj::FastHash2_Hashable2_Boolfalse_obj()
{
}

void FastHash2_Hashable2_Boolfalse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FastHash2_Hashable2_Boolfalse);
	HX_MARK_MEMBER_NAME(cnt,"cnt");
	HX_MARK_MEMBER_NAME(table,"table");
	HX_MARK_END_CLASS();
}

void FastHash2_Hashable2_Boolfalse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cnt,"cnt");
	HX_VISIT_MEMBER_NAME(table,"table");
}

Dynamic FastHash2_Hashable2_Boolfalse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"cnt") ) { return cnt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return hash_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"table") ) { return table; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maybeAdd") ) { return maybeAdd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ordered_get") ) { return ordered_get_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FastHash2_Hashable2_Boolfalse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { cnt=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"table") ) { table=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FastHash2_Hashable2_Boolfalse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cnt"));
	outFields->push(HX_CSTRING("table"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("hash"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("maybeAdd"),
	HX_CSTRING("has"),
	HX_CSTRING("ordered_get"),
	HX_CSTRING("get"),
	HX_CSTRING("clear"),
	HX_CSTRING("empty"),
	HX_CSTRING("cnt"),
	HX_CSTRING("table"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FastHash2_Hashable2_Boolfalse_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FastHash2_Hashable2_Boolfalse_obj::__mClass,"__mClass");
};

Class FastHash2_Hashable2_Boolfalse_obj::__mClass;

void FastHash2_Hashable2_Boolfalse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.FastHash2_Hashable2_Boolfalse"), hx::TCanCast< FastHash2_Hashable2_Boolfalse_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FastHash2_Hashable2_Boolfalse_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
