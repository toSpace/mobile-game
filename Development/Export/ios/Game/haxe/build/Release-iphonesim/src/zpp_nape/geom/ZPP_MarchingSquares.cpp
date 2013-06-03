#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/geom/ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchingSquares
#include <zpp_nape/geom/ZPP_MarchingSquares.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_Float
#include <zpp_nape/util/ZNPArray2_Float.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_ZPP_GeomVert
#include <zpp_nape/util/ZNPArray2_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPArray2_ZPP_MarchPair
#include <zpp_nape/util/ZNPArray2_ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_MarchingSquares_obj::__construct()
{
HX_STACK_PUSH("ZPP_MarchingSquares::new","zpp_nape/geom/MarchingSquares.hx",272);
{
}
;
	return null();
}

ZPP_MarchingSquares_obj::~ZPP_MarchingSquares_obj() { }

Dynamic ZPP_MarchingSquares_obj::__CreateEmpty() { return  new ZPP_MarchingSquares_obj; }
hx::ObjectPtr< ZPP_MarchingSquares_obj > ZPP_MarchingSquares_obj::__new()
{  hx::ObjectPtr< ZPP_MarchingSquares_obj > result = new ZPP_MarchingSquares_obj();
	result->__construct();
	return result;}

Dynamic ZPP_MarchingSquares_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MarchingSquares_obj > result = new ZPP_MarchingSquares_obj();
	result->__construct();
	return result;}

Float ZPP_MarchingSquares_obj::ylerp( Float y0,Float y1,Float x,Float v0,Float v1,Dynamic iso,int quality){
	HX_STACK_PUSH("ZPP_MarchingSquares::ylerp","zpp_nape/geom/MarchingSquares.hx",1910);
	HX_STACK_THIS(this);
	HX_STACK_ARG(y0,"y0");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(v0,"v0");
	HX_STACK_ARG(v1,"v1");
	HX_STACK_ARG(iso,"iso");
	HX_STACK_ARG(quality,"quality");
	struct _Function_1_1{
		inline static Float Block( Float &v1,Float &y1,Float &v0,Float &y0){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1911);
			{
				HX_STACK_LINE(1911)
				Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
				HX_STACK_LINE(1911)
				Float t = (  ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? Float(0.5) : Float((Float(v0) / Float(dv))) );		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1911)
				if (((t < (int)0))){
					HX_STACK_LINE(1911)
					t = (int)0;
				}
				else{
					HX_STACK_LINE(1911)
					if (((t > (int)1))){
						HX_STACK_LINE(1911)
						t = (int)1;
					}
				}
				HX_STACK_LINE(1911)
				return (y0 + (t * ((y1 - y0))));
			}
			return null();
		}
	};
	HX_STACK_LINE(1911)
	Float ym = (  (((v0 == (int)0))) ? Float(y0) : Float((  (((v1 == (int)0))) ? Float(y1) : Float(_Function_1_1::Block(v1,y1,v0,y0)) )) );		HX_STACK_VAR(ym,"ym");
	HX_STACK_LINE(1912)
	while(((bool((bool(((quality)-- != (int)0)) && bool((y0 < ym)))) && bool((ym < y1))))){
		HX_STACK_LINE(1913)
		Float vm = iso(x,ym).Cast< Float >();		HX_STACK_VAR(vm,"vm");
		HX_STACK_LINE(1914)
		if (((vm == (int)0))){
			HX_STACK_LINE(1914)
			break;
		}
		HX_STACK_LINE(1915)
		if ((((v0 * vm) < (int)0))){
			HX_STACK_LINE(1916)
			y1 = ym;
			HX_STACK_LINE(1917)
			v1 = vm;
		}
		else{
			HX_STACK_LINE(1920)
			y0 = ym;
			HX_STACK_LINE(1921)
			v0 = vm;
		}
		struct _Function_2_1{
			inline static Float Block( Float &v1,Float &y1,Float &v0,Float &y0){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1923);
				{
					HX_STACK_LINE(1923)
					Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
					HX_STACK_LINE(1923)
					Float t = (  ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? Float(0.5) : Float((Float(v0) / Float(dv))) );		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1923)
					if (((t < (int)0))){
						HX_STACK_LINE(1923)
						t = (int)0;
					}
					else{
						HX_STACK_LINE(1923)
						if (((t > (int)1))){
							HX_STACK_LINE(1923)
							t = (int)1;
						}
					}
					HX_STACK_LINE(1923)
					return (y0 + (t * ((y1 - y0))));
				}
				return null();
			}
		};
		HX_STACK_LINE(1923)
		ym = (  (((v0 == (int)0))) ? Float(y0) : Float((  (((v1 == (int)0))) ? Float(y1) : Float(_Function_2_1::Block(v1,y1,v0,y0)) )) );
	}
	HX_STACK_LINE(1925)
	return ym;
}


HX_DEFINE_DYNAMIC_FUNC7(ZPP_MarchingSquares_obj,ylerp,return )

Float ZPP_MarchingSquares_obj::xlerp( Float x0,Float x1,Float y,Float v0,Float v1,Dynamic iso,int quality){
	HX_STACK_PUSH("ZPP_MarchingSquares::xlerp","zpp_nape/geom/MarchingSquares.hx",1893);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x0,"x0");
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(v0,"v0");
	HX_STACK_ARG(v1,"v1");
	HX_STACK_ARG(iso,"iso");
	HX_STACK_ARG(quality,"quality");
	struct _Function_1_1{
		inline static Float Block( Float &v1,Float &v0,Float &x1,Float &x0){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1894);
			{
				HX_STACK_LINE(1894)
				Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
				HX_STACK_LINE(1894)
				Float t = (  ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? Float(0.5) : Float((Float(v0) / Float(dv))) );		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1894)
				if (((t < (int)0))){
					HX_STACK_LINE(1894)
					t = (int)0;
				}
				else{
					HX_STACK_LINE(1894)
					if (((t > (int)1))){
						HX_STACK_LINE(1894)
						t = (int)1;
					}
				}
				HX_STACK_LINE(1894)
				return (x0 + (t * ((x1 - x0))));
			}
			return null();
		}
	};
	HX_STACK_LINE(1894)
	Float xm = (  (((v0 == (int)0))) ? Float(x0) : Float((  (((v1 == (int)0))) ? Float(x1) : Float(_Function_1_1::Block(v1,v0,x1,x0)) )) );		HX_STACK_VAR(xm,"xm");
	HX_STACK_LINE(1895)
	while(((bool((bool(((quality)-- != (int)0)) && bool((x0 < xm)))) && bool((xm < x1))))){
		HX_STACK_LINE(1896)
		Float vm = iso(xm,y).Cast< Float >();		HX_STACK_VAR(vm,"vm");
		HX_STACK_LINE(1897)
		if (((vm == (int)0))){
			HX_STACK_LINE(1897)
			break;
		}
		HX_STACK_LINE(1898)
		if ((((v0 * vm) < (int)0))){
			HX_STACK_LINE(1899)
			x1 = xm;
			HX_STACK_LINE(1900)
			v1 = vm;
		}
		else{
			HX_STACK_LINE(1903)
			x0 = xm;
			HX_STACK_LINE(1904)
			v0 = vm;
		}
		struct _Function_2_1{
			inline static Float Block( Float &v1,Float &v0,Float &x1,Float &x0){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1906);
				{
					HX_STACK_LINE(1906)
					Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
					HX_STACK_LINE(1906)
					Float t = (  ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? Float(0.5) : Float((Float(v0) / Float(dv))) );		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1906)
					if (((t < (int)0))){
						HX_STACK_LINE(1906)
						t = (int)0;
					}
					else{
						HX_STACK_LINE(1906)
						if (((t > (int)1))){
							HX_STACK_LINE(1906)
							t = (int)1;
						}
					}
					HX_STACK_LINE(1906)
					return (x0 + (t * ((x1 - x0))));
				}
				return null();
			}
		};
		HX_STACK_LINE(1906)
		xm = (  (((v0 == (int)0))) ? Float(x0) : Float((  (((v1 == (int)0))) ? Float(x1) : Float(_Function_2_1::Block(v1,v0,x1,x0)) )) );
	}
	HX_STACK_LINE(1908)
	return xm;
}


HX_DEFINE_DYNAMIC_FUNC7(ZPP_MarchingSquares_obj,xlerp,return )

Float ZPP_MarchingSquares_obj::lerp( Float x0,Float x1,Float v0,Float v1){
	HX_STACK_PUSH("ZPP_MarchingSquares::lerp","zpp_nape/geom/MarchingSquares.hx",1882);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x0,"x0");
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(v0,"v0");
	HX_STACK_ARG(v1,"v1");
	HX_STACK_LINE(1882)
	if (((v0 == (int)0))){
		HX_STACK_LINE(1883)
		return x0;
	}
	else{
		HX_STACK_LINE(1884)
		if (((v1 == (int)0))){
			HX_STACK_LINE(1884)
			return x1;
		}
		else{
			HX_STACK_LINE(1886)
			Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
			HX_STACK_LINE(1887)
			Float t = (  ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? Float(0.5) : Float((Float(v0) / Float(dv))) );		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1888)
			if (((t < (int)0))){
				HX_STACK_LINE(1888)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(1889)
				if (((t > (int)1))){
					HX_STACK_LINE(1889)
					t = (int)1;
				}
			}
			HX_STACK_LINE(1890)
			return (x0 + (t * ((x1 - x0))));
		}
	}
	HX_STACK_LINE(1882)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_MarchingSquares_obj,lerp,return )

