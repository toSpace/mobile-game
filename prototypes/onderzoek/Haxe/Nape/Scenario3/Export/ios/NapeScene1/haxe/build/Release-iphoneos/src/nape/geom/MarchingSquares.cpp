#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_MarchingSquares
#include <nape/geom/MarchingSquares.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchingSquares
#include <zpp_nape/geom/ZPP_MarchingSquares.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void MarchingSquares_obj::__construct()
{
	return null();
}

MarchingSquares_obj::~MarchingSquares_obj() { }

Dynamic MarchingSquares_obj::__CreateEmpty() { return  new MarchingSquares_obj; }
hx::ObjectPtr< MarchingSquares_obj > MarchingSquares_obj::__new()
{  hx::ObjectPtr< MarchingSquares_obj > result = new MarchingSquares_obj();
	result->__construct();
	return result;}

Dynamic MarchingSquares_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MarchingSquares_obj > result = new MarchingSquares_obj();
	result->__construct();
	return result;}

::nape::geom::GeomPolyList MarchingSquares_obj::run( Dynamic iso,::nape::geom::AABB bounds,::nape::geom::Vec2 cellsize,hx::Null< int >  __o_quality,::nape::geom::Vec2 subgrid,hx::Null< bool >  __o_combine,::nape::geom::GeomPolyList output){
int quality = __o_quality.Default(2);
bool combine = __o_combine.Default(true);
	HX_STACK_PUSH("MarchingSquares::run","nape/geom/MarchingSquares.hx",269);
	HX_STACK_ARG(iso,"iso");
	HX_STACK_ARG(bounds,"bounds");
	HX_STACK_ARG(cellsize,"cellsize");
	HX_STACK_ARG(quality,"quality");
	HX_STACK_ARG(subgrid,"subgrid");
	HX_STACK_ARG(combine,"combine");
	HX_STACK_ARG(output,"output");
{
		HX_STACK_LINE(270)
		if (((bool((cellsize != null())) && bool(cellsize->zpp_disp)))){
			HX_STACK_LINE(272)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(275)
		if (((bool((subgrid != null())) && bool(subgrid->zpp_disp)))){
			HX_STACK_LINE(277)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(281)
		if (((iso == null()))){
			HX_STACK_LINE(281)
			hx::Throw (HX_CSTRING("Error: MarchingSquares requires an iso function to operate"));
		}
		HX_STACK_LINE(284)
		if (((bounds == null()))){
			HX_STACK_LINE(284)
			hx::Throw (HX_CSTRING("Error: MarchingSquares requires an AABB to define bounds of surface extraction"));
		}
		HX_STACK_LINE(287)
		if (((cellsize == null()))){
			HX_STACK_LINE(287)
			hx::Throw (HX_CSTRING("Error: MarchingSquares requires a Vec2 to define cell size for surface extraction"));
		}
		struct _Function_1_1{
			inline static Float Block( ::nape::geom::Vec2 &cellsize){
				HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",290);
				{
					HX_STACK_LINE(290)
					if (((bool((cellsize != null())) && bool(cellsize->zpp_disp)))){
						HX_STACK_LINE(290)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(290)
					{
						HX_STACK_LINE(290)
						::zpp_nape::geom::ZPP_Vec2 _this = cellsize->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(290)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(290)
							_this->_validate();
						}
					}
					HX_STACK_LINE(290)
					return cellsize->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( ::nape::geom::Vec2 &cellsize){
				HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",290);
				{
					HX_STACK_LINE(290)
					if (((bool((cellsize != null())) && bool(cellsize->zpp_disp)))){
						HX_STACK_LINE(290)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(290)
					{
						HX_STACK_LINE(290)
						::zpp_nape::geom::ZPP_Vec2 _this = cellsize->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(290)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(290)
							_this->_validate();
						}
					}
					HX_STACK_LINE(290)
					return cellsize->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(290)
		if (((bool((_Function_1_1::Block(cellsize) <= (int)0)) || bool((_Function_1_2::Block(cellsize) <= (int)0))))){
			HX_STACK_LINE(290)
			hx::Throw (HX_CSTRING("Error: MarchingSquares cannot operate with non-positive cell dimensions"));
		}
		HX_STACK_LINE(293)
		if (((quality < (int)0))){
			HX_STACK_LINE(293)
			hx::Throw (HX_CSTRING("Error: MarchingSquares cannot use a negative quality value for interpolation"));
		}
		struct _Function_1_3{
			inline static Float Block( ::nape::geom::Vec2 &subgrid){
				HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",296);
				{
					HX_STACK_LINE(296)
					if (((bool((subgrid != null())) && bool(subgrid->zpp_disp)))){
						HX_STACK_LINE(296)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(296)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(296)
							_this->_validate();
						}
					}
					HX_STACK_LINE(296)
					return subgrid->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static Float Block( ::nape::geom::Vec2 &subgrid){
				HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",296);
				{
					HX_STACK_LINE(296)
					if (((bool((subgrid != null())) && bool(subgrid->zpp_disp)))){
						HX_STACK_LINE(296)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(296)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(296)
							_this->_validate();
						}
					}
					HX_STACK_LINE(296)
					return subgrid->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(296)
		if (((bool((subgrid != null())) && bool(((bool((_Function_1_3::Block(subgrid) <= (int)0)) || bool((_Function_1_4::Block(subgrid) <= (int)0)))))))){
			HX_STACK_LINE(296)
			hx::Throw (HX_CSTRING("Error: MarchingSquares cannot with non-positive sub-grid dimensions"));
		}
		HX_STACK_LINE(300)
		::nape::geom::GeomPolyList ret = (  (((output != null()))) ? ::nape::geom::GeomPolyList(output) : ::nape::geom::GeomPolyList(::nape::geom::GeomPolyList_obj::__new()) );		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(301)
		if (((subgrid == null()))){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::AABB &bounds){
					HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",302);
					{
						HX_STACK_LINE(302)
						{
							HX_STACK_LINE(302)
							::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(302)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(302)
								_this->_validate();
							}
						}
						HX_STACK_LINE(302)
						return bounds->zpp_inner->minx;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::AABB &bounds){
					HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",302);
					{
						HX_STACK_LINE(302)
						{
							HX_STACK_LINE(302)
							::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(302)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(302)
								_this->_validate();
							}
						}
						HX_STACK_LINE(302)
						return bounds->zpp_inner->miny;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::AABB &bounds){
					HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",302);
					{
						HX_STACK_LINE(302)
						::nape::geom::Vec2 _this = bounds->zpp_inner->getmax();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(302)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(302)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(302)
						{
							HX_STACK_LINE(302)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(302)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(302)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(302)
						return _this->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::AABB &bounds){
					HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",302);
					{
						HX_STACK_LINE(302)
						::nape::geom::Vec2 _this = bounds->zpp_inner->getmax();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(302)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(302)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(302)
						{
							HX_STACK_LINE(302)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(302)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(302)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(302)
						return _this->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(301)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::run(iso,_Function_2_1::Block(bounds),_Function_2_2::Block(bounds),_Function_2_3::Block(bounds),_Function_2_4::Block(bounds),cellsize,quality,combine,ret);
		}
		else{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::AABB &bounds){
					HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",305);
					{
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(305)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(305)
								_this->_validate();
							}
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::AABB &bounds){
								HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",305);
								{
									HX_STACK_LINE(305)
									::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(305)
									return (_this->maxx - _this->minx);
								}
								return null();
							}
						};
						HX_STACK_LINE(305)
						return _Function_3_1::Block(bounds);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &subgrid){
					HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",305);
					{
						HX_STACK_LINE(305)
						if (((bool((subgrid != null())) && bool(subgrid->zpp_disp)))){
							HX_STACK_LINE(305)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(305)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(305)
								_this->_validate();
							}
						}
						HX_STACK_LINE(305)
						return subgrid->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(305)
			Float xp = (Float(_Function_2_1::Block(bounds)) / Float(_Function_2_2::Block(subgrid)));		HX_STACK_VAR(xp,"xp");
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::AABB &bounds){
					HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",306);
					{
						HX_STACK_LINE(306)
						{
							HX_STACK_LINE(306)
							::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(306)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(306)
								_this->_validate();
							}
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::AABB &bounds){
								HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",306);
								{
									HX_STACK_LINE(306)
									::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(306)
									return (_this->maxy - _this->miny);
								}
								return null();
							}
						};
						HX_STACK_LINE(306)
						return _Function_3_1::Block(bounds);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &subgrid){
					HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",306);
					{
						HX_STACK_LINE(306)
						if (((bool((subgrid != null())) && bool(subgrid->zpp_disp)))){
							HX_STACK_LINE(306)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(306)
						{
							HX_STACK_LINE(306)
							::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(306)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(306)
								_this->_validate();
							}
						}
						HX_STACK_LINE(306)
						return subgrid->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(306)
			Float yp = (Float(_Function_2_3::Block(bounds)) / Float(_Function_2_4::Block(subgrid)));		HX_STACK_VAR(yp,"yp");
			HX_STACK_LINE(307)
			int xn = ::Std_obj::_int(xp);		HX_STACK_VAR(xn,"xn");
			HX_STACK_LINE(308)
			int yn = ::Std_obj::_int(yp);		HX_STACK_VAR(yn,"yn");
			HX_STACK_LINE(309)
			if (((xn != xp))){
				HX_STACK_LINE(309)
				(xn)++;
			}
			HX_STACK_LINE(310)
			if (((yn != yp))){
				HX_STACK_LINE(310)
				(yn)++;
			}
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(311)
				while(((_g < xn))){
					HX_STACK_LINE(311)
					int x = (_g)++;		HX_STACK_VAR(x,"x");
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::AABB &bounds){
							HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",312);
							{
								HX_STACK_LINE(312)
								{
									HX_STACK_LINE(312)
									::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(312)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(312)
										_this->_validate();
									}
								}
								HX_STACK_LINE(312)
								return bounds->zpp_inner->minx;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec2 &subgrid){
							HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",312);
							{
								HX_STACK_LINE(312)
								if (((bool((subgrid != null())) && bool(subgrid->zpp_disp)))){
									HX_STACK_LINE(312)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(312)
								{
									HX_STACK_LINE(312)
									::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(312)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(312)
										_this->_validate();
									}
								}
								HX_STACK_LINE(312)
								return subgrid->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(312)
					Float x0 = (_Function_4_1::Block(bounds) + (_Function_4_2::Block(subgrid) * x));		HX_STACK_VAR(x0,"x0");
					struct _Function_4_3{
						inline static Float Block( ::nape::geom::AABB &bounds){
							HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",313);
							{
								HX_STACK_LINE(313)
								::nape::geom::Vec2 _this = bounds->zpp_inner->getmax();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(313)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(313)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(313)
								{
									HX_STACK_LINE(313)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(313)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(313)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(313)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_4_4{
						inline static Float Block( ::nape::geom::Vec2 &subgrid){
							HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",313);
							{
								HX_STACK_LINE(313)
								if (((bool((subgrid != null())) && bool(subgrid->zpp_disp)))){
									HX_STACK_LINE(313)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(313)
								{
									HX_STACK_LINE(313)
									::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(313)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(313)
										_this->_validate();
									}
								}
								HX_STACK_LINE(313)
								return subgrid->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(313)
					Float x1 = (  (((x == (xn - (int)1)))) ? Float(_Function_4_3::Block(bounds)) : Float((x0 + _Function_4_4::Block(subgrid))) );		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(314)
					{
						HX_STACK_LINE(314)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(314)
						while(((_g1 < yn))){
							HX_STACK_LINE(314)
							int y = (_g1)++;		HX_STACK_VAR(y,"y");
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::AABB &bounds){
									HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",315);
									{
										HX_STACK_LINE(315)
										{
											HX_STACK_LINE(315)
											::zpp_nape::geom::ZPP_AABB _this = bounds->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(315)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(315)
												_this->_validate();
											}
										}
										HX_STACK_LINE(315)
										return bounds->zpp_inner->miny;
									}
									return null();
								}
							};
							struct _Function_6_2{
								inline static Float Block( ::nape::geom::Vec2 &subgrid){
									HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",315);
									{
										HX_STACK_LINE(315)
										if (((bool((subgrid != null())) && bool(subgrid->zpp_disp)))){
											HX_STACK_LINE(315)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(315)
										{
											HX_STACK_LINE(315)
											::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(315)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(315)
												_this->_validate();
											}
										}
										HX_STACK_LINE(315)
										return subgrid->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(315)
							Float y0 = (_Function_6_1::Block(bounds) + (_Function_6_2::Block(subgrid) * y));		HX_STACK_VAR(y0,"y0");
							struct _Function_6_3{
								inline static Float Block( ::nape::geom::AABB &bounds){
									HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",316);
									{
										HX_STACK_LINE(316)
										::nape::geom::Vec2 _this = bounds->zpp_inner->getmax();		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(316)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(316)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(316)
										{
											HX_STACK_LINE(316)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(316)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(316)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(316)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							struct _Function_6_4{
								inline static Float Block( ::nape::geom::Vec2 &subgrid){
									HX_STACK_PUSH("*::closure","nape/geom/MarchingSquares.hx",316);
									{
										HX_STACK_LINE(316)
										if (((bool((subgrid != null())) && bool(subgrid->zpp_disp)))){
											HX_STACK_LINE(316)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(316)
										{
											HX_STACK_LINE(316)
											::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(316)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(316)
												_this->_validate();
											}
										}
										HX_STACK_LINE(316)
										return subgrid->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(316)
							Float y1 = (  (((y == (yn - (int)1)))) ? Float(_Function_6_3::Block(bounds)) : Float((y0 + _Function_6_4::Block(subgrid))) );		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(317)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::run(iso,x0,y0,x1,y1,cellsize,quality,combine,ret);
						}
					}
				}
			}
		}
		HX_STACK_LINE(321)
		if ((cellsize->zpp_inner->weak)){
			HX_STACK_LINE(325)
			{
				HX_STACK_LINE(325)
				if (((bool((cellsize != null())) && bool(cellsize->zpp_disp)))){
					HX_STACK_LINE(325)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2 _this = cellsize->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(325)
					if ((_this->_immutable)){
						HX_STACK_LINE(325)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(325)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(325)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(325)
				if ((cellsize->zpp_inner->_inuse)){
					HX_STACK_LINE(325)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(325)
				::zpp_nape::geom::ZPP_Vec2 inner = cellsize->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(325)
				cellsize->zpp_inner->outer = null();
				HX_STACK_LINE(325)
				cellsize->zpp_inner = null();
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					::nape::geom::Vec2 o = cellsize;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(325)
					{
					}
					HX_STACK_LINE(325)
					o->zpp_pool = null();
					HX_STACK_LINE(325)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(325)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(325)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(325)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(325)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(325)
					{
					}
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						if (((o->outer != null()))){
							HX_STACK_LINE(325)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(325)
							o->outer = null();
						}
						HX_STACK_LINE(325)
						o->_isimmutable = null();
						HX_STACK_LINE(325)
						o->_validate = null();
						HX_STACK_LINE(325)
						o->_invalidate = null();
					}
					HX_STACK_LINE(325)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(326)
			true;
		}
		else{
			HX_STACK_LINE(328)
			false;
		}
		HX_STACK_LINE(332)
		if (((subgrid != null()))){
			HX_STACK_LINE(332)
			if ((subgrid->zpp_inner->weak)){
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					if (((bool((subgrid != null())) && bool(subgrid->zpp_disp)))){
						HX_STACK_LINE(337)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::zpp_nape::geom::ZPP_Vec2 _this = subgrid->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(337)
						if ((_this->_immutable)){
							HX_STACK_LINE(337)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(337)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(337)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(337)
					if ((subgrid->zpp_inner->_inuse)){
						HX_STACK_LINE(337)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(337)
					::zpp_nape::geom::ZPP_Vec2 inner = subgrid->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(337)
					subgrid->zpp_inner->outer = null();
					HX_STACK_LINE(337)
					subgrid->zpp_inner = null();
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::nape::geom::Vec2 o = subgrid;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(337)
						{
						}
						HX_STACK_LINE(337)
						o->zpp_pool = null();
						HX_STACK_LINE(337)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(337)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(337)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(337)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(337)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(337)
						{
						}
						HX_STACK_LINE(337)
						{
							HX_STACK_LINE(337)
							if (((o->outer != null()))){
								HX_STACK_LINE(337)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(337)
								o->outer = null();
							}
							HX_STACK_LINE(337)
							o->_isimmutable = null();
							HX_STACK_LINE(337)
							o->_validate = null();
							HX_STACK_LINE(337)
							o->_invalidate = null();
						}
						HX_STACK_LINE(337)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(337)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(338)
				true;
			}
			else{
				HX_STACK_LINE(340)
				false;
			}
		}
		HX_STACK_LINE(345)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(MarchingSquares_obj,run,return )


MarchingSquares_obj::MarchingSquares_obj()
{
}

void MarchingSquares_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MarchingSquares);
	HX_MARK_END_CLASS();
}

void MarchingSquares_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic MarchingSquares_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MarchingSquares_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MarchingSquares_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("run"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MarchingSquares_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MarchingSquares_obj::__mClass,"__mClass");
};

Class MarchingSquares_obj::__mClass;

void MarchingSquares_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.MarchingSquares"), hx::TCanCast< MarchingSquares_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MarchingSquares_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
