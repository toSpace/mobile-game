#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_RenderManager
#include <RenderManager.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif

Void Character_obj::__construct()
{
HX_STACK_PUSH("Character::new","Character.hx",7);
{
	HX_STACK_LINE(7)
	::RenderManager_obj::add(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

Character_obj::~Character_obj() { }

Dynamic Character_obj::__CreateEmpty() { return  new Character_obj; }
hx::ObjectPtr< Character_obj > Character_obj::__new()
{  hx::ObjectPtr< Character_obj > result = new Character_obj();
	result->__construct();
	return result;}

Dynamic Character_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Character_obj > result = new Character_obj();
	result->__construct();
	return result;}

Void Character_obj::walk( ::nape::phys::Body body,Float speed,Float velocity){
{
		HX_STACK_PUSH("Character::walk","Character.hx",13);
		HX_STACK_THIS(this);
		HX_STACK_ARG(body,"body");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_ARG(velocity,"velocity");
		HX_STACK_LINE(14)
		::nape::geom::Vec2 impulse = ::nape::geom::Vec2_obj::__new(speed,(int)0);		HX_STACK_VAR(impulse,"impulse");
		HX_STACK_LINE(15)
		body->applyImpulse(impulse,null(),null());
		struct _Function_1_1{
			inline static Float Block( ::nape::phys::Body &body){
				HX_STACK_PUSH("*::closure","Character.hx",17);
				{
					struct _Function_2_1{
						inline static ::nape::geom::Vec2 Block( ::nape::phys::Body &body){
							HX_STACK_PUSH("*::closure","Character.hx",17);
							{
								HX_STACK_LINE(17)
								if (((body->zpp_inner->wrap_vel == null()))){
									HX_STACK_LINE(17)
									body->zpp_inner->setupVelocity();
								}
								HX_STACK_LINE(17)
								return body->zpp_inner->wrap_vel;
							}
							return null();
						}
					};
					HX_STACK_LINE(17)
					::nape::geom::Vec2 _this = _Function_2_1::Block(body);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(17)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(17)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(17)
					{
						HX_STACK_LINE(17)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(17)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(17)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(17)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(17)
		if (((_Function_1_1::Block(body) < velocity))){
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body &body){
					HX_STACK_PUSH("*::closure","Character.hx",18);
					{
						HX_STACK_LINE(18)
						if (((body->zpp_inner->wrap_vel == null()))){
							HX_STACK_LINE(18)
							body->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(18)
						return body->zpp_inner->wrap_vel;
					}
					return null();
				}
			};
			HX_STACK_LINE(18)
			::nape::geom::Vec2 _this = _Function_2_1::Block(body);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(18)
			{
				HX_STACK_LINE(18)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(18)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(18)
				{
					HX_STACK_LINE(18)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(18)
					if ((_this1->_immutable)){
						HX_STACK_LINE(18)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(18)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(18)
						_this1->_isimmutable();
					}
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 _this){
						HX_STACK_PUSH("*::closure","Character.hx",18);
						{
							HX_STACK_LINE(18)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(18)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(18)
							{
								HX_STACK_LINE(18)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(18)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(18)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(18)
							return _this->zpp_inner->x;
						}
						return null();
					}
				};
				HX_STACK_LINE(18)
				if (((_Function_3_1::Block(_this) != velocity))){
					HX_STACK_LINE(18)
					if (((velocity != velocity))){
						HX_STACK_LINE(18)
						hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
					}
					HX_STACK_LINE(18)
					_this->zpp_inner->x = velocity;
					HX_STACK_LINE(18)
					{
						HX_STACK_LINE(18)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(18)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(18)
							_this1->_invalidate(_this1);
						}
					}
				}
			}
			HX_STACK_LINE(18)
			{
				HX_STACK_LINE(18)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(18)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(18)
				{
					HX_STACK_LINE(18)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(18)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(18)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(18)
				_this->zpp_inner->x;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Character_obj,walk,(void))

Void Character_obj::render( ){
{
		HX_STACK_PUSH("Character::render","Character.hx",11);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,render,(void))


Character_obj::Character_obj()
{
}

void Character_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Character);
	HX_MARK_END_CLASS();
}

void Character_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Character_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"walk") ) { return walk_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Character_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Character_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("walk"),
	HX_CSTRING("render"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Character_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Character_obj::__mClass,"__mClass");
};

Class Character_obj::__mClass;

void Character_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Character"), hx::TCanCast< Character_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Character_obj::__boot()
{
}