::zpp_nape::geom::ZPP_MarchPair ZPP_MarchingSquares_obj::marchSquare( Dynamic iso,::zpp_nape::util::ZNPArray2_Float isos,::zpp_nape::util::ZNPArray2_ZPP_GeomVert ints,Float x0,Float y0,Float x1,Float y1,int xn,int yn,bool fstx,bool fsty,bool sndx,bool sndy,int quality){
	HX_STACK_PUSH("ZPP_MarchingSquares::marchSquare","zpp_nape/geom/MarchingSquares.hx",954);
	HX_STACK_THIS(this);
	HX_STACK_ARG(iso,"iso");
	HX_STACK_ARG(isos,"isos");
	HX_STACK_ARG(ints,"ints");
	HX_STACK_ARG(x0,"x0");
	HX_STACK_ARG(y0,"y0");
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(xn,"xn");
	HX_STACK_ARG(yn,"yn");
	HX_STACK_ARG(fstx,"fstx");
	HX_STACK_ARG(fsty,"fsty");
	HX_STACK_ARG(sndx,"sndx");
	HX_STACK_ARG(sndy,"sndy");
	HX_STACK_ARG(quality,"quality");
	HX_STACK_LINE(955)
	int key = (int)0;		HX_STACK_VAR(key,"key");
	struct _Function_1_1{
		inline static Float Block( ::zpp_nape::util::ZNPArray2_Float &isos,int &xn,int &yn){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",956);
			{
				HX_STACK_LINE(956)
				{
				}
				HX_STACK_LINE(956)
				return isos->list->__get(((yn * isos->width) + xn));
			}
			return null();
		}
	};
	HX_STACK_LINE(956)
	Float v0 = _Function_1_1::Block(isos,xn,yn);		HX_STACK_VAR(v0,"v0");
	HX_STACK_LINE(957)
	if (((v0 < (int)0))){
		HX_STACK_LINE(957)
		hx::OrEq(key,(int)8);
	}
	struct _Function_1_2{
		inline static Float Block( ::zpp_nape::util::ZNPArray2_Float &isos,int &xn,int &yn){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",958);
			{
				HX_STACK_LINE(958)
				{
				}
				HX_STACK_LINE(958)
				return isos->list->__get(((yn * isos->width) + ((xn + (int)1))));
			}
			return null();
		}
	};
	HX_STACK_LINE(958)
	Float v1 = _Function_1_2::Block(isos,xn,yn);		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(959)
	if (((v1 < (int)0))){
		HX_STACK_LINE(959)
		hx::OrEq(key,(int)4);
	}
	struct _Function_1_3{
		inline static Float Block( ::zpp_nape::util::ZNPArray2_Float &isos,int &xn,int &yn){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",960);
			{
				HX_STACK_LINE(960)
				{
				}
				HX_STACK_LINE(960)
				return isos->list->__get(((((yn + (int)1)) * isos->width) + ((xn + (int)1))));
			}
			return null();
		}
	};
	HX_STACK_LINE(960)
	Float v2 = _Function_1_3::Block(isos,xn,yn);		HX_STACK_VAR(v2,"v2");
	HX_STACK_LINE(961)
	if (((v2 < (int)0))){
		HX_STACK_LINE(961)
		hx::OrEq(key,(int)2);
	}
	struct _Function_1_4{
		inline static Float Block( ::zpp_nape::util::ZNPArray2_Float &isos,int &xn,int &yn){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",962);
			{
				HX_STACK_LINE(962)
				{
				}
				HX_STACK_LINE(962)
				return isos->list->__get(((((yn + (int)1)) * isos->width) + xn));
			}
			return null();
		}
	};
	HX_STACK_LINE(962)
	Float v3 = _Function_1_4::Block(isos,xn,yn);		HX_STACK_VAR(v3,"v3");
	HX_STACK_LINE(963)
	if (((v3 < (int)0))){
		HX_STACK_LINE(963)
		hx::OrEq(key,(int)1);
	}
	HX_STACK_LINE(964)
	if (((key == (int)0))){
		HX_STACK_LINE(964)
		return null();
	}
	else{
		HX_STACK_LINE(966)
		::zpp_nape::geom::ZPP_MarchPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(967)
		{
			HX_STACK_LINE(968)
			if (((::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(968)
				ret = ::zpp_nape::geom::ZPP_MarchPair_obj::__new();
			}
			else{
				HX_STACK_LINE(975)
				ret = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;
				HX_STACK_LINE(976)
				::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(977)
				ret->next = null();
			}
			HX_STACK_LINE(982)
			Dynamic();
		}
		HX_STACK_LINE(984)
		if (((bool((key != (int)10)) && bool((key != (int)5))))){
			HX_STACK_LINE(985)
			int val = ::zpp_nape::geom::ZPP_MarchingSquares_obj::look_march->__get(key);		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(986)
			{
				HX_STACK_LINE(987)
				ret->okey1 = val;
				HX_STACK_LINE(988)
				{
					HX_STACK_LINE(988)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(988)
					while(((_g < (int)8))){
						HX_STACK_LINE(988)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(989)
						if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
							HX_STACK_LINE(990)
							::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(991)
							if (((i == (int)0))){
								struct _Function_8_1{
									inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",992);
										{
											HX_STACK_LINE(992)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(992)
											{
												HX_STACK_LINE(992)
												if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
													HX_STACK_LINE(992)
													ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
												}
												else{
													HX_STACK_LINE(992)
													ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
													HX_STACK_LINE(992)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(992)
													ret1->next = null();
												}
												HX_STACK_LINE(992)
												ret1->forced = false;
											}
											HX_STACK_LINE(992)
											{
												HX_STACK_LINE(992)
												ret1->x = x0;
												HX_STACK_LINE(992)
												ret1->y = y0;
												HX_STACK_LINE(992)
												{
												}
												HX_STACK_LINE(992)
												{
												}
											}
											HX_STACK_LINE(992)
											return ret1;
										}
										return null();
									}
								};
								HX_STACK_LINE(992)
								p = _Function_8_1::Block(x0,y0);
								HX_STACK_LINE(993)
								if (((bool(fstx) || bool(fsty)))){
									HX_STACK_LINE(993)
									p->forced = true;
								}
							}
							else{
								HX_STACK_LINE(995)
								if (((i == (int)2))){
									struct _Function_9_1{
										inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",996);
											{
												HX_STACK_LINE(996)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(996)
												{
													HX_STACK_LINE(996)
													if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
														HX_STACK_LINE(996)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
													}
													else{
														HX_STACK_LINE(996)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
														HX_STACK_LINE(996)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(996)
														ret1->next = null();
													}
													HX_STACK_LINE(996)
													ret1->forced = false;
												}
												HX_STACK_LINE(996)
												{
													HX_STACK_LINE(996)
													ret1->x = x1;
													HX_STACK_LINE(996)
													ret1->y = y0;
													HX_STACK_LINE(996)
													{
													}
													HX_STACK_LINE(996)
													{
													}
												}
												HX_STACK_LINE(996)
												return ret1;
											}
											return null();
										}
									};
									HX_STACK_LINE(996)
									p = _Function_9_1::Block(x1,y0);
									HX_STACK_LINE(997)
									if (((bool(sndx) || bool(fsty)))){
										HX_STACK_LINE(997)
										p->forced = true;
									}
								}
								else{
									HX_STACK_LINE(999)
									if (((i == (int)4))){
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1000);
												{
													HX_STACK_LINE(1000)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1000)
													{
														HX_STACK_LINE(1000)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1000)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
														}
														else{
															HX_STACK_LINE(1000)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1000)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1000)
															ret1->next = null();
														}
														HX_STACK_LINE(1000)
														ret1->forced = false;
													}
													HX_STACK_LINE(1000)
													{
														HX_STACK_LINE(1000)
														ret1->x = x1;
														HX_STACK_LINE(1000)
														ret1->y = y1;
														HX_STACK_LINE(1000)
														{
														}
														HX_STACK_LINE(1000)
														{
														}
													}
													HX_STACK_LINE(1000)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(1000)
										p = _Function_10_1::Block(x1,y1);
										HX_STACK_LINE(1001)
										if (((bool(sndx) || bool(sndy)))){
											HX_STACK_LINE(1001)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1003)
										if (((i == (int)6))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1004);
													{
														HX_STACK_LINE(1004)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1004)
														{
															HX_STACK_LINE(1004)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1004)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1004)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1004)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1004)
																ret1->next = null();
															}
															HX_STACK_LINE(1004)
															ret1->forced = false;
														}
														HX_STACK_LINE(1004)
														{
															HX_STACK_LINE(1004)
															ret1->x = x0;
															HX_STACK_LINE(1004)
															ret1->y = y1;
															HX_STACK_LINE(1004)
															{
															}
															HX_STACK_LINE(1004)
															{
															}
														}
														HX_STACK_LINE(1004)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1004)
											p = _Function_11_1::Block(x0,y1);
											HX_STACK_LINE(1005)
											if (((bool(fstx) || bool(sndy)))){
												HX_STACK_LINE(1005)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1007)
											if (((i == (int)1))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1008);
														{
															HX_STACK_LINE(1008)
															{
															}
															HX_STACK_LINE(1008)
															return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
														}
														return null();
													}
												};
												HX_STACK_LINE(1008)
												p = _Function_12_1::Block(ints,xn,yn);
												HX_STACK_LINE(1009)
												if (((p == null()))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1010);
															{
																HX_STACK_LINE(1010)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1010)
																{
																	HX_STACK_LINE(1010)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1010)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1010)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1010)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1010)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1010)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1010)
																{
																	HX_STACK_LINE(1010)
																	ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																	HX_STACK_LINE(1010)
																	ret1->y = y0;
																	HX_STACK_LINE(1010)
																	{
																	}
																	HX_STACK_LINE(1010)
																	{
																	}
																}
																HX_STACK_LINE(1010)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1010)
													p = _Function_13_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
													HX_STACK_LINE(1011)
													{
														HX_STACK_LINE(1011)
														{
														}
														HX_STACK_LINE(1011)
														ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
													}
												}
												else{
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1013);
															{
																HX_STACK_LINE(1013)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1013)
																{
																	HX_STACK_LINE(1013)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1013)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1013)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1013)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1013)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1013)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1013)
																{
																	HX_STACK_LINE(1013)
																	ret1->x = p->x;
																	HX_STACK_LINE(1013)
																	ret1->y = p->y;
																	HX_STACK_LINE(1013)
																	{
																	}
																	HX_STACK_LINE(1013)
																	{
																	}
																}
																HX_STACK_LINE(1013)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1013)
													p = _Function_13_1::Block(p);
												}
												HX_STACK_LINE(1014)
												if ((fsty)){
													HX_STACK_LINE(1014)
													p->forced = true;
												}
												HX_STACK_LINE(1015)
												if (((bool((p->x == x0)) || bool((p->x == x1))))){
													HX_STACK_LINE(1015)
													if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
														HX_STACK_LINE(1016)
														hx::XorEq(val,(int)2);
													}
												}
											}
											else{
												HX_STACK_LINE(1019)
												if (((i == (int)5))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1020);
															{
																HX_STACK_LINE(1020)
																{
																}
																HX_STACK_LINE(1020)
																return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
															}
															return null();
														}
													};
													HX_STACK_LINE(1020)
													p = _Function_13_1::Block(ints,xn,yn);
													HX_STACK_LINE(1021)
													if (((p == null()))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1022);
																{
																	HX_STACK_LINE(1022)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1022)
																	{
																		HX_STACK_LINE(1022)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1022)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1022)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1022)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1022)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1022)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1022)
																	{
																		HX_STACK_LINE(1022)
																		ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																		HX_STACK_LINE(1022)
																		ret1->y = y1;
																		HX_STACK_LINE(1022)
																		{
																		}
																		HX_STACK_LINE(1022)
																		{
																		}
																	}
																	HX_STACK_LINE(1022)
																	return ret1;
																}
																return null();
															}
														};
														HX_STACK_LINE(1022)
														p = _Function_14_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
														HX_STACK_LINE(1023)
														{
															HX_STACK_LINE(1023)
															{
															}
															HX_STACK_LINE(1023)
															ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
														}
													}
													else{
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1025);
																{
																	HX_STACK_LINE(1025)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1025)
																	{
																		HX_STACK_LINE(1025)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1025)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1025)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1025)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1025)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1025)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1025)
																	{
																		HX_STACK_LINE(1025)
																		ret1->x = p->x;
																		HX_STACK_LINE(1025)
																		ret1->y = p->y;
																		HX_STACK_LINE(1025)
																		{
																		}
																		HX_STACK_LINE(1025)
																		{
																		}
																	}
																	HX_STACK_LINE(1025)
																	return ret1;
																}
																return null();
															}
														};
														HX_STACK_LINE(1025)
														p = _Function_14_1::Block(p);
													}
													HX_STACK_LINE(1026)
													if ((sndy)){
														HX_STACK_LINE(1026)
														p->forced = true;
													}
													HX_STACK_LINE(1027)
													if (((bool((p->x == x0)) || bool((p->x == x1))))){
														HX_STACK_LINE(1027)
														if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
															HX_STACK_LINE(1028)
															hx::XorEq(val,(int)32);
														}
													}
												}
												else{
													HX_STACK_LINE(1031)
													if (((i == (int)3))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1032);
																{
																	HX_STACK_LINE(1032)
																	{
																	}
																	HX_STACK_LINE(1032)
																	return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																}
																return null();
															}
														};
														HX_STACK_LINE(1032)
														p = _Function_14_1::Block(ints,xn,yn);
														HX_STACK_LINE(1033)
														if (((p == null()))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1034);
																	{
																		HX_STACK_LINE(1034)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1034)
																		{
																			HX_STACK_LINE(1034)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1034)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1034)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1034)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1034)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1034)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1034)
																		{
																			HX_STACK_LINE(1034)
																			ret1->x = x1;
																			HX_STACK_LINE(1034)
																			ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																			HX_STACK_LINE(1034)
																			{
																			}
																			HX_STACK_LINE(1034)
																			{
																			}
																		}
																		HX_STACK_LINE(1034)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1034)
															p = _Function_15_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
															HX_STACK_LINE(1035)
															{
																HX_STACK_LINE(1035)
																{
																}
																HX_STACK_LINE(1035)
																ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
															}
														}
														else{
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1037);
																	{
																		HX_STACK_LINE(1037)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1037)
																		{
																			HX_STACK_LINE(1037)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1037)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1037)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1037)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1037)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1037)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1037)
																		{
																			HX_STACK_LINE(1037)
																			ret1->x = p->x;
																			HX_STACK_LINE(1037)
																			ret1->y = p->y;
																			HX_STACK_LINE(1037)
																			{
																			}
																			HX_STACK_LINE(1037)
																			{
																			}
																		}
																		HX_STACK_LINE(1037)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1037)
															p = _Function_15_1::Block(p);
														}
														HX_STACK_LINE(1038)
														if ((sndx)){
															HX_STACK_LINE(1038)
															p->forced = true;
														}
														HX_STACK_LINE(1039)
														if (((bool((p->y == y0)) || bool((p->y == y1))))){
															HX_STACK_LINE(1039)
															if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																HX_STACK_LINE(1040)
																hx::XorEq(val,(int)8);
															}
														}
													}
													else{
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1044);
																{
																	HX_STACK_LINE(1044)
																	{
																	}
																	HX_STACK_LINE(1044)
																	return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																}
																return null();
															}
														};
														HX_STACK_LINE(1044)
														p = _Function_14_1::Block(ints,xn,yn);
														HX_STACK_LINE(1045)
														if (((p == null()))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1046);
																	{
																		HX_STACK_LINE(1046)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1046)
																		{
																			HX_STACK_LINE(1046)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1046)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1046)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1046)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1046)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1046)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1046)
																		{
																			HX_STACK_LINE(1046)
																			ret1->x = x0;
																			HX_STACK_LINE(1046)
																			ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																			HX_STACK_LINE(1046)
																			{
																			}
																			HX_STACK_LINE(1046)
																			{
																			}
																		}
																		HX_STACK_LINE(1046)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1046)
															p = _Function_15_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
															HX_STACK_LINE(1047)
															{
																HX_STACK_LINE(1047)
																{
																}
																HX_STACK_LINE(1047)
																ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
															}
														}
														else{
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1049);
																	{
																		HX_STACK_LINE(1049)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1049)
																		{
																			HX_STACK_LINE(1049)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1049)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1049)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1049)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1049)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1049)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1049)
																		{
																			HX_STACK_LINE(1049)
																			ret1->x = p->x;
																			HX_STACK_LINE(1049)
																			ret1->y = p->y;
																			HX_STACK_LINE(1049)
																			{
																			}
																			HX_STACK_LINE(1049)
																			{
																			}
																		}
																		HX_STACK_LINE(1049)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1049)
															p = _Function_15_1::Block(p);
														}
														HX_STACK_LINE(1050)
														if ((fstx)){
															HX_STACK_LINE(1050)
															p->forced = true;
														}
														HX_STACK_LINE(1051)
														if (((bool((p->y == y0)) || bool((p->y == y1))))){
															HX_STACK_LINE(1051)
															if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																HX_STACK_LINE(1052)
																hx::XorEq(val,(int)128);
															}
														}
													}
												}
											}
										}
									}
								}
							}
							struct _Function_7_1{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1055);
									{
										HX_STACK_LINE(1056)
										::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(1057)
										if (((ret->p1 == null()))){
											HX_STACK_LINE(1057)
											ret->p1 = obj->prev = obj->next = obj;
										}
										else{
											HX_STACK_LINE(1059)
											obj->prev = ret->p1;
											HX_STACK_LINE(1060)
											obj->next = ret->p1->next;
											HX_STACK_LINE(1061)
											ret->p1->next->prev = obj;
											HX_STACK_LINE(1062)
											ret->p1->next = obj;
										}
										HX_STACK_LINE(1064)
										return obj;
									}
									return null();
								}
							};
							HX_STACK_LINE(1055)
							ret->p1 = _Function_7_1::Block(p,ret);
						}
					}
				}
				HX_STACK_LINE(1068)
				ret->p1 = ret->p1->next;
				HX_STACK_LINE(1069)
				ret->key1 = val;
				HX_STACK_LINE(1070)
				if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
					HX_STACK_LINE(1071)
					val = (int)0;
					HX_STACK_LINE(1072)
					ret->key1 = (int)0;
					HX_STACK_LINE(1073)
					ret->p1 = null();
				}
			}
			HX_STACK_LINE(1076)
			if (((val == (int)0))){
				HX_STACK_LINE(1076)
				ret = null();
			}
			else{
				HX_STACK_LINE(1078)
				ret->pr = ret->p1;
				HX_STACK_LINE(1079)
				ret->okeyr = ret->okey1;
				HX_STACK_LINE(1080)
				ret->keyr = ret->key1;
			}
		}
		else{
			HX_STACK_LINE(1084)
			bool mid = (iso((0.5 * ((x0 + x1))),(0.5 * ((y0 + y1)))).Cast< Float >() < (int)0);		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(1085)
			if (((key == (int)10))){
				HX_STACK_LINE(1085)
				if ((mid)){
					HX_STACK_LINE(1087)
					int val = (int)187;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1088)
					{
						HX_STACK_LINE(1089)
						ret->okey1 = val;
						HX_STACK_LINE(1090)
						{
							HX_STACK_LINE(1090)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1090)
							while(((_g < (int)8))){
								HX_STACK_LINE(1090)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1091)
								if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
									HX_STACK_LINE(1092)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1093)
									if (((i == (int)0))){
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1094);
												{
													HX_STACK_LINE(1094)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1094)
													{
														HX_STACK_LINE(1094)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1094)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
														}
														else{
															HX_STACK_LINE(1094)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1094)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1094)
															ret1->next = null();
														}
														HX_STACK_LINE(1094)
														ret1->forced = false;
													}
													HX_STACK_LINE(1094)
													{
														HX_STACK_LINE(1094)
														ret1->x = x0;
														HX_STACK_LINE(1094)
														ret1->y = y0;
														HX_STACK_LINE(1094)
														{
														}
														HX_STACK_LINE(1094)
														{
														}
													}
													HX_STACK_LINE(1094)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(1094)
										p = _Function_10_1::Block(x0,y0);
										HX_STACK_LINE(1095)
										if (((bool(fstx) || bool(fsty)))){
											HX_STACK_LINE(1095)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1097)
										if (((i == (int)2))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1098);
													{
														HX_STACK_LINE(1098)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1098)
														{
															HX_STACK_LINE(1098)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1098)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1098)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1098)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1098)
																ret1->next = null();
															}
															HX_STACK_LINE(1098)
															ret1->forced = false;
														}
														HX_STACK_LINE(1098)
														{
															HX_STACK_LINE(1098)
															ret1->x = x1;
															HX_STACK_LINE(1098)
															ret1->y = y0;
															HX_STACK_LINE(1098)
															{
															}
															HX_STACK_LINE(1098)
															{
															}
														}
														HX_STACK_LINE(1098)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1098)
											p = _Function_11_1::Block(x1,y0);
											HX_STACK_LINE(1099)
											if (((bool(sndx) || bool(fsty)))){
												HX_STACK_LINE(1099)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1101)
											if (((i == (int)4))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1102);
														{
															HX_STACK_LINE(1102)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1102)
															{
																HX_STACK_LINE(1102)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1102)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1102)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1102)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1102)
																	ret1->next = null();
																}
																HX_STACK_LINE(1102)
																ret1->forced = false;
															}
															HX_STACK_LINE(1102)
															{
																HX_STACK_LINE(1102)
																ret1->x = x1;
																HX_STACK_LINE(1102)
																ret1->y = y1;
																HX_STACK_LINE(1102)
																{
																}
																HX_STACK_LINE(1102)
																{
																}
															}
															HX_STACK_LINE(1102)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1102)
												p = _Function_12_1::Block(x1,y1);
												HX_STACK_LINE(1103)
												if (((bool(sndx) || bool(sndy)))){
													HX_STACK_LINE(1103)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1105)
												if (((i == (int)6))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1106);
															{
																HX_STACK_LINE(1106)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1106)
																{
																	HX_STACK_LINE(1106)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1106)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1106)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1106)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1106)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1106)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1106)
																{
																	HX_STACK_LINE(1106)
																	ret1->x = x0;
																	HX_STACK_LINE(1106)
																	ret1->y = y1;
																	HX_STACK_LINE(1106)
																	{
																	}
																	HX_STACK_LINE(1106)
																	{
																	}
																}
																HX_STACK_LINE(1106)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1106)
													p = _Function_13_1::Block(x0,y1);
													HX_STACK_LINE(1107)
													if (((bool(fstx) || bool(sndy)))){
														HX_STACK_LINE(1107)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1109)
													if (((i == (int)1))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1110);
																{
																	HX_STACK_LINE(1110)
																	{
																	}
																	HX_STACK_LINE(1110)
																	return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																}
																return null();
															}
														};
														HX_STACK_LINE(1110)
														p = _Function_14_1::Block(ints,xn,yn);
														HX_STACK_LINE(1111)
														if (((p == null()))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1112);
																	{
																		HX_STACK_LINE(1112)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1112)
																		{
																			HX_STACK_LINE(1112)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1112)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1112)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1112)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1112)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1112)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1112)
																		{
																			HX_STACK_LINE(1112)
																			ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																			HX_STACK_LINE(1112)
																			ret1->y = y0;
																			HX_STACK_LINE(1112)
																			{
																			}
																			HX_STACK_LINE(1112)
																			{
																			}
																		}
																		HX_STACK_LINE(1112)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1112)
															p = _Function_15_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
															HX_STACK_LINE(1113)
															{
																HX_STACK_LINE(1113)
																{
																}
																HX_STACK_LINE(1113)
																ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
															}
														}
														else{
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1115);
																	{
																		HX_STACK_LINE(1115)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1115)
																		{
																			HX_STACK_LINE(1115)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1115)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1115)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1115)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1115)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1115)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1115)
																		{
																			HX_STACK_LINE(1115)
																			ret1->x = p->x;
																			HX_STACK_LINE(1115)
																			ret1->y = p->y;
																			HX_STACK_LINE(1115)
																			{
																			}
																			HX_STACK_LINE(1115)
																			{
																			}
																		}
																		HX_STACK_LINE(1115)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1115)
															p = _Function_15_1::Block(p);
														}
														HX_STACK_LINE(1116)
														if ((fsty)){
															HX_STACK_LINE(1116)
															p->forced = true;
														}
														HX_STACK_LINE(1117)
														if (((bool((p->x == x0)) || bool((p->x == x1))))){
															HX_STACK_LINE(1117)
															if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
																HX_STACK_LINE(1118)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1121)
														if (((i == (int)5))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1122);
																	{
																		HX_STACK_LINE(1122)
																		{
																		}
																		HX_STACK_LINE(1122)
																		return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1122)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1123)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1124);
																		{
																			HX_STACK_LINE(1124)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1124)
																			{
																				HX_STACK_LINE(1124)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1124)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1124)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1124)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1124)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1124)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1124)
																			{
																				HX_STACK_LINE(1124)
																				ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																				HX_STACK_LINE(1124)
																				ret1->y = y1;
																				HX_STACK_LINE(1124)
																				{
																				}
																				HX_STACK_LINE(1124)
																				{
																				}
																			}
																			HX_STACK_LINE(1124)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1124)
																p = _Function_16_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																HX_STACK_LINE(1125)
																{
																	HX_STACK_LINE(1125)
																	{
																	}
																	HX_STACK_LINE(1125)
																	ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1127);
																		{
																			HX_STACK_LINE(1127)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1127)
																			{
																				HX_STACK_LINE(1127)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1127)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1127)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1127)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1127)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1127)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1127)
																			{
																				HX_STACK_LINE(1127)
																				ret1->x = p->x;
																				HX_STACK_LINE(1127)
																				ret1->y = p->y;
																				HX_STACK_LINE(1127)
																				{
																				}
																				HX_STACK_LINE(1127)
																				{
																				}
																			}
																			HX_STACK_LINE(1127)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1127)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1128)
															if ((sndy)){
																HX_STACK_LINE(1128)
																p->forced = true;
															}
															HX_STACK_LINE(1129)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1129)
																if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																	HX_STACK_LINE(1130)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1133)
															if (((i == (int)3))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1134);
																		{
																			HX_STACK_LINE(1134)
																			{
																			}
																			HX_STACK_LINE(1134)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1134)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1135)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1136);
																			{
																				HX_STACK_LINE(1136)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1136)
																				{
																					HX_STACK_LINE(1136)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1136)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1136)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1136)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1136)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1136)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1136)
																				{
																					HX_STACK_LINE(1136)
																					ret1->x = x1;
																					HX_STACK_LINE(1136)
																					ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																					HX_STACK_LINE(1136)
																					{
																					}
																					HX_STACK_LINE(1136)
																					{
																					}
																				}
																				HX_STACK_LINE(1136)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1136)
																	p = _Function_17_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																	HX_STACK_LINE(1137)
																	{
																		HX_STACK_LINE(1137)
																		{
																		}
																		HX_STACK_LINE(1137)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1139);
																			{
																				HX_STACK_LINE(1139)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1139)
																				{
																					HX_STACK_LINE(1139)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1139)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1139)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1139)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1139)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1139)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1139)
																				{
																					HX_STACK_LINE(1139)
																					ret1->x = p->x;
																					HX_STACK_LINE(1139)
																					ret1->y = p->y;
																					HX_STACK_LINE(1139)
																					{
																					}
																					HX_STACK_LINE(1139)
																					{
																					}
																				}
																				HX_STACK_LINE(1139)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1139)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1140)
																if ((sndx)){
																	HX_STACK_LINE(1140)
																	p->forced = true;
																}
																HX_STACK_LINE(1141)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1141)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1142)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1146);
																		{
																			HX_STACK_LINE(1146)
																			{
																			}
																			HX_STACK_LINE(1146)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1146)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1147)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1148);
																			{
																				HX_STACK_LINE(1148)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1148)
																				{
																					HX_STACK_LINE(1148)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1148)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1148)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1148)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1148)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1148)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1148)
																				{
																					HX_STACK_LINE(1148)
																					ret1->x = x0;
																					HX_STACK_LINE(1148)
																					ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																					HX_STACK_LINE(1148)
																					{
																					}
																					HX_STACK_LINE(1148)
																					{
																					}
																				}
																				HX_STACK_LINE(1148)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1148)
																	p = _Function_17_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																	HX_STACK_LINE(1149)
																	{
																		HX_STACK_LINE(1149)
																		{
																		}
																		HX_STACK_LINE(1149)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1151);
																			{
																				HX_STACK_LINE(1151)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1151)
																				{
																					HX_STACK_LINE(1151)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1151)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1151)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1151)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1151)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1151)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1151)
																				{
																					HX_STACK_LINE(1151)
																					ret1->x = p->x;
																					HX_STACK_LINE(1151)
																					ret1->y = p->y;
																					HX_STACK_LINE(1151)
																					{
																					}
																					HX_STACK_LINE(1151)
																					{
																					}
																				}
																				HX_STACK_LINE(1151)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1151)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1152)
																if ((fstx)){
																	HX_STACK_LINE(1152)
																	p->forced = true;
																}
																HX_STACK_LINE(1153)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1153)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																		HX_STACK_LINE(1154)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									struct _Function_9_1{
										inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1157);
											{
												HX_STACK_LINE(1158)
												::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
												HX_STACK_LINE(1159)
												if (((ret->p1 == null()))){
													HX_STACK_LINE(1159)
													ret->p1 = obj->prev = obj->next = obj;
												}
												else{
													HX_STACK_LINE(1161)
													obj->prev = ret->p1;
													HX_STACK_LINE(1162)
													obj->next = ret->p1->next;
													HX_STACK_LINE(1163)
													ret->p1->next->prev = obj;
													HX_STACK_LINE(1164)
													ret->p1->next = obj;
												}
												HX_STACK_LINE(1166)
												return obj;
											}
											return null();
										}
									};
									HX_STACK_LINE(1157)
									ret->p1 = _Function_9_1::Block(p,ret);
								}
							}
						}
						HX_STACK_LINE(1170)
						ret->p1 = ret->p1->next;
						HX_STACK_LINE(1171)
						ret->key1 = val;
						HX_STACK_LINE(1172)
						if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
							HX_STACK_LINE(1173)
							val = (int)0;
							HX_STACK_LINE(1174)
							ret->key1 = (int)0;
							HX_STACK_LINE(1175)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1178)
					if (((val == (int)0))){
						HX_STACK_LINE(1178)
						ret = null();
					}
					else{
						HX_STACK_LINE(1180)
						ret->pr = ret->p1;
						HX_STACK_LINE(1181)
						ret->okeyr = ret->okey1;
						HX_STACK_LINE(1182)
						ret->keyr = ret->key1;
					}
				}
				else{
					HX_STACK_LINE(1186)
					int val = (int)131;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1187)
					{
						HX_STACK_LINE(1188)
						ret->okey1 = val;
						HX_STACK_LINE(1189)
						{
							HX_STACK_LINE(1189)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1189)
							while(((_g < (int)8))){
								HX_STACK_LINE(1189)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1190)
								if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
									HX_STACK_LINE(1191)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1192)
									if (((i == (int)0))){
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1193);
												{
													HX_STACK_LINE(1193)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1193)
													{
														HX_STACK_LINE(1193)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1193)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
														}
														else{
															HX_STACK_LINE(1193)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1193)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1193)
															ret1->next = null();
														}
														HX_STACK_LINE(1193)
														ret1->forced = false;
													}
													HX_STACK_LINE(1193)
													{
														HX_STACK_LINE(1193)
														ret1->x = x0;
														HX_STACK_LINE(1193)
														ret1->y = y0;
														HX_STACK_LINE(1193)
														{
														}
														HX_STACK_LINE(1193)
														{
														}
													}
													HX_STACK_LINE(1193)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(1193)
										p = _Function_10_1::Block(x0,y0);
										HX_STACK_LINE(1194)
										if (((bool(fstx) || bool(fsty)))){
											HX_STACK_LINE(1194)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1196)
										if (((i == (int)2))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1197);
													{
														HX_STACK_LINE(1197)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1197)
														{
															HX_STACK_LINE(1197)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1197)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1197)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1197)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1197)
																ret1->next = null();
															}
															HX_STACK_LINE(1197)
															ret1->forced = false;
														}
														HX_STACK_LINE(1197)
														{
															HX_STACK_LINE(1197)
															ret1->x = x1;
															HX_STACK_LINE(1197)
															ret1->y = y0;
															HX_STACK_LINE(1197)
															{
															}
															HX_STACK_LINE(1197)
															{
															}
														}
														HX_STACK_LINE(1197)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1197)
											p = _Function_11_1::Block(x1,y0);
											HX_STACK_LINE(1198)
											if (((bool(sndx) || bool(fsty)))){
												HX_STACK_LINE(1198)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1200)
											if (((i == (int)4))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1201);
														{
															HX_STACK_LINE(1201)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1201)
															{
																HX_STACK_LINE(1201)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1201)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1201)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1201)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1201)
																	ret1->next = null();
																}
																HX_STACK_LINE(1201)
																ret1->forced = false;
															}
															HX_STACK_LINE(1201)
															{
																HX_STACK_LINE(1201)
																ret1->x = x1;
																HX_STACK_LINE(1201)
																ret1->y = y1;
																HX_STACK_LINE(1201)
																{
																}
																HX_STACK_LINE(1201)
																{
																}
															}
															HX_STACK_LINE(1201)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1201)
												p = _Function_12_1::Block(x1,y1);
												HX_STACK_LINE(1202)
												if (((bool(sndx) || bool(sndy)))){
													HX_STACK_LINE(1202)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1204)
												if (((i == (int)6))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1205);
															{
																HX_STACK_LINE(1205)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1205)
																{
																	HX_STACK_LINE(1205)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1205)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1205)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1205)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1205)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1205)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1205)
																{
																	HX_STACK_LINE(1205)
																	ret1->x = x0;
																	HX_STACK_LINE(1205)
																	ret1->y = y1;
																	HX_STACK_LINE(1205)
																	{
																	}
																	HX_STACK_LINE(1205)
																	{
																	}
																}
																HX_STACK_LINE(1205)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1205)
													p = _Function_13_1::Block(x0,y1);
													HX_STACK_LINE(1206)
													if (((bool(fstx) || bool(sndy)))){
														HX_STACK_LINE(1206)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1208)
													if (((i == (int)1))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1209);
																{
																	HX_STACK_LINE(1209)
																	{
																	}
																	HX_STACK_LINE(1209)
																	return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																}
																return null();
															}
														};
														HX_STACK_LINE(1209)
														p = _Function_14_1::Block(ints,xn,yn);
														HX_STACK_LINE(1210)
														if (((p == null()))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1211);
																	{
																		HX_STACK_LINE(1211)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1211)
																		{
																			HX_STACK_LINE(1211)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1211)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1211)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1211)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1211)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1211)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1211)
																		{
																			HX_STACK_LINE(1211)
																			ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																			HX_STACK_LINE(1211)
																			ret1->y = y0;
																			HX_STACK_LINE(1211)
																			{
																			}
																			HX_STACK_LINE(1211)
																			{
																			}
																		}
																		HX_STACK_LINE(1211)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1211)
															p = _Function_15_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
															HX_STACK_LINE(1212)
															{
																HX_STACK_LINE(1212)
																{
																}
																HX_STACK_LINE(1212)
																ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
															}
														}
														else{
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1214);
																	{
																		HX_STACK_LINE(1214)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1214)
																		{
																			HX_STACK_LINE(1214)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1214)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1214)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1214)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1214)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1214)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1214)
																		{
																			HX_STACK_LINE(1214)
																			ret1->x = p->x;
																			HX_STACK_LINE(1214)
																			ret1->y = p->y;
																			HX_STACK_LINE(1214)
																			{
																			}
																			HX_STACK_LINE(1214)
																			{
																			}
																		}
																		HX_STACK_LINE(1214)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1214)
															p = _Function_15_1::Block(p);
														}
														HX_STACK_LINE(1215)
														if ((fsty)){
															HX_STACK_LINE(1215)
															p->forced = true;
														}
														HX_STACK_LINE(1216)
														if (((bool((p->x == x0)) || bool((p->x == x1))))){
															HX_STACK_LINE(1216)
															if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
																HX_STACK_LINE(1217)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1220)
														if (((i == (int)5))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1221);
																	{
																		HX_STACK_LINE(1221)
																		{
																		}
																		HX_STACK_LINE(1221)
																		return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1221)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1222)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1223);
																		{
																			HX_STACK_LINE(1223)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1223)
																			{
																				HX_STACK_LINE(1223)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1223)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1223)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1223)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1223)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1223)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1223)
																			{
																				HX_STACK_LINE(1223)
																				ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																				HX_STACK_LINE(1223)
																				ret1->y = y1;
																				HX_STACK_LINE(1223)
																				{
																				}
																				HX_STACK_LINE(1223)
																				{
																				}
																			}
																			HX_STACK_LINE(1223)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1223)
																p = _Function_16_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																HX_STACK_LINE(1224)
																{
																	HX_STACK_LINE(1224)
																	{
																	}
																	HX_STACK_LINE(1224)
																	ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1226);
																		{
																			HX_STACK_LINE(1226)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1226)
																			{
																				HX_STACK_LINE(1226)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1226)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1226)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1226)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1226)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1226)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1226)
																			{
																				HX_STACK_LINE(1226)
																				ret1->x = p->x;
																				HX_STACK_LINE(1226)
																				ret1->y = p->y;
																				HX_STACK_LINE(1226)
																				{
																				}
																				HX_STACK_LINE(1226)
																				{
																				}
																			}
																			HX_STACK_LINE(1226)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1226)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1227)
															if ((sndy)){
																HX_STACK_LINE(1227)
																p->forced = true;
															}
															HX_STACK_LINE(1228)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1228)
																if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																	HX_STACK_LINE(1229)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1232)
															if (((i == (int)3))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1233);
																		{
																			HX_STACK_LINE(1233)
																			{
																			}
																			HX_STACK_LINE(1233)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1233)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1234)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1235);
																			{
																				HX_STACK_LINE(1235)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1235)
																				{
																					HX_STACK_LINE(1235)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1235)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1235)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1235)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1235)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1235)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1235)
																				{
																					HX_STACK_LINE(1235)
																					ret1->x = x1;
																					HX_STACK_LINE(1235)
																					ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																					HX_STACK_LINE(1235)
																					{
																					}
																					HX_STACK_LINE(1235)
																					{
																					}
																				}
																				HX_STACK_LINE(1235)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1235)
																	p = _Function_17_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																	HX_STACK_LINE(1236)
																	{
																		HX_STACK_LINE(1236)
																		{
																		}
																		HX_STACK_LINE(1236)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1238);
																			{
																				HX_STACK_LINE(1238)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1238)
																				{
																					HX_STACK_LINE(1238)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1238)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1238)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1238)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1238)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1238)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1238)
																				{
																					HX_STACK_LINE(1238)
																					ret1->x = p->x;
																					HX_STACK_LINE(1238)
																					ret1->y = p->y;
																					HX_STACK_LINE(1238)
																					{
																					}
																					HX_STACK_LINE(1238)
																					{
																					}
																				}
																				HX_STACK_LINE(1238)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1238)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1239)
																if ((sndx)){
																	HX_STACK_LINE(1239)
																	p->forced = true;
																}
																HX_STACK_LINE(1240)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1240)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1241)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1245);
																		{
																			HX_STACK_LINE(1245)
																			{
																			}
																			HX_STACK_LINE(1245)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1245)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1246)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1247);
																			{
																				HX_STACK_LINE(1247)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1247)
																				{
																					HX_STACK_LINE(1247)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1247)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1247)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1247)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1247)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1247)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1247)
																				{
																					HX_STACK_LINE(1247)
																					ret1->x = x0;
																					HX_STACK_LINE(1247)
																					ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																					HX_STACK_LINE(1247)
																					{
																					}
																					HX_STACK_LINE(1247)
																					{
																					}
																				}
																				HX_STACK_LINE(1247)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1247)
																	p = _Function_17_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																	HX_STACK_LINE(1248)
																	{
																		HX_STACK_LINE(1248)
																		{
																		}
																		HX_STACK_LINE(1248)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1250);
																			{
																				HX_STACK_LINE(1250)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1250)
																				{
																					HX_STACK_LINE(1250)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1250)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1250)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1250)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1250)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1250)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1250)
																				{
																					HX_STACK_LINE(1250)
																					ret1->x = p->x;
																					HX_STACK_LINE(1250)
																					ret1->y = p->y;
																					HX_STACK_LINE(1250)
																					{
																					}
																					HX_STACK_LINE(1250)
																					{
																					}
																				}
																				HX_STACK_LINE(1250)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1250)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1251)
																if ((fstx)){
																	HX_STACK_LINE(1251)
																	p->forced = true;
																}
																HX_STACK_LINE(1252)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1252)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																		HX_STACK_LINE(1253)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									struct _Function_9_1{
										inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1256);
											{
												HX_STACK_LINE(1257)
												::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
												HX_STACK_LINE(1258)
												if (((ret->p1 == null()))){
													HX_STACK_LINE(1258)
													ret->p1 = obj->prev = obj->next = obj;
												}
												else{
													HX_STACK_LINE(1260)
													obj->prev = ret->p1;
													HX_STACK_LINE(1261)
													obj->next = ret->p1->next;
													HX_STACK_LINE(1262)
													ret->p1->next->prev = obj;
													HX_STACK_LINE(1263)
													ret->p1->next = obj;
												}
												HX_STACK_LINE(1265)
												return obj;
											}
											return null();
										}
									};
									HX_STACK_LINE(1256)
									ret->p1 = _Function_9_1::Block(p,ret);
								}
							}
						}
						HX_STACK_LINE(1269)
						ret->p1 = ret->p1->next;
						HX_STACK_LINE(1270)
						ret->key1 = val;
						HX_STACK_LINE(1271)
						if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
							HX_STACK_LINE(1272)
							val = (int)0;
							HX_STACK_LINE(1273)
							ret->key1 = (int)0;
							HX_STACK_LINE(1274)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1277)
					if (((val != (int)0))){
						HX_STACK_LINE(1278)
						int val1 = (int)56;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1279)
						{
							HX_STACK_LINE(1280)
							ret->okey2 = val1;
							HX_STACK_LINE(1281)
							{
								HX_STACK_LINE(1281)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1281)
								while(((_g < (int)8))){
									HX_STACK_LINE(1281)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1282)
									if (((((int(val1) & int((int((int)1) << int(i))))) != (int)0))){
										HX_STACK_LINE(1283)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1284)
										if (((i == (int)0))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1285);
													{
														HX_STACK_LINE(1285)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1285)
														{
															HX_STACK_LINE(1285)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1285)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1285)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1285)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1285)
																ret1->next = null();
															}
															HX_STACK_LINE(1285)
															ret1->forced = false;
														}
														HX_STACK_LINE(1285)
														{
															HX_STACK_LINE(1285)
															ret1->x = x0;
															HX_STACK_LINE(1285)
															ret1->y = y0;
															HX_STACK_LINE(1285)
															{
															}
															HX_STACK_LINE(1285)
															{
															}
														}
														HX_STACK_LINE(1285)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1285)
											p = _Function_11_1::Block(x0,y0);
											HX_STACK_LINE(1286)
											if (((bool(fstx) || bool(fsty)))){
												HX_STACK_LINE(1286)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1288)
											if (((i == (int)2))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1289);
														{
															HX_STACK_LINE(1289)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1289)
															{
																HX_STACK_LINE(1289)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1289)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1289)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1289)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1289)
																	ret1->next = null();
																}
																HX_STACK_LINE(1289)
																ret1->forced = false;
															}
															HX_STACK_LINE(1289)
															{
																HX_STACK_LINE(1289)
																ret1->x = x1;
																HX_STACK_LINE(1289)
																ret1->y = y0;
																HX_STACK_LINE(1289)
																{
																}
																HX_STACK_LINE(1289)
																{
																}
															}
															HX_STACK_LINE(1289)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1289)
												p = _Function_12_1::Block(x1,y0);
												HX_STACK_LINE(1290)
												if (((bool(sndx) || bool(fsty)))){
													HX_STACK_LINE(1290)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1292)
												if (((i == (int)4))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1293);
															{
																HX_STACK_LINE(1293)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1293)
																{
																	HX_STACK_LINE(1293)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1293)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1293)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1293)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1293)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1293)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1293)
																{
																	HX_STACK_LINE(1293)
																	ret1->x = x1;
																	HX_STACK_LINE(1293)
																	ret1->y = y1;
																	HX_STACK_LINE(1293)
																	{
																	}
																	HX_STACK_LINE(1293)
																	{
																	}
																}
																HX_STACK_LINE(1293)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1293)
													p = _Function_13_1::Block(x1,y1);
													HX_STACK_LINE(1294)
													if (((bool(sndx) || bool(sndy)))){
														HX_STACK_LINE(1294)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1296)
													if (((i == (int)6))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1297);
																{
																	HX_STACK_LINE(1297)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1297)
																	{
																		HX_STACK_LINE(1297)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1297)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1297)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1297)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1297)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1297)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1297)
																	{
																		HX_STACK_LINE(1297)
																		ret1->x = x0;
																		HX_STACK_LINE(1297)
																		ret1->y = y1;
																		HX_STACK_LINE(1297)
																		{
																		}
																		HX_STACK_LINE(1297)
																		{
																		}
																	}
																	HX_STACK_LINE(1297)
																	return ret1;
																}
																return null();
															}
														};
														HX_STACK_LINE(1297)
														p = _Function_14_1::Block(x0,y1);
														HX_STACK_LINE(1298)
														if (((bool(fstx) || bool(sndy)))){
															HX_STACK_LINE(1298)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1300)
														if (((i == (int)1))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1301);
																	{
																		HX_STACK_LINE(1301)
																		{
																		}
																		HX_STACK_LINE(1301)
																		return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1301)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1302)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1303);
																		{
																			HX_STACK_LINE(1303)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1303)
																			{
																				HX_STACK_LINE(1303)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1303)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1303)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1303)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1303)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1303)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1303)
																			{
																				HX_STACK_LINE(1303)
																				ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																				HX_STACK_LINE(1303)
																				ret1->y = y0;
																				HX_STACK_LINE(1303)
																				{
																				}
																				HX_STACK_LINE(1303)
																				{
																				}
																			}
																			HX_STACK_LINE(1303)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1303)
																p = _Function_16_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
																HX_STACK_LINE(1304)
																{
																	HX_STACK_LINE(1304)
																	{
																	}
																	HX_STACK_LINE(1304)
																	ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1306);
																		{
																			HX_STACK_LINE(1306)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1306)
																			{
																				HX_STACK_LINE(1306)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1306)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1306)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1306)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1306)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1306)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1306)
																			{
																				HX_STACK_LINE(1306)
																				ret1->x = p->x;
																				HX_STACK_LINE(1306)
																				ret1->y = p->y;
																				HX_STACK_LINE(1306)
																				{
																				}
																				HX_STACK_LINE(1306)
																				{
																				}
																			}
																			HX_STACK_LINE(1306)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1306)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1307)
															if ((fsty)){
																HX_STACK_LINE(1307)
																p->forced = true;
															}
															HX_STACK_LINE(1308)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1308)
																if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)4))) != (int)0))))))){
																	HX_STACK_LINE(1309)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1312)
															if (((i == (int)5))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1313);
																		{
																			HX_STACK_LINE(1313)
																			{
																			}
																			HX_STACK_LINE(1313)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1313)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1314)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1315);
																			{
																				HX_STACK_LINE(1315)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1315)
																				{
																					HX_STACK_LINE(1315)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1315)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1315)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1315)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1315)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1315)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1315)
																				{
																					HX_STACK_LINE(1315)
																					ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																					HX_STACK_LINE(1315)
																					ret1->y = y1;
																					HX_STACK_LINE(1315)
																					{
																					}
																					HX_STACK_LINE(1315)
																					{
																					}
																				}
																				HX_STACK_LINE(1315)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1315)
																	p = _Function_17_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																	HX_STACK_LINE(1316)
																	{
																		HX_STACK_LINE(1316)
																		{
																		}
																		HX_STACK_LINE(1316)
																		ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1318);
																			{
																				HX_STACK_LINE(1318)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1318)
																				{
																					HX_STACK_LINE(1318)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1318)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1318)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1318)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1318)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1318)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1318)
																				{
																					HX_STACK_LINE(1318)
																					ret1->x = p->x;
																					HX_STACK_LINE(1318)
																					ret1->y = p->y;
																					HX_STACK_LINE(1318)
																					{
																					}
																					HX_STACK_LINE(1318)
																					{
																					}
																				}
																				HX_STACK_LINE(1318)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1318)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1319)
																if ((sndy)){
																	HX_STACK_LINE(1319)
																	p->forced = true;
																}
																HX_STACK_LINE(1320)
																if (((bool((p->x == x0)) || bool((p->x == x1))))){
																	HX_STACK_LINE(1320)
																	if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1321)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1324)
																if (((i == (int)3))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1325);
																			{
																				HX_STACK_LINE(1325)
																				{
																				}
																				HX_STACK_LINE(1325)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1325)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1326)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1327);
																				{
																					HX_STACK_LINE(1327)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1327)
																					{
																						HX_STACK_LINE(1327)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1327)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1327)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1327)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1327)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1327)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1327)
																					{
																						HX_STACK_LINE(1327)
																						ret1->x = x1;
																						HX_STACK_LINE(1327)
																						ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																						HX_STACK_LINE(1327)
																						{
																						}
																						HX_STACK_LINE(1327)
																						{
																						}
																					}
																					HX_STACK_LINE(1327)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1327)
																		p = _Function_18_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																		HX_STACK_LINE(1328)
																		{
																			HX_STACK_LINE(1328)
																			{
																			}
																			HX_STACK_LINE(1328)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1330);
																				{
																					HX_STACK_LINE(1330)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1330)
																					{
																						HX_STACK_LINE(1330)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1330)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1330)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1330)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1330)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1330)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1330)
																					{
																						HX_STACK_LINE(1330)
																						ret1->x = p->x;
																						HX_STACK_LINE(1330)
																						ret1->y = p->y;
																						HX_STACK_LINE(1330)
																						{
																						}
																						HX_STACK_LINE(1330)
																						{
																						}
																					}
																					HX_STACK_LINE(1330)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1330)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1331)
																	if ((sndx)){
																		HX_STACK_LINE(1331)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1332)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1332)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																			HX_STACK_LINE(1333)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1337);
																			{
																				HX_STACK_LINE(1337)
																				{
																				}
																				HX_STACK_LINE(1337)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1337)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1338)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1339);
																				{
																					HX_STACK_LINE(1339)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1339)
																					{
																						HX_STACK_LINE(1339)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1339)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1339)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1339)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1339)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1339)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1339)
																					{
																						HX_STACK_LINE(1339)
																						ret1->x = x0;
																						HX_STACK_LINE(1339)
																						ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																						HX_STACK_LINE(1339)
																						{
																						}
																						HX_STACK_LINE(1339)
																						{
																						}
																					}
																					HX_STACK_LINE(1339)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1339)
																		p = _Function_18_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																		HX_STACK_LINE(1340)
																		{
																			HX_STACK_LINE(1340)
																			{
																			}
																			HX_STACK_LINE(1340)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1342);
																				{
																					HX_STACK_LINE(1342)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1342)
																					{
																						HX_STACK_LINE(1342)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1342)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1342)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1342)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1342)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1342)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1342)
																					{
																						HX_STACK_LINE(1342)
																						ret1->x = p->x;
																						HX_STACK_LINE(1342)
																						ret1->y = p->y;
																						HX_STACK_LINE(1342)
																						{
																						}
																						HX_STACK_LINE(1342)
																						{
																						}
																					}
																					HX_STACK_LINE(1342)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1342)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1343)
																	if ((fstx)){
																		HX_STACK_LINE(1343)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1344)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1344)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)64))) != (int)0))))))){
																			HX_STACK_LINE(1345)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1348);
												{
													HX_STACK_LINE(1349)
													::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
													HX_STACK_LINE(1350)
													if (((ret->p2 == null()))){
														HX_STACK_LINE(1350)
														ret->p2 = obj->prev = obj->next = obj;
													}
													else{
														HX_STACK_LINE(1352)
														obj->prev = ret->p2;
														HX_STACK_LINE(1353)
														obj->next = ret->p2->next;
														HX_STACK_LINE(1354)
														ret->p2->next->prev = obj;
														HX_STACK_LINE(1355)
														ret->p2->next = obj;
													}
													HX_STACK_LINE(1357)
													return obj;
												}
												return null();
											}
										};
										HX_STACK_LINE(1348)
										ret->p2 = _Function_10_1::Block(p,ret);
									}
								}
							}
							HX_STACK_LINE(1361)
							ret->p2 = ret->p2->next;
							HX_STACK_LINE(1362)
							ret->key2 = val1;
							HX_STACK_LINE(1363)
							if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val1 == (int)1)) || bool((val1 == (int)4)))) || bool((val1 == (int)16)))) || bool((val1 == (int)64)))) || bool((val1 == (int)3)))) || bool((val1 == (int)12)))) || bool((val1 == (int)48)))) || bool((val1 == (int)192)))) || bool((val1 == (int)129)))) || bool((val1 == (int)6)))) || bool((val1 == (int)24)))) || bool((val1 == (int)96)))) || bool((val1 == (int)5)))) || bool((val1 == (int)20)))) || bool((val1 == (int)80)))) || bool((val1 == (int)65)))) || bool((val1 == (int)17)))) || bool((val1 == (int)68))))){
								HX_STACK_LINE(1364)
								val1 = (int)0;
								HX_STACK_LINE(1365)
								ret->key2 = (int)0;
								HX_STACK_LINE(1366)
								ret->p2 = null();
							}
						}
						HX_STACK_LINE(1369)
						if (((val1 == (int)0))){
							HX_STACK_LINE(1370)
							ret->pr = ret->p1;
							HX_STACK_LINE(1371)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1372)
							ret->keyr = ret->key1;
						}
						else{
							HX_STACK_LINE(1375)
							ret->pr = ret->p2;
							HX_STACK_LINE(1376)
							ret->okeyr = ret->okey2;
							HX_STACK_LINE(1377)
							ret->keyr = ret->key2;
						}
					}
					else{
						HX_STACK_LINE(1381)
						int val1 = (int)56;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1382)
						{
							HX_STACK_LINE(1383)
							ret->okey1 = val1;
							HX_STACK_LINE(1384)
							{
								HX_STACK_LINE(1384)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1384)
								while(((_g < (int)8))){
									HX_STACK_LINE(1384)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1385)
									if (((((int(val1) & int((int((int)1) << int(i))))) != (int)0))){
										HX_STACK_LINE(1386)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1387)
										if (((i == (int)0))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1388);
													{
														HX_STACK_LINE(1388)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1388)
														{
															HX_STACK_LINE(1388)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1388)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1388)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1388)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1388)
																ret1->next = null();
															}
															HX_STACK_LINE(1388)
															ret1->forced = false;
														}
														HX_STACK_LINE(1388)
														{
															HX_STACK_LINE(1388)
															ret1->x = x0;
															HX_STACK_LINE(1388)
															ret1->y = y0;
															HX_STACK_LINE(1388)
															{
															}
															HX_STACK_LINE(1388)
															{
															}
														}
														HX_STACK_LINE(1388)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1388)
											p = _Function_11_1::Block(x0,y0);
											HX_STACK_LINE(1389)
											if (((bool(fstx) || bool(fsty)))){
												HX_STACK_LINE(1389)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1391)
											if (((i == (int)2))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1392);
														{
															HX_STACK_LINE(1392)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1392)
															{
																HX_STACK_LINE(1392)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1392)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1392)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1392)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1392)
																	ret1->next = null();
																}
																HX_STACK_LINE(1392)
																ret1->forced = false;
															}
															HX_STACK_LINE(1392)
															{
																HX_STACK_LINE(1392)
																ret1->x = x1;
																HX_STACK_LINE(1392)
																ret1->y = y0;
																HX_STACK_LINE(1392)
																{
																}
																HX_STACK_LINE(1392)
																{
																}
															}
															HX_STACK_LINE(1392)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1392)
												p = _Function_12_1::Block(x1,y0);
												HX_STACK_LINE(1393)
												if (((bool(sndx) || bool(fsty)))){
													HX_STACK_LINE(1393)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1395)
												if (((i == (int)4))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1396);
															{
																HX_STACK_LINE(1396)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1396)
																{
																	HX_STACK_LINE(1396)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1396)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1396)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1396)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1396)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1396)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1396)
																{
																	HX_STACK_LINE(1396)
																	ret1->x = x1;
																	HX_STACK_LINE(1396)
																	ret1->y = y1;
																	HX_STACK_LINE(1396)
																	{
																	}
																	HX_STACK_LINE(1396)
																	{
																	}
																}
																HX_STACK_LINE(1396)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1396)
													p = _Function_13_1::Block(x1,y1);
													HX_STACK_LINE(1397)
													if (((bool(sndx) || bool(sndy)))){
														HX_STACK_LINE(1397)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1399)
													if (((i == (int)6))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1400);
																{
																	HX_STACK_LINE(1400)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1400)
																	{
																		HX_STACK_LINE(1400)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1400)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1400)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1400)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1400)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1400)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1400)
																	{
																		HX_STACK_LINE(1400)
																		ret1->x = x0;
																		HX_STACK_LINE(1400)
																		ret1->y = y1;
																		HX_STACK_LINE(1400)
																		{
																		}
																		HX_STACK_LINE(1400)
																		{
																		}
																	}
																	HX_STACK_LINE(1400)
																	return ret1;
																}
																return null();
															}
														};
														HX_STACK_LINE(1400)
														p = _Function_14_1::Block(x0,y1);
														HX_STACK_LINE(1401)
														if (((bool(fstx) || bool(sndy)))){
															HX_STACK_LINE(1401)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1403)
														if (((i == (int)1))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1404);
																	{
																		HX_STACK_LINE(1404)
																		{
																		}
																		HX_STACK_LINE(1404)
																		return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1404)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1405)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1406);
																		{
																			HX_STACK_LINE(1406)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1406)
																			{
																				HX_STACK_LINE(1406)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1406)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1406)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1406)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1406)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1406)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1406)
																			{
																				HX_STACK_LINE(1406)
																				ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																				HX_STACK_LINE(1406)
																				ret1->y = y0;
																				HX_STACK_LINE(1406)
																				{
																				}
																				HX_STACK_LINE(1406)
																				{
																				}
																			}
																			HX_STACK_LINE(1406)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1406)
																p = _Function_16_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
																HX_STACK_LINE(1407)
																{
																	HX_STACK_LINE(1407)
																	{
																	}
																	HX_STACK_LINE(1407)
																	ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1409);
																		{
																			HX_STACK_LINE(1409)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1409)
																			{
																				HX_STACK_LINE(1409)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1409)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1409)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1409)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1409)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1409)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1409)
																			{
																				HX_STACK_LINE(1409)
																				ret1->x = p->x;
																				HX_STACK_LINE(1409)
																				ret1->y = p->y;
																				HX_STACK_LINE(1409)
																				{
																				}
																				HX_STACK_LINE(1409)
																				{
																				}
																			}
																			HX_STACK_LINE(1409)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1409)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1410)
															if ((fsty)){
																HX_STACK_LINE(1410)
																p->forced = true;
															}
															HX_STACK_LINE(1411)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1411)
																if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)4))) != (int)0))))))){
																	HX_STACK_LINE(1412)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1415)
															if (((i == (int)5))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1416);
																		{
																			HX_STACK_LINE(1416)
																			{
																			}
																			HX_STACK_LINE(1416)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1416)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1417)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1418);
																			{
																				HX_STACK_LINE(1418)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1418)
																				{
																					HX_STACK_LINE(1418)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1418)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1418)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1418)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1418)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1418)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1418)
																				{
																					HX_STACK_LINE(1418)
																					ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																					HX_STACK_LINE(1418)
																					ret1->y = y1;
																					HX_STACK_LINE(1418)
																					{
																					}
																					HX_STACK_LINE(1418)
																					{
																					}
																				}
																				HX_STACK_LINE(1418)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1418)
																	p = _Function_17_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																	HX_STACK_LINE(1419)
																	{
																		HX_STACK_LINE(1419)
																		{
																		}
																		HX_STACK_LINE(1419)
																		ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1421);
																			{
																				HX_STACK_LINE(1421)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1421)
																				{
																					HX_STACK_LINE(1421)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1421)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1421)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1421)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1421)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1421)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1421)
																				{
																					HX_STACK_LINE(1421)
																					ret1->x = p->x;
																					HX_STACK_LINE(1421)
																					ret1->y = p->y;
																					HX_STACK_LINE(1421)
																					{
																					}
																					HX_STACK_LINE(1421)
																					{
																					}
																				}
																				HX_STACK_LINE(1421)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1421)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1422)
																if ((sndy)){
																	HX_STACK_LINE(1422)
																	p->forced = true;
																}
																HX_STACK_LINE(1423)
																if (((bool((p->x == x0)) || bool((p->x == x1))))){
																	HX_STACK_LINE(1423)
																	if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1424)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1427)
																if (((i == (int)3))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1428);
																			{
																				HX_STACK_LINE(1428)
																				{
																				}
																				HX_STACK_LINE(1428)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1428)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1429)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1430);
																				{
																					HX_STACK_LINE(1430)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1430)
																					{
																						HX_STACK_LINE(1430)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1430)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1430)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1430)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1430)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1430)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1430)
																					{
																						HX_STACK_LINE(1430)
																						ret1->x = x1;
																						HX_STACK_LINE(1430)
																						ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																						HX_STACK_LINE(1430)
																						{
																						}
																						HX_STACK_LINE(1430)
																						{
																						}
																					}
																					HX_STACK_LINE(1430)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1430)
																		p = _Function_18_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																		HX_STACK_LINE(1431)
																		{
																			HX_STACK_LINE(1431)
																			{
																			}
																			HX_STACK_LINE(1431)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1433);
																				{
																					HX_STACK_LINE(1433)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1433)
																					{
																						HX_STACK_LINE(1433)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1433)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1433)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1433)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1433)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1433)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1433)
																					{
																						HX_STACK_LINE(1433)
																						ret1->x = p->x;
																						HX_STACK_LINE(1433)
																						ret1->y = p->y;
																						HX_STACK_LINE(1433)
																						{
																						}
																						HX_STACK_LINE(1433)
																						{
																						}
																					}
																					HX_STACK_LINE(1433)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1433)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1434)
																	if ((sndx)){
																		HX_STACK_LINE(1434)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1435)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1435)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																			HX_STACK_LINE(1436)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1440);
																			{
																				HX_STACK_LINE(1440)
																				{
																				}
																				HX_STACK_LINE(1440)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1440)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1441)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1442);
																				{
																					HX_STACK_LINE(1442)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1442)
																					{
																						HX_STACK_LINE(1442)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1442)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1442)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1442)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1442)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1442)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1442)
																					{
																						HX_STACK_LINE(1442)
																						ret1->x = x0;
																						HX_STACK_LINE(1442)
																						ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																						HX_STACK_LINE(1442)
																						{
																						}
																						HX_STACK_LINE(1442)
																						{
																						}
																					}
																					HX_STACK_LINE(1442)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1442)
																		p = _Function_18_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																		HX_STACK_LINE(1443)
																		{
																			HX_STACK_LINE(1443)
																			{
																			}
																			HX_STACK_LINE(1443)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1445);
																				{
																					HX_STACK_LINE(1445)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1445)
																					{
																						HX_STACK_LINE(1445)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1445)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1445)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1445)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1445)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1445)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1445)
																					{
																						HX_STACK_LINE(1445)
																						ret1->x = p->x;
																						HX_STACK_LINE(1445)
																						ret1->y = p->y;
																						HX_STACK_LINE(1445)
																						{
																						}
																						HX_STACK_LINE(1445)
																						{
																						}
																					}
																					HX_STACK_LINE(1445)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1445)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1446)
																	if ((fstx)){
																		HX_STACK_LINE(1446)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1447)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1447)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)64))) != (int)0))))))){
																			HX_STACK_LINE(1448)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1451);
												{
													HX_STACK_LINE(1452)
													::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
													HX_STACK_LINE(1453)
													if (((ret->p1 == null()))){
														HX_STACK_LINE(1453)
														ret->p1 = obj->prev = obj->next = obj;
													}
													else{
														HX_STACK_LINE(1455)
														obj->prev = ret->p1;
														HX_STACK_LINE(1456)
														obj->next = ret->p1->next;
														HX_STACK_LINE(1457)
														ret->p1->next->prev = obj;
														HX_STACK_LINE(1458)
														ret->p1->next = obj;
													}
													HX_STACK_LINE(1460)
													return obj;
												}
												return null();
											}
										};
										HX_STACK_LINE(1451)
										ret->p1 = _Function_10_1::Block(p,ret);
									}
								}
							}
							HX_STACK_LINE(1464)
							ret->p1 = ret->p1->next;
							HX_STACK_LINE(1465)
							ret->key1 = val1;
							HX_STACK_LINE(1466)
							if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val1 == (int)1)) || bool((val1 == (int)4)))) || bool((val1 == (int)16)))) || bool((val1 == (int)64)))) || bool((val1 == (int)3)))) || bool((val1 == (int)12)))) || bool((val1 == (int)48)))) || bool((val1 == (int)192)))) || bool((val1 == (int)129)))) || bool((val1 == (int)6)))) || bool((val1 == (int)24)))) || bool((val1 == (int)96)))) || bool((val1 == (int)5)))) || bool((val1 == (int)20)))) || bool((val1 == (int)80)))) || bool((val1 == (int)65)))) || bool((val1 == (int)17)))) || bool((val1 == (int)68))))){
								HX_STACK_LINE(1467)
								val1 = (int)0;
								HX_STACK_LINE(1468)
								ret->key1 = (int)0;
								HX_STACK_LINE(1469)
								ret->p1 = null();
							}
						}
						HX_STACK_LINE(1472)
						if (((val1 == (int)0))){
							HX_STACK_LINE(1472)
							ret = null();
						}
						else{
							HX_STACK_LINE(1474)
							ret->pr = ret->p1;
							HX_STACK_LINE(1475)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1476)
							ret->keyr = ret->key1;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1481)
				if ((mid)){
					HX_STACK_LINE(1483)
					int val = (int)238;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1484)
					{
						HX_STACK_LINE(1485)
						ret->okey1 = val;
						HX_STACK_LINE(1486)
						{
							HX_STACK_LINE(1486)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1486)
							while(((_g < (int)8))){
								HX_STACK_LINE(1486)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1487)
								if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
									HX_STACK_LINE(1488)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1489)
									if (((i == (int)0))){
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1490);
												{
													HX_STACK_LINE(1490)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1490)
													{
														HX_STACK_LINE(1490)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1490)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
														}
														else{
															HX_STACK_LINE(1490)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1490)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1490)
															ret1->next = null();
														}
														HX_STACK_LINE(1490)
														ret1->forced = false;
													}
													HX_STACK_LINE(1490)
													{
														HX_STACK_LINE(1490)
														ret1->x = x0;
														HX_STACK_LINE(1490)
														ret1->y = y0;
														HX_STACK_LINE(1490)
														{
														}
														HX_STACK_LINE(1490)
														{
														}
													}
													HX_STACK_LINE(1490)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(1490)
										p = _Function_10_1::Block(x0,y0);
										HX_STACK_LINE(1491)
										if (((bool(fstx) || bool(fsty)))){
											HX_STACK_LINE(1491)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1493)
										if (((i == (int)2))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1494);
													{
														HX_STACK_LINE(1494)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1494)
														{
															HX_STACK_LINE(1494)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1494)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1494)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1494)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1494)
																ret1->next = null();
															}
															HX_STACK_LINE(1494)
															ret1->forced = false;
														}
														HX_STACK_LINE(1494)
														{
															HX_STACK_LINE(1494)
															ret1->x = x1;
															HX_STACK_LINE(1494)
															ret1->y = y0;
															HX_STACK_LINE(1494)
															{
															}
															HX_STACK_LINE(1494)
															{
															}
														}
														HX_STACK_LINE(1494)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1494)
											p = _Function_11_1::Block(x1,y0);
											HX_STACK_LINE(1495)
											if (((bool(sndx) || bool(fsty)))){
												HX_STACK_LINE(1495)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1497)
											if (((i == (int)4))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1498);
														{
															HX_STACK_LINE(1498)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1498)
															{
																HX_STACK_LINE(1498)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1498)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1498)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1498)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1498)
																	ret1->next = null();
																}
																HX_STACK_LINE(1498)
																ret1->forced = false;
															}
															HX_STACK_LINE(1498)
															{
																HX_STACK_LINE(1498)
																ret1->x = x1;
																HX_STACK_LINE(1498)
																ret1->y = y1;
																HX_STACK_LINE(1498)
																{
																}
																HX_STACK_LINE(1498)
																{
																}
															}
															HX_STACK_LINE(1498)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1498)
												p = _Function_12_1::Block(x1,y1);
												HX_STACK_LINE(1499)
												if (((bool(sndx) || bool(sndy)))){
													HX_STACK_LINE(1499)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1501)
												if (((i == (int)6))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1502);
															{
																HX_STACK_LINE(1502)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1502)
																{
																	HX_STACK_LINE(1502)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1502)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1502)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1502)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1502)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1502)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1502)
																{
																	HX_STACK_LINE(1502)
																	ret1->x = x0;
																	HX_STACK_LINE(1502)
																	ret1->y = y1;
																	HX_STACK_LINE(1502)
																	{
																	}
																	HX_STACK_LINE(1502)
																	{
																	}
																}
																HX_STACK_LINE(1502)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1502)
													p = _Function_13_1::Block(x0,y1);
													HX_STACK_LINE(1503)
													if (((bool(fstx) || bool(sndy)))){
														HX_STACK_LINE(1503)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1505)
													if (((i == (int)1))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1506);
																{
																	HX_STACK_LINE(1506)
																	{
																	}
																	HX_STACK_LINE(1506)
																	return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																}
																return null();
															}
														};
														HX_STACK_LINE(1506)
														p = _Function_14_1::Block(ints,xn,yn);
														HX_STACK_LINE(1507)
														if (((p == null()))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1508);
																	{
																		HX_STACK_LINE(1508)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1508)
																		{
																			HX_STACK_LINE(1508)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1508)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1508)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1508)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1508)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1508)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1508)
																		{
																			HX_STACK_LINE(1508)
																			ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																			HX_STACK_LINE(1508)
																			ret1->y = y0;
																			HX_STACK_LINE(1508)
																			{
																			}
																			HX_STACK_LINE(1508)
																			{
																			}
																		}
																		HX_STACK_LINE(1508)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1508)
															p = _Function_15_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
															HX_STACK_LINE(1509)
															{
																HX_STACK_LINE(1509)
																{
																}
																HX_STACK_LINE(1509)
																ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
															}
														}
														else{
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1511);
																	{
																		HX_STACK_LINE(1511)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1511)
																		{
																			HX_STACK_LINE(1511)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1511)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1511)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1511)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1511)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1511)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1511)
																		{
																			HX_STACK_LINE(1511)
																			ret1->x = p->x;
																			HX_STACK_LINE(1511)
																			ret1->y = p->y;
																			HX_STACK_LINE(1511)
																			{
																			}
																			HX_STACK_LINE(1511)
																			{
																			}
																		}
																		HX_STACK_LINE(1511)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1511)
															p = _Function_15_1::Block(p);
														}
														HX_STACK_LINE(1512)
														if ((fsty)){
															HX_STACK_LINE(1512)
															p->forced = true;
														}
														HX_STACK_LINE(1513)
														if (((bool((p->x == x0)) || bool((p->x == x1))))){
															HX_STACK_LINE(1513)
															if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
																HX_STACK_LINE(1514)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1517)
														if (((i == (int)5))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1518);
																	{
																		HX_STACK_LINE(1518)
																		{
																		}
																		HX_STACK_LINE(1518)
																		return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1518)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1519)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1520);
																		{
																			HX_STACK_LINE(1520)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1520)
																			{
																				HX_STACK_LINE(1520)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1520)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1520)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1520)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1520)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1520)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1520)
																			{
																				HX_STACK_LINE(1520)
																				ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																				HX_STACK_LINE(1520)
																				ret1->y = y1;
																				HX_STACK_LINE(1520)
																				{
																				}
																				HX_STACK_LINE(1520)
																				{
																				}
																			}
																			HX_STACK_LINE(1520)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1520)
																p = _Function_16_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																HX_STACK_LINE(1521)
																{
																	HX_STACK_LINE(1521)
																	{
																	}
																	HX_STACK_LINE(1521)
																	ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1523);
																		{
																			HX_STACK_LINE(1523)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1523)
																			{
																				HX_STACK_LINE(1523)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1523)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1523)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1523)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1523)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1523)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1523)
																			{
																				HX_STACK_LINE(1523)
																				ret1->x = p->x;
																				HX_STACK_LINE(1523)
																				ret1->y = p->y;
																				HX_STACK_LINE(1523)
																				{
																				}
																				HX_STACK_LINE(1523)
																				{
																				}
																			}
																			HX_STACK_LINE(1523)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1523)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1524)
															if ((sndy)){
																HX_STACK_LINE(1524)
																p->forced = true;
															}
															HX_STACK_LINE(1525)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1525)
																if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																	HX_STACK_LINE(1526)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1529)
															if (((i == (int)3))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1530);
																		{
																			HX_STACK_LINE(1530)
																			{
																			}
																			HX_STACK_LINE(1530)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1530)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1531)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1532);
																			{
																				HX_STACK_LINE(1532)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1532)
																				{
																					HX_STACK_LINE(1532)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1532)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1532)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1532)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1532)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1532)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1532)
																				{
																					HX_STACK_LINE(1532)
																					ret1->x = x1;
																					HX_STACK_LINE(1532)
																					ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																					HX_STACK_LINE(1532)
																					{
																					}
																					HX_STACK_LINE(1532)
																					{
																					}
																				}
																				HX_STACK_LINE(1532)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1532)
																	p = _Function_17_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																	HX_STACK_LINE(1533)
																	{
																		HX_STACK_LINE(1533)
																		{
																		}
																		HX_STACK_LINE(1533)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1535);
																			{
																				HX_STACK_LINE(1535)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1535)
																				{
																					HX_STACK_LINE(1535)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1535)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1535)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1535)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1535)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1535)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1535)
																				{
																					HX_STACK_LINE(1535)
																					ret1->x = p->x;
																					HX_STACK_LINE(1535)
																					ret1->y = p->y;
																					HX_STACK_LINE(1535)
																					{
																					}
																					HX_STACK_LINE(1535)
																					{
																					}
																				}
																				HX_STACK_LINE(1535)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1535)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1536)
																if ((sndx)){
																	HX_STACK_LINE(1536)
																	p->forced = true;
																}
																HX_STACK_LINE(1537)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1537)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1538)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1542);
																		{
																			HX_STACK_LINE(1542)
																			{
																			}
																			HX_STACK_LINE(1542)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1542)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1543)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1544);
																			{
																				HX_STACK_LINE(1544)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1544)
																				{
																					HX_STACK_LINE(1544)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1544)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1544)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1544)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1544)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1544)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1544)
																				{
																					HX_STACK_LINE(1544)
																					ret1->x = x0;
																					HX_STACK_LINE(1544)
																					ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																					HX_STACK_LINE(1544)
																					{
																					}
																					HX_STACK_LINE(1544)
																					{
																					}
																				}
																				HX_STACK_LINE(1544)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1544)
																	p = _Function_17_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																	HX_STACK_LINE(1545)
																	{
																		HX_STACK_LINE(1545)
																		{
																		}
																		HX_STACK_LINE(1545)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1547);
																			{
																				HX_STACK_LINE(1547)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1547)
																				{
																					HX_STACK_LINE(1547)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1547)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1547)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1547)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1547)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1547)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1547)
																				{
																					HX_STACK_LINE(1547)
																					ret1->x = p->x;
																					HX_STACK_LINE(1547)
																					ret1->y = p->y;
																					HX_STACK_LINE(1547)
																					{
																					}
																					HX_STACK_LINE(1547)
																					{
																					}
																				}
																				HX_STACK_LINE(1547)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1547)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1548)
																if ((fstx)){
																	HX_STACK_LINE(1548)
																	p->forced = true;
																}
																HX_STACK_LINE(1549)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1549)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																		HX_STACK_LINE(1550)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									struct _Function_9_1{
										inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1553);
											{
												HX_STACK_LINE(1554)
												::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
												HX_STACK_LINE(1555)
												if (((ret->p1 == null()))){
													HX_STACK_LINE(1555)
													ret->p1 = obj->prev = obj->next = obj;
												}
												else{
													HX_STACK_LINE(1557)
													obj->prev = ret->p1;
													HX_STACK_LINE(1558)
													obj->next = ret->p1->next;
													HX_STACK_LINE(1559)
													ret->p1->next->prev = obj;
													HX_STACK_LINE(1560)
													ret->p1->next = obj;
												}
												HX_STACK_LINE(1562)
												return obj;
											}
											return null();
										}
									};
									HX_STACK_LINE(1553)
									ret->p1 = _Function_9_1::Block(p,ret);
								}
							}
						}
						HX_STACK_LINE(1566)
						ret->p1 = ret->p1->next;
						HX_STACK_LINE(1567)
						ret->key1 = val;
						HX_STACK_LINE(1568)
						if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
							HX_STACK_LINE(1569)
							val = (int)0;
							HX_STACK_LINE(1570)
							ret->key1 = (int)0;
							HX_STACK_LINE(1571)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1574)
					if (((val == (int)0))){
						HX_STACK_LINE(1574)
						ret = null();
					}
					else{
						HX_STACK_LINE(1576)
						ret->pr = ret->p1;
						HX_STACK_LINE(1577)
						ret->okeyr = ret->okey1;
						HX_STACK_LINE(1578)
						ret->keyr = ret->key1;
					}
				}
				else{
					HX_STACK_LINE(1582)
					int val = (int)224;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1583)
					{
						HX_STACK_LINE(1584)
						ret->okey1 = val;
						HX_STACK_LINE(1585)
						{
							HX_STACK_LINE(1585)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1585)
							while(((_g < (int)8))){
								HX_STACK_LINE(1585)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1586)
								if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
									HX_STACK_LINE(1587)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1588)
									if (((i == (int)0))){
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1589);
												{
													HX_STACK_LINE(1589)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1589)
													{
														HX_STACK_LINE(1589)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1589)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
														}
														else{
															HX_STACK_LINE(1589)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1589)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1589)
															ret1->next = null();
														}
														HX_STACK_LINE(1589)
														ret1->forced = false;
													}
													HX_STACK_LINE(1589)
													{
														HX_STACK_LINE(1589)
														ret1->x = x0;
														HX_STACK_LINE(1589)
														ret1->y = y0;
														HX_STACK_LINE(1589)
														{
														}
														HX_STACK_LINE(1589)
														{
														}
													}
													HX_STACK_LINE(1589)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(1589)
										p = _Function_10_1::Block(x0,y0);
										HX_STACK_LINE(1590)
										if (((bool(fstx) || bool(fsty)))){
											HX_STACK_LINE(1590)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1592)
										if (((i == (int)2))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1593);
													{
														HX_STACK_LINE(1593)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1593)
														{
															HX_STACK_LINE(1593)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1593)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1593)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1593)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1593)
																ret1->next = null();
															}
															HX_STACK_LINE(1593)
															ret1->forced = false;
														}
														HX_STACK_LINE(1593)
														{
															HX_STACK_LINE(1593)
															ret1->x = x1;
															HX_STACK_LINE(1593)
															ret1->y = y0;
															HX_STACK_LINE(1593)
															{
															}
															HX_STACK_LINE(1593)
															{
															}
														}
														HX_STACK_LINE(1593)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1593)
											p = _Function_11_1::Block(x1,y0);
											HX_STACK_LINE(1594)
											if (((bool(sndx) || bool(fsty)))){
												HX_STACK_LINE(1594)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1596)
											if (((i == (int)4))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1597);
														{
															HX_STACK_LINE(1597)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1597)
															{
																HX_STACK_LINE(1597)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1597)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1597)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1597)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1597)
																	ret1->next = null();
																}
																HX_STACK_LINE(1597)
																ret1->forced = false;
															}
															HX_STACK_LINE(1597)
															{
																HX_STACK_LINE(1597)
																ret1->x = x1;
																HX_STACK_LINE(1597)
																ret1->y = y1;
																HX_STACK_LINE(1597)
																{
																}
																HX_STACK_LINE(1597)
																{
																}
															}
															HX_STACK_LINE(1597)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1597)
												p = _Function_12_1::Block(x1,y1);
												HX_STACK_LINE(1598)
												if (((bool(sndx) || bool(sndy)))){
													HX_STACK_LINE(1598)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1600)
												if (((i == (int)6))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1601);
															{
																HX_STACK_LINE(1601)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1601)
																{
																	HX_STACK_LINE(1601)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1601)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1601)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1601)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1601)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1601)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1601)
																{
																	HX_STACK_LINE(1601)
																	ret1->x = x0;
																	HX_STACK_LINE(1601)
																	ret1->y = y1;
																	HX_STACK_LINE(1601)
																	{
																	}
																	HX_STACK_LINE(1601)
																	{
																	}
																}
																HX_STACK_LINE(1601)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1601)
													p = _Function_13_1::Block(x0,y1);
													HX_STACK_LINE(1602)
													if (((bool(fstx) || bool(sndy)))){
														HX_STACK_LINE(1602)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1604)
													if (((i == (int)1))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1605);
																{
																	HX_STACK_LINE(1605)
																	{
																	}
																	HX_STACK_LINE(1605)
																	return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																}
																return null();
															}
														};
														HX_STACK_LINE(1605)
														p = _Function_14_1::Block(ints,xn,yn);
														HX_STACK_LINE(1606)
														if (((p == null()))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1607);
																	{
																		HX_STACK_LINE(1607)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1607)
																		{
																			HX_STACK_LINE(1607)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1607)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1607)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1607)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1607)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1607)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1607)
																		{
																			HX_STACK_LINE(1607)
																			ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																			HX_STACK_LINE(1607)
																			ret1->y = y0;
																			HX_STACK_LINE(1607)
																			{
																			}
																			HX_STACK_LINE(1607)
																			{
																			}
																		}
																		HX_STACK_LINE(1607)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1607)
															p = _Function_15_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
															HX_STACK_LINE(1608)
															{
																HX_STACK_LINE(1608)
																{
																}
																HX_STACK_LINE(1608)
																ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
															}
														}
														else{
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1610);
																	{
																		HX_STACK_LINE(1610)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1610)
																		{
																			HX_STACK_LINE(1610)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1610)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1610)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1610)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1610)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1610)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1610)
																		{
																			HX_STACK_LINE(1610)
																			ret1->x = p->x;
																			HX_STACK_LINE(1610)
																			ret1->y = p->y;
																			HX_STACK_LINE(1610)
																			{
																			}
																			HX_STACK_LINE(1610)
																			{
																			}
																		}
																		HX_STACK_LINE(1610)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1610)
															p = _Function_15_1::Block(p);
														}
														HX_STACK_LINE(1611)
														if ((fsty)){
															HX_STACK_LINE(1611)
															p->forced = true;
														}
														HX_STACK_LINE(1612)
														if (((bool((p->x == x0)) || bool((p->x == x1))))){
															HX_STACK_LINE(1612)
															if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
																HX_STACK_LINE(1613)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1616)
														if (((i == (int)5))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1617);
																	{
																		HX_STACK_LINE(1617)
																		{
																		}
																		HX_STACK_LINE(1617)
																		return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1617)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1618)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1619);
																		{
																			HX_STACK_LINE(1619)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1619)
																			{
																				HX_STACK_LINE(1619)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1619)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1619)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1619)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1619)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1619)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1619)
																			{
																				HX_STACK_LINE(1619)
																				ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																				HX_STACK_LINE(1619)
																				ret1->y = y1;
																				HX_STACK_LINE(1619)
																				{
																				}
																				HX_STACK_LINE(1619)
																				{
																				}
																			}
																			HX_STACK_LINE(1619)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1619)
																p = _Function_16_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																HX_STACK_LINE(1620)
																{
																	HX_STACK_LINE(1620)
																	{
																	}
																	HX_STACK_LINE(1620)
																	ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1622);
																		{
																			HX_STACK_LINE(1622)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1622)
																			{
																				HX_STACK_LINE(1622)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1622)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1622)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1622)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1622)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1622)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1622)
																			{
																				HX_STACK_LINE(1622)
																				ret1->x = p->x;
																				HX_STACK_LINE(1622)
																				ret1->y = p->y;
																				HX_STACK_LINE(1622)
																				{
																				}
																				HX_STACK_LINE(1622)
																				{
																				}
																			}
																			HX_STACK_LINE(1622)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1622)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1623)
															if ((sndy)){
																HX_STACK_LINE(1623)
																p->forced = true;
															}
															HX_STACK_LINE(1624)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1624)
																if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																	HX_STACK_LINE(1625)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1628)
															if (((i == (int)3))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1629);
																		{
																			HX_STACK_LINE(1629)
																			{
																			}
																			HX_STACK_LINE(1629)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1629)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1630)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1631);
																			{
																				HX_STACK_LINE(1631)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1631)
																				{
																					HX_STACK_LINE(1631)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1631)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1631)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1631)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1631)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1631)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1631)
																				{
																					HX_STACK_LINE(1631)
																					ret1->x = x1;
																					HX_STACK_LINE(1631)
																					ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																					HX_STACK_LINE(1631)
																					{
																					}
																					HX_STACK_LINE(1631)
																					{
																					}
																				}
																				HX_STACK_LINE(1631)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1631)
																	p = _Function_17_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																	HX_STACK_LINE(1632)
																	{
																		HX_STACK_LINE(1632)
																		{
																		}
																		HX_STACK_LINE(1632)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1634);
																			{
																				HX_STACK_LINE(1634)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1634)
																				{
																					HX_STACK_LINE(1634)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1634)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1634)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1634)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1634)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1634)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1634)
																				{
																					HX_STACK_LINE(1634)
																					ret1->x = p->x;
																					HX_STACK_LINE(1634)
																					ret1->y = p->y;
																					HX_STACK_LINE(1634)
																					{
																					}
																					HX_STACK_LINE(1634)
																					{
																					}
																				}
																				HX_STACK_LINE(1634)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1634)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1635)
																if ((sndx)){
																	HX_STACK_LINE(1635)
																	p->forced = true;
																}
																HX_STACK_LINE(1636)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1636)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1637)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1641);
																		{
																			HX_STACK_LINE(1641)
																			{
																			}
																			HX_STACK_LINE(1641)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1641)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1642)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1643);
																			{
																				HX_STACK_LINE(1643)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1643)
																				{
																					HX_STACK_LINE(1643)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1643)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1643)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1643)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1643)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1643)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1643)
																				{
																					HX_STACK_LINE(1643)
																					ret1->x = x0;
																					HX_STACK_LINE(1643)
																					ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																					HX_STACK_LINE(1643)
																					{
																					}
																					HX_STACK_LINE(1643)
																					{
																					}
																				}
																				HX_STACK_LINE(1643)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1643)
																	p = _Function_17_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																	HX_STACK_LINE(1644)
																	{
																		HX_STACK_LINE(1644)
																		{
																		}
																		HX_STACK_LINE(1644)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1646);
																			{
																				HX_STACK_LINE(1646)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1646)
																				{
																					HX_STACK_LINE(1646)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1646)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1646)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1646)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1646)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1646)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1646)
																				{
																					HX_STACK_LINE(1646)
																					ret1->x = p->x;
																					HX_STACK_LINE(1646)
																					ret1->y = p->y;
																					HX_STACK_LINE(1646)
																					{
																					}
																					HX_STACK_LINE(1646)
																					{
																					}
																				}
																				HX_STACK_LINE(1646)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1646)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1647)
																if ((fstx)){
																	HX_STACK_LINE(1647)
																	p->forced = true;
																}
																HX_STACK_LINE(1648)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1648)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																		HX_STACK_LINE(1649)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									struct _Function_9_1{
										inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1652);
											{
												HX_STACK_LINE(1653)
												::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
												HX_STACK_LINE(1654)
												if (((ret->p1 == null()))){
													HX_STACK_LINE(1654)
													ret->p1 = obj->prev = obj->next = obj;
												}
												else{
													HX_STACK_LINE(1656)
													obj->prev = ret->p1;
													HX_STACK_LINE(1657)
													obj->next = ret->p1->next;
													HX_STACK_LINE(1658)
													ret->p1->next->prev = obj;
													HX_STACK_LINE(1659)
													ret->p1->next = obj;
												}
												HX_STACK_LINE(1661)
												return obj;
											}
											return null();
										}
									};
									HX_STACK_LINE(1652)
									ret->p1 = _Function_9_1::Block(p,ret);
								}
							}
						}
						HX_STACK_LINE(1665)
						ret->p1 = ret->p1->next;
						HX_STACK_LINE(1666)
						ret->key1 = val;
						HX_STACK_LINE(1667)
						if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
							HX_STACK_LINE(1668)
							val = (int)0;
							HX_STACK_LINE(1669)
							ret->key1 = (int)0;
							HX_STACK_LINE(1670)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1673)
					if (((val != (int)0))){
						HX_STACK_LINE(1674)
						int val1 = (int)14;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1675)
						{
							HX_STACK_LINE(1676)
							ret->okey2 = val1;
							HX_STACK_LINE(1677)
							{
								HX_STACK_LINE(1677)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1677)
								while(((_g < (int)8))){
									HX_STACK_LINE(1677)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1678)
									if (((((int(val1) & int((int((int)1) << int(i))))) != (int)0))){
										HX_STACK_LINE(1679)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1680)
										if (((i == (int)0))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1681);
													{
														HX_STACK_LINE(1681)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1681)
														{
															HX_STACK_LINE(1681)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1681)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1681)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1681)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1681)
																ret1->next = null();
															}
															HX_STACK_LINE(1681)
															ret1->forced = false;
														}
														HX_STACK_LINE(1681)
														{
															HX_STACK_LINE(1681)
															ret1->x = x0;
															HX_STACK_LINE(1681)
															ret1->y = y0;
															HX_STACK_LINE(1681)
															{
															}
															HX_STACK_LINE(1681)
															{
															}
														}
														HX_STACK_LINE(1681)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1681)
											p = _Function_11_1::Block(x0,y0);
											HX_STACK_LINE(1682)
											if (((bool(fstx) || bool(fsty)))){
												HX_STACK_LINE(1682)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1684)
											if (((i == (int)2))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1685);
														{
															HX_STACK_LINE(1685)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1685)
															{
																HX_STACK_LINE(1685)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1685)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1685)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1685)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1685)
																	ret1->next = null();
																}
																HX_STACK_LINE(1685)
																ret1->forced = false;
															}
															HX_STACK_LINE(1685)
															{
																HX_STACK_LINE(1685)
																ret1->x = x1;
																HX_STACK_LINE(1685)
																ret1->y = y0;
																HX_STACK_LINE(1685)
																{
																}
																HX_STACK_LINE(1685)
																{
																}
															}
															HX_STACK_LINE(1685)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1685)
												p = _Function_12_1::Block(x1,y0);
												HX_STACK_LINE(1686)
												if (((bool(sndx) || bool(fsty)))){
													HX_STACK_LINE(1686)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1688)
												if (((i == (int)4))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1689);
															{
																HX_STACK_LINE(1689)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1689)
																{
																	HX_STACK_LINE(1689)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1689)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1689)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1689)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1689)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1689)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1689)
																{
																	HX_STACK_LINE(1689)
																	ret1->x = x1;
																	HX_STACK_LINE(1689)
																	ret1->y = y1;
																	HX_STACK_LINE(1689)
																	{
																	}
																	HX_STACK_LINE(1689)
																	{
																	}
																}
																HX_STACK_LINE(1689)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1689)
													p = _Function_13_1::Block(x1,y1);
													HX_STACK_LINE(1690)
													if (((bool(sndx) || bool(sndy)))){
														HX_STACK_LINE(1690)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1692)
													if (((i == (int)6))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1693);
																{
																	HX_STACK_LINE(1693)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1693)
																	{
																		HX_STACK_LINE(1693)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1693)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1693)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1693)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1693)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1693)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1693)
																	{
																		HX_STACK_LINE(1693)
																		ret1->x = x0;
																		HX_STACK_LINE(1693)
																		ret1->y = y1;
																		HX_STACK_LINE(1693)
																		{
																		}
																		HX_STACK_LINE(1693)
																		{
																		}
																	}
																	HX_STACK_LINE(1693)
																	return ret1;
																}
																return null();
															}
														};
														HX_STACK_LINE(1693)
														p = _Function_14_1::Block(x0,y1);
														HX_STACK_LINE(1694)
														if (((bool(fstx) || bool(sndy)))){
															HX_STACK_LINE(1694)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1696)
														if (((i == (int)1))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1697);
																	{
																		HX_STACK_LINE(1697)
																		{
																		}
																		HX_STACK_LINE(1697)
																		return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1697)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1698)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1699);
																		{
																			HX_STACK_LINE(1699)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1699)
																			{
																				HX_STACK_LINE(1699)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1699)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1699)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1699)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1699)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1699)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1699)
																			{
																				HX_STACK_LINE(1699)
																				ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																				HX_STACK_LINE(1699)
																				ret1->y = y0;
																				HX_STACK_LINE(1699)
																				{
																				}
																				HX_STACK_LINE(1699)
																				{
																				}
																			}
																			HX_STACK_LINE(1699)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1699)
																p = _Function_16_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
																HX_STACK_LINE(1700)
																{
																	HX_STACK_LINE(1700)
																	{
																	}
																	HX_STACK_LINE(1700)
																	ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1702);
																		{
																			HX_STACK_LINE(1702)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1702)
																			{
																				HX_STACK_LINE(1702)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1702)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1702)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1702)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1702)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1702)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1702)
																			{
																				HX_STACK_LINE(1702)
																				ret1->x = p->x;
																				HX_STACK_LINE(1702)
																				ret1->y = p->y;
																				HX_STACK_LINE(1702)
																				{
																				}
																				HX_STACK_LINE(1702)
																				{
																				}
																			}
																			HX_STACK_LINE(1702)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1702)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1703)
															if ((fsty)){
																HX_STACK_LINE(1703)
																p->forced = true;
															}
															HX_STACK_LINE(1704)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1704)
																if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)4))) != (int)0))))))){
																	HX_STACK_LINE(1705)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1708)
															if (((i == (int)5))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1709);
																		{
																			HX_STACK_LINE(1709)
																			{
																			}
																			HX_STACK_LINE(1709)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1709)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1710)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1711);
																			{
																				HX_STACK_LINE(1711)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1711)
																				{
																					HX_STACK_LINE(1711)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1711)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1711)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1711)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1711)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1711)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1711)
																				{
																					HX_STACK_LINE(1711)
																					ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																					HX_STACK_LINE(1711)
																					ret1->y = y1;
																					HX_STACK_LINE(1711)
																					{
																					}
																					HX_STACK_LINE(1711)
																					{
																					}
																				}
																				HX_STACK_LINE(1711)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1711)
																	p = _Function_17_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																	HX_STACK_LINE(1712)
																	{
																		HX_STACK_LINE(1712)
																		{
																		}
																		HX_STACK_LINE(1712)
																		ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1714);
																			{
																				HX_STACK_LINE(1714)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1714)
																				{
																					HX_STACK_LINE(1714)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1714)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1714)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1714)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1714)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1714)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1714)
																				{
																					HX_STACK_LINE(1714)
																					ret1->x = p->x;
																					HX_STACK_LINE(1714)
																					ret1->y = p->y;
																					HX_STACK_LINE(1714)
																					{
																					}
																					HX_STACK_LINE(1714)
																					{
																					}
																				}
																				HX_STACK_LINE(1714)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1714)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1715)
																if ((sndy)){
																	HX_STACK_LINE(1715)
																	p->forced = true;
																}
																HX_STACK_LINE(1716)
																if (((bool((p->x == x0)) || bool((p->x == x1))))){
																	HX_STACK_LINE(1716)
																	if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1717)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1720)
																if (((i == (int)3))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1721);
																			{
																				HX_STACK_LINE(1721)
																				{
																				}
																				HX_STACK_LINE(1721)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1721)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1722)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1723);
																				{
																					HX_STACK_LINE(1723)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1723)
																					{
																						HX_STACK_LINE(1723)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1723)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1723)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1723)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1723)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1723)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1723)
																					{
																						HX_STACK_LINE(1723)
																						ret1->x = x1;
																						HX_STACK_LINE(1723)
																						ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																						HX_STACK_LINE(1723)
																						{
																						}
																						HX_STACK_LINE(1723)
																						{
																						}
																					}
																					HX_STACK_LINE(1723)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1723)
																		p = _Function_18_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																		HX_STACK_LINE(1724)
																		{
																			HX_STACK_LINE(1724)
																			{
																			}
																			HX_STACK_LINE(1724)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1726);
																				{
																					HX_STACK_LINE(1726)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1726)
																					{
																						HX_STACK_LINE(1726)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1726)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1726)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1726)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1726)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1726)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1726)
																					{
																						HX_STACK_LINE(1726)
																						ret1->x = p->x;
																						HX_STACK_LINE(1726)
																						ret1->y = p->y;
																						HX_STACK_LINE(1726)
																						{
																						}
																						HX_STACK_LINE(1726)
																						{
																						}
																					}
																					HX_STACK_LINE(1726)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1726)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1727)
																	if ((sndx)){
																		HX_STACK_LINE(1727)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1728)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1728)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																			HX_STACK_LINE(1729)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1733);
																			{
																				HX_STACK_LINE(1733)
																				{
																				}
																				HX_STACK_LINE(1733)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1733)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1734)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1735);
																				{
																					HX_STACK_LINE(1735)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1735)
																					{
																						HX_STACK_LINE(1735)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1735)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1735)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1735)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1735)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1735)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1735)
																					{
																						HX_STACK_LINE(1735)
																						ret1->x = x0;
																						HX_STACK_LINE(1735)
																						ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																						HX_STACK_LINE(1735)
																						{
																						}
																						HX_STACK_LINE(1735)
																						{
																						}
																					}
																					HX_STACK_LINE(1735)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1735)
																		p = _Function_18_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																		HX_STACK_LINE(1736)
																		{
																			HX_STACK_LINE(1736)
																			{
																			}
																			HX_STACK_LINE(1736)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1738);
																				{
																					HX_STACK_LINE(1738)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1738)
																					{
																						HX_STACK_LINE(1738)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1738)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1738)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1738)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1738)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1738)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1738)
																					{
																						HX_STACK_LINE(1738)
																						ret1->x = p->x;
																						HX_STACK_LINE(1738)
																						ret1->y = p->y;
																						HX_STACK_LINE(1738)
																						{
																						}
																						HX_STACK_LINE(1738)
																						{
																						}
																					}
																					HX_STACK_LINE(1738)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1738)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1739)
																	if ((fstx)){
																		HX_STACK_LINE(1739)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1740)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1740)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)64))) != (int)0))))))){
																			HX_STACK_LINE(1741)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1744);
												{
													HX_STACK_LINE(1745)
													::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
													HX_STACK_LINE(1746)
													if (((ret->p2 == null()))){
														HX_STACK_LINE(1746)
														ret->p2 = obj->prev = obj->next = obj;
													}
													else{
														HX_STACK_LINE(1748)
														obj->prev = ret->p2;
														HX_STACK_LINE(1749)
														obj->next = ret->p2->next;
														HX_STACK_LINE(1750)
														ret->p2->next->prev = obj;
														HX_STACK_LINE(1751)
														ret->p2->next = obj;
													}
													HX_STACK_LINE(1753)
													return obj;
												}
												return null();
											}
										};
										HX_STACK_LINE(1744)
										ret->p2 = _Function_10_1::Block(p,ret);
									}
								}
							}
							HX_STACK_LINE(1757)
							ret->p2 = ret->p2->next;
							HX_STACK_LINE(1758)
							ret->key2 = val1;
							HX_STACK_LINE(1759)
							if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val1 == (int)1)) || bool((val1 == (int)4)))) || bool((val1 == (int)16)))) || bool((val1 == (int)64)))) || bool((val1 == (int)3)))) || bool((val1 == (int)12)))) || bool((val1 == (int)48)))) || bool((val1 == (int)192)))) || bool((val1 == (int)129)))) || bool((val1 == (int)6)))) || bool((val1 == (int)24)))) || bool((val1 == (int)96)))) || bool((val1 == (int)5)))) || bool((val1 == (int)20)))) || bool((val1 == (int)80)))) || bool((val1 == (int)65)))) || bool((val1 == (int)17)))) || bool((val1 == (int)68))))){
								HX_STACK_LINE(1760)
								val1 = (int)0;
								HX_STACK_LINE(1761)
								ret->key2 = (int)0;
								HX_STACK_LINE(1762)
								ret->p2 = null();
							}
						}
						HX_STACK_LINE(1765)
						if (((val1 == (int)0))){
							HX_STACK_LINE(1766)
							ret->pr = ret->p1;
							HX_STACK_LINE(1767)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1768)
							ret->keyr = ret->key1;
						}
						else{
							HX_STACK_LINE(1771)
							ret->pr = ret->p2;
							HX_STACK_LINE(1772)
							ret->okeyr = ret->okey2;
							HX_STACK_LINE(1773)
							ret->keyr = ret->key2;
						}
					}
					else{
						HX_STACK_LINE(1777)
						int val1 = (int)14;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1778)
						{
							HX_STACK_LINE(1779)
							ret->okey1 = val1;
							HX_STACK_LINE(1780)
							{
								HX_STACK_LINE(1780)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1780)
								while(((_g < (int)8))){
									HX_STACK_LINE(1780)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1781)
									if (((((int(val1) & int((int((int)1) << int(i))))) != (int)0))){
										HX_STACK_LINE(1782)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1783)
										if (((i == (int)0))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1784);
													{
														HX_STACK_LINE(1784)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1784)
														{
															HX_STACK_LINE(1784)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1784)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1784)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1784)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1784)
																ret1->next = null();
															}
															HX_STACK_LINE(1784)
															ret1->forced = false;
														}
														HX_STACK_LINE(1784)
														{
															HX_STACK_LINE(1784)
															ret1->x = x0;
															HX_STACK_LINE(1784)
															ret1->y = y0;
															HX_STACK_LINE(1784)
															{
															}
															HX_STACK_LINE(1784)
															{
															}
														}
														HX_STACK_LINE(1784)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1784)
											p = _Function_11_1::Block(x0,y0);
											HX_STACK_LINE(1785)
											if (((bool(fstx) || bool(fsty)))){
												HX_STACK_LINE(1785)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1787)
											if (((i == (int)2))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1788);
														{
															HX_STACK_LINE(1788)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1788)
															{
																HX_STACK_LINE(1788)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1788)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1788)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1788)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1788)
																	ret1->next = null();
																}
																HX_STACK_LINE(1788)
																ret1->forced = false;
															}
															HX_STACK_LINE(1788)
															{
																HX_STACK_LINE(1788)
																ret1->x = x1;
																HX_STACK_LINE(1788)
																ret1->y = y0;
																HX_STACK_LINE(1788)
																{
																}
																HX_STACK_LINE(1788)
																{
																}
															}
															HX_STACK_LINE(1788)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1788)
												p = _Function_12_1::Block(x1,y0);
												HX_STACK_LINE(1789)
												if (((bool(sndx) || bool(fsty)))){
													HX_STACK_LINE(1789)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1791)
												if (((i == (int)4))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1792);
															{
																HX_STACK_LINE(1792)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1792)
																{
																	HX_STACK_LINE(1792)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1792)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1792)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1792)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1792)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1792)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1792)
																{
																	HX_STACK_LINE(1792)
																	ret1->x = x1;
																	HX_STACK_LINE(1792)
																	ret1->y = y1;
																	HX_STACK_LINE(1792)
																	{
																	}
																	HX_STACK_LINE(1792)
																	{
																	}
																}
																HX_STACK_LINE(1792)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1792)
													p = _Function_13_1::Block(x1,y1);
													HX_STACK_LINE(1793)
													if (((bool(sndx) || bool(sndy)))){
														HX_STACK_LINE(1793)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1795)
													if (((i == (int)6))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1796);
																{
																	HX_STACK_LINE(1796)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1796)
																	{
																		HX_STACK_LINE(1796)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1796)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1796)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1796)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1796)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1796)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1796)
																	{
																		HX_STACK_LINE(1796)
																		ret1->x = x0;
																		HX_STACK_LINE(1796)
																		ret1->y = y1;
																		HX_STACK_LINE(1796)
																		{
																		}
																		HX_STACK_LINE(1796)
																		{
																		}
																	}
																	HX_STACK_LINE(1796)
																	return ret1;
																}
																return null();
															}
														};
														HX_STACK_LINE(1796)
														p = _Function_14_1::Block(x0,y1);
														HX_STACK_LINE(1797)
														if (((bool(fstx) || bool(sndy)))){
															HX_STACK_LINE(1797)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1799)
														if (((i == (int)1))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1800);
																	{
																		HX_STACK_LINE(1800)
																		{
																		}
																		HX_STACK_LINE(1800)
																		return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1800)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1801)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1802);
																		{
																			HX_STACK_LINE(1802)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1802)
																			{
																				HX_STACK_LINE(1802)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1802)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1802)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1802)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1802)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1802)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1802)
																			{
																				HX_STACK_LINE(1802)
																				ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																				HX_STACK_LINE(1802)
																				ret1->y = y0;
																				HX_STACK_LINE(1802)
																				{
																				}
																				HX_STACK_LINE(1802)
																				{
																				}
																			}
																			HX_STACK_LINE(1802)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1802)
																p = _Function_16_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
																HX_STACK_LINE(1803)
																{
																	HX_STACK_LINE(1803)
																	{
																	}
																	HX_STACK_LINE(1803)
																	ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1805);
																		{
																			HX_STACK_LINE(1805)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1805)
																			{
																				HX_STACK_LINE(1805)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1805)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1805)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1805)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1805)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1805)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1805)
																			{
																				HX_STACK_LINE(1805)
																				ret1->x = p->x;
																				HX_STACK_LINE(1805)
																				ret1->y = p->y;
																				HX_STACK_LINE(1805)
																				{
																				}
																				HX_STACK_LINE(1805)
																				{
																				}
																			}
																			HX_STACK_LINE(1805)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1805)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1806)
															if ((fsty)){
																HX_STACK_LINE(1806)
																p->forced = true;
															}
															HX_STACK_LINE(1807)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1807)
																if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)4))) != (int)0))))))){
																	HX_STACK_LINE(1808)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1811)
															if (((i == (int)5))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1812);
																		{
																			HX_STACK_LINE(1812)
																			{
																			}
																			HX_STACK_LINE(1812)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1812)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1813)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1814);
																			{
																				HX_STACK_LINE(1814)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1814)
																				{
																					HX_STACK_LINE(1814)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1814)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1814)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1814)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1814)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1814)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1814)
																				{
																					HX_STACK_LINE(1814)
																					ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																					HX_STACK_LINE(1814)
																					ret1->y = y1;
																					HX_STACK_LINE(1814)
																					{
																					}
																					HX_STACK_LINE(1814)
																					{
																					}
																				}
																				HX_STACK_LINE(1814)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1814)
																	p = _Function_17_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																	HX_STACK_LINE(1815)
																	{
																		HX_STACK_LINE(1815)
																		{
																		}
																		HX_STACK_LINE(1815)
																		ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1817);
																			{
																				HX_STACK_LINE(1817)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1817)
																				{
																					HX_STACK_LINE(1817)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1817)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1817)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1817)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1817)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1817)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1817)
																				{
																					HX_STACK_LINE(1817)
																					ret1->x = p->x;
																					HX_STACK_LINE(1817)
																					ret1->y = p->y;
																					HX_STACK_LINE(1817)
																					{
																					}
																					HX_STACK_LINE(1817)
																					{
																					}
																				}
																				HX_STACK_LINE(1817)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1817)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1818)
																if ((sndy)){
																	HX_STACK_LINE(1818)
																	p->forced = true;
																}
																HX_STACK_LINE(1819)
																if (((bool((p->x == x0)) || bool((p->x == x1))))){
																	HX_STACK_LINE(1819)
																	if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1820)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1823)
																if (((i == (int)3))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1824);
																			{
																				HX_STACK_LINE(1824)
																				{
																				}
																				HX_STACK_LINE(1824)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1824)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1825)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1826);
																				{
																					HX_STACK_LINE(1826)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1826)
																					{
																						HX_STACK_LINE(1826)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1826)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1826)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1826)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1826)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1826)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1826)
																					{
																						HX_STACK_LINE(1826)
																						ret1->x = x1;
																						HX_STACK_LINE(1826)
																						ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																						HX_STACK_LINE(1826)
																						{
																						}
																						HX_STACK_LINE(1826)
																						{
																						}
																					}
																					HX_STACK_LINE(1826)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1826)
																		p = _Function_18_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																		HX_STACK_LINE(1827)
																		{
																			HX_STACK_LINE(1827)
																			{
																			}
																			HX_STACK_LINE(1827)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1829);
																				{
																					HX_STACK_LINE(1829)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1829)
																					{
																						HX_STACK_LINE(1829)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1829)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1829)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1829)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1829)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1829)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1829)
																					{
																						HX_STACK_LINE(1829)
																						ret1->x = p->x;
																						HX_STACK_LINE(1829)
																						ret1->y = p->y;
																						HX_STACK_LINE(1829)
																						{
																						}
																						HX_STACK_LINE(1829)
																						{
																						}
																					}
																					HX_STACK_LINE(1829)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1829)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1830)
																	if ((sndx)){
																		HX_STACK_LINE(1830)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1831)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1831)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																			HX_STACK_LINE(1832)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPArray2_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1836);
																			{
																				HX_STACK_LINE(1836)
																				{
																				}
																				HX_STACK_LINE(1836)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1836)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1837)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1838);
																				{
																					HX_STACK_LINE(1838)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1838)
																					{
																						HX_STACK_LINE(1838)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1838)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1838)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1838)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1838)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1838)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1838)
																					{
																						HX_STACK_LINE(1838)
																						ret1->x = x0;
																						HX_STACK_LINE(1838)
																						ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																						HX_STACK_LINE(1838)
																						{
																						}
																						HX_STACK_LINE(1838)
																						{
																						}
																					}
																					HX_STACK_LINE(1838)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1838)
																		p = _Function_18_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																		HX_STACK_LINE(1839)
																		{
																			HX_STACK_LINE(1839)
																			{
																			}
																			HX_STACK_LINE(1839)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1841);
																				{
																					HX_STACK_LINE(1841)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1841)
																					{
																						HX_STACK_LINE(1841)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1841)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1841)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1841)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1841)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1841)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1841)
																					{
																						HX_STACK_LINE(1841)
																						ret1->x = p->x;
																						HX_STACK_LINE(1841)
																						ret1->y = p->y;
																						HX_STACK_LINE(1841)
																						{
																						}
																						HX_STACK_LINE(1841)
																						{
																						}
																					}
																					HX_STACK_LINE(1841)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1841)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1842)
																	if ((fstx)){
																		HX_STACK_LINE(1842)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1843)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1843)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)64))) != (int)0))))))){
																			HX_STACK_LINE(1844)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1847);
												{
													HX_STACK_LINE(1848)
													::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
													HX_STACK_LINE(1849)
													if (((ret->p1 == null()))){
														HX_STACK_LINE(1849)
														ret->p1 = obj->prev = obj->next = obj;
													}
													else{
														HX_STACK_LINE(1851)
														obj->prev = ret->p1;
														HX_STACK_LINE(1852)
														obj->next = ret->p1->next;
														HX_STACK_LINE(1853)
														ret->p1->next->prev = obj;
														HX_STACK_LINE(1854)
														ret->p1->next = obj;
													}
													HX_STACK_LINE(1856)
													return obj;
												}
												return null();
											}
										};
										HX_STACK_LINE(1847)
										ret->p1 = _Function_10_1::Block(p,ret);
									}
								}
							}
							HX_STACK_LINE(1860)
							ret->p1 = ret->p1->next;
							HX_STACK_LINE(1861)
							ret->key1 = val1;
							HX_STACK_LINE(1862)
							if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val1 == (int)1)) || bool((val1 == (int)4)))) || bool((val1 == (int)16)))) || bool((val1 == (int)64)))) || bool((val1 == (int)3)))) || bool((val1 == (int)12)))) || bool((val1 == (int)48)))) || bool((val1 == (int)192)))) || bool((val1 == (int)129)))) || bool((val1 == (int)6)))) || bool((val1 == (int)24)))) || bool((val1 == (int)96)))) || bool((val1 == (int)5)))) || bool((val1 == (int)20)))) || bool((val1 == (int)80)))) || bool((val1 == (int)65)))) || bool((val1 == (int)17)))) || bool((val1 == (int)68))))){
								HX_STACK_LINE(1863)
								val1 = (int)0;
								HX_STACK_LINE(1864)
								ret->key1 = (int)0;
								HX_STACK_LINE(1865)
								ret->p1 = null();
							}
						}
						HX_STACK_LINE(1868)
						if (((val1 == (int)0))){
							HX_STACK_LINE(1868)
							ret = null();
						}
						else{
							HX_STACK_LINE(1870)
							ret->pr = ret->p1;
							HX_STACK_LINE(1871)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1872)
							ret->keyr = ret->key1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(1878)
		return ret;
	}
	HX_STACK_LINE(964)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC14(ZPP_MarchingSquares_obj,marchSquare,return )

