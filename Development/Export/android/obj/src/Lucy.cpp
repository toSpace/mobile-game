#include <hxcpp.h>

#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Lucy
#include <Lucy.h>
#endif
#ifndef INCLUDED_Settings
#include <Settings.h>
#endif
#ifndef INCLUDED_SpriteObject
#include <SpriteObject.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_aze_display_TileBase
#include <aze/display/TileBase.h>
#endif
#ifndef INCLUDED_aze_display_TileClip
#include <aze/display/TileClip.h>
#endif
#ifndef INCLUDED_aze_display_TileSprite
#include <aze/display/TileSprite.h>
#endif
#ifndef INCLUDED_haxe_Public
#include <haxe/Public.h>
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

Void Lucy_obj::__construct()
{
HX_STACK_PUSH("Lucy::new","Lucy.hx",4);
{
	HX_STACK_LINE(8)
	this->stopped = false;
	HX_STACK_LINE(11)
	super::__construct();
	HX_STACK_LINE(13)
	this->lucy = ::SpriteObject_obj::__new(HX_CSTRING("walking.xml"),HX_CSTRING("walking-sparrow.xml"));
	struct _Function_1_1{
		inline static Float Block( ::Lucy_obj *__this){
			HX_STACK_PUSH("*::closure","Lucy.hx",14);
			{
				struct _Function_2_1{
					inline static ::nape::geom::Vec2 Block( ::Lucy_obj *__this){
						HX_STACK_PUSH("*::closure","Lucy.hx",14);
						{
							HX_STACK_LINE(14)
							::nape::phys::Body _this = __this->lucy->body;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(14)
							if (((_this->zpp_inner->wrap_pos == null()))){
								HX_STACK_LINE(14)
								_this->zpp_inner->setupPosition();
							}
							HX_STACK_LINE(14)
							return _this->zpp_inner->wrap_pos;
						}
						return null();
					}
				};
				HX_STACK_LINE(14)
				::nape::geom::Vec2 _this = _Function_2_1::Block(__this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(14)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(14)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(14)
				{
					HX_STACK_LINE(14)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(14)
					if (((_this1->_validate_dyn() != null()))){
						HX_STACK_LINE(14)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(14)
				return _this->zpp_inner->x;
			}
			return null();
		}
	};
	HX_STACK_LINE(14)
	this->prevX = _Function_1_1::Block(this);
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::nape::phys::Body _this = this->lucy->body;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(15)
		{
			HX_STACK_LINE(15)
			_this->zpp_inner->immutable_midstep((HX_CSTRING("Body::") + ::Std_obj::string(false)));
			HX_STACK_LINE(15)
			if (((!(_this->zpp_inner->norotate) != false))){
				HX_STACK_LINE(15)
				_this->zpp_inner->norotate = true;
				HX_STACK_LINE(15)
				_this->zpp_inner->invalidate_inertia();
			}
		}
		HX_STACK_LINE(15)
		!(_this->zpp_inner->norotate);
	}
}
;
	return null();
}

Lucy_obj::~Lucy_obj() { }

Dynamic Lucy_obj::__CreateEmpty() { return  new Lucy_obj; }
hx::ObjectPtr< Lucy_obj > Lucy_obj::__new()
{  hx::ObjectPtr< Lucy_obj > result = new Lucy_obj();
	result->__construct();
	return result;}

Dynamic Lucy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lucy_obj > result = new Lucy_obj();
	result->__construct();
	return result;}

Void Lucy_obj::render( ){
{
		HX_STACK_PUSH("Lucy::render","Lucy.hx",18);
		HX_STACK_THIS(this);
		HX_STACK_LINE(20)
		this->walk(this->lucy->body,::Settings_obj::flockSpeed,::Settings_obj::flockVelocity);
		struct _Function_1_1{
			inline static Float Block( ::Lucy_obj *__this){
				HX_STACK_PUSH("*::closure","Lucy.hx",23);
				{
					struct _Function_2_1{
						inline static ::nape::geom::Vec2 Block( ::Lucy_obj *__this){
							HX_STACK_PUSH("*::closure","Lucy.hx",23);
							{
								HX_STACK_LINE(23)
								::nape::phys::Body _this = __this->lucy->body;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(23)
								if (((_this->zpp_inner->wrap_pos == null()))){
									HX_STACK_LINE(23)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(23)
								return _this->zpp_inner->wrap_pos;
							}
							return null();
						}
					};
					HX_STACK_LINE(23)
					::nape::geom::Vec2 _this = _Function_2_1::Block(__this);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(23)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(23)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(23)
					{
						HX_STACK_LINE(23)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(23)
						if (((_this1->_validate_dyn() != null()))){
							HX_STACK_LINE(23)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(23)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(23)
		if (((this->prevX == _Function_1_1::Block(this)))){
			HX_STACK_LINE(24)
			this->lucy->clip->stop();
			HX_STACK_LINE(25)
			this->stopped = true;
		}
		struct _Function_1_2{
			inline static Float Block( ::Lucy_obj *__this){
				HX_STACK_PUSH("*::closure","Lucy.hx",28);
				{
					struct _Function_2_1{
						inline static ::nape::geom::Vec2 Block( ::Lucy_obj *__this){
							HX_STACK_PUSH("*::closure","Lucy.hx",28);
							{
								HX_STACK_LINE(28)
								::nape::phys::Body _this = __this->lucy->body;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(28)
								if (((_this->zpp_inner->wrap_pos == null()))){
									HX_STACK_LINE(28)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(28)
								return _this->zpp_inner->wrap_pos;
							}
							return null();
						}
					};
					HX_STACK_LINE(28)
					::nape::geom::Vec2 _this = _Function_2_1::Block(__this);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(28)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(28)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(28)
					{
						HX_STACK_LINE(28)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(28)
						if (((_this1->_validate_dyn() != null()))){
							HX_STACK_LINE(28)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(28)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(28)
		if (((bool((this->prevX != _Function_1_2::Block(this))) && bool((this->stopped == true))))){
			HX_STACK_LINE(28)
			this->lucy->clip->play();
		}
		struct _Function_1_3{
			inline static Float Block( ::Lucy_obj *__this){
				HX_STACK_PUSH("*::closure","Lucy.hx",32);
				{
					struct _Function_2_1{
						inline static ::nape::geom::Vec2 Block( ::Lucy_obj *__this){
							HX_STACK_PUSH("*::closure","Lucy.hx",32);
							{
								HX_STACK_LINE(32)
								::nape::phys::Body _this = __this->lucy->body;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(32)
								if (((_this->zpp_inner->wrap_pos == null()))){
									HX_STACK_LINE(32)
									_this->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(32)
								return _this->zpp_inner->wrap_pos;
							}
							return null();
						}
					};
					HX_STACK_LINE(32)
					::nape::geom::Vec2 _this = _Function_2_1::Block(__this);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(32)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(32)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(32)
					{
						HX_STACK_LINE(32)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(32)
						if (((_this1->_validate_dyn() != null()))){
							HX_STACK_LINE(32)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(32)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		this->prevX = _Function_1_3::Block(this);
		HX_STACK_LINE(34)
		::Camera_obj::follow(this->lucy->body);
	}
return null();
}



Lucy_obj::Lucy_obj()
{
}

void Lucy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lucy);
	HX_MARK_MEMBER_NAME(stopped,"stopped");
	HX_MARK_MEMBER_NAME(prevX,"prevX");
	HX_MARK_MEMBER_NAME(lucy,"lucy");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Lucy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stopped,"stopped");
	HX_VISIT_MEMBER_NAME(prevX,"prevX");
	HX_VISIT_MEMBER_NAME(lucy,"lucy");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Lucy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lucy") ) { return lucy; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"prevX") ) { return prevX; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stopped") ) { return stopped; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lucy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lucy") ) { lucy=inValue.Cast< ::SpriteObject >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"prevX") ) { prevX=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stopped") ) { stopped=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Lucy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stopped"));
	outFields->push(HX_CSTRING("prevX"));
	outFields->push(HX_CSTRING("lucy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("render"),
	HX_CSTRING("stopped"),
	HX_CSTRING("prevX"),
	HX_CSTRING("lucy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lucy_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lucy_obj::__mClass,"__mClass");
};

Class Lucy_obj::__mClass;

void Lucy_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Lucy"), hx::TCanCast< Lucy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Lucy_obj::__boot()
{
}

