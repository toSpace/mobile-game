#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
#endif
namespace nape{
namespace geom{

Void MatMN_obj::__construct(int rows,int cols)
{
HX_STACK_PUSH("MatMN::new","nape/geom/MatMN.hx",179);
{
	HX_STACK_LINE(183)
	this->zpp_inner = null();
	HX_STACK_LINE(248)
	if (((bool((rows <= (int)0)) || bool((cols <= (int)0))))){
		HX_STACK_LINE(248)
		hx::Throw (HX_CSTRING("Error: MatMN::dimensions cannot be < 1"));
	}
	HX_STACK_LINE(252)
	this->zpp_inner = ::zpp_nape::geom::ZPP_MatMN_obj::__new(rows,cols);
	HX_STACK_LINE(253)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

MatMN_obj::~MatMN_obj() { }

Dynamic MatMN_obj::__CreateEmpty() { return  new MatMN_obj; }
hx::ObjectPtr< MatMN_obj > MatMN_obj::__new(int rows,int cols)
{  hx::ObjectPtr< MatMN_obj > result = new MatMN_obj();
	result->__construct(rows,cols);
	return result;}

Dynamic MatMN_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MatMN_obj > result = new MatMN_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::nape::geom::MatMN MatMN_obj::mul( ::nape::geom::MatMN matrix){
	HX_STACK_PUSH("MatMN::mul","nape/geom/MatMN.hx",294);
	HX_STACK_THIS(this);
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_LINE(295)
	::nape::geom::MatMN y = matrix;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(297)
	if (((this->zpp_inner->n != y->zpp_inner->m))){
		HX_STACK_LINE(297)
		hx::Throw (HX_CSTRING("Error: Matrix dimensions aren't compatible"));
	}
	HX_STACK_LINE(301)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new(this->zpp_inner->m,y->zpp_inner->n);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(302)
	{
		HX_STACK_LINE(302)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->zpp_inner->m;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(302)
		while(((_g1 < _g))){
			HX_STACK_LINE(302)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(303)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = y->zpp_inner->n;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(303)
				while(((_g3 < _g2))){
					HX_STACK_LINE(303)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(304)
					Float v = 0.0;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
						int _g4 = this->zpp_inner->n;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(305)
						while(((_g5 < _g4))){
							HX_STACK_LINE(305)
							int k = (_g5)++;		HX_STACK_VAR(k,"k");
							struct _Function_7_1{
								inline static Float Block( int &k,::nape::geom::MatMN_obj *__this,int &i){
									HX_STACK_PUSH("*::closure","nape/geom/MatMN.hx",305);
									{
										HX_STACK_LINE(305)
										if (((bool((bool((bool((i < (int)0)) || bool((k < (int)0)))) || bool((i >= __this->zpp_inner->m)))) || bool((k >= __this->zpp_inner->n))))){
											HX_STACK_LINE(305)
											hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
										}
										HX_STACK_LINE(305)
										return __this->zpp_inner->x->__get(((i * __this->zpp_inner->n) + k));
									}
									return null();
								}
							};
							struct _Function_7_2{
								inline static Float Block( int &k,int &j,::nape::geom::MatMN &y){
									HX_STACK_PUSH("*::closure","nape/geom/MatMN.hx",305);
									{
										HX_STACK_LINE(305)
										if (((bool((bool((bool((k < (int)0)) || bool((j < (int)0)))) || bool((k >= y->zpp_inner->m)))) || bool((j >= y->zpp_inner->n))))){
											HX_STACK_LINE(305)
											hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
										}
										HX_STACK_LINE(305)
										return y->zpp_inner->x->__get(((k * y->zpp_inner->n) + j));
									}
									return null();
								}
							};
							HX_STACK_LINE(305)
							hx::AddEq(v,(_Function_7_1::Block(k,this,i) * _Function_7_2::Block(k,j,y)));
						}
					}
					HX_STACK_LINE(306)
					{
						HX_STACK_LINE(306)
						if (((bool((bool((bool((i < (int)0)) || bool((j < (int)0)))) || bool((i >= ret->zpp_inner->m)))) || bool((j >= ret->zpp_inner->n))))){
							HX_STACK_LINE(306)
							hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
						}
						HX_STACK_LINE(306)
						ret->zpp_inner->x[((i * ret->zpp_inner->n) + j)] = v;
					}
				}
			}
		}
	}
	HX_STACK_LINE(309)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(MatMN_obj,mul,return )

::nape::geom::MatMN MatMN_obj::transpose( ){
	HX_STACK_PUSH("MatMN::transpose","nape/geom/MatMN.hx",274);
	HX_STACK_THIS(this);
	HX_STACK_LINE(275)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new(this->zpp_inner->n,this->zpp_inner->m);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(276)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->zpp_inner->m;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		while(((_g1 < _g))){
			HX_STACK_LINE(276)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = this->zpp_inner->n;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(277)
				while(((_g3 < _g2))){
					HX_STACK_LINE(277)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(277)
					if (((bool((bool((bool((j < (int)0)) || bool((i < (int)0)))) || bool((j >= ret->zpp_inner->m)))) || bool((i >= ret->zpp_inner->n))))){
						HX_STACK_LINE(277)
						hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
					}
					struct _Function_5_1{
						inline static Float Block( ::nape::geom::MatMN_obj *__this,int &j,int &i){
							HX_STACK_PUSH("*::closure","nape/geom/MatMN.hx",277);
							{
								HX_STACK_LINE(277)
								if (((bool((bool((bool((i < (int)0)) || bool((j < (int)0)))) || bool((i >= __this->zpp_inner->m)))) || bool((j >= __this->zpp_inner->n))))){
									HX_STACK_LINE(277)
									hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
								}
								HX_STACK_LINE(277)
								return __this->zpp_inner->x->__get(((i * __this->zpp_inner->n) + j));
							}
							return null();
						}
					};
					HX_STACK_LINE(277)
					ret->zpp_inner->x[((j * ret->zpp_inner->n) + i)] = _Function_5_1::Block(this,j,i);
				}
			}
		}
	}
	HX_STACK_LINE(279)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,transpose,return )

::String MatMN_obj::toString( ){
	HX_STACK_PUSH("MatMN::toString","nape/geom/MatMN.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_LINE(259)
	::String ret = HX_CSTRING("{ ");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(260)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->zpp_inner->m;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(261)
		while(((_g1 < _g))){
			HX_STACK_LINE(261)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(262)
			if ((!(fst))){
				HX_STACK_LINE(262)
				hx::AddEq(ret,HX_CSTRING("; "));
			}
			HX_STACK_LINE(263)
			fst = false;
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = this->zpp_inner->n;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(264)
				while(((_g3 < _g2))){
					HX_STACK_LINE(264)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					struct _Function_5_1{
						inline static Float Block( ::nape::geom::MatMN_obj *__this,int &j,int &i){
							HX_STACK_PUSH("*::closure","nape/geom/MatMN.hx",264);
							{
								HX_STACK_LINE(264)
								if (((bool((bool((bool((i < (int)0)) || bool((j < (int)0)))) || bool((i >= __this->zpp_inner->m)))) || bool((j >= __this->zpp_inner->n))))){
									HX_STACK_LINE(264)
									hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
								}
								HX_STACK_LINE(264)
								return __this->zpp_inner->x->__get(((i * __this->zpp_inner->n) + j));
							}
							return null();
						}
					};
					HX_STACK_LINE(264)
					hx::AddEq(ret,(_Function_5_1::Block(this,j,i) + HX_CSTRING(" ")));
				}
			}
		}
	}
	HX_STACK_LINE(266)
	hx::AddEq(ret,HX_CSTRING("}"));
	HX_STACK_LINE(267)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,toString,return )