bool ZPP_MarchingSquares_obj::comb( int flag){
	HX_STACK_PUSH("ZPP_MarchingSquares::comb","zpp_nape/geom/MarchingSquares.hx",946);
	HX_STACK_THIS(this);
	HX_STACK_ARG(flag,"flag");
	HX_STACK_LINE(947)
	int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(948)
	if (((((int(flag) & int((int)1))) != (int)0))){
		HX_STACK_LINE(948)
		(cnt)++;
	}
	HX_STACK_LINE(949)
	if (((((int(flag) & int((int)2))) != (int)0))){
		HX_STACK_LINE(949)
		(cnt)++;
	}
	HX_STACK_LINE(950)
	if (((((int(flag) & int((int)4))) != (int)0))){
		HX_STACK_LINE(950)
		(cnt)++;
	}
	HX_STACK_LINE(951)
	return (cnt >= (int)2);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,comb,return )

bool ZPP_MarchingSquares_obj::combDown( int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::combDown","zpp_nape/geom/MarchingSquares.hx",940);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(941)
	int flag = (int(((int(key) & int((int)112)))) >> int((int)4));		HX_STACK_VAR(flag,"flag");
	struct _Function_1_1{
		inline static bool Block( int &flag){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",942);
			{
				HX_STACK_LINE(942)
				int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
				HX_STACK_LINE(942)
				if (((((int(flag) & int((int)1))) != (int)0))){
					HX_STACK_LINE(942)
					(cnt)++;
				}
				HX_STACK_LINE(942)
				if (((((int(flag) & int((int)2))) != (int)0))){
					HX_STACK_LINE(942)
					(cnt)++;
				}
				HX_STACK_LINE(942)
				if (((((int(flag) & int((int)4))) != (int)0))){
					HX_STACK_LINE(942)
					(cnt)++;
				}
				HX_STACK_LINE(942)
				return (cnt >= (int)2);
			}
			return null();
		}
	};
	HX_STACK_LINE(942)
	return _Function_1_1::Block(flag);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combDown,return )

