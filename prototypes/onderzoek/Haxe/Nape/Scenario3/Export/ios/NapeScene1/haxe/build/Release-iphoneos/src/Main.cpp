#include <hxcpp.h>

#ifndef INCLUDED_FPS
#include <FPS.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_PhysicsData
#include <PhysicsData.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_text_TextField
#include <native/text/TextField.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_PUSH("Main::new","Main.hx",29);
{
	HX_STACK_LINE(45)
	this->particleIteration = (int)0;
	HX_STACK_LINE(49)
	super::__construct();
	HX_STACK_LINE(51)
	if (((this->get_stage() != null()))){
		HX_STACK_LINE(51)
		this->initialise(null());
	}
	else{
		HX_STACK_LINE(54)
		this->addEventListener(::native::events::Event_obj::ADDED_TO_STAGE,this->initialise_dyn(),null(),null(),null());
	}
}
;
	return null();
}

Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::updateGraphics( ::nape::phys::Body b){
{
		HX_STACK_PUSH("Main::updateGraphics","Main.hx",203);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		struct _Function_1_1{
			inline static Dynamic Block( ::nape::phys::Body &b){
				HX_STACK_PUSH("*::closure","Main.hx",204);
				{
					HX_STACK_LINE(204)
					if (((b->zpp_inner_i->userData == null()))){
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","Main.hx",204);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(204)
						b->zpp_inner_i->userData = _Function_3_1::Block();
					}
					HX_STACK_LINE(204)
					return b->zpp_inner_i->userData;
				}
				return null();
			}
		};
		HX_STACK_LINE(204)
		::native::display::DisplayObject graphic = (_Function_1_1::Block(b))->__Field(HX_CSTRING("graphic"),true);		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(205)
		::nape::geom::Vec3 pos = ::PhysicsData_obj::graphicsPosition(b);		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(206)
		graphic->set_rotation(hx::Mod((Float((b->zpp_inner->rot * (int)180)) / Float(::Math_obj::PI)),(int)360));
		struct _Function_1_2{
			inline static Float Block( ::nape::geom::Vec3 &pos){
				HX_STACK_PUSH("*::closure","Main.hx",207);
				{
					HX_STACK_LINE(207)
					if (((bool((pos != null())) && bool(pos->zpp_disp)))){
						HX_STACK_LINE(207)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(207)
					{
						HX_STACK_LINE(207)
						::zpp_nape::geom::ZPP_Vec3 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(207)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(207)
							_this->_validate();
						}
					}
					HX_STACK_LINE(207)
					return pos->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(207)
		graphic->set_x(_Function_1_2::Block(pos));
		struct _Function_1_3{
			inline static Float Block( ::nape::geom::Vec3 &pos){
				HX_STACK_PUSH("*::closure","Main.hx",208);
				{
					HX_STACK_LINE(208)
					if (((bool((pos != null())) && bool(pos->zpp_disp)))){
						HX_STACK_LINE(208)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						::zpp_nape::geom::ZPP_Vec3 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(208)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(208)
							_this->_validate();
						}
					}
					HX_STACK_LINE(208)
					return pos->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(208)
		graphic->set_y(_Function_1_3::Block(pos));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,updateGraphics,(void))

Void Main_obj::enterFrameHandler( ::native::events::Event ev){
{
		HX_STACK_PUSH("Main::enterFrameHandler","Main.hx",180);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ev,"ev");
		HX_STACK_LINE(182)
		this->space->step((Float((int)1) / Float(this->get_stage()->frameRate)),null(),null());
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			::nape::phys::BodyList _this = this->space->zpp_inner->wrap_live;		HX_STACK_VAR(_this,"_this");
			Dynamic lambda = this->updateGraphics_dyn();		HX_STACK_VAR(lambda,"lambda");
			HX_STACK_LINE(195)
			if (((lambda == null()))){
				HX_STACK_LINE(195)
				hx::Throw (HX_CSTRING("Error: Cannot execute null on list elements"));
			}
			struct _Function_2_1{
				inline static ::nape::phys::BodyIterator Block( ::nape::phys::BodyList &_this){
					HX_STACK_PUSH("*::closure","Main.hx",195);
					{
						HX_STACK_LINE(195)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(195)
						return ::nape::phys::BodyIterator_obj::get(_this);
					}
					return null();
				}
			};
			HX_STACK_LINE(195)
			::nape::phys::BodyIterator it = _Function_2_1::Block(_this);		HX_STACK_VAR(it,"it");
			struct _Function_2_2{
				inline static bool Block( ::nape::phys::BodyIterator &it){
					HX_STACK_PUSH("*::closure","Main.hx",195);
					{
						HX_STACK_LINE(195)
						it->zpp_inner->zpp_inner->valmod();
						struct _Function_3_1{
							inline static int Block( ::nape::phys::BodyIterator &it){
								HX_STACK_PUSH("*::closure","Main.hx",195);
								{
									HX_STACK_LINE(195)
									::nape::phys::BodyList _this1 = it->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(195)
									_this1->zpp_inner->valmod();
									HX_STACK_LINE(195)
									if ((_this1->zpp_inner->zip_length)){
										HX_STACK_LINE(195)
										_this1->zpp_inner->zip_length = false;
										HX_STACK_LINE(195)
										_this1->zpp_inner->user_length = _this1->zpp_inner->inner->length;
									}
									HX_STACK_LINE(195)
									return _this1->zpp_inner->user_length;
								}
								return null();
							}
						};
						HX_STACK_LINE(195)
						int length = _Function_3_1::Block(it);		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(195)
						it->zpp_critical = true;
						struct _Function_3_2{
							inline static bool Block( ::nape::phys::BodyIterator &it){
								HX_STACK_PUSH("*::closure","Main.hx",195);
								{
									HX_STACK_LINE(195)
									{
										HX_STACK_LINE(195)
										it->zpp_next = ::nape::phys::BodyIterator_obj::zpp_pool;
										HX_STACK_LINE(195)
										::nape::phys::BodyIterator_obj::zpp_pool = it;
										HX_STACK_LINE(195)
										it->zpp_inner = null();
									}
									HX_STACK_LINE(195)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(195)
						return (  (((it->zpp_i < length))) ? bool(true) : bool(_Function_3_2::Block(it)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(195)
			while((_Function_2_2::Block(it))){
				HX_STACK_LINE(195)
				try{
					struct _Function_4_1{
						inline static ::nape::phys::Body Block( ::nape::phys::BodyIterator &it){
							HX_STACK_PUSH("*::closure","Main.hx",195);
							{
								HX_STACK_LINE(195)
								it->zpp_critical = false;
								HX_STACK_LINE(195)
								return it->zpp_inner->at((it->zpp_i)++);
							}
							return null();
						}
					};
					HX_STACK_LINE(195)
					lambda(_Function_4_1::Block(it)).Cast< Void >();
				}
				catch(Dynamic __e){
					{
						Dynamic e = __e;{
							HX_STACK_LINE(195)
							{
								HX_STACK_LINE(195)
								it->zpp_next = ::nape::phys::BodyIterator_obj::zpp_pool;
								HX_STACK_LINE(195)
								::nape::phys::BodyIterator_obj::zpp_pool = it;
								HX_STACK_LINE(195)
								it->zpp_inner = null();
							}
							HX_STACK_LINE(195)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(195)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,enterFrameHandler,(void))

Dynamic Main_obj::getParticleType( ){
	HX_STACK_PUSH("Main::getParticleType","Main.hx",161);
	HX_STACK_THIS(this);
	HX_STACK_LINE(164)
	Array< ::String > particles = Array_obj< ::String >::__new().Add(HX_CSTRING("rugby")).Add(HX_CSTRING("8ball")).Add(HX_CSTRING("greenleaf")).Add(HX_CSTRING("banaan")).Add(HX_CSTRING("pikachu")).Add(HX_CSTRING("bier")).Add(HX_CSTRING("redleaf")).Add(HX_CSTRING("tennisbal"));		HX_STACK_VAR(particles,"particles");
	HX_STACK_LINE(165)
	Array< Float > startPoints = Array_obj< Float >::__new().Add(0.75).Add(0.25).Add(0.5).Add(0.25).Add(0.5).Add(0.75).Add(0.5).Add(0.25);		HX_STACK_VAR(startPoints,"startPoints");
	HX_STACK_LINE(168)
	if (((this->particleIteration == particles->length))){
		HX_STACK_LINE(168)
		this->particleIteration = (int)0;
	}
	HX_STACK_LINE(171)
	::String selected = particles->__get(this->particleIteration);		HX_STACK_VAR(selected,"selected");
	HX_STACK_LINE(172)
	Float startSelected = (startPoints->__get(this->particleIteration) * ::Std_obj::parseFloat(::Std_obj::string(this->get_stage()->get_stageWidth())));		HX_STACK_VAR(startSelected,"startSelected");
	HX_STACK_LINE(175)
	(this->particleIteration)++;
	HX_STACK_LINE(177)
	return Dynamic( Array_obj<Dynamic>::__new().Add(selected).Add(startSelected));
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,getParticleType,return )

Void Main_obj::addParticle( ){
{
		HX_STACK_PUSH("Main::addParticle","Main.hx",138);
		HX_STACK_THIS(this);
		HX_STACK_LINE(140)
		int w = this->get_stage()->get_stageWidth();		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(141)
		int h = this->get_stage()->get_stageHeight();		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(144)
		Dynamic name = this->getParticleType();		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(147)
		::native::display::Bitmap asset = ::native::display::Bitmap_obj::__new(::nme::installer::Assets_obj::getBitmapData(((HX_CSTRING("assets/") + name->__GetItem((int)0)) + HX_CSTRING(".png")),null()),null(),null());		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(148)
		asset->set_smoothing(true);
		HX_STACK_LINE(149)
		::nape::phys::Body Particle = ::PhysicsData_obj::createBody(name->__GetItem((int)0),asset);		HX_STACK_VAR(Particle,"Particle");
		HX_STACK_LINE(150)
		{
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body &Particle){
					HX_STACK_PUSH("*::closure","Main.hx",150);
					{
						HX_STACK_LINE(150)
						if (((Particle->zpp_inner->wrap_pos == null()))){
							HX_STACK_LINE(150)
							Particle->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(150)
						return Particle->zpp_inner->wrap_pos;
					}
					return null();
				}
			};
			HX_STACK_LINE(150)
			::nape::geom::Vec2 _this = _Function_2_1::Block(Particle);		HX_STACK_VAR(_this,"_this");
			Float x = name->__GetItem((int)1);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(150)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(150)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(150)
			{
				HX_STACK_LINE(150)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(150)
				if ((_this1->_immutable)){
					HX_STACK_LINE(150)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(150)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(150)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(150)
			if (((x != x))){
				HX_STACK_LINE(150)
				hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","Main.hx",150);
					{
						HX_STACK_LINE(150)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(150)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(150)
						{
							HX_STACK_LINE(150)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(150)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(150)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(150)
						return _this->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","Main.hx",150);
					{
						HX_STACK_LINE(150)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(150)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(150)
						{
							HX_STACK_LINE(150)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(150)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(150)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(150)
						return _this->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(150)
			if ((!(((bool((_Function_2_2::Block(_this) == x)) && bool((_Function_2_3::Block(_this) == (int)0))))))){
				HX_STACK_LINE(150)
				{
					HX_STACK_LINE(150)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(150)
					_this->zpp_inner->y = (int)0;
					HX_STACK_LINE(150)
					{
					}
					HX_STACK_LINE(150)
					{
					}
				}
				HX_STACK_LINE(150)
				{
					HX_STACK_LINE(150)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(150)
					if (((_this1->_invalidate_dyn() != null()))){
						HX_STACK_LINE(150)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(150)
			_this;
		}
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(151)
			{
				HX_STACK_LINE(151)
				if (((Particle->zpp_inner->compound != null()))){
					HX_STACK_LINE(151)
					hx::Throw (HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
				}
				HX_STACK_LINE(151)
				Particle->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(151)
				if ((Particle->zpp_inner->world)){
					HX_STACK_LINE(151)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				HX_STACK_LINE(151)
				if (((((  (((Particle->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(Particle->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(151)
					if (((((  (((Particle->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(Particle->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(151)
						Particle->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(151)
					if (((((  (((Particle->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(Particle->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(151)
						((  (((Particle->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(Particle->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(Particle);
					}
					HX_STACK_LINE(151)
					if (((space != null()))){
						HX_STACK_LINE(151)
						::nape::phys::BodyList _this = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(151)
						if ((_this->zpp_inner->reverse_flag)){
							HX_STACK_LINE(151)
							_this->push(Particle);
						}
						else{
							HX_STACK_LINE(151)
							_this->unshift(Particle);
						}
					}
				}
			}
			HX_STACK_LINE(151)
			if (((Particle->zpp_inner->space == null()))){
				HX_STACK_LINE(151)
				Dynamic();
			}
			else{
				HX_STACK_LINE(151)
				Particle->zpp_inner->space->outer;
			}
		}
		HX_STACK_LINE(153)
		this->addChild(asset);
		HX_STACK_LINE(154)
		this->updateGraphics(Particle);
		HX_STACK_LINE(156)
		if (((this->counter != null()))){
			HX_STACK_LINE(156)
			this->counter->add();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,addParticle,(void))

Void Main_obj::createFloors( Float x,Float y,Float width,Float height){
{
		HX_STACK_PUSH("Main::createFloors","Main.hx",117);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		struct _Function_1_1{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","Main.hx",120);
				{
					HX_STACK_LINE(120)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
						HX_STACK_LINE(120)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(120)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(120)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(120)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
				}
				return null();
			}
		};
		HX_STACK_LINE(120)
		::nape::phys::Body floorPhysicsBody = ::nape::phys::Body_obj::__new(_Function_1_1::Block(),null());		HX_STACK_VAR(floorPhysicsBody,"floorPhysicsBody");
		HX_STACK_LINE(123)
		::nape::shape::Polygon p = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect(x,y,width,height,null()),null(),null());		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::nape::shape::ShapeList _this = floorPhysicsBody->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(133)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(133)
				_this->push(p);
			}
			else{
				HX_STACK_LINE(133)
				_this->unshift(p);
			}
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				if (((floorPhysicsBody->zpp_inner->compound != null()))){
					HX_STACK_LINE(134)
					hx::Throw (HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
				}
				HX_STACK_LINE(134)
				floorPhysicsBody->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(134)
				if ((floorPhysicsBody->zpp_inner->world)){
					HX_STACK_LINE(134)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				HX_STACK_LINE(134)
				if (((((  (((floorPhysicsBody->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(floorPhysicsBody->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(134)
					if (((((  (((floorPhysicsBody->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(floorPhysicsBody->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(134)
						floorPhysicsBody->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(134)
					if (((((  (((floorPhysicsBody->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(floorPhysicsBody->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(134)
						((  (((floorPhysicsBody->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(floorPhysicsBody->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(floorPhysicsBody);
					}
					HX_STACK_LINE(134)
					if (((space != null()))){
						HX_STACK_LINE(134)
						::nape::phys::BodyList _this = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(134)
						if ((_this->zpp_inner->reverse_flag)){
							HX_STACK_LINE(134)
							_this->push(floorPhysicsBody);
						}
						else{
							HX_STACK_LINE(134)
							_this->unshift(floorPhysicsBody);
						}
					}
				}
			}
			HX_STACK_LINE(134)
			if (((floorPhysicsBody->zpp_inner->space == null()))){
				HX_STACK_LINE(134)
				Dynamic();
			}
			else{
				HX_STACK_LINE(134)
				floorPhysicsBody->zpp_inner->space->outer;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Main_obj,createFloors,(void))

Void Main_obj::setUp( ){
{
		HX_STACK_PUSH("Main::setUp","Main.hx",89);
		HX_STACK_THIS(this);
		HX_STACK_LINE(89)
		Array< ::Main > _g = Array_obj< ::Main >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		this->createFloors((int)0,this->get_stage()->get_stageHeight(),this->get_stage()->get_stageWidth(),(int)1);
		HX_STACK_LINE(93)
		this->createFloors((int)0,(int)0,(int)1,this->get_stage()->get_stageHeight());
		HX_STACK_LINE(94)
		this->createFloors(this->get_stage()->get_stageWidth(),(int)0,(int)1,this->get_stage()->get_stageHeight());
		HX_STACK_LINE(96)
		this->addParticle();
		HX_STACK_LINE(98)
		::haxe::Timer t = ::haxe::Timer_obj::__new((int)3000);		HX_STACK_VAR(t,"t");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Main >,_g)
		Void run(){
			HX_STACK_PUSH("*::_Function_1_1","Main.hx",99);
			{
				HX_STACK_LINE(99)
				_g->__get((int)0)->addParticle();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(99)
		t->run =  Dynamic(new _Function_1_1(_g));
		HX_STACK_LINE(111)
		this->counter = ::FPS_obj::__new(null(),null(),null());
		HX_STACK_LINE(112)
		this->addChild(this->counter);
		HX_STACK_LINE(113)
		this->counter->add();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setUp,(void))

Void Main_obj::initialise( ::native::events::Event ev){
{
		HX_STACK_PUSH("Main::initialise","Main.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ev,"ev");
		HX_STACK_LINE(63)
		this->get_stage()->set_frameRate((int)60);
		HX_STACK_LINE(65)
		if (((ev != null()))){
			HX_STACK_LINE(65)
			this->removeEventListener(::native::events::Event_obj::ADDED_TO_STAGE,this->initialise_dyn(),null());
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ){
				HX_STACK_PUSH("*::closure","Main.hx",72);
				{
					HX_STACK_LINE(72)
					{
					}
					HX_STACK_LINE(72)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(72)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(72)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(72)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(72)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(72)
						ret->zpp_pool = null();
						HX_STACK_LINE(72)
						ret->zpp_disp = false;
						HX_STACK_LINE(72)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(72)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(72)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( ){
								HX_STACK_PUSH("*::closure","Main.hx",72);
								{
									HX_STACK_LINE(72)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(72)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(72)
									{
										HX_STACK_LINE(72)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(72)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(72)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(72)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(72)
											ret1->next = null();
										}
										HX_STACK_LINE(72)
										ret1->weak = false;
									}
									HX_STACK_LINE(72)
									ret1->_immutable = immutable;
									HX_STACK_LINE(72)
									{
										HX_STACK_LINE(72)
										ret1->x = (int)0;
										HX_STACK_LINE(72)
										ret1->y = (int)600;
										HX_STACK_LINE(72)
										{
										}
										HX_STACK_LINE(72)
										{
										}
									}
									HX_STACK_LINE(72)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(72)
						ret->zpp_inner = _Function_3_1::Block();
						HX_STACK_LINE(72)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(72)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(72)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(72)
							if ((_this->_immutable)){
								HX_STACK_LINE(72)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(72)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(72)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(72)
						{
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","Main.hx",72);
								{
									HX_STACK_LINE(72)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(72)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(72)
									{
										HX_STACK_LINE(72)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(72)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(72)
											_this->_validate();
										}
									}
									HX_STACK_LINE(72)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","Main.hx",72);
								{
									HX_STACK_LINE(72)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(72)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(72)
									{
										HX_STACK_LINE(72)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(72)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(72)
											_this->_validate();
										}
									}
									HX_STACK_LINE(72)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(72)
						if ((!(((bool((_Function_3_1::Block(ret) == (int)0)) && bool((_Function_3_2::Block(ret) == (int)600))))))){
							HX_STACK_LINE(72)
							{
								HX_STACK_LINE(72)
								ret->zpp_inner->x = (int)0;
								HX_STACK_LINE(72)
								ret->zpp_inner->y = (int)600;
								HX_STACK_LINE(72)
								{
								}
								HX_STACK_LINE(72)
								{
								}
							}
							HX_STACK_LINE(72)
							{
								HX_STACK_LINE(72)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(72)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(72)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(72)
						ret;
					}
					HX_STACK_LINE(72)
					ret->zpp_inner->weak = true;
					HX_STACK_LINE(72)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(72)
		::nape::geom::Vec2 gravity = _Function_1_1::Block();		HX_STACK_VAR(gravity,"gravity");
		HX_STACK_LINE(73)
		this->space = ::nape::space::Space_obj::__new(gravity,null());
		HX_STACK_LINE(84)
		this->setUp();
		HX_STACK_LINE(86)
		this->get_stage()->addEventListener(::native::events::Event_obj::ENTER_FRAME,this->enterFrameHandler_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,initialise,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(particleIteration,"particleIteration");
	HX_MARK_MEMBER_NAME(counter,"counter");
	HX_MARK_MEMBER_NAME(space,"space");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(particleIteration,"particleIteration");
	HX_VISIT_MEMBER_NAME(counter,"counter");
	HX_VISIT_MEMBER_NAME(space,"space");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"setUp") ) { return setUp_dyn(); }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { return counter; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialise") ) { return initialise_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addParticle") ) { return addParticle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createFloors") ) { return createFloors_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGraphics") ) { return updateGraphics_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getParticleType") ) { return getParticleType_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"enterFrameHandler") ) { return enterFrameHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"particleIteration") ) { return particleIteration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { counter=inValue.Cast< ::FPS >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"particleIteration") ) { particleIteration=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("particleIteration"));
	outFields->push(HX_CSTRING("counter"));
	outFields->push(HX_CSTRING("space"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateGraphics"),
	HX_CSTRING("enterFrameHandler"),
	HX_CSTRING("getParticleType"),
	HX_CSTRING("addParticle"),
	HX_CSTRING("createFloors"),
	HX_CSTRING("setUp"),
	HX_CSTRING("initialise"),
	HX_CSTRING("particleIteration"),
	HX_CSTRING("counter"),
	HX_CSTRING("space"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

Class Main_obj::__mClass;

void Main_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Main_obj::__boot()
{
}

