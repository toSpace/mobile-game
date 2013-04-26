#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSweep
#include <zpp_nape/geom/ZPP_SimpleSweep.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_SimpleSweep_obj::__construct()
{
HX_STACK_PUSH("ZPP_SimpleSweep::new","zpp_nape/geom/Simple.hx",464);
{
	HX_STACK_LINE(466)
	this->tree = null();
	HX_STACK_LINE(465)
	this->sweepx = 0.0;
	HX_STACK_LINE(468)
	{
		HX_STACK_LINE(469)
		if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
			HX_STACK_LINE(469)
			this->tree = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
		}
		else{
			HX_STACK_LINE(476)
			this->tree = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
			HX_STACK_LINE(477)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = this->tree->next;
			HX_STACK_LINE(478)
			this->tree->next = null();
		}
		HX_STACK_LINE(483)
		Dynamic();
	}
	HX_STACK_LINE(485)
	this->tree->lt = this->edge_lt_dyn();
	HX_STACK_LINE(486)
	this->tree->swapped = this->swap_nodes_dyn();
}
;
	return null();
}

ZPP_SimpleSweep_obj::~ZPP_SimpleSweep_obj() { }

Dynamic ZPP_SimpleSweep_obj::__CreateEmpty() { return  new ZPP_SimpleSweep_obj; }
hx::ObjectPtr< ZPP_SimpleSweep_obj > ZPP_SimpleSweep_obj::__new()
{  hx::ObjectPtr< ZPP_SimpleSweep_obj > result = new ZPP_SimpleSweep_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SimpleSweep_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SimpleSweep_obj > result = new ZPP_SimpleSweep_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_SimpleEvent ZPP_SimpleSweep_obj::intersection( ::zpp_nape::geom::ZPP_SimpleSeg p,::zpp_nape::geom::ZPP_SimpleSeg q){
	HX_STACK_PUSH("ZPP_SimpleSweep::intersection","zpp_nape/geom/Simple.hx",736);
	HX_STACK_THIS(this);
	HX_STACK_ARG(p,"p");
	HX_STACK_ARG(q,"q");
	HX_STACK_LINE(736)
	if (((bool((p == null())) || bool((q == null()))))){
		HX_STACK_LINE(737)
		return null();
	}
	else{
		HX_STACK_LINE(738)
		if (((bool((bool((bool((p->left == q->left)) || bool((p->left == q->right)))) || bool((p->right == q->left)))) || bool((p->right == q->right))))){
			HX_STACK_LINE(738)
			return null();
		}
		else{
			HX_STACK_LINE(740)
			Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
			HX_STACK_LINE(741)
			Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
			HX_STACK_LINE(742)
			{
				HX_STACK_LINE(743)
				ux = (p->right->x - p->left->x);
				HX_STACK_LINE(744)
				uy = (p->right->y - p->left->y);
			}
			HX_STACK_LINE(746)
			Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(747)
			Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(748)
			{
				HX_STACK_LINE(749)
				vx = (q->right->x - q->left->x);
				HX_STACK_LINE(750)
				vy = (q->right->y - q->left->y);
			}
			HX_STACK_LINE(752)
			Float denom = ((vy * ux) - (vx * uy));		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(753)
			if (((denom == 0.0))){
				HX_STACK_LINE(753)
				return null();
			}
			HX_STACK_LINE(754)
			denom = (Float((int)1) / Float(denom));
			HX_STACK_LINE(755)
			Float cx = 0.0;		HX_STACK_VAR(cx,"cx");
			HX_STACK_LINE(756)
			Float cy = 0.0;		HX_STACK_VAR(cy,"cy");
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(758)
				cx = (q->left->x - p->left->x);
				HX_STACK_LINE(759)
				cy = (q->left->y - p->left->y);
			}
			HX_STACK_LINE(761)
			Float t = ((((vy * cx) - (vx * cy))) * denom);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(762)
			if (((bool((t < (int)0)) || bool((t > (int)1))))){
				HX_STACK_LINE(762)
				return null();
			}
			HX_STACK_LINE(763)
			Float s = ((((uy * cx) - (ux * cy))) * denom);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(764)
			if (((bool((s < (int)0)) || bool((s > (int)1))))){
				HX_STACK_LINE(764)
				return null();
			}
			HX_STACK_LINE(765)
			::zpp_nape::geom::ZPP_SimpleVert vet;		HX_STACK_VAR(vet,"vet");
			HX_STACK_LINE(766)
			if (((bool((bool((bool((s == (int)0)) || bool((s == (int)1)))) || bool((t == (int)0)))) || bool((t == (int)1))))){
				HX_STACK_LINE(768)
				bool cases = (s == (int)0);		HX_STACK_VAR(cases,"cases");
				HX_STACK_LINE(769)
				if (((bool((s == (int)1)) && bool(cases)))){
					HX_STACK_LINE(769)
					hx::Throw (HX_CSTRING("corner case 1a"));
				}
				else{
					HX_STACK_LINE(770)
					if (((s == (int)1))){
						HX_STACK_LINE(770)
						cases = true;
					}
				}
				HX_STACK_LINE(771)
				if (((bool((t == (int)0)) && bool(cases)))){
					HX_STACK_LINE(771)
					hx::Throw (HX_CSTRING("corner case 1b"));
				}
				else{
					HX_STACK_LINE(772)
					if (((t == (int)0))){
						HX_STACK_LINE(772)
						cases = true;
					}
				}
				HX_STACK_LINE(773)
				if (((bool((t == (int)1)) && bool(cases)))){
					HX_STACK_LINE(773)
					hx::Throw (HX_CSTRING("corner case 1c"));
				}
				HX_STACK_LINE(775)
				vet = (  (((s == (int)0))) ? ::zpp_nape::geom::ZPP_SimpleVert(q->left) : ::zpp_nape::geom::ZPP_SimpleVert((  (((s == (int)1))) ? ::zpp_nape::geom::ZPP_SimpleVert(q->right) : ::zpp_nape::geom::ZPP_SimpleVert((  (((t == (int)0))) ? ::zpp_nape::geom::ZPP_SimpleVert(p->left) : ::zpp_nape::geom::ZPP_SimpleVert(p->right) )) )) );
			}
			else{
				struct _Function_4_1{
					inline static ::zpp_nape::geom::ZPP_SimpleVert Block( Float &uy,Float &ux,Float &t,Float &vy,Float &vx,Float &s,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",777);
						{
							HX_STACK_LINE(777)
							::zpp_nape::geom::ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(777)
							{
								HX_STACK_LINE(777)
								if (((::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(777)
									ret = ::zpp_nape::geom::ZPP_SimpleVert_obj::__new();
								}
								else{
									HX_STACK_LINE(777)
									ret = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;
									HX_STACK_LINE(777)
									::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(777)
									ret->next = null();
								}
								HX_STACK_LINE(777)
								Dynamic();
							}
							HX_STACK_LINE(777)
							{
								HX_STACK_LINE(777)
								ret->x = (0.5 * ((((p->left->x + (ux * t)) + q->left->x) + (vx * s))));
								HX_STACK_LINE(777)
								ret->y = (0.5 * ((((p->left->y + (uy * t)) + q->left->y) + (vy * s))));
								HX_STACK_LINE(777)
								{
								}
								HX_STACK_LINE(777)
								{
								}
							}
							HX_STACK_LINE(777)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(777)
				vet = _Function_4_1::Block(uy,ux,t,vy,vx,s,q,p);
			}
			struct _Function_3_1{
				inline static ::zpp_nape::geom::ZPP_SimpleEvent Block( ::zpp_nape::geom::ZPP_SimpleVert &vet){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",778);
					{
						HX_STACK_LINE(778)
						::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(778)
						{
							HX_STACK_LINE(778)
							if (((::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool == null()))){
								HX_STACK_LINE(778)
								ret = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();
							}
							else{
								HX_STACK_LINE(778)
								ret = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(778)
								::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
								HX_STACK_LINE(778)
								ret->next = null();
							}
							HX_STACK_LINE(778)
							Dynamic();
						}
						HX_STACK_LINE(778)
						ret->vertex = vet;
						HX_STACK_LINE(778)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(778)
			::zpp_nape::geom::ZPP_SimpleEvent ret = _Function_3_1::Block(vet);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(779)
			ret->type = (int)0;
			HX_STACK_LINE(780)
			ret->segment = p;
			HX_STACK_LINE(781)
			ret->segment2 = q;
			HX_STACK_LINE(782)
			return ret;
		}
	}
	HX_STACK_LINE(736)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,intersection,return )

bool ZPP_SimpleSweep_obj::intersect( ::zpp_nape::geom::ZPP_SimpleSeg p,::zpp_nape::geom::ZPP_SimpleSeg q){
	HX_STACK_PUSH("ZPP_SimpleSweep::intersect","zpp_nape/geom/Simple.hx",718);
	HX_STACK_THIS(this);
	HX_STACK_ARG(p,"p");
	HX_STACK_ARG(q,"q");
	HX_STACK_LINE(718)
	if (((bool((p == null())) || bool((q == null()))))){
		HX_STACK_LINE(719)
		return false;
	}
	else{
		HX_STACK_LINE(720)
		if (((bool((bool((bool((p->left == q->left)) || bool((p->left == q->right)))) || bool((p->right == q->left)))) || bool((p->right == q->right))))){
			HX_STACK_LINE(720)
			return false;
		}
		else{
			HX_STACK_LINE(722)
			Float lsign = ((((q->left->x - p->left->x)) * ((p->right->y - p->left->y))) - (((p->right->x - p->left->x)) * ((q->left->y - p->left->y))));		HX_STACK_VAR(lsign,"lsign");
			HX_STACK_LINE(723)
			Float rsign = ((((q->right->x - p->left->x)) * ((p->right->y - p->left->y))) - (((p->right->x - p->left->x)) * ((q->right->y - p->left->y))));		HX_STACK_VAR(rsign,"rsign");
			HX_STACK_LINE(724)
			if ((((lsign * rsign) > (int)0))){
				HX_STACK_LINE(724)
				return false;
			}
			else{
				HX_STACK_LINE(726)
				Float lsign2 = ((((p->left->x - q->left->x)) * ((q->right->y - q->left->y))) - (((q->right->x - q->left->x)) * ((p->left->y - q->left->y))));		HX_STACK_VAR(lsign2,"lsign2");
				HX_STACK_LINE(727)
				Float rsign2 = ((((p->right->x - q->left->x)) * ((q->right->y - q->left->y))) - (((q->right->x - q->left->x)) * ((p->right->y - q->left->y))));		HX_STACK_VAR(rsign2,"rsign2");
				HX_STACK_LINE(728)
				if ((((lsign2 * rsign2) > (int)0))){
					HX_STACK_LINE(728)
					return false;
				}
				else{
					HX_STACK_LINE(729)
					if (((bool(((lsign * rsign) >= (int)0)) && bool(((lsign2 * rsign2) >= (int)0))))){
						HX_STACK_LINE(729)
						return true;
					}
					else{
						HX_STACK_LINE(732)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(718)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,intersect,return )

Void ZPP_SimpleSweep_obj::remove( ::zpp_nape::geom::ZPP_SimpleSeg e){
{
		HX_STACK_PUSH("ZPP_SimpleSweep::remove","zpp_nape/geom/Simple.hx",710);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(711)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nxt = this->tree->successor_node(e->node);		HX_STACK_VAR(nxt,"nxt");
		HX_STACK_LINE(712)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = this->tree->predecessor_node(e->node);		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(713)
		if (((nxt != null()))){
			HX_STACK_LINE(713)
			nxt->data->prev = e->prev;
		}
		HX_STACK_LINE(714)
		if (((pre != null()))){
			HX_STACK_LINE(714)
			pre->data->next = e->next;
		}
		HX_STACK_LINE(715)
		this->tree->remove_node(e->node);
		HX_STACK_LINE(716)
		e->node = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimpleSweep_obj,remove,(void))

::zpp_nape::geom::ZPP_SimpleSeg ZPP_SimpleSweep_obj::add( ::zpp_nape::geom::ZPP_SimpleSeg e){
	HX_STACK_PUSH("ZPP_SimpleSweep::add","zpp_nape/geom/Simple.hx",696);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(697)
	e->node = this->tree->insert(e);
	HX_STACK_LINE(698)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nxt = this->tree->successor_node(e->node);		HX_STACK_VAR(nxt,"nxt");
	HX_STACK_LINE(699)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = this->tree->predecessor_node(e->node);		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(700)
	if (((nxt != null()))){
		HX_STACK_LINE(701)
		e->next = nxt->data;
		HX_STACK_LINE(702)
		nxt->data->prev = e;
	}
	HX_STACK_LINE(704)
	if (((pre != null()))){
		HX_STACK_LINE(705)
		e->prev = pre->data;
		HX_STACK_LINE(706)
		pre->data->next = e;
	}
	HX_STACK_LINE(708)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SimpleSweep_obj,add,return )

Void ZPP_SimpleSweep_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_SimpleSweep::clear","zpp_nape/geom/Simple.hx",693);
		HX_STACK_THIS(this);
		HX_STACK_LINE(693)
		this->tree->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SimpleSweep_obj,clear,(void))

bool ZPP_SimpleSweep_obj::edge_lt( ::zpp_nape::geom::ZPP_SimpleSeg p,::zpp_nape::geom::ZPP_SimpleSeg q){
	HX_STACK_PUSH("ZPP_SimpleSweep::edge_lt","zpp_nape/geom/Simple.hx",493);
	HX_STACK_THIS(this);
	HX_STACK_ARG(p,"p");
	HX_STACK_ARG(q,"q");
	HX_STACK_LINE(494)
	Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(495)
	Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(496)
	Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(497)
	Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(498)
	bool flip;		HX_STACK_VAR(flip,"flip");
	HX_STACK_LINE(499)
	if (((bool((p->left == q->left)) && bool((p->right == q->right))))){
		HX_STACK_LINE(499)
		return false;
	}
	else{
		HX_STACK_LINE(500)
		if (((p->left == q->right))){
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::geom::ZPP_SimpleSeg &p,::zpp_nape::geom::ZPP_SimpleSeg &q){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",501);
					{
						HX_STACK_LINE(501)
						return (  (((p->left->y < p->right->y))) ? bool((p->left->y > q->left->y)) : bool((p->right->y > q->left->y)) );
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( Float &uy,Float &ux,Float &vy,Float &vx,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",505);
					{
						HX_STACK_LINE(506)
						flip = (p->right->x < p->left->x);
						HX_STACK_LINE(507)
						{
							HX_STACK_LINE(508)
							ux = (p->right->x - p->left->x);
							HX_STACK_LINE(509)
							uy = (p->right->y - p->left->y);
						}
						HX_STACK_LINE(511)
						{
							HX_STACK_LINE(512)
							vx = (q->left->x - p->left->x);
							HX_STACK_LINE(513)
							vy = (q->left->y - p->left->y);
						}
						HX_STACK_LINE(515)
						return (  ((flip)) ? Float(((uy * vx) - (ux * vy))) : Float(((vy * ux) - (vx * uy))) );
					}
					return null();
				}
			};
			HX_STACK_LINE(500)
			return (  (((p->left->x == p->right->x))) ? bool(_Function_3_1::Block(p,q)) : bool((_Function_3_2::Block(uy,ux,vy,vx,flip,q,p) < (int)0)) );
		}
		else{
			HX_STACK_LINE(518)
			if (((p->right == q->left))){
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",519);
						{
							HX_STACK_LINE(519)
							return (  (((q->left->y < q->right->y))) ? bool((q->left->y > p->left->y)) : bool((q->right->y > p->left->y)) );
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static Float Block( Float &uy,Float &ux,Float &vy,Float &vx,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",523);
						{
							HX_STACK_LINE(524)
							flip = (q->right->x < q->left->x);
							HX_STACK_LINE(525)
							{
								HX_STACK_LINE(526)
								ux = (q->right->x - q->left->x);
								HX_STACK_LINE(527)
								uy = (q->right->y - q->left->y);
							}
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(530)
								vx = (p->left->x - q->left->x);
								HX_STACK_LINE(531)
								vy = (p->left->y - q->left->y);
							}
							HX_STACK_LINE(533)
							return (  ((flip)) ? Float(((uy * vx) - (ux * vy))) : Float(((vy * ux) - (vx * uy))) );
						}
						return null();
					}
				};
				HX_STACK_LINE(518)
				return !(((  (((q->left->x == q->right->x))) ? bool(_Function_4_1::Block(q,p)) : bool((_Function_4_2::Block(uy,ux,vy,vx,flip,q,p) < (int)0)) )));
			}
			else{
				HX_STACK_LINE(536)
				if (((p->left == q->left))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::geom::ZPP_SimpleSeg &p,::zpp_nape::geom::ZPP_SimpleSeg &q){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",537);
							{
								HX_STACK_LINE(537)
								return (  (((p->left->y < p->right->y))) ? bool((p->left->y > q->right->y)) : bool((p->right->y > q->right->y)) );
							}
							return null();
						}
					};
					struct _Function_5_2{
						inline static Float Block( Float &uy,Float &ux,Float &vy,Float &vx,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",541);
							{
								HX_STACK_LINE(542)
								flip = (p->right->x < p->left->x);
								HX_STACK_LINE(543)
								{
									HX_STACK_LINE(544)
									ux = (p->right->x - p->left->x);
									HX_STACK_LINE(545)
									uy = (p->right->y - p->left->y);
								}
								HX_STACK_LINE(547)
								{
									HX_STACK_LINE(548)
									vx = (q->right->x - p->left->x);
									HX_STACK_LINE(549)
									vy = (q->right->y - p->left->y);
								}
								HX_STACK_LINE(551)
								return (  ((flip)) ? Float(((uy * vx) - (ux * vy))) : Float(((vy * ux) - (vx * uy))) );
							}
							return null();
						}
					};
					HX_STACK_LINE(536)
					return (  (((p->left->x == p->right->x))) ? bool(_Function_5_1::Block(p,q)) : bool((_Function_5_2::Block(uy,ux,vy,vx,flip,q,p) < (int)0)) );
				}
				else{
					HX_STACK_LINE(554)
					if (((p->right == q->right))){
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::geom::ZPP_SimpleSeg &p,::zpp_nape::geom::ZPP_SimpleSeg &q){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",555);
								{
									HX_STACK_LINE(555)
									return (  (((p->left->y < p->right->y))) ? bool((p->left->y > q->left->y)) : bool((p->right->y > q->left->y)) );
								}
								return null();
							}
						};
						struct _Function_6_2{
							inline static Float Block( Float &uy,Float &ux,Float &vy,Float &vx,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",559);
								{
									HX_STACK_LINE(560)
									flip = (p->right->x < p->left->x);
									HX_STACK_LINE(561)
									{
										HX_STACK_LINE(562)
										ux = (p->right->x - p->left->x);
										HX_STACK_LINE(563)
										uy = (p->right->y - p->left->y);
									}
									HX_STACK_LINE(565)
									{
										HX_STACK_LINE(566)
										vx = (q->left->x - p->left->x);
										HX_STACK_LINE(567)
										vy = (q->left->y - p->left->y);
									}
									HX_STACK_LINE(569)
									return (  ((flip)) ? Float(((uy * vx) - (ux * vy))) : Float(((vy * ux) - (vx * uy))) );
								}
								return null();
							}
						};
						HX_STACK_LINE(554)
						return (  (((p->left->x == p->right->x))) ? bool(_Function_6_1::Block(p,q)) : bool((_Function_6_2::Block(uy,ux,vy,vx,flip,q,p) < (int)0)) );
					}
				}
			}
		}
	}
	HX_STACK_LINE(572)
	if (((p->left->x == p->right->x))){
		HX_STACK_LINE(572)
		if (((q->left->x == q->right->x))){
			HX_STACK_LINE(574)
			::zpp_nape::geom::ZPP_SimpleVert pmax = (  (((p->left->y < p->right->y))) ? ::zpp_nape::geom::ZPP_SimpleVert(p->right) : ::zpp_nape::geom::ZPP_SimpleVert(p->left) );		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(575)
			::zpp_nape::geom::ZPP_SimpleVert qmax = (  (((q->left->y < q->right->y))) ? ::zpp_nape::geom::ZPP_SimpleVert(q->right) : ::zpp_nape::geom::ZPP_SimpleVert(q->left) );		HX_STACK_VAR(qmax,"qmax");
			HX_STACK_LINE(576)
			return (pmax->y > qmax->y);
		}
		else{
			struct _Function_3_1{
				inline static Float Block( Float &uy,Float &ux,Float &vy,Float &vx,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",579);
					{
						HX_STACK_LINE(580)
						flip = (q->right->x < q->left->x);
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(582)
							ux = (q->right->x - q->left->x);
							HX_STACK_LINE(583)
							uy = (q->right->y - q->left->y);
						}
						HX_STACK_LINE(585)
						{
							HX_STACK_LINE(586)
							vx = (p->left->x - q->left->x);
							HX_STACK_LINE(587)
							vy = (p->left->y - q->left->y);
						}
						HX_STACK_LINE(589)
						return (  ((flip)) ? Float(((uy * vx) - (ux * vy))) : Float(((vy * ux) - (vx * uy))) );
					}
					return null();
				}
			};
			HX_STACK_LINE(579)
			Float plrg = _Function_3_1::Block(uy,ux,vy,vx,flip,q,p);		HX_STACK_VAR(plrg,"plrg");
			struct _Function_3_2{
				inline static Float Block( Float &uy,Float &ux,Float &vy,Float &vx,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",591);
					{
						HX_STACK_LINE(592)
						flip = (q->right->x < q->left->x);
						HX_STACK_LINE(593)
						{
							HX_STACK_LINE(594)
							ux = (q->right->x - q->left->x);
							HX_STACK_LINE(595)
							uy = (q->right->y - q->left->y);
						}
						HX_STACK_LINE(597)
						{
							HX_STACK_LINE(598)
							vx = (p->right->x - q->left->x);
							HX_STACK_LINE(599)
							vy = (p->right->y - q->left->y);
						}
						HX_STACK_LINE(601)
						return (  ((flip)) ? Float(((uy * vx) - (ux * vy))) : Float(((vy * ux) - (vx * uy))) );
					}
					return null();
				}
			};
			HX_STACK_LINE(591)
			Float aplrg = _Function_3_2::Block(uy,ux,vy,vx,flip,q,p);		HX_STACK_VAR(aplrg,"aplrg");
			HX_STACK_LINE(603)
			if ((((plrg * aplrg) >= (int)0))){
				HX_STACK_LINE(603)
				return (plrg >= 0.0);
			}
			else{
				HX_STACK_LINE(604)
				return (this->sweepx >= p->left->x);
			}
		}
	}
	else{
		HX_STACK_LINE(607)
		if (((q->left->x == q->right->x))){
			struct _Function_3_1{
				inline static Float Block( Float &uy,Float &ux,Float &vy,Float &vx,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",608);
					{
						HX_STACK_LINE(609)
						flip = (p->right->x < p->left->x);
						HX_STACK_LINE(610)
						{
							HX_STACK_LINE(611)
							ux = (p->right->x - p->left->x);
							HX_STACK_LINE(612)
							uy = (p->right->y - p->left->y);
						}
						HX_STACK_LINE(614)
						{
							HX_STACK_LINE(615)
							vx = (q->left->x - p->left->x);
							HX_STACK_LINE(616)
							vy = (q->left->y - p->left->y);
						}
						HX_STACK_LINE(618)
						return (  ((flip)) ? Float(((uy * vx) - (ux * vy))) : Float(((vy * ux) - (vx * uy))) );
					}
					return null();
				}
			};
			HX_STACK_LINE(608)
			Float qlrg = _Function_3_1::Block(uy,ux,vy,vx,flip,q,p);		HX_STACK_VAR(qlrg,"qlrg");
			struct _Function_3_2{
				inline static Float Block( Float &uy,Float &ux,Float &vy,Float &vx,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",620);
					{
						HX_STACK_LINE(621)
						flip = (p->right->x < p->left->x);
						HX_STACK_LINE(622)
						{
							HX_STACK_LINE(623)
							ux = (p->right->x - p->left->x);
							HX_STACK_LINE(624)
							uy = (p->right->y - p->left->y);
						}
						HX_STACK_LINE(626)
						{
							HX_STACK_LINE(627)
							vx = (q->right->x - p->left->x);
							HX_STACK_LINE(628)
							vy = (q->right->y - p->left->y);
						}
						HX_STACK_LINE(630)
						return (  ((flip)) ? Float(((uy * vx) - (ux * vy))) : Float(((vy * ux) - (vx * uy))) );
					}
					return null();
				}
			};
			HX_STACK_LINE(620)
			Float aqlrg = _Function_3_2::Block(uy,ux,vy,vx,flip,q,p);		HX_STACK_VAR(aqlrg,"aqlrg");
			HX_STACK_LINE(632)
			if ((((qlrg * aqlrg) >= (int)0))){
				HX_STACK_LINE(632)
				return (qlrg < 0.0);
			}
			else{
				HX_STACK_LINE(633)
				return (this->sweepx < q->left->x);
			}
		}
		else{
			struct _Function_3_1{
				inline static Float Block( Float &uy,Float &ux,Float &vy,Float &vx,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",636);
					{
						HX_STACK_LINE(637)
						flip = (p->right->x < p->left->x);
						HX_STACK_LINE(638)
						{
							HX_STACK_LINE(639)
							ux = (p->right->x - p->left->x);
							HX_STACK_LINE(640)
							uy = (p->right->y - p->left->y);
						}
						HX_STACK_LINE(642)
						{
							HX_STACK_LINE(643)
							vx = (q->left->x - p->left->x);
							HX_STACK_LINE(644)
							vy = (q->left->y - p->left->y);
						}
						HX_STACK_LINE(646)
						return (  ((flip)) ? Float(((uy * vx) - (ux * vy))) : Float(((vy * ux) - (vx * uy))) );
					}
					return null();
				}
			};
			HX_STACK_LINE(636)
			bool qlrg = (_Function_3_1::Block(uy,ux,vy,vx,flip,q,p) < 0.0);		HX_STACK_VAR(qlrg,"qlrg");
			struct _Function_3_2{
				inline static Float Block( Float &uy,Float &ux,Float &vy,Float &vx,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
					HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",648);
					{
						HX_STACK_LINE(649)
						flip = (p->right->x < p->left->x);
						HX_STACK_LINE(650)
						{
							HX_STACK_LINE(651)
							ux = (p->right->x - p->left->x);
							HX_STACK_LINE(652)
							uy = (p->right->y - p->left->y);
						}
						HX_STACK_LINE(654)
						{
							HX_STACK_LINE(655)
							vx = (q->right->x - p->left->x);
							HX_STACK_LINE(656)
							vy = (q->right->y - p->left->y);
						}
						HX_STACK_LINE(658)
						return (  ((flip)) ? Float(((uy * vx) - (ux * vy))) : Float(((vy * ux) - (vx * uy))) );
					}
					return null();
				}
			};
			HX_STACK_LINE(648)
			bool aqlrg = (_Function_3_2::Block(uy,ux,vy,vx,flip,q,p) < 0.0);		HX_STACK_VAR(aqlrg,"aqlrg");
			HX_STACK_LINE(660)
			if (((qlrg == aqlrg))){
				HX_STACK_LINE(660)
				return qlrg;
			}
			else{
				struct _Function_4_1{
					inline static Float Block( Float &uy,Float &ux,Float &vy,Float &vx,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",662);
						{
							HX_STACK_LINE(663)
							flip = (q->right->x < q->left->x);
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(665)
								ux = (q->right->x - q->left->x);
								HX_STACK_LINE(666)
								uy = (q->right->y - q->left->y);
							}
							HX_STACK_LINE(668)
							{
								HX_STACK_LINE(669)
								vx = (p->left->x - q->left->x);
								HX_STACK_LINE(670)
								vy = (p->left->y - q->left->y);
							}
							HX_STACK_LINE(672)
							return (  ((flip)) ? Float(((uy * vx) - (ux * vy))) : Float(((vy * ux) - (vx * uy))) );
						}
						return null();
					}
				};
				HX_STACK_LINE(662)
				bool plrg = (_Function_4_1::Block(uy,ux,vy,vx,flip,q,p) >= 0.0);		HX_STACK_VAR(plrg,"plrg");
				struct _Function_4_2{
					inline static Float Block( Float &uy,Float &ux,Float &vy,Float &vx,bool &flip,::zpp_nape::geom::ZPP_SimpleSeg &q,::zpp_nape::geom::ZPP_SimpleSeg &p){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Simple.hx",674);
						{
							HX_STACK_LINE(675)
							flip = (q->right->x < q->left->x);
							HX_STACK_LINE(676)
							{
								HX_STACK_LINE(677)
								ux = (q->right->x - q->left->x);
								HX_STACK_LINE(678)
								uy = (q->right->y - q->left->y);
							}
							HX_STACK_LINE(680)
							{
								HX_STACK_LINE(681)
								vx = (p->right->x - q->left->x);
								HX_STACK_LINE(682)
								vy = (p->right->y - q->left->y);
							}
							HX_STACK_LINE(684)
							return (  ((flip)) ? Float(((uy * vx) - (ux * vy))) : Float(((vy * ux) - (vx * uy))) );
						}
						return null();
					}
				};
				HX_STACK_LINE(674)
				bool aplrg = (_Function_4_2::Block(uy,ux,vy,vx,flip,q,p) >= 0.0);		HX_STACK_VAR(aplrg,"aplrg");
				HX_STACK_LINE(686)
				if (((plrg == aplrg))){
					HX_STACK_LINE(686)
					return plrg;
				}
				HX_STACK_LINE(687)
				Float py = (((Float(((this->sweepx - p->left->x))) / Float(((p->right->x - p->left->x)))) * ((p->right->y - p->left->y))) + p->left->y);		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(688)
				Float qy = (((Float(((this->sweepx - q->left->x))) / Float(((q->right->x - q->left->x)))) * ((q->right->y - q->left->y))) + q->left->y);		HX_STACK_VAR(qy,"qy");
				HX_STACK_LINE(689)
				return (py > qy);
			}
		}
	}
	HX_STACK_LINE(572)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,edge_lt,return )

Void ZPP_SimpleSweep_obj::swap_nodes( ::zpp_nape::geom::ZPP_SimpleSeg p,::zpp_nape::geom::ZPP_SimpleSeg q){
{
		HX_STACK_PUSH("ZPP_SimpleSweep::swap_nodes","zpp_nape/geom/Simple.hx",488);
		HX_STACK_THIS(this);
		HX_STACK_ARG(p,"p");
		HX_STACK_ARG(q,"q");
		HX_STACK_LINE(489)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t = p->node;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(490)
		p->node = q->node;
		HX_STACK_LINE(491)
		q->node = t;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_SimpleSweep_obj,swap_nodes,(void))


ZPP_SimpleSweep_obj::ZPP_SimpleSweep_obj()
{
}

void ZPP_SimpleSweep_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SimpleSweep);
	HX_MARK_MEMBER_NAME(tree,"tree");
	HX_MARK_MEMBER_NAME(sweepx,"sweepx");
	HX_MARK_END_CLASS();
}

void ZPP_SimpleSweep_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tree,"tree");
	HX_VISIT_MEMBER_NAME(sweepx,"sweepx");
}

Dynamic ZPP_SimpleSweep_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { return tree; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"sweepx") ) { return sweepx; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"edge_lt") ) { return edge_lt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intersect") ) { return intersect_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"swap_nodes") ) { return swap_nodes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SimpleSweep_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { tree=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sweepx") ) { sweepx=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SimpleSweep_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tree"));
	outFields->push(HX_CSTRING("sweepx"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("intersection"),
	HX_CSTRING("intersect"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("clear"),
	HX_CSTRING("edge_lt"),
	HX_CSTRING("swap_nodes"),
	HX_CSTRING("tree"),
	HX_CSTRING("sweepx"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SimpleSweep_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SimpleSweep_obj::__mClass,"__mClass");
};

Class ZPP_SimpleSweep_obj::__mClass;

void ZPP_SimpleSweep_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_SimpleSweep"), hx::TCanCast< ZPP_SimpleSweep_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_SimpleSweep_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace geom