bool ZPP_MarchingSquares_obj::combUp( int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::combUp","zpp_nape/geom/MarchingSquares.hx",934);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(935)
	int flag = (int(key) & int((int)7));		HX_STACK_VAR(flag,"flag");
	struct _Function_1_1{
		inline static bool Block( int &flag){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",936);
			{
				HX_STACK_LINE(936)
				int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
				HX_STACK_LINE(936)
				if (((((int(flag) & int((int)1))) != (int)0))){
					HX_STACK_LINE(936)
					(cnt)++;
				}
				HX_STACK_LINE(936)
				if (((((int(flag) & int((int)2))) != (int)0))){
					HX_STACK_LINE(936)
					(cnt)++;
				}
				HX_STACK_LINE(936)
				if (((((int(flag) & int((int)4))) != (int)0))){
					HX_STACK_LINE(936)
					(cnt)++;
				}
				HX_STACK_LINE(936)
				return (cnt >= (int)2);
			}
			return null();
		}
	};
	HX_STACK_LINE(936)
	return _Function_1_1::Block(flag);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combUp,return )

bool ZPP_MarchingSquares_obj::combRight( int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::combRight","zpp_nape/geom/MarchingSquares.hx",928);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(929)
	int flag = (int(((int(key) & int((int)28)))) >> int((int)2));		HX_STACK_VAR(flag,"flag");
	struct _Function_1_1{
		inline static bool Block( int &flag){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",930);
			{
				HX_STACK_LINE(930)
				int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
				HX_STACK_LINE(930)
				if (((((int(flag) & int((int)1))) != (int)0))){
					HX_STACK_LINE(930)
					(cnt)++;
				}
				HX_STACK_LINE(930)
				if (((((int(flag) & int((int)2))) != (int)0))){
					HX_STACK_LINE(930)
					(cnt)++;
				}
				HX_STACK_LINE(930)
				if (((((int(flag) & int((int)4))) != (int)0))){
					HX_STACK_LINE(930)
					(cnt)++;
				}
				HX_STACK_LINE(930)
				return (cnt >= (int)2);
			}
			return null();
		}
	};
	HX_STACK_LINE(930)
	return _Function_1_1::Block(flag);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combRight,return )