Float MatMN_obj::setx( int row,int col,Float x){
	HX_STACK_PUSH("MatMN::setx","nape/geom/MatMN.hx",228);
	HX_STACK_THIS(this);
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(col,"col");
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(230)
	if (((bool((bool((bool((row < (int)0)) || bool((col < (int)0)))) || bool((row >= this->zpp_inner->m)))) || bool((col >= this->zpp_inner->n))))){
		HX_STACK_LINE(230)
		hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
	}
	HX_STACK_LINE(234)
	return this->zpp_inner->x[((row * this->zpp_inner->n) + col)] = x;
}


HX_DEFINE_DYNAMIC_FUNC3(MatMN_obj,setx,return )

Float MatMN_obj::x( int row,int col){
	HX_STACK_PUSH("MatMN::x","nape/geom/MatMN.hx",209);
	HX_STACK_THIS(this);
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(col,"col");
	HX_STACK_LINE(211)
	if (((bool((bool((bool((row < (int)0)) || bool((col < (int)0)))) || bool((row >= this->zpp_inner->m)))) || bool((col >= this->zpp_inner->n))))){
		HX_STACK_LINE(211)
		hx::Throw (HX_CSTRING("Error: MatMN indices out of range"));
	}
	HX_STACK_LINE(215)
	return this->zpp_inner->x->__get(((row * this->zpp_inner->n) + col));
}


HX_DEFINE_DYNAMIC_FUNC2(MatMN_obj,x,return )

int MatMN_obj::get_cols( ){
	HX_STACK_PUSH("MatMN::get_cols","nape/geom/MatMN.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_LINE(197)
	return this->zpp_inner->n;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,get_cols,return )

int MatMN_obj::get_rows( ){
	HX_STACK_PUSH("MatMN::get_rows","nape/geom/MatMN.hx",189);
	HX_STACK_THIS(this);
	HX_STACK_LINE(189)
	return this->zpp_inner->m;
}


HX_DEFINE_DYNAMIC_FUNC0(MatMN_obj,get_rows,return )


MatMN_obj::MatMN_obj()
{
}

void MatMN_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MatMN);
	HX_MARK_MEMBER_NAME(cols,"cols");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void MatMN_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cols,"cols");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic MatMN_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mul") ) { return mul_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"setx") ) { return setx_dyn(); }
		if (HX_FIELD_EQ(inName,"cols") ) { return inCallProp ? get_cols() : cols; }
		if (HX_FIELD_EQ(inName,"rows") ) { return inCallProp ? get_rows() : rows; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cols") ) { return get_cols_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rows") ) { return get_rows_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MatMN_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"cols") ) { cols=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_MatMN >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MatMN_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cols"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("mul"),
	HX_CSTRING("transpose"),
	HX_CSTRING("toString"),
	HX_CSTRING("setx"),
	HX_CSTRING("x"),
	HX_CSTRING("get_cols"),
	HX_CSTRING("cols"),
	HX_CSTRING("get_rows"),
	HX_CSTRING("rows"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MatMN_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatMN_obj::__mClass,"__mClass");
};

Class MatMN_obj::__mClass;

void MatMN_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.MatMN"), hx::TCanCast< MatMN_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MatMN_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
