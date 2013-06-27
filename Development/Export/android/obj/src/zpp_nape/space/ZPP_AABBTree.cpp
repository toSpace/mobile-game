#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBTree
#include <zpp_nape/space/ZPP_AABBTree.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_AABBTree_obj::__construct()
{
HX_STACK_PUSH("ZPP_AABBTree::new","zpp_nape/space/DynAABBPhase.hx",335);
{
	HX_STACK_LINE(336)
	this->root = null();
}
;
	return null();
}

ZPP_AABBTree_obj::~ZPP_AABBTree_obj() { }

Dynamic ZPP_AABBTree_obj::__CreateEmpty() { return  new ZPP_AABBTree_obj; }
hx::ObjectPtr< ZPP_AABBTree_obj > ZPP_AABBTree_obj::__new()
{  hx::ObjectPtr< ZPP_AABBTree_obj > result = new ZPP_AABBTree_obj();
	result->__construct();
	return result;}

Dynamic ZPP_AABBTree_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AABBTree_obj > result = new ZPP_AABBTree_obj();
	result->__construct();
	return result;}

::zpp_nape::space::ZPP_AABBNode ZPP_AABBTree_obj::balance( ::zpp_nape::space::ZPP_AABBNode a){
	HX_STACK_PUSH("ZPP_AABBTree::balance","zpp_nape/space/DynAABBPhase.hx",589);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(589)
	if (((bool((a->child1 == null())) || bool((a->height < (int)2))))){
		HX_STACK_LINE(590)
		return a;
	}
	else{
		HX_STACK_LINE(592)
		::zpp_nape::space::ZPP_AABBNode b = a->child1;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(593)
		::zpp_nape::space::ZPP_AABBNode c = a->child2;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(594)
		int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
		HX_STACK_LINE(595)
		if (((balance > (int)1))){
			HX_STACK_LINE(596)
			::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(597)
			::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(598)
			c->child1 = a;
			HX_STACK_LINE(599)
			c->parent = a->parent;
			HX_STACK_LINE(600)
			a->parent = c;
			HX_STACK_LINE(601)
			if (((c->parent != null()))){
				HX_STACK_LINE(601)
				if (((c->parent->child1 == a))){
					HX_STACK_LINE(602)
					c->parent->child1 = c;
				}
				else{
					HX_STACK_LINE(603)
					c->parent->child2 = c;
				}
			}
			else{
				HX_STACK_LINE(605)
				this->root = c;
			}
			HX_STACK_LINE(606)
			if (((f->height > g->height))){
				HX_STACK_LINE(607)
				c->child2 = f;
				HX_STACK_LINE(608)
				a->child2 = g;
				HX_STACK_LINE(609)
				g->parent = a;
				HX_STACK_LINE(610)
				{
					HX_STACK_LINE(610)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a1 = b->aabb;		HX_STACK_VAR(a1,"a1");
					::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(610)
					_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
					HX_STACK_LINE(610)
					_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
					HX_STACK_LINE(610)
					_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
					HX_STACK_LINE(610)
					_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
				}
				HX_STACK_LINE(611)
				{
					HX_STACK_LINE(611)
					::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a1 = a->aabb;		HX_STACK_VAR(a1,"a1");
					::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(611)
					_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
					HX_STACK_LINE(611)
					_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
					HX_STACK_LINE(611)
					_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
					HX_STACK_LINE(611)
					_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
				}
				struct _Function_4_1{
					inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &b){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",612);
						{
							HX_STACK_LINE(613)
							int x = b->height;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(614)
							int y = g->height;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(615)
							return (  (((x > y))) ? int(x) : int(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(612)
				a->height = ((int)1 + _Function_4_1::Block(g,b));
				struct _Function_4_2{
					inline static int Block( ::zpp_nape::space::ZPP_AABBNode &f,::zpp_nape::space::ZPP_AABBNode &a){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",617);
						{
							HX_STACK_LINE(618)
							int x = a->height;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(619)
							int y = f->height;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(620)
							return (  (((x > y))) ? int(x) : int(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(617)
				c->height = ((int)1 + _Function_4_2::Block(f,a));
			}
			else{
				HX_STACK_LINE(624)
				c->child2 = g;
				HX_STACK_LINE(625)
				a->child2 = f;
				HX_STACK_LINE(626)
				f->parent = a;
				HX_STACK_LINE(627)
				{
					HX_STACK_LINE(627)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a1 = b->aabb;		HX_STACK_VAR(a1,"a1");
					::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(627)
					_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
					HX_STACK_LINE(627)
					_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
					HX_STACK_LINE(627)
					_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
					HX_STACK_LINE(627)
					_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
				}
				HX_STACK_LINE(628)
				{
					HX_STACK_LINE(628)
					::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a1 = a->aabb;		HX_STACK_VAR(a1,"a1");
					::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(628)
					_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
					HX_STACK_LINE(628)
					_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
					HX_STACK_LINE(628)
					_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
					HX_STACK_LINE(628)
					_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
				}
				struct _Function_4_1{
					inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",629);
						{
							HX_STACK_LINE(630)
							int x = b->height;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(631)
							int y = f->height;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(632)
							return (  (((x > y))) ? int(x) : int(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(629)
				a->height = ((int)1 + _Function_4_1::Block(b,f));
				struct _Function_4_2{
					inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &a){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",634);
						{
							HX_STACK_LINE(635)
							int x = a->height;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(636)
							int y = g->height;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(637)
							return (  (((x > y))) ? int(x) : int(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(634)
				c->height = ((int)1 + _Function_4_2::Block(g,a));
			}
			HX_STACK_LINE(640)
			return c;
		}
		else{
			HX_STACK_LINE(642)
			if (((balance < (int)-1))){
				HX_STACK_LINE(643)
				::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(644)
				::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(645)
				b->child1 = a;
				HX_STACK_LINE(646)
				b->parent = a->parent;
				HX_STACK_LINE(647)
				a->parent = b;
				HX_STACK_LINE(648)
				if (((b->parent != null()))){
					HX_STACK_LINE(648)
					if (((b->parent->child1 == a))){
						HX_STACK_LINE(649)
						b->parent->child1 = b;
					}
					else{
						HX_STACK_LINE(650)
						b->parent->child2 = b;
					}
				}
				else{
					HX_STACK_LINE(652)
					this->root = b;
				}
				HX_STACK_LINE(653)
				if (((f->height > g->height))){
					HX_STACK_LINE(654)
					b->child2 = f;
					HX_STACK_LINE(655)
					a->child1 = g;
					HX_STACK_LINE(656)
					g->parent = a;
					HX_STACK_LINE(657)
					{
						HX_STACK_LINE(657)
						::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB a1 = c->aabb;		HX_STACK_VAR(a1,"a1");
						::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(657)
						_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
						HX_STACK_LINE(657)
						_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
						HX_STACK_LINE(657)
						_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
						HX_STACK_LINE(657)
						_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
					}
					HX_STACK_LINE(658)
					{
						HX_STACK_LINE(658)
						::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB a1 = a->aabb;		HX_STACK_VAR(a1,"a1");
						::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(658)
						_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
						HX_STACK_LINE(658)
						_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
						HX_STACK_LINE(658)
						_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
						HX_STACK_LINE(658)
						_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
					}
					struct _Function_5_1{
						inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",659);
							{
								HX_STACK_LINE(660)
								int x = c->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(661)
								int y = g->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(662)
								return (  (((x > y))) ? int(x) : int(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(659)
					a->height = ((int)1 + _Function_5_1::Block(c,g));
					struct _Function_5_2{
						inline static int Block( ::zpp_nape::space::ZPP_AABBNode &f,::zpp_nape::space::ZPP_AABBNode &a){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",664);
							{
								HX_STACK_LINE(665)
								int x = a->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(666)
								int y = f->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(667)
								return (  (((x > y))) ? int(x) : int(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(664)
					b->height = ((int)1 + _Function_5_2::Block(f,a));
				}
				else{
					HX_STACK_LINE(671)
					b->child2 = g;
					HX_STACK_LINE(672)
					a->child1 = f;
					HX_STACK_LINE(673)
					f->parent = a;
					HX_STACK_LINE(674)
					{
						HX_STACK_LINE(674)
						::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB a1 = c->aabb;		HX_STACK_VAR(a1,"a1");
						::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(674)
						_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
						HX_STACK_LINE(674)
						_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
						HX_STACK_LINE(674)
						_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
						HX_STACK_LINE(674)
						_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
					}
					HX_STACK_LINE(675)
					{
						HX_STACK_LINE(675)
						::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB a1 = a->aabb;		HX_STACK_VAR(a1,"a1");
						::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(675)
						_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
						HX_STACK_LINE(675)
						_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
						HX_STACK_LINE(675)
						_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
						HX_STACK_LINE(675)
						_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
					}
					struct _Function_5_1{
						inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",676);
							{
								HX_STACK_LINE(677)
								int x = c->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(678)
								int y = f->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(679)
								return (  (((x > y))) ? int(x) : int(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(676)
					a->height = ((int)1 + _Function_5_1::Block(c,f));
					struct _Function_5_2{
						inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &a){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",681);
							{
								HX_STACK_LINE(682)
								int x = a->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(683)
								int y = g->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(684)
								return (  (((x > y))) ? int(x) : int(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(681)
					b->height = ((int)1 + _Function_5_2::Block(g,a));
				}
				HX_STACK_LINE(687)
				return b;
			}
			else{
				HX_STACK_LINE(689)
				return a;
			}
		}
	}
	HX_STACK_LINE(589)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,balance,return )

Void ZPP_AABBTree_obj::inlined_removeLeaf( ::zpp_nape::space::ZPP_AABBNode leaf){
{
		HX_STACK_PUSH("ZPP_AABBTree::inlined_removeLeaf","zpp_nape/space/DynAABBPhase.hx",520);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leaf,"leaf");
		HX_STACK_LINE(520)
		if (((leaf == this->root))){
			HX_STACK_LINE(522)
			this->root = null();
			HX_STACK_LINE(523)
			return null();
		}
		else{
			HX_STACK_LINE(526)
			::zpp_nape::space::ZPP_AABBNode parent = leaf->parent;		HX_STACK_VAR(parent,"parent");
			HX_STACK_LINE(527)
			::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
			HX_STACK_LINE(528)
			::zpp_nape::space::ZPP_AABBNode sibling = (  (((parent->child1 == leaf))) ? ::zpp_nape::space::ZPP_AABBNode(parent->child2) : ::zpp_nape::space::ZPP_AABBNode(parent->child1) );		HX_STACK_VAR(sibling,"sibling");
			HX_STACK_LINE(529)
			if (((gparent != null()))){
				HX_STACK_LINE(530)
				if (((gparent->child1 == parent))){
					HX_STACK_LINE(530)
					gparent->child1 = sibling;
				}
				else{
					HX_STACK_LINE(531)
					gparent->child2 = sibling;
				}
				HX_STACK_LINE(532)
				sibling->parent = gparent;
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(534)
					::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(543)
					{
						HX_STACK_LINE(543)
						o->height = (int)-1;
						HX_STACK_LINE(543)
						{
							HX_STACK_LINE(543)
							::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(543)
							{
								HX_STACK_LINE(543)
								if (((o1->outer != null()))){
									HX_STACK_LINE(543)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(543)
									o1->outer = null();
								}
								HX_STACK_LINE(543)
								o1->wrap_min = o1->wrap_max = null();
								HX_STACK_LINE(543)
								o1->_invalidate = null();
								HX_STACK_LINE(543)
								o1->_validate = null();
							}
							HX_STACK_LINE(543)
							o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
							HX_STACK_LINE(543)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
						}
						HX_STACK_LINE(543)
						o->child1 = o->child2 = o->parent = null();
						HX_STACK_LINE(543)
						o->next = null();
						HX_STACK_LINE(543)
						o->snext = null();
						HX_STACK_LINE(543)
						o->mnext = null();
					}
					HX_STACK_LINE(544)
					o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(545)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
				}
				HX_STACK_LINE(550)
				::zpp_nape::space::ZPP_AABBNode node = gparent;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(551)
				while(((node != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &node){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",552);
							{
								HX_STACK_LINE(552)
								::zpp_nape::space::ZPP_AABBNode b = node->child1;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(552)
								::zpp_nape::space::ZPP_AABBNode c = node->child2;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(552)
								int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
								struct _Function_5_1{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &b){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",552);
										{
											HX_STACK_LINE(552)
											::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(552)
											::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(552)
											c->child1 = node;
											HX_STACK_LINE(552)
											c->parent = node->parent;
											HX_STACK_LINE(552)
											node->parent = c;
											HX_STACK_LINE(552)
											if (((c->parent != null()))){
												HX_STACK_LINE(552)
												if (((c->parent->child1 == node))){
													HX_STACK_LINE(552)
													c->parent->child1 = c;
												}
												else{
													HX_STACK_LINE(552)
													c->parent->child2 = c;
												}
											}
											else{
												HX_STACK_LINE(552)
												__this->root = c;
											}
											HX_STACK_LINE(552)
											if (((f->height > g->height))){
												HX_STACK_LINE(552)
												c->child2 = f;
												HX_STACK_LINE(552)
												node->child2 = g;
												HX_STACK_LINE(552)
												g->parent = node;
												HX_STACK_LINE(552)
												{
													HX_STACK_LINE(552)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(552)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(552)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(552)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(552)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(552)
												{
													HX_STACK_LINE(552)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(552)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(552)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(552)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(552)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &b){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",552);
														{
															HX_STACK_LINE(552)
															int x = b->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(552)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(552)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(552)
												node->height = ((int)1 + _Function_7_1::Block(g,b));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",552);
														{
															HX_STACK_LINE(552)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(552)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(552)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(552)
												c->height = ((int)1 + _Function_7_2::Block(node,f));
											}
											else{
												HX_STACK_LINE(552)
												c->child2 = g;
												HX_STACK_LINE(552)
												node->child2 = f;
												HX_STACK_LINE(552)
												f->parent = node;
												HX_STACK_LINE(552)
												{
													HX_STACK_LINE(552)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(552)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(552)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(552)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(552)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(552)
												{
													HX_STACK_LINE(552)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(552)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(552)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(552)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(552)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",552);
														{
															HX_STACK_LINE(552)
															int x = b->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(552)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(552)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(552)
												node->height = ((int)1 + _Function_7_1::Block(b,f));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &node){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",552);
														{
															HX_STACK_LINE(552)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(552)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(552)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(552)
												c->height = ((int)1 + _Function_7_2::Block(g,node));
											}
											HX_STACK_LINE(552)
											return c;
										}
										return null();
									}
								};
								struct _Function_5_2{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &b){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",552);
										{
											HX_STACK_LINE(552)
											::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(552)
											::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(552)
											b->child1 = node;
											HX_STACK_LINE(552)
											b->parent = node->parent;
											HX_STACK_LINE(552)
											node->parent = b;
											HX_STACK_LINE(552)
											if (((b->parent != null()))){
												HX_STACK_LINE(552)
												if (((b->parent->child1 == node))){
													HX_STACK_LINE(552)
													b->parent->child1 = b;
												}
												else{
													HX_STACK_LINE(552)
													b->parent->child2 = b;
												}
											}
											else{
												HX_STACK_LINE(552)
												__this->root = b;
											}
											HX_STACK_LINE(552)
											if (((f->height > g->height))){
												HX_STACK_LINE(552)
												b->child2 = f;
												HX_STACK_LINE(552)
												node->child1 = g;
												HX_STACK_LINE(552)
												g->parent = node;
												HX_STACK_LINE(552)
												{
													HX_STACK_LINE(552)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(552)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(552)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(552)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(552)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(552)
												{
													HX_STACK_LINE(552)
													::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(552)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(552)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(552)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(552)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",552);
														{
															HX_STACK_LINE(552)
															int x = c->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(552)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(552)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(552)
												node->height = ((int)1 + _Function_7_1::Block(c,g));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",552);
														{
															HX_STACK_LINE(552)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(552)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(552)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(552)
												b->height = ((int)1 + _Function_7_2::Block(node,f));
											}
											else{
												HX_STACK_LINE(552)
												b->child2 = g;
												HX_STACK_LINE(552)
												node->child1 = f;
												HX_STACK_LINE(552)
												f->parent = node;
												HX_STACK_LINE(552)
												{
													HX_STACK_LINE(552)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(552)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(552)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(552)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(552)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(552)
												{
													HX_STACK_LINE(552)
													::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(552)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(552)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(552)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(552)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",552);
														{
															HX_STACK_LINE(552)
															int x = c->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(552)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(552)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(552)
												node->height = ((int)1 + _Function_7_1::Block(c,f));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &node){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",552);
														{
															HX_STACK_LINE(552)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(552)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(552)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(552)
												b->height = ((int)1 + _Function_7_2::Block(g,node));
											}
											HX_STACK_LINE(552)
											return b;
										}
										return null();
									}
								};
								HX_STACK_LINE(552)
								return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_5_1::Block(c,__this,node,b)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_5_2::Block(__this,c,node,b)) : ::zpp_nape::space::ZPP_AABBNode(node) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(552)
					node = (  (((bool((node->child1 == null())) || bool((node->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node) : ::zpp_nape::space::ZPP_AABBNode(_Function_4_1::Block(this,node)) );
					HX_STACK_LINE(553)
					::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
					HX_STACK_LINE(554)
					::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
					HX_STACK_LINE(555)
					{
						HX_STACK_LINE(555)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
						::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(555)
						_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
						HX_STACK_LINE(555)
						_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
						HX_STACK_LINE(555)
						_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
						HX_STACK_LINE(555)
						_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
					}
					struct _Function_4_2{
						inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",556);
							{
								HX_STACK_LINE(557)
								int x = child1->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(558)
								int y = child2->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(559)
								return (  (((x > y))) ? int(x) : int(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(556)
					node->height = ((int)1 + _Function_4_2::Block(child1,child2));
					HX_STACK_LINE(561)
					node = node->parent;
				}
			}
			else{
				HX_STACK_LINE(565)
				this->root = sibling;
				HX_STACK_LINE(566)
				sibling->parent = null();
				HX_STACK_LINE(567)
				{
					HX_STACK_LINE(568)
					::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(577)
					{
						HX_STACK_LINE(577)
						o->height = (int)-1;
						HX_STACK_LINE(577)
						{
							HX_STACK_LINE(577)
							::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(577)
							{
								HX_STACK_LINE(577)
								if (((o1->outer != null()))){
									HX_STACK_LINE(577)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(577)
									o1->outer = null();
								}
								HX_STACK_LINE(577)
								o1->wrap_min = o1->wrap_max = null();
								HX_STACK_LINE(577)
								o1->_invalidate = null();
								HX_STACK_LINE(577)
								o1->_validate = null();
							}
							HX_STACK_LINE(577)
							o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
							HX_STACK_LINE(577)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
						}
						HX_STACK_LINE(577)
						o->child1 = o->child2 = o->parent = null();
						HX_STACK_LINE(577)
						o->next = null();
						HX_STACK_LINE(577)
						o->snext = null();
						HX_STACK_LINE(577)
						o->mnext = null();
					}
					HX_STACK_LINE(578)
					o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(579)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,inlined_removeLeaf,(void))

Void ZPP_AABBTree_obj::removeLeaf( ::zpp_nape::space::ZPP_AABBNode leaf){
{
		HX_STACK_PUSH("ZPP_AABBTree::removeLeaf","zpp_nape/space/DynAABBPhase.hx",515);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leaf,"leaf");
		HX_STACK_LINE(515)
		if (((leaf == this->root))){
			HX_STACK_LINE(516)
			this->root = null();
			HX_STACK_LINE(516)
			Dynamic();
		}
		else{
			HX_STACK_LINE(516)
			::zpp_nape::space::ZPP_AABBNode parent = leaf->parent;		HX_STACK_VAR(parent,"parent");
			HX_STACK_LINE(516)
			::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
			HX_STACK_LINE(516)
			::zpp_nape::space::ZPP_AABBNode sibling = (  (((parent->child1 == leaf))) ? ::zpp_nape::space::ZPP_AABBNode(parent->child2) : ::zpp_nape::space::ZPP_AABBNode(parent->child1) );		HX_STACK_VAR(sibling,"sibling");
			HX_STACK_LINE(516)
			if (((gparent != null()))){
				HX_STACK_LINE(516)
				if (((gparent->child1 == parent))){
					HX_STACK_LINE(516)
					gparent->child1 = sibling;
				}
				else{
					HX_STACK_LINE(516)
					gparent->child2 = sibling;
				}
				HX_STACK_LINE(516)
				sibling->parent = gparent;
				HX_STACK_LINE(516)
				{
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(516)
					{
						HX_STACK_LINE(516)
						o->height = (int)-1;
						HX_STACK_LINE(516)
						{
							HX_STACK_LINE(516)
							::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(516)
							{
								HX_STACK_LINE(516)
								if (((o1->outer != null()))){
									HX_STACK_LINE(516)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(516)
									o1->outer = null();
								}
								HX_STACK_LINE(516)
								o1->wrap_min = o1->wrap_max = null();
								HX_STACK_LINE(516)
								o1->_invalidate = null();
								HX_STACK_LINE(516)
								o1->_validate = null();
							}
							HX_STACK_LINE(516)
							o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
							HX_STACK_LINE(516)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
						}
						HX_STACK_LINE(516)
						o->child1 = o->child2 = o->parent = null();
						HX_STACK_LINE(516)
						o->next = null();
						HX_STACK_LINE(516)
						o->snext = null();
						HX_STACK_LINE(516)
						o->mnext = null();
					}
					HX_STACK_LINE(516)
					o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
				}
				HX_STACK_LINE(516)
				::zpp_nape::space::ZPP_AABBNode node = gparent;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(516)
				while(((node != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &node){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",516);
							{
								HX_STACK_LINE(516)
								::zpp_nape::space::ZPP_AABBNode b = node->child1;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(516)
								::zpp_nape::space::ZPP_AABBNode c = node->child2;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(516)
								int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
								struct _Function_5_1{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &b){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",516);
										{
											HX_STACK_LINE(516)
											::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(516)
											::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(516)
											c->child1 = node;
											HX_STACK_LINE(516)
											c->parent = node->parent;
											HX_STACK_LINE(516)
											node->parent = c;
											HX_STACK_LINE(516)
											if (((c->parent != null()))){
												HX_STACK_LINE(516)
												if (((c->parent->child1 == node))){
													HX_STACK_LINE(516)
													c->parent->child1 = c;
												}
												else{
													HX_STACK_LINE(516)
													c->parent->child2 = c;
												}
											}
											else{
												HX_STACK_LINE(516)
												__this->root = c;
											}
											HX_STACK_LINE(516)
											if (((f->height > g->height))){
												HX_STACK_LINE(516)
												c->child2 = f;
												HX_STACK_LINE(516)
												node->child2 = g;
												HX_STACK_LINE(516)
												g->parent = node;
												HX_STACK_LINE(516)
												{
													HX_STACK_LINE(516)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(516)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(516)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(516)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(516)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(516)
												{
													HX_STACK_LINE(516)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(516)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(516)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(516)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(516)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &b){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",516);
														{
															HX_STACK_LINE(516)
															int x = b->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(516)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(516)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(516)
												node->height = ((int)1 + _Function_7_1::Block(g,b));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",516);
														{
															HX_STACK_LINE(516)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(516)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(516)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(516)
												c->height = ((int)1 + _Function_7_2::Block(node,f));
											}
											else{
												HX_STACK_LINE(516)
												c->child2 = g;
												HX_STACK_LINE(516)
												node->child2 = f;
												HX_STACK_LINE(516)
												f->parent = node;
												HX_STACK_LINE(516)
												{
													HX_STACK_LINE(516)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(516)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(516)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(516)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(516)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(516)
												{
													HX_STACK_LINE(516)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(516)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(516)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(516)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(516)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",516);
														{
															HX_STACK_LINE(516)
															int x = b->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(516)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(516)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(516)
												node->height = ((int)1 + _Function_7_1::Block(b,f));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &node){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",516);
														{
															HX_STACK_LINE(516)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(516)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(516)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(516)
												c->height = ((int)1 + _Function_7_2::Block(g,node));
											}
											HX_STACK_LINE(516)
											return c;
										}
										return null();
									}
								};
								struct _Function_5_2{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &b){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",516);
										{
											HX_STACK_LINE(516)
											::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(516)
											::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(516)
											b->child1 = node;
											HX_STACK_LINE(516)
											b->parent = node->parent;
											HX_STACK_LINE(516)
											node->parent = b;
											HX_STACK_LINE(516)
											if (((b->parent != null()))){
												HX_STACK_LINE(516)
												if (((b->parent->child1 == node))){
													HX_STACK_LINE(516)
													b->parent->child1 = b;
												}
												else{
													HX_STACK_LINE(516)
													b->parent->child2 = b;
												}
											}
											else{
												HX_STACK_LINE(516)
												__this->root = b;
											}
											HX_STACK_LINE(516)
											if (((f->height > g->height))){
												HX_STACK_LINE(516)
												b->child2 = f;
												HX_STACK_LINE(516)
												node->child1 = g;
												HX_STACK_LINE(516)
												g->parent = node;
												HX_STACK_LINE(516)
												{
													HX_STACK_LINE(516)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(516)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(516)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(516)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(516)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(516)
												{
													HX_STACK_LINE(516)
													::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(516)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(516)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(516)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(516)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",516);
														{
															HX_STACK_LINE(516)
															int x = c->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(516)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(516)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(516)
												node->height = ((int)1 + _Function_7_1::Block(c,g));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",516);
														{
															HX_STACK_LINE(516)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(516)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(516)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(516)
												b->height = ((int)1 + _Function_7_2::Block(node,f));
											}
											else{
												HX_STACK_LINE(516)
												b->child2 = g;
												HX_STACK_LINE(516)
												node->child1 = f;
												HX_STACK_LINE(516)
												f->parent = node;
												HX_STACK_LINE(516)
												{
													HX_STACK_LINE(516)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(516)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(516)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(516)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(516)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(516)
												{
													HX_STACK_LINE(516)
													::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(516)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(516)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(516)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(516)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",516);
														{
															HX_STACK_LINE(516)
															int x = c->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(516)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(516)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(516)
												node->height = ((int)1 + _Function_7_1::Block(c,f));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &node){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",516);
														{
															HX_STACK_LINE(516)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(516)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(516)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(516)
												b->height = ((int)1 + _Function_7_2::Block(g,node));
											}
											HX_STACK_LINE(516)
											return b;
										}
										return null();
									}
								};
								HX_STACK_LINE(516)
								return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_5_1::Block(c,__this,node,b)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_5_2::Block(__this,c,node,b)) : ::zpp_nape::space::ZPP_AABBNode(node) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(516)
					node = (  (((bool((node->child1 == null())) || bool((node->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node) : ::zpp_nape::space::ZPP_AABBNode(_Function_4_1::Block(this,node)) );
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
					HX_STACK_LINE(516)
					{
						HX_STACK_LINE(516)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
						::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(516)
						_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
						HX_STACK_LINE(516)
						_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
						HX_STACK_LINE(516)
						_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
						HX_STACK_LINE(516)
						_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
					}
					struct _Function_4_2{
						inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",516);
							{
								HX_STACK_LINE(516)
								int x = child1->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(516)
								int y = child2->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(516)
								return (  (((x > y))) ? int(x) : int(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(516)
					node->height = ((int)1 + _Function_4_2::Block(child1,child2));
					HX_STACK_LINE(516)
					node = node->parent;
				}
			}
			else{
				HX_STACK_LINE(516)
				this->root = sibling;
				HX_STACK_LINE(516)
				sibling->parent = null();
				HX_STACK_LINE(516)
				{
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(516)
					{
						HX_STACK_LINE(516)
						o->height = (int)-1;
						HX_STACK_LINE(516)
						{
							HX_STACK_LINE(516)
							::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(516)
							{
								HX_STACK_LINE(516)
								if (((o1->outer != null()))){
									HX_STACK_LINE(516)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(516)
									o1->outer = null();
								}
								HX_STACK_LINE(516)
								o1->wrap_min = o1->wrap_max = null();
								HX_STACK_LINE(516)
								o1->_invalidate = null();
								HX_STACK_LINE(516)
								o1->_validate = null();
							}
							HX_STACK_LINE(516)
							o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
							HX_STACK_LINE(516)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
						}
						HX_STACK_LINE(516)
						o->child1 = o->child2 = o->parent = null();
						HX_STACK_LINE(516)
						o->next = null();
						HX_STACK_LINE(516)
						o->snext = null();
						HX_STACK_LINE(516)
						o->mnext = null();
					}
					HX_STACK_LINE(516)
					o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,removeLeaf,(void))

Void ZPP_AABBTree_obj::inlined_insertLeaf( ::zpp_nape::space::ZPP_AABBNode leaf){
{
		HX_STACK_PUSH("ZPP_AABBTree::inlined_insertLeaf","zpp_nape/space/DynAABBPhase.hx",425);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leaf,"leaf");
		HX_STACK_LINE(425)
		if (((this->root == null()))){
			HX_STACK_LINE(427)
			this->root = leaf;
			HX_STACK_LINE(428)
			this->root->parent = null();
		}
		else{
			HX_STACK_LINE(431)
			::zpp_nape::geom::ZPP_AABB leafaabb = leaf->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
			HX_STACK_LINE(432)
			::zpp_nape::space::ZPP_AABBNode node = this->root;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(433)
			while((!(((node->child1 == null()))))){
				HX_STACK_LINE(434)
				::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(435)
				::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
				struct _Function_3_1{
					inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &node){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",436);
						{
							HX_STACK_LINE(436)
							::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(436)
							return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
						}
						return null();
					}
				};
				HX_STACK_LINE(436)
				Float area = _Function_3_1::Block(node);		HX_STACK_VAR(area,"area");
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(437)
					_this->minx = (  (((a->minx < leafaabb->minx))) ? Float(a->minx) : Float(leafaabb->minx) );
					HX_STACK_LINE(437)
					_this->miny = (  (((a->miny < leafaabb->miny))) ? Float(a->miny) : Float(leafaabb->miny) );
					HX_STACK_LINE(437)
					_this->maxx = (  (((a->maxx > leafaabb->maxx))) ? Float(a->maxx) : Float(leafaabb->maxx) );
					HX_STACK_LINE(437)
					_this->maxy = (  (((a->maxy > leafaabb->maxy))) ? Float(a->maxy) : Float(leafaabb->maxy) );
				}
				struct _Function_3_2{
					inline static Float Block( ){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",438);
						{
							HX_STACK_LINE(438)
							::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(438)
							return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
						}
						return null();
					}
				};
				HX_STACK_LINE(438)
				Float carea = _Function_3_2::Block();		HX_STACK_VAR(carea,"carea");
				HX_STACK_LINE(439)
				Float cost = ((int)2 * carea);		HX_STACK_VAR(cost,"cost");
				HX_STACK_LINE(440)
				Float icost = ((int)2 * ((carea - area)));		HX_STACK_VAR(icost,"icost");
				struct _Function_3_3{
					inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::geom::ZPP_AABB &leafaabb,Float &icost){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",441);
						{
							HX_STACK_LINE(442)
							{
								HX_STACK_LINE(442)
								::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(442)
								_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
								HX_STACK_LINE(442)
								_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
								HX_STACK_LINE(442)
								_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
								HX_STACK_LINE(442)
								_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
							}
							struct _Function_4_1{
								inline static Float Block( ){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",443);
									{
										HX_STACK_LINE(443)
										::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(443)
										return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",444);
									{
										struct _Function_5_1{
											inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",445);
												{
													HX_STACK_LINE(445)
													::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(445)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(445)
										Float oarea = _Function_5_1::Block(child1);		HX_STACK_VAR(oarea,"oarea");
										struct _Function_5_2{
											inline static Float Block( ){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",446);
												{
													HX_STACK_LINE(446)
													::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(446)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(446)
										Float narea = _Function_5_2::Block();		HX_STACK_VAR(narea,"narea");
										HX_STACK_LINE(447)
										return ((narea - oarea) + icost);
									}
									return null();
								}
							};
							HX_STACK_LINE(443)
							return (  (((child1->child1 == null()))) ? Float((_Function_4_1::Block() + icost)) : Float(_Function_4_2::Block(child1,icost)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(441)
				Float cost1 = _Function_3_3::Block(child1,leafaabb,icost);		HX_STACK_VAR(cost1,"cost1");
				struct _Function_3_4{
					inline static Float Block( ::zpp_nape::geom::ZPP_AABB &leafaabb,Float &icost,::zpp_nape::space::ZPP_AABBNode &child2){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",450);
						{
							HX_STACK_LINE(451)
							{
								HX_STACK_LINE(451)
								::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(451)
								_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
								HX_STACK_LINE(451)
								_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
								HX_STACK_LINE(451)
								_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
								HX_STACK_LINE(451)
								_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
							}
							struct _Function_4_1{
								inline static Float Block( ){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",452);
									{
										HX_STACK_LINE(452)
										::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(452)
										return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( Float &icost,::zpp_nape::space::ZPP_AABBNode &child2){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",453);
									{
										struct _Function_5_1{
											inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",454);
												{
													HX_STACK_LINE(454)
													::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(454)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(454)
										Float oarea = _Function_5_1::Block(child2);		HX_STACK_VAR(oarea,"oarea");
										struct _Function_5_2{
											inline static Float Block( ){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",455);
												{
													HX_STACK_LINE(455)
													::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(455)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(455)
										Float narea = _Function_5_2::Block();		HX_STACK_VAR(narea,"narea");
										HX_STACK_LINE(456)
										return ((narea - oarea) + icost);
									}
									return null();
								}
							};
							HX_STACK_LINE(452)
							return (  (((child2->child1 == null()))) ? Float((_Function_4_1::Block() + icost)) : Float(_Function_4_2::Block(icost,child2)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(450)
				Float cost2 = _Function_3_4::Block(leafaabb,icost,child2);		HX_STACK_VAR(cost2,"cost2");
				HX_STACK_LINE(459)
				if (((bool((cost < cost1)) && bool((cost < cost2))))){
					HX_STACK_LINE(459)
					break;
				}
				else{
					HX_STACK_LINE(460)
					node = (  (((cost1 < cost2))) ? ::zpp_nape::space::ZPP_AABBNode(child1) : ::zpp_nape::space::ZPP_AABBNode(child2) );
				}
			}
			HX_STACK_LINE(462)
			::zpp_nape::space::ZPP_AABBNode sibling = node;		HX_STACK_VAR(sibling,"sibling");
			HX_STACK_LINE(463)
			::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
			HX_STACK_LINE(464)
			::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
			HX_STACK_LINE(465)
			{
				HX_STACK_LINE(466)
				if (((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool == null()))){
					HX_STACK_LINE(466)
					nparent = ::zpp_nape::space::ZPP_AABBNode_obj::__new();
				}
				else{
					HX_STACK_LINE(473)
					nparent = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(474)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
					HX_STACK_LINE(475)
					nparent->next = null();
				}
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(480)
					{
						HX_STACK_LINE(480)
						if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
							HX_STACK_LINE(480)
							nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
						}
						else{
							HX_STACK_LINE(480)
							nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
							HX_STACK_LINE(480)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nparent->aabb->next;
							HX_STACK_LINE(480)
							nparent->aabb->next = null();
						}
						HX_STACK_LINE(480)
						Dynamic();
					}
					HX_STACK_LINE(480)
					nparent->moved = false;
					HX_STACK_LINE(480)
					nparent->synced = false;
					HX_STACK_LINE(480)
					nparent->first_sync = false;
				}
			}
			HX_STACK_LINE(482)
			nparent->parent = oparent;
			HX_STACK_LINE(483)
			{
				HX_STACK_LINE(483)
				::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(483)
				_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
				HX_STACK_LINE(483)
				_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
				HX_STACK_LINE(483)
				_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
				HX_STACK_LINE(483)
				_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
			}
			HX_STACK_LINE(484)
			nparent->height = (sibling->height + (int)1);
			HX_STACK_LINE(485)
			if (((oparent != null()))){
				HX_STACK_LINE(486)
				if (((oparent->child1 == sibling))){
					HX_STACK_LINE(486)
					oparent->child1 = nparent;
				}
				else{
					HX_STACK_LINE(487)
					oparent->child2 = nparent;
				}
				HX_STACK_LINE(488)
				nparent->child1 = sibling;
				HX_STACK_LINE(489)
				nparent->child2 = leaf;
				HX_STACK_LINE(490)
				sibling->parent = nparent;
				HX_STACK_LINE(491)
				leaf->parent = nparent;
			}
			else{
				HX_STACK_LINE(494)
				nparent->child1 = sibling;
				HX_STACK_LINE(495)
				nparent->child2 = leaf;
				HX_STACK_LINE(496)
				sibling->parent = nparent;
				HX_STACK_LINE(497)
				leaf->parent = nparent;
				HX_STACK_LINE(498)
				this->root = nparent;
			}
			HX_STACK_LINE(500)
			node = leaf->parent;
			HX_STACK_LINE(501)
			while(((node != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &node){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",502);
						{
							HX_STACK_LINE(502)
							::zpp_nape::space::ZPP_AABBNode b = node->child1;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(502)
							::zpp_nape::space::ZPP_AABBNode c = node->child2;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(502)
							int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
							struct _Function_4_1{
								inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &b){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",502);
									{
										HX_STACK_LINE(502)
										::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(502)
										::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(502)
										c->child1 = node;
										HX_STACK_LINE(502)
										c->parent = node->parent;
										HX_STACK_LINE(502)
										node->parent = c;
										HX_STACK_LINE(502)
										if (((c->parent != null()))){
											HX_STACK_LINE(502)
											if (((c->parent->child1 == node))){
												HX_STACK_LINE(502)
												c->parent->child1 = c;
											}
											else{
												HX_STACK_LINE(502)
												c->parent->child2 = c;
											}
										}
										else{
											HX_STACK_LINE(502)
											__this->root = c;
										}
										HX_STACK_LINE(502)
										if (((f->height > g->height))){
											HX_STACK_LINE(502)
											c->child2 = f;
											HX_STACK_LINE(502)
											node->child2 = g;
											HX_STACK_LINE(502)
											g->parent = node;
											HX_STACK_LINE(502)
											{
												HX_STACK_LINE(502)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(502)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(502)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(502)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(502)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(502)
											{
												HX_STACK_LINE(502)
												::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(502)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(502)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(502)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(502)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &b){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",502);
													{
														HX_STACK_LINE(502)
														int x = b->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(502)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(502)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(502)
											node->height = ((int)1 + _Function_6_1::Block(g,b));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",502);
													{
														HX_STACK_LINE(502)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(502)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(502)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(502)
											c->height = ((int)1 + _Function_6_2::Block(node,f));
										}
										else{
											HX_STACK_LINE(502)
											c->child2 = g;
											HX_STACK_LINE(502)
											node->child2 = f;
											HX_STACK_LINE(502)
											f->parent = node;
											HX_STACK_LINE(502)
											{
												HX_STACK_LINE(502)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(502)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(502)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(502)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(502)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(502)
											{
												HX_STACK_LINE(502)
												::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(502)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(502)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(502)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(502)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",502);
													{
														HX_STACK_LINE(502)
														int x = b->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(502)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(502)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(502)
											node->height = ((int)1 + _Function_6_1::Block(b,f));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &node){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",502);
													{
														HX_STACK_LINE(502)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(502)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(502)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(502)
											c->height = ((int)1 + _Function_6_2::Block(g,node));
										}
										HX_STACK_LINE(502)
										return c;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &b){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",502);
									{
										HX_STACK_LINE(502)
										::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(502)
										::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(502)
										b->child1 = node;
										HX_STACK_LINE(502)
										b->parent = node->parent;
										HX_STACK_LINE(502)
										node->parent = b;
										HX_STACK_LINE(502)
										if (((b->parent != null()))){
											HX_STACK_LINE(502)
											if (((b->parent->child1 == node))){
												HX_STACK_LINE(502)
												b->parent->child1 = b;
											}
											else{
												HX_STACK_LINE(502)
												b->parent->child2 = b;
											}
										}
										else{
											HX_STACK_LINE(502)
											__this->root = b;
										}
										HX_STACK_LINE(502)
										if (((f->height > g->height))){
											HX_STACK_LINE(502)
											b->child2 = f;
											HX_STACK_LINE(502)
											node->child1 = g;
											HX_STACK_LINE(502)
											g->parent = node;
											HX_STACK_LINE(502)
											{
												HX_STACK_LINE(502)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(502)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(502)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(502)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(502)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(502)
											{
												HX_STACK_LINE(502)
												::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(502)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(502)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(502)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(502)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",502);
													{
														HX_STACK_LINE(502)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(502)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(502)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(502)
											node->height = ((int)1 + _Function_6_1::Block(c,g));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",502);
													{
														HX_STACK_LINE(502)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(502)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(502)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(502)
											b->height = ((int)1 + _Function_6_2::Block(node,f));
										}
										else{
											HX_STACK_LINE(502)
											b->child2 = g;
											HX_STACK_LINE(502)
											node->child1 = f;
											HX_STACK_LINE(502)
											f->parent = node;
											HX_STACK_LINE(502)
											{
												HX_STACK_LINE(502)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(502)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(502)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(502)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(502)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(502)
											{
												HX_STACK_LINE(502)
												::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(502)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(502)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(502)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(502)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",502);
													{
														HX_STACK_LINE(502)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(502)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(502)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(502)
											node->height = ((int)1 + _Function_6_1::Block(c,f));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &node){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",502);
													{
														HX_STACK_LINE(502)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(502)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(502)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(502)
											b->height = ((int)1 + _Function_6_2::Block(g,node));
										}
										HX_STACK_LINE(502)
										return b;
									}
									return null();
								}
							};
							HX_STACK_LINE(502)
							return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_4_1::Block(c,__this,node,b)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_4_2::Block(__this,c,node,b)) : ::zpp_nape::space::ZPP_AABBNode(node) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(502)
				node = (  (((bool((node->child1 == null())) || bool((node->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node) : ::zpp_nape::space::ZPP_AABBNode(_Function_3_1::Block(this,node)) );
				HX_STACK_LINE(503)
				::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(504)
				::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
				struct _Function_3_2{
					inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",505);
						{
							HX_STACK_LINE(506)
							int x = child1->height;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(507)
							int y = child2->height;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(508)
							return (  (((x > y))) ? int(x) : int(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(505)
				node->height = ((int)1 + _Function_3_2::Block(child1,child2));
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
					::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(510)
					_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
					HX_STACK_LINE(510)
					_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
					HX_STACK_LINE(510)
					_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
					HX_STACK_LINE(510)
					_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
				}
				HX_STACK_LINE(511)
				node = node->parent;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,inlined_insertLeaf,(void))

Void ZPP_AABBTree_obj::insertLeaf( ::zpp_nape::space::ZPP_AABBNode leaf){
{
		HX_STACK_PUSH("ZPP_AABBTree::insertLeaf","zpp_nape/space/DynAABBPhase.hx",420);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leaf,"leaf");
		HX_STACK_LINE(420)
		if (((this->root == null()))){
			HX_STACK_LINE(421)
			this->root = leaf;
			HX_STACK_LINE(421)
			this->root->parent = null();
		}
		else{
			HX_STACK_LINE(421)
			::zpp_nape::geom::ZPP_AABB leafaabb = leaf->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
			HX_STACK_LINE(421)
			::zpp_nape::space::ZPP_AABBNode node = this->root;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(421)
			while((!(((node->child1 == null()))))){
				HX_STACK_LINE(421)
				::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(421)
				::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
				struct _Function_3_1{
					inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &node){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
						{
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(421)
							return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
						}
						return null();
					}
				};
				HX_STACK_LINE(421)
				Float area = _Function_3_1::Block(node);		HX_STACK_VAR(area,"area");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(421)
					_this->minx = (  (((a->minx < leafaabb->minx))) ? Float(a->minx) : Float(leafaabb->minx) );
					HX_STACK_LINE(421)
					_this->miny = (  (((a->miny < leafaabb->miny))) ? Float(a->miny) : Float(leafaabb->miny) );
					HX_STACK_LINE(421)
					_this->maxx = (  (((a->maxx > leafaabb->maxx))) ? Float(a->maxx) : Float(leafaabb->maxx) );
					HX_STACK_LINE(421)
					_this->maxy = (  (((a->maxy > leafaabb->maxy))) ? Float(a->maxy) : Float(leafaabb->maxy) );
				}
				struct _Function_3_2{
					inline static Float Block( ){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
						{
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(421)
							return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
						}
						return null();
					}
				};
				HX_STACK_LINE(421)
				Float carea = _Function_3_2::Block();		HX_STACK_VAR(carea,"carea");
				HX_STACK_LINE(421)
				Float cost = ((int)2 * carea);		HX_STACK_VAR(cost,"cost");
				HX_STACK_LINE(421)
				Float icost = ((int)2 * ((carea - area)));		HX_STACK_VAR(icost,"icost");
				struct _Function_3_3{
					inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::geom::ZPP_AABB &leafaabb,Float &icost){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
						{
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(421)
								_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
								HX_STACK_LINE(421)
								_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
								HX_STACK_LINE(421)
								_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
								HX_STACK_LINE(421)
								_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
							}
							struct _Function_4_1{
								inline static Float Block( ){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
									{
										HX_STACK_LINE(421)
										::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(421)
										return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
									{
										struct _Function_5_1{
											inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
												{
													HX_STACK_LINE(421)
													::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(421)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(421)
										Float oarea = _Function_5_1::Block(child1);		HX_STACK_VAR(oarea,"oarea");
										struct _Function_5_2{
											inline static Float Block( ){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
												{
													HX_STACK_LINE(421)
													::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(421)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(421)
										Float narea = _Function_5_2::Block();		HX_STACK_VAR(narea,"narea");
										HX_STACK_LINE(421)
										return ((narea - oarea) + icost);
									}
									return null();
								}
							};
							HX_STACK_LINE(421)
							return (  (((child1->child1 == null()))) ? Float((_Function_4_1::Block() + icost)) : Float(_Function_4_2::Block(child1,icost)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(421)
				Float cost1 = _Function_3_3::Block(child1,leafaabb,icost);		HX_STACK_VAR(cost1,"cost1");
				struct _Function_3_4{
					inline static Float Block( ::zpp_nape::geom::ZPP_AABB &leafaabb,Float &icost,::zpp_nape::space::ZPP_AABBNode &child2){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
						{
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(421)
								_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
								HX_STACK_LINE(421)
								_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
								HX_STACK_LINE(421)
								_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
								HX_STACK_LINE(421)
								_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
							}
							struct _Function_4_1{
								inline static Float Block( ){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
									{
										HX_STACK_LINE(421)
										::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(421)
										return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( Float &icost,::zpp_nape::space::ZPP_AABBNode &child2){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
									{
										struct _Function_5_1{
											inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
												{
													HX_STACK_LINE(421)
													::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(421)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(421)
										Float oarea = _Function_5_1::Block(child2);		HX_STACK_VAR(oarea,"oarea");
										struct _Function_5_2{
											inline static Float Block( ){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
												{
													HX_STACK_LINE(421)
													::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(421)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(421)
										Float narea = _Function_5_2::Block();		HX_STACK_VAR(narea,"narea");
										HX_STACK_LINE(421)
										return ((narea - oarea) + icost);
									}
									return null();
								}
							};
							HX_STACK_LINE(421)
							return (  (((child2->child1 == null()))) ? Float((_Function_4_1::Block() + icost)) : Float(_Function_4_2::Block(icost,child2)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(421)
				Float cost2 = _Function_3_4::Block(leafaabb,icost,child2);		HX_STACK_VAR(cost2,"cost2");
				HX_STACK_LINE(421)
				if (((bool((cost < cost1)) && bool((cost < cost2))))){
					HX_STACK_LINE(421)
					break;
				}
				else{
					HX_STACK_LINE(421)
					node = (  (((cost1 < cost2))) ? ::zpp_nape::space::ZPP_AABBNode(child1) : ::zpp_nape::space::ZPP_AABBNode(child2) );
				}
			}
			HX_STACK_LINE(421)
			::zpp_nape::space::ZPP_AABBNode sibling = node;		HX_STACK_VAR(sibling,"sibling");
			HX_STACK_LINE(421)
			::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
			HX_STACK_LINE(421)
			::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
			HX_STACK_LINE(421)
			{
				HX_STACK_LINE(421)
				if (((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool == null()))){
					HX_STACK_LINE(421)
					nparent = ::zpp_nape::space::ZPP_AABBNode_obj::__new();
				}
				else{
					HX_STACK_LINE(421)
					nparent = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(421)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
					HX_STACK_LINE(421)
					nparent->next = null();
				}
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
							HX_STACK_LINE(421)
							nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
						}
						else{
							HX_STACK_LINE(421)
							nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nparent->aabb->next;
							HX_STACK_LINE(421)
							nparent->aabb->next = null();
						}
						HX_STACK_LINE(421)
						Dynamic();
					}
					HX_STACK_LINE(421)
					nparent->moved = false;
					HX_STACK_LINE(421)
					nparent->synced = false;
					HX_STACK_LINE(421)
					nparent->first_sync = false;
				}
			}
			HX_STACK_LINE(421)
			nparent->parent = oparent;
			HX_STACK_LINE(421)
			{
				HX_STACK_LINE(421)
				::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(421)
				_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
				HX_STACK_LINE(421)
				_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
				HX_STACK_LINE(421)
				_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
				HX_STACK_LINE(421)
				_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
			}
			HX_STACK_LINE(421)
			nparent->height = (sibling->height + (int)1);
			HX_STACK_LINE(421)
			if (((oparent != null()))){
				HX_STACK_LINE(421)
				if (((oparent->child1 == sibling))){
					HX_STACK_LINE(421)
					oparent->child1 = nparent;
				}
				else{
					HX_STACK_LINE(421)
					oparent->child2 = nparent;
				}
				HX_STACK_LINE(421)
				nparent->child1 = sibling;
				HX_STACK_LINE(421)
				nparent->child2 = leaf;
				HX_STACK_LINE(421)
				sibling->parent = nparent;
				HX_STACK_LINE(421)
				leaf->parent = nparent;
			}
			else{
				HX_STACK_LINE(421)
				nparent->child1 = sibling;
				HX_STACK_LINE(421)
				nparent->child2 = leaf;
				HX_STACK_LINE(421)
				sibling->parent = nparent;
				HX_STACK_LINE(421)
				leaf->parent = nparent;
				HX_STACK_LINE(421)
				this->root = nparent;
			}
			HX_STACK_LINE(421)
			node = leaf->parent;
			HX_STACK_LINE(421)
			while(((node != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &node){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
						{
							HX_STACK_LINE(421)
							::zpp_nape::space::ZPP_AABBNode b = node->child1;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(421)
							::zpp_nape::space::ZPP_AABBNode c = node->child2;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(421)
							int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
							struct _Function_4_1{
								inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &b){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
									{
										HX_STACK_LINE(421)
										::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(421)
										::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(421)
										c->child1 = node;
										HX_STACK_LINE(421)
										c->parent = node->parent;
										HX_STACK_LINE(421)
										node->parent = c;
										HX_STACK_LINE(421)
										if (((c->parent != null()))){
											HX_STACK_LINE(421)
											if (((c->parent->child1 == node))){
												HX_STACK_LINE(421)
												c->parent->child1 = c;
											}
											else{
												HX_STACK_LINE(421)
												c->parent->child2 = c;
											}
										}
										else{
											HX_STACK_LINE(421)
											__this->root = c;
										}
										HX_STACK_LINE(421)
										if (((f->height > g->height))){
											HX_STACK_LINE(421)
											c->child2 = f;
											HX_STACK_LINE(421)
											node->child2 = g;
											HX_STACK_LINE(421)
											g->parent = node;
											HX_STACK_LINE(421)
											{
												HX_STACK_LINE(421)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(421)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(421)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(421)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(421)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(421)
											{
												HX_STACK_LINE(421)
												::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(421)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(421)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(421)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(421)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &b){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
													{
														HX_STACK_LINE(421)
														int x = b->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(421)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(421)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(421)
											node->height = ((int)1 + _Function_6_1::Block(g,b));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
													{
														HX_STACK_LINE(421)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(421)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(421)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(421)
											c->height = ((int)1 + _Function_6_2::Block(node,f));
										}
										else{
											HX_STACK_LINE(421)
											c->child2 = g;
											HX_STACK_LINE(421)
											node->child2 = f;
											HX_STACK_LINE(421)
											f->parent = node;
											HX_STACK_LINE(421)
											{
												HX_STACK_LINE(421)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(421)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(421)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(421)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(421)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(421)
											{
												HX_STACK_LINE(421)
												::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(421)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(421)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(421)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(421)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
													{
														HX_STACK_LINE(421)
														int x = b->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(421)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(421)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(421)
											node->height = ((int)1 + _Function_6_1::Block(b,f));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &node){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
													{
														HX_STACK_LINE(421)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(421)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(421)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(421)
											c->height = ((int)1 + _Function_6_2::Block(g,node));
										}
										HX_STACK_LINE(421)
										return c;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &b){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
									{
										HX_STACK_LINE(421)
										::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(421)
										::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(421)
										b->child1 = node;
										HX_STACK_LINE(421)
										b->parent = node->parent;
										HX_STACK_LINE(421)
										node->parent = b;
										HX_STACK_LINE(421)
										if (((b->parent != null()))){
											HX_STACK_LINE(421)
											if (((b->parent->child1 == node))){
												HX_STACK_LINE(421)
												b->parent->child1 = b;
											}
											else{
												HX_STACK_LINE(421)
												b->parent->child2 = b;
											}
										}
										else{
											HX_STACK_LINE(421)
											__this->root = b;
										}
										HX_STACK_LINE(421)
										if (((f->height > g->height))){
											HX_STACK_LINE(421)
											b->child2 = f;
											HX_STACK_LINE(421)
											node->child1 = g;
											HX_STACK_LINE(421)
											g->parent = node;
											HX_STACK_LINE(421)
											{
												HX_STACK_LINE(421)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(421)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(421)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(421)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(421)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(421)
											{
												HX_STACK_LINE(421)
												::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(421)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(421)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(421)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(421)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
													{
														HX_STACK_LINE(421)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(421)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(421)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(421)
											node->height = ((int)1 + _Function_6_1::Block(c,g));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
													{
														HX_STACK_LINE(421)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(421)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(421)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(421)
											b->height = ((int)1 + _Function_6_2::Block(node,f));
										}
										else{
											HX_STACK_LINE(421)
											b->child2 = g;
											HX_STACK_LINE(421)
											node->child1 = f;
											HX_STACK_LINE(421)
											f->parent = node;
											HX_STACK_LINE(421)
											{
												HX_STACK_LINE(421)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(421)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(421)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(421)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(421)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(421)
											{
												HX_STACK_LINE(421)
												::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(421)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(421)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(421)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(421)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
													{
														HX_STACK_LINE(421)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(421)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(421)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(421)
											node->height = ((int)1 + _Function_6_1::Block(c,f));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &g,::zpp_nape::space::ZPP_AABBNode &node){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
													{
														HX_STACK_LINE(421)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(421)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(421)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(421)
											b->height = ((int)1 + _Function_6_2::Block(g,node));
										}
										HX_STACK_LINE(421)
										return b;
									}
									return null();
								}
							};
							HX_STACK_LINE(421)
							return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_4_1::Block(c,__this,node,b)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_4_2::Block(__this,c,node,b)) : ::zpp_nape::space::ZPP_AABBNode(node) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(421)
				node = (  (((bool((node->child1 == null())) || bool((node->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node) : ::zpp_nape::space::ZPP_AABBNode(_Function_3_1::Block(this,node)) );
				HX_STACK_LINE(421)
				::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(421)
				::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
				struct _Function_3_2{
					inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",421);
						{
							HX_STACK_LINE(421)
							int x = child1->height;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(421)
							int y = child2->height;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(421)
							return (  (((x > y))) ? int(x) : int(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(421)
				node->height = ((int)1 + _Function_3_2::Block(child1,child2));
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
					::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(421)
					_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
					HX_STACK_LINE(421)
					_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
					HX_STACK_LINE(421)
					_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
					HX_STACK_LINE(421)
					_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
				}
				HX_STACK_LINE(421)
				node = node->parent;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,insertLeaf,(void))

Void ZPP_AABBTree_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_AABBTree::clear","zpp_nape/space/DynAABBPhase.hx",338);
		HX_STACK_THIS(this);
		HX_STACK_LINE(339)
		if (((this->root == null()))){
			HX_STACK_LINE(339)
			return null();
		}
		HX_STACK_LINE(340)
		::zpp_nape::space::ZPP_AABBNode stack = null();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(350)
			this->root->next = stack;
			HX_STACK_LINE(351)
			stack = this->root;
		}
		HX_STACK_LINE(353)
		while(((stack != null()))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &stack){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",354);
					{
						HX_STACK_LINE(363)
						::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(364)
						stack = ret->next;
						HX_STACK_LINE(365)
						ret->next = null();
						HX_STACK_LINE(366)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(354)
			::zpp_nape::space::ZPP_AABBNode node = _Function_2_1::Block(stack);		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(368)
			if (((node->child1 == null()))){
				HX_STACK_LINE(369)
				node->shape->node = null();
				HX_STACK_LINE(370)
				node->shape->removedFromSpace();
				HX_STACK_LINE(371)
				node->shape = null();
			}
			else{
				HX_STACK_LINE(374)
				if (((node->child1 != null()))){
					HX_STACK_LINE(383)
					node->child1->next = stack;
					HX_STACK_LINE(384)
					stack = node->child1;
				}
				HX_STACK_LINE(386)
				if (((node->child2 != null()))){
					HX_STACK_LINE(395)
					node->child2->next = stack;
					HX_STACK_LINE(396)
					stack = node->child2;
				}
			}
			HX_STACK_LINE(399)
			{
				HX_STACK_LINE(400)
				::zpp_nape::space::ZPP_AABBNode o = node;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					o->height = (int)-1;
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
						HX_STACK_LINE(409)
						{
							HX_STACK_LINE(409)
							if (((o1->outer != null()))){
								HX_STACK_LINE(409)
								o1->outer->zpp_inner = null();
								HX_STACK_LINE(409)
								o1->outer = null();
							}
							HX_STACK_LINE(409)
							o1->wrap_min = o1->wrap_max = null();
							HX_STACK_LINE(409)
							o1->_invalidate = null();
							HX_STACK_LINE(409)
							o1->_validate = null();
						}
						HX_STACK_LINE(409)
						o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
						HX_STACK_LINE(409)
						::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
					}
					HX_STACK_LINE(409)
					o->child1 = o->child2 = o->parent = null();
					HX_STACK_LINE(409)
					o->next = null();
					HX_STACK_LINE(409)
					o->snext = null();
					HX_STACK_LINE(409)
					o->mnext = null();
				}
				HX_STACK_LINE(410)
				o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(411)
				::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(417)
		this->root = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBTree_obj,clear,(void))

::zpp_nape::geom::ZPP_AABB ZPP_AABBTree_obj::tmpaabb;


ZPP_AABBTree_obj::ZPP_AABBTree_obj()
{
}

void ZPP_AABBTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AABBTree);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_END_CLASS();
}

void ZPP_AABBTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
}

Dynamic ZPP_AABBTree_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tmpaabb") ) { return tmpaabb; }
		if (HX_FIELD_EQ(inName,"balance") ) { return balance_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeLeaf") ) { return removeLeaf_dyn(); }
		if (HX_FIELD_EQ(inName,"insertLeaf") ) { return insertLeaf_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_removeLeaf") ) { return inlined_removeLeaf_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_insertLeaf") ) { return inlined_insertLeaf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_AABBTree_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tmpaabb") ) { tmpaabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_AABBTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("root"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("tmpaabb"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("balance"),
	HX_CSTRING("inlined_removeLeaf"),
	HX_CSTRING("removeLeaf"),
	HX_CSTRING("inlined_insertLeaf"),
	HX_CSTRING("insertLeaf"),
	HX_CSTRING("clear"),
	HX_CSTRING("root"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AABBTree_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_AABBTree_obj::tmpaabb,"tmpaabb");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AABBTree_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_AABBTree_obj::tmpaabb,"tmpaabb");
};

Class ZPP_AABBTree_obj::__mClass;

void ZPP_AABBTree_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_AABBTree"), hx::TCanCast< ZPP_AABBTree_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_AABBTree_obj::__boot()
{
	tmpaabb= ::zpp_nape::geom::ZPP_AABB_obj::__new();
}

} // end namespace zpp_nape
} // end namespace space