bool ZPP_MarchingSquares_obj::combLeft( int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::combLeft","zpp_nape/geom/MarchingSquares.hx",922);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(923)
	int flag = (int((int(key) & int((int)1))) | int((int(((int(key) & int((int)192)))) >> int((int)5))));		HX_STACK_VAR(flag,"flag");
	struct _Function_1_1{
		inline static bool Block( int &flag){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",924);
			{
				HX_STACK_LINE(924)
				int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
				HX_STACK_LINE(924)
				if (((((int(flag) & int((int)1))) != (int)0))){
					HX_STACK_LINE(924)
					(cnt)++;
				}
				HX_STACK_LINE(924)
				if (((((int(flag) & int((int)2))) != (int)0))){
					HX_STACK_LINE(924)
					(cnt)++;
				}
				HX_STACK_LINE(924)
				if (((((int(flag) & int((int)4))) != (int)0))){
					HX_STACK_LINE(924)
					(cnt)++;
				}
				HX_STACK_LINE(924)
				return (cnt >= (int)2);
			}
			return null();
		}
	};
	HX_STACK_LINE(924)
	return _Function_1_1::Block(flag);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combLeft,return )

Void ZPP_MarchingSquares_obj::combUD_virtual( ::zpp_nape::geom::ZPP_MarchPair a,::zpp_nape::geom::ZPP_MarchPair b){
{
		HX_STACK_PUSH("ZPP_MarchingSquares::combUD_virtual","zpp_nape/geom/MarchingSquares.hx",911);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(912)
		::zpp_nape::geom::ZPP_GeomVert ad = (  (((bool((a->p2 != null())) && bool((a->key2 == (int)56))))) ? ::zpp_nape::geom::ZPP_GeomVert(a->p2) : ::zpp_nape::geom::ZPP_GeomVert(a->p1) );		HX_STACK_VAR(ad,"ad");
		HX_STACK_LINE(913)
		::zpp_nape::geom::ZPP_GeomVert bu = (  (((bool((b->p2 != null())) && bool((b->key2 == (int)14))))) ? ::zpp_nape::geom::ZPP_GeomVert(b->p2) : ::zpp_nape::geom::ZPP_GeomVert(b->p1) );		HX_STACK_VAR(bu,"bu");
		HX_STACK_LINE(914)
		::zpp_nape::geom::ZPP_GeomVert ap = a->pd;		HX_STACK_VAR(ap,"ap");
		HX_STACK_LINE(915)
		::zpp_nape::geom::ZPP_GeomVert bp = bu;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(916)
		::zpp_nape::geom::ZPP_GeomVert ap2 = ap->prev;		HX_STACK_VAR(ap2,"ap2");
		HX_STACK_LINE(917)
		::zpp_nape::geom::ZPP_GeomVert bp2 = bp->next;		HX_STACK_VAR(bp2,"bp2");
		HX_STACK_LINE(918)
		ap->forced = bp->forced = ap2->forced = bp2->forced = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,combUD_virtual,(void))

Void ZPP_MarchingSquares_obj::combUD( ::zpp_nape::geom::ZPP_MarchPair a,::zpp_nape::geom::ZPP_MarchPair b){
{
		HX_STACK_PUSH("ZPP_MarchingSquares::combUD","zpp_nape/geom/MarchingSquares.hx",864);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(865)
		::zpp_nape::geom::ZPP_GeomVert ad = (  (((bool((a->p2 != null())) && bool((a->key2 == (int)56))))) ? ::zpp_nape::geom::ZPP_GeomVert(a->p2) : ::zpp_nape::geom::ZPP_GeomVert(a->p1) );		HX_STACK_VAR(ad,"ad");
		HX_STACK_LINE(866)
		::zpp_nape::geom::ZPP_GeomVert bu = (  (((bool((b->p2 != null())) && bool((b->key2 == (int)14))))) ? ::zpp_nape::geom::ZPP_GeomVert(b->p2) : ::zpp_nape::geom::ZPP_GeomVert(b->p1) );		HX_STACK_VAR(bu,"bu");
		HX_STACK_LINE(867)
		::zpp_nape::geom::ZPP_GeomVert ap = a->pd;		HX_STACK_VAR(ap,"ap");
		HX_STACK_LINE(868)
		::zpp_nape::geom::ZPP_GeomVert bp = bu;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(869)
		::zpp_nape::geom::ZPP_GeomVert ap2 = ap->prev;		HX_STACK_VAR(ap2,"ap2");
		HX_STACK_LINE(870)
		::zpp_nape::geom::ZPP_GeomVert bp2 = bp->next;		HX_STACK_VAR(bp2,"bp2");
		HX_STACK_LINE(871)
		bp->next = ap->next;
		HX_STACK_LINE(872)
		ap->next->prev = bp;
		HX_STACK_LINE(873)
		{
			HX_STACK_LINE(874)
			::zpp_nape::geom::ZPP_GeomVert o = ap;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(875)
			{
			}
			HX_STACK_LINE(883)
			{
				HX_STACK_LINE(883)
				if (((o->wrap != null()))){
					HX_STACK_LINE(883)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(883)
					{
						HX_STACK_LINE(883)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(883)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(883)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(883)
						{
							HX_STACK_LINE(883)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(883)
							if ((_this1->_immutable)){
								HX_STACK_LINE(883)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(883)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(883)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(883)
						if ((_this->zpp_inner->_inuse)){
							HX_STACK_LINE(883)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(883)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(883)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(883)
						_this->zpp_inner = null();
						HX_STACK_LINE(883)
						{
							HX_STACK_LINE(883)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(883)
							{
							}
							HX_STACK_LINE(883)
							o1->zpp_pool = null();
							HX_STACK_LINE(883)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(883)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(883)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(883)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(883)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(883)
						{
							HX_STACK_LINE(883)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(883)
							{
							}
							HX_STACK_LINE(883)
							{
								HX_STACK_LINE(883)
								if (((o1->outer != null()))){
									HX_STACK_LINE(883)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(883)
									o1->outer = null();
								}
								HX_STACK_LINE(883)
								o1->_isimmutable = null();
								HX_STACK_LINE(883)
								o1->_validate = null();
								HX_STACK_LINE(883)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(883)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(883)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(883)
					o->wrap = null();
				}
				HX_STACK_LINE(883)
				o->prev = o->next = null();
			}
			HX_STACK_LINE(884)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(885)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(890)
		bp2->prev = ap2->prev;
		HX_STACK_LINE(891)
		ap2->prev->next = bp2;
		HX_STACK_LINE(892)
		if (((ap2 == a->p1))){
			HX_STACK_LINE(892)
			a->p1 = bp2;
		}
		HX_STACK_LINE(893)
		{
			HX_STACK_LINE(894)
			::zpp_nape::geom::ZPP_GeomVert o = ap2;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(895)
			{
			}
			HX_STACK_LINE(903)
			{
				HX_STACK_LINE(903)
				if (((o->wrap != null()))){
					HX_STACK_LINE(903)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(903)
					{
						HX_STACK_LINE(903)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(903)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(903)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(903)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(903)
							if ((_this1->_immutable)){
								HX_STACK_LINE(903)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(903)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(903)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(903)
						if ((_this->zpp_inner->_inuse)){
							HX_STACK_LINE(903)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(903)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(903)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(903)
						_this->zpp_inner = null();
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(903)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(903)
							{
							}
							HX_STACK_LINE(903)
							o1->zpp_pool = null();
							HX_STACK_LINE(903)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(903)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(903)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(903)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(903)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(903)
						{
							HX_STACK_LINE(903)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(903)
							{
							}
							HX_STACK_LINE(903)
							{
								HX_STACK_LINE(903)
								if (((o1->outer != null()))){
									HX_STACK_LINE(903)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(903)
									o1->outer = null();
								}
								HX_STACK_LINE(903)
								o1->_isimmutable = null();
								HX_STACK_LINE(903)
								o1->_validate = null();
								HX_STACK_LINE(903)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(903)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(903)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(903)
					o->wrap = null();
				}
				HX_STACK_LINE(903)
				o->prev = o->next = null();
			}
			HX_STACK_LINE(904)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(905)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,combUD,(void))

Void ZPP_MarchingSquares_obj::combLR( ::zpp_nape::geom::ZPP_MarchPair a,::zpp_nape::geom::ZPP_MarchPair b){
{
		HX_STACK_PUSH("ZPP_MarchingSquares::combLR","zpp_nape/geom/MarchingSquares.hx",771);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		struct _Function_1_1{
			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_MarchPair &a){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",772);
				{
					HX_STACK_LINE(772)
					::zpp_nape::geom::ZPP_GeomVert poly = a->pr;		HX_STACK_VAR(poly,"poly");
					HX_STACK_LINE(772)
					int kind = (int(a->okeyr) & int((int)7));		HX_STACK_VAR(kind,"kind");
					HX_STACK_LINE(772)
					return (  (((kind == (int)0))) ? ::zpp_nape::geom::ZPP_GeomVert(poly) : ::zpp_nape::geom::ZPP_GeomVert((  (((kind == (int)3))) ? ::zpp_nape::geom::ZPP_GeomVert(poly->next->next) : ::zpp_nape::geom::ZPP_GeomVert(poly->next) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(772)
		::zpp_nape::geom::ZPP_GeomVert ap = _Function_1_1::Block(a);		HX_STACK_VAR(ap,"ap");
		struct _Function_1_2{
			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_MarchPair &b){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",773);
				{
					HX_STACK_LINE(773)
					::zpp_nape::geom::ZPP_GeomVert poly = b->p1;		HX_STACK_VAR(poly,"poly");
					HX_STACK_LINE(773)
					return (  (((((int(b->okey1) & int((int)1))) == (int)0))) ? ::zpp_nape::geom::ZPP_GeomVert(poly->prev) : ::zpp_nape::geom::ZPP_GeomVert(poly) );
				}
				return null();
			}
		};
		HX_STACK_LINE(773)
		::zpp_nape::geom::ZPP_GeomVert bp = _Function_1_2::Block(b);		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(774)
		::zpp_nape::geom::ZPP_GeomVert ap2 = ap->next;		HX_STACK_VAR(ap2,"ap2");
		HX_STACK_LINE(775)
		::zpp_nape::geom::ZPP_GeomVert bp2 = bp->prev;		HX_STACK_VAR(bp2,"bp2");
		HX_STACK_LINE(776)
		if (((((int(a->keyr) & int((int)4))) != (int)0))){
			HX_STACK_LINE(777)
			if (((b->pr == b->p1))){
				HX_STACK_LINE(777)
				b->pr = ap->prev;
			}
			HX_STACK_LINE(778)
			b->p1 = ap->prev;
			HX_STACK_LINE(779)
			ap->prev->next = bp->next;
			HX_STACK_LINE(780)
			bp->next->prev = ap->prev;
			HX_STACK_LINE(781)
			{
				HX_STACK_LINE(782)
				::zpp_nape::geom::ZPP_GeomVert o = ap;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(783)
				{
				}
				HX_STACK_LINE(791)
				{
					HX_STACK_LINE(791)
					if (((o->wrap != null()))){
						HX_STACK_LINE(791)
						o->wrap->zpp_inner->_inuse = false;
						HX_STACK_LINE(791)
						{
							HX_STACK_LINE(791)
							::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(791)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(791)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(791)
							{
								HX_STACK_LINE(791)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(791)
								if ((_this1->_immutable)){
									HX_STACK_LINE(791)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(791)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(791)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(791)
							if ((_this->zpp_inner->_inuse)){
								HX_STACK_LINE(791)
								hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
							}
							HX_STACK_LINE(791)
							::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(791)
							_this->zpp_inner->outer = null();
							HX_STACK_LINE(791)
							_this->zpp_inner = null();
							HX_STACK_LINE(791)
							{
								HX_STACK_LINE(791)
								::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(791)
								{
								}
								HX_STACK_LINE(791)
								o1->zpp_pool = null();
								HX_STACK_LINE(791)
								if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
									HX_STACK_LINE(791)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
								}
								else{
									HX_STACK_LINE(791)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
								}
								HX_STACK_LINE(791)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
								HX_STACK_LINE(791)
								o1->zpp_disp = true;
							}
							HX_STACK_LINE(791)
							{
								HX_STACK_LINE(791)
								::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(791)
								{
								}
								HX_STACK_LINE(791)
								{
									HX_STACK_LINE(791)
									if (((o1->outer != null()))){
										HX_STACK_LINE(791)
										o1->outer->zpp_inner = null();
										HX_STACK_LINE(791)
										o1->outer = null();
									}
									HX_STACK_LINE(791)
									o1->_isimmutable = null();
									HX_STACK_LINE(791)
									o1->_validate = null();
									HX_STACK_LINE(791)
									o1->_invalidate = null();
								}
								HX_STACK_LINE(791)
								o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(791)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
							}
						}
						HX_STACK_LINE(791)
						o->wrap = null();
					}
					HX_STACK_LINE(791)
					o->prev = o->next = null();
				}
				HX_STACK_LINE(792)
				o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(793)
				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
			}
		}
		else{
			HX_STACK_LINE(800)
			ap->next = bp->next;
			HX_STACK_LINE(801)
			bp->next->prev = ap;
		}
		HX_STACK_LINE(803)
		{
			HX_STACK_LINE(804)
			::zpp_nape::geom::ZPP_GeomVert o = bp;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(805)
			{
			}
			HX_STACK_LINE(813)
			{
				HX_STACK_LINE(813)
				if (((o->wrap != null()))){
					HX_STACK_LINE(813)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(813)
					{
						HX_STACK_LINE(813)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(813)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(813)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(813)
						{
							HX_STACK_LINE(813)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(813)
							if ((_this1->_immutable)){
								HX_STACK_LINE(813)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(813)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(813)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(813)
						if ((_this->zpp_inner->_inuse)){
							HX_STACK_LINE(813)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(813)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(813)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(813)
						_this->zpp_inner = null();
						HX_STACK_LINE(813)
						{
							HX_STACK_LINE(813)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(813)
							{
							}
							HX_STACK_LINE(813)
							o1->zpp_pool = null();
							HX_STACK_LINE(813)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(813)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(813)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(813)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(813)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(813)
						{
							HX_STACK_LINE(813)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(813)
							{
							}
							HX_STACK_LINE(813)
							{
								HX_STACK_LINE(813)
								if (((o1->outer != null()))){
									HX_STACK_LINE(813)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(813)
									o1->outer = null();
								}
								HX_STACK_LINE(813)
								o1->_isimmutable = null();
								HX_STACK_LINE(813)
								o1->_validate = null();
								HX_STACK_LINE(813)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(813)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(813)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(813)
					o->wrap = null();
				}
				HX_STACK_LINE(813)
				o->prev = o->next = null();
			}
			HX_STACK_LINE(814)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(815)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(820)
		if (((((int(a->keyr) & int((int)16))) != (int)0))){
			HX_STACK_LINE(821)
			b->pd = ap2->next;
			HX_STACK_LINE(822)
			ap2->next->prev = bp2->prev;
			HX_STACK_LINE(823)
			bp2->prev->next = ap2->next;
			HX_STACK_LINE(824)
			{
				HX_STACK_LINE(825)
				::zpp_nape::geom::ZPP_GeomVert o = ap2;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(826)
				{
				}
				HX_STACK_LINE(834)
				{
					HX_STACK_LINE(834)
					if (((o->wrap != null()))){
						HX_STACK_LINE(834)
						o->wrap->zpp_inner->_inuse = false;
						HX_STACK_LINE(834)
						{
							HX_STACK_LINE(834)
							::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(834)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(834)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(834)
							{
								HX_STACK_LINE(834)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(834)
								if ((_this1->_immutable)){
									HX_STACK_LINE(834)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(834)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(834)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(834)
							if ((_this->zpp_inner->_inuse)){
								HX_STACK_LINE(834)
								hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
							}
							HX_STACK_LINE(834)
							::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(834)
							_this->zpp_inner->outer = null();
							HX_STACK_LINE(834)
							_this->zpp_inner = null();
							HX_STACK_LINE(834)
							{
								HX_STACK_LINE(834)
								::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(834)
								{
								}
								HX_STACK_LINE(834)
								o1->zpp_pool = null();
								HX_STACK_LINE(834)
								if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
									HX_STACK_LINE(834)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
								}
								else{
									HX_STACK_LINE(834)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
								}
								HX_STACK_LINE(834)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
								HX_STACK_LINE(834)
								o1->zpp_disp = true;
							}
							HX_STACK_LINE(834)
							{
								HX_STACK_LINE(834)
								::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(834)
								{
								}
								HX_STACK_LINE(834)
								{
									HX_STACK_LINE(834)
									if (((o1->outer != null()))){
										HX_STACK_LINE(834)
										o1->outer->zpp_inner = null();
										HX_STACK_LINE(834)
										o1->outer = null();
									}
									HX_STACK_LINE(834)
									o1->_isimmutable = null();
									HX_STACK_LINE(834)
									o1->_validate = null();
									HX_STACK_LINE(834)
									o1->_invalidate = null();
								}
								HX_STACK_LINE(834)
								o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(834)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
							}
						}
						HX_STACK_LINE(834)
						o->wrap = null();
					}
					HX_STACK_LINE(834)
					o->prev = o->next = null();
				}
				HX_STACK_LINE(835)
				o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(836)
				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
			}
		}
		else{
			HX_STACK_LINE(843)
			ap2->prev = bp2->prev;
			HX_STACK_LINE(844)
			bp2->prev->next = ap2;
		}
		HX_STACK_LINE(846)
		{
			HX_STACK_LINE(847)
			::zpp_nape::geom::ZPP_GeomVert o = bp2;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(848)
			{
			}
			HX_STACK_LINE(856)
			{
				HX_STACK_LINE(856)
				if (((o->wrap != null()))){
					HX_STACK_LINE(856)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(856)
					{
						HX_STACK_LINE(856)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(856)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(856)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(856)
						{
							HX_STACK_LINE(856)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(856)
							if ((_this1->_immutable)){
								HX_STACK_LINE(856)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(856)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(856)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(856)
						if ((_this->zpp_inner->_inuse)){
							HX_STACK_LINE(856)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(856)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(856)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(856)
						_this->zpp_inner = null();
						HX_STACK_LINE(856)
						{
							HX_STACK_LINE(856)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(856)
							{
							}
							HX_STACK_LINE(856)
							o1->zpp_pool = null();
							HX_STACK_LINE(856)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(856)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(856)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(856)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(856)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(856)
						{
							HX_STACK_LINE(856)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(856)
							{
							}
							HX_STACK_LINE(856)
							{
								HX_STACK_LINE(856)
								if (((o1->outer != null()))){
									HX_STACK_LINE(856)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(856)
									o1->outer = null();
								}
								HX_STACK_LINE(856)
								o1->_isimmutable = null();
								HX_STACK_LINE(856)
								o1->_validate = null();
								HX_STACK_LINE(856)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(856)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(856)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(856)
					o->wrap = null();
				}
				HX_STACK_LINE(856)
				o->prev = o->next = null();
			}
			HX_STACK_LINE(857)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(858)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,combLR,(void))

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkup( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::linkup","zpp_nape/geom/MarchingSquares.hx",768);
	HX_STACK_THIS(this);
	HX_STACK_ARG(poly,"poly");
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(768)
	return poly;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkup,return )

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkdown( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::linkdown","zpp_nape/geom/MarchingSquares.hx",763);
	HX_STACK_THIS(this);
	HX_STACK_ARG(poly,"poly");
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(763)
	return (  (((((int(key) & int((int)128))) == (int)0))) ? ::zpp_nape::geom::ZPP_GeomVert(poly->prev) : ::zpp_nape::geom::ZPP_GeomVert(poly->prev->prev) );
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkdown,return )

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkleft( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::linkleft","zpp_nape/geom/MarchingSquares.hx",758);
	HX_STACK_THIS(this);
	HX_STACK_ARG(poly,"poly");
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(758)
	return (  (((((int(key) & int((int)1))) == (int)0))) ? ::zpp_nape::geom::ZPP_GeomVert(poly->prev) : ::zpp_nape::geom::ZPP_GeomVert(poly) );
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkleft,return )

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkright( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::linkright","zpp_nape/geom/MarchingSquares.hx",750);
	HX_STACK_THIS(this);
	HX_STACK_ARG(poly,"poly");
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(751)
	int kind = (int(key) & int((int)7));		HX_STACK_VAR(kind,"kind");
	HX_STACK_LINE(752)
	if (((kind == (int)0))){
		HX_STACK_LINE(752)
		return poly;
	}
	else{
		HX_STACK_LINE(753)
		if (((kind == (int)3))){
			HX_STACK_LINE(753)
			return poly->next->next;
		}
		else{
			HX_STACK_LINE(754)
			return poly->next;
		}
	}
	HX_STACK_LINE(752)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkright,return )

Void ZPP_MarchingSquares_obj::output( ::nape::geom::GeomPolyList ret,::zpp_nape::geom::ZPP_GeomVert poly){
{
		HX_STACK_PUSH("ZPP_MarchingSquares::output","zpp_nape/geom/MarchingSquares.hx",662);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ret,"ret");
		HX_STACK_ARG(poly,"poly");
		struct _Function_1_1{
			inline static bool Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",667);
				{
					struct _Function_2_1{
						inline static Float Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",668);
							{
								HX_STACK_LINE(669)
								{
								}
								HX_STACK_LINE(693)
								Float area = 0.0;		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(694)
								{
									HX_STACK_LINE(695)
									::zpp_nape::geom::ZPP_GeomVert F = poly;		HX_STACK_VAR(F,"F");
									HX_STACK_LINE(696)
									::zpp_nape::geom::ZPP_GeomVert L = poly;		HX_STACK_VAR(L,"L");
									HX_STACK_LINE(697)
									if (((F != null()))){
										HX_STACK_LINE(698)
										::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
										HX_STACK_LINE(699)
										do{
											HX_STACK_LINE(700)
											::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(701)
											hx::AddEq(area,(v->x * ((v->next->y - v->prev->y))));
											HX_STACK_LINE(706)
											nite = nite->next;
										}
while(((nite != L)));
									}
								}
								HX_STACK_LINE(711)
								return (area * 0.5);
							}
							return null();
						}
					};
					HX_STACK_LINE(668)
					Float a = _Function_2_1::Block(poly);		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(713)
					return ((a * a) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon));
				}
				return null();
			}
		};
		HX_STACK_LINE(663)
		if (((  (((bool((bool((poly == null())) || bool((poly->next == poly)))) || bool((poly->next == poly->prev))))) ? bool(true) : bool(_Function_1_1::Block(poly)) ))){
			HX_STACK_LINE(716)
			while((!(((poly == null()))))){
				struct _Function_3_1{
					inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",717);
						{
							HX_STACK_LINE(718)
							{
							}
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",726);
									{
										HX_STACK_LINE(727)
										poly->next = poly->prev = null();
										HX_STACK_LINE(728)
										{
										}
										HX_STACK_LINE(729)
										return poly = null();
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",731);
									{
										HX_STACK_LINE(732)
										::zpp_nape::geom::ZPP_GeomVert retnodes = poly->next;		HX_STACK_VAR(retnodes,"retnodes");
										HX_STACK_LINE(733)
										poly->prev->next = poly->next;
										HX_STACK_LINE(734)
										poly->next->prev = poly->prev;
										HX_STACK_LINE(735)
										poly->next = poly->prev = null();
										HX_STACK_LINE(736)
										{
										}
										HX_STACK_LINE(737)
										poly = null();
										HX_STACK_LINE(738)
										return retnodes;
									}
									return null();
								}
							};
							HX_STACK_LINE(726)
							return (  (((bool((poly != null())) && bool((poly->prev == poly))))) ? ::zpp_nape::geom::ZPP_GeomVert(_Function_4_1::Block(poly)) : ::zpp_nape::geom::ZPP_GeomVert(_Function_4_2::Block(poly)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(717)
				poly = _Function_3_1::Block(poly);
			}
			HX_STACK_LINE(742)
			return null();
		}
		HX_STACK_LINE(744)
		::nape::geom::GeomPoly gp = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(gp,"gp");
		HX_STACK_LINE(745)
		gp->zpp_inner->vertices = poly;
		HX_STACK_LINE(746)
		if ((ret->zpp_inner->reverse_flag)){
			HX_STACK_LINE(746)
			ret->push(gp);
		}
		else{
			HX_STACK_LINE(746)
			ret->unshift(gp);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,output,(void))

::zpp_nape::geom::ZPP_MarchingSquares ZPP_MarchingSquares_obj::me;

::zpp_nape::util::ZNPArray2_Float ZPP_MarchingSquares_obj::isos;

::zpp_nape::util::ZNPArray2_ZPP_GeomVert ZPP_MarchingSquares_obj::ints;

::zpp_nape::util::ZNPArray2_ZPP_MarchPair ZPP_MarchingSquares_obj::map;

Void ZPP_MarchingSquares_obj::run( Dynamic iso,Float bx0,Float by0,Float bx1,Float by1,::nape::geom::Vec2 cell,int quality,bool combine,::nape::geom::GeomPolyList ret){
{
		HX_STACK_PUSH("ZPP_MarchingSquares::run","zpp_nape/geom/MarchingSquares.hx",276);
		HX_STACK_ARG(iso,"iso");
		HX_STACK_ARG(bx0,"bx0");
		HX_STACK_ARG(by0,"by0");
		HX_STACK_ARG(bx1,"bx1");
		HX_STACK_ARG(by1,"by1");
		HX_STACK_ARG(cell,"cell");
		HX_STACK_ARG(quality,"quality");
		HX_STACK_ARG(combine,"combine");
		HX_STACK_ARG(ret,"ret");
		struct _Function_1_1{
			inline static Float Block( ::nape::geom::Vec2 &cell){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",277);
				{
					HX_STACK_LINE(277)
					if (((bool((cell != null())) && bool(cell->zpp_disp)))){
						HX_STACK_LINE(277)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(277)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(277)
							_this->_validate();
						}
					}
					HX_STACK_LINE(277)
					return cell->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(277)
		Float xp = (Float(((bx1 - bx0))) / Float(_Function_1_1::Block(cell)));		HX_STACK_VAR(xp,"xp");
		HX_STACK_LINE(278)
		int xn = ::Std_obj::_int(xp);		HX_STACK_VAR(xn,"xn");
		struct _Function_1_2{
			inline static Float Block( ::nape::geom::Vec2 &cell){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",279);
				{
					HX_STACK_LINE(279)
					if (((bool((cell != null())) && bool(cell->zpp_disp)))){
						HX_STACK_LINE(279)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(279)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(279)
							_this->_validate();
						}
					}
					HX_STACK_LINE(279)
					return cell->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(279)
		Float yp = (Float(((by1 - by0))) / Float(_Function_1_2::Block(cell)));		HX_STACK_VAR(yp,"yp");
		HX_STACK_LINE(280)
		int yn = ::Std_obj::_int(yp);		HX_STACK_VAR(yn,"yn");
		HX_STACK_LINE(281)
		if (((xp != xn))){
			HX_STACK_LINE(281)
			(xn)++;
		}
		HX_STACK_LINE(282)
		if (((yp != yn))){
			HX_STACK_LINE(282)
			(yn)++;
		}
		HX_STACK_LINE(283)
		if ((combine)){
			HX_STACK_LINE(283)
			if (((::zpp_nape::geom::ZPP_MarchingSquares_obj::map == null()))){
				HX_STACK_LINE(284)
				::zpp_nape::geom::ZPP_MarchingSquares_obj::map = ::zpp_nape::util::ZNPArray2_ZPP_MarchPair_obj::__new(xn,yn);
			}
			else{
				HX_STACK_LINE(287)
				::zpp_nape::geom::ZPP_MarchingSquares_obj::map->resize(xn,yn,null());
			}
		}
		HX_STACK_LINE(291)
		if (((::zpp_nape::geom::ZPP_MarchingSquares_obj::isos == null()))){
			HX_STACK_LINE(291)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::isos = ::zpp_nape::util::ZNPArray2_Float_obj::__new((xn + (int)1),(yn + (int)1));
		}
		else{
			HX_STACK_LINE(294)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::isos->resize((xn + (int)1),(yn + (int)1),(int)0);
		}
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (yn + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(297)
			while(((_g1 < _g))){
				HX_STACK_LINE(297)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &cell){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",298);
						{
							HX_STACK_LINE(298)
							if (((bool((cell != null())) && bool(cell->zpp_disp)))){
								HX_STACK_LINE(298)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(298)
							{
								HX_STACK_LINE(298)
								::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(298)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(298)
									_this->_validate();
								}
							}
							HX_STACK_LINE(298)
							return cell->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(298)
				Float yc = (  (((y == (int)0))) ? Float(by0) : Float((  (((y <= yn))) ? Float((by0 + (_Function_3_1::Block(cell) * y))) : Float(by1) )) );		HX_STACK_VAR(yc,"yc");
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = (xn + (int)1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(299)
					while(((_g3 < _g2))){
						HX_STACK_LINE(299)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &cell){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",300);
								{
									HX_STACK_LINE(300)
									if (((bool((cell != null())) && bool(cell->zpp_disp)))){
										HX_STACK_LINE(300)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(300)
									{
										HX_STACK_LINE(300)
										::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(300)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(300)
											_this->_validate();
										}
									}
									HX_STACK_LINE(300)
									return cell->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(300)
						Float xc = (  (((x == (int)0))) ? Float(bx0) : Float((  (((x <= xn))) ? Float((bx0 + (_Function_5_1::Block(cell) * x))) : Float(bx1) )) );		HX_STACK_VAR(xc,"xc");
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							::zpp_nape::util::ZNPArray2_Float _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::isos;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(301)
							{
							}
							HX_STACK_LINE(301)
							_this->list[((y * _this->width) + x)] = iso(xc,yc).Cast< Float >();
						}
					}
				}
			}
		}
		HX_STACK_LINE(304)
		if (((::zpp_nape::geom::ZPP_MarchingSquares_obj::ints == null()))){
			HX_STACK_LINE(304)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::ints = ::zpp_nape::util::ZNPArray2_ZPP_GeomVert_obj::__new((xn + (int)1),(((int(yn) << int((int)1))) + (int)1));
		}
		else{
			HX_STACK_LINE(307)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::ints->resize((xn + (int)1),(((int(yn) << int((int)1))) + (int)1),null());
		}
		HX_STACK_LINE(310)
		::zpp_nape::geom::ZPP_MarchSpan spans = null();		HX_STACK_VAR(spans,"spans");
		HX_STACK_LINE(311)
		if ((combine)){
			HX_STACK_LINE(313)
			if (((::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool == null()))){
				HX_STACK_LINE(313)
				spans = ::zpp_nape::geom::ZPP_MarchSpan_obj::__new();
			}
			else{
				HX_STACK_LINE(320)
				spans = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;
				HX_STACK_LINE(321)
				::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = spans->next;
				HX_STACK_LINE(322)
				spans->next = null();
			}
			HX_STACK_LINE(327)
			{
				HX_STACK_LINE(327)
				spans->out = false;
				HX_STACK_LINE(327)
				spans->rank = (int)0;
			}
		}
		HX_STACK_LINE(330)
		Float py = by0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(331)
		{
			HX_STACK_LINE(331)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(331)
			while(((_g < yn))){
				HX_STACK_LINE(331)
				int y = (_g)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(332)
				Float y0 = py;		HX_STACK_VAR(y0,"y0");
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &cell){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",333);
						{
							HX_STACK_LINE(333)
							if (((bool((cell != null())) && bool(cell->zpp_disp)))){
								HX_STACK_LINE(333)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(333)
							{
								HX_STACK_LINE(333)
								::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(333)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(333)
									_this->_validate();
								}
							}
							HX_STACK_LINE(333)
							return cell->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(333)
				Float y1 = (  (((y == (yn - (int)1)))) ? Float(by1) : Float((by0 + (_Function_3_1::Block(cell) * ((y + (int)1))))) );		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(334)
				py = y1;
				HX_STACK_LINE(335)
				Float px = bx0;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(336)
				::zpp_nape::geom::ZPP_MarchPair pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(337)
					while(((_g1 < xn))){
						HX_STACK_LINE(337)
						int x = (_g1)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(338)
						Float x0 = px;		HX_STACK_VAR(x0,"x0");
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &cell){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",339);
								{
									HX_STACK_LINE(339)
									if (((bool((cell != null())) && bool(cell->zpp_disp)))){
										HX_STACK_LINE(339)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(339)
									{
										HX_STACK_LINE(339)
										::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(339)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(339)
											_this->_validate();
										}
									}
									HX_STACK_LINE(339)
									return cell->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(339)
						Float x1 = (  (((x == (xn - (int)1)))) ? Float(bx1) : Float((bx0 + (_Function_5_1::Block(cell) * ((x + (int)1))))) );		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(340)
						px = x1;
						HX_STACK_LINE(341)
						bool fstx = (bool((x == (int)0)) || bool(!(combine)));		HX_STACK_VAR(fstx,"fstx");
						HX_STACK_LINE(342)
						bool fsty = (bool((y == (int)0)) || bool(!(combine)));		HX_STACK_VAR(fsty,"fsty");
						HX_STACK_LINE(343)
						bool sndx = (bool((x == (xn - (int)1))) || bool(!(combine)));		HX_STACK_VAR(sndx,"sndx");
						HX_STACK_LINE(344)
						bool sndy = (bool((y == (yn - (int)1))) || bool(!(combine)));		HX_STACK_VAR(sndy,"sndy");
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_MarchPair pp = ::zpp_nape::geom::ZPP_MarchingSquares_obj::me->marchSquare(iso,::zpp_nape::geom::ZPP_MarchingSquares_obj::isos,::zpp_nape::geom::ZPP_MarchingSquares_obj::ints,x0,y0,x1,y1,x,y,fstx,fsty,sndx,sndy,quality);		HX_STACK_VAR(pp,"pp");
						HX_STACK_LINE(346)
						if (((pp == null()))){
							HX_STACK_LINE(347)
							pre = null();
							HX_STACK_LINE(348)
							continue;
						}
						HX_STACK_LINE(350)
						if ((combine)){
							HX_STACK_LINE(351)
							::zpp_nape::geom::ZPP_GeomVert pd = (  (((bool((pp->p2 != null())) && bool((pp->okey2 != (int)14))))) ? ::zpp_nape::geom::ZPP_GeomVert(pp->p2) : ::zpp_nape::geom::ZPP_GeomVert(pp->p1) );		HX_STACK_VAR(pd,"pd");
							HX_STACK_LINE(352)
							pp->pd = (  (((((int(((  (((pd == pp->p2))) ? int(pp->okey2) : int(pp->okey1) ))) & int((int)128))) == (int)0))) ? ::zpp_nape::geom::ZPP_GeomVert(pd->prev) : ::zpp_nape::geom::ZPP_GeomVert(pd->prev->prev) );
							HX_STACK_LINE(353)
							{
								HX_STACK_LINE(353)
								::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(353)
								{
								}
								HX_STACK_LINE(353)
								_this->list[((y * _this->width) + x)] = pp;
							}
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::geom::ZPP_MarchPair &pp){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",354);
									{
										HX_STACK_LINE(354)
										int key = pp->key1;		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(354)
										int flag = (int((int(key) & int((int)1))) | int((int(((int(key) & int((int)192)))) >> int((int)5))));		HX_STACK_VAR(flag,"flag");
										struct _Function_7_1{
											inline static bool Block( int &flag){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",354);
												{
													HX_STACK_LINE(354)
													int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
													HX_STACK_LINE(354)
													if (((((int(flag) & int((int)1))) != (int)0))){
														HX_STACK_LINE(354)
														(cnt)++;
													}
													HX_STACK_LINE(354)
													if (((((int(flag) & int((int)2))) != (int)0))){
														HX_STACK_LINE(354)
														(cnt)++;
													}
													HX_STACK_LINE(354)
													if (((((int(flag) & int((int)4))) != (int)0))){
														HX_STACK_LINE(354)
														(cnt)++;
													}
													HX_STACK_LINE(354)
													return (cnt >= (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(354)
										return _Function_7_1::Block(flag);
									}
									return null();
								}
							};
							HX_STACK_LINE(354)
							if (((bool((pre != null())) && bool(_Function_6_1::Block(pp))))){
								HX_STACK_LINE(355)
								{
								}
								HX_STACK_LINE(363)
								::zpp_nape::geom::ZPP_MarchingSquares_obj::me->combLR(pre,pp);
								HX_STACK_LINE(364)
								pp->span1 = pre->spanr;
							}
							else{
								HX_STACK_LINE(367)
								{
								}
								HX_STACK_LINE(375)
								{
									HX_STACK_LINE(376)
									if (((::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool == null()))){
										HX_STACK_LINE(376)
										pp->span1 = ::zpp_nape::geom::ZPP_MarchSpan_obj::__new();
									}
									else{
										HX_STACK_LINE(383)
										pp->span1 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;
										HX_STACK_LINE(384)
										::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = pp->span1->next;
										HX_STACK_LINE(385)
										pp->span1->next = null();
									}
									HX_STACK_LINE(390)
									{
										HX_STACK_LINE(390)
										::zpp_nape::geom::ZPP_MarchSpan _this = pp->span1;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(390)
										_this->out = false;
										HX_STACK_LINE(390)
										_this->rank = (int)0;
									}
								}
								HX_STACK_LINE(392)
								pp->span1->next = spans;
								HX_STACK_LINE(393)
								spans = pp->span1;
							}
							HX_STACK_LINE(395)
							if (((pp->p2 != null()))){
								HX_STACK_LINE(396)
								{
									HX_STACK_LINE(397)
									if (((::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool == null()))){
										HX_STACK_LINE(397)
										pp->span2 = ::zpp_nape::geom::ZPP_MarchSpan_obj::__new();
									}
									else{
										HX_STACK_LINE(404)
										pp->span2 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;
										HX_STACK_LINE(405)
										::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = pp->span2->next;
										HX_STACK_LINE(406)
										pp->span2->next = null();
									}
									HX_STACK_LINE(411)
									{
										HX_STACK_LINE(411)
										::zpp_nape::geom::ZPP_MarchSpan _this = pp->span2;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(411)
										_this->out = false;
										HX_STACK_LINE(411)
										_this->rank = (int)0;
									}
								}
								HX_STACK_LINE(413)
								pp->span2->next = spans;
								HX_STACK_LINE(414)
								spans = pp->span2;
								HX_STACK_LINE(415)
								pp->spanr = pp->span2;
							}
							else{
								HX_STACK_LINE(417)
								pp->spanr = pp->span1;
							}
							struct _Function_6_2{
								inline static bool Block( ::zpp_nape::geom::ZPP_MarchPair &pp){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",418);
									{
										HX_STACK_LINE(418)
										int flag = (int(((int(pp->keyr) & int((int)28)))) >> int((int)2));		HX_STACK_VAR(flag,"flag");
										struct _Function_7_1{
											inline static bool Block( int &flag){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",418);
												{
													HX_STACK_LINE(418)
													int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
													HX_STACK_LINE(418)
													if (((((int(flag) & int((int)1))) != (int)0))){
														HX_STACK_LINE(418)
														(cnt)++;
													}
													HX_STACK_LINE(418)
													if (((((int(flag) & int((int)2))) != (int)0))){
														HX_STACK_LINE(418)
														(cnt)++;
													}
													HX_STACK_LINE(418)
													if (((((int(flag) & int((int)4))) != (int)0))){
														HX_STACK_LINE(418)
														(cnt)++;
													}
													HX_STACK_LINE(418)
													return (cnt >= (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(418)
										return _Function_7_1::Block(flag);
									}
									return null();
								}
							};
							HX_STACK_LINE(418)
							if ((_Function_6_2::Block(pp))){
								HX_STACK_LINE(418)
								pre = pp;
							}
							else{
								HX_STACK_LINE(419)
								pre = null();
							}
						}
						else{
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::me->output(ret,pp->p1);
							HX_STACK_LINE(423)
							if (((pp->p2 != null()))){
								HX_STACK_LINE(423)
								::zpp_nape::geom::ZPP_MarchingSquares_obj::me->output(ret,pp->p2);
							}
							HX_STACK_LINE(424)
							{
								HX_STACK_LINE(425)
								::zpp_nape::geom::ZPP_MarchPair o = pp;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(426)
								{
								}
								HX_STACK_LINE(434)
								{
									HX_STACK_LINE(434)
									o->p1 = o->p2 = o->pr = o->pd = null();
									HX_STACK_LINE(434)
									o->span1 = o->span2 = o->spanr = null();
								}
								HX_STACK_LINE(435)
								o->next = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;
								HX_STACK_LINE(436)
								::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = o;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(444)
		if ((!(combine))){
			HX_STACK_LINE(444)
			return null();
		}
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			int _g = (int)1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(447)
			while(((_g < yn))){
				HX_STACK_LINE(447)
				int y = (_g)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(448)
				::zpp_nape::geom::ZPP_MarchSpan pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(449)
				{
					HX_STACK_LINE(449)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(449)
					while(((_g1 < xn))){
						HX_STACK_LINE(449)
						int x = (_g1)++;		HX_STACK_VAR(x,"x");
						struct _Function_5_1{
							inline static ::zpp_nape::geom::ZPP_MarchPair Block( int &y,int &x){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",450);
								{
									HX_STACK_LINE(450)
									::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(450)
									{
									}
									HX_STACK_LINE(450)
									return _this->list->__get(((y * _this->width) + x));
								}
								return null();
							}
						};
						HX_STACK_LINE(450)
						::zpp_nape::geom::ZPP_MarchPair b = _Function_5_1::Block(y,x);		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(451)
						if (((b == null()))){
							HX_STACK_LINE(452)
							pre = null();
							HX_STACK_LINE(453)
							continue;
						}
						HX_STACK_LINE(455)
						int bkey = (  (((bool((b->p2 != null())) && bool((b->okey2 == (int)14))))) ? int(b->okey2) : int(b->okey1) );		HX_STACK_VAR(bkey,"bkey");
						struct _Function_5_2{
							inline static bool Block( int &bkey){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",456);
								{
									HX_STACK_LINE(456)
									int flag = (int(bkey) & int((int)7));		HX_STACK_VAR(flag,"flag");
									struct _Function_6_1{
										inline static bool Block( int &flag){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",456);
											{
												HX_STACK_LINE(456)
												int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
												HX_STACK_LINE(456)
												if (((((int(flag) & int((int)1))) != (int)0))){
													HX_STACK_LINE(456)
													(cnt)++;
												}
												HX_STACK_LINE(456)
												if (((((int(flag) & int((int)2))) != (int)0))){
													HX_STACK_LINE(456)
													(cnt)++;
												}
												HX_STACK_LINE(456)
												if (((((int(flag) & int((int)4))) != (int)0))){
													HX_STACK_LINE(456)
													(cnt)++;
												}
												HX_STACK_LINE(456)
												return (cnt >= (int)2);
											}
											return null();
										}
									};
									HX_STACK_LINE(456)
									return _Function_6_1::Block(flag);
								}
								return null();
							}
						};
						HX_STACK_LINE(456)
						if ((!(_Function_5_2::Block(bkey)))){
							HX_STACK_LINE(457)
							pre = null();
							HX_STACK_LINE(458)
							continue;
						}
						struct _Function_5_3{
							inline static ::zpp_nape::geom::ZPP_MarchPair Block( int &y,int &x){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",460);
								{
									HX_STACK_LINE(460)
									::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(460)
									{
									}
									HX_STACK_LINE(460)
									return _this->list->__get(((((y - (int)1)) * _this->width) + x));
								}
								return null();
							}
						};
						HX_STACK_LINE(460)
						::zpp_nape::geom::ZPP_MarchPair a = _Function_5_3::Block(y,x);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(461)
						if (((a == null()))){
							HX_STACK_LINE(462)
							pre = null();
							HX_STACK_LINE(463)
							continue;
						}
						HX_STACK_LINE(465)
						int akey = (  (((bool((a->p2 != null())) && bool((a->okey2 == (int)56))))) ? int(a->okey2) : int(a->okey1) );		HX_STACK_VAR(akey,"akey");
						struct _Function_5_4{
							inline static bool Block( int &akey){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",466);
								{
									HX_STACK_LINE(466)
									int flag = (int(((int(akey) & int((int)112)))) >> int((int)4));		HX_STACK_VAR(flag,"flag");
									struct _Function_6_1{
										inline static bool Block( int &flag){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",466);
											{
												HX_STACK_LINE(466)
												int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
												HX_STACK_LINE(466)
												if (((((int(flag) & int((int)1))) != (int)0))){
													HX_STACK_LINE(466)
													(cnt)++;
												}
												HX_STACK_LINE(466)
												if (((((int(flag) & int((int)2))) != (int)0))){
													HX_STACK_LINE(466)
													(cnt)++;
												}
												HX_STACK_LINE(466)
												if (((((int(flag) & int((int)4))) != (int)0))){
													HX_STACK_LINE(466)
													(cnt)++;
												}
												HX_STACK_LINE(466)
												return (cnt >= (int)2);
											}
											return null();
										}
									};
									HX_STACK_LINE(466)
									return _Function_6_1::Block(flag);
								}
								return null();
							}
						};
						HX_STACK_LINE(466)
						if ((!(_Function_5_4::Block(akey)))){
							HX_STACK_LINE(467)
							pre = null();
							HX_STACK_LINE(468)
							continue;
						}
						HX_STACK_LINE(470)
						::zpp_nape::geom::ZPP_MarchSpan ad = (  (((bool((a->p2 != null())) && bool((a->okey2 == (int)56))))) ? ::zpp_nape::geom::ZPP_MarchSpan(a->span2) : ::zpp_nape::geom::ZPP_MarchSpan(a->span1) );		HX_STACK_VAR(ad,"ad");
						HX_STACK_LINE(471)
						::zpp_nape::geom::ZPP_MarchSpan bu = (  (((bool((b->p2 != null())) && bool((b->okey2 == (int)14))))) ? ::zpp_nape::geom::ZPP_MarchSpan(b->span2) : ::zpp_nape::geom::ZPP_MarchSpan(b->span1) );		HX_STACK_VAR(bu,"bu");
						struct _Function_5_5{
							inline static ::zpp_nape::geom::ZPP_MarchSpan Block( ::zpp_nape::geom::ZPP_MarchSpan &ad){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",474);
								{
									HX_STACK_LINE(475)
									::zpp_nape::geom::ZPP_MarchSpan obj = ad;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(476)
									::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
									HX_STACK_LINE(477)
									while(((obj != obj->parent))){
										HX_STACK_LINE(478)
										::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(479)
										obj->parent = stack;
										HX_STACK_LINE(480)
										stack = obj;
										HX_STACK_LINE(481)
										obj = nxt;
									}
									HX_STACK_LINE(483)
									while(((stack != null()))){
										HX_STACK_LINE(484)
										::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(485)
										stack->parent = obj;
										HX_STACK_LINE(486)
										stack = nxt;
									}
									HX_STACK_LINE(488)
									return obj;
								}
								return null();
							}
						};
						struct _Function_5_6{
							inline static ::zpp_nape::geom::ZPP_MarchSpan Block( ::zpp_nape::geom::ZPP_MarchSpan &bu){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",492);
								{
									HX_STACK_LINE(493)
									::zpp_nape::geom::ZPP_MarchSpan obj = bu;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(494)
									::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
									HX_STACK_LINE(495)
									while(((obj != obj->parent))){
										HX_STACK_LINE(496)
										::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(497)
										obj->parent = stack;
										HX_STACK_LINE(498)
										stack = obj;
										HX_STACK_LINE(499)
										obj = nxt;
									}
									HX_STACK_LINE(501)
									while(((stack != null()))){
										HX_STACK_LINE(502)
										::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(503)
										stack->parent = obj;
										HX_STACK_LINE(504)
										stack = nxt;
									}
									HX_STACK_LINE(506)
									return obj;
								}
								return null();
							}
						};
						HX_STACK_LINE(472)
						if (((((  (((ad == ad->parent))) ? ::zpp_nape::geom::ZPP_MarchSpan(ad) : ::zpp_nape::geom::ZPP_MarchSpan(_Function_5_5::Block(ad)) )) == ((  (((bu == bu->parent))) ? ::zpp_nape::geom::ZPP_MarchSpan(bu) : ::zpp_nape::geom::ZPP_MarchSpan(_Function_5_6::Block(bu)) ))))){
							HX_STACK_LINE(508)
							if (((pre != bu))){
								HX_STACK_LINE(509)
								::zpp_nape::geom::ZPP_MarchingSquares_obj::me->combUD_virtual(a,b);
							}
						}
						else{
							HX_STACK_LINE(514)
							{
								struct _Function_7_1{
									inline static ::zpp_nape::geom::ZPP_MarchSpan Block( ::zpp_nape::geom::ZPP_MarchSpan &ad){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",517);
										{
											HX_STACK_LINE(518)
											::zpp_nape::geom::ZPP_MarchSpan obj = ad;		HX_STACK_VAR(obj,"obj");
											HX_STACK_LINE(519)
											::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
											HX_STACK_LINE(520)
											while(((obj != obj->parent))){
												HX_STACK_LINE(521)
												::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
												HX_STACK_LINE(522)
												obj->parent = stack;
												HX_STACK_LINE(523)
												stack = obj;
												HX_STACK_LINE(524)
												obj = nxt;
											}
											HX_STACK_LINE(526)
											while(((stack != null()))){
												HX_STACK_LINE(527)
												::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
												HX_STACK_LINE(528)
												stack->parent = obj;
												HX_STACK_LINE(529)
												stack = nxt;
											}
											HX_STACK_LINE(531)
											return obj;
										}
										return null();
									}
								};
								HX_STACK_LINE(515)
								::zpp_nape::geom::ZPP_MarchSpan xr = (  (((ad == ad->parent))) ? ::zpp_nape::geom::ZPP_MarchSpan(ad) : ::zpp_nape::geom::ZPP_MarchSpan(_Function_7_1::Block(ad)) );		HX_STACK_VAR(xr,"xr");
								struct _Function_7_2{
									inline static ::zpp_nape::geom::ZPP_MarchSpan Block( ::zpp_nape::geom::ZPP_MarchSpan &bu){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",536);
										{
											HX_STACK_LINE(537)
											::zpp_nape::geom::ZPP_MarchSpan obj = bu;		HX_STACK_VAR(obj,"obj");
											HX_STACK_LINE(538)
											::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
											HX_STACK_LINE(539)
											while(((obj != obj->parent))){
												HX_STACK_LINE(540)
												::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
												HX_STACK_LINE(541)
												obj->parent = stack;
												HX_STACK_LINE(542)
												stack = obj;
												HX_STACK_LINE(543)
												obj = nxt;
											}
											HX_STACK_LINE(545)
											while(((stack != null()))){
												HX_STACK_LINE(546)
												::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
												HX_STACK_LINE(547)
												stack->parent = obj;
												HX_STACK_LINE(548)
												stack = nxt;
											}
											HX_STACK_LINE(550)
											return obj;
										}
										return null();
									}
								};
								HX_STACK_LINE(534)
								::zpp_nape::geom::ZPP_MarchSpan yr = (  (((bu == bu->parent))) ? ::zpp_nape::geom::ZPP_MarchSpan(bu) : ::zpp_nape::geom::ZPP_MarchSpan(_Function_7_2::Block(bu)) );		HX_STACK_VAR(yr,"yr");
								HX_STACK_LINE(553)
								if (((xr != yr))){
									HX_STACK_LINE(553)
									if (((xr->rank < yr->rank))){
										HX_STACK_LINE(554)
										xr->parent = yr;
									}
									else{
										HX_STACK_LINE(555)
										if (((xr->rank > yr->rank))){
											HX_STACK_LINE(555)
											yr->parent = xr;
										}
										else{
											HX_STACK_LINE(557)
											yr->parent = xr;
											HX_STACK_LINE(558)
											(xr->rank)++;
										}
									}
								}
							}
							HX_STACK_LINE(562)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::me->combUD(a,b);
						}
						HX_STACK_LINE(564)
						int key = (  (((bu == b->span2))) ? int(b->okey2) : int(b->okey1) );		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(565)
						pre = (  (((((int(key) & int((int)4))) != (int)0))) ? ::zpp_nape::geom::ZPP_MarchSpan(bu) : ::zpp_nape::geom::ZPP_MarchSpan(null()) );
					}
				}
			}
		}
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(568)
			while(((_g < yn))){
				HX_STACK_LINE(568)
				int y = (_g)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(569)
				{
					HX_STACK_LINE(569)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(569)
					while(((_g1 < xn))){
						HX_STACK_LINE(569)
						int x = (_g1)++;		HX_STACK_VAR(x,"x");
						struct _Function_5_1{
							inline static ::zpp_nape::geom::ZPP_MarchPair Block( int &y,int &x){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",570);
								{
									HX_STACK_LINE(570)
									::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(570)
									{
									}
									HX_STACK_LINE(570)
									return _this->list->__get(((y * _this->width) + x));
								}
								return null();
							}
						};
						HX_STACK_LINE(570)
						::zpp_nape::geom::ZPP_MarchPair p = _Function_5_1::Block(y,x);		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(571)
						if (((p == null()))){
							HX_STACK_LINE(571)
							continue;
						}
						struct _Function_5_2{
							inline static ::zpp_nape::geom::ZPP_MarchSpan Block( ::zpp_nape::geom::ZPP_MarchPair &p){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",574);
								{
									HX_STACK_LINE(575)
									::zpp_nape::geom::ZPP_MarchSpan obj = p->span1;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(576)
									::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
									HX_STACK_LINE(577)
									while(((obj != obj->parent))){
										HX_STACK_LINE(578)
										::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(579)
										obj->parent = stack;
										HX_STACK_LINE(580)
										stack = obj;
										HX_STACK_LINE(581)
										obj = nxt;
									}
									HX_STACK_LINE(583)
									while(((stack != null()))){
										HX_STACK_LINE(584)
										::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(585)
										stack->parent = obj;
										HX_STACK_LINE(586)
										stack = nxt;
									}
									HX_STACK_LINE(588)
									return obj;
								}
								return null();
							}
						};
						HX_STACK_LINE(572)
						::zpp_nape::geom::ZPP_MarchSpan root = (  (((p->span1 == p->span1->parent))) ? ::zpp_nape::geom::ZPP_MarchSpan(p->span1) : ::zpp_nape::geom::ZPP_MarchSpan(_Function_5_2::Block(p)) );		HX_STACK_VAR(root,"root");
						HX_STACK_LINE(591)
						if ((!(root->out))){
							HX_STACK_LINE(592)
							root->out = true;
							HX_STACK_LINE(593)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::me->output(ret,p->p1);
						}
						HX_STACK_LINE(595)
						if (((p->p2 != null()))){
							struct _Function_6_1{
								inline static ::zpp_nape::geom::ZPP_MarchSpan Block( ::zpp_nape::geom::ZPP_MarchPair &p){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",598);
									{
										HX_STACK_LINE(599)
										::zpp_nape::geom::ZPP_MarchSpan obj = p->span2;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(600)
										::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
										HX_STACK_LINE(601)
										while(((obj != obj->parent))){
											HX_STACK_LINE(602)
											::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
											HX_STACK_LINE(603)
											obj->parent = stack;
											HX_STACK_LINE(604)
											stack = obj;
											HX_STACK_LINE(605)
											obj = nxt;
										}
										HX_STACK_LINE(607)
										while(((stack != null()))){
											HX_STACK_LINE(608)
											::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
											HX_STACK_LINE(609)
											stack->parent = obj;
											HX_STACK_LINE(610)
											stack = nxt;
										}
										HX_STACK_LINE(612)
										return obj;
									}
									return null();
								}
							};
							HX_STACK_LINE(596)
							root = (  (((p->span2 == p->span2->parent))) ? ::zpp_nape::geom::ZPP_MarchSpan(p->span2) : ::zpp_nape::geom::ZPP_MarchSpan(_Function_6_1::Block(p)) );
							HX_STACK_LINE(615)
							if ((!(root->out))){
								HX_STACK_LINE(616)
								root->out = true;
								HX_STACK_LINE(617)
								::zpp_nape::geom::ZPP_MarchingSquares_obj::me->output(ret,p->p2);
							}
						}
						HX_STACK_LINE(620)
						{
							HX_STACK_LINE(621)
							::zpp_nape::geom::ZPP_MarchPair o = p;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(622)
							{
							}
							HX_STACK_LINE(630)
							{
								HX_STACK_LINE(630)
								o->p1 = o->p2 = o->pr = o->pd = null();
								HX_STACK_LINE(630)
								o->span1 = o->span2 = o->spanr = null();
							}
							HX_STACK_LINE(631)
							o->next = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;
							HX_STACK_LINE(632)
							::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(637)
						{
							HX_STACK_LINE(637)
							::zpp_nape::util::ZNPArray2_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(637)
							{
							}
							HX_STACK_LINE(637)
							_this->list[((y * _this->width) + x)] = null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(640)
		while(((spans != null()))){
			HX_STACK_LINE(641)
			::zpp_nape::geom::ZPP_MarchSpan t = spans;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(642)
			spans = t->next;
			HX_STACK_LINE(643)
			{
				HX_STACK_LINE(644)
				::zpp_nape::geom::ZPP_MarchSpan o = t;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(645)
				{
				}
				HX_STACK_LINE(653)
				o->parent = o;
				HX_STACK_LINE(654)
				o->next = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;
				HX_STACK_LINE(655)
				::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = o;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(ZPP_MarchingSquares_obj,run,(void))

Array< int > ZPP_MarchingSquares_obj::look_march;

Float ZPP_MarchingSquares_obj::ISO( Dynamic iso,Float x,Float y){
	HX_STACK_PUSH("ZPP_MarchingSquares::ISO","zpp_nape/geom/MarchingSquares.hx",1928);
	HX_STACK_ARG(iso,"iso");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(1928)
	return iso(x,y).Cast< Float >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_MarchingSquares_obj,ISO,return )


ZPP_MarchingSquares_obj::ZPP_MarchingSquares_obj()
{
}

void ZPP_MarchingSquares_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MarchingSquares);
	HX_MARK_END_CLASS();
}

void ZPP_MarchingSquares_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_MarchingSquares_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"me") ) { return me; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		if (HX_FIELD_EQ(inName,"ISO") ) { return ISO_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"isos") ) { return isos; }
		if (HX_FIELD_EQ(inName,"ints") ) { return ints; }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"comb") ) { return comb_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ylerp") ) { return ylerp_dyn(); }
		if (HX_FIELD_EQ(inName,"xlerp") ) { return xlerp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"combUp") ) { return combUp_dyn(); }
		if (HX_FIELD_EQ(inName,"combUD") ) { return combUD_dyn(); }
		if (HX_FIELD_EQ(inName,"combLR") ) { return combLR_dyn(); }
		if (HX_FIELD_EQ(inName,"linkup") ) { return linkup_dyn(); }
		if (HX_FIELD_EQ(inName,"output") ) { return output_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"combDown") ) { return combDown_dyn(); }
		if (HX_FIELD_EQ(inName,"combLeft") ) { return combLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"linkdown") ) { return linkdown_dyn(); }
		if (HX_FIELD_EQ(inName,"linkleft") ) { return linkleft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"combRight") ) { return combRight_dyn(); }
		if (HX_FIELD_EQ(inName,"linkright") ) { return linkright_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"look_march") ) { return look_march; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"marchSquare") ) { return marchSquare_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"combUD_virtual") ) { return combUD_virtual_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_MarchingSquares_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"me") ) { me=inValue.Cast< ::zpp_nape::geom::ZPP_MarchingSquares >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::zpp_nape::util::ZNPArray2_ZPP_MarchPair >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"isos") ) { isos=inValue.Cast< ::zpp_nape::util::ZNPArray2_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ints") ) { ints=inValue.Cast< ::zpp_nape::util::ZNPArray2_ZPP_GeomVert >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"look_march") ) { look_march=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_MarchingSquares_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("me"),
	HX_CSTRING("isos"),
	HX_CSTRING("ints"),
	HX_CSTRING("map"),
	HX_CSTRING("run"),
	HX_CSTRING("look_march"),
	HX_CSTRING("ISO"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("ylerp"),
	HX_CSTRING("xlerp"),
	HX_CSTRING("lerp"),
	HX_CSTRING("marchSquare"),
	HX_CSTRING("comb"),
	HX_CSTRING("combDown"),
	HX_CSTRING("combUp"),
	HX_CSTRING("combRight"),
	HX_CSTRING("combLeft"),
	HX_CSTRING("combUD_virtual"),
	HX_CSTRING("combUD"),
	HX_CSTRING("combLR"),
	HX_CSTRING("linkup"),
	HX_CSTRING("linkdown"),
	HX_CSTRING("linkleft"),
	HX_CSTRING("linkright"),
	HX_CSTRING("output"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::me,"me");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::isos,"isos");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::ints,"ints");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::map,"map");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::look_march,"look_march");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::me,"me");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::isos,"isos");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::ints,"ints");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::map,"map");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::look_march,"look_march");
};

Class ZPP_MarchingSquares_obj::__mClass;

void ZPP_MarchingSquares_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_MarchingSquares"), hx::TCanCast< ZPP_MarchingSquares_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_MarchingSquares_obj::__boot()
{
	me= ::zpp_nape::geom::ZPP_MarchingSquares_obj::__new();
	look_march= Array_obj< int >::__new().Add((int)-1).Add((int)224).Add((int)56).Add((int)216).Add((int)14).Add((int)-1).Add((int)54).Add((int)214).Add((int)131).Add((int)99).Add((int)-1).Add((int)91).Add((int)141).Add((int)109).Add((int)181).Add((int)85);
}

} // end namespace zpp_nape
} // end namespace geom
